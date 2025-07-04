import i2cdriver
import array
import oled_utils

class ssd_1306:
    def __init__(self,skip_init):
        self.mem = array.array('B', [0]*1024)
        # print(self.mem)
        
        self.dev = i2cdriver.I2CDriver('COM6')
        self.dev_addr = 0x3C
        
        #self.dev.start(self.dev_addr,0)
        #self.dev.write([0xE4, 0xAE, 0xA8, 0x3F, 0x20, 0x00, 0x40, 0xD3, 0x00, 0xA0, 0xC0, 0xDA, 0x12, 0x81, 0x7F, 0xA4, 0xA6, 0xD5, 0x80, 0x8D, 0x14, 0x2E, 0xAF])
        #self.dev.stop()
      
        if(skip_init==0):
            # INIT STARTS
            self.dev.start(self.dev_addr,0)
            self.dev.write([0x00])  # Control byte (Co=0, D/C#=0)
            
            # Set Display Off
            self.dev.write([0xAE])  # Display OFF
            
            # Set Display Clock Divide Ratio/Oscillator Frequency
            self.dev.write([0xD5])  # Set display clock divide ratio/oscillator frequency
            self.dev.write([0x80])  # Suggested value (0x80)
            
            # Set Multiplex Ratio
            self.dev.write([0xA8])  # Set multiplex ratio
            self.dev.write([0x3F])  # 1/64 duty (0x3F)
            
            # Set Display Offset
            self.dev.write([0xD3])  # Set display offset
            self.dev.write([0x00])  # No offset (0x00)
            
            # Set Display Start Line
            self.dev.write([0x40])  # Set start line address at 0
            
            # Set Charge Pump
            self.dev.write([0x8D])  # Charge pump setting
            self.dev.write([0x14])  # Enable charge pump (0x14)
            
            # Set Segment Re-map
            self.dev.write([0xA1])  # Set segment re-map to 0xA1 (left-right reversed)
            
            # Set COM Output Scan Direction
            self.dev.write([0xC8])  # Set COM Output Scan Direction (remapped mode)
            
            # Set COM Pins Hardware Configuration
            self.dev.write([0xDA])  # Set COM pins hardware configuration
            self.dev.write([0x12])  # Alternative COM pin configuration (0x12)
            
            # Set Contrast Control
            self.dev.write([0x81])  # Set contrast control register
            self.dev.write([0xCF])  # Contrast value (0xCF)
            
            # Set Pre-charge Period
            self.dev.write([0xD9])  # Set pre-charge period
            self.dev.write([0xF1])  # Pre-charge period (0xF1)
            
            # Set VCOMH Deselect Level
            self.dev.write([0xDB])  # Set VCOMH deselect level
            self.dev.write([0x40])  # VCOMH deselect level (0x40)
            
            # Set Entire Display ON (normal mode)
            self.dev.write([0xA4])  # Entire display ON (0xA4 for normal, 0xA5 for all pixels ON)
            
            # Set Normal/Inverse Display
            self.dev.write([0xA6])  # Normal display (0xA6 for normal, 0xA7 for inverse)
            
            # Display On
            self.dev.write([0xAF])  # Display ON (0xAF)
       
            self.dev.stop()
            # INIT ENDS
        
    def clear(self):
        self.mem = array.array('B', [0]*1024)
        
    def update(self):
        self.dev.start(self.dev_addr,0)
        self.dev.write([0x00, 0x20, 0x00])
        self.dev.stop()

        self.dev.start(self.dev_addr,0)
        self.dev.write([0x00, 0x21, 0x00, 0x7F, 0x22, 0x00, 0x07])
        self.dev.stop()
        
        self.dev.start(self.dev_addr,0)
        self.dev.write([0x40])
        for i in range(1024):
            self.dev.write([self.mem[i]])
        self.dev.stop()
        
    def set_byte(self, addr, val):
        self.mem[addr] = val
    
    #def set_pixel(self,x,y):    
    #    page = int(y/8)
    #    col = x
    #    bit = y%8
    #    val = 1<<bit
    #    self.mem()
    
    def put_pixel(self,x,y):
        page = int(y/8)
        col = x
        bit = y%8
        val = 1<<bit
        # print(f'x={x}, y={y}, col={col}, page={page}, bit={bit}, val={val}')
        
        self.dev.start(self.dev_addr,0)
        self.dev.write([0x00, 0x21, col, col, 0x22, page, page])
        self.dev.stop()
        
        self.dev.start(self.dev_addr,0)
        self.dev.write([0x40])
        self.dev.write([val])
        self.dev.stop()
        
    def put_byte(self, addr, val):
        self.dev.start(self.dev_addr,0)
        self.dev.write([0x00, 0x21, addr, 127, 0x22, 0, 7])
        self.dev.stop()
        
        self.dev.start(self.dev_addr,0)
        self.dev.write([0x40])
        self.dev.write([val])
        self.dev.stop()
    
    def disp_image(self, fn_image):
        x = oled_utils.oled_utils()
        mem = x.image2mem(fn_image)
        
        self.dev.start(self.dev_addr,0)
        self.dev.write([0x00, 0x20, 0x00])
        self.dev.stop()

        self.dev.start(self.dev_addr,0)
        self.dev.write([0x00, 0x21, 0x00, 0x7F, 0x22, 0x00, 0x07])
        self.dev.stop()
        
        self.dev.start(self.dev_addr,0)
        self.dev.write([0x40])
        self.dev.write(mem)
        # for i in range(1024):
        #     self.dev.write([self.mem[i]])
        self.dev.stop()
        
        
    def close(self):
        self.dev.ser.close()
        
def main():
    oled = ssd_1306(0)
    # oled.set_byte(0,0xAA)
    # oled.clear()
    # oled.update()
    # oled.put_byte(1, 0x00)i
    # for x in range(100):
    #     oled.put_pixel(10+x,32)
        
    # oled.disp_image('abhra_monochrome.bmp')
    # oled.put_pixel(64,34)
    # oled.put_pixel(66,32)

    oled.close()

if __name__ == '__main__':
    main()    
    
