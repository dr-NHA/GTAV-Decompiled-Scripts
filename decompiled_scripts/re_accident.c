#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	bool bLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	float fLocal_55 = 0f;
	float fLocal_56 = 0f;
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<3> Local_58 = { 0, 0, 0 } ;
	int iLocal_59 = 0;
	struct<5> Local_60[31];
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<5> Local_68[14];
	float fLocal_69 = 0f;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	struct<3> Local_74 = { 0, 0, 0 } ;
	struct<3> Local_75 = { 0, 0, 0 } ;
	struct<3> Local_76 = { 0, 0, 0 } ;
	struct<3> Local_77 = { 0, 0, 0 } ;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 16;
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
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	struct<3> Local_273 = { 0, 0, 0 } ;
	struct<3> Local_274 = { 0, 0, 0 } ;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	bool bLocal_282 = 0;
	struct<33> Local_283 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_284 = 1;
	struct<2> Local_285 = { 0, 5 } ;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 5;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_49 = -1;
	iLocal_52 = -1;
	fLocal_55 = 0.5f;
	fLocal_56 = 0f;
	iLocal_62 = 1;
	fLocal_69 = 160f;
	iLocal_73 = 55000;
	Local_76 = { 30f, 30f, 5f };
	iLocal_102 = -1;
	Local_273 = { -458.4085f, -984.6459f, 22.5892f };
	Local_274 = { -458.1934f, -995.4897f, 22.7427f };
	Local_74 = { ScriptParam_285.f_1[0 /*3*/] };
	if (unk_0x96CFB880BAC634CE(11))
	{
		func_180();
	}
	if (unk_0x5295501D0862870D() > 18 || unk_0x5295501D0862870D() < 5)
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	if (func_138(Local_74, -1, 0, 0, 0))
	{
		func_135(-1);
	}
	else
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	while (true)
	{
		wait(0);
		if (unk_0x173751E886F8E9AB())
		{
			if (!func_134())
			{
				if (func_133())
				{
					func_180();
				}
			}
			unk_0xECF30459397D5190("RE_CA", 0);
			switch (iLocal_70)
			{
				case 0:
					if (func_121())
					{
						func_180();
					}
					func_115();
					func_112(&Local_283);
					break;
				
				case 1:
					func_22();
					func_112(&Local_283);
					func_13();
					break;
				
				case 2:
					if (((unk_0xFC8BFE4B41177C22(iLocal_78) && unk_0x89568FA9A6BC0B4A(iLocal_78, 1)) && iLocal_98 < 5) && !bLocal_95)
					{
						func_12();
					}
					func_1();
					break;
			}
		}
		else
		{
			func_180();
		}
	}
}

void func_1()
{
	if (iLocal_280 && !iLocal_281)
	{
		unk_0x86A2BC11844DEEB3("RE14A_FAIL");
		iLocal_97 = 0;
		while (iLocal_97 < 11)
		{
			if (unk_0xFC8BFE4B41177C22(uLocal_88[iLocal_97]))
			{
				unk_0x5D7CD709B34C90F0(uLocal_88[iLocal_97], 0);
			}
			iLocal_97++;
		}
		if (!unk_0x1C2F771CDC87A3A5(iLocal_80, 0))
		{
			unk_0x2AEBE39F6BF7D6BC(iLocal_80, 0f);
			unk_0x5D7CD709B34C90F0(iLocal_80, 0);
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_89))
		{
			unk_0x5D7CD709B34C90F0(iLocal_89, 0);
		}
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
		unk_0x37B894853929BF1A(1);
		unk_0x747786364137DC63(1);
		func_2(0, 1, 1, 0, 0, 0, 0);
		iLocal_92 = 1;
		unk_0xE6AC149D1121535D(1f);
		unk_0x268BE77F77533D03("re@construction");
		if (unk_0x78411E34CF90EA8C(uLocal_275))
		{
			unk_0x85E6A1E36B5E2E4D(uLocal_275, 0);
			unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
			unk_0x64BB72494B9DF6DC(0f);
			unk_0xD815D4BD1AE9E85A(0f, 1065353216);
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
		}
		if (unk_0xC450B06E5AAA0985(uLocal_84))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_84);
		}
		if (unk_0xC450B06E5AAA0985(uLocal_85))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_85);
		}
		if (unk_0xC450B06E5AAA0985(uLocal_86))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_86);
		}
		if (unk_0xC450B06E5AAA0985(uLocal_87))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_87);
		}
		iLocal_281 = 1;
	}
	if (unk_0xFC8BFE4B41177C22(uLocal_88[0]) || unk_0xFC8BFE4B41177C22(uLocal_88[1]))
	{
		if (!unk_0x7B780C491DEC834E(Local_75 + Vector(20f, 0f, 0f), 30f) && !unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_75, 80f, 80f, 80f, 0, 1, 0))
		{
			func_180();
		}
	}
}

void func_2(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_11(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_10())
			{
				Global_20383.f_1 = 3;
			}
			Global_21725 = 5;
		}
		func_9(1, iParam3, iParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_11(0);
		unk_0xCCC82B30A1C53626();
		Global_63368 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_9(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_7(unk_0x259BE71D8A81D4FA())) && !func_4(unk_0x259BE71D8A81D4FA(), 0)) && !func_3()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_7(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_78556 = 0;
	}
}

bool func_3()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_18, 14);
}

bool func_4(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_5(-1, 0) == 8;
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

int func_5(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_6();
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

int func_6()
{
	return Global_1574918;
}

int func_7(int iParam0)
{
	if (func_4(iParam0, 0))
	{
		return 1;
	}
	if (func_8())
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657589[iParam0 /*466*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_8()
{
	return BitTest(Global_2621446, 3);
}

int func_9(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x4A0B7E53EBC937D5() != iParam0 && uParam2)
		{
			unk_0x7882946B06ED216B(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_10()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_11(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 13);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8253, 13);
	}
}

void func_12()
{
	if (iLocal_102 == -1)
	{
		iLocal_102 = unk_0x1DD05E817C89C737() + 5000;
	}
	if (unk_0x1DD05E817C89C737() > iLocal_102)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_80))
		{
			unk_0x5D7CD709B34C90F0(iLocal_80, 0);
			unk_0xE592D924D5438108(iLocal_80, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			if (!unk_0x1C2F771CDC87A3A5(iLocal_80, 0))
			{
				unk_0xAE89444B15234CCE(iLocal_80, 1, 0);
			}
		}
	}
}

void func_13()
{
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		func_21();
		func_20();
		func_17();
		func_14();
	}
}

void func_14()
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	Var1 = { 0f, 0f, 0f };
	if (iLocal_61 == 0)
	{
		if (unk_0xDDF99E38A910C346(&Var1, Local_68[0 /*5*/]))
		{
			fVar2 = 0f;
			fVar5 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_68.f_0)
			{
				if (iVar0 > 0)
				{
					fVar2 = (fVar2 + unk_0xED977E2AE2CB16EE(Local_68[(iVar0 - 1) /*5*/], Local_68[iVar0 /*5*/], 1));
				}
				if (Local_68[iVar0 /*5*/].f_4)
				{
					if (unk_0xDDF99E38A910C346(&Var1, Local_68[iVar0 /*5*/]))
					{
						fVar4 = unk_0xED977E2AE2CB16EE(Local_68[iVar0 /*5*/], Var1, 1);
						if (fVar4 < fVar5)
						{
							fVar5 = fVar4;
							fVar6 = fVar2;
							iVar3 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar5 < fLocal_55)
			{
				iVar3 = iVar3;
				iLocal_61 = 1;
				iLocal_63 = unk_0x1DD05E817C89C737();
				fVar6 = fVar6;
				Local_58 = { Local_68[iVar3 /*5*/] };
				iLocal_59 = iVar3;
				iLocal_64 = iVar3 * 2;
				iLocal_66 = iLocal_64;
				iLocal_67 = iLocal_64;
				if (iLocal_67 < 0)
				{
					iLocal_67 = 0;
				}
				if (iLocal_66 >= Local_68.f_0 * 2)
				{
					iLocal_66 = (Local_68.f_0 * 2 - 1);
				}
			}
		}
	}
	if (iLocal_61 == 1)
	{
		unk_0xAB03CF772B43A288();
		fVar7 = (to_float((unk_0x1DD05E817C89C737() - iLocal_63)) / fLocal_69);
		iVar8 = (floor((fVar7 / (1f / 2f))) - 1);
		iVar9 = (iLocal_64 + iVar8);
		iVar10 = (iLocal_64 - iVar8);
		if (iVar9 >= 28)
		{
			iVar9 = 27;
		}
		if (iVar10 < 0)
		{
			iVar10 = 0;
		}
		if (iVar9 > iLocal_66)
		{
			iVar0 = iLocal_66 + 1;
			while (iVar0 <= iVar9)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_68.f_0)
				{
					if (Local_68[iVar11 /*5*/].f_4)
					{
						func_15(iVar0, 1);
					}
					else
					{
						iVar9 = (iVar0 - 1);
						iVar0 = iVar9 + 1;
					}
				}
				iVar0++;
			}
			iLocal_66 = iVar9;
		}
		if (iVar10 < iLocal_67)
		{
			iVar0 = (iLocal_67 - 1);
			while (iVar0 >= iVar10)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_68.f_0)
				{
					if (Local_68[iVar11 /*5*/].f_4)
					{
						func_15(iVar0, 1);
					}
					else
					{
						iVar10 = iVar0 + 1;
						iVar0 = (iVar10 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_67 = iVar10;
		}
		iVar0 = 0;
		while (iVar0 < Local_60.f_0)
		{
			if ((unk_0x1DD05E817C89C737() - Local_60[iVar0 /*5*/].f_4) > 1000)
			{
				unk_0x726D5358D13D53BD(Local_60[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((unk_0x1DD05E817C89C737() - Local_60[iVar0 /*5*/].f_4) > 6000)
			{
				unk_0xCA60A45D232EEDDB(Local_60[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_15(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 14)
			{
				func_16(Local_68[(iParam0 / 2) /*5*/] + Local_68[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_56, fLocal_56, fLocal_56), iParam1);
			}
		}
		else if ((iParam0 / 2) < 14)
		{
			func_16(Local_68[(iParam0 / 2) /*5*/] + Vector(fLocal_56, fLocal_56, fLocal_56), iParam1);
		}
	}
}

void func_16(struct<3> Param0, int iParam1)
{
	if (iLocal_62 == 0)
	{
		iParam1 = 0;
	}
	unk_0xCA60A45D232EEDDB(Local_60[iLocal_65 /*5*/]);
	if (Local_60[iLocal_65 /*5*/].f_4 != 0)
	{
		unk_0x726D5358D13D53BD(Local_60[iLocal_65 /*5*/].f_1, 0.4f, 1f);
	}
	Local_60[iLocal_65 /*5*/].f_4 = unk_0x1DD05E817C89C737();
	Local_60[iLocal_65 /*5*/].f_1 = { Param0 };
	Local_60[iLocal_65 /*5*/] = unk_0xC86536B840EE3AB3(Param0, uLocal_53, iParam1);
	iLocal_65++;
	if (iLocal_65 >= 31)
	{
		iLocal_65 = 0;
	}
}

void func_17()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (bLocal_48)
	{
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar1, 1);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (unk_0x6D05C5731A838CB3(0, 24) && unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
			{
				if (iLocal_54 == 0)
				{
					unk_0xA62957B100C8DE6D(2f, 8f, 4);
					iLocal_54 = unk_0x1DD05E817C89C737() + 250;
				}
				if (unk_0x1DD05E817C89C737() > iLocal_54)
				{
					if (!bLocal_44)
					{
						fVar4 = 9999.9f;
						Local_57 = { func_19() };
						iVar0 = 0;
						while (iVar0 < Local_68.f_0)
						{
							if (unk_0xC450B06E5AAA0985(Local_68[iVar0 /*5*/].f_3))
							{
								fVar2 = unk_0xED977E2AE2CB16EE(Local_57, unk_0x3CF9D442F2C902BD(Local_68[iVar0 /*5*/].f_3), 1);
								fVar3 = unk_0xED977E2AE2CB16EE(Local_68[iVar0 /*5*/], unk_0x3CF9D442F2C902BD(Local_68[iVar0 /*5*/].f_3), 1);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_68[iVar0 /*5*/] = { Local_57 };
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_50 != -1)
							{
								if (unk_0x510D0699BE9C6D06((iLocal_51 - iVar5)) > 1)
								{
									iLocal_51 = -1;
								}
								if (iLocal_51 == -1)
								{
									iLocal_51 = iLocal_50;
								}
								if (unk_0x510D0699BE9C6D06((iLocal_51 - iVar5)) < 3 && unk_0x510D0699BE9C6D06((iLocal_51 - iVar5)) > 0)
								{
									if (iLocal_51 < iVar5)
									{
										iVar6 = iLocal_51;
										while (iVar6 <= (iVar5 - 1))
										{
											if (unk_0xC450B06E5AAA0985(Local_68[iVar6 /*5*/].f_3))
											{
												if (unk_0xF03FBAFA0284124E(Local_68[iVar6 /*5*/].f_3) > 0)
												{
													unk_0xF42EBD7CD0682A8B(Local_68[iVar6 /*5*/].f_3, 0);
													Local_68[iVar6 /*5*/].f_4 = 1;
													iLocal_52 = (iLocal_52 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_51)
										{
											if (unk_0xC450B06E5AAA0985(Local_68[iVar6 /*5*/].f_3))
											{
												if (unk_0xF03FBAFA0284124E(Local_68[iVar6 /*5*/].f_3) > 0)
												{
													unk_0xF42EBD7CD0682A8B(Local_68[iVar6 /*5*/].f_3, 0);
													Local_68[iVar6 /*5*/].f_4 = 1;
													iLocal_52 = (iLocal_52 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_51 = iLocal_50;
								}
								if (iVar5 == 0)
								{
									if (unk_0xC450B06E5AAA0985(Local_68[iVar5 /*5*/].f_3))
									{
										if (unk_0xF03FBAFA0284124E(Local_68[iVar5 /*5*/].f_3) > 0)
										{
											unk_0xF42EBD7CD0682A8B(Local_68[iVar5 /*5*/].f_3, 0);
											Local_68[iVar5 /*5*/].f_4 = 1;
											iLocal_52 = (iLocal_52 - 1);
										}
									}
								}
								if (iVar5 == 13)
								{
									if (unk_0xC450B06E5AAA0985(Local_68[iVar5 /*5*/].f_3))
									{
										if (unk_0xF03FBAFA0284124E(Local_68[iVar5 /*5*/].f_3) > 0)
										{
											unk_0xF42EBD7CD0682A8B(Local_68[iVar5 /*5*/].f_3, 0);
											Local_68[iVar5 /*5*/].f_4 = 1;
											iLocal_52 = (iLocal_52 - 1);
										}
									}
								}
								if (iVar5 < 13)
								{
									if (func_18(Local_68[iVar5 + 1 /*5*/]))
									{
										if (unk_0xC450B06E5AAA0985(Local_68[iVar5 /*5*/].f_3))
										{
											if (unk_0xF03FBAFA0284124E(Local_68[iVar5 /*5*/].f_3) > 0)
											{
												unk_0xF42EBD7CD0682A8B(Local_68[iVar5 /*5*/].f_3, 0);
												Local_68[iVar5 /*5*/].f_4 = 1;
												iLocal_52 = (iLocal_52 - 1);
											}
										}
									}
								}
							}
							iLocal_50 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_50 = -1;
				iLocal_51 = -1;
				iLocal_54 = 0;
			}
		}
	}
}

int func_18(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_19()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	var uVar4;
	
	iVar0 = unk_0x484426882F80CACE(unk_0x4A8C381C258A124D(), 1);
	if (unk_0xFC8BFE4B41177C22(iVar0))
	{
		iVar1 = unk_0x365DC1E8054AF31A(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		Var2 = { unk_0x75DF72FC74EED046(iVar0, iVar1) };
		Var2 = { unk_0xF10F2A2453AF1DFB(Var2, unk_0xCFC0C995455A6204(iVar0), 0.35f, 0f, -0.15f) };
		unk_0xB1EAADCB692D69CE(Var2, &uVar4, 0, 0);
		Var3 = { Var2.f_0, Var2.f_1, uVar4 };
	}
	return Var3;
}

void func_20()
{
	int iVar0;
	
	if (iLocal_46)
	{
		if (iLocal_61)
		{
			iVar0 = 0;
			while (iVar0 < Local_60.f_0)
			{
				unk_0xCA60A45D232EEDDB(Local_60[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_46 = 0;
		iLocal_61 = 1;
		iLocal_63 = unk_0x1DD05E817C89C737();
		iVar0 = 0;
		while (iVar0 < Local_68.f_0)
		{
			Local_68[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_49 != -1)
		{
			iLocal_67 = iLocal_49;
			iLocal_66 = iLocal_49;
			iLocal_64 = iLocal_49;
		}
		else
		{
			iLocal_67 = -1;
			iLocal_66 = -1;
			iLocal_64 = iLocal_49;
		}
		iLocal_65 = 1;
	}
}

void func_21()
{
	if (!iLocal_47)
	{
		iLocal_47 = 1;
	}
}

void func_22()
{
	switch (iLocal_71)
	{
		case 0:
			unk_0xD7E1DF759CD0FFF2("CONSTRUCTION_ACCIDENT_1", 0, -1);
			unk_0x80813AC549A1E8AE("re@construction");
			if (Local_283.f_32 <= 0)
			{
				Local_283.f_32 = unk_0x8034325BF6D6E41F();
			}
			func_111(&Local_283, joaat("s_m_m_dockwork_01"));
			func_111(&Local_283, joaat("prop_generator_01a"));
			func_111(&Local_283, joaat("p_amb_phone_01"));
			func_108(&Local_283);
			if ((unk_0xD7E1DF759CD0FFF2("CONSTRUCTION_ACCIDENT_1", 0, -1) && unk_0xE100DD4F82A51BDE("re@construction")) && func_104(&Local_283))
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_80, 0))
				{
					iLocal_78 = unk_0x8728A378EF2B46B2(iLocal_80, 26, joaat("s_m_m_dockwork_01"), -1, 1, 1);
					unk_0xD1C578C204015E1F(iLocal_78, 0, 1, 0, 0);
					unk_0xD1C578C204015E1F(iLocal_78, 3, 1, 1, 0);
					unk_0xD1C578C204015E1F(iLocal_78, 4, 0, 1, 0);
					unk_0xD1C578C204015E1F(iLocal_78, 8, 0, 0, 0);
					unk_0x10425721983AE158(iLocal_78, "re@construction", "idle_c", 1000f, -1000f, -1, 49, 0.4f, 0, 0, 0);
					iLocal_90 = unk_0x4E55EAB577C13329(joaat("p_amb_phone_01"), -455.6561f, -985.8071f, 22.4868f, 1, 1, 0);
					unk_0x55098D9E9AD58806(joaat("p_amb_phone_01"));
					unk_0x4D306DD94DD6FDBA(iLocal_90, iLocal_78, unk_0x72F7E39FB49FC0BA(iLocal_78, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
					unk_0xBE8796DB2B90A437(iLocal_78, 17, 1);
					unk_0x3CDDF07147FB8B6F(iLocal_78, 1);
					unk_0xAAA71DD7E9059338(iLocal_78, 1);
					unk_0x3F58BFCF656F0DF1(iLocal_78, 0);
					func_103(&uLocal_108, 3, iLocal_78, "RECONACWorker", 0, 1);
					unk_0x397CF4F4C8B17365(iLocal_78, "S_M_Y_GENERICWORKER_01_WHITE_01");
					uLocal_79 = unk_0xB1DBFEB95C0EFB88(26, joaat("s_m_m_dockwork_01"), -462.2982f, -978.3272f, 65f, 221.4041f, 1, 1);
					unk_0xAAA71DD7E9059338(uLocal_79, 1);
					unk_0x788F35D395511DFE(iLocal_79, 1, 1);
					unk_0x5D7CD709B34C90F0(iLocal_79, 1);
					unk_0x26FA2603829F9CF9(iLocal_78, joaat("empty"));
					unk_0x0A0952DE8943B17C(joaat("empty"), 24);
					unk_0x0A0952DE8943B17C(joaat("empty"), 47);
					unk_0x0A0952DE8943B17C(joaat("empty"), 62);
					unk_0x0A0952DE8943B17C(joaat("empty"), 138);
					unk_0x0A0952DE8943B17C(joaat("empty"), 56);
					iLocal_89 = unk_0x4E55EAB577C13329(joaat("prop_generator_01a"), Local_274.f_0, (Local_274.f_1 + 0.5f), (Local_274.f_2 - 0.25f), 1, 1, 0);
					unk_0x5C96CEA06531AB03(iLocal_89, 75f);
					unk_0xD0F1DB0E50B367AD(iLocal_89, 0, 1, 1, 0, 0, 0, 0, 0);
					uLocal_279 = unk_0x62750FD2BDD8BD49("scr_sparking_generator", iLocal_89, 0f, 0f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					unk_0x5D7CD709B34C90F0(iLocal_89, 1);
					func_102(&uLocal_108, "CONACAU", "CONAC_CHAT", 4, 0, 0, 0, 0);
					iLocal_101 = unk_0x1DD05E817C89C737();
					iLocal_71 = 1;
				}
			}
			break;
		
		case 1:
			if (iLocal_91)
			{
				func_97();
			}
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (!iLocal_92)
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_78))
					{
						if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -532.2208f, -849.2668f, 19.7038f, -531.6973f, -1065.341f, 60.7893f, 190.8125f, 0, 1, 0))
						{
							if (!unk_0x1C2F771CDC87A3A5(iLocal_80, 0))
							{
								if (!unk_0xC450B06E5AAA0985(uLocal_85))
								{
									uLocal_85 = func_96(iLocal_80, 0, 0);
								}
							}
						}
						if (unk_0x9B3D4335E0EDB0BE(iLocal_78, unk_0x4A8C381C258A124D(), 1) || unk_0x9B3D4335E0EDB0BE(iLocal_80, unk_0x4A8C381C258A124D(), 1))
						{
							unk_0x5D7CD709B34C90F0(iLocal_80, 0);
							unk_0x974022927CB47E68(iLocal_78);
							unk_0xB5396F1FB088FE38(&uLocal_107);
							unk_0x092B9247AF00F5CF(0, 0, 0);
							unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 150f, -1, 0, 0);
							unk_0x93C0674FC00824D0(uLocal_107);
							unk_0x4BD42B0527065BB6(iLocal_78, uLocal_107);
							unk_0xD0557B139A542F12(&uLocal_107);
							func_95();
						}
						unk_0xEC9DAA34BBB4658C(joaat("prop_ld_pipe_single_01"));
						if ((((unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), -473.1686f, -984.6405f, 22.487f, 40f, 40f, 5f, 0, 1, 0) && !unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D())) && !unk_0xC5F2281709805477(unk_0x4A8C381C258A124D())) && func_94(1, 0, 1)) && unk_0x6252BC0DD8A320DB(joaat("prop_ld_pipe_single_01")))
						{
							if (!func_134())
							{
								if (!unk_0x1C2F771CDC87A3A5(unk_0xDC8D5832207C2EAD(), 0))
								{
									iLocal_83 = unk_0xDC8D5832207C2EAD();
								}
								func_84(1);
							}
							iLocal_91 = 1;
						}
					}
					else
					{
						func_95();
					}
				}
				else
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_78))
					{
						if (unk_0x7F420695E3F776FB(iLocal_78, 0))
						{
							if (!unk_0x1C2F771CDC87A3A5(iLocal_80, 0) && !unk_0xC450B06E5AAA0985(uLocal_85))
							{
								uLocal_85 = func_96(iLocal_80, 0, 0);
							}
						}
						else if (!unk_0xC450B06E5AAA0985(uLocal_84))
						{
							if (unk_0xC450B06E5AAA0985(uLocal_85))
							{
								unk_0xFE54B8568B2ABD12(&uLocal_85);
							}
							uLocal_84 = func_81(iLocal_78, 0, 145);
						}
					}
					func_52();
					func_49();
					if (!unk_0x4FAFF4BCB7633475(iLocal_78))
					{
						if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_78, Local_76, 0, 1, 0))
						{
							if (!bLocal_93)
							{
								func_48();
							}
						}
					}
					else
					{
						if (unk_0xC450B06E5AAA0985(uLocal_84))
						{
							unk_0xFE54B8568B2ABD12(&uLocal_84);
						}
						if (unk_0xC450B06E5AAA0985(uLocal_85))
						{
							unk_0xFE54B8568B2ABD12(&uLocal_85);
						}
						if (unk_0xC450B06E5AAA0985(uLocal_86))
						{
							unk_0xFE54B8568B2ABD12(&uLocal_86);
						}
						if (unk_0x4FAFF4BCB7633475(iLocal_78) || unk_0x1C2F771CDC87A3A5(iLocal_80, 0))
						{
							func_95();
						}
					}
					if (!unk_0xD9F5E1FEFD1329E4(iLocal_81, 0))
					{
						if (unk_0xC450B06E5AAA0985(uLocal_86))
						{
							unk_0xFE54B8568B2ABD12(&uLocal_86);
							if (!unk_0x1C2F771CDC87A3A5(iLocal_80, 0) && !unk_0xC450B06E5AAA0985(uLocal_85))
							{
								uLocal_85 = func_96(iLocal_80, 0, 0);
							}
						}
					}
				}
				if (unk_0xD9F5E1FEFD1329E4(iLocal_81, 0))
				{
					if (iLocal_103 >= 3)
					{
						if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && unk_0x0595DAC15F5513F9(unk_0x4A8C381C258A124D(), joaat("bulldozer")))
						{
							if (unk_0xC450B06E5AAA0985(uLocal_86))
							{
								unk_0xFE54B8568B2ABD12(&uLocal_86);
								if (!unk_0x4FAFF4BCB7633475(iLocal_78) && !unk_0x1C2F771CDC87A3A5(iLocal_80, 0))
								{
									if (unk_0x7F420695E3F776FB(iLocal_78, 0) && !unk_0xC450B06E5AAA0985(uLocal_85))
									{
										uLocal_85 = func_96(iLocal_80, 0, 0);
									}
								}
							}
						}
						else if (!unk_0x4FAFF4BCB7633475(iLocal_78) && !unk_0x1C2F771CDC87A3A5(iLocal_80, 0))
						{
							if (unk_0x7F420695E3F776FB(iLocal_78, 0) && unk_0xC450B06E5AAA0985(uLocal_85))
							{
								unk_0xFE54B8568B2ABD12(&uLocal_85);
								if (!unk_0xC450B06E5AAA0985(uLocal_86))
								{
									uLocal_86 = func_96(iLocal_81, 0, 0);
								}
							}
						}
					}
				}
				if (!unk_0x4FAFF4BCB7633475(iLocal_78))
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if (unk_0x0595DAC15F5513F9(unk_0x4A8C381C258A124D(), joaat("bulldozer")))
						{
							iLocal_97 = 0;
							while (iLocal_97 < 11)
							{
								if (unk_0xFC8BFE4B41177C22(uLocal_88[iLocal_97]))
								{
									unk_0x5D7CD709B34C90F0(uLocal_88[iLocal_97], 0);
								}
								iLocal_97++;
							}
						}
					}
				}
				if (!unk_0x1C2F771CDC87A3A5(iLocal_80, 0))
				{
					if (unk_0x5B702A5D1F2635BE(iLocal_80))
					{
						iLocal_97 = 0;
						while (iLocal_97 < 11)
						{
							if (unk_0xFC8BFE4B41177C22(uLocal_88[iLocal_97]))
							{
								unk_0x5D7CD709B34C90F0(uLocal_88[iLocal_97], 0);
							}
							iLocal_97++;
						}
						unk_0x5D7CD709B34C90F0(iLocal_80, 0);
						if (!unk_0x4FAFF4BCB7633475(iLocal_78))
						{
							if (unk_0x7F420695E3F776FB(iLocal_78, 0))
							{
								unk_0xAAA71DD7E9059338(iLocal_78, 1);
								unk_0x0428AFDCAA63B06E(iLocal_78, 116, 0);
								unk_0x0428AFDCAA63B06E(iLocal_78, 29, 0);
								if (!bLocal_95)
								{
									func_46();
									wait(0);
									func_24(&uLocal_108, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
									while (func_23())
									{
										wait(0);
									}
									bLocal_95 = true;
								}
								if (!unk_0x4FAFF4BCB7633475(iLocal_78))
								{
									unk_0xD25E9BDC14A0B649(iLocal_78, 99, 0);
								}
								if (!unk_0x1C2F771CDC87A3A5(iLocal_80, 0))
								{
									unk_0x5D7CD709B34C90F0(iLocal_80, 0);
									unk_0xE592D924D5438108(iLocal_80, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
									unk_0xAE89444B15234CCE(iLocal_80, 1, 0);
								}
								func_95();
							}
						}
					}
				}
			}
			break;
	}
}

int func_23()
{
	if (Global_21725 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

int func_24(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_45(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_25(sParam2, iParam3, 0);
}

int func_25(char* sParam0, int iParam1, bool bParam2)
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
					func_44();
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
		if (func_43(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_42();
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
				func_34();
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
				if (func_33())
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
			if (func_10())
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
			func_32();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_31();
		func_26();
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
		func_44();
	}
	return 0;
}

void func_26()
{
	if (!func_27())
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

int func_27()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_30())
	{
		return 0;
	}
	if (func_28(unk_0x259BE71D8A81D4FA()))
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

bool func_28(int iParam0)
{
	return func_29(iParam0, 20);
}

var func_29(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_30()
{
	return -1;
}

void func_31()
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

void func_32()
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

int func_33()
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

void func_34()
{
	if (func_41(14))
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
		Global_20383 = func_35();
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

int func_35()
{
	func_36();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_36()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_39(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_38(unk_0x4A8C381C258A124D());
			if (func_37(iVar0) && (!func_41(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_37(Global_113648.f_2365.f_539.f_4321))
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

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)
{
	if (func_37(iParam0))
	{
		return func_40(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_40(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

bool func_41(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_42()
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

bool func_43(int iParam0, int iParam1)
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

void func_44()
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

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_46()
{
	Global_20591 = 0;
	func_47();
}

void func_47()
{
	unk_0xC78B293A5F4EACF9();
	Global_22736 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_21725 = 6;
	}
}

void func_48()
{
	switch (iLocal_103)
	{
		case 0:
			if (!unk_0x4FAFF4BCB7633475(iLocal_78))
			{
				if ((unk_0x1DD05E817C89C737() - iLocal_101) > 3000)
				{
					func_24(&uLocal_108, "CONACAU", "CONAC_HELP", 4, 0, 0, 0);
					iLocal_105 = unk_0x1DD05E817C89C737();
					iLocal_101 = unk_0x1DD05E817C89C737();
					iLocal_103 = 2;
				}
			}
			break;
		
		case 1:
			if (!unk_0x4FAFF4BCB7633475(iLocal_78))
			{
				if ((unk_0x1DD05E817C89C737() - iLocal_101) > 3000)
				{
					iLocal_101 = unk_0x1DD05E817C89C737();
					iLocal_103++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x4FAFF4BCB7633475(iLocal_78))
			{
				if ((unk_0x1DD05E817C89C737() - iLocal_101) > 5000 && !func_23())
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						iLocal_106 = unk_0x4B423FAA24E8ABF0(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0));
					}
					if (unk_0x7F420695E3F776FB(iLocal_78, 0))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_81, 0))
						{
							if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
							{
								if (!unk_0x0595DAC15F5513F9(unk_0x4A8C381C258A124D(), joaat("bulldozer")))
								{
									if (!unk_0xC450B06E5AAA0985(uLocal_86))
									{
										uLocal_86 = func_96(iLocal_81, 0, 0);
										if (unk_0xC450B06E5AAA0985(uLocal_85))
										{
											unk_0xFE54B8568B2ABD12(&uLocal_85);
										}
									}
								}
							}
							else if (!unk_0xC450B06E5AAA0985(uLocal_86))
							{
								uLocal_86 = func_96(iLocal_81, 0, 0);
								if (unk_0xC450B06E5AAA0985(uLocal_85))
								{
									unk_0xFE54B8568B2ABD12(&uLocal_85);
								}
							}
						}
					}
					if (iLocal_106 == joaat("bulldozer"))
					{
						func_24(&uLocal_108, "CONACAU", "CONAC_HELP2", 4, 0, 0, 0);
					}
					else
					{
						func_24(&uLocal_108, "CONACAU", "CONAC_HELP3", 4, 0, 0, 0);
					}
					iLocal_101 = unk_0x1DD05E817C89C737();
					iLocal_103++;
				}
			}
			break;
		
		case 3:
			if (unk_0x1DD05E817C89C737() - iLocal_101) > unk_0xC5935DFB3F39785A(5000, 8000)
			{
				if (!func_23())
				{
					func_24(&uLocal_108, "CONACAU", "CONAC_HURRY", 4, 0, 0, 0);
					iLocal_101 = unk_0x1DD05E817C89C737();
				}
			}
			break;
	}
}

void func_49()
{
	switch (iLocal_99)
	{
		case 0:
			unk_0x037E59D590865D5A(Local_274 + Vector(0f, 1f, 0f), 1f, 1f, 1f);
			wait(0);
			unk_0xE01851169F9A48A4(1f);
			unk_0x83993C32C04DE125(Local_273, 1f);
			wait(0);
			unk_0x83993C32C04DE125(Local_273 - Vector(0f, 4f, 0f), 1f);
			wait(0);
			unk_0x83993C32C04DE125(Local_273 - Vector(0f, 8f, 0f), 1f);
			wait(0);
			unk_0x83993C32C04DE125(Local_274, 1f);
			unk_0x28F49AC9C6000789();
			iLocal_105 = unk_0x1DD05E817C89C737();
			iLocal_99 = 2;
			break;
		
		case 2:
			if ((unk_0x1DD05E817C89C737() - iLocal_105) > iLocal_73 || func_51())
			{
				if (unk_0x9CFFB7009B578840(uLocal_279))
				{
					unk_0x182120534CCF9023(uLocal_279, 0);
				}
				func_50();
				if (!bLocal_95)
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_78) && !unk_0x1C2F771CDC87A3A5(iLocal_80, 0))
					{
						if (!unk_0x848DE0A81098ECCB(iLocal_78, iLocal_80, -1, 0, 0) && !unk_0x848DE0A81098ECCB(iLocal_78, iLocal_80, 0, 0, 0))
						{
							func_46();
							wait(0);
							func_24(&uLocal_108, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
							bLocal_95 = true;
						}
					}
				}
				unk_0xCC1C92F7E1A3CE9D(3, 1);
				unk_0x6625908717AE7808(80f);
				unk_0x5E08BBBF87BC4886(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 0, 1, 1);
				unk_0x70DA4F87B396F9F9(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_278, 0, 0);
				settimera(0);
				iLocal_99 = 3;
			}
			break;
		
		case 3:
			if (unk_0xFC8BFE4B41177C22(iLocal_80))
			{
				if (!unk_0x5B702A5D1F2635BE(iLocal_80))
				{
				}
			}
			if (iLocal_98 < 2)
			{
				if (timera() > 5000)
				{
					if (!unk_0x1C2F771CDC87A3A5(iLocal_80, 0))
					{
						unk_0x5D7CD709B34C90F0(iLocal_80, 0);
						unk_0xE592D924D5438108(iLocal_80, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						unk_0xAE89444B15234CCE(iLocal_80, 1, 0);
					}
				}
			}
			break;
	}
}

void func_50()
{
	iLocal_46 = 1;
}

int func_51()
{
	if (iLocal_61 == 1)
	{
		return 1;
	}
	return 0;
}

void func_52()
{
	struct<3> Var0;
	
	switch (iLocal_98)
	{
		case 0:
			if (iLocal_103 >= 2)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_78) && !unk_0x1C2F771CDC87A3A5(iLocal_80, 0))
				{
					if (!unk_0x7F420695E3F776FB(iLocal_78, 0))
					{
						iLocal_98++;
					}
					unk_0x51C8BEA2005931AB(&iLocal_90);
					if (unk_0x848DE0A81098ECCB(iLocal_78, iLocal_80, -1, 0, 0) || unk_0x848DE0A81098ECCB(iLocal_78, iLocal_80, 0, 0, 0))
					{
						if (unk_0x848DE0A81098ECCB(iLocal_78, iLocal_80, -1, 0, 0))
						{
							bLocal_94 = true;
							Local_77 = { unk_0xD1A6A821F5AC81DB(iLocal_80, 0) + Vector(0f, -1f, -3f) };
						}
						else
						{
							Local_77 = { unk_0xD1A6A821F5AC81DB(iLocal_80, 0) + Vector(0f, 1.5f, -3f) };
						}
						if (unk_0x65FFA94B82A71741(unk_0xDC8D5832207C2EAD(), Local_77, 4.2f, 4f, 5f, 0, 1, 0))
						{
							if (!bLocal_93)
							{
								func_46();
								wait(0);
								func_24(&uLocal_108, "CONACAU", "CONAC_FREE", 4, 0, 0, 0);
								bLocal_93 = true;
							}
						}
						else
						{
							bLocal_93 = true;
							iLocal_98++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x4FAFF4BCB7633475(iLocal_78) && !unk_0x1C2F771CDC87A3A5(iLocal_80, 0))
			{
				if (!unk_0x1C2F771CDC87A3A5(iLocal_81, 0))
				{
					unk_0xD0F1DB0E50B367AD(iLocal_81, 0, 1, 1, 0, 0, 0, 0, 0);
				}
				unk_0xD0F1DB0E50B367AD(iLocal_78, 0, 1, 0, 0, 0, 0, 0, 0);
				unk_0x5D7CD709B34C90F0(iLocal_80, 0);
				unk_0xB5396F1FB088FE38(&uLocal_107);
				if (bLocal_94)
				{
					unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), 3000, 0, 2);
					unk_0x092B9247AF00F5CF(0, 0, 0);
					unk_0xA966E518B752B92A(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 1048576000, 0, 1193033728);
				}
				else
				{
					unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), 3000, 0, 2);
					unk_0x092B9247AF00F5CF(0, 0, 0);
					unk_0xA966E518B752B92A(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 1048576000, 0, 1193033728);
				}
				unk_0x93C0674FC00824D0(uLocal_107);
				unk_0x4BD42B0527065BB6(iLocal_78, uLocal_107);
				unk_0xD0557B139A542F12(&uLocal_107);
				unk_0x44FB298D6382876D(iLocal_78, 1);
				iLocal_101 = unk_0x1DD05E817C89C737();
				iLocal_98++;
			}
			break;
		
		case 2:
			if (!unk_0x4FAFF4BCB7633475(iLocal_78))
			{
				if ((unk_0x1DD05E817C89C737() - iLocal_101) > 500 && !unk_0x7F420695E3F776FB(iLocal_78, 0))
				{
					iLocal_73 = 0;
					if (unk_0xD9F5E1FEFD1329E4(iLocal_80, 0))
					{
					}
					func_46();
					wait(0);
					func_24(&uLocal_108, "CONACAU", "CONAC_BOOM", 4, 0, 0, 0);
					iLocal_101 = unk_0x1DD05E817C89C737();
					iLocal_98++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x4FAFF4BCB7633475(iLocal_78))
			{
				if (unk_0x65FFA94B82A71741(iLocal_78, -464.7217f, -989.7214f, 22.4867f, 3f, 10f, 3f, 0, 1, 0) || (unk_0x1DD05E817C89C737() - iLocal_101) > 10000)
				{
					func_24(&uLocal_108, "CONACAU", "CONAC_AAAH", 4, 0, 0, 0);
					iLocal_98++;
				}
			}
			break;
		
		case 4:
			if (!unk_0x4FAFF4BCB7633475(iLocal_78))
			{
				if (unk_0x65FFA94B82A71741(iLocal_78, -472.7056f, -991.105f, 22.4867f, 3f, 30f, 3f, 0, 1, 0) || (unk_0x1DD05E817C89C737() - iLocal_101) > 10000)
				{
					if (!unk_0x1C2F771CDC87A3A5(iLocal_80, 0))
					{
						unk_0x5D7CD709B34C90F0(iLocal_80, 0);
						unk_0xE592D924D5438108(iLocal_80, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						unk_0xAE89444B15234CCE(iLocal_80, 1, 0);
					}
					iLocal_98++;
				}
			}
			break;
		
		case 5:
			if ((unk_0x1DD05E817C89C737() - iLocal_101) > 3000)
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_80, 0))
				{
					unk_0x5D7CD709B34C90F0(iLocal_80, 0);
					unk_0xE592D924D5438108(iLocal_80, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					unk_0xAE89444B15234CCE(iLocal_80, 1, 0);
				}
				if (!unk_0x4FAFF4BCB7633475(iLocal_78))
				{
					unk_0x86A2BC11844DEEB3("RE14A_SAFE");
					if (!unk_0x1C2F771CDC87A3A5(iLocal_81, 0))
					{
						unk_0xD0F1DB0E50B367AD(iLocal_81, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					unk_0xD0F1DB0E50B367AD(iLocal_78, 0, 0, 0, 0, 0, 0, 0, 0);
					unk_0x9FF00EA9A61211D2(iLocal_78, 1);
					unk_0x3F58BFCF656F0DF1(iLocal_78, 1);
					unk_0x3CDDF07147FB8B6F(iLocal_78, 0);
					unk_0xAAA71DD7E9059338(iLocal_78, 0);
					unk_0x26FA2603829F9CF9(iLocal_78, joaat("DEFAULT"));
					unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
					unk_0xB5396F1FB088FE38(&uLocal_107);
					unk_0x10425721983AE158(0, "re@construction", "Out_Of_Breath", 2f, -2f, -1, 0, 0f, 0, 0, 0);
					unk_0xC58DD79B4CA8487F(uLocal_107, 1);
					unk_0x93C0674FC00824D0(uLocal_107);
					unk_0x4BD42B0527065BB6(iLocal_78, uLocal_107);
					unk_0xD0557B139A542F12(&uLocal_107);
				}
				unk_0x5E08BBBF87BC4886(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 0, 1, 1);
				unk_0x70DA4F87B396F9F9(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_278, 0, 0);
				iLocal_101 = unk_0x1DD05E817C89C737();
				iLocal_98++;
			}
			break;
		
		case 6:
			if (!unk_0x4FAFF4BCB7633475(iLocal_78))
			{
				if ((unk_0x1DD05E817C89C737() - iLocal_101) > 6400)
				{
					Var0 = { -477.2774f, -990.0638f, 23.5497f };
					if (unk_0xFC8BFE4B41177C22(unk_0xDC8D5832207C2EAD()))
					{
						if (unk_0x65FFA94B82A71741(unk_0xDC8D5832207C2EAD(), -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (unk_0xFC8BFE4B41177C22(iLocal_83))
					{
						if (unk_0x65FFA94B82A71741(iLocal_83, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (unk_0xFC8BFE4B41177C22(iLocal_81))
					{
						if (unk_0x65FFA94B82A71741(iLocal_81, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					unk_0xB5396F1FB088FE38(&uLocal_107);
					unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), 3000, 2052, 2);
					unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
					unk_0x634E47EF112F3802(0, "WORLD_HUMAN_PICNIC", Var0, 304.8172f, 0, 1, 0);
					unk_0x93C0674FC00824D0(uLocal_107);
					unk_0x4BD42B0527065BB6(iLocal_78, uLocal_107);
					unk_0xD0557B139A542F12(&uLocal_107);
					func_24(&uLocal_108, "CONACAU", "CONAC_THANK", 4, 0, 0, 0);
					func_53();
				}
			}
			else
			{
				func_95();
			}
			break;
	}
}

void func_53()
{
	while (!func_80())
	{
		wait(0);
	}
	func_76(func_35(), 4, 2);
	func_57(-1, 0);
	func_54();
	iLocal_70 = 2;
}

void func_54()
{
	func_55();
}

int func_55()
{
	if (func_56(0))
	{
		return 0;
	}
	if (Global_100720.f_8)
	{
		if (Global_100720.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100720.f_10 > 1)
	{
		return 0;
	}
	Global_100720.f_10++;
	return 1;
}

int func_56(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_57(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_74();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_73(iParam0))
	{
		func_72(iParam0, bParam1);
		if (!func_71(51))
		{
			func_67("RE_REWARD", 1, 0, 4000, 10000, func_70(), 0, 138, 0);
			func_66(51);
		}
		if (func_65(iParam0))
		{
			Global_113648.f_24997.f_2 = 3;
		}
		if (func_64(iParam0, bParam1) != 322)
		{
			func_59(func_64(iParam0, bParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113636 = bParam1;
		if (Global_113634 == 0)
		{
			if (((Global_113637 == 1 || Global_113637 == 5) || Global_113637 == 11) || Global_113637 == 25)
			{
				func_58(2);
			}
			else if ((Global_113637 == 26 || Global_113637 == 8) || Global_113637 == 17)
			{
				func_58(7);
			}
			else
			{
				func_58(1);
			}
		}
	}
}

void func_58(int iParam0)
{
	Global_113634 = iParam0;
}

void func_59(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_63((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113648.f_10196[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113648.f_10196[iParam0 /*12*/].f_6 == 11 || Global_113648.f_10196[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113648.f_10196[iParam0 /*12*/].f_5 = 1;
		Global_113648.f_10196[iParam0 /*12*/].f_10 = uParam1;
		Global_113648.f_10196[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x8DD7F37773EBD5B9(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x8DD7F37773EBD5B9(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x8DD7F37773EBD5B9(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_60();
	}
}

void func_60()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_113384 = 0;
	Global_113385 = 0;
	Global_113386 = 0;
	Global_113387 = 0;
	Global_113388 = 0;
	Global_113389 = 0;
	Global_113390 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113648.f_10196.f_3853;
	Global_113648.f_10196.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113648.f_10196[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113648.f_10196[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113384++;
					fVar1 = (fVar1 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113385++;
					fVar2 = (fVar2 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113386++;
					fVar3 = (fVar3 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113387++;
					fVar4 = (fVar4 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113388++;
					fVar5 = (fVar5 + (Global_113648.f_10196[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113389++;
					fVar6 = (fVar6 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113390++;
					fVar7 = (fVar7 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113367 > 0)
	{
		if (Global_113384 == Global_113367)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113368 > 0)
	{
		if (Global_113385 == Global_113368)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113369 > 0)
	{
		if (Global_113386 == Global_113369)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113370 > 0)
	{
		if (Global_113387 == Global_113370)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113371 > 0)
	{
		if (((Global_113388 == Global_113371 || (Global_113371 * 10 / Global_113388) < 41) || Global_113388 > Global_113374) || Global_113388 == Global_113374)
		{
			if (!BitTest(Global_113648.f_10196.f_3856, 14))
			{
				if (Global_113388 == Global_113371)
				{
					unk_0x8DD7F37773EBD5B9(joaat("num_rndevents_completed"), Global_113371, 0);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_10196.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113372 > 0)
	{
		if (Global_113389 == Global_113372)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113373 > 0)
	{
		if (Global_113390 == Global_113373)
		{
			fVar7 = 5f;
		}
	}
	Global_113648.f_10196.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113388 > Global_113374 || Global_113388 == Global_113374)
	{
		iVar9 = Global_113374;
	}
	else
	{
		iVar9 = Global_113388;
	}
	unk_0x1164A75E490C27B6(joaat("num_missions_completed"), Global_113384, 1);
	unk_0x1164A75E490C27B6(joaat("num_missions_available"), Global_113367, 1);
	unk_0x1164A75E490C27B6(joaat("num_minigames_completed"), Global_113385, 1);
	unk_0x1164A75E490C27B6(joaat("num_minigames_available"), Global_113368, 1);
	unk_0x1164A75E490C27B6(joaat("num_oddjobs_completed"), Global_113386, 1);
	unk_0x1164A75E490C27B6(joaat("num_oddjobs_available"), Global_113369, 1);
	unk_0x1164A75E490C27B6(joaat("num_rndpeople_completed"), Global_113387, 1);
	unk_0x1164A75E490C27B6(joaat("num_rndpeople_available"), Global_113370, 1);
	unk_0x1164A75E490C27B6(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x1164A75E490C27B6(joaat("num_rndevents_available"), Global_113374, 1);
	unk_0x1164A75E490C27B6(joaat("num_misc_completed"), (Global_113390 + Global_113389), 1);
	unk_0x1164A75E490C27B6(joaat("num_misc_available"), (Global_113373 + Global_113372), 1);
	Global_113391 = (Global_113384 * 100 / Global_113367);
	Global_113393 = ((Global_113386 + Global_113385) * 100 / (Global_113369 + Global_113368));
	Global_113392 = ((Global_113387 + iVar9) * 100 / (Global_113370 + Global_113374));
	Global_113394 = ((Global_113389 + Global_113390) * 100 / (Global_113372 + Global_113373));
	unk_0x4F8678C02360C3D2(joaat("total_progress_made"), Global_113648.f_10196.f_3853, 1);
	unk_0x1164A75E490C27B6(joaat("percent_story_missions"), Global_113391, 1);
	unk_0x1164A75E490C27B6(joaat("percent_ambient_missions"), Global_113392, 1);
	unk_0x1164A75E490C27B6(joaat("percent_oddjobs"), Global_113393, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_113648.f_10196.f_3853))
	{
		func_62(13, floor(Global_113648.f_10196.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_78558)
		{
			if (func_61() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113382 = 0;
				}
				if (!Global_63362)
				{
					func_55();
				}
			}
		}
	}
}

int func_61()
{
	return Global_32163;
}

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xB3E8CE9ABB5AD331(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xE3872E56266EDEDC(iParam0, iParam1);
	}
	return 0;
}

void func_63(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_6();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

int func_64(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (bParam1 == 1)
			{
				return 281;
			}
			if (bParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (bParam1 == 1)
			{
				return 271;
			}
			if (bParam1 == 2)
			{
				return 272;
			}
			if (bParam1 == 3)
			{
				return 273;
			}
			if (bParam1 == 4)
			{
				return 274;
			}
			if (bParam1 == 5)
			{
				return 275;
			}
			if (bParam1 == 6)
			{
				return 276;
			}
			if (bParam1 == 7)
			{
				return 277;
			}
			if (bParam1 == 8)
			{
				return 278;
			}
			if (bParam1 == 9)
			{
				return 279;
			}
			if (bParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (bParam1 == 1)
			{
				return 246;
			}
			if (bParam1 == 2)
			{
				return 247;
			}
			if (bParam1 == 3)
			{
				return 248;
			}
			if (bParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (bParam1 == 1)
			{
				return 260;
			}
			if (bParam1 == 2)
			{
				return 261;
			}
			if (bParam1 == 3)
			{
				return 262;
			}
			if (bParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (bParam1 == 1)
			{
				return 224;
			}
			if (bParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (bParam1 == 1)
			{
				return 244;
			}
			if (bParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return 221;
			}
			if (bParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return 213;
			}
			if (bParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 267;
			}
			if (bParam1 == 2)
			{
				return 268;
			}
			if (bParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (bParam1 == 1)
			{
				return 227;
			}
			if (bParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 257;
			}
			if (bParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return 229;
			}
			if (bParam1 == 2)
			{
				return 230;
			}
			if (bParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_65(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_66(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	iVar1 = 0;
	while (bVar0 > 31)
	{
		bVar0 = (bVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_20412.f_150[iVar1]), bVar0);
	}
}

void func_67(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_68(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_68(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x1B79E937E91F40C3(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_20412.f_145)
	{
		if (unk_0x1B79E937E91F40C3(&(Global_113648.f_20412[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113648.f_20412.f_145 < 9)
	{
		StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8 = (unk_0x1DD05E817C89C737() + iParam3);
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9 = iParam5;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11 = iParam6;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12 = uParam2;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13 = iParam7;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14 = iParam8;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = ((unk_0x1DD05E817C89C737() + iParam3) + iParam4);
		}
		else
		{
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = -1;
		}
		Global_113648.f_20412.f_145++;
		func_69();
	}
}

void func_69()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113648.f_20412.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_20412.f_145)
	{
		if (BitTest(Global_113648.f_20412[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[0])
			{
				Global_113648.f_20412.f_146[0] = Global_113648.f_20412[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113648.f_20412[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[1])
			{
				Global_113648.f_20412.f_146[1] = Global_113648.f_20412[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113648.f_20412[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[2])
			{
				Global_113648.f_20412.f_146[2] = Global_113648.f_20412[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_70()
{
	func_36();
	switch (Global_113648.f_2365.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_71(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_113648.f_20412.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_72(int iParam0, bool bParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_24997.f_8[iParam0]), bParam1);
}

int func_73(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_74()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1AF90EB93E0012D6(), 64);
	uVar1 = func_75(Var0);
	return uVar1;
}

int func_75(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x70E57E9927B6BA58(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_76(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 14192;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 14192)
			{
				iVar0 = func_79(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_77(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_77(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805029[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
	}
}

int func_78(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
		if (iVar1 > -1)
		{
			Global_2804741 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2804741 = 1;
		}
	}
	return iVar0;
}

int func_79(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805029[iParam0 /*3*/][func_78(iParam1)];
		if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_80()
{
	return 1;
}

var func_81(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_82(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC450B06E5AAA0985(uVar0)) && unk_0x6BA487C862DB8DDF(&(Global_2028[iParam2 /*29*/].f_3)))
	{
		unk_0x594D5D0D7071B0DE(uVar0, &(Global_2028[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_82(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_83(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6A52036D51C7E18E(uVar0, bParam1);
		}
		else
		{
			unk_0x61183D6239A9D7B8(uVar0, 2);
		}
	}
	else if (unk_0x0101C509A6E67F99(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_83(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_83(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_83(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_84(int iParam0)
{
	if (func_88())
	{
		Global_113638 = 1;
		Global_113635 = unk_0x1DD05E817C89C737();
		if (func_65(Global_113637))
		{
			func_85(0);
		}
		unk_0xB51A8DA1DD0D2E4E(1, "RE_TITLE");
		if (iParam0 && func_65(Global_113637))
		{
			unk_0x2716F9D3A99349AB();
		}
		return 1;
	}
	return 0;
}

void func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113648.f_24997.f_2 < 3)
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_86(func_87(iParam0), -1);
					Global_113648.f_24997.f_2++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113644, false);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113644, 1))
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_86(func_87(iParam0), -1);
					Global_113648.f_24997.f_3++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113644, true);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113644, 2))
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_86(func_87(iParam0), -1);
					Global_113648.f_24997.f_4++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113644, 2);
				}
			}
			break;
	}
}

void func_86(var uParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(uParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

char* func_87(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_88()
{
	switch (func_89(&Global_32223, 0, 5, 0, unk_0x8F76B2250AC806FA()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_89(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98159.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_93(0))
		{
			return 0;
		}
		Global_43221++;
		*uParam0 = Global_43221;
		unk_0x2B52F77101390E6F(unk_0xB6B621402486C3E4(), 0);
		Global_23131.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xB1495D79F52B9EEE(8);
		}
		Global_43257 = iParam2;
		Global_43219 = *uParam0;
		Global_43220 = iParam4;
		Global_43218 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43218 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43218)
			{
				if (Global_43224[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43219 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_91(iParam2))
		{
			return 0;
		}
		if (Global_43218 == 8)
		{
			return 0;
		}
		Global_43221++;
		*uParam0 = Global_43221;
		Global_43224[Global_43218 /*4*/] = Global_43221;
		Global_43224[Global_43218 /*4*/].f_1 = iParam1;
		Global_43224[Global_43218 /*4*/].f_2 = iParam2;
		Global_43224[Global_43218 /*4*/].f_3 = 0;
		Global_43218++;
		if (iParam4 != 0)
		{
			func_90(uParam0, iParam4);
		}
	}
	return 2;
}

void func_90(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_43218 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43218)
	{
		if (Global_43224[iVar0 /*4*/] == *uParam0)
		{
			Global_43224[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_91(int iParam0)
{
	return func_92(iParam0, Global_43257);
}

int func_92(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_93(int iParam0)
{
	if (Global_43257 == 15)
	{
		return 0;
	}
	if (func_91(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_94(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x94A7730DEC6E86C8())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
		{
			return 0;
		}
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (bParam0)
		{
			if (unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				if (unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) != unk_0x4A8C381C258A124D())
				{
					return 0;
				}
			}
		}
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0x032CEF99C0D59B73(iVar0) < 0.95f || unk_0x032CEF99C0D59B73(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (!unk_0xF7C1BF3F9EB7C65E(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

void func_95()
{
	unk_0x86A2BC11844DEEB3("RE14A_FAIL");
	iLocal_70 = 2;
}

int func_96(int iParam0, bool bParam1, bool bParam2)
{
	return func_82(iParam0, !bParam1, bParam2);
}

void func_97()
{
	if (func_100(1000))
	{
		func_46();
		unk_0x8F72AF14CE5AACE4(800);
		while (unk_0x78ABC1D11B34F324())
		{
			wait(0);
		}
		if (!unk_0x1C2F771CDC87A3A5(iLocal_80, 0))
		{
			unk_0x2BDD547718FF1F1A(iLocal_80, 0f, 1f, 1f, 200f, 800f, 1);
		}
		bLocal_282 = true;
		iLocal_72 = 8;
	}
	switch (iLocal_72)
	{
		case 0:
			func_2(1, 1, 1, 0, 0, 0, 0);
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
			unk_0xAD01710361B8BCF5();
			unk_0x37B894853929BF1A(0);
			unk_0x747786364137DC63(0);
			unk_0x51E3279E9437131C(0);
			if (unk_0xFC8BFE4B41177C22(unk_0xDC8D5832207C2EAD()))
			{
				unk_0xEE0BCDB1B5E36BCB(unk_0xDC8D5832207C2EAD(), 1, 0);
			}
			unk_0x55F7AC4B2B875901(Local_75, 50f, 0);
			unk_0x60040CDD28AA1BC3(Local_75, 30f, 0, 0, 0, 0, 0, 0, 0);
			unk_0xEC73DFE5CE55E19C(Local_75, 100f, 0);
			if (!unk_0x1C2F771CDC87A3A5(unk_0xDC8D5832207C2EAD(), 0))
			{
				if (unk_0x65FFA94B82A71741(unk_0xDC8D5832207C2EAD(), Local_75, 8f, 8f, 8f, 0, 1, 0))
				{
					uLocal_82 = unk_0xDC8D5832207C2EAD();
					unk_0xEE0BCDB1B5E36BCB(uLocal_82, 1, 0);
					unk_0x8C1F7D7A31B2A38E(&iLocal_82);
				}
			}
			if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), -473.1686f, -984.6405f, 22.487f, 15f, 15f, 5f, 0, 1, 0))
			{
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -477.3538f, -972.67f, 22.5494f, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 237.4839f);
			}
			uLocal_276 = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, -0.1371f, -0.0346f, -29.6605f, 28f, 1, 2);
			uLocal_277 = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, 69.4831f, -0.0346f, -40.8884f, 28f, 1, 2);
			unk_0x2A09425009DAD0F5(uLocal_276, "HAND_SHAKE", 0.3f);
			unk_0x2A09425009DAD0F5(uLocal_277, "HAND_SHAKE", 0.3f);
			func_99();
			unk_0x4CBC5D1BC117616B(uLocal_276, 1);
			unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
			wait(500);
			unk_0xB56F35D8A770F80F(uLocal_277, uLocal_276, 3500, 1, 1);
			unk_0x86A2BC11844DEEB3("RE14A_START");
			iLocal_104 = unk_0x1DD05E817C89C737();
			iLocal_72 = 1;
			break;
		
		case 1:
			if ((unk_0x1DD05E817C89C737() - iLocal_104) > 3500)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "WEAKEN", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				unk_0xBF3D28CA44F3BE2D(iLocal_100, "WIND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				unk_0x4B46E3AF872076CE(uLocal_88[0], 1);
				func_98(uLocal_276);
				func_98(uLocal_277);
				uLocal_276 = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", -455.4617f, -990.631f, 61.6885f, -89.0761f, -0.0146f, -49.881f, 80.5355f, 1, 2);
				uLocal_277 = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", -455.4543f, -990.6208f, 61.012f, -89.0759f, -0.0146f, -47.8226f, 80.5355f, 1, 2);
				unk_0x2A09425009DAD0F5(uLocal_276, "HAND_SHAKE", 0.3f);
				unk_0x2A09425009DAD0F5(uLocal_277, "HAND_SHAKE", 0.3f);
				unk_0xB56F35D8A770F80F(uLocal_277, uLocal_276, 4000, 1, 0);
				if (!unk_0x4FAFF4BCB7633475(iLocal_78))
				{
					unk_0x974022927CB47E68(iLocal_78);
					unk_0xE237FA90A8AFEE59(iLocal_78, -461.4785f, -984.8583f, 28.0809f, 30000, 2080, 2);
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_90))
				{
					unk_0x837D67618BF89034(iLocal_90, 1, 1);
					unk_0x51C8BEA2005931AB(&iLocal_90);
				}
				iLocal_104 = unk_0x1DD05E817C89C737();
				iLocal_72 = 2;
			}
			break;
		
		case 2:
			if ((unk_0x1DD05E817C89C737() - iLocal_104) > 1500)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "CABLE_SNAPS", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				iLocal_104 = unk_0x1DD05E817C89C737();
				iLocal_72 = 3;
			}
			break;
		
		case 3:
			if ((unk_0x1DD05E817C89C737() - iLocal_104) > 500)
			{
				if (unk_0xFC8BFE4B41177C22(uLocal_88[0]))
				{
					unk_0x5D7CD709B34C90F0(uLocal_88[0], 0);
					unk_0xE592D924D5438108(uLocal_88[0], 0, 0f, 0f, 5f, 0f, -2f, 2f, 0, 1, 1, 1, 0, 1);
					unk_0x8C4D4D7E3B6BC910(uLocal_88[0], 11, 0);
					unk_0x8C4D4D7E3B6BC910(uLocal_88[0], 18, 0);
					unk_0x8C4D4D7E3B6BC910(uLocal_88[0], 19, 0);
					unk_0x8C4D4D7E3B6BC910(uLocal_88[0], 23, 0);
					unk_0x8C4D4D7E3B6BC910(uLocal_88[0], 9, 0);
					unk_0x8C4D4D7E3B6BC910(uLocal_88[0], 12, 0);
					unk_0x8C4D4D7E3B6BC910(uLocal_88[0], 17, 0);
					unk_0xDD19F75405614D3C("scr_reconstruct_pipefall_debris", uLocal_88[0], 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
				iLocal_104 = unk_0x1DD05E817C89C737();
				iLocal_72 = 4;
			}
			break;
		
		case 4:
			if ((unk_0x1DD05E817C89C737() - iLocal_104) > 2000)
			{
				func_98(uLocal_276);
				func_98(uLocal_277);
				uLocal_276 = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 25.437f, -0.0087f, -118.3831f, 34f, 1, 2);
				uLocal_277 = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 2.0695f, -0.0087f, -120.2811f, 34f, 1, 2);
				unk_0x2A09425009DAD0F5(uLocal_276, "HAND_SHAKE", 0.3f);
				unk_0x2A09425009DAD0F5(uLocal_277, "HAND_SHAKE", 0.3f);
				unk_0xB56F35D8A770F80F(uLocal_277, uLocal_276, 1000, 3, 3);
				unk_0x8E4825CCACA34B58(iLocal_100);
				iLocal_104 = unk_0x1DD05E817C89C737();
				iLocal_72 = 5;
			}
			break;
		
		case 5:
			if ((unk_0x1DD05E817C89C737() - iLocal_104) > 500)
			{
				if (!unk_0x1C2F771CDC87A3A5(iLocal_80, 0))
				{
					unk_0x5D7CD709B34C90F0(iLocal_80, 0);
					unk_0xBF3D28CA44F3BE2D(-1, "PIPES_LAND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
					unk_0x2BDD547718FF1F1A(iLocal_80, 0f, 1f, 1f, 200f, 800f, 1);
					if (!unk_0x4FAFF4BCB7633475(iLocal_78))
					{
						unk_0x84B06A81C98DA4B8(iLocal_78);
					}
					unk_0x10425721983AE158(iLocal_78, "re@construction", "idle_panic", 8f, -8f, -1, 16, 0f, 0, 0, 0);
					unk_0xDD19F75405614D3C("scr_reconstruct_pipe_impact", iLocal_80, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					func_24(&uLocal_108, "CONACAU", "CONAC_SCREAM", 4, 0, 0, 0);
					if (unk_0x78411E34CF90EA8C(uLocal_276) && unk_0x78411E34CF90EA8C(uLocal_277))
					{
						unk_0x2A09425009DAD0F5(uLocal_276, "HAND_SHAKE", 1.5f);
						unk_0x2A09425009DAD0F5(uLocal_277, "HAND_SHAKE", 1.5f);
					}
					iLocal_104 = unk_0x1DD05E817C89C737();
					iLocal_72 = 6;
				}
			}
			break;
		
		case 6:
			if ((unk_0x1DD05E817C89C737() - iLocal_104) > 500)
			{
				func_98(uLocal_276);
				func_98(uLocal_277);
				uLocal_276 = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", -459.2609f, -987.5602f, 24.2611f, 0.583f, 0.2617f, -32.7532f, 49.9914f, 1, 2);
				uLocal_277 = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", -459.0622f, -987.2584f, 24.2661f, 5.0301f, 0.2617f, -36.7308f, 49.9914f, 1, 2);
				unk_0x2A09425009DAD0F5(uLocal_276, "HAND_SHAKE", 0.5f);
				unk_0x2A09425009DAD0F5(uLocal_277, "HAND_SHAKE", 0.5f);
				unk_0xB56F35D8A770F80F(uLocal_277, uLocal_276, 2500, 3, 3);
				if (!unk_0x4FAFF4BCB7633475(iLocal_78))
				{
					unk_0xE237FA90A8AFEE59(iLocal_78, unk_0xD1A6A821F5AC81DB(iLocal_78, 1) - Vector(10f, 0f, 2f), 30000, 2080, 2);
				}
				iLocal_104 = unk_0x1DD05E817C89C737();
				iLocal_72 = 7;
			}
			break;
		
		case 7:
			if ((unk_0x1DD05E817C89C737() - iLocal_104) > 2200 && !iLocal_96)
			{
				if ((unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()) && unk_0x3B5989D5DB08A155() == 4) || (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && unk_0x655E58062EC2D269() == 4))
				{
					unk_0xDCAFFD08A08087EB("CamPushInNeutral", 0, 0);
					unk_0xBF3D28CA44F3BE2D(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_96 = 1;
				}
			}
			if ((unk_0x1DD05E817C89C737() - iLocal_104) > 2500)
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_80, 0))
				{
					unk_0x5D7CD709B34C90F0(iLocal_80, 1);
				}
				iLocal_72 = 8;
			}
			break;
		
		case 8:
			unk_0x86A2BC11844DEEB3("RE14A_PIPES");
			if (unk_0xFC8BFE4B41177C22(uLocal_88[0]))
			{
				unk_0x51C8BEA2005931AB(&(uLocal_88[0]));
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_80, 0))
			{
				unk_0x2AEBE39F6BF7D6BC(iLocal_80, 250f);
				unk_0xB2BD5837A8D3CEDA(iLocal_80, Local_75, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(iLocal_80, 80f);
				unk_0xBAAB54D57B40765E(Local_75, 50f, 0);
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_78))
			{
				unk_0x974022927CB47E68(iLocal_78);
				unk_0x84B06A81C98DA4B8(iLocal_78);
				unk_0x10425721983AE158(iLocal_78, "re@construction", "idle_panic", 8f, -8f, -1, 1, 0f, 0, 0, 0);
			}
			unk_0x4CBC5D1BC117616B(uLocal_276, 0);
			unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
			unk_0x85E6A1E36B5E2E4D(uLocal_276, 0);
			unk_0x85E6A1E36B5E2E4D(uLocal_277, 0);
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
			unk_0x64BB72494B9DF6DC(0f);
			unk_0x37B894853929BF1A(1);
			unk_0x747786364137DC63(1);
			unk_0x51E3279E9437131C(1);
			func_2(0, 1, 1, 0, 0, 0, 0);
			iLocal_101 = unk_0x1DD05E817C89C737();
			unk_0x55098D9E9AD58806(joaat("prop_pipe_stack_01"));
			uLocal_88[1] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_pipe_single_01"), -457.8815f, -988.9059f, 22.9554f, 1, 1, 0);
			unk_0xCF39804E8C88080E(uLocal_88[1], -0.1939f, 105.0058f, 77.3964f, 2, 1);
			uLocal_88[2] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_pipe_single_01"), -451.5131f, -986.8079f, 24.6947f, 1, 1, 0);
			unk_0xCF39804E8C88080E(uLocal_88[2], 24.3941f, 32.5423f, 80.6862f, 2, 1);
			uLocal_88[3] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_pipe_single_01"), -450.8099f, -985.9972f, 24.7104f, 1, 1, 0);
			unk_0xCF39804E8C88080E(uLocal_88[3], 24.1841f, 110.287f, 78.4357f, 2, 1);
			uLocal_88[4] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_pipe_single_01"), -456.6558f, -987.3979f, 22.9537f, 1, 1, 0);
			unk_0xCF39804E8C88080E(uLocal_88[4], -0.0264f, 29.5754f, 79.1811f, 2, 1);
			uLocal_88[5] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_pipe_single_01"), -456.1279f, -988.4162f, 22.9889f, 1, 1, 0);
			unk_0xCF39804E8C88080E(uLocal_88[5], -0.6337f, 108.4339f, 77.9539f, 2, 1);
			uLocal_88[6] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_pipe_single_01"), -457.0807f, -987.3059f, 23.7564f, 1, 1, 0);
			unk_0xCF39804E8C88080E(uLocal_88[6], 0.0929f, 74.2657f, 79.3839f, 2, 1);
			uLocal_88[7] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_pipe_single_01"), -456.6558f, -983.7804f, 22.9712f, 1, 1, 0);
			unk_0xCF39804E8C88080E(uLocal_88[7], -0.0264f, 29.5754f, 80.9061f, 2, 1);
			uLocal_88[8] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_pipe_single_01"), -455.3279f, -983.1712f, 22.9564f, 1, 1, 0);
			unk_0xCF39804E8C88080E(uLocal_88[8], -0.1087f, 109.7339f, 80.9789f, 2, 1);
			uLocal_88[9] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_pipe_single_01"), -456.1632f, -983.9359f, 23.7964f, 1, 1, 0);
			unk_0xCF39804E8C88080E(uLocal_88[9], -0.3321f, 74.1907f, 81.6089f, 2, 1);
			uLocal_88[10] = unk_0x43AFC452F25F3A2F(joaat("prop_ld_pipe_single_01"), -454.644f, -994.1709f, 23.3329f, 1, 1, 0);
			unk_0xCF39804E8C88080E(uLocal_88[10], 5.7811f, 104.6058f, 104.6964f, 2, 1);
			iLocal_97 = 0;
			while (iLocal_97 < 11)
			{
				if (unk_0xFC8BFE4B41177C22(uLocal_88[iLocal_97]))
				{
					unk_0xC7D381E526A969D3(uLocal_88[iLocal_97], 1);
					unk_0x5D7CD709B34C90F0(uLocal_88[iLocal_97], 1);
				}
				iLocal_97++;
			}
			if (bLocal_282)
			{
				unk_0x10B228D2FDB7AF16(800);
				while (unk_0xDDED2C93E8FD5B69())
				{
					wait(0);
				}
			}
			iLocal_92 = 1;
			iLocal_91 = 0;
			break;
	}
}

void func_98(var uParam0)
{
	if (unk_0x78411E34CF90EA8C(uParam0))
	{
		unk_0x85E6A1E36B5E2E4D(uParam0, 0);
	}
}

void func_99()
{
	unk_0x43D69D4AAC59FA8E();
	Global_22717 = 0;
}

int func_100(int iParam0)
{
	if (unk_0x9390801B06EE998F())
	{
		if ((unk_0x1DD05E817C89C737() - Global_28) > iParam0)
		{
			Global_27 = unk_0x1DD05E817C89C737();
		}
		Global_28 = unk_0x1DD05E817C89C737();
		if ((unk_0x1DD05E817C89C737() - Global_27) > iParam0)
		{
			if (func_101())
			{
				Global_27 = unk_0x1DD05E817C89C737();
				return 1;
			}
		}
	}
	return 0;
}

int func_101()
{
	if (unk_0x4D9174D8796EA622())
	{
		return 0;
	}
	if (unk_0x875A214D5EBCA509(0, 18) || unk_0x875A214D5EBCA509(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_102(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_45(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_22718 = 1;
	Global_22722 = 0;
	Global_22720 = iParam7;
	Global_2883585 = 0;
	return func_25(sParam2, iParam3, 0);
}

void func_103(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78558)
	{
		if (!unk_0x4FAFF4BCB7633475(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC1BC1B8A5AA67C6B(iParam2, 0);
			}
			else
			{
				unk_0xC1BC1B8A5AA67C6B(iParam2, 1);
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x26C12212366CBF6E(iParam2, 0);
			}
			else
			{
				unk_0x26C12212366CBF6E(iParam2, 1);
			}
		}
	}
}

int func_104(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_105(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_105(var uParam0)
{
	return func_106(*uParam0, "NULL", uParam0->f_1);
}

int func_106(var uParam0, char* sParam1, int iParam2)
{
	if (BitTest(uParam0, 30))
	{
		if (BitTest(uParam0, 29))
		{
			switch (func_107(uParam0))
			{
				case 0:
					return unk_0x6252BC0DD8A320DB(uParam2);
					break;
				
				case 1:
					return unk_0xE100DD4F82A51BDE(sParam1);
					break;
				
				case 2:
					return unk_0x8175BC6D49412468(sParam1);
					break;
				
				case 3:
					return unk_0x38D063D8CF6D1967(sParam1);
					break;
				
				case 4:
					return unk_0x266D9DB5FCE4003B(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xA08EEC7306CF6198(sParam1);
					break;
				
				case 6:
					return unk_0xD7E1DF759CD0FFF2(sParam1, BitTest(uParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x65F606616F48186B(iParam2);
					break;
				
				case 8:
					return unk_0xDCB78A15E5F495DC(iParam2);
					break;
				
				case 9:
					return unk_0x6F13318788EDDAD8();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_107(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (BitTest(uParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_108(var uParam0)
{
	func_109(uParam0, 9, -1, 0);
}

void func_109(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_110(bParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*2*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0x0B0C9A0F9AAEB7F0(uParam0[iVar0 /*2*/], bParam1);
			unk_0x0B0C9A0F9AAEB7F0(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_111(var uParam0, int iParam1)
{
	func_109(uParam0, 0, iParam1, 0);
}

void func_112(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0x8034325BF6D6E41F() >= (uParam0->f_32 + uParam0->f_33) || BitTest(Global_100681.f_20, 2)) || BitTest(Global_100681.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (BitTest((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*2*/], 29))
					{
						func_113(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0x8034325BF6D6E41F();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_113(var uParam0)
{
	func_114(uParam0, "NULL", uParam0->f_1);
}

void func_114(var uParam0, char* sParam1, int iParam2)
{
	if (BitTest(*uParam0, 30))
	{
		switch (func_107(*uParam0))
		{
			case 0:
				unk_0xEC9DAA34BBB4658C(uParam2);
				break;
			
			case 1:
				unk_0x80813AC549A1E8AE(sParam1);
				break;
			
			case 2:
				unk_0x73DEEAB0747FB17C(sParam1);
				break;
			
			case 3:
				unk_0xD0D00ED689D6CA81(sParam1, BitTest(*uParam0, 28));
				break;
			
			case 4:
				unk_0xD772E6694B8472A6(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xD04A772C411165F2(sParam1);
				break;
			
			case 6:
				unk_0xD7E1DF759CD0FFF2(sParam1, BitTest(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x625263BFD08AE230(iParam2);
				break;
			
			case 8:
				unk_0xF2CB0224D3BE0B42(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x8003D3C0115A1035();
				break;
			
			default:
				break;
		}
		unk_0x0B0C9A0F9AAEB7F0(uParam0, 29);
	}
}

void func_115()
{
	int iVar0;
	
	func_111(&Local_283, joaat("bulldozer"));
	func_111(&Local_283, joaat("utillitruck2"));
	func_111(&Local_283, joaat("prop_pipe_stack_01"));
	if (func_104(&Local_283))
	{
		unk_0xCCA6D8A84EE8C88A(joaat("utillitruck2"), 1);
		unk_0x425BBE19F25A57AB(0.1f);
		unk_0xCC1C92F7E1A3CE9D(3, 0);
		unk_0xA7B0B03284E7503C(Local_74 + Vector(50f, 50f, 50f), Local_74 - Vector(50f, 50f, 50f), 0, 1, 1, 1);
		Local_75 = { -455.6561f, -985.8071f, 22.4868f };
		iLocal_80 = unk_0x5779387E956077A6(joaat("utillitruck2"), Local_75, 80f, 1, 1, 0);
		unk_0xC229299217554C78(iLocal_80, 0, 1, 0);
		unk_0x0B74F181ADFC39BF(iLocal_80, 3);
		unk_0xD772F6AA66750D2B(iLocal_80, 1, 1);
		unk_0xD772F6AA66750D2B(iLocal_80, 2, 1);
		unk_0xD772F6AA66750D2B(iLocal_80, 3, 0);
		unk_0xD772F6AA66750D2B(iLocal_80, 4, 1);
		unk_0xD772F6AA66750D2B(iLocal_80, 5, 1);
		unk_0xD772F6AA66750D2B(iLocal_80, 6, 0);
		unk_0xD772F6AA66750D2B(iLocal_80, 7, 1);
		unk_0x5D7CD709B34C90F0(iLocal_80, 1);
		unk_0xD0F1DB0E50B367AD(iLocal_80, 0, 0, 0, 1, 0, 0, 0, 0);
		unk_0xF88FC425EC7D675D(iLocal_80, 10000);
		unk_0xB344489A3C5FFBBB(iLocal_80, 5f);
		iLocal_81 = unk_0x5779387E956077A6(joaat("bulldozer"), -472.9444f, -966.671f, 22.5534f, 181.8365f, 1, 1, 0);
		unk_0x2094BC4B6731BA68(Local_75, 10f, 1, 0, 0, 0);
		uLocal_88[0] = unk_0x43AFC452F25F3A2F(joaat("prop_pipe_stack_01"), -453.2f, -986.1f, 59.45f, 1, 1, 0);
		unk_0x5C96CEA06531AB03(uLocal_88[0], 90f);
		unk_0x5D7CD709B34C90F0(uLocal_88[0], 1);
		unk_0xD0F1DB0E50B367AD(uLocal_88[0], 1, 1, 1, 1, 0, 0, 0, 0);
		unk_0xF88FC425EC7D675D(uLocal_88[0], 10000000);
		Local_68[0 /*5*/] = { Local_274 };
		Local_68[1 /*5*/] = { Local_274 + Vector(0f, 0.5f, 0f) };
		Local_68[2 /*5*/] = { Local_274 + Vector(0f, 1f, 0f) };
		Local_68[3 /*5*/] = { Local_274 + Vector(0f, 2.5f, 0f) };
		Local_68[4 /*5*/] = { Local_274 + Vector(0f, 3f, 0f) };
		Local_68[5 /*5*/] = { Local_274 + Vector(0f, 3.5f, 0f) };
		Local_68[6 /*5*/] = { Local_274 + Vector(0f, 4f, 0f) };
		Local_68[7 /*5*/] = { Local_274 + Vector(0f, 4.5f, 0f) };
		Local_68[8 /*5*/] = { Local_274 + Vector(0f, 5f, 0f) };
		Local_68[9 /*5*/] = { Local_274 + Vector(0f, 5.5f, 0f) };
		Local_68[10 /*5*/] = { Local_274 + Vector(0f, 6f, 0f) };
		Local_68[11 /*5*/] = { Local_274 + Vector(0f, 6.5f, 0f) };
		Local_68[12 /*5*/] = { Local_274 + Vector(0f, 7f, 0f) };
		Local_68[13 /*5*/] = { Local_273 };
		iVar0 = 0;
		while (iVar0 < Local_68.f_0)
		{
			Local_68[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (!unk_0xC450B06E5AAA0985(uLocal_87))
		{
		}
		func_116(&Local_283, 0);
		iLocal_280 = 1;
		iLocal_70 = 1;
	}
}

void func_116(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_118(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_117(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_117(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_118(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			func_119(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_119(var uParam0)
{
	func_120(*uParam0, "NULL", uParam0->f_1);
}

void func_120(var uParam0, char* sParam1, int iParam2)
{
	if (BitTest(uParam0, 30))
	{
		switch (func_107(uParam0))
		{
			case 0:
				unk_0x55098D9E9AD58806(uParam2);
				break;
			
			case 1:
				unk_0x268BE77F77533D03(sParam1);
				break;
			
			case 2:
				unk_0x9B64A44D0B8D7CF6(sParam1);
				break;
			
			case 3:
				unk_0x633E3833FB96BCCB(sParam1);
				break;
			
			case 4:
				unk_0x7821F942CAEEBEE1(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x8943BF9E0F15EDA0(sParam1);
				break;
			
			case 6:
				unk_0x59E2E0637E7776F3();
				break;
			
			case 7:
				unk_0xD21650BDA0F10841(iParam2);
				break;
			
			case 8:
				unk_0xA790E8E6FD7393AC(iParam2, BitTest(uParam0, 26));
				break;
			
			case 9:
				unk_0xAE427DA16687F323();
				break;
			
			default:
				break;
		}
	}
}

int func_121()
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_132())
		{
			return 0;
		}
	}
	if (func_128())
	{
		return 1;
	}
	if (func_122(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_122(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (func_37(func_35()))
		{
			iVar5 = func_70();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113648.f_18576[iVar1 /*6*/], 2) && !BitTest(Global_113648.f_18576[iVar1 /*6*/], 3))
				{
					func_123(iVar1, &Var0);
					fVar4 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Var0.f_6, 1);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_123(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_124(uParam1, "Abigail1", func_126(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 1:
			func_124(uParam1, "Abigail2", func_126(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 2:
			func_124(uParam1, "Barry1", func_126(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 3:
			func_124(uParam1, "Barry2", func_126(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_125(iParam0), 1, 1);
			break;
		
		case 4:
			func_124(uParam1, "Barry3", func_126(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 5:
			func_124(uParam1, "Barry3A", func_126(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 6:
			func_124(uParam1, "Barry3C", func_126(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 7:
			func_124(uParam1, "Barry4", func_126(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_125(iParam0), 0, 0);
			break;
		
		case 8:
			func_124(uParam1, "Dreyfuss1", func_126(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 9:
			func_124(uParam1, "Epsilon1", func_126(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 10:
			func_124(uParam1, "Epsilon2", func_126(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 11:
			func_124(uParam1, "Epsilon3", func_126(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 12:
			func_124(uParam1, "Epsilon4", func_126(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 13:
			func_124(uParam1, "Epsilon5", func_126(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 14:
			func_124(uParam1, "Epsilon6", func_126(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 15:
			func_124(uParam1, "Epsilon7", func_126(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 16:
			func_124(uParam1, "Epsilon8", func_126(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 17:
			func_124(uParam1, "Extreme1", func_126(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 18:
			func_124(uParam1, "Extreme2", func_126(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 19:
			func_124(uParam1, "Extreme3", func_126(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 20:
			func_124(uParam1, "Extreme4", func_126(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 21:
			func_124(uParam1, "Fanatic1", func_126(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_125(iParam0), 1, 0);
			break;
		
		case 22:
			func_124(uParam1, "Fanatic2", func_126(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_125(iParam0), 1, 0);
			break;
		
		case 23:
			func_124(uParam1, "Fanatic3", func_126(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_125(iParam0), 0, 1);
			break;
		
		case 24:
			func_124(uParam1, "Hao1", func_126(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_125(iParam0), 0, 1);
			break;
		
		case 25:
			func_124(uParam1, "Hunting1", func_126(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 26:
			func_124(uParam1, "Hunting2", func_126(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 27:
			func_124(uParam1, "Josh1", func_126(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 28:
			func_124(uParam1, "Josh2", func_126(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_125(iParam0), 1, 1);
			break;
		
		case 29:
			func_124(uParam1, "Josh3", func_126(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_125(iParam0), 1, 1);
			break;
		
		case 30:
			func_124(uParam1, "Josh4", func_126(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 31:
			func_124(uParam1, "Maude1", func_126(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 32:
			func_124(uParam1, "Minute1", func_126(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 33:
			func_124(uParam1, "Minute2", func_126(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 34:
			func_124(uParam1, "Minute3", func_126(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 35:
			func_124(uParam1, "MrsPhilips1", func_126(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 36:
			func_124(uParam1, "MrsPhilips2", func_126(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 37:
			func_124(uParam1, "Nigel1", func_126(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 38:
			func_124(uParam1, "Nigel1A", func_126(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_125(iParam0), 1, 1);
			break;
		
		case 39:
			func_124(uParam1, "Nigel1B", func_126(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_125(iParam0), 1, 1);
			break;
		
		case 40:
			func_124(uParam1, "Nigel1C", func_126(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_125(iParam0), 1, 1);
			break;
		
		case 41:
			func_124(uParam1, "Nigel1D", func_126(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_125(iParam0), 1, 1);
			break;
		
		case 42:
			func_124(uParam1, "Nigel2", func_126(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_125(iParam0), 1, 1);
			break;
		
		case 43:
			func_124(uParam1, "Nigel3", func_126(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_125(iParam0), 1, 1);
			break;
		
		case 44:
			func_124(uParam1, "Omega1", func_126(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 45:
			func_124(uParam1, "Omega2", func_126(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 46:
			func_124(uParam1, "Paparazzo1", func_126(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 47:
			func_124(uParam1, "Paparazzo2", func_126(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 48:
			func_124(uParam1, "Paparazzo3", func_126(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 49:
			func_124(uParam1, "Paparazzo3A", func_126(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 50:
			func_124(uParam1, "Paparazzo3B", func_126(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 51:
			func_124(uParam1, "Paparazzo4", func_126(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 52:
			func_124(uParam1, "Rampage1", func_126(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 54:
			func_124(uParam1, "Rampage3", func_126(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 55:
			func_124(uParam1, "Rampage4", func_126(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 56:
			func_124(uParam1, "Rampage5", func_126(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 53:
			func_124(uParam1, "Rampage2", func_126(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 57:
			func_124(uParam1, "TheLastOne", func_126(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 58:
			func_124(uParam1, "Tonya1", func_126(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 59:
			func_124(uParam1, "Tonya2", func_126(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 60:
			func_124(uParam1, "Tonya3", func_126(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 61:
			func_124(uParam1, "Tonya4", func_126(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 62:
			func_124(uParam1, "Tonya5", func_126(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_124(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_126(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_127(iParam0) };
	if (unk_0xD6F9DEE4765092A9(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_127(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_128()
{
	if (func_131() && !func_132())
	{
		return 1;
	}
	if (func_130() && func_129())
	{
		return 1;
	}
	return 0;
}

bool func_129()
{
	return Global_113366 > 0;
}

int func_130()
{
	if (Global_97603 != -1)
	{
		return 1;
	}
	return 0;
}

int func_131()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 20);
	}
	return 0;
}

int func_132()
{
	if (unk_0x761778199FE1211C())
	{
		if (unk_0xAB154BFC15F33733() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_133()
{
	if (!func_91(5))
	{
		return 1;
	}
	if (func_128())
	{
		return 1;
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_132())
		{
			return 0;
		}
	}
	if (func_122(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_134()
{
	if ((Global_113637 == func_74() && unk_0x9FA91AA1AC724CD0()) && Global_113638)
	{
		return 1;
	}
	return 0;
}

void func_135(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_74();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_137(iParam0);
	unk_0x21EA3DC8C16770EF(0);
	unk_0x7EA65A7D5C6CBDB5(1);
	Global_113634 = 0;
	func_136();
}

void func_136()
{
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			unk_0xCCA6D8A84EE8C88A(unk_0x4B423FAA24E8ABF0(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)), 1);
		}
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 0);
	}
}

void func_137(int iParam0)
{
	Global_113637 = iParam0;
}

int func_138(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	if (!Global_152234)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_74();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_179())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			if (vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_132())
			{
				return 0;
			}
		}
		if (!Global_113648.f_9087)
		{
			return 0;
		}
		if (func_56(0))
		{
			return 0;
		}
		if (func_128())
		{
			return 0;
		}
		if (func_178())
		{
			return 0;
		}
		if (Global_113637 != -1)
		{
			return 0;
		}
		if (func_37(func_35()))
		{
			if (func_122(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !bParam4)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_177(iParam1))
		{
			return 0;
		}
		if (func_37(func_35()))
		{
			if (func_176(func_35()) == 4 || func_176(func_35()) == 5)
			{
				return 0;
			}
		}
		if (func_37(func_35()))
		{
			if (!func_175(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_174(Global_113648.f_24997.f_43[iParam1]))
		{
			return 0;
		}
		if ((unk_0x1DD05E817C89C737() - Global_113639) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_173())
		{
			return 0;
		}
		if (unk_0x3D2EB53CF281A77E())
		{
			return 0;
		}
		if (unk_0x9FA91AA1AC724CD0())
		{
			return 0;
		}
		if (!func_164(4))
		{
			return 0;
		}
		if (!func_91(5))
		{
			return 0;
		}
		if (func_163(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0xF8A8852F99E201DD(unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D())))
		{
			if ((unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0E171121A3A25363(377.153f, -717.567f, 10.0536f) || unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0E171121A3A25363(320.9934f, 265.2515f, 82.1221f)) || unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0E171121A3A25363(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_163(0, 0))
		{
			return 0;
		}
		if (Global_32310)
		{
			return 0;
		}
		if (func_177(30) && !func_163(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_37(func_35()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113648.f_2365.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113648.f_2365.f_539.f_2296[iVar2];
				if (func_162(iVar4))
				{
					if (func_140(iVar2))
					{
						if (!func_139(Var3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Var3) < (210f * 210f))
							{
								if (func_35() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_139(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_140(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113648.f_2365.f_539.f_2296[iParam0];
	return func_141(iVar0);
}

int func_141(int iParam0)
{
	return func_142(iParam0, 1);
}

int func_142(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_162(iParam0))
	{
		return 0;
	}
	func_143(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_143(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_144(func_155(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_144(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_154(iParam0, iParam1))
	{
		iVar0 = func_153(iParam1);
		iVar1 = func_151(iParam0);
		iVar2 = (func_151(iParam0) - func_151(iParam1));
		iVar3 = (func_153(iParam0) - func_153(iParam1));
		iVar4 = (func_150(iParam0) - func_150(iParam1));
		iVar5 = (func_149(iParam0) - func_149(iParam1));
		iVar6 = (func_148(iParam0) - func_148(iParam1));
		iVar7 = (func_147(iParam0) - func_147(iParam1));
	}
	else
	{
		iVar0 = func_153(iParam0);
		iVar1 = func_151(iParam1);
		iVar2 = (func_151(iParam1) - func_151(iParam0));
		iVar3 = (func_153(iParam1) - func_153(iParam0));
		iVar4 = (func_150(iParam1) - func_150(iParam0));
		iVar5 = (func_149(iParam1) - func_149(iParam0));
		iVar6 = (func_148(iParam1) - func_148(iParam0));
		iVar7 = (func_147(iParam1) - func_147(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_146(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_145(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_145(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_146(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_147(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_148(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_149(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_150(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_151(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_152(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_152(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_153(int iParam0)
{
	return iParam0 & 15;
}

int func_154(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_162(iParam1) || !func_162(iParam0))
	{
		return 1;
	}
	iVar0 = func_151(iParam0);
	iVar1 = func_151(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_153(iParam0);
	iVar1 = func_153(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_150(iParam0);
	iVar1 = func_150(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_149(iParam0);
	iVar1 = func_149(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_148(iParam0);
	iVar1 = func_148(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_147(iParam0);
	iVar1 = func_147(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_155()
{
	var uVar0;
	
	func_161(&uVar0, unk_0x4BA5A16068183C5E());
	func_160(&uVar0, unk_0x18E502A71E28968C());
	func_159(&uVar0, unk_0x5295501D0862870D());
	func_158(&uVar0, unk_0xB12880C92EA6EE15());
	func_157(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_156(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_156(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_157(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_158(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_153(*uParam0);
	iVar1 = func_151(*uParam0);
	if (iParam1 < 1 || iParam1 > func_146(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_159(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_160(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_161(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_162(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_147(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_148(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_149(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_151(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_153(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_150(iParam0);
	if (iVar5 < 1 || iVar5 > func_146(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_163(int iParam0, bool bParam1)
{
	if (BitTest(Global_113648.f_24997.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_164(int iParam0)
{
	int iVar0;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				iVar0 = func_35();
				if (!func_37(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_172()) || Global_112695) || Global_32166) || func_171()) || func_43(8, -1)) || func_170()) || func_169()) || func_168()) || func_167()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_172()) || Global_32166) || func_171()) || func_43(8, -1)) || func_168()) || func_170()) || func_169()) || func_167()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_172()) || Global_112695) || Global_32166) || func_171()) || func_43(8, -1)) || func_168()) || func_170()) || func_169()) || func_167()) || Global_113648.f_7690.f_919[iVar0] == 5) || Global_43804 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_172()) || Global_112695) || Global_32166) || func_171()) || func_43(8, -1)) || func_170()) || func_169()) || func_167()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_172() || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || func_43(8, -1)) || func_167()) || func_166()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_43(8, -1) || func_170()) || func_169()) || func_166()) || func_165())
						{
							return 0;
						}
						if ((unk_0x3555462DB47B7AB1() && unk_0x1403FEB4554982F8() != 3) && unk_0x6D231A0D52134FC1() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
						{
							if ((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_172()) || Global_32166) || func_171()) || func_43(8, -1)) || func_169()) || func_168()) || func_167()) || Global_113648.f_7690.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || func_172()) || func_169()) || Global_112695) || Global_32166) || func_171()) || Global_44446) || func_43(8, -1)) || func_168()) || func_166()) || func_167()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1)) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_172()) || Global_112695) || Global_32166) || func_171()) || func_43(8, -1)) || func_168()) || func_166()) || func_170()) || func_169()) || func_167())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_165()
{
	return Global_100720.f_1;
}

int func_166()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 13);
	}
	return 0;
}

int func_167()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_168()
{
	if (Global_78819)
	{
		return 1;
	}
	else if (Global_63356 && !Global_63362)
	{
		return 1;
	}
	return 0;
}

bool func_169()
{
	return Global_100733.f_388 > 0;
}

bool func_170()
{
	return Global_100733.f_387 > 0;
}

var func_171()
{
	return Global_1575060;
}

int func_172()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98159.f_44 == 1;
	}
	return 0;
}

int func_173()
{
	func_34();
	if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_174(int iParam0)
{
	return func_154(func_155(), iParam0);
}

int func_175(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_35();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_176(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 7;
	}
	return Global_113648.f_7690.f_919[iParam0];
}

int func_177(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_179())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113648.f_24997, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113648.f_24997.f_1, iVar0);
	}
	return iVar1;
}

int func_178()
{
	int iVar0;
	
	if (Global_32315)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (!unk_0x4FAFF4BCB7633475(unk_0xFD5C5BBD1FE92BB7(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_179()
{
	var uVar0;
	
	if (Global_152523 == 2)
	{
		return 1;
	}
	else if (Global_152523 == 3)
	{
		return 0;
	}
	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x5BC93955B6EEBC0B())
			{
				unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 4);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 6);
				unk_0x0B0C9A0F9AAEB7F0(&Global_25, 2);
				unk_0x0B0C9A0F9AAEB7F0(&Global_25, 4);
				unk_0x0B0C9A0F9AAEB7F0(&Global_25, 6);
				unk_0x1164A75E490C27B6(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x76CA59C648318506())
				{
					iVar0 = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&iVar0, false);
					unk_0xED11291F7127888E(iVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0x76CA59C648318506())
	{
		if (BitTest(unk_0x38640D2193CB547F(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_180()
{
	if (iLocal_280)
	{
		if (!iLocal_281)
		{
			unk_0x86A2BC11844DEEB3("RE14A_FAIL");
			func_218();
			if (!unk_0x4FAFF4BCB7633475(iLocal_78))
			{
				unk_0x0428AFDCAA63B06E(iLocal_78, 317, 1);
			}
			if (!unk_0x1C2F771CDC87A3A5(iLocal_83, 0))
			{
				if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_83, 0) && !unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_83, 50f, 50f, 50f, 0, 1, 0))
				{
					func_192(iLocal_83, 0, 145);
				}
			}
			iLocal_97 = 0;
			while (iLocal_97 < 11)
			{
				if (unk_0xFC8BFE4B41177C22(uLocal_88[iLocal_97]))
				{
					unk_0x5D7CD709B34C90F0(uLocal_88[iLocal_97], 0);
				}
				iLocal_97++;
			}
			if (!unk_0x1C2F771CDC87A3A5(iLocal_80, 0))
			{
				unk_0x2AEBE39F6BF7D6BC(iLocal_80, 0f);
				unk_0x5D7CD709B34C90F0(iLocal_80, 0);
			}
			if (unk_0xFC8BFE4B41177C22(iLocal_89))
			{
				unk_0x5D7CD709B34C90F0(iLocal_89, 0);
			}
			unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
			unk_0x37B894853929BF1A(1);
			unk_0x747786364137DC63(1);
			func_2(0, 1, 1, 0, 0, 0, 0);
			iLocal_92 = 1;
			unk_0xE6AC149D1121535D(1f);
			unk_0x268BE77F77533D03("re@construction");
			if (unk_0x78411E34CF90EA8C(uLocal_275))
			{
				unk_0x85E6A1E36B5E2E4D(uLocal_275, 0);
				unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				unk_0x64BB72494B9DF6DC(0f);
				unk_0xD815D4BD1AE9E85A(0f, 1065353216);
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
				unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
			}
			if (unk_0xC450B06E5AAA0985(uLocal_84))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_84);
			}
			if (unk_0xC450B06E5AAA0985(uLocal_85))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_85);
			}
			if (unk_0xC450B06E5AAA0985(uLocal_86))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_86);
			}
			if (unk_0xC450B06E5AAA0985(uLocal_87))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_87);
			}
		}
		unk_0x2AF2D6F164BD6F5A(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 1);
		unk_0x425BBE19F25A57AB(1f);
		unk_0xCC1C92F7E1A3CE9D(3, 1);
		unk_0xD7186A4A316964F2();
		unk_0x830C51B62E7CD5B2();
	}
	func_116(&Local_283, 0);
	func_181(-1);
	unk_0xBBC29EBE6E1A48FA();
}

void func_181(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_74();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_134())
	{
		func_185(iParam0);
		unk_0xB51A8DA1DD0D2E4E(0, 0);
		Global_113639 = unk_0x1DD05E817C89C737();
		func_184(30000);
		StringCopy(&cVar0, func_183(Global_113637, 1), 64);
		if (func_73(Global_113637) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113636, 64);
		}
		unk_0x3AF124228E3EAF07(&cVar0, Global_113634, (unk_0x1DD05E817C89C737() - Global_113635), 0);
	}
	else if (BitTest(Global_113644, 0) && Global_113648.f_24997.f_2 < 3)
	{
		unk_0x8744D2E3FC95740E(&Global_113644, 0);
	}
	func_182(&Global_32223);
	Global_113638 = 0;
	func_137(-1);
}

void func_182(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43219)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43218 = 0;
	Global_43220 = 0;
	Global_43257 = 15;
	Global_63359 = 0;
	Global_63360 = 0;
}

char* func_183(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_184(int iParam0)
{
	Global_43808 = (unk_0x1DD05E817C89C737() + iParam0);
}

void func_185(int iParam0)
{
	func_186(iParam0, 0, func_191(iParam0));
}

void func_186(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_155();
	func_189(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_188(iParam0, &uVar0);
	Var1 = { func_187(&uVar0) };
}

struct<16> func_187(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_149(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_148(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_147(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_150(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_153(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_151(*uParam0), 64);
	return Var0;
}

void func_188(int iParam0, var uParam1)
{
	Global_113648.f_24997.f_43[iParam0] = *uParam1;
}

void func_189(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_151(*uParam0);
	iVar1 = func_153(*uParam0);
	iVar2 = func_150(*uParam0);
	iVar3 = func_149(*uParam0);
	iVar4 = func_148(*uParam0);
	iVar5 = func_147(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_146(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_146(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_190(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_190(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_161(uParam0, iParam1);
	func_160(uParam0, iParam2);
	func_159(uParam0, iParam3);
	func_157(uParam0, iParam5);
	func_158(uParam0, iParam4);
	func_156(uParam0, iParam6);
}

int func_191(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_192(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0xED22194AB8539910(iParam0, &uVar0);
		if (!unk_0xD6F9DEE4765092A9(uVar1))
		{
			if (unk_0x70E57E9927B6BA58(uVar1) == unk_0x70E57E9927B6BA58("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_193(iParam0, iParam2);
	return 1;
}

void func_193(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_199(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0);
		if (!unk_0xFC8BFE4B41177C22(iVar0))
		{
			iVar0 = unk_0x6B854773972E76E4(iParam0, -1);
		}
		if (unk_0xFC8BFE4B41177C22(iVar0) && !unk_0x4FAFF4BCB7633475(iVar0))
		{
			if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113648.f_2365.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x4B423FAA24E8ABF0(iParam0) == Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xD6F9DEE4765092A9(&(Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x1B79E937E91F40C3(unk_0xCA7159F2C5FF745A(iParam0), &(Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113648.f_32751.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x4B423FAA24E8ABF0(iParam0) == Global_113648.f_32751.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xD6F9DEE4765092A9(&(Global_113648.f_32751.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x1B79E937E91F40C3(unk_0xCA7159F2C5FF745A(iParam0), &(Global_113648.f_32751.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113648.f_32751.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113648.f_32751.f_5590 = iParam1;
	Global_78253 = iParam0;
	Global_113648.f_32751.f_5588 = 1;
	func_194(iParam0, &(Global_113648.f_32751.f_5510));
}

void func_194(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		func_198(uParam1);
		uParam1->f_66 = unk_0x4B423FAA24E8ABF0(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xCA7159F2C5FF745A(iParam0), 16);
		*uParam1 = unk_0x4F06416A18248EA0(iParam0);
		unk_0xFF4B16F297D9CB3E(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x741D9B0685E67684(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x9D35AABAEE206518(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xDA63CE76F9AAB439(iParam0);
		uParam1->f_67 = unk_0xA089B04A208DBD0B(iParam0);
		uParam1->f_69 = unk_0x6A375D21624F9187(iParam0);
		uParam1->f_70 = unk_0x38A100E16C95161B(iParam0);
		unk_0x04434FA56DED5500(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x64FEACF0AD019F1F(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xF1B79038130E3C08(iParam0, 2))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 28);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 3))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 29);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 30);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_197(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x7943BD10E2A03FAC(iParam0, 0))
		{
			uParam1->f_68 = unk_0x54DA32C15F7A6ABA(iParam0);
		}
		if (unk_0x00C6FDED3EB75117(uParam1->f_66))
		{
			if (unk_0x61F41693A4648B46(iParam0))
			{
				switch (unk_0x68F7F7C5DF6717F8(iParam0))
				{
					case 3:
					case 0:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xE6BE8A525BA6BD44(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 9);
		}
		if (unk_0xFDA2576D37032738(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 10);
		}
		if (unk_0xA9D64A14804D119B(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 13);
			unk_0xD9B9D4D1CCED7CA6(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x2C0B2BB7913E8DBA(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 12);
		}
		func_196(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5318DF85BEB6B95F(iParam0, iVar0 + 1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_195(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x0BCE48C8677F9824(iParam0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 11);
		}
		if (unk_0xD130E7CDEE903624(iParam0, "IgnoredByQuickSave") && unk_0x3F40AE65F056B43D(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 27);
		}
	}
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_196(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD9F5E1FEFD1329E4(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x90E3EAFF8AAA1A42(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x1D5A665629D417A7(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x1D5A665629D417A7(*iParam0, iVar1))
			{
				switch (unk_0xD6BA8C57BDF9DEB9(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x94C9CD3D66808551(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xEFDD8C5443F6C9E4(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xEFDD8C5443F6C9E4(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_198(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_199(int iParam0)
{
	if ((((((((((!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0)) || func_216(iParam0, 0, 0)) || func_216(iParam0, 1, 0)) || func_216(iParam0, 2, 0)) || func_215(iParam0) != 145) || func_214(iParam0)) || func_213(iParam0)) || func_212(iParam0)) || func_211(iParam0)) || !func_200(unk_0x4B423FAA24E8ABF0(iParam0)))
	{
		if (func_213(iParam0))
		{
		}
		if (func_213(iParam0))
		{
		}
		if (func_216(iParam0, 0, 0))
		{
		}
		if (func_216(iParam0, 1, 0))
		{
		}
		if (func_216(iParam0, 2, 0))
		{
		}
		if (func_215(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_200(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_201(iParam0, 0, -1))
	{
		return 0;
	}
	if (((unk_0xEA4F815FDC353FEF(iParam0) || unk_0x00C6FDED3EB75117(iParam0)) || unk_0xBA16CD57E37AC32A(iParam0)) || unk_0xAE447CBB33B40CA3(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_201(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xAD1840C2E6AF7D5E(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x76CD105BCAC6EB9F()) || (iParam0 == joaat("buffalo3") && !unk_0x76CD105BCAC6EB9F())) || (iParam0 == joaat("gauntlet2") && !unk_0x76CD105BCAC6EB9F())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x76CD105BCAC6EB9F()))
	{
		if (!func_179())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x62B04373BFAD9B85())
		{
			if (unk_0x92EAC7DBD5D1D750(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x4BFA043D318BF9AE(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_210() && !func_209()) && !func_208()) && !func_207()) && !func_179())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_206() || unk_0x761778199FE1211C()) || func_205())
		{
		}
		else if (!func_208())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_204(iParam0, iParam2))
		{
			return 0;
		}
	}
	if (!func_202(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_202(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_203())
	{
		return 1;
	}
	unk_0x8A77EAFEB55D476D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xABE86AEC64720F91(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_203()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

int func_204(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if ((!Global_2764244 && iParam1 >= 0) && iParam1 <= 415)
	{
		if (BitTest(Global_1586468[iParam1 /*142*/].f_103, 2))
		{
			return 1;
		}
	}
	if (Global_2764243)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x39D1D336459711BE();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7059 && !Global_262145.f_13397) && iVar1 < Global_262145.f_13398)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14737 && iVar1 < Global_262145.f_14749)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14733 && iVar1 < Global_262145.f_14745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14734 && iVar1 < Global_262145.f_14746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14735 && iVar1 < Global_262145.f_14747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14736 && iVar1 < Global_262145.f_14748)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14738 && iVar1 < Global_262145.f_14750)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14739 && iVar1 < Global_262145.f_14742)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14740 && iVar1 < Global_262145.f_14743)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14741 && iVar1 < Global_262145.f_14744)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17313 && iVar1 < Global_262145.f_17278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17308 && iVar1 < Global_262145.f_17273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17312 && iVar1 < Global_262145.f_17277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17311 && iVar1 < Global_262145.f_17276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17305 && iVar1 < Global_262145.f_17270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17306 && iVar1 < Global_262145.f_17271)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17309 && iVar1 < Global_262145.f_17274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17310 && iVar1 < Global_262145.f_17275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17307 && iVar1 < Global_262145.f_17272)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17315 && iVar1 < Global_262145.f_17280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17316 && iVar1 < Global_262145.f_17281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17304 && iVar1 < Global_262145.f_17269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17303 && iVar1 < Global_262145.f_17268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17302 && iVar1 < Global_262145.f_17267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17314 && iVar1 < Global_262145.f_17279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17317 && iVar1 < Global_262145.f_17282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17318 && iVar1 < Global_262145.f_17283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17319 && iVar1 < Global_262145.f_17284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17320 && iVar1 < Global_262145.f_17285)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17474 && iVar1 < Global_262145.f_17496)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17475 && iVar1 < Global_262145.f_17497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17476 && iVar1 < Global_262145.f_17498)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17477 && iVar1 < Global_262145.f_17499)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17478 && iVar1 < Global_262145.f_17500)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17479 && iVar1 < Global_262145.f_17501)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17481 && iVar1 < Global_262145.f_17502)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17482 && iVar1 < Global_262145.f_17503)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17483 && iVar1 < Global_262145.f_17504)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17484 && iVar1 < Global_262145.f_17505)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17485 && iVar1 < Global_262145.f_17506)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17486 && iVar1 < Global_262145.f_17507)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17487 && iVar1 < Global_262145.f_17508)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17493 && iVar1 < Global_262145.f_17515)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17490 && iVar1 < Global_262145.f_17511)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17491 && iVar1 < Global_262145.f_17512)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17492 && iVar1 < Global_262145.f_17513)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17480 && iVar1 < Global_262145.f_17514)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17494 && iVar1 < Global_262145.f_17516)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17488 && iVar1 < Global_262145.f_17509)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17489 && iVar1 < Global_262145.f_17510)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17495 && iVar1 < Global_262145.f_17517)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19131 && iVar1 < Global_262145.f_19228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19132 && iVar1 < Global_262145.f_19229)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19133 && iVar1 < Global_262145.f_19230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19134 && iVar1 < Global_262145.f_19231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19135 && iVar1 < Global_262145.f_19232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19136 && iVar1 < Global_262145.f_19233)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19137 && iVar1 < Global_262145.f_19234)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19138 && iVar1 < Global_262145.f_19235)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19139 && iVar1 < Global_262145.f_19236)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19140 && iVar1 < Global_262145.f_19237)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19141 && iVar1 < Global_262145.f_19238)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19142 && iVar1 < Global_262145.f_19239)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19143 && iVar1 < Global_262145.f_19240)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19144 && iVar1 < Global_262145.f_19241)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19145 && iVar1 < Global_262145.f_19242)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19146 && iVar1 < Global_262145.f_19243)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19147 && iVar1 < Global_262145.f_19244)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19148 && iVar1 < Global_262145.f_19245)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19149 && iVar1 < Global_262145.f_19246)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19150 && iVar1 < Global_262145.f_19247)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19151 && iVar1 < Global_262145.f_19248)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19152 && iVar1 < Global_262145.f_19249)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19153 && iVar1 < Global_262145.f_19250)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19154 && iVar1 < Global_262145.f_19251)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19155 && iVar1 < Global_262145.f_19252)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20212 && iVar1 < Global_262145.f_20208)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20213 && iVar1 < Global_262145.f_20209)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20214 && iVar1 < Global_262145.f_20210)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20215 && iVar1 < Global_262145.f_20211)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21094 && iVar1 < Global_262145.f_21102)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21095 && iVar1 < Global_262145.f_21103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21096 && iVar1 < Global_262145.f_21104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21097 && iVar1 < Global_262145.f_21105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21098 && iVar1 < Global_262145.f_21106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21099 && iVar1 < Global_262145.f_21107)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21893 && iVar1 < Global_262145.f_21913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21905 && iVar1 < Global_262145.f_21925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21896 && iVar1 < Global_262145.f_21916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21906 && iVar1 < Global_262145.f_21926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21894 && iVar1 < Global_262145.f_21914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21910 && iVar1 < Global_262145.f_21930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21908 && iVar1 < Global_262145.f_21928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21909 && iVar1 < Global_262145.f_21929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21904 && iVar1 < Global_262145.f_21924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21911 && iVar1 < Global_262145.f_21931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21907 && iVar1 < Global_262145.f_21927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21903 && iVar1 < Global_262145.f_21923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21895 && iVar1 < Global_262145.f_21915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21897 && iVar1 < Global_262145.f_21917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21898 && iVar1 < Global_262145.f_21918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21899 && iVar1 < Global_262145.f_21919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21900 && iVar1 < Global_262145.f_21920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21901 && iVar1 < Global_262145.f_21921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21902 && iVar1 < Global_262145.f_21922)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22861 && iVar1 < Global_262145.f_22889)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22862 && iVar1 < Global_262145.f_22890)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22863 && iVar1 < Global_262145.f_22891)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22864 && iVar1 < Global_262145.f_22892)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22865 && iVar1 < Global_262145.f_22893)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22866 && iVar1 < Global_262145.f_22894)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22867 && iVar1 < Global_262145.f_22895)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22868 && iVar1 < Global_262145.f_22896)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22869 && iVar1 < Global_262145.f_22897)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22870 && iVar1 < Global_262145.f_22898)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22871 && iVar1 < Global_262145.f_22899)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22872 && iVar1 < Global_262145.f_22900)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22873 && iVar1 < Global_262145.f_22901)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22874 && iVar1 < Global_262145.f_22902)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22875 && iVar1 < Global_262145.f_22903)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22876 && iVar1 < Global_262145.f_22904)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22877 && iVar1 < Global_262145.f_22905)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22878 && iVar1 < Global_262145.f_22906)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22879 && iVar1 < Global_262145.f_22907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22880 && iVar1 < Global_262145.f_22908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22881 && iVar1 < Global_262145.f_22909)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22882 && iVar1 < Global_262145.f_22910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22883 && iVar1 < Global_262145.f_22911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22884 && iVar1 < Global_262145.f_22912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22885 && iVar1 < Global_262145.f_22913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22886 && iVar1 < Global_262145.f_22914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22887 && iVar1 < Global_262145.f_22915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22888 && iVar1 < Global_262145.f_22916)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24081 && iVar1 < Global_262145.f_24097)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24082 && iVar1 < Global_262145.f_24098)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24086 && iVar1 < Global_262145.f_24102)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24089 && iVar1 < Global_262145.f_24105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24094 && iVar1 < Global_262145.f_24110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24088 && iVar1 < Global_262145.f_24104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24080 && iVar1 < Global_262145.f_24096)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24087 && iVar1 < Global_262145.f_24103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24093 && iVar1 < Global_262145.f_24109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24092 && iVar1 < Global_262145.f_24108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24083 && iVar1 < Global_262145.f_24099)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24085 && iVar1 < Global_262145.f_24101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24095 && iVar1 < Global_262145.f_24111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24091 && iVar1 < Global_262145.f_24107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24084 && iVar1 < Global_262145.f_24100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24090 && iVar1 < Global_262145.f_24106)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24171 && iVar1 < Global_262145.f_24158)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24172 && iVar1 < Global_262145.f_24159)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24177 && iVar1 < Global_262145.f_24164)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24176 && iVar1 < Global_262145.f_24163)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24174 && iVar1 < Global_262145.f_24161)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24180 && iVar1 < Global_262145.f_24167)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24182 && iVar1 < Global_262145.f_24169)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24183 && iVar1 < Global_262145.f_24170)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24181 && iVar1 < Global_262145.f_24168)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24173 && iVar1 < Global_262145.f_24160)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24175 && iVar1 < Global_262145.f_24162)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24179 && iVar1 < Global_262145.f_24166)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24178 && iVar1 < Global_262145.f_24165)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26768 && iVar1 < Global_262145.f_26770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25781 && iVar1 < Global_262145.f_25774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25782 && iVar1 < Global_262145.f_25775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25783 && iVar1 < Global_262145.f_25776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25784 && iVar1 < Global_262145.f_25777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26769 && iVar1 < Global_262145.f_26771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25785 && iVar1 < Global_262145.f_25778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25786 && iVar1 < Global_262145.f_25779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25787 && iVar1 < Global_262145.f_25780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25792 && iVar1 < Global_262145.f_25813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25793 && iVar1 < Global_262145.f_25814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25794 && iVar1 < Global_262145.f_25815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25795 && iVar1 < Global_262145.f_25816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25796 && iVar1 < Global_262145.f_25817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25797 && iVar1 < Global_262145.f_25818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25798 && iVar1 < Global_262145.f_25819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25799 && iVar1 < Global_262145.f_25820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25800 && iVar1 < Global_262145.f_25821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25801 && iVar1 < Global_262145.f_25822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25802 && iVar1 < Global_262145.f_25823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25803 && iVar1 < Global_262145.f_25824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25804 && iVar1 < Global_262145.f_25825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25805 && iVar1 < Global_262145.f_25826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25806 && iVar1 < Global_262145.f_25827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25807 && iVar1 < Global_262145.f_25828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25808 && iVar1 < Global_262145.f_25829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25809 && iVar1 < Global_262145.f_25830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25810 && iVar1 < Global_262145.f_25831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25811 && iVar1 < Global_262145.f_25832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25812 && iVar1 < Global_262145.f_25833)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28613 && iVar1 < Global_262145.f_28634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28614 && iVar1 < Global_262145.f_28635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28615 && iVar1 < Global_262145.f_28636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28616 && iVar1 < Global_262145.f_28637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28617 && iVar1 < Global_262145.f_28638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28618 && iVar1 < Global_262145.f_28639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28619 && iVar1 < Global_262145.f_28640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28620 && iVar1 < Global_262145.f_28641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28621 && iVar1 < Global_262145.f_28642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28622 && iVar1 < Global_262145.f_28643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28623 && iVar1 < Global_262145.f_28644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28624 && iVar1 < Global_262145.f_28645)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28625 && iVar1 < Global_262145.f_28646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28626 && iVar1 < Global_262145.f_28647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28627 && iVar1 < Global_262145.f_28648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28628 && iVar1 < Global_262145.f_28649)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28629 && iVar1 < Global_262145.f_28650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28630 && iVar1 < Global_262145.f_28651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28631 && iVar1 < Global_262145.f_28652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28632 && iVar1 < Global_262145.f_28653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28633 && iVar1 < Global_262145.f_28654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28656 && iVar1 < Global_262145.f_28657) && !Global_262145.f_28611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28659 && iVar1 < Global_262145.f_28660) && !Global_262145.f_28612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28664 && iVar1 < Global_262145.f_28667)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28665 && iVar1 < Global_262145.f_28668)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28666 && iVar1 < Global_262145.f_28669)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29682 && iVar1 < Global_262145.f_29347)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29333 && iVar1 < Global_262145.f_29354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29334 && iVar1 < Global_262145.f_29340)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29680 && iVar1 < Global_262145.f_29348)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29681 && iVar1 < Global_262145.f_29349)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29327 && iVar1 < Global_262145.f_29346)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29328 && iVar1 < Global_262145.f_29355)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29329 && iVar1 < Global_262145.f_29345)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29330 && iVar1 < Global_262145.f_29343)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29676 && iVar1 < Global_262145.f_29350)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29677 && iVar1 < Global_262145.f_29351)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29678 && iVar1 < Global_262145.f_29352)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29679 && iVar1 < Global_262145.f_29353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29331 && iVar1 < Global_262145.f_29342)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29332 && iVar1 < Global_262145.f_29344)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30141 && iVar1 < Global_262145.f_30124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30142 && iVar1 < Global_262145.f_30125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30143 && iVar1 < Global_262145.f_30126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30144 && iVar1 < Global_262145.f_30127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30145 && iVar1 < Global_262145.f_30128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30146 && iVar1 < Global_262145.f_30129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30147 && iVar1 < Global_262145.f_30130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30148 && iVar1 < Global_262145.f_30131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30149 && iVar1 < Global_262145.f_30132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30158)
		{
		}
		else if (!Global_262145.f_30150 && iVar1 < Global_262145.f_30133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30151 && iVar1 < Global_262145.f_30134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30152 && iVar1 < Global_262145.f_30135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30153 && iVar1 < Global_262145.f_30136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30154 && iVar1 < Global_262145.f_30137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30159)
		{
		}
		else if (!Global_262145.f_30155 && iVar1 < Global_262145.f_30138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30156 && iVar1 < Global_262145.f_30139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30157 && iVar1 < Global_262145.f_30140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_31009 && iVar1 < Global_262145.f_30992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_31010 && iVar1 < Global_262145.f_30993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_31011 && iVar1 < Global_262145.f_30994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31012 && iVar1 < Global_262145.f_30995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31013 && iVar1 < Global_262145.f_30996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31014 && iVar1 < Global_262145.f_30997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31015 && iVar1 < Global_262145.f_30998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31016 && iVar1 < Global_262145.f_30999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31017 && iVar1 < Global_262145.f_31000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31018 && iVar1 < Global_262145.f_31001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31019 && iVar1 < Global_262145.f_31002)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31020 && iVar1 < Global_262145.f_31003)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31021 && iVar1 < Global_262145.f_31004)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31022 && iVar1 < Global_262145.f_31005)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31023 && iVar1 < Global_262145.f_31006)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31024 && iVar1 < Global_262145.f_31007)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31025 && iVar1 < Global_262145.f_31008)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31889 && iVar1 < Global_262145.f_31874)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31890 && iVar1 < Global_262145.f_31875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31891 && iVar1 < Global_262145.f_31876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31892 && iVar1 < Global_262145.f_31877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31893 && iVar1 < Global_262145.f_31878)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31894 && iVar1 < Global_262145.f_31879)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31895 && iVar1 < Global_262145.f_31880)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31896 && iVar1 < Global_262145.f_31881)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31897 && iVar1 < Global_262145.f_31882)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31898 && iVar1 < Global_262145.f_31883)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31899 && iVar1 < Global_262145.f_31884)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31900 && iVar1 < Global_262145.f_31885)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31901 && iVar1 < Global_262145.f_31886)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31902 && iVar1 < Global_262145.f_31887)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31967)
		{
		}
		else if (!Global_262145.f_31903 && iVar1 < Global_262145.f_31888)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso3"))
	{
		if (!Global_262145.f_33131 && iVar1 < Global_262145.f_33112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("corsita"))
	{
		if (!Global_262145.f_33125 && iVar1 < Global_262145.f_33106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("draugur"))
	{
		if (!Global_262145.f_33129 && iVar1 < Global_262145.f_33110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("greenwood"))
	{
		if (!Global_262145.f_33123 && iVar1 < Global_262145.f_33104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjosj"))
	{
		if (!Global_262145.f_33134 && iVar1 < Global_262145.f_33115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lm87"))
	{
		if (!Global_262145.f_33126 && iVar1 < Global_262145.f_33107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("postlude"))
	{
		if (!Global_262145.f_33135 && iVar1 < Global_262145.f_33116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rhinehart"))
	{
		if (!Global_262145.f_33137 && iVar1 < Global_262145.f_33118)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sm722"))
	{
		if (!Global_262145.f_33128 && iVar1 < Global_262145.f_33109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf"))
	{
		if (!Global_262145.f_33136 && iVar1 < Global_262145.f_33117)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf2"))
	{
		if (!Global_262145.f_33139 && iVar1 < Global_262145.f_33120)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero2"))
	{
		if (!Global_262145.f_33124 && iVar1 < Global_262145.f_33105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero2"))
	{
		if (!Global_262145.f_33132 && iVar1 < Global_262145.f_33113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil2"))
	{
		if (!Global_262145.f_33138 && iVar1 < Global_262145.f_33119)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner4"))
	{
		if (!Global_262145.f_33130 && iVar1 < Global_262145.f_33111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel4"))
	{
		if (!Global_262145.f_33140 && iVar1 < Global_262145.f_33121)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("conada"))
	{
		if (!Global_262145.f_33127 && iVar1 < Global_262145.f_33108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnisegt"))
	{
		if (!Global_262145.f_33122 && iVar1 < Global_262145.f_33103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez3"))
	{
		if (!Global_262145.f_33962 && iVar1 < Global_262145.f_33946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brickade2"))
	{
		if (!Global_262145.f_33962 && iVar1 < Global_262145.f_33946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("eudora"))
	{
		if (!Global_262145.f_33971 && iVar1 < Global_262145.f_33954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("powersurge"))
	{
		if (!Global_262145.f_33965 && iVar1 < Global_262145.f_33949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("journey2"))
	{
		if (!Global_262145.f_33959 && iVar1 < Global_262145.f_33943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surfer3"))
	{
		if (!Global_262145.f_33960 && iVar1 < Global_262145.f_33944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity3"))
	{
		if (!Global_262145.f_33957 && iVar1 < Global_262145.f_33941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("panthere"))
	{
		if (!Global_262145.f_33968 && iVar1 < Global_262145.f_33952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boor"))
	{
		if (!Global_262145.f_33972 && iVar1 < Global_262145.f_33956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon2"))
	{
		if (!Global_262145.f_33969 && iVar1 < Global_262145.f_33953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip2"))
	{
		if (!Global_262145.f_33958 && iVar1 < Global_262145.f_33942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("r300"))
	{
		if (!Global_262145.f_33961 && iVar1 < Global_262145.f_33945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virtue"))
	{
		if (!Global_262145.f_33970 && iVar1 < Global_262145.f_33955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi8"))
	{
		if (!Global_262145.f_33966 && iVar1 < Global_262145.f_33950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("broadway"))
	{
		if (!Global_262145.f_33967 && iVar1 < Global_262145.f_33951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tahoma"))
	{
		if (!Global_262145.f_33964 && iVar1 < Global_262145.f_33948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taxi"))
	{
		if (!Global_262145.f_33963 && iVar1 < Global_262145.f_33947)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

var func_205()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_206()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

int func_207()
{
	return 0;
}

int func_208()
{
	return 1;
}

int func_209()
{
	return 1;
}

int func_210()
{
	if (unk_0x087611B922B50F13(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	uVar1 = unk_0xCA7159F2C5FF745A(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x1B79E937E91F40C3(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_201(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_212(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98042[iVar0]))
		{
			if (Global_98042[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_213(int iParam0)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xFC8BFE4B41177C22(Global_98012[iVar0]) && unk_0xD9F5E1FEFD1329E4(Global_98012[iVar0], 0))
			{
				if (Global_98012[iVar0] == iParam0 && unk_0x4B423FAA24E8ABF0(Global_98012[iVar0]) == unk_0x4B423FAA24E8ABF0(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_214(int iParam0)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(Global_77348.f_484[24]))
	{
		if (iParam0 == Global_77348.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xFC8BFE4B41177C22(Global_77348.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_77348.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_215(int iParam0)
{
	int iVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 145;
	}
	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98012[iVar0]))
		{
			if (Global_98012[iVar0] == iParam0)
			{
				return Global_98022[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_216(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_217(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113648.f_7231[iVar2], 0))
		{
			if (unk_0xFE448E8C2209CA31(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_217(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_218()
{
	Global_20591 = 0;
	func_219();
}

void func_219()
{
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0xC78B293A5F4EACF9();
		Global_22736 = 0;
		unk_0x0F15249D24BC5ADA(1);
		Global_21725 = 6;
		return;
	}
}
