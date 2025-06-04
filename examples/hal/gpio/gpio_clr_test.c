//////////////////////////////////////////////////////////////////////////////
////                        GPIO CLR TEST                                 ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to test the clear functionality.      ////
////                                                                      ////
////                                                                      ////
////    Board Setup:                                                      ////
////        Output pins for which GPIO CLR is set will be cleared.        //// 
////                                                                      ////
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////


#include <stdint.h> 

#include "uart_stdout_mcu.h"
#include "FD32M0P.h"

#include "gpio.h"


int main(void) {

    uint32_t iomux_val_rd;
    uint32_t failed = 0;
    uint32_t i;

    UartStdOutInit();
    IOMUX_PA_REG_s iomux_cfg_struct;

    GPIO_PWR_EN_WRITE(GPIO_REGS, 1, GPIO_PWR_EN_PWR_EN_KEY);
    UartPuts("Power EN Reg Written.\n");

    UartPuts("GPIO CLR Base Test\n");
    
    gpio_dout_en(GPIO_REGS, 0xFFFFFFFF);
    
    UartPuts("All Pins are enabled on GPIO.\n");

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
    iomux_cfg_struct = get_gpio_iomux_cfg(IOMUX_REGS, 5);
    
    print_int_var("output_en      ",iomux_cfg_struct.output_en     ,0); 
    print_int_var("input_en       ",iomux_cfg_struct.input_en      ,0); 
    print_int_var("drive_strength ",iomux_cfg_struct.drive_strength,0); 
    print_int_var("slew_rate      ",iomux_cfg_struct.slew_rate     ,0); 
    print_int_var("pull_up        ",iomux_cfg_struct.pull_up       ,0); 
    print_int_var("pull_down      ",iomux_cfg_struct.pull_down     ,0); 
    print_int_var("hysteresis     ",iomux_cfg_struct.hysteresis    ,0); 
    print_int_var("sel            ",iomux_cfg_struct.sel           ,0); 
    print_int_var("rsvd_0         ",iomux_cfg_struct.rsvd_0        ,0); 
    print_int_var("input_val      ",iomux_cfg_struct.input_val     ,0); 

    UartPuts("Writing AAAA_AAAA on O/P of GPIO.\n");
    gpio_dout(GPIO_REGS, 0xAAAAAAAA);
    gpio_clr(GPIO_REGS, 0xFFFFFFFF);
    gpio_clr_en(GPIO_REGS, 0x00000000);

    iomux_val_rd = get_gpio_dout(GPIO_REGS); 
    if(iomux_val_rd == 0)
    {
        failed = 0;
    }
    else
    {
        failed++;
    }

    if(failed == 0)
    {
        UartPuts("-- GPIO CLR TEST PASSED **\n");
        UartPass();
    }
    else
    { 
        UartPuts("** GPIO CLR TEST FAILED**\n");
        UartFail();
    }

    UartEndSimulation();
    return 0;
}

