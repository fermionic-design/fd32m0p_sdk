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

    int iomux_val;
    int iomux_val_rd;
    int failed = 0;
    int i;
    UartStdOutInit();

    GPIO_REGS->PWR_EN.packed_w = 0xAB000001;
    printf("Power EN Reg Written.\n");

    printf("GPIO Base Test\n");
    printf("Writing AAAA_AAAA on O/P of GPIO.\n");
    
    printf("All Pins are enabled on GPIO.\n");

    gpio_dout(GPIO_REGS, 0xAAAAAAAA);
    printf("AAAA_AAAA written on GPIO.\n");

    sram_mem_loc->mem[0] = 0xAAAAAAAA;    
    printf("AAAA_AAAA written in SRAM location : 0x200000F0.\n");

    
    for (i=0;i<29;i=i+1)
    {
        IOMUX_PA_N_WRITE(IOMUX_REGS, i, 1, 0, 0, 0, 0, 0, 0, 1, 0);
    }
    
    printf("All Pins are set for output. \n");

    gpio_set(GPIO_REGS, 0xFFFFFFFF);
    printf("All pins are set on GPIO.\n");

    gpio_set_en(GPIO_REGS, 0xFFFFFFFF);
    printf("All pins are set on GPIO.\n");

    sram_mem_loc->mem[6] = 0xBBBBBBBB;
    while (sram_mem_loc->mem[8] != 0x88888888) 
    {
        printf("Waiting for 0x88888888 to be written at location 8\n");
    }

    iomux_val = 0x0FFFFFFF;
    iomux_val_rd = sram_mem_loc->mem[3];

    if(iomux_val_rd == iomux_val)
    {
        printf("-- Correct Value is set. --\n");
    }
    else 
    {
        failed++;
        printf("** Correct Value is not set. **\n");
    }
    sram_mem_loc->mem[0] = 0xC001C0DE;
    sram_mem_loc->mem[2] = 0x0E9DC0DE;

    if(failed == 0)
    {
        printf("-- GPIO SET TEST PASSED --\n");
        UartPass();
    }
    else
    { 
        printf("** GPIO SET TEST FAILED**\n");
        UartFail();
    }

    for (int i = 0; i< 10000 ; i++ );
    UartEndSimulation();
    return 0;
    }

