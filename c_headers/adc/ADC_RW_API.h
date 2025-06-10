#ifndef ADC_RW_API_H
#define ADC_RW_API_H

#include "ADC_REGS.h"

static inline void ADC_PWR_EN_WRITE(ADC_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w = ((pwr_en<<ADC_PWR_EN_PWR_EN_OFS) & ADC_PWR_EN_PWR_EN_MASK)
                                +((pwr_en_key<<ADC_PWR_EN_PWR_EN_KEY_OFS) & ADC_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void ADC_RST_CTRL_WRITE(ADC_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w = ((rst<<ADC_RST_CTRL_RST_OFS) & ADC_RST_CTRL_RST_MASK)
                                  +((rst_sts_clr<<ADC_RST_CTRL_RST_STS_CLR_OFS) & ADC_RST_CTRL_RST_STS_CLR_MASK)
                                  +((rst_key<<ADC_RST_CTRL_RST_KEY_OFS) & ADC_RST_CTRL_RST_KEY_MASK);
}

static inline void ADC_DBG_CTRL_WRITE(ADC_REGS_s * registers, uint32_t stop_on_halt, uint32_t soft_stop) {
    registers->DBG_CTRL.packed_w = ((stop_on_halt<<ADC_DBG_CTRL_STOP_ON_HALT_OFS) & ADC_DBG_CTRL_STOP_ON_HALT_MASK)
                                  +((soft_stop<<ADC_DBG_CTRL_SOFT_STOP_OFS) & ADC_DBG_CTRL_SOFT_STOP_MASK);
}

static inline void ADC_CLK_CTRL_WRITE(ADC_REGS_s * registers, uint32_t clk_en, uint32_t clk_div) {
    registers->CLK_CTRL.packed_w = ((clk_en<<ADC_CLK_CTRL_CLK_EN_OFS) & ADC_CLK_CTRL_CLK_EN_MASK)
                                  +((clk_div<<ADC_CLK_CTRL_CLK_DIV_OFS) & ADC_CLK_CTRL_CLK_DIV_MASK);
}

static inline void ADC_CLK_SEL_WRITE(ADC_REGS_s * registers, uint32_t clk_sel) {
    registers->CLK_SEL.packed_w = ((clk_sel<<ADC_CLK_SEL_CLK_SEL_OFS) & ADC_CLK_SEL_CLK_SEL_MASK);
}

static inline void ADC_INTR_EVENT_CLEAR(ADC_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_EVENT.packed_w = 1<<intr_idx;
}

static inline void ADC_INTR_EVENT_EN(ADC_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_EN_0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_EN_1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void ADC_INTR_EVENT_DIS(ADC_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_EN_0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_EN_1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void ADC_GENERIC_DMA_EVENT_EN_(ADC_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->DMA_EVENT_EN_0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->DMA_EVENT_EN_1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void ADC_GENERIC_DMA_EVENT_DIS_(ADC_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->DMA_EVENT_EN_0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->DMA_EVENT_EN_1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void ADC_GENERIC_EVENT_EN_(ADC_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->EVENT_EN_0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->EVENT_EN_1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void ADC_GENERIC_EVENT_DIS_(ADC_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->EVENT_EN_0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->EVENT_EN_1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void ADC_INTR_EVENT_NMI_EN(ADC_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_NMI_EN_0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_NMI_EN_1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void ADC_INTR_EVENT_NMI_DIS(ADC_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_NMI_EN_0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_NMI_EN_1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void ADC_INTR_SW_WRITE(ADC_REGS_s * registers, uint32_t trig_to_dma_flag_sw_set, uint32_t ov_flag_sw_set, uint32_t seq_ov_flow_sw_set, uint32_t wc_in_flag_sw_set, uint32_t wc_high_flag_sw_set, uint32_t wc_low_flag_sw_set, uint32_t dma_done_sw_set, uint32_t uf_flag_sw_set, uint32_t result0_flag_sw_set, uint32_t result1_flag_sw_set, uint32_t result2_flag_sw_set, uint32_t result3_flag_sw_set, uint32_t result4_flag_sw_set, uint32_t result5_flag_sw_set, uint32_t result6_flag_sw_set, uint32_t result7_flag_sw_set, uint32_t result8_flag_sw_set, uint32_t result9_flag_sw_set, uint32_t result10_flag_sw_set, uint32_t result11_flag_sw_set, uint32_t result12_flag_sw_set, uint32_t result13_flag_sw_set, uint32_t result14_flag_sw_set, uint32_t result15_flag_sw_set) {
    registers->INTR_SW.packed_w = ((trig_to_dma_flag_sw_set<<ADC_INTR_SW_TRIG_TO_DMA_FLAG_SW_SET_OFS) & ADC_INTR_SW_TRIG_TO_DMA_FLAG_SW_SET_MASK)
                                 +((ov_flag_sw_set<<ADC_INTR_SW_OV_FLAG_SW_SET_OFS) & ADC_INTR_SW_OV_FLAG_SW_SET_MASK)
                                 +((seq_ov_flow_sw_set<<ADC_INTR_SW_SEQ_OV_FLOW_SW_SET_OFS) & ADC_INTR_SW_SEQ_OV_FLOW_SW_SET_MASK)
                                 +((wc_in_flag_sw_set<<ADC_INTR_SW_WC_IN_FLAG_SW_SET_OFS) & ADC_INTR_SW_WC_IN_FLAG_SW_SET_MASK)
                                 +((wc_high_flag_sw_set<<ADC_INTR_SW_WC_HIGH_FLAG_SW_SET_OFS) & ADC_INTR_SW_WC_HIGH_FLAG_SW_SET_MASK)
                                 +((wc_low_flag_sw_set<<ADC_INTR_SW_WC_LOW_FLAG_SW_SET_OFS) & ADC_INTR_SW_WC_LOW_FLAG_SW_SET_MASK)
                                 +((dma_done_sw_set<<ADC_INTR_SW_DMA_DONE_SW_SET_OFS) & ADC_INTR_SW_DMA_DONE_SW_SET_MASK)
                                 +((uf_flag_sw_set<<ADC_INTR_SW_UF_FLAG_SW_SET_OFS) & ADC_INTR_SW_UF_FLAG_SW_SET_MASK)
                                 +((result0_flag_sw_set<<ADC_INTR_SW_RESULT0_FLAG_SW_SET_OFS) & ADC_INTR_SW_RESULT0_FLAG_SW_SET_MASK)
                                 +((result1_flag_sw_set<<ADC_INTR_SW_RESULT1_FLAG_SW_SET_OFS) & ADC_INTR_SW_RESULT1_FLAG_SW_SET_MASK)
                                 +((result2_flag_sw_set<<ADC_INTR_SW_RESULT2_FLAG_SW_SET_OFS) & ADC_INTR_SW_RESULT2_FLAG_SW_SET_MASK)
                                 +((result3_flag_sw_set<<ADC_INTR_SW_RESULT3_FLAG_SW_SET_OFS) & ADC_INTR_SW_RESULT3_FLAG_SW_SET_MASK)
                                 +((result4_flag_sw_set<<ADC_INTR_SW_RESULT4_FLAG_SW_SET_OFS) & ADC_INTR_SW_RESULT4_FLAG_SW_SET_MASK)
                                 +((result5_flag_sw_set<<ADC_INTR_SW_RESULT5_FLAG_SW_SET_OFS) & ADC_INTR_SW_RESULT5_FLAG_SW_SET_MASK)
                                 +((result6_flag_sw_set<<ADC_INTR_SW_RESULT6_FLAG_SW_SET_OFS) & ADC_INTR_SW_RESULT6_FLAG_SW_SET_MASK)
                                 +((result7_flag_sw_set<<ADC_INTR_SW_RESULT7_FLAG_SW_SET_OFS) & ADC_INTR_SW_RESULT7_FLAG_SW_SET_MASK)
                                 +((result8_flag_sw_set<<ADC_INTR_SW_RESULT8_FLAG_SW_SET_OFS) & ADC_INTR_SW_RESULT8_FLAG_SW_SET_MASK)
                                 +((result9_flag_sw_set<<ADC_INTR_SW_RESULT9_FLAG_SW_SET_OFS) & ADC_INTR_SW_RESULT9_FLAG_SW_SET_MASK)
                                 +((result10_flag_sw_set<<ADC_INTR_SW_RESULT10_FLAG_SW_SET_OFS) & ADC_INTR_SW_RESULT10_FLAG_SW_SET_MASK)
                                 +((result11_flag_sw_set<<ADC_INTR_SW_RESULT11_FLAG_SW_SET_OFS) & ADC_INTR_SW_RESULT11_FLAG_SW_SET_MASK)
                                 +((result12_flag_sw_set<<ADC_INTR_SW_RESULT12_FLAG_SW_SET_OFS) & ADC_INTR_SW_RESULT12_FLAG_SW_SET_MASK)
                                 +((result13_flag_sw_set<<ADC_INTR_SW_RESULT13_FLAG_SW_SET_OFS) & ADC_INTR_SW_RESULT13_FLAG_SW_SET_MASK)
                                 +((result14_flag_sw_set<<ADC_INTR_SW_RESULT14_FLAG_SW_SET_OFS) & ADC_INTR_SW_RESULT14_FLAG_SW_SET_MASK)
                                 +((result15_flag_sw_set<<ADC_INTR_SW_RESULT15_FLAG_SW_SET_OFS) & ADC_INTR_SW_RESULT15_FLAG_SW_SET_MASK);
}

static inline void ADC_CONV_CFG_WRITE(ADC_REGS_s * registers, uint32_t conv_mode, uint32_t start_addr, uint32_t end_addr, uint32_t trigger_source, uint32_t adc_res, uint32_t en_conv) {
    registers->CONV_CFG.packed_w = ((conv_mode<<ADC_CONV_CFG_CONV_MODE_OFS) & ADC_CONV_CFG_CONV_MODE_MASK)
                                  +((start_addr<<ADC_CONV_CFG_START_ADDR_OFS) & ADC_CONV_CFG_START_ADDR_MASK)
                                  +((end_addr<<ADC_CONV_CFG_END_ADDR_OFS) & ADC_CONV_CFG_END_ADDR_MASK)
                                  +((trigger_source<<ADC_CONV_CFG_TRIGGER_SOURCE_OFS) & ADC_CONV_CFG_TRIGGER_SOURCE_MASK)
                                  +((adc_res<<ADC_CONV_CFG_ADC_RES_OFS) & ADC_CONV_CFG_ADC_RES_MASK)
                                  +((en_conv<<ADC_CONV_CFG_EN_CONV_OFS) & ADC_CONV_CFG_EN_CONV_MASK);
}

static inline void ADC_CHNL_CFG_N_WRITE(ADC_REGS_s * registers, uint32_t index, uint32_t channel_sel, uint32_t vref_sel, uint32_t hw_avg_en, uint32_t window_comp_en, uint32_t bcs_en) {
    registers->CHNL_CFG[index].packed_w = ((channel_sel<<ADC_CHNL_CFG_CHANNEL_SEL_OFS) & ADC_CHNL_CFG_CHANNEL_SEL_MASK)
                                         +((vref_sel<<ADC_CHNL_CFG_VREF_SEL_OFS) & ADC_CHNL_CFG_VREF_SEL_MASK)
                                         +((hw_avg_en<<ADC_CHNL_CFG_HW_AVG_EN_OFS) & ADC_CHNL_CFG_HW_AVG_EN_MASK)
                                         +((window_comp_en<<ADC_CHNL_CFG_WINDOW_COMP_EN_OFS) & ADC_CHNL_CFG_WINDOW_COMP_EN_MASK)
                                         +((bcs_en<<ADC_CHNL_CFG_BCS_EN_OFS) & ADC_CHNL_CFG_BCS_EN_MASK);
}

static inline void ADC_RESULT_CFG_WRITE(ADC_REGS_s * registers, uint32_t fifo_en) {
    registers->RESULT_CFG.packed_w = ((fifo_en<<ADC_RESULT_CFG_FIFO_EN_OFS) & ADC_RESULT_CFG_FIFO_EN_MASK);
}

static inline void ADC_HW_AVG_CFG_WRITE(ADC_REGS_s * registers, uint32_t hw_sample_cnt, uint32_t hw_avg_sample_div) {
    registers->HW_AVG_CFG.packed_w = ((hw_sample_cnt<<ADC_HW_AVG_CFG_HW_SAMPLE_CNT_OFS) & ADC_HW_AVG_CFG_HW_SAMPLE_CNT_MASK)
                                    +((hw_avg_sample_div<<ADC_HW_AVG_CFG_HW_AVG_SAMPLE_DIV_OFS) & ADC_HW_AVG_CFG_HW_AVG_SAMPLE_DIV_MASK);
}

static inline void ADC_TIMER_START_WRITE(ADC_REGS_s * registers, uint32_t timer_cnt_start) {
    registers->TIMER_START.packed_w = ((timer_cnt_start<<ADC_TIMER_START_TIMER_CNT_START_OFS) & ADC_TIMER_START_TIMER_CNT_START_MASK);
}

static inline void ADC_TIMER_SAMPLE_WRITE(ADC_REGS_s * registers, uint32_t timer_cnt_sample) {
    registers->TIMER_SAMPLE.packed_w = ((timer_cnt_sample<<ADC_TIMER_SAMPLE_TIMER_CNT_SAMPLE_OFS) & ADC_TIMER_SAMPLE_TIMER_CNT_SAMPLE_MASK);
}

static inline void ADC_TIMER_CONVERSION_WRITE(ADC_REGS_s * registers, uint32_t timer_cnt_conversion) {
    registers->TIMER_CONVERSION.packed_w = ((timer_cnt_conversion<<ADC_TIMER_CONVERSION_TIMER_CNT_CONVERSION_OFS) & ADC_TIMER_CONVERSION_TIMER_CNT_CONVERSION_MASK);
}

static inline void ADC_WINDOW_COMP_WRITE(ADC_REGS_s * registers, uint32_t window_comp_th_low, uint32_t window_comp_th_high) {
    registers->WINDOW_COMP.packed_w = ((window_comp_th_low<<ADC_WINDOW_COMP_WINDOW_COMP_TH_LOW_OFS) & ADC_WINDOW_COMP_WINDOW_COMP_TH_LOW_MASK)
                                     +((window_comp_th_high<<ADC_WINDOW_COMP_WINDOW_COMP_TH_HIGH_OFS) & ADC_WINDOW_COMP_WINDOW_COMP_TH_HIGH_MASK);
}

static inline void ADC_STATUS_WRITE(ADC_REGS_s * registers, uint32_t adc_busy) {
    registers->STATUS.packed_w = ((adc_busy<<ADC_STATUS_ADC_BUSY_OFS) & ADC_STATUS_ADC_BUSY_MASK);
}

static inline void ADC_DMA_REG_WRITE(ADC_REGS_s * registers, uint32_t dma_en) {
    registers->DMA_REG.packed_w = ((dma_en<<ADC_DMA_REG_DMA_EN_OFS) & ADC_DMA_REG_DMA_EN_MASK);
}

static inline void ADC_POWER_DN_WRITE(ADC_REGS_s * registers, uint32_t pwr_dn) {
    registers->POWER_DN.packed_w = ((pwr_dn<<ADC_POWER_DN_PWR_DN_OFS) & ADC_POWER_DN_PWR_DN_MASK);
}

static inline void ADC_SUBS_PORT_WRITE(ADC_REGS_s * registers, uint32_t subs_port) {
    registers->SUBS_PORT.packed_w = ((subs_port<<ADC_SUBS_PORT_SUBS_PORT_OFS) & ADC_SUBS_PORT_SUBS_PORT_MASK);
}

static inline void ADC_PUBS_PORT_WRITE(ADC_REGS_s * registers, uint32_t pubs_port) {
    registers->PUBS_PORT.packed_w = ((pubs_port<<ADC_PUBS_PORT_PUBS_PORT_OFS) & ADC_PUBS_PORT_PUBS_PORT_MASK);
}

static inline void ADC_BLOCK_ASYNC_REQ_WRITE(ADC_REGS_s * registers, uint32_t block_async_req) {
    registers->BLOCK_ASYNC_REQ.packed_w = ((block_async_req<<ADC_BLOCK_ASYNC_REQ_BLOCK_ASYNC_REQ_OFS) & ADC_BLOCK_ASYNC_REQ_BLOCK_ASYNC_REQ_MASK);
}

static inline void ADC_SW_TRIGGER_WRITE(ADC_REGS_s * registers, uint32_t sw_trigger, uint32_t sw_trigger_en) {
    registers->SW_TRIGGER.packed_w = ((sw_trigger<<ADC_SW_TRIGGER_SW_TRIGGER_OFS) & ADC_SW_TRIGGER_SW_TRIGGER_MASK)
                                    +((sw_trigger_en<<ADC_SW_TRIGGER_SW_TRIGGER_EN_OFS) & ADC_SW_TRIGGER_SW_TRIGGER_EN_MASK);
}

static inline void ADC_SPARE_CTRL_WRITE(ADC_REGS_s * registers, uint32_t adc_cfg0, uint32_t adc_cfg1, uint32_t adc_cfg2, uint32_t adc_cfg3) {
    registers->SPARE_CTRL.packed_w = ((adc_cfg0<<ADC_SPARE_CTRL_ADC_CFG0_OFS) & ADC_SPARE_CTRL_ADC_CFG0_MASK)
                                    +((adc_cfg1<<ADC_SPARE_CTRL_ADC_CFG1_OFS) & ADC_SPARE_CTRL_ADC_CFG1_MASK)
                                    +((adc_cfg2<<ADC_SPARE_CTRL_ADC_CFG2_OFS) & ADC_SPARE_CTRL_ADC_CFG2_MASK)
                                    +((adc_cfg3<<ADC_SPARE_CTRL_ADC_CFG3_OFS) & ADC_SPARE_CTRL_ADC_CFG3_MASK);
}

static inline void ADC_TEMP_SENSOR_EN_WRITE(ADC_REGS_s * registers, uint32_t temp_sensor_en) {
    registers->TEMP_SENSOR_EN.packed_w = ((temp_sensor_en<<ADC_TEMP_SENSOR_EN_TEMP_SENSOR_EN_OFS) & ADC_TEMP_SENSOR_EN_TEMP_SENSOR_EN_MASK);
}

static inline void ADC_DMA_TRANSFER_CNT_WRITE(ADC_REGS_s * registers, uint32_t dma_transfer_cnt) {
    registers->DMA_TRANSFER_CNT.packed_w = ((dma_transfer_cnt<<ADC_DMA_TRANSFER_CNT_DMA_TRANSFER_CNT_OFS) & ADC_DMA_TRANSFER_CNT_DMA_TRANSFER_CNT_MASK);
}


#endif
