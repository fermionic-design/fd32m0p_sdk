//////////////////////////////////////////////////////////////////////////////
////                        GPIO INTR FALLING TEST                        ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to test the  generation of            ////
////        interrupt upon detection of falling edge at GPIO.             ////
////                                                                      ////
////    Board Setup:                                                      ////
////        PA4 and PA24 are pins used in this example. Both pins should  //// 
////        be driven low and respective interrupts should be set.        ////
////                                                                      ////
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////

#include <stdint.h> 

#include "uart_stdout_mcu.h"
#include "FD32M0P.h"

#include "gpio.h"


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
    UartPuts("Power EN Reg Written.\n");

    UartPuts("GPIO INTR FLNG TEST\n");

    gpio_dout_en(GPIO_REGS, 0x00000000);
    UartPuts("Output is disabled on GPIO.\n");

    GPIO_REGS->INTR_EN0.packed_w = 0x00100010;
    UartPuts("Enabled INTR 0. \n");

    GPIO_REGS->INTR_EN1.packed_w = 0x01000100;
    UartPuts("Enabled INTR 1. \n");

    //for(i=4;i<5;i=i+1)
    gpio_intr_polarity_cfg(GPIO_REGS, 4, GPIO_INTR_POL_NEG);
    gpio_intr_polarity_cfg(GPIO_REGS, 24, GPIO_INTR_POL_NEG);
    
    UartPuts("Enabled INTR_POL_0 on Pin 4 \n");

    UartPuts("Enabled INTR_POL_1 on Pin 24\n");

    intr_val = 0x01000010; 
    //intr_val_regs = GPIO_REGS->INTR_EVENT.packed_w;

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
        UartPuts("-- GPIO INTR FLNG TEST PASSED --\n");
        UartPass();
    }
    else
    { 
        UartPuts("** GPIO INTR FLNG TEST FAILED **\n");
        UartFail();
    }

    for (int i = 0; i< 10000 ; i++ );
    UartEndSimulation();
    return 0;
    }
