#include "EVENT_FABRIC_REGS.h"

static inline void EVENT_FABRIC_DESC_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<EVENT_FABRIC_DESC_module_type_OFS)&EVENT_FABRIC_DESC_module_type_MASK) + ((modue_subtype<<EVENT_FABRIC_DESC_modue_subtype_OFS)&EVENT_FABRIC_DESC_modue_subtype_MASK) + ((major_rev<<EVENT_FABRIC_DESC_major_rev_OFS)&EVENT_FABRIC_DESC_major_rev_MASK) + ((minor_rev<<EVENT_FABRIC_DESC_minor_rev_OFS)&EVENT_FABRIC_DESC_minor_rev_MASK);
}

static inline void EVENT_FABRIC_PWR_EN_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<EVENT_FABRIC_PWR_EN_pwr_en_OFS)&EVENT_FABRIC_PWR_EN_pwr_en_MASK) + ((pwr_en_key<<EVENT_FABRIC_PWR_EN_pwr_en_key_OFS)&EVENT_FABRIC_PWR_EN_pwr_en_key_MASK);
}

static inline void EVENT_FABRIC_RST_CTRL_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<EVENT_FABRIC_RST_CTRL_rst_OFS)&EVENT_FABRIC_RST_CTRL_rst_MASK) + ((rst_sts_clr<<EVENT_FABRIC_RST_CTRL_rst_sts_clr_OFS)&EVENT_FABRIC_RST_CTRL_rst_sts_clr_MASK) + ((rst_key<<EVENT_FABRIC_RST_CTRL_rst_key_OFS)&EVENT_FABRIC_RST_CTRL_rst_key_MASK);
}

static inline void EVENT_FABRIC_RST_STS_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<EVENT_FABRIC_RST_STS_rst_sts_OFS)&EVENT_FABRIC_RST_STS_rst_sts_MASK);
}

static inline void EVENT_FABRIC_CLK_CTRL_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t clk_en) {
    registers->CLK_CTRL.packed_w =  + ((clk_en<<EVENT_FABRIC_CLK_CTRL_clk_en_OFS)&EVENT_FABRIC_CLK_CTRL_clk_en_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_0_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_0.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_0_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_0_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_1_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_1.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_1_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_1_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_2_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_2.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_2_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_2_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_3_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_3.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_3_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_3_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_4_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_4.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_4_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_4_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_5_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_5.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_5_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_5_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_6_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_6.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_6_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_6_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_7_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_7.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_7_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_7_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_8_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_8.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_8_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_8_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_9_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_9.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_9_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_9_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_10_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_10.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_10_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_10_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_11_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_11.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_11_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_11_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_12_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_12.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_12_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_12_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_13_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_13.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_13_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_13_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_14_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_14.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_14_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_14_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_15_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_15.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_15_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_15_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_16_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_16.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_16_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_16_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_17_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_17.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_17_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_17_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_18_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_18.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_18_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_18_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_19_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_19.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_19_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_19_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_20_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_20.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_20_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_20_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_21_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_21.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_21_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_21_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_22_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_22.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_22_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_22_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_23_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_23.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_23_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_23_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_24_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB_24.packed_w =  + ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_24_gen_pub_chan_id_OFS)&EVENT_FABRIC_GEN_PUB_24_gen_pub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_0_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_0.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_0_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_0_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_1_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_1.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_1_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_1_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_2_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_2.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_2_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_2_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_3_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_3.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_3_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_3_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_4_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_4.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_4_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_4_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_5_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_5.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_5_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_5_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_6_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_6.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_6_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_6_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_7_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_7.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_7_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_7_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_8_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_8.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_8_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_8_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_9_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_9.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_9_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_9_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_10_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_10.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_10_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_10_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_11_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_11.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_11_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_11_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_12_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_12.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_12_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_12_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_13_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_13.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_13_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_13_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_14_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_14.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_14_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_14_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_15_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_15.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_15_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_15_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_16_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_16.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_16_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_16_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_17_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_17.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_17_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_17_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_18_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_18.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_18_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_18_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_19_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_19.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_19_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_19_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_20_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_20.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_20_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_20_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_21_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_21.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_21_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_21_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_22_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_22.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_22_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_22_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_23_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_23.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_23_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_23_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_24_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB_24.packed_w =  + ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_24_gen_sub_chan_id_OFS)&EVENT_FABRIC_GEN_SUB_24_gen_sub_chan_id_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_0_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_0.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_0_dma_pub_event_id_OFS)&EVENT_FABRIC_DMA_PUB_0_dma_pub_event_id_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_1_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_1.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_1_dma_pub_event_id_OFS)&EVENT_FABRIC_DMA_PUB_1_dma_pub_event_id_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_2_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_2.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_2_dma_pub_event_id_OFS)&EVENT_FABRIC_DMA_PUB_2_dma_pub_event_id_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_3_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_3.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_3_dma_pub_event_id_OFS)&EVENT_FABRIC_DMA_PUB_3_dma_pub_event_id_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_4_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_4.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_4_dma_pub_event_id_OFS)&EVENT_FABRIC_DMA_PUB_4_dma_pub_event_id_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_5_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_5.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_5_dma_pub_event_id_OFS)&EVENT_FABRIC_DMA_PUB_5_dma_pub_event_id_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_6_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_6.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_6_dma_pub_event_id_OFS)&EVENT_FABRIC_DMA_PUB_6_dma_pub_event_id_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_7_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_7.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_7_dma_pub_event_id_OFS)&EVENT_FABRIC_DMA_PUB_7_dma_pub_event_id_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_8_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_8.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_8_dma_pub_event_id_OFS)&EVENT_FABRIC_DMA_PUB_8_dma_pub_event_id_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_9_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_9.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_9_dma_pub_event_id_OFS)&EVENT_FABRIC_DMA_PUB_9_dma_pub_event_id_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_10_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_10.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_10_dma_pub_event_id_OFS)&EVENT_FABRIC_DMA_PUB_10_dma_pub_event_id_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_11_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_11.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_11_dma_pub_event_id_OFS)&EVENT_FABRIC_DMA_PUB_11_dma_pub_event_id_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_12_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_12.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_12_dma_pub_event_id_OFS)&EVENT_FABRIC_DMA_PUB_12_dma_pub_event_id_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_13_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_13.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_13_dma_pub_event_id_OFS)&EVENT_FABRIC_DMA_PUB_13_dma_pub_event_id_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_14_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_14.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_14_dma_pub_event_id_OFS)&EVENT_FABRIC_DMA_PUB_14_dma_pub_event_id_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_15_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t dma_pub_event_id) {
    registers->DMA_PUB_15.packed_w =  + ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_15_dma_pub_event_id_OFS)&EVENT_FABRIC_DMA_PUB_15_dma_pub_event_id_MASK);
}

