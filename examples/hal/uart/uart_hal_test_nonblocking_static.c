#include <stdio.h>

//#include "CMSDK_CM0plus.h"
//#include "core_cm0plus.h"
#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "uart.h"
//#include "IOMUX_REGS.h"

#include "GPIO_CAPI.h"
//#define UART1_REGS ((UART_REGS_s *) 0x3ffd3000) //this should be uart1 address space
//#define UART0_REGS ((UART_REGS_s *) 0x3ffcc000) //this should be uart0 address space
//#define IOMUX_REGS  ((IOMUX_REGS_s *) 0x3FFC4000 ) //iomux addr space

#define sram_mem_s    ((uart_sram_memory_t *)   0x200000F0)

//SRAM Memory
typedef struct uart_sram_memory {
    uint32_t mem[10];
} uart_sram_memory_t;

//SRAM Memory
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

    uart_cfg_s uart0_cfg_struct = UART_CFG_DEFAULT;
    uart_cfg_s uart1_cfg_struct = UART_CFG_DEFAULT;
    uart_fifo_cfg_s uart1_fifo_cfg_struct = UART_FIFO_CFG_DEFAULT;    
    IOMUX_PA_REG_s iomux_cfg_struct_tx;
    IOMUX_PA_REG_s iomux_cfg_struct_rx;
    IOMUX_PA_REG_s iomux_cfg_struct_cts;
    IOMUX_PA_REG_s iomux_cfg_struct_rts;

//******************************UART0******************************************
   //power enable and reset for uart0, block async req 
    UART_PWR_EN_WRITE(UART0_REGS, 1, UART_PWR_EN_PWR_EN_KEY);
    UART0_REGS->RST_CTRL.packed_w = 0x7D000001;
    if((UART0_REGS->RST_STS.packed_w & UART_RST_STS_RST_STS_MASK) == 1)
    {
      UART_RST_CTRL_WRITE(UART0_REGS, 0, 1, 0x7D); //TODO: put key define
    }
    UART_CLKCFG_WRITE(UART0_REGS, 1, 0x7D);

   //configuring uart0 for printing
    uart0_cfg_struct.clk_sel = UART_CLK_SEL_CLK_APB;
    uart0_cfg_struct.clk_div = 0;
    uart0_cfg_struct.baud_rate = 0;
    uart0_cfg_struct.clk_freq = 32000;
    uart0_cfg_struct.word_length = UART_CFG_WRD_LEN_8_BITS;
    uart0_cfg_struct.oversampling = UART_CTRL_OS_FACTOR_16;
    uart0_cfg_struct.tx_en = UART_CTRL_TX_EN_HW;

    uart_cfg(UART0_REGS, &uart0_cfg_struct);

    uart_en(UART0_REGS);
    uart_clk_en(UART0_REGS);

    uart_puts(UART0_REGS, "UART_HAL_TEST, configured UART 0\n");

//********************************UART1*****************************************
    //power enable and reset ctrl for uart1, block async request
    UART_PWR_EN_WRITE(UART1_REGS, 1, UART_PWR_EN_PWR_EN_KEY);
    UART1_REGS->RST_CTRL.packed_w = 0x7D000001;
    if((UART1_REGS->RST_STS.packed_w & UART_RST_STS_RST_STS_MASK) == 1)
    {
      UART_RST_CTRL_WRITE(UART1_REGS, 0, 1, 0x7D);
    }
    UART_CLKCFG_WRITE(UART1_REGS, 1, 0x7D);

    //configuring uart1
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
    //clk en
    uart_clk_en(UART1_REGS);
 
    //*************iomux cfg*******************************
    //tx port
    iomux_cfg_struct_tx.output_en        = 1;
    iomux_cfg_struct_tx.input_en         = 0;
    iomux_cfg_struct_tx.sel              = 2;

    iomux_cfg(IOMUX_REGS, iomux_cfg_struct_tx, 10+1);

    //rx port
    iomux_cfg_struct_rx.output_en        = 0;
    iomux_cfg_struct_rx.input_en         = 1;
    iomux_cfg_struct_rx.sel              = 2;

    iomux_cfg(IOMUX_REGS, iomux_cfg_struct_rx, 11+1);
    
    //cts port
    iomux_cfg_struct_cts.output_en        = 0;
    iomux_cfg_struct_cts.input_en         = 1;
    iomux_cfg_struct_cts.sel              = 2;

    iomux_cfg(IOMUX_REGS, iomux_cfg_struct_cts, 14+1);

    //rts port
    iomux_cfg_struct_rts.output_en        = 1;
    iomux_cfg_struct_rts.input_en         = 0;
    iomux_cfg_struct_rts.sel              = 2;

    iomux_cfg(IOMUX_REGS, iomux_cfg_struct_rts, 15+1);

    //*******************iomux cfg end********************

    //uart_en
    uart_en(UART1_REGS);

    //fifo cfg
    uart1_fifo_cfg_struct.fifo_en = 1;

    //uart_fifo_cfg
    uart_fifo_cfg(UART1_REGS, &uart1_fifo_cfg_struct);


//************************data trsnmit*******************************************
    uart_puts(UART0_REGS, "UART_HAL_TEST writing data\n");
    // Memory Population
    for(int i=0; i<DATA_LEN; i++) {
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
        uart_txfifo_fill_blocking(UART1_REGS, &mem_8, DATA_LEN);
    #endif

    #ifndef tx_blocking
        UART_INTR_EVENT_EN(UART1_REGS, UART_INTR_EVENT_RX_INT_IDX); 
        UART_INTR_EVENT_EN(UART1_REGS, UART_INTR_EVENT_TX_INT_IDX);    
    #endif

    //clearing all interrupts
       //UART1_REGS->INTR_EVENT.packed_w = 0xFFFFFFFF;

    #ifdef LPBK
        while(txn_done_rx==0); 

        for(int k = 0; k<DATA_LEN; k++){
        if(mem_8[k] == data_rx_arr[k]){
            print_int_var("data got = ",data_rx_arr[k],1);
            print_int_var("data sent = ", mem_8[k],1);
            UartPass();
        }
        else{
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
void INTR15_Handler(void)
{
    int intr_sts;
    intr_sts = UART1_REGS->INTR_STS.packed_w-1;
    UART_INTR_EVENT_CLEAR(UART1_REGS, intr_sts);

    #ifdef UART_HAL_TX_STATIC
        if(intr_sts == UART_INTR_EVENT_TX_INT_IDX)
        {
            txn_done = uart_txfifo_fill_static_nonblocking(UART1_REGS, &mem_8, DATA_LEN, rst_int_ctr);
        }
        else if(intr_sts == UART_INTR_EVENT_RX_INT_IDX)
        {
            txn_done_rx = uart_rxfifo_drain_static_nonblocking(UART1_REGS, &data_rx_arr, DATA_LEN, rst_int_ctr_rx);
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

