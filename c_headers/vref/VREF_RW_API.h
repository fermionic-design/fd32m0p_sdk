#include "VREF_REGS.h"

static inline void VREF_DESC_WRITE(VREF_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<VREF_DESC_MODULE_TYPE_OFS)&VREF_DESC_MODULE_TYPE_MASK) + ((modue_subtype<<VREF_DESC_MODUE_SUBTYPE_OFS)&VREF_DESC_MODUE_SUBTYPE_MASK) + ((major_rev<<VREF_DESC_MAJOR_REV_OFS)&VREF_DESC_MAJOR_REV_MASK) + ((minor_rev<<VREF_DESC_MINOR_REV_OFS)&VREF_DESC_MINOR_REV_MASK);
}

static inline void VREF_PWR_EN_WRITE(VREF_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<VREF_PWR_EN_PWR_EN_OFS)&VREF_PWR_EN_PWR_EN_MASK) + ((pwr_en_key<<VREF_PWR_EN_PWR_EN_KEY_OFS)&VREF_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void VREF_RST_CTRL_WRITE(VREF_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<VREF_RST_CTRL_RST_OFS)&VREF_RST_CTRL_RST_MASK) + ((rst_sts_clr<<VREF_RST_CTRL_RST_STS_CLR_OFS)&VREF_RST_CTRL_RST_STS_CLR_MASK) + ((rst_key<<VREF_RST_CTRL_RST_KEY_OFS)&VREF_RST_CTRL_RST_KEY_MASK);
}

static inline void VREF_RST_STS_WRITE(VREF_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<VREF_RST_STS_RST_STS_OFS)&VREF_RST_STS_RST_STS_MASK);
}

static inline void VREF_CLK_CTRL_WRITE(VREF_REGS_s * registers, uint32_t clk_sel, uint32_t clk_div) {
    registers->CLK_CTRL.packed_w =  + ((clk_sel<<VREF_CLK_CTRL_CLK_SEL_OFS)&VREF_CLK_CTRL_CLK_SEL_MASK) + ((clk_div<<VREF_CLK_CTRL_CLK_DIV_OFS)&VREF_CLK_CTRL_CLK_DIV_MASK);
}

static inline void VREF_STS_WRITE(VREF_REGS_s * registers, uint32_t vref_rdy) {
    registers->STS.packed_w =  + ((vref_rdy<<VREF_STS_VREF_RDY_OFS)&VREF_STS_VREF_RDY_MASK);
}

static inline void VREF_VREF_CTRL_WRITE(VREF_REGS_s * registers, uint32_t enable, uint32_t vref_mode, uint32_t sh_en) {
    registers->VREF_CTRL.packed_w =  + ((enable<<VREF_VREF_CTRL_ENABLE_OFS)&VREF_VREF_CTRL_ENABLE_MASK) + ((vref_mode<<VREF_VREF_CTRL_VREF_MODE_OFS)&VREF_VREF_CTRL_VREF_MODE_MASK) + ((sh_en<<VREF_VREF_CTRL_SH_EN_OFS)&VREF_VREF_CTRL_SH_EN_MASK);
}

static inline void VREF_SH_CTRL_WRITE(VREF_REGS_s * registers, uint32_t hold_cnt, uint32_t period_cnt) {
    registers->SH_CTRL.packed_w =  + ((hold_cnt<<VREF_SH_CTRL_HOLD_CNT_OFS)&VREF_SH_CTRL_HOLD_CNT_MASK) + ((period_cnt<<VREF_SH_CTRL_PERIOD_CNT_OFS)&VREF_SH_CTRL_PERIOD_CNT_MASK);
}

static inline void VREF_VREF_SPARE_CTRL_WRITE(VREF_REGS_s * registers, uint32_t vref_cfg0, uint32_t vref_cfg1) {
    registers->VREF_SPARE_CTRL.packed_w =  + ((vref_cfg0<<VREF_VREF_SPARE_CTRL_VREF_CFG0_OFS)&VREF_VREF_SPARE_CTRL_VREF_CFG0_MASK) + ((vref_cfg1<<VREF_VREF_SPARE_CTRL_VREF_CFG1_OFS)&VREF_VREF_SPARE_CTRL_VREF_CFG1_MASK);
}

static inline void VREF_VREF_SPARE_STS_WRITE(VREF_REGS_s * registers, uint32_t vref_sts0, uint32_t vref_sts1) {
    registers->VREF_SPARE_STS.packed_w =  + ((vref_sts0<<VREF_VREF_SPARE_STS_VREF_STS0_OFS)&VREF_VREF_SPARE_STS_VREF_STS0_MASK) + ((vref_sts1<<VREF_VREF_SPARE_STS_VREF_STS1_OFS)&VREF_VREF_SPARE_STS_VREF_STS1_MASK);
}

