#include "I2C_REGS.h"

static inline void I2C_DESC_WRITE(I2C_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<I2C_DESC_MODULE_TYPE_OFS)&I2C_DESC_MODULE_TYPE_MASK) + ((modue_subtype<<I2C_DESC_MODUE_SUBTYPE_OFS)&I2C_DESC_MODUE_SUBTYPE_MASK) + ((major_rev<<I2C_DESC_MAJOR_REV_OFS)&I2C_DESC_MAJOR_REV_MASK) + ((minor_rev<<I2C_DESC_MINOR_REV_OFS)&I2C_DESC_MINOR_REV_MASK);
}

static inline void I2C_PWR_EN_WRITE(I2C_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<I2C_PWR_EN_PWR_EN_OFS)&I2C_PWR_EN_PWR_EN_MASK) + ((pwr_en_key<<I2C_PWR_EN_PWR_EN_KEY_OFS)&I2C_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void I2C_RST_CTRL_WRITE(I2C_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<I2C_RST_CTRL_RST_OFS)&I2C_RST_CTRL_RST_MASK) + ((rst_sts_clr<<I2C_RST_CTRL_RST_STS_CLR_OFS)&I2C_RST_CTRL_RST_STS_CLR_MASK) + ((rst_key<<I2C_RST_CTRL_RST_KEY_OFS)&I2C_RST_CTRL_RST_KEY_MASK);
}

static inline void I2C_RST_STS_WRITE(I2C_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<I2C_RST_STS_RST_STS_OFS)&I2C_RST_STS_RST_STS_MASK);
}

static inline void I2C_CLK_CTRL_WRITE(I2C_REGS_s * registers, uint32_t en_async_clk_req, uint32_t clksel, uint32_t clkdiv, uint32_t hold_cnt, uint32_t setup_cnt) {
    registers->CLK_CTRL.packed_w =  + ((en_async_clk_req<<I2C_CLK_CTRL_EN_ASYNC_CLK_REQ_OFS)&I2C_CLK_CTRL_EN_ASYNC_CLK_REQ_MASK) + ((clksel<<I2C_CLK_CTRL_CLKSEL_OFS)&I2C_CLK_CTRL_CLKSEL_MASK) + ((clkdiv<<I2C_CLK_CTRL_CLKDIV_OFS)&I2C_CLK_CTRL_CLKDIV_MASK) + ((hold_cnt<<I2C_CLK_CTRL_HOLD_CNT_OFS)&I2C_CLK_CTRL_HOLD_CNT_MASK) + ((setup_cnt<<I2C_CLK_CTRL_SETUP_CNT_OFS)&I2C_CLK_CTRL_SETUP_CNT_MASK);
}

static inline void I2C_DBG_CTRL_WRITE(I2C_REGS_s * registers, uint32_t run_on_halt, uint32_t soft_stop) {
    registers->DBG_CTRL.packed_w =  + ((run_on_halt<<I2C_DBG_CTRL_RUN_ON_HALT_OFS)&I2C_DBG_CTRL_RUN_ON_HALT_MASK) + ((soft_stop<<I2C_DBG_CTRL_SOFT_STOP_OFS)&I2C_DBG_CTRL_SOFT_STOP_MASK);
}

static inline void I2C_MASTER_SCL_GEN_WRITE(I2C_REGS_s * registers, uint32_t mst_scl_cnt_high_val, uint32_t mst_scl_cnt_low_val) {
    registers->MASTER_SCL_GEN.packed_w =  + ((mst_scl_cnt_high_val<<I2C_MASTER_SCL_GEN_MST_SCL_CNT_HIGH_VAL_OFS)&I2C_MASTER_SCL_GEN_MST_SCL_CNT_HIGH_VAL_MASK) + ((mst_scl_cnt_low_val<<I2C_MASTER_SCL_GEN_MST_SCL_CNT_LOW_VAL_OFS)&I2C_MASTER_SCL_GEN_MST_SCL_CNT_LOW_VAL_MASK);
}

static inline void I2C_MASTER_TIMING_CONSTRAINT_WRITE(I2C_REGS_s * registers, uint32_t mst_scl_start_cnt, uint32_t mst_sda_stop_cnt, uint32_t mst_stop_start_buffer_cnt, uint32_t mst_restart_setup_cnt) {
    registers->MASTER_TIMING_CONSTRAINT.packed_w =  + ((mst_scl_start_cnt<<I2C_MASTER_TIMING_CONSTRAINT_MST_SCL_START_CNT_OFS)&I2C_MASTER_TIMING_CONSTRAINT_MST_SCL_START_CNT_MASK) + ((mst_sda_stop_cnt<<I2C_MASTER_TIMING_CONSTRAINT_MST_SDA_STOP_CNT_OFS)&I2C_MASTER_TIMING_CONSTRAINT_MST_SDA_STOP_CNT_MASK) + ((mst_stop_start_buffer_cnt<<I2C_MASTER_TIMING_CONSTRAINT_MST_STOP_START_BUFFER_CNT_OFS)&I2C_MASTER_TIMING_CONSTRAINT_MST_STOP_START_BUFFER_CNT_MASK) + ((mst_restart_setup_cnt<<I2C_MASTER_TIMING_CONSTRAINT_MST_RESTART_SETUP_CNT_OFS)&I2C_MASTER_TIMING_CONSTRAINT_MST_RESTART_SETUP_CNT_MASK);
}

static inline void I2C_MASTER_CLKSTRETCH_CNT_WRITE(I2C_REGS_s * registers, uint32_t mst_max_clkstretch_cnt) {
    registers->MASTER_CLKSTRETCH_CNT.packed_w =  + ((mst_max_clkstretch_cnt<<I2C_MASTER_CLKSTRETCH_CNT_MST_MAX_CLKSTRETCH_CNT_OFS)&I2C_MASTER_CLKSTRETCH_CNT_MST_MAX_CLKSTRETCH_CNT_MASK);
}

static inline void I2C_SLAVE_CLKSTRETCH_CNT_WRITE(I2C_REGS_s * registers, uint32_t slv_max_clkstretch_cnt) {
    registers->SLAVE_CLKSTRETCH_CNT.packed_w =  + ((slv_max_clkstretch_cnt<<I2C_SLAVE_CLKSTRETCH_CNT_SLV_MAX_CLKSTRETCH_CNT_OFS)&I2C_SLAVE_CLKSTRETCH_CNT_SLV_MAX_CLKSTRETCH_CNT_MASK);
}

static inline void I2C_SMBUS_TIMEOUT_CNT_WRITE(I2C_REGS_s * registers, uint32_t smbus_timeout_cnt) {
    registers->SMBUS_TIMEOUT_CNT.packed_w =  + ((smbus_timeout_cnt<<I2C_SMBUS_TIMEOUT_CNT_SMBUS_TIMEOUT_CNT_OFS)&I2C_SMBUS_TIMEOUT_CNT_SMBUS_TIMEOUT_CNT_MASK);
}

static inline void I2C_INTR_STS_WRITE(I2C_REGS_s * registers, uint32_t intr_first) {
    registers->INTR_STS.packed_w =  + ((intr_first<<I2C_INTR_STS_INTR_FIRST_OFS)&I2C_INTR_STS_INTR_FIRST_MASK);
}

static inline void I2C_INTR_EVENT_WRITE(I2C_REGS_s * registers, uint32_t arb_lost, uint32_t slv_gencall_intr, uint32_t slv_start, uint32_t slv_stop, uint32_t tx_done, uint32_t rx_done, uint32_t smbus_timeout, uint32_t clkstretch_timeout, uint32_t pec_err, uint32_t txfifo_empty, uint32_t rxfifo_full, uint32_t txfifo_half_full, uint32_t rxfifo_half_full, uint32_t mst_stop_intr, uint32_t mst_start_intr, uint32_t mst_nack, uint32_t dma_done_rx, uint32_t dma_done_tx, uint32_t txfifo_almost_empty_intr, uint32_t rxfifo_almost_full_intr) {
    registers->INTR_EVENT.packed_w =  + ((arb_lost<<I2C_INTR_EVENT_ARB_LOST_OFS)&I2C_INTR_EVENT_ARB_LOST_MASK) + ((slv_gencall_intr<<I2C_INTR_EVENT_SLV_GENCALL_INTR_OFS)&I2C_INTR_EVENT_SLV_GENCALL_INTR_MASK) + ((slv_start<<I2C_INTR_EVENT_SLV_START_OFS)&I2C_INTR_EVENT_SLV_START_MASK) + ((slv_stop<<I2C_INTR_EVENT_SLV_STOP_OFS)&I2C_INTR_EVENT_SLV_STOP_MASK) + ((tx_done<<I2C_INTR_EVENT_TX_DONE_OFS)&I2C_INTR_EVENT_TX_DONE_MASK) + ((rx_done<<I2C_INTR_EVENT_RX_DONE_OFS)&I2C_INTR_EVENT_RX_DONE_MASK) + ((smbus_timeout<<I2C_INTR_EVENT_SMBUS_TIMEOUT_OFS)&I2C_INTR_EVENT_SMBUS_TIMEOUT_MASK) + ((clkstretch_timeout<<I2C_INTR_EVENT_CLKSTRETCH_TIMEOUT_OFS)&I2C_INTR_EVENT_CLKSTRETCH_TIMEOUT_MASK) + ((pec_err<<I2C_INTR_EVENT_PEC_ERR_OFS)&I2C_INTR_EVENT_PEC_ERR_MASK) + ((txfifo_empty<<I2C_INTR_EVENT_TXFIFO_EMPTY_OFS)&I2C_INTR_EVENT_TXFIFO_EMPTY_MASK) + ((rxfifo_full<<I2C_INTR_EVENT_RXFIFO_FULL_OFS)&I2C_INTR_EVENT_RXFIFO_FULL_MASK) + ((txfifo_half_full<<I2C_INTR_EVENT_TXFIFO_HALF_FULL_OFS)&I2C_INTR_EVENT_TXFIFO_HALF_FULL_MASK) + ((rxfifo_half_full<<I2C_INTR_EVENT_RXFIFO_HALF_FULL_OFS)&I2C_INTR_EVENT_RXFIFO_HALF_FULL_MASK) + ((mst_stop_intr<<I2C_INTR_EVENT_MST_STOP_INTR_OFS)&I2C_INTR_EVENT_MST_STOP_INTR_MASK) + ((mst_start_intr<<I2C_INTR_EVENT_MST_START_INTR_OFS)&I2C_INTR_EVENT_MST_START_INTR_MASK) + ((mst_nack<<I2C_INTR_EVENT_MST_NACK_OFS)&I2C_INTR_EVENT_MST_NACK_MASK) + ((dma_done_rx<<I2C_INTR_EVENT_DMA_DONE_RX_OFS)&I2C_INTR_EVENT_DMA_DONE_RX_MASK) + ((dma_done_tx<<I2C_INTR_EVENT_DMA_DONE_TX_OFS)&I2C_INTR_EVENT_DMA_DONE_TX_MASK) + ((txfifo_almost_empty_intr<<I2C_INTR_EVENT_TXFIFO_ALMOST_EMPTY_INTR_OFS)&I2C_INTR_EVENT_TXFIFO_ALMOST_EMPTY_INTR_MASK) + ((rxfifo_almost_full_intr<<I2C_INTR_EVENT_RXFIFO_ALMOST_FULL_INTR_OFS)&I2C_INTR_EVENT_RXFIFO_ALMOST_FULL_INTR_MASK);
}

static inline void I2C_INTR_EN_0_WRITE(I2C_REGS_s * registers, uint32_t arb_lost_en, uint32_t slv_gencall_intr_en, uint32_t slv_start_en, uint32_t slv_stop_en, uint32_t tx_done_en, uint32_t rx_done_en, uint32_t smbus_timeout_en, uint32_t clkstretch_timeout_en, uint32_t pec_err_en, uint32_t txfifo_empty_en, uint32_t rxfifo_full_en, uint32_t txfifo_half_full_en, uint32_t rxfifo_half_full_en, uint32_t mst_stop_intr_en, uint32_t mst_start_intr_en, uint32_t mst_nack_en) {
    registers->INTR_EN_0.packed_w =  + ((arb_lost_en<<I2C_INTR_EN_0_ARB_LOST_EN_OFS)&I2C_INTR_EN_0_ARB_LOST_EN_MASK) + ((slv_gencall_intr_en<<I2C_INTR_EN_0_SLV_GENCALL_INTR_EN_OFS)&I2C_INTR_EN_0_SLV_GENCALL_INTR_EN_MASK) + ((slv_start_en<<I2C_INTR_EN_0_SLV_START_EN_OFS)&I2C_INTR_EN_0_SLV_START_EN_MASK) + ((slv_stop_en<<I2C_INTR_EN_0_SLV_STOP_EN_OFS)&I2C_INTR_EN_0_SLV_STOP_EN_MASK) + ((tx_done_en<<I2C_INTR_EN_0_TX_DONE_EN_OFS)&I2C_INTR_EN_0_TX_DONE_EN_MASK) + ((rx_done_en<<I2C_INTR_EN_0_RX_DONE_EN_OFS)&I2C_INTR_EN_0_RX_DONE_EN_MASK) + ((smbus_timeout_en<<I2C_INTR_EN_0_SMBUS_TIMEOUT_EN_OFS)&I2C_INTR_EN_0_SMBUS_TIMEOUT_EN_MASK) + ((clkstretch_timeout_en<<I2C_INTR_EN_0_CLKSTRETCH_TIMEOUT_EN_OFS)&I2C_INTR_EN_0_CLKSTRETCH_TIMEOUT_EN_MASK) + ((pec_err_en<<I2C_INTR_EN_0_PEC_ERR_EN_OFS)&I2C_INTR_EN_0_PEC_ERR_EN_MASK) + ((txfifo_empty_en<<I2C_INTR_EN_0_TXFIFO_EMPTY_EN_OFS)&I2C_INTR_EN_0_TXFIFO_EMPTY_EN_MASK) + ((rxfifo_full_en<<I2C_INTR_EN_0_RXFIFO_FULL_EN_OFS)&I2C_INTR_EN_0_RXFIFO_FULL_EN_MASK) + ((txfifo_half_full_en<<I2C_INTR_EN_0_TXFIFO_HALF_FULL_EN_OFS)&I2C_INTR_EN_0_TXFIFO_HALF_FULL_EN_MASK) + ((rxfifo_half_full_en<<I2C_INTR_EN_0_RXFIFO_HALF_FULL_EN_OFS)&I2C_INTR_EN_0_RXFIFO_HALF_FULL_EN_MASK) + ((mst_stop_intr_en<<I2C_INTR_EN_0_MST_STOP_INTR_EN_OFS)&I2C_INTR_EN_0_MST_STOP_INTR_EN_MASK) + ((mst_start_intr_en<<I2C_INTR_EN_0_MST_START_INTR_EN_OFS)&I2C_INTR_EN_0_MST_START_INTR_EN_MASK) + ((mst_nack_en<<I2C_INTR_EN_0_MST_NACK_EN_OFS)&I2C_INTR_EN_0_MST_NACK_EN_MASK);
}

static inline void I2C_INTR_EN_1_WRITE(I2C_REGS_s * registers, uint32_t dma_done_rx_en, uint32_t dma_done_tx_en, uint32_t txfifo_almost_empty_intr_en, uint32_t rxfifo_almost_full_intr_en) {
    registers->INTR_EN_1.packed_w =  + ((dma_done_rx_en<<I2C_INTR_EN_1_DMA_DONE_RX_EN_OFS)&I2C_INTR_EN_1_DMA_DONE_RX_EN_MASK) + ((dma_done_tx_en<<I2C_INTR_EN_1_DMA_DONE_TX_EN_OFS)&I2C_INTR_EN_1_DMA_DONE_TX_EN_MASK) + ((txfifo_almost_empty_intr_en<<I2C_INTR_EN_1_TXFIFO_ALMOST_EMPTY_INTR_EN_OFS)&I2C_INTR_EN_1_TXFIFO_ALMOST_EMPTY_INTR_EN_MASK) + ((rxfifo_almost_full_intr_en<<I2C_INTR_EN_1_RXFIFO_ALMOST_FULL_INTR_EN_OFS)&I2C_INTR_EN_1_RXFIFO_ALMOST_FULL_INTR_EN_MASK);
}

static inline void I2C_INTR_NMI_EN_0_WRITE(I2C_REGS_s * registers, uint32_t arb_lost_nmi_en, uint32_t slv_gencall_intr_nmi_en, uint32_t slv_start_nmi_en, uint32_t slv_stop_nmi_en, uint32_t tx_done_nmi_en, uint32_t rx_done_nmi_en, uint32_t smbus_timeout_nmi_en, uint32_t clkstretch_timeout_nmi_en, uint32_t pec_err_nmi_en, uint32_t txfifo_empty_nmi_en, uint32_t rxfifo_full_nmi_en, uint32_t txfifo_half_full_nmi_en, uint32_t rxfifo_half_full_nmi_en, uint32_t mst_stop_intr_nmi_en, uint32_t mst_start_intr_nmi_en, uint32_t mst_nack_nmi_en) {
    registers->INTR_NMI_EN_0.packed_w =  + ((arb_lost_nmi_en<<I2C_INTR_NMI_EN_0_ARB_LOST_NMI_EN_OFS)&I2C_INTR_NMI_EN_0_ARB_LOST_NMI_EN_MASK) + ((slv_gencall_intr_nmi_en<<I2C_INTR_NMI_EN_0_SLV_GENCALL_INTR_NMI_EN_OFS)&I2C_INTR_NMI_EN_0_SLV_GENCALL_INTR_NMI_EN_MASK) + ((slv_start_nmi_en<<I2C_INTR_NMI_EN_0_SLV_START_NMI_EN_OFS)&I2C_INTR_NMI_EN_0_SLV_START_NMI_EN_MASK) + ((slv_stop_nmi_en<<I2C_INTR_NMI_EN_0_SLV_STOP_NMI_EN_OFS)&I2C_INTR_NMI_EN_0_SLV_STOP_NMI_EN_MASK) + ((tx_done_nmi_en<<I2C_INTR_NMI_EN_0_TX_DONE_NMI_EN_OFS)&I2C_INTR_NMI_EN_0_TX_DONE_NMI_EN_MASK) + ((rx_done_nmi_en<<I2C_INTR_NMI_EN_0_RX_DONE_NMI_EN_OFS)&I2C_INTR_NMI_EN_0_RX_DONE_NMI_EN_MASK) + ((smbus_timeout_nmi_en<<I2C_INTR_NMI_EN_0_SMBUS_TIMEOUT_NMI_EN_OFS)&I2C_INTR_NMI_EN_0_SMBUS_TIMEOUT_NMI_EN_MASK) + ((clkstretch_timeout_nmi_en<<I2C_INTR_NMI_EN_0_CLKSTRETCH_TIMEOUT_NMI_EN_OFS)&I2C_INTR_NMI_EN_0_CLKSTRETCH_TIMEOUT_NMI_EN_MASK) + ((pec_err_nmi_en<<I2C_INTR_NMI_EN_0_PEC_ERR_NMI_EN_OFS)&I2C_INTR_NMI_EN_0_PEC_ERR_NMI_EN_MASK) + ((txfifo_empty_nmi_en<<I2C_INTR_NMI_EN_0_TXFIFO_EMPTY_NMI_EN_OFS)&I2C_INTR_NMI_EN_0_TXFIFO_EMPTY_NMI_EN_MASK) + ((rxfifo_full_nmi_en<<I2C_INTR_NMI_EN_0_RXFIFO_FULL_NMI_EN_OFS)&I2C_INTR_NMI_EN_0_RXFIFO_FULL_NMI_EN_MASK) + ((txfifo_half_full_nmi_en<<I2C_INTR_NMI_EN_0_TXFIFO_HALF_FULL_NMI_EN_OFS)&I2C_INTR_NMI_EN_0_TXFIFO_HALF_FULL_NMI_EN_MASK) + ((rxfifo_half_full_nmi_en<<I2C_INTR_NMI_EN_0_RXFIFO_HALF_FULL_NMI_EN_OFS)&I2C_INTR_NMI_EN_0_RXFIFO_HALF_FULL_NMI_EN_MASK) + ((mst_stop_intr_nmi_en<<I2C_INTR_NMI_EN_0_MST_STOP_INTR_NMI_EN_OFS)&I2C_INTR_NMI_EN_0_MST_STOP_INTR_NMI_EN_MASK) + ((mst_start_intr_nmi_en<<I2C_INTR_NMI_EN_0_MST_START_INTR_NMI_EN_OFS)&I2C_INTR_NMI_EN_0_MST_START_INTR_NMI_EN_MASK) + ((mst_nack_nmi_en<<I2C_INTR_NMI_EN_0_MST_NACK_NMI_EN_OFS)&I2C_INTR_NMI_EN_0_MST_NACK_NMI_EN_MASK);
}

static inline void I2C_INTR_NMI_EN_1_WRITE(I2C_REGS_s * registers, uint32_t dma_done_rx_nmi_en, uint32_t dma_done_tx_nmi_en, uint32_t txfifo_almost_empty_intr_nmi_en, uint32_t rxfifo_almost_full_intr_nmi_en) {
    registers->INTR_NMI_EN_1.packed_w =  + ((dma_done_rx_nmi_en<<I2C_INTR_NMI_EN_1_DMA_DONE_RX_NMI_EN_OFS)&I2C_INTR_NMI_EN_1_DMA_DONE_RX_NMI_EN_MASK) + ((dma_done_tx_nmi_en<<I2C_INTR_NMI_EN_1_DMA_DONE_TX_NMI_EN_OFS)&I2C_INTR_NMI_EN_1_DMA_DONE_TX_NMI_EN_MASK) + ((txfifo_almost_empty_intr_nmi_en<<I2C_INTR_NMI_EN_1_TXFIFO_ALMOST_EMPTY_INTR_NMI_EN_OFS)&I2C_INTR_NMI_EN_1_TXFIFO_ALMOST_EMPTY_INTR_NMI_EN_MASK) + ((rxfifo_almost_full_intr_nmi_en<<I2C_INTR_NMI_EN_1_RXFIFO_ALMOST_FULL_INTR_NMI_EN_OFS)&I2C_INTR_NMI_EN_1_RXFIFO_ALMOST_FULL_INTR_NMI_EN_MASK);
}

static inline void I2C_RX_DMA_EVENT_EN_0_WRITE(I2C_REGS_s * registers, uint32_t rx_dma_arb_lost_en, uint32_t rx_dma_slv_gencall_intr_en, uint32_t rx_dma_slv_start_en, uint32_t rx_dma_slv_stop_en, uint32_t rx_dma_tx_done_en, uint32_t rx_dma_rx_done_en, uint32_t rx_dma_smbus_timeout_en, uint32_t rx_dma_clkstretch_timeout_en, uint32_t rx_dma_pec_err_en, uint32_t rx_dma_txfifo_empty_en, uint32_t rx_dma_rxfifo_full_en, uint32_t rx_dma_txfifo_half_full_en, uint32_t rx_dma_rxfifo_half_full_en, uint32_t rx_dma_mst_stop_intr_en, uint32_t rx_dma_mst_start_intr_en, uint32_t rx_dma_mst_nack_en) {
    registers->RX_DMA_EVENT_EN_0.packed_w =  + ((rx_dma_arb_lost_en<<I2C_RX_DMA_EVENT_EN_0_RX_DMA_ARB_LOST_EN_OFS)&I2C_RX_DMA_EVENT_EN_0_RX_DMA_ARB_LOST_EN_MASK) + ((rx_dma_slv_gencall_intr_en<<I2C_RX_DMA_EVENT_EN_0_RX_DMA_SLV_GENCALL_INTR_EN_OFS)&I2C_RX_DMA_EVENT_EN_0_RX_DMA_SLV_GENCALL_INTR_EN_MASK) + ((rx_dma_slv_start_en<<I2C_RX_DMA_EVENT_EN_0_RX_DMA_SLV_START_EN_OFS)&I2C_RX_DMA_EVENT_EN_0_RX_DMA_SLV_START_EN_MASK) + ((rx_dma_slv_stop_en<<I2C_RX_DMA_EVENT_EN_0_RX_DMA_SLV_STOP_EN_OFS)&I2C_RX_DMA_EVENT_EN_0_RX_DMA_SLV_STOP_EN_MASK) + ((rx_dma_tx_done_en<<I2C_RX_DMA_EVENT_EN_0_RX_DMA_TX_DONE_EN_OFS)&I2C_RX_DMA_EVENT_EN_0_RX_DMA_TX_DONE_EN_MASK) + ((rx_dma_rx_done_en<<I2C_RX_DMA_EVENT_EN_0_RX_DMA_RX_DONE_EN_OFS)&I2C_RX_DMA_EVENT_EN_0_RX_DMA_RX_DONE_EN_MASK) + ((rx_dma_smbus_timeout_en<<I2C_RX_DMA_EVENT_EN_0_RX_DMA_SMBUS_TIMEOUT_EN_OFS)&I2C_RX_DMA_EVENT_EN_0_RX_DMA_SMBUS_TIMEOUT_EN_MASK) + ((rx_dma_clkstretch_timeout_en<<I2C_RX_DMA_EVENT_EN_0_RX_DMA_CLKSTRETCH_TIMEOUT_EN_OFS)&I2C_RX_DMA_EVENT_EN_0_RX_DMA_CLKSTRETCH_TIMEOUT_EN_MASK) + ((rx_dma_pec_err_en<<I2C_RX_DMA_EVENT_EN_0_RX_DMA_PEC_ERR_EN_OFS)&I2C_RX_DMA_EVENT_EN_0_RX_DMA_PEC_ERR_EN_MASK) + ((rx_dma_txfifo_empty_en<<I2C_RX_DMA_EVENT_EN_0_RX_DMA_TXFIFO_EMPTY_EN_OFS)&I2C_RX_DMA_EVENT_EN_0_RX_DMA_TXFIFO_EMPTY_EN_MASK) + ((rx_dma_rxfifo_full_en<<I2C_RX_DMA_EVENT_EN_0_RX_DMA_RXFIFO_FULL_EN_OFS)&I2C_RX_DMA_EVENT_EN_0_RX_DMA_RXFIFO_FULL_EN_MASK) + ((rx_dma_txfifo_half_full_en<<I2C_RX_DMA_EVENT_EN_0_RX_DMA_TXFIFO_HALF_FULL_EN_OFS)&I2C_RX_DMA_EVENT_EN_0_RX_DMA_TXFIFO_HALF_FULL_EN_MASK) + ((rx_dma_rxfifo_half_full_en<<I2C_RX_DMA_EVENT_EN_0_RX_DMA_RXFIFO_HALF_FULL_EN_OFS)&I2C_RX_DMA_EVENT_EN_0_RX_DMA_RXFIFO_HALF_FULL_EN_MASK) + ((rx_dma_mst_stop_intr_en<<I2C_RX_DMA_EVENT_EN_0_RX_DMA_MST_STOP_INTR_EN_OFS)&I2C_RX_DMA_EVENT_EN_0_RX_DMA_MST_STOP_INTR_EN_MASK) + ((rx_dma_mst_start_intr_en<<I2C_RX_DMA_EVENT_EN_0_RX_DMA_MST_START_INTR_EN_OFS)&I2C_RX_DMA_EVENT_EN_0_RX_DMA_MST_START_INTR_EN_MASK) + ((rx_dma_mst_nack_en<<I2C_RX_DMA_EVENT_EN_0_RX_DMA_MST_NACK_EN_OFS)&I2C_RX_DMA_EVENT_EN_0_RX_DMA_MST_NACK_EN_MASK);
}

static inline void I2C_RX_DMA_EVENT_EN_1_WRITE(I2C_REGS_s * registers, uint32_t rx_dma_dma_done_rx_en, uint32_t rx_dma_dma_done_tx_en, uint32_t rx_dma_txfifo_almost_empty_intr_en, uint32_t rx_dma_rxfifo_almost_full_intr_en) {
    registers->RX_DMA_EVENT_EN_1.packed_w =  + ((rx_dma_dma_done_rx_en<<I2C_RX_DMA_EVENT_EN_1_RX_DMA_DMA_DONE_RX_EN_OFS)&I2C_RX_DMA_EVENT_EN_1_RX_DMA_DMA_DONE_RX_EN_MASK) + ((rx_dma_dma_done_tx_en<<I2C_RX_DMA_EVENT_EN_1_RX_DMA_DMA_DONE_TX_EN_OFS)&I2C_RX_DMA_EVENT_EN_1_RX_DMA_DMA_DONE_TX_EN_MASK) + ((rx_dma_txfifo_almost_empty_intr_en<<I2C_RX_DMA_EVENT_EN_1_RX_DMA_TXFIFO_ALMOST_EMPTY_INTR_EN_OFS)&I2C_RX_DMA_EVENT_EN_1_RX_DMA_TXFIFO_ALMOST_EMPTY_INTR_EN_MASK) + ((rx_dma_rxfifo_almost_full_intr_en<<I2C_RX_DMA_EVENT_EN_1_RX_DMA_RXFIFO_ALMOST_FULL_INTR_EN_OFS)&I2C_RX_DMA_EVENT_EN_1_RX_DMA_RXFIFO_ALMOST_FULL_INTR_EN_MASK);
}

static inline void I2C_TX_DMA_EVENT_EN_0_WRITE(I2C_REGS_s * registers, uint32_t tx_dma_arb_lost_en, uint32_t tx_dma_slv_gencall_intr_en, uint32_t tx_dma_slv_start_en, uint32_t tx_dma_slv_stop_en, uint32_t tx_dma_tx_done_en, uint32_t tx_dma_rx_done_en, uint32_t tx_dma_smbus_timeout_en, uint32_t tx_dma_clkstretch_timeout_en, uint32_t tx_dma_pec_err_en, uint32_t tx_dma_txfifo_empty_en, uint32_t tx_dma_rxfifo_full_en, uint32_t tx_dma_txfifo_half_full_en, uint32_t tx_dma_rxfifo_half_full_en, uint32_t tx_dma_mst_stop_intr_en, uint32_t tx_dma_mst_start_intr_en, uint32_t tx_dma_mst_nack_en) {
    registers->TX_DMA_EVENT_EN_0.packed_w =  + ((tx_dma_arb_lost_en<<I2C_TX_DMA_EVENT_EN_0_TX_DMA_ARB_LOST_EN_OFS)&I2C_TX_DMA_EVENT_EN_0_TX_DMA_ARB_LOST_EN_MASK) + ((tx_dma_slv_gencall_intr_en<<I2C_TX_DMA_EVENT_EN_0_TX_DMA_SLV_GENCALL_INTR_EN_OFS)&I2C_TX_DMA_EVENT_EN_0_TX_DMA_SLV_GENCALL_INTR_EN_MASK) + ((tx_dma_slv_start_en<<I2C_TX_DMA_EVENT_EN_0_TX_DMA_SLV_START_EN_OFS)&I2C_TX_DMA_EVENT_EN_0_TX_DMA_SLV_START_EN_MASK) + ((tx_dma_slv_stop_en<<I2C_TX_DMA_EVENT_EN_0_TX_DMA_SLV_STOP_EN_OFS)&I2C_TX_DMA_EVENT_EN_0_TX_DMA_SLV_STOP_EN_MASK) + ((tx_dma_tx_done_en<<I2C_TX_DMA_EVENT_EN_0_TX_DMA_TX_DONE_EN_OFS)&I2C_TX_DMA_EVENT_EN_0_TX_DMA_TX_DONE_EN_MASK) + ((tx_dma_rx_done_en<<I2C_TX_DMA_EVENT_EN_0_TX_DMA_RX_DONE_EN_OFS)&I2C_TX_DMA_EVENT_EN_0_TX_DMA_RX_DONE_EN_MASK) + ((tx_dma_smbus_timeout_en<<I2C_TX_DMA_EVENT_EN_0_TX_DMA_SMBUS_TIMEOUT_EN_OFS)&I2C_TX_DMA_EVENT_EN_0_TX_DMA_SMBUS_TIMEOUT_EN_MASK) + ((tx_dma_clkstretch_timeout_en<<I2C_TX_DMA_EVENT_EN_0_TX_DMA_CLKSTRETCH_TIMEOUT_EN_OFS)&I2C_TX_DMA_EVENT_EN_0_TX_DMA_CLKSTRETCH_TIMEOUT_EN_MASK) + ((tx_dma_pec_err_en<<I2C_TX_DMA_EVENT_EN_0_TX_DMA_PEC_ERR_EN_OFS)&I2C_TX_DMA_EVENT_EN_0_TX_DMA_PEC_ERR_EN_MASK) + ((tx_dma_txfifo_empty_en<<I2C_TX_DMA_EVENT_EN_0_TX_DMA_TXFIFO_EMPTY_EN_OFS)&I2C_TX_DMA_EVENT_EN_0_TX_DMA_TXFIFO_EMPTY_EN_MASK) + ((tx_dma_rxfifo_full_en<<I2C_TX_DMA_EVENT_EN_0_TX_DMA_RXFIFO_FULL_EN_OFS)&I2C_TX_DMA_EVENT_EN_0_TX_DMA_RXFIFO_FULL_EN_MASK) + ((tx_dma_txfifo_half_full_en<<I2C_TX_DMA_EVENT_EN_0_TX_DMA_TXFIFO_HALF_FULL_EN_OFS)&I2C_TX_DMA_EVENT_EN_0_TX_DMA_TXFIFO_HALF_FULL_EN_MASK) + ((tx_dma_rxfifo_half_full_en<<I2C_TX_DMA_EVENT_EN_0_TX_DMA_RXFIFO_HALF_FULL_EN_OFS)&I2C_TX_DMA_EVENT_EN_0_TX_DMA_RXFIFO_HALF_FULL_EN_MASK) + ((tx_dma_mst_stop_intr_en<<I2C_TX_DMA_EVENT_EN_0_TX_DMA_MST_STOP_INTR_EN_OFS)&I2C_TX_DMA_EVENT_EN_0_TX_DMA_MST_STOP_INTR_EN_MASK) + ((tx_dma_mst_start_intr_en<<I2C_TX_DMA_EVENT_EN_0_TX_DMA_MST_START_INTR_EN_OFS)&I2C_TX_DMA_EVENT_EN_0_TX_DMA_MST_START_INTR_EN_MASK) + ((tx_dma_mst_nack_en<<I2C_TX_DMA_EVENT_EN_0_TX_DMA_MST_NACK_EN_OFS)&I2C_TX_DMA_EVENT_EN_0_TX_DMA_MST_NACK_EN_MASK);
}

static inline void I2C_TX_DMA_EVENT_EN_1_WRITE(I2C_REGS_s * registers, uint32_t tx_dma_dma_done_rx_en, uint32_t tx_dma_dma_done_tx_en, uint32_t tx_dma_txfifo_almost_empty_intr_en, uint32_t tx_dma_rxfifo_almost_full_intr_en) {
    registers->TX_DMA_EVENT_EN_1.packed_w =  + ((tx_dma_dma_done_rx_en<<I2C_TX_DMA_EVENT_EN_1_TX_DMA_DMA_DONE_RX_EN_OFS)&I2C_TX_DMA_EVENT_EN_1_TX_DMA_DMA_DONE_RX_EN_MASK) + ((tx_dma_dma_done_tx_en<<I2C_TX_DMA_EVENT_EN_1_TX_DMA_DMA_DONE_TX_EN_OFS)&I2C_TX_DMA_EVENT_EN_1_TX_DMA_DMA_DONE_TX_EN_MASK) + ((tx_dma_txfifo_almost_empty_intr_en<<I2C_TX_DMA_EVENT_EN_1_TX_DMA_TXFIFO_ALMOST_EMPTY_INTR_EN_OFS)&I2C_TX_DMA_EVENT_EN_1_TX_DMA_TXFIFO_ALMOST_EMPTY_INTR_EN_MASK) + ((tx_dma_rxfifo_almost_full_intr_en<<I2C_TX_DMA_EVENT_EN_1_TX_DMA_RXFIFO_ALMOST_FULL_INTR_EN_OFS)&I2C_TX_DMA_EVENT_EN_1_TX_DMA_RXFIFO_ALMOST_FULL_INTR_EN_MASK);
}

static inline void I2C_INTR_SW_SET_0_WRITE(I2C_REGS_s * registers, uint32_t arb_lost_sw_set, uint32_t slv_gencall_intr_sw_set, uint32_t slv_start_sw_set, uint32_t slv_stop_sw_set, uint32_t tx_done_sw_set, uint32_t rx_done_sw_set, uint32_t smbus_timeout_sw_set, uint32_t clkstretch_timeout_sw_set, uint32_t pec_err_sw_set, uint32_t txfifo_empty_sw_set, uint32_t rxfifo_full_sw_set, uint32_t txfifo_half_full_sw_set, uint32_t rxfifo_half_full_sw_set, uint32_t mst_stop_intr_sw_set, uint32_t mst_start_intr_sw_set, uint32_t mst_nack_sw_set) {
    registers->INTR_SW_SET_0.packed_w =  + ((arb_lost_sw_set<<I2C_INTR_SW_SET_0_ARB_LOST_SW_SET_OFS)&I2C_INTR_SW_SET_0_ARB_LOST_SW_SET_MASK) + ((slv_gencall_intr_sw_set<<I2C_INTR_SW_SET_0_SLV_GENCALL_INTR_SW_SET_OFS)&I2C_INTR_SW_SET_0_SLV_GENCALL_INTR_SW_SET_MASK) + ((slv_start_sw_set<<I2C_INTR_SW_SET_0_SLV_START_SW_SET_OFS)&I2C_INTR_SW_SET_0_SLV_START_SW_SET_MASK) + ((slv_stop_sw_set<<I2C_INTR_SW_SET_0_SLV_STOP_SW_SET_OFS)&I2C_INTR_SW_SET_0_SLV_STOP_SW_SET_MASK) + ((tx_done_sw_set<<I2C_INTR_SW_SET_0_TX_DONE_SW_SET_OFS)&I2C_INTR_SW_SET_0_TX_DONE_SW_SET_MASK) + ((rx_done_sw_set<<I2C_INTR_SW_SET_0_RX_DONE_SW_SET_OFS)&I2C_INTR_SW_SET_0_RX_DONE_SW_SET_MASK) + ((smbus_timeout_sw_set<<I2C_INTR_SW_SET_0_SMBUS_TIMEOUT_SW_SET_OFS)&I2C_INTR_SW_SET_0_SMBUS_TIMEOUT_SW_SET_MASK) + ((clkstretch_timeout_sw_set<<I2C_INTR_SW_SET_0_CLKSTRETCH_TIMEOUT_SW_SET_OFS)&I2C_INTR_SW_SET_0_CLKSTRETCH_TIMEOUT_SW_SET_MASK) + ((pec_err_sw_set<<I2C_INTR_SW_SET_0_PEC_ERR_SW_SET_OFS)&I2C_INTR_SW_SET_0_PEC_ERR_SW_SET_MASK) + ((txfifo_empty_sw_set<<I2C_INTR_SW_SET_0_TXFIFO_EMPTY_SW_SET_OFS)&I2C_INTR_SW_SET_0_TXFIFO_EMPTY_SW_SET_MASK) + ((rxfifo_full_sw_set<<I2C_INTR_SW_SET_0_RXFIFO_FULL_SW_SET_OFS)&I2C_INTR_SW_SET_0_RXFIFO_FULL_SW_SET_MASK) + ((txfifo_half_full_sw_set<<I2C_INTR_SW_SET_0_TXFIFO_HALF_FULL_SW_SET_OFS)&I2C_INTR_SW_SET_0_TXFIFO_HALF_FULL_SW_SET_MASK) + ((rxfifo_half_full_sw_set<<I2C_INTR_SW_SET_0_RXFIFO_HALF_FULL_SW_SET_OFS)&I2C_INTR_SW_SET_0_RXFIFO_HALF_FULL_SW_SET_MASK) + ((mst_stop_intr_sw_set<<I2C_INTR_SW_SET_0_MST_STOP_INTR_SW_SET_OFS)&I2C_INTR_SW_SET_0_MST_STOP_INTR_SW_SET_MASK) + ((mst_start_intr_sw_set<<I2C_INTR_SW_SET_0_MST_START_INTR_SW_SET_OFS)&I2C_INTR_SW_SET_0_MST_START_INTR_SW_SET_MASK) + ((mst_nack_sw_set<<I2C_INTR_SW_SET_0_MST_NACK_SW_SET_OFS)&I2C_INTR_SW_SET_0_MST_NACK_SW_SET_MASK);
}

static inline void I2C_INTR_SW_SET_1_WRITE(I2C_REGS_s * registers, uint32_t dma_done_rx_sw_set, uint32_t dma_done_tx_sw_set, uint32_t txfifo_almost_empty_intr_sw_set, uint32_t rxfifo_almost_full_intr_sw_set) {
    registers->INTR_SW_SET_1.packed_w =  + ((dma_done_rx_sw_set<<I2C_INTR_SW_SET_1_DMA_DONE_RX_SW_SET_OFS)&I2C_INTR_SW_SET_1_DMA_DONE_RX_SW_SET_MASK) + ((dma_done_tx_sw_set<<I2C_INTR_SW_SET_1_DMA_DONE_TX_SW_SET_OFS)&I2C_INTR_SW_SET_1_DMA_DONE_TX_SW_SET_MASK) + ((txfifo_almost_empty_intr_sw_set<<I2C_INTR_SW_SET_1_TXFIFO_ALMOST_EMPTY_INTR_SW_SET_OFS)&I2C_INTR_SW_SET_1_TXFIFO_ALMOST_EMPTY_INTR_SW_SET_MASK) + ((rxfifo_almost_full_intr_sw_set<<I2C_INTR_SW_SET_1_RXFIFO_ALMOST_FULL_INTR_SW_SET_OFS)&I2C_INTR_SW_SET_1_RXFIFO_ALMOST_FULL_INTR_SW_SET_MASK);
}

static inline void I2C_SPARE_CTRL_WRITE(I2C_REGS_s * registers, uint32_t cfg0, uint32_t cfg1) {
    registers->SPARE_CTRL.packed_w =  + ((cfg0<<I2C_SPARE_CTRL_CFG0_OFS)&I2C_SPARE_CTRL_CFG0_MASK) + ((cfg1<<I2C_SPARE_CTRL_CFG1_OFS)&I2C_SPARE_CTRL_CFG1_MASK);
}

static inline void I2C_SPARE_STS_WRITE(I2C_REGS_s * registers, uint32_t sts0, uint32_t sts1) {
    registers->SPARE_STS.packed_w =  + ((sts0<<I2C_SPARE_STS_STS0_OFS)&I2C_SPARE_STS_STS0_MASK) + ((sts1<<I2C_SPARE_STS_STS1_OFS)&I2C_SPARE_STS_STS1_MASK);
}

static inline void I2C_GLITCH_FILTER_CFG_WRITE(I2C_REGS_s * registers, uint32_t gf_width) {
    registers->GLITCH_FILTER_CFG.packed_w =  + ((gf_width<<I2C_GLITCH_FILTER_CFG_GF_WIDTH_OFS)&I2C_GLITCH_FILTER_CFG_GF_WIDTH_MASK);
}

static inline void I2C_SLAVE_CTRL_WRITE(I2C_REGS_s * registers, uint32_t slv_addr_mode, uint32_t slv_low_pwr_wakeup_en, uint32_t slv_def_dev_addr_en, uint32_t slv_alres_addr_en, uint32_t slv_def_host_addr_en, uint32_t slv_txtrig_at_txmode, uint32_t slv_clkstretch_en, uint32_t slv_gencall_en, uint32_t slv_enable, uint32_t slv_addr2_en, uint32_t slv_addr2_mask, uint32_t slv_txwait_stale_fifo, uint32_t slv_txempty_intr_on_tx_req) {
    registers->SLAVE_CTRL.packed_w =  + ((slv_addr_mode<<I2C_SLAVE_CTRL_SLV_ADDR_MODE_OFS)&I2C_SLAVE_CTRL_SLV_ADDR_MODE_MASK) + ((slv_low_pwr_wakeup_en<<I2C_SLAVE_CTRL_SLV_LOW_PWR_WAKEUP_EN_OFS)&I2C_SLAVE_CTRL_SLV_LOW_PWR_WAKEUP_EN_MASK) + ((slv_def_dev_addr_en<<I2C_SLAVE_CTRL_SLV_DEF_DEV_ADDR_EN_OFS)&I2C_SLAVE_CTRL_SLV_DEF_DEV_ADDR_EN_MASK) + ((slv_alres_addr_en<<I2C_SLAVE_CTRL_SLV_ALRES_ADDR_EN_OFS)&I2C_SLAVE_CTRL_SLV_ALRES_ADDR_EN_MASK) + ((slv_def_host_addr_en<<I2C_SLAVE_CTRL_SLV_DEF_HOST_ADDR_EN_OFS)&I2C_SLAVE_CTRL_SLV_DEF_HOST_ADDR_EN_MASK) + ((slv_txtrig_at_txmode<<I2C_SLAVE_CTRL_SLV_TXTRIG_AT_TXMODE_OFS)&I2C_SLAVE_CTRL_SLV_TXTRIG_AT_TXMODE_MASK) + ((slv_clkstretch_en<<I2C_SLAVE_CTRL_SLV_CLKSTRETCH_EN_OFS)&I2C_SLAVE_CTRL_SLV_CLKSTRETCH_EN_MASK) + ((slv_gencall_en<<I2C_SLAVE_CTRL_SLV_GENCALL_EN_OFS)&I2C_SLAVE_CTRL_SLV_GENCALL_EN_MASK) + ((slv_enable<<I2C_SLAVE_CTRL_SLV_ENABLE_OFS)&I2C_SLAVE_CTRL_SLV_ENABLE_MASK) + ((slv_addr2_en<<I2C_SLAVE_CTRL_SLV_ADDR2_EN_OFS)&I2C_SLAVE_CTRL_SLV_ADDR2_EN_MASK) + ((slv_addr2_mask<<I2C_SLAVE_CTRL_SLV_ADDR2_MASK_OFS)&I2C_SLAVE_CTRL_SLV_ADDR2_MASK_MASK) + ((slv_txwait_stale_fifo<<I2C_SLAVE_CTRL_SLV_TXWAIT_STALE_FIFO_OFS)&I2C_SLAVE_CTRL_SLV_TXWAIT_STALE_FIFO_MASK) + ((slv_txempty_intr_on_tx_req<<I2C_SLAVE_CTRL_SLV_TXEMPTY_INTR_ON_TX_REQ_OFS)&I2C_SLAVE_CTRL_SLV_TXEMPTY_INTR_ON_TX_REQ_MASK);
}

static inline void I2C_SLAVE_ADDR_WRITE(I2C_REGS_s * registers, uint32_t slv_addr1, uint32_t slv_addr2) {
    registers->SLAVE_ADDR.packed_w =  + ((slv_addr1<<I2C_SLAVE_ADDR_SLV_ADDR1_OFS)&I2C_SLAVE_ADDR_SLV_ADDR1_MASK) + ((slv_addr2<<I2C_SLAVE_ADDR_SLV_ADDR2_OFS)&I2C_SLAVE_ADDR_SLV_ADDR2_MASK);
}

static inline void I2C_SLAVE_STS_WRITE(I2C_REGS_s * registers, uint32_t slv_rx_req, uint32_t slv_tx_req, uint32_t slv_addr2_sel, uint32_t quick_cmd_sts, uint32_t quick_cmd_rw, uint32_t slv_addr_match, uint32_t slv_stale_txfifo, uint32_t slv_txmode, uint32_t slv_rxmode, uint32_t slv_busbsy) {
    registers->SLAVE_STS.packed_w =  + ((slv_rx_req<<I2C_SLAVE_STS_SLV_RX_REQ_OFS)&I2C_SLAVE_STS_SLV_RX_REQ_MASK) + ((slv_tx_req<<I2C_SLAVE_STS_SLV_TX_REQ_OFS)&I2C_SLAVE_STS_SLV_TX_REQ_MASK) + ((slv_addr2_sel<<I2C_SLAVE_STS_SLV_ADDR2_SEL_OFS)&I2C_SLAVE_STS_SLV_ADDR2_SEL_MASK) + ((quick_cmd_sts<<I2C_SLAVE_STS_QUICK_CMD_STS_OFS)&I2C_SLAVE_STS_QUICK_CMD_STS_MASK) + ((quick_cmd_rw<<I2C_SLAVE_STS_QUICK_CMD_RW_OFS)&I2C_SLAVE_STS_QUICK_CMD_RW_MASK) + ((slv_addr_match<<I2C_SLAVE_STS_SLV_ADDR_MATCH_OFS)&I2C_SLAVE_STS_SLV_ADDR_MATCH_MASK) + ((slv_stale_txfifo<<I2C_SLAVE_STS_SLV_STALE_TXFIFO_OFS)&I2C_SLAVE_STS_SLV_STALE_TXFIFO_MASK) + ((slv_txmode<<I2C_SLAVE_STS_SLV_TXMODE_OFS)&I2C_SLAVE_STS_SLV_TXMODE_MASK) + ((slv_rxmode<<I2C_SLAVE_STS_SLV_RXMODE_OFS)&I2C_SLAVE_STS_SLV_RXMODE_MASK) + ((slv_busbsy<<I2C_SLAVE_STS_SLV_BUSBSY_OFS)&I2C_SLAVE_STS_SLV_BUSBSY_MASK);
}

static inline void I2C_SLAVE_ACK_CFG_WRITE(I2C_REGS_s * registers, uint32_t slv_auto_ack_en, uint32_t slv_addr_auto_ack_en) {
    registers->SLAVE_ACK_CFG.packed_w =  + ((slv_auto_ack_en<<I2C_SLAVE_ACK_CFG_SLV_AUTO_ACK_EN_OFS)&I2C_SLAVE_ACK_CFG_SLV_AUTO_ACK_EN_MASK) + ((slv_addr_auto_ack_en<<I2C_SLAVE_ACK_CFG_SLV_ADDR_AUTO_ACK_EN_OFS)&I2C_SLAVE_ACK_CFG_SLV_ADDR_AUTO_ACK_EN_MASK);
}

static inline void I2C_SLAVE_BYTE_ACK_WRITE(I2C_REGS_s * registers, uint32_t slv_ackval) {
    registers->SLAVE_BYTE_ACK.packed_w =  + ((slv_ackval<<I2C_SLAVE_BYTE_ACK_SLV_ACKVAL_OFS)&I2C_SLAVE_BYTE_ACK_SLV_ACKVAL_MASK);
}

static inline void I2C_FIFO_CTRL_WRITE(I2C_REGS_s * registers, uint32_t rxfifo_en, uint32_t txfifo_en, uint32_t rxfifo_flush, uint32_t txfifo_flush) {
    registers->FIFO_CTRL.packed_w =  + ((rxfifo_en<<I2C_FIFO_CTRL_RXFIFO_EN_OFS)&I2C_FIFO_CTRL_RXFIFO_EN_MASK) + ((txfifo_en<<I2C_FIFO_CTRL_TXFIFO_EN_OFS)&I2C_FIFO_CTRL_TXFIFO_EN_MASK) + ((rxfifo_flush<<I2C_FIFO_CTRL_RXFIFO_FLUSH_OFS)&I2C_FIFO_CTRL_RXFIFO_FLUSH_MASK) + ((txfifo_flush<<I2C_FIFO_CTRL_TXFIFO_FLUSH_OFS)&I2C_FIFO_CTRL_TXFIFO_FLUSH_MASK);
}

static inline void I2C_FIFO_STS_WRITE(I2C_REGS_s * registers, uint32_t txfifo_flush_sts, uint32_t rxfifo_flush_sts, uint32_t txfifo_empty_sts, uint32_t txfifo_almost_empty, uint32_t txfifo_full, uint32_t rxfifo_empty, uint32_t rxfifo_almost_full, uint32_t rxfifo_full_sts) {
    registers->FIFO_STS.packed_w =  + ((txfifo_flush_sts<<I2C_FIFO_STS_TXFIFO_FLUSH_STS_OFS)&I2C_FIFO_STS_TXFIFO_FLUSH_STS_MASK) + ((rxfifo_flush_sts<<I2C_FIFO_STS_RXFIFO_FLUSH_STS_OFS)&I2C_FIFO_STS_RXFIFO_FLUSH_STS_MASK) + ((txfifo_empty_sts<<I2C_FIFO_STS_TXFIFO_EMPTY_STS_OFS)&I2C_FIFO_STS_TXFIFO_EMPTY_STS_MASK) + ((txfifo_almost_empty<<I2C_FIFO_STS_TXFIFO_ALMOST_EMPTY_OFS)&I2C_FIFO_STS_TXFIFO_ALMOST_EMPTY_MASK) + ((txfifo_full<<I2C_FIFO_STS_TXFIFO_FULL_OFS)&I2C_FIFO_STS_TXFIFO_FULL_MASK) + ((rxfifo_empty<<I2C_FIFO_STS_RXFIFO_EMPTY_OFS)&I2C_FIFO_STS_RXFIFO_EMPTY_MASK) + ((rxfifo_almost_full<<I2C_FIFO_STS_RXFIFO_ALMOST_FULL_OFS)&I2C_FIFO_STS_RXFIFO_ALMOST_FULL_MASK) + ((rxfifo_full_sts<<I2C_FIFO_STS_RXFIFO_FULL_STS_OFS)&I2C_FIFO_STS_RXFIFO_FULL_STS_MASK);
}

static inline void I2C_PEC_CTRL_WRITE(I2C_REGS_s * registers, uint32_t pec_en) {
    registers->PEC_CTRL.packed_w =  + ((pec_en<<I2C_PEC_CTRL_PEC_EN_OFS)&I2C_PEC_CTRL_PEC_EN_MASK);
}

static inline void I2C_PEC_STS_WRITE(I2C_REGS_s * registers, uint32_t pec_error) {
    registers->PEC_STS.packed_w =  + ((pec_error<<I2C_PEC_STS_PEC_ERROR_OFS)&I2C_PEC_STS_PEC_ERROR_MASK);
}

static inline void I2C_CRC_OUT_BYTE_WRITE(I2C_REGS_s * registers, uint32_t slv_crc_out_byte, uint32_t mst_crc_out_byte) {
    registers->CRC_OUT_BYTE.packed_w =  + ((slv_crc_out_byte<<I2C_CRC_OUT_BYTE_SLV_CRC_OUT_BYTE_OFS)&I2C_CRC_OUT_BYTE_SLV_CRC_OUT_BYTE_MASK) + ((mst_crc_out_byte<<I2C_CRC_OUT_BYTE_MST_CRC_OUT_BYTE_OFS)&I2C_CRC_OUT_BYTE_MST_CRC_OUT_BYTE_MASK);
}

static inline void I2C_MASTER_CFG_WRITE(I2C_REGS_s * registers, uint32_t mst_enable, uint32_t mst_clkstretch_en, uint32_t lpbk_mode, uint32_t mst_auto_ack_en, uint32_t mst_addr_mode, uint32_t mst_slv_addr_cfg) {
    registers->MASTER_CFG.packed_w =  + ((mst_enable<<I2C_MASTER_CFG_MST_ENABLE_OFS)&I2C_MASTER_CFG_MST_ENABLE_MASK) + ((mst_clkstretch_en<<I2C_MASTER_CFG_MST_CLKSTRETCH_EN_OFS)&I2C_MASTER_CFG_MST_CLKSTRETCH_EN_MASK) + ((lpbk_mode<<I2C_MASTER_CFG_LPBK_MODE_OFS)&I2C_MASTER_CFG_LPBK_MODE_MASK) + ((mst_auto_ack_en<<I2C_MASTER_CFG_MST_AUTO_ACK_EN_OFS)&I2C_MASTER_CFG_MST_AUTO_ACK_EN_MASK) + ((mst_addr_mode<<I2C_MASTER_CFG_MST_ADDR_MODE_OFS)&I2C_MASTER_CFG_MST_ADDR_MODE_MASK) + ((mst_slv_addr_cfg<<I2C_MASTER_CFG_MST_SLV_ADDR_CFG_OFS)&I2C_MASTER_CFG_MST_SLV_ADDR_CFG_MASK);
}

static inline void I2C_MASTER_CTRL_WRITE(I2C_REGS_s * registers, uint32_t mst_cmd_vld, uint32_t mst_burst_len, uint32_t mst_start, uint32_t mst_dir, uint32_t mst_stop, uint32_t mst_rd_on_txempty) {
    registers->MASTER_CTRL.packed_w =  + ((mst_cmd_vld<<I2C_MASTER_CTRL_MST_CMD_VLD_OFS)&I2C_MASTER_CTRL_MST_CMD_VLD_MASK) + ((mst_burst_len<<I2C_MASTER_CTRL_MST_BURST_LEN_OFS)&I2C_MASTER_CTRL_MST_BURST_LEN_MASK) + ((mst_start<<I2C_MASTER_CTRL_MST_START_OFS)&I2C_MASTER_CTRL_MST_START_MASK) + ((mst_dir<<I2C_MASTER_CTRL_MST_DIR_OFS)&I2C_MASTER_CTRL_MST_DIR_MASK) + ((mst_stop<<I2C_MASTER_CTRL_MST_STOP_OFS)&I2C_MASTER_CTRL_MST_STOP_MASK) + ((mst_rd_on_txempty<<I2C_MASTER_CTRL_MST_RD_ON_TXEMPTY_OFS)&I2C_MASTER_CTRL_MST_RD_ON_TXEMPTY_MASK);
}

static inline void I2C_MASTER_ACK_VAL_WRITE(I2C_REGS_s * registers, uint32_t mst_ackval) {
    registers->MASTER_ACK_VAL.packed_w =  + ((mst_ackval<<I2C_MASTER_ACK_VAL_MST_ACKVAL_OFS)&I2C_MASTER_ACK_VAL_MST_ACKVAL_MASK);
}

static inline void I2C_MASTER_STS_WRITE(I2C_REGS_s * registers, uint32_t mst_busbsy, uint32_t mst_idle, uint32_t mst_arblost, uint32_t mst_tx_data_ack, uint32_t mst_tx_addr_ack, uint32_t mst_tx_nack, uint32_t mst_fsm_busy, uint32_t mst_word_cnt) {
    registers->MASTER_STS.packed_w =  + ((mst_busbsy<<I2C_MASTER_STS_MST_BUSBSY_OFS)&I2C_MASTER_STS_MST_BUSBSY_MASK) + ((mst_idle<<I2C_MASTER_STS_MST_IDLE_OFS)&I2C_MASTER_STS_MST_IDLE_MASK) + ((mst_arblost<<I2C_MASTER_STS_MST_ARBLOST_OFS)&I2C_MASTER_STS_MST_ARBLOST_MASK) + ((mst_tx_data_ack<<I2C_MASTER_STS_MST_TX_DATA_ACK_OFS)&I2C_MASTER_STS_MST_TX_DATA_ACK_MASK) + ((mst_tx_addr_ack<<I2C_MASTER_STS_MST_TX_ADDR_ACK_OFS)&I2C_MASTER_STS_MST_TX_ADDR_ACK_MASK) + ((mst_tx_nack<<I2C_MASTER_STS_MST_TX_NACK_OFS)&I2C_MASTER_STS_MST_TX_NACK_MASK) + ((mst_fsm_busy<<I2C_MASTER_STS_MST_FSM_BUSY_OFS)&I2C_MASTER_STS_MST_FSM_BUSY_MASK) + ((mst_word_cnt<<I2C_MASTER_STS_MST_WORD_CNT_OFS)&I2C_MASTER_STS_MST_WORD_CNT_MASK);
}

static inline void I2C_MASTER_MON_WRITE(I2C_REGS_s * registers, uint32_t mst_sda_state, uint32_t mst_scl_state) {
    registers->MASTER_MON.packed_w =  + ((mst_sda_state<<I2C_MASTER_MON_MST_SDA_STATE_OFS)&I2C_MASTER_MON_MST_SDA_STATE_MASK) + ((mst_scl_state<<I2C_MASTER_MON_MST_SCL_STATE_OFS)&I2C_MASTER_MON_MST_SCL_STATE_MASK);
}

static inline void I2C_FSM_STATUS_WRITE(I2C_REGS_s * registers, uint32_t mst_state, uint32_t slv_state, uint32_t slv_quick_cmd_state) {
    registers->FSM_STATUS.packed_w =  + ((mst_state<<I2C_FSM_STATUS_MST_STATE_OFS)&I2C_FSM_STATUS_MST_STATE_MASK) + ((slv_state<<I2C_FSM_STATUS_SLV_STATE_OFS)&I2C_FSM_STATUS_SLV_STATE_MASK) + ((slv_quick_cmd_state<<I2C_FSM_STATUS_SLV_QUICK_CMD_STATE_OFS)&I2C_FSM_STATUS_SLV_QUICK_CMD_STATE_MASK);
}

