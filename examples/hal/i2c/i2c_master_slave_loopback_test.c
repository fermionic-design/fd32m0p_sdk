//////////////////////////////////////////////////////////////////////////////
////                  I2C MASTER/SLAVE LOOPBACK TEST                      ////
////    DESCRIPTION:                                                      ////
////        Configures I2C0's master AND slave engines simultaneously,    ////
////        with MASTER_CFG.lpbk_mode enabled, then has the master write  ////
////        a known byte pattern to the slave's own configured address.   ////
////        Because both engines live in the same core, this is the only ////
////        I2C test in this directory that can fully self-check the     ////
////        transferred data (every other test needs a real external     ////
////        peer device whose contents this side can't see).             ////
////                                                                      ////
////    IMPORTANT -- verify before use:                                   ////
////        This assumes lpbk_mode routes the master engine's SCL/SDA     ////
////        drive directly to the slave engine's inputs *inside* the      ////
////        core (see master_slave_loopback_io_mux in i2c_top.sv),        ////
////        bypassing the external SCL_out/SCL_in/SDA_out/SDA_in pins.    ////
////        Confirm this against the RTL/vendor documentation before      ////
////        trusting a PASS from this test.                               ////
////                                                                      ////
////    Board Setup:                                                      ////
////        None required if the assumption above holds -- the           ////
////        transaction never leaves the core. If your implementation     ////
////        of loopback still routes through the pads, add the same      ////
////        SCL/SDA IOMUX block used in the other i2c examples.           ////
////                                                                      ////
////    Self-check:                                                       ////
////        The slave's auto-ack + RX FIFO absorb the write with no       ////
////        per-byte CPU service required, so main() simply drains the    ////
////        slave's RX FIFO after the master's STOP and compares it       ////
////        against the pattern it sent.                                  ////
//////////////////////////////////////////////////////////////////////////////

#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "i2c.h"
#include "gpio.h"
#include "uart.h"

#define LOOPBACK_SLV_ADDR 0x55
#define NUM_BYTES         4

uint8_t tx_pattern[NUM_BYTES] = {0x12, 0x34, 0x56, 0x78};
uint8_t rx_capture[NUM_BYTES] = {0};

int main(void)
{
    UartStdOutInit();
    UartPuts("I2C Master/Slave Internal Loopback Test\n");

    //Default Structs
    i2c_counter_cfg_t i2c_counter_cfg_struct = I2C_COUNTER_CFG_DEFAULT_100Khz;
    i2c_slv_cfg_t     i2c_slv_cfg_struct     = I2C_SLAVE_CFG_DEFAULT;
    i2c_mst_cfg_t     i2c_mst_cfg_struct     = I2C_MASTER_CFG_DEFAULT;

    //Slave: own address to loop back to, auto-ack + FIFO so the receive side
    //needs no per-byte CPU service while the master is driving the transfer
    i2c_slv_cfg_struct.slv_addr1           = LOOPBACK_SLV_ADDR;
    i2c_slv_cfg_struct.slv_auto_ack_en      = 1;
    i2c_slv_cfg_struct.slv_addr_auto_ack_en = 1;
    i2c_slv_cfg_struct.rxfifo_en            = 1;
    i2c_slv_cfg_struct.txfifo_en            = 1;

    //Master: enable internal loopback
    i2c_mst_cfg_struct.lpbk_mode = I2C_MASTER_CFG_LPBK_MODE_ENABLE;

    //I2C Power Enable
    I2C_PWR_EN_WRITE(I2C0_REGS, 1, I2C_PWR_EN_PWR_EN_KEY);

    //Clock Select & Clock Div
    i2c_clk_cfg_set(I2C0_REGS, I2C_CLK_CTRL_CLKSEL_AHB, 2);

    //Clock Count Configuration
    i2c_counter_cfg_set(I2C0_REGS, &i2c_counter_cfg_struct);

    //I2C Slave and Master Configurations (same core, both engines active)
    i2c_slv_cfg_set(I2C0_REGS, &i2c_slv_cfg_struct);
    i2c_mst_cfg_set(I2C0_REGS, &i2c_mst_cfg_struct);

    //Glitch
    i2c_glitch_width_cfg_set(I2C0_REGS, 2);

    //Enable both engines
    i2c_slv_enable(I2C0_REGS);
    i2c_mst_enable(I2C0_REGS);

    //Master write: NUM_BYTES to the slave's own address, looped back inside the core
    i2c_mst_byte_lvl_transfer_addr_rdwr(I2C0_REGS, LOOPBACK_SLV_ADDR, I2C_MASTER_CTRL_MST_DIR_WRITE, NUM_BYTES);
    i2c_wait_for_mst_start(I2C0_REGS);
    i2c_wait_for_tx_done(I2C0_REGS);    // address byte acked by the slave engine

    for (uint8_t i = 0; i < NUM_BYTES; i++)
    {
        i2c_txfifo_fill_blocking(I2C0_REGS, &tx_pattern[i], 1);
        i2c_wait_for_tx_done(I2C0_REGS);
    }

    i2c_mst_byte_lvl_transfer_stop(I2C0_REGS);
    i2c_mst_cmd_vld(I2C0_REGS);
    i2c_wait_for_mst_stop(I2C0_REGS);

    //Slave side needed no CPU service during the transfer (auto-ack + RX FIFO);
    //drain what it silently captured and compare against what the master sent.
    i2c_rxfifo_drain_blocking(I2C0_REGS, rx_capture, NUM_BYTES);

    uint8_t failed = 0;
    for (uint8_t i = 0; i < NUM_BYTES; i++)
    {
        print_int_var("tx_pattern", tx_pattern[i], 1);
        print_int_var("rx_capture", rx_capture[i], 1);
        if (rx_capture[i] != tx_pattern[i])
        {
            failed++;
        }
    }

    if (failed == 0)
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
