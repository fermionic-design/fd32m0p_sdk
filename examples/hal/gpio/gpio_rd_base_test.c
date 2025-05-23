//////////////////////////////////////////////////////////////////////////////
////                        GPIO RD BASE TEST                             ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to read the inputs at the             ////
////        pins                                                          ////
////                                                                      ////
////    Board Setup:                                                      ////
////        Pins whose value is to be read should be connected to         //// 
////        the signals which are to be read.                             ////
////                                                                      ////
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////

#include <stdint.h> 

#include "uart_stdout_mcu.h"
#include "FD32M0P.h"
#include "gpio.h"


int main(void) {
    uint32_t failed = 0;
    uint32_t din = 0;
    uint32_t i;

    UartStdOutInit();
    IOMUX_PA_REG_s iomux_cfg_struct;

    GPIO_PWR_EN_WRITE(GPIO_REGS, 1, GPIO_PWR_EN_PWR_EN_KEY);
    UartPuts("Power EN Reg Written.\n");

    UartPuts("GPIO RD Base Test\n");
    gpio_dout_en(GPIO_REGS, 0x00000000); 
    UartPuts("All Pins are enabled on GPIO.\n");
   
    iomux_cfg_struct.output_en        = 0;
    iomux_cfg_struct.input_en         = 1;
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
 
    while(gpio_din(GPIO_REGS) != 0);
    din = gpio_din(GPIO_REGS);

    print_int_var("din :", din, 0);
    
    UartPuts("GPIO Read Test Ends\n");

    for (int i = 0; i< 10000 ; i++);
    UartEndSimulation();
    return 0;
}


