//////////////////////////////////////////////////////////////////////////////
////                        GPIO GLITCH FILTER TEST                       ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to test the glitch filter             ////
////        functionality of GPIO.                                        ////
////                                                                      ////
////    Board Setup:                                                      ////
////        PA6 is used in this example. PA6 is configured to filter a    //// 
////        glitch of upto 4 clock cycle(c.c) width. No interrupts should ////
////        be generated for an input signal of upto 4 c.c..              ////
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdint.h> 

#include "uart_stdout.h"

#include "GPIO_CAPI.h"

#define GPIO_REGS  ((GPIO_REGS_s *) 0x40010000)
#define IOMUX_REGS  ((IOMUX_REGS_s *) 0x3FFC4000 )

int main(void) {
    uint32_t gpio_outs; 
    UartStdOutInit();
    int val,i;
    GPIO_REGS->PWR_EN.packed_w = 0xAB000001;
    printf("Power EN Reg Written.\n");

    printf("GPIO Glitch Filter Test\n");
 
    for (i=0;i<29;i=i+1)
    {
        IOMUX_PA_N_WRITE(IOMUX_REGS, i, 0, 1, 0, 0, 0, 0, 0, 1, 0);
    } 

    GPIO_REGS->INTR_EN0.packed_w = 0xFFFFFFFF;
    printf("Enabled INTR 0. \n");

    GPIO_REGS->INTR_EN1.packed_w = 0xFFFFFFFF;
    printf("Enabled INTR 1. \n");

    gpio_dout_en(GPIO_REGS, 0x00000000);
    printf("All Pins are enabled on GPIO.\n");

    GPIO_REGS->EVENT_EN0.packed_w = 0xFFFFFFFF;
    printf("Events 0 are enabled on GPIO.\n");

    GPIO_REGS->EVENT_EN1.packed_w = 0xFFFFFFFF;
    printf("Events 1 are enabled on GPIO.\n");

    gpio_glitch_filter_cfg(GPIO_REGS, 6, GPIO_FILT_EN_WIDTH_4);
    
    val = get_gpio_glitch_filter_cfg(GPIO_REGS, 6);
    print_int_var("FILT_EN_6 :",val,0);

    for(i=0;i<28;i=i+1)
    {
        gpio_intr_polarity_cfg(GPIO_REGS, i, GPIO_INTR_POL_BOTH);
    }
    
    printf("Enabled INTR_POL_0 \n");
    printf("Enabled INTR_POL_1 \n");

    for (int i = 0; i< 10000 ; i++ );
    UartEndSimulation();
    return 0;
}
