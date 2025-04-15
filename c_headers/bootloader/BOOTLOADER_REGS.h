#ifndef BOOTLOADER_REGISTERS_H
#define BOOTLOADER_REGISTERS_H

#include <stdint.h>

typedef struct BOOTLOADER_BCR_CONFIG_ID_REG_s {
    unsigned int BCR_CONFIG_ID:32; // config id of the current boot config
} BOOTLOADER_BCR_CONFIG_ID_REG_s;

typedef union BOOTLOADER_BCR_CONFIG_ID_u {
    BOOTLOADER_BCR_CONFIG_ID_REG_s BCR_CONFIG_ID;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} BOOTLOADER_BCR_CONFIG_ID_u;

typedef struct BOOTLOADER_BCR_CFG0_REG_s {
    unsigned int SWD_EN:16; // 0xAAAA: SWD access is enabled -- 0xBBBB: SWD access is disabled
    unsigned int DAP_ACCESS:16; // 0xAAAA: AHB-AP, APB-AP both are accessible -- 0xBBBB: AHB-AP, APB-AP both are accessible with password -- 0xCCCC: Access to all APs are restricted.
} BOOTLOADER_BCR_CFG0_REG_s;

typedef union BOOTLOADER_BCR_CFG0_u {
    BOOTLOADER_BCR_CFG0_REG_s BCR_CFG0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} BOOTLOADER_BCR_CFG0_u;

typedef struct BOOTLOADER_BCR_CFG1_REG_s {
    unsigned int BSL_GPIO_INVOKE:16; // 0xAAAA: GPIO Invoke is enabled – the next field indicates the GPIO to be used  -- 0xBBBB: GPIO Invoke is disabled
    unsigned int BSL_GPIO_PIN:16; // the GPIO pin to be used for bootloader invoke
} BOOTLOADER_BCR_CFG1_REG_s;

typedef union BOOTLOADER_BCR_CFG1_u {
    BOOTLOADER_BCR_CFG1_REG_s BCR_CFG1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} BOOTLOADER_BCR_CFG1_u;

typedef struct BOOTLOADER_BCR_CFG2_REG_s {
    unsigned int BSL_EN:16; // 0xAAAA: BSL is enabled -- 0xBBBB: BSL is disabled
    unsigned int FASTBOOT_EN:16; // 0xAAAA: FASTBOOT is enabled -- 0xBBBB: FASTBOOT is disabled
} BOOTLOADER_BCR_CFG2_REG_s;

typedef union BOOTLOADER_BCR_CFG2_u {
    BOOTLOADER_BCR_CFG2_REG_s BCR_CFG2;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} BOOTLOADER_BCR_CFG2_u;

typedef struct BOOTLOADER_BCR_FLASH_WP_REG_s {
    unsigned int BCR_FLASH_WP:32; // TODO: need to figure out if more bits needed and how to interpret this
} BOOTLOADER_BCR_FLASH_WP_REG_s;

typedef union BOOTLOADER_BCR_FLASH_WP_u {
    BOOTLOADER_BCR_FLASH_WP_REG_s BCR_FLASH_WP;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} BOOTLOADER_BCR_FLASH_WP_u;

typedef struct BOOTLOADER_BCR_CRCCFG0_REG_s {
    unsigned int APP_CRC_START:32; // 32 bit start address of the app code for which the crc needs to be calculated and verified
} BOOTLOADER_BCR_CRCCFG0_REG_s;

typedef union BOOTLOADER_BCR_CRCCFG0_u {
    BOOTLOADER_BCR_CRCCFG0_REG_s BCR_CRCCFG0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} BOOTLOADER_BCR_CRCCFG0_u;

typedef struct BOOTLOADER_BCR_CRCCFG1_REG_s {
    unsigned int APP_CRC_END:32; // 32 bit end address of the app code for which the crc needs to be calculated and verified
} BOOTLOADER_BCR_CRCCFG1_REG_s;

typedef union BOOTLOADER_BCR_CRCCFG1_u {
    BOOTLOADER_BCR_CRCCFG1_REG_s BCR_CRCCFG1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} BOOTLOADER_BCR_CRCCFG1_u;

typedef struct BOOTLOADER_BCR_CRCCFG2_REG_s {
    unsigned int EXP_CRC:32; // Expected 32bit CRC-32 of the APP code specified in the regs CRCCFG0,1
} BOOTLOADER_BCR_CRCCFG2_REG_s;

typedef union BOOTLOADER_BCR_CRCCFG2_u {
    BOOTLOADER_BCR_CRCCFG2_REG_s BCR_CRCCFG2;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} BOOTLOADER_BCR_CRCCFG2_u;

typedef struct BOOTLOADER_BSL_CONFIG_ID_REG_s {
    unsigned int BSL_CONFIG_ID:32; // 
} BOOTLOADER_BSL_CONFIG_ID_REG_s;

typedef union BOOTLOADER_BSL_CONFIG_ID_u {
    BOOTLOADER_BSL_CONFIG_ID_REG_s BSL_CONFIG_ID;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} BOOTLOADER_BSL_CONFIG_ID_u;

typedef struct BOOTLOADER_BSL_UART_CFG0_REG_s {
    unsigned int UART_TX_PIN_SEL:8; // TODO: need to get correct default values
    unsigned int UART_TX_MUX_SEL:8; // 
    unsigned int UART_RX_PIN_SEL:8; // 
    unsigned int UART_RX_MUX_SEL:8; // 
} BOOTLOADER_BSL_UART_CFG0_REG_s;

typedef union BOOTLOADER_BSL_UART_CFG0_u {
    BOOTLOADER_BSL_UART_CFG0_REG_s BSL_UART_CFG0;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} BOOTLOADER_BSL_UART_CFG0_u;

typedef struct BOOTLOADER_BSL_UART_CFG1_REG_s {
    unsigned int UART_CLK_DIV:8; // 
    unsigned int UART_M:8; // 
    unsigned int UART_N:16; // 
} BOOTLOADER_BSL_UART_CFG1_REG_s;

typedef union BOOTLOADER_BSL_UART_CFG1_u {
    BOOTLOADER_BSL_UART_CFG1_REG_s BSL_UART_CFG1;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} BOOTLOADER_BSL_UART_CFG1_u;

typedef struct BOOTLOADER_BSL_I2C_CFG_REG_s {
    unsigned int SCL_PIN_SEL:8; // TODO: need to get correct default values
    unsigned int SCL_MUX_SEL:8; // 
    unsigned int SDA_PIN_SEL:8; // 
    unsigned int SDA_MUX_SEL:8; // 
} BOOTLOADER_BSL_I2C_CFG_REG_s;

typedef union BOOTLOADER_BSL_I2C_CFG_u {
    BOOTLOADER_BSL_I2C_CFG_REG_s BSL_I2C_CFG;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} BOOTLOADER_BSL_I2C_CFG_u;

typedef struct BOOTLOADER_BSL_PWD_REG_s {
    unsigned int BSL_PWD:32; // 
} BOOTLOADER_BSL_PWD_REG_s;

typedef union BOOTLOADER_BSL_PWD_u {
    BOOTLOADER_BSL_PWD_REG_s BSL_PWD;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} BOOTLOADER_BSL_PWD_u;

typedef struct BOOTLOADER_BCR_CRCCFG3_REG_s {
    unsigned int EXP_BOOT_CRC:32; // Expected 32bit CRC-32 of the Boot Configuration (all the regs mentioned above)
} BOOTLOADER_BCR_CRCCFG3_REG_s;

typedef union BOOTLOADER_BCR_CRCCFG3_u {
    BOOTLOADER_BCR_CRCCFG3_REG_s BCR_CRCCFG3;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} BOOTLOADER_BCR_CRCCFG3_u;

typedef struct BOOTLOADER_REGS_s{
    volatile BOOTLOADER_BCR_CONFIG_ID_u BCR_CONFIG_ID;
    volatile BOOTLOADER_BCR_CFG0_u BCR_CFG0;
    volatile BOOTLOADER_BCR_CFG1_u BCR_CFG1;
    volatile BOOTLOADER_BCR_CFG2_u BCR_CFG2;
    volatile BOOTLOADER_BCR_FLASH_WP_u BCR_FLASH_WP;
    volatile BOOTLOADER_BCR_CRCCFG0_u BCR_CRCCFG0;
    volatile BOOTLOADER_BCR_CRCCFG1_u BCR_CRCCFG1;
    volatile BOOTLOADER_BCR_CRCCFG2_u BCR_CRCCFG2;
    volatile BOOTLOADER_BSL_CONFIG_ID_u BSL_CONFIG_ID;
    volatile BOOTLOADER_BSL_UART_CFG0_u BSL_UART_CFG0;
    volatile BOOTLOADER_BSL_UART_CFG1_u BSL_UART_CFG1;
    volatile BOOTLOADER_BSL_I2C_CFG_u BSL_I2C_CFG;
    volatile BOOTLOADER_BSL_PWD_u BSL_PWD;
    volatile uint32_t Reserved[2];
    volatile BOOTLOADER_BCR_CRCCFG3_u BCR_CRCCFG3;
} BOOTLOADER_REGS_s;

#define BOOTLOADER_BCR_CONFIG_ID_BCR_CONFIG_ID_OFS (0)
#define BOOTLOADER_BCR_CONFIG_ID_BCR_CONFIG_ID_MASK ((uint32_t)0xFFFFFFFFU)
#define BOOTLOADER_BCR_CFG0_SWD_EN_OFS (0)
#define BOOTLOADER_BCR_CFG0_SWD_EN_MASK ((uint32_t)0x0000FFFFU)
#define BOOTLOADER_BCR_CFG0_DAP_ACCESS_OFS (16)
#define BOOTLOADER_BCR_CFG0_DAP_ACCESS_MASK ((uint32_t)0xFFFF0000U)
#define BOOTLOADER_BCR_CFG1_BSL_GPIO_INVOKE_OFS (0)
#define BOOTLOADER_BCR_CFG1_BSL_GPIO_INVOKE_MASK ((uint32_t)0x0000FFFFU)
#define BOOTLOADER_BCR_CFG1_BSL_GPIO_PIN_OFS (16)
#define BOOTLOADER_BCR_CFG1_BSL_GPIO_PIN_MASK ((uint32_t)0xFFFF0000U)
#define BOOTLOADER_BCR_CFG2_BSL_EN_OFS (0)
#define BOOTLOADER_BCR_CFG2_BSL_EN_MASK ((uint32_t)0x0000FFFFU)
#define BOOTLOADER_BCR_CFG2_FASTBOOT_EN_OFS (16)
#define BOOTLOADER_BCR_CFG2_FASTBOOT_EN_MASK ((uint32_t)0xFFFF0000U)
#define BOOTLOADER_BCR_FLASH_WP_BCR_FLASH_WP_OFS (0)
#define BOOTLOADER_BCR_FLASH_WP_BCR_FLASH_WP_MASK ((uint32_t)0xFFFFFFFFU)
#define BOOTLOADER_BCR_CRCCFG0_APP_CRC_START_OFS (0)
#define BOOTLOADER_BCR_CRCCFG0_APP_CRC_START_MASK ((uint32_t)0xFFFFFFFFU)
#define BOOTLOADER_BCR_CRCCFG1_APP_CRC_END_OFS (0)
#define BOOTLOADER_BCR_CRCCFG1_APP_CRC_END_MASK ((uint32_t)0xFFFFFFFFU)
#define BOOTLOADER_BCR_CRCCFG2_EXP_CRC_OFS (0)
#define BOOTLOADER_BCR_CRCCFG2_EXP_CRC_MASK ((uint32_t)0xFFFFFFFFU)
#define BOOTLOADER_BSL_CONFIG_ID_BSL_CONFIG_ID_OFS (0)
#define BOOTLOADER_BSL_CONFIG_ID_BSL_CONFIG_ID_MASK ((uint32_t)0xFFFFFFFFU)
#define BOOTLOADER_BSL_UART_CFG0_UART_TX_PIN_SEL_OFS (0)
#define BOOTLOADER_BSL_UART_CFG0_UART_TX_PIN_SEL_MASK ((uint32_t)0x000000FFU)
#define BOOTLOADER_BSL_UART_CFG0_UART_TX_MUX_SEL_OFS (8)
#define BOOTLOADER_BSL_UART_CFG0_UART_TX_MUX_SEL_MASK ((uint32_t)0x0000FF00U)
#define BOOTLOADER_BSL_UART_CFG0_UART_RX_PIN_SEL_OFS (16)
#define BOOTLOADER_BSL_UART_CFG0_UART_RX_PIN_SEL_MASK ((uint32_t)0x00FF0000U)
#define BOOTLOADER_BSL_UART_CFG0_UART_RX_MUX_SEL_OFS (24)
#define BOOTLOADER_BSL_UART_CFG0_UART_RX_MUX_SEL_MASK ((uint32_t)0xFF000000U)
#define BOOTLOADER_BSL_UART_CFG1_UART_CLK_DIV_OFS (0)
#define BOOTLOADER_BSL_UART_CFG1_UART_CLK_DIV_MASK ((uint32_t)0x000000FFU)
#define BOOTLOADER_BSL_UART_CFG1_UART_M_OFS (8)
#define BOOTLOADER_BSL_UART_CFG1_UART_M_MASK ((uint32_t)0x0000FF00U)
#define BOOTLOADER_BSL_UART_CFG1_UART_N_OFS (16)
#define BOOTLOADER_BSL_UART_CFG1_UART_N_MASK ((uint32_t)0xFFFF0000U)
#define BOOTLOADER_BSL_I2C_CFG_SCL_PIN_SEL_OFS (0)
#define BOOTLOADER_BSL_I2C_CFG_SCL_PIN_SEL_MASK ((uint32_t)0x000000FFU)
#define BOOTLOADER_BSL_I2C_CFG_SCL_MUX_SEL_OFS (8)
#define BOOTLOADER_BSL_I2C_CFG_SCL_MUX_SEL_MASK ((uint32_t)0x0000FF00U)
#define BOOTLOADER_BSL_I2C_CFG_SDA_PIN_SEL_OFS (16)
#define BOOTLOADER_BSL_I2C_CFG_SDA_PIN_SEL_MASK ((uint32_t)0x00FF0000U)
#define BOOTLOADER_BSL_I2C_CFG_SDA_MUX_SEL_OFS (24)
#define BOOTLOADER_BSL_I2C_CFG_SDA_MUX_SEL_MASK ((uint32_t)0xFF000000U)
#define BOOTLOADER_BSL_PWD_BSL_PWD_OFS (0)
#define BOOTLOADER_BSL_PWD_BSL_PWD_MASK ((uint32_t)0xFFFFFFFFU)
#define BOOTLOADER_BCR_CRCCFG3_EXP_BOOT_CRC_OFS (0)
#define BOOTLOADER_BCR_CRCCFG3_EXP_BOOT_CRC_MASK ((uint32_t)0xFFFFFFFFU)
#endif
