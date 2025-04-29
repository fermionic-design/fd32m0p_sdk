#include "EVENT_FABRIC_REGS.h"

static inline void EVENT_FABRIC_DESC_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<EVENT_FABRIC_DESC_MODULE_TYPE_OFS)&EVENT_FABRIC_DESC_MODULE_TYPE_MASK) + ((modue_subtype<<EVENT_FABRIC_DESC_MODUE_SUBTYPE_OFS)&EVENT_FABRIC_DESC_MODUE_SUBTYPE_MASK) + ((major_rev<<EVENT_FABRIC_DESC_MAJOR_REV_OFS)&EVENT_FABRIC_DESC_MAJOR_REV_MASK) + ((minor_rev<<EVENT_FABRIC_DESC_MINOR_REV_OFS)&EVENT_FABRIC_DESC_MINOR_REV_MASK);
}

static inline void EVENT_FABRIC_PWR_EN_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<EVENT_FABRIC_PWR_EN_PWR_EN_OFS)&EVENT_FABRIC_PWR_EN_PWR_EN_MASK) + ((pwr_en_key<<EVENT_FABRIC_PWR_EN_PWR_EN_KEY_OFS)&EVENT_FABRIC_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void EVENT_FABRIC_RST_CTRL_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<EVENT_FABRIC_RST_CTRL_RST_OFS)&EVENT_FABRIC_RST_CTRL_RST_MASK) + ((rst_sts_clr<<EVENT_FABRIC_RST_CTRL_RST_STS_CLR_OFS)&EVENT_FABRIC_RST_CTRL_RST_STS_CLR_MASK) + ((rst_key<<EVENT_FABRIC_RST_CTRL_RST_KEY_OFS)&EVENT_FABRIC_RST_CTRL_RST_KEY_MASK);
}

static inline void EVENT_FABRIC_RST_STS_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<EVENT_FABRIC_RST_STS_RST_STS_OFS)&EVENT_FABRIC_RST_STS_RST_STS_MASK);
}

static inline void EVENT_FABRIC_CLK_CTRL_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t clk_en) {
    registers->CLK_CTRL.packed_w =  + ((clk_en<<EVENT_FABRIC_CLK_CTRL_CLK_EN_OFS)&EVENT_FABRIC_CLK_CTRL_CLK_EN_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_0_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_0.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_0_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_0_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_1_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_1.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_1_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_1_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_2_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_2.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_2_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_2_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_3_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_3.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_3_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_3_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_4_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_4.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_4_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_4_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_5_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_5.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_5_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_5_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_6_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_6.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_6_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_6_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_7_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_7.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_7_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_7_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_8_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_8.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_8_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_8_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_9_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_9.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_9_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_9_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_10_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_10.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_10_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_10_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_11_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_11.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_11_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_11_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_12_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_12.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_12_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_12_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_13_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_13.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_13_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_13_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_14_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_14.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_14_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_14_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_15_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_15.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_15_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_15_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_16_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_16.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_16_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_16_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_17_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_17.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_17_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_17_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_18_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_18.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_18_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_18_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_19_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_19.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_19_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_19_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_20_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_20.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_20_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_20_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_21_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_21.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_21_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_21_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_22_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_22.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_22_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_22_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_23_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_23.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_23_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_23_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_24_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_24.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_24_GEN_PUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_PUB_24_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_0_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_0.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_0_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_0_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_1_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_1.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_1_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_1_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_2_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_2.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_2_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_2_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_3_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_3.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_3_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_3_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_4_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_4.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_4_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_4_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_5_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_5.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_5_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_5_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_6_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_6.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_6_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_6_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_7_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_7.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_7_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_7_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_8_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_8.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_8_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_8_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_9_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_9.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_9_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_9_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_10_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_10.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_10_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_10_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_11_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_11.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_11_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_11_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_12_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_12.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_12_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_12_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_13_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_13.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_13_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_13_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_14_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_14.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_14_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_14_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_15_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_15.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_15_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_15_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_16_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_16.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_16_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_16_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_17_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_17.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_17_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_17_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_18_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_18.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_18_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_18_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_19_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_19.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_19_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_19_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_20_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_20.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_20_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_20_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_21_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_21.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_21_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_21_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_22_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_22.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_22_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_22_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_23_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_23.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_23_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_23_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_24_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_24.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_24_GEN_SUB_CHAN_ID_OFS)&EVENT_FABRIC_GEN_SUB_24_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_0_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_0.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_0_DMA_PUB_EVENT_ID_OFS)&EVENT_FABRIC_DMA_PUB_0_DMA_PUB_EVENT_ID_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_1_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_1.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_1_DMA_PUB_EVENT_ID_OFS)&EVENT_FABRIC_DMA_PUB_1_DMA_PUB_EVENT_ID_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_2_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_2.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_2_DMA_PUB_EVENT_ID_OFS)&EVENT_FABRIC_DMA_PUB_2_DMA_PUB_EVENT_ID_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_3_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_3.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_3_DMA_PUB_EVENT_ID_OFS)&EVENT_FABRIC_DMA_PUB_3_DMA_PUB_EVENT_ID_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_4_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_4.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_4_DMA_PUB_EVENT_ID_OFS)&EVENT_FABRIC_DMA_PUB_4_DMA_PUB_EVENT_ID_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_5_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_5.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_5_DMA_PUB_EVENT_ID_OFS)&EVENT_FABRIC_DMA_PUB_5_DMA_PUB_EVENT_ID_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_6_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_6.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_6_DMA_PUB_EVENT_ID_OFS)&EVENT_FABRIC_DMA_PUB_6_DMA_PUB_EVENT_ID_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_7_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_7.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_7_DMA_PUB_EVENT_ID_OFS)&EVENT_FABRIC_DMA_PUB_7_DMA_PUB_EVENT_ID_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_8_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_8.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_8_DMA_PUB_EVENT_ID_OFS)&EVENT_FABRIC_DMA_PUB_8_DMA_PUB_EVENT_ID_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_9_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_9.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_9_DMA_PUB_EVENT_ID_OFS)&EVENT_FABRIC_DMA_PUB_9_DMA_PUB_EVENT_ID_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_10_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_10.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_10_DMA_PUB_EVENT_ID_OFS)&EVENT_FABRIC_DMA_PUB_10_DMA_PUB_EVENT_ID_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_11_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_11.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_11_DMA_PUB_EVENT_ID_OFS)&EVENT_FABRIC_DMA_PUB_11_DMA_PUB_EVENT_ID_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_12_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_12.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_12_DMA_PUB_EVENT_ID_OFS)&EVENT_FABRIC_DMA_PUB_12_DMA_PUB_EVENT_ID_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_13_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_13.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_13_DMA_PUB_EVENT_ID_OFS)&EVENT_FABRIC_DMA_PUB_13_DMA_PUB_EVENT_ID_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_14_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_14.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_14_DMA_PUB_EVENT_ID_OFS)&EVENT_FABRIC_DMA_PUB_14_DMA_PUB_EVENT_ID_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_15_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_15.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_15_DMA_PUB_EVENT_ID_OFS)&EVENT_FABRIC_DMA_PUB_15_DMA_PUB_EVENT_ID_MASK);
}

