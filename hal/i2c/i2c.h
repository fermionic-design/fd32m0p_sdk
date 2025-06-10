#ifndef HAL_I2C_H
#define HAL_I2C_H

#include "I2C_REGS.h"
#include "I2C_RW_API.h"
#include <stdbool.h>

/*!
 *  @brief  I2C Counter Configuration struct 
 *
 *  @note   This struct contains parameters for initializing I2C counters 
 *          which takes care of SCL/SDA widths, clock stretch timings, start/stop/restart width
 *          smbus timeout time
 */
typedef struct i2c_counter_cfg {
    uint8_t     setup_cnt;
    uint8_t     mst_scl_cnt_high_val;
    uint8_t     mst_scl_cnt_low_val;
    uint8_t     mst_scl_start_cnt;
    uint8_t     mst_sda_stop_cnt;
    uint8_t     mst_stop_start_buffer_cnt;
    uint8_t     mst_restart_setup_cnt;
    uint32_t    mst_max_clkstretch_cnt;
    uint32_t    slv_max_clkstretch_cnt;
    uint32_t    smbus_timeout_cnt;
} i2c_counter_cfg_t;

/*!
 *  @brief  Default Values for I2C Counter Configurations
 */
#define I2C_COUNTER_CFG_DEFAULT_100Khz {                                       \
    .setup_cnt = 7                  ,\
    .mst_scl_cnt_high_val = 64      ,\
    .mst_scl_cnt_low_val = 78       ,\
    .mst_scl_start_cnt = 66         ,\
    .mst_sda_stop_cnt = 66          ,\
    .mst_stop_start_buffer_cnt = 78 ,\
    .mst_restart_setup_cnt = 78     ,\
    .mst_max_clkstretch_cnt = 320000   ,\
    .slv_max_clkstretch_cnt = 320000   ,\
    .smbus_timeout_cnt = 320000        \
}

/*!
 *  @brief  I2C Configuration in Slave Mode 
 *
 *  @note   This struct contains parameters required as I2C configurations when its in
 *          slave mode
 */
typedef struct i2c_slv_cfg {
    I2C_SLAVE_CTRL_SLV_ADDR_MODE_E              slv_addr_mode;
    bool                                        slv_low_pwr_wakeup_en;
    bool                                        slv_def_dev_addr_en;
    bool                                        slv_alres_addr_en;
    bool                                        slv_def_host_addr_en;
    bool                                        slv_txtrig_at_txmode;
    bool                                        slv_clkstretch_en;
    bool                                        slv_gencall_en;
    bool                                        slv_addr2_en;
    uint8_t                                     slv_addr2_mask;
    I2C_SLAVE_CTRL_SLV_TXWAIT_STALE_FIFO_E      slv_txwait_stale_fifo;
    I2C_SLAVE_CTRL_SLV_TXEMPTY_INTR_ON_TX_REQ_E slv_txempty_intr_on_tx_req;
    uint16_t                                    slv_addr1;
    uint16_t                                    slv_addr2;
    bool                                        slv_auto_ack_en;
    bool                                        slv_addr_auto_ack_en;
    bool                                        i2c_pec_en;
    bool                                        rxfifo_en;
    bool                                        txfifo_en;
} i2c_slv_cfg_t;

/*!
 *  @brief  Default Values for I2C Slave Configurations
 */
#define I2C_SLAVE_CFG_DEFAULT {                                       \
    .slv_addr_mode = I2C_SLAVE_CTRL_SLV_ADDR_MODE_7_BIT ,\
    .slv_low_pwr_wakeup_en = 1                                                           ,\
    .slv_def_dev_addr_en = 0                                                             ,\
    .slv_alres_addr_en = 0                                                               ,\
    .slv_def_host_addr_en = 0                                                            ,\
    .slv_txtrig_at_txmode = 0                                                            ,\
    .slv_clkstretch_en = 1                                                               ,\
    .slv_gencall_en = 0                                                                  ,\
    .slv_addr2_en = 0                                                                    ,\
    .slv_addr2_mask = 0                                                                  ,\
    .slv_txwait_stale_fifo = I2C_SLAVE_CTRL_SLV_TXWAIT_STALE_FIFO_NOT_TREATED_AS_EMPTY   ,\
    .slv_txempty_intr_on_tx_req = I2C_SLAVE_CTRL_SLV_TXEMPTY_INTR_ON_TX_REQ_AGNOSTIC     ,\
    .slv_addr1 = 0x55                                                                    ,\
    .slv_addr2 = 0x52                                                                    ,\
    .slv_auto_ack_en = 0                                                                 ,\
    .slv_addr_auto_ack_en = 0                                                            ,\
    .i2c_pec_en = 0                                                                      ,\
    .rxfifo_en = 0                                                                       ,\
    .txfifo_en = 0                                                                        \
}

/*!
 *  @brief  I2C Slave status register struct 
 *
 *  @note   This struct contains Read only register data, for I2C Slave 
 */
typedef struct i2c_slv_sts {
    bool    slv_rx_req;
    bool    slv_tx_req;
    bool    slv_addr2_sel;
    bool    quick_cmd_sts;
    bool    quick_cmd_rw;
    bool    slv_addr_match;
    bool    slv_stale_txfifo;
    bool    slv_txmode;
    bool    slv_rxmode;
    bool    slv_busbsy;
} i2c_slv_sts_t;


/**
 * @brief	This function updates the clock settings used in I2C  
 *
 * @param   regs : pointer to the i2c register space
 * @param   clksel : Enum for i2c clock select 
 * @param   clkdiv : Value for the clock divider 
 *
 * @retval  void
 */
void i2c_clk_cfg_set(I2C_REGS_s *regs, I2C_CLK_CTRL_CLKSEL_E clksel, uint8_t clkdiv);

/**
 * @brief	This function enables I2C master
 *
 * @param   regs : pointer to the i2c register space
 *
 * @retval  void
 */
void i2c_mst_enable(I2C_REGS_s *regs);

/**
 * @brief	This function enables I2C slave
 *
 * @param   regs : pointer to the i2c register space
 *
 * @retval  void
 */
void i2c_slv_enable(I2C_REGS_s *regs);

/**
 * @brief	This function disables I2C master   
 *
 * @param   regs : pointer to the i2c register space
 *
 * @retval  void
 */
void i2c_mst_disable(I2C_REGS_s *regs);

/**
 * @brief	This function disables I2C slave    
 *
 * @param   regs : pointer to the i2c register space
 *
 * @retval  void
 */
void i2c_slv_disable(I2C_REGS_s *regs);

/**
 * @brief	This function configures the counter config register required for I2C Master/Slave   
 *
 * @param   regs : pointer to the i2c register space
 * @param   i2c_counter_cfg : pointer to the struct containing i2c counter config 
 *
 * @retval  void
 */
void i2c_counter_cfg_set(I2C_REGS_s *regs, i2c_counter_cfg_t *i2c_counter_cfg);

/**
 * @brief	This function configures I2C slave   
 *
 * @param   regs : pointer to the i2c register space
 * @param   i2c_slv_cfg : pointer to the struct containing i2c slave config 
 *
 * @retval  void
 */
void i2c_slv_cfg_set(I2C_REGS_s *regs, i2c_slv_cfg_t *i2c_slv_cfg);

/**
 * @brief	This function sets the glitch width for the glitch filter   
 *
 * @param   regs : pointer to the i2c register space
 * @param   glitch_width : glitch width value to be programmed 
 *
 * @retval  void
 */
void i2c_glitch_width_cfg_set(I2C_REGS_s *regs, uint8_t glitch_width);

/**
 * @brief	This function pushes bytes into TX FIFO (Non-blocking)    
 *
 * @param   regs : pointer to the i2c register space
 * @param   buffer : pointer to the buffer space containing the data to pushed into the tx fifo
 * @param   num_bytes : number of bytes to be written into the tx fifo 
 *
 * @retval The number of bytes written into the TX FIFO 
 */
uint8_t i2c_txfifo_fill_nonblocking(I2C_REGS_s *regs, const uint8_t *buffer, uint8_t num_bytes);

/**
 * @brief	This function pushes bytes into TX FIFO (Blocking)
 *
 * @param   regs : pointer to the i2c register space
 * @param   buffer : pointer to the buffer space containing the data to pushed into the tx fifo
 * @param   num_bytes : number of bytes to be written into the tx fifo 
 *
 * @retval  void
 */
void i2c_txfifo_fill_blocking(I2C_REGS_s *regs, const uint8_t *buffer, uint8_t num_bytes);

/**
 * @brief	This function pops bytes from the RX FIFO (Non-blocking)  
 *
 * @param   regs : pointer to the i2c register space
 * @param   buffer : pointer to the buffer space containing the data to be copied to from the RX FIFO
 * @param   num_bytes : number of bytes to be written into the tx fifo 
 *
 * @retval  The number of bytes read from the RX FIFO
 */
uint8_t i2c_rxfifo_drain_nonblocking(I2C_REGS_s *regs, uint8_t *buffer, uint8_t num_bytes);

/**
 * @brief	This function pops bytes from the RX FIFO (Blocking)   
 *
 * @param   regs : pointer to the i2c register space
 * @param   buffer : pointer to the buffer space containing the data to be copied to from the RX FIFO
 * @param   num_bytes : number of bytes to be written into the tx fifo 
 *
 * @retval  void
 */
void i2c_rxfifo_drain_blocking(I2C_REGS_s *regs, uint8_t *buffer, uint8_t num_bytes);

/**
 * @brief	This function reads the status register which contains wheather the slave is in read or write mode 
 *
 * @param   regs : pointer to the i2c register space
 *
 * @retval  Returns 0 for write transaction and 1 for read transaction
 */
bool i2c_slv_rd_wr_sts_get(I2C_REGS_s *regs);

/**
 * @brief	This function reads all the status registers related to I2C Slave   
 *
 * @param   regs : pointer to the i2c register space
 * @param   i2c_slv_sts : pointer to the struct which will contain the register values read
 *
 * @retval  void
 */
void i2c_slv_sts_get(I2C_REGS_s *regs, i2c_slv_sts_t *i2c_slv_sts);

/**
 * @brief	This function is blocking. It waits until I2C slave recieves a start from the Master 
 *
 * @param   regs : pointer to the i2c register space
 *
 * @retval  void
 */
void i2c_wait_for_slv_start(I2C_REGS_s *regs);

/**
 * @brief	This function is blocking. It waits until I2C slave recieves a byte from the Master  
 *
 * @param   regs : pointer to the i2c register space
 *
 * @retval  void
 */
void i2c_wait_for_rx_done(I2C_REGS_s *regs);

/**
 * @brief	This function is blocking. It waits until I2C slave sends a byte to the Master   
 *
 * @param   regs : pointer to the i2c register space
 *
 * @retval  void
 */
void i2c_wait_for_tx_done(I2C_REGS_s *regs);

/**
 * @brief	This function polls stop bit sent by the master 
 *
 * @param   regs : pointer to the i2c register space
 *
 * @retval  void
 */
void i2c_wait_for_slv_stop(I2C_REGS_s *regs);

/**
 * @brief	This function controls whether the slave sends a ACK or a NACK 
 *
 * @param   regs : pointer to the i2c register space
 *
 * @retval  void
 */
void i2c_slv_ackval(I2C_REGS_s *regs, I2C_SLAVE_BYTE_ACK_SLV_ACKVAL_E ackval);

#endif
