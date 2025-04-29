#include "GPIO_REGS.h"

static inline void GPIO_DESC_WRITE(GPIO_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<GPIO_DESC_MODULE_TYPE_OFS)&GPIO_DESC_MODULE_TYPE_MASK) + ((modue_subtype<<GPIO_DESC_MODUE_SUBTYPE_OFS)&GPIO_DESC_MODUE_SUBTYPE_MASK) + ((major_rev<<GPIO_DESC_MAJOR_REV_OFS)&GPIO_DESC_MAJOR_REV_MASK) + ((minor_rev<<GPIO_DESC_MINOR_REV_OFS)&GPIO_DESC_MINOR_REV_MASK);
}

static inline void GPIO_PWR_EN_WRITE(GPIO_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<GPIO_PWR_EN_PWR_EN_OFS)&GPIO_PWR_EN_PWR_EN_MASK) + ((pwr_en_key<<GPIO_PWR_EN_PWR_EN_KEY_OFS)&GPIO_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void GPIO_RST_CTRL_WRITE(GPIO_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<GPIO_RST_CTRL_RST_OFS)&GPIO_RST_CTRL_RST_MASK) + ((rst_sts_clr<<GPIO_RST_CTRL_RST_STS_CLR_OFS)&GPIO_RST_CTRL_RST_STS_CLR_MASK) + ((rst_key<<GPIO_RST_CTRL_RST_KEY_OFS)&GPIO_RST_CTRL_RST_KEY_MASK);
}

static inline void GPIO_RST_STS_WRITE(GPIO_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<GPIO_RST_STS_RST_STS_OFS)&GPIO_RST_STS_RST_STS_MASK);
}

static inline void GPIO_CLK_CTRL_WRITE(GPIO_REGS_s * registers, uint32_t en_async_clk_req) {
    registers->CLK_CTRL.packed_w =  + ((en_async_clk_req<<GPIO_CLK_CTRL_EN_ASYNC_CLK_REQ_OFS)&GPIO_CLK_CTRL_EN_ASYNC_CLK_REQ_MASK);
}

static inline void GPIO_INTR_STS_WRITE(GPIO_REGS_s * registers, uint32_t intr_first) {
    registers->INTR_STS.packed_w =  + ((intr_first<<GPIO_INTR_STS_INTR_FIRST_OFS)&GPIO_INTR_STS_INTR_FIRST_MASK);
}

static inline void GPIO_INTR_EVENT_WRITE(GPIO_REGS_s * registers, uint32_t intr0, uint32_t intr1, uint32_t intr2, uint32_t intr3, uint32_t intr4, uint32_t intr5, uint32_t intr6, uint32_t intr7, uint32_t intr8, uint32_t intr9, uint32_t intr10, uint32_t intr11, uint32_t intr12, uint32_t intr13, uint32_t intr14, uint32_t intr15, uint32_t intr16, uint32_t intr17, uint32_t intr18, uint32_t intr19, uint32_t intr20, uint32_t intr21, uint32_t intr22, uint32_t intr23, uint32_t intr24, uint32_t intr25, uint32_t intr26, uint32_t intr27, uint32_t intr28, uint32_t intr29, uint32_t intr30, uint32_t intr31) {
    registers->INTR_EVENT.packed_w =  + ((intr0<<GPIO_INTR_EVENT_INTR0_OFS)&GPIO_INTR_EVENT_INTR0_MASK) + ((intr1<<GPIO_INTR_EVENT_INTR1_OFS)&GPIO_INTR_EVENT_INTR1_MASK) + ((intr2<<GPIO_INTR_EVENT_INTR2_OFS)&GPIO_INTR_EVENT_INTR2_MASK) + ((intr3<<GPIO_INTR_EVENT_INTR3_OFS)&GPIO_INTR_EVENT_INTR3_MASK) + ((intr4<<GPIO_INTR_EVENT_INTR4_OFS)&GPIO_INTR_EVENT_INTR4_MASK) + ((intr5<<GPIO_INTR_EVENT_INTR5_OFS)&GPIO_INTR_EVENT_INTR5_MASK) + ((intr6<<GPIO_INTR_EVENT_INTR6_OFS)&GPIO_INTR_EVENT_INTR6_MASK) + ((intr7<<GPIO_INTR_EVENT_INTR7_OFS)&GPIO_INTR_EVENT_INTR7_MASK) + ((intr8<<GPIO_INTR_EVENT_INTR8_OFS)&GPIO_INTR_EVENT_INTR8_MASK) + ((intr9<<GPIO_INTR_EVENT_INTR9_OFS)&GPIO_INTR_EVENT_INTR9_MASK) + ((intr10<<GPIO_INTR_EVENT_INTR10_OFS)&GPIO_INTR_EVENT_INTR10_MASK) + ((intr11<<GPIO_INTR_EVENT_INTR11_OFS)&GPIO_INTR_EVENT_INTR11_MASK) + ((intr12<<GPIO_INTR_EVENT_INTR12_OFS)&GPIO_INTR_EVENT_INTR12_MASK) + ((intr13<<GPIO_INTR_EVENT_INTR13_OFS)&GPIO_INTR_EVENT_INTR13_MASK) + ((intr14<<GPIO_INTR_EVENT_INTR14_OFS)&GPIO_INTR_EVENT_INTR14_MASK) + ((intr15<<GPIO_INTR_EVENT_INTR15_OFS)&GPIO_INTR_EVENT_INTR15_MASK) + ((intr16<<GPIO_INTR_EVENT_INTR16_OFS)&GPIO_INTR_EVENT_INTR16_MASK) + ((intr17<<GPIO_INTR_EVENT_INTR17_OFS)&GPIO_INTR_EVENT_INTR17_MASK) + ((intr18<<GPIO_INTR_EVENT_INTR18_OFS)&GPIO_INTR_EVENT_INTR18_MASK) + ((intr19<<GPIO_INTR_EVENT_INTR19_OFS)&GPIO_INTR_EVENT_INTR19_MASK) + ((intr20<<GPIO_INTR_EVENT_INTR20_OFS)&GPIO_INTR_EVENT_INTR20_MASK) + ((intr21<<GPIO_INTR_EVENT_INTR21_OFS)&GPIO_INTR_EVENT_INTR21_MASK) + ((intr22<<GPIO_INTR_EVENT_INTR22_OFS)&GPIO_INTR_EVENT_INTR22_MASK) + ((intr23<<GPIO_INTR_EVENT_INTR23_OFS)&GPIO_INTR_EVENT_INTR23_MASK) + ((intr24<<GPIO_INTR_EVENT_INTR24_OFS)&GPIO_INTR_EVENT_INTR24_MASK) + ((intr25<<GPIO_INTR_EVENT_INTR25_OFS)&GPIO_INTR_EVENT_INTR25_MASK) + ((intr26<<GPIO_INTR_EVENT_INTR26_OFS)&GPIO_INTR_EVENT_INTR26_MASK) + ((intr27<<GPIO_INTR_EVENT_INTR27_OFS)&GPIO_INTR_EVENT_INTR27_MASK) + ((intr28<<GPIO_INTR_EVENT_INTR28_OFS)&GPIO_INTR_EVENT_INTR28_MASK) + ((intr29<<GPIO_INTR_EVENT_INTR29_OFS)&GPIO_INTR_EVENT_INTR29_MASK) + ((intr30<<GPIO_INTR_EVENT_INTR30_OFS)&GPIO_INTR_EVENT_INTR30_MASK) + ((intr31<<GPIO_INTR_EVENT_INTR31_OFS)&GPIO_INTR_EVENT_INTR31_MASK);
}

static inline void GPIO_INTR_EN0_WRITE(GPIO_REGS_s * registers, uint32_t intr0_en, uint32_t intr1_en, uint32_t intr2_en, uint32_t intr3_en, uint32_t intr4_en, uint32_t intr5_en, uint32_t intr6_en, uint32_t intr7_en, uint32_t intr8_en, uint32_t intr9_en, uint32_t intr10_en, uint32_t intr11_en, uint32_t intr12_en, uint32_t intr13_en, uint32_t intr14_en, uint32_t intr15_en) {
    registers->INTR_EN0.packed_w =  + ((intr0_en<<GPIO_INTR_EN0_INTR0_EN_OFS)&GPIO_INTR_EN0_INTR0_EN_MASK) + ((intr1_en<<GPIO_INTR_EN0_INTR1_EN_OFS)&GPIO_INTR_EN0_INTR1_EN_MASK) + ((intr2_en<<GPIO_INTR_EN0_INTR2_EN_OFS)&GPIO_INTR_EN0_INTR2_EN_MASK) + ((intr3_en<<GPIO_INTR_EN0_INTR3_EN_OFS)&GPIO_INTR_EN0_INTR3_EN_MASK) + ((intr4_en<<GPIO_INTR_EN0_INTR4_EN_OFS)&GPIO_INTR_EN0_INTR4_EN_MASK) + ((intr5_en<<GPIO_INTR_EN0_INTR5_EN_OFS)&GPIO_INTR_EN0_INTR5_EN_MASK) + ((intr6_en<<GPIO_INTR_EN0_INTR6_EN_OFS)&GPIO_INTR_EN0_INTR6_EN_MASK) + ((intr7_en<<GPIO_INTR_EN0_INTR7_EN_OFS)&GPIO_INTR_EN0_INTR7_EN_MASK) + ((intr8_en<<GPIO_INTR_EN0_INTR8_EN_OFS)&GPIO_INTR_EN0_INTR8_EN_MASK) + ((intr9_en<<GPIO_INTR_EN0_INTR9_EN_OFS)&GPIO_INTR_EN0_INTR9_EN_MASK) + ((intr10_en<<GPIO_INTR_EN0_INTR10_EN_OFS)&GPIO_INTR_EN0_INTR10_EN_MASK) + ((intr11_en<<GPIO_INTR_EN0_INTR11_EN_OFS)&GPIO_INTR_EN0_INTR11_EN_MASK) + ((intr12_en<<GPIO_INTR_EN0_INTR12_EN_OFS)&GPIO_INTR_EN0_INTR12_EN_MASK) + ((intr13_en<<GPIO_INTR_EN0_INTR13_EN_OFS)&GPIO_INTR_EN0_INTR13_EN_MASK) + ((intr14_en<<GPIO_INTR_EN0_INTR14_EN_OFS)&GPIO_INTR_EN0_INTR14_EN_MASK) + ((intr15_en<<GPIO_INTR_EN0_INTR15_EN_OFS)&GPIO_INTR_EN0_INTR15_EN_MASK);
}

static inline void GPIO_INTR_EN1_WRITE(GPIO_REGS_s * registers, uint32_t intr16_en, uint32_t intr17_en, uint32_t intr18_en, uint32_t intr19_en, uint32_t intr20_en, uint32_t intr21_en, uint32_t intr22_en, uint32_t intr23_en, uint32_t intr24_en, uint32_t intr25_en, uint32_t intr26_en, uint32_t intr27_en, uint32_t intr28_en, uint32_t intr29_en, uint32_t intr30_en, uint32_t intr31_en) {
    registers->INTR_EN1.packed_w =  + ((intr16_en<<GPIO_INTR_EN1_INTR16_EN_OFS)&GPIO_INTR_EN1_INTR16_EN_MASK) + ((intr17_en<<GPIO_INTR_EN1_INTR17_EN_OFS)&GPIO_INTR_EN1_INTR17_EN_MASK) + ((intr18_en<<GPIO_INTR_EN1_INTR18_EN_OFS)&GPIO_INTR_EN1_INTR18_EN_MASK) + ((intr19_en<<GPIO_INTR_EN1_INTR19_EN_OFS)&GPIO_INTR_EN1_INTR19_EN_MASK) + ((intr20_en<<GPIO_INTR_EN1_INTR20_EN_OFS)&GPIO_INTR_EN1_INTR20_EN_MASK) + ((intr21_en<<GPIO_INTR_EN1_INTR21_EN_OFS)&GPIO_INTR_EN1_INTR21_EN_MASK) + ((intr22_en<<GPIO_INTR_EN1_INTR22_EN_OFS)&GPIO_INTR_EN1_INTR22_EN_MASK) + ((intr23_en<<GPIO_INTR_EN1_INTR23_EN_OFS)&GPIO_INTR_EN1_INTR23_EN_MASK) + ((intr24_en<<GPIO_INTR_EN1_INTR24_EN_OFS)&GPIO_INTR_EN1_INTR24_EN_MASK) + ((intr25_en<<GPIO_INTR_EN1_INTR25_EN_OFS)&GPIO_INTR_EN1_INTR25_EN_MASK) + ((intr26_en<<GPIO_INTR_EN1_INTR26_EN_OFS)&GPIO_INTR_EN1_INTR26_EN_MASK) + ((intr27_en<<GPIO_INTR_EN1_INTR27_EN_OFS)&GPIO_INTR_EN1_INTR27_EN_MASK) + ((intr28_en<<GPIO_INTR_EN1_INTR28_EN_OFS)&GPIO_INTR_EN1_INTR28_EN_MASK) + ((intr29_en<<GPIO_INTR_EN1_INTR29_EN_OFS)&GPIO_INTR_EN1_INTR29_EN_MASK) + ((intr30_en<<GPIO_INTR_EN1_INTR30_EN_OFS)&GPIO_INTR_EN1_INTR30_EN_MASK) + ((intr31_en<<GPIO_INTR_EN1_INTR31_EN_OFS)&GPIO_INTR_EN1_INTR31_EN_MASK);
}

static inline void GPIO_INTR_NMI_EN0_WRITE(GPIO_REGS_s * registers, uint32_t intr0_nmi_en, uint32_t intr1_nmi_en, uint32_t intr2_nmi_en, uint32_t intr3_nmi_en, uint32_t intr4_nmi_en, uint32_t intr5_nmi_en, uint32_t intr6_nmi_en, uint32_t intr7_nmi_en, uint32_t intr8_nmi_en, uint32_t intr9_nmi_en, uint32_t intr10_nmi_en, uint32_t intr11_nmi_en, uint32_t intr12_nmi_en, uint32_t intr13_nmi_en, uint32_t intr14_nmi_en, uint32_t intr15_nmi_en) {
    registers->INTR_NMI_EN0.packed_w =  + ((intr0_nmi_en<<GPIO_INTR_NMI_EN0_INTR0_NMI_EN_OFS)&GPIO_INTR_NMI_EN0_INTR0_NMI_EN_MASK) + ((intr1_nmi_en<<GPIO_INTR_NMI_EN0_INTR1_NMI_EN_OFS)&GPIO_INTR_NMI_EN0_INTR1_NMI_EN_MASK) + ((intr2_nmi_en<<GPIO_INTR_NMI_EN0_INTR2_NMI_EN_OFS)&GPIO_INTR_NMI_EN0_INTR2_NMI_EN_MASK) + ((intr3_nmi_en<<GPIO_INTR_NMI_EN0_INTR3_NMI_EN_OFS)&GPIO_INTR_NMI_EN0_INTR3_NMI_EN_MASK) + ((intr4_nmi_en<<GPIO_INTR_NMI_EN0_INTR4_NMI_EN_OFS)&GPIO_INTR_NMI_EN0_INTR4_NMI_EN_MASK) + ((intr5_nmi_en<<GPIO_INTR_NMI_EN0_INTR5_NMI_EN_OFS)&GPIO_INTR_NMI_EN0_INTR5_NMI_EN_MASK) + ((intr6_nmi_en<<GPIO_INTR_NMI_EN0_INTR6_NMI_EN_OFS)&GPIO_INTR_NMI_EN0_INTR6_NMI_EN_MASK) + ((intr7_nmi_en<<GPIO_INTR_NMI_EN0_INTR7_NMI_EN_OFS)&GPIO_INTR_NMI_EN0_INTR7_NMI_EN_MASK) + ((intr8_nmi_en<<GPIO_INTR_NMI_EN0_INTR8_NMI_EN_OFS)&GPIO_INTR_NMI_EN0_INTR8_NMI_EN_MASK) + ((intr9_nmi_en<<GPIO_INTR_NMI_EN0_INTR9_NMI_EN_OFS)&GPIO_INTR_NMI_EN0_INTR9_NMI_EN_MASK) + ((intr10_nmi_en<<GPIO_INTR_NMI_EN0_INTR10_NMI_EN_OFS)&GPIO_INTR_NMI_EN0_INTR10_NMI_EN_MASK) + ((intr11_nmi_en<<GPIO_INTR_NMI_EN0_INTR11_NMI_EN_OFS)&GPIO_INTR_NMI_EN0_INTR11_NMI_EN_MASK) + ((intr12_nmi_en<<GPIO_INTR_NMI_EN0_INTR12_NMI_EN_OFS)&GPIO_INTR_NMI_EN0_INTR12_NMI_EN_MASK) + ((intr13_nmi_en<<GPIO_INTR_NMI_EN0_INTR13_NMI_EN_OFS)&GPIO_INTR_NMI_EN0_INTR13_NMI_EN_MASK) + ((intr14_nmi_en<<GPIO_INTR_NMI_EN0_INTR14_NMI_EN_OFS)&GPIO_INTR_NMI_EN0_INTR14_NMI_EN_MASK) + ((intr15_nmi_en<<GPIO_INTR_NMI_EN0_INTR15_NMI_EN_OFS)&GPIO_INTR_NMI_EN0_INTR15_NMI_EN_MASK);
}

static inline void GPIO_INTR_NMI_EN1_WRITE(GPIO_REGS_s * registers, uint32_t intr16_nmi_en, uint32_t intr17_nmi_en, uint32_t intr18_nmi_en, uint32_t intr19_nmi_en, uint32_t intr20_nmi_en, uint32_t intr21_nmi_en, uint32_t intr22_nmi_en, uint32_t intr23_nmi_en, uint32_t intr24_nmi_en, uint32_t intr25_nmi_en, uint32_t intr26_nmi_en, uint32_t intr27_nmi_en, uint32_t intr28_nmi_en, uint32_t intr29_nmi_en, uint32_t intr30_nmi_en, uint32_t intr31_nmi_en) {
    registers->INTR_NMI_EN1.packed_w =  + ((intr16_nmi_en<<GPIO_INTR_NMI_EN1_INTR16_NMI_EN_OFS)&GPIO_INTR_NMI_EN1_INTR16_NMI_EN_MASK) + ((intr17_nmi_en<<GPIO_INTR_NMI_EN1_INTR17_NMI_EN_OFS)&GPIO_INTR_NMI_EN1_INTR17_NMI_EN_MASK) + ((intr18_nmi_en<<GPIO_INTR_NMI_EN1_INTR18_NMI_EN_OFS)&GPIO_INTR_NMI_EN1_INTR18_NMI_EN_MASK) + ((intr19_nmi_en<<GPIO_INTR_NMI_EN1_INTR19_NMI_EN_OFS)&GPIO_INTR_NMI_EN1_INTR19_NMI_EN_MASK) + ((intr20_nmi_en<<GPIO_INTR_NMI_EN1_INTR20_NMI_EN_OFS)&GPIO_INTR_NMI_EN1_INTR20_NMI_EN_MASK) + ((intr21_nmi_en<<GPIO_INTR_NMI_EN1_INTR21_NMI_EN_OFS)&GPIO_INTR_NMI_EN1_INTR21_NMI_EN_MASK) + ((intr22_nmi_en<<GPIO_INTR_NMI_EN1_INTR22_NMI_EN_OFS)&GPIO_INTR_NMI_EN1_INTR22_NMI_EN_MASK) + ((intr23_nmi_en<<GPIO_INTR_NMI_EN1_INTR23_NMI_EN_OFS)&GPIO_INTR_NMI_EN1_INTR23_NMI_EN_MASK) + ((intr24_nmi_en<<GPIO_INTR_NMI_EN1_INTR24_NMI_EN_OFS)&GPIO_INTR_NMI_EN1_INTR24_NMI_EN_MASK) + ((intr25_nmi_en<<GPIO_INTR_NMI_EN1_INTR25_NMI_EN_OFS)&GPIO_INTR_NMI_EN1_INTR25_NMI_EN_MASK) + ((intr26_nmi_en<<GPIO_INTR_NMI_EN1_INTR26_NMI_EN_OFS)&GPIO_INTR_NMI_EN1_INTR26_NMI_EN_MASK) + ((intr27_nmi_en<<GPIO_INTR_NMI_EN1_INTR27_NMI_EN_OFS)&GPIO_INTR_NMI_EN1_INTR27_NMI_EN_MASK) + ((intr28_nmi_en<<GPIO_INTR_NMI_EN1_INTR28_NMI_EN_OFS)&GPIO_INTR_NMI_EN1_INTR28_NMI_EN_MASK) + ((intr29_nmi_en<<GPIO_INTR_NMI_EN1_INTR29_NMI_EN_OFS)&GPIO_INTR_NMI_EN1_INTR29_NMI_EN_MASK) + ((intr30_nmi_en<<GPIO_INTR_NMI_EN1_INTR30_NMI_EN_OFS)&GPIO_INTR_NMI_EN1_INTR30_NMI_EN_MASK) + ((intr31_nmi_en<<GPIO_INTR_NMI_EN1_INTR31_NMI_EN_OFS)&GPIO_INTR_NMI_EN1_INTR31_NMI_EN_MASK);
}

static inline void GPIO_EVENT_EN0_WRITE(GPIO_REGS_s * registers, uint32_t intr0_event_en, uint32_t intr1_event_en, uint32_t intr2_event_en, uint32_t intr3_event_en, uint32_t intr4_event_en, uint32_t intr5_event_en, uint32_t intr6_event_en, uint32_t intr7_event_en, uint32_t intr8_event_en, uint32_t intr9_event_en, uint32_t intr10_event_en, uint32_t intr11_event_en, uint32_t intr12_event_en, uint32_t intr13_event_en, uint32_t intr14_event_en, uint32_t intr15_event_en) {
    registers->EVENT_EN0.packed_w =  + ((intr0_event_en<<GPIO_EVENT_EN0_INTR0_EVENT_EN_OFS)&GPIO_EVENT_EN0_INTR0_EVENT_EN_MASK) + ((intr1_event_en<<GPIO_EVENT_EN0_INTR1_EVENT_EN_OFS)&GPIO_EVENT_EN0_INTR1_EVENT_EN_MASK) + ((intr2_event_en<<GPIO_EVENT_EN0_INTR2_EVENT_EN_OFS)&GPIO_EVENT_EN0_INTR2_EVENT_EN_MASK) + ((intr3_event_en<<GPIO_EVENT_EN0_INTR3_EVENT_EN_OFS)&GPIO_EVENT_EN0_INTR3_EVENT_EN_MASK) + ((intr4_event_en<<GPIO_EVENT_EN0_INTR4_EVENT_EN_OFS)&GPIO_EVENT_EN0_INTR4_EVENT_EN_MASK) + ((intr5_event_en<<GPIO_EVENT_EN0_INTR5_EVENT_EN_OFS)&GPIO_EVENT_EN0_INTR5_EVENT_EN_MASK) + ((intr6_event_en<<GPIO_EVENT_EN0_INTR6_EVENT_EN_OFS)&GPIO_EVENT_EN0_INTR6_EVENT_EN_MASK) + ((intr7_event_en<<GPIO_EVENT_EN0_INTR7_EVENT_EN_OFS)&GPIO_EVENT_EN0_INTR7_EVENT_EN_MASK) + ((intr8_event_en<<GPIO_EVENT_EN0_INTR8_EVENT_EN_OFS)&GPIO_EVENT_EN0_INTR8_EVENT_EN_MASK) + ((intr9_event_en<<GPIO_EVENT_EN0_INTR9_EVENT_EN_OFS)&GPIO_EVENT_EN0_INTR9_EVENT_EN_MASK) + ((intr10_event_en<<GPIO_EVENT_EN0_INTR10_EVENT_EN_OFS)&GPIO_EVENT_EN0_INTR10_EVENT_EN_MASK) + ((intr11_event_en<<GPIO_EVENT_EN0_INTR11_EVENT_EN_OFS)&GPIO_EVENT_EN0_INTR11_EVENT_EN_MASK) + ((intr12_event_en<<GPIO_EVENT_EN0_INTR12_EVENT_EN_OFS)&GPIO_EVENT_EN0_INTR12_EVENT_EN_MASK) + ((intr13_event_en<<GPIO_EVENT_EN0_INTR13_EVENT_EN_OFS)&GPIO_EVENT_EN0_INTR13_EVENT_EN_MASK) + ((intr14_event_en<<GPIO_EVENT_EN0_INTR14_EVENT_EN_OFS)&GPIO_EVENT_EN0_INTR14_EVENT_EN_MASK) + ((intr15_event_en<<GPIO_EVENT_EN0_INTR15_EVENT_EN_OFS)&GPIO_EVENT_EN0_INTR15_EVENT_EN_MASK);
}

static inline void GPIO_EVENT_EN1_WRITE(GPIO_REGS_s * registers, uint32_t intr16_event_en, uint32_t intr17_event_en, uint32_t intr18_event_en, uint32_t intr19_event_en, uint32_t intr20_event_en, uint32_t intr21_event_en, uint32_t intr22_event_en, uint32_t intr23_event_en, uint32_t intr24_event_en, uint32_t intr25_event_en, uint32_t intr26_event_en, uint32_t intr27_event_en, uint32_t intr28_event_en, uint32_t intr29_event_en, uint32_t intr30_event_en, uint32_t intr31_event_en) {
    registers->EVENT_EN1.packed_w =  + ((intr16_event_en<<GPIO_EVENT_EN1_INTR16_EVENT_EN_OFS)&GPIO_EVENT_EN1_INTR16_EVENT_EN_MASK) + ((intr17_event_en<<GPIO_EVENT_EN1_INTR17_EVENT_EN_OFS)&GPIO_EVENT_EN1_INTR17_EVENT_EN_MASK) + ((intr18_event_en<<GPIO_EVENT_EN1_INTR18_EVENT_EN_OFS)&GPIO_EVENT_EN1_INTR18_EVENT_EN_MASK) + ((intr19_event_en<<GPIO_EVENT_EN1_INTR19_EVENT_EN_OFS)&GPIO_EVENT_EN1_INTR19_EVENT_EN_MASK) + ((intr20_event_en<<GPIO_EVENT_EN1_INTR20_EVENT_EN_OFS)&GPIO_EVENT_EN1_INTR20_EVENT_EN_MASK) + ((intr21_event_en<<GPIO_EVENT_EN1_INTR21_EVENT_EN_OFS)&GPIO_EVENT_EN1_INTR21_EVENT_EN_MASK) + ((intr22_event_en<<GPIO_EVENT_EN1_INTR22_EVENT_EN_OFS)&GPIO_EVENT_EN1_INTR22_EVENT_EN_MASK) + ((intr23_event_en<<GPIO_EVENT_EN1_INTR23_EVENT_EN_OFS)&GPIO_EVENT_EN1_INTR23_EVENT_EN_MASK) + ((intr24_event_en<<GPIO_EVENT_EN1_INTR24_EVENT_EN_OFS)&GPIO_EVENT_EN1_INTR24_EVENT_EN_MASK) + ((intr25_event_en<<GPIO_EVENT_EN1_INTR25_EVENT_EN_OFS)&GPIO_EVENT_EN1_INTR25_EVENT_EN_MASK) + ((intr26_event_en<<GPIO_EVENT_EN1_INTR26_EVENT_EN_OFS)&GPIO_EVENT_EN1_INTR26_EVENT_EN_MASK) + ((intr27_event_en<<GPIO_EVENT_EN1_INTR27_EVENT_EN_OFS)&GPIO_EVENT_EN1_INTR27_EVENT_EN_MASK) + ((intr28_event_en<<GPIO_EVENT_EN1_INTR28_EVENT_EN_OFS)&GPIO_EVENT_EN1_INTR28_EVENT_EN_MASK) + ((intr29_event_en<<GPIO_EVENT_EN1_INTR29_EVENT_EN_OFS)&GPIO_EVENT_EN1_INTR29_EVENT_EN_MASK) + ((intr30_event_en<<GPIO_EVENT_EN1_INTR30_EVENT_EN_OFS)&GPIO_EVENT_EN1_INTR30_EVENT_EN_MASK) + ((intr31_event_en<<GPIO_EVENT_EN1_INTR31_EVENT_EN_OFS)&GPIO_EVENT_EN1_INTR31_EVENT_EN_MASK);
}

static inline void GPIO_INTR_SW_SET_WRITE(GPIO_REGS_s * registers, uint32_t intr0_sw_set, uint32_t intr1_sw_set, uint32_t intr2_sw_set, uint32_t intr3_sw_set, uint32_t intr4_sw_set, uint32_t intr5_sw_set, uint32_t intr6_sw_set, uint32_t intr7_sw_set, uint32_t intr8_sw_set, uint32_t intr9_sw_set, uint32_t intr10_sw_set, uint32_t intr11_sw_set, uint32_t intr12_sw_set, uint32_t intr13_sw_set, uint32_t intr14_sw_set, uint32_t intr15_sw_set, uint32_t intr16_sw_set, uint32_t intr17_sw_set, uint32_t intr18_sw_set, uint32_t intr19_sw_set, uint32_t intr20_sw_set, uint32_t intr21_sw_set, uint32_t intr22_sw_set, uint32_t intr23_sw_set, uint32_t intr24_sw_set, uint32_t intr25_sw_set, uint32_t intr26_sw_set, uint32_t intr27_sw_set, uint32_t intr28_sw_set, uint32_t intr29_sw_set, uint32_t intr30_sw_set, uint32_t intr31_sw_set) {
    registers->INTR_SW_SET.packed_w =  + ((intr0_sw_set<<GPIO_INTR_SW_SET_INTR0_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR0_SW_SET_MASK) + ((intr1_sw_set<<GPIO_INTR_SW_SET_INTR1_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR1_SW_SET_MASK) + ((intr2_sw_set<<GPIO_INTR_SW_SET_INTR2_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR2_SW_SET_MASK) + ((intr3_sw_set<<GPIO_INTR_SW_SET_INTR3_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR3_SW_SET_MASK) + ((intr4_sw_set<<GPIO_INTR_SW_SET_INTR4_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR4_SW_SET_MASK) + ((intr5_sw_set<<GPIO_INTR_SW_SET_INTR5_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR5_SW_SET_MASK) + ((intr6_sw_set<<GPIO_INTR_SW_SET_INTR6_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR6_SW_SET_MASK) + ((intr7_sw_set<<GPIO_INTR_SW_SET_INTR7_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR7_SW_SET_MASK) + ((intr8_sw_set<<GPIO_INTR_SW_SET_INTR8_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR8_SW_SET_MASK) + ((intr9_sw_set<<GPIO_INTR_SW_SET_INTR9_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR9_SW_SET_MASK) + ((intr10_sw_set<<GPIO_INTR_SW_SET_INTR10_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR10_SW_SET_MASK) + ((intr11_sw_set<<GPIO_INTR_SW_SET_INTR11_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR11_SW_SET_MASK) + ((intr12_sw_set<<GPIO_INTR_SW_SET_INTR12_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR12_SW_SET_MASK) + ((intr13_sw_set<<GPIO_INTR_SW_SET_INTR13_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR13_SW_SET_MASK) + ((intr14_sw_set<<GPIO_INTR_SW_SET_INTR14_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR14_SW_SET_MASK) + ((intr15_sw_set<<GPIO_INTR_SW_SET_INTR15_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR15_SW_SET_MASK) + ((intr16_sw_set<<GPIO_INTR_SW_SET_INTR16_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR16_SW_SET_MASK) + ((intr17_sw_set<<GPIO_INTR_SW_SET_INTR17_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR17_SW_SET_MASK) + ((intr18_sw_set<<GPIO_INTR_SW_SET_INTR18_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR18_SW_SET_MASK) + ((intr19_sw_set<<GPIO_INTR_SW_SET_INTR19_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR19_SW_SET_MASK) + ((intr20_sw_set<<GPIO_INTR_SW_SET_INTR20_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR20_SW_SET_MASK) + ((intr21_sw_set<<GPIO_INTR_SW_SET_INTR21_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR21_SW_SET_MASK) + ((intr22_sw_set<<GPIO_INTR_SW_SET_INTR22_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR22_SW_SET_MASK) + ((intr23_sw_set<<GPIO_INTR_SW_SET_INTR23_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR23_SW_SET_MASK) + ((intr24_sw_set<<GPIO_INTR_SW_SET_INTR24_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR24_SW_SET_MASK) + ((intr25_sw_set<<GPIO_INTR_SW_SET_INTR25_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR25_SW_SET_MASK) + ((intr26_sw_set<<GPIO_INTR_SW_SET_INTR26_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR26_SW_SET_MASK) + ((intr27_sw_set<<GPIO_INTR_SW_SET_INTR27_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR27_SW_SET_MASK) + ((intr28_sw_set<<GPIO_INTR_SW_SET_INTR28_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR28_SW_SET_MASK) + ((intr29_sw_set<<GPIO_INTR_SW_SET_INTR29_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR29_SW_SET_MASK) + ((intr30_sw_set<<GPIO_INTR_SW_SET_INTR30_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR30_SW_SET_MASK) + ((intr31_sw_set<<GPIO_INTR_SW_SET_INTR31_SW_SET_OFS)&GPIO_INTR_SW_SET_INTR31_SW_SET_MASK);
}

static inline void GPIO_DOUT_3_0_WRITE(GPIO_REGS_s * registers, uint32_t dout_0, uint32_t dout_1, uint32_t dout_2, uint32_t dout_3) {
    registers->DOUT_3_0.packed_w =  + ((dout_0<<GPIO_DOUT_3_0_DOUT_0_OFS)&GPIO_DOUT_3_0_DOUT_0_MASK) + ((dout_1<<GPIO_DOUT_3_0_DOUT_1_OFS)&GPIO_DOUT_3_0_DOUT_1_MASK) + ((dout_2<<GPIO_DOUT_3_0_DOUT_2_OFS)&GPIO_DOUT_3_0_DOUT_2_MASK) + ((dout_3<<GPIO_DOUT_3_0_DOUT_3_OFS)&GPIO_DOUT_3_0_DOUT_3_MASK);
}

static inline void GPIO_DOUT_7_4_WRITE(GPIO_REGS_s * registers, uint32_t dout_4, uint32_t dout_5, uint32_t dout_6, uint32_t dout_7) {
    registers->DOUT_7_4.packed_w =  + ((dout_4<<GPIO_DOUT_7_4_DOUT_4_OFS)&GPIO_DOUT_7_4_DOUT_4_MASK) + ((dout_5<<GPIO_DOUT_7_4_DOUT_5_OFS)&GPIO_DOUT_7_4_DOUT_5_MASK) + ((dout_6<<GPIO_DOUT_7_4_DOUT_6_OFS)&GPIO_DOUT_7_4_DOUT_6_MASK) + ((dout_7<<GPIO_DOUT_7_4_DOUT_7_OFS)&GPIO_DOUT_7_4_DOUT_7_MASK);
}

static inline void GPIO_DOUT_11_8_WRITE(GPIO_REGS_s * registers, uint32_t dout_8, uint32_t dout_9, uint32_t dout_10, uint32_t dout_11) {
    registers->DOUT_11_8.packed_w =  + ((dout_8<<GPIO_DOUT_11_8_DOUT_8_OFS)&GPIO_DOUT_11_8_DOUT_8_MASK) + ((dout_9<<GPIO_DOUT_11_8_DOUT_9_OFS)&GPIO_DOUT_11_8_DOUT_9_MASK) + ((dout_10<<GPIO_DOUT_11_8_DOUT_10_OFS)&GPIO_DOUT_11_8_DOUT_10_MASK) + ((dout_11<<GPIO_DOUT_11_8_DOUT_11_OFS)&GPIO_DOUT_11_8_DOUT_11_MASK);
}

static inline void GPIO_DOUT_15_12_WRITE(GPIO_REGS_s * registers, uint32_t dout_12, uint32_t dout_13, uint32_t dout_14, uint32_t dout_15) {
    registers->DOUT_15_12.packed_w =  + ((dout_12<<GPIO_DOUT_15_12_DOUT_12_OFS)&GPIO_DOUT_15_12_DOUT_12_MASK) + ((dout_13<<GPIO_DOUT_15_12_DOUT_13_OFS)&GPIO_DOUT_15_12_DOUT_13_MASK) + ((dout_14<<GPIO_DOUT_15_12_DOUT_14_OFS)&GPIO_DOUT_15_12_DOUT_14_MASK) + ((dout_15<<GPIO_DOUT_15_12_DOUT_15_OFS)&GPIO_DOUT_15_12_DOUT_15_MASK);
}

static inline void GPIO_DOUT_19_16_WRITE(GPIO_REGS_s * registers, uint32_t dout_16, uint32_t dout_17, uint32_t dout_18, uint32_t dout_19) {
    registers->DOUT_19_16.packed_w =  + ((dout_16<<GPIO_DOUT_19_16_DOUT_16_OFS)&GPIO_DOUT_19_16_DOUT_16_MASK) + ((dout_17<<GPIO_DOUT_19_16_DOUT_17_OFS)&GPIO_DOUT_19_16_DOUT_17_MASK) + ((dout_18<<GPIO_DOUT_19_16_DOUT_18_OFS)&GPIO_DOUT_19_16_DOUT_18_MASK) + ((dout_19<<GPIO_DOUT_19_16_DOUT_19_OFS)&GPIO_DOUT_19_16_DOUT_19_MASK);
}

static inline void GPIO_DOUT_23_20_WRITE(GPIO_REGS_s * registers, uint32_t dout_20, uint32_t dout_21, uint32_t dout_22, uint32_t dout_23) {
    registers->DOUT_23_20.packed_w =  + ((dout_20<<GPIO_DOUT_23_20_DOUT_20_OFS)&GPIO_DOUT_23_20_DOUT_20_MASK) + ((dout_21<<GPIO_DOUT_23_20_DOUT_21_OFS)&GPIO_DOUT_23_20_DOUT_21_MASK) + ((dout_22<<GPIO_DOUT_23_20_DOUT_22_OFS)&GPIO_DOUT_23_20_DOUT_22_MASK) + ((dout_23<<GPIO_DOUT_23_20_DOUT_23_OFS)&GPIO_DOUT_23_20_DOUT_23_MASK);
}

static inline void GPIO_DOUT_27_24_WRITE(GPIO_REGS_s * registers, uint32_t dout_24, uint32_t dout_25, uint32_t dout_26, uint32_t dout_27) {
    registers->DOUT_27_24.packed_w =  + ((dout_24<<GPIO_DOUT_27_24_DOUT_24_OFS)&GPIO_DOUT_27_24_DOUT_24_MASK) + ((dout_25<<GPIO_DOUT_27_24_DOUT_25_OFS)&GPIO_DOUT_27_24_DOUT_25_MASK) + ((dout_26<<GPIO_DOUT_27_24_DOUT_26_OFS)&GPIO_DOUT_27_24_DOUT_26_MASK) + ((dout_27<<GPIO_DOUT_27_24_DOUT_27_OFS)&GPIO_DOUT_27_24_DOUT_27_MASK);
}

static inline void GPIO_DOUT_31_28_WRITE(GPIO_REGS_s * registers, uint32_t dout_28, uint32_t dout_29, uint32_t dout_30, uint32_t dout_31) {
    registers->DOUT_31_28.packed_w =  + ((dout_28<<GPIO_DOUT_31_28_DOUT_28_OFS)&GPIO_DOUT_31_28_DOUT_28_MASK) + ((dout_29<<GPIO_DOUT_31_28_DOUT_29_OFS)&GPIO_DOUT_31_28_DOUT_29_MASK) + ((dout_30<<GPIO_DOUT_31_28_DOUT_30_OFS)&GPIO_DOUT_31_28_DOUT_30_MASK) + ((dout_31<<GPIO_DOUT_31_28_DOUT_31_OFS)&GPIO_DOUT_31_28_DOUT_31_MASK);
}

static inline void GPIO_DOUT_WRITE(GPIO_REGS_s * registers, uint32_t dout) {
    registers->DOUT.packed_w =  + ((dout<<GPIO_DOUT_DOUT_OFS)&GPIO_DOUT_DOUT_MASK);
}

static inline void GPIO_DOUT_SET_WRITE(GPIO_REGS_s * registers, uint32_t dout_set) {
    registers->DOUT_SET.packed_w =  + ((dout_set<<GPIO_DOUT_SET_DOUT_SET_OFS)&GPIO_DOUT_SET_DOUT_SET_MASK);
}

static inline void GPIO_DOUT_CLR_WRITE(GPIO_REGS_s * registers, uint32_t dout_clr) {
    registers->DOUT_CLR.packed_w =  + ((dout_clr<<GPIO_DOUT_CLR_DOUT_CLR_OFS)&GPIO_DOUT_CLR_DOUT_CLR_MASK);
}

static inline void GPIO_DOUT_TGL_WRITE(GPIO_REGS_s * registers, uint32_t dout_tgl) {
    registers->DOUT_TGL.packed_w =  + ((dout_tgl<<GPIO_DOUT_TGL_DOUT_TGL_OFS)&GPIO_DOUT_TGL_DOUT_TGL_MASK);
}

static inline void GPIO_DOUT_EN_WRITE(GPIO_REGS_s * registers, uint32_t dout_en) {
    registers->DOUT_EN.packed_w =  + ((dout_en<<GPIO_DOUT_EN_DOUT_EN_OFS)&GPIO_DOUT_EN_DOUT_EN_MASK);
}

static inline void GPIO_DOUT_EN_SET_WRITE(GPIO_REGS_s * registers, uint32_t dout_en_set) {
    registers->DOUT_EN_SET.packed_w =  + ((dout_en_set<<GPIO_DOUT_EN_SET_DOUT_EN_SET_OFS)&GPIO_DOUT_EN_SET_DOUT_EN_SET_MASK);
}

static inline void GPIO_DOUT_EN_CLR_WRITE(GPIO_REGS_s * registers, uint32_t dout_en_clr) {
    registers->DOUT_EN_CLR.packed_w =  + ((dout_en_clr<<GPIO_DOUT_EN_CLR_DOUT_EN_CLR_OFS)&GPIO_DOUT_EN_CLR_DOUT_EN_CLR_MASK);
}

static inline void GPIO_DIN_3_0_WRITE(GPIO_REGS_s * registers, uint32_t din_0, uint32_t din_1, uint32_t din_2, uint32_t din_3) {
    registers->DIN_3_0.packed_w =  + ((din_0<<GPIO_DIN_3_0_DIN_0_OFS)&GPIO_DIN_3_0_DIN_0_MASK) + ((din_1<<GPIO_DIN_3_0_DIN_1_OFS)&GPIO_DIN_3_0_DIN_1_MASK) + ((din_2<<GPIO_DIN_3_0_DIN_2_OFS)&GPIO_DIN_3_0_DIN_2_MASK) + ((din_3<<GPIO_DIN_3_0_DIN_3_OFS)&GPIO_DIN_3_0_DIN_3_MASK);
}

static inline void GPIO_DIN_7_4_WRITE(GPIO_REGS_s * registers, uint32_t din_4, uint32_t din_5, uint32_t din_6, uint32_t din_7) {
    registers->DIN_7_4.packed_w =  + ((din_4<<GPIO_DIN_7_4_DIN_4_OFS)&GPIO_DIN_7_4_DIN_4_MASK) + ((din_5<<GPIO_DIN_7_4_DIN_5_OFS)&GPIO_DIN_7_4_DIN_5_MASK) + ((din_6<<GPIO_DIN_7_4_DIN_6_OFS)&GPIO_DIN_7_4_DIN_6_MASK) + ((din_7<<GPIO_DIN_7_4_DIN_7_OFS)&GPIO_DIN_7_4_DIN_7_MASK);
}

static inline void GPIO_DIN_11_8_WRITE(GPIO_REGS_s * registers, uint32_t din_8, uint32_t din_9, uint32_t din_10, uint32_t din_11) {
    registers->DIN_11_8.packed_w =  + ((din_8<<GPIO_DIN_11_8_DIN_8_OFS)&GPIO_DIN_11_8_DIN_8_MASK) + ((din_9<<GPIO_DIN_11_8_DIN_9_OFS)&GPIO_DIN_11_8_DIN_9_MASK) + ((din_10<<GPIO_DIN_11_8_DIN_10_OFS)&GPIO_DIN_11_8_DIN_10_MASK) + ((din_11<<GPIO_DIN_11_8_DIN_11_OFS)&GPIO_DIN_11_8_DIN_11_MASK);
}

static inline void GPIO_DIN_15_12_WRITE(GPIO_REGS_s * registers, uint32_t din_12, uint32_t din_13, uint32_t din_14, uint32_t din_15) {
    registers->DIN_15_12.packed_w =  + ((din_12<<GPIO_DIN_15_12_DIN_12_OFS)&GPIO_DIN_15_12_DIN_12_MASK) + ((din_13<<GPIO_DIN_15_12_DIN_13_OFS)&GPIO_DIN_15_12_DIN_13_MASK) + ((din_14<<GPIO_DIN_15_12_DIN_14_OFS)&GPIO_DIN_15_12_DIN_14_MASK) + ((din_15<<GPIO_DIN_15_12_DIN_15_OFS)&GPIO_DIN_15_12_DIN_15_MASK);
}

static inline void GPIO_DIN_19_16_WRITE(GPIO_REGS_s * registers, uint32_t din_16, uint32_t din_17, uint32_t din_18, uint32_t din_19) {
    registers->DIN_19_16.packed_w =  + ((din_16<<GPIO_DIN_19_16_DIN_16_OFS)&GPIO_DIN_19_16_DIN_16_MASK) + ((din_17<<GPIO_DIN_19_16_DIN_17_OFS)&GPIO_DIN_19_16_DIN_17_MASK) + ((din_18<<GPIO_DIN_19_16_DIN_18_OFS)&GPIO_DIN_19_16_DIN_18_MASK) + ((din_19<<GPIO_DIN_19_16_DIN_19_OFS)&GPIO_DIN_19_16_DIN_19_MASK);
}

static inline void GPIO_DIN_23_20_WRITE(GPIO_REGS_s * registers, uint32_t din_20, uint32_t din_21, uint32_t din_22, uint32_t din_23) {
    registers->DIN_23_20.packed_w =  + ((din_20<<GPIO_DIN_23_20_DIN_20_OFS)&GPIO_DIN_23_20_DIN_20_MASK) + ((din_21<<GPIO_DIN_23_20_DIN_21_OFS)&GPIO_DIN_23_20_DIN_21_MASK) + ((din_22<<GPIO_DIN_23_20_DIN_22_OFS)&GPIO_DIN_23_20_DIN_22_MASK) + ((din_23<<GPIO_DIN_23_20_DIN_23_OFS)&GPIO_DIN_23_20_DIN_23_MASK);
}

static inline void GPIO_DIN_27_24_WRITE(GPIO_REGS_s * registers, uint32_t din_24, uint32_t din_25, uint32_t din_26, uint32_t din_27) {
    registers->DIN_27_24.packed_w =  + ((din_24<<GPIO_DIN_27_24_DIN_24_OFS)&GPIO_DIN_27_24_DIN_24_MASK) + ((din_25<<GPIO_DIN_27_24_DIN_25_OFS)&GPIO_DIN_27_24_DIN_25_MASK) + ((din_26<<GPIO_DIN_27_24_DIN_26_OFS)&GPIO_DIN_27_24_DIN_26_MASK) + ((din_27<<GPIO_DIN_27_24_DIN_27_OFS)&GPIO_DIN_27_24_DIN_27_MASK);
}

static inline void GPIO_DIN_31_28_WRITE(GPIO_REGS_s * registers, uint32_t din_28, uint32_t din_29, uint32_t din_30, uint32_t din_31) {
    registers->DIN_31_28.packed_w =  + ((din_28<<GPIO_DIN_31_28_DIN_28_OFS)&GPIO_DIN_31_28_DIN_28_MASK) + ((din_29<<GPIO_DIN_31_28_DIN_29_OFS)&GPIO_DIN_31_28_DIN_29_MASK) + ((din_30<<GPIO_DIN_31_28_DIN_30_OFS)&GPIO_DIN_31_28_DIN_30_MASK) + ((din_31<<GPIO_DIN_31_28_DIN_31_OFS)&GPIO_DIN_31_28_DIN_31_MASK);
}

static inline void GPIO_DIN_WRITE(GPIO_REGS_s * registers, uint32_t din) {
    registers->DIN.packed_w =  + ((din<<GPIO_DIN_DIN_OFS)&GPIO_DIN_DIN_MASK);
}

static inline void GPIO_FILT_EN_0_WRITE(GPIO_REGS_s * registers, uint32_t filt_en_0, uint32_t filt_en_1, uint32_t filt_en_2, uint32_t filt_en_3, uint32_t filt_en_4, uint32_t filt_en_5, uint32_t filt_en_6, uint32_t filt_en_7, uint32_t filt_en_8, uint32_t filt_en_9, uint32_t filt_en_10, uint32_t filt_en_11, uint32_t filt_en_12, uint32_t filt_en_13, uint32_t filt_en_14, uint32_t filt_en_15) {
    registers->FILT_EN_0.packed_w =  + ((filt_en_0<<GPIO_FILT_EN_0_FILT_EN_0_OFS)&GPIO_FILT_EN_0_FILT_EN_0_MASK) + ((filt_en_1<<GPIO_FILT_EN_0_FILT_EN_1_OFS)&GPIO_FILT_EN_0_FILT_EN_1_MASK) + ((filt_en_2<<GPIO_FILT_EN_0_FILT_EN_2_OFS)&GPIO_FILT_EN_0_FILT_EN_2_MASK) + ((filt_en_3<<GPIO_FILT_EN_0_FILT_EN_3_OFS)&GPIO_FILT_EN_0_FILT_EN_3_MASK) + ((filt_en_4<<GPIO_FILT_EN_0_FILT_EN_4_OFS)&GPIO_FILT_EN_0_FILT_EN_4_MASK) + ((filt_en_5<<GPIO_FILT_EN_0_FILT_EN_5_OFS)&GPIO_FILT_EN_0_FILT_EN_5_MASK) + ((filt_en_6<<GPIO_FILT_EN_0_FILT_EN_6_OFS)&GPIO_FILT_EN_0_FILT_EN_6_MASK) + ((filt_en_7<<GPIO_FILT_EN_0_FILT_EN_7_OFS)&GPIO_FILT_EN_0_FILT_EN_7_MASK) + ((filt_en_8<<GPIO_FILT_EN_0_FILT_EN_8_OFS)&GPIO_FILT_EN_0_FILT_EN_8_MASK) + ((filt_en_9<<GPIO_FILT_EN_0_FILT_EN_9_OFS)&GPIO_FILT_EN_0_FILT_EN_9_MASK) + ((filt_en_10<<GPIO_FILT_EN_0_FILT_EN_10_OFS)&GPIO_FILT_EN_0_FILT_EN_10_MASK) + ((filt_en_11<<GPIO_FILT_EN_0_FILT_EN_11_OFS)&GPIO_FILT_EN_0_FILT_EN_11_MASK) + ((filt_en_12<<GPIO_FILT_EN_0_FILT_EN_12_OFS)&GPIO_FILT_EN_0_FILT_EN_12_MASK) + ((filt_en_13<<GPIO_FILT_EN_0_FILT_EN_13_OFS)&GPIO_FILT_EN_0_FILT_EN_13_MASK) + ((filt_en_14<<GPIO_FILT_EN_0_FILT_EN_14_OFS)&GPIO_FILT_EN_0_FILT_EN_14_MASK) + ((filt_en_15<<GPIO_FILT_EN_0_FILT_EN_15_OFS)&GPIO_FILT_EN_0_FILT_EN_15_MASK);
}

static inline void GPIO_FILT_EN_1_WRITE(GPIO_REGS_s * registers, uint32_t filt_en_16, uint32_t filt_en_17, uint32_t filt_en_18, uint32_t filt_en_19, uint32_t filt_en_20, uint32_t filt_en_21, uint32_t filt_en_22, uint32_t filt_en_23, uint32_t filt_en_24, uint32_t filt_en_25, uint32_t filt_en_26, uint32_t filt_en_27, uint32_t filt_en_28, uint32_t filt_en_29, uint32_t filt_en_30, uint32_t filt_en_31) {
    registers->FILT_EN_1.packed_w =  + ((filt_en_16<<GPIO_FILT_EN_1_FILT_EN_16_OFS)&GPIO_FILT_EN_1_FILT_EN_16_MASK) + ((filt_en_17<<GPIO_FILT_EN_1_FILT_EN_17_OFS)&GPIO_FILT_EN_1_FILT_EN_17_MASK) + ((filt_en_18<<GPIO_FILT_EN_1_FILT_EN_18_OFS)&GPIO_FILT_EN_1_FILT_EN_18_MASK) + ((filt_en_19<<GPIO_FILT_EN_1_FILT_EN_19_OFS)&GPIO_FILT_EN_1_FILT_EN_19_MASK) + ((filt_en_20<<GPIO_FILT_EN_1_FILT_EN_20_OFS)&GPIO_FILT_EN_1_FILT_EN_20_MASK) + ((filt_en_21<<GPIO_FILT_EN_1_FILT_EN_21_OFS)&GPIO_FILT_EN_1_FILT_EN_21_MASK) + ((filt_en_22<<GPIO_FILT_EN_1_FILT_EN_22_OFS)&GPIO_FILT_EN_1_FILT_EN_22_MASK) + ((filt_en_23<<GPIO_FILT_EN_1_FILT_EN_23_OFS)&GPIO_FILT_EN_1_FILT_EN_23_MASK) + ((filt_en_24<<GPIO_FILT_EN_1_FILT_EN_24_OFS)&GPIO_FILT_EN_1_FILT_EN_24_MASK) + ((filt_en_25<<GPIO_FILT_EN_1_FILT_EN_25_OFS)&GPIO_FILT_EN_1_FILT_EN_25_MASK) + ((filt_en_26<<GPIO_FILT_EN_1_FILT_EN_26_OFS)&GPIO_FILT_EN_1_FILT_EN_26_MASK) + ((filt_en_27<<GPIO_FILT_EN_1_FILT_EN_27_OFS)&GPIO_FILT_EN_1_FILT_EN_27_MASK) + ((filt_en_28<<GPIO_FILT_EN_1_FILT_EN_28_OFS)&GPIO_FILT_EN_1_FILT_EN_28_MASK) + ((filt_en_29<<GPIO_FILT_EN_1_FILT_EN_29_OFS)&GPIO_FILT_EN_1_FILT_EN_29_MASK) + ((filt_en_30<<GPIO_FILT_EN_1_FILT_EN_30_OFS)&GPIO_FILT_EN_1_FILT_EN_30_MASK) + ((filt_en_31<<GPIO_FILT_EN_1_FILT_EN_31_OFS)&GPIO_FILT_EN_1_FILT_EN_31_MASK);
}

static inline void GPIO_INTR_POL_0_WRITE(GPIO_REGS_s * registers, uint32_t intr_pol_0, uint32_t intr_pol_1, uint32_t intr_pol_2, uint32_t intr_pol_3, uint32_t intr_pol_4, uint32_t intr_pol_5, uint32_t intr_pol_6, uint32_t intr_pol_7, uint32_t intr_pol_8, uint32_t intr_pol_9, uint32_t intr_pol_10, uint32_t intr_pol_11, uint32_t intr_pol_12, uint32_t intr_pol_13, uint32_t intr_pol_14, uint32_t intr_pol_15) {
    registers->INTR_POL_0.packed_w =  + ((intr_pol_0<<GPIO_INTR_POL_0_INTR_POL_0_OFS)&GPIO_INTR_POL_0_INTR_POL_0_MASK) + ((intr_pol_1<<GPIO_INTR_POL_0_INTR_POL_1_OFS)&GPIO_INTR_POL_0_INTR_POL_1_MASK) + ((intr_pol_2<<GPIO_INTR_POL_0_INTR_POL_2_OFS)&GPIO_INTR_POL_0_INTR_POL_2_MASK) + ((intr_pol_3<<GPIO_INTR_POL_0_INTR_POL_3_OFS)&GPIO_INTR_POL_0_INTR_POL_3_MASK) + ((intr_pol_4<<GPIO_INTR_POL_0_INTR_POL_4_OFS)&GPIO_INTR_POL_0_INTR_POL_4_MASK) + ((intr_pol_5<<GPIO_INTR_POL_0_INTR_POL_5_OFS)&GPIO_INTR_POL_0_INTR_POL_5_MASK) + ((intr_pol_6<<GPIO_INTR_POL_0_INTR_POL_6_OFS)&GPIO_INTR_POL_0_INTR_POL_6_MASK) + ((intr_pol_7<<GPIO_INTR_POL_0_INTR_POL_7_OFS)&GPIO_INTR_POL_0_INTR_POL_7_MASK) + ((intr_pol_8<<GPIO_INTR_POL_0_INTR_POL_8_OFS)&GPIO_INTR_POL_0_INTR_POL_8_MASK) + ((intr_pol_9<<GPIO_INTR_POL_0_INTR_POL_9_OFS)&GPIO_INTR_POL_0_INTR_POL_9_MASK) + ((intr_pol_10<<GPIO_INTR_POL_0_INTR_POL_10_OFS)&GPIO_INTR_POL_0_INTR_POL_10_MASK) + ((intr_pol_11<<GPIO_INTR_POL_0_INTR_POL_11_OFS)&GPIO_INTR_POL_0_INTR_POL_11_MASK) + ((intr_pol_12<<GPIO_INTR_POL_0_INTR_POL_12_OFS)&GPIO_INTR_POL_0_INTR_POL_12_MASK) + ((intr_pol_13<<GPIO_INTR_POL_0_INTR_POL_13_OFS)&GPIO_INTR_POL_0_INTR_POL_13_MASK) + ((intr_pol_14<<GPIO_INTR_POL_0_INTR_POL_14_OFS)&GPIO_INTR_POL_0_INTR_POL_14_MASK) + ((intr_pol_15<<GPIO_INTR_POL_0_INTR_POL_15_OFS)&GPIO_INTR_POL_0_INTR_POL_15_MASK);
}

static inline void GPIO_INTR_POL_1_WRITE(GPIO_REGS_s * registers, uint32_t intr_pol_16, uint32_t intr_pol_17, uint32_t intr_pol_18, uint32_t intr_pol_19, uint32_t intr_pol_20, uint32_t intr_pol_21, uint32_t intr_pol_22, uint32_t intr_pol_23, uint32_t intr_pol_24, uint32_t intr_pol_25, uint32_t intr_pol_26, uint32_t intr_pol_27, uint32_t intr_pol_28, uint32_t intr_pol_29, uint32_t intr_pol_30, uint32_t intr_pol_31) {
    registers->INTR_POL_1.packed_w =  + ((intr_pol_16<<GPIO_INTR_POL_1_INTR_POL_16_OFS)&GPIO_INTR_POL_1_INTR_POL_16_MASK) + ((intr_pol_17<<GPIO_INTR_POL_1_INTR_POL_17_OFS)&GPIO_INTR_POL_1_INTR_POL_17_MASK) + ((intr_pol_18<<GPIO_INTR_POL_1_INTR_POL_18_OFS)&GPIO_INTR_POL_1_INTR_POL_18_MASK) + ((intr_pol_19<<GPIO_INTR_POL_1_INTR_POL_19_OFS)&GPIO_INTR_POL_1_INTR_POL_19_MASK) + ((intr_pol_20<<GPIO_INTR_POL_1_INTR_POL_20_OFS)&GPIO_INTR_POL_1_INTR_POL_20_MASK) + ((intr_pol_21<<GPIO_INTR_POL_1_INTR_POL_21_OFS)&GPIO_INTR_POL_1_INTR_POL_21_MASK) + ((intr_pol_22<<GPIO_INTR_POL_1_INTR_POL_22_OFS)&GPIO_INTR_POL_1_INTR_POL_22_MASK) + ((intr_pol_23<<GPIO_INTR_POL_1_INTR_POL_23_OFS)&GPIO_INTR_POL_1_INTR_POL_23_MASK) + ((intr_pol_24<<GPIO_INTR_POL_1_INTR_POL_24_OFS)&GPIO_INTR_POL_1_INTR_POL_24_MASK) + ((intr_pol_25<<GPIO_INTR_POL_1_INTR_POL_25_OFS)&GPIO_INTR_POL_1_INTR_POL_25_MASK) + ((intr_pol_26<<GPIO_INTR_POL_1_INTR_POL_26_OFS)&GPIO_INTR_POL_1_INTR_POL_26_MASK) + ((intr_pol_27<<GPIO_INTR_POL_1_INTR_POL_27_OFS)&GPIO_INTR_POL_1_INTR_POL_27_MASK) + ((intr_pol_28<<GPIO_INTR_POL_1_INTR_POL_28_OFS)&GPIO_INTR_POL_1_INTR_POL_28_MASK) + ((intr_pol_29<<GPIO_INTR_POL_1_INTR_POL_29_OFS)&GPIO_INTR_POL_1_INTR_POL_29_MASK) + ((intr_pol_30<<GPIO_INTR_POL_1_INTR_POL_30_OFS)&GPIO_INTR_POL_1_INTR_POL_30_MASK) + ((intr_pol_31<<GPIO_INTR_POL_1_INTR_POL_31_OFS)&GPIO_INTR_POL_1_INTR_POL_31_MASK);
}

static inline void GPIO_SUB_CFG_0_WRITE(GPIO_REGS_s * registers, uint32_t sub_en, uint32_t action, uint32_t bit_num) {
    registers->SUB_CFG_0.packed_w =  + ((sub_en<<GPIO_SUB_CFG_0_SUB_EN_OFS)&GPIO_SUB_CFG_0_SUB_EN_MASK) + ((action<<GPIO_SUB_CFG_0_ACTION_OFS)&GPIO_SUB_CFG_0_ACTION_MASK) + ((bit_num<<GPIO_SUB_CFG_0_BIT_NUM_OFS)&GPIO_SUB_CFG_0_BIT_NUM_MASK);
}

static inline void GPIO_SUB_CFG_1_WRITE(GPIO_REGS_s * registers, uint32_t sub_en, uint32_t action, uint32_t bit_num) {
    registers->SUB_CFG_1.packed_w =  + ((sub_en<<GPIO_SUB_CFG_1_SUB_EN_OFS)&GPIO_SUB_CFG_1_SUB_EN_MASK) + ((action<<GPIO_SUB_CFG_1_ACTION_OFS)&GPIO_SUB_CFG_1_ACTION_MASK) + ((bit_num<<GPIO_SUB_CFG_1_BIT_NUM_OFS)&GPIO_SUB_CFG_1_BIT_NUM_MASK);
}

static inline void GPIO_DMA_WR_MASK_WRITE(GPIO_REGS_s * registers, uint32_t dma_wr_mask) {
    registers->DMA_WR_MASK.packed_w =  + ((dma_wr_mask<<GPIO_DMA_WR_MASK_DMA_WR_MASK_OFS)&GPIO_DMA_WR_MASK_DMA_WR_MASK_MASK);
}

