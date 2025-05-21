//////////////////////////////////////////////////////////////////////////////
////                        GPIO INTR RISING TEST                         ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to test the  generation of            ////
////        interrupt upon detection of rising edge at GPIO.              ////
////                                                                      ////
////    Board Setup:                                                      ////
////        PA7 and PA20 are pins used in this example. Both pins should  //// 
////        be driven high and respective interrupts should be set.       ////
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
    int intr_val;
    int intr_val_regs;
    int failed = 0; 
    UartStdOutInit();
    int i;

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

    printf("GPIO INTR RSNG TEST\n");
    gpio_dout_en(GPIO_REGS, 0x00000000);

    printf("Output is disabled on GPIO.\n");

    GPIO_REGS->INTR_EN0.packed_w = 0x00800080;
    printf("Enabled INTR 0. \n");

    GPIO_REGS->INTR_EN1.packed_w = 0x00100010;
    printf("Enabled INTR 1. \n");

    gpio_intr_polarity_cfg(GPIO_REGS, 7, GPIO_INTR_POL_POS);
    gpio_intr_polarity_cfg(GPIO_REGS, 20, GPIO_INTR_POL_POS);
    
    printf("Enabled INTR_POL_0 for Pin 7\n");

    printf("Enabled INTR_POL_1 for Pin 20\n");

    intr_val = 0x00100080; 
    while(GPIO_REGS->INTR_EVENT.packed_w != intr_val);

    if(GPIO_REGS->INTR_EVENT.packed_w == intr_val)
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
        printf("-- GPIO INTR RSNG TEST PASSED --\n");
        UartPass();
    }
    else
    { 
        printf("** GPIO INTR RSNG TEST FAILED **\n");
        UartFail();
    }

    for (int i = 0; i< 10000 ; i++ );
    UartEndSimulation();
    return 0;
}
