#include "GPIO_REGS.h"

/**
 *
 * @param *GPIO_REGS GPIO Pointer
 * @param mask The output port mask
 * @param value The value to output to the specified port
 * @return none
 *
 * @brief Outputs the specified value on the desired port using the user defined mask to perform Masked access.
 */

extern void MCUSDK_gpio_MaskedWrite(GPIO_REGS_s *GPIO_REGS, uint32_t value, uint32_t mask);

