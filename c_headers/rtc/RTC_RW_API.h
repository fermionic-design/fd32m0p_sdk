#include "RTC_REGS.h"

static inline void RTC_DESC_WRITE(RTC_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<RTC_DESC_MODULE_TYPE_OFS)&RTC_DESC_MODULE_TYPE_MASK) + ((modue_subtype<<RTC_DESC_MODUE_SUBTYPE_OFS)&RTC_DESC_MODUE_SUBTYPE_MASK) + ((major_rev<<RTC_DESC_MAJOR_REV_OFS)&RTC_DESC_MAJOR_REV_MASK) + ((minor_rev<<RTC_DESC_MINOR_REV_OFS)&RTC_DESC_MINOR_REV_MASK);
}

static inline void RTC_PWR_EN_WRITE(RTC_REGS_s * registers, uint32_t pwr_en, uint32_t pwr_en_key) {
    registers->PWR_EN.packed_w =  + ((pwr_en<<RTC_PWR_EN_PWR_EN_OFS)&RTC_PWR_EN_PWR_EN_MASK) + ((pwr_en_key<<RTC_PWR_EN_PWR_EN_KEY_OFS)&RTC_PWR_EN_PWR_EN_KEY_MASK);
}

static inline void RTC_RST_CTRL_WRITE(RTC_REGS_s * registers, uint32_t rst, uint32_t rst_sts_clr, uint32_t rst_key) {
    registers->RST_CTRL.packed_w =  + ((rst<<RTC_RST_CTRL_RST_OFS)&RTC_RST_CTRL_RST_MASK) + ((rst_sts_clr<<RTC_RST_CTRL_RST_STS_CLR_OFS)&RTC_RST_CTRL_RST_STS_CLR_MASK) + ((rst_key<<RTC_RST_CTRL_RST_KEY_OFS)&RTC_RST_CTRL_RST_KEY_MASK);
}

static inline void RTC_RST_STS_WRITE(RTC_REGS_s * registers, uint32_t rst_sts) {
    registers->RST_STS.packed_w =  + ((rst_sts<<RTC_RST_STS_RST_STS_OFS)&RTC_RST_STS_RST_STS_MASK);
}

static inline void RTC_BUS_CLK_FORCE_WRITE(RTC_REGS_s * registers, uint32_t bus_clk_force_32mhz, uint32_t bus_clk_force_key) {
    registers->BUS_CLK_FORCE.packed_w =  + ((bus_clk_force_32mhz<<RTC_BUS_CLK_FORCE_BUS_CLK_FORCE_32MHZ_OFS)&RTC_BUS_CLK_FORCE_BUS_CLK_FORCE_32MHZ_MASK) + ((bus_clk_force_key<<RTC_BUS_CLK_FORCE_BUS_CLK_FORCE_KEY_OFS)&RTC_BUS_CLK_FORCE_BUS_CLK_FORCE_KEY_MASK);
}

static inline void RTC_CLK_CTRL_WRITE(RTC_REGS_s * registers, uint32_t clk_en) {
    registers->CLK_CTRL.packed_w =  + ((clk_en<<RTC_CLK_CTRL_CLK_EN_OFS)&RTC_CLK_CTRL_CLK_EN_MASK);
}

static inline void RTC_INTR_STS_WRITE(RTC_REGS_s * registers, uint32_t intr_first) {
    registers->INTR_STS.packed_w =  + ((intr_first<<RTC_INTR_STS_INTR_FIRST_OFS)&RTC_INTR_STS_INTR_FIRST_MASK);
}

static inline void RTC_INTR_EVENT_WRITE(RTC_REGS_s * registers, uint32_t prd0, uint32_t prd1, uint32_t alarm0, uint32_t alarm1, uint32_t rtc_rdy, uint32_t interval_alarm) {
    registers->INTR_EVENT.packed_w =  + ((prd0<<RTC_INTR_EVENT_PRD0_OFS)&RTC_INTR_EVENT_PRD0_MASK) + ((prd1<<RTC_INTR_EVENT_PRD1_OFS)&RTC_INTR_EVENT_PRD1_MASK) + ((alarm0<<RTC_INTR_EVENT_ALARM0_OFS)&RTC_INTR_EVENT_ALARM0_MASK) + ((alarm1<<RTC_INTR_EVENT_ALARM1_OFS)&RTC_INTR_EVENT_ALARM1_MASK) + ((rtc_rdy<<RTC_INTR_EVENT_RTC_RDY_OFS)&RTC_INTR_EVENT_RTC_RDY_MASK) + ((interval_alarm<<RTC_INTR_EVENT_INTERVAL_ALARM_OFS)&RTC_INTR_EVENT_INTERVAL_ALARM_MASK);
}

static inline void RTC_INTR_EN_WRITE(RTC_REGS_s * registers, uint32_t prd0_en, uint32_t prd1_en, uint32_t alarm0_en, uint32_t alarm1_en, uint32_t rtc_rdy_en, uint32_t interval_alarm_en) {
    registers->INTR_EN.packed_w =  + ((prd0_en<<RTC_INTR_EN_PRD0_EN_OFS)&RTC_INTR_EN_PRD0_EN_MASK) + ((prd1_en<<RTC_INTR_EN_PRD1_EN_OFS)&RTC_INTR_EN_PRD1_EN_MASK) + ((alarm0_en<<RTC_INTR_EN_ALARM0_EN_OFS)&RTC_INTR_EN_ALARM0_EN_MASK) + ((alarm1_en<<RTC_INTR_EN_ALARM1_EN_OFS)&RTC_INTR_EN_ALARM1_EN_MASK) + ((rtc_rdy_en<<RTC_INTR_EN_RTC_RDY_EN_OFS)&RTC_INTR_EN_RTC_RDY_EN_MASK) + ((interval_alarm_en<<RTC_INTR_EN_INTERVAL_ALARM_EN_OFS)&RTC_INTR_EN_INTERVAL_ALARM_EN_MASK);
}

static inline void RTC_INTR_NMI_EN_WRITE(RTC_REGS_s * registers, uint32_t prd0_nmi_en, uint32_t prd1_nmi_en, uint32_t alarm0_nmi_en, uint32_t alarm1_nmi_en, uint32_t rtc_rdy_nmi_en, uint32_t interval_alarm_nmi_en) {
    registers->INTR_NMI_EN.packed_w =  + ((prd0_nmi_en<<RTC_INTR_NMI_EN_PRD0_NMI_EN_OFS)&RTC_INTR_NMI_EN_PRD0_NMI_EN_MASK) + ((prd1_nmi_en<<RTC_INTR_NMI_EN_PRD1_NMI_EN_OFS)&RTC_INTR_NMI_EN_PRD1_NMI_EN_MASK) + ((alarm0_nmi_en<<RTC_INTR_NMI_EN_ALARM0_NMI_EN_OFS)&RTC_INTR_NMI_EN_ALARM0_NMI_EN_MASK) + ((alarm1_nmi_en<<RTC_INTR_NMI_EN_ALARM1_NMI_EN_OFS)&RTC_INTR_NMI_EN_ALARM1_NMI_EN_MASK) + ((rtc_rdy_nmi_en<<RTC_INTR_NMI_EN_RTC_RDY_NMI_EN_OFS)&RTC_INTR_NMI_EN_RTC_RDY_NMI_EN_MASK) + ((interval_alarm_nmi_en<<RTC_INTR_NMI_EN_INTERVAL_ALARM_NMI_EN_OFS)&RTC_INTR_NMI_EN_INTERVAL_ALARM_NMI_EN_MASK);
}

static inline void RTC_EVENT_EN_WRITE(RTC_REGS_s * registers, uint32_t prd0_event_en, uint32_t prd1_event_en, uint32_t alarm0_event_en, uint32_t alarm1_event_en, uint32_t rtc_rdy_event_en, uint32_t interval_alarm_event_en) {
    registers->EVENT_EN.packed_w =  + ((prd0_event_en<<RTC_EVENT_EN_PRD0_EVENT_EN_OFS)&RTC_EVENT_EN_PRD0_EVENT_EN_MASK) + ((prd1_event_en<<RTC_EVENT_EN_PRD1_EVENT_EN_OFS)&RTC_EVENT_EN_PRD1_EVENT_EN_MASK) + ((alarm0_event_en<<RTC_EVENT_EN_ALARM0_EVENT_EN_OFS)&RTC_EVENT_EN_ALARM0_EVENT_EN_MASK) + ((alarm1_event_en<<RTC_EVENT_EN_ALARM1_EVENT_EN_OFS)&RTC_EVENT_EN_ALARM1_EVENT_EN_MASK) + ((rtc_rdy_event_en<<RTC_EVENT_EN_RTC_RDY_EVENT_EN_OFS)&RTC_EVENT_EN_RTC_RDY_EVENT_EN_MASK) + ((interval_alarm_event_en<<RTC_EVENT_EN_INTERVAL_ALARM_EVENT_EN_OFS)&RTC_EVENT_EN_INTERVAL_ALARM_EVENT_EN_MASK);
}

static inline void RTC_INTR_SW_SET_WRITE(RTC_REGS_s * registers, uint32_t prd0_sw_set, uint32_t prd1_sw_set, uint32_t alarm0_sw_set, uint32_t alarm1_sw_set, uint32_t rtc_rdy_sw_set, uint32_t interval_alarm_sw_set) {
    registers->INTR_SW_SET.packed_w =  + ((prd0_sw_set<<RTC_INTR_SW_SET_PRD0_SW_SET_OFS)&RTC_INTR_SW_SET_PRD0_SW_SET_MASK) + ((prd1_sw_set<<RTC_INTR_SW_SET_PRD1_SW_SET_OFS)&RTC_INTR_SW_SET_PRD1_SW_SET_MASK) + ((alarm0_sw_set<<RTC_INTR_SW_SET_ALARM0_SW_SET_OFS)&RTC_INTR_SW_SET_ALARM0_SW_SET_MASK) + ((alarm1_sw_set<<RTC_INTR_SW_SET_ALARM1_SW_SET_OFS)&RTC_INTR_SW_SET_ALARM1_SW_SET_MASK) + ((rtc_rdy_sw_set<<RTC_INTR_SW_SET_RTC_RDY_SW_SET_OFS)&RTC_INTR_SW_SET_RTC_RDY_SW_SET_MASK) + ((interval_alarm_sw_set<<RTC_INTR_SW_SET_INTERVAL_ALARM_SW_SET_OFS)&RTC_INTR_SW_SET_INTERVAL_ALARM_SW_SET_MASK);
}

static inline void RTC_DEBUG_CTL_WRITE(RTC_REGS_s * registers, uint32_t intr_en_during_debug, uint32_t ctr_en_during_debug) {
    registers->DEBUG_CTL.packed_w =  + ((intr_en_during_debug<<RTC_DEBUG_CTL_INTR_EN_DURING_DEBUG_OFS)&RTC_DEBUG_CTL_INTR_EN_DURING_DEBUG_MASK) + ((ctr_en_during_debug<<RTC_DEBUG_CTL_CTR_EN_DURING_DEBUG_OFS)&RTC_DEBUG_CTL_CTR_EN_DURING_DEBUG_MASK);
}

static inline void RTC_RTC_CTL_WRITE(RTC_REGS_s * registers, uint32_t rtc_bcd) {
    registers->RTC_CTL.packed_w =  + ((rtc_bcd<<RTC_RTC_CTL_RTC_BCD_OFS)&RTC_RTC_CTL_RTC_BCD_MASK);
}

static inline void RTC_SEC_CTL_WRITE(RTC_REGS_s * registers, uint32_t sec_bin, uint32_t sec_lsb_bcd, uint32_t sec_msb_bcd, uint32_t sec_rtc_rdy) {
    registers->SEC_CTL.packed_w =  + ((sec_bin<<RTC_SEC_CTL_SEC_BIN_OFS)&RTC_SEC_CTL_SEC_BIN_MASK) + ((sec_lsb_bcd<<RTC_SEC_CTL_SEC_LSB_BCD_OFS)&RTC_SEC_CTL_SEC_LSB_BCD_MASK) + ((sec_msb_bcd<<RTC_SEC_CTL_SEC_MSB_BCD_OFS)&RTC_SEC_CTL_SEC_MSB_BCD_MASK) + ((sec_rtc_rdy<<RTC_SEC_CTL_SEC_RTC_RDY_OFS)&RTC_SEC_CTL_SEC_RTC_RDY_MASK);
}

static inline void RTC_MIN_CTL_WRITE(RTC_REGS_s * registers, uint32_t min_bin, uint32_t min_lsb_bcd, uint32_t min_msb_bcd, uint32_t min_rtc_rdy) {
    registers->MIN_CTL.packed_w =  + ((min_bin<<RTC_MIN_CTL_MIN_BIN_OFS)&RTC_MIN_CTL_MIN_BIN_MASK) + ((min_lsb_bcd<<RTC_MIN_CTL_MIN_LSB_BCD_OFS)&RTC_MIN_CTL_MIN_LSB_BCD_MASK) + ((min_msb_bcd<<RTC_MIN_CTL_MIN_MSB_BCD_OFS)&RTC_MIN_CTL_MIN_MSB_BCD_MASK) + ((min_rtc_rdy<<RTC_MIN_CTL_MIN_RTC_RDY_OFS)&RTC_MIN_CTL_MIN_RTC_RDY_MASK);
}

static inline void RTC_HR_CTL_WRITE(RTC_REGS_s * registers, uint32_t hr_bin, uint32_t hr_lsb_bcd, uint32_t hr_msb_bcd, uint32_t hr_rtc_rdy) {
    registers->HR_CTL.packed_w =  + ((hr_bin<<RTC_HR_CTL_HR_BIN_OFS)&RTC_HR_CTL_HR_BIN_MASK) + ((hr_lsb_bcd<<RTC_HR_CTL_HR_LSB_BCD_OFS)&RTC_HR_CTL_HR_LSB_BCD_MASK) + ((hr_msb_bcd<<RTC_HR_CTL_HR_MSB_BCD_OFS)&RTC_HR_CTL_HR_MSB_BCD_MASK) + ((hr_rtc_rdy<<RTC_HR_CTL_HR_RTC_RDY_OFS)&RTC_HR_CTL_HR_RTC_RDY_MASK);
}

static inline void RTC_DOM_CTL_WRITE(RTC_REGS_s * registers, uint32_t dom_bin, uint32_t dom_lsb_bcd, uint32_t dom_msb_bcd, uint32_t dom_rtc_rdy) {
    registers->DOM_CTL.packed_w =  + ((dom_bin<<RTC_DOM_CTL_DOM_BIN_OFS)&RTC_DOM_CTL_DOM_BIN_MASK) + ((dom_lsb_bcd<<RTC_DOM_CTL_DOM_LSB_BCD_OFS)&RTC_DOM_CTL_DOM_LSB_BCD_MASK) + ((dom_msb_bcd<<RTC_DOM_CTL_DOM_MSB_BCD_OFS)&RTC_DOM_CTL_DOM_MSB_BCD_MASK) + ((dom_rtc_rdy<<RTC_DOM_CTL_DOM_RTC_RDY_OFS)&RTC_DOM_CTL_DOM_RTC_RDY_MASK);
}

static inline void RTC_DOW_CTL_WRITE(RTC_REGS_s * registers, uint32_t dow, uint32_t dow_rtc_rdy) {
    registers->DOW_CTL.packed_w =  + ((dow<<RTC_DOW_CTL_DOW_OFS)&RTC_DOW_CTL_DOW_MASK) + ((dow_rtc_rdy<<RTC_DOW_CTL_DOW_RTC_RDY_OFS)&RTC_DOW_CTL_DOW_RTC_RDY_MASK);
}

static inline void RTC_MON_CTL_WRITE(RTC_REGS_s * registers, uint32_t mon_bin, uint32_t mon_lsb_bcd, uint32_t mon_msb_bcd, uint32_t mon_rtc_rdy) {
    registers->MON_CTL.packed_w =  + ((mon_bin<<RTC_MON_CTL_MON_BIN_OFS)&RTC_MON_CTL_MON_BIN_MASK) + ((mon_lsb_bcd<<RTC_MON_CTL_MON_LSB_BCD_OFS)&RTC_MON_CTL_MON_LSB_BCD_MASK) + ((mon_msb_bcd<<RTC_MON_CTL_MON_MSB_BCD_OFS)&RTC_MON_CTL_MON_MSB_BCD_MASK) + ((mon_rtc_rdy<<RTC_MON_CTL_MON_RTC_RDY_OFS)&RTC_MON_CTL_MON_RTC_RDY_MASK);
}

static inline void RTC_YEAR_CTL_WRITE(RTC_REGS_s * registers, uint32_t yr_bin, uint32_t yr_lsb_bcd, uint32_t yr_decade_bcd, uint32_t yr_cent_low_bcd, uint32_t yr_cent_high_bcd, uint32_t yr_rtc_rdy) {
    registers->YEAR_CTL.packed_w =  + ((yr_bin<<RTC_YEAR_CTL_YR_BIN_OFS)&RTC_YEAR_CTL_YR_BIN_MASK) + ((yr_lsb_bcd<<RTC_YEAR_CTL_YR_LSB_BCD_OFS)&RTC_YEAR_CTL_YR_LSB_BCD_MASK) + ((yr_decade_bcd<<RTC_YEAR_CTL_YR_DECADE_BCD_OFS)&RTC_YEAR_CTL_YR_DECADE_BCD_MASK) + ((yr_cent_low_bcd<<RTC_YEAR_CTL_YR_CENT_LOW_BCD_OFS)&RTC_YEAR_CTL_YR_CENT_LOW_BCD_MASK) + ((yr_cent_high_bcd<<RTC_YEAR_CTL_YR_CENT_HIGH_BCD_OFS)&RTC_YEAR_CTL_YR_CENT_HIGH_BCD_MASK) + ((yr_rtc_rdy<<RTC_YEAR_CTL_YR_RTC_RDY_OFS)&RTC_YEAR_CTL_YR_RTC_RDY_MASK);
}

static inline void RTC_A0_MIN_WRITE(RTC_REGS_s * registers, uint32_t a_min_en_0, uint32_t a_min_bin_0, uint32_t a_min_bcd_low_0, uint32_t a_min_bcd_high_0) {
    registers->A0_MIN.packed_w =  + ((a_min_en_0<<RTC_A0_MIN_A_MIN_EN_0_OFS)&RTC_A0_MIN_A_MIN_EN_0_MASK) + ((a_min_bin_0<<RTC_A0_MIN_A_MIN_BIN_0_OFS)&RTC_A0_MIN_A_MIN_BIN_0_MASK) + ((a_min_bcd_low_0<<RTC_A0_MIN_A_MIN_BCD_LOW_0_OFS)&RTC_A0_MIN_A_MIN_BCD_LOW_0_MASK) + ((a_min_bcd_high_0<<RTC_A0_MIN_A_MIN_BCD_HIGH_0_OFS)&RTC_A0_MIN_A_MIN_BCD_HIGH_0_MASK);
}

static inline void RTC_A1_MIN_WRITE(RTC_REGS_s * registers, uint32_t a_min_en_1, uint32_t a_min_bin_1, uint32_t a_min_bcd_low_1, uint32_t a_min_bcd_high_1) {
    registers->A1_MIN.packed_w =  + ((a_min_en_1<<RTC_A1_MIN_A_MIN_EN_1_OFS)&RTC_A1_MIN_A_MIN_EN_1_MASK) + ((a_min_bin_1<<RTC_A1_MIN_A_MIN_BIN_1_OFS)&RTC_A1_MIN_A_MIN_BIN_1_MASK) + ((a_min_bcd_low_1<<RTC_A1_MIN_A_MIN_BCD_LOW_1_OFS)&RTC_A1_MIN_A_MIN_BCD_LOW_1_MASK) + ((a_min_bcd_high_1<<RTC_A1_MIN_A_MIN_BCD_HIGH_1_OFS)&RTC_A1_MIN_A_MIN_BCD_HIGH_1_MASK);
}

static inline void RTC_A0_HOUR_WRITE(RTC_REGS_s * registers, uint32_t a_hr_en_0, uint32_t a_hr_bin_0, uint32_t a_hr_bcd_low_0, uint32_t a_hr_bcd_high_0) {
    registers->A0_HOUR.packed_w =  + ((a_hr_en_0<<RTC_A0_HOUR_A_HR_EN_0_OFS)&RTC_A0_HOUR_A_HR_EN_0_MASK) + ((a_hr_bin_0<<RTC_A0_HOUR_A_HR_BIN_0_OFS)&RTC_A0_HOUR_A_HR_BIN_0_MASK) + ((a_hr_bcd_low_0<<RTC_A0_HOUR_A_HR_BCD_LOW_0_OFS)&RTC_A0_HOUR_A_HR_BCD_LOW_0_MASK) + ((a_hr_bcd_high_0<<RTC_A0_HOUR_A_HR_BCD_HIGH_0_OFS)&RTC_A0_HOUR_A_HR_BCD_HIGH_0_MASK);
}

static inline void RTC_A1_HOUR_WRITE(RTC_REGS_s * registers, uint32_t a_hr_en_1, uint32_t a_hr_bin_1, uint32_t a_hr_bcd_low_1, uint32_t a_hr_bcd_high_1) {
    registers->A1_HOUR.packed_w =  + ((a_hr_en_1<<RTC_A1_HOUR_A_HR_EN_1_OFS)&RTC_A1_HOUR_A_HR_EN_1_MASK) + ((a_hr_bin_1<<RTC_A1_HOUR_A_HR_BIN_1_OFS)&RTC_A1_HOUR_A_HR_BIN_1_MASK) + ((a_hr_bcd_low_1<<RTC_A1_HOUR_A_HR_BCD_LOW_1_OFS)&RTC_A1_HOUR_A_HR_BCD_LOW_1_MASK) + ((a_hr_bcd_high_1<<RTC_A1_HOUR_A_HR_BCD_HIGH_1_OFS)&RTC_A1_HOUR_A_HR_BCD_HIGH_1_MASK);
}

static inline void RTC_A0_DAY_WRITE(RTC_REGS_s * registers, uint32_t a_dow_en_0, uint32_t a_dow_0, uint32_t a_dom_en_0, uint32_t a_dom_bin_0, uint32_t a_dom_lsb_bcd_0, uint32_t a_dom_msb_bcd_0) {
    registers->A0_DAY.packed_w =  + ((a_dow_en_0<<RTC_A0_DAY_A_DOW_EN_0_OFS)&RTC_A0_DAY_A_DOW_EN_0_MASK) + ((a_dow_0<<RTC_A0_DAY_A_DOW_0_OFS)&RTC_A0_DAY_A_DOW_0_MASK) + ((a_dom_en_0<<RTC_A0_DAY_A_DOM_EN_0_OFS)&RTC_A0_DAY_A_DOM_EN_0_MASK) + ((a_dom_bin_0<<RTC_A0_DAY_A_DOM_BIN_0_OFS)&RTC_A0_DAY_A_DOM_BIN_0_MASK) + ((a_dom_lsb_bcd_0<<RTC_A0_DAY_A_DOM_LSB_BCD_0_OFS)&RTC_A0_DAY_A_DOM_LSB_BCD_0_MASK) + ((a_dom_msb_bcd_0<<RTC_A0_DAY_A_DOM_MSB_BCD_0_OFS)&RTC_A0_DAY_A_DOM_MSB_BCD_0_MASK);
}

static inline void RTC_A1_DAY_WRITE(RTC_REGS_s * registers, uint32_t a_dow_en_1, uint32_t a_dow_1, uint32_t a_dom_en_1, uint32_t a_dom_bin_1, uint32_t a_dom_lsb_bcd_1, uint32_t a_dom_msb_bcd_1) {
    registers->A1_DAY.packed_w =  + ((a_dow_en_1<<RTC_A1_DAY_A_DOW_EN_1_OFS)&RTC_A1_DAY_A_DOW_EN_1_MASK) + ((a_dow_1<<RTC_A1_DAY_A_DOW_1_OFS)&RTC_A1_DAY_A_DOW_1_MASK) + ((a_dom_en_1<<RTC_A1_DAY_A_DOM_EN_1_OFS)&RTC_A1_DAY_A_DOM_EN_1_MASK) + ((a_dom_bin_1<<RTC_A1_DAY_A_DOM_BIN_1_OFS)&RTC_A1_DAY_A_DOM_BIN_1_MASK) + ((a_dom_lsb_bcd_1<<RTC_A1_DAY_A_DOM_LSB_BCD_1_OFS)&RTC_A1_DAY_A_DOM_LSB_BCD_1_MASK) + ((a_dom_msb_bcd_1<<RTC_A1_DAY_A_DOM_MSB_BCD_1_OFS)&RTC_A1_DAY_A_DOM_MSB_BCD_1_MASK);
}

static inline void RTC_PRD_INTR_SEL0_WRITE(RTC_REGS_s * registers, uint32_t prd_intr_sel_0) {
    registers->PRD_INTR_SEL0.packed_w =  + ((prd_intr_sel_0<<RTC_PRD_INTR_SEL0_PRD_INTR_SEL_0_OFS)&RTC_PRD_INTR_SEL0_PRD_INTR_SEL_0_MASK);
}

static inline void RTC_PRD_INTR_SEL1_WRITE(RTC_REGS_s * registers, uint32_t prd_intr_sel_1) {
    registers->PRD_INTR_SEL1.packed_w =  + ((prd_intr_sel_1<<RTC_PRD_INTR_SEL1_PRD_INTR_SEL_1_OFS)&RTC_PRD_INTR_SEL1_PRD_INTR_SEL_1_MASK);
}

static inline void RTC_INTERVAL_INTR_SEL_WRITE(RTC_REGS_s * registers, uint32_t interval_intr_sel) {
    registers->INTERVAL_INTR_SEL.packed_w =  + ((interval_intr_sel<<RTC_INTERVAL_INTR_SEL_INTERVAL_INTR_SEL_OFS)&RTC_INTERVAL_INTR_SEL_INTERVAL_INTR_SEL_MASK);
}

static inline void RTC_RTC_CAL_WRITE(RTC_REGS_s * registers, uint32_t freq_out_cal, uint32_t clk_cal_sign, uint32_t clk_cal_ppm_val) {
    registers->RTC_CAL.packed_w =  + ((freq_out_cal<<RTC_RTC_CAL_FREQ_OUT_CAL_OFS)&RTC_RTC_CAL_FREQ_OUT_CAL_MASK) + ((clk_cal_sign<<RTC_RTC_CAL_CLK_CAL_SIGN_OFS)&RTC_RTC_CAL_CLK_CAL_SIGN_MASK) + ((clk_cal_ppm_val<<RTC_RTC_CAL_CLK_CAL_PPM_VAL_OFS)&RTC_RTC_CAL_CLK_CAL_PPM_VAL_MASK);
}

static inline void RTC_RTC_TEMP_CMP_WRITE(RTC_REGS_s * registers, uint32_t temp_cmp_sign, uint32_t temp_cmp_ppm_val) {
    registers->RTC_TEMP_CMP.packed_w =  + ((temp_cmp_sign<<RTC_RTC_TEMP_CMP_TEMP_CMP_SIGN_OFS)&RTC_RTC_TEMP_CMP_TEMP_CMP_SIGN_MASK) + ((temp_cmp_ppm_val<<RTC_RTC_TEMP_CMP_TEMP_CMP_PPM_VAL_OFS)&RTC_RTC_TEMP_CMP_TEMP_CMP_PPM_VAL_MASK);
}

