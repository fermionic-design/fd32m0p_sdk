//////////////////////////////////////////////////////////////////////////////
////               ADC SINGLE CH MULTI WR DMA REQ                         ////
////    DESCRIPTION:                                                      ////      
////        This is an example test to test ADC in single channel multi   ////
////        write configuration with DMA                                  ////
////                                                                      ////
////    Board Setup:                                                      ////
////        ADC CH0 - PA27                                                ////
////        PA21 is grounded.                                             ////
////        For other ADC Channels refer to ADC0_REGS.h enums.            //// 
////                                                                      ////
//////////////////////////////////////////////////////////////////////////////

#include <stdint.h> 

#include "uart_stdout_mcu.h"
#include "FD32M0P.h"
#include "vref.h"
#include "gpio.h"
#include "adc.h" 
#include "dma.h"
#include "event_fabric.h"

typedef struct uart_sram_memory {
    uint32_t mem[1024];
} uart_sram_memory_t;

#define sram_mem_s    ((uart_sram_memory_t *)   0x200000F0)


int main(void) {

    uint16_t obs_result[256];
    UartStdOutInit();
    
    uint32_t    data_channel;
    uint32_t    start_addr;
    uint32_t    analog_adc_channel;
    uint32_t    dma_src_addr;
    uint32_t    sw_trig;
    uint32_t    read_fifo_en;

    adc_timer_cfg_s             timer_cfg;
    adc_clk_cfg_s               clk_cfg;
    adc_single_ch_conv_cfg_s    single_ch_cfg;
    adc_chnl_cfg_s              chnl_cfg;
    adc_hw_avg_cfg_s            hw_avg_cfg;
    IOMUX_PA_REG_s              iomux_cfg_struct;
    adc_dma_cfg_s               dma_cfg;

    start_addr          = ADC_RESULT_DATA_CHNL_0;
    analog_adc_channel  = ADC_CHNL_CFG_CHANNEL_SEL_CH0_PA27;
    dma_src_addr        = 0x40040094 + (start_addr*4);

    UartPuts("ADC DMA Test\n");
    OTP_REGS->OTP[1].packed_w = 0x000000FF;

    DMA_MCU_REGS->CLK_CTRL.packed_w = 0xBC000001;
    
    //Soft Reset 
    DMA_MCU_REGS->RST_CTRL.packed_w = 0xBC000001;
    DMA_MCU_REGS->RST_CTRL.packed_w = 0xBC000000;

    ADC_PWR_EN_WRITE(ADC0_REGS, 1, ADC_PWR_EN_PWR_EN_KEY);

    adc_samp_timer_cfg(ADC0_REGS, 16000000, 2000000);
    timer_cfg = get_adc_timer_cfg(ADC0_REGS);
    print_int_var("start_time : ", timer_cfg.start_time, 1);  
    print_int_var("sample_time : ",timer_cfg.sample_time, 1); 
    print_int_var("conv_time : ", timer_cfg.conv_time, 1);  

    clk_cfg.clk_en  = 1;
    clk_cfg.clk_div = ADC_CLK_CTRL_CLK_DIV_BY_2;
    clk_cfg.clk_sel = ADC_CLK_SEL_APB;

    adc_clk_cfg(ADC0_REGS, &clk_cfg);
    clk_cfg         = get_adc_clk_cfg(ADC0_REGS);
    print_int_var("clk_en : ", clk_cfg.clk_en, 1);  
    print_int_var("clk_div : ",clk_cfg.clk_div, 1); 
    print_int_var("clk_sel : ", clk_cfg.clk_sel, 1);  
    
    single_ch_cfg.repeat            = 1;
    single_ch_cfg.start_addr        = start_addr;
    single_ch_cfg.trig_src          = ADC_CONV_CFG_TRIGGER_SOURCE_SW;
    single_ch_cfg.adc_res           = ADC_CONV_CFG_ADC_RES_12_BIT;
    single_ch_cfg.dma_en            = 1;
    single_ch_cfg.dma_transfer_cnt  = 8;
    single_ch_cfg.fifo_en           = 1;

    adc_single_ch_conv_cfg(ADC0_REGS, &single_ch_cfg);

    single_ch_cfg = get_adc_single_ch_conv_cfg(ADC0_REGS);

    print_int_var("repeat: ", single_ch_cfg.repeat,0);
    print_int_var("start_addr ", single_ch_cfg.start_addr,0);
    print_int_var("trig_src ", single_ch_cfg.trig_src,0);
    print_int_var("adc_res ", single_ch_cfg.adc_res,0);
    print_int_var("dma_en ", single_ch_cfg.dma_en,0);
    print_int_var("dma_transfer_cnt ", single_ch_cfg.dma_transfer_cnt,0);

    chnl_cfg.data_channel   = start_addr;
    chnl_cfg.channel_sel    = analog_adc_channel;
    chnl_cfg.vref_sel       = ADC_CHNL_CFG_VREF_SEL_EXT;
    chnl_cfg.hw_avg_en      = 1;
    chnl_cfg.bcs_en         = 0;

    adc_chnl_cfg(ADC0_REGS, &chnl_cfg);

    data_channel    = chnl_cfg.data_channel;
    chnl_cfg = get_adc_chnl_cfg(ADC0_REGS, data_channel);

    print_int_var("data_channel: ", chnl_cfg.data_channel,0);
    print_int_var("channel_sel ", chnl_cfg.channel_sel,0);
    print_int_var("vref_sel ", chnl_cfg.vref_sel,0);
    print_int_var("hw_avg_en ", chnl_cfg.hw_avg_en,0);
    print_int_var("bcs_en ", chnl_cfg.bcs_en,0);

    hw_avg_cfg.hw_sample_cnt        = ADC_HW_AVG_CFG_HW_SAMPLE_CNT_ACCU_4;
    hw_avg_cfg.hw_avg_sample_div    = ADC_HW_AVG_CFG_HW_AVG_SAMPLE_DIV_ACCU_BY_2;

    adc_hw_avg_cfg(ADC0_REGS, &hw_avg_cfg);
    hw_avg_cfg = get_adc_hw_avg_cfg(ADC0_REGS);
    print_int_var("hw_sample_cnt : ", hw_avg_cfg.hw_sample_cnt, 0);     
    print_int_var("hw_avg_sample_div : ", hw_avg_cfg.hw_avg_sample_div, 0);

    dma_cfg = get_adc_dma_cfg(ADC0_REGS);
    print_int_var("dma_en : ", dma_cfg.dma_en, 0);     
    print_int_var("dma_transfer_cnt : ", dma_cfg.dma_transfer_cnt, 0);

    read_fifo_en = get_adc_result_cfg(ADC0_REGS);
    print_int_var("fifo_en ", read_fifo_en, 0);

    adc_en_conv(ADC0_REGS, 1);

    ADC_GENERIC_DMA_EVENT_EN_(ADC0_REGS, ADC_INTR_EVENT_TRIG_TO_DMA_FLAG_IDX);
    ADC_GENERIC_DMA_EVENT_EN_(ADC0_REGS, ADC_INTR_EVENT_DMA_DONE_IDX);

    iomux_cfg_struct.input_en = 0;
    iomux_cfg_struct.output_en = 0;
    iomux_cfg_struct.pull_up = 0;
    iomux_cfg(IOMUX_REGS, &iomux_cfg_struct, 27);

    EVENT_FABRIC_DMA_PUB_N_WRITE(EVENT_FABRIC_REGS, 0, 2);

    //Initializing DMA
    dma_init(DMA_PL230_REGS, 0x20000C00);

    //DMA Configuration
    dma_channel_cfg_t default_channel_cfg = CHANNEL_TRANSFER_CFG_DEFAULT;
    dma_channel_cfg_t *primary_ch = &default_channel_cfg;

    primary_ch->src_addr = dma_src_addr;            
    primary_ch->dst_addr = 0x200000F0;            
    primary_ch->total_transaction = 127 ;   
    primary_ch->src_size = 2;            
    primary_ch->src_incr = 3;            
    primary_ch->dst_size = 2;            
    primary_ch->dst_incr = 2;            
    primary_ch->r_power = 2;             
    primary_ch->next_useburst = 0;       
    primary_ch->src_prot_ctrl = 0;       
    primary_ch->dst_prot_ctrl = 0;         
    primary_ch->transfer_type = 1;
    dma_channel_cfg(DMA_MCU_REGS, DMA_PL230_REGS, primary_ch, DMA_CHANNEL_0);
    dma_channel_en_set(DMA_PL230_REGS, DMA_CHANNEL_0);

    UartPuts("** TRIGGERING ** \n");

    sw_trig = 3;
    adc_sw_trig(ADC0_REGS, sw_trig);

    while(ADC0_REGS->INTR_STS.intr_first == ADC_INTR_EVENT_DMA_DONE_IDX);   
    int ii = 0;
    for(int cnt=0;cnt<128;cnt++){ 
        obs_result[ii] = (sram_mem_s->mem[cnt]) & (0x0000FFFF);
        print_int_var("obs_result ", obs_result[ii], 0);
        obs_result[ii+1] = ((sram_mem_s->mem[cnt]) >>16) & (0x0000FFFF);
        print_int_var("obs_result ", obs_result[ii+1],0);
        ii= ii+2;
    }
    adc_en_conv(ADC0_REGS, 0);
    UartEndSimulation();
    return 0;
}



