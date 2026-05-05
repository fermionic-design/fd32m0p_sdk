#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "i2c.h"
#include "gpio.h"
#include "uart.h"

uint8_t data_rx_arr[4];
uint8_t mem_reg[255];
uint8_t rcvd_reg_addr = 0;
uint8_t byte_cnt = 0;
uint8_t number_of_bytes_to_write_to_slave = 3;
uint8_t number_of_bytes_to_read_from_slave = 3;
uint8_t reg_addr = 0xBC;

int main(void) 
{
    UartStdOutInit();
    UartPuts("I2C MST test\n");
    //Default Structs
    IOMUX_PA_REG_s iomux_cfg_struct_i2c;
    i2c_counter_cfg_t i2c_counter_cfg_struct = I2C_COUNTER_CFG_DEFAULT_100Khz;
    i2c_mst_cfg_t i2c_mst_cfg_struct = I2C_MASTER_CFG_DEFAULT;
    mem_reg[0] = 0x12;
    mem_reg[1] = 0x34;
    mem_reg[2] = 0x56;

    
    //Set GPIO Configuration SCL
    iomux_cfg_struct_i2c.output_en = 0;              
    iomux_cfg_struct_i2c.input_en  = 1;
    iomux_cfg_struct_i2c.sel       = IOMUX_PIN_SEL_PA11_I2C0_SCL;   
    iomux_cfg_struct_i2c.pull_up   = 1;   
    iomux_cfg_struct_i2c.pull_down   = 0;   
    
    iomux_cfg(IOMUX_REGS, &iomux_cfg_struct_i2c, 11);
    
    //Set GPIO Configuration SDA
    iomux_cfg_struct_i2c.output_en = 0;              
    iomux_cfg_struct_i2c.input_en  = 1;
    iomux_cfg_struct_i2c.sel       = IOMUX_PIN_SEL_PA0_I2C0_SDA;   
    iomux_cfg_struct_i2c.pull_up   = 1;   
    iomux_cfg_struct_i2c.pull_down   = 0;   
    
    iomux_cfg(IOMUX_REGS, &iomux_cfg_struct_i2c, 0);

    //I2C Power Enable
    I2C_PWR_EN_WRITE(I2C0_REGS, 1, I2C_PWR_EN_PWR_EN_KEY);

    //Clock Select & Clock Div
    i2c_clk_cfg_set(I2C0_REGS, I2C_CLK_CTRL_CLKSEL_AHB, 2);

    //Clock Count Configuration
    i2c_counter_cfg_set(I2C0_REGS, &i2c_counter_cfg_struct);

    // I2C Master Configurations
    i2c_mst_cfg_set(I2C0_REGS, &i2c_mst_cfg_struct);

    //GLitch 
    i2c_glitch_width_cfg_set(I2C0_REGS, 2);

    //Enable Master
    i2c_mst_enable(I2C0_REGS);

    //TODO Master ACK VAL 1

    
    //Functions to handle Master transfers (Blocking) 
    //Master Writes to slave
    i2c_mst_byte_lvl_transfer_addr_rdwr(I2C0_REGS, 0x71, I2C_MASTER_CTRL_MST_DIR_WRITE, 3);
    i2c_wait_for_mst_start(I2C0_REGS);
    i2c_wait_for_tx_done(I2C0_REGS);

    while(1)
    {
        i2c_txfifo_fill_blocking(I2C0_REGS, &mem_reg[byte_cnt], 1);
        byte_cnt++;
        i2c_wait_for_tx_done(I2C0_REGS);
        
        if (byte_cnt == number_of_bytes_to_write_to_slave)
        {
            i2c_mst_byte_lvl_transfer_stop(I2C0_REGS);
            i2c_mst_cmd_vld(I2C0_REGS);
            break;
        }
    }
    i2c_wait_for_mst_stop(I2C0_REGS);

    //Master Reads from slave
    //Master first writes register address
    i2c_mst_byte_lvl_transfer_addr_rdwr(I2C0_REGS, 0xAB, I2C_MASTER_CTRL_MST_DIR_WRITE, 1);
    i2c_wait_for_mst_start(I2C0_REGS);
    i2c_wait_for_tx_done(I2C0_REGS);
    i2c_txfifo_fill_blocking(I2C0_REGS, reg_addr, 1);
    i2c_wait_for_tx_done(I2C0_REGS);
    //Master then reads
    i2c_mst_byte_lvl_transfer_addr_rdwr(I2C0_REGS, 0xAB, I2C_MASTER_CTRL_MST_DIR_READ, 1);
    i2c_wait_for_rx_done(I2C0_REGS);
    i2c_rxfifo_drain_blocking(I2C0_REGS, data_rx_arr, 1);
    mem_reg[3] = data_rx_arr[0];
    i2c_mst_byte_lvl_transfer_ackval(I2C0_REGS, I2C_MASTER_ACK_VAL_MST_ACKVAL_ACK);
    i2c_mst_byte_lvl_transfer_stop(I2C0_REGS);
    i2c_mst_cmd_vld(I2C0_REGS);
    i2c_wait_for_mst_stop(I2C0_REGS);
    UartEndSimulation();
    return 0;

}
