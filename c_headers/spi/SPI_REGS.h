#ifndef SPI_REGISTERS_H
#define SPI_REGISTERS_H

#include <stdint.h>

typedef struct SPI_DESC_REG_s {
    unsigned int module_type:8; // 
    unsigned int module_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} SPI_DESC_REG_s;

typedef union SPI_DESC_u {
    SPI_DESC_REG_s DESC;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_DESC_u;

typedef struct SPI_PWR_EN_REG_s {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    unsigned int pwr_en_key:8; // 
} SPI_PWR_EN_REG_s;

typedef union SPI_PWR_EN_u {
    SPI_PWR_EN_REG_s PWR_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_PWR_EN_u;

typedef struct SPI_RST_CTRL_REG_s {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    unsigned int rst_key:8; // 
} SPI_RST_CTRL_REG_s;

typedef union SPI_RST_CTRL_u {
    SPI_RST_CTRL_REG_s RST_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_RST_CTRL_u;

typedef struct SPI_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} SPI_RST_STS_REG_s;

typedef union SPI_RST_STS_u {
    SPI_RST_STS_REG_s RST_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_RST_STS_u;

typedef struct SPI_CLK_CTRL_REG_s {
    unsigned int clk_scaler:10; // 
} SPI_CLK_CTRL_REG_s;

typedef union SPI_CLK_CTRL_u {
    SPI_CLK_CTRL_REG_s CLK_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_CLK_CTRL_u;

typedef struct SPI_CLK_DIV_REG_s {
    unsigned int div_ratio:5; // 
} SPI_CLK_DIV_REG_s;

typedef union SPI_CLK_DIV_u {
    SPI_CLK_DIV_REG_s CLK_DIV;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_CLK_DIV_u;

typedef struct SPI_CLKSEL_REG_s {
    unsigned int clk_sel:2; // 
} SPI_CLKSEL_REG_s;

typedef union SPI_CLKSEL_u {
    SPI_CLKSEL_REG_s CLKSEL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_CLKSEL_u;

typedef struct SPI_MOT_MOD_CNTRL_REG_s {
    unsigned int clock_polarity:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int clock_phase:1; // 
} SPI_MOT_MOD_CNTRL_REG_s;

typedef union SPI_MOT_MOD_CNTRL_u {
    SPI_MOT_MOD_CNTRL_REG_s MOT_MOD_CNTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_MOT_MOD_CNTRL_u;

typedef struct SPI_PARITY_CTRL_REG_s {
    unsigned int parity_en:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int even_parity:1; // 
} SPI_PARITY_CTRL_REG_s;

typedef union SPI_PARITY_CTRL_u {
    SPI_PARITY_CTRL_REG_s PARITY_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_PARITY_CTRL_u;

typedef struct SPI_CMD_DATA_CTRL_REG_s {
    unsigned int cmd_data_mode_en:1; // 
    unsigned int rsvd_0:7; // Matser mode
    unsigned int cmd_data_mode_val:4; // Matser mode
} SPI_CMD_DATA_CTRL_REG_s;

typedef union SPI_CMD_DATA_CTRL_u {
    SPI_CMD_DATA_CTRL_REG_s CMD_DATA_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_CMD_DATA_CTRL_u;

typedef struct SPI_LOOPBACK_CTRL_REG_s {
    unsigned int loopback_mode:1; // 
} SPI_LOOPBACK_CTRL_REG_s;

typedef union SPI_LOOPBACK_CTRL_u {
    SPI_LOOPBACK_CTRL_REG_s LOOPBACK_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_LOOPBACK_CTRL_u;

typedef struct SPI_DATAFRAME_CTRL_REG_s {
    unsigned int data_size_sel:5; // Number of bits on data frame
    unsigned int rsvd_0:3; // 1: msb is transmitted first 0: lsb is transmitted first
    unsigned int msb_first:1; // 1: msb is transmitted first 0: lsb is transmitted first
    unsigned int rsvd_1:7; // Unused
    unsigned int data_out_disable:1; // Unused
} SPI_DATAFRAME_CTRL_REG_s;

typedef union SPI_DATAFRAME_CTRL_u {
    SPI_DATAFRAME_CTRL_REG_s DATAFRAME_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_DATAFRAME_CTRL_u;

typedef struct SPI_MODE_CTRL_REG_s {
    unsigned int spi_en:1; // 
    unsigned int rsvd_0:7; // 0: Controller 1: peripheral
    unsigned int peripheral_mode:1; // 0: Controller 1: peripheral
    unsigned int rsvd_1:7; // 0: Motoroal format 1: TI format 2: DSPI 3: QSPI
    unsigned int frame_format:3; // 0: Motoroal format 1: TI format 2: DSPI 3: QSPI
} SPI_MODE_CTRL_REG_s;

typedef union SPI_MODE_CTRL_u {
    SPI_MODE_CTRL_REG_s MODE_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_MODE_CTRL_u;

typedef struct SPI_CS_CTRL_REG_s {
    unsigned int cs_sel:5; // 
    unsigned int rsvd_0:3; // Soft ware control for driving cs is enabled
    unsigned int soft_cs_en:1; // Soft ware control for driving cs is enabled
    unsigned int rsvd_1:7; // 
    unsigned int soft_cs:1; // 
} SPI_CS_CTRL_REG_s;

typedef union SPI_CS_CTRL_u {
    SPI_CS_CTRL_REG_s CS_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_CS_CTRL_u;

typedef struct SPI_CS_SETUP_HOLD_CNT_REG_s {
    unsigned int cs_setup_cnt:8; // Num of clk_spi cycle of CS setup time
    unsigned int cs_hold_cnt:8; // Num of clk_spi cycle of CS hold time
} SPI_CS_SETUP_HOLD_CNT_REG_s;

typedef union SPI_CS_SETUP_HOLD_CNT_u {
    SPI_CS_SETUP_HOLD_CNT_REG_s CS_SETUP_HOLD_CNT;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_CS_SETUP_HOLD_CNT_u;

typedef struct SPI_SCLK_CTRL_REG_s {
    unsigned int sclk_removal:1; // Used in master mode: 0: SCLK stops after receive is done 1: SCLK stops after transmission is done
} SPI_SCLK_CTRL_REG_s;

typedef union SPI_SCLK_CTRL_u {
    SPI_SCLK_CTRL_REG_s SCLK_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_SCLK_CTRL_u;

typedef struct SPI_QSPI_CTRL_REG_s {
    unsigned int qspi_first:1; // 0: Frames in normal mode are sent/received first 1: Frames in QSPI mode are sent/received first
    unsigned int rsvd_0:7; // Number of SPI frames in normal mode
    unsigned int nrml_spi_frames_in_qspi:8; // Number of SPI frames in normal mode
    unsigned int frames_in_qspi:8; // Number of SPI frames in QSPI mode
    unsigned int frames_in_wmode_in_qspi:8; // Applicable only for TX
} SPI_QSPI_CTRL_REG_s;

typedef union SPI_QSPI_CTRL_u {
    SPI_QSPI_CTRL_REG_s QSPI_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_QSPI_CTRL_u;

typedef struct SPI_DSPI_CTRL_REG_s {
    unsigned int dspi_first:1; // 0: Frames in normal mode are sent/received first 1: Frames in DSPI mode are sent/received first
    unsigned int rsvd_0:7; // Number of SPI frames in normal mode
    unsigned int nrml_spi_frames_in_dspi:8; // Number of SPI frames in normal mode
    unsigned int frames_in_dspi:8; // Number of SPI frames in normal mode
    unsigned int frames_in_wmode_in_dspi:8; // Applicable only for TX
} SPI_DSPI_CTRL_REG_s;

typedef union SPI_DSPI_CTRL_u {
    SPI_DSPI_CTRL_REG_s DSPI_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_DSPI_CTRL_u;

typedef struct SPI_TX_CTRL_REG_s {
    unsigned int repeat_tx_data:8; // Number of SPI frames to be repeated after FIFO is empty
} SPI_TX_CTRL_REG_s;

typedef union SPI_TX_CTRL_u {
    SPI_TX_CTRL_REG_s TX_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_TX_CTRL_u;

typedef struct SPI_RX_CTRL_REG_s {
    unsigned int receive_timeout:8; // In slave mode, timeout for RX  not receing any data to generate interrupt. Timeout is specified in number of clk_spi cycles
    unsigned int ignore_rx_cnt:8; // number of SPI frames RX should ignore
    unsigned int dly_sample_on_rx:4; // 
} SPI_RX_CTRL_REG_s;

typedef union SPI_RX_CTRL_u {
    SPI_RX_CTRL_REG_s RX_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_RX_CTRL_u;

typedef struct SPI_INT_FIFO_LVL_SEL_REG_s {
    unsigned int rx_fifo_lvl_int:4; // 
    unsigned int rsvd_0:4; // 
    unsigned int tx_fifo_lvl_int:4; // 
} SPI_INT_FIFO_LVL_SEL_REG_s;

typedef union SPI_INT_FIFO_LVL_SEL_u {
    SPI_INT_FIFO_LVL_SEL_REG_s INT_FIFO_LVL_SEL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_INT_FIFO_LVL_SEL_u;

typedef struct SPI_STS_REG_s {
    unsigned int spi_busy_sts:1; // 
    unsigned int rx_fifo_full_sts:1; // 
    unsigned int rx_fifo_empty_sts:1; // 
    unsigned int tx_fifo_full_sts:1; // 
    unsigned int tx_fifo_empty_sts:1; // 
} SPI_STS_REG_s;

typedef union SPI_STS_u {
    SPI_STS_REG_s STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_STS_u;

typedef struct SPI_TX_FIFO_REG_s {
    unsigned int tx_fifo:32; // 
} SPI_TX_FIFO_REG_s;

typedef union SPI_TX_FIFO_u {
    SPI_TX_FIFO_REG_s TX_FIFO;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_TX_FIFO_u;

typedef struct SPI_RX_FIFO_REG_s {
    unsigned int rx_fifo:32; // 
} SPI_RX_FIFO_REG_s;

typedef union SPI_RX_FIFO_u {
    SPI_RX_FIFO_REG_s RX_FIFO;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_RX_FIFO_u;

typedef struct SPI_SPI_DBG_CTRL_REG_s {
    unsigned int stop_on_halt:1; // 
    unsigned int soft_stop:1; // 
} SPI_SPI_DBG_CTRL_REG_s;

typedef union SPI_SPI_DBG_CTRL_u {
    SPI_SPI_DBG_CTRL_REG_s SPI_DBG_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_SPI_DBG_CTRL_u;

typedef struct SPI_INTR_STS_REG_s {
    unsigned int intr_first:5; // 
} SPI_INTR_STS_REG_s;

typedef union SPI_INTR_STS_u {
    SPI_INTR_STS_REG_s INTR_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_INTR_STS_u;

typedef struct SPI_INTR_EVENT_REG_s {
    unsigned int rx_fifo_overflow:1; // 
    unsigned int parity_error:1; // 
    unsigned int rx_timeout:1; // 
    unsigned int rx_fifo_trg_lvl:1; // 
    unsigned int tx_fifo_trg_lvl:1; // 
    unsigned int tx_fifo_empty:1; // 
    unsigned int idle:1; // 
    unsigned int rx_dma_done:1; // 
    unsigned int tx_dma_done:1; // 
    unsigned int tx_fifo_underflow:1; // 
    unsigned int rx_fifo_full:1; // 
} SPI_INTR_EVENT_REG_s;

typedef union SPI_INTR_EVENT_u {
    SPI_INTR_EVENT_REG_s INTR_EVENT;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_INTR_EVENT_u;

typedef struct SPI_INTR_EN_REG_s {
    unsigned int rx_fifo_overflow_en:1; // 
    unsigned int parity_error_en:1; // 
    unsigned int rx_timeout_en:1; // 
    unsigned int rx_fifo_trg_lvl_en:1; // 
    unsigned int tx_fifo_trg_lvl_en:1; // 
    unsigned int tx_fifo_empty_en:1; // 
    unsigned int idle_en:1; // 
    unsigned int rx_dma_done_en:1; // 
    unsigned int tx_dma_done_en:1; // 
    unsigned int tx_fifo_underflow_en:1; // 
    unsigned int rx_fifo_full_en:1; // 
} SPI_INTR_EN_REG_s;

typedef union SPI_INTR_EN_u {
    SPI_INTR_EN_REG_s INTR_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_INTR_EN_u;

typedef struct SPI_INTR_TX_DMA_EN_REG_s {
    unsigned int rx_fifo_overflow_tx_dma_en:1; // 
    unsigned int parity_error_tx_dma_en:1; // 
    unsigned int rx_timeout_tx_dma_en:1; // 
    unsigned int rx_fifo_trg_lvl_tx_dma_en:1; // 
    unsigned int tx_fifo_trg_lvl_tx_dma_en:1; // 
    unsigned int tx_fifo_empty_tx_dma_en:1; // 
    unsigned int idle_tx_dma_en:1; // 
    unsigned int rx_dma_done_tx_dma_en:1; // 
    unsigned int tx_dma_done_tx_dma_en:1; // 
    unsigned int tx_fifo_underflow_tx_dma_en:1; // 
    unsigned int rx_fifo_full_tx_dma_en:1; // 
} SPI_INTR_TX_DMA_EN_REG_s;

typedef union SPI_INTR_TX_DMA_EN_u {
    SPI_INTR_TX_DMA_EN_REG_s INTR_TX_DMA_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_INTR_TX_DMA_EN_u;

typedef struct SPI_INTR_RX_DMA_EN_REG_s {
    unsigned int rx_fifo_overflow_rx_dma_en:1; // 
    unsigned int parity_error_rx_dma_en:1; // 
    unsigned int rx_timeout_rx_dma_en:1; // 
    unsigned int rx_fifo_trg_lvl_rx_dma_en:1; // 
    unsigned int tx_fifo_trg_lvl_rx_dma_en:1; // 
    unsigned int tx_fifo_empty_rx_dma_en:1; // 
    unsigned int idle_rx_dma_en:1; // 
    unsigned int rx_dma_done_rx_dma_en:1; // 
    unsigned int tx_dma_done_rx_dma_en:1; // 
    unsigned int tx_fifo_underflow_rx_dma_en:1; // 
    unsigned int rx_fifo_full_rx_dma_en:1; // 
} SPI_INTR_RX_DMA_EN_REG_s;

typedef union SPI_INTR_RX_DMA_EN_u {
    SPI_INTR_RX_DMA_EN_REG_s INTR_RX_DMA_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_INTR_RX_DMA_EN_u;

typedef struct SPI_INTR_NMI_REG_s {
    unsigned int rx_fifo_overflow_nmi_en:1; // 
    unsigned int parity_error_nmi_en:1; // 
    unsigned int rx_timeout_nmi_en:1; // 
    unsigned int rx_fifo_trg_lvl_nmi_en:1; // 
    unsigned int tx_fifo_trg_lvl_nmi_en:1; // 
    unsigned int tx_fifo_empty_nmi_en:1; // 
    unsigned int idle_nmi_en:1; // 
    unsigned int rx_dma_done_nmi_en:1; // 
    unsigned int tx_dma_done_nmi_en:1; // 
    unsigned int tx_fifo_underflow_nmi_en:1; // 
    unsigned int rx_fifo_full_nmi_en:1; // 
} SPI_INTR_NMI_REG_s;

typedef union SPI_INTR_NMI_u {
    SPI_INTR_NMI_REG_s INTR_NMI;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_INTR_NMI_u;

typedef struct SPI_INTR_SW_SET_REG_s {
    unsigned int rx_fifo_overflow_sw_set:1; // 
    unsigned int parity_error_sw_set:1; // 
    unsigned int rx_timeout_sw_set:1; // 
    unsigned int rx_fifo_trg_lvl_sw_set:1; // 
    unsigned int tx_fifo_trg_lvl_sw_set:1; // 
    unsigned int tx_fifo_empty_sw_set:1; // 
    unsigned int idle_sw_set:1; // 
    unsigned int rx_dma_done_sw_set:1; // 
    unsigned int tx_dma_done_sw_set:1; // 
    unsigned int tx_fifo_underflow_sw_set:1; // 
    unsigned int rx_fifo_full_sw_set:1; // 
} SPI_INTR_SW_SET_REG_s;

typedef union SPI_INTR_SW_SET_u {
    SPI_INTR_SW_SET_REG_s INTR_SW_SET;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_INTR_SW_SET_u;

typedef struct SPI_SPARE_CTRL_REG_s {
    unsigned int cfg0:8; // 
    unsigned int cfg1:8; // 
} SPI_SPARE_CTRL_REG_s;

typedef union SPI_SPARE_CTRL_u {
    SPI_SPARE_CTRL_REG_s SPARE_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_SPARE_CTRL_u;

typedef struct SPI_SPARE_STS_REG_s {
    unsigned int sts0:8; // 
    unsigned int sts1:8; // 
} SPI_SPARE_STS_REG_s;

typedef union SPI_SPARE_STS_u {
    SPI_SPARE_STS_REG_s SPARE_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_SPARE_STS_u;

typedef struct SPI_REGS_s{
    volatile SPI_DESC_u DESC;
    volatile SPI_PWR_EN_u PWR_EN;
    volatile SPI_RST_CTRL_u RST_CTRL;
    volatile SPI_RST_STS_u RST_STS;
    volatile SPI_CLK_CTRL_u CLK_CTRL;
    volatile SPI_CLK_DIV_u CLK_DIV;
    volatile SPI_CLKSEL_u CLKSEL;
    volatile SPI_MOT_MOD_CNTRL_u MOT_MOD_CNTRL;
    volatile SPI_PARITY_CTRL_u PARITY_CTRL;
    volatile SPI_CMD_DATA_CTRL_u CMD_DATA_CTRL;
    volatile SPI_LOOPBACK_CTRL_u LOOPBACK_CTRL;
    volatile SPI_DATAFRAME_CTRL_u DATAFRAME_CTRL;
    volatile SPI_MODE_CTRL_u MODE_CTRL;
    volatile SPI_CS_CTRL_u CS_CTRL;
    volatile SPI_CS_SETUP_HOLD_CNT_u CS_SETUP_HOLD_CNT;
    volatile SPI_SCLK_CTRL_u SCLK_CTRL;
    volatile SPI_QSPI_CTRL_u QSPI_CTRL;
    volatile SPI_DSPI_CTRL_u DSPI_CTRL;
    volatile SPI_TX_CTRL_u TX_CTRL;
    volatile SPI_RX_CTRL_u RX_CTRL;
    volatile SPI_INT_FIFO_LVL_SEL_u INT_FIFO_LVL_SEL;
    volatile SPI_STS_u STS;
    volatile SPI_TX_FIFO_u TX_FIFO[4];
    volatile SPI_RX_FIFO_u RX_FIFO[4];
    volatile SPI_SPI_DBG_CTRL_u SPI_DBG_CTRL;
    volatile SPI_INTR_STS_u INTR_STS;
    volatile SPI_INTR_EVENT_u INTR_EVENT;
    volatile SPI_INTR_EN_u INTR_EN;
    volatile SPI_INTR_TX_DMA_EN_u INTR_TX_DMA_EN;
    volatile SPI_INTR_RX_DMA_EN_u INTR_RX_DMA_EN;
    volatile SPI_INTR_NMI_u INTR_NMI;
    volatile SPI_INTR_SW_SET_u INTR_SW_SET;
    volatile SPI_SPARE_CTRL_u SPARE_CTRL;
    volatile SPI_SPARE_STS_u SPARE_STS;
} SPI_REGS_s;

#define SPI_DESC_module_type_OFS (0)
#define SPI_DESC_module_type_MASK ((uint32_t)0x000000FFU)
#define SPI_DESC_module_subtype_OFS (8)
#define SPI_DESC_module_subtype_MASK ((uint32_t)0x0000FF00U)
#define SPI_DESC_major_rev_OFS (16)
#define SPI_DESC_major_rev_MASK ((uint32_t)0x000F0000U)
#define SPI_DESC_minor_rev_OFS (20)
#define SPI_DESC_minor_rev_MASK ((uint32_t)0x00F00000U)
#define SPI_PWR_EN_pwr_en_OFS (0)
#define SPI_PWR_EN_pwr_en_MASK ((uint32_t)0x00000001U)
#define SPI_PWR_EN_pwr_en_key_OFS (24)
#define SPI_PWR_EN_pwr_en_key_MASK ((uint32_t)0xFF000000U)
#define SPI_RST_CTRL_rst_OFS (0)
#define SPI_RST_CTRL_rst_MASK ((uint32_t)0x00000001U)
#define SPI_RST_CTRL_rst_sts_clr_OFS (1)
#define SPI_RST_CTRL_rst_sts_clr_MASK ((uint32_t)0x00000002U)
#define SPI_RST_CTRL_rst_key_OFS (24)
#define SPI_RST_CTRL_rst_key_MASK ((uint32_t)0xFF000000U)
#define SPI_RST_STS_rst_sts_OFS (0)
#define SPI_RST_STS_rst_sts_MASK ((uint32_t)0x00000001U)
#define SPI_CLK_CTRL_clk_scaler_OFS (0)
#define SPI_CLK_CTRL_clk_scaler_MASK ((uint32_t)0x000003FFU)
#define SPI_CLK_DIV_div_ratio_OFS (0)
#define SPI_CLK_DIV_div_ratio_MASK ((uint32_t)0x0000001FU)
#define SPI_CLKSEL_clk_sel_OFS (0)
#define SPI_CLKSEL_clk_sel_MASK ((uint32_t)0x00000003U)
#define SPI_MOT_MOD_CNTRL_clock_polarity_OFS (0)
#define SPI_MOT_MOD_CNTRL_clock_polarity_MASK ((uint32_t)0x00000001U)
#define SPI_MOT_MOD_CNTRL_clock_phase_OFS (8)
#define SPI_MOT_MOD_CNTRL_clock_phase_MASK ((uint32_t)0x00000100U)
#define SPI_PARITY_CTRL_parity_en_OFS (0)
#define SPI_PARITY_CTRL_parity_en_MASK ((uint32_t)0x00000001U)
#define SPI_PARITY_CTRL_even_parity_OFS (8)
#define SPI_PARITY_CTRL_even_parity_MASK ((uint32_t)0x00000100U)
#define SPI_CMD_DATA_CTRL_cmd_data_mode_en_OFS (0)
#define SPI_CMD_DATA_CTRL_cmd_data_mode_en_MASK ((uint32_t)0x00000001U)
#define SPI_CMD_DATA_CTRL_cmd_data_mode_val_OFS (8)
#define SPI_CMD_DATA_CTRL_cmd_data_mode_val_MASK ((uint32_t)0x00000F00U)
#define SPI_LOOPBACK_CTRL_loopback_mode_OFS (0)
#define SPI_LOOPBACK_CTRL_loopback_mode_MASK ((uint32_t)0x00000001U)
#define SPI_DATAFRAME_CTRL_data_size_sel_OFS (0)
#define SPI_DATAFRAME_CTRL_data_size_sel_MASK ((uint32_t)0x0000001FU)
#define SPI_DATAFRAME_CTRL_msb_first_OFS (8)
#define SPI_DATAFRAME_CTRL_msb_first_MASK ((uint32_t)0x00000100U)
#define SPI_DATAFRAME_CTRL_data_out_disable_OFS (16)
#define SPI_DATAFRAME_CTRL_data_out_disable_MASK ((uint32_t)0x00010000U)
#define SPI_MODE_CTRL_spi_en_OFS (0)
#define SPI_MODE_CTRL_spi_en_MASK ((uint32_t)0x00000001U)
#define SPI_MODE_CTRL_peripheral_mode_OFS (8)
#define SPI_MODE_CTRL_peripheral_mode_MASK ((uint32_t)0x00000100U)
#define SPI_MODE_CTRL_frame_format_OFS (16)
#define SPI_MODE_CTRL_frame_format_MASK ((uint32_t)0x00070000U)
#define SPI_CS_CTRL_cs_sel_OFS (0)
#define SPI_CS_CTRL_cs_sel_MASK ((uint32_t)0x0000001FU)
#define SPI_CS_CTRL_soft_cs_en_OFS (8)
#define SPI_CS_CTRL_soft_cs_en_MASK ((uint32_t)0x00000100U)
#define SPI_CS_CTRL_soft_cs_OFS (16)
#define SPI_CS_CTRL_soft_cs_MASK ((uint32_t)0x00010000U)
#define SPI_CS_SETUP_HOLD_CNT_cs_setup_cnt_OFS (0)
#define SPI_CS_SETUP_HOLD_CNT_cs_setup_cnt_MASK ((uint32_t)0x000000FFU)
#define SPI_CS_SETUP_HOLD_CNT_cs_hold_cnt_OFS (8)
#define SPI_CS_SETUP_HOLD_CNT_cs_hold_cnt_MASK ((uint32_t)0x0000FF00U)
#define SPI_SCLK_CTRL_sclk_removal_OFS (0)
#define SPI_SCLK_CTRL_sclk_removal_MASK ((uint32_t)0x00000001U)
#define SPI_QSPI_CTRL_qspi_first_OFS (0)
#define SPI_QSPI_CTRL_qspi_first_MASK ((uint32_t)0x00000001U)
#define SPI_QSPI_CTRL_nrml_spi_frames_in_qspi_OFS (8)
#define SPI_QSPI_CTRL_nrml_spi_frames_in_qspi_MASK ((uint32_t)0x0000FF00U)
#define SPI_QSPI_CTRL_frames_in_qspi_OFS (16)
#define SPI_QSPI_CTRL_frames_in_qspi_MASK ((uint32_t)0x00FF0000U)
#define SPI_QSPI_CTRL_frames_in_wmode_in_qspi_OFS (24)
#define SPI_QSPI_CTRL_frames_in_wmode_in_qspi_MASK ((uint32_t)0xFF000000U)
#define SPI_DSPI_CTRL_dspi_first_OFS (0)
#define SPI_DSPI_CTRL_dspi_first_MASK ((uint32_t)0x00000001U)
#define SPI_DSPI_CTRL_nrml_spi_frames_in_dspi_OFS (8)
#define SPI_DSPI_CTRL_nrml_spi_frames_in_dspi_MASK ((uint32_t)0x0000FF00U)
#define SPI_DSPI_CTRL_frames_in_dspi_OFS (16)
#define SPI_DSPI_CTRL_frames_in_dspi_MASK ((uint32_t)0x00FF0000U)
#define SPI_DSPI_CTRL_frames_in_wmode_in_dspi_OFS (24)
#define SPI_DSPI_CTRL_frames_in_wmode_in_dspi_MASK ((uint32_t)0xFF000000U)
#define SPI_TX_CTRL_repeat_tx_data_OFS (0)
#define SPI_TX_CTRL_repeat_tx_data_MASK ((uint32_t)0x000000FFU)
#define SPI_RX_CTRL_receive_timeout_OFS (0)
#define SPI_RX_CTRL_receive_timeout_MASK ((uint32_t)0x000000FFU)
#define SPI_RX_CTRL_ignore_rx_cnt_OFS (8)
#define SPI_RX_CTRL_ignore_rx_cnt_MASK ((uint32_t)0x0000FF00U)
#define SPI_RX_CTRL_dly_sample_on_rx_OFS (16)
#define SPI_RX_CTRL_dly_sample_on_rx_MASK ((uint32_t)0x000F0000U)
#define SPI_INT_FIFO_LVL_SEL_rx_fifo_lvl_int_OFS (0)
#define SPI_INT_FIFO_LVL_SEL_rx_fifo_lvl_int_MASK ((uint32_t)0x0000000FU)
#define SPI_INT_FIFO_LVL_SEL_tx_fifo_lvl_int_OFS (8)
#define SPI_INT_FIFO_LVL_SEL_tx_fifo_lvl_int_MASK ((uint32_t)0x00000F00U)
#define SPI_STS_spi_busy_sts_OFS (0)
#define SPI_STS_spi_busy_sts_MASK ((uint32_t)0x00000001U)
#define SPI_STS_rx_fifo_full_sts_OFS (1)
#define SPI_STS_rx_fifo_full_sts_MASK ((uint32_t)0x00000002U)
#define SPI_STS_rx_fifo_empty_sts_OFS (2)
#define SPI_STS_rx_fifo_empty_sts_MASK ((uint32_t)0x00000004U)
#define SPI_STS_tx_fifo_full_sts_OFS (3)
#define SPI_STS_tx_fifo_full_sts_MASK ((uint32_t)0x00000008U)
#define SPI_STS_tx_fifo_empty_sts_OFS (4)
#define SPI_STS_tx_fifo_empty_sts_MASK ((uint32_t)0x00000010U)
#define SPI_TX_FIFO_tx_fifo_OFS (0)
#define SPI_TX_FIFO_tx_fifo_MASK ((uint32_t)0xFFFFFFFFU)
#define SPI_RX_FIFO_rx_fifo_OFS (0)
#define SPI_RX_FIFO_rx_fifo_MASK ((uint32_t)0xFFFFFFFFU)
#define SPI_SPI_DBG_CTRL_stop_on_halt_OFS (0)
#define SPI_SPI_DBG_CTRL_stop_on_halt_MASK ((uint32_t)0x00000001U)
#define SPI_SPI_DBG_CTRL_soft_stop_OFS (1)
#define SPI_SPI_DBG_CTRL_soft_stop_MASK ((uint32_t)0x00000002U)
#define SPI_INTR_STS_intr_first_OFS (0)
#define SPI_INTR_STS_intr_first_MASK ((uint32_t)0x0000001FU)
#define SPI_INTR_EVENT_rx_fifo_overflow_OFS (0)
#define SPI_INTR_EVENT_rx_fifo_overflow_MASK ((uint32_t)0x00000001U)
#define SPI_INTR_EVENT_parity_error_OFS (1)
#define SPI_INTR_EVENT_parity_error_MASK ((uint32_t)0x00000002U)
#define SPI_INTR_EVENT_rx_timeout_OFS (2)
#define SPI_INTR_EVENT_rx_timeout_MASK ((uint32_t)0x00000004U)
#define SPI_INTR_EVENT_rx_fifo_trg_lvl_OFS (3)
#define SPI_INTR_EVENT_rx_fifo_trg_lvl_MASK ((uint32_t)0x00000008U)
#define SPI_INTR_EVENT_tx_fifo_trg_lvl_OFS (4)
#define SPI_INTR_EVENT_tx_fifo_trg_lvl_MASK ((uint32_t)0x00000010U)
#define SPI_INTR_EVENT_tx_fifo_empty_OFS (5)
#define SPI_INTR_EVENT_tx_fifo_empty_MASK ((uint32_t)0x00000020U)
#define SPI_INTR_EVENT_idle_OFS (6)
#define SPI_INTR_EVENT_idle_MASK ((uint32_t)0x00000040U)
#define SPI_INTR_EVENT_rx_dma_done_OFS (7)
#define SPI_INTR_EVENT_rx_dma_done_MASK ((uint32_t)0x00000080U)
#define SPI_INTR_EVENT_tx_dma_done_OFS (8)
#define SPI_INTR_EVENT_tx_dma_done_MASK ((uint32_t)0x00000100U)
#define SPI_INTR_EVENT_tx_fifo_underflow_OFS (9)
#define SPI_INTR_EVENT_tx_fifo_underflow_MASK ((uint32_t)0x00000200U)
#define SPI_INTR_EVENT_rx_fifo_full_OFS (10)
#define SPI_INTR_EVENT_rx_fifo_full_MASK ((uint32_t)0x00000400U)
#define SPI_INTR_EN_rx_fifo_overflow_en_OFS (0)
#define SPI_INTR_EN_rx_fifo_overflow_en_MASK ((uint32_t)0x00000001U)
#define SPI_INTR_EN_parity_error_en_OFS (1)
#define SPI_INTR_EN_parity_error_en_MASK ((uint32_t)0x00000002U)
#define SPI_INTR_EN_rx_timeout_en_OFS (2)
#define SPI_INTR_EN_rx_timeout_en_MASK ((uint32_t)0x00000004U)
#define SPI_INTR_EN_rx_fifo_trg_lvl_en_OFS (3)
#define SPI_INTR_EN_rx_fifo_trg_lvl_en_MASK ((uint32_t)0x00000008U)
#define SPI_INTR_EN_tx_fifo_trg_lvl_en_OFS (4)
#define SPI_INTR_EN_tx_fifo_trg_lvl_en_MASK ((uint32_t)0x00000010U)
#define SPI_INTR_EN_tx_fifo_empty_en_OFS (5)
#define SPI_INTR_EN_tx_fifo_empty_en_MASK ((uint32_t)0x00000020U)
#define SPI_INTR_EN_idle_en_OFS (6)
#define SPI_INTR_EN_idle_en_MASK ((uint32_t)0x00000040U)
#define SPI_INTR_EN_rx_dma_done_en_OFS (7)
#define SPI_INTR_EN_rx_dma_done_en_MASK ((uint32_t)0x00000080U)
#define SPI_INTR_EN_tx_dma_done_en_OFS (8)
#define SPI_INTR_EN_tx_dma_done_en_MASK ((uint32_t)0x00000100U)
#define SPI_INTR_EN_tx_fifo_underflow_en_OFS (9)
#define SPI_INTR_EN_tx_fifo_underflow_en_MASK ((uint32_t)0x00000200U)
#define SPI_INTR_EN_rx_fifo_full_en_OFS (10)
#define SPI_INTR_EN_rx_fifo_full_en_MASK ((uint32_t)0x00000400U)
#define SPI_INTR_TX_DMA_EN_rx_fifo_overflow_tx_dma_en_OFS (0)
#define SPI_INTR_TX_DMA_EN_rx_fifo_overflow_tx_dma_en_MASK ((uint32_t)0x00000001U)
#define SPI_INTR_TX_DMA_EN_parity_error_tx_dma_en_OFS (1)
#define SPI_INTR_TX_DMA_EN_parity_error_tx_dma_en_MASK ((uint32_t)0x00000002U)
#define SPI_INTR_TX_DMA_EN_rx_timeout_tx_dma_en_OFS (2)
#define SPI_INTR_TX_DMA_EN_rx_timeout_tx_dma_en_MASK ((uint32_t)0x00000004U)
#define SPI_INTR_TX_DMA_EN_rx_fifo_trg_lvl_tx_dma_en_OFS (3)
#define SPI_INTR_TX_DMA_EN_rx_fifo_trg_lvl_tx_dma_en_MASK ((uint32_t)0x00000008U)
#define SPI_INTR_TX_DMA_EN_tx_fifo_trg_lvl_tx_dma_en_OFS (4)
#define SPI_INTR_TX_DMA_EN_tx_fifo_trg_lvl_tx_dma_en_MASK ((uint32_t)0x00000010U)
#define SPI_INTR_TX_DMA_EN_tx_fifo_empty_tx_dma_en_OFS (5)
#define SPI_INTR_TX_DMA_EN_tx_fifo_empty_tx_dma_en_MASK ((uint32_t)0x00000020U)
#define SPI_INTR_TX_DMA_EN_idle_tx_dma_en_OFS (6)
#define SPI_INTR_TX_DMA_EN_idle_tx_dma_en_MASK ((uint32_t)0x00000040U)
#define SPI_INTR_TX_DMA_EN_rx_dma_done_tx_dma_en_OFS (7)
#define SPI_INTR_TX_DMA_EN_rx_dma_done_tx_dma_en_MASK ((uint32_t)0x00000080U)
#define SPI_INTR_TX_DMA_EN_tx_dma_done_tx_dma_en_OFS (8)
#define SPI_INTR_TX_DMA_EN_tx_dma_done_tx_dma_en_MASK ((uint32_t)0x00000100U)
#define SPI_INTR_TX_DMA_EN_tx_fifo_underflow_tx_dma_en_OFS (9)
#define SPI_INTR_TX_DMA_EN_tx_fifo_underflow_tx_dma_en_MASK ((uint32_t)0x00000200U)
#define SPI_INTR_TX_DMA_EN_rx_fifo_full_tx_dma_en_OFS (10)
#define SPI_INTR_TX_DMA_EN_rx_fifo_full_tx_dma_en_MASK ((uint32_t)0x00000400U)
#define SPI_INTR_RX_DMA_EN_rx_fifo_overflow_rx_dma_en_OFS (0)
#define SPI_INTR_RX_DMA_EN_rx_fifo_overflow_rx_dma_en_MASK ((uint32_t)0x00000001U)
#define SPI_INTR_RX_DMA_EN_parity_error_rx_dma_en_OFS (1)
#define SPI_INTR_RX_DMA_EN_parity_error_rx_dma_en_MASK ((uint32_t)0x00000002U)
#define SPI_INTR_RX_DMA_EN_rx_timeout_rx_dma_en_OFS (2)
#define SPI_INTR_RX_DMA_EN_rx_timeout_rx_dma_en_MASK ((uint32_t)0x00000004U)
#define SPI_INTR_RX_DMA_EN_rx_fifo_trg_lvl_rx_dma_en_OFS (3)
#define SPI_INTR_RX_DMA_EN_rx_fifo_trg_lvl_rx_dma_en_MASK ((uint32_t)0x00000008U)
#define SPI_INTR_RX_DMA_EN_tx_fifo_trg_lvl_rx_dma_en_OFS (4)
#define SPI_INTR_RX_DMA_EN_tx_fifo_trg_lvl_rx_dma_en_MASK ((uint32_t)0x00000010U)
#define SPI_INTR_RX_DMA_EN_tx_fifo_empty_rx_dma_en_OFS (5)
#define SPI_INTR_RX_DMA_EN_tx_fifo_empty_rx_dma_en_MASK ((uint32_t)0x00000020U)
#define SPI_INTR_RX_DMA_EN_idle_rx_dma_en_OFS (6)
#define SPI_INTR_RX_DMA_EN_idle_rx_dma_en_MASK ((uint32_t)0x00000040U)
#define SPI_INTR_RX_DMA_EN_rx_dma_done_rx_dma_en_OFS (7)
#define SPI_INTR_RX_DMA_EN_rx_dma_done_rx_dma_en_MASK ((uint32_t)0x00000080U)
#define SPI_INTR_RX_DMA_EN_tx_dma_done_rx_dma_en_OFS (8)
#define SPI_INTR_RX_DMA_EN_tx_dma_done_rx_dma_en_MASK ((uint32_t)0x00000100U)
#define SPI_INTR_RX_DMA_EN_tx_fifo_underflow_rx_dma_en_OFS (9)
#define SPI_INTR_RX_DMA_EN_tx_fifo_underflow_rx_dma_en_MASK ((uint32_t)0x00000200U)
#define SPI_INTR_RX_DMA_EN_rx_fifo_full_rx_dma_en_OFS (10)
#define SPI_INTR_RX_DMA_EN_rx_fifo_full_rx_dma_en_MASK ((uint32_t)0x00000400U)
#define SPI_INTR_NMI_rx_fifo_overflow_nmi_en_OFS (0)
#define SPI_INTR_NMI_rx_fifo_overflow_nmi_en_MASK ((uint32_t)0x00000001U)
#define SPI_INTR_NMI_parity_error_nmi_en_OFS (1)
#define SPI_INTR_NMI_parity_error_nmi_en_MASK ((uint32_t)0x00000002U)
#define SPI_INTR_NMI_rx_timeout_nmi_en_OFS (2)
#define SPI_INTR_NMI_rx_timeout_nmi_en_MASK ((uint32_t)0x00000004U)
#define SPI_INTR_NMI_rx_fifo_trg_lvl_nmi_en_OFS (3)
#define SPI_INTR_NMI_rx_fifo_trg_lvl_nmi_en_MASK ((uint32_t)0x00000008U)
#define SPI_INTR_NMI_tx_fifo_trg_lvl_nmi_en_OFS (4)
#define SPI_INTR_NMI_tx_fifo_trg_lvl_nmi_en_MASK ((uint32_t)0x00000010U)
#define SPI_INTR_NMI_tx_fifo_empty_nmi_en_OFS (5)
#define SPI_INTR_NMI_tx_fifo_empty_nmi_en_MASK ((uint32_t)0x00000020U)
#define SPI_INTR_NMI_idle_nmi_en_OFS (6)
#define SPI_INTR_NMI_idle_nmi_en_MASK ((uint32_t)0x00000040U)
#define SPI_INTR_NMI_rx_dma_done_nmi_en_OFS (7)
#define SPI_INTR_NMI_rx_dma_done_nmi_en_MASK ((uint32_t)0x00000080U)
#define SPI_INTR_NMI_tx_dma_done_nmi_en_OFS (8)
#define SPI_INTR_NMI_tx_dma_done_nmi_en_MASK ((uint32_t)0x00000100U)
#define SPI_INTR_NMI_tx_fifo_underflow_nmi_en_OFS (9)
#define SPI_INTR_NMI_tx_fifo_underflow_nmi_en_MASK ((uint32_t)0x00000200U)
#define SPI_INTR_NMI_rx_fifo_full_nmi_en_OFS (10)
#define SPI_INTR_NMI_rx_fifo_full_nmi_en_MASK ((uint32_t)0x00000400U)
#define SPI_INTR_SW_SET_rx_fifo_overflow_sw_set_OFS (0)
#define SPI_INTR_SW_SET_rx_fifo_overflow_sw_set_MASK ((uint32_t)0x00000001U)
#define SPI_INTR_SW_SET_parity_error_sw_set_OFS (1)
#define SPI_INTR_SW_SET_parity_error_sw_set_MASK ((uint32_t)0x00000002U)
#define SPI_INTR_SW_SET_rx_timeout_sw_set_OFS (2)
#define SPI_INTR_SW_SET_rx_timeout_sw_set_MASK ((uint32_t)0x00000004U)
#define SPI_INTR_SW_SET_rx_fifo_trg_lvl_sw_set_OFS (3)
#define SPI_INTR_SW_SET_rx_fifo_trg_lvl_sw_set_MASK ((uint32_t)0x00000008U)
#define SPI_INTR_SW_SET_tx_fifo_trg_lvl_sw_set_OFS (4)
#define SPI_INTR_SW_SET_tx_fifo_trg_lvl_sw_set_MASK ((uint32_t)0x00000010U)
#define SPI_INTR_SW_SET_tx_fifo_empty_sw_set_OFS (5)
#define SPI_INTR_SW_SET_tx_fifo_empty_sw_set_MASK ((uint32_t)0x00000020U)
#define SPI_INTR_SW_SET_idle_sw_set_OFS (6)
#define SPI_INTR_SW_SET_idle_sw_set_MASK ((uint32_t)0x00000040U)
#define SPI_INTR_SW_SET_rx_dma_done_sw_set_OFS (7)
#define SPI_INTR_SW_SET_rx_dma_done_sw_set_MASK ((uint32_t)0x00000080U)
#define SPI_INTR_SW_SET_tx_dma_done_sw_set_OFS (8)
#define SPI_INTR_SW_SET_tx_dma_done_sw_set_MASK ((uint32_t)0x00000100U)
#define SPI_INTR_SW_SET_tx_fifo_underflow_sw_set_OFS (9)
#define SPI_INTR_SW_SET_tx_fifo_underflow_sw_set_MASK ((uint32_t)0x00000200U)
#define SPI_INTR_SW_SET_rx_fifo_full_sw_set_OFS (10)
#define SPI_INTR_SW_SET_rx_fifo_full_sw_set_MASK ((uint32_t)0x00000400U)
#define SPI_SPARE_CTRL_cfg0_OFS (0)
#define SPI_SPARE_CTRL_cfg0_MASK ((uint32_t)0x000000FFU)
#define SPI_SPARE_CTRL_cfg1_OFS (8)
#define SPI_SPARE_CTRL_cfg1_MASK ((uint32_t)0x0000FF00U)
#define SPI_SPARE_STS_sts0_OFS (0)
#define SPI_SPARE_STS_sts0_MASK ((uint32_t)0x000000FFU)
#define SPI_SPARE_STS_sts1_OFS (8)
#define SPI_SPARE_STS_sts1_MASK ((uint32_t)0x0000FF00U)
#endif
