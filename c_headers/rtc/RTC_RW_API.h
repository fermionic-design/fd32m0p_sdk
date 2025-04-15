#include "RTC_REGS.h"

static inline void RTC_DESC_WRITE(RTC_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<RTC_DESC_module_type_OFS)&RTC_DESC_module_type_MASK) + ((modue_subtype<<RTC_DESC_modue_subtype_OFS)&RTC_DESC_modue_subtype_MASK) + ((major_rev<<RTC_DESC_major_rev_OFS)&RTC_DESC_major_rev_MASK) + ((minor_rev<<RTC_DESC_minor_rev_OFS)&RTC_DESC_minor_rev_MASK);
}

static inline void RTC_PWR_EN_WRITE(RTC_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<RTC_PWR_EN_pwr_en_OFS)&RTC_PWR_EN_pwr_en_MASK) + ((pwr_en_key<<RTC_PWR_EN_pwr_en_key_OFS)&RTC_PWR_EN_pwr_en_key_MASK);
}

static inline void RTC_RST_CTRL_WRITE(RTC_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<RTC_RST_CTRL_rst_OFS)&RTC_RST_CTRL_rst_MASK) + ((rst_sts_clr<<RTC_RST_CTRL_rst_sts_clr_OFS)&RTC_RST_CTRL_rst_sts_clr_MASK) + ((rst_key<<RTC_RST_CTRL_rst_key_OFS)&RTC_RST_CTRL_rst_key_MASK);
}

static inline void RTC_RST_STS_WRITE(RTC_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<RTC_RST_STS_rst_sts_OFS)&RTC_RST_STS_rst_sts_MASK);
}

static inline void RTC_BUS_CLK_FORCE_WRITE(RTC_REGS_s * registers, uint32_t bus_clk_force_32mhz, uint32_t bus_clk_force_key) {
    registers->BUS_CLK_FORCE.packed_w =  + ((bus_clk_force_32mhz<<RTC_BUS_CLK_FORCE_bus_clk_force_32mhz_OFS)&RTC_BUS_CLK_FORCE_bus_clk_force_32mhz_MASK) + ((bus_clk_force_key<<RTC_BUS_CLK_FORCE_bus_clk_force_key_OFS)&RTC_BUS_CLK_FORCE_bus_clk_force_key_MASK);
}

static inline void RTC_CLK_CTRL_WRITE(RTC_REGS_s * registers, uint32_t clk_en) {
    registers->CLK_CTRL.packed_w =  + ((clk_en<<RTC_CLK_CTRL_clk_en_OFS)&RTC_CLK_CTRL_clk_en_MASK);
}

static inline void RTC_INTR_STS_WRITE(RTC_REGS_s * registers, uint32_t intr_first) {
    registers->INTR_STS.packed_w =  + ((intr_first<<RTC_INTR_STS_intr_first_OFS)&RTC_INTR_STS_intr_first_MASK);
}

static inline void RTC_INTR_EVENT_WRITE(RTC_REGS_s * registers, uint32_t prd0, uint32_t prd1, uint32_t alarm0, uint32_t alarm1, uint32_t rtc_rdy, uint32_t interval_alarm) {
    registers->INTR_EVENT.packed_w =  + ((prd0<<RTC_INTR_EVENT_prd0_OFS)&RTC_INTR_EVENT_prd0_MASK) + ((prd1<<RTC_INTR_EVENT_prd1_OFS)&RTC_INTR_EVENT_prd1_MASK) + ((alarm0<<RTC_INTR_EVENT_alarm0_OFS)&RTC_INTR_EVENT_alarm0_MASK) + ((alarm1<<RTC_INTR_EVENT_alarm1_OFS)&RTC_INTR_EVENT_alarm1_MASK) + ((rtc_rdy<<RTC_INTR_EVENT_rtc_rdy_OFS)&RTC_INTR_EVENT_rtc_rdy_MASK) + ((interval_alarm<<RTC_INTR_EVENT_interval_alarm_OFS)&RTC_INTR_EVENT_interval_alarm_MASK);
}

static inline void RTC_INTR_EN_WRITE(RTC_REGS_s * registers, uint32_t prd0_en, uint32_t prd1_en, uint32_t alarm0_en, uint32_t alarm1_en, uint32_t rtc_rdy_en, uint32_t interval_alarm_en) {
    registers->INTR_EN.packed_w =  + ((prd0_en<<RTC_INTR_EN_prd0_en_OFS)&RTC_INTR_EN_prd0_en_MASK) + ((prd1_en<<RTC_INTR_EN_prd1_en_OFS)&RTC_INTR_EN_prd1_en_MASK) + ((alarm0_en<<RTC_INTR_EN_alarm0_en_OFS)&RTC_INTR_EN_alarm0_en_MASK) + ((alarm1_en<<RTC_INTR_EN_alarm1_en_OFS)&RTC_INTR_EN_alarm1_en_MASK) + ((rtc_rdy_en<<RTC_INTR_EN_rtc_rdy_en_OFS)&RTC_INTR_EN_rtc_rdy_en_MASK) + ((interval_alarm_en<<RTC_INTR_EN_interval_alarm_en_OFS)&RTC_INTR_EN_interval_alarm_en_MASK);
}

static inline void RTC_INTR_NMI_EN_WRITE(RTC_REGS_s * registers, uint32_t prd0_nmi_en, uint32_t prd1_nmi_en, uint32_t alarm0_nmi_en, uint32_t alarm1_nmi_en, uint32_t rtc_rdy_nmi_en, uint32_t interval_alarm_nmi_en) {
    registers->INTR_NMI_EN.packed_w =  + ((prd0_nmi_en<<RTC_INTR_NMI_EN_prd0_nmi_en_OFS)&RTC_INTR_NMI_EN_prd0_nmi_en_MASK) + ((prd1_nmi_en<<RTC_INTR_NMI_EN_prd1_nmi_en_OFS)&RTC_INTR_NMI_EN_prd1_nmi_en_MASK) + ((alarm0_nmi_en<<RTC_INTR_NMI_EN_alarm0_nmi_en_OFS)&RTC_INTR_NMI_EN_alarm0_nmi_en_MASK) + ((alarm1_nmi_en<<RTC_INTR_NMI_EN_alarm1_nmi_en_OFS)&RTC_INTR_NMI_EN_alarm1_nmi_en_MASK) + ((rtc_rdy_nmi_en<<RTC_INTR_NMI_EN_rtc_rdy_nmi_en_OFS)&RTC_INTR_NMI_EN_rtc_rdy_nmi_en_MASK) + ((interval_alarm_nmi_en<<RTC_INTR_NMI_EN_interval_alarm_nmi_en_OFS)&RTC_INTR_NMI_EN_interval_alarm_nmi_en_MASK);
}

static inline void RTC_EVENT_EN_WRITE(RTC_REGS_s * registers, uint32_t prd0_event_en, uint32_t prd1_event_en, uint32_t alarm0_event_en, uint32_t alarm1_event_en, uint32_t rtc_rdy_event_en, uint32_t interval_alarm_event_en) {
    registers->EVENT_EN.packed_w =  + ((prd0_event_en<<RTC_EVENT_EN_prd0_event_en_OFS)&RTC_EVENT_EN_prd0_event_en_MASK) + ((prd1_event_en<<RTC_EVENT_EN_prd1_event_en_OFS)&RTC_EVENT_EN_prd1_event_en_MASK) + ((alarm0_event_en<<RTC_EVENT_EN_alarm0_event_en_OFS)&RTC_EVENT_EN_alarm0_event_en_MASK) + ((alarm1_event_en<<RTC_EVENT_EN_alarm1_event_en_OFS)&RTC_EVENT_EN_alarm1_event_en_MASK) + ((rtc_rdy_event_en<<RTC_EVENT_EN_rtc_rdy_event_en_OFS)&RTC_EVENT_EN_rtc_rdy_event_en_MASK) + ((interval_alarm_event_en<<RTC_EVENT_EN_interval_alarm_event_en_OFS)&RTC_EVENT_EN_interval_alarm_event_en_MASK);
}

static inline void RTC_INTR_SW_SET_WRITE(RTC_REGS_s * registers, uint32_t prd0_sw_set, uint32_t prd1_sw_set, uint32_t alarm0_sw_set, uint32_t alarm1_sw_set, uint32_t rtc_rdy_sw_set, uint32_t interval_alarm_sw_set) {
    registers->INTR_SW_SET.packed_w =  + ((prd0_sw_set<<RTC_INTR_SW_SET_prd0_sw_set_OFS)&RTC_INTR_SW_SET_prd0_sw_set_MASK) + ((prd1_sw_set<<RTC_INTR_SW_SET_prd1_sw_set_OFS)&RTC_INTR_SW_SET_prd1_sw_set_MASK) + ((alarm0_sw_set<<RTC_INTR_SW_SET_alarm0_sw_set_OFS)&RTC_INTR_SW_SET_alarm0_sw_set_MASK) + ((alarm1_sw_set<<RTC_INTR_SW_SET_alarm1_sw_set_OFS)&RTC_INTR_SW_SET_alarm1_sw_set_MASK) + ((rtc_rdy_sw_set<<RTC_INTR_SW_SET_rtc_rdy_sw_set_OFS)&RTC_INTR_SW_SET_rtc_rdy_sw_set_MASK) + ((interval_alarm_sw_set<<RTC_INTR_SW_SET_interval_alarm_sw_set_OFS)&RTC_INTR_SW_SET_interval_alarm_sw_set_MASK);
}

static inline void RTC_DEBUG_CTL_WRITE(RTC_REGS_s * registers, uint32_t intr_en_during_debug, uint32_t ctr_en_during_debug) {
    registers->DEBUG_CTL.packed_w =  + ((intr_en_during_debug<<RTC_DEBUG_CTL_intr_en_during_debug_OFS)&RTC_DEBUG_CTL_intr_en_during_debug_MASK) + ((ctr_en_during_debug<<RTC_DEBUG_CTL_ctr_en_during_debug_OFS)&RTC_DEBUG_CTL_ctr_en_during_debug_MASK);
}

static inline void RTC_RTC_CTL_WRITE(RTC_REGS_s * registers, uint32_t rtc_bcd) {
    registers->RTC_CTL.packed_w =  + ((rtc_bcd<<RTC_RTC_CTL_rtc_bcd_OFS)&RTC_RTC_CTL_rtc_bcd_MASK);
}

static inline void RTC_SEC_CTL_WRITE(RTC_REGS_s * registers, uint32_t sec_bin, uint32_t sec_lsb_bcd, uint32_t sec_msb_bcd, uint32_t sec_rtc_rdy) {
    registers->SEC_CTL.packed_w =  + ((sec_bin<<RTC_SEC_CTL_sec_bin_OFS)&RTC_SEC_CTL_sec_bin_MASK) + ((sec_lsb_bcd<<RTC_SEC_CTL_sec_lsb_bcd_OFS)&RTC_SEC_CTL_sec_lsb_bcd_MASK) + ((sec_msb_bcd<<RTC_SEC_CTL_sec_msb_bcd_OFS)&RTC_SEC_CTL_sec_msb_bcd_MASK) + ((sec_rtc_rdy<<RTC_SEC_CTL_sec_rtc_rdy_OFS)&RTC_SEC_CTL_sec_rtc_rdy_MASK);
}

static inline void RTC_MIN_CTL_WRITE(RTC_REGS_s * registers, uint32_t min_bin, uint32_t min_lsb_bcd, uint32_t min_msb_bcd, uint32_t min_rtc_rdy) {
    registers->MIN_CTL.packed_w =  + ((min_bin<<RTC_MIN_CTL_min_bin_OFS)&RTC_MIN_CTL_min_bin_MASK) + ((min_lsb_bcd<<RTC_MIN_CTL_min_lsb_bcd_OFS)&RTC_MIN_CTL_min_lsb_bcd_MASK) + ((min_msb_bcd<<RTC_MIN_CTL_min_msb_bcd_OFS)&RTC_MIN_CTL_min_msb_bcd_MASK) + ((min_rtc_rdy<<RTC_MIN_CTL_min_rtc_rdy_OFS)&RTC_MIN_CTL_min_rtc_rdy_MASK);
}

static inline void RTC_HR_CTL_WRITE(RTC_REGS_s * registers, uint32_t hr_bin, uint32_t hr_lsb_bcd, uint32_t hr_msb_bcd, uint32_t hr_rtc_rdy) {
    registers->HR_CTL.packed_w =  + ((hr_bin<<RTC_HR_CTL_hr_bin_OFS)&RTC_HR_CTL_hr_bin_MASK) + ((hr_lsb_bcd<<RTC_HR_CTL_hr_lsb_bcd_OFS)&RTC_HR_CTL_hr_lsb_bcd_MASK) + ((hr_msb_bcd<<RTC_HR_CTL_hr_msb_bcd_OFS)&RTC_HR_CTL_hr_msb_bcd_MASK) + ((hr_rtc_rdy<<RTC_HR_CTL_hr_rtc_rdy_OFS)&RTC_HR_CTL_hr_rtc_rdy_MASK);
}

static inline void RTC_DOM_CTL_WRITE(RTC_REGS_s * registers, uint32_t dom_bin, uint32_t dom_lsb_bcd, uint32_t dom_msb_bcd, uint32_t dom_rtc_rdy) {
    registers->DOM_CTL.packed_w =  + ((dom_bin<<RTC_DOM_CTL_dom_bin_OFS)&RTC_DOM_CTL_dom_bin_MASK) + ((dom_lsb_bcd<<RTC_DOM_CTL_dom_lsb_bcd_OFS)&RTC_DOM_CTL_dom_lsb_bcd_MASK) + ((dom_msb_bcd<<RTC_DOM_CTL_dom_msb_bcd_OFS)&RTC_DOM_CTL_dom_msb_bcd_MASK) + ((dom_rtc_rdy<<RTC_DOM_CTL_dom_rtc_rdy_OFS)&RTC_DOM_CTL_dom_rtc_rdy_MASK);
}

static inline void RTC_DOW_CTL_WRITE(RTC_REGS_s * registers, uint32_t dow, uint32_t dow_rtc_rdy) {
    registers->DOW_CTL.packed_w =  + ((dow<<RTC_DOW_CTL_dow_OFS)&RTC_DOW_CTL_dow_MASK) + ((dow_rtc_rdy<<RTC_DOW_CTL_dow_rtc_rdy_OFS)&RTC_DOW_CTL_dow_rtc_rdy_MASK);
}

static inline void RTC_MON_CTL_WRITE(RTC_REGS_s * registers, uint32_t mon_bin, uint32_t mon_lsb_bcd, uint32_t mon_msb_bcd, uint32_t mon_rtc_rdy) {
    registers->MON_CTL.packed_w =  + ((mon_bin<<RTC_MON_CTL_mon_bin_OFS)&RTC_MON_CTL_mon_bin_MASK) + ((mon_lsb_bcd<<RTC_MON_CTL_mon_lsb_bcd_OFS)&RTC_MON_CTL_mon_lsb_bcd_MASK) + ((mon_msb_bcd<<RTC_MON_CTL_mon_msb_bcd_OFS)&RTC_MON_CTL_mon_msb_bcd_MASK) + ((mon_rtc_rdy<<RTC_MON_CTL_mon_rtc_rdy_OFS)&RTC_MON_CTL_mon_rtc_rdy_MASK);
}

static inline void RTC_YEAR_CTL_WRITE(RTC_REGS_s * registers, uint32_t yr_bin, uint32_t yr_lsb_bcd, uint32_t yr_decade_bcd, uint32_t yr_cent_low_bcd, uint32_t yr_cent_high_bcd, uint32_t yr_rtc_rdy) {
    registers->YEAR_CTL.packed_w =  + ((yr_bin<<RTC_YEAR_CTL_yr_bin_OFS)&RTC_YEAR_CTL_yr_bin_MASK) + ((yr_lsb_bcd<<RTC_YEAR_CTL_yr_lsb_bcd_OFS)&RTC_YEAR_CTL_yr_lsb_bcd_MASK) + ((yr_decade_bcd<<RTC_YEAR_CTL_yr_decade_bcd_OFS)&RTC_YEAR_CTL_yr_decade_bcd_MASK) + ((yr_cent_low_bcd<<RTC_YEAR_CTL_yr_cent_low_bcd_OFS)&RTC_YEAR_CTL_yr_cent_low_bcd_MASK) + ((yr_cent_high_bcd<<RTC_YEAR_CTL_yr_cent_high_bcd_OFS)&RTC_YEAR_CTL_yr_cent_high_bcd_MASK) + ((yr_rtc_rdy<<RTC_YEAR_CTL_yr_rtc_rdy_OFS)&RTC_YEAR_CTL_yr_rtc_rdy_MASK);
}

static inline void RTC_A0_MIN_WRITE(RTC_REGS_s * registers, uint32_t a_min_en_0, uint32_t a_min_bin_0, uint32_t a_min_bcd_low_0, uint32_t a_min_bcd_high_0) {
    registers->A0_MIN.packed_w =  + ((a_min_en_0<<RTC_A0_MIN_a_min_en_0_OFS)&RTC_A0_MIN_a_min_en_0_MASK) + ((a_min_bin_0<<RTC_A0_MIN_a_min_bin_0_OFS)&RTC_A0_MIN_a_min_bin_0_MASK) + ((a_min_bcd_low_0<<RTC_A0_MIN_a_min_bcd_low_0_OFS)&RTC_A0_MIN_a_min_bcd_low_0_MASK) + ((a_min_bcd_high_0<<RTC_A0_MIN_a_min_bcd_high_0_OFS)&RTC_A0_MIN_a_min_bcd_high_0_MASK);
}

static inline void RTC_A1_MIN_WRITE(RTC_REGS_s * registers, uint32_t a_min_en_1, uint32_t a_min_bin_1, uint32_t a_min_bcd_low_1, uint32_t a_min_bcd_high_1) {
    registers->A1_MIN.packed_w =  + ((a_min_en_1<<RTC_A1_MIN_a_min_en_1_OFS)&RTC_A1_MIN_a_min_en_1_MASK) + ((a_min_bin_1<<RTC_A1_MIN_a_min_bin_1_OFS)&RTC_A1_MIN_a_min_bin_1_MASK) + ((a_min_bcd_low_1<<RTC_A1_MIN_a_min_bcd_low_1_OFS)&RTC_A1_MIN_a_min_bcd_low_1_MASK) + ((a_min_bcd_high_1<<RTC_A1_MIN_a_min_bcd_high_1_OFS)&RTC_A1_MIN_a_min_bcd_high_1_MASK);
}

static inline void RTC_A0_HOUR_WRITE(RTC_REGS_s * registers, uint32_t a_hr_en_0, uint32_t a_hr_bin_0, uint32_t a_hr_bcd_low_0, uint32_t a_hr_bcd_high_0) {
    registers->A0_HOUR.packed_w =  + ((a_hr_en_0<<RTC_A0_HOUR_a_hr_en_0_OFS)&RTC_A0_HOUR_a_hr_en_0_MASK) + ((a_hr_bin_0<<RTC_A0_HOUR_a_hr_bin_0_OFS)&RTC_A0_HOUR_a_hr_bin_0_MASK) + ((a_hr_bcd_low_0<<RTC_A0_HOUR_a_hr_bcd_low_0_OFS)&RTC_A0_HOUR_a_hr_bcd_low_0_MASK) + ((a_hr_bcd_high_0<<RTC_A0_HOUR_a_hr_bcd_high_0_OFS)&RTC_A0_HOUR_a_hr_bcd_high_0_MASK);
}

static inline void RTC_A1_HOUR_WRITE(RTC_REGS_s * registers, uint32_t a_hr_en_1, uint32_t a_hr_bin_1, uint32_t a_hr_bcd_low_1, uint32_t a_hr_bcd_high_1) {
    registers->A1_HOUR.packed_w =  + ((a_hr_en_1<<RTC_A1_HOUR_a_hr_en_1_OFS)&RTC_A1_HOUR_a_hr_en_1_MASK) + ((a_hr_bin_1<<RTC_A1_HOUR_a_hr_bin_1_OFS)&RTC_A1_HOUR_a_hr_bin_1_MASK) + ((a_hr_bcd_low_1<<RTC_A1_HOUR_a_hr_bcd_low_1_OFS)&RTC_A1_HOUR_a_hr_bcd_low_1_MASK) + ((a_hr_bcd_high_1<<RTC_A1_HOUR_a_hr_bcd_high_1_OFS)&RTC_A1_HOUR_a_hr_bcd_high_1_MASK);
}

static inline void RTC_A0_DAY_WRITE(RTC_REGS_s * registers, uint32_t a_dow_en_0, uint32_t a_dow_0, uint32_t a_dom_en_0, uint32_t a_dom_bin_0, uint32_t a_dom_lsb_bcd_0, uint32_t a_dom_msb_bcd_0) {
    registers->A0_DAY.packed_w =  + ((a_dow_en_0<<RTC_A0_DAY_a_dow_en_0_OFS)&RTC_A0_DAY_a_dow_en_0_MASK) + ((a_dow_0<<RTC_A0_DAY_a_dow_0_OFS)&RTC_A0_DAY_a_dow_0_MASK) + ((a_dom_en_0<<RTC_A0_DAY_a_dom_en_0_OFS)&RTC_A0_DAY_a_dom_en_0_MASK) + ((a_dom_bin_0<<RTC_A0_DAY_a_dom_bin_0_OFS)&RTC_A0_DAY_a_dom_bin_0_MASK) + ((a_dom_lsb_bcd_0<<RTC_A0_DAY_a_dom_lsb_bcd_0_OFS)&RTC_A0_DAY_a_dom_lsb_bcd_0_MASK) + ((a_dom_msb_bcd_0<<RTC_A0_DAY_a_dom_msb_bcd_0_OFS)&RTC_A0_DAY_a_dom_msb_bcd_0_MASK);
}

static inline void RTC_A1_DAY_WRITE(RTC_REGS_s * registers, uint32_t a_dow_en_1, uint32_t a_dow_1, uint32_t a_dom_en_1, uint32_t a_dom_bin_1, uint32_t a_dom_lsb_bcd_1, uint32_t a_dom_msb_bcd_1) {
    registers->A1_DAY.packed_w =  + ((a_dow_en_1<<RTC_A1_DAY_a_dow_en_1_OFS)&RTC_A1_DAY_a_dow_en_1_MASK) + ((a_dow_1<<RTC_A1_DAY_a_dow_1_OFS)&RTC_A1_DAY_a_dow_1_MASK) + ((a_dom_en_1<<RTC_A1_DAY_a_dom_en_1_OFS)&RTC_A1_DAY_a_dom_en_1_MASK) + ((a_dom_bin_1<<RTC_A1_DAY_a_dom_bin_1_OFS)&RTC_A1_DAY_a_dom_bin_1_MASK) + ((a_dom_lsb_bcd_1<<RTC_A1_DAY_a_dom_lsb_bcd_1_OFS)&RTC_A1_DAY_a_dom_lsb_bcd_1_MASK) + ((a_dom_msb_bcd_1<<RTC_A1_DAY_a_dom_msb_bcd_1_OFS)&RTC_A1_DAY_a_dom_msb_bcd_1_MASK);
}

static inline void RTC_PRD_INTR_SEL0_WRITE(RTC_REGS_s * registers, uint32_t prd_intr_sel_0) {
    registers->PRD_INTR_SEL0.packed_w =  + ((prd_intr_sel_0<<RTC_PRD_INTR_SEL0_prd_intr_sel_0_OFS)&RTC_PRD_INTR_SEL0_prd_intr_sel_0_MASK);
}

static inline void RTC_PRD_INTR_SEL1_WRITE(RTC_REGS_s * registers, uint32_t prd_intr_sel_1) {
    registers->PRD_INTR_SEL1.packed_w =  + ((prd_intr_sel_1<<RTC_PRD_INTR_SEL1_prd_intr_sel_1_OFS)&RTC_PRD_INTR_SEL1_prd_intr_sel_1_MASK);
}

static inline void RTC_INTERVAL_INTR_SEL_WRITE(RTC_REGS_s * registers, uint32_t interval_intr_sel) {
    registers->INTERVAL_INTR_SEL.packed_w =  + ((interval_intr_sel<<RTC_INTERVAL_INTR_SEL_interval_intr_sel_OFS)&RTC_INTERVAL_INTR_SEL_interval_intr_sel_MASK);
}

static inline void RTC_RTC_CAL_WRITE(RTC_REGS_s * registers, uint32_t freq_out_cal, uint32_t clk_cal_sign, uint32_t clk_cal_ppm_val) {
    registers->RTC_CAL.packed_w =  + ((freq_out_cal<<RTC_RTC_CAL_freq_out_cal_OFS)&RTC_RTC_CAL_freq_out_cal_MASK) + ((clk_cal_sign<<RTC_RTC_CAL_clk_cal_sign_OFS)&RTC_RTC_CAL_clk_cal_sign_MASK) + ((clk_cal_ppm_val<<RTC_RTC_CAL_clk_cal_ppm_val_OFS)&RTC_RTC_CAL_clk_cal_ppm_val_MASK);
}

static inline void RTC_RTC_TEMP_CMP_WRITE(RTC_REGS_s * registers, uint32_t temp_cmp_sign, uint32_t temp_cmp_ppm_val) {
    registers->RTC_TEMP_CMP.packed_w =  + ((temp_cmp_sign<<RTC_RTC_TEMP_CMP_temp_cmp_sign_OFS)&RTC_RTC_TEMP_CMP_temp_cmp_sign_MASK) + ((temp_cmp_ppm_val<<RTC_RTC_TEMP_CMP_temp_cmp_ppm_val_OFS)&RTC_RTC_TEMP_CMP_temp_cmp_ppm_val_MASK);
}

