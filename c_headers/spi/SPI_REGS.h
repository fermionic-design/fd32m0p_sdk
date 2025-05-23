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
    SPI_DESC_REG_s;
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
    SPI_PWR_EN_REG_s;
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
    SPI_RST_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_RST_CTRL_u;

typedef struct SPI_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} SPI_RST_STS_REG_s;

typedef union SPI_RST_STS_u {
    SPI_RST_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_RST_STS_u;

typedef struct SPI_CLK_CTRL_REG_s {
    unsigned int clk_scaler:10; // Scaler value on top CLK_DIV to generate master SPI clock
} SPI_CLK_CTRL_REG_s;

typedef union SPI_CLK_CTRL_u {
    SPI_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_CLK_CTRL_u;

typedef struct SPI_CLK_DIV_REG_s {
    unsigned int div_ratio:5; // Clock division value of the clock selected by CLKSEL. Division value is added by 1 to the programmed value
} SPI_CLK_DIV_REG_s;

typedef union SPI_CLK_DIV_u {
    SPI_CLK_DIV_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_CLK_DIV_u;

typedef struct SPI_CLKSEL_REG_s {
    unsigned int clk_sel:2; // Selects the source for clk_spi 0: clk_ahb 1: clk_4mhz, 2: clk_lf
} SPI_CLKSEL_REG_s;

typedef union SPI_CLKSEL_u {
    SPI_CLKSEL_REG_s;
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
    SPI_MOT_MOD_CNTRL_REG_s;
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
    SPI_PARITY_CTRL_REG_s;
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
    SPI_CMD_DATA_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_CMD_DATA_CTRL_u;

typedef struct SPI_LOOPBACK_CTRL_REG_s {
    unsigned int loopback_mode:1; // 
} SPI_LOOPBACK_CTRL_REG_s;

typedef union SPI_LOOPBACK_CTRL_u {
    SPI_LOOPBACK_CTRL_REG_s;
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
    SPI_DATAFRAME_CTRL_REG_s;
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
    SPI_MODE_CTRL_REG_s;
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
    SPI_CS_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_CS_CTRL_u;

typedef struct SPI_CS_SETUP_HOLD_CNT_REG_s {
    unsigned int cs_setup_cnt:8; // Num of clk_spi cycle of CS setup time
    unsigned int cs_hold_cnt:8; // Num of clk_spi cycle of CS hold time
} SPI_CS_SETUP_HOLD_CNT_REG_s;

typedef union SPI_CS_SETUP_HOLD_CNT_u {
    SPI_CS_SETUP_HOLD_CNT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_CS_SETUP_HOLD_CNT_u;

typedef struct SPI_SCLK_CTRL_REG_s {
    unsigned int sclk_removal:1; // Used in master mode: 0: SCLK stops after receive is done 1: SCLK stops after transmission is done
} SPI_SCLK_CTRL_REG_s;

typedef union SPI_SCLK_CTRL_u {
    SPI_SCLK_CTRL_REG_s;
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
    SPI_QSPI_CTRL_REG_s;
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
    SPI_DSPI_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_DSPI_CTRL_u;

typedef struct SPI_TX_CTRL_REG_s {
    unsigned int repeat_tx_data:8; // Number of SPI frames to be repeated after FIFO is empty
} SPI_TX_CTRL_REG_s;

typedef union SPI_TX_CTRL_u {
    SPI_TX_CTRL_REG_s;
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
    SPI_RX_CTRL_REG_s;
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
    SPI_INT_FIFO_LVL_SEL_REG_s;
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
    SPI_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_STS_u;

typedef struct SPI_TX_FIFO_REG_s {
    unsigned int tx_fifo:32; // 
} SPI_TX_FIFO_REG_s;

typedef union SPI_TX_FIFO_u {
    SPI_TX_FIFO_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_TX_FIFO_u;

typedef struct SPI_RX_FIFO_REG_s {
    unsigned int rx_fifo:32; // 
} SPI_RX_FIFO_REG_s;

typedef union SPI_RX_FIFO_u {
    SPI_RX_FIFO_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_RX_FIFO_u;

typedef struct SPI_DBG_CTRL_REG_s {
    unsigned int stop_on_halt:1; // 
    unsigned int soft_stop:1; // 
} SPI_DBG_CTRL_REG_s;

typedef union SPI_DBG_CTRL_u {
    SPI_DBG_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_DBG_CTRL_u;

typedef struct SPI_INTR_STS_REG_s {
    unsigned int intr_first:5; // 
} SPI_INTR_STS_REG_s;

typedef union SPI_INTR_STS_u {
    SPI_INTR_STS_REG_s;
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
    SPI_INTR_EVENT_REG_s;
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
    SPI_INTR_EN_REG_s;
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
    SPI_INTR_TX_DMA_EN_REG_s;
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
    SPI_INTR_RX_DMA_EN_REG_s;
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
    SPI_INTR_NMI_REG_s;
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
    SPI_INTR_SW_SET_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_INTR_SW_SET_u;

typedef struct SPI_SPARE_CTRL_REG_s {
    unsigned int cfg0:8; // 
    unsigned int cfg1:8; // 
} SPI_SPARE_CTRL_REG_s;

typedef union SPI_SPARE_CTRL_u {
    SPI_SPARE_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_SPARE_CTRL_u;

typedef struct SPI_SPARE_STS_REG_s {
    unsigned int sts0:8; // 
    unsigned int sts1:8; // 
} SPI_SPARE_STS_REG_s;

typedef union SPI_SPARE_STS_u {
    SPI_SPARE_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} SPI_SPARE_STS_u;

typedef struct SPI_REGS_s{
    volatile  SPI_DESC_u DESC;
    volatile  SPI_PWR_EN_u PWR_EN;
    volatile  SPI_RST_CTRL_u RST_CTRL;
    volatile  SPI_RST_STS_u RST_STS;
              SPI_CLK_CTRL_u CLK_CTRL;
              SPI_CLK_DIV_u CLK_DIV;
              SPI_CLKSEL_u CLKSEL;
              SPI_MOT_MOD_CNTRL_u MOT_MOD_CNTRL;
              SPI_PARITY_CTRL_u PARITY_CTRL;
              SPI_CMD_DATA_CTRL_u CMD_DATA_CTRL;
              SPI_LOOPBACK_CTRL_u LOOPBACK_CTRL;
              SPI_DATAFRAME_CTRL_u DATAFRAME_CTRL;
              SPI_MODE_CTRL_u MODE_CTRL;
              SPI_CS_CTRL_u CS_CTRL;
              SPI_CS_SETUP_HOLD_CNT_u CS_SETUP_HOLD_CNT;
              SPI_SCLK_CTRL_u SCLK_CTRL;
              SPI_QSPI_CTRL_u QSPI_CTRL;
              SPI_DSPI_CTRL_u DSPI_CTRL;
              SPI_TX_CTRL_u TX_CTRL;
              SPI_RX_CTRL_u RX_CTRL;
              SPI_INT_FIFO_LVL_SEL_u INT_FIFO_LVL_SEL;
    volatile  SPI_STS_u STS;
    volatile  SPI_TX_FIFO_u TX_FIFO[4];
    volatile  SPI_RX_FIFO_u RX_FIFO[4];
              SPI_DBG_CTRL_u DBG_CTRL;
    volatile  SPI_INTR_STS_u INTR_STS;
    volatile  SPI_INTR_EVENT_u INTR_EVENT;
              SPI_INTR_EN_u INTR_EN;
              SPI_INTR_TX_DMA_EN_u INTR_TX_DMA_EN;
              SPI_INTR_RX_DMA_EN_u INTR_RX_DMA_EN;
              SPI_INTR_NMI_u INTR_NMI;
              SPI_INTR_SW_SET_u INTR_SW_SET;
              SPI_SPARE_CTRL_u SPARE_CTRL;
    volatile  SPI_SPARE_STS_u SPARE_STS;
} SPI_REGS_s;

#define SPI_PWR_EN_PWR_EN_KEY ((uint32_t)0x000000ABU)
#define SPI_RST_CTRL_RST_KEY ((uint32_t)0x000000ABU)
#define SPI_RST_CTRL_RST_STS_CLR_KEY ((uint32_t)0x000000ABU)

#define SPI_INTR_EVENT_RX_FIFO_OVERFLOW_IDX (0)
#define SPI_INTR_EVENT_PARITY_ERROR_IDX (1)
#define SPI_INTR_EVENT_RX_TIMEOUT_IDX (2)
#define SPI_INTR_EVENT_RX_FIFO_TRG_LVL_IDX (3)
#define SPI_INTR_EVENT_TX_FIFO_TRG_LVL_IDX (4)
#define SPI_INTR_EVENT_TX_FIFO_EMPTY_IDX (5)
#define SPI_INTR_EVENT_IDLE_IDX (6)
#define SPI_INTR_EVENT_RX_DMA_DONE_IDX (7)
#define SPI_INTR_EVENT_TX_DMA_DONE_IDX (8)
#define SPI_INTR_EVENT_TX_FIFO_UNDERFLOW_IDX (9)
#define SPI_INTR_EVENT_RX_FIFO_FULL_IDX (10)

typedef enum {
	SPI_CLKSEL_CLK_SEL_CLK_SPI = 0,
	SPI_CLKSEL_CLK_SEL_CLK_4MHZ = 1,
	SPI_CLKSEL_CLK_SEL_CLK_LF = 2,
} SPI_CLKSEL_CLK_SEL_E;

typedef enum {
	SPI_MOT_MOD_CNTRL_CLOCK_POLARITY_LOW = 0,
	SPI_MOT_MOD_CNTRL_CLOCK_POLARITY_HIGH = 1,
} SPI_MOT_MOD_CNTRL_CLOCK_POLARITY_E;

typedef enum {
	SPI_MOT_MOD_CNTRL_CLOCK_PHASE_LEADING = 0,
	SPI_MOT_MOD_CNTRL_CLOCK_PHASE_TRAILING = 1,
} SPI_MOT_MOD_CNTRL_CLOCK_PHASE_E;

typedef enum {
	SPI_MODE_CTRL_PERIPHERAL_MODE_CONTROLLER = 0,
	SPI_MODE_CTRL_PERIPHERAL_MODE_PERIPHERAL = 1,
} SPI_MODE_CTRL_PERIPHERAL_MODE_E;

typedef enum {
	SPI_MODE_CTRL_FRAME_FORMAT_MOTOROLA = 0,
	SPI_MODE_CTRL_FRAME_FORMAT_TI = 1,
} SPI_MODE_CTRL_FRAME_FORMAT_E;

#define SPI_DESC_MODULE_TYPE_OFS (0)
#define SPI_DESC_MODULE_TYPE_MASK ((uint32_t)0x000000FFU)
#define SPI_DESC_MODULE_SUBTYPE_OFS (8)
#define SPI_DESC_MODULE_SUBTYPE_MASK ((uint32_t)0x0000FF00U)
#define SPI_DESC_MAJOR_REV_OFS (16)
#define SPI_DESC_MAJOR_REV_MASK ((uint32_t)0x000F0000U)
#define SPI_DESC_MINOR_REV_OFS (20)
#define SPI_DESC_MINOR_REV_MASK ((uint32_t)0x00F00000U)
#define SPI_PWR_EN_PWR_EN_OFS (0)
#define SPI_PWR_EN_PWR_EN_MASK ((uint32_t)0x00000001U)
#define SPI_PWR_EN_PWR_EN_KEY_OFS (24)
#define SPI_PWR_EN_PWR_EN_KEY_MASK ((uint32_t)0xFF000000U)
#define SPI_RST_CTRL_RST_OFS (0)
#define SPI_RST_CTRL_RST_MASK ((uint32_t)0x00000001U)
#define SPI_RST_CTRL_RST_STS_CLR_OFS (1)
#define SPI_RST_CTRL_RST_STS_CLR_MASK ((uint32_t)0x00000002U)
#define SPI_RST_CTRL_RST_KEY_OFS (24)
#define SPI_RST_CTRL_RST_KEY_MASK ((uint32_t)0xFF000000U)
#define SPI_RST_STS_RST_STS_OFS (0)
#define SPI_RST_STS_RST_STS_MASK ((uint32_t)0x00000001U)
#define SPI_CLK_CTRL_CLK_SCALER_OFS (0)
#define SPI_CLK_CTRL_CLK_SCALER_MASK ((uint32_t)0x000003FFU)
#define SPI_CLK_DIV_DIV_RATIO_OFS (0)
#define SPI_CLK_DIV_DIV_RATIO_MASK ((uint32_t)0x0000001FU)
#define SPI_CLKSEL_CLK_SEL_OFS (0)
#define SPI_CLKSEL_CLK_SEL_MASK ((uint32_t)0x00000003U)
#define SPI_MOT_MOD_CNTRL_CLOCK_POLARITY_OFS (0)
#define SPI_MOT_MOD_CNTRL_CLOCK_POLARITY_MASK ((uint32_t)0x00000001U)
#define SPI_MOT_MOD_CNTRL_CLOCK_PHASE_OFS (8)
#define SPI_MOT_MOD_CNTRL_CLOCK_PHASE_MASK ((uint32_t)0x00000100U)
#define SPI_PARITY_CTRL_PARITY_EN_OFS (0)
#define SPI_PARITY_CTRL_PARITY_EN_MASK ((uint32_t)0x00000001U)
#define SPI_PARITY_CTRL_EVEN_PARITY_OFS (8)
#define SPI_PARITY_CTRL_EVEN_PARITY_MASK ((uint32_t)0x00000100U)
#define SPI_CMD_DATA_CTRL_CMD_DATA_MODE_EN_OFS (0)
#define SPI_CMD_DATA_CTRL_CMD_DATA_MODE_EN_MASK ((uint32_t)0x00000001U)
#define SPI_CMD_DATA_CTRL_CMD_DATA_MODE_VAL_OFS (8)
#define SPI_CMD_DATA_CTRL_CMD_DATA_MODE_VAL_MASK ((uint32_t)0x00000F00U)
#define SPI_LOOPBACK_CTRL_LOOPBACK_MODE_OFS (0)
#define SPI_LOOPBACK_CTRL_LOOPBACK_MODE_MASK ((uint32_t)0x00000001U)
#define SPI_DATAFRAME_CTRL_DATA_SIZE_SEL_OFS (0)
#define SPI_DATAFRAME_CTRL_DATA_SIZE_SEL_MASK ((uint32_t)0x0000001FU)
#define SPI_DATAFRAME_CTRL_MSB_FIRST_OFS (8)
#define SPI_DATAFRAME_CTRL_MSB_FIRST_MASK ((uint32_t)0x00000100U)
#define SPI_DATAFRAME_CTRL_DATA_OUT_DISABLE_OFS (16)
#define SPI_DATAFRAME_CTRL_DATA_OUT_DISABLE_MASK ((uint32_t)0x00010000U)
#define SPI_MODE_CTRL_SPI_EN_OFS (0)
#define SPI_MODE_CTRL_SPI_EN_MASK ((uint32_t)0x00000001U)
#define SPI_MODE_CTRL_PERIPHERAL_MODE_OFS (8)
#define SPI_MODE_CTRL_PERIPHERAL_MODE_MASK ((uint32_t)0x00000100U)
#define SPI_MODE_CTRL_FRAME_FORMAT_OFS (16)
#define SPI_MODE_CTRL_FRAME_FORMAT_MASK ((uint32_t)0x00070000U)
#define SPI_CS_CTRL_CS_SEL_OFS (0)
#define SPI_CS_CTRL_CS_SEL_MASK ((uint32_t)0x0000001FU)
#define SPI_CS_CTRL_SOFT_CS_EN_OFS (8)
#define SPI_CS_CTRL_SOFT_CS_EN_MASK ((uint32_t)0x00000100U)
#define SPI_CS_CTRL_SOFT_CS_OFS (16)
#define SPI_CS_CTRL_SOFT_CS_MASK ((uint32_t)0x00010000U)
#define SPI_CS_SETUP_HOLD_CNT_CS_SETUP_CNT_OFS (0)
#define SPI_CS_SETUP_HOLD_CNT_CS_SETUP_CNT_MASK ((uint32_t)0x000000FFU)
#define SPI_CS_SETUP_HOLD_CNT_CS_HOLD_CNT_OFS (8)
#define SPI_CS_SETUP_HOLD_CNT_CS_HOLD_CNT_MASK ((uint32_t)0x0000FF00U)
#define SPI_SCLK_CTRL_SCLK_REMOVAL_OFS (0)
#define SPI_SCLK_CTRL_SCLK_REMOVAL_MASK ((uint32_t)0x00000001U)
#define SPI_QSPI_CTRL_QSPI_FIRST_OFS (0)
#define SPI_QSPI_CTRL_QSPI_FIRST_MASK ((uint32_t)0x00000001U)
#define SPI_QSPI_CTRL_NRML_SPI_FRAMES_IN_QSPI_OFS (8)
#define SPI_QSPI_CTRL_NRML_SPI_FRAMES_IN_QSPI_MASK ((uint32_t)0x0000FF00U)
#define SPI_QSPI_CTRL_FRAMES_IN_QSPI_OFS (16)
#define SPI_QSPI_CTRL_FRAMES_IN_QSPI_MASK ((uint32_t)0x00FF0000U)
#define SPI_QSPI_CTRL_FRAMES_IN_WMODE_IN_QSPI_OFS (24)
#define SPI_QSPI_CTRL_FRAMES_IN_WMODE_IN_QSPI_MASK ((uint32_t)0xFF000000U)
#define SPI_DSPI_CTRL_DSPI_FIRST_OFS (0)
#define SPI_DSPI_CTRL_DSPI_FIRST_MASK ((uint32_t)0x00000001U)
#define SPI_DSPI_CTRL_NRML_SPI_FRAMES_IN_DSPI_OFS (8)
#define SPI_DSPI_CTRL_NRML_SPI_FRAMES_IN_DSPI_MASK ((uint32_t)0x0000FF00U)
#define SPI_DSPI_CTRL_FRAMES_IN_DSPI_OFS (16)
#define SPI_DSPI_CTRL_FRAMES_IN_DSPI_MASK ((uint32_t)0x00FF0000U)
#define SPI_DSPI_CTRL_FRAMES_IN_WMODE_IN_DSPI_OFS (24)
#define SPI_DSPI_CTRL_FRAMES_IN_WMODE_IN_DSPI_MASK ((uint32_t)0xFF000000U)
#define SPI_TX_CTRL_REPEAT_TX_DATA_OFS (0)
#define SPI_TX_CTRL_REPEAT_TX_DATA_MASK ((uint32_t)0x000000FFU)
#define SPI_RX_CTRL_RECEIVE_TIMEOUT_OFS (0)
#define SPI_RX_CTRL_RECEIVE_TIMEOUT_MASK ((uint32_t)0x000000FFU)
#define SPI_RX_CTRL_IGNORE_RX_CNT_OFS (8)
#define SPI_RX_CTRL_IGNORE_RX_CNT_MASK ((uint32_t)0x0000FF00U)
#define SPI_RX_CTRL_DLY_SAMPLE_ON_RX_OFS (16)
#define SPI_RX_CTRL_DLY_SAMPLE_ON_RX_MASK ((uint32_t)0x000F0000U)
#define SPI_INT_FIFO_LVL_SEL_RX_FIFO_LVL_INT_OFS (0)
#define SPI_INT_FIFO_LVL_SEL_RX_FIFO_LVL_INT_MASK ((uint32_t)0x0000000FU)
#define SPI_INT_FIFO_LVL_SEL_TX_FIFO_LVL_INT_OFS (8)
#define SPI_INT_FIFO_LVL_SEL_TX_FIFO_LVL_INT_MASK ((uint32_t)0x00000F00U)
#define SPI_STS_SPI_BUSY_STS_OFS (0)
#define SPI_STS_SPI_BUSY_STS_MASK ((uint32_t)0x00000001U)
#define SPI_STS_RX_FIFO_FULL_STS_OFS (1)
#define SPI_STS_RX_FIFO_FULL_STS_MASK ((uint32_t)0x00000002U)
#define SPI_STS_RX_FIFO_EMPTY_STS_OFS (2)
#define SPI_STS_RX_FIFO_EMPTY_STS_MASK ((uint32_t)0x00000004U)
#define SPI_STS_TX_FIFO_FULL_STS_OFS (3)
#define SPI_STS_TX_FIFO_FULL_STS_MASK ((uint32_t)0x00000008U)
#define SPI_STS_TX_FIFO_EMPTY_STS_OFS (4)
#define SPI_STS_TX_FIFO_EMPTY_STS_MASK ((uint32_t)0x00000010U)
#define SPI_TX_FIFO_TX_FIFO_OFS (0)
#define SPI_TX_FIFO_TX_FIFO_MASK ((uint32_t)0xFFFFFFFFU)
#define SPI_RX_FIFO_RX_FIFO_OFS (0)
#define SPI_RX_FIFO_RX_FIFO_MASK ((uint32_t)0xFFFFFFFFU)
#define SPI_DBG_CTRL_STOP_ON_HALT_OFS (0)
#define SPI_DBG_CTRL_STOP_ON_HALT_MASK ((uint32_t)0x00000001U)
#define SPI_DBG_CTRL_SOFT_STOP_OFS (1)
#define SPI_DBG_CTRL_SOFT_STOP_MASK ((uint32_t)0x00000002U)
#define SPI_INTR_STS_INTR_FIRST_OFS (0)
#define SPI_INTR_STS_INTR_FIRST_MASK ((uint32_t)0x0000001FU)
#define SPI_INTR_EVENT_RX_FIFO_OVERFLOW_OFS (0)
#define SPI_INTR_EVENT_RX_FIFO_OVERFLOW_MASK ((uint32_t)0x00000001U)
#define SPI_INTR_EVENT_PARITY_ERROR_OFS (1)
#define SPI_INTR_EVENT_PARITY_ERROR_MASK ((uint32_t)0x00000002U)
#define SPI_INTR_EVENT_RX_TIMEOUT_OFS (2)
#define SPI_INTR_EVENT_RX_TIMEOUT_MASK ((uint32_t)0x00000004U)
#define SPI_INTR_EVENT_RX_FIFO_TRG_LVL_OFS (3)
#define SPI_INTR_EVENT_RX_FIFO_TRG_LVL_MASK ((uint32_t)0x00000008U)
#define SPI_INTR_EVENT_TX_FIFO_TRG_LVL_OFS (4)
#define SPI_INTR_EVENT_TX_FIFO_TRG_LVL_MASK ((uint32_t)0x00000010U)
#define SPI_INTR_EVENT_TX_FIFO_EMPTY_OFS (5)
#define SPI_INTR_EVENT_TX_FIFO_EMPTY_MASK ((uint32_t)0x00000020U)
#define SPI_INTR_EVENT_IDLE_OFS (6)
#define SPI_INTR_EVENT_IDLE_MASK ((uint32_t)0x00000040U)
#define SPI_INTR_EVENT_RX_DMA_DONE_OFS (7)
#define SPI_INTR_EVENT_RX_DMA_DONE_MASK ((uint32_t)0x00000080U)
#define SPI_INTR_EVENT_TX_DMA_DONE_OFS (8)
#define SPI_INTR_EVENT_TX_DMA_DONE_MASK ((uint32_t)0x00000100U)
#define SPI_INTR_EVENT_TX_FIFO_UNDERFLOW_OFS (9)
#define SPI_INTR_EVENT_TX_FIFO_UNDERFLOW_MASK ((uint32_t)0x00000200U)
#define SPI_INTR_EVENT_RX_FIFO_FULL_OFS (10)
#define SPI_INTR_EVENT_RX_FIFO_FULL_MASK ((uint32_t)0x00000400U)
#define SPI_INTR_EN_RX_FIFO_OVERFLOW_EN_OFS (0)
#define SPI_INTR_EN_RX_FIFO_OVERFLOW_EN_MASK ((uint32_t)0x00000001U)
#define SPI_INTR_EN_PARITY_ERROR_EN_OFS (1)
#define SPI_INTR_EN_PARITY_ERROR_EN_MASK ((uint32_t)0x00000002U)
#define SPI_INTR_EN_RX_TIMEOUT_EN_OFS (2)
#define SPI_INTR_EN_RX_TIMEOUT_EN_MASK ((uint32_t)0x00000004U)
#define SPI_INTR_EN_RX_FIFO_TRG_LVL_EN_OFS (3)
#define SPI_INTR_EN_RX_FIFO_TRG_LVL_EN_MASK ((uint32_t)0x00000008U)
#define SPI_INTR_EN_TX_FIFO_TRG_LVL_EN_OFS (4)
#define SPI_INTR_EN_TX_FIFO_TRG_LVL_EN_MASK ((uint32_t)0x00000010U)
#define SPI_INTR_EN_TX_FIFO_EMPTY_EN_OFS (5)
#define SPI_INTR_EN_TX_FIFO_EMPTY_EN_MASK ((uint32_t)0x00000020U)
#define SPI_INTR_EN_IDLE_EN_OFS (6)
#define SPI_INTR_EN_IDLE_EN_MASK ((uint32_t)0x00000040U)
#define SPI_INTR_EN_RX_DMA_DONE_EN_OFS (7)
#define SPI_INTR_EN_RX_DMA_DONE_EN_MASK ((uint32_t)0x00000080U)
#define SPI_INTR_EN_TX_DMA_DONE_EN_OFS (8)
#define SPI_INTR_EN_TX_DMA_DONE_EN_MASK ((uint32_t)0x00000100U)
#define SPI_INTR_EN_TX_FIFO_UNDERFLOW_EN_OFS (9)
#define SPI_INTR_EN_TX_FIFO_UNDERFLOW_EN_MASK ((uint32_t)0x00000200U)
#define SPI_INTR_EN_RX_FIFO_FULL_EN_OFS (10)
#define SPI_INTR_EN_RX_FIFO_FULL_EN_MASK ((uint32_t)0x00000400U)
#define SPI_INTR_TX_DMA_EN_RX_FIFO_OVERFLOW_TX_DMA_EN_OFS (0)
#define SPI_INTR_TX_DMA_EN_RX_FIFO_OVERFLOW_TX_DMA_EN_MASK ((uint32_t)0x00000001U)
#define SPI_INTR_TX_DMA_EN_PARITY_ERROR_TX_DMA_EN_OFS (1)
#define SPI_INTR_TX_DMA_EN_PARITY_ERROR_TX_DMA_EN_MASK ((uint32_t)0x00000002U)
#define SPI_INTR_TX_DMA_EN_RX_TIMEOUT_TX_DMA_EN_OFS (2)
#define SPI_INTR_TX_DMA_EN_RX_TIMEOUT_TX_DMA_EN_MASK ((uint32_t)0x00000004U)
#define SPI_INTR_TX_DMA_EN_RX_FIFO_TRG_LVL_TX_DMA_EN_OFS (3)
#define SPI_INTR_TX_DMA_EN_RX_FIFO_TRG_LVL_TX_DMA_EN_MASK ((uint32_t)0x00000008U)
#define SPI_INTR_TX_DMA_EN_TX_FIFO_TRG_LVL_TX_DMA_EN_OFS (4)
#define SPI_INTR_TX_DMA_EN_TX_FIFO_TRG_LVL_TX_DMA_EN_MASK ((uint32_t)0x00000010U)
#define SPI_INTR_TX_DMA_EN_TX_FIFO_EMPTY_TX_DMA_EN_OFS (5)
#define SPI_INTR_TX_DMA_EN_TX_FIFO_EMPTY_TX_DMA_EN_MASK ((uint32_t)0x00000020U)
#define SPI_INTR_TX_DMA_EN_IDLE_TX_DMA_EN_OFS (6)
#define SPI_INTR_TX_DMA_EN_IDLE_TX_DMA_EN_MASK ((uint32_t)0x00000040U)
#define SPI_INTR_TX_DMA_EN_RX_DMA_DONE_TX_DMA_EN_OFS (7)
#define SPI_INTR_TX_DMA_EN_RX_DMA_DONE_TX_DMA_EN_MASK ((uint32_t)0x00000080U)
#define SPI_INTR_TX_DMA_EN_TX_DMA_DONE_TX_DMA_EN_OFS (8)
#define SPI_INTR_TX_DMA_EN_TX_DMA_DONE_TX_DMA_EN_MASK ((uint32_t)0x00000100U)
#define SPI_INTR_TX_DMA_EN_TX_FIFO_UNDERFLOW_TX_DMA_EN_OFS (9)
#define SPI_INTR_TX_DMA_EN_TX_FIFO_UNDERFLOW_TX_DMA_EN_MASK ((uint32_t)0x00000200U)
#define SPI_INTR_TX_DMA_EN_RX_FIFO_FULL_TX_DMA_EN_OFS (10)
#define SPI_INTR_TX_DMA_EN_RX_FIFO_FULL_TX_DMA_EN_MASK ((uint32_t)0x00000400U)
#define SPI_INTR_RX_DMA_EN_RX_FIFO_OVERFLOW_RX_DMA_EN_OFS (0)
#define SPI_INTR_RX_DMA_EN_RX_FIFO_OVERFLOW_RX_DMA_EN_MASK ((uint32_t)0x00000001U)
#define SPI_INTR_RX_DMA_EN_PARITY_ERROR_RX_DMA_EN_OFS (1)
#define SPI_INTR_RX_DMA_EN_PARITY_ERROR_RX_DMA_EN_MASK ((uint32_t)0x00000002U)
#define SPI_INTR_RX_DMA_EN_RX_TIMEOUT_RX_DMA_EN_OFS (2)
#define SPI_INTR_RX_DMA_EN_RX_TIMEOUT_RX_DMA_EN_MASK ((uint32_t)0x00000004U)
#define SPI_INTR_RX_DMA_EN_RX_FIFO_TRG_LVL_RX_DMA_EN_OFS (3)
#define SPI_INTR_RX_DMA_EN_RX_FIFO_TRG_LVL_RX_DMA_EN_MASK ((uint32_t)0x00000008U)
#define SPI_INTR_RX_DMA_EN_TX_FIFO_TRG_LVL_RX_DMA_EN_OFS (4)
#define SPI_INTR_RX_DMA_EN_TX_FIFO_TRG_LVL_RX_DMA_EN_MASK ((uint32_t)0x00000010U)
#define SPI_INTR_RX_DMA_EN_TX_FIFO_EMPTY_RX_DMA_EN_OFS (5)
#define SPI_INTR_RX_DMA_EN_TX_FIFO_EMPTY_RX_DMA_EN_MASK ((uint32_t)0x00000020U)
#define SPI_INTR_RX_DMA_EN_IDLE_RX_DMA_EN_OFS (6)
#define SPI_INTR_RX_DMA_EN_IDLE_RX_DMA_EN_MASK ((uint32_t)0x00000040U)
#define SPI_INTR_RX_DMA_EN_RX_DMA_DONE_RX_DMA_EN_OFS (7)
#define SPI_INTR_RX_DMA_EN_RX_DMA_DONE_RX_DMA_EN_MASK ((uint32_t)0x00000080U)
#define SPI_INTR_RX_DMA_EN_TX_DMA_DONE_RX_DMA_EN_OFS (8)
#define SPI_INTR_RX_DMA_EN_TX_DMA_DONE_RX_DMA_EN_MASK ((uint32_t)0x00000100U)
#define SPI_INTR_RX_DMA_EN_TX_FIFO_UNDERFLOW_RX_DMA_EN_OFS (9)
#define SPI_INTR_RX_DMA_EN_TX_FIFO_UNDERFLOW_RX_DMA_EN_MASK ((uint32_t)0x00000200U)
#define SPI_INTR_RX_DMA_EN_RX_FIFO_FULL_RX_DMA_EN_OFS (10)
#define SPI_INTR_RX_DMA_EN_RX_FIFO_FULL_RX_DMA_EN_MASK ((uint32_t)0x00000400U)
#define SPI_INTR_NMI_RX_FIFO_OVERFLOW_NMI_EN_OFS (0)
#define SPI_INTR_NMI_RX_FIFO_OVERFLOW_NMI_EN_MASK ((uint32_t)0x00000001U)
#define SPI_INTR_NMI_PARITY_ERROR_NMI_EN_OFS (1)
#define SPI_INTR_NMI_PARITY_ERROR_NMI_EN_MASK ((uint32_t)0x00000002U)
#define SPI_INTR_NMI_RX_TIMEOUT_NMI_EN_OFS (2)
#define SPI_INTR_NMI_RX_TIMEOUT_NMI_EN_MASK ((uint32_t)0x00000004U)
#define SPI_INTR_NMI_RX_FIFO_TRG_LVL_NMI_EN_OFS (3)
#define SPI_INTR_NMI_RX_FIFO_TRG_LVL_NMI_EN_MASK ((uint32_t)0x00000008U)
#define SPI_INTR_NMI_TX_FIFO_TRG_LVL_NMI_EN_OFS (4)
#define SPI_INTR_NMI_TX_FIFO_TRG_LVL_NMI_EN_MASK ((uint32_t)0x00000010U)
#define SPI_INTR_NMI_TX_FIFO_EMPTY_NMI_EN_OFS (5)
#define SPI_INTR_NMI_TX_FIFO_EMPTY_NMI_EN_MASK ((uint32_t)0x00000020U)
#define SPI_INTR_NMI_IDLE_NMI_EN_OFS (6)
#define SPI_INTR_NMI_IDLE_NMI_EN_MASK ((uint32_t)0x00000040U)
#define SPI_INTR_NMI_RX_DMA_DONE_NMI_EN_OFS (7)
#define SPI_INTR_NMI_RX_DMA_DONE_NMI_EN_MASK ((uint32_t)0x00000080U)
#define SPI_INTR_NMI_TX_DMA_DONE_NMI_EN_OFS (8)
#define SPI_INTR_NMI_TX_DMA_DONE_NMI_EN_MASK ((uint32_t)0x00000100U)
#define SPI_INTR_NMI_TX_FIFO_UNDERFLOW_NMI_EN_OFS (9)
#define SPI_INTR_NMI_TX_FIFO_UNDERFLOW_NMI_EN_MASK ((uint32_t)0x00000200U)
#define SPI_INTR_NMI_RX_FIFO_FULL_NMI_EN_OFS (10)
#define SPI_INTR_NMI_RX_FIFO_FULL_NMI_EN_MASK ((uint32_t)0x00000400U)
#define SPI_INTR_SW_SET_RX_FIFO_OVERFLOW_SW_SET_OFS (0)
#define SPI_INTR_SW_SET_RX_FIFO_OVERFLOW_SW_SET_MASK ((uint32_t)0x00000001U)
#define SPI_INTR_SW_SET_PARITY_ERROR_SW_SET_OFS (1)
#define SPI_INTR_SW_SET_PARITY_ERROR_SW_SET_MASK ((uint32_t)0x00000002U)
#define SPI_INTR_SW_SET_RX_TIMEOUT_SW_SET_OFS (2)
#define SPI_INTR_SW_SET_RX_TIMEOUT_SW_SET_MASK ((uint32_t)0x00000004U)
#define SPI_INTR_SW_SET_RX_FIFO_TRG_LVL_SW_SET_OFS (3)
#define SPI_INTR_SW_SET_RX_FIFO_TRG_LVL_SW_SET_MASK ((uint32_t)0x00000008U)
#define SPI_INTR_SW_SET_TX_FIFO_TRG_LVL_SW_SET_OFS (4)
#define SPI_INTR_SW_SET_TX_FIFO_TRG_LVL_SW_SET_MASK ((uint32_t)0x00000010U)
#define SPI_INTR_SW_SET_TX_FIFO_EMPTY_SW_SET_OFS (5)
#define SPI_INTR_SW_SET_TX_FIFO_EMPTY_SW_SET_MASK ((uint32_t)0x00000020U)
#define SPI_INTR_SW_SET_IDLE_SW_SET_OFS (6)
#define SPI_INTR_SW_SET_IDLE_SW_SET_MASK ((uint32_t)0x00000040U)
#define SPI_INTR_SW_SET_RX_DMA_DONE_SW_SET_OFS (7)
#define SPI_INTR_SW_SET_RX_DMA_DONE_SW_SET_MASK ((uint32_t)0x00000080U)
#define SPI_INTR_SW_SET_TX_DMA_DONE_SW_SET_OFS (8)
#define SPI_INTR_SW_SET_TX_DMA_DONE_SW_SET_MASK ((uint32_t)0x00000100U)
#define SPI_INTR_SW_SET_TX_FIFO_UNDERFLOW_SW_SET_OFS (9)
#define SPI_INTR_SW_SET_TX_FIFO_UNDERFLOW_SW_SET_MASK ((uint32_t)0x00000200U)
#define SPI_INTR_SW_SET_RX_FIFO_FULL_SW_SET_OFS (10)
#define SPI_INTR_SW_SET_RX_FIFO_FULL_SW_SET_MASK ((uint32_t)0x00000400U)
#define SPI_SPARE_CTRL_CFG0_OFS (0)
#define SPI_SPARE_CTRL_CFG0_MASK ((uint32_t)0x000000FFU)
#define SPI_SPARE_CTRL_CFG1_OFS (8)
#define SPI_SPARE_CTRL_CFG1_MASK ((uint32_t)0x0000FF00U)
#define SPI_SPARE_STS_STS0_OFS (0)
#define SPI_SPARE_STS_STS0_MASK ((uint32_t)0x000000FFU)
#define SPI_SPARE_STS_STS1_OFS (8)
#define SPI_SPARE_STS_STS1_MASK ((uint32_t)0x0000FF00U)

#endif
