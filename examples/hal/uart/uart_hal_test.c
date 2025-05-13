#include <stdio.h>

#include "CMSDK_CM0plus.h"
#include "core_cm0plus.h"
#include "uart_stdout_mcu.h"
#include "uart_cfg_reg.h"
//#include "uart_cfg_reg.c"
//#include "uart.c"
#include "uart.h"
#include "IOMUX_REGS.h"

#include "GPIO_CAPI.h"
#define UART_REGS ((UART_REGS_s *) 0x3ffd3000) //this should be uart1 address space
#define UART0_REGS ((UART_REGS_s *) 0x3ffcc000) //this should be uart0 address space
#define IOMUX_REGS  ((IOMUX_REGS_s *) 0x3FFC4000 ) //iomux addr space

#define sram_mem_s    ((uart_sram_memory_t *)   0x200000F0)

//SRAM Memory
typedef struct uart_sram_memory {
    uint32_t mem[10];
} uart_sram_memory_t;

int main(void) {
    uint8_t tx_data;
    uart_cfg_s uart0_cfg_struct;
    uart_cfg_s uart1_cfg_struct;
    uart_fifo_cfg_s uart1_fifo_cfg_struct;
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
    uart0_cfg_struct.baud_rate = 57600;
    uart0_cfg_struct.clk_freq = 32*(10^6);
    uart0_cfg_struct.word_length = UART_CFG_WRD_LEN_8_BITS;
    uart0_cfg_struct.oversampling = UART_CTRL_OS_FACTOR_16;
    uart0_cfg_struct.tx_en = UART_CTRL_TX_EN_HW;
    uart0_cfg_struct.rx_en = 0;

    uart_cfg(UART0_REGS, &uart0_cfg_struct);

    uart_en(UART0_REGS);
    uart_clk_en(UART0_REGS);

//********************************UART1*****************************************
    //power enable and reset ctrl for uart1, block async request
    UART_PWR_EN_WRITE(UART_REGS, 1, UART_PWR_EN_PWR_EN_KEY);
    UART_REGS->RST_CTRL.packed_w = 0x7D000001;
    if((UART_REGS->RST_STS.packed_w & UART_RST_STS_RST_STS_MASK) == 1)
    {
      UART_RST_CTRL_WRITE(UART_REGS, 0, 1, 0x7D);
    }
    UART_CLKCFG_WRITE(UART_REGS, 1, 0x7D);

    //configuring uart1
    uart1_cfg_struct.clk_sel = UART_CLK_SEL_CLK_APB;
    uart1_cfg_struct.clk_div = 0;
    uart1_cfg_struct.baud_rate = 57600;
    uart1_cfg_struct.clk_freq = 32*(10^6);
    uart1_cfg_struct.oversampling = UART_CTRL_OS_FACTOR_16;
    uart1_cfg_struct.word_length = UART_CFG_WRD_LEN_8_BITS;
    uart1_cfg_struct.msb_first = UART_CTRL_UART_MSB_FIRST;
    uart1_cfg_struct.tx_en = UART_CTRL_TX_EN_HW;

    uart_cfg(UART_REGS, &uart1_cfg_struct);
    //clk en
    uart_clk_en(UART_REGS);
 
    //*************iomux cfg*******************************
    //tx port
    iomux_cfg_struct_tx.output_en        = 1;
    iomux_cfg_struct_tx.input_en         = 0;
    iomux_cfg_struct_tx.sel              = 2;

    iomux_cfg(IOMUX_REGS, iomux_cfg_struct_tx, 10);

    //rx port
    iomux_cfg_struct_rx.output_en        = 0;
    iomux_cfg_struct_rx.input_en         = 1;
    iomux_cfg_struct_rx.sel              = 2;

    iomux_cfg(IOMUX_REGS, iomux_cfg_struct_rx, 11);
    
    //cts port
    iomux_cfg_struct_cts.output_en        = 0;
    iomux_cfg_struct_cts.input_en         = 1;
    iomux_cfg_struct_cts.sel              = 2;

    iomux_cfg(IOMUX_REGS, iomux_cfg_struct_cts, 14);

    //rts port
    iomux_cfg_struct_rts.output_en        = 1;
    iomux_cfg_struct_rts.input_en         = 0;
    iomux_cfg_struct_rts.sel              = 2;

    iomux_cfg(IOMUX_REGS, iomux_cfg_struct_rts, 15);

    //*******************iomux cfg end********************

    //uart_en
    uart_en(UART_REGS);

    //fifo cfg
    uart1_fifo_cfg_struct.fifo_en = 1;

    //uart_fifo_cfg
    uart_fifo_cfg(UART_REGS, &uart1_fifo_cfg_struct);

//****************************************************************************

   // UartStdOutRegInit();
   // CFG_UartIOMux();
   // CFG_UartEn(1);
   // UartFifoEn();
   // UART_REGS->UART_CTRL.UART_CTRL.os = 16;
   // UART_REGS->UART_BRDNUM.UART_BRDNUM.num_m = 59;
   // UART_REGS->UART_BRDDEN.UART_BRDDEN.den_n = 7;
   // #ifdef SW_OVERRIDE
   //     UART_REGS->UART_CTRL.UART_CTRL.tx_out_en = 1;
   //     UART_REGS->UART_CTRL.UART_CTRL.tx_out_ctrl = 0;
   //     for(int i=0;i<7;i++) 
   //     {
   //         __asm("NOP");
   //     }
   //     UART_REGS->UART_CTRL.UART_CTRL.tx_out_ctrl = 1;
   //     for(int i=0;i<7;i++) 
   //     {
   //         __asm("NOP");
   //     }
   //     UART_REGS->UART_CTRL.UART_CTRL.tx_out_ctrl = 0;
   //     for(int i=0;i<7;i++) 
   //     {
   //         __asm("NOP");
   //     }
   //     UART_REGS->UART_CTRL.UART_CTRL.tx_out_ctrl = 1;
   // #else
   //     UART_REGS->UART_CTRL.UART_CTRL.tx_en = 1;
   // #endif
   // //frame length
   // #ifdef FRAME_LENGTH_5
   //     CFG_UartFrameLength(5);
   // #elif FRAME_LENGTH_6
   //     CFG_UartFrameLength(6);
   // #elif FRAME_LENGTH_7
   //     CFG_UartFrameLength(7);
   // #else
   //     CFG_UartFrameLength(8);
   // #endif
   // //Parity
   // #ifdef PARITY_EN
   //     //CFG_UartParityen(1,0,0); //Parity enable        
   //     //Even/Odd parity
   //     #ifdef PARITY_EVEN
   //         CFG_UartParityen(1,1,0); //Even parity
   //     #else
   //         CFG_UartParityen(1,0,0); //Odd parity
   //     #endif
   // #else
   //     CFG_UartParityen(0,0,0);
   // #endif

   // //stick_parity when Parity en
   // #ifdef STICK_PARITY_1
   //     CFG_UartParityen(1,1,1); //stick_parity=1 for even parity
   // #elif STICK_PARITY_0
   //     CFG_UartParityen(1,0,1); //stick_parity=0 for odd parity
   // #elif PAR_DIS_STICK_PARITY_1
   //     CFG_UartParityen(0,1,1); //stick_parity=1 for even parity
   // #endif
   // 
   // //Stop bit
   // #ifdef STOP_BIT_2
   //     CFG_UartStopBit(1); //2 stop bit
   // #else
   //     CFG_UartStopBit(0); //1 stop bit
   // #endif

   // //Msb/Lsb first
   // #ifdef MSB_FIRST
   //     CFG_UartMsbFirst(1); //MSB first
   // #else
   //     CFG_UartMsbFirst(0); //LSB first
   // #endif
   // 
   // #ifdef CTS_EN
   //     CTS_En(1);
   // #endif
   //
   ////LPBK
   // #ifdef LPBK
   //    Rx_en(1);
   //    UartLpbkEn();
   // #endif

   //// UART_REGS->UART_CTRL.UART_CTRL.tx_out_en = 1;
   //// UART_REGS->UART_CTRL.UART_CTRL.tx_out_ctrl = 0;
   //

//************************data trsnmit*******************************************
    printf("UART_FIFO_TEST\n");
    // Memory Population
    //tx_data= rand();
    for(int i=0; i<DATA_LEN; i++) {
        sram_mem_s->mem[i] = 0x7A + i;
        uart_putc(UART_REGS, sram_mem_s->mem[i]);
        //UART_REGS->UART_TXDATA->UART_TXDATA.uart_data = sram_mem_s->mem[i] ;
    }

    #ifdef LPBK
        while(sram_mem_s->mem[9] == 0){
        __asm("NOP");
        }
        for(int j=0; j<DATA_LEN; j++) {
            sram_mem_s->mem[j+DATA_LEN] =UART_REGS->UART_RXDATA->UART_RXDATA.uart_result;
        }
        sram_mem_s->mem[8] = 1;
    #endif

    UartEndSimulation();
    
    return 0;
}    

