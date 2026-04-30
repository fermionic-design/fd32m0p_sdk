#ifndef HAL_TIMER_GENERIC_H
#define HAL_TIMER_GENERIC_H

#include "timer.h"
#include "TIMER_TIMG_NUM_INPUT2_REGS.h"
#include "TIMER_TIMG_NUM_INPUT2_RW_API.h"
#include <stdbool.h>


/**
 * @brief   This function sets the clock configuration
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 * @param   clk_cfg     : pointer to the struct containing the clock configurations
 *
 * @retval  void
 */
void timer_generic_set_clk_cfg(TIMER_TIMG_NUM_INPUT2_REGS_s *TIMER_REGS, timer_clk_cfg_t *clk_cfg);

/**
 * @brief   This function enables the timer clock
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 *
 * @retval  void
 */
void timer_generic_clk_enable(TIMER_TIMG_NUM_INPUT2_REGS_s *TIMER_REGS);

/**
 * @brief   This function disables the timer clock
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 *
 * @retval  void
 */
void timer_generic_clk_disable(TIMER_TIMG_NUM_INPUT2_REGS_s *TIMER_REGS);

/**
 * @brief   This function sets the LOAD value of the timer counter
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 * @param   load_val    : LOAD value for the counter
 *
 * @retval  void
 */
void timer_generic_set_load_val(TIMER_TIMG_NUM_INPUT2_REGS_s *TIMER_REGS, uint16_t load_val); 

/**
 * @brief   This function sets the counter value of the timer counter
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 * @param   ctr_val     : counter value for the counter
 *
 * Note: Setting the counter value directly while the timer's counter is running can lead to unpredictable behavior.
 * This function should only be used when the timer's counter isn't running.  
 *
 * @retval  void
 */
void timer_generic_set_counter_val(TIMER_TIMG_NUM_INPUT2_REGS_s *TIMER_REGS, uint16_t ctr_val);

/**
 * @brief   This function sets the configuration of the timer counter
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 * @param   ctr_cfg     : pointer to the structure containing the timer counter configuration
 *
 *
 * @retval  void
 */
void timer_generic_set_counter_ctrl(TIMER_TIMG_NUM_INPUT2_REGS_s *TIMER_REGS, timer_ctr_cfg_t *ctr_cfg);

/**
 * @brief   This function sets the REPEAT COUNTER value of the timer
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 * @param   rctr_val    : repeat counter value for the timer
 *
 * @retval  void
 */
void timer_generic_set_repeat_counter_val(TIMER_TIMG_NUM_INPUT2_REGS_s *TIMER_REGS, uint16_t rctr_val);

/**
 * @brief   This function starts the timer counter
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 *
 * @retval  void
 */
void timer_generic_start(TIMER_TIMG_NUM_INPUT2_REGS_s *TIMER_REGS);

/**
 * @brief   This function stops the timer counter
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 *
 * @retval  void
 */
void timer_generic_stop(TIMER_TIMG_NUM_INPUT2_REGS_s *TIMER_REGS);

/**
 * @brief   This function sets the input channel configuration of the desired timer channel
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 * @param   in_chan_cfg : pointer to the structure containing the input channel configuration
 * @param   chan_num    : input channel number 
 *
 * @retval  void
 */
void timer_generic_set_input_channel_cfg(TIMER_TIMG_NUM_INPUT2_REGS_s *TIMER_REGS, timer_input_chan_cfg_t *in_chan_cfg, uint8_t chan_num);

/**
 * @brief   This function sets the output channel configuration of the desired timer channel
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 * @param   in_chan_cfg : pointer to the structure containing the output channel configuration
 * @param   chan_num    : output channel number 
 *
 * @retval  void
 */
void timer_generic_set_output_channel_cfg(TIMER_TIMG_NUM_INPUT2_REGS_s *TIMER_REGS, timer_output_chan_cfg_t *out_chan_cfg, uint8_t chan_num); 

/**
 * @brief   This function sets the initial timer configuration. It generates periodic interrupts.
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 * @param   clk_cfg     : pointer to the struct containing the clock configurations
 * @param   ctr_cfg     : pointer to the structure containing the timer counter configuration
 *
 * @retval  void
 */
void timer_generic_set_init_cfg(TIMER_TIMG_NUM_INPUT2_REGS_s *TIMER_REGS, timer_clk_cfg_t *clk_cfg, timer_ctr_cfg_t *ctr_cfg);

/**
 * @brief   This function generates an interrupt after a ceratin time period mentioned in us.
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 * @param   delay_in_us : time period in us after which interrupt should be generated
 *
 * @retval  void
 */
void timer_generic_delay_in_us(TIMER_TIMG_NUM_INPUT2_REGS_s *TIMER_REGS, uint16_t delay_in_us);

/**
 * @brief   This function generates an interrupt after a ceratin time period mentioned in ms.
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 * @param   delay_in_ms : time period in ms after which interrupt should be generated
 *
 * @retval  void
 */
void timer_generic_delay_in_ms(TIMER_TIMG_NUM_INPUT2_REGS_s *TIMER_REGS, uint16_t delay_in_ms);

/**
 *
 */
void timer_generic_set_compare_val(TIMER_TIMG_NUM_INPUT2_REGS_s *TIMER_REGS, uint8_t comp_val, uint8_t chan_num);

/**
 *
 */
void timer_generic_set_pwm_cfg(TIMER_TIMG_NUM_INPUT2_REGS_s *TIMER_REGS, timer_clk_cfg_t *clk_cfg, timer_pwm_cfg_t *pwm_cfg);

/**
 *
 */
void timer_generic_set_pwm_output_channel_action_cfg(TIMER_TIMG_NUM_INPUT2_REGS_s *TIMER_REGS, timer_pwm_output_channel_action_cfg_t *pwm_act_cfg, uint8_t chan_num); 

/**
 *
 */
void timer_generic_set_capture_channel_ctrl(TIMER_TIMG_NUM_INPUT2_REGS_s *TIMER_REGS, timer_capture_channel_ctrl_t *cap_chan_ctrl, uint8_t chan_num);

#endif
