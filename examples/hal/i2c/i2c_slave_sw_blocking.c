#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "i2c.h"
#include "gpio.h"
#include "uart.h"

uint8_t data_rx_arr[4];
uint8_t mem_reg[255];
uint8_t rcvd_reg_addr = 0;
uint8_t byte_cnt = 0;

int main(void) 
{
    UartStdOutInit();
    UartPuts("I2C SLV test\n");
    //Default Structs
    IOMUX_PA_REG_s iomux_cfg_struct_i2c;
    i2c_counter_cfg_t i2c_counter_cfg_struct = I2C_COUNTER_CFG_DEFAULT_100Khz;
    i2c_slv_cfg_t i2c_slv_cfg_struct = I2C_SLAVE_CFG_DEFAULT;
    
    //Set GPIO Configuration SCL
    iomux_cfg_struct_i2c.output_en = 0;              
    iomux_cfg_struct_i2c.input_en  = 1;
    iomux_cfg_struct_i2c.sel       = IOMUX_PIN_SEL_PA1_I2C0_SCL;   
    
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct_i2c, 1);
    
    //Set GPIO Configuration SDA
    iomux_cfg_struct_i2c.output_en = 0;              
    iomux_cfg_struct_i2c.input_en  = 1;
    iomux_cfg_struct_i2c.sel       = IOMUX_PIN_SEL_PA0_I2C0_SDA;   
    
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct_i2c, 0);

    //I2C Power Enable
    I2C_PWR_EN_WRITE(I2C0_REGS, 1, I2C_PWR_EN_PWR_EN_KEY);

    //Clock Select & Clock Div
    i2c_clk_cfg_set(I2C0_REGS, I2C_CLK_CTRL_CLKSEL_AHB, 2);

    //Clock Count Configuration
    i2c_counter_cfg_set(I2C0_REGS, &i2c_counter_cfg_struct);

    //I2C Slave Configurations
    i2c_slv_cfg_set(I2C0_REGS, &i2c_slv_cfg_struct);

    //GLitch 
    i2c_glitch_width_cfg_set(I2C0_REGS, 2);

    //Enable Slave
    i2c_slv_enable(I2C0_REGS);
    
    //Functions to handle Slave transfers (Blocking)
    while (1)
    {   
        byte_cnt = 0;
        i2c_wait_for_slv_start(I2C0_REGS);
        i2c_wait_for_rx_done(I2C0_REGS); //Address and direction transaction
        i2c_rxfifo_drain_blocking(I2C0_REGS, data_rx_arr, 1);
        
        //AddressCheck
        if (data_rx_arr[0] == 0x55){
            i2c_slv_ackval(I2C0_REGS, I2C_SLAVE_BYTE_ACK_SLV_ACKVAL_ACK);
        } 
        else 
        {
            i2c_slv_ackval(I2C0_REGS, I2C_SLAVE_BYTE_ACK_SLV_ACKVAL_NACK);
        }
        //Read/Write Check
        if (i2c_slv_rd_wr_sts_get(I2C0_REGS)) //1 : Read transaction from Master
        { 
            while(1)
            {
                i2c_txfifo_fill_blocking(I2C0_REGS, &mem_reg[byte_cnt], 1);
                byte_cnt++;
                i2c_wait_for_tx_done(I2C0_REGS);
                
                if (i2c_poll_for_slv_stop(I2C0_REGS) == 1) 
                {
                    UartEndSimulation();
                    return 0;
                }
            }
        }
        else //0: Write transaction from Master
        { 
            while(1)
            {
                i2c_wait_for_rx_done(I2C0_REGS);
                i2c_rxfifo_drain_blocking(I2C0_REGS, data_rx_arr, 1);
                mem_reg[byte_cnt] = data_rx_arr[0];
                i2c_slv_ackval(I2C0_REGS, I2C_SLAVE_BYTE_ACK_SLV_ACKVAL_ACK);
                byte_cnt++;
                
                if (i2c_poll_for_slv_stop(I2C0_REGS) == 1) 
                {
                    break;
                }
            }
        }
    }
    

}
