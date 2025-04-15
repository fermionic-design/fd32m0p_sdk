#include "SPI_REGS.h"

static inline void SPI_DESC_WRITE(SPI_REGS_s * registers, uint32_t module_type, uint32_t module_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<SPI_DESC_module_type_OFS)&SPI_DESC_module_type_MASK) + ((module_subtype<<SPI_DESC_module_subtype_OFS)&SPI_DESC_module_subtype_MASK) + ((major_rev<<SPI_DESC_major_rev_OFS)&SPI_DESC_major_rev_MASK) + ((minor_rev<<SPI_DESC_minor_rev_OFS)&SPI_DESC_minor_rev_MASK);
}

static inline void SPI_PWR_EN_WRITE(SPI_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<SPI_PWR_EN_pwr_en_OFS)&SPI_PWR_EN_pwr_en_MASK) + ((pwr_en_key<<SPI_PWR_EN_pwr_en_key_OFS)&SPI_PWR_EN_pwr_en_key_MASK);
}

static inline void SPI_RST_CTRL_WRITE(SPI_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<SPI_RST_CTRL_rst_OFS)&SPI_RST_CTRL_rst_MASK) + ((rst_sts_clr<<SPI_RST_CTRL_rst_sts_clr_OFS)&SPI_RST_CTRL_rst_sts_clr_MASK) + ((rst_key<<SPI_RST_CTRL_rst_key_OFS)&SPI_RST_CTRL_rst_key_MASK);
}

static inline void SPI_RST_STS_WRITE(SPI_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<SPI_RST_STS_rst_sts_OFS)&SPI_RST_STS_rst_sts_MASK);
}

static inline void SPI_CLK_CTRL_WRITE(SPI_REGS_s * registers, uint32_t clk_scaler) {
    registers->CLK_CTRL.packed_w =  + ((clk_scaler<<SPI_CLK_CTRL_clk_scaler_OFS)&SPI_CLK_CTRL_clk_scaler_MASK);
}

static inline void SPI_CLK_DIV_WRITE(SPI_REGS_s * registers, uint32_t div_ratio) {
    registers->CLK_DIV.packed_w =  + ((div_ratio<<SPI_CLK_DIV_div_ratio_OFS)&SPI_CLK_DIV_div_ratio_MASK);
}

static inline void SPI_CLKSEL_WRITE(SPI_REGS_s * registers, uint32_t clk_sel) {
    registers->CLKSEL.packed_w =  + ((clk_sel<<SPI_CLKSEL_clk_sel_OFS)&SPI_CLKSEL_clk_sel_MASK);
}

static inline void SPI_MOT_MOD_CNTRL_WRITE(SPI_REGS_s * registers, uint32_t clock_polarity, uint32_t clock_phase) {
    registers->MOT_MOD_CNTRL.packed_w =  + ((clock_polarity<<SPI_MOT_MOD_CNTRL_clock_polarity_OFS)&SPI_MOT_MOD_CNTRL_clock_polarity_MASK) + ((clock_phase<<SPI_MOT_MOD_CNTRL_clock_phase_OFS)&SPI_MOT_MOD_CNTRL_clock_phase_MASK);
}

static inline void SPI_PARITY_CTRL_WRITE(SPI_REGS_s * registers, uint32_t parity_en, uint32_t even_parity) {
    registers->PARITY_CTRL.packed_w =  + ((parity_en<<SPI_PARITY_CTRL_parity_en_OFS)&SPI_PARITY_CTRL_parity_en_MASK) + ((even_parity<<SPI_PARITY_CTRL_even_parity_OFS)&SPI_PARITY_CTRL_even_parity_MASK);
}

static inline void SPI_CMD_DATA_CTRL_WRITE(SPI_REGS_s * registers, uint32_t cmd_data_mode_en, uint32_t cmd_data_mode_val) {
    registers->CMD_DATA_CTRL.packed_w =  + ((cmd_data_mode_en<<SPI_CMD_DATA_CTRL_cmd_data_mode_en_OFS)&SPI_CMD_DATA_CTRL_cmd_data_mode_en_MASK) + ((cmd_data_mode_val<<SPI_CMD_DATA_CTRL_cmd_data_mode_val_OFS)&SPI_CMD_DATA_CTRL_cmd_data_mode_val_MASK);
}

static inline void SPI_LOOPBACK_CTRL_WRITE(SPI_REGS_s * registers, uint32_t loopback_mode) {
    registers->LOOPBACK_CTRL.packed_w =  + ((loopback_mode<<SPI_LOOPBACK_CTRL_loopback_mode_OFS)&SPI_LOOPBACK_CTRL_loopback_mode_MASK);
}

static inline void SPI_DATAFRAME_CTRL_WRITE(SPI_REGS_s * registers, uint32_t data_size_sel, uint32_t msb_first, uint32_t data_out_disable) {
    registers->DATAFRAME_CTRL.packed_w =  + ((data_size_sel<<SPI_DATAFRAME_CTRL_data_size_sel_OFS)&SPI_DATAFRAME_CTRL_data_size_sel_MASK) + ((msb_first<<SPI_DATAFRAME_CTRL_msb_first_OFS)&SPI_DATAFRAME_CTRL_msb_first_MASK) + ((data_out_disable<<SPI_DATAFRAME_CTRL_data_out_disable_OFS)&SPI_DATAFRAME_CTRL_data_out_disable_MASK);
}

static inline void SPI_MODE_CTRL_WRITE(SPI_REGS_s * registers, uint32_t spi_en, uint32_t peripheral_mode, uint32_t frame_format) {
    registers->MODE_CTRL.packed_w =  + ((spi_en<<SPI_MODE_CTRL_spi_en_OFS)&SPI_MODE_CTRL_spi_en_MASK) + ((peripheral_mode<<SPI_MODE_CTRL_peripheral_mode_OFS)&SPI_MODE_CTRL_peripheral_mode_MASK) + ((frame_format<<SPI_MODE_CTRL_frame_format_OFS)&SPI_MODE_CTRL_frame_format_MASK);
}

static inline void SPI_CS_CTRL_WRITE(SPI_REGS_s * registers, uint32_t cs_sel, uint32_t soft_cs_en, uint32_t soft_cs) {
    registers->CS_CTRL.packed_w =  + ((cs_sel<<SPI_CS_CTRL_cs_sel_OFS)&SPI_CS_CTRL_cs_sel_MASK) + ((soft_cs_en<<SPI_CS_CTRL_soft_cs_en_OFS)&SPI_CS_CTRL_soft_cs_en_MASK) + ((soft_cs<<SPI_CS_CTRL_soft_cs_OFS)&SPI_CS_CTRL_soft_cs_MASK);
}

static inline void SPI_CS_SETUP_HOLD_CNT_WRITE(SPI_REGS_s * registers, uint32_t cs_setup_cnt, uint32_t cs_hold_cnt) {
    registers->CS_SETUP_HOLD_CNT.packed_w =  + ((cs_setup_cnt<<SPI_CS_SETUP_HOLD_CNT_cs_setup_cnt_OFS)&SPI_CS_SETUP_HOLD_CNT_cs_setup_cnt_MASK) + ((cs_hold_cnt<<SPI_CS_SETUP_HOLD_CNT_cs_hold_cnt_OFS)&SPI_CS_SETUP_HOLD_CNT_cs_hold_cnt_MASK);
}

static inline void SPI_SCLK_CTRL_WRITE(SPI_REGS_s * registers, uint32_t sclk_removal) {
    registers->SCLK_CTRL.packed_w =  + ((sclk_removal<<SPI_SCLK_CTRL_sclk_removal_OFS)&SPI_SCLK_CTRL_sclk_removal_MASK);
}

static inline void SPI_QSPI_CTRL_WRITE(SPI_REGS_s * registers, uint32_t qspi_first, uint32_t nrml_spi_frames_in_qspi, uint32_t frames_in_qspi, uint32_t frames_in_wmode_in_qspi) {
    registers->QSPI_CTRL.packed_w =  + ((qspi_first<<SPI_QSPI_CTRL_qspi_first_OFS)&SPI_QSPI_CTRL_qspi_first_MASK) + ((nrml_spi_frames_in_qspi<<SPI_QSPI_CTRL_nrml_spi_frames_in_qspi_OFS)&SPI_QSPI_CTRL_nrml_spi_frames_in_qspi_MASK) + ((frames_in_qspi<<SPI_QSPI_CTRL_frames_in_qspi_OFS)&SPI_QSPI_CTRL_frames_in_qspi_MASK) + ((frames_in_wmode_in_qspi<<SPI_QSPI_CTRL_frames_in_wmode_in_qspi_OFS)&SPI_QSPI_CTRL_frames_in_wmode_in_qspi_MASK);
}

static inline void SPI_DSPI_CTRL_WRITE(SPI_REGS_s * registers, uint32_t dspi_first, uint32_t nrml_spi_frames_in_dspi, uint32_t frames_in_dspi, uint32_t frames_in_wmode_in_dspi) {
    registers->DSPI_CTRL.packed_w =  + ((dspi_first<<SPI_DSPI_CTRL_dspi_first_OFS)&SPI_DSPI_CTRL_dspi_first_MASK) + ((nrml_spi_frames_in_dspi<<SPI_DSPI_CTRL_nrml_spi_frames_in_dspi_OFS)&SPI_DSPI_CTRL_nrml_spi_frames_in_dspi_MASK) + ((frames_in_dspi<<SPI_DSPI_CTRL_frames_in_dspi_OFS)&SPI_DSPI_CTRL_frames_in_dspi_MASK) + ((frames_in_wmode_in_dspi<<SPI_DSPI_CTRL_frames_in_wmode_in_dspi_OFS)&SPI_DSPI_CTRL_frames_in_wmode_in_dspi_MASK);
}

static inline void SPI_TX_CTRL_WRITE(SPI_REGS_s * registers, uint32_t repeat_tx_data) {
    registers->TX_CTRL.packed_w =  + ((repeat_tx_data<<SPI_TX_CTRL_repeat_tx_data_OFS)&SPI_TX_CTRL_repeat_tx_data_MASK);
}

static inline void SPI_RX_CTRL_WRITE(SPI_REGS_s * registers, uint32_t receive_timeout, uint32_t ignore_rx_cnt, uint32_t dly_sample_on_rx) {
    registers->RX_CTRL.packed_w =  + ((receive_timeout<<SPI_RX_CTRL_receive_timeout_OFS)&SPI_RX_CTRL_receive_timeout_MASK) + ((ignore_rx_cnt<<SPI_RX_CTRL_ignore_rx_cnt_OFS)&SPI_RX_CTRL_ignore_rx_cnt_MASK) + ((dly_sample_on_rx<<SPI_RX_CTRL_dly_sample_on_rx_OFS)&SPI_RX_CTRL_dly_sample_on_rx_MASK);
}

static inline void SPI_INT_FIFO_LVL_SEL_WRITE(SPI_REGS_s * registers, uint32_t rx_fifo_lvl_int, uint32_t tx_fifo_lvl_int) {
    registers->INT_FIFO_LVL_SEL.packed_w =  + ((rx_fifo_lvl_int<<SPI_INT_FIFO_LVL_SEL_rx_fifo_lvl_int_OFS)&SPI_INT_FIFO_LVL_SEL_rx_fifo_lvl_int_MASK) + ((tx_fifo_lvl_int<<SPI_INT_FIFO_LVL_SEL_tx_fifo_lvl_int_OFS)&SPI_INT_FIFO_LVL_SEL_tx_fifo_lvl_int_MASK);
}

static inline void SPI_STS_WRITE(SPI_REGS_s * registers, uint32_t spi_busy_sts, uint32_t rx_fifo_full_sts, uint32_t rx_fifo_empty_sts, uint32_t tx_fifo_full_sts, uint32_t tx_fifo_empty_sts) {
    registers->STS.packed_w =  + ((spi_busy_sts<<SPI_STS_spi_busy_sts_OFS)&SPI_STS_spi_busy_sts_MASK) + ((rx_fifo_full_sts<<SPI_STS_rx_fifo_full_sts_OFS)&SPI_STS_rx_fifo_full_sts_MASK) + ((rx_fifo_empty_sts<<SPI_STS_rx_fifo_empty_sts_OFS)&SPI_STS_rx_fifo_empty_sts_MASK) + ((tx_fifo_full_sts<<SPI_STS_tx_fifo_full_sts_OFS)&SPI_STS_tx_fifo_full_sts_MASK) + ((tx_fifo_empty_sts<<SPI_STS_tx_fifo_empty_sts_OFS)&SPI_STS_tx_fifo_empty_sts_MASK);
}

static inline void SPI_SPI_DBG_CTRL_WRITE(SPI_REGS_s * registers, uint32_t stop_on_halt, uint32_t soft_stop) {
    registers->SPI_DBG_CTRL.packed_w =  + ((stop_on_halt<<SPI_SPI_DBG_CTRL_stop_on_halt_OFS)&SPI_SPI_DBG_CTRL_stop_on_halt_MASK) + ((soft_stop<<SPI_SPI_DBG_CTRL_soft_stop_OFS)&SPI_SPI_DBG_CTRL_soft_stop_MASK);
}

static inline void SPI_INTR_STS_WRITE(SPI_REGS_s * registers, uint32_t intr_first) {
    registers->INTR_STS.packed_w =  + ((intr_first<<SPI_INTR_STS_intr_first_OFS)&SPI_INTR_STS_intr_first_MASK);
}

static inline void SPI_INTR_EVENT_WRITE(SPI_REGS_s * registers, uint32_t rx_fifo_overflow, uint32_t parity_error, uint32_t rx_timeout, uint32_t rx_fifo_trg_lvl, uint32_t tx_fifo_trg_lvl, uint32_t tx_fifo_empty, uint32_t idle, uint32_t rx_dma_done, uint32_t tx_dma_done, uint32_t tx_fifo_underflow, uint32_t rx_fifo_full) {
    registers->INTR_EVENT.packed_w =  + ((rx_fifo_overflow<<SPI_INTR_EVENT_rx_fifo_overflow_OFS)&SPI_INTR_EVENT_rx_fifo_overflow_MASK) + ((parity_error<<SPI_INTR_EVENT_parity_error_OFS)&SPI_INTR_EVENT_parity_error_MASK) + ((rx_timeout<<SPI_INTR_EVENT_rx_timeout_OFS)&SPI_INTR_EVENT_rx_timeout_MASK) + ((rx_fifo_trg_lvl<<SPI_INTR_EVENT_rx_fifo_trg_lvl_OFS)&SPI_INTR_EVENT_rx_fifo_trg_lvl_MASK) + ((tx_fifo_trg_lvl<<SPI_INTR_EVENT_tx_fifo_trg_lvl_OFS)&SPI_INTR_EVENT_tx_fifo_trg_lvl_MASK) + ((tx_fifo_empty<<SPI_INTR_EVENT_tx_fifo_empty_OFS)&SPI_INTR_EVENT_tx_fifo_empty_MASK) + ((idle<<SPI_INTR_EVENT_idle_OFS)&SPI_INTR_EVENT_idle_MASK) + ((rx_dma_done<<SPI_INTR_EVENT_rx_dma_done_OFS)&SPI_INTR_EVENT_rx_dma_done_MASK) + ((tx_dma_done<<SPI_INTR_EVENT_tx_dma_done_OFS)&SPI_INTR_EVENT_tx_dma_done_MASK) + ((tx_fifo_underflow<<SPI_INTR_EVENT_tx_fifo_underflow_OFS)&SPI_INTR_EVENT_tx_fifo_underflow_MASK) + ((rx_fifo_full<<SPI_INTR_EVENT_rx_fifo_full_OFS)&SPI_INTR_EVENT_rx_fifo_full_MASK);
}

static inline void SPI_INTR_EN_WRITE(SPI_REGS_s * registers, uint32_t rx_fifo_overflow_en, uint32_t parity_error_en, uint32_t rx_timeout_en, uint32_t rx_fifo_trg_lvl_en, uint32_t tx_fifo_trg_lvl_en, uint32_t tx_fifo_empty_en, uint32_t idle_en, uint32_t rx_dma_done_en, uint32_t tx_dma_done_en, uint32_t tx_fifo_underflow_en, uint32_t rx_fifo_full_en) {
    registers->INTR_EN.packed_w =  + ((rx_fifo_overflow_en<<SPI_INTR_EN_rx_fifo_overflow_en_OFS)&SPI_INTR_EN_rx_fifo_overflow_en_MASK) + ((parity_error_en<<SPI_INTR_EN_parity_error_en_OFS)&SPI_INTR_EN_parity_error_en_MASK) + ((rx_timeout_en<<SPI_INTR_EN_rx_timeout_en_OFS)&SPI_INTR_EN_rx_timeout_en_MASK) + ((rx_fifo_trg_lvl_en<<SPI_INTR_EN_rx_fifo_trg_lvl_en_OFS)&SPI_INTR_EN_rx_fifo_trg_lvl_en_MASK) + ((tx_fifo_trg_lvl_en<<SPI_INTR_EN_tx_fifo_trg_lvl_en_OFS)&SPI_INTR_EN_tx_fifo_trg_lvl_en_MASK) + ((tx_fifo_empty_en<<SPI_INTR_EN_tx_fifo_empty_en_OFS)&SPI_INTR_EN_tx_fifo_empty_en_MASK) + ((idle_en<<SPI_INTR_EN_idle_en_OFS)&SPI_INTR_EN_idle_en_MASK) + ((rx_dma_done_en<<SPI_INTR_EN_rx_dma_done_en_OFS)&SPI_INTR_EN_rx_dma_done_en_MASK) + ((tx_dma_done_en<<SPI_INTR_EN_tx_dma_done_en_OFS)&SPI_INTR_EN_tx_dma_done_en_MASK) + ((tx_fifo_underflow_en<<SPI_INTR_EN_tx_fifo_underflow_en_OFS)&SPI_INTR_EN_tx_fifo_underflow_en_MASK) + ((rx_fifo_full_en<<SPI_INTR_EN_rx_fifo_full_en_OFS)&SPI_INTR_EN_rx_fifo_full_en_MASK);
}

static inline void SPI_INTR_TX_DMA_EN_WRITE(SPI_REGS_s * registers, uint32_t rx_fifo_overflow_tx_dma_en, uint32_t parity_error_tx_dma_en, uint32_t rx_timeout_tx_dma_en, uint32_t rx_fifo_trg_lvl_tx_dma_en, uint32_t tx_fifo_trg_lvl_tx_dma_en, uint32_t tx_fifo_empty_tx_dma_en, uint32_t idle_tx_dma_en, uint32_t rx_dma_done_tx_dma_en, uint32_t tx_dma_done_tx_dma_en, uint32_t tx_fifo_underflow_tx_dma_en, uint32_t rx_fifo_full_tx_dma_en) {
    registers->INTR_TX_DMA_EN.packed_w =  + ((rx_fifo_overflow_tx_dma_en<<SPI_INTR_TX_DMA_EN_rx_fifo_overflow_tx_dma_en_OFS)&SPI_INTR_TX_DMA_EN_rx_fifo_overflow_tx_dma_en_MASK) + ((parity_error_tx_dma_en<<SPI_INTR_TX_DMA_EN_parity_error_tx_dma_en_OFS)&SPI_INTR_TX_DMA_EN_parity_error_tx_dma_en_MASK) + ((rx_timeout_tx_dma_en<<SPI_INTR_TX_DMA_EN_rx_timeout_tx_dma_en_OFS)&SPI_INTR_TX_DMA_EN_rx_timeout_tx_dma_en_MASK) + ((rx_fifo_trg_lvl_tx_dma_en<<SPI_INTR_TX_DMA_EN_rx_fifo_trg_lvl_tx_dma_en_OFS)&SPI_INTR_TX_DMA_EN_rx_fifo_trg_lvl_tx_dma_en_MASK) + ((tx_fifo_trg_lvl_tx_dma_en<<SPI_INTR_TX_DMA_EN_tx_fifo_trg_lvl_tx_dma_en_OFS)&SPI_INTR_TX_DMA_EN_tx_fifo_trg_lvl_tx_dma_en_MASK) + ((tx_fifo_empty_tx_dma_en<<SPI_INTR_TX_DMA_EN_tx_fifo_empty_tx_dma_en_OFS)&SPI_INTR_TX_DMA_EN_tx_fifo_empty_tx_dma_en_MASK) + ((idle_tx_dma_en<<SPI_INTR_TX_DMA_EN_idle_tx_dma_en_OFS)&SPI_INTR_TX_DMA_EN_idle_tx_dma_en_MASK) + ((rx_dma_done_tx_dma_en<<SPI_INTR_TX_DMA_EN_rx_dma_done_tx_dma_en_OFS)&SPI_INTR_TX_DMA_EN_rx_dma_done_tx_dma_en_MASK) + ((tx_dma_done_tx_dma_en<<SPI_INTR_TX_DMA_EN_tx_dma_done_tx_dma_en_OFS)&SPI_INTR_TX_DMA_EN_tx_dma_done_tx_dma_en_MASK) + ((tx_fifo_underflow_tx_dma_en<<SPI_INTR_TX_DMA_EN_tx_fifo_underflow_tx_dma_en_OFS)&SPI_INTR_TX_DMA_EN_tx_fifo_underflow_tx_dma_en_MASK) + ((rx_fifo_full_tx_dma_en<<SPI_INTR_TX_DMA_EN_rx_fifo_full_tx_dma_en_OFS)&SPI_INTR_TX_DMA_EN_rx_fifo_full_tx_dma_en_MASK);
}

static inline void SPI_INTR_RX_DMA_EN_WRITE(SPI_REGS_s * registers, uint32_t rx_fifo_overflow_rx_dma_en, uint32_t parity_error_rx_dma_en, uint32_t rx_timeout_rx_dma_en, uint32_t rx_fifo_trg_lvl_rx_dma_en, uint32_t tx_fifo_trg_lvl_rx_dma_en, uint32_t tx_fifo_empty_rx_dma_en, uint32_t idle_rx_dma_en, uint32_t rx_dma_done_rx_dma_en, uint32_t tx_dma_done_rx_dma_en, uint32_t tx_fifo_underflow_rx_dma_en, uint32_t rx_fifo_full_rx_dma_en) {
    registers->INTR_RX_DMA_EN.packed_w =  + ((rx_fifo_overflow_rx_dma_en<<SPI_INTR_RX_DMA_EN_rx_fifo_overflow_rx_dma_en_OFS)&SPI_INTR_RX_DMA_EN_rx_fifo_overflow_rx_dma_en_MASK) + ((parity_error_rx_dma_en<<SPI_INTR_RX_DMA_EN_parity_error_rx_dma_en_OFS)&SPI_INTR_RX_DMA_EN_parity_error_rx_dma_en_MASK) + ((rx_timeout_rx_dma_en<<SPI_INTR_RX_DMA_EN_rx_timeout_rx_dma_en_OFS)&SPI_INTR_RX_DMA_EN_rx_timeout_rx_dma_en_MASK) + ((rx_fifo_trg_lvl_rx_dma_en<<SPI_INTR_RX_DMA_EN_rx_fifo_trg_lvl_rx_dma_en_OFS)&SPI_INTR_RX_DMA_EN_rx_fifo_trg_lvl_rx_dma_en_MASK) + ((tx_fifo_trg_lvl_rx_dma_en<<SPI_INTR_RX_DMA_EN_tx_fifo_trg_lvl_rx_dma_en_OFS)&SPI_INTR_RX_DMA_EN_tx_fifo_trg_lvl_rx_dma_en_MASK) + ((tx_fifo_empty_rx_dma_en<<SPI_INTR_RX_DMA_EN_tx_fifo_empty_rx_dma_en_OFS)&SPI_INTR_RX_DMA_EN_tx_fifo_empty_rx_dma_en_MASK) + ((idle_rx_dma_en<<SPI_INTR_RX_DMA_EN_idle_rx_dma_en_OFS)&SPI_INTR_RX_DMA_EN_idle_rx_dma_en_MASK) + ((rx_dma_done_rx_dma_en<<SPI_INTR_RX_DMA_EN_rx_dma_done_rx_dma_en_OFS)&SPI_INTR_RX_DMA_EN_rx_dma_done_rx_dma_en_MASK) + ((tx_dma_done_rx_dma_en<<SPI_INTR_RX_DMA_EN_tx_dma_done_rx_dma_en_OFS)&SPI_INTR_RX_DMA_EN_tx_dma_done_rx_dma_en_MASK) + ((tx_fifo_underflow_rx_dma_en<<SPI_INTR_RX_DMA_EN_tx_fifo_underflow_rx_dma_en_OFS)&SPI_INTR_RX_DMA_EN_tx_fifo_underflow_rx_dma_en_MASK) + ((rx_fifo_full_rx_dma_en<<SPI_INTR_RX_DMA_EN_rx_fifo_full_rx_dma_en_OFS)&SPI_INTR_RX_DMA_EN_rx_fifo_full_rx_dma_en_MASK);
}

static inline void SPI_INTR_NMI_WRITE(SPI_REGS_s * registers, uint32_t rx_fifo_overflow_nmi_en, uint32_t parity_error_nmi_en, uint32_t rx_timeout_nmi_en, uint32_t rx_fifo_trg_lvl_nmi_en, uint32_t tx_fifo_trg_lvl_nmi_en, uint32_t tx_fifo_empty_nmi_en, uint32_t idle_nmi_en, uint32_t rx_dma_done_nmi_en, uint32_t tx_dma_done_nmi_en, uint32_t tx_fifo_underflow_nmi_en, uint32_t rx_fifo_full_nmi_en) {
    registers->INTR_NMI.packed_w =  + ((rx_fifo_overflow_nmi_en<<SPI_INTR_NMI_rx_fifo_overflow_nmi_en_OFS)&SPI_INTR_NMI_rx_fifo_overflow_nmi_en_MASK) + ((parity_error_nmi_en<<SPI_INTR_NMI_parity_error_nmi_en_OFS)&SPI_INTR_NMI_parity_error_nmi_en_MASK) + ((rx_timeout_nmi_en<<SPI_INTR_NMI_rx_timeout_nmi_en_OFS)&SPI_INTR_NMI_rx_timeout_nmi_en_MASK) + ((rx_fifo_trg_lvl_nmi_en<<SPI_INTR_NMI_rx_fifo_trg_lvl_nmi_en_OFS)&SPI_INTR_NMI_rx_fifo_trg_lvl_nmi_en_MASK) + ((tx_fifo_trg_lvl_nmi_en<<SPI_INTR_NMI_tx_fifo_trg_lvl_nmi_en_OFS)&SPI_INTR_NMI_tx_fifo_trg_lvl_nmi_en_MASK) + ((tx_fifo_empty_nmi_en<<SPI_INTR_NMI_tx_fifo_empty_nmi_en_OFS)&SPI_INTR_NMI_tx_fifo_empty_nmi_en_MASK) + ((idle_nmi_en<<SPI_INTR_NMI_idle_nmi_en_OFS)&SPI_INTR_NMI_idle_nmi_en_MASK) + ((rx_dma_done_nmi_en<<SPI_INTR_NMI_rx_dma_done_nmi_en_OFS)&SPI_INTR_NMI_rx_dma_done_nmi_en_MASK) + ((tx_dma_done_nmi_en<<SPI_INTR_NMI_tx_dma_done_nmi_en_OFS)&SPI_INTR_NMI_tx_dma_done_nmi_en_MASK) + ((tx_fifo_underflow_nmi_en<<SPI_INTR_NMI_tx_fifo_underflow_nmi_en_OFS)&SPI_INTR_NMI_tx_fifo_underflow_nmi_en_MASK) + ((rx_fifo_full_nmi_en<<SPI_INTR_NMI_rx_fifo_full_nmi_en_OFS)&SPI_INTR_NMI_rx_fifo_full_nmi_en_MASK);
}

static inline void SPI_INTR_SW_SET_WRITE(SPI_REGS_s * registers, uint32_t rx_fifo_overflow_sw_set, uint32_t parity_error_sw_set, uint32_t rx_timeout_sw_set, uint32_t rx_fifo_trg_lvl_sw_set, uint32_t tx_fifo_trg_lvl_sw_set, uint32_t tx_fifo_empty_sw_set, uint32_t idle_sw_set, uint32_t rx_dma_done_sw_set, uint32_t tx_dma_done_sw_set, uint32_t tx_fifo_underflow_sw_set, uint32_t rx_fifo_full_sw_set) {
    registers->INTR_SW_SET.packed_w =  + ((rx_fifo_overflow_sw_set<<SPI_INTR_SW_SET_rx_fifo_overflow_sw_set_OFS)&SPI_INTR_SW_SET_rx_fifo_overflow_sw_set_MASK) + ((parity_error_sw_set<<SPI_INTR_SW_SET_parity_error_sw_set_OFS)&SPI_INTR_SW_SET_parity_error_sw_set_MASK) + ((rx_timeout_sw_set<<SPI_INTR_SW_SET_rx_timeout_sw_set_OFS)&SPI_INTR_SW_SET_rx_timeout_sw_set_MASK) + ((rx_fifo_trg_lvl_sw_set<<SPI_INTR_SW_SET_rx_fifo_trg_lvl_sw_set_OFS)&SPI_INTR_SW_SET_rx_fifo_trg_lvl_sw_set_MASK) + ((tx_fifo_trg_lvl_sw_set<<SPI_INTR_SW_SET_tx_fifo_trg_lvl_sw_set_OFS)&SPI_INTR_SW_SET_tx_fifo_trg_lvl_sw_set_MASK) + ((tx_fifo_empty_sw_set<<SPI_INTR_SW_SET_tx_fifo_empty_sw_set_OFS)&SPI_INTR_SW_SET_tx_fifo_empty_sw_set_MASK) + ((idle_sw_set<<SPI_INTR_SW_SET_idle_sw_set_OFS)&SPI_INTR_SW_SET_idle_sw_set_MASK) + ((rx_dma_done_sw_set<<SPI_INTR_SW_SET_rx_dma_done_sw_set_OFS)&SPI_INTR_SW_SET_rx_dma_done_sw_set_MASK) + ((tx_dma_done_sw_set<<SPI_INTR_SW_SET_tx_dma_done_sw_set_OFS)&SPI_INTR_SW_SET_tx_dma_done_sw_set_MASK) + ((tx_fifo_underflow_sw_set<<SPI_INTR_SW_SET_tx_fifo_underflow_sw_set_OFS)&SPI_INTR_SW_SET_tx_fifo_underflow_sw_set_MASK) + ((rx_fifo_full_sw_set<<SPI_INTR_SW_SET_rx_fifo_full_sw_set_OFS)&SPI_INTR_SW_SET_rx_fifo_full_sw_set_MASK);
}

static inline void SPI_SPARE_CTRL_WRITE(SPI_REGS_s * registers, uint32_t cfg0, uint32_t cfg1) {
    registers->SPARE_CTRL.packed_w =  + ((cfg0<<SPI_SPARE_CTRL_cfg0_OFS)&SPI_SPARE_CTRL_cfg0_MASK) + ((cfg1<<SPI_SPARE_CTRL_cfg1_OFS)&SPI_SPARE_CTRL_cfg1_MASK);
}

static inline void SPI_SPARE_STS_WRITE(SPI_REGS_s * registers, uint32_t sts0, uint32_t sts1) {
    registers->SPARE_STS.packed_w =  + ((sts0<<SPI_SPARE_STS_sts0_OFS)&SPI_SPARE_STS_sts0_MASK) + ((sts1<<SPI_SPARE_STS_sts1_OFS)&SPI_SPARE_STS_sts1_MASK);
}

