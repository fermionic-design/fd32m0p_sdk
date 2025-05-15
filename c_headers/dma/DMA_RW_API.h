#include "DMA_REGS.h"

static inline void DMA_PWR_EN_WRITE(DMA_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w = ((pwr_en<<DMA_PWR_EN_PWR_EN_OFS) & DMA_PWR_EN_PWR_EN_MASK)
                                +((pwr_en_key<<DMA_PWR_EN_PWR_EN_KEY_OFS) & DMA_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void DMA_RST_CTRL_WRITE(DMA_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w = ((rst<<DMA_RST_CTRL_RST_OFS) & DMA_RST_CTRL_RST_MASK)
                                  +((rst_sts_clr<<DMA_RST_CTRL_RST_STS_CLR_OFS) & DMA_RST_CTRL_RST_STS_CLR_MASK)
                                  +((rst_key<<DMA_RST_CTRL_RST_KEY_OFS) & DMA_RST_CTRL_RST_KEY_MASK);
}

static inline void DMA_CLK_CTRL_WRITE(DMA_REGS_s * registers, uint32_t clk_en) {
    registers->CLK_CTRL.packed_w = ((clk_en<<DMA_CLK_CTRL_CLK_EN_OFS) & DMA_CLK_CTRL_CLK_EN_MASK);
}

static inline void DMA_DBG_CTRL_WRITE(DMA_REGS_s * registers, uint32_t halt_mode) {
    registers->DBG_CTRL.packed_w = ((halt_mode<<DMA_DBG_CTRL_HALT_MODE_OFS) & DMA_DBG_CTRL_HALT_MODE_MASK);
}

static inline void DMA_INTR_EVENT_CLEAR(DMA_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_EVENT.packed_w = 1<<intr_idx;
}

static inline void DMA_INTR_EVENT_EN(DMA_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_EN_0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_EN_1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void DMA_INTR_EVENT_DIS(DMA_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_EN_0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_EN_1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void DMA_INTR_EVENT_NMI_EN(DMA_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_NMI_EN_0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_NMI_EN_1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void DMA_INTR_EVENT_NMI_DIS(DMA_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_NMI_EN_0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_NMI_EN_1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void DMA_GENERIC_EVENT_EN_(DMA_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->EVENT_EN_0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->EVENT_EN_1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void DMA_GENERIC_EVENT_DIS_(DMA_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->EVENT_EN_0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->EVENT_EN_1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void DMA_INTR_SW_SET(DMA_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_SW_SET.packed_w = 1<<intr_idx;
}

static inline void DMA_CFG_0_WRITE(DMA_REGS_s * registers, uint32_t ctrl_base_ptr) {
    registers->CFG_0.packed_w = ((ctrl_base_ptr<<DMA_CFG_0_CTRL_BASE_PTR_OFS) & DMA_CFG_0_CTRL_BASE_PTR_MASK);
}

static inline void DMA_CFG_1_WRITE(DMA_REGS_s * registers, uint32_t alt_ctrl_base_ptr) {
    registers->CFG_1.packed_w = ((alt_ctrl_base_ptr<<DMA_CFG_1_ALT_CTRL_BASE_PTR_OFS) & DMA_CFG_1_ALT_CTRL_BASE_PTR_MASK);
}

static inline void DMA_CFG_2_WRITE(DMA_REGS_s * registers, uint32_t chnls_minus_1, uint32_t master_enable) {
    registers->CFG_2.packed_w = ((chnls_minus_1<<DMA_CFG_2_CHNLS_MINUS_1_OFS) & DMA_CFG_2_CHNLS_MINUS_1_MASK)
                               +((master_enable<<DMA_CFG_2_MASTER_ENABLE_OFS) & DMA_CFG_2_MASTER_ENABLE_MASK);
}

static inline void DMA_WAITONREQ_WRITE(DMA_REGS_s * registers, uint32_t waitonreq) {
    registers->WAITONREQ.packed_w = ((waitonreq<<DMA_WAITONREQ_WAITONREQ_OFS) & DMA_WAITONREQ_WAITONREQ_MASK);
}

static inline void DMA_FILL_MODE_WRITE(DMA_REGS_s * registers, uint32_t fill_mode_en) {
    registers->FILL_MODE.packed_w = ((fill_mode_en<<DMA_FILL_MODE_FILL_MODE_EN_OFS) & DMA_FILL_MODE_FILL_MODE_EN_MASK);
}

static inline void DMA_FILL_MODE_CFG_WRITE(DMA_REGS_s * registers, uint32_t fill_mode_chnl_no, uint32_t fill_mode_incr_val, uint32_t fill_mode_init_val) {
    registers->FILL_MODE_CFG.packed_w = ((fill_mode_chnl_no<<DMA_FILL_MODE_CFG_FILL_MODE_CHNL_NO_OFS) & DMA_FILL_MODE_CFG_FILL_MODE_CHNL_NO_MASK)
                                       +((fill_mode_incr_val<<DMA_FILL_MODE_CFG_FILL_MODE_INCR_VAL_OFS) & DMA_FILL_MODE_CFG_FILL_MODE_INCR_VAL_MASK)
                                       +((fill_mode_init_val<<DMA_FILL_MODE_CFG_FILL_MODE_INIT_VAL_OFS) & DMA_FILL_MODE_CFG_FILL_MODE_INIT_VAL_MASK);
}

static inline void DMA_STRIDE_MODE_WRITE(DMA_REGS_s * registers, uint32_t stride_mode_en) {
    registers->STRIDE_MODE.packed_w = ((stride_mode_en<<DMA_STRIDE_MODE_STRIDE_MODE_EN_OFS) & DMA_STRIDE_MODE_STRIDE_MODE_EN_MASK);
}

static inline void DMA_STRIDE_MODE_CFG_0_WRITE(DMA_REGS_s * registers, uint32_t stride_mode_chnl_no, uint32_t src_stride_val, uint32_t dst_stride_val, uint32_t src_inc, uint32_t dst_inc) {
    registers->STRIDE_MODE_CFG_0.packed_w = ((stride_mode_chnl_no<<DMA_STRIDE_MODE_CFG_0_STRIDE_MODE_CHNL_NO_OFS) & DMA_STRIDE_MODE_CFG_0_STRIDE_MODE_CHNL_NO_MASK)
                                           +((src_stride_val<<DMA_STRIDE_MODE_CFG_0_SRC_STRIDE_VAL_OFS) & DMA_STRIDE_MODE_CFG_0_SRC_STRIDE_VAL_MASK)
                                           +((dst_stride_val<<DMA_STRIDE_MODE_CFG_0_DST_STRIDE_VAL_OFS) & DMA_STRIDE_MODE_CFG_0_DST_STRIDE_VAL_MASK)
                                           +((src_inc<<DMA_STRIDE_MODE_CFG_0_SRC_INC_OFS) & DMA_STRIDE_MODE_CFG_0_SRC_INC_MASK)
                                           +((dst_inc<<DMA_STRIDE_MODE_CFG_0_DST_INC_OFS) & DMA_STRIDE_MODE_CFG_0_DST_INC_MASK);
}

static inline void DMA_STRIDE_MODE_CFG_1_WRITE(DMA_REGS_s * registers, uint32_t stride_mode_src_base_addr) {
    registers->STRIDE_MODE_CFG_1.packed_w = ((stride_mode_src_base_addr<<DMA_STRIDE_MODE_CFG_1_STRIDE_MODE_SRC_BASE_ADDR_OFS) & DMA_STRIDE_MODE_CFG_1_STRIDE_MODE_SRC_BASE_ADDR_MASK);
}

static inline void DMA_STRIDE_MODE_CFG_2_WRITE(DMA_REGS_s * registers, uint32_t stride_mode_dst_base_addr) {
    registers->STRIDE_MODE_CFG_2.packed_w = ((stride_mode_dst_base_addr<<DMA_STRIDE_MODE_CFG_2_STRIDE_MODE_DST_BASE_ADDR_OFS) & DMA_STRIDE_MODE_CFG_2_STRIDE_MODE_DST_BASE_ADDR_MASK);
}

static inline void DMA_EARLY_IRQ_0_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl0) {
    registers->EARLY_IRQ_0.packed_w = ((rem_transaction_chnl0<<DMA_EARLY_IRQ_0_REM_TRANSACTION_CHNL0_OFS) & DMA_EARLY_IRQ_0_REM_TRANSACTION_CHNL0_MASK);
}

static inline void DMA_EARLY_IRQ_1_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl1) {
    registers->EARLY_IRQ_1.packed_w = ((rem_transaction_chnl1<<DMA_EARLY_IRQ_1_REM_TRANSACTION_CHNL1_OFS) & DMA_EARLY_IRQ_1_REM_TRANSACTION_CHNL1_MASK);
}

static inline void DMA_EARLY_IRQ_2_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl2) {
    registers->EARLY_IRQ_2.packed_w = ((rem_transaction_chnl2<<DMA_EARLY_IRQ_2_REM_TRANSACTION_CHNL2_OFS) & DMA_EARLY_IRQ_2_REM_TRANSACTION_CHNL2_MASK);
}

static inline void DMA_EARLY_IRQ_3_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl3) {
    registers->EARLY_IRQ_3.packed_w = ((rem_transaction_chnl3<<DMA_EARLY_IRQ_3_REM_TRANSACTION_CHNL3_OFS) & DMA_EARLY_IRQ_3_REM_TRANSACTION_CHNL3_MASK);
}

static inline void DMA_EARLY_IRQ_4_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl4) {
    registers->EARLY_IRQ_4.packed_w = ((rem_transaction_chnl4<<DMA_EARLY_IRQ_4_REM_TRANSACTION_CHNL4_OFS) & DMA_EARLY_IRQ_4_REM_TRANSACTION_CHNL4_MASK);
}

static inline void DMA_EARLY_IRQ_5_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl5) {
    registers->EARLY_IRQ_5.packed_w = ((rem_transaction_chnl5<<DMA_EARLY_IRQ_5_REM_TRANSACTION_CHNL5_OFS) & DMA_EARLY_IRQ_5_REM_TRANSACTION_CHNL5_MASK);
}

static inline void DMA_EARLY_IRQ_6_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl6) {
    registers->EARLY_IRQ_6.packed_w = ((rem_transaction_chnl6<<DMA_EARLY_IRQ_6_REM_TRANSACTION_CHNL6_OFS) & DMA_EARLY_IRQ_6_REM_TRANSACTION_CHNL6_MASK);
}

static inline void DMA_EARLY_IRQ_7_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl7) {
    registers->EARLY_IRQ_7.packed_w = ((rem_transaction_chnl7<<DMA_EARLY_IRQ_7_REM_TRANSACTION_CHNL7_OFS) & DMA_EARLY_IRQ_7_REM_TRANSACTION_CHNL7_MASK);
}

static inline void DMA_EARLY_IRQ_8_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl8) {
    registers->EARLY_IRQ_8.packed_w = ((rem_transaction_chnl8<<DMA_EARLY_IRQ_8_REM_TRANSACTION_CHNL8_OFS) & DMA_EARLY_IRQ_8_REM_TRANSACTION_CHNL8_MASK);
}

static inline void DMA_EARLY_IRQ_9_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl9) {
    registers->EARLY_IRQ_9.packed_w = ((rem_transaction_chnl9<<DMA_EARLY_IRQ_9_REM_TRANSACTION_CHNL9_OFS) & DMA_EARLY_IRQ_9_REM_TRANSACTION_CHNL9_MASK);
}

static inline void DMA_EARLY_IRQ_10_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl10) {
    registers->EARLY_IRQ_10.packed_w = ((rem_transaction_chnl10<<DMA_EARLY_IRQ_10_REM_TRANSACTION_CHNL10_OFS) & DMA_EARLY_IRQ_10_REM_TRANSACTION_CHNL10_MASK);
}

static inline void DMA_EARLY_IRQ_11_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl11) {
    registers->EARLY_IRQ_11.packed_w = ((rem_transaction_chnl11<<DMA_EARLY_IRQ_11_REM_TRANSACTION_CHNL11_OFS) & DMA_EARLY_IRQ_11_REM_TRANSACTION_CHNL11_MASK);
}

static inline void DMA_EARLY_IRQ_12_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl12) {
    registers->EARLY_IRQ_12.packed_w = ((rem_transaction_chnl12<<DMA_EARLY_IRQ_12_REM_TRANSACTION_CHNL12_OFS) & DMA_EARLY_IRQ_12_REM_TRANSACTION_CHNL12_MASK);
}

static inline void DMA_EARLY_IRQ_13_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl13) {
    registers->EARLY_IRQ_13.packed_w = ((rem_transaction_chnl13<<DMA_EARLY_IRQ_13_REM_TRANSACTION_CHNL13_OFS) & DMA_EARLY_IRQ_13_REM_TRANSACTION_CHNL13_MASK);
}

static inline void DMA_EARLY_IRQ_14_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl14) {
    registers->EARLY_IRQ_14.packed_w = ((rem_transaction_chnl14<<DMA_EARLY_IRQ_14_REM_TRANSACTION_CHNL14_OFS) & DMA_EARLY_IRQ_14_REM_TRANSACTION_CHNL14_MASK);
}

static inline void DMA_EARLY_IRQ_15_WRITE(DMA_REGS_s * registers, uint32_t rem_transaction_chnl15) {
    registers->EARLY_IRQ_15.packed_w = ((rem_transaction_chnl15<<DMA_EARLY_IRQ_15_REM_TRANSACTION_CHNL15_OFS) & DMA_EARLY_IRQ_15_REM_TRANSACTION_CHNL15_MASK);
}

static inline void DMA_EARLY_IRQ_CFG_WRITE(DMA_REGS_s * registers, uint32_t early_irq_alternate_sel) {
    registers->EARLY_IRQ_CFG.packed_w = ((early_irq_alternate_sel<<DMA_EARLY_IRQ_CFG_EARLY_IRQ_ALTERNATE_SEL_OFS) & DMA_EARLY_IRQ_CFG_EARLY_IRQ_ALTERNATE_SEL_MASK);
}

static inline void DMA_REPEATED_TRANSFER_EN_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_en) {
    registers->REPEATED_TRANSFER_EN.packed_w = ((rptd_trnsfr_en<<DMA_REPEATED_TRANSFER_EN_RPTD_TRNSFR_EN_OFS) & DMA_REPEATED_TRANSFER_EN_RPTD_TRNSFR_EN_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_0_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl0) {
    registers->REPEATED_TRANSFER_CHNL_0.packed_w = ((rptd_trnsfr_total_transaction_chnl0<<DMA_REPEATED_TRANSFER_CHNL_0_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL0_OFS) & DMA_REPEATED_TRANSFER_CHNL_0_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL0_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_1_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl1) {
    registers->REPEATED_TRANSFER_CHNL_1.packed_w = ((rptd_trnsfr_total_transaction_chnl1<<DMA_REPEATED_TRANSFER_CHNL_1_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL1_OFS) & DMA_REPEATED_TRANSFER_CHNL_1_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL1_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_2_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl2) {
    registers->REPEATED_TRANSFER_CHNL_2.packed_w = ((rptd_trnsfr_total_transaction_chnl2<<DMA_REPEATED_TRANSFER_CHNL_2_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL2_OFS) & DMA_REPEATED_TRANSFER_CHNL_2_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL2_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_3_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl3) {
    registers->REPEATED_TRANSFER_CHNL_3.packed_w = ((rptd_trnsfr_total_transaction_chnl3<<DMA_REPEATED_TRANSFER_CHNL_3_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL3_OFS) & DMA_REPEATED_TRANSFER_CHNL_3_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL3_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_4_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl4) {
    registers->REPEATED_TRANSFER_CHNL_4.packed_w = ((rptd_trnsfr_total_transaction_chnl4<<DMA_REPEATED_TRANSFER_CHNL_4_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL4_OFS) & DMA_REPEATED_TRANSFER_CHNL_4_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL4_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_5_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl5) {
    registers->REPEATED_TRANSFER_CHNL_5.packed_w = ((rptd_trnsfr_total_transaction_chnl5<<DMA_REPEATED_TRANSFER_CHNL_5_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL5_OFS) & DMA_REPEATED_TRANSFER_CHNL_5_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL5_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_6_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl6) {
    registers->REPEATED_TRANSFER_CHNL_6.packed_w = ((rptd_trnsfr_total_transaction_chnl6<<DMA_REPEATED_TRANSFER_CHNL_6_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL6_OFS) & DMA_REPEATED_TRANSFER_CHNL_6_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL6_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_7_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl7) {
    registers->REPEATED_TRANSFER_CHNL_7.packed_w = ((rptd_trnsfr_total_transaction_chnl7<<DMA_REPEATED_TRANSFER_CHNL_7_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL7_OFS) & DMA_REPEATED_TRANSFER_CHNL_7_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL7_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_8_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl8) {
    registers->REPEATED_TRANSFER_CHNL_8.packed_w = ((rptd_trnsfr_total_transaction_chnl8<<DMA_REPEATED_TRANSFER_CHNL_8_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL8_OFS) & DMA_REPEATED_TRANSFER_CHNL_8_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL8_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_9_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl9) {
    registers->REPEATED_TRANSFER_CHNL_9.packed_w = ((rptd_trnsfr_total_transaction_chnl9<<DMA_REPEATED_TRANSFER_CHNL_9_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL9_OFS) & DMA_REPEATED_TRANSFER_CHNL_9_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL9_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_10_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl10) {
    registers->REPEATED_TRANSFER_CHNL_10.packed_w = ((rptd_trnsfr_total_transaction_chnl10<<DMA_REPEATED_TRANSFER_CHNL_10_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL10_OFS) & DMA_REPEATED_TRANSFER_CHNL_10_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL10_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_11_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl11) {
    registers->REPEATED_TRANSFER_CHNL_11.packed_w = ((rptd_trnsfr_total_transaction_chnl11<<DMA_REPEATED_TRANSFER_CHNL_11_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL11_OFS) & DMA_REPEATED_TRANSFER_CHNL_11_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL11_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_12_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl12) {
    registers->REPEATED_TRANSFER_CHNL_12.packed_w = ((rptd_trnsfr_total_transaction_chnl12<<DMA_REPEATED_TRANSFER_CHNL_12_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL12_OFS) & DMA_REPEATED_TRANSFER_CHNL_12_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL12_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_13_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl13) {
    registers->REPEATED_TRANSFER_CHNL_13.packed_w = ((rptd_trnsfr_total_transaction_chnl13<<DMA_REPEATED_TRANSFER_CHNL_13_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL13_OFS) & DMA_REPEATED_TRANSFER_CHNL_13_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL13_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_14_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl14) {
    registers->REPEATED_TRANSFER_CHNL_14.packed_w = ((rptd_trnsfr_total_transaction_chnl14<<DMA_REPEATED_TRANSFER_CHNL_14_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL14_OFS) & DMA_REPEATED_TRANSFER_CHNL_14_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL14_MASK);
}

static inline void DMA_REPEATED_TRANSFER_CHNL_15_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_total_transaction_chnl15) {
    registers->REPEATED_TRANSFER_CHNL_15.packed_w = ((rptd_trnsfr_total_transaction_chnl15<<DMA_REPEATED_TRANSFER_CHNL_15_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL15_OFS) & DMA_REPEATED_TRANSFER_CHNL_15_RPTD_TRNSFR_TOTAL_TRANSACTION_CHNL15_MASK);
}

static inline void DMA_REPEATED_TRANSFER_ALTERNATE_SEL_WRITE(DMA_REGS_s * registers, uint32_t rptd_trnsfr_alternate_sel) {
    registers->REPEATED_TRANSFER_ALTERNATE_SEL.packed_w = ((rptd_trnsfr_alternate_sel<<DMA_REPEATED_TRANSFER_ALTERNATE_SEL_RPTD_TRNSFR_ALTERNATE_SEL_OFS) & DMA_REPEATED_TRANSFER_ALTERNATE_SEL_RPTD_TRNSFR_ALTERNATE_SEL_MASK);
}

static inline void DMA_ARBITRATION_WRITE(DMA_REGS_s * registers, uint32_t dma_rr_en) {
    registers->ARBITRATION.packed_w = ((dma_rr_en<<DMA_ARBITRATION_DMA_RR_EN_OFS) & DMA_ARBITRATION_DMA_RR_EN_MASK);
}

static inline void DMA_ARBITRATION_MASK_WRITE(DMA_REGS_s * registers, uint32_t dma_rr_mask) {
    registers->ARBITRATION_MASK.packed_w = ((dma_rr_mask<<DMA_ARBITRATION_MASK_DMA_RR_MASK_OFS) & DMA_ARBITRATION_MASK_DMA_RR_MASK_MASK);
}

