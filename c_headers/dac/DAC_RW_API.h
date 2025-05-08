#include "DAC_REGS.h"

static inline void DAC_DESC_WRITE(DAC_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<DAC_DESC_MODULE_TYPE_OFS)&DAC_DESC_MODULE_TYPE_MASK) + ((modue_subtype<<DAC_DESC_MODUE_SUBTYPE_OFS)&DAC_DESC_MODUE_SUBTYPE_MASK) + ((major_rev<<DAC_DESC_MAJOR_REV_OFS)&DAC_DESC_MAJOR_REV_MASK) + ((minor_rev<<DAC_DESC_MINOR_REV_OFS)&DAC_DESC_MINOR_REV_MASK);
}

static inline void DAC_PWR_EN_WRITE(DAC_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<DAC_PWR_EN_PWR_EN_OFS)&DAC_PWR_EN_PWR_EN_MASK) + ((pwr_en_key<<DAC_PWR_EN_PWR_EN_KEY_OFS)&DAC_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void DAC_RST_CTRL_WRITE(DAC_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<DAC_RST_CTRL_RST_OFS)&DAC_RST_CTRL_RST_MASK) + ((rst_sts_clr<<DAC_RST_CTRL_RST_STS_CLR_OFS)&DAC_RST_CTRL_RST_STS_CLR_MASK) + ((rst_key<<DAC_RST_CTRL_RST_KEY_OFS)&DAC_RST_CTRL_RST_KEY_MASK);
}

static inline void DAC_RST_STS_WRITE(DAC_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<DAC_RST_STS_RST_STS_OFS)&DAC_RST_STS_RST_STS_MASK);
}

static inline void DAC_CLK_CTRL_WRITE(DAC_REGS_s * registers, uint32_t clk_en) {
    registers->CLK_CTRL.packed_w =  + ((clk_en<<DAC_CLK_CTRL_CLK_EN_OFS)&DAC_CLK_CTRL_CLK_EN_MASK);
}

static inline void DAC_INTR_STS_WRITE(DAC_REGS_s * registers, uint32_t intr_first) {
    registers->INTR_STS.packed_w =  + ((intr_first<<DAC_INTR_STS_INTR_FIRST_OFS)&DAC_INTR_STS_INTR_FIRST_MASK);
}

static inline void DAC_INTR_EVENT_WRITE(DAC_REGS_s * registers, uint32_t dac_rdy, uint32_t fifo_full, uint32_t fifo_almost_full, uint32_t fifo_empty, uint32_t fifo_almost_empty, uint32_t fifo_overflow, uint32_t fifo_underflow, uint32_t dma_done) {
    registers->INTR_EVENT.packed_w =  + ((dac_rdy<<DAC_INTR_EVENT_DAC_RDY_OFS)&DAC_INTR_EVENT_DAC_RDY_MASK) + ((fifo_full<<DAC_INTR_EVENT_FIFO_FULL_OFS)&DAC_INTR_EVENT_FIFO_FULL_MASK) + ((fifo_almost_full<<DAC_INTR_EVENT_FIFO_ALMOST_FULL_OFS)&DAC_INTR_EVENT_FIFO_ALMOST_FULL_MASK) + ((fifo_empty<<DAC_INTR_EVENT_FIFO_EMPTY_OFS)&DAC_INTR_EVENT_FIFO_EMPTY_MASK) + ((fifo_almost_empty<<DAC_INTR_EVENT_FIFO_ALMOST_EMPTY_OFS)&DAC_INTR_EVENT_FIFO_ALMOST_EMPTY_MASK) + ((fifo_overflow<<DAC_INTR_EVENT_FIFO_OVERFLOW_OFS)&DAC_INTR_EVENT_FIFO_OVERFLOW_MASK) + ((fifo_underflow<<DAC_INTR_EVENT_FIFO_UNDERFLOW_OFS)&DAC_INTR_EVENT_FIFO_UNDERFLOW_MASK) + ((dma_done<<DAC_INTR_EVENT_DMA_DONE_OFS)&DAC_INTR_EVENT_DMA_DONE_MASK);
}

static inline void DAC_INTR_EN_WRITE(DAC_REGS_s * registers, uint32_t dac_rdy_en, uint32_t fifo_full_en, uint32_t fifo_almost_full_en, uint32_t fifo_empty_en, uint32_t fifo_almost_empty_en, uint32_t fifo_overflow_en, uint32_t fifo_underflow_en, uint32_t dma_done_en) {
    registers->INTR_EN.packed_w =  + ((dac_rdy_en<<DAC_INTR_EN_DAC_RDY_EN_OFS)&DAC_INTR_EN_DAC_RDY_EN_MASK) + ((fifo_full_en<<DAC_INTR_EN_FIFO_FULL_EN_OFS)&DAC_INTR_EN_FIFO_FULL_EN_MASK) + ((fifo_almost_full_en<<DAC_INTR_EN_FIFO_ALMOST_FULL_EN_OFS)&DAC_INTR_EN_FIFO_ALMOST_FULL_EN_MASK) + ((fifo_empty_en<<DAC_INTR_EN_FIFO_EMPTY_EN_OFS)&DAC_INTR_EN_FIFO_EMPTY_EN_MASK) + ((fifo_almost_empty_en<<DAC_INTR_EN_FIFO_ALMOST_EMPTY_EN_OFS)&DAC_INTR_EN_FIFO_ALMOST_EMPTY_EN_MASK) + ((fifo_overflow_en<<DAC_INTR_EN_FIFO_OVERFLOW_EN_OFS)&DAC_INTR_EN_FIFO_OVERFLOW_EN_MASK) + ((fifo_underflow_en<<DAC_INTR_EN_FIFO_UNDERFLOW_EN_OFS)&DAC_INTR_EN_FIFO_UNDERFLOW_EN_MASK) + ((dma_done_en<<DAC_INTR_EN_DMA_DONE_EN_OFS)&DAC_INTR_EN_DMA_DONE_EN_MASK);
}

static inline void DAC_INTR_NMI_EN_WRITE(DAC_REGS_s * registers, uint32_t dac_rdy_nmi_en, uint32_t fifo_full_nmi_en, uint32_t fifo_almost_full_nmi_en, uint32_t fifo_empty_nmi_en, uint32_t fifo_almost_empty_nmi_en, uint32_t fifo_overflow_nmi_en, uint32_t fifo_underflow_nmi_en, uint32_t dma_done_nmi_en) {
    registers->INTR_NMI_EN.packed_w =  + ((dac_rdy_nmi_en<<DAC_INTR_NMI_EN_DAC_RDY_NMI_EN_OFS)&DAC_INTR_NMI_EN_DAC_RDY_NMI_EN_MASK) + ((fifo_full_nmi_en<<DAC_INTR_NMI_EN_FIFO_FULL_NMI_EN_OFS)&DAC_INTR_NMI_EN_FIFO_FULL_NMI_EN_MASK) + ((fifo_almost_full_nmi_en<<DAC_INTR_NMI_EN_FIFO_ALMOST_FULL_NMI_EN_OFS)&DAC_INTR_NMI_EN_FIFO_ALMOST_FULL_NMI_EN_MASK) + ((fifo_empty_nmi_en<<DAC_INTR_NMI_EN_FIFO_EMPTY_NMI_EN_OFS)&DAC_INTR_NMI_EN_FIFO_EMPTY_NMI_EN_MASK) + ((fifo_almost_empty_nmi_en<<DAC_INTR_NMI_EN_FIFO_ALMOST_EMPTY_NMI_EN_OFS)&DAC_INTR_NMI_EN_FIFO_ALMOST_EMPTY_NMI_EN_MASK) + ((fifo_overflow_nmi_en<<DAC_INTR_NMI_EN_FIFO_OVERFLOW_NMI_EN_OFS)&DAC_INTR_NMI_EN_FIFO_OVERFLOW_NMI_EN_MASK) + ((fifo_underflow_nmi_en<<DAC_INTR_NMI_EN_FIFO_UNDERFLOW_NMI_EN_OFS)&DAC_INTR_NMI_EN_FIFO_UNDERFLOW_NMI_EN_MASK) + ((dma_done_nmi_en<<DAC_INTR_NMI_EN_DMA_DONE_NMI_EN_OFS)&DAC_INTR_NMI_EN_DMA_DONE_NMI_EN_MASK);
}

static inline void DAC_EVENT_EN_WRITE(DAC_REGS_s * registers, uint32_t dac_rdy_event_en, uint32_t fifo_full_event_en, uint32_t fifo_almost_full_event_en, uint32_t fifo_empty_event_en, uint32_t fifo_almost_empty_event_en, uint32_t fifo_overflow_event_en, uint32_t fifo_underflow_event_en, uint32_t dma_done_event_en) {
    registers->EVENT_EN.packed_w =  + ((dac_rdy_event_en<<DAC_EVENT_EN_DAC_RDY_EVENT_EN_OFS)&DAC_EVENT_EN_DAC_RDY_EVENT_EN_MASK) + ((fifo_full_event_en<<DAC_EVENT_EN_FIFO_FULL_EVENT_EN_OFS)&DAC_EVENT_EN_FIFO_FULL_EVENT_EN_MASK) + ((fifo_almost_full_event_en<<DAC_EVENT_EN_FIFO_ALMOST_FULL_EVENT_EN_OFS)&DAC_EVENT_EN_FIFO_ALMOST_FULL_EVENT_EN_MASK) + ((fifo_empty_event_en<<DAC_EVENT_EN_FIFO_EMPTY_EVENT_EN_OFS)&DAC_EVENT_EN_FIFO_EMPTY_EVENT_EN_MASK) + ((fifo_almost_empty_event_en<<DAC_EVENT_EN_FIFO_ALMOST_EMPTY_EVENT_EN_OFS)&DAC_EVENT_EN_FIFO_ALMOST_EMPTY_EVENT_EN_MASK) + ((fifo_overflow_event_en<<DAC_EVENT_EN_FIFO_OVERFLOW_EVENT_EN_OFS)&DAC_EVENT_EN_FIFO_OVERFLOW_EVENT_EN_MASK) + ((fifo_underflow_event_en<<DAC_EVENT_EN_FIFO_UNDERFLOW_EVENT_EN_OFS)&DAC_EVENT_EN_FIFO_UNDERFLOW_EVENT_EN_MASK) + ((dma_done_event_en<<DAC_EVENT_EN_DMA_DONE_EVENT_EN_OFS)&DAC_EVENT_EN_DMA_DONE_EVENT_EN_MASK);
}

static inline void DAC_INTR_SW_SET_WRITE(DAC_REGS_s * registers, uint32_t dac_rdy_sw_set, uint32_t fifo_full_sw_set, uint32_t fifo_almost_full_sw_set, uint32_t fifo_empty_sw_set, uint32_t fifo_almost_empty_sw_set, uint32_t fifo_overflow_sw_set, uint32_t fifo_underflow_sw_set, uint32_t dma_done_sw_set) {
    registers->INTR_SW_SET.packed_w =  + ((dac_rdy_sw_set<<DAC_INTR_SW_SET_DAC_RDY_SW_SET_OFS)&DAC_INTR_SW_SET_DAC_RDY_SW_SET_MASK) + ((fifo_full_sw_set<<DAC_INTR_SW_SET_FIFO_FULL_SW_SET_OFS)&DAC_INTR_SW_SET_FIFO_FULL_SW_SET_MASK) + ((fifo_almost_full_sw_set<<DAC_INTR_SW_SET_FIFO_ALMOST_FULL_SW_SET_OFS)&DAC_INTR_SW_SET_FIFO_ALMOST_FULL_SW_SET_MASK) + ((fifo_empty_sw_set<<DAC_INTR_SW_SET_FIFO_EMPTY_SW_SET_OFS)&DAC_INTR_SW_SET_FIFO_EMPTY_SW_SET_MASK) + ((fifo_almost_empty_sw_set<<DAC_INTR_SW_SET_FIFO_ALMOST_EMPTY_SW_SET_OFS)&DAC_INTR_SW_SET_FIFO_ALMOST_EMPTY_SW_SET_MASK) + ((fifo_overflow_sw_set<<DAC_INTR_SW_SET_FIFO_OVERFLOW_SW_SET_OFS)&DAC_INTR_SW_SET_FIFO_OVERFLOW_SW_SET_MASK) + ((fifo_underflow_sw_set<<DAC_INTR_SW_SET_FIFO_UNDERFLOW_SW_SET_OFS)&DAC_INTR_SW_SET_FIFO_UNDERFLOW_SW_SET_MASK) + ((dma_done_sw_set<<DAC_INTR_SW_SET_DMA_DONE_SW_SET_OFS)&DAC_INTR_SW_SET_DMA_DONE_SW_SET_MASK);
}

static inline void DAC_EVENT_CTRL_WRITE(DAC_REGS_s * registers, uint32_t chan_id0) {
    registers->EVENT_CTRL.packed_w =  + ((chan_id0<<DAC_EVENT_CTRL_CHAN_ID0_OFS)&DAC_EVENT_CTRL_CHAN_ID0_MASK);
}

static inline void DAC_DAC_CTRL0_WRITE(DAC_REGS_s * registers, uint32_t enable, uint32_t res, uint32_t data_fmt) {
    registers->DAC_CTRL0.packed_w =  + ((enable<<DAC_DAC_CTRL0_ENABLE_OFS)&DAC_DAC_CTRL0_ENABLE_MASK) + ((res<<DAC_DAC_CTRL0_RES_OFS)&DAC_DAC_CTRL0_RES_MASK) + ((data_fmt<<DAC_DAC_CTRL0_DATA_FMT_OFS)&DAC_DAC_CTRL0_DATA_FMT_MASK);
}

static inline void DAC_DAC_CTRL1_WRITE(DAC_REGS_s * registers, uint32_t amp_en, uint32_t amp_hiz, uint32_t vrefp_sel, uint32_t out_en) {
    registers->DAC_CTRL1.packed_w =  + ((amp_en<<DAC_DAC_CTRL1_AMP_EN_OFS)&DAC_DAC_CTRL1_AMP_EN_MASK) + ((amp_hiz<<DAC_DAC_CTRL1_AMP_HIZ_OFS)&DAC_DAC_CTRL1_AMP_HIZ_MASK) + ((vrefp_sel<<DAC_DAC_CTRL1_VREFP_SEL_OFS)&DAC_DAC_CTRL1_VREFP_SEL_MASK) + ((out_en<<DAC_DAC_CTRL1_OUT_EN_OFS)&DAC_DAC_CTRL1_OUT_EN_MASK);
}

static inline void DAC_DAC_CTRL2_WRITE(DAC_REGS_s * registers, uint32_t fifo_en, uint32_t fifo_th, uint32_t fifo_trig_sel, uint32_t dma_trig_en) {
    registers->DAC_CTRL2.packed_w =  + ((fifo_en<<DAC_DAC_CTRL2_FIFO_EN_OFS)&DAC_DAC_CTRL2_FIFO_EN_MASK) + ((fifo_th<<DAC_DAC_CTRL2_FIFO_TH_OFS)&DAC_DAC_CTRL2_FIFO_TH_MASK) + ((fifo_trig_sel<<DAC_DAC_CTRL2_FIFO_TRIG_SEL_OFS)&DAC_DAC_CTRL2_FIFO_TRIG_SEL_MASK) + ((dma_trig_en<<DAC_DAC_CTRL2_DMA_TRIG_EN_OFS)&DAC_DAC_CTRL2_DMA_TRIG_EN_MASK);
}

static inline void DAC_DAC_CTRL3_WRITE(DAC_REGS_s * registers, uint32_t samp_tim_en, uint32_t samp_tim_rate) {
    registers->DAC_CTRL3.packed_w =  + ((samp_tim_en<<DAC_DAC_CTRL3_SAMP_TIM_EN_OFS)&DAC_DAC_CTRL3_SAMP_TIM_EN_MASK) + ((samp_tim_rate<<DAC_DAC_CTRL3_SAMP_TIM_RATE_OFS)&DAC_DAC_CTRL3_SAMP_TIM_RATE_MASK);
}

static inline void DAC_DAC_DATA_WRITE(DAC_REGS_s * registers, uint32_t dac_code) {
    registers->DAC_DATA.packed_w =  + ((dac_code<<DAC_DAC_DATA_DAC_CODE_OFS)&DAC_DAC_DATA_DAC_CODE_MASK);
}

static inline void DAC_CAL_CTRL_WRITE(DAC_REGS_s * registers, uint32_t cal_en, uint32_t cal_sel) {
    registers->CAL_CTRL.packed_w =  + ((cal_en<<DAC_CAL_CTRL_CAL_EN_OFS)&DAC_CAL_CTRL_CAL_EN_MASK) + ((cal_sel<<DAC_CAL_CTRL_CAL_SEL_OFS)&DAC_CAL_CTRL_CAL_SEL_MASK);
}

static inline void DAC_CAL_STS_WRITE(DAC_REGS_s * registers, uint32_t cal_done, uint32_t cal_data) {
    registers->CAL_STS.packed_w =  + ((cal_done<<DAC_CAL_STS_CAL_DONE_OFS)&DAC_CAL_STS_CAL_DONE_MASK) + ((cal_data<<DAC_CAL_STS_CAL_DATA_OFS)&DAC_CAL_STS_CAL_DATA_MASK);
}

static inline void DAC_SPARE_CTRL_WRITE(DAC_REGS_s * registers, uint32_t cfg0, uint32_t cfg1) {
    registers->SPARE_CTRL.packed_w =  + ((cfg0<<DAC_SPARE_CTRL_CFG0_OFS)&DAC_SPARE_CTRL_CFG0_MASK) + ((cfg1<<DAC_SPARE_CTRL_CFG1_OFS)&DAC_SPARE_CTRL_CFG1_MASK);
}

static inline void DAC_SPARE_STS_WRITE(DAC_REGS_s * registers, uint32_t sts0, uint32_t sts1) {
    registers->SPARE_STS.packed_w =  + ((sts0<<DAC_SPARE_STS_STS0_OFS)&DAC_SPARE_STS_STS0_MASK) + ((sts1<<DAC_SPARE_STS_STS1_OFS)&DAC_SPARE_STS_STS1_MASK);
}

