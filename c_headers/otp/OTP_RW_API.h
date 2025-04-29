#include "OTP_REGS.h"

static inline void OTP_TIMER_CTRL_WRITE(OTP_REGS_s * registers, uint32_t tsetup2, uint32_t tpas, uint32_t tpah, uint32_t tprogwh) {
    registers->TIMER_CTRL.packed_w =  + ((tsetup2<<OTP_TIMER_CTRL_TSETUP2_OFS)&OTP_TIMER_CTRL_TSETUP2_MASK) + ((tpas<<OTP_TIMER_CTRL_TPAS_OFS)&OTP_TIMER_CTRL_TPAS_MASK) + ((tpah<<OTP_TIMER_CTRL_TPAH_OFS)&OTP_TIMER_CTRL_TPAH_MASK) + ((tprogwh<<OTP_TIMER_CTRL_TPROGWH_OFS)&OTP_TIMER_CTRL_TPROGWH_MASK);
}

static inline void OTP_OTP_CTRL_WRITE(OTP_REGS_s * registers, uint32_t otp_mode, uint32_t wr_start_addr, uint32_t wr_end_addr) {
    registers->OTP_CTRL.packed_w =  + ((otp_mode<<OTP_OTP_CTRL_OTP_MODE_OFS)&OTP_OTP_CTRL_OTP_MODE_MASK) + ((wr_start_addr<<OTP_OTP_CTRL_WR_START_ADDR_OFS)&OTP_OTP_CTRL_WR_START_ADDR_MASK) + ((wr_end_addr<<OTP_OTP_CTRL_WR_END_ADDR_OFS)&OTP_OTP_CTRL_WR_END_ADDR_MASK);
}

static inline void OTP_OTP_EN_WRITE(OTP_REGS_s * registers, uint32_t otp_wr_en) {
    registers->OTP_EN.packed_w =  + ((otp_wr_en<<OTP_OTP_EN_OTP_WR_EN_OFS)&OTP_OTP_EN_OTP_WR_EN_MASK);
}

static inline void OTP_OTP_STATUS_WRITE(OTP_REGS_s * registers, uint32_t otp_wr_done) {
    registers->OTP_STATUS.packed_w =  + ((otp_wr_done<<OTP_OTP_STATUS_OTP_WR_DONE_OFS)&OTP_OTP_STATUS_OTP_WR_DONE_MASK);
}

static inline void OTP_STS_WRITE(OTP_REGS_s * registers, uint32_t wr_pstate, uint32_t rd_pstate) {
    registers->STS.packed_w =  + ((wr_pstate<<OTP_STS_WR_PSTATE_OFS)&OTP_STS_WR_PSTATE_MASK) + ((rd_pstate<<OTP_STS_RD_PSTATE_OFS)&OTP_STS_RD_PSTATE_MASK);
}

static inline void OTP_OTP_RD_EN_WRITE(OTP_REGS_s * registers, uint32_t otp_rd_en) {
    registers->OTP_RD_EN.packed_w =  + ((otp_rd_en<<OTP_OTP_RD_EN_OTP_RD_EN_OFS)&OTP_OTP_RD_EN_OTP_RD_EN_MASK);
}

static inline void OTP_OTP_RD_STATUS_WRITE(OTP_REGS_s * registers, uint32_t otp_rd_done) {
    registers->OTP_RD_STATUS.packed_w =  + ((otp_rd_done<<OTP_OTP_RD_STATUS_OTP_RD_DONE_OFS)&OTP_OTP_RD_STATUS_OTP_RD_DONE_MASK);
}

