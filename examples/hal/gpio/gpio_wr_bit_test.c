//////////////////////////////////////////////////////////////////////////////
////                        GPIO WR BIT TEST                              ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to write specific GPIO pin through    ////
////        a gpio_dout_pinwise function.                                 ////
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

    UartPuts("GPIO Wr Bit Test\n");

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

    UartPuts("Writing 1 on Pin 1,6 and 27 on O/P of GPIO.\n");
    
    gpio_dout_en(GPIO_REGS, 0xFFFFFFFF);
    UartPuts("All Pins are enabled on GPIO.\n");

    gpio_dout_pinwise(GPIO_REGS, 1, 1);
    val = GPIO_REGS->DOUT_3_0.packed_w;
    print_int_var("pin1 : ", val, 0);
    UartPuts("1 written to GPIO Pin 1. \n");

    gpio_dout_pinwise(GPIO_REGS, 6, 1);
    val = GPIO_REGS->DOUT_7_4.packed_w;
    print_int_var("pin6 : ", val, 0);
    UartPuts("1 written to GPIO Pin 6. \n");

    gpio_dout_pinwise(GPIO_REGS, 27, 1);
    val = GPIO_REGS->DOUT_27_24.packed_w;
    print_int_var("pin27 : ", val, 0);
    UartPuts("1 written to GPIO Pin 27. \n");

    UartPuts("GPIO Write Bit Test ends.\n");   
    UartEndSimulation();
    return 0;
}
