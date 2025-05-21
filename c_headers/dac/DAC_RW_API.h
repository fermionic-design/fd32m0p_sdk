#ifndef DAC_RW_API_H
#define DAC_RW_API_H

#include "DAC_REGS.h"

static inline void DAC_PWR_EN_WRITE(DAC_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w = ((pwr_en<<DAC_PWR_EN_PWR_EN_OFS) & DAC_PWR_EN_PWR_EN_MASK)
                                +((pwr_en_key<<DAC_PWR_EN_PWR_EN_KEY_OFS) & DAC_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void DAC_RST_CTRL_WRITE(DAC_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w = ((rst<<DAC_RST_CTRL_RST_OFS) & DAC_RST_CTRL_RST_MASK)
                                  +((rst_sts_clr<<DAC_RST_CTRL_RST_STS_CLR_OFS) & DAC_RST_CTRL_RST_STS_CLR_MASK)
                                  +((rst_key<<DAC_RST_CTRL_RST_KEY_OFS) & DAC_RST_CTRL_RST_KEY_MASK);
}

static inline void DAC_CLK_CTRL_WRITE(DAC_REGS_s * registers, uint32_t clk_en) {
    registers->CLK_CTRL.packed_w = ((clk_en<<DAC_CLK_CTRL_CLK_EN_OFS) & DAC_CLK_CTRL_CLK_EN_MASK);
}

static inline void DAC_INTR_EVENT_CLEAR(DAC_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_EVENT.packed_w = 1<<intr_idx;
}

static inline void DAC_INTR_EVENT_EN(DAC_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_EN.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
}

static inline void DAC_INTR_EVENT_DIS(DAC_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_EN.packed_w = (1<<(intr_idx+16));
}

static inline void DAC_INTR_EVENT_NMI_EN(DAC_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_NMI_EN.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
}

static inline void DAC_INTR_EVENT_NMI_DIS(DAC_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_NMI_EN.packed_w = (1<<(intr_idx+16));
}

static inline void DAC_GENERIC_EVENT_EN(DAC_REGS_s * registers, uint32_t intr_idx){
    registers->EVENT_EN.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
}

static inline void DAC_GENERIC_EVENT_DIS(DAC_REGS_s * registers, uint32_t intr_idx){
    registers->EVENT_EN.packed_w = (1<<(intr_idx+16));
}

static inline void DAC_INTR_SW_SET(DAC_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_SW_SET.packed_w = 1<<intr_idx;
}

//static inline void DAC_GENERIC_EVENT_CTRL(DAC_REGS_s * registers, uint32_t intr_idx){
//    registers->EVENT_CTRL.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
//}
//
//static inline void DAC_GENERIC_EVENT_CTRL(DAC_REGS_s * registers, uint32_t intr_idx){
//    registers->EVENT_CTRL.packed_w = (1<<(intr_idx+16));
//}

static inline void DAC_CTRL0_WRITE(DAC_REGS_s * registers, uint32_t enable, uint32_t res, uint32_t data_fmt) {
    registers->CTRL0.packed_w = ((enable<<DAC_CTRL0_ENABLE_OFS) & DAC_CTRL0_ENABLE_MASK)
                               +((res<<DAC_CTRL0_RES_OFS) & DAC_CTRL0_RES_MASK)
                               +((data_fmt<<DAC_CTRL0_DATA_FMT_OFS) & DAC_CTRL0_DATA_FMT_MASK);
}

static inline void DAC_CTRL1_WRITE(DAC_REGS_s * registers, uint32_t amp_en, uint32_t amp_hiz, uint32_t vrefp_sel, uint32_t out_en) {
    registers->CTRL1.packed_w = ((amp_en<<DAC_CTRL1_AMP_EN_OFS) & DAC_CTRL1_AMP_EN_MASK)
                               +((amp_hiz<<DAC_CTRL1_AMP_HIZ_OFS) & DAC_CTRL1_AMP_HIZ_MASK)
                               +((vrefp_sel<<DAC_CTRL1_VREFP_SEL_OFS) & DAC_CTRL1_VREFP_SEL_MASK)
                               +((out_en<<DAC_CTRL1_OUT_EN_OFS) & DAC_CTRL1_OUT_EN_MASK);
}

static inline void DAC_CTRL2_WRITE(DAC_REGS_s * registers, uint32_t fifo_en, uint32_t fifo_th, uint32_t fifo_trig_sel, uint32_t dma_trig_en) {
    registers->CTRL2.packed_w = ((fifo_en<<DAC_CTRL2_FIFO_EN_OFS) & DAC_CTRL2_FIFO_EN_MASK)
                               +((fifo_th<<DAC_CTRL2_FIFO_TH_OFS) & DAC_CTRL2_FIFO_TH_MASK)
                               +((fifo_trig_sel<<DAC_CTRL2_FIFO_TRIG_SEL_OFS) & DAC_CTRL2_FIFO_TRIG_SEL_MASK)
                               +((dma_trig_en<<DAC_CTRL2_DMA_TRIG_EN_OFS) & DAC_CTRL2_DMA_TRIG_EN_MASK);
}

static inline void DAC_CTRL3_WRITE(DAC_REGS_s * registers, uint32_t samp_tim_en, uint32_t samp_tim_rate) {
    registers->CTRL3.packed_w = ((samp_tim_en<<DAC_CTRL3_SAMP_TIM_EN_OFS) & DAC_CTRL3_SAMP_TIM_EN_MASK)
                               +((samp_tim_rate<<DAC_CTRL3_SAMP_TIM_RATE_OFS) & DAC_CTRL3_SAMP_TIM_RATE_MASK);
}

static inline void DAC_DATA_WRITE(DAC_REGS_s * registers, uint32_t dac_code) {
    registers->DATA.packed_w = ((dac_code<<DAC_DATA_DAC_CODE_OFS) & DAC_DATA_DAC_CODE_MASK);
}

static inline void DAC_CAL_CTRL_WRITE(DAC_REGS_s * registers, uint32_t cal_en, uint32_t cal_sel) {
    registers->CAL_CTRL.packed_w = ((cal_en<<DAC_CAL_CTRL_CAL_EN_OFS) & DAC_CAL_CTRL_CAL_EN_MASK)
                                  +((cal_sel<<DAC_CAL_CTRL_CAL_SEL_OFS) & DAC_CAL_CTRL_CAL_SEL_MASK);
}

static inline void DAC_SPARE_CTRL_WRITE(DAC_REGS_s * registers, uint32_t cfg0, uint32_t cfg1) {
    registers->SPARE_CTRL.packed_w = ((cfg0<<DAC_SPARE_CTRL_CFG0_OFS) & DAC_SPARE_CTRL_CFG0_MASK)
                                    +((cfg1<<DAC_SPARE_CTRL_CFG1_OFS) & DAC_SPARE_CTRL_CFG1_MASK);
}


#endif
