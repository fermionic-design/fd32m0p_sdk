//////////////////////////////////////////////////////////////////////////////
////                        GPIO RD BASE TEST                             ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to read the inputs at the             ////
////        pins                                                          ////
////                                                                      ////
////    Board Setup:                                                      ////
////        Pins whose value is to be read should be connected to         //// 
////        the signals which are to be read.                             ////
////                                                                      ////
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdint.h> 
#include <sys/types.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <string.h>

#include "uart_stdout.h"

#include "gpio.h"

#define GPIO_REGS  ((GPIO_REGS_s *) 0x40010000)
#define IOMUX_REGS  ((IOMUX_REGS_s *) 0x3FFC4000 )

int main(void) {
    uint32_t failed = 0;
    uint32_t din = 0;
    UartStdOutInit();
    uint32_t i;

    GPIO_REGS->PWR_EN.packed_w = 0xAB000001;
    printf("Power EN Reg Written.\n");

    printf("GPIO RD Base Test\n");
    gpio_dout_en(GPIO_REGS, 0x00000000); 
    printf("All Pins are enabled on GPIO.\n");
    
    for (i=0;i<29;i=i+1)
    {
        IOMUX_PA_N_WRITE(IOMUX_REGS, i, 0, 1, 0, 0, 0, 0, 0, 1, 0);
    } 
 
    while(gpio_din(GPIO_REGS) != 0);
    din = gpio_din(GPIO_REGS);

    print_int_var("din :", din, 0);
    
    printf("GPIO Read Test Ends\n");

    for (int i = 0; i< 10000 ; i++);
    UartEndSimulation();
    return 0;
}


