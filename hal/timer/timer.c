#include "timer.h"

/**
 * timer_set_clk_cfg
 */
void timer_set_clk_cfg(TIMER_REGS_s *TIMER_REGS, timer_clk_cfg_t *clk_cfg) {
    TIMER_REGS->CLK_CONFIG.clk_sel  = clk_cfg->clk_sel;  
    TIMER_REGS->CLK_CONFIG.clk_div  = clk_cfg->clk_div;  
}

/**
 * timer_clk_enable
 */
void timer_clk_enable(TIMER_REGS_s *TIMER_REGS) {
    TIMER_REGS->CLK_CTRL.clk_en  = 0x1;  
}

/**
 * timer_clk_disable
 */
void timer_clk_disable(TIMER_REGS_s *TIMER_REGS) {
    TIMER_REGS->CLK_CTRL.clk_en  = 0x0;  
}

/**
 * timer_set_load_val
 */
void timer_set_load_val(TIMER_REGS_s *TIMER_REGS, uint16_t load_val) {
    TIMER_REGS->CTR_LOAD_VAL.ctr_load_val  = load_val;  
}

/**
 * timer_set_counter_val
 */
void timer_set_counter_val(TIMER_REGS_s *TIMER_REGS, uint16_t ctr_val) {
    TIMER_REGS->CTR_VAL.ctr_val  = ctr_val;  
}

/**
 * timer_set_counter_ctrl
 */
void timer_set_counter_ctrl(TIMER_REGS_s *TIMER_REGS, timer_ctr_cfg_t *ctr_cfg) {
    TIMER_REGS->CTR_CTL.count_mode  = ctr_cfg->ctr_mode;
    if(ctr_cfg->repeat) {
        TIMER_REGS->CTR_CTL.repeat_mode  = 0x1;
    } else {
        TIMER_REGS->CTR_CTL.repeat_mode  = 0x0;
    }
    TIMER_REGS->CTR_CTL.ctr_zero_ctrl = ctr_cfg->ctr_zero_cond;
    TIMER_REGS->CTR_CTL.ctr_load_ctrl = ctr_cfg->ctr_load_cond;
    TIMER_REGS->CTR_CTL.ctr_adv_ctrl  = ctr_cfg->ctr_adv_cond;
}

/**
 * timer_set_repeat_counter_val
 */
void timer_set_repeat_counter_val(TIMER_REGS_s *TIMER_REGS, uint16_t rctr_val) {
    TIMER_REGS->RCTR_VAL.rctr_val  = rctr_val;  
}

/**
 * timer_start
 */
void timer_start(TIMER_REGS_s *TIMER_REGS) {
    TIMER_REGS->CTR_CTL.ctr_en  = 0x1;
}

/**
 * timer_stop
 */
void timer_stop(TIMER_REGS_s *TIMER_REGS) {
    TIMER_REGS->CTR_CTL.ctr_en  = 0x0;
}

/**
 * timer_set_input_channel_cfg
 */
void timer_set_input_channel_cfg(TIMER_REGS_s *TIMER_REGS, timer_input_chan_cfg_t *in_chan_cfg, uint8_t chan_num) {
    if(chan_num == 0) {
        TIMER_REGS->INPUT_CC_0.input_sel_0                  = in_chan_cfg->in_sel;
        if(in_chan_cfg->in_inv) {
            TIMER_REGS->INPUT_CC_0.input_sel_0              = 0x1;
        } else {
            TIMER_REGS->INPUT_CC_0.input_sel_0              = 0x0;
        }  
        if(in_chan_cfg->in_filter_en) {
            TIMER_REGS->INPUT_FILTER_CC_0.filter_en_0       = 0x1;
        } else {
            TIMER_REGS->INPUT_FILTER_CC_0.filter_en_0       = 0x0;
        }
        TIMER_REGS->INPUT_FILTER_CC_0.filter_period_0       = in_chan_cfg->in_filter_prd;
        TIMER_REGS->INPUT_FILTER_CC_0.is_consecutive_prd_0  = 0x1;
    } else if(chan_num == 1) { 
        TIMER_REGS->INPUT_CC_1.input_sel_1                  = in_chan_cfg->in_sel;
        if(in_chan_cfg->in_inv) {
            TIMER_REGS->INPUT_CC_1.input_sel_1              = 0x1;
        } else {
            TIMER_REGS->INPUT_CC_1.input_sel_1              = 0x0;
        }  
        if(in_chan_cfg->in_filter_en) {
            TIMER_REGS->INPUT_FILTER_CC_1.filter_en_1       = 0x1;
        } else {
            TIMER_REGS->INPUT_FILTER_CC_1.filter_en_1       = 0x0;
        }
        TIMER_REGS->INPUT_FILTER_CC_1.filter_period_1       = in_chan_cfg->in_filter_prd;
        TIMER_REGS->INPUT_FILTER_CC_1.is_consecutive_prd_1  = 0x1;
    } else if(chan_num == 2) {
        TIMER_REGS->INPUT_CC_2.input_sel_2                  = in_chan_cfg->in_sel;
        if(in_chan_cfg->in_inv) {
            TIMER_REGS->INPUT_CC_2.input_sel_2              = 0x1;
        } else {
            TIMER_REGS->INPUT_CC_2.input_sel_2              = 0x0;
        }  
        if(in_chan_cfg->in_filter_en) {
            TIMER_REGS->INPUT_FILTER_CC_2.filter_en_2       = 0x1;
        } else {
            TIMER_REGS->INPUT_FILTER_CC_2.filter_en_2       = 0x0;
        }
        TIMER_REGS->INPUT_FILTER_CC_2.filter_period_2       = in_chan_cfg->in_filter_prd;
        TIMER_REGS->INPUT_FILTER_CC_2.is_consecutive_prd_2  = 0x1;
    } else {
        TIMER_REGS->INPUT_CC_3.input_sel_3                  = in_chan_cfg->in_sel;
        if(in_chan_cfg->in_inv) {
            TIMER_REGS->INPUT_CC_3.input_sel_3              = 0x1;
        } else {
            TIMER_REGS->INPUT_CC_3.input_sel_3              = 0x0;
        }  
        if(in_chan_cfg->in_filter_en) {
            TIMER_REGS->INPUT_FILTER_CC_3.filter_en_3       = 0x1;
        } else {
            TIMER_REGS->INPUT_FILTER_CC_3.filter_en_3       = 0x0;
        }
        TIMER_REGS->INPUT_FILTER_CC_3.filter_period_3       = in_chan_cfg->in_filter_prd;
        TIMER_REGS->INPUT_FILTER_CC_3.is_consecutive_prd_3  = 0x1;
    }
}

/**
 * timer_set_output_channel_cfg
 */
void timer_set_output_channel_cfg(TIMER_REGS_s *TIMER_REGS, timer_output_chan_cfg_t *out_chan_cfg, uint8_t chan_num) {
    if(chan_num == 0) {
        TIMER_REGS->CC0_OUTPUT_CTL.cc_out_sel_0           = out_chan_cfg->out_sel;
        if(out_chan_cfg->out_inv) {
            TIMER_REGS->CC0_OUTPUT_CTL.cc_out_inv_0       = 0x1;
        } else {
            TIMER_REGS->CC0_OUTPUT_CTL.cc_out_inv_0       = 0x0;
        }
        if(out_chan_cfg->out_init_val) {
            TIMER_REGS->CC0_OUTPUT_CTL.cc_out_val_init_0  = 0x1;
        } else {
            TIMER_REGS->CC0_OUTPUT_CTL.cc_out_val_init_0  = 0x0;
        }
    } else if(chan_num == 1) {
        TIMER_REGS->CC1_OUTPUT_CTL.cc_out_sel_1           = out_chan_cfg->out_sel;
        if(out_chan_cfg->out_inv) {
            TIMER_REGS->CC1_OUTPUT_CTL.cc_out_inv_1       = 0x1;
        } else {
            TIMER_REGS->CC1_OUTPUT_CTL.cc_out_inv_1       = 0x0;
        }
        if(out_chan_cfg->out_init_val) {
            TIMER_REGS->CC1_OUTPUT_CTL.cc_out_val_init_1  = 0x1;
        } else {
            TIMER_REGS->CC1_OUTPUT_CTL.cc_out_val_init_1  = 0x0;
        }
    } else if(chan_num == 2) {
        TIMER_REGS->CC2_OUTPUT_CTL.cc_out_sel_2           = out_chan_cfg->out_sel;
        if(out_chan_cfg->out_inv) {
            TIMER_REGS->CC2_OUTPUT_CTL.cc_out_inv_2       = 0x1;
        } else {
            TIMER_REGS->CC2_OUTPUT_CTL.cc_out_inv_2       = 0x0;
        }
        if(out_chan_cfg->out_init_val) {
            TIMER_REGS->CC2_OUTPUT_CTL.cc_out_val_init_2  = 0x1;
        } else {
            TIMER_REGS->CC2_OUTPUT_CTL.cc_out_val_init_2  = 0x0;
        }
    } else {
        TIMER_REGS->CC3_OUTPUT_CTL.cc_out_sel_3           = out_chan_cfg->out_sel;
        if(out_chan_cfg->out_inv) {
            TIMER_REGS->CC3_OUTPUT_CTL.cc_out_inv_3       = 0x1;
        } else {
            TIMER_REGS->CC3_OUTPUT_CTL.cc_out_inv_3       = 0x0;
        }
        if(out_chan_cfg->out_init_val) {
            TIMER_REGS->CC3_OUTPUT_CTL.cc_out_val_init_3  = 0x1;
        } else {
            TIMER_REGS->CC3_OUTPUT_CTL.cc_out_val_init_3  = 0x0;
        }
    }
}

/**
 * timer_set_init_cfg
 * generates periodic interrupts
 */
void timer_set_init_cfg(TIMER_REGS_s *TIMER_REGS, timer_clk_cfg_t *clk_cfg, timer_ctr_cfg_t *ctr_cfg) {
    timer_set_clk_cfg(TIMER_REGS, clk_cfg);
    //up counter in repeat mode advancing every clock
    timer_set_counter_ctrl(TIMER_REGS, ctr_cfg);
    timer_set_load_val(TIMER_REGS, 0xFFFF); 
    timer_clk_enable(TIMER_REGS);
    timer_start(TIMER_REGS);
}

/**
 * timer_delay_in_us
 * generates an interrupt after a certain time period mentioned in us 
 */
void timer_delay_in_us(TIMER_REGS_s *TIMER_REGS, uint16_t delay_in_us) {
    uint16_t  load_val;
    load_val  = 32*delay_in_us - 1; 
    //default clk_cfg   
    timer_clk_cfg_t default_timer_clk_cfg = TIMER_CLK_CFG_DEFAULT;
    timer_clk_cfg_t *timer_clk_cfg        = &default_timer_clk_cfg;
    //default ctr_cfg
    timer_ctr_cfg_t default_timer_ctr_cfg = TIMER_CTR_CFG_DEFAULT;
    timer_ctr_cfg_t *ctr_cfg              = &default_timer_ctr_cfg;
    
    timer_set_clk_cfg(TIMER_REGS, timer_clk_cfg);
    timer_clk_enable(TIMER_REGS);
    
    ctr_cfg->repeat                       = 0;
    
    //timer_set_clk_cfg(TIMER_REGS, timer_clk_cfg);
    //timer_set_counter_ctrl(TIMER_REGS, ctr_cfg);
    //timer_set_load_val(TIMER_REGS, load_val); 
    //timer_clk_enable(TIMER_REGS);
    //timer_start(TIMER_REGS);

    
    timer_set_counter_ctrl(TIMER_REGS, ctr_cfg);
    timer_set_load_val(TIMER_REGS, load_val); 
    
    //timer_clk_disable(TIMER_REGS);
    
    //timer_set_clk_cfg(TIMER_REGS, timer_clk_cfg);
    timer_clk_enable(TIMER_REGS);
    timer_start(TIMER_REGS);
}

/**
 * timer_delay_in_ms
 * generates an interrupt after a certain time period mentioned in ms 
 */
void timer_delay_in_ms(TIMER_REGS_s *TIMER_REGS, uint16_t delay_in_ms) {
    uint16_t  load_val;
    uint16_t  comp_val;
    load_val  = 32*delay_in_ms - 2; 
    comp_val  = load_val - 1; 
    //default clk_cfg   
    timer_clk_cfg_t default_timer_clk_cfg = TIMER_CLK_CFG_DEFAULT;
    timer_clk_cfg_t *timer_clk_cfg        = &default_timer_clk_cfg;
    //default ctr_cfg
    timer_ctr_cfg_t default_timer_ctr_cfg = TIMER_CTR_CFG_DEFAULT;
    timer_ctr_cfg_t *ctr_cfg              = &default_timer_ctr_cfg;
    
    timer_set_clk_cfg(TIMER_REGS, timer_clk_cfg);
    timer_clk_enable(TIMER_REGS);
    
    timer_clk_cfg->clk_div                = 1000; 
    ctr_cfg->repeat                       = 0;

    timer_set_counter_ctrl(TIMER_REGS, ctr_cfg);
    timer_set_load_val(TIMER_REGS, load_val);
    timer_set_compare_val(TIMER_REGS, comp_val, 0);
    
    timer_clk_disable(TIMER_REGS);
   
    timer_set_clk_cfg(TIMER_REGS, timer_clk_cfg);
    timer_clk_enable(TIMER_REGS);
    timer_start(TIMER_REGS);
}

/**
 * timer_set_compare_val
 * Sets the compare value for a particular channel
 */
void timer_set_compare_val(TIMER_REGS_s *TIMER_REGS, uint8_t comp_val, uint8_t chan_num) {
    if(chan_num == 0) {
        TIMER_REGS->CC0_COMPARE_CTRL.comp_val_0 = comp_val; 
    } else if (chan_num == 1) {
        TIMER_REGS->CC1_COMPARE_CTRL.comp_val_1 = comp_val; 
    } else if (chan_num == 2) {
        TIMER_REGS->CC2_COMPARE_CTRL.comp_val_2 = comp_val; 
    } else {
        TIMER_REGS->CC3_COMPARE_CTRL.comp_val_3 = comp_val; 
    }
}



/**
 * timer_set_pwm_output_channel_action_cfg
 */
void timer_set_pwm_output_channel_action_cfg(TIMER_REGS_s *TIMER_REGS,timer_pwm_output_channel_action_cfg_t *pwm_act_cfg, uint8_t chan_num) {
    if(chan_num == 0) {
        TIMER_REGS->CC0_CC_PWM_CFG.cc_out_cc2d_0  = pwm_act_cfg->cc2d_act; 
        TIMER_REGS->CC0_CC_PWM_CFG.cc_out_cc2u_0  = pwm_act_cfg->cc2u_act; 
        TIMER_REGS->CC0_CC_PWM_CFG.cc_out_ccd_0   = pwm_act_cfg->ccd_act ; 
        TIMER_REGS->CC0_CC_PWM_CFG.cc_out_ccu_0   = pwm_act_cfg->ccu_act ; 
        TIMER_REGS->CC0_CC_PWM_CFG.cc_out_load_0  = pwm_act_cfg->load_act; 
        TIMER_REGS->CC0_CC_PWM_CFG.cc_out_zero_0  = pwm_act_cfg->zero_act; 
    } else if(chan_num == 1) {
        TIMER_REGS->CC1_CC_PWM_CFG.cc_out_cc2d_1  = pwm_act_cfg->cc2d_act; 
        TIMER_REGS->CC1_CC_PWM_CFG.cc_out_cc2u_1  = pwm_act_cfg->cc2u_act; 
        TIMER_REGS->CC1_CC_PWM_CFG.cc_out_ccd_1   = pwm_act_cfg->ccd_act ; 
        TIMER_REGS->CC1_CC_PWM_CFG.cc_out_ccu_1   = pwm_act_cfg->ccu_act ; 
        TIMER_REGS->CC1_CC_PWM_CFG.cc_out_load_1  = pwm_act_cfg->load_act; 
        TIMER_REGS->CC1_CC_PWM_CFG.cc_out_zero_1  = pwm_act_cfg->zero_act; 
    } else if(chan_num == 2) {
        TIMER_REGS->CC2_CC_PWM_CFG.cc_out_cc2d_2  = pwm_act_cfg->cc2d_act; 
        TIMER_REGS->CC2_CC_PWM_CFG.cc_out_cc2u_2  = pwm_act_cfg->cc2u_act; 
        TIMER_REGS->CC2_CC_PWM_CFG.cc_out_ccd_2   = pwm_act_cfg->ccd_act ; 
        TIMER_REGS->CC2_CC_PWM_CFG.cc_out_ccu_2   = pwm_act_cfg->ccu_act ; 
        TIMER_REGS->CC2_CC_PWM_CFG.cc_out_load_2  = pwm_act_cfg->load_act; 
        TIMER_REGS->CC2_CC_PWM_CFG.cc_out_zero_2  = pwm_act_cfg->zero_act; 
    } else {
        TIMER_REGS->CC3_CC_PWM_CFG.cc_out_cc2d_3  = pwm_act_cfg->cc2d_act; 
        TIMER_REGS->CC3_CC_PWM_CFG.cc_out_cc2u_3  = pwm_act_cfg->cc2u_act; 
        TIMER_REGS->CC3_CC_PWM_CFG.cc_out_ccd_3   = pwm_act_cfg->ccd_act ; 
        TIMER_REGS->CC3_CC_PWM_CFG.cc_out_ccu_3   = pwm_act_cfg->ccu_act ; 
        TIMER_REGS->CC3_CC_PWM_CFG.cc_out_load_3  = pwm_act_cfg->load_act; 
        TIMER_REGS->CC3_CC_PWM_CFG.cc_out_zero_3  = pwm_act_cfg->zero_act; 
    }
}

/**
 * timer_set_capture_channel_ctrl
 * Sets the conditions for a specific channel to control the timer counter
 */
void timer_set_capture_channel_ctrl(TIMER_REGS_s *TIMER_REGS, timer_capture_channel_ctrl_t *cap_chan_ctrl, uint8_t chan_num) {
    if(chan_num == 0) {
        TIMER_REGS->CC0_CAPTURE_CTRL.cap_cond_0   = cap_chan_ctrl->cap_cond; 
        TIMER_REGS->CC0_CAPTURE_CTRL.load_cond_0  = cap_chan_ctrl->load_cond; 
        TIMER_REGS->CC0_CAPTURE_CTRL.zero_cond_0  = cap_chan_ctrl->zero_cond; 
        TIMER_REGS->CC0_CAPTURE_CTRL.adv_cond_0   = cap_chan_ctrl->adv_cond; 
    } else if(chan_num == 1) {
        TIMER_REGS->CC1_CAPTURE_CTRL.cap_cond_1   = cap_chan_ctrl->cap_cond; 
        TIMER_REGS->CC1_CAPTURE_CTRL.load_cond_1  = cap_chan_ctrl->load_cond; 
        TIMER_REGS->CC1_CAPTURE_CTRL.zero_cond_1  = cap_chan_ctrl->zero_cond; 
        TIMER_REGS->CC1_CAPTURE_CTRL.adv_cond_1   = cap_chan_ctrl->adv_cond; 
    } else if(chan_num == 2) {
        TIMER_REGS->CC2_CAPTURE_CTRL.cap_cond_2   = cap_chan_ctrl->cap_cond; 
        TIMER_REGS->CC2_CAPTURE_CTRL.load_cond_2  = cap_chan_ctrl->load_cond; 
        TIMER_REGS->CC2_CAPTURE_CTRL.zero_cond_2  = cap_chan_ctrl->zero_cond; 
        TIMER_REGS->CC2_CAPTURE_CTRL.adv_cond_2   = cap_chan_ctrl->adv_cond; 
    } else {
        TIMER_REGS->CC3_CAPTURE_CTRL.cap_cond_3   = cap_chan_ctrl->cap_cond; 
        TIMER_REGS->CC3_CAPTURE_CTRL.load_cond_3  = cap_chan_ctrl->load_cond; 
        TIMER_REGS->CC3_CAPTURE_CTRL.zero_cond_3  = cap_chan_ctrl->zero_cond; 
        TIMER_REGS->CC3_CAPTURE_CTRL.adv_cond_3   = cap_chan_ctrl->adv_cond; 
    }
}

/**
 * timer_set_pwm_cfg
 * Sets the PWM configuration for a particular channel
 */
void timer_set_pwm_cfg(TIMER_REGS_s *TIMER_REGS, timer_clk_cfg_t *clk_cfg, timer_pwm_cfg_t *pwm_cfg) {
    uint16_t load_val;
    uint16_t comp_val;

    timer_pwm_output_channel_action_cfg_t default_pwm_act_cfg = TIMER_PWM_OUTPUT_CHANNEL_ACTION_CFG_DEFAULT;
    timer_pwm_output_channel_action_cfg_t *pwm_act_cfg        = &default_pwm_act_cfg;
    
    timer_set_clk_cfg(TIMER_REGS, clk_cfg);
 
    //up(edge aligned) counting repeat counter with load, zero and advance controls from chan0_coc unit
    timer_set_counter_ctrl(TIMER_REGS, &pwm_cfg->ctr_cfg);
    
    if(pwm_cfg->ctr_cfg.ctr_mode == TIMER_CTR_CTL_COUNT_MODE_UP) {
        load_val = pwm_cfg->pwm_period - 1;
        comp_val = pwm_cfg->pwm_high_period; 
        pwm_act_cfg->zero_act = TIMER_CC0_CC_PWM_CFG_CC_OUT_ZERO_0_HIGH;
        pwm_act_cfg->ccu_act  = TIMER_CC0_CC_PWM_CFG_CC_OUT_CCU_0_LOW;
    } else if(pwm_cfg->ctr_cfg.ctr_mode == TIMER_CTR_CTL_COUNT_MODE_DOWN) {
        load_val = pwm_cfg->pwm_period - 1;
        comp_val = load_val - pwm_cfg->pwm_high_period; 
        pwm_act_cfg->load_act = TIMER_CC0_CC_PWM_CFG_CC_OUT_LOAD_0_HIGH;
        pwm_act_cfg->ccd_act  = TIMER_CC0_CC_PWM_CFG_CC_OUT_CCD_0_LOW;
    } else {
        load_val = pwm_cfg->pwm_period>>1;
        comp_val = load_val - (pwm_cfg->pwm_high_period>>1); 
        timer_set_load_val(TIMER_REGS, pwm_cfg->pwm_period>>1); 
        pwm_act_cfg->ccu_act  = TIMER_CC0_CC_PWM_CFG_CC_OUT_CCU_0_HIGH;
        pwm_act_cfg->ccd_act  = TIMER_CC0_CC_PWM_CFG_CC_OUT_CCD_0_LOW;
    }

    timer_set_load_val(TIMER_REGS, load_val); 
    timer_set_compare_val(TIMER_REGS, comp_val, pwm_cfg->chan_num);
    timer_set_pwm_output_channel_action_cfg(TIMER_REGS, pwm_act_cfg, pwm_cfg->chan_num);
    timer_set_output_channel_cfg(TIMER_REGS, &pwm_cfg->out_chan_cfg, pwm_cfg->chan_num);
    timer_set_capture_channel_ctrl(TIMER_REGS, &pwm_cfg->cap_chan_ctrl, pwm_cfg->chan_num);
}
