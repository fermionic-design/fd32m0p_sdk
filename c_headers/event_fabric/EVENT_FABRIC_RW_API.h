#include "EVENT_FABRIC_REGS.h"

static inline void EVENT_FABRIC_PWR_EN_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w = ((pwr_en<<EVENT_FABRIC_PWR_EN_PWR_EN_OFS) & EVENT_FABRIC_PWR_EN_PWR_EN_MASK)
                                +((pwr_en_key<<EVENT_FABRIC_PWR_EN_PWR_EN_KEY_OFS) & EVENT_FABRIC_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void EVENT_FABRIC_RST_CTRL_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w = ((rst<<EVENT_FABRIC_RST_CTRL_RST_OFS) & EVENT_FABRIC_RST_CTRL_RST_MASK)
                                  +((rst_sts_clr<<EVENT_FABRIC_RST_CTRL_RST_STS_CLR_OFS) & EVENT_FABRIC_RST_CTRL_RST_STS_CLR_MASK)
                                  +((rst_key<<EVENT_FABRIC_RST_CTRL_RST_KEY_OFS) & EVENT_FABRIC_RST_CTRL_RST_KEY_MASK);
}

static inline void EVENT_FABRIC_CLK_CTRL_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t clk_en) {
    registers->CLK_CTRL.packed_w = ((clk_en<<EVENT_FABRIC_CLK_CTRL_CLK_EN_OFS) & EVENT_FABRIC_CLK_CTRL_CLK_EN_MASK);
}

static inline void EVENT_FABRIC_GEN_PUB_N_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t index, uint32_t gen_pub_chan_id) {
    registers->GEN_PUB[index].packed_w = ((gen_pub_chan_id<<EVENT_FABRIC_GEN_PUB_GEN_PUB_CHAN_ID_OFS) & EVENT_FABRIC_GEN_PUB_GEN_PUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_GEN_SUB_N_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t index, uint32_t gen_sub_chan_id) {
    registers->GEN_SUB[index].packed_w = ((gen_sub_chan_id<<EVENT_FABRIC_GEN_SUB_GEN_SUB_CHAN_ID_OFS) & EVENT_FABRIC_GEN_SUB_GEN_SUB_CHAN_ID_MASK);
}

static inline void EVENT_FABRIC_DMA_PUB_N_WRITE(EVENT_FABRIC_REGS_s * registers, uint32_t index, uint32_t dma_pub_event_id) {
    registers->DMA_PUB[index].packed_w = ((dma_pub_event_id<<EVENT_FABRIC_DMA_PUB_DMA_PUB_EVENT_ID_OFS) & EVENT_FABRIC_DMA_PUB_DMA_PUB_EVENT_ID_MASK);
}

