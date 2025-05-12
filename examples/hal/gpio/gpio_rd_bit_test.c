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
    int pin2;
    UartStdOutInit();
    int i;
    GPIO_REGS->PWR_EN.packed_w = 0xAB000001;
    printf("Power EN Reg Written.\n");

    printf("GPIO Rd Base Test\n");
    printf("Reading pins 3,12 and 25 on I/P of GPIO.\n");
    
    gpio_dout_en(GPIO_REGS, 0x00000000);
    printf("All out pins are disabled on GPIO.\n");

    for (i=0;i<29;i=i+1)
    {
        IOMUX_PA_N_WRITE(IOMUX_REGS, i, 0, 1, 0, 0, 0, 0, 0, 1, 0);
    }
    
    sram_mem_loc->mem[6] = 0xBBBBBBBB;

    #ifdef NOT_PA2
        pin2 = 1;
    #else
        pin2 = gpio_din_pinwise(GPIO_REGS,2);
    #endif
        
    while (sram_mem_loc->mem[3] != 0xDDDDDDDD) 
    {
        printf("Waiting for 0xDDDDDDDD to be written at location 3\n");
    }

    if( gpio_din_pinwise(GPIO_REGS,27) == 0x00  & gpio_din_pinwise(GPIO_REGS,26) == 0x01 & gpio_din_pinwise(GPIO_REGS,25) == 0x00  & gpio_din_pinwise(GPIO_REGS,24) == 0x01)
    {
        printf("** Pin 26 and 24 are set. **\n");
    }
    else
    {
        printf(" Pin 26 and 24 are NOT set. \n");
        failed++;
    }
    if( gpio_din_pinwise(GPIO_REGS,15) == 0x00 & gpio_din_pinwise(GPIO_REGS,14) == 0x01 & gpio_din_pinwise(GPIO_REGS,13) == 0x00 & gpio_din_pinwise(GPIO_REGS,12) == 0x01)
    {
        printf("** Pin 14 and 12 is set. **\n");
    }
    else 
    {
        printf(" Pin 12 is NOT set. \n");
        failed++;
    }
    if(gpio_din_pinwise(GPIO_REGS,3) == 0x00 & pin2 & gpio_din_pinwise(GPIO_REGS,1) == 0x00 & gpio_din_pinwise(GPIO_REGS,0) == 0x01)
    {
        printf("** Pin 0 is set. **\n");
    }
    else
    {
        printf(" Pin 0 is NOT set. \n");
        failed++;
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

    sram_mem_loc->mem[0] = 0xC001C0DE;
    sram_mem_loc->mem[2] = 0x0E9DC0DE;

    for (int i = 0; i< 10000 ; i++ );
    UartEndSimulation();
    return 0;
    }

