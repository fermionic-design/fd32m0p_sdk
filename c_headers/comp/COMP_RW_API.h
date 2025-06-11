#ifndef COMP_RW_API_H
#define COMP_RW_API_H

#include "COMP_REGS.h"

static inline void COMP_PWR_EN_WRITE(COMP_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w = ((pwr_en<<COMP_PWR_EN_PWR_EN_OFS) & COMP_PWR_EN_PWR_EN_MASK)
                                +((pwr_en_key<<COMP_PWR_EN_PWR_EN_KEY_OFS) & COMP_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void COMP_RST_CTRL_WRITE(COMP_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w = ((rst<<COMP_RST_CTRL_RST_OFS) & COMP_RST_CTRL_RST_MASK)
                                  +((rst_sts_clr<<COMP_RST_CTRL_RST_STS_CLR_OFS) & COMP_RST_CTRL_RST_STS_CLR_MASK)
                                  +((rst_key<<COMP_RST_CTRL_RST_KEY_OFS) & COMP_RST_CTRL_RST_KEY_MASK);
}

static inline void COMP_CLK_CTRL_WRITE(COMP_REGS_s * registers, uint32_t en_async_clk_req) {
    registers->CLK_CTRL.packed_w = ((en_async_clk_req<<COMP_CLK_CTRL_EN_ASYNC_CLK_REQ_OFS) & COMP_CLK_CTRL_EN_ASYNC_CLK_REQ_MASK);
}

static inline void COMP_INTR_EVENT_CLEAR(COMP_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_EVENT.packed_w = 1<<intr_idx;
}

static inline void COMP_INTR_EVENT_EN(COMP_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_EN.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
}

static inline void COMP_INTR_EVENT_DIS(COMP_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_EN.packed_w = (1<<(intr_idx+16));
}

static inline void COMP_INTR_EVENT_NMI_EN(COMP_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_NMI_EN.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
}

static inline void COMP_INTR_EVENT_NMI_DIS(COMP_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_NMI_EN.packed_w = (1<<(intr_idx+16));
}

static inline void COMP_GENERIC_EVENT_EN(COMP_REGS_s * registers, uint32_t intr_idx){
    registers->EVENT_EN.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
}

static inline void COMP_GENERIC_EVENT_DIS(COMP_REGS_s * registers, uint32_t intr_idx){
    registers->EVENT_EN.packed_w = (1<<(intr_idx+16));
}

static inline void COMP_INTR_SW_SET(COMP_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_SW_SET.packed_w = 1<<intr_idx;
}

static inline void COMP_CTRL0_WRITE(COMP_REGS_s * registers, uint32_t enable, uint32_t speed, uint32_t hyst, uint32_t intr_edge_sel) {
    registers->CTRL0.packed_w = ((enable<<COMP_CTRL0_ENABLE_OFS) & COMP_CTRL0_ENABLE_MASK)
                               +((speed<<COMP_CTRL0_SPEED_OFS) & COMP_CTRL0_SPEED_MASK)
                               +((hyst<<COMP_CTRL0_HYST_OFS) & COMP_CTRL0_HYST_MASK)
                               +((intr_edge_sel<<COMP_CTRL0_INTR_EDGE_SEL_OFS) & COMP_CTRL0_INTR_EDGE_SEL_MASK);
}

static inline void COMP_INPUT_CTRL0_WRITE(COMP_REGS_s * registers, uint32_t in_p_en, uint32_t in_p_sel, uint32_t in_m_en, uint32_t in_m_sel) {
    registers->INPUT_CTRL0.packed_w = ((in_p_en<<COMP_INPUT_CTRL0_IN_P_EN_OFS) & COMP_INPUT_CTRL0_IN_P_EN_MASK)
                                     +((in_p_sel<<COMP_INPUT_CTRL0_IN_P_SEL_OFS) & COMP_INPUT_CTRL0_IN_P_SEL_MASK)
                                     +((in_m_en<<COMP_INPUT_CTRL0_IN_M_EN_OFS) & COMP_INPUT_CTRL0_IN_M_EN_MASK)
                                     +((in_m_sel<<COMP_INPUT_CTRL0_IN_M_SEL_OFS) & COMP_INPUT_CTRL0_IN_M_SEL_MASK);
}

static inline void COMP_INPUT_CTRL1_WRITE(COMP_REGS_s * registers, uint32_t in_short, uint32_t in_swap) {
    registers->INPUT_CTRL1.packed_w = ((in_short<<COMP_INPUT_CTRL1_IN_SHORT_OFS) & COMP_INPUT_CTRL1_IN_SHORT_MASK)
                                     +((in_swap<<COMP_INPUT_CTRL1_IN_SWAP_OFS) & COMP_INPUT_CTRL1_IN_SWAP_MASK);
}

static inline void COMP_OUT_CTRL0_WRITE(COMP_REGS_s * registers, uint32_t out_pol, uint32_t samp_en, uint32_t filt_en, uint32_t filt_delay) {
    registers->OUT_CTRL0.packed_w = ((out_pol<<COMP_OUT_CTRL0_OUT_POL_OFS) & COMP_OUT_CTRL0_OUT_POL_MASK)
                                   +((samp_en<<COMP_OUT_CTRL0_SAMP_EN_OFS) & COMP_OUT_CTRL0_SAMP_EN_MASK)
                                   +((filt_en<<COMP_OUT_CTRL0_FILT_EN_OFS) & COMP_OUT_CTRL0_FILT_EN_MASK)
                                   +((filt_delay<<COMP_OUT_CTRL0_FILT_DELAY_OFS) & COMP_OUT_CTRL0_FILT_DELAY_MASK);
}

static inline void COMP_OUT_CTRL1_WRITE(COMP_REGS_s * registers, uint32_t win_comp_en, uint32_t win_comp_sel, uint32_t blank_en, uint32_t blank_src) {
    registers->OUT_CTRL1.packed_w = ((win_comp_en<<COMP_OUT_CTRL1_WIN_COMP_EN_OFS) & COMP_OUT_CTRL1_WIN_COMP_EN_MASK)
                                   +((win_comp_sel<<COMP_OUT_CTRL1_WIN_COMP_SEL_OFS) & COMP_OUT_CTRL1_WIN_COMP_SEL_MASK)
                                   +((blank_en<<COMP_OUT_CTRL1_BLANK_EN_OFS) & COMP_OUT_CTRL1_BLANK_EN_MASK)
                                   +((blank_src<<COMP_OUT_CTRL1_BLANK_SRC_OFS) & COMP_OUT_CTRL1_BLANK_SRC_MASK);
}

static inline void COMP_REF_CTRL0_WRITE(COMP_REGS_s * registers, uint32_t ref_sel, uint32_t ref_src, uint32_t ref_mode) {
    registers->REF_CTRL0.packed_w = ((ref_sel<<COMP_REF_CTRL0_REF_SEL_OFS) & COMP_REF_CTRL0_REF_SEL_MASK)
                                   +((ref_src<<COMP_REF_CTRL0_REF_SRC_OFS) & COMP_REF_CTRL0_REF_SRC_MASK)
                                   +((ref_mode<<COMP_REF_CTRL0_REF_MODE_OFS) & COMP_REF_CTRL0_REF_MODE_MASK);
}

static inline void COMP_REF_CTRL1_WRITE(COMP_REGS_s * registers, uint32_t dac_code0, uint32_t dac_code1, uint32_t dac_mode, uint32_t dac_code_sel) {
    registers->REF_CTRL1.packed_w = ((dac_code0<<COMP_REF_CTRL1_DAC_CODE0_OFS) & COMP_REF_CTRL1_DAC_CODE0_MASK)
                                   +((dac_code1<<COMP_REF_CTRL1_DAC_CODE1_OFS) & COMP_REF_CTRL1_DAC_CODE1_MASK)
                                   +((dac_mode<<COMP_REF_CTRL1_DAC_MODE_OFS) & COMP_REF_CTRL1_DAC_MODE_MASK)
                                   +((dac_code_sel<<COMP_REF_CTRL1_DAC_CODE_SEL_OFS) & COMP_REF_CTRL1_DAC_CODE_SEL_MASK);
}

static inline void COMP_SPARE_CTRL_WRITE(COMP_REGS_s * registers, uint32_t cfg0, uint32_t cfg1) {
    registers->SPARE_CTRL.packed_w = ((cfg0<<COMP_SPARE_CTRL_CFG0_OFS) & COMP_SPARE_CTRL_CFG0_MASK)
                                    +((cfg1<<COMP_SPARE_CTRL_CFG1_OFS) & COMP_SPARE_CTRL_CFG1_MASK);
}


#endif
