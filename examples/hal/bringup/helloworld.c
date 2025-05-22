#include "FD32M0P.h"
#include "uart_stdout_mcu.h"
#include "utils.h"
#include "ADC_RW_API.h"

int main(void) {
    int a = 19;
    UartStdOutInit();
    UartPuts("Hello World\n");
    UartPuts("We are FermionIC Design Pvt Ltd\n");
    print_int_var("GPIO_ENUM: ", GPIO_FILT_EN_WIDTH_9,1);
    ADC_CHNL_CFG_N_WRITE(ADC0_REGS, 7, 1, 1, 1, 1, 1);
    print_int_var(" a =",a,0);
    print_int_var(" a =",a,1);
    UartPuts("** TEST PASSED **\n");
    UartEndSimulation();

    return 0;
}
