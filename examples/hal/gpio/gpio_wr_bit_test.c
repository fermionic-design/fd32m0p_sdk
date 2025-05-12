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
    int i,val;
    UartStdOutInit();

    GPIO_REGS->PWR_EN.packed_w = 0xAB000001;
    printf("Power EN Reg Written.\n");

    printf("GPIO Wr Bit Test\n");
    printf("Writing 1 on Pin 1,6 and 27 on O/P of GPIO.\n");
    
    gpio_dout_en(GPIO_REGS, 0xFFFFFFFF);
    printf("All Pins are enabled on GPIO.\n");

    gpio_dout_pinwise(GPIO_REGS, 1, 1);
    val = GPIO_REGS->DOUT_3_0.packed_w;
    print_int_var("pin1 : ", val, 0);

    printf("1 written to GPIO Pin 1. \n");

    gpio_dout_pinwise(GPIO_REGS, 6, 1);
    val = GPIO_REGS->DOUT_7_4.packed_w;
    print_int_var("pin6 : ", val, 0);
    printf("1 written to GPIO Pin 6. \n");

    gpio_dout_pinwise(GPIO_REGS, 27, 1);
    val = GPIO_REGS->DOUT_27_24.packed_w;
    print_int_var("pin27 : ", val, 0);
    printf("1 written to GPIO Pin 27. \n");

    sram_mem_loc->mem[5] = 0x08000042;    
    printf("0x8000_0042 written in SRAM location : 0x200000F0.\n");

    for (i=0;i<29;i=i+1)
    {
        IOMUX_PA_N_WRITE(IOMUX_REGS, i, 1, 0, 0, 0, 0, 0, 0, 1, 0);
    }
    sram_mem_loc->mem[6] = 0xBBBBBBBB;

    while (sram_mem_loc->mem[8] != 0xDDDDDDDD) 
    {
        printf("Waiting for 0xDDDDDDDD to be written at location 8\n");
    }

    if(sram_mem_loc->mem[9] == sram_mem_loc->mem[5])
    {
        printf("** Correct Value is set. **\n");
    }
    else 
    {
        failed++;
        printf("Correct Value is not set. \n");
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
