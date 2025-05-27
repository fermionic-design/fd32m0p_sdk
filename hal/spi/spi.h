#ifndef HAL_SPI_H
#define HAL_SPI_H

#include "SPI_REGS.h"
#include "SPI_RW_API.h"
#include <stdbool.h>


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


void spi_set_clk_cfg(SPI_REGS_s *SPI_REGS_PTR, SPI_CLKSEL_CLK_SEL_E clk_sel, uint8_t div_ratio);
void spi_set_moto_mode_cfg(SPI_REGS_s *SPI_REGS_PTR, SPI_MOT_MOD_CNTRL_CLOCK_POLARITY_E clk_polarity, SPI_MOT_MOD_CNTRL_CLOCK_PHASE_E clk_phase, bool parity_en, bool even_partiy);
void spi_set_mode_cfg(SPI_REGS_s *SPI_REGS_PTR, SPI_MODE_CTRL_PERIPHERAL_MODE_E mode,SPI_MODE_CTRL_FRAME_FORMAT_E frame_format, uint8_t data_size, bool msb_first);
void spi_start_transaction(SPI_REGS_s *SPI_REGS_PTR);
void spi_disable(SPI_REGS_s *SPI_REGS_PTR);
void spi_set_loopback(SPI_REGS_s *SPI_REGS_PTR);
void spi_clr_loopback(SPI_REGS_s *SPI_REGS_PTR);
void spi_set_tx_ctrl(SPI_REGS_s *SPI_REGS_PTR, uint8_t repeat_tx_data);
void spi_set_rx_ctrl(SPI_REGS_s *SPI_REGS_PTR, uint8_t receive_timeout, uint8_t ignore_rx_cnt, uint8_t dly_sample_on_rx);
void spi_init(SPI_REGS_s *SPI_REGS_PTR, spi_cfg_t *spi_cfg);
uint8_t spi_receive_byte_blocking(SPI_REGS_s *SPI_REGS_PTR);
uint16_t spi_receive_halfword_blocking(SPI_REGS_s *SPI_REGS_PTR);
uint32_t spi_receive_word_blocking(SPI_REGS_s *SPI_REGS_PTR);
bool spi_receive_byte_non_blocking(SPI_REGS_s *SPI_REGS_PTR, uint8_t *byte);
bool spi_receive_halfword_non_blocking(SPI_REGS_s *SPI_REGS_PTR, uint16_t *halfword);
bool spi_receive_word_non_blocking(SPI_REGS_s *SPI_REGS_PTR, uint32_t *word);
void spi_transmit_byte_blocking(SPI_REGS_s *SPI_REGS_PTR, uint8_t byte);
void spi_transmit_halfword_blocking(SPI_REGS_s *SPI_REGS_PTR, uint16_t halfword);
void spi_transmit_word_blocking(SPI_REGS_s *SPI_REGS_PTR, uint32_t word);
bool spi_transmit_byte_non_blocking(SPI_REGS_s *SPI_REGS_PTR, uint8_t byte);
bool spi_transmit_halfword_non_blocking(SPI_REGS_s *SPI_REGS_PTR, uint16_t halfword);
bool spi_transmit_word_non_blocking(SPI_REGS_s *SPI_REGS_PTR, uint32_t word);
uint8_t spi_rx_fifo_drain_byte(SPI_REGS_s *SPI_REGS_PTR, uint8_t *buffer, uint8_t max_count);
uint8_t spi_rx_fifo_drain_halfword(SPI_REGS_s *SPI_REGS_PTR, uint16_t *buffer, uint8_t max_count);
uint8_t spi_rx_fifo_drain_word(SPI_REGS_s *SPI_REGS_PTR, uint32_t *buffer, uint8_t max_count);
uint8_t spi_tx_fifo_fill_byte_non_blocking(SPI_REGS_s *SPI_REGS_PTR, const uint8_t *buffer, uint8_t max_count);
uint8_t spi_tx_fifo_fill_halfword_non_blocking(SPI_REGS_s *SPI_REGS_PTR, const uint16_t *buffer, uint8_t max_count);
uint8_t spi_tx_fifo_fill_word_non_blocking(SPI_REGS_s *SPI_REGS_PTR, const uint32_t *buffer, uint8_t max_count);
void spi_tx_fifo_fill_byte_blocking(SPI_REGS_s *SPI_REGS_PTR, const uint8_t *buffer, uint8_t max_count);
void spi_tx_fifo_fill_halfword_blocking(SPI_REGS_s *SPI_REGS_PTR, const uint16_t *buffer, uint8_t max_count);
void spi_tx_fifo_fill_word_blocking(SPI_REGS_s *SPI_REGS_PTR, const uint32_t *buffer, uint8_t max_count);
void spi_enable_cs(SPI_REGS_s *SPI_REGS_PTR, bool soft_cs_en, uint8_t cs_sel);
void spi_set_soft_cs(SPI_REGS_s *SPI_REGS_PTR);
void spi_clr_soft_cs(SPI_REGS_s *SPI_REGS_PTR);

#endif
