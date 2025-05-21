#include  "EVENT_FABRIC_CAPI.h"


void event_fabric_pub_to_dma_channel_cfg(EVENT_FABRIC_REGS_s * registers, EVENT_FABRIC_DMA_PUB_EVENT_ID_E pub_id,uint32_t chan_id){
    EVENT_FABRIC_DMA_PUB_N_WRITE(registers,chan_id,pub_id);
}


void event_fabric_pub_to_sub_channel_cfg(EVENT_FABRIC_REGS_s * registers, EVENT_FABRIC_PUB_ID_E pub_id, EVENT_FABRIC_SUB_ID_E sub_id, EVENT_FABRIC_CHAN_ID_E chan_id){
        EVENT_FABRIC_GEN_PUB_N_WRITE(registers, pub_id, chan_id);
        EVENT_FABRIC_GEN_SUB_N_WRITE(registers, sub_id, chan_id);
}


void get_dma_full_chnl_cfg(EVENT_FABRIC_REGS_s * registers, chnl_cfg * chnl){
        uint32_t    sub_chan_id;
        uint32_t    pub_chan_id;

        for(int i=0; i<DMA_CHANNELS;i++){
            chnl[i].pub = registers->DMA_PUB[i].packed_w;
            chnl[i].sub = i; 
        }
}

void get_event_fabric_full_chnl_cfg(EVENT_FABRIC_REGS_s * registers, chnl_cfg * chnl){
        uint8_t    sub_chan_id;
        uint8_t    pub_chan_id;
        uint8_t    max_of_pub_sub;
       
        
        for(int i=0; i< EVENT_FABRIC_CHANNELS ; i++){
            chnl[i].pub = 0;
            chnl[i].sub = 0;
        }

        if(EVENT_FABRIC_NUMBER_OF_PUB > EVENT_FABRIC_NUMBER_OF_SUB){
            max_of_pub_sub = EVENT_FABRIC_NUMBER_OF_PUB;
        }else {
            max_of_pub_sub = EVENT_FABRIC_NUMBER_OF_SUB;
        }
        
        //print_int_var("chl_addr",chnl,1);
        for(int i=0; i< max_of_pub_sub; i++){
            if(i <= EVENT_FABRIC_NUMBER_OF_SUB ){
                sub_chan_id = registers->GEN_SUB[i].packed_w;
                chnl[sub_chan_id].sub = i; 
            }
            if(i <= EVENT_FABRIC_NUMBER_OF_PUB ){
                pub_chan_id = registers->GEN_PUB[i].packed_w;
                chnl[pub_chan_id].pub = i;
            }
        }
}

