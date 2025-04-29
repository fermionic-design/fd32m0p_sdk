#include <stdio.h>

#include "CMSDK_CM0plus.h"
#include "core_cm0plus.h"
#include "uart_stdout.h"
#include "utils.h"

int main(void) {
    int a = 19;
    UartStdOutInit();
    UartPuts("Hello World. We are FermionIC Design Pvt Ltd. using SDK\n");
    print_int_var(" a =",a,0);
    print_int_var(" a =",a,1);
    UartPuts("** TEST PASSED **\n");
    UartEndSimulation();

    return 0;
}
