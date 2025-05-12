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
    int event_en0_reg, event_en1_reg;
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

    printf("GPIO INTR Test\n");
    gpio_dout_en(GPIO_REGS, 0x00000000);

    printf("Output is disabled on GPIO.\n");

    for(i=0;i<32;i=i+1)
    {
        GPIO_INTR_EVENT_EN(GPIO_REGS, i);
    }
   
    printf("Enabled INTR 0. \n");
    printf("Enabled INTR 1. \n");

    for(i=0;i<32;i=i+1)
    {
        GPIO_GENERIC_EVENT_EN(GPIO_REGS, i);
    }
    
    event_en0_reg = GPIO_REGS->EVENT_EN0.packed_w;
    print_int_var("event_en0_reg", event_en0_reg, 1);

    event_en1_reg = GPIO_REGS->EVENT_EN1.packed_w;
    print_int_var("event_en1_reg", event_en1_reg, 1);

    GPIO_REGS->EVENT_EN0.packed_w = 0xFFFFFFFF;
    GPIO_REGS->EVENT_EN1.packed_w = 0xFFFFFFFF;

    event_en0_reg = GPIO_REGS->EVENT_EN0.packed_w;
    print_int_var("event_en0_reg", event_en0_reg, 1);

    event_en1_reg = GPIO_REGS->EVENT_EN1.packed_w;
    print_int_var("event_en1_reg", event_en1_reg, 1);

    for(i=0;i<28;i=i+1)
    {
        gpio_intr_polarity_cfg(GPIO_REGS, i, GPIO_INTR_POL_BOTH);
    }

    printf("Enabled INTR_POL_0 \n");
    printf("Enabled INTR_POL_1 \n");
    sram_mem_loc->mem[11] = 0xBBBBBBBB;

    while (sram_mem_loc->mem[7] != 0xABABABAB) 
    {
        printf("Waiting for 0xABABABAB to be written at location 8\n");
    }

    sram_mem_loc->mem[5] = 0x99999999;
    
    while (sram_mem_loc->mem[13] != 0xEEEEEEEE) 
    {
        printf("Waiting for 0xEEEEEEEE to be written at location 8\n");
    }

    
    #ifdef NOT_PA2 
        intr_val =0x0FFFFFFB;
    #else
        intr_val =0x0FFFFFFF;
    #endif
    print_int_var("intr_val = ", intr_val,1);
    intr_val_regs = GPIO_REGS->INTR_EVENT.packed_w;
    print_int_var("intr_val_regs = ", intr_val_regs,1);
    
    if(GPIO_REGS->INTR_EVENT.packed_w == intr_val)
    {
        printf("** INTR_RSNG : Correct Value is set. **\n");
    }
    else 
    {
        failed++;
        printf("INTR_RSNG : Correct Value is not set. \n");
    }
    GPIO_REGS->INTR_EVENT.packed_w = 0xFFFFFFFF;

    sram_mem_loc->mem[4] = 0x88888888;
    while (sram_mem_loc->mem[10] != 0xAAAAAAAA) 
    {
        printf("Waiting for 0xAAAAAAAA to be written at location 8\n");
    }
    
    
    while (sram_mem_loc->mem[9] != 0x55555555) 
    {
        printf("Waiting for 0x55555555 to be written at location 9\n");
    }
    #ifdef NOT_PA2 
        intr_val =0x0FFFFFFB;
    #else
        intr_val =0x0FFFFFFF;
    #endif
    print_int_var("intr_val falling= ", intr_val,1);
    intr_val_regs = GPIO_REGS->INTR_EVENT.packed_w;
    print_int_var("intr_val_regs = ", intr_val_regs,1);
    
    if(GPIO_REGS->INTR_EVENT.packed_w == intr_val)
    {
        printf("** INTR_FLNG : Correct Value is set. **\n");
    }
    else 
    {
        failed++;
        printf("INTR_FLNG : Correct Value is not set. \n");
    }

    sram_mem_loc->mem[0] = 0xC001C0DE;
    sram_mem_loc->mem[2] = 0x0E9DC0DE;

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

    for (int i = 0; i< 10000 ; i++);
    UartEndSimulation();
    return 0;
}

