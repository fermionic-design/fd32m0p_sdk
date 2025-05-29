//////////////////////////////////////////////////////////////////////////////
////                        GPIO INTR TEST                                ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to test the  generation of            ////
////        interrupt upon detection of any edge at GPIO.                 ////
////                                                                      ////
////    Board Setup:                                                      ////
////        PA4 and PA24 are used in this example. All pins should        //// 
////        be driven high first followed by a falling edge. Interrupts   ////
////        should be set on both the edges.                              ////
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
    uint32_t event_en0_reg, event_en1_reg;

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
    iomux_cfg_struct.input_val        = 0;
    
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 4);
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 24);

    GPIO_PWR_EN_WRITE(GPIO_REGS, 1, GPIO_PWR_EN_PWR_EN_KEY);
    UartPuts("Power EN Reg Written.\n");

    UartPuts("GPIO INTR Test\n");
    gpio_dout_en(GPIO_REGS, 0x00000000);

    UartPuts("Output is disabled on GPIO.\n");

    GPIO_INTR_EVENT_EN(GPIO_REGS, 4);
    GPIO_INTR_EVENT_EN(GPIO_REGS, 24);

    UartPuts("Enabled INTR 0. \n");
    UartPuts("Enabled INTR 1. \n");

    for(i=0;i<32;i=i+1)
    {
        GPIO_GENERIC_EVENT_EN(GPIO_REGS, i);
    }
    
    event_en0_reg = GPIO_REGS->EVENT_EN0.packed_w;
    print_int_var("event_en0_reg", event_en0_reg, 1);

    event_en1_reg = GPIO_REGS->EVENT_EN1.packed_w;
    print_int_var("event_en1_reg", event_en1_reg, 1);

    gpio_intr_polarity_cfg(GPIO_REGS, 4, GPIO_INTR_POL_BOTH);
    gpio_intr_polarity_cfg(GPIO_REGS, 24, GPIO_INTR_POL_BOTH);

    UartPuts("Enabled INTR_POL_0 \n");
    UartPuts("Enabled INTR_POL_1 \n");
    
    intr_val    = 0x01000010;

    while(GPIO_REGS->INTR_EVENT.packed_w != intr_val){
        print_int_var("intr_val", GPIO_REGS->INTR_EVENT.packed_w, 1);
    };

    if(GPIO_REGS->INTR_EVENT.packed_w == intr_val)
    {
        UartPuts("-- INTR_RSNG : Correct Value is set. --\n");
    }
    else 
    {
        failed++;
        UartPuts("** INTR_RSNG : Correct Value is not set. **\n");
    }
    GPIO_REGS->INTR_EVENT.packed_w = 0xFFFFFFFF;

    while(GPIO_REGS->INTR_EVENT.packed_w != intr_val);
    
    if(GPIO_REGS->INTR_EVENT.packed_w == intr_val)
    {
        UartPuts("-- INTR_FLNG : Correct Value is set. --\n");
    }
    else 
    {
        failed++;
        UartPuts("** INTR_FLNG : Correct Value is not set. **\n");
    }

    if(failed == 0)
    {
        UartPuts("-- TEST PASSED --\n");
        UartPass();
    }
    else
    { 
        UartPuts("** TEST FAILED**\n");
        UartFail();
    }

    for (int i = 0; i< 10000 ; i++);
    UartEndSimulation();
    return 0;
}

