//////////////////////////////////////////////////////////////////////////////
////                        GPIO TGL TEST                                 ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to test the toggle functionality.     ////
////                                                                      ////
////                                                                      ////
////    Board Setup:                                                      ////
////        Output pins for which GPIO Toggle is set will be toggled      //// 
////                                                                      ////
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////

#include <stdint.h> 

#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "gpio.h"

int main(void) {
    
    uint32_t iomux_val;
    uint32_t iomux_val_rd;
    uint32_t failed = 0;
    uint32_t i;
    IOMUX_PA_REG_s iomux_cfg_struct;
   
    UartStdOutInit();

    UartPuts("GPIO TOGGLE TEST.\n");

    GPIO_PWR_EN_WRITE(GPIO_REGS, 1, GPIO_PWR_EN_PWR_EN_KEY);
    UartPuts("Power EN Reg Written.\n");

    UartPuts("GPIO TGL Base Test\n");
    UartPuts("Writing AAAA_AAAA on O/P of GPIO.\n");
    
    gpio_dout_en(GPIO_REGS, 0xFFFFFFFF);
    UartPuts("All Pins are enabled on GPIO.\n");

    gpio_dout(GPIO_REGS, 0xAAAAAAAA);
    UartPuts("AAAA_AAAA written on GPIO.\n");

    gpio_tgl(GPIO_REGS, 0xFFFFFFFF);
    UartPuts("All pins are set for toggling.\n");
   
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

    iomux_val = 0x05555555;
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
        UartPuts("-- GPIO TGL TEST PASSED --\n");
        UartPass();
    }
    else
    { 
        UartPuts("** GPIO TGL TEST FAILED**\n");
        UartFail();
    }

    for (int i = 0; i< 10000 ; i++ );
    UartEndSimulation();
    return 0;
    }
