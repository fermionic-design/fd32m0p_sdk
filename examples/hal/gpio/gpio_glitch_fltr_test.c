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
    uint32_t gpio_outs; 
    UartStdOutInit();
    int val,i;
    GPIO_REGS->PWR_EN.packed_w = 0xAB000001;
    printf("Power EN Reg Written.\n");

    printf("GPIO Glitch Filter Test\n");
 
    for (i=0;i<29;i=i+1)
    {
        IOMUX_PA_N_WRITE(IOMUX_REGS, i, 0, 1, 0, 0, 0, 0, 0, 1, 0);
    } 

    GPIO_REGS->INTR_EN0.packed_w = 0xFFFFFFFF;
    printf("Enabled INTR 0. \n");

    GPIO_REGS->INTR_EN1.packed_w = 0xFFFFFFFF;
    printf("Enabled INTR 1. \n");

    gpio_dout_en(GPIO_REGS, 0x00000000);
    printf("All Pins are enabled on GPIO.\n");

    GPIO_REGS->EVENT_EN0.packed_w = 0xFFFFFFFF;
    printf("Events 0 are enabled on GPIO.\n");

    GPIO_REGS->EVENT_EN1.packed_w = 0xFFFFFFFF;
    printf("Events 1 are enabled on GPIO.\n");

    gpio_glitch_filter_cfg(GPIO_REGS, 6, GPIO_FILT_EN_WIDTH_4);
    
    val = get_gpio_glitch_filter_cfg(GPIO_REGS, 6);
    print_int_var("FILT_EN_6",val,0);

    for(i=0;i<28;i=i+1)
    {
        gpio_intr_polarity_cfg(GPIO_REGS, i, GPIO_INTR_POL_BOTH);
    }
    val = get_gpio_intr_polarity_cfg( GPIO_REGS, 5);
    print_int_var("intr_pol for 5",val,0);
    printf("Enabled INTR_POL_0 \n");
    printf("Enabled INTR_POL_1 \n");

    sram_mem_loc->mem[10] = 0xFFFFFFFF;
   
    while (sram_mem_loc->mem[4] != 0x22222222) 
    {
        printf("Waiting for 0x22222222 to be written at location 4\n");
    }

    sram_mem_loc->mem[8] = 0x34343434; 

    if (GPIO_REGS->INTR_EVENT.intr6 == 0) 
    {
        printf("INTR_EVENT[6] is not set as glitch filter is on.\n");
        UartPass();
    }
    else 
    {
        printf("Failed : INTR_EVENT[6] is set.\n");
        UartFail();
    }

    while (sram_mem_loc->mem[4] != 0x33333333) 
    {
        printf("Waiting for 0x33333333 to be written at location 4\n");
    }

    if (GPIO_REGS->INTR_EVENT.intr6 == 1) 
    {
        printf("INTR_EVENT[6] is set.\n");
        UartPass();
    }
    else 
    {
        printf(" FAILED : INTR_EVENT[6] is not set.\n");
        UartFail();
    }
    
    sram_mem_loc->mem[7] = 0x88888888;

    GPIO_REGS->INTR_EVENT.intr6 == 1;
    gpio_glitch_filter_cfg(GPIO_REGS, 7, GPIO_FILT_EN_WIDTH_9);
    printf("Glitch Filter is disabled on GPIO.\n");

    sram_mem_loc->mem[0] = 0xABBAABBA;

    while (sram_mem_loc->mem[4] != 0x44444444) 
    {
        printf("Waiting for 0x44444444 to be written at location 4\n");
    }


    if (GPIO_REGS->INTR_EVENT.intr7 == 0) 
    {
        printf("INTR_EVENT[7] is not set as GLITCH FILTER is on.\n");
        UartPass();
    }
    else 
    {
        printf("INTR_EVENT[7] is set.\n");
        UartFail();
    }

    while (sram_mem_loc->mem[5] != 0x55555555) 
    {
        printf("Waiting for 0x55555555 to be written at location 4\n");
    }

    if (GPIO_REGS->INTR_EVENT.intr7 == 1) 
    {
        printf("INTR_EVENT[7] is set as GPIO is set for longer cycles than the glitch filter is on.\n");
        UartPass();
    }
    else 
    {
        printf(" FAILED : INTR_EVENT[7] is not set.\n");
        UartFail();
    }   
    sram_mem_loc->mem[2] = 0x0E9DC0DE;

    for (int i = 0; i< 10000 ; i++ );
    UartEndSimulation();
    return 0;
}
