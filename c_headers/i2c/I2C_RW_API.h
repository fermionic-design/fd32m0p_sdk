#include "I2C_REGS.h"

static inline void I2C_DESC_WRITE(I2C_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<I2C_DESC_module_type_OFS)&I2C_DESC_module_type_MASK) + ((modue_subtype<<I2C_DESC_modue_subtype_OFS)&I2C_DESC_modue_subtype_MASK) + ((major_rev<<I2C_DESC_major_rev_OFS)&I2C_DESC_major_rev_MASK) + ((minor_rev<<I2C_DESC_minor_rev_OFS)&I2C_DESC_minor_rev_MASK);
}

static inline void I2C_PWR_EN_WRITE(I2C_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<I2C_PWR_EN_pwr_en_OFS)&I2C_PWR_EN_pwr_en_MASK) + ((pwr_en_key<<I2C_PWR_EN_pwr_en_key_OFS)&I2C_PWR_EN_pwr_en_key_MASK);
}

static inline void I2C_RST_CTRL_WRITE(I2C_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<I2C_RST_CTRL_rst_OFS)&I2C_RST_CTRL_rst_MASK) + ((rst_sts_clr<<I2C_RST_CTRL_rst_sts_clr_OFS)&I2C_RST_CTRL_rst_sts_clr_MASK) + ((rst_key<<I2C_RST_CTRL_rst_key_OFS)&I2C_RST_CTRL_rst_key_MASK);
}

static inline void I2C_RST_STS_WRITE(I2C_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<I2C_RST_STS_rst_sts_OFS)&I2C_RST_STS_rst_sts_MASK);
}

static inline void I2C_CLK_CTRL_WRITE(I2C_REGS_s * registers, uint32_t en_async_clk_req, uint32_t clksel, uint32_t clkdiv, uint32_t hold_cnt, uint32_t setup_cnt) {
    registers->CLK_CTRL.packed_w =  + ((en_async_clk_req<<I2C_CLK_CTRL_en_async_clk_req_OFS)&I2C_CLK_CTRL_en_async_clk_req_MASK) + ((clksel<<I2C_CLK_CTRL_clksel_OFS)&I2C_CLK_CTRL_clksel_MASK) + ((clkdiv<<I2C_CLK_CTRL_clkdiv_OFS)&I2C_CLK_CTRL_clkdiv_MASK) + ((hold_cnt<<I2C_CLK_CTRL_hold_cnt_OFS)&I2C_CLK_CTRL_hold_cnt_MASK) + ((setup_cnt<<I2C_CLK_CTRL_setup_cnt_OFS)&I2C_CLK_CTRL_setup_cnt_MASK);
}

static inline void I2C_DBG_CTRL_WRITE(I2C_REGS_s * registers, uint32_t run_on_halt, uint32_t soft_stop) {
    registers->DBG_CTRL.packed_w =  + ((run_on_halt<<I2C_DBG_CTRL_run_on_halt_OFS)&I2C_DBG_CTRL_run_on_halt_MASK) + ((soft_stop<<I2C_DBG_CTRL_soft_stop_OFS)&I2C_DBG_CTRL_soft_stop_MASK);
}

static inline void I2C_MASTER_SCL_GEN_WRITE(I2C_REGS_s * registers, uint32_t mst_scl_cnt_high_val, uint32_t mst_scl_cnt_low_val) {
    registers->MASTER_SCL_GEN.packed_w =  + ((mst_scl_cnt_high_val<<I2C_MASTER_SCL_GEN_mst_scl_cnt_high_val_OFS)&I2C_MASTER_SCL_GEN_mst_scl_cnt_high_val_MASK) + ((mst_scl_cnt_low_val<<I2C_MASTER_SCL_GEN_mst_scl_cnt_low_val_OFS)&I2C_MASTER_SCL_GEN_mst_scl_cnt_low_val_MASK);
}

static inline void I2C_MASTER_TIMING_CONSTRAINT_WRITE(I2C_REGS_s * registers, uint32_t mst_scl_start_cnt, uint32_t mst_sda_stop_cnt, uint32_t mst_stop_start_buffer_cnt, uint32_t mst_restart_setup_cnt) {
    registers->MASTER_TIMING_CONSTRAINT.packed_w =  + ((mst_scl_start_cnt<<I2C_MASTER_TIMING_CONSTRAINT_mst_scl_start_cnt_OFS)&I2C_MASTER_TIMING_CONSTRAINT_mst_scl_start_cnt_MASK) + ((mst_sda_stop_cnt<<I2C_MASTER_TIMING_CONSTRAINT_mst_sda_stop_cnt_OFS)&I2C_MASTER_TIMING_CONSTRAINT_mst_sda_stop_cnt_MASK) + ((mst_stop_start_buffer_cnt<<I2C_MASTER_TIMING_CONSTRAINT_mst_stop_start_buffer_cnt_OFS)&I2C_MASTER_TIMING_CONSTRAINT_mst_stop_start_buffer_cnt_MASK) + ((mst_restart_setup_cnt<<I2C_MASTER_TIMING_CONSTRAINT_mst_restart_setup_cnt_OFS)&I2C_MASTER_TIMING_CONSTRAINT_mst_restart_setup_cnt_MASK);
}

static inline void I2C_MASTER_CLKSTRETCH_CNT_WRITE(I2C_REGS_s * registers, uint32_t mst_max_clkstretch_cnt) {
    registers->MASTER_CLKSTRETCH_CNT.packed_w =  + ((mst_max_clkstretch_cnt<<I2C_MASTER_CLKSTRETCH_CNT_mst_max_clkstretch_cnt_OFS)&I2C_MASTER_CLKSTRETCH_CNT_mst_max_clkstretch_cnt_MASK);
}

static inline void I2C_SLAVE_CLKSTRETCH_CNT_WRITE(I2C_REGS_s * registers, uint32_t slv_max_clkstretch_cnt) {
    registers->SLAVE_CLKSTRETCH_CNT.packed_w =  + ((slv_max_clkstretch_cnt<<I2C_SLAVE_CLKSTRETCH_CNT_slv_max_clkstretch_cnt_OFS)&I2C_SLAVE_CLKSTRETCH_CNT_slv_max_clkstretch_cnt_MASK);
}

static inline void I2C_SMBUS_TIMEOUT_CNT_WRITE(I2C_REGS_s * registers, uint32_t smbus_timeout_cnt) {
    registers->SMBUS_TIMEOUT_CNT.packed_w =  + ((smbus_timeout_cnt<<I2C_SMBUS_TIMEOUT_CNT_smbus_timeout_cnt_OFS)&I2C_SMBUS_TIMEOUT_CNT_smbus_timeout_cnt_MASK);
}

static inline void I2C_INTR_STS_WRITE(I2C_REGS_s * registers, uint32_t intr_first) {
    registers->INTR_STS.packed_w =  + ((intr_first<<I2C_INTR_STS_intr_first_OFS)&I2C_INTR_STS_intr_first_MASK);
}

static inline void I2C_INTR_EVENT_WRITE(I2C_REGS_s * registers, uint32_t arb_lost, uint32_t slv_gencall_intr, uint32_t slv_start, uint32_t slv_stop, uint32_t tx_done, uint32_t rx_done, uint32_t smbus_timeout, uint32_t clkstretch_timeout, uint32_t pec_err, uint32_t txfifo_empty, uint32_t rxfifo_full, uint32_t txfifo_half_full, uint32_t rxfifo_half_full, uint32_t mst_stop_intr, uint32_t mst_start_intr, uint32_t mst_nack, uint32_t dma_done_rx, uint32_t dma_done_tx, uint32_t txfifo_almost_empty_intr, uint32_t rxfifo_almost_full_intr) {
    registers->INTR_EVENT.packed_w =  + ((arb_lost<<I2C_INTR_EVENT_arb_lost_OFS)&I2C_INTR_EVENT_arb_lost_MASK) + ((slv_gencall_intr<<I2C_INTR_EVENT_slv_gencall_intr_OFS)&I2C_INTR_EVENT_slv_gencall_intr_MASK) + ((slv_start<<I2C_INTR_EVENT_slv_start_OFS)&I2C_INTR_EVENT_slv_start_MASK) + ((slv_stop<<I2C_INTR_EVENT_slv_stop_OFS)&I2C_INTR_EVENT_slv_stop_MASK) + ((tx_done<<I2C_INTR_EVENT_tx_done_OFS)&I2C_INTR_EVENT_tx_done_MASK) + ((rx_done<<I2C_INTR_EVENT_rx_done_OFS)&I2C_INTR_EVENT_rx_done_MASK) + ((smbus_timeout<<I2C_INTR_EVENT_smbus_timeout_OFS)&I2C_INTR_EVENT_smbus_timeout_MASK) + ((clkstretch_timeout<<I2C_INTR_EVENT_clkstretch_timeout_OFS)&I2C_INTR_EVENT_clkstretch_timeout_MASK) + ((pec_err<<I2C_INTR_EVENT_pec_err_OFS)&I2C_INTR_EVENT_pec_err_MASK) + ((txfifo_empty<<I2C_INTR_EVENT_txfifo_empty_OFS)&I2C_INTR_EVENT_txfifo_empty_MASK) + ((rxfifo_full<<I2C_INTR_EVENT_rxfifo_full_OFS)&I2C_INTR_EVENT_rxfifo_full_MASK) + ((txfifo_half_full<<I2C_INTR_EVENT_txfifo_half_full_OFS)&I2C_INTR_EVENT_txfifo_half_full_MASK) + ((rxfifo_half_full<<I2C_INTR_EVENT_rxfifo_half_full_OFS)&I2C_INTR_EVENT_rxfifo_half_full_MASK) + ((mst_stop_intr<<I2C_INTR_EVENT_mst_stop_intr_OFS)&I2C_INTR_EVENT_mst_stop_intr_MASK) + ((mst_start_intr<<I2C_INTR_EVENT_mst_start_intr_OFS)&I2C_INTR_EVENT_mst_start_intr_MASK) + ((mst_nack<<I2C_INTR_EVENT_mst_nack_OFS)&I2C_INTR_EVENT_mst_nack_MASK) + ((dma_done_rx<<I2C_INTR_EVENT_dma_done_rx_OFS)&I2C_INTR_EVENT_dma_done_rx_MASK) + ((dma_done_tx<<I2C_INTR_EVENT_dma_done_tx_OFS)&I2C_INTR_EVENT_dma_done_tx_MASK) + ((txfifo_almost_empty_intr<<I2C_INTR_EVENT_txfifo_almost_empty_intr_OFS)&I2C_INTR_EVENT_txfifo_almost_empty_intr_MASK) + ((rxfifo_almost_full_intr<<I2C_INTR_EVENT_rxfifo_almost_full_intr_OFS)&I2C_INTR_EVENT_rxfifo_almost_full_intr_MASK);
}

static inline void I2C_INTR_EN_0_WRITE(I2C_REGS_s * registers, uint32_t arb_lost_en, uint32_t slv_gencall_intr_en, uint32_t slv_start_en, uint32_t slv_stop_en, uint32_t tx_done_en, uint32_t rx_done_en, uint32_t smbus_timeout_en, uint32_t clkstretch_timeout_en, uint32_t pec_err_en, uint32_t txfifo_empty_en, uint32_t rxfifo_full_en, uint32_t txfifo_half_full_en, uint32_t rxfifo_half_full_en, uint32_t mst_stop_intr_en, uint32_t mst_start_intr_en, uint32_t mst_nack_en) {
    registers->INTR_EN_0.packed_w =  + ((arb_lost_en<<I2C_INTR_EN_0_arb_lost_en_OFS)&I2C_INTR_EN_0_arb_lost_en_MASK) + ((slv_gencall_intr_en<<I2C_INTR_EN_0_slv_gencall_intr_en_OFS)&I2C_INTR_EN_0_slv_gencall_intr_en_MASK) + ((slv_start_en<<I2C_INTR_EN_0_slv_start_en_OFS)&I2C_INTR_EN_0_slv_start_en_MASK) + ((slv_stop_en<<I2C_INTR_EN_0_slv_stop_en_OFS)&I2C_INTR_EN_0_slv_stop_en_MASK) + ((tx_done_en<<I2C_INTR_EN_0_tx_done_en_OFS)&I2C_INTR_EN_0_tx_done_en_MASK) + ((rx_done_en<<I2C_INTR_EN_0_rx_done_en_OFS)&I2C_INTR_EN_0_rx_done_en_MASK) + ((smbus_timeout_en<<I2C_INTR_EN_0_smbus_timeout_en_OFS)&I2C_INTR_EN_0_smbus_timeout_en_MASK) + ((clkstretch_timeout_en<<I2C_INTR_EN_0_clkstretch_timeout_en_OFS)&I2C_INTR_EN_0_clkstretch_timeout_en_MASK) + ((pec_err_en<<I2C_INTR_EN_0_pec_err_en_OFS)&I2C_INTR_EN_0_pec_err_en_MASK) + ((txfifo_empty_en<<I2C_INTR_EN_0_txfifo_empty_en_OFS)&I2C_INTR_EN_0_txfifo_empty_en_MASK) + ((rxfifo_full_en<<I2C_INTR_EN_0_rxfifo_full_en_OFS)&I2C_INTR_EN_0_rxfifo_full_en_MASK) + ((txfifo_half_full_en<<I2C_INTR_EN_0_txfifo_half_full_en_OFS)&I2C_INTR_EN_0_txfifo_half_full_en_MASK) + ((rxfifo_half_full_en<<I2C_INTR_EN_0_rxfifo_half_full_en_OFS)&I2C_INTR_EN_0_rxfifo_half_full_en_MASK) + ((mst_stop_intr_en<<I2C_INTR_EN_0_mst_stop_intr_en_OFS)&I2C_INTR_EN_0_mst_stop_intr_en_MASK) + ((mst_start_intr_en<<I2C_INTR_EN_0_mst_start_intr_en_OFS)&I2C_INTR_EN_0_mst_start_intr_en_MASK) + ((mst_nack_en<<I2C_INTR_EN_0_mst_nack_en_OFS)&I2C_INTR_EN_0_mst_nack_en_MASK);
}

static inline void I2C_INTR_EN_1_WRITE(I2C_REGS_s * registers, uint32_t dma_done_rx_en, uint32_t dma_done_tx_en, uint32_t txfifo_almost_empty_intr_en, uint32_t rxfifo_almost_full_intr_en) {
    registers->INTR_EN_1.packed_w =  + ((dma_done_rx_en<<I2C_INTR_EN_1_dma_done_rx_en_OFS)&I2C_INTR_EN_1_dma_done_rx_en_MASK) + ((dma_done_tx_en<<I2C_INTR_EN_1_dma_done_tx_en_OFS)&I2C_INTR_EN_1_dma_done_tx_en_MASK) + ((txfifo_almost_empty_intr_en<<I2C_INTR_EN_1_txfifo_almost_empty_intr_en_OFS)&I2C_INTR_EN_1_txfifo_almost_empty_intr_en_MASK) + ((rxfifo_almost_full_intr_en<<I2C_INTR_EN_1_rxfifo_almost_full_intr_en_OFS)&I2C_INTR_EN_1_rxfifo_almost_full_intr_en_MASK);
}

static inline void I2C_INTR_NMI_EN_0_WRITE(I2C_REGS_s * registers, uint32_t arb_lost_nmi_en, uint32_t slv_gencall_intr_nmi_en, uint32_t slv_start_nmi_en, uint32_t slv_stop_nmi_en, uint32_t tx_done_nmi_en, uint32_t rx_done_nmi_en, uint32_t smbus_timeout_nmi_en, uint32_t clkstretch_timeout_nmi_en, uint32_t pec_err_nmi_en, uint32_t txfifo_empty_nmi_en, uint32_t rxfifo_full_nmi_en, uint32_t txfifo_half_full_nmi_en, uint32_t rxfifo_half_full_nmi_en, uint32_t mst_stop_intr_nmi_en, uint32_t mst_start_intr_nmi_en, uint32_t mst_nack_nmi_en) {
    registers->INTR_NMI_EN_0.packed_w =  + ((arb_lost_nmi_en<<I2C_INTR_NMI_EN_0_arb_lost_nmi_en_OFS)&I2C_INTR_NMI_EN_0_arb_lost_nmi_en_MASK) + ((slv_gencall_intr_nmi_en<<I2C_INTR_NMI_EN_0_slv_gencall_intr_nmi_en_OFS)&I2C_INTR_NMI_EN_0_slv_gencall_intr_nmi_en_MASK) + ((slv_start_nmi_en<<I2C_INTR_NMI_EN_0_slv_start_nmi_en_OFS)&I2C_INTR_NMI_EN_0_slv_start_nmi_en_MASK) + ((slv_stop_nmi_en<<I2C_INTR_NMI_EN_0_slv_stop_nmi_en_OFS)&I2C_INTR_NMI_EN_0_slv_stop_nmi_en_MASK) + ((tx_done_nmi_en<<I2C_INTR_NMI_EN_0_tx_done_nmi_en_OFS)&I2C_INTR_NMI_EN_0_tx_done_nmi_en_MASK) + ((rx_done_nmi_en<<I2C_INTR_NMI_EN_0_rx_done_nmi_en_OFS)&I2C_INTR_NMI_EN_0_rx_done_nmi_en_MASK) + ((smbus_timeout_nmi_en<<I2C_INTR_NMI_EN_0_smbus_timeout_nmi_en_OFS)&I2C_INTR_NMI_EN_0_smbus_timeout_nmi_en_MASK) + ((clkstretch_timeout_nmi_en<<I2C_INTR_NMI_EN_0_clkstretch_timeout_nmi_en_OFS)&I2C_INTR_NMI_EN_0_clkstretch_timeout_nmi_en_MASK) + ((pec_err_nmi_en<<I2C_INTR_NMI_EN_0_pec_err_nmi_en_OFS)&I2C_INTR_NMI_EN_0_pec_err_nmi_en_MASK) + ((txfifo_empty_nmi_en<<I2C_INTR_NMI_EN_0_txfifo_empty_nmi_en_OFS)&I2C_INTR_NMI_EN_0_txfifo_empty_nmi_en_MASK) + ((rxfifo_full_nmi_en<<I2C_INTR_NMI_EN_0_rxfifo_full_nmi_en_OFS)&I2C_INTR_NMI_EN_0_rxfifo_full_nmi_en_MASK) + ((txfifo_half_full_nmi_en<<I2C_INTR_NMI_EN_0_txfifo_half_full_nmi_en_OFS)&I2C_INTR_NMI_EN_0_txfifo_half_full_nmi_en_MASK) + ((rxfifo_half_full_nmi_en<<I2C_INTR_NMI_EN_0_rxfifo_half_full_nmi_en_OFS)&I2C_INTR_NMI_EN_0_rxfifo_half_full_nmi_en_MASK) + ((mst_stop_intr_nmi_en<<I2C_INTR_NMI_EN_0_mst_stop_intr_nmi_en_OFS)&I2C_INTR_NMI_EN_0_mst_stop_intr_nmi_en_MASK) + ((mst_start_intr_nmi_en<<I2C_INTR_NMI_EN_0_mst_start_intr_nmi_en_OFS)&I2C_INTR_NMI_EN_0_mst_start_intr_nmi_en_MASK) + ((mst_nack_nmi_en<<I2C_INTR_NMI_EN_0_mst_nack_nmi_en_OFS)&I2C_INTR_NMI_EN_0_mst_nack_nmi_en_MASK);
}

static inline void I2C_INTR_NMI_EN_1_WRITE(I2C_REGS_s * registers, uint32_t dma_done_rx_nmi_en, uint32_t dma_done_tx_nmi_en, uint32_t txfifo_almost_empty_intr_nmi_en, uint32_t rxfifo_almost_full_intr_nmi_en) {
    registers->INTR_NMI_EN_1.packed_w =  + ((dma_done_rx_nmi_en<<I2C_INTR_NMI_EN_1_dma_done_rx_nmi_en_OFS)&I2C_INTR_NMI_EN_1_dma_done_rx_nmi_en_MASK) + ((dma_done_tx_nmi_en<<I2C_INTR_NMI_EN_1_dma_done_tx_nmi_en_OFS)&I2C_INTR_NMI_EN_1_dma_done_tx_nmi_en_MASK) + ((txfifo_almost_empty_intr_nmi_en<<I2C_INTR_NMI_EN_1_txfifo_almost_empty_intr_nmi_en_OFS)&I2C_INTR_NMI_EN_1_txfifo_almost_empty_intr_nmi_en_MASK) + ((rxfifo_almost_full_intr_nmi_en<<I2C_INTR_NMI_EN_1_rxfifo_almost_full_intr_nmi_en_OFS)&I2C_INTR_NMI_EN_1_rxfifo_almost_full_intr_nmi_en_MASK);
}

static inline void I2C_RX_DMA_EVENT_EN_0_WRITE(I2C_REGS_s * registers, uint32_t rx_dma_arb_lost_en, uint32_t rx_dma_slv_gencall_intr_en, uint32_t rx_dma_slv_start_en, uint32_t rx_dma_slv_stop_en, uint32_t rx_dma_tx_done_en, uint32_t rx_dma_rx_done_en, uint32_t rx_dma_smbus_timeout_en, uint32_t rx_dma_clkstretch_timeout_en, uint32_t rx_dma_pec_err_en, uint32_t rx_dma_txfifo_empty_en, uint32_t rx_dma_rxfifo_full_en, uint32_t rx_dma_txfifo_half_full_en, uint32_t rx_dma_rxfifo_half_full_en, uint32_t rx_dma_mst_stop_intr_en, uint32_t rx_dma_mst_start_intr_en, uint32_t rx_dma_mst_nack_en) {
    registers->RX_DMA_EVENT_EN_0.packed_w =  + ((rx_dma_arb_lost_en<<I2C_RX_DMA_EVENT_EN_0_rx_dma_arb_lost_en_OFS)&I2C_RX_DMA_EVENT_EN_0_rx_dma_arb_lost_en_MASK) + ((rx_dma_slv_gencall_intr_en<<I2C_RX_DMA_EVENT_EN_0_rx_dma_slv_gencall_intr_en_OFS)&I2C_RX_DMA_EVENT_EN_0_rx_dma_slv_gencall_intr_en_MASK) + ((rx_dma_slv_start_en<<I2C_RX_DMA_EVENT_EN_0_rx_dma_slv_start_en_OFS)&I2C_RX_DMA_EVENT_EN_0_rx_dma_slv_start_en_MASK) + ((rx_dma_slv_stop_en<<I2C_RX_DMA_EVENT_EN_0_rx_dma_slv_stop_en_OFS)&I2C_RX_DMA_EVENT_EN_0_rx_dma_slv_stop_en_MASK) + ((rx_dma_tx_done_en<<I2C_RX_DMA_EVENT_EN_0_rx_dma_tx_done_en_OFS)&I2C_RX_DMA_EVENT_EN_0_rx_dma_tx_done_en_MASK) + ((rx_dma_rx_done_en<<I2C_RX_DMA_EVENT_EN_0_rx_dma_rx_done_en_OFS)&I2C_RX_DMA_EVENT_EN_0_rx_dma_rx_done_en_MASK) + ((rx_dma_smbus_timeout_en<<I2C_RX_DMA_EVENT_EN_0_rx_dma_smbus_timeout_en_OFS)&I2C_RX_DMA_EVENT_EN_0_rx_dma_smbus_timeout_en_MASK) + ((rx_dma_clkstretch_timeout_en<<I2C_RX_DMA_EVENT_EN_0_rx_dma_clkstretch_timeout_en_OFS)&I2C_RX_DMA_EVENT_EN_0_rx_dma_clkstretch_timeout_en_MASK) + ((rx_dma_pec_err_en<<I2C_RX_DMA_EVENT_EN_0_rx_dma_pec_err_en_OFS)&I2C_RX_DMA_EVENT_EN_0_rx_dma_pec_err_en_MASK) + ((rx_dma_txfifo_empty_en<<I2C_RX_DMA_EVENT_EN_0_rx_dma_txfifo_empty_en_OFS)&I2C_RX_DMA_EVENT_EN_0_rx_dma_txfifo_empty_en_MASK) + ((rx_dma_rxfifo_full_en<<I2C_RX_DMA_EVENT_EN_0_rx_dma_rxfifo_full_en_OFS)&I2C_RX_DMA_EVENT_EN_0_rx_dma_rxfifo_full_en_MASK) + ((rx_dma_txfifo_half_full_en<<I2C_RX_DMA_EVENT_EN_0_rx_dma_txfifo_half_full_en_OFS)&I2C_RX_DMA_EVENT_EN_0_rx_dma_txfifo_half_full_en_MASK) + ((rx_dma_rxfifo_half_full_en<<I2C_RX_DMA_EVENT_EN_0_rx_dma_rxfifo_half_full_en_OFS)&I2C_RX_DMA_EVENT_EN_0_rx_dma_rxfifo_half_full_en_MASK) + ((rx_dma_mst_stop_intr_en<<I2C_RX_DMA_EVENT_EN_0_rx_dma_mst_stop_intr_en_OFS)&I2C_RX_DMA_EVENT_EN_0_rx_dma_mst_stop_intr_en_MASK) + ((rx_dma_mst_start_intr_en<<I2C_RX_DMA_EVENT_EN_0_rx_dma_mst_start_intr_en_OFS)&I2C_RX_DMA_EVENT_EN_0_rx_dma_mst_start_intr_en_MASK) + ((rx_dma_mst_nack_en<<I2C_RX_DMA_EVENT_EN_0_rx_dma_mst_nack_en_OFS)&I2C_RX_DMA_EVENT_EN_0_rx_dma_mst_nack_en_MASK);
}

static inline void I2C_RX_DMA_EVENT_EN_1_WRITE(I2C_REGS_s * registers, uint32_t rx_dma_dma_done_rx_en, uint32_t rx_dma_dma_done_tx_en, uint32_t rx_dma_txfifo_almost_empty_intr_en, uint32_t rx_dma_rxfifo_almost_full_intr_en) {
    registers->RX_DMA_EVENT_EN_1.packed_w =  + ((rx_dma_dma_done_rx_en<<I2C_RX_DMA_EVENT_EN_1_rx_dma_dma_done_rx_en_OFS)&I2C_RX_DMA_EVENT_EN_1_rx_dma_dma_done_rx_en_MASK) + ((rx_dma_dma_done_tx_en<<I2C_RX_DMA_EVENT_EN_1_rx_dma_dma_done_tx_en_OFS)&I2C_RX_DMA_EVENT_EN_1_rx_dma_dma_done_tx_en_MASK) + ((rx_dma_txfifo_almost_empty_intr_en<<I2C_RX_DMA_EVENT_EN_1_rx_dma_txfifo_almost_empty_intr_en_OFS)&I2C_RX_DMA_EVENT_EN_1_rx_dma_txfifo_almost_empty_intr_en_MASK) + ((rx_dma_rxfifo_almost_full_intr_en<<I2C_RX_DMA_EVENT_EN_1_rx_dma_rxfifo_almost_full_intr_en_OFS)&I2C_RX_DMA_EVENT_EN_1_rx_dma_rxfifo_almost_full_intr_en_MASK);
}

static inline void I2C_TX_DMA_EVENT_EN_0_WRITE(I2C_REGS_s * registers, uint32_t tx_dma_arb_lost_en, uint32_t tx_dma_slv_gencall_intr_en, uint32_t tx_dma_slv_start_en, uint32_t tx_dma_slv_stop_en, uint32_t tx_dma_tx_done_en, uint32_t tx_dma_rx_done_en, uint32_t tx_dma_smbus_timeout_en, uint32_t tx_dma_clkstretch_timeout_en, uint32_t tx_dma_pec_err_en, uint32_t tx_dma_txfifo_empty_en, uint32_t tx_dma_rxfifo_full_en, uint32_t tx_dma_txfifo_half_full_en, uint32_t tx_dma_rxfifo_half_full_en, uint32_t tx_dma_mst_stop_intr_en, uint32_t tx_dma_mst_start_intr_en, uint32_t tx_dma_mst_nack_en) {
    registers->TX_DMA_EVENT_EN_0.packed_w =  + ((tx_dma_arb_lost_en<<I2C_TX_DMA_EVENT_EN_0_tx_dma_arb_lost_en_OFS)&I2C_TX_DMA_EVENT_EN_0_tx_dma_arb_lost_en_MASK) + ((tx_dma_slv_gencall_intr_en<<I2C_TX_DMA_EVENT_EN_0_tx_dma_slv_gencall_intr_en_OFS)&I2C_TX_DMA_EVENT_EN_0_tx_dma_slv_gencall_intr_en_MASK) + ((tx_dma_slv_start_en<<I2C_TX_DMA_EVENT_EN_0_tx_dma_slv_start_en_OFS)&I2C_TX_DMA_EVENT_EN_0_tx_dma_slv_start_en_MASK) + ((tx_dma_slv_stop_en<<I2C_TX_DMA_EVENT_EN_0_tx_dma_slv_stop_en_OFS)&I2C_TX_DMA_EVENT_EN_0_tx_dma_slv_stop_en_MASK) + ((tx_dma_tx_done_en<<I2C_TX_DMA_EVENT_EN_0_tx_dma_tx_done_en_OFS)&I2C_TX_DMA_EVENT_EN_0_tx_dma_tx_done_en_MASK) + ((tx_dma_rx_done_en<<I2C_TX_DMA_EVENT_EN_0_tx_dma_rx_done_en_OFS)&I2C_TX_DMA_EVENT_EN_0_tx_dma_rx_done_en_MASK) + ((tx_dma_smbus_timeout_en<<I2C_TX_DMA_EVENT_EN_0_tx_dma_smbus_timeout_en_OFS)&I2C_TX_DMA_EVENT_EN_0_tx_dma_smbus_timeout_en_MASK) + ((tx_dma_clkstretch_timeout_en<<I2C_TX_DMA_EVENT_EN_0_tx_dma_clkstretch_timeout_en_OFS)&I2C_TX_DMA_EVENT_EN_0_tx_dma_clkstretch_timeout_en_MASK) + ((tx_dma_pec_err_en<<I2C_TX_DMA_EVENT_EN_0_tx_dma_pec_err_en_OFS)&I2C_TX_DMA_EVENT_EN_0_tx_dma_pec_err_en_MASK) + ((tx_dma_txfifo_empty_en<<I2C_TX_DMA_EVENT_EN_0_tx_dma_txfifo_empty_en_OFS)&I2C_TX_DMA_EVENT_EN_0_tx_dma_txfifo_empty_en_MASK) + ((tx_dma_rxfifo_full_en<<I2C_TX_DMA_EVENT_EN_0_tx_dma_rxfifo_full_en_OFS)&I2C_TX_DMA_EVENT_EN_0_tx_dma_rxfifo_full_en_MASK) + ((tx_dma_txfifo_half_full_en<<I2C_TX_DMA_EVENT_EN_0_tx_dma_txfifo_half_full_en_OFS)&I2C_TX_DMA_EVENT_EN_0_tx_dma_txfifo_half_full_en_MASK) + ((tx_dma_rxfifo_half_full_en<<I2C_TX_DMA_EVENT_EN_0_tx_dma_rxfifo_half_full_en_OFS)&I2C_TX_DMA_EVENT_EN_0_tx_dma_rxfifo_half_full_en_MASK) + ((tx_dma_mst_stop_intr_en<<I2C_TX_DMA_EVENT_EN_0_tx_dma_mst_stop_intr_en_OFS)&I2C_TX_DMA_EVENT_EN_0_tx_dma_mst_stop_intr_en_MASK) + ((tx_dma_mst_start_intr_en<<I2C_TX_DMA_EVENT_EN_0_tx_dma_mst_start_intr_en_OFS)&I2C_TX_DMA_EVENT_EN_0_tx_dma_mst_start_intr_en_MASK) + ((tx_dma_mst_nack_en<<I2C_TX_DMA_EVENT_EN_0_tx_dma_mst_nack_en_OFS)&I2C_TX_DMA_EVENT_EN_0_tx_dma_mst_nack_en_MASK);
}

static inline void I2C_TX_DMA_EVENT_EN_1_WRITE(I2C_REGS_s * registers, uint32_t tx_dma_dma_done_rx_en, uint32_t tx_dma_dma_done_tx_en, uint32_t tx_dma_txfifo_almost_empty_intr_en, uint32_t tx_dma_rxfifo_almost_full_intr_en) {
    registers->TX_DMA_EVENT_EN_1.packed_w =  + ((tx_dma_dma_done_rx_en<<I2C_TX_DMA_EVENT_EN_1_tx_dma_dma_done_rx_en_OFS)&I2C_TX_DMA_EVENT_EN_1_tx_dma_dma_done_rx_en_MASK) + ((tx_dma_dma_done_tx_en<<I2C_TX_DMA_EVENT_EN_1_tx_dma_dma_done_tx_en_OFS)&I2C_TX_DMA_EVENT_EN_1_tx_dma_dma_done_tx_en_MASK) + ((tx_dma_txfifo_almost_empty_intr_en<<I2C_TX_DMA_EVENT_EN_1_tx_dma_txfifo_almost_empty_intr_en_OFS)&I2C_TX_DMA_EVENT_EN_1_tx_dma_txfifo_almost_empty_intr_en_MASK) + ((tx_dma_rxfifo_almost_full_intr_en<<I2C_TX_DMA_EVENT_EN_1_tx_dma_rxfifo_almost_full_intr_en_OFS)&I2C_TX_DMA_EVENT_EN_1_tx_dma_rxfifo_almost_full_intr_en_MASK);
}

static inline void I2C_INTR_SW_SET_0_WRITE(I2C_REGS_s * registers, uint32_t arb_lost_sw_set, uint32_t slv_gencall_intr_sw_set, uint32_t slv_start_sw_set, uint32_t slv_stop_sw_set, uint32_t tx_done_sw_set, uint32_t rx_done_sw_set, uint32_t smbus_timeout_sw_set, uint32_t clkstretch_timeout_sw_set, uint32_t pec_err_sw_set, uint32_t txfifo_empty_sw_set, uint32_t rxfifo_full_sw_set, uint32_t txfifo_half_full_sw_set, uint32_t rxfifo_half_full_sw_set, uint32_t mst_stop_intr_sw_set, uint32_t mst_start_intr_sw_set, uint32_t mst_nack_sw_set) {
    registers->INTR_SW_SET_0.packed_w =  + ((arb_lost_sw_set<<I2C_INTR_SW_SET_0_arb_lost_sw_set_OFS)&I2C_INTR_SW_SET_0_arb_lost_sw_set_MASK) + ((slv_gencall_intr_sw_set<<I2C_INTR_SW_SET_0_slv_gencall_intr_sw_set_OFS)&I2C_INTR_SW_SET_0_slv_gencall_intr_sw_set_MASK) + ((slv_start_sw_set<<I2C_INTR_SW_SET_0_slv_start_sw_set_OFS)&I2C_INTR_SW_SET_0_slv_start_sw_set_MASK) + ((slv_stop_sw_set<<I2C_INTR_SW_SET_0_slv_stop_sw_set_OFS)&I2C_INTR_SW_SET_0_slv_stop_sw_set_MASK) + ((tx_done_sw_set<<I2C_INTR_SW_SET_0_tx_done_sw_set_OFS)&I2C_INTR_SW_SET_0_tx_done_sw_set_MASK) + ((rx_done_sw_set<<I2C_INTR_SW_SET_0_rx_done_sw_set_OFS)&I2C_INTR_SW_SET_0_rx_done_sw_set_MASK) + ((smbus_timeout_sw_set<<I2C_INTR_SW_SET_0_smbus_timeout_sw_set_OFS)&I2C_INTR_SW_SET_0_smbus_timeout_sw_set_MASK) + ((clkstretch_timeout_sw_set<<I2C_INTR_SW_SET_0_clkstretch_timeout_sw_set_OFS)&I2C_INTR_SW_SET_0_clkstretch_timeout_sw_set_MASK) + ((pec_err_sw_set<<I2C_INTR_SW_SET_0_pec_err_sw_set_OFS)&I2C_INTR_SW_SET_0_pec_err_sw_set_MASK) + ((txfifo_empty_sw_set<<I2C_INTR_SW_SET_0_txfifo_empty_sw_set_OFS)&I2C_INTR_SW_SET_0_txfifo_empty_sw_set_MASK) + ((rxfifo_full_sw_set<<I2C_INTR_SW_SET_0_rxfifo_full_sw_set_OFS)&I2C_INTR_SW_SET_0_rxfifo_full_sw_set_MASK) + ((txfifo_half_full_sw_set<<I2C_INTR_SW_SET_0_txfifo_half_full_sw_set_OFS)&I2C_INTR_SW_SET_0_txfifo_half_full_sw_set_MASK) + ((rxfifo_half_full_sw_set<<I2C_INTR_SW_SET_0_rxfifo_half_full_sw_set_OFS)&I2C_INTR_SW_SET_0_rxfifo_half_full_sw_set_MASK) + ((mst_stop_intr_sw_set<<I2C_INTR_SW_SET_0_mst_stop_intr_sw_set_OFS)&I2C_INTR_SW_SET_0_mst_stop_intr_sw_set_MASK) + ((mst_start_intr_sw_set<<I2C_INTR_SW_SET_0_mst_start_intr_sw_set_OFS)&I2C_INTR_SW_SET_0_mst_start_intr_sw_set_MASK) + ((mst_nack_sw_set<<I2C_INTR_SW_SET_0_mst_nack_sw_set_OFS)&I2C_INTR_SW_SET_0_mst_nack_sw_set_MASK);
}

static inline void I2C_INTR_SW_SET_1_WRITE(I2C_REGS_s * registers, uint32_t dma_done_rx_sw_set, uint32_t dma_done_tx_sw_set, uint32_t txfifo_almost_empty_intr_sw_set, uint32_t rxfifo_almost_full_intr_sw_set) {
    registers->INTR_SW_SET_1.packed_w =  + ((dma_done_rx_sw_set<<I2C_INTR_SW_SET_1_dma_done_rx_sw_set_OFS)&I2C_INTR_SW_SET_1_dma_done_rx_sw_set_MASK) + ((dma_done_tx_sw_set<<I2C_INTR_SW_SET_1_dma_done_tx_sw_set_OFS)&I2C_INTR_SW_SET_1_dma_done_tx_sw_set_MASK) + ((txfifo_almost_empty_intr_sw_set<<I2C_INTR_SW_SET_1_txfifo_almost_empty_intr_sw_set_OFS)&I2C_INTR_SW_SET_1_txfifo_almost_empty_intr_sw_set_MASK) + ((rxfifo_almost_full_intr_sw_set<<I2C_INTR_SW_SET_1_rxfifo_almost_full_intr_sw_set_OFS)&I2C_INTR_SW_SET_1_rxfifo_almost_full_intr_sw_set_MASK);
}

static inline void I2C_SPARE_CTRL_WRITE(I2C_REGS_s * registers, uint32_t cfg0, uint32_t cfg1) {
    registers->SPARE_CTRL.packed_w =  + ((cfg0<<I2C_SPARE_CTRL_cfg0_OFS)&I2C_SPARE_CTRL_cfg0_MASK) + ((cfg1<<I2C_SPARE_CTRL_cfg1_OFS)&I2C_SPARE_CTRL_cfg1_MASK);
}

static inline void I2C_SPARE_STS_WRITE(I2C_REGS_s * registers, uint32_t sts0, uint32_t sts1) {
    registers->SPARE_STS.packed_w =  + ((sts0<<I2C_SPARE_STS_sts0_OFS)&I2C_SPARE_STS_sts0_MASK) + ((sts1<<I2C_SPARE_STS_sts1_OFS)&I2C_SPARE_STS_sts1_MASK);
}

static inline void I2C_GLITCH_FILTER_CFG_WRITE(I2C_REGS_s * registers, uint32_t gf_width) {
    registers->GLITCH_FILTER_CFG.packed_w =  + ((gf_width<<I2C_GLITCH_FILTER_CFG_gf_width_OFS)&I2C_GLITCH_FILTER_CFG_gf_width_MASK);
}

static inline void I2C_SLAVE_CTRL_WRITE(I2C_REGS_s * registers, uint32_t slv_addr_mode, uint32_t slv_low_pwr_wakeup_en, uint32_t slv_def_dev_addr_en, uint32_t slv_alres_addr_en, uint32_t slv_def_host_addr_en, uint32_t slv_txtrig_at_txmode, uint32_t slv_clkstretch_en, uint32_t slv_gencall_en, uint32_t slv_enable, uint32_t slv_addr2_en, uint32_t slv_addr2_mask, uint32_t slv_txwait_stale_fifo, uint32_t slv_txempty_intr_on_tx_req) {
    registers->SLAVE_CTRL.packed_w =  + ((slv_addr_mode<<I2C_SLAVE_CTRL_slv_addr_mode_OFS)&I2C_SLAVE_CTRL_slv_addr_mode_MASK) + ((slv_low_pwr_wakeup_en<<I2C_SLAVE_CTRL_slv_low_pwr_wakeup_en_OFS)&I2C_SLAVE_CTRL_slv_low_pwr_wakeup_en_MASK) + ((slv_def_dev_addr_en<<I2C_SLAVE_CTRL_slv_def_dev_addr_en_OFS)&I2C_SLAVE_CTRL_slv_def_dev_addr_en_MASK) + ((slv_alres_addr_en<<I2C_SLAVE_CTRL_slv_alres_addr_en_OFS)&I2C_SLAVE_CTRL_slv_alres_addr_en_MASK) + ((slv_def_host_addr_en<<I2C_SLAVE_CTRL_slv_def_host_addr_en_OFS)&I2C_SLAVE_CTRL_slv_def_host_addr_en_MASK) + ((slv_txtrig_at_txmode<<I2C_SLAVE_CTRL_slv_txtrig_at_txmode_OFS)&I2C_SLAVE_CTRL_slv_txtrig_at_txmode_MASK) + ((slv_clkstretch_en<<I2C_SLAVE_CTRL_slv_clkstretch_en_OFS)&I2C_SLAVE_CTRL_slv_clkstretch_en_MASK) + ((slv_gencall_en<<I2C_SLAVE_CTRL_slv_gencall_en_OFS)&I2C_SLAVE_CTRL_slv_gencall_en_MASK) + ((slv_enable<<I2C_SLAVE_CTRL_slv_enable_OFS)&I2C_SLAVE_CTRL_slv_enable_MASK) + ((slv_addr2_en<<I2C_SLAVE_CTRL_slv_addr2_en_OFS)&I2C_SLAVE_CTRL_slv_addr2_en_MASK) + ((slv_addr2_mask<<I2C_SLAVE_CTRL_slv_addr2_mask_OFS)&I2C_SLAVE_CTRL_slv_addr2_mask_MASK) + ((slv_txwait_stale_fifo<<I2C_SLAVE_CTRL_slv_txwait_stale_fifo_OFS)&I2C_SLAVE_CTRL_slv_txwait_stale_fifo_MASK) + ((slv_txempty_intr_on_tx_req<<I2C_SLAVE_CTRL_slv_txempty_intr_on_tx_req_OFS)&I2C_SLAVE_CTRL_slv_txempty_intr_on_tx_req_MASK);
}

static inline void I2C_SLAVE_ADDR_WRITE(I2C_REGS_s * registers, uint32_t slv_addr1, uint32_t slv_addr2) {
    registers->SLAVE_ADDR.packed_w =  + ((slv_addr1<<I2C_SLAVE_ADDR_slv_addr1_OFS)&I2C_SLAVE_ADDR_slv_addr1_MASK) + ((slv_addr2<<I2C_SLAVE_ADDR_slv_addr2_OFS)&I2C_SLAVE_ADDR_slv_addr2_MASK);
}

static inline void I2C_SLAVE_STS_WRITE(I2C_REGS_s * registers, uint32_t slv_rx_req, uint32_t slv_tx_req, uint32_t slv_addr2_sel, uint32_t quick_cmd_sts, uint32_t quick_cmd_rw, uint32_t slv_addr_match, uint32_t slv_stale_txfifo, uint32_t slv_txmode, uint32_t slv_rxmode, uint32_t slv_busbsy) {
    registers->SLAVE_STS.packed_w =  + ((slv_rx_req<<I2C_SLAVE_STS_slv_rx_req_OFS)&I2C_SLAVE_STS_slv_rx_req_MASK) + ((slv_tx_req<<I2C_SLAVE_STS_slv_tx_req_OFS)&I2C_SLAVE_STS_slv_tx_req_MASK) + ((slv_addr2_sel<<I2C_SLAVE_STS_slv_addr2_sel_OFS)&I2C_SLAVE_STS_slv_addr2_sel_MASK) + ((quick_cmd_sts<<I2C_SLAVE_STS_quick_cmd_sts_OFS)&I2C_SLAVE_STS_quick_cmd_sts_MASK) + ((quick_cmd_rw<<I2C_SLAVE_STS_quick_cmd_rw_OFS)&I2C_SLAVE_STS_quick_cmd_rw_MASK) + ((slv_addr_match<<I2C_SLAVE_STS_slv_addr_match_OFS)&I2C_SLAVE_STS_slv_addr_match_MASK) + ((slv_stale_txfifo<<I2C_SLAVE_STS_slv_stale_txfifo_OFS)&I2C_SLAVE_STS_slv_stale_txfifo_MASK) + ((slv_txmode<<I2C_SLAVE_STS_slv_txmode_OFS)&I2C_SLAVE_STS_slv_txmode_MASK) + ((slv_rxmode<<I2C_SLAVE_STS_slv_rxmode_OFS)&I2C_SLAVE_STS_slv_rxmode_MASK) + ((slv_busbsy<<I2C_SLAVE_STS_slv_busbsy_OFS)&I2C_SLAVE_STS_slv_busbsy_MASK);
}

static inline void I2C_SLAVE_ACK_CFG_WRITE(I2C_REGS_s * registers, uint32_t slv_auto_ack_en, uint32_t slv_addr_auto_ack_en) {
    registers->SLAVE_ACK_CFG.packed_w =  + ((slv_auto_ack_en<<I2C_SLAVE_ACK_CFG_slv_auto_ack_en_OFS)&I2C_SLAVE_ACK_CFG_slv_auto_ack_en_MASK) + ((slv_addr_auto_ack_en<<I2C_SLAVE_ACK_CFG_slv_addr_auto_ack_en_OFS)&I2C_SLAVE_ACK_CFG_slv_addr_auto_ack_en_MASK);
}

static inline void I2C_SLAVE_BYTE_ACK_WRITE(I2C_REGS_s * registers, uint32_t slv_ackval) {
    registers->SLAVE_BYTE_ACK.packed_w =  + ((slv_ackval<<I2C_SLAVE_BYTE_ACK_slv_ackval_OFS)&I2C_SLAVE_BYTE_ACK_slv_ackval_MASK);
}

static inline void I2C_FIFO_CTRL_WRITE(I2C_REGS_s * registers, uint32_t rxfifo_en, uint32_t txfifo_en, uint32_t rxfifo_flush, uint32_t txfifo_flush) {
    registers->FIFO_CTRL.packed_w =  + ((rxfifo_en<<I2C_FIFO_CTRL_rxfifo_en_OFS)&I2C_FIFO_CTRL_rxfifo_en_MASK) + ((txfifo_en<<I2C_FIFO_CTRL_txfifo_en_OFS)&I2C_FIFO_CTRL_txfifo_en_MASK) + ((rxfifo_flush<<I2C_FIFO_CTRL_rxfifo_flush_OFS)&I2C_FIFO_CTRL_rxfifo_flush_MASK) + ((txfifo_flush<<I2C_FIFO_CTRL_txfifo_flush_OFS)&I2C_FIFO_CTRL_txfifo_flush_MASK);
}

static inline void I2C_FIFO_STS_WRITE(I2C_REGS_s * registers, uint32_t txfifo_flush_sts, uint32_t rxfifo_flush_sts, uint32_t txfifo_empty_sts, uint32_t txfifo_almost_empty, uint32_t txfifo_full, uint32_t rxfifo_empty, uint32_t rxfifo_almost_full, uint32_t rxfifo_full_sts) {
    registers->FIFO_STS.packed_w =  + ((txfifo_flush_sts<<I2C_FIFO_STS_txfifo_flush_sts_OFS)&I2C_FIFO_STS_txfifo_flush_sts_MASK) + ((rxfifo_flush_sts<<I2C_FIFO_STS_rxfifo_flush_sts_OFS)&I2C_FIFO_STS_rxfifo_flush_sts_MASK) + ((txfifo_empty_sts<<I2C_FIFO_STS_txfifo_empty_sts_OFS)&I2C_FIFO_STS_txfifo_empty_sts_MASK) + ((txfifo_almost_empty<<I2C_FIFO_STS_txfifo_almost_empty_OFS)&I2C_FIFO_STS_txfifo_almost_empty_MASK) + ((txfifo_full<<I2C_FIFO_STS_txfifo_full_OFS)&I2C_FIFO_STS_txfifo_full_MASK) + ((rxfifo_empty<<I2C_FIFO_STS_rxfifo_empty_OFS)&I2C_FIFO_STS_rxfifo_empty_MASK) + ((rxfifo_almost_full<<I2C_FIFO_STS_rxfifo_almost_full_OFS)&I2C_FIFO_STS_rxfifo_almost_full_MASK) + ((rxfifo_full_sts<<I2C_FIFO_STS_rxfifo_full_sts_OFS)&I2C_FIFO_STS_rxfifo_full_sts_MASK);
}

static inline void I2C_PEC_CTRL_WRITE(I2C_REGS_s * registers, uint32_t pec_en) {
    registers->PEC_CTRL.packed_w =  + ((pec_en<<I2C_PEC_CTRL_pec_en_OFS)&I2C_PEC_CTRL_pec_en_MASK);
}

static inline void I2C_PEC_STS_WRITE(I2C_REGS_s * registers, uint32_t pec_error) {
    registers->PEC_STS.packed_w =  + ((pec_error<<I2C_PEC_STS_pec_error_OFS)&I2C_PEC_STS_pec_error_MASK);
}

static inline void I2C_CRC_OUT_BYTE_WRITE(I2C_REGS_s * registers, uint32_t slv_crc_out_byte, uint32_t mst_crc_out_byte) {
    registers->CRC_OUT_BYTE.packed_w =  + ((slv_crc_out_byte<<I2C_CRC_OUT_BYTE_slv_crc_out_byte_OFS)&I2C_CRC_OUT_BYTE_slv_crc_out_byte_MASK) + ((mst_crc_out_byte<<I2C_CRC_OUT_BYTE_mst_crc_out_byte_OFS)&I2C_CRC_OUT_BYTE_mst_crc_out_byte_MASK);
}

static inline void I2C_MASTER_CFG_WRITE(I2C_REGS_s * registers, uint32_t mst_enable, uint32_t mst_clkstretch_en, uint32_t lpbk_mode, uint32_t mst_auto_ack_en, uint32_t mst_addr_mode, uint32_t mst_slv_addr_cfg) {
    registers->MASTER_CFG.packed_w =  + ((mst_enable<<I2C_MASTER_CFG_mst_enable_OFS)&I2C_MASTER_CFG_mst_enable_MASK) + ((mst_clkstretch_en<<I2C_MASTER_CFG_mst_clkstretch_en_OFS)&I2C_MASTER_CFG_mst_clkstretch_en_MASK) + ((lpbk_mode<<I2C_MASTER_CFG_lpbk_mode_OFS)&I2C_MASTER_CFG_lpbk_mode_MASK) + ((mst_auto_ack_en<<I2C_MASTER_CFG_mst_auto_ack_en_OFS)&I2C_MASTER_CFG_mst_auto_ack_en_MASK) + ((mst_addr_mode<<I2C_MASTER_CFG_mst_addr_mode_OFS)&I2C_MASTER_CFG_mst_addr_mode_MASK) + ((mst_slv_addr_cfg<<I2C_MASTER_CFG_mst_slv_addr_cfg_OFS)&I2C_MASTER_CFG_mst_slv_addr_cfg_MASK);
}

static inline void I2C_MASTER_CTRL_WRITE(I2C_REGS_s * registers, uint32_t mst_cmd_vld, uint32_t mst_burst_len, uint32_t mst_start, uint32_t mst_dir, uint32_t mst_stop, uint32_t mst_rd_on_txempty) {
    registers->MASTER_CTRL.packed_w =  + ((mst_cmd_vld<<I2C_MASTER_CTRL_mst_cmd_vld_OFS)&I2C_MASTER_CTRL_mst_cmd_vld_MASK) + ((mst_burst_len<<I2C_MASTER_CTRL_mst_burst_len_OFS)&I2C_MASTER_CTRL_mst_burst_len_MASK) + ((mst_start<<I2C_MASTER_CTRL_mst_start_OFS)&I2C_MASTER_CTRL_mst_start_MASK) + ((mst_dir<<I2C_MASTER_CTRL_mst_dir_OFS)&I2C_MASTER_CTRL_mst_dir_MASK) + ((mst_stop<<I2C_MASTER_CTRL_mst_stop_OFS)&I2C_MASTER_CTRL_mst_stop_MASK) + ((mst_rd_on_txempty<<I2C_MASTER_CTRL_mst_rd_on_txempty_OFS)&I2C_MASTER_CTRL_mst_rd_on_txempty_MASK);
}

static inline void I2C_MASTER_ACK_VAL_WRITE(I2C_REGS_s * registers, uint32_t mst_ackval) {
    registers->MASTER_ACK_VAL.packed_w =  + ((mst_ackval<<I2C_MASTER_ACK_VAL_mst_ackval_OFS)&I2C_MASTER_ACK_VAL_mst_ackval_MASK);
}

static inline void I2C_MASTER_STS_WRITE(I2C_REGS_s * registers, uint32_t mst_busbsy, uint32_t mst_idle, uint32_t mst_arblost, uint32_t mst_tx_data_ack, uint32_t mst_tx_addr_ack, uint32_t mst_tx_nack, uint32_t mst_fsm_busy, uint32_t mst_word_cnt) {
    registers->MASTER_STS.packed_w =  + ((mst_busbsy<<I2C_MASTER_STS_mst_busbsy_OFS)&I2C_MASTER_STS_mst_busbsy_MASK) + ((mst_idle<<I2C_MASTER_STS_mst_idle_OFS)&I2C_MASTER_STS_mst_idle_MASK) + ((mst_arblost<<I2C_MASTER_STS_mst_arblost_OFS)&I2C_MASTER_STS_mst_arblost_MASK) + ((mst_tx_data_ack<<I2C_MASTER_STS_mst_tx_data_ack_OFS)&I2C_MASTER_STS_mst_tx_data_ack_MASK) + ((mst_tx_addr_ack<<I2C_MASTER_STS_mst_tx_addr_ack_OFS)&I2C_MASTER_STS_mst_tx_addr_ack_MASK) + ((mst_tx_nack<<I2C_MASTER_STS_mst_tx_nack_OFS)&I2C_MASTER_STS_mst_tx_nack_MASK) + ((mst_fsm_busy<<I2C_MASTER_STS_mst_fsm_busy_OFS)&I2C_MASTER_STS_mst_fsm_busy_MASK) + ((mst_word_cnt<<I2C_MASTER_STS_mst_word_cnt_OFS)&I2C_MASTER_STS_mst_word_cnt_MASK);
}

static inline void I2C_MASTER_MON_WRITE(I2C_REGS_s * registers, uint32_t mst_sda_state, uint32_t mst_scl_state) {
    registers->MASTER_MON.packed_w =  + ((mst_sda_state<<I2C_MASTER_MON_mst_sda_state_OFS)&I2C_MASTER_MON_mst_sda_state_MASK) + ((mst_scl_state<<I2C_MASTER_MON_mst_scl_state_OFS)&I2C_MASTER_MON_mst_scl_state_MASK);
}

static inline void I2C_FSM_STATUS_WRITE(I2C_REGS_s * registers, uint32_t mst_state, uint32_t slv_state, uint32_t slv_quick_cmd_state) {
    registers->FSM_STATUS.packed_w =  + ((mst_state<<I2C_FSM_STATUS_mst_state_OFS)&I2C_FSM_STATUS_mst_state_MASK) + ((slv_state<<I2C_FSM_STATUS_slv_state_OFS)&I2C_FSM_STATUS_slv_state_MASK) + ((slv_quick_cmd_state<<I2C_FSM_STATUS_slv_quick_cmd_state_OFS)&I2C_FSM_STATUS_slv_quick_cmd_state_MASK);
}

