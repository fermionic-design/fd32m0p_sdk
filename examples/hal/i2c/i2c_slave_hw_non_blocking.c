//////////////////////////////////////////////////////////////////////////////
////                  I2C SLAVE HARDWARE-MODE NON-BLOCKING TEST           ////
////    DESCRIPTION:                                                      ////
////        DUT is the I2C slave, configured for full-hardware operation  ////
////        (I2C_SLAVE_CFG_HW_MODE): address matching and every byte's    ////
////        ACK/NACK are generated entirely by hardware                   ////
////        (slv_auto_ack_en = slv_addr_auto_ack_en = 1) with both FIFOs  ////
////        enabled. The CPU never inspects or drives an ack value -- its ////
////        only jobs are programming the APB registers once at startup, ////
////        determining read-vs-write direction after each address byte, ////
////        and servicing the RX/TX FIFOs from I2C0_IRQ_Handler.          ////
////                                                                      ////
////    Board Setup:                                                      ////
////        PA11 = SCL, PA0 = SDA, driven by an external I2C master VIP   ////
////        that writes to, and reads from, SLV_ADDR.                    ////
////                                                                      ////
////    Write transactions (master -> slave):                             ////
////        Bytes are captured into echo_buf[] via rxfifo_full (mid-      ////
////        transaction, only reached if the write exceeds the RX FIFO    ////
////        depth) and slv_stop (transaction end). Deliberately draining   ////
////        on "full" rather than "half-full" is what forces a real       ////
////        clock-stretch to happen for writes longer than the FIFO,      ////
////        instead of it being drained away before it can occur.        ////
////                                                                      ////
////    Read transactions (slave -> master):                              ////
////        The slave sends back whatever was captured by the most        ////
////        recent write, byte for byte. If the master reads more bytes   ////
////        than were written, the echo simply wraps back to the start    ////
////        of echo_buf and continues -- tx_echo_idx is taken modulo      ////
////        write_len. TXDATA is refilled on txfifo_empty, again the      ////
////        "hardest" threshold, so a long read genuinely exercises the   ////
////        same clock-stretch path on the TX side.                       ////
////                                                                      ////
////    Direction detection:                                               ////
////        Per slv_start (and per repeated START -- hardware raises the  ////
////        same slv_start event for both), the address+R/W byte is the   ////
////        first rx_done this ISR sees (auto-ack has already handled     ////
////        acking it in hardware). That single byte is drained and       ////
////        discarded, and i2c_slv_rd_wr_sts_get() is called right there  ////
////        to learn the direction (1 = master read, 0 = master write)    ////
////        before any FIFO servicing decisions are made. Every later     ////
////        rx_done in the same phase is an ordinary data byte already    ////
////        being captured by hardware, and is deliberately ignored here  ////
////        -- rxfifo_full/slv_stop do the real draining.                 ////
////                                                                      ////
////    Write -> repeated START (no STOP) -> read, in one transaction:    ////
////        Because a repeated START never raises slv_stop, a write       ////
////        phase's byte count is committed to write_len as soon as the   ////
////        FOLLOWING address+R/W byte is decoded (not only at slv_stop), ////
////        via the write_phase_active flag below. That is what lets the  ////
////        very next read -- still inside the same start/stop bracket -- ////
////        correctly echo back the bytes just written instead of a       ////
////        stale value left over from an earlier, separate transaction.  ////
////    Self-check:                                                       ////
////        This side cannot see the VIP's exact byte pattern (that       ////
////        comparison belongs in the testbench scoreboard against the    ////
////        UART log below), so PASS/FAIL here is protocol-level: no      ////
////        RX-FIFO draining overran echo_buf, at least one write and     ////
////        one read transaction were each seen to complete, and at       ////
////        least one byte was actually echoed back for the read.         ////
////                                                                      ////
////    UVM_TEST build flag:                                               ////
////        When compiled with -DUVM_TEST, every byte captured by a write ////
////        is also mirrored into I2C_TX_FIFO_REF_DATA->rx_data[] -- the  ////
////        shared SRAM reference structure the UVM master VIP reads back ////
////        to compare against what it actually transmitted. This whole   ////
////        mechanism (the header include, the fixed-address struct       ////
////        pointer, and the mirroring writes) compiles out completely    ////
////        when UVM_TEST is left undefined, e.g. when this same file is  ////
////        built to flash a real MCU.                                    ////
////                                                                      ////
////    NEG_TEST_NO_CLKSTRETCH build flag (negative test):                 ////
////        Compiling with -DNEG_TEST_NO_CLKSTRETCH=1 forces               ////
////        slv_clkstretch_en = 0, overriding I2C_SLAVE_CFG_HW_MODE's      ////
////        default of 1. Run against a master VIP write and/or read      ////
////        burst longer than the RX/TX FIFO depth (8), in either         ////
////        start->stop, start->stop or start->repeated-start->stop       ////
////        framing, this is expected to force two DUT-side hardware      ////
////        behaviors with clock stretching unavailable to buy the CPU    ////
////        time:                                                         ////
////          1) Write, RX FIFO full: the slave NACKs the bytes it has no ////
////             room for instead of stretching SCL to wait for this ISR  ////
////             to drain some.                                           ////
////          2) Read, TX FIFO empty: the slave shifts out 0s instead of  ////
////             stretching SCL to wait for this ISR to refill TXDATA.    ////
////        Neither is visible from any DUT-side register (SLAVE_BYTE_ACK ////
////        is write-only, used only when auto-ack is off; there is no    ////
////        slave-side "I just NACK'd" status bit) -- both are only        ////
////        observable from the master VIP's side of the bus, so actually  ////
////        confirming them is the testbench scoreboard's job, same as     ////
////        exact data content always has been in this file. What this    ////
////        flag changes here is only the config bit; echo_buf, the        ////
////        wraparound, and the FIFO-level ISR servicing are unchanged --  ////
////        under this flag, a captured write_len or bytes_echoed_on_read  ////
////        shorter than the VIP's actual burst length is the EXPECTED     ////
////        result of those dropped/underrun bytes, not a bug in this file.////
//////////////////////////////////////////////////////////////////////////////

#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "i2c.h"
#include "gpio.h"
#include "uart.h"

#if UVM_TEST
//#include "i2c_cfg_reg.h"
//I2C_TX_FIFO_REF_DATA_s mirrors the layout the UVM verification environment expects
//at this fixed SRAM address. Defined locally (not pulled from an external,
//verification-only header like i2c_structs.h) because this SDK folder is handed to
//customers standalone and must not depend on files that only exist in the UVM tree.
//If the UVM side's own copy of this struct ever changes layout, update this one to match.
typedef struct I2C_TX_FIFO_REF_DATA_s {
    volatile int      burst_len;
    volatile uint32_t tx_data[20];
    volatile uint32_t rx_data[20];
    volatile uint32_t unexpected_stop;
    volatile uint32_t slv_en;
    volatile uint32_t mst_en;
} I2C_TX_FIFO_REF_DATA_s;
#define I2C_TX_FIFO_REF_DATA ((I2C_TX_FIFO_REF_DATA_s *) 0x20000C00)   // UVM VIP reference-data SRAM
#endif

#define SLV_ADDR 0x55   // must match whatever address the testbench's master VIP targets

uint8_t echo_buf[255];              // last write's payload; echoed back on the next read(s)

volatile uint16_t write_len              = 0;       // valid byte count currently in echo_buf
volatile uint16_t cur_write_idx          = 0;       // write-in-progress cursor into echo_buf
volatile uint16_t tx_echo_idx            = 0;       // read-in-progress cursor, wraps mod write_len
volatile uint16_t rxfifo_full_event_count = 0;
volatile bool     direction_known        = false;
volatile bool     slv_read_active        = false;
volatile bool     write_phase_active     = false;   // true while an uncommitted write phase is open
volatile bool     overflow_detected      = false;
volatile bool     write_seen             = false;
volatile bool     read_seen              = false;

static void drain_available_write_bytes(void)
{
    if (cur_write_idx >= sizeof(echo_buf))
    {
        overflow_detected = true;
        return;
    }

    uint16_t start = cur_write_idx;
    cur_write_idx += i2c_rxfifo_drain_nonblocking(I2C0_REGS, &echo_buf[cur_write_idx], sizeof(echo_buf) - cur_write_idx);

#if UVM_TEST
    //Mirror every newly-captured byte into the UVM reference-data SRAM so the
    //master VIP can check it against what it actually transmitted. Bounded by
    //the reference struct's own array depth, not echo_buf's, since the two
    //can differ.
    uint16_t ref_depth = sizeof(I2C_TX_FIFO_REF_DATA->rx_data) / sizeof(I2C_TX_FIFO_REF_DATA->rx_data[0]);
    for (uint16_t i = start; i < cur_write_idx && i < ref_depth; i++)
    {
        I2C_TX_FIFO_REF_DATA->rx_data[i] = echo_buf[i];
    }
#endif
}

static void refill_tx_fifo(void)
{
    if (write_len == 0)
    {
        return;   // nothing has ever been written yet -- nothing to echo
    }
    while (!I2C0_REGS->FIFO_STS.txfifo_full)
    {
        uint8_t byte_to_send = echo_buf[tx_echo_idx % write_len];
        if (i2c_txfifo_fill_nonblocking(I2C0_REGS, &byte_to_send, 1) == 0)
        {
            break;   // FIFO reported full between the check and the write; stop here
        }
        tx_echo_idx++;
    }
}

//Called from the first rx_done OR first txfifo_empty of a phase -- by that point the
//address+R/W byte has definitely already resolved in hardware, so the status read is
//valid. Latches direction_known so it only runs once per phase.
static void establish_direction_if_unknown(void)
{
    if (direction_known)
    {
        return;
    }
    direction_known = true;

    if (i2c_slv_rd_wr_sts_get(I2C0_REGS))
    {
        //Master wants to READ: echo from whatever the last completed write captured
        slv_read_active = true;
        tx_echo_idx     = 0;

        if (write_phase_active)
        {
            //The write phase we're now leaving ended via a repeated START, not a
            //STOP, so it never went through the slv_stop commit below. Drain any
            //bytes hardware hasn't handed off yet, then commit, so this read
            //echoes the bytes just written instead of missing the tail end.
            drain_available_write_bytes();
            write_len          = cur_write_idx;
            write_seen         = true;
            write_phase_active = false;
        }
    }
    else
    {
        //Master wants to WRITE: start capturing fresh data at index 0
        slv_read_active    = false;
        write_phase_active = true;
        cur_write_idx       = 0;
        overflow_detected   = false;
    }
}

int main(void)
{
    UartStdOutInit();
    UartPuts("I2C SLV HW\n");

    //Default Structs
    IOMUX_PA_REG_s    iomux_cfg_struct_i2c;
    i2c_counter_cfg_t i2c_counter_cfg_struct = I2C_COUNTER_CFG_DEFAULT_100Khz;
    i2c_slv_cfg_t     i2c_slv_cfg_struct     = I2C_SLAVE_CFG_HW_MODE;

    i2c_slv_cfg_struct.slv_addr1 = SLV_ADDR;

#if NEG_TEST_NO_CLKSTRETCH
    //Negative test: no clock stretching, so bursts longer than the FIFO depth (8)
    //are expected to NACK (write) / underrun to 0s (read) instead of pausing SCL --
    //see the header comment above for why that's only checkable from the VIP side.
    i2c_slv_cfg_struct.slv_clkstretch_en = 0;
    UartPuts("Negative test mode: slave clock stretch disabled\n");
#endif

    //Set GPIO Configuration SCL
    iomux_cfg_struct_i2c.output_en = 0;
    iomux_cfg_struct_i2c.input_en  = 1;
    iomux_cfg_struct_i2c.sel       = IOMUX_PIN_SEL_PA1_I2C0_SCL;

    iomux_cfg(IOMUX_REGS, &iomux_cfg_struct_i2c, 1);

    //Set GPIO Configuration SDA
    iomux_cfg_struct_i2c.output_en = 0;
    iomux_cfg_struct_i2c.input_en  = 1;
    iomux_cfg_struct_i2c.sel       = IOMUX_PIN_SEL_PA0_I2C0_SDA;

    iomux_cfg(IOMUX_REGS, &iomux_cfg_struct_i2c, 0);

    //I2C Power Enable
    I2C_PWR_EN_WRITE(I2C0_REGS, 1, I2C_PWR_EN_PWR_EN_KEY);

    //Clock Select & Clock Div
    i2c_clk_cfg_set(I2C0_REGS, I2C_CLK_CTRL_CLKSEL_AHB, 2);

    //Clock Count Configuration
    i2c_counter_cfg_set(I2C0_REGS, &i2c_counter_cfg_struct);

    //Interrupts:
    //  slv_start       -- marks that the next rx_done is the address+R/W byte
    //  rx_done         -- used ONLY to catch that address+R/W byte and learn
    //                      direction; ignored for every later data byte
    //  rxfifo_full     -- bulk-drains write data exactly when hardware is
    //                      clock-stretching on it
    //  txfifo_empty    -- refills echoed read data exactly when hardware is
    //                      clock-stretching waiting for the next byte to send
    //  slv_stop        -- closes out whichever direction was active
    I2C_INTR_EVENT_EN(I2C0_REGS, I2C_INTR_EVENT_SLV_START_IDX);
    I2C_INTR_EVENT_EN(I2C0_REGS, I2C_INTR_EVENT_RX_DONE_IDX);
    I2C_INTR_EVENT_EN(I2C0_REGS, I2C_INTR_EVENT_RXFIFO_FULL_IDX);
    I2C_INTR_EVENT_EN(I2C0_REGS, I2C_INTR_EVENT_TXFIFO_EMPTY_IDX);
    I2C_INTR_EVENT_EN(I2C0_REGS, I2C_INTR_EVENT_SLV_STOP_IDX);

    NVIC_ClearPendingIRQ(I2C0_IRQn);
    NVIC_EnableIRQ(I2C0_IRQn);

    //I2C Slave Configurations (hardware mode: auto ack/nack, FIFOs enabled)
    i2c_slv_cfg_set(I2C0_REGS, &i2c_slv_cfg_struct);

    //Glitch
    i2c_glitch_width_cfg_set(I2C0_REGS, 2);

    //Enable Slave
    i2c_slv_enable(I2C0_REGS);

#if UVM_TEST
    I2C_TX_FIFO_REF_DATA->slv_en = 0x1;   // tells the UVM master VIP the DUT is ready
#endif

    while (!(write_seen && read_seen));

    UartPuts("-- echo_buf captured from the master's write --\n");
    for (uint16_t i = 0; i < write_len; i++)
    {
        print_int_var("echo_buf", echo_buf[i], 1);
    }
    print_int_var("write_len", write_len, 0);
    print_int_var("bytes_echoed_on_read", tx_echo_idx, 0);
    print_int_var("clock_stretch_events (rxfifo_full hits)", rxfifo_full_event_count, 0);

    if (!overflow_detected && write_len > 0 && tx_echo_idx > 0)
    {
        UartPuts("-- TEST PASSED --\n");
        UartPass();
    }
    else
    {
        UartPuts("** TEST FAILED **\n");
        UartFail();
    }

    UartPuts("** End of Simulation **\n");
    UartEndSimulation();
    return 0;
}

void I2C0_IRQ_Handler(void)
{
    uint32_t intr_sts = I2C0_REGS->INTR_STS.packed_w;

    switch (intr_sts)
    {
        case I2C_INTR_EVENT_SLV_START_IDX + 1:
            //Direction for the phase this START (initial or repeated) is opening
            //isn't known yet -- it gets latched by establish_direction_if_unknown()
            //from whichever of rx_done/txfifo_empty fires first below.
            direction_known = false;
            I2C_INTR_EVENT_CLEAR(I2C0_REGS, I2C_INTR_EVENT_SLV_START_IDX);
            break;

        case I2C_INTR_EVENT_RX_DONE_IDX + 1:
            //Only ever fires for a real data byte in HW mode (never the address+R/W
            //byte), so its mere occurrence already confirms write direction.
            establish_direction_if_unknown();
            I2C_INTR_EVENT_CLEAR(I2C0_REGS, I2C_INTR_EVENT_RX_DONE_IDX);
            break;

        case I2C_INTR_EVENT_RXFIFO_FULL_IDX + 1:
            rxfifo_full_event_count++;
            drain_available_write_bytes();   // relieves the clock-stretch hardware just engaged
            I2C_INTR_EVENT_CLEAR(I2C0_REGS, I2C_INTR_EVENT_RXFIFO_FULL_IDX);
            break;

        case I2C_INTR_EVENT_TXFIFO_EMPTY_IDX + 1:
            //With slv_txempty_intr_on_tx_req = REQUIRED, this only fires while
            //genuinely clock-stretching for TX data, i.e. only during a real read.
            establish_direction_if_unknown();
            refill_tx_fifo();   // relieves the clock-stretch hardware just engaged
            I2C_INTR_EVENT_CLEAR(I2C0_REGS, I2C_INTR_EVENT_TXFIFO_EMPTY_IDX);
            break;

        case I2C_INTR_EVENT_SLV_STOP_IDX + 1:
            if (slv_read_active)
            {
                read_seen = true;
            }
            else if (write_phase_active)
            {
                //Write ended with a real STOP (no repeated-start read followed it
                //in this transaction) -- commit it here instead.
                drain_available_write_bytes();   // pick up whatever didn't trigger rxfifo_full
                write_len          = cur_write_idx;
                write_seen         = true;
                write_phase_active = false;
            }
            I2C_INTR_EVENT_CLEAR(I2C0_REGS, I2C_INTR_EVENT_SLV_STOP_IDX);
            break;
    }
}
