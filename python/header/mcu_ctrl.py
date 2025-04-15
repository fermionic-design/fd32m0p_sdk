class DESC:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+0
		self.module_type = 0
		self.module_subtype = 0
		self.major_rev = 0
		self.minor_rev = 0
	def write(self):
		val = 0
		val |= self.module_type << 0
		val |= self.module_subtype << 8
		val |= self.major_rev << 16
		val |= self.minor_rev << 20
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.module_type = (val & 0xFF) >> 0
		self.module_subtype = (val & 0xFF00) >> 8
		self.major_rev = (val & 0xF0000) >> 16
		self.minor_rev = (val & 0xF00000) >> 20
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class RST_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+4
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
		self._addr = base_addr+8
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
		self._addr = base_addr+12
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

class INTR_EVENT:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+16
		self.bor = 0
		self.clk_lf_mon_fault = 0
		self.clk_32mhz_req = 0
	def write(self):
		val = 0
		val |= self.bor << 0
		val |= self.clk_lf_mon_fault << 1
		val |= self.clk_32mhz_req << 2
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.bor = (val & 0x01) >> 0
		self.clk_lf_mon_fault = (val & 0x02) >> 1
		self.clk_32mhz_req = (val & 0x04) >> 2
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class INTR_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+20
		self.bor_en = 0
		self.clk_lf_mon_fault_en = 0
		self.clk_32mhz_req_en = 0
	def write(self):
		val = 0
		val |= self.bor_en << 0
		val |= self.clk_lf_mon_fault_en << 1
		val |= self.clk_32mhz_req_en << 2
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.bor_en = (val & 0x01) >> 0
		self.clk_lf_mon_fault_en = (val & 0x02) >> 1
		self.clk_32mhz_req_en = (val & 0x04) >> 2
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CLK_PWR_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+24
		self.hf_osc_pwr_en = 0
		self.hf_xo_pwr_en = 0
		self.pll_pwr_en = 0
		self.lf_osc_pwr_en = 0
		self.lf_xo_pwr_en = 0
	def write(self):
		val = 0
		val |= self.hf_osc_pwr_en << 0
		val |= self.hf_xo_pwr_en << 4
		val |= self.pll_pwr_en << 8
		val |= self.lf_osc_pwr_en << 12
		val |= self.lf_xo_pwr_en << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.hf_osc_pwr_en = (val & 0x01) >> 0
		self.hf_xo_pwr_en = (val & 0x10) >> 4
		self.pll_pwr_en = (val & 0x100) >> 8
		self.lf_osc_pwr_en = (val & 0x1000) >> 12
		self.lf_xo_pwr_en = (val & 0x10000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class ANA_CLK_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+28
		self.hf_osc_clk_en_ovrd_val = 0
		self.hf_osc_clk_en_ovrd_en = 0
		self.pll_clk_en_ovrd_val = 0
		self.pll_clk_en_ovrd_en = 0
		self.hf_xo_or_ext_clk_ovrd_val = 0
		self.hf_xo_or_ext_clk_ovrd_en = 0
	def write(self):
		val = 0
		val |= self.hf_osc_clk_en_ovrd_val << 0
		val |= self.hf_osc_clk_en_ovrd_en << 1
		val |= self.pll_clk_en_ovrd_val << 4
		val |= self.pll_clk_en_ovrd_en << 5
		val |= self.hf_xo_or_ext_clk_ovrd_val << 8
		val |= self.hf_xo_or_ext_clk_ovrd_en << 9
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.hf_osc_clk_en_ovrd_val = (val & 0x01) >> 0
		self.hf_osc_clk_en_ovrd_en = (val & 0x02) >> 1
		self.pll_clk_en_ovrd_val = (val & 0x10) >> 4
		self.pll_clk_en_ovrd_en = (val & 0x20) >> 5
		self.hf_xo_or_ext_clk_ovrd_val = (val & 0x100) >> 8
		self.hf_xo_or_ext_clk_ovrd_en = (val & 0x200) >> 9
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class HF_CLK_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+32
		self.use_clk_pll = 0
		self.use_hf_osc = 0
		self.hf_xo_or_ext_div = 0
		self.use_precision_clk = 0
		self.hf_xo_en = 0
		self.hf_xo_or_ext_chng_time = 0
		self.hf_osc_code_chng_time = 0
	def write(self):
		val = 0
		val |= self.use_clk_pll << 0
		val |= self.use_hf_osc << 4
		val |= self.hf_xo_or_ext_div << 12
		val |= self.use_precision_clk << 16
		val |= self.hf_xo_en << 20
		val |= self.hf_xo_or_ext_chng_time << 24
		val |= self.hf_osc_code_chng_time << 28
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.use_clk_pll = (val & 0x01) >> 0
		self.use_hf_osc = (val & 0x10) >> 4
		self.hf_xo_or_ext_div = (val & 0xF000) >> 12
		self.use_precision_clk = (val & 0x10000) >> 16
		self.hf_xo_en = (val & 0x100000) >> 20
		self.hf_xo_or_ext_chng_time = (val & 0xF000000) >> 24
		self.hf_osc_code_chng_time = (val & 0xF0000000) >> 28
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class HF_OSC_CLK_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+36
		self.hf_osc_freq = 0
		self.hf_osc_div1 = 0
		self.hf_osc_div2 = 0
		self.hf_osc_4mhz_in_stop = 0
		self.hf_osc_disable_in_stop = 0
		self.hf_osc_disable = 0
	def write(self):
		val = 0
		val |= self.hf_osc_freq << 0
		val |= self.hf_osc_div1 << 4
		val |= self.hf_osc_div2 << 8
		val |= self.hf_osc_4mhz_in_stop << 12
		val |= self.hf_osc_disable_in_stop << 13
		val |= self.hf_osc_disable << 14
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.hf_osc_freq = (val & 0x0F) >> 0
		self.hf_osc_div1 = (val & 0xF0) >> 4
		self.hf_osc_div2 = (val & 0xF00) >> 8
		self.hf_osc_4mhz_in_stop = (val & 0x1000) >> 12
		self.hf_osc_disable_in_stop = (val & 0x2000) >> 13
		self.hf_osc_disable = (val & 0x4000) >> 14
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class LF_CLK_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+40
		self.lf_xo_en = 0
		self.lf_osc_en = 0
		self.lf_clk_sel = 0
		self.gate_clocks_in_stdby = 0
		self.lfosc_cfg0 = 0
	def write(self):
		val = 0
		val |= self.lf_xo_en << 0
		val |= self.lf_osc_en << 4
		val |= self.lf_clk_sel << 8
		val |= self.gate_clocks_in_stdby << 12
		val |= self.lfosc_cfg0 << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.lf_xo_en = (val & 0x01) >> 0
		self.lf_osc_en = (val & 0x10) >> 4
		self.lf_clk_sel = (val & 0x300) >> 8
		self.gate_clocks_in_stdby = (val & 0x1000) >> 12
		self.lfosc_cfg0 = (val & 0xFF0000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class XO_CFG_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+44
		self.hf_xo_cfg0 = 0
		self.lf_xo_cfg0 = 0
		self.hf_xo_sts0 = 0
		self.lf_xo_sts0 = 0
	def write(self):
		val = 0
		val |= self.hf_xo_cfg0 << 0
		val |= self.lf_xo_cfg0 << 8
		val |= self.hf_xo_sts0 << 16
		val |= self.lf_xo_sts0 << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.hf_xo_cfg0 = (val & 0xFF) >> 0
		self.lf_xo_cfg0 = (val & 0xFF00) >> 8
		self.hf_xo_sts0 = (val & 0xFF0000) >> 16
		self.lf_xo_sts0 = (val & 0xFF000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class AHB_HCLK_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+48
		self.use_lf_clk = 0
		self.all_hf_clk_off = 0
		self.only_hf_osc_on = 0
	def write(self):
		val = 0
		val |= self.use_lf_clk << 0
		val |= self.all_hf_clk_off << 4
		val |= self.only_hf_osc_on << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.use_lf_clk = (val & 0x01) >> 0
		self.all_hf_clk_off = (val & 0x10) >> 4
		self.only_hf_osc_on = (val & 0x100) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class APB_PCLK_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+52
		self.pclk_div = 0
	def write(self):
		val = 0
		val |= self.pclk_div << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.pclk_div = (val & 0x0F) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class CLK_4MHZ_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+56
		self.clk_4mhz_en = 0
	def write(self):
		val = 0
		val |= self.clk_4mhz_en << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.clk_4mhz_en = (val & 0x01) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PWR_SM_OVRD_CTL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+60
		self.clk_ahb_ovrd_val = 0
		self.clk_ahb_ovrd_en = 0
		self.clk_apb_ovrd_val = 0
		self.clk_apb_ovrd_en = 0
		self.clk_4mhz_ovrd_val = 0
		self.clk_4mhz_ovrd_en = 0
		self.clk_lf_ovrd_val = 0
		self.clk_lf_ovrd_en = 0
		self.clk_cpu_ovrd_en = 0
		self.clk_cpu_ovrd_val = 0
		self.use_lf_clk_sm_ovrd_val = 0
		self.use_lf_clk_sm_ovrd_en = 0
	def write(self):
		val = 0
		val |= self.clk_ahb_ovrd_val << 0
		val |= self.clk_ahb_ovrd_en << 1
		val |= self.clk_apb_ovrd_val << 4
		val |= self.clk_apb_ovrd_en << 5
		val |= self.clk_4mhz_ovrd_val << 8
		val |= self.clk_4mhz_ovrd_en << 9
		val |= self.clk_lf_ovrd_val << 12
		val |= self.clk_lf_ovrd_en << 13
		val |= self.clk_cpu_ovrd_en << 16
		val |= self.clk_cpu_ovrd_val << 17
		val |= self.use_lf_clk_sm_ovrd_val << 20
		val |= self.use_lf_clk_sm_ovrd_en << 21
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.clk_ahb_ovrd_val = (val & 0x01) >> 0
		self.clk_ahb_ovrd_en = (val & 0x02) >> 1
		self.clk_apb_ovrd_val = (val & 0x10) >> 4
		self.clk_apb_ovrd_en = (val & 0x20) >> 5
		self.clk_4mhz_ovrd_val = (val & 0x100) >> 8
		self.clk_4mhz_ovrd_en = (val & 0x200) >> 9
		self.clk_lf_ovrd_val = (val & 0x1000) >> 12
		self.clk_lf_ovrd_en = (val & 0x2000) >> 13
		self.clk_cpu_ovrd_en = (val & 0x10000) >> 16
		self.clk_cpu_ovrd_val = (val & 0x20000) >> 17
		self.use_lf_clk_sm_ovrd_val = (val & 0x100000) >> 20
		self.use_lf_clk_sm_ovrd_en = (val & 0x200000) >> 21
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PLL_EN:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+64
		self.pll_en = 0
		self.pll_mdiv_clk2x_en = 0
		self.pll_mdiv_clk0_en = 0
		self.pll_mdiv_clk1_en = 0
		self.pll_sw_cg_en = 0
		self.pll_cp_icfg = 0
	def write(self):
		val = 0
		val |= self.pll_en << 0
		val |= self.pll_mdiv_clk2x_en << 4
		val |= self.pll_mdiv_clk0_en << 8
		val |= self.pll_mdiv_clk1_en << 16
		val |= self.pll_sw_cg_en << 20
		val |= self.pll_cp_icfg << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.pll_en = (val & 0x01) >> 0
		self.pll_mdiv_clk2x_en = (val & 0x10) >> 4
		self.pll_mdiv_clk0_en = (val & 0x100) >> 8
		self.pll_mdiv_clk1_en = (val & 0x10000) >> 16
		self.pll_sw_cg_en = (val & 0x100000) >> 20
		self.pll_cp_icfg = (val & 0xFF000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PLL_CTRL1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+68
		self.pll_ref_sel = 0
		self.pll_vco_freq = 0
		self.pll_pfd_width_cfg = 0
		self.pll_bw = 0
		self.pll_freq_chng_time = 0
	def write(self):
		val = 0
		val |= self.pll_ref_sel << 0
		val |= self.pll_vco_freq << 8
		val |= self.pll_pfd_width_cfg << 16
		val |= self.pll_bw << 24
		val |= self.pll_freq_chng_time << 28
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.pll_ref_sel = (val & 0x03) >> 0
		self.pll_vco_freq = (val & 0xFF00) >> 8
		self.pll_pfd_width_cfg = (val & 0x30000) >> 16
		self.pll_bw = (val & 0x3000000) >> 24
		self.pll_freq_chng_time = (val & 0xF0000000) >> 28
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PLL_CTRL2:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+72
		self.pll_mdiv_clk2x = 0
		self.pll_mdiv_clk0 = 0
		self.pll_mdiv_clk1 = 0
		self.pll_pdiv = 0
		self.pll_qdiv = 0
	def write(self):
		val = 0
		val |= self.pll_mdiv_clk2x << 0
		val |= self.pll_mdiv_clk0 << 4
		val |= self.pll_mdiv_clk1 << 8
		val |= self.pll_pdiv << 12
		val |= self.pll_qdiv << 16
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.pll_mdiv_clk2x = (val & 0x0F) >> 0
		self.pll_mdiv_clk0 = (val & 0xF0) >> 4
		self.pll_mdiv_clk1 = (val & 0xF00) >> 8
		self.pll_pdiv = (val & 0xF000) >> 12
		self.pll_qdiv = (val & 0xFFFF0000) >> 16
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class BLOCK_CLK_REQ:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+76
		self.block_ip_clk_32mhz_req = 0
	def write(self):
		val = 0
		val |= self.block_ip_clk_32mhz_req << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.block_ip_clk_32mhz_req = (val & 0xFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PMODE_CFG:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+80
		self.low_power_mode = 0
	def write(self):
		val = 0
		val |= self.low_power_mode << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.low_power_mode = (val & 0x07) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class AON_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+84
		self.aon_strb = 0
		self.aon_addr = 0
		self.aon_wdata = 0
		self.aon_rdata = 0
	def write(self):
		val = 0
		val |= self.aon_strb << 0
		val |= self.aon_addr << 8
		val |= self.aon_wdata << 16
		val |= self.aon_rdata << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.aon_strb = (val & 0x01) >> 0
		self.aon_addr = (val & 0xF00) >> 8
		self.aon_wdata = (val & 0xFF0000) >> 16
		self.aon_rdata = (val & 0xFF000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GPAMPCTL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+88
		self.gpamp_pwr_en = 0
		self.gpamp_en = 0
		self.gpamp_out_en = 0
		self.gpamp_nchnl_sel = 0
		self.gpamp_pchnl_en = 0
		self.gpamp_rri = 0
		self.gpamp_chop_clk_freq = 0
		self.gpamp_chop_clk_mode = 0
		self.gpamp_cfg0 = 0
		self.gpamp_cfg1 = 0
	def write(self):
		val = 0
		val |= self.gpamp_pwr_en << 0
		val |= self.gpamp_en << 1
		val |= self.gpamp_out_en << 2
		val |= self.gpamp_nchnl_sel << 4
		val |= self.gpamp_pchnl_en << 8
		val |= self.gpamp_rri << 10
		val |= self.gpamp_chop_clk_freq << 12
		val |= self.gpamp_chop_clk_mode << 14
		val |= self.gpamp_cfg0 << 16
		val |= self.gpamp_cfg1 << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gpamp_pwr_en = (val & 0x01) >> 0
		self.gpamp_en = (val & 0x02) >> 1
		self.gpamp_out_en = (val & 0x04) >> 2
		self.gpamp_nchnl_sel = (val & 0x70) >> 4
		self.gpamp_pchnl_en = (val & 0x300) >> 8
		self.gpamp_rri = (val & 0xC00) >> 10
		self.gpamp_chop_clk_freq = (val & 0x3000) >> 12
		self.gpamp_chop_clk_mode = (val & 0xC000) >> 14
		self.gpamp_cfg0 = (val & 0xFF0000) >> 16
		self.gpamp_cfg1 = (val & 0xFF000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class GPAMPSTS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+92
		self.gpamp_sts0 = 0
		self.gpamp_sts1 = 0
	def write(self):
		val = 0
		val |= self.gpamp_sts0 << 0
		val |= self.gpamp_sts1 << 8
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.gpamp_sts0 = (val & 0xFF) >> 0
		self.gpamp_sts1 = (val & 0xFF00) >> 8
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class PROCMONCTL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+96
		self.proc_mon_pwr_en = 0
		self.proc_mon_en = 0
	def write(self):
		val = 0
		val |= self.proc_mon_pwr_en << 0
		val |= self.proc_mon_en << 1
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.proc_mon_pwr_en = (val & 0x01) >> 0
		self.proc_mon_en = (val & 0x02) >> 1
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class MCU_SW_RST:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+100
		self.sw_rst_lvl0 = 0
		self.sw_rst_lvl1 = 0
		self.sw_rst_lvl2 = 0
		self.sw_rst_lvl3 = 0
		self.sw_rst_lvl4 = 0
	def write(self):
		val = 0
		val |= self.sw_rst_lvl0 << 0
		val |= self.sw_rst_lvl1 << 1
		val |= self.sw_rst_lvl2 << 2
		val |= self.sw_rst_lvl3 << 3
		val |= self.sw_rst_lvl4 << 4
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.sw_rst_lvl0 = (val & 0x01) >> 0
		self.sw_rst_lvl1 = (val & 0x02) >> 1
		self.sw_rst_lvl2 = (val & 0x04) >> 2
		self.sw_rst_lvl3 = (val & 0x08) >> 3
		self.sw_rst_lvl4 = (val & 0x10) >> 4
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class BOOT_CFG:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+104
		self.boot_sel = 0
		self.fw_trigger = 0
	def write(self):
		val = 0
		val |= self.boot_sel << 0
		val |= self.fw_trigger << 4
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.boot_sel = (val & 0x01) >> 0
		self.fw_trigger = (val & 0x10) >> 4
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class BOR_MODE_SEL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+108
		self.bor_mode = 0
		self.bor_key = 0
	def write(self):
		val = 0
		val |= self.bor_mode << 0
		val |= self.bor_key << 24
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.bor_mode = (val & 0x01) >> 0
		self.bor_key = (val & 0xFF000000) >> 24
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class SPARE_CTRL:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+112
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
		self._addr = base_addr+116
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

class ANA_SPARE_STS:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+120
		self.spare_in = 0
	def write(self):
		val = 0
		val |= self.spare_in << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.spare_in = (val & 0xFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class ANA_SPARE_OUT0:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+124
		self.spare_out_0 = 0
	def write(self):
		val = 0
		val |= self.spare_out_0 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.spare_out_0 = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class ANA_SPARE_OUT1:
	def __init__(self,dev,base_addr):
		self.dev = dev
		self._addr = base_addr+128
		self.spare_out_1 = 0
	def write(self):
		val = 0
		val |= self.spare_out_1 << 0
		self.dev.write(self._addr,val)
	def read(self):
		val = self.dev.read(self._addr)
		self.spare_out_1 = (val & 0xFFFFFFFF) >> 0
		return val
	def display(self):
		attribute_names = [name for name in dir(self) if not callable(getattr(self, name)) and not name.startswith("__")]
		for name in attribute_names:
			if name not in ['_addr','dev']:
				print(f'{name} = {hex(getattr(self,name))}')

class mcu_ctrl:
	def __init__(self,dev,base_addr):
		self.DESC = DESC(dev,base_addr)
		self.RST_CTRL = RST_CTRL(dev,base_addr)
		self.RST_STS = RST_STS(dev,base_addr)
		self.CLK_CTRL = CLK_CTRL(dev,base_addr)
		self.INTR_EVENT = INTR_EVENT(dev,base_addr)
		self.INTR_EN = INTR_EN(dev,base_addr)
		self.CLK_PWR_EN = CLK_PWR_EN(dev,base_addr)
		self.ANA_CLK_EN = ANA_CLK_EN(dev,base_addr)
		self.HF_CLK_CTRL = HF_CLK_CTRL(dev,base_addr)
		self.HF_OSC_CLK_CTRL = HF_OSC_CLK_CTRL(dev,base_addr)
		self.LF_CLK_CTRL = LF_CLK_CTRL(dev,base_addr)
		self.XO_CFG_STS = XO_CFG_STS(dev,base_addr)
		self.AHB_HCLK_CTRL = AHB_HCLK_CTRL(dev,base_addr)
		self.APB_PCLK_CTRL = APB_PCLK_CTRL(dev,base_addr)
		self.CLK_4MHZ_CTRL = CLK_4MHZ_CTRL(dev,base_addr)
		self.PWR_SM_OVRD_CTL = PWR_SM_OVRD_CTL(dev,base_addr)
		self.PLL_EN = PLL_EN(dev,base_addr)
		self.PLL_CTRL1 = PLL_CTRL1(dev,base_addr)
		self.PLL_CTRL2 = PLL_CTRL2(dev,base_addr)
		self.BLOCK_CLK_REQ = BLOCK_CLK_REQ(dev,base_addr)
		self.PMODE_CFG = PMODE_CFG(dev,base_addr)
		self.AON_CTRL = AON_CTRL(dev,base_addr)
		self.GPAMPCTL = GPAMPCTL(dev,base_addr)
		self.GPAMPSTS = GPAMPSTS(dev,base_addr)
		self.PROCMONCTL = PROCMONCTL(dev,base_addr)
		self.MCU_SW_RST = MCU_SW_RST(dev,base_addr)
		self.BOOT_CFG = BOOT_CFG(dev,base_addr)
		self.BOR_MODE_SEL = BOR_MODE_SEL(dev,base_addr)
		self.SPARE_CTRL = SPARE_CTRL(dev,base_addr)
		self.SPARE_STS = SPARE_STS(dev,base_addr)
		self.ANA_SPARE_STS = ANA_SPARE_STS(dev,base_addr)
		self.ANA_SPARE_OUT0 = ANA_SPARE_OUT0(dev,base_addr)
		self.ANA_SPARE_OUT1 = ANA_SPARE_OUT1(dev,base_addr)
	def read_all(self):
		attributes = vars(self)
		for name, value in attributes.items():
			if not name.startswith('__') and not callable(value):
				getattr(self,name).read()
				getattr(self,name).display()
