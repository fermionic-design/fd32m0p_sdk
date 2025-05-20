#include <stdio.h>
#include "uart_stdout.h"
#include "FLASH_REGS.h"

#include "../../hal/flash/flash.h"

#define FLASH_REGS    ((FLASH_REGS_s    *) 0x3FFDC000)
#define FLASH_REG     ((inf_block_t     *) 0x00009000)

typedef union eeprom_mem_u {
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
} eeprom_mem_u;

typedef struct inf_block{
    volatile eeprom_mem_u mem[4];
}inf_block_t;

void main(void) {
    int a = 19;
    volatile int rdata;
    UartStdOutInit();

    printf("Start Of Simulation\n");
  
    flash_config(FLASH_REGS, FLASH_SETTING_CFG_48MHZ_HIGH_SPEED_3V);
    
    printf("Hello World. We are FermionIC Design Pvt Ltd.\n");
    print_int_var(" a =",a,0);
    print_int_var(" a =",a,1);

    rdata = FLASH_REG->mem[0].packed_byte[0];
    //flash_factory_restore(FLASH_REGS);
    printf("** TEST PASSED **\n");

    printf("End Of Simulation\n");

    UartEndSimulation();
}
