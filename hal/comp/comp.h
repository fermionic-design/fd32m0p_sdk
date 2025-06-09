/** @addtogroup FD32M0P_HAL FD32M0P Hardware Abstraction Layer
 *  @{
 */

/** @defgroup COMP_HAL
 *  @{
 */

#ifndef comp_h_include
#define comp_h_include

#include "COMP_REGS.h"
#include "COMP_RW_API.h"

#include "IOMUX_REGS.h"
#include "IOMUX_RW_API.h"

/*!
 *  @brief  COMP CTRL0 Configuration Struct
 */
typedef struct {
    uint32_t enable;
    uint32_t speed;
    uint32_t hyst;
    uint32_t intr_edge_sel;
} comp_ctrl0_cfg_s;

/*!
 *  @brief  COMP INPUT_CTRL0 Configuration Struct
 */
typedef struct {
    uint32_t in_p_en;
    uint32_t in_p_sel;
    uint32_t in_m_en;
    uint32_t in_m_sel;
} comp_input_ctrl0_cfg_s;

/*!
 *  @brief  COMP INPUT_CTRL1 Configuration Struct
 */
typedef struct {
    uint32_t in_short;
    uint32_t in_swap;
} comp_input_ctrl1_cfg_s;

/**
 * @brief   This function configures ______________.
 *
 * @param   regs : pointer to the COMP register space
 * @param   ctrl0_cfg  : ctrl0 configuration struct
 *
 * @retval  void
 */
void comp_ctrl0_cfg(COMP_REGS_s *regs, comp_ctrl0_cfg_s ctrl0_cfg);

/**
 * @brief   This function configures ______________.
 *
 * @param   regs : pointer to the COMP register space
 * @param   input_ctrl0_cfg : input ctrl0 configuration struct
 *
 * @retval  void
 */
void comp_input_ctrl0_cfg(COMP_REGS_s *regs, comp_input_ctrl0_cfg_s input_ctrl0_cfg);

/**
 * @brief   This function configures ______________.
 *
 * @param   regs : pointer to the COMP register space
 * @param   input_ctrl1_cfg : input ctrl1 configuration struct
 *
 * @retval  void
 */
void comp_input_ctrl1_cfg(COMP_REGS_s *regs, comp_input_ctrl1_cfg_s input_ctrl1_cfg);

/**
 * @brief   This function returns ______________.
 *
 * @param   regs : pointer to the COMP register space
 *
 * @retval  ctrl0 config struct
 */
comp_ctrl0_cfg_s get_comp_ctrl0_cfg(COMP_REGS_s *regs);

/**
 * @brief   This function returns ______________.
 *
 * @param   regs : pointer to the COMP register space
 *
 * @retval  input_ctrl0 config struct
 */
comp_input_ctrl0_cfg_s get_comp_input_ctrl0_cfg(COMP_REGS_s *regs);

/**
 * @brief   This function returns ______________.
 *
 * @param   regs : pointer to the COMP register space
 *
 * @retval  input_ctrl1 config struct
 */
comp_input_ctrl1_cfg_s get_comp_input_ctrl1_cfg(COMP_REGS_s *regs);

#endif