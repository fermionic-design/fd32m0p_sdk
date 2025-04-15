#include "ADC_REGS.h"

static inline void ADC_DESC_WRITE(ADC_REGS_s * registers, uint32_t module_type, uint32_t module_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<ADC_DESC_module_type_OFS)&ADC_DESC_module_type_MASK) + ((module_subtype<<ADC_DESC_module_subtype_OFS)&ADC_DESC_module_subtype_MASK) + ((major_rev<<ADC_DESC_major_rev_OFS)&ADC_DESC_major_rev_MASK) + ((minor_rev<<ADC_DESC_minor_rev_OFS)&ADC_DESC_minor_rev_MASK);
}

static inline void ADC_PWR_EN_WRITE(ADC_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<ADC_PWR_EN_pwr_en_OFS)&ADC_PWR_EN_pwr_en_MASK) + ((pwr_en_key<<ADC_PWR_EN_pwr_en_key_OFS)&ADC_PWR_EN_pwr_en_key_MASK);
}

static inline void ADC_RST_CTRL_WRITE(ADC_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<ADC_RST_CTRL_rst_OFS)&ADC_RST_CTRL_rst_MASK) + ((rst_sts_clr<<ADC_RST_CTRL_rst_sts_clr_OFS)&ADC_RST_CTRL_rst_sts_clr_MASK) + ((rst_key<<ADC_RST_CTRL_rst_key_OFS)&ADC_RST_CTRL_rst_key_MASK);
}

static inline void ADC_RST_STS_WRITE(ADC_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<ADC_RST_STS_rst_sts_OFS)&ADC_RST_STS_rst_sts_MASK);
}

static inline void ADC_DBG_CTRL_WRITE(ADC_REGS_s * registers, uint32_t stop_on_halt, uint32_t soft_stop) {
    registers->DBG_CTRL.packed_w =  + ((stop_on_halt<<ADC_DBG_CTRL_stop_on_halt_OFS)&ADC_DBG_CTRL_stop_on_halt_MASK) + ((soft_stop<<ADC_DBG_CTRL_soft_stop_OFS)&ADC_DBG_CTRL_soft_stop_MASK);
}

static inline void ADC_CLK_CTRL_WRITE(ADC_REGS_s * registers, uint32_t clk_en, uint32_t clk_div) {
    registers->CLK_CTRL.packed_w =  + ((clk_en<<ADC_CLK_CTRL_clk_en_OFS)&ADC_CLK_CTRL_clk_en_MASK) + ((clk_div<<ADC_CLK_CTRL_clk_div_OFS)&ADC_CLK_CTRL_clk_div_MASK);
}

static inline void ADC_CLK_SEL_WRITE(ADC_REGS_s * registers, uint32_t clk_sel) {
    registers->CLK_SEL.packed_w =  + ((clk_sel<<ADC_CLK_SEL_clk_sel_OFS)&ADC_CLK_SEL_clk_sel_MASK);
}

static inline void ADC_INTR_EVENT_WRITE(ADC_REGS_s * registers, uint32_t trig_to_dma_flag, uint32_t ov_flag, uint32_t seq_ov_flow, uint32_t wc_in_flag, uint32_t wc_high_flag, uint32_t wc_low_flag, uint32_t dma_done, uint32_t uf_flag, uint32_t result0_flag, uint32_t result1_flag, uint32_t result2_flag, uint32_t result3_flag, uint32_t result4_flag, uint32_t result5_flag, uint32_t result6_flag, uint32_t result7_flag, uint32_t result8_flag, uint32_t result9_flag, uint32_t result10_flag, uint32_t result11_flag, uint32_t result12_flag, uint32_t result13_flag, uint32_t result14_flag, uint32_t result15_flag) {
    registers->INTR_EVENT.packed_w =  + ((trig_to_dma_flag<<ADC_INTR_EVENT_trig_to_dma_flag_OFS)&ADC_INTR_EVENT_trig_to_dma_flag_MASK) + ((ov_flag<<ADC_INTR_EVENT_ov_flag_OFS)&ADC_INTR_EVENT_ov_flag_MASK) + ((seq_ov_flow<<ADC_INTR_EVENT_seq_ov_flow_OFS)&ADC_INTR_EVENT_seq_ov_flow_MASK) + ((wc_in_flag<<ADC_INTR_EVENT_wc_in_flag_OFS)&ADC_INTR_EVENT_wc_in_flag_MASK) + ((wc_high_flag<<ADC_INTR_EVENT_wc_high_flag_OFS)&ADC_INTR_EVENT_wc_high_flag_MASK) + ((wc_low_flag<<ADC_INTR_EVENT_wc_low_flag_OFS)&ADC_INTR_EVENT_wc_low_flag_MASK) + ((dma_done<<ADC_INTR_EVENT_dma_done_OFS)&ADC_INTR_EVENT_dma_done_MASK) + ((uf_flag<<ADC_INTR_EVENT_uf_flag_OFS)&ADC_INTR_EVENT_uf_flag_MASK) + ((result0_flag<<ADC_INTR_EVENT_result0_flag_OFS)&ADC_INTR_EVENT_result0_flag_MASK) + ((result1_flag<<ADC_INTR_EVENT_result1_flag_OFS)&ADC_INTR_EVENT_result1_flag_MASK) + ((result2_flag<<ADC_INTR_EVENT_result2_flag_OFS)&ADC_INTR_EVENT_result2_flag_MASK) + ((result3_flag<<ADC_INTR_EVENT_result3_flag_OFS)&ADC_INTR_EVENT_result3_flag_MASK) + ((result4_flag<<ADC_INTR_EVENT_result4_flag_OFS)&ADC_INTR_EVENT_result4_flag_MASK) + ((result5_flag<<ADC_INTR_EVENT_result5_flag_OFS)&ADC_INTR_EVENT_result5_flag_MASK) + ((result6_flag<<ADC_INTR_EVENT_result6_flag_OFS)&ADC_INTR_EVENT_result6_flag_MASK) + ((result7_flag<<ADC_INTR_EVENT_result7_flag_OFS)&ADC_INTR_EVENT_result7_flag_MASK) + ((result8_flag<<ADC_INTR_EVENT_result8_flag_OFS)&ADC_INTR_EVENT_result8_flag_MASK) + ((result9_flag<<ADC_INTR_EVENT_result9_flag_OFS)&ADC_INTR_EVENT_result9_flag_MASK) + ((result10_flag<<ADC_INTR_EVENT_result10_flag_OFS)&ADC_INTR_EVENT_result10_flag_MASK) + ((result11_flag<<ADC_INTR_EVENT_result11_flag_OFS)&ADC_INTR_EVENT_result11_flag_MASK) + ((result12_flag<<ADC_INTR_EVENT_result12_flag_OFS)&ADC_INTR_EVENT_result12_flag_MASK) + ((result13_flag<<ADC_INTR_EVENT_result13_flag_OFS)&ADC_INTR_EVENT_result13_flag_MASK) + ((result14_flag<<ADC_INTR_EVENT_result14_flag_OFS)&ADC_INTR_EVENT_result14_flag_MASK) + ((result15_flag<<ADC_INTR_EVENT_result15_flag_OFS)&ADC_INTR_EVENT_result15_flag_MASK);
}

static inline void ADC_INTR_EN_0_WRITE(ADC_REGS_s * registers, uint32_t trig_to_dma_flag_en, uint32_t ov_flag_en, uint32_t seq_ov_flow_en, uint32_t wc_in_flag_en, uint32_t wc_high_flag_en, uint32_t wc_low_flag_en, uint32_t dma_done_en, uint32_t uf_flag_en, uint32_t result0_flag_en, uint32_t result1_flag_en, uint32_t result2_flag_en, uint32_t result3_flag_en, uint32_t result4_flag_en, uint32_t result5_flag_en, uint32_t result6_flag_en, uint32_t result7_flag_en) {
    registers->INTR_EN_0.packed_w =  + ((trig_to_dma_flag_en<<ADC_INTR_EN_0_trig_to_dma_flag_en_OFS)&ADC_INTR_EN_0_trig_to_dma_flag_en_MASK) + ((ov_flag_en<<ADC_INTR_EN_0_ov_flag_en_OFS)&ADC_INTR_EN_0_ov_flag_en_MASK) + ((seq_ov_flow_en<<ADC_INTR_EN_0_seq_ov_flow_en_OFS)&ADC_INTR_EN_0_seq_ov_flow_en_MASK) + ((wc_in_flag_en<<ADC_INTR_EN_0_wc_in_flag_en_OFS)&ADC_INTR_EN_0_wc_in_flag_en_MASK) + ((wc_high_flag_en<<ADC_INTR_EN_0_wc_high_flag_en_OFS)&ADC_INTR_EN_0_wc_high_flag_en_MASK) + ((wc_low_flag_en<<ADC_INTR_EN_0_wc_low_flag_en_OFS)&ADC_INTR_EN_0_wc_low_flag_en_MASK) + ((dma_done_en<<ADC_INTR_EN_0_dma_done_en_OFS)&ADC_INTR_EN_0_dma_done_en_MASK) + ((uf_flag_en<<ADC_INTR_EN_0_uf_flag_en_OFS)&ADC_INTR_EN_0_uf_flag_en_MASK) + ((result0_flag_en<<ADC_INTR_EN_0_result0_flag_en_OFS)&ADC_INTR_EN_0_result0_flag_en_MASK) + ((result1_flag_en<<ADC_INTR_EN_0_result1_flag_en_OFS)&ADC_INTR_EN_0_result1_flag_en_MASK) + ((result2_flag_en<<ADC_INTR_EN_0_result2_flag_en_OFS)&ADC_INTR_EN_0_result2_flag_en_MASK) + ((result3_flag_en<<ADC_INTR_EN_0_result3_flag_en_OFS)&ADC_INTR_EN_0_result3_flag_en_MASK) + ((result4_flag_en<<ADC_INTR_EN_0_result4_flag_en_OFS)&ADC_INTR_EN_0_result4_flag_en_MASK) + ((result5_flag_en<<ADC_INTR_EN_0_result5_flag_en_OFS)&ADC_INTR_EN_0_result5_flag_en_MASK) + ((result6_flag_en<<ADC_INTR_EN_0_result6_flag_en_OFS)&ADC_INTR_EN_0_result6_flag_en_MASK) + ((result7_flag_en<<ADC_INTR_EN_0_result7_flag_en_OFS)&ADC_INTR_EN_0_result7_flag_en_MASK);
}

static inline void ADC_INTR_EN_1_WRITE(ADC_REGS_s * registers, uint32_t result8_flag_en, uint32_t result9_flag_en, uint32_t result10_flag_en, uint32_t result11_flag_en, uint32_t result12_flag_en, uint32_t result13_flag_en, uint32_t result14_flag_en, uint32_t result15_flag_en) {
    registers->INTR_EN_1.packed_w =  + ((result8_flag_en<<ADC_INTR_EN_1_result8_flag_en_OFS)&ADC_INTR_EN_1_result8_flag_en_MASK) + ((result9_flag_en<<ADC_INTR_EN_1_result9_flag_en_OFS)&ADC_INTR_EN_1_result9_flag_en_MASK) + ((result10_flag_en<<ADC_INTR_EN_1_result10_flag_en_OFS)&ADC_INTR_EN_1_result10_flag_en_MASK) + ((result11_flag_en<<ADC_INTR_EN_1_result11_flag_en_OFS)&ADC_INTR_EN_1_result11_flag_en_MASK) + ((result12_flag_en<<ADC_INTR_EN_1_result12_flag_en_OFS)&ADC_INTR_EN_1_result12_flag_en_MASK) + ((result13_flag_en<<ADC_INTR_EN_1_result13_flag_en_OFS)&ADC_INTR_EN_1_result13_flag_en_MASK) + ((result14_flag_en<<ADC_INTR_EN_1_result14_flag_en_OFS)&ADC_INTR_EN_1_result14_flag_en_MASK) + ((result15_flag_en<<ADC_INTR_EN_1_result15_flag_en_OFS)&ADC_INTR_EN_1_result15_flag_en_MASK);
}

static inline void ADC_DMA_EN_0_WRITE(ADC_REGS_s * registers, uint32_t trig_to_dma_en, uint32_t ov_dma_en, uint32_t seq_ov_dma_en, uint32_t wc_in_dma_en, uint32_t wc_high_dma_en, uint32_t wc_low_dma_en, uint32_t dma_done_dma_en, uint32_t uf_dma_en, uint32_t result0_dma_en, uint32_t result1_dma_en, uint32_t result2_dma_en, uint32_t result3_dma_en, uint32_t result4_dma_en, uint32_t result5_dma_en, uint32_t result6_dma_en, uint32_t result7_dma_en) {
    registers->DMA_EN_0.packed_w =  + ((trig_to_dma_en<<ADC_DMA_EN_0_trig_to_dma_en_OFS)&ADC_DMA_EN_0_trig_to_dma_en_MASK) + ((ov_dma_en<<ADC_DMA_EN_0_ov_dma_en_OFS)&ADC_DMA_EN_0_ov_dma_en_MASK) + ((seq_ov_dma_en<<ADC_DMA_EN_0_seq_ov_dma_en_OFS)&ADC_DMA_EN_0_seq_ov_dma_en_MASK) + ((wc_in_dma_en<<ADC_DMA_EN_0_wc_in_dma_en_OFS)&ADC_DMA_EN_0_wc_in_dma_en_MASK) + ((wc_high_dma_en<<ADC_DMA_EN_0_wc_high_dma_en_OFS)&ADC_DMA_EN_0_wc_high_dma_en_MASK) + ((wc_low_dma_en<<ADC_DMA_EN_0_wc_low_dma_en_OFS)&ADC_DMA_EN_0_wc_low_dma_en_MASK) + ((dma_done_dma_en<<ADC_DMA_EN_0_dma_done_dma_en_OFS)&ADC_DMA_EN_0_dma_done_dma_en_MASK) + ((uf_dma_en<<ADC_DMA_EN_0_uf_dma_en_OFS)&ADC_DMA_EN_0_uf_dma_en_MASK) + ((result0_dma_en<<ADC_DMA_EN_0_result0_dma_en_OFS)&ADC_DMA_EN_0_result0_dma_en_MASK) + ((result1_dma_en<<ADC_DMA_EN_0_result1_dma_en_OFS)&ADC_DMA_EN_0_result1_dma_en_MASK) + ((result2_dma_en<<ADC_DMA_EN_0_result2_dma_en_OFS)&ADC_DMA_EN_0_result2_dma_en_MASK) + ((result3_dma_en<<ADC_DMA_EN_0_result3_dma_en_OFS)&ADC_DMA_EN_0_result3_dma_en_MASK) + ((result4_dma_en<<ADC_DMA_EN_0_result4_dma_en_OFS)&ADC_DMA_EN_0_result4_dma_en_MASK) + ((result5_dma_en<<ADC_DMA_EN_0_result5_dma_en_OFS)&ADC_DMA_EN_0_result5_dma_en_MASK) + ((result6_dma_en<<ADC_DMA_EN_0_result6_dma_en_OFS)&ADC_DMA_EN_0_result6_dma_en_MASK) + ((result7_dma_en<<ADC_DMA_EN_0_result7_dma_en_OFS)&ADC_DMA_EN_0_result7_dma_en_MASK);
}

static inline void ADC_DMA_EN_1_WRITE(ADC_REGS_s * registers, uint32_t result8_dma_en, uint32_t result9_dma_en, uint32_t result10_dma_en, uint32_t result11_dma_en, uint32_t result12_dma_en, uint32_t result13_dma_en, uint32_t result14_dma_en, uint32_t result15_dma_en) {
    registers->DMA_EN_1.packed_w =  + ((result8_dma_en<<ADC_DMA_EN_1_result8_dma_en_OFS)&ADC_DMA_EN_1_result8_dma_en_MASK) + ((result9_dma_en<<ADC_DMA_EN_1_result9_dma_en_OFS)&ADC_DMA_EN_1_result9_dma_en_MASK) + ((result10_dma_en<<ADC_DMA_EN_1_result10_dma_en_OFS)&ADC_DMA_EN_1_result10_dma_en_MASK) + ((result11_dma_en<<ADC_DMA_EN_1_result11_dma_en_OFS)&ADC_DMA_EN_1_result11_dma_en_MASK) + ((result12_dma_en<<ADC_DMA_EN_1_result12_dma_en_OFS)&ADC_DMA_EN_1_result12_dma_en_MASK) + ((result13_dma_en<<ADC_DMA_EN_1_result13_dma_en_OFS)&ADC_DMA_EN_1_result13_dma_en_MASK) + ((result14_dma_en<<ADC_DMA_EN_1_result14_dma_en_OFS)&ADC_DMA_EN_1_result14_dma_en_MASK) + ((result15_dma_en<<ADC_DMA_EN_1_result15_dma_en_OFS)&ADC_DMA_EN_1_result15_dma_en_MASK);
}

static inline void ADC_EVENT_EN_0_WRITE(ADC_REGS_s * registers, uint32_t trig_to_dma_event_en, uint32_t ov_flag_event_en, uint32_t seq_ov_flow_event_en, uint32_t wc_in_event_en, uint32_t wc_high_event_en, uint32_t wc_low_event_en, uint32_t dma_done_event_en, uint32_t uf_flag_event_en, uint32_t result0_event_en, uint32_t result1_event_en, uint32_t result2_event_en, uint32_t result3_event_en, uint32_t result4_event_en, uint32_t result5_event_en, uint32_t result6_event_en, uint32_t result7_event_en) {
    registers->EVENT_EN_0.packed_w =  + ((trig_to_dma_event_en<<ADC_EVENT_EN_0_trig_to_dma_event_en_OFS)&ADC_EVENT_EN_0_trig_to_dma_event_en_MASK) + ((ov_flag_event_en<<ADC_EVENT_EN_0_ov_flag_event_en_OFS)&ADC_EVENT_EN_0_ov_flag_event_en_MASK) + ((seq_ov_flow_event_en<<ADC_EVENT_EN_0_seq_ov_flow_event_en_OFS)&ADC_EVENT_EN_0_seq_ov_flow_event_en_MASK) + ((wc_in_event_en<<ADC_EVENT_EN_0_wc_in_event_en_OFS)&ADC_EVENT_EN_0_wc_in_event_en_MASK) + ((wc_high_event_en<<ADC_EVENT_EN_0_wc_high_event_en_OFS)&ADC_EVENT_EN_0_wc_high_event_en_MASK) + ((wc_low_event_en<<ADC_EVENT_EN_0_wc_low_event_en_OFS)&ADC_EVENT_EN_0_wc_low_event_en_MASK) + ((dma_done_event_en<<ADC_EVENT_EN_0_dma_done_event_en_OFS)&ADC_EVENT_EN_0_dma_done_event_en_MASK) + ((uf_flag_event_en<<ADC_EVENT_EN_0_uf_flag_event_en_OFS)&ADC_EVENT_EN_0_uf_flag_event_en_MASK) + ((result0_event_en<<ADC_EVENT_EN_0_result0_event_en_OFS)&ADC_EVENT_EN_0_result0_event_en_MASK) + ((result1_event_en<<ADC_EVENT_EN_0_result1_event_en_OFS)&ADC_EVENT_EN_0_result1_event_en_MASK) + ((result2_event_en<<ADC_EVENT_EN_0_result2_event_en_OFS)&ADC_EVENT_EN_0_result2_event_en_MASK) + ((result3_event_en<<ADC_EVENT_EN_0_result3_event_en_OFS)&ADC_EVENT_EN_0_result3_event_en_MASK) + ((result4_event_en<<ADC_EVENT_EN_0_result4_event_en_OFS)&ADC_EVENT_EN_0_result4_event_en_MASK) + ((result5_event_en<<ADC_EVENT_EN_0_result5_event_en_OFS)&ADC_EVENT_EN_0_result5_event_en_MASK) + ((result6_event_en<<ADC_EVENT_EN_0_result6_event_en_OFS)&ADC_EVENT_EN_0_result6_event_en_MASK) + ((result7_event_en<<ADC_EVENT_EN_0_result7_event_en_OFS)&ADC_EVENT_EN_0_result7_event_en_MASK);
}

static inline void ADC_EVENT_EN_1_WRITE(ADC_REGS_s * registers, uint32_t result8_event_en, uint32_t result9_event_en, uint32_t result10_event_en, uint32_t result11_event_en, uint32_t result12_event_en, uint32_t result13_event_en, uint32_t result14_event_en, uint32_t result15_event_en) {
    registers->EVENT_EN_1.packed_w =  + ((result8_event_en<<ADC_EVENT_EN_1_result8_event_en_OFS)&ADC_EVENT_EN_1_result8_event_en_MASK) + ((result9_event_en<<ADC_EVENT_EN_1_result9_event_en_OFS)&ADC_EVENT_EN_1_result9_event_en_MASK) + ((result10_event_en<<ADC_EVENT_EN_1_result10_event_en_OFS)&ADC_EVENT_EN_1_result10_event_en_MASK) + ((result11_event_en<<ADC_EVENT_EN_1_result11_event_en_OFS)&ADC_EVENT_EN_1_result11_event_en_MASK) + ((result12_event_en<<ADC_EVENT_EN_1_result12_event_en_OFS)&ADC_EVENT_EN_1_result12_event_en_MASK) + ((result13_event_en<<ADC_EVENT_EN_1_result13_event_en_OFS)&ADC_EVENT_EN_1_result13_event_en_MASK) + ((result14_event_en<<ADC_EVENT_EN_1_result14_event_en_OFS)&ADC_EVENT_EN_1_result14_event_en_MASK) + ((result15_event_en<<ADC_EVENT_EN_1_result15_event_en_OFS)&ADC_EVENT_EN_1_result15_event_en_MASK);
}

static inline void ADC_INTR_NMI_EN_0_WRITE(ADC_REGS_s * registers, uint32_t trig_to_dma_flag_nmi_en, uint32_t ov_flag_nmi_en, uint32_t seq_ov_flow_nmi_en, uint32_t wc_in_flag_nmi_en, uint32_t wc_high_flag_nmi_en, uint32_t wc_low_flag_nmi_en, uint32_t dma_done_nmi_en, uint32_t uf_flag_nmi_en, uint32_t result0_flag_nmi_en, uint32_t result1_flag_nmi_en, uint32_t result2_flag_nmi_en, uint32_t result3_flag_nmi_en, uint32_t result4_flag_nmi_en, uint32_t result5_flag_nmi_en, uint32_t result6_flag_nmi_en, uint32_t result7_flag_nmi_en) {
    registers->INTR_NMI_EN_0.packed_w =  + ((trig_to_dma_flag_nmi_en<<ADC_INTR_NMI_EN_0_trig_to_dma_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_0_trig_to_dma_flag_nmi_en_MASK) + ((ov_flag_nmi_en<<ADC_INTR_NMI_EN_0_ov_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_0_ov_flag_nmi_en_MASK) + ((seq_ov_flow_nmi_en<<ADC_INTR_NMI_EN_0_seq_ov_flow_nmi_en_OFS)&ADC_INTR_NMI_EN_0_seq_ov_flow_nmi_en_MASK) + ((wc_in_flag_nmi_en<<ADC_INTR_NMI_EN_0_wc_in_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_0_wc_in_flag_nmi_en_MASK) + ((wc_high_flag_nmi_en<<ADC_INTR_NMI_EN_0_wc_high_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_0_wc_high_flag_nmi_en_MASK) + ((wc_low_flag_nmi_en<<ADC_INTR_NMI_EN_0_wc_low_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_0_wc_low_flag_nmi_en_MASK) + ((dma_done_nmi_en<<ADC_INTR_NMI_EN_0_dma_done_nmi_en_OFS)&ADC_INTR_NMI_EN_0_dma_done_nmi_en_MASK) + ((uf_flag_nmi_en<<ADC_INTR_NMI_EN_0_uf_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_0_uf_flag_nmi_en_MASK) + ((result0_flag_nmi_en<<ADC_INTR_NMI_EN_0_result0_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_0_result0_flag_nmi_en_MASK) + ((result1_flag_nmi_en<<ADC_INTR_NMI_EN_0_result1_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_0_result1_flag_nmi_en_MASK) + ((result2_flag_nmi_en<<ADC_INTR_NMI_EN_0_result2_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_0_result2_flag_nmi_en_MASK) + ((result3_flag_nmi_en<<ADC_INTR_NMI_EN_0_result3_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_0_result3_flag_nmi_en_MASK) + ((result4_flag_nmi_en<<ADC_INTR_NMI_EN_0_result4_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_0_result4_flag_nmi_en_MASK) + ((result5_flag_nmi_en<<ADC_INTR_NMI_EN_0_result5_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_0_result5_flag_nmi_en_MASK) + ((result6_flag_nmi_en<<ADC_INTR_NMI_EN_0_result6_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_0_result6_flag_nmi_en_MASK) + ((result7_flag_nmi_en<<ADC_INTR_NMI_EN_0_result7_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_0_result7_flag_nmi_en_MASK);
}

static inline void ADC_INTR_NMI_EN_1_WRITE(ADC_REGS_s * registers, uint32_t result8_flag_nmi_en, uint32_t result9_flag_nmi_en, uint32_t result10_flag_nmi_en, uint32_t result11_flag_nmi_en, uint32_t result12_flag_nmi_en, uint32_t result13_flag_nmi_en, uint32_t result14_flag_nmi_en, uint32_t result15_flag_nmi_en) {
    registers->INTR_NMI_EN_1.packed_w =  + ((result8_flag_nmi_en<<ADC_INTR_NMI_EN_1_result8_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_1_result8_flag_nmi_en_MASK) + ((result9_flag_nmi_en<<ADC_INTR_NMI_EN_1_result9_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_1_result9_flag_nmi_en_MASK) + ((result10_flag_nmi_en<<ADC_INTR_NMI_EN_1_result10_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_1_result10_flag_nmi_en_MASK) + ((result11_flag_nmi_en<<ADC_INTR_NMI_EN_1_result11_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_1_result11_flag_nmi_en_MASK) + ((result12_flag_nmi_en<<ADC_INTR_NMI_EN_1_result12_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_1_result12_flag_nmi_en_MASK) + ((result13_flag_nmi_en<<ADC_INTR_NMI_EN_1_result13_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_1_result13_flag_nmi_en_MASK) + ((result14_flag_nmi_en<<ADC_INTR_NMI_EN_1_result14_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_1_result14_flag_nmi_en_MASK) + ((result15_flag_nmi_en<<ADC_INTR_NMI_EN_1_result15_flag_nmi_en_OFS)&ADC_INTR_NMI_EN_1_result15_flag_nmi_en_MASK);
}

static inline void ADC_INTR_STS_WRITE(ADC_REGS_s * registers, uint32_t intr_first) {
    registers->INTR_STS.packed_w =  + ((intr_first<<ADC_INTR_STS_intr_first_OFS)&ADC_INTR_STS_intr_first_MASK);
}

static inline void ADC_INTR_SW_WRITE(ADC_REGS_s * registers, uint32_t trig_to_dma_flag_sw_set, uint32_t ov_flag_sw_set, uint32_t seq_ov_flow_sw_set, uint32_t wc_in_flag_sw_set, uint32_t wc_high_flag_sw_set, uint32_t wc_low_flag_sw_set, uint32_t dma_done_sw_set, uint32_t uf_flag_sw_set, uint32_t result0_flag_sw_set, uint32_t result1_flag_sw_set, uint32_t result2_flag_sw_set, uint32_t result3_flag_sw_set, uint32_t result4_flag_sw_set, uint32_t result5_flag_sw_set, uint32_t result6_flag_sw_set, uint32_t result7_flag_sw_set, uint32_t result8_flag_sw_set, uint32_t result9_flag_sw_set, uint32_t result10_flag_sw_set, uint32_t result11_flag_sw_set, uint32_t result12_flag_sw_set, uint32_t result13_flag_sw_set, uint32_t result14_flag_sw_set, uint32_t result15_flag_sw_set) {
    registers->INTR_SW.packed_w =  + ((trig_to_dma_flag_sw_set<<ADC_INTR_SW_trig_to_dma_flag_sw_set_OFS)&ADC_INTR_SW_trig_to_dma_flag_sw_set_MASK) + ((ov_flag_sw_set<<ADC_INTR_SW_ov_flag_sw_set_OFS)&ADC_INTR_SW_ov_flag_sw_set_MASK) + ((seq_ov_flow_sw_set<<ADC_INTR_SW_seq_ov_flow_sw_set_OFS)&ADC_INTR_SW_seq_ov_flow_sw_set_MASK) + ((wc_in_flag_sw_set<<ADC_INTR_SW_wc_in_flag_sw_set_OFS)&ADC_INTR_SW_wc_in_flag_sw_set_MASK) + ((wc_high_flag_sw_set<<ADC_INTR_SW_wc_high_flag_sw_set_OFS)&ADC_INTR_SW_wc_high_flag_sw_set_MASK) + ((wc_low_flag_sw_set<<ADC_INTR_SW_wc_low_flag_sw_set_OFS)&ADC_INTR_SW_wc_low_flag_sw_set_MASK) + ((dma_done_sw_set<<ADC_INTR_SW_dma_done_sw_set_OFS)&ADC_INTR_SW_dma_done_sw_set_MASK) + ((uf_flag_sw_set<<ADC_INTR_SW_uf_flag_sw_set_OFS)&ADC_INTR_SW_uf_flag_sw_set_MASK) + ((result0_flag_sw_set<<ADC_INTR_SW_result0_flag_sw_set_OFS)&ADC_INTR_SW_result0_flag_sw_set_MASK) + ((result1_flag_sw_set<<ADC_INTR_SW_result1_flag_sw_set_OFS)&ADC_INTR_SW_result1_flag_sw_set_MASK) + ((result2_flag_sw_set<<ADC_INTR_SW_result2_flag_sw_set_OFS)&ADC_INTR_SW_result2_flag_sw_set_MASK) + ((result3_flag_sw_set<<ADC_INTR_SW_result3_flag_sw_set_OFS)&ADC_INTR_SW_result3_flag_sw_set_MASK) + ((result4_flag_sw_set<<ADC_INTR_SW_result4_flag_sw_set_OFS)&ADC_INTR_SW_result4_flag_sw_set_MASK) + ((result5_flag_sw_set<<ADC_INTR_SW_result5_flag_sw_set_OFS)&ADC_INTR_SW_result5_flag_sw_set_MASK) + ((result6_flag_sw_set<<ADC_INTR_SW_result6_flag_sw_set_OFS)&ADC_INTR_SW_result6_flag_sw_set_MASK) + ((result7_flag_sw_set<<ADC_INTR_SW_result7_flag_sw_set_OFS)&ADC_INTR_SW_result7_flag_sw_set_MASK) + ((result8_flag_sw_set<<ADC_INTR_SW_result8_flag_sw_set_OFS)&ADC_INTR_SW_result8_flag_sw_set_MASK) + ((result9_flag_sw_set<<ADC_INTR_SW_result9_flag_sw_set_OFS)&ADC_INTR_SW_result9_flag_sw_set_MASK) + ((result10_flag_sw_set<<ADC_INTR_SW_result10_flag_sw_set_OFS)&ADC_INTR_SW_result10_flag_sw_set_MASK) + ((result11_flag_sw_set<<ADC_INTR_SW_result11_flag_sw_set_OFS)&ADC_INTR_SW_result11_flag_sw_set_MASK) + ((result12_flag_sw_set<<ADC_INTR_SW_result12_flag_sw_set_OFS)&ADC_INTR_SW_result12_flag_sw_set_MASK) + ((result13_flag_sw_set<<ADC_INTR_SW_result13_flag_sw_set_OFS)&ADC_INTR_SW_result13_flag_sw_set_MASK) + ((result14_flag_sw_set<<ADC_INTR_SW_result14_flag_sw_set_OFS)&ADC_INTR_SW_result14_flag_sw_set_MASK) + ((result15_flag_sw_set<<ADC_INTR_SW_result15_flag_sw_set_OFS)&ADC_INTR_SW_result15_flag_sw_set_MASK);
}

static inline void ADC_CONV_CFG_WRITE(ADC_REGS_s * registers, uint32_t conv_mode, uint32_t start_addr, uint32_t end_addr, uint32_t trigger_source, uint32_t adc_res, uint32_t en_conv) {
    registers->CONV_CFG.packed_w =  + ((conv_mode<<ADC_CONV_CFG_conv_mode_OFS)&ADC_CONV_CFG_conv_mode_MASK) + ((start_addr<<ADC_CONV_CFG_start_addr_OFS)&ADC_CONV_CFG_start_addr_MASK) + ((end_addr<<ADC_CONV_CFG_end_addr_OFS)&ADC_CONV_CFG_end_addr_MASK) + ((trigger_source<<ADC_CONV_CFG_trigger_source_OFS)&ADC_CONV_CFG_trigger_source_MASK) + ((adc_res<<ADC_CONV_CFG_adc_res_OFS)&ADC_CONV_CFG_adc_res_MASK) + ((en_conv<<ADC_CONV_CFG_en_conv_OFS)&ADC_CONV_CFG_en_conv_MASK);
}

static inline void ADC_CHNL_CFG_0_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_0.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_0_channel_sel_OFS)&ADC_CHNL_CFG_0_channel_sel_MASK) + ((vref_sel<<ADC_CHNL_CFG_0_vref_sel_OFS)&ADC_CHNL_CFG_0_vref_sel_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_0_hw_avg_en_OFS)&ADC_CHNL_CFG_0_hw_avg_en_MASK) + ((window_comp_en<<ADC_CHNL_CFG_0_window_comp_en_OFS)&ADC_CHNL_CFG_0_window_comp_en_MASK) + ((bcs_en<<ADC_CHNL_CFG_0_bcs_en_OFS)&ADC_CHNL_CFG_0_bcs_en_MASK);
}

static inline void ADC_CHNL_CFG_1_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_1.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_1_channel_sel_OFS)&ADC_CHNL_CFG_1_channel_sel_MASK) + ((vref_sel<<ADC_CHNL_CFG_1_vref_sel_OFS)&ADC_CHNL_CFG_1_vref_sel_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_1_hw_avg_en_OFS)&ADC_CHNL_CFG_1_hw_avg_en_MASK) + ((window_comp_en<<ADC_CHNL_CFG_1_window_comp_en_OFS)&ADC_CHNL_CFG_1_window_comp_en_MASK) + ((bcs_en<<ADC_CHNL_CFG_1_bcs_en_OFS)&ADC_CHNL_CFG_1_bcs_en_MASK);
}

static inline void ADC_CHNL_CFG_2_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_2.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_2_channel_sel_OFS)&ADC_CHNL_CFG_2_channel_sel_MASK) + ((vref_sel<<ADC_CHNL_CFG_2_vref_sel_OFS)&ADC_CHNL_CFG_2_vref_sel_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_2_hw_avg_en_OFS)&ADC_CHNL_CFG_2_hw_avg_en_MASK) + ((window_comp_en<<ADC_CHNL_CFG_2_window_comp_en_OFS)&ADC_CHNL_CFG_2_window_comp_en_MASK) + ((bcs_en<<ADC_CHNL_CFG_2_bcs_en_OFS)&ADC_CHNL_CFG_2_bcs_en_MASK);
}

static inline void ADC_CHNL_CFG_3_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_3.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_3_channel_sel_OFS)&ADC_CHNL_CFG_3_channel_sel_MASK) + ((vref_sel<<ADC_CHNL_CFG_3_vref_sel_OFS)&ADC_CHNL_CFG_3_vref_sel_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_3_hw_avg_en_OFS)&ADC_CHNL_CFG_3_hw_avg_en_MASK) + ((window_comp_en<<ADC_CHNL_CFG_3_window_comp_en_OFS)&ADC_CHNL_CFG_3_window_comp_en_MASK) + ((bcs_en<<ADC_CHNL_CFG_3_bcs_en_OFS)&ADC_CHNL_CFG_3_bcs_en_MASK);
}

static inline void ADC_CHNL_CFG_4_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_4.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_4_channel_sel_OFS)&ADC_CHNL_CFG_4_channel_sel_MASK) + ((vref_sel<<ADC_CHNL_CFG_4_vref_sel_OFS)&ADC_CHNL_CFG_4_vref_sel_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_4_hw_avg_en_OFS)&ADC_CHNL_CFG_4_hw_avg_en_MASK) + ((window_comp_en<<ADC_CHNL_CFG_4_window_comp_en_OFS)&ADC_CHNL_CFG_4_window_comp_en_MASK) + ((bcs_en<<ADC_CHNL_CFG_4_bcs_en_OFS)&ADC_CHNL_CFG_4_bcs_en_MASK);
}

static inline void ADC_CHNL_CFG_5_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_5.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_5_channel_sel_OFS)&ADC_CHNL_CFG_5_channel_sel_MASK) + ((vref_sel<<ADC_CHNL_CFG_5_vref_sel_OFS)&ADC_CHNL_CFG_5_vref_sel_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_5_hw_avg_en_OFS)&ADC_CHNL_CFG_5_hw_avg_en_MASK) + ((window_comp_en<<ADC_CHNL_CFG_5_window_comp_en_OFS)&ADC_CHNL_CFG_5_window_comp_en_MASK) + ((bcs_en<<ADC_CHNL_CFG_5_bcs_en_OFS)&ADC_CHNL_CFG_5_bcs_en_MASK);
}

static inline void ADC_CHNL_CFG_6_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_6.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_6_channel_sel_OFS)&ADC_CHNL_CFG_6_channel_sel_MASK) + ((vref_sel<<ADC_CHNL_CFG_6_vref_sel_OFS)&ADC_CHNL_CFG_6_vref_sel_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_6_hw_avg_en_OFS)&ADC_CHNL_CFG_6_hw_avg_en_MASK) + ((window_comp_en<<ADC_CHNL_CFG_6_window_comp_en_OFS)&ADC_CHNL_CFG_6_window_comp_en_MASK) + ((bcs_en<<ADC_CHNL_CFG_6_bcs_en_OFS)&ADC_CHNL_CFG_6_bcs_en_MASK);
}

static inline void ADC_CHNL_CFG_7_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_7.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_7_channel_sel_OFS)&ADC_CHNL_CFG_7_channel_sel_MASK) + ((vref_sel<<ADC_CHNL_CFG_7_vref_sel_OFS)&ADC_CHNL_CFG_7_vref_sel_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_7_hw_avg_en_OFS)&ADC_CHNL_CFG_7_hw_avg_en_MASK) + ((window_comp_en<<ADC_CHNL_CFG_7_window_comp_en_OFS)&ADC_CHNL_CFG_7_window_comp_en_MASK) + ((bcs_en<<ADC_CHNL_CFG_7_bcs_en_OFS)&ADC_CHNL_CFG_7_bcs_en_MASK);
}

static inline void ADC_CHNL_CFG_8_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_8.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_8_channel_sel_OFS)&ADC_CHNL_CFG_8_channel_sel_MASK) + ((vref_sel<<ADC_CHNL_CFG_8_vref_sel_OFS)&ADC_CHNL_CFG_8_vref_sel_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_8_hw_avg_en_OFS)&ADC_CHNL_CFG_8_hw_avg_en_MASK) + ((window_comp_en<<ADC_CHNL_CFG_8_window_comp_en_OFS)&ADC_CHNL_CFG_8_window_comp_en_MASK) + ((bcs_en<<ADC_CHNL_CFG_8_bcs_en_OFS)&ADC_CHNL_CFG_8_bcs_en_MASK);
}

static inline void ADC_CHNL_CFG_9_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_9.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_9_channel_sel_OFS)&ADC_CHNL_CFG_9_channel_sel_MASK) + ((vref_sel<<ADC_CHNL_CFG_9_vref_sel_OFS)&ADC_CHNL_CFG_9_vref_sel_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_9_hw_avg_en_OFS)&ADC_CHNL_CFG_9_hw_avg_en_MASK) + ((window_comp_en<<ADC_CHNL_CFG_9_window_comp_en_OFS)&ADC_CHNL_CFG_9_window_comp_en_MASK) + ((bcs_en<<ADC_CHNL_CFG_9_bcs_en_OFS)&ADC_CHNL_CFG_9_bcs_en_MASK);
}

static inline void ADC_CHNL_CFG_10_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_10.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_10_channel_sel_OFS)&ADC_CHNL_CFG_10_channel_sel_MASK) + ((vref_sel<<ADC_CHNL_CFG_10_vref_sel_OFS)&ADC_CHNL_CFG_10_vref_sel_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_10_hw_avg_en_OFS)&ADC_CHNL_CFG_10_hw_avg_en_MASK) + ((window_comp_en<<ADC_CHNL_CFG_10_window_comp_en_OFS)&ADC_CHNL_CFG_10_window_comp_en_MASK) + ((bcs_en<<ADC_CHNL_CFG_10_bcs_en_OFS)&ADC_CHNL_CFG_10_bcs_en_MASK);
}

static inline void ADC_CHNL_CFG_11_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_11.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_11_channel_sel_OFS)&ADC_CHNL_CFG_11_channel_sel_MASK) + ((vref_sel<<ADC_CHNL_CFG_11_vref_sel_OFS)&ADC_CHNL_CFG_11_vref_sel_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_11_hw_avg_en_OFS)&ADC_CHNL_CFG_11_hw_avg_en_MASK) + ((window_comp_en<<ADC_CHNL_CFG_11_window_comp_en_OFS)&ADC_CHNL_CFG_11_window_comp_en_MASK) + ((bcs_en<<ADC_CHNL_CFG_11_bcs_en_OFS)&ADC_CHNL_CFG_11_bcs_en_MASK);
}

static inline void ADC_CHNL_CFG_12_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_12.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_12_channel_sel_OFS)&ADC_CHNL_CFG_12_channel_sel_MASK) + ((vref_sel<<ADC_CHNL_CFG_12_vref_sel_OFS)&ADC_CHNL_CFG_12_vref_sel_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_12_hw_avg_en_OFS)&ADC_CHNL_CFG_12_hw_avg_en_MASK) + ((window_comp_en<<ADC_CHNL_CFG_12_window_comp_en_OFS)&ADC_CHNL_CFG_12_window_comp_en_MASK) + ((bcs_en<<ADC_CHNL_CFG_12_bcs_en_OFS)&ADC_CHNL_CFG_12_bcs_en_MASK);
}

static inline void ADC_CHNL_CFG_13_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_13.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_13_channel_sel_OFS)&ADC_CHNL_CFG_13_channel_sel_MASK) + ((vref_sel<<ADC_CHNL_CFG_13_vref_sel_OFS)&ADC_CHNL_CFG_13_vref_sel_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_13_hw_avg_en_OFS)&ADC_CHNL_CFG_13_hw_avg_en_MASK) + ((window_comp_en<<ADC_CHNL_CFG_13_window_comp_en_OFS)&ADC_CHNL_CFG_13_window_comp_en_MASK) + ((bcs_en<<ADC_CHNL_CFG_13_bcs_en_OFS)&ADC_CHNL_CFG_13_bcs_en_MASK);
}

static inline void ADC_CHNL_CFG_14_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_14.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_14_channel_sel_OFS)&ADC_CHNL_CFG_14_channel_sel_MASK) + ((vref_sel<<ADC_CHNL_CFG_14_vref_sel_OFS)&ADC_CHNL_CFG_14_vref_sel_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_14_hw_avg_en_OFS)&ADC_CHNL_CFG_14_hw_avg_en_MASK) + ((window_comp_en<<ADC_CHNL_CFG_14_window_comp_en_OFS)&ADC_CHNL_CFG_14_window_comp_en_MASK) + ((bcs_en<<ADC_CHNL_CFG_14_bcs_en_OFS)&ADC_CHNL_CFG_14_bcs_en_MASK);
}

static inline void ADC_CHNL_CFG_15_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_15.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_15_channel_sel_OFS)&ADC_CHNL_CFG_15_channel_sel_MASK) + ((vref_sel<<ADC_CHNL_CFG_15_vref_sel_OFS)&ADC_CHNL_CFG_15_vref_sel_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_15_hw_avg_en_OFS)&ADC_CHNL_CFG_15_hw_avg_en_MASK) + ((window_comp_en<<ADC_CHNL_CFG_15_window_comp_en_OFS)&ADC_CHNL_CFG_15_window_comp_en_MASK) + ((bcs_en<<ADC_CHNL_CFG_15_bcs_en_OFS)&ADC_CHNL_CFG_15_bcs_en_MASK);
}

static inline void ADC_RESULT_CFG_WRITE(ADC_REGS_s * registers, uint32_t fifo_en) {
    registers->RESULT_CFG.packed_w =  + ((fifo_en<<ADC_RESULT_CFG_fifo_en_OFS)&ADC_RESULT_CFG_fifo_en_MASK);
}

static inline void ADC_HW_AVG_CFG_WRITE(ADC_REGS_s * registers, uint32_t hw_sample_cnt, uint32_t hw_avg_sample_div) {
    registers->HW_AVG_CFG.packed_w =  + ((hw_sample_cnt<<ADC_HW_AVG_CFG_hw_sample_cnt_OFS)&ADC_HW_AVG_CFG_hw_sample_cnt_MASK) + ((hw_avg_sample_div<<ADC_HW_AVG_CFG_hw_avg_sample_div_OFS)&ADC_HW_AVG_CFG_hw_avg_sample_div_MASK);
}

static inline void ADC_TIMER_START_WRITE(ADC_REGS_s * registers, uint32_t timer_cnt_start) {
    registers->TIMER_START.packed_w =  + ((timer_cnt_start<<ADC_TIMER_START_timer_cnt_start_OFS)&ADC_TIMER_START_timer_cnt_start_MASK);
}

static inline void ADC_TIMER_SAMPLE_WRITE(ADC_REGS_s * registers, uint32_t timer_cnt_sample) {
    registers->TIMER_SAMPLE.packed_w =  + ((timer_cnt_sample<<ADC_TIMER_SAMPLE_timer_cnt_sample_OFS)&ADC_TIMER_SAMPLE_timer_cnt_sample_MASK);
}

static inline void ADC_TIMER_CONVERSION_WRITE(ADC_REGS_s * registers, uint32_t timer_cnt_conversion) {
    registers->TIMER_CONVERSION.packed_w =  + ((timer_cnt_conversion<<ADC_TIMER_CONVERSION_timer_cnt_conversion_OFS)&ADC_TIMER_CONVERSION_timer_cnt_conversion_MASK);
}

static inline void ADC_WINDOW_COMP_WRITE(ADC_REGS_s * registers, uint32_t window_comp_th_low, uint32_t window_comp_th_high) {
    registers->WINDOW_COMP.packed_w =  + ((window_comp_th_low<<ADC_WINDOW_COMP_window_comp_th_low_OFS)&ADC_WINDOW_COMP_window_comp_th_low_MASK) + ((window_comp_th_high<<ADC_WINDOW_COMP_window_comp_th_high_OFS)&ADC_WINDOW_COMP_window_comp_th_high_MASK);
}

static inline void ADC_ADC_STATUS_WRITE(ADC_REGS_s * registers, uint32_t adc_busy) {
    registers->ADC_STATUS.packed_w =  + ((adc_busy<<ADC_ADC_STATUS_adc_busy_OFS)&ADC_ADC_STATUS_adc_busy_MASK);
}

static inline void ADC_DMA_REG_WRITE(ADC_REGS_s * registers, uint32_t dma_en) {
    registers->DMA_REG.packed_w =  + ((dma_en<<ADC_DMA_REG_dma_en_OFS)&ADC_DMA_REG_dma_en_MASK);
}

static inline void ADC_POWER_DN_WRITE(ADC_REGS_s * registers, uint32_t pwr_dn) {
    registers->POWER_DN.packed_w =  + ((pwr_dn<<ADC_POWER_DN_pwr_dn_OFS)&ADC_POWER_DN_pwr_dn_MASK);
}

static inline void ADC_SUBS_PORT_WRITE(ADC_REGS_s * registers, uint32_t subs_port) {
    registers->SUBS_PORT.packed_w =  + ((subs_port<<ADC_SUBS_PORT_subs_port_OFS)&ADC_SUBS_PORT_subs_port_MASK);
}

static inline void ADC_PUBS_PORT_WRITE(ADC_REGS_s * registers, uint32_t pubs_port) {
    registers->PUBS_PORT.packed_w =  + ((pubs_port<<ADC_PUBS_PORT_pubs_port_OFS)&ADC_PUBS_PORT_pubs_port_MASK);
}

static inline void ADC_CALIBRATION_REQ_WRITE(ADC_REGS_s * registers, uint32_t cal_req, uint32_t cal_done, uint32_t cal_ctrl) {
    registers->CALIBRATION_REQ.packed_w =  + ((cal_req<<ADC_CALIBRATION_REQ_cal_req_OFS)&ADC_CALIBRATION_REQ_cal_req_MASK) + ((cal_done<<ADC_CALIBRATION_REQ_cal_done_OFS)&ADC_CALIBRATION_REQ_cal_done_MASK) + ((cal_ctrl<<ADC_CALIBRATION_REQ_cal_ctrl_OFS)&ADC_CALIBRATION_REQ_cal_ctrl_MASK);
}

static inline void ADC_BLOCK_ASYNC_REQ_WRITE(ADC_REGS_s * registers, uint32_t block_async_req) {
    registers->BLOCK_ASYNC_REQ.packed_w =  + ((block_async_req<<ADC_BLOCK_ASYNC_REQ_block_async_req_OFS)&ADC_BLOCK_ASYNC_REQ_block_async_req_MASK);
}

static inline void ADC_SW_TRIGGER_WRITE(ADC_REGS_s * registers, uint32_t sw_trigger, uint32_t sw_trigger_en) {
    registers->SW_TRIGGER.packed_w =  + ((sw_trigger<<ADC_SW_TRIGGER_sw_trigger_OFS)&ADC_SW_TRIGGER_sw_trigger_MASK) + ((sw_trigger_en<<ADC_SW_TRIGGER_sw_trigger_en_OFS)&ADC_SW_TRIGGER_sw_trigger_en_MASK);
}

static inline void ADC_SPARE_CTRL_WRITE(ADC_REGS_s * registers, uint32_t adc_cfg0, uint32_t adc_cfg1, uint32_t adc_cfg2, uint32_t adc_cfg3) {
    registers->SPARE_CTRL.packed_w =  + ((adc_cfg0<<ADC_SPARE_CTRL_adc_cfg0_OFS)&ADC_SPARE_CTRL_adc_cfg0_MASK) + ((adc_cfg1<<ADC_SPARE_CTRL_adc_cfg1_OFS)&ADC_SPARE_CTRL_adc_cfg1_MASK) + ((adc_cfg2<<ADC_SPARE_CTRL_adc_cfg2_OFS)&ADC_SPARE_CTRL_adc_cfg2_MASK) + ((adc_cfg3<<ADC_SPARE_CTRL_adc_cfg3_OFS)&ADC_SPARE_CTRL_adc_cfg3_MASK);
}

static inline void ADC_SPARE_STS_WRITE(ADC_REGS_s * registers, uint32_t adc_sts0, uint32_t adc_sts1, uint32_t adc_sts2, uint32_t adc_sts3) {
    registers->SPARE_STS.packed_w =  + ((adc_sts0<<ADC_SPARE_STS_adc_sts0_OFS)&ADC_SPARE_STS_adc_sts0_MASK) + ((adc_sts1<<ADC_SPARE_STS_adc_sts1_OFS)&ADC_SPARE_STS_adc_sts1_MASK) + ((adc_sts2<<ADC_SPARE_STS_adc_sts2_OFS)&ADC_SPARE_STS_adc_sts2_MASK) + ((adc_sts3<<ADC_SPARE_STS_adc_sts3_OFS)&ADC_SPARE_STS_adc_sts3_MASK);
}

static inline void ADC_EOC_ANA_WRITE(ADC_REGS_s * registers, uint32_t eoc_ana) {
    registers->EOC_ANA.packed_w =  + ((eoc_ana<<ADC_EOC_ANA_eoc_ana_OFS)&ADC_EOC_ANA_eoc_ana_MASK);
}

static inline void ADC_TEMP_SENSOR_EN_WRITE(ADC_REGS_s * registers, uint32_t temp_sensor_en) {
    registers->TEMP_SENSOR_EN.packed_w =  + ((temp_sensor_en<<ADC_TEMP_SENSOR_EN_temp_sensor_en_OFS)&ADC_TEMP_SENSOR_EN_temp_sensor_en_MASK);
}

static inline void ADC_SM_STATE_WRITE(ADC_REGS_s * registers, uint32_t curr_state) {
    registers->SM_STATE.packed_w =  + ((curr_state<<ADC_SM_STATE_curr_state_OFS)&ADC_SM_STATE_curr_state_MASK);
}

static inline void ADC_DMA_TRANSFER_CNT_WRITE(ADC_REGS_s * registers, uint32_t dma_transfer_cnt) {
    registers->DMA_TRANSFER_CNT.packed_w =  + ((dma_transfer_cnt<<ADC_DMA_TRANSFER_CNT_dma_transfer_cnt_OFS)&ADC_DMA_TRANSFER_CNT_dma_transfer_cnt_MASK);
}

