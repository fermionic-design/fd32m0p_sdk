#include "VREF_REGS.h"

static inline void VREF_DESC_WRITE(VREF_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<VREF_DESC_module_type_OFS)&VREF_DESC_module_type_MASK) + ((modue_subtype<<VREF_DESC_modue_subtype_OFS)&VREF_DESC_modue_subtype_MASK) + ((major_rev<<VREF_DESC_major_rev_OFS)&VREF_DESC_major_rev_MASK) + ((minor_rev<<VREF_DESC_minor_rev_OFS)&VREF_DESC_minor_rev_MASK);
}

static inline void VREF_PWR_EN_WRITE(VREF_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<VREF_PWR_EN_pwr_en_OFS)&VREF_PWR_EN_pwr_en_MASK) + ((pwr_en_key<<VREF_PWR_EN_pwr_en_key_OFS)&VREF_PWR_EN_pwr_en_key_MASK);
}

static inline void VREF_RST_CTRL_WRITE(VREF_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<VREF_RST_CTRL_rst_OFS)&VREF_RST_CTRL_rst_MASK) + ((rst_sts_clr<<VREF_RST_CTRL_rst_sts_clr_OFS)&VREF_RST_CTRL_rst_sts_clr_MASK) + ((rst_key<<VREF_RST_CTRL_rst_key_OFS)&VREF_RST_CTRL_rst_key_MASK);
}

static inline void VREF_RST_STS_WRITE(VREF_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<VREF_RST_STS_rst_sts_OFS)&VREF_RST_STS_rst_sts_MASK);
}

static inline void VREF_CLK_CTRL_WRITE(VREF_REGS_s * registers, uint32_t clk_sel, uint32_t clk_div) {
    registers->CLK_CTRL.packed_w =  + ((clk_sel<<VREF_CLK_CTRL_clk_sel_OFS)&VREF_CLK_CTRL_clk_sel_MASK) + ((clk_div<<VREF_CLK_CTRL_clk_div_OFS)&VREF_CLK_CTRL_clk_div_MASK);
}

static inline void VREF_STS_WRITE(VREF_REGS_s * registers, uint32_t vref_rdy) {
    registers->STS.packed_w =  + ((vref_rdy<<VREF_STS_vref_rdy_OFS)&VREF_STS_vref_rdy_MASK);
}

static inline void VREF_VREF_CTRL_WRITE(VREF_REGS_s * registers, uint32_t enable, uint32_t vref_mode, uint32_t sh_en) {
    registers->VREF_CTRL.packed_w =  + ((enable<<VREF_VREF_CTRL_enable_OFS)&VREF_VREF_CTRL_enable_MASK) + ((vref_mode<<VREF_VREF_CTRL_vref_mode_OFS)&VREF_VREF_CTRL_vref_mode_MASK) + ((sh_en<<VREF_VREF_CTRL_sh_en_OFS)&VREF_VREF_CTRL_sh_en_MASK);
}

static inline void VREF_SH_CTRL_WRITE(VREF_REGS_s * registers, uint32_t hold_cnt, uint32_t period_cnt) {
    registers->SH_CTRL.packed_w =  + ((hold_cnt<<VREF_SH_CTRL_hold_cnt_OFS)&VREF_SH_CTRL_hold_cnt_MASK) + ((period_cnt<<VREF_SH_CTRL_period_cnt_OFS)&VREF_SH_CTRL_period_cnt_MASK);
}

static inline void VREF_VREF_SPARE_CTRL_WRITE(VREF_REGS_s * registers, uint32_t vref_cfg0, uint32_t vref_cfg1) {
    registers->VREF_SPARE_CTRL.packed_w =  + ((vref_cfg0<<VREF_VREF_SPARE_CTRL_vref_cfg0_OFS)&VREF_VREF_SPARE_CTRL_vref_cfg0_MASK) + ((vref_cfg1<<VREF_VREF_SPARE_CTRL_vref_cfg1_OFS)&VREF_VREF_SPARE_CTRL_vref_cfg1_MASK);
}

static inline void VREF_VREF_SPARE_STS_WRITE(VREF_REGS_s * registers, uint32_t vref_sts0, uint32_t vref_sts1) {
    registers->VREF_SPARE_STS.packed_w =  + ((vref_sts0<<VREF_VREF_SPARE_STS_vref_sts0_OFS)&VREF_VREF_SPARE_STS_vref_sts0_MASK) + ((vref_sts1<<VREF_VREF_SPARE_STS_vref_sts1_OFS)&VREF_VREF_SPARE_STS_vref_sts1_MASK);
}

