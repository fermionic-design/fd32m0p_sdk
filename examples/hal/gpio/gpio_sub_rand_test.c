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
    #if SEED
        srand(SEED);
    #endif
    uint32_t gpio_outs;
    int sub_cfg_reg, sub_en, action, bit_num, dout;
    GPIO_SUB_CFG_REG_s sub_cfg_val;
    UartStdOutInit();

    GPIO_REGS->PWR_EN.packed_w = 0xAB000001;
    printf("Power EN Reg Written.\n");

    printf("GPIO Base Test\n");
   
    gpio_dout_en(GPIO_REGS, 0xFFFFFFFF);
    
    GPIO_REGS->EVENT_EN0.packed_w = 0xFFFFFFFF;

    GPIO_REGS->EVENT_EN1.packed_w = 0xFFFFFFFF;
    
    sram_mem_loc->mem[10] = 0xFFFFFFFF;

    while (sram_mem_loc->mem[9] != 0xAAAAAAAA) 
    {
        printf("Waiting for 0xAAAAAAAA to be written\n");
    }
    dout = sram_mem_loc->mem[2];
    gpio_dout(GPIO_REGS, dout);
    
    sub_cfg_reg =  sram_mem_loc->mem[0];
    sub_en      = sub_cfg_reg & (0x00000001);
    action      = (sub_cfg_reg & (0x00000300))>>8;
    bit_num     = (sub_cfg_reg & (0x001F0000))>>16;
    
    gpio_sub_cfg(GPIO_REGS, 0, sub_en, action, bit_num);
    
    sub_cfg_reg =  sram_mem_loc->mem[1];
    sub_en      = sub_cfg_reg & (0x00000001); 
    action      = (sub_cfg_reg & (0x00000300))>>8;
    bit_num     = (sub_cfg_reg & (0x001F0000))>>16;

    gpio_sub_cfg(GPIO_REGS, 1, sub_en, action, bit_num);
    
    print_int_var("SUB1 : ",GPIO_REGS->SUB_CFG[1].packed_w,1);

    sub_cfg_val = get_gpio_sub_cfg(GPIO_REGS, 0);
    print_int_var("SUB_CFG0_sub_en : ",sub_cfg_val.sub_en, 1);
    print_int_var("SUB_CFG0_action : ",sub_cfg_val.action, 1);
    print_int_var("SUB_CFG0_bit_num : ",sub_cfg_val.bit_num, 1);

    sub_cfg_val = get_gpio_sub_cfg(GPIO_REGS, 1);
    print_int_var("SUB_CFG1_sub_en : ",sub_cfg_val.sub_en, 1);
    print_int_var("SUB_CFG1_action : ",sub_cfg_val.action, 1);
    print_int_var("SUB_CFG1_bit_num : ",sub_cfg_val.bit_num, 1);

    sram_mem_loc->mem[7] = 0x88888888;
    sram_mem_loc->mem[13] = 0xABBAABBA;
    
    gpio_outs =  get_gpio_dout(GPIO_REGS);

    print_int_var("gpio_outs :  ",gpio_outs,1);

    sram_mem_loc->mem[6] = gpio_outs;

    sram_mem_loc->mem[10] = 0xBBBBBBBB;
    
    sram_mem_loc->mem[2] = 0x0E9DC0DE;

    for (int i = 0; i< 10000 ; i++ );
    UartEndSimulation();
    return 0;
    }
