#ifndef HAL_FLASH_H
#define HAL_FLASH_H

#include "FLASH_REGS.h"
#include "FLASH_RW_API.h"

/*!
 *  @brief  Enum for flash configuration setting involving clk,
 *  mode of operation and input VDD to the flash
 */
typedef enum {
    FLASH_SETTING_CFG_48MHZ_HIGH_SPEED_3V   = 0,     
    FLASH_SETTING_CFG_32MHZ_HIGH_SPEED_3V   = 1, 
    FLASH_SETTING_CFG_24MHZ_HIGH_SPEED_3V   = 2, 
    FLASH_SETTING_CFG_16MHZ_HIGH_SPEED_3V   = 3, 
    FLASH_SETTING_CFG_8MHZ_HIGH_SPEED_3V    = 4, 
    FLASH_SETTING_CFG_4MHZ_HIGH_SPEED_3V    = 5, 
    FLASH_SETTING_CFG_48MHZ_HIGH_SPEED_1P8V = 6, 
    FLASH_SETTING_CFG_32MHZ_HIGH_SPEED_1P8V = 7, 
    FLASH_SETTING_CFG_24MHZ_HIGH_SPEED_1P8V = 8, 
    FLASH_SETTING_CFG_16MHZ_HIGH_SPEED_1P8V = 9, 
    FLASH_SETTING_CFG_8MHZ_HIGH_SPEED_1P8V  = 10, 
    FLASH_SETTING_CFG_4MHZ_HIGH_SPEED_1P8V  = 11, 
    FLASH_SETTING_CFG_48MHZ_LOW_POWER_3V    = 12,     
    FLASH_SETTING_CFG_32MHZ_LOW_POWER_3V    = 13,     
    FLASH_SETTING_CFG_24MHZ_LOW_POWER_3V    = 14, 
    FLASH_SETTING_CFG_16MHZ_LOW_POWER_3V    = 15, 
    FLASH_SETTING_CFG_8MHZ_LOW_POWER_3V     = 16, 
    FLASH_SETTING_CFG_4MHZ_LOW_POWER_3V     = 17, 
    FLASH_SETTING_CFG_48MHZ_LOW_POWER_1P8V  = 18, 
    FLASH_SETTING_CFG_32MHZ_LOW_POWER_1P8V  = 19, 
    FLASH_SETTING_CFG_24MHZ_LOW_POWER_1P8V  = 20, 
    FLASH_SETTING_CFG_16MHZ_LOW_POWER_1P8V  = 21, 
    FLASH_SETTING_CFG_8MHZ_LOW_POWER_1P8V   = 22, 
    FLASH_SETTING_CFG_4MHZ_LOW_POWER_1P8V   = 23,
    FLASH_SETTING_CFG_DEF_HIGH_SPEED_1P8V   = 24
} flash_setting_cfg_e;

/*!
 *  @brief  Struct for flash timing and mode of operations
 */
typedef struct flash_timing_regs_cfg_t {
    uint16_t    tcsctrls;                   /*! cs to read / wr_setup time */    
    uint16_t    tras;                       /*! read to address setup time */ 
    uint16_t    eeprom_tras;                /*! read to address setup time @eeprom */
    uint16_t    trc;                        /*! read cycle time */
    uint16_t    eeprom_trc;                 /*! read cycle time @eeprom */
    uint16_t    tadhr;                      /*! address hold time to read */
    uint16_t    tads;                       /*! address / data setup time */
    uint16_t    twpw;                       /*! wr pulse width */ 
    uint16_t    tpwcsh;                     /*! vdd hold time after cs fails */
    uint16_t    twrc;                       /*! write recovery time */
    uint32_t    twes;                       /*! busy endurance specification */
    uint16_t    tbr;                        /*! busy reset time for cs */
    uint8_t     high_speed;                 /*! high speed/lowpower */
} flash_timing_regs_cfg_t;

/*!
 *  @brief  Default Values for flash with different mode of operations
 */
#define  FLASH_TIMING_CFG_48MHZ_HIGH_SPEED_3V { \
    .high_speed     = 1, \
    .tcsctrls       = 4, \
    .tras           = 3, \
    .eeprom_tras    = 11, \
    .trc            = 2, \
    .eeprom_trc     = 11, \
    .tadhr          = 0, \
    .tads           = 0, \
    .twpw           = 4, \
    .tpwcsh         = 4, \
    .twrc           = 4, \
    .twes           = 143963, \
    .tbr            = 4 \
}

#define FLASH_TIMING_CFG_32MHZ_HIGH_SPEED_3V { \
    .high_speed     = 1,\
    .tcsctrls       = 3,\
    .tras           = 2,\
    .eeprom_tras    = 7,\
    .trc            = 1,\
    .eeprom_trc     = 7,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 3,\
    .tpwcsh         = 3,\
    .twrc           = 3,\
    .twes           = 95999,\
    .tbr            = 3\
}

#define FLASH_TIMING_CFG_24MHZ_HIGH_SPEED_3V { \
    .high_speed     = 1,\
    .tcsctrls       = 2,\
    .tras           = 2,\
    .eeprom_tras    = 5,\
    .trc            = 1,\
    .eeprom_trc     = 5,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 2,\
    .tpwcsh         = 2,\
    .twrc           = 2,\
    .twes           = 71942,\
    .tbr            = 2\
}

#define FLASH_TIMING_CFG_16MHZ_HIGH_SPEED_3V { \
    .high_speed     = 1,\
    .tcsctrls       = 1,\
    .tras           = 1,\
    .eeprom_tras    = 3,\
    .trc            = 0,\
    .eeprom_trc     = 3,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 1,\
    .tpwcsh         = 1,\
    .twrc           = 1,\
    .twes           = 47999,\
    .tbr            = 1\
}

#define FLASH_TIMING_CFG_8MHZ_HIGH_SPEED_3V { \
    .high_speed     = 1,\
    .tcsctrls       = 0,\
    .tras           = 1,\
    .eeprom_tras    = 1,\
    .trc            = 0,\
    .eeprom_trc     = 1,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 0,\
    .tpwcsh         = 0,\
    .twrc           = 0,\
    .twes           = 23999,\
    .tbr            = 0\
}

#define FLASH_TIMING_CFG_4MHZ_HIGH_SPEED_3V { \
    .high_speed     = 1,\
    .tcsctrls       = 0,\
    .tras           = 1,\
    .eeprom_tras    = 0,\
    .trc            = 0,\
    .eeprom_trc     = 0,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 0,\
    .tpwcsh         = 0,\
    .twrc           = 0,\
    .twes           = 11999,\
    .tbr            = 0\
}

#define FLASH_TIMING_CFG_48MHZ_HIGH_SPEED_1P8V { \
    .high_speed     = 1,\
    .tcsctrls       = 4,\
    .tras           = 12,\
    .eeprom_tras    = 95,\
    .trc            = 11,\
    .eeprom_trc     = 95,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 4,\
    .tpwcsh         = 4,\
    .twrc           = 4,\
    .twes           = 143953,\
    .tbr            = 4\
}

#define  FLASH_TIMING_CFG_32MHZ_HIGH_SPEED_1P8V { \
    .high_speed     = 1,\
    .tcsctrls       = 3,\
    .tras           = 8,\
    .eeprom_tras    = 63,\
    .trc            = 7,\
    .eeprom_trc     = 63,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 3,\
    .tpwcsh         = 3,\
    .twrc           = 3,\
    .twes           = 95999,\
    .tbr            = 3\
}

#define FLASH_TIMING_CFG_24MHZ_HIGH_SPEED_1P8V { \
    .high_speed     = 1,\
    .tcsctrls       = 2,\
    .tras           = 6,\
    .eeprom_tras    = 47,\
    .trc            = 5,\
    .eeprom_trc     = 47,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 2,\
    .tpwcsh         = 2,\
    .twrc           = 2,\
    .twes           = 71942,\
    .tbr            = 2\
}

#define FLASH_TIMING_CFG_16MHZ_HIGH_SPEED_1P8V { \
    .high_speed     = 1,\
    .tcsctrls       = 1,\
    .tras           = 4,\
    .eeprom_tras    = 31,\
    .trc            = 3,\
    .eeprom_trc     = 31,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 1,\
    .tpwcsh         = 1,\
    .twrc           = 1,\
    .twes           = 47999,\
    .tbr            = 1\
}

#define FLASH_TIMING_CFG_8MHZ_HIGH_SPEED_1P8V { \
    .high_speed     = 1,\
    .tcsctrls       = 0,\
    .tras           = 2,\
    .eeprom_tras    = 15,\
    .trc            = 1,\
    .eeprom_trc     = 15,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 0,\
    .tpwcsh         = 0,\
    .twrc           = 0,\
    .twes           = 23999,\
    .tbr            = 0\
}

#define FLASH_TIMING_CFG_4MHZ_HIGH_SPEED_1P8V { \
    .high_speed     = 1,\
    .tcsctrls       = 0,\
    .tras           = 1,\
    .eeprom_tras    = 7,\
    .trc            = 0,\
    .eeprom_trc     = 7,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 0,\
    .tpwcsh         = 0,\
    .twrc           = 0,\
    .twes           = 11999,\
    .tbr            = 0\
}

#define FLASH_TIMING_CFG_48MHZ_LOW_POWER_3V { \
    .high_speed     = 0,\
    .tcsctrls       = 4,\
    .tras           = 5,\
    .eeprom_tras    = 11,\
    .trc            = 5,\
    .eeprom_trc     = 11,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 4,\
    .tpwcsh         = 4,\
    .twrc           = 4,\
    .twes           = 143953,\
    .tbr            = 4\
}

#define FLASH_TIMING_CFG_32MHZ_LOW_POWER_3V { \
    .high_speed     = 0,\
    .tcsctrls       = 3,\
    .tras           = 4,\
    .eeprom_tras    = 7,\
    .trc            = 3,\
    .eeprom_trc     = 7,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 3,\
    .tpwcsh         = 3,\
    .twrc           = 3,\
    .twes           = 95999,\
    .tbr            = 3\
}

#define FLASH_TIMING_CFG_24MHZ_LOW_POWER_3V { \
    .high_speed     = 0,\
    .tcsctrls       = 2,\
    .tras           = 4,\
    .eeprom_tras    = 5,\
    .trc            = 3,\
    .eeprom_trc     = 5,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 2,\
    .tpwcsh         = 2,\
    .twrc           = 2,\
    .twes           = 71942,\
    .tbr            = 2\
}

#define FLASH_TIMING_CFG_16MHZ_LOW_POWER_3V { \
    .high_speed     = 0,\
    .tcsctrls       = 1,\
    .tras           = 2,\
    .eeprom_tras    = 3,\
    .trc            = 1,\
    .eeprom_trc     = 3,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 1,\
    .tpwcsh         = 1,\
    .twrc           = 1,\
    .twes           = 47999,\
    .tbr            = 1\
}

#define FLASH_TIMING_CFG_8MHZ_LOW_POWER_3V { \
    .high_speed     = 0,\
    .tcsctrls       = 0,\
    .tras           = 1,\
    .eeprom_tras    = 1,\
    .trc            = 0,\
    .eeprom_trc     = 1,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 0,\
    .tpwcsh         = 0,\
    .twrc           = 0,\
    .twes           = 23999,\
    .tbr            = 0\
}

#define FLASH_TIMING_CFG_4MHZ_LOW_POWER_3V { \
    .high_speed     = 0,\
    .tcsctrls       = 0,\
    .tras           = 1,\
    .eeprom_tras    = 0,\
    .trc            = 0,\
    .eeprom_trc     = 0,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 0,\
    .tpwcsh         = 0,\
    .twrc           = 0,\
    .twes           = 11999,\
    .tbr            = 0\
}

#define FLASH_TIMING_CFG_48MHZ_LOW_POWER_1P8V { \
    .high_speed     = 0,\
    .tcsctrls       = 4,\
    .tras           = 24,\
    .eeprom_tras    = 95,\
    .trc            = 23,\
    .eeprom_trc     = 95,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 4,\
    .tpwcsh         = 4,\
    .twrc           = 4,\
    .twes           = 143953,\
    .tbr            = 4\
}

#define FLASH_TIMING_CFG_32MHZ_LOW_POWER_1P8V { \
    .high_speed     = 0,\
    .tcsctrls       = 3,\
    .tras           = 16,\
    .eeprom_tras    = 63,\
    .trc            = 15,\
    .eeprom_trc     = 63,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 3,\
    .tpwcsh         = 3,\
    .twrc           = 3,\
    .twes           = 95999,\
    .tbr            = 3\
}

#define FLASH_TIMING_CFG_24MHZ_LOW_POWER_1P8V { \
    .high_speed     = 0,\
    .tcsctrls       = 2,\
    .tras           = 12,\
    .eeprom_tras    = 47,\
    .trc            = 11,\
    .eeprom_trc     = 47,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 2,\
    .tpwcsh         = 2,\
    .twrc           = 2,\
    .twes           = 71942,\
    .tbr            = 2\
}

#define FLASH_TIMING_CFG_16MHZ_LOW_POWER_1P8V { \
    .high_speed     = 0,\
    .tcsctrls       = 1,\
    .tras           = 8,\
    .eeprom_tras    = 31,\
    .trc            = 7,\
    .eeprom_trc     = 31,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 1,\
    .tpwcsh         = 1,\
    .twrc           = 1,\
    .twes           = 47999,\
    .tbr            = 1\
}

#define FLASH_TIMING_CFG_8MHZ_LOW_POWER_1P8V { \
    .high_speed     = 0,\
    .tcsctrls       = 0,\
    .tras           = 4,\
    .eeprom_tras    = 15,\
    .trc            = 3,\
    .eeprom_trc     = 15,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 0,\
    .tpwcsh         = 0,\
    .twrc           = 0,\
    .twes           = 23999,\
    .tbr            = 0\
}

#define FLASH_TIMING_CFG_4MHZ_LOW_POWER_1P8V { \
    .high_speed     = 0,\
    .tcsctrls       = 0,\
    .tras           = 2,\
    .eeprom_tras    = 7,\
    .trc            = 1,\
    .eeprom_trc     = 7,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 0,\
    .tpwcsh         = 0,\
    .twrc           = 0,\
    .twes           = 11999,\
    .tbr            = 0\
}

#define FLASH_TIMING_CFG_DEF_HIGH_SPEED_1P8V { \
    .high_speed     = 1,\
    .tcsctrls       = 3,\
    .tras           = 9,\
    .eeprom_tras    = 67,\
    .trc            = 9,\
    .eeprom_trc     = 67,\
    .tadhr          = 0,\
    .tads           = 0,\
    .twpw           = 10,\
    .tpwcsh         = 3,\
    .twrc           = 3,\
    .twes           = 13333,\
    .tbr            = 3\
}

/**
 * @brief   This function updates flash configuration based on the settings
 *
 * @param   flash_regs : pointer to flash register space
 * @param   flash_settings_cfg : settings with which flash needs to be updated with
 *
 * @retval  void
 */
void flash_config(FLASH_REGS_s *FLASH_REGS, flash_setting_cfg_e flash_setting_cfg);

/**
 * @brief   This function resets the flash to the factory setting (High speed, 1.8<VDD<3.0)
 *
 * @param   flash_regs : pointer to flash register space
 *
 * @retval  void
 */
void flash_factory_restore(FLASH_REGS_s *FLASH_REGS);

#endif
