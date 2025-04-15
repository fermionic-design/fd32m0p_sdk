import sys
import bsl
import i2cdriver
from serial.serialutil import EIGHTBITS, PARITY_EVEN, STOPBITS_ONE, SEVENBITS, PARITY_ODD, PARITY_NONE, PARITY_SPACE, PARITY_MARK
import argparse
import sys, os

# Disable
def blockPrint():
    sys.stdout = open(os.devnull, 'w')

# Restore
def enablePrint():
    sys.stdout = sys.__stdout__

import time
import sys

sys.path.append('../include')

import i2cdriver
from find_com_port import *


class bsl_adapter:
    def __init__(self):

        nl = "\n"
        __version__ = "1.0.0"
        parser = argparse.ArgumentParser(
            prog='BSL Adapter',
            description='BSL Adapter to be used with Python Register headers generated using csv2.\
                         Communication layer for the register interface',
            epilog='©FermionIC Design Pvt Ltd')

        parser.add_argument('-p', '--prog_is_uart', type=str, default='0',
                            help='Specify the programmer device - 0:i2c, 1:uart')
        parser.add_argument('-c', '--com_port',  type=str, default='COM12',
                            help='Specify the COM Port of the programmer device')
        parser.add_argument('-r', '--baud_rate', type=int, default=9600,
                            help='Specify the baud rate to be used by the programmer device (Only valid if prog_is_uart = 1')
        parser.add_argument('-d', '--debug', action='store_true', help='Print Debug Logs')
        parser.add_argument('-v', '--version', action='version',
                            version=f'%(prog)s{nl}{__version__}{nl}{parser.epilog}')

        args = parser.parse_args()
        # }}}
        print(args)

        bsl.BSL_IS_UART = args.prog_is_uart  # 1 for uart, 0 for i2c
        com_port = args.com_port
        bsl.I2C_SLV_ADDR = 0x54
        if bsl.BSL_IS_UART == '1':  # uart
            bsl.ser = bsl.serial.Serial(com_port, int(args.baud_rate))
        elif bsl.BSL_IS_UART == '0':  # i2c
            bsl.i2c = bsl.i2cdriver.I2CDriver(com_port)

        print("Establishing Connection")
        blockPrint()
        bsl.connect_phase()
        enablePrint()
        print("Connection Done")

        self.val = {}


    def close(self):
        if bsl.BSL_IS_UART == '1':
            print(f'Closing UART')
            bsl.ser.close()
        else:
            print(f'Closing I2C')
            bsl.i2c.ser.close()

    def write(self, addr, data):
        print(f'setting csr[{hex(addr)}] = {hex(data)}')
        blockPrint()
        bsl.write_to_reg(data_mem=data, wr_addr_mem=addr)
        enablePrint()
        time.sleep(0.01)

    def read(self, addr):
        blockPrint()
        self.val[addr] = bsl.read_from_reg(rd_addr_mem=addr)
        enablePrint()
        print(f'reading csr[{hex(addr)}] = {hex(self.val[addr])}')
        time.sleep(0.01)
        return self.val[addr]





