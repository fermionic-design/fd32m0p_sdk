#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "i2c.h"
#include "gpio.h"
#include "uart.h"

uint8_t data_rx_arr[4];
uint8_t mem_reg[255];
uint8_t rcvd_reg_addr = 0;
uint8_t byte_cnt = 0;
bool start_detected = 0;
volatile uint8_t mem_idx_rd = 0;
volatile uint8_t mem_idx_wr = 0;
volatile bool    initial_tx_empty_intr = 1;

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

    //Change Some Default Values in Slave Configuration
    i2c_slv_cfg_struct.slv_auto_ack_en = 1;
    i2c_slv_cfg_struct.slv_addr_auto_ack_en = 1;
    i2c_slv_cfg_struct.rxfifo_en = 1;
    i2c_slv_cfg_struct.txfifo_en = 1;
    i2c_slv_cfg_struct.slv_txempty_intr_on_tx_req = I2C_SLAVE_CTRL_SLV_TXEMPTY_INTR_ON_TX_REQ_REQUIRED;


    //I2C Power Enable
    I2C_PWR_EN_WRITE(I2C0_REGS, 1, I2C_PWR_EN_PWR_EN_KEY);

    //Clock Select & Clock Div
    i2c_clk_cfg_set(I2C0_REGS, I2C_CLK_CTRL_CLKSEL_AHB, 2);

    //Clock Count Configuration
    i2c_counter_cfg_set(I2C0_REGS, &i2c_counter_cfg_struct);

    //Interrupts
    I2C_INTR_EVENT_EN(I2C0_REGS, I2C_INTR_EVENT_SLV_START_IDX);
    I2C_INTR_EVENT_EN(I2C0_REGS, I2C_INTR_EVENT_SLV_STOP_IDX);
    I2C_INTR_EVENT_EN(I2C0_REGS, I2C_INTR_EVENT_TX_DONE_IDX);
    I2C_INTR_EVENT_EN(I2C0_REGS, I2C_INTR_EVENT_RX_DONE_IDX);
    I2C_INTR_EVENT_EN(I2C0_REGS, I2C_INTR_EVENT_TXFIFO_EMPTY_IDX);
    I2C_INTR_EVENT_EN(I2C0_REGS, I2C_INTR_EVENT_RXFIFO_FULL_IDX);
    
    NVIC_ClearPendingIRQ(23);
    NVIC_EnableIRQ(23);

    //I2C Slave Configurations
    i2c_slv_cfg_set(I2C0_REGS, &i2c_slv_cfg_struct);

    //GLitch 
    i2c_glitch_width_cfg_set(I2C0_REGS, 2);

    //Enable Slave
    i2c_slv_enable(I2C0_REGS);
    
    
    UartEndSimulation(); 
    return 0;
}

//void INTR23_Handler(void)
void I2C0_IRQ_Handler(void)
{
    uint8_t intr_sts;
    intr_sts = I2C0_REGS->INTR_STS.packed_w;

    switch(intr_sts) 
    {
        case I2C_INTR_EVENT_SLV_START_IDX + 1: // slave start
            start_detected = 1;
            I2C_INTR_EVENT_CLEAR(I2C0_REGS, I2C_INTR_EVENT_SLV_START_IDX);
            break; 
        case I2C_INTR_EVENT_SLV_STOP_IDX + 1: //Slave stop
            I2C_INTR_EVENT_CLEAR(I2C0_REGS, I2C_INTR_EVENT_SLV_STOP_IDX);
            break; 
        case I2C_INTR_EVENT_TX_DONE_IDX + 1: //tx done
            I2C_INTR_EVENT_CLEAR(I2C0_REGS, I2C_INTR_EVENT_TX_DONE_IDX);
            break; 
        case I2C_INTR_EVENT_RX_DONE_IDX + 1: //Rx Done
            mem_idx_rd += i2c_rxfifo_drain_nonblocking(I2C0_REGS, &mem_reg[mem_idx_rd], 255 - mem_idx_rd);
            I2C_INTR_EVENT_CLEAR(I2C0_REGS, I2C_INTR_EVENT_RX_DONE_IDX);
            break; 
        case I2C_INTR_EVENT_TXFIFO_EMPTY_IDX + 1: //Tx fifo empty
            mem_idx_wr = i2c_txfifo_fill_nonblocking(I2C0_REGS, &mem_reg[mem_idx_wr], 4);
            I2C_INTR_EVENT_CLEAR(I2C0_REGS, I2C_INTR_EVENT_TXFIFO_EMPTY_IDX);
            break; 
        case I2C_INTR_EVENT_RXFIFO_FULL_IDX + 1: //rx fifo full
            I2C_INTR_EVENT_CLEAR(I2C0_REGS, I2C_INTR_EVENT_RXFIFO_FULL_IDX);
            break; 
    }

}
