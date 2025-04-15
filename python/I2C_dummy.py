import time
import sys
sys.path.append('../include')

import i2cdriver
from find_com_port import *

class I2C:
    def __init__(self, force_com=None, force_dev_addr=None):
        print(f'Opening I2C')
        self.val = {}
        #self.val = [i for i in range(255)]
        # if force_dev_addr is None:
        #     self.dev_addr = 0x03
        # else:
        #     self.dev_addr = force_dev_addr()
        
        # if force_com is None:
        #     self.com = find_com_port()
        # else:
        #     self.com = force_com
        # self.dev = i2cdriver.I2CDriver(self.com)
    
    def close(self):
        print(f'Closing I2C')
        # self.dev.ser.close()
        
    def write(self, addr, data):
        print(f'setting csr[{hex(addr)}] = {format(data,"#010x")}')
        self.val[addr] = data
        # self.dev.start(self.dev_addr,0)
        # self.dev.write([addr, data])
        # self.dev.stop()
        # time.sleep(0.01)
        
    def read(self, addr):
        # self.dev.start(self.dev_addr,0)
        # self.dev.write([addr])
        # self.dev.start(self.dev_addr,1)
        # rdata = self.dev.read(1)
        # self.dev.stop()
        # self.val[addr] = rdata[0]
        if addr in self.val:
            print(f'reading csr[{hex(addr)}] = {format(self.val[addr],"#010x")}')
            return self.val[addr]
        else:
            print(f'reading csr[{hex(addr)}] = unknown')
            return -1
        # time.sleep(0.01)
        # return self.val[addr]
        
        
    
        
