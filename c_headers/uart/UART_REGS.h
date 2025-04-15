#ifndef UART_REGISTERS_H
#define UART_REGISTERS_H

#include <stdint.h>

typedef struct UART_DESC_REG_s {
    unsigned int module_type:8; // 
    unsigned int module_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} UART_DESC_REG_s;

typedef union UART_DESC_u {
    UART_DESC_REG_s DESC;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_DESC_u;

typedef struct UART_PWR_EN_REG_s {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    unsigned int pwr_en_key:8; // 
} UART_PWR_EN_REG_s;

typedef union UART_PWR_EN_u {
    UART_PWR_EN_REG_s PWR_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_PWR_EN_u;

typedef struct UART_RST_CTRL_REG_s {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    unsigned int rst_key:8; // 
} UART_RST_CTRL_REG_s;

typedef union UART_RST_CTRL_u {
    UART_RST_CTRL_REG_s RST_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_RST_CTRL_u;

typedef struct UART_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} UART_RST_STS_REG_s;

typedef union UART_RST_STS_u {
    UART_RST_STS_REG_s RST_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_RST_STS_u;

typedef struct UART_CLK_CTRL_REG_s {
    unsigned int clk_en:1; // 
} UART_CLK_CTRL_REG_s;

typedef union UART_CLK_CTRL_u {
    UART_CLK_CTRL_REG_s CLK_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_CLK_CTRL_u;

typedef struct UART_CLK_SEL_REG_s {
    unsigned int clk_sel:2; // 
} UART_CLK_SEL_REG_s;

typedef union UART_CLK_SEL_u {
    UART_CLK_SEL_REG_s CLK_SEL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_CLK_SEL_u;

typedef struct UART_CLK_DIV_REG_s {
    unsigned int clk_div:4; // 
} UART_CLK_DIV_REG_s;

typedef union UART_CLK_DIV_u {
    UART_CLK_DIV_REG_s CLK_DIV;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_CLK_DIV_u;

typedef struct UART_DBG_CTRL_REG_s {
    unsigned int run_on_halt:1; // 
    unsigned int soft_stop:1; // 
} UART_DBG_CTRL_REG_s;

typedef union UART_DBG_CTRL_u {
    UART_DBG_CTRL_REG_s DBG_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_DBG_CTRL_u;

typedef struct UART_INTR_EVENT_REG_s {
    unsigned int rcv_timeout:1; // 
    unsigned int frame_err:1; // 
    unsigned int parity_err:1; // 
    unsigned int underflow_err:1; // 
    unsigned int overflow_err:1; // 
    unsigned int maj_vote_err:1; // 
    unsigned int tx_fifo_almost_full:1; // 
    unsigned int tx_fifo_full:1; // 
    unsigned int tx_fifo_almost_empty:1; // 
    unsigned int tx_fifo_empty:1; // 
    unsigned int rx_fifo_almost_full:1; // 
    unsigned int rx_fifo_full:1; // 
    unsigned int rx_fifo_almost_empty:1; // 
    unsigned int rx_fifo_empty:1; // 
    unsigned int rcv_negedge:1; // 
    unsigned int rcv_posedge:1; // 
    unsigned int rx_int:1; // 
    unsigned int tx_int:1; // 
    unsigned int cts_int:1; // 
    unsigned int addr_match:1; // 
    unsigned int baud_err:1; // 
    unsigned int eot:1; // 
    unsigned int dma_done_tx_intr:1; // 
    unsigned int dma_done_rx_intr:1; // 
} UART_INTR_EVENT_REG_s;

typedef union UART_INTR_EVENT_u {
    UART_INTR_EVENT_REG_s INTR_EVENT;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_INTR_EVENT_u;

typedef struct UART_INTR_EN1_REG_s {
    unsigned int rcv_timeout_en:1; // 
    unsigned int frame_err_en:1; // 
    unsigned int parity_err_en:1; // 
    unsigned int underflow_err_en:1; // 
    unsigned int overflow_err_en:1; // 
    unsigned int maj_vote_err_en:1; // 
    unsigned int tx_fifo_almost_full_en:1; // 
    unsigned int tx_fifo_full_en:1; // 
    unsigned int tx_fifo_almost_empty_en:1; // 
    unsigned int tx_fifo_empty_en:1; // 
    unsigned int rx_fifo_almost_full_en:1; // 
    unsigned int rx_fifo_full_en:1; // 
    unsigned int rx_fifo_almost_empty_en:1; // 
    unsigned int rx_fifo_empty_en:1; // 
    unsigned int rcv_negedge_en:1; // 
    unsigned int rcv_posedge_en:1; // 
} UART_INTR_EN1_REG_s;

typedef union UART_INTR_EN1_u {
    UART_INTR_EN1_REG_s INTR_EN1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_INTR_EN1_u;

typedef struct UART_INTR_EN2_REG_s {
    unsigned int rx_int_en:1; // 
    unsigned int tx_int_en:1; // 
    unsigned int cts_int_en:1; // 
    unsigned int addr_match_en:1; // 
    unsigned int baud_err_en:1; // 
    unsigned int eot_en:1; // 
    unsigned int dma_done_tx_intr_en:1; // 
    unsigned int dma_done_rx_intr_en:1; // 
} UART_INTR_EN2_REG_s;

typedef union UART_INTR_EN2_u {
    UART_INTR_EN2_REG_s INTR_EN2;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_INTR_EN2_u;

typedef struct UART_INTR_NMI_EN1_REG_s {
    unsigned int rcv_timeout_nmi_en:1; // 
    unsigned int frame_err_nmi_en:1; // 
    unsigned int parity_err_nmi_en:1; // 
    unsigned int underflow_err_nmi_en:1; // 
    unsigned int overflow_err_nmi_en:1; // 
    unsigned int maj_vote_err_nmi_en:1; // 
    unsigned int tx_fifo_almost_full_nmi_en:1; // 
    unsigned int tx_fifo_full_nmi_en:1; // 
    unsigned int tx_fifo_almost_empty_nmi_en:1; // 
    unsigned int tx_fifo_empty_nmi_en:1; // 
    unsigned int rx_fifo_almost_full_nmi_en:1; // 
    unsigned int rx_fifo_full_nmi_en:1; // 
    unsigned int rx_fifo_almost_empty_nmi_en:1; // 
    unsigned int rx_fifo_empty_nmi_en:1; // 
    unsigned int rcv_negedge_nmi_en:1; // 
    unsigned int rcv_posedge_nmi_en:1; // 
} UART_INTR_NMI_EN1_REG_s;

typedef union UART_INTR_NMI_EN1_u {
    UART_INTR_NMI_EN1_REG_s INTR_NMI_EN1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_INTR_NMI_EN1_u;

typedef struct UART_INTR_NMI_EN2_REG_s {
    unsigned int rx_int_nmi_en:1; // 
    unsigned int tx_int_nmi_en:1; // 
    unsigned int cts_int_nmi_en:1; // 
    unsigned int addr_match_nmi_en:1; // 
    unsigned int baud_err_nmi_en:1; // 
    unsigned int eot_nmi_en:1; // 
    unsigned int dma_done_tx_intr_nmi_en:1; // 
    unsigned int dma_done_rx_intr_nmi_en:1; // 
} UART_INTR_NMI_EN2_REG_s;

typedef union UART_INTR_NMI_EN2_u {
    UART_INTR_NMI_EN2_REG_s INTR_NMI_EN2;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_INTR_NMI_EN2_u;

typedef struct UART_INTR_SW_SET_REG_s {
    unsigned int rcv_timeout_sw_set:1; // 
    unsigned int frame_err_sw_set:1; // 
    unsigned int parity_err_sw_set:1; // 
    unsigned int underflow_err_sw_set:1; // 
    unsigned int overflow_err_sw_set:1; // 
    unsigned int maj_vote_err_sw_set:1; // 
    unsigned int tx_fifo_almost_full_sw_set:1; // 
    unsigned int tx_fifo_full_sw_set:1; // 
    unsigned int tx_fifo_almost_empty_sw_set:1; // 
    unsigned int tx_fifo_empty_sw_set:1; // 
    unsigned int rx_fifo_almost_full_sw_set:1; // 
    unsigned int rx_fifo_full_sw_set:1; // 
    unsigned int rx_fifo_almost_empty_sw_set:1; // 
    unsigned int rx_fifo_empty_sw_set:1; // 
    unsigned int rcv_negedge_sw_set:1; // 
    unsigned int rcv_posedge_sw_set:1; // 
    unsigned int rx_int_sw_set:1; // 
    unsigned int tx_int_sw_set:1; // 
    unsigned int cts_int_sw_set:1; // 
    unsigned int addr_match_sw_set:1; // 
    unsigned int baud_err_sw_set:1; // 
    unsigned int eot_sw_set:1; // 
    unsigned int dma_done_tx_intr_sw_set:1; // 
    unsigned int dma_done_rx_intr_sw_set:1; // 
} UART_INTR_SW_SET_REG_s;

typedef union UART_INTR_SW_SET_u {
    UART_INTR_SW_SET_REG_s INTR_SW_SET;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_INTR_SW_SET_u;

typedef struct UART_DMA_RX_INTR_EN1_REG_s {
    unsigned int dma_rx_rcv_timeout_en:1; // 
    unsigned int dma_rx_frame_err_en:1; // 
    unsigned int dma_rx_parity_err_en:1; // 
    unsigned int dma_rx_underflow_err_en:1; // 
    unsigned int dma_rx_overflow_err_en:1; // 
    unsigned int dma_rx_maj_vote_err_en:1; // 
    unsigned int dma_rx_tx_fifo_almost_full_en:1; // 
    unsigned int dma_rx_tx_fifo_full_en:1; // 
    unsigned int dma_rx_tx_fifo_almost_empty_en:1; // 
    unsigned int dma_rx_tx_fifo_empty_en:1; // 
    unsigned int dma_rx_rx_fifo_almost_full_en:1; // 
    unsigned int dma_rx_rx_fifo_full_en:1; // 
    unsigned int dma_rx_rx_fifo_almost_empty_en:1; // 
    unsigned int dma_rx_rx_fifo_empty_en:1; // 
    unsigned int dma_rx_rcv_negedge_en:1; // 
    unsigned int dma_rx_rcv_posedge_en:1; // 
} UART_DMA_RX_INTR_EN1_REG_s;

typedef union UART_DMA_RX_INTR_EN1_u {
    UART_DMA_RX_INTR_EN1_REG_s DMA_RX_INTR_EN1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_DMA_RX_INTR_EN1_u;

typedef struct UART_DMA_RX_INTR_EN2_REG_s {
    unsigned int dma_rx_rx_int_en:1; // 
    unsigned int dma_rx_tx_int_en:1; // 
    unsigned int dma_rx_cts_int_en:1; // 
    unsigned int dma_rx_addr_match_en:1; // 
    unsigned int dma_rx_baud_err_en:1; // 
    unsigned int dma_rx_eot_en:1; // 
    unsigned int dma_rx_dma_done_tx_intr_en:1; // 
    unsigned int dma_rx_dma_done_rx_intr_en:1; // 
} UART_DMA_RX_INTR_EN2_REG_s;

typedef union UART_DMA_RX_INTR_EN2_u {
    UART_DMA_RX_INTR_EN2_REG_s DMA_RX_INTR_EN2;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_DMA_RX_INTR_EN2_u;

typedef struct UART_DMA_TX_INTR_EN1_REG_s {
    unsigned int dma_tx_rcv_timeout_en:1; // 
    unsigned int dma_tx_frame_err_en:1; // 
    unsigned int dma_tx_parity_err_en:1; // 
    unsigned int dma_tx_underflow_err_en:1; // 
    unsigned int dma_tx_overflow_err_en:1; // 
    unsigned int dma_tx_maj_vote_err_en:1; // 
    unsigned int dma_tx_tx_fifo_almost_full_en:1; // 
    unsigned int dma_tx_tx_fifo_full_en:1; // 
    unsigned int dma_tx_tx_fifo_almost_empty_en:1; // 
    unsigned int dma_tx_tx_fifo_empty_en:1; // 
    unsigned int dma_tx_rx_fifo_almost_full_en:1; // 
    unsigned int dma_tx_rx_fifo_full_en:1; // 
    unsigned int dma_tx_rx_fifo_almost_empty_en:1; // 
    unsigned int dma_tx_rx_fifo_empty_en:1; // 
    unsigned int dma_tx_rcv_negedge_en:1; // 
    unsigned int dma_tx_rcv_posedge_en:1; // 
} UART_DMA_TX_INTR_EN1_REG_s;

typedef union UART_DMA_TX_INTR_EN1_u {
    UART_DMA_TX_INTR_EN1_REG_s DMA_TX_INTR_EN1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_DMA_TX_INTR_EN1_u;

typedef struct UART_DMA_TX_INTR_EN2_REG_s {
    unsigned int dma_tx_rx_int_en:1; // 
    unsigned int dma_tx_tx_int_en:1; // 
    unsigned int dma_tx_cts_int_en:1; // 
    unsigned int dma_tx_addr_match_en:1; // 
    unsigned int dma_tx_baud_err_en:1; // 
    unsigned int dma_tx_eot_en:1; // 
    unsigned int dma_tx_dma_done_tx_intr_en:1; // 
    unsigned int dma_tx_dma_done_rx_intr_en:1; // 
} UART_DMA_TX_INTR_EN2_REG_s;

typedef union UART_DMA_TX_INTR_EN2_u {
    UART_DMA_TX_INTR_EN2_REG_s DMA_TX_INTR_EN2;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_DMA_TX_INTR_EN2_u;

typedef struct UART_INTR_STS_REG_s {
    unsigned int intr_first:6; // 
} UART_INTR_STS_REG_s;

typedef union UART_INTR_STS_u {
    UART_INTR_STS_REG_s INTR_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_INTR_STS_u;

typedef struct UART_UART_CLKCFG_REG_s {
    unsigned int blck_async:1; // 
    unsigned int rsvd_0:23; // 
    unsigned int async_req_en_key:8; // 
} UART_UART_CLKCFG_REG_s;

typedef union UART_UART_CLKCFG_u {
    UART_UART_CLKCFG_REG_s UART_CLKCFG;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_UART_CLKCFG_u;

typedef struct UART_UART_FIFOLS_REG_s {
    unsigned int tx_fifo_ls:2; // 
    unsigned int rx_to:4; // 
    unsigned int rx_fifo_ls:2; // 
} UART_UART_FIFOLS_REG_s;

typedef union UART_UART_FIFOLS_u {
    UART_UART_FIFOLS_REG_s UART_FIFOLS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_UART_FIFOLS_u;

typedef struct UART_UART_FIFOSTS_REG_s {
    unsigned int tx_fifo_full_sts:1; // 
    unsigned int tx_fifo_almost_full_sts:1; // 
    unsigned int tx_fifo_empty_sts:1; // 
    unsigned int tx_fifo_almost_empty_sts:1; // 
    unsigned int rx_fifo_full_sts:1; // 
    unsigned int rx_fifo_almost_full_sts:1; // 
    unsigned int rx_fifo_empty_sts:1; // 
    unsigned int rx_fifo_almost_empty_sts:1; // 
} UART_UART_FIFOSTS_REG_s;

typedef union UART_UART_FIFOSTS_u {
    UART_UART_FIFOSTS_REG_s UART_FIFOSTS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_UART_FIFOSTS_u;

typedef struct UART_UART_CFG_REG_s {
    unsigned int wrd_len:2; // 2'b00 for 5 bit data, 2'b01 for 6 bit data, 2'b10 for 7 bit data, 2'b11 for 8 bit data
    unsigned int par_en:1; // 
    unsigned int evn_par:1; // 
    unsigned int stck_par:1; // 
    unsigned int stop_bit:1; // 
    unsigned int send_idle:1; // 
} UART_UART_CFG_REG_s;

typedef union UART_UART_CFG_u {
    UART_UART_CFG_REG_s UART_CFG;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_UART_CFG_u;

typedef struct UART_UART_GFCTL_REG_s {
    unsigned int gf_width:6; // 
} UART_UART_GFCTL_REG_s;

typedef union UART_UART_GFCTL_u {
    UART_UART_GFCTL_REG_s UART_GFCTL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_UART_GFCTL_u;

typedef struct UART_UART_TXDATA_REG_s {
    unsigned int uart_data:8; // 
} UART_UART_TXDATA_REG_s;

typedef union UART_UART_TXDATA_u {
    UART_UART_TXDATA_REG_s UART_TXDATA;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_UART_TXDATA_u;

typedef struct UART_UART_RXDATA_REG_s {
    unsigned int uart_result:12; // 
} UART_UART_RXDATA_REG_s;

typedef union UART_UART_RXDATA_u {
    UART_UART_RXDATA_REG_s UART_RXDATA;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_UART_RXDATA_u;

typedef struct UART_UART_BRDNUM_REG_s {
    unsigned int num_m:32; // choose appropriate num_m to generate closst m/n value
} UART_UART_BRDNUM_REG_s;

typedef union UART_UART_BRDNUM_u {
    UART_UART_BRDNUM_REG_s UART_BRDNUM;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_UART_BRDNUM_u;

typedef struct UART_UART_BRDDEN_REG_s {
    unsigned int den_n:32; // den_n represents 2^n here
} UART_UART_BRDDEN_REG_s;

typedef union UART_UART_BRDDEN_u {
    UART_UART_BRDDEN_REG_s UART_BRDDEN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_UART_BRDDEN_u;

typedef struct UART_UART_CTRL_REG_s {
    unsigned int uart_en:1; // 
    unsigned int uart_msb:1; // data sent msb first
    unsigned int majvote_en:1; // enable majority voting
    unsigned int fifo_en:1; // 
    unsigned int os:5; // oversampling value = 16, 8 or 3
    unsigned int loopback_en:1; // 
    unsigned int mode:2; // 2'b00 for normal uart operation
    unsigned int tx_en:1; // 
    unsigned int rx_en:1; // 
    unsigned int tx_out_en:1; // 
    unsigned int tx_out_ctrl:1; // 
    unsigned int cts_en:1; // 
    unsigned int rts_en:1; // 
    unsigned int rts_val:1; // 
} UART_UART_CTRL_REG_s;

typedef union UART_UART_CTRL_u {
    UART_UART_CTRL_REG_s UART_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_UART_CTRL_u;

typedef struct UART_UART_ADDR_REG_s {
    unsigned int uart_addr:8; // 
} UART_UART_ADDR_REG_s;

typedef union UART_UART_ADDR_u {
    UART_UART_ADDR_REG_s UART_ADDR;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_UART_ADDR_u;

typedef struct UART_UART_ADDRMASK_REG_s {
    unsigned int addr_mask:8; // 
} UART_UART_ADDRMASK_REG_s;

typedef union UART_UART_ADDRMASK_u {
    UART_UART_ADDRMASK_REG_s UART_ADDRMASK;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_UART_ADDRMASK_u;

typedef struct UART_STS_REG_s {
    unsigned int cts_sts:1; // 
    unsigned int busy:1; // 
    unsigned int idle:1; // 
} UART_STS_REG_s;

typedef union UART_STS_u {
    UART_STS_REG_s STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_STS_u;

typedef struct UART_FSM_STS_REG_s {
    unsigned int tx_state:3; // 
    unsigned int rx_state:4; // 
} UART_FSM_STS_REG_s;

typedef union UART_FSM_STS_u {
    UART_FSM_STS_REG_s FSM_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_FSM_STS_u;

typedef struct UART_REGS_s{
    volatile UART_DESC_u DESC;
    volatile UART_PWR_EN_u PWR_EN;
    volatile UART_RST_CTRL_u RST_CTRL;
    volatile UART_RST_STS_u RST_STS;
    volatile UART_CLK_CTRL_u CLK_CTRL;
    volatile UART_CLK_SEL_u CLK_SEL;
    volatile UART_CLK_DIV_u CLK_DIV;
    volatile UART_DBG_CTRL_u DBG_CTRL;
    volatile UART_INTR_EVENT_u INTR_EVENT;
    volatile UART_INTR_EN1_u INTR_EN1;
    volatile UART_INTR_EN2_u INTR_EN2;
    volatile UART_INTR_NMI_EN1_u INTR_NMI_EN1;
    volatile UART_INTR_NMI_EN2_u INTR_NMI_EN2;
    volatile UART_INTR_SW_SET_u INTR_SW_SET;
    volatile UART_DMA_RX_INTR_EN1_u DMA_RX_INTR_EN1;
    volatile UART_DMA_RX_INTR_EN2_u DMA_RX_INTR_EN2;
    volatile UART_DMA_TX_INTR_EN1_u DMA_TX_INTR_EN1;
    volatile UART_DMA_TX_INTR_EN2_u DMA_TX_INTR_EN2;
    volatile UART_INTR_STS_u INTR_STS;
    volatile UART_UART_CLKCFG_u UART_CLKCFG;
    volatile UART_UART_FIFOLS_u UART_FIFOLS;
    volatile UART_UART_FIFOSTS_u UART_FIFOSTS;
    volatile UART_UART_CFG_u UART_CFG;
    volatile UART_UART_GFCTL_u UART_GFCTL;
    volatile UART_UART_TXDATA_u UART_TXDATA[2];
    volatile UART_UART_RXDATA_u UART_RXDATA[2];
    volatile UART_UART_BRDNUM_u UART_BRDNUM;
    volatile UART_UART_BRDDEN_u UART_BRDDEN;
    volatile UART_UART_CTRL_u UART_CTRL;
    volatile UART_UART_ADDR_u UART_ADDR;
    volatile UART_UART_ADDRMASK_u UART_ADDRMASK;
    volatile UART_STS_u STS;
    volatile UART_FSM_STS_u FSM_STS;
} UART_REGS_s;

#define UART_DESC_module_type_OFS (0)
#define UART_DESC_module_type_MASK ((uint32_t)0x000000FFU)
#define UART_DESC_module_subtype_OFS (8)
#define UART_DESC_module_subtype_MASK ((uint32_t)0x0000FF00U)
#define UART_DESC_major_rev_OFS (16)
#define UART_DESC_major_rev_MASK ((uint32_t)0x000F0000U)
#define UART_DESC_minor_rev_OFS (20)
#define UART_DESC_minor_rev_MASK ((uint32_t)0x00F00000U)
#define UART_PWR_EN_pwr_en_OFS (0)
#define UART_PWR_EN_pwr_en_MASK ((uint32_t)0x00000001U)
#define UART_PWR_EN_pwr_en_key_OFS (24)
#define UART_PWR_EN_pwr_en_key_MASK ((uint32_t)0xFF000000U)
#define UART_RST_CTRL_rst_OFS (0)
#define UART_RST_CTRL_rst_MASK ((uint32_t)0x00000001U)
#define UART_RST_CTRL_rst_sts_clr_OFS (1)
#define UART_RST_CTRL_rst_sts_clr_MASK ((uint32_t)0x00000002U)
#define UART_RST_CTRL_rst_key_OFS (24)
#define UART_RST_CTRL_rst_key_MASK ((uint32_t)0xFF000000U)
#define UART_RST_STS_rst_sts_OFS (0)
#define UART_RST_STS_rst_sts_MASK ((uint32_t)0x00000001U)
#define UART_CLK_CTRL_clk_en_OFS (0)
#define UART_CLK_CTRL_clk_en_MASK ((uint32_t)0x00000001U)
#define UART_CLK_SEL_clk_sel_OFS (0)
#define UART_CLK_SEL_clk_sel_MASK ((uint32_t)0x00000003U)
#define UART_CLK_DIV_clk_div_OFS (0)
#define UART_CLK_DIV_clk_div_MASK ((uint32_t)0x0000000FU)
#define UART_DBG_CTRL_run_on_halt_OFS (0)
#define UART_DBG_CTRL_run_on_halt_MASK ((uint32_t)0x00000001U)
#define UART_DBG_CTRL_soft_stop_OFS (1)
#define UART_DBG_CTRL_soft_stop_MASK ((uint32_t)0x00000002U)
#define UART_INTR_EVENT_rcv_timeout_OFS (0)
#define UART_INTR_EVENT_rcv_timeout_MASK ((uint32_t)0x00000001U)
#define UART_INTR_EVENT_frame_err_OFS (1)
#define UART_INTR_EVENT_frame_err_MASK ((uint32_t)0x00000002U)
#define UART_INTR_EVENT_parity_err_OFS (2)
#define UART_INTR_EVENT_parity_err_MASK ((uint32_t)0x00000004U)
#define UART_INTR_EVENT_underflow_err_OFS (3)
#define UART_INTR_EVENT_underflow_err_MASK ((uint32_t)0x00000008U)
#define UART_INTR_EVENT_overflow_err_OFS (4)
#define UART_INTR_EVENT_overflow_err_MASK ((uint32_t)0x00000010U)
#define UART_INTR_EVENT_maj_vote_err_OFS (5)
#define UART_INTR_EVENT_maj_vote_err_MASK ((uint32_t)0x00000020U)
#define UART_INTR_EVENT_tx_fifo_almost_full_OFS (6)
#define UART_INTR_EVENT_tx_fifo_almost_full_MASK ((uint32_t)0x00000040U)
#define UART_INTR_EVENT_tx_fifo_full_OFS (7)
#define UART_INTR_EVENT_tx_fifo_full_MASK ((uint32_t)0x00000080U)
#define UART_INTR_EVENT_tx_fifo_almost_empty_OFS (8)
#define UART_INTR_EVENT_tx_fifo_almost_empty_MASK ((uint32_t)0x00000100U)
#define UART_INTR_EVENT_tx_fifo_empty_OFS (9)
#define UART_INTR_EVENT_tx_fifo_empty_MASK ((uint32_t)0x00000200U)
#define UART_INTR_EVENT_rx_fifo_almost_full_OFS (10)
#define UART_INTR_EVENT_rx_fifo_almost_full_MASK ((uint32_t)0x00000400U)
#define UART_INTR_EVENT_rx_fifo_full_OFS (11)
#define UART_INTR_EVENT_rx_fifo_full_MASK ((uint32_t)0x00000800U)
#define UART_INTR_EVENT_rx_fifo_almost_empty_OFS (12)
#define UART_INTR_EVENT_rx_fifo_almost_empty_MASK ((uint32_t)0x00001000U)
#define UART_INTR_EVENT_rx_fifo_empty_OFS (13)
#define UART_INTR_EVENT_rx_fifo_empty_MASK ((uint32_t)0x00002000U)
#define UART_INTR_EVENT_rcv_negedge_OFS (14)
#define UART_INTR_EVENT_rcv_negedge_MASK ((uint32_t)0x00004000U)
#define UART_INTR_EVENT_rcv_posedge_OFS (15)
#define UART_INTR_EVENT_rcv_posedge_MASK ((uint32_t)0x00008000U)
#define UART_INTR_EVENT_rx_int_OFS (16)
#define UART_INTR_EVENT_rx_int_MASK ((uint32_t)0x00010000U)
#define UART_INTR_EVENT_tx_int_OFS (17)
#define UART_INTR_EVENT_tx_int_MASK ((uint32_t)0x00020000U)
#define UART_INTR_EVENT_cts_int_OFS (18)
#define UART_INTR_EVENT_cts_int_MASK ((uint32_t)0x00040000U)
#define UART_INTR_EVENT_addr_match_OFS (19)
#define UART_INTR_EVENT_addr_match_MASK ((uint32_t)0x00080000U)
#define UART_INTR_EVENT_baud_err_OFS (20)
#define UART_INTR_EVENT_baud_err_MASK ((uint32_t)0x00100000U)
#define UART_INTR_EVENT_eot_OFS (21)
#define UART_INTR_EVENT_eot_MASK ((uint32_t)0x00200000U)
#define UART_INTR_EVENT_dma_done_tx_intr_OFS (22)
#define UART_INTR_EVENT_dma_done_tx_intr_MASK ((uint32_t)0x00400000U)
#define UART_INTR_EVENT_dma_done_rx_intr_OFS (23)
#define UART_INTR_EVENT_dma_done_rx_intr_MASK ((uint32_t)0x00800000U)
#define UART_INTR_EN1_rcv_timeout_en_OFS (0)
#define UART_INTR_EN1_rcv_timeout_en_MASK ((uint32_t)0x00000001U)
#define UART_INTR_EN1_frame_err_en_OFS (1)
#define UART_INTR_EN1_frame_err_en_MASK ((uint32_t)0x00000002U)
#define UART_INTR_EN1_parity_err_en_OFS (2)
#define UART_INTR_EN1_parity_err_en_MASK ((uint32_t)0x00000004U)
#define UART_INTR_EN1_underflow_err_en_OFS (3)
#define UART_INTR_EN1_underflow_err_en_MASK ((uint32_t)0x00000008U)
#define UART_INTR_EN1_overflow_err_en_OFS (4)
#define UART_INTR_EN1_overflow_err_en_MASK ((uint32_t)0x00000010U)
#define UART_INTR_EN1_maj_vote_err_en_OFS (5)
#define UART_INTR_EN1_maj_vote_err_en_MASK ((uint32_t)0x00000020U)
#define UART_INTR_EN1_tx_fifo_almost_full_en_OFS (6)
#define UART_INTR_EN1_tx_fifo_almost_full_en_MASK ((uint32_t)0x00000040U)
#define UART_INTR_EN1_tx_fifo_full_en_OFS (7)
#define UART_INTR_EN1_tx_fifo_full_en_MASK ((uint32_t)0x00000080U)
#define UART_INTR_EN1_tx_fifo_almost_empty_en_OFS (8)
#define UART_INTR_EN1_tx_fifo_almost_empty_en_MASK ((uint32_t)0x00000100U)
#define UART_INTR_EN1_tx_fifo_empty_en_OFS (9)
#define UART_INTR_EN1_tx_fifo_empty_en_MASK ((uint32_t)0x00000200U)
#define UART_INTR_EN1_rx_fifo_almost_full_en_OFS (10)
#define UART_INTR_EN1_rx_fifo_almost_full_en_MASK ((uint32_t)0x00000400U)
#define UART_INTR_EN1_rx_fifo_full_en_OFS (11)
#define UART_INTR_EN1_rx_fifo_full_en_MASK ((uint32_t)0x00000800U)
#define UART_INTR_EN1_rx_fifo_almost_empty_en_OFS (12)
#define UART_INTR_EN1_rx_fifo_almost_empty_en_MASK ((uint32_t)0x00001000U)
#define UART_INTR_EN1_rx_fifo_empty_en_OFS (13)
#define UART_INTR_EN1_rx_fifo_empty_en_MASK ((uint32_t)0x00002000U)
#define UART_INTR_EN1_rcv_negedge_en_OFS (14)
#define UART_INTR_EN1_rcv_negedge_en_MASK ((uint32_t)0x00004000U)
#define UART_INTR_EN1_rcv_posedge_en_OFS (15)
#define UART_INTR_EN1_rcv_posedge_en_MASK ((uint32_t)0x00008000U)
#define UART_INTR_EN2_rx_int_en_OFS (0)
#define UART_INTR_EN2_rx_int_en_MASK ((uint32_t)0x00000001U)
#define UART_INTR_EN2_tx_int_en_OFS (1)
#define UART_INTR_EN2_tx_int_en_MASK ((uint32_t)0x00000002U)
#define UART_INTR_EN2_cts_int_en_OFS (2)
#define UART_INTR_EN2_cts_int_en_MASK ((uint32_t)0x00000004U)
#define UART_INTR_EN2_addr_match_en_OFS (3)
#define UART_INTR_EN2_addr_match_en_MASK ((uint32_t)0x00000008U)
#define UART_INTR_EN2_baud_err_en_OFS (4)
#define UART_INTR_EN2_baud_err_en_MASK ((uint32_t)0x00000010U)
#define UART_INTR_EN2_eot_en_OFS (5)
#define UART_INTR_EN2_eot_en_MASK ((uint32_t)0x00000020U)
#define UART_INTR_EN2_dma_done_tx_intr_en_OFS (6)
#define UART_INTR_EN2_dma_done_tx_intr_en_MASK ((uint32_t)0x00000040U)
#define UART_INTR_EN2_dma_done_rx_intr_en_OFS (7)
#define UART_INTR_EN2_dma_done_rx_intr_en_MASK ((uint32_t)0x00000080U)
#define UART_INTR_NMI_EN1_rcv_timeout_nmi_en_OFS (0)
#define UART_INTR_NMI_EN1_rcv_timeout_nmi_en_MASK ((uint32_t)0x00000001U)
#define UART_INTR_NMI_EN1_frame_err_nmi_en_OFS (1)
#define UART_INTR_NMI_EN1_frame_err_nmi_en_MASK ((uint32_t)0x00000002U)
#define UART_INTR_NMI_EN1_parity_err_nmi_en_OFS (2)
#define UART_INTR_NMI_EN1_parity_err_nmi_en_MASK ((uint32_t)0x00000004U)
#define UART_INTR_NMI_EN1_underflow_err_nmi_en_OFS (3)
#define UART_INTR_NMI_EN1_underflow_err_nmi_en_MASK ((uint32_t)0x00000008U)
#define UART_INTR_NMI_EN1_overflow_err_nmi_en_OFS (4)
#define UART_INTR_NMI_EN1_overflow_err_nmi_en_MASK ((uint32_t)0x00000010U)
#define UART_INTR_NMI_EN1_maj_vote_err_nmi_en_OFS (5)
#define UART_INTR_NMI_EN1_maj_vote_err_nmi_en_MASK ((uint32_t)0x00000020U)
#define UART_INTR_NMI_EN1_tx_fifo_almost_full_nmi_en_OFS (6)
#define UART_INTR_NMI_EN1_tx_fifo_almost_full_nmi_en_MASK ((uint32_t)0x00000040U)
#define UART_INTR_NMI_EN1_tx_fifo_full_nmi_en_OFS (7)
#define UART_INTR_NMI_EN1_tx_fifo_full_nmi_en_MASK ((uint32_t)0x00000080U)
#define UART_INTR_NMI_EN1_tx_fifo_almost_empty_nmi_en_OFS (8)
#define UART_INTR_NMI_EN1_tx_fifo_almost_empty_nmi_en_MASK ((uint32_t)0x00000100U)
#define UART_INTR_NMI_EN1_tx_fifo_empty_nmi_en_OFS (9)
#define UART_INTR_NMI_EN1_tx_fifo_empty_nmi_en_MASK ((uint32_t)0x00000200U)
#define UART_INTR_NMI_EN1_rx_fifo_almost_full_nmi_en_OFS (10)
#define UART_INTR_NMI_EN1_rx_fifo_almost_full_nmi_en_MASK ((uint32_t)0x00000400U)
#define UART_INTR_NMI_EN1_rx_fifo_full_nmi_en_OFS (11)
#define UART_INTR_NMI_EN1_rx_fifo_full_nmi_en_MASK ((uint32_t)0x00000800U)
#define UART_INTR_NMI_EN1_rx_fifo_almost_empty_nmi_en_OFS (12)
#define UART_INTR_NMI_EN1_rx_fifo_almost_empty_nmi_en_MASK ((uint32_t)0x00001000U)
#define UART_INTR_NMI_EN1_rx_fifo_empty_nmi_en_OFS (13)
#define UART_INTR_NMI_EN1_rx_fifo_empty_nmi_en_MASK ((uint32_t)0x00002000U)
#define UART_INTR_NMI_EN1_rcv_negedge_nmi_en_OFS (14)
#define UART_INTR_NMI_EN1_rcv_negedge_nmi_en_MASK ((uint32_t)0x00004000U)
#define UART_INTR_NMI_EN1_rcv_posedge_nmi_en_OFS (15)
#define UART_INTR_NMI_EN1_rcv_posedge_nmi_en_MASK ((uint32_t)0x00008000U)
#define UART_INTR_NMI_EN2_rx_int_nmi_en_OFS (0)
#define UART_INTR_NMI_EN2_rx_int_nmi_en_MASK ((uint32_t)0x00000001U)
#define UART_INTR_NMI_EN2_tx_int_nmi_en_OFS (1)
#define UART_INTR_NMI_EN2_tx_int_nmi_en_MASK ((uint32_t)0x00000002U)
#define UART_INTR_NMI_EN2_cts_int_nmi_en_OFS (2)
#define UART_INTR_NMI_EN2_cts_int_nmi_en_MASK ((uint32_t)0x00000004U)
#define UART_INTR_NMI_EN2_addr_match_nmi_en_OFS (3)
#define UART_INTR_NMI_EN2_addr_match_nmi_en_MASK ((uint32_t)0x00000008U)
#define UART_INTR_NMI_EN2_baud_err_nmi_en_OFS (4)
#define UART_INTR_NMI_EN2_baud_err_nmi_en_MASK ((uint32_t)0x00000010U)
#define UART_INTR_NMI_EN2_eot_nmi_en_OFS (5)
#define UART_INTR_NMI_EN2_eot_nmi_en_MASK ((uint32_t)0x00000020U)
#define UART_INTR_NMI_EN2_dma_done_tx_intr_nmi_en_OFS (6)
#define UART_INTR_NMI_EN2_dma_done_tx_intr_nmi_en_MASK ((uint32_t)0x00000040U)
#define UART_INTR_NMI_EN2_dma_done_rx_intr_nmi_en_OFS (7)
#define UART_INTR_NMI_EN2_dma_done_rx_intr_nmi_en_MASK ((uint32_t)0x00000080U)
#define UART_INTR_SW_SET_rcv_timeout_sw_set_OFS (0)
#define UART_INTR_SW_SET_rcv_timeout_sw_set_MASK ((uint32_t)0x00000001U)
#define UART_INTR_SW_SET_frame_err_sw_set_OFS (1)
#define UART_INTR_SW_SET_frame_err_sw_set_MASK ((uint32_t)0x00000002U)
#define UART_INTR_SW_SET_parity_err_sw_set_OFS (2)
#define UART_INTR_SW_SET_parity_err_sw_set_MASK ((uint32_t)0x00000004U)
#define UART_INTR_SW_SET_underflow_err_sw_set_OFS (3)
#define UART_INTR_SW_SET_underflow_err_sw_set_MASK ((uint32_t)0x00000008U)
#define UART_INTR_SW_SET_overflow_err_sw_set_OFS (4)
#define UART_INTR_SW_SET_overflow_err_sw_set_MASK ((uint32_t)0x00000010U)
#define UART_INTR_SW_SET_maj_vote_err_sw_set_OFS (5)
#define UART_INTR_SW_SET_maj_vote_err_sw_set_MASK ((uint32_t)0x00000020U)
#define UART_INTR_SW_SET_tx_fifo_almost_full_sw_set_OFS (6)
#define UART_INTR_SW_SET_tx_fifo_almost_full_sw_set_MASK ((uint32_t)0x00000040U)
#define UART_INTR_SW_SET_tx_fifo_full_sw_set_OFS (7)
#define UART_INTR_SW_SET_tx_fifo_full_sw_set_MASK ((uint32_t)0x00000080U)
#define UART_INTR_SW_SET_tx_fifo_almost_empty_sw_set_OFS (8)
#define UART_INTR_SW_SET_tx_fifo_almost_empty_sw_set_MASK ((uint32_t)0x00000100U)
#define UART_INTR_SW_SET_tx_fifo_empty_sw_set_OFS (9)
#define UART_INTR_SW_SET_tx_fifo_empty_sw_set_MASK ((uint32_t)0x00000200U)
#define UART_INTR_SW_SET_rx_fifo_almost_full_sw_set_OFS (10)
#define UART_INTR_SW_SET_rx_fifo_almost_full_sw_set_MASK ((uint32_t)0x00000400U)
#define UART_INTR_SW_SET_rx_fifo_full_sw_set_OFS (11)
#define UART_INTR_SW_SET_rx_fifo_full_sw_set_MASK ((uint32_t)0x00000800U)
#define UART_INTR_SW_SET_rx_fifo_almost_empty_sw_set_OFS (12)
#define UART_INTR_SW_SET_rx_fifo_almost_empty_sw_set_MASK ((uint32_t)0x00001000U)
#define UART_INTR_SW_SET_rx_fifo_empty_sw_set_OFS (13)
#define UART_INTR_SW_SET_rx_fifo_empty_sw_set_MASK ((uint32_t)0x00002000U)
#define UART_INTR_SW_SET_rcv_negedge_sw_set_OFS (14)
#define UART_INTR_SW_SET_rcv_negedge_sw_set_MASK ((uint32_t)0x00004000U)
#define UART_INTR_SW_SET_rcv_posedge_sw_set_OFS (15)
#define UART_INTR_SW_SET_rcv_posedge_sw_set_MASK ((uint32_t)0x00008000U)
#define UART_INTR_SW_SET_rx_int_sw_set_OFS (16)
#define UART_INTR_SW_SET_rx_int_sw_set_MASK ((uint32_t)0x00010000U)
#define UART_INTR_SW_SET_tx_int_sw_set_OFS (17)
#define UART_INTR_SW_SET_tx_int_sw_set_MASK ((uint32_t)0x00020000U)
#define UART_INTR_SW_SET_cts_int_sw_set_OFS (18)
#define UART_INTR_SW_SET_cts_int_sw_set_MASK ((uint32_t)0x00040000U)
#define UART_INTR_SW_SET_addr_match_sw_set_OFS (19)
#define UART_INTR_SW_SET_addr_match_sw_set_MASK ((uint32_t)0x00080000U)
#define UART_INTR_SW_SET_baud_err_sw_set_OFS (20)
#define UART_INTR_SW_SET_baud_err_sw_set_MASK ((uint32_t)0x00100000U)
#define UART_INTR_SW_SET_eot_sw_set_OFS (21)
#define UART_INTR_SW_SET_eot_sw_set_MASK ((uint32_t)0x00200000U)
#define UART_INTR_SW_SET_dma_done_tx_intr_sw_set_OFS (22)
#define UART_INTR_SW_SET_dma_done_tx_intr_sw_set_MASK ((uint32_t)0x00400000U)
#define UART_INTR_SW_SET_dma_done_rx_intr_sw_set_OFS (23)
#define UART_INTR_SW_SET_dma_done_rx_intr_sw_set_MASK ((uint32_t)0x00800000U)
#define UART_DMA_RX_INTR_EN1_dma_rx_rcv_timeout_en_OFS (0)
#define UART_DMA_RX_INTR_EN1_dma_rx_rcv_timeout_en_MASK ((uint32_t)0x00000001U)
#define UART_DMA_RX_INTR_EN1_dma_rx_frame_err_en_OFS (1)
#define UART_DMA_RX_INTR_EN1_dma_rx_frame_err_en_MASK ((uint32_t)0x00000002U)
#define UART_DMA_RX_INTR_EN1_dma_rx_parity_err_en_OFS (2)
#define UART_DMA_RX_INTR_EN1_dma_rx_parity_err_en_MASK ((uint32_t)0x00000004U)
#define UART_DMA_RX_INTR_EN1_dma_rx_underflow_err_en_OFS (3)
#define UART_DMA_RX_INTR_EN1_dma_rx_underflow_err_en_MASK ((uint32_t)0x00000008U)
#define UART_DMA_RX_INTR_EN1_dma_rx_overflow_err_en_OFS (4)
#define UART_DMA_RX_INTR_EN1_dma_rx_overflow_err_en_MASK ((uint32_t)0x00000010U)
#define UART_DMA_RX_INTR_EN1_dma_rx_maj_vote_err_en_OFS (5)
#define UART_DMA_RX_INTR_EN1_dma_rx_maj_vote_err_en_MASK ((uint32_t)0x00000020U)
#define UART_DMA_RX_INTR_EN1_dma_rx_tx_fifo_almost_full_en_OFS (6)
#define UART_DMA_RX_INTR_EN1_dma_rx_tx_fifo_almost_full_en_MASK ((uint32_t)0x00000040U)
#define UART_DMA_RX_INTR_EN1_dma_rx_tx_fifo_full_en_OFS (7)
#define UART_DMA_RX_INTR_EN1_dma_rx_tx_fifo_full_en_MASK ((uint32_t)0x00000080U)
#define UART_DMA_RX_INTR_EN1_dma_rx_tx_fifo_almost_empty_en_OFS (8)
#define UART_DMA_RX_INTR_EN1_dma_rx_tx_fifo_almost_empty_en_MASK ((uint32_t)0x00000100U)
#define UART_DMA_RX_INTR_EN1_dma_rx_tx_fifo_empty_en_OFS (9)
#define UART_DMA_RX_INTR_EN1_dma_rx_tx_fifo_empty_en_MASK ((uint32_t)0x00000200U)
#define UART_DMA_RX_INTR_EN1_dma_rx_rx_fifo_almost_full_en_OFS (10)
#define UART_DMA_RX_INTR_EN1_dma_rx_rx_fifo_almost_full_en_MASK ((uint32_t)0x00000400U)
#define UART_DMA_RX_INTR_EN1_dma_rx_rx_fifo_full_en_OFS (11)
#define UART_DMA_RX_INTR_EN1_dma_rx_rx_fifo_full_en_MASK ((uint32_t)0x00000800U)
#define UART_DMA_RX_INTR_EN1_dma_rx_rx_fifo_almost_empty_en_OFS (12)
#define UART_DMA_RX_INTR_EN1_dma_rx_rx_fifo_almost_empty_en_MASK ((uint32_t)0x00001000U)
#define UART_DMA_RX_INTR_EN1_dma_rx_rx_fifo_empty_en_OFS (13)
#define UART_DMA_RX_INTR_EN1_dma_rx_rx_fifo_empty_en_MASK ((uint32_t)0x00002000U)
#define UART_DMA_RX_INTR_EN1_dma_rx_rcv_negedge_en_OFS (14)
#define UART_DMA_RX_INTR_EN1_dma_rx_rcv_negedge_en_MASK ((uint32_t)0x00004000U)
#define UART_DMA_RX_INTR_EN1_dma_rx_rcv_posedge_en_OFS (15)
#define UART_DMA_RX_INTR_EN1_dma_rx_rcv_posedge_en_MASK ((uint32_t)0x00008000U)
#define UART_DMA_RX_INTR_EN2_dma_rx_rx_int_en_OFS (0)
#define UART_DMA_RX_INTR_EN2_dma_rx_rx_int_en_MASK ((uint32_t)0x00000001U)
#define UART_DMA_RX_INTR_EN2_dma_rx_tx_int_en_OFS (1)
#define UART_DMA_RX_INTR_EN2_dma_rx_tx_int_en_MASK ((uint32_t)0x00000002U)
#define UART_DMA_RX_INTR_EN2_dma_rx_cts_int_en_OFS (2)
#define UART_DMA_RX_INTR_EN2_dma_rx_cts_int_en_MASK ((uint32_t)0x00000004U)
#define UART_DMA_RX_INTR_EN2_dma_rx_addr_match_en_OFS (3)
#define UART_DMA_RX_INTR_EN2_dma_rx_addr_match_en_MASK ((uint32_t)0x00000008U)
#define UART_DMA_RX_INTR_EN2_dma_rx_baud_err_en_OFS (4)
#define UART_DMA_RX_INTR_EN2_dma_rx_baud_err_en_MASK ((uint32_t)0x00000010U)
#define UART_DMA_RX_INTR_EN2_dma_rx_eot_en_OFS (5)
#define UART_DMA_RX_INTR_EN2_dma_rx_eot_en_MASK ((uint32_t)0x00000020U)
#define UART_DMA_RX_INTR_EN2_dma_rx_dma_done_tx_intr_en_OFS (6)
#define UART_DMA_RX_INTR_EN2_dma_rx_dma_done_tx_intr_en_MASK ((uint32_t)0x00000040U)
#define UART_DMA_RX_INTR_EN2_dma_rx_dma_done_rx_intr_en_OFS (7)
#define UART_DMA_RX_INTR_EN2_dma_rx_dma_done_rx_intr_en_MASK ((uint32_t)0x00000080U)
#define UART_DMA_TX_INTR_EN1_dma_tx_rcv_timeout_en_OFS (0)
#define UART_DMA_TX_INTR_EN1_dma_tx_rcv_timeout_en_MASK ((uint32_t)0x00000001U)
#define UART_DMA_TX_INTR_EN1_dma_tx_frame_err_en_OFS (1)
#define UART_DMA_TX_INTR_EN1_dma_tx_frame_err_en_MASK ((uint32_t)0x00000002U)
#define UART_DMA_TX_INTR_EN1_dma_tx_parity_err_en_OFS (2)
#define UART_DMA_TX_INTR_EN1_dma_tx_parity_err_en_MASK ((uint32_t)0x00000004U)
#define UART_DMA_TX_INTR_EN1_dma_tx_underflow_err_en_OFS (3)
#define UART_DMA_TX_INTR_EN1_dma_tx_underflow_err_en_MASK ((uint32_t)0x00000008U)
#define UART_DMA_TX_INTR_EN1_dma_tx_overflow_err_en_OFS (4)
#define UART_DMA_TX_INTR_EN1_dma_tx_overflow_err_en_MASK ((uint32_t)0x00000010U)
#define UART_DMA_TX_INTR_EN1_dma_tx_maj_vote_err_en_OFS (5)
#define UART_DMA_TX_INTR_EN1_dma_tx_maj_vote_err_en_MASK ((uint32_t)0x00000020U)
#define UART_DMA_TX_INTR_EN1_dma_tx_tx_fifo_almost_full_en_OFS (6)
#define UART_DMA_TX_INTR_EN1_dma_tx_tx_fifo_almost_full_en_MASK ((uint32_t)0x00000040U)
#define UART_DMA_TX_INTR_EN1_dma_tx_tx_fifo_full_en_OFS (7)
#define UART_DMA_TX_INTR_EN1_dma_tx_tx_fifo_full_en_MASK ((uint32_t)0x00000080U)
#define UART_DMA_TX_INTR_EN1_dma_tx_tx_fifo_almost_empty_en_OFS (8)
#define UART_DMA_TX_INTR_EN1_dma_tx_tx_fifo_almost_empty_en_MASK ((uint32_t)0x00000100U)
#define UART_DMA_TX_INTR_EN1_dma_tx_tx_fifo_empty_en_OFS (9)
#define UART_DMA_TX_INTR_EN1_dma_tx_tx_fifo_empty_en_MASK ((uint32_t)0x00000200U)
#define UART_DMA_TX_INTR_EN1_dma_tx_rx_fifo_almost_full_en_OFS (10)
#define UART_DMA_TX_INTR_EN1_dma_tx_rx_fifo_almost_full_en_MASK ((uint32_t)0x00000400U)
#define UART_DMA_TX_INTR_EN1_dma_tx_rx_fifo_full_en_OFS (11)
#define UART_DMA_TX_INTR_EN1_dma_tx_rx_fifo_full_en_MASK ((uint32_t)0x00000800U)
#define UART_DMA_TX_INTR_EN1_dma_tx_rx_fifo_almost_empty_en_OFS (12)
#define UART_DMA_TX_INTR_EN1_dma_tx_rx_fifo_almost_empty_en_MASK ((uint32_t)0x00001000U)
#define UART_DMA_TX_INTR_EN1_dma_tx_rx_fifo_empty_en_OFS (13)
#define UART_DMA_TX_INTR_EN1_dma_tx_rx_fifo_empty_en_MASK ((uint32_t)0x00002000U)
#define UART_DMA_TX_INTR_EN1_dma_tx_rcv_negedge_en_OFS (14)
#define UART_DMA_TX_INTR_EN1_dma_tx_rcv_negedge_en_MASK ((uint32_t)0x00004000U)
#define UART_DMA_TX_INTR_EN1_dma_tx_rcv_posedge_en_OFS (15)
#define UART_DMA_TX_INTR_EN1_dma_tx_rcv_posedge_en_MASK ((uint32_t)0x00008000U)
#define UART_DMA_TX_INTR_EN2_dma_tx_rx_int_en_OFS (0)
#define UART_DMA_TX_INTR_EN2_dma_tx_rx_int_en_MASK ((uint32_t)0x00000001U)
#define UART_DMA_TX_INTR_EN2_dma_tx_tx_int_en_OFS (1)
#define UART_DMA_TX_INTR_EN2_dma_tx_tx_int_en_MASK ((uint32_t)0x00000002U)
#define UART_DMA_TX_INTR_EN2_dma_tx_cts_int_en_OFS (2)
#define UART_DMA_TX_INTR_EN2_dma_tx_cts_int_en_MASK ((uint32_t)0x00000004U)
#define UART_DMA_TX_INTR_EN2_dma_tx_addr_match_en_OFS (3)
#define UART_DMA_TX_INTR_EN2_dma_tx_addr_match_en_MASK ((uint32_t)0x00000008U)
#define UART_DMA_TX_INTR_EN2_dma_tx_baud_err_en_OFS (4)
#define UART_DMA_TX_INTR_EN2_dma_tx_baud_err_en_MASK ((uint32_t)0x00000010U)
#define UART_DMA_TX_INTR_EN2_dma_tx_eot_en_OFS (5)
#define UART_DMA_TX_INTR_EN2_dma_tx_eot_en_MASK ((uint32_t)0x00000020U)
#define UART_DMA_TX_INTR_EN2_dma_tx_dma_done_tx_intr_en_OFS (6)
#define UART_DMA_TX_INTR_EN2_dma_tx_dma_done_tx_intr_en_MASK ((uint32_t)0x00000040U)
#define UART_DMA_TX_INTR_EN2_dma_tx_dma_done_rx_intr_en_OFS (7)
#define UART_DMA_TX_INTR_EN2_dma_tx_dma_done_rx_intr_en_MASK ((uint32_t)0x00000080U)
#define UART_INTR_STS_intr_first_OFS (0)
#define UART_INTR_STS_intr_first_MASK ((uint32_t)0x0000003FU)
#define UART_UART_CLKCFG_blck_async_OFS (0)
#define UART_UART_CLKCFG_blck_async_MASK ((uint32_t)0x00000001U)
#define UART_UART_CLKCFG_async_req_en_key_OFS (24)
#define UART_UART_CLKCFG_async_req_en_key_MASK ((uint32_t)0xFF000000U)
#define UART_UART_FIFOLS_tx_fifo_ls_OFS (0)
#define UART_UART_FIFOLS_tx_fifo_ls_MASK ((uint32_t)0x00000003U)
#define UART_UART_FIFOLS_rx_to_OFS (2)
#define UART_UART_FIFOLS_rx_to_MASK ((uint32_t)0x0000003CU)
#define UART_UART_FIFOLS_rx_fifo_ls_OFS (6)
#define UART_UART_FIFOLS_rx_fifo_ls_MASK ((uint32_t)0x000000C0U)
#define UART_UART_FIFOSTS_tx_fifo_full_sts_OFS (0)
#define UART_UART_FIFOSTS_tx_fifo_full_sts_MASK ((uint32_t)0x00000001U)
#define UART_UART_FIFOSTS_tx_fifo_almost_full_sts_OFS (1)
#define UART_UART_FIFOSTS_tx_fifo_almost_full_sts_MASK ((uint32_t)0x00000002U)
#define UART_UART_FIFOSTS_tx_fifo_empty_sts_OFS (2)
#define UART_UART_FIFOSTS_tx_fifo_empty_sts_MASK ((uint32_t)0x00000004U)
#define UART_UART_FIFOSTS_tx_fifo_almost_empty_sts_OFS (3)
#define UART_UART_FIFOSTS_tx_fifo_almost_empty_sts_MASK ((uint32_t)0x00000008U)
#define UART_UART_FIFOSTS_rx_fifo_full_sts_OFS (4)
#define UART_UART_FIFOSTS_rx_fifo_full_sts_MASK ((uint32_t)0x00000010U)
#define UART_UART_FIFOSTS_rx_fifo_almost_full_sts_OFS (5)
#define UART_UART_FIFOSTS_rx_fifo_almost_full_sts_MASK ((uint32_t)0x00000020U)
#define UART_UART_FIFOSTS_rx_fifo_empty_sts_OFS (6)
#define UART_UART_FIFOSTS_rx_fifo_empty_sts_MASK ((uint32_t)0x00000040U)
#define UART_UART_FIFOSTS_rx_fifo_almost_empty_sts_OFS (7)
#define UART_UART_FIFOSTS_rx_fifo_almost_empty_sts_MASK ((uint32_t)0x00000080U)
#define UART_UART_CFG_wrd_len_OFS (0)
#define UART_UART_CFG_wrd_len_MASK ((uint32_t)0x00000003U)
#define UART_UART_CFG_par_en_OFS (2)
#define UART_UART_CFG_par_en_MASK ((uint32_t)0x00000004U)
#define UART_UART_CFG_evn_par_OFS (3)
#define UART_UART_CFG_evn_par_MASK ((uint32_t)0x00000008U)
#define UART_UART_CFG_stck_par_OFS (4)
#define UART_UART_CFG_stck_par_MASK ((uint32_t)0x00000010U)
#define UART_UART_CFG_stop_bit_OFS (5)
#define UART_UART_CFG_stop_bit_MASK ((uint32_t)0x00000020U)
#define UART_UART_CFG_send_idle_OFS (6)
#define UART_UART_CFG_send_idle_MASK ((uint32_t)0x00000040U)
#define UART_UART_GFCTL_gf_width_OFS (0)
#define UART_UART_GFCTL_gf_width_MASK ((uint32_t)0x0000003FU)
#define UART_UART_TXDATA_uart_data_OFS (0)
#define UART_UART_TXDATA_uart_data_MASK ((uint32_t)0x000000FFU)
#define UART_UART_RXDATA_uart_result_OFS (0)
#define UART_UART_RXDATA_uart_result_MASK ((uint32_t)0x00000FFFU)
#define UART_UART_BRDNUM_num_m_OFS (0)
#define UART_UART_BRDNUM_num_m_MASK ((uint32_t)0xFFFFFFFFU)
#define UART_UART_BRDDEN_den_n_OFS (0)
#define UART_UART_BRDDEN_den_n_MASK ((uint32_t)0xFFFFFFFFU)
#define UART_UART_CTRL_uart_en_OFS (0)
#define UART_UART_CTRL_uart_en_MASK ((uint32_t)0x00000001U)
#define UART_UART_CTRL_uart_msb_OFS (1)
#define UART_UART_CTRL_uart_msb_MASK ((uint32_t)0x00000002U)
#define UART_UART_CTRL_majvote_en_OFS (2)
#define UART_UART_CTRL_majvote_en_MASK ((uint32_t)0x00000004U)
#define UART_UART_CTRL_fifo_en_OFS (3)
#define UART_UART_CTRL_fifo_en_MASK ((uint32_t)0x00000008U)
#define UART_UART_CTRL_os_OFS (4)
#define UART_UART_CTRL_os_MASK ((uint32_t)0x000001F0U)
#define UART_UART_CTRL_loopback_en_OFS (9)
#define UART_UART_CTRL_loopback_en_MASK ((uint32_t)0x00000200U)
#define UART_UART_CTRL_mode_OFS (10)
#define UART_UART_CTRL_mode_MASK ((uint32_t)0x00000C00U)
#define UART_UART_CTRL_tx_en_OFS (12)
#define UART_UART_CTRL_tx_en_MASK ((uint32_t)0x00001000U)
#define UART_UART_CTRL_rx_en_OFS (13)
#define UART_UART_CTRL_rx_en_MASK ((uint32_t)0x00002000U)
#define UART_UART_CTRL_tx_out_en_OFS (14)
#define UART_UART_CTRL_tx_out_en_MASK ((uint32_t)0x00004000U)
#define UART_UART_CTRL_tx_out_ctrl_OFS (15)
#define UART_UART_CTRL_tx_out_ctrl_MASK ((uint32_t)0x00008000U)
#define UART_UART_CTRL_cts_en_OFS (16)
#define UART_UART_CTRL_cts_en_MASK ((uint32_t)0x00010000U)
#define UART_UART_CTRL_rts_en_OFS (17)
#define UART_UART_CTRL_rts_en_MASK ((uint32_t)0x00020000U)
#define UART_UART_CTRL_rts_val_OFS (18)
#define UART_UART_CTRL_rts_val_MASK ((uint32_t)0x00040000U)
#define UART_UART_ADDR_uart_addr_OFS (0)
#define UART_UART_ADDR_uart_addr_MASK ((uint32_t)0x000000FFU)
#define UART_UART_ADDRMASK_addr_mask_OFS (0)
#define UART_UART_ADDRMASK_addr_mask_MASK ((uint32_t)0x000000FFU)
#define UART_STS_cts_sts_OFS (0)
#define UART_STS_cts_sts_MASK ((uint32_t)0x00000001U)
#define UART_STS_busy_OFS (1)
#define UART_STS_busy_MASK ((uint32_t)0x00000002U)
#define UART_STS_idle_OFS (2)
#define UART_STS_idle_MASK ((uint32_t)0x00000004U)
#define UART_FSM_STS_tx_state_OFS (0)
#define UART_FSM_STS_tx_state_MASK ((uint32_t)0x00000007U)
#define UART_FSM_STS_rx_state_OFS (3)
#define UART_FSM_STS_rx_state_MASK ((uint32_t)0x00000078U)
#endif
