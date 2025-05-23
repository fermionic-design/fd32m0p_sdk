//////////////////////////////////////////////////////////////////////////////
////               UART HAL NON BLOCKING STATIC TEST                      ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to test UART TX blocking and          ////
////        nonblocking static, RX non blocking data transfer             //// 
////        functionality in loopback mode                                ////
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
volatile int txn_done_rx;
int rst_int_ctr;
int rst_int_ctr_rx;
int num_bytes_wr_int;
int num_bytes_written;
int num_bytes_rd;
int num_bytes_rd_int;

int main(void) {

    NVIC_ClearPendingIRQ(15);
    NVIC_EnableIRQ(15);

    //set default configurations to the cfg structs
    uart_cfg_s uart0_cfg_struct = UART_CFG_DEFAULT;
    uart_cfg_s uart1_cfg_struct = UART_CFG_DEFAULT;
    uart_cfg_s rd_uart_cfg_struct;
    uart_fifo_cfg_s uart1_fifo_cfg_struct = UART_FIFO_CFG_DEFAULT;    
    IOMUX_PA_REG_s iomux_cfg_struct_tx;
    IOMUX_PA_REG_s iomux_cfg_struct_rx;
    IOMUX_PA_REG_s iomux_cfg_struct_cts;
    IOMUX_PA_REG_s iomux_cfg_struct_rts;

//******************************UART0******************************************

   //UART0 initialization
    uart_init(UART0_REGS);   

   //configuring UART0 for printing
    uart0_cfg_struct.clk_sel = UART_CLK_SEL_CLK_APB;
    uart0_cfg_struct.clk_div = 0;
    uart0_cfg_struct.baud_rate = 0;
    uart0_cfg_struct.clk_freq = 32000;
    uart0_cfg_struct.word_length = UART_CFG_WRD_LEN_8_BITS;
    uart0_cfg_struct.oversampling = UART_CTRL_OS_FACTOR_16;
    uart0_cfg_struct.tx_en = UART_CTRL_TX_EN_HW;

    uart_cfg(UART0_REGS, &uart0_cfg_struct);
    
    //enable UART0
    uart_en(UART0_REGS);

    uart_puts(UART0_REGS, "UART_HAL_TEST, configured UART 0\n");

//********************************UART1*****************************************

    //UART1 initialization
    uart_init(UART1_REGS);   

    //configuring UART1 for data transfer
    uart1_cfg_struct.clk_sel = UART_CLK_SEL_CLK_APB;
    uart1_cfg_struct.clk_div = 0;
    uart1_cfg_struct.baud_rate = 57600;
    uart1_cfg_struct.clk_freq = 32000;
    uart1_cfg_struct.oversampling = UART_CTRL_OS_FACTOR_16;
    uart1_cfg_struct.word_length = UART_CFG_WRD_LEN_8_BITS;
    uart1_cfg_struct.msb_first = UART_CTRL_UART_MSB_LAST;
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
    iomux_cfg_struct_tx.sel              = IOMUX_PIN_SEL_PA10_UART1_TX;

    iomux_cfg(IOMUX_REGS, iomux_cfg_struct_tx, 10);

    //rx port
    iomux_cfg_struct_rx.output_en        = 0;
    iomux_cfg_struct_rx.input_en         = 1;
    iomux_cfg_struct_rx.sel              = IOMUX_PIN_SEL_PA11_UART1_RX;

    iomux_cfg(IOMUX_REGS, iomux_cfg_struct_rx, 11);
    
    //cts port
    iomux_cfg_struct_cts.output_en        = 0;
    iomux_cfg_struct_cts.input_en         = 1;
    iomux_cfg_struct_cts.sel              = IOMUX_PIN_SEL_PA14_UART1_CTS;

    iomux_cfg(IOMUX_REGS, iomux_cfg_struct_cts, 14);

    //rts port
    iomux_cfg_struct_rts.output_en        = 1;
    iomux_cfg_struct_rts.input_en         = 0;
    iomux_cfg_struct_rts.sel              = IOMUX_PIN_SEL_PA15_UART1_RTS;

    iomux_cfg(IOMUX_REGS, iomux_cfg_struct_rts, 15);

    //*******************iomux cfg end********************

    //enable UART1
    uart_en(UART1_REGS);

    //UART1 fifo cfg
    uart1_fifo_cfg_struct.fifo_en = 1;

    uart_fifo_cfg(UART1_REGS, &uart1_fifo_cfg_struct);

    //******************read cfg regs*****************************
    uart_read_cfg(UART1_REGS, &rd_uart_cfg_struct);
    if(rd_uart_cfg_struct.clk_sel == uart1_cfg_struct.clk_sel)
    {
        uart_puts(UART0_REGS, "cfg matched\n");
        UartPass();
    }
    else
    {
        uart_puts(UART0_REGS, "cfg did not match\n");
        UartFail();
    }

//************************data transmit*******************************************
    uart_puts(UART0_REGS, "UART_HAL_TEST writing data\n");

    // Memory Population
    for(int i=0; i<DATA_LEN; i++)
    {
        sram_mem_s->mem[i] = 0x7A + i;
        mem_8[i] = 0x7A + i;
        #ifdef uart_tx_putchar
            UART_INTR_EVENT_EN(UART1_REGS, UART_INTR_EVENT_RX_INT_IDX);  
            while((UART1_REGS->FIFOSTS.tx_fifo_full_sts)==1);
            uart_putc(UART1_REGS, sram_mem_s->mem[i]);
        #endif        
    }

    #ifdef uart_txfill_blocking
        UART_INTR_EVENT_EN(UART1_REGS, UART_INTR_EVENT_RX_INT_IDX);        
        uart_txfifo_fill_blocking(UART1_REGS, mem_8, DATA_LEN);
    #endif

    #ifndef tx_blocking
        UART_INTR_EVENT_EN(UART1_REGS, UART_INTR_EVENT_RX_INT_IDX); 
        UART_INTR_EVENT_EN(UART1_REGS, UART_INTR_EVENT_TX_INT_IDX);    
    #endif

    //checker
    #ifdef LPBK
        while(txn_done_rx==0); 

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
    UART_INTR_EVENT_CLEAR(UART1_REGS, intr_sts);

    //static tx and rx
    #ifdef UART_HAL_TX_STATIC
        if(intr_sts == UART_INTR_EVENT_TX_INT_IDX)
        {
            txn_done = uart_txfifo_fill_static_nonblocking(UART1_REGS, mem_8, DATA_LEN, rst_int_ctr);
        }
        else if(intr_sts == UART_INTR_EVENT_RX_INT_IDX)
        {
            txn_done_rx = uart_rxfifo_drain_static_nonblocking(UART1_REGS, data_rx_arr, DATA_LEN, rst_int_ctr_rx);
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

