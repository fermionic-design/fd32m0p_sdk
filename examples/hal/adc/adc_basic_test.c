//////////////////////////////////////////////////////////////////////////////
////                        ADC BASIC TEST                                ////
////    DESCRIPTION:                                                      ////      
////        This is an example basic test to test ADC. This is Single     ////
////        Channel Single Conversion test.                               ////
////    Board Setup:                                                      ////
////        ADC CH0 - PA27                                                ////                                           ////
////        PA21 should be grounded.                                      ////
////        For other ADC Channels refer to ADC_REGS.h enums.             //// 
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////

#include <stdint.h> 

#include "uart_stdout_mcu.h"
#include "FD32M0P.h"
#include "gpio.h" 
#include "adc.h"
#include "flash.h"

int main(void) {
    uint32_t start_addr = DATA_CHNL_0;
    volatile uint32_t intr_sts;
    uint32_t sw_trig;
    uint32_t read_en_conv;
    uint32_t data_channel;

    OTP_REGS->OTP[1].packed_w = 0x000000FF;
    adc_timer_cfg_s             timer_cfg;
    adc_clk_cfg_s               clk_cfg;
    adc_single_ch_conv_cfg_s    single_ch_cfg;
    adc_chnl_cfg_s              chnl_cfg;
    IOMUX_PA_REG_s              iomux_cfg_struct;
    
    flash_config(FLASH_APB_REGS, FLASH_SETTING_CFG_32MHZ_HIGH_SPEED_3V);

    UartStdOutInit();
    UartPuts("ADC Basic Test\n");

    chnl_cfg.data_channel   = start_addr;
    chnl_cfg.channel_sel    = ADC_CHNL_CFG_CHANNEL_SEL_CH0_PA27;
    chnl_cfg.vref_sel       = 0;
    chnl_cfg.hw_avg_en      = 0;
    chnl_cfg.bcs_en         = 0;
    adc_chnl_cfg(ADC0_REGS, chnl_cfg);
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

    adc_clk_cfg(ADC0_REGS, clk_cfg);
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
    iomux_cfg(IOMUX_REGS, iomux_cfg_struct, 27);

    single_ch_cfg.repeat            = 0;
    single_ch_cfg.start_addr        = start_addr;
    single_ch_cfg.trig_src          = ADC_CONV_CFG_TRIGGER_SOURCE_SW;
    single_ch_cfg.adc_res           = ADC_CONV_CFG_ADC_RES_12_BIT;
    single_ch_cfg.dma_en            = 0;
    single_ch_cfg.dma_transfer_cnt  = 0;
    single_ch_cfg.fifo_en           = 0;

    adc_single_ch_conv_cfg(ADC0_REGS, single_ch_cfg);

    single_ch_cfg = get_adc_single_ch_conv_cfg(ADC0_REGS);

    print_int_var("repeat: ", single_ch_cfg.repeat,0);
    print_int_var("start_addr ", single_ch_cfg.start_addr,0);
    print_int_var("trig_src ", single_ch_cfg.trig_src,0);
    print_int_var("adc_res ", single_ch_cfg.adc_res,0);
    print_int_var("dma_en ", single_ch_cfg.dma_en,0);
    print_int_var("dma_transfer_cnt ", single_ch_cfg.dma_transfer_cnt,0);

    adc_en_conv(ADC0_REGS, 1);
    read_en_conv = get_adc_en_conv(ADC0_REGS);
    print_int_var("adc_en_conv ", read_en_conv, 0);

    UartPuts("**** ADC Triggered ****** \n");
    sw_trig = 3;
    adc_sw_trig(ADC0_REGS, sw_trig); 
  
    while ((ADC0_REGS->INTR_EVENT.packed_w & (1 << (start_addr+8))) == 0);
    print_int_var("res : ", ADC0_REGS->RESULT[start_addr].packed_w, 0);
    ADC0_REGS->INTR_EVENT.packed_w = (1 << (start_addr+8));
    intr_sts = ADC0_REGS->INTR_EVENT.packed_w;
    if((intr_sts & ((1 << (start_addr + 8))))!= 0){
        print_int_var("intr_sts",intr_sts,1);
        UartPuts("intr_sts not cleared.\n");
    }
    adc_en_conv(ADC0_REGS, 0);
    UartEndSimulation();
    return 0;
}
