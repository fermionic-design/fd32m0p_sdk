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
    I2C_DESC_REG_s DESC;
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
    I2C_PWR_EN_REG_s PWR_EN;
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
    I2C_RST_CTRL_REG_s RST_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_RST_CTRL_u;

typedef struct I2C_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} I2C_RST_STS_REG_s;

typedef union I2C_RST_STS_u {
    I2C_RST_STS_REG_s RST_STS;
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
    I2C_CLK_CTRL_REG_s CLK_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_CLK_CTRL_u;

typedef struct I2C_DBG_CTRL_REG_s {
    unsigned int run_on_halt:1; // 
    unsigned int soft_stop:1; // 
} I2C_DBG_CTRL_REG_s;

typedef union I2C_DBG_CTRL_u {
    I2C_DBG_CTRL_REG_s DBG_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_DBG_CTRL_u;

typedef struct I2C_MASTER_SCL_GEN_REG_s {
    unsigned int mst_scl_cnt_high_val:8; // Max for 32Mhz clk 4us in standard mode
    unsigned int mst_scl_cnt_low_val:8; // Max for 32Mhz clk 4.7us in standard mode
} I2C_MASTER_SCL_GEN_REG_s;

typedef union I2C_MASTER_SCL_GEN_u {
    I2C_MASTER_SCL_GEN_REG_s MASTER_SCL_GEN;
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
    I2C_MASTER_TIMING_CONSTRAINT_REG_s MASTER_TIMING_CONSTRAINT;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_MASTER_TIMING_CONSTRAINT_u;

typedef struct I2C_MASTER_CLKSTRETCH_CNT_REG_s {
    unsigned int mst_max_clkstretch_cnt:32; // max for 32Mhz 10ms (Maximum time for which master and clk stretch)
} I2C_MASTER_CLKSTRETCH_CNT_REG_s;

typedef union I2C_MASTER_CLKSTRETCH_CNT_u {
    I2C_MASTER_CLKSTRETCH_CNT_REG_s MASTER_CLKSTRETCH_CNT;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_MASTER_CLKSTRETCH_CNT_u;

typedef struct I2C_SLAVE_CLKSTRETCH_CNT_REG_s {
    unsigned int slv_max_clkstretch_cnt:32; // Max for 32Mhz 25ms (Maximum time slave can clk stretch)
} I2C_SLAVE_CLKSTRETCH_CNT_REG_s;

typedef union I2C_SLAVE_CLKSTRETCH_CNT_u {
    I2C_SLAVE_CLKSTRETCH_CNT_REG_s SLAVE_CLKSTRETCH_CNT;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_SLAVE_CLKSTRETCH_CNT_u;

typedef struct I2C_SMBUS_TIMEOUT_CNT_REG_s {
    unsigned int smbus_timeout_cnt:32; // max for 32Mhz 35ms (Maximum time scl low allowed when external device is stretching)
} I2C_SMBUS_TIMEOUT_CNT_REG_s;

typedef union I2C_SMBUS_TIMEOUT_CNT_u {
    I2C_SMBUS_TIMEOUT_CNT_REG_s SMBUS_TIMEOUT_CNT;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_SMBUS_TIMEOUT_CNT_u;

typedef struct I2C_INTR_STS_REG_s {
    unsigned int intr_first:6; // 
} I2C_INTR_STS_REG_s;

typedef union I2C_INTR_STS_u {
    I2C_INTR_STS_REG_s INTR_STS;
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
    I2C_INTR_EVENT_REG_s INTR_EVENT;
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
    I2C_INTR_EN_0_REG_s INTR_EN_0;
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
    I2C_INTR_EN_1_REG_s INTR_EN_1;
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
    I2C_INTR_NMI_EN_0_REG_s INTR_NMI_EN_0;
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
    I2C_INTR_NMI_EN_1_REG_s INTR_NMI_EN_1;
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
    I2C_RX_DMA_EVENT_EN_0_REG_s RX_DMA_EVENT_EN_0;
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
    I2C_RX_DMA_EVENT_EN_1_REG_s RX_DMA_EVENT_EN_1;
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
    I2C_TX_DMA_EVENT_EN_0_REG_s TX_DMA_EVENT_EN_0;
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
    I2C_TX_DMA_EVENT_EN_1_REG_s TX_DMA_EVENT_EN_1;
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
    I2C_INTR_SW_SET_0_REG_s INTR_SW_SET_0;
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
    I2C_INTR_SW_SET_1_REG_s INTR_SW_SET_1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_INTR_SW_SET_1_u;

typedef struct I2C_SPARE_CTRL_REG_s {
    unsigned int cfg0:8; // 
    unsigned int cfg1:8; // 
} I2C_SPARE_CTRL_REG_s;

typedef union I2C_SPARE_CTRL_u {
    I2C_SPARE_CTRL_REG_s SPARE_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_SPARE_CTRL_u;

typedef struct I2C_SPARE_STS_REG_s {
    unsigned int sts0:8; // 
    unsigned int sts1:8; // 
} I2C_SPARE_STS_REG_s;

typedef union I2C_SPARE_STS_u {
    I2C_SPARE_STS_REG_s SPARE_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_SPARE_STS_u;

typedef struct I2C_GLITCH_FILTER_CFG_REG_s {
    unsigned int gf_width:3; // Glitch filter width
} I2C_GLITCH_FILTER_CFG_REG_s;

typedef union I2C_GLITCH_FILTER_CFG_u {
    I2C_GLITCH_FILTER_CFG_REG_s GLITCH_FILTER_CFG;
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
    I2C_SLAVE_CTRL_REG_s SLAVE_CTRL;
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
    I2C_SLAVE_ADDR_REG_s SLAVE_ADDR;
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
    I2C_SLAVE_STS_REG_s SLAVE_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_SLAVE_STS_u;

typedef struct I2C_SLAVE_ACK_CFG_REG_s {
    unsigned int slv_auto_ack_en:1; // Enables automatic ack for rx data
    unsigned int slv_addr_auto_ack_en:1; // Enables automatic ack for slv addr
} I2C_SLAVE_ACK_CFG_REG_s;

typedef union I2C_SLAVE_ACK_CFG_u {
    I2C_SLAVE_ACK_CFG_REG_s SLAVE_ACK_CFG;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_SLAVE_ACK_CFG_u;

typedef struct I2C_SLAVE_BYTE_ACK_REG_s {
    unsigned int slv_ackval:1; // Sw writes the ack val 0 or 1 in this register for addr and data
} I2C_SLAVE_BYTE_ACK_REG_s;

typedef union I2C_SLAVE_BYTE_ACK_u {
    I2C_SLAVE_BYTE_ACK_REG_s SLAVE_BYTE_ACK;
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
    I2C_FIFO_CTRL_REG_s FIFO_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_FIFO_CTRL_u;

typedef struct I2C_RXDATA_REG_s {
    unsigned int rxdata:10; // 
} I2C_RXDATA_REG_s;

typedef union I2C_RXDATA_u {
    I2C_RXDATA_REG_s RXDATA;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_RXDATA_u;

typedef struct I2C_TXDATA_REG_s {
    unsigned int txdata:8; // 
} I2C_TXDATA_REG_s;

typedef union I2C_TXDATA_u {
    I2C_TXDATA_REG_s TXDATA;
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
    I2C_FIFO_STS_REG_s FIFO_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_FIFO_STS_u;

typedef struct I2C_PEC_CTRL_REG_s {
    unsigned int pec_en:1; // 
} I2C_PEC_CTRL_REG_s;

typedef union I2C_PEC_CTRL_u {
    I2C_PEC_CTRL_REG_s PEC_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_PEC_CTRL_u;

typedef struct I2C_PEC_STS_REG_s {
    unsigned int pec_error:1; // 
} I2C_PEC_STS_REG_s;

typedef union I2C_PEC_STS_u {
    I2C_PEC_STS_REG_s PEC_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_PEC_STS_u;

typedef struct I2C_CRC_OUT_BYTE_REG_s {
    unsigned int slv_crc_out_byte:8; // 
    unsigned int mst_crc_out_byte:8; // 
} I2C_CRC_OUT_BYTE_REG_s;

typedef union I2C_CRC_OUT_BYTE_u {
    I2C_CRC_OUT_BYTE_REG_s CRC_OUT_BYTE;
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
    I2C_MASTER_CFG_REG_s MASTER_CFG;
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
    I2C_MASTER_CTRL_REG_s MASTER_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_MASTER_CTRL_u;

typedef struct I2C_MASTER_ACK_VAL_REG_s {
    unsigned int mst_ackval:1; // Ack val for last rx byte
} I2C_MASTER_ACK_VAL_REG_s;

typedef union I2C_MASTER_ACK_VAL_u {
    I2C_MASTER_ACK_VAL_REG_s MASTER_ACK_VAL;
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
    I2C_MASTER_STS_REG_s MASTER_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} I2C_MASTER_STS_u;

typedef struct I2C_MASTER_MON_REG_s {
    unsigned int mst_sda_state:1; // 
    unsigned int mst_scl_state:1; // 
} I2C_MASTER_MON_REG_s;

typedef union I2C_MASTER_MON_u {
    I2C_MASTER_MON_REG_s MASTER_MON;
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
    I2C_FSM_STATUS_REG_s FSM_STATUS;
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

#define I2C_DESC_module_type_OFS (0)
#define I2C_DESC_module_type_MASK ((uint32_t)0x000000FFU)
#define I2C_DESC_modue_subtype_OFS (8)
#define I2C_DESC_modue_subtype_MASK ((uint32_t)0x0000FF00U)
#define I2C_DESC_major_rev_OFS (16)
#define I2C_DESC_major_rev_MASK ((uint32_t)0x000F0000U)
#define I2C_DESC_minor_rev_OFS (20)
#define I2C_DESC_minor_rev_MASK ((uint32_t)0x00F00000U)
#define I2C_PWR_EN_pwr_en_OFS (0)
#define I2C_PWR_EN_pwr_en_MASK ((uint32_t)0x00000001U)
#define I2C_PWR_EN_pwr_en_key_OFS (24)
#define I2C_PWR_EN_pwr_en_key_MASK ((uint32_t)0xFF000000U)
#define I2C_RST_CTRL_rst_OFS (0)
#define I2C_RST_CTRL_rst_MASK ((uint32_t)0x00000001U)
#define I2C_RST_CTRL_rst_sts_clr_OFS (1)
#define I2C_RST_CTRL_rst_sts_clr_MASK ((uint32_t)0x00000002U)
#define I2C_RST_CTRL_rst_key_OFS (24)
#define I2C_RST_CTRL_rst_key_MASK ((uint32_t)0xFF000000U)
#define I2C_RST_STS_rst_sts_OFS (0)
#define I2C_RST_STS_rst_sts_MASK ((uint32_t)0x00000001U)
#define I2C_CLK_CTRL_en_async_clk_req_OFS (0)
#define I2C_CLK_CTRL_en_async_clk_req_MASK ((uint32_t)0x00000001U)
#define I2C_CLK_CTRL_clksel_OFS (1)
#define I2C_CLK_CTRL_clksel_MASK ((uint32_t)0x00000002U)
#define I2C_CLK_CTRL_clkdiv_OFS (2)
#define I2C_CLK_CTRL_clkdiv_MASK ((uint32_t)0x0000001CU)
#define I2C_CLK_CTRL_hold_cnt_OFS (5)
#define I2C_CLK_CTRL_hold_cnt_MASK ((uint32_t)0x000000E0U)
#define I2C_CLK_CTRL_setup_cnt_OFS (8)
#define I2C_CLK_CTRL_setup_cnt_MASK ((uint32_t)0x00000700U)
#define I2C_DBG_CTRL_run_on_halt_OFS (0)
#define I2C_DBG_CTRL_run_on_halt_MASK ((uint32_t)0x00000001U)
#define I2C_DBG_CTRL_soft_stop_OFS (1)
#define I2C_DBG_CTRL_soft_stop_MASK ((uint32_t)0x00000002U)
#define I2C_MASTER_SCL_GEN_mst_scl_cnt_high_val_OFS (0)
#define I2C_MASTER_SCL_GEN_mst_scl_cnt_high_val_MASK ((uint32_t)0x000000FFU)
#define I2C_MASTER_SCL_GEN_mst_scl_cnt_low_val_OFS (8)
#define I2C_MASTER_SCL_GEN_mst_scl_cnt_low_val_MASK ((uint32_t)0x0000FF00U)
#define I2C_MASTER_TIMING_CONSTRAINT_mst_scl_start_cnt_OFS (0)
#define I2C_MASTER_TIMING_CONSTRAINT_mst_scl_start_cnt_MASK ((uint32_t)0x000000FFU)
#define I2C_MASTER_TIMING_CONSTRAINT_mst_sda_stop_cnt_OFS (8)
#define I2C_MASTER_TIMING_CONSTRAINT_mst_sda_stop_cnt_MASK ((uint32_t)0x0000FF00U)
#define I2C_MASTER_TIMING_CONSTRAINT_mst_stop_start_buffer_cnt_OFS (16)
#define I2C_MASTER_TIMING_CONSTRAINT_mst_stop_start_buffer_cnt_MASK ((uint32_t)0x00FF0000U)
#define I2C_MASTER_TIMING_CONSTRAINT_mst_restart_setup_cnt_OFS (24)
#define I2C_MASTER_TIMING_CONSTRAINT_mst_restart_setup_cnt_MASK ((uint32_t)0xFF000000U)
#define I2C_MASTER_CLKSTRETCH_CNT_mst_max_clkstretch_cnt_OFS (0)
#define I2C_MASTER_CLKSTRETCH_CNT_mst_max_clkstretch_cnt_MASK ((uint32_t)0xFFFFFFFFU)
#define I2C_SLAVE_CLKSTRETCH_CNT_slv_max_clkstretch_cnt_OFS (0)
#define I2C_SLAVE_CLKSTRETCH_CNT_slv_max_clkstretch_cnt_MASK ((uint32_t)0xFFFFFFFFU)
#define I2C_SMBUS_TIMEOUT_CNT_smbus_timeout_cnt_OFS (0)
#define I2C_SMBUS_TIMEOUT_CNT_smbus_timeout_cnt_MASK ((uint32_t)0xFFFFFFFFU)
#define I2C_INTR_STS_intr_first_OFS (0)
#define I2C_INTR_STS_intr_first_MASK ((uint32_t)0x0000003FU)
#define I2C_INTR_EVENT_arb_lost_OFS (0)
#define I2C_INTR_EVENT_arb_lost_MASK ((uint32_t)0x00000001U)
#define I2C_INTR_EVENT_slv_gencall_intr_OFS (1)
#define I2C_INTR_EVENT_slv_gencall_intr_MASK ((uint32_t)0x00000002U)
#define I2C_INTR_EVENT_slv_start_OFS (2)
#define I2C_INTR_EVENT_slv_start_MASK ((uint32_t)0x00000004U)
#define I2C_INTR_EVENT_slv_stop_OFS (3)
#define I2C_INTR_EVENT_slv_stop_MASK ((uint32_t)0x00000008U)
#define I2C_INTR_EVENT_tx_done_OFS (4)
#define I2C_INTR_EVENT_tx_done_MASK ((uint32_t)0x00000010U)
#define I2C_INTR_EVENT_rx_done_OFS (5)
#define I2C_INTR_EVENT_rx_done_MASK ((uint32_t)0x00000020U)
#define I2C_INTR_EVENT_smbus_timeout_OFS (6)
#define I2C_INTR_EVENT_smbus_timeout_MASK ((uint32_t)0x00000040U)
#define I2C_INTR_EVENT_clkstretch_timeout_OFS (7)
#define I2C_INTR_EVENT_clkstretch_timeout_MASK ((uint32_t)0x00000080U)
#define I2C_INTR_EVENT_pec_err_OFS (8)
#define I2C_INTR_EVENT_pec_err_MASK ((uint32_t)0x00000100U)
#define I2C_INTR_EVENT_txfifo_empty_OFS (9)
#define I2C_INTR_EVENT_txfifo_empty_MASK ((uint32_t)0x00000200U)
#define I2C_INTR_EVENT_rxfifo_full_OFS (10)
#define I2C_INTR_EVENT_rxfifo_full_MASK ((uint32_t)0x00000400U)
#define I2C_INTR_EVENT_txfifo_half_full_OFS (11)
#define I2C_INTR_EVENT_txfifo_half_full_MASK ((uint32_t)0x00000800U)
#define I2C_INTR_EVENT_rxfifo_half_full_OFS (12)
#define I2C_INTR_EVENT_rxfifo_half_full_MASK ((uint32_t)0x00001000U)
#define I2C_INTR_EVENT_mst_stop_intr_OFS (13)
#define I2C_INTR_EVENT_mst_stop_intr_MASK ((uint32_t)0x00002000U)
#define I2C_INTR_EVENT_mst_start_intr_OFS (14)
#define I2C_INTR_EVENT_mst_start_intr_MASK ((uint32_t)0x00004000U)
#define I2C_INTR_EVENT_mst_nack_OFS (15)
#define I2C_INTR_EVENT_mst_nack_MASK ((uint32_t)0x00008000U)
#define I2C_INTR_EVENT_dma_done_rx_OFS (16)
#define I2C_INTR_EVENT_dma_done_rx_MASK ((uint32_t)0x00010000U)
#define I2C_INTR_EVENT_dma_done_tx_OFS (17)
#define I2C_INTR_EVENT_dma_done_tx_MASK ((uint32_t)0x00020000U)
#define I2C_INTR_EVENT_txfifo_almost_empty_intr_OFS (18)
#define I2C_INTR_EVENT_txfifo_almost_empty_intr_MASK ((uint32_t)0x00040000U)
#define I2C_INTR_EVENT_rxfifo_almost_full_intr_OFS (19)
#define I2C_INTR_EVENT_rxfifo_almost_full_intr_MASK ((uint32_t)0x00080000U)
#define I2C_INTR_EN_0_arb_lost_en_OFS (0)
#define I2C_INTR_EN_0_arb_lost_en_MASK ((uint32_t)0x00000001U)
#define I2C_INTR_EN_0_slv_gencall_intr_en_OFS (1)
#define I2C_INTR_EN_0_slv_gencall_intr_en_MASK ((uint32_t)0x00000002U)
#define I2C_INTR_EN_0_slv_start_en_OFS (2)
#define I2C_INTR_EN_0_slv_start_en_MASK ((uint32_t)0x00000004U)
#define I2C_INTR_EN_0_slv_stop_en_OFS (3)
#define I2C_INTR_EN_0_slv_stop_en_MASK ((uint32_t)0x00000008U)
#define I2C_INTR_EN_0_tx_done_en_OFS (4)
#define I2C_INTR_EN_0_tx_done_en_MASK ((uint32_t)0x00000010U)
#define I2C_INTR_EN_0_rx_done_en_OFS (5)
#define I2C_INTR_EN_0_rx_done_en_MASK ((uint32_t)0x00000020U)
#define I2C_INTR_EN_0_smbus_timeout_en_OFS (6)
#define I2C_INTR_EN_0_smbus_timeout_en_MASK ((uint32_t)0x00000040U)
#define I2C_INTR_EN_0_clkstretch_timeout_en_OFS (7)
#define I2C_INTR_EN_0_clkstretch_timeout_en_MASK ((uint32_t)0x00000080U)
#define I2C_INTR_EN_0_pec_err_en_OFS (8)
#define I2C_INTR_EN_0_pec_err_en_MASK ((uint32_t)0x00000100U)
#define I2C_INTR_EN_0_txfifo_empty_en_OFS (9)
#define I2C_INTR_EN_0_txfifo_empty_en_MASK ((uint32_t)0x00000200U)
#define I2C_INTR_EN_0_rxfifo_full_en_OFS (10)
#define I2C_INTR_EN_0_rxfifo_full_en_MASK ((uint32_t)0x00000400U)
#define I2C_INTR_EN_0_txfifo_half_full_en_OFS (11)
#define I2C_INTR_EN_0_txfifo_half_full_en_MASK ((uint32_t)0x00000800U)
#define I2C_INTR_EN_0_rxfifo_half_full_en_OFS (12)
#define I2C_INTR_EN_0_rxfifo_half_full_en_MASK ((uint32_t)0x00001000U)
#define I2C_INTR_EN_0_mst_stop_intr_en_OFS (13)
#define I2C_INTR_EN_0_mst_stop_intr_en_MASK ((uint32_t)0x00002000U)
#define I2C_INTR_EN_0_mst_start_intr_en_OFS (14)
#define I2C_INTR_EN_0_mst_start_intr_en_MASK ((uint32_t)0x00004000U)
#define I2C_INTR_EN_0_mst_nack_en_OFS (15)
#define I2C_INTR_EN_0_mst_nack_en_MASK ((uint32_t)0x00008000U)
#define I2C_INTR_EN_1_dma_done_rx_en_OFS (0)
#define I2C_INTR_EN_1_dma_done_rx_en_MASK ((uint32_t)0x00000001U)
#define I2C_INTR_EN_1_dma_done_tx_en_OFS (1)
#define I2C_INTR_EN_1_dma_done_tx_en_MASK ((uint32_t)0x00000002U)
#define I2C_INTR_EN_1_txfifo_almost_empty_intr_en_OFS (2)
#define I2C_INTR_EN_1_txfifo_almost_empty_intr_en_MASK ((uint32_t)0x00000004U)
#define I2C_INTR_EN_1_rxfifo_almost_full_intr_en_OFS (3)
#define I2C_INTR_EN_1_rxfifo_almost_full_intr_en_MASK ((uint32_t)0x00000008U)
#define I2C_INTR_NMI_EN_0_arb_lost_nmi_en_OFS (0)
#define I2C_INTR_NMI_EN_0_arb_lost_nmi_en_MASK ((uint32_t)0x00000001U)
#define I2C_INTR_NMI_EN_0_slv_gencall_intr_nmi_en_OFS (1)
#define I2C_INTR_NMI_EN_0_slv_gencall_intr_nmi_en_MASK ((uint32_t)0x00000002U)
#define I2C_INTR_NMI_EN_0_slv_start_nmi_en_OFS (2)
#define I2C_INTR_NMI_EN_0_slv_start_nmi_en_MASK ((uint32_t)0x00000004U)
#define I2C_INTR_NMI_EN_0_slv_stop_nmi_en_OFS (3)
#define I2C_INTR_NMI_EN_0_slv_stop_nmi_en_MASK ((uint32_t)0x00000008U)
#define I2C_INTR_NMI_EN_0_tx_done_nmi_en_OFS (4)
#define I2C_INTR_NMI_EN_0_tx_done_nmi_en_MASK ((uint32_t)0x00000010U)
#define I2C_INTR_NMI_EN_0_rx_done_nmi_en_OFS (5)
#define I2C_INTR_NMI_EN_0_rx_done_nmi_en_MASK ((uint32_t)0x00000020U)
#define I2C_INTR_NMI_EN_0_smbus_timeout_nmi_en_OFS (6)
#define I2C_INTR_NMI_EN_0_smbus_timeout_nmi_en_MASK ((uint32_t)0x00000040U)
#define I2C_INTR_NMI_EN_0_clkstretch_timeout_nmi_en_OFS (7)
#define I2C_INTR_NMI_EN_0_clkstretch_timeout_nmi_en_MASK ((uint32_t)0x00000080U)
#define I2C_INTR_NMI_EN_0_pec_err_nmi_en_OFS (8)
#define I2C_INTR_NMI_EN_0_pec_err_nmi_en_MASK ((uint32_t)0x00000100U)
#define I2C_INTR_NMI_EN_0_txfifo_empty_nmi_en_OFS (9)
#define I2C_INTR_NMI_EN_0_txfifo_empty_nmi_en_MASK ((uint32_t)0x00000200U)
#define I2C_INTR_NMI_EN_0_rxfifo_full_nmi_en_OFS (10)
#define I2C_INTR_NMI_EN_0_rxfifo_full_nmi_en_MASK ((uint32_t)0x00000400U)
#define I2C_INTR_NMI_EN_0_txfifo_half_full_nmi_en_OFS (11)
#define I2C_INTR_NMI_EN_0_txfifo_half_full_nmi_en_MASK ((uint32_t)0x00000800U)
#define I2C_INTR_NMI_EN_0_rxfifo_half_full_nmi_en_OFS (12)
#define I2C_INTR_NMI_EN_0_rxfifo_half_full_nmi_en_MASK ((uint32_t)0x00001000U)
#define I2C_INTR_NMI_EN_0_mst_stop_intr_nmi_en_OFS (13)
#define I2C_INTR_NMI_EN_0_mst_stop_intr_nmi_en_MASK ((uint32_t)0x00002000U)
#define I2C_INTR_NMI_EN_0_mst_start_intr_nmi_en_OFS (14)
#define I2C_INTR_NMI_EN_0_mst_start_intr_nmi_en_MASK ((uint32_t)0x00004000U)
#define I2C_INTR_NMI_EN_0_mst_nack_nmi_en_OFS (15)
#define I2C_INTR_NMI_EN_0_mst_nack_nmi_en_MASK ((uint32_t)0x00008000U)
#define I2C_INTR_NMI_EN_1_dma_done_rx_nmi_en_OFS (0)
#define I2C_INTR_NMI_EN_1_dma_done_rx_nmi_en_MASK ((uint32_t)0x00000001U)
#define I2C_INTR_NMI_EN_1_dma_done_tx_nmi_en_OFS (1)
#define I2C_INTR_NMI_EN_1_dma_done_tx_nmi_en_MASK ((uint32_t)0x00000002U)
#define I2C_INTR_NMI_EN_1_txfifo_almost_empty_intr_nmi_en_OFS (2)
#define I2C_INTR_NMI_EN_1_txfifo_almost_empty_intr_nmi_en_MASK ((uint32_t)0x00000004U)
#define I2C_INTR_NMI_EN_1_rxfifo_almost_full_intr_nmi_en_OFS (3)
#define I2C_INTR_NMI_EN_1_rxfifo_almost_full_intr_nmi_en_MASK ((uint32_t)0x00000008U)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_arb_lost_en_OFS (0)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_arb_lost_en_MASK ((uint32_t)0x00000001U)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_slv_gencall_intr_en_OFS (1)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_slv_gencall_intr_en_MASK ((uint32_t)0x00000002U)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_slv_start_en_OFS (2)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_slv_start_en_MASK ((uint32_t)0x00000004U)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_slv_stop_en_OFS (3)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_slv_stop_en_MASK ((uint32_t)0x00000008U)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_tx_done_en_OFS (4)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_tx_done_en_MASK ((uint32_t)0x00000010U)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_rx_done_en_OFS (5)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_rx_done_en_MASK ((uint32_t)0x00000020U)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_smbus_timeout_en_OFS (6)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_smbus_timeout_en_MASK ((uint32_t)0x00000040U)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_clkstretch_timeout_en_OFS (7)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_clkstretch_timeout_en_MASK ((uint32_t)0x00000080U)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_pec_err_en_OFS (8)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_pec_err_en_MASK ((uint32_t)0x00000100U)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_txfifo_empty_en_OFS (9)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_txfifo_empty_en_MASK ((uint32_t)0x00000200U)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_rxfifo_full_en_OFS (10)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_rxfifo_full_en_MASK ((uint32_t)0x00000400U)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_txfifo_half_full_en_OFS (11)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_txfifo_half_full_en_MASK ((uint32_t)0x00000800U)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_rxfifo_half_full_en_OFS (12)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_rxfifo_half_full_en_MASK ((uint32_t)0x00001000U)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_mst_stop_intr_en_OFS (13)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_mst_stop_intr_en_MASK ((uint32_t)0x00002000U)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_mst_start_intr_en_OFS (14)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_mst_start_intr_en_MASK ((uint32_t)0x00004000U)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_mst_nack_en_OFS (15)
#define I2C_RX_DMA_EVENT_EN_0_rx_dma_mst_nack_en_MASK ((uint32_t)0x00008000U)
#define I2C_RX_DMA_EVENT_EN_1_rx_dma_dma_done_rx_en_OFS (0)
#define I2C_RX_DMA_EVENT_EN_1_rx_dma_dma_done_rx_en_MASK ((uint32_t)0x00000001U)
#define I2C_RX_DMA_EVENT_EN_1_rx_dma_dma_done_tx_en_OFS (1)
#define I2C_RX_DMA_EVENT_EN_1_rx_dma_dma_done_tx_en_MASK ((uint32_t)0x00000002U)
#define I2C_RX_DMA_EVENT_EN_1_rx_dma_txfifo_almost_empty_intr_en_OFS (2)
#define I2C_RX_DMA_EVENT_EN_1_rx_dma_txfifo_almost_empty_intr_en_MASK ((uint32_t)0x00000004U)
#define I2C_RX_DMA_EVENT_EN_1_rx_dma_rxfifo_almost_full_intr_en_OFS (3)
#define I2C_RX_DMA_EVENT_EN_1_rx_dma_rxfifo_almost_full_intr_en_MASK ((uint32_t)0x00000008U)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_arb_lost_en_OFS (0)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_arb_lost_en_MASK ((uint32_t)0x00000001U)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_slv_gencall_intr_en_OFS (1)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_slv_gencall_intr_en_MASK ((uint32_t)0x00000002U)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_slv_start_en_OFS (2)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_slv_start_en_MASK ((uint32_t)0x00000004U)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_slv_stop_en_OFS (3)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_slv_stop_en_MASK ((uint32_t)0x00000008U)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_tx_done_en_OFS (4)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_tx_done_en_MASK ((uint32_t)0x00000010U)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_rx_done_en_OFS (5)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_rx_done_en_MASK ((uint32_t)0x00000020U)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_smbus_timeout_en_OFS (6)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_smbus_timeout_en_MASK ((uint32_t)0x00000040U)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_clkstretch_timeout_en_OFS (7)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_clkstretch_timeout_en_MASK ((uint32_t)0x00000080U)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_pec_err_en_OFS (8)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_pec_err_en_MASK ((uint32_t)0x00000100U)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_txfifo_empty_en_OFS (9)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_txfifo_empty_en_MASK ((uint32_t)0x00000200U)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_rxfifo_full_en_OFS (10)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_rxfifo_full_en_MASK ((uint32_t)0x00000400U)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_txfifo_half_full_en_OFS (11)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_txfifo_half_full_en_MASK ((uint32_t)0x00000800U)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_rxfifo_half_full_en_OFS (12)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_rxfifo_half_full_en_MASK ((uint32_t)0x00001000U)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_mst_stop_intr_en_OFS (13)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_mst_stop_intr_en_MASK ((uint32_t)0x00002000U)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_mst_start_intr_en_OFS (14)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_mst_start_intr_en_MASK ((uint32_t)0x00004000U)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_mst_nack_en_OFS (15)
#define I2C_TX_DMA_EVENT_EN_0_tx_dma_mst_nack_en_MASK ((uint32_t)0x00008000U)
#define I2C_TX_DMA_EVENT_EN_1_tx_dma_dma_done_rx_en_OFS (0)
#define I2C_TX_DMA_EVENT_EN_1_tx_dma_dma_done_rx_en_MASK ((uint32_t)0x00000001U)
#define I2C_TX_DMA_EVENT_EN_1_tx_dma_dma_done_tx_en_OFS (1)
#define I2C_TX_DMA_EVENT_EN_1_tx_dma_dma_done_tx_en_MASK ((uint32_t)0x00000002U)
#define I2C_TX_DMA_EVENT_EN_1_tx_dma_txfifo_almost_empty_intr_en_OFS (2)
#define I2C_TX_DMA_EVENT_EN_1_tx_dma_txfifo_almost_empty_intr_en_MASK ((uint32_t)0x00000004U)
#define I2C_TX_DMA_EVENT_EN_1_tx_dma_rxfifo_almost_full_intr_en_OFS (3)
#define I2C_TX_DMA_EVENT_EN_1_tx_dma_rxfifo_almost_full_intr_en_MASK ((uint32_t)0x00000008U)
#define I2C_INTR_SW_SET_0_arb_lost_sw_set_OFS (0)
#define I2C_INTR_SW_SET_0_arb_lost_sw_set_MASK ((uint32_t)0x00000001U)
#define I2C_INTR_SW_SET_0_slv_gencall_intr_sw_set_OFS (1)
#define I2C_INTR_SW_SET_0_slv_gencall_intr_sw_set_MASK ((uint32_t)0x00000002U)
#define I2C_INTR_SW_SET_0_slv_start_sw_set_OFS (2)
#define I2C_INTR_SW_SET_0_slv_start_sw_set_MASK ((uint32_t)0x00000004U)
#define I2C_INTR_SW_SET_0_slv_stop_sw_set_OFS (3)
#define I2C_INTR_SW_SET_0_slv_stop_sw_set_MASK ((uint32_t)0x00000008U)
#define I2C_INTR_SW_SET_0_tx_done_sw_set_OFS (4)
#define I2C_INTR_SW_SET_0_tx_done_sw_set_MASK ((uint32_t)0x00000010U)
#define I2C_INTR_SW_SET_0_rx_done_sw_set_OFS (5)
#define I2C_INTR_SW_SET_0_rx_done_sw_set_MASK ((uint32_t)0x00000020U)
#define I2C_INTR_SW_SET_0_smbus_timeout_sw_set_OFS (6)
#define I2C_INTR_SW_SET_0_smbus_timeout_sw_set_MASK ((uint32_t)0x00000040U)
#define I2C_INTR_SW_SET_0_clkstretch_timeout_sw_set_OFS (7)
#define I2C_INTR_SW_SET_0_clkstretch_timeout_sw_set_MASK ((uint32_t)0x00000080U)
#define I2C_INTR_SW_SET_0_pec_err_sw_set_OFS (8)
#define I2C_INTR_SW_SET_0_pec_err_sw_set_MASK ((uint32_t)0x00000100U)
#define I2C_INTR_SW_SET_0_txfifo_empty_sw_set_OFS (9)
#define I2C_INTR_SW_SET_0_txfifo_empty_sw_set_MASK ((uint32_t)0x00000200U)
#define I2C_INTR_SW_SET_0_rxfifo_full_sw_set_OFS (10)
#define I2C_INTR_SW_SET_0_rxfifo_full_sw_set_MASK ((uint32_t)0x00000400U)
#define I2C_INTR_SW_SET_0_txfifo_half_full_sw_set_OFS (11)
#define I2C_INTR_SW_SET_0_txfifo_half_full_sw_set_MASK ((uint32_t)0x00000800U)
#define I2C_INTR_SW_SET_0_rxfifo_half_full_sw_set_OFS (12)
#define I2C_INTR_SW_SET_0_rxfifo_half_full_sw_set_MASK ((uint32_t)0x00001000U)
#define I2C_INTR_SW_SET_0_mst_stop_intr_sw_set_OFS (13)
#define I2C_INTR_SW_SET_0_mst_stop_intr_sw_set_MASK ((uint32_t)0x00002000U)
#define I2C_INTR_SW_SET_0_mst_start_intr_sw_set_OFS (14)
#define I2C_INTR_SW_SET_0_mst_start_intr_sw_set_MASK ((uint32_t)0x00004000U)
#define I2C_INTR_SW_SET_0_mst_nack_sw_set_OFS (15)
#define I2C_INTR_SW_SET_0_mst_nack_sw_set_MASK ((uint32_t)0x00008000U)
#define I2C_INTR_SW_SET_1_dma_done_rx_sw_set_OFS (0)
#define I2C_INTR_SW_SET_1_dma_done_rx_sw_set_MASK ((uint32_t)0x00000001U)
#define I2C_INTR_SW_SET_1_dma_done_tx_sw_set_OFS (1)
#define I2C_INTR_SW_SET_1_dma_done_tx_sw_set_MASK ((uint32_t)0x00000002U)
#define I2C_INTR_SW_SET_1_txfifo_almost_empty_intr_sw_set_OFS (2)
#define I2C_INTR_SW_SET_1_txfifo_almost_empty_intr_sw_set_MASK ((uint32_t)0x00000004U)
#define I2C_INTR_SW_SET_1_rxfifo_almost_full_intr_sw_set_OFS (3)
#define I2C_INTR_SW_SET_1_rxfifo_almost_full_intr_sw_set_MASK ((uint32_t)0x00000008U)
#define I2C_SPARE_CTRL_cfg0_OFS (0)
#define I2C_SPARE_CTRL_cfg0_MASK ((uint32_t)0x000000FFU)
#define I2C_SPARE_CTRL_cfg1_OFS (8)
#define I2C_SPARE_CTRL_cfg1_MASK ((uint32_t)0x0000FF00U)
#define I2C_SPARE_STS_sts0_OFS (0)
#define I2C_SPARE_STS_sts0_MASK ((uint32_t)0x000000FFU)
#define I2C_SPARE_STS_sts1_OFS (8)
#define I2C_SPARE_STS_sts1_MASK ((uint32_t)0x0000FF00U)
#define I2C_GLITCH_FILTER_CFG_gf_width_OFS (0)
#define I2C_GLITCH_FILTER_CFG_gf_width_MASK ((uint32_t)0x00000007U)
#define I2C_SLAVE_CTRL_slv_addr_mode_OFS (0)
#define I2C_SLAVE_CTRL_slv_addr_mode_MASK ((uint32_t)0x00000001U)
#define I2C_SLAVE_CTRL_slv_low_pwr_wakeup_en_OFS (1)
#define I2C_SLAVE_CTRL_slv_low_pwr_wakeup_en_MASK ((uint32_t)0x00000002U)
#define I2C_SLAVE_CTRL_slv_def_dev_addr_en_OFS (2)
#define I2C_SLAVE_CTRL_slv_def_dev_addr_en_MASK ((uint32_t)0x00000004U)
#define I2C_SLAVE_CTRL_slv_alres_addr_en_OFS (3)
#define I2C_SLAVE_CTRL_slv_alres_addr_en_MASK ((uint32_t)0x00000008U)
#define I2C_SLAVE_CTRL_slv_def_host_addr_en_OFS (4)
#define I2C_SLAVE_CTRL_slv_def_host_addr_en_MASK ((uint32_t)0x00000010U)
#define I2C_SLAVE_CTRL_slv_txtrig_at_txmode_OFS (5)
#define I2C_SLAVE_CTRL_slv_txtrig_at_txmode_MASK ((uint32_t)0x00000020U)
#define I2C_SLAVE_CTRL_slv_clkstretch_en_OFS (6)
#define I2C_SLAVE_CTRL_slv_clkstretch_en_MASK ((uint32_t)0x00000040U)
#define I2C_SLAVE_CTRL_slv_gencall_en_OFS (7)
#define I2C_SLAVE_CTRL_slv_gencall_en_MASK ((uint32_t)0x00000080U)
#define I2C_SLAVE_CTRL_slv_enable_OFS (8)
#define I2C_SLAVE_CTRL_slv_enable_MASK ((uint32_t)0x00000100U)
#define I2C_SLAVE_CTRL_slv_addr2_en_OFS (9)
#define I2C_SLAVE_CTRL_slv_addr2_en_MASK ((uint32_t)0x00000200U)
#define I2C_SLAVE_CTRL_slv_addr2_mask_OFS (10)
#define I2C_SLAVE_CTRL_slv_addr2_mask_MASK ((uint32_t)0x0001FC00U)
#define I2C_SLAVE_CTRL_slv_txwait_stale_fifo_OFS (17)
#define I2C_SLAVE_CTRL_slv_txwait_stale_fifo_MASK ((uint32_t)0x00020000U)
#define I2C_SLAVE_CTRL_slv_txempty_intr_on_tx_req_OFS (18)
#define I2C_SLAVE_CTRL_slv_txempty_intr_on_tx_req_MASK ((uint32_t)0x00040000U)
#define I2C_SLAVE_ADDR_slv_addr1_OFS (0)
#define I2C_SLAVE_ADDR_slv_addr1_MASK ((uint32_t)0x000003FFU)
#define I2C_SLAVE_ADDR_slv_addr2_OFS (16)
#define I2C_SLAVE_ADDR_slv_addr2_MASK ((uint32_t)0x03FF0000U)
#define I2C_SLAVE_STS_slv_rx_req_OFS (0)
#define I2C_SLAVE_STS_slv_rx_req_MASK ((uint32_t)0x00000001U)
#define I2C_SLAVE_STS_slv_tx_req_OFS (1)
#define I2C_SLAVE_STS_slv_tx_req_MASK ((uint32_t)0x00000002U)
#define I2C_SLAVE_STS_slv_addr2_sel_OFS (2)
#define I2C_SLAVE_STS_slv_addr2_sel_MASK ((uint32_t)0x00000004U)
#define I2C_SLAVE_STS_quick_cmd_sts_OFS (3)
#define I2C_SLAVE_STS_quick_cmd_sts_MASK ((uint32_t)0x00000008U)
#define I2C_SLAVE_STS_quick_cmd_rw_OFS (4)
#define I2C_SLAVE_STS_quick_cmd_rw_MASK ((uint32_t)0x00000010U)
#define I2C_SLAVE_STS_slv_addr_match_OFS (5)
#define I2C_SLAVE_STS_slv_addr_match_MASK ((uint32_t)0x00000020U)
#define I2C_SLAVE_STS_slv_stale_txfifo_OFS (6)
#define I2C_SLAVE_STS_slv_stale_txfifo_MASK ((uint32_t)0x00000040U)
#define I2C_SLAVE_STS_slv_txmode_OFS (7)
#define I2C_SLAVE_STS_slv_txmode_MASK ((uint32_t)0x00000080U)
#define I2C_SLAVE_STS_slv_rxmode_OFS (8)
#define I2C_SLAVE_STS_slv_rxmode_MASK ((uint32_t)0x00000100U)
#define I2C_SLAVE_STS_slv_busbsy_OFS (9)
#define I2C_SLAVE_STS_slv_busbsy_MASK ((uint32_t)0x00000200U)
#define I2C_SLAVE_ACK_CFG_slv_auto_ack_en_OFS (0)
#define I2C_SLAVE_ACK_CFG_slv_auto_ack_en_MASK ((uint32_t)0x00000001U)
#define I2C_SLAVE_ACK_CFG_slv_addr_auto_ack_en_OFS (1)
#define I2C_SLAVE_ACK_CFG_slv_addr_auto_ack_en_MASK ((uint32_t)0x00000002U)
#define I2C_SLAVE_BYTE_ACK_slv_ackval_OFS (0)
#define I2C_SLAVE_BYTE_ACK_slv_ackval_MASK ((uint32_t)0x00000001U)
#define I2C_FIFO_CTRL_rxfifo_en_OFS (0)
#define I2C_FIFO_CTRL_rxfifo_en_MASK ((uint32_t)0x00000001U)
#define I2C_FIFO_CTRL_txfifo_en_OFS (1)
#define I2C_FIFO_CTRL_txfifo_en_MASK ((uint32_t)0x00000002U)
#define I2C_FIFO_CTRL_rxfifo_flush_OFS (8)
#define I2C_FIFO_CTRL_rxfifo_flush_MASK ((uint32_t)0x00000100U)
#define I2C_FIFO_CTRL_txfifo_flush_OFS (16)
#define I2C_FIFO_CTRL_txfifo_flush_MASK ((uint32_t)0x00010000U)
#define I2C_RXDATA_rxdata_OFS (0)
#define I2C_RXDATA_rxdata_MASK ((uint32_t)0x000003FFU)
#define I2C_TXDATA_txdata_OFS (0)
#define I2C_TXDATA_txdata_MASK ((uint32_t)0x000000FFU)
#define I2C_FIFO_STS_txfifo_flush_sts_OFS (0)
#define I2C_FIFO_STS_txfifo_flush_sts_MASK ((uint32_t)0x00000001U)
#define I2C_FIFO_STS_rxfifo_flush_sts_OFS (1)
#define I2C_FIFO_STS_rxfifo_flush_sts_MASK ((uint32_t)0x00000002U)
#define I2C_FIFO_STS_txfifo_empty_sts_OFS (2)
#define I2C_FIFO_STS_txfifo_empty_sts_MASK ((uint32_t)0x00000004U)
#define I2C_FIFO_STS_txfifo_almost_empty_OFS (3)
#define I2C_FIFO_STS_txfifo_almost_empty_MASK ((uint32_t)0x00000008U)
#define I2C_FIFO_STS_txfifo_full_OFS (4)
#define I2C_FIFO_STS_txfifo_full_MASK ((uint32_t)0x00000010U)
#define I2C_FIFO_STS_rxfifo_empty_OFS (5)
#define I2C_FIFO_STS_rxfifo_empty_MASK ((uint32_t)0x00000020U)
#define I2C_FIFO_STS_rxfifo_almost_full_OFS (6)
#define I2C_FIFO_STS_rxfifo_almost_full_MASK ((uint32_t)0x00000040U)
#define I2C_FIFO_STS_rxfifo_full_sts_OFS (7)
#define I2C_FIFO_STS_rxfifo_full_sts_MASK ((uint32_t)0x00000080U)
#define I2C_PEC_CTRL_pec_en_OFS (0)
#define I2C_PEC_CTRL_pec_en_MASK ((uint32_t)0x00000001U)
#define I2C_PEC_STS_pec_error_OFS (0)
#define I2C_PEC_STS_pec_error_MASK ((uint32_t)0x00000001U)
#define I2C_CRC_OUT_BYTE_slv_crc_out_byte_OFS (0)
#define I2C_CRC_OUT_BYTE_slv_crc_out_byte_MASK ((uint32_t)0x000000FFU)
#define I2C_CRC_OUT_BYTE_mst_crc_out_byte_OFS (8)
#define I2C_CRC_OUT_BYTE_mst_crc_out_byte_MASK ((uint32_t)0x0000FF00U)
#define I2C_MASTER_CFG_mst_enable_OFS (0)
#define I2C_MASTER_CFG_mst_enable_MASK ((uint32_t)0x00000001U)
#define I2C_MASTER_CFG_mst_clkstretch_en_OFS (1)
#define I2C_MASTER_CFG_mst_clkstretch_en_MASK ((uint32_t)0x00000002U)
#define I2C_MASTER_CFG_lpbk_mode_OFS (2)
#define I2C_MASTER_CFG_lpbk_mode_MASK ((uint32_t)0x00000004U)
#define I2C_MASTER_CFG_mst_auto_ack_en_OFS (3)
#define I2C_MASTER_CFG_mst_auto_ack_en_MASK ((uint32_t)0x00000008U)
#define I2C_MASTER_CFG_mst_addr_mode_OFS (4)
#define I2C_MASTER_CFG_mst_addr_mode_MASK ((uint32_t)0x00000010U)
#define I2C_MASTER_CFG_mst_slv_addr_cfg_OFS (5)
#define I2C_MASTER_CFG_mst_slv_addr_cfg_MASK ((uint32_t)0x00007FE0U)
#define I2C_MASTER_CTRL_mst_cmd_vld_OFS (0)
#define I2C_MASTER_CTRL_mst_cmd_vld_MASK ((uint32_t)0x00000001U)
#define I2C_MASTER_CTRL_mst_burst_len_OFS (8)
#define I2C_MASTER_CTRL_mst_burst_len_MASK ((uint32_t)0x000FFF00U)
#define I2C_MASTER_CTRL_mst_start_OFS (24)
#define I2C_MASTER_CTRL_mst_start_MASK ((uint32_t)0x01000000U)
#define I2C_MASTER_CTRL_mst_dir_OFS (25)
#define I2C_MASTER_CTRL_mst_dir_MASK ((uint32_t)0x02000000U)
#define I2C_MASTER_CTRL_mst_stop_OFS (26)
#define I2C_MASTER_CTRL_mst_stop_MASK ((uint32_t)0x04000000U)
#define I2C_MASTER_CTRL_mst_rd_on_txempty_OFS (27)
#define I2C_MASTER_CTRL_mst_rd_on_txempty_MASK ((uint32_t)0x08000000U)
#define I2C_MASTER_ACK_VAL_mst_ackval_OFS (0)
#define I2C_MASTER_ACK_VAL_mst_ackval_MASK ((uint32_t)0x00000001U)
#define I2C_MASTER_STS_mst_busbsy_OFS (0)
#define I2C_MASTER_STS_mst_busbsy_MASK ((uint32_t)0x00000001U)
#define I2C_MASTER_STS_mst_idle_OFS (1)
#define I2C_MASTER_STS_mst_idle_MASK ((uint32_t)0x00000002U)
#define I2C_MASTER_STS_mst_arblost_OFS (2)
#define I2C_MASTER_STS_mst_arblost_MASK ((uint32_t)0x00000004U)
#define I2C_MASTER_STS_mst_tx_data_ack_OFS (3)
#define I2C_MASTER_STS_mst_tx_data_ack_MASK ((uint32_t)0x00000008U)
#define I2C_MASTER_STS_mst_tx_addr_ack_OFS (4)
#define I2C_MASTER_STS_mst_tx_addr_ack_MASK ((uint32_t)0x00000010U)
#define I2C_MASTER_STS_mst_tx_nack_OFS (5)
#define I2C_MASTER_STS_mst_tx_nack_MASK ((uint32_t)0x00000020U)
#define I2C_MASTER_STS_mst_fsm_busy_OFS (6)
#define I2C_MASTER_STS_mst_fsm_busy_MASK ((uint32_t)0x00000040U)
#define I2C_MASTER_STS_mst_word_cnt_OFS (7)
#define I2C_MASTER_STS_mst_word_cnt_MASK ((uint32_t)0x0007FF80U)
#define I2C_MASTER_MON_mst_sda_state_OFS (0)
#define I2C_MASTER_MON_mst_sda_state_MASK ((uint32_t)0x00000001U)
#define I2C_MASTER_MON_mst_scl_state_OFS (1)
#define I2C_MASTER_MON_mst_scl_state_MASK ((uint32_t)0x00000002U)
#define I2C_FSM_STATUS_mst_state_OFS (0)
#define I2C_FSM_STATUS_mst_state_MASK ((uint32_t)0x0000000FU)
#define I2C_FSM_STATUS_slv_state_OFS (4)
#define I2C_FSM_STATUS_slv_state_MASK ((uint32_t)0x000000F0U)
#define I2C_FSM_STATUS_slv_quick_cmd_state_OFS (8)
#define I2C_FSM_STATUS_slv_quick_cmd_state_MASK ((uint32_t)0x00000700U)
#endif
