import sys
import bsl
from sympy import Integer
import i2cdriver
import struct
#arg1 is mode:uart(1) or i2c(0), arg2 is baud rate in case of uart
#usage: python.\system\bootstrap_loader\info_prog.py 1 57600

boot_dict = {
    "BCR_CONFIG_ID": 0xC001C0DE,
    "SWD_EN": 0,
    "DAP_ACCESS": 0,
    "BSL_GPIO_INVOKE": 0xAAAA,
    "BSL_GPIO_PIN": 18,
    "BSL_EN": 0xAAAA,
    "FASTBOOT_EN": 0xBBBB,
    "BCR_FLASH_WP": 0,
    "APP_CRC_START": 0,
    "APP_CRC_END": 0,
    "EXP_CRC": 0,
    "BSL_CONFIG_ID": 0,
    "UART_TX_PIN_SEL": 10,
    "UART_TX_MUX_SEL": 2,
    "UART_RX_PIN_SEL": 22,
    "UART_RX_MUX_SEL": 6,
    "UART_CLK_DIV": 0,
    "UART_M": 192,
    "UART_N": 8,
    "SCL_PIN_SEL": 11,
    "SCL_MUX_SEL": 4,
    "SDA_PIN_SEL": 0,
    "SDA_MUX_SEL": 3,
    "BSL_PWD": 0,
    "RSVD0": 0,
    "RSVD1": 0x0,
    "EXP_BOOT_CRC": 0xFFFFFFFF
}
#crc calculation for info block
def crc_info(crc_byte, seed):
    crc = seed & 0xffffffff
    crc_byte = crc_byte & Integer(0xffffffff)
    result = crc ^ (crc_byte << 24)
    for i in range(8):
        if (result & 0x80000000):
            result = (result << 1) ^ 0x04C11DB7
        else:
            result = (result << 1)
    return result & 0xffffffff

#packing the data from dictionary to bytes
def dict_to_bytes():
    info_val = boot_dict.values()
    info_val_list = list(info_val)
    info_val_bytes = struct.pack('<IHHHHHHIIIIIBBBBBBHBBBBIIII', info_val_list[0],
    info_val_list[1],
    info_val_list[2],
    info_val_list[3],
    info_val_list[4],
    info_val_list[5],
    info_val_list[6],
    info_val_list[7],
    info_val_list[8],
    info_val_list[9],
    info_val_list[10],
    info_val_list[11],
    info_val_list[12],
    info_val_list[13],
    info_val_list[14],
    info_val_list[15],
    info_val_list[16],
    info_val_list[17],
    info_val_list[18],
    info_val_list[19],
    info_val_list[20],
    info_val_list[21],
    info_val_list[22],
    info_val_list[23],
    info_val_list[24],
    info_val_list[25],
    info_val_list[26]
    )
    return info_val_bytes

#update different bitfields of info block
# boot_dict["FASTBOOT_EN"] = 0xAAAA   #change fastboot enable settings
# boot_dict["BSL_GPIO_PIN"] = 22
# boot_dict["SCL_PIN_SEL"] = 11 #pa11 k2 12 pio
# boot_dict["SCL_MUX_SEL"] = 4
# boot_dict["SDA_PIN_SEL"] = 10 #pa10 j1 11pio
# boot_dict["SDA_MUX_SEL"] = 4
# boot_dict["UART_TX_PIN_SEL"] = 10
# boot_dict["UART_TX_MUX_SEL"] = 2
# boot_dict["UART_RX_PIN_SEL"] = 11
# boot_dict["UART_RX_MUX_SEL"] = 2
# baud rate changed to 19200
# boot_dict["UART_M"]= 210
# boot_dict["UART_N"]= 11


#change into bytes and update crc
def main():
    bsl.BSL_IS_UART = '0'#sys.argv[1]
    if bsl.BSL_IS_UART == '1': #uart
        bsl.ser = bsl.serial.Serial("COM9", int(sys.argv[2]))
    elif bsl.BSL_IS_UART == '0': #i2c
        bsl.i2c = i2cdriver.I2CDriver("COM5")
    crc_got = 0xFFFFFFFF
    boot_info_init = dict_to_bytes()
    for i in range(60):
        crc_got = crc_info(boot_info_init[i], crc_got)  # calculate crc with updated field values
    boot_dict["EXP_BOOT_CRC"] = crc_got  # update crc field
    boot_info = dict_to_bytes()  # change to bytes
    bsl.connect_phase()
    bsl.program_info(boot_info)


if __name__ == "__main__":
    main()