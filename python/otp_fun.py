
# import os
# import sys

# sys.path.append('../../../sdk/python')
# sys.path.append('../../../sdk/python/header')
# sys.path.append('../../../system/bootstrap_loader')

# import numpy as np
# from bsl_adapter import *
# from fd32m0p import *
class otp_fun:
    def __init__(self,mmap,bsl_adapter):
        self.fd32m0p = mmap
        self.m_bsl_adapter = bsl_adapter
    def burn(self,start_addr,end_addr):
        self.fd32m0p.otp.OTP_CTRL.wr_start_addr = start_addr
        self.fd32m0p.otp.OTP_CTRL.wr_end_addr = end_addr
        self.fd32m0p.otp.OTP_CTRL.write()
        self.fd32m0p.otp.OTP_EN.otp_wr_en = 1
        self.fd32m0p.otp.OTP_EN.write()
        
    def sw_read(self):
        self.fd32m0p.otp.OTP_RD_STATUS.otp_rd_done = 1
        self.fd32m0p.otp.OTP_RD_STATUS.write()
        self.fd32m0p.otp.OTP_RD_EN.otp_rd_en = 1
        self.fd32m0p.otp.OTP_RD_EN.write()
    
    def fsm_status(self):
        self.fd32m0p.otp.STS.read()
    
    def write(self,otp,val):
        self.m_bsl_adapter.write(0x3FFC5000+16+4*otp,val)
    
    def read(self,otp):
        val = self.m_bsl_adapter.read(0x3FFC5000+16+4*otp)
        return val
    
    def read_all(self):
        for i in range (0,32):
            self.read(i)
