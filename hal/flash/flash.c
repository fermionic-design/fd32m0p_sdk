#include "flash.h"

/*
 *  ========  flash_config ========
 */
void flash_config(FLASH_REGS_s *FLASH_REGS, flash_setting_cfg_e flash_setting_cfg){
    flash_timing_regs_cfg_t flash_timing_reg_cfg;
    
    switch(flash_setting_cfg) {
        case FLASH_SETTING_CFG_48MHZ_HIGH_SPEED_3V   : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_48MHZ_HIGH_SPEED_3V  ; break;  
        case FLASH_SETTING_CFG_32MHZ_HIGH_SPEED_3V   : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_32MHZ_HIGH_SPEED_3V  ; break;
        case FLASH_SETTING_CFG_24MHZ_HIGH_SPEED_3V   : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_24MHZ_HIGH_SPEED_3V  ; break;
        case FLASH_SETTING_CFG_16MHZ_HIGH_SPEED_3V   : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_16MHZ_HIGH_SPEED_3V  ; break;
        case FLASH_SETTING_CFG_8MHZ_HIGH_SPEED_3V    : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_8MHZ_HIGH_SPEED_3V   ; break;
        case FLASH_SETTING_CFG_4MHZ_HIGH_SPEED_3V    : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_4MHZ_HIGH_SPEED_3V   ; break;
        case FLASH_SETTING_CFG_48MHZ_HIGH_SPEED_1P8V : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_48MHZ_HIGH_SPEED_1P8V; break;
        case FLASH_SETTING_CFG_32MHZ_HIGH_SPEED_1P8V : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_32MHZ_HIGH_SPEED_1P8V; break;
        case FLASH_SETTING_CFG_24MHZ_HIGH_SPEED_1P8V : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_24MHZ_HIGH_SPEED_1P8V; break;
        case FLASH_SETTING_CFG_16MHZ_HIGH_SPEED_1P8V : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_16MHZ_HIGH_SPEED_1P8V; break;
        case FLASH_SETTING_CFG_8MHZ_HIGH_SPEED_1P8V  : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_8MHZ_HIGH_SPEED_1P8V ; break;
        case FLASH_SETTING_CFG_4MHZ_HIGH_SPEED_1P8V  : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_4MHZ_HIGH_SPEED_1P8V ; break;
        case FLASH_SETTING_CFG_48MHZ_LOW_POWER_3V    : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_48MHZ_LOW_POWER_3V   ; break;
        case FLASH_SETTING_CFG_32MHZ_LOW_POWER_3V    : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_32MHZ_LOW_POWER_3V   ; break;
        case FLASH_SETTING_CFG_24MHZ_LOW_POWER_3V    : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_24MHZ_LOW_POWER_3V   ; break;
        case FLASH_SETTING_CFG_16MHZ_LOW_POWER_3V    : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_16MHZ_LOW_POWER_3V   ; break;
        case FLASH_SETTING_CFG_8MHZ_LOW_POWER_3V     : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_8MHZ_LOW_POWER_3V    ; break;
        case FLASH_SETTING_CFG_4MHZ_LOW_POWER_3V     : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_4MHZ_LOW_POWER_3V    ; break;
        case FLASH_SETTING_CFG_48MHZ_LOW_POWER_1P8V  : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_48MHZ_LOW_POWER_1P8V ; break;
        case FLASH_SETTING_CFG_32MHZ_LOW_POWER_1P8V  : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_32MHZ_LOW_POWER_1P8V ; break;
        case FLASH_SETTING_CFG_24MHZ_LOW_POWER_1P8V  : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_24MHZ_LOW_POWER_1P8V ; break;
        case FLASH_SETTING_CFG_16MHZ_LOW_POWER_1P8V  : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_16MHZ_LOW_POWER_1P8V ; break;
        case FLASH_SETTING_CFG_8MHZ_LOW_POWER_1P8V   : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_8MHZ_LOW_POWER_1P8V  ; break;
        case FLASH_SETTING_CFG_4MHZ_LOW_POWER_1P8V   : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_4MHZ_LOW_POWER_1P8V  ; break;
        default                                      : flash_timing_reg_cfg = (flash_timing_regs_cfg_t)FLASH_TIMING_CFG_DEF_HIGH_SPEED_1P8V  ; break; 
    }
    
    FLASH_REGS->TIME_CTRL.tcsctrls    = flash_timing_reg_cfg.tcsctrls;
    FLASH_REGS->TIME_CTRL.tras        = flash_timing_reg_cfg.tras;
    FLASH_REGS->TIME_CTRL.eeprom_tras = flash_timing_reg_cfg.eeprom_tras;
    FLASH_REGS->TIME_CTRL.trc         = flash_timing_reg_cfg.trc;
    FLASH_REGS->TIME_CTRL.eeprom_trc  = flash_timing_reg_cfg.eeprom_trc;
    FLASH_REGS->TIME_CTRL_1.tadhr     = flash_timing_reg_cfg.tadhr;
    FLASH_REGS->TIME_CTRL_1.tads      = flash_timing_reg_cfg.tads;
    FLASH_REGS->TIME_CTRL_1.twpw      = flash_timing_reg_cfg.twpw;
    FLASH_REGS->TIME_CTRL_1.tpwcsh    = flash_timing_reg_cfg.tpwcsh;
    FLASH_REGS->TIME_CTRL_2.twrc      = flash_timing_reg_cfg.twrc;
    FLASH_REGS->TIME_CTRL_2.twes      = flash_timing_reg_cfg.twes;
    FLASH_REGS->TIME_CTRL_2.tbr       = flash_timing_reg_cfg.tbr;
    FLASH_REGS->CTRL.isavb            = flash_timing_reg_cfg.high_speed;

    // Indicating that timing regs have been updated
    FLASH_REGS->TIME_UPTD.flash_config_done = 1; 
   
    // Polling flash config done for setting updates
    while(FLASH_REGS->TIME_UPTD.flash_config_done==1); 
}

/*
 *  ========  flash_factory_restore ========
 */
void flash_factory_restore(FLASH_REGS_s *FLASH_REGS) {
    flash_timing_regs_cfg_t flash_timing_reg_cfg = FLASH_TIMING_CFG_DEF_HIGH_SPEED_1P8V ;
    
    FLASH_REGS->TIME_CTRL.tcsctrls    = flash_timing_reg_cfg.tcsctrls;
    FLASH_REGS->TIME_CTRL.tras        = flash_timing_reg_cfg.tras;
    FLASH_REGS->TIME_CTRL.eeprom_tras = flash_timing_reg_cfg.eeprom_tras;
    FLASH_REGS->TIME_CTRL.trc         = flash_timing_reg_cfg.trc;
    FLASH_REGS->TIME_CTRL.eeprom_trc  = flash_timing_reg_cfg.eeprom_trc;
    FLASH_REGS->TIME_CTRL_1.tadhr     = flash_timing_reg_cfg.tadhr;
    FLASH_REGS->TIME_CTRL_1.tads      = flash_timing_reg_cfg.tads;
    FLASH_REGS->TIME_CTRL_1.twpw      = flash_timing_reg_cfg.twpw;
    FLASH_REGS->TIME_CTRL_1.tpwcsh    = flash_timing_reg_cfg.tpwcsh;
    FLASH_REGS->TIME_CTRL_2.twrc      = flash_timing_reg_cfg.twrc;
    FLASH_REGS->TIME_CTRL_2.twes      = flash_timing_reg_cfg.twes;
    FLASH_REGS->TIME_CTRL_2.tbr       = flash_timing_reg_cfg.tbr;
    FLASH_REGS->CTRL.isavb            = flash_timing_reg_cfg.high_speed;

    // Indicating that timing regs have been updated
    FLASH_REGS->TIME_UPTD.flash_config_done = 1; 
   
    // Polling flash config done for setting updates
    while(FLASH_REGS->TIME_UPTD.flash_config_done==1);    
}
