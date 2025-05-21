#ifndef IOMUX_RW_API_H
#define IOMUX_RW_API_H

#include "IOMUX_REGS.h"

static inline void IOMUX_PA_N_WRITE(IOMUX_REGS_s * registers, uint32_t index, uint32_t output_en, uint32_t input_en, uint32_t drive_strength, uint32_t slew_rate, uint32_t pull_up, uint32_t pull_down, uint32_t hysteresis, uint32_t sel, uint32_t input_val) {
    registers->PA[index].packed_w =  + ((output_en<<IOMUX_PA_OUTPUT_EN_OFS)&IOMUX_PA_OUTPUT_EN_MASK) + ((input_en<<IOMUX_PA_INPUT_EN_OFS)&IOMUX_PA_INPUT_EN_MASK) + ((drive_strength<<IOMUX_PA_DRIVE_STRENGTH_OFS)&IOMUX_PA_DRIVE_STRENGTH_MASK) + ((slew_rate<<IOMUX_PA_SLEW_RATE_OFS)&IOMUX_PA_SLEW_RATE_MASK) + ((pull_up<<IOMUX_PA_PULL_UP_OFS)&IOMUX_PA_PULL_UP_MASK) + ((pull_down<<IOMUX_PA_PULL_DOWN_OFS)&IOMUX_PA_PULL_DOWN_MASK) + ((hysteresis<<IOMUX_PA_HYSTERESIS_OFS)&IOMUX_PA_HYSTERESIS_MASK) + ((sel<<IOMUX_PA_SEL_OFS)&IOMUX_PA_SEL_MASK) + ((input_val<<IOMUX_PA_INPUT_VAL_OFS)&IOMUX_PA_INPUT_VAL_MASK);
}

static inline void IOMUX_DUMMY_WRITE(IOMUX_REGS_s * registers, uint32_t dummy) {
    registers->DUMMY.packed_w =  + ((dummy<<IOMUX_DUMMY_DUMMY_OFS)&IOMUX_DUMMY_DUMMY_MASK);
}

#endif
