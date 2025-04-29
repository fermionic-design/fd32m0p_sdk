#include "FLASH_REGS.h"

static inline void FLASH_DESC_WRITE(FLASH_REGS_s * registers, uint32_t module_type, uint32_t modue_subtype, uint32_t major_rev, uint32_t minor_rev) {
    registers->DESC.packed_w =  + ((module_type<<FLASH_DESC_MODULE_TYPE_OFS)&FLASH_DESC_MODULE_TYPE_MASK) + ((modue_subtype<<FLASH_DESC_MODUE_SUBTYPE_OFS)&FLASH_DESC_MODUE_SUBTYPE_MASK) + ((major_rev<<FLASH_DESC_MAJOR_REV_OFS)&FLASH_DESC_MAJOR_REV_MASK) + ((minor_rev<<FLASH_DESC_MINOR_REV_OFS)&FLASH_DESC_MINOR_REV_MASK);
}

static inline void FLASH_CLK_CTRL_WRITE(FLASH_REGS_s * registers, uint32_t clk_en) {
    registers->CLK_CTRL.packed_w =  + ((clk_en<<FLASH_CLK_CTRL_CLK_EN_OFS)&FLASH_CLK_CTRL_CLK_EN_MASK);
}

static inline void FLASH_FLASH_CTRL_WRITE(FLASH_REGS_s * registers, uint32_t clen, uint32_t srl, uint32_t isavb, uint32_t rdecc, uint32_t cpecc) {
    registers->FLASH_CTRL.packed_w =  + ((clen<<FLASH_FLASH_CTRL_CLEN_OFS)&FLASH_FLASH_CTRL_CLEN_MASK) + ((srl<<FLASH_FLASH_CTRL_SRL_OFS)&FLASH_FLASH_CTRL_SRL_MASK) + ((isavb<<FLASH_FLASH_CTRL_ISAVB_OFS)&FLASH_FLASH_CTRL_ISAVB_MASK) + ((rdecc<<FLASH_FLASH_CTRL_RDECC_OFS)&FLASH_FLASH_CTRL_RDECC_MASK) + ((cpecc<<FLASH_FLASH_CTRL_CPECC_OFS)&FLASH_FLASH_CTRL_CPECC_MASK);
}

static inline void FLASH_FLASH_STATUS_WRITE(FLASH_REGS_s * registers, uint32_t eced) {
    registers->FLASH_STATUS.packed_w =  + ((eced<<FLASH_FLASH_STATUS_ECED_OFS)&FLASH_FLASH_STATUS_ECED_MASK);
}

static inline void FLASH_TIME_CTRL_WRITE(FLASH_REGS_s * registers, uint32_t tcsctrls, uint32_t tras, uint32_t eeprom_tras, uint32_t trc, uint32_t eeprom_trc) {
    registers->TIME_CTRL.packed_w =  + ((tcsctrls<<FLASH_TIME_CTRL_TCSCTRLS_OFS)&FLASH_TIME_CTRL_TCSCTRLS_MASK) + ((tras<<FLASH_TIME_CTRL_TRAS_OFS)&FLASH_TIME_CTRL_TRAS_MASK) + ((eeprom_tras<<FLASH_TIME_CTRL_EEPROM_TRAS_OFS)&FLASH_TIME_CTRL_EEPROM_TRAS_MASK) + ((trc<<FLASH_TIME_CTRL_TRC_OFS)&FLASH_TIME_CTRL_TRC_MASK) + ((eeprom_trc<<FLASH_TIME_CTRL_EEPROM_TRC_OFS)&FLASH_TIME_CTRL_EEPROM_TRC_MASK);
}

static inline void FLASH_TIME_CTRL_1_WRITE(FLASH_REGS_s * registers, uint32_t tadhr, uint32_t rtw, uint32_t tads, uint32_t twpw, uint32_t tpwcsh) {
    registers->TIME_CTRL_1.packed_w =  + ((tadhr<<FLASH_TIME_CTRL_1_TADHR_OFS)&FLASH_TIME_CTRL_1_TADHR_MASK) + ((rtw<<FLASH_TIME_CTRL_1_RTW_OFS)&FLASH_TIME_CTRL_1_RTW_MASK) + ((tads<<FLASH_TIME_CTRL_1_TADS_OFS)&FLASH_TIME_CTRL_1_TADS_MASK) + ((twpw<<FLASH_TIME_CTRL_1_TWPW_OFS)&FLASH_TIME_CTRL_1_TWPW_MASK) + ((tpwcsh<<FLASH_TIME_CTRL_1_TPWCSH_OFS)&FLASH_TIME_CTRL_1_TPWCSH_MASK);
}

static inline void FLASH_TIME_CTRL_2_WRITE(FLASH_REGS_s * registers, uint32_t twrc, uint32_t twes, uint32_t tbr, uint32_t wtw) {
    registers->TIME_CTRL_2.packed_w =  + ((twrc<<FLASH_TIME_CTRL_2_TWRC_OFS)&FLASH_TIME_CTRL_2_TWRC_MASK) + ((twes<<FLASH_TIME_CTRL_2_TWES_OFS)&FLASH_TIME_CTRL_2_TWES_MASK) + ((tbr<<FLASH_TIME_CTRL_2_TBR_OFS)&FLASH_TIME_CTRL_2_TBR_MASK) + ((wtw<<FLASH_TIME_CTRL_2_WTW_OFS)&FLASH_TIME_CTRL_2_WTW_MASK);
}

static inline void FLASH_TIME_UPTD_WRITE(FLASH_REGS_s * registers, uint32_t flash_config_done) {
    registers->TIME_UPTD.packed_w =  + ((flash_config_done<<FLASH_TIME_UPTD_FLASH_CONFIG_DONE_OFS)&FLASH_TIME_UPTD_FLASH_CONFIG_DONE_MASK);
}

static inline void FLASH_HSIZE_CTRL_WRITE(FLASH_REGS_s * registers, uint32_t force_hsize_val, uint32_t force_hsize_en) {
    registers->HSIZE_CTRL.packed_w =  + ((force_hsize_val<<FLASH_HSIZE_CTRL_FORCE_HSIZE_VAL_OFS)&FLASH_HSIZE_CTRL_FORCE_HSIZE_VAL_MASK) + ((force_hsize_en<<FLASH_HSIZE_CTRL_FORCE_HSIZE_EN_OFS)&FLASH_HSIZE_CTRL_FORCE_HSIZE_EN_MASK);
}

static inline void FLASH_STS_WRITE(FLASH_REGS_s * registers, uint32_t flash_pstate) {
    registers->STS.packed_w =  + ((flash_pstate<<FLASH_STS_FLASH_PSTATE_OFS)&FLASH_STS_FLASH_PSTATE_MASK);
}

static inline void FLASH_ECED_STATUS_WRITE(FLASH_REGS_s * registers, uint32_t eced_sts) {
    registers->ECED_STATUS.packed_w =  + ((eced_sts<<FLASH_ECED_STATUS_ECED_STS_OFS)&FLASH_ECED_STATUS_ECED_STS_MASK);
}

