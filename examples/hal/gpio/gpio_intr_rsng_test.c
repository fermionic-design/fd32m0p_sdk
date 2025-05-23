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


#include <stdint.h> 

#include "uart_stdout_mcu.h"
#include "FD32M0P.h"
#include "gpio.h"


int main(void) {
    uint32_t intr_val;
    uint32_t intr_val_regs;
    uint32_t failed = 0;  
    uint32_t i;

    UartStdOutInit();   
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
    
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 7);
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 20);

    GPIO_PWR_EN_WRITE(GPIO_REGS, 1, GPIO_PWR_EN_PWR_EN_KEY);
    UartPuts("Power EN Reg Written.\n");

    UartPuts("GPIO INTR RSNG TEST\n");
    gpio_dout_en(GPIO_REGS, 0x00000000);

    UartPuts("Output is disabled on GPIO.\n");

    GPIO_INTR_EVENT_EN(GPIO_REGS, 7);
    //GPIO_REGS->INTR_EN0.packed_w = 0x00800080;
    UartPuts("Enabled INTR 0. \n");
    GPIO_INTR_EVENT_EN(GPIO_REGS, 20);
    //GPIO_REGS->INTR_EN1.packed_w = 0x00100010;
    UartPuts("Enabled INTR 1. \n");

    gpio_intr_polarity_cfg(GPIO_REGS, 7, GPIO_INTR_POL_POS);
    gpio_intr_polarity_cfg(GPIO_REGS, 20, GPIO_INTR_POL_POS);
    
    UartPuts("Enabled INTR_POL_0 for Pin 7\n");

    UartPuts("Enabled INTR_POL_1 for Pin 20\n");

    intr_val = 0x00100080; 
    while(GPIO_REGS->INTR_EVENT.packed_w != intr_val);

    if(GPIO_REGS->INTR_EVENT.packed_w == intr_val)
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
        UartPuts("-- GPIO INTR RSNG TEST PASSED --\n");
        UartPass();
    }
    else
    { 
        UartPuts("** GPIO INTR RSNG TEST FAILED **\n");
        UartFail();
    }

    for (int i = 0; i< 10000 ; i++ );
    UartEndSimulation();
    return 0;
}
