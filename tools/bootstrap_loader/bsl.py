import random
import sys
import serial
import numpy as np
from sympy import Integer
import time
import i2cdriver
import struct
"""
To select UART, put 1 in cmd line arg, to select I2C, put 0
"""
i2c = None #i2cdriver.I2CDriver("COM8")
ser = None #serial.Serial("COM4", 57600)
BSL_IS_UART = 1
I2C_SLV_ADDR = 0x54

class bsl:
    crc_seed = 0xffffffff
    poly = 0x04C11DB7

    def __init__(self, header = None, length = None, cmd = None, addr = None, data = None):
        self.addr = addr
        self.header = header
        self.length = length
        self.cmd = cmd
        self.data = data
        self.rsp = None
        if(self.header != None):
            self.crc = self.crc_cal_cmd()

#calculates bytewise crc
    def crc32(self, crc_byte,seed):
        crc = seed & 0xffffffff
        crc_byte = crc_byte & Integer(0xffffffff)
        result = crc ^ (crc_byte << 24)
        for i in range(8):
            if (result & 0x80000000):
                result = (result << 1) ^ self.poly
            else:
                result = (result << 1)
        return result & 0xffffffff

#calculates crc for the full cmd given
    def crc_cal_cmd(self):
        cnt = self.length
        #print(cnt)
        crc_cmd = self.crc32(self.length & 255, self.crc_seed)
        crc_cmd = self.crc32(self.length >> 8, crc_cmd)
        crc_cmd = self.crc32(self.cmd, crc_cmd)
        cnt = cnt-1
        if(cnt>0):
            if(not((self.cmd & 1 == 1) or (self.cmd == 0x30))):
                for i in range(4):
                    crc_cmd = self.crc32((self.addr >> 8*i) & 255,crc_cmd)
                cnt = cnt-4
            if(cnt>0):
                for i in range(len(self.data)):
                    crc_cmd = self.crc32(self.data[i], crc_cmd)
        return crc_cmd

#sends command, header, length lsb and msb, cmd, addr, data and crc. invoke the function in an object of class bsl, it takes the class attributes
    def send_cmd(self):
        print('SENDING CMD!')
        cnt = self.length
        #print('cnt=', cnt)
        self.write_to_port(self.header)
        self.write_to_port(self.length & 255)
        self.write_to_port(self.length >> 8)
        self.write_to_port(self.cmd)
        cnt = cnt-1
        if(cnt>0):
            if(self.cmd != 0x30):
                for i in range(4):
                    self.write_to_port((self.addr >> 8*i) & 255)
                cnt = cnt-4
            if(cnt>0):
                for i in range(len(self.data)):
                    self.write_to_port(self.data[i])
        for i in range(4):
            self.write_to_port((self.crc >> 8*i) & 255)

#sends i2c start
    def send_start(self,slv_addr,rw):
        i2c.start(slv_addr,rw)

#sends i2c stop
    def send_stop(self):
        i2c.stop()

#writes to port
    def write_to_port(self,byte):
        if BSL_IS_UART == '0':
            i2c.write(bytes([byte]))
        elif BSL_IS_UART == '1':
            time.sleep(0.0001)
            ser.write(bytes([byte]))


#reads from port in bytes
    def read_from_port(self, rd_bytes=1):
        byte_rd_arr = np.ndarray(shape=(rd_bytes,), dtype=int)
        if BSL_IS_UART == '0':
            byte_rd_arr = i2c.read(rd_bytes)
        elif BSL_IS_UART == '1':
            byte_rd_arr = ser.read(rd_bytes)
        return byte_rd_arr


#after sending a command getting back a response.
#waiting for correct acks in the while loops, and writing junk data two times to ports to read last 2 crc bytes
    def get_resp(self, rd_bytes=1):
        print('GETTING RESPONSE!')
        rsp_packet = self.read_from_port(rd_bytes)
        # print('rsp_packet:', rsp_packet)
        if rd_bytes >= 1:
            self.rsp = rsp_packet[0]
        print('ack:', self.rsp)
        if(self.rsp == 0x05): #ack
            self.header = rsp_packet[1]
            header_received = self.header
            print('header:', hex(header_received))
            ln_lsb = rsp_packet[2]
            print('ln lsb:', hex(ln_lsb))
            ln_msb = rsp_packet[3]
            print('ln_msb:', hex(ln_msb))
            self.cmd = rsp_packet[4]
            print('cmd:', hex(self.cmd))
            self.length = ln_lsb +(ln_msb<<8)
            cnt = self.length
            print('length rsp:',cnt)
            cnt = cnt-1                         #excluding cmd
            self.data = np.ndarray(shape=(cnt,), dtype=int)
            for i in range(cnt):
                self.data[i] = rsp_packet[5+i]
            crc_l = rsp_packet[cnt+5]           #byte 0
            crc_m = rsp_packet[cnt+6]           #byte 1
            crc_n = rsp_packet[cnt+7]           #byte 2
            crc_o = rsp_packet[cnt+8]           #byte 3
            crc_received = (crc_l | (crc_m << 8) | (crc_n << 16) | (crc_o << 24))
            print('crc_received:', hex(crc_received))
            print('crc calculated:', hex(self.crc_cal_cmd()))
            assert crc_received == self.crc_cal_cmd()
            assert header_received == 0x0A ,'got wrong header'



#sends commands and gets response, tries for the number of times given in retry_cnt for correct ack
def send_cmd_get_resp(bsl_cmd, rd_bytes=1):
    bsl_resp = bsl()
    if BSL_IS_UART == '0':        #send start in i2c
        bsl_cmd.send_start(I2C_SLV_ADDR, 0)
    bsl_cmd.send_cmd()
    if BSL_IS_UART == '0':
        time.sleep(0.2)
        bsl_cmd.send_start(I2C_SLV_ADDR, 1)      #repeated start in i2c
    bsl_resp.get_resp(rd_bytes)
    if BSL_IS_UART == '0':            #send stop in i2c
        bsl_cmd.send_stop()
    if((bsl_resp.cmd == 0x51) | (bsl_resp.cmd == 0x61) | (bsl_resp.cmd == 0x91)):
        assert bsl_resp.rsp == 0x05, 'GOT WRONG ACK'
    else:
        assert bsl_resp.rsp == 0x06, 'GOT WRONG ACK'
    return bsl_resp

"""
call this function to connect, takes no arguments
"""
def connect_phase():
    print('CONNECTION STARTED!')
    bsl_connect = bsl(header = 0xA0, length = 0x01, cmd = 0x10)
    send_cmd_get_resp(bsl_connect)
    print('CONNECTION DONE')

"""
call this function to start the application code, takes no arguments
"""
def start_app():
    print('APPLICATION STARTED')
    bsl_startapp = bsl(header=0xA0, length=0x01, cmd=0x70)
    #bsl_startapp.send_cmd()
    send_cmd_get_resp(bsl_startapp)#,TODO
    print('APPLICATION EXECUTED')

#reads from the binary file
def read_from_hex(path_to_hex_file):
    print('READING FROM BIN FILE')
    with open(path_to_hex_file, 'r')as f:
        data_x = np.fromfile(f, dtype=np.uint8)
    return data_x

"""
crc verify calculates crc and matches with the crc received in response packet
function arguments are 
start_addr= word address in flash at which you want to start calculating crc
num_bytes= number of bytes for which you want to calculate crc(should be a multiple of 4)
bin_file = path to the bin file given in command line
"""
def crc_verify(start_addr, num_bytes, bin_file): #start addrrss and no. of bytes for which you want to calculate crc
    print('CRC VERIFICATION STARTED!')
    hex_file = bin_file
    data_x = read_from_hex(hex_file)
    crc_end_addr = np.ndarray(shape=(4,), dtype=int)
    end_addr = start_addr + (num_bytes/4)
    for i in range(4):
        crc_end_addr[i] = (int(end_addr) >> (i * 8)) & 255
    bsl_crcfull = bsl(header=0xA0, length=0x09, cmd=0x60, addr=start_addr, data=crc_end_addr)  # data field has end address
    crc_verify_resp = send_cmd_get_resp(bsl_crcfull,13)
    assert crc_verify_resp.rsp == 0x05, 'GOT WRONG ACK'
    assert crc_verify_resp.cmd == 0x61, 'GOT WRONG CMD'
    crc_cal= bsl_crcfull.crc32(data_x[0], 0xffffffff)                                      #calculate crc with seed for 1st byte
    for i in range(num_bytes-1):
        crc_cal = bsl_crcfull.crc32(data_x[i+1+(start_addr*4)],crc_cal)                               #calculate rest of the bytes
    crc_rec = (crc_verify_resp.data[0] | (crc_verify_resp.data[1] << 8) | (crc_verify_resp.data[2] << 16) | ((crc_verify_resp.data[3] << 24) & 0xffffffff))        #data received in get_resp is the crc
    print('CRC received in response:', hex(crc_rec))
    print('CRC calculated:', hex(crc_cal))
    assert crc_rec == crc_cal , 'CRC FAILED!'
    print('CRC VERIFICATION DONE!')


"""
flash erase in a range, function arguments are
start_addr= word address at which you want to start erasing flash memory
num_bytes= number of bytes you want to erase(4n)
"""
def flash_erase(start_addr, num_bytes):
    print('STARTED ERASING flash from addr '+str(start_addr)+ ' for ' +str(num_bytes)+ ' bytes of data')
    erase_end_addr = np.ndarray(shape=(4,), dtype=int)
    flash_erase_end_addr = start_addr + (num_bytes/4)
    for i in range (4):
        erase_end_addr[i] = (int(flash_erase_end_addr) >>(i*8)) & 255
    bsl_flasherase = bsl(header=0xA0, length=0x09, cmd=0x20, addr=start_addr, data=erase_end_addr)
    send_cmd_get_resp(bsl_flasherase)
    print('FLASH ERASE DONE!')


"""
NOTE: to erase one particular sector, put start_sec = 0, the sector you want to erase in sec_no, and num of sec = 1
To erase multiple sectors from 0, put start_sec = 0, sec_no = 0 and num_of_sectors as the number of sectors you want to erase
to erase multiple sectors from non zero, put start_sec = no of sector at which you want to start erasing, sec_no = 0, and num_of sec = number of sectors you want to erase
"""
def flash_sector_erase(start_sec,sector_no, num_of_sec=1):
    print('STARTED FLASH SECTOR ERASE!')
    for j in range(num_of_sec):
        erase_end_addr = np.ndarray(shape=(1,), dtype=int)
        sec_no = j+sector_no+start_sec
        for i in range(1):
            erase_end_addr[i] = (int(sec_no) >> (i * 8)) & 255
        bsl_sectorerase = bsl(header=0xA0, length=0x02, cmd=0x30, data=erase_end_addr)
        send_cmd_get_resp(bsl_sectorerase)
    print('FLASH SECTOR ERASE DONE!')


"""
write to register, function arguments are
data_mem = 32 bit data that you want to write into the register
wr_addr_mem = 32 bit address of register you're writing to
"""
def write_to_reg(data_mem, wr_addr_mem):
    print('WRITE TO REGISTER STARTED!')
    print('data in txfifo:', hex(data_mem))
    data_uart_arr = np.ndarray(shape=(4,), dtype=int)
    for i in range(4):
        data_uart_arr[i] = (int(data_mem) >> (i * 8)) & 255
    bsl_regwrite = bsl(header=0xA0, length=len(data_uart_arr) + 4 + 1, cmd=0x80, addr=wr_addr_mem, data=data_uart_arr)  # uart_addr register
    send_cmd_get_resp(bsl_regwrite)
    print('WRITE TO REGISTER DONE!')


"""
read from reg, function arguments are
rd_addr_mem= 32 bit address from which you want to read
"""
def read_from_reg(rd_addr_mem):
    print('READ FROM REGISTER STARTED!')
    rd_len = 4 #read 4n bytes
    uart_memrd_len = np.ndarray(shape=(4,), dtype=int)
    for i in range(4):
        uart_memrd_len[i] = (rd_len >> (i * 8)) & 255
    bsl_regread = bsl(header=0xA0, length=len(uart_memrd_len) + 4 + 1, cmd=0x90, addr=rd_addr_mem, data=uart_memrd_len)
    reg_rd_resp = send_cmd_get_resp(bsl_regread, 13)
    assert reg_rd_resp.rsp == 0x05, 'got incorrect ack'
    assert reg_rd_resp.cmd == 0x91, 'got incorrect cmd'
    rdata = (reg_rd_resp.data[0]) | (reg_rd_resp.data[1] << 8) | (reg_rd_resp.data[2] << 16) | (reg_rd_resp.data[3] << 24)
    print('data read from mem', hex(rdata))
    return rdata
    print('READ FROM REGISTER DONE!')


"""
write to mem, function arguments are
start_addr= starting 32 bit address of memory where you want to write
wdata= data input in the form of byte array.
"""
def write_to_mem(start_addr, wdata):
    print('WRITE TO MEM STARTED!')
    bsl_memwrite = bsl(header=0xA0, length=len(wdata)+4+1, cmd= 0x80, addr=start_addr, data=wdata)
    send_cmd_get_resp(bsl_memwrite)
    print('WRITE TO MEM DONE!')


"""
read from mem, function arguments are
start_addr= 32 bit address of memory from where you want to start reading
rd_len= put number of bytes you want to read
"""
def read_from_mem(start_addr, rd_len):
    print('READ FROM MEM STARTED!')
    mem_rdata_len = np.ndarray(shape=(4,),dtype=int)
    for i in range(4):
        mem_rdata_len[i] = (rd_len >> (i*8)) & 255
    bsl_memrd = bsl(header=0xA0, length= 0x09, cmd=0x90, addr=start_addr, data=mem_rdata_len)
    send_cmd_get_resp(bsl_memrd, rd_len+9)
    print('READ FROM MEM DONE!')

def write_to_flash(data_x, addr_x):
    print('STARTED WRITING TO FLASH!')
    print('address:', addr_x)
    bsl_flashwrite = bsl(header=0xA0, length=len(data_x)+4+1, cmd=0x40, addr=int(addr_x), data= data_x)
    bsl_wr_resp =send_cmd_get_resp(bsl_flashwrite)
    # bsl_flashwrite.send_cmd()
    #time.sleep(1)
    print('FLASH WRITE DONE!')
    return bsl_wr_resp

def read_from_flash(start_addr, rd_len):
    print('STARTED READING FROM FLASH!')
    data_rd_len = np.ndarray(shape=(4,), dtype=int)
    for i in range(4):
        data_rd_len[i] = (rd_len >> (i*8)) & 255
    print('FLASH READ DONE!')
    bsl_flashread = bsl(header = 0xA0, length = 0x09, cmd = 0x50, addr=int(start_addr), data= data_rd_len)
    bsl_rd_resp= send_cmd_get_resp(bsl_flashread,rd_len+9)
    return bsl_rd_resp

def send_invalid_cmd():
    arr_size = random.randint(1,10)
    data_rd_len = np.ndarray(shape=(arr_size,), dtype=int)
    addr_rd_len = np.ndarray(shape=(4,), dtype=int)
    for i in range(arr_size):
        data_rd_len[i] = ((random.randint(1,255)))
    for j in range(1):                                                                  #send invalid command 4 times
        bsl_invld = bsl(header=0xA0, length=random.randint(1,65536), cmd=random.randint(1,10), addr= random.randint(1,1000),data = data_rd_len)
        bsl_invld.send_cmd()
        bsl_resp = bsl()
        bsl_resp.get_resp()
        if (bsl_resp.rsp == 0x06):
            print('got correct ack')
        else:
            print('got incorrect ack')


"""
programs the flash memory, function arguments are
bin_file= path to the bin file as given in command line argument
"""
def program_flash(bin_file):
    print('FLASH PROGRAMMING START!!')
    wr_size = 1024
    rd_len = wr_size
    hex_file = bin_file
    data_x = read_from_hex(hex_file)
    print(data_x)
    print('No of bytes read from bin file: ',len(data_x))
    for i in range (int(len(data_x)/wr_size)): #32768/1024 = 32
        print('i:', i)
        bsl_wr_resp = write_to_flash(data_x[i*(wr_size) : (wr_size + i*(wr_size))], i*(wr_size/4)) #calling write to flash
        assert bsl_wr_resp.rsp == 0x06, 'got incorrect ack'

    #for i in range(int(len(data_x) / wr_size)):  # 32768/1024 = 32
        # print ('i:',i)
        # bsl_rd_resp = read_from_flash(i*(wr_size/4), rd_len) #change back to rd_len
        # for p in range(rd_len):
        #     assert bsl_rd_resp.data[p] == data_x[i * wr_size + p] ,'data did not match'
        # assert bsl_rd_resp.rsp == 0x05, 'got incorrect ack'
        # assert bsl_rd_resp.cmd == 0x51, 'got incorrect cmd'
    print('FLASH PROGRAMMING DONE!!')#reading flash
"""
programs the info block
"""
def program_info(boot_info):
    print('INFO BLOCK PROGRAMMING START!')
    wr_size = 64 #64 bytes at once
    print(boot_info)
    print("length of info block:",len(boot_info))
    bsl_info_wr = write_to_flash(boot_info,0x2000) #addr for info block= 8000h to 803Fh
    assert bsl_info_wr.rsp == 6, 'got incorrect ack'
    print("INFO BLOCK PROGRAMMING DONE!")


def program_flash_optimized(bin_file):
    print('Flash Optimized Programming Start!!')
    wr_size = 1024
    rd_len  = wr_size
    hex_file= bin_file
    sector_size = 4096
    data    = read_from_hex(hex_file)
    print("Data", data)
    print("No of Bytes read from bin file", len(data))
    last_sector = 0

    for sector in range(0,8):
        sector_empty = 1
        for sector_addr in range(0, 4096):
            if(data[(sector*4096) + sector_addr]!=0):
                sector_empty = 0
                break

        if sector_empty!=True:
            sector_start_addr = int((sector*sector_size)/wr_size)
            sector_end_addr   = int(((sector+1)*sector_size)/wr_size)
            for i in range(sector_start_addr, sector_end_addr):
                print('i:', i)
                bsl_wr_resp = write_to_flash(data[i*(wr_size) : (wr_size + i*(wr_size))], i*(wr_size/4)) #calling write to flash
                assert bsl_wr_resp.rsp == 0x06, 'got incorrect ack'
            print("Flash Programming Done for Sector : ", sector)
            last_sector = sector
        else:
            print("Flash Programming Skipped for Sector : ", sector)

    return (last_sector+1)
