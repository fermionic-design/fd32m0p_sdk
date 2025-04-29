#ifndef RTC_REGISTERS_H
#define RTC_REGISTERS_H

#include <stdint.h>

typedef struct RTC_DESC_REG_s {
    unsigned int module_type:8; // 
    unsigned int modue_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} RTC_DESC_REG_s;

typedef union RTC_DESC_u {
    RTC_DESC_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_DESC_u;

typedef struct RTC_PWR_EN_REG_s {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    unsigned int pwr_en_key:8; // 
} RTC_PWR_EN_REG_s;

typedef union RTC_PWR_EN_u {
    RTC_PWR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_PWR_EN_u;

typedef struct RTC_RST_CTRL_REG_s {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    unsigned int rst_key:8; // 
} RTC_RST_CTRL_REG_s;

typedef union RTC_RST_CTRL_u {
    RTC_RST_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_RST_CTRL_u;

typedef struct RTC_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} RTC_RST_STS_REG_s;

typedef union RTC_RST_STS_u {
    RTC_RST_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_RST_STS_u;

typedef struct RTC_BUS_CLK_FORCE_REG_s {
    unsigned int bus_clk_force_32mhz:1; // 
    unsigned int rsvd_0:23; // 
    unsigned int bus_clk_force_key:8; // 
} RTC_BUS_CLK_FORCE_REG_s;

typedef union RTC_BUS_CLK_FORCE_u {
    RTC_BUS_CLK_FORCE_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_BUS_CLK_FORCE_u;

typedef struct RTC_CLK_CTRL_REG_s {
    unsigned int clk_en:1; // 
} RTC_CLK_CTRL_REG_s;

typedef union RTC_CLK_CTRL_u {
    RTC_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_CLK_CTRL_u;

typedef struct RTC_INTR_STS_REG_s {
    unsigned int intr_first:4; // 
} RTC_INTR_STS_REG_s;

typedef union RTC_INTR_STS_u {
    RTC_INTR_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_INTR_STS_u;

typedef struct RTC_INTR_EVENT_REG_s {
    unsigned int prd0:1; // 
    unsigned int prd1:1; // 
    unsigned int alarm0:1; // 
    unsigned int alarm1:1; // 
    unsigned int rtc_rdy:1; // 
    unsigned int interval_alarm:1; // 
} RTC_INTR_EVENT_REG_s;

typedef union RTC_INTR_EVENT_u {
    RTC_INTR_EVENT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_INTR_EVENT_u;

typedef struct RTC_INTR_EN_REG_s {
    unsigned int prd0_en:1; // 
    unsigned int prd1_en:1; // 
    unsigned int alarm0_en:1; // 
    unsigned int alarm1_en:1; // 
    unsigned int rtc_rdy_en:1; // 
    unsigned int interval_alarm_en:1; // 
} RTC_INTR_EN_REG_s;

typedef union RTC_INTR_EN_u {
    RTC_INTR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_INTR_EN_u;

typedef struct RTC_INTR_NMI_EN_REG_s {
    unsigned int prd0_nmi_en:1; // 
    unsigned int prd1_nmi_en:1; // 
    unsigned int alarm0_nmi_en:1; // 
    unsigned int alarm1_nmi_en:1; // 
    unsigned int rtc_rdy_nmi_en:1; // 
    unsigned int interval_alarm_nmi_en:1; // 
} RTC_INTR_NMI_EN_REG_s;

typedef union RTC_INTR_NMI_EN_u {
    RTC_INTR_NMI_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_INTR_NMI_EN_u;

typedef struct RTC_EVENT_EN_REG_s {
    unsigned int prd0_event_en:1; // 
    unsigned int prd1_event_en:1; // 
    unsigned int alarm0_event_en:1; // 
    unsigned int alarm1_event_en:1; // 
    unsigned int rtc_rdy_event_en:1; // 
    unsigned int interval_alarm_event_en:1; // 
} RTC_EVENT_EN_REG_s;

typedef union RTC_EVENT_EN_u {
    RTC_EVENT_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_EVENT_EN_u;

typedef struct RTC_INTR_SW_SET_REG_s {
    unsigned int prd0_sw_set:1; // 
    unsigned int prd1_sw_set:1; // 
    unsigned int alarm0_sw_set:1; // 
    unsigned int alarm1_sw_set:1; // 
    unsigned int rtc_rdy_sw_set:1; // 
    unsigned int interval_alarm_sw_set:1; // 
} RTC_INTR_SW_SET_REG_s;

typedef union RTC_INTR_SW_SET_u {
    RTC_INTR_SW_SET_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_INTR_SW_SET_u;

typedef struct RTC_DEBUG_CTL_REG_s {
    unsigned int intr_en_during_debug:1; // 
    unsigned int ctr_en_during_debug:1; // 
} RTC_DEBUG_CTL_REG_s;

typedef union RTC_DEBUG_CTL_u {
    RTC_DEBUG_CTL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_DEBUG_CTL_u;

typedef struct RTC_RTC_CTL_REG_s {
    unsigned int rtc_bcd:1; // 
} RTC_RTC_CTL_REG_s;

typedef union RTC_RTC_CTL_u {
    RTC_RTC_CTL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_RTC_CTL_u;

typedef struct RTC_SEC_CTL_REG_s {
    unsigned int sec_bin:6; // 
    unsigned int sec_lsb_bcd:4; // 
    unsigned int sec_msb_bcd:4; // 
    unsigned int sec_rtc_rdy:1; // 
} RTC_SEC_CTL_REG_s;

typedef union RTC_SEC_CTL_u {
    RTC_SEC_CTL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_SEC_CTL_u;

typedef struct RTC_MIN_CTL_REG_s {
    unsigned int min_bin:6; // 
    unsigned int min_lsb_bcd:4; // 
    unsigned int min_msb_bcd:4; // 
    unsigned int min_rtc_rdy:1; // 
} RTC_MIN_CTL_REG_s;

typedef union RTC_MIN_CTL_u {
    RTC_MIN_CTL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_MIN_CTL_u;

typedef struct RTC_HR_CTL_REG_s {
    unsigned int hr_bin:5; // 
    unsigned int hr_lsb_bcd:4; // 
    unsigned int hr_msb_bcd:4; // 
    unsigned int hr_rtc_rdy:1; // 
} RTC_HR_CTL_REG_s;

typedef union RTC_HR_CTL_u {
    RTC_HR_CTL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_HR_CTL_u;

typedef struct RTC_DOM_CTL_REG_s {
    unsigned int dom_bin:5; // 
    unsigned int dom_lsb_bcd:4; // 
    unsigned int dom_msb_bcd:4; // 
    unsigned int dom_rtc_rdy:1; // 
} RTC_DOM_CTL_REG_s;

typedef union RTC_DOM_CTL_u {
    RTC_DOM_CTL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_DOM_CTL_u;

typedef struct RTC_DOW_CTL_REG_s {
    unsigned int dow:3; // 
    unsigned int dow_rtc_rdy:1; // 
} RTC_DOW_CTL_REG_s;

typedef union RTC_DOW_CTL_u {
    RTC_DOW_CTL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_DOW_CTL_u;

typedef struct RTC_MON_CTL_REG_s {
    unsigned int mon_bin:6; // 
    unsigned int mon_lsb_bcd:4; // 
    unsigned int mon_msb_bcd:4; // 
    unsigned int mon_rtc_rdy:1; // 
} RTC_MON_CTL_REG_s;

typedef union RTC_MON_CTL_u {
    RTC_MON_CTL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_MON_CTL_u;

typedef struct RTC_YEAR_CTL_REG_s {
    unsigned int yr_bin:12; // 
    unsigned int yr_lsb_bcd:4; // 
    unsigned int yr_decade_bcd:4; // 
    unsigned int yr_cent_low_bcd:4; // 
    unsigned int yr_cent_high_bcd:4; // 
    unsigned int yr_rtc_rdy:1; // 
} RTC_YEAR_CTL_REG_s;

typedef union RTC_YEAR_CTL_u {
    RTC_YEAR_CTL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_YEAR_CTL_u;

typedef struct RTC_A0_MIN_REG_s {
    unsigned int a_min_en_0:1; // 
    unsigned int a_min_bin_0:6; // 
    unsigned int a_min_bcd_low_0:4; // 
    unsigned int a_min_bcd_high_0:4; // 
} RTC_A0_MIN_REG_s;

typedef union RTC_A0_MIN_u {
    RTC_A0_MIN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_A0_MIN_u;

typedef struct RTC_A1_MIN_REG_s {
    unsigned int a_min_en_1:1; // 
    unsigned int a_min_bin_1:6; // 
    unsigned int a_min_bcd_low_1:4; // 
    unsigned int a_min_bcd_high_1:4; // 
} RTC_A1_MIN_REG_s;

typedef union RTC_A1_MIN_u {
    RTC_A1_MIN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_A1_MIN_u;

typedef struct RTC_A0_HOUR_REG_s {
    unsigned int a_hr_en_0:1; // 
    unsigned int a_hr_bin_0:5; // 
    unsigned int a_hr_bcd_low_0:4; // 
    unsigned int a_hr_bcd_high_0:4; // 
} RTC_A0_HOUR_REG_s;

typedef union RTC_A0_HOUR_u {
    RTC_A0_HOUR_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_A0_HOUR_u;

typedef struct RTC_A1_HOUR_REG_s {
    unsigned int a_hr_en_1:1; // 
    unsigned int a_hr_bin_1:5; // 
    unsigned int a_hr_bcd_low_1:4; // 
    unsigned int a_hr_bcd_high_1:4; // 
} RTC_A1_HOUR_REG_s;

typedef union RTC_A1_HOUR_u {
    RTC_A1_HOUR_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_A1_HOUR_u;

typedef struct RTC_A0_DAY_REG_s {
    unsigned int a_dow_en_0:1; // 
    unsigned int a_dow_0:3; // 
    unsigned int a_dom_en_0:1; // 
    unsigned int a_dom_bin_0:5; // 
    unsigned int a_dom_lsb_bcd_0:4; // 
    unsigned int a_dom_msb_bcd_0:4; // 
} RTC_A0_DAY_REG_s;

typedef union RTC_A0_DAY_u {
    RTC_A0_DAY_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_A0_DAY_u;

typedef struct RTC_A1_DAY_REG_s {
    unsigned int a_dow_en_1:1; // 
    unsigned int a_dow_1:3; // 
    unsigned int a_dom_en_1:1; // 
    unsigned int a_dom_bin_1:5; // 
    unsigned int a_dom_lsb_bcd_1:4; // 
    unsigned int a_dom_msb_bcd_1:4; // 
} RTC_A1_DAY_REG_s;

typedef union RTC_A1_DAY_u {
    RTC_A1_DAY_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_A1_DAY_u;

typedef struct RTC_PRD_INTR_SEL0_REG_s {
    unsigned int prd_intr_sel_0:3; // 
} RTC_PRD_INTR_SEL0_REG_s;

typedef union RTC_PRD_INTR_SEL0_u {
    RTC_PRD_INTR_SEL0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_PRD_INTR_SEL0_u;

typedef struct RTC_PRD_INTR_SEL1_REG_s {
    unsigned int prd_intr_sel_1:3; // 
} RTC_PRD_INTR_SEL1_REG_s;

typedef union RTC_PRD_INTR_SEL1_u {
    RTC_PRD_INTR_SEL1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_PRD_INTR_SEL1_u;

typedef struct RTC_INTERVAL_INTR_SEL_REG_s {
    unsigned int interval_intr_sel:2; // 
} RTC_INTERVAL_INTR_SEL_REG_s;

typedef union RTC_INTERVAL_INTR_SEL_u {
    RTC_INTERVAL_INTR_SEL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_INTERVAL_INTR_SEL_u;

typedef struct RTC_RTC_CAL_REG_s {
    unsigned int freq_out_cal:2; // 
    unsigned int clk_cal_sign:1; // 
    unsigned int clk_cal_ppm_val:8; // 
} RTC_RTC_CAL_REG_s;

typedef union RTC_RTC_CAL_u {
    RTC_RTC_CAL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_RTC_CAL_u;

typedef struct RTC_RTC_TEMP_CMP_REG_s {
    unsigned int temp_cmp_sign:1; // 
    unsigned int temp_cmp_ppm_val:8; // 
} RTC_RTC_TEMP_CMP_REG_s;

typedef union RTC_RTC_TEMP_CMP_u {
    RTC_RTC_TEMP_CMP_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_RTC_TEMP_CMP_u;

typedef struct RTC_REGS_s{
    volatile RTC_DESC_u DESC;
    volatile RTC_PWR_EN_u PWR_EN;
    volatile RTC_RST_CTRL_u RST_CTRL;
    volatile RTC_RST_STS_u RST_STS;
    volatile RTC_BUS_CLK_FORCE_u BUS_CLK_FORCE;
    volatile RTC_CLK_CTRL_u CLK_CTRL;
    volatile RTC_INTR_STS_u INTR_STS;
    volatile RTC_INTR_EVENT_u INTR_EVENT;
    volatile RTC_INTR_EN_u INTR_EN;
    volatile RTC_INTR_NMI_EN_u INTR_NMI_EN;
    volatile RTC_EVENT_EN_u EVENT_EN;
    volatile RTC_INTR_SW_SET_u INTR_SW_SET;
    volatile RTC_DEBUG_CTL_u DEBUG_CTL;
    volatile RTC_RTC_CTL_u RTC_CTL;
    volatile RTC_SEC_CTL_u SEC_CTL;
    volatile RTC_MIN_CTL_u MIN_CTL;
    volatile RTC_HR_CTL_u HR_CTL;
    volatile RTC_DOM_CTL_u DOM_CTL;
    volatile RTC_DOW_CTL_u DOW_CTL;
    volatile RTC_MON_CTL_u MON_CTL;
    volatile RTC_YEAR_CTL_u YEAR_CTL;
    volatile RTC_A0_MIN_u A0_MIN;
    volatile RTC_A1_MIN_u A1_MIN;
    volatile RTC_A0_HOUR_u A0_HOUR;
    volatile RTC_A1_HOUR_u A1_HOUR;
    volatile RTC_A0_DAY_u A0_DAY;
    volatile RTC_A1_DAY_u A1_DAY;
    volatile RTC_PRD_INTR_SEL0_u PRD_INTR_SEL0;
    volatile RTC_PRD_INTR_SEL1_u PRD_INTR_SEL1;
    volatile RTC_INTERVAL_INTR_SEL_u INTERVAL_INTR_SEL;
    volatile RTC_RTC_CAL_u RTC_CAL;
    volatile RTC_RTC_TEMP_CMP_u RTC_TEMP_CMP;
} RTC_REGS_s;

#define RTC_DESC_MODULE_TYPE_OFS (0)
#define RTC_DESC_MODULE_TYPE_MASK ((uint32_t)0x000000FFU)
#define RTC_DESC_MODUE_SUBTYPE_OFS (8)
#define RTC_DESC_MODUE_SUBTYPE_MASK ((uint32_t)0x0000FF00U)
#define RTC_DESC_MAJOR_REV_OFS (16)
#define RTC_DESC_MAJOR_REV_MASK ((uint32_t)0x000F0000U)
#define RTC_DESC_MINOR_REV_OFS (20)
#define RTC_DESC_MINOR_REV_MASK ((uint32_t)0x00F00000U)
#define RTC_PWR_EN_PWR_EN_OFS (0)
#define RTC_PWR_EN_PWR_EN_MASK ((uint32_t)0x00000001U)
#define RTC_PWR_EN_PWR_EN_KEY_OFS (24)
#define RTC_PWR_EN_PWR_EN_KEY_MASK ((uint32_t)0xFF000000U)
#define RTC_RST_CTRL_RST_OFS (0)
#define RTC_RST_CTRL_RST_MASK ((uint32_t)0x00000001U)
#define RTC_RST_CTRL_RST_STS_CLR_OFS (1)
#define RTC_RST_CTRL_RST_STS_CLR_MASK ((uint32_t)0x00000002U)
#define RTC_RST_CTRL_RST_KEY_OFS (24)
#define RTC_RST_CTRL_RST_KEY_MASK ((uint32_t)0xFF000000U)
#define RTC_RST_STS_RST_STS_OFS (0)
#define RTC_RST_STS_RST_STS_MASK ((uint32_t)0x00000001U)
#define RTC_BUS_CLK_FORCE_BUS_CLK_FORCE_32MHZ_OFS (0)
#define RTC_BUS_CLK_FORCE_BUS_CLK_FORCE_32MHZ_MASK ((uint32_t)0x00000001U)
#define RTC_BUS_CLK_FORCE_BUS_CLK_FORCE_KEY_OFS (24)
#define RTC_BUS_CLK_FORCE_BUS_CLK_FORCE_KEY_MASK ((uint32_t)0xFF000000U)
#define RTC_CLK_CTRL_CLK_EN_OFS (0)
#define RTC_CLK_CTRL_CLK_EN_MASK ((uint32_t)0x00000001U)
#define RTC_INTR_STS_INTR_FIRST_OFS (0)
#define RTC_INTR_STS_INTR_FIRST_MASK ((uint32_t)0x0000000FU)
#define RTC_INTR_EVENT_PRD0_OFS (0)
#define RTC_INTR_EVENT_PRD0_MASK ((uint32_t)0x00000001U)
#define RTC_INTR_EVENT_PRD1_OFS (1)
#define RTC_INTR_EVENT_PRD1_MASK ((uint32_t)0x00000002U)
#define RTC_INTR_EVENT_ALARM0_OFS (2)
#define RTC_INTR_EVENT_ALARM0_MASK ((uint32_t)0x00000004U)
#define RTC_INTR_EVENT_ALARM1_OFS (3)
#define RTC_INTR_EVENT_ALARM1_MASK ((uint32_t)0x00000008U)
#define RTC_INTR_EVENT_RTC_RDY_OFS (4)
#define RTC_INTR_EVENT_RTC_RDY_MASK ((uint32_t)0x00000010U)
#define RTC_INTR_EVENT_INTERVAL_ALARM_OFS (5)
#define RTC_INTR_EVENT_INTERVAL_ALARM_MASK ((uint32_t)0x00000020U)
#define RTC_INTR_EN_PRD0_EN_OFS (0)
#define RTC_INTR_EN_PRD0_EN_MASK ((uint32_t)0x00000001U)
#define RTC_INTR_EN_PRD1_EN_OFS (1)
#define RTC_INTR_EN_PRD1_EN_MASK ((uint32_t)0x00000002U)
#define RTC_INTR_EN_ALARM0_EN_OFS (2)
#define RTC_INTR_EN_ALARM0_EN_MASK ((uint32_t)0x00000004U)
#define RTC_INTR_EN_ALARM1_EN_OFS (3)
#define RTC_INTR_EN_ALARM1_EN_MASK ((uint32_t)0x00000008U)
#define RTC_INTR_EN_RTC_RDY_EN_OFS (4)
#define RTC_INTR_EN_RTC_RDY_EN_MASK ((uint32_t)0x00000010U)
#define RTC_INTR_EN_INTERVAL_ALARM_EN_OFS (5)
#define RTC_INTR_EN_INTERVAL_ALARM_EN_MASK ((uint32_t)0x00000020U)
#define RTC_INTR_NMI_EN_PRD0_NMI_EN_OFS (0)
#define RTC_INTR_NMI_EN_PRD0_NMI_EN_MASK ((uint32_t)0x00000001U)
#define RTC_INTR_NMI_EN_PRD1_NMI_EN_OFS (1)
#define RTC_INTR_NMI_EN_PRD1_NMI_EN_MASK ((uint32_t)0x00000002U)
#define RTC_INTR_NMI_EN_ALARM0_NMI_EN_OFS (2)
#define RTC_INTR_NMI_EN_ALARM0_NMI_EN_MASK ((uint32_t)0x00000004U)
#define RTC_INTR_NMI_EN_ALARM1_NMI_EN_OFS (3)
#define RTC_INTR_NMI_EN_ALARM1_NMI_EN_MASK ((uint32_t)0x00000008U)
#define RTC_INTR_NMI_EN_RTC_RDY_NMI_EN_OFS (4)
#define RTC_INTR_NMI_EN_RTC_RDY_NMI_EN_MASK ((uint32_t)0x00000010U)
#define RTC_INTR_NMI_EN_INTERVAL_ALARM_NMI_EN_OFS (5)
#define RTC_INTR_NMI_EN_INTERVAL_ALARM_NMI_EN_MASK ((uint32_t)0x00000020U)
#define RTC_EVENT_EN_PRD0_EVENT_EN_OFS (0)
#define RTC_EVENT_EN_PRD0_EVENT_EN_MASK ((uint32_t)0x00000001U)
#define RTC_EVENT_EN_PRD1_EVENT_EN_OFS (1)
#define RTC_EVENT_EN_PRD1_EVENT_EN_MASK ((uint32_t)0x00000002U)
#define RTC_EVENT_EN_ALARM0_EVENT_EN_OFS (2)
#define RTC_EVENT_EN_ALARM0_EVENT_EN_MASK ((uint32_t)0x00000004U)
#define RTC_EVENT_EN_ALARM1_EVENT_EN_OFS (3)
#define RTC_EVENT_EN_ALARM1_EVENT_EN_MASK ((uint32_t)0x00000008U)
#define RTC_EVENT_EN_RTC_RDY_EVENT_EN_OFS (4)
#define RTC_EVENT_EN_RTC_RDY_EVENT_EN_MASK ((uint32_t)0x00000010U)
#define RTC_EVENT_EN_INTERVAL_ALARM_EVENT_EN_OFS (5)
#define RTC_EVENT_EN_INTERVAL_ALARM_EVENT_EN_MASK ((uint32_t)0x00000020U)
#define RTC_INTR_SW_SET_PRD0_SW_SET_OFS (0)
#define RTC_INTR_SW_SET_PRD0_SW_SET_MASK ((uint32_t)0x00000001U)
#define RTC_INTR_SW_SET_PRD1_SW_SET_OFS (1)
#define RTC_INTR_SW_SET_PRD1_SW_SET_MASK ((uint32_t)0x00000002U)
#define RTC_INTR_SW_SET_ALARM0_SW_SET_OFS (2)
#define RTC_INTR_SW_SET_ALARM0_SW_SET_MASK ((uint32_t)0x00000004U)
#define RTC_INTR_SW_SET_ALARM1_SW_SET_OFS (3)
#define RTC_INTR_SW_SET_ALARM1_SW_SET_MASK ((uint32_t)0x00000008U)
#define RTC_INTR_SW_SET_RTC_RDY_SW_SET_OFS (4)
#define RTC_INTR_SW_SET_RTC_RDY_SW_SET_MASK ((uint32_t)0x00000010U)
#define RTC_INTR_SW_SET_INTERVAL_ALARM_SW_SET_OFS (5)
#define RTC_INTR_SW_SET_INTERVAL_ALARM_SW_SET_MASK ((uint32_t)0x00000020U)
#define RTC_DEBUG_CTL_INTR_EN_DURING_DEBUG_OFS (0)
#define RTC_DEBUG_CTL_INTR_EN_DURING_DEBUG_MASK ((uint32_t)0x00000001U)
#define RTC_DEBUG_CTL_CTR_EN_DURING_DEBUG_OFS (1)
#define RTC_DEBUG_CTL_CTR_EN_DURING_DEBUG_MASK ((uint32_t)0x00000002U)
#define RTC_RTC_CTL_RTC_BCD_OFS (0)
#define RTC_RTC_CTL_RTC_BCD_MASK ((uint32_t)0x00000001U)
#define RTC_SEC_CTL_SEC_BIN_OFS (0)
#define RTC_SEC_CTL_SEC_BIN_MASK ((uint32_t)0x0000003FU)
#define RTC_SEC_CTL_SEC_LSB_BCD_OFS (6)
#define RTC_SEC_CTL_SEC_LSB_BCD_MASK ((uint32_t)0x000003C0U)
#define RTC_SEC_CTL_SEC_MSB_BCD_OFS (10)
#define RTC_SEC_CTL_SEC_MSB_BCD_MASK ((uint32_t)0x00003C00U)
#define RTC_SEC_CTL_SEC_RTC_RDY_OFS (14)
#define RTC_SEC_CTL_SEC_RTC_RDY_MASK ((uint32_t)0x00004000U)
#define RTC_MIN_CTL_MIN_BIN_OFS (0)
#define RTC_MIN_CTL_MIN_BIN_MASK ((uint32_t)0x0000003FU)
#define RTC_MIN_CTL_MIN_LSB_BCD_OFS (6)
#define RTC_MIN_CTL_MIN_LSB_BCD_MASK ((uint32_t)0x000003C0U)
#define RTC_MIN_CTL_MIN_MSB_BCD_OFS (10)
#define RTC_MIN_CTL_MIN_MSB_BCD_MASK ((uint32_t)0x00003C00U)
#define RTC_MIN_CTL_MIN_RTC_RDY_OFS (14)
#define RTC_MIN_CTL_MIN_RTC_RDY_MASK ((uint32_t)0x00004000U)
#define RTC_HR_CTL_HR_BIN_OFS (0)
#define RTC_HR_CTL_HR_BIN_MASK ((uint32_t)0x0000001FU)
#define RTC_HR_CTL_HR_LSB_BCD_OFS (5)
#define RTC_HR_CTL_HR_LSB_BCD_MASK ((uint32_t)0x000001E0U)
#define RTC_HR_CTL_HR_MSB_BCD_OFS (9)
#define RTC_HR_CTL_HR_MSB_BCD_MASK ((uint32_t)0x00001E00U)
#define RTC_HR_CTL_HR_RTC_RDY_OFS (13)
#define RTC_HR_CTL_HR_RTC_RDY_MASK ((uint32_t)0x00002000U)
#define RTC_DOM_CTL_DOM_BIN_OFS (0)
#define RTC_DOM_CTL_DOM_BIN_MASK ((uint32_t)0x0000001FU)
#define RTC_DOM_CTL_DOM_LSB_BCD_OFS (5)
#define RTC_DOM_CTL_DOM_LSB_BCD_MASK ((uint32_t)0x000001E0U)
#define RTC_DOM_CTL_DOM_MSB_BCD_OFS (9)
#define RTC_DOM_CTL_DOM_MSB_BCD_MASK ((uint32_t)0x00001E00U)
#define RTC_DOM_CTL_DOM_RTC_RDY_OFS (13)
#define RTC_DOM_CTL_DOM_RTC_RDY_MASK ((uint32_t)0x00002000U)
#define RTC_DOW_CTL_DOW_OFS (0)
#define RTC_DOW_CTL_DOW_MASK ((uint32_t)0x00000007U)
#define RTC_DOW_CTL_DOW_RTC_RDY_OFS (3)
#define RTC_DOW_CTL_DOW_RTC_RDY_MASK ((uint32_t)0x00000008U)
#define RTC_MON_CTL_MON_BIN_OFS (0)
#define RTC_MON_CTL_MON_BIN_MASK ((uint32_t)0x0000003FU)
#define RTC_MON_CTL_MON_LSB_BCD_OFS (6)
#define RTC_MON_CTL_MON_LSB_BCD_MASK ((uint32_t)0x000003C0U)
#define RTC_MON_CTL_MON_MSB_BCD_OFS (10)
#define RTC_MON_CTL_MON_MSB_BCD_MASK ((uint32_t)0x00003C00U)
#define RTC_MON_CTL_MON_RTC_RDY_OFS (14)
#define RTC_MON_CTL_MON_RTC_RDY_MASK ((uint32_t)0x00004000U)
#define RTC_YEAR_CTL_YR_BIN_OFS (0)
#define RTC_YEAR_CTL_YR_BIN_MASK ((uint32_t)0x00000FFFU)
#define RTC_YEAR_CTL_YR_LSB_BCD_OFS (12)
#define RTC_YEAR_CTL_YR_LSB_BCD_MASK ((uint32_t)0x0000F000U)
#define RTC_YEAR_CTL_YR_DECADE_BCD_OFS (16)
#define RTC_YEAR_CTL_YR_DECADE_BCD_MASK ((uint32_t)0x000F0000U)
#define RTC_YEAR_CTL_YR_CENT_LOW_BCD_OFS (20)
#define RTC_YEAR_CTL_YR_CENT_LOW_BCD_MASK ((uint32_t)0x00F00000U)
#define RTC_YEAR_CTL_YR_CENT_HIGH_BCD_OFS (24)
#define RTC_YEAR_CTL_YR_CENT_HIGH_BCD_MASK ((uint32_t)0x0F000000U)
#define RTC_YEAR_CTL_YR_RTC_RDY_OFS (28)
#define RTC_YEAR_CTL_YR_RTC_RDY_MASK ((uint32_t)0x10000000U)
#define RTC_A0_MIN_A_MIN_EN_0_OFS (0)
#define RTC_A0_MIN_A_MIN_EN_0_MASK ((uint32_t)0x00000001U)
#define RTC_A0_MIN_A_MIN_BIN_0_OFS (1)
#define RTC_A0_MIN_A_MIN_BIN_0_MASK ((uint32_t)0x0000007EU)
#define RTC_A0_MIN_A_MIN_BCD_LOW_0_OFS (7)
#define RTC_A0_MIN_A_MIN_BCD_LOW_0_MASK ((uint32_t)0x00000780U)
#define RTC_A0_MIN_A_MIN_BCD_HIGH_0_OFS (11)
#define RTC_A0_MIN_A_MIN_BCD_HIGH_0_MASK ((uint32_t)0x00007800U)
#define RTC_A1_MIN_A_MIN_EN_1_OFS (0)
#define RTC_A1_MIN_A_MIN_EN_1_MASK ((uint32_t)0x00000001U)
#define RTC_A1_MIN_A_MIN_BIN_1_OFS (1)
#define RTC_A1_MIN_A_MIN_BIN_1_MASK ((uint32_t)0x0000007EU)
#define RTC_A1_MIN_A_MIN_BCD_LOW_1_OFS (7)
#define RTC_A1_MIN_A_MIN_BCD_LOW_1_MASK ((uint32_t)0x00000780U)
#define RTC_A1_MIN_A_MIN_BCD_HIGH_1_OFS (11)
#define RTC_A1_MIN_A_MIN_BCD_HIGH_1_MASK ((uint32_t)0x00007800U)
#define RTC_A0_HOUR_A_HR_EN_0_OFS (0)
#define RTC_A0_HOUR_A_HR_EN_0_MASK ((uint32_t)0x00000001U)
#define RTC_A0_HOUR_A_HR_BIN_0_OFS (1)
#define RTC_A0_HOUR_A_HR_BIN_0_MASK ((uint32_t)0x0000003EU)
#define RTC_A0_HOUR_A_HR_BCD_LOW_0_OFS (6)
#define RTC_A0_HOUR_A_HR_BCD_LOW_0_MASK ((uint32_t)0x000003C0U)
#define RTC_A0_HOUR_A_HR_BCD_HIGH_0_OFS (10)
#define RTC_A0_HOUR_A_HR_BCD_HIGH_0_MASK ((uint32_t)0x00003C00U)
#define RTC_A1_HOUR_A_HR_EN_1_OFS (0)
#define RTC_A1_HOUR_A_HR_EN_1_MASK ((uint32_t)0x00000001U)
#define RTC_A1_HOUR_A_HR_BIN_1_OFS (1)
#define RTC_A1_HOUR_A_HR_BIN_1_MASK ((uint32_t)0x0000003EU)
#define RTC_A1_HOUR_A_HR_BCD_LOW_1_OFS (6)
#define RTC_A1_HOUR_A_HR_BCD_LOW_1_MASK ((uint32_t)0x000003C0U)
#define RTC_A1_HOUR_A_HR_BCD_HIGH_1_OFS (10)
#define RTC_A1_HOUR_A_HR_BCD_HIGH_1_MASK ((uint32_t)0x00003C00U)
#define RTC_A0_DAY_A_DOW_EN_0_OFS (0)
#define RTC_A0_DAY_A_DOW_EN_0_MASK ((uint32_t)0x00000001U)
#define RTC_A0_DAY_A_DOW_0_OFS (1)
#define RTC_A0_DAY_A_DOW_0_MASK ((uint32_t)0x0000000EU)
#define RTC_A0_DAY_A_DOM_EN_0_OFS (4)
#define RTC_A0_DAY_A_DOM_EN_0_MASK ((uint32_t)0x00000010U)
#define RTC_A0_DAY_A_DOM_BIN_0_OFS (5)
#define RTC_A0_DAY_A_DOM_BIN_0_MASK ((uint32_t)0x000003E0U)
#define RTC_A0_DAY_A_DOM_LSB_BCD_0_OFS (10)
#define RTC_A0_DAY_A_DOM_LSB_BCD_0_MASK ((uint32_t)0x00003C00U)
#define RTC_A0_DAY_A_DOM_MSB_BCD_0_OFS (14)
#define RTC_A0_DAY_A_DOM_MSB_BCD_0_MASK ((uint32_t)0x0003C000U)
#define RTC_A1_DAY_A_DOW_EN_1_OFS (0)
#define RTC_A1_DAY_A_DOW_EN_1_MASK ((uint32_t)0x00000001U)
#define RTC_A1_DAY_A_DOW_1_OFS (1)
#define RTC_A1_DAY_A_DOW_1_MASK ((uint32_t)0x0000000EU)
#define RTC_A1_DAY_A_DOM_EN_1_OFS (4)
#define RTC_A1_DAY_A_DOM_EN_1_MASK ((uint32_t)0x00000010U)
#define RTC_A1_DAY_A_DOM_BIN_1_OFS (5)
#define RTC_A1_DAY_A_DOM_BIN_1_MASK ((uint32_t)0x000003E0U)
#define RTC_A1_DAY_A_DOM_LSB_BCD_1_OFS (10)
#define RTC_A1_DAY_A_DOM_LSB_BCD_1_MASK ((uint32_t)0x00003C00U)
#define RTC_A1_DAY_A_DOM_MSB_BCD_1_OFS (14)
#define RTC_A1_DAY_A_DOM_MSB_BCD_1_MASK ((uint32_t)0x0003C000U)
#define RTC_PRD_INTR_SEL0_PRD_INTR_SEL_0_OFS (0)
#define RTC_PRD_INTR_SEL0_PRD_INTR_SEL_0_MASK ((uint32_t)0x00000007U)
#define RTC_PRD_INTR_SEL1_PRD_INTR_SEL_1_OFS (0)
#define RTC_PRD_INTR_SEL1_PRD_INTR_SEL_1_MASK ((uint32_t)0x00000007U)
#define RTC_INTERVAL_INTR_SEL_INTERVAL_INTR_SEL_OFS (0)
#define RTC_INTERVAL_INTR_SEL_INTERVAL_INTR_SEL_MASK ((uint32_t)0x00000003U)
#define RTC_RTC_CAL_FREQ_OUT_CAL_OFS (0)
#define RTC_RTC_CAL_FREQ_OUT_CAL_MASK ((uint32_t)0x00000003U)
#define RTC_RTC_CAL_CLK_CAL_SIGN_OFS (2)
#define RTC_RTC_CAL_CLK_CAL_SIGN_MASK ((uint32_t)0x00000004U)
#define RTC_RTC_CAL_CLK_CAL_PPM_VAL_OFS (3)
#define RTC_RTC_CAL_CLK_CAL_PPM_VAL_MASK ((uint32_t)0x000007F8U)
#define RTC_RTC_TEMP_CMP_TEMP_CMP_SIGN_OFS (0)
#define RTC_RTC_TEMP_CMP_TEMP_CMP_SIGN_MASK ((uint32_t)0x00000001U)
#define RTC_RTC_TEMP_CMP_TEMP_CMP_PPM_VAL_OFS (1)
#define RTC_RTC_TEMP_CMP_TEMP_CMP_PPM_VAL_MASK ((uint32_t)0x000001FEU)
#endif
