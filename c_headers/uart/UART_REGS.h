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
    UART_DESC_REG_s;
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
    UART_PWR_EN_REG_s;
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
    UART_RST_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_RST_CTRL_u;

typedef struct UART_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} UART_RST_STS_REG_s;

typedef union UART_RST_STS_u {
    UART_RST_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_RST_STS_u;

typedef struct UART_CLK_CTRL_REG_s {
    unsigned int clk_en:1; // 
} UART_CLK_CTRL_REG_s;

typedef union UART_CLK_CTRL_u {
    UART_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_CLK_CTRL_u;

typedef struct UART_CLK_SEL_REG_s {
    unsigned int clk_sel:2; // 
} UART_CLK_SEL_REG_s;

typedef union UART_CLK_SEL_u {
    UART_CLK_SEL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_CLK_SEL_u;

typedef struct UART_CLK_DIV_REG_s {
    unsigned int clk_div:4; // 
} UART_CLK_DIV_REG_s;

typedef union UART_CLK_DIV_u {
    UART_CLK_DIV_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_CLK_DIV_u;

typedef struct UART_DBG_CTRL_REG_s {
    unsigned int run_on_halt:1; // 
    unsigned int soft_stop:1; // 
} UART_DBG_CTRL_REG_s;

typedef union UART_DBG_CTRL_u {
    UART_DBG_CTRL_REG_s;
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
    UART_INTR_EVENT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_INTR_EVENT_u;

typedef struct UART_INTR_EN0_REG_s {
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
} UART_INTR_EN0_REG_s;

typedef union UART_INTR_EN0_u {
    UART_INTR_EN0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_INTR_EN0_u;

typedef struct UART_INTR_EN1_REG_s {
    unsigned int rx_int_en:1; // 
    unsigned int tx_int_en:1; // 
    unsigned int cts_int_en:1; // 
    unsigned int addr_match_en:1; // 
    unsigned int baud_err_en:1; // 
    unsigned int eot_en:1; // 
    unsigned int dma_done_tx_intr_en:1; // 
    unsigned int dma_done_rx_intr_en:1; // 
} UART_INTR_EN1_REG_s;

typedef union UART_INTR_EN1_u {
    UART_INTR_EN1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_INTR_EN1_u;

typedef struct UART_INTR_NMI_EN0_REG_s {
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
} UART_INTR_NMI_EN0_REG_s;

typedef union UART_INTR_NMI_EN0_u {
    UART_INTR_NMI_EN0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_INTR_NMI_EN0_u;

typedef struct UART_INTR_NMI_EN1_REG_s {
    unsigned int rx_int_nmi_en:1; // 
    unsigned int tx_int_nmi_en:1; // 
    unsigned int cts_int_nmi_en:1; // 
    unsigned int addr_match_nmi_en:1; // 
    unsigned int baud_err_nmi_en:1; // 
    unsigned int eot_nmi_en:1; // 
    unsigned int dma_done_tx_intr_nmi_en:1; // 
    unsigned int dma_done_rx_intr_nmi_en:1; // 
} UART_INTR_NMI_EN1_REG_s;

typedef union UART_INTR_NMI_EN1_u {
    UART_INTR_NMI_EN1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_INTR_NMI_EN1_u;

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
    UART_INTR_SW_SET_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_INTR_SW_SET_u;

typedef struct UART_DMA_RX_EVENT_EN0_REG_s {
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
} UART_DMA_RX_EVENT_EN0_REG_s;

typedef union UART_DMA_RX_EVENT_EN0_u {
    UART_DMA_RX_EVENT_EN0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_DMA_RX_EVENT_EN0_u;

typedef struct UART_DMA_RX_EVENT_EN1_REG_s {
    unsigned int dma_rx_rx_int_en:1; // 
    unsigned int dma_rx_tx_int_en:1; // 
    unsigned int dma_rx_cts_int_en:1; // 
    unsigned int dma_rx_addr_match_en:1; // 
    unsigned int dma_rx_baud_err_en:1; // 
    unsigned int dma_rx_eot_en:1; // 
    unsigned int dma_rx_dma_done_tx_intr_en:1; // 
    unsigned int dma_rx_dma_done_rx_intr_en:1; // 
} UART_DMA_RX_EVENT_EN1_REG_s;

typedef union UART_DMA_RX_EVENT_EN1_u {
    UART_DMA_RX_EVENT_EN1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_DMA_RX_EVENT_EN1_u;

typedef struct UART_DMA_TX_EVENT_EN0_REG_s {
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
} UART_DMA_TX_EVENT_EN0_REG_s;

typedef union UART_DMA_TX_EVENT_EN0_u {
    UART_DMA_TX_EVENT_EN0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_DMA_TX_EVENT_EN0_u;

typedef struct UART_DMA_TX_EVENT_EN1_REG_s {
    unsigned int dma_tx_rx_int_en:1; // 
    unsigned int dma_tx_tx_int_en:1; // 
    unsigned int dma_tx_cts_int_en:1; // 
    unsigned int dma_tx_addr_match_en:1; // 
    unsigned int dma_tx_baud_err_en:1; // 
    unsigned int dma_tx_eot_en:1; // 
    unsigned int dma_tx_dma_done_tx_intr_en:1; // 
    unsigned int dma_tx_dma_done_rx_intr_en:1; // 
} UART_DMA_TX_EVENT_EN1_REG_s;

typedef union UART_DMA_TX_EVENT_EN1_u {
    UART_DMA_TX_EVENT_EN1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_DMA_TX_EVENT_EN1_u;

typedef struct UART_INTR_STS_REG_s {
    unsigned int intr_first:6; // 
} UART_INTR_STS_REG_s;

typedef union UART_INTR_STS_u {
    UART_INTR_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_INTR_STS_u;

typedef struct UART_CLKCFG_REG_s {
    unsigned int blck_async:1; // 
    unsigned int rsvd_0:23; // 
    unsigned int async_req_en_key:8; // 
} UART_CLKCFG_REG_s;

typedef union UART_CLKCFG_u {
    UART_CLKCFG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_CLKCFG_u;

typedef struct UART_FIFOLS_REG_s {
    unsigned int tx_fifo_ls:2; // 
    unsigned int rx_to:4; // 
    unsigned int rx_fifo_ls:2; // 
} UART_FIFOLS_REG_s;

typedef union UART_FIFOLS_u {
    UART_FIFOLS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_FIFOLS_u;

typedef struct UART_FIFOSTS_REG_s {
    unsigned int tx_fifo_full_sts:1; // 
    unsigned int tx_fifo_almost_full_sts:1; // 
    unsigned int tx_fifo_empty_sts:1; // 
    unsigned int tx_fifo_almost_empty_sts:1; // 
    unsigned int rx_fifo_full_sts:1; // 
    unsigned int rx_fifo_almost_full_sts:1; // 
    unsigned int rx_fifo_empty_sts:1; // 
    unsigned int rx_fifo_almost_empty_sts:1; // 
} UART_FIFOSTS_REG_s;

typedef union UART_FIFOSTS_u {
    UART_FIFOSTS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_FIFOSTS_u;

typedef struct UART_CFG_REG_s {
    unsigned int wrd_len:2; // 2'b00 for 5 bit data, 2'b01 for 6 bit data, 2'b10 for 7 bit data, 2'b11 for 8 bit data
    unsigned int par_en:1; // 
    unsigned int evn_par:1; // 
    unsigned int stck_par:1; // 
    unsigned int stop_bit:1; // 
    unsigned int send_idle:1; // 
} UART_CFG_REG_s;

typedef union UART_CFG_u {
    UART_CFG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_CFG_u;

typedef struct UART_GFCTL_REG_s {
    unsigned int gf_width:6; // 
} UART_GFCTL_REG_s;

typedef union UART_GFCTL_u {
    UART_GFCTL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_GFCTL_u;

typedef struct UART_TXDATA_REG_s {
    unsigned int uart_data:8; // 
} UART_TXDATA_REG_s;

typedef union UART_TXDATA_u {
    UART_TXDATA_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_TXDATA_u;

typedef struct UART_RXDATA_REG_s {
    unsigned int uart_result:12; // 
} UART_RXDATA_REG_s;

typedef union UART_RXDATA_u {
    UART_RXDATA_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_RXDATA_u;

typedef struct UART_BRDNUM_REG_s {
    unsigned int num_m:32; // choose appropriate num_m to generate closst m/n value
} UART_BRDNUM_REG_s;

typedef union UART_BRDNUM_u {
    UART_BRDNUM_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_BRDNUM_u;

typedef struct UART_BRDDEN_REG_s {
    unsigned int den_n:32; // den_n represents 2^n here
} UART_BRDDEN_REG_s;

typedef union UART_BRDDEN_u {
    UART_BRDDEN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_BRDDEN_u;

typedef struct UART_CTRL_REG_s {
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
} UART_CTRL_REG_s;

typedef union UART_CTRL_u {
    UART_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_CTRL_u;

typedef struct UART_ADDR_REG_s {
    unsigned int uart_addr:8; // 
} UART_ADDR_REG_s;

typedef union UART_ADDR_u {
    UART_ADDR_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_ADDR_u;

typedef struct UART_ADDRMASK_REG_s {
    unsigned int addr_mask:8; // 
} UART_ADDRMASK_REG_s;

typedef union UART_ADDRMASK_u {
    UART_ADDRMASK_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_ADDRMASK_u;

typedef struct UART_STS_REG_s {
    unsigned int cts_sts:1; // 
    unsigned int busy:1; // 
    unsigned int idle:1; // 
} UART_STS_REG_s;

typedef union UART_STS_u {
    UART_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} UART_STS_u;

typedef struct UART_FSM_STS_REG_s {
    unsigned int tx_state:3; // 
    unsigned int rx_state:4; // bit counter
} UART_FSM_STS_REG_s;

typedef union UART_FSM_STS_u {
    UART_FSM_STS_REG_s;
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
    volatile UART_INTR_EN0_u INTR_EN0;
    volatile UART_INTR_EN1_u INTR_EN1;
    volatile UART_INTR_NMI_EN0_u INTR_NMI_EN0;
    volatile UART_INTR_NMI_EN1_u INTR_NMI_EN1;
    volatile UART_INTR_SW_SET_u INTR_SW_SET;
    volatile UART_DMA_RX_EVENT_EN0_u DMA_RX_EVENT_EN0;
    volatile UART_DMA_RX_EVENT_EN1_u DMA_RX_EVENT_EN1;
    volatile UART_DMA_TX_EVENT_EN0_u DMA_TX_EVENT_EN0;
    volatile UART_DMA_TX_EVENT_EN1_u DMA_TX_EVENT_EN1;
    volatile UART_INTR_STS_u INTR_STS;
    volatile UART_CLKCFG_u CLKCFG;
    volatile UART_FIFOLS_u FIFOLS;
    volatile UART_FIFOSTS_u FIFOSTS;
    volatile UART_CFG_u CFG;
    volatile UART_GFCTL_u GFCTL;
    volatile UART_TXDATA_u TXDATA[2];
    volatile UART_RXDATA_u RXDATA[2];
    volatile UART_BRDNUM_u BRDNUM;
    volatile UART_BRDDEN_u BRDDEN;
    volatile UART_CTRL_u CTRL;
    volatile UART_ADDR_u ADDR;
    volatile UART_ADDRMASK_u ADDRMASK;
    volatile UART_STS_u STS;
    volatile UART_FSM_STS_u FSM_STS;
} UART_REGS_s;

#define UART_PWR_EN_PWR_EN_KEY ((uint32_t)0x0000007DU)
#define UART_RST_CTRL_RST_KEY ((uint32_t)0x0000007DU)
#define UART_RST_CTRL_RST_STS_CLR_KEY ((uint32_t)0x0000007DU)
#define UART_CLKCFG_BLCK_ASYNC_KEY ((uint32_t)0x0000007DU)

#define UART_INTR_EVENT_RCV_TIMEOUT_IDX (0)
#define UART_INTR_EVENT_FRAME_ERR_IDX (1)
#define UART_INTR_EVENT_PARITY_ERR_IDX (2)
#define UART_INTR_EVENT_UNDERFLOW_ERR_IDX (3)
#define UART_INTR_EVENT_OVERFLOW_ERR_IDX (4)
#define UART_INTR_EVENT_MAJ_VOTE_ERR_IDX (5)
#define UART_INTR_EVENT_TX_FIFO_ALMOST_FULL_IDX (6)
#define UART_INTR_EVENT_TX_FIFO_FULL_IDX (7)
#define UART_INTR_EVENT_TX_FIFO_ALMOST_EMPTY_IDX (8)
#define UART_INTR_EVENT_TX_FIFO_EMPTY_IDX (9)
#define UART_INTR_EVENT_RX_FIFO_ALMOST_FULL_IDX (10)
#define UART_INTR_EVENT_RX_FIFO_FULL_IDX (11)
#define UART_INTR_EVENT_RX_FIFO_ALMOST_EMPTY_IDX (12)
#define UART_INTR_EVENT_RX_FIFO_EMPTY_IDX (13)
#define UART_INTR_EVENT_RCV_NEGEDGE_IDX (14)
#define UART_INTR_EVENT_RCV_POSEDGE_IDX (15)
#define UART_INTR_EVENT_RX_INT_IDX (16)
#define UART_INTR_EVENT_TX_INT_IDX (17)
#define UART_INTR_EVENT_CTS_INT_IDX (18)
#define UART_INTR_EVENT_ADDR_MATCH_IDX (19)
#define UART_INTR_EVENT_BAUD_ERR_IDX (20)
#define UART_INTR_EVENT_EOT_IDX (21)
#define UART_INTR_EVENT_DMA_DONE_TX_INTR_IDX (22)
#define UART_INTR_EVENT_DMA_DONE_RX_INTR_IDX (23)

typedef enum {
	UART_CLK_SEL_CLK_APB = 0,
	UART_CLK_SEL_CLK_4MHZ = 1,
	UART_CLK_SEL_CLK_LF = 2,
} UART_CLK_SEL_E;

typedef enum {
	UART_FIFOLS_TX_FIFO_LS_EMPTY = 0,
	UART_FIFOLS_TX_FIFO_LS_ALMOST_EMPTY = 1,
	UART_FIFOLS_TX_FIFO_LS_HALF_FULL = 2,
	UART_FIFOLS_TX_FIFO_LS_ALMOST_FULL = 3,
} UART_FIFOLS_TX_FIFO_LS_E;

typedef enum {
	UART_FIFOLS_RX_FIFO_LS_ALMOST_EMPTY = 0,
	UART_FIFOLS_RX_FIFO_LS_HALF_FULL = 1,
	UART_FIFOLS_RX_FIFO_LS_ALMOST_FULL = 2,
	UART_FIFOLS_RX_FIFO_LS_FULL = 3,
} UART_FIFOLS_RX_FIFO_LS_E;

typedef enum {
	UART_CFG_WRD_LEN_5_BITS = 0,
	UART_CFG_WRD_LEN_6_BITS = 1,
	UART_CFG_WRD_LEN_7_BITS = 2,
	UART_CFG_WRD_LEN_8_BITS = 3,
} UART_CFG_WRD_LEN_E;

typedef enum {
	UART_CFG_STCK_PAR_ZERO = 0,
	UART_CFG_STCK_PAR_ONE = 1,
} UART_CFG_STCK_PAR_E;

typedef enum {
	UART_CFG_STOP_BIT_ONE = 0,
	UART_CFG_STOP_BIT_TWO = 1,
} UART_CFG_STOP_BIT_E;

typedef enum {
	UART_CTRL_UART_MSB_LAST = 0,
	UART_CTRL_UART_MSB_FIRST = 1,
} UART_CTRL_UART_MSB_E;

typedef enum {
	UART_CTRL_OS_FACTOR_3 = 3,
	UART_CTRL_OS_FACTOR_8 = 8,
	UART_CTRL_OS_FACTOR_16 = 16,
} UART_CTRL_OS_E;

typedef enum {
	UART_CTRL_TX_EN_SW = 0,
	UART_CTRL_TX_EN_HW = 1,
} UART_CTRL_TX_EN_E;

typedef enum {
	UART_CTRL_TX_OUT_EN_SW_PULL_UP = 0,
	UART_CTRL_TX_OUT_EN_SW_TX_OUT_CTRL = 1,
} UART_CTRL_TX_OUT_EN_E;

typedef enum {
	UART_CTRL_TX_OUT_CTRL_SW_PULL_DOWN = 0,
	UART_CTRL_TX_OUT_CTRL_SW_PULL_UP = 1,
} UART_CTRL_TX_OUT_CTRL_E;

typedef enum {
	UART_FSM_STS_TX_STATE_IDLE = 0,
	UART_FSM_STS_TX_STATE_NOP_MODE = 1,
	UART_FSM_STS_TX_STATE_START_BIT = 2,
	UART_FSM_STS_TX_STATE_SHIFT_REG = 3,
	UART_FSM_STS_TX_STATE_PARITY_GEN = 4,
	UART_FSM_STS_TX_STATE_STOP_BITS = 5,
} UART_FSM_STS_TX_STATE_E;

#define UART_DESC_MODULE_TYPE_OFS (0)
#define UART_DESC_MODULE_TYPE_MASK ((uint32_t)0x000000FFU)
#define UART_DESC_MODULE_SUBTYPE_OFS (8)
#define UART_DESC_MODULE_SUBTYPE_MASK ((uint32_t)0x0000FF00U)
#define UART_DESC_MAJOR_REV_OFS (16)
#define UART_DESC_MAJOR_REV_MASK ((uint32_t)0x000F0000U)
#define UART_DESC_MINOR_REV_OFS (20)
#define UART_DESC_MINOR_REV_MASK ((uint32_t)0x00F00000U)
#define UART_PWR_EN_PWR_EN_OFS (0)
#define UART_PWR_EN_PWR_EN_MASK ((uint32_t)0x00000001U)
#define UART_PWR_EN_PWR_EN_KEY_OFS (24)
#define UART_PWR_EN_PWR_EN_KEY_MASK ((uint32_t)0xFF000000U)
#define UART_RST_CTRL_RST_OFS (0)
#define UART_RST_CTRL_RST_MASK ((uint32_t)0x00000001U)
#define UART_RST_CTRL_RST_STS_CLR_OFS (1)
#define UART_RST_CTRL_RST_STS_CLR_MASK ((uint32_t)0x00000002U)
#define UART_RST_CTRL_RST_KEY_OFS (24)
#define UART_RST_CTRL_RST_KEY_MASK ((uint32_t)0xFF000000U)
#define UART_RST_STS_RST_STS_OFS (0)
#define UART_RST_STS_RST_STS_MASK ((uint32_t)0x00000001U)
#define UART_CLK_CTRL_CLK_EN_OFS (0)
#define UART_CLK_CTRL_CLK_EN_MASK ((uint32_t)0x00000001U)
#define UART_CLK_SEL_CLK_SEL_OFS (0)
#define UART_CLK_SEL_CLK_SEL_MASK ((uint32_t)0x00000003U)
#define UART_CLK_DIV_CLK_DIV_OFS (0)
#define UART_CLK_DIV_CLK_DIV_MASK ((uint32_t)0x0000000FU)
#define UART_DBG_CTRL_RUN_ON_HALT_OFS (0)
#define UART_DBG_CTRL_RUN_ON_HALT_MASK ((uint32_t)0x00000001U)
#define UART_DBG_CTRL_SOFT_STOP_OFS (1)
#define UART_DBG_CTRL_SOFT_STOP_MASK ((uint32_t)0x00000002U)
#define UART_INTR_EVENT_RCV_TIMEOUT_OFS (0)
#define UART_INTR_EVENT_RCV_TIMEOUT_MASK ((uint32_t)0x00000001U)
#define UART_INTR_EVENT_FRAME_ERR_OFS (1)
#define UART_INTR_EVENT_FRAME_ERR_MASK ((uint32_t)0x00000002U)
#define UART_INTR_EVENT_PARITY_ERR_OFS (2)
#define UART_INTR_EVENT_PARITY_ERR_MASK ((uint32_t)0x00000004U)
#define UART_INTR_EVENT_UNDERFLOW_ERR_OFS (3)
#define UART_INTR_EVENT_UNDERFLOW_ERR_MASK ((uint32_t)0x00000008U)
#define UART_INTR_EVENT_OVERFLOW_ERR_OFS (4)
#define UART_INTR_EVENT_OVERFLOW_ERR_MASK ((uint32_t)0x00000010U)
#define UART_INTR_EVENT_MAJ_VOTE_ERR_OFS (5)
#define UART_INTR_EVENT_MAJ_VOTE_ERR_MASK ((uint32_t)0x00000020U)
#define UART_INTR_EVENT_TX_FIFO_ALMOST_FULL_OFS (6)
#define UART_INTR_EVENT_TX_FIFO_ALMOST_FULL_MASK ((uint32_t)0x00000040U)
#define UART_INTR_EVENT_TX_FIFO_FULL_OFS (7)
#define UART_INTR_EVENT_TX_FIFO_FULL_MASK ((uint32_t)0x00000080U)
#define UART_INTR_EVENT_TX_FIFO_ALMOST_EMPTY_OFS (8)
#define UART_INTR_EVENT_TX_FIFO_ALMOST_EMPTY_MASK ((uint32_t)0x00000100U)
#define UART_INTR_EVENT_TX_FIFO_EMPTY_OFS (9)
#define UART_INTR_EVENT_TX_FIFO_EMPTY_MASK ((uint32_t)0x00000200U)
#define UART_INTR_EVENT_RX_FIFO_ALMOST_FULL_OFS (10)
#define UART_INTR_EVENT_RX_FIFO_ALMOST_FULL_MASK ((uint32_t)0x00000400U)
#define UART_INTR_EVENT_RX_FIFO_FULL_OFS (11)
#define UART_INTR_EVENT_RX_FIFO_FULL_MASK ((uint32_t)0x00000800U)
#define UART_INTR_EVENT_RX_FIFO_ALMOST_EMPTY_OFS (12)
#define UART_INTR_EVENT_RX_FIFO_ALMOST_EMPTY_MASK ((uint32_t)0x00001000U)
#define UART_INTR_EVENT_RX_FIFO_EMPTY_OFS (13)
#define UART_INTR_EVENT_RX_FIFO_EMPTY_MASK ((uint32_t)0x00002000U)
#define UART_INTR_EVENT_RCV_NEGEDGE_OFS (14)
#define UART_INTR_EVENT_RCV_NEGEDGE_MASK ((uint32_t)0x00004000U)
#define UART_INTR_EVENT_RCV_POSEDGE_OFS (15)
#define UART_INTR_EVENT_RCV_POSEDGE_MASK ((uint32_t)0x00008000U)
#define UART_INTR_EVENT_RX_INT_OFS (16)
#define UART_INTR_EVENT_RX_INT_MASK ((uint32_t)0x00010000U)
#define UART_INTR_EVENT_TX_INT_OFS (17)
#define UART_INTR_EVENT_TX_INT_MASK ((uint32_t)0x00020000U)
#define UART_INTR_EVENT_CTS_INT_OFS (18)
#define UART_INTR_EVENT_CTS_INT_MASK ((uint32_t)0x00040000U)
#define UART_INTR_EVENT_ADDR_MATCH_OFS (19)
#define UART_INTR_EVENT_ADDR_MATCH_MASK ((uint32_t)0x00080000U)
#define UART_INTR_EVENT_BAUD_ERR_OFS (20)
#define UART_INTR_EVENT_BAUD_ERR_MASK ((uint32_t)0x00100000U)
#define UART_INTR_EVENT_EOT_OFS (21)
#define UART_INTR_EVENT_EOT_MASK ((uint32_t)0x00200000U)
#define UART_INTR_EVENT_DMA_DONE_TX_INTR_OFS (22)
#define UART_INTR_EVENT_DMA_DONE_TX_INTR_MASK ((uint32_t)0x00400000U)
#define UART_INTR_EVENT_DMA_DONE_RX_INTR_OFS (23)
#define UART_INTR_EVENT_DMA_DONE_RX_INTR_MASK ((uint32_t)0x00800000U)
#define UART_INTR_EN0_RCV_TIMEOUT_EN_OFS (0)
#define UART_INTR_EN0_RCV_TIMEOUT_EN_MASK ((uint32_t)0x00000001U)
#define UART_INTR_EN0_FRAME_ERR_EN_OFS (1)
#define UART_INTR_EN0_FRAME_ERR_EN_MASK ((uint32_t)0x00000002U)
#define UART_INTR_EN0_PARITY_ERR_EN_OFS (2)
#define UART_INTR_EN0_PARITY_ERR_EN_MASK ((uint32_t)0x00000004U)
#define UART_INTR_EN0_UNDERFLOW_ERR_EN_OFS (3)
#define UART_INTR_EN0_UNDERFLOW_ERR_EN_MASK ((uint32_t)0x00000008U)
#define UART_INTR_EN0_OVERFLOW_ERR_EN_OFS (4)
#define UART_INTR_EN0_OVERFLOW_ERR_EN_MASK ((uint32_t)0x00000010U)
#define UART_INTR_EN0_MAJ_VOTE_ERR_EN_OFS (5)
#define UART_INTR_EN0_MAJ_VOTE_ERR_EN_MASK ((uint32_t)0x00000020U)
#define UART_INTR_EN0_TX_FIFO_ALMOST_FULL_EN_OFS (6)
#define UART_INTR_EN0_TX_FIFO_ALMOST_FULL_EN_MASK ((uint32_t)0x00000040U)
#define UART_INTR_EN0_TX_FIFO_FULL_EN_OFS (7)
#define UART_INTR_EN0_TX_FIFO_FULL_EN_MASK ((uint32_t)0x00000080U)
#define UART_INTR_EN0_TX_FIFO_ALMOST_EMPTY_EN_OFS (8)
#define UART_INTR_EN0_TX_FIFO_ALMOST_EMPTY_EN_MASK ((uint32_t)0x00000100U)
#define UART_INTR_EN0_TX_FIFO_EMPTY_EN_OFS (9)
#define UART_INTR_EN0_TX_FIFO_EMPTY_EN_MASK ((uint32_t)0x00000200U)
#define UART_INTR_EN0_RX_FIFO_ALMOST_FULL_EN_OFS (10)
#define UART_INTR_EN0_RX_FIFO_ALMOST_FULL_EN_MASK ((uint32_t)0x00000400U)
#define UART_INTR_EN0_RX_FIFO_FULL_EN_OFS (11)
#define UART_INTR_EN0_RX_FIFO_FULL_EN_MASK ((uint32_t)0x00000800U)
#define UART_INTR_EN0_RX_FIFO_ALMOST_EMPTY_EN_OFS (12)
#define UART_INTR_EN0_RX_FIFO_ALMOST_EMPTY_EN_MASK ((uint32_t)0x00001000U)
#define UART_INTR_EN0_RX_FIFO_EMPTY_EN_OFS (13)
#define UART_INTR_EN0_RX_FIFO_EMPTY_EN_MASK ((uint32_t)0x00002000U)
#define UART_INTR_EN0_RCV_NEGEDGE_EN_OFS (14)
#define UART_INTR_EN0_RCV_NEGEDGE_EN_MASK ((uint32_t)0x00004000U)
#define UART_INTR_EN0_RCV_POSEDGE_EN_OFS (15)
#define UART_INTR_EN0_RCV_POSEDGE_EN_MASK ((uint32_t)0x00008000U)
#define UART_INTR_EN1_RX_INT_EN_OFS (0)
#define UART_INTR_EN1_RX_INT_EN_MASK ((uint32_t)0x00000001U)
#define UART_INTR_EN1_TX_INT_EN_OFS (1)
#define UART_INTR_EN1_TX_INT_EN_MASK ((uint32_t)0x00000002U)
#define UART_INTR_EN1_CTS_INT_EN_OFS (2)
#define UART_INTR_EN1_CTS_INT_EN_MASK ((uint32_t)0x00000004U)
#define UART_INTR_EN1_ADDR_MATCH_EN_OFS (3)
#define UART_INTR_EN1_ADDR_MATCH_EN_MASK ((uint32_t)0x00000008U)
#define UART_INTR_EN1_BAUD_ERR_EN_OFS (4)
#define UART_INTR_EN1_BAUD_ERR_EN_MASK ((uint32_t)0x00000010U)
#define UART_INTR_EN1_EOT_EN_OFS (5)
#define UART_INTR_EN1_EOT_EN_MASK ((uint32_t)0x00000020U)
#define UART_INTR_EN1_DMA_DONE_TX_INTR_EN_OFS (6)
#define UART_INTR_EN1_DMA_DONE_TX_INTR_EN_MASK ((uint32_t)0x00000040U)
#define UART_INTR_EN1_DMA_DONE_RX_INTR_EN_OFS (7)
#define UART_INTR_EN1_DMA_DONE_RX_INTR_EN_MASK ((uint32_t)0x00000080U)
#define UART_INTR_NMI_EN0_RCV_TIMEOUT_NMI_EN_OFS (0)
#define UART_INTR_NMI_EN0_RCV_TIMEOUT_NMI_EN_MASK ((uint32_t)0x00000001U)
#define UART_INTR_NMI_EN0_FRAME_ERR_NMI_EN_OFS (1)
#define UART_INTR_NMI_EN0_FRAME_ERR_NMI_EN_MASK ((uint32_t)0x00000002U)
#define UART_INTR_NMI_EN0_PARITY_ERR_NMI_EN_OFS (2)
#define UART_INTR_NMI_EN0_PARITY_ERR_NMI_EN_MASK ((uint32_t)0x00000004U)
#define UART_INTR_NMI_EN0_UNDERFLOW_ERR_NMI_EN_OFS (3)
#define UART_INTR_NMI_EN0_UNDERFLOW_ERR_NMI_EN_MASK ((uint32_t)0x00000008U)
#define UART_INTR_NMI_EN0_OVERFLOW_ERR_NMI_EN_OFS (4)
#define UART_INTR_NMI_EN0_OVERFLOW_ERR_NMI_EN_MASK ((uint32_t)0x00000010U)
#define UART_INTR_NMI_EN0_MAJ_VOTE_ERR_NMI_EN_OFS (5)
#define UART_INTR_NMI_EN0_MAJ_VOTE_ERR_NMI_EN_MASK ((uint32_t)0x00000020U)
#define UART_INTR_NMI_EN0_TX_FIFO_ALMOST_FULL_NMI_EN_OFS (6)
#define UART_INTR_NMI_EN0_TX_FIFO_ALMOST_FULL_NMI_EN_MASK ((uint32_t)0x00000040U)
#define UART_INTR_NMI_EN0_TX_FIFO_FULL_NMI_EN_OFS (7)
#define UART_INTR_NMI_EN0_TX_FIFO_FULL_NMI_EN_MASK ((uint32_t)0x00000080U)
#define UART_INTR_NMI_EN0_TX_FIFO_ALMOST_EMPTY_NMI_EN_OFS (8)
#define UART_INTR_NMI_EN0_TX_FIFO_ALMOST_EMPTY_NMI_EN_MASK ((uint32_t)0x00000100U)
#define UART_INTR_NMI_EN0_TX_FIFO_EMPTY_NMI_EN_OFS (9)
#define UART_INTR_NMI_EN0_TX_FIFO_EMPTY_NMI_EN_MASK ((uint32_t)0x00000200U)
#define UART_INTR_NMI_EN0_RX_FIFO_ALMOST_FULL_NMI_EN_OFS (10)
#define UART_INTR_NMI_EN0_RX_FIFO_ALMOST_FULL_NMI_EN_MASK ((uint32_t)0x00000400U)
#define UART_INTR_NMI_EN0_RX_FIFO_FULL_NMI_EN_OFS (11)
#define UART_INTR_NMI_EN0_RX_FIFO_FULL_NMI_EN_MASK ((uint32_t)0x00000800U)
#define UART_INTR_NMI_EN0_RX_FIFO_ALMOST_EMPTY_NMI_EN_OFS (12)
#define UART_INTR_NMI_EN0_RX_FIFO_ALMOST_EMPTY_NMI_EN_MASK ((uint32_t)0x00001000U)
#define UART_INTR_NMI_EN0_RX_FIFO_EMPTY_NMI_EN_OFS (13)
#define UART_INTR_NMI_EN0_RX_FIFO_EMPTY_NMI_EN_MASK ((uint32_t)0x00002000U)
#define UART_INTR_NMI_EN0_RCV_NEGEDGE_NMI_EN_OFS (14)
#define UART_INTR_NMI_EN0_RCV_NEGEDGE_NMI_EN_MASK ((uint32_t)0x00004000U)
#define UART_INTR_NMI_EN0_RCV_POSEDGE_NMI_EN_OFS (15)
#define UART_INTR_NMI_EN0_RCV_POSEDGE_NMI_EN_MASK ((uint32_t)0x00008000U)
#define UART_INTR_NMI_EN1_RX_INT_NMI_EN_OFS (0)
#define UART_INTR_NMI_EN1_RX_INT_NMI_EN_MASK ((uint32_t)0x00000001U)
#define UART_INTR_NMI_EN1_TX_INT_NMI_EN_OFS (1)
#define UART_INTR_NMI_EN1_TX_INT_NMI_EN_MASK ((uint32_t)0x00000002U)
#define UART_INTR_NMI_EN1_CTS_INT_NMI_EN_OFS (2)
#define UART_INTR_NMI_EN1_CTS_INT_NMI_EN_MASK ((uint32_t)0x00000004U)
#define UART_INTR_NMI_EN1_ADDR_MATCH_NMI_EN_OFS (3)
#define UART_INTR_NMI_EN1_ADDR_MATCH_NMI_EN_MASK ((uint32_t)0x00000008U)
#define UART_INTR_NMI_EN1_BAUD_ERR_NMI_EN_OFS (4)
#define UART_INTR_NMI_EN1_BAUD_ERR_NMI_EN_MASK ((uint32_t)0x00000010U)
#define UART_INTR_NMI_EN1_EOT_NMI_EN_OFS (5)
#define UART_INTR_NMI_EN1_EOT_NMI_EN_MASK ((uint32_t)0x00000020U)
#define UART_INTR_NMI_EN1_DMA_DONE_TX_INTR_NMI_EN_OFS (6)
#define UART_INTR_NMI_EN1_DMA_DONE_TX_INTR_NMI_EN_MASK ((uint32_t)0x00000040U)
#define UART_INTR_NMI_EN1_DMA_DONE_RX_INTR_NMI_EN_OFS (7)
#define UART_INTR_NMI_EN1_DMA_DONE_RX_INTR_NMI_EN_MASK ((uint32_t)0x00000080U)
#define UART_INTR_SW_SET_RCV_TIMEOUT_SW_SET_OFS (0)
#define UART_INTR_SW_SET_RCV_TIMEOUT_SW_SET_MASK ((uint32_t)0x00000001U)
#define UART_INTR_SW_SET_FRAME_ERR_SW_SET_OFS (1)
#define UART_INTR_SW_SET_FRAME_ERR_SW_SET_MASK ((uint32_t)0x00000002U)
#define UART_INTR_SW_SET_PARITY_ERR_SW_SET_OFS (2)
#define UART_INTR_SW_SET_PARITY_ERR_SW_SET_MASK ((uint32_t)0x00000004U)
#define UART_INTR_SW_SET_UNDERFLOW_ERR_SW_SET_OFS (3)
#define UART_INTR_SW_SET_UNDERFLOW_ERR_SW_SET_MASK ((uint32_t)0x00000008U)
#define UART_INTR_SW_SET_OVERFLOW_ERR_SW_SET_OFS (4)
#define UART_INTR_SW_SET_OVERFLOW_ERR_SW_SET_MASK ((uint32_t)0x00000010U)
#define UART_INTR_SW_SET_MAJ_VOTE_ERR_SW_SET_OFS (5)
#define UART_INTR_SW_SET_MAJ_VOTE_ERR_SW_SET_MASK ((uint32_t)0x00000020U)
#define UART_INTR_SW_SET_TX_FIFO_ALMOST_FULL_SW_SET_OFS (6)
#define UART_INTR_SW_SET_TX_FIFO_ALMOST_FULL_SW_SET_MASK ((uint32_t)0x00000040U)
#define UART_INTR_SW_SET_TX_FIFO_FULL_SW_SET_OFS (7)
#define UART_INTR_SW_SET_TX_FIFO_FULL_SW_SET_MASK ((uint32_t)0x00000080U)
#define UART_INTR_SW_SET_TX_FIFO_ALMOST_EMPTY_SW_SET_OFS (8)
#define UART_INTR_SW_SET_TX_FIFO_ALMOST_EMPTY_SW_SET_MASK ((uint32_t)0x00000100U)
#define UART_INTR_SW_SET_TX_FIFO_EMPTY_SW_SET_OFS (9)
#define UART_INTR_SW_SET_TX_FIFO_EMPTY_SW_SET_MASK ((uint32_t)0x00000200U)
#define UART_INTR_SW_SET_RX_FIFO_ALMOST_FULL_SW_SET_OFS (10)
#define UART_INTR_SW_SET_RX_FIFO_ALMOST_FULL_SW_SET_MASK ((uint32_t)0x00000400U)
#define UART_INTR_SW_SET_RX_FIFO_FULL_SW_SET_OFS (11)
#define UART_INTR_SW_SET_RX_FIFO_FULL_SW_SET_MASK ((uint32_t)0x00000800U)
#define UART_INTR_SW_SET_RX_FIFO_ALMOST_EMPTY_SW_SET_OFS (12)
#define UART_INTR_SW_SET_RX_FIFO_ALMOST_EMPTY_SW_SET_MASK ((uint32_t)0x00001000U)
#define UART_INTR_SW_SET_RX_FIFO_EMPTY_SW_SET_OFS (13)
#define UART_INTR_SW_SET_RX_FIFO_EMPTY_SW_SET_MASK ((uint32_t)0x00002000U)
#define UART_INTR_SW_SET_RCV_NEGEDGE_SW_SET_OFS (14)
#define UART_INTR_SW_SET_RCV_NEGEDGE_SW_SET_MASK ((uint32_t)0x00004000U)
#define UART_INTR_SW_SET_RCV_POSEDGE_SW_SET_OFS (15)
#define UART_INTR_SW_SET_RCV_POSEDGE_SW_SET_MASK ((uint32_t)0x00008000U)
#define UART_INTR_SW_SET_RX_INT_SW_SET_OFS (16)
#define UART_INTR_SW_SET_RX_INT_SW_SET_MASK ((uint32_t)0x00010000U)
#define UART_INTR_SW_SET_TX_INT_SW_SET_OFS (17)
#define UART_INTR_SW_SET_TX_INT_SW_SET_MASK ((uint32_t)0x00020000U)
#define UART_INTR_SW_SET_CTS_INT_SW_SET_OFS (18)
#define UART_INTR_SW_SET_CTS_INT_SW_SET_MASK ((uint32_t)0x00040000U)
#define UART_INTR_SW_SET_ADDR_MATCH_SW_SET_OFS (19)
#define UART_INTR_SW_SET_ADDR_MATCH_SW_SET_MASK ((uint32_t)0x00080000U)
#define UART_INTR_SW_SET_BAUD_ERR_SW_SET_OFS (20)
#define UART_INTR_SW_SET_BAUD_ERR_SW_SET_MASK ((uint32_t)0x00100000U)
#define UART_INTR_SW_SET_EOT_SW_SET_OFS (21)
#define UART_INTR_SW_SET_EOT_SW_SET_MASK ((uint32_t)0x00200000U)
#define UART_INTR_SW_SET_DMA_DONE_TX_INTR_SW_SET_OFS (22)
#define UART_INTR_SW_SET_DMA_DONE_TX_INTR_SW_SET_MASK ((uint32_t)0x00400000U)
#define UART_INTR_SW_SET_DMA_DONE_RX_INTR_SW_SET_OFS (23)
#define UART_INTR_SW_SET_DMA_DONE_RX_INTR_SW_SET_MASK ((uint32_t)0x00800000U)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_RCV_TIMEOUT_EN_OFS (0)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_RCV_TIMEOUT_EN_MASK ((uint32_t)0x00000001U)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_FRAME_ERR_EN_OFS (1)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_FRAME_ERR_EN_MASK ((uint32_t)0x00000002U)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_PARITY_ERR_EN_OFS (2)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_PARITY_ERR_EN_MASK ((uint32_t)0x00000004U)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_UNDERFLOW_ERR_EN_OFS (3)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_UNDERFLOW_ERR_EN_MASK ((uint32_t)0x00000008U)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_OVERFLOW_ERR_EN_OFS (4)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_OVERFLOW_ERR_EN_MASK ((uint32_t)0x00000010U)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_MAJ_VOTE_ERR_EN_OFS (5)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_MAJ_VOTE_ERR_EN_MASK ((uint32_t)0x00000020U)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_TX_FIFO_ALMOST_FULL_EN_OFS (6)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_TX_FIFO_ALMOST_FULL_EN_MASK ((uint32_t)0x00000040U)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_TX_FIFO_FULL_EN_OFS (7)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_TX_FIFO_FULL_EN_MASK ((uint32_t)0x00000080U)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_TX_FIFO_ALMOST_EMPTY_EN_OFS (8)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_TX_FIFO_ALMOST_EMPTY_EN_MASK ((uint32_t)0x00000100U)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_TX_FIFO_EMPTY_EN_OFS (9)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_TX_FIFO_EMPTY_EN_MASK ((uint32_t)0x00000200U)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_RX_FIFO_ALMOST_FULL_EN_OFS (10)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_RX_FIFO_ALMOST_FULL_EN_MASK ((uint32_t)0x00000400U)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_RX_FIFO_FULL_EN_OFS (11)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_RX_FIFO_FULL_EN_MASK ((uint32_t)0x00000800U)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_RX_FIFO_ALMOST_EMPTY_EN_OFS (12)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_RX_FIFO_ALMOST_EMPTY_EN_MASK ((uint32_t)0x00001000U)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_RX_FIFO_EMPTY_EN_OFS (13)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_RX_FIFO_EMPTY_EN_MASK ((uint32_t)0x00002000U)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_RCV_NEGEDGE_EN_OFS (14)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_RCV_NEGEDGE_EN_MASK ((uint32_t)0x00004000U)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_RCV_POSEDGE_EN_OFS (15)
#define UART_DMA_RX_EVENT_EN0_DMA_RX_RCV_POSEDGE_EN_MASK ((uint32_t)0x00008000U)
#define UART_DMA_RX_EVENT_EN1_DMA_RX_RX_INT_EN_OFS (0)
#define UART_DMA_RX_EVENT_EN1_DMA_RX_RX_INT_EN_MASK ((uint32_t)0x00000001U)
#define UART_DMA_RX_EVENT_EN1_DMA_RX_TX_INT_EN_OFS (1)
#define UART_DMA_RX_EVENT_EN1_DMA_RX_TX_INT_EN_MASK ((uint32_t)0x00000002U)
#define UART_DMA_RX_EVENT_EN1_DMA_RX_CTS_INT_EN_OFS (2)
#define UART_DMA_RX_EVENT_EN1_DMA_RX_CTS_INT_EN_MASK ((uint32_t)0x00000004U)
#define UART_DMA_RX_EVENT_EN1_DMA_RX_ADDR_MATCH_EN_OFS (3)
#define UART_DMA_RX_EVENT_EN1_DMA_RX_ADDR_MATCH_EN_MASK ((uint32_t)0x00000008U)
#define UART_DMA_RX_EVENT_EN1_DMA_RX_BAUD_ERR_EN_OFS (4)
#define UART_DMA_RX_EVENT_EN1_DMA_RX_BAUD_ERR_EN_MASK ((uint32_t)0x00000010U)
#define UART_DMA_RX_EVENT_EN1_DMA_RX_EOT_EN_OFS (5)
#define UART_DMA_RX_EVENT_EN1_DMA_RX_EOT_EN_MASK ((uint32_t)0x00000020U)
#define UART_DMA_RX_EVENT_EN1_DMA_RX_DMA_DONE_TX_INTR_EN_OFS (6)
#define UART_DMA_RX_EVENT_EN1_DMA_RX_DMA_DONE_TX_INTR_EN_MASK ((uint32_t)0x00000040U)
#define UART_DMA_RX_EVENT_EN1_DMA_RX_DMA_DONE_RX_INTR_EN_OFS (7)
#define UART_DMA_RX_EVENT_EN1_DMA_RX_DMA_DONE_RX_INTR_EN_MASK ((uint32_t)0x00000080U)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_RCV_TIMEOUT_EN_OFS (0)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_RCV_TIMEOUT_EN_MASK ((uint32_t)0x00000001U)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_FRAME_ERR_EN_OFS (1)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_FRAME_ERR_EN_MASK ((uint32_t)0x00000002U)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_PARITY_ERR_EN_OFS (2)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_PARITY_ERR_EN_MASK ((uint32_t)0x00000004U)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_UNDERFLOW_ERR_EN_OFS (3)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_UNDERFLOW_ERR_EN_MASK ((uint32_t)0x00000008U)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_OVERFLOW_ERR_EN_OFS (4)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_OVERFLOW_ERR_EN_MASK ((uint32_t)0x00000010U)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_MAJ_VOTE_ERR_EN_OFS (5)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_MAJ_VOTE_ERR_EN_MASK ((uint32_t)0x00000020U)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_TX_FIFO_ALMOST_FULL_EN_OFS (6)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_TX_FIFO_ALMOST_FULL_EN_MASK ((uint32_t)0x00000040U)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_TX_FIFO_FULL_EN_OFS (7)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_TX_FIFO_FULL_EN_MASK ((uint32_t)0x00000080U)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_TX_FIFO_ALMOST_EMPTY_EN_OFS (8)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_TX_FIFO_ALMOST_EMPTY_EN_MASK ((uint32_t)0x00000100U)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_TX_FIFO_EMPTY_EN_OFS (9)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_TX_FIFO_EMPTY_EN_MASK ((uint32_t)0x00000200U)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_RX_FIFO_ALMOST_FULL_EN_OFS (10)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_RX_FIFO_ALMOST_FULL_EN_MASK ((uint32_t)0x00000400U)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_RX_FIFO_FULL_EN_OFS (11)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_RX_FIFO_FULL_EN_MASK ((uint32_t)0x00000800U)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_RX_FIFO_ALMOST_EMPTY_EN_OFS (12)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_RX_FIFO_ALMOST_EMPTY_EN_MASK ((uint32_t)0x00001000U)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_RX_FIFO_EMPTY_EN_OFS (13)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_RX_FIFO_EMPTY_EN_MASK ((uint32_t)0x00002000U)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_RCV_NEGEDGE_EN_OFS (14)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_RCV_NEGEDGE_EN_MASK ((uint32_t)0x00004000U)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_RCV_POSEDGE_EN_OFS (15)
#define UART_DMA_TX_EVENT_EN0_DMA_TX_RCV_POSEDGE_EN_MASK ((uint32_t)0x00008000U)
#define UART_DMA_TX_EVENT_EN1_DMA_TX_RX_INT_EN_OFS (0)
#define UART_DMA_TX_EVENT_EN1_DMA_TX_RX_INT_EN_MASK ((uint32_t)0x00000001U)
#define UART_DMA_TX_EVENT_EN1_DMA_TX_TX_INT_EN_OFS (1)
#define UART_DMA_TX_EVENT_EN1_DMA_TX_TX_INT_EN_MASK ((uint32_t)0x00000002U)
#define UART_DMA_TX_EVENT_EN1_DMA_TX_CTS_INT_EN_OFS (2)
#define UART_DMA_TX_EVENT_EN1_DMA_TX_CTS_INT_EN_MASK ((uint32_t)0x00000004U)
#define UART_DMA_TX_EVENT_EN1_DMA_TX_ADDR_MATCH_EN_OFS (3)
#define UART_DMA_TX_EVENT_EN1_DMA_TX_ADDR_MATCH_EN_MASK ((uint32_t)0x00000008U)
#define UART_DMA_TX_EVENT_EN1_DMA_TX_BAUD_ERR_EN_OFS (4)
#define UART_DMA_TX_EVENT_EN1_DMA_TX_BAUD_ERR_EN_MASK ((uint32_t)0x00000010U)
#define UART_DMA_TX_EVENT_EN1_DMA_TX_EOT_EN_OFS (5)
#define UART_DMA_TX_EVENT_EN1_DMA_TX_EOT_EN_MASK ((uint32_t)0x00000020U)
#define UART_DMA_TX_EVENT_EN1_DMA_TX_DMA_DONE_TX_INTR_EN_OFS (6)
#define UART_DMA_TX_EVENT_EN1_DMA_TX_DMA_DONE_TX_INTR_EN_MASK ((uint32_t)0x00000040U)
#define UART_DMA_TX_EVENT_EN1_DMA_TX_DMA_DONE_RX_INTR_EN_OFS (7)
#define UART_DMA_TX_EVENT_EN1_DMA_TX_DMA_DONE_RX_INTR_EN_MASK ((uint32_t)0x00000080U)
#define UART_INTR_STS_INTR_FIRST_OFS (0)
#define UART_INTR_STS_INTR_FIRST_MASK ((uint32_t)0x0000003FU)
#define UART_CLKCFG_BLCK_ASYNC_OFS (0)
#define UART_CLKCFG_BLCK_ASYNC_MASK ((uint32_t)0x00000001U)
#define UART_CLKCFG_ASYNC_REQ_EN_KEY_OFS (24)
#define UART_CLKCFG_ASYNC_REQ_EN_KEY_MASK ((uint32_t)0xFF000000U)
#define UART_FIFOLS_TX_FIFO_LS_OFS (0)
#define UART_FIFOLS_TX_FIFO_LS_MASK ((uint32_t)0x00000003U)
#define UART_FIFOLS_RX_TO_OFS (2)
#define UART_FIFOLS_RX_TO_MASK ((uint32_t)0x0000003CU)
#define UART_FIFOLS_RX_FIFO_LS_OFS (6)
#define UART_FIFOLS_RX_FIFO_LS_MASK ((uint32_t)0x000000C0U)
#define UART_FIFOSTS_TX_FIFO_FULL_STS_OFS (0)
#define UART_FIFOSTS_TX_FIFO_FULL_STS_MASK ((uint32_t)0x00000001U)
#define UART_FIFOSTS_TX_FIFO_ALMOST_FULL_STS_OFS (1)
#define UART_FIFOSTS_TX_FIFO_ALMOST_FULL_STS_MASK ((uint32_t)0x00000002U)
#define UART_FIFOSTS_TX_FIFO_EMPTY_STS_OFS (2)
#define UART_FIFOSTS_TX_FIFO_EMPTY_STS_MASK ((uint32_t)0x00000004U)
#define UART_FIFOSTS_TX_FIFO_ALMOST_EMPTY_STS_OFS (3)
#define UART_FIFOSTS_TX_FIFO_ALMOST_EMPTY_STS_MASK ((uint32_t)0x00000008U)
#define UART_FIFOSTS_RX_FIFO_FULL_STS_OFS (4)
#define UART_FIFOSTS_RX_FIFO_FULL_STS_MASK ((uint32_t)0x00000010U)
#define UART_FIFOSTS_RX_FIFO_ALMOST_FULL_STS_OFS (5)
#define UART_FIFOSTS_RX_FIFO_ALMOST_FULL_STS_MASK ((uint32_t)0x00000020U)
#define UART_FIFOSTS_RX_FIFO_EMPTY_STS_OFS (6)
#define UART_FIFOSTS_RX_FIFO_EMPTY_STS_MASK ((uint32_t)0x00000040U)
#define UART_FIFOSTS_RX_FIFO_ALMOST_EMPTY_STS_OFS (7)
#define UART_FIFOSTS_RX_FIFO_ALMOST_EMPTY_STS_MASK ((uint32_t)0x00000080U)
#define UART_CFG_WRD_LEN_OFS (0)
#define UART_CFG_WRD_LEN_MASK ((uint32_t)0x00000003U)
#define UART_CFG_PAR_EN_OFS (2)
#define UART_CFG_PAR_EN_MASK ((uint32_t)0x00000004U)
#define UART_CFG_EVN_PAR_OFS (3)
#define UART_CFG_EVN_PAR_MASK ((uint32_t)0x00000008U)
#define UART_CFG_STCK_PAR_OFS (4)
#define UART_CFG_STCK_PAR_MASK ((uint32_t)0x00000010U)
#define UART_CFG_STOP_BIT_OFS (5)
#define UART_CFG_STOP_BIT_MASK ((uint32_t)0x00000020U)
#define UART_CFG_SEND_IDLE_OFS (6)
#define UART_CFG_SEND_IDLE_MASK ((uint32_t)0x00000040U)
#define UART_GFCTL_GF_WIDTH_OFS (0)
#define UART_GFCTL_GF_WIDTH_MASK ((uint32_t)0x0000003FU)
#define UART_TXDATA_UART_DATA_OFS (0)
#define UART_TXDATA_UART_DATA_MASK ((uint32_t)0x000000FFU)
#define UART_RXDATA_UART_RESULT_OFS (0)
#define UART_RXDATA_UART_RESULT_MASK ((uint32_t)0x00000FFFU)
#define UART_BRDNUM_NUM_M_OFS (0)
#define UART_BRDNUM_NUM_M_MASK ((uint32_t)0xFFFFFFFFU)
#define UART_BRDDEN_DEN_N_OFS (0)
#define UART_BRDDEN_DEN_N_MASK ((uint32_t)0xFFFFFFFFU)
#define UART_CTRL_UART_EN_OFS (0)
#define UART_CTRL_UART_EN_MASK ((uint32_t)0x00000001U)
#define UART_CTRL_UART_MSB_OFS (1)
#define UART_CTRL_UART_MSB_MASK ((uint32_t)0x00000002U)
#define UART_CTRL_MAJVOTE_EN_OFS (2)
#define UART_CTRL_MAJVOTE_EN_MASK ((uint32_t)0x00000004U)
#define UART_CTRL_FIFO_EN_OFS (3)
#define UART_CTRL_FIFO_EN_MASK ((uint32_t)0x00000008U)
#define UART_CTRL_OS_OFS (4)
#define UART_CTRL_OS_MASK ((uint32_t)0x000001F0U)
#define UART_CTRL_LOOPBACK_EN_OFS (9)
#define UART_CTRL_LOOPBACK_EN_MASK ((uint32_t)0x00000200U)
#define UART_CTRL_MODE_OFS (10)
#define UART_CTRL_MODE_MASK ((uint32_t)0x00000C00U)
#define UART_CTRL_TX_EN_OFS (12)
#define UART_CTRL_TX_EN_MASK ((uint32_t)0x00001000U)
#define UART_CTRL_RX_EN_OFS (13)
#define UART_CTRL_RX_EN_MASK ((uint32_t)0x00002000U)
#define UART_CTRL_TX_OUT_EN_OFS (14)
#define UART_CTRL_TX_OUT_EN_MASK ((uint32_t)0x00004000U)
#define UART_CTRL_TX_OUT_CTRL_OFS (15)
#define UART_CTRL_TX_OUT_CTRL_MASK ((uint32_t)0x00008000U)
#define UART_CTRL_CTS_EN_OFS (16)
#define UART_CTRL_CTS_EN_MASK ((uint32_t)0x00010000U)
#define UART_CTRL_RTS_EN_OFS (17)
#define UART_CTRL_RTS_EN_MASK ((uint32_t)0x00020000U)
#define UART_CTRL_RTS_VAL_OFS (18)
#define UART_CTRL_RTS_VAL_MASK ((uint32_t)0x00040000U)
#define UART_ADDR_UART_ADDR_OFS (0)
#define UART_ADDR_UART_ADDR_MASK ((uint32_t)0x000000FFU)
#define UART_ADDRMASK_ADDR_MASK_OFS (0)
#define UART_ADDRMASK_ADDR_MASK_MASK ((uint32_t)0x000000FFU)
#define UART_STS_CTS_STS_OFS (0)
#define UART_STS_CTS_STS_MASK ((uint32_t)0x00000001U)
#define UART_STS_BUSY_OFS (1)
#define UART_STS_BUSY_MASK ((uint32_t)0x00000002U)
#define UART_STS_IDLE_OFS (2)
#define UART_STS_IDLE_MASK ((uint32_t)0x00000004U)
#define UART_FSM_STS_TX_STATE_OFS (0)
#define UART_FSM_STS_TX_STATE_MASK ((uint32_t)0x00000007U)
#define UART_FSM_STS_RX_STATE_OFS (3)
#define UART_FSM_STS_RX_STATE_MASK ((uint32_t)0x00000078U)

#endif
