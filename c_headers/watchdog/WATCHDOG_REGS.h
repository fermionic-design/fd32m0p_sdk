#ifndef WATCHDOG_REGISTERS_H
#define WATCHDOG_REGISTERS_H

#include <stdint.h>

typedef struct WATCHDOG_DESC_REG_s {
    unsigned int module_type:8; // 
    unsigned int modue_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} WATCHDOG_DESC_REG_s;

typedef union WATCHDOG_DESC_u {
    WATCHDOG_DESC_REG_s DESC;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} WATCHDOG_DESC_u;

typedef struct WATCHDOG_PWR_EN_REG_s {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    unsigned int pwr_en_key:8; // 
} WATCHDOG_PWR_EN_REG_s;

typedef union WATCHDOG_PWR_EN_u {
    WATCHDOG_PWR_EN_REG_s PWR_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} WATCHDOG_PWR_EN_u;

typedef struct WATCHDOG_RST_CTRL_REG_s {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    unsigned int rst_key:8; // 
} WATCHDOG_RST_CTRL_REG_s;

typedef union WATCHDOG_RST_CTRL_u {
    WATCHDOG_RST_CTRL_REG_s RST_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} WATCHDOG_RST_CTRL_u;

typedef struct WATCHDOG_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} WATCHDOG_RST_STS_REG_s;

typedef union WATCHDOG_RST_STS_u {
    WATCHDOG_RST_STS_REG_s RST_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} WATCHDOG_RST_STS_u;

typedef struct WATCHDOG_INTR_STS_REG_s {
    unsigned int intr_first:4; // 
} WATCHDOG_INTR_STS_REG_s;

typedef union WATCHDOG_INTR_STS_u {
    WATCHDOG_INTR_STS_REG_s INTR_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} WATCHDOG_INTR_STS_u;

typedef struct WATCHDOG_INTR_EVENT_REG_s {
    unsigned int time_prd_exp:1; // 
    unsigned int restart_in_closed_window:1; // 
    unsigned int restart_reg_incorrect_data:1; // 
    unsigned int wr_to_ctl_regs_after_wwdt_en:1; // 
    unsigned int wrg_pwd_or_access_to_ctrl_regs:1; // 
} WATCHDOG_INTR_EVENT_REG_s;

typedef union WATCHDOG_INTR_EVENT_u {
    WATCHDOG_INTR_EVENT_REG_s INTR_EVENT;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} WATCHDOG_INTR_EVENT_u;

typedef struct WATCHDOG_INTR_EN_REG_s {
    unsigned int time_prd_exp_en:1; // 
    unsigned int restart_in_closed_window_en:1; // 
    unsigned int restart_reg_incorrect_data_en:1; // 
    unsigned int wr_to_ctl_regs_after_wwdt_en_en:1; // 
    unsigned int wrg_pwd_or_access_to_ctrl_regs_en:1; // 
} WATCHDOG_INTR_EN_REG_s;

typedef union WATCHDOG_INTR_EN_u {
    WATCHDOG_INTR_EN_REG_s INTR_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} WATCHDOG_INTR_EN_u;

typedef struct WATCHDOG_INTR_NMI_EN_REG_s {
    unsigned int time_prd_exp_nmi_en:1; // 
    unsigned int restart_within_closed_window_nmi_en:1; // 
    unsigned int restart_reg_incorrect_data_nmi_en:1; // 
    unsigned int wr_to_ctl_regs_after_wwdt_en_nmi_en:1; // 
    unsigned int wrg_pwd_or_access_to_ctrl_regs_nmi_en:1; // 
} WATCHDOG_INTR_NMI_EN_REG_s;

typedef union WATCHDOG_INTR_NMI_EN_u {
    WATCHDOG_INTR_NMI_EN_REG_s INTR_NMI_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} WATCHDOG_INTR_NMI_EN_u;

typedef struct WATCHDOG_EVENT_EN_REG_s {
    unsigned int time_prd_exp_event_en:1; // 
} WATCHDOG_EVENT_EN_REG_s;

typedef union WATCHDOG_EVENT_EN_u {
    WATCHDOG_EVENT_EN_REG_s EVENT_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} WATCHDOG_EVENT_EN_u;

typedef struct WATCHDOG_INTR_SW_SET_REG_s {
    unsigned int time_prd_exp_sw_set:1; // 
    unsigned int restart_within_closed_window_sw_set:1; // 
    unsigned int restart_reg_incorrect_data_sw_set:1; // 
    unsigned int wr_to_ctl_regs_after_wwdt_en_sw_set:1; // 
    unsigned int wrg_pwd_or_access_to_ctrl_regs_sw_set:1; // 
} WATCHDOG_INTR_SW_SET_REG_s;

typedef union WATCHDOG_INTR_SW_SET_u {
    WATCHDOG_INTR_SW_SET_REG_s INTR_SW_SET;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} WATCHDOG_INTR_SW_SET_u;

typedef struct WATCHDOG_HALT_MODE_REG_s {
    unsigned int run_in_halt_mode:1; // 
} WATCHDOG_HALT_MODE_REG_s;

typedef union WATCHDOG_HALT_MODE_u {
    WATCHDOG_HALT_MODE_REG_s HALT_MODE;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} WATCHDOG_HALT_MODE_u;

typedef struct WATCHDOG_WWDT_EN_REG_s {
    unsigned int wwdt_en:1; // 
    unsigned int rsvd_0:23; // 
    unsigned int wwdt_en_key:8; // 
} WATCHDOG_WWDT_EN_REG_s;

typedef union WATCHDOG_WWDT_EN_u {
    WATCHDOG_WWDT_EN_REG_s WWDT_EN;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} WATCHDOG_WWDT_EN_u;

typedef struct WATCHDOG_WWDT_CTL0_REG_s {
    unsigned int clk_div:3; // 
    unsigned int total_time_period:3; // 
    unsigned int closed_window:3; // 
    unsigned int is_timer_mode:1; // 
    unsigned int timer_repeat:1; // 
    unsigned int stop_in_sleep_mode:1; // 
    unsigned int sleep_policy_rst:1; // 1 = Reset on sleep
    unsigned int violation_gen:1; // 1 = Generate violation in WWDT mode
    unsigned int rsvd_0:10; // 
    unsigned int wwdt_ctl0_key:8; // 
} WATCHDOG_WWDT_CTL0_REG_s;

typedef union WATCHDOG_WWDT_CTL0_u {
    WATCHDOG_WWDT_CTL0_REG_s WWDT_CTL0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} WATCHDOG_WWDT_CTL0_u;

typedef struct WATCHDOG_WWDT_CTL1_REG_s {
    unsigned int total_wait_time_after_violation:16; // 
    unsigned int wwdt_enabled_after_violation:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int wwdt_ctl1_key:8; // 
} WATCHDOG_WWDT_CTL1_REG_s;

typedef union WATCHDOG_WWDT_CTL1_u {
    WATCHDOG_WWDT_CTL1_REG_s WWDT_CTL1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} WATCHDOG_WWDT_CTL1_u;

typedef struct WATCHDOG_WWDT_RESTART_REG_s {
    unsigned int restart:32; // 
} WATCHDOG_WWDT_RESTART_REG_s;

typedef union WATCHDOG_WWDT_RESTART_u {
    WATCHDOG_WWDT_RESTART_REG_s WWDT_RESTART;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} WATCHDOG_WWDT_RESTART_u;

typedef struct WATCHDOG_WWDT_STS_REG_s {
    unsigned int run:1; // 
} WATCHDOG_WWDT_STS_REG_s;

typedef union WATCHDOG_WWDT_STS_u {
    WATCHDOG_WWDT_STS_REG_s WWDT_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} WATCHDOG_WWDT_STS_u;

typedef struct WATCHDOG_REGS_s{
    volatile WATCHDOG_DESC_u DESC;
    volatile WATCHDOG_PWR_EN_u PWR_EN;
    volatile WATCHDOG_RST_CTRL_u RST_CTRL;
    volatile WATCHDOG_RST_STS_u RST_STS;
    volatile WATCHDOG_INTR_STS_u INTR_STS;
    volatile WATCHDOG_INTR_EVENT_u INTR_EVENT;
    volatile WATCHDOG_INTR_EN_u INTR_EN;
    volatile WATCHDOG_INTR_NMI_EN_u INTR_NMI_EN;
    volatile WATCHDOG_EVENT_EN_u EVENT_EN;
    volatile WATCHDOG_INTR_SW_SET_u INTR_SW_SET;
    volatile WATCHDOG_HALT_MODE_u HALT_MODE;
    volatile WATCHDOG_WWDT_EN_u WWDT_EN;
    volatile WATCHDOG_WWDT_CTL0_u WWDT_CTL0;
    volatile WATCHDOG_WWDT_CTL1_u WWDT_CTL1;
    volatile WATCHDOG_WWDT_RESTART_u WWDT_RESTART;
    volatile WATCHDOG_WWDT_STS_u WWDT_STS;
} WATCHDOG_REGS_s;

#define WATCHDOG_DESC_module_type_OFS (0)
#define WATCHDOG_DESC_module_type_MASK ((uint32_t)0x000000FFU)
#define WATCHDOG_DESC_modue_subtype_OFS (8)
#define WATCHDOG_DESC_modue_subtype_MASK ((uint32_t)0x0000FF00U)
#define WATCHDOG_DESC_major_rev_OFS (16)
#define WATCHDOG_DESC_major_rev_MASK ((uint32_t)0x000F0000U)
#define WATCHDOG_DESC_minor_rev_OFS (20)
#define WATCHDOG_DESC_minor_rev_MASK ((uint32_t)0x00F00000U)
#define WATCHDOG_PWR_EN_pwr_en_OFS (0)
#define WATCHDOG_PWR_EN_pwr_en_MASK ((uint32_t)0x00000001U)
#define WATCHDOG_PWR_EN_pwr_en_key_OFS (24)
#define WATCHDOG_PWR_EN_pwr_en_key_MASK ((uint32_t)0xFF000000U)
#define WATCHDOG_RST_CTRL_rst_OFS (0)
#define WATCHDOG_RST_CTRL_rst_MASK ((uint32_t)0x00000001U)
#define WATCHDOG_RST_CTRL_rst_sts_clr_OFS (1)
#define WATCHDOG_RST_CTRL_rst_sts_clr_MASK ((uint32_t)0x00000002U)
#define WATCHDOG_RST_CTRL_rst_key_OFS (24)
#define WATCHDOG_RST_CTRL_rst_key_MASK ((uint32_t)0xFF000000U)
#define WATCHDOG_RST_STS_rst_sts_OFS (0)
#define WATCHDOG_RST_STS_rst_sts_MASK ((uint32_t)0x00000001U)
#define WATCHDOG_INTR_STS_intr_first_OFS (0)
#define WATCHDOG_INTR_STS_intr_first_MASK ((uint32_t)0x0000000FU)
#define WATCHDOG_INTR_EVENT_time_prd_exp_OFS (0)
#define WATCHDOG_INTR_EVENT_time_prd_exp_MASK ((uint32_t)0x00000001U)
#define WATCHDOG_INTR_EVENT_restart_in_closed_window_OFS (1)
#define WATCHDOG_INTR_EVENT_restart_in_closed_window_MASK ((uint32_t)0x00000002U)
#define WATCHDOG_INTR_EVENT_restart_reg_incorrect_data_OFS (2)
#define WATCHDOG_INTR_EVENT_restart_reg_incorrect_data_MASK ((uint32_t)0x00000004U)
#define WATCHDOG_INTR_EVENT_wr_to_ctl_regs_after_wwdt_en_OFS (3)
#define WATCHDOG_INTR_EVENT_wr_to_ctl_regs_after_wwdt_en_MASK ((uint32_t)0x00000008U)
#define WATCHDOG_INTR_EVENT_wrg_pwd_or_access_to_ctrl_regs_OFS (4)
#define WATCHDOG_INTR_EVENT_wrg_pwd_or_access_to_ctrl_regs_MASK ((uint32_t)0x00000010U)
#define WATCHDOG_INTR_EN_time_prd_exp_en_OFS (0)
#define WATCHDOG_INTR_EN_time_prd_exp_en_MASK ((uint32_t)0x00000001U)
#define WATCHDOG_INTR_EN_restart_in_closed_window_en_OFS (1)
#define WATCHDOG_INTR_EN_restart_in_closed_window_en_MASK ((uint32_t)0x00000002U)
#define WATCHDOG_INTR_EN_restart_reg_incorrect_data_en_OFS (2)
#define WATCHDOG_INTR_EN_restart_reg_incorrect_data_en_MASK ((uint32_t)0x00000004U)
#define WATCHDOG_INTR_EN_wr_to_ctl_regs_after_wwdt_en_en_OFS (3)
#define WATCHDOG_INTR_EN_wr_to_ctl_regs_after_wwdt_en_en_MASK ((uint32_t)0x00000008U)
#define WATCHDOG_INTR_EN_wrg_pwd_or_access_to_ctrl_regs_en_OFS (4)
#define WATCHDOG_INTR_EN_wrg_pwd_or_access_to_ctrl_regs_en_MASK ((uint32_t)0x00000010U)
#define WATCHDOG_INTR_NMI_EN_time_prd_exp_nmi_en_OFS (0)
#define WATCHDOG_INTR_NMI_EN_time_prd_exp_nmi_en_MASK ((uint32_t)0x00000001U)
#define WATCHDOG_INTR_NMI_EN_restart_within_closed_window_nmi_en_OFS (1)
#define WATCHDOG_INTR_NMI_EN_restart_within_closed_window_nmi_en_MASK ((uint32_t)0x00000002U)
#define WATCHDOG_INTR_NMI_EN_restart_reg_incorrect_data_nmi_en_OFS (2)
#define WATCHDOG_INTR_NMI_EN_restart_reg_incorrect_data_nmi_en_MASK ((uint32_t)0x00000004U)
#define WATCHDOG_INTR_NMI_EN_wr_to_ctl_regs_after_wwdt_en_nmi_en_OFS (3)
#define WATCHDOG_INTR_NMI_EN_wr_to_ctl_regs_after_wwdt_en_nmi_en_MASK ((uint32_t)0x00000008U)
#define WATCHDOG_INTR_NMI_EN_wrg_pwd_or_access_to_ctrl_regs_nmi_en_OFS (4)
#define WATCHDOG_INTR_NMI_EN_wrg_pwd_or_access_to_ctrl_regs_nmi_en_MASK ((uint32_t)0x00000010U)
#define WATCHDOG_EVENT_EN_time_prd_exp_event_en_OFS (0)
#define WATCHDOG_EVENT_EN_time_prd_exp_event_en_MASK ((uint32_t)0x00000001U)
#define WATCHDOG_INTR_SW_SET_time_prd_exp_sw_set_OFS (0)
#define WATCHDOG_INTR_SW_SET_time_prd_exp_sw_set_MASK ((uint32_t)0x00000001U)
#define WATCHDOG_INTR_SW_SET_restart_within_closed_window_sw_set_OFS (1)
#define WATCHDOG_INTR_SW_SET_restart_within_closed_window_sw_set_MASK ((uint32_t)0x00000002U)
#define WATCHDOG_INTR_SW_SET_restart_reg_incorrect_data_sw_set_OFS (2)
#define WATCHDOG_INTR_SW_SET_restart_reg_incorrect_data_sw_set_MASK ((uint32_t)0x00000004U)
#define WATCHDOG_INTR_SW_SET_wr_to_ctl_regs_after_wwdt_en_sw_set_OFS (3)
#define WATCHDOG_INTR_SW_SET_wr_to_ctl_regs_after_wwdt_en_sw_set_MASK ((uint32_t)0x00000008U)
#define WATCHDOG_INTR_SW_SET_wrg_pwd_or_access_to_ctrl_regs_sw_set_OFS (4)
#define WATCHDOG_INTR_SW_SET_wrg_pwd_or_access_to_ctrl_regs_sw_set_MASK ((uint32_t)0x00000010U)
#define WATCHDOG_HALT_MODE_run_in_halt_mode_OFS (0)
#define WATCHDOG_HALT_MODE_run_in_halt_mode_MASK ((uint32_t)0x00000001U)
#define WATCHDOG_WWDT_EN_wwdt_en_OFS (0)
#define WATCHDOG_WWDT_EN_wwdt_en_MASK ((uint32_t)0x00000001U)
#define WATCHDOG_WWDT_EN_wwdt_en_key_OFS (24)
#define WATCHDOG_WWDT_EN_wwdt_en_key_MASK ((uint32_t)0xFF000000U)
#define WATCHDOG_WWDT_CTL0_clk_div_OFS (0)
#define WATCHDOG_WWDT_CTL0_clk_div_MASK ((uint32_t)0x00000007U)
#define WATCHDOG_WWDT_CTL0_total_time_period_OFS (3)
#define WATCHDOG_WWDT_CTL0_total_time_period_MASK ((uint32_t)0x00000038U)
#define WATCHDOG_WWDT_CTL0_closed_window_OFS (6)
#define WATCHDOG_WWDT_CTL0_closed_window_MASK ((uint32_t)0x000001C0U)
#define WATCHDOG_WWDT_CTL0_is_timer_mode_OFS (9)
#define WATCHDOG_WWDT_CTL0_is_timer_mode_MASK ((uint32_t)0x00000200U)
#define WATCHDOG_WWDT_CTL0_timer_repeat_OFS (10)
#define WATCHDOG_WWDT_CTL0_timer_repeat_MASK ((uint32_t)0x00000400U)
#define WATCHDOG_WWDT_CTL0_stop_in_sleep_mode_OFS (11)
#define WATCHDOG_WWDT_CTL0_stop_in_sleep_mode_MASK ((uint32_t)0x00000800U)
#define WATCHDOG_WWDT_CTL0_sleep_policy_rst_OFS (12)
#define WATCHDOG_WWDT_CTL0_sleep_policy_rst_MASK ((uint32_t)0x00001000U)
#define WATCHDOG_WWDT_CTL0_violation_gen_OFS (13)
#define WATCHDOG_WWDT_CTL0_violation_gen_MASK ((uint32_t)0x00002000U)
#define WATCHDOG_WWDT_CTL0_wwdt_ctl0_key_OFS (24)
#define WATCHDOG_WWDT_CTL0_wwdt_ctl0_key_MASK ((uint32_t)0xFF000000U)
#define WATCHDOG_WWDT_CTL1_total_wait_time_after_violation_OFS (0)
#define WATCHDOG_WWDT_CTL1_total_wait_time_after_violation_MASK ((uint32_t)0x0000FFFFU)
#define WATCHDOG_WWDT_CTL1_wwdt_enabled_after_violation_OFS (16)
#define WATCHDOG_WWDT_CTL1_wwdt_enabled_after_violation_MASK ((uint32_t)0x00010000U)
#define WATCHDOG_WWDT_CTL1_wwdt_ctl1_key_OFS (24)
#define WATCHDOG_WWDT_CTL1_wwdt_ctl1_key_MASK ((uint32_t)0xFF000000U)
#define WATCHDOG_WWDT_RESTART_restart_OFS (0)
#define WATCHDOG_WWDT_RESTART_restart_MASK ((uint32_t)0xFFFFFFFFU)
#define WATCHDOG_WWDT_STS_run_OFS (0)
#define WATCHDOG_WWDT_STS_run_MASK ((uint32_t)0x00000001U)
#endif
