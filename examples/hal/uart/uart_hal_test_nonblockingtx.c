//////////////////////////////////////////////////////////////////////////////
////               UART HAL NON BLOCKING TX TEST                          ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to test UART TX and RX nonblocking    ////
////        and non static data transfer functionality in loopback mode   ////
////                                                                      //// 
//////////////////////////////////////////////////////////////////////////////

#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "uart.h"
#include "gpio.h"

#define sram_mem_s    ((uart_sram_memory_t *)   0x200000F0)

//SRAM Memory
typedef struct uart_sram_memory {
    uint32_t mem[10];
} uart_sram_memory_t;

uint8_t mem_8[10];
uint8_t data_rx_arr[10];
int txn_done;
int txn_done_rx;
int rst_int_ctr;
int rst_int_ctr_rx;
int num_bytes_wr_int;
int num_bytes_written;
int num_bytes_rd;
volatile int num_bytes_rd_int;

int main(void) {

    NVIC_ClearPendingIRQ(UART1_IRQn);
    NVIC_EnableIRQ(UART1_IRQn);
    
    //set default configurations to the cfg structs
    uart_cfg_s uart0_cfg_struct = UART_CFG_DEFAULT;
    uart_cfg_s uart1_cfg_struct = UART_CFG_DEFAULT;
    uart_fifo_cfg_s uart1_fifo_cfg_struct = UART_FIFO_CFG_DEFAULT;    
    IOMUX_PA_REG_s iomux_cfg_struct_tx;
    IOMUX_PA_REG_s iomux_cfg_struct_rx;

    /* uncomment and declare iomux cfg struct for cts and rts
    IOMUX_PA_REG_s iomux_cfg_struct_cts;
    IOMUX_PA_REG_s iomux_cfg_struct_rts; */

//******************************UART0******************************************
   //UART0 initialization
    uart_init(UART0_REGS);      

   //configuring UART0 struct for printing, 1.5 MHz baud rate, 32 MHz clk freq
    uart0_cfg_struct.baud_rate = 1500000;
    uart0_cfg_struct.clk_freq = 32000;
    uart0_cfg_struct.tx_en = UART_CTRL_TX_EN_HW;

    uart_cfg(UART0_REGS, &uart0_cfg_struct);
    
    //enable UART0
    uart_en(UART0_REGS);
    
    uart_puts(UART0_REGS, "UART_HAL_TEST, configured UART 0\n");

//********************************UART1*****************************************

    //UART1 initialization
    uart_init(UART1_REGS);      

    //configuring UART1 struct for data transfer, 921600 baud rate, 32 MHz clk freq
    uart1_cfg_struct.baud_rate = 921600;
    uart1_cfg_struct.clk_freq = 32000;
    uart1_cfg_struct.tx_en = UART_CTRL_TX_EN_HW;
    #ifdef LPBK
        uart1_cfg_struct.rx_en = 1;
        uart1_cfg_struct.loopback_en = 1;
    #endif
    uart_cfg(UART1_REGS, &uart1_cfg_struct);

    //*************iomux cfg*******************************
    //tx port
    iomux_cfg_struct_tx.output_en        = 1;
    iomux_cfg_struct_tx.input_en         = 0;
    iomux_cfg_struct_tx.sel              = IOMUX_PIN_SEL_PA14_UART1_TX;

    iomux_cfg(IOMUX_REGS, iomux_cfg_struct_tx, 14);

    //rx port
    iomux_cfg_struct_rx.output_en        = 0;
    iomux_cfg_struct_rx.input_en         = 1;
    iomux_cfg_struct_rx.sel              = IOMUX_PIN_SEL_PA22_UART1_RX;

    iomux_cfg(IOMUX_REGS, iomux_cfg_struct_rx, 22);
   
    /* program proper cts and rts iomux pin cfg
    //cts port
    iomux_cfg_struct_cts.output_en        = 0;
    iomux_cfg_struct_cts.input_en         = 1;
    iomux_cfg_struct_cts.sel              = IOMUX_PIN_SEL_PA14_UART1_CTS;

    iomux_cfg(IOMUX_REGS, iomux_cfg_struct_cts, 14);

    //rts port
    iomux_cfg_struct_rts.output_en        = 1;
    iomux_cfg_struct_rts.input_en         = 0;
    iomux_cfg_struct_rts.sel              = IOMUX_PIN_SEL_PA15_UART1_RTS;

    iomux_cfg(IOMUX_REGS, iomux_cfg_struct_rts, 15); */

    //*******************iomux cfg end********************

    //enable UART1
    uart_en(UART1_REGS);

    //configure fifo struct
    #ifdef uart_rx_non_static_nonblocking
        uart1_fifo_cfg_struct.rx_fifo_lvl_sel = UART_FIFOLS_RX_FIFO_LS_HALF_FULL;
    #endif
    uart1_fifo_cfg_struct.fifo_en = 1;

    uart_fifo_cfg(UART1_REGS, &uart1_fifo_cfg_struct);


//************************data transmit*******************************************
    uart_puts(UART0_REGS, "UART_HAL_TEST writing data\n");

    // Memory Population
    for(int i=0; i<DATA_LEN; i++)
    {
        sram_mem_s->mem[i] = 0x7A + i;
        mem_8[i] = 0x7A + i;
    }
    UART_INTR_EVENT_EN(UART1_REGS, UART_INTR_EVENT_RX_INT_IDX);        
    UART_INTR_EVENT_EN(UART1_REGS, UART_INTR_EVENT_TX_INT_IDX);    

    //checker
    #ifdef LPBK
        while(num_bytes_rd_int != DATA_LEN);
        for(int k = 0; k<DATA_LEN; k++)
        {
            if(mem_8[k] == data_rx_arr[k])
            {
                print_int_var("data got = ",data_rx_arr[k],1);
                print_int_var("data sent = ", mem_8[k],1);
                UartPass();
            }
            else
            {
                print_int_var("data sent = ", mem_8[k],1);
                print_int_var("data received = ",data_rx_arr[k],1);
                UartFail();
            }
        }
        sram_mem_s->mem[8] = 1;
    #endif
//**************************************************************************************
    UartEndSimulation();
    
    return 0;
}    

//*********************intr handler*****************************************************
void UART1_IRQ_Handler(void)
{
    int intr_sts;
    intr_sts = UART1_REGS->INTR_STS.packed_w-1;
    
    //static tx and rx
    #ifdef UART_HAL_TX_STATIC
        if(intr_sts == UART_INTR_EVENT_TX_INT_IDX)
        {
            txn_done = uart_txfifo_fill_static_nonblocking(UART1_REGS, &mem_8, DATA_LEN, rst_int_ctr);
            UART_INTR_EVENT_CLEAR(UART1_REGS, UART_INTR_EVENT_TX_INT_IDX);
        }
        else if(intr_sts == UART_INTR_EVENT_RX_INT_IDX)
        {
            txn_done_rx = uart_rxfifo_drain_static_nonblocking(UART1_REGS, &data_rx_arr, DATA_LEN, rst_int_ctr_rx);
            UART_INTR_EVENT_CLEAR(UART1_REGS, UART_INTR_EVENT_RX_INT_IDX);            
        }

        if(txn_done == 1)
            rst_int_ctr = 1;
        else
            rst_int_ctr = 0;

        if(txn_done_rx == 1)
            rst_int_ctr_rx = 1;
        else
            rst_int_ctr_rx = 0;

    #else
        if(intr_sts == UART_INTR_EVENT_TX_INT_IDX) 
        {
            num_bytes_written = uart_txfifo_fill_nonblocking(UART1_REGS, &mem_8[0 + num_bytes_wr_int], (DATA_LEN-num_bytes_wr_int));
            UART_INTR_EVENT_CLEAR(UART1_REGS, UART_INTR_EVENT_TX_INT_IDX);            
            num_bytes_wr_int = num_bytes_wr_int + num_bytes_written;
            if(num_bytes_wr_int == DATA_LEN)
        {
            UART_INTR_EVENT_DIS(UART1_REGS, UART_INTR_EVENT_TX_INT_IDX);
        }  
             
        }
        else if(intr_sts == UART_INTR_EVENT_RX_INT_IDX)
        {
            num_bytes_rd = uart_rxfifo_drain_nonblocking(UART1_REGS, &data_rx_arr[0 + num_bytes_rd_int], (DATA_LEN - num_bytes_rd_int));
            UART_INTR_EVENT_CLEAR(UART1_REGS, UART_INTR_EVENT_RX_INT_IDX);            
            num_bytes_rd_int = num_bytes_rd_int + num_bytes_rd;
            if(num_bytes_rd_int == DATA_LEN)
        {
            UART_INTR_EVENT_DIS(UART1_REGS, UART_INTR_EVENT_RX_INT_IDX);
        }

        }
    #endif
}
//**************************************************************************************************************************

