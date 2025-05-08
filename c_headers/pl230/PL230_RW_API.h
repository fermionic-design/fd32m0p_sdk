#include "PL230_REGS.h"

static inline void PL230_DMA_CFG_WRITE(PL230_REGS_s * registers, uint32_t master_enable, uint32_t chnl_prot_ctrl) {
    registers->DMA_CFG.packed_w = ((master_enable<<PL230_DMA_CFG_MASTER_ENABLE_OFS) & PL230_DMA_CFG_MASTER_ENABLE_MASK)
                                 +((chnl_prot_ctrl<<PL230_DMA_CFG_CHNL_PROT_CTRL_OFS) & PL230_DMA_CFG_CHNL_PROT_CTRL_MASK);
}

static inline void PL230_CTRL_BASE_PTR_WRITE(PL230_REGS_s * registers, uint32_t control_base_ptr) {
    registers->CTRL_BASE_PTR.packed_w = ((control_base_ptr<<PL230_CTRL_BASE_PTR_CONTROL_BASE_PTR_OFS) & PL230_CTRL_BASE_PTR_CONTROL_BASE_PTR_MASK);
}

static inline void PL230_CHNL_SW_REQUEST_WRITE(PL230_REGS_s * registers, uint32_t chnl_sw_request) {
    registers->CHNL_SW_REQUEST.packed_w = ((chnl_sw_request<<PL230_CHNL_SW_REQUEST_CHNL_SW_REQUEST_OFS) & PL230_CHNL_SW_REQUEST_CHNL_SW_REQUEST_MASK);
}

static inline void PL230_CHNL_USEBURST_SET_WRITE(PL230_REGS_s * registers, uint32_t chnl_useburst_set) {
    registers->CHNL_USEBURST_SET.packed_w = ((chnl_useburst_set<<PL230_CHNL_USEBURST_SET_CHNL_USEBURST_SET_OFS) & PL230_CHNL_USEBURST_SET_CHNL_USEBURST_SET_MASK);
}

static inline void PL230_CHNL_USEBURST_CLR_WRITE(PL230_REGS_s * registers, uint32_t chnl_useburst_clr) {
    registers->CHNL_USEBURST_CLR.packed_w = ((chnl_useburst_clr<<PL230_CHNL_USEBURST_CLR_CHNL_USEBURST_CLR_OFS) & PL230_CHNL_USEBURST_CLR_CHNL_USEBURST_CLR_MASK);
}

static inline void PL230_CHNL_REQ_MASK_SET_WRITE(PL230_REGS_s * registers, uint32_t chnl_req_mask_set) {
    registers->CHNL_REQ_MASK_SET.packed_w = ((chnl_req_mask_set<<PL230_CHNL_REQ_MASK_SET_CHNL_REQ_MASK_SET_OFS) & PL230_CHNL_REQ_MASK_SET_CHNL_REQ_MASK_SET_MASK);
}

static inline void PL230_CHNL_REQ_MASK_CLR_WRITE(PL230_REGS_s * registers, uint32_t chnl_req_mask_clr) {
    registers->CHNL_REQ_MASK_CLR.packed_w = ((chnl_req_mask_clr<<PL230_CHNL_REQ_MASK_CLR_CHNL_REQ_MASK_CLR_OFS) & PL230_CHNL_REQ_MASK_CLR_CHNL_REQ_MASK_CLR_MASK);
}

static inline void PL230_CHNL_ENABLE_SET_WRITE(PL230_REGS_s * registers, uint32_t chnl_enable_set) {
    registers->CHNL_ENABLE_SET.packed_w = ((chnl_enable_set<<PL230_CHNL_ENABLE_SET_CHNL_ENABLE_SET_OFS) & PL230_CHNL_ENABLE_SET_CHNL_ENABLE_SET_MASK);
}

static inline void PL230_CHNL_ENABLE_CLR_WRITE(PL230_REGS_s * registers, uint32_t chnl_enable_clr) {
    registers->CHNL_ENABLE_CLR.packed_w = ((chnl_enable_clr<<PL230_CHNL_ENABLE_CLR_CHNL_ENABLE_CLR_OFS) & PL230_CHNL_ENABLE_CLR_CHNL_ENABLE_CLR_MASK);
}

static inline void PL230_CHNL_PRI_ALT_SET_WRITE(PL230_REGS_s * registers, uint32_t chnl_pri_alt_set) {
    registers->CHNL_PRI_ALT_SET.packed_w = ((chnl_pri_alt_set<<PL230_CHNL_PRI_ALT_SET_CHNL_PRI_ALT_SET_OFS) & PL230_CHNL_PRI_ALT_SET_CHNL_PRI_ALT_SET_MASK);
}

static inline void PL230_CHNL_PRI_ALT_CLR_WRITE(PL230_REGS_s * registers, uint32_t chnl_pri_alt_clr) {
    registers->CHNL_PRI_ALT_CLR.packed_w = ((chnl_pri_alt_clr<<PL230_CHNL_PRI_ALT_CLR_CHNL_PRI_ALT_CLR_OFS) & PL230_CHNL_PRI_ALT_CLR_CHNL_PRI_ALT_CLR_MASK);
}

static inline void PL230_CHNL_PRIORITY_SET_WRITE(PL230_REGS_s * registers, uint32_t chnl_priority_set) {
    registers->CHNL_PRIORITY_SET.packed_w = ((chnl_priority_set<<PL230_CHNL_PRIORITY_SET_CHNL_PRIORITY_SET_OFS) & PL230_CHNL_PRIORITY_SET_CHNL_PRIORITY_SET_MASK);
}

static inline void PL230_CHNL_PRIORITY_CLR_WRITE(PL230_REGS_s * registers, uint32_t chnl_priority_clr) {
    registers->CHNL_PRIORITY_CLR.packed_w = ((chnl_priority_clr<<PL230_CHNL_PRIORITY_CLR_CHNL_PRIORITY_CLR_OFS) & PL230_CHNL_PRIORITY_CLR_CHNL_PRIORITY_CLR_MASK);
}

static inline void PL230_ERR_CLR_WRITE(PL230_REGS_s * registers, uint32_t err_clr) {
    registers->ERR_CLR.packed_w = ((err_clr<<PL230_ERR_CLR_ERR_CLR_OFS) & PL230_ERR_CLR_ERR_CLR_MASK);
}

