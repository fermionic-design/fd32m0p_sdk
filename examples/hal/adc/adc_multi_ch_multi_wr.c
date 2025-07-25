//////////////////////////////////////////////////////////////////////////////
////               ADC MULTI CH MULTI WR                                  ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to test ADC in multi channel multi    ////
////        write configuration with DMA                                  ////
////                                                                      ////
////    Board Setup:                                                      ////
////        ADC CH2 - PA25                                                ////
////        ADC CH3 - PA24                                                ////
////        ADC CH4 - PA22                                                ////
////        For other ADC Channels refer to ADC_REGS.h enums.             //// 
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////

#include <stdint.h> 

#include "uart_stdout_mcu.h"
#include "FD32M0P.h"
#include "vref.h"
#include "gpio.h" 
#include "adc.h"
#include "flash.h"

int main(void) {
    uint32_t start_addr = ADC_RESULT_DATA_CHNL_2;
    uint32_t end_addr = ADC_RESULT_DATA_CHNL_4;
    
    uint32_t hw_avg_en = 0;
    volatile uint32_t intr_sts;
    uint32_t sw_trig;
    uint32_t read_en_conv;
    uint32_t read_fifo_en, fifo_en;
    uint32_t samples, num_channel;
    uint32_t data_channel;

    flash_config(FLASH_APB_REGS, FLASH_SETTING_CFG_32MHZ_HIGH_SPEED_3V);

    OTP_REGS->OTP[1].packed_w = 0x000000FF;
    adc_timer_cfg_s             timer_cfg;
    adc_clk_cfg_s               clk_cfg;
    adc_multi_ch_conv_cfg_s     multi_ch_cfg;
    adc_chnl_cfg_s              chnl_cfg;
    IOMUX_PA_REG_s              iomux_cfg_struct;
    adc_dma_cfg_s               dma_cfg;
    adc_hw_avg_cfg_s            hw_avg_cfg;

    num_channel = end_addr - start_addr + 1;
    samples     = 90;
    
    UartStdOutInit();
    UartPuts("ADC Multi Ch Rpt Test\n");
    
    if(hw_avg_en)
    {
        for(uint32_t hw = start_addr; hw < end_addr + 1; hw = hw+1)
        {
            chnl_cfg.data_channel   = hw;
            chnl_cfg.channel_sel    = ADC_CHNL_CFG_CHANNEL_SEL_CH3_PA24;
            chnl_cfg.vref_sel       = ADC_CHNL_CFG_VREF_SEL_EXT;
            chnl_cfg.hw_avg_en      = 1;
            chnl_cfg.bcs_en         = 0;
            adc_chnl_cfg(ADC0_REGS, &chnl_cfg);
        }
        hw_avg_cfg.hw_sample_cnt        = ADC_HW_AVG_CFG_HW_SAMPLE_CNT_ACCU_64;
        hw_avg_cfg.hw_avg_sample_div    = ADC_HW_AVG_CFG_HW_AVG_SAMPLE_DIV_ACCU_BY_8;
        adc_hw_avg_cfg(ADC0_REGS, &hw_avg_cfg);  
    }
    else 
    {
        for(uint32_t hw = start_addr; hw < end_addr + 1; hw = hw+1)
        {
            chnl_cfg.data_channel   = hw;
            chnl_cfg.channel_sel    = ADC_CHNL_CFG_CHANNEL_SEL_CH0_PA27;
            chnl_cfg.vref_sel       = ADC_CHNL_CFG_VREF_SEL_EXT;
            chnl_cfg.hw_avg_en      = 0;
            chnl_cfg.bcs_en         = 0;
            adc_chnl_cfg(ADC0_REGS, &chnl_cfg);
        }
    }
    data_channel = chnl_cfg.data_channel;
    chnl_cfg = get_adc_chnl_cfg(ADC0_REGS, data_channel); 
    print_int_var("data_channel ", chnl_cfg.data_channel,0);
    print_int_var("channel_sel ", chnl_cfg.channel_sel,0);
    print_int_var("vref_sel ", chnl_cfg.vref_sel,0);
    print_int_var("hw_avg_en ", chnl_cfg.hw_avg_en,0);
    print_int_var("bcs_en ", chnl_cfg.bcs_en,0);

    ADC_PWR_EN_WRITE(ADC0_REGS, 1, ADC_PWR_EN_PWR_EN_KEY);

    clk_cfg.clk_en  = 1;
    clk_cfg.clk_div = ADC_CLK_CTRL_CLK_DIV_BY_8;
    clk_cfg.clk_sel = ADC_CLK_SEL_AHB;
    print_int_var("before clk_en : ", clk_cfg.clk_en, 1);  
    print_int_var("before clk_div : ",clk_cfg.clk_div, 1); 
    print_int_var("before clk_sel : ", clk_cfg.clk_sel, 1);
    adc_clk_cfg(ADC0_REGS, &clk_cfg);
    clk_cfg         = get_adc_clk_cfg(ADC0_REGS);
    print_int_var("clk_en : ", clk_cfg.clk_en, 1);  
    print_int_var("clk_div : ",clk_cfg.clk_div, 1); 
    print_int_var("clk_sel : ", clk_cfg.clk_sel, 1);


    adc_samp_timer_cfg(ADC0_REGS,/*IN CLK FREQ*/ 32000000, /*Desired Sampling Rate*/ 200000);
    timer_cfg   = get_adc_timer_cfg(ADC0_REGS);
    print_int_var("TIMER_START : ", timer_cfg.start_time, 1);
    print_int_var("TIMER_SAMPLE : ", timer_cfg.sample_time, 1);
    print_int_var("TIMER_CONV : ", timer_cfg.conv_time, 1);

    ADC0_REGS->INTR_EN_0.packed_w = 0xFFFFFFFF; 
    ADC0_REGS->INTR_EN_1.packed_w = 0x7FFFFFFF;

    iomux_cfg_struct.output_en        = 0;
    iomux_cfg_struct.input_en         = 0;
    iomux_cfg(IOMUX_REGS, &iomux_cfg_struct, 25);
    iomux_cfg(IOMUX_REGS, &iomux_cfg_struct, 24);
    iomux_cfg(IOMUX_REGS, &iomux_cfg_struct, 22);

    multi_ch_cfg.repeat            =    1;
    multi_ch_cfg.start_addr        =    start_addr;
    multi_ch_cfg.end_addr          =    end_addr;
    multi_ch_cfg.trig_src          =    ADC_CONV_CFG_TRIGGER_SOURCE_SW;
    multi_ch_cfg.adc_res           =    ADC_CONV_CFG_ADC_RES_12_BIT;
    multi_ch_cfg.dma_en            =    0;
    multi_ch_cfg.dma_transfer_cnt  =    0;
    multi_ch_cfg.fifo_en           =    0;
    adc_multi_ch_conv_cfg(ADC0_REGS, &multi_ch_cfg);
    multi_ch_cfg = get_adc_multi_ch_conv_cfg(ADC0_REGS);
    print_int_var("repeat: ", multi_ch_cfg.repeat,0);
    print_int_var("start_addr ", multi_ch_cfg.start_addr,0);
    print_int_var("end_addr ", multi_ch_cfg.end_addr,0);
    print_int_var("trig_src ", multi_ch_cfg.trig_src,0);
    print_int_var("adc_res ", multi_ch_cfg.adc_res,0);
    print_int_var("dma_en ", multi_ch_cfg.dma_en,0);
    print_int_var("dma_transfer_cnt ", multi_ch_cfg.dma_transfer_cnt,0);
    
    adc_en_conv(ADC0_REGS, 1);
    read_en_conv = get_adc_en_conv(ADC0_REGS);
    print_int_var("adc_en_conv ", read_en_conv, 0);

    dma_cfg.dma_en = 1;
    dma_cfg.dma_transfer_cnt = 8;
    adc_dma_cfg(ADC0_REGS, &dma_cfg);
    dma_cfg = get_adc_dma_cfg(ADC0_REGS);
    print_int_var("dma_en : ", dma_cfg.dma_en, 0);     
    print_int_var("dma_transfer_cnt : ", dma_cfg.dma_transfer_cnt, 0);
    dma_cfg.dma_en = 0;
    dma_cfg.dma_transfer_cnt = 0;
    adc_dma_cfg(ADC0_REGS, &dma_cfg);
    dma_cfg = get_adc_dma_cfg(ADC0_REGS);
    print_int_var("dma_en : ", dma_cfg.dma_en, 0);     
    print_int_var("dma_transfer_cnt : ", dma_cfg.dma_transfer_cnt, 0);

    fifo_en = 1;
    adc_result_cfg(ADC0_REGS, fifo_en);
    read_fifo_en = get_adc_result_cfg(ADC0_REGS);
    print_int_var("read_fifo_en", read_fifo_en, 0);
    fifo_en = 0;
    adc_result_cfg(ADC0_REGS, fifo_en);
    read_fifo_en = get_adc_result_cfg(ADC0_REGS);
    print_int_var("read_fifo_en", read_fifo_en, 0);

    UartPuts("**** ADC Triggered ****** \n");
    sw_trig = 3;
    adc_sw_trig(ADC0_REGS, sw_trig); 

    for(uint32_t jj=0; jj<(samples/num_channel); jj=jj+1)
    {
        for(uint32_t ii=0; ii< (num_channel) ; ii=ii+1){      
            while ((ADC0_REGS->INTR_EVENT.packed_w & (1 << (ii + start_addr+8))) == 0);
            print_int_var("res : ", ADC0_REGS->RESULT[start_addr + ii].packed_w, 0);
            ADC0_REGS->INTR_EVENT.packed_w = (1 << (ii + start_addr+8));
            intr_sts = ADC0_REGS->INTR_EVENT.packed_w;
            if((intr_sts & ((1 << (ii + 8))))!= 0){
                print_int_var("intr_sts",intr_sts,1);
                print_int_var("*** intr not cleared ***", ii, 0);
            }
        }
    }

    adc_en_conv(ADC0_REGS, 0);
    UartEndSimulation();
    return 0;
}
