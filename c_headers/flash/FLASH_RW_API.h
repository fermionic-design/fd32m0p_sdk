#include "FLASH_REGS.h"

static inline void FLASH_DESC_WRITE(FLASH_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<FLASH_DESC_module_type_OFS)&FLASH_DESC_module_type_MASK) + ((modue_subtype<<FLASH_DESC_modue_subtype_OFS)&FLASH_DESC_modue_subtype_MASK) + ((major_rev<<FLASH_DESC_major_rev_OFS)&FLASH_DESC_major_rev_MASK) + ((minor_rev<<FLASH_DESC_minor_rev_OFS)&FLASH_DESC_minor_rev_MASK);
}

static inline void FLASH_CLK_CTRL_WRITE(FLASH_REGS_s * registers, uint32_t clk_en) {
    registers->CLK_CTRL.packed_w =  + ((clk_en<<FLASH_CLK_CTRL_clk_en_OFS)&FLASH_CLK_CTRL_clk_en_MASK);
}

static inline void FLASH_FLASH_CTRL_WRITE(FLASH_REGS_s * registers, uint32_t clen, uint32_t srl, uint32_t isavb, uint32_t rdecc, uint32_t cpecc) {
    registers->FLASH_CTRL.packed_w =  + ((clen<<FLASH_FLASH_CTRL_clen_OFS)&FLASH_FLASH_CTRL_clen_MASK) + ((srl<<FLASH_FLASH_CTRL_srl_OFS)&FLASH_FLASH_CTRL_srl_MASK) + ((isavb<<FLASH_FLASH_CTRL_isavb_OFS)&FLASH_FLASH_CTRL_isavb_MASK) + ((rdecc<<FLASH_FLASH_CTRL_rdecc_OFS)&FLASH_FLASH_CTRL_rdecc_MASK) + ((cpecc<<FLASH_FLASH_CTRL_cpecc_OFS)&FLASH_FLASH_CTRL_cpecc_MASK);
}

static inline void FLASH_FLASH_STATUS_WRITE(FLASH_REGS_s * registers, uint32_t eced) {
    registers->FLASH_STATUS.packed_w =  + ((eced<<FLASH_FLASH_STATUS_eced_OFS)&FLASH_FLASH_STATUS_eced_MASK);
}

static inline void FLASH_TIME_CTRL_WRITE(FLASH_REGS_s * registers, uint32_t tcsctrls, uint32_t tras, uint32_t eeprom_tras, uint32_t trc, uint32_t eeprom_trc) {
    registers->TIME_CTRL.packed_w =  + ((tcsctrls<<FLASH_TIME_CTRL_tcsctrls_OFS)&FLASH_TIME_CTRL_tcsctrls_MASK) + ((tras<<FLASH_TIME_CTRL_tras_OFS)&FLASH_TIME_CTRL_tras_MASK) + ((eeprom_tras<<FLASH_TIME_CTRL_eeprom_tras_OFS)&FLASH_TIME_CTRL_eeprom_tras_MASK) + ((trc<<FLASH_TIME_CTRL_trc_OFS)&FLASH_TIME_CTRL_trc_MASK) + ((eeprom_trc<<FLASH_TIME_CTRL_eeprom_trc_OFS)&FLASH_TIME_CTRL_eeprom_trc_MASK);
}

static inline void FLASH_TIME_CTRL_1_WRITE(FLASH_REGS_s * registers, uint32_t tadhr, uint32_t rtw, uint32_t tads, uint32_t twpw, uint32_t tpwcsh) {
    registers->TIME_CTRL_1.packed_w =  + ((tadhr<<FLASH_TIME_CTRL_1_tadhr_OFS)&FLASH_TIME_CTRL_1_tadhr_MASK) + ((rtw<<FLASH_TIME_CTRL_1_rtw_OFS)&FLASH_TIME_CTRL_1_rtw_MASK) + ((tads<<FLASH_TIME_CTRL_1_tads_OFS)&FLASH_TIME_CTRL_1_tads_MASK) + ((twpw<<FLASH_TIME_CTRL_1_twpw_OFS)&FLASH_TIME_CTRL_1_twpw_MASK) + ((tpwcsh<<FLASH_TIME_CTRL_1_tpwcsh_OFS)&FLASH_TIME_CTRL_1_tpwcsh_MASK);
}

static inline void FLASH_TIME_CTRL_2_WRITE(FLASH_REGS_s * registers, uint32_t twrc, uint32_t twes, uint32_t tbr, uint32_t wtw) {
    registers->TIME_CTRL_2.packed_w =  + ((twrc<<FLASH_TIME_CTRL_2_twrc_OFS)&FLASH_TIME_CTRL_2_twrc_MASK) + ((twes<<FLASH_TIME_CTRL_2_twes_OFS)&FLASH_TIME_CTRL_2_twes_MASK) + ((tbr<<FLASH_TIME_CTRL_2_tbr_OFS)&FLASH_TIME_CTRL_2_tbr_MASK) + ((wtw<<FLASH_TIME_CTRL_2_wtw_OFS)&FLASH_TIME_CTRL_2_wtw_MASK);
}

static inline void FLASH_TIME_UPTD_WRITE(FLASH_REGS_s * registers, uint32_t flash_config_done) {
    registers->TIME_UPTD.packed_w =  + ((flash_config_done<<FLASH_TIME_UPTD_flash_config_done_OFS)&FLASH_TIME_UPTD_flash_config_done_MASK);
}

static inline void FLASH_HSIZE_CTRL_WRITE(FLASH_REGS_s * registers, uint32_t force_hsize_val, uint32_t force_hsize_en) {
    registers->HSIZE_CTRL.packed_w =  + ((force_hsize_val<<FLASH_HSIZE_CTRL_force_hsize_val_OFS)&FLASH_HSIZE_CTRL_force_hsize_val_MASK) + ((force_hsize_en<<FLASH_HSIZE_CTRL_force_hsize_en_OFS)&FLASH_HSIZE_CTRL_force_hsize_en_MASK);
}

