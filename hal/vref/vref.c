#include "vref.h"
#include "gpio.h"

/*
 *  ======== vref_cfg ========
 */
void vref_cfg(VREF_REGS_s *vref_regs, IOMUX_REGS_s *iomux_regs, MCU_CTRL_REGS_s *mcu_regs, IOMUX_PA_REG_s *iomux_cfg_struct, vref_cfg_s *vref_cfg_struct, uint32_t temp_sense_en){
    iomux_cfg(iomux_regs, iomux_cfg_struct,  24);       // Last arg is pin number.
    vref_regs->CTRL.enable      =   vref_cfg_struct->enable;
    vref_regs->CTRL.vref_mode   =   vref_cfg_struct->vref_mode;
    if(temp_sense_en == 1)
    {
        mcu_regs->ANA_SPARE_OUT0.spare_out_0 = 0x00000000;
    }
    else
    {
        mcu_regs->ANA_SPARE_OUT0.spare_out_0 = 0x09800000;
    }
}

/*
 *  ======== get_vref_cfg ========
 */
vref_cfg_s get_vref_cfg(VREF_REGS_s *regs){
    vref_cfg_s vref_cfg;
    vref_cfg.enable     = regs->CTRL.enable;
    vref_cfg.vref_mode  = regs->CTRL.vref_mode;
    return vref_cfg;
}

