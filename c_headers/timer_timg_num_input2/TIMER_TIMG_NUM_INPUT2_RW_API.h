#ifndef TIMER_TIMG_NUM_INPUT2_RW_API_H
#define TIMER_TIMG_NUM_INPUT2_RW_API_H

#include "TIMER_TIMG_NUM_INPUT2_REGS.h"

static inline void TIMER_TIMG_NUM_INPUT2_PWR_EN_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w = ((pwr_en<<TIMER_TIMG_NUM_INPUT2_PWR_EN_PWR_EN_OFS) & TIMER_TIMG_NUM_INPUT2_PWR_EN_PWR_EN_MASK)
                                +((pwr_en_key<<TIMER_TIMG_NUM_INPUT2_PWR_EN_PWR_EN_KEY_OFS) & TIMER_TIMG_NUM_INPUT2_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_RST_CTRL_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w = ((rst<<TIMER_TIMG_NUM_INPUT2_RST_CTRL_RST_OFS) & TIMER_TIMG_NUM_INPUT2_RST_CTRL_RST_MASK)
                                  +((rst_sts_clr<<TIMER_TIMG_NUM_INPUT2_RST_CTRL_RST_STS_CLR_OFS) & TIMER_TIMG_NUM_INPUT2_RST_CTRL_RST_STS_CLR_MASK)
                                  +((rst_key<<TIMER_TIMG_NUM_INPUT2_RST_CTRL_RST_KEY_OFS) & TIMER_TIMG_NUM_INPUT2_RST_CTRL_RST_KEY_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_CLK_CTRL_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t clk_en) {
    registers->CLK_CTRL.packed_w = ((clk_en<<TIMER_TIMG_NUM_INPUT2_CLK_CTRL_CLK_EN_OFS) & TIMER_TIMG_NUM_INPUT2_CLK_CTRL_CLK_EN_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_INTR_EVENT_CLEAR(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_EVENT.packed_w = 1<<intr_idx;
}

static inline void TIMER_TIMG_NUM_INPUT2_INTR_EVENT_EN(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_EN_0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_EN_1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void TIMER_TIMG_NUM_INPUT2_INTR_EVENT_DIS(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_EN_0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_EN_1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void TIMER_TIMG_NUM_INPUT2_INTR_EVENT_NMI_EN(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_NMI_EN_0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_NMI_EN_1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void TIMER_TIMG_NUM_INPUT2_INTR_EVENT_NMI_DIS(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_NMI_EN_0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_NMI_EN_1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void TIMER_TIMG_NUM_INPUT2_GENERIC_EVENT_EN_0_(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->EVENT_EN_0_0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->EVENT_EN_0_1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void TIMER_TIMG_NUM_INPUT2_GENERIC_EVENT_DIS_0_(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->EVENT_EN_0_0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->EVENT_EN_0_1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void TIMER_TIMG_NUM_INPUT2_GENERIC_EVENT_EN_1_(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->EVENT_EN_1_0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->EVENT_EN_1_1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void TIMER_TIMG_NUM_INPUT2_GENERIC_EVENT_DIS_1_(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->EVENT_EN_1_0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->EVENT_EN_1_1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void TIMER_TIMG_NUM_INPUT2_INTR_SW_SET(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_SW_SET.packed_w = 1<<intr_idx;
}

static inline void TIMER_TIMG_NUM_INPUT2_CLK_CONFIG_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t clk_sel, uint32_t clk_div) {
    registers->CLK_CONFIG.packed_w = ((clk_sel<<TIMER_TIMG_NUM_INPUT2_CLK_CONFIG_CLK_SEL_OFS) & TIMER_TIMG_NUM_INPUT2_CLK_CONFIG_CLK_SEL_MASK)
                                    +((clk_div<<TIMER_TIMG_NUM_INPUT2_CLK_CONFIG_CLK_DIV_OFS) & TIMER_TIMG_NUM_INPUT2_CLK_CONFIG_CLK_DIV_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_TRIG_IN_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t trig_en, uint32_t trig_sel) {
    registers->TRIG_IN.packed_w = ((trig_en<<TIMER_TIMG_NUM_INPUT2_TRIG_IN_TRIG_EN_OFS) & TIMER_TIMG_NUM_INPUT2_TRIG_IN_TRIG_EN_MASK)
                                 +((trig_sel<<TIMER_TIMG_NUM_INPUT2_TRIG_IN_TRIG_SEL_OFS) & TIMER_TIMG_NUM_INPUT2_TRIG_IN_TRIG_SEL_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_TRIG_OUT_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t trig_out_en, uint32_t trig_sw_en, uint32_t trig_hw_en, uint32_t trig_hw_sel) {
    registers->TRIG_OUT.packed_w = ((trig_out_en<<TIMER_TIMG_NUM_INPUT2_TRIG_OUT_TRIG_OUT_EN_OFS) & TIMER_TIMG_NUM_INPUT2_TRIG_OUT_TRIG_OUT_EN_MASK)
                                  +((trig_sw_en<<TIMER_TIMG_NUM_INPUT2_TRIG_OUT_TRIG_SW_EN_OFS) & TIMER_TIMG_NUM_INPUT2_TRIG_OUT_TRIG_SW_EN_MASK)
                                  +((trig_hw_en<<TIMER_TIMG_NUM_INPUT2_TRIG_OUT_TRIG_HW_EN_OFS) & TIMER_TIMG_NUM_INPUT2_TRIG_OUT_TRIG_HW_EN_MASK)
                                  +((trig_hw_sel<<TIMER_TIMG_NUM_INPUT2_TRIG_OUT_TRIG_HW_SEL_OFS) & TIMER_TIMG_NUM_INPUT2_TRIG_OUT_TRIG_HW_SEL_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_0_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t filter_en_0, uint32_t is_consecutive_prd_0, uint32_t filter_period_0) {
    registers->INPUT_FILTER_CC_0.packed_w = ((filter_en_0<<TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_0_FILTER_EN_0_OFS) & TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_0_FILTER_EN_0_MASK)
                                           +((is_consecutive_prd_0<<TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_0_IS_CONSECUTIVE_PRD_0_OFS) & TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_0_IS_CONSECUTIVE_PRD_0_MASK)
                                           +((filter_period_0<<TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_0_FILTER_PERIOD_0_OFS) & TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_0_FILTER_PERIOD_0_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_1_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t filter_en_1, uint32_t is_consecutive_prd_1, uint32_t filter_period_1) {
    registers->INPUT_FILTER_CC_1.packed_w = ((filter_en_1<<TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_1_FILTER_EN_1_OFS) & TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_1_FILTER_EN_1_MASK)
                                           +((is_consecutive_prd_1<<TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_1_IS_CONSECUTIVE_PRD_1_OFS) & TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_1_IS_CONSECUTIVE_PRD_1_MASK)
                                           +((filter_period_1<<TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_1_FILTER_PERIOD_1_OFS) & TIMER_TIMG_NUM_INPUT2_INPUT_FILTER_CC_1_FILTER_PERIOD_1_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_INPUT_CC_0_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t input_sel_0, uint32_t input_inv_0) {
    registers->INPUT_CC_0.packed_w = ((input_sel_0<<TIMER_TIMG_NUM_INPUT2_INPUT_CC_0_INPUT_SEL_0_OFS) & TIMER_TIMG_NUM_INPUT2_INPUT_CC_0_INPUT_SEL_0_MASK)
                                    +((input_inv_0<<TIMER_TIMG_NUM_INPUT2_INPUT_CC_0_INPUT_INV_0_OFS) & TIMER_TIMG_NUM_INPUT2_INPUT_CC_0_INPUT_INV_0_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_INPUT_CC_1_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t input_sel_1, uint32_t input_inv_1) {
    registers->INPUT_CC_1.packed_w = ((input_sel_1<<TIMER_TIMG_NUM_INPUT2_INPUT_CC_1_INPUT_SEL_1_OFS) & TIMER_TIMG_NUM_INPUT2_INPUT_CC_1_INPUT_SEL_1_MASK)
                                    +((input_inv_1<<TIMER_TIMG_NUM_INPUT2_INPUT_CC_1_INPUT_INV_1_OFS) & TIMER_TIMG_NUM_INPUT2_INPUT_CC_1_INPUT_INV_1_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t is_capture_0, uint32_t cc2d_sel_0, uint32_t cc2u_sel_0, uint32_t suppress_coc_event_gen_0) {
    registers->CC0_CMN_CTRL.packed_w = ((is_capture_0<<TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_IS_CAPTURE_0_OFS) & TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_IS_CAPTURE_0_MASK)
                                      +((cc2d_sel_0<<TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_CC2D_SEL_0_OFS) & TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_CC2D_SEL_0_MASK)
                                      +((cc2u_sel_0<<TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_CC2U_SEL_0_OFS) & TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_CC2U_SEL_0_MASK)
                                      +((suppress_coc_event_gen_0<<TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_0_OFS) & TIMER_TIMG_NUM_INPUT2_CC0_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_0_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t is_capture_1, uint32_t cc2d_sel_1, uint32_t cc2u_sel_1, uint32_t suppress_coc_event_gen_1) {
    registers->CC1_CMN_CTRL.packed_w = ((is_capture_1<<TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_IS_CAPTURE_1_OFS) & TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_IS_CAPTURE_1_MASK)
                                      +((cc2d_sel_1<<TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_CC2D_SEL_1_OFS) & TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_CC2D_SEL_1_MASK)
                                      +((cc2u_sel_1<<TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_CC2U_SEL_1_OFS) & TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_CC2U_SEL_1_MASK)
                                      +((suppress_coc_event_gen_1<<TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_1_OFS) & TIMER_TIMG_NUM_INPUT2_CC1_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_1_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_CC0_COMPARE_CTRL_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t comp_val_0, uint32_t comp_val_update_method_0, uint32_t ccact_update_method_0) {
    registers->CC0_COMPARE_CTRL.packed_w = ((comp_val_0<<TIMER_TIMG_NUM_INPUT2_CC0_COMPARE_CTRL_COMP_VAL_0_OFS) & TIMER_TIMG_NUM_INPUT2_CC0_COMPARE_CTRL_COMP_VAL_0_MASK)
                                          +((comp_val_update_method_0<<TIMER_TIMG_NUM_INPUT2_CC0_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_0_OFS) & TIMER_TIMG_NUM_INPUT2_CC0_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_0_MASK)
                                          +((ccact_update_method_0<<TIMER_TIMG_NUM_INPUT2_CC0_COMPARE_CTRL_CCACT_UPDATE_METHOD_0_OFS) & TIMER_TIMG_NUM_INPUT2_CC0_COMPARE_CTRL_CCACT_UPDATE_METHOD_0_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_CC1_COMPARE_CTRL_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t comp_val_1, uint32_t comp_val_update_method_1, uint32_t ccact_update_method_1) {
    registers->CC1_COMPARE_CTRL.packed_w = ((comp_val_1<<TIMER_TIMG_NUM_INPUT2_CC1_COMPARE_CTRL_COMP_VAL_1_OFS) & TIMER_TIMG_NUM_INPUT2_CC1_COMPARE_CTRL_COMP_VAL_1_MASK)
                                          +((comp_val_update_method_1<<TIMER_TIMG_NUM_INPUT2_CC1_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_1_OFS) & TIMER_TIMG_NUM_INPUT2_CC1_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_1_MASK)
                                          +((ccact_update_method_1<<TIMER_TIMG_NUM_INPUT2_CC1_COMPARE_CTRL_CCACT_UPDATE_METHOD_1_OFS) & TIMER_TIMG_NUM_INPUT2_CC1_COMPARE_CTRL_CCACT_UPDATE_METHOD_1_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t cc_out_cc2d_0, uint32_t cc_out_cc2u_0, uint32_t cc_out_ccd_0, uint32_t cc_out_ccu_0, uint32_t cc_out_load_0, uint32_t cc_out_zero_0) {
    registers->CC0_CC_PWM_CFG.packed_w = ((cc_out_cc2d_0<<TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_CC2D_0_OFS) & TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_CC2D_0_MASK)
                                        +((cc_out_cc2u_0<<TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_CC2U_0_OFS) & TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_CC2U_0_MASK)
                                        +((cc_out_ccd_0<<TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_CCD_0_OFS) & TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_CCD_0_MASK)
                                        +((cc_out_ccu_0<<TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_CCU_0_OFS) & TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_CCU_0_MASK)
                                        +((cc_out_load_0<<TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_LOAD_0_OFS) & TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_LOAD_0_MASK)
                                        +((cc_out_zero_0<<TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_ZERO_0_OFS) & TIMER_TIMG_NUM_INPUT2_CC0_CC_PWM_CFG_CC_OUT_ZERO_0_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t cc_out_cc2d_1, uint32_t cc_out_cc2u_1, uint32_t cc_out_ccd_1, uint32_t cc_out_ccu_1, uint32_t cc_out_load_1, uint32_t cc_out_zero_1) {
    registers->CC1_CC_PWM_CFG.packed_w = ((cc_out_cc2d_1<<TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_CC2D_1_OFS) & TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_CC2D_1_MASK)
                                        +((cc_out_cc2u_1<<TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_CC2U_1_OFS) & TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_CC2U_1_MASK)
                                        +((cc_out_ccd_1<<TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_CCD_1_OFS) & TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_CCD_1_MASK)
                                        +((cc_out_ccu_1<<TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_CCU_1_OFS) & TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_CCU_1_MASK)
                                        +((cc_out_load_1<<TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_LOAD_1_OFS) & TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_LOAD_1_MASK)
                                        +((cc_out_zero_1<<TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_ZERO_1_OFS) & TIMER_TIMG_NUM_INPUT2_CC1_CC_PWM_CFG_CC_OUT_ZERO_1_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_CC0_OUTPUT_CTL_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t cc_out_sel_0, uint32_t cc_out_inv_0, uint32_t cc_out_val_init_0) {
    registers->CC0_OUTPUT_CTL.packed_w = ((cc_out_sel_0<<TIMER_TIMG_NUM_INPUT2_CC0_OUTPUT_CTL_CC_OUT_SEL_0_OFS) & TIMER_TIMG_NUM_INPUT2_CC0_OUTPUT_CTL_CC_OUT_SEL_0_MASK)
                                        +((cc_out_inv_0<<TIMER_TIMG_NUM_INPUT2_CC0_OUTPUT_CTL_CC_OUT_INV_0_OFS) & TIMER_TIMG_NUM_INPUT2_CC0_OUTPUT_CTL_CC_OUT_INV_0_MASK)
                                        +((cc_out_val_init_0<<TIMER_TIMG_NUM_INPUT2_CC0_OUTPUT_CTL_CC_OUT_VAL_INIT_0_OFS) & TIMER_TIMG_NUM_INPUT2_CC0_OUTPUT_CTL_CC_OUT_VAL_INIT_0_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_CC1_OUTPUT_CTL_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t cc_out_sel_1, uint32_t cc_out_inv_1, uint32_t cc_out_val_init_1) {
    registers->CC1_OUTPUT_CTL.packed_w = ((cc_out_sel_1<<TIMER_TIMG_NUM_INPUT2_CC1_OUTPUT_CTL_CC_OUT_SEL_1_OFS) & TIMER_TIMG_NUM_INPUT2_CC1_OUTPUT_CTL_CC_OUT_SEL_1_MASK)
                                        +((cc_out_inv_1<<TIMER_TIMG_NUM_INPUT2_CC1_OUTPUT_CTL_CC_OUT_INV_1_OFS) & TIMER_TIMG_NUM_INPUT2_CC1_OUTPUT_CTL_CC_OUT_INV_1_MASK)
                                        +((cc_out_val_init_1<<TIMER_TIMG_NUM_INPUT2_CC1_OUTPUT_CTL_CC_OUT_VAL_INIT_1_OFS) & TIMER_TIMG_NUM_INPUT2_CC1_OUTPUT_CTL_CC_OUT_VAL_INIT_1_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_CC0_SW_FORCE_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t cc_out_sw_force_0) {
    registers->CC0_SW_FORCE.packed_w = ((cc_out_sw_force_0<<TIMER_TIMG_NUM_INPUT2_CC0_SW_FORCE_CC_OUT_SW_FORCE_0_OFS) & TIMER_TIMG_NUM_INPUT2_CC0_SW_FORCE_CC_OUT_SW_FORCE_0_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_CC1_SW_FORCE_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t cc_out_sw_force_1) {
    registers->CC1_SW_FORCE.packed_w = ((cc_out_sw_force_1<<TIMER_TIMG_NUM_INPUT2_CC1_SW_FORCE_CC_OUT_SW_FORCE_1_OFS) & TIMER_TIMG_NUM_INPUT2_CC1_SW_FORCE_CC_OUT_SW_FORCE_1_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_CTR_CTL_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t ctr_en, uint32_t repeat_mode, uint32_t count_mode, uint32_t ctr_zero_ctrl, uint32_t ctr_load_ctrl, uint32_t ctr_adv_ctrl, uint32_t suppress_ctr_event_gen) {
    registers->CTR_CTL.packed_w = ((ctr_en<<TIMER_TIMG_NUM_INPUT2_CTR_CTL_CTR_EN_OFS) & TIMER_TIMG_NUM_INPUT2_CTR_CTL_CTR_EN_MASK)
                                 +((repeat_mode<<TIMER_TIMG_NUM_INPUT2_CTR_CTL_REPEAT_MODE_OFS) & TIMER_TIMG_NUM_INPUT2_CTR_CTL_REPEAT_MODE_MASK)
                                 +((count_mode<<TIMER_TIMG_NUM_INPUT2_CTR_CTL_COUNT_MODE_OFS) & TIMER_TIMG_NUM_INPUT2_CTR_CTL_COUNT_MODE_MASK)
                                 +((ctr_zero_ctrl<<TIMER_TIMG_NUM_INPUT2_CTR_CTL_CTR_ZERO_CTRL_OFS) & TIMER_TIMG_NUM_INPUT2_CTR_CTL_CTR_ZERO_CTRL_MASK)
                                 +((ctr_load_ctrl<<TIMER_TIMG_NUM_INPUT2_CTR_CTL_CTR_LOAD_CTRL_OFS) & TIMER_TIMG_NUM_INPUT2_CTR_CTL_CTR_LOAD_CTRL_MASK)
                                 +((ctr_adv_ctrl<<TIMER_TIMG_NUM_INPUT2_CTR_CTL_CTR_ADV_CTRL_OFS) & TIMER_TIMG_NUM_INPUT2_CTR_CTL_CTR_ADV_CTRL_MASK)
                                 +((suppress_ctr_event_gen<<TIMER_TIMG_NUM_INPUT2_CTR_CTL_SUPPRESS_CTR_EVENT_GEN_OFS) & TIMER_TIMG_NUM_INPUT2_CTR_CTL_SUPPRESS_CTR_EVENT_GEN_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_CTR_LOAD_VAL_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t ctr_load_val) {
    registers->CTR_LOAD_VAL.packed_w = ((ctr_load_val<<TIMER_TIMG_NUM_INPUT2_CTR_LOAD_VAL_CTR_LOAD_VAL_OFS) & TIMER_TIMG_NUM_INPUT2_CTR_LOAD_VAL_CTR_LOAD_VAL_MASK);
}

static inline void TIMER_TIMG_NUM_INPUT2_DEBUG_CTRL_WRITE(TIMER_TIMG_NUM_INPUT2_REGS_s * registers, uint32_t run_in_halt_mode) {
    registers->DEBUG_CTRL.packed_w = ((run_in_halt_mode<<TIMER_TIMG_NUM_INPUT2_DEBUG_CTRL_RUN_IN_HALT_MODE_OFS) & TIMER_TIMG_NUM_INPUT2_DEBUG_CTRL_RUN_IN_HALT_MODE_MASK);
}


#endif
