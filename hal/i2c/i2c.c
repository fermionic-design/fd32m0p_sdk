#include "i2c.h"

/*
 *  ======== i2c_clk_cfg_set ========
 */
void i2c_clk_cfg_set(I2C_REGS_s *regs, I2C_CLK_CTRL_CLKSEL_E clksel, uint8_t clkdiv) {
    regs->CLK_CTRL.clksel = clksel;
    regs->CLK_CTRL.clkdiv = clkdiv;
}

/*
 *  ======== i2c_mst_enable ========
 */
void i2c_mst_enable(I2C_REGS_s *regs){
    regs->MASTER_CFG.mst_enable = 1;   
}

/*
 *  ======== i2c_slv_enable ========
 */
void i2c_slv_enable(I2C_REGS_s *regs){
    regs->SLAVE_CTRL.slv_enable = 1;   
}

/*
 *  ======== i2c_mst_disable ========
 */
void i2c_mst_disable(I2C_REGS_s *regs){
    regs->MASTER_CFG.mst_enable = 0;   
}

/*
 *  ======== i2c_slv_disable ========
 */
void i2c_slv_disable(I2C_REGS_s *regs){
    regs->SLAVE_CTRL.slv_enable = 0;   
}

/*
 *  ======== i2c_counter_cfg_set ========
 */
void i2c_counter_cfg_set(I2C_REGS_s *regs, i2c_counter_cfg_t *i2c_counter_cfg){
    regs->CLK_CTRL.setup_cnt = i2c_counter_cfg->setup_cnt;
    regs->MASTER_SCL_GEN.mst_scl_cnt_high_val = i2c_counter_cfg->mst_scl_cnt_high_val;
    regs->MASTER_SCL_GEN.mst_scl_cnt_low_val = i2c_counter_cfg->mst_scl_cnt_low_val;
    regs->MASTER_TIMING_CONSTRAINT.mst_scl_start_cnt = i2c_counter_cfg->mst_scl_start_cnt;
    regs->MASTER_TIMING_CONSTRAINT.mst_sda_stop_cnt = i2c_counter_cfg->mst_sda_stop_cnt;
    regs->MASTER_TIMING_CONSTRAINT.mst_stop_start_buffer_cnt = i2c_counter_cfg->mst_stop_start_buffer_cnt;
    regs->MASTER_TIMING_CONSTRAINT.mst_restart_setup_cnt = i2c_counter_cfg->mst_restart_setup_cnt;
    regs->MASTER_CLKSTRETCH_CNT.mst_max_clkstretch_cnt = i2c_counter_cfg->mst_max_clkstretch_cnt;
    regs->SLAVE_CLKSTRETCH_CNT.slv_max_clkstretch_cnt = i2c_counter_cfg->slv_max_clkstretch_cnt;
    regs->SMBUS_TIMEOUT_CNT.smbus_timeout_cnt = i2c_counter_cfg->smbus_timeout_cnt;        
}

/*
 *  ======== i2c_slv_cfg_set ========
 */
void i2c_slv_cfg_set(I2C_REGS_s *regs, i2c_slv_cfg_t *i2c_slv_cfg){
    regs->SLAVE_CTRL.slv_addr_mode = i2c_slv_cfg->slv_addr_mode;
    regs->SLAVE_CTRL.slv_low_pwr_wakeup_en = i2c_slv_cfg->slv_low_pwr_wakeup_en;
    regs->SLAVE_CTRL.slv_def_dev_addr_en = i2c_slv_cfg->slv_def_dev_addr_en;
    regs->SLAVE_CTRL.slv_alres_addr_en = i2c_slv_cfg->slv_alres_addr_en;
    regs->SLAVE_CTRL.slv_def_host_addr_en = i2c_slv_cfg->slv_def_host_addr_en;
    regs->SLAVE_CTRL.slv_txtrig_at_txmode = i2c_slv_cfg->slv_txtrig_at_txmode;
    regs->SLAVE_CTRL.slv_clkstretch_en = i2c_slv_cfg->slv_clkstretch_en;
    regs->SLAVE_CTRL.slv_gencall_en = i2c_slv_cfg->slv_gencall_en;
    regs->SLAVE_CTRL.slv_addr2_en = i2c_slv_cfg->slv_addr2_en;
    regs->SLAVE_CTRL.slv_addr2_mask = i2c_slv_cfg->slv_addr2_mask;
    regs->SLAVE_CTRL.slv_txwait_stale_fifo = i2c_slv_cfg->slv_txwait_stale_fifo;
    regs->SLAVE_CTRL.slv_txempty_intr_on_tx_req = i2c_slv_cfg->slv_txempty_intr_on_tx_req;
    regs->SLAVE_ADDR.slv_addr1 = i2c_slv_cfg->slv_addr1;
    regs->SLAVE_ADDR.slv_addr2 = i2c_slv_cfg->slv_addr2;
    regs->SLAVE_ACK_CFG.slv_auto_ack_en = i2c_slv_cfg->slv_auto_ack_en;
    regs->SLAVE_ACK_CFG.slv_addr_auto_ack_en = i2c_slv_cfg->slv_addr_auto_ack_en;
    regs->PEC_CTRL.pec_en = i2c_slv_cfg->i2c_pec_en;
    regs->FIFO_CTRL.rxfifo_en = i2c_slv_cfg->rxfifo_en;
    regs->FIFO_CTRL.txfifo_en = i2c_slv_cfg->txfifo_en;
}

/*
 *  ======== i2c_glitch_width_cfg_set ========
 */
void i2c_glitch_width_cfg_set(I2C_REGS_s *regs, uint8_t glitch_width){
    regs->GLITCH_FILTER_CFG.gf_width = glitch_width;
}

/*
 *  ======== i2c_txfifo_fill_nonblocking ========
 */
uint8_t i2c_txfifo_fill_nonblocking(I2C_REGS_s *regs, const uint8_t *buffer, uint8_t num_bytes){
    uint8_t count = 0;
    while(!(regs->FIFO_STS.txfifo_full) && (count < num_bytes)) {
        regs->TXDATA[0].packed_byte[0]= buffer[count++]; 
    }
    return count;
}

/*
 *  ======== i2c_txfifo_fill_blocking ========
 */
void i2c_txfifo_fill_blocking(I2C_REGS_s *regs, const uint8_t *buffer, uint8_t num_bytes){
    uint8_t count = 0;
    while(count < num_bytes) {
        if(!(regs->FIFO_STS.txfifo_full))
            regs->TXDATA[0].packed_byte[0]= buffer[count++]; 
    }

}

/*
 *  ======== i2c_rxfifo_drain_nonblocking ========
 */
uint8_t i2c_rxfifo_drain_nonblocking(I2C_REGS_s *regs, uint8_t *buffer, uint8_t num_bytes){
    uint8_t count = 0;
    while(!(regs->FIFO_STS.rxfifo_empty) && (count < num_bytes)) {
        buffer[count++] =  regs->RXDATA[0].packed_byte[0];
    }
    return count;
}

/*
 *  ======== i2c_rxfifo_drain_blocking ========
 */
void i2c_rxfifo_drain_blocking(I2C_REGS_s *regs, uint8_t *buffer, uint8_t num_bytes){
    uint8_t count = 0;
    while(count < num_bytes) {
        if(!(regs->FIFO_STS.rxfifo_empty))
            buffer[count++] = regs->RXDATA[0].packed_byte[0]; 
    }
}

/*
 *  ======== i2c_slv_rd_wr_sts_get ========
 */
bool i2c_slv_rd_wr_sts_get(I2C_REGS_s *regs){
    return regs->SPARE_STS.sts0;
}

/*
 *  ======== i2c_slv_sts_get ========
 */
void i2c_slv_sts_get(I2C_REGS_s *regs, i2c_slv_sts_t *i2c_slv_sts){
    i2c_slv_sts->slv_rx_req = regs->SLAVE_STS.slv_rx_req;
    i2c_slv_sts->slv_tx_req = regs->SLAVE_STS.slv_tx_req;
    i2c_slv_sts->slv_addr2_sel = regs->SLAVE_STS.slv_addr2_sel;
    i2c_slv_sts->quick_cmd_sts = regs->SLAVE_STS.quick_cmd_sts;
    i2c_slv_sts->quick_cmd_rw = regs->SLAVE_STS.quick_cmd_rw;
    i2c_slv_sts->slv_addr_match = regs->SLAVE_STS.slv_addr_match;
    i2c_slv_sts->slv_stale_txfifo = regs->SLAVE_STS.slv_stale_txfifo;
    i2c_slv_sts->slv_txmode = regs->SLAVE_STS.slv_txmode;
    i2c_slv_sts->slv_rxmode = regs->SLAVE_STS.slv_rxmode;
    i2c_slv_sts->slv_busbsy = regs->SLAVE_STS.slv_busbsy;
}

/*
 *  ======== i2c_wait_for_slv_start ========
 */
void i2c_wait_for_slv_start(I2C_REGS_s *regs){
    while(regs->INTR_EVENT.slv_start != 1){
        __asm("NOP");
    }
    I2C_INTR_EVENT_CLEAR(regs, I2C_INTR_EVENT_SLV_START_IDX);
}

/*
 *  ======== i2c_wait_for_rx_done ========
 */
void i2c_wait_for_rx_done(I2C_REGS_s *regs){
    while(regs->INTR_EVENT.rx_done != 1){
        __asm("NOP");
    }
    I2C_INTR_EVENT_CLEAR(regs, I2C_INTR_EVENT_RX_DONE_IDX);
}

/*
 *  ======== i2c_wait_for_tx_done ========
 */
void i2c_wait_for_tx_done(I2C_REGS_s *regs){
    while(regs->INTR_EVENT.tx_done != 1){
        __asm("NOP");
    }
    I2C_INTR_EVENT_CLEAR(regs, I2C_INTR_EVENT_TX_DONE_IDX);

}

/*
 *  ======== i2c_wait_for_slv_stop ========
 */
void i2c_wait_for_slv_stop(I2C_REGS_s *regs){
    while(regs->INTR_EVENT.slv_stop != 1){
        __asm("NOP");
    }
    I2C_INTR_EVENT_CLEAR(regs, I2C_INTR_EVENT_SLV_STOP_IDX);
}

/*
 *  ======== i2c_slv_ackval ========
 */
void i2c_slv_ackval(I2C_REGS_s *regs, I2C_SLAVE_BYTE_ACK_SLV_ACKVAL_E ackval){
    regs->SLAVE_BYTE_ACK.slv_ackval = ackval;
}

