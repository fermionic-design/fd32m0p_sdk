//////////////////////////////////////////////////////////////////////////////
////               UART HAL BASIC TEST                                    ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to configure UART with HAL            ////
////        functions and print some strings                              ////
////                                                                      //// 
//////////////////////////////////////////////////////////////////////////////

#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "uart.h"

int main(void) 
{
    uart_cfg_s uart0_cfg_struct = UART_CFG_DEFAULT;

    //UART0 initialization
    uart_init(UART0_REGS);

    //configuring UART0 for printing, 1.5 MHz baud rate, 32 MHz clk freq, enable transmission
    uart0_cfg_struct.baud_rate = 1500000;
    uart0_cfg_struct.clk_freq = 32000;
    uart0_cfg_struct.tx_en = UART_CTRL_TX_EN_HW;
    
    //configure UART0 regs
    uart_cfg(UART0_REGS, &uart0_cfg_struct);
    
    //enable UART0
    uart_en(UART0_REGS);
    
    //print string
    uart_puts(UART0_REGS, "Hello World \n");
    uart_puts(UART0_REGS, "UART_print : We are FermionIC Design Pvt Ltd\n");
    uart_puts(UART0_REGS, "** TEST PASSED **\n");

    UartEndSimulation();

    return 0;
}
