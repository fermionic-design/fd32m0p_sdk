import serial.tools.list_ports
import sys

def find_com_port(argument=None):
    if argument is None:
        ports = serial.tools.list_ports.comports()
        usb_ports = [port for port in ports if "USB" in port.hwid]
        if usb_ports:
            if(len(usb_ports)==1):
                print('Only One USB COM Port Available. Selecting that.')
                print(f"[{usb_ports[0].device}] {usb_ports[0].description} [{usb_ports[0].hwid}]")
                return(usb_ports[0].device)
            else:
                print('Multiple USB COM Ports Available. Choose one.')
                print("Available USB COM Ports:")
                i = 0
                for port in usb_ports:
                    print(f"{i}:1[{port.device}] {port.description} [{port.hwid}]")
                    i = i+1
                user_com = input('Enter the number corresponding to the COM port you want to select: ')
                return(usb_ports[int(user_com)].device)
        else:
            print("No USB COM ports available. Exiting.")
            sys.exit(1)
    else:
        return(argument)

if __name__ == '__main__':
    com = find_com_port()
    print(f'Port: {com}')
