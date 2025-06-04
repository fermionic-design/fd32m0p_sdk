#include"uart_stdout_mcu.h"
#include "FD32M0P.h"
#include "flash.h"

void main(void) {
    int a = 19;
    UartStdOutInit();

    UartPuts("Start Of Simulation\n");
  
    flash_config(FLASH_APB_REGS, FLASH_SETTING_CFG_32MHZ_HIGH_SPEED_3V);
    
    UartPuts("Hello World. We are FermionIC Design Pvt Ltd.\n");
    print_int_var(" a =",a,0);
    print_int_var(" a =",a,1);

    UartPuts("** TEST PASSED **\n");
    UartPuts("End Of Simulation\n");
    UartEndSimulation();
}
