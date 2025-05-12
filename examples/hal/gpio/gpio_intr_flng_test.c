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
    int intr_val;
    int intr_val_regs;
    int failed = 0;
    UartStdOutInit();
    int i;
    IOMUX_PA_REG_s iomux_cfg_struct;

    iomux_cfg_struct.output_en        = 0;
    iomux_cfg_struct.input_en         = 1;
    iomux_cfg_struct.drive_strength   = 0;
    iomux_cfg_struct.slew_rate        = 0;
    iomux_cfg_struct.pull_up          = 0;
    iomux_cfg_struct.pull_down        = 0;
    iomux_cfg_struct.hysteresis       = 0;
    iomux_cfg_struct.sel              = 1;
    iomux_cfg_struct.input_val        = 1;
    
    for (i=0;i<29;i=i+1)
    {
        iomux_cfg(IOMUX_REGS, iomux_cfg_struct, i);
    }
    
    GPIO_REGS->PWR_EN.packed_w = 0xAB000001;
    printf("Power EN Reg Written.\n");

    printf("GPIO INTR FLNG TEST\n");

    gpio_dout_en(GPIO_REGS, 0x00000000);
    printf("Output is disabled on GPIO.\n");

    GPIO_REGS->INTR_EN0.packed_w = 0xFFFFFFFF;
    printf("Enabled INTR 0. \n");

    GPIO_REGS->INTR_EN1.packed_w = 0xFFFFFFFF;
    printf("Enabled INTR 1. \n");

    for(i=0;i<28;i=i+1)
    {
        gpio_intr_polarity_cfg(GPIO_REGS, i, GPIO_INTR_POL_NEG);
    }
    printf("Enabled INTR_POL_0 \n");

    printf("Enabled INTR_POL_1 \n");

    sram_mem_loc->mem[6] = 0xBBBBBBBB;

    while (sram_mem_loc->mem[8] != 0xDDDDDDDD) 
    {
        printf("Waiting for 0xDDDDDDDD to be written at location 8\n");
    }

    #ifdef NOT_PA2
        intr_val = 0x0CCCCCC8;
    #else
        intr_val = 0x0CCCCCCC;
    #endif
    sram_mem_loc->mem[7] = 0xCCCCCCCC;


    while (sram_mem_loc->mem[9] != 0xAAAAAAAA) 
    {
        printf("Waiting for 0xDDDDDDDD to be written at location 9\n");
    }

    intr_val_regs = GPIO_REGS->INTR_EVENT.packed_w;
    print_int_var("intr_val_regs = ", intr_val_regs,1);

    if(GPIO_REGS->INTR_EVENT.packed_w == intr_val)
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
        printf("-- GPIO INTR FLNG TEST PASSED --\n");
        UartPass();
    }
    else
    { 
        printf("** GPIO INTR FLNG TEST FAILED **\n");
        UartFail();
    }

    for (int i = 0; i< 10000 ; i++ );
    UartEndSimulation();
    return 0;
    }
