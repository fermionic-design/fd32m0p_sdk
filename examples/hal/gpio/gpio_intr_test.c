//////////////////////////////////////////////////////////////////////////////
////                        GPIO INTR TEST                                ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to test the  generation of            ////
////        interrupt upon detection of any edge at GPIO.                 ////
////                                                                      ////
////    Board Setup:                                                      ////
////        PA5, PA11 and PA19 are used in this example. All pins should  //// 
////        be driven high first followed by a falling edge. Interrupts   ////
////        should be set on both the edges.                              ////
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdint.h> 
#include "uart_stdout.h"

#include "gpio.h"

#define GPIO_REGS  ((GPIO_REGS_s *) 0x40010000)
#define IOMUX_REGS  ((IOMUX_REGS_s *) 0x3FFC4000 )

int main(void) {
    int intr_val;
    int intr_val_regs;
    int failed = 0;
    UartStdOutInit();
    int i;
    int event_en0_reg, event_en1_reg;
    IOMUX_PA_REG_s iomux_cfg_struct;

    iomux_cfg_struct.output_en        = 0;
    iomux_cfg_struct.input_en         = 1;
    iomux_cfg_struct.drive_strength   = 0;
    iomux_cfg_struct.slew_rate        = 0;
    iomux_cfg_struct.pull_up          = 0;
    iomux_cfg_struct.pull_down        = 0;
    iomux_cfg_struct.hysteresis       = 0;
    iomux_cfg_struct.sel              = 1;
    iomux_cfg_struct.input_val        = 1;
    
    for (i=0;i<29;i=i+1)
    {
        iomux_cfg(IOMUX_REGS, iomux_cfg_struct, i);
    }

    GPIO_REGS->PWR_EN.packed_w = 0xAB000001;
    printf("Power EN Reg Written.\n");

    printf("GPIO INTR Test\n");
    gpio_dout_en(GPIO_REGS, 0x00000000);

    printf("Output is disabled on GPIO.\n");

    GPIO_INTR_EVENT_EN(GPIO_REGS, 5);
    GPIO_INTR_EVENT_EN(GPIO_REGS, 11);
    GPIO_INTR_EVENT_EN(GPIO_REGS, 19);

    printf("Enabled INTR 0. \n");
    printf("Enabled INTR 1. \n");

    for(i=0;i<32;i=i+1)
    {
        GPIO_GENERIC_EVENT_EN(GPIO_REGS, i);
    }
    
    event_en0_reg = GPIO_REGS->EVENT_EN0.packed_w;
    print_int_var("event_en0_reg", event_en0_reg, 1);

    event_en1_reg = GPIO_REGS->EVENT_EN1.packed_w;
    print_int_var("event_en1_reg", event_en1_reg, 1);

    gpio_intr_polarity_cfg(GPIO_REGS, 5, GPIO_INTR_POL_BOTH);
    gpio_intr_polarity_cfg(GPIO_REGS, 11, GPIO_INTR_POL_BOTH);
    gpio_intr_polarity_cfg(GPIO_REGS, 19, GPIO_INTR_POL_BOTH);

    printf("Enabled INTR_POL_0 \n");
    printf("Enabled INTR_POL_1 \n");
    
    intr_val    = 0x00080820;

    while(GPIO_REGS->INTR_EVENT.packed_w != intr_val);

    if(GPIO_REGS->INTR_EVENT.packed_w == intr_val)
    {
        printf("-- INTR_RSNG : Correct Value is set. --\n");
    }
    else 
    {
        failed++;
        printf("** INTR_RSNG : Correct Value is not set. **\n");
    }
    GPIO_REGS->INTR_EVENT.packed_w = 0xFFFFFFFF;

    while(GPIO_REGS->INTR_EVENT.packed_w != intr_val);
    
    if(GPIO_REGS->INTR_EVENT.packed_w == intr_val)
    {
        printf("-- INTR_FLNG : Correct Value is set. --\n");
    }
    else 
    {
        failed++;
        printf("** INTR_FLNG : Correct Value is not set. **\n");
    }

    if(failed == 0)
    {
        printf("-- TEST PASSED --\n");
        UartPass();
    }
    else
    { 
        printf("** TEST FAILED**\n");
        UartFail();
    }

    for (int i = 0; i< 10000 ; i++);
    UartEndSimulation();
    return 0;
}

