#include "adc.h"
#include "uart_stdout_mcu.h"

/*
 *  ======== adc_clk_cfg ========
 */
void adc_clk_cfg(ADC_REGS_s *regs, adc_clk_cfg_s clk_cfg){
    regs->CLK_CTRL.clk_en  = clk_cfg.clk_en;
    regs->CLK_CTRL.clk_div = clk_cfg.clk_div;
    regs->CLK_SEL.packed_w  = (ADC_CLK_SEL_CLK_SEL_MASK<<16 | clk_cfg.clk_sel);
}


/*
 *  ======== adc_chnl_cfg ========
 */
void adc_chnl_cfg(ADC_REGS_s *regs, adc_chnl_cfg_s chnl_cfg){
    regs->CHNL_CFG[chnl_cfg.data_channel].channel_sel  = chnl_cfg.channel_sel;
    regs->CHNL_CFG[chnl_cfg.data_channel].vref_sel     = chnl_cfg.vref_sel;
    regs->CHNL_CFG[chnl_cfg.data_channel].hw_avg_en    = chnl_cfg.hw_avg_en;
    regs->CHNL_CFG[chnl_cfg.data_channel].bcs_en       = chnl_cfg.bcs_en;
}

/*
 *  ======== adc_result ========
 */
uint32_t adc_result(ADC_REGS_s *regs, uint32_t data_channel){
    uint32_t adc_out;
    adc_out = regs->RESULT[data_channel].result;
    return adc_out;
}

/*
 *  ======== adc_dma_cfg ========
 */
void adc_dma_cfg(ADC_REGS_s *regs, adc_dma_cfg_s dma_cfg){
    regs->DMA_REG.dma_en                       = dma_cfg.dma_en;
    regs->DMA_TRANSFER_CNT.dma_transfer_cnt    = dma_cfg.dma_transfer_cnt;
}

/*
 *  ======== adc_result_cfg ========
 */
void adc_result_cfg(ADC_REGS_s *regs, uint32_t fifo_en){
    regs->RESULT_CFG.fifo_en   = fifo_en;
}

/*
 *  ======== adc_sw_trig ========
 */
void adc_sw_trig(ADC_REGS_s *regs, uint32_t sw_trig){
    regs->SW_TRIGGER.packed_w    = sw_trig;       //SW_TRIGGER_EN AND SW_TRIG BOTH ARE SET TO 1.
}

/*
 *  ======== adc_single_ch_conv_cfg ========
 */
void adc_single_ch_conv_cfg(ADC_REGS_s *regs, adc_single_ch_conv_cfg_s adc_single_ch)/*{{{*/{
    if(adc_single_ch.repeat == 1)
    {
        regs->CONV_CFG.conv_mode               = ADC_CONV_CFG_CONV_MODE_SINGLE_RPT_CONV;                 // Single Channel Repeat
    }
    else
    {
        regs->CONV_CFG.conv_mode               = ADC_CONV_CFG_CONV_MODE_SINGLE_CONV;                 // Single Channel Single Conv
    }
    regs->CONV_CFG.start_addr                  = adc_single_ch.start_addr;               
    regs->CONV_CFG.end_addr                    = 0;
    regs->CONV_CFG.adc_res                     = adc_single_ch.adc_res;
    regs->CONV_CFG.trigger_source              = adc_single_ch.trig_src;
    regs->DMA_REG.dma_en                       = adc_single_ch.dma_en;
    regs->DMA_TRANSFER_CNT.dma_transfer_cnt    = adc_single_ch.dma_transfer_cnt;
    regs->RESULT_CFG.fifo_en                   = adc_single_ch.fifo_en;
    regs->BLOCK_ASYNC_REQ.block_async_req      = 1;
}/*}}}*/

/*
 *  ======== adc_multi_ch_conv_cfg ========
 */
void adc_multi_ch_conv_cfg(ADC_REGS_s *regs, adc_multi_ch_conv_cfg_s adc_multi_ch)/*{{{*/{
    if(adc_multi_ch.repeat == 1)
    {
        regs->CONV_CFG.conv_mode               = ADC_CONV_CFG_CONV_MODE_MULTI_CH_RPT_CONV;
    }
    else
    {
        regs->CONV_CFG.conv_mode               = ADC_CONV_CFG_CONV_MODE_MULTI_CH_CONV;
    }
    regs->CONV_CFG.start_addr                  = adc_multi_ch.start_addr;               
    regs->CONV_CFG.end_addr                    = adc_multi_ch.end_addr;
    regs->CONV_CFG.adc_res                     = adc_multi_ch.adc_res;
    regs->CONV_CFG.trigger_source              = adc_multi_ch.trig_src;
    regs->DMA_REG.dma_en                       = adc_multi_ch.dma_en;
    regs->DMA_TRANSFER_CNT.dma_transfer_cnt    = adc_multi_ch.dma_transfer_cnt;
    regs->RESULT_CFG.fifo_en                   = adc_multi_ch.fifo_en;
    regs->BLOCK_ASYNC_REQ.block_async_req      = 1;
}/*}}}*/

/*
 *  ======== adc_en_conv ========
 */
void adc_en_conv(ADC_REGS_s *regs, uint32_t en_conv){
    regs->CONV_CFG.en_conv = en_conv;
}

/*
 *  ======== adc_temp_cfg ========
 */
void adc_temp_cfg(ADC_REGS_s * adc_regs, MCU_CTRL_REGS_s *mcu_regs, VREF_REGS_s *vref_regs, adc_single_ch_conv_cfg_s adc_single_ch, adc_chnl_cfg_s chnl_cfg)/*{{{*/{
    if(adc_single_ch.repeat == 1)
    {
        adc_regs->CONV_CFG.conv_mode                       = ADC_CONV_CFG_CONV_MODE_SINGLE_RPT_CONV;
    }
    else
    {
        adc_regs->CONV_CFG.conv_mode                       = ADC_CONV_CFG_CONV_MODE_SINGLE_CONV;
    }
    adc_regs->CONV_CFG.start_addr                          = adc_single_ch.start_addr;               
    adc_regs->CONV_CFG.end_addr                            = 0;
    adc_regs->CONV_CFG.adc_res                             = adc_single_ch.adc_res;
    adc_regs->CONV_CFG.trigger_source                      = adc_single_ch.trig_src;
    adc_regs->DMA_REG.dma_en                               = adc_single_ch.dma_en;
    adc_regs->DMA_TRANSFER_CNT.dma_transfer_cnt            = adc_single_ch.dma_transfer_cnt;
    adc_regs->RESULT_CFG.fifo_en                           = adc_single_ch.dma_en;
    adc_regs->CHNL_CFG[chnl_cfg.data_channel].channel_sel  = ADC_CHNL_CFG_CHANNEL_SEL_TEMP_SENSOR; // Ch 11 used for Temp Sensor
    adc_regs->CHNL_CFG[chnl_cfg.data_channel].vref_sel     = chnl_cfg.vref_sel;
    adc_regs->CHNL_CFG[chnl_cfg.data_channel].hw_avg_en    = chnl_cfg.hw_avg_en;
    adc_regs->CHNL_CFG[chnl_cfg.data_channel].bcs_en       = 0;
    adc_regs->BLOCK_ASYNC_REQ.block_async_req              = 1;
    mcu_regs->ANA_SPARE_OUT0.spare_out_0                   = 0x00000000; // Enables Temp Sensor (active low)
    vref_regs->CTRL.enable                                 = 1;
    vref_regs->CTRL.vref_mode                              = VREF_CTRL_VREF_MODE_1P4V; 
}/*}}}*/

/*
 *  ======== adc_batt_mon_cfg ========
 */
void adc_batt_mon_cfg(ADC_REGS_s *adc_regs, MCU_CTRL_REGS_s *mcu_regs, VREF_REGS_s *vref_regs,adc_single_ch_conv_cfg_s adc_single_ch, adc_chnl_cfg_s chnl_cfg)/*{{{*/{
    vref_regs->CTRL.enable                                  = 1;
    vref_regs->CTRL.vref_mode                               = VREF_CTRL_VREF_MODE_2P5V;            // 0: 1p4v 1:2p5v
    mcu_regs->ANA_SPARE_OUT0.spare_out_0                    = 0x09800000;   // disables temp sensor through spare out regs.
    if(adc_single_ch.repeat == 1)
    {
        adc_regs->CONV_CFG.conv_mode                        = ADC_CONV_CFG_CONV_MODE_SINGLE_RPT_CONV;            // Single Channel Repeat
    }
    else
    {
        adc_regs->CONV_CFG.conv_mode                        = ADC_CONV_CFG_CONV_MODE_SINGLE_CONV;            // Single Channel Single Conv 
    }
    adc_regs->CONV_CFG.start_addr                           = adc_single_ch.start_addr;               
    adc_regs->CONV_CFG.end_addr                             = 0;            // Not needed in single channel.
    adc_regs->CONV_CFG.adc_res                              = adc_single_ch.adc_res;
    adc_regs->CONV_CFG.trigger_source                       = adc_single_ch.trig_src;
    adc_regs->DMA_REG.dma_en                                = adc_single_ch.dma_en;
    adc_regs->DMA_TRANSFER_CNT.dma_transfer_cnt             = adc_single_ch.dma_transfer_cnt;
    adc_regs->RESULT_CFG.fifo_en                            = adc_single_ch.fifo_en;
    adc_regs->CHNL_CFG[chnl_cfg.data_channel].channel_sel   = ADC_CHNL_CFG_CHANNEL_SEL_BATT_MON;           // Ch 15 for Batt Mon
    adc_regs->CHNL_CFG[chnl_cfg.data_channel].vref_sel      = chnl_cfg.vref_sel;
    adc_regs->CHNL_CFG[chnl_cfg.data_channel].hw_avg_en     = chnl_cfg.hw_avg_en;
    adc_regs->CHNL_CFG[chnl_cfg.data_channel].bcs_en        = 0;            //Burnout Current Source enable set to 0
}/*}}}*/

/*
 *  ======== adc_samp_timer_cfg ========
 */
void adc_samp_timer_cfg(ADC_REGS_s *regs, uint32_t in_clk_freq, uint32_t exp_samp_rate)/*{{{*/{
    
    uint32_t adc_clk, adc_clk_div, total_timer, conv_time, samp_time, start_time;
    uint32_t samp_rate_calculated;
    samp_rate_calculated = 0;
    adc_clk_div = (regs->CLK_CTRL.clk_div) + 1;
    adc_clk     = in_clk_freq / adc_clk_div;
    if(adc_clk % exp_samp_rate)
    {
        total_timer = (adc_clk + exp_samp_rate) / exp_samp_rate - 4;
    }
    else
    {
        total_timer = adc_clk / exp_samp_rate - 4;
    }
    while(!samp_rate_calculated)
    {
        if(total_timer < 1)
        {
            UartPuts("Samp Rate Too High.\n");  // Desired sampling rate cannot be achieved. Select correct sampling rate.
            return;
        }
        else if(total_timer > 255)
        {
            conv_time = 255;
            samp_time = total_timer - conv_time;
            if(samp_time > 31)
            {
                samp_time  = 31;
                start_time = total_timer - samp_time - conv_time;
                if(start_time > 15){
                    UartPuts("Samp rate Too Low\n");              // Desired sampling rate cannot be achieved. Lowest possible sampling rate set
                    start_time = 15;
                    samp_rate_calculated = 1;
                }
            }
            else
            {
                start_time = 1;
            }
        }
        else
        {
            conv_time  = total_timer;
            samp_time  = 1;
            start_time = 1;
            samp_rate_calculated = 1;
        }
    }
    regs->TIMER_START.timer_cnt_start           = start_time;
    regs->TIMER_SAMPLE.timer_cnt_sample         = samp_time;
    regs->TIMER_CONVERSION.timer_cnt_conversion = conv_time;
    
}/*}}}*/

/*
 *  ======== adc_hw_avg_cfg ========
 */
void adc_hw_avg_cfg(ADC_REGS_s *regs, adc_hw_avg_cfg_s adc_hw_cfg){
    regs->HW_AVG_CFG.hw_sample_cnt     = adc_hw_cfg.hw_sample_cnt;
    regs->HW_AVG_CFG.hw_avg_sample_div = adc_hw_cfg.hw_avg_sample_div;
}

/*
 *  ======== get_adc_clk_cfg ========
 */
adc_clk_cfg_s get_adc_clk_cfg(ADC_REGS_s *regs){   
    adc_clk_cfg_s clk_cfg;
    clk_cfg.clk_en  = regs->CLK_CTRL.clk_en; 
    clk_cfg.clk_div = regs->CLK_CTRL.clk_div; 
    clk_cfg.clk_sel = regs->CLK_SEL.clk_sel;
    return clk_cfg;
}

/*
 *  ======== get_adc_chnl_cfg ========
 */
adc_chnl_cfg_s get_adc_chnl_cfg(ADC_REGS_s *regs, uint32_t data_channel){
    adc_chnl_cfg_s chnl_cfg;
    chnl_cfg.channel_sel = regs->CHNL_CFG[data_channel].channel_sel;
    chnl_cfg.vref_sel    = regs->CHNL_CFG[data_channel].vref_sel;
    chnl_cfg.hw_avg_en   = regs->CHNL_CFG[data_channel].hw_avg_en;
    chnl_cfg.bcs_en      = regs->CHNL_CFG[data_channel].bcs_en;
    return chnl_cfg;
}

/*
 *  ======== get_adc_dma_cfg ========
 */
adc_dma_cfg_s get_adc_dma_cfg(ADC_REGS_s *regs){
    adc_dma_cfg_s dma_cfg;
    dma_cfg.dma_en              = regs->DMA_REG.dma_en;
    dma_cfg.dma_transfer_cnt    = regs->DMA_TRANSFER_CNT.dma_transfer_cnt;
    return dma_cfg;
}

/*
 *  ======== get_adc_result_cfg ========
 */
uint32_t get_adc_result_cfg(ADC_REGS_s *regs){
    uint32_t result_cfg;
    result_cfg = regs->RESULT_CFG.fifo_en;
    return result_cfg;
}

/*
 *  ======== get_adc_sw_trig ========
 */
adc_sw_trig_cfg_s get_adc_sw_trig(ADC_REGS_s *regs){
    adc_sw_trig_cfg_s adc_sw_trig;
    adc_sw_trig.sw_trigger      = regs->SW_TRIGGER.sw_trigger;
    adc_sw_trig.sw_trigger_en   = regs->SW_TRIGGER.sw_trigger_en;
    return adc_sw_trig;
}

/*
 *  ======== get_adc_single_ch_conv_cfg ========
 */
adc_single_ch_conv_cfg_s get_adc_single_ch_conv_cfg(ADC_REGS_s *regs)/*{{{*/{
    adc_single_ch_conv_cfg_s adc_single_ch;
    adc_single_ch.repeat           = regs->CONV_CFG.conv_mode;
    adc_single_ch.start_addr       = regs->CONV_CFG.start_addr;        
    adc_single_ch.adc_res          = regs->CONV_CFG.adc_res;                  
    adc_single_ch.trig_src         = regs->CONV_CFG.trigger_source;           
    adc_single_ch.dma_en           = regs->DMA_REG.dma_en;                    
    adc_single_ch.dma_transfer_cnt = regs->DMA_TRANSFER_CNT.dma_transfer_cnt; 
    adc_single_ch.fifo_en          = regs->RESULT_CFG.fifo_en;
    return adc_single_ch;
}/*}}}*/

/*
 *  ======== get_adc_multi_ch_conv_cfg ========
 */
adc_multi_ch_conv_cfg_s get_adc_multi_ch_conv_cfg(ADC_REGS_s *regs)/*{{{*/{
    adc_multi_ch_conv_cfg_s adc_multi_ch;
    
    adc_multi_ch.repeat             = (regs->CONV_CFG.conv_mode) & 0x01;
    adc_multi_ch.start_addr         = regs->CONV_CFG.start_addr;               
    adc_multi_ch.end_addr           = regs->CONV_CFG.end_addr;
    adc_multi_ch.adc_res            = regs->CONV_CFG.adc_res;
    adc_multi_ch.trig_src           = regs->CONV_CFG.trigger_source;
    adc_multi_ch.dma_en             = regs->DMA_REG.dma_en;
    adc_multi_ch.dma_transfer_cnt   = regs->DMA_TRANSFER_CNT.dma_transfer_cnt;
    adc_multi_ch.fifo_en            = regs->RESULT_CFG.fifo_en;
    return adc_multi_ch;
}/*}}}*/

/*
 *  ======== get_adc_en_conv ========
 */
uint32_t get_adc_en_conv(ADC_REGS_s *regs){
    uint32_t val;
    val = regs->CONV_CFG.en_conv;
    return val;
}

/*
 *  ======== get_adc_timer_cfg ========
 */
adc_timer_cfg_s get_adc_timer_cfg(ADC_REGS_s *regs){
    adc_timer_cfg_s adc_timer_cfg;
    adc_timer_cfg.start_time = regs->TIMER_START.timer_cnt_start;           
    adc_timer_cfg.sample_time  = regs->TIMER_SAMPLE.timer_cnt_sample;         
    adc_timer_cfg.conv_time  = regs->TIMER_CONVERSION.timer_cnt_conversion;
    return adc_timer_cfg; 
}

/*
 *  ======== get_adc_hw_avg_cfg ========
 */
adc_hw_avg_cfg_s get_adc_hw_avg_cfg(ADC_REGS_s *regs){
    adc_hw_avg_cfg_s adc_hw_cfg;
    adc_hw_cfg.hw_sample_cnt = regs->HW_AVG_CFG.hw_sample_cnt;
    adc_hw_cfg.hw_avg_sample_div = regs->HW_AVG_CFG.hw_avg_sample_div;
    return adc_hw_cfg;
}


