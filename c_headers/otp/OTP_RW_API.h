#include "OTP_REGS.h"

static inline void OTP_TIMER_CTRL_WRITE(OTP_REGS_s * registers, uint32_t tsetup2, uint32_t tpas, uint32_t tpah, uint32_t tprogwh) {
    registers->TIMER_CTRL.packed_w =  + ((tsetup2<<OTP_TIMER_CTRL_tsetup2_OFS)&OTP_TIMER_CTRL_tsetup2_MASK) + ((tpas<<OTP_TIMER_CTRL_tpas_OFS)&OTP_TIMER_CTRL_tpas_MASK) + ((tpah<<OTP_TIMER_CTRL_tpah_OFS)&OTP_TIMER_CTRL_tpah_MASK) + ((tprogwh<<OTP_TIMER_CTRL_tprogwh_OFS)&OTP_TIMER_CTRL_tprogwh_MASK);
}

static inline void OTP_OTP_CTRL_WRITE(OTP_REGS_s * registers, uint32_t otp_mode, uint32_t wr_start_addr, uint32_t wr_end_addr) {
    registers->OTP_CTRL.packed_w =  + ((otp_mode<<OTP_OTP_CTRL_otp_mode_OFS)&OTP_OTP_CTRL_otp_mode_MASK) + ((wr_start_addr<<OTP_OTP_CTRL_wr_start_addr_OFS)&OTP_OTP_CTRL_wr_start_addr_MASK) + ((wr_end_addr<<OTP_OTP_CTRL_wr_end_addr_OFS)&OTP_OTP_CTRL_wr_end_addr_MASK);
}

static inline void OTP_OTP_EN_WRITE(OTP_REGS_s * registers, uint32_t otp_wr_en) {
    registers->OTP_EN.packed_w =  + ((otp_wr_en<<OTP_OTP_EN_otp_wr_en_OFS)&OTP_OTP_EN_otp_wr_en_MASK);
}

static inline void OTP_OTP_STATUS_WRITE(OTP_REGS_s * registers, uint32_t otp_wr_done) {
    registers->OTP_STATUS.packed_w =  + ((otp_wr_done<<OTP_OTP_STATUS_otp_wr_done_OFS)&OTP_OTP_STATUS_otp_wr_done_MASK);
}

static inline void OTP_STS_WRITE(OTP_REGS_s * registers, uint32_t wr_pstate, uint32_t rd_pstate) {
    registers->STS.packed_w =  + ((wr_pstate<<OTP_STS_wr_pstate_OFS)&OTP_STS_wr_pstate_MASK) + ((rd_pstate<<OTP_STS_rd_pstate_OFS)&OTP_STS_rd_pstate_MASK);
}

static inline void OTP_OTP_RD_EN_WRITE(OTP_REGS_s * registers, uint32_t otp_rd_en) {
    registers->OTP_RD_EN.packed_w =  + ((otp_rd_en<<OTP_OTP_RD_EN_otp_rd_en_OFS)&OTP_OTP_RD_EN_otp_rd_en_MASK);
}

static inline void OTP_OTP_RD_STATUS_WRITE(OTP_REGS_s * registers, uint32_t otp_rd_done) {
    registers->OTP_RD_STATUS.packed_w =  + ((otp_rd_done<<OTP_OTP_RD_STATUS_otp_rd_done_OFS)&OTP_OTP_RD_STATUS_otp_rd_done_MASK);
}

