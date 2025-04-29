#include "OPAMP_REGS.h"

static inline void OPAMP_DESC_WRITE(OPAMP_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<OPAMP_DESC_MODULE_TYPE_OFS)&OPAMP_DESC_MODULE_TYPE_MASK) + ((modue_subtype<<OPAMP_DESC_MODUE_SUBTYPE_OFS)&OPAMP_DESC_MODUE_SUBTYPE_MASK) + ((major_rev<<OPAMP_DESC_MAJOR_REV_OFS)&OPAMP_DESC_MAJOR_REV_MASK) + ((minor_rev<<OPAMP_DESC_MINOR_REV_OFS)&OPAMP_DESC_MINOR_REV_MASK);
}

static inline void OPAMP_PWR_EN_WRITE(OPAMP_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<OPAMP_PWR_EN_PWR_EN_OFS)&OPAMP_PWR_EN_PWR_EN_MASK) + ((pwr_en_key<<OPAMP_PWR_EN_PWR_EN_KEY_OFS)&OPAMP_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void OPAMP_RST_CTRL_WRITE(OPAMP_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<OPAMP_RST_CTRL_RST_OFS)&OPAMP_RST_CTRL_RST_MASK) + ((rst_sts_clr<<OPAMP_RST_CTRL_RST_STS_CLR_OFS)&OPAMP_RST_CTRL_RST_STS_CLR_MASK) + ((rst_key<<OPAMP_RST_CTRL_RST_KEY_OFS)&OPAMP_RST_CTRL_RST_KEY_MASK);
}

static inline void OPAMP_RST_STS_WRITE(OPAMP_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<OPAMP_RST_STS_RST_STS_OFS)&OPAMP_RST_STS_RST_STS_MASK);
}

static inline void OPAMP_CTRL0_WRITE(OPAMP_REGS_s * registers, uint32_t enable, uint32_t bcs_en, uint32_t rri_en, uint32_t out_en) {
    registers->CTRL0.packed_w =  + ((enable<<OPAMP_CTRL0_ENABLE_OFS)&OPAMP_CTRL0_ENABLE_MASK) + ((bcs_en<<OPAMP_CTRL0_BCS_EN_OFS)&OPAMP_CTRL0_BCS_EN_MASK) + ((rri_en<<OPAMP_CTRL0_RRI_EN_OFS)&OPAMP_CTRL0_RRI_EN_MASK) + ((out_en<<OPAMP_CTRL0_OUT_EN_OFS)&OPAMP_CTRL0_OUT_EN_MASK);
}

static inline void OPAMP_GAIN_CTRL0_WRITE(OPAMP_REGS_s * registers, uint32_t gain, uint32_t gbw, uint32_t chop_en, uint32_t chop_mode) {
    registers->GAIN_CTRL0.packed_w =  + ((gain<<OPAMP_GAIN_CTRL0_GAIN_OFS)&OPAMP_GAIN_CTRL0_GAIN_MASK) + ((gbw<<OPAMP_GAIN_CTRL0_GBW_OFS)&OPAMP_GAIN_CTRL0_GBW_MASK) + ((chop_en<<OPAMP_GAIN_CTRL0_CHOP_EN_OFS)&OPAMP_GAIN_CTRL0_CHOP_EN_MASK) + ((chop_mode<<OPAMP_GAIN_CTRL0_CHOP_MODE_OFS)&OPAMP_GAIN_CTRL0_CHOP_MODE_MASK);
}

static inline void OPAMP_INPUT_CTRL0_WRITE(OPAMP_REGS_s * registers, uint32_t in_p_sel, uint32_t in_n_sel, uint32_t in_m_sel) {
    registers->INPUT_CTRL0.packed_w =  + ((in_p_sel<<OPAMP_INPUT_CTRL0_IN_P_SEL_OFS)&OPAMP_INPUT_CTRL0_IN_P_SEL_MASK) + ((in_n_sel<<OPAMP_INPUT_CTRL0_IN_N_SEL_OFS)&OPAMP_INPUT_CTRL0_IN_N_SEL_MASK) + ((in_m_sel<<OPAMP_INPUT_CTRL0_IN_M_SEL_OFS)&OPAMP_INPUT_CTRL0_IN_M_SEL_MASK);
}

static inline void OPAMP_SPARE_CTRL_WRITE(OPAMP_REGS_s * registers, uint32_t cfg0, uint32_t cfg1) {
    registers->SPARE_CTRL.packed_w =  + ((cfg0<<OPAMP_SPARE_CTRL_CFG0_OFS)&OPAMP_SPARE_CTRL_CFG0_MASK) + ((cfg1<<OPAMP_SPARE_CTRL_CFG1_OFS)&OPAMP_SPARE_CTRL_CFG1_MASK);
}

static inline void OPAMP_SPARE_STS_WRITE(OPAMP_REGS_s * registers, uint32_t sts0, uint32_t sts1) {
    registers->SPARE_STS.packed_w =  + ((sts0<<OPAMP_SPARE_STS_STS0_OFS)&OPAMP_SPARE_STS_STS0_MASK) + ((sts1<<OPAMP_SPARE_STS_STS1_OFS)&OPAMP_SPARE_STS_STS1_MASK);
}

