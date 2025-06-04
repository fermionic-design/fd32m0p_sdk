#ifndef adc_h_include
#define adc_h_include

#include "ADC_REGS.h"
#include "ADC_RW_API.h"

#include "IOMUX_REGS.h"
#include "IOMUX_RW_API.h"

#include "GPIO_REGS.h"
#include "GPIO_RW_API.h"

#include "VREF_REGS.h"
#include "VREF_RW_API.h"

#include "MCU_CTRL_REGS.h"
#include "MCU_CTRL_RW_API.h"

#define DATA_CHNL_0 0 
#define DATA_CHNL_1 1
#define DATA_CHNL_2 2
#define DATA_CHNL_3 3
#define DATA_CHNL_4 4
#define DATA_CHNL_5 5
#define DATA_CHNL_6 6
#define DATA_CHNL_7 7
#define DATA_CHNL_8 8
#define DATA_CHNL_9 9
#define DATA_CHNL_10 10 
#define DATA_CHNL_11 11
#define DATA_CHNL_12 12
#define DATA_CHNL_13 13
#define DATA_CHNL_14 14
#define DATA_CHNL_15 15

/*!
 *  @brief  ADC Clock Configuration Struct
 */
typedef struct {
    uint32_t                clk_en;
    ADC_CLK_CTRL_CLK_DIV_E  clk_div;
    ADC_CLK_SEL_E           clk_sel;
} adc_clk_cfg_s;

/*!
 *  @brief  ADC Channel Configuration Struct
 */
typedef struct {
    uint32_t                    data_channel;
    ADC_CHNL_CFG_CHANNEL_SEL_E  channel_sel;
    ADC_CHNL_CFG_VREF_SEL_E     vref_sel;
    uint32_t                    hw_avg_en;
    uint32_t                    bcs_en;
} adc_chnl_cfg_s;

/*!
 *  @brief  ADC Timer Configuration Struct
 */
typedef struct {
    uint32_t start_time;
    uint32_t sample_time;
    uint32_t conv_time;
} adc_timer_cfg_s;

/*!
 *  @brief  ADC Software Trigger Struct
 */
typedef struct {
    uint32_t sw_trigger;
    uint32_t sw_trigger_en;
} adc_sw_trig_cfg_s;

/*!
 *  @brief  ADC Single Channel Conv Configuration Struct
 */
typedef struct {
    uint32_t                        repeat;
    uint32_t                        start_addr;
    ADC_CONV_CFG_TRIGGER_SOURCE_E   trig_src;
    ADC_CONV_CFG_ADC_RES_E          adc_res;
    uint32_t                        dma_en;
    uint32_t                        dma_transfer_cnt;
    uint32_t                        fifo_en;
} adc_single_ch_conv_cfg_s;

/*!
 *  @brief  ADC Multi Channel Conv Configuration Struct
 */
typedef struct {
    uint32_t                      repeat;
    uint32_t                      start_addr;
    uint32_t                      end_addr;
    ADC_CONV_CFG_TRIGGER_SOURCE_E trig_src;
    ADC_CONV_CFG_ADC_RES_E        adc_res;
    uint32_t                      dma_en;
    uint32_t                      dma_transfer_cnt;
    uint32_t                      fifo_en;
} adc_multi_ch_conv_cfg_s;

/*!
 *  @brief  ADC Sampling Timer Struct
 */
typedef struct {
    uint32_t input_clk_rate;
    uint32_t adc_samp_rate;
} adc_samp_timer_cfg_s;

/*!
 *  @brief  ADC Temperature Configuration Struct
 */
typedef struct {
    adc_single_ch_conv_cfg_s temp_conv;
    adc_chnl_cfg_s temp_chnl_cfg;
} adc_temp_cfg_s;

/*!
 *  @brief  ADC DMA Configuration Struct
 */
typedef struct {
    uint32_t dma_en;
    uint32_t dma_transfer_cnt;
} adc_dma_cfg_s;

/*!
 *  @brief  ADC Hardware Averaging Configuration Struct
 */
typedef struct {
    ADC_HW_AVG_CFG_HW_SAMPLE_CNT_E      hw_sample_cnt;
    ADC_HW_AVG_CFG_HW_AVG_SAMPLE_DIV_E  hw_avg_sample_div;
} adc_hw_avg_cfg_s;

/**
 * @brief   This function configures the ADC clock.
 *
 * @param   adc_regs : pointer to the ADC register space
 * @param   clk_cfg  : clock configuration struct
 *
 * @retval  void
 */
void adc_clk_cfg(ADC_REGS_s *regs, adc_clk_cfg_s clk_cfg);

/**
 * @brief   This function configures the ADC channel.
 *
 * @param   adc_regs : pointer to the ADC register space
 * @param   chnl_cfg : channel configuration struct
 * 
 * @retval  void
 */
void adc_chnl_cfg(ADC_REGS_s *regs, adc_chnl_cfg_s chnl_cfg);

/**
 * @brief   This function configures the ADC channel.
 *
 * @param   adc_regs : pointer to the ADC register space
 * @param   data_channel : data channel register that contains ADC result
 * 
 * @retval  ADC result
 */
uint32_t adc_result(ADC_REGS_s *regs, uint32_t data_channel);

/**
 * @brief   This function configures the ADC DMA.
 *
 * @param   adc_regs : pointer to the ADC register space
 * @param   dma_cfg : DMA configuration struct
 * 
 * @retval  void
 */
void adc_dma_cfg(ADC_REGS_s *regs, adc_dma_cfg_s dma_cfg);

/**
 * @brief   This function configures the ADC Result registers for FIFO operation.
 *
 * @param   adc_regs : pointer to the ADC register space
 * @param   fifo_en : enables FIFO mode.
 * 
 * @retval  void
 */
void adc_result_cfg(ADC_REGS_s *regs, uint32_t fifo_en);

/**
 * @brief   This function generates software trig.
 *
 * @param   adc_regs : pointer to the ADC register space
 * @param   sw_trig : enables FIFO mode.
 * 
 * @retval  void
 */
void adc_sw_trig(ADC_REGS_s *regs, uint32_t sw_trig);

/**
 * @brief   This function configures ADC for single channel operation.
 *
 * @param   adc_regs : pointer to the ADC register space
 * @param   adc_single_ch : ADC single channel configuration struct
 * 
 * @retval  void
 */
void adc_single_ch_conv_cfg(ADC_REGS_s *regs, adc_single_ch_conv_cfg_s adc_single_ch);

/**
 * @brief   This function configures ADC for multi channel operation.
 *
 * @param   adc_regs : pointer to the ADC register space
 * @param   adc_multi_ch : ADC single channel configuration struct
 * 
 * @retval  void
 */
void adc_multi_ch_conv_cfg(ADC_REGS_s *regs, adc_multi_ch_conv_cfg_s adc_multi_ch);

/**
 * @brief   This function enables ADC conversion.
 *
 * @param   adc_regs : pointer to the ADC register space
 * @param   en_conv : ADC single channel configuration struct
 * 
 * @retval  void
 */
void adc_en_conv(ADC_REGS_s *regs, uint32_t en_conv);

/**
 * @brief   This function configures ADC for temp sensor application.
 *
 * @param   adc_regs : pointer to the ADC register space
 * @param   mcu_regs : pointer to the MCU register space
 * @param   vref_regs : pointer to the VREF register space
 * @param   adc_single_ch : ADC single channel configuration struct
 * @param   adc_chnl_cfg : ADC channel configuration struct
 * 
 * @retval  void
 */
void adc_temp_cfg(ADC_REGS_s *adc_regs, MCU_CTRL_REGS_s *mcu_regs, VREF_REGS_s *vref_regs, adc_single_ch_conv_cfg_s adc_single_ch, adc_chnl_cfg_s adc_chnl_cfg);

/**
 * @brief   This function configures ADC for battery monitor application.
 *
 * @param   adc_regs : pointer to the ADC register space
 * @param   mcu_regs : pointer to the MCU register space
 * @param   vref_regs : pointer to the VREF register space
 * @param   adc_single_ch : ADC single channel configuration struct
 * @param   adc_chnl_cfg : ADC channel configuration struct
 * 
 * @retval  void
 */
void adc_batt_mon_cfg(ADC_REGS_s *adc_regs, MCU_CTRL_REGS_s *mcu_regs, VREF_REGS_s *vref_regs,adc_single_ch_conv_cfg_s adc_single_ch, adc_chnl_cfg_s chnl_cfg);

/**
 * @brief   This function configures ADC sampling timer.
 *
 * @param   adc_regs : pointer to the ADC register space
 * @param   in_clk_freq : clock frequency to ADC'
 * @param   exp_samp_rate : desired sampling rate of ADC
 * 
 * @retval  void
 */
void adc_samp_timer_cfg(ADC_REGS_s *regs, uint32_t in_clk_freq, uint32_t exp_samp_rate);

/**
 * @brief   This function configures ADC for hardware averaging mode.
 *
 * @param   adc_regs : pointer to the ADC register space
 * @param   adc_hw_cfg : ADC hardware averaging configuration struct
 * 
 * @retval  void
 */
void adc_hw_avg_cfg(ADC_REGS_s *regs, adc_hw_avg_cfg_s adc_hw_cfg);

/**
 * @brief   This function returns ADC clock configuration.
 *
 * @param   adc_regs : pointer to the ADC register space
 * 
 * @retval  ADC clock configuration
 */
adc_clk_cfg_s get_adc_clk_cfg(ADC_REGS_s *regs);

/**
 * @brief   This function returns ADC channel configuration.
 *
 * @param   adc_regs : pointer to the ADC register space
 * @param   data_channel : data channel for which channel configuration is required.
 * 
 * @retval  ADC channel configuration
 */
adc_chnl_cfg_s get_adc_chnl_cfg(ADC_REGS_s *regs, uint32_t data_channel);

/**
 * @brief   This function returns ADC DMA configuration.
 *
 * @param   adc_regs : pointer to the ADC register space
 *  
 * @retval  ADC DMA configuration
 */
adc_dma_cfg_s get_adc_dma_cfg(ADC_REGS_s *regs);

/**
 * @brief   This function returns ADC result register configuration.
 *
 * @param   adc_regs : pointer to the ADC register space
 *  
 * @retval  ADC result register configuration
 */
uint32_t get_adc_result_cfg(ADC_REGS_s *regs);

/**
 * @brief   This function returns ADC software trigger configuration.
 *
 * @param   adc_regs : pointer to the ADC register space
 *  
 * @retval  ADC software trigger configuration
 */
adc_sw_trig_cfg_s get_adc_sw_trig(ADC_REGS_s *regs);

/**
 * @brief   This function returns ADC single channel configuration.
 *
 * @param   adc_regs : pointer to the ADC register space
 *  
 * @retval  ADC single channel configuration
 */
adc_single_ch_conv_cfg_s get_adc_single_ch_conv_cfg(ADC_REGS_s *regs);

/**
 * @brief   This function returns ADC multi channel configuration.
 *
 * @param   adc_regs : pointer to the ADC register space
 *  
 * @retval  ADC multi channel configuration
 */
adc_multi_ch_conv_cfg_s get_adc_multi_ch_conv_cfg(ADC_REGS_s *regs);

/**
 * @brief   This function returns ADC enable conversion status.
 *
 * @param   adc_regs : pointer to the ADC register space
 *  
 * @retval  ADC enable conversion status
 */
uint32_t get_adc_en_conv(ADC_REGS_s *regs);

/**
 * @brief   This function returns ADC timer configuration.
 *
 * @param   adc_regs : pointer to the ADC register space
 *  
 * @retval  ADC timer configuration
 */
adc_timer_cfg_s get_adc_timer_cfg(ADC_REGS_s *regs);

/**
 * @brief   This function returns ADC hardware averaging configuration.
 *
 * @param   adc_regs : pointer to the ADC register space
 *  
 * @retval  ADC hardware averaging configuration
 */
adc_hw_avg_cfg_s get_adc_hw_avg_cfg(ADC_REGS_s *regs);

#endif
