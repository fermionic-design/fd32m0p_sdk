#ifndef I2C_RW_API_H
#define I2C_RW_API_H

#include "I2C_REGS.h"

static inline void I2C_PWR_EN_WRITE(I2C_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w = ((pwr_en<<I2C_PWR_EN_PWR_EN_OFS) & I2C_PWR_EN_PWR_EN_MASK)
                                +((pwr_en_key<<I2C_PWR_EN_PWR_EN_KEY_OFS) & I2C_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void I2C_RST_CTRL_WRITE(I2C_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w = ((rst<<I2C_RST_CTRL_RST_OFS) & I2C_RST_CTRL_RST_MASK)
                                  +((rst_sts_clr<<I2C_RST_CTRL_RST_STS_CLR_OFS) & I2C_RST_CTRL_RST_STS_CLR_MASK)
                                  +((rst_key<<I2C_RST_CTRL_RST_KEY_OFS) & I2C_RST_CTRL_RST_KEY_MASK);
}

static inline void I2C_CLK_CTRL_WRITE(I2C_REGS_s * registers, uint32_t en_async_clk_req, uint32_t clksel, uint32_t clkdiv, uint32_t hold_cnt, uint32_t setup_cnt) {
    registers->CLK_CTRL.packed_w = ((en_async_clk_req<<I2C_CLK_CTRL_EN_ASYNC_CLK_REQ_OFS) & I2C_CLK_CTRL_EN_ASYNC_CLK_REQ_MASK)
                                  +((clksel<<I2C_CLK_CTRL_CLKSEL_OFS) & I2C_CLK_CTRL_CLKSEL_MASK)
                                  +((clkdiv<<I2C_CLK_CTRL_CLKDIV_OFS) & I2C_CLK_CTRL_CLKDIV_MASK)
                                  +((hold_cnt<<I2C_CLK_CTRL_HOLD_CNT_OFS) & I2C_CLK_CTRL_HOLD_CNT_MASK)
                                  +((setup_cnt<<I2C_CLK_CTRL_SETUP_CNT_OFS) & I2C_CLK_CTRL_SETUP_CNT_MASK);
}

static inline void I2C_DBG_CTRL_WRITE(I2C_REGS_s * registers, uint32_t run_on_halt, uint32_t soft_stop) {
    registers->DBG_CTRL.packed_w = ((run_on_halt<<I2C_DBG_CTRL_RUN_ON_HALT_OFS) & I2C_DBG_CTRL_RUN_ON_HALT_MASK)
                                  +((soft_stop<<I2C_DBG_CTRL_SOFT_STOP_OFS) & I2C_DBG_CTRL_SOFT_STOP_MASK);
}

static inline void I2C_MASTER_SCL_GEN_WRITE(I2C_REGS_s * registers, uint32_t mst_scl_cnt_high_val, uint32_t mst_scl_cnt_low_val) {
    registers->MASTER_SCL_GEN.packed_w = ((mst_scl_cnt_high_val<<I2C_MASTER_SCL_GEN_MST_SCL_CNT_HIGH_VAL_OFS) & I2C_MASTER_SCL_GEN_MST_SCL_CNT_HIGH_VAL_MASK)
                                        +((mst_scl_cnt_low_val<<I2C_MASTER_SCL_GEN_MST_SCL_CNT_LOW_VAL_OFS) & I2C_MASTER_SCL_GEN_MST_SCL_CNT_LOW_VAL_MASK);
}

static inline void I2C_MASTER_TIMING_CONSTRAINT_WRITE(I2C_REGS_s * registers, uint32_t mst_scl_start_cnt, uint32_t mst_sda_stop_cnt, uint32_t mst_stop_start_buffer_cnt, uint32_t mst_restart_setup_cnt) {
    registers->MASTER_TIMING_CONSTRAINT.packed_w = ((mst_scl_start_cnt<<I2C_MASTER_TIMING_CONSTRAINT_MST_SCL_START_CNT_OFS) & I2C_MASTER_TIMING_CONSTRAINT_MST_SCL_START_CNT_MASK)
                                                  +((mst_sda_stop_cnt<<I2C_MASTER_TIMING_CONSTRAINT_MST_SDA_STOP_CNT_OFS) & I2C_MASTER_TIMING_CONSTRAINT_MST_SDA_STOP_CNT_MASK)
                                                  +((mst_stop_start_buffer_cnt<<I2C_MASTER_TIMING_CONSTRAINT_MST_STOP_START_BUFFER_CNT_OFS) & I2C_MASTER_TIMING_CONSTRAINT_MST_STOP_START_BUFFER_CNT_MASK)
                                                  +((mst_restart_setup_cnt<<I2C_MASTER_TIMING_CONSTRAINT_MST_RESTART_SETUP_CNT_OFS) & I2C_MASTER_TIMING_CONSTRAINT_MST_RESTART_SETUP_CNT_MASK);
}

static inline void I2C_MASTER_CLKSTRETCH_CNT_WRITE(I2C_REGS_s * registers, uint32_t mst_max_clkstretch_cnt) {
    registers->MASTER_CLKSTRETCH_CNT.packed_w = ((mst_max_clkstretch_cnt<<I2C_MASTER_CLKSTRETCH_CNT_MST_MAX_CLKSTRETCH_CNT_OFS) & I2C_MASTER_CLKSTRETCH_CNT_MST_MAX_CLKSTRETCH_CNT_MASK);
}

static inline void I2C_SLAVE_CLKSTRETCH_CNT_WRITE(I2C_REGS_s * registers, uint32_t slv_max_clkstretch_cnt) {
    registers->SLAVE_CLKSTRETCH_CNT.packed_w = ((slv_max_clkstretch_cnt<<I2C_SLAVE_CLKSTRETCH_CNT_SLV_MAX_CLKSTRETCH_CNT_OFS) & I2C_SLAVE_CLKSTRETCH_CNT_SLV_MAX_CLKSTRETCH_CNT_MASK);
}

static inline void I2C_SMBUS_TIMEOUT_CNT_WRITE(I2C_REGS_s * registers, uint32_t smbus_timeout_cnt) {
    registers->SMBUS_TIMEOUT_CNT.packed_w = ((smbus_timeout_cnt<<I2C_SMBUS_TIMEOUT_CNT_SMBUS_TIMEOUT_CNT_OFS) & I2C_SMBUS_TIMEOUT_CNT_SMBUS_TIMEOUT_CNT_MASK);
}

static inline void I2C_INTR_EVENT_CLEAR(I2C_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_EVENT.packed_w = 1<<intr_idx;
}

static inline void I2C_INTR_EVENT_EN(I2C_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_EN_0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_EN_1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void I2C_INTR_EVENT_DIS(I2C_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_EN_0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_EN_1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void I2C_INTR_EVENT_NMI_EN(I2C_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_NMI_EN_0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_NMI_EN_1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void I2C_INTR_EVENT_NMI_DIS(I2C_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_NMI_EN_0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_NMI_EN_1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void I2C_GENERIC_RX_DMA_EVENT_EN_(I2C_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->RX_DMA_EVENT_EN_0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->RX_DMA_EVENT_EN_1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void I2C_GENERIC_RX_DMA_EVENT_DIS_(I2C_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->RX_DMA_EVENT_EN_0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->RX_DMA_EVENT_EN_1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void I2C_GENERIC_TX_DMA_EVENT_EN_(I2C_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->TX_DMA_EVENT_EN_0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->TX_DMA_EVENT_EN_1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void I2C_GENERIC_TX_DMA_EVENT_DIS_(I2C_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->TX_DMA_EVENT_EN_0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->TX_DMA_EVENT_EN_1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void I2C_INTR_SW_SET_0(I2C_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_SW_SET_0.packed_w = 1<<intr_idx;
}

static inline void I2C_INTR_SW_SET_1(I2C_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_SW_SET_1.packed_w = 1<<intr_idx;
}

static inline void I2C_SPARE_CTRL_WRITE(I2C_REGS_s * registers, uint32_t cfg0, uint32_t cfg1) {
    registers->SPARE_CTRL.packed_w = ((cfg0<<I2C_SPARE_CTRL_CFG0_OFS) & I2C_SPARE_CTRL_CFG0_MASK)
                                    +((cfg1<<I2C_SPARE_CTRL_CFG1_OFS) & I2C_SPARE_CTRL_CFG1_MASK);
}

static inline void I2C_GLITCH_FILTER_CFG_WRITE(I2C_REGS_s * registers, uint32_t gf_width) {
    registers->GLITCH_FILTER_CFG.packed_w = ((gf_width<<I2C_GLITCH_FILTER_CFG_GF_WIDTH_OFS) & I2C_GLITCH_FILTER_CFG_GF_WIDTH_MASK);
}

static inline void I2C_SLAVE_CTRL_WRITE(I2C_REGS_s * registers, uint32_t slv_addr_mode, uint32_t slv_low_pwr_wakeup_en, uint32_t slv_def_dev_addr_en, uint32_t slv_alres_addr_en, uint32_t slv_def_host_addr_en, uint32_t slv_txtrig_at_txmode, uint32_t slv_clkstretch_en, uint32_t slv_gencall_en, uint32_t slv_enable, uint32_t slv_addr2_en, uint32_t slv_addr2_mask, uint32_t slv_txwait_stale_fifo, uint32_t slv_txempty_intr_on_tx_req) {
    registers->SLAVE_CTRL.packed_w = ((slv_addr_mode<<I2C_SLAVE_CTRL_SLV_ADDR_MODE_OFS) & I2C_SLAVE_CTRL_SLV_ADDR_MODE_MASK)
                                    +((slv_low_pwr_wakeup_en<<I2C_SLAVE_CTRL_SLV_LOW_PWR_WAKEUP_EN_OFS) & I2C_SLAVE_CTRL_SLV_LOW_PWR_WAKEUP_EN_MASK)
                                    +((slv_def_dev_addr_en<<I2C_SLAVE_CTRL_SLV_DEF_DEV_ADDR_EN_OFS) & I2C_SLAVE_CTRL_SLV_DEF_DEV_ADDR_EN_MASK)
                                    +((slv_alres_addr_en<<I2C_SLAVE_CTRL_SLV_ALRES_ADDR_EN_OFS) & I2C_SLAVE_CTRL_SLV_ALRES_ADDR_EN_MASK)
                                    +((slv_def_host_addr_en<<I2C_SLAVE_CTRL_SLV_DEF_HOST_ADDR_EN_OFS) & I2C_SLAVE_CTRL_SLV_DEF_HOST_ADDR_EN_MASK)
                                    +((slv_txtrig_at_txmode<<I2C_SLAVE_CTRL_SLV_TXTRIG_AT_TXMODE_OFS) & I2C_SLAVE_CTRL_SLV_TXTRIG_AT_TXMODE_MASK)
                                    +((slv_clkstretch_en<<I2C_SLAVE_CTRL_SLV_CLKSTRETCH_EN_OFS) & I2C_SLAVE_CTRL_SLV_CLKSTRETCH_EN_MASK)
                                    +((slv_gencall_en<<I2C_SLAVE_CTRL_SLV_GENCALL_EN_OFS) & I2C_SLAVE_CTRL_SLV_GENCALL_EN_MASK)
                                    +((slv_enable<<I2C_SLAVE_CTRL_SLV_ENABLE_OFS) & I2C_SLAVE_CTRL_SLV_ENABLE_MASK)
                                    +((slv_addr2_en<<I2C_SLAVE_CTRL_SLV_ADDR2_EN_OFS) & I2C_SLAVE_CTRL_SLV_ADDR2_EN_MASK)
                                    +((slv_addr2_mask<<I2C_SLAVE_CTRL_SLV_ADDR2_MASK_OFS) & I2C_SLAVE_CTRL_SLV_ADDR2_MASK_MASK)
                                    +((slv_txwait_stale_fifo<<I2C_SLAVE_CTRL_SLV_TXWAIT_STALE_FIFO_OFS) & I2C_SLAVE_CTRL_SLV_TXWAIT_STALE_FIFO_MASK)
                                    +((slv_txempty_intr_on_tx_req<<I2C_SLAVE_CTRL_SLV_TXEMPTY_INTR_ON_TX_REQ_OFS) & I2C_SLAVE_CTRL_SLV_TXEMPTY_INTR_ON_TX_REQ_MASK);
}

static inline void I2C_SLAVE_ADDR_WRITE(I2C_REGS_s * registers, uint32_t slv_addr1, uint32_t slv_addr2) {
    registers->SLAVE_ADDR.packed_w = ((slv_addr1<<I2C_SLAVE_ADDR_SLV_ADDR1_OFS) & I2C_SLAVE_ADDR_SLV_ADDR1_MASK)
                                    +((slv_addr2<<I2C_SLAVE_ADDR_SLV_ADDR2_OFS) & I2C_SLAVE_ADDR_SLV_ADDR2_MASK);
}

static inline void I2C_SLAVE_ACK_CFG_WRITE(I2C_REGS_s * registers, uint32_t slv_auto_ack_en, uint32_t slv_addr_auto_ack_en) {
    registers->SLAVE_ACK_CFG.packed_w = ((slv_auto_ack_en<<I2C_SLAVE_ACK_CFG_SLV_AUTO_ACK_EN_OFS) & I2C_SLAVE_ACK_CFG_SLV_AUTO_ACK_EN_MASK)
                                       +((slv_addr_auto_ack_en<<I2C_SLAVE_ACK_CFG_SLV_ADDR_AUTO_ACK_EN_OFS) & I2C_SLAVE_ACK_CFG_SLV_ADDR_AUTO_ACK_EN_MASK);
}

static inline void I2C_SLAVE_BYTE_ACK_WRITE(I2C_REGS_s * registers, uint32_t slv_ackval) {
    registers->SLAVE_BYTE_ACK.packed_w = ((slv_ackval<<I2C_SLAVE_BYTE_ACK_SLV_ACKVAL_OFS) & I2C_SLAVE_BYTE_ACK_SLV_ACKVAL_MASK);
}

static inline void I2C_FIFO_CTRL_WRITE(I2C_REGS_s * registers, uint32_t rxfifo_en, uint32_t txfifo_en, uint32_t rxfifo_flush, uint32_t txfifo_flush) {
    registers->FIFO_CTRL.packed_w = ((rxfifo_en<<I2C_FIFO_CTRL_RXFIFO_EN_OFS) & I2C_FIFO_CTRL_RXFIFO_EN_MASK)
                                   +((txfifo_en<<I2C_FIFO_CTRL_TXFIFO_EN_OFS) & I2C_FIFO_CTRL_TXFIFO_EN_MASK)
                                   +((rxfifo_flush<<I2C_FIFO_CTRL_RXFIFO_FLUSH_OFS) & I2C_FIFO_CTRL_RXFIFO_FLUSH_MASK)
                                   +((txfifo_flush<<I2C_FIFO_CTRL_TXFIFO_FLUSH_OFS) & I2C_FIFO_CTRL_TXFIFO_FLUSH_MASK);
}

static inline void I2C_TXDATA_N_WRITE(I2C_REGS_s * registers, uint32_t index, uint32_t txdata) {
    registers->TXDATA[index].packed_w = ((txdata<<I2C_TXDATA_TXDATA_OFS) & I2C_TXDATA_TXDATA_MASK);
}

static inline void I2C_PEC_CTRL_WRITE(I2C_REGS_s * registers, uint32_t pec_en) {
    registers->PEC_CTRL.packed_w = ((pec_en<<I2C_PEC_CTRL_PEC_EN_OFS) & I2C_PEC_CTRL_PEC_EN_MASK);
}

static inline void I2C_MASTER_CFG_WRITE(I2C_REGS_s * registers, uint32_t mst_enable, uint32_t mst_clkstretch_en, uint32_t lpbk_mode, uint32_t mst_auto_ack_en, uint32_t mst_addr_mode, uint32_t mst_slv_addr_cfg) {
    registers->MASTER_CFG.packed_w = ((mst_enable<<I2C_MASTER_CFG_MST_ENABLE_OFS) & I2C_MASTER_CFG_MST_ENABLE_MASK)
                                    +((mst_clkstretch_en<<I2C_MASTER_CFG_MST_CLKSTRETCH_EN_OFS) & I2C_MASTER_CFG_MST_CLKSTRETCH_EN_MASK)
                                    +((lpbk_mode<<I2C_MASTER_CFG_LPBK_MODE_OFS) & I2C_MASTER_CFG_LPBK_MODE_MASK)
                                    +((mst_auto_ack_en<<I2C_MASTER_CFG_MST_AUTO_ACK_EN_OFS) & I2C_MASTER_CFG_MST_AUTO_ACK_EN_MASK)
                                    +((mst_addr_mode<<I2C_MASTER_CFG_MST_ADDR_MODE_OFS) & I2C_MASTER_CFG_MST_ADDR_MODE_MASK)
                                    +((mst_slv_addr_cfg<<I2C_MASTER_CFG_MST_SLV_ADDR_CFG_OFS) & I2C_MASTER_CFG_MST_SLV_ADDR_CFG_MASK);
}

static inline void I2C_MASTER_CTRL_WRITE(I2C_REGS_s * registers, uint32_t mst_cmd_vld, uint32_t mst_burst_len, uint32_t mst_start, uint32_t mst_dir, uint32_t mst_stop, uint32_t mst_rd_on_txempty) {
    registers->MASTER_CTRL.packed_w = ((mst_cmd_vld<<I2C_MASTER_CTRL_MST_CMD_VLD_OFS) & I2C_MASTER_CTRL_MST_CMD_VLD_MASK)
                                     +((mst_burst_len<<I2C_MASTER_CTRL_MST_BURST_LEN_OFS) & I2C_MASTER_CTRL_MST_BURST_LEN_MASK)
                                     +((mst_start<<I2C_MASTER_CTRL_MST_START_OFS) & I2C_MASTER_CTRL_MST_START_MASK)
                                     +((mst_dir<<I2C_MASTER_CTRL_MST_DIR_OFS) & I2C_MASTER_CTRL_MST_DIR_MASK)
                                     +((mst_stop<<I2C_MASTER_CTRL_MST_STOP_OFS) & I2C_MASTER_CTRL_MST_STOP_MASK)
                                     +((mst_rd_on_txempty<<I2C_MASTER_CTRL_MST_RD_ON_TXEMPTY_OFS) & I2C_MASTER_CTRL_MST_RD_ON_TXEMPTY_MASK);
}

static inline void I2C_MASTER_ACK_VAL_WRITE(I2C_REGS_s * registers, uint32_t mst_ackval) {
    registers->MASTER_ACK_VAL.packed_w = ((mst_ackval<<I2C_MASTER_ACK_VAL_MST_ACKVAL_OFS) & I2C_MASTER_ACK_VAL_MST_ACKVAL_MASK);
}


#endif
