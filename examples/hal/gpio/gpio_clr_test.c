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
    IOMUX_PA_REG_s iomux_cfg_struct;

    GPIO_REGS->PWR_EN.packed_w = 0xAB000001;
    printf("Power EN Reg Written.\n");

    printf("GPIO CLR Base Test\n");
    
    gpio_dout_en(GPIO_REGS, 0xFFFFFFFF);
    
    printf("All Pins are enabled on GPIO.\n");

    for (i=0;i<29;i=i+1)
    {
        IOMUX_PA_N_WRITE(IOMUX_REGS, i, 1, 0, 0, 0, 0, 0, 0, 1, 0);
    } 
    iomux_cfg_struct = get_gpio_iomux_cfg(IOMUX_REGS, 5);
    
    print_int_var("output_en      ",iomux_cfg_struct.output_en     ,0); 
    print_int_var("input_en       ",iomux_cfg_struct.input_en      ,0); 
    print_int_var("drive_strength ",iomux_cfg_struct.drive_strength,0); 
    print_int_var("slew_rate      ",iomux_cfg_struct.slew_rate     ,0); 
    print_int_var("pull_up        ",iomux_cfg_struct.pull_up       ,0); 
    print_int_var("pull_down      ",iomux_cfg_struct.pull_down     ,0); 
    print_int_var("hysteresis     ",iomux_cfg_struct.hysteresis    ,0); 
    print_int_var("sel            ",iomux_cfg_struct.sel           ,0); 
    print_int_var("rsvd_0         ",iomux_cfg_struct.rsvd_0        ,0); 
    print_int_var("input_val      ",iomux_cfg_struct.input_val     ,0); 

    printf("Writing AAAA_AAAA on O/P of GPIO.\n");
    gpio_dout(GPIO_REGS, 0xAAAAAAAA);
    gpio_clr(GPIO_REGS, 0xFFFFFFFF);
    sram_mem_loc->mem[6] = 0xBBBBBBBB;
    gpio_clr_en(GPIO_REGS, 0x00000000);

    while (sram_mem_loc->mem[8] != 0x88888888) 
    {
        printf("Waiting for 0x88888888 to be written at location 8\n");
    }

    iomux_val = 0x00000000;
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
        printf("-- GPIO CLR TEST PASSED **\n");
        UartPass();
    }
    else
    { 
        printf("** GPIO CLR TEST FAILED**\n");
        UartFail();
    }

    for (int i = 0; i< 10000 ; i++ );
    UartEndSimulation();
    return 0;
}

