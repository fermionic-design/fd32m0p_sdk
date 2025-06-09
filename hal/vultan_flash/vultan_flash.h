/** @addtogroup FD32M0P_HAL FD32M0P Hardware Abstraction Layer
 *  @{
 */

/** @defgroup VULTAN_FLASH_HAL
 *  @{
 */

#ifndef HAL_VULTAN_FLASH_H
#define HAL_VULTAN_FLASH_H

#include "VULTAN_FLASH_REGS.h"
#include "VULTAN_FLASH_RW_API.h"
#include "FLASH_REGS.h"
#include "FLASH_RW_API.h"
#include <stdbool.h>
#include "FD32M0P.h"

#define EEPROM_MEM_REGS ((eeprom_block_t *) EEPROM_READ_BASE)

/*!
 *  @brief  This struct is used to access EEPROM Reads.
 *  @Note   Even if the size of each mem in the struct is Halfword, each eeprom location is byte.
 */
typedef struct eeprom_block {
    volatile uint16_t mem[64];
}eeprom_block_t;

/**
 * @brief   This function is used to populate eeprom space
 *
 * @param   flash_regs : pointer to flash register space
 * @param   vultan_flash_regs_ptr : pointer to vultan flash controller register space
 * @param   addr : eeprom address to be populated
 * @param   data : byte data to be written to the flash location
 *
 * @retval  void
 */
__attribute__((section(".sram_code"))) void eeprom_program_routine(FLASH_REGS_s *FLASH_REGS, VULTAN_FLASH_REGS_s *VULTAN_FLASH_REGS_PTR, uint8_t addr, uint8_t data);

#endif

/** @} */
/** @} */
