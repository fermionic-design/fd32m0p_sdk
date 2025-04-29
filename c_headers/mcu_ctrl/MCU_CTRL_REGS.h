#ifndef MCU_CTRL_REGISTERS_H
#define MCU_CTRL_REGISTERS_H

#include <stdint.h>

typedef struct MCU_CTRL_DESC_REG_s {
    unsigned int module_type:8; // 
    unsigned int module_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} MCU_CTRL_DESC_REG_s;

typedef union MCU_CTRL_DESC_u {
    MCU_CTRL_DESC_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_DESC_u;

typedef struct MCU_CTRL_RST_CTRL_REG_s {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    unsigned int rst_key:8; // 
} MCU_CTRL_RST_CTRL_REG_s;

typedef union MCU_CTRL_RST_CTRL_u {
    MCU_CTRL_RST_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_RST_CTRL_u;

typedef struct MCU_CTRL_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} MCU_CTRL_RST_STS_REG_s;

typedef union MCU_CTRL_RST_STS_u {
    MCU_CTRL_RST_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_RST_STS_u;

typedef struct MCU_CTRL_CLK_CTRL_REG_s {
    unsigned int clk_en:1; // 
} MCU_CTRL_CLK_CTRL_REG_s;

typedef union MCU_CTRL_CLK_CTRL_u {
    MCU_CTRL_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_CLK_CTRL_u;

typedef struct MCU_CTRL_INTR_EVENT_REG_s {
    unsigned int bor:1; // 
    unsigned int clk_lf_mon_fault:1; // 
    unsigned int clk_32mhz_req:1; // 
} MCU_CTRL_INTR_EVENT_REG_s;

typedef union MCU_CTRL_INTR_EVENT_u {
    MCU_CTRL_INTR_EVENT_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_INTR_EVENT_u;

typedef struct MCU_CTRL_INTR_EN_REG_s {
    unsigned int bor_en:1; // 
    unsigned int clk_lf_mon_fault_en:1; // 
    unsigned int clk_32mhz_req_en:1; // 
} MCU_CTRL_INTR_EN_REG_s;

typedef union MCU_CTRL_INTR_EN_u {
    MCU_CTRL_INTR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_INTR_EN_u;

typedef struct MCU_CTRL_CLK_PWR_EN_REG_s {
    unsigned int hf_osc_pwr_en:1; // 
    unsigned int rsvd_0:3; // 
    unsigned int hf_xo_pwr_en:1; // 
    unsigned int rsvd_1:3; // 
    unsigned int pll_pwr_en:1; // 
    unsigned int rsvd_2:3; // 
    unsigned int lf_osc_pwr_en:1; // 
    unsigned int rsvd_3:3; // 
    unsigned int lf_xo_pwr_en:1; // 
} MCU_CTRL_CLK_PWR_EN_REG_s;

typedef union MCU_CTRL_CLK_PWR_EN_u {
    MCU_CTRL_CLK_PWR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_CLK_PWR_EN_u;

typedef struct MCU_CTRL_ANA_CLK_EN_REG_s {
    unsigned int hf_osc_clk_en_ovrd_val:1; // software clock gate enable for clk_hf_osc
    unsigned int hf_osc_clk_en_ovrd_en:1; // 
    unsigned int rsvd_0:2; // software clock gate enable for clk_pll
    unsigned int pll_clk_en_ovrd_val:1; // software clock gate enable for clk_pll
    unsigned int pll_clk_en_ovrd_en:1; // 
    unsigned int rsvd_1:2; // software clock gate enable for clk_hf_xo_or_ext
    unsigned int hf_xo_or_ext_clk_ovrd_val:1; // software clock gate enable for clk_hf_xo_or_ext
    unsigned int hf_xo_or_ext_clk_ovrd_en:1; // 
} MCU_CTRL_ANA_CLK_EN_REG_s;

typedef union MCU_CTRL_ANA_CLK_EN_u {
    MCU_CTRL_ANA_CLK_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_ANA_CLK_EN_u;

typedef struct MCU_CTRL_HF_CLK_CTRL_REG_s {
    unsigned int use_clk_pll:1; // Set  '1' to select between clk_pll and clk_hf_xo_or_ext
    unsigned int rsvd_0:3; // Set  '1' to select between clk_hf_osc
    unsigned int use_hf_osc:1; // Set  '1' to select between clk_hf_osc
    unsigned int rsvd_1:7; // Division value to get 4MHz clock from External HF clock selected
    unsigned int hf_xo_or_ext_div:4; // Division value to get 4MHz clock from External HF clock selected
    unsigned int use_precision_clk:1; // 
    unsigned int rsvd_2:3; // 
    unsigned int hf_xo_en:1; // 
    unsigned int rsvd_3:3; // 
    unsigned int hf_xo_or_ext_chng_time:4; // 
    unsigned int hf_osc_code_chng_time:4; // 
} MCU_CTRL_HF_CLK_CTRL_REG_s;

typedef union MCU_CTRL_HF_CLK_CTRL_u {
    MCU_CTRL_HF_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_HF_CLK_CTRL_u;

typedef struct MCU_CTRL_HF_OSC_CLK_CTRL_REG_s {
    unsigned int hf_osc_freq:4; // 
    unsigned int hf_osc_div1:4; // HF internal osciallator divided value
    unsigned int hf_osc_div2:4; // HF internal osciallator divided value
    unsigned int hf_osc_4mhz_in_stop:1; // HF internal osciallator frequency is forced to 4MHz in STOP mode
    unsigned int hf_osc_disable_in_stop:1; // Disable HF internal oscillator in stop mode. HW will automatically select LF clock for clk_apb in stop mode when this bit is set.
    unsigned int hf_osc_disable:1; // Disable HF internal oscillator in RUN, SLEEP and STOP modes. HW will automatically select LF clock for clk_ahb & clk_apb in stop mode when this bit is set.
} MCU_CTRL_HF_OSC_CLK_CTRL_REG_s;

typedef union MCU_CTRL_HF_OSC_CLK_CTRL_u {
    MCU_CTRL_HF_OSC_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_HF_OSC_CLK_CTRL_u;

typedef struct MCU_CTRL_LF_CLK_CTRL_REG_s {
    unsigned int lf_xo_en:1; // 
    unsigned int rsvd_0:3; // 
    unsigned int lf_osc_en:1; // 
    unsigned int rsvd_1:3; // 00: LFI_OSC 10:HS PLL 01: External LF clock from oscialltor 10: External clock from pin LFCLK_IN
    unsigned int lf_clk_sel:2; // 00: LFI_OSC 10:HS PLL 01: External LF clock from oscialltor 10: External clock from pin LFCLK_IN
    unsigned int rsvd_2:2; // Gate LF and APB clock in Stand by mode
    unsigned int gate_clocks_in_stdby:1; // Gate LF and APB clock in Stand by mode
    unsigned int rsvd_3:3; // 
    unsigned int lfosc_cfg0:8; // 
} MCU_CTRL_LF_CLK_CTRL_REG_s;

typedef union MCU_CTRL_LF_CLK_CTRL_u {
    MCU_CTRL_LF_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_LF_CLK_CTRL_u;

typedef struct MCU_CTRL_XO_CFG_STS_REG_s {
    unsigned int hf_xo_cfg0:8; // 
    unsigned int lf_xo_cfg0:8; // 
    unsigned int hf_xo_sts0:8; // 
    unsigned int lf_xo_sts0:8; // 
} MCU_CTRL_XO_CFG_STS_REG_s;

typedef union MCU_CTRL_XO_CFG_STS_u {
    MCU_CTRL_XO_CFG_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_XO_CFG_STS_u;

typedef struct MCU_CTRL_AHB_HCLK_CTRL_REG_s {
    unsigned int use_lf_clk:1; // 0:High Frequency clock 1: Low frequency clock
    unsigned int rsvd_0:3; // 
    unsigned int all_hf_clk_off:1; // 
    unsigned int rsvd_1:3; // 
    unsigned int only_hf_osc_on:1; // 
} MCU_CTRL_AHB_HCLK_CTRL_REG_s;

typedef union MCU_CTRL_AHB_HCLK_CTRL_u {
    MCU_CTRL_AHB_HCLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_AHB_HCLK_CTRL_u;

typedef struct MCU_CTRL_APB_PCLK_CTRL_REG_s {
    unsigned int pclk_div:4; // 
} MCU_CTRL_APB_PCLK_CTRL_REG_s;

typedef union MCU_CTRL_APB_PCLK_CTRL_u {
    MCU_CTRL_APB_PCLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_APB_PCLK_CTRL_u;

typedef struct MCU_CTRL_CLK_4MHZ_CTRL_REG_s {
    unsigned int clk_4mhz_en:1; // enable for clk_4mhz
} MCU_CTRL_CLK_4MHZ_CTRL_REG_s;

typedef union MCU_CTRL_CLK_4MHZ_CTRL_u {
    MCU_CTRL_CLK_4MHZ_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_CLK_4MHZ_CTRL_u;

typedef struct MCU_CTRL_PWR_SM_OVRD_CTL_REG_s {
    unsigned int clk_ahb_ovrd_val:1; // 
    unsigned int clk_ahb_ovrd_en:1; // 
    unsigned int rsvd_0:2; // 
    unsigned int clk_apb_ovrd_val:1; // 
    unsigned int clk_apb_ovrd_en:1; // 
    unsigned int rsvd_1:2; // 
    unsigned int clk_4mhz_ovrd_val:1; // 
    unsigned int clk_4mhz_ovrd_en:1; // 
    unsigned int rsvd_2:2; // 
    unsigned int clk_lf_ovrd_val:1; // 
    unsigned int clk_lf_ovrd_en:1; // 
    unsigned int rsvd_3:2; // 
    unsigned int clk_cpu_ovrd_en:1; // 
    unsigned int clk_cpu_ovrd_val:1; // 
    unsigned int rsvd_4:2; // 
    unsigned int use_lf_clk_sm_ovrd_val:1; // 
    unsigned int use_lf_clk_sm_ovrd_en:1; // 
} MCU_CTRL_PWR_SM_OVRD_CTL_REG_s;

typedef union MCU_CTRL_PWR_SM_OVRD_CTL_u {
    MCU_CTRL_PWR_SM_OVRD_CTL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_PWR_SM_OVRD_CTL_u;

typedef struct MCU_CTRL_PLL_EN_REG_s {
    unsigned int pll_en:1; // 
    unsigned int rsvd_0:3; // 
    unsigned int pll_mdiv_clk2x_en:1; // 
    unsigned int rsvd_1:3; // 
    unsigned int pll_mdiv_clk0_en:1; // 
    unsigned int rsvd_2:7; // 
    unsigned int pll_mdiv_clk1_en:1; // 
    unsigned int rsvd_3:3; // 
    unsigned int pll_sw_cg_en:1; // 
    unsigned int rsvd_4:3; // 
    unsigned int pll_cp_icfg:8; // 
} MCU_CTRL_PLL_EN_REG_s;

typedef union MCU_CTRL_PLL_EN_u {
    MCU_CTRL_PLL_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_PLL_EN_u;

typedef struct MCU_CTRL_PLL_CTRL1_REG_s {
    unsigned int pll_ref_sel:2; // 0: HF crystal oscialltor 1: HF extetnal clock 2 3: HF oscillator
    unsigned int rsvd_0:6; // 
    unsigned int pll_vco_freq:8; // 
    unsigned int pll_pfd_width_cfg:2; // 
    unsigned int rsvd_1:6; // 
    unsigned int pll_bw:2; // 
    unsigned int rsvd_2:2; // 
    unsigned int pll_freq_chng_time:4; // 
} MCU_CTRL_PLL_CTRL1_REG_s;

typedef union MCU_CTRL_PLL_CTRL1_u {
    MCU_CTRL_PLL_CTRL1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_PLL_CTRL1_u;

typedef struct MCU_CTRL_PLL_CTRL2_REG_s {
    unsigned int pll_mdiv_clk2x:4; // 
    unsigned int pll_mdiv_clk0:4; // 
    unsigned int pll_mdiv_clk1:4; // 
    unsigned int pll_pdiv:4; // 
    unsigned int pll_qdiv:16; // 
} MCU_CTRL_PLL_CTRL2_REG_s;

typedef union MCU_CTRL_PLL_CTRL2_u {
    MCU_CTRL_PLL_CTRL2_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_PLL_CTRL2_u;

typedef struct MCU_CTRL_BLOCK_CLK_REQ_REG_s {
    unsigned int block_ip_clk_32mhz_req:24; // 
} MCU_CTRL_BLOCK_CLK_REQ_REG_s;

typedef union MCU_CTRL_BLOCK_CLK_REQ_u {
    MCU_CTRL_BLOCK_CLK_REQ_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_BLOCK_CLK_REQ_u;

typedef struct MCU_CTRL_PMODE_CFG_REG_s {
    unsigned int low_power_mode:3; // 2: STOP 3: STANDBY 4:SHUTDOWN
} MCU_CTRL_PMODE_CFG_REG_s;

typedef union MCU_CTRL_PMODE_CFG_u {
    MCU_CTRL_PMODE_CFG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_PMODE_CFG_u;

typedef struct MCU_CTRL_AON_CTRL_REG_s {
    unsigned int aon_strb:1; // 
    unsigned int rsvd_0:7; // 
    unsigned int aon_addr:4; // 
    unsigned int rsvd_1:4; // 
    unsigned int aon_wdata:8; // 
    unsigned int aon_rdata:8; // 
} MCU_CTRL_AON_CTRL_REG_s;

typedef union MCU_CTRL_AON_CTRL_u {
    MCU_CTRL_AON_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_AON_CTRL_u;

typedef struct MCU_CTRL_GPAMPCTL_REG_s {
    unsigned int gpamp_pwr_en:1; // 
    unsigned int gpamp_en:1; // 
    unsigned int gpamp_out_en:1; // 
    unsigned int rsvd_0:1; // 
    unsigned int gpamp_nchnl_sel:3; // 
    unsigned int rsvd_1:1; // 
    unsigned int gpamp_pchnl_en:2; // 
    unsigned int gpamp_rri:2; // 
    unsigned int gpamp_chop_clk_freq:2; // 
    unsigned int gpamp_chop_clk_mode:2; // 
    unsigned int gpamp_cfg0:8; // 
    unsigned int gpamp_cfg1:8; // 
} MCU_CTRL_GPAMPCTL_REG_s;

typedef union MCU_CTRL_GPAMPCTL_u {
    MCU_CTRL_GPAMPCTL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_GPAMPCTL_u;

typedef struct MCU_CTRL_GPAMPSTS_REG_s {
    unsigned int gpamp_sts0:8; // 
    unsigned int gpamp_sts1:8; // 
} MCU_CTRL_GPAMPSTS_REG_s;

typedef union MCU_CTRL_GPAMPSTS_u {
    MCU_CTRL_GPAMPSTS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_GPAMPSTS_u;

typedef struct MCU_CTRL_PROCMONCTL_REG_s {
    unsigned int proc_mon_pwr_en:1; // 
    unsigned int proc_mon_en:1; // 
} MCU_CTRL_PROCMONCTL_REG_s;

typedef union MCU_CTRL_PROCMONCTL_u {
    MCU_CTRL_PROCMONCTL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_PROCMONCTL_u;

typedef struct MCU_CTRL_MCU_SW_RST_REG_s {
    unsigned int sw_rst_lvl0:1; // soft reset equivalent to porz
    unsigned int sw_rst_lvl1:1; // soft reset equivalent to borz
    unsigned int sw_rst_lvl2:1; // soft reset equivalent to rst_n_sys
    unsigned int sw_rst_lvl3:1; // soft reset equivalent to rst_n_cpu
    unsigned int sw_rst_lvl4:1; // Reserved
} MCU_CTRL_MCU_SW_RST_REG_s;

typedef union MCU_CTRL_MCU_SW_RST_u {
    MCU_CTRL_MCU_SW_RST_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_MCU_SW_RST_u;

typedef struct MCU_CTRL_BOOT_CFG_REG_s {
    unsigned int boot_sel:1; // 
    unsigned int rsvd_0:3; // 
    unsigned int fw_trigger:1; // 
} MCU_CTRL_BOOT_CFG_REG_s;

typedef union MCU_CTRL_BOOT_CFG_u {
    MCU_CTRL_BOOT_CFG_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_BOOT_CFG_u;

typedef struct MCU_CTRL_BOR_MODE_SEL_REG_s {
    unsigned int bor_mode:1; // 0: borz generates reset. 1: borz generated interrupt
    unsigned int rsvd_0:23; // 
    unsigned int bor_key:8; // 
} MCU_CTRL_BOR_MODE_SEL_REG_s;

typedef union MCU_CTRL_BOR_MODE_SEL_u {
    MCU_CTRL_BOR_MODE_SEL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_BOR_MODE_SEL_u;

typedef struct MCU_CTRL_SPARE_CTRL_REG_s {
    unsigned int cfg0:8; // 
    unsigned int cfg1:8; // 
} MCU_CTRL_SPARE_CTRL_REG_s;

typedef union MCU_CTRL_SPARE_CTRL_u {
    MCU_CTRL_SPARE_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_SPARE_CTRL_u;

typedef struct MCU_CTRL_SPARE_STS_REG_s {
    unsigned int sts0:8; // 
    unsigned int sts1:8; // 
} MCU_CTRL_SPARE_STS_REG_s;

typedef union MCU_CTRL_SPARE_STS_u {
    MCU_CTRL_SPARE_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_SPARE_STS_u;

typedef struct MCU_CTRL_ANA_SPARE_STS_REG_s {
    unsigned int spare_in:16; // 
} MCU_CTRL_ANA_SPARE_STS_REG_s;

typedef union MCU_CTRL_ANA_SPARE_STS_u {
    MCU_CTRL_ANA_SPARE_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_ANA_SPARE_STS_u;

typedef struct MCU_CTRL_ANA_SPARE_OUT0_REG_s {
    unsigned int spare_out_0:32; // 
} MCU_CTRL_ANA_SPARE_OUT0_REG_s;

typedef union MCU_CTRL_ANA_SPARE_OUT0_u {
    MCU_CTRL_ANA_SPARE_OUT0_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_ANA_SPARE_OUT0_u;

typedef struct MCU_CTRL_ANA_SPARE_OUT1_REG_s {
    unsigned int spare_out_1:32; // 
} MCU_CTRL_ANA_SPARE_OUT1_REG_s;

typedef union MCU_CTRL_ANA_SPARE_OUT1_u {
    MCU_CTRL_ANA_SPARE_OUT1_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_ANA_SPARE_OUT1_u;

typedef struct MCU_CTRL_REGS_s{
    volatile MCU_CTRL_DESC_u DESC;
    volatile MCU_CTRL_RST_CTRL_u RST_CTRL;
    volatile MCU_CTRL_RST_STS_u RST_STS;
    volatile MCU_CTRL_CLK_CTRL_u CLK_CTRL;
    volatile MCU_CTRL_INTR_EVENT_u INTR_EVENT;
    volatile MCU_CTRL_INTR_EN_u INTR_EN;
    volatile MCU_CTRL_CLK_PWR_EN_u CLK_PWR_EN;
    volatile MCU_CTRL_ANA_CLK_EN_u ANA_CLK_EN;
    volatile MCU_CTRL_HF_CLK_CTRL_u HF_CLK_CTRL;
    volatile MCU_CTRL_HF_OSC_CLK_CTRL_u HF_OSC_CLK_CTRL;
    volatile MCU_CTRL_LF_CLK_CTRL_u LF_CLK_CTRL;
    volatile MCU_CTRL_XO_CFG_STS_u XO_CFG_STS;
    volatile MCU_CTRL_AHB_HCLK_CTRL_u AHB_HCLK_CTRL;
    volatile MCU_CTRL_APB_PCLK_CTRL_u APB_PCLK_CTRL;
    volatile MCU_CTRL_CLK_4MHZ_CTRL_u CLK_4MHZ_CTRL;
    volatile MCU_CTRL_PWR_SM_OVRD_CTL_u PWR_SM_OVRD_CTL;
    volatile MCU_CTRL_PLL_EN_u PLL_EN;
    volatile MCU_CTRL_PLL_CTRL1_u PLL_CTRL1;
    volatile MCU_CTRL_PLL_CTRL2_u PLL_CTRL2;
    volatile MCU_CTRL_BLOCK_CLK_REQ_u BLOCK_CLK_REQ;
    volatile MCU_CTRL_PMODE_CFG_u PMODE_CFG;
    volatile MCU_CTRL_AON_CTRL_u AON_CTRL;
    volatile MCU_CTRL_GPAMPCTL_u GPAMPCTL;
    volatile MCU_CTRL_GPAMPSTS_u GPAMPSTS;
    volatile MCU_CTRL_PROCMONCTL_u PROCMONCTL;
    volatile MCU_CTRL_MCU_SW_RST_u MCU_SW_RST;
    volatile MCU_CTRL_BOOT_CFG_u BOOT_CFG;
    volatile MCU_CTRL_BOR_MODE_SEL_u BOR_MODE_SEL;
    volatile MCU_CTRL_SPARE_CTRL_u SPARE_CTRL;
    volatile MCU_CTRL_SPARE_STS_u SPARE_STS;
    volatile MCU_CTRL_ANA_SPARE_STS_u ANA_SPARE_STS;
    volatile MCU_CTRL_ANA_SPARE_OUT0_u ANA_SPARE_OUT0;
    volatile MCU_CTRL_ANA_SPARE_OUT1_u ANA_SPARE_OUT1;
} MCU_CTRL_REGS_s;

#define MCU_CTRL_DESC_MODULE_TYPE_OFS (0)
#define MCU_CTRL_DESC_MODULE_TYPE_MASK ((uint32_t)0x000000FFU)
#define MCU_CTRL_DESC_MODULE_SUBTYPE_OFS (8)
#define MCU_CTRL_DESC_MODULE_SUBTYPE_MASK ((uint32_t)0x0000FF00U)
#define MCU_CTRL_DESC_MAJOR_REV_OFS (16)
#define MCU_CTRL_DESC_MAJOR_REV_MASK ((uint32_t)0x000F0000U)
#define MCU_CTRL_DESC_MINOR_REV_OFS (20)
#define MCU_CTRL_DESC_MINOR_REV_MASK ((uint32_t)0x00F00000U)
#define MCU_CTRL_RST_CTRL_RST_OFS (0)
#define MCU_CTRL_RST_CTRL_RST_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_RST_CTRL_RST_STS_CLR_OFS (1)
#define MCU_CTRL_RST_CTRL_RST_STS_CLR_MASK ((uint32_t)0x00000002U)
#define MCU_CTRL_RST_CTRL_RST_KEY_OFS (24)
#define MCU_CTRL_RST_CTRL_RST_KEY_MASK ((uint32_t)0xFF000000U)
#define MCU_CTRL_RST_STS_RST_STS_OFS (0)
#define MCU_CTRL_RST_STS_RST_STS_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_CLK_CTRL_CLK_EN_OFS (0)
#define MCU_CTRL_CLK_CTRL_CLK_EN_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_INTR_EVENT_BOR_OFS (0)
#define MCU_CTRL_INTR_EVENT_BOR_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_INTR_EVENT_CLK_LF_MON_FAULT_OFS (1)
#define MCU_CTRL_INTR_EVENT_CLK_LF_MON_FAULT_MASK ((uint32_t)0x00000002U)
#define MCU_CTRL_INTR_EVENT_CLK_32MHZ_REQ_OFS (2)
#define MCU_CTRL_INTR_EVENT_CLK_32MHZ_REQ_MASK ((uint32_t)0x00000004U)
#define MCU_CTRL_INTR_EN_BOR_EN_OFS (0)
#define MCU_CTRL_INTR_EN_BOR_EN_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_INTR_EN_CLK_LF_MON_FAULT_EN_OFS (1)
#define MCU_CTRL_INTR_EN_CLK_LF_MON_FAULT_EN_MASK ((uint32_t)0x00000002U)
#define MCU_CTRL_INTR_EN_CLK_32MHZ_REQ_EN_OFS (2)
#define MCU_CTRL_INTR_EN_CLK_32MHZ_REQ_EN_MASK ((uint32_t)0x00000004U)
#define MCU_CTRL_CLK_PWR_EN_HF_OSC_PWR_EN_OFS (0)
#define MCU_CTRL_CLK_PWR_EN_HF_OSC_PWR_EN_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_CLK_PWR_EN_HF_XO_PWR_EN_OFS (4)
#define MCU_CTRL_CLK_PWR_EN_HF_XO_PWR_EN_MASK ((uint32_t)0x00000010U)
#define MCU_CTRL_CLK_PWR_EN_PLL_PWR_EN_OFS (8)
#define MCU_CTRL_CLK_PWR_EN_PLL_PWR_EN_MASK ((uint32_t)0x00000100U)
#define MCU_CTRL_CLK_PWR_EN_LF_OSC_PWR_EN_OFS (12)
#define MCU_CTRL_CLK_PWR_EN_LF_OSC_PWR_EN_MASK ((uint32_t)0x00001000U)
#define MCU_CTRL_CLK_PWR_EN_LF_XO_PWR_EN_OFS (16)
#define MCU_CTRL_CLK_PWR_EN_LF_XO_PWR_EN_MASK ((uint32_t)0x00010000U)
#define MCU_CTRL_ANA_CLK_EN_HF_OSC_CLK_EN_OVRD_VAL_OFS (0)
#define MCU_CTRL_ANA_CLK_EN_HF_OSC_CLK_EN_OVRD_VAL_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_ANA_CLK_EN_HF_OSC_CLK_EN_OVRD_EN_OFS (1)
#define MCU_CTRL_ANA_CLK_EN_HF_OSC_CLK_EN_OVRD_EN_MASK ((uint32_t)0x00000002U)
#define MCU_CTRL_ANA_CLK_EN_PLL_CLK_EN_OVRD_VAL_OFS (4)
#define MCU_CTRL_ANA_CLK_EN_PLL_CLK_EN_OVRD_VAL_MASK ((uint32_t)0x00000010U)
#define MCU_CTRL_ANA_CLK_EN_PLL_CLK_EN_OVRD_EN_OFS (5)
#define MCU_CTRL_ANA_CLK_EN_PLL_CLK_EN_OVRD_EN_MASK ((uint32_t)0x00000020U)
#define MCU_CTRL_ANA_CLK_EN_HF_XO_OR_EXT_CLK_OVRD_VAL_OFS (8)
#define MCU_CTRL_ANA_CLK_EN_HF_XO_OR_EXT_CLK_OVRD_VAL_MASK ((uint32_t)0x00000100U)
#define MCU_CTRL_ANA_CLK_EN_HF_XO_OR_EXT_CLK_OVRD_EN_OFS (9)
#define MCU_CTRL_ANA_CLK_EN_HF_XO_OR_EXT_CLK_OVRD_EN_MASK ((uint32_t)0x00000200U)
#define MCU_CTRL_HF_CLK_CTRL_USE_CLK_PLL_OFS (0)
#define MCU_CTRL_HF_CLK_CTRL_USE_CLK_PLL_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_HF_CLK_CTRL_USE_HF_OSC_OFS (4)
#define MCU_CTRL_HF_CLK_CTRL_USE_HF_OSC_MASK ((uint32_t)0x00000010U)
#define MCU_CTRL_HF_CLK_CTRL_HF_XO_OR_EXT_DIV_OFS (12)
#define MCU_CTRL_HF_CLK_CTRL_HF_XO_OR_EXT_DIV_MASK ((uint32_t)0x0000F000U)
#define MCU_CTRL_HF_CLK_CTRL_USE_PRECISION_CLK_OFS (16)
#define MCU_CTRL_HF_CLK_CTRL_USE_PRECISION_CLK_MASK ((uint32_t)0x00010000U)
#define MCU_CTRL_HF_CLK_CTRL_HF_XO_EN_OFS (20)
#define MCU_CTRL_HF_CLK_CTRL_HF_XO_EN_MASK ((uint32_t)0x00100000U)
#define MCU_CTRL_HF_CLK_CTRL_HF_XO_OR_EXT_CHNG_TIME_OFS (24)
#define MCU_CTRL_HF_CLK_CTRL_HF_XO_OR_EXT_CHNG_TIME_MASK ((uint32_t)0x0F000000U)
#define MCU_CTRL_HF_CLK_CTRL_HF_OSC_CODE_CHNG_TIME_OFS (28)
#define MCU_CTRL_HF_CLK_CTRL_HF_OSC_CODE_CHNG_TIME_MASK ((uint32_t)0xF0000000U)
#define MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_FREQ_OFS (0)
#define MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_FREQ_MASK ((uint32_t)0x0000000FU)
#define MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_DIV1_OFS (4)
#define MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_DIV1_MASK ((uint32_t)0x000000F0U)
#define MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_DIV2_OFS (8)
#define MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_DIV2_MASK ((uint32_t)0x00000F00U)
#define MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_4MHZ_IN_STOP_OFS (12)
#define MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_4MHZ_IN_STOP_MASK ((uint32_t)0x00001000U)
#define MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_DISABLE_IN_STOP_OFS (13)
#define MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_DISABLE_IN_STOP_MASK ((uint32_t)0x00002000U)
#define MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_DISABLE_OFS (14)
#define MCU_CTRL_HF_OSC_CLK_CTRL_HF_OSC_DISABLE_MASK ((uint32_t)0x00004000U)
#define MCU_CTRL_LF_CLK_CTRL_LF_XO_EN_OFS (0)
#define MCU_CTRL_LF_CLK_CTRL_LF_XO_EN_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_LF_CLK_CTRL_LF_OSC_EN_OFS (4)
#define MCU_CTRL_LF_CLK_CTRL_LF_OSC_EN_MASK ((uint32_t)0x00000010U)
#define MCU_CTRL_LF_CLK_CTRL_LF_CLK_SEL_OFS (8)
#define MCU_CTRL_LF_CLK_CTRL_LF_CLK_SEL_MASK ((uint32_t)0x00000300U)
#define MCU_CTRL_LF_CLK_CTRL_GATE_CLOCKS_IN_STDBY_OFS (12)
#define MCU_CTRL_LF_CLK_CTRL_GATE_CLOCKS_IN_STDBY_MASK ((uint32_t)0x00001000U)
#define MCU_CTRL_LF_CLK_CTRL_LFOSC_CFG0_OFS (16)
#define MCU_CTRL_LF_CLK_CTRL_LFOSC_CFG0_MASK ((uint32_t)0x00FF0000U)
#define MCU_CTRL_XO_CFG_STS_HF_XO_CFG0_OFS (0)
#define MCU_CTRL_XO_CFG_STS_HF_XO_CFG0_MASK ((uint32_t)0x000000FFU)
#define MCU_CTRL_XO_CFG_STS_LF_XO_CFG0_OFS (8)
#define MCU_CTRL_XO_CFG_STS_LF_XO_CFG0_MASK ((uint32_t)0x0000FF00U)
#define MCU_CTRL_XO_CFG_STS_HF_XO_STS0_OFS (16)
#define MCU_CTRL_XO_CFG_STS_HF_XO_STS0_MASK ((uint32_t)0x00FF0000U)
#define MCU_CTRL_XO_CFG_STS_LF_XO_STS0_OFS (24)
#define MCU_CTRL_XO_CFG_STS_LF_XO_STS0_MASK ((uint32_t)0xFF000000U)
#define MCU_CTRL_AHB_HCLK_CTRL_USE_LF_CLK_OFS (0)
#define MCU_CTRL_AHB_HCLK_CTRL_USE_LF_CLK_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_AHB_HCLK_CTRL_ALL_HF_CLK_OFF_OFS (4)
#define MCU_CTRL_AHB_HCLK_CTRL_ALL_HF_CLK_OFF_MASK ((uint32_t)0x00000010U)
#define MCU_CTRL_AHB_HCLK_CTRL_ONLY_HF_OSC_ON_OFS (8)
#define MCU_CTRL_AHB_HCLK_CTRL_ONLY_HF_OSC_ON_MASK ((uint32_t)0x00000100U)
#define MCU_CTRL_APB_PCLK_CTRL_PCLK_DIV_OFS (0)
#define MCU_CTRL_APB_PCLK_CTRL_PCLK_DIV_MASK ((uint32_t)0x0000000FU)
#define MCU_CTRL_CLK_4MHZ_CTRL_CLK_4MHZ_EN_OFS (0)
#define MCU_CTRL_CLK_4MHZ_CTRL_CLK_4MHZ_EN_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_CLK_AHB_OVRD_VAL_OFS (0)
#define MCU_CTRL_PWR_SM_OVRD_CTL_CLK_AHB_OVRD_VAL_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_CLK_AHB_OVRD_EN_OFS (1)
#define MCU_CTRL_PWR_SM_OVRD_CTL_CLK_AHB_OVRD_EN_MASK ((uint32_t)0x00000002U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_CLK_APB_OVRD_VAL_OFS (4)
#define MCU_CTRL_PWR_SM_OVRD_CTL_CLK_APB_OVRD_VAL_MASK ((uint32_t)0x00000010U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_CLK_APB_OVRD_EN_OFS (5)
#define MCU_CTRL_PWR_SM_OVRD_CTL_CLK_APB_OVRD_EN_MASK ((uint32_t)0x00000020U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_CLK_4MHZ_OVRD_VAL_OFS (8)
#define MCU_CTRL_PWR_SM_OVRD_CTL_CLK_4MHZ_OVRD_VAL_MASK ((uint32_t)0x00000100U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_CLK_4MHZ_OVRD_EN_OFS (9)
#define MCU_CTRL_PWR_SM_OVRD_CTL_CLK_4MHZ_OVRD_EN_MASK ((uint32_t)0x00000200U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_CLK_LF_OVRD_VAL_OFS (12)
#define MCU_CTRL_PWR_SM_OVRD_CTL_CLK_LF_OVRD_VAL_MASK ((uint32_t)0x00001000U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_CLK_LF_OVRD_EN_OFS (13)
#define MCU_CTRL_PWR_SM_OVRD_CTL_CLK_LF_OVRD_EN_MASK ((uint32_t)0x00002000U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_CLK_CPU_OVRD_EN_OFS (16)
#define MCU_CTRL_PWR_SM_OVRD_CTL_CLK_CPU_OVRD_EN_MASK ((uint32_t)0x00010000U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_CLK_CPU_OVRD_VAL_OFS (17)
#define MCU_CTRL_PWR_SM_OVRD_CTL_CLK_CPU_OVRD_VAL_MASK ((uint32_t)0x00020000U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_USE_LF_CLK_SM_OVRD_VAL_OFS (20)
#define MCU_CTRL_PWR_SM_OVRD_CTL_USE_LF_CLK_SM_OVRD_VAL_MASK ((uint32_t)0x00100000U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_USE_LF_CLK_SM_OVRD_EN_OFS (21)
#define MCU_CTRL_PWR_SM_OVRD_CTL_USE_LF_CLK_SM_OVRD_EN_MASK ((uint32_t)0x00200000U)
#define MCU_CTRL_PLL_EN_PLL_EN_OFS (0)
#define MCU_CTRL_PLL_EN_PLL_EN_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_PLL_EN_PLL_MDIV_CLK2X_EN_OFS (4)
#define MCU_CTRL_PLL_EN_PLL_MDIV_CLK2X_EN_MASK ((uint32_t)0x00000010U)
#define MCU_CTRL_PLL_EN_PLL_MDIV_CLK0_EN_OFS (8)
#define MCU_CTRL_PLL_EN_PLL_MDIV_CLK0_EN_MASK ((uint32_t)0x00000100U)
#define MCU_CTRL_PLL_EN_PLL_MDIV_CLK1_EN_OFS (16)
#define MCU_CTRL_PLL_EN_PLL_MDIV_CLK1_EN_MASK ((uint32_t)0x00010000U)
#define MCU_CTRL_PLL_EN_PLL_SW_CG_EN_OFS (20)
#define MCU_CTRL_PLL_EN_PLL_SW_CG_EN_MASK ((uint32_t)0x00100000U)
#define MCU_CTRL_PLL_EN_PLL_CP_ICFG_OFS (24)
#define MCU_CTRL_PLL_EN_PLL_CP_ICFG_MASK ((uint32_t)0xFF000000U)
#define MCU_CTRL_PLL_CTRL1_PLL_REF_SEL_OFS (0)
#define MCU_CTRL_PLL_CTRL1_PLL_REF_SEL_MASK ((uint32_t)0x00000003U)
#define MCU_CTRL_PLL_CTRL1_PLL_VCO_FREQ_OFS (8)
#define MCU_CTRL_PLL_CTRL1_PLL_VCO_FREQ_MASK ((uint32_t)0x0000FF00U)
#define MCU_CTRL_PLL_CTRL1_PLL_PFD_WIDTH_CFG_OFS (16)
#define MCU_CTRL_PLL_CTRL1_PLL_PFD_WIDTH_CFG_MASK ((uint32_t)0x00030000U)
#define MCU_CTRL_PLL_CTRL1_PLL_BW_OFS (24)
#define MCU_CTRL_PLL_CTRL1_PLL_BW_MASK ((uint32_t)0x03000000U)
#define MCU_CTRL_PLL_CTRL1_PLL_FREQ_CHNG_TIME_OFS (28)
#define MCU_CTRL_PLL_CTRL1_PLL_FREQ_CHNG_TIME_MASK ((uint32_t)0xF0000000U)
#define MCU_CTRL_PLL_CTRL2_PLL_MDIV_CLK2X_OFS (0)
#define MCU_CTRL_PLL_CTRL2_PLL_MDIV_CLK2X_MASK ((uint32_t)0x0000000FU)
#define MCU_CTRL_PLL_CTRL2_PLL_MDIV_CLK0_OFS (4)
#define MCU_CTRL_PLL_CTRL2_PLL_MDIV_CLK0_MASK ((uint32_t)0x000000F0U)
#define MCU_CTRL_PLL_CTRL2_PLL_MDIV_CLK1_OFS (8)
#define MCU_CTRL_PLL_CTRL2_PLL_MDIV_CLK1_MASK ((uint32_t)0x00000F00U)
#define MCU_CTRL_PLL_CTRL2_PLL_PDIV_OFS (12)
#define MCU_CTRL_PLL_CTRL2_PLL_PDIV_MASK ((uint32_t)0x0000F000U)
#define MCU_CTRL_PLL_CTRL2_PLL_QDIV_OFS (16)
#define MCU_CTRL_PLL_CTRL2_PLL_QDIV_MASK ((uint32_t)0xFFFF0000U)
#define MCU_CTRL_BLOCK_CLK_REQ_BLOCK_IP_CLK_32MHZ_REQ_OFS (0)
#define MCU_CTRL_BLOCK_CLK_REQ_BLOCK_IP_CLK_32MHZ_REQ_MASK ((uint32_t)0x00FFFFFFU)
#define MCU_CTRL_PMODE_CFG_LOW_POWER_MODE_OFS (0)
#define MCU_CTRL_PMODE_CFG_LOW_POWER_MODE_MASK ((uint32_t)0x00000007U)
#define MCU_CTRL_AON_CTRL_AON_STRB_OFS (0)
#define MCU_CTRL_AON_CTRL_AON_STRB_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_AON_CTRL_AON_ADDR_OFS (8)
#define MCU_CTRL_AON_CTRL_AON_ADDR_MASK ((uint32_t)0x00000F00U)
#define MCU_CTRL_AON_CTRL_AON_WDATA_OFS (16)
#define MCU_CTRL_AON_CTRL_AON_WDATA_MASK ((uint32_t)0x00FF0000U)
#define MCU_CTRL_AON_CTRL_AON_RDATA_OFS (24)
#define MCU_CTRL_AON_CTRL_AON_RDATA_MASK ((uint32_t)0xFF000000U)
#define MCU_CTRL_GPAMPCTL_GPAMP_PWR_EN_OFS (0)
#define MCU_CTRL_GPAMPCTL_GPAMP_PWR_EN_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_GPAMPCTL_GPAMP_EN_OFS (1)
#define MCU_CTRL_GPAMPCTL_GPAMP_EN_MASK ((uint32_t)0x00000002U)
#define MCU_CTRL_GPAMPCTL_GPAMP_OUT_EN_OFS (2)
#define MCU_CTRL_GPAMPCTL_GPAMP_OUT_EN_MASK ((uint32_t)0x00000004U)
#define MCU_CTRL_GPAMPCTL_GPAMP_NCHNL_SEL_OFS (4)
#define MCU_CTRL_GPAMPCTL_GPAMP_NCHNL_SEL_MASK ((uint32_t)0x00000070U)
#define MCU_CTRL_GPAMPCTL_GPAMP_PCHNL_EN_OFS (8)
#define MCU_CTRL_GPAMPCTL_GPAMP_PCHNL_EN_MASK ((uint32_t)0x00000300U)
#define MCU_CTRL_GPAMPCTL_GPAMP_RRI_OFS (10)
#define MCU_CTRL_GPAMPCTL_GPAMP_RRI_MASK ((uint32_t)0x00000C00U)
#define MCU_CTRL_GPAMPCTL_GPAMP_CHOP_CLK_FREQ_OFS (12)
#define MCU_CTRL_GPAMPCTL_GPAMP_CHOP_CLK_FREQ_MASK ((uint32_t)0x00003000U)
#define MCU_CTRL_GPAMPCTL_GPAMP_CHOP_CLK_MODE_OFS (14)
#define MCU_CTRL_GPAMPCTL_GPAMP_CHOP_CLK_MODE_MASK ((uint32_t)0x0000C000U)
#define MCU_CTRL_GPAMPCTL_GPAMP_CFG0_OFS (16)
#define MCU_CTRL_GPAMPCTL_GPAMP_CFG0_MASK ((uint32_t)0x00FF0000U)
#define MCU_CTRL_GPAMPCTL_GPAMP_CFG1_OFS (24)
#define MCU_CTRL_GPAMPCTL_GPAMP_CFG1_MASK ((uint32_t)0xFF000000U)
#define MCU_CTRL_GPAMPSTS_GPAMP_STS0_OFS (0)
#define MCU_CTRL_GPAMPSTS_GPAMP_STS0_MASK ((uint32_t)0x000000FFU)
#define MCU_CTRL_GPAMPSTS_GPAMP_STS1_OFS (8)
#define MCU_CTRL_GPAMPSTS_GPAMP_STS1_MASK ((uint32_t)0x0000FF00U)
#define MCU_CTRL_PROCMONCTL_PROC_MON_PWR_EN_OFS (0)
#define MCU_CTRL_PROCMONCTL_PROC_MON_PWR_EN_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_PROCMONCTL_PROC_MON_EN_OFS (1)
#define MCU_CTRL_PROCMONCTL_PROC_MON_EN_MASK ((uint32_t)0x00000002U)
#define MCU_CTRL_MCU_SW_RST_SW_RST_LVL0_OFS (0)
#define MCU_CTRL_MCU_SW_RST_SW_RST_LVL0_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_MCU_SW_RST_SW_RST_LVL1_OFS (1)
#define MCU_CTRL_MCU_SW_RST_SW_RST_LVL1_MASK ((uint32_t)0x00000002U)
#define MCU_CTRL_MCU_SW_RST_SW_RST_LVL2_OFS (2)
#define MCU_CTRL_MCU_SW_RST_SW_RST_LVL2_MASK ((uint32_t)0x00000004U)
#define MCU_CTRL_MCU_SW_RST_SW_RST_LVL3_OFS (3)
#define MCU_CTRL_MCU_SW_RST_SW_RST_LVL3_MASK ((uint32_t)0x00000008U)
#define MCU_CTRL_MCU_SW_RST_SW_RST_LVL4_OFS (4)
#define MCU_CTRL_MCU_SW_RST_SW_RST_LVL4_MASK ((uint32_t)0x00000010U)
#define MCU_CTRL_BOOT_CFG_BOOT_SEL_OFS (0)
#define MCU_CTRL_BOOT_CFG_BOOT_SEL_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_BOOT_CFG_FW_TRIGGER_OFS (4)
#define MCU_CTRL_BOOT_CFG_FW_TRIGGER_MASK ((uint32_t)0x00000010U)
#define MCU_CTRL_BOR_MODE_SEL_BOR_MODE_OFS (0)
#define MCU_CTRL_BOR_MODE_SEL_BOR_MODE_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_BOR_MODE_SEL_BOR_KEY_OFS (24)
#define MCU_CTRL_BOR_MODE_SEL_BOR_KEY_MASK ((uint32_t)0xFF000000U)
#define MCU_CTRL_SPARE_CTRL_CFG0_OFS (0)
#define MCU_CTRL_SPARE_CTRL_CFG0_MASK ((uint32_t)0x000000FFU)
#define MCU_CTRL_SPARE_CTRL_CFG1_OFS (8)
#define MCU_CTRL_SPARE_CTRL_CFG1_MASK ((uint32_t)0x0000FF00U)
#define MCU_CTRL_SPARE_STS_STS0_OFS (0)
#define MCU_CTRL_SPARE_STS_STS0_MASK ((uint32_t)0x000000FFU)
#define MCU_CTRL_SPARE_STS_STS1_OFS (8)
#define MCU_CTRL_SPARE_STS_STS1_MASK ((uint32_t)0x0000FF00U)
#define MCU_CTRL_ANA_SPARE_STS_SPARE_IN_OFS (0)
#define MCU_CTRL_ANA_SPARE_STS_SPARE_IN_MASK ((uint32_t)0x0000FFFFU)
#define MCU_CTRL_ANA_SPARE_OUT0_SPARE_OUT_0_OFS (0)
#define MCU_CTRL_ANA_SPARE_OUT0_SPARE_OUT_0_MASK ((uint32_t)0xFFFFFFFFU)
#define MCU_CTRL_ANA_SPARE_OUT1_SPARE_OUT_1_OFS (0)
#define MCU_CTRL_ANA_SPARE_OUT1_SPARE_OUT_1_MASK ((uint32_t)0xFFFFFFFFU)
#endif
