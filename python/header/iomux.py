class PA_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+4
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+8
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_2:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+12
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_3:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+16
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_4:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+20
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_5:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+24
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_6:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+28
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_7:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+32
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_8:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+36
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_9:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+40
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_10:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+44
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0xF00) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_11:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+48
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_12:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+52
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_13:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+56
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_14:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+60
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_15:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+64
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_16:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+68
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_17:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+72
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_18:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+76
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_19:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+80
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_20:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+84
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_21:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+88
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_22:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+92
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0xF00) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_23:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+96
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0xF00) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_24:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+100
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_25:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+104
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_26:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+108
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PA_27:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+112
		self.output_en = 0
		self.input_en = 0
		self.drive_strength = 0
		self.slew_rate = 0
		self.pull_up = 0
		self.pull_down = 0
		self.hysteresis = 0
		self.sel = 0
		self.input_val = 0
	def write(self):
		val = 0
		val |= self.output_en << 0
		val |= self.input_en << 1
		val |= self.drive_strength << 2
		val |= self.slew_rate << 4
		val |= self.pull_up << 5
		val |= self.pull_down << 6
		val |= self.hysteresis << 7
		val |= self.sel << 8
		val |= self.input_val << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.output_en = (val & 0x01) >> 0
		self.input_en = (val & 0x02) >> 1
		self.drive_strength = (val & 0x0C) >> 2
		self.slew_rate = (val & 0x10) >> 4
		self.pull_up = (val & 0x20) >> 5
		self.pull_down = (val & 0x40) >> 6
		self.hysteresis = (val & 0x80) >> 7
		self.sel = (val & 0x700) >> 8
		self.input_val = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DUMMY:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+116
		self.dummy = 0
	def write(self):
		val = 0
		val |= self.dummy << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dummy = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class iomux:
	def __init__(self,dev,base_addr):
		self.PA_0 = PA_0(dev,base_addr)
		self.PA_1 = PA_1(dev,base_addr)
		self.PA_2 = PA_2(dev,base_addr)
		self.PA_3 = PA_3(dev,base_addr)
		self.PA_4 = PA_4(dev,base_addr)
		self.PA_5 = PA_5(dev,base_addr)
		self.PA_6 = PA_6(dev,base_addr)
		self.PA_7 = PA_7(dev,base_addr)
		self.PA_8 = PA_8(dev,base_addr)
		self.PA_9 = PA_9(dev,base_addr)
		self.PA_10 = PA_10(dev,base_addr)
		self.PA_11 = PA_11(dev,base_addr)
		self.PA_12 = PA_12(dev,base_addr)
		self.PA_13 = PA_13(dev,base_addr)
		self.PA_14 = PA_14(dev,base_addr)
		self.PA_15 = PA_15(dev,base_addr)
		self.PA_16 = PA_16(dev,base_addr)
		self.PA_17 = PA_17(dev,base_addr)
		self.PA_18 = PA_18(dev,base_addr)
		self.PA_19 = PA_19(dev,base_addr)
		self.PA_20 = PA_20(dev,base_addr)
		self.PA_21 = PA_21(dev,base_addr)
		self.PA_22 = PA_22(dev,base_addr)
		self.PA_23 = PA_23(dev,base_addr)
		self.PA_24 = PA_24(dev,base_addr)
		self.PA_25 = PA_25(dev,base_addr)
		self.PA_26 = PA_26(dev,base_addr)
		self.PA_27 = PA_27(dev,base_addr)
		self.DUMMY = DUMMY(dev,base_addr)
	def read_all(self):
		attributes = vars(self)
		for name, value in attributes.items():
			if not name.startswith('__') and not callable(value):
				getattr(self,name).read()
				getattr(self,name).display()
