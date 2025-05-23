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

#include <stdint.h> 

#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "FD32M0P.h"
#include "gpio.h"

int main(void) {

    uint32_t iomux_val;
    uint32_t iomux_val_rd;
    uint32_t failed = 0;
    uint32_t i;

    UartStdOutInit();
    IOMUX_PA_REG_s iomux_cfg_struct;

    GPIO_PWR_EN_WRITE(GPIO_REGS, 1, GPIO_PWR_EN_PWR_EN_KEY);
    UartPuts("Power EN Reg Written.\n");

    UartPuts("GPIO Base Test\n");
    UartPuts("Writing AAAA_AAAA on O/P of GPIO.\n");
    
    UartPuts("All Pins are enabled on GPIO.\n");

    gpio_dout(GPIO_REGS, 0xAAAAAAAA);
    UartPuts("AAAA_AAAA written on GPIO.\n");

    iomux_cfg_struct.output_en        = 1;
    iomux_cfg_struct.input_en         = 0;
    iomux_cfg_struct.drive_strength   = 0;
    iomux_cfg_struct.slew_rate        = 0;
    iomux_cfg_struct.pull_up          = 0;
    iomux_cfg_struct.pull_down        = 0;
    iomux_cfg_struct.hysteresis       = 0;
    iomux_cfg_struct.sel              = 1;
    iomux_cfg_struct.input_val        = 0;

    for (i=0;i<28;i=i+1)
    {
        iomux_cfg(IOMUX_REGS, iomux_cfg_struct, i);
        
    }
        
    UartPuts("All Pins are set for output. \n");

    gpio_set(GPIO_REGS, 0xFFFFFFFF);
    UartPuts("All pins are set on GPIO.\n");

    gpio_set_en(GPIO_REGS, 0xFFFFFFFF);
    UartPuts("All pins are set on GPIO.\n");

    iomux_val = 0x0FFFFFFF;
    iomux_val_rd = get_gpio_dout(GPIO_REGS);

    if(iomux_val_rd == iomux_val)
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
        UartPuts("-- GPIO SET TEST PASSED --\n");
        UartPass();
    }
    else
    { 
        UartPuts("** GPIO SET TEST FAILED**\n");
        UartFail();
    }

    for (int i = 0; i< 10000 ; i++ );
    UartEndSimulation();
    return 0;
    }

