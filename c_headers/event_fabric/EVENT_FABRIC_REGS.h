#ifndef EVENT_FABRIC_REGISTERS_H
#define EVENT_FABRIC_REGISTERS_H

#include <stdint.h>

/** @addtogroup FD32M0P_Peripherals FD32M0P Peripherals
 *  @{
 */
/** @defgroup EVENT_FABRIC
 *  @{
 */
/** @defgroup EVENT_FABRIC_REGISTERS 
 *  @{
 */
/** @defgroup EVENT_FABRIC_DESC_REG 
 *  @{
 */
typedef struct {
    unsigned int module_type:8; // 
    unsigned int modue_subtype:8; // 
    unsigned int major_rev:4; // 
    unsigned int minor_rev:4; // 
} EVENT_FABRIC_DESC_REG_s;

typedef union {
    /** @ref EVENT_FABRIC_DESC_REG_s */
    EVENT_FABRIC_DESC_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DESC_u;

/** @} end of EVENT_FABRIC_DESC_REG */ 

/** @defgroup EVENT_FABRIC_PWR_EN_REG 
 *  @{
 */
typedef struct {
    unsigned int pwr_en:1; // 
    unsigned int rsvd_0:23; // 
    /** @ref EVENT_FABRIC_PWR_EN_PWR_EN_KEY */
    unsigned int pwr_en_key:8; // 
} EVENT_FABRIC_PWR_EN_REG_s;

typedef union {
    /** @ref EVENT_FABRIC_PWR_EN_REG_s */
    EVENT_FABRIC_PWR_EN_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_PWR_EN_u;

/** @} end of EVENT_FABRIC_PWR_EN_REG */ 

/** @defgroup EVENT_FABRIC_RST_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int rst:1; // 
    unsigned int rst_sts_clr:1; // 
    unsigned int rsvd_0:22; // 
    /** @ref EVENT_FABRIC_RST_CTRL_RST_STS_CLR_KEY */
    unsigned int rst_key:8; // 
} EVENT_FABRIC_RST_CTRL_REG_s;

typedef union {
    /** @ref EVENT_FABRIC_RST_CTRL_REG_s */
    EVENT_FABRIC_RST_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_RST_CTRL_u;

/** @} end of EVENT_FABRIC_RST_CTRL_REG */ 

/** @defgroup EVENT_FABRIC_RST_STS_REG 
 *  @{
 */
typedef struct {
    unsigned int rst_sts:1; // 
} EVENT_FABRIC_RST_STS_REG_s;

typedef union {
    /** @ref EVENT_FABRIC_RST_STS_REG_s */
    EVENT_FABRIC_RST_STS_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_RST_STS_u;

/** @} end of EVENT_FABRIC_RST_STS_REG */ 

/** @defgroup EVENT_FABRIC_CLK_CTRL_REG 
 *  @{
 */
typedef struct {
    unsigned int clk_en:1; // 
} EVENT_FABRIC_CLK_CTRL_REG_s;

typedef union {
    /** @ref EVENT_FABRIC_CLK_CTRL_REG_s */
    EVENT_FABRIC_CLK_CTRL_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_CLK_CTRL_u;

/** @} end of EVENT_FABRIC_CLK_CTRL_REG */ 

/** @defgroup EVENT_FABRIC_GEN_PUB_REG 
 *  @{
 */
typedef struct {
    /** @ref EVENT_FABRIC_GEN_PUB_GEN_PUB_CHAN_ID_E */
    unsigned int gen_pub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_PUB_REG_s;

typedef union {
    /** @ref EVENT_FABRIC_GEN_PUB_REG_s */
    EVENT_FABRIC_GEN_PUB_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_PUB_u;

/** @} end of EVENT_FABRIC_GEN_PUB_REG */ 

/** @defgroup EVENT_FABRIC_GEN_SUB_REG 
 *  @{
 */
typedef struct {
    /** @ref EVENT_FABRIC_GEN_SUB_GEN_SUB_CHAN_ID_E */
    unsigned int gen_sub_chan_id:4; // 0: Disconnect; 1-15: 15 channels
} EVENT_FABRIC_GEN_SUB_REG_s;

typedef union {
    /** @ref EVENT_FABRIC_GEN_SUB_REG_s */
    EVENT_FABRIC_GEN_SUB_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_GEN_SUB_u;

/** @} end of EVENT_FABRIC_GEN_SUB_REG */ 

/** @defgroup EVENT_FABRIC_DMA_PUB_REG 
 *  @{
 */
typedef struct {
    /** @ref EVENT_FABRIC_DMA_PUB_DMA_PUB_EVENT_ID_E */
    unsigned int dma_pub_event_id:6; // 0: Disconnect; 1-x: x event ids: which event is connected to this dma channel
} EVENT_FABRIC_DMA_PUB_REG_s;

typedef union {
    /** @ref EVENT_FABRIC_DMA_PUB_REG_s */
    EVENT_FABRIC_DMA_PUB_REG_s;
    uint8_t packed_byte[4];
    uint16_t packed_hw[2];
    uint32_t packed_w;
} EVENT_FABRIC_DMA_PUB_u;

/** @} end of EVENT_FABRIC_DMA_PUB_REG */ 

/** @} end of EVENT_FABRIC_REGISTERS */ 

/** @defgroup EVENT_FABRIC_MEMORY_MAP 
 *  @{
 */
typedef struct {
    volatile  EVENT_FABRIC_DESC_u DESC; ///< 0x00000000
    volatile  EVENT_FABRIC_PWR_EN_u PWR_EN; ///< 0x00000004
    volatile  EVENT_FABRIC_RST_CTRL_u RST_CTRL; ///< 0x00000008
    volatile  EVENT_FABRIC_RST_STS_u RST_STS; ///< 0x0000000C
    volatile  EVENT_FABRIC_CLK_CTRL_u CLK_CTRL; ///< 0x00000010
    volatile  EVENT_FABRIC_GEN_PUB_u GEN_PUB[25]; ///< 0x00000014
    volatile  EVENT_FABRIC_GEN_SUB_u GEN_SUB[25]; ///< 0x00000078
    volatile  EVENT_FABRIC_DMA_PUB_u DMA_PUB[16]; ///< 0x000000DC
} EVENT_FABRIC_REGS_s;

/** @} end of EVENT_FABRIC_MEMORY_MAP */ 

/** @defgroup EVENT_FABRIC_KEY 
 *  @{
 */
#define EVENT_FABRIC_PWR_EN_PWR_EN_KEY ((uint32_t)0x00000069U)
#define EVENT_FABRIC_RST_CTRL_RST_KEY ((uint32_t)0x00000069U)
#define EVENT_FABRIC_RST_CTRL_RST_STS_CLR_KEY ((uint32_t)0x00000069U)
/** @} end of EVENT_FABRIC_KEY*/ 


/** @addtogroup EVENT_FABRIC_GEN_PUB_REG  
 *  @{
 */
typedef enum {
	EVENT_FABRIC_GEN_PUB_CHAN_ID_DISCONNECT = 0, ///< 0x0
	EVENT_FABRIC_GEN_PUB_CHAN_ID_1 = 1, ///< 0x1
	EVENT_FABRIC_GEN_PUB_CHAN_ID_2 = 2, ///< 0x2
	EVENT_FABRIC_GEN_PUB_CHAN_ID_3 = 3, ///< 0x3
	EVENT_FABRIC_GEN_PUB_CHAN_ID_4 = 4, ///< 0x4
	EVENT_FABRIC_GEN_PUB_CHAN_ID_5 = 5, ///< 0x5
	EVENT_FABRIC_GEN_PUB_CHAN_ID_6 = 6, ///< 0x6
	EVENT_FABRIC_GEN_PUB_CHAN_ID_7 = 7, ///< 0x7
	EVENT_FABRIC_GEN_PUB_CHAN_ID_8 = 8, ///< 0x8
	EVENT_FABRIC_GEN_PUB_CHAN_ID_9 = 9, ///< 0x9
	EVENT_FABRIC_GEN_PUB_CHAN_ID_10 = 10, ///< 0xa
	EVENT_FABRIC_GEN_PUB_CHAN_ID_11 = 11, ///< 0xb
	EVENT_FABRIC_GEN_PUB_CHAN_ID_12 = 12, ///< 0xc
	EVENT_FABRIC_GEN_PUB_CHAN_ID_13 = 13, ///< 0xd
	EVENT_FABRIC_GEN_PUB_CHAN_ID_14 = 14, ///< 0xe
	EVENT_FABRIC_GEN_PUB_CHAN_ID_15 = 15, ///< 0xf
} EVENT_FABRIC_GEN_PUB_CHAN_ID_E;
/** @} */
/** @addtogroup EVENT_FABRIC_GEN_SUB_REG  
 *  @{
 */
typedef enum {
	EVENT_FABRIC_GEN_SUB_CHAN_ID_DISCONNECT = 0, ///< 0x0
	EVENT_FABRIC_GEN_SUB_CHAN_ID_1 = 1, ///< 0x1
	EVENT_FABRIC_GEN_SUB_CHAN_ID_2 = 2, ///< 0x2
	EVENT_FABRIC_GEN_SUB_CHAN_ID_3 = 3, ///< 0x3
	EVENT_FABRIC_GEN_SUB_CHAN_ID_4 = 4, ///< 0x4
	EVENT_FABRIC_GEN_SUB_CHAN_ID_5 = 5, ///< 0x5
	EVENT_FABRIC_GEN_SUB_CHAN_ID_6 = 6, ///< 0x6
	EVENT_FABRIC_GEN_SUB_CHAN_ID_7 = 7, ///< 0x7
	EVENT_FABRIC_GEN_SUB_CHAN_ID_8 = 8, ///< 0x8
	EVENT_FABRIC_GEN_SUB_CHAN_ID_9 = 9, ///< 0x9
	EVENT_FABRIC_GEN_SUB_CHAN_ID_10 = 10, ///< 0xa
	EVENT_FABRIC_GEN_SUB_CHAN_ID_11 = 11, ///< 0xb
	EVENT_FABRIC_GEN_SUB_CHAN_ID_12 = 12, ///< 0xc
	EVENT_FABRIC_GEN_SUB_CHAN_ID_13 = 13, ///< 0xd
	EVENT_FABRIC_GEN_SUB_CHAN_ID_14 = 14, ///< 0xe
	EVENT_FABRIC_GEN_SUB_CHAN_ID_15 = 15, ///< 0xf
} EVENT_FABRIC_GEN_SUB_CHAN_ID_E;
/** @} */
/** @addtogroup EVENT_FABRIC_DMA_PUB_REG  
 *  @{
 */
typedef enum {
	EVENT_FABRIC_DMA_PUB_EVENT_ID_DISCONNECT = 0, ///< 0x0
	EVENT_FABRIC_DMA_PUB_EVENT_ID_DAC = 1, ///< 0x1
	EVENT_FABRIC_DMA_PUB_EVENT_ID_ADC_0 = 2, ///< 0x2
	EVENT_FABRIC_DMA_PUB_EVENT_ID_ADC_1 = 3, ///< 0x3
	EVENT_FABRIC_DMA_PUB_EVENT_ID_UART_0_RX = 4, ///< 0x4
	EVENT_FABRIC_DMA_PUB_EVENT_ID_UART_0_TX = 5, ///< 0x5
	EVENT_FABRIC_DMA_PUB_EVENT_ID_UART_1_RX = 6, ///< 0x6
	EVENT_FABRIC_DMA_PUB_EVENT_ID_UART_1_TX = 7, ///< 0x7
	EVENT_FABRIC_DMA_PUB_EVENT_ID_I2C_0_RX = 8, ///< 0x8
	EVENT_FABRIC_DMA_PUB_EVENT_ID_I2C_0_TX = 9, ///< 0x9
	EVENT_FABRIC_DMA_PUB_EVENT_ID_I2C_1_RX = 10, ///< 0xa
	EVENT_FABRIC_DMA_PUB_EVENT_ID_I2C_1_TX = 11, ///< 0xb
	EVENT_FABRIC_DMA_PUB_EVENT_ID_SPI_TX = 12, ///< 0xc
	EVENT_FABRIC_DMA_PUB_EVENT_ID_SPI_RX = 13, ///< 0xd
	EVENT_FABRIC_DMA_PUB_EVENT_ID_USB2 = 14, ///< 0xe
} EVENT_FABRIC_DMA_PUB_EVENT_ID_E;
/** @} */

/** @defgroup EVENT_FABRIC_REGISTER_FLAGS 
 *  @{
 */
#define EVENT_FABRIC_DESC_MODULE_TYPE_OFS (0)
#define EVENT_FABRIC_DESC_MODULE_TYPE_MASK ((uint32_t)0x000000FFU)
#define EVENT_FABRIC_DESC_MODUE_SUBTYPE_OFS (8)
#define EVENT_FABRIC_DESC_MODUE_SUBTYPE_MASK ((uint32_t)0x0000FF00U)
#define EVENT_FABRIC_DESC_MAJOR_REV_OFS (16)
#define EVENT_FABRIC_DESC_MAJOR_REV_MASK ((uint32_t)0x000F0000U)
#define EVENT_FABRIC_DESC_MINOR_REV_OFS (20)
#define EVENT_FABRIC_DESC_MINOR_REV_MASK ((uint32_t)0x00F00000U)
#define EVENT_FABRIC_PWR_EN_PWR_EN_OFS (0)
#define EVENT_FABRIC_PWR_EN_PWR_EN_MASK ((uint32_t)0x00000001U)
#define EVENT_FABRIC_PWR_EN_PWR_EN_KEY_OFS (24)
#define EVENT_FABRIC_PWR_EN_PWR_EN_KEY_MASK ((uint32_t)0xFF000000U)
#define EVENT_FABRIC_RST_CTRL_RST_OFS (0)
#define EVENT_FABRIC_RST_CTRL_RST_MASK ((uint32_t)0x00000001U)
#define EVENT_FABRIC_RST_CTRL_RST_STS_CLR_OFS (1)
#define EVENT_FABRIC_RST_CTRL_RST_STS_CLR_MASK ((uint32_t)0x00000002U)
#define EVENT_FABRIC_RST_CTRL_RST_KEY_OFS (24)
#define EVENT_FABRIC_RST_CTRL_RST_KEY_MASK ((uint32_t)0xFF000000U)
#define EVENT_FABRIC_RST_STS_RST_STS_OFS (0)
#define EVENT_FABRIC_RST_STS_RST_STS_MASK ((uint32_t)0x00000001U)
#define EVENT_FABRIC_CLK_CTRL_CLK_EN_OFS (0)
#define EVENT_FABRIC_CLK_CTRL_CLK_EN_MASK ((uint32_t)0x00000001U)
#define EVENT_FABRIC_GEN_PUB_GEN_PUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_PUB_GEN_PUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_GEN_SUB_GEN_SUB_CHAN_ID_OFS (0)
#define EVENT_FABRIC_GEN_SUB_GEN_SUB_CHAN_ID_MASK ((uint32_t)0x0000000FU)
#define EVENT_FABRIC_DMA_PUB_DMA_PUB_EVENT_ID_OFS (0)
#define EVENT_FABRIC_DMA_PUB_DMA_PUB_EVENT_ID_MASK ((uint32_t)0x0000003FU)
/** @} end of EVENT_FABRIC_REGISTER_FLAGS */ 

/** @} end of EVENT_FABRIC */

/** @} end of group FD32M0P_Peripherals */
#endif
