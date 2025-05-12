#include <stdio.h>
#include <stdint.h> 
#include <sys/types.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <string.h>

#include "CMSDK_CM0plus.h"
#include "core_cm0plus.h"
#include "uart_stdout.h"

#include "GPIO_CAPI.h"

#define GPIO_REGS  ((GPIO_REGS_s *) 0x40010000)
#define IOMUX_REGS  ((IOMUX_REGS_s *) 0x3FFC4000 )
typedef struct sram_memory {
    uint32_t mem[1024];
} sram_memory_t;

#define sram_mem_loc  ((sram_memory_t *)   0x200000F0)

int main(void) {
    int failed = 0;
    int din = 0;
    UartStdOutInit();
    int i;

    GPIO_REGS->PWR_EN.packed_w = 0xAB000001;
    printf("Power EN Reg Written.\n");

    printf("GPIO RD Base Test\n");
    gpio_dout_en(GPIO_REGS, 0x00000000); 
    printf("All Pins are enabled on GPIO.\n");
    
    for (i=0;i<29;i=i+1)
    {
        IOMUX_PA_N_WRITE(IOMUX_REGS, i, 0, 1, 0, 0, 0, 0, 0, 1, 0);
    } 
 
    sram_mem_loc->mem[2] = 0xAAAAAAAA;
    sram_mem_loc->mem[0] = 0xC001C0DE;

    while (sram_mem_loc->mem[3] != 0xBBBBBBBB) 
    {
        printf("Waiting for 0xBBBBBBBB to be written at location 3\n");
    }

    din = sram_mem_loc->mem[1];

    print_int_var("din = ", din,1);
    if(gpio_din(GPIO_REGS) == din)
    {
        printf("** Correct Value is set. **\n");
    }
    else 
    {
        failed++;
        printf("Correct Value is not set. \n");
    }

    if(failed == 0)
    {
        printf("** TEST PASSED **\n");
        UartPass();
    }
    else 
    { 
        printf("** TEST FAILED**\n");
        UartFail();
    }

    sram_mem_loc->mem[2] = 0x0E9DC0DE;

    for (int i = 0; i< 10000 ; i++);
    UartEndSimulation();
    return 0;
}


