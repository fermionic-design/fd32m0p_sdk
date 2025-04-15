import csv
import os

def write_py_body():
    fh_py.write(f'\tdef __init__(self,dev,base_addr):\n')
    fh_py.write(f'\t\tself.dev = dev\n')
    fh_py.write(f'\t\tself._addr = base_addr+{prev_addr}\n')
    fh_py.write('\n'.join(init_array))
    fh_py.write('\n')
    
    fh_py.write(f'\tdef write(self):\n')
    fh_py.write(f'\t\tval = 0\n')
    fh_py.write('\n'.join(write_array))
    fh_py.write('\n')
    fh_py.write(f'\t\tself.dev.write(self._addr,val)\n')
    
    fh_py.write(f'\tdef read(self):\n')
    fh_py.write(f'\t\tval = self.dev.read(self._addr)\n')
    fh_py.write('\n'.join(read_array))
    fh_py.write('\n') 
    fh_py.write('\t\treturn val\n')
    
    fh_py.write('\tdef display(self):\n')
    fh_py.write('\t\tattribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]\n')
    fh_py.write('\t\tfor name in attribute_names:\n')
    fh_py.write('\t\t\tif name not in [\'_addr\',\'dev\']:\n')
    fh_py.write('\t\t\t\tprint(f\'{name} = {hex(getattr(self,name))}\')\n')

regs_path = '../regs'
files = os.listdir(regs_path)

for file in files:
    if file.endswith('_csr.csv'):
        block = file.replace('_csr.csv','')
        print(block)
    else:
        continue

    # block = 'gpio'
    
    fh_csv = open(f'../regs/{block}_csr.csv','r',newline='')
    fh_py = open(f'header/{block}.py','w',newline='')
    
    # print(fh_csv)
    # print(fh_py)
    
    reader = csv.reader(fh_csv)
    
    init_array = []
    write_array = []
    read_array = []
    reg_array = []
    
    prev_reg = '__START__'
    prev_addr = 0
    line_num = 0
    for line in reader:
        
        if(line_num==0):
            line_num += 1
            continue
        
        # +2 to adapt to new CSV format with array support
        reg = line[0+2]     
        field = line[1+2]
        bits = line[2+2]
        addr = line[3+2]
        
        msb = int(bits.split(':')[0])
        lsb = int(bits.split(':')[1])
        
        # mask = 0b00000000
        mask = ((1 << (msb - lsb + 1)) - 1) << lsb
        mask_str = '0x'+format(mask,'02X')
        print(mask_str)
        
        if reg != prev_reg and (not('[' in reg)):   #TODO: temp hack to support extern arrays
            print(reg)
            
            reg_array.append(f'\t\tself.{reg} = {reg}(dev,base_addr)')
            if(prev_reg == '__START__'):
                fh_py.write(f'class {reg}:\n')
            else:
                write_py_body()
            
                fh_py.write('\n')
                fh_py.write(f'class {reg}:\n')
                
            init_array = []
            write_array = []
            read_array = []
            
        init_array.append(f'\t\tself.{field} = 0')
        write_array.append(f'\t\tval |= self.{field} << {lsb}')
        read_array.append(f'\t\tself.{field} = (val & {mask_str}) >> {lsb}')
            
        print(str(line_num) + ':' + str(line))    
        line_num += 1
        if(not('[' in reg)):
            prev_reg = reg
            prev_addr = addr
    
    write_py_body()
    
    fh_py.write('\n')
    fh_py.write(f'class {block}:\n')
    fh_py.write(f'\tdef __init__(self,dev,base_addr):\n')
    fh_py.write('\n'.join(reg_array))
    fh_py.write('\n')
    fh_py.write('\tdef read_all(self):\n')
    # fh_py.write('\t\tattribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]\n')
    # fh_py.write('\t\tfor name in attribute_names:\n')
    # fh_py.write('\t\t\tgetattr(self,name).display()\n')
    fh_py.write('\t\tattributes = vars(self)\n')
    fh_py.write('\t\tfor name, value in attributes.items():\n')
    fh_py.write('\t\t\tif not name.startswith(\'__\') and not callable(value):\n')
    fh_py.write('\t\t\t\tgetattr(self,name).read()\n') 
    fh_py.write('\t\t\t\tgetattr(self,name).display()\n')      
        
    fh_csv.close()
    fh_py.close()
    
    
    