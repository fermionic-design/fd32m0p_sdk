#include "DMA_REGS.h"
#include "DMA_RW_API.h"
#include "PL230_REGS.h"
#include "PL230_RW_API.h"

/*!
 *  @brief  Defines for Transfer Configuration 
 *
 *  @note   Default values for the transfer configuration of a given channel 
 */
#define DMA_DEFAULT_SRC_ADDR                            0                                                     
#define DMA_DEFAULT_DST_ADDR                            0
#define DMA_DEFAULT_SRC_SIZE                            2
#define DMA_DEFAULT_SRC_INCR                            2
#define DMA_DEFAULT_DST_SIZE                            2
#define DMA_DEFAULT_DST_INCR                            2
#define DMA_DEFAULT_TRANSFER_TYPE                       2
#define DMA_DEFAULT_TOTAL_TRANSACTION                   1
#define DMA_DEFAULT_R_POWER                             0
#define DMA_DEFAULT_ALTERNATE_CFG_SEL                   0
#define DMA_DEFAULT_FILL_EN                             0
#define DMA_DEFAULT_FILL_INCR_VALUE                     0
#define DMA_DEFAULT_FILL_INIT_VALUE                     0
#define DMA_DEFAULT_STRIDE_EN                           0
#define DMA_DEFAULT_STRIDE_SRC_INCR                     DMA_STRIDE_MODE_CFG_0_SRC_INC_BYTE
#define DMA_DEFAULT_STRIDE_DST_INCR                     DMA_STRIDE_MODE_CFG_0_DST_INC_BYTE
#define DMA_DEFAULT_EARLY_IRQ_REMAINING_TRANSACTION     0
#define DMA_DEFAULT_REPEATED_TRANSFER_EN                0
#define DMA_DEFAULT_NEXT_USEBURST                       0
#define DMA_DEFAULT_SRC_PROT_CTRL                       PL230_DMA_CFG_CHNL_PROT_CTRL_PRIVILEGE_ACCESS
#define DMA_DEFAULT_DST_PROT_CTRL                       PL230_DMA_CFG_CHNL_PROT_CTRL_PRIVILEGE_ACCESS

/*!
 *  @brief  Define for Stride Source and Destination Address 
 */
#define DMA_STRIDE_MODE_LOOKUP_SRC_ADDR                0x20010004
#define DMA_STRIDE_MODE_LOOKUP_DST_ADDR                0x20010008

/*!
 *  @brief  Channel Number Enum 
 */
typedef enum {
    DMA_CHANNEL_0  = 0,                              /*!< DMA Channel 0 */
    DMA_CHANNEL_1  = 1,                              /*!< DMA Channel 1 */
    DMA_CHANNEL_2  = 2,                              /*!< DMA Channel 2 */
    DMA_CHANNEL_3  = 3,                              /*!< DMA Channel 3 */
    DMA_CHANNEL_4  = 4,                              /*!< DMA Channel 4 */
    DMA_CHANNEL_5  = 5,                              /*!< DMA Channel 5 */
    DMA_CHANNEL_6  = 6,                              /*!< DMA Channel 6 */
    DMA_CHANNEL_7  = 7,                              /*!< DMA Channel 7 */
    DMA_CHANNEL_8  = 8,                              /*!< DMA Channel 8 */
    DMA_CHANNEL_9  = 9,                              /*!< DMA Channel 9 */
    DMA_CHANNEL_10 = 10,                             /*!< DMA Channel 10*/
    DMA_CHANNEL_11 = 11,                             /*!< DMA Channel 11*/
    DMA_CHANNEL_12 = 12,                             /*!< DMA Channel 12*/
    DMA_CHANNEL_13 = 13,                             /*!< DMA Channel 13*/
    DMA_CHANNEL_14 = 14,                             /*!< DMA Channel 14*/
    DMA_CHANNEL_15 = 15                              /*!< DMA Channel 15*/

} dma_channel;

/*!
 *  @brief  Channel based transfer configuration 
 *
 *  @note   This struct contain parameters for initializing a DMA transfer
 *          using a given DMA channel number
 */
typedef struct dma_channel_cfg_t{
    uint32_t    src_addr;                           /*!< DMA source address */
    uint32_t    dst_addr;                           /*!< DMA destination address */
    uint16_t    total_transaction;                  /*!< DMA total number of transaction */
    uint16_t    early_irq_remaining_transaction;    /*!< DMA early interrupt remaining transaction */
    uint16_t    repeated_transfer_en;               /*!< DMA Repeated Transfer Enable */
    uint8_t     src_size;                           /*!< DMA source size 0:byte 1:halfword 2:word */
    uint8_t     src_incr;                           /*!< DMA source address increement */
    uint8_t     dst_size;                           /*!< DMA destination size 0:byte 1:halfword 2:word */
    uint8_t     dst_incr;                           /*!< DMA destination address increement */
    uint8_t     r_power;                            /*!< DMA Arbitration rate */
    uint8_t     next_useburst;                      /*!< DMA Set this to disable Single reqs*/ 
    uint8_t     src_prot_ctrl;                      /*!< DMA source protection control*/
    uint8_t     dst_prot_ctrl;                      /*!< DMA destination protection control*/
    uint8_t     alternate_cfg_sel;                  /*!< DMA alternate configuration select */
    uint8_t     fill_en;                            /*!< DMA fill mode enable */
    uint8_t     fill_incr_value;                    /*!< DMA fill increement value */
    uint8_t     fill_init_value;                    /*!< DMA fill initial value */
    uint8_t     stride_en;                          /*!< DMA stride mode enable */
    uint8_t     stride_src_incr;                    /*!< DMA stride source address increement value */
    uint8_t     stride_dst_incr;                    /*!< DMA stride destination address increement value */
    uint8_t     transfer_type;                      /*!< DMA transaction type*/
} dma_channel_cfg_t;


/*!
 *  @brief  Channel Control Configuration Struct 
 */
typedef struct dma_mem_ctrl_cfg_t {
    uint32_t    cycle_ctrl     :3;         
    uint32_t    next_useburst  :1;          
    uint32_t    n_minus_1      :10;
    uint32_t    r_power        :4;
    uint32_t    src_prot_ctrl  :3;
    uint32_t    dst_prot_ctrl  :3;
    uint32_t    src_size       :2;
    uint32_t    src_inc        :2;  
    uint32_t    dst_size       :2;
    uint32_t    dst_inc        :2;
} dma_mem_ctrl_cfg_t;   

/*!
 *  @brief  Channel Configuration struct
 */
typedef struct channel_cfg {
    uint32_t            rsp;
    uint32_t            rdp;
    dma_mem_ctrl_cfg_t  ctrl;
    uint32_t            rsvd;
} dma_mem_channel_cfg_t;

/*!
 *  @brief  Default initializer for channel_transfer_cfg struct  
 *
 *  @note   Make sure to updgrade this macro if 'channel_transfer_cfg_struct' is modified 
 */
#define CHANNEL_TRANSFER_CFG_DEFAULT {                                                                              \
    .src_addr                           = DMA_DEFAULT_SRC_ADDR                                                     ,\
    .dst_addr                           = DMA_DEFAULT_DST_ADDR                                                     ,\
    .src_size                           = DMA_DEFAULT_SRC_SIZE                                                     ,\
    .src_incr                           = DMA_DEFAULT_SRC_INCR                                                     ,\
    .dst_size                           = DMA_DEFAULT_DST_SIZE                                                     ,\
    .dst_incr                           = DMA_DEFAULT_DST_INCR                                                     ,\
    .transfer_type                      = DMA_DEFAULT_TRANSFER_TYPE                                                ,\
    .total_transaction                  = DMA_DEFAULT_TOTAL_TRANSACTION                                            ,\
    .r_power                            = DMA_DEFAULT_R_POWER                                                      ,\
    .next_useburst                      = DMA_DEFAULT_NEXT_USEBURST                                                ,\
    .src_prot_ctrl                      = DMA_DEFAULT_SRC_PROT_CTRL                                                ,\
    .dst_prot_ctrl                      = DMA_DEFAULT_DST_PROT_CTRL                                                ,\
    .alternate_cfg_sel                  = DMA_DEFAULT_ALTERNATE_CFG_SEL                                            ,\
    .fill_en                            = DMA_DEFAULT_FILL_EN                                                      ,\
    .fill_incr_value                    = DMA_DEFAULT_FILL_INCR_VALUE                                              ,\
    .fill_init_value                    = DMA_DEFAULT_FILL_INIT_VALUE                                              ,\
    .stride_en                          = DMA_DEFAULT_STRIDE_EN                                                    ,\
    .stride_src_incr                    = DMA_DEFAULT_STRIDE_SRC_INCR                                              ,\
    .stride_dst_incr                    = DMA_DEFAULT_STRIDE_DST_INCR                                              ,\
    .early_irq_remaining_transaction    = DMA_DEFAULT_EARLY_IRQ_REMAINING_TRANSACTION                              ,\
    .repeated_transfer_en               = DMA_DEFAULT_REPEATED_TRANSFER_EN                                          \
}

/**
 * @brief   This function initalizes the dma, waits if there is any current transaction,
 *          set dma structure addressm disable all the channels and enables the controller
 *
 * @param   base_ptr : pointer to base address of the dma channel configration memory
 * @param   pl230_regs : pointer to the pl230 register space
 *
 * @retval  void
 */
void dma_init(PL230_REGS_s *PL230_REGS, uint32_t base_ptr_address);

/**
 * @brief   This function configures the DMA channel with required configuration
 *
 * @param   channel_transfer_cfg: struct containing all the required configuration
 * @param   channel : the channel id for which the configuration is being done
 * @param   pl230_regs : pointer to the pl230 register space
 * @param   dma_regs : pointer to the dma register space
 *
 * @retval  void
 */
void dma_channel_cfg(DMA_REGS_s *DMA_REGS, PL230_REGS_s *PL230_REGS, dma_channel_cfg_t *dma_channel_cfg,uint8_t channel);

/**
 * @brief   This function enables a particular dma channel 
 *
 * @param   enable : set this value to enable the channel
 * @param   channel : channel id
 * @param   pl230_regs : pointer to the pl230 register space
 *
 * @retval  void
 */
void dma_channel_en_set(PL230_REGS_s *PL230_REGS, uint8_t channel);

/**
 * @brief   This function returns status of channel enable of a given channel 
 *
 * @param   channel : channel id 
 * @param   pl230_regs : pointer to the pl230 register space
 *
 * @retval  channel enable status
 */
uint8_t dma_channel_en_get(PL230_REGS_s *PL230_REGS, uint8_t channel);

/**
 * @brief   This function clear a particular dma channel   
 *
 * @param   channel : channel id 
 * @param   pl230_regs : pointer to the pl230 register space
 *
 * @retval   
 */
void dma_channel_en_clr(PL230_REGS_s *PL230_REGS, uint8_t channel);

/**
 * @brief   This function generate a SW trigger for a given channel    
 *
 * @param   channel : channel id 
 * @param   pl230_regs : pointer to the pl230 register space
 *
 * @retval   
 */
void dma_channel_sw_trig(PL230_REGS_s *PL230_REGS, uint8_t channel);

/**
 * @brief    This function set the dma arbitration
 *
 * @param   dma_regs : pointer to the dma register space
 * @param   mode : 1 for round robin, 0 for pl230 based arbitration
 *
 * @retval   
 */
void dma_channel_priority_cfg(DMA_REGS_s *DMA_REGS, uint8_t mode, uint16_t round_robin_mask);

/**
 * @brief   This function check if dma fsm is in idle/stalled/done state   
 *
 * @param   pl230_regs : pointer to the pl230 register space
 *
 * @retval  status of pl230 fsm   
 */
uint8_t is_dma_idle(PL230_REGS_s *PL230_REGS);
