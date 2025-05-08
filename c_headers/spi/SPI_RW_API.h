#include "SPI_REGS.h"

static inline void SPI_PWR_EN_WRITE(SPI_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w = ((pwr_en<<SPI_PWR_EN_PWR_EN_OFS) & SPI_PWR_EN_PWR_EN_MASK)
                                +((pwr_en_key<<SPI_PWR_EN_PWR_EN_KEY_OFS) & SPI_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void SPI_RST_CTRL_WRITE(SPI_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w = ((rst<<SPI_RST_CTRL_RST_OFS) & SPI_RST_CTRL_RST_MASK)
                                  +((rst_sts_clr<<SPI_RST_CTRL_RST_STS_CLR_OFS) & SPI_RST_CTRL_RST_STS_CLR_MASK)
                                  +((rst_key<<SPI_RST_CTRL_RST_KEY_OFS) & SPI_RST_CTRL_RST_KEY_MASK);
}

static inline void SPI_CLK_CTRL_WRITE(SPI_REGS_s * registers, uint32_t clk_scaler) {
    registers->CLK_CTRL.packed_w = ((clk_scaler<<SPI_CLK_CTRL_CLK_SCALER_OFS) & SPI_CLK_CTRL_CLK_SCALER_MASK);
}

static inline void SPI_CLK_DIV_WRITE(SPI_REGS_s * registers, uint32_t div_ratio) {
    registers->CLK_DIV.packed_w = ((div_ratio<<SPI_CLK_DIV_DIV_RATIO_OFS) & SPI_CLK_DIV_DIV_RATIO_MASK);
}

static inline void SPI_CLKSEL_WRITE(SPI_REGS_s * registers, uint32_t clk_sel) {
    registers->CLKSEL.packed_w = ((clk_sel<<SPI_CLKSEL_CLK_SEL_OFS) & SPI_CLKSEL_CLK_SEL_MASK);
}

static inline void SPI_MOT_MOD_CNTRL_WRITE(SPI_REGS_s * registers, uint32_t clock_polarity, uint32_t clock_phase) {
    registers->MOT_MOD_CNTRL.packed_w = ((clock_polarity<<SPI_MOT_MOD_CNTRL_CLOCK_POLARITY_OFS) & SPI_MOT_MOD_CNTRL_CLOCK_POLARITY_MASK)
                                       +((clock_phase<<SPI_MOT_MOD_CNTRL_CLOCK_PHASE_OFS) & SPI_MOT_MOD_CNTRL_CLOCK_PHASE_MASK);
}

static inline void SPI_PARITY_CTRL_WRITE(SPI_REGS_s * registers, uint32_t parity_en, uint32_t even_parity) {
    registers->PARITY_CTRL.packed_w = ((parity_en<<SPI_PARITY_CTRL_PARITY_EN_OFS) & SPI_PARITY_CTRL_PARITY_EN_MASK)
                                     +((even_parity<<SPI_PARITY_CTRL_EVEN_PARITY_OFS) & SPI_PARITY_CTRL_EVEN_PARITY_MASK);
}

static inline void SPI_CMD_DATA_CTRL_WRITE(SPI_REGS_s * registers, uint32_t cmd_data_mode_en, uint32_t cmd_data_mode_val) {
    registers->CMD_DATA_CTRL.packed_w = ((cmd_data_mode_en<<SPI_CMD_DATA_CTRL_CMD_DATA_MODE_EN_OFS) & SPI_CMD_DATA_CTRL_CMD_DATA_MODE_EN_MASK)
                                       +((cmd_data_mode_val<<SPI_CMD_DATA_CTRL_CMD_DATA_MODE_VAL_OFS) & SPI_CMD_DATA_CTRL_CMD_DATA_MODE_VAL_MASK);
}

static inline void SPI_LOOPBACK_CTRL_WRITE(SPI_REGS_s * registers, uint32_t loopback_mode) {
    registers->LOOPBACK_CTRL.packed_w = ((loopback_mode<<SPI_LOOPBACK_CTRL_LOOPBACK_MODE_OFS) & SPI_LOOPBACK_CTRL_LOOPBACK_MODE_MASK);
}

static inline void SPI_DATAFRAME_CTRL_WRITE(SPI_REGS_s * registers, uint32_t data_size_sel, uint32_t msb_first, uint32_t data_out_disable) {
    registers->DATAFRAME_CTRL.packed_w = ((data_size_sel<<SPI_DATAFRAME_CTRL_DATA_SIZE_SEL_OFS) & SPI_DATAFRAME_CTRL_DATA_SIZE_SEL_MASK)
                                        +((msb_first<<SPI_DATAFRAME_CTRL_MSB_FIRST_OFS) & SPI_DATAFRAME_CTRL_MSB_FIRST_MASK)
                                        +((data_out_disable<<SPI_DATAFRAME_CTRL_DATA_OUT_DISABLE_OFS) & SPI_DATAFRAME_CTRL_DATA_OUT_DISABLE_MASK);
}

static inline void SPI_MODE_CTRL_WRITE(SPI_REGS_s * registers, uint32_t spi_en, uint32_t peripheral_mode, uint32_t frame_format) {
    registers->MODE_CTRL.packed_w = ((spi_en<<SPI_MODE_CTRL_SPI_EN_OFS) & SPI_MODE_CTRL_SPI_EN_MASK)
                                   +((peripheral_mode<<SPI_MODE_CTRL_PERIPHERAL_MODE_OFS) & SPI_MODE_CTRL_PERIPHERAL_MODE_MASK)
                                   +((frame_format<<SPI_MODE_CTRL_FRAME_FORMAT_OFS) & SPI_MODE_CTRL_FRAME_FORMAT_MASK);
}

static inline void SPI_CS_CTRL_WRITE(SPI_REGS_s * registers, uint32_t cs_sel, uint32_t soft_cs_en, uint32_t soft_cs) {
    registers->CS_CTRL.packed_w = ((cs_sel<<SPI_CS_CTRL_CS_SEL_OFS) & SPI_CS_CTRL_CS_SEL_MASK)
                                 +((soft_cs_en<<SPI_CS_CTRL_SOFT_CS_EN_OFS) & SPI_CS_CTRL_SOFT_CS_EN_MASK)
                                 +((soft_cs<<SPI_CS_CTRL_SOFT_CS_OFS) & SPI_CS_CTRL_SOFT_CS_MASK);
}

static inline void SPI_CS_SETUP_HOLD_CNT_WRITE(SPI_REGS_s * registers, uint32_t cs_setup_cnt, uint32_t cs_hold_cnt) {
    registers->CS_SETUP_HOLD_CNT.packed_w = ((cs_setup_cnt<<SPI_CS_SETUP_HOLD_CNT_CS_SETUP_CNT_OFS) & SPI_CS_SETUP_HOLD_CNT_CS_SETUP_CNT_MASK)
                                           +((cs_hold_cnt<<SPI_CS_SETUP_HOLD_CNT_CS_HOLD_CNT_OFS) & SPI_CS_SETUP_HOLD_CNT_CS_HOLD_CNT_MASK);
}

static inline void SPI_SCLK_CTRL_WRITE(SPI_REGS_s * registers, uint32_t sclk_removal) {
    registers->SCLK_CTRL.packed_w = ((sclk_removal<<SPI_SCLK_CTRL_SCLK_REMOVAL_OFS) & SPI_SCLK_CTRL_SCLK_REMOVAL_MASK);
}

static inline void SPI_QSPI_CTRL_WRITE(SPI_REGS_s * registers, uint32_t qspi_first, uint32_t nrml_spi_frames_in_qspi, uint32_t frames_in_qspi, uint32_t frames_in_wmode_in_qspi) {
    registers->QSPI_CTRL.packed_w = ((qspi_first<<SPI_QSPI_CTRL_QSPI_FIRST_OFS) & SPI_QSPI_CTRL_QSPI_FIRST_MASK)
                                   +((nrml_spi_frames_in_qspi<<SPI_QSPI_CTRL_NRML_SPI_FRAMES_IN_QSPI_OFS) & SPI_QSPI_CTRL_NRML_SPI_FRAMES_IN_QSPI_MASK)
                                   +((frames_in_qspi<<SPI_QSPI_CTRL_FRAMES_IN_QSPI_OFS) & SPI_QSPI_CTRL_FRAMES_IN_QSPI_MASK)
                                   +((frames_in_wmode_in_qspi<<SPI_QSPI_CTRL_FRAMES_IN_WMODE_IN_QSPI_OFS) & SPI_QSPI_CTRL_FRAMES_IN_WMODE_IN_QSPI_MASK);
}

static inline void SPI_DSPI_CTRL_WRITE(SPI_REGS_s * registers, uint32_t dspi_first, uint32_t nrml_spi_frames_in_dspi, uint32_t frames_in_dspi, uint32_t frames_in_wmode_in_dspi) {
    registers->DSPI_CTRL.packed_w = ((dspi_first<<SPI_DSPI_CTRL_DSPI_FIRST_OFS) & SPI_DSPI_CTRL_DSPI_FIRST_MASK)
                                   +((nrml_spi_frames_in_dspi<<SPI_DSPI_CTRL_NRML_SPI_FRAMES_IN_DSPI_OFS) & SPI_DSPI_CTRL_NRML_SPI_FRAMES_IN_DSPI_MASK)
                                   +((frames_in_dspi<<SPI_DSPI_CTRL_FRAMES_IN_DSPI_OFS) & SPI_DSPI_CTRL_FRAMES_IN_DSPI_MASK)
                                   +((frames_in_wmode_in_dspi<<SPI_DSPI_CTRL_FRAMES_IN_WMODE_IN_DSPI_OFS) & SPI_DSPI_CTRL_FRAMES_IN_WMODE_IN_DSPI_MASK);
}

static inline void SPI_TX_CTRL_WRITE(SPI_REGS_s * registers, uint32_t repeat_tx_data) {
    registers->TX_CTRL.packed_w = ((repeat_tx_data<<SPI_TX_CTRL_REPEAT_TX_DATA_OFS) & SPI_TX_CTRL_REPEAT_TX_DATA_MASK);
}

static inline void SPI_RX_CTRL_WRITE(SPI_REGS_s * registers, uint32_t receive_timeout, uint32_t ignore_rx_cnt, uint32_t dly_sample_on_rx) {
    registers->RX_CTRL.packed_w = ((receive_timeout<<SPI_RX_CTRL_RECEIVE_TIMEOUT_OFS) & SPI_RX_CTRL_RECEIVE_TIMEOUT_MASK)
                                 +((ignore_rx_cnt<<SPI_RX_CTRL_IGNORE_RX_CNT_OFS) & SPI_RX_CTRL_IGNORE_RX_CNT_MASK)
                                 +((dly_sample_on_rx<<SPI_RX_CTRL_DLY_SAMPLE_ON_RX_OFS) & SPI_RX_CTRL_DLY_SAMPLE_ON_RX_MASK);
}

static inline void SPI_INT_FIFO_LVL_SEL_WRITE(SPI_REGS_s * registers, uint32_t rx_fifo_lvl_int, uint32_t tx_fifo_lvl_int) {
    registers->INT_FIFO_LVL_SEL.packed_w = ((rx_fifo_lvl_int<<SPI_INT_FIFO_LVL_SEL_RX_FIFO_LVL_INT_OFS) & SPI_INT_FIFO_LVL_SEL_RX_FIFO_LVL_INT_MASK)
                                          +((tx_fifo_lvl_int<<SPI_INT_FIFO_LVL_SEL_TX_FIFO_LVL_INT_OFS) & SPI_INT_FIFO_LVL_SEL_TX_FIFO_LVL_INT_MASK);
}

static inline void SPI_TX_FIFO_N_WRITE(SPI_REGS_s * registers, uint32_t index, uint32_t tx_fifo) {
    registers->TX_FIFO[index].packed_w = ((tx_fifo<<SPI_TX_FIFO_TX_FIFO_OFS) & SPI_TX_FIFO_TX_FIFO_MASK);
}

static inline void SPI_DBG_CTRL_WRITE(SPI_REGS_s * registers, uint32_t stop_on_halt, uint32_t soft_stop) {
    registers->DBG_CTRL.packed_w = ((stop_on_halt<<SPI_DBG_CTRL_STOP_ON_HALT_OFS) & SPI_DBG_CTRL_STOP_ON_HALT_MASK)
                                  +((soft_stop<<SPI_DBG_CTRL_SOFT_STOP_OFS) & SPI_DBG_CTRL_SOFT_STOP_MASK);
}

static inline void SPI_INTR_EVENT_CLEAR(SPI_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_EVENT.packed_w = 1<<intr_idx;
}

static inline void SPI_INTR_EVENT_EN(SPI_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_EN.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
}

static inline void SPI_INTR_EVENT_DIS(SPI_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_EN.packed_w = (1<<(intr_idx+16));
}

static inline void SPI_INTR_TX_DMA_EN_WRITE(SPI_REGS_s * registers, uint32_t rx_fifo_overflow_tx_dma_en, uint32_t parity_error_tx_dma_en, uint32_t rx_timeout_tx_dma_en, uint32_t rx_fifo_trg_lvl_tx_dma_en, uint32_t tx_fifo_trg_lvl_tx_dma_en, uint32_t tx_fifo_empty_tx_dma_en, uint32_t idle_tx_dma_en, uint32_t rx_dma_done_tx_dma_en, uint32_t tx_dma_done_tx_dma_en, uint32_t tx_fifo_underflow_tx_dma_en, uint32_t rx_fifo_full_tx_dma_en) {
    registers->INTR_TX_DMA_EN.packed_w = ((rx_fifo_overflow_tx_dma_en<<SPI_INTR_TX_DMA_EN_RX_FIFO_OVERFLOW_TX_DMA_EN_OFS) & SPI_INTR_TX_DMA_EN_RX_FIFO_OVERFLOW_TX_DMA_EN_MASK)
                                        +((parity_error_tx_dma_en<<SPI_INTR_TX_DMA_EN_PARITY_ERROR_TX_DMA_EN_OFS) & SPI_INTR_TX_DMA_EN_PARITY_ERROR_TX_DMA_EN_MASK)
                                        +((rx_timeout_tx_dma_en<<SPI_INTR_TX_DMA_EN_RX_TIMEOUT_TX_DMA_EN_OFS) & SPI_INTR_TX_DMA_EN_RX_TIMEOUT_TX_DMA_EN_MASK)
                                        +((rx_fifo_trg_lvl_tx_dma_en<<SPI_INTR_TX_DMA_EN_RX_FIFO_TRG_LVL_TX_DMA_EN_OFS) & SPI_INTR_TX_DMA_EN_RX_FIFO_TRG_LVL_TX_DMA_EN_MASK)
                                        +((tx_fifo_trg_lvl_tx_dma_en<<SPI_INTR_TX_DMA_EN_TX_FIFO_TRG_LVL_TX_DMA_EN_OFS) & SPI_INTR_TX_DMA_EN_TX_FIFO_TRG_LVL_TX_DMA_EN_MASK)
                                        +((tx_fifo_empty_tx_dma_en<<SPI_INTR_TX_DMA_EN_TX_FIFO_EMPTY_TX_DMA_EN_OFS) & SPI_INTR_TX_DMA_EN_TX_FIFO_EMPTY_TX_DMA_EN_MASK)
                                        +((idle_tx_dma_en<<SPI_INTR_TX_DMA_EN_IDLE_TX_DMA_EN_OFS) & SPI_INTR_TX_DMA_EN_IDLE_TX_DMA_EN_MASK)
                                        +((rx_dma_done_tx_dma_en<<SPI_INTR_TX_DMA_EN_RX_DMA_DONE_TX_DMA_EN_OFS) & SPI_INTR_TX_DMA_EN_RX_DMA_DONE_TX_DMA_EN_MASK)
                                        +((tx_dma_done_tx_dma_en<<SPI_INTR_TX_DMA_EN_TX_DMA_DONE_TX_DMA_EN_OFS) & SPI_INTR_TX_DMA_EN_TX_DMA_DONE_TX_DMA_EN_MASK)
                                        +((tx_fifo_underflow_tx_dma_en<<SPI_INTR_TX_DMA_EN_TX_FIFO_UNDERFLOW_TX_DMA_EN_OFS) & SPI_INTR_TX_DMA_EN_TX_FIFO_UNDERFLOW_TX_DMA_EN_MASK)
                                        +((rx_fifo_full_tx_dma_en<<SPI_INTR_TX_DMA_EN_RX_FIFO_FULL_TX_DMA_EN_OFS) & SPI_INTR_TX_DMA_EN_RX_FIFO_FULL_TX_DMA_EN_MASK);
}

static inline void SPI_INTR_RX_DMA_EN_WRITE(SPI_REGS_s * registers, uint32_t rx_fifo_overflow_rx_dma_en, uint32_t parity_error_rx_dma_en, uint32_t rx_timeout_rx_dma_en, uint32_t rx_fifo_trg_lvl_rx_dma_en, uint32_t tx_fifo_trg_lvl_rx_dma_en, uint32_t tx_fifo_empty_rx_dma_en, uint32_t idle_rx_dma_en, uint32_t rx_dma_done_rx_dma_en, uint32_t tx_dma_done_rx_dma_en, uint32_t tx_fifo_underflow_rx_dma_en, uint32_t rx_fifo_full_rx_dma_en) {
    registers->INTR_RX_DMA_EN.packed_w = ((rx_fifo_overflow_rx_dma_en<<SPI_INTR_RX_DMA_EN_RX_FIFO_OVERFLOW_RX_DMA_EN_OFS) & SPI_INTR_RX_DMA_EN_RX_FIFO_OVERFLOW_RX_DMA_EN_MASK)
                                        +((parity_error_rx_dma_en<<SPI_INTR_RX_DMA_EN_PARITY_ERROR_RX_DMA_EN_OFS) & SPI_INTR_RX_DMA_EN_PARITY_ERROR_RX_DMA_EN_MASK)
                                        +((rx_timeout_rx_dma_en<<SPI_INTR_RX_DMA_EN_RX_TIMEOUT_RX_DMA_EN_OFS) & SPI_INTR_RX_DMA_EN_RX_TIMEOUT_RX_DMA_EN_MASK)
                                        +((rx_fifo_trg_lvl_rx_dma_en<<SPI_INTR_RX_DMA_EN_RX_FIFO_TRG_LVL_RX_DMA_EN_OFS) & SPI_INTR_RX_DMA_EN_RX_FIFO_TRG_LVL_RX_DMA_EN_MASK)
                                        +((tx_fifo_trg_lvl_rx_dma_en<<SPI_INTR_RX_DMA_EN_TX_FIFO_TRG_LVL_RX_DMA_EN_OFS) & SPI_INTR_RX_DMA_EN_TX_FIFO_TRG_LVL_RX_DMA_EN_MASK)
                                        +((tx_fifo_empty_rx_dma_en<<SPI_INTR_RX_DMA_EN_TX_FIFO_EMPTY_RX_DMA_EN_OFS) & SPI_INTR_RX_DMA_EN_TX_FIFO_EMPTY_RX_DMA_EN_MASK)
                                        +((idle_rx_dma_en<<SPI_INTR_RX_DMA_EN_IDLE_RX_DMA_EN_OFS) & SPI_INTR_RX_DMA_EN_IDLE_RX_DMA_EN_MASK)
                                        +((rx_dma_done_rx_dma_en<<SPI_INTR_RX_DMA_EN_RX_DMA_DONE_RX_DMA_EN_OFS) & SPI_INTR_RX_DMA_EN_RX_DMA_DONE_RX_DMA_EN_MASK)
                                        +((tx_dma_done_rx_dma_en<<SPI_INTR_RX_DMA_EN_TX_DMA_DONE_RX_DMA_EN_OFS) & SPI_INTR_RX_DMA_EN_TX_DMA_DONE_RX_DMA_EN_MASK)
                                        +((tx_fifo_underflow_rx_dma_en<<SPI_INTR_RX_DMA_EN_TX_FIFO_UNDERFLOW_RX_DMA_EN_OFS) & SPI_INTR_RX_DMA_EN_TX_FIFO_UNDERFLOW_RX_DMA_EN_MASK)
                                        +((rx_fifo_full_rx_dma_en<<SPI_INTR_RX_DMA_EN_RX_FIFO_FULL_RX_DMA_EN_OFS) & SPI_INTR_RX_DMA_EN_RX_FIFO_FULL_RX_DMA_EN_MASK);
}

static inline void SPI_INTR_NMI_WRITE(SPI_REGS_s * registers, uint32_t rx_fifo_overflow_nmi_en, uint32_t parity_error_nmi_en, uint32_t rx_timeout_nmi_en, uint32_t rx_fifo_trg_lvl_nmi_en, uint32_t tx_fifo_trg_lvl_nmi_en, uint32_t tx_fifo_empty_nmi_en, uint32_t idle_nmi_en, uint32_t rx_dma_done_nmi_en, uint32_t tx_dma_done_nmi_en, uint32_t tx_fifo_underflow_nmi_en, uint32_t rx_fifo_full_nmi_en) {
    registers->INTR_NMI.packed_w = ((rx_fifo_overflow_nmi_en<<SPI_INTR_NMI_RX_FIFO_OVERFLOW_NMI_EN_OFS) & SPI_INTR_NMI_RX_FIFO_OVERFLOW_NMI_EN_MASK)
                                  +((parity_error_nmi_en<<SPI_INTR_NMI_PARITY_ERROR_NMI_EN_OFS) & SPI_INTR_NMI_PARITY_ERROR_NMI_EN_MASK)
                                  +((rx_timeout_nmi_en<<SPI_INTR_NMI_RX_TIMEOUT_NMI_EN_OFS) & SPI_INTR_NMI_RX_TIMEOUT_NMI_EN_MASK)
                                  +((rx_fifo_trg_lvl_nmi_en<<SPI_INTR_NMI_RX_FIFO_TRG_LVL_NMI_EN_OFS) & SPI_INTR_NMI_RX_FIFO_TRG_LVL_NMI_EN_MASK)
                                  +((tx_fifo_trg_lvl_nmi_en<<SPI_INTR_NMI_TX_FIFO_TRG_LVL_NMI_EN_OFS) & SPI_INTR_NMI_TX_FIFO_TRG_LVL_NMI_EN_MASK)
                                  +((tx_fifo_empty_nmi_en<<SPI_INTR_NMI_TX_FIFO_EMPTY_NMI_EN_OFS) & SPI_INTR_NMI_TX_FIFO_EMPTY_NMI_EN_MASK)
                                  +((idle_nmi_en<<SPI_INTR_NMI_IDLE_NMI_EN_OFS) & SPI_INTR_NMI_IDLE_NMI_EN_MASK)
                                  +((rx_dma_done_nmi_en<<SPI_INTR_NMI_RX_DMA_DONE_NMI_EN_OFS) & SPI_INTR_NMI_RX_DMA_DONE_NMI_EN_MASK)
                                  +((tx_dma_done_nmi_en<<SPI_INTR_NMI_TX_DMA_DONE_NMI_EN_OFS) & SPI_INTR_NMI_TX_DMA_DONE_NMI_EN_MASK)
                                  +((tx_fifo_underflow_nmi_en<<SPI_INTR_NMI_TX_FIFO_UNDERFLOW_NMI_EN_OFS) & SPI_INTR_NMI_TX_FIFO_UNDERFLOW_NMI_EN_MASK)
                                  +((rx_fifo_full_nmi_en<<SPI_INTR_NMI_RX_FIFO_FULL_NMI_EN_OFS) & SPI_INTR_NMI_RX_FIFO_FULL_NMI_EN_MASK);
}

static inline void SPI_INTR_SW_SET(SPI_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_SW_SET.packed_w = 1<<intr_idx;
}

static inline void SPI_SPARE_CTRL_WRITE(SPI_REGS_s * registers, uint32_t cfg0, uint32_t cfg1) {
    registers->SPARE_CTRL.packed_w = ((cfg0<<SPI_SPARE_CTRL_CFG0_OFS) & SPI_SPARE_CTRL_CFG0_MASK)
                                    +((cfg1<<SPI_SPARE_CTRL_CFG1_OFS) & SPI_SPARE_CTRL_CFG1_MASK);
}

