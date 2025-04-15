#include "DMA_REGS.h"

static inline void DMA_DESC_WRITE(DMA_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<DMA_DESC_module_type_OFS)&DMA_DESC_module_type_MASK) + ((modue_subtype<<DMA_DESC_modue_subtype_OFS)&DMA_DESC_modue_subtype_MASK) + ((major_rev<<DMA_DESC_major_rev_OFS)&DMA_DESC_major_rev_MASK) + ((minor_rev<<DMA_DESC_minor_rev_OFS)&DMA_DESC_minor_rev_MASK);
}

static inline void DMA_PWR_EN_WRITE(DMA_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<DMA_PWR_EN_pwr_en_OFS)&DMA_PWR_EN_pwr_en_MASK) + ((pwr_en_key<<DMA_PWR_EN_pwr_en_key_OFS)&DMA_PWR_EN_pwr_en_key_MASK);
}

static inline void DMA_RST_CTRL_WRITE(DMA_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<DMA_RST_CTRL_rst_OFS)&DMA_RST_CTRL_rst_MASK) + ((rst_sts_clr<<DMA_RST_CTRL_rst_sts_clr_OFS)&DMA_RST_CTRL_rst_sts_clr_MASK) + ((rst_key<<DMA_RST_CTRL_rst_key_OFS)&DMA_RST_CTRL_rst_key_MASK);
}

static inline void DMA_RST_STS_WRITE(DMA_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<DMA_RST_STS_rst_sts_OFS)&DMA_RST_STS_rst_sts_MASK);
}

static inline void DMA_CLK_CTRL_WRITE(DMA_REGS_s * registers, uint32_t clk_en) {
    registers->CLK_CTRL.packed_w =  + ((clk_en<<DMA_CLK_CTRL_clk_en_OFS)&DMA_CLK_CTRL_clk_en_MASK);
}

static inline void DMA_DBG_CTRL_WRITE(DMA_REGS_s * registers, uint32_t halt_mode) {
    registers->DBG_CTRL.packed_w =  + ((halt_mode<<DMA_DBG_CTRL_halt_mode_OFS)&DMA_DBG_CTRL_halt_mode_MASK);
}

static inline void DMA_INTR_STS_WRITE(DMA_REGS_s * registers, uint32_t intr_first) {
    registers->INTR_STS.packed_w =  + ((intr_first<<DMA_INTR_STS_intr_first_OFS)&DMA_INTR_STS_intr_first_MASK);
}

static inline void DMA_INTR_EVENT_WRITE(DMA_REGS_s * registers, uint32_t dma_done_0, uint32_t dma_done_1, uint32_t dma_done_2, uint32_t dma_done_3, uint32_t dma_done_4, uint32_t dma_done_5, uint32_t dma_done_6, uint32_t dma_done_7, uint32_t dma_done_8, uint32_t dma_done_9, uint32_t dma_done_10, uint32_t dma_done_11, uint32_t dma_done_12, uint32_t dma_done_13, uint32_t dma_done_14, uint32_t dma_done_15, uint32_t early_irq_0, uint32_t early_irq_1, uint32_t early_irq_2, uint32_t early_irq_3, uint32_t early_irq_4, uint32_t early_irq_5, uint32_t early_irq_6, uint32_t early_irq_7, uint32_t early_irq_8, uint32_t early_irq_9, uint32_t early_irq_10, uint32_t early_irq_11, uint32_t early_irq_12, uint32_t early_irq_13, uint32_t early_irq_14, uint32_t early_irq_15) {
    registers->INTR_EVENT.packed_w =  + ((dma_done_0<<DMA_INTR_EVENT_dma_done_0_OFS)&DMA_INTR_EVENT_dma_done_0_MASK) + ((dma_done_1<<DMA_INTR_EVENT_dma_done_1_OFS)&DMA_INTR_EVENT_dma_done_1_MASK) + ((dma_done_2<<DMA_INTR_EVENT_dma_done_2_OFS)&DMA_INTR_EVENT_dma_done_2_MASK) + ((dma_done_3<<DMA_INTR_EVENT_dma_done_3_OFS)&DMA_INTR_EVENT_dma_done_3_MASK) + ((dma_done_4<<DMA_INTR_EVENT_dma_done_4_OFS)&DMA_INTR_EVENT_dma_done_4_MASK) + ((dma_done_5<<DMA_INTR_EVENT_dma_done_5_OFS)&DMA_INTR_EVENT_dma_done_5_MASK) + ((dma_done_6<<DMA_INTR_EVENT_dma_done_6_OFS)&DMA_INTR_EVENT_dma_done_6_MASK) + ((dma_done_7<<DMA_INTR_EVENT_dma_done_7_OFS)&DMA_INTR_EVENT_dma_done_7_MASK) + ((dma_done_8<<DMA_INTR_EVENT_dma_done_8_OFS)&DMA_INTR_EVENT_dma_done_8_MASK) + ((dma_done_9<<DMA_INTR_EVENT_dma_done_9_OFS)&DMA_INTR_EVENT_dma_done_9_MASK) + ((dma_done_10<<DMA_INTR_EVENT_dma_done_10_OFS)&DMA_INTR_EVENT_dma_done_10_MASK) + ((dma_done_11<<DMA_INTR_EVENT_dma_done_11_OFS)&DMA_INTR_EVENT_dma_done_11_MASK) + ((dma_done_12<<DMA_INTR_EVENT_dma_done_12_OFS)&DMA_INTR_EVENT_dma_done_12_MASK) + ((dma_done_13<<DMA_INTR_EVENT_dma_done_13_OFS)&DMA_INTR_EVENT_dma_done_13_MASK) + ((dma_done_14<<DMA_INTR_EVENT_dma_done_14_OFS)&DMA_INTR_EVENT_dma_done_14_MASK) + ((dma_done_15<<DMA_INTR_EVENT_dma_done_15_OFS)&DMA_INTR_EVENT_dma_done_15_MASK) + ((early_irq_0<<DMA_INTR_EVENT_early_irq_0_OFS)&DMA_INTR_EVENT_early_irq_0_MASK) + ((early_irq_1<<DMA_INTR_EVENT_early_irq_1_OFS)&DMA_INTR_EVENT_early_irq_1_MASK) + ((early_irq_2<<DMA_INTR_EVENT_early_irq_2_OFS)&DMA_INTR_EVENT_early_irq_2_MASK) + ((early_irq_3<<DMA_INTR_EVENT_early_irq_3_OFS)&DMA_INTR_EVENT_early_irq_3_MASK) + ((early_irq_4<<DMA_INTR_EVENT_early_irq_4_OFS)&DMA_INTR_EVENT_early_irq_4_MASK) + ((early_irq_5<<DMA_INTR_EVENT_early_irq_5_OFS)&DMA_INTR_EVENT_early_irq_5_MASK) + ((early_irq_6<<DMA_INTR_EVENT_early_irq_6_OFS)&DMA_INTR_EVENT_early_irq_6_MASK) + ((early_irq_7<<DMA_INTR_EVENT_early_irq_7_OFS)&DMA_INTR_EVENT_early_irq_7_MASK) + ((early_irq_8<<DMA_INTR_EVENT_early_irq_8_OFS)&DMA_INTR_EVENT_early_irq_8_MASK) + ((early_irq_9<<DMA_INTR_EVENT_early_irq_9_OFS)&DMA_INTR_EVENT_early_irq_9_MASK) + ((early_irq_10<<DMA_INTR_EVENT_early_irq_10_OFS)&DMA_INTR_EVENT_early_irq_10_MASK) + ((early_irq_11<<DMA_INTR_EVENT_early_irq_11_OFS)&DMA_INTR_EVENT_early_irq_11_MASK) + ((early_irq_12<<DMA_INTR_EVENT_early_irq_12_OFS)&DMA_INTR_EVENT_early_irq_12_MASK) + ((early_irq_13<<DMA_INTR_EVENT_early_irq_13_OFS)&DMA_INTR_EVENT_early_irq_13_MASK) + ((early_irq_14<<DMA_INTR_EVENT_early_irq_14_OFS)&DMA_INTR_EVENT_early_irq_14_MASK) + ((early_irq_15<<DMA_INTR_EVENT_early_irq_15_OFS)&DMA_INTR_EVENT_early_irq_15_MASK);
}

static inline void DMA_INTR_EN_0_WRITE(DMA_REGS_s * registers, uint32_t dma_done_en_0, uint32_t dma_done_en_1, uint32_t dma_done_en_2, uint32_t dma_done_en_3, uint32_t dma_done_en_4, uint32_t dma_done_en_5, uint32_t dma_done_en_6, uint32_t dma_done_en_7, uint32_t dma_done_en_8, uint32_t dma_done_en_9, uint32_t dma_done_en_10, uint32_t dma_done_en_11, uint32_t dma_done_en_12, uint32_t dma_done_en_13, uint32_t dma_done_en_14, uint32_t dma_done_en_15) {
    registers->INTR_EN_0.packed_w =  + ((dma_done_en_0<<DMA_INTR_EN_0_dma_done_en_0_OFS)&DMA_INTR_EN_0_dma_done_en_0_MASK) + ((dma_done_en_1<<DMA_INTR_EN_0_dma_done_en_1_OFS)&DMA_INTR_EN_0_dma_done_en_1_MASK) + ((dma_done_en_2<<DMA_INTR_EN_0_dma_done_en_2_OFS)&DMA_INTR_EN_0_dma_done_en_2_MASK) + ((dma_done_en_3<<DMA_INTR_EN_0_dma_done_en_3_OFS)&DMA_INTR_EN_0_dma_done_en_3_MASK) + ((dma_done_en_4<<DMA_INTR_EN_0_dma_done_en_4_OFS)&DMA_INTR_EN_0_dma_done_en_4_MASK) + ((dma_done_en_5<<DMA_INTR_EN_0_dma_done_en_5_OFS)&DMA_INTR_EN_0_dma_done_en_5_MASK) + ((dma_done_en_6<<DMA_INTR_EN_0_dma_done_en_6_OFS)&DMA_INTR_EN_0_dma_done_en_6_MASK) + ((dma_done_en_7<<DMA_INTR_EN_0_dma_done_en_7_OFS)&DMA_INTR_EN_0_dma_done_en_7_MASK) + ((dma_done_en_8<<DMA_INTR_EN_0_dma_done_en_8_OFS)&DMA_INTR_EN_0_dma_done_en_8_MASK) + ((dma_done_en_9<<DMA_INTR_EN_0_dma_done_en_9_OFS)&DMA_INTR_EN_0_dma_done_en_9_MASK) + ((dma_done_en_10<<DMA_INTR_EN_0_dma_done_en_10_OFS)&DMA_INTR_EN_0_dma_done_en_10_MASK) + ((dma_done_en_11<<DMA_INTR_EN_0_dma_done_en_11_OFS)&DMA_INTR_EN_0_dma_done_en_11_MASK) + ((dma_done_en_12<<DMA_INTR_EN_0_dma_done_en_12_OFS)&DMA_INTR_EN_0_dma_done_en_12_MASK) + ((dma_done_en_13<<DMA_INTR_EN_0_dma_done_en_13_OFS)&DMA_INTR_EN_0_dma_done_en_13_MASK) + ((dma_done_en_14<<DMA_INTR_EN_0_dma_done_en_14_OFS)&DMA_INTR_EN_0_dma_done_en_14_MASK) + ((dma_done_en_15<<DMA_INTR_EN_0_dma_done_en_15_OFS)&DMA_INTR_EN_0_dma_done_en_15_MASK);
}

static inline void DMA_INTR_EN_1_WRITE(DMA_REGS_s * registers, uint32_t early_irq_en_0, uint32_t early_irq_en_1, uint32_t early_irq_en_2, uint32_t early_irq_en_3, uint32_t early_irq_en_4, uint32_t early_irq_en_5, uint32_t early_irq_en_6, uint32_t early_irq_en_7, uint32_t early_irq_en_8, uint32_t early_irq_en_9, uint32_t early_irq_en_10, uint32_t early_irq_en_11, uint32_t early_irq_en_12, uint32_t early_irq_en_13, uint32_t early_irq_en_14, uint32_t early_irq_en_15) {
    registers->INTR_EN_1.packed_w =  + ((early_irq_en_0<<DMA_INTR_EN_1_early_irq_en_0_OFS)&DMA_INTR_EN_1_early_irq_en_0_MASK) + ((early_irq_en_1<<DMA_INTR_EN_1_early_irq_en_1_OFS)&DMA_INTR_EN_1_early_irq_en_1_MASK) + ((early_irq_en_2<<DMA_INTR_EN_1_early_irq_en_2_OFS)&DMA_INTR_EN_1_early_irq_en_2_MASK) + ((early_irq_en_3<<DMA_INTR_EN_1_early_irq_en_3_OFS)&DMA_INTR_EN_1_early_irq_en_3_MASK) + ((early_irq_en_4<<DMA_INTR_EN_1_early_irq_en_4_OFS)&DMA_INTR_EN_1_early_irq_en_4_MASK) + ((early_irq_en_5<<DMA_INTR_EN_1_early_irq_en_5_OFS)&DMA_INTR_EN_1_early_irq_en_5_MASK) + ((early_irq_en_6<<DMA_INTR_EN_1_early_irq_en_6_OFS)&DMA_INTR_EN_1_early_irq_en_6_MASK) + ((early_irq_en_7<<DMA_INTR_EN_1_early_irq_en_7_OFS)&DMA_INTR_EN_1_early_irq_en_7_MASK) + ((early_irq_en_8<<DMA_INTR_EN_1_early_irq_en_8_OFS)&DMA_INTR_EN_1_early_irq_en_8_MASK) + ((early_irq_en_9<<DMA_INTR_EN_1_early_irq_en_9_OFS)&DMA_INTR_EN_1_early_irq_en_9_MASK) + ((early_irq_en_10<<DMA_INTR_EN_1_early_irq_en_10_OFS)&DMA_INTR_EN_1_early_irq_en_10_MASK) + ((early_irq_en_11<<DMA_INTR_EN_1_early_irq_en_11_OFS)&DMA_INTR_EN_1_early_irq_en_11_MASK) + ((early_irq_en_12<<DMA_INTR_EN_1_early_irq_en_12_OFS)&DMA_INTR_EN_1_early_irq_en_12_MASK) + ((early_irq_en_13<<DMA_INTR_EN_1_early_irq_en_13_OFS)&DMA_INTR_EN_1_early_irq_en_13_MASK) + ((early_irq_en_14<<DMA_INTR_EN_1_early_irq_en_14_OFS)&DMA_INTR_EN_1_early_irq_en_14_MASK) + ((early_irq_en_15<<DMA_INTR_EN_1_early_irq_en_15_OFS)&DMA_INTR_EN_1_early_irq_en_15_MASK);
}

static inline void DMA_INTR_NMI_EN_0_WRITE(DMA_REGS_s * registers, uint32_t dma_done_nmi_en_0, uint32_t dma_done_nmi_en_1, uint32_t dma_done_nmi_en_2, uint32_t dma_done_nmi_en_3, uint32_t dma_done_nmi_en_4, uint32_t dma_done_nmi_en_5, uint32_t dma_done_nmi_en_6, uint32_t dma_done_nmi_en_7, uint32_t dma_done_nmi_en_8, uint32_t dma_done_nmi_en_9, uint32_t dma_done_nmi_en_10, uint32_t dma_done_nmi_en_11, uint32_t dma_done_nmi_en_12, uint32_t dma_done_nmi_en_13, uint32_t dma_done_nmi_en_14, uint32_t dma_done_nmi_en_15) {
    registers->INTR_NMI_EN_0.packed_w =  + ((dma_done_nmi_en_0<<DMA_INTR_NMI_EN_0_dma_done_nmi_en_0_OFS)&DMA_INTR_NMI_EN_0_dma_done_nmi_en_0_MASK) + ((dma_done_nmi_en_1<<DMA_INTR_NMI_EN_0_dma_done_nmi_en_1_OFS)&DMA_INTR_NMI_EN_0_dma_done_nmi_en_1_MASK) + ((dma_done_nmi_en_2<<DMA_INTR_NMI_EN_0_dma_done_nmi_en_2_OFS)&DMA_INTR_NMI_EN_0_dma_done_nmi_en_2_MASK) + ((dma_done_nmi_en_3<<DMA_INTR_NMI_EN_0_dma_done_nmi_en_3_OFS)&DMA_INTR_NMI_EN_0_dma_done_nmi_en_3_MASK) + ((dma_done_nmi_en_4<<DMA_INTR_NMI_EN_0_dma_done_nmi_en_4_OFS)&DMA_INTR_NMI_EN_0_dma_done_nmi_en_4_MASK) + ((dma_done_nmi_en_5<<DMA_INTR_NMI_EN_0_dma_done_nmi_en_5_OFS)&DMA_INTR_NMI_EN_0_dma_done_nmi_en_5_MASK) + ((dma_done_nmi_en_6<<DMA_INTR_NMI_EN_0_dma_done_nmi_en_6_OFS)&DMA_INTR_NMI_EN_0_dma_done_nmi_en_6_MASK) + ((dma_done_nmi_en_7<<DMA_INTR_NMI_EN_0_dma_done_nmi_en_7_OFS)&DMA_INTR_NMI_EN_0_dma_done_nmi_en_7_MASK) + ((dma_done_nmi_en_8<<DMA_INTR_NMI_EN_0_dma_done_nmi_en_8_OFS)&DMA_INTR_NMI_EN_0_dma_done_nmi_en_8_MASK) + ((dma_done_nmi_en_9<<DMA_INTR_NMI_EN_0_dma_done_nmi_en_9_OFS)&DMA_INTR_NMI_EN_0_dma_done_nmi_en_9_MASK) + ((dma_done_nmi_en_10<<DMA_INTR_NMI_EN_0_dma_done_nmi_en_10_OFS)&DMA_INTR_NMI_EN_0_dma_done_nmi_en_10_MASK) + ((dma_done_nmi_en_11<<DMA_INTR_NMI_EN_0_dma_done_nmi_en_11_OFS)&DMA_INTR_NMI_EN_0_dma_done_nmi_en_11_MASK) + ((dma_done_nmi_en_12<<DMA_INTR_NMI_EN_0_dma_done_nmi_en_12_OFS)&DMA_INTR_NMI_EN_0_dma_done_nmi_en_12_MASK) + ((dma_done_nmi_en_13<<DMA_INTR_NMI_EN_0_dma_done_nmi_en_13_OFS)&DMA_INTR_NMI_EN_0_dma_done_nmi_en_13_MASK) + ((dma_done_nmi_en_14<<DMA_INTR_NMI_EN_0_dma_done_nmi_en_14_OFS)&DMA_INTR_NMI_EN_0_dma_done_nmi_en_14_MASK) + ((dma_done_nmi_en_15<<DMA_INTR_NMI_EN_0_dma_done_nmi_en_15_OFS)&DMA_INTR_NMI_EN_0_dma_done_nmi_en_15_MASK);
}

static inline void DMA_INTR_NMI_EN_1_WRITE(DMA_REGS_s * registers, uint32_t early_irq_nmi_en_0, uint32_t early_irq_nmi_en_1, uint32_t early_irq_nmi_en_2, uint32_t early_irq_nmi_en_3, uint32_t early_irq_nmi_en_4, uint32_t early_irq_nmi_en_5, uint32_t early_irq_nmi_en_6, uint32_t early_irq_nmi_en_7, uint32_t early_irq_nmi_en_8, uint32_t early_irq_nmi_en_9, uint32_t early_irq_nmi_en_10, uint32_t early_irq_nmi_en_11, uint32_t early_irq_nmi_en_12, uint32_t early_irq_nmi_en_13, uint32_t early_irq_nmi_en_14, uint32_t early_irq_nmi_en_15) {
    registers->INTR_NMI_EN_1.packed_w =  + ((early_irq_nmi_en_0<<DMA_INTR_NMI_EN_1_early_irq_nmi_en_0_OFS)&DMA_INTR_NMI_EN_1_early_irq_nmi_en_0_MASK) + ((early_irq_nmi_en_1<<DMA_INTR_NMI_EN_1_early_irq_nmi_en_1_OFS)&DMA_INTR_NMI_EN_1_early_irq_nmi_en_1_MASK) + ((early_irq_nmi_en_2<<DMA_INTR_NMI_EN_1_early_irq_nmi_en_2_OFS)&DMA_INTR_NMI_EN_1_early_irq_nmi_en_2_MASK) + ((early_irq_nmi_en_3<<DMA_INTR_NMI_EN_1_early_irq_nmi_en_3_OFS)&DMA_INTR_NMI_EN_1_early_irq_nmi_en_3_MASK) + ((early_irq_nmi_en_4<<DMA_INTR_NMI_EN_1_early_irq_nmi_en_4_OFS)&DMA_INTR_NMI_EN_1_early_irq_nmi_en_4_MASK) + ((early_irq_nmi_en_5<<DMA_INTR_NMI_EN_1_early_irq_nmi_en_5_OFS)&DMA_INTR_NMI_EN_1_early_irq_nmi_en_5_MASK) + ((early_irq_nmi_en_6<<DMA_INTR_NMI_EN_1_early_irq_nmi_en_6_OFS)&DMA_INTR_NMI_EN_1_early_irq_nmi_en_6_MASK) + ((early_irq_nmi_en_7<<DMA_INTR_NMI_EN_1_early_irq_nmi_en_7_OFS)&DMA_INTR_NMI_EN_1_early_irq_nmi_en_7_MASK) + ((early_irq_nmi_en_8<<DMA_INTR_NMI_EN_1_early_irq_nmi_en_8_OFS)&DMA_INTR_NMI_EN_1_early_irq_nmi_en_8_MASK) + ((early_irq_nmi_en_9<<DMA_INTR_NMI_EN_1_early_irq_nmi_en_9_OFS)&DMA_INTR_NMI_EN_1_early_irq_nmi_en_9_MASK) + ((early_irq_nmi_en_10<<DMA_INTR_NMI_EN_1_early_irq_nmi_en_10_OFS)&DMA_INTR_NMI_EN_1_early_irq_nmi_en_10_MASK) + ((early_irq_nmi_en_11<<DMA_INTR_NMI_EN_1_early_irq_nmi_en_11_OFS)&DMA_INTR_NMI_EN_1_early_irq_nmi_en_11_MASK) + ((early_irq_nmi_en_12<<DMA_INTR_NMI_EN_1_early_irq_nmi_en_12_OFS)&DMA_INTR_NMI_EN_1_early_irq_nmi_en_12_MASK) + ((early_irq_nmi_en_13<<DMA_INTR_NMI_EN_1_early_irq_nmi_en_13_OFS)&DMA_INTR_NMI_EN_1_early_irq_nmi_en_13_MASK) + ((early_irq_nmi_en_14<<DMA_INTR_NMI_EN_1_early_irq_nmi_en_14_OFS)&DMA_INTR_NMI_EN_1_early_irq_nmi_en_14_MASK) + ((early_irq_nmi_en_15<<DMA_INTR_NMI_EN_1_early_irq_nmi_en_15_OFS)&DMA_INTR_NMI_EN_1_early_irq_nmi_en_15_MASK);
}

static inline void DMA_EVENT_EN_0_WRITE(DMA_REGS_s * registers, uint32_t dma_done_event_en_0, uint32_t dma_done_event_en_1, uint32_t dma_done_event_en_2, uint32_t dma_done_event_en_3, uint32_t dma_done_event_en_4, uint32_t dma_done_event_en_5, uint32_t dma_done_event_en_6, uint32_t dma_done_event_en_7, uint32_t dma_done_event_en_8, uint32_t dma_done_event_en_9, uint32_t dma_done_event_en_10, uint32_t dma_done_event_en_11, uint32_t dma_done_event_en_12, uint32_t dma_done_event_en_13, uint32_t dma_done_event_en_14, uint32_t dma_done_event_en_15) {
    registers->EVENT_EN_0.packed_w =  + ((dma_done_event_en_0<<DMA_EVENT_EN_0_dma_done_event_en_0_OFS)&DMA_EVENT_EN_0_dma_done_event_en_0_MASK) + ((dma_done_event_en_1<<DMA_EVENT_EN_0_dma_done_event_en_1_OFS)&DMA_EVENT_EN_0_dma_done_event_en_1_MASK) + ((dma_done_event_en_2<<DMA_EVENT_EN_0_dma_done_event_en_2_OFS)&DMA_EVENT_EN_0_dma_done_event_en_2_MASK) + ((dma_done_event_en_3<<DMA_EVENT_EN_0_dma_done_event_en_3_OFS)&DMA_EVENT_EN_0_dma_done_event_en_3_MASK) + ((dma_done_event_en_4<<DMA_EVENT_EN_0_dma_done_event_en_4_OFS)&DMA_EVENT_EN_0_dma_done_event_en_4_MASK) + ((dma_done_event_en_5<<DMA_EVENT_EN_0_dma_done_event_en_5_OFS)&DMA_EVENT_EN_0_dma_done_event_en_5_MASK) + ((dma_done_event_en_6<<DMA_EVENT_EN_0_dma_done_event_en_6_OFS)&DMA_EVENT_EN_0_dma_done_event_en_6_MASK) + ((dma_done_event_en_7<<DMA_EVENT_EN_0_dma_done_event_en_7_OFS)&DMA_EVENT_EN_0_dma_done_event_en_7_MASK) + ((dma_done_event_en_8<<DMA_EVENT_EN_0_dma_done_event_en_8_OFS)&DMA_EVENT_EN_0_dma_done_event_en_8_MASK) + ((dma_done_event_en_9<<DMA_EVENT_EN_0_dma_done_event_en_9_OFS)&DMA_EVENT_EN_0_dma_done_event_en_9_MASK) + ((dma_done_event_en_10<<DMA_EVENT_EN_0_dma_done_event_en_10_OFS)&DMA_EVENT_EN_0_dma_done_event_en_10_MASK) + ((dma_done_event_en_11<<DMA_EVENT_EN_0_dma_done_event_en_11_OFS)&DMA_EVENT_EN_0_dma_done_event_en_11_MASK) + ((dma_done_event_en_12<<DMA_EVENT_EN_0_dma_done_event_en_12_OFS)&DMA_EVENT_EN_0_dma_done_event_en_12_MASK) + ((dma_done_event_en_13<<DMA_EVENT_EN_0_dma_done_event_en_13_OFS)&DMA_EVENT_EN_0_dma_done_event_en_13_MASK) + ((dma_done_event_en_14<<DMA_EVENT_EN_0_dma_done_event_en_14_OFS)&DMA_EVENT_EN_0_dma_done_event_en_14_MASK) + ((dma_done_event_en_15<<DMA_EVENT_EN_0_dma_done_event_en_15_OFS)&DMA_EVENT_EN_0_dma_done_event_en_15_MASK);
}

static inline void DMA_EVENT_EN_1_WRITE(DMA_REGS_s * registers, uint32_t early_irq_event_en_0, uint32_t early_irq_event_en_1, uint32_t early_irq_event_en_2, uint32_t early_irq_event_en_3, uint32_t early_irq_event_en_4, uint32_t early_irq_event_en_5, uint32_t early_irq_event_en_6, uint32_t early_irq_event_en_7, uint32_t early_irq_event_en_8, uint32_t early_irq_event_en_9, uint32_t early_irq_event_en_10, uint32_t early_irq_event_en_11, uint32_t early_irq_event_en_12, uint32_t early_irq_event_en_13, uint32_t early_irq_event_en_14, uint32_t early_irq_event_en_15) {
    registers->EVENT_EN_1.packed_w =  + ((early_irq_event_en_0<<DMA_EVENT_EN_1_early_irq_event_en_0_OFS)&DMA_EVENT_EN_1_early_irq_event_en_0_MASK) + ((early_irq_event_en_1<<DMA_EVENT_EN_1_early_irq_event_en_1_OFS)&DMA_EVENT_EN_1_early_irq_event_en_1_MASK) + ((early_irq_event_en_2<<DMA_EVENT_EN_1_early_irq_event_en_2_OFS)&DMA_EVENT_EN_1_early_irq_event_en_2_MASK) + ((early_irq_event_en_3<<DMA_EVENT_EN_1_early_irq_event_en_3_OFS)&DMA_EVENT_EN_1_early_irq_event_en_3_MASK) + ((early_irq_event_en_4<<DMA_EVENT_EN_1_early_irq_event_en_4_OFS)&DMA_EVENT_EN_1_early_irq_event_en_4_MASK) + ((early_irq_event_en_5<<DMA_EVENT_EN_1_early_irq_event_en_5_OFS)&DMA_EVENT_EN_1_early_irq_event_en_5_MASK) + ((early_irq_event_en_6<<DMA_EVENT_EN_1_early_irq_event_en_6_OFS)&DMA_EVENT_EN_1_early_irq_event_en_6_MASK) + ((early_irq_event_en_7<<DMA_EVENT_EN_1_early_irq_event_en_7_OFS)&DMA_EVENT_EN_1_early_irq_event_en_7_MASK) + ((early_irq_event_en_8<<DMA_EVENT_EN_1_early_irq_event_en_8_OFS)&DMA_EVENT_EN_1_early_irq_event_en_8_MASK) + ((early_irq_event_en_9<<DMA_EVENT_EN_1_early_irq_event_en_9_OFS)&DMA_EVENT_EN_1_early_irq_event_en_9_MASK) + ((early_irq_event_en_10<<DMA_EVENT_EN_1_early_irq_event_en_10_OFS)&DMA_EVENT_EN_1_early_irq_event_en_10_MASK) + ((early_irq_event_en_11<<DMA_EVENT_EN_1_early_irq_event_en_11_OFS)&DMA_EVENT_EN_1_early_irq_event_en_11_MASK) + ((early_irq_event_en_12<<DMA_EVENT_EN_1_early_irq_event_en_12_OFS)&DMA_EVENT_EN_1_early_irq_event_en_12_MASK) + ((early_irq_event_en_13<<DMA_EVENT_EN_1_early_irq_event_en_13_OFS)&DMA_EVENT_EN_1_early_irq_event_en_13_MASK) + ((early_irq_event_en_14<<DMA_EVENT_EN_1_early_irq_event_en_14_OFS)&DMA_EVENT_EN_1_early_irq_event_en_14_MASK) + ((early_irq_event_en_15<<DMA_EVENT_EN_1_early_irq_event_en_15_OFS)&DMA_EVENT_EN_1_early_irq_event_en_15_MASK);
}

static inline void DMA_INTR_SW_SET_WRITE(DMA_REGS_s * registers, uint32_t dma_done_sw_set_0, uint32_t dma_done_sw_set_1, uint32_t dma_done_sw_set_2, uint32_t dma_done_sw_set_3, uint32_t dma_done_sw_set_4, uint32_t dma_done_sw_set_5, uint32_t dma_done_sw_set_6, uint32_t dma_done_sw_set_7, uint32_t dma_done_sw_set_8, uint32_t dma_done_sw_set_9, uint32_t dma_done_sw_set_10, uint32_t dma_done_sw_set_11, uint32_t dma_done_sw_set_12, uint32_t dma_done_sw_set_13, uint32_t dma_done_sw_set_14, uint32_t dma_done_sw_set_15, uint32_t early_irq_sw_set_0, uint32_t early_irq_sw_set_1, uint32_t early_irq_sw_set_2, uint32_t early_irq_sw_set_3, uint32_t early_irq_sw_set_4, uint32_t early_irq_sw_set_5, uint32_t early_irq_sw_set_6, uint32_t early_irq_sw_set_7, uint32_t early_irq_sw_set_8, uint32_t early_irq_sw_set_9, uint32_t early_irq_sw_set_10, uint32_t early_irq_sw_set_11, uint32_t early_irq_sw_set_12, uint32_t early_irq_sw_set_13, uint32_t early_irq_sw_set_14, uint32_t early_irq_sw_set_15) {
    registers->INTR_SW_SET.packed_w =  + ((dma_done_sw_set_0<<DMA_INTR_SW_SET_dma_done_sw_set_0_OFS)&DMA_INTR_SW_SET_dma_done_sw_set_0_MASK) + ((dma_done_sw_set_1<<DMA_INTR_SW_SET_dma_done_sw_set_1_OFS)&DMA_INTR_SW_SET_dma_done_sw_set_1_MASK) + ((dma_done_sw_set_2<<DMA_INTR_SW_SET_dma_done_sw_set_2_OFS)&DMA_INTR_SW_SET_dma_done_sw_set_2_MASK) + ((dma_done_sw_set_3<<DMA_INTR_SW_SET_dma_done_sw_set_3_OFS)&DMA_INTR_SW_SET_dma_done_sw_set_3_MASK) + ((dma_done_sw_set_4<<DMA_INTR_SW_SET_dma_done_sw_set_4_OFS)&DMA_INTR_SW_SET_dma_done_sw_set_4_MASK) + ((dma_done_sw_set_5<<DMA_INTR_SW_SET_dma_done_sw_set_5_OFS)&DMA_INTR_SW_SET_dma_done_sw_set_5_MASK) + ((dma_done_sw_set_6<<DMA_INTR_SW_SET_dma_done_sw_set_6_OFS)&DMA_INTR_SW_SET_dma_done_sw_set_6_MASK) + ((dma_done_sw_set_7<<DMA_INTR_SW_SET_dma_done_sw_set_7_OFS)&DMA_INTR_SW_SET_dma_done_sw_set_7_MASK) + ((dma_done_sw_set_8<<DMA_INTR_SW_SET_dma_done_sw_set_8_OFS)&DMA_INTR_SW_SET_dma_done_sw_set_8_MASK) + ((dma_done_sw_set_9<<DMA_INTR_SW_SET_dma_done_sw_set_9_OFS)&DMA_INTR_SW_SET_dma_done_sw_set_9_MASK) + ((dma_done_sw_set_10<<DMA_INTR_SW_SET_dma_done_sw_set_10_OFS)&DMA_INTR_SW_SET_dma_done_sw_set_10_MASK) + ((dma_done_sw_set_11<<DMA_INTR_SW_SET_dma_done_sw_set_11_OFS)&DMA_INTR_SW_SET_dma_done_sw_set_11_MASK) + ((dma_done_sw_set_12<<DMA_INTR_SW_SET_dma_done_sw_set_12_OFS)&DMA_INTR_SW_SET_dma_done_sw_set_12_MASK) + ((dma_done_sw_set_13<<DMA_INTR_SW_SET_dma_done_sw_set_13_OFS)&DMA_INTR_SW_SET_dma_done_sw_set_13_MASK) + ((dma_done_sw_set_14<<DMA_INTR_SW_SET_dma_done_sw_set_14_OFS)&DMA_INTR_SW_SET_dma_done_sw_set_14_MASK) + ((dma_done_sw_set_15<<DMA_INTR_SW_SET_dma_done_sw_set_15_OFS)&DMA_INTR_SW_SET_dma_done_sw_set_15_MASK) + ((early_irq_sw_set_0<<DMA_INTR_SW_SET_early_irq_sw_set_0_OFS)&DMA_INTR_SW_SET_early_irq_sw_set_0_MASK) + ((early_irq_sw_set_1<<DMA_INTR_SW_SET_early_irq_sw_set_1_OFS)&DMA_INTR_SW_SET_early_irq_sw_set_1_MASK) + ((early_irq_sw_set_2<<DMA_INTR_SW_SET_early_irq_sw_set_2_OFS)&DMA_INTR_SW_SET_early_irq_sw_set_2_MASK) + ((early_irq_sw_set_3<<DMA_INTR_SW_SET_early_irq_sw_set_3_OFS)&DMA_INTR_SW_SET_early_irq_sw_set_3_MASK) + ((early_irq_sw_set_4<<DMA_INTR_SW_SET_early_irq_sw_set_4_OFS)&DMA_INTR_SW_SET_early_irq_sw_set_4_MASK) + ((early_irq_sw_set_5<<DMA_INTR_SW_SET_early_irq_sw_set_5_OFS)&DMA_INTR_SW_SET_early_irq_sw_set_5_MASK) + ((early_irq_sw_set_6<<DMA_INTR_SW_SET_early_irq_sw_set_6_OFS)&DMA_INTR_SW_SET_early_irq_sw_set_6_MASK) + ((early_irq_sw_set_7<<DMA_INTR_SW_SET_early_irq_sw_set_7_OFS)&DMA_INTR_SW_SET_early_irq_sw_set_7_MASK) + ((early_irq_sw_set_8<<DMA_INTR_SW_SET_early_irq_sw_set_8_OFS)&DMA_INTR_SW_SET_early_irq_sw_set_8_MASK) + ((early_irq_sw_set_9<<DMA_INTR_SW_SET_early_irq_sw_set_9_OFS)&DMA_INTR_SW_SET_early_irq_sw_set_9_MASK) + ((early_irq_sw_set_10<<DMA_INTR_SW_SET_early_irq_sw_set_10_OFS)&DMA_INTR_SW_SET_early_irq_sw_set_10_MASK) + ((early_irq_sw_set_11<<DMA_INTR_SW_SET_early_irq_sw_set_11_OFS)&DMA_INTR_SW_SET_early_irq_sw_set_11_MASK) + ((early_irq_sw_set_12<<DMA_INTR_SW_SET_early_irq_sw_set_12_OFS)&DMA_INTR_SW_SET_early_irq_sw_set_12_MASK) + ((early_irq_sw_set_13<<DMA_INTR_SW_SET_early_irq_sw_set_13_OFS)&DMA_INTR_SW_SET_early_irq_sw_set_13_MASK) + ((early_irq_sw_set_14<<DMA_INTR_SW_SET_early_irq_sw_set_14_OFS)&DMA_INTR_SW_SET_early_irq_sw_set_14_MASK) + ((early_irq_sw_set_15<<DMA_INTR_SW_SET_early_irq_sw_set_15_OFS)&DMA_INTR_SW_SET_early_irq_sw_set_15_MASK);
}

static inline void DMA_DMA_CFG_0_WRITE(DMA_REGS_s * registers, uint32_t ctrl_base_ptr) {
    registers->DMA_CFG_0.packed_w =  + ((ctrl_base_ptr<<DMA_DMA_CFG_0_ctrl_base_ptr_OFS)&DMA_DMA_CFG_0_ctrl_base_ptr_MASK);
}

static inline void DMA_DMA_CFG_1_WRITE(DMA_REGS_s * registers, uint32_t alt_ctrl_base_ptr) {
    registers->DMA_CFG_1.packed_w =  + ((alt_ctrl_base_ptr<<DMA_DMA_CFG_1_alt_ctrl_base_ptr_OFS)&DMA_DMA_CFG_1_alt_ctrl_base_ptr_MASK);
}

static inline void DMA_DMA_CFG_2_WRITE(DMA_REGS_s * registers, uint32_t chnls_minus_1, uint32_t master_enable) {
    registers->DMA_CFG_2.packed_w =  + ((chnls_minus_1<<DMA_DMA_CFG_2_chnls_minus_1_OFS)&DMA_DMA_CFG_2_chnls_minus_1_MASK) + ((master_enable<<DMA_DMA_CFG_2_master_enable_OFS)&DMA_DMA_CFG_2_master_enable_MASK);
}

static inline void DMA_DMA_WAITONREQ_WRITE(DMA_REGS_s * registers, uint32_t waitonreq) {
    registers->DMA_WAITONREQ.packed_w =  + ((waitonreq<<DMA_DMA_WAITONREQ_waitonreq_OFS)&DMA_DMA_WAITONREQ_waitonreq_MASK);
}

static inline void DMA_FILL_MODE_WRITE(DMA_REGS_s * registers, uint32_t fill_mode_en) {
    registers->FILL_MODE.packed_w =  + ((fill_mode_en<<DMA_FILL_MODE_fill_mode_en_OFS)&DMA_FILL_MODE_fill_mode_en_MASK);
}

static inline void DMA_FILL_MODE_CFG_WRITE(DMA_REGS_s * registers, uint32_t fill_mode_chnl_no, uint32_t fill_mode_incr_val, uint32_t fill_mode_init_val) {
    registers->FILL_MODE_CFG.packed_w =  + ((fill_mode_chnl_no<<DMA_FILL_MODE_CFG_fill_mode_chnl_no_OFS)&DMA_FILL_MODE_CFG_fill_mode_chnl_no_MASK) + ((fill_mode_incr_val<<DMA_FILL_MODE_CFG_fill_mode_incr_val_OFS)&DMA_FILL_MODE_CFG_fill_mode_incr_val_MASK) + ((fill_mode_init_val<<DMA_FILL_MODE_CFG_fill_mode_init_val_OFS)&DMA_FILL_MODE_CFG_fill_mode_init_val_MASK);
}

static inline void DMA_STRIDE_MODE_WRITE(DMA_REGS_s * registers, uint32_t stride_mode_en) {
    registers->STRIDE_MODE.packed_w =  + ((stride_mode_en<<DMA_STRIDE_MODE_stride_mode_en_OFS)&DMA_STRIDE_MODE_stride_mode_en_MASK);
}

static inline void DMA_STRIDE_MODE_CFG_0_WRITE(DMA_REGS_s * registers, uint32_t stride_mode_chnl_no, uint32_t src_stride_val, uint32_t dst_stride_val, uint32_t src_inc, uint32_t dst_inc) {
    registers->STRIDE_MODE_CFG_0.packed_w =  + ((stride_mode_chnl_no<<DMA_STRIDE_MODE_CFG_0_stride_mode_chnl_no_OFS)&DMA_STRIDE_MODE_CFG_0_stride_mode_chnl_no_MASK) + ((src_stride_val<<DMA_STRIDE_MODE_CFG_0_src_stride_val_OFS)&DMA_STRIDE_MODE_CFG_0_src_stride_val_MASK) + ((dst_stride_val<<DMA_STRIDE_MODE_CFG_0_dst_stride_val_OFS)&DMA_STRIDE_MODE_CFG_0_dst_stride_val_MASK) + ((src_inc<<DMA_STRIDE_MODE_CFG_0_src_inc_OFS)&DMA_STRIDE_MODE_CFG_0_src_inc_MASK) + ((dst_inc<<DMA_STRIDE_MODE_CFG_0_dst_inc_OFS)&DMA_STRIDE_MODE_CFG_0_dst_inc_MASK);
}

static inline void DMA_STRIDE_MODE_CFG_1_WRITE(DMA_REGS_s * registers, uint32_t stride_mode_src_base_addr) {
    registers->STRIDE_MODE_CFG_1.packed_w =  + ((stride_mode_src_base_addr<<DMA_STRIDE_MODE_CFG_1_stride_mode_src_base_addr_OFS)&DMA_STRIDE_MODE_CFG_1_stride_mode_src_base_addr_MASK);
}

static inline void DMA_STRIDE_MODE_CFG_2_WRITE(DMA_REGS_s * registers, uint32_t stride_mode_dst_base_addr) {
    registers->STRIDE_MODE_CFG_2.packed_w =  + ((stride_mode_dst_base_addr<<DMA_STRIDE_MODE_CFG_2_stride_mode_dst_base_addr_OFS)&DMA_STRIDE_MODE_CFG_2_stride_mode_dst_base_addr_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_0_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl0) {
    registers->DMA_EARLY_IRQ_0.packed_w =  + ((rem_transaction_chnl0<<DMA_DMA_EARLY_IRQ_0_rem_transaction_chnl0_OFS)&DMA_DMA_EARLY_IRQ_0_rem_transaction_chnl0_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_1_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl1) {
    registers->DMA_EARLY_IRQ_1.packed_w =  + ((rem_transaction_chnl1<<DMA_DMA_EARLY_IRQ_1_rem_transaction_chnl1_OFS)&DMA_DMA_EARLY_IRQ_1_rem_transaction_chnl1_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_2_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl2) {
    registers->DMA_EARLY_IRQ_2.packed_w =  + ((rem_transaction_chnl2<<DMA_DMA_EARLY_IRQ_2_rem_transaction_chnl2_OFS)&DMA_DMA_EARLY_IRQ_2_rem_transaction_chnl2_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_3_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl3) {
    registers->DMA_EARLY_IRQ_3.packed_w =  + ((rem_transaction_chnl3<<DMA_DMA_EARLY_IRQ_3_rem_transaction_chnl3_OFS)&DMA_DMA_EARLY_IRQ_3_rem_transaction_chnl3_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_4_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl4) {
    registers->DMA_EARLY_IRQ_4.packed_w =  + ((rem_transaction_chnl4<<DMA_DMA_EARLY_IRQ_4_rem_transaction_chnl4_OFS)&DMA_DMA_EARLY_IRQ_4_rem_transaction_chnl4_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_5_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl5) {
    registers->DMA_EARLY_IRQ_5.packed_w =  + ((rem_transaction_chnl5<<DMA_DMA_EARLY_IRQ_5_rem_transaction_chnl5_OFS)&DMA_DMA_EARLY_IRQ_5_rem_transaction_chnl5_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_6_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl6) {
    registers->DMA_EARLY_IRQ_6.packed_w =  + ((rem_transaction_chnl6<<DMA_DMA_EARLY_IRQ_6_rem_transaction_chnl6_OFS)&DMA_DMA_EARLY_IRQ_6_rem_transaction_chnl6_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_7_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl7) {
    registers->DMA_EARLY_IRQ_7.packed_w =  + ((rem_transaction_chnl7<<DMA_DMA_EARLY_IRQ_7_rem_transaction_chnl7_OFS)&DMA_DMA_EARLY_IRQ_7_rem_transaction_chnl7_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_8_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl8) {
    registers->DMA_EARLY_IRQ_8.packed_w =  + ((rem_transaction_chnl8<<DMA_DMA_EARLY_IRQ_8_rem_transaction_chnl8_OFS)&DMA_DMA_EARLY_IRQ_8_rem_transaction_chnl8_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_9_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl9) {
    registers->DMA_EARLY_IRQ_9.packed_w =  + ((rem_transaction_chnl9<<DMA_DMA_EARLY_IRQ_9_rem_transaction_chnl9_OFS)&DMA_DMA_EARLY_IRQ_9_rem_transaction_chnl9_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_10_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl10) {
    registers->DMA_EARLY_IRQ_10.packed_w =  + ((rem_transaction_chnl10<<DMA_DMA_EARLY_IRQ_10_rem_transaction_chnl10_OFS)&DMA_DMA_EARLY_IRQ_10_rem_transaction_chnl10_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_11_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl11) {
    registers->DMA_EARLY_IRQ_11.packed_w =  + ((rem_transaction_chnl11<<DMA_DMA_EARLY_IRQ_11_rem_transaction_chnl11_OFS)&DMA_DMA_EARLY_IRQ_11_rem_transaction_chnl11_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_12_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl12) {
    registers->DMA_EARLY_IRQ_12.packed_w =  + ((rem_transaction_chnl12<<DMA_DMA_EARLY_IRQ_12_rem_transaction_chnl12_OFS)&DMA_DMA_EARLY_IRQ_12_rem_transaction_chnl12_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_13_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl13) {
    registers->DMA_EARLY_IRQ_13.packed_w =  + ((rem_transaction_chnl13<<DMA_DMA_EARLY_IRQ_13_rem_transaction_chnl13_OFS)&DMA_DMA_EARLY_IRQ_13_rem_transaction_chnl13_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_14_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl14) {
    registers->DMA_EARLY_IRQ_14.packed_w =  + ((rem_transaction_chnl14<<DMA_DMA_EARLY_IRQ_14_rem_transaction_chnl14_OFS)&DMA_DMA_EARLY_IRQ_14_rem_transaction_chnl14_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_15_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl15) {
    registers->DMA_EARLY_IRQ_15.packed_w =  + ((rem_transaction_chnl15<<DMA_DMA_EARLY_IRQ_15_rem_transaction_chnl15_OFS)&DMA_DMA_EARLY_IRQ_15_rem_transaction_chnl15_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_CFG_WRITE(DMA_REGS_s * registers, uint32_t early_irq_alternate_sel) {
    registers->DMA_EARLY_IRQ_CFG.packed_w =  + ((early_irq_alternate_sel<<DMA_DMA_EARLY_IRQ_CFG_early_irq_alternate_sel_OFS)&DMA_DMA_EARLY_IRQ_CFG_early_irq_alternate_sel_MASK);
}

static inline void DMA_REPEATED_TRANSFER_EN_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_en) {
    registers->REPEATED_TRANSFER_EN.packed_w =  + ((rptd_trnsfr_en<<DMA_REPEATED_TRANSFER_EN_rptd_trnsfr_en_OFS)&DMA_REPEATED_TRANSFER_EN_rptd_trnsfr_en_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_0_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl0) {
    registers->REPEATED_TRANSFER_CHNL_0.packed_w =  + ((rptd_trnsfr_total_transaction_chnl0<<DMA_REPEATED_TRANSFER_CHNL_0_rptd_trnsfr_total_transaction_chnl0_OFS)&DMA_REPEATED_TRANSFER_CHNL_0_rptd_trnsfr_total_transaction_chnl0_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_1_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl1) {
    registers->REPEATED_TRANSFER_CHNL_1.packed_w =  + ((rptd_trnsfr_total_transaction_chnl1<<DMA_REPEATED_TRANSFER_CHNL_1_rptd_trnsfr_total_transaction_chnl1_OFS)&DMA_REPEATED_TRANSFER_CHNL_1_rptd_trnsfr_total_transaction_chnl1_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_2_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl2) {
    registers->REPEATED_TRANSFER_CHNL_2.packed_w =  + ((rptd_trnsfr_total_transaction_chnl2<<DMA_REPEATED_TRANSFER_CHNL_2_rptd_trnsfr_total_transaction_chnl2_OFS)&DMA_REPEATED_TRANSFER_CHNL_2_rptd_trnsfr_total_transaction_chnl2_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_3_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl3) {
    registers->REPEATED_TRANSFER_CHNL_3.packed_w =  + ((rptd_trnsfr_total_transaction_chnl3<<DMA_REPEATED_TRANSFER_CHNL_3_rptd_trnsfr_total_transaction_chnl3_OFS)&DMA_REPEATED_TRANSFER_CHNL_3_rptd_trnsfr_total_transaction_chnl3_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_4_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl4) {
    registers->REPEATED_TRANSFER_CHNL_4.packed_w =  + ((rptd_trnsfr_total_transaction_chnl4<<DMA_REPEATED_TRANSFER_CHNL_4_rptd_trnsfr_total_transaction_chnl4_OFS)&DMA_REPEATED_TRANSFER_CHNL_4_rptd_trnsfr_total_transaction_chnl4_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_5_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl5) {
    registers->REPEATED_TRANSFER_CHNL_5.packed_w =  + ((rptd_trnsfr_total_transaction_chnl5<<DMA_REPEATED_TRANSFER_CHNL_5_rptd_trnsfr_total_transaction_chnl5_OFS)&DMA_REPEATED_TRANSFER_CHNL_5_rptd_trnsfr_total_transaction_chnl5_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_6_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl6) {
    registers->REPEATED_TRANSFER_CHNL_6.packed_w =  + ((rptd_trnsfr_total_transaction_chnl6<<DMA_REPEATED_TRANSFER_CHNL_6_rptd_trnsfr_total_transaction_chnl6_OFS)&DMA_REPEATED_TRANSFER_CHNL_6_rptd_trnsfr_total_transaction_chnl6_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_7_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl7) {
    registers->REPEATED_TRANSFER_CHNL_7.packed_w =  + ((rptd_trnsfr_total_transaction_chnl7<<DMA_REPEATED_TRANSFER_CHNL_7_rptd_trnsfr_total_transaction_chnl7_OFS)&DMA_REPEATED_TRANSFER_CHNL_7_rptd_trnsfr_total_transaction_chnl7_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_8_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl8) {
    registers->REPEATED_TRANSFER_CHNL_8.packed_w =  + ((rptd_trnsfr_total_transaction_chnl8<<DMA_REPEATED_TRANSFER_CHNL_8_rptd_trnsfr_total_transaction_chnl8_OFS)&DMA_REPEATED_TRANSFER_CHNL_8_rptd_trnsfr_total_transaction_chnl8_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_9_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl9) {
    registers->REPEATED_TRANSFER_CHNL_9.packed_w =  + ((rptd_trnsfr_total_transaction_chnl9<<DMA_REPEATED_TRANSFER_CHNL_9_rptd_trnsfr_total_transaction_chnl9_OFS)&DMA_REPEATED_TRANSFER_CHNL_9_rptd_trnsfr_total_transaction_chnl9_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_10_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl10) {
    registers->REPEATED_TRANSFER_CHNL_10.packed_w =  + ((rptd_trnsfr_total_transaction_chnl10<<DMA_REPEATED_TRANSFER_CHNL_10_rptd_trnsfr_total_transaction_chnl10_OFS)&DMA_REPEATED_TRANSFER_CHNL_10_rptd_trnsfr_total_transaction_chnl10_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_11_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl11) {
    registers->REPEATED_TRANSFER_CHNL_11.packed_w =  + ((rptd_trnsfr_total_transaction_chnl11<<DMA_REPEATED_TRANSFER_CHNL_11_rptd_trnsfr_total_transaction_chnl11_OFS)&DMA_REPEATED_TRANSFER_CHNL_11_rptd_trnsfr_total_transaction_chnl11_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_12_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl12) {
    registers->REPEATED_TRANSFER_CHNL_12.packed_w =  + ((rptd_trnsfr_total_transaction_chnl12<<DMA_REPEATED_TRANSFER_CHNL_12_rptd_trnsfr_total_transaction_chnl12_OFS)&DMA_REPEATED_TRANSFER_CHNL_12_rptd_trnsfr_total_transaction_chnl12_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_13_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl13) {
    registers->REPEATED_TRANSFER_CHNL_13.packed_w =  + ((rptd_trnsfr_total_transaction_chnl13<<DMA_REPEATED_TRANSFER_CHNL_13_rptd_trnsfr_total_transaction_chnl13_OFS)&DMA_REPEATED_TRANSFER_CHNL_13_rptd_trnsfr_total_transaction_chnl13_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_14_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl14) {
    registers->REPEATED_TRANSFER_CHNL_14.packed_w =  + ((rptd_trnsfr_total_transaction_chnl14<<DMA_REPEATED_TRANSFER_CHNL_14_rptd_trnsfr_total_transaction_chnl14_OFS)&DMA_REPEATED_TRANSFER_CHNL_14_rptd_trnsfr_total_transaction_chnl14_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_15_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl15) {
    registers->REPEATED_TRANSFER_CHNL_15.packed_w =  + ((rptd_trnsfr_total_transaction_chnl15<<DMA_REPEATED_TRANSFER_CHNL_15_rptd_trnsfr_total_transaction_chnl15_OFS)&DMA_REPEATED_TRANSFER_CHNL_15_rptd_trnsfr_total_transaction_chnl15_MASK);
}

static inline void DMA_REPEATED_TRANSFER_ALTERNATE_SEL_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_alternate_sel) {
    registers->REPEATED_TRANSFER_ALTERNATE_SEL.packed_w =  + ((rptd_trnsfr_alternate_sel<<DMA_REPEATED_TRANSFER_ALTERNATE_SEL_rptd_trnsfr_alternate_sel_OFS)&DMA_REPEATED_TRANSFER_ALTERNATE_SEL_rptd_trnsfr_alternate_sel_MASK);
}

static inline void DMA_DMA_ARBITRATION_WRITE(DMA_REGS_s * registers, uint32_t dma_rr_en) {
    registers->DMA_ARBITRATION.packed_w =  + ((dma_rr_en<<DMA_DMA_ARBITRATION_dma_rr_en_OFS)&DMA_DMA_ARBITRATION_dma_rr_en_MASK);
}

static inline void DMA_DMA_ARBITRATION_MASK_WRITE(DMA_REGS_s * registers, uint32_t dma_rr_mask) {
    registers->DMA_ARBITRATION_MASK.packed_w =  + ((dma_rr_mask<<DMA_DMA_ARBITRATION_MASK_dma_rr_mask_OFS)&DMA_DMA_ARBITRATION_MASK_dma_rr_mask_MASK);
}

