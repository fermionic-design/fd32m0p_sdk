//////////////////////////////////////////////////////////////////////////////
////                        GPIO GLITCH FILTER TEST                       ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to test the glitch filter             ////
////        functionality of GPIO.                                        ////
////                                                                      ////
////    Board Setup:                                                      ////
////        PA6 is used in this example. PA6 is configured to filter a    //// 
////        glitch of upto 4 clock cycle(c.c) width. No interrupts should ////
////        be generated for an input signal of upto 4 c.c..              ////
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////

#include <stdint.h> 

#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "gpio.h"

int main(void) {

    uint32_t val,i;
    UartStdOutInit();
    IOMUX_PA_REG_s iomux_cfg_struct;

    GPIO_PWR_EN_WRITE(GPIO_REGS, 1, GPIO_PWR_EN_PWR_EN_KEY);
    UartPuts("Power EN Reg Written.\n");

    UartPuts("GPIO Glitch Filter Test\n");

    iomux_cfg_struct.output_en        = 0;
    iomux_cfg_struct.input_en         = 1;
    iomux_cfg_struct.drive_strength   = 0;
    iomux_cfg_struct.slew_rate        = 0;
    iomux_cfg_struct.pull_up          = 0;
    iomux_cfg_struct.pull_down        = 0;
    iomux_cfg_struct.hysteresis       = 0;
    iomux_cfg_struct.sel              = IOMUX_PIN_SEL_PA6_GPIO;
    iomux_cfg_struct.input_val        = 0;
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 6);

    GPIO_INTR_EVENT_EN(GPIO_REGS, 6);

    gpio_dout_en(GPIO_REGS, 0x00000000);
    UartPuts("All Pins are set for input on GPIO.\n");

    gpio_glitch_filter_cfg(GPIO_REGS, 6, GPIO_FILT_EN_WIDTH_4);
    val = get_gpio_glitch_filter_cfg(GPIO_REGS, 6);
    print_int_var("FILT_EN_6 :",val,0);

    for(i=0;i<28;i=i+1)
    {
        gpio_intr_polarity_cfg(GPIO_REGS, i, GPIO_INTR_POL_BOTH);
    }
    UartPuts("Enabled INTR_POL_0 \n");
    UartPuts("Enabled INTR_POL_1 \n");

    UartEndSimulation();
    return 0;
}
