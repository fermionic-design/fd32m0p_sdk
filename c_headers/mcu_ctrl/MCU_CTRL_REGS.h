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
    MCU_CTRL_DESC_REG_s DESC;
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
    MCU_CTRL_RST_CTRL_REG_s RST_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_RST_CTRL_u;

typedef struct MCU_CTRL_RST_STS_REG_s {
    unsigned int rst_sts:1; // 
} MCU_CTRL_RST_STS_REG_s;

typedef union MCU_CTRL_RST_STS_u {
    MCU_CTRL_RST_STS_REG_s RST_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_RST_STS_u;

typedef struct MCU_CTRL_CLK_CTRL_REG_s {
    unsigned int clk_en:1; // 
} MCU_CTRL_CLK_CTRL_REG_s;

typedef union MCU_CTRL_CLK_CTRL_u {
    MCU_CTRL_CLK_CTRL_REG_s CLK_CTRL;
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
    MCU_CTRL_INTR_EVENT_REG_s INTR_EVENT;
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
    MCU_CTRL_INTR_EN_REG_s INTR_EN;
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
    MCU_CTRL_CLK_PWR_EN_REG_s CLK_PWR_EN;
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
    MCU_CTRL_ANA_CLK_EN_REG_s ANA_CLK_EN;
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
    MCU_CTRL_HF_CLK_CTRL_REG_s HF_CLK_CTRL;
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
    MCU_CTRL_HF_OSC_CLK_CTRL_REG_s HF_OSC_CLK_CTRL;
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
    MCU_CTRL_LF_CLK_CTRL_REG_s LF_CLK_CTRL;
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
    MCU_CTRL_XO_CFG_STS_REG_s XO_CFG_STS;
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
    MCU_CTRL_AHB_HCLK_CTRL_REG_s AHB_HCLK_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_AHB_HCLK_CTRL_u;

typedef struct MCU_CTRL_APB_PCLK_CTRL_REG_s {
    unsigned int pclk_div:4; // 
} MCU_CTRL_APB_PCLK_CTRL_REG_s;

typedef union MCU_CTRL_APB_PCLK_CTRL_u {
    MCU_CTRL_APB_PCLK_CTRL_REG_s APB_PCLK_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_APB_PCLK_CTRL_u;

typedef struct MCU_CTRL_CLK_4MHZ_CTRL_REG_s {
    unsigned int clk_4mhz_en:1; // enable for clk_4mhz
} MCU_CTRL_CLK_4MHZ_CTRL_REG_s;

typedef union MCU_CTRL_CLK_4MHZ_CTRL_u {
    MCU_CTRL_CLK_4MHZ_CTRL_REG_s CLK_4MHZ_CTRL;
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
    MCU_CTRL_PWR_SM_OVRD_CTL_REG_s PWR_SM_OVRD_CTL;
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
    MCU_CTRL_PLL_EN_REG_s PLL_EN;
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
    MCU_CTRL_PLL_CTRL1_REG_s PLL_CTRL1;
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
    MCU_CTRL_PLL_CTRL2_REG_s PLL_CTRL2;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_PLL_CTRL2_u;

typedef struct MCU_CTRL_BLOCK_CLK_REQ_REG_s {
    unsigned int block_ip_clk_32mhz_req:24; // 
} MCU_CTRL_BLOCK_CLK_REQ_REG_s;

typedef union MCU_CTRL_BLOCK_CLK_REQ_u {
    MCU_CTRL_BLOCK_CLK_REQ_REG_s BLOCK_CLK_REQ;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_BLOCK_CLK_REQ_u;

typedef struct MCU_CTRL_PMODE_CFG_REG_s {
    unsigned int low_power_mode:3; // 2: STOP 3: STANDBY 4:SHUTDOWN
} MCU_CTRL_PMODE_CFG_REG_s;

typedef union MCU_CTRL_PMODE_CFG_u {
    MCU_CTRL_PMODE_CFG_REG_s PMODE_CFG;
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
    MCU_CTRL_AON_CTRL_REG_s AON_CTRL;
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
    MCU_CTRL_GPAMPCTL_REG_s GPAMPCTL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_GPAMPCTL_u;

typedef struct MCU_CTRL_GPAMPSTS_REG_s {
    unsigned int gpamp_sts0:8; // 
    unsigned int gpamp_sts1:8; // 
} MCU_CTRL_GPAMPSTS_REG_s;

typedef union MCU_CTRL_GPAMPSTS_u {
    MCU_CTRL_GPAMPSTS_REG_s GPAMPSTS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_GPAMPSTS_u;

typedef struct MCU_CTRL_PROCMONCTL_REG_s {
    unsigned int proc_mon_pwr_en:1; // 
    unsigned int proc_mon_en:1; // 
} MCU_CTRL_PROCMONCTL_REG_s;

typedef union MCU_CTRL_PROCMONCTL_u {
    MCU_CTRL_PROCMONCTL_REG_s PROCMONCTL;
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
    MCU_CTRL_MCU_SW_RST_REG_s MCU_SW_RST;
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
    MCU_CTRL_BOOT_CFG_REG_s BOOT_CFG;
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
    MCU_CTRL_BOR_MODE_SEL_REG_s BOR_MODE_SEL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_BOR_MODE_SEL_u;

typedef struct MCU_CTRL_SPARE_CTRL_REG_s {
    unsigned int cfg0:8; // 
    unsigned int cfg1:8; // 
} MCU_CTRL_SPARE_CTRL_REG_s;

typedef union MCU_CTRL_SPARE_CTRL_u {
    MCU_CTRL_SPARE_CTRL_REG_s SPARE_CTRL;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_SPARE_CTRL_u;

typedef struct MCU_CTRL_SPARE_STS_REG_s {
    unsigned int sts0:8; // 
    unsigned int sts1:8; // 
} MCU_CTRL_SPARE_STS_REG_s;

typedef union MCU_CTRL_SPARE_STS_u {
    MCU_CTRL_SPARE_STS_REG_s SPARE_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_SPARE_STS_u;

typedef struct MCU_CTRL_ANA_SPARE_STS_REG_s {
    unsigned int spare_in:16; // 
} MCU_CTRL_ANA_SPARE_STS_REG_s;

typedef union MCU_CTRL_ANA_SPARE_STS_u {
    MCU_CTRL_ANA_SPARE_STS_REG_s ANA_SPARE_STS;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_ANA_SPARE_STS_u;

typedef struct MCU_CTRL_ANA_SPARE_OUT0_REG_s {
    unsigned int spare_out_0:32; // 
} MCU_CTRL_ANA_SPARE_OUT0_REG_s;

typedef union MCU_CTRL_ANA_SPARE_OUT0_u {
    MCU_CTRL_ANA_SPARE_OUT0_REG_s ANA_SPARE_OUT0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} MCU_CTRL_ANA_SPARE_OUT0_u;

typedef struct MCU_CTRL_ANA_SPARE_OUT1_REG_s {
    unsigned int spare_out_1:32; // 
} MCU_CTRL_ANA_SPARE_OUT1_REG_s;

typedef union MCU_CTRL_ANA_SPARE_OUT1_u {
    MCU_CTRL_ANA_SPARE_OUT1_REG_s ANA_SPARE_OUT1;
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

#define MCU_CTRL_DESC_module_type_OFS (0)
#define MCU_CTRL_DESC_module_type_MASK ((uint32_t)0x000000FFU)
#define MCU_CTRL_DESC_module_subtype_OFS (8)
#define MCU_CTRL_DESC_module_subtype_MASK ((uint32_t)0x0000FF00U)
#define MCU_CTRL_DESC_major_rev_OFS (16)
#define MCU_CTRL_DESC_major_rev_MASK ((uint32_t)0x000F0000U)
#define MCU_CTRL_DESC_minor_rev_OFS (20)
#define MCU_CTRL_DESC_minor_rev_MASK ((uint32_t)0x00F00000U)
#define MCU_CTRL_RST_CTRL_rst_OFS (0)
#define MCU_CTRL_RST_CTRL_rst_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_RST_CTRL_rst_sts_clr_OFS (1)
#define MCU_CTRL_RST_CTRL_rst_sts_clr_MASK ((uint32_t)0x00000002U)
#define MCU_CTRL_RST_CTRL_rst_key_OFS (24)
#define MCU_CTRL_RST_CTRL_rst_key_MASK ((uint32_t)0xFF000000U)
#define MCU_CTRL_RST_STS_rst_sts_OFS (0)
#define MCU_CTRL_RST_STS_rst_sts_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_CLK_CTRL_clk_en_OFS (0)
#define MCU_CTRL_CLK_CTRL_clk_en_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_INTR_EVENT_bor_OFS (0)
#define MCU_CTRL_INTR_EVENT_bor_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_INTR_EVENT_clk_lf_mon_fault_OFS (1)
#define MCU_CTRL_INTR_EVENT_clk_lf_mon_fault_MASK ((uint32_t)0x00000002U)
#define MCU_CTRL_INTR_EVENT_clk_32mhz_req_OFS (2)
#define MCU_CTRL_INTR_EVENT_clk_32mhz_req_MASK ((uint32_t)0x00000004U)
#define MCU_CTRL_INTR_EN_bor_en_OFS (0)
#define MCU_CTRL_INTR_EN_bor_en_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_INTR_EN_clk_lf_mon_fault_en_OFS (1)
#define MCU_CTRL_INTR_EN_clk_lf_mon_fault_en_MASK ((uint32_t)0x00000002U)
#define MCU_CTRL_INTR_EN_clk_32mhz_req_en_OFS (2)
#define MCU_CTRL_INTR_EN_clk_32mhz_req_en_MASK ((uint32_t)0x00000004U)
#define MCU_CTRL_CLK_PWR_EN_hf_osc_pwr_en_OFS (0)
#define MCU_CTRL_CLK_PWR_EN_hf_osc_pwr_en_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_CLK_PWR_EN_hf_xo_pwr_en_OFS (4)
#define MCU_CTRL_CLK_PWR_EN_hf_xo_pwr_en_MASK ((uint32_t)0x00000010U)
#define MCU_CTRL_CLK_PWR_EN_pll_pwr_en_OFS (8)
#define MCU_CTRL_CLK_PWR_EN_pll_pwr_en_MASK ((uint32_t)0x00000100U)
#define MCU_CTRL_CLK_PWR_EN_lf_osc_pwr_en_OFS (12)
#define MCU_CTRL_CLK_PWR_EN_lf_osc_pwr_en_MASK ((uint32_t)0x00001000U)
#define MCU_CTRL_CLK_PWR_EN_lf_xo_pwr_en_OFS (16)
#define MCU_CTRL_CLK_PWR_EN_lf_xo_pwr_en_MASK ((uint32_t)0x00010000U)
#define MCU_CTRL_ANA_CLK_EN_hf_osc_clk_en_ovrd_val_OFS (0)
#define MCU_CTRL_ANA_CLK_EN_hf_osc_clk_en_ovrd_val_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_ANA_CLK_EN_hf_osc_clk_en_ovrd_en_OFS (1)
#define MCU_CTRL_ANA_CLK_EN_hf_osc_clk_en_ovrd_en_MASK ((uint32_t)0x00000002U)
#define MCU_CTRL_ANA_CLK_EN_pll_clk_en_ovrd_val_OFS (4)
#define MCU_CTRL_ANA_CLK_EN_pll_clk_en_ovrd_val_MASK ((uint32_t)0x00000010U)
#define MCU_CTRL_ANA_CLK_EN_pll_clk_en_ovrd_en_OFS (5)
#define MCU_CTRL_ANA_CLK_EN_pll_clk_en_ovrd_en_MASK ((uint32_t)0x00000020U)
#define MCU_CTRL_ANA_CLK_EN_hf_xo_or_ext_clk_ovrd_val_OFS (8)
#define MCU_CTRL_ANA_CLK_EN_hf_xo_or_ext_clk_ovrd_val_MASK ((uint32_t)0x00000100U)
#define MCU_CTRL_ANA_CLK_EN_hf_xo_or_ext_clk_ovrd_en_OFS (9)
#define MCU_CTRL_ANA_CLK_EN_hf_xo_or_ext_clk_ovrd_en_MASK ((uint32_t)0x00000200U)
#define MCU_CTRL_HF_CLK_CTRL_use_clk_pll_OFS (0)
#define MCU_CTRL_HF_CLK_CTRL_use_clk_pll_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_HF_CLK_CTRL_use_hf_osc_OFS (4)
#define MCU_CTRL_HF_CLK_CTRL_use_hf_osc_MASK ((uint32_t)0x00000010U)
#define MCU_CTRL_HF_CLK_CTRL_hf_xo_or_ext_div_OFS (12)
#define MCU_CTRL_HF_CLK_CTRL_hf_xo_or_ext_div_MASK ((uint32_t)0x0000F000U)
#define MCU_CTRL_HF_CLK_CTRL_use_precision_clk_OFS (16)
#define MCU_CTRL_HF_CLK_CTRL_use_precision_clk_MASK ((uint32_t)0x00010000U)
#define MCU_CTRL_HF_CLK_CTRL_hf_xo_en_OFS (20)
#define MCU_CTRL_HF_CLK_CTRL_hf_xo_en_MASK ((uint32_t)0x00100000U)
#define MCU_CTRL_HF_CLK_CTRL_hf_xo_or_ext_chng_time_OFS (24)
#define MCU_CTRL_HF_CLK_CTRL_hf_xo_or_ext_chng_time_MASK ((uint32_t)0x0F000000U)
#define MCU_CTRL_HF_CLK_CTRL_hf_osc_code_chng_time_OFS (28)
#define MCU_CTRL_HF_CLK_CTRL_hf_osc_code_chng_time_MASK ((uint32_t)0xF0000000U)
#define MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_freq_OFS (0)
#define MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_freq_MASK ((uint32_t)0x0000000FU)
#define MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_div1_OFS (4)
#define MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_div1_MASK ((uint32_t)0x000000F0U)
#define MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_div2_OFS (8)
#define MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_div2_MASK ((uint32_t)0x00000F00U)
#define MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_4mhz_in_stop_OFS (12)
#define MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_4mhz_in_stop_MASK ((uint32_t)0x00001000U)
#define MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_disable_in_stop_OFS (13)
#define MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_disable_in_stop_MASK ((uint32_t)0x00002000U)
#define MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_disable_OFS (14)
#define MCU_CTRL_HF_OSC_CLK_CTRL_hf_osc_disable_MASK ((uint32_t)0x00004000U)
#define MCU_CTRL_LF_CLK_CTRL_lf_xo_en_OFS (0)
#define MCU_CTRL_LF_CLK_CTRL_lf_xo_en_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_LF_CLK_CTRL_lf_osc_en_OFS (4)
#define MCU_CTRL_LF_CLK_CTRL_lf_osc_en_MASK ((uint32_t)0x00000010U)
#define MCU_CTRL_LF_CLK_CTRL_lf_clk_sel_OFS (8)
#define MCU_CTRL_LF_CLK_CTRL_lf_clk_sel_MASK ((uint32_t)0x00000300U)
#define MCU_CTRL_LF_CLK_CTRL_gate_clocks_in_stdby_OFS (12)
#define MCU_CTRL_LF_CLK_CTRL_gate_clocks_in_stdby_MASK ((uint32_t)0x00001000U)
#define MCU_CTRL_LF_CLK_CTRL_lfosc_cfg0_OFS (16)
#define MCU_CTRL_LF_CLK_CTRL_lfosc_cfg0_MASK ((uint32_t)0x00FF0000U)
#define MCU_CTRL_XO_CFG_STS_hf_xo_cfg0_OFS (0)
#define MCU_CTRL_XO_CFG_STS_hf_xo_cfg0_MASK ((uint32_t)0x000000FFU)
#define MCU_CTRL_XO_CFG_STS_lf_xo_cfg0_OFS (8)
#define MCU_CTRL_XO_CFG_STS_lf_xo_cfg0_MASK ((uint32_t)0x0000FF00U)
#define MCU_CTRL_XO_CFG_STS_hf_xo_sts0_OFS (16)
#define MCU_CTRL_XO_CFG_STS_hf_xo_sts0_MASK ((uint32_t)0x00FF0000U)
#define MCU_CTRL_XO_CFG_STS_lf_xo_sts0_OFS (24)
#define MCU_CTRL_XO_CFG_STS_lf_xo_sts0_MASK ((uint32_t)0xFF000000U)
#define MCU_CTRL_AHB_HCLK_CTRL_use_lf_clk_OFS (0)
#define MCU_CTRL_AHB_HCLK_CTRL_use_lf_clk_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_AHB_HCLK_CTRL_all_hf_clk_off_OFS (4)
#define MCU_CTRL_AHB_HCLK_CTRL_all_hf_clk_off_MASK ((uint32_t)0x00000010U)
#define MCU_CTRL_AHB_HCLK_CTRL_only_hf_osc_on_OFS (8)
#define MCU_CTRL_AHB_HCLK_CTRL_only_hf_osc_on_MASK ((uint32_t)0x00000100U)
#define MCU_CTRL_APB_PCLK_CTRL_pclk_div_OFS (0)
#define MCU_CTRL_APB_PCLK_CTRL_pclk_div_MASK ((uint32_t)0x0000000FU)
#define MCU_CTRL_CLK_4MHZ_CTRL_clk_4mhz_en_OFS (0)
#define MCU_CTRL_CLK_4MHZ_CTRL_clk_4mhz_en_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_clk_ahb_ovrd_val_OFS (0)
#define MCU_CTRL_PWR_SM_OVRD_CTL_clk_ahb_ovrd_val_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_clk_ahb_ovrd_en_OFS (1)
#define MCU_CTRL_PWR_SM_OVRD_CTL_clk_ahb_ovrd_en_MASK ((uint32_t)0x00000002U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_clk_apb_ovrd_val_OFS (4)
#define MCU_CTRL_PWR_SM_OVRD_CTL_clk_apb_ovrd_val_MASK ((uint32_t)0x00000010U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_clk_apb_ovrd_en_OFS (5)
#define MCU_CTRL_PWR_SM_OVRD_CTL_clk_apb_ovrd_en_MASK ((uint32_t)0x00000020U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_clk_4mhz_ovrd_val_OFS (8)
#define MCU_CTRL_PWR_SM_OVRD_CTL_clk_4mhz_ovrd_val_MASK ((uint32_t)0x00000100U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_clk_4mhz_ovrd_en_OFS (9)
#define MCU_CTRL_PWR_SM_OVRD_CTL_clk_4mhz_ovrd_en_MASK ((uint32_t)0x00000200U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_clk_lf_ovrd_val_OFS (12)
#define MCU_CTRL_PWR_SM_OVRD_CTL_clk_lf_ovrd_val_MASK ((uint32_t)0x00001000U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_clk_lf_ovrd_en_OFS (13)
#define MCU_CTRL_PWR_SM_OVRD_CTL_clk_lf_ovrd_en_MASK ((uint32_t)0x00002000U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_clk_cpu_ovrd_en_OFS (16)
#define MCU_CTRL_PWR_SM_OVRD_CTL_clk_cpu_ovrd_en_MASK ((uint32_t)0x00010000U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_clk_cpu_ovrd_val_OFS (17)
#define MCU_CTRL_PWR_SM_OVRD_CTL_clk_cpu_ovrd_val_MASK ((uint32_t)0x00020000U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_use_lf_clk_sm_ovrd_val_OFS (20)
#define MCU_CTRL_PWR_SM_OVRD_CTL_use_lf_clk_sm_ovrd_val_MASK ((uint32_t)0x00100000U)
#define MCU_CTRL_PWR_SM_OVRD_CTL_use_lf_clk_sm_ovrd_en_OFS (21)
#define MCU_CTRL_PWR_SM_OVRD_CTL_use_lf_clk_sm_ovrd_en_MASK ((uint32_t)0x00200000U)
#define MCU_CTRL_PLL_EN_pll_en_OFS (0)
#define MCU_CTRL_PLL_EN_pll_en_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_PLL_EN_pll_mdiv_clk2x_en_OFS (4)
#define MCU_CTRL_PLL_EN_pll_mdiv_clk2x_en_MASK ((uint32_t)0x00000010U)
#define MCU_CTRL_PLL_EN_pll_mdiv_clk0_en_OFS (8)
#define MCU_CTRL_PLL_EN_pll_mdiv_clk0_en_MASK ((uint32_t)0x00000100U)
#define MCU_CTRL_PLL_EN_pll_mdiv_clk1_en_OFS (16)
#define MCU_CTRL_PLL_EN_pll_mdiv_clk1_en_MASK ((uint32_t)0x00010000U)
#define MCU_CTRL_PLL_EN_pll_sw_cg_en_OFS (20)
#define MCU_CTRL_PLL_EN_pll_sw_cg_en_MASK ((uint32_t)0x00100000U)
#define MCU_CTRL_PLL_EN_pll_cp_icfg_OFS (24)
#define MCU_CTRL_PLL_EN_pll_cp_icfg_MASK ((uint32_t)0xFF000000U)
#define MCU_CTRL_PLL_CTRL1_pll_ref_sel_OFS (0)
#define MCU_CTRL_PLL_CTRL1_pll_ref_sel_MASK ((uint32_t)0x00000003U)
#define MCU_CTRL_PLL_CTRL1_pll_vco_freq_OFS (8)
#define MCU_CTRL_PLL_CTRL1_pll_vco_freq_MASK ((uint32_t)0x0000FF00U)
#define MCU_CTRL_PLL_CTRL1_pll_pfd_width_cfg_OFS (16)
#define MCU_CTRL_PLL_CTRL1_pll_pfd_width_cfg_MASK ((uint32_t)0x00030000U)
#define MCU_CTRL_PLL_CTRL1_pll_bw_OFS (24)
#define MCU_CTRL_PLL_CTRL1_pll_bw_MASK ((uint32_t)0x03000000U)
#define MCU_CTRL_PLL_CTRL1_pll_freq_chng_time_OFS (28)
#define MCU_CTRL_PLL_CTRL1_pll_freq_chng_time_MASK ((uint32_t)0xF0000000U)
#define MCU_CTRL_PLL_CTRL2_pll_mdiv_clk2x_OFS (0)
#define MCU_CTRL_PLL_CTRL2_pll_mdiv_clk2x_MASK ((uint32_t)0x0000000FU)
#define MCU_CTRL_PLL_CTRL2_pll_mdiv_clk0_OFS (4)
#define MCU_CTRL_PLL_CTRL2_pll_mdiv_clk0_MASK ((uint32_t)0x000000F0U)
#define MCU_CTRL_PLL_CTRL2_pll_mdiv_clk1_OFS (8)
#define MCU_CTRL_PLL_CTRL2_pll_mdiv_clk1_MASK ((uint32_t)0x00000F00U)
#define MCU_CTRL_PLL_CTRL2_pll_pdiv_OFS (12)
#define MCU_CTRL_PLL_CTRL2_pll_pdiv_MASK ((uint32_t)0x0000F000U)
#define MCU_CTRL_PLL_CTRL2_pll_qdiv_OFS (16)
#define MCU_CTRL_PLL_CTRL2_pll_qdiv_MASK ((uint32_t)0xFFFF0000U)
#define MCU_CTRL_BLOCK_CLK_REQ_block_ip_clk_32mhz_req_OFS (0)
#define MCU_CTRL_BLOCK_CLK_REQ_block_ip_clk_32mhz_req_MASK ((uint32_t)0x00FFFFFFU)
#define MCU_CTRL_PMODE_CFG_low_power_mode_OFS (0)
#define MCU_CTRL_PMODE_CFG_low_power_mode_MASK ((uint32_t)0x00000007U)
#define MCU_CTRL_AON_CTRL_aon_strb_OFS (0)
#define MCU_CTRL_AON_CTRL_aon_strb_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_AON_CTRL_aon_addr_OFS (8)
#define MCU_CTRL_AON_CTRL_aon_addr_MASK ((uint32_t)0x00000F00U)
#define MCU_CTRL_AON_CTRL_aon_wdata_OFS (16)
#define MCU_CTRL_AON_CTRL_aon_wdata_MASK ((uint32_t)0x00FF0000U)
#define MCU_CTRL_AON_CTRL_aon_rdata_OFS (24)
#define MCU_CTRL_AON_CTRL_aon_rdata_MASK ((uint32_t)0xFF000000U)
#define MCU_CTRL_GPAMPCTL_gpamp_pwr_en_OFS (0)
#define MCU_CTRL_GPAMPCTL_gpamp_pwr_en_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_GPAMPCTL_gpamp_en_OFS (1)
#define MCU_CTRL_GPAMPCTL_gpamp_en_MASK ((uint32_t)0x00000002U)
#define MCU_CTRL_GPAMPCTL_gpamp_out_en_OFS (2)
#define MCU_CTRL_GPAMPCTL_gpamp_out_en_MASK ((uint32_t)0x00000004U)
#define MCU_CTRL_GPAMPCTL_gpamp_nchnl_sel_OFS (4)
#define MCU_CTRL_GPAMPCTL_gpamp_nchnl_sel_MASK ((uint32_t)0x00000070U)
#define MCU_CTRL_GPAMPCTL_gpamp_pchnl_en_OFS (8)
#define MCU_CTRL_GPAMPCTL_gpamp_pchnl_en_MASK ((uint32_t)0x00000300U)
#define MCU_CTRL_GPAMPCTL_gpamp_rri_OFS (10)
#define MCU_CTRL_GPAMPCTL_gpamp_rri_MASK ((uint32_t)0x00000C00U)
#define MCU_CTRL_GPAMPCTL_gpamp_chop_clk_freq_OFS (12)
#define MCU_CTRL_GPAMPCTL_gpamp_chop_clk_freq_MASK ((uint32_t)0x00003000U)
#define MCU_CTRL_GPAMPCTL_gpamp_chop_clk_mode_OFS (14)
#define MCU_CTRL_GPAMPCTL_gpamp_chop_clk_mode_MASK ((uint32_t)0x0000C000U)
#define MCU_CTRL_GPAMPCTL_gpamp_cfg0_OFS (16)
#define MCU_CTRL_GPAMPCTL_gpamp_cfg0_MASK ((uint32_t)0x00FF0000U)
#define MCU_CTRL_GPAMPCTL_gpamp_cfg1_OFS (24)
#define MCU_CTRL_GPAMPCTL_gpamp_cfg1_MASK ((uint32_t)0xFF000000U)
#define MCU_CTRL_GPAMPSTS_gpamp_sts0_OFS (0)
#define MCU_CTRL_GPAMPSTS_gpamp_sts0_MASK ((uint32_t)0x000000FFU)
#define MCU_CTRL_GPAMPSTS_gpamp_sts1_OFS (8)
#define MCU_CTRL_GPAMPSTS_gpamp_sts1_MASK ((uint32_t)0x0000FF00U)
#define MCU_CTRL_PROCMONCTL_proc_mon_pwr_en_OFS (0)
#define MCU_CTRL_PROCMONCTL_proc_mon_pwr_en_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_PROCMONCTL_proc_mon_en_OFS (1)
#define MCU_CTRL_PROCMONCTL_proc_mon_en_MASK ((uint32_t)0x00000002U)
#define MCU_CTRL_MCU_SW_RST_sw_rst_lvl0_OFS (0)
#define MCU_CTRL_MCU_SW_RST_sw_rst_lvl0_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_MCU_SW_RST_sw_rst_lvl1_OFS (1)
#define MCU_CTRL_MCU_SW_RST_sw_rst_lvl1_MASK ((uint32_t)0x00000002U)
#define MCU_CTRL_MCU_SW_RST_sw_rst_lvl2_OFS (2)
#define MCU_CTRL_MCU_SW_RST_sw_rst_lvl2_MASK ((uint32_t)0x00000004U)
#define MCU_CTRL_MCU_SW_RST_sw_rst_lvl3_OFS (3)
#define MCU_CTRL_MCU_SW_RST_sw_rst_lvl3_MASK ((uint32_t)0x00000008U)
#define MCU_CTRL_MCU_SW_RST_sw_rst_lvl4_OFS (4)
#define MCU_CTRL_MCU_SW_RST_sw_rst_lvl4_MASK ((uint32_t)0x00000010U)
#define MCU_CTRL_BOOT_CFG_boot_sel_OFS (0)
#define MCU_CTRL_BOOT_CFG_boot_sel_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_BOOT_CFG_fw_trigger_OFS (4)
#define MCU_CTRL_BOOT_CFG_fw_trigger_MASK ((uint32_t)0x00000010U)
#define MCU_CTRL_BOR_MODE_SEL_bor_mode_OFS (0)
#define MCU_CTRL_BOR_MODE_SEL_bor_mode_MASK ((uint32_t)0x00000001U)
#define MCU_CTRL_BOR_MODE_SEL_bor_key_OFS (24)
#define MCU_CTRL_BOR_MODE_SEL_bor_key_MASK ((uint32_t)0xFF000000U)
#define MCU_CTRL_SPARE_CTRL_cfg0_OFS (0)
#define MCU_CTRL_SPARE_CTRL_cfg0_MASK ((uint32_t)0x000000FFU)
#define MCU_CTRL_SPARE_CTRL_cfg1_OFS (8)
#define MCU_CTRL_SPARE_CTRL_cfg1_MASK ((uint32_t)0x0000FF00U)
#define MCU_CTRL_SPARE_STS_sts0_OFS (0)
#define MCU_CTRL_SPARE_STS_sts0_MASK ((uint32_t)0x000000FFU)
#define MCU_CTRL_SPARE_STS_sts1_OFS (8)
#define MCU_CTRL_SPARE_STS_sts1_MASK ((uint32_t)0x0000FF00U)
#define MCU_CTRL_ANA_SPARE_STS_spare_in_OFS (0)
#define MCU_CTRL_ANA_SPARE_STS_spare_in_MASK ((uint32_t)0x0000FFFFU)
#define MCU_CTRL_ANA_SPARE_OUT0_spare_out_0_OFS (0)
#define MCU_CTRL_ANA_SPARE_OUT0_spare_out_0_MASK ((uint32_t)0xFFFFFFFFU)
#define MCU_CTRL_ANA_SPARE_OUT1_spare_out_1_OFS (0)
#define MCU_CTRL_ANA_SPARE_OUT1_spare_out_1_MASK ((uint32_t)0xFFFFFFFFU)
#endif
