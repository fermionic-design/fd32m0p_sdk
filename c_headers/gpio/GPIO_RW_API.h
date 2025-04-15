#include "GPIO_REGS.h"

static inline void GPIO_DESC_WRITE(GPIO_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<GPIO_DESC_module_type_OFS)&GPIO_DESC_module_type_MASK) + ((modue_subtype<<GPIO_DESC_modue_subtype_OFS)&GPIO_DESC_modue_subtype_MASK) + ((major_rev<<GPIO_DESC_major_rev_OFS)&GPIO_DESC_major_rev_MASK) + ((minor_rev<<GPIO_DESC_minor_rev_OFS)&GPIO_DESC_minor_rev_MASK);
}

static inline void GPIO_PWR_EN_WRITE(GPIO_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<GPIO_PWR_EN_pwr_en_OFS)&GPIO_PWR_EN_pwr_en_MASK) + ((pwr_en_key<<GPIO_PWR_EN_pwr_en_key_OFS)&GPIO_PWR_EN_pwr_en_key_MASK);
}

static inline void GPIO_RST_CTRL_WRITE(GPIO_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<GPIO_RST_CTRL_rst_OFS)&GPIO_RST_CTRL_rst_MASK) + ((rst_sts_clr<<GPIO_RST_CTRL_rst_sts_clr_OFS)&GPIO_RST_CTRL_rst_sts_clr_MASK) + ((rst_key<<GPIO_RST_CTRL_rst_key_OFS)&GPIO_RST_CTRL_rst_key_MASK);
}

static inline void GPIO_RST_STS_WRITE(GPIO_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<GPIO_RST_STS_rst_sts_OFS)&GPIO_RST_STS_rst_sts_MASK);
}

static inline void GPIO_CLK_CTRL_WRITE(GPIO_REGS_s * registers, uint32_t en_async_clk_req) {
    registers->CLK_CTRL.packed_w =  + ((en_async_clk_req<<GPIO_CLK_CTRL_en_async_clk_req_OFS)&GPIO_CLK_CTRL_en_async_clk_req_MASK);
}

static inline void GPIO_INTR_STS_WRITE(GPIO_REGS_s * registers, uint32_t intr_first) {
    registers->INTR_STS.packed_w =  + ((intr_first<<GPIO_INTR_STS_intr_first_OFS)&GPIO_INTR_STS_intr_first_MASK);
}

static inline void GPIO_INTR_EVENT_WRITE(GPIO_REGS_s * registers, uint32_t intr0, uint32_t intr1, uint32_t intr2, uint32_t intr3, uint32_t intr4, uint32_t intr5, uint32_t intr6, uint32_t intr7, uint32_t intr8, uint32_t intr9, uint32_t intr10, uint32_t intr11, uint32_t intr12, uint32_t intr13, uint32_t intr14, uint32_t intr15, uint32_t intr16, uint32_t intr17, uint32_t intr18, uint32_t intr19, uint32_t intr20, uint32_t intr21, uint32_t intr22, uint32_t intr23, uint32_t intr24, uint32_t intr25, uint32_t intr26, uint32_t intr27, uint32_t intr28, uint32_t intr29, uint32_t intr30, uint32_t intr31) {
    registers->INTR_EVENT.packed_w =  + ((intr0<<GPIO_INTR_EVENT_intr0_OFS)&GPIO_INTR_EVENT_intr0_MASK) + ((intr1<<GPIO_INTR_EVENT_intr1_OFS)&GPIO_INTR_EVENT_intr1_MASK) + ((intr2<<GPIO_INTR_EVENT_intr2_OFS)&GPIO_INTR_EVENT_intr2_MASK) + ((intr3<<GPIO_INTR_EVENT_intr3_OFS)&GPIO_INTR_EVENT_intr3_MASK) + ((intr4<<GPIO_INTR_EVENT_intr4_OFS)&GPIO_INTR_EVENT_intr4_MASK) + ((intr5<<GPIO_INTR_EVENT_intr5_OFS)&GPIO_INTR_EVENT_intr5_MASK) + ((intr6<<GPIO_INTR_EVENT_intr6_OFS)&GPIO_INTR_EVENT_intr6_MASK) + ((intr7<<GPIO_INTR_EVENT_intr7_OFS)&GPIO_INTR_EVENT_intr7_MASK) + ((intr8<<GPIO_INTR_EVENT_intr8_OFS)&GPIO_INTR_EVENT_intr8_MASK) + ((intr9<<GPIO_INTR_EVENT_intr9_OFS)&GPIO_INTR_EVENT_intr9_MASK) + ((intr10<<GPIO_INTR_EVENT_intr10_OFS)&GPIO_INTR_EVENT_intr10_MASK) + ((intr11<<GPIO_INTR_EVENT_intr11_OFS)&GPIO_INTR_EVENT_intr11_MASK) + ((intr12<<GPIO_INTR_EVENT_intr12_OFS)&GPIO_INTR_EVENT_intr12_MASK) + ((intr13<<GPIO_INTR_EVENT_intr13_OFS)&GPIO_INTR_EVENT_intr13_MASK) + ((intr14<<GPIO_INTR_EVENT_intr14_OFS)&GPIO_INTR_EVENT_intr14_MASK) + ((intr15<<GPIO_INTR_EVENT_intr15_OFS)&GPIO_INTR_EVENT_intr15_MASK) + ((intr16<<GPIO_INTR_EVENT_intr16_OFS)&GPIO_INTR_EVENT_intr16_MASK) + ((intr17<<GPIO_INTR_EVENT_intr17_OFS)&GPIO_INTR_EVENT_intr17_MASK) + ((intr18<<GPIO_INTR_EVENT_intr18_OFS)&GPIO_INTR_EVENT_intr18_MASK) + ((intr19<<GPIO_INTR_EVENT_intr19_OFS)&GPIO_INTR_EVENT_intr19_MASK) + ((intr20<<GPIO_INTR_EVENT_intr20_OFS)&GPIO_INTR_EVENT_intr20_MASK) + ((intr21<<GPIO_INTR_EVENT_intr21_OFS)&GPIO_INTR_EVENT_intr21_MASK) + ((intr22<<GPIO_INTR_EVENT_intr22_OFS)&GPIO_INTR_EVENT_intr22_MASK) + ((intr23<<GPIO_INTR_EVENT_intr23_OFS)&GPIO_INTR_EVENT_intr23_MASK) + ((intr24<<GPIO_INTR_EVENT_intr24_OFS)&GPIO_INTR_EVENT_intr24_MASK) + ((intr25<<GPIO_INTR_EVENT_intr25_OFS)&GPIO_INTR_EVENT_intr25_MASK) + ((intr26<<GPIO_INTR_EVENT_intr26_OFS)&GPIO_INTR_EVENT_intr26_MASK) + ((intr27<<GPIO_INTR_EVENT_intr27_OFS)&GPIO_INTR_EVENT_intr27_MASK) + ((intr28<<GPIO_INTR_EVENT_intr28_OFS)&GPIO_INTR_EVENT_intr28_MASK) + ((intr29<<GPIO_INTR_EVENT_intr29_OFS)&GPIO_INTR_EVENT_intr29_MASK) + ((intr30<<GPIO_INTR_EVENT_intr30_OFS)&GPIO_INTR_EVENT_intr30_MASK) + ((intr31<<GPIO_INTR_EVENT_intr31_OFS)&GPIO_INTR_EVENT_intr31_MASK);
}

static inline void GPIO_INTR_EN0_WRITE(GPIO_REGS_s * registers, uint32_t intr0_en, uint32_t intr1_en, uint32_t intr2_en, uint32_t intr3_en, uint32_t intr4_en, uint32_t intr5_en, uint32_t intr6_en, uint32_t intr7_en, uint32_t intr8_en, uint32_t intr9_en, uint32_t intr10_en, uint32_t intr11_en, uint32_t intr12_en, uint32_t intr13_en, uint32_t intr14_en, uint32_t intr15_en) {
    registers->INTR_EN0.packed_w =  + ((intr0_en<<GPIO_INTR_EN0_intr0_en_OFS)&GPIO_INTR_EN0_intr0_en_MASK) + ((intr1_en<<GPIO_INTR_EN0_intr1_en_OFS)&GPIO_INTR_EN0_intr1_en_MASK) + ((intr2_en<<GPIO_INTR_EN0_intr2_en_OFS)&GPIO_INTR_EN0_intr2_en_MASK) + ((intr3_en<<GPIO_INTR_EN0_intr3_en_OFS)&GPIO_INTR_EN0_intr3_en_MASK) + ((intr4_en<<GPIO_INTR_EN0_intr4_en_OFS)&GPIO_INTR_EN0_intr4_en_MASK) + ((intr5_en<<GPIO_INTR_EN0_intr5_en_OFS)&GPIO_INTR_EN0_intr5_en_MASK) + ((intr6_en<<GPIO_INTR_EN0_intr6_en_OFS)&GPIO_INTR_EN0_intr6_en_MASK) + ((intr7_en<<GPIO_INTR_EN0_intr7_en_OFS)&GPIO_INTR_EN0_intr7_en_MASK) + ((intr8_en<<GPIO_INTR_EN0_intr8_en_OFS)&GPIO_INTR_EN0_intr8_en_MASK) + ((intr9_en<<GPIO_INTR_EN0_intr9_en_OFS)&GPIO_INTR_EN0_intr9_en_MASK) + ((intr10_en<<GPIO_INTR_EN0_intr10_en_OFS)&GPIO_INTR_EN0_intr10_en_MASK) + ((intr11_en<<GPIO_INTR_EN0_intr11_en_OFS)&GPIO_INTR_EN0_intr11_en_MASK) + ((intr12_en<<GPIO_INTR_EN0_intr12_en_OFS)&GPIO_INTR_EN0_intr12_en_MASK) + ((intr13_en<<GPIO_INTR_EN0_intr13_en_OFS)&GPIO_INTR_EN0_intr13_en_MASK) + ((intr14_en<<GPIO_INTR_EN0_intr14_en_OFS)&GPIO_INTR_EN0_intr14_en_MASK) + ((intr15_en<<GPIO_INTR_EN0_intr15_en_OFS)&GPIO_INTR_EN0_intr15_en_MASK);
}

static inline void GPIO_INTR_EN1_WRITE(GPIO_REGS_s * registers, uint32_t intr16_en, uint32_t intr17_en, uint32_t intr18_en, uint32_t intr19_en, uint32_t intr20_en, uint32_t intr21_en, uint32_t intr22_en, uint32_t intr23_en, uint32_t intr24_en, uint32_t intr25_en, uint32_t intr26_en, uint32_t intr27_en, uint32_t intr28_en, uint32_t intr29_en, uint32_t intr30_en, uint32_t intr31_en) {
    registers->INTR_EN1.packed_w =  + ((intr16_en<<GPIO_INTR_EN1_intr16_en_OFS)&GPIO_INTR_EN1_intr16_en_MASK) + ((intr17_en<<GPIO_INTR_EN1_intr17_en_OFS)&GPIO_INTR_EN1_intr17_en_MASK) + ((intr18_en<<GPIO_INTR_EN1_intr18_en_OFS)&GPIO_INTR_EN1_intr18_en_MASK) + ((intr19_en<<GPIO_INTR_EN1_intr19_en_OFS)&GPIO_INTR_EN1_intr19_en_MASK) + ((intr20_en<<GPIO_INTR_EN1_intr20_en_OFS)&GPIO_INTR_EN1_intr20_en_MASK) + ((intr21_en<<GPIO_INTR_EN1_intr21_en_OFS)&GPIO_INTR_EN1_intr21_en_MASK) + ((intr22_en<<GPIO_INTR_EN1_intr22_en_OFS)&GPIO_INTR_EN1_intr22_en_MASK) + ((intr23_en<<GPIO_INTR_EN1_intr23_en_OFS)&GPIO_INTR_EN1_intr23_en_MASK) + ((intr24_en<<GPIO_INTR_EN1_intr24_en_OFS)&GPIO_INTR_EN1_intr24_en_MASK) + ((intr25_en<<GPIO_INTR_EN1_intr25_en_OFS)&GPIO_INTR_EN1_intr25_en_MASK) + ((intr26_en<<GPIO_INTR_EN1_intr26_en_OFS)&GPIO_INTR_EN1_intr26_en_MASK) + ((intr27_en<<GPIO_INTR_EN1_intr27_en_OFS)&GPIO_INTR_EN1_intr27_en_MASK) + ((intr28_en<<GPIO_INTR_EN1_intr28_en_OFS)&GPIO_INTR_EN1_intr28_en_MASK) + ((intr29_en<<GPIO_INTR_EN1_intr29_en_OFS)&GPIO_INTR_EN1_intr29_en_MASK) + ((intr30_en<<GPIO_INTR_EN1_intr30_en_OFS)&GPIO_INTR_EN1_intr30_en_MASK) + ((intr31_en<<GPIO_INTR_EN1_intr31_en_OFS)&GPIO_INTR_EN1_intr31_en_MASK);
}

static inline void GPIO_INTR_NMI_EN0_WRITE(GPIO_REGS_s * registers, uint32_t intr0_nmi_en, uint32_t intr1_nmi_en, uint32_t intr2_nmi_en, uint32_t intr3_nmi_en, uint32_t intr4_nmi_en, uint32_t intr5_nmi_en, uint32_t intr6_nmi_en, uint32_t intr7_nmi_en, uint32_t intr8_nmi_en, uint32_t intr9_nmi_en, uint32_t intr10_nmi_en, uint32_t intr11_nmi_en, uint32_t intr12_nmi_en, uint32_t intr13_nmi_en, uint32_t intr14_nmi_en, uint32_t intr15_nmi_en) {
    registers->INTR_NMI_EN0.packed_w =  + ((intr0_nmi_en<<GPIO_INTR_NMI_EN0_intr0_nmi_en_OFS)&GPIO_INTR_NMI_EN0_intr0_nmi_en_MASK) + ((intr1_nmi_en<<GPIO_INTR_NMI_EN0_intr1_nmi_en_OFS)&GPIO_INTR_NMI_EN0_intr1_nmi_en_MASK) + ((intr2_nmi_en<<GPIO_INTR_NMI_EN0_intr2_nmi_en_OFS)&GPIO_INTR_NMI_EN0_intr2_nmi_en_MASK) + ((intr3_nmi_en<<GPIO_INTR_NMI_EN0_intr3_nmi_en_OFS)&GPIO_INTR_NMI_EN0_intr3_nmi_en_MASK) + ((intr4_nmi_en<<GPIO_INTR_NMI_EN0_intr4_nmi_en_OFS)&GPIO_INTR_NMI_EN0_intr4_nmi_en_MASK) + ((intr5_nmi_en<<GPIO_INTR_NMI_EN0_intr5_nmi_en_OFS)&GPIO_INTR_NMI_EN0_intr5_nmi_en_MASK) + ((intr6_nmi_en<<GPIO_INTR_NMI_EN0_intr6_nmi_en_OFS)&GPIO_INTR_NMI_EN0_intr6_nmi_en_MASK) + ((intr7_nmi_en<<GPIO_INTR_NMI_EN0_intr7_nmi_en_OFS)&GPIO_INTR_NMI_EN0_intr7_nmi_en_MASK) + ((intr8_nmi_en<<GPIO_INTR_NMI_EN0_intr8_nmi_en_OFS)&GPIO_INTR_NMI_EN0_intr8_nmi_en_MASK) + ((intr9_nmi_en<<GPIO_INTR_NMI_EN0_intr9_nmi_en_OFS)&GPIO_INTR_NMI_EN0_intr9_nmi_en_MASK) + ((intr10_nmi_en<<GPIO_INTR_NMI_EN0_intr10_nmi_en_OFS)&GPIO_INTR_NMI_EN0_intr10_nmi_en_MASK) + ((intr11_nmi_en<<GPIO_INTR_NMI_EN0_intr11_nmi_en_OFS)&GPIO_INTR_NMI_EN0_intr11_nmi_en_MASK) + ((intr12_nmi_en<<GPIO_INTR_NMI_EN0_intr12_nmi_en_OFS)&GPIO_INTR_NMI_EN0_intr12_nmi_en_MASK) + ((intr13_nmi_en<<GPIO_INTR_NMI_EN0_intr13_nmi_en_OFS)&GPIO_INTR_NMI_EN0_intr13_nmi_en_MASK) + ((intr14_nmi_en<<GPIO_INTR_NMI_EN0_intr14_nmi_en_OFS)&GPIO_INTR_NMI_EN0_intr14_nmi_en_MASK) + ((intr15_nmi_en<<GPIO_INTR_NMI_EN0_intr15_nmi_en_OFS)&GPIO_INTR_NMI_EN0_intr15_nmi_en_MASK);
}

static inline void GPIO_INTR_NMI_EN1_WRITE(GPIO_REGS_s * registers, uint32_t intr16_nmi_en, uint32_t intr17_nmi_en, uint32_t intr18_nmi_en, uint32_t intr19_nmi_en, uint32_t intr20_nmi_en, uint32_t intr21_nmi_en, uint32_t intr22_nmi_en, uint32_t intr23_nmi_en, uint32_t intr24_nmi_en, uint32_t intr25_nmi_en, uint32_t intr26_nmi_en, uint32_t intr27_nmi_en, uint32_t intr28_nmi_en, uint32_t intr29_nmi_en, uint32_t intr30_nmi_en, uint32_t intr31_nmi_en) {
    registers->INTR_NMI_EN1.packed_w =  + ((intr16_nmi_en<<GPIO_INTR_NMI_EN1_intr16_nmi_en_OFS)&GPIO_INTR_NMI_EN1_intr16_nmi_en_MASK) + ((intr17_nmi_en<<GPIO_INTR_NMI_EN1_intr17_nmi_en_OFS)&GPIO_INTR_NMI_EN1_intr17_nmi_en_MASK) + ((intr18_nmi_en<<GPIO_INTR_NMI_EN1_intr18_nmi_en_OFS)&GPIO_INTR_NMI_EN1_intr18_nmi_en_MASK) + ((intr19_nmi_en<<GPIO_INTR_NMI_EN1_intr19_nmi_en_OFS)&GPIO_INTR_NMI_EN1_intr19_nmi_en_MASK) + ((intr20_nmi_en<<GPIO_INTR_NMI_EN1_intr20_nmi_en_OFS)&GPIO_INTR_NMI_EN1_intr20_nmi_en_MASK) + ((intr21_nmi_en<<GPIO_INTR_NMI_EN1_intr21_nmi_en_OFS)&GPIO_INTR_NMI_EN1_intr21_nmi_en_MASK) + ((intr22_nmi_en<<GPIO_INTR_NMI_EN1_intr22_nmi_en_OFS)&GPIO_INTR_NMI_EN1_intr22_nmi_en_MASK) + ((intr23_nmi_en<<GPIO_INTR_NMI_EN1_intr23_nmi_en_OFS)&GPIO_INTR_NMI_EN1_intr23_nmi_en_MASK) + ((intr24_nmi_en<<GPIO_INTR_NMI_EN1_intr24_nmi_en_OFS)&GPIO_INTR_NMI_EN1_intr24_nmi_en_MASK) + ((intr25_nmi_en<<GPIO_INTR_NMI_EN1_intr25_nmi_en_OFS)&GPIO_INTR_NMI_EN1_intr25_nmi_en_MASK) + ((intr26_nmi_en<<GPIO_INTR_NMI_EN1_intr26_nmi_en_OFS)&GPIO_INTR_NMI_EN1_intr26_nmi_en_MASK) + ((intr27_nmi_en<<GPIO_INTR_NMI_EN1_intr27_nmi_en_OFS)&GPIO_INTR_NMI_EN1_intr27_nmi_en_MASK) + ((intr28_nmi_en<<GPIO_INTR_NMI_EN1_intr28_nmi_en_OFS)&GPIO_INTR_NMI_EN1_intr28_nmi_en_MASK) + ((intr29_nmi_en<<GPIO_INTR_NMI_EN1_intr29_nmi_en_OFS)&GPIO_INTR_NMI_EN1_intr29_nmi_en_MASK) + ((intr30_nmi_en<<GPIO_INTR_NMI_EN1_intr30_nmi_en_OFS)&GPIO_INTR_NMI_EN1_intr30_nmi_en_MASK) + ((intr31_nmi_en<<GPIO_INTR_NMI_EN1_intr31_nmi_en_OFS)&GPIO_INTR_NMI_EN1_intr31_nmi_en_MASK);
}

static inline void GPIO_EVENT_EN0_WRITE(GPIO_REGS_s * registers, uint32_t intr0_event_en, uint32_t intr1_event_en, uint32_t intr2_event_en, uint32_t intr3_event_en, uint32_t intr4_event_en, uint32_t intr5_event_en, uint32_t intr6_event_en, uint32_t intr7_event_en, uint32_t intr8_event_en, uint32_t intr9_event_en, uint32_t intr10_event_en, uint32_t intr11_event_en, uint32_t intr12_event_en, uint32_t intr13_event_en, uint32_t intr14_event_en, uint32_t intr15_event_en) {
    registers->EVENT_EN0.packed_w =  + ((intr0_event_en<<GPIO_EVENT_EN0_intr0_event_en_OFS)&GPIO_EVENT_EN0_intr0_event_en_MASK) + ((intr1_event_en<<GPIO_EVENT_EN0_intr1_event_en_OFS)&GPIO_EVENT_EN0_intr1_event_en_MASK) + ((intr2_event_en<<GPIO_EVENT_EN0_intr2_event_en_OFS)&GPIO_EVENT_EN0_intr2_event_en_MASK) + ((intr3_event_en<<GPIO_EVENT_EN0_intr3_event_en_OFS)&GPIO_EVENT_EN0_intr3_event_en_MASK) + ((intr4_event_en<<GPIO_EVENT_EN0_intr4_event_en_OFS)&GPIO_EVENT_EN0_intr4_event_en_MASK) + ((intr5_event_en<<GPIO_EVENT_EN0_intr5_event_en_OFS)&GPIO_EVENT_EN0_intr5_event_en_MASK) + ((intr6_event_en<<GPIO_EVENT_EN0_intr6_event_en_OFS)&GPIO_EVENT_EN0_intr6_event_en_MASK) + ((intr7_event_en<<GPIO_EVENT_EN0_intr7_event_en_OFS)&GPIO_EVENT_EN0_intr7_event_en_MASK) + ((intr8_event_en<<GPIO_EVENT_EN0_intr8_event_en_OFS)&GPIO_EVENT_EN0_intr8_event_en_MASK) + ((intr9_event_en<<GPIO_EVENT_EN0_intr9_event_en_OFS)&GPIO_EVENT_EN0_intr9_event_en_MASK) + ((intr10_event_en<<GPIO_EVENT_EN0_intr10_event_en_OFS)&GPIO_EVENT_EN0_intr10_event_en_MASK) + ((intr11_event_en<<GPIO_EVENT_EN0_intr11_event_en_OFS)&GPIO_EVENT_EN0_intr11_event_en_MASK) + ((intr12_event_en<<GPIO_EVENT_EN0_intr12_event_en_OFS)&GPIO_EVENT_EN0_intr12_event_en_MASK) + ((intr13_event_en<<GPIO_EVENT_EN0_intr13_event_en_OFS)&GPIO_EVENT_EN0_intr13_event_en_MASK) + ((intr14_event_en<<GPIO_EVENT_EN0_intr14_event_en_OFS)&GPIO_EVENT_EN0_intr14_event_en_MASK) + ((intr15_event_en<<GPIO_EVENT_EN0_intr15_event_en_OFS)&GPIO_EVENT_EN0_intr15_event_en_MASK);
}

static inline void GPIO_EVENT_EN1_WRITE(GPIO_REGS_s * registers, uint32_t intr16_event_en, uint32_t intr17_event_en, uint32_t intr18_event_en, uint32_t intr19_event_en, uint32_t intr20_event_en, uint32_t intr21_event_en, uint32_t intr22_event_en, uint32_t intr23_event_en, uint32_t intr24_event_en, uint32_t intr25_event_en, uint32_t intr26_event_en, uint32_t intr27_event_en, uint32_t intr28_event_en, uint32_t intr29_event_en, uint32_t intr30_event_en, uint32_t intr31_event_en) {
    registers->EVENT_EN1.packed_w =  + ((intr16_event_en<<GPIO_EVENT_EN1_intr16_event_en_OFS)&GPIO_EVENT_EN1_intr16_event_en_MASK) + ((intr17_event_en<<GPIO_EVENT_EN1_intr17_event_en_OFS)&GPIO_EVENT_EN1_intr17_event_en_MASK) + ((intr18_event_en<<GPIO_EVENT_EN1_intr18_event_en_OFS)&GPIO_EVENT_EN1_intr18_event_en_MASK) + ((intr19_event_en<<GPIO_EVENT_EN1_intr19_event_en_OFS)&GPIO_EVENT_EN1_intr19_event_en_MASK) + ((intr20_event_en<<GPIO_EVENT_EN1_intr20_event_en_OFS)&GPIO_EVENT_EN1_intr20_event_en_MASK) + ((intr21_event_en<<GPIO_EVENT_EN1_intr21_event_en_OFS)&GPIO_EVENT_EN1_intr21_event_en_MASK) + ((intr22_event_en<<GPIO_EVENT_EN1_intr22_event_en_OFS)&GPIO_EVENT_EN1_intr22_event_en_MASK) + ((intr23_event_en<<GPIO_EVENT_EN1_intr23_event_en_OFS)&GPIO_EVENT_EN1_intr23_event_en_MASK) + ((intr24_event_en<<GPIO_EVENT_EN1_intr24_event_en_OFS)&GPIO_EVENT_EN1_intr24_event_en_MASK) + ((intr25_event_en<<GPIO_EVENT_EN1_intr25_event_en_OFS)&GPIO_EVENT_EN1_intr25_event_en_MASK) + ((intr26_event_en<<GPIO_EVENT_EN1_intr26_event_en_OFS)&GPIO_EVENT_EN1_intr26_event_en_MASK) + ((intr27_event_en<<GPIO_EVENT_EN1_intr27_event_en_OFS)&GPIO_EVENT_EN1_intr27_event_en_MASK) + ((intr28_event_en<<GPIO_EVENT_EN1_intr28_event_en_OFS)&GPIO_EVENT_EN1_intr28_event_en_MASK) + ((intr29_event_en<<GPIO_EVENT_EN1_intr29_event_en_OFS)&GPIO_EVENT_EN1_intr29_event_en_MASK) + ((intr30_event_en<<GPIO_EVENT_EN1_intr30_event_en_OFS)&GPIO_EVENT_EN1_intr30_event_en_MASK) + ((intr31_event_en<<GPIO_EVENT_EN1_intr31_event_en_OFS)&GPIO_EVENT_EN1_intr31_event_en_MASK);
}

static inline void GPIO_INTR_SW_SET_WRITE(GPIO_REGS_s * registers, uint32_t intr0_sw_set, uint32_t intr1_sw_set, uint32_t intr2_sw_set, uint32_t intr3_sw_set, uint32_t intr4_sw_set, uint32_t intr5_sw_set, uint32_t intr6_sw_set, uint32_t intr7_sw_set, uint32_t intr8_sw_set, uint32_t intr9_sw_set, uint32_t intr10_sw_set, uint32_t intr11_sw_set, uint32_t intr12_sw_set, uint32_t intr13_sw_set, uint32_t intr14_sw_set, uint32_t intr15_sw_set, uint32_t intr16_sw_set, uint32_t intr17_sw_set, uint32_t intr18_sw_set, uint32_t intr19_sw_set, uint32_t intr20_sw_set, uint32_t intr21_sw_set, uint32_t intr22_sw_set, uint32_t intr23_sw_set, uint32_t intr24_sw_set, uint32_t intr25_sw_set, uint32_t intr26_sw_set, uint32_t intr27_sw_set, uint32_t intr28_sw_set, uint32_t intr29_sw_set, uint32_t intr30_sw_set, uint32_t intr31_sw_set) {
    registers->INTR_SW_SET.packed_w =  + ((intr0_sw_set<<GPIO_INTR_SW_SET_intr0_sw_set_OFS)&GPIO_INTR_SW_SET_intr0_sw_set_MASK) + ((intr1_sw_set<<GPIO_INTR_SW_SET_intr1_sw_set_OFS)&GPIO_INTR_SW_SET_intr1_sw_set_MASK) + ((intr2_sw_set<<GPIO_INTR_SW_SET_intr2_sw_set_OFS)&GPIO_INTR_SW_SET_intr2_sw_set_MASK) + ((intr3_sw_set<<GPIO_INTR_SW_SET_intr3_sw_set_OFS)&GPIO_INTR_SW_SET_intr3_sw_set_MASK) + ((intr4_sw_set<<GPIO_INTR_SW_SET_intr4_sw_set_OFS)&GPIO_INTR_SW_SET_intr4_sw_set_MASK) + ((intr5_sw_set<<GPIO_INTR_SW_SET_intr5_sw_set_OFS)&GPIO_INTR_SW_SET_intr5_sw_set_MASK) + ((intr6_sw_set<<GPIO_INTR_SW_SET_intr6_sw_set_OFS)&GPIO_INTR_SW_SET_intr6_sw_set_MASK) + ((intr7_sw_set<<GPIO_INTR_SW_SET_intr7_sw_set_OFS)&GPIO_INTR_SW_SET_intr7_sw_set_MASK) + ((intr8_sw_set<<GPIO_INTR_SW_SET_intr8_sw_set_OFS)&GPIO_INTR_SW_SET_intr8_sw_set_MASK) + ((intr9_sw_set<<GPIO_INTR_SW_SET_intr9_sw_set_OFS)&GPIO_INTR_SW_SET_intr9_sw_set_MASK) + ((intr10_sw_set<<GPIO_INTR_SW_SET_intr10_sw_set_OFS)&GPIO_INTR_SW_SET_intr10_sw_set_MASK) + ((intr11_sw_set<<GPIO_INTR_SW_SET_intr11_sw_set_OFS)&GPIO_INTR_SW_SET_intr11_sw_set_MASK) + ((intr12_sw_set<<GPIO_INTR_SW_SET_intr12_sw_set_OFS)&GPIO_INTR_SW_SET_intr12_sw_set_MASK) + ((intr13_sw_set<<GPIO_INTR_SW_SET_intr13_sw_set_OFS)&GPIO_INTR_SW_SET_intr13_sw_set_MASK) + ((intr14_sw_set<<GPIO_INTR_SW_SET_intr14_sw_set_OFS)&GPIO_INTR_SW_SET_intr14_sw_set_MASK) + ((intr15_sw_set<<GPIO_INTR_SW_SET_intr15_sw_set_OFS)&GPIO_INTR_SW_SET_intr15_sw_set_MASK) + ((intr16_sw_set<<GPIO_INTR_SW_SET_intr16_sw_set_OFS)&GPIO_INTR_SW_SET_intr16_sw_set_MASK) + ((intr17_sw_set<<GPIO_INTR_SW_SET_intr17_sw_set_OFS)&GPIO_INTR_SW_SET_intr17_sw_set_MASK) + ((intr18_sw_set<<GPIO_INTR_SW_SET_intr18_sw_set_OFS)&GPIO_INTR_SW_SET_intr18_sw_set_MASK) + ((intr19_sw_set<<GPIO_INTR_SW_SET_intr19_sw_set_OFS)&GPIO_INTR_SW_SET_intr19_sw_set_MASK) + ((intr20_sw_set<<GPIO_INTR_SW_SET_intr20_sw_set_OFS)&GPIO_INTR_SW_SET_intr20_sw_set_MASK) + ((intr21_sw_set<<GPIO_INTR_SW_SET_intr21_sw_set_OFS)&GPIO_INTR_SW_SET_intr21_sw_set_MASK) + ((intr22_sw_set<<GPIO_INTR_SW_SET_intr22_sw_set_OFS)&GPIO_INTR_SW_SET_intr22_sw_set_MASK) + ((intr23_sw_set<<GPIO_INTR_SW_SET_intr23_sw_set_OFS)&GPIO_INTR_SW_SET_intr23_sw_set_MASK) + ((intr24_sw_set<<GPIO_INTR_SW_SET_intr24_sw_set_OFS)&GPIO_INTR_SW_SET_intr24_sw_set_MASK) + ((intr25_sw_set<<GPIO_INTR_SW_SET_intr25_sw_set_OFS)&GPIO_INTR_SW_SET_intr25_sw_set_MASK) + ((intr26_sw_set<<GPIO_INTR_SW_SET_intr26_sw_set_OFS)&GPIO_INTR_SW_SET_intr26_sw_set_MASK) + ((intr27_sw_set<<GPIO_INTR_SW_SET_intr27_sw_set_OFS)&GPIO_INTR_SW_SET_intr27_sw_set_MASK) + ((intr28_sw_set<<GPIO_INTR_SW_SET_intr28_sw_set_OFS)&GPIO_INTR_SW_SET_intr28_sw_set_MASK) + ((intr29_sw_set<<GPIO_INTR_SW_SET_intr29_sw_set_OFS)&GPIO_INTR_SW_SET_intr29_sw_set_MASK) + ((intr30_sw_set<<GPIO_INTR_SW_SET_intr30_sw_set_OFS)&GPIO_INTR_SW_SET_intr30_sw_set_MASK) + ((intr31_sw_set<<GPIO_INTR_SW_SET_intr31_sw_set_OFS)&GPIO_INTR_SW_SET_intr31_sw_set_MASK);
}

static inline void GPIO_DOUT_3_0_WRITE(GPIO_REGS_s * registers, uint32_t dout_0, uint32_t dout_1, uint32_t dout_2, uint32_t dout_3) {
    registers->DOUT_3_0.packed_w =  + ((dout_0<<GPIO_DOUT_3_0_dout_0_OFS)&GPIO_DOUT_3_0_dout_0_MASK) + ((dout_1<<GPIO_DOUT_3_0_dout_1_OFS)&GPIO_DOUT_3_0_dout_1_MASK) + ((dout_2<<GPIO_DOUT_3_0_dout_2_OFS)&GPIO_DOUT_3_0_dout_2_MASK) + ((dout_3<<GPIO_DOUT_3_0_dout_3_OFS)&GPIO_DOUT_3_0_dout_3_MASK);
}

static inline void GPIO_DOUT_7_4_WRITE(GPIO_REGS_s * registers, uint32_t dout_4, uint32_t dout_5, uint32_t dout_6, uint32_t dout_7) {
    registers->DOUT_7_4.packed_w =  + ((dout_4<<GPIO_DOUT_7_4_dout_4_OFS)&GPIO_DOUT_7_4_dout_4_MASK) + ((dout_5<<GPIO_DOUT_7_4_dout_5_OFS)&GPIO_DOUT_7_4_dout_5_MASK) + ((dout_6<<GPIO_DOUT_7_4_dout_6_OFS)&GPIO_DOUT_7_4_dout_6_MASK) + ((dout_7<<GPIO_DOUT_7_4_dout_7_OFS)&GPIO_DOUT_7_4_dout_7_MASK);
}

static inline void GPIO_DOUT_11_8_WRITE(GPIO_REGS_s * registers, uint32_t dout_8, uint32_t dout_9, uint32_t dout_10, uint32_t dout_11) {
    registers->DOUT_11_8.packed_w =  + ((dout_8<<GPIO_DOUT_11_8_dout_8_OFS)&GPIO_DOUT_11_8_dout_8_MASK) + ((dout_9<<GPIO_DOUT_11_8_dout_9_OFS)&GPIO_DOUT_11_8_dout_9_MASK) + ((dout_10<<GPIO_DOUT_11_8_dout_10_OFS)&GPIO_DOUT_11_8_dout_10_MASK) + ((dout_11<<GPIO_DOUT_11_8_dout_11_OFS)&GPIO_DOUT_11_8_dout_11_MASK);
}

static inline void GPIO_DOUT_15_12_WRITE(GPIO_REGS_s * registers, uint32_t dout_12, uint32_t dout_13, uint32_t dout_14, uint32_t dout_15) {
    registers->DOUT_15_12.packed_w =  + ((dout_12<<GPIO_DOUT_15_12_dout_12_OFS)&GPIO_DOUT_15_12_dout_12_MASK) + ((dout_13<<GPIO_DOUT_15_12_dout_13_OFS)&GPIO_DOUT_15_12_dout_13_MASK) + ((dout_14<<GPIO_DOUT_15_12_dout_14_OFS)&GPIO_DOUT_15_12_dout_14_MASK) + ((dout_15<<GPIO_DOUT_15_12_dout_15_OFS)&GPIO_DOUT_15_12_dout_15_MASK);
}

static inline void GPIO_DOUT_19_16_WRITE(GPIO_REGS_s * registers, uint32_t dout_16, uint32_t dout_17, uint32_t dout_18, uint32_t dout_19) {
    registers->DOUT_19_16.packed_w =  + ((dout_16<<GPIO_DOUT_19_16_dout_16_OFS)&GPIO_DOUT_19_16_dout_16_MASK) + ((dout_17<<GPIO_DOUT_19_16_dout_17_OFS)&GPIO_DOUT_19_16_dout_17_MASK) + ((dout_18<<GPIO_DOUT_19_16_dout_18_OFS)&GPIO_DOUT_19_16_dout_18_MASK) + ((dout_19<<GPIO_DOUT_19_16_dout_19_OFS)&GPIO_DOUT_19_16_dout_19_MASK);
}

static inline void GPIO_DOUT_23_20_WRITE(GPIO_REGS_s * registers, uint32_t dout_20, uint32_t dout_21, uint32_t dout_22, uint32_t dout_23) {
    registers->DOUT_23_20.packed_w =  + ((dout_20<<GPIO_DOUT_23_20_dout_20_OFS)&GPIO_DOUT_23_20_dout_20_MASK) + ((dout_21<<GPIO_DOUT_23_20_dout_21_OFS)&GPIO_DOUT_23_20_dout_21_MASK) + ((dout_22<<GPIO_DOUT_23_20_dout_22_OFS)&GPIO_DOUT_23_20_dout_22_MASK) + ((dout_23<<GPIO_DOUT_23_20_dout_23_OFS)&GPIO_DOUT_23_20_dout_23_MASK);
}

static inline void GPIO_DOUT_27_24_WRITE(GPIO_REGS_s * registers, uint32_t dout_24, uint32_t dout_25, uint32_t dout_26, uint32_t dout_27) {
    registers->DOUT_27_24.packed_w =  + ((dout_24<<GPIO_DOUT_27_24_dout_24_OFS)&GPIO_DOUT_27_24_dout_24_MASK) + ((dout_25<<GPIO_DOUT_27_24_dout_25_OFS)&GPIO_DOUT_27_24_dout_25_MASK) + ((dout_26<<GPIO_DOUT_27_24_dout_26_OFS)&GPIO_DOUT_27_24_dout_26_MASK) + ((dout_27<<GPIO_DOUT_27_24_dout_27_OFS)&GPIO_DOUT_27_24_dout_27_MASK);
}

static inline void GPIO_DOUT_31_28_WRITE(GPIO_REGS_s * registers, uint32_t dout_28, uint32_t dout_29, uint32_t dout_30, uint32_t dout_31) {
    registers->DOUT_31_28.packed_w =  + ((dout_28<<GPIO_DOUT_31_28_dout_28_OFS)&GPIO_DOUT_31_28_dout_28_MASK) + ((dout_29<<GPIO_DOUT_31_28_dout_29_OFS)&GPIO_DOUT_31_28_dout_29_MASK) + ((dout_30<<GPIO_DOUT_31_28_dout_30_OFS)&GPIO_DOUT_31_28_dout_30_MASK) + ((dout_31<<GPIO_DOUT_31_28_dout_31_OFS)&GPIO_DOUT_31_28_dout_31_MASK);
}

static inline void GPIO_DOUT_WRITE(GPIO_REGS_s * registers, uint32_t dout) {
    registers->DOUT.packed_w =  + ((dout<<GPIO_DOUT_dout_OFS)&GPIO_DOUT_dout_MASK);
}

static inline void GPIO_DOUT_SET_WRITE(GPIO_REGS_s * registers, uint32_t dout_set) {
    registers->DOUT_SET.packed_w =  + ((dout_set<<GPIO_DOUT_SET_dout_set_OFS)&GPIO_DOUT_SET_dout_set_MASK);
}

static inline void GPIO_DOUT_CLR_WRITE(GPIO_REGS_s * registers, uint32_t dout_clr) {
    registers->DOUT_CLR.packed_w =  + ((dout_clr<<GPIO_DOUT_CLR_dout_clr_OFS)&GPIO_DOUT_CLR_dout_clr_MASK);
}

static inline void GPIO_DOUT_TGL_WRITE(GPIO_REGS_s * registers, uint32_t dout_tgl) {
    registers->DOUT_TGL.packed_w =  + ((dout_tgl<<GPIO_DOUT_TGL_dout_tgl_OFS)&GPIO_DOUT_TGL_dout_tgl_MASK);
}

static inline void GPIO_DOUT_EN_WRITE(GPIO_REGS_s * registers, uint32_t dout_en) {
    registers->DOUT_EN.packed_w =  + ((dout_en<<GPIO_DOUT_EN_dout_en_OFS)&GPIO_DOUT_EN_dout_en_MASK);
}

static inline void GPIO_DOUT_EN_SET_WRITE(GPIO_REGS_s * registers, uint32_t dout_en_set) {
    registers->DOUT_EN_SET.packed_w =  + ((dout_en_set<<GPIO_DOUT_EN_SET_dout_en_set_OFS)&GPIO_DOUT_EN_SET_dout_en_set_MASK);
}

static inline void GPIO_DOUT_EN_CLR_WRITE(GPIO_REGS_s * registers, uint32_t dout_en_clr) {
    registers->DOUT_EN_CLR.packed_w =  + ((dout_en_clr<<GPIO_DOUT_EN_CLR_dout_en_clr_OFS)&GPIO_DOUT_EN_CLR_dout_en_clr_MASK);
}

static inline void GPIO_DIN_3_0_WRITE(GPIO_REGS_s * registers, uint32_t din_0, uint32_t din_1, uint32_t din_2, uint32_t din_3) {
    registers->DIN_3_0.packed_w =  + ((din_0<<GPIO_DIN_3_0_din_0_OFS)&GPIO_DIN_3_0_din_0_MASK) + ((din_1<<GPIO_DIN_3_0_din_1_OFS)&GPIO_DIN_3_0_din_1_MASK) + ((din_2<<GPIO_DIN_3_0_din_2_OFS)&GPIO_DIN_3_0_din_2_MASK) + ((din_3<<GPIO_DIN_3_0_din_3_OFS)&GPIO_DIN_3_0_din_3_MASK);
}

static inline void GPIO_DIN_7_4_WRITE(GPIO_REGS_s * registers, uint32_t din_4, uint32_t din_5, uint32_t din_6, uint32_t din_7) {
    registers->DIN_7_4.packed_w =  + ((din_4<<GPIO_DIN_7_4_din_4_OFS)&GPIO_DIN_7_4_din_4_MASK) + ((din_5<<GPIO_DIN_7_4_din_5_OFS)&GPIO_DIN_7_4_din_5_MASK) + ((din_6<<GPIO_DIN_7_4_din_6_OFS)&GPIO_DIN_7_4_din_6_MASK) + ((din_7<<GPIO_DIN_7_4_din_7_OFS)&GPIO_DIN_7_4_din_7_MASK);
}

static inline void GPIO_DIN_11_8_WRITE(GPIO_REGS_s * registers, uint32_t din_8, uint32_t din_9, uint32_t din_10, uint32_t din_11) {
    registers->DIN_11_8.packed_w =  + ((din_8<<GPIO_DIN_11_8_din_8_OFS)&GPIO_DIN_11_8_din_8_MASK) + ((din_9<<GPIO_DIN_11_8_din_9_OFS)&GPIO_DIN_11_8_din_9_MASK) + ((din_10<<GPIO_DIN_11_8_din_10_OFS)&GPIO_DIN_11_8_din_10_MASK) + ((din_11<<GPIO_DIN_11_8_din_11_OFS)&GPIO_DIN_11_8_din_11_MASK);
}

static inline void GPIO_DIN_15_12_WRITE(GPIO_REGS_s * registers, uint32_t din_12, uint32_t din_13, uint32_t din_14, uint32_t din_15) {
    registers->DIN_15_12.packed_w =  + ((din_12<<GPIO_DIN_15_12_din_12_OFS)&GPIO_DIN_15_12_din_12_MASK) + ((din_13<<GPIO_DIN_15_12_din_13_OFS)&GPIO_DIN_15_12_din_13_MASK) + ((din_14<<GPIO_DIN_15_12_din_14_OFS)&GPIO_DIN_15_12_din_14_MASK) + ((din_15<<GPIO_DIN_15_12_din_15_OFS)&GPIO_DIN_15_12_din_15_MASK);
}

static inline void GPIO_DIN_19_16_WRITE(GPIO_REGS_s * registers, uint32_t din_16, uint32_t din_17, uint32_t din_18, uint32_t din_19) {
    registers->DIN_19_16.packed_w =  + ((din_16<<GPIO_DIN_19_16_din_16_OFS)&GPIO_DIN_19_16_din_16_MASK) + ((din_17<<GPIO_DIN_19_16_din_17_OFS)&GPIO_DIN_19_16_din_17_MASK) + ((din_18<<GPIO_DIN_19_16_din_18_OFS)&GPIO_DIN_19_16_din_18_MASK) + ((din_19<<GPIO_DIN_19_16_din_19_OFS)&GPIO_DIN_19_16_din_19_MASK);
}

static inline void GPIO_DIN_23_20_WRITE(GPIO_REGS_s * registers, uint32_t din_20, uint32_t din_21, uint32_t din_22, uint32_t din_23) {
    registers->DIN_23_20.packed_w =  + ((din_20<<GPIO_DIN_23_20_din_20_OFS)&GPIO_DIN_23_20_din_20_MASK) + ((din_21<<GPIO_DIN_23_20_din_21_OFS)&GPIO_DIN_23_20_din_21_MASK) + ((din_22<<GPIO_DIN_23_20_din_22_OFS)&GPIO_DIN_23_20_din_22_MASK) + ((din_23<<GPIO_DIN_23_20_din_23_OFS)&GPIO_DIN_23_20_din_23_MASK);
}

static inline void GPIO_DIN_27_24_WRITE(GPIO_REGS_s * registers, uint32_t din_24, uint32_t din_25, uint32_t din_26, uint32_t din_27) {
    registers->DIN_27_24.packed_w =  + ((din_24<<GPIO_DIN_27_24_din_24_OFS)&GPIO_DIN_27_24_din_24_MASK) + ((din_25<<GPIO_DIN_27_24_din_25_OFS)&GPIO_DIN_27_24_din_25_MASK) + ((din_26<<GPIO_DIN_27_24_din_26_OFS)&GPIO_DIN_27_24_din_26_MASK) + ((din_27<<GPIO_DIN_27_24_din_27_OFS)&GPIO_DIN_27_24_din_27_MASK);
}

static inline void GPIO_DIN_31_28_WRITE(GPIO_REGS_s * registers, uint32_t din_28, uint32_t din_29, uint32_t din_30, uint32_t din_31) {
    registers->DIN_31_28.packed_w =  + ((din_28<<GPIO_DIN_31_28_din_28_OFS)&GPIO_DIN_31_28_din_28_MASK) + ((din_29<<GPIO_DIN_31_28_din_29_OFS)&GPIO_DIN_31_28_din_29_MASK) + ((din_30<<GPIO_DIN_31_28_din_30_OFS)&GPIO_DIN_31_28_din_30_MASK) + ((din_31<<GPIO_DIN_31_28_din_31_OFS)&GPIO_DIN_31_28_din_31_MASK);
}

static inline void GPIO_DIN_WRITE(GPIO_REGS_s * registers, uint32_t din) {
    registers->DIN.packed_w =  + ((din<<GPIO_DIN_din_OFS)&GPIO_DIN_din_MASK);
}

static inline void GPIO_FILT_EN_0_WRITE(GPIO_REGS_s * registers, uint32_t filt_en_0, uint32_t filt_en_1, uint32_t filt_en_2, uint32_t filt_en_3, uint32_t filt_en_4, uint32_t filt_en_5, uint32_t filt_en_6, uint32_t filt_en_7, uint32_t filt_en_8, uint32_t filt_en_9, uint32_t filt_en_10, uint32_t filt_en_11, uint32_t filt_en_12, uint32_t filt_en_13, uint32_t filt_en_14, uint32_t filt_en_15) {
    registers->FILT_EN_0.packed_w =  + ((filt_en_0<<GPIO_FILT_EN_0_filt_en_0_OFS)&GPIO_FILT_EN_0_filt_en_0_MASK) + ((filt_en_1<<GPIO_FILT_EN_0_filt_en_1_OFS)&GPIO_FILT_EN_0_filt_en_1_MASK) + ((filt_en_2<<GPIO_FILT_EN_0_filt_en_2_OFS)&GPIO_FILT_EN_0_filt_en_2_MASK) + ((filt_en_3<<GPIO_FILT_EN_0_filt_en_3_OFS)&GPIO_FILT_EN_0_filt_en_3_MASK) + ((filt_en_4<<GPIO_FILT_EN_0_filt_en_4_OFS)&GPIO_FILT_EN_0_filt_en_4_MASK) + ((filt_en_5<<GPIO_FILT_EN_0_filt_en_5_OFS)&GPIO_FILT_EN_0_filt_en_5_MASK) + ((filt_en_6<<GPIO_FILT_EN_0_filt_en_6_OFS)&GPIO_FILT_EN_0_filt_en_6_MASK) + ((filt_en_7<<GPIO_FILT_EN_0_filt_en_7_OFS)&GPIO_FILT_EN_0_filt_en_7_MASK) + ((filt_en_8<<GPIO_FILT_EN_0_filt_en_8_OFS)&GPIO_FILT_EN_0_filt_en_8_MASK) + ((filt_en_9<<GPIO_FILT_EN_0_filt_en_9_OFS)&GPIO_FILT_EN_0_filt_en_9_MASK) + ((filt_en_10<<GPIO_FILT_EN_0_filt_en_10_OFS)&GPIO_FILT_EN_0_filt_en_10_MASK) + ((filt_en_11<<GPIO_FILT_EN_0_filt_en_11_OFS)&GPIO_FILT_EN_0_filt_en_11_MASK) + ((filt_en_12<<GPIO_FILT_EN_0_filt_en_12_OFS)&GPIO_FILT_EN_0_filt_en_12_MASK) + ((filt_en_13<<GPIO_FILT_EN_0_filt_en_13_OFS)&GPIO_FILT_EN_0_filt_en_13_MASK) + ((filt_en_14<<GPIO_FILT_EN_0_filt_en_14_OFS)&GPIO_FILT_EN_0_filt_en_14_MASK) + ((filt_en_15<<GPIO_FILT_EN_0_filt_en_15_OFS)&GPIO_FILT_EN_0_filt_en_15_MASK);
}

static inline void GPIO_FILT_EN_1_WRITE(GPIO_REGS_s * registers, uint32_t filt_en_16, uint32_t filt_en_17, uint32_t filt_en_18, uint32_t filt_en_19, uint32_t filt_en_20, uint32_t filt_en_21, uint32_t filt_en_22, uint32_t filt_en_23, uint32_t filt_en_24, uint32_t filt_en_25, uint32_t filt_en_26, uint32_t filt_en_27, uint32_t filt_en_28, uint32_t filt_en_29, uint32_t filt_en_30, uint32_t filt_en_31) {
    registers->FILT_EN_1.packed_w =  + ((filt_en_16<<GPIO_FILT_EN_1_filt_en_16_OFS)&GPIO_FILT_EN_1_filt_en_16_MASK) + ((filt_en_17<<GPIO_FILT_EN_1_filt_en_17_OFS)&GPIO_FILT_EN_1_filt_en_17_MASK) + ((filt_en_18<<GPIO_FILT_EN_1_filt_en_18_OFS)&GPIO_FILT_EN_1_filt_en_18_MASK) + ((filt_en_19<<GPIO_FILT_EN_1_filt_en_19_OFS)&GPIO_FILT_EN_1_filt_en_19_MASK) + ((filt_en_20<<GPIO_FILT_EN_1_filt_en_20_OFS)&GPIO_FILT_EN_1_filt_en_20_MASK) + ((filt_en_21<<GPIO_FILT_EN_1_filt_en_21_OFS)&GPIO_FILT_EN_1_filt_en_21_MASK) + ((filt_en_22<<GPIO_FILT_EN_1_filt_en_22_OFS)&GPIO_FILT_EN_1_filt_en_22_MASK) + ((filt_en_23<<GPIO_FILT_EN_1_filt_en_23_OFS)&GPIO_FILT_EN_1_filt_en_23_MASK) + ((filt_en_24<<GPIO_FILT_EN_1_filt_en_24_OFS)&GPIO_FILT_EN_1_filt_en_24_MASK) + ((filt_en_25<<GPIO_FILT_EN_1_filt_en_25_OFS)&GPIO_FILT_EN_1_filt_en_25_MASK) + ((filt_en_26<<GPIO_FILT_EN_1_filt_en_26_OFS)&GPIO_FILT_EN_1_filt_en_26_MASK) + ((filt_en_27<<GPIO_FILT_EN_1_filt_en_27_OFS)&GPIO_FILT_EN_1_filt_en_27_MASK) + ((filt_en_28<<GPIO_FILT_EN_1_filt_en_28_OFS)&GPIO_FILT_EN_1_filt_en_28_MASK) + ((filt_en_29<<GPIO_FILT_EN_1_filt_en_29_OFS)&GPIO_FILT_EN_1_filt_en_29_MASK) + ((filt_en_30<<GPIO_FILT_EN_1_filt_en_30_OFS)&GPIO_FILT_EN_1_filt_en_30_MASK) + ((filt_en_31<<GPIO_FILT_EN_1_filt_en_31_OFS)&GPIO_FILT_EN_1_filt_en_31_MASK);
}

static inline void GPIO_INTR_POL_0_WRITE(GPIO_REGS_s * registers, uint32_t intr_pol_0, uint32_t intr_pol_1, uint32_t intr_pol_2, uint32_t intr_pol_3, uint32_t intr_pol_4, uint32_t intr_pol_5, uint32_t intr_pol_6, uint32_t intr_pol_7, uint32_t intr_pol_8, uint32_t intr_pol_9, uint32_t intr_pol_10, uint32_t intr_pol_11, uint32_t intr_pol_12, uint32_t intr_pol_13, uint32_t intr_pol_14, uint32_t intr_pol_15) {
    registers->INTR_POL_0.packed_w =  + ((intr_pol_0<<GPIO_INTR_POL_0_intr_pol_0_OFS)&GPIO_INTR_POL_0_intr_pol_0_MASK) + ((intr_pol_1<<GPIO_INTR_POL_0_intr_pol_1_OFS)&GPIO_INTR_POL_0_intr_pol_1_MASK) + ((intr_pol_2<<GPIO_INTR_POL_0_intr_pol_2_OFS)&GPIO_INTR_POL_0_intr_pol_2_MASK) + ((intr_pol_3<<GPIO_INTR_POL_0_intr_pol_3_OFS)&GPIO_INTR_POL_0_intr_pol_3_MASK) + ((intr_pol_4<<GPIO_INTR_POL_0_intr_pol_4_OFS)&GPIO_INTR_POL_0_intr_pol_4_MASK) + ((intr_pol_5<<GPIO_INTR_POL_0_intr_pol_5_OFS)&GPIO_INTR_POL_0_intr_pol_5_MASK) + ((intr_pol_6<<GPIO_INTR_POL_0_intr_pol_6_OFS)&GPIO_INTR_POL_0_intr_pol_6_MASK) + ((intr_pol_7<<GPIO_INTR_POL_0_intr_pol_7_OFS)&GPIO_INTR_POL_0_intr_pol_7_MASK) + ((intr_pol_8<<GPIO_INTR_POL_0_intr_pol_8_OFS)&GPIO_INTR_POL_0_intr_pol_8_MASK) + ((intr_pol_9<<GPIO_INTR_POL_0_intr_pol_9_OFS)&GPIO_INTR_POL_0_intr_pol_9_MASK) + ((intr_pol_10<<GPIO_INTR_POL_0_intr_pol_10_OFS)&GPIO_INTR_POL_0_intr_pol_10_MASK) + ((intr_pol_11<<GPIO_INTR_POL_0_intr_pol_11_OFS)&GPIO_INTR_POL_0_intr_pol_11_MASK) + ((intr_pol_12<<GPIO_INTR_POL_0_intr_pol_12_OFS)&GPIO_INTR_POL_0_intr_pol_12_MASK) + ((intr_pol_13<<GPIO_INTR_POL_0_intr_pol_13_OFS)&GPIO_INTR_POL_0_intr_pol_13_MASK) + ((intr_pol_14<<GPIO_INTR_POL_0_intr_pol_14_OFS)&GPIO_INTR_POL_0_intr_pol_14_MASK) + ((intr_pol_15<<GPIO_INTR_POL_0_intr_pol_15_OFS)&GPIO_INTR_POL_0_intr_pol_15_MASK);
}

static inline void GPIO_INTR_POL_1_WRITE(GPIO_REGS_s * registers, uint32_t intr_pol_16, uint32_t intr_pol_17, uint32_t intr_pol_18, uint32_t intr_pol_19, uint32_t intr_pol_20, uint32_t intr_pol_21, uint32_t intr_pol_22, uint32_t intr_pol_23, uint32_t intr_pol_24, uint32_t intr_pol_25, uint32_t intr_pol_26, uint32_t intr_pol_27, uint32_t intr_pol_28, uint32_t intr_pol_29, uint32_t intr_pol_30, uint32_t intr_pol_31) {
    registers->INTR_POL_1.packed_w =  + ((intr_pol_16<<GPIO_INTR_POL_1_intr_pol_16_OFS)&GPIO_INTR_POL_1_intr_pol_16_MASK) + ((intr_pol_17<<GPIO_INTR_POL_1_intr_pol_17_OFS)&GPIO_INTR_POL_1_intr_pol_17_MASK) + ((intr_pol_18<<GPIO_INTR_POL_1_intr_pol_18_OFS)&GPIO_INTR_POL_1_intr_pol_18_MASK) + ((intr_pol_19<<GPIO_INTR_POL_1_intr_pol_19_OFS)&GPIO_INTR_POL_1_intr_pol_19_MASK) + ((intr_pol_20<<GPIO_INTR_POL_1_intr_pol_20_OFS)&GPIO_INTR_POL_1_intr_pol_20_MASK) + ((intr_pol_21<<GPIO_INTR_POL_1_intr_pol_21_OFS)&GPIO_INTR_POL_1_intr_pol_21_MASK) + ((intr_pol_22<<GPIO_INTR_POL_1_intr_pol_22_OFS)&GPIO_INTR_POL_1_intr_pol_22_MASK) + ((intr_pol_23<<GPIO_INTR_POL_1_intr_pol_23_OFS)&GPIO_INTR_POL_1_intr_pol_23_MASK) + ((intr_pol_24<<GPIO_INTR_POL_1_intr_pol_24_OFS)&GPIO_INTR_POL_1_intr_pol_24_MASK) + ((intr_pol_25<<GPIO_INTR_POL_1_intr_pol_25_OFS)&GPIO_INTR_POL_1_intr_pol_25_MASK) + ((intr_pol_26<<GPIO_INTR_POL_1_intr_pol_26_OFS)&GPIO_INTR_POL_1_intr_pol_26_MASK) + ((intr_pol_27<<GPIO_INTR_POL_1_intr_pol_27_OFS)&GPIO_INTR_POL_1_intr_pol_27_MASK) + ((intr_pol_28<<GPIO_INTR_POL_1_intr_pol_28_OFS)&GPIO_INTR_POL_1_intr_pol_28_MASK) + ((intr_pol_29<<GPIO_INTR_POL_1_intr_pol_29_OFS)&GPIO_INTR_POL_1_intr_pol_29_MASK) + ((intr_pol_30<<GPIO_INTR_POL_1_intr_pol_30_OFS)&GPIO_INTR_POL_1_intr_pol_30_MASK) + ((intr_pol_31<<GPIO_INTR_POL_1_intr_pol_31_OFS)&GPIO_INTR_POL_1_intr_pol_31_MASK);
}

static inline void GPIO_SUB_CFG_0_WRITE(GPIO_REGS_s * registers, uint32_t sub_en, uint32_t action, uint32_t bit_num) {
    registers->SUB_CFG_0.packed_w =  + ((sub_en<<GPIO_SUB_CFG_0_sub_en_OFS)&GPIO_SUB_CFG_0_sub_en_MASK) + ((action<<GPIO_SUB_CFG_0_action_OFS)&GPIO_SUB_CFG_0_action_MASK) + ((bit_num<<GPIO_SUB_CFG_0_bit_num_OFS)&GPIO_SUB_CFG_0_bit_num_MASK);
}

static inline void GPIO_SUB_CFG_1_WRITE(GPIO_REGS_s * registers, uint32_t sub_en, uint32_t action, uint32_t bit_num) {
    registers->SUB_CFG_1.packed_w =  + ((sub_en<<GPIO_SUB_CFG_1_sub_en_OFS)&GPIO_SUB_CFG_1_sub_en_MASK) + ((action<<GPIO_SUB_CFG_1_action_OFS)&GPIO_SUB_CFG_1_action_MASK) + ((bit_num<<GPIO_SUB_CFG_1_bit_num_OFS)&GPIO_SUB_CFG_1_bit_num_MASK);
}

static inline void GPIO_DMA_WR_MASK_WRITE(GPIO_REGS_s * registers, uint32_t dma_wr_mask) {
    registers->DMA_WR_MASK.packed_w =  + ((dma_wr_mask<<GPIO_DMA_WR_MASK_dma_wr_mask_OFS)&GPIO_DMA_WR_MASK_dma_wr_mask_MASK);
}

