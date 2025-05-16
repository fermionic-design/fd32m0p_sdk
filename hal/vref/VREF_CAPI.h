#ifndef vref_h_include
#define vref_h_include

#include "VREF_REGS.h"
#include "VREF_RW_API.h"

#include "IOMUX_REGS.h"
#include "IOMUX_RW_API.h"

#include "GPIO_REGS.h"
#include "GPIO_RW_API.h"

#include "MCU_CTRL_REGS.h"
#include "MCU_CTRL_RW_API.h"

#define IOMUX_REGS  ((IOMUX_REGS_s *) 0x3FFC4000)
#define VREF_REGS   ((VREF_REGS_s *) 0x3FFD2000)
#define MCU_CTRL_REGS ((MCU_CTRL_REGS_s *) 0x3FFC0000)

typedef struct {
    uint32_t enable;
    uint32_t vref_mode;
} vref_cfg_s;
 
void vref_cfg(VREF_REGS_s *regs, IOMUX_REGS_s *iomux_regs, MCU_CTRL_REGS_s *mcu_regs, IOMUX_PA_REG_s iomux_cfg_struct, vref_cfg_s vref_cfg_struct, uint32_t temp_sense_en);
vref_cfg_s get_vref_cfg(VREF_REGS_s *regs);
#endif
