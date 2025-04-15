#include "OPAMP_REGS.h"

static inline void OPAMP_DESC_WRITE(OPAMP_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<OPAMP_DESC_module_type_OFS)&OPAMP_DESC_module_type_MASK) + ((modue_subtype<<OPAMP_DESC_modue_subtype_OFS)&OPAMP_DESC_modue_subtype_MASK) + ((major_rev<<OPAMP_DESC_major_rev_OFS)&OPAMP_DESC_major_rev_MASK) + ((minor_rev<<OPAMP_DESC_minor_rev_OFS)&OPAMP_DESC_minor_rev_MASK);
}

static inline void OPAMP_PWR_EN_WRITE(OPAMP_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<OPAMP_PWR_EN_pwr_en_OFS)&OPAMP_PWR_EN_pwr_en_MASK) + ((pwr_en_key<<OPAMP_PWR_EN_pwr_en_key_OFS)&OPAMP_PWR_EN_pwr_en_key_MASK);
}

static inline void OPAMP_RST_CTRL_WRITE(OPAMP_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<OPAMP_RST_CTRL_rst_OFS)&OPAMP_RST_CTRL_rst_MASK) + ((rst_sts_clr<<OPAMP_RST_CTRL_rst_sts_clr_OFS)&OPAMP_RST_CTRL_rst_sts_clr_MASK) + ((rst_key<<OPAMP_RST_CTRL_rst_key_OFS)&OPAMP_RST_CTRL_rst_key_MASK);
}

static inline void OPAMP_RST_STS_WRITE(OPAMP_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<OPAMP_RST_STS_rst_sts_OFS)&OPAMP_RST_STS_rst_sts_MASK);
}

static inline void OPAMP_CTRL0_WRITE(OPAMP_REGS_s * registers, uint32_t enable, uint32_t bcs_en, uint32_t rri_en, uint32_t out_en) {
    registers->CTRL0.packed_w =  + ((enable<<OPAMP_CTRL0_enable_OFS)&OPAMP_CTRL0_enable_MASK) + ((bcs_en<<OPAMP_CTRL0_bcs_en_OFS)&OPAMP_CTRL0_bcs_en_MASK) + ((rri_en<<OPAMP_CTRL0_rri_en_OFS)&OPAMP_CTRL0_rri_en_MASK) + ((out_en<<OPAMP_CTRL0_out_en_OFS)&OPAMP_CTRL0_out_en_MASK);
}

static inline void OPAMP_GAIN_CTRL0_WRITE(OPAMP_REGS_s * registers, uint32_t gain, uint32_t gbw, uint32_t chop_en, uint32_t chop_mode) {
    registers->GAIN_CTRL0.packed_w =  + ((gain<<OPAMP_GAIN_CTRL0_gain_OFS)&OPAMP_GAIN_CTRL0_gain_MASK) + ((gbw<<OPAMP_GAIN_CTRL0_gbw_OFS)&OPAMP_GAIN_CTRL0_gbw_MASK) + ((chop_en<<OPAMP_GAIN_CTRL0_chop_en_OFS)&OPAMP_GAIN_CTRL0_chop_en_MASK) + ((chop_mode<<OPAMP_GAIN_CTRL0_chop_mode_OFS)&OPAMP_GAIN_CTRL0_chop_mode_MASK);
}

static inline void OPAMP_INPUT_CTRL0_WRITE(OPAMP_REGS_s * registers, uint32_t in_p_sel, uint32_t in_n_sel, uint32_t in_m_sel) {
    registers->INPUT_CTRL0.packed_w =  + ((in_p_sel<<OPAMP_INPUT_CTRL0_in_p_sel_OFS)&OPAMP_INPUT_CTRL0_in_p_sel_MASK) + ((in_n_sel<<OPAMP_INPUT_CTRL0_in_n_sel_OFS)&OPAMP_INPUT_CTRL0_in_n_sel_MASK) + ((in_m_sel<<OPAMP_INPUT_CTRL0_in_m_sel_OFS)&OPAMP_INPUT_CTRL0_in_m_sel_MASK);
}

static inline void OPAMP_SPARE_CTRL_WRITE(OPAMP_REGS_s * registers, uint32_t cfg0, uint32_t cfg1) {
    registers->SPARE_CTRL.packed_w =  + ((cfg0<<OPAMP_SPARE_CTRL_cfg0_OFS)&OPAMP_SPARE_CTRL_cfg0_MASK) + ((cfg1<<OPAMP_SPARE_CTRL_cfg1_OFS)&OPAMP_SPARE_CTRL_cfg1_MASK);
}

static inline void OPAMP_SPARE_STS_WRITE(OPAMP_REGS_s * registers, uint32_t sts0, uint32_t sts1) {
    registers->SPARE_STS.packed_w =  + ((sts0<<OPAMP_SPARE_STS_sts0_OFS)&OPAMP_SPARE_STS_sts0_MASK) + ((sts1<<OPAMP_SPARE_STS_sts1_OFS)&OPAMP_SPARE_STS_sts1_MASK);
}

