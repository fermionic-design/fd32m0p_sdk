//////////////////////////////////////////////////////////////////////////////
////               ADC BATTERY MONITORING TEST                            ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to test ADC battery monitoring        ////
////        functionality.                                                ////
////                                                                      ////
////    Board Setup:                                                      ////
////        ADC CH15                                                      ////
////        Internal Vref , 1p4V                                          ////
////                                                                      ////                  
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////

#include <stdint.h> 

#include "FD32M0P.h"
#include "uart_stdout_mcu.h"

#include "vref.h"
#include "gpio.h" 
#include "adc.h"

int main(void){
   
    uint32_t    start_addr;
    uint32_t    adc_out;
    uint32_t    sw_trig;
    
    adc_clk_cfg_s               clk_cfg;
    adc_single_ch_conv_cfg_s    single_ch_cfg;
    adc_chnl_cfg_s              chnl_cfg; 
    IOMUX_PA_REG_s              iomux_cfg_struct;    

    start_addr          = ADC_RESULT_DATA_CHNL_0;

    UartStdOutInit();
    UartPuts("ADC Battery Monitor Test\n");

    clk_cfg.clk_en                  = 1;
    clk_cfg.clk_div                 = ADC_CLK_CTRL_CLK_DIV_BY_7;
    clk_cfg.clk_sel                 = ADC_CLK_SEL_APB;
    adc_clk_cfg(ADC0_REGS, &clk_cfg);

    single_ch_cfg.repeat            = 0;
    single_ch_cfg.start_addr        = start_addr;
    single_ch_cfg.trig_src          = ADC_CONV_CFG_TRIGGER_SOURCE_SW;
    single_ch_cfg.adc_res           = ADC_CONV_CFG_ADC_RES_12_BIT;
    single_ch_cfg.dma_en            = 0;
    single_ch_cfg.dma_transfer_cnt  = 0;
    single_ch_cfg.fifo_en           = 0;

    chnl_cfg.data_channel   = start_addr;
    chnl_cfg.channel_sel    = ADC_CHNL_CFG_CHANNEL_SEL_BATT_MON;
    chnl_cfg.vref_sel       = ADC_CHNL_CFG_VREF_SEL_INT;
    chnl_cfg.hw_avg_en      = 0;
    chnl_cfg.bcs_en         = 0;

    adc_batt_mon_cfg(ADC0_REGS, MCU_CTRL_REGS, VREF_REGS, &single_ch_cfg, &chnl_cfg);

    ADC0_REGS->INTR_EN_0.packed_w = 0xFFFFFFFF; 
    ADC0_REGS->INTR_EN_1.packed_w = 0x7FFFFFFF;
    ADC_PWR_EN_WRITE(ADC0_REGS, 1, ADC_PWR_EN_PWR_EN_KEY);

    iomux_cfg_struct.output_en = 0;
    iomux_cfg_struct.input_en  = 0;
    iomux_cfg(IOMUX_REGS, &iomux_cfg_struct,  23);
     
    adc_samp_timer_cfg(ADC0_REGS,/*IN CLK FREQ*/ 32000000, /*Desired Sampling Rate*/ 85106);

    adc_en_conv(ADC0_REGS, 1);
    
    sw_trig = 3;
    adc_sw_trig(ADC0_REGS, sw_trig);

    while ((ADC0_REGS->INTR_EVENT.packed_w & (1 << (start_addr + 8))) == 0);
    adc_out = adc_result(ADC0_REGS, start_addr);
    print_int_var("Battery Mon ADC out : ", adc_out, 0);

    UartEndSimulation();
    return 0;   
}
