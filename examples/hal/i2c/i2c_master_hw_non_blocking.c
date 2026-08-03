//////////////////////////////////////////////////////////////////////////////
////                  I2C MASTER HARDWARE-MODE NON-BLOCKING TEST          ////
////    DESCRIPTION:                                                      ////
////        DUT is the I2C master, configured for full-hardware operation  ////
////        (I2C_MASTER_CFG_HW_MODE): both TX and RX FIFOs enabled, and    ////
////        auto-ack handling the last-byte NACK-before-STOP timing        ////
////        (mst_auto_ack_en = 1) once software has pre-loaded             ////
////        MASTER_ACK_VAL. The CPU never polls a status register -- its  ////
////        only jobs are programming the APB registers once at startup,  ////
////        then driving the whole write -> read sequence purely from     ////
////        I2C0_IRQ_Handler (see the REPEATED_START_TEST knob below for   ////
////        whether that sequence is one bracket or two).                  ////
////                                                                      ////
////    Board Setup:                                                      ////
////        PA11 = SCL, PA0 = SDA, driven against an external I2C slave    ////
////        VIP at SLV_ADDR that echoes back whatever it was last written  ////
////        with (see i2c_slave_hw_non_blocking.c for the matching DUT-    ////
////        side echo behavior this test's self-check assumes of its peer).////
////                                                                      ////
////    Burst-length knob:                                                 ////
////        Set -DBURST_LEN=<0|1|2|3> to choose MST_WRITE_BURST_LEN (and,   ////
////        by default, MST_READ_BURST_LEN too):                           ////
////          BURST_LEN == 0 -> 0-byte burst (address-only "quick command", ////
////                            no data phase at all)                      ////
////          BURST_LEN == 1 -> 1-byte burst                                ////
////          BURST_LEN == 2 -> 2-byte burst                                ////
////          BURST_LEN == 3 (default) -> a fixed value > 8 (the FIFO       ////
////                            depth), to exercise clock-stretch on both   ////
////                            TX and RX                                   ////
////        tx_pattern[]/rx_capture[] are sized to a fixed MST_BUF_CAP      ////
////        regardless of the knob, so BURST_LEN==0 never produces a       ////
////        (non-standard) zero-length array. MST_READ_BURST_LEN can be    ////
////        edited independently of MST_WRITE_BURST_LEN if you want to     ////
////        additionally exercise the peer's read-side wraparound (see     ////
////        tx_pattern indexing below).                                    ////
////                                                                      ////
////    Write phase (master -> slave):                                    ////
////        i2c_mst_byte_lvl_transfer_addr_rdwr() arms START+address+      ////
////        WRITE+burst-length in one shot; TXDATA is pre-filled           ////
////        immediately afterward (up to FIFO depth) rather than waiting   ////
////        for an interrupt, since nothing needs to complete first. Only  ////
////        tx_done is used per-byte, purely to COUNT (address byte + N    ////
////        data bytes) so the ISR knows precisely when the burst has      ////
////        fully shifted out -- actually supplying more data for bursts   ////
////        over 8 bytes happens via txfifo_empty, the "hardest" FIFO      ////
////        threshold, so a long write genuinely clock-stretches instead   ////
////        of always staying topped up.                                  ////
////                                                                      ////
////    Framing knob -- REPEATED_START_TEST (default OFF):                 ////
////        Once tx_done_cnt reaches MST_WRITE_BURST_LEN + 1 (the "+1" is  ////
////        the address byte), the write phase is complete and the ISR     ////
////        pre-loads MASTER_ACK_VAL = NACK (auto-ack then applies it to    ////
////        the last RX byte with no further software timing needed).      ////
////        What happens next depends on this build flag:                  ////
////          undefined/0 (default) -- write -> STOP -> read -> STOP: the  ////
////            write phase's own STOP is asserted here, and the READ      ////
////            command (a fresh START) is only issued from the            ////
////            mst_stop_intr handler once that STOP has actually landed   ////
////            and the bus is free again -- two separate transactions.   ////
////          -DREPEATED_START_TEST=1 -- write -> repeated START -> read -> ////
////            STOP: the READ command is issued immediately, right here,  ////
////            with no STOP for the write at all -- one transaction, one   ////
////            start/stop bracket.                                        ////
////        write_stop_seen (below) distinguishes the two STOPs that occur ////
////        in the default framing so the mst_stop_intr handler knows      ////
////        whether to kick off the read phase or end the test.             ////
////                                                                      ////
////    Read phase (slave -> master):                                      ////
////        rx_done is likewise used only to COUNT received bytes; bulk    ////
////        draining into rx_capture[] happens on rxfifo_full (again the   ////
////        "hardest" threshold, for the same clock-stretch reason as the  ////
////        write side). Once rx_done_cnt reaches MST_READ_BURST_LEN, the  ////
////        ISR drains whatever's left, then issues STOP.                 ////
////                                                                      ////
////        MST_READ_BURST_LEN == 0 is a special case: no data byte ever   ////
////        arrives, so rx_done never fires at all. Completion instead     ////
////        falls back to the read phase's OWN address+R/W byte's tx_done  ////
////        (tx_done_cnt reaching MST_WRITE_BURST_LEN + 2), tracked via     ////
////        read_addr_done below. This assumes tx_done fires for a read-   ////
////        direction address byte the same way it does for a write-       ////
////        direction one -- inferred by symmetry of the underlying        ////
////        hardware event, not independently confirmed, since the         ////
////        original blocking-mode master example never needed to wait on  ////
////        it for the read case. Worth confirming if you rely on          ////
////        BURST_LEN==0 specifically.                                     ////
////                                                                      ////
////    Self-check:                                                       ////
////        Unlike the master-only and slave-only non-blocking tests in    ////
////        this directory, THIS test can fully verify data content on     ////
////        its own: it is both the source of tx_pattern[] and the         ////
////        receiver of rx_capture[], with no external oracle needed.      ////
////        Each received byte is compared against                        ////
////        tx_pattern[i % MST_WRITE_BURST_LEN] -- the modulo matches the   ////
////        slave DUT's own wraparound rule, so this passes whether        ////
////        MST_READ_BURST_LEN is shorter, equal to, or longer than        ////
////        MST_WRITE_BURST_LEN. PASS/FAIL also requires no unexpected     ////
////        mst_nack and that the full write/read burst lengths completed. ////
////                                                                      ////
////    UVM_TEST build flag:                                               ////
////        When compiled with -DUVM_TEST, tx_pattern[] is mirrored into   ////
////        I2C_TX_FIFO_REF_DATA->tx_data[] up front (what the master is   ////
////        about to send) and every byte rx_capture[] receives is         ////
////        mirrored into ->rx_data[] as it arrives -- the shared SRAM     ////
////        reference structure a UVM scoreboard can cross-check against   ////
////        the slave VIP's own records. mst_en is also raised the same    ////
////        way i2c_slave_hw_non_blocking.c raises slv_en. A stop seen      ////
////        before both burst counts have completed is flagged via         ////
////        ->unexpected_stop. This whole mechanism compiles out           ////
////        completely when UVM_TEST is left undefined.                    ////
//////////////////////////////////////////////////////////////////////////////

#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "i2c.h"
#include "gpio.h"
#include "uart.h"

#if UVM_TEST
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

#define SLV_ADDR 0x55   // must match whatever address the testbench's slave VIP responds to

//Burst-length knob -- see header comment above for the BURST_LEN -> length mapping
#ifndef BURST_LEN
#define BURST_LEN 3
#endif

#if   BURST_LEN == 0
#define MST_WRITE_BURST_LEN 0
#elif BURST_LEN == 1
#define MST_WRITE_BURST_LEN 1
#elif BURST_LEN == 2
#define MST_WRITE_BURST_LEN 2
#else
#define MST_WRITE_BURST_LEN 12   // > 8 (FIFO depth)
#endif

#define MST_READ_BURST_LEN MST_WRITE_BURST_LEN   // read back exactly what was written by default

//Framing knob -- see header comment above. Default OFF: write -> STOP -> read -> STOP
//(two separate transactions). -DREPEATED_START_TEST=1: write -> repeated START ->
//read -> STOP (one transaction, no STOP between the write and read phases).
#ifndef REPEATED_START_TEST
#define REPEATED_START_TEST 0
#endif

//Fixed capacity, independent of the knob above, so MST_WRITE_BURST_LEN==0 never
//produces a zero-length array; matches the UVM reference struct's own 20-entry bound.
#define MST_BUF_CAP 20

uint8_t tx_pattern[MST_BUF_CAP];
uint8_t rx_capture[MST_BUF_CAP];

volatile uint16_t tx_push_idx            = 0;   // bytes handed to the TX FIFO so far
volatile uint16_t tx_done_cnt            = 0;   // tx_done events seen (both address bytes + write data)
volatile uint16_t rx_pop_idx             = 0;   // bytes drained from the RX FIFO so far
volatile uint16_t rx_done_cnt            = 0;   // rx_done events seen (data bytes only)
volatile uint16_t rxfifo_full_event_count = 0;
volatile uint16_t txfifo_empty_event_count = 0;
volatile bool     mst_nack_seen          = false;
volatile bool     read_addr_done         = false;   // read phase's own address byte tx_done seen
volatile bool     write_stop_seen        = false;   // (default framing only) write phase's own STOP has landed
volatile bool     txn_done               = false;

static void refill_tx_fifo(void)
{
    while (tx_push_idx < MST_WRITE_BURST_LEN && !I2C0_REGS->FIFO_STS.txfifo_full)
    {
        uint8_t byte_to_send = tx_pattern[tx_push_idx];
        if (i2c_txfifo_fill_nonblocking(I2C0_REGS, &byte_to_send, 1) == 0)
        {
            break;   // FIFO reported full between the check and the write; stop here
        }
        tx_push_idx++;
    }
}

static void drain_available_rx_bytes(void)
{
    if (rx_pop_idx >= MST_READ_BURST_LEN)
    {
        return;   // already have everything this read burst asked for
    }

    uint16_t start = rx_pop_idx;
    rx_pop_idx += i2c_rxfifo_drain_nonblocking(I2C0_REGS, &rx_capture[rx_pop_idx], MST_READ_BURST_LEN - rx_pop_idx);

#if UVM_TEST
    //Mirror every newly-captured byte into the UVM reference-data SRAM so the
    //scoreboard can check it against the slave VIP's own record of what it sent.
    uint16_t ref_depth = sizeof(I2C_TX_FIFO_REF_DATA->rx_data) / sizeof(I2C_TX_FIFO_REF_DATA->rx_data[0]);
    for (uint16_t i = start; i < rx_pop_idx && i < ref_depth; i++)
    {
        I2C_TX_FIFO_REF_DATA->rx_data[i] = rx_capture[i];
    }
#endif
}

//Completion for the read phase is gated on BOTH its own address byte having been
//seen (read_addr_done) AND all data bytes counted -- needed as two separate
//conditions because MST_READ_BURST_LEN == 0 never produces a data-byte rx_done at
//all, so read_addr_done is the ONLY signal available in that case.
static void finish_read_phase_if_done(void)
{
    if (read_addr_done && rx_done_cnt == MST_READ_BURST_LEN)
    {
        drain_available_rx_bytes();
        i2c_mst_byte_lvl_transfer_stop(I2C0_REGS);
        i2c_mst_cmd_vld(I2C0_REGS);
    }
}

int main(void)
{
    UartStdOutInit();
    UartPuts("I2C MST Hardware-Mode Non-Blocking Test\n");

    //Default Structs
    IOMUX_PA_REG_s    iomux_cfg_struct_i2c;
    i2c_counter_cfg_t i2c_counter_cfg_struct = I2C_COUNTER_CFG_DEFAULT_100Khz;
    i2c_mst_cfg_t     i2c_mst_cfg_struct     = I2C_MASTER_CFG_HW_MODE;

    //Deterministic write pattern -- this test is its own oracle for the read-back check
    for (uint16_t i = 0; i < MST_WRITE_BURST_LEN; i++)
    {
        tx_pattern[i] = (uint8_t)(0x10 + i);
    }

#if UVM_TEST
    //Tell the scoreboard up front what the master is about to send
    uint16_t tx_ref_depth = sizeof(I2C_TX_FIFO_REF_DATA->tx_data) / sizeof(I2C_TX_FIFO_REF_DATA->tx_data[0]);
    for (uint16_t i = 0; i < MST_WRITE_BURST_LEN && i < tx_ref_depth; i++)
    {
        I2C_TX_FIFO_REF_DATA->tx_data[i] = tx_pattern[i];
    }
    I2C_TX_FIFO_REF_DATA->burst_len = MST_WRITE_BURST_LEN;
#endif

    //Set GPIO Configuration SCL
    iomux_cfg_struct_i2c.output_en = 0;
    iomux_cfg_struct_i2c.input_en  = 1;
    iomux_cfg_struct_i2c.sel       = IOMUX_PIN_SEL_PA1_I2C0_SCL;
    iomux_cfg_struct_i2c.pull_up   = 1;
    iomux_cfg_struct_i2c.pull_down = 0;

    iomux_cfg(IOMUX_REGS, &iomux_cfg_struct_i2c, 1);

    //Set GPIO Configuration SDA
    iomux_cfg_struct_i2c.output_en = 0;
    iomux_cfg_struct_i2c.input_en  = 1;
    iomux_cfg_struct_i2c.sel       = IOMUX_PIN_SEL_PA0_I2C0_SDA;
    iomux_cfg_struct_i2c.pull_up   = 1;
    iomux_cfg_struct_i2c.pull_down = 0;

    iomux_cfg(IOMUX_REGS, &iomux_cfg_struct_i2c, 0);

    //I2C Power Enable
    I2C_PWR_EN_WRITE(I2C0_REGS, 1, I2C_PWR_EN_PWR_EN_KEY);

    //Clock Select & Clock Div
    i2c_clk_cfg_set(I2C0_REGS, I2C_CLK_CTRL_CLKSEL_AHB, 2);

    //Clock Count Configuration
    i2c_counter_cfg_set(I2C0_REGS, &i2c_counter_cfg_struct);

    //I2C Master Configurations (hardware mode: both FIFOs enabled, auto-ack)
    i2c_mst_cfg_set(I2C0_REGS, &i2c_mst_cfg_struct);

    //Glitch
    i2c_glitch_width_cfg_set(I2C0_REGS, 2);

    //Interrupts:
    //  tx_done         -- counts address+data bytes shifted out, to know when the
    //                      write burst is fully done (no polling of a byte counter)
    //  txfifo_empty    -- bulk-refills write data exactly when hardware is
    //                      clock-stretching on it
    //  mst_nack        -- flags an unexpected NACK from the slave during the write
    //  rx_done         -- counts data bytes received, to know when the read burst
    //                      is fully done
    //  rxfifo_full     -- bulk-drains read data exactly when hardware is
    //                      clock-stretching on it
    //  mst_stop_intr   -- REPEATED_START_TEST: marks the whole transaction complete.
    //                     Default framing: the FIRST one closes out the write phase
    //                     and kicks off the read as a fresh START; the SECOND marks
    //                     the whole test complete (see write_stop_seen).
    I2C_INTR_EVENT_EN(I2C0_REGS, I2C_INTR_EVENT_TX_DONE_IDX);
    I2C_INTR_EVENT_EN(I2C0_REGS, I2C_INTR_EVENT_TXFIFO_EMPTY_IDX);
    I2C_INTR_EVENT_EN(I2C0_REGS, I2C_INTR_EVENT_MST_NACK_IDX);
    I2C_INTR_EVENT_EN(I2C0_REGS, I2C_INTR_EVENT_RX_DONE_IDX);
    I2C_INTR_EVENT_EN(I2C0_REGS, I2C_INTR_EVENT_RXFIFO_FULL_IDX);
    I2C_INTR_EVENT_EN(I2C0_REGS, I2C_INTR_EVENT_MST_STOP_INTR_IDX);

    NVIC_ClearPendingIRQ(I2C0_IRQn);
    NVIC_EnableIRQ(I2C0_IRQn);

    //Enable Master
    i2c_mst_enable(I2C0_REGS);

#if UVM_TEST
    I2C_TX_FIFO_REF_DATA->mst_en = 0x1;   // tells the slave VIP the DUT is ready
#endif

    //Kick off the write burst: START + address + WRITE + MST_WRITE_BURST_LEN.
    //Everything from here on is driven by I2C0_IRQ_Handler.
    i2c_mst_byte_lvl_transfer_addr_rdwr(I2C0_REGS, SLV_ADDR, I2C_MASTER_CTRL_MST_DIR_WRITE, MST_WRITE_BURST_LEN);
    refill_tx_fifo();   // prime the FIFO now; nothing needs to complete first

    while (!txn_done);

    UartPuts("-- tx_pattern sent on the write --\n");
    for (uint16_t i = 0; i < tx_push_idx; i++)
    {
        print_int_var("tx_pattern", tx_pattern[i], 1);
    }
    UartPuts("-- rx_capture received on the read --\n");
    for (uint16_t i = 0; i < rx_pop_idx; i++)
    {
        print_int_var("rx_capture", rx_capture[i], 1);
    }

    uint16_t mismatch_count = 0;
    if (MST_WRITE_BURST_LEN > 0)
    {
        for (uint16_t i = 0; i < rx_pop_idx; i++)
        {
            if (rx_capture[i] != tx_pattern[i % MST_WRITE_BURST_LEN])
            {
                mismatch_count++;
            }
        }
    }
    else
    {
        //Nothing was ever written to echo from -- any byte received here at all
        //(only possible if MST_READ_BURST_LEN was overridden independently to be
        //nonzero) is itself a mismatch, and would otherwise be a modulo-by-zero above.
        mismatch_count = rx_pop_idx;
    }

    print_int_var("mismatch_count", mismatch_count, 0);
    print_int_var("clock_stretch_events_tx (txfifo_empty hits)", txfifo_empty_event_count, 0);
    print_int_var("clock_stretch_events_rx (rxfifo_full hits)", rxfifo_full_event_count, 0);

    if (!mst_nack_seen && mismatch_count == 0 &&
        tx_push_idx == MST_WRITE_BURST_LEN && rx_pop_idx == MST_READ_BURST_LEN)
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
        case I2C_INTR_EVENT_TX_DONE_IDX + 1:
            tx_done_cnt++;
            I2C_INTR_EVENT_CLEAR(I2C0_REGS, I2C_INTR_EVENT_TX_DONE_IDX);
            if (tx_done_cnt == MST_WRITE_BURST_LEN + 1)   // +1 for the write phase's address byte
            {
                //Whole write burst has physically shifted out.
#if REPEATED_START_TEST
                //Turn the bus around with a repeated START directly into the read
                //phase -- no STOP is ever issued for the write.
                i2c_mst_byte_lvl_transfer_ackval(I2C0_REGS, I2C_MASTER_ACK_VAL_MST_ACKVAL_NACK);
                i2c_mst_byte_lvl_transfer_addr_rdwr(I2C0_REGS, SLV_ADDR, I2C_MASTER_CTRL_MST_DIR_READ, MST_READ_BURST_LEN);
#else
                //Close the write out with a real STOP; the read phase is kicked off
                //as a fresh START from the mst_stop_intr handler below, once this
                //STOP has actually landed and the bus is free again.
                i2c_mst_byte_lvl_transfer_stop(I2C0_REGS);
                i2c_mst_cmd_vld(I2C0_REGS);
#endif
            }
            else if (tx_done_cnt == MST_WRITE_BURST_LEN + 2)   // the read phase's OWN address byte
            {
                //Needed as the sole completion signal when MST_READ_BURST_LEN == 0,
                //since no data-byte rx_done would ever fire in that case.
                read_addr_done = true;
                finish_read_phase_if_done();
            }
            break;

        case I2C_INTR_EVENT_TXFIFO_EMPTY_IDX + 1:
            txfifo_empty_event_count++;
            refill_tx_fifo();   // relieves the clock-stretch hardware just engaged
            I2C_INTR_EVENT_CLEAR(I2C0_REGS, I2C_INTR_EVENT_TXFIFO_EMPTY_IDX);
            break;

        case I2C_INTR_EVENT_MST_NACK_IDX + 1:
            mst_nack_seen = true;
            I2C_INTR_EVENT_CLEAR(I2C0_REGS, I2C_INTR_EVENT_MST_NACK_IDX);
            break;

        case I2C_INTR_EVENT_RX_DONE_IDX + 1:
            rx_done_cnt++;
            I2C_INTR_EVENT_CLEAR(I2C0_REGS, I2C_INTR_EVENT_RX_DONE_IDX);
            //Whole read burst has arrived once this reaches MST_READ_BURST_LEN --
            //finish_read_phase_if_done() picks up any remainder that never triggered
            //rxfifo_full, then closes the transaction with STOP.
            finish_read_phase_if_done();
            break;

        case I2C_INTR_EVENT_RXFIFO_FULL_IDX + 1:
            rxfifo_full_event_count++;
            drain_available_rx_bytes();   // relieves the clock-stretch hardware just engaged
            I2C_INTR_EVENT_CLEAR(I2C0_REGS, I2C_INTR_EVENT_RXFIFO_FULL_IDX);
            break;

        case I2C_INTR_EVENT_MST_STOP_INTR_IDX + 1:
            I2C_INTR_EVENT_CLEAR(I2C0_REGS, I2C_INTR_EVENT_MST_STOP_INTR_IDX);
#if REPEATED_START_TEST
            //Only one STOP ever occurs in this framing -- it ends the whole transaction.
#if UVM_TEST
            if (!read_addr_done || tx_done_cnt != MST_WRITE_BURST_LEN + 2 || rx_done_cnt != MST_READ_BURST_LEN)
            {
                I2C_TX_FIFO_REF_DATA->unexpected_stop = 1;   // stop landed before both bursts finished
            }
#endif
            txn_done = true;
#else
            if (!write_stop_seen)
            {
                //This STOP closed out the write phase -- the bus is free again, so
                //start the read phase as a genuinely fresh START (not repeated).
                write_stop_seen = true;
                i2c_mst_byte_lvl_transfer_ackval(I2C0_REGS, I2C_MASTER_ACK_VAL_MST_ACKVAL_NACK);
                i2c_mst_byte_lvl_transfer_addr_rdwr(I2C0_REGS, SLV_ADDR, I2C_MASTER_CTRL_MST_DIR_READ, MST_READ_BURST_LEN);
            }
            else
            {
                //This is the read phase's own STOP -- the whole test is done.
#if UVM_TEST
                if (!read_addr_done || rx_done_cnt != MST_READ_BURST_LEN)
                {
                    I2C_TX_FIFO_REF_DATA->unexpected_stop = 1;   // stop landed before the read burst finished
                }
#endif
                txn_done = true;
            }
#endif
            break;
    }
}
