#include "COMP_REGS.h"

static inline void COMP_DESC_WRITE(COMP_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<COMP_DESC_module_type_OFS)&COMP_DESC_module_type_MASK) + ((modue_subtype<<COMP_DESC_modue_subtype_OFS)&COMP_DESC_modue_subtype_MASK) + ((major_rev<<COMP_DESC_major_rev_OFS)&COMP_DESC_major_rev_MASK) + ((minor_rev<<COMP_DESC_minor_rev_OFS)&COMP_DESC_minor_rev_MASK);
}

static inline void COMP_PWR_EN_WRITE(COMP_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<COMP_PWR_EN_pwr_en_OFS)&COMP_PWR_EN_pwr_en_MASK) + ((pwr_en_key<<COMP_PWR_EN_pwr_en_key_OFS)&COMP_PWR_EN_pwr_en_key_MASK);
}

static inline void COMP_RST_CTRL_WRITE(COMP_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<COMP_RST_CTRL_rst_OFS)&COMP_RST_CTRL_rst_MASK) + ((rst_sts_clr<<COMP_RST_CTRL_rst_sts_clr_OFS)&COMP_RST_CTRL_rst_sts_clr_MASK) + ((rst_key<<COMP_RST_CTRL_rst_key_OFS)&COMP_RST_CTRL_rst_key_MASK);
}

static inline void COMP_RST_STS_WRITE(COMP_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<COMP_RST_STS_rst_sts_OFS)&COMP_RST_STS_rst_sts_MASK);
}

static inline void COMP_CLK_CTRL_WRITE(COMP_REGS_s * registers, uint32_t en_async_clk_req) {
    registers->CLK_CTRL.packed_w =  + ((en_async_clk_req<<COMP_CLK_CTRL_en_async_clk_req_OFS)&COMP_CLK_CTRL_en_async_clk_req_MASK);
}

static inline void COMP_INTR_STS_WRITE(COMP_REGS_s * registers, uint32_t intr_first) {
    registers->INTR_STS.packed_w =  + ((intr_first<<COMP_INTR_STS_intr_first_OFS)&COMP_INTR_STS_intr_first_MASK);
}

static inline void COMP_INTR_EVENT_WRITE(COMP_REGS_s * registers, uint32_t comp_out_edge0, uint32_t comp_out_edge1, uint32_t comp_out) {
    registers->INTR_EVENT.packed_w =  + ((comp_out_edge0<<COMP_INTR_EVENT_comp_out_edge0_OFS)&COMP_INTR_EVENT_comp_out_edge0_MASK) + ((comp_out_edge1<<COMP_INTR_EVENT_comp_out_edge1_OFS)&COMP_INTR_EVENT_comp_out_edge1_MASK) + ((comp_out<<COMP_INTR_EVENT_comp_out_OFS)&COMP_INTR_EVENT_comp_out_MASK);
}

static inline void COMP_INTR_EN_WRITE(COMP_REGS_s * registers, uint32_t comp_out_edge0_en, uint32_t comp_out_edge1_en, uint32_t comp_out_en) {
    registers->INTR_EN.packed_w =  + ((comp_out_edge0_en<<COMP_INTR_EN_comp_out_edge0_en_OFS)&COMP_INTR_EN_comp_out_edge0_en_MASK) + ((comp_out_edge1_en<<COMP_INTR_EN_comp_out_edge1_en_OFS)&COMP_INTR_EN_comp_out_edge1_en_MASK) + ((comp_out_en<<COMP_INTR_EN_comp_out_en_OFS)&COMP_INTR_EN_comp_out_en_MASK);
}

static inline void COMP_INTR_NMI_EN_WRITE(COMP_REGS_s * registers, uint32_t comp_out_edge0_nmi_en, uint32_t comp_out_edge1_nmi_en, uint32_t comp_out_nmi_en) {
    registers->INTR_NMI_EN.packed_w =  + ((comp_out_edge0_nmi_en<<COMP_INTR_NMI_EN_comp_out_edge0_nmi_en_OFS)&COMP_INTR_NMI_EN_comp_out_edge0_nmi_en_MASK) + ((comp_out_edge1_nmi_en<<COMP_INTR_NMI_EN_comp_out_edge1_nmi_en_OFS)&COMP_INTR_NMI_EN_comp_out_edge1_nmi_en_MASK) + ((comp_out_nmi_en<<COMP_INTR_NMI_EN_comp_out_nmi_en_OFS)&COMP_INTR_NMI_EN_comp_out_nmi_en_MASK);
}

static inline void COMP_EVENT_EN_WRITE(COMP_REGS_s * registers, uint32_t comp_out_edge0_event_en, uint32_t comp_out_edge1_event_en, uint32_t comp_out_event_en) {
    registers->EVENT_EN.packed_w =  + ((comp_out_edge0_event_en<<COMP_EVENT_EN_comp_out_edge0_event_en_OFS)&COMP_EVENT_EN_comp_out_edge0_event_en_MASK) + ((comp_out_edge1_event_en<<COMP_EVENT_EN_comp_out_edge1_event_en_OFS)&COMP_EVENT_EN_comp_out_edge1_event_en_MASK) + ((comp_out_event_en<<COMP_EVENT_EN_comp_out_event_en_OFS)&COMP_EVENT_EN_comp_out_event_en_MASK);
}

static inline void COMP_INTR_SW_SET_WRITE(COMP_REGS_s * registers, uint32_t comp_out_edge0_sw_set, uint32_t comp_out_edge1_sw_set, uint32_t comp_out_sw_set) {
    registers->INTR_SW_SET.packed_w =  + ((comp_out_edge0_sw_set<<COMP_INTR_SW_SET_comp_out_edge0_sw_set_OFS)&COMP_INTR_SW_SET_comp_out_edge0_sw_set_MASK) + ((comp_out_edge1_sw_set<<COMP_INTR_SW_SET_comp_out_edge1_sw_set_OFS)&COMP_INTR_SW_SET_comp_out_edge1_sw_set_MASK) + ((comp_out_sw_set<<COMP_INTR_SW_SET_comp_out_sw_set_OFS)&COMP_INTR_SW_SET_comp_out_sw_set_MASK);
}

static inline void COMP_STS_WRITE(COMP_REGS_s * registers, uint32_t comp_out_sts) {
    registers->STS.packed_w =  + ((comp_out_sts<<COMP_STS_comp_out_sts_OFS)&COMP_STS_comp_out_sts_MASK);
}

static inline void COMP_CTRL0_WRITE(COMP_REGS_s * registers, uint32_t enable, uint32_t speed, uint32_t hyst, uint32_t intr_edge_sel) {
    registers->CTRL0.packed_w =  + ((enable<<COMP_CTRL0_enable_OFS)&COMP_CTRL0_enable_MASK) + ((speed<<COMP_CTRL0_speed_OFS)&COMP_CTRL0_speed_MASK) + ((hyst<<COMP_CTRL0_hyst_OFS)&COMP_CTRL0_hyst_MASK) + ((intr_edge_sel<<COMP_CTRL0_intr_edge_sel_OFS)&COMP_CTRL0_intr_edge_sel_MASK);
}

static inline void COMP_INPUT_CTRL0_WRITE(COMP_REGS_s * registers, uint32_t in_p_en, uint32_t in_p_sel, uint32_t in_m_en, uint32_t in_m_sel) {
    registers->INPUT_CTRL0.packed_w =  + ((in_p_en<<COMP_INPUT_CTRL0_in_p_en_OFS)&COMP_INPUT_CTRL0_in_p_en_MASK) + ((in_p_sel<<COMP_INPUT_CTRL0_in_p_sel_OFS)&COMP_INPUT_CTRL0_in_p_sel_MASK) + ((in_m_en<<COMP_INPUT_CTRL0_in_m_en_OFS)&COMP_INPUT_CTRL0_in_m_en_MASK) + ((in_m_sel<<COMP_INPUT_CTRL0_in_m_sel_OFS)&COMP_INPUT_CTRL0_in_m_sel_MASK);
}

static inline void COMP_INPUT_CTRL1_WRITE(COMP_REGS_s * registers, uint32_t in_short, uint32_t in_swap) {
    registers->INPUT_CTRL1.packed_w =  + ((in_short<<COMP_INPUT_CTRL1_in_short_OFS)&COMP_INPUT_CTRL1_in_short_MASK) + ((in_swap<<COMP_INPUT_CTRL1_in_swap_OFS)&COMP_INPUT_CTRL1_in_swap_MASK);
}

static inline void COMP_OUT_CTRL0_WRITE(COMP_REGS_s * registers, uint32_t out_pol, uint32_t samp_en, uint32_t filt_en, uint32_t filt_delay) {
    registers->OUT_CTRL0.packed_w =  + ((out_pol<<COMP_OUT_CTRL0_out_pol_OFS)&COMP_OUT_CTRL0_out_pol_MASK) + ((samp_en<<COMP_OUT_CTRL0_samp_en_OFS)&COMP_OUT_CTRL0_samp_en_MASK) + ((filt_en<<COMP_OUT_CTRL0_filt_en_OFS)&COMP_OUT_CTRL0_filt_en_MASK) + ((filt_delay<<COMP_OUT_CTRL0_filt_delay_OFS)&COMP_OUT_CTRL0_filt_delay_MASK);
}

static inline void COMP_OUT_CTRL1_WRITE(COMP_REGS_s * registers, uint32_t win_comp_en, uint32_t win_comp_sel, uint32_t blank_en, uint32_t blank_src) {
    registers->OUT_CTRL1.packed_w =  + ((win_comp_en<<COMP_OUT_CTRL1_win_comp_en_OFS)&COMP_OUT_CTRL1_win_comp_en_MASK) + ((win_comp_sel<<COMP_OUT_CTRL1_win_comp_sel_OFS)&COMP_OUT_CTRL1_win_comp_sel_MASK) + ((blank_en<<COMP_OUT_CTRL1_blank_en_OFS)&COMP_OUT_CTRL1_blank_en_MASK) + ((blank_src<<COMP_OUT_CTRL1_blank_src_OFS)&COMP_OUT_CTRL1_blank_src_MASK);
}

static inline void COMP_REF_CTRL0_WRITE(COMP_REGS_s * registers, uint32_t ref_sel, uint32_t ref_src, uint32_t ref_mode) {
    registers->REF_CTRL0.packed_w =  + ((ref_sel<<COMP_REF_CTRL0_ref_sel_OFS)&COMP_REF_CTRL0_ref_sel_MASK) + ((ref_src<<COMP_REF_CTRL0_ref_src_OFS)&COMP_REF_CTRL0_ref_src_MASK) + ((ref_mode<<COMP_REF_CTRL0_ref_mode_OFS)&COMP_REF_CTRL0_ref_mode_MASK);
}

static inline void COMP_REF_CTRL1_WRITE(COMP_REGS_s * registers, uint32_t dac_code0, uint32_t dac_code1, uint32_t dac_mode, uint32_t dac_code_sel) {
    registers->REF_CTRL1.packed_w =  + ((dac_code0<<COMP_REF_CTRL1_dac_code0_OFS)&COMP_REF_CTRL1_dac_code0_MASK) + ((dac_code1<<COMP_REF_CTRL1_dac_code1_OFS)&COMP_REF_CTRL1_dac_code1_MASK) + ((dac_mode<<COMP_REF_CTRL1_dac_mode_OFS)&COMP_REF_CTRL1_dac_mode_MASK) + ((dac_code_sel<<COMP_REF_CTRL1_dac_code_sel_OFS)&COMP_REF_CTRL1_dac_code_sel_MASK);
}

static inline void COMP_SPARE_CTRL_WRITE(COMP_REGS_s * registers, uint32_t cfg0, uint32_t cfg1) {
    registers->SPARE_CTRL.packed_w =  + ((cfg0<<COMP_SPARE_CTRL_cfg0_OFS)&COMP_SPARE_CTRL_cfg0_MASK) + ((cfg1<<COMP_SPARE_CTRL_cfg1_OFS)&COMP_SPARE_CTRL_cfg1_MASK);
}

static inline void COMP_SPARE_STS_WRITE(COMP_REGS_s * registers, uint32_t sts0, uint32_t sts1) {
    registers->SPARE_STS.packed_w =  + ((sts0<<COMP_SPARE_STS_sts0_OFS)&COMP_SPARE_STS_sts0_MASK) + ((sts1<<COMP_SPARE_STS_sts1_OFS)&COMP_SPARE_STS_sts1_MASK);
}

