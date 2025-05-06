#include <stdio.h>

#include "CMSDK_CM0plus.h"
#include "core_cm0plus.h"
#include "uart_stdout.h"
#include "utils.h"
#include "GPIO_REGS.h"
#include "ADC_REGS.h"
#include "ADC_RW_API.h"

#define ADC_REGS   ((ADC_REGS_s *) 0x40040000)
int main(void) {
    int a = 19;
    UartStdOutInit();
    UartPuts("Hello World. We are FermionIC Design Pvt Ltd. using SDK\n");
    print_int_var("GPIO_ENUM: ", GPIO_FILT_EN_FILT_WIDTH_9,1);
    ADC_CHNL_CFG_N_WRITE(ADC_REGS, 7, 1, 1, 1, 1, 1);
    //ADC_REGS->CHNL_CFG[7].channel_sel = 7;
    print_int_var(" a =",a,0);
    print_int_var(" a =",a,1);
    UartPuts("** TEST PASSED **\n");
    UartEndSimulation();

    return 0;
}
