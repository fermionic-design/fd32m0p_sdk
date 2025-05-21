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


#include <stdio.h>
#include <stdint.h> 

#include "uart_stdout.h"

#include "gpio.h"

#define GPIO_REGS  ((GPIO_REGS_s *) 0x40010000)
#define IOMUX_REGS  ((IOMUX_REGS_s *) 0x3FFC4000 )

int main(void) {
    
    int iomux_val;
    int iomux_val_rd;
    int failed = 0;
    int i;
   
    UartStdOutInit();

    printf("GPIO TOGGLE TEST.\n");

    GPIO_REGS->PWR_EN.packed_w = 0xAB000001;
    printf("Power EN Reg Written.\n");

    printf("GPIO TGL Base Test\n");
    printf("Writing AAAA_AAAA on O/P of GPIO.\n");
    
    gpio_dout_en(GPIO_REGS, 0xFFFFFFFF);
    printf("All Pins are enabled on GPIO.\n");

    gpio_dout(GPIO_REGS, 0xAAAAAAAA);
    printf("AAAA_AAAA written on GPIO.\n");

    gpio_tgl(GPIO_REGS, 0xFFFFFFFF);
    printf("All pins are set for toggling.\n");
    
    for (i=0;i<29;i=i+1)
    {
        IOMUX_PA_N_WRITE(IOMUX_REGS, i, 1, 0, 0, 0, 0, 0, 0, 1, 0);
    }
    
    iomux_val = 0x05555555;
    iomux_val_rd = get_gpio_dout(GPIO_REGS);

    if(iomux_val_rd == iomux_val)
    {
        printf("-- Correct Value is set. --\n");
    }
    else 
    {
        failed++;
        printf("** Correct Value is not set. **\n");
    }
   
    if(failed == 0)
    {
        printf("-- GPIO TGL TEST PASSED --\n");
        UartPass();
    }
    else
    { 
        printf("** GPIO TGL TEST FAILED**\n");
        UartFail();
    }

    for (int i = 0; i< 10000 ; i++ );
    UartEndSimulation();
    return 0;
    }
