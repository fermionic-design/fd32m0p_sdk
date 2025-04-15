#include "DAC_REGS.h"

static inline void DAC_DESC_WRITE(DAC_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<DAC_DESC_module_type_OFS)&DAC_DESC_module_type_MASK) + ((modue_subtype<<DAC_DESC_modue_subtype_OFS)&DAC_DESC_modue_subtype_MASK) + ((major_rev<<DAC_DESC_major_rev_OFS)&DAC_DESC_major_rev_MASK) + ((minor_rev<<DAC_DESC_minor_rev_OFS)&DAC_DESC_minor_rev_MASK);
}

static inline void DAC_PWR_EN_WRITE(DAC_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<DAC_PWR_EN_pwr_en_OFS)&DAC_PWR_EN_pwr_en_MASK) + ((pwr_en_key<<DAC_PWR_EN_pwr_en_key_OFS)&DAC_PWR_EN_pwr_en_key_MASK);
}

static inline void DAC_RST_CTRL_WRITE(DAC_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<DAC_RST_CTRL_rst_OFS)&DAC_RST_CTRL_rst_MASK) + ((rst_sts_clr<<DAC_RST_CTRL_rst_sts_clr_OFS)&DAC_RST_CTRL_rst_sts_clr_MASK) + ((rst_key<<DAC_RST_CTRL_rst_key_OFS)&DAC_RST_CTRL_rst_key_MASK);
}

static inline void DAC_RST_STS_WRITE(DAC_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<DAC_RST_STS_rst_sts_OFS)&DAC_RST_STS_rst_sts_MASK);
}

static inline void DAC_CLK_CTRL_WRITE(DAC_REGS_s * registers, uint32_t clk_en) {
    registers->CLK_CTRL.packed_w =  + ((clk_en<<DAC_CLK_CTRL_clk_en_OFS)&DAC_CLK_CTRL_clk_en_MASK);
}

static inline void DAC_INTR_STS_WRITE(DAC_REGS_s * registers, uint32_t intr_first) {
    registers->INTR_STS.packed_w =  + ((intr_first<<DAC_INTR_STS_intr_first_OFS)&DAC_INTR_STS_intr_first_MASK);
}

static inline void DAC_INTR_EVENT_WRITE(DAC_REGS_s * registers, uint32_t dac_rdy, uint32_t fifo_full, uint32_t fifo_almost_full, uint32_t fifo_empty, uint32_t fifo_almost_empty, uint32_t fifo_overflow, uint32_t fifo_underflow, uint32_t dma_done) {
    registers->INTR_EVENT.packed_w =  + ((dac_rdy<<DAC_INTR_EVENT_dac_rdy_OFS)&DAC_INTR_EVENT_dac_rdy_MASK) + ((fifo_full<<DAC_INTR_EVENT_fifo_full_OFS)&DAC_INTR_EVENT_fifo_full_MASK) + ((fifo_almost_full<<DAC_INTR_EVENT_fifo_almost_full_OFS)&DAC_INTR_EVENT_fifo_almost_full_MASK) + ((fifo_empty<<DAC_INTR_EVENT_fifo_empty_OFS)&DAC_INTR_EVENT_fifo_empty_MASK) + ((fifo_almost_empty<<DAC_INTR_EVENT_fifo_almost_empty_OFS)&DAC_INTR_EVENT_fifo_almost_empty_MASK) + ((fifo_overflow<<DAC_INTR_EVENT_fifo_overflow_OFS)&DAC_INTR_EVENT_fifo_overflow_MASK) + ((fifo_underflow<<DAC_INTR_EVENT_fifo_underflow_OFS)&DAC_INTR_EVENT_fifo_underflow_MASK) + ((dma_done<<DAC_INTR_EVENT_dma_done_OFS)&DAC_INTR_EVENT_dma_done_MASK);
}

static inline void DAC_INTR_EN_WRITE(DAC_REGS_s * registers, uint32_t dac_rdy_en, uint32_t fifo_full_en, uint32_t fifo_almost_full_en, uint32_t fifo_empty_en, uint32_t fifo_almost_empty_en, uint32_t fifo_overflow_en, uint32_t fifo_underflow_en, uint32_t dma_done_en) {
    registers->INTR_EN.packed_w =  + ((dac_rdy_en<<DAC_INTR_EN_dac_rdy_en_OFS)&DAC_INTR_EN_dac_rdy_en_MASK) + ((fifo_full_en<<DAC_INTR_EN_fifo_full_en_OFS)&DAC_INTR_EN_fifo_full_en_MASK) + ((fifo_almost_full_en<<DAC_INTR_EN_fifo_almost_full_en_OFS)&DAC_INTR_EN_fifo_almost_full_en_MASK) + ((fifo_empty_en<<DAC_INTR_EN_fifo_empty_en_OFS)&DAC_INTR_EN_fifo_empty_en_MASK) + ((fifo_almost_empty_en<<DAC_INTR_EN_fifo_almost_empty_en_OFS)&DAC_INTR_EN_fifo_almost_empty_en_MASK) + ((fifo_overflow_en<<DAC_INTR_EN_fifo_overflow_en_OFS)&DAC_INTR_EN_fifo_overflow_en_MASK) + ((fifo_underflow_en<<DAC_INTR_EN_fifo_underflow_en_OFS)&DAC_INTR_EN_fifo_underflow_en_MASK) + ((dma_done_en<<DAC_INTR_EN_dma_done_en_OFS)&DAC_INTR_EN_dma_done_en_MASK);
}

static inline void DAC_INTR_NMI_EN_WRITE(DAC_REGS_s * registers, uint32_t dac_rdy_nmi_en, uint32_t fifo_full_nmi_en, uint32_t fifo_almost_full_nmi_en, uint32_t fifo_empty_nmi_en, uint32_t fifo_almost_empty_nmi_en, uint32_t fifo_overflow_nmi_en, uint32_t fifo_underflow_nmi_en, uint32_t dma_done_nmi_en) {
    registers->INTR_NMI_EN.packed_w =  + ((dac_rdy_nmi_en<<DAC_INTR_NMI_EN_dac_rdy_nmi_en_OFS)&DAC_INTR_NMI_EN_dac_rdy_nmi_en_MASK) + ((fifo_full_nmi_en<<DAC_INTR_NMI_EN_fifo_full_nmi_en_OFS)&DAC_INTR_NMI_EN_fifo_full_nmi_en_MASK) + ((fifo_almost_full_nmi_en<<DAC_INTR_NMI_EN_fifo_almost_full_nmi_en_OFS)&DAC_INTR_NMI_EN_fifo_almost_full_nmi_en_MASK) + ((fifo_empty_nmi_en<<DAC_INTR_NMI_EN_fifo_empty_nmi_en_OFS)&DAC_INTR_NMI_EN_fifo_empty_nmi_en_MASK) + ((fifo_almost_empty_nmi_en<<DAC_INTR_NMI_EN_fifo_almost_empty_nmi_en_OFS)&DAC_INTR_NMI_EN_fifo_almost_empty_nmi_en_MASK) + ((fifo_overflow_nmi_en<<DAC_INTR_NMI_EN_fifo_overflow_nmi_en_OFS)&DAC_INTR_NMI_EN_fifo_overflow_nmi_en_MASK) + ((fifo_underflow_nmi_en<<DAC_INTR_NMI_EN_fifo_underflow_nmi_en_OFS)&DAC_INTR_NMI_EN_fifo_underflow_nmi_en_MASK) + ((dma_done_nmi_en<<DAC_INTR_NMI_EN_dma_done_nmi_en_OFS)&DAC_INTR_NMI_EN_dma_done_nmi_en_MASK);
}

static inline void DAC_EVENT_EN_WRITE(DAC_REGS_s * registers, uint32_t dac_rdy_event_en, uint32_t fifo_full_event_en, uint32_t fifo_almost_full_event_en, uint32_t fifo_empty_event_en, uint32_t fifo_almost_empty_event_en, uint32_t fifo_overflow_event_en, uint32_t fifo_underflow_event_en, uint32_t dma_done_event_en) {
    registers->EVENT_EN.packed_w =  + ((dac_rdy_event_en<<DAC_EVENT_EN_dac_rdy_event_en_OFS)&DAC_EVENT_EN_dac_rdy_event_en_MASK) + ((fifo_full_event_en<<DAC_EVENT_EN_fifo_full_event_en_OFS)&DAC_EVENT_EN_fifo_full_event_en_MASK) + ((fifo_almost_full_event_en<<DAC_EVENT_EN_fifo_almost_full_event_en_OFS)&DAC_EVENT_EN_fifo_almost_full_event_en_MASK) + ((fifo_empty_event_en<<DAC_EVENT_EN_fifo_empty_event_en_OFS)&DAC_EVENT_EN_fifo_empty_event_en_MASK) + ((fifo_almost_empty_event_en<<DAC_EVENT_EN_fifo_almost_empty_event_en_OFS)&DAC_EVENT_EN_fifo_almost_empty_event_en_MASK) + ((fifo_overflow_event_en<<DAC_EVENT_EN_fifo_overflow_event_en_OFS)&DAC_EVENT_EN_fifo_overflow_event_en_MASK) + ((fifo_underflow_event_en<<DAC_EVENT_EN_fifo_underflow_event_en_OFS)&DAC_EVENT_EN_fifo_underflow_event_en_MASK) + ((dma_done_event_en<<DAC_EVENT_EN_dma_done_event_en_OFS)&DAC_EVENT_EN_dma_done_event_en_MASK);
}

static inline void DAC_INTR_SW_SET_WRITE(DAC_REGS_s * registers, uint32_t dac_rdy_sw_set, uint32_t fifo_full_sw_set, uint32_t fifo_almost_full_sw_set, uint32_t fifo_empty_sw_set, uint32_t fifo_almost_empty_sw_set, uint32_t fifo_overflow_sw_set, uint32_t fifo_underflow_sw_set, uint32_t dma_done_sw_set) {
    registers->INTR_SW_SET.packed_w =  + ((dac_rdy_sw_set<<DAC_INTR_SW_SET_dac_rdy_sw_set_OFS)&DAC_INTR_SW_SET_dac_rdy_sw_set_MASK) + ((fifo_full_sw_set<<DAC_INTR_SW_SET_fifo_full_sw_set_OFS)&DAC_INTR_SW_SET_fifo_full_sw_set_MASK) + ((fifo_almost_full_sw_set<<DAC_INTR_SW_SET_fifo_almost_full_sw_set_OFS)&DAC_INTR_SW_SET_fifo_almost_full_sw_set_MASK) + ((fifo_empty_sw_set<<DAC_INTR_SW_SET_fifo_empty_sw_set_OFS)&DAC_INTR_SW_SET_fifo_empty_sw_set_MASK) + ((fifo_almost_empty_sw_set<<DAC_INTR_SW_SET_fifo_almost_empty_sw_set_OFS)&DAC_INTR_SW_SET_fifo_almost_empty_sw_set_MASK) + ((fifo_overflow_sw_set<<DAC_INTR_SW_SET_fifo_overflow_sw_set_OFS)&DAC_INTR_SW_SET_fifo_overflow_sw_set_MASK) + ((fifo_underflow_sw_set<<DAC_INTR_SW_SET_fifo_underflow_sw_set_OFS)&DAC_INTR_SW_SET_fifo_underflow_sw_set_MASK) + ((dma_done_sw_set<<DAC_INTR_SW_SET_dma_done_sw_set_OFS)&DAC_INTR_SW_SET_dma_done_sw_set_MASK);
}

static inline void DAC_EVENT_CTRL_WRITE(DAC_REGS_s * registers, uint32_t chan_id0) {
    registers->EVENT_CTRL.packed_w =  + ((chan_id0<<DAC_EVENT_CTRL_chan_id0_OFS)&DAC_EVENT_CTRL_chan_id0_MASK);
}

static inline void DAC_DAC_CTRL0_WRITE(DAC_REGS_s * registers, uint32_t enable, uint32_t res, uint32_t data_fmt) {
    registers->DAC_CTRL0.packed_w =  + ((enable<<DAC_DAC_CTRL0_enable_OFS)&DAC_DAC_CTRL0_enable_MASK) + ((res<<DAC_DAC_CTRL0_res_OFS)&DAC_DAC_CTRL0_res_MASK) + ((data_fmt<<DAC_DAC_CTRL0_data_fmt_OFS)&DAC_DAC_CTRL0_data_fmt_MASK);
}

static inline void DAC_DAC_CTRL1_WRITE(DAC_REGS_s * registers, uint32_t amp_en, uint32_t amp_hiz, uint32_t vrefp_sel, uint32_t out_en) {
    registers->DAC_CTRL1.packed_w =  + ((amp_en<<DAC_DAC_CTRL1_amp_en_OFS)&DAC_DAC_CTRL1_amp_en_MASK) + ((amp_hiz<<DAC_DAC_CTRL1_amp_hiz_OFS)&DAC_DAC_CTRL1_amp_hiz_MASK) + ((vrefp_sel<<DAC_DAC_CTRL1_vrefp_sel_OFS)&DAC_DAC_CTRL1_vrefp_sel_MASK) + ((out_en<<DAC_DAC_CTRL1_out_en_OFS)&DAC_DAC_CTRL1_out_en_MASK);
}

static inline void DAC_DAC_CTRL2_WRITE(DAC_REGS_s * registers, uint32_t fifo_en, uint32_t fifo_th, uint32_t fifo_trig_sel, uint32_t dma_trig_en) {
    registers->DAC_CTRL2.packed_w =  + ((fifo_en<<DAC_DAC_CTRL2_fifo_en_OFS)&DAC_DAC_CTRL2_fifo_en_MASK) + ((fifo_th<<DAC_DAC_CTRL2_fifo_th_OFS)&DAC_DAC_CTRL2_fifo_th_MASK) + ((fifo_trig_sel<<DAC_DAC_CTRL2_fifo_trig_sel_OFS)&DAC_DAC_CTRL2_fifo_trig_sel_MASK) + ((dma_trig_en<<DAC_DAC_CTRL2_dma_trig_en_OFS)&DAC_DAC_CTRL2_dma_trig_en_MASK);
}

static inline void DAC_DAC_CTRL3_WRITE(DAC_REGS_s * registers, uint32_t samp_tim_en, uint32_t samp_tim_rate) {
    registers->DAC_CTRL3.packed_w =  + ((samp_tim_en<<DAC_DAC_CTRL3_samp_tim_en_OFS)&DAC_DAC_CTRL3_samp_tim_en_MASK) + ((samp_tim_rate<<DAC_DAC_CTRL3_samp_tim_rate_OFS)&DAC_DAC_CTRL3_samp_tim_rate_MASK);
}

static inline void DAC_DAC_DATA_WRITE(DAC_REGS_s * registers, uint32_t dac_code) {
    registers->DAC_DATA.packed_w =  + ((dac_code<<DAC_DAC_DATA_dac_code_OFS)&DAC_DAC_DATA_dac_code_MASK);
}

static inline void DAC_CAL_CTRL_WRITE(DAC_REGS_s * registers, uint32_t cal_en, uint32_t cal_sel) {
    registers->CAL_CTRL.packed_w =  + ((cal_en<<DAC_CAL_CTRL_cal_en_OFS)&DAC_CAL_CTRL_cal_en_MASK) + ((cal_sel<<DAC_CAL_CTRL_cal_sel_OFS)&DAC_CAL_CTRL_cal_sel_MASK);
}

static inline void DAC_CAL_STS_WRITE(DAC_REGS_s * registers, uint32_t cal_done, uint32_t cal_data) {
    registers->CAL_STS.packed_w =  + ((cal_done<<DAC_CAL_STS_cal_done_OFS)&DAC_CAL_STS_cal_done_MASK) + ((cal_data<<DAC_CAL_STS_cal_data_OFS)&DAC_CAL_STS_cal_data_MASK);
}

