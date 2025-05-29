#ifndef HAL_TIMER_H
#define HAL_TIMER_H

#include "TIMER_REGS.h"
#include "TIMER_RW_API.h"
#include <stdbool.h>


/**
 *  @brief Clock configuration
 */
typedef struct timer_clk_cfg_t{
    TIMER_CLK_CONFIG_CLK_SEL_E  clk_sel;
    uint16_t                    clk_div;
} timer_clk_cfg_t; 

#define TIMER_CLK_CFG_DEFAULT {                    \
    .clk_sel  = TIMER_CLK_CONFIG_CLK_SEL_CLK_BUS  ,\
    .clk_div  = 0                                  \
}

typedef struct timer_ctr_cfg_t{
    TIMER_CTR_CTL_COUNT_MODE_E    ctr_mode;
    bool                          repeat;                
    TIMER_CTR_CTL_CTR_ZERO_CTRL_E ctr_zero_cond;
    TIMER_CTR_CTL_CTR_LOAD_CTRL_E ctr_load_cond;
    TIMER_CTR_CTL_CTR_ADV_CTRL_E  ctr_adv_cond;
    //skipping suppress_event_gen, pl, fault, debug mode

}timer_ctr_cfg_t;

#define TIMER_CTR_CFG_DEFAULT {                                        \
    .ctr_mode       = TIMER_CTR_CTL_COUNT_MODE_UP                     ,\
    .repeat         = 1                                               ,\
    .ctr_zero_cond  = TIMER_CTR_CTL_CTR_ZERO_CTRL_CHANNEL_0_ZERO_COND ,\
    .ctr_load_cond  = TIMER_CTR_CTL_CTR_LOAD_CTRL_CHANNEL_0_LOAD_COND ,\
    .ctr_adv_cond   = TIMER_CTR_CTL_CTR_ADV_CTRL_CHANNEL_0_ADV_COND    \
}

typedef struct timer_input_chan_cfg_t{
    //TODO: this has to be changed to: TIMER_INPUT_CC_INPUT_SEL_E in_sel
    TIMER_INPUT_CC_0_INPUT_SEL_0_E            in_sel;
    bool                                      in_inv;
    bool                                      in_filter_en;
    TIMER_INPUT_FILTER_CC_0_FILTER_PERIOD_0_E in_filter_prd;
}timer_input_chan_cfg_t; 

#define TIMER_INPUT_CHAN_CFG_DEFAULT {                                 \
    .in_sel         = TIMER_INPUT_CC_0_INPUT_SEL_0_CCPIN_X            ,\
    .in_inv         = 0                                               ,\
    .in_filter_en   = 1                                               ,\
    .in_filter_prd  = TIMER_INPUT_FILTER_CC_0_FILTER_PERIOD_0_WIDTH_3  \
}

typedef struct timer_output_chan_cfg_t{
    //TODO: this has to be changed to: TIMER_CC_OUTPUT_CTL_CC_OUT_SEL_E   out_sel 
    TIMER_CC0_OUTPUT_CTL_CC_OUT_SEL_0_E   out_sel;
    bool                                  out_inv;
    bool                                  out_init_val;
}timer_output_chan_cfg_t;

#define TIMER_OUTPUT_CHAN_CFG_DEFAULT {  \
    .out_sel      = TIMER_CC0_OUTPUT_CTL_CC_OUT_SEL_0_PWM_OUTPUT  ,\
    .out_inv      = 0                                             ,\
    .out_init_val = 0                                              \
}

typedef struct timer_pwm_cfg_t{
    timer_ctr_cfg_t           *ctr_cfg;
    uint16_t                  pwm_period;
    uint8_t                   chan_num;
    uint16_t                  comp_val;
    timer_output_chan_cfg_t   *out_chan_cfg; 
    
}timer_pwm_cfg_t;
/**
 * @brief   This function sets the clock configuration
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 * @param   clk_cfg     : pointer to the struct containing the clock configurations
 *
 * @retval  void
 */
void timer_set_clk_cfg(TIMER_REGS_s *TIMER_REGS, timer_clk_cfg_t *clk_cfg);

/**
 * @brief   This function enables the timer clock
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 *
 * @retval  void
 */
void timer_clk_enable(TIMER_REGS_s *TIMER_REGS);

/**
 * @brief   This function disables the timer clock
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 *
 * @retval  void
 */
void timer_clk_disable(TIMER_REGS_s *TIMER_REGS);

/**
 * @brief   This function sets the LOAD value of the timer counter
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 * @param   load_val    : LOAD value for the counter
 *
 * @retval  void
 */
void timer_set_load_val(TIMER_REGS_s *TIMER_REGS, uint16_t load_val); 

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
void timer_set_counter_val(TIMER_REGS_s *TIMER_REGS, uint16_t ctr_val);

/**
 * @brief   This function sets the configuration of the timer counter
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 * @param   ctr_cfg     : pointer to the structure containing the timer counter configuration
 *
 *
 * @retval  void
 */
void timer_set_counter_ctrl(TIMER_REGS_s *TIMER_REGS, timer_ctr_cfg_t *ctr_cfg);

/**
 * @brief   This function sets the REPEAT COUNTER value of the timer
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 * @param   rctr_val    : repeat counter value for the timer
 *
 * @retval  void
 */
void timer_set_repeat_counter_val(TIMER_REGS_s *TIMER_REGS, uint16_t rctr_val);

/**
 * @brief   This function starts the timer counter
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 *
 * @retval  void
 */
void timer_start(TIMER_REGS_s *TIMER_REGS);

/**
 * @brief   This function stops the timer counter
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 *
 * @retval  void
 */
void timer_stop(TIMER_REGS_s *TIMER_REGS);

/**
 * @brief   This function sets the input channel configuration of the desired timer channel
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 * @param   in_chan_cfg : pointer to the structure containing the input channel configuration
 * @param   chan_num    : input channel number 
 *
 * @retval  void
 */
void timer_set_input_channel_cfg(TIMER_REGS_s *TIMER_REGS, timer_input_chan_cfg_t *in_chan_cfg, uint8_t chan_num);

/**
 * @brief   This function sets the output channel configuration of the desired timer channel
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 * @param   in_chan_cfg : pointer to the structure containing the output channel configuration
 * @param   chan_num    : output channel number 
 *
 * @retval  void
 */
void timer_set_output_channel_cfg(TIMER_REGS_s *TIMER_REGS, timer_output_chan_cfg_t *out_chan_cfg, uint8_t chan_num); 

/**
 * @brief   This function sets the initial timer configuration. It generates periodic interrupts.
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 * @param   clk_cfg     : pointer to the struct containing the clock configurations
 * @param   ctr_cfg     : pointer to the structure containing the timer counter configuration
 *
 * @retval  void
 */
void timer_set_init_cfg(TIMER_REGS_s *TIMER_REGS, timer_clk_cfg_t *clk_cfg, timer_ctr_cfg_t *ctr_cfg);

/**
 * @brief   This function generates an interrupt after a ceratin time period mentioned in us.
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 * @param   delay_in_us : time period in us after which interrupt should be generated
 *
 * @retval  void
 */
void timer_delay_in_us(TIMER_REGS_s *TIMER_REGS, uint16_t delay_in_us);

/**
 * @brief   This function generates an interrupt after a ceratin time period mentioned in ms.
 *
 * @param   TIMER_REGS  : pointer to the timer register space
 * @param   delay_in_ms : time period in ms after which interrupt should be generated
 *
 * @retval  void
 */
void timer_delay_in_ms(TIMER_REGS_s *TIMER_REGS, uint16_t delay_in_ms);

/**
 *
 */
void timer_set_compare_val(TIMER_REGS_s *TIMER_REGS, uint8_t comp_val, uint8_t chan_num);

/**
 *
 */
void timer_set_pwm_cfg(TIMER_REGS_s *TIMER_REGS, timer_clk_cfg_t *clk_cfg, timer_pwm_cfg_t *pwm_cfg);

#endif
