#include"uart_stdout_mcu.h"
#include "FD32M0P.h"
#include "vultan_flash.h"

int main(void) {
    UartStdOutInit();

    eeprom_program_routine(FLASH_APB_REGS, VULTAN_APB_REGS, 0, 0xEE);
    eeprom_program_routine(FLASH_APB_REGS, VULTAN_APB_REGS, 1, 0xCD);

    print_int_var("eeprom_data : ", EEPROM_MEM_REGS->mem[0], 1);
    print_int_var("eeprom_data : ", EEPROM_MEM_REGS->mem[1], 1);

    UartEndSimulation();
    return 0;
}
