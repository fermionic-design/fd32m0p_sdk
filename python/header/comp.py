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
		self.en_async_clk_req = 0
	def write(self):
		val = 0
		val |= self.en_async_clk_req << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.en_async_clk_req = (val & 0x01) >> 0
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
		self.intr_first = (val & 0xFF) >> 0
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
		self.comp_out_edge0 = 0
		self.comp_out_edge1 = 0
		self.comp_out = 0
	def write(self):
		val = 0
		val |= self.comp_out_edge0 << 0
		val |= self.comp_out_edge1 << 1
		val |= self.comp_out << 2
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.comp_out_edge0 = (val & 0x01) >> 0
		self.comp_out_edge1 = (val & 0x02) >> 1
		self.comp_out = (val & 0x04) >> 2
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+28
		self.comp_out_edge0_en = 0
		self.comp_out_edge1_en = 0
		self.comp_out_en = 0
	def write(self):
		val = 0
		val |= self.comp_out_edge0_en << 0
		val |= self.comp_out_edge1_en << 1
		val |= self.comp_out_en << 2
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.comp_out_edge0_en = (val & 0x01) >> 0
		self.comp_out_edge1_en = (val & 0x02) >> 1
		self.comp_out_en = (val & 0x04) >> 2
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_NMI_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+32
		self.comp_out_edge0_nmi_en = 0
		self.comp_out_edge1_nmi_en = 0
		self.comp_out_nmi_en = 0
	def write(self):
		val = 0
		val |= self.comp_out_edge0_nmi_en << 0
		val |= self.comp_out_edge1_nmi_en << 1
		val |= self.comp_out_nmi_en << 2
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.comp_out_edge0_nmi_en = (val & 0x01) >> 0
		self.comp_out_edge1_nmi_en = (val & 0x02) >> 1
		self.comp_out_nmi_en = (val & 0x04) >> 2
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class EVENT_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+36
		self.comp_out_edge0_event_en = 0
		self.comp_out_edge1_event_en = 0
		self.comp_out_event_en = 0
	def write(self):
		val = 0
		val |= self.comp_out_edge0_event_en << 0
		val |= self.comp_out_edge1_event_en << 1
		val |= self.comp_out_event_en << 2
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.comp_out_edge0_event_en = (val & 0x01) >> 0
		self.comp_out_edge1_event_en = (val & 0x02) >> 1
		self.comp_out_event_en = (val & 0x04) >> 2
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_SW_SET:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+40
		self.comp_out_edge0_sw_set = 0
		self.comp_out_edge1_sw_set = 0
		self.comp_out_sw_set = 0
	def write(self):
		val = 0
		val |= self.comp_out_edge0_sw_set << 0
		val |= self.comp_out_edge1_sw_set << 1
		val |= self.comp_out_sw_set << 2
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.comp_out_edge0_sw_set = (val & 0x01) >> 0
		self.comp_out_edge1_sw_set = (val & 0x02) >> 1
		self.comp_out_sw_set = (val & 0x04) >> 2
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+44
		self.comp_out_sts = 0
	def write(self):
		val = 0
		val |= self.comp_out_sts << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.comp_out_sts = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CTRL0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+48
		self.enable = 0
		self.speed = 0
		self.hyst = 0
		self.intr_edge_sel = 0
	def write(self):
		val = 0
		val |= self.enable << 0
		val |= self.speed << 8
		val |= self.hyst << 16
		val |= self.intr_edge_sel << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.enable = (val & 0x01) >> 0
		self.speed = (val & 0x100) >> 8
		self.hyst = (val & 0x30000) >> 16
		self.intr_edge_sel = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INPUT_CTRL0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+52
		self.in_p_en = 0
		self.in_p_sel = 0
		self.in_m_en = 0
		self.in_m_sel = 0
	def write(self):
		val = 0
		val |= self.in_p_en << 0
		val |= self.in_p_sel << 8
		val |= self.in_m_en << 16
		val |= self.in_m_sel << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.in_p_en = (val & 0x01) >> 0
		self.in_p_sel = (val & 0x700) >> 8
		self.in_m_en = (val & 0x10000) >> 16
		self.in_m_sel = (val & 0x7000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INPUT_CTRL1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+56
		self.in_short = 0
		self.in_swap = 0
	def write(self):
		val = 0
		val |= self.in_short << 0
		val |= self.in_swap << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.in_short = (val & 0x01) >> 0
		self.in_swap = (val & 0x100) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class OUT_CTRL0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+60
		self.out_pol = 0
		self.samp_en = 0
		self.filt_en = 0
		self.filt_delay = 0
	def write(self):
		val = 0
		val |= self.out_pol << 0
		val |= self.samp_en << 8
		val |= self.filt_en << 16
		val |= self.filt_delay << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.out_pol = (val & 0x01) >> 0
		self.samp_en = (val & 0x100) >> 8
		self.filt_en = (val & 0x10000) >> 16
		self.filt_delay = (val & 0x3000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class OUT_CTRL1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+64
		self.win_comp_en = 0
		self.win_comp_sel = 0
		self.blank_en = 0
		self.blank_src = 0
	def write(self):
		val = 0
		val |= self.win_comp_en << 0
		val |= self.win_comp_sel << 8
		val |= self.blank_en << 16
		val |= self.blank_src << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.win_comp_en = (val & 0x01) >> 0
		self.win_comp_sel = (val & 0x300) >> 8
		self.blank_en = (val & 0x10000) >> 16
		self.blank_src = (val & 0x7000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class REF_CTRL0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+68
		self.ref_sel = 0
		self.ref_src = 0
		self.ref_mode = 0
	def write(self):
		val = 0
		val |= self.ref_sel << 0
		val |= self.ref_src << 8
		val |= self.ref_mode << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.ref_sel = (val & 0x01) >> 0
		self.ref_src = (val & 0x100) >> 8
		self.ref_mode = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class REF_CTRL1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+72
		self.dac_code0 = 0
		self.dac_code1 = 0
		self.dac_mode = 0
		self.dac_code_sel = 0
	def write(self):
		val = 0
		val |= self.dac_code0 << 0
		val |= self.dac_code1 << 8
		val |= self.dac_mode << 16
		val |= self.dac_code_sel << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.dac_code0 = (val & 0xFF) >> 0
		self.dac_code1 = (val & 0xFF00) >> 8
		self.dac_mode = (val & 0x10000) >> 16
		self.dac_code_sel = (val & 0x1000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SPARE_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+76
		self.cfg0 = 0
		self.cfg1 = 0
	def write(self):
		val = 0
		val |= self.cfg0 << 0
		val |= self.cfg1 << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.cfg0 = (val & 0xFF) >> 0
		self.cfg1 = (val & 0xFF00) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SPARE_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+80
		self.sts0 = 0
		self.sts1 = 0
	def write(self):
		val = 0
		val |= self.sts0 << 0
		val |= self.sts1 << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.sts0 = (val & 0xFF) >> 0
		self.sts1 = (val & 0xFF00) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class comp:
	def __init__(self,dev,base_addr):
		self.DESC = DESC(dev,base_addr)
		self.PWR_EN = PWR_EN(dev,base_addr)
		self.RST_CTRL = RST_CTRL(dev,base_addr)
		self.RST_STS = RST_STS(dev,base_addr)
		self.CLK_CTRL = CLK_CTRL(dev,base_addr)
		self.INTR_STS = INTR_STS(dev,base_addr)
		self.INTR_EVENT = INTR_EVENT(dev,base_addr)
		self.INTR_EN = INTR_EN(dev,base_addr)
		self.INTR_NMI_EN = INTR_NMI_EN(dev,base_addr)
		self.EVENT_EN = EVENT_EN(dev,base_addr)
		self.INTR_SW_SET = INTR_SW_SET(dev,base_addr)
		self.STS = STS(dev,base_addr)
		self.CTRL0 = CTRL0(dev,base_addr)
		self.INPUT_CTRL0 = INPUT_CTRL0(dev,base_addr)
		self.INPUT_CTRL1 = INPUT_CTRL1(dev,base_addr)
		self.OUT_CTRL0 = OUT_CTRL0(dev,base_addr)
		self.OUT_CTRL1 = OUT_CTRL1(dev,base_addr)
		self.REF_CTRL0 = REF_CTRL0(dev,base_addr)
		self.REF_CTRL1 = REF_CTRL1(dev,base_addr)
		self.SPARE_CTRL = SPARE_CTRL(dev,base_addr)
		self.SPARE_STS = SPARE_STS(dev,base_addr)
	def read_all(self):
		attributes = vars(self)
		for name, value in attributes.items():
			if not name.startswith('__') and not callable(value):
				getattr(self,name).read()
				getattr(self,name).display()
