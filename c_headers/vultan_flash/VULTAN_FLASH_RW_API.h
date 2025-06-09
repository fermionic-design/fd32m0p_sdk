#ifndef VULTAN_FLASH_RW_API_H
#define VULTAN_FLASH_RW_API_H

#include "VULTAN_FLASH_REGS.h"

static inline void VULTAN_FLASH_IRQ_ENABLE_SET_WRITE(VULTAN_FLASH_REGS_s * registers, uint32_t cmd_accept_irq_en_set, uint32_t cmd_success_irq_en_set, uint32_t cmd_fail_irq_en_set, uint32_t cmd_reject_irq_en_set, uint32_t read_overflow_irq_en_set) {
    registers->IRQ_ENABLE_SET.packed_w = ((cmd_accept_irq_en_set<<VULTAN_FLASH_IRQ_ENABLE_SET_CMD_ACCEPT_IRQ_EN_SET_OFS) & VULTAN_FLASH_IRQ_ENABLE_SET_CMD_ACCEPT_IRQ_EN_SET_MASK)
                                        +((cmd_success_irq_en_set<<VULTAN_FLASH_IRQ_ENABLE_SET_CMD_SUCCESS_IRQ_EN_SET_OFS) & VULTAN_FLASH_IRQ_ENABLE_SET_CMD_SUCCESS_IRQ_EN_SET_MASK)
                                        +((cmd_fail_irq_en_set<<VULTAN_FLASH_IRQ_ENABLE_SET_CMD_FAIL_IRQ_EN_SET_OFS) & VULTAN_FLASH_IRQ_ENABLE_SET_CMD_FAIL_IRQ_EN_SET_MASK)
                                        +((cmd_reject_irq_en_set<<VULTAN_FLASH_IRQ_ENABLE_SET_CMD_REJECT_IRQ_EN_SET_OFS) & VULTAN_FLASH_IRQ_ENABLE_SET_CMD_REJECT_IRQ_EN_SET_MASK)
                                        +((read_overflow_irq_en_set<<VULTAN_FLASH_IRQ_ENABLE_SET_READ_OVERFLOW_IRQ_EN_SET_OFS) & VULTAN_FLASH_IRQ_ENABLE_SET_READ_OVERFLOW_IRQ_EN_SET_MASK);
}

static inline void VULTAN_FLASH_IRQ_ENABLE_CLR_WRITE(VULTAN_FLASH_REGS_s * registers, uint32_t cmd_accept_irq_en_clr, uint32_t cmd_success_irq_en_clr, uint32_t cmd_fail_irq_en_clr, uint32_t cmd_reject_irq_en_clr, uint32_t read_overflow_irq_en_clr) {
    registers->IRQ_ENABLE_CLR.packed_w = ((cmd_accept_irq_en_clr<<VULTAN_FLASH_IRQ_ENABLE_CLR_CMD_ACCEPT_IRQ_EN_CLR_OFS) & VULTAN_FLASH_IRQ_ENABLE_CLR_CMD_ACCEPT_IRQ_EN_CLR_MASK)
                                        +((cmd_success_irq_en_clr<<VULTAN_FLASH_IRQ_ENABLE_CLR_CMD_SUCCESS_IRQ_EN_CLR_OFS) & VULTAN_FLASH_IRQ_ENABLE_CLR_CMD_SUCCESS_IRQ_EN_CLR_MASK)
                                        +((cmd_fail_irq_en_clr<<VULTAN_FLASH_IRQ_ENABLE_CLR_CMD_FAIL_IRQ_EN_CLR_OFS) & VULTAN_FLASH_IRQ_ENABLE_CLR_CMD_FAIL_IRQ_EN_CLR_MASK)
                                        +((cmd_reject_irq_en_clr<<VULTAN_FLASH_IRQ_ENABLE_CLR_CMD_REJECT_IRQ_EN_CLR_OFS) & VULTAN_FLASH_IRQ_ENABLE_CLR_CMD_REJECT_IRQ_EN_CLR_MASK)
                                        +((read_overflow_irq_en_clr<<VULTAN_FLASH_IRQ_ENABLE_CLR_READ_OVERFLOW_IRQ_EN_CLR_OFS) & VULTAN_FLASH_IRQ_ENABLE_CLR_READ_OVERFLOW_IRQ_EN_CLR_MASK);
}

static inline void VULTAN_FLASH_IRQ_STATUS_SET_WRITE(VULTAN_FLASH_REGS_s * registers, uint32_t cmd_accept_irq_sts_set, uint32_t cmd_success_irq_sts_set, uint32_t cmd_fail_irq_sts_set, uint32_t cmd_reject_irq_sts_set, uint32_t read_overflow_irq_sts_set) {
    registers->IRQ_STATUS_SET.packed_w = ((cmd_accept_irq_sts_set<<VULTAN_FLASH_IRQ_STATUS_SET_CMD_ACCEPT_IRQ_STS_SET_OFS) & VULTAN_FLASH_IRQ_STATUS_SET_CMD_ACCEPT_IRQ_STS_SET_MASK)
                                        +((cmd_success_irq_sts_set<<VULTAN_FLASH_IRQ_STATUS_SET_CMD_SUCCESS_IRQ_STS_SET_OFS) & VULTAN_FLASH_IRQ_STATUS_SET_CMD_SUCCESS_IRQ_STS_SET_MASK)
                                        +((cmd_fail_irq_sts_set<<VULTAN_FLASH_IRQ_STATUS_SET_CMD_FAIL_IRQ_STS_SET_OFS) & VULTAN_FLASH_IRQ_STATUS_SET_CMD_FAIL_IRQ_STS_SET_MASK)
                                        +((cmd_reject_irq_sts_set<<VULTAN_FLASH_IRQ_STATUS_SET_CMD_REJECT_IRQ_STS_SET_OFS) & VULTAN_FLASH_IRQ_STATUS_SET_CMD_REJECT_IRQ_STS_SET_MASK)
                                        +((read_overflow_irq_sts_set<<VULTAN_FLASH_IRQ_STATUS_SET_READ_OVERFLOW_IRQ_STS_SET_OFS) & VULTAN_FLASH_IRQ_STATUS_SET_READ_OVERFLOW_IRQ_STS_SET_MASK);
}

static inline void VULTAN_FLASH_IRQ_STATUS_CLR_WRITE(VULTAN_FLASH_REGS_s * registers, uint32_t cmd_accept_irq_sts_clr, uint32_t cmd_success_irq_sts_clr, uint32_t cmd_fail_irq_sts_clr, uint32_t cmd_reject_irq_sts_clr, uint32_t read_overflow_irq_sts_clr) {
    registers->IRQ_STATUS_CLR.packed_w = ((cmd_accept_irq_sts_clr<<VULTAN_FLASH_IRQ_STATUS_CLR_CMD_ACCEPT_IRQ_STS_CLR_OFS) & VULTAN_FLASH_IRQ_STATUS_CLR_CMD_ACCEPT_IRQ_STS_CLR_MASK)
                                        +((cmd_success_irq_sts_clr<<VULTAN_FLASH_IRQ_STATUS_CLR_CMD_SUCCESS_IRQ_STS_CLR_OFS) & VULTAN_FLASH_IRQ_STATUS_CLR_CMD_SUCCESS_IRQ_STS_CLR_MASK)
                                        +((cmd_fail_irq_sts_clr<<VULTAN_FLASH_IRQ_STATUS_CLR_CMD_FAIL_IRQ_STS_CLR_OFS) & VULTAN_FLASH_IRQ_STATUS_CLR_CMD_FAIL_IRQ_STS_CLR_MASK)
                                        +((cmd_reject_irq_sts_clr<<VULTAN_FLASH_IRQ_STATUS_CLR_CMD_REJECT_IRQ_STS_CLR_OFS) & VULTAN_FLASH_IRQ_STATUS_CLR_CMD_REJECT_IRQ_STS_CLR_MASK)
                                        +((read_overflow_irq_sts_clr<<VULTAN_FLASH_IRQ_STATUS_CLR_READ_OVERFLOW_IRQ_STS_CLR_OFS) & VULTAN_FLASH_IRQ_STATUS_CLR_READ_OVERFLOW_IRQ_STS_CLR_MASK);
}

static inline void VULTAN_FLASH_CTRL_WRITE(VULTAN_FLASH_REGS_s * registers, uint32_t cmd, uint32_t abort) {
    registers->CTRL.packed_w = ((cmd<<VULTAN_FLASH_CTRL_CMD_OFS) & VULTAN_FLASH_CTRL_CMD_MASK)
                              +((abort<<VULTAN_FLASH_CTRL_ABORT_OFS) & VULTAN_FLASH_CTRL_ABORT_MASK);
}

static inline void VULTAN_FLASH_ADDR_WRITE(VULTAN_FLASH_REGS_s * registers, uint32_t addr) {
    registers->ADDR.packed_w = ((addr<<VULTAN_FLASH_ADDR_ADDR_OFS) & VULTAN_FLASH_ADDR_ADDR_MASK);
}

static inline void VULTAN_FLASH_DATA0_WRITE(VULTAN_FLASH_REGS_s * registers, uint32_t data0) {
    registers->DATA0.packed_w = ((data0<<VULTAN_FLASH_DATA0_DATA0_OFS) & VULTAN_FLASH_DATA0_DATA0_MASK);
}


#endif
