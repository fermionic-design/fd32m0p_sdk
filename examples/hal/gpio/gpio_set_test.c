//////////////////////////////////////////////////////////////////////////////
////                        GPIO SET TEST                                 ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to test the set functionality.        ////
////                                                                      ////
////                                                                      ////
////    Board Setup:                                                      ////
////        Output pins for which GPIO Set is set will be set.            //// 
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

    GPIO_REGS->PWR_EN.packed_w = 0xAB000001;
    printf("Power EN Reg Written.\n");

    printf("GPIO Base Test\n");
    printf("Writing AAAA_AAAA on O/P of GPIO.\n");
    
    printf("All Pins are enabled on GPIO.\n");

    gpio_dout(GPIO_REGS, 0xAAAAAAAA);
    printf("AAAA_AAAA written on GPIO.\n");

        
    for (i=0;i<29;i=i+1)
    {
        IOMUX_PA_N_WRITE(IOMUX_REGS, i, 1, 0, 0, 0, 0, 0, 0, 1, 0);
    }
    
    printf("All Pins are set for output. \n");

    gpio_set(GPIO_REGS, 0xFFFFFFFF);
    printf("All pins are set on GPIO.\n");

    gpio_set_en(GPIO_REGS, 0xFFFFFFFF);
    printf("All pins are set on GPIO.\n");

    iomux_val = 0x0FFFFFFF;
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
        printf("-- GPIO SET TEST PASSED --\n");
        UartPass();
    }
    else
    { 
        printf("** GPIO SET TEST FAILED**\n");
        UartFail();
    }

    for (int i = 0; i< 10000 ; i++ );
    UartEndSimulation();
    return 0;
    }

