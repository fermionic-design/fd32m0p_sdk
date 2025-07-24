/** @addtogroup FD32M0P_HAL FD32M0P Hardware Abstraction Layer
 *  @{
 */

/** @defgroup VREF_HAL
 *  @{
 */

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

/*!
 *  @brief  VREF Configuration Struct
 */
typedef struct {
    uint32_t enable;
    uint32_t vref_mode;
} vref_cfg_s;
 
/**
 * @brief   This function configures VREF
 *
 * @param   vref_regs : pointer to the VREF register space
 * @param   iomux_regs : pointer to the IOMUX register space
 * @param   mcu_regs : pointer to the MCU register space
 * @param   iomux_cfg_struct : IOMUX configuration struct
 * @param   vref_cfg_struct : VREF configuration struct
 * @param   temp_sense_en : does Temperature sensor configuration
 *  
 * @retval  void
 */
void vref_cfg(VREF_REGS_s *vref_regs, IOMUX_REGS_s *iomux_regs, MCU_CTRL_REGS_s *mcu_regs, IOMUX_PA_REG_s iomux_cfg_struct, vref_cfg_s *vref_cfg_struct, uint32_t temp_sense_en);

/**
 * @brief   This function returns VREF configuration
 *
 * @param   regs : pointer to the DAC register space
 *  
 * @retval  void
 */
vref_cfg_s get_vref_cfg(VREF_REGS_s *regs);

#endif

/** @} */
/** @} */