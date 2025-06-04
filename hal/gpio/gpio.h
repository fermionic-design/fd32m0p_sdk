#ifndef gpio_h_include
#define gpio_h_include

#include "IOMUX_REGS.h"
#include "IOMUX_RW_API.h"

#include "GPIO_REGS.h"
#include "GPIO_RW_API.h"

/**
 * @brief   This function configures the IOMUX.
 *
 * @param   iomux_regs : pointer to the GPIO register space
 * @param   iomux_cfg_struct : IOMUX Configuration Struct
 * @param   pin_num : IOMUX pin to be configured
 *
 * @retval  void
 */
void iomux_cfg(IOMUX_REGS_s *regs, IOMUX_PA_REG_s iomux_cfg_struct,  uint32_t pin_num);

/**
 * @brief   This function writes the data at GPIO pin given in pin_num.
 *
 * @param   gpio_regs : pointer to the GPIO register space
 * @param   pin_num : GPIO pin to be configured
 * @param   dout_pin_val : Value to be written at the pin
 *
 * @retval  void
 */
void gpio_dout_pinwise(GPIO_REGS_s *regs, uint32_t pin_num, uint32_t dout_pin_val);

/**
 * @brief   This function configures the glitch filter for the val provided in filt_width_val
 *          and at the pin given in pin_num.
 *
 * @param   gpio_regs : pointer to the GPIO register space
 * @param   pin_num : GPIO pin to be configured
 * @param   filt_width_val : GPIO glitch filter width
 *
 * @retval  void
 */
void gpio_glitch_filter_cfg(GPIO_REGS_s *regs, uint32_t pin_num, GPIO_FILT_EN_E filt_width_val);

/**
 * @brief   This function configures the interrupt polarity for the val provided in intr_pol_val
 *          and at the pin given in pin_num.
 *
 * @param   gpio_regs : pointer to the GPIO register space
 * @param   pin_num : GPIO pin to be configured
 * @param   intr_pol_val : GPIO interrupt polarity. 0: No Intr, 1: Pos Edge, 2: Neg Edge, 3: Any Edge
 *
 * @retval  void
 */
void gpio_intr_polarity_cfg(GPIO_REGS_s *regs, uint32_t pin_num, GPIO_INTR_POL_E intr_pol_val);

/**
 * @brief   This function configures the dma_mask in GPIO.
 *
 * @param   gpio_regs : pointer to the GPIO register space
 * @param   dma_wr_mask : GPIO DMA mask
 *
 * @retval  void
 */
void gpio_dma_cfg(GPIO_REGS_s *regs, uint32_t dma_wr_mask);

/**
 * @brief   This function reads the input at the GPIO.
 *
 * @param   gpio_regs : pointer to the GPIO register space
 *
 * @retval  GPIO Data Read
 */
uint32_t gpio_din(GPIO_REGS_s *regs);

/**
 * @brief   This function writes at the GPIO.
 *
 * @param   gpio_regs : pointer to the GPIO register space
 *
 * @retval  void
 */
void gpio_dout(GPIO_REGS_s *regs, uint32_t dout);

/**
 * @brief   This function enables GPIO outputs.
 *
 * @param   gpio_regs : pointer to the GPIO register space
 *
 * @retval  void
 */
void gpio_dout_en(GPIO_REGS_s *regs, uint32_t dout_en);

/**
 * @brief   This function enables GPIO outputs for value written in dout_set register.
 * 
 * @param   gpio_regs : pointer to the GPIO register space
 * @param   dout_en_set : 32 bit reg. The bits set here enables the output for the bits in 
 *                        dout_set reg.
 * @retval  void
 */
void gpio_set_en(GPIO_REGS_s *regs, uint32_t dout_en_set);

/**
 * @brief   This function enables GPIO outputs for value written in dout_clr register.
 *
 * @param   gpio_regs : pointer to the GPIO register space
 * @param   dout_en_clr : 32 bit reg. The bits set here enables the output for the bits in 
 *                        dout_clr reg.
 * @retval  void
 */
void gpio_clr_en(GPIO_REGS_s *regs, uint32_t dout_en_clr) ;

/**
 * @brief   This function configures GPIO subscriber.
 *
 * @param   gpio_regs : pointer to the GPIO register space
 * @param   sub_sel : selects GPIO subscriber
 * @param   sub_en : enables subscriber
 * @param   pin_action : Pin action upon receiving published event on GPIO sub. 0: Nothing, 1: Set, 2: Clr, 3: Toggle
 * 
 * @retval  void
 */
void gpio_sub_cfg(GPIO_REGS_s *regs, uint32_t sub_sel, uint32_t sub_en, uint32_t pin_action, uint32_t pin_num);

/**
 * @brief   This function reads input at specific pin.
 *
 * @param   gpio_regs : pointer to the GPIO register space
 * @param   pin_num : GPIO pin to be read
 * 
 * @retval  void
 */
uint32_t gpio_din_pinwise(GPIO_REGS_s *regs, uint32_t pin_num);

/**
 * @brief   This function sets GPIO output.
 *
 * @param   gpio_regs : pointer to the GPIO register space
 * @param   dout_set : bits set high sets those GPIO pin.
 * 
 * @retval  void
 */
void gpio_set(GPIO_REGS_s *regs, uint32_t dout_set);

/**
 * @brief   This function clears GPIO output.
 *
 * @param   gpio_regs : pointer to the GPIO register space
 * @param   dout_set : bits set high clears those GPIO pin.
 * 
 * @retval  void
 */
void gpio_clr(GPIO_REGS_s *regs, uint32_t dout_clr);

/**
 * @brief   This function toggles GPIO output.
 *
 * @param   gpio_regs : pointer to the GPIO register space
 * @param   dout_set : bits set high toggles those GPIO pin.
 * 
 * @retval  void
 */
void gpio_tgl(GPIO_REGS_s *regs, uint32_t dout_tgl);

/**
 * @brief   This function returns the GPIO glitch filter configuration.
 *
 * @param   gpio_regs : pointer to the GPIO register space
 * @param   pin_num : GPIO pin for which gpio glitch filter configuration is required.
 * 
 * @retval  GPIO glitch filter configuration
 */
uint32_t get_gpio_glitch_filter_cfg(GPIO_REGS_s *regs,uint32_t pin_num);

/**
 * @brief   This function returns the GPIO interrupt polarity configuration.
 *
 * @param   gpio_regs : pointer to the GPIO register space
 * @param   pin_num : GPIO pin for which gpio interrupt polarity configuration is required.
 * 
 * @retval  GPIO interrupt polarity configuration
 */
uint32_t get_gpio_intr_polarity_cfg(GPIO_REGS_s *regs, uint32_t pin_num);

/**
 * @brief   This function returns IOMUX configuration.
 *
 * @param   gpio_regs : pointer to the GPIO register space
 * @param   pin_num : GPIO pin for which IOMUX configuration is required.
 * 
 * @retval  IOMUX configuration
 */
IOMUX_PA_REG_s get_gpio_iomux_cfg(IOMUX_REGS_s *regs, uint32_t pin_num);

/**
 * @brief   This function returns GPIO subscriber configuration.
 *
 * @param   gpio_regs : pointer to the GPIO register space
 * @param   sub_sel : Subscriber for which subscriber configuration is required.
 * 
 * @retval  GPIO subscriber configuration
 */
GPIO_SUB_CFG_REG_s get_gpio_sub_cfg(GPIO_REGS_s *regs, uint32_t sub_sel);

/**
 * @brief   This function returns GPIO DMA configuration.
 *
 * @param   gpio_regs : pointer to the GPIO register space
 * 
 * @retval  GPIO DMA configuration
 */
uint32_t get_gpio_dma_cfg(GPIO_REGS_s *regs);

/**
 * @brief   This function returns GPIO dout register values.
 *
 * @param   gpio_regs : pointer to the GPIO register space
 * 
 * @retval  GPIO DOUT register values.
 */
uint32_t get_gpio_dout(GPIO_REGS_s *regs);

/**
 * @brief   This function returns GPIO dout pinwise register values.
 *
 * @param   gpio_regs : pointer to the GPIO register space
 * 
 * @retval  GPIO DOUT pinwise register values.
 */
uint32_t get_gpio_dout_pinwise(GPIO_REGS_s *regs, uint32_t pin_num);

#endif
