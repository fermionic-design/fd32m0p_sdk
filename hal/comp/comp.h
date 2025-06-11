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

typedef enum {
	COMP_HYST_DISABLED  = COMP_CTRL0_HYST_DISABLED, ///< 0x0
	COMP_HYST_LOW       = COMP_CTRL0_HYST_LOW, ///< 0x1
	COMP_HYST_MEDIUM    = COMP_CTRL0_HYST_MEDIUM, ///< 0x2
	COMP_HYST_HIGH      = COMP_CTRL0_HYST_HIGH, ///< 0x3
} COMP_HYST_E;

typedef enum {
	COMP_E0_POS_E1_NEG = COMP_CTRL0_INTR_EDGE_SEL_E0_POS_E1_NEG, ///< 0x0
	COMP_E0_NEG_E1_POS = COMP_CTRL0_INTR_EDGE_SEL_E0_NEG_E1_POS, ///< 0x1
} COMP_INTR_EDGE_SEL_E;

typedef enum {
	COMP_IN_P_SEL_NON_INV_0       = COMP_INPUT_CTRL0_IN_P_SEL_NON_INV_0, ///< 0x0
	COMP_IN_P_SEL_NON_INV_1       = COMP_INPUT_CTRL0_IN_P_SEL_NON_INV_1, ///< 0x1
	COMP_IN_P_SEL_COMP0_NON_INV_2 = COMP_INPUT_CTRL0_IN_P_SEL_COMP0_NON_INV_2, ///< 0x2
	COMP_IN_P_SEL_COMP1_NON_INV_2 = COMP_INPUT_CTRL0_IN_P_SEL_COMP1_NON_INV_2, ///< 0x2
	COMP_IN_P_SEL_COMP0_DAC_CONN  = COMP_INPUT_CTRL0_IN_P_SEL_COMP0_DAC_CONN, ///< 0x3
	COMP_IN_P_SEL_COMP1_DAC_CONN  = COMP_INPUT_CTRL0_IN_P_SEL_COMP1_DAC_CONN, ///< 0x3
	COMP_IN_P_SEL_COMP0_OPA1_CONN = COMP_INPUT_CTRL0_IN_P_SEL_COMP0_OPA1_CONN, ///< 0x4
	COMP_IN_P_SEL_COMP1_GND       = COMP_INPUT_CTRL0_IN_P_SEL_COMP1_GND, ///< 0x4
	COMP_IN_P_SEL_COMP0_PSEL_CONN = COMP_INPUT_CTRL0_IN_P_SEL_COMP0_PSEL_CONN, ///< 0x5
	COMP_IN_P_SEL_COMP1_PSEL_CONN = COMP_INPUT_CTRL0_IN_P_SEL_COMP1_PSEL_CONN, ///< 0x5
} COMP_IN_P_SEL_E; 

typedef enum {
	COMP_IN_M_SEL_INV_0             = COMP_INPUT_CTRL0_IN_M_SEL_INV_0, ///< 0x0
	COMP_IN_M_SEL_INV_1             = COMP_INPUT_CTRL0_IN_M_SEL_INV_1, ///< 0x1
	COMP_IN_M_SEL_COMP0_INV_2       = COMP_INPUT_CTRL0_IN_M_SEL_COMP0_INV_2, ///< 0x2
	COMP_IN_M_SEL_COMP1_INV_2       = COMP_INPUT_CTRL0_IN_M_SEL_COMP1_INV_2, ///< 0x2
	COMP_IN_M_SEL_COMP0_OPA0_CONN   = COMP_INPUT_CTRL0_IN_M_SEL_COMP0_OPA0_CONN, ///< 0x3
} COMP_IN_M_SEL_E;

typedef enum {
	COMP_WIN_COMP_SEL_0 = COMP_OUT_CTRL1_WIN_COMP_SEL_0, ///< 0x0
	COMP_WIN_COMP_SEL_1 = COMP_OUT_CTRL1_WIN_COMP_SEL_1, ///< 0x1
	COMP_WIN_COMP_SEL_2 = COMP_OUT_CTRL1_WIN_COMP_SEL_2, ///< 0x2
} COMP_WIN_COMP_SEL_E;

typedef enum {
	COMP_OUT_POL_NON_INV = COMP_OUT_CTRL0_OUT_POL_NON_INV, ///< 0x0
	COMP_OUT_POL_INV = COMP_OUT_CTRL0_OUT_POL_INV, ///< 0x1
} COMP_OUT_POL_E;

/*!
 *  @brief  COMP Configuration Struct
 */
typedef struct {
    uint32_t enable;
    COMP_HYST_E hyst;
    COMP_INTR_EDGE_SEL_E intr_edge_sel;
    COMP_IN_P_SEL_E in_p_en;
    uint32_t in_p_sel;
    uint32_t in_m_en;
    COMP_IN_M_SEL_E in_m_sel;
    uint32_t in_short;
    uint32_t in_swap;
} comp_cfg_s;

typedef struct {
    uint32_t enable;
    COMP_WIN_COMP_SEL_E win_comp_sel;
} comp_win_comp_cfg_s;

typedef struct {
    uint32_t samp_en;
    COMP_OUT_POL_E out_pol;
} comp_out_cfg_s;

/**
 * @brief   This function configures comparator.
 *
 * @param   regs : pointer to the COMP register space
 * @param   comp_cfg  : comp configuration struct
 *
 * @retval  void
 */
void comp_cfg(COMP_REGS_s *regs, comp_cfg_s comp_cfg);

/**
 * @brief   This function configures window comparator operation in comparator.
 *
 * @param   regs : pointer to the COMP register space
 * @param   win_comp_cfg  : window comp configuration struct
 *
 * @retval  void
 */
void comp_win_comp_cfg(COMP_REGS_s *regs,comp_win_comp_cfg_s win_comp_cfg);

/**
 * @brief   This function configures output of comparator.
 *
 * @param   regs : pointer to the COMP register space
 * @param   comp_out_cfg  : comparator output configuration struct
 *
 * @retval  void
 */
void comp_out_cfg(COMP_REGS_s *regs, comp_out_cfg_s comp_out_cfg);

/**
 * @brief   This function returns comparator configuration.
 *
 * @param   regs : pointer to the COMP register space
 *
 * @retval  Comparator configuration
 */
comp_cfg_s get_comp_cfg(COMP_REGS_s *regs);

/**
 * @brief   This function returns window comparator configuration in comparator.
 *
 * @param   regs : pointer to the COMP register space
 *
 * @retval  Window comparator configuration
 */
comp_win_comp_cfg_s get_comp_win_comp_cfg(COMP_REGS_s *regs);

/**
 * @brief   This function returns output configuration of comparator.
 *
 * @param   regs : pointer to the COMP register space
 *
 * @retval  Comparator output configuration
 */
comp_out_cfg_s get_comp_out_cfg(COMP_REGS_s *regs);

/**
 * @brief   This function returns output of comparator.
 *
 * @param   regs : pointer to the COMP register space
 *
 * @retval  Comparator output 
 */
uint32_t get_comp_out_sts(COMP_REGS_s *regs);

#endif
