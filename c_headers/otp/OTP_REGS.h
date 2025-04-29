#ifndef OTP_REGISTERS_H
#define OTP_REGISTERS_H

#include <stdint.h>

typedef struct OTP_TIMER_CTRL_REG_s {
    unsigned int tsetup2:2; // CSB to PROGEN setup time
    unsigned int tpas:1; // ADDR[6:0] to PROGEN setup time
    unsigned int tpah:2; // ADDR[6:0] to PROGEN hold time(this time also includes tphold2 timing)
    unsigned int tprogwh:11; // PROGEN pulse width high
} OTP_TIMER_CTRL_REG_s;

typedef union OTP_TIMER_CTRL_u {
    OTP_TIMER_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} OTP_TIMER_CTRL_u;

typedef struct OTP_OTP_CTRL_REG_s {
    unsigned int otp_mode:1; // 0 : program mode -- 1 : sensing mode
    unsigned int wr_start_addr:5; // start address for programming otp
    unsigned int wr_end_addr:5; // end address for programming otp
} OTP_OTP_CTRL_REG_s;

typedef union OTP_OTP_CTRL_u {
    OTP_OTP_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} OTP_OTP_CTRL_u;

typedef struct OTP_OTP_EN_REG_s {
    unsigned int otp_wr_en:1; // To start read write operation given with the programming
} OTP_OTP_EN_REG_s;

typedef union OTP_OTP_EN_u {
    OTP_OTP_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} OTP_OTP_EN_u;

typedef struct OTP_OTP_STATUS_REG_s {
    unsigned int otp_wr_done:1; // Indicates finishing of the transaction
} OTP_OTP_STATUS_REG_s;

typedef union OTP_OTP_STATUS_u {
    OTP_OTP_STATUS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} OTP_OTP_STATUS_u;

typedef struct OTP_OTP_REG_s {
    unsigned int otp:8; // otp registers
} OTP_OTP_REG_s;

typedef union OTP_OTP_u {
    OTP_OTP_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} OTP_OTP_u;

typedef struct OTP_STS_REG_s {
    unsigned int wr_pstate:3; // fsm sts for otp writes
    unsigned int rd_pstate:4; // fsm sts for otp reads
} OTP_STS_REG_s;

typedef union OTP_STS_u {
    OTP_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} OTP_STS_u;

typedef struct OTP_OTP_RD_EN_REG_s {
    unsigned int otp_rd_en:1; // To start read operation given with the programming
} OTP_OTP_RD_EN_REG_s;

typedef union OTP_OTP_RD_EN_u {
    OTP_OTP_RD_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} OTP_OTP_RD_EN_u;

typedef struct OTP_OTP_RD_STATUS_REG_s {
    unsigned int otp_rd_done:1; // Indicates finishing of the transaction
} OTP_OTP_RD_STATUS_REG_s;

typedef union OTP_OTP_RD_STATUS_u {
    OTP_OTP_RD_STATUS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} OTP_OTP_RD_STATUS_u;

typedef struct OTP_REGS_s{
    volatile OTP_TIMER_CTRL_u TIMER_CTRL;
    volatile OTP_OTP_CTRL_u OTP_CTRL;
    volatile OTP_OTP_EN_u OTP_EN;
    volatile OTP_OTP_STATUS_u OTP_STATUS;
    volatile OTP_OTP_u OTP[32];
    volatile OTP_STS_u STS;
    volatile OTP_OTP_RD_EN_u OTP_RD_EN;
    volatile OTP_OTP_RD_STATUS_u OTP_RD_STATUS;
} OTP_REGS_s;

#define OTP_TIMER_CTRL_TSETUP2_OFS (0)
#define OTP_TIMER_CTRL_TSETUP2_MASK ((uint32_t)0x00000003U)
#define OTP_TIMER_CTRL_TPAS_OFS (2)
#define OTP_TIMER_CTRL_TPAS_MASK ((uint32_t)0x00000004U)
#define OTP_TIMER_CTRL_TPAH_OFS (3)
#define OTP_TIMER_CTRL_TPAH_MASK ((uint32_t)0x00000018U)
#define OTP_TIMER_CTRL_TPROGWH_OFS (5)
#define OTP_TIMER_CTRL_TPROGWH_MASK ((uint32_t)0x0000FFE0U)
#define OTP_OTP_CTRL_OTP_MODE_OFS (0)
#define OTP_OTP_CTRL_OTP_MODE_MASK ((uint32_t)0x00000001U)
#define OTP_OTP_CTRL_WR_START_ADDR_OFS (1)
#define OTP_OTP_CTRL_WR_START_ADDR_MASK ((uint32_t)0x0000003EU)
#define OTP_OTP_CTRL_WR_END_ADDR_OFS (6)
#define OTP_OTP_CTRL_WR_END_ADDR_MASK ((uint32_t)0x000007C0U)
#define OTP_OTP_EN_OTP_WR_EN_OFS (0)
#define OTP_OTP_EN_OTP_WR_EN_MASK ((uint32_t)0x00000001U)
#define OTP_OTP_STATUS_OTP_WR_DONE_OFS (0)
#define OTP_OTP_STATUS_OTP_WR_DONE_MASK ((uint32_t)0x00000001U)
#define OTP_OTP_OTP_OFS (0)
#define OTP_OTP_OTP_MASK ((uint32_t)0x000000FFU)
#define OTP_STS_WR_PSTATE_OFS (0)
#define OTP_STS_WR_PSTATE_MASK ((uint32_t)0x00000007U)
#define OTP_STS_RD_PSTATE_OFS (3)
#define OTP_STS_RD_PSTATE_MASK ((uint32_t)0x00000078U)
#define OTP_OTP_RD_EN_OTP_RD_EN_OFS (0)
#define OTP_OTP_RD_EN_OTP_RD_EN_MASK ((uint32_t)0x00000001U)
#define OTP_OTP_RD_STATUS_OTP_RD_DONE_OFS (0)
#define OTP_OTP_RD_STATUS_OTP_RD_DONE_MASK ((uint32_t)0x00000001U)
#endif
