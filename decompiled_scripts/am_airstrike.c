#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 16;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	var uLocal_237 = 0;
	struct<57> Local_238 = { 0, 0, 0, -1281684762, 0, 0, -163714847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_239 = 0;
	struct<5> Local_240[2];
	struct<21> Local_241 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_116(ScriptParam_241);
	}
	while (true)
	{
		func_115();
		if (func_107())
		{
			func_103();
		}
		if (unk_0x76CD105BCAC6EB9F())
		{
			func_102();
			switch (func_101(unk_0xAE032CEDCF23C6D5()))
			{
				case 0:
					if (func_100() > 0)
					{
						Local_240[unk_0xAE032CEDCF23C6D5() /*5*/] = 2;
					}
					break;
				
				case 2:
					func_99();
					if (func_100() == 3)
					{
						Local_240[unk_0xAE032CEDCF23C6D5() /*5*/] = 3;
					}
					break;
				
				case 3:
					func_103();
					break;
			}
			if (unk_0x93E08E0F531E2C35())
			{
				switch (func_100())
				{
					case 0:
						Local_238.f_0 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()
{
	switch (Local_238.f_1)
	{
		case 0:
			func_53();
			break;
		
		case 1:
			func_52();
			break;
	}
	if (Local_238.f_2.f_2 == 3 && iLocal_57 == 0)
	{
		Local_238.f_0 = 3;
	}
	func_45();
	if (Local_238.f_53 && Local_238.f_50 < 10)
	{
		func_13();
	}
	if (Local_238.f_50 >= 10)
	{
		if (!func_12(&uLocal_65))
		{
			func_11(&uLocal_65, 0, 0);
		}
		else if (func_10(&uLocal_65, 10000, 0))
		{
			Local_238.f_0 = 3;
		}
	}
	if (func_9())
	{
		Local_238.f_0 = 3;
	}
	if (!BitTest(Global_44449, 10))
	{
		if (Local_238.f_55 == 1)
		{
			if (!Local_238.f_56)
			{
				if (((!unk_0x4C705AAF75363287() || func_8("AIRSTRIKE_1")) || func_8("AIRSTRIKE_2")) || func_8("AIRSTRIKE_4"))
				{
					func_7("AIRSTRIKE_3", -1);
					Local_238.f_56 = 1;
				}
			}
		}
	}
	if (bLocal_52)
	{
		if (!func_4(unk_0x259BE71D8A81D4FA(), 1, 0))
		{
			Local_238.f_0 = 3;
		}
	}
	else if (func_4(unk_0x259BE71D8A81D4FA(), 1, 0) || func_3())
	{
		Local_238.f_0 = 3;
	}
	if (unk_0xFD216000DC314A92())
	{
		Local_238.f_0 = 3;
	}
	if (Global_2764908.f_224 || func_2(unk_0x259BE71D8A81D4FA()))
	{
		Local_238.f_0 = 3;
	}
}

int func_2(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		return Global_2764907;
	}
	else
	{
		iVar0 = unk_0x56E414973C2A8C0E(iParam0);
		if (unk_0xFC8BFE4B41177C22(iVar0))
		{
			iVar1 = unk_0x4B423FAA24E8ABF0(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

var func_3()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_18, 0);
}

int func_4(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_5(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853910[iParam0 /*862*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)
{
	return func_6(iParam0);
}

var func_6(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

void func_7(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

bool func_8(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

bool func_9()
{
	return Global_1574582;
}

int func_10(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_11(uParam0, bParam2, 0);
	if (unk_0x76CD105BCAC6EB9F() && !bParam2)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_11(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x76CD105BCAC6EB9F() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				*uParam0 = unk_0x0728E77B2BF91D54();
			}
		}
		else
		{
			*uParam0 = unk_0x1DD05E817C89C737();
		}
		uParam0->f_1 = 1;
	}
}

bool func_12(var uParam0)
{
	return uParam0->f_1;
}

void func_13()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	
	iVar0 = unk_0x4A8C381C258A124D();
	iVar3 = 200;
	if (BitTest(Global_44449, 10))
	{
		iVar0 = 0;
		iVar3 = 300;
	}
	if (func_44(Local_61))
	{
		if (func_42(Local_238.f_2))
		{
			Local_61 = { unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_238.f_2), 1) };
			Local_61.f_2 = (Local_61.f_2 - 5f);
		}
	}
	switch (Local_238.f_50)
	{
		case 0:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xB1EAADCB692D69CE(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), 0, 0);
					Var2.f_2 = (Var2.f_2 - 25f);
					unk_0x5733B7E88AFB2E3B(Var1, Var2, iVar3, 1, joaat("weapon_airstrike_rocket"), unk_0x4A8C381C258A124D(), 1, 0, -1f, iVar0, 1, 1, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					iLocal_57 = 1;
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_237, Local_238.f_50);
					if (func_41())
					{
						if (func_38())
						{
							func_15(&uLocal_69, "HS4FAUD", "HS4F_SAAIP1", 12, 0, 0, 0);
						}
					}
				}
			}
			else if (func_10(&(Local_238.f_51), 750, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 1:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xB1EAADCB692D69CE(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), 0, 0);
					Var2.f_2 = (Var2.f_2 - 25f);
					unk_0x5733B7E88AFB2E3B(Var1, Var2, iVar3, 1, joaat("weapon_airstrike_rocket"), unk_0xC35A3A4C05A4831B(Local_238.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 2:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xB1EAADCB692D69CE(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), 0, 0);
					Var2.f_2 = (Var2.f_2 - 25f);
					unk_0x5733B7E88AFB2E3B(Var1, Var2, iVar3, 1, joaat("weapon_airstrike_rocket"), unk_0xC35A3A4C05A4831B(Local_238.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 3:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xB1EAADCB692D69CE(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), 0, 0);
					Var2.f_2 = (Var2.f_2 - 25f);
					unk_0x5733B7E88AFB2E3B(Var1, Var2, iVar3, 1, joaat("weapon_airstrike_rocket"), unk_0xC35A3A4C05A4831B(Local_238.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 750, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 4:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xB1EAADCB692D69CE(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), 0, 0);
					Var2.f_2 = (Var2.f_2 - 25f);
					unk_0x5733B7E88AFB2E3B(Var1, Var2, iVar3, 1, joaat("weapon_airstrike_rocket"), unk_0xC35A3A4C05A4831B(Local_238.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 5:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xB1EAADCB692D69CE(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), 0, 0);
					Var2.f_2 = (Var2.f_2 - 25f);
					unk_0x5733B7E88AFB2E3B(Var1, Var2, iVar3, 1, joaat("weapon_airstrike_rocket"), unk_0xC35A3A4C05A4831B(Local_238.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 750, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 6:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xB1EAADCB692D69CE(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), 0, 0);
					Var2.f_2 = (Var2.f_2 - 25f);
					unk_0x5733B7E88AFB2E3B(Var1, Var2, iVar3, 1, joaat("weapon_airstrike_rocket"), unk_0xC35A3A4C05A4831B(Local_238.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 7:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xB1EAADCB692D69CE(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), 0, 0);
					Var2.f_2 = (Var2.f_2 - 25f);
					unk_0x5733B7E88AFB2E3B(Var1, Var2, iVar3, 1, joaat("weapon_airstrike_rocket"), unk_0xC35A3A4C05A4831B(Local_238.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 8:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xB1EAADCB692D69CE(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), 0, 0);
					Var2.f_2 = (Var2.f_2 - 25f);
					unk_0x5733B7E88AFB2E3B(Var1, Var2, iVar3, 1, joaat("weapon_airstrike_rocket"), unk_0xC35A3A4C05A4831B(Local_238.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 9:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!BitTest(uLocal_237, Local_238.f_50))
				{
					Var1 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var1.f_2 = Local_61.f_2;
					Var2 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var2 = { Var2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xB1EAADCB692D69CE(Var2 + Vector(10f, 0f, 0f), &(Var2.f_2), 0, 0);
					Var2.f_2 = (Var2.f_2 - 25f);
					unk_0x5733B7E88AFB2E3B(Var1, Var2, iVar3, 1, joaat("weapon_airstrike_rocket"), unk_0xC35A3A4C05A4831B(Local_238.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0, 0);
					Local_238.f_50++;
					iLocal_57 = 0;
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_237, Local_238.f_50);
				}
			}
			break;
	}
}

void func_14(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_15(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_37(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21732 = 0;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
	return func_16(sParam2, iParam3, 0);
}

int func_16(char* sParam0, int iParam1, bool bParam2)
{
	Global_21726 = 0;
	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam1 > Global_21727)
			{
				if (Global_21732 == 0)
				{
					unk_0x0F15249D24BC5ADA(0);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
					Global_21736 = 0;
					Global_21735 = 0;
					Global_20382 = 0;
				}
				else
				{
					func_36();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1F9EB85925C3ECD7())
		{
			return 0;
		}
		if (func_35(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_34();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_22721 = Global_22722;
		Global_21344.f_370 = Global_22714;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21721 = Global_21722;
		if (Global_21731)
		{
			unk_0x8744D2E3FC95740E(&Global_8253, 20);
			unk_0x8744D2E3FC95740E(&Global_8254, 17);
			unk_0x8744D2E3FC95740E(&Global_8255, 0);
			if (bParam2)
			{
				func_26();
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20383.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20349 == 1)
			{
				return 0;
			}
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (func_25())
				{
					return 0;
				}
				if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x333554781C7582D7(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x08DAD6B08438A17C(unk_0x4A8C381C258A124D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78558)
				{
					if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
					{
						return 0;
					}
					if (unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()))
					{
						return 0;
					}
					if (unk_0x74CD4FE549433E92(unk_0x4A8C381C258A124D()))
					{
						return 0;
					}
					if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
					{
						return 0;
					}
				}
			}
			if (func_24())
			{
				return 0;
			}
			else
			{
				switch (Global_20383.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8253, 9))
				{
					return 0;
				}
			}
			func_23();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_22();
		func_17();
		return 1;
	}
	if (Global_21725 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21727 || iParam1 == Global_21727)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_36();
	}
	return 0;
}

void func_17()
{
	if (!func_18())
	{
		return;
	}
	if (Global_21731)
	{
		MemCopy(&(Global_1977511.f_1), {Global_21344}, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}
}

int func_18()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_21())
	{
		return 0;
	}
	if (func_19(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (BitTest(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x834C960822A4683F())
	{
		return 0;
	}
	return 1;
}

bool func_19(int iParam0)
{
	return func_20(iParam0, 20);
}

var func_20(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_21()
{
	return -1;
}

void func_22()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0F15249D24BC5ADA(0);
	Global_21725 = 1;
}

void func_23()
{
	Global_21778 = Global_21777;
	Global_21772 = Global_21773;
	Global_21819 = { Global_21807 };
	Global_21825 = { Global_21813 };
	Global_21780 = Global_21779;
	Global_21849 = { Global_21831 };
	Global_21855 = { Global_21837 };
	Global_21861 = { Global_21843 };
	Global_21867 = { Global_21873 };
	Global_7568 = Global_7569;
	Global_7570 = Global_7571;
	Global_21736 = Global_21737;
	Global_21738 = Global_21739;
	Global_21740 = { Global_21756 };
	Global_21729 = Global_21730;
	Global_22741 = 0;
	Global_21774 = 0;
	Global_21775 = 0;
	unk_0x8744D2E3FC95740E(&Global_8254, 16);
}

int func_24()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_25()
{
	int iVar0;
	int iVar1;
	
	if (Global_78558)
	{
		iVar0 = 0;
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar1, 1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x196704C916969409() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0x49F8918E2DC5FFBC(unk_0x4A8C381C258A124D(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_26()
{
	if (func_33(14))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113648.f_28052[0 /*29*/])
			{
				Global_20383 = 0;
			}
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113648.f_28052[1 /*29*/])
			{
				Global_20383 = 1;
			}
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113648.f_28052[2 /*29*/])
			{
				Global_20383 = 2;
			}
			else
			{
				Global_20383 = 0;
			}
		}
	}
	else
	{
		Global_20383 = func_27();
		if (Global_20383 == 145)
		{
			Global_20383 = 3;
		}
		if (Global_78558)
		{
			Global_20383 = 3;
		}
		if (Global_20383 > 3)
		{
			Global_20383 = 3;
		}
	}
}

var func_27()
{
	func_28();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_28()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_31(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_30(unk_0x4A8C381C258A124D());
			if (func_29(iVar0) && (!func_33(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_29(Global_113648.f_2365.f_539.f_4321))
				{
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
				}
				Global_113648.f_2365.f_539.f_4323 = iVar0;
				Global_113648.f_2365.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != 145)
			{
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
			}
			return;
		}
	}
	Global_113648.f_2365.f_539.f_4321 = 145;
}

bool func_29(int iParam0)
{
	return iParam0 < 3;
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_31(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_31(int iParam0)
{
	if (func_29(iParam0))
	{
		return func_32(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_32(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

bool func_33(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_34()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21014[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21014[iVar0 /*10*/].f_1), "", 24);
		Global_21014[iVar0 /*10*/].f_7 = 0;
		Global_21014[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21014.f_161 = -99;
	Global_21014.f_162 = { 0f, 0f, 0f };
}

bool func_35(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1653913.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1653913.f_1048, iParam0);
}

void func_36()
{
	unk_0xC78B293A5F4EACF9();
	Global_22736 = 0;
	if ((unk_0xE87F28FD4128D063() || Global_20383.f_1 == 9) || Global_20382 == 1)
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(1);
		Global_21725 = 6;
		return;
	}
}

void func_37(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	StringCopy(&Global_21795, sParam2, 24);
	Global_22714 = uParam5;
	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}
}

bool func_38()
{
	return func_39(unk_0x259BE71D8A81D4FA());
}

var func_39(int iParam0)
{
	return func_40(&(Global_2657589[iParam0 /*466*/].f_445), 0);
}

var func_40(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

int func_41()
{
	int iVar0;
	
	iVar0 = unk_0x1DD05E817C89C737();
	if (Global_21725 == 0)
	{
		if ((iVar0 - Global_22747) > 3000)
		{
			if (unk_0x1F9EB85925C3ECD7() == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_42(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return !func_43(unk_0xE38610F405049F71(uParam0));
	}
	return 0;
}

int func_43(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_44(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_45()
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	
	if (func_42(Local_238.f_2))
	{
		uVar0 = unk_0xE38610F405049F71(Local_238.f_2);
		Var2 = { unk_0xD1A6A821F5AC81DB(uVar0, 1) };
	}
	if (!iLocal_59)
	{
		if (!func_44(Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2))
		{
			Var1 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 };
		}
		else if (func_51(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		}
	}
	if (iLocal_58 && !BitTest(Global_44449, 10))
	{
		if (!iLocal_59)
		{
			if (func_42(Local_238.f_2))
			{
				if (!unk_0x65FFA94B82A71741(iVar0, Local_60, 75f, 75f, 1000f, 0, 1, 0))
				{
					fLocal_62 = unk_0xED977E2AE2CB16EE(Var2, Var1, 0);
				}
				else
				{
					iLocal_59 = 1;
				}
			}
			else
			{
				iLocal_59 = 1;
			}
		}
		else
		{
			fLocal_62 = (fLocal_62 - 3.75f);
		}
		iVar3 = floor(fLocal_62);
		if (fLocal_62 <= 200f)
		{
			iVar4 = 6;
		}
		else
		{
			iVar4 = 1;
		}
		if (fLocal_62 >= 0f)
		{
			func_46(iVar3, "AIRSTRIKE_2", -1, iVar4, 2, 0, "AIRSTRIKE_6", 0, 0f, 0, 0, iVar4, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		}
	}
}

void func_46(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_50(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655472.f_1 = 1;
		func_49(6, iVar0);
		Global_1655472.f_4041[iVar0] = iParam0;
		StringCopy(&(Global_1655472.f_4041.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1655472.f_4041.f_183[iVar0] = iParam3;
		Global_1655472.f_4041.f_172[iVar0] = iParam2;
		Global_1655472.f_4041.f_260[iVar0] = iParam4;
		Global_1655472.f_4041.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1655472.f_4041.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1655472.f_4041.f_443[iVar0] = iParam7;
		Global_1655472.f_4041.f_454[iVar0] = fParam8;
		Global_1655472.f_4041.f_497[iVar0] = iParam9;
		Global_1655472.f_4041.f_508[iVar0] = iParam10;
		Global_1655472.f_4041.f_205[iVar0] = iParam11;
		Global_1655472.f_4041.f_216[iVar0] = iParam12;
		Global_1655472.f_4041.f_227[iVar0] = iParam13;
		Global_1655472.f_4041.f_238[iVar0] = iParam14;
		Global_1655472.f_4041.f_249[iVar0] = iParam15;
		Global_1655472.f_4041.f_519[iVar0] = iParam16;
		Global_1655472.f_4041.f_530[iVar0] = iParam17;
		Global_1655472.f_4041.f_541[iVar0] = iParam18;
		Global_1655472.f_4041.f_552[iVar0] = iParam19;
		Global_1655472.f_4041.f_563[iVar0] = iParam20;
		Global_1655472.f_4041.f_574[iVar0] = iParam21;
		Global_1655472.f_4041.f_585[iVar0] = iParam22;
		Global_1655472.f_4041.f_596[iVar0] = iParam23;
		Global_1655472.f_4041.f_607[iVar0] = iParam24;
		Global_1655472.f_4041.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_48())
		{
			Global_1655472.f_1172 = 1;
		}
		if (unk_0x761778199FE1211C())
		{
			iVar2 = 0;
			unk_0x21564F65F997D833(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1655472.f_1176 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1655472.f_1175 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1655472.f_1172 = 1;
			}
			if (func_47())
			{
				Global_1655472.f_1176 = 1;
			}
		}
	}
}

int func_47()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x761778199FE1211C())
	{
		unk_0x21564F65F997D833(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_48()
{
	if (((unk_0x8608526719A575EE() == 8 || unk_0x8608526719A575EE() == 9) || unk_0x8608526719A575EE() == 10) || unk_0x8608526719A575EE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_49(int iParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1655472.f_7009[iParam0]), iParam1);
}

int func_50(int iParam0, int iParam1)
{
	return BitTest(Global_1655472.f_7009[iParam0], iParam1);
}

int func_51(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x762604C40829DB72(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x75EAB09F5E974116(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672505.f_3)
				{
					return Global_2672505.f_2;
				}
				else if (Global_2657589[iVar0 /*466*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_52()
{
}

void func_53()
{
	struct<3> Var0;
	bool bVar1;
	
	func_97();
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (!iLocal_56 && !BitTest(Global_44449, 10))
			{
				if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) <= 0)
				{
					bVar1 = !func_96();
					unk_0xB41DEC3AAC1AA107(unk_0x4A8C381C258A124D(), joaat("weapon_flare"), 1, bVar1, bVar1);
					unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_flare"), bVar1);
					iLocal_56 = 1;
				}
			}
			else if (BitTest(Global_44449, 10) || unk_0xED2558D599937EFD(unk_0x4A8C381C258A124D(), joaat("weapon_flare"), 100f, &(Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2), 1))
			{
				if (BitTest(Global_44449, 10))
				{
					Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
				}
				else if (func_95(Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2, 0f, 0f, 0f, 0))
				{
					Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 = { Var0 };
				}
				if (func_8("AIRSTRIKE_1"))
				{
					unk_0x428C32CC68809A35(1);
				}
				if (!iLocal_55)
				{
					if (!func_94(Local_238.f_2.f_3))
					{
						if (func_42(Local_238.f_2))
						{
							func_93();
							unk_0x974022927CB47E68(unk_0xC35A3A4C05A4831B(Local_238.f_2.f_3));
							unk_0x4BD42B0527065BB6(unk_0xC35A3A4C05A4831B(Local_238.f_2.f_3), uLocal_49);
							unk_0x1B8AC60684718568(unk_0xE38610F405049F71(Local_238.f_2), round(50f));
							iLocal_55 = 1;
						}
					}
				}
			}
			else if (!iLocal_54 && !BitTest(Global_44449, 10))
			{
				if (!unk_0x4C705AAF75363287())
				{
					if (func_92(unk_0x4A8C381C258A124D()))
					{
						func_7("AIRSTRIKE_4", -1);
					}
					else
					{
						func_7("AIRSTRIKE_1", -1);
					}
					iLocal_54 = 1;
				}
			}
		}
	}
	func_63();
	func_54();
}

void func_54()
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	
	switch (Local_238.f_2.f_2)
	{
		case 0:
			func_62();
			break;
		
		case 1:
			func_62();
			break;
		
		case 2:
			if (func_42(Local_238.f_2))
			{
				iLocal_58 = 1;
				uVar0 = unk_0xE38610F405049F71(Local_238.f_2);
				if (!unk_0xC450B06E5AAA0985(uLocal_47))
				{
					uLocal_47 = unk_0x18E23E031A9B798F(uVar0);
					unk_0x4C905FB262965D5D(uLocal_47, 16);
					unk_0x594D5D0D7071B0DE(uLocal_47, func_60());
					unk_0x89FE619BFBB2024B(uLocal_47, 0);
				}
				else
				{
					unk_0x0C4EDD88E2185B8F(uLocal_47, ceil(unk_0xCFC0C995455A6204(uVar0)));
				}
				if (!iLocal_53)
				{
					if (!func_44(Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2))
					{
						Var3 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 };
					}
					else
					{
						Var3 = { Local_60 };
					}
					if (unk_0xED977E2AE2CB16EE(Var3, unk_0xD1A6A821F5AC81DB(uVar0, 1), 1) <= (60f * 5f))
					{
						unk_0x40B0ADC3A86BF939(unk_0xE38610F405049F71(Local_238.f_2));
						iLocal_53 = 1;
					}
				}
				if (!iLocal_235 && !BitTest(Global_44449, 10))
				{
					if (!Local_238.f_54)
					{
						if (!func_94(Local_238.f_2.f_3))
						{
							if (!func_44(Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2))
							{
								if (unk_0xED977E2AE2CB16EE(func_59(unk_0x259BE71D8A81D4FA()), unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_238.f_2.f_3), 1), 0) <= 250f)
								{
									if (unk_0xED977E2AE2CB16EE(Var3, unk_0xD1A6A821F5AC81DB(iVar0, 1), 1) >= (60f * 2.5f))
									{
										if (func_41())
										{
											if (func_38())
											{
												func_15(&uLocal_69, "HS4FAUD", "HS4F_SAACI1", 12, 0, 0, 0);
											}
											else
											{
												func_58(&uLocal_69, "CT_AUD", "MPCT_ASarr", 12, 0, 0, 0);
											}
										}
										iLocal_235 = 1;
									}
								}
							}
						}
					}
				}
				if (Local_238.f_50 < 10)
				{
					if (!Local_238.f_53)
					{
						if (!func_44(Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2))
						{
							if (func_57() == 2)
							{
								if (!func_12(&uLocal_63))
								{
									func_11(&uLocal_63, 0, 0);
								}
								else if (func_10(&uLocal_63, 7500, 0))
								{
									Local_238.f_53 = 1;
								}
								Var1 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								Var2 = { Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								Var1.f_2 = -200f;
								Var2.f_2 = 1500f;
								if (unk_0x65FFA94B82A71741(iVar0, Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2, 75f, 75f, 1000f, 0, 1, 0) && unk_0x7A082DC02E5E00C1(Var1, Var2, joaat("weapon_flare"), 0))
								{
									Local_238.f_53 = 1;
								}
							}
							else if (func_57() == 1)
							{
								Local_238.f_53 = 1;
								Local_238.f_50 = 100;
							}
						}
						else if (unk_0x65FFA94B82A71741(iVar0, Local_60, 75f, 75f, 1000f, 0, 1, 0))
						{
							Local_238.f_53 = 1;
							Local_238.f_50 = 100;
							Local_238.f_54 = 1;
							if (!iLocal_236 && !BitTest(Global_44449, 10))
							{
								if (func_41())
								{
									if (!func_38())
									{
										func_58(&uLocal_69, "CT_AUD", "MPCT_ASflr", 12, 0, 0, 0);
									}
								}
								iLocal_236 = 1;
							}
						}
					}
				}
			}
			if (!func_42(Local_238.f_2) || func_94(Local_238.f_2.f_3))
			{
				func_55();
			}
			break;
		
		case 3:
			func_62();
			break;
	}
}

void func_55()
{
	var uVar0;
	
	if (!func_94(Local_238.f_2.f_3))
	{
		if (func_56(Local_238.f_2.f_3))
		{
			if (unk_0xEADBDBE0422CF7E6(Local_238.f_2.f_3))
			{
				uVar0 = unk_0xC35A3A4C05A4831B(Local_238.f_2.f_3);
				unk_0xD25E9BDC14A0B649(uVar0, 0, 0);
			}
		}
	}
}

int func_56(var uParam0)
{
	if (unk_0xB0AB1F334666E337(uParam0))
	{
		return 1;
	}
	if (unk_0x93E08E0F531E2C35())
	{
		unk_0x460D2A8B2C7DC7D4(uParam0);
	}
	return 0;
}

int func_57()
{
	if (Local_238.f_55 == 1)
	{
		return Local_238.f_55;
	}
	else if (Local_238.f_55 == 2)
	{
		return Local_238.f_55;
	}
	if (!unk_0x7830326EF9D54DBB(Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 + Vector(0.5f, 0f, 0f)))
	{
		Local_238.f_55 = 1;
		return Local_238.f_55;
	}
	Local_238.f_55 = 2;
	return Local_238.f_55;
}

int func_58(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_37(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21732 = 0;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_2883585 = 1;
	return func_16(sParam2, iParam3, 0);
}

Vector3 func_59(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

char* func_60()
{
	if (func_61())
	{
		return "PA_AIRSTRIKE_BLIP";
	}
	return "AIRSTRIKE_5";
}

bool func_61()
{
	return Global_2683864.f_24;
}

void func_62()
{
	if (unk_0xC450B06E5AAA0985(uLocal_47))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_47);
	}
}

void func_63()
{
	switch (Local_238.f_2.f_2)
	{
		case 0:
			func_91(1);
			break;
		
		case 1:
			if (func_64())
			{
				func_91(2);
			}
			break;
		
		case 2:
			if (!func_42(Local_238.f_2))
			{
				if (func_94(Local_238.f_2.f_3))
				{
					func_91(3);
				}
			}
			else if (func_94(Local_238.f_2.f_3))
			{
				func_91(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_64()
{
	if (!func_12(&uLocal_67))
	{
		func_11(&uLocal_67, 0, 0);
	}
	else if (func_90(Local_238.f_2.f_1) && func_90(Local_238.f_2.f_3.f_1))
	{
		if (func_10(&uLocal_67, 3000, 0))
		{
			if (func_68() && func_65())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_65()
{
	if ((!unk_0x2FC2FDC413532977(Local_238.f_2.f_3) && func_90(Local_238.f_2.f_3.f_1)) && unk_0x2FC2FDC413532977(Local_238.f_2))
	{
		if (func_42(Local_238.f_2))
		{
			if (func_67(&(Local_238.f_2.f_3), Local_238.f_2, 22, Local_238.f_2.f_3.f_1, -1, 1, 1, 1))
			{
				unk_0xAAA71DD7E9059338(unk_0xC35A3A4C05A4831B(Local_238.f_2.f_3), 1);
				unk_0x3CEA1FD137ACE2D9(unk_0xC35A3A4C05A4831B(Local_238.f_2.f_3), Global_1837208);
				unk_0xC6E8E1D693021E9E(unk_0xC35A3A4C05A4831B(Local_238.f_2.f_3), 0);
				unk_0x44FB298D6382876D(unk_0xC35A3A4C05A4831B(Local_238.f_2.f_3), 1);
				func_66();
				unk_0x4BD42B0527065BB6(unk_0xC35A3A4C05A4831B(Local_238.f_2.f_3), uLocal_48);
				unk_0x1B8AC60684718568(unk_0xE38610F405049F71(Local_238.f_2), round(50f));
			}
		}
	}
	if (!unk_0x2FC2FDC413532977(Local_238.f_2.f_3))
	{
		return 0;
	}
	unk_0x55098D9E9AD58806(Local_238.f_2.f_3.f_1);
	return 1;
}

void func_66()
{
	if (!iLocal_50)
	{
		if (func_42(Local_238.f_2))
		{
			unk_0xB5396F1FB088FE38(&uLocal_48);
			unk_0x8737E7B1F3150A9F(0, unk_0xE38610F405049F71(Local_238.f_2), 0, 0, Local_60 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, ceil((50f + 5f)), 20, 1);
			unk_0x8737E7B1F3150A9F(0, unk_0xE38610F405049F71(Local_238.f_2), 0, 0, Local_238.f_2.f_14, 4, 60f, 25f, -1f, ceil((50f + 5f)), 20, 1);
			unk_0x93C0674FC00824D0(uLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_67(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xADCE9BCAFCB83364(1))
	{
		return 0;
	}
	if (!unk_0x2FC2FDC413532977(uParam1))
	{
		return 0;
	}
	if (!unk_0xD9F5E1FEFD1329E4(unk_0xE38610F405049F71(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x9F7A52B1537567AC(unk_0x8728A378EF2B46B2(unk_0xE38610F405049F71(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x2FC2FDC413532977(*uParam0))
	{
		unk_0x11C125313CB8ADA2(unk_0xC35A3A4C05A4831B(*uParam0), iParam7);
		if (unk_0xC8D49539708A80B4(unk_0xC35A3A4C05A4831B(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x3C1752E361ED8FC9(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_68()
{
	struct<3> Var0;
	var uVar1;
	
	if (!unk_0x2FC2FDC413532977(Local_238.f_2))
	{
		if (func_90(Local_238.f_2.f_1))
		{
			if (unk_0xB3157976738FC0C0("AIRSTRIKE_FLYOVER", 0))
			{
				func_86(&Var0, &uVar1);
				if (func_72(Var0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_69(&(Local_238.f_2), Local_238.f_2.f_1, Var0, uVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						Local_238.f_2.f_14 = { Var0 * Vector(0f, -1f, -1f) };
						unk_0x0B74F181ADFC39BF(unk_0xE38610F405049F71(Local_238.f_2), 2);
						unk_0x5D7CD709B34C90F0(unk_0xE38610F405049F71(Local_238.f_2), 0);
						unk_0xC7D381E526A969D3(unk_0xE38610F405049F71(Local_238.f_2), 1);
						unk_0x79B52EC5A9AB6229(unk_0xE38610F405049F71(Local_238.f_2));
						unk_0x93C337B66C95C99B(unk_0xE38610F405049F71(Local_238.f_2), 60f);
						unk_0xC229299217554C78(unk_0xE38610F405049F71(Local_238.f_2), 1, 1, 0);
						unk_0x8C1172B230F4EB1A(unk_0xE38610F405049F71(Local_238.f_2), 1000);
						unk_0x11C125313CB8ADA2(unk_0xE38610F405049F71(Local_238.f_2), 0);
						unk_0xC2A036647DD761E4(unk_0xE38610F405049F71(Local_238.f_2), 3);
						unk_0xE2F63CAB8DDA4016(unk_0xE38610F405049F71(Local_238.f_2));
						unk_0x55098D9E9AD58806(Local_238.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_69(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x441B9C85D0FFA9ED(iParam1))
	{
		return 0;
	}
	if (!unk_0x2E9F58AD6FE93DFF(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x60040CDD28AA1BC3(Param2, fVar0, 0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x5779387E956077A6(iParam1, Param2, uParam3, iParam5, iParam4, iParam12);
	if (unk_0xFC8BFE4B41177C22(iVar1))
	{
		*uParam0 = unk_0x913A6486719A87D2(iVar1);
		Global_2793046.f_6736 = iVar1;
		if (unk_0x2FC2FDC413532977(*uParam0))
		{
			if (bParam13)
			{
				unk_0x32C336953C18A3CE(iVar1, 1);
			}
			unk_0x11C125313CB8ADA2(iVar1, iParam8);
			if (unk_0xC8D49539708A80B4(iVar1))
			{
				if (bParam6)
				{
					unk_0x3C1752E361ED8FC9(*uParam0, 1);
				}
				else
				{
					unk_0x3C1752E361ED8FC9(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x4C48F052678AA7EF(*uParam0, unk_0x259BE71D8A81D4FA(), 1);
				}
			}
			unk_0xD37CA6D6F8993BB9(iVar1, iParam7);
			unk_0xA133EF296C37D6E6(iVar1, 1);
			if (bParam10)
			{
				unk_0x8E18C9CFBC30C9FF(iVar1);
				unk_0x3E13A302AA0F06BF(iVar1, 5, 5, 1f);
			}
			func_70(Param2, uParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_70(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_71(unk_0x259BE71D8A81D4FA(), Param0, iParam2) > -1)
	{
		if ((Global_2635559.f_2921[1 /*6*/].f_5 == iParam3 && Global_2635559.f_2921[1 /*6*/].f_4 == iParam2) && vdist(Global_2635559.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635559.f_2921[iVar0 /*6*/] = { Global_2635559.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635559.f_2921[1 /*6*/] = { Param0 };
		Global_2635559.f_2921[1 /*6*/].f_3 = uParam1;
		Global_2635559.f_2921[1 /*6*/].f_4 = iParam2;
		Global_2635559.f_2921[1 /*6*/].f_5 = iParam3;
	}
}

int func_71(int iParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (unk_0x1D5CD3EAAA7422B0((Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_72(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2635559.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x913602ADD2D86A7A(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x2DBCF31839B069B4(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || unk_0x2DBCF31839B069B4(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x80F249EA6DFE8476(Param0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (bParam11)
	{
		if (unk_0xE8D2BD34CCB74431(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (fParam12 > 0f)
	{
		if (func_80(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_73(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2635559.f_2++;
	return 1;
}

int func_73(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_51(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (!unk_0x15CCE8886267624F())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xED977E2AE2CB16EE(func_78(unk_0x259BE71D8A81D4FA()), Param0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x7B780C491DEC834E(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_51(iVar1, 1, 1))
		{
			if (!func_75(iVar1, 0) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x259BE71D8A81D4FA()))
				{
					if ((func_74(iVar1) || !bParam8) && !Global_2657589[iVar1 /*466*/].f_270)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x1864096A95E36EBA(iVar1) == -1)
							{
								if (unk_0x1864096A95E36EBA(iVar1) == unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x1864096A95E36EBA(iVar1) != unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))) || unk_0x1864096A95E36EBA(iVar1) == -1)
							{
								if (unk_0xED977E2AE2CB16EE(func_78(iVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x267FC71D3F0D131A(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x1864096A95E36EBA(iVar1) != iParam6 || unk_0x1864096A95E36EBA(iVar1) == -1)
						{
							if (unk_0xED977E2AE2CB16EE(func_78(iVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x267FC71D3F0D131A(iVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_74(int iParam0)
{
	if (unk_0x870372B586EFB3EE(unk_0x56E414973C2A8C0E(iParam0)) || Global_2657589[iParam0 /*466*/].f_255)
	{
		return 1;
	}
	return 0;
}

bool func_75(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_76(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853910[iParam0 /*862*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x762604C40829DB72(iParam0))
		{
			bVar0 = unk_0x1864096A95E36EBA(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_76(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_77();
	}
	if (Global_1575040[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_77()
{
	return Global_1574918;
}

Vector3 func_78(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_79() && Global_1853910[iVar0 /*862*/].f_832) && !func_44(Global_1853910[iVar0 /*862*/].f_833))
	{
		return Global_1853910[iVar0 /*862*/].f_833;
	}
	return func_59(iParam0);
}

var func_79()
{
	return Global_2683864.f_19;
}

int func_80(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x259BE71D8A81D4FA() != iVar1) || iParam6 == 0)
		{
			if (func_51(iVar1, bParam2, bParam3))
			{
				if (iParam8 || unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
				{
					if (!bParam5 || (!unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(iVar1)) && func_74(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) != unk_0x1864096A95E36EBA(iVar1))) || unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
						{
							if (((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && uParam7) && bParam4) && func_81(iVar1))
							{
							}
							else if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(iVar1)))
							{
								if (unk_0xED977E2AE2CB16EE(func_59(iVar1), Param0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_81(int iParam0)
{
	if (func_85(unk_0x259BE71D8A81D4FA(), iParam0))
	{
		return 1;
	}
	Global_2764203 = { func_84(iParam0) };
	if (unk_0xEDD63461767A518C(&Global_2764203))
	{
		return 1;
	}
	if (func_82(unk_0x259BE71D8A81D4FA(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_83(iParam0);
	if (!iVar0 == func_21())
	{
		if (iVar0 == func_83(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_83(int iParam0)
{
	if (iParam0 != func_21())
	{
		return Global_1894573[iParam0 /*608*/].f_10;
	}
	return func_21();
}

struct<13> func_84(var uParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(uParam0, &Var0, 13);
	return Var0;
}

int func_85(int iParam0, var uParam1)
{
	if (unk_0x7260716F2E4D7661())
	{
		Global_2764203 = { func_84(iParam0) };
		Global_2764216 = { func_84(uParam1) };
		if (unk_0xE582BF3EDDBB1A68(&Global_2764203))
		{
			if (unk_0xE582BF3EDDBB1A68(&Global_2764216))
			{
				unk_0xC07B1AA6155EC337(&Global_2764133, 35, &Global_2764203);
				unk_0xC07B1AA6155EC337(&Global_2764168, 35, &Global_2764216);
				if (Global_2764133 == Global_2764168)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_86(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_88(Local_60 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = unk_0x2093CB9E0E9B985F((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_87(*uParam0, Local_60);
}

var func_87(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return unk_0x97BC40FFA2FFCCD2((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

Vector3 func_88(struct<3> Param0, float fParam1, float fParam2, float fParam3)
{
	struct<3> Var0;
	float fVar1;
	
	Var0 = { unk_0xD2AA6F822D3A55D2(-1f, 1f), unk_0xD2AA6F822D3A55D2(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	Var0 = { func_89(Var0, unk_0xD2AA6F822D3A55D2(fParam1, fParam2)) };
	Var0.f_2 = unk_0xD2AA6F822D3A55D2(-fVar1, fVar1);
	return Param0 + Var0;
}

Vector3 func_89(struct<3> Param0, float fParam1)
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = vmag(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_90(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xEC9DAA34BBB4658C(iParam0);
	return unk_0x6252BC0DD8A320DB(iParam0);
}

void func_91(int iParam0)
{
	if (iParam0 == 3)
	{
		Global_2793046.f_4487 = 0;
	}
	Local_238.f_2.f_2 = iParam0;
}

int func_92(int iParam0)
{
	var uVar0;
	
	if (unk_0xFE90F09EC43D7D44(iParam0))
	{
		uVar0 = unk_0x6EF03BE64E058E2F(iParam0, 0);
		if (unk_0xD9F5E1FEFD1329E4(uVar0, 0))
		{
			if (unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_93()
{
	if (!iLocal_51)
	{
		if (func_42(Local_238.f_2))
		{
			unk_0xB5396F1FB088FE38(&uLocal_49);
			unk_0x8737E7B1F3150A9F(0, unk_0xE38610F405049F71(Local_238.f_2), 0, 0, Local_240[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, ceil((50f + 5f)), 20, 1);
			unk_0x8737E7B1F3150A9F(0, unk_0xE38610F405049F71(Local_238.f_2), 0, 0, Local_238.f_2.f_14, 4, 60f, 25f, -1f, ceil((50f + 5f)), 20, 1);
			unk_0x93C0674FC00824D0(uLocal_49);
			iLocal_51 = 1;
		}
	}
}

int func_94(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(uParam0));
	}
	return 1;
}

bool func_95(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_96()
{
	return Global_100733.f_387 > 0;
}

void func_97()
{
	char* sVar0;
	
	if (!iLocal_234 && func_41())
	{
		if (!func_94(Local_238.f_2.f_3))
		{
			sVar0 = "FM_Pilot_Air";
			if (func_38())
			{
				sVar0 = "HS4_AIRSTRIKE1";
			}
			func_98(&uLocal_69, 3, unk_0xC35A3A4C05A4831B(Local_238.f_2.f_3), sVar0, 1, 1);
			iLocal_234 = 1;
		}
	}
}

void func_98(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78558)
	{
		if (!unk_0x4FAFF4BCB7633475(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC1BC1B8A5AA67C6B(uParam2, 0);
			}
			else
			{
				unk_0xC1BC1B8A5AA67C6B(uParam2, 1);
			}
		}
		if (!unk_0x4FAFF4BCB7633475(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x26C12212366CBF6E(uParam2, 0);
			}
			else
			{
				unk_0x26C12212366CBF6E(uParam2, 1);
			}
		}
	}
}

void func_99()
{
	Global_2793046.f_4486 = Local_238.f_53;
}

int func_100()
{
	return Local_238.f_0;
}

int func_101(int iParam0)
{
	return Local_240[iParam0 /*5*/];
}

void func_102()
{
}

void func_103()
{
	if (unk_0x2FC2FDC413532977(Local_238.f_2.f_3) && unk_0x2FC2FDC413532977(Local_238.f_2))
	{
		if (func_42(Local_238.f_2) && !func_94(Local_238.f_2.f_3))
		{
			unk_0x8737E7B1F3150A9F(unk_0xC35A3A4C05A4831B(Local_238.f_2.f_3), unk_0xE38610F405049F71(Local_238.f_2), 0, unk_0x4A8C381C258A124D(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 400, 400, 1);
		}
	}
	func_105(func_106(1, 1), 11, func_21());
	func_104();
}

void func_104()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_105(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = -379103418;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x01F0B819E78A18A1(1, &Var0, 6, iParam0);
	}
}

int func_106(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(iVar1);
		if (func_51(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, iVar1);
				}
				else if (!func_75(iVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_107()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_114())
	{
		return 1;
	}
	if (Global_2696917)
	{
		return 1;
	}
	if (func_113())
	{
		return 1;
	}
	if (func_112(159))
	{
		if (!func_111())
		{
			return 1;
		}
	}
	if (func_112(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_108() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_108()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_108()
{
	switch (func_110())
	{
		case 0:
			return func_109();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_109()
{
	switch (Global_2697021)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_110()
{
	return Global_32163;
}

bool func_111()
{
	return Global_2683864.f_698;
}

int func_112(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_113()
{
	return Global_2694526;
}

bool func_114()
{
	return Global_2683864.f_693;
}

void func_115()
{
	wait(0);
}

void func_116(struct<21> Param0)
{
	func_122(func_123(Param0.f_0), Param0);
	unk_0x17C7D9B3979F5759(1);
	unk_0x552B3BADB43FF551(1);
	func_120(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&Local_238, 58, 0);
	unk_0x7B13DC83218D9AF5(&Local_240, 11, 0);
	unk_0xAECC5FA98C879D67(0);
	if (!func_119())
	{
		func_103();
	}
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		Local_60 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0) };
	}
	if (func_4(unk_0x259BE71D8A81D4FA(), 1, 0))
	{
		bLocal_52 = true;
	}
	func_117(64, 1);
	Local_240[unk_0xAE032CEDCF23C6D5() /*5*/] = 0;
}

void func_117(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2359296[func_118() /*5568*/].f_681.f_19 = iVar0;
			break;
		
		case 19:
			Global_2359296[func_118() /*5568*/].f_681.f_18 = iVar0;
			break;
		
		case 74:
			Global_2359296[func_118() /*5568*/].f_681.f_12 = iVar0;
			break;
		
		case 29:
			Global_2359296[func_118() /*5568*/].f_681.f_14 = iVar0;
			break;
		
		case 8:
			Global_2359296[func_118() /*5568*/].f_681.f_15 = iVar0;
			break;
		
		case 31:
			Global_2359296[func_118() /*5568*/].f_681.f_16 = iVar0;
			break;
		
		case 3:
			Global_2359296[func_118() /*5568*/].f_681.f_20 = iVar0;
			break;
		
		case 6:
			Global_2359296[func_118() /*5568*/].f_681.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2359296[func_118() /*5568*/].f_681.f_23 = iVar0;
			break;
		
		case 76:
			Global_2359296[func_118() /*5568*/].f_681.f_24 = iVar0;
			break;
		
		case 93:
			Global_2359296[func_118() /*5568*/].f_681.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2359296[func_118() /*5568*/].f_681.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2359296[func_118() /*5568*/].f_681.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2359296[func_118() /*5568*/].f_681.f_29 = iVar0;
			break;
		
		case 88:
			Global_2359296[func_118() /*5568*/].f_681.f_28 = iVar0;
			break;
		
		case 100:
			Global_2359296[func_118() /*5568*/].f_681.f_31 = iVar0;
			break;
		
		case 106:
			Global_2359296[func_118() /*5568*/].f_681.f_32 = iVar0;
			break;
		
		case 99:
			Global_2359296[func_118() /*5568*/].f_681.f_30 = iVar0;
			break;
	}
}

int func_118()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_119()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 0;
		}
		if (unk_0x37F4AB46DE999660())
		{
			return 1;
		}
		if (func_114())
		{
			return 0;
		}
		if (func_112(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_120(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_104();
			}
			else
			{
				return 0;
			}
		}
		if (!func_121(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_104();
					}
					else
					{
						return 0;
					}
				}
				if (func_114())
				{
					if (!bParam2)
					{
						func_104();
					}
					else
					{
						return 0;
					}
				}
				if (func_112(157))
				{
					if (!bParam2)
					{
						func_104();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xBF52D447C795492B())
			{
				if (!bParam2)
				{
					func_104();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0xDFF16B5B12604EFF();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			if (!bParam2)
			{
				func_104();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xBF52D447C795492B())
	{
		if (!bParam2)
		{
			func_104();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_121(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_122(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		func_104();
	}
	unk_0xDB2434E51017FFCC(uParam0, 0, Param1.f_16);
}

int func_123(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 173:
			return 32;
		
		case 174:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 185:
			return 32;
		
		case 186:
			return 32;
		
		case 175:
			return 32;
		
		case 176:
			return 32;
		
		case 180:
			return 32;
		
		case 178:
			return 32;
		
		case 179:
			return 32;
		
		case 183:
			return 32;
		
		case 184:
			return 32;
		
		case 181:
			return 32;
		
		case 182:
			return 32;
		
		case 187:
			return 32;
		
		case 188:
			return 32;
		
		case 189:
			return 32;
		
		case 190:
			return 32;
		
		case 191:
			return 2;
		
		case 196:
			return 1;
		
		case 192:
			return 2;
		
		case 193:
			return 4;
		
		case 194:
			return 2;
		
		case 195:
			return 2;
		
		case 177:
			return 1;
		
		case 197:
			return 2;
		
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
			return 0;
		
		case 219:
			return 1;
		
		case 204:
			return 4;
		
		case 207:
			return 4;
		
		case 208:
			return 1;
		
		case 209:
			return 1;
		
		case 215:
			return 1;
		
		case 211:
			return 2;
		
		case 216:
			return 1;
		
		case 212:
			return 1;
		
		case 210:
			return 2;
		
		case 213:
			return 8;
		
		case 214:
			return 8;
		
		case 217:
			return 1;
		
		case 218:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 205:
			return 16;
		
		case 206:
			return 32;
		
		default:
	}
	switch (func_124(func_125(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		default:
	}
	return -1;
}

int func_125(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 191:
			return 15;
		
		case 198:
			return 8;
		
		case 192:
			return 14;
		
		case 196:
			return 122;
		
		case 199:
			return 1;
		
		case 197:
			return 5;
		
		case 200:
			return 6;
		
		case 193:
			return 11;
		
		case 201:
			return 0;
		
		case 202:
			return 2;
		
		case 194:
			return 13;
		
		case 203:
			return 3;
		
		case 195:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		default:
	}
	if (bParam1)
	{
	}
	return 312;
}
