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
    UartStdOutInit();
    uint32_t i;

    GPIO_REGS->PWR_EN.packed_w = 0xAB000001;
    UartPuts("Power EN Reg Written.\n");

    UartPuts("GPIO RD Base Test\n");
    gpio_dout_en(GPIO_REGS, 0x00000000); 
    UartPuts("All Pins are enabled on GPIO.\n");
    
    for (i=0;i<29;i=i+1)
    {
        IOMUX_PA_N_WRITE(IOMUX_REGS, i, 0, 1, 0, 0, 0, 0, 0, 1, 0);
    } 
 
    while(gpio_din(GPIO_REGS) != 0);
    din = gpio_din(GPIO_REGS);

    print_int_var("din :", din, 0);
    
    UartPuts("GPIO Read Test Ends\n");

    for (int i = 0; i< 10000 ; i++);
    UartEndSimulation();
    return 0;
}


