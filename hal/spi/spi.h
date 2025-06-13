/** @addtogroup FD32M0P_HAL FD32M0P Hardware Abstraction Layer
 *  @{
 */

/** @defgroup SPI_HAL
 *  @{
 */

#ifndef HAL_SPI_H
#define HAL_SPI_H

#include "SPI_REGS.h"
#include "SPI_RW_API.h"
#include <stdbool.h>

/*!
 *  @brief  SPI Configuation Struct 
 *
 *  @note   This struct contain parameters for initializing SPI while using either
 *          in controller or peripheral mode.
 */
typedef struct spi_cfg_t {
    SPI_MODE_CTRL_FRAME_FORMAT_E        frame_format;
    uint8_t                             data_size_sel;
    bool                                msb_first;
    SPI_MOT_MOD_CNTRL_CLOCK_POLARITY_E  clk_polarity;
    SPI_MOT_MOD_CNTRL_CLOCK_PHASE_E     clk_phase;
    bool                                parity_en;
    bool                                even_partiy;
    SPI_MODE_CTRL_PERIPHERAL_MODE_E     mode;
} spi_cfg_t;


/*!
 *  @brief  Default Values for SPI in Controller mode.
 */
#define SPI_CFG_DEFAULT {                                       \
    .frame_format   = SPI_MODE_CTRL_FRAME_FORMAT_MOTOROLA      ,\
    .data_size_sel  = 8                                        ,\
    .msb_first      = 0                                        ,\
    .clk_polarity   = SPI_MOT_MOD_CNTRL_CLOCK_POLARITY_LOW     ,\
    .clk_phase      = SPI_MOT_MOD_CNTRL_CLOCK_PHASE_LEADING    ,\
    .parity_en      = 0                                        ,\
    .even_partiy    = 0                                        ,\
    .mode           = SPI_MODE_CTRL_PERIPHERAL_MODE_CONTROLLER  \
}

/**
 * @brief   This function updates the clock setting use by the SPI
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 * @param   clk_sel : enum for clock to be used for SPI
 * @param   div_ratio : 8 bit value for the clock divider. 
 *
 * @retval  
 */
void spi_set_clk_cfg(SPI_REGS_s *SPI_REGS_PTR, SPI_CLKSEL_CLK_SEL_E clk_sel, uint8_t div_ratio);

/**
 * @brief   This function updates SPI configuration for Moto Mode
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 * @param   clk_polarity : enum for clock polarity
 * @param   clk_phase : enum for clock phase
 * @param   parity_en : set this to enable parity
 * @param   even_partiy : set this to enable enable parity
 *
 * @retval  
 */
void spi_set_moto_mode_cfg(SPI_REGS_s *SPI_REGS_PTR, SPI_MOT_MOD_CNTRL_CLOCK_POLARITY_E clk_polarity, SPI_MOT_MOD_CNTRL_CLOCK_PHASE_E clk_phase, bool parity_en, bool even_partiy);

/**
 * @brief   This function configure the SPI mode/type of Operation
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 * @param   mode : enum for controller or peripheral mode
 * @param   frame_format : enum for the type of SPI
 * @param   data_size : Input for the size of the data
 * @param   msb_first : Set this enable msb first
 *
 * @retval  
 */
void spi_set_mode_cfg(SPI_REGS_s *SPI_REGS_PTR, SPI_MODE_CTRL_PERIPHERAL_MODE_E mode,SPI_MODE_CTRL_FRAME_FORMAT_E frame_format, uint8_t data_size, bool msb_first);

/**
 * @brief   This function starts spi transaction
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 *
 * @retval  
 */
void spi_start_transaction(SPI_REGS_s *SPI_REGS_PTR);

/**
 * @brief   This function disables spi. 
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 *
 * @retval  
 */
void spi_disable(SPI_REGS_s *SPI_REGS_PTR);

/**
 * @brief   This function sets SPI loopback 
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 *
 * @retval  
 */
void spi_set_loopback(SPI_REGS_s *SPI_REGS_PTR);

/**
 * @brief   This function clear SPI loopback 
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 *
 * @retval  
 */
void spi_clr_loopback(SPI_REGS_s *SPI_REGS_PTR);

/**
 * @brief   This function set SPI TX ctrl setting. 
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 * @param   repeat_tx_data : number of spi frames to be repeated after fifo is empty
 *
 * @retval  
 */
void spi_set_tx_ctrl(SPI_REGS_s *SPI_REGS_PTR, uint8_t repeat_tx_data);

/**
 * @brief   This function set SPI RX ctrl setting 
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 * @param   receive_timeout : timeout for RX not receing any data to generate interrupt. Timeout is specified in number of clk_spi cycles
 * @param   ignore_rx_cnt : number of spi frame rx should ignore
 * @param   dly_sample_on_rx : the delay on the rx sample for improving stablity at higher clock speeds
 *
 * @retval  
 */
void spi_set_rx_ctrl(SPI_REGS_s *SPI_REGS_PTR, uint8_t receive_timeout, uint8_t ignore_rx_cnt, uint8_t dly_sample_on_rx);

/**
 * @brief   This function initializes the SPI, with Controller/Peripheral Setting 
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 * @param   spi_cfg : configuration for SPI.
 *
 * @retval  
 */
void spi_init(SPI_REGS_s *SPI_REGS_PTR, spi_cfg_t *spi_cfg);

/**
 * @brief   Blocking function to recive a single byte 
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 *
 * @retval  byte data from the rx fifo
 */
uint8_t spi_receive_byte_blocking(SPI_REGS_s *SPI_REGS_PTR);

/**
 * @brief   Blocking function to recive a half word 
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 *
 * @retval  half word data from the rx fifo
 */
uint16_t spi_receive_halfword_blocking(SPI_REGS_s *SPI_REGS_PTR);

/**
 * @brief   Blocking function to recive a word 
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 *
 * @retval  word data from the rx fifo
 */
uint32_t spi_receive_word_blocking(SPI_REGS_s *SPI_REGS_PTR);

/**
 * @brief   Non - Blocking function to recieve a byte 
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 * @param   byte : pointer to the byte data
 *
 * @retval  if data is present in the fifo, true is returned
 */
bool spi_receive_byte_non_blocking(SPI_REGS_s *SPI_REGS_PTR, uint8_t *byte);

/**
 * @brief   Non - Blocking function to recieve a half word 
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 * @param   halfword : pointer to the halfword data
 *
 * @retval  if data is present in the fifo, true is returned
 */
bool spi_receive_halfword_non_blocking(SPI_REGS_s *SPI_REGS_PTR, uint16_t *halfword);

/**
 * @brief   Non - Blocking function to recieve a word 
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 * @param   word : pointer to the word data
 *
 * @retval  if data is present in the fifo, true is returned
 */
bool spi_receive_word_non_blocking(SPI_REGS_s *SPI_REGS_PTR, uint32_t *word);

/**
 * @brief   Blocking function to transmit a byte 
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 * @param   byte : byte data to be transmitted
 *
 * @retval  
 */
void spi_transmit_byte_blocking(SPI_REGS_s *SPI_REGS_PTR, uint8_t byte);

/**
 * @brief   Blocking function to transmit a halfword 
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 * @param   halfword : halfword data to be transmitted
 *
 * @retval  
 */
void spi_transmit_halfword_blocking(SPI_REGS_s *SPI_REGS_PTR, uint16_t halfword);

/**
 * @brief   Blocking function to transmit a word 
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 * @param   word : word data to be transmitted
 *
 * @retval  
 */
void spi_transmit_word_blocking(SPI_REGS_s *SPI_REGS_PTR, uint32_t word);

/**
 * @brief   Non - Blocking function to transmit a byte 
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 * @param   byte : byte data to be transmitted
 *
 * @retval  True/False to indicate is the data is transferred succesfully
 */
bool spi_transmit_byte_non_blocking(SPI_REGS_s *SPI_REGS_PTR, uint8_t byte);

/**
 * @brief   Non - Blocking function to transmit a halfword 
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 * @param   halfword : halfword data to be transmitted
 *
 * @retval  True/False to indicate is the data is transferred succesfully
 */
bool spi_transmit_halfword_non_blocking(SPI_REGS_s *SPI_REGS_PTR, uint16_t halfword);

/**
 * @brief   Non - Blocking function to transmit word 
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 * @param   word : word data to be transmitted
 *
 * @retval  True/False to indicate is the data is transferred succesfully
 */
bool spi_transmit_word_non_blocking(SPI_REGS_s *SPI_REGS_PTR, uint32_t word);

/**
 * @brief   Non - Blocking function to drain the rx fifo based on max count 
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 * @param   buffer : pointer to the byte buffer
 * @param   max_count : represent the max number of reads to be done
 *
 * @retval  the number of bytes read
 */
uint8_t spi_rx_fifo_drain_byte(SPI_REGS_s *SPI_REGS_PTR, uint8_t *buffer, uint8_t max_count);

/**
 * @brief   Non - Blocking function to drain the rx fifo based on max count 
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 * @param   buffer : pointer to the halfword buffer
 * @param   max_count : represent the max number of reads to be done
 *
 * @retval  the number of halfwords read
 */
uint8_t spi_rx_fifo_drain_halfword(SPI_REGS_s *SPI_REGS_PTR, uint16_t *buffer, uint8_t max_count);

/**
 * @brief   Non - Blocking function to drain the rx fifo based on max count 
 *
 * @param   SPI_REGS_PTR : pointer to the spi register space
 * @param   buffer : pointer to the word buffer
 * @param   max_count : represent the max number of reads to be done
 *
 * @retval  the number of words read
 */
uint8_t spi_rx_fifo_drain_word(SPI_REGS_s *SPI_REGS_PTR, uint32_t *buffer, uint8_t max_count);

/**
* @brief    Non - Blocking function to fill the tx fifo based on max count 
*
* @param    SPI_REGS_PTR : pointer to the spi register space
* @param    buffer : pointer to the byte buffer
* @param    max_count : represent the max number of write to be done
*
* @retval   the number of bytes transmitted
*/
uint8_t spi_tx_fifo_fill_byte_non_blocking(SPI_REGS_s *SPI_REGS_PTR, const uint8_t *buffer, uint8_t max_count);

/**
* @brief    Non - Blocking function to fill the tx fifo based on max count 
*
* @param    SPI_REGS_PTR : pointer to the spi register space
* @param    buffer : pointer to the halfword buffer
* @param    max_count : represent the max number of write to be done
*
* @retval   the number of halfword transmitted
*/
uint8_t spi_tx_fifo_fill_halfword_non_blocking(SPI_REGS_s *SPI_REGS_PTR, const uint16_t *buffer, uint8_t max_count);

/**
* @brief    Non - Blocking function to fill the tx fifo based on max count 
*
* @param    SPI_REGS_PTR : pointer to the spi register space
* @param    buffer : pointer to the word buffer
* @param    max_count : represent the max number of write to be done
*
* @retval   the number of word transmitted
*/
uint8_t spi_tx_fifo_fill_word_non_blocking(SPI_REGS_s *SPI_REGS_PTR, const uint32_t *buffer, uint8_t max_count);

/**
* @brief    Blocking function to fill the tx fifo based on max count 
*
* @param    SPI_REGS_PTR : pointer to the spi register space
* @param    buffer : pointer to the byte buffer
* @param    max_count : represent the max number of write to be done
*
* @retval   the number of bytes transmitted
*/
void spi_tx_fifo_fill_byte_blocking(SPI_REGS_s *SPI_REGS_PTR, const uint8_t *buffer, uint8_t max_count);

/**
* @brief    Blocking function to fill the tx fifo based on max count 
*
* @param    SPI_REGS_PTR : pointer to the spi register space
* @param    buffer : pointer to the halfword buffer
* @param    max_count : represent the max number of write to be done
*
* @retval   the number of halfword transmitted
*/
void spi_tx_fifo_fill_halfword_blocking(SPI_REGS_s *SPI_REGS_PTR, const uint16_t *buffer, uint8_t max_count);

/**
* @brief    Blocking function to fill the tx fifo based on max count 
*
* @param    SPI_REGS_PTR : pointer to the spi register space
* @param    buffer : pointer to the word buffer
* @param    max_count : represent the max number of write to be done
*
* @retval   the number of words transmitted
*/
void spi_tx_fifo_fill_word_blocking(SPI_REGS_s *SPI_REGS_PTR, const uint32_t *buffer, uint8_t max_count);

/**
* @brief    function to set enable software controlled cs and sel the cs
*
* @param    SPI_REGS_PTR : pointer to the spi register space
* @param    soft_cs_en : en to the soft cs
* @param    cs_sel : selects the cs
*
* @retval   
*/
void spi_enable_cs(SPI_REGS_s *SPI_REGS_PTR, bool soft_cs_en, uint8_t cs_sel);

/**
* @brief    function to set soft cs
*
* @param    SPI_REGS_PTR : pointer to the spi register space
*
* @retval   
*/
void spi_set_soft_cs(SPI_REGS_s *SPI_REGS_PTR);

/**
* @brief    function to set soft cs
*
* @param    SPI_REGS_PTR : pointer to the spi register space
*
* @retval   
*/
void spi_clr_soft_cs(SPI_REGS_s *SPI_REGS_PTR);

/**
* @brief    function to pool for spi idle
*
* @param    SPI_REGS_PTR : pointer to the spi register space
*
* @retval   True/False is spi is in idle or not
*/
bool spi_is_idle(SPI_REGS_s *SPI_REGS_PTR);

#endif

/** @} */
/** @} */
