#ifndef VULTAN_FLASH_REGISTERS_H
#define VULTAN_FLASH_REGISTERS_H

#include <stdint.h>

typedef struct VULTAN_FLASH_IRQ_ENABLE_SET_REG_s {
    unsigned int cmd_accept_irq_en_set:1; // 
    unsigned int cmd_success_irq_en_set:1; // 
    unsigned int cmd_fail_irq_en_set:1; // 
    unsigned int cmd_reject_irq_en_set:1; // 
    unsigned int read_overflow_irq_en_set:1; // 
} VULTAN_FLASH_IRQ_ENABLE_SET_REG_s;

typedef union VULTAN_FLASH_IRQ_ENABLE_SET_u {
    VULTAN_FLASH_IRQ_ENABLE_SET_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VULTAN_FLASH_IRQ_ENABLE_SET_u;

typedef struct VULTAN_FLASH_IRQ_ENABLE_CLR_REG_s {
    unsigned int cmd_accept_irq_en_clr:1; // 
    unsigned int cmd_success_irq_en_clr:1; // 
    unsigned int cmd_fail_irq_en_clr:1; // 
    unsigned int cmd_reject_irq_en_clr:1; // 
    unsigned int read_overflow_irq_en_clr:1; // 
} VULTAN_FLASH_IRQ_ENABLE_CLR_REG_s;

typedef union VULTAN_FLASH_IRQ_ENABLE_CLR_u {
    VULTAN_FLASH_IRQ_ENABLE_CLR_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VULTAN_FLASH_IRQ_ENABLE_CLR_u;

typedef struct VULTAN_FLASH_IRQ_STATUS_SET_REG_s {
    unsigned int cmd_accept_irq_sts_set:1; // 
    unsigned int cmd_success_irq_sts_set:1; // 
    unsigned int cmd_fail_irq_sts_set:1; // 
    unsigned int cmd_reject_irq_sts_set:1; // 
    unsigned int read_overflow_irq_sts_set:1; // 
} VULTAN_FLASH_IRQ_STATUS_SET_REG_s;

typedef union VULTAN_FLASH_IRQ_STATUS_SET_u {
    VULTAN_FLASH_IRQ_STATUS_SET_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VULTAN_FLASH_IRQ_STATUS_SET_u;

typedef struct VULTAN_FLASH_IRQ_STATUS_CLR_REG_s {
    unsigned int cmd_accept_irq_sts_clr:1; // 
    unsigned int cmd_success_irq_sts_clr:1; // 
    unsigned int cmd_fail_irq_sts_clr:1; // 
    unsigned int cmd_reject_irq_sts_clr:1; // 
    unsigned int read_overflow_irq_sts_clr:1; // 
} VULTAN_FLASH_IRQ_STATUS_CLR_REG_s;

typedef union VULTAN_FLASH_IRQ_STATUS_CLR_u {
    VULTAN_FLASH_IRQ_STATUS_CLR_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VULTAN_FLASH_IRQ_STATUS_CLR_u;

typedef struct VULTAN_FLASH_IRQ_MASKED_STATUS_REG_s {
    unsigned int cmd_accept_irq:1; // 
    unsigned int cmd_success_irq:1; // 
    unsigned int cmd_fail_irq:1; // 
    unsigned int cmd_reject_irq:1; // 
    unsigned int read_overflow_irq:1; // 
} VULTAN_FLASH_IRQ_MASKED_STATUS_REG_s;

typedef union VULTAN_FLASH_IRQ_MASKED_STATUS_u {
    VULTAN_FLASH_IRQ_MASKED_STATUS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VULTAN_FLASH_IRQ_MASKED_STATUS_u;

typedef struct VULTAN_FLASH_CTRL_REG_s {
    unsigned int cmd:3; // 
    unsigned int rsvd_0:1; // 
    unsigned int abort:1; // 
} VULTAN_FLASH_CTRL_REG_s;

typedef union VULTAN_FLASH_CTRL_u {
    VULTAN_FLASH_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VULTAN_FLASH_CTRL_u;

typedef struct VULTAN_FLASH_STATUS_REG_s {
    unsigned int cmd_pending:1; // 
    unsigned int cmd_accept:1; // 
    unsigned int cmd_success:1; // 
    unsigned int cmd_fail:1; // 
    unsigned int cmd_finish:1; // 
    unsigned int arbitration_locked:1; // 
} VULTAN_FLASH_STATUS_REG_s;

typedef union VULTAN_FLASH_STATUS_u {
    VULTAN_FLASH_STATUS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VULTAN_FLASH_STATUS_u;

typedef struct VULTAN_FLASH_ADDR_REG_s {
    unsigned int addr:22; // 
} VULTAN_FLASH_ADDR_REG_s;

typedef union VULTAN_FLASH_ADDR_u {
    VULTAN_FLASH_ADDR_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VULTAN_FLASH_ADDR_u;

typedef struct VULTAN_FLASH_DATA0_REG_s {
    unsigned int data0:32; // 
} VULTAN_FLASH_DATA0_REG_s;

typedef union VULTAN_FLASH_DATA0_u {
    VULTAN_FLASH_DATA0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VULTAN_FLASH_DATA0_u;

typedef struct VULTAN_FLASH_DATA1_REG_s {
    unsigned int data1:32; // 
} VULTAN_FLASH_DATA1_REG_s;

typedef union VULTAN_FLASH_DATA1_u {
    VULTAN_FLASH_DATA1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VULTAN_FLASH_DATA1_u;

typedef struct VULTAN_FLASH_DATA2_REG_s {
    unsigned int data2:32; // 
} VULTAN_FLASH_DATA2_REG_s;

typedef union VULTAN_FLASH_DATA2_u {
    VULTAN_FLASH_DATA2_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VULTAN_FLASH_DATA2_u;

typedef struct VULTAN_FLASH_DATA3_REG_s {
    unsigned int data3:32; // 
} VULTAN_FLASH_DATA3_REG_s;

typedef union VULTAN_FLASH_DATA3_u {
    VULTAN_FLASH_DATA3_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} VULTAN_FLASH_DATA3_u;

typedef struct VULTAN_FLASH_REGS_s{
    volatile VULTAN_FLASH_IRQ_ENABLE_SET_u IRQ_ENABLE_SET;
    volatile VULTAN_FLASH_IRQ_ENABLE_CLR_u IRQ_ENABLE_CLR;
    volatile VULTAN_FLASH_IRQ_STATUS_SET_u IRQ_STATUS_SET;
    volatile VULTAN_FLASH_IRQ_STATUS_CLR_u IRQ_STATUS_CLR;
    volatile VULTAN_FLASH_IRQ_MASKED_STATUS_u IRQ_MASKED_STATUS;
    volatile VULTAN_FLASH_CTRL_u CTRL;
    volatile VULTAN_FLASH_STATUS_u STATUS;
    volatile VULTAN_FLASH_ADDR_u ADDR;
    volatile VULTAN_FLASH_DATA0_u DATA0;
    volatile VULTAN_FLASH_DATA1_u DATA1;
    volatile VULTAN_FLASH_DATA2_u DATA2;
    volatile VULTAN_FLASH_DATA3_u DATA3;
} VULTAN_FLASH_REGS_s;



typedef enum {
	VULTAN_FLASH_CTRL_CMD_READ = 1,
	VULTAN_FLASH_CTRL_CMD_WRITE = 2,
	VULTAN_FLASH_CTRL_CMD_ROW_WRITE = 3,
} VULTAN_FLASH_CTRL_CMD_E;

#define VULTAN_FLASH_IRQ_ENABLE_SET_CMD_ACCEPT_IRQ_EN_SET_OFS (0)
#define VULTAN_FLASH_IRQ_ENABLE_SET_CMD_ACCEPT_IRQ_EN_SET_MASK ((uint32_t)0x00000001U)
#define VULTAN_FLASH_IRQ_ENABLE_SET_CMD_SUCCESS_IRQ_EN_SET_OFS (1)
#define VULTAN_FLASH_IRQ_ENABLE_SET_CMD_SUCCESS_IRQ_EN_SET_MASK ((uint32_t)0x00000002U)
#define VULTAN_FLASH_IRQ_ENABLE_SET_CMD_FAIL_IRQ_EN_SET_OFS (2)
#define VULTAN_FLASH_IRQ_ENABLE_SET_CMD_FAIL_IRQ_EN_SET_MASK ((uint32_t)0x00000004U)
#define VULTAN_FLASH_IRQ_ENABLE_SET_CMD_REJECT_IRQ_EN_SET_OFS (3)
#define VULTAN_FLASH_IRQ_ENABLE_SET_CMD_REJECT_IRQ_EN_SET_MASK ((uint32_t)0x00000008U)
#define VULTAN_FLASH_IRQ_ENABLE_SET_READ_OVERFLOW_IRQ_EN_SET_OFS (4)
#define VULTAN_FLASH_IRQ_ENABLE_SET_READ_OVERFLOW_IRQ_EN_SET_MASK ((uint32_t)0x00000010U)
#define VULTAN_FLASH_IRQ_ENABLE_CLR_CMD_ACCEPT_IRQ_EN_CLR_OFS (0)
#define VULTAN_FLASH_IRQ_ENABLE_CLR_CMD_ACCEPT_IRQ_EN_CLR_MASK ((uint32_t)0x00000001U)
#define VULTAN_FLASH_IRQ_ENABLE_CLR_CMD_SUCCESS_IRQ_EN_CLR_OFS (1)
#define VULTAN_FLASH_IRQ_ENABLE_CLR_CMD_SUCCESS_IRQ_EN_CLR_MASK ((uint32_t)0x00000002U)
#define VULTAN_FLASH_IRQ_ENABLE_CLR_CMD_FAIL_IRQ_EN_CLR_OFS (2)
#define VULTAN_FLASH_IRQ_ENABLE_CLR_CMD_FAIL_IRQ_EN_CLR_MASK ((uint32_t)0x00000004U)
#define VULTAN_FLASH_IRQ_ENABLE_CLR_CMD_REJECT_IRQ_EN_CLR_OFS (3)
#define VULTAN_FLASH_IRQ_ENABLE_CLR_CMD_REJECT_IRQ_EN_CLR_MASK ((uint32_t)0x00000008U)
#define VULTAN_FLASH_IRQ_ENABLE_CLR_READ_OVERFLOW_IRQ_EN_CLR_OFS (4)
#define VULTAN_FLASH_IRQ_ENABLE_CLR_READ_OVERFLOW_IRQ_EN_CLR_MASK ((uint32_t)0x00000010U)
#define VULTAN_FLASH_IRQ_STATUS_SET_CMD_ACCEPT_IRQ_STS_SET_OFS (0)
#define VULTAN_FLASH_IRQ_STATUS_SET_CMD_ACCEPT_IRQ_STS_SET_MASK ((uint32_t)0x00000001U)
#define VULTAN_FLASH_IRQ_STATUS_SET_CMD_SUCCESS_IRQ_STS_SET_OFS (1)
#define VULTAN_FLASH_IRQ_STATUS_SET_CMD_SUCCESS_IRQ_STS_SET_MASK ((uint32_t)0x00000002U)
#define VULTAN_FLASH_IRQ_STATUS_SET_CMD_FAIL_IRQ_STS_SET_OFS (2)
#define VULTAN_FLASH_IRQ_STATUS_SET_CMD_FAIL_IRQ_STS_SET_MASK ((uint32_t)0x00000004U)
#define VULTAN_FLASH_IRQ_STATUS_SET_CMD_REJECT_IRQ_STS_SET_OFS (3)
#define VULTAN_FLASH_IRQ_STATUS_SET_CMD_REJECT_IRQ_STS_SET_MASK ((uint32_t)0x00000008U)
#define VULTAN_FLASH_IRQ_STATUS_SET_READ_OVERFLOW_IRQ_STS_SET_OFS (4)
#define VULTAN_FLASH_IRQ_STATUS_SET_READ_OVERFLOW_IRQ_STS_SET_MASK ((uint32_t)0x00000010U)
#define VULTAN_FLASH_IRQ_STATUS_CLR_CMD_ACCEPT_IRQ_STS_CLR_OFS (0)
#define VULTAN_FLASH_IRQ_STATUS_CLR_CMD_ACCEPT_IRQ_STS_CLR_MASK ((uint32_t)0x00000001U)
#define VULTAN_FLASH_IRQ_STATUS_CLR_CMD_SUCCESS_IRQ_STS_CLR_OFS (1)
#define VULTAN_FLASH_IRQ_STATUS_CLR_CMD_SUCCESS_IRQ_STS_CLR_MASK ((uint32_t)0x00000002U)
#define VULTAN_FLASH_IRQ_STATUS_CLR_CMD_FAIL_IRQ_STS_CLR_OFS (2)
#define VULTAN_FLASH_IRQ_STATUS_CLR_CMD_FAIL_IRQ_STS_CLR_MASK ((uint32_t)0x00000004U)
#define VULTAN_FLASH_IRQ_STATUS_CLR_CMD_REJECT_IRQ_STS_CLR_OFS (3)
#define VULTAN_FLASH_IRQ_STATUS_CLR_CMD_REJECT_IRQ_STS_CLR_MASK ((uint32_t)0x00000008U)
#define VULTAN_FLASH_IRQ_STATUS_CLR_READ_OVERFLOW_IRQ_STS_CLR_OFS (4)
#define VULTAN_FLASH_IRQ_STATUS_CLR_READ_OVERFLOW_IRQ_STS_CLR_MASK ((uint32_t)0x00000010U)
#define VULTAN_FLASH_IRQ_MASKED_STATUS_CMD_ACCEPT_IRQ_OFS (0)
#define VULTAN_FLASH_IRQ_MASKED_STATUS_CMD_ACCEPT_IRQ_MASK ((uint32_t)0x00000001U)
#define VULTAN_FLASH_IRQ_MASKED_STATUS_CMD_SUCCESS_IRQ_OFS (1)
#define VULTAN_FLASH_IRQ_MASKED_STATUS_CMD_SUCCESS_IRQ_MASK ((uint32_t)0x00000002U)
#define VULTAN_FLASH_IRQ_MASKED_STATUS_CMD_FAIL_IRQ_OFS (2)
#define VULTAN_FLASH_IRQ_MASKED_STATUS_CMD_FAIL_IRQ_MASK ((uint32_t)0x00000004U)
#define VULTAN_FLASH_IRQ_MASKED_STATUS_CMD_REJECT_IRQ_OFS (3)
#define VULTAN_FLASH_IRQ_MASKED_STATUS_CMD_REJECT_IRQ_MASK ((uint32_t)0x00000008U)
#define VULTAN_FLASH_IRQ_MASKED_STATUS_READ_OVERFLOW_IRQ_OFS (4)
#define VULTAN_FLASH_IRQ_MASKED_STATUS_READ_OVERFLOW_IRQ_MASK ((uint32_t)0x00000010U)
#define VULTAN_FLASH_CTRL_CMD_OFS (0)
#define VULTAN_FLASH_CTRL_CMD_MASK ((uint32_t)0x00000007U)
#define VULTAN_FLASH_CTRL_ABORT_OFS (4)
#define VULTAN_FLASH_CTRL_ABORT_MASK ((uint32_t)0x00000010U)
#define VULTAN_FLASH_STATUS_CMD_PENDING_OFS (0)
#define VULTAN_FLASH_STATUS_CMD_PENDING_MASK ((uint32_t)0x00000001U)
#define VULTAN_FLASH_STATUS_CMD_ACCEPT_OFS (1)
#define VULTAN_FLASH_STATUS_CMD_ACCEPT_MASK ((uint32_t)0x00000002U)
#define VULTAN_FLASH_STATUS_CMD_SUCCESS_OFS (2)
#define VULTAN_FLASH_STATUS_CMD_SUCCESS_MASK ((uint32_t)0x00000004U)
#define VULTAN_FLASH_STATUS_CMD_FAIL_OFS (3)
#define VULTAN_FLASH_STATUS_CMD_FAIL_MASK ((uint32_t)0x00000008U)
#define VULTAN_FLASH_STATUS_CMD_FINISH_OFS (4)
#define VULTAN_FLASH_STATUS_CMD_FINISH_MASK ((uint32_t)0x00000010U)
#define VULTAN_FLASH_STATUS_ARBITRATION_LOCKED_OFS (5)
#define VULTAN_FLASH_STATUS_ARBITRATION_LOCKED_MASK ((uint32_t)0x00000020U)
#define VULTAN_FLASH_ADDR_ADDR_OFS (0)
#define VULTAN_FLASH_ADDR_ADDR_MASK ((uint32_t)0x003FFFFFU)
#define VULTAN_FLASH_DATA0_DATA0_OFS (0)
#define VULTAN_FLASH_DATA0_DATA0_MASK ((uint32_t)0xFFFFFFFFU)
#define VULTAN_FLASH_DATA1_DATA1_OFS (0)
#define VULTAN_FLASH_DATA1_DATA1_MASK ((uint32_t)0xFFFFFFFFU)
#define VULTAN_FLASH_DATA2_DATA2_OFS (0)
#define VULTAN_FLASH_DATA2_DATA2_MASK ((uint32_t)0xFFFFFFFFU)
#define VULTAN_FLASH_DATA3_DATA3_OFS (0)
#define VULTAN_FLASH_DATA3_DATA3_MASK ((uint32_t)0xFFFFFFFFU)

#endif
