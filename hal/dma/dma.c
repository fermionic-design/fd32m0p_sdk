#include "dma.h"

/*
 *  ======== dma_init ========
 */
void dma_init(PL230_REGS_s *PL230_REGS, uint32_t base_ptr_address) {
    // Waiting for current transcation to end
    while(is_dma_idle(PL230_REGS));
    // Disable DMA controller for initialization
    PL230_REGS->DMA_CFG.master_enable = 0;
    // Set DMA data structure address
    PL230_REGS->CTRL_BASE_PTR.packed_w = base_ptr_address;
    // Disable all channels
    PL230_REGS->CHNL_ENABLE_CLR.packed_w = PL230_CHNL_ENABLE_CLR_CHNL_ENABLE_CLR_MASK;
    // Enable DMA controller
    PL230_REGS->DMA_CFG.master_enable = 1;

}
/*
 *  ========  dma_channel_cfg ========
 */
void dma_channel_cfg(DMA_REGS_s *DMA_REGS, PL230_REGS_s *PL230_REGS, dma_channel_cfg_t *dma_channel_cfg,uint8_t channel) {
    uint32_t src_end_pointer;
    uint32_t dst_end_pointer;

    if(dma_channel_cfg->src_incr==3) {
        src_end_pointer = dma_channel_cfg->src_addr;
    }
    else {
        src_end_pointer = dma_channel_cfg->src_addr + ((1<<dma_channel_cfg->src_size)*dma_channel_cfg->total_transaction);
    }
    if(dma_channel_cfg->dst_incr==3) {
        dst_end_pointer = dma_channel_cfg->dst_addr;
    }
    else {
        dst_end_pointer = dma_channel_cfg->dst_addr + ((1<<dma_channel_cfg->dst_size)*dma_channel_cfg->total_transaction);
    }

    // Reading the channel configuration based pointer
    uint32_t base_addr = PL230_REGS->CTRL_BASE_PTR.packed_w;  
    // Calculating the pointer to the required channel configuration 
    volatile dma_mem_channel_cfg_t *ch = ((dma_mem_channel_cfg_t *)base_addr) + channel + (dma_channel_cfg->alternate_cfg_sel ? 16 : 0);
    volatile DMA_REPEATED_TRANSFER_CHNL_0_u *repeated_transfer_channels = (volatile DMA_REPEATED_TRANSFER_CHNL_0_u *) &DMA_REGS->REPEATED_TRANSFER_CHNL_0;
    // Updating channel configuration 
    ch->rsp = src_end_pointer;
    ch->rdp = dst_end_pointer;
    ch->ctrl.cycle_ctrl = dma_channel_cfg->transfer_type;
    ch->ctrl.next_useburst = dma_channel_cfg->next_useburst;
    ch->ctrl.n_minus_1 = dma_channel_cfg->total_transaction;
    ch->ctrl.r_power = dma_channel_cfg->r_power;
    ch->ctrl.src_prot_ctrl = dma_channel_cfg->src_prot_ctrl;
    ch->ctrl.dst_prot_ctrl = dma_channel_cfg->dst_prot_ctrl;
    ch->ctrl.src_size = dma_channel_cfg->src_size;
    ch->ctrl.src_inc = dma_channel_cfg->src_incr;  
    ch->ctrl.dst_size = dma_channel_cfg->dst_size;
    ch->ctrl.dst_inc = dma_channel_cfg->dst_incr;
    // Fill configuration
    if(dma_channel_cfg->fill_en) {
        DMA_REGS->FILL_MODE_CFG.fill_mode_chnl_no = channel; 
        DMA_REGS->FILL_MODE_CFG.fill_mode_init_val = dma_channel_cfg->fill_init_value; 
        DMA_REGS->FILL_MODE_CFG.fill_mode_incr_val = dma_channel_cfg->fill_incr_value;
        DMA_REGS->FILL_MODE.fill_mode_en = dma_channel_cfg->fill_en;
    }
    // Stride configuration
    if(dma_channel_cfg->stride_en) {
        DMA_REGS->STRIDE_MODE_CFG_0.stride_mode_chnl_no = channel;
        DMA_REGS->STRIDE_MODE_CFG_0.src_stride_val = dma_channel_cfg->stride_src_incr;
        DMA_REGS->STRIDE_MODE_CFG_0.dst_stride_val = dma_channel_cfg->stride_dst_incr;
        DMA_REGS->STRIDE_MODE_CFG_0.src_inc = dma_channel_cfg->src_size;
        DMA_REGS->STRIDE_MODE_CFG_0.dst_inc = dma_channel_cfg->dst_size;
        DMA_REGS->STRIDE_MODE_CFG_1.stride_mode_src_base_addr = src_end_pointer;
        DMA_REGS->STRIDE_MODE_CFG_2.stride_mode_dst_base_addr = dst_end_pointer;
        DMA_REGS->STRIDE_MODE.stride_mode_en = dma_channel_cfg->stride_en;
        ch->rsp = DMA_STRIDE_MODE_LOOKUP_SRC_ADDR;
        ch->rdp = DMA_STRIDE_MODE_LOOKUP_DST_ADDR;
    }
    // Reapeated Transfer
    if(dma_channel_cfg->repeated_transfer_en) {
        repeated_transfer_channels[channel].packed_w = dma_channel_cfg->total_transaction;
        DMA_REGS->REPEATED_TRANSFER_ALTERNATE_SEL.packed_w = dma_channel_cfg->alternate_cfg_sel;
        DMA_REGS->REPEATED_TRANSFER_EN.rptd_trnsfr_en = (1 << channel);
        DMA_REGS->CFG_0.ctrl_base_ptr = PL230_REGS->CTRL_BASE_PTR.packed_w;
        DMA_REGS->CFG_1.alt_ctrl_base_ptr = PL230_REGS->ALT_CTRL_BASE_PTR.packed_w;
    }
}
/*
 *  ========  dma_channel_en_set ========
 */
void dma_channel_en_set(PL230_REGS_s *PL230_REGS, uint8_t channel) {
    PL230_REGS->CHNL_ENABLE_SET.packed_w = (1 << channel); 
}
/*
 *  ========  dma_channel_en_get ========
 */
uint8_t dma_channel_en_get(PL230_REGS_s *PL230_REGS, uint8_t channel) {
    return (PL230_REGS->CHNL_ENABLE_SET.packed_w >> channel) & 0x1; 
}
/*
 *  ========  dma_channel_sw_trig ========
 */
void dma_channel_sw_trig(PL230_REGS_s *PL230_REGS, uint8_t channel) {
    PL230_REGS->CHNL_SW_REQUEST.packed_w = (1 << channel);
}
/*
 *  ========  dma_channel_priority_cfg ========
 */
void dma_channel_priority_cfg(DMA_REGS_s *DMA_REGS, uint8_t mode, uint16_t round_robin_mask) {
    // If round robin arbitration is enabled 
    if(mode==1) {
        DMA_REGS->ARBITRATION_MASK.dma_rr_mask = round_robin_mask;
        DMA_REGS->ARBITRATION.dma_rr_en = 1;
    }
    // Update Pl230 priority register
    else {
        DMA_REGS->ARBITRATION_MASK.dma_rr_mask = 0;
        DMA_REGS->ARBITRATION.dma_rr_en = 0;
    }
}
/*
 *  ========  is_dma_idle ========
 */
uint8_t is_dma_idle(PL230_REGS_s *PL230_REGS) {
    uint32_t current_state;
    current_state = PL230_REGS->DMA_STATUS.state;
    if(((current_state==PL230_DMA_STATUS_STATE_IDLE) || (current_state==PL230_DMA_STATUS_STATE_STALLED) || (current_state== PL230_DMA_STATUS_STATE_DONE ))) {
        return 0;
    }
    else{
        return 1;
    }
}
/*
 *  ========  dma_channel_en_clr ========
 */
void dma_channel_en_clr(PL230_REGS_s *PL230_REGS, uint8_t channel) {
    PL230_REGS->CHNL_ENABLE_CLR.packed_w = (1 << channel); 
}
