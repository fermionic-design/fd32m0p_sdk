#ifndef TIMER_RW_API_H
#define TIMER_RW_API_H

#include "TIMER_REGS.h"

static inline void TIMER_PWR_EN_WRITE(TIMER_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w = ((pwr_en<<TIMER_PWR_EN_PWR_EN_OFS) & TIMER_PWR_EN_PWR_EN_MASK)
                                +((pwr_en_key<<TIMER_PWR_EN_PWR_EN_KEY_OFS) & TIMER_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void TIMER_RST_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w = ((rst<<TIMER_RST_CTRL_RST_OFS) & TIMER_RST_CTRL_RST_MASK)
                                  +((rst_sts_clr<<TIMER_RST_CTRL_RST_STS_CLR_OFS) & TIMER_RST_CTRL_RST_STS_CLR_MASK)
                                  +((rst_key<<TIMER_RST_CTRL_RST_KEY_OFS) & TIMER_RST_CTRL_RST_KEY_MASK);
}

static inline void TIMER_CLK_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t clk_en) {
    registers->CLK_CTRL.packed_w = ((clk_en<<TIMER_CLK_CTRL_CLK_EN_OFS) & TIMER_CLK_CTRL_CLK_EN_MASK);
}

static inline void TIMER_INTR_EVENT_CLEAR(TIMER_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_EVENT.packed_w = 1<<intr_idx;
}

static inline void TIMER_INTR_EVENT_EN(TIMER_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_EN_0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_EN_1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void TIMER_INTR_EVENT_DIS(TIMER_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_EN_0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_EN_1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void TIMER_INTR_EVENT_NMI_EN(TIMER_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_NMI_EN_0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_NMI_EN_1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void TIMER_INTR_EVENT_NMI_DIS(TIMER_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_NMI_EN_0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_NMI_EN_1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void TIMER_GENERIC_EVENT_EN_0_(TIMER_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->EVENT_EN_0_0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->EVENT_EN_0_1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void TIMER_GENERIC_EVENT_DIS_0_(TIMER_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->EVENT_EN_0_0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->EVENT_EN_0_1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void TIMER_GENERIC_EVENT_EN_1_(TIMER_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->EVENT_EN_1_0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->EVENT_EN_1_1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void TIMER_GENERIC_EVENT_DIS_1_(TIMER_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->EVENT_EN_1_0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->EVENT_EN_1_1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void TIMER_INTR_SW_SET(TIMER_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_SW_SET.packed_w = 1<<intr_idx;
}

static inline void TIMER_EVENT_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t chan_id0, uint32_t chan_id1) {
    registers->EVENT_CTRL.packed_w = ((chan_id0<<TIMER_EVENT_CTRL_CHAN_ID0_OFS) & TIMER_EVENT_CTRL_CHAN_ID0_MASK)
                                    +((chan_id1<<TIMER_EVENT_CTRL_CHAN_ID1_OFS) & TIMER_EVENT_CTRL_CHAN_ID1_MASK);
}

static inline void TIMER_CLK_CONFIG_WRITE(TIMER_REGS_s * registers, uint32_t clk_sel, uint32_t clk_div) {
    registers->CLK_CONFIG.packed_w = ((clk_sel<<TIMER_CLK_CONFIG_CLK_SEL_OFS) & TIMER_CLK_CONFIG_CLK_SEL_MASK)
                                    +((clk_div<<TIMER_CLK_CONFIG_CLK_DIV_OFS) & TIMER_CLK_CONFIG_CLK_DIV_MASK);
}

static inline void TIMER_TRIG_IN_WRITE(TIMER_REGS_s * registers, uint32_t trig_en, uint32_t trig_sel) {
    registers->TRIG_IN.packed_w = ((trig_en<<TIMER_TRIG_IN_TRIG_EN_OFS) & TIMER_TRIG_IN_TRIG_EN_MASK)
                                 +((trig_sel<<TIMER_TRIG_IN_TRIG_SEL_OFS) & TIMER_TRIG_IN_TRIG_SEL_MASK);
}

static inline void TIMER_TRIG_OUT_WRITE(TIMER_REGS_s * registers, uint32_t trig_out_en, uint32_t trig_sw_en, uint32_t trig_hw_en, uint32_t trig_hw_sel) {
    registers->TRIG_OUT.packed_w = ((trig_out_en<<TIMER_TRIG_OUT_TRIG_OUT_EN_OFS) & TIMER_TRIG_OUT_TRIG_OUT_EN_MASK)
                                  +((trig_sw_en<<TIMER_TRIG_OUT_TRIG_SW_EN_OFS) & TIMER_TRIG_OUT_TRIG_SW_EN_MASK)
                                  +((trig_hw_en<<TIMER_TRIG_OUT_TRIG_HW_EN_OFS) & TIMER_TRIG_OUT_TRIG_HW_EN_MASK)
                                  +((trig_hw_sel<<TIMER_TRIG_OUT_TRIG_HW_SEL_OFS) & TIMER_TRIG_OUT_TRIG_HW_SEL_MASK);
}

static inline void TIMER_INPUT_FILTER_CC_0_WRITE(TIMER_REGS_s * registers, uint32_t filter_en_0, uint32_t is_consecutive_prd_0, uint32_t filter_period_0) {
    registers->INPUT_FILTER_CC_0.packed_w = ((filter_en_0<<TIMER_INPUT_FILTER_CC_0_FILTER_EN_0_OFS) & TIMER_INPUT_FILTER_CC_0_FILTER_EN_0_MASK)
                                           +((is_consecutive_prd_0<<TIMER_INPUT_FILTER_CC_0_IS_CONSECUTIVE_PRD_0_OFS) & TIMER_INPUT_FILTER_CC_0_IS_CONSECUTIVE_PRD_0_MASK)
                                           +((filter_period_0<<TIMER_INPUT_FILTER_CC_0_FILTER_PERIOD_0_OFS) & TIMER_INPUT_FILTER_CC_0_FILTER_PERIOD_0_MASK);
}

static inline void TIMER_INPUT_FILTER_CC_1_WRITE(TIMER_REGS_s * registers, uint32_t filter_en_1, uint32_t is_consecutive_prd_1, uint32_t filter_period_1) {
    registers->INPUT_FILTER_CC_1.packed_w = ((filter_en_1<<TIMER_INPUT_FILTER_CC_1_FILTER_EN_1_OFS) & TIMER_INPUT_FILTER_CC_1_FILTER_EN_1_MASK)
                                           +((is_consecutive_prd_1<<TIMER_INPUT_FILTER_CC_1_IS_CONSECUTIVE_PRD_1_OFS) & TIMER_INPUT_FILTER_CC_1_IS_CONSECUTIVE_PRD_1_MASK)
                                           +((filter_period_1<<TIMER_INPUT_FILTER_CC_1_FILTER_PERIOD_1_OFS) & TIMER_INPUT_FILTER_CC_1_FILTER_PERIOD_1_MASK);
}

static inline void TIMER_INPUT_FILTER_CC_2_WRITE(TIMER_REGS_s * registers, uint32_t filter_en_2, uint32_t is_consecutive_prd_2, uint32_t filter_period_2) {
    registers->INPUT_FILTER_CC_2.packed_w = ((filter_en_2<<TIMER_INPUT_FILTER_CC_2_FILTER_EN_2_OFS) & TIMER_INPUT_FILTER_CC_2_FILTER_EN_2_MASK)
                                           +((is_consecutive_prd_2<<TIMER_INPUT_FILTER_CC_2_IS_CONSECUTIVE_PRD_2_OFS) & TIMER_INPUT_FILTER_CC_2_IS_CONSECUTIVE_PRD_2_MASK)
                                           +((filter_period_2<<TIMER_INPUT_FILTER_CC_2_FILTER_PERIOD_2_OFS) & TIMER_INPUT_FILTER_CC_2_FILTER_PERIOD_2_MASK);
}

static inline void TIMER_INPUT_FILTER_CC_3_WRITE(TIMER_REGS_s * registers, uint32_t filter_en_3, uint32_t is_consecutive_prd_3, uint32_t filter_period_3) {
    registers->INPUT_FILTER_CC_3.packed_w = ((filter_en_3<<TIMER_INPUT_FILTER_CC_3_FILTER_EN_3_OFS) & TIMER_INPUT_FILTER_CC_3_FILTER_EN_3_MASK)
                                           +((is_consecutive_prd_3<<TIMER_INPUT_FILTER_CC_3_IS_CONSECUTIVE_PRD_3_OFS) & TIMER_INPUT_FILTER_CC_3_IS_CONSECUTIVE_PRD_3_MASK)
                                           +((filter_period_3<<TIMER_INPUT_FILTER_CC_3_FILTER_PERIOD_3_OFS) & TIMER_INPUT_FILTER_CC_3_FILTER_PERIOD_3_MASK);
}

static inline void TIMER_INPUT_CC_0_WRITE(TIMER_REGS_s * registers, uint32_t input_sel_0, uint32_t input_inv_0) {
    registers->INPUT_CC_0.packed_w = ((input_sel_0<<TIMER_INPUT_CC_0_INPUT_SEL_0_OFS) & TIMER_INPUT_CC_0_INPUT_SEL_0_MASK)
                                    +((input_inv_0<<TIMER_INPUT_CC_0_INPUT_INV_0_OFS) & TIMER_INPUT_CC_0_INPUT_INV_0_MASK);
}

static inline void TIMER_INPUT_CC_1_WRITE(TIMER_REGS_s * registers, uint32_t input_sel_1, uint32_t input_inv_1) {
    registers->INPUT_CC_1.packed_w = ((input_sel_1<<TIMER_INPUT_CC_1_INPUT_SEL_1_OFS) & TIMER_INPUT_CC_1_INPUT_SEL_1_MASK)
                                    +((input_inv_1<<TIMER_INPUT_CC_1_INPUT_INV_1_OFS) & TIMER_INPUT_CC_1_INPUT_INV_1_MASK);
}

static inline void TIMER_INPUT_CC_2_WRITE(TIMER_REGS_s * registers, uint32_t input_sel_2, uint32_t input_inv_2) {
    registers->INPUT_CC_2.packed_w = ((input_sel_2<<TIMER_INPUT_CC_2_INPUT_SEL_2_OFS) & TIMER_INPUT_CC_2_INPUT_SEL_2_MASK)
                                    +((input_inv_2<<TIMER_INPUT_CC_2_INPUT_INV_2_OFS) & TIMER_INPUT_CC_2_INPUT_INV_2_MASK);
}

static inline void TIMER_INPUT_CC_3_WRITE(TIMER_REGS_s * registers, uint32_t input_sel_3, uint32_t input_inv_3) {
    registers->INPUT_CC_3.packed_w = ((input_sel_3<<TIMER_INPUT_CC_3_INPUT_SEL_3_OFS) & TIMER_INPUT_CC_3_INPUT_SEL_3_MASK)
                                    +((input_inv_3<<TIMER_INPUT_CC_3_INPUT_INV_3_OFS) & TIMER_INPUT_CC_3_INPUT_INV_3_MASK);
}

static inline void TIMER_CC0_CMN_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t is_capture_0, uint32_t cc2d_sel_0, uint32_t cc2u_sel_0, uint32_t suppress_coc_event_gen_0) {
    registers->CC0_CMN_CTRL.packed_w = ((is_capture_0<<TIMER_CC0_CMN_CTRL_IS_CAPTURE_0_OFS) & TIMER_CC0_CMN_CTRL_IS_CAPTURE_0_MASK)
                                      +((cc2d_sel_0<<TIMER_CC0_CMN_CTRL_CC2D_SEL_0_OFS) & TIMER_CC0_CMN_CTRL_CC2D_SEL_0_MASK)
                                      +((cc2u_sel_0<<TIMER_CC0_CMN_CTRL_CC2U_SEL_0_OFS) & TIMER_CC0_CMN_CTRL_CC2U_SEL_0_MASK)
                                      +((suppress_coc_event_gen_0<<TIMER_CC0_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_0_OFS) & TIMER_CC0_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_0_MASK);
}

static inline void TIMER_CC1_CMN_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t is_capture_1, uint32_t cc2d_sel_1, uint32_t cc2u_sel_1, uint32_t suppress_coc_event_gen_1) {
    registers->CC1_CMN_CTRL.packed_w = ((is_capture_1<<TIMER_CC1_CMN_CTRL_IS_CAPTURE_1_OFS) & TIMER_CC1_CMN_CTRL_IS_CAPTURE_1_MASK)
                                      +((cc2d_sel_1<<TIMER_CC1_CMN_CTRL_CC2D_SEL_1_OFS) & TIMER_CC1_CMN_CTRL_CC2D_SEL_1_MASK)
                                      +((cc2u_sel_1<<TIMER_CC1_CMN_CTRL_CC2U_SEL_1_OFS) & TIMER_CC1_CMN_CTRL_CC2U_SEL_1_MASK)
                                      +((suppress_coc_event_gen_1<<TIMER_CC1_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_1_OFS) & TIMER_CC1_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_1_MASK);
}

static inline void TIMER_CC0_COMPARE_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t comp_val_0, uint32_t comp_val_update_method_0, uint32_t ccact_update_method_0) {
    registers->CC0_COMPARE_CTRL.packed_w = ((comp_val_0<<TIMER_CC0_COMPARE_CTRL_COMP_VAL_0_OFS) & TIMER_CC0_COMPARE_CTRL_COMP_VAL_0_MASK)
                                          +((comp_val_update_method_0<<TIMER_CC0_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_0_OFS) & TIMER_CC0_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_0_MASK)
                                          +((ccact_update_method_0<<TIMER_CC0_COMPARE_CTRL_CCACT_UPDATE_METHOD_0_OFS) & TIMER_CC0_COMPARE_CTRL_CCACT_UPDATE_METHOD_0_MASK);
}

static inline void TIMER_CC1_COMPARE_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t comp_val_1, uint32_t comp_val_update_method_1, uint32_t ccact_update_method_1) {
    registers->CC1_COMPARE_CTRL.packed_w = ((comp_val_1<<TIMER_CC1_COMPARE_CTRL_COMP_VAL_1_OFS) & TIMER_CC1_COMPARE_CTRL_COMP_VAL_1_MASK)
                                          +((comp_val_update_method_1<<TIMER_CC1_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_1_OFS) & TIMER_CC1_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_1_MASK)
                                          +((ccact_update_method_1<<TIMER_CC1_COMPARE_CTRL_CCACT_UPDATE_METHOD_1_OFS) & TIMER_CC1_COMPARE_CTRL_CCACT_UPDATE_METHOD_1_MASK);
}

static inline void TIMER_CC2_CMN_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t is_capture_2, uint32_t cc2d_sel_2, uint32_t cc2u_sel_2, uint32_t suppress_coc_event_gen_2) {
    registers->CC2_CMN_CTRL.packed_w = ((is_capture_2<<TIMER_CC2_CMN_CTRL_IS_CAPTURE_2_OFS) & TIMER_CC2_CMN_CTRL_IS_CAPTURE_2_MASK)
                                      +((cc2d_sel_2<<TIMER_CC2_CMN_CTRL_CC2D_SEL_2_OFS) & TIMER_CC2_CMN_CTRL_CC2D_SEL_2_MASK)
                                      +((cc2u_sel_2<<TIMER_CC2_CMN_CTRL_CC2U_SEL_2_OFS) & TIMER_CC2_CMN_CTRL_CC2U_SEL_2_MASK)
                                      +((suppress_coc_event_gen_2<<TIMER_CC2_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_2_OFS) & TIMER_CC2_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_2_MASK);
}

static inline void TIMER_CC3_CMN_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t is_capture_3, uint32_t cc2d_sel_3, uint32_t cc2u_sel_3, uint32_t suppress_coc_event_gen_3) {
    registers->CC3_CMN_CTRL.packed_w = ((is_capture_3<<TIMER_CC3_CMN_CTRL_IS_CAPTURE_3_OFS) & TIMER_CC3_CMN_CTRL_IS_CAPTURE_3_MASK)
                                      +((cc2d_sel_3<<TIMER_CC3_CMN_CTRL_CC2D_SEL_3_OFS) & TIMER_CC3_CMN_CTRL_CC2D_SEL_3_MASK)
                                      +((cc2u_sel_3<<TIMER_CC3_CMN_CTRL_CC2U_SEL_3_OFS) & TIMER_CC3_CMN_CTRL_CC2U_SEL_3_MASK)
                                      +((suppress_coc_event_gen_3<<TIMER_CC3_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_3_OFS) & TIMER_CC3_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_3_MASK);
}

static inline void TIMER_CC2_COMPARE_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t comp_val_2, uint32_t comp_val_update_method_2, uint32_t ccact_update_method_2) {
    registers->CC2_COMPARE_CTRL.packed_w = ((comp_val_2<<TIMER_CC2_COMPARE_CTRL_COMP_VAL_2_OFS) & TIMER_CC2_COMPARE_CTRL_COMP_VAL_2_MASK)
                                          +((comp_val_update_method_2<<TIMER_CC2_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_2_OFS) & TIMER_CC2_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_2_MASK)
                                          +((ccact_update_method_2<<TIMER_CC2_COMPARE_CTRL_CCACT_UPDATE_METHOD_2_OFS) & TIMER_CC2_COMPARE_CTRL_CCACT_UPDATE_METHOD_2_MASK);
}

static inline void TIMER_CC3_COMPARE_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t comp_val_3, uint32_t comp_val_update_method_3, uint32_t ccact_update_method_3) {
    registers->CC3_COMPARE_CTRL.packed_w = ((comp_val_3<<TIMER_CC3_COMPARE_CTRL_COMP_VAL_3_OFS) & TIMER_CC3_COMPARE_CTRL_COMP_VAL_3_MASK)
                                          +((comp_val_update_method_3<<TIMER_CC3_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_3_OFS) & TIMER_CC3_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_3_MASK)
                                          +((ccact_update_method_3<<TIMER_CC3_COMPARE_CTRL_CCACT_UPDATE_METHOD_3_OFS) & TIMER_CC3_COMPARE_CTRL_CCACT_UPDATE_METHOD_3_MASK);
}

static inline void TIMER_CC4_CMN_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t suppress_coc_event_gen_4) {
    registers->CC4_CMN_CTRL.packed_w = ((suppress_coc_event_gen_4<<TIMER_CC4_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_4_OFS) & TIMER_CC4_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_4_MASK);
}

static inline void TIMER_CC5_CMN_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t suppress_coc_event_gen_5) {
    registers->CC5_CMN_CTRL.packed_w = ((suppress_coc_event_gen_5<<TIMER_CC5_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_5_OFS) & TIMER_CC5_CMN_CTRL_SUPPRESS_COC_EVENT_GEN_5_MASK);
}

static inline void TIMER_CC4_COMPARE_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t comp_val_4, uint32_t comp_val_update_method_4) {
    registers->CC4_COMPARE_CTRL.packed_w = ((comp_val_4<<TIMER_CC4_COMPARE_CTRL_COMP_VAL_4_OFS) & TIMER_CC4_COMPARE_CTRL_COMP_VAL_4_MASK)
                                          +((comp_val_update_method_4<<TIMER_CC4_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_4_OFS) & TIMER_CC4_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_4_MASK);
}

static inline void TIMER_CC5_COMPARE_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t comp_val_5, uint32_t comp_val_update_method_5) {
    registers->CC5_COMPARE_CTRL.packed_w = ((comp_val_5<<TIMER_CC5_COMPARE_CTRL_COMP_VAL_5_OFS) & TIMER_CC5_COMPARE_CTRL_COMP_VAL_5_MASK)
                                          +((comp_val_update_method_5<<TIMER_CC5_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_5_OFS) & TIMER_CC5_COMPARE_CTRL_COMP_VAL_UPDATE_METHOD_5_MASK);
}

static inline void TIMER_CC0_CC_PWM_CFG_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_cc2d_0, uint32_t cc_out_cc2u_0, uint32_t cc_out_ccd_0, uint32_t cc_out_ccu_0, uint32_t cc_out_load_0, uint32_t cc_out_zero_0, uint32_t cc_out_fault_entry_0, uint32_t cc_out_fault_exit_0) {
    registers->CC0_CC_PWM_CFG.packed_w = ((cc_out_cc2d_0<<TIMER_CC0_CC_PWM_CFG_CC_OUT_CC2D_0_OFS) & TIMER_CC0_CC_PWM_CFG_CC_OUT_CC2D_0_MASK)
                                        +((cc_out_cc2u_0<<TIMER_CC0_CC_PWM_CFG_CC_OUT_CC2U_0_OFS) & TIMER_CC0_CC_PWM_CFG_CC_OUT_CC2U_0_MASK)
                                        +((cc_out_ccd_0<<TIMER_CC0_CC_PWM_CFG_CC_OUT_CCD_0_OFS) & TIMER_CC0_CC_PWM_CFG_CC_OUT_CCD_0_MASK)
                                        +((cc_out_ccu_0<<TIMER_CC0_CC_PWM_CFG_CC_OUT_CCU_0_OFS) & TIMER_CC0_CC_PWM_CFG_CC_OUT_CCU_0_MASK)
                                        +((cc_out_load_0<<TIMER_CC0_CC_PWM_CFG_CC_OUT_LOAD_0_OFS) & TIMER_CC0_CC_PWM_CFG_CC_OUT_LOAD_0_MASK)
                                        +((cc_out_zero_0<<TIMER_CC0_CC_PWM_CFG_CC_OUT_ZERO_0_OFS) & TIMER_CC0_CC_PWM_CFG_CC_OUT_ZERO_0_MASK)
                                        +((cc_out_fault_entry_0<<TIMER_CC0_CC_PWM_CFG_CC_OUT_FAULT_ENTRY_0_OFS) & TIMER_CC0_CC_PWM_CFG_CC_OUT_FAULT_ENTRY_0_MASK)
                                        +((cc_out_fault_exit_0<<TIMER_CC0_CC_PWM_CFG_CC_OUT_FAULT_EXIT_0_OFS) & TIMER_CC0_CC_PWM_CFG_CC_OUT_FAULT_EXIT_0_MASK);
}

static inline void TIMER_CC1_CC_PWM_CFG_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_cc2d_1, uint32_t cc_out_cc2u_1, uint32_t cc_out_ccd_1, uint32_t cc_out_ccu_1, uint32_t cc_out_load_1, uint32_t cc_out_zero_1, uint32_t cc_out_fault_entry_1, uint32_t cc_out_fault_exit_1) {
    registers->CC1_CC_PWM_CFG.packed_w = ((cc_out_cc2d_1<<TIMER_CC1_CC_PWM_CFG_CC_OUT_CC2D_1_OFS) & TIMER_CC1_CC_PWM_CFG_CC_OUT_CC2D_1_MASK)
                                        +((cc_out_cc2u_1<<TIMER_CC1_CC_PWM_CFG_CC_OUT_CC2U_1_OFS) & TIMER_CC1_CC_PWM_CFG_CC_OUT_CC2U_1_MASK)
                                        +((cc_out_ccd_1<<TIMER_CC1_CC_PWM_CFG_CC_OUT_CCD_1_OFS) & TIMER_CC1_CC_PWM_CFG_CC_OUT_CCD_1_MASK)
                                        +((cc_out_ccu_1<<TIMER_CC1_CC_PWM_CFG_CC_OUT_CCU_1_OFS) & TIMER_CC1_CC_PWM_CFG_CC_OUT_CCU_1_MASK)
                                        +((cc_out_load_1<<TIMER_CC1_CC_PWM_CFG_CC_OUT_LOAD_1_OFS) & TIMER_CC1_CC_PWM_CFG_CC_OUT_LOAD_1_MASK)
                                        +((cc_out_zero_1<<TIMER_CC1_CC_PWM_CFG_CC_OUT_ZERO_1_OFS) & TIMER_CC1_CC_PWM_CFG_CC_OUT_ZERO_1_MASK)
                                        +((cc_out_fault_entry_1<<TIMER_CC1_CC_PWM_CFG_CC_OUT_FAULT_ENTRY_1_OFS) & TIMER_CC1_CC_PWM_CFG_CC_OUT_FAULT_ENTRY_1_MASK)
                                        +((cc_out_fault_exit_1<<TIMER_CC1_CC_PWM_CFG_CC_OUT_FAULT_EXIT_1_OFS) & TIMER_CC1_CC_PWM_CFG_CC_OUT_FAULT_EXIT_1_MASK);
}

static inline void TIMER_CC2_CC_PWM_CFG_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_cc2d_2, uint32_t cc_out_cc2u_2, uint32_t cc_out_ccd_2, uint32_t cc_out_ccu_2, uint32_t cc_out_load_2, uint32_t cc_out_zero_2, uint32_t cc_out_fault_entry_2, uint32_t cc_out_fault_exit_2) {
    registers->CC2_CC_PWM_CFG.packed_w = ((cc_out_cc2d_2<<TIMER_CC2_CC_PWM_CFG_CC_OUT_CC2D_2_OFS) & TIMER_CC2_CC_PWM_CFG_CC_OUT_CC2D_2_MASK)
                                        +((cc_out_cc2u_2<<TIMER_CC2_CC_PWM_CFG_CC_OUT_CC2U_2_OFS) & TIMER_CC2_CC_PWM_CFG_CC_OUT_CC2U_2_MASK)
                                        +((cc_out_ccd_2<<TIMER_CC2_CC_PWM_CFG_CC_OUT_CCD_2_OFS) & TIMER_CC2_CC_PWM_CFG_CC_OUT_CCD_2_MASK)
                                        +((cc_out_ccu_2<<TIMER_CC2_CC_PWM_CFG_CC_OUT_CCU_2_OFS) & TIMER_CC2_CC_PWM_CFG_CC_OUT_CCU_2_MASK)
                                        +((cc_out_load_2<<TIMER_CC2_CC_PWM_CFG_CC_OUT_LOAD_2_OFS) & TIMER_CC2_CC_PWM_CFG_CC_OUT_LOAD_2_MASK)
                                        +((cc_out_zero_2<<TIMER_CC2_CC_PWM_CFG_CC_OUT_ZERO_2_OFS) & TIMER_CC2_CC_PWM_CFG_CC_OUT_ZERO_2_MASK)
                                        +((cc_out_fault_entry_2<<TIMER_CC2_CC_PWM_CFG_CC_OUT_FAULT_ENTRY_2_OFS) & TIMER_CC2_CC_PWM_CFG_CC_OUT_FAULT_ENTRY_2_MASK)
                                        +((cc_out_fault_exit_2<<TIMER_CC2_CC_PWM_CFG_CC_OUT_FAULT_EXIT_2_OFS) & TIMER_CC2_CC_PWM_CFG_CC_OUT_FAULT_EXIT_2_MASK);
}

static inline void TIMER_CC3_CC_PWM_CFG_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_cc2d_3, uint32_t cc_out_cc2u_3, uint32_t cc_out_ccd_3, uint32_t cc_out_ccu_3, uint32_t cc_out_load_3, uint32_t cc_out_zero_3, uint32_t cc_out_fault_entry_3, uint32_t cc_out_fault_exit_3) {
    registers->CC3_CC_PWM_CFG.packed_w = ((cc_out_cc2d_3<<TIMER_CC3_CC_PWM_CFG_CC_OUT_CC2D_3_OFS) & TIMER_CC3_CC_PWM_CFG_CC_OUT_CC2D_3_MASK)
                                        +((cc_out_cc2u_3<<TIMER_CC3_CC_PWM_CFG_CC_OUT_CC2U_3_OFS) & TIMER_CC3_CC_PWM_CFG_CC_OUT_CC2U_3_MASK)
                                        +((cc_out_ccd_3<<TIMER_CC3_CC_PWM_CFG_CC_OUT_CCD_3_OFS) & TIMER_CC3_CC_PWM_CFG_CC_OUT_CCD_3_MASK)
                                        +((cc_out_ccu_3<<TIMER_CC3_CC_PWM_CFG_CC_OUT_CCU_3_OFS) & TIMER_CC3_CC_PWM_CFG_CC_OUT_CCU_3_MASK)
                                        +((cc_out_load_3<<TIMER_CC3_CC_PWM_CFG_CC_OUT_LOAD_3_OFS) & TIMER_CC3_CC_PWM_CFG_CC_OUT_LOAD_3_MASK)
                                        +((cc_out_zero_3<<TIMER_CC3_CC_PWM_CFG_CC_OUT_ZERO_3_OFS) & TIMER_CC3_CC_PWM_CFG_CC_OUT_ZERO_3_MASK)
                                        +((cc_out_fault_entry_3<<TIMER_CC3_CC_PWM_CFG_CC_OUT_FAULT_ENTRY_3_OFS) & TIMER_CC3_CC_PWM_CFG_CC_OUT_FAULT_ENTRY_3_MASK)
                                        +((cc_out_fault_exit_3<<TIMER_CC3_CC_PWM_CFG_CC_OUT_FAULT_EXIT_3_OFS) & TIMER_CC3_CC_PWM_CFG_CC_OUT_FAULT_EXIT_3_MASK);
}

static inline void TIMER_DEADBAND_CFG_WRITE(TIMER_REGS_s * registers, uint32_t db_mode, uint32_t db_rise_delay, uint32_t db_fall_delay) {
    registers->DEADBAND_CFG.packed_w = ((db_mode<<TIMER_DEADBAND_CFG_DB_MODE_OFS) & TIMER_DEADBAND_CFG_DB_MODE_MASK)
                                      +((db_rise_delay<<TIMER_DEADBAND_CFG_DB_RISE_DELAY_OFS) & TIMER_DEADBAND_CFG_DB_RISE_DELAY_MASK)
                                      +((db_fall_delay<<TIMER_DEADBAND_CFG_DB_FALL_DELAY_OFS) & TIMER_DEADBAND_CFG_DB_FALL_DELAY_MASK);
}

static inline void TIMER_CC0_OUTPUT_CTL_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_sel_0, uint32_t cc_out_inv_0, uint32_t cc_out_val_init_0) {
    registers->CC0_OUTPUT_CTL.packed_w = ((cc_out_sel_0<<TIMER_CC0_OUTPUT_CTL_CC_OUT_SEL_0_OFS) & TIMER_CC0_OUTPUT_CTL_CC_OUT_SEL_0_MASK)
                                        +((cc_out_inv_0<<TIMER_CC0_OUTPUT_CTL_CC_OUT_INV_0_OFS) & TIMER_CC0_OUTPUT_CTL_CC_OUT_INV_0_MASK)
                                        +((cc_out_val_init_0<<TIMER_CC0_OUTPUT_CTL_CC_OUT_VAL_INIT_0_OFS) & TIMER_CC0_OUTPUT_CTL_CC_OUT_VAL_INIT_0_MASK);
}

static inline void TIMER_CC1_OUTPUT_CTL_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_sel_1, uint32_t cc_out_inv_1, uint32_t cc_out_val_init_1) {
    registers->CC1_OUTPUT_CTL.packed_w = ((cc_out_sel_1<<TIMER_CC1_OUTPUT_CTL_CC_OUT_SEL_1_OFS) & TIMER_CC1_OUTPUT_CTL_CC_OUT_SEL_1_MASK)
                                        +((cc_out_inv_1<<TIMER_CC1_OUTPUT_CTL_CC_OUT_INV_1_OFS) & TIMER_CC1_OUTPUT_CTL_CC_OUT_INV_1_MASK)
                                        +((cc_out_val_init_1<<TIMER_CC1_OUTPUT_CTL_CC_OUT_VAL_INIT_1_OFS) & TIMER_CC1_OUTPUT_CTL_CC_OUT_VAL_INIT_1_MASK);
}

static inline void TIMER_CC0_SW_FORCE_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_sw_force_0, uint32_t cc_cmpl_out_sw_force_0) {
    registers->CC0_SW_FORCE.packed_w = ((cc_out_sw_force_0<<TIMER_CC0_SW_FORCE_CC_OUT_SW_FORCE_0_OFS) & TIMER_CC0_SW_FORCE_CC_OUT_SW_FORCE_0_MASK)
                                      +((cc_cmpl_out_sw_force_0<<TIMER_CC0_SW_FORCE_CC_CMPL_OUT_SW_FORCE_0_OFS) & TIMER_CC0_SW_FORCE_CC_CMPL_OUT_SW_FORCE_0_MASK);
}

static inline void TIMER_CC1_SW_FORCE_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_sw_force_1, uint32_t cc_cmpl_out_sw_force_1) {
    registers->CC1_SW_FORCE.packed_w = ((cc_out_sw_force_1<<TIMER_CC1_SW_FORCE_CC_OUT_SW_FORCE_1_OFS) & TIMER_CC1_SW_FORCE_CC_OUT_SW_FORCE_1_MASK)
                                      +((cc_cmpl_out_sw_force_1<<TIMER_CC1_SW_FORCE_CC_CMPL_OUT_SW_FORCE_1_OFS) & TIMER_CC1_SW_FORCE_CC_CMPL_OUT_SW_FORCE_1_MASK);
}

static inline void TIMER_CC2_OUTPUT_CTL_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_sel_2, uint32_t cc_out_inv_2, uint32_t cc_out_val_init_2) {
    registers->CC2_OUTPUT_CTL.packed_w = ((cc_out_sel_2<<TIMER_CC2_OUTPUT_CTL_CC_OUT_SEL_2_OFS) & TIMER_CC2_OUTPUT_CTL_CC_OUT_SEL_2_MASK)
                                        +((cc_out_inv_2<<TIMER_CC2_OUTPUT_CTL_CC_OUT_INV_2_OFS) & TIMER_CC2_OUTPUT_CTL_CC_OUT_INV_2_MASK)
                                        +((cc_out_val_init_2<<TIMER_CC2_OUTPUT_CTL_CC_OUT_VAL_INIT_2_OFS) & TIMER_CC2_OUTPUT_CTL_CC_OUT_VAL_INIT_2_MASK);
}

static inline void TIMER_CC3_OUTPUT_CTL_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_sel_3, uint32_t cc_out_inv_3, uint32_t cc_out_val_init_3) {
    registers->CC3_OUTPUT_CTL.packed_w = ((cc_out_sel_3<<TIMER_CC3_OUTPUT_CTL_CC_OUT_SEL_3_OFS) & TIMER_CC3_OUTPUT_CTL_CC_OUT_SEL_3_MASK)
                                        +((cc_out_inv_3<<TIMER_CC3_OUTPUT_CTL_CC_OUT_INV_3_OFS) & TIMER_CC3_OUTPUT_CTL_CC_OUT_INV_3_MASK)
                                        +((cc_out_val_init_3<<TIMER_CC3_OUTPUT_CTL_CC_OUT_VAL_INIT_3_OFS) & TIMER_CC3_OUTPUT_CTL_CC_OUT_VAL_INIT_3_MASK);
}

static inline void TIMER_CC2_SW_FORCE_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_sw_force_2, uint32_t cc_cmpl_out_sw_force_2) {
    registers->CC2_SW_FORCE.packed_w = ((cc_out_sw_force_2<<TIMER_CC2_SW_FORCE_CC_OUT_SW_FORCE_2_OFS) & TIMER_CC2_SW_FORCE_CC_OUT_SW_FORCE_2_MASK)
                                      +((cc_cmpl_out_sw_force_2<<TIMER_CC2_SW_FORCE_CC_CMPL_OUT_SW_FORCE_2_OFS) & TIMER_CC2_SW_FORCE_CC_CMPL_OUT_SW_FORCE_2_MASK);
}

static inline void TIMER_CC3_SW_FORCE_WRITE(TIMER_REGS_s * registers, uint32_t cc_out_sw_force_3, uint32_t cc_cmpl_out_sw_force_3) {
    registers->CC3_SW_FORCE.packed_w = ((cc_out_sw_force_3<<TIMER_CC3_SW_FORCE_CC_OUT_SW_FORCE_3_OFS) & TIMER_CC3_SW_FORCE_CC_OUT_SW_FORCE_3_MASK)
                                      +((cc_cmpl_out_sw_force_3<<TIMER_CC3_SW_FORCE_CC_CMPL_OUT_SW_FORCE_3_OFS) & TIMER_CC3_SW_FORCE_CC_CMPL_OUT_SW_FORCE_3_MASK);
}

static inline void TIMER_FAULT_IN_CTL_WRITE(TIMER_REGS_s * registers, uint32_t fault_filter_en, uint32_t fault_is_consecutive_period, uint32_t fault_filter_period) {
    registers->FAULT_IN_CTL.packed_w = ((fault_filter_en<<TIMER_FAULT_IN_CTL_FAULT_FILTER_EN_OFS) & TIMER_FAULT_IN_CTL_FAULT_FILTER_EN_MASK)
                                      +((fault_is_consecutive_period<<TIMER_FAULT_IN_CTL_FAULT_IS_CONSECUTIVE_PERIOD_OFS) & TIMER_FAULT_IN_CTL_FAULT_IS_CONSECUTIVE_PERIOD_MASK)
                                      +((fault_filter_period<<TIMER_FAULT_IN_CTL_FAULT_FILTER_PERIOD_OFS) & TIMER_FAULT_IN_CTL_FAULT_FILTER_PERIOD_MASK);
}

static inline void TIMER_FAULT_SRC_CTL_WRITE(TIMER_REGS_s * registers, uint32_t fault_ext2_en, uint32_t fault_ext1_en, uint32_t fault_ext0_en, uint32_t fault_comp2_en, uint32_t fault_comp1_en, uint32_t fault_comp0_en, uint32_t fault_sys_clk_en, uint32_t fault_ext2_act_val, uint32_t fault_ext1_act_val, uint32_t fault_ext0_act_val, uint32_t fault_comp2_act_val, uint32_t fault_comp1_act_val, uint32_t fault_comp0_act_val, uint32_t trig_is_fault, uint32_t fault_in_en, uint32_t fault_dependent_on_input, uint32_t fault_latch_sel) {
    registers->FAULT_SRC_CTL.packed_w = ((fault_ext2_en<<TIMER_FAULT_SRC_CTL_FAULT_EXT2_EN_OFS) & TIMER_FAULT_SRC_CTL_FAULT_EXT2_EN_MASK)
                                       +((fault_ext1_en<<TIMER_FAULT_SRC_CTL_FAULT_EXT1_EN_OFS) & TIMER_FAULT_SRC_CTL_FAULT_EXT1_EN_MASK)
                                       +((fault_ext0_en<<TIMER_FAULT_SRC_CTL_FAULT_EXT0_EN_OFS) & TIMER_FAULT_SRC_CTL_FAULT_EXT0_EN_MASK)
                                       +((fault_comp2_en<<TIMER_FAULT_SRC_CTL_FAULT_COMP2_EN_OFS) & TIMER_FAULT_SRC_CTL_FAULT_COMP2_EN_MASK)
                                       +((fault_comp1_en<<TIMER_FAULT_SRC_CTL_FAULT_COMP1_EN_OFS) & TIMER_FAULT_SRC_CTL_FAULT_COMP1_EN_MASK)
                                       +((fault_comp0_en<<TIMER_FAULT_SRC_CTL_FAULT_COMP0_EN_OFS) & TIMER_FAULT_SRC_CTL_FAULT_COMP0_EN_MASK)
                                       +((fault_sys_clk_en<<TIMER_FAULT_SRC_CTL_FAULT_SYS_CLK_EN_OFS) & TIMER_FAULT_SRC_CTL_FAULT_SYS_CLK_EN_MASK)
                                       +((fault_ext2_act_val<<TIMER_FAULT_SRC_CTL_FAULT_EXT2_ACT_VAL_OFS) & TIMER_FAULT_SRC_CTL_FAULT_EXT2_ACT_VAL_MASK)
                                       +((fault_ext1_act_val<<TIMER_FAULT_SRC_CTL_FAULT_EXT1_ACT_VAL_OFS) & TIMER_FAULT_SRC_CTL_FAULT_EXT1_ACT_VAL_MASK)
                                       +((fault_ext0_act_val<<TIMER_FAULT_SRC_CTL_FAULT_EXT0_ACT_VAL_OFS) & TIMER_FAULT_SRC_CTL_FAULT_EXT0_ACT_VAL_MASK)
                                       +((fault_comp2_act_val<<TIMER_FAULT_SRC_CTL_FAULT_COMP2_ACT_VAL_OFS) & TIMER_FAULT_SRC_CTL_FAULT_COMP2_ACT_VAL_MASK)
                                       +((fault_comp1_act_val<<TIMER_FAULT_SRC_CTL_FAULT_COMP1_ACT_VAL_OFS) & TIMER_FAULT_SRC_CTL_FAULT_COMP1_ACT_VAL_MASK)
                                       +((fault_comp0_act_val<<TIMER_FAULT_SRC_CTL_FAULT_COMP0_ACT_VAL_OFS) & TIMER_FAULT_SRC_CTL_FAULT_COMP0_ACT_VAL_MASK)
                                       +((trig_is_fault<<TIMER_FAULT_SRC_CTL_TRIG_IS_FAULT_OFS) & TIMER_FAULT_SRC_CTL_TRIG_IS_FAULT_MASK)
                                       +((fault_in_en<<TIMER_FAULT_SRC_CTL_FAULT_IN_EN_OFS) & TIMER_FAULT_SRC_CTL_FAULT_IN_EN_MASK)
                                       +((fault_dependent_on_input<<TIMER_FAULT_SRC_CTL_FAULT_DEPENDENT_ON_INPUT_OFS) & TIMER_FAULT_SRC_CTL_FAULT_DEPENDENT_ON_INPUT_MASK)
                                       +((fault_latch_sel<<TIMER_FAULT_SRC_CTL_FAULT_LATCH_SEL_OFS) & TIMER_FAULT_SRC_CTL_FAULT_LATCH_SEL_MASK);
}

static inline void TIMER_CTR_CTL_WRITE(TIMER_REGS_s * registers, uint32_t ctr_en, uint32_t repeat_mode, uint32_t count_mode, uint32_t ctr_zero_ctrl, uint32_t ctr_load_ctrl, uint32_t ctr_adv_ctrl, uint32_t suppress_ctr_event_gen, uint32_t pl_en, uint32_t ctr_during_fault, uint32_t ctr_exit_fault, uint32_t ctr_after_debug) {
    registers->CTR_CTL.packed_w = ((ctr_en<<TIMER_CTR_CTL_CTR_EN_OFS) & TIMER_CTR_CTL_CTR_EN_MASK)
                                 +((repeat_mode<<TIMER_CTR_CTL_REPEAT_MODE_OFS) & TIMER_CTR_CTL_REPEAT_MODE_MASK)
                                 +((count_mode<<TIMER_CTR_CTL_COUNT_MODE_OFS) & TIMER_CTR_CTL_COUNT_MODE_MASK)
                                 +((ctr_zero_ctrl<<TIMER_CTR_CTL_CTR_ZERO_CTRL_OFS) & TIMER_CTR_CTL_CTR_ZERO_CTRL_MASK)
                                 +((ctr_load_ctrl<<TIMER_CTR_CTL_CTR_LOAD_CTRL_OFS) & TIMER_CTR_CTL_CTR_LOAD_CTRL_MASK)
                                 +((ctr_adv_ctrl<<TIMER_CTR_CTL_CTR_ADV_CTRL_OFS) & TIMER_CTR_CTL_CTR_ADV_CTRL_MASK)
                                 +((suppress_ctr_event_gen<<TIMER_CTR_CTL_SUPPRESS_CTR_EVENT_GEN_OFS) & TIMER_CTR_CTL_SUPPRESS_CTR_EVENT_GEN_MASK)
                                 +((pl_en<<TIMER_CTR_CTL_PL_EN_OFS) & TIMER_CTR_CTL_PL_EN_MASK)
                                 +((ctr_during_fault<<TIMER_CTR_CTL_CTR_DURING_FAULT_OFS) & TIMER_CTR_CTL_CTR_DURING_FAULT_MASK)
                                 +((ctr_exit_fault<<TIMER_CTR_CTL_CTR_EXIT_FAULT_OFS) & TIMER_CTR_CTL_CTR_EXIT_FAULT_MASK)
                                 +((ctr_after_debug<<TIMER_CTR_CTL_CTR_AFTER_DEBUG_OFS) & TIMER_CTR_CTL_CTR_AFTER_DEBUG_MASK);
}

static inline void TIMER_CTR_LOAD_VAL_WRITE(TIMER_REGS_s * registers, uint32_t ctr_load_val) {
    registers->CTR_LOAD_VAL.packed_w = ((ctr_load_val<<TIMER_CTR_LOAD_VAL_CTR_LOAD_VAL_OFS) & TIMER_CTR_LOAD_VAL_CTR_LOAD_VAL_MASK);
}

static inline void TIMER_CTR_PL_VAL_WRITE(TIMER_REGS_s * registers, uint32_t pl_val) {
    registers->CTR_PL_VAL.packed_w = ((pl_val<<TIMER_CTR_PL_VAL_PL_VAL_OFS) & TIMER_CTR_PL_VAL_PL_VAL_MASK);
}

static inline void TIMER_DEBUG_CTRL_WRITE(TIMER_REGS_s * registers, uint32_t run_in_halt_mode) {
    registers->DEBUG_CTRL.packed_w = ((run_in_halt_mode<<TIMER_DEBUG_CTRL_RUN_IN_HALT_MODE_OFS) & TIMER_DEBUG_CTRL_RUN_IN_HALT_MODE_MASK);
}

static inline void TIMER_RCTR_LOAD_VAL_WRITE(TIMER_REGS_s * registers, uint32_t rctr_load_val) {
    registers->RCTR_LOAD_VAL.packed_w = ((rctr_load_val<<TIMER_RCTR_LOAD_VAL_RCTR_LOAD_VAL_OFS) & TIMER_RCTR_LOAD_VAL_RCTR_LOAD_VAL_MASK);
}


#endif
