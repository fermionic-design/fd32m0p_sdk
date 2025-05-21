#ifndef I2C_REGISTERS_H
#define I2C_REGISTERS_H

#include <stdint.h>

typedef struct I2C_DESC_REG_s {
    unsigned int module_type:8; // 
    unsigned int modue_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} I2C_DESC_REG_s;

typedef union I2C_DESC_u {
    I2C_DESC_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_DESC_u;

typedef struct I2C_PWR_EN_REG_s {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    unsigned int pwr_en_key:8; // 
} I2C_PWR_EN_REG_s;

typedef union I2C_PWR_EN_u {
    I2C_PWR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_PWR_EN_u;

typedef struct I2C_RST_CTRL_REG_s {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    unsigned int rst_key:8; // 
} I2C_RST_CTRL_REG_s;

typedef union I2C_RST_CTRL_u {
    I2C_RST_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_RST_CTRL_u;

typedef struct I2C_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} I2C_RST_STS_REG_s;

typedef union I2C_RST_STS_u {
    I2C_RST_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_RST_STS_u;

typedef struct I2C_CLK_CTRL_REG_s {
    unsigned int en_async_clk_req:1; // 
    unsigned int clksel:1; // 
    unsigned int clkdiv:3; // 
    unsigned int hold_cnt:3; // 
    unsigned int setup_cnt:3; // Max for 32Mhz clk 250ns in standard mode.  -- 0 : invalid -- 1 : scl released at same clk cycle as ack/nack generated -- 2 : scl released 1 clk cycle after ack/nack generated and so on
} I2C_CLK_CTRL_REG_s;

typedef union I2C_CLK_CTRL_u {
    I2C_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_CLK_CTRL_u;

typedef struct I2C_DBG_CTRL_REG_s {
    unsigned int run_on_halt:1; // 
    unsigned int soft_stop:1; // 
} I2C_DBG_CTRL_REG_s;

typedef union I2C_DBG_CTRL_u {
    I2C_DBG_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_DBG_CTRL_u;

typedef struct I2C_MASTER_SCL_GEN_REG_s {
    unsigned int mst_scl_cnt_high_val:8; // Max for 32Mhz clk 4us in standard mode
    unsigned int mst_scl_cnt_low_val:8; // Max for 32Mhz clk 4.7us in standard mode
} I2C_MASTER_SCL_GEN_REG_s;

typedef union I2C_MASTER_SCL_GEN_u {
    I2C_MASTER_SCL_GEN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_MASTER_SCL_GEN_u;

typedef struct I2C_MASTER_TIMING_CONSTRAINT_REG_s {
    unsigned int mst_scl_start_cnt:8; // Max for 32Mhz clk 4us in standard mode (Start Hold time)
    unsigned int mst_sda_stop_cnt:8; // Max for 32Mhz 4us (Stop Setup Time)
    unsigned int mst_stop_start_buffer_cnt:8; // Max for 32Mhz 4.7us (Minimum time between stop and start)
    unsigned int mst_restart_setup_cnt:8; // 
} I2C_MASTER_TIMING_CONSTRAINT_REG_s;

typedef union I2C_MASTER_TIMING_CONSTRAINT_u {
    I2C_MASTER_TIMING_CONSTRAINT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_MASTER_TIMING_CONSTRAINT_u;

typedef struct I2C_MASTER_CLKSTRETCH_CNT_REG_s {
    unsigned int mst_max_clkstretch_cnt:32; // max for 32Mhz 10ms (Maximum time for which master and clk stretch)
} I2C_MASTER_CLKSTRETCH_CNT_REG_s;

typedef union I2C_MASTER_CLKSTRETCH_CNT_u {
    I2C_MASTER_CLKSTRETCH_CNT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_MASTER_CLKSTRETCH_CNT_u;

typedef struct I2C_SLAVE_CLKSTRETCH_CNT_REG_s {
    unsigned int slv_max_clkstretch_cnt:32; // Max for 32Mhz 25ms (Maximum time slave can clk stretch)
} I2C_SLAVE_CLKSTRETCH_CNT_REG_s;

typedef union I2C_SLAVE_CLKSTRETCH_CNT_u {
    I2C_SLAVE_CLKSTRETCH_CNT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_SLAVE_CLKSTRETCH_CNT_u;

typedef struct I2C_SMBUS_TIMEOUT_CNT_REG_s {
    unsigned int smbus_timeout_cnt:32; // max for 32Mhz 35ms (Maximum time scl low allowed when external device is stretching)
} I2C_SMBUS_TIMEOUT_CNT_REG_s;

typedef union I2C_SMBUS_TIMEOUT_CNT_u {
    I2C_SMBUS_TIMEOUT_CNT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_SMBUS_TIMEOUT_CNT_u;

typedef struct I2C_INTR_STS_REG_s {
    unsigned int intr_first:6; // 
} I2C_INTR_STS_REG_s;

typedef union I2C_INTR_STS_u {
    I2C_INTR_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_INTR_STS_u;

typedef struct I2C_INTR_EVENT_REG_s {
    unsigned int arb_lost:1; // 
    unsigned int slv_gencall_intr:1; // 
    unsigned int slv_start:1; // 
    unsigned int slv_stop:1; // 
    unsigned int tx_done:1; // 1 byte transmission done
    unsigned int rx_done:1; // 1 byte recieve done
    unsigned int smbus_timeout:1; // 
    unsigned int clkstretch_timeout:1; // 
    unsigned int pec_err:1; // 
    unsigned int txfifo_empty:1; // 
    unsigned int rxfifo_full:1; // 
    unsigned int txfifo_half_full:1; // 
    unsigned int rxfifo_half_full:1; // 
    unsigned int mst_stop_intr:1; // 
    unsigned int mst_start_intr:1; // 
    unsigned int mst_nack:1; // 
    unsigned int dma_done_rx:1; // 
    unsigned int dma_done_tx:1; // 
    unsigned int txfifo_almost_empty_intr:1; // 
    unsigned int rxfifo_almost_full_intr:1; // 
} I2C_INTR_EVENT_REG_s;

typedef union I2C_INTR_EVENT_u {
    I2C_INTR_EVENT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_INTR_EVENT_u;

typedef struct I2C_INTR_EN_0_REG_s {
    unsigned int arb_lost_en:1; // 
    unsigned int slv_gencall_intr_en:1; // 
    unsigned int slv_start_en:1; // 
    unsigned int slv_stop_en:1; // 
    unsigned int tx_done_en:1; // 
    unsigned int rx_done_en:1; // 
    unsigned int smbus_timeout_en:1; // 
    unsigned int clkstretch_timeout_en:1; // 
    unsigned int pec_err_en:1; // 
    unsigned int txfifo_empty_en:1; // 
    unsigned int rxfifo_full_en:1; // 
    unsigned int txfifo_half_full_en:1; // 
    unsigned int rxfifo_half_full_en:1; // 
    unsigned int mst_stop_intr_en:1; // 
    unsigned int mst_start_intr_en:1; // 
    unsigned int mst_nack_en:1; // 
} I2C_INTR_EN_0_REG_s;

typedef union I2C_INTR_EN_0_u {
    I2C_INTR_EN_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_INTR_EN_0_u;

typedef struct I2C_INTR_EN_1_REG_s {
    unsigned int dma_done_rx_en:1; // 
    unsigned int dma_done_tx_en:1; // 
    unsigned int txfifo_almost_empty_intr_en:1; // 
    unsigned int rxfifo_almost_full_intr_en:1; // 
} I2C_INTR_EN_1_REG_s;

typedef union I2C_INTR_EN_1_u {
    I2C_INTR_EN_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_INTR_EN_1_u;

typedef struct I2C_INTR_NMI_EN_0_REG_s {
    unsigned int arb_lost_nmi_en:1; // 
    unsigned int slv_gencall_intr_nmi_en:1; // 
    unsigned int slv_start_nmi_en:1; // 
    unsigned int slv_stop_nmi_en:1; // 
    unsigned int tx_done_nmi_en:1; // 
    unsigned int rx_done_nmi_en:1; // 
    unsigned int smbus_timeout_nmi_en:1; // 
    unsigned int clkstretch_timeout_nmi_en:1; // 
    unsigned int pec_err_nmi_en:1; // 
    unsigned int txfifo_empty_nmi_en:1; // 
    unsigned int rxfifo_full_nmi_en:1; // 
    unsigned int txfifo_half_full_nmi_en:1; // 
    unsigned int rxfifo_half_full_nmi_en:1; // 
    unsigned int mst_stop_intr_nmi_en:1; // 
    unsigned int mst_start_intr_nmi_en:1; // 
    unsigned int mst_nack_nmi_en:1; // 
} I2C_INTR_NMI_EN_0_REG_s;

typedef union I2C_INTR_NMI_EN_0_u {
    I2C_INTR_NMI_EN_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_INTR_NMI_EN_0_u;

typedef struct I2C_INTR_NMI_EN_1_REG_s {
    unsigned int dma_done_rx_nmi_en:1; // 
    unsigned int dma_done_tx_nmi_en:1; // 
    unsigned int txfifo_almost_empty_intr_nmi_en:1; // 
    unsigned int rxfifo_almost_full_intr_nmi_en:1; // 
} I2C_INTR_NMI_EN_1_REG_s;

typedef union I2C_INTR_NMI_EN_1_u {
    I2C_INTR_NMI_EN_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_INTR_NMI_EN_1_u;

typedef struct I2C_RX_DMA_EVENT_EN_0_REG_s {
    unsigned int rx_dma_arb_lost_en:1; // 
    unsigned int rx_dma_slv_gencall_intr_en:1; // 
    unsigned int rx_dma_slv_start_en:1; // 
    unsigned int rx_dma_slv_stop_en:1; // 
    unsigned int rx_dma_tx_done_en:1; // 
    unsigned int rx_dma_rx_done_en:1; // 
    unsigned int rx_dma_smbus_timeout_en:1; // 
    unsigned int rx_dma_clkstretch_timeout_en:1; // 
    unsigned int rx_dma_pec_err_en:1; // 
    unsigned int rx_dma_txfifo_empty_en:1; // 
    unsigned int rx_dma_rxfifo_full_en:1; // 
    unsigned int rx_dma_txfifo_half_full_en:1; // 
    unsigned int rx_dma_rxfifo_half_full_en:1; // 
    unsigned int rx_dma_mst_stop_intr_en:1; // 
    unsigned int rx_dma_mst_start_intr_en:1; // 
    unsigned int rx_dma_mst_nack_en:1; // 
} I2C_RX_DMA_EVENT_EN_0_REG_s;

typedef union I2C_RX_DMA_EVENT_EN_0_u {
    I2C_RX_DMA_EVENT_EN_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_RX_DMA_EVENT_EN_0_u;

typedef struct I2C_RX_DMA_EVENT_EN_1_REG_s {
    unsigned int rx_dma_dma_done_rx_en:1; // 
    unsigned int rx_dma_dma_done_tx_en:1; // 
    unsigned int rx_dma_txfifo_almost_empty_intr_en:1; // 
    unsigned int rx_dma_rxfifo_almost_full_intr_en:1; // 
} I2C_RX_DMA_EVENT_EN_1_REG_s;

typedef union I2C_RX_DMA_EVENT_EN_1_u {
    I2C_RX_DMA_EVENT_EN_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_RX_DMA_EVENT_EN_1_u;

typedef struct I2C_TX_DMA_EVENT_EN_0_REG_s {
    unsigned int tx_dma_arb_lost_en:1; // 
    unsigned int tx_dma_slv_gencall_intr_en:1; // 
    unsigned int tx_dma_slv_start_en:1; // 
    unsigned int tx_dma_slv_stop_en:1; // 
    unsigned int tx_dma_tx_done_en:1; // 
    unsigned int tx_dma_rx_done_en:1; // 
    unsigned int tx_dma_smbus_timeout_en:1; // 
    unsigned int tx_dma_clkstretch_timeout_en:1; // 
    unsigned int tx_dma_pec_err_en:1; // 
    unsigned int tx_dma_txfifo_empty_en:1; // 
    unsigned int tx_dma_rxfifo_full_en:1; // 
    unsigned int tx_dma_txfifo_half_full_en:1; // 
    unsigned int tx_dma_rxfifo_half_full_en:1; // 
    unsigned int tx_dma_mst_stop_intr_en:1; // 
    unsigned int tx_dma_mst_start_intr_en:1; // 
    unsigned int tx_dma_mst_nack_en:1; // 
} I2C_TX_DMA_EVENT_EN_0_REG_s;

typedef union I2C_TX_DMA_EVENT_EN_0_u {
    I2C_TX_DMA_EVENT_EN_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_TX_DMA_EVENT_EN_0_u;

typedef struct I2C_TX_DMA_EVENT_EN_1_REG_s {
    unsigned int tx_dma_dma_done_rx_en:1; // 
    unsigned int tx_dma_dma_done_tx_en:1; // 
    unsigned int tx_dma_txfifo_almost_empty_intr_en:1; // 
    unsigned int tx_dma_rxfifo_almost_full_intr_en:1; // 
} I2C_TX_DMA_EVENT_EN_1_REG_s;

typedef union I2C_TX_DMA_EVENT_EN_1_u {
    I2C_TX_DMA_EVENT_EN_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_TX_DMA_EVENT_EN_1_u;

typedef struct I2C_INTR_SW_SET_0_REG_s {
    unsigned int arb_lost_sw_set:1; // 
    unsigned int slv_gencall_intr_sw_set:1; // 
    unsigned int slv_start_sw_set:1; // 
    unsigned int slv_stop_sw_set:1; // 
    unsigned int tx_done_sw_set:1; // 
    unsigned int rx_done_sw_set:1; // 
    unsigned int smbus_timeout_sw_set:1; // 
    unsigned int clkstretch_timeout_sw_set:1; // 
    unsigned int pec_err_sw_set:1; // 
    unsigned int txfifo_empty_sw_set:1; // 
    unsigned int rxfifo_full_sw_set:1; // 
    unsigned int txfifo_half_full_sw_set:1; // 
    unsigned int rxfifo_half_full_sw_set:1; // 
    unsigned int mst_stop_intr_sw_set:1; // 
    unsigned int mst_start_intr_sw_set:1; // 
    unsigned int mst_nack_sw_set:1; // 
} I2C_INTR_SW_SET_0_REG_s;

typedef union I2C_INTR_SW_SET_0_u {
    I2C_INTR_SW_SET_0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_INTR_SW_SET_0_u;

typedef struct I2C_INTR_SW_SET_1_REG_s {
    unsigned int dma_done_rx_sw_set:1; // 
    unsigned int dma_done_tx_sw_set:1; // 
    unsigned int txfifo_almost_empty_intr_sw_set:1; // 
    unsigned int rxfifo_almost_full_intr_sw_set:1; // 
} I2C_INTR_SW_SET_1_REG_s;

typedef union I2C_INTR_SW_SET_1_u {
    I2C_INTR_SW_SET_1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_INTR_SW_SET_1_u;

typedef struct I2C_SPARE_CTRL_REG_s {
    unsigned int cfg0:8; // 
    unsigned int cfg1:8; // 
} I2C_SPARE_CTRL_REG_s;

typedef union I2C_SPARE_CTRL_u {
    I2C_SPARE_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_SPARE_CTRL_u;

typedef struct I2C_SPARE_STS_REG_s {
    unsigned int sts0:8; // 
    unsigned int sts1:8; // 
} I2C_SPARE_STS_REG_s;

typedef union I2C_SPARE_STS_u {
    I2C_SPARE_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_SPARE_STS_u;

typedef struct I2C_GLITCH_FILTER_CFG_REG_s {
    unsigned int gf_width:3; // Glitch filter width
} I2C_GLITCH_FILTER_CFG_REG_s;

typedef union I2C_GLITCH_FILTER_CFG_u {
    I2C_GLITCH_FILTER_CFG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_GLITCH_FILTER_CFG_u;

typedef struct I2C_SLAVE_CTRL_REG_s {
    unsigned int slv_addr_mode:1; // 0 : 7 bit addressing   -- 1 : 10 bit addressing
    unsigned int slv_low_pwr_wakeup_en:1; // Enables wakeup from low power mode
    unsigned int slv_def_dev_addr_en:1; // Enables default device address matching
    unsigned int slv_alres_addr_en:1; // enables alert response addr match
    unsigned int slv_def_host_addr_en:1; // enables default host address match
    unsigned int slv_txtrig_at_txmode:1; // Tx trigger is generated only when fsm is in tx mode
    unsigned int slv_clkstretch_en:1; // Enables clk stretch feature
    unsigned int slv_gencall_en:1; // 
    unsigned int slv_enable:1; // Enables the slave
    unsigned int slv_addr2_en:1; // Enables matching with addr2
    unsigned int slv_addr2_mask:7; // 0 : Disables bit checking for particular bit   -- 1 : Enables bit checking for particular bit
    unsigned int slv_txwait_stale_fifo:1; // 1 : Gives tx fifo empty notification to fsm even if fifo is not actually empty, but the data is stale
    unsigned int slv_txempty_intr_on_tx_req:1; // 1, generates txempty intr when tx is empty and clk stretching is taking place.   -- 0, generates tx empty intr whenever fifo is empty
} I2C_SLAVE_CTRL_REG_s;

typedef union I2C_SLAVE_CTRL_u {
    I2C_SLAVE_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_SLAVE_CTRL_u;

typedef struct I2C_SLAVE_ADDR_REG_s {
    unsigned int slv_addr1:10; // 
    unsigned int rsvd_0:6; // 
    unsigned int slv_addr2:10; // 
} I2C_SLAVE_ADDR_REG_s;

typedef union I2C_SLAVE_ADDR_u {
    I2C_SLAVE_ADDR_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_SLAVE_ADDR_u;

typedef struct I2C_SLAVE_STS_REG_s {
    unsigned int slv_rx_req:1; // Clk stretching is going on and slave is waiting for rx fifo to be cleared
    unsigned int slv_tx_req:1; // clk stetching is going on and slv is waiting for data to be written into tx fifo
    unsigned int slv_addr2_sel:1; // addr matched with addr2
    unsigned int quick_cmd_sts:1; // quick command detected
    unsigned int quick_cmd_rw:1; // quick command r/w deteced
    unsigned int slv_addr_match:1; // 
    unsigned int slv_stale_txfifo:1; // tx fifo is stale
    unsigned int slv_txmode:1; // slv is in tx mode
    unsigned int slv_rxmode:1; // slv is in rx mode
    unsigned int slv_busbsy:1; // slv is busy
} I2C_SLAVE_STS_REG_s;

typedef union I2C_SLAVE_STS_u {
    I2C_SLAVE_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_SLAVE_STS_u;

typedef struct I2C_SLAVE_ACK_CFG_REG_s {
    unsigned int slv_auto_ack_en:1; // Enables automatic ack for rx data
    unsigned int slv_addr_auto_ack_en:1; // Enables automatic ack for slv addr
} I2C_SLAVE_ACK_CFG_REG_s;

typedef union I2C_SLAVE_ACK_CFG_u {
    I2C_SLAVE_ACK_CFG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_SLAVE_ACK_CFG_u;

typedef struct I2C_SLAVE_BYTE_ACK_REG_s {
    unsigned int slv_ackval:1; // Sw writes the ack val 0 or 1 in this register for addr and data
} I2C_SLAVE_BYTE_ACK_REG_s;

typedef union I2C_SLAVE_BYTE_ACK_u {
    I2C_SLAVE_BYTE_ACK_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_SLAVE_BYTE_ACK_u;

typedef struct I2C_FIFO_CTRL_REG_s {
    unsigned int rxfifo_en:1; // Enables rx fifo
    unsigned int txfifo_en:1; // enables tx fifo
    unsigned int rsvd_0:6; // flushes rx fifo
    unsigned int rxfifo_flush:1; // flushes rx fifo
    unsigned int rsvd_1:7; // flushes tx fifo
    unsigned int txfifo_flush:1; // flushes tx fifo
} I2C_FIFO_CTRL_REG_s;

typedef union I2C_FIFO_CTRL_u {
    I2C_FIFO_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_FIFO_CTRL_u;

typedef struct I2C_RXDATA_REG_s {
    unsigned int rxdata:10; // 
} I2C_RXDATA_REG_s;

typedef union I2C_RXDATA_u {
    I2C_RXDATA_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_RXDATA_u;

typedef struct I2C_TXDATA_REG_s {
    unsigned int txdata:8; // 
} I2C_TXDATA_REG_s;

typedef union I2C_TXDATA_u {
    I2C_TXDATA_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_TXDATA_u;

typedef struct I2C_FIFO_STS_REG_s {
    unsigned int txfifo_flush_sts:1; // 
    unsigned int rxfifo_flush_sts:1; // 
    unsigned int txfifo_empty_sts:1; // 
    unsigned int txfifo_almost_empty:1; // 
    unsigned int txfifo_full:1; // 
    unsigned int rxfifo_empty:1; // 
    unsigned int rxfifo_almost_full:1; // 
    unsigned int rxfifo_full_sts:1; // 
} I2C_FIFO_STS_REG_s;

typedef union I2C_FIFO_STS_u {
    I2C_FIFO_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_FIFO_STS_u;

typedef struct I2C_PEC_CTRL_REG_s {
    unsigned int pec_en:1; // 
} I2C_PEC_CTRL_REG_s;

typedef union I2C_PEC_CTRL_u {
    I2C_PEC_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_PEC_CTRL_u;

typedef struct I2C_PEC_STS_REG_s {
    unsigned int pec_error:1; // 
} I2C_PEC_STS_REG_s;

typedef union I2C_PEC_STS_u {
    I2C_PEC_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_PEC_STS_u;

typedef struct I2C_CRC_OUT_BYTE_REG_s {
    unsigned int slv_crc_out_byte:8; // 
    unsigned int mst_crc_out_byte:8; // 
} I2C_CRC_OUT_BYTE_REG_s;

typedef union I2C_CRC_OUT_BYTE_u {
    I2C_CRC_OUT_BYTE_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_CRC_OUT_BYTE_u;

typedef struct I2C_MASTER_CFG_REG_s {
    unsigned int mst_enable:1; // Enables the master
    unsigned int mst_clkstretch_en:1; // enables clk stretch feature in master
    unsigned int lpbk_mode:1; // enables loopback mode
    unsigned int mst_auto_ack_en:1; // 1 : Automatically Acknowledges the last rx byte based on what value is there in mst_Ackval  -- 0 : Manually acknowledge the last byte based on what value is written to mst_Ackval register at the ack state, clk stretchong ios done till sw doesnt write onto this register
    unsigned int mst_addr_mode:1; // 0 : 7 bit addressing  -- 1: 10 bit addrresssing
    unsigned int mst_slv_addr_cfg:10; // Configure the slave addr in which master wants to send data
} I2C_MASTER_CFG_REG_s;

typedef union I2C_MASTER_CFG_u {
    I2C_MASTER_CFG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_MASTER_CFG_u;

typedef struct I2C_MASTER_CTRL_REG_s {
    unsigned int mst_cmd_vld:1; // Valid for the master ctrl register, sw have to write this bit to indicate a start of new transaction
    unsigned int rsvd_0:7; // Total bytes to be transfered
    unsigned int mst_burst_len:12; // Total bytes to be transfered
    unsigned int rsvd_1:4; // 1 : Generates start condition
    unsigned int mst_start:1; // 1 : Generates start condition
    unsigned int mst_dir:1; // 0 : write 1 : Read
    unsigned int mst_stop:1; // 1 : Generates stop condition after burst length is transfered
    unsigned int mst_rd_on_txempty:1; // 1 : Enables tx transfers till tx fifo is emoty then does repeat start with read for the burst length specified
} I2C_MASTER_CTRL_REG_s;

typedef union I2C_MASTER_CTRL_u {
    I2C_MASTER_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_MASTER_CTRL_u;

typedef struct I2C_MASTER_ACK_VAL_REG_s {
    unsigned int mst_ackval:1; // Ack val for last rx byte
} I2C_MASTER_ACK_VAL_REG_s;

typedef union I2C_MASTER_ACK_VAL_u {
    I2C_MASTER_ACK_VAL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_MASTER_ACK_VAL_u;

typedef struct I2C_MASTER_STS_REG_s {
    unsigned int mst_busbsy:1; // 
    unsigned int mst_idle:1; // 
    unsigned int mst_arblost:1; // 
    unsigned int mst_tx_data_ack:1; // 
    unsigned int mst_tx_addr_ack:1; // 
    unsigned int mst_tx_nack:1; // 
    unsigned int mst_fsm_busy:1; // 
    unsigned int mst_word_cnt:12; // 
} I2C_MASTER_STS_REG_s;

typedef union I2C_MASTER_STS_u {
    I2C_MASTER_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_MASTER_STS_u;

typedef struct I2C_MASTER_MON_REG_s {
    unsigned int mst_sda_state:1; // 
    unsigned int mst_scl_state:1; // 
} I2C_MASTER_MON_REG_s;

typedef union I2C_MASTER_MON_u {
    I2C_MASTER_MON_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_MASTER_MON_u;

typedef struct I2C_FSM_STATUS_REG_s {
    unsigned int mst_state:4; // 
    unsigned int slv_state:4; // 
    unsigned int slv_quick_cmd_state:3; // 
} I2C_FSM_STATUS_REG_s;

typedef union I2C_FSM_STATUS_u {
    I2C_FSM_STATUS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_FSM_STATUS_u;

typedef struct I2C_REGS_s{
    volatile I2C_DESC_u DESC;
    volatile I2C_PWR_EN_u PWR_EN;
    volatile I2C_RST_CTRL_u RST_CTRL;
    volatile I2C_RST_STS_u RST_STS;
    volatile I2C_CLK_CTRL_u CLK_CTRL;
    volatile I2C_DBG_CTRL_u DBG_CTRL;
    volatile I2C_MASTER_SCL_GEN_u MASTER_SCL_GEN;
    volatile I2C_MASTER_TIMING_CONSTRAINT_u MASTER_TIMING_CONSTRAINT;
    volatile I2C_MASTER_CLKSTRETCH_CNT_u MASTER_CLKSTRETCH_CNT;
    volatile I2C_SLAVE_CLKSTRETCH_CNT_u SLAVE_CLKSTRETCH_CNT;
    volatile I2C_SMBUS_TIMEOUT_CNT_u SMBUS_TIMEOUT_CNT;
    volatile I2C_INTR_STS_u INTR_STS;
    volatile I2C_INTR_EVENT_u INTR_EVENT;
    volatile I2C_INTR_EN_0_u INTR_EN_0;
    volatile I2C_INTR_EN_1_u INTR_EN_1;
    volatile I2C_INTR_NMI_EN_0_u INTR_NMI_EN_0;
    volatile I2C_INTR_NMI_EN_1_u INTR_NMI_EN_1;
    volatile I2C_RX_DMA_EVENT_EN_0_u RX_DMA_EVENT_EN_0;
    volatile I2C_RX_DMA_EVENT_EN_1_u RX_DMA_EVENT_EN_1;
    volatile I2C_TX_DMA_EVENT_EN_0_u TX_DMA_EVENT_EN_0;
    volatile I2C_TX_DMA_EVENT_EN_1_u TX_DMA_EVENT_EN_1;
    volatile I2C_INTR_SW_SET_0_u INTR_SW_SET_0;
    volatile I2C_INTR_SW_SET_1_u INTR_SW_SET_1;
    volatile I2C_SPARE_CTRL_u SPARE_CTRL;
    volatile I2C_SPARE_STS_u SPARE_STS;
    volatile I2C_GLITCH_FILTER_CFG_u GLITCH_FILTER_CFG;
    volatile I2C_SLAVE_CTRL_u SLAVE_CTRL;
    volatile I2C_SLAVE_ADDR_u SLAVE_ADDR;
    volatile I2C_SLAVE_STS_u SLAVE_STS;
    volatile I2C_SLAVE_ACK_CFG_u SLAVE_ACK_CFG;
    volatile I2C_SLAVE_BYTE_ACK_u SLAVE_BYTE_ACK;
    volatile I2C_FIFO_CTRL_u FIFO_CTRL;
    volatile I2C_RXDATA_u RXDATA[2];
    volatile I2C_TXDATA_u TXDATA[2];
    volatile I2C_FIFO_STS_u FIFO_STS;
    volatile I2C_PEC_CTRL_u PEC_CTRL;
    volatile I2C_PEC_STS_u PEC_STS;
    volatile I2C_CRC_OUT_BYTE_u CRC_OUT_BYTE;
    volatile I2C_MASTER_CFG_u MASTER_CFG;
    volatile I2C_MASTER_CTRL_u MASTER_CTRL;
    volatile I2C_MASTER_ACK_VAL_u MASTER_ACK_VAL;
    volatile I2C_MASTER_STS_u MASTER_STS;
    volatile I2C_MASTER_MON_u MASTER_MON;
    volatile I2C_FSM_STATUS_u FSM_STATUS;
} I2C_REGS_s;

#define I2C_PWR_EN_PWR_EN_KEY ((uint32_t)0x000000ABU)
#define I2C_RST_CTRL_RST_KEY ((uint32_t)0x000000ABU)
#define I2C_RST_CTRL_RST_STS_CLR_KEY ((uint32_t)0x000000ABU)

#define I2C_INTR_EVENT_ARB_LOST_IDX (0)
#define I2C_INTR_EVENT_SLV_GENCALL_INTR_IDX (1)
#define I2C_INTR_EVENT_SLV_START_IDX (2)
#define I2C_INTR_EVENT_SLV_STOP_IDX (3)
#define I2C_INTR_EVENT_TX_DONE_IDX (4)
#define I2C_INTR_EVENT_RX_DONE_IDX (5)
#define I2C_INTR_EVENT_SMBUS_TIMEOUT_IDX (6)
#define I2C_INTR_EVENT_CLKSTRETCH_TIMEOUT_IDX (7)
#define I2C_INTR_EVENT_PEC_ERR_IDX (8)
#define I2C_INTR_EVENT_TXFIFO_EMPTY_IDX (9)
#define I2C_INTR_EVENT_RXFIFO_FULL_IDX (10)
#define I2C_INTR_EVENT_TXFIFO_HALF_FULL_IDX (11)
#define I2C_INTR_EVENT_RXFIFO_HALF_FULL_IDX (12)
#define I2C_INTR_EVENT_MST_STOP_INTR_IDX (13)
#define I2C_INTR_EVENT_MST_START_INTR_IDX (14)
#define I2C_INTR_EVENT_MST_NACK_IDX (15)
#define I2C_INTR_EVENT_DMA_DONE_RX_IDX (16)
#define I2C_INTR_EVENT_DMA_DONE_TX_IDX (17)
#define I2C_INTR_EVENT_TXFIFO_ALMOST_EMPTY_INTR_IDX (18)
#define I2C_INTR_EVENT_RXFIFO_ALMOST_FULL_INTR_IDX (19)

typedef enum {
	I2C_CLK_CTRL_CLKSEL_4MHZ = 0,
	I2C_CLK_CTRL_CLKSEL_AHB = 1,
} I2C_CLK_CTRL_CLKSEL_E;

typedef enum {
	I2C_SLAVE_CTRL_SLV_ADDR_MODE_7_BIT = 0,
	I2C_SLAVE_CTRL_SLV_ADDR_MODE_10_BIT = 1,
} I2C_SLAVE_CTRL_SLV_ADDR_MODE_E;

typedef enum {
	I2C_SLAVE_CTRL_SLV_TXWAIT_STALE_FIFO_NOT_TREATED_AS_EMPTY = 0,
	I2C_SLAVE_CTRL_SLV_TXWAIT_STALE_FIFO_TREATED_AS_EMPTY = 1,
} I2C_SLAVE_CTRL_SLV_TXWAIT_STALE_FIFO_E;

typedef enum {
	I2C_SLAVE_CTRL_SLV_TXEMPTY_INTR_ON_TX_REQ_AGNOSTIC = 0,
	I2C_SLAVE_CTRL_SLV_TXEMPTY_INTR_ON_TX_REQ_REQUIRED = 1,
} I2C_SLAVE_CTRL_SLV_TXEMPTY_INTR_ON_TX_REQ_E;

typedef enum {
	I2C_SLAVE_BYTE_ACK_SLV_ACKVAL_ACK = 0,
	I2C_SLAVE_BYTE_ACK_SLV_ACKVAL_NACK = 1,
} I2C_SLAVE_BYTE_ACK_SLV_ACKVAL_E;

typedef enum {
	I2C_MASTER_CFG_LPBK_MODE_DISABLE = 0,
	I2C_MASTER_CFG_LPBK_MODE_ENABLE = 1,
} I2C_MASTER_CFG_LPBK_MODE_E;

typedef enum {
	I2C_MASTER_CFG_MST_ADDR_MODE_7_BIT = 0,
	I2C_MASTER_CFG_MST_ADDR_MODE_10_BIT = 1,
} I2C_MASTER_CFG_MST_ADDR_MODE_E;

typedef enum {
	I2C_MASTER_CTRL_MST_DIR_WRITE = 0,
	I2C_MASTER_CTRL_MST_DIR_READ = 1,
} I2C_MASTER_CTRL_MST_DIR_E;

typedef enum {
	I2C_MASTER_CTRL_MST_RD_ON_TXEMPTY_DISABLED = 0,
	I2C_MASTER_CTRL_MST_RD_ON_TXEMPTY_ENABLED = 1,
} I2C_MASTER_CTRL_MST_RD_ON_TXEMPTY_E;

typedef enum {
	I2C_MASTER_ACK_VAL_MST_ACKVAL_ACK = 0,
	I2C_MASTER_ACK_VAL_MST_ACKVAL_NACK = 1,
} I2C_MASTER_ACK_VAL_MST_ACKVAL_E;

#define I2C_DESC_MODULE_TYPE_OFS (0)
#define I2C_DESC_MODULE_TYPE_MASK ((uint32_t)0x000000FFU)
#define I2C_DESC_MODUE_SUBTYPE_OFS (8)
#define I2C_DESC_MODUE_SUBTYPE_MASK ((uint32_t)0x0000FF00U)
#define I2C_DESC_MAJOR_REV_OFS (16)
#define I2C_DESC_MAJOR_REV_MASK ((uint32_t)0x000F0000U)
#define I2C_DESC_MINOR_REV_OFS (20)
#define I2C_DESC_MINOR_REV_MASK ((uint32_t)0x00F00000U)
#define I2C_PWR_EN_PWR_EN_OFS (0)
#define I2C_PWR_EN_PWR_EN_MASK ((uint32_t)0x00000001U)
#define I2C_PWR_EN_PWR_EN_KEY_OFS (24)
#define I2C_PWR_EN_PWR_EN_KEY_MASK ((uint32_t)0xFF000000U)
#define I2C_RST_CTRL_RST_OFS (0)
#define I2C_RST_CTRL_RST_MASK ((uint32_t)0x00000001U)
#define I2C_RST_CTRL_RST_STS_CLR_OFS (1)
#define I2C_RST_CTRL_RST_STS_CLR_MASK ((uint32_t)0x00000002U)
#define I2C_RST_CTRL_RST_KEY_OFS (24)
#define I2C_RST_CTRL_RST_KEY_MASK ((uint32_t)0xFF000000U)
#define I2C_RST_STS_RST_STS_OFS (0)
#define I2C_RST_STS_RST_STS_MASK ((uint32_t)0x00000001U)
#define I2C_CLK_CTRL_EN_ASYNC_CLK_REQ_OFS (0)
#define I2C_CLK_CTRL_EN_ASYNC_CLK_REQ_MASK ((uint32_t)0x00000001U)
#define I2C_CLK_CTRL_CLKSEL_OFS (1)
#define I2C_CLK_CTRL_CLKSEL_MASK ((uint32_t)0x00000002U)
#define I2C_CLK_CTRL_CLKDIV_OFS (2)
#define I2C_CLK_CTRL_CLKDIV_MASK ((uint32_t)0x0000001CU)
#define I2C_CLK_CTRL_HOLD_CNT_OFS (5)
#define I2C_CLK_CTRL_HOLD_CNT_MASK ((uint32_t)0x000000E0U)
#define I2C_CLK_CTRL_SETUP_CNT_OFS (8)
#define I2C_CLK_CTRL_SETUP_CNT_MASK ((uint32_t)0x00000700U)
#define I2C_DBG_CTRL_RUN_ON_HALT_OFS (0)
#define I2C_DBG_CTRL_RUN_ON_HALT_MASK ((uint32_t)0x00000001U)
#define I2C_DBG_CTRL_SOFT_STOP_OFS (1)
#define I2C_DBG_CTRL_SOFT_STOP_MASK ((uint32_t)0x00000002U)
#define I2C_MASTER_SCL_GEN_MST_SCL_CNT_HIGH_VAL_OFS (0)
#define I2C_MASTER_SCL_GEN_MST_SCL_CNT_HIGH_VAL_MASK ((uint32_t)0x000000FFU)
#define I2C_MASTER_SCL_GEN_MST_SCL_CNT_LOW_VAL_OFS (8)
#define I2C_MASTER_SCL_GEN_MST_SCL_CNT_LOW_VAL_MASK ((uint32_t)0x0000FF00U)
#define I2C_MASTER_TIMING_CONSTRAINT_MST_SCL_START_CNT_OFS (0)
#define I2C_MASTER_TIMING_CONSTRAINT_MST_SCL_START_CNT_MASK ((uint32_t)0x000000FFU)
#define I2C_MASTER_TIMING_CONSTRAINT_MST_SDA_STOP_CNT_OFS (8)
#define I2C_MASTER_TIMING_CONSTRAINT_MST_SDA_STOP_CNT_MASK ((uint32_t)0x0000FF00U)
#define I2C_MASTER_TIMING_CONSTRAINT_MST_STOP_START_BUFFER_CNT_OFS (16)
#define I2C_MASTER_TIMING_CONSTRAINT_MST_STOP_START_BUFFER_CNT_MASK ((uint32_t)0x00FF0000U)
#define I2C_MASTER_TIMING_CONSTRAINT_MST_RESTART_SETUP_CNT_OFS (24)
#define I2C_MASTER_TIMING_CONSTRAINT_MST_RESTART_SETUP_CNT_MASK ((uint32_t)0xFF000000U)
#define I2C_MASTER_CLKSTRETCH_CNT_MST_MAX_CLKSTRETCH_CNT_OFS (0)
#define I2C_MASTER_CLKSTRETCH_CNT_MST_MAX_CLKSTRETCH_CNT_MASK ((uint32_t)0xFFFFFFFFU)
#define I2C_SLAVE_CLKSTRETCH_CNT_SLV_MAX_CLKSTRETCH_CNT_OFS (0)
#define I2C_SLAVE_CLKSTRETCH_CNT_SLV_MAX_CLKSTRETCH_CNT_MASK ((uint32_t)0xFFFFFFFFU)
#define I2C_SMBUS_TIMEOUT_CNT_SMBUS_TIMEOUT_CNT_OFS (0)
#define I2C_SMBUS_TIMEOUT_CNT_SMBUS_TIMEOUT_CNT_MASK ((uint32_t)0xFFFFFFFFU)
#define I2C_INTR_STS_INTR_FIRST_OFS (0)
#define I2C_INTR_STS_INTR_FIRST_MASK ((uint32_t)0x0000003FU)
#define I2C_INTR_EVENT_ARB_LOST_OFS (0)
#define I2C_INTR_EVENT_ARB_LOST_MASK ((uint32_t)0x00000001U)
#define I2C_INTR_EVENT_SLV_GENCALL_INTR_OFS (1)
#define I2C_INTR_EVENT_SLV_GENCALL_INTR_MASK ((uint32_t)0x00000002U)
#define I2C_INTR_EVENT_SLV_START_OFS (2)
#define I2C_INTR_EVENT_SLV_START_MASK ((uint32_t)0x00000004U)
#define I2C_INTR_EVENT_SLV_STOP_OFS (3)
#define I2C_INTR_EVENT_SLV_STOP_MASK ((uint32_t)0x00000008U)
#define I2C_INTR_EVENT_TX_DONE_OFS (4)
#define I2C_INTR_EVENT_TX_DONE_MASK ((uint32_t)0x00000010U)
#define I2C_INTR_EVENT_RX_DONE_OFS (5)
#define I2C_INTR_EVENT_RX_DONE_MASK ((uint32_t)0x00000020U)
#define I2C_INTR_EVENT_SMBUS_TIMEOUT_OFS (6)
#define I2C_INTR_EVENT_SMBUS_TIMEOUT_MASK ((uint32_t)0x00000040U)
#define I2C_INTR_EVENT_CLKSTRETCH_TIMEOUT_OFS (7)
#define I2C_INTR_EVENT_CLKSTRETCH_TIMEOUT_MASK ((uint32_t)0x00000080U)
#define I2C_INTR_EVENT_PEC_ERR_OFS (8)
#define I2C_INTR_EVENT_PEC_ERR_MASK ((uint32_t)0x00000100U)
#define I2C_INTR_EVENT_TXFIFO_EMPTY_OFS (9)
#define I2C_INTR_EVENT_TXFIFO_EMPTY_MASK ((uint32_t)0x00000200U)
#define I2C_INTR_EVENT_RXFIFO_FULL_OFS (10)
#define I2C_INTR_EVENT_RXFIFO_FULL_MASK ((uint32_t)0x00000400U)
#define I2C_INTR_EVENT_TXFIFO_HALF_FULL_OFS (11)
#define I2C_INTR_EVENT_TXFIFO_HALF_FULL_MASK ((uint32_t)0x00000800U)
#define I2C_INTR_EVENT_RXFIFO_HALF_FULL_OFS (12)
#define I2C_INTR_EVENT_RXFIFO_HALF_FULL_MASK ((uint32_t)0x00001000U)
#define I2C_INTR_EVENT_MST_STOP_INTR_OFS (13)
#define I2C_INTR_EVENT_MST_STOP_INTR_MASK ((uint32_t)0x00002000U)
#define I2C_INTR_EVENT_MST_START_INTR_OFS (14)
#define I2C_INTR_EVENT_MST_START_INTR_MASK ((uint32_t)0x00004000U)
#define I2C_INTR_EVENT_MST_NACK_OFS (15)
#define I2C_INTR_EVENT_MST_NACK_MASK ((uint32_t)0x00008000U)
#define I2C_INTR_EVENT_DMA_DONE_RX_OFS (16)
#define I2C_INTR_EVENT_DMA_DONE_RX_MASK ((uint32_t)0x00010000U)
#define I2C_INTR_EVENT_DMA_DONE_TX_OFS (17)
#define I2C_INTR_EVENT_DMA_DONE_TX_MASK ((uint32_t)0x00020000U)
#define I2C_INTR_EVENT_TXFIFO_ALMOST_EMPTY_INTR_OFS (18)
#define I2C_INTR_EVENT_TXFIFO_ALMOST_EMPTY_INTR_MASK ((uint32_t)0x00040000U)
#define I2C_INTR_EVENT_RXFIFO_ALMOST_FULL_INTR_OFS (19)
#define I2C_INTR_EVENT_RXFIFO_ALMOST_FULL_INTR_MASK ((uint32_t)0x00080000U)
#define I2C_INTR_EN_0_ARB_LOST_EN_OFS (0)
#define I2C_INTR_EN_0_ARB_LOST_EN_MASK ((uint32_t)0x00000001U)
#define I2C_INTR_EN_0_SLV_GENCALL_INTR_EN_OFS (1)
#define I2C_INTR_EN_0_SLV_GENCALL_INTR_EN_MASK ((uint32_t)0x00000002U)
#define I2C_INTR_EN_0_SLV_START_EN_OFS (2)
#define I2C_INTR_EN_0_SLV_START_EN_MASK ((uint32_t)0x00000004U)
#define I2C_INTR_EN_0_SLV_STOP_EN_OFS (3)
#define I2C_INTR_EN_0_SLV_STOP_EN_MASK ((uint32_t)0x00000008U)
#define I2C_INTR_EN_0_TX_DONE_EN_OFS (4)
#define I2C_INTR_EN_0_TX_DONE_EN_MASK ((uint32_t)0x00000010U)
#define I2C_INTR_EN_0_RX_DONE_EN_OFS (5)
#define I2C_INTR_EN_0_RX_DONE_EN_MASK ((uint32_t)0x00000020U)
#define I2C_INTR_EN_0_SMBUS_TIMEOUT_EN_OFS (6)
#define I2C_INTR_EN_0_SMBUS_TIMEOUT_EN_MASK ((uint32_t)0x00000040U)
#define I2C_INTR_EN_0_CLKSTRETCH_TIMEOUT_EN_OFS (7)
#define I2C_INTR_EN_0_CLKSTRETCH_TIMEOUT_EN_MASK ((uint32_t)0x00000080U)
#define I2C_INTR_EN_0_PEC_ERR_EN_OFS (8)
#define I2C_INTR_EN_0_PEC_ERR_EN_MASK ((uint32_t)0x00000100U)
#define I2C_INTR_EN_0_TXFIFO_EMPTY_EN_OFS (9)
#define I2C_INTR_EN_0_TXFIFO_EMPTY_EN_MASK ((uint32_t)0x00000200U)
#define I2C_INTR_EN_0_RXFIFO_FULL_EN_OFS (10)
#define I2C_INTR_EN_0_RXFIFO_FULL_EN_MASK ((uint32_t)0x00000400U)
#define I2C_INTR_EN_0_TXFIFO_HALF_FULL_EN_OFS (11)
#define I2C_INTR_EN_0_TXFIFO_HALF_FULL_EN_MASK ((uint32_t)0x00000800U)
#define I2C_INTR_EN_0_RXFIFO_HALF_FULL_EN_OFS (12)
#define I2C_INTR_EN_0_RXFIFO_HALF_FULL_EN_MASK ((uint32_t)0x00001000U)
#define I2C_INTR_EN_0_MST_STOP_INTR_EN_OFS (13)
#define I2C_INTR_EN_0_MST_STOP_INTR_EN_MASK ((uint32_t)0x00002000U)
#define I2C_INTR_EN_0_MST_START_INTR_EN_OFS (14)
#define I2C_INTR_EN_0_MST_START_INTR_EN_MASK ((uint32_t)0x00004000U)
#define I2C_INTR_EN_0_MST_NACK_EN_OFS (15)
#define I2C_INTR_EN_0_MST_NACK_EN_MASK ((uint32_t)0x00008000U)
#define I2C_INTR_EN_1_DMA_DONE_RX_EN_OFS (0)
#define I2C_INTR_EN_1_DMA_DONE_RX_EN_MASK ((uint32_t)0x00000001U)
#define I2C_INTR_EN_1_DMA_DONE_TX_EN_OFS (1)
#define I2C_INTR_EN_1_DMA_DONE_TX_EN_MASK ((uint32_t)0x00000002U)
#define I2C_INTR_EN_1_TXFIFO_ALMOST_EMPTY_INTR_EN_OFS (2)
#define I2C_INTR_EN_1_TXFIFO_ALMOST_EMPTY_INTR_EN_MASK ((uint32_t)0x00000004U)
#define I2C_INTR_EN_1_RXFIFO_ALMOST_FULL_INTR_EN_OFS (3)
#define I2C_INTR_EN_1_RXFIFO_ALMOST_FULL_INTR_EN_MASK ((uint32_t)0x00000008U)
#define I2C_INTR_NMI_EN_0_ARB_LOST_NMI_EN_OFS (0)
#define I2C_INTR_NMI_EN_0_ARB_LOST_NMI_EN_MASK ((uint32_t)0x00000001U)
#define I2C_INTR_NMI_EN_0_SLV_GENCALL_INTR_NMI_EN_OFS (1)
#define I2C_INTR_NMI_EN_0_SLV_GENCALL_INTR_NMI_EN_MASK ((uint32_t)0x00000002U)
#define I2C_INTR_NMI_EN_0_SLV_START_NMI_EN_OFS (2)
#define I2C_INTR_NMI_EN_0_SLV_START_NMI_EN_MASK ((uint32_t)0x00000004U)
#define I2C_INTR_NMI_EN_0_SLV_STOP_NMI_EN_OFS (3)
#define I2C_INTR_NMI_EN_0_SLV_STOP_NMI_EN_MASK ((uint32_t)0x00000008U)
#define I2C_INTR_NMI_EN_0_TX_DONE_NMI_EN_OFS (4)
#define I2C_INTR_NMI_EN_0_TX_DONE_NMI_EN_MASK ((uint32_t)0x00000010U)
#define I2C_INTR_NMI_EN_0_RX_DONE_NMI_EN_OFS (5)
#define I2C_INTR_NMI_EN_0_RX_DONE_NMI_EN_MASK ((uint32_t)0x00000020U)
#define I2C_INTR_NMI_EN_0_SMBUS_TIMEOUT_NMI_EN_OFS (6)
#define I2C_INTR_NMI_EN_0_SMBUS_TIMEOUT_NMI_EN_MASK ((uint32_t)0x00000040U)
#define I2C_INTR_NMI_EN_0_CLKSTRETCH_TIMEOUT_NMI_EN_OFS (7)
#define I2C_INTR_NMI_EN_0_CLKSTRETCH_TIMEOUT_NMI_EN_MASK ((uint32_t)0x00000080U)
#define I2C_INTR_NMI_EN_0_PEC_ERR_NMI_EN_OFS (8)
#define I2C_INTR_NMI_EN_0_PEC_ERR_NMI_EN_MASK ((uint32_t)0x00000100U)
#define I2C_INTR_NMI_EN_0_TXFIFO_EMPTY_NMI_EN_OFS (9)
#define I2C_INTR_NMI_EN_0_TXFIFO_EMPTY_NMI_EN_MASK ((uint32_t)0x00000200U)
#define I2C_INTR_NMI_EN_0_RXFIFO_FULL_NMI_EN_OFS (10)
#define I2C_INTR_NMI_EN_0_RXFIFO_FULL_NMI_EN_MASK ((uint32_t)0x00000400U)
#define I2C_INTR_NMI_EN_0_TXFIFO_HALF_FULL_NMI_EN_OFS (11)
#define I2C_INTR_NMI_EN_0_TXFIFO_HALF_FULL_NMI_EN_MASK ((uint32_t)0x00000800U)
#define I2C_INTR_NMI_EN_0_RXFIFO_HALF_FULL_NMI_EN_OFS (12)
#define I2C_INTR_NMI_EN_0_RXFIFO_HALF_FULL_NMI_EN_MASK ((uint32_t)0x00001000U)
#define I2C_INTR_NMI_EN_0_MST_STOP_INTR_NMI_EN_OFS (13)
#define I2C_INTR_NMI_EN_0_MST_STOP_INTR_NMI_EN_MASK ((uint32_t)0x00002000U)
#define I2C_INTR_NMI_EN_0_MST_START_INTR_NMI_EN_OFS (14)
#define I2C_INTR_NMI_EN_0_MST_START_INTR_NMI_EN_MASK ((uint32_t)0x00004000U)
#define I2C_INTR_NMI_EN_0_MST_NACK_NMI_EN_OFS (15)
#define I2C_INTR_NMI_EN_0_MST_NACK_NMI_EN_MASK ((uint32_t)0x00008000U)
#define I2C_INTR_NMI_EN_1_DMA_DONE_RX_NMI_EN_OFS (0)
#define I2C_INTR_NMI_EN_1_DMA_DONE_RX_NMI_EN_MASK ((uint32_t)0x00000001U)
#define I2C_INTR_NMI_EN_1_DMA_DONE_TX_NMI_EN_OFS (1)
#define I2C_INTR_NMI_EN_1_DMA_DONE_TX_NMI_EN_MASK ((uint32_t)0x00000002U)
#define I2C_INTR_NMI_EN_1_TXFIFO_ALMOST_EMPTY_INTR_NMI_EN_OFS (2)
#define I2C_INTR_NMI_EN_1_TXFIFO_ALMOST_EMPTY_INTR_NMI_EN_MASK ((uint32_t)0x00000004U)
#define I2C_INTR_NMI_EN_1_RXFIFO_ALMOST_FULL_INTR_NMI_EN_OFS (3)
#define I2C_INTR_NMI_EN_1_RXFIFO_ALMOST_FULL_INTR_NMI_EN_MASK ((uint32_t)0x00000008U)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_ARB_LOST_EN_OFS (0)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_ARB_LOST_EN_MASK ((uint32_t)0x00000001U)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_SLV_GENCALL_INTR_EN_OFS (1)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_SLV_GENCALL_INTR_EN_MASK ((uint32_t)0x00000002U)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_SLV_START_EN_OFS (2)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_SLV_START_EN_MASK ((uint32_t)0x00000004U)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_SLV_STOP_EN_OFS (3)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_SLV_STOP_EN_MASK ((uint32_t)0x00000008U)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_TX_DONE_EN_OFS (4)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_TX_DONE_EN_MASK ((uint32_t)0x00000010U)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_RX_DONE_EN_OFS (5)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_RX_DONE_EN_MASK ((uint32_t)0x00000020U)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_SMBUS_TIMEOUT_EN_OFS (6)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_SMBUS_TIMEOUT_EN_MASK ((uint32_t)0x00000040U)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_CLKSTRETCH_TIMEOUT_EN_OFS (7)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_CLKSTRETCH_TIMEOUT_EN_MASK ((uint32_t)0x00000080U)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_PEC_ERR_EN_OFS (8)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_PEC_ERR_EN_MASK ((uint32_t)0x00000100U)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_TXFIFO_EMPTY_EN_OFS (9)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_TXFIFO_EMPTY_EN_MASK ((uint32_t)0x00000200U)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_RXFIFO_FULL_EN_OFS (10)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_RXFIFO_FULL_EN_MASK ((uint32_t)0x00000400U)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_TXFIFO_HALF_FULL_EN_OFS (11)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_TXFIFO_HALF_FULL_EN_MASK ((uint32_t)0x00000800U)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_RXFIFO_HALF_FULL_EN_OFS (12)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_RXFIFO_HALF_FULL_EN_MASK ((uint32_t)0x00001000U)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_MST_STOP_INTR_EN_OFS (13)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_MST_STOP_INTR_EN_MASK ((uint32_t)0x00002000U)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_MST_START_INTR_EN_OFS (14)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_MST_START_INTR_EN_MASK ((uint32_t)0x00004000U)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_MST_NACK_EN_OFS (15)
#define I2C_RX_DMA_EVENT_EN_0_RX_DMA_MST_NACK_EN_MASK ((uint32_t)0x00008000U)
#define I2C_RX_DMA_EVENT_EN_1_RX_DMA_DMA_DONE_RX_EN_OFS (0)
#define I2C_RX_DMA_EVENT_EN_1_RX_DMA_DMA_DONE_RX_EN_MASK ((uint32_t)0x00000001U)
#define I2C_RX_DMA_EVENT_EN_1_RX_DMA_DMA_DONE_TX_EN_OFS (1)
#define I2C_RX_DMA_EVENT_EN_1_RX_DMA_DMA_DONE_TX_EN_MASK ((uint32_t)0x00000002U)
#define I2C_RX_DMA_EVENT_EN_1_RX_DMA_TXFIFO_ALMOST_EMPTY_INTR_EN_OFS (2)
#define I2C_RX_DMA_EVENT_EN_1_RX_DMA_TXFIFO_ALMOST_EMPTY_INTR_EN_MASK ((uint32_t)0x00000004U)
#define I2C_RX_DMA_EVENT_EN_1_RX_DMA_RXFIFO_ALMOST_FULL_INTR_EN_OFS (3)
#define I2C_RX_DMA_EVENT_EN_1_RX_DMA_RXFIFO_ALMOST_FULL_INTR_EN_MASK ((uint32_t)0x00000008U)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_ARB_LOST_EN_OFS (0)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_ARB_LOST_EN_MASK ((uint32_t)0x00000001U)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_SLV_GENCALL_INTR_EN_OFS (1)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_SLV_GENCALL_INTR_EN_MASK ((uint32_t)0x00000002U)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_SLV_START_EN_OFS (2)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_SLV_START_EN_MASK ((uint32_t)0x00000004U)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_SLV_STOP_EN_OFS (3)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_SLV_STOP_EN_MASK ((uint32_t)0x00000008U)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_TX_DONE_EN_OFS (4)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_TX_DONE_EN_MASK ((uint32_t)0x00000010U)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_RX_DONE_EN_OFS (5)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_RX_DONE_EN_MASK ((uint32_t)0x00000020U)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_SMBUS_TIMEOUT_EN_OFS (6)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_SMBUS_TIMEOUT_EN_MASK ((uint32_t)0x00000040U)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_CLKSTRETCH_TIMEOUT_EN_OFS (7)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_CLKSTRETCH_TIMEOUT_EN_MASK ((uint32_t)0x00000080U)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_PEC_ERR_EN_OFS (8)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_PEC_ERR_EN_MASK ((uint32_t)0x00000100U)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_TXFIFO_EMPTY_EN_OFS (9)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_TXFIFO_EMPTY_EN_MASK ((uint32_t)0x00000200U)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_RXFIFO_FULL_EN_OFS (10)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_RXFIFO_FULL_EN_MASK ((uint32_t)0x00000400U)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_TXFIFO_HALF_FULL_EN_OFS (11)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_TXFIFO_HALF_FULL_EN_MASK ((uint32_t)0x00000800U)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_RXFIFO_HALF_FULL_EN_OFS (12)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_RXFIFO_HALF_FULL_EN_MASK ((uint32_t)0x00001000U)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_MST_STOP_INTR_EN_OFS (13)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_MST_STOP_INTR_EN_MASK ((uint32_t)0x00002000U)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_MST_START_INTR_EN_OFS (14)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_MST_START_INTR_EN_MASK ((uint32_t)0x00004000U)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_MST_NACK_EN_OFS (15)
#define I2C_TX_DMA_EVENT_EN_0_TX_DMA_MST_NACK_EN_MASK ((uint32_t)0x00008000U)
#define I2C_TX_DMA_EVENT_EN_1_TX_DMA_DMA_DONE_RX_EN_OFS (0)
#define I2C_TX_DMA_EVENT_EN_1_TX_DMA_DMA_DONE_RX_EN_MASK ((uint32_t)0x00000001U)
#define I2C_TX_DMA_EVENT_EN_1_TX_DMA_DMA_DONE_TX_EN_OFS (1)
#define I2C_TX_DMA_EVENT_EN_1_TX_DMA_DMA_DONE_TX_EN_MASK ((uint32_t)0x00000002U)
#define I2C_TX_DMA_EVENT_EN_1_TX_DMA_TXFIFO_ALMOST_EMPTY_INTR_EN_OFS (2)
#define I2C_TX_DMA_EVENT_EN_1_TX_DMA_TXFIFO_ALMOST_EMPTY_INTR_EN_MASK ((uint32_t)0x00000004U)
#define I2C_TX_DMA_EVENT_EN_1_TX_DMA_RXFIFO_ALMOST_FULL_INTR_EN_OFS (3)
#define I2C_TX_DMA_EVENT_EN_1_TX_DMA_RXFIFO_ALMOST_FULL_INTR_EN_MASK ((uint32_t)0x00000008U)
#define I2C_INTR_SW_SET_0_ARB_LOST_SW_SET_OFS (0)
#define I2C_INTR_SW_SET_0_ARB_LOST_SW_SET_MASK ((uint32_t)0x00000001U)
#define I2C_INTR_SW_SET_0_SLV_GENCALL_INTR_SW_SET_OFS (1)
#define I2C_INTR_SW_SET_0_SLV_GENCALL_INTR_SW_SET_MASK ((uint32_t)0x00000002U)
#define I2C_INTR_SW_SET_0_SLV_START_SW_SET_OFS (2)
#define I2C_INTR_SW_SET_0_SLV_START_SW_SET_MASK ((uint32_t)0x00000004U)
#define I2C_INTR_SW_SET_0_SLV_STOP_SW_SET_OFS (3)
#define I2C_INTR_SW_SET_0_SLV_STOP_SW_SET_MASK ((uint32_t)0x00000008U)
#define I2C_INTR_SW_SET_0_TX_DONE_SW_SET_OFS (4)
#define I2C_INTR_SW_SET_0_TX_DONE_SW_SET_MASK ((uint32_t)0x00000010U)
#define I2C_INTR_SW_SET_0_RX_DONE_SW_SET_OFS (5)
#define I2C_INTR_SW_SET_0_RX_DONE_SW_SET_MASK ((uint32_t)0x00000020U)
#define I2C_INTR_SW_SET_0_SMBUS_TIMEOUT_SW_SET_OFS (6)
#define I2C_INTR_SW_SET_0_SMBUS_TIMEOUT_SW_SET_MASK ((uint32_t)0x00000040U)
#define I2C_INTR_SW_SET_0_CLKSTRETCH_TIMEOUT_SW_SET_OFS (7)
#define I2C_INTR_SW_SET_0_CLKSTRETCH_TIMEOUT_SW_SET_MASK ((uint32_t)0x00000080U)
#define I2C_INTR_SW_SET_0_PEC_ERR_SW_SET_OFS (8)
#define I2C_INTR_SW_SET_0_PEC_ERR_SW_SET_MASK ((uint32_t)0x00000100U)
#define I2C_INTR_SW_SET_0_TXFIFO_EMPTY_SW_SET_OFS (9)
#define I2C_INTR_SW_SET_0_TXFIFO_EMPTY_SW_SET_MASK ((uint32_t)0x00000200U)
#define I2C_INTR_SW_SET_0_RXFIFO_FULL_SW_SET_OFS (10)
#define I2C_INTR_SW_SET_0_RXFIFO_FULL_SW_SET_MASK ((uint32_t)0x00000400U)
#define I2C_INTR_SW_SET_0_TXFIFO_HALF_FULL_SW_SET_OFS (11)
#define I2C_INTR_SW_SET_0_TXFIFO_HALF_FULL_SW_SET_MASK ((uint32_t)0x00000800U)
#define I2C_INTR_SW_SET_0_RXFIFO_HALF_FULL_SW_SET_OFS (12)
#define I2C_INTR_SW_SET_0_RXFIFO_HALF_FULL_SW_SET_MASK ((uint32_t)0x00001000U)
#define I2C_INTR_SW_SET_0_MST_STOP_INTR_SW_SET_OFS (13)
#define I2C_INTR_SW_SET_0_MST_STOP_INTR_SW_SET_MASK ((uint32_t)0x00002000U)
#define I2C_INTR_SW_SET_0_MST_START_INTR_SW_SET_OFS (14)
#define I2C_INTR_SW_SET_0_MST_START_INTR_SW_SET_MASK ((uint32_t)0x00004000U)
#define I2C_INTR_SW_SET_0_MST_NACK_SW_SET_OFS (15)
#define I2C_INTR_SW_SET_0_MST_NACK_SW_SET_MASK ((uint32_t)0x00008000U)
#define I2C_INTR_SW_SET_1_DMA_DONE_RX_SW_SET_OFS (0)
#define I2C_INTR_SW_SET_1_DMA_DONE_RX_SW_SET_MASK ((uint32_t)0x00000001U)
#define I2C_INTR_SW_SET_1_DMA_DONE_TX_SW_SET_OFS (1)
#define I2C_INTR_SW_SET_1_DMA_DONE_TX_SW_SET_MASK ((uint32_t)0x00000002U)
#define I2C_INTR_SW_SET_1_TXFIFO_ALMOST_EMPTY_INTR_SW_SET_OFS (2)
#define I2C_INTR_SW_SET_1_TXFIFO_ALMOST_EMPTY_INTR_SW_SET_MASK ((uint32_t)0x00000004U)
#define I2C_INTR_SW_SET_1_RXFIFO_ALMOST_FULL_INTR_SW_SET_OFS (3)
#define I2C_INTR_SW_SET_1_RXFIFO_ALMOST_FULL_INTR_SW_SET_MASK ((uint32_t)0x00000008U)
#define I2C_SPARE_CTRL_CFG0_OFS (0)
#define I2C_SPARE_CTRL_CFG0_MASK ((uint32_t)0x000000FFU)
#define I2C_SPARE_CTRL_CFG1_OFS (8)
#define I2C_SPARE_CTRL_CFG1_MASK ((uint32_t)0x0000FF00U)
#define I2C_SPARE_STS_STS0_OFS (0)
#define I2C_SPARE_STS_STS0_MASK ((uint32_t)0x000000FFU)
#define I2C_SPARE_STS_STS1_OFS (8)
#define I2C_SPARE_STS_STS1_MASK ((uint32_t)0x0000FF00U)
#define I2C_GLITCH_FILTER_CFG_GF_WIDTH_OFS (0)
#define I2C_GLITCH_FILTER_CFG_GF_WIDTH_MASK ((uint32_t)0x00000007U)
#define I2C_SLAVE_CTRL_SLV_ADDR_MODE_OFS (0)
#define I2C_SLAVE_CTRL_SLV_ADDR_MODE_MASK ((uint32_t)0x00000001U)
#define I2C_SLAVE_CTRL_SLV_LOW_PWR_WAKEUP_EN_OFS (1)
#define I2C_SLAVE_CTRL_SLV_LOW_PWR_WAKEUP_EN_MASK ((uint32_t)0x00000002U)
#define I2C_SLAVE_CTRL_SLV_DEF_DEV_ADDR_EN_OFS (2)
#define I2C_SLAVE_CTRL_SLV_DEF_DEV_ADDR_EN_MASK ((uint32_t)0x00000004U)
#define I2C_SLAVE_CTRL_SLV_ALRES_ADDR_EN_OFS (3)
#define I2C_SLAVE_CTRL_SLV_ALRES_ADDR_EN_MASK ((uint32_t)0x00000008U)
#define I2C_SLAVE_CTRL_SLV_DEF_HOST_ADDR_EN_OFS (4)
#define I2C_SLAVE_CTRL_SLV_DEF_HOST_ADDR_EN_MASK ((uint32_t)0x00000010U)
#define I2C_SLAVE_CTRL_SLV_TXTRIG_AT_TXMODE_OFS (5)
#define I2C_SLAVE_CTRL_SLV_TXTRIG_AT_TXMODE_MASK ((uint32_t)0x00000020U)
#define I2C_SLAVE_CTRL_SLV_CLKSTRETCH_EN_OFS (6)
#define I2C_SLAVE_CTRL_SLV_CLKSTRETCH_EN_MASK ((uint32_t)0x00000040U)
#define I2C_SLAVE_CTRL_SLV_GENCALL_EN_OFS (7)
#define I2C_SLAVE_CTRL_SLV_GENCALL_EN_MASK ((uint32_t)0x00000080U)
#define I2C_SLAVE_CTRL_SLV_ENABLE_OFS (8)
#define I2C_SLAVE_CTRL_SLV_ENABLE_MASK ((uint32_t)0x00000100U)
#define I2C_SLAVE_CTRL_SLV_ADDR2_EN_OFS (9)
#define I2C_SLAVE_CTRL_SLV_ADDR2_EN_MASK ((uint32_t)0x00000200U)
#define I2C_SLAVE_CTRL_SLV_ADDR2_MASK_OFS (10)
#define I2C_SLAVE_CTRL_SLV_ADDR2_MASK_MASK ((uint32_t)0x0001FC00U)
#define I2C_SLAVE_CTRL_SLV_TXWAIT_STALE_FIFO_OFS (17)
#define I2C_SLAVE_CTRL_SLV_TXWAIT_STALE_FIFO_MASK ((uint32_t)0x00020000U)
#define I2C_SLAVE_CTRL_SLV_TXEMPTY_INTR_ON_TX_REQ_OFS (18)
#define I2C_SLAVE_CTRL_SLV_TXEMPTY_INTR_ON_TX_REQ_MASK ((uint32_t)0x00040000U)
#define I2C_SLAVE_ADDR_SLV_ADDR1_OFS (0)
#define I2C_SLAVE_ADDR_SLV_ADDR1_MASK ((uint32_t)0x000003FFU)
#define I2C_SLAVE_ADDR_SLV_ADDR2_OFS (16)
#define I2C_SLAVE_ADDR_SLV_ADDR2_MASK ((uint32_t)0x03FF0000U)
#define I2C_SLAVE_STS_SLV_RX_REQ_OFS (0)
#define I2C_SLAVE_STS_SLV_RX_REQ_MASK ((uint32_t)0x00000001U)
#define I2C_SLAVE_STS_SLV_TX_REQ_OFS (1)
#define I2C_SLAVE_STS_SLV_TX_REQ_MASK ((uint32_t)0x00000002U)
#define I2C_SLAVE_STS_SLV_ADDR2_SEL_OFS (2)
#define I2C_SLAVE_STS_SLV_ADDR2_SEL_MASK ((uint32_t)0x00000004U)
#define I2C_SLAVE_STS_QUICK_CMD_STS_OFS (3)
#define I2C_SLAVE_STS_QUICK_CMD_STS_MASK ((uint32_t)0x00000008U)
#define I2C_SLAVE_STS_QUICK_CMD_RW_OFS (4)
#define I2C_SLAVE_STS_QUICK_CMD_RW_MASK ((uint32_t)0x00000010U)
#define I2C_SLAVE_STS_SLV_ADDR_MATCH_OFS (5)
#define I2C_SLAVE_STS_SLV_ADDR_MATCH_MASK ((uint32_t)0x00000020U)
#define I2C_SLAVE_STS_SLV_STALE_TXFIFO_OFS (6)
#define I2C_SLAVE_STS_SLV_STALE_TXFIFO_MASK ((uint32_t)0x00000040U)
#define I2C_SLAVE_STS_SLV_TXMODE_OFS (7)
#define I2C_SLAVE_STS_SLV_TXMODE_MASK ((uint32_t)0x00000080U)
#define I2C_SLAVE_STS_SLV_RXMODE_OFS (8)
#define I2C_SLAVE_STS_SLV_RXMODE_MASK ((uint32_t)0x00000100U)
#define I2C_SLAVE_STS_SLV_BUSBSY_OFS (9)
#define I2C_SLAVE_STS_SLV_BUSBSY_MASK ((uint32_t)0x00000200U)
#define I2C_SLAVE_ACK_CFG_SLV_AUTO_ACK_EN_OFS (0)
#define I2C_SLAVE_ACK_CFG_SLV_AUTO_ACK_EN_MASK ((uint32_t)0x00000001U)
#define I2C_SLAVE_ACK_CFG_SLV_ADDR_AUTO_ACK_EN_OFS (1)
#define I2C_SLAVE_ACK_CFG_SLV_ADDR_AUTO_ACK_EN_MASK ((uint32_t)0x00000002U)
#define I2C_SLAVE_BYTE_ACK_SLV_ACKVAL_OFS (0)
#define I2C_SLAVE_BYTE_ACK_SLV_ACKVAL_MASK ((uint32_t)0x00000001U)
#define I2C_FIFO_CTRL_RXFIFO_EN_OFS (0)
#define I2C_FIFO_CTRL_RXFIFO_EN_MASK ((uint32_t)0x00000001U)
#define I2C_FIFO_CTRL_TXFIFO_EN_OFS (1)
#define I2C_FIFO_CTRL_TXFIFO_EN_MASK ((uint32_t)0x00000002U)
#define I2C_FIFO_CTRL_RXFIFO_FLUSH_OFS (8)
#define I2C_FIFO_CTRL_RXFIFO_FLUSH_MASK ((uint32_t)0x00000100U)
#define I2C_FIFO_CTRL_TXFIFO_FLUSH_OFS (16)
#define I2C_FIFO_CTRL_TXFIFO_FLUSH_MASK ((uint32_t)0x00010000U)
#define I2C_RXDATA_RXDATA_OFS (0)
#define I2C_RXDATA_RXDATA_MASK ((uint32_t)0x000003FFU)
#define I2C_TXDATA_TXDATA_OFS (0)
#define I2C_TXDATA_TXDATA_MASK ((uint32_t)0x000000FFU)
#define I2C_FIFO_STS_TXFIFO_FLUSH_STS_OFS (0)
#define I2C_FIFO_STS_TXFIFO_FLUSH_STS_MASK ((uint32_t)0x00000001U)
#define I2C_FIFO_STS_RXFIFO_FLUSH_STS_OFS (1)
#define I2C_FIFO_STS_RXFIFO_FLUSH_STS_MASK ((uint32_t)0x00000002U)
#define I2C_FIFO_STS_TXFIFO_EMPTY_STS_OFS (2)
#define I2C_FIFO_STS_TXFIFO_EMPTY_STS_MASK ((uint32_t)0x00000004U)
#define I2C_FIFO_STS_TXFIFO_ALMOST_EMPTY_OFS (3)
#define I2C_FIFO_STS_TXFIFO_ALMOST_EMPTY_MASK ((uint32_t)0x00000008U)
#define I2C_FIFO_STS_TXFIFO_FULL_OFS (4)
#define I2C_FIFO_STS_TXFIFO_FULL_MASK ((uint32_t)0x00000010U)
#define I2C_FIFO_STS_RXFIFO_EMPTY_OFS (5)
#define I2C_FIFO_STS_RXFIFO_EMPTY_MASK ((uint32_t)0x00000020U)
#define I2C_FIFO_STS_RXFIFO_ALMOST_FULL_OFS (6)
#define I2C_FIFO_STS_RXFIFO_ALMOST_FULL_MASK ((uint32_t)0x00000040U)
#define I2C_FIFO_STS_RXFIFO_FULL_STS_OFS (7)
#define I2C_FIFO_STS_RXFIFO_FULL_STS_MASK ((uint32_t)0x00000080U)
#define I2C_PEC_CTRL_PEC_EN_OFS (0)
#define I2C_PEC_CTRL_PEC_EN_MASK ((uint32_t)0x00000001U)
#define I2C_PEC_STS_PEC_ERROR_OFS (0)
#define I2C_PEC_STS_PEC_ERROR_MASK ((uint32_t)0x00000001U)
#define I2C_CRC_OUT_BYTE_SLV_CRC_OUT_BYTE_OFS (0)
#define I2C_CRC_OUT_BYTE_SLV_CRC_OUT_BYTE_MASK ((uint32_t)0x000000FFU)
#define I2C_CRC_OUT_BYTE_MST_CRC_OUT_BYTE_OFS (8)
#define I2C_CRC_OUT_BYTE_MST_CRC_OUT_BYTE_MASK ((uint32_t)0x0000FF00U)
#define I2C_MASTER_CFG_MST_ENABLE_OFS (0)
#define I2C_MASTER_CFG_MST_ENABLE_MASK ((uint32_t)0x00000001U)
#define I2C_MASTER_CFG_MST_CLKSTRETCH_EN_OFS (1)
#define I2C_MASTER_CFG_MST_CLKSTRETCH_EN_MASK ((uint32_t)0x00000002U)
#define I2C_MASTER_CFG_LPBK_MODE_OFS (2)
#define I2C_MASTER_CFG_LPBK_MODE_MASK ((uint32_t)0x00000004U)
#define I2C_MASTER_CFG_MST_AUTO_ACK_EN_OFS (3)
#define I2C_MASTER_CFG_MST_AUTO_ACK_EN_MASK ((uint32_t)0x00000008U)
#define I2C_MASTER_CFG_MST_ADDR_MODE_OFS (4)
#define I2C_MASTER_CFG_MST_ADDR_MODE_MASK ((uint32_t)0x00000010U)
#define I2C_MASTER_CFG_MST_SLV_ADDR_CFG_OFS (5)
#define I2C_MASTER_CFG_MST_SLV_ADDR_CFG_MASK ((uint32_t)0x00007FE0U)
#define I2C_MASTER_CTRL_MST_CMD_VLD_OFS (0)
#define I2C_MASTER_CTRL_MST_CMD_VLD_MASK ((uint32_t)0x00000001U)
#define I2C_MASTER_CTRL_MST_BURST_LEN_OFS (8)
#define I2C_MASTER_CTRL_MST_BURST_LEN_MASK ((uint32_t)0x000FFF00U)
#define I2C_MASTER_CTRL_MST_START_OFS (24)
#define I2C_MASTER_CTRL_MST_START_MASK ((uint32_t)0x01000000U)
#define I2C_MASTER_CTRL_MST_DIR_OFS (25)
#define I2C_MASTER_CTRL_MST_DIR_MASK ((uint32_t)0x02000000U)
#define I2C_MASTER_CTRL_MST_STOP_OFS (26)
#define I2C_MASTER_CTRL_MST_STOP_MASK ((uint32_t)0x04000000U)
#define I2C_MASTER_CTRL_MST_RD_ON_TXEMPTY_OFS (27)
#define I2C_MASTER_CTRL_MST_RD_ON_TXEMPTY_MASK ((uint32_t)0x08000000U)
#define I2C_MASTER_ACK_VAL_MST_ACKVAL_OFS (0)
#define I2C_MASTER_ACK_VAL_MST_ACKVAL_MASK ((uint32_t)0x00000001U)
#define I2C_MASTER_STS_MST_BUSBSY_OFS (0)
#define I2C_MASTER_STS_MST_BUSBSY_MASK ((uint32_t)0x00000001U)
#define I2C_MASTER_STS_MST_IDLE_OFS (1)
#define I2C_MASTER_STS_MST_IDLE_MASK ((uint32_t)0x00000002U)
#define I2C_MASTER_STS_MST_ARBLOST_OFS (2)
#define I2C_MASTER_STS_MST_ARBLOST_MASK ((uint32_t)0x00000004U)
#define I2C_MASTER_STS_MST_TX_DATA_ACK_OFS (3)
#define I2C_MASTER_STS_MST_TX_DATA_ACK_MASK ((uint32_t)0x00000008U)
#define I2C_MASTER_STS_MST_TX_ADDR_ACK_OFS (4)
#define I2C_MASTER_STS_MST_TX_ADDR_ACK_MASK ((uint32_t)0x00000010U)
#define I2C_MASTER_STS_MST_TX_NACK_OFS (5)
#define I2C_MASTER_STS_MST_TX_NACK_MASK ((uint32_t)0x00000020U)
#define I2C_MASTER_STS_MST_FSM_BUSY_OFS (6)
#define I2C_MASTER_STS_MST_FSM_BUSY_MASK ((uint32_t)0x00000040U)
#define I2C_MASTER_STS_MST_WORD_CNT_OFS (7)
#define I2C_MASTER_STS_MST_WORD_CNT_MASK ((uint32_t)0x0007FF80U)
#define I2C_MASTER_MON_MST_SDA_STATE_OFS (0)
#define I2C_MASTER_MON_MST_SDA_STATE_MASK ((uint32_t)0x00000001U)
#define I2C_MASTER_MON_MST_SCL_STATE_OFS (1)
#define I2C_MASTER_MON_MST_SCL_STATE_MASK ((uint32_t)0x00000002U)
#define I2C_FSM_STATUS_MST_STATE_OFS (0)
#define I2C_FSM_STATUS_MST_STATE_MASK ((uint32_t)0x0000000FU)
#define I2C_FSM_STATUS_SLV_STATE_OFS (4)
#define I2C_FSM_STATUS_SLV_STATE_MASK ((uint32_t)0x000000F0U)
#define I2C_FSM_STATUS_SLV_QUICK_CMD_STATE_OFS (8)
#define I2C_FSM_STATUS_SLV_QUICK_CMD_STATE_MASK ((uint32_t)0x00000700U)

#endif
