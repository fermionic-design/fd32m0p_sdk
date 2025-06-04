//////////////////////////////////////////////////////////////////////////////
////                        GPIO WR BASIC TEST                            ////
////    DESCRIPTION:                                                      ////      
////        This is a basic test to write GPIO pin through                ////
////        a gpio_dout function.                                         ////
////                                                                      ////
////    Board Setup:                                                      ////
////        Output for programmed bit should be read at the chip top.     ////
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////

#include <stdint.h> 

#include "uart_stdout_mcu.h"
#include "FD32M0P.h"
#include "gpio.h"

int main(void) {

    uint32_t i,val;

    UartStdOutInit();
    IOMUX_PA_REG_s iomux_cfg_struct;
    GPIO_PWR_EN_WRITE(GPIO_REGS, 1, GPIO_PWR_EN_PWR_EN_KEY);
    UartPuts("Power EN Reg Written.\n");

    UartPuts("GPIO Write Basic Test\n");

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
        if (i == 17) continue; // skipping UART TX IO MUX cfg.
        iomux_cfg(IOMUX_REGS, iomux_cfg_struct, i);
    }

    gpio_dout_en(GPIO_REGS, 0xFFFEFFFF);
    UartPuts("All Pins are enabled on GPIO.\n");

    UartPuts("Writing any value on GPIO.\n");
    gpio_dout(GPIO_REGS, 0x0898FFFF);

    UartPuts("GPIO Write Basic Test ends.\n");   
    UartEndSimulation();
    return 0;
}