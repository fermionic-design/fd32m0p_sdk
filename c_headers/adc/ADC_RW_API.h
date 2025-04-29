#include "ADC_REGS.h"

static inline void ADC_DESC_WRITE(ADC_REGS_s * registers, uint32_t module_type, uint32_t module_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<ADC_DESC_MODULE_TYPE_OFS)&ADC_DESC_MODULE_TYPE_MASK) + ((module_subtype<<ADC_DESC_MODULE_SUBTYPE_OFS)&ADC_DESC_MODULE_SUBTYPE_MASK) + ((major_rev<<ADC_DESC_MAJOR_REV_OFS)&ADC_DESC_MAJOR_REV_MASK) + ((minor_rev<<ADC_DESC_MINOR_REV_OFS)&ADC_DESC_MINOR_REV_MASK);
}

static inline void ADC_PWR_EN_WRITE(ADC_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<ADC_PWR_EN_PWR_EN_OFS)&ADC_PWR_EN_PWR_EN_MASK) + ((pwr_en_key<<ADC_PWR_EN_PWR_EN_KEY_OFS)&ADC_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void ADC_RST_CTRL_WRITE(ADC_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<ADC_RST_CTRL_RST_OFS)&ADC_RST_CTRL_RST_MASK) + ((rst_sts_clr<<ADC_RST_CTRL_RST_STS_CLR_OFS)&ADC_RST_CTRL_RST_STS_CLR_MASK) + ((rst_key<<ADC_RST_CTRL_RST_KEY_OFS)&ADC_RST_CTRL_RST_KEY_MASK);
}

static inline void ADC_RST_STS_WRITE(ADC_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<ADC_RST_STS_RST_STS_OFS)&ADC_RST_STS_RST_STS_MASK);
}

static inline void ADC_DBG_CTRL_WRITE(ADC_REGS_s * registers, uint32_t stop_on_halt, uint32_t soft_stop) {
    registers->DBG_CTRL.packed_w =  + ((stop_on_halt<<ADC_DBG_CTRL_STOP_ON_HALT_OFS)&ADC_DBG_CTRL_STOP_ON_HALT_MASK) + ((soft_stop<<ADC_DBG_CTRL_SOFT_STOP_OFS)&ADC_DBG_CTRL_SOFT_STOP_MASK);
}

static inline void ADC_CLK_CTRL_WRITE(ADC_REGS_s * registers, uint32_t clk_en, uint32_t clk_div) {
    registers->CLK_CTRL.packed_w =  + ((clk_en<<ADC_CLK_CTRL_CLK_EN_OFS)&ADC_CLK_CTRL_CLK_EN_MASK) + ((clk_div<<ADC_CLK_CTRL_CLK_DIV_OFS)&ADC_CLK_CTRL_CLK_DIV_MASK);
}

static inline void ADC_CLK_SEL_WRITE(ADC_REGS_s * registers, uint32_t clk_sel) {
    registers->CLK_SEL.packed_w =  + ((clk_sel<<ADC_CLK_SEL_CLK_SEL_OFS)&ADC_CLK_SEL_CLK_SEL_MASK);
}

static inline void ADC_INTR_EVENT_WRITE(ADC_REGS_s * registers, uint32_t trig_to_dma_flag, uint32_t ov_flag, uint32_t seq_ov_flow, uint32_t wc_in_flag, uint32_t wc_high_flag, uint32_t wc_low_flag, uint32_t dma_done, uint32_t uf_flag, uint32_t result0_flag, uint32_t result1_flag, uint32_t result2_flag, uint32_t result3_flag, uint32_t result4_flag, uint32_t result5_flag, uint32_t result6_flag, uint32_t result7_flag, uint32_t result8_flag, uint32_t result9_flag, uint32_t result10_flag, uint32_t result11_flag, uint32_t result12_flag, uint32_t result13_flag, uint32_t result14_flag, uint32_t result15_flag) {
    registers->INTR_EVENT.packed_w =  + ((trig_to_dma_flag<<ADC_INTR_EVENT_TRIG_TO_DMA_FLAG_OFS)&ADC_INTR_EVENT_TRIG_TO_DMA_FLAG_MASK) + ((ov_flag<<ADC_INTR_EVENT_OV_FLAG_OFS)&ADC_INTR_EVENT_OV_FLAG_MASK) + ((seq_ov_flow<<ADC_INTR_EVENT_SEQ_OV_FLOW_OFS)&ADC_INTR_EVENT_SEQ_OV_FLOW_MASK) + ((wc_in_flag<<ADC_INTR_EVENT_WC_IN_FLAG_OFS)&ADC_INTR_EVENT_WC_IN_FLAG_MASK) + ((wc_high_flag<<ADC_INTR_EVENT_WC_HIGH_FLAG_OFS)&ADC_INTR_EVENT_WC_HIGH_FLAG_MASK) + ((wc_low_flag<<ADC_INTR_EVENT_WC_LOW_FLAG_OFS)&ADC_INTR_EVENT_WC_LOW_FLAG_MASK) + ((dma_done<<ADC_INTR_EVENT_DMA_DONE_OFS)&ADC_INTR_EVENT_DMA_DONE_MASK) + ((uf_flag<<ADC_INTR_EVENT_UF_FLAG_OFS)&ADC_INTR_EVENT_UF_FLAG_MASK) + ((result0_flag<<ADC_INTR_EVENT_RESULT0_FLAG_OFS)&ADC_INTR_EVENT_RESULT0_FLAG_MASK) + ((result1_flag<<ADC_INTR_EVENT_RESULT1_FLAG_OFS)&ADC_INTR_EVENT_RESULT1_FLAG_MASK) + ((result2_flag<<ADC_INTR_EVENT_RESULT2_FLAG_OFS)&ADC_INTR_EVENT_RESULT2_FLAG_MASK) + ((result3_flag<<ADC_INTR_EVENT_RESULT3_FLAG_OFS)&ADC_INTR_EVENT_RESULT3_FLAG_MASK) + ((result4_flag<<ADC_INTR_EVENT_RESULT4_FLAG_OFS)&ADC_INTR_EVENT_RESULT4_FLAG_MASK) + ((result5_flag<<ADC_INTR_EVENT_RESULT5_FLAG_OFS)&ADC_INTR_EVENT_RESULT5_FLAG_MASK) + ((result6_flag<<ADC_INTR_EVENT_RESULT6_FLAG_OFS)&ADC_INTR_EVENT_RESULT6_FLAG_MASK) + ((result7_flag<<ADC_INTR_EVENT_RESULT7_FLAG_OFS)&ADC_INTR_EVENT_RESULT7_FLAG_MASK) + ((result8_flag<<ADC_INTR_EVENT_RESULT8_FLAG_OFS)&ADC_INTR_EVENT_RESULT8_FLAG_MASK) + ((result9_flag<<ADC_INTR_EVENT_RESULT9_FLAG_OFS)&ADC_INTR_EVENT_RESULT9_FLAG_MASK) + ((result10_flag<<ADC_INTR_EVENT_RESULT10_FLAG_OFS)&ADC_INTR_EVENT_RESULT10_FLAG_MASK) + ((result11_flag<<ADC_INTR_EVENT_RESULT11_FLAG_OFS)&ADC_INTR_EVENT_RESULT11_FLAG_MASK) + ((result12_flag<<ADC_INTR_EVENT_RESULT12_FLAG_OFS)&ADC_INTR_EVENT_RESULT12_FLAG_MASK) + ((result13_flag<<ADC_INTR_EVENT_RESULT13_FLAG_OFS)&ADC_INTR_EVENT_RESULT13_FLAG_MASK) + ((result14_flag<<ADC_INTR_EVENT_RESULT14_FLAG_OFS)&ADC_INTR_EVENT_RESULT14_FLAG_MASK) + ((result15_flag<<ADC_INTR_EVENT_RESULT15_FLAG_OFS)&ADC_INTR_EVENT_RESULT15_FLAG_MASK);
}

static inline void ADC_INTR_EN_0_WRITE(ADC_REGS_s * registers, uint32_t trig_to_dma_flag_en, uint32_t ov_flag_en, uint32_t seq_ov_flow_en, uint32_t wc_in_flag_en, uint32_t wc_high_flag_en, uint32_t wc_low_flag_en, uint32_t dma_done_en, uint32_t uf_flag_en, uint32_t result0_flag_en, uint32_t result1_flag_en, uint32_t result2_flag_en, uint32_t result3_flag_en, uint32_t result4_flag_en, uint32_t result5_flag_en, uint32_t result6_flag_en, uint32_t result7_flag_en) {
    registers->INTR_EN_0.packed_w =  + ((trig_to_dma_flag_en<<ADC_INTR_EN_0_TRIG_TO_DMA_FLAG_EN_OFS)&ADC_INTR_EN_0_TRIG_TO_DMA_FLAG_EN_MASK) + ((ov_flag_en<<ADC_INTR_EN_0_OV_FLAG_EN_OFS)&ADC_INTR_EN_0_OV_FLAG_EN_MASK) + ((seq_ov_flow_en<<ADC_INTR_EN_0_SEQ_OV_FLOW_EN_OFS)&ADC_INTR_EN_0_SEQ_OV_FLOW_EN_MASK) + ((wc_in_flag_en<<ADC_INTR_EN_0_WC_IN_FLAG_EN_OFS)&ADC_INTR_EN_0_WC_IN_FLAG_EN_MASK) + ((wc_high_flag_en<<ADC_INTR_EN_0_WC_HIGH_FLAG_EN_OFS)&ADC_INTR_EN_0_WC_HIGH_FLAG_EN_MASK) + ((wc_low_flag_en<<ADC_INTR_EN_0_WC_LOW_FLAG_EN_OFS)&ADC_INTR_EN_0_WC_LOW_FLAG_EN_MASK) + ((dma_done_en<<ADC_INTR_EN_0_DMA_DONE_EN_OFS)&ADC_INTR_EN_0_DMA_DONE_EN_MASK) + ((uf_flag_en<<ADC_INTR_EN_0_UF_FLAG_EN_OFS)&ADC_INTR_EN_0_UF_FLAG_EN_MASK) + ((result0_flag_en<<ADC_INTR_EN_0_RESULT0_FLAG_EN_OFS)&ADC_INTR_EN_0_RESULT0_FLAG_EN_MASK) + ((result1_flag_en<<ADC_INTR_EN_0_RESULT1_FLAG_EN_OFS)&ADC_INTR_EN_0_RESULT1_FLAG_EN_MASK) + ((result2_flag_en<<ADC_INTR_EN_0_RESULT2_FLAG_EN_OFS)&ADC_INTR_EN_0_RESULT2_FLAG_EN_MASK) + ((result3_flag_en<<ADC_INTR_EN_0_RESULT3_FLAG_EN_OFS)&ADC_INTR_EN_0_RESULT3_FLAG_EN_MASK) + ((result4_flag_en<<ADC_INTR_EN_0_RESULT4_FLAG_EN_OFS)&ADC_INTR_EN_0_RESULT4_FLAG_EN_MASK) + ((result5_flag_en<<ADC_INTR_EN_0_RESULT5_FLAG_EN_OFS)&ADC_INTR_EN_0_RESULT5_FLAG_EN_MASK) + ((result6_flag_en<<ADC_INTR_EN_0_RESULT6_FLAG_EN_OFS)&ADC_INTR_EN_0_RESULT6_FLAG_EN_MASK) + ((result7_flag_en<<ADC_INTR_EN_0_RESULT7_FLAG_EN_OFS)&ADC_INTR_EN_0_RESULT7_FLAG_EN_MASK);
}

static inline void ADC_INTR_EN_1_WRITE(ADC_REGS_s * registers, uint32_t result8_flag_en, uint32_t result9_flag_en, uint32_t result10_flag_en, uint32_t result11_flag_en, uint32_t result12_flag_en, uint32_t result13_flag_en, uint32_t result14_flag_en, uint32_t result15_flag_en) {
    registers->INTR_EN_1.packed_w =  + ((result8_flag_en<<ADC_INTR_EN_1_RESULT8_FLAG_EN_OFS)&ADC_INTR_EN_1_RESULT8_FLAG_EN_MASK) + ((result9_flag_en<<ADC_INTR_EN_1_RESULT9_FLAG_EN_OFS)&ADC_INTR_EN_1_RESULT9_FLAG_EN_MASK) + ((result10_flag_en<<ADC_INTR_EN_1_RESULT10_FLAG_EN_OFS)&ADC_INTR_EN_1_RESULT10_FLAG_EN_MASK) + ((result11_flag_en<<ADC_INTR_EN_1_RESULT11_FLAG_EN_OFS)&ADC_INTR_EN_1_RESULT11_FLAG_EN_MASK) + ((result12_flag_en<<ADC_INTR_EN_1_RESULT12_FLAG_EN_OFS)&ADC_INTR_EN_1_RESULT12_FLAG_EN_MASK) + ((result13_flag_en<<ADC_INTR_EN_1_RESULT13_FLAG_EN_OFS)&ADC_INTR_EN_1_RESULT13_FLAG_EN_MASK) + ((result14_flag_en<<ADC_INTR_EN_1_RESULT14_FLAG_EN_OFS)&ADC_INTR_EN_1_RESULT14_FLAG_EN_MASK) + ((result15_flag_en<<ADC_INTR_EN_1_RESULT15_FLAG_EN_OFS)&ADC_INTR_EN_1_RESULT15_FLAG_EN_MASK);
}

static inline void ADC_DMA_EN_0_WRITE(ADC_REGS_s * registers, uint32_t trig_to_dma_en, uint32_t ov_dma_en, uint32_t seq_ov_dma_en, uint32_t wc_in_dma_en, uint32_t wc_high_dma_en, uint32_t wc_low_dma_en, uint32_t dma_done_dma_en, uint32_t uf_dma_en, uint32_t result0_dma_en, uint32_t result1_dma_en, uint32_t result2_dma_en, uint32_t result3_dma_en, uint32_t result4_dma_en, uint32_t result5_dma_en, uint32_t result6_dma_en, uint32_t result7_dma_en) {
    registers->DMA_EN_0.packed_w =  + ((trig_to_dma_en<<ADC_DMA_EN_0_TRIG_TO_DMA_EN_OFS)&ADC_DMA_EN_0_TRIG_TO_DMA_EN_MASK) + ((ov_dma_en<<ADC_DMA_EN_0_OV_DMA_EN_OFS)&ADC_DMA_EN_0_OV_DMA_EN_MASK) + ((seq_ov_dma_en<<ADC_DMA_EN_0_SEQ_OV_DMA_EN_OFS)&ADC_DMA_EN_0_SEQ_OV_DMA_EN_MASK) + ((wc_in_dma_en<<ADC_DMA_EN_0_WC_IN_DMA_EN_OFS)&ADC_DMA_EN_0_WC_IN_DMA_EN_MASK) + ((wc_high_dma_en<<ADC_DMA_EN_0_WC_HIGH_DMA_EN_OFS)&ADC_DMA_EN_0_WC_HIGH_DMA_EN_MASK) + ((wc_low_dma_en<<ADC_DMA_EN_0_WC_LOW_DMA_EN_OFS)&ADC_DMA_EN_0_WC_LOW_DMA_EN_MASK) + ((dma_done_dma_en<<ADC_DMA_EN_0_DMA_DONE_DMA_EN_OFS)&ADC_DMA_EN_0_DMA_DONE_DMA_EN_MASK) + ((uf_dma_en<<ADC_DMA_EN_0_UF_DMA_EN_OFS)&ADC_DMA_EN_0_UF_DMA_EN_MASK) + ((result0_dma_en<<ADC_DMA_EN_0_RESULT0_DMA_EN_OFS)&ADC_DMA_EN_0_RESULT0_DMA_EN_MASK) + ((result1_dma_en<<ADC_DMA_EN_0_RESULT1_DMA_EN_OFS)&ADC_DMA_EN_0_RESULT1_DMA_EN_MASK) + ((result2_dma_en<<ADC_DMA_EN_0_RESULT2_DMA_EN_OFS)&ADC_DMA_EN_0_RESULT2_DMA_EN_MASK) + ((result3_dma_en<<ADC_DMA_EN_0_RESULT3_DMA_EN_OFS)&ADC_DMA_EN_0_RESULT3_DMA_EN_MASK) + ((result4_dma_en<<ADC_DMA_EN_0_RESULT4_DMA_EN_OFS)&ADC_DMA_EN_0_RESULT4_DMA_EN_MASK) + ((result5_dma_en<<ADC_DMA_EN_0_RESULT5_DMA_EN_OFS)&ADC_DMA_EN_0_RESULT5_DMA_EN_MASK) + ((result6_dma_en<<ADC_DMA_EN_0_RESULT6_DMA_EN_OFS)&ADC_DMA_EN_0_RESULT6_DMA_EN_MASK) + ((result7_dma_en<<ADC_DMA_EN_0_RESULT7_DMA_EN_OFS)&ADC_DMA_EN_0_RESULT7_DMA_EN_MASK);
}

static inline void ADC_DMA_EN_1_WRITE(ADC_REGS_s * registers, uint32_t result8_dma_en, uint32_t result9_dma_en, uint32_t result10_dma_en, uint32_t result11_dma_en, uint32_t result12_dma_en, uint32_t result13_dma_en, uint32_t result14_dma_en, uint32_t result15_dma_en) {
    registers->DMA_EN_1.packed_w =  + ((result8_dma_en<<ADC_DMA_EN_1_RESULT8_DMA_EN_OFS)&ADC_DMA_EN_1_RESULT8_DMA_EN_MASK) + ((result9_dma_en<<ADC_DMA_EN_1_RESULT9_DMA_EN_OFS)&ADC_DMA_EN_1_RESULT9_DMA_EN_MASK) + ((result10_dma_en<<ADC_DMA_EN_1_RESULT10_DMA_EN_OFS)&ADC_DMA_EN_1_RESULT10_DMA_EN_MASK) + ((result11_dma_en<<ADC_DMA_EN_1_RESULT11_DMA_EN_OFS)&ADC_DMA_EN_1_RESULT11_DMA_EN_MASK) + ((result12_dma_en<<ADC_DMA_EN_1_RESULT12_DMA_EN_OFS)&ADC_DMA_EN_1_RESULT12_DMA_EN_MASK) + ((result13_dma_en<<ADC_DMA_EN_1_RESULT13_DMA_EN_OFS)&ADC_DMA_EN_1_RESULT13_DMA_EN_MASK) + ((result14_dma_en<<ADC_DMA_EN_1_RESULT14_DMA_EN_OFS)&ADC_DMA_EN_1_RESULT14_DMA_EN_MASK) + ((result15_dma_en<<ADC_DMA_EN_1_RESULT15_DMA_EN_OFS)&ADC_DMA_EN_1_RESULT15_DMA_EN_MASK);
}

static inline void ADC_EVENT_EN_0_WRITE(ADC_REGS_s * registers, uint32_t trig_to_dma_event_en, uint32_t ov_flag_event_en, uint32_t seq_ov_flow_event_en, uint32_t wc_in_event_en, uint32_t wc_high_event_en, uint32_t wc_low_event_en, uint32_t dma_done_event_en, uint32_t uf_flag_event_en, uint32_t result0_event_en, uint32_t result1_event_en, uint32_t result2_event_en, uint32_t result3_event_en, uint32_t result4_event_en, uint32_t result5_event_en, uint32_t result6_event_en, uint32_t result7_event_en) {
    registers->EVENT_EN_0.packed_w =  + ((trig_to_dma_event_en<<ADC_EVENT_EN_0_TRIG_TO_DMA_EVENT_EN_OFS)&ADC_EVENT_EN_0_TRIG_TO_DMA_EVENT_EN_MASK) + ((ov_flag_event_en<<ADC_EVENT_EN_0_OV_FLAG_EVENT_EN_OFS)&ADC_EVENT_EN_0_OV_FLAG_EVENT_EN_MASK) + ((seq_ov_flow_event_en<<ADC_EVENT_EN_0_SEQ_OV_FLOW_EVENT_EN_OFS)&ADC_EVENT_EN_0_SEQ_OV_FLOW_EVENT_EN_MASK) + ((wc_in_event_en<<ADC_EVENT_EN_0_WC_IN_EVENT_EN_OFS)&ADC_EVENT_EN_0_WC_IN_EVENT_EN_MASK) + ((wc_high_event_en<<ADC_EVENT_EN_0_WC_HIGH_EVENT_EN_OFS)&ADC_EVENT_EN_0_WC_HIGH_EVENT_EN_MASK) + ((wc_low_event_en<<ADC_EVENT_EN_0_WC_LOW_EVENT_EN_OFS)&ADC_EVENT_EN_0_WC_LOW_EVENT_EN_MASK) + ((dma_done_event_en<<ADC_EVENT_EN_0_DMA_DONE_EVENT_EN_OFS)&ADC_EVENT_EN_0_DMA_DONE_EVENT_EN_MASK) + ((uf_flag_event_en<<ADC_EVENT_EN_0_UF_FLAG_EVENT_EN_OFS)&ADC_EVENT_EN_0_UF_FLAG_EVENT_EN_MASK) + ((result0_event_en<<ADC_EVENT_EN_0_RESULT0_EVENT_EN_OFS)&ADC_EVENT_EN_0_RESULT0_EVENT_EN_MASK) + ((result1_event_en<<ADC_EVENT_EN_0_RESULT1_EVENT_EN_OFS)&ADC_EVENT_EN_0_RESULT1_EVENT_EN_MASK) + ((result2_event_en<<ADC_EVENT_EN_0_RESULT2_EVENT_EN_OFS)&ADC_EVENT_EN_0_RESULT2_EVENT_EN_MASK) + ((result3_event_en<<ADC_EVENT_EN_0_RESULT3_EVENT_EN_OFS)&ADC_EVENT_EN_0_RESULT3_EVENT_EN_MASK) + ((result4_event_en<<ADC_EVENT_EN_0_RESULT4_EVENT_EN_OFS)&ADC_EVENT_EN_0_RESULT4_EVENT_EN_MASK) + ((result5_event_en<<ADC_EVENT_EN_0_RESULT5_EVENT_EN_OFS)&ADC_EVENT_EN_0_RESULT5_EVENT_EN_MASK) + ((result6_event_en<<ADC_EVENT_EN_0_RESULT6_EVENT_EN_OFS)&ADC_EVENT_EN_0_RESULT6_EVENT_EN_MASK) + ((result7_event_en<<ADC_EVENT_EN_0_RESULT7_EVENT_EN_OFS)&ADC_EVENT_EN_0_RESULT7_EVENT_EN_MASK);
}

static inline void ADC_EVENT_EN_1_WRITE(ADC_REGS_s * registers, uint32_t result8_event_en, uint32_t result9_event_en, uint32_t result10_event_en, uint32_t result11_event_en, uint32_t result12_event_en, uint32_t result13_event_en, uint32_t result14_event_en, uint32_t result15_event_en) {
    registers->EVENT_EN_1.packed_w =  + ((result8_event_en<<ADC_EVENT_EN_1_RESULT8_EVENT_EN_OFS)&ADC_EVENT_EN_1_RESULT8_EVENT_EN_MASK) + ((result9_event_en<<ADC_EVENT_EN_1_RESULT9_EVENT_EN_OFS)&ADC_EVENT_EN_1_RESULT9_EVENT_EN_MASK) + ((result10_event_en<<ADC_EVENT_EN_1_RESULT10_EVENT_EN_OFS)&ADC_EVENT_EN_1_RESULT10_EVENT_EN_MASK) + ((result11_event_en<<ADC_EVENT_EN_1_RESULT11_EVENT_EN_OFS)&ADC_EVENT_EN_1_RESULT11_EVENT_EN_MASK) + ((result12_event_en<<ADC_EVENT_EN_1_RESULT12_EVENT_EN_OFS)&ADC_EVENT_EN_1_RESULT12_EVENT_EN_MASK) + ((result13_event_en<<ADC_EVENT_EN_1_RESULT13_EVENT_EN_OFS)&ADC_EVENT_EN_1_RESULT13_EVENT_EN_MASK) + ((result14_event_en<<ADC_EVENT_EN_1_RESULT14_EVENT_EN_OFS)&ADC_EVENT_EN_1_RESULT14_EVENT_EN_MASK) + ((result15_event_en<<ADC_EVENT_EN_1_RESULT15_EVENT_EN_OFS)&ADC_EVENT_EN_1_RESULT15_EVENT_EN_MASK);
}

static inline void ADC_INTR_NMI_EN_0_WRITE(ADC_REGS_s * registers, uint32_t trig_to_dma_flag_nmi_en, uint32_t ov_flag_nmi_en, uint32_t seq_ov_flow_nmi_en, uint32_t wc_in_flag_nmi_en, uint32_t wc_high_flag_nmi_en, uint32_t wc_low_flag_nmi_en, uint32_t dma_done_nmi_en, uint32_t uf_flag_nmi_en, uint32_t result0_flag_nmi_en, uint32_t result1_flag_nmi_en, uint32_t result2_flag_nmi_en, uint32_t result3_flag_nmi_en, uint32_t result4_flag_nmi_en, uint32_t result5_flag_nmi_en, uint32_t result6_flag_nmi_en, uint32_t result7_flag_nmi_en) {
    registers->INTR_NMI_EN_0.packed_w =  + ((trig_to_dma_flag_nmi_en<<ADC_INTR_NMI_EN_0_TRIG_TO_DMA_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_0_TRIG_TO_DMA_FLAG_NMI_EN_MASK) + ((ov_flag_nmi_en<<ADC_INTR_NMI_EN_0_OV_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_0_OV_FLAG_NMI_EN_MASK) + ((seq_ov_flow_nmi_en<<ADC_INTR_NMI_EN_0_SEQ_OV_FLOW_NMI_EN_OFS)&ADC_INTR_NMI_EN_0_SEQ_OV_FLOW_NMI_EN_MASK) + ((wc_in_flag_nmi_en<<ADC_INTR_NMI_EN_0_WC_IN_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_0_WC_IN_FLAG_NMI_EN_MASK) + ((wc_high_flag_nmi_en<<ADC_INTR_NMI_EN_0_WC_HIGH_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_0_WC_HIGH_FLAG_NMI_EN_MASK) + ((wc_low_flag_nmi_en<<ADC_INTR_NMI_EN_0_WC_LOW_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_0_WC_LOW_FLAG_NMI_EN_MASK) + ((dma_done_nmi_en<<ADC_INTR_NMI_EN_0_DMA_DONE_NMI_EN_OFS)&ADC_INTR_NMI_EN_0_DMA_DONE_NMI_EN_MASK) + ((uf_flag_nmi_en<<ADC_INTR_NMI_EN_0_UF_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_0_UF_FLAG_NMI_EN_MASK) + ((result0_flag_nmi_en<<ADC_INTR_NMI_EN_0_RESULT0_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_0_RESULT0_FLAG_NMI_EN_MASK) + ((result1_flag_nmi_en<<ADC_INTR_NMI_EN_0_RESULT1_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_0_RESULT1_FLAG_NMI_EN_MASK) + ((result2_flag_nmi_en<<ADC_INTR_NMI_EN_0_RESULT2_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_0_RESULT2_FLAG_NMI_EN_MASK) + ((result3_flag_nmi_en<<ADC_INTR_NMI_EN_0_RESULT3_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_0_RESULT3_FLAG_NMI_EN_MASK) + ((result4_flag_nmi_en<<ADC_INTR_NMI_EN_0_RESULT4_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_0_RESULT4_FLAG_NMI_EN_MASK) + ((result5_flag_nmi_en<<ADC_INTR_NMI_EN_0_RESULT5_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_0_RESULT5_FLAG_NMI_EN_MASK) + ((result6_flag_nmi_en<<ADC_INTR_NMI_EN_0_RESULT6_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_0_RESULT6_FLAG_NMI_EN_MASK) + ((result7_flag_nmi_en<<ADC_INTR_NMI_EN_0_RESULT7_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_0_RESULT7_FLAG_NMI_EN_MASK);
}

static inline void ADC_INTR_NMI_EN_1_WRITE(ADC_REGS_s * registers, uint32_t result8_flag_nmi_en, uint32_t result9_flag_nmi_en, uint32_t result10_flag_nmi_en, uint32_t result11_flag_nmi_en, uint32_t result12_flag_nmi_en, uint32_t result13_flag_nmi_en, uint32_t result14_flag_nmi_en, uint32_t result15_flag_nmi_en) {
    registers->INTR_NMI_EN_1.packed_w =  + ((result8_flag_nmi_en<<ADC_INTR_NMI_EN_1_RESULT8_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_1_RESULT8_FLAG_NMI_EN_MASK) + ((result9_flag_nmi_en<<ADC_INTR_NMI_EN_1_RESULT9_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_1_RESULT9_FLAG_NMI_EN_MASK) + ((result10_flag_nmi_en<<ADC_INTR_NMI_EN_1_RESULT10_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_1_RESULT10_FLAG_NMI_EN_MASK) + ((result11_flag_nmi_en<<ADC_INTR_NMI_EN_1_RESULT11_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_1_RESULT11_FLAG_NMI_EN_MASK) + ((result12_flag_nmi_en<<ADC_INTR_NMI_EN_1_RESULT12_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_1_RESULT12_FLAG_NMI_EN_MASK) + ((result13_flag_nmi_en<<ADC_INTR_NMI_EN_1_RESULT13_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_1_RESULT13_FLAG_NMI_EN_MASK) + ((result14_flag_nmi_en<<ADC_INTR_NMI_EN_1_RESULT14_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_1_RESULT14_FLAG_NMI_EN_MASK) + ((result15_flag_nmi_en<<ADC_INTR_NMI_EN_1_RESULT15_FLAG_NMI_EN_OFS)&ADC_INTR_NMI_EN_1_RESULT15_FLAG_NMI_EN_MASK);
}

static inline void ADC_INTR_STS_WRITE(ADC_REGS_s * registers, uint32_t intr_first) {
    registers->INTR_STS.packed_w =  + ((intr_first<<ADC_INTR_STS_INTR_FIRST_OFS)&ADC_INTR_STS_INTR_FIRST_MASK);
}

static inline void ADC_INTR_SW_WRITE(ADC_REGS_s * registers, uint32_t trig_to_dma_flag_sw_set, uint32_t ov_flag_sw_set, uint32_t seq_ov_flow_sw_set, uint32_t wc_in_flag_sw_set, uint32_t wc_high_flag_sw_set, uint32_t wc_low_flag_sw_set, uint32_t dma_done_sw_set, uint32_t uf_flag_sw_set, uint32_t result0_flag_sw_set, uint32_t result1_flag_sw_set, uint32_t result2_flag_sw_set, uint32_t result3_flag_sw_set, uint32_t result4_flag_sw_set, uint32_t result5_flag_sw_set, uint32_t result6_flag_sw_set, uint32_t result7_flag_sw_set, uint32_t result8_flag_sw_set, uint32_t result9_flag_sw_set, uint32_t result10_flag_sw_set, uint32_t result11_flag_sw_set, uint32_t result12_flag_sw_set, uint32_t result13_flag_sw_set, uint32_t result14_flag_sw_set, uint32_t result15_flag_sw_set) {
    registers->INTR_SW.packed_w =  + ((trig_to_dma_flag_sw_set<<ADC_INTR_SW_TRIG_TO_DMA_FLAG_SW_SET_OFS)&ADC_INTR_SW_TRIG_TO_DMA_FLAG_SW_SET_MASK) + ((ov_flag_sw_set<<ADC_INTR_SW_OV_FLAG_SW_SET_OFS)&ADC_INTR_SW_OV_FLAG_SW_SET_MASK) + ((seq_ov_flow_sw_set<<ADC_INTR_SW_SEQ_OV_FLOW_SW_SET_OFS)&ADC_INTR_SW_SEQ_OV_FLOW_SW_SET_MASK) + ((wc_in_flag_sw_set<<ADC_INTR_SW_WC_IN_FLAG_SW_SET_OFS)&ADC_INTR_SW_WC_IN_FLAG_SW_SET_MASK) + ((wc_high_flag_sw_set<<ADC_INTR_SW_WC_HIGH_FLAG_SW_SET_OFS)&ADC_INTR_SW_WC_HIGH_FLAG_SW_SET_MASK) + ((wc_low_flag_sw_set<<ADC_INTR_SW_WC_LOW_FLAG_SW_SET_OFS)&ADC_INTR_SW_WC_LOW_FLAG_SW_SET_MASK) + ((dma_done_sw_set<<ADC_INTR_SW_DMA_DONE_SW_SET_OFS)&ADC_INTR_SW_DMA_DONE_SW_SET_MASK) + ((uf_flag_sw_set<<ADC_INTR_SW_UF_FLAG_SW_SET_OFS)&ADC_INTR_SW_UF_FLAG_SW_SET_MASK) + ((result0_flag_sw_set<<ADC_INTR_SW_RESULT0_FLAG_SW_SET_OFS)&ADC_INTR_SW_RESULT0_FLAG_SW_SET_MASK) + ((result1_flag_sw_set<<ADC_INTR_SW_RESULT1_FLAG_SW_SET_OFS)&ADC_INTR_SW_RESULT1_FLAG_SW_SET_MASK) + ((result2_flag_sw_set<<ADC_INTR_SW_RESULT2_FLAG_SW_SET_OFS)&ADC_INTR_SW_RESULT2_FLAG_SW_SET_MASK) + ((result3_flag_sw_set<<ADC_INTR_SW_RESULT3_FLAG_SW_SET_OFS)&ADC_INTR_SW_RESULT3_FLAG_SW_SET_MASK) + ((result4_flag_sw_set<<ADC_INTR_SW_RESULT4_FLAG_SW_SET_OFS)&ADC_INTR_SW_RESULT4_FLAG_SW_SET_MASK) + ((result5_flag_sw_set<<ADC_INTR_SW_RESULT5_FLAG_SW_SET_OFS)&ADC_INTR_SW_RESULT5_FLAG_SW_SET_MASK) + ((result6_flag_sw_set<<ADC_INTR_SW_RESULT6_FLAG_SW_SET_OFS)&ADC_INTR_SW_RESULT6_FLAG_SW_SET_MASK) + ((result7_flag_sw_set<<ADC_INTR_SW_RESULT7_FLAG_SW_SET_OFS)&ADC_INTR_SW_RESULT7_FLAG_SW_SET_MASK) + ((result8_flag_sw_set<<ADC_INTR_SW_RESULT8_FLAG_SW_SET_OFS)&ADC_INTR_SW_RESULT8_FLAG_SW_SET_MASK) + ((result9_flag_sw_set<<ADC_INTR_SW_RESULT9_FLAG_SW_SET_OFS)&ADC_INTR_SW_RESULT9_FLAG_SW_SET_MASK) + ((result10_flag_sw_set<<ADC_INTR_SW_RESULT10_FLAG_SW_SET_OFS)&ADC_INTR_SW_RESULT10_FLAG_SW_SET_MASK) + ((result11_flag_sw_set<<ADC_INTR_SW_RESULT11_FLAG_SW_SET_OFS)&ADC_INTR_SW_RESULT11_FLAG_SW_SET_MASK) + ((result12_flag_sw_set<<ADC_INTR_SW_RESULT12_FLAG_SW_SET_OFS)&ADC_INTR_SW_RESULT12_FLAG_SW_SET_MASK) + ((result13_flag_sw_set<<ADC_INTR_SW_RESULT13_FLAG_SW_SET_OFS)&ADC_INTR_SW_RESULT13_FLAG_SW_SET_MASK) + ((result14_flag_sw_set<<ADC_INTR_SW_RESULT14_FLAG_SW_SET_OFS)&ADC_INTR_SW_RESULT14_FLAG_SW_SET_MASK) + ((result15_flag_sw_set<<ADC_INTR_SW_RESULT15_FLAG_SW_SET_OFS)&ADC_INTR_SW_RESULT15_FLAG_SW_SET_MASK);
}

static inline void ADC_CONV_CFG_WRITE(ADC_REGS_s * registers, uint32_t conv_mode, uint32_t start_addr, uint32_t end_addr, uint32_t trigger_source, uint32_t adc_res, uint32_t en_conv) {
    registers->CONV_CFG.packed_w =  + ((conv_mode<<ADC_CONV_CFG_CONV_MODE_OFS)&ADC_CONV_CFG_CONV_MODE_MASK) + ((start_addr<<ADC_CONV_CFG_START_ADDR_OFS)&ADC_CONV_CFG_START_ADDR_MASK) + ((end_addr<<ADC_CONV_CFG_END_ADDR_OFS)&ADC_CONV_CFG_END_ADDR_MASK) + ((trigger_source<<ADC_CONV_CFG_TRIGGER_SOURCE_OFS)&ADC_CONV_CFG_TRIGGER_SOURCE_MASK) + ((adc_res<<ADC_CONV_CFG_ADC_RES_OFS)&ADC_CONV_CFG_ADC_RES_MASK) + ((en_conv<<ADC_CONV_CFG_EN_CONV_OFS)&ADC_CONV_CFG_EN_CONV_MASK);
}

static inline void ADC_CHNL_CFG_0_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_0.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_0_CHANNEL_SEL_OFS)&ADC_CHNL_CFG_0_CHANNEL_SEL_MASK) + ((vref_sel<<ADC_CHNL_CFG_0_VREF_SEL_OFS)&ADC_CHNL_CFG_0_VREF_SEL_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_0_HW_AVG_EN_OFS)&ADC_CHNL_CFG_0_HW_AVG_EN_MASK) + ((window_comp_en<<ADC_CHNL_CFG_0_WINDOW_COMP_EN_OFS)&ADC_CHNL_CFG_0_WINDOW_COMP_EN_MASK) + ((bcs_en<<ADC_CHNL_CFG_0_BCS_EN_OFS)&ADC_CHNL_CFG_0_BCS_EN_MASK);
}

static inline void ADC_CHNL_CFG_1_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_1.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_1_CHANNEL_SEL_OFS)&ADC_CHNL_CFG_1_CHANNEL_SEL_MASK) + ((vref_sel<<ADC_CHNL_CFG_1_VREF_SEL_OFS)&ADC_CHNL_CFG_1_VREF_SEL_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_1_HW_AVG_EN_OFS)&ADC_CHNL_CFG_1_HW_AVG_EN_MASK) + ((window_comp_en<<ADC_CHNL_CFG_1_WINDOW_COMP_EN_OFS)&ADC_CHNL_CFG_1_WINDOW_COMP_EN_MASK) + ((bcs_en<<ADC_CHNL_CFG_1_BCS_EN_OFS)&ADC_CHNL_CFG_1_BCS_EN_MASK);
}

static inline void ADC_CHNL_CFG_2_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_2.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_2_CHANNEL_SEL_OFS)&ADC_CHNL_CFG_2_CHANNEL_SEL_MASK) + ((vref_sel<<ADC_CHNL_CFG_2_VREF_SEL_OFS)&ADC_CHNL_CFG_2_VREF_SEL_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_2_HW_AVG_EN_OFS)&ADC_CHNL_CFG_2_HW_AVG_EN_MASK) + ((window_comp_en<<ADC_CHNL_CFG_2_WINDOW_COMP_EN_OFS)&ADC_CHNL_CFG_2_WINDOW_COMP_EN_MASK) + ((bcs_en<<ADC_CHNL_CFG_2_BCS_EN_OFS)&ADC_CHNL_CFG_2_BCS_EN_MASK);
}

static inline void ADC_CHNL_CFG_3_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_3.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_3_CHANNEL_SEL_OFS)&ADC_CHNL_CFG_3_CHANNEL_SEL_MASK) + ((vref_sel<<ADC_CHNL_CFG_3_VREF_SEL_OFS)&ADC_CHNL_CFG_3_VREF_SEL_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_3_HW_AVG_EN_OFS)&ADC_CHNL_CFG_3_HW_AVG_EN_MASK) + ((window_comp_en<<ADC_CHNL_CFG_3_WINDOW_COMP_EN_OFS)&ADC_CHNL_CFG_3_WINDOW_COMP_EN_MASK) + ((bcs_en<<ADC_CHNL_CFG_3_BCS_EN_OFS)&ADC_CHNL_CFG_3_BCS_EN_MASK);
}

static inline void ADC_CHNL_CFG_4_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_4.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_4_CHANNEL_SEL_OFS)&ADC_CHNL_CFG_4_CHANNEL_SEL_MASK) + ((vref_sel<<ADC_CHNL_CFG_4_VREF_SEL_OFS)&ADC_CHNL_CFG_4_VREF_SEL_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_4_HW_AVG_EN_OFS)&ADC_CHNL_CFG_4_HW_AVG_EN_MASK) + ((window_comp_en<<ADC_CHNL_CFG_4_WINDOW_COMP_EN_OFS)&ADC_CHNL_CFG_4_WINDOW_COMP_EN_MASK) + ((bcs_en<<ADC_CHNL_CFG_4_BCS_EN_OFS)&ADC_CHNL_CFG_4_BCS_EN_MASK);
}

static inline void ADC_CHNL_CFG_5_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_5.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_5_CHANNEL_SEL_OFS)&ADC_CHNL_CFG_5_CHANNEL_SEL_MASK) + ((vref_sel<<ADC_CHNL_CFG_5_VREF_SEL_OFS)&ADC_CHNL_CFG_5_VREF_SEL_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_5_HW_AVG_EN_OFS)&ADC_CHNL_CFG_5_HW_AVG_EN_MASK) + ((window_comp_en<<ADC_CHNL_CFG_5_WINDOW_COMP_EN_OFS)&ADC_CHNL_CFG_5_WINDOW_COMP_EN_MASK) + ((bcs_en<<ADC_CHNL_CFG_5_BCS_EN_OFS)&ADC_CHNL_CFG_5_BCS_EN_MASK);
}

static inline void ADC_CHNL_CFG_6_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_6.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_6_CHANNEL_SEL_OFS)&ADC_CHNL_CFG_6_CHANNEL_SEL_MASK) + ((vref_sel<<ADC_CHNL_CFG_6_VREF_SEL_OFS)&ADC_CHNL_CFG_6_VREF_SEL_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_6_HW_AVG_EN_OFS)&ADC_CHNL_CFG_6_HW_AVG_EN_MASK) + ((window_comp_en<<ADC_CHNL_CFG_6_WINDOW_COMP_EN_OFS)&ADC_CHNL_CFG_6_WINDOW_COMP_EN_MASK) + ((bcs_en<<ADC_CHNL_CFG_6_BCS_EN_OFS)&ADC_CHNL_CFG_6_BCS_EN_MASK);
}

static inline void ADC_CHNL_CFG_7_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_7.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_7_CHANNEL_SEL_OFS)&ADC_CHNL_CFG_7_CHANNEL_SEL_MASK) + ((vref_sel<<ADC_CHNL_CFG_7_VREF_SEL_OFS)&ADC_CHNL_CFG_7_VREF_SEL_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_7_HW_AVG_EN_OFS)&ADC_CHNL_CFG_7_HW_AVG_EN_MASK) + ((window_comp_en<<ADC_CHNL_CFG_7_WINDOW_COMP_EN_OFS)&ADC_CHNL_CFG_7_WINDOW_COMP_EN_MASK) + ((bcs_en<<ADC_CHNL_CFG_7_BCS_EN_OFS)&ADC_CHNL_CFG_7_BCS_EN_MASK);
}

static inline void ADC_CHNL_CFG_8_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_8.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_8_CHANNEL_SEL_OFS)&ADC_CHNL_CFG_8_CHANNEL_SEL_MASK) + ((vref_sel<<ADC_CHNL_CFG_8_VREF_SEL_OFS)&ADC_CHNL_CFG_8_VREF_SEL_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_8_HW_AVG_EN_OFS)&ADC_CHNL_CFG_8_HW_AVG_EN_MASK) + ((window_comp_en<<ADC_CHNL_CFG_8_WINDOW_COMP_EN_OFS)&ADC_CHNL_CFG_8_WINDOW_COMP_EN_MASK) + ((bcs_en<<ADC_CHNL_CFG_8_BCS_EN_OFS)&ADC_CHNL_CFG_8_BCS_EN_MASK);
}

static inline void ADC_CHNL_CFG_9_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_9.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_9_CHANNEL_SEL_OFS)&ADC_CHNL_CFG_9_CHANNEL_SEL_MASK) + ((vref_sel<<ADC_CHNL_CFG_9_VREF_SEL_OFS)&ADC_CHNL_CFG_9_VREF_SEL_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_9_HW_AVG_EN_OFS)&ADC_CHNL_CFG_9_HW_AVG_EN_MASK) + ((window_comp_en<<ADC_CHNL_CFG_9_WINDOW_COMP_EN_OFS)&ADC_CHNL_CFG_9_WINDOW_COMP_EN_MASK) + ((bcs_en<<ADC_CHNL_CFG_9_BCS_EN_OFS)&ADC_CHNL_CFG_9_BCS_EN_MASK);
}

static inline void ADC_CHNL_CFG_10_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_10.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_10_CHANNEL_SEL_OFS)&ADC_CHNL_CFG_10_CHANNEL_SEL_MASK) + ((vref_sel<<ADC_CHNL_CFG_10_VREF_SEL_OFS)&ADC_CHNL_CFG_10_VREF_SEL_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_10_HW_AVG_EN_OFS)&ADC_CHNL_CFG_10_HW_AVG_EN_MASK) + ((window_comp_en<<ADC_CHNL_CFG_10_WINDOW_COMP_EN_OFS)&ADC_CHNL_CFG_10_WINDOW_COMP_EN_MASK) + ((bcs_en<<ADC_CHNL_CFG_10_BCS_EN_OFS)&ADC_CHNL_CFG_10_BCS_EN_MASK);
}

static inline void ADC_CHNL_CFG_11_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_11.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_11_CHANNEL_SEL_OFS)&ADC_CHNL_CFG_11_CHANNEL_SEL_MASK) + ((vref_sel<<ADC_CHNL_CFG_11_VREF_SEL_OFS)&ADC_CHNL_CFG_11_VREF_SEL_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_11_HW_AVG_EN_OFS)&ADC_CHNL_CFG_11_HW_AVG_EN_MASK) + ((window_comp_en<<ADC_CHNL_CFG_11_WINDOW_COMP_EN_OFS)&ADC_CHNL_CFG_11_WINDOW_COMP_EN_MASK) + ((bcs_en<<ADC_CHNL_CFG_11_BCS_EN_OFS)&ADC_CHNL_CFG_11_BCS_EN_MASK);
}

static inline void ADC_CHNL_CFG_12_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_12.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_12_CHANNEL_SEL_OFS)&ADC_CHNL_CFG_12_CHANNEL_SEL_MASK) + ((vref_sel<<ADC_CHNL_CFG_12_VREF_SEL_OFS)&ADC_CHNL_CFG_12_VREF_SEL_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_12_HW_AVG_EN_OFS)&ADC_CHNL_CFG_12_HW_AVG_EN_MASK) + ((window_comp_en<<ADC_CHNL_CFG_12_WINDOW_COMP_EN_OFS)&ADC_CHNL_CFG_12_WINDOW_COMP_EN_MASK) + ((bcs_en<<ADC_CHNL_CFG_12_BCS_EN_OFS)&ADC_CHNL_CFG_12_BCS_EN_MASK);
}

static inline void ADC_CHNL_CFG_13_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_13.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_13_CHANNEL_SEL_OFS)&ADC_CHNL_CFG_13_CHANNEL_SEL_MASK) + ((vref_sel<<ADC_CHNL_CFG_13_VREF_SEL_OFS)&ADC_CHNL_CFG_13_VREF_SEL_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_13_HW_AVG_EN_OFS)&ADC_CHNL_CFG_13_HW_AVG_EN_MASK) + ((window_comp_en<<ADC_CHNL_CFG_13_WINDOW_COMP_EN_OFS)&ADC_CHNL_CFG_13_WINDOW_COMP_EN_MASK) + ((bcs_en<<ADC_CHNL_CFG_13_BCS_EN_OFS)&ADC_CHNL_CFG_13_BCS_EN_MASK);
}

static inline void ADC_CHNL_CFG_14_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_14.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_14_CHANNEL_SEL_OFS)&ADC_CHNL_CFG_14_CHANNEL_SEL_MASK) + ((vref_sel<<ADC_CHNL_CFG_14_VREF_SEL_OFS)&ADC_CHNL_CFG_14_VREF_SEL_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_14_HW_AVG_EN_OFS)&ADC_CHNL_CFG_14_HW_AVG_EN_MASK) + ((window_comp_en<<ADC_CHNL_CFG_14_WINDOW_COMP_EN_OFS)&ADC_CHNL_CFG_14_WINDOW_COMP_EN_MASK) + ((bcs_en<<ADC_CHNL_CFG_14_BCS_EN_OFS)&ADC_CHNL_CFG_14_BCS_EN_MASK);
}

static inline void ADC_CHNL_CFG_15_WRITE(ADC_REGS_s * registers, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG_15.packed_w =  + ((channel_sel<<ADC_CHNL_CFG_15_CHANNEL_SEL_OFS)&ADC_CHNL_CFG_15_CHANNEL_SEL_MASK) + ((vref_sel<<ADC_CHNL_CFG_15_VREF_SEL_OFS)&ADC_CHNL_CFG_15_VREF_SEL_MASK) + ((hw_avg_en<<ADC_CHNL_CFG_15_HW_AVG_EN_OFS)&ADC_CHNL_CFG_15_HW_AVG_EN_MASK) + ((window_comp_en<<ADC_CHNL_CFG_15_WINDOW_COMP_EN_OFS)&ADC_CHNL_CFG_15_WINDOW_COMP_EN_MASK) + ((bcs_en<<ADC_CHNL_CFG_15_BCS_EN_OFS)&ADC_CHNL_CFG_15_BCS_EN_MASK);
}

static inline void ADC_RESULT_CFG_WRITE(ADC_REGS_s * registers, uint32_t fifo_en) {
    registers->RESULT_CFG.packed_w =  + ((fifo_en<<ADC_RESULT_CFG_FIFO_EN_OFS)&ADC_RESULT_CFG_FIFO_EN_MASK);
}

static inline void ADC_HW_AVG_CFG_WRITE(ADC_REGS_s * registers, uint32_t hw_sample_cnt, uint32_t hw_avg_sample_div) {
    registers->HW_AVG_CFG.packed_w =  + ((hw_sample_cnt<<ADC_HW_AVG_CFG_HW_SAMPLE_CNT_OFS)&ADC_HW_AVG_CFG_HW_SAMPLE_CNT_MASK) + ((hw_avg_sample_div<<ADC_HW_AVG_CFG_HW_AVG_SAMPLE_DIV_OFS)&ADC_HW_AVG_CFG_HW_AVG_SAMPLE_DIV_MASK);
}

static inline void ADC_TIMER_START_WRITE(ADC_REGS_s * registers, uint32_t timer_cnt_start) {
    registers->TIMER_START.packed_w =  + ((timer_cnt_start<<ADC_TIMER_START_TIMER_CNT_START_OFS)&ADC_TIMER_START_TIMER_CNT_START_MASK);
}

static inline void ADC_TIMER_SAMPLE_WRITE(ADC_REGS_s * registers, uint32_t timer_cnt_sample) {
    registers->TIMER_SAMPLE.packed_w =  + ((timer_cnt_sample<<ADC_TIMER_SAMPLE_TIMER_CNT_SAMPLE_OFS)&ADC_TIMER_SAMPLE_TIMER_CNT_SAMPLE_MASK);
}

static inline void ADC_TIMER_CONVERSION_WRITE(ADC_REGS_s * registers, uint32_t timer_cnt_conversion) {
    registers->TIMER_CONVERSION.packed_w =  + ((timer_cnt_conversion<<ADC_TIMER_CONVERSION_TIMER_CNT_CONVERSION_OFS)&ADC_TIMER_CONVERSION_TIMER_CNT_CONVERSION_MASK);
}

static inline void ADC_WINDOW_COMP_WRITE(ADC_REGS_s * registers, uint32_t window_comp_th_low, uint32_t window_comp_th_high) {
    registers->WINDOW_COMP.packed_w =  + ((window_comp_th_low<<ADC_WINDOW_COMP_WINDOW_COMP_TH_LOW_OFS)&ADC_WINDOW_COMP_WINDOW_COMP_TH_LOW_MASK) + ((window_comp_th_high<<ADC_WINDOW_COMP_WINDOW_COMP_TH_HIGH_OFS)&ADC_WINDOW_COMP_WINDOW_COMP_TH_HIGH_MASK);
}

static inline void ADC_ADC_STATUS_WRITE(ADC_REGS_s * registers, uint32_t adc_busy) {
    registers->ADC_STATUS.packed_w =  + ((adc_busy<<ADC_ADC_STATUS_ADC_BUSY_OFS)&ADC_ADC_STATUS_ADC_BUSY_MASK);
}

static inline void ADC_DMA_REG_WRITE(ADC_REGS_s * registers, uint32_t dma_en) {
    registers->DMA_REG.packed_w =  + ((dma_en<<ADC_DMA_REG_DMA_EN_OFS)&ADC_DMA_REG_DMA_EN_MASK);
}

static inline void ADC_POWER_DN_WRITE(ADC_REGS_s * registers, uint32_t pwr_dn) {
    registers->POWER_DN.packed_w =  + ((pwr_dn<<ADC_POWER_DN_PWR_DN_OFS)&ADC_POWER_DN_PWR_DN_MASK);
}

static inline void ADC_SUBS_PORT_WRITE(ADC_REGS_s * registers, uint32_t subs_port) {
    registers->SUBS_PORT.packed_w =  + ((subs_port<<ADC_SUBS_PORT_SUBS_PORT_OFS)&ADC_SUBS_PORT_SUBS_PORT_MASK);
}

static inline void ADC_PUBS_PORT_WRITE(ADC_REGS_s * registers, uint32_t pubs_port) {
    registers->PUBS_PORT.packed_w =  + ((pubs_port<<ADC_PUBS_PORT_PUBS_PORT_OFS)&ADC_PUBS_PORT_PUBS_PORT_MASK);
}

static inline void ADC_CALIBRATION_REQ_WRITE(ADC_REGS_s * registers, uint32_t cal_req, uint32_t cal_done, uint32_t cal_ctrl) {
    registers->CALIBRATION_REQ.packed_w =  + ((cal_req<<ADC_CALIBRATION_REQ_CAL_REQ_OFS)&ADC_CALIBRATION_REQ_CAL_REQ_MASK) + ((cal_done<<ADC_CALIBRATION_REQ_CAL_DONE_OFS)&ADC_CALIBRATION_REQ_CAL_DONE_MASK) + ((cal_ctrl<<ADC_CALIBRATION_REQ_CAL_CTRL_OFS)&ADC_CALIBRATION_REQ_CAL_CTRL_MASK);
}

static inline void ADC_BLOCK_ASYNC_REQ_WRITE(ADC_REGS_s * registers, uint32_t block_async_req) {
    registers->BLOCK_ASYNC_REQ.packed_w =  + ((block_async_req<<ADC_BLOCK_ASYNC_REQ_BLOCK_ASYNC_REQ_OFS)&ADC_BLOCK_ASYNC_REQ_BLOCK_ASYNC_REQ_MASK);
}

static inline void ADC_SW_TRIGGER_WRITE(ADC_REGS_s * registers, uint32_t sw_trigger, uint32_t sw_trigger_en) {
    registers->SW_TRIGGER.packed_w =  + ((sw_trigger<<ADC_SW_TRIGGER_SW_TRIGGER_OFS)&ADC_SW_TRIGGER_SW_TRIGGER_MASK) + ((sw_trigger_en<<ADC_SW_TRIGGER_SW_TRIGGER_EN_OFS)&ADC_SW_TRIGGER_SW_TRIGGER_EN_MASK);
}

static inline void ADC_SPARE_CTRL_WRITE(ADC_REGS_s * registers, uint32_t adc_cfg0, uint32_t adc_cfg1, uint32_t adc_cfg2, uint32_t adc_cfg3) {
    registers->SPARE_CTRL.packed_w =  + ((adc_cfg0<<ADC_SPARE_CTRL_ADC_CFG0_OFS)&ADC_SPARE_CTRL_ADC_CFG0_MASK) + ((adc_cfg1<<ADC_SPARE_CTRL_ADC_CFG1_OFS)&ADC_SPARE_CTRL_ADC_CFG1_MASK) + ((adc_cfg2<<ADC_SPARE_CTRL_ADC_CFG2_OFS)&ADC_SPARE_CTRL_ADC_CFG2_MASK) + ((adc_cfg3<<ADC_SPARE_CTRL_ADC_CFG3_OFS)&ADC_SPARE_CTRL_ADC_CFG3_MASK);
}

static inline void ADC_SPARE_STS_WRITE(ADC_REGS_s * registers, uint32_t adc_sts0, uint32_t adc_sts1, uint32_t adc_sts2, uint32_t adc_sts3) {
    registers->SPARE_STS.packed_w =  + ((adc_sts0<<ADC_SPARE_STS_ADC_STS0_OFS)&ADC_SPARE_STS_ADC_STS0_MASK) + ((adc_sts1<<ADC_SPARE_STS_ADC_STS1_OFS)&ADC_SPARE_STS_ADC_STS1_MASK) + ((adc_sts2<<ADC_SPARE_STS_ADC_STS2_OFS)&ADC_SPARE_STS_ADC_STS2_MASK) + ((adc_sts3<<ADC_SPARE_STS_ADC_STS3_OFS)&ADC_SPARE_STS_ADC_STS3_MASK);
}

static inline void ADC_EOC_ANA_WRITE(ADC_REGS_s * registers, uint32_t eoc_ana) {
    registers->EOC_ANA.packed_w =  + ((eoc_ana<<ADC_EOC_ANA_EOC_ANA_OFS)&ADC_EOC_ANA_EOC_ANA_MASK);
}

static inline void ADC_TEMP_SENSOR_EN_WRITE(ADC_REGS_s * registers, uint32_t temp_sensor_en) {
    registers->TEMP_SENSOR_EN.packed_w =  + ((temp_sensor_en<<ADC_TEMP_SENSOR_EN_TEMP_SENSOR_EN_OFS)&ADC_TEMP_SENSOR_EN_TEMP_SENSOR_EN_MASK);
}

static inline void ADC_SM_STATE_WRITE(ADC_REGS_s * registers, uint32_t curr_state) {
    registers->SM_STATE.packed_w =  + ((curr_state<<ADC_SM_STATE_CURR_STATE_OFS)&ADC_SM_STATE_CURR_STATE_MASK);
}

static inline void ADC_DMA_TRANSFER_CNT_WRITE(ADC_REGS_s * registers, uint32_t dma_transfer_cnt) {
    registers->DMA_TRANSFER_CNT.packed_w =  + ((dma_transfer_cnt<<ADC_DMA_TRANSFER_CNT_DMA_TRANSFER_CNT_OFS)&ADC_DMA_TRANSFER_CNT_DMA_TRANSFER_CNT_MASK);
}

