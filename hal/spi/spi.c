#include "spi.h"

void spi_set_clk_cfg(SPI_REGS_s *SPI_REGS_PTR, SPI_CLKSEL_CLK_SEL_E clk_sel, uint8_t div_ratio) {
    SPI_REGS_PTR->CLKSEL.packed_w = clk_sel;
    if(div_ratio<31) {
        SPI_REGS_PTR->CLK_DIV.packed_w = div_ratio;
    }
    else {
        SPI_REGS_PTR->CLK_DIV.packed_w = 31;
        SPI_REGS_PTR->CLK_CTRL.clk_scaler = div_ratio - 31;
    }
}

void spi_set_moto_mode_cfg(SPI_REGS_s *SPI_REGS_PTR, SPI_MOT_MOD_CNTRL_CLOCK_POLARITY_E clk_polarity, SPI_MOT_MOD_CNTRL_CLOCK_PHASE_E clk_phase, bool parity_en, bool even_parity) {
    SPI_REGS_PTR->MOT_MOD_CNTRL.clock_polarity = clk_polarity;
    SPI_REGS_PTR->MOT_MOD_CNTRL.clock_phase = clk_phase;
    SPI_REGS_PTR->PARITY_CTRL.parity_en = parity_en;
    SPI_REGS_PTR->PARITY_CTRL.even_parity = even_parity;
}

void spi_set_mode_cfg(SPI_REGS_s *SPI_REGS_PTR, SPI_MODE_CTRL_PERIPHERAL_MODE_E mode,SPI_MODE_CTRL_FRAME_FORMAT_E frame_format, uint8_t data_size, bool msb_first) {
    SPI_REGS_PTR->DATAFRAME_CTRL.data_size_sel = data_size;
    SPI_REGS_PTR->DATAFRAME_CTRL.msb_first = msb_first;
    SPI_REGS_PTR->MODE_CTRL.frame_format = frame_format;
    SPI_REGS_PTR->MODE_CTRL.peripheral_mode = mode;
}

void spi_start_transaction(SPI_REGS_s *SPI_REGS_PTR) {
    SPI_REGS_PTR->MODE_CTRL.spi_en = 1;
}

void spi_disable(SPI_REGS_s *SPI_REGS_PTR) {
    SPI_REGS_PTR->MODE_CTRL.spi_en = 0;
}

void spi_set_loopback(SPI_REGS_s *SPI_REGS_PTR) {
    SPI_REGS_PTR->LOOPBACK_CTRL.loopback_mode = 1;
}

void spi_clr_loopback(SPI_REGS_s *SPI_REGS_PTR) {
    SPI_REGS_PTR->LOOPBACK_CTRL.loopback_mode = 0;
}

void spi_set_tx_ctrl(SPI_REGS_s *SPI_REGS_PTR, uint8_t repeat_tx_data) {
    SPI_REGS_PTR->TX_CTRL.repeat_tx_data = repeat_tx_data;
}

void spi_set_rx_ctrl(SPI_REGS_s *SPI_REGS_PTR, uint8_t receive_timeout, uint8_t ignore_rx_cnt, uint8_t dly_sample_on_rx) {
    SPI_REGS_PTR->RX_CTRL.receive_timeout = receive_timeout;
    SPI_REGS_PTR->RX_CTRL.ignore_rx_cnt = ignore_rx_cnt;
    SPI_REGS_PTR->RX_CTRL.dly_sample_on_rx = dly_sample_on_rx;
}

void spi_init(SPI_REGS_s *SPI_REGS_PTR, spi_cfg_t *spi_cfg) {
    spi_set_mode_cfg(SPI_REGS_PTR, spi_cfg->mode, spi_cfg->frame_format, spi_cfg->data_size_sel, spi_cfg->msb_first);
    spi_set_moto_mode_cfg(SPI_REGS_PTR, spi_cfg->clk_polarity, spi_cfg->clk_phase, spi_cfg->parity_en, spi_cfg->even_partiy);
}

uint8_t spi_receive_byte_blocking(SPI_REGS_s *SPI_REGS_PTR) {
    uint8_t rdata;
    while(SPI_REGS_PTR->STS.rx_fifo_empty_sts) {
        // Wait untill Rx fifo is not empty
    }
    rdata = SPI_REGS_PTR->RX_FIFO[0].packed_byte[0];
    return rdata;
}

uint16_t spi_receive_halfword_blocking(SPI_REGS_s *SPI_REGS_PTR) {
    uint16_t rdata;
    while(SPI_REGS_PTR->STS.rx_fifo_empty_sts) {
        // Wait untill Rx fifo is not empty
    }
    rdata = SPI_REGS_PTR->RX_FIFO[0].packed_hw[0];
    return rdata;
}

uint32_t spi_receive_word_blocking(SPI_REGS_s *SPI_REGS_PTR) {
    uint32_t rdata;
    while(SPI_REGS_PTR->STS.rx_fifo_empty_sts) {
        // Wait untill Rx fifo is not empty
    }
    rdata = SPI_REGS_PTR->RX_FIFO[0].packed_w;
    return rdata;
}

bool spi_receive_byte_non_blocking(SPI_REGS_s *SPI_REGS_PTR, uint8_t *byte) {
    if(SPI_REGS_PTR->STS.rx_fifo_empty_sts) {
        return false;
    }
    else {
        *byte = SPI_REGS_PTR->RX_FIFO[0].packed_byte[0];
        return true;
    }
}

bool spi_receive_halfword_non_blocking(SPI_REGS_s *SPI_REGS_PTR, uint16_t *halfword) {
    if(SPI_REGS_PTR->STS.rx_fifo_empty_sts) {
        return false;
    }
    else {
        *halfword = SPI_REGS_PTR->RX_FIFO[0].packed_hw[0];
        return true;
    }
}

bool spi_receive_word_non_blocking(SPI_REGS_s *SPI_REGS_PTR, uint32_t *word) {
    if(SPI_REGS_PTR->STS.rx_fifo_empty_sts) {
        return false;
    }
    else {
        *word = SPI_REGS_PTR->RX_FIFO[0].packed_w;
        return true;
    }
}

void spi_transmit_byte_blocking(SPI_REGS_s *SPI_REGS_PTR, uint8_t byte) {
    while(SPI_REGS_PTR->STS.tx_fifo_full_sts) {
        // wait unitll tx fifo is not full
    }
    SPI_REGS_PTR->TX_FIFO[0].packed_byte[0] = byte;
}

void spi_transmit_halfword_blocking(SPI_REGS_s *SPI_REGS_PTR, uint16_t halfword) {
    while(SPI_REGS_PTR->STS.tx_fifo_full_sts) {
        // wait unitll tx fifo is not full
    }
    SPI_REGS_PTR->TX_FIFO[0].packed_hw[0] = halfword;
}

void spi_transmit_word_blocking(SPI_REGS_s *SPI_REGS_PTR, uint32_t word) {
    while(SPI_REGS_PTR->STS.tx_fifo_full_sts) {
        // wait unitll tx fifo is not full
    }
    SPI_REGS_PTR->TX_FIFO[0].packed_w = word;
}

bool spi_transmit_byte_non_blocking(SPI_REGS_s *SPI_REGS_PTR, uint8_t byte) {
    if(SPI_REGS_PTR->STS.tx_fifo_full_sts) {
        return false;
    }
    SPI_REGS_PTR->TX_FIFO[0].packed_byte[0] = byte;
    return true;
}

bool spi_transmit_halfword_non_blocking(SPI_REGS_s *SPI_REGS_PTR, uint16_t halfword) {
    if(SPI_REGS_PTR->STS.tx_fifo_full_sts) {
        return false;
    }
    SPI_REGS_PTR->TX_FIFO[0].packed_hw[0] = halfword;
    return true;
}

bool spi_transmit_word_non_blocking(SPI_REGS_s *SPI_REGS_PTR, uint32_t word) {
    if(SPI_REGS_PTR->STS.tx_fifo_full_sts) {
        return false;
    }
    SPI_REGS_PTR->TX_FIFO[0].packed_w = word;
    return true;
}

uint8_t spi_rx_fifo_drain_byte(SPI_REGS_s *SPI_REGS_PTR, uint8_t *buffer, uint8_t max_count) {
    uint8_t count = 0;
    while(!(SPI_REGS_PTR->STS.rx_fifo_empty_sts) && (count < max_count)) {
        buffer[count++] =  SPI_REGS_PTR->RX_FIFO[0].packed_byte[0];
    }
    return count;
}

uint8_t spi_rx_fifo_drain_halfword(SPI_REGS_s *SPI_REGS_PTR, uint16_t *buffer, uint8_t max_count) {
    uint8_t count = 0;
    while(!(SPI_REGS_PTR->STS.rx_fifo_empty_sts) && (count < max_count)) {
        buffer[count++] =  SPI_REGS_PTR->RX_FIFO[0].packed_hw[0];
    }
    return count;
}

uint8_t spi_rx_fifo_drain_word(SPI_REGS_s *SPI_REGS_PTR, uint32_t *buffer, uint8_t max_count) {
    uint8_t count = 0;
    while(!(SPI_REGS_PTR->STS.rx_fifo_empty_sts) && (count < max_count)) {
        buffer[count++] =  SPI_REGS_PTR->RX_FIFO[0].packed_w;
    }
    return count;
}

uint8_t spi_tx_fifo_fill_byte_non_blocking(SPI_REGS_s *SPI_REGS_PTR, const uint8_t *buffer, uint8_t max_count) {
    uint8_t count = 0;
    while(!(SPI_REGS_PTR->STS.tx_fifo_full_sts) && (count < max_count)) {
        SPI_REGS_PTR->TX_FIFO[0].packed_byte[0] = buffer[count++];
    }
    return count;
}

uint8_t spi_tx_fifo_fill_halfword_non_blocking(SPI_REGS_s *SPI_REGS_PTR, const uint16_t *buffer, uint8_t max_count) {
    uint8_t count = 0;
    while(!(SPI_REGS_PTR->STS.tx_fifo_full_sts) && (count < max_count)) {
        SPI_REGS_PTR->TX_FIFO[0].packed_hw[0] = buffer[count++];
    }
    return count;
}

uint8_t spi_tx_fifo_fill_word_non_blocking(SPI_REGS_s *SPI_REGS_PTR, const uint32_t *buffer, uint8_t max_count) {
    uint8_t count = 0;
    while(!(SPI_REGS_PTR->STS.tx_fifo_full_sts) && (count < max_count)) {
        SPI_REGS_PTR->TX_FIFO[0].packed_w = buffer[count++];
    }
    return count;
}

void spi_tx_fifo_fill_byte_blocking(SPI_REGS_s *SPI_REGS_PTR, const uint8_t *buffer, uint8_t max_count) {
    uint8_t count = 0;
    while(count < max_count ) {
        if(!(SPI_REGS_PTR->STS.tx_fifo_full_sts))
            SPI_REGS_PTR->TX_FIFO[0].packed_byte[0] = buffer[count++];
    }
}

void spi_tx_fifo_fill_halfword_blocking(SPI_REGS_s *SPI_REGS_PTR, const uint16_t *buffer, uint8_t max_count) {
    uint8_t count = 0;
    while(count < max_count ) {
        if(!(SPI_REGS_PTR->STS.tx_fifo_full_sts))
            SPI_REGS_PTR->TX_FIFO[0].packed_hw[0] = buffer[count++];
    }
}

void spi_tx_fifo_fill_word_blocking(SPI_REGS_s *SPI_REGS_PTR, const uint32_t *buffer, uint8_t max_count) {
    uint8_t count = 0;
    while(count < max_count ) {
        if(!(SPI_REGS_PTR->STS.tx_fifo_full_sts))
            SPI_REGS_PTR->TX_FIFO[0].packed_w = buffer[count++];
    }
}

void spi_enable_cs(SPI_REGS_s *SPI_REGS_PTR, bool soft_cs_en, uint8_t cs_sel) {
    SPI_REGS_PTR->CS_CTRL.cs_sel = cs_sel;
    SPI_REGS_PTR->CS_CTRL.soft_cs_en = soft_cs_en;
}

void spi_set_soft_cs(SPI_REGS_s *SPI_REGS_PTR) {
    SPI_REGS_PTR->CS_CTRL.soft_cs = 1;
}

void spi_clr_soft_cs(SPI_REGS_s *SPI_REGS_PTR) {
    SPI_REGS_PTR->CS_CTRL.soft_cs = 0;
}
