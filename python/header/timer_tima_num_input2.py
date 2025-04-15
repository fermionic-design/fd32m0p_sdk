class DESC:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+0
		self.module_type = 0
		self.modue_subtype = 0
		self.major_rev = 0
		self.minor_rev = 0
	def write(self):
		val = 0
		val |= self.module_type << 0
		val |= self.modue_subtype << 8
		val |= self.major_rev << 16
		val |= self.minor_rev << 20
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.module_type = (val & 0xFF) >> 0
		self.modue_subtype = (val & 0xFF00) >> 8
		self.major_rev = (val & 0xF0000) >> 16
		self.minor_rev = (val & 0xF00000) >> 20
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PWR_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+4
		self.pwr_en = 0
		self.pwr_en_key = 0
	def write(self):
		val = 0
		val |= self.pwr_en << 0
		val |= self.pwr_en_key << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.pwr_en = (val & 0x01) >> 0
		self.pwr_en_key = (val & 0xFF000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class RST_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+8
		self.rst = 0
		self.rst_sts_clr = 0
		self.rst_key = 0
	def write(self):
		val = 0
		val |= self.rst << 0
		val |= self.rst_sts_clr << 1
		val |= self.rst_key << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rst = (val & 0x01) >> 0
		self.rst_sts_clr = (val & 0x02) >> 1
		self.rst_key = (val & 0xFF000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class RST_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+12
		self.rst_sts = 0
	def write(self):
		val = 0
		val |= self.rst_sts << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rst_sts = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CLK_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+16
		self.clk_en = 0
	def write(self):
		val = 0
		val |= self.clk_en << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.clk_en = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+20
		self.intr_first = 0
	def write(self):
		val = 0
		val |= self.intr_first << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.intr_first = (val & 0x3F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EVENT:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+24
		self.ctr_zero = 0
		self.ctr_load = 0
		self.ccd_0 = 0
		self.ccu_0 = 0
		self.ccd_1 = 0
		self.ccu_1 = 0
		self.ccd_2 = 0
		self.ccu_2 = 0
		self.ccd_3 = 0
		self.ccu_3 = 0
		self.ccd_4 = 0
		self.ccu_4 = 0
		self.ccd_5 = 0
		self.ccu_5 = 0
		self.fault = 0
		self.trig_ov = 0
		self.rctr_zero = 0
		self.qei_ctr_dc = 0
		self.qei_err = 0
	def write(self):
		val = 0
		val |= self.ctr_zero << 0
		val |= self.ctr_load << 1
		val |= self.ccd_0 << 2
		val |= self.ccu_0 << 3
		val |= self.ccd_1 << 4
		val |= self.ccu_1 << 5
		val |= self.ccd_2 << 6
		val |= self.ccu_2 << 7
		val |= self.ccd_3 << 8
		val |= self.ccu_3 << 9
		val |= self.ccd_4 << 10
		val |= self.ccu_4 << 11
		val |= self.ccd_5 << 12
		val |= self.ccu_5 << 13
		val |= self.fault << 14
		val |= self.trig_ov << 15
		val |= self.rctr_zero << 16
		val |= self.qei_ctr_dc << 17
		val |= self.qei_err << 18
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.ctr_zero = (val & 0x01) >> 0
		self.ctr_load = (val & 0x02) >> 1
		self.ccd_0 = (val & 0x04) >> 2
		self.ccu_0 = (val & 0x08) >> 3
		self.ccd_1 = (val & 0x10) >> 4
		self.ccu_1 = (val & 0x20) >> 5
		self.ccd_2 = (val & 0x40) >> 6
		self.ccu_2 = (val & 0x80) >> 7
		self.ccd_3 = (val & 0x100) >> 8
		self.ccu_3 = (val & 0x200) >> 9
		self.ccd_4 = (val & 0x400) >> 10
		self.ccu_4 = (val & 0x800) >> 11
		self.ccd_5 = (val & 0x1000) >> 12
		self.ccu_5 = (val & 0x2000) >> 13
		self.fault = (val & 0x4000) >> 14
		self.trig_ov = (val & 0x8000) >> 15
		self.rctr_zero = (val & 0x10000) >> 16
		self.qei_ctr_dc = (val & 0x20000) >> 17
		self.qei_err = (val & 0x40000) >> 18
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EN_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+28
		self.ctr_zero_en = 0
		self.ctr_load_en = 0
		self.ccd_0_en = 0
		self.ccu_0_en = 0
		self.ccd_1_en = 0
		self.ccu_1_en = 0
		self.ccd_2_en = 0
		self.ccu_2_en = 0
		self.ccd_3_en = 0
		self.ccu_3_en = 0
		self.ccd_4_en = 0
		self.ccu_4_en = 0
		self.ccd_5_en = 0
		self.ccu_5_en = 0
		self.fault_en = 0
		self.trig_ov_en = 0
	def write(self):
		val = 0
		val |= self.ctr_zero_en << 0
		val |= self.ctr_load_en << 1
		val |= self.ccd_0_en << 2
		val |= self.ccu_0_en << 3
		val |= self.ccd_1_en << 4
		val |= self.ccu_1_en << 5
		val |= self.ccd_2_en << 6
		val |= self.ccu_2_en << 7
		val |= self.ccd_3_en << 8
		val |= self.ccu_3_en << 9
		val |= self.ccd_4_en << 10
		val |= self.ccu_4_en << 11
		val |= self.ccd_5_en << 12
		val |= self.ccu_5_en << 13
		val |= self.fault_en << 14
		val |= self.trig_ov_en << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.ctr_zero_en = (val & 0x01) >> 0
		self.ctr_load_en = (val & 0x02) >> 1
		self.ccd_0_en = (val & 0x04) >> 2
		self.ccu_0_en = (val & 0x08) >> 3
		self.ccd_1_en = (val & 0x10) >> 4
		self.ccu_1_en = (val & 0x20) >> 5
		self.ccd_2_en = (val & 0x40) >> 6
		self.ccu_2_en = (val & 0x80) >> 7
		self.ccd_3_en = (val & 0x100) >> 8
		self.ccu_3_en = (val & 0x200) >> 9
		self.ccd_4_en = (val & 0x400) >> 10
		self.ccu_4_en = (val & 0x800) >> 11
		self.ccd_5_en = (val & 0x1000) >> 12
		self.ccu_5_en = (val & 0x2000) >> 13
		self.fault_en = (val & 0x4000) >> 14
		self.trig_ov_en = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EN_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+32
		self.rctr_zero_en = 0
		self.qei_ctr_dc_en = 0
		self.qei_err_en = 0
	def write(self):
		val = 0
		val |= self.rctr_zero_en << 0
		val |= self.qei_ctr_dc_en << 1
		val |= self.qei_err_en << 2
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rctr_zero_en = (val & 0x01) >> 0
		self.qei_ctr_dc_en = (val & 0x02) >> 1
		self.qei_err_en = (val & 0x04) >> 2
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_NMI_EN_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+36
		self.ctr_zero_nmi_en = 0
		self.ctr_load_nmi_en = 0
		self.ccd_0_nmi_en = 0
		self.ccu_0_nmi_en = 0
		self.ccd_1_nmi_en = 0
		self.ccu_1_nmi_en = 0
		self.ccd_2_nmi_en = 0
		self.ccu_2_nmi_en = 0
		self.ccd_3_nmi_en = 0
		self.ccu_3_nmi_en = 0
		self.ccd_4_nmi_en = 0
		self.ccu_4_nmi_en = 0
		self.ccd_5_nmi_en = 0
		self.ccu_5_nmi_en = 0
		self.fault_nmi_en = 0
		self.trig_ov_nmi_en = 0
	def write(self):
		val = 0
		val |= self.ctr_zero_nmi_en << 0
		val |= self.ctr_load_nmi_en << 1
		val |= self.ccd_0_nmi_en << 2
		val |= self.ccu_0_nmi_en << 3
		val |= self.ccd_1_nmi_en << 4
		val |= self.ccu_1_nmi_en << 5
		val |= self.ccd_2_nmi_en << 6
		val |= self.ccu_2_nmi_en << 7
		val |= self.ccd_3_nmi_en << 8
		val |= self.ccu_3_nmi_en << 9
		val |= self.ccd_4_nmi_en << 10
		val |= self.ccu_4_nmi_en << 11
		val |= self.ccd_5_nmi_en << 12
		val |= self.ccu_5_nmi_en << 13
		val |= self.fault_nmi_en << 14
		val |= self.trig_ov_nmi_en << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.ctr_zero_nmi_en = (val & 0x01) >> 0
		self.ctr_load_nmi_en = (val & 0x02) >> 1
		self.ccd_0_nmi_en = (val & 0x04) >> 2
		self.ccu_0_nmi_en = (val & 0x08) >> 3
		self.ccd_1_nmi_en = (val & 0x10) >> 4
		self.ccu_1_nmi_en = (val & 0x20) >> 5
		self.ccd_2_nmi_en = (val & 0x40) >> 6
		self.ccu_2_nmi_en = (val & 0x80) >> 7
		self.ccd_3_nmi_en = (val & 0x100) >> 8
		self.ccu_3_nmi_en = (val & 0x200) >> 9
		self.ccd_4_nmi_en = (val & 0x400) >> 10
		self.ccu_4_nmi_en = (val & 0x800) >> 11
		self.ccd_5_nmi_en = (val & 0x1000) >> 12
		self.ccu_5_nmi_en = (val & 0x2000) >> 13
		self.fault_nmi_en = (val & 0x4000) >> 14
		self.trig_ov_nmi_en = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_NMI_EN_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+40
		self.rctr_zero_nmi_en = 0
		self.qei_ctr_dc_nmi_en = 0
		self.qei_err_nmi_en = 0
	def write(self):
		val = 0
		val |= self.rctr_zero_nmi_en << 0
		val |= self.qei_ctr_dc_nmi_en << 1
		val |= self.qei_err_nmi_en << 2
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rctr_zero_nmi_en = (val & 0x01) >> 0
		self.qei_ctr_dc_nmi_en = (val & 0x02) >> 1
		self.qei_err_nmi_en = (val & 0x04) >> 2
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class EVENT_EN_0_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+44
		self.ctr_zero_event_en_0 = 0
		self.ctr_load_event_en_0 = 0
		self.ccd_0_event_en_0 = 0
		self.ccu_0_event_en_0 = 0
		self.ccd_1_event_en_0 = 0
		self.ccu_1_event_en_0 = 0
		self.ccd_2_event_en_0 = 0
		self.ccu_2_event_en_0 = 0
		self.ccd_3_event_en_0 = 0
		self.ccu_3_event_en_0 = 0
		self.ccd_4_event_en_0 = 0
		self.ccu_4_event_en_0 = 0
		self.ccd_5_event_en_0 = 0
		self.ccu_5_event_en_0 = 0
		self.fault_event_en_0 = 0
		self.trig_ov_event_en_0 = 0
	def write(self):
		val = 0
		val |= self.ctr_zero_event_en_0 << 0
		val |= self.ctr_load_event_en_0 << 1
		val |= self.ccd_0_event_en_0 << 2
		val |= self.ccu_0_event_en_0 << 3
		val |= self.ccd_1_event_en_0 << 4
		val |= self.ccu_1_event_en_0 << 5
		val |= self.ccd_2_event_en_0 << 6
		val |= self.ccu_2_event_en_0 << 7
		val |= self.ccd_3_event_en_0 << 8
		val |= self.ccu_3_event_en_0 << 9
		val |= self.ccd_4_event_en_0 << 10
		val |= self.ccu_4_event_en_0 << 11
		val |= self.ccd_5_event_en_0 << 12
		val |= self.ccu_5_event_en_0 << 13
		val |= self.fault_event_en_0 << 14
		val |= self.trig_ov_event_en_0 << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.ctr_zero_event_en_0 = (val & 0x01) >> 0
		self.ctr_load_event_en_0 = (val & 0x02) >> 1
		self.ccd_0_event_en_0 = (val & 0x04) >> 2
		self.ccu_0_event_en_0 = (val & 0x08) >> 3
		self.ccd_1_event_en_0 = (val & 0x10) >> 4
		self.ccu_1_event_en_0 = (val & 0x20) >> 5
		self.ccd_2_event_en_0 = (val & 0x40) >> 6
		self.ccu_2_event_en_0 = (val & 0x80) >> 7
		self.ccd_3_event_en_0 = (val & 0x100) >> 8
		self.ccu_3_event_en_0 = (val & 0x200) >> 9
		self.ccd_4_event_en_0 = (val & 0x400) >> 10
		self.ccu_4_event_en_0 = (val & 0x800) >> 11
		self.ccd_5_event_en_0 = (val & 0x1000) >> 12
		self.ccu_5_event_en_0 = (val & 0x2000) >> 13
		self.fault_event_en_0 = (val & 0x4000) >> 14
		self.trig_ov_event_en_0 = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class EVENT_EN_0_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+48
		self.rctr_zero_event_en_0 = 0
		self.qei_ctr_dc_event_en_0 = 0
		self.qei_err_event_en_0 = 0
	def write(self):
		val = 0
		val |= self.rctr_zero_event_en_0 << 0
		val |= self.qei_ctr_dc_event_en_0 << 1
		val |= self.qei_err_event_en_0 << 2
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rctr_zero_event_en_0 = (val & 0x01) >> 0
		self.qei_ctr_dc_event_en_0 = (val & 0x02) >> 1
		self.qei_err_event_en_0 = (val & 0x04) >> 2
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class EVENT_EN_1_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+52
		self.ctr_zero_event_en_1 = 0
		self.ctr_load_event_en_1 = 0
		self.ccd_0_event_en_1 = 0
		self.ccu_0_event_en_1 = 0
		self.ccd_1_event_en_1 = 0
		self.ccu_1_event_en_1 = 0
		self.ccd_2_event_en_1 = 0
		self.ccu_2_event_en_1 = 0
		self.ccd_3_event_en_1 = 0
		self.ccu_3_event_en_1 = 0
		self.ccd_4_event_en_1 = 0
		self.ccu_4_event_en_1 = 0
		self.ccd_5_event_en_1 = 0
		self.ccu_5_event_en_1 = 0
		self.fault_event_en_1 = 0
		self.trig_ov_event_en_1 = 0
	def write(self):
		val = 0
		val |= self.ctr_zero_event_en_1 << 0
		val |= self.ctr_load_event_en_1 << 1
		val |= self.ccd_0_event_en_1 << 2
		val |= self.ccu_0_event_en_1 << 3
		val |= self.ccd_1_event_en_1 << 4
		val |= self.ccu_1_event_en_1 << 5
		val |= self.ccd_2_event_en_1 << 6
		val |= self.ccu_2_event_en_1 << 7
		val |= self.ccd_3_event_en_1 << 8
		val |= self.ccu_3_event_en_1 << 9
		val |= self.ccd_4_event_en_1 << 10
		val |= self.ccu_4_event_en_1 << 11
		val |= self.ccd_5_event_en_1 << 12
		val |= self.ccu_5_event_en_1 << 13
		val |= self.fault_event_en_1 << 14
		val |= self.trig_ov_event_en_1 << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.ctr_zero_event_en_1 = (val & 0x01) >> 0
		self.ctr_load_event_en_1 = (val & 0x02) >> 1
		self.ccd_0_event_en_1 = (val & 0x04) >> 2
		self.ccu_0_event_en_1 = (val & 0x08) >> 3
		self.ccd_1_event_en_1 = (val & 0x10) >> 4
		self.ccu_1_event_en_1 = (val & 0x20) >> 5
		self.ccd_2_event_en_1 = (val & 0x40) >> 6
		self.ccu_2_event_en_1 = (val & 0x80) >> 7
		self.ccd_3_event_en_1 = (val & 0x100) >> 8
		self.ccu_3_event_en_1 = (val & 0x200) >> 9
		self.ccd_4_event_en_1 = (val & 0x400) >> 10
		self.ccu_4_event_en_1 = (val & 0x800) >> 11
		self.ccd_5_event_en_1 = (val & 0x1000) >> 12
		self.ccu_5_event_en_1 = (val & 0x2000) >> 13
		self.fault_event_en_1 = (val & 0x4000) >> 14
		self.trig_ov_event_en_1 = (val & 0x8000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class EVENT_EN_1_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+56
		self.rctr_zero_event_en_1 = 0
		self.qei_ctr_dc_event_en_1 = 0
		self.qei_err_event_en_1 = 0
	def write(self):
		val = 0
		val |= self.rctr_zero_event_en_1 << 0
		val |= self.qei_ctr_dc_event_en_1 << 1
		val |= self.qei_err_event_en_1 << 2
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rctr_zero_event_en_1 = (val & 0x01) >> 0
		self.qei_ctr_dc_event_en_1 = (val & 0x02) >> 1
		self.qei_err_event_en_1 = (val & 0x04) >> 2
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_SW_SET:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+60
		self.ctr_zero_sw_set = 0
		self.ctr_load_sw_set = 0
		self.ccd_0_sw_set = 0
		self.ccu_0_sw_set = 0
		self.ccd_1_sw_set = 0
		self.ccu_1_sw_set = 0
		self.ccd_2_sw_set = 0
		self.ccu_2_sw_set = 0
		self.ccd_3_sw_set = 0
		self.ccu_3_sw_set = 0
		self.ccd_4_sw_set = 0
		self.ccu_4_sw_set = 0
		self.ccd_5_sw_set = 0
		self.ccu_5_sw_set = 0
		self.fault_sw_set = 0
		self.trig_ov_sw_set = 0
		self.rctr_zero_sw_set = 0
		self.qei_ctr_dc_sw_set = 0
		self.qei_err_sw_set = 0
	def write(self):
		val = 0
		val |= self.ctr_zero_sw_set << 0
		val |= self.ctr_load_sw_set << 1
		val |= self.ccd_0_sw_set << 2
		val |= self.ccu_0_sw_set << 3
		val |= self.ccd_1_sw_set << 4
		val |= self.ccu_1_sw_set << 5
		val |= self.ccd_2_sw_set << 6
		val |= self.ccu_2_sw_set << 7
		val |= self.ccd_3_sw_set << 8
		val |= self.ccu_3_sw_set << 9
		val |= self.ccd_4_sw_set << 10
		val |= self.ccu_4_sw_set << 11
		val |= self.ccd_5_sw_set << 12
		val |= self.ccu_5_sw_set << 13
		val |= self.fault_sw_set << 14
		val |= self.trig_ov_sw_set << 15
		val |= self.rctr_zero_sw_set << 16
		val |= self.qei_ctr_dc_sw_set << 17
		val |= self.qei_err_sw_set << 18
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.ctr_zero_sw_set = (val & 0x01) >> 0
		self.ctr_load_sw_set = (val & 0x02) >> 1
		self.ccd_0_sw_set = (val & 0x04) >> 2
		self.ccu_0_sw_set = (val & 0x08) >> 3
		self.ccd_1_sw_set = (val & 0x10) >> 4
		self.ccu_1_sw_set = (val & 0x20) >> 5
		self.ccd_2_sw_set = (val & 0x40) >> 6
		self.ccu_2_sw_set = (val & 0x80) >> 7
		self.ccd_3_sw_set = (val & 0x100) >> 8
		self.ccu_3_sw_set = (val & 0x200) >> 9
		self.ccd_4_sw_set = (val & 0x400) >> 10
		self.ccu_4_sw_set = (val & 0x800) >> 11
		self.ccd_5_sw_set = (val & 0x1000) >> 12
		self.ccu_5_sw_set = (val & 0x2000) >> 13
		self.fault_sw_set = (val & 0x4000) >> 14
		self.trig_ov_sw_set = (val & 0x8000) >> 15
		self.rctr_zero_sw_set = (val & 0x10000) >> 16
		self.qei_ctr_dc_sw_set = (val & 0x20000) >> 17
		self.qei_err_sw_set = (val & 0x40000) >> 18
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class EVENT_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+64
		self.chan_id0 = 0
		self.chan_id1 = 0
	def write(self):
		val = 0
		val |= self.chan_id0 << 0
		val |= self.chan_id1 << 4
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.chan_id0 = (val & 0x0F) >> 0
		self.chan_id1 = (val & 0xF0) >> 4
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CLK_CONFIG:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+68
		self.clk_sel = 0
		self.clk_div = 0
	def write(self):
		val = 0
		val |= self.clk_sel << 0
		val |= self.clk_div << 2
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.clk_sel = (val & 0x03) >> 0
		self.clk_div = (val & 0x1FFC) >> 2
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class TRIG_IN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+72
		self.trig_en = 0
		self.trig_sel = 0
	def write(self):
		val = 0
		val |= self.trig_en << 0
		val |= self.trig_sel << 1
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.trig_en = (val & 0x01) >> 0
		self.trig_sel = (val & 0x3E) >> 1
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class TRIG_OUT:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+76
		self.trig_out_en = 0
		self.trig_sw_en = 0
		self.trig_hw_en = 0
		self.trig_hw_sel = 0
	def write(self):
		val = 0
		val |= self.trig_out_en << 0
		val |= self.trig_sw_en << 1
		val |= self.trig_hw_en << 2
		val |= self.trig_hw_sel << 3
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.trig_out_en = (val & 0x01) >> 0
		self.trig_sw_en = (val & 0x02) >> 1
		self.trig_hw_en = (val & 0x04) >> 2
		self.trig_hw_sel = (val & 0x78) >> 3
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INPUT_FILTER_CC_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+80
		self.filter_en_0 = 0
		self.is_consecutive_prd_0 = 0
		self.filter_period_0 = 0
	def write(self):
		val = 0
		val |= self.filter_en_0 << 0
		val |= self.is_consecutive_prd_0 << 1
		val |= self.filter_period_0 << 2
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.filter_en_0 = (val & 0x01) >> 0
		self.is_consecutive_prd_0 = (val & 0x02) >> 1
		self.filter_period_0 = (val & 0x0C) >> 2
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INPUT_FILTER_CC_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+84
		self.filter_en_1 = 0
		self.is_consecutive_prd_1 = 0
		self.filter_period_1 = 0
	def write(self):
		val = 0
		val |= self.filter_en_1 << 0
		val |= self.is_consecutive_prd_1 << 1
		val |= self.filter_period_1 << 2
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.filter_en_1 = (val & 0x01) >> 0
		self.is_consecutive_prd_1 = (val & 0x02) >> 1
		self.filter_period_1 = (val & 0x0C) >> 2
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INPUT_CC_0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+88
		self.input_sel_0 = 0
		self.input_inv_0 = 0
	def write(self):
		val = 0
		val |= self.input_sel_0 << 0
		val |= self.input_inv_0 << 4
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.input_sel_0 = (val & 0x0F) >> 0
		self.input_inv_0 = (val & 0x10) >> 4
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INPUT_CC_1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+92
		self.input_sel_1 = 0
		self.input_inv_1 = 0
	def write(self):
		val = 0
		val |= self.input_sel_1 << 0
		val |= self.input_inv_1 << 4
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.input_sel_1 = (val & 0x0F) >> 0
		self.input_inv_1 = (val & 0x10) >> 4
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CC0_CMN_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+96
		self.is_capture_0 = 0
		self.cc2d_sel_0 = 0
		self.cc2u_sel_0 = 0
		self.suppress_coc_event_gen_0 = 0
	def write(self):
		val = 0
		val |= self.is_capture_0 << 0
		val |= self.cc2d_sel_0 << 1
		val |= self.cc2u_sel_0 << 4
		val |= self.suppress_coc_event_gen_0 << 7
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.is_capture_0 = (val & 0x01) >> 0
		self.cc2d_sel_0 = (val & 0x0E) >> 1
		self.cc2u_sel_0 = (val & 0x70) >> 4
		self.suppress_coc_event_gen_0 = (val & 0x80) >> 7
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CC1_CMN_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+100
		self.is_capture_1 = 0
		self.cc2d_sel_1 = 0
		self.cc2u_sel_1 = 0
		self.suppress_coc_event_gen_1 = 0
	def write(self):
		val = 0
		val |= self.is_capture_1 << 0
		val |= self.cc2d_sel_1 << 1
		val |= self.cc2u_sel_1 << 4
		val |= self.suppress_coc_event_gen_1 << 7
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.is_capture_1 = (val & 0x01) >> 0
		self.cc2d_sel_1 = (val & 0x0E) >> 1
		self.cc2u_sel_1 = (val & 0x70) >> 4
		self.suppress_coc_event_gen_1 = (val & 0x80) >> 7
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CC0_CAPTURE_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+104
		self.cap_cond_0 = 0
		self.load_cond_0 = 0
		self.zero_cond_0 = 0
		self.adv_cond_0 = 0
		self.cap_val_0 = 0
	def write(self):
		val = 0
		val |= self.cap_cond_0 << 0
		val |= self.load_cond_0 << 2
		val |= self.zero_cond_0 << 4
		val |= self.adv_cond_0 << 6
		val |= self.cap_val_0 << 9
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.cap_cond_0 = (val & 0x03) >> 0
		self.load_cond_0 = (val & 0x0C) >> 2
		self.zero_cond_0 = (val & 0x30) >> 4
		self.adv_cond_0 = (val & 0x1C0) >> 6
		self.cap_val_0 = (val & 0x1FFFE00) >> 9
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CC1_CAPTURE_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+108
		self.cap_cond_1 = 0
		self.load_cond_1 = 0
		self.zero_cond_1 = 0
		self.adv_cond_1 = 0
		self.cap_val_1 = 0
	def write(self):
		val = 0
		val |= self.cap_cond_1 << 0
		val |= self.load_cond_1 << 2
		val |= self.zero_cond_1 << 4
		val |= self.adv_cond_1 << 6
		val |= self.cap_val_1 << 9
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.cap_cond_1 = (val & 0x03) >> 0
		self.load_cond_1 = (val & 0x0C) >> 2
		self.zero_cond_1 = (val & 0x30) >> 4
		self.adv_cond_1 = (val & 0x1C0) >> 6
		self.cap_val_1 = (val & 0x1FFFE00) >> 9
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CC0_COMPARE_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+112
		self.comp_val_0 = 0
		self.comp_val_update_method_0 = 0
		self.ccact_update_method_0 = 0
	def write(self):
		val = 0
		val |= self.comp_val_0 << 0
		val |= self.comp_val_update_method_0 << 16
		val |= self.ccact_update_method_0 << 19
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.comp_val_0 = (val & 0xFFFF) >> 0
		self.comp_val_update_method_0 = (val & 0x70000) >> 16
		self.ccact_update_method_0 = (val & 0x380000) >> 19
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CC1_COMPARE_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+116
		self.comp_val_1 = 0
		self.comp_val_update_method_1 = 0
		self.ccact_update_method_1 = 0
	def write(self):
		val = 0
		val |= self.comp_val_1 << 0
		val |= self.comp_val_update_method_1 << 16
		val |= self.ccact_update_method_1 << 19
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.comp_val_1 = (val & 0xFFFF) >> 0
		self.comp_val_update_method_1 = (val & 0x70000) >> 16
		self.ccact_update_method_1 = (val & 0x380000) >> 19
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CC2_CMN_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+120
		self.is_capture_2 = 0
		self.cc2d_sel_2 = 0
		self.cc2u_sel_2 = 0
		self.suppress_coc_event_gen_2 = 0
	def write(self):
		val = 0
		val |= self.is_capture_2 << 0
		val |= self.cc2d_sel_2 << 1
		val |= self.cc2u_sel_2 << 4
		val |= self.suppress_coc_event_gen_2 << 7
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.is_capture_2 = (val & 0x01) >> 0
		self.cc2d_sel_2 = (val & 0x0E) >> 1
		self.cc2u_sel_2 = (val & 0x70) >> 4
		self.suppress_coc_event_gen_2 = (val & 0x80) >> 7
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CC3_CMN_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+124
		self.is_capture_3 = 0
		self.cc2d_sel_3 = 0
		self.cc2u_sel_3 = 0
		self.suppress_coc_event_gen_3 = 0
	def write(self):
		val = 0
		val |= self.is_capture_3 << 0
		val |= self.cc2d_sel_3 << 1
		val |= self.cc2u_sel_3 << 4
		val |= self.suppress_coc_event_gen_3 << 7
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.is_capture_3 = (val & 0x01) >> 0
		self.cc2d_sel_3 = (val & 0x0E) >> 1
		self.cc2u_sel_3 = (val & 0x70) >> 4
		self.suppress_coc_event_gen_3 = (val & 0x80) >> 7
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CC2_COMPARE_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+128
		self.comp_val_2 = 0
		self.comp_val_update_method_2 = 0
		self.ccact_update_method_2 = 0
	def write(self):
		val = 0
		val |= self.comp_val_2 << 0
		val |= self.comp_val_update_method_2 << 16
		val |= self.ccact_update_method_2 << 19
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.comp_val_2 = (val & 0xFFFF) >> 0
		self.comp_val_update_method_2 = (val & 0x70000) >> 16
		self.ccact_update_method_2 = (val & 0x380000) >> 19
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CC3_COMPARE_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+132
		self.comp_val_3 = 0
		self.comp_val_update_method_3 = 0
		self.ccact_update_method_3 = 0
	def write(self):
		val = 0
		val |= self.comp_val_3 << 0
		val |= self.comp_val_update_method_3 << 16
		val |= self.ccact_update_method_3 << 19
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.comp_val_3 = (val & 0xFFFF) >> 0
		self.comp_val_update_method_3 = (val & 0x70000) >> 16
		self.ccact_update_method_3 = (val & 0x380000) >> 19
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CC0_CC_PWM_CFG:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+136
		self.cc_out_cc2d_0 = 0
		self.cc_out_cc2u_0 = 0
		self.cc_out_ccd_0 = 0
		self.cc_out_ccu_0 = 0
		self.cc_out_load_0 = 0
		self.cc_out_zero_0 = 0
		self.cc_out_fault_entry_0 = 0
		self.cc_out_fault_exit_0 = 0
	def write(self):
		val = 0
		val |= self.cc_out_cc2d_0 << 0
		val |= self.cc_out_cc2u_0 << 2
		val |= self.cc_out_ccd_0 << 4
		val |= self.cc_out_ccu_0 << 6
		val |= self.cc_out_load_0 << 8
		val |= self.cc_out_zero_0 << 10
		val |= self.cc_out_fault_entry_0 << 12
		val |= self.cc_out_fault_exit_0 << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.cc_out_cc2d_0 = (val & 0x03) >> 0
		self.cc_out_cc2u_0 = (val & 0x0C) >> 2
		self.cc_out_ccd_0 = (val & 0x30) >> 4
		self.cc_out_ccu_0 = (val & 0xC0) >> 6
		self.cc_out_load_0 = (val & 0x300) >> 8
		self.cc_out_zero_0 = (val & 0xC00) >> 10
		self.cc_out_fault_entry_0 = (val & 0x7000) >> 12
		self.cc_out_fault_exit_0 = (val & 0x38000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CC1_CC_PWM_CFG:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+140
		self.cc_out_cc2d_1 = 0
		self.cc_out_cc2u_1 = 0
		self.cc_out_ccd_1 = 0
		self.cc_out_ccu_1 = 0
		self.cc_out_load_1 = 0
		self.cc_out_zero_1 = 0
		self.cc_out_fault_entry_1 = 0
		self.cc_out_fault_exit_1 = 0
	def write(self):
		val = 0
		val |= self.cc_out_cc2d_1 << 0
		val |= self.cc_out_cc2u_1 << 2
		val |= self.cc_out_ccd_1 << 4
		val |= self.cc_out_ccu_1 << 6
		val |= self.cc_out_load_1 << 8
		val |= self.cc_out_zero_1 << 10
		val |= self.cc_out_fault_entry_1 << 12
		val |= self.cc_out_fault_exit_1 << 15
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.cc_out_cc2d_1 = (val & 0x03) >> 0
		self.cc_out_cc2u_1 = (val & 0x0C) >> 2
		self.cc_out_ccd_1 = (val & 0x30) >> 4
		self.cc_out_ccu_1 = (val & 0xC0) >> 6
		self.cc_out_load_1 = (val & 0x300) >> 8
		self.cc_out_zero_1 = (val & 0xC00) >> 10
		self.cc_out_fault_entry_1 = (val & 0x7000) >> 12
		self.cc_out_fault_exit_1 = (val & 0x38000) >> 15
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DEADBAND_CFG:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+144
		self.db_mode = 0
		self.db_rise_delay = 0
		self.db_fall_delay = 0
	def write(self):
		val = 0
		val |= self.db_mode << 0
		val |= self.db_rise_delay << 1
		val |= self.db_fall_delay << 13
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.db_mode = (val & 0x01) >> 0
		self.db_rise_delay = (val & 0x1FFE) >> 1
		self.db_fall_delay = (val & 0x1FFE000) >> 13
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CC0_OUTPUT_CTL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+148
		self.cc_out_sel_0 = 0
		self.cc_out_inv_0 = 0
		self.cc_out_val_init_0 = 0
	def write(self):
		val = 0
		val |= self.cc_out_sel_0 << 0
		val |= self.cc_out_inv_0 << 4
		val |= self.cc_out_val_init_0 << 5
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.cc_out_sel_0 = (val & 0x0F) >> 0
		self.cc_out_inv_0 = (val & 0x10) >> 4
		self.cc_out_val_init_0 = (val & 0x20) >> 5
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CC1_OUTPUT_CTL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+152
		self.cc_out_sel_1 = 0
		self.cc_out_inv_1 = 0
		self.cc_out_val_init_1 = 0
	def write(self):
		val = 0
		val |= self.cc_out_sel_1 << 0
		val |= self.cc_out_inv_1 << 4
		val |= self.cc_out_val_init_1 << 5
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.cc_out_sel_1 = (val & 0x0F) >> 0
		self.cc_out_inv_1 = (val & 0x10) >> 4
		self.cc_out_val_init_1 = (val & 0x20) >> 5
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CC0_SW_FORCE:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+156
		self.cc_out_sw_force_0 = 0
		self.cc_cmpl_out_sw_force_0 = 0
	def write(self):
		val = 0
		val |= self.cc_out_sw_force_0 << 0
		val |= self.cc_cmpl_out_sw_force_0 << 2
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.cc_out_sw_force_0 = (val & 0x03) >> 0
		self.cc_cmpl_out_sw_force_0 = (val & 0x0C) >> 2
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CC1_SW_FORCE:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+160
		self.cc_out_sw_force_1 = 0
		self.cc_cmpl_out_sw_force_1 = 0
	def write(self):
		val = 0
		val |= self.cc_out_sw_force_1 << 0
		val |= self.cc_cmpl_out_sw_force_1 << 2
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.cc_out_sw_force_1 = (val & 0x03) >> 0
		self.cc_cmpl_out_sw_force_1 = (val & 0x0C) >> 2
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class FAULT_IN_CTL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+164
		self.fault_filter_en = 0
		self.fault_is_consecutive_period = 0
		self.fault_filter_period = 0
	def write(self):
		val = 0
		val |= self.fault_filter_en << 0
		val |= self.fault_is_consecutive_period << 1
		val |= self.fault_filter_period << 2
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.fault_filter_en = (val & 0x01) >> 0
		self.fault_is_consecutive_period = (val & 0x02) >> 1
		self.fault_filter_period = (val & 0x0C) >> 2
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class FAULT_SRC_CTL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+168
		self.fault_ext2_en = 0
		self.fault_ext1_en = 0
		self.fault_ext0_en = 0
		self.fault_comp2_en = 0
		self.fault_comp1_en = 0
		self.fault_comp0_en = 0
		self.fault_sys_clk_en = 0
		self.fault_ext2_act_val = 0
		self.fault_ext1_act_val = 0
		self.fault_ext0_act_val = 0
		self.fault_comp2_act_val = 0
		self.fault_comp1_act_val = 0
		self.fault_comp0_act_val = 0
		self.trig_is_fault = 0
		self.fault_in_en = 0
		self.fault_dependent_on_input = 0
		self.fault_latch_sel = 0
	def write(self):
		val = 0
		val |= self.fault_ext2_en << 0
		val |= self.fault_ext1_en << 1
		val |= self.fault_ext0_en << 2
		val |= self.fault_comp2_en << 3
		val |= self.fault_comp1_en << 4
		val |= self.fault_comp0_en << 5
		val |= self.fault_sys_clk_en << 6
		val |= self.fault_ext2_act_val << 7
		val |= self.fault_ext1_act_val << 8
		val |= self.fault_ext0_act_val << 9
		val |= self.fault_comp2_act_val << 10
		val |= self.fault_comp1_act_val << 11
		val |= self.fault_comp0_act_val << 12
		val |= self.trig_is_fault << 13
		val |= self.fault_in_en << 14
		val |= self.fault_dependent_on_input << 15
		val |= self.fault_latch_sel << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.fault_ext2_en = (val & 0x01) >> 0
		self.fault_ext1_en = (val & 0x02) >> 1
		self.fault_ext0_en = (val & 0x04) >> 2
		self.fault_comp2_en = (val & 0x08) >> 3
		self.fault_comp1_en = (val & 0x10) >> 4
		self.fault_comp0_en = (val & 0x20) >> 5
		self.fault_sys_clk_en = (val & 0x40) >> 6
		self.fault_ext2_act_val = (val & 0x80) >> 7
		self.fault_ext1_act_val = (val & 0x100) >> 8
		self.fault_ext0_act_val = (val & 0x200) >> 9
		self.fault_comp2_act_val = (val & 0x400) >> 10
		self.fault_comp1_act_val = (val & 0x800) >> 11
		self.fault_comp0_act_val = (val & 0x1000) >> 12
		self.trig_is_fault = (val & 0x2000) >> 13
		self.fault_in_en = (val & 0x4000) >> 14
		self.fault_dependent_on_input = (val & 0x8000) >> 15
		self.fault_latch_sel = (val & 0x30000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CTR_CTL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+172
		self.ctr_en = 0
		self.repeat_mode = 0
		self.count_mode = 0
		self.ctr_zero_ctrl = 0
		self.ctr_load_ctrl = 0
		self.ctr_adv_ctrl = 0
		self.suppress_ctr_event_gen = 0
		self.pl_en = 0
		self.ctr_during_fault = 0
		self.ctr_exit_fault = 0
		self.ctr_after_debug = 0
	def write(self):
		val = 0
		val |= self.ctr_en << 0
		val |= self.repeat_mode << 1
		val |= self.count_mode << 2
		val |= self.ctr_zero_ctrl << 4
		val |= self.ctr_load_ctrl << 7
		val |= self.ctr_adv_ctrl << 10
		val |= self.suppress_ctr_event_gen << 13
		val |= self.pl_en << 14
		val |= self.ctr_during_fault << 15
		val |= self.ctr_exit_fault << 16
		val |= self.ctr_after_debug << 18
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.ctr_en = (val & 0x01) >> 0
		self.repeat_mode = (val & 0x02) >> 1
		self.count_mode = (val & 0x0C) >> 2
		self.ctr_zero_ctrl = (val & 0x70) >> 4
		self.ctr_load_ctrl = (val & 0x380) >> 7
		self.ctr_adv_ctrl = (val & 0x1C00) >> 10
		self.suppress_ctr_event_gen = (val & 0x2000) >> 13
		self.pl_en = (val & 0x4000) >> 14
		self.ctr_during_fault = (val & 0x8000) >> 15
		self.ctr_exit_fault = (val & 0x30000) >> 16
		self.ctr_after_debug = (val & 0xC0000) >> 18
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CTR_VAL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+176
		self.ctr_val = 0
	def write(self):
		val = 0
		val |= self.ctr_val << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.ctr_val = (val & 0xFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CTR_LOAD_VAL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+180
		self.ctr_load_val = 0
	def write(self):
		val = 0
		val |= self.ctr_load_val << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.ctr_load_val = (val & 0xFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CTR_PL_VAL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+184
		self.pl_val = 0
	def write(self):
		val = 0
		val |= self.pl_val << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.pl_val = (val & 0xFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class DEBUG_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+188
		self.run_in_halt_mode = 0
	def write(self):
		val = 0
		val |= self.run_in_halt_mode << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.run_in_halt_mode = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class RCTR_VAL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+192
		self.rctr_val = 0
	def write(self):
		val = 0
		val |= self.rctr_val << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rctr_val = (val & 0xFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class RCTR_LOAD_VAL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+196
		self.rctr_load_val = 0
	def write(self):
		val = 0
		val |= self.rctr_load_val << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.rctr_load_val = (val & 0xFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class QEI_DIR:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+200
		self.qei_dir = 0
	def write(self):
		val = 0
		val |= self.qei_dir << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.qei_dir = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class timer_tima_num_input2:
	def __init__(self,dev,base_addr):
		self.DESC = DESC(dev,base_addr)
		self.PWR_EN = PWR_EN(dev,base_addr)
		self.RST_CTRL = RST_CTRL(dev,base_addr)
		self.RST_STS = RST_STS(dev,base_addr)
		self.CLK_CTRL = CLK_CTRL(dev,base_addr)
		self.INTR_STS = INTR_STS(dev,base_addr)
		self.INTR_EVENT = INTR_EVENT(dev,base_addr)
		self.INTR_EN_0 = INTR_EN_0(dev,base_addr)
		self.INTR_EN_1 = INTR_EN_1(dev,base_addr)
		self.INTR_NMI_EN_0 = INTR_NMI_EN_0(dev,base_addr)
		self.INTR_NMI_EN_1 = INTR_NMI_EN_1(dev,base_addr)
		self.EVENT_EN_0_0 = EVENT_EN_0_0(dev,base_addr)
		self.EVENT_EN_0_1 = EVENT_EN_0_1(dev,base_addr)
		self.EVENT_EN_1_0 = EVENT_EN_1_0(dev,base_addr)
		self.EVENT_EN_1_1 = EVENT_EN_1_1(dev,base_addr)
		self.INTR_SW_SET = INTR_SW_SET(dev,base_addr)
		self.EVENT_CTRL = EVENT_CTRL(dev,base_addr)
		self.CLK_CONFIG = CLK_CONFIG(dev,base_addr)
		self.TRIG_IN = TRIG_IN(dev,base_addr)
		self.TRIG_OUT = TRIG_OUT(dev,base_addr)
		self.INPUT_FILTER_CC_0 = INPUT_FILTER_CC_0(dev,base_addr)
		self.INPUT_FILTER_CC_1 = INPUT_FILTER_CC_1(dev,base_addr)
		self.INPUT_CC_0 = INPUT_CC_0(dev,base_addr)
		self.INPUT_CC_1 = INPUT_CC_1(dev,base_addr)
		self.CC0_CMN_CTRL = CC0_CMN_CTRL(dev,base_addr)
		self.CC1_CMN_CTRL = CC1_CMN_CTRL(dev,base_addr)
		self.CC0_CAPTURE_CTRL = CC0_CAPTURE_CTRL(dev,base_addr)
		self.CC1_CAPTURE_CTRL = CC1_CAPTURE_CTRL(dev,base_addr)
		self.CC0_COMPARE_CTRL = CC0_COMPARE_CTRL(dev,base_addr)
		self.CC1_COMPARE_CTRL = CC1_COMPARE_CTRL(dev,base_addr)
		self.CC2_CMN_CTRL = CC2_CMN_CTRL(dev,base_addr)
		self.CC3_CMN_CTRL = CC3_CMN_CTRL(dev,base_addr)
		self.CC2_COMPARE_CTRL = CC2_COMPARE_CTRL(dev,base_addr)
		self.CC3_COMPARE_CTRL = CC3_COMPARE_CTRL(dev,base_addr)
		self.CC0_CC_PWM_CFG = CC0_CC_PWM_CFG(dev,base_addr)
		self.CC1_CC_PWM_CFG = CC1_CC_PWM_CFG(dev,base_addr)
		self.DEADBAND_CFG = DEADBAND_CFG(dev,base_addr)
		self.CC0_OUTPUT_CTL = CC0_OUTPUT_CTL(dev,base_addr)
		self.CC1_OUTPUT_CTL = CC1_OUTPUT_CTL(dev,base_addr)
		self.CC0_SW_FORCE = CC0_SW_FORCE(dev,base_addr)
		self.CC1_SW_FORCE = CC1_SW_FORCE(dev,base_addr)
		self.FAULT_IN_CTL = FAULT_IN_CTL(dev,base_addr)
		self.FAULT_SRC_CTL = FAULT_SRC_CTL(dev,base_addr)
		self.CTR_CTL = CTR_CTL(dev,base_addr)
		self.CTR_VAL = CTR_VAL(dev,base_addr)
		self.CTR_LOAD_VAL = CTR_LOAD_VAL(dev,base_addr)
		self.CTR_PL_VAL = CTR_PL_VAL(dev,base_addr)
		self.DEBUG_CTRL = DEBUG_CTRL(dev,base_addr)
		self.RCTR_VAL = RCTR_VAL(dev,base_addr)
		self.RCTR_LOAD_VAL = RCTR_LOAD_VAL(dev,base_addr)
		self.QEI_DIR = QEI_DIR(dev,base_addr)
	def read_all(self):
		attributes = vars(self)
		for name, value in attributes.items():
			if not name.startswith('__') and not callable(value):
				getattr(self,name).read()
				getattr(self,name).display()
