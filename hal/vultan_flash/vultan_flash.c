#include "vultan_flash.h"

/*
 *  ========  eeprom_program_routine ========
 */

__attribute__((section(".sram_code"))) void eeprom_program_routine(FLASH_REGS_s *FLASH_REGS, VULTAN_FLASH_REGS_s *VULTAN_FLASH_REGS_PTR, uint8_t addr, uint8_t data) {
    FLASH_REGS->HSIZE_CTRL.force_hsize_val = 0;
    FLASH_REGS->HSIZE_CTRL.force_hsize_en  = 1;
    if((VULTAN_FLASH_REGS_PTR->STATUS.packed_w & 0x0000003F) == 0){
        // EEPROM Address
        VULTAN_FLASH_REGS_PTR->ADDR.packed_w  = EEPROM_WRITE_BASE + (addr<<6);
        // EEPROM Data
        VULTAN_FLASH_REGS_PTR->DATA0.packed_w = (uint32_t)data;
        // Indicating the programming is done
        FLASH_REGS->TIME_UPTD.flash_config_done = 1; 
        // Waiting for flash to go in idle
        while(FLASH_REGS->TIME_UPTD.flash_config_done == 1); 
        // Row write command
        VULTAN_FLASH_REGS_PTR->CTRL.packed_w = VULTAN_FLASH_CTRL_CMD_ROW_WRITE;
    }
    // Polling for the Status Register
    while(!(VULTAN_FLASH_REGS_PTR->STATUS.packed_w  & 0x0000003F));
    // Waiting for the Command to Finish
    while((VULTAN_FLASH_REGS_PTR->STATUS.packed_w  & 0x0000000C)==0);
    
    // Clearing IRQ
    VULTAN_FLASH_REGS_PTR->IRQ_STATUS_CLR.packed_w = 0x0000003F;
    
    FLASH_REGS->HSIZE_CTRL.force_hsize_en  = 0;
    // Indicating the programming is done
    FLASH_REGS->TIME_UPTD.flash_config_done = 1; 
    // Waiting for flash to go in idle
    while(FLASH_REGS->TIME_UPTD.flash_config_done == 1); 
}
