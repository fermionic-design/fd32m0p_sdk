//////////////////////////////////////////////////////////////////////////////
////                     I2C MASTER NON-BLOCKING TEST                     ////
////    DESCRIPTION:                                                      ////
////        Master writes a byte pattern to an external slave device      ////
////        using the interrupt-driven (non-blocking) HAL flow, instead   ////
////        of the i2c_wait_for_*() blocking helpers. All FIFO servicing  ////
////        happens in I2C0_IRQ_Handler; main() only sets up the core     ////
////        and idles until the ISR reports the transfer is complete.     ////
////                                                                      ////
////    Board Setup:                                                      ////
////        PA11 = SCL, PA0 = SDA, wired to an external I2C slave         ////
////        device at SLV_ADDR (with bus pull-ups present).               ////
////                                                                      ////
////    Self-check:                                                       ////
////        This side of the bus cannot see the slave's internal data,    ////
////        so PASS/FAIL is based on protocol-level correctness: the      ////
////        expected number of bytes were pushed out and no unexpected    ////
////        NACK was received from the slave.                             ////
//////////////////////////////////////////////////////////////////////////////

#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "i2c.h"
#include "gpio.h"
#include "uart.h"

#define SLV_ADDR    0x50   // external slave device address - update to match your target

uint8_t mem_reg[4] = {0x12, 0x34, 0x56, 0x78};
uint8_t number_of_bytes_to_write_to_slave = 4;

volatile uint8_t byte_cnt      = 0;
volatile bool    mst_nack_seen = false;
volatile bool    transfer_done = false;

int main(void)
{
    UartStdOutInit();
    UartPuts("I2C MST Non-Blocking Test\n");

    //Default Structs
    IOMUX_PA_REG_s   iomux_cfg_struct_i2c;
    i2c_counter_cfg_t i2c_counter_cfg_struct = I2C_COUNTER_CFG_DEFAULT_100Khz;
    i2c_mst_cfg_t     i2c_mst_cfg_struct     = I2C_MASTER_CFG_DEFAULT;

    //Set GPIO Configuration SCL
    iomux_cfg_struct_i2c.output_en = 0;
    iomux_cfg_struct_i2c.input_en  = 1;
    iomux_cfg_struct_i2c.sel       = IOMUX_PIN_SEL_PA11_I2C0_SCL;
    iomux_cfg_struct_i2c.pull_up   = 1;
    iomux_cfg_struct_i2c.pull_down = 0;

    iomux_cfg(IOMUX_REGS, &iomux_cfg_struct_i2c, 11);

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

    //I2C Master Configurations
    i2c_mst_cfg_set(I2C0_REGS, &i2c_mst_cfg_struct);

    //Glitch
    i2c_glitch_width_cfg_set(I2C0_REGS, 2);

    //Interrupts: tx_done drives the FIFO fill loop, mst_stop_intr signals transfer
    //completion, mst_nack catches an unexpected NACK from the slave
    I2C_INTR_EVENT_EN(I2C0_REGS, I2C_INTR_EVENT_TX_DONE_IDX);
    I2C_INTR_EVENT_EN(I2C0_REGS, I2C_INTR_EVENT_MST_STOP_INTR_IDX);
    I2C_INTR_EVENT_EN(I2C0_REGS, I2C_INTR_EVENT_MST_NACK_IDX);

    NVIC_ClearPendingIRQ(I2C0_IRQn);
    NVIC_EnableIRQ(I2C0_IRQn);

    //Enable Master
    i2c_mst_enable(I2C0_REGS);

    //Kick off the write transaction; every remaining byte is pushed from
    //I2C0_IRQ_Handler in response to tx_done (the first tx_done below is for
    //the address byte, so byte_cnt starts at 0 with nothing pre-filled here)
    i2c_mst_byte_lvl_transfer_addr_rdwr(I2C0_REGS, SLV_ADDR, I2C_MASTER_CTRL_MST_DIR_WRITE,
                                        number_of_bytes_to_write_to_slave);

    while (!transfer_done);

    if (!mst_nack_seen && byte_cnt == number_of_bytes_to_write_to_slave)
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
            I2C_INTR_EVENT_CLEAR(I2C0_REGS, I2C_INTR_EVENT_TX_DONE_IDX);
            if (byte_cnt < number_of_bytes_to_write_to_slave)
            {
                i2c_txfifo_fill_blocking(I2C0_REGS, &mem_reg[byte_cnt], 1);
                byte_cnt++;
            }
            else
            {
                i2c_mst_byte_lvl_transfer_stop(I2C0_REGS);
                i2c_mst_cmd_vld(I2C0_REGS);
            }
            break;

        case I2C_INTR_EVENT_MST_NACK_IDX + 1:
            mst_nack_seen = true;
            I2C_INTR_EVENT_CLEAR(I2C0_REGS, I2C_INTR_EVENT_MST_NACK_IDX);
            break;

        case I2C_INTR_EVENT_MST_STOP_INTR_IDX + 1:
            I2C_INTR_EVENT_CLEAR(I2C0_REGS, I2C_INTR_EVENT_MST_STOP_INTR_IDX);
            transfer_done = true;
            break;
    }
}
