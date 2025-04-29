#include "DMA_REGS.h"

static inline void DMA_DESC_WRITE(DMA_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<DMA_DESC_MODULE_TYPE_OFS)&DMA_DESC_MODULE_TYPE_MASK) + ((modue_subtype<<DMA_DESC_MODUE_SUBTYPE_OFS)&DMA_DESC_MODUE_SUBTYPE_MASK) + ((major_rev<<DMA_DESC_MAJOR_REV_OFS)&DMA_DESC_MAJOR_REV_MASK) + ((minor_rev<<DMA_DESC_MINOR_REV_OFS)&DMA_DESC_MINOR_REV_MASK);
}

static inline void DMA_PWR_EN_WRITE(DMA_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<DMA_PWR_EN_PWR_EN_OFS)&DMA_PWR_EN_PWR_EN_MASK) + ((pwr_en_key<<DMA_PWR_EN_PWR_EN_KEY_OFS)&DMA_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void DMA_RST_CTRL_WRITE(DMA_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<DMA_RST_CTRL_RST_OFS)&DMA_RST_CTRL_RST_MASK) + ((rst_sts_clr<<DMA_RST_CTRL_RST_STS_CLR_OFS)&DMA_RST_CTRL_RST_STS_CLR_MASK) + ((rst_key<<DMA_RST_CTRL_RST_KEY_OFS)&DMA_RST_CTRL_RST_KEY_MASK);
}

static inline void DMA_RST_STS_WRITE(DMA_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<DMA_RST_STS_RST_STS_OFS)&DMA_RST_STS_RST_STS_MASK);
}

static inline void DMA_CLK_CTRL_WRITE(DMA_REGS_s * registers, uint32_t clk_en) {
    registers->CLK_CTRL.packed_w =  + ((clk_en<<DMA_CLK_CTRL_CLK_EN_OFS)&DMA_CLK_CTRL_CLK_EN_MASK);
}

static inline void DMA_DBG_CTRL_WRITE(DMA_REGS_s * registers, uint32_t halt_mode) {
    registers->DBG_CTRL.packed_w =  + ((halt_mode<<DMA_DBG_CTRL_HALT_MODE_OFS)&DMA_DBG_CTRL_HALT_MODE_MASK);
}

static inline void DMA_INTR_STS_WRITE(DMA_REGS_s * registers, uint32_t intr_first) {
    registers->INTR_STS.packed_w =  + ((intr_first<<DMA_INTR_STS_INTR_FIRST_OFS)&DMA_INTR_STS_INTR_FIRST_MASK);
}

static inline void DMA_INTR_EVENT_WRITE(DMA_REGS_s * registers, uint32_t dma_done_0, uint32_t dma_done_1, uint32_t dma_done_2, uint32_t dma_done_3, uint32_t dma_done_4, uint32_t dma_done_5, uint32_t dma_done_6, uint32_t dma_done_7, uint32_t dma_done_8, uint32_t dma_done_9, uint32_t dma_done_10, uint32_t dma_done_11, uint32_t dma_done_12, uint32_t dma_done_13, uint32_t dma_done_14, uint32_t dma_done_15, uint32_t early_irq_0, uint32_t early_irq_1, uint32_t early_irq_2, uint32_t early_irq_3, uint32_t early_irq_4, uint32_t early_irq_5, uint32_t early_irq_6, uint32_t early_irq_7, uint32_t early_irq_8, uint32_t early_irq_9, uint32_t early_irq_10, uint32_t early_irq_11, uint32_t early_irq_12, uint32_t early_irq_13, uint32_t early_irq_14, uint32_t early_irq_15) {
    registers->INTR_EVENT.packed_w =  + ((dma_done_0<<DMA_INTR_EVENT_DMA_DONE_0_OFS)&DMA_INTR_EVENT_DMA_DONE_0_MASK) + ((dma_done_1<<DMA_INTR_EVENT_DMA_DONE_1_OFS)&DMA_INTR_EVENT_DMA_DONE_1_MASK) + ((dma_done_2<<DMA_INTR_EVENT_DMA_DONE_2_OFS)&DMA_INTR_EVENT_DMA_DONE_2_MASK) + ((dma_done_3<<DMA_INTR_EVENT_DMA_DONE_3_OFS)&DMA_INTR_EVENT_DMA_DONE_3_MASK) + ((dma_done_4<<DMA_INTR_EVENT_DMA_DONE_4_OFS)&DMA_INTR_EVENT_DMA_DONE_4_MASK) + ((dma_done_5<<DMA_INTR_EVENT_DMA_DONE_5_OFS)&DMA_INTR_EVENT_DMA_DONE_5_MASK) + ((dma_done_6<<DMA_INTR_EVENT_DMA_DONE_6_OFS)&DMA_INTR_EVENT_DMA_DONE_6_MASK) + ((dma_done_7<<DMA_INTR_EVENT_DMA_DONE_7_OFS)&DMA_INTR_EVENT_DMA_DONE_7_MASK) + ((dma_done_8<<DMA_INTR_EVENT_DMA_DONE_8_OFS)&DMA_INTR_EVENT_DMA_DONE_8_MASK) + ((dma_done_9<<DMA_INTR_EVENT_DMA_DONE_9_OFS)&DMA_INTR_EVENT_DMA_DONE_9_MASK) + ((dma_done_10<<DMA_INTR_EVENT_DMA_DONE_10_OFS)&DMA_INTR_EVENT_DMA_DONE_10_MASK) + ((dma_done_11<<DMA_INTR_EVENT_DMA_DONE_11_OFS)&DMA_INTR_EVENT_DMA_DONE_11_MASK) + ((dma_done_12<<DMA_INTR_EVENT_DMA_DONE_12_OFS)&DMA_INTR_EVENT_DMA_DONE_12_MASK) + ((dma_done_13<<DMA_INTR_EVENT_DMA_DONE_13_OFS)&DMA_INTR_EVENT_DMA_DONE_13_MASK) + ((dma_done_14<<DMA_INTR_EVENT_DMA_DONE_14_OFS)&DMA_INTR_EVENT_DMA_DONE_14_MASK) + ((dma_done_15<<DMA_INTR_EVENT_DMA_DONE_15_OFS)&DMA_INTR_EVENT_DMA_DONE_15_MASK) + ((early_irq_0<<DMA_INTR_EVENT_EARLY_IRQ_0_OFS)&DMA_INTR_EVENT_EARLY_IRQ_0_MASK) + ((early_irq_1<<DMA_INTR_EVENT_EARLY_IRQ_1_OFS)&DMA_INTR_EVENT_EARLY_IRQ_1_MASK) + ((early_irq_2<<DMA_INTR_EVENT_EARLY_IRQ_2_OFS)&DMA_INTR_EVENT_EARLY_IRQ_2_MASK) + ((early_irq_3<<DMA_INTR_EVENT_EARLY_IRQ_3_OFS)&DMA_INTR_EVENT_EARLY_IRQ_3_MASK) + ((early_irq_4<<DMA_INTR_EVENT_EARLY_IRQ_4_OFS)&DMA_INTR_EVENT_EARLY_IRQ_4_MASK) + ((early_irq_5<<DMA_INTR_EVENT_EARLY_IRQ_5_OFS)&DMA_INTR_EVENT_EARLY_IRQ_5_MASK) + ((early_irq_6<<DMA_INTR_EVENT_EARLY_IRQ_6_OFS)&DMA_INTR_EVENT_EARLY_IRQ_6_MASK) + ((early_irq_7<<DMA_INTR_EVENT_EARLY_IRQ_7_OFS)&DMA_INTR_EVENT_EARLY_IRQ_7_MASK) + ((early_irq_8<<DMA_INTR_EVENT_EARLY_IRQ_8_OFS)&DMA_INTR_EVENT_EARLY_IRQ_8_MASK) + ((early_irq_9<<DMA_INTR_EVENT_EARLY_IRQ_9_OFS)&DMA_INTR_EVENT_EARLY_IRQ_9_MASK) + ((early_irq_10<<DMA_INTR_EVENT_EARLY_IRQ_10_OFS)&DMA_INTR_EVENT_EARLY_IRQ_10_MASK) + ((early_irq_11<<DMA_INTR_EVENT_EARLY_IRQ_11_OFS)&DMA_INTR_EVENT_EARLY_IRQ_11_MASK) + ((early_irq_12<<DMA_INTR_EVENT_EARLY_IRQ_12_OFS)&DMA_INTR_EVENT_EARLY_IRQ_12_MASK) + ((early_irq_13<<DMA_INTR_EVENT_EARLY_IRQ_13_OFS)&DMA_INTR_EVENT_EARLY_IRQ_13_MASK) + ((early_irq_14<<DMA_INTR_EVENT_EARLY_IRQ_14_OFS)&DMA_INTR_EVENT_EARLY_IRQ_14_MASK) + ((early_irq_15<<DMA_INTR_EVENT_EARLY_IRQ_15_OFS)&DMA_INTR_EVENT_EARLY_IRQ_15_MASK);
}

static inline void DMA_INTR_EN_0_WRITE(DMA_REGS_s * registers, uint32_t dma_done_en_0, uint32_t dma_done_en_1, uint32_t dma_done_en_2, uint32_t dma_done_en_3, uint32_t dma_done_en_4, uint32_t dma_done_en_5, uint32_t dma_done_en_6, uint32_t dma_done_en_7, uint32_t dma_done_en_8, uint32_t dma_done_en_9, uint32_t dma_done_en_10, uint32_t dma_done_en_11, uint32_t dma_done_en_12, uint32_t dma_done_en_13, uint32_t dma_done_en_14, uint32_t dma_done_en_15) {
    registers->INTR_EN_0.packed_w =  + ((dma_done_en_0<<DMA_INTR_EN_0_DMA_DONE_EN_0_OFS)&DMA_INTR_EN_0_DMA_DONE_EN_0_MASK) + ((dma_done_en_1<<DMA_INTR_EN_0_DMA_DONE_EN_1_OFS)&DMA_INTR_EN_0_DMA_DONE_EN_1_MASK) + ((dma_done_en_2<<DMA_INTR_EN_0_DMA_DONE_EN_2_OFS)&DMA_INTR_EN_0_DMA_DONE_EN_2_MASK) + ((dma_done_en_3<<DMA_INTR_EN_0_DMA_DONE_EN_3_OFS)&DMA_INTR_EN_0_DMA_DONE_EN_3_MASK) + ((dma_done_en_4<<DMA_INTR_EN_0_DMA_DONE_EN_4_OFS)&DMA_INTR_EN_0_DMA_DONE_EN_4_MASK) + ((dma_done_en_5<<DMA_INTR_EN_0_DMA_DONE_EN_5_OFS)&DMA_INTR_EN_0_DMA_DONE_EN_5_MASK) + ((dma_done_en_6<<DMA_INTR_EN_0_DMA_DONE_EN_6_OFS)&DMA_INTR_EN_0_DMA_DONE_EN_6_MASK) + ((dma_done_en_7<<DMA_INTR_EN_0_DMA_DONE_EN_7_OFS)&DMA_INTR_EN_0_DMA_DONE_EN_7_MASK) + ((dma_done_en_8<<DMA_INTR_EN_0_DMA_DONE_EN_8_OFS)&DMA_INTR_EN_0_DMA_DONE_EN_8_MASK) + ((dma_done_en_9<<DMA_INTR_EN_0_DMA_DONE_EN_9_OFS)&DMA_INTR_EN_0_DMA_DONE_EN_9_MASK) + ((dma_done_en_10<<DMA_INTR_EN_0_DMA_DONE_EN_10_OFS)&DMA_INTR_EN_0_DMA_DONE_EN_10_MASK) + ((dma_done_en_11<<DMA_INTR_EN_0_DMA_DONE_EN_11_OFS)&DMA_INTR_EN_0_DMA_DONE_EN_11_MASK) + ((dma_done_en_12<<DMA_INTR_EN_0_DMA_DONE_EN_12_OFS)&DMA_INTR_EN_0_DMA_DONE_EN_12_MASK) + ((dma_done_en_13<<DMA_INTR_EN_0_DMA_DONE_EN_13_OFS)&DMA_INTR_EN_0_DMA_DONE_EN_13_MASK) + ((dma_done_en_14<<DMA_INTR_EN_0_DMA_DONE_EN_14_OFS)&DMA_INTR_EN_0_DMA_DONE_EN_14_MASK) + ((dma_done_en_15<<DMA_INTR_EN_0_DMA_DONE_EN_15_OFS)&DMA_INTR_EN_0_DMA_DONE_EN_15_MASK);
}

static inline void DMA_INTR_EN_1_WRITE(DMA_REGS_s * registers, uint32_t early_irq_en_0, uint32_t early_irq_en_1, uint32_t early_irq_en_2, uint32_t early_irq_en_3, uint32_t early_irq_en_4, uint32_t early_irq_en_5, uint32_t early_irq_en_6, uint32_t early_irq_en_7, uint32_t early_irq_en_8, uint32_t early_irq_en_9, uint32_t early_irq_en_10, uint32_t early_irq_en_11, uint32_t early_irq_en_12, uint32_t early_irq_en_13, uint32_t early_irq_en_14, uint32_t early_irq_en_15) {
    registers->INTR_EN_1.packed_w =  + ((early_irq_en_0<<DMA_INTR_EN_1_EARLY_IRQ_EN_0_OFS)&DMA_INTR_EN_1_EARLY_IRQ_EN_0_MASK) + ((early_irq_en_1<<DMA_INTR_EN_1_EARLY_IRQ_EN_1_OFS)&DMA_INTR_EN_1_EARLY_IRQ_EN_1_MASK) + ((early_irq_en_2<<DMA_INTR_EN_1_EARLY_IRQ_EN_2_OFS)&DMA_INTR_EN_1_EARLY_IRQ_EN_2_MASK) + ((early_irq_en_3<<DMA_INTR_EN_1_EARLY_IRQ_EN_3_OFS)&DMA_INTR_EN_1_EARLY_IRQ_EN_3_MASK) + ((early_irq_en_4<<DMA_INTR_EN_1_EARLY_IRQ_EN_4_OFS)&DMA_INTR_EN_1_EARLY_IRQ_EN_4_MASK) + ((early_irq_en_5<<DMA_INTR_EN_1_EARLY_IRQ_EN_5_OFS)&DMA_INTR_EN_1_EARLY_IRQ_EN_5_MASK) + ((early_irq_en_6<<DMA_INTR_EN_1_EARLY_IRQ_EN_6_OFS)&DMA_INTR_EN_1_EARLY_IRQ_EN_6_MASK) + ((early_irq_en_7<<DMA_INTR_EN_1_EARLY_IRQ_EN_7_OFS)&DMA_INTR_EN_1_EARLY_IRQ_EN_7_MASK) + ((early_irq_en_8<<DMA_INTR_EN_1_EARLY_IRQ_EN_8_OFS)&DMA_INTR_EN_1_EARLY_IRQ_EN_8_MASK) + ((early_irq_en_9<<DMA_INTR_EN_1_EARLY_IRQ_EN_9_OFS)&DMA_INTR_EN_1_EARLY_IRQ_EN_9_MASK) + ((early_irq_en_10<<DMA_INTR_EN_1_EARLY_IRQ_EN_10_OFS)&DMA_INTR_EN_1_EARLY_IRQ_EN_10_MASK) + ((early_irq_en_11<<DMA_INTR_EN_1_EARLY_IRQ_EN_11_OFS)&DMA_INTR_EN_1_EARLY_IRQ_EN_11_MASK) + ((early_irq_en_12<<DMA_INTR_EN_1_EARLY_IRQ_EN_12_OFS)&DMA_INTR_EN_1_EARLY_IRQ_EN_12_MASK) + ((early_irq_en_13<<DMA_INTR_EN_1_EARLY_IRQ_EN_13_OFS)&DMA_INTR_EN_1_EARLY_IRQ_EN_13_MASK) + ((early_irq_en_14<<DMA_INTR_EN_1_EARLY_IRQ_EN_14_OFS)&DMA_INTR_EN_1_EARLY_IRQ_EN_14_MASK) + ((early_irq_en_15<<DMA_INTR_EN_1_EARLY_IRQ_EN_15_OFS)&DMA_INTR_EN_1_EARLY_IRQ_EN_15_MASK);
}

static inline void DMA_INTR_NMI_EN_0_WRITE(DMA_REGS_s * registers, uint32_t dma_done_nmi_en_0, uint32_t dma_done_nmi_en_1, uint32_t dma_done_nmi_en_2, uint32_t dma_done_nmi_en_3, uint32_t dma_done_nmi_en_4, uint32_t dma_done_nmi_en_5, uint32_t dma_done_nmi_en_6, uint32_t dma_done_nmi_en_7, uint32_t dma_done_nmi_en_8, uint32_t dma_done_nmi_en_9, uint32_t dma_done_nmi_en_10, uint32_t dma_done_nmi_en_11, uint32_t dma_done_nmi_en_12, uint32_t dma_done_nmi_en_13, uint32_t dma_done_nmi_en_14, uint32_t dma_done_nmi_en_15) {
    registers->INTR_NMI_EN_0.packed_w =  + ((dma_done_nmi_en_0<<DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_0_OFS)&DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_0_MASK) + ((dma_done_nmi_en_1<<DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_1_OFS)&DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_1_MASK) + ((dma_done_nmi_en_2<<DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_2_OFS)&DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_2_MASK) + ((dma_done_nmi_en_3<<DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_3_OFS)&DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_3_MASK) + ((dma_done_nmi_en_4<<DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_4_OFS)&DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_4_MASK) + ((dma_done_nmi_en_5<<DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_5_OFS)&DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_5_MASK) + ((dma_done_nmi_en_6<<DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_6_OFS)&DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_6_MASK) + ((dma_done_nmi_en_7<<DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_7_OFS)&DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_7_MASK) + ((dma_done_nmi_en_8<<DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_8_OFS)&DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_8_MASK) + ((dma_done_nmi_en_9<<DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_9_OFS)&DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_9_MASK) + ((dma_done_nmi_en_10<<DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_10_OFS)&DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_10_MASK) + ((dma_done_nmi_en_11<<DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_11_OFS)&DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_11_MASK) + ((dma_done_nmi_en_12<<DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_12_OFS)&DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_12_MASK) + ((dma_done_nmi_en_13<<DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_13_OFS)&DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_13_MASK) + ((dma_done_nmi_en_14<<DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_14_OFS)&DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_14_MASK) + ((dma_done_nmi_en_15<<DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_15_OFS)&DMA_INTR_NMI_EN_0_DMA_DONE_NMI_EN_15_MASK);
}

static inline void DMA_INTR_NMI_EN_1_WRITE(DMA_REGS_s * registers, uint32_t early_irq_nmi_en_0, uint32_t early_irq_nmi_en_1, uint32_t early_irq_nmi_en_2, uint32_t early_irq_nmi_en_3, uint32_t early_irq_nmi_en_4, uint32_t early_irq_nmi_en_5, uint32_t early_irq_nmi_en_6, uint32_t early_irq_nmi_en_7, uint32_t early_irq_nmi_en_8, uint32_t early_irq_nmi_en_9, uint32_t early_irq_nmi_en_10, uint32_t early_irq_nmi_en_11, uint32_t early_irq_nmi_en_12, uint32_t early_irq_nmi_en_13, uint32_t early_irq_nmi_en_14, uint32_t early_irq_nmi_en_15) {
    registers->INTR_NMI_EN_1.packed_w =  + ((early_irq_nmi_en_0<<DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_0_OFS)&DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_0_MASK) + ((early_irq_nmi_en_1<<DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_1_OFS)&DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_1_MASK) + ((early_irq_nmi_en_2<<DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_2_OFS)&DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_2_MASK) + ((early_irq_nmi_en_3<<DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_3_OFS)&DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_3_MASK) + ((early_irq_nmi_en_4<<DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_4_OFS)&DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_4_MASK) + ((early_irq_nmi_en_5<<DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_5_OFS)&DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_5_MASK) + ((early_irq_nmi_en_6<<DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_6_OFS)&DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_6_MASK) + ((early_irq_nmi_en_7<<DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_7_OFS)&DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_7_MASK) + ((early_irq_nmi_en_8<<DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_8_OFS)&DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_8_MASK) + ((early_irq_nmi_en_9<<DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_9_OFS)&DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_9_MASK) + ((early_irq_nmi_en_10<<DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_10_OFS)&DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_10_MASK) + ((early_irq_nmi_en_11<<DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_11_OFS)&DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_11_MASK) + ((early_irq_nmi_en_12<<DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_12_OFS)&DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_12_MASK) + ((early_irq_nmi_en_13<<DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_13_OFS)&DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_13_MASK) + ((early_irq_nmi_en_14<<DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_14_OFS)&DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_14_MASK) + ((early_irq_nmi_en_15<<DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_15_OFS)&DMA_INTR_NMI_EN_1_EARLY_IRQ_NMI_EN_15_MASK);
}

static inline void DMA_EVENT_EN_0_WRITE(DMA_REGS_s * registers, uint32_t dma_done_event_en_0, uint32_t dma_done_event_en_1, uint32_t dma_done_event_en_2, uint32_t dma_done_event_en_3, uint32_t dma_done_event_en_4, uint32_t dma_done_event_en_5, uint32_t dma_done_event_en_6, uint32_t dma_done_event_en_7, uint32_t dma_done_event_en_8, uint32_t dma_done_event_en_9, uint32_t dma_done_event_en_10, uint32_t dma_done_event_en_11, uint32_t dma_done_event_en_12, uint32_t dma_done_event_en_13, uint32_t dma_done_event_en_14, uint32_t dma_done_event_en_15) {
    registers->EVENT_EN_0.packed_w =  + ((dma_done_event_en_0<<DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_0_OFS)&DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_0_MASK) + ((dma_done_event_en_1<<DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_1_OFS)&DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_1_MASK) + ((dma_done_event_en_2<<DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_2_OFS)&DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_2_MASK) + ((dma_done_event_en_3<<DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_3_OFS)&DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_3_MASK) + ((dma_done_event_en_4<<DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_4_OFS)&DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_4_MASK) + ((dma_done_event_en_5<<DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_5_OFS)&DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_5_MASK) + ((dma_done_event_en_6<<DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_6_OFS)&DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_6_MASK) + ((dma_done_event_en_7<<DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_7_OFS)&DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_7_MASK) + ((dma_done_event_en_8<<DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_8_OFS)&DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_8_MASK) + ((dma_done_event_en_9<<DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_9_OFS)&DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_9_MASK) + ((dma_done_event_en_10<<DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_10_OFS)&DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_10_MASK) + ((dma_done_event_en_11<<DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_11_OFS)&DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_11_MASK) + ((dma_done_event_en_12<<DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_12_OFS)&DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_12_MASK) + ((dma_done_event_en_13<<DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_13_OFS)&DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_13_MASK) + ((dma_done_event_en_14<<DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_14_OFS)&DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_14_MASK) + ((dma_done_event_en_15<<DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_15_OFS)&DMA_EVENT_EN_0_DMA_DONE_EVENT_EN_15_MASK);
}

static inline void DMA_EVENT_EN_1_WRITE(DMA_REGS_s * registers, uint32_t early_irq_event_en_0, uint32_t early_irq_event_en_1, uint32_t early_irq_event_en_2, uint32_t early_irq_event_en_3, uint32_t early_irq_event_en_4, uint32_t early_irq_event_en_5, uint32_t early_irq_event_en_6, uint32_t early_irq_event_en_7, uint32_t early_irq_event_en_8, uint32_t early_irq_event_en_9, uint32_t early_irq_event_en_10, uint32_t early_irq_event_en_11, uint32_t early_irq_event_en_12, uint32_t early_irq_event_en_13, uint32_t early_irq_event_en_14, uint32_t early_irq_event_en_15) {
    registers->EVENT_EN_1.packed_w =  + ((early_irq_event_en_0<<DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_0_OFS)&DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_0_MASK) + ((early_irq_event_en_1<<DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_1_OFS)&DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_1_MASK) + ((early_irq_event_en_2<<DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_2_OFS)&DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_2_MASK) + ((early_irq_event_en_3<<DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_3_OFS)&DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_3_MASK) + ((early_irq_event_en_4<<DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_4_OFS)&DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_4_MASK) + ((early_irq_event_en_5<<DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_5_OFS)&DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_5_MASK) + ((early_irq_event_en_6<<DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_6_OFS)&DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_6_MASK) + ((early_irq_event_en_7<<DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_7_OFS)&DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_7_MASK) + ((early_irq_event_en_8<<DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_8_OFS)&DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_8_MASK) + ((early_irq_event_en_9<<DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_9_OFS)&DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_9_MASK) + ((early_irq_event_en_10<<DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_10_OFS)&DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_10_MASK) + ((early_irq_event_en_11<<DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_11_OFS)&DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_11_MASK) + ((early_irq_event_en_12<<DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_12_OFS)&DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_12_MASK) + ((early_irq_event_en_13<<DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_13_OFS)&DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_13_MASK) + ((early_irq_event_en_14<<DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_14_OFS)&DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_14_MASK) + ((early_irq_event_en_15<<DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_15_OFS)&DMA_EVENT_EN_1_EARLY_IRQ_EVENT_EN_15_MASK);
}

static inline void DMA_INTR_SW_SET_WRITE(DMA_REGS_s * registers, uint32_t dma_done_sw_set_0, uint32_t dma_done_sw_set_1, uint32_t dma_done_sw_set_2, uint32_t dma_done_sw_set_3, uint32_t dma_done_sw_set_4, uint32_t dma_done_sw_set_5, uint32_t dma_done_sw_set_6, uint32_t dma_done_sw_set_7, uint32_t dma_done_sw_set_8, uint32_t dma_done_sw_set_9, uint32_t dma_done_sw_set_10, uint32_t dma_done_sw_set_11, uint32_t dma_done_sw_set_12, uint32_t dma_done_sw_set_13, uint32_t dma_done_sw_set_14, uint32_t dma_done_sw_set_15, uint32_t early_irq_sw_set_0, uint32_t early_irq_sw_set_1, uint32_t early_irq_sw_set_2, uint32_t early_irq_sw_set_3, uint32_t early_irq_sw_set_4, uint32_t early_irq_sw_set_5, uint32_t early_irq_sw_set_6, uint32_t early_irq_sw_set_7, uint32_t early_irq_sw_set_8, uint32_t early_irq_sw_set_9, uint32_t early_irq_sw_set_10, uint32_t early_irq_sw_set_11, uint32_t early_irq_sw_set_12, uint32_t early_irq_sw_set_13, uint32_t early_irq_sw_set_14, uint32_t early_irq_sw_set_15) {
    registers->INTR_SW_SET.packed_w =  + ((dma_done_sw_set_0<<DMA_INTR_SW_SET_DMA_DONE_SW_SET_0_OFS)&DMA_INTR_SW_SET_DMA_DONE_SW_SET_0_MASK) + ((dma_done_sw_set_1<<DMA_INTR_SW_SET_DMA_DONE_SW_SET_1_OFS)&DMA_INTR_SW_SET_DMA_DONE_SW_SET_1_MASK) + ((dma_done_sw_set_2<<DMA_INTR_SW_SET_DMA_DONE_SW_SET_2_OFS)&DMA_INTR_SW_SET_DMA_DONE_SW_SET_2_MASK) + ((dma_done_sw_set_3<<DMA_INTR_SW_SET_DMA_DONE_SW_SET_3_OFS)&DMA_INTR_SW_SET_DMA_DONE_SW_SET_3_MASK) + ((dma_done_sw_set_4<<DMA_INTR_SW_SET_DMA_DONE_SW_SET_4_OFS)&DMA_INTR_SW_SET_DMA_DONE_SW_SET_4_MASK) + ((dma_done_sw_set_5<<DMA_INTR_SW_SET_DMA_DONE_SW_SET_5_OFS)&DMA_INTR_SW_SET_DMA_DONE_SW_SET_5_MASK) + ((dma_done_sw_set_6<<DMA_INTR_SW_SET_DMA_DONE_SW_SET_6_OFS)&DMA_INTR_SW_SET_DMA_DONE_SW_SET_6_MASK) + ((dma_done_sw_set_7<<DMA_INTR_SW_SET_DMA_DONE_SW_SET_7_OFS)&DMA_INTR_SW_SET_DMA_DONE_SW_SET_7_MASK) + ((dma_done_sw_set_8<<DMA_INTR_SW_SET_DMA_DONE_SW_SET_8_OFS)&DMA_INTR_SW_SET_DMA_DONE_SW_SET_8_MASK) + ((dma_done_sw_set_9<<DMA_INTR_SW_SET_DMA_DONE_SW_SET_9_OFS)&DMA_INTR_SW_SET_DMA_DONE_SW_SET_9_MASK) + ((dma_done_sw_set_10<<DMA_INTR_SW_SET_DMA_DONE_SW_SET_10_OFS)&DMA_INTR_SW_SET_DMA_DONE_SW_SET_10_MASK) + ((dma_done_sw_set_11<<DMA_INTR_SW_SET_DMA_DONE_SW_SET_11_OFS)&DMA_INTR_SW_SET_DMA_DONE_SW_SET_11_MASK) + ((dma_done_sw_set_12<<DMA_INTR_SW_SET_DMA_DONE_SW_SET_12_OFS)&DMA_INTR_SW_SET_DMA_DONE_SW_SET_12_MASK) + ((dma_done_sw_set_13<<DMA_INTR_SW_SET_DMA_DONE_SW_SET_13_OFS)&DMA_INTR_SW_SET_DMA_DONE_SW_SET_13_MASK) + ((dma_done_sw_set_14<<DMA_INTR_SW_SET_DMA_DONE_SW_SET_14_OFS)&DMA_INTR_SW_SET_DMA_DONE_SW_SET_14_MASK) + ((dma_done_sw_set_15<<DMA_INTR_SW_SET_DMA_DONE_SW_SET_15_OFS)&DMA_INTR_SW_SET_DMA_DONE_SW_SET_15_MASK) + ((early_irq_sw_set_0<<DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_0_OFS)&DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_0_MASK) + ((early_irq_sw_set_1<<DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_1_OFS)&DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_1_MASK) + ((early_irq_sw_set_2<<DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_2_OFS)&DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_2_MASK) + ((early_irq_sw_set_3<<DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_3_OFS)&DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_3_MASK) + ((early_irq_sw_set_4<<DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_4_OFS)&DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_4_MASK) + ((early_irq_sw_set_5<<DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_5_OFS)&DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_5_MASK) + ((early_irq_sw_set_6<<DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_6_OFS)&DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_6_MASK) + ((early_irq_sw_set_7<<DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_7_OFS)&DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_7_MASK) + ((early_irq_sw_set_8<<DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_8_OFS)&DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_8_MASK) + ((early_irq_sw_set_9<<DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_9_OFS)&DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_9_MASK) + ((early_irq_sw_set_10<<DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_10_OFS)&DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_10_MASK) + ((early_irq_sw_set_11<<DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_11_OFS)&DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_11_MASK) + ((early_irq_sw_set_12<<DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_12_OFS)&DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_12_MASK) + ((early_irq_sw_set_13<<DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_13_OFS)&DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_13_MASK) + ((early_irq_sw_set_14<<DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_14_OFS)&DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_14_MASK) + ((early_irq_sw_set_15<<DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_15_OFS)&DMA_INTR_SW_SET_EARLY_IRQ_SW_SET_15_MASK);
}

static inline void DMA_DMA_CFG_0_WRITE(DMA_REGS_s * registers, uint32_t ctrl_base_ptr) {
    registers->DMA_CFG_0.packed_w =  + ((ctrl_base_ptr<<DMA_DMA_CFG_0_CTRL_BASE_PTR_OFS)&DMA_DMA_CFG_0_CTRL_BASE_PTR_MASK);
}

static inline void DMA_DMA_CFG_1_WRITE(DMA_REGS_s * registers, uint32_t alt_ctrl_base_ptr) {
    registers->DMA_CFG_1.packed_w =  + ((alt_ctrl_base_ptr<<DMA_DMA_CFG_1_ALT_CTRL_BASE_PTR_OFS)&DMA_DMA_CFG_1_ALT_CTRL_BASE_PTR_MASK);
}

static inline void DMA_DMA_CFG_2_WRITE(DMA_REGS_s * registers, uint32_t chnls_minus_1, uint32_t master_enable) {
    registers->DMA_CFG_2.packed_w =  + ((chnls_minus_1<<DMA_DMA_CFG_2_CHNLS_MINUS_1_OFS)&DMA_DMA_CFG_2_CHNLS_MINUS_1_MASK) + ((master_enable<<DMA_DMA_CFG_2_MASTER_ENABLE_OFS)&DMA_DMA_CFG_2_MASTER_ENABLE_MASK);
}

static inline void DMA_DMA_WAITONREQ_WRITE(DMA_REGS_s * registers, uint32_t waitonreq) {
    registers->DMA_WAITONREQ.packed_w =  + ((waitonreq<<DMA_DMA_WAITONREQ_WAITONREQ_OFS)&DMA_DMA_WAITONREQ_WAITONREQ_MASK);
}

static inline void DMA_FILL_MODE_WRITE(DMA_REGS_s * registers, uint32_t fill_mode_en) {
    registers->FILL_MODE.packed_w =  + ((fill_mode_en<<DMA_FILL_MODE_FILL_MODE_EN_OFS)&DMA_FILL_MODE_FILL_MODE_EN_MASK);
}

static inline void DMA_FILL_MODE_CFG_WRITE(DMA_REGS_s * registers, uint32_t fill_mode_chnl_no, uint32_t fill_mode_incr_val, uint32_t fill_mode_init_val) {
    registers->FILL_MODE_CFG.packed_w =  + ((fill_mode_chnl_no<<DMA_FILL_MODE_CFG_FILL_MODE_CHNL_NO_OFS)&DMA_FILL_MODE_CFG_FILL_MODE_CHNL_NO_MASK) + ((fill_mode_incr_val<<DMA_FILL_MODE_CFG_FILL_MODE_INCR_VAL_OFS)&DMA_FILL_MODE_CFG_FILL_MODE_INCR_VAL_MASK) + ((fill_mode_init_val<<DMA_FILL_MODE_CFG_FILL_MODE_INIT_VAL_OFS)&DMA_FILL_MODE_CFG_FILL_MODE_INIT_VAL_MASK);
}

static inline void DMA_STRIDE_MODE_WRITE(DMA_REGS_s * registers, uint32_t stride_mode_en) {
    registers->STRIDE_MODE.packed_w =  + ((stride_mode_en<<DMA_STRIDE_MODE_STRIDE_MODE_EN_OFS)&DMA_STRIDE_MODE_STRIDE_MODE_EN_MASK);
}

static inline void DMA_STRIDE_MODE_CFG_0_WRITE(DMA_REGS_s * registers, uint32_t stride_mode_chnl_no, uint32_t src_stride_val, uint32_t dst_stride_val, uint32_t src_inc, uint32_t dst_inc) {
    registers->STRIDE_MODE_CFG_0.packed_w =  + ((stride_mode_chnl_no<<DMA_STRIDE_MODE_CFG_0_STRIDE_MODE_CHNL_NO_OFS)&DMA_STRIDE_MODE_CFG_0_STRIDE_MODE_CHNL_NO_MASK) + ((src_stride_val<<DMA_STRIDE_MODE_CFG_0_SRC_STRIDE_VAL_OFS)&DMA_STRIDE_MODE_CFG_0_SRC_STRIDE_VAL_MASK) + ((dst_stride_val<<DMA_STRIDE_MODE_CFG_0_DST_STRIDE_VAL_OFS)&DMA_STRIDE_MODE_CFG_0_DST_STRIDE_VAL_MASK) + ((src_inc<<DMA_STRIDE_MODE_CFG_0_SRC_INC_OFS)&DMA_STRIDE_MODE_CFG_0_SRC_INC_MASK) + ((dst_inc<<DMA_STRIDE_MODE_CFG_0_DST_INC_OFS)&DMA_STRIDE_MODE_CFG_0_DST_INC_MASK);
}

static inline void DMA_STRIDE_MODE_CFG_1_WRITE(DMA_REGS_s * registers, uint32_t stride_mode_src_base_addr) {
    registers->STRIDE_MODE_CFG_1.packed_w =  + ((stride_mode_src_base_addr<<DMA_STRIDE_MODE_CFG_1_STRIDE_MODE_SRC_BASE_ADDR_OFS)&DMA_STRIDE_MODE_CFG_1_STRIDE_MODE_SRC_BASE_ADDR_MASK);
}

static inline void DMA_STRIDE_MODE_CFG_2_WRITE(DMA_REGS_s * registers, uint32_t stride_mode_dst_base_addr) {
    registers->STRIDE_MODE_CFG_2.packed_w =  + ((stride_mode_dst_base_addr<<DMA_STRIDE_MODE_CFG_2_STRIDE_MODE_DST_BASE_ADDR_OFS)&DMA_STRIDE_MODE_CFG_2_STRIDE_MODE_DST_BASE_ADDR_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_0_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl0) {
    registers->DMA_EARLY_IRQ_0.packed_w =  + ((rem_transaction_chnl0<<DMA_DMA_EARLY_IRQ_0_REM_TRANSACTION_CHNL0_OFS)&DMA_DMA_EARLY_IRQ_0_REM_TRANSACTION_CHNL0_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_1_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl1) {
    registers->DMA_EARLY_IRQ_1.packed_w =  + ((rem_transaction_chnl1<<DMA_DMA_EARLY_IRQ_1_REM_TRANSACTION_CHNL1_OFS)&DMA_DMA_EARLY_IRQ_1_REM_TRANSACTION_CHNL1_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_2_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl2) {
    registers->DMA_EARLY_IRQ_2.packed_w =  + ((rem_transaction_chnl2<<DMA_DMA_EARLY_IRQ_2_REM_TRANSACTION_CHNL2_OFS)&DMA_DMA_EARLY_IRQ_2_REM_TRANSACTION_CHNL2_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_3_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl3) {
    registers->DMA_EARLY_IRQ_3.packed_w =  + ((rem_transaction_chnl3<<DMA_DMA_EARLY_IRQ_3_REM_TRANSACTION_CHNL3_OFS)&DMA_DMA_EARLY_IRQ_3_REM_TRANSACTION_CHNL3_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_4_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl4) {
    registers->DMA_EARLY_IRQ_4.packed_w =  + ((rem_transaction_chnl4<<DMA_DMA_EARLY_IRQ_4_REM_TRANSACTION_CHNL4_OFS)&DMA_DMA_EARLY_IRQ_4_REM_TRANSACTION_CHNL4_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_5_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl5) {
    registers->DMA_EARLY_IRQ_5.packed_w =  + ((rem_transaction_chnl5<<DMA_DMA_EARLY_IRQ_5_REM_TRANSACTION_CHNL5_OFS)&DMA_DMA_EARLY_IRQ_5_REM_TRANSACTION_CHNL5_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_6_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl6) {
    registers->DMA_EARLY_IRQ_6.packed_w =  + ((rem_transaction_chnl6<<DMA_DMA_EARLY_IRQ_6_REM_TRANSACTION_CHNL6_OFS)&DMA_DMA_EARLY_IRQ_6_REM_TRANSACTION_CHNL6_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_7_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl7) {
    registers->DMA_EARLY_IRQ_7.packed_w =  + ((rem_transaction_chnl7<<DMA_DMA_EARLY_IRQ_7_REM_TRANSACTION_CHNL7_OFS)&DMA_DMA_EARLY_IRQ_7_REM_TRANSACTION_CHNL7_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_8_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl8) {
    registers->DMA_EARLY_IRQ_8.packed_w =  + ((rem_transaction_chnl8<<DMA_DMA_EARLY_IRQ_8_REM_TRANSACTION_CHNL8_OFS)&DMA_DMA_EARLY_IRQ_8_REM_TRANSACTION_CHNL8_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_9_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl9) {
    registers->DMA_EARLY_IRQ_9.packed_w =  + ((rem_transaction_chnl9<<DMA_DMA_EARLY_IRQ_9_REM_TRANSACTION_CHNL9_OFS)&DMA_DMA_EARLY_IRQ_9_REM_TRANSACTION_CHNL9_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_10_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl10) {
    registers->DMA_EARLY_IRQ_10.packed_w =  + ((rem_transaction_chnl10<<DMA_DMA_EARLY_IRQ_10_REM_TRANSACTION_CHNL10_OFS)&DMA_DMA_EARLY_IRQ_10_REM_TRANSACTION_CHNL10_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_11_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl11) {
    registers->DMA_EARLY_IRQ_11.packed_w =  + ((rem_transaction_chnl11<<DMA_DMA_EARLY_IRQ_11_REM_TRANSACTION_CHNL11_OFS)&DMA_DMA_EARLY_IRQ_11_REM_TRANSACTION_CHNL11_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_12_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl12) {
    registers->DMA_EARLY_IRQ_12.packed_w =  + ((rem_transaction_chnl12<<DMA_DMA_EARLY_IRQ_12_REM_TRANSACTION_CHNL12_OFS)&DMA_DMA_EARLY_IRQ_12_REM_TRANSACTION_CHNL12_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_13_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl13) {
    registers->DMA_EARLY_IRQ_13.packed_w =  + ((rem_transaction_chnl13<<DMA_DMA_EARLY_IRQ_13_REM_TRANSACTION_CHNL13_OFS)&DMA_DMA_EARLY_IRQ_13_REM_TRANSACTION_CHNL13_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_14_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl14) {
    registers->DMA_EARLY_IRQ_14.packed_w =  + ((rem_transaction_chnl14<<DMA_DMA_EARLY_IRQ_14_REM_TRANSACTION_CHNL14_OFS)&DMA_DMA_EARLY_IRQ_14_REM_TRANSACTION_CHNL14_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_15_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl15) {
    registers->DMA_EARLY_IRQ_15.packed_w =  + ((rem_transaction_chnl15<<DMA_DMA_EARLY_IRQ_15_REM_TRANSACTION_CHNL15_OFS)&DMA_DMA_EARLY_IRQ_15_REM_TRANSACTION_CHNL15_MASK);
}

static inline void DMA_DMA_EARLY_IRQ_CFG_WRITE(DMA_REGS_s * registers, uint32_t early_irq_alternate_sel) {
    registers->DMA_EARLY_IRQ_CFG.packed_w =  + ((early_irq_alternate_sel<<DMA_DMA_EARLY_IRQ_CFG_EARLY_IRQ_ALTERNATE_SEL_OFS)&DMA_DMA_EARLY_IRQ_CFG_EARLY_IRQ_ALTERNATE_SEL_MASK);
}

static inline void DMA_REPEATED_TRANSFER_EN_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_en) {
    registers->REPEATED_TRANSFER_EN.packed_w =  + ((rptd_trnsfr_en<<DMA_REPEATED_TRANSFER_EN_RPTD_TRNSFR_EN_OFS)&DMA_REPEATED_TRANSFER_EN_RPTD_TRNSFR_EN_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_0_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl0) {
    registers->REPEATED_TRANSFER_CHNL_0.packed_w =  + ((rptd_trnsfr_total_transaction_chnl0<<DMA_REPEATED_TRANSFER_CHNL_0_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL0_OFS)&DMA_REPEATED_TRANSFER_CHNL_0_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL0_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_1_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl1) {
    registers->REPEATED_TRANSFER_CHNL_1.packed_w =  + ((rptd_trnsfr_total_transaction_chnl1<<DMA_REPEATED_TRANSFER_CHNL_1_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL1_OFS)&DMA_REPEATED_TRANSFER_CHNL_1_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL1_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_2_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl2) {
    registers->REPEATED_TRANSFER_CHNL_2.packed_w =  + ((rptd_trnsfr_total_transaction_chnl2<<DMA_REPEATED_TRANSFER_CHNL_2_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL2_OFS)&DMA_REPEATED_TRANSFER_CHNL_2_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL2_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_3_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl3) {
    registers->REPEATED_TRANSFER_CHNL_3.packed_w =  + ((rptd_trnsfr_total_transaction_chnl3<<DMA_REPEATED_TRANSFER_CHNL_3_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL3_OFS)&DMA_REPEATED_TRANSFER_CHNL_3_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL3_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_4_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl4) {
    registers->REPEATED_TRANSFER_CHNL_4.packed_w =  + ((rptd_trnsfr_total_transaction_chnl4<<DMA_REPEATED_TRANSFER_CHNL_4_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL4_OFS)&DMA_REPEATED_TRANSFER_CHNL_4_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL4_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_5_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl5) {
    registers->REPEATED_TRANSFER_CHNL_5.packed_w =  + ((rptd_trnsfr_total_transaction_chnl5<<DMA_REPEATED_TRANSFER_CHNL_5_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL5_OFS)&DMA_REPEATED_TRANSFER_CHNL_5_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL5_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_6_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl6) {
    registers->REPEATED_TRANSFER_CHNL_6.packed_w =  + ((rptd_trnsfr_total_transaction_chnl6<<DMA_REPEATED_TRANSFER_CHNL_6_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL6_OFS)&DMA_REPEATED_TRANSFER_CHNL_6_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL6_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_7_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl7) {
    registers->REPEATED_TRANSFER_CHNL_7.packed_w =  + ((rptd_trnsfr_total_transaction_chnl7<<DMA_REPEATED_TRANSFER_CHNL_7_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL7_OFS)&DMA_REPEATED_TRANSFER_CHNL_7_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL7_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_8_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl8) {
    registers->REPEATED_TRANSFER_CHNL_8.packed_w =  + ((rptd_trnsfr_total_transaction_chnl8<<DMA_REPEATED_TRANSFER_CHNL_8_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL8_OFS)&DMA_REPEATED_TRANSFER_CHNL_8_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL8_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_9_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl9) {
    registers->REPEATED_TRANSFER_CHNL_9.packed_w =  + ((rptd_trnsfr_total_transaction_chnl9<<DMA_REPEATED_TRANSFER_CHNL_9_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL9_OFS)&DMA_REPEATED_TRANSFER_CHNL_9_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL9_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_10_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl10) {
    registers->REPEATED_TRANSFER_CHNL_10.packed_w =  + ((rptd_trnsfr_total_transaction_chnl10<<DMA_REPEATED_TRANSFER_CHNL_10_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL10_OFS)&DMA_REPEATED_TRANSFER_CHNL_10_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL10_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_11_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl11) {
    registers->REPEATED_TRANSFER_CHNL_11.packed_w =  + ((rptd_trnsfr_total_transaction_chnl11<<DMA_REPEATED_TRANSFER_CHNL_11_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL11_OFS)&DMA_REPEATED_TRANSFER_CHNL_11_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL11_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_12_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl12) {
    registers->REPEATED_TRANSFER_CHNL_12.packed_w =  + ((rptd_trnsfr_total_transaction_chnl12<<DMA_REPEATED_TRANSFER_CHNL_12_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL12_OFS)&DMA_REPEATED_TRANSFER_CHNL_12_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL12_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_13_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl13) {
    registers->REPEATED_TRANSFER_CHNL_13.packed_w =  + ((rptd_trnsfr_total_transaction_chnl13<<DMA_REPEATED_TRANSFER_CHNL_13_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL13_OFS)&DMA_REPEATED_TRANSFER_CHNL_13_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL13_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_14_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl14) {
    registers->REPEATED_TRANSFER_CHNL_14.packed_w =  + ((rptd_trnsfr_total_transaction_chnl14<<DMA_REPEATED_TRANSFER_CHNL_14_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL14_OFS)&DMA_REPEATED_TRANSFER_CHNL_14_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL14_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_15_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl15) {
    registers->REPEATED_TRANSFER_CHNL_15.packed_w =  + ((rptd_trnsfr_total_transaction_chnl15<<DMA_REPEATED_TRANSFER_CHNL_15_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL15_OFS)&DMA_REPEATED_TRANSFER_CHNL_15_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL15_MASK);
}

static inline void DMA_REPEATED_TRANSFER_ALTERNATE_SEL_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_alternate_sel) {
    registers->REPEATED_TRANSFER_ALTERNATE_SEL.packed_w =  + ((rptd_trnsfr_alternate_sel<<DMA_REPEATED_TRANSFER_ALTERNATE_SEL_RPTD_TRNSFR_ALTERNATE_SEL_OFS)&DMA_REPEATED_TRANSFER_ALTERNATE_SEL_RPTD_TRNSFR_ALTERNATE_SEL_MASK);
}

static inline void DMA_DMA_ARBITRATION_WRITE(DMA_REGS_s * registers, uint32_t dma_rr_en) {
    registers->DMA_ARBITRATION.packed_w =  + ((dma_rr_en<<DMA_DMA_ARBITRATION_DMA_RR_EN_OFS)&DMA_DMA_ARBITRATION_DMA_RR_EN_MASK);
}

static inline void DMA_DMA_ARBITRATION_MASK_WRITE(DMA_REGS_s * registers, uint32_t dma_rr_mask) {
    registers->DMA_ARBITRATION_MASK.packed_w =  + ((dma_rr_mask<<DMA_DMA_ARBITRATION_MASK_DMA_RR_MASK_OFS)&DMA_DMA_ARBITRATION_MASK_DMA_RR_MASK_MASK);
}

