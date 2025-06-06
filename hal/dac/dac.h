/** @addtogroup FD32M0P_HAL FD32M0P Hardware Abstraction Layer
 *  @{
 */

/** @defgroup DAC_HAL
 *  @{
 */

#ifndef dac_h_include
#define dac_h_include

#include "IOMUX_REGS.h"
#include "IOMUX_RW_API.h"

#include "DAC_REGS.h"
#include "DAC_RW_API.h"

#include "GPIO_REGS.h"
#include "GPIO_RW_API.h"

/*!
 *  @brief  DAC Configuration Struct
 */
typedef struct {
    DAC_CTRL0_DATA_FMT_E    data_fmt;
    uint32_t                enable;
    DAC_CTRL0_RES_E         res;
    uint32_t                amp_en;
    uint32_t                amp_hiz;
    uint32_t                out_en;
    DAC_CTRL1_VREFP_SEL_E   vrefp_sel;
    uint32_t                samp_tim_en;
    uint32_t                samp_tim_rate;
} dac_cfg_s;

/*!
 *  @brief  DAC DMA Configuration Struct
 */
typedef struct {
    uint32_t                    dma_trig_en;
    DAC_CTRL2_FIFO_TH_E         fifo_th;
    uint32_t                    fifo_en;
    DAC_CTRL2_FIFO_TRIG_SEL_E   fifo_trig_sel;
} dac_dma_cfg_s;

/**
 * @brief   This function configures DAC
 *
 * @param   regs : pointer to the DAC register space
 * @param   dac_cfg_struct : DAC configuration struct
 *  
 * @retval  void
 */
void dac_cfg(DAC_REGS_s *regs, dac_cfg_s dac_cfg_struct);

/**
 * @brief   This function configures DAC for DMA application
 *
 * @param   regs : pointer to the DAC register space
 * @param   dac_dma_cfg_struct : DAC DMA configuration struct
 *  
 * @retval  void
 */
void dac_dma_cfg(DAC_REGS_s *regs, dac_dma_cfg_s dac_dma_cfg_struct);

/**
 * @brief   This function writes DAC code in DAC.
 *
 * @param   regs : pointer to the DAC register space
 * @param   dac_code : DAC code
 *  
 * @retval  void
 */
void dac_wr_code(DAC_REGS_s *regs, uint32_t dac_code);

/**
 * @brief   This function returns DAC configuration.
 *
 * @param   regs : pointer to the DAC register space
 *  
 * @retval  DAC configuration
 */
dac_cfg_s get_dac_cfg(DAC_REGS_s *regs);

/**
 * @brief   This function returns DAC DMA configuration.
 *
 * @param   regs : pointer to the DAC register space
 *  
 * @retval  DAC DMA configuration
 */
dac_dma_cfg_s get_dac_dma_cfg(DAC_REGS_s *regs);

/**
 * @brief   This function returns DAC code.
 *
 * @param   regs : pointer to the DAC register space
 *  
 * @retval  DAC code
 */
uint32_t get_dac_wr_code(DAC_REGS_s *regs);

#endif

/** @} */
/** @} */