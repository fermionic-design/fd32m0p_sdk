//////////////////////////////////////////////////////////////////////////////
////                        GPIO WR BIT TEST                              ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to read specific GPIO pin through     ////
////        a gpio_din_pinwise function.                                  ////
////                                                                      ////
////    Board Setup:                                                      ////
////        Input for programmed bit should be given at the chip top.     ////
////        Same should be read at the din register.                      ////
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdint.h> 

#include "uart_stdout.h"

#include "gpio.h"

#define GPIO_REGS  ((GPIO_REGS_s *) 0x40010000)
#define IOMUX_REGS  ((IOMUX_REGS_s *) 0x3FFC4000 )

int main(void) {
    uint32_t failed = 0;
    uint32_t din;
    UartStdOutInit();
    uint32_t i;
    GPIO_REGS->PWR_EN.packed_w = 0xAB000001;
    
    gpio_dout_en(GPIO_REGS, 0x00000000);

    for (i=0;i<29;i=i+1)
    {
        IOMUX_PA_N_WRITE(IOMUX_REGS, i, 0, 1, 0, 0, 0, 0, 0, 1, 0);
    }
    //din =  gpio_din_pinwise(GPIO_REGS,4);
    while( gpio_din_pinwise(GPIO_REGS,4) != 1);   
    printf("PA4 is set.\n");

    while( gpio_din_pinwise(GPIO_REGS,7) != 1);   
    printf("PA7 is set.\n");

    while( gpio_din_pinwise(GPIO_REGS,14) != 1);   
    printf("PA14 is set.\n");

    while( gpio_din_pinwise(GPIO_REGS,15) != 1);   
    printf("PA15 is set.\n");

    printf("Read Test ends.\n");
    for (int i = 0; i< 1000 ; i++ );
    UartEndSimulation();
    return 0;
}

