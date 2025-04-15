import csv
import os

mmap_path = '../regs'

fh_csv = open(f'{mmap_path}/fd32m0p_mmap.csv','r',newline='')
fh_py = open(f'header/fd32m0p.py','w',newline='')

# print(fh_csv)
# print(fh_py)

reader = csv.reader(fh_csv)

module_list = []

for line in reader:
    if(line[1] != '' and line[2] != 'module' and not(line[2] in module_list)):
        print(line[2])
        fh_py.write(f'import {line[2]}\n')
        module_list.append(line[2])

fh_py.write('\n')
fh_py.write(f'class fd32m0p:\n')
fh_py.write(f'\tdef __init__(self,dev):\n')

fh_csv.close()
fh_csv = open(f'{mmap_path}/fd32m0p_mmap.csv','r',newline='')
reader = csv.reader(fh_csv)      
  
for line in reader:
    if(line[1] != '' and line[2] != 'module'):
        print(line[2])
        fh_py.write(f'\t\tself.{line[1]} = {line[2]}.{line[2]}(dev,0x{line[0]})\n')
        module_list.append(line[2])
        
        
fh_py.write(f'\n# End of Class')

fh_csv.close()
fh_py.close()
    