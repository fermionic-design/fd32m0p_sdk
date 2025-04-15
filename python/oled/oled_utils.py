from PIL import Image

class oled_utils:
    def __init__(self):
        pass
    
    def image2mem(self, fn_image):
        image = Image.open(fn_image)
        # image.show()
        pixels = image.load()
        width, height = image.size
        print(f'width = {width}, height = {height}')
        
        mem = []
        for y in range(0, height, 8):
            for x in range(width):
                val = 0
                for i in range (8):
                    val = val | (pixels[x,y+i]>127)<<i
                # print(val)
                mem.append(val)
                
        return(mem)

def main():
    x = oled_utils()
    result = x.image2mem('hello_world.bmp')
    
        
if __name__ == '__main__':
    main()