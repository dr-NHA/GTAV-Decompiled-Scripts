#region Local Var
	var uLocal_0 = 0;
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
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
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
	struct<3> Local_44 = { 0, 0, 0 } ;
	float fLocal_45 = 0f;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_57 = { 0, 0, 0 } ;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	struct<6> Local_64 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_65 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84[2] = { 0, 0 };
	var uLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	int iLocal_91[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	var uLocal_114 = 16;
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
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	struct<2> Local_279 = { 0, 5 } ;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 5;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
#endregion

void __EntryFunction__()
{
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
	iLocal_19 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_45 = -1f;
	StringCopy(&Local_64, "", 24);
	Local_90 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_94 = -1;
	Local_49 = { ScriptParam_279.f_1[0 /*3*/] };
	if (unk_0x96CFB880BAC634CE(11))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_54))
		{
			if (unk_0x133460AD0F183CC9(iLocal_54))
			{
				unk_0x5C4B3034CCDA5270(iLocal_54);
			}
		}
		func_226();
	}
	if (func_225(256, 1))
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	if (func_183(Local_49, -1, 0, 0, 0))
	{
		func_180(-1);
	}
	else
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	while (true)
	{
		wait(0);
		if ((unk_0x173751E886F8E9AB() || iLocal_47 == 4) || iLocal_60 > 18)
		{
			if (!func_179())
			{
				if (func_178())
				{
					func_226();
				}
			}
			unk_0xECF30459397D5190("RE_DO", 0);
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				switch (iLocal_46)
				{
					case 0:
						if (!bLocal_48)
						{
							if (func_166())
							{
								func_226();
							}
							if (!bLocal_55)
							{
								func_165();
							}
							if (bLocal_55)
							{
								func_164();
							}
						}
						if (bLocal_48)
						{
							iLocal_46 = 1;
						}
						break;
					
					case 1:
						func_156();
						if (iLocal_61 > 3)
						{
							if (!iLocal_74 && !func_155())
							{
								func_154(&uLocal_114, "REDO2AU", "REDO2_THK", 4, 0, 0, 0);
								iLocal_74 = 1;
							}
						}
						switch (iLocal_47)
						{
							case 0:
								func_150();
								iLocal_47 = 1;
								break;
							
							case 1:
								if (!iLocal_81)
								{
									if ((unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), -467.0595f, 540.1724f, 125.3034f, 91.875f, 90.875f, 30f, 0, 1, 0) && unk_0x7B780C491DEC834E(Local_86, 1f)) || unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_86, 20f, 20f, 20f, 0, 1, 0))
									{
										func_149();
										func_140(1);
										iLocal_81 = 1;
									}
								}
								else
								{
									if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_86, 50f, 50f, 50f, 0, 1, 0))
									{
										func_138();
									}
									if (!unk_0x4FAFF4BCB7633475(iLocal_54))
									{
										if (!unk_0x65FFA94B82A71741(iLocal_54, Local_57, 30f, 30f, 30f, 0, 1, 0))
										{
											iLocal_47 = 11;
										}
									}
								}
								break;
							
							case 3:
								func_136();
								if (iLocal_60 > 18)
								{
									func_135();
								}
								else if (!func_155())
								{
									func_135();
								}
								break;
							
							case 7:
								func_136();
								func_131();
								break;
							
							case 4:
								func_136();
								func_81();
								if (func_80(Local_88))
								{
									func_57(0);
									func_55();
									wait(0);
									func_154(&uLocal_114, "REDO2AU", "REDO2_CULT", 4, 0, 0, 0);
								}
								if (func_53())
								{
									func_57(0);
									func_55();
									wait(0);
									func_154(&uLocal_114, "REDO2AU", "REDO2_NEAR", 4, 0, 0, 0);
								}
								if (!iLocal_71)
								{
									if (func_52())
									{
										if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_88, 23f, 60f, 20f, 0, 1, 0))
										{
											func_57(0);
											func_55();
											wait(0);
											if (!func_155())
											{
												func_154(&uLocal_114, "REDO2AU", "REDO2_DRP", 4, 0, 0, 0);
												iLocal_71 = 1;
											}
										}
									}
								}
								break;
							
							case 11:
								func_51();
								break;
						}
						if (!unk_0x4FAFF4BCB7633475(iLocal_53))
						{
							if (unk_0x13CCB1AD131C1082(iLocal_53, "random@domestic", "f_attack_end", 3))
							{
								func_49(iLocal_53, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
							}
						}
						if ((func_48() && !func_47()) && iLocal_46 != 2)
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_54))
							{
								if (unk_0x65FFA94B82A71741(iLocal_54, Local_90, 5f, 5f, 5f, 0, 1, 0))
								{
									if (!unk_0xFC8BFE4B41177C22(iLocal_91[8]))
									{
										iLocal_91[8] = unk_0x4E55EAB577C13329(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
										unk_0x4D306DD94DD6FDBA(iLocal_91[8], iLocal_54, unk_0x72F7E39FB49FC0BA(iLocal_54, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1, 0);
									}
									func_46(0);
									wait(0);
									func_55();
									iLocal_46 = 2;
								}
							}
						}
						if (func_45())
						{
							func_51();
						}
						break;
					
					case 2:
						if (func_44())
						{
							if (unk_0xFC8BFE4B41177C22(iLocal_54))
							{
								unk_0x734A9F4537A31459(&iLocal_54);
							}
							func_14();
						}
						break;
					
					case 3:
						func_1();
						break;
					}
			}
		}
		else
		{
			func_226();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (iLocal_109 && !iLocal_108)
	{
		func_3(0);
		if (Global_32406)
		{
			unk_0x86A2BC11844DEEB3("AC_STOP");
		}
		func_2();
		if (unk_0xFC8BFE4B41177C22(iLocal_91[8]))
		{
			uLocal_92 = unk_0x6FCBED6282FF5DA5(joaat("pickup_weapon_golfclub"), unk_0xD1A6A821F5AC81DB(iLocal_91[8], 1), unk_0x88124E0D60FB8D11(iLocal_91[8], 2) + Vector(2.8157f, -159.5768f, -14.1956f), 0, -1, 2, 1, 0);
			unk_0x51C8BEA2005931AB(&(iLocal_91[8]));
		}
		unk_0xA63572E348CC4CFB(Local_57 - Vector(10f, 10f, 10f), Local_57 + Vector(10f, 10f, 10f), 1, 1);
		unk_0xD414C47AFF81382A(255, uLocal_111, joaat("player"));
		if (bLocal_55)
		{
			unk_0x55098D9E9AD58806(iLocal_78);
			unk_0x55098D9E9AD58806(iLocal_79);
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_53))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_53))
			{
				unk_0xAAA71DD7E9059338(iLocal_53, 0);
			}
			unk_0xF09E30AF1B8FB379(&iLocal_53);
		}
		if (unk_0xC450B06E5AAA0985(uLocal_85))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_85);
		}
		if (unk_0xC450B06E5AAA0985(uLocal_84[0]))
		{
			unk_0xFE54B8568B2ABD12(&(uLocal_84[0]));
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_54))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_54))
			{
				if (!unk_0x7F420695E3F776FB(iLocal_54, 0))
				{
					unk_0x61BB4B7411E1DF82(iLocal_54);
				}
				unk_0x5C4B3034CCDA5270(iLocal_54);
				unk_0xAAA71DD7E9059338(iLocal_54, 0);
				unk_0x3F58BFCF656F0DF1(iLocal_54, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_91)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_91[iVar0]))
			{
				unk_0x837D67618BF89034(iLocal_91[iVar0], 1, 1);
			}
			iVar0++;
		}
		unk_0x2AF2D6F164BD6F5A(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		unk_0x830C51B62E7CD5B2();
		iLocal_108 = 1;
	}
	if ((!unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_57, 80f, 80f, 80f, 0, 1, 0) || unk_0x1D56B24774D5E23C(uLocal_92)) || !(unk_0xFC8BFE4B41177C22(iLocal_91[8]) && !unk_0xB0E14182FAD64944(uLocal_92)))
	{
		func_226();
	}
}

void func_2()
{
	Global_32402 = 0;
	Global_32403 = 0;
	Global_32405 = 0;
	Global_32406 = 0;
	Global_32407 = 0;
}

void func_3(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_4(iVar0, bParam0);
		iVar0++;
	}
}

void func_4(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_13(iParam0, 2, 1))
		{
			func_12(iParam0, 2, 1);
		}
	}
	else if (func_13(iParam0, 2, 1))
	{
		func_5(iParam0, 2, 1);
	}
}

void func_5(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x8744D2E3FC95740E(&(Global_100733.f_1407[iParam0]), iParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_11() == 0)
		{
			uVar0 = func_9(func_10(iParam0), -1, 0);
			unk_0x8744D2E3FC95740E(&uVar0, bParam1);
			func_6(func_10(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_113648.f_668[iParam0]), bParam1);
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805029[iParam0 /*3*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
	}
}

int func_7(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_8();
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

int func_8()
{
	return Global_1574918;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805029[iParam0 /*3*/][func_7(iParam1)];
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12385;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9916;
			break;
		
		case 57:
			return 9918;
			break;
		
		case 58:
			return 11433;
			break;
		
		case 59:
			return 11844;
			break;
		
		default:
			break;
	}
	return 14192;
}

int func_11()
{
	return Global_32163;
}

void func_12(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_100733.f_1407[iParam0]), iParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_11() == 0)
		{
			uVar0 = func_9(func_10(iParam0), -1, 0);
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, iParam1);
			func_6(func_10(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_668[iParam0]), iParam1);
	}
}

int func_13(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100733.f_1407[iParam0], iParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_11() == 0)
		{
			return BitTest(func_9(func_10(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113648.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_14()
{
	while (func_155())
	{
		wait(0);
	}
	while (!func_43())
	{
		wait(0);
	}
	Global_113648.f_18576.f_383 = func_42() + 1;
	func_18(-1, 0);
	func_15();
	iLocal_46 = 3;
}

void func_15()
{
	func_16();
}

int func_16()
{
	if (func_17(0))
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

int func_17(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_18(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_39(iParam0))
	{
		func_38(iParam0, iParam1);
		if (!func_37(51))
		{
			func_27("RE_REWARD", 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
		if (func_25(iParam0))
		{
			Global_113648.f_24997.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_20(func_24(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_113636 = iParam1;
		if (Global_113634 == 0)
		{
			if (((Global_113637 == 1 || Global_113637 == 5) || Global_113637 == 11) || Global_113637 == 25)
			{
				func_19(2);
			}
			else if ((Global_113637 == 26 || Global_113637 == 8) || Global_113637 == 17)
			{
				func_19(7);
			}
			else
			{
				func_19(1);
			}
		}
	}
}

void func_19(int iParam0)
{
	Global_113634 = iParam0;
}

void func_20(int iParam0, var uParam1, var uParam2)
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
		func_23((891 + iParam0), 1, -1);
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
		func_21();
	}
}

void func_21()
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
		func_22(13, floor(Global_113648.f_10196.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_78558)
		{
			if (func_11() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113382 = 0;
				}
				if (!Global_63362)
				{
					func_16();
				}
			}
		}
	}
}

int func_22(int iParam0, int iParam1)
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

void func_23(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_8();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

int func_24(int iParam0, int iParam1)
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
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
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
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
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
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
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

int func_25(int iParam0)
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

void func_26(int iParam0)
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
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_20412.f_150[iVar1]), iVar0);
	}
}

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_29();
	}
}

void func_29()
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

int func_30()
{
	func_31();
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

void func_31()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_35(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_34(unk_0x4A8C381C258A124D());
			if (func_33(iVar0) && (!func_32(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_33(Global_113648.f_2365.f_539.f_4321))
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

bool func_32(int iParam0)
{
	return Global_43257 == iParam0;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

int func_37(int iParam0)
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

void func_38(int iParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_24997.f_8[iParam0]), iParam1);
}

int func_39(int iParam0)
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

int func_40()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1AF90EB93E0012D6(), 64);
	uVar1 = func_41(Var0);
	return uVar1;
}

int func_41(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_42()
{
	return (Global_113648.f_10018.f_21 + Global_113648.f_18576.f_380);
}

int func_43()
{
	return 1;
}

int func_44()
{
	if (Global_32403)
	{
		func_19(4);
		return 1;
	}
	return 0;
}

int func_45()
{
	if (unk_0x4FAFF4BCB7633475(iLocal_53) && unk_0x4FAFF4BCB7633475(iLocal_54))
	{
		return 1;
	}
	return 0;
}

void func_46(int iParam0)
{
	Global_22736 = iParam0;
}

int func_47()
{
	if (Global_113648.f_24997.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_48()
{
	return Global_32402;
}

void func_49(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x4CAD907F190E6F10(iParam0, sParam1, sParam2, func_50(iParam3), 0);
}

int func_50(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_51()
{
	iLocal_46 = 3;
}

int func_52()
{
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		iLocal_110 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (unk_0xD9F5E1FEFD1329E4(iLocal_110, 0))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_54))
			{
				if (unk_0xF4244288C3EF3306(iLocal_54, iLocal_110))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_53()
{
	if (func_54() == 2)
	{
		if (func_48())
		{
			if (unk_0xED977E2AE2CB16EE(-1014.154f, 4881.411f, 245.0001f, unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), 0), 1) < 400f)
			{
				if (!Global_32407)
				{
					unk_0x86A2BC11844DEEB3("AC_EN_ROUTE_CULT");
					Global_32407 = 1;
					if (!Global_32406)
					{
						Global_32406 = 1;
						return 1;
					}
				}
			}
			else if (Global_32407)
			{
				unk_0x86A2BC11844DEEB3("AC_LEFT_AREA");
				Global_32407 = 0;
			}
		}
	}
	return 0;
}

int func_54()
{
	func_31();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_55()
{
	Global_20591 = 0;
	func_56();
}

void func_56()
{
	unk_0xC78B293A5F4EACF9();
	Global_22736 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_21725 = 6;
	}
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_63)
		{
			if (func_64(&uLocal_114, "REDO2AU", &Local_65, &Local_64, 8, 0, 0))
			{
				iLocal_63 = 0;
			}
		}
	}
	else if ((!iLocal_63 && unk_0x1F9EB85925C3ECD7()) && !func_62())
	{
		Local_65 = { func_61() };
		Local_64 = { func_60() };
		func_58();
		iLocal_63 = 1;
	}
}

void func_58()
{
	Global_20591 = 0;
	func_59();
}

void func_59()
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

struct<6> func_60()
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21725 == 4)
	{
		iVar1 = unk_0xE7365CC791D1E4EB();
		iVar1 = (iVar1 + Global_22735);
		if (iVar1 > -1)
		{
			return Global_20593[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_61()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21725 == 4)
	{
		return Global_21344;
	}
	return Var0;
}

int func_62()
{
	if (((((((func_63("REDO2_DRP") || func_63("REDO2_UV")) || func_63("REDO2_UV2")) || func_63("REDO2_CULT")) || func_63("REDO2_NEAR")) || func_63("REDO2_GETOUT")) || func_63("REDO2_JACK")) || func_63("REDO2_SHOOT"))
	{
		return 1;
	}
	return 0;
}

int func_63(char* sParam0)
{
	var uVar0;
	
	if (func_155())
	{
		MemCopy(&uVar0, {func_61()}, 4);
		if (unk_0x1B79E937E91F40C3(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_64(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_79(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21732 = 0;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 1;
	StringCopy(&Global_22729, sParam3, 24);
	Global_2883585 = 0;
	return func_65(sParam2, iParam4, 0);
}

int func_65(char* sParam0, int iParam1, bool bParam2)
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
					func_78();
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
		if (func_77(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_76();
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
			unk_0x8744D2E3FC95740E(&Global_8255, false);
			if (bParam2)
			{
				func_75();
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
				if (func_74())
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
			if (func_73())
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
			func_72();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_71();
		func_66();
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
		func_78();
	}
	return 0;
}

void func_66()
{
	if (!func_67())
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

int func_67()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_70())
	{
		return 0;
	}
	if (func_68(unk_0x259BE71D8A81D4FA()))
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

bool func_68(int iParam0)
{
	return func_69(iParam0, 20);
}

var func_69(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_70()
{
	return -1;
}

void func_71()
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

void func_72()
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

int func_73()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_74()
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

void func_75()
{
	if (func_32(14))
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
		Global_20383 = func_54();
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

void func_76()
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

bool func_77(int iParam0, int iParam1)
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

void func_78()
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

void func_79(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	StringCopy(&Global_21795, sParam2, 24);
	Global_22714 = iParam5;
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

int func_80(struct<3> Param0)
{
	if (func_54() == 2)
	{
		if (func_48() && !Global_32405)
		{
			if (fLocal_45 == -1f)
			{
				fLocal_45 = vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Param0);
			}
			if (vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Param0) > (fLocal_45 + 200f) || unk_0xED977E2AE2CB16EE(-1014.154f, 4881.411f, 245.0001f, unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), 0), 1) < 400f)
			{
				Global_32405 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_81()
{
	switch (iLocal_62)
	{
		case 0:
			if (iLocal_60 > 18)
			{
				iLocal_62++;
			}
			else if (!unk_0x4FAFF4BCB7633475(iLocal_54))
			{
				unk_0x4190C67D524CD0DC(iLocal_54, 1f);
				if (unk_0xFAA48325A90263BE(iLocal_54, unk_0x4A8C381C258A124D(), 8f, 8f, 8f, 0, 1, 0))
				{
					if (iLocal_60 < 19)
					{
						if (func_154(&uLocal_114, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
						{
							iLocal_62++;
						}
					}
					else
					{
						iLocal_62++;
					}
				}
			}
			break;
		
		case 1:
			func_127();
			if (unk_0xFC8BFE4B41177C22(iLocal_54))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_54))
				{
					if (unk_0xD9F5E1FEFD1329E4(unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D()), 0))
					{
						if (unk_0x9D6DF8F3584AAC2B(iLocal_54))
						{
							unk_0x51C8BEA2005931AB(&(iLocal_91[8]));
						}
					}
					if (unk_0x27E68848F0E5D7D9(iLocal_54))
					{
						func_125();
						func_119();
						if (func_154(&uLocal_114, "REDO2AU", "REDO2_TO", 4, 0, 0, 0))
						{
							settimerb(0);
							iLocal_62++;
						}
					}
					else
					{
						unk_0x4190C67D524CD0DC(iLocal_54, 1f);
					}
				}
			}
			break;
		
		case 2:
			func_119();
			func_118();
			func_127();
			func_117();
			if (timerb() > 1500)
			{
				func_116();
			}
			if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_88, 10f, 10f, 10f, 0, 1, 0))
			{
				unk_0xAD01710361B8BCF5();
			}
			if (unk_0xFC8BFE4B41177C22(iLocal_54))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_54))
				{
					if (unk_0x65FFA94B82A71741(iLocal_54, Local_88, Global_19, 1, 1, 0) && func_115(1, 0, 1))
					{
						if (unk_0xC450B06E5AAA0985(uLocal_82))
						{
							unk_0xFE54B8568B2ABD12(&uLocal_82);
						}
						if (unk_0xC450B06E5AAA0985(uLocal_83))
						{
							unk_0xFE54B8568B2ABD12(&uLocal_83);
						}
						if (unk_0x7F420695E3F776FB(iLocal_54, 0))
						{
							unk_0xE5EE5C9DDF05D925(unk_0x6EF03BE64E058E2F(iLocal_54, 0), 10.5f, 3, 0);
							iLocal_62++;
						}
						else
						{
							iLocal_62 = 4;
						}
					}
				}
			}
			break;
		
		case 3:
			func_114();
			if (bLocal_104)
			{
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
				func_14();
			}
			break;
		
		case 4:
			func_82();
			if (bLocal_104)
			{
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
				func_14();
			}
			break;
	}
}

void func_82()
{
	switch (iLocal_102)
	{
		case 0:
			unk_0xAD01710361B8BCF5();
			func_58();
			if (func_154(&uLocal_114, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_102++;
			}
			break;
		
		case 1:
			iLocal_102++;
			break;
		
		case 2:
			unk_0xAD01710361B8BCF5();
			if (!unk_0x4FAFF4BCB7633475(iLocal_54))
			{
				unk_0x5C4B3034CCDA5270(iLocal_54);
				unk_0xB5396F1FB088FE38(&uLocal_77);
				unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), 7000, 2048, 2);
				unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 4000);
				unk_0xA966E518B752B92A(0, Local_89, 1f, -1, 0.25f, 0, 311.3569f);
				unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0x93C0674FC00824D0(uLocal_77);
				unk_0x4BD42B0527065BB6(iLocal_54, uLocal_77);
				unk_0xD0557B139A542F12(&uLocal_77);
				unk_0x44FB298D6382876D(iLocal_54, 1);
				iLocal_103 = unk_0x1DD05E817C89C737() + 4000;
				iLocal_102++;
			}
			break;
		
		case 3:
			if (iLocal_103 < unk_0x1DD05E817C89C737())
			{
				unk_0xAD01710361B8BCF5();
				iLocal_102++;
			}
			break;
		
		case 4:
			if (!func_155())
			{
				func_113("DOM_GOLF", -1);
				func_112(&(Global_113648.f_18981), 16);
				if (func_54() == 0)
				{
					func_111(&(Global_113648.f_18981.f_24), 1);
				}
				else if (func_54() == 1)
				{
					func_111(&(Global_113648.f_18981.f_24), 4);
				}
				else if (func_54() == 2)
				{
					func_111(&(Global_113648.f_18981.f_24), 2);
				}
				func_83(func_54(), 1, 80, 0, 1);
				settimera(0);
				iLocal_102++;
			}
			break;
		
		case 5:
			if (timera() > 5000)
			{
				bLocal_104 = true;
			}
			break;
	}
}

void func_83(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_110(iParam0) == 3)
	{
		return;
	}
	if (func_110(iParam0) == 4)
	{
		return;
	}
	func_84(func_110(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0xDF7F16323520B858(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x1164A75E490C27B6(iVar1, iVar0, 1);
	}
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_109();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_108(99, 1);
					func_107(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_107(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_107(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_93(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_91(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_107(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_107(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_107(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_91(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_107(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_107(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_107(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_107(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_107(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_107(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_107(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_107(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_107(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x931D15B1D60C81B0())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_107(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_107(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_107(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_107(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_107(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_107(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_91(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_107(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_107(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_107(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_107(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_107(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_107(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_90(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_108(95, iParam3);
					break;
				
				case 1:
					func_108(97, iParam3);
					break;
				
				case 2:
					func_108(96, iParam3);
					break;
			}
			func_108(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_87(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_87(bVar1);
	}
	iVar5 = (Global_60536[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60536[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60536[iVar2] = 2147483647;
				}
				else
				{
					Global_60536[iVar2] = (Global_60536[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_107(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_107(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_107(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60536[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60536[iVar2];
			Global_60536[iVar2] = (Global_60536[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113648.f_20566.f_233[iVar2 /*69*/]++;
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_1++;
		if (Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_86(iParam0);
	if (Global_43257 == 15)
	{
		func_85(0);
	}
	return 1;
}

void func_85(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60544[iVar0 /*3*/][0] = Global_113648.f_20566[iVar0];
		Global_60544.f_31[iVar0 /*3*/][0] = Global_113648.f_20566.f_11[iVar0];
		Global_60544.f_62[iVar0 /*3*/][0] = Global_113648.f_20566.f_22[iVar0];
		Global_60544.f_93[iVar0 /*3*/][0] = Global_113648.f_20566.f_33[iVar0];
		Global_60544.f_124[iVar0 /*3*/][0] = Global_113648.f_20566.f_44[iVar0];
		Global_60544.f_155[iVar0 /*3*/][0] = Global_113648.f_20566.f_55[iVar0];
		Global_60544.f_186[iVar0 /*3*/][0] = Global_113648.f_20566.f_66[iVar0];
		Global_60544.f_217[iVar0 /*3*/][0] = Global_113648.f_20566.f_77[iVar0];
		Global_60544.f_248[iVar0 /*3*/][0] = Global_113648.f_20566.f_88[iVar0];
		if (!bParam0)
		{
			Global_60544[iVar0 /*3*/][1] = Global_113648.f_20566[iVar0];
			Global_60544.f_31[iVar0 /*3*/][1] = Global_113648.f_20566.f_11[iVar0];
			Global_60544.f_62[iVar0 /*3*/][1] = Global_113648.f_20566.f_22[iVar0];
			Global_60544.f_93[iVar0 /*3*/][1] = Global_113648.f_20566.f_33[iVar0];
			Global_60544.f_124[iVar0 /*3*/][1] = Global_113648.f_20566.f_44[iVar0];
			Global_60544.f_155[iVar0 /*3*/][1] = Global_113648.f_20566.f_55[iVar0];
			Global_60544.f_186[iVar0 /*3*/][1] = Global_113648.f_20566.f_66[iVar0];
			Global_60544.f_217[iVar0 /*3*/][1] = Global_113648.f_20566.f_77[iVar0];
			Global_60544.f_248[iVar0 /*3*/][1] = Global_113648.f_20566.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_86(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_60536[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x1164A75E490C27B6(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x1164A75E490C27B6(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x1164A75E490C27B6(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_87(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_23(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_23(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_23(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_23(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_6(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_6(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_6(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_6(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_6(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_6(8277, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x76CD105BCAC6EB9F())
	{
		if (BitTest(Global_113648.f_20566.f_471, bParam0))
		{
			bVar0 = true;
			unk_0x8744D2E3FC95740E(&(Global_113648.f_20566.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113648.f_20566.f_471, bParam0) || BitTest(Global_2359296[func_89() /*5568*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0x8744D2E3FC95740E(&(Global_113648.f_20566.f_471), bParam0);
		unk_0x8744D2E3FC95740E(&(Global_2359296[func_89() /*5568*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xCCDB0041859B85A6("COUP_RED");
		unk_0xACF853FB3F6EA7D4(func_88(bParam0));
		unk_0x5C7E2225D7451992(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_88(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_89()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_90(int iParam0)
{
	func_108(93, iParam0);
	func_108(29, iParam0);
	func_108(30, iParam0);
}

int func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_92(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_92(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_92(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_92(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x39D1D336459711BE();
		iVar1 = func_9(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x39D1D336459711BE();
		iVar3 = func_9(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x39D1D336459711BE();
		iVar5 = func_9(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x39D1D336459711BE();
		iVar7 = func_9(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x39D1D336459711BE();
		iVar9 = func_9(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x39D1D336459711BE();
		iVar11 = func_9(8277, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return BitTest(Global_113648.f_20566.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_89() /*5568*/].f_681.f_10, iParam0);
}

var func_92(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_8();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

int func_93(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x37088D2C63AC4C01(27))
	{
		return 0;
	}
	if (unk_0xDF7F16323520B858(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDF7F16323520B858(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDF7F16323520B858(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xDF7F16323520B858(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x1164A75E490C27B6(joaat("num_cash_spent"), iVar1, 1);
		func_22(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_94(27, 1);
	return 1;
}

int func_94(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_95(iParam0, iParam1);
}

int func_95(int iParam0, int iParam1)
{
	if (func_32(14) && !func_106(iParam0))
	{
		return 0;
	}
	if (unk_0x37088D2C63AC4C01(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32414 != 0 && !Global_78558)
	{
		return 0;
	}
	if (func_105(&Global_4542597))
	{
		if (func_103(&Global_4542597, iParam0))
		{
			return 0;
		}
		if (func_96(&Global_4542597, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x584E143398F9661C(iParam0))
		{
			return 0;
		}
		if (unk_0x37088D2C63AC4C01(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_106(iParam1))
	{
		return 0;
	}
	if (func_103(uParam0, iParam1))
	{
		return 0;
	}
	if (func_102(uParam0) < 0f)
	{
		func_101(uParam0, 0);
	}
	func_99(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_97(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_97(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_106(iParam1))
	{
		return 0;
	}
	if (func_103(uParam0, iParam1))
	{
		return 0;
	}
	if (func_102(uParam0) < 0f)
	{
		func_101(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_98(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_98(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_99(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_100(uParam0, iVar0);
		iVar0++;
	}
	func_101(uParam0, (Global_4542596 - 0.5f));
}

void func_100(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_101(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_102(var uParam0)
{
	return uParam0->f_80;
}

bool func_103(var uParam0, int iParam1)
{
	return func_104(uParam0, iParam1) != -1;
}

int func_104(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_105(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

void func_107(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDF7F16323520B858(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x1164A75E490C27B6(iParam0, iVar0, 1);
}

void func_108(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59104[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	if (Global_59104[iParam0 /*7*/])
	{
		unk_0xDF7F16323520B858(Global_59104[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x1164A75E490C27B6(Global_59104[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_109()
{
	int iVar0;
	
	if (unk_0x5F9F81C08516558E())
	{
		unk_0xDF7F16323520B858(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_60536[0] == iVar0)
		{
			Global_60536[0] = iVar0;
		}
		unk_0xDF7F16323520B858(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_60536[1] == iVar0)
		{
			Global_60536[1] = iVar0;
		}
		unk_0xDF7F16323520B858(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_60536[2] == iVar0)
		{
			Global_60536[2] = iVar0;
		}
	}
}

int func_110(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_17;
}

void func_111(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_112(var uParam0, int iParam1)
{
	uParam0->f_23 = (uParam0->f_23 || iParam1);
}

void func_113(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

void func_114()
{
	switch (iLocal_102)
	{
		case 0:
			unk_0xAD01710361B8BCF5();
			func_58();
			if (func_154(&uLocal_114, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_102++;
			}
			break;
		
		case 1:
			unk_0xAD01710361B8BCF5();
			iLocal_102++;
			break;
		
		case 2:
			unk_0xAD01710361B8BCF5();
			iLocal_102++;
			break;
		
		case 3:
			unk_0xAD01710361B8BCF5();
			if (!unk_0x4FAFF4BCB7633475(iLocal_54))
			{
				unk_0x5C4B3034CCDA5270(iLocal_54);
				unk_0xB5396F1FB088FE38(&uLocal_77);
				unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), 7000, 2048, 2);
				unk_0x5524CAF18378DF39(0, 300);
				unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 4000);
				unk_0xA966E518B752B92A(0, Local_89, 1f, -1, 0.25f, 0, 311.3569f);
				unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0x93C0674FC00824D0(uLocal_77);
				unk_0x4BD42B0527065BB6(iLocal_54, uLocal_77);
				unk_0xD0557B139A542F12(&uLocal_77);
				unk_0x44FB298D6382876D(iLocal_54, 1);
				if (!unk_0xFC8BFE4B41177C22(iLocal_91[8]))
				{
					iLocal_91[8] = unk_0x4E55EAB577C13329(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
					unk_0x4D306DD94DD6FDBA(iLocal_91[8], iLocal_54, unk_0x72F7E39FB49FC0BA(iLocal_54, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1, 0);
				}
				iLocal_103 = unk_0x1DD05E817C89C737() + 1000;
				iLocal_102++;
			}
			break;
		
		case 4:
			unk_0xAD01710361B8BCF5();
			if (iLocal_103 < unk_0x1DD05E817C89C737())
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_54))
				{
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
					iLocal_103 = unk_0x1DD05E817C89C737() + 3000;
					iLocal_102++;
				}
			}
			break;
		
		case 5:
			if (iLocal_103 < unk_0x1DD05E817C89C737())
			{
				unk_0xAD01710361B8BCF5();
				iLocal_102++;
			}
			break;
		
		case 6:
			if (!func_155())
			{
				func_113("DOM_GOLF", -1);
				func_112(&(Global_113648.f_18981), 16);
				if (func_54() == 0)
				{
					func_111(&(Global_113648.f_18981.f_24), 1);
				}
				else if (func_54() == 1)
				{
					func_111(&(Global_113648.f_18981.f_24), 4);
				}
				else if (func_54() == 2)
				{
					func_111(&(Global_113648.f_18981.f_24), 2);
				}
				func_83(func_54(), 1, 80, 0, 1);
				settimera(0);
				iLocal_102++;
			}
			break;
		
		case 7:
			if (timera() > 5000)
			{
				bLocal_104 = true;
			}
			break;
	}
}

int func_115(bool bParam0, bool bParam1, bool bParam2)
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

void func_116()
{
	if (!func_62())
	{
		func_57(1);
	}
	if (!func_155())
	{
		switch (iLocal_100)
		{
			case 0:
				if (func_54() == 0)
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHTM", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHTF", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHTT", 4, 0, 0, 0);
				}
				iLocal_100++;
				break;
			
			case 1:
				func_154(&uLocal_114, "REDO2AU", "REDO2_CHT2", 4, 0, 0, 0);
				iLocal_100++;
				break;
			
			case 2:
				if (func_54() == 0)
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHT2M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHT2F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHT2T", 4, 0, 0, 0);
				}
				iLocal_100++;
				break;
			
			case 3:
				func_154(&uLocal_114, "REDO2AU", "REDO2_CHT3", 4, 0, 0, 0);
				iLocal_100++;
				break;
			
			case 4:
				if (func_54() == 0)
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHT3M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHT3F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHT3T", 4, 0, 0, 0);
				}
				iLocal_100++;
				break;
			
			case 5:
				func_154(&uLocal_114, "REDO2AU", "REDO_CHT4", 4, 0, 0, 0);
				iLocal_100++;
				break;
			
			case 6:
				iLocal_101 = unk_0x1DD05E817C89C737() + 1000;
				iLocal_100++;
				break;
			
			case 7:
				if (iLocal_101 < unk_0x1DD05E817C89C737())
				{
					if (func_54() == 0)
					{
						func_154(&uLocal_114, "REDO2AU", "REDO_CHT4M", 4, 0, 0, 0);
					}
					else if (func_54() == 1)
					{
						func_154(&uLocal_114, "REDO2AU", "REDO_CHT4F", 4, 0, 0, 0);
					}
					else if (func_54() == 2)
					{
						func_154(&uLocal_114, "REDO2AU", "REDO_CHT4T", 4, 0, 0, 0);
					}
					iLocal_100++;
				}
				break;
			
			case 8:
				func_154(&uLocal_114, "REDO2AU", "REDO2_CHT5", 4, 0, 0, 0);
				iLocal_100++;
				break;
			
			case 9:
				if (func_54() == 0)
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHT5M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHT5F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHT5T", 4, 0, 0, 0);
				}
				iLocal_100++;
				break;
			
			case 10:
				func_154(&uLocal_114, "REDO2AU", "REDO2_CHT6", 4, 0, 0, 0);
				iLocal_100++;
				break;
			
			case 11:
				if (func_54() == 0)
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHT6M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHT6F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHT6T", 4, 0, 0, 0);
				}
				iLocal_100++;
				break;
			
			case 12:
				func_154(&uLocal_114, "REDO2AU", "REDO2_CHT7", 4, 0, 0, 0);
				iLocal_100++;
				break;
			
			case 13:
				iLocal_101 = unk_0x1DD05E817C89C737() + 600;
				iLocal_100++;
				break;
			
			case 14:
				if (iLocal_101 < unk_0x1DD05E817C89C737())
				{
					if (func_54() == 0)
					{
						func_154(&uLocal_114, "REDO2AU", "REDO2_CHT7M", 4, 0, 0, 0);
					}
					else if (func_54() == 1)
					{
						func_154(&uLocal_114, "REDO2AU", "REDO2_CHT7F", 4, 0, 0, 0);
					}
					else if (func_54() == 2)
					{
						func_154(&uLocal_114, "REDO2AU", "REDO2_CHT7T", 4, 0, 0, 0);
					}
					iLocal_100++;
				}
				break;
			
			case 15:
				func_154(&uLocal_114, "REDO2AU", "REDO2_CHT8", 4, 0, 0, 0);
				iLocal_100++;
				break;
			
			case 16:
				if (func_54() == 0)
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHT8M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHT8F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHT8T", 4, 0, 0, 0);
				}
				iLocal_100++;
				break;
			
			case 17:
				iLocal_101 = unk_0x1DD05E817C89C737() + 800;
				iLocal_100++;
				break;
			
			case 18:
				if (iLocal_101 < unk_0x1DD05E817C89C737())
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHT9", 4, 0, 0, 0);
					iLocal_100++;
				}
				break;
			
			case 19:
				if (func_54() == 0)
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHT9M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHT9F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_154(&uLocal_114, "REDO2AU", "REDO2_CHT9T", 4, 0, 0, 0);
				}
				iLocal_100++;
				break;
			
			case 20:
				func_154(&uLocal_114, "REDO2AU", "REDO2_CHT10", 4, 0, 0, 0);
				iLocal_100++;
				break;
			}
	}
}

void func_117()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_54))
	{
		if (!iLocal_66)
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0xDC8D5832207C2EAD(), 0))
			{
				if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xDC8D5832207C2EAD(), 1) && unk_0xCECDBB848D53DEB2(iLocal_54, unk_0xDC8D5832207C2EAD(), 0))
				{
					func_57(0);
					func_55();
					wait(0);
					func_154(&uLocal_114, "REDO2AU", "REDO2_GETOUT", 4, 0, 0, 0);
					iLocal_66 = 1;
				}
			}
		}
		else if (!unk_0x1C2F771CDC87A3A5(unk_0xDC8D5832207C2EAD(), 0))
		{
			if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xDC8D5832207C2EAD(), 0) && unk_0xCECDBB848D53DEB2(iLocal_54, unk_0xDC8D5832207C2EAD(), 0))
			{
				iLocal_66 = 0;
			}
		}
		if (!iLocal_67)
		{
			if (unk_0x49CB27F641DC1328(unk_0x4A8C381C258A124D()))
			{
				func_57(0);
				func_55();
				wait(0);
				func_154(&uLocal_114, "REDO2AU", "REDO2_JACK", 4, 0, 0, 0);
				iLocal_67 = 1;
			}
		}
		else if (!unk_0x49CB27F641DC1328(unk_0x4A8C381C258A124D()))
		{
			iLocal_67 = 0;
		}
		if (!iLocal_68)
		{
			if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
			{
				func_57(0);
				func_55();
				wait(0);
				func_154(&uLocal_114, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
				iLocal_68 = 1;
			}
		}
		else if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
		{
			iLocal_68 = 0;
		}
	}
}

void func_118()
{
	if (unk_0xD9CCFCDF70474932(unk_0x4A8C381C258A124D()))
	{
		if (iLocal_95 == 0)
		{
			iLocal_95 = unk_0x1DD05E817C89C737();
		}
		else
		{
			iLocal_96 = unk_0x1DD05E817C89C737();
		}
	}
	else
	{
		iLocal_96 = 0;
		iLocal_95 = 0;
	}
	if ((iLocal_96 - iLocal_95) > 60000)
	{
		func_55();
		wait(0);
		func_154(&uLocal_114, "REDO2AU", "REDO2_TX", 4, 0, 0, 0);
		if (!unk_0x4FAFF4BCB7633475(iLocal_54))
		{
			if (unk_0x65FFA94B82A71741(iLocal_54, Local_89, 200f, 200f, 200f, 0, 1, 0))
			{
				unk_0xA966E518B752B92A(iLocal_54, Local_89, 1f, -1, 0.25f, 0, 1193033728);
			}
			else
			{
				unk_0x761F56E633460973(iLocal_54, 1193033728, 0);
			}
			unk_0x44FB298D6382876D(iLocal_54, 1);
			unk_0x5C4B3034CCDA5270(iLocal_54);
		}
		func_51();
	}
}

void func_119()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_54))
	{
		if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_54, 8f, 8f, 8f, 0, 1, 0) || unk_0x0F00017BC718D851(unk_0x4A8C381C258A124D()))
		{
			if ((unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && !unk_0x7F420695E3F776FB(iLocal_54, 0)) && !unk_0x0F00017BC718D851(unk_0x4A8C381C258A124D()))
			{
				if (!unk_0xC450B06E5AAA0985(uLocal_84[0]))
				{
					uLocal_84[0] = func_123(iLocal_54, 0, 145);
				}
				if (unk_0xC450B06E5AAA0985(uLocal_82))
				{
					unk_0xFE54B8568B2ABD12(&uLocal_82);
				}
			}
			else
			{
				if (unk_0xC450B06E5AAA0985(uLocal_84[0]))
				{
					unk_0xFE54B8568B2ABD12(&(uLocal_84[0]));
				}
				if (!unk_0xC450B06E5AAA0985(uLocal_82))
				{
					uLocal_82 = func_121(Local_88, 1);
				}
				if (func_54() == 2 && !func_47())
				{
					if (!unk_0xC450B06E5AAA0985(uLocal_83))
					{
						uLocal_83 = func_121(Local_90, 0);
						unk_0x4C905FB262965D5D(uLocal_83, 269);
						func_120();
					}
				}
			}
		}
		else
		{
			if (!unk_0xC450B06E5AAA0985(uLocal_84[0]))
			{
				uLocal_84[0] = func_123(iLocal_54, 0, 145);
			}
			if (unk_0xC450B06E5AAA0985(uLocal_82))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_82);
			}
		}
	}
}

void func_120()
{
	if (func_54() == 2)
	{
		if (!Global_32404)
		{
			func_113("CULT_BLIP_HELP", -1);
			Global_32404 = 1;
		}
	}
}

var func_121(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0x34864AB7DA700AA6(Param0);
	unk_0x5D3946F818C6B331(uVar0, func_122(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
	unk_0xBC64B805EE071A37(uVar0, iParam1);
	return uVar0;
}

float func_122(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

var func_123(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_124(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC450B06E5AAA0985(uVar0)) && unk_0x6BA487C862DB8DDF(&(Global_2028[iParam2 /*29*/].f_3)))
	{
		unk_0x594D5D0D7071B0DE(uVar0, &(Global_2028[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_124(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_122(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
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
		unk_0x5D3946F818C6B331(uVar0, func_122(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_122(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_125()
{
	int iVar0;
	
	unk_0xF09E30AF1B8FB379(&iLocal_53);
	func_126(&uLocal_114, 4);
	iVar0 = 0;
	while (iVar0 < iLocal_91)
	{
		unk_0xB3B56385ECA230B4(&(iLocal_91[iVar0]));
		iVar0++;
	}
	unk_0x268BE77F77533D03("random@domestic");
}

void func_126(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_127()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_54))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
		{
			if (!func_130())
			{
				if (unk_0x133460AD0F183CC9(iLocal_54))
				{
					unk_0x5C4B3034CCDA5270(iLocal_54);
				}
				if (unk_0x9B5C1660CCDF7189(iLocal_54, joaat("script_task_go_to_entity")) != 1 && unk_0x9B5C1660CCDF7189(iLocal_54, joaat("script_task_go_to_entity")) != 0)
				{
					unk_0xAB3658A740EED98E(iLocal_54, unk_0x4A8C381C258A124D(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (unk_0x7F420695E3F776FB(iLocal_54, 0))
				{
					unk_0x092B9247AF00F5CF(iLocal_54, 0, 0);
				}
				if (!iLocal_73)
				{
					func_57(0);
					func_55();
					wait(0);
					if (!func_155())
					{
						if (!func_129())
						{
							func_154(&uLocal_114, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							func_154(&uLocal_114, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_73 = 1;
					}
				}
			}
			else
			{
				iLocal_73 = 0;
				if (unk_0x9B5C1660CCDF7189(iLocal_54, joaat("script_task_go_to_entity")) == 1 && unk_0x9B5C1660CCDF7189(iLocal_54, joaat("script_task_go_to_entity")) == 0)
				{
					unk_0x974022927CB47E68(iLocal_54);
				}
			}
		}
		else if (!unk_0x133460AD0F183CC9(iLocal_54))
		{
			unk_0x03AB73582A77DBD3(iLocal_54, func_128());
			unk_0xBC14FFDBE1C32C51(iLocal_54, 1);
			unk_0x412B9F2CF0E60079(iLocal_54, 0);
		}
	}
}

var func_128()
{
	return unk_0xD59511AF30BE1934(unk_0xB6B621402486C3E4());
}

int func_129()
{
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		if (unk_0xD9F5E1FEFD1329E4(unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D()), 1))
		{
			if ((unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 1))) || unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 1)))) || unk_0x9910CD0D8626AA28(unk_0x4B423FAA24E8ABF0(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_130()
{
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (unk_0xD9F5E1FEFD1329E4(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0))
		{
			if (((((!unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()) && !unk_0xC5F2281709805477(unk_0x4A8C381C258A124D())) && !unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D())) && !unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D())) && !unk_0x17CB7D9FBEC4100F(unk_0x4A8C381C258A124D())) && !unk_0x0595DAC15F5513F9(unk_0x4A8C381C258A124D(), joaat("rhino")))
			{
				if (unk_0x2EEC0612337D20CE(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		if (unk_0xD9F5E1FEFD1329E4(unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D()), 0))
		{
			if ((((!unk_0xBA16CD57E37AC32A(unk_0x4B423FAA24E8ABF0(unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D()))) && !unk_0x00C6FDED3EB75117(unk_0x4B423FAA24E8ABF0(unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D())))) && !unk_0xEA4F815FDC353FEF(unk_0x4B423FAA24E8ABF0(unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D())))) && !unk_0xAE447CBB33B40CA3(unk_0x4B423FAA24E8ABF0(unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D())))) && unk_0x4B423FAA24E8ABF0(unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_131()
{
	switch (iLocal_61)
	{
		case 0:
			if (!func_155())
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					if (func_130())
					{
						if (func_54() == 0)
						{
							func_154(&uLocal_114, "REDO2AU", "REDO2_GLM", 4, 0, 0, 0);
						}
						if (func_54() == 1)
						{
							func_154(&uLocal_114, "REDO2AU", "REDO2_GLF", 4, 0, 0, 0);
						}
						if (func_54() == 2)
						{
							func_154(&uLocal_114, "REDO2AU", "REDO2_GLT", 4, 0, 0, 0);
						}
						iLocal_61 = 2;
					}
					else
					{
						if (func_54() == 0)
						{
							func_154(&uLocal_114, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
						}
						if (func_54() == 1)
						{
							func_154(&uLocal_114, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
						}
						if (func_54() == 2)
						{
							func_154(&uLocal_114, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
						}
						iLocal_61++;
					}
				}
				else
				{
					if (func_54() == 0)
					{
						func_154(&uLocal_114, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
					}
					if (func_54() == 1)
					{
						func_154(&uLocal_114, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
					}
					if (func_54() == 2)
					{
						func_154(&uLocal_114, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
					}
					iLocal_61++;
				}
			}
			break;
		
		case 1:
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				if (!func_130())
				{
					if (!func_155())
					{
						func_154(&uLocal_114, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
						iLocal_98 = unk_0x1DD05E817C89C737();
						iLocal_61++;
					}
				}
				else
				{
					iLocal_61++;
				}
			}
			else if (!func_155())
			{
				func_154(&uLocal_114, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
				iLocal_98 = unk_0x1DD05E817C89C737();
				iLocal_61++;
			}
			break;
		
		case 2:
			iLocal_99 = unk_0x1DD05E817C89C737();
			if (!unk_0x4FAFF4BCB7633475(iLocal_54))
			{
				if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_54, 12f, 12f, 5f, 0, 1, 2))
				{
					if (func_130())
					{
						unk_0xD414C47AFF81382A(255, uLocal_111, joaat("player"));
						if (func_134("REDO2_WT"))
						{
							func_55();
							wait(0);
						}
						iLocal_61++;
					}
					else if (!func_155() && !iLocal_69)
					{
						if (!func_129())
						{
							func_154(&uLocal_114, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							func_154(&uLocal_114, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_69 = 1;
					}
				}
			}
			if (iLocal_98 != 0)
			{
				if ((iLocal_99 - iLocal_98) > 60000)
				{
					if (func_154(&uLocal_114, "REDO2AU", "REDO2_TX", 4, 0, 0, 0))
					{
						wait(2000);
						if (!unk_0x4FAFF4BCB7633475(iLocal_54))
						{
							unk_0xB5396F1FB088FE38(&uLocal_77);
							unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 2000);
							unk_0xE69B8FE2F4FD0178(0, -1);
							unk_0x761F56E633460973(0, 1193033728, 0);
							unk_0x93C0674FC00824D0(uLocal_77);
							unk_0x4BD42B0527065BB6(iLocal_54, uLocal_77);
							unk_0xD0557B139A542F12(&uLocal_77);
							unk_0x44FB298D6382876D(iLocal_54, 1);
							wait(3000);
							iLocal_47 = 11;
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x4FAFF4BCB7633475(iLocal_54) && unk_0xFC8BFE4B41177C22(iLocal_91[8]))
			{
				unk_0xB5396F1FB088FE38(&uLocal_77);
				if (iLocal_60 > 18)
				{
				}
				unk_0xA966E518B752B92A(0, unk_0xD1A6A821F5AC81DB(iLocal_91[8], 1) + Vector(0f, 0.39f, 0.35f), 1f, -1, 0f, 512, func_133(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_91[8], 1)));
				unk_0x10425721983AE158(0, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0, 0, 0, 0);
				unk_0x93C0674FC00824D0(uLocal_77);
				unk_0x4BD42B0527065BB6(iLocal_54, uLocal_77);
				unk_0xD0557B139A542F12(&uLocal_77);
				settimerb(0);
				iLocal_61++;
			}
			break;
		
		case 4:
		case 5:
			if (!unk_0x4FAFF4BCB7633475(iLocal_54) && !unk_0x1C2F771CDC87A3A5(iLocal_91[8], 0))
			{
				if (unk_0x13CCB1AD131C1082(iLocal_54, "random@domestic", "pickup_low", 3))
				{
					unk_0x015E1BBD4DB33542(iLocal_54, iLocal_91[8], 0);
					if (unk_0x82E64DE58A6B84A8(iLocal_54, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_61 = 7;
					}
				}
				else if (timerb() > 10000 || unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), unk_0xD1A6A821F5AC81DB(iLocal_91[8], 1), 1.5f, 1.5f, 3f, 0, 1, 0))
				{
					if (!unk_0xA3736D76B0E93E93(iLocal_91[8]))
					{
						unk_0xB5396F1FB088FE38(&uLocal_77);
						unk_0x10425721983AE158(0, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0x10425721983AE158(0, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0, 0, 0, 0);
						unk_0x93C0674FC00824D0(uLocal_77);
						unk_0x4BD42B0527065BB6(iLocal_54, uLocal_77);
						unk_0xD0557B139A542F12(&uLocal_77);
						iLocal_61 = 6;
					}
				}
			}
			break;
		
		case 6:
			if (!unk_0x4FAFF4BCB7633475(iLocal_54) && !unk_0x1C2F771CDC87A3A5(iLocal_91[8], 0))
			{
				if (unk_0x13CCB1AD131C1082(iLocal_54, "random@domestic", "pickup_low", 3))
				{
					unk_0x015E1BBD4DB33542(iLocal_54, iLocal_91[8], 0);
					if (unk_0x82E64DE58A6B84A8(iLocal_54, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_61++;
					}
				}
			}
			break;
		
		case 7:
			if (!unk_0x4FAFF4BCB7633475(iLocal_54))
			{
				if (unk_0xFAA48325A90263BE(iLocal_54, unk_0x4A8C381C258A124D(), 20f, 20f, 20f, 0, 1, 0))
				{
					unk_0x4D306DD94DD6FDBA(iLocal_91[8], iLocal_54, unk_0x72F7E39FB49FC0BA(iLocal_54, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1, 0);
					unk_0x03AB73582A77DBD3(iLocal_54, unk_0xD59511AF30BE1934(unk_0x259BE71D8A81D4FA()));
					unk_0xBC14FFDBE1C32C51(iLocal_54, 1);
					unk_0x412B9F2CF0E60079(iLocal_54, 0);
					func_132();
					iLocal_47 = 4;
				}
			}
			break;
	}
}

void func_132()
{
	if (!func_47())
	{
		if (func_54() == 2)
		{
			Global_32402 = 1;
		}
	}
}

var func_133(struct<2> Param0, Vector3 vParam1, struct<2> Param2, Vector3 vParam3)
{
	return unk_0x97BC40FFA2FFCCD2((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

int func_134(char* sParam0)
{
	var uVar0;
	
	if (func_155())
	{
		MemCopy(&uVar0, {func_60()}, 4);
		if (unk_0x1B79E937E91F40C3(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_135()
{
	if (!iLocal_80)
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_54))
		{
			if (unk_0xFAA48325A90263BE(iLocal_54, unk_0x4A8C381C258A124D(), 12f, 12f, 5f, 0, 1, 0))
			{
				unk_0x974022927CB47E68(iLocal_54);
				unk_0xB5396F1FB088FE38(&uLocal_77);
				unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
				unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), 18000, 0, 2);
				unk_0x93C0674FC00824D0(uLocal_77);
				unk_0x4BD42B0527065BB6(iLocal_54, uLocal_77);
				unk_0xD0557B139A542F12(&uLocal_77);
				unk_0xE67051907958B5EB(unk_0x4A8C381C258A124D(), iLocal_54, 15000, 0, 2);
				iLocal_80 = 1;
			}
		}
	}
	if (!unk_0x4FAFF4BCB7633475(iLocal_54))
	{
		if (unk_0xFAA48325A90263BE(iLocal_54, unk_0x4A8C381C258A124D(), 12f, 12f, 5f, 0, 1, 0))
		{
			if (!bLocal_97)
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					unk_0x974022927CB47E68(iLocal_54);
					unk_0xB5396F1FB088FE38(&uLocal_77);
					unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), -1, 0, 2);
					unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), -1);
					unk_0x93C0674FC00824D0(uLocal_77);
					unk_0x4BD42B0527065BB6(iLocal_54, uLocal_77);
					unk_0xD0557B139A542F12(&uLocal_77);
					bLocal_97 = true;
				}
				else
				{
					unk_0x974022927CB47E68(iLocal_54);
					unk_0xB5396F1FB088FE38(&uLocal_77);
					unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), -1, 0, 2);
					unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), -1);
					unk_0x93C0674FC00824D0(uLocal_77);
					unk_0x4BD42B0527065BB6(iLocal_54, uLocal_77);
					unk_0xD0557B139A542F12(&uLocal_77);
					bLocal_97 = true;
				}
			}
			if (bLocal_97)
			{
				if (bLocal_50)
				{
					func_58();
					wait(0);
					if (!unk_0x4FAFF4BCB7633475(iLocal_54))
					{
						if (!func_155())
						{
							if (unk_0x3644984C9D7B57EF(iLocal_54, unk_0x4A8C381C258A124D(), 90f))
							{
								if (func_154(&uLocal_114, "REDO2AU", "REDO2_LFT2", 4, 0, 0, 0))
								{
									settimera(0);
									iLocal_47 = 7;
								}
							}
						}
					}
				}
				else if (!func_155())
				{
					if (func_154(&uLocal_114, "REDO2AU", "REDO2_LFT", 4, 0, 0, 0))
					{
						settimera(0);
						iLocal_47 = 7;
					}
				}
			}
		}
	}
}

void func_136()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_54))
	{
		if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_54, 15f, 15f, 15f, 0, 1, 0))
		{
			if (func_137())
			{
				func_46(0);
				iLocal_72 = 0;
			}
		}
		else if (func_155() && !iLocal_72)
		{
			func_46(1);
			iLocal_72 = 1;
		}
	}
}

int func_137()
{
	if (Global_22736 == 1)
	{
		return 1;
	}
	return 0;
}

void func_138()
{
	switch (iLocal_60)
	{
		case 0:
			if (!unk_0x4FAFF4BCB7633475(iLocal_54) && !unk_0x4FAFF4BCB7633475(iLocal_53))
			{
				if (unk_0x7B780C491DEC834E(unk_0xD1A6A821F5AC81DB(iLocal_53, 1), 3f))
				{
					if (!func_155())
					{
						if (func_154(&uLocal_114, "REDO2AU", "REDO2_ARMA", 4, 0, 0, 0))
						{
							unk_0x10425721983AE158(iLocal_54, "random@domestic", "balcony_fight_male", 2f, -2f, -1, 0, 0.3f, 0, 0, 0);
							unk_0x10425721983AE158(iLocal_53, "random@domestic", "balcony_fight_female", 2f, -2f, -1, 0, 0.3f, 0, 0, 0);
							iLocal_60++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x4FAFF4BCB7633475(iLocal_53) && unk_0xFC8BFE4B41177C22(iLocal_91[8]))
			{
				unk_0x4D306DD94DD6FDBA(iLocal_91[8], iLocal_53, unk_0x72F7E39FB49FC0BA(iLocal_53, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1, 0);
				iLocal_60++;
			}
			break;
		
		case 2:
			if (!unk_0x4FAFF4BCB7633475(iLocal_53) && unk_0xFC8BFE4B41177C22(iLocal_91[8]))
			{
				if (unk_0x13CCB1AD131C1082(iLocal_53, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x82E64DE58A6B84A8(iLocal_53, "random@domestic", "balcony_fight_female") > 0.335f)
					{
						unk_0x837D67618BF89034(iLocal_91[8], 0, 1);
						unk_0xE592D924D5438108(iLocal_91[8], 1, 0f, 6f, 4f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_60++;
					}
				}
			}
			break;
		
		case 3:
			if (!iLocal_70 && unk_0xFC8BFE4B41177C22(iLocal_91[8]))
			{
				if (unk_0x14E25ED5E75102C8(iLocal_91[8]))
				{
					unk_0xBD618A73193F9982(-1, "CLOTHES_THROWN", iLocal_91[8], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_70 = 1;
				}
			}
			if (!func_155() || func_137())
			{
				func_154(&uLocal_114, "REDO2AU", "REDO2_ARFA", 4, 0, 0, 0);
				iLocal_70 = 0;
				iLocal_60++;
			}
			break;
		
		case 4:
			if (!unk_0x4FAFF4BCB7633475(iLocal_53) && unk_0xFC8BFE4B41177C22(iLocal_91[9]))
			{
				if (unk_0x13CCB1AD131C1082(iLocal_53, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x82E64DE58A6B84A8(iLocal_53, "random@domestic", "balcony_fight_female") > 0.473f)
					{
						unk_0x4D306DD94DD6FDBA(iLocal_91[9], iLocal_53, unk_0x72F7E39FB49FC0BA(iLocal_53, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1, 0);
						iLocal_60++;
					}
				}
			}
			break;
		
		case 5:
			if (!func_155() || func_137())
			{
				func_154(&uLocal_114, "REDO2AU", "REDO2_ARMB", 4, 0, 0, 0);
				iLocal_60++;
			}
			break;
		
		case 6:
			if (!unk_0x4FAFF4BCB7633475(iLocal_53) && unk_0xFC8BFE4B41177C22(iLocal_91[9]))
			{
				if (unk_0x13CCB1AD131C1082(iLocal_53, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x82E64DE58A6B84A8(iLocal_53, "random@domestic", "balcony_fight_female") > 0.55f)
					{
						unk_0x837D67618BF89034(iLocal_91[9], 0, 1);
						unk_0xE592D924D5438108(iLocal_91[9], 1, 1f, 2f, 3f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_60++;
					}
				}
			}
			break;
		
		case 7:
			if (!iLocal_70 && unk_0xFC8BFE4B41177C22(iLocal_91[9]))
			{
				if (unk_0x14E25ED5E75102C8(iLocal_91[9]))
				{
					unk_0xBD618A73193F9982(-1, "CLOTHES_THROWN", iLocal_91[9], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_70 = 1;
				}
			}
			if (!func_155() || func_137())
			{
				func_154(&uLocal_114, "REDO2AU", "REDO2_ARFB", 4, 0, 0, 0);
				iLocal_70 = 0;
				iLocal_60++;
			}
			break;
		
		case 8:
			if (!unk_0x4FAFF4BCB7633475(iLocal_53) && unk_0xFC8BFE4B41177C22(iLocal_91[10]))
			{
				if (unk_0x13CCB1AD131C1082(iLocal_53, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x82E64DE58A6B84A8(iLocal_53, "random@domestic", "balcony_fight_female") > 0.705f)
					{
						unk_0x4D306DD94DD6FDBA(iLocal_91[10], iLocal_53, unk_0x72F7E39FB49FC0BA(iLocal_53, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1, 0);
						iLocal_60++;
					}
				}
			}
			break;
		
		case 9:
			if (!unk_0x4FAFF4BCB7633475(iLocal_53) && unk_0xFC8BFE4B41177C22(iLocal_91[10]))
			{
				if (unk_0x13CCB1AD131C1082(iLocal_53, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x82E64DE58A6B84A8(iLocal_53, "random@domestic", "balcony_fight_female") > 0.838f)
					{
						unk_0x837D67618BF89034(iLocal_91[10], 0, 1);
						unk_0xE592D924D5438108(iLocal_91[10], 1, 1f, 3f, 3f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_60++;
					}
				}
			}
			break;
		
		case 10:
			if (!iLocal_70 && unk_0xFC8BFE4B41177C22(iLocal_91[10]))
			{
				if (unk_0x14E25ED5E75102C8(iLocal_91[10]))
				{
					unk_0xBD618A73193F9982(-1, "CLOTHES_THROWN", iLocal_91[10], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_70 = 1;
				}
			}
			if (!func_155() || func_137())
			{
				func_154(&uLocal_114, "REDO2AU", "REDO2_ARMC", 4, 0, 0, 0);
				iLocal_70 = 0;
				iLocal_60++;
			}
			break;
		
		case 11:
			if (!unk_0x4FAFF4BCB7633475(iLocal_53) && !unk_0x4FAFF4BCB7633475(iLocal_54))
			{
				if (unk_0x13CCB1AD131C1082(iLocal_53, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x82E64DE58A6B84A8(iLocal_53, "random@domestic", "balcony_fight_female") > 0.94f)
					{
						unk_0x0E95B96CFEFE7B61(iLocal_53, iLocal_54, 0);
					}
				}
			}
			if (!func_155() || func_137())
			{
				func_154(&uLocal_114, "REDO2AU", "REDO2_ARFC", 4, 0, 0, 0);
				iLocal_60 = 14;
			}
			break;
		
		case 14:
			if (!func_155())
			{
				if (func_154(&uLocal_114, "REDO2AU", "REDO2_ARFF", 4, 0, 0, 0))
				{
					func_139();
					iLocal_60++;
				}
			}
			break;
		
		case 15:
			if (!func_155())
			{
				if (func_154(&uLocal_114, "REDO2AU", "REDO2_ARMI", 4, 0, 0, 0))
				{
					iLocal_60++;
				}
			}
			break;
		
		case 16:
			if (!unk_0x4FAFF4BCB7633475(iLocal_54))
			{
				unk_0xB5396F1FB088FE38(&uLocal_77);
				unk_0x84B06A81C98DA4B8(0);
				unk_0xCD76801E1106CABE(0, Local_87, 0);
				unk_0x93C0674FC00824D0(uLocal_77);
				unk_0x4BD42B0527065BB6(iLocal_54, uLocal_77);
				unk_0xD0557B139A542F12(&uLocal_77);
				iLocal_60++;
			}
			break;
		
		case 17:
			if (unk_0xFC8BFE4B41177C22(iLocal_53))
			{
				if (!unk_0x1C2F771CDC87A3A5(iLocal_53, 0))
				{
					if (unk_0x65FFA94B82A71741(iLocal_53, Local_87, 1f, 1f, 5f, 0, 1, 0) && unk_0xF6C26AE940C14749(iLocal_53))
					{
						unk_0x734A9F4537A31459(&iLocal_53);
					}
				}
			}
			if (iLocal_75 < unk_0x1DD05E817C89C737())
			{
				if (!func_155())
				{
					if (func_154(&uLocal_114, "REDO2AU", "REDO2_INS1", 4, 0, 0, 0))
					{
						iLocal_75 = unk_0x1DD05E817C89C737() + 5000;
						iLocal_76++;
					}
				}
			}
			if (iLocal_76 > 0)
			{
				iLocal_60++;
			}
			break;
		
		case 18:
			if (!unk_0x4FAFF4BCB7633475(iLocal_54))
			{
				if (!func_155())
				{
					if (func_154(&uLocal_114, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
					{
						unk_0x761F56E633460973(iLocal_54, 1193033728, 0);
						iLocal_60++;
					}
				}
			}
			break;
	}
	if (!bLocal_50)
	{
		if (iLocal_60 > 2 && iLocal_60 < 8)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_54))
			{
				if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_54, 6f, 4f, 5f, 0, 1, 0) || (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_54, 12f, 12f, 5f, 0, 1, 2) && unk_0x692665178199313C(unk_0x259BE71D8A81D4FA())))
				{
					unk_0x974022927CB47E68(iLocal_54);
					func_139();
					if (iLocal_60 > 18)
					{
						iLocal_47 = 3;
					}
					else
					{
						func_58();
						while (func_155())
						{
							wait(0);
						}
						if (func_154(&uLocal_114, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							bLocal_50 = true;
							iLocal_47 = 3;
						}
					}
				}
			}
		}
		else if (iLocal_60 > 7)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_54))
			{
				if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_54, 6f, 8f, 5f, 0, 1, 0))
				{
					if (unk_0xC450B06E5AAA0985(uLocal_84[0]))
					{
						unk_0x89FE619BFBB2024B(uLocal_84[0], 1);
					}
					unk_0x974022927CB47E68(iLocal_54);
					func_139();
					if (iLocal_60 > 18)
					{
						iLocal_47 = 3;
					}
					else
					{
						func_55();
						while (func_155())
						{
							wait(0);
						}
						if (func_154(&uLocal_114, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							bLocal_50 = true;
							iLocal_47 = 3;
						}
					}
				}
			}
		}
	}
	if (bLocal_52)
	{
		if (iLocal_51 < unk_0x1DD05E817C89C737())
		{
			func_58();
			if (unk_0xFC8BFE4B41177C22(iLocal_53))
			{
				func_139();
			}
			iLocal_47 = 3;
		}
	}
}

void func_139()
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iLocal_53))
	{
		unk_0xB5396F1FB088FE38(&uLocal_77);
		unk_0x63C8DCBEC1CF8225(0, Local_87, 1f, -1, 1193033728, 1056964608);
		unk_0x10425721983AE158(0, "random@domestic", "f_attack_end", 2f, -2f, -1, 1, 0, 0, 0, 0);
		unk_0x93C0674FC00824D0(uLocal_77);
		unk_0x4BD42B0527065BB6(iLocal_53, uLocal_77);
		unk_0xD0557B139A542F12(&uLocal_77);
		unk_0x44FB298D6382876D(iLocal_53, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_91)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_91[iVar0]))
			{
				unk_0x837D67618BF89034(iLocal_91[iVar0], 1, 1);
			}
			iVar0++;
		}
	}
}

int func_140(int iParam0)
{
	if (func_143())
	{
		Global_113638 = 1;
		Global_113635 = unk_0x1DD05E817C89C737();
		if (func_25(Global_113637))
		{
			func_141(0);
		}
		unk_0xB51A8DA1DD0D2E4E(1, "RE_TITLE");
		if (iParam0 && func_25(Global_113637))
		{
			unk_0x2716F9D3A99349AB();
		}
		return 1;
	}
	return 0;
}

void func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113648.f_24997.f_2 < 3)
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_113(func_142(iParam0), -1);
					Global_113648.f_24997.f_2++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113644, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113644, 1))
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_113(func_142(iParam0), -1);
					Global_113648.f_24997.f_3++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113644, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113644, 2))
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_113(func_142(iParam0), -1);
					Global_113648.f_24997.f_4++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113644, 2);
				}
			}
			break;
	}
}

char* func_142(int iParam0)
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

int func_143()
{
	switch (func_144(&Global_32223, 0, 5, 0, unk_0x8F76B2250AC806FA()))
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

int func_144(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_148(0))
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
		if (!func_146(iParam2))
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
			func_145(uParam0, iParam4);
		}
	}
	return 2;
}

void func_145(var uParam0, int iParam1)
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

bool func_146(int iParam0)
{
	return func_147(iParam0, Global_43257);
}

int func_147(int iParam0, int iParam1)
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

int func_148(int iParam0)
{
	if (Global_43257 == 15)
	{
		return 0;
	}
	if (func_146(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_149()
{
	if (unk_0xC450B06E5AAA0985(uLocal_85))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_85);
	}
	if (!unk_0xC450B06E5AAA0985(uLocal_84[0]))
	{
		uLocal_84[0] = func_123(iLocal_54, 0, 145);
		unk_0x89FE619BFBB2024B(uLocal_84[0], 0);
	}
}

void func_150()
{
	func_4(39, 1);
	func_4(40, 1);
	func_4(41, 1);
	func_4(42, 1);
	func_4(43, 1);
	func_4(44, 1);
	unk_0x2094BC4B6731BA68(Local_57, 2f, 1, 0, 0, 0);
	unk_0x2094BC4B6731BA68(Local_56, 2f, 1, 0, 0, 0);
	unk_0xA63572E348CC4CFB(Local_57 - Vector(10f, 10f, 10f), Local_57 + Vector(10f, 10f, 10f), 0, 1);
	unk_0x5E08BBBF87BC4886(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 0, 0, 1);
	unk_0xA7B0B03284E7503C(Local_57 - Vector(10f, 10f, 10f), Local_57 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	unk_0xA7B0B03284E7503C(Local_88 - Vector(3f, 2f, 2f), Local_88 + Vector(3f, 2f, 2f), 0, 1, 1, 1);
	unk_0xA7B0B03284E7503C(Vector(53.1038f, 56.6649f, -1366.481f) - Vector(1f, 1f, 1f), Vector(53.1038f, 56.6649f, -1366.481f) + Vector(1f, 1f, 1f), 0, 1, 1, 1);
	unk_0x06CD913C241C765E("rghDomestic", &uLocal_111);
	unk_0xD414C47AFF81382A(5, uLocal_111, joaat("player"));
	iLocal_53 = unk_0xB1DBFEB95C0EFB88(26, iLocal_78, Local_56, fLocal_58, 1, 1);
	unk_0xAAA71DD7E9059338(iLocal_53, 1);
	unk_0xBE8796DB2B90A437(iLocal_53, 17, 1);
	unk_0xBE8796DB2B90A437(iLocal_53, 8, 0);
	unk_0x1CA08719184AFC6F(iLocal_53, 1, 0);
	unk_0x1CA08719184AFC6F(iLocal_53, 2, 0);
	unk_0x1CA08719184AFC6F(iLocal_53, 128, 1);
	unk_0x1CA08719184AFC6F(iLocal_53, 8, 0);
	unk_0x10425721983AE158(iLocal_53, "random@domestic", "balcony_fight_idle_female", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0x3CEA1FD137ACE2D9(iLocal_53, uLocal_111);
	func_153(iLocal_53, "GENERIC_WHATEVER", 24);
	unk_0x55098D9E9AD58806(iLocal_78);
	unk_0x0428AFDCAA63B06E(iLocal_53, 185, 1);
	iLocal_54 = unk_0xB1DBFEB95C0EFB88(26, iLocal_79, Local_57, fLocal_59, 1, 1);
	unk_0xAAA71DD7E9059338(iLocal_54, 1);
	unk_0x1CA08719184AFC6F(iLocal_54, 1, 1);
	unk_0x1CA08719184AFC6F(iLocal_54, 2, 0);
	unk_0x1CA08719184AFC6F(iLocal_54, 128, 1);
	unk_0x1CA08719184AFC6F(iLocal_54, 8, 0);
	unk_0x1CA08719184AFC6F(iLocal_54, 65536, 1);
	unk_0x0428AFDCAA63B06E(iLocal_54, 185, 1);
	unk_0x0428AFDCAA63B06E(iLocal_54, 206, 1);
	unk_0xECF7FE1783A38672(iLocal_54, 0);
	unk_0x3F58BFCF656F0DF1(iLocal_54, 0);
	unk_0x10425721983AE158(iLocal_54, "random@domestic", "balcony_fight_idle_male", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0x3CEA1FD137ACE2D9(iLocal_54, uLocal_111);
	func_153(iLocal_54, "GENERIC_WHATEVER", 24);
	unk_0x55098D9E9AD58806(iLocal_79);
	unk_0xE67051907958B5EB(iLocal_54, iLocal_53, -1, 0, 2);
	unk_0xE67051907958B5EB(iLocal_53, iLocal_54, -1, 0, 2);
	unk_0xD1C578C204015E1F(iLocal_53, 0, 1, 0, 0);
	unk_0xD1C578C204015E1F(iLocal_53, 2, 1, 1, 0);
	unk_0xD1C578C204015E1F(iLocal_53, 3, 1, 1, 0);
	unk_0xD1C578C204015E1F(iLocal_53, 4, 1, 2, 0);
	unk_0xD1C578C204015E1F(iLocal_54, 0, 0, 0, 0);
	unk_0xD1C578C204015E1F(iLocal_54, 2, 1, 0, 0);
	unk_0xD1C578C204015E1F(iLocal_54, 3, 1, 2, 0);
	unk_0xD1C578C204015E1F(iLocal_54, 4, 1, 1, 0);
	unk_0xD1C578C204015E1F(iLocal_54, 8, 0, 0, 0);
	func_152();
	unk_0x0B0C9A0F9AAEB7F0(&uLocal_93, 5);
	if (func_54() == 0)
	{
		func_151(&uLocal_114, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
	}
	if (func_54() == 1)
	{
		func_151(&uLocal_114, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
	}
	if (func_54() == 2)
	{
		func_151(&uLocal_114, 2, unk_0x4A8C381C258A124D(), "TREVOR", 0, 1);
	}
	func_151(&uLocal_114, 3, iLocal_54, "REDOCastro", 0, 1);
	unk_0x397CF4F4C8B17365(iLocal_54, sLocal_112);
	func_151(&uLocal_114, 4, iLocal_53, "NATHALIA", 0, 1);
	unk_0x397CF4F4C8B17365(iLocal_53, sLocal_113);
	settimera(0);
	iLocal_109 = 1;
}

void func_151(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_152()
{
	iLocal_91[0] = unk_0x4E55EAB577C13329(joaat("prop_ld_tshirt_02"), -470.3661f, 541.385f, 120.0205f, 1, 1, 0);
	unk_0xCF39804E8C88080E(iLocal_91[0], -13.7262f, 0.5001f, -0.5886f, 2, 1);
	unk_0x5D7CD709B34C90F0(iLocal_91[0], 1);
	unk_0x55098D9E9AD58806(joaat("prop_ld_tshirt_02"));
	iLocal_91[1] = unk_0x4E55EAB577C13329(joaat("prop_ld_jeans_02"), -470.8998f, 540.7595f, 120.169f, 1, 1, 0);
	unk_0xCF39804E8C88080E(iLocal_91[1], -7.3906f, -12.8136f, -63.733f, 2, 1);
	unk_0x5D7CD709B34C90F0(iLocal_91[1], 1);
	unk_0x55098D9E9AD58806(joaat("prop_ld_jeans_02"));
	iLocal_91[2] = unk_0x4E55EAB577C13329(joaat("prop_ld_shoe_01"), -468.3266f, 540.7725f, 120.1762f, 1, 1, 0);
	unk_0xCF39804E8C88080E(iLocal_91[2], -7.041683f, 10.17298f, 45.7617f, 2, 1);
	unk_0x5D7CD709B34C90F0(iLocal_91[2], 1);
	unk_0x55098D9E9AD58806(joaat("prop_ld_shoe_01"));
	iLocal_91[3] = unk_0x4E55EAB577C13329(joaat("prop_ld_jeans_01"), -468.7787f, 541.864f, 119.9098f, 1, 1, 0);
	unk_0xCF39804E8C88080E(iLocal_91[3], -8.5884f, 12.6893f, 57.1792f, 2, 1);
	unk_0x5D7CD709B34C90F0(iLocal_91[3], 1);
	unk_0x55098D9E9AD58806(joaat("prop_ld_jeans_01"));
	iLocal_91[4] = unk_0x4E55EAB577C13329(joaat("prop_ld_shoe_02"), -470.9009f, 541.2538f, 120.0578f, 1, 1, 0);
	unk_0xCF39804E8C88080E(iLocal_91[4], -16.4886f, 2.4979f, -3.8769f, 2, 1);
	unk_0x5D7CD709B34C90F0(iLocal_91[4], 1);
	unk_0x55098D9E9AD58806(joaat("prop_ld_shoe_02"));
	iLocal_91[5] = unk_0x4E55EAB577C13329(joaat("prop_ld_shirt_01"), -472.0366f, 542.0591f, 119.8243f, 1, 1, 0);
	unk_0xCF39804E8C88080E(iLocal_91[5], -3.5946f, -15.0978f, -75.5026f, 2, 1);
	unk_0x5D7CD709B34C90F0(iLocal_91[5], 1);
	unk_0x55098D9E9AD58806(joaat("prop_ld_shirt_01"));
	iLocal_91[6] = unk_0x4E55EAB577C13329(joaat("prop_porn_mag_03"), -472.7543f, 542.3022f, 119.7628f, 1, 1, 0);
	unk_0xCF39804E8C88080E(iLocal_91[6], 6.402527f, -15.68665f, -104.1308f, 2, 1);
	unk_0x5D7CD709B34C90F0(iLocal_91[6], 1);
	unk_0x55098D9E9AD58806(joaat("prop_porn_mag_03"));
	iLocal_91[7] = unk_0x4E55EAB577C13329(joaat("prop_porn_mag_01"), -471.8675f, 543.6655f, 119.4991f, 1, 1, 0);
	unk_0xCF39804E8C88080E(iLocal_91[7], -8.3642f, 1.9344f, 2.6889f, 2, 1);
	unk_0x5D7CD709B34C90F0(iLocal_91[7], 1);
	unk_0x55098D9E9AD58806(joaat("prop_porn_mag_01"));
	iLocal_91[8] = unk_0x4E55EAB577C13329(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
	iLocal_91[9] = unk_0x4E55EAB577C13329(joaat("prop_cs_rub_binbag_01"), -473.195f, 537.2585f, 123.3303f, 1, 1, 0);
	unk_0x55098D9E9AD58806(joaat("prop_cs_rub_binbag_01"));
	iLocal_91[10] = unk_0x4E55EAB577C13329(joaat("prop_golf_bag_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
	unk_0x55098D9E9AD58806(joaat("prop_golf_bag_01"));
}

void func_153(var uParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(uParam0, sParam1, func_50(iParam2), 1);
}

bool func_154(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_79(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_65(sParam2, iParam3, 0);
}

int func_155()
{
	if (Global_21725 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_156()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_54) && !unk_0x4FAFF4BCB7633475(iLocal_53))
	{
		if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
		{
			if (unk_0x7E54CB377175F94E(iLocal_54, unk_0x4A8C381C258A124D()) || unk_0x7E54CB377175F94E(iLocal_53, unk_0x4A8C381C258A124D()))
			{
				if (((unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iLocal_54) || unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iLocal_54)) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iLocal_53)) || unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iLocal_53))
				{
					if (iLocal_94 == -1)
					{
						iLocal_94 = unk_0x1DD05E817C89C737();
					}
				}
				else
				{
					iLocal_94 = -1;
				}
			}
			if ((iLocal_94 != -1 && unk_0x1DD05E817C89C737() > iLocal_94 + 500) || unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
			{
				func_163();
			}
		}
	}
	if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
	{
		func_163();
	}
	if (iLocal_47 == 1)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_54))
		{
			if (func_162(iLocal_54))
			{
				func_161();
			}
		}
	}
	if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), -471.1757f, 535.356f, 124.8557f, 3f, 2.5f, 1.5f, 0, 1, 0))
	{
		func_160();
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_53))
	{
		if (func_159(iLocal_53))
		{
			func_157();
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_54))
	{
		if (func_159(iLocal_54) || unk_0x9B3D4335E0EDB0BE(iLocal_54, unk_0x4A8C381C258A124D(), 1))
		{
			func_157();
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_53))
	{
		if (func_159(iLocal_53) || unk_0x9B3D4335E0EDB0BE(iLocal_53, unk_0x4A8C381C258A124D(), 1))
		{
			func_157();
		}
	}
	if (!unk_0x4FAFF4BCB7633475(iLocal_54))
	{
		if (!unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_54, 250f, 250f, 250f, 0, 1, 0) || unk_0x69799E0840A34AFB(iLocal_54))
		{
			iLocal_47 = 11;
		}
	}
	if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
	{
		func_157();
	}
}

void func_157()
{
	func_55();
	wait(0);
	if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
	{
		func_154(&uLocal_114, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
	}
	else
	{
		func_154(&uLocal_114, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	}
	if (!unk_0x4FAFF4BCB7633475(iLocal_54))
	{
		unk_0x974022927CB47E68(iLocal_54);
		unk_0xB5396F1FB088FE38(&uLocal_77);
		unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 250f, -1, 0, 0);
		unk_0x93C0674FC00824D0(uLocal_77);
		unk_0x4BD42B0527065BB6(iLocal_54, uLocal_77);
		unk_0xD0557B139A542F12(&uLocal_77);
		unk_0x44FB298D6382876D(iLocal_54, 1);
		wait(3000);
	}
	func_158();
	wait(0);
	func_51();
	iLocal_47 = 11;
}

void func_158()
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iLocal_53))
	{
		unk_0xAFC7A89C990C4339(iLocal_53, -1);
		unk_0x44FB298D6382876D(iLocal_53, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_91)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_91[iVar0]))
			{
				unk_0x837D67618BF89034(iLocal_91[iVar0], 1, 1);
			}
			iVar0++;
		}
	}
}

int func_159(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iParam0, unk_0x4A8C381C258A124D(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_160()
{
	func_158();
	func_55();
	wait(0);
	func_154(&uLocal_114, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!unk_0x4FAFF4BCB7633475(iLocal_54))
	{
		unk_0x974022927CB47E68(iLocal_54);
		unk_0xB5396F1FB088FE38(&uLocal_77);
		unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 250f, -1, 0, 0);
		unk_0x93C0674FC00824D0(uLocal_77);
		unk_0x4BD42B0527065BB6(iLocal_54, uLocal_77);
		unk_0xD0557B139A542F12(&uLocal_77);
		unk_0x44FB298D6382876D(iLocal_54, 1);
		wait(3000);
	}
	func_51();
	iLocal_47 = 11;
}

void func_161()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_54))
	{
		unk_0x974022927CB47E68(iLocal_54);
		unk_0xFD251F92B546F389(iLocal_54, unk_0xD1A6A821F5AC81DB(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 1), 150f, -1, 0, 0);
		unk_0x44FB298D6382876D(iLocal_54, 1);
	}
	iLocal_47 = 11;
}

int func_162(int iParam0)
{
	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		if (!unk_0x7F420695E3F776FB(iParam0, 0) && unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iParam0, 1.5f, 1.5f, 8f, 0, 1, 2))
		{
			if (unk_0xDF93B3CFAC96698F(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)) > 4f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_163()
{
	func_55();
	wait(0);
	func_154(&uLocal_114, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!unk_0x4FAFF4BCB7633475(iLocal_54))
	{
		unk_0xB5396F1FB088FE38(&uLocal_77);
		unk_0x092B9247AF00F5CF(0, 0, 4096);
		unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 250f, -1, 0, 0);
		unk_0x93C0674FC00824D0(uLocal_77);
		unk_0x4BD42B0527065BB6(iLocal_54, uLocal_77);
		unk_0xD0557B139A542F12(&uLocal_77);
		unk_0x44FB298D6382876D(iLocal_54, 1);
		wait(3000);
	}
	func_51();
	iLocal_47 = 11;
}

void func_164()
{
	unk_0xEC9DAA34BBB4658C(iLocal_78);
	unk_0xEC9DAA34BBB4658C(iLocal_79);
	unk_0xEC9DAA34BBB4658C(joaat("prop_golf_iron_01"));
	unk_0xEC9DAA34BBB4658C(joaat("prop_cs_rub_binbag_01"));
	unk_0xEC9DAA34BBB4658C(joaat("prop_golf_bag_01"));
	unk_0xEC9DAA34BBB4658C(joaat("prop_ld_tshirt_02"));
	unk_0xEC9DAA34BBB4658C(joaat("prop_ld_jeans_02"));
	unk_0xEC9DAA34BBB4658C(joaat("prop_ld_shoe_01"));
	unk_0xEC9DAA34BBB4658C(joaat("prop_ld_jeans_01"));
	unk_0xEC9DAA34BBB4658C(joaat("prop_ld_shoe_02"));
	unk_0xEC9DAA34BBB4658C(joaat("prop_ld_shirt_01"));
	unk_0xEC9DAA34BBB4658C(joaat("prop_porn_mag_03"));
	unk_0xEC9DAA34BBB4658C(joaat("prop_porn_mag_01"));
	unk_0x80813AC549A1E8AE("random@domestic");
	unk_0x80813AC549A1E8AE("random@security_van");
	if ((((((((((((((unk_0x6252BC0DD8A320DB(iLocal_78) && unk_0x6252BC0DD8A320DB(iLocal_79)) && unk_0x6252BC0DD8A320DB(joaat("prop_golf_iron_01"))) && unk_0x6252BC0DD8A320DB(joaat("prop_cs_rub_binbag_01"))) && unk_0x6252BC0DD8A320DB(joaat("prop_golf_bag_01"))) && unk_0x6252BC0DD8A320DB(joaat("prop_ld_tshirt_02"))) && unk_0x6252BC0DD8A320DB(joaat("prop_ld_jeans_02"))) && unk_0x6252BC0DD8A320DB(joaat("prop_ld_shoe_01"))) && unk_0x6252BC0DD8A320DB(joaat("prop_ld_jeans_01"))) && unk_0x6252BC0DD8A320DB(joaat("prop_ld_shoe_02"))) && unk_0x6252BC0DD8A320DB(joaat("prop_ld_shirt_01"))) && unk_0x6252BC0DD8A320DB(joaat("prop_porn_mag_03"))) && unk_0x6252BC0DD8A320DB(joaat("prop_porn_mag_01"))) && unk_0xE100DD4F82A51BDE("random@domestic")) && unk_0xE100DD4F82A51BDE("random@security_van"))
	{
		bLocal_48 = true;
	}
	else
	{
		unk_0xEC9DAA34BBB4658C(iLocal_78);
		unk_0xEC9DAA34BBB4658C(iLocal_79);
		unk_0xEC9DAA34BBB4658C(joaat("prop_golf_iron_01"));
		unk_0xEC9DAA34BBB4658C(joaat("prop_cs_rub_binbag_01"));
		unk_0xEC9DAA34BBB4658C(joaat("prop_golf_bag_01"));
		unk_0xEC9DAA34BBB4658C(joaat("prop_ld_tshirt_02"));
		unk_0xEC9DAA34BBB4658C(joaat("prop_ld_jeans_02"));
		unk_0xEC9DAA34BBB4658C(joaat("prop_ld_shoe_01"));
		unk_0xEC9DAA34BBB4658C(joaat("prop_ld_jeans_01"));
		unk_0xEC9DAA34BBB4658C(joaat("prop_ld_shoe_02"));
		unk_0xEC9DAA34BBB4658C(joaat("prop_ld_shirt_01"));
		unk_0xEC9DAA34BBB4658C(joaat("prop_porn_mag_03"));
		unk_0xEC9DAA34BBB4658C(joaat("prop_porn_mag_01"));
		unk_0x80813AC549A1E8AE("random@domestic");
		unk_0x80813AC549A1E8AE("random@security_van");
	}
}

void func_165()
{
	Local_86 = { -470.4934f, 540.0073f, 120.3715f };
	iLocal_78 = joaat("a_f_y_business_02");
	iLocal_79 = joaat("a_m_y_golfer_01");
	sLocal_112 = "REDOCastro";
	sLocal_113 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
	Local_56 = { -472.6554f, 536.469f, 123.3555f };
	fLocal_58 = 348.9152f;
	Local_57 = { -470.1328f, 542.9949f, 119.6873f };
	fLocal_59 = 156.0666f;
	Local_87 = { -469.082f, 535.0479f, 123.3553f };
	Local_88 = { -1378.273f, 40.2254f, 52.6774f };
	Local_89 = { -1368.188f, 57.2309f, 52.7045f };
	bLocal_55 = true;
}

int func_166()
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_177())
		{
			return 0;
		}
	}
	if (func_173())
	{
		return 1;
	}
	if (func_167(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_167(float fParam0, bool bParam1)
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
		if (func_33(func_54()))
		{
			iVar5 = func_30();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113648.f_18576[iVar1 /*6*/], 2) && !BitTest(Global_113648.f_18576[iVar1 /*6*/], 3))
				{
					func_168(iVar1, &Var0);
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

void func_168(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_169(uParam1, "Abigail1", func_171(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 1:
			func_169(uParam1, "Abigail2", func_171(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 2:
			func_169(uParam1, "Barry1", func_171(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 3:
			func_169(uParam1, "Barry2", func_171(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
		
		case 4:
			func_169(uParam1, "Barry3", func_171(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 5:
			func_169(uParam1, "Barry3A", func_171(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 6:
			func_169(uParam1, "Barry3C", func_171(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 7:
			func_169(uParam1, "Barry4", func_171(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_170(iParam0), 0, 0);
			break;
		
		case 8:
			func_169(uParam1, "Dreyfuss1", func_171(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 9:
			func_169(uParam1, "Epsilon1", func_171(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 10:
			func_169(uParam1, "Epsilon2", func_171(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 11:
			func_169(uParam1, "Epsilon3", func_171(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 12:
			func_169(uParam1, "Epsilon4", func_171(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 13:
			func_169(uParam1, "Epsilon5", func_171(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 14:
			func_169(uParam1, "Epsilon6", func_171(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 15:
			func_169(uParam1, "Epsilon7", func_171(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 16:
			func_169(uParam1, "Epsilon8", func_171(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 17:
			func_169(uParam1, "Extreme1", func_171(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 18:
			func_169(uParam1, "Extreme2", func_171(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 19:
			func_169(uParam1, "Extreme3", func_171(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 20:
			func_169(uParam1, "Extreme4", func_171(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 21:
			func_169(uParam1, "Fanatic1", func_171(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_170(iParam0), 1, 0);
			break;
		
		case 22:
			func_169(uParam1, "Fanatic2", func_171(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_170(iParam0), 1, 0);
			break;
		
		case 23:
			func_169(uParam1, "Fanatic3", func_171(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_170(iParam0), 0, 1);
			break;
		
		case 24:
			func_169(uParam1, "Hao1", func_171(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_170(iParam0), 0, 1);
			break;
		
		case 25:
			func_169(uParam1, "Hunting1", func_171(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 26:
			func_169(uParam1, "Hunting2", func_171(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 27:
			func_169(uParam1, "Josh1", func_171(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 28:
			func_169(uParam1, "Josh2", func_171(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
		
		case 29:
			func_169(uParam1, "Josh3", func_171(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
		
		case 30:
			func_169(uParam1, "Josh4", func_171(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 31:
			func_169(uParam1, "Maude1", func_171(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 32:
			func_169(uParam1, "Minute1", func_171(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 33:
			func_169(uParam1, "Minute2", func_171(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 34:
			func_169(uParam1, "Minute3", func_171(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 35:
			func_169(uParam1, "MrsPhilips1", func_171(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 36:
			func_169(uParam1, "MrsPhilips2", func_171(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 37:
			func_169(uParam1, "Nigel1", func_171(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 38:
			func_169(uParam1, "Nigel1A", func_171(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
		
		case 39:
			func_169(uParam1, "Nigel1B", func_171(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_170(iParam0), 1, 1);
			break;
		
		case 40:
			func_169(uParam1, "Nigel1C", func_171(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_170(iParam0), 1, 1);
			break;
		
		case 41:
			func_169(uParam1, "Nigel1D", func_171(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_170(iParam0), 1, 1);
			break;
		
		case 42:
			func_169(uParam1, "Nigel2", func_171(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
		
		case 43:
			func_169(uParam1, "Nigel3", func_171(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
		
		case 44:
			func_169(uParam1, "Omega1", func_171(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 45:
			func_169(uParam1, "Omega2", func_171(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 46:
			func_169(uParam1, "Paparazzo1", func_171(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 47:
			func_169(uParam1, "Paparazzo2", func_171(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 48:
			func_169(uParam1, "Paparazzo3", func_171(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 49:
			func_169(uParam1, "Paparazzo3A", func_171(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 50:
			func_169(uParam1, "Paparazzo3B", func_171(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 51:
			func_169(uParam1, "Paparazzo4", func_171(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 52:
			func_169(uParam1, "Rampage1", func_171(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 54:
			func_169(uParam1, "Rampage3", func_171(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 55:
			func_169(uParam1, "Rampage4", func_171(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 56:
			func_169(uParam1, "Rampage5", func_171(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
			break;
		
		case 53:
			func_169(uParam1, "Rampage2", func_171(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
		
		case 57:
			func_169(uParam1, "TheLastOne", func_171(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 58:
			func_169(uParam1, "Tonya1", func_171(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 59:
			func_169(uParam1, "Tonya2", func_171(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 60:
			func_169(uParam1, "Tonya3", func_171(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 61:
			func_169(uParam1, "Tonya4", func_171(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		case 62:
			func_169(uParam1, "Tonya5", func_171(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_169(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_170(int iParam0)
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

struct<2> func_171(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_172(iParam0) };
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

struct<2> func_172(int iParam0)
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

int func_173()
{
	if (func_176() && !func_177())
	{
		return 1;
	}
	if (func_175() && func_174())
	{
		return 1;
	}
	return 0;
}

bool func_174()
{
	return Global_113366 > 0;
}

int func_175()
{
	if (Global_97603 != -1)
	{
		return 1;
	}
	return 0;
}

int func_176()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 20);
	}
	return 0;
}

int func_177()
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

int func_178()
{
	if (!func_146(5))
	{
		return 1;
	}
	if (func_173())
	{
		return 1;
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_177())
		{
			return 0;
		}
	}
	if (func_167(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_179()
{
	if ((Global_113637 == func_40() && unk_0x9FA91AA1AC724CD0()) && Global_113638)
	{
		return 1;
	}
	return 0;
}

void func_180(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_182(iParam0);
	unk_0x21EA3DC8C16770EF(0);
	unk_0x7EA65A7D5C6CBDB5(1);
	Global_113634 = 0;
	func_181();
}

void func_181()
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

void func_182(int iParam0)
{
	Global_113637 = iParam0;
}

int func_183(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_40();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_224())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			if (vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_177())
			{
				return 0;
			}
		}
		if (!Global_113648.f_9087)
		{
			return 0;
		}
		if (func_17(0))
		{
			return 0;
		}
		if (func_173())
		{
			return 0;
		}
		if (func_223())
		{
			return 0;
		}
		if (Global_113637 != -1)
		{
			return 0;
		}
		if (func_33(func_54()))
		{
			if (func_167(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !bParam4)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_222(iParam1))
		{
			return 0;
		}
		if (func_33(func_54()))
		{
			if (func_221(func_54()) == 4 || func_221(func_54()) == 5)
			{
				return 0;
			}
		}
		if (func_33(func_54()))
		{
			if (!func_220(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_219(Global_113648.f_24997.f_43[iParam1]))
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
		if (func_218())
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
		if (!func_209(4))
		{
			return 0;
		}
		if (!func_146(5))
		{
			return 0;
		}
		if (func_208(iParam1, bParam2) && !bParam3)
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
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_208(0, 0))
		{
			return 0;
		}
		if (Global_32310)
		{
			return 0;
		}
		if (func_222(30) && !func_208(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_33(func_54()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113648.f_2365.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113648.f_2365.f_539.f_2296[iVar2];
				if (func_207(iVar4))
				{
					if (func_185(iVar2))
					{
						if (!func_184(Var3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Var3) < (210f * 210f))
							{
								if (func_54() != iVar2)
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

bool func_184(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_185(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113648.f_2365.f_539.f_2296[iParam0];
	return func_186(iVar0);
}

int func_186(int iParam0)
{
	return func_187(iParam0, 1);
}

int func_187(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_207(iParam0))
	{
		return 0;
	}
	func_188(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_188(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_189(func_200(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_189(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_199(iParam0, iParam1))
	{
		iVar0 = func_198(iParam1);
		iVar1 = func_196(iParam0);
		iVar2 = (func_196(iParam0) - func_196(iParam1));
		iVar3 = (func_198(iParam0) - func_198(iParam1));
		iVar4 = (func_195(iParam0) - func_195(iParam1));
		iVar5 = (func_194(iParam0) - func_194(iParam1));
		iVar6 = (func_193(iParam0) - func_193(iParam1));
		iVar7 = (func_192(iParam0) - func_192(iParam1));
	}
	else
	{
		iVar0 = func_198(iParam0);
		iVar1 = func_196(iParam1);
		iVar2 = (func_196(iParam1) - func_196(iParam0));
		iVar3 = (func_198(iParam1) - func_198(iParam0));
		iVar4 = (func_195(iParam1) - func_195(iParam0));
		iVar5 = (func_194(iParam1) - func_194(iParam0));
		iVar6 = (func_193(iParam1) - func_193(iParam0));
		iVar7 = (func_192(iParam1) - func_192(iParam0));
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
		iVar4 = (iVar4 + func_191(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_190(to_float(iVar0 + 1), 0f, 12f));
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

float func_190(float fParam0, float fParam1, float fParam2)
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

int func_191(int iParam0, int iParam1)
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

int func_192(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_193(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_194(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_195(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_196(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_197(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_197(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_198(int iParam0)
{
	return iParam0 & 15;
}

int func_199(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_207(iParam1) || !func_207(iParam0))
	{
		return 1;
	}
	iVar0 = func_196(iParam0);
	iVar1 = func_196(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_195(iParam0);
	iVar1 = func_195(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_194(iParam0);
	iVar1 = func_194(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_193(iParam0);
	iVar1 = func_193(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_192(iParam0);
	iVar1 = func_192(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_200()
{
	var uVar0;
	
	func_206(&uVar0, unk_0x4BA5A16068183C5E());
	func_205(&uVar0, unk_0x18E502A71E28968C());
	func_204(&uVar0, unk_0x5295501D0862870D());
	func_203(&uVar0, unk_0xB12880C92EA6EE15());
	func_202(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_201(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_201(var uParam0, int iParam1)
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

void func_202(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_203(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_198(*uParam0);
	iVar1 = func_196(*uParam0);
	if (iParam1 < 1 || iParam1 > func_191(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_204(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_205(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_206(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_207(int iParam0)
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
	iVar0 = func_192(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_193(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_194(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_196(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_198(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_195(iParam0);
	if (iVar5 < 1 || iVar5 > func_191(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_208(int iParam0, bool bParam1)
{
	if (BitTest(Global_113648.f_24997.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_209(int iParam0)
{
	int iVar0;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				iVar0 = func_54();
				if (!func_33(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_217()) || Global_112695) || Global_32166) || func_216()) || func_77(8, -1)) || func_215()) || func_214()) || func_213()) || func_212()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_217()) || Global_32166) || func_216()) || func_77(8, -1)) || func_213()) || func_215()) || func_214()) || func_212()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_217()) || Global_112695) || Global_32166) || func_216()) || func_77(8, -1)) || func_213()) || func_215()) || func_214()) || func_212()) || Global_113648.f_7690.f_919[iVar0] == 5) || Global_43804 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_217()) || Global_112695) || Global_32166) || func_216()) || func_77(8, -1)) || func_215()) || func_214()) || func_212()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_217() || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || func_77(8, -1)) || func_212()) || func_211()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_77(8, -1) || func_215()) || func_214()) || func_211()) || func_210())
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
							if ((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_217()) || Global_32166) || func_216()) || func_77(8, -1)) || func_214()) || func_213()) || func_212()) || Global_113648.f_7690.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || func_217()) || func_214()) || Global_112695) || Global_32166) || func_216()) || Global_44446) || func_77(8, -1)) || func_213()) || func_211()) || func_212()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1)) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_217()) || Global_112695) || Global_32166) || func_216()) || func_77(8, -1)) || func_213()) || func_211()) || func_215()) || func_214()) || func_212())
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

var func_210()
{
	return Global_100720.f_1;
}

int func_211()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 13);
	}
	return 0;
}

int func_212()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_213()
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

bool func_214()
{
	return Global_100733.f_388 > 0;
}

bool func_215()
{
	return Global_100733.f_387 > 0;
}

var func_216()
{
	return Global_1575060;
}

int func_217()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98159.f_44 == 1;
	}
	return 0;
}

int func_218()
{
	func_75();
	if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_219(int iParam0)
{
	return func_199(func_200(), iParam0);
}

int func_220(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_54();
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

int func_221(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_113648.f_7690.f_919[iParam0];
}

int func_222(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_224())
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

int func_223()
{
	var uVar0;
	
	if (Global_32315)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0xD9F5E1FEFD1329E4(uVar0, 0))
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

int func_224()
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
					unk_0x0B0C9A0F9AAEB7F0(&iVar0, 0);
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

int func_225(int iParam0, int iParam1)
{
	if (Global_113648.f_10196[iParam0 /*12*/].f_5 == 1)
	{
		if (iParam1 == 1)
		{
		}
		return 1;
	}
	return 0;
}

void func_226()
{
	int iVar0;
	
	if (iLocal_109 && !iLocal_108)
	{
		func_3(0);
		if (Global_32406)
		{
			unk_0x86A2BC11844DEEB3("AC_STOP");
		}
		func_2();
		unk_0xA63572E348CC4CFB(Local_57 - Vector(10f, 10f, 10f), Local_57 + Vector(10f, 10f, 10f), 1, 1);
		unk_0xD414C47AFF81382A(255, uLocal_111, joaat("player"));
		if (bLocal_55)
		{
			unk_0x55098D9E9AD58806(iLocal_78);
			unk_0x55098D9E9AD58806(iLocal_79);
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_53))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_53))
			{
				unk_0x0428AFDCAA63B06E(iLocal_53, 317, 1);
				unk_0xAAA71DD7E9059338(iLocal_53, 0);
			}
			unk_0xF09E30AF1B8FB379(&iLocal_53);
		}
		if (unk_0xC450B06E5AAA0985(uLocal_85))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_85);
		}
		if (unk_0xC450B06E5AAA0985(uLocal_84[0]))
		{
			unk_0xFE54B8568B2ABD12(&(uLocal_84[0]));
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_54))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_54))
			{
				unk_0x0428AFDCAA63B06E(iLocal_54, 317, 1);
				if (!unk_0x7F420695E3F776FB(iLocal_54, 0))
				{
					unk_0x61BB4B7411E1DF82(iLocal_54);
				}
				unk_0x5C4B3034CCDA5270(iLocal_54);
				unk_0xAAA71DD7E9059338(iLocal_54, 0);
				unk_0x3F58BFCF656F0DF1(iLocal_54, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_91)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_91[iVar0]))
			{
				unk_0x837D67618BF89034(iLocal_91[iVar0], 1, 1);
			}
			iVar0++;
		}
		unk_0x2AF2D6F164BD6F5A(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		unk_0x830C51B62E7CD5B2();
	}
	func_227(-1);
	unk_0xBBC29EBE6E1A48FA();
}

void func_227(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_179())
	{
		func_231(iParam0);
		unk_0xB51A8DA1DD0D2E4E(0, 0);
		Global_113639 = unk_0x1DD05E817C89C737();
		func_230(30000);
		StringCopy(&cVar0, func_229(Global_113637, 1), 64);
		if (func_39(Global_113637) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113636, 64);
		}
		unk_0x3AF124228E3EAF07(&cVar0, Global_113634, (unk_0x1DD05E817C89C737() - Global_113635), 0);
	}
	else if (BitTest(Global_113644, 0) && Global_113648.f_24997.f_2 < 3)
	{
		unk_0x8744D2E3FC95740E(&Global_113644, false);
	}
	func_228(&Global_32223);
	Global_113638 = 0;
	func_182(-1);
}

void func_228(var uParam0)
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

char* func_229(int iParam0, bool bParam1)
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

void func_230(int iParam0)
{
	Global_43808 = (unk_0x1DD05E817C89C737() + iParam0);
}

void func_231(int iParam0)
{
	func_232(iParam0, 0, func_237(iParam0));
}

void func_232(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_200();
	func_235(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_234(iParam0, &uVar0);
	Var1 = { func_233(&uVar0) };
}

struct<16> func_233(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_194(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_193(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_192(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_195(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_198(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_196(*uParam0), 64);
	return Var0;
}

void func_234(int iParam0, var uParam1)
{
	Global_113648.f_24997.f_43[iParam0] = *uParam1;
}

void func_235(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_196(*uParam0);
	iVar1 = func_198(*uParam0);
	iVar2 = func_195(*uParam0);
	iVar3 = func_194(*uParam0);
	iVar4 = func_193(*uParam0);
	iVar5 = func_192(*uParam0);
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
	iVar6 = func_191(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_191(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_236(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_236(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_206(uParam0, iParam1);
	func_205(uParam0, iParam2);
	func_204(uParam0, iParam3);
	func_202(uParam0, iParam5);
	func_203(uParam0, iParam4);
	func_201(uParam0, iParam6);
}

int func_237(int iParam0)
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
