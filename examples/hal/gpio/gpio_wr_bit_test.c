//////////////////////////////////////////////////////////////////////////////
////                        GPIO WR BIT TEST                              ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to write specific GPIO pin through    ////
////        a gpio_dout_pinwise function.                                 ////
////                                                                      ////
////    Board Setup:                                                      ////
////        Output for programmed bit should be read at the chip top.     ////
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdint.h> 
#include <sys/types.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <string.h>

#include "CMSDK_CM0plus.h"
#include "core_cm0plus.h"
#include "uart_stdout.h"

#include "GPIO_CAPI.h"

#define GPIO_REGS  ((GPIO_REGS_s *) 0x40010000)
#define IOMUX_REGS  ((IOMUX_REGS_s *) 0x3FFC4000 )

int main(void) {
  
    int intr_val;
    int intr_val_regs;
    int failed = 0;
    int i,val;
    UartStdOutInit();

    GPIO_REGS->PWR_EN.packed_w = 0xAB000001;
    printf("Power EN Reg Written.\n");

    printf("GPIO Wr Bit Test\n");
    printf("Writing 1 on Pin 1,6 and 27 on O/P of GPIO.\n");
    
    gpio_dout_en(GPIO_REGS, 0xFFFFFFFF);
    printf("All Pins are enabled on GPIO.\n");

    gpio_dout_pinwise(GPIO_REGS, 1, 1);
    val = GPIO_REGS->DOUT_3_0.packed_w;
    print_int_var("pin1 : ", val, 0);

    printf("1 written to GPIO Pin 1. \n");

    gpio_dout_pinwise(GPIO_REGS, 6, 1);
    val = GPIO_REGS->DOUT_7_4.packed_w;
    print_int_var("pin6 : ", val, 0);
    printf("1 written to GPIO Pin 6. \n");

    gpio_dout_pinwise(GPIO_REGS, 27, 1);
    val = GPIO_REGS->DOUT_27_24.packed_w;
    print_int_var("pin27 : ", val, 0);
    printf("1 written to GPIO Pin 27. \n");

    for (i=0;i<29;i=i+1)
    {
        IOMUX_PA_N_WRITE(IOMUX_REGS, i, 1, 0, 0, 0, 0, 0, 0, 1, 0);
    }

    printf("GPIO Write Bit Test ends.\n");   
    
    for (int i = 0; i< 10000 ; i++);
    UartEndSimulation();
    return 0;
}
