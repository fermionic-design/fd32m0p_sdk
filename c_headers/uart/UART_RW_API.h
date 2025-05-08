#include "UART_REGS.h"

static inline void UART_PWR_EN_WRITE(UART_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w = ((pwr_en<<UART_PWR_EN_PWR_EN_OFS) & UART_PWR_EN_PWR_EN_MASK)
                                +((pwr_en_key<<UART_PWR_EN_PWR_EN_KEY_OFS) & UART_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void UART_RST_CTRL_WRITE(UART_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w = ((rst<<UART_RST_CTRL_RST_OFS) & UART_RST_CTRL_RST_MASK)
                                  +((rst_sts_clr<<UART_RST_CTRL_RST_STS_CLR_OFS) & UART_RST_CTRL_RST_STS_CLR_MASK)
                                  +((rst_key<<UART_RST_CTRL_RST_KEY_OFS) & UART_RST_CTRL_RST_KEY_MASK);
}

static inline void UART_CLK_CTRL_WRITE(UART_REGS_s * registers, uint32_t clk_en) {
    registers->CLK_CTRL.packed_w = ((clk_en<<UART_CLK_CTRL_CLK_EN_OFS) & UART_CLK_CTRL_CLK_EN_MASK);
}

static inline void UART_CLK_SEL_WRITE(UART_REGS_s * registers, uint32_t clk_sel) {
    registers->CLK_SEL.packed_w = ((clk_sel<<UART_CLK_SEL_CLK_SEL_OFS) & UART_CLK_SEL_CLK_SEL_MASK);
}

static inline void UART_CLK_DIV_WRITE(UART_REGS_s * registers, uint32_t clk_div) {
    registers->CLK_DIV.packed_w = ((clk_div<<UART_CLK_DIV_CLK_DIV_OFS) & UART_CLK_DIV_CLK_DIV_MASK);
}

static inline void UART_DBG_CTRL_WRITE(UART_REGS_s * registers, uint32_t run_on_halt, uint32_t soft_stop) {
    registers->DBG_CTRL.packed_w = ((run_on_halt<<UART_DBG_CTRL_RUN_ON_HALT_OFS) & UART_DBG_CTRL_RUN_ON_HALT_MASK)
                                  +((soft_stop<<UART_DBG_CTRL_SOFT_STOP_OFS) & UART_DBG_CTRL_SOFT_STOP_MASK);
}

static inline void UART_INTR_EVENT_CLEAR(UART_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_EVENT.packed_w = 1<<intr_idx;
}

static inline void UART_INTR_EVENT_EN(UART_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_EN0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_EN1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void UART_INTR_EVENT_DIS(UART_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_EN0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_EN1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void UART_INTR_EVENT_NMI_EN(UART_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_NMI_EN0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_NMI_EN1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void UART_INTR_EVENT_NMI_DIS(UART_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->INTR_NMI_EN0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->INTR_NMI_EN1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void UART_INTR_SW_SET(UART_REGS_s * registers, uint32_t intr_idx){
    registers->INTR_SW_SET.packed_w = 1<<intr_idx;
}

static inline void UART_GENERIC_DMA_RX_EVENT_EN(UART_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->DMA_RX_EVENT_EN0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->DMA_RX_EVENT_EN1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void UART_GENERIC_DMA_RX_EVENT_DIS(UART_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->DMA_RX_EVENT_EN0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->DMA_RX_EVENT_EN1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void UART_GENERIC_DMA_TX_EVENT_EN(UART_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->DMA_TX_EVENT_EN0.packed_w = (1<<intr_idx) + (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->DMA_TX_EVENT_EN1.packed_w = (1<<intr_idx_mod_16) + (1<<(intr_idx_mod_16+16));
}

static inline void UART_GENERIC_DMA_TX_EVENT_DIS(UART_REGS_s * registers, uint32_t intr_idx){
    uint32_t intr_idx_mod_16 = intr_idx%16;
    if(intr_idx<16)
        registers->DMA_TX_EVENT_EN0.packed_w = (1<<(intr_idx+16));
    else if(intr_idx<32)
        registers->DMA_TX_EVENT_EN1.packed_w = (1<<(intr_idx_mod_16+16));
}

static inline void UART_CLKCFG_WRITE(UART_REGS_s * registers, uint32_t blck_async, uint32_t async_req_en_key) {
    registers->CLKCFG.packed_w = ((blck_async<<UART_CLKCFG_BLCK_ASYNC_OFS) & UART_CLKCFG_BLCK_ASYNC_MASK)
                                +((async_req_en_key<<UART_CLKCFG_ASYNC_REQ_EN_KEY_OFS) & UART_CLKCFG_ASYNC_REQ_EN_KEY_MASK);
}

static inline void UART_FIFOLS_WRITE(UART_REGS_s * registers, uint32_t tx_fifo_ls, uint32_t rx_to, uint32_t rx_fifo_ls) {
    registers->FIFOLS.packed_w = ((tx_fifo_ls<<UART_FIFOLS_TX_FIFO_LS_OFS) & UART_FIFOLS_TX_FIFO_LS_MASK)
                                +((rx_to<<UART_FIFOLS_RX_TO_OFS) & UART_FIFOLS_RX_TO_MASK)
                                +((rx_fifo_ls<<UART_FIFOLS_RX_FIFO_LS_OFS) & UART_FIFOLS_RX_FIFO_LS_MASK);
}

static inline void UART_CFG_WRITE(UART_REGS_s * registers, uint32_t wrd_len, uint32_t par_en, uint32_t evn_par, uint32_t stck_par, uint32_t stop_bit, uint32_t send_idle) {
    registers->CFG.packed_w = ((wrd_len<<UART_CFG_WRD_LEN_OFS) & UART_CFG_WRD_LEN_MASK)
                             +((par_en<<UART_CFG_PAR_EN_OFS) & UART_CFG_PAR_EN_MASK)
                             +((evn_par<<UART_CFG_EVN_PAR_OFS) & UART_CFG_EVN_PAR_MASK)
                             +((stck_par<<UART_CFG_STCK_PAR_OFS) & UART_CFG_STCK_PAR_MASK)
                             +((stop_bit<<UART_CFG_STOP_BIT_OFS) & UART_CFG_STOP_BIT_MASK)
                             +((send_idle<<UART_CFG_SEND_IDLE_OFS) & UART_CFG_SEND_IDLE_MASK);
}

static inline void UART_GFCTL_WRITE(UART_REGS_s * registers, uint32_t gf_width) {
    registers->GFCTL.packed_w = ((gf_width<<UART_GFCTL_GF_WIDTH_OFS) & UART_GFCTL_GF_WIDTH_MASK);
}

static inline void UART_TXDATA_N_WRITE(UART_REGS_s * registers, uint32_t index, uint32_t uart_data) {
    registers->TXDATA[index].packed_w = ((uart_data<<UART_TXDATA_UART_DATA_OFS) & UART_TXDATA_UART_DATA_MASK);
}

static inline void UART_BRDNUM_WRITE(UART_REGS_s * registers, uint32_t num_m) {
    registers->BRDNUM.packed_w = ((num_m<<UART_BRDNUM_NUM_M_OFS) & UART_BRDNUM_NUM_M_MASK);
}

static inline void UART_BRDDEN_WRITE(UART_REGS_s * registers, uint32_t den_n) {
    registers->BRDDEN.packed_w = ((den_n<<UART_BRDDEN_DEN_N_OFS) & UART_BRDDEN_DEN_N_MASK);
}

static inline void UART_CTRL_WRITE(UART_REGS_s * registers, uint32_t uart_en, uint32_t uart_msb, uint32_t majvote_en, uint32_t fifo_en, uint32_t os, uint32_t loopback_en, uint32_t mode, uint32_t tx_en, uint32_t rx_en, uint32_t tx_out_en, uint32_t tx_out_ctrl, uint32_t cts_en, uint32_t rts_en, uint32_t rts_val) {
    registers->CTRL.packed_w = ((uart_en<<UART_CTRL_UART_EN_OFS) & UART_CTRL_UART_EN_MASK)
                              +((uart_msb<<UART_CTRL_UART_MSB_OFS) & UART_CTRL_UART_MSB_MASK)
                              +((majvote_en<<UART_CTRL_MAJVOTE_EN_OFS) & UART_CTRL_MAJVOTE_EN_MASK)
                              +((fifo_en<<UART_CTRL_FIFO_EN_OFS) & UART_CTRL_FIFO_EN_MASK)
                              +((os<<UART_CTRL_OS_OFS) & UART_CTRL_OS_MASK)
                              +((loopback_en<<UART_CTRL_LOOPBACK_EN_OFS) & UART_CTRL_LOOPBACK_EN_MASK)
                              +((mode<<UART_CTRL_MODE_OFS) & UART_CTRL_MODE_MASK)
                              +((tx_en<<UART_CTRL_TX_EN_OFS) & UART_CTRL_TX_EN_MASK)
                              +((rx_en<<UART_CTRL_RX_EN_OFS) & UART_CTRL_RX_EN_MASK)
                              +((tx_out_en<<UART_CTRL_TX_OUT_EN_OFS) & UART_CTRL_TX_OUT_EN_MASK)
                              +((tx_out_ctrl<<UART_CTRL_TX_OUT_CTRL_OFS) & UART_CTRL_TX_OUT_CTRL_MASK)
                              +((cts_en<<UART_CTRL_CTS_EN_OFS) & UART_CTRL_CTS_EN_MASK)
                              +((rts_en<<UART_CTRL_RTS_EN_OFS) & UART_CTRL_RTS_EN_MASK)
                              +((rts_val<<UART_CTRL_RTS_VAL_OFS) & UART_CTRL_RTS_VAL_MASK);
}

static inline void UART_ADDR_WRITE(UART_REGS_s * registers, uint32_t uart_addr) {
    registers->ADDR.packed_w = ((uart_addr<<UART_ADDR_UART_ADDR_OFS) & UART_ADDR_UART_ADDR_MASK);
}

static inline void UART_ADDRMASK_WRITE(UART_REGS_s * registers, uint32_t addr_mask) {
    registers->ADDRMASK.packed_w = ((addr_mask<<UART_ADDRMASK_ADDR_MASK_OFS) & UART_ADDRMASK_ADDR_MASK_MASK);
}

