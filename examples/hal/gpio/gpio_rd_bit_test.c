//////////////////////////////////////////////////////////////////////////////
////                        GPIO WR BIT TEST                              ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to read specific GPIO pin through     ////
////        a gpio_din_pinwise function.                                  ////
////                                                                      ////
////    Board Setup:                                                      ////
////        Input for programmed bit should be given at the chip top.     ////
////        Same should be read at the din register.                      ////
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////


#include <stdint.h> 

#include "uart_stdout_mcu.h"
#include "FD32M0P.h"

#include "gpio.h"


int main(void) {
    uint32_t failed = 0;
    uint32_t din;
    uint32_t i;

    UartStdOutInit();
    IOMUX_PA_REG_s iomux_cfg_struct;
    
    GPIO_PWR_EN_WRITE(GPIO_REGS, 1, GPIO_PWR_EN_PWR_EN_KEY);
    
    gpio_dout_en(GPIO_REGS, 0x00000000);
    
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

    iomux_cfg_struct.input_en         = 0;

    for (i=0;i<28;i=i+1)
    {
        if(i == 17) continue;
        if(i == 4) continue;
        if(i == 24) continue;
        iomux_cfg(IOMUX_REGS, iomux_cfg_struct, i);  
    }

    while( gpio_din_pinwise(GPIO_REGS,4) != 1);   
    UartPuts("PA4 is set.\n");

    while( gpio_din_pinwise(GPIO_REGS,24) != 1);   
    UartPuts("PA24 is set.\n");

    UartPuts("Read Test ends.\n");
    for (int i = 0; i< 1000 ; i++ );
    UartEndSimulation();
    return 0;
}

