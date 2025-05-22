//////////////////////////////////////////////////////////////////////////////
////                        GPIO TGL TEST                                 ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to test the toggle functionality.     ////
////                                                                      ////
////                                                                      ////
////    Board Setup:                                                      ////
////        Output pins for which GPIO Toggle is set will be toggled      //// 
////                                                                      ////
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////

#include <stdint.h> 

#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "gpio.h"

int main(void) {
    
    int iomux_val;
    int iomux_val_rd;
    int failed = 0;
    int i;
   
    UartStdOutInit();

    UartPuts("GPIO TOGGLE TEST.\n");

    GPIO_REGS->PWR_EN.packed_w = 0xAB000001;
    UartPuts("Power EN Reg Written.\n");

    UartPuts("GPIO TGL Base Test\n");
    UartPuts("Writing AAAA_AAAA on O/P of GPIO.\n");
    
    gpio_dout_en(GPIO_REGS, 0xFFFFFFFF);
    UartPuts("All Pins are enabled on GPIO.\n");

    gpio_dout(GPIO_REGS, 0xAAAAAAAA);
    UartPuts("AAAA_AAAA written on GPIO.\n");

    gpio_tgl(GPIO_REGS, 0xFFFFFFFF);
    UartPuts("All pins are set for toggling.\n");
    
    for (i=0;i<29;i=i+1)
    {
        IOMUX_PA_N_WRITE(IOMUX_REGS, i, 1, 0, 0, 0, 0, 0, 0, 1, 0);
    }
    
    iomux_val = 0x05555555;
    iomux_val_rd = get_gpio_dout(GPIO_REGS);

    if(iomux_val_rd == iomux_val)
    {
        UartPuts("-- Correct Value is set. --\n");
    }
    else 
    {
        failed++;
        UartPuts("** Correct Value is not set. **\n");
    }
   
    if(failed == 0)
    {
        UartPuts("-- GPIO TGL TEST PASSED --\n");
        UartPass();
    }
    else
    { 
        UartPuts("** GPIO TGL TEST FAILED**\n");
        UartFail();
    }

    for (int i = 0; i< 10000 ; i++ );
    UartEndSimulation();
    return 0;
    }
