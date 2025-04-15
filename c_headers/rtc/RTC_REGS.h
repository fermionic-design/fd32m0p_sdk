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
    RTC_DESC_REG_s DESC;
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
    RTC_PWR_EN_REG_s PWR_EN;
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
    RTC_RST_CTRL_REG_s RST_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_RST_CTRL_u;

typedef struct RTC_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} RTC_RST_STS_REG_s;

typedef union RTC_RST_STS_u {
    RTC_RST_STS_REG_s RST_STS;
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
    RTC_BUS_CLK_FORCE_REG_s BUS_CLK_FORCE;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_BUS_CLK_FORCE_u;

typedef struct RTC_CLK_CTRL_REG_s {
    unsigned int clk_en:1; // 
} RTC_CLK_CTRL_REG_s;

typedef union RTC_CLK_CTRL_u {
    RTC_CLK_CTRL_REG_s CLK_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_CLK_CTRL_u;

typedef struct RTC_INTR_STS_REG_s {
    unsigned int intr_first:4; // 
} RTC_INTR_STS_REG_s;

typedef union RTC_INTR_STS_u {
    RTC_INTR_STS_REG_s INTR_STS;
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
    RTC_INTR_EVENT_REG_s INTR_EVENT;
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
    RTC_INTR_EN_REG_s INTR_EN;
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
    RTC_INTR_NMI_EN_REG_s INTR_NMI_EN;
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
    RTC_EVENT_EN_REG_s EVENT_EN;
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
    RTC_INTR_SW_SET_REG_s INTR_SW_SET;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_INTR_SW_SET_u;

typedef struct RTC_DEBUG_CTL_REG_s {
    unsigned int intr_en_during_debug:1; // 
    unsigned int ctr_en_during_debug:1; // 
} RTC_DEBUG_CTL_REG_s;

typedef union RTC_DEBUG_CTL_u {
    RTC_DEBUG_CTL_REG_s DEBUG_CTL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_DEBUG_CTL_u;

typedef struct RTC_RTC_CTL_REG_s {
    unsigned int rtc_bcd:1; // 
} RTC_RTC_CTL_REG_s;

typedef union RTC_RTC_CTL_u {
    RTC_RTC_CTL_REG_s RTC_CTL;
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
    RTC_SEC_CTL_REG_s SEC_CTL;
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
    RTC_MIN_CTL_REG_s MIN_CTL;
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
    RTC_HR_CTL_REG_s HR_CTL;
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
    RTC_DOM_CTL_REG_s DOM_CTL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_DOM_CTL_u;

typedef struct RTC_DOW_CTL_REG_s {
    unsigned int dow:3; // 
    unsigned int dow_rtc_rdy:1; // 
} RTC_DOW_CTL_REG_s;

typedef union RTC_DOW_CTL_u {
    RTC_DOW_CTL_REG_s DOW_CTL;
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
    RTC_MON_CTL_REG_s MON_CTL;
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
    RTC_YEAR_CTL_REG_s YEAR_CTL;
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
    RTC_A0_MIN_REG_s A0_MIN;
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
    RTC_A1_MIN_REG_s A1_MIN;
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
    RTC_A0_HOUR_REG_s A0_HOUR;
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
    RTC_A1_HOUR_REG_s A1_HOUR;
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
    RTC_A0_DAY_REG_s A0_DAY;
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
    RTC_A1_DAY_REG_s A1_DAY;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_A1_DAY_u;

typedef struct RTC_PRD_INTR_SEL0_REG_s {
    unsigned int prd_intr_sel_0:3; // 
} RTC_PRD_INTR_SEL0_REG_s;

typedef union RTC_PRD_INTR_SEL0_u {
    RTC_PRD_INTR_SEL0_REG_s PRD_INTR_SEL0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_PRD_INTR_SEL0_u;

typedef struct RTC_PRD_INTR_SEL1_REG_s {
    unsigned int prd_intr_sel_1:3; // 
} RTC_PRD_INTR_SEL1_REG_s;

typedef union RTC_PRD_INTR_SEL1_u {
    RTC_PRD_INTR_SEL1_REG_s PRD_INTR_SEL1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_PRD_INTR_SEL1_u;

typedef struct RTC_INTERVAL_INTR_SEL_REG_s {
    unsigned int interval_intr_sel:2; // 
} RTC_INTERVAL_INTR_SEL_REG_s;

typedef union RTC_INTERVAL_INTR_SEL_u {
    RTC_INTERVAL_INTR_SEL_REG_s INTERVAL_INTR_SEL;
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
    RTC_RTC_CAL_REG_s RTC_CAL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} RTC_RTC_CAL_u;

typedef struct RTC_RTC_TEMP_CMP_REG_s {
    unsigned int temp_cmp_sign:1; // 
    unsigned int temp_cmp_ppm_val:8; // 
} RTC_RTC_TEMP_CMP_REG_s;

typedef union RTC_RTC_TEMP_CMP_u {
    RTC_RTC_TEMP_CMP_REG_s RTC_TEMP_CMP;
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

#define RTC_DESC_module_type_OFS (0)
#define RTC_DESC_module_type_MASK ((uint32_t)0x000000FFU)
#define RTC_DESC_modue_subtype_OFS (8)
#define RTC_DESC_modue_subtype_MASK ((uint32_t)0x0000FF00U)
#define RTC_DESC_major_rev_OFS (16)
#define RTC_DESC_major_rev_MASK ((uint32_t)0x000F0000U)
#define RTC_DESC_minor_rev_OFS (20)
#define RTC_DESC_minor_rev_MASK ((uint32_t)0x00F00000U)
#define RTC_PWR_EN_pwr_en_OFS (0)
#define RTC_PWR_EN_pwr_en_MASK ((uint32_t)0x00000001U)
#define RTC_PWR_EN_pwr_en_key_OFS (24)
#define RTC_PWR_EN_pwr_en_key_MASK ((uint32_t)0xFF000000U)
#define RTC_RST_CTRL_rst_OFS (0)
#define RTC_RST_CTRL_rst_MASK ((uint32_t)0x00000001U)
#define RTC_RST_CTRL_rst_sts_clr_OFS (1)
#define RTC_RST_CTRL_rst_sts_clr_MASK ((uint32_t)0x00000002U)
#define RTC_RST_CTRL_rst_key_OFS (24)
#define RTC_RST_CTRL_rst_key_MASK ((uint32_t)0xFF000000U)
#define RTC_RST_STS_rst_sts_OFS (0)
#define RTC_RST_STS_rst_sts_MASK ((uint32_t)0x00000001U)
#define RTC_BUS_CLK_FORCE_bus_clk_force_32mhz_OFS (0)
#define RTC_BUS_CLK_FORCE_bus_clk_force_32mhz_MASK ((uint32_t)0x00000001U)
#define RTC_BUS_CLK_FORCE_bus_clk_force_key_OFS (24)
#define RTC_BUS_CLK_FORCE_bus_clk_force_key_MASK ((uint32_t)0xFF000000U)
#define RTC_CLK_CTRL_clk_en_OFS (0)
#define RTC_CLK_CTRL_clk_en_MASK ((uint32_t)0x00000001U)
#define RTC_INTR_STS_intr_first_OFS (0)
#define RTC_INTR_STS_intr_first_MASK ((uint32_t)0x0000000FU)
#define RTC_INTR_EVENT_prd0_OFS (0)
#define RTC_INTR_EVENT_prd0_MASK ((uint32_t)0x00000001U)
#define RTC_INTR_EVENT_prd1_OFS (1)
#define RTC_INTR_EVENT_prd1_MASK ((uint32_t)0x00000002U)
#define RTC_INTR_EVENT_alarm0_OFS (2)
#define RTC_INTR_EVENT_alarm0_MASK ((uint32_t)0x00000004U)
#define RTC_INTR_EVENT_alarm1_OFS (3)
#define RTC_INTR_EVENT_alarm1_MASK ((uint32_t)0x00000008U)
#define RTC_INTR_EVENT_rtc_rdy_OFS (4)
#define RTC_INTR_EVENT_rtc_rdy_MASK ((uint32_t)0x00000010U)
#define RTC_INTR_EVENT_interval_alarm_OFS (5)
#define RTC_INTR_EVENT_interval_alarm_MASK ((uint32_t)0x00000020U)
#define RTC_INTR_EN_prd0_en_OFS (0)
#define RTC_INTR_EN_prd0_en_MASK ((uint32_t)0x00000001U)
#define RTC_INTR_EN_prd1_en_OFS (1)
#define RTC_INTR_EN_prd1_en_MASK ((uint32_t)0x00000002U)
#define RTC_INTR_EN_alarm0_en_OFS (2)
#define RTC_INTR_EN_alarm0_en_MASK ((uint32_t)0x00000004U)
#define RTC_INTR_EN_alarm1_en_OFS (3)
#define RTC_INTR_EN_alarm1_en_MASK ((uint32_t)0x00000008U)
#define RTC_INTR_EN_rtc_rdy_en_OFS (4)
#define RTC_INTR_EN_rtc_rdy_en_MASK ((uint32_t)0x00000010U)
#define RTC_INTR_EN_interval_alarm_en_OFS (5)
#define RTC_INTR_EN_interval_alarm_en_MASK ((uint32_t)0x00000020U)
#define RTC_INTR_NMI_EN_prd0_nmi_en_OFS (0)
#define RTC_INTR_NMI_EN_prd0_nmi_en_MASK ((uint32_t)0x00000001U)
#define RTC_INTR_NMI_EN_prd1_nmi_en_OFS (1)
#define RTC_INTR_NMI_EN_prd1_nmi_en_MASK ((uint32_t)0x00000002U)
#define RTC_INTR_NMI_EN_alarm0_nmi_en_OFS (2)
#define RTC_INTR_NMI_EN_alarm0_nmi_en_MASK ((uint32_t)0x00000004U)
#define RTC_INTR_NMI_EN_alarm1_nmi_en_OFS (3)
#define RTC_INTR_NMI_EN_alarm1_nmi_en_MASK ((uint32_t)0x00000008U)
#define RTC_INTR_NMI_EN_rtc_rdy_nmi_en_OFS (4)
#define RTC_INTR_NMI_EN_rtc_rdy_nmi_en_MASK ((uint32_t)0x00000010U)
#define RTC_INTR_NMI_EN_interval_alarm_nmi_en_OFS (5)
#define RTC_INTR_NMI_EN_interval_alarm_nmi_en_MASK ((uint32_t)0x00000020U)
#define RTC_EVENT_EN_prd0_event_en_OFS (0)
#define RTC_EVENT_EN_prd0_event_en_MASK ((uint32_t)0x00000001U)
#define RTC_EVENT_EN_prd1_event_en_OFS (1)
#define RTC_EVENT_EN_prd1_event_en_MASK ((uint32_t)0x00000002U)
#define RTC_EVENT_EN_alarm0_event_en_OFS (2)
#define RTC_EVENT_EN_alarm0_event_en_MASK ((uint32_t)0x00000004U)
#define RTC_EVENT_EN_alarm1_event_en_OFS (3)
#define RTC_EVENT_EN_alarm1_event_en_MASK ((uint32_t)0x00000008U)
#define RTC_EVENT_EN_rtc_rdy_event_en_OFS (4)
#define RTC_EVENT_EN_rtc_rdy_event_en_MASK ((uint32_t)0x00000010U)
#define RTC_EVENT_EN_interval_alarm_event_en_OFS (5)
#define RTC_EVENT_EN_interval_alarm_event_en_MASK ((uint32_t)0x00000020U)
#define RTC_INTR_SW_SET_prd0_sw_set_OFS (0)
#define RTC_INTR_SW_SET_prd0_sw_set_MASK ((uint32_t)0x00000001U)
#define RTC_INTR_SW_SET_prd1_sw_set_OFS (1)
#define RTC_INTR_SW_SET_prd1_sw_set_MASK ((uint32_t)0x00000002U)
#define RTC_INTR_SW_SET_alarm0_sw_set_OFS (2)
#define RTC_INTR_SW_SET_alarm0_sw_set_MASK ((uint32_t)0x00000004U)
#define RTC_INTR_SW_SET_alarm1_sw_set_OFS (3)
#define RTC_INTR_SW_SET_alarm1_sw_set_MASK ((uint32_t)0x00000008U)
#define RTC_INTR_SW_SET_rtc_rdy_sw_set_OFS (4)
#define RTC_INTR_SW_SET_rtc_rdy_sw_set_MASK ((uint32_t)0x00000010U)
#define RTC_INTR_SW_SET_interval_alarm_sw_set_OFS (5)
#define RTC_INTR_SW_SET_interval_alarm_sw_set_MASK ((uint32_t)0x00000020U)
#define RTC_DEBUG_CTL_intr_en_during_debug_OFS (0)
#define RTC_DEBUG_CTL_intr_en_during_debug_MASK ((uint32_t)0x00000001U)
#define RTC_DEBUG_CTL_ctr_en_during_debug_OFS (1)
#define RTC_DEBUG_CTL_ctr_en_during_debug_MASK ((uint32_t)0x00000002U)
#define RTC_RTC_CTL_rtc_bcd_OFS (0)
#define RTC_RTC_CTL_rtc_bcd_MASK ((uint32_t)0x00000001U)
#define RTC_SEC_CTL_sec_bin_OFS (0)
#define RTC_SEC_CTL_sec_bin_MASK ((uint32_t)0x0000003FU)
#define RTC_SEC_CTL_sec_lsb_bcd_OFS (6)
#define RTC_SEC_CTL_sec_lsb_bcd_MASK ((uint32_t)0x000003C0U)
#define RTC_SEC_CTL_sec_msb_bcd_OFS (10)
#define RTC_SEC_CTL_sec_msb_bcd_MASK ((uint32_t)0x00003C00U)
#define RTC_SEC_CTL_sec_rtc_rdy_OFS (14)
#define RTC_SEC_CTL_sec_rtc_rdy_MASK ((uint32_t)0x00004000U)
#define RTC_MIN_CTL_min_bin_OFS (0)
#define RTC_MIN_CTL_min_bin_MASK ((uint32_t)0x0000003FU)
#define RTC_MIN_CTL_min_lsb_bcd_OFS (6)
#define RTC_MIN_CTL_min_lsb_bcd_MASK ((uint32_t)0x000003C0U)
#define RTC_MIN_CTL_min_msb_bcd_OFS (10)
#define RTC_MIN_CTL_min_msb_bcd_MASK ((uint32_t)0x00003C00U)
#define RTC_MIN_CTL_min_rtc_rdy_OFS (14)
#define RTC_MIN_CTL_min_rtc_rdy_MASK ((uint32_t)0x00004000U)
#define RTC_HR_CTL_hr_bin_OFS (0)
#define RTC_HR_CTL_hr_bin_MASK ((uint32_t)0x0000001FU)
#define RTC_HR_CTL_hr_lsb_bcd_OFS (5)
#define RTC_HR_CTL_hr_lsb_bcd_MASK ((uint32_t)0x000001E0U)
#define RTC_HR_CTL_hr_msb_bcd_OFS (9)
#define RTC_HR_CTL_hr_msb_bcd_MASK ((uint32_t)0x00001E00U)
#define RTC_HR_CTL_hr_rtc_rdy_OFS (13)
#define RTC_HR_CTL_hr_rtc_rdy_MASK ((uint32_t)0x00002000U)
#define RTC_DOM_CTL_dom_bin_OFS (0)
#define RTC_DOM_CTL_dom_bin_MASK ((uint32_t)0x0000001FU)
#define RTC_DOM_CTL_dom_lsb_bcd_OFS (5)
#define RTC_DOM_CTL_dom_lsb_bcd_MASK ((uint32_t)0x000001E0U)
#define RTC_DOM_CTL_dom_msb_bcd_OFS (9)
#define RTC_DOM_CTL_dom_msb_bcd_MASK ((uint32_t)0x00001E00U)
#define RTC_DOM_CTL_dom_rtc_rdy_OFS (13)
#define RTC_DOM_CTL_dom_rtc_rdy_MASK ((uint32_t)0x00002000U)
#define RTC_DOW_CTL_dow_OFS (0)
#define RTC_DOW_CTL_dow_MASK ((uint32_t)0x00000007U)
#define RTC_DOW_CTL_dow_rtc_rdy_OFS (3)
#define RTC_DOW_CTL_dow_rtc_rdy_MASK ((uint32_t)0x00000008U)
#define RTC_MON_CTL_mon_bin_OFS (0)
#define RTC_MON_CTL_mon_bin_MASK ((uint32_t)0x0000003FU)
#define RTC_MON_CTL_mon_lsb_bcd_OFS (6)
#define RTC_MON_CTL_mon_lsb_bcd_MASK ((uint32_t)0x000003C0U)
#define RTC_MON_CTL_mon_msb_bcd_OFS (10)
#define RTC_MON_CTL_mon_msb_bcd_MASK ((uint32_t)0x00003C00U)
#define RTC_MON_CTL_mon_rtc_rdy_OFS (14)
#define RTC_MON_CTL_mon_rtc_rdy_MASK ((uint32_t)0x00004000U)
#define RTC_YEAR_CTL_yr_bin_OFS (0)
#define RTC_YEAR_CTL_yr_bin_MASK ((uint32_t)0x00000FFFU)
#define RTC_YEAR_CTL_yr_lsb_bcd_OFS (12)
#define RTC_YEAR_CTL_yr_lsb_bcd_MASK ((uint32_t)0x0000F000U)
#define RTC_YEAR_CTL_yr_decade_bcd_OFS (16)
#define RTC_YEAR_CTL_yr_decade_bcd_MASK ((uint32_t)0x000F0000U)
#define RTC_YEAR_CTL_yr_cent_low_bcd_OFS (20)
#define RTC_YEAR_CTL_yr_cent_low_bcd_MASK ((uint32_t)0x00F00000U)
#define RTC_YEAR_CTL_yr_cent_high_bcd_OFS (24)
#define RTC_YEAR_CTL_yr_cent_high_bcd_MASK ((uint32_t)0x0F000000U)
#define RTC_YEAR_CTL_yr_rtc_rdy_OFS (28)
#define RTC_YEAR_CTL_yr_rtc_rdy_MASK ((uint32_t)0x10000000U)
#define RTC_A0_MIN_a_min_en_0_OFS (0)
#define RTC_A0_MIN_a_min_en_0_MASK ((uint32_t)0x00000001U)
#define RTC_A0_MIN_a_min_bin_0_OFS (1)
#define RTC_A0_MIN_a_min_bin_0_MASK ((uint32_t)0x0000007EU)
#define RTC_A0_MIN_a_min_bcd_low_0_OFS (7)
#define RTC_A0_MIN_a_min_bcd_low_0_MASK ((uint32_t)0x00000780U)
#define RTC_A0_MIN_a_min_bcd_high_0_OFS (11)
#define RTC_A0_MIN_a_min_bcd_high_0_MASK ((uint32_t)0x00007800U)
#define RTC_A1_MIN_a_min_en_1_OFS (0)
#define RTC_A1_MIN_a_min_en_1_MASK ((uint32_t)0x00000001U)
#define RTC_A1_MIN_a_min_bin_1_OFS (1)
#define RTC_A1_MIN_a_min_bin_1_MASK ((uint32_t)0x0000007EU)
#define RTC_A1_MIN_a_min_bcd_low_1_OFS (7)
#define RTC_A1_MIN_a_min_bcd_low_1_MASK ((uint32_t)0x00000780U)
#define RTC_A1_MIN_a_min_bcd_high_1_OFS (11)
#define RTC_A1_MIN_a_min_bcd_high_1_MASK ((uint32_t)0x00007800U)
#define RTC_A0_HOUR_a_hr_en_0_OFS (0)
#define RTC_A0_HOUR_a_hr_en_0_MASK ((uint32_t)0x00000001U)
#define RTC_A0_HOUR_a_hr_bin_0_OFS (1)
#define RTC_A0_HOUR_a_hr_bin_0_MASK ((uint32_t)0x0000003EU)
#define RTC_A0_HOUR_a_hr_bcd_low_0_OFS (6)
#define RTC_A0_HOUR_a_hr_bcd_low_0_MASK ((uint32_t)0x000003C0U)
#define RTC_A0_HOUR_a_hr_bcd_high_0_OFS (10)
#define RTC_A0_HOUR_a_hr_bcd_high_0_MASK ((uint32_t)0x00003C00U)
#define RTC_A1_HOUR_a_hr_en_1_OFS (0)
#define RTC_A1_HOUR_a_hr_en_1_MASK ((uint32_t)0x00000001U)
#define RTC_A1_HOUR_a_hr_bin_1_OFS (1)
#define RTC_A1_HOUR_a_hr_bin_1_MASK ((uint32_t)0x0000003EU)
#define RTC_A1_HOUR_a_hr_bcd_low_1_OFS (6)
#define RTC_A1_HOUR_a_hr_bcd_low_1_MASK ((uint32_t)0x000003C0U)
#define RTC_A1_HOUR_a_hr_bcd_high_1_OFS (10)
#define RTC_A1_HOUR_a_hr_bcd_high_1_MASK ((uint32_t)0x00003C00U)
#define RTC_A0_DAY_a_dow_en_0_OFS (0)
#define RTC_A0_DAY_a_dow_en_0_MASK ((uint32_t)0x00000001U)
#define RTC_A0_DAY_a_dow_0_OFS (1)
#define RTC_A0_DAY_a_dow_0_MASK ((uint32_t)0x0000000EU)
#define RTC_A0_DAY_a_dom_en_0_OFS (4)
#define RTC_A0_DAY_a_dom_en_0_MASK ((uint32_t)0x00000010U)
#define RTC_A0_DAY_a_dom_bin_0_OFS (5)
#define RTC_A0_DAY_a_dom_bin_0_MASK ((uint32_t)0x000003E0U)
#define RTC_A0_DAY_a_dom_lsb_bcd_0_OFS (10)
#define RTC_A0_DAY_a_dom_lsb_bcd_0_MASK ((uint32_t)0x00003C00U)
#define RTC_A0_DAY_a_dom_msb_bcd_0_OFS (14)
#define RTC_A0_DAY_a_dom_msb_bcd_0_MASK ((uint32_t)0x0003C000U)
#define RTC_A1_DAY_a_dow_en_1_OFS (0)
#define RTC_A1_DAY_a_dow_en_1_MASK ((uint32_t)0x00000001U)
#define RTC_A1_DAY_a_dow_1_OFS (1)
#define RTC_A1_DAY_a_dow_1_MASK ((uint32_t)0x0000000EU)
#define RTC_A1_DAY_a_dom_en_1_OFS (4)
#define RTC_A1_DAY_a_dom_en_1_MASK ((uint32_t)0x00000010U)
#define RTC_A1_DAY_a_dom_bin_1_OFS (5)
#define RTC_A1_DAY_a_dom_bin_1_MASK ((uint32_t)0x000003E0U)
#define RTC_A1_DAY_a_dom_lsb_bcd_1_OFS (10)
#define RTC_A1_DAY_a_dom_lsb_bcd_1_MASK ((uint32_t)0x00003C00U)
#define RTC_A1_DAY_a_dom_msb_bcd_1_OFS (14)
#define RTC_A1_DAY_a_dom_msb_bcd_1_MASK ((uint32_t)0x0003C000U)
#define RTC_PRD_INTR_SEL0_prd_intr_sel_0_OFS (0)
#define RTC_PRD_INTR_SEL0_prd_intr_sel_0_MASK ((uint32_t)0x00000007U)
#define RTC_PRD_INTR_SEL1_prd_intr_sel_1_OFS (0)
#define RTC_PRD_INTR_SEL1_prd_intr_sel_1_MASK ((uint32_t)0x00000007U)
#define RTC_INTERVAL_INTR_SEL_interval_intr_sel_OFS (0)
#define RTC_INTERVAL_INTR_SEL_interval_intr_sel_MASK ((uint32_t)0x00000003U)
#define RTC_RTC_CAL_freq_out_cal_OFS (0)
#define RTC_RTC_CAL_freq_out_cal_MASK ((uint32_t)0x00000003U)
#define RTC_RTC_CAL_clk_cal_sign_OFS (2)
#define RTC_RTC_CAL_clk_cal_sign_MASK ((uint32_t)0x00000004U)
#define RTC_RTC_CAL_clk_cal_ppm_val_OFS (3)
#define RTC_RTC_CAL_clk_cal_ppm_val_MASK ((uint32_t)0x000007F8U)
#define RTC_RTC_TEMP_CMP_temp_cmp_sign_OFS (0)
#define RTC_RTC_TEMP_CMP_temp_cmp_sign_MASK ((uint32_t)0x00000001U)
#define RTC_RTC_TEMP_CMP_temp_cmp_ppm_val_OFS (1)
#define RTC_RTC_TEMP_CMP_temp_cmp_ppm_val_MASK ((uint32_t)0x000001FEU)
#endif
