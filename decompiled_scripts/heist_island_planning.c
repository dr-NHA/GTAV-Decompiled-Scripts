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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
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
	var uLocal_95 = -1;
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
	struct<14> Local_111[6];
	struct<14> Local_112[8];
	struct<14> Local_113[4];
	struct<14> Local_114[5];
	struct<14> Local_115[6];
	struct<14> Local_116[6];
	struct<14> Local_117[4];
	struct<14> Local_118[10];
	struct<14> Local_119[4];
	struct<14> Local_120[6];
	struct<14> Local_121[3];
	struct<9> Local_122[8];
	struct<9> Local_123[6];
	struct<9> Local_124[8];
	struct<9> Local_125[2];
	struct<9> Local_126[4];
	struct<9> Local_127[2];
	struct<9> Local_128[6];
	struct<9> Local_129[6];
	struct<9> Local_130[4];
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	bool bLocal_139 = 0;
	int iLocal_140 = 0;
	bool bLocal_141 = 0;
	int iLocal_142 = 0;
	bool bLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	var uLocal_153 = 0;
	int iLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	struct<57> Local_161 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	struct<16> Local_171 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	struct<7> Local_176 = { 2, 0, 0, 2, 0, 0, -1 } ;
	var uLocal_177 = 16;
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
	var uLocal_279 = 0;
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
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	int iLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 17;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 17;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	int iLocal_392 = 0;
	var uLocal_393 = 0;
	float fLocal_394 = 0f;
	float fLocal_395 = 0f;
	float fLocal_396 = 0f;
	float fLocal_397 = 0f;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	float fLocal_407 = 0f;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	bLocal_143 = true;
	iLocal_392 = -1;
	fLocal_394 = 3f;
	fLocal_395 = 0f;
	fLocal_396 = 2f;
	fLocal_397 = 100f;
	fLocal_407 = 0.5f;
	StringCopy(&Local_171, unk_0x1AF90EB93E0012D6(), 64);
	Local_171 = { Local_171 };
	if (!func_994(&Global_1977693))
	{
		func_982(&Global_1977693);
	}
	while (true)
	{
		wait(0);
		func_981();
		func_976(&Global_1977693);
		switch (func_975())
		{
			case 0:
				if (func_464(&Global_1977693))
				{
					func_462();
					func_461(1);
				}
				break;
			
			case 1:
				func_282(&Global_1977693);
				func_125(&Global_1977693);
				func_1(&Global_1977693);
				break;
			
			case 2:
				func_982(&Global_1977693);
				break;
		}
	}
}

void func_1(var uParam0)
{
	func_79(uParam0);
	func_60(uParam0);
	func_2(uParam0);
}

void func_2(var uParam0)
{
	func_24(uParam0);
	func_3(uParam0);
}

void func_3(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_1084 == unk_0x259BE71D8A81D4FA())
	{
		if (((uParam0->f_726.f_5 && !iLocal_133) && uParam0->f_806 == 1) && !func_16(uParam0, 0))
		{
			if (func_13(unk_0x259BE71D8A81D4FA()))
			{
				if (!func_12("HIP_TOOMANY2"))
				{
					func_11("HIP_TOOMANY2");
				}
			}
			else if (!func_12("HIP_TOOMANY1"))
			{
				func_11("HIP_TOOMANY1");
			}
		}
		else if (func_12("HIP_TOOMANY1") || func_12("HIP_TOOMANY2"))
		{
			unk_0x428C32CC68809A35(1);
		}
		if ((BitTest(Local_176.f_3[(0 / 32)], (0 % 32)) && !func_10()) && !iLocal_144)
		{
			func_9("HIP_TIPTEXT", -1);
			iLocal_144 = 1;
		}
		if ((func_8(uParam0->f_806, 2) && !BitTest(uParam0->f_1085, 11)) && !unk_0x834C960822A4683F())
		{
			uVar0 = func_7(9511, -1, 0);
			if (!BitTest(uVar0, 15))
			{
				func_9("HIF_FINALEINT", -1);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 15);
				func_4(9511, uVar0, -1, 1, 0);
			}
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1085), 11);
		}
	}
}

void func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805029[iParam0 /*3*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
	}
}

int func_5(var uParam0)
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

int func_6()
{
	return Global_1574918;
}

int func_7(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805029[iParam0 /*3*/][func_5(iParam1)];
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_8(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (iParam0 > 0 && iParam0 <= 29)
			{
				return 1;
			}
			break;
		
		case 1:
			if (iParam0 >= 36 && iParam0 <= 62)
			{
				return 1;
			}
			break;
		
		case 2:
			if (iParam0 >= 63 && iParam0 < 109)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_9(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_10()
{
	if (Global_21725 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_11(char* sParam0)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

bool func_12(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

bool func_13(int iParam0)
{
	return func_14(iParam0, 1);
}

int func_14(int iParam0, int iParam1)
{
	if (iParam0 != func_15())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_15())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 == iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_15()
{
	return -1;
}

int func_16(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_20() + 1 > 5)
		{
			return 0;
		}
	}
	else if (func_17(uParam0->f_1084, iParam1))
	{
		return 0;
	}
	return 1;
}

int func_17(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return func_18(iParam0, func_19(iParam1));
	}
	return 0;
}

int func_18(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_2, iParam1);
	}
	return 0;
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 7:
			return 1;
		
		case 1:
			return 2;
		
		case 5:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 5;
		
		case 4:
			return 6;
		
		case 6:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 13:
			return 12;
		
		case 14:
			return 13;
		
		case 15:
			return 14;
		
		case 16:
			return 15;
		
		default:
	}
	return -1;
}

int func_20()
{
	if (func_23() == func_15())
	{
		return 0;
	}
	return func_21(func_23());
}

int func_21(int iParam0)
{
	if (func_22(iParam0) == func_15())
	{
		return 0;
	}
	return Global_1894573[iParam0 /*608*/].f_10.f_19;
}

int func_22(int iParam0)
{
	if (iParam0 != func_15())
	{
		return Global_1894573[iParam0 /*608*/].f_10;
	}
	return func_15();
}

int func_23()
{
	return Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10;
}

void func_24(var uParam0)
{
	func_49();
	switch (iLocal_150)
	{
		case 0:
			break;
		
		case 1:
			unk_0x80813AC549A1E8AE(func_48());
			if (!unk_0xE100DD4F82A51BDE(func_48()))
			{
				return;
			}
			iLocal_151 = func_47();
			iLocal_150 = 2;
			break;
		
		case 2:
			unk_0xB5396F1FB088FE38(&uLocal_153);
			unk_0x63C8DCBEC1CF8225(0, func_46(iLocal_151), 0.5f, 20000, func_45(iLocal_151), 0.05f);
			unk_0x2280392018BC0DD3(0, func_45(iLocal_151), 0);
			unk_0x10425721983AE158(0, func_48(), func_44(), 1.5f, -8f, -1, 262152, 0, 0, 0, 0);
			unk_0x10425721983AE158(0, func_48(), func_43(), 8f, -8f, -1, 262153, 0, 0, 0, 0);
			unk_0x93C0674FC00824D0(uLocal_153);
			unk_0x4BD42B0527065BB6(iLocal_159, uLocal_153);
			iLocal_150 = 3;
			if (!func_42())
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1085), 10);
			}
			break;
		
		case 3:
			if (!unk_0x13CCB1AD131C1082(iLocal_159, func_48(), func_43(), 3) && !func_40(&uLocal_155, 6000, 0))
			{
				return;
			}
			if (unk_0x13CCB1AD131C1082(iLocal_159, func_48(), func_43(), 3))
			{
				unk_0x7ACB6964CC7261E4(iLocal_159, func_39(), func_48());
			}
			func_38(&uLocal_155);
			uParam0->f_726.f_5 = 1;
			func_34(uParam0, 14);
			iLocal_150 = 4;
			break;
		
		case 4:
			break;
		
		case 5:
			unk_0x10425721983AE158(iLocal_159, func_48(), func_25(), 8f, 1.5f, -1, 262152, 0, 0, 0, 0);
			if (func_42())
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_1085), 10);
			}
			uParam0->f_726.f_5 = 0;
			iLocal_150 = 6;
			break;
		
		case 6:
			if ((!iLocal_136 && unk_0x13CCB1AD131C1082(iLocal_159, func_48(), func_25(), 3)) && !func_40(&uLocal_155, 6000, 0))
			{
				return;
			}
			if (iLocal_136)
			{
				unk_0x974022927CB47E68(iLocal_159);
			}
			unk_0x268BE77F77533D03(func_48());
			unk_0xD0557B139A542F12(&uLocal_153);
			func_38(&uLocal_155);
			iLocal_150 = 0;
			iLocal_136 = 0;
			break;
	}
}

char* func_25()
{
	if (func_26(iLocal_159))
	{
		return "exit_heeled";
	}
	return "exit_male";
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(uParam0);
	iVar2 = -1;
	iVar3 = -1;
	if (iVar0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_32(iParam0, 6);
		if (iVar1 >= 256)
		{
			iVar2 = func_28(iVar0, iVar1, 6, 4);
			iVar3 = func_27(iVar2);
		}
		if (((((((((((((iVar1 >= 0 && iVar1 <= 15) || (iVar1 >= 96 && iVar1 <= 111)) || (iVar1 >= 112 && iVar1 <= 127)) || (iVar1 >= 128 && iVar1 <= 143)) || (iVar1 >= 192 && iVar1 <= 207)) || (iVar1 >= 224 && iVar1 <= 239)) || iVar3 == 0) || iVar3 == 6) || iVar3 == 7) || iVar3 == 8) || iVar3 == 12) || iVar3 == 14) || (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("high_heels"), 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0x304A39EB177D246B(iParam0, joaat("draw_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_28(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	int iVar4;
	int iVar5;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x7A491C9A90975007(&Var0);
		iVar1 = (iParam1 - func_31(iParam0));
		if (iVar1 < 0)
		{
			return -1;
		}
		iVar2 = unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 1, -1, -1);
		if (iVar2 <= iVar1)
		{
			return -1;
		}
		unk_0x2DBB2D25D50A5392(iVar1, &Var0);
		return Var0.f_1;
	}
	else
	{
		unk_0x15D20F88F06530A5(&Var3);
		iVar4 = (iParam1 - func_29(iParam0, func_30(iParam2)));
		if (iVar4 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_78491.f_26[iParam2] && iParam1 == Global_78491[iParam2]) && Global_78491.f_13[iParam2] != 0)
		{
			return Global_78491.f_13[iParam2];
		}
		iVar5 = unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 0, -1, func_30(iParam2));
		if (iVar5 <= iVar4)
		{
			return -1;
		}
		unk_0xD36906FE7BBBDB62(iVar4, &Var3);
		Global_78491.f_13[iParam2] = Var3.f_1;
		Global_78491[iParam2] = iParam1;
		Global_78491.f_26[iParam2] = iParam0;
		return Var3.f_1;
	}
	return -1;
}

int func_29(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_32(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x4FAFF4BCB7633475(uParam0))
	{
		return -99;
	}
	uVar0 = func_30(iParam1);
	iVar1 = unk_0xC0120BBCC298EA2F(uParam0, uVar0);
	iVar2 = unk_0xD6AED6BFCC58AF7F(uParam0, uVar0);
	return func_33(uParam0, iVar1, iVar2, iParam1);
}

int func_33(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	uVar0 = func_30(iParam3);
	iVar1 = unk_0x1A4EFE92822E3123(uParam0, uVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + unk_0x8401C77F508D70FD(uParam0, uVar0, iVar3));
		}
		else
		{
			iVar2 = (iVar2 + iParam2);
			return iVar2;
		}
		iVar3++;
	}
	return -99;
}

void func_34(var uParam0, int iParam1)
{
	char* sVar0;
	char* sVar1;
	
	sVar0 = func_37(iParam1);
	sVar1 = func_36(iParam1);
	if (!unk_0xD6F9DEE4765092A9(sVar0) && !unk_0xD6F9DEE4765092A9(sVar1))
	{
		if (!func_35(uParam0->f_732.f_6))
		{
			unk_0xF37CDE164C892195(-1, sVar0, uParam0->f_732.f_6, sVar1, 0, 0, 0);
		}
		else
		{
			unk_0xBF3D28CA44F3BE2D(-1, sVar0, sVar1, 1);
		}
	}
}

int func_35(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

char* func_36(int iParam0)
{
	return "DLC_HEI4_PLANNING_BOARD_PLANNING_BOARD_SOUNDSET";
}

char* func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NAV_UP_DOWN";
		
		case 1:
			return "NAV_LEFT_RIGHT";
		
		case 2:
			return "NAV_UP_DOWN_PHOTO_CHANGE";
		
		case 3:
			return "NAV_LEFT_RIGHT_PHOTO_CHANGE";
		
		case 4:
			return "NAV_BLOCKED";
		
		case 5:
			return "SELECT";
		
		case 6:
			return "BACK";
		
		case 7:
			return "ERROR";
		
		case 8:
			return "DRAW_BOARD";
		
		case 9:
			return "DRAW_DESCRIPTION_TEXT";
		
		case 10:
			return "DRAW_TITLE_TEXT";
		
		case 11:
			return "PAY";
		
		case 12:
			return "INCREASE_LOOT_SHARE";
		
		case 13:
			return "DECREASE_LOOT_SHARE";
		
		case 14:
			return "USE";
		
		case 15:
			return "LAUNCH_MISSION";
		
		case 16:
			return "REMOTE_READY";
		
		case 17:
			return "REMOTE_UNREADY";
		
		case 18:
			return "BOOTUP";
		
		case 19:
			return "BACKGROUND";
		
		case 20:
			return "FINALE_AVAILABLE";
		
		case 21:
			return "CHANGE_DISPLAY_LARGE_BOX_DRAW";
		
		case 22:
			return "CHANGE_DISPLAY_SMALL_BOX_DRAW";
		
		default:
	}
	return "";
}

void func_38(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_39()
{
	if (func_26(iLocal_159))
	{
		return "idle_heeled_facial";
	}
	return "idle_male_facial";
}

int func_40(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_41(uParam0, bParam2, 0);
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

void func_41(var uParam0, bool bParam1, bool bParam2)
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

bool func_42()
{
	return BitTest(Global_1977693.f_1085, 10);
}

char* func_43()
{
	if (func_26(iLocal_159))
	{
		return "idle_heeled";
	}
	return "idle_male";
}

char* func_44()
{
	if (func_26(iLocal_159))
	{
		return "enter_heeled";
	}
	return "enter_male";
}

float func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 180f;
		
		case 1:
			return 0f;
		
		default:
	}
	return 0f;
}

Vector3 func_46(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1561.054f, 385.9017f, -50.6854f;
		
		case 1:
			return 1561.096f, 383.769f, -50.6854f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_47()
{
	return 0;
}

char* func_48()
{
	if (func_26(iLocal_159))
	{
		return "anim@scripted@submarine@ig18_sub_screen@heeled@";
	}
	return "anim@scripted@submarine@ig18_sub_screen@male@";
}

void func_49()
{
	if (iLocal_150 == 0)
	{
		return;
	}
	if (func_59(0))
	{
		func_54(0);
	}
	if (func_53())
	{
		func_52();
	}
	if (unk_0x4D9174D8796EA622())
	{
		unk_0x6C978B200DAA54DE();
	}
	if (func_51())
	{
		func_50();
	}
}

void func_50()
{
	if (func_51())
	{
		Global_2672505.f_947.f_16 = 1;
	}
}

int func_51()
{
	if (Global_2672505.f_947.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_52()
{
	Global_75696 = 1;
}

bool func_53()
{
	return Global_75693;
}

void func_54(int iParam0)
{
	if (func_58())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_57())
		{
			func_56(1, 1);
		}
		else
		{
			func_56(0, 0);
		}
	}
	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 16);
	}
	if (unk_0xE87F28FD4128D063())
	{
		unk_0x0F15249D24BC5ADA(0);
	}
	Global_21725 = 5;
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 30);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8253, 30);
	}
	if (!func_55())
	{
		Global_20383.f_1 = 3;
	}
}

int func_55()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_56(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_59(0))
		{
			Global_20584 = 1;
			if (bParam1)
			{
				unk_0x78C4EBB0251847E2(&Global_20320);
			}
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			unk_0x6B7EA0158D00C600(Global_20311);
		}
	}
	else if (Global_20584 == 1)
	{
		Global_20584 = 0;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
		if (bParam1)
		{
			unk_0x6B7EA0158D00C600(Global_20320);
		}
		else
		{
			unk_0x6B7EA0158D00C600(Global_20311);
		}
	}
}

bool func_57()
{
	return BitTest(Global_1962996, 5);
}

bool func_58()
{
	return BitTest(Global_1962996, 19);
}

int func_59(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20383.f_1 > 3)
		{
			if (BitTest(Global_8253, 14))
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
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20383.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_60(var uParam0)
{
	if (BitTest(uParam0->f_1085, 0))
	{
		if (BitTest(uParam0->f_1085, 9))
		{
			func_61(&(Global_2683864.f_781), -1, 0, 1, 1);
			unk_0x8744D2E3FC95740E(&(uParam0->f_1085), 5);
			unk_0x8744D2E3FC95740E(&(uParam0->f_1085), 6);
			unk_0x8744D2E3FC95740E(&(uParam0->f_1085), 3);
			unk_0x8744D2E3FC95740E(&(uParam0->f_1085), 4);
			unk_0x8744D2E3FC95740E(&(uParam0->f_1085), 9);
		}
	}
	else if (BitTest(uParam0->f_1085, 9))
	{
		unk_0x8744D2E3FC95740E(&(uParam0->f_1085), 9);
	}
}

void func_61(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if ((iParam1 != 0 && iParam1 != 3) || iParam2 == 1)
	{
		if (unk_0x78411E34CF90EA8C(*uParam0))
		{
			unk_0x4CBC5D1BC117616B(*uParam0, 0);
			if (bParam4)
			{
				unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 1, 0);
			}
			unk_0x85E6A1E36B5E2E4D(*uParam0, 0);
			*uParam0 = 0;
			func_78();
			if (func_73())
			{
				unk_0xE3F88173F42C071B();
			}
			unk_0x0A83667A5D36A4FF(0);
			if (Global_1574534 == 0 && iParam3 == 1)
			{
				func_65(1, 0);
				func_65(1, 0);
			}
			if (!func_64())
			{
				if (func_63() || func_62())
				{
					if (!Global_2692735.f_7)
					{
						unk_0x65662724C6BC4810();
					}
				}
				else
				{
					unk_0x65662724C6BC4810();
				}
			}
		}
	}
}

var func_62()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_63()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

bool func_64()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139, 0);
}

void func_65(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_70(1, 0, 1);
	}
	else
	{
		func_66(iParam1);
	}
}

void func_66(int iParam0)
{
	func_69();
	if (iParam0 == 0)
	{
		if (unk_0xA7D416B098808337())
		{
			return;
		}
	}
	if (func_68() == 0 || unk_0x4D9174D8796EA622())
	{
		func_67(1);
		unk_0xDD98B34A4A3AFA89(0);
		unk_0xDD98B34A4A3AFA89(0);
	}
}

void func_67(int iParam0)
{
	if (Global_1574632.f_20 != iParam0)
	{
		Global_1574632.f_20 = iParam0;
	}
}

int func_68()
{
	return Global_1574632.f_20;
}

void func_69()
{
	Global_2696217 = 1;
}

void func_70(int iParam0, bool bParam1, bool bParam2)
{
	if (func_71())
	{
		return;
	}
	if ((func_68() == 1 || unk_0x4D9174D8796EA622()) || iParam0)
	{
		func_67(0);
		unk_0xDD98B34A4A3AFA89(1);
		if (!bParam1)
		{
			unk_0xDD98B34A4A3AFA89(1);
		}
		if (bParam2)
		{
			unk_0x063FC71162B675A0();
		}
	}
}

int func_71()
{
	if (func_72())
	{
		return Global_2694453;
	}
	return 0;
}

int func_72()
{
	if (Global_2694446)
	{
		return Global_2694445;
	}
	return 0;
}

int func_73()
{
	if (func_76(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_802 != func_15())
		{
			if (func_75(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_802, 0, 1))
			{
				if (func_74(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_802, 1, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_74(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_75(int iParam0, bool bParam1, bool bParam2)
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

bool func_76(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_77(-1, 0) == 8;
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

int func_77(int iParam0, bool bParam1)
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

void func_78()
{
	unk_0x8744D2E3FC95740E(&Global_2683864, 15);
}

void func_79(var uParam0)
{
	func_123(uParam0);
	if (!func_113(uParam0))
	{
		func_112();
		func_111();
		func_110();
		func_109();
		return;
	}
	if (uParam0->f_1084 == unk_0x259BE71D8A81D4FA())
	{
		if (!func_108())
		{
			func_106(0);
			return;
		}
	}
	else if (!func_105(uParam0))
	{
		if (!func_104(uParam0->f_1084))
		{
			func_106(1);
			return;
		}
	}
	if (func_103(uParam0))
	{
		if (func_102())
		{
			func_101();
		}
		else if (!func_100(uParam0))
		{
			func_97();
		}
		else
		{
			func_83(uParam0);
		}
		return;
	}
	if (func_82())
	{
		func_81(uParam0, 1);
		func_112();
		if (Local_161.f_2 != 0)
		{
			Stack.Push(uParam0);
			Call_Loc(Local_161.f_2);
		}
		else
		{
			func_80(uParam0);
		}
	}
}

void func_80(var uParam0)
{
	uParam0->f_726.f_5 = 1;
}

void func_81(var uParam0, int iParam1)
{
	if (uParam0->f_820 != iParam1)
	{
	}
	uParam0->f_820 = iParam1;
}

bool func_82()
{
	char* sVar0;
	
	sVar0 = "NHPG_PROMPT";
	if (Local_161.f_1 != 0)
	{
		Call_Loc(Local_161.f_1);
		sVar0 = StackVal;
	}
	if (!func_12(sVar0))
	{
		func_11(sVar0);
	}
	return unk_0x875A214D5EBCA509(0, 51);
}

void func_83(var uParam0)
{
	char* sVar0;
	
	Call_Loc(Local_161.f_33.f_5);
	sVar0 = StackVal;
	if (!func_12(sVar0))
	{
		func_11(sVar0);
	}
	if (unk_0x875A214D5EBCA509(0, 51))
	{
		func_110();
		func_84(uParam0, 0);
		uParam0->f_1090 = 1;
	}
}

void func_84(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (uParam0->f_1092)
		{
			func_85(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), false);
			uParam0->f_1092 = 0;
		}
	}
	else if (!uParam0->f_1092)
	{
		func_85(unk_0x259BE71D8A81D4FA(), 0, 0, 0);
		unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), true);
		uParam0->f_1092 = 1;
	}
}

void func_85(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x828F3FAE99DA791A())
		{
			unk_0x6FF322107B12B749(0);
		}
	}
	if (func_96())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x76CD105BCAC6EB9F())
	{
		uVar0 = iParam2;
		unk_0x4686BC3BFDBB5348(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0x834C960822A4683F())
		{
			bVar1 = false;
		}
		if (!func_94())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x762604C40829DB72(iParam0) && (unk_0x75EAB09F5E974116(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0x56E414973C2A8C0E(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x76CD105BCAC6EB9F())
				{
					unk_0x6E2FA5434737D22F(1);
				}
				else if (bVar14 || (!func_76(unk_0x259BE71D8A81D4FA(), 0) && !func_93()))
				{
					unk_0x4285E11B28063EE0(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x76CD105BCAC6EB9F() && !bVar19)
					{
						unk_0x6E2FA5434737D22F(0);
					}
					Global_2657589[iParam0 /*466*/].f_254 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_90(0, 0, 0);
					if (bVar25)
					{
						unk_0xE3F88173F42C071B();
					}
				}
				if (!func_89(uVar27) && !unk_0xB431D60610E7F85F(uVar27))
				{
					if (!bVar22)
					{
						unk_0x44C48AC14D3C09ED(uVar27, true, 0);
					}
				}
				if (!unk_0xA3736D76B0E93E93(uVar27))
				{
					if (!bVar21)
					{
						unk_0x5D7CD709B34C90F0(uVar27, false);
					}
					unk_0x11C125313CB8ADA2(uVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x5D7CD709B34C90F0(uVar27, false);
				}
				unk_0x3F58BFCF656F0DF1(uVar27, true);
				unk_0x2B52F77101390E6F(iParam0, 0);
				unk_0x6C4F5AA91D39455C(iParam0, 0);
				if (unk_0x4CEC77F224BCD884(uVar27) && unk_0x69CD279BFCFE278E(uVar27))
				{
					unk_0xAF8337BF5A296283(uVar27);
				}
				unk_0x9FF00EA9A61211D2(uVar27, 1);
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) == 0)
				{
					func_88();
					func_87();
				}
				if (unk_0x705A7AB2D4BC0A9B())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x787F8EE1F6FBDC6D())
				{
				}
				Global_2657589[iParam0 /*466*/].f_255 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2635559.f_2681)
				{
					Global_2635559.f_2681 = 0;
				}
			}
			else
			{
				if (!func_89(uVar27) && !unk_0xB431D60610E7F85F(uVar27))
				{
					if (!bVar22)
					{
						unk_0x44C48AC14D3C09ED(uVar27, !bVar15, 0);
					}
					if (!unk_0xA3736D76B0E93E93(uVar27))
					{
						if (!bVar21)
						{
							unk_0x5D7CD709B34C90F0(uVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x11C125313CB8ADA2(uVar27, 1);
						}
					}
					if (func_86(Global_4718592.f_166301))
					{
						unk_0x5D7CD709B34C90F0(uVar27, true);
					}
				}
				if (Global_1575035)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x2B52F77101390E6F(iParam0, 0);
				}
				else
				{
					unk_0x2B52F77101390E6F(iParam0, 1);
				}
				unk_0x3F58BFCF656F0DF1(uVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xBFD01C2045360289(uVar27) && !unk_0x7F420695E3F776FB(uVar27, 0))
					{
						unk_0x19626F992DC71FB9(uVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x4686BC3BFDBB5348(iParam0, bParam1, iVar28);
		}
	}
}

bool func_86(int iParam0)
{
	return iParam0 == 17;
}

void func_87()
{
	struct<3> Var0;
	
	Global_2672505.f_1024 = 0;
	Global_2672505.f_1025 = 0;
	Global_2672505.f_1026 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672505.f_1031 = -1;
	Global_2672505.f_1032 = 0;
	Global_2635559.f_2692 = { Var0 };
}

void func_88()
{
	Global_2635559.f_702 = 0;
	Global_2635559.f_2735 = 0;
	Global_2635559.f_515 = 0;
	Global_2635559.f_606 = 0;
	Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_217 = 0;
	Global_2635559.f_2690 = 0;
}

int func_89(var uParam0)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x9B5C1660CCDF7189(uParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_90(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xFC8BFE4B41177C22(iParam1))
		{
			if (unk_0x501EBB0523078750(iParam1))
			{
				if (!unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), unk_0x1C1C92A1CBAE364B(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_92();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x07938654FF332D78(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), true);
			}
		}
		if (func_76(unk_0x259BE71D8A81D4FA(), 0))
		{
			unk_0x522EF6D7B4059F2C(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xF11FEC6A04FD7226(iParam0, iParam1);
		}
		unk_0x4BDB60141FD6E156(iParam0, iParam1);
		func_91(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, 1);
	}
}

void func_92()
{
	int iVar0;
	
	if (!unk_0xAD15761928FCF79C())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0xBCF87EE3DC296C2A(iVar0);
				iVar0++;
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), false);
		}
	}
}

bool func_93()
{
	return BitTest(Global_2621446, 3);
}

int func_94()
{
	if (func_95() == 0)
	{
		return 1;
	}
	return 0;
}

int func_95()
{
	return Global_1574632.f_18;
}

int func_96()
{
	if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861, 2) && !Global_2684801.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_97()
{
	var uVar0;
	var uVar1;
	
	if (Local_161.f_33.f_9 != 0 && Local_161.f_33.f_3 != 0)
	{
		Call_Loc(Local_161.f_33.f_9);
		uVar0 = StackVal;
		Call_Loc(Local_161.f_33.f_3);
		uVar1 = StackVal;
		if (!func_99(uVar0, uVar1))
		{
			func_98(uVar0, uVar1);
		}
	}
}

void func_98(char* sParam0, var uParam1)
{
	unk_0xAC98CA65AD9A3215(uParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

bool func_99(char* sParam0, var uParam1)
{
	unk_0x39DCBE5519BD783A(uParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	return unk_0x7EBCD400E7DE179C(0);
}

int func_100(var uParam0)
{
	if (uParam0->f_1084 == unk_0x259BE71D8A81D4FA())
	{
		Stack.Push(Local_161.f_33.f_3 != 0);
		Call_Loc(Local_161.f_33.f_3);
		if (StackVal && unk_0x0AF5E4A6C74DC312(StackVal, 0, 1, 0, -1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_101()
{
	if (Local_161.f_33.f_7 != 0)
	{
		Call_Loc(Local_161.f_33.f_7);
		if (!func_12(StackVal))
		{
			Call_Loc(Local_161.f_33.f_7);
			func_11(StackVal);
		}
	}
}

int func_102()
{
	if (Local_161.f_33.f_6 != 0)
	{
		Call_Loc(Local_161.f_33.f_6);
		return StackVal;
	}
	return 0;
}

int func_103(var uParam0)
{
	if (uParam0->f_1084 == unk_0x259BE71D8A81D4FA())
	{
		Call_Loc(Local_161.f_33.f_2);
		Call_Loc(Local_161.f_33);
		if (StackVal && !StackVal)
		{
			return 1;
		}
	}
	return 0;
}

int func_104(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_15())
		{
			return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_105(var uParam0)
{
	switch (uParam0->f_1082)
	{
		case 0:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

void func_106(int iParam0)
{
	var uVar0;
	
	uVar0 = func_107(iParam0);
	func_9(uVar0, -1);
}

char* func_107(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	if (Local_161.f_30 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_161.f_30);
		sVar0 = StackVal;
	}
	if (!unk_0xD6F9DEE4765092A9(sVar0))
	{
		return sVar0;
	}
	switch (iParam0)
	{
		case 0:
			return "NHPG_HELP_BBOSS";
		
		case 1:
			return "NHPG_HELP_BGOON";
		
		default:
	}
	return sVar0;
}

bool func_108()
{
	return func_104(unk_0x259BE71D8A81D4FA());
}

void func_109()
{
	if (Local_161.f_33.f_9 != 0 && Local_161.f_33.f_3 != 0)
	{
		Call_Loc(Local_161.f_33.f_9);
		Call_Loc(Local_161.f_33.f_3);
		if (func_99(StackVal, StackVal))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
}

void func_110()
{
	if (Local_161.f_33.f_5 != 0)
	{
		Call_Loc(Local_161.f_33.f_5);
		if (func_12(StackVal))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
}

void func_111()
{
	if (Local_161.f_33.f_7 != 0)
	{
		Call_Loc(Local_161.f_33.f_7);
		if (func_12(StackVal))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
}

void func_112()
{
	char* sVar0;
	
	sVar0 = "NHPG_PROMPT";
	if (Local_161.f_1 != 0)
	{
		Call_Loc(Local_161.f_1);
		sVar0 = StackVal;
	}
	if (func_12(sVar0))
	{
		unk_0x428C32CC68809A35(1);
	}
}

int func_113(var uParam0)
{
	if (uParam0->f_1090 > 0)
	{
		return 0;
	}
	if (uParam0->f_1084 != -1 && Global_1978795[uParam0->f_1084 /*25*/].f_23)
	{
		return 0;
	}
	if (!func_75(unk_0x259BE71D8A81D4FA(), 1, 1))
	{
		return 0;
	}
	if (func_105(uParam0) && uParam0->f_1084 != unk_0x259BE71D8A81D4FA())
	{
		return 0;
	}
	if (BitTest(uParam0->f_1085, 2))
	{
		return 0;
	}
	if (BitTest(uParam0->f_1085, 3) || BitTest(uParam0->f_1085, 4))
	{
		return 0;
	}
	if (unk_0x834C960822A4683F())
	{
		return 0;
	}
	if (unk_0xFD216000DC314A92())
	{
		return 0;
	}
	if (!func_122(unk_0x259BE71D8A81D4FA(), 2))
	{
		return 0;
	}
	if (func_121())
	{
		return 0;
	}
	if (func_53())
	{
		return 0;
	}
	if (func_120(unk_0x259BE71D8A81D4FA(), 0) && func_119(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (uParam0->f_726 != 3)
	{
		return 0;
	}
	if (func_118())
	{
		return 0;
	}
	if (func_117())
	{
		return 0;
	}
	if (func_116())
	{
		return 0;
	}
	if (func_115() == 2 || func_115() == 16)
	{
		return 0;
	}
	if (func_59(0))
	{
		return 0;
	}
	if (Local_161.f_0 != 0)
	{
		Call_Loc(Local_161.f_0);
		if (!StackVal)
		{
			return 0;
		}
	}
	if (func_114())
	{
		return 0;
	}
	return 1;
}

int func_114()
{
	if (func_12("H4PREP_UNVLB"))
	{
		return 1;
	}
	return 0;
}

int func_115()
{
	return Global_1057409;
}

bool func_116()
{
	return Global_2683864.f_692;
}

bool func_117()
{
	return Global_2683864.f_691;
}

bool func_118()
{
	return Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_192 != 0;
}

bool func_119(int iParam0)
{
	return func_122(iParam0, 20);
}

int func_120(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_121()
{
	bool bVar0;
	
	bVar0 = ((unk_0x6D05C5731A838CB3(2, 199) || unk_0x875A214D5EBCA509(2, 199)) || unk_0x2645430E708CBFAC(2, 199));
	if (bVar0)
	{
		iLocal_173 = 1;
		return 1;
	}
	else if (iLocal_173)
	{
		if (func_40(&uLocal_174, 1000, 0))
		{
			func_38(&uLocal_174);
			iLocal_173 = 0;
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_122(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

void func_123(var uParam0)
{
	bool bVar0;
	
	switch (uParam0->f_1090)
	{
		case 0:
			break;
		
		case 1:
			if (func_124(uParam0, 0, &bVar0))
			{
				if (bVar0)
				{
					uParam0->f_1090 = 2;
				}
				else
				{
					uParam0->f_1090 = 0;
				}
				func_84(uParam0, 1);
			}
			break;
		
		case 2:
			Call_Loc(Local_161.f_33.f_8);
			if (StackVal)
			{
				uParam0->f_1090 = 3;
			}
			break;
		
		case 3:
			Call_Loc(Local_161.f_33);
			if (!StackVal)
			{
				Call_Loc(Local_161.f_33.f_1);
				uParam0->f_1090 = 4;
			}
			else
			{
				uParam0->f_1090 = 4;
			}
			break;
		
		case 4:
			if (Local_161.f_2 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_161.f_2);
			}
			else
			{
				func_80(uParam0);
			}
			uParam0->f_1090 = 0;
			break;
	}
}

int func_124(var uParam0, int iParam1, var uParam2)
{
	char cVar0[64];
	char cVar1[64];
	char cVar2[64];
	char cVar3[64];
	char cVar4[64];
	bool bVar5;
	int iVar6;
	int iVar7;
	
	bVar5 = false;
	iVar7 = 36;
	StringCopy(&cVar0, "HPWARN_CONF", 64);
	switch (iParam1)
	{
		case 0:
			Call_Loc(Local_161.f_33.f_4);
			cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
			StringCopy(&cVar4, "HEIST_WARN_2", 64);
			bVar5 = true;
			Call_Loc(Local_161.f_33.f_3);
			iVar6 = StackVal;
			break;
		
		case 1:
			StringCopy(&cVar0, "FM_CSC_QUIT", 64);
			StringCopy(&cVar1, "FM_CSC_QUIT1", 64);
			break;
		
		case 2:
			if (Local_161.f_56 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_161.f_56);
				StringCopy(&cVar0, StackVal, 64);
			}
			if (Local_161.f_56.f_1 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_161.f_56.f_1);
				StringCopy(&cVar1, StackVal, 64);
			}
			if (Local_161.f_56.f_2 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_161.f_56.f_2);
				iVar7 = StackVal;
			}
			if (Local_161.f_56.f_3 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_161.f_56.f_3);
				StringCopy(&cVar4, StackVal, 64);
			}
			if (Local_161.f_56.f_4 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_161.f_56.f_4);
				bVar5 = StackVal;
			}
			if (Local_161.f_56.f_5 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_161.f_56.f_5);
				iVar6 = StackVal;
			}
			if (Local_161.f_56.f_6 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_161.f_56.f_6);
				StringCopy(&cVar2, StackVal, 64);
			}
			if (Local_161.f_56.f_7 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_161.f_56.f_7);
				StringCopy(&cVar3, StackVal, 64);
			}
			break;
	}
	set_warning_message_with_header(&cVar0, &cVar1, iVar7, &cVar4, bVar5, iVar6, &cVar2, &cVar3, true, 0);
	if (unk_0xAE231F549813BBDF(2))
	{
		unk_0x30EBBB1D4EDC8FE4(1);
	}
	if (unk_0x61C3701AD6D746B2(2, 202) || unk_0x2645430E708CBFAC(2, 202))
	{
		*uParam2 = 0;
		return 1;
	}
	if (unk_0x61C3701AD6D746B2(2, 201) || unk_0x2645430E708CBFAC(2, 201))
	{
		*uParam2 = 1;
		return 1;
	}
	return 0;
}

void func_125(var uParam0)
{
	if (BitTest(uParam0->f_1085, 3) && !BitTest(uParam0->f_1085, 4))
	{
		if (uParam0->f_1084 == unk_0x259BE71D8A81D4FA())
		{
			if (func_281() || func_280())
			{
				func_279();
			}
			else if (!BitTest(uParam0->f_1085, 4))
			{
				if (func_126(uParam0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1085), 4);
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1085), 5);
				}
			}
		}
	}
	else if (BitTest(uParam0->f_1085, 5))
	{
		if (!BitTest(uParam0->f_1085, 6))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1085), 6);
			func_65(0, 0);
			func_65(0, 0);
		}
		unk_0x8744D2E3FC95740E(&(uParam0->f_1085), 5);
	}
}

int func_126(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	struct<3> Var6;
	var uVar7;
	
	if (Local_161.f_32 == 0)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Call_Loc(Local_161.f_32);
	iVar0 = StackVal;
	if (iVar0 == -1)
	{
		return 0;
	}
	Var1 = { Global_794709.f_4[iVar0 /*88*/] };
	iVar2 = Global_794709.f_4[iVar0 /*88*/].f_65;
	uVar3 = Global_794709.f_4[iVar0 /*88*/].f_71;
	func_218(func_219(unk_0x259BE71D8A81D4FA()));
	func_85(unk_0x259BE71D8A81D4FA(), 0, 376832, 0);
	Global_2684801.f_3831 = 1;
	func_217(unk_0x259BE71D8A81D4FA(), 0);
	func_216();
	func_215();
	switch (uParam0->f_1082)
	{
		case 0:
			iVar2 = 260;
			func_214(67);
			func_213();
			func_212();
			break;
		
		case 1:
			iVar2 = 274;
			func_214(69);
			func_211();
			func_210();
			break;
	}
	if (func_281() || func_209())
	{
		func_279();
	}
	else
	{
		Global_1950108.f_507 = 1;
		func_208(iVar2);
		if (func_20() <= 3)
		{
			func_207();
		}
		func_204(func_206(unk_0x259BE71D8A81D4FA()));
		func_202(&Var1);
		func_201(uVar3);
		func_200();
		func_198();
		func_197();
		func_78();
		func_196();
		Var6 = { 0f, 0f, 0f };
		unk_0x0B0C9A0F9AAEB7F0(&uVar7, 6);
		func_127(&(Global_2683864.f_781), 0, 0, Var6, &uVar4, Var6, 1, 0, &uVar4, &iVar5, iVar5, 0, uVar7);
		func_65(0, 0);
		Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_95 = 8;
		return 1;
	}
	return 0;
}

void func_127(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, struct<3> Param5, bool bParam6, bool bParam7, var uParam8, var uParam9, int iParam10, bool bParam11, var uParam12)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	
	func_61(uParam0, iParam1, 1, iParam10, 1);
	if (func_76(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (bParam7)
		{
			if (!unk_0x3555462DB47B7AB1())
			{
				if (!func_195() || bParam11)
				{
					func_184(0);
				}
			}
			return;
		}
	}
	if (!unk_0x78411E34CF90EA8C(*uParam0))
	{
		*uParam0 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 0);
	}
	Var1 = { Param5 };
	fVar2 = -1f;
	bVar3 = false;
	fVar4 = 0.2f;
	iVar5 = 1;
	if (func_183(iParam1))
	{
		*uParam4 = { func_182(iParam1, iParam2) };
		Var1 = { func_181(iParam1, iParam2) };
		fVar2 = func_180(iParam1, iParam2);
	}
	if (!func_35(*uParam4))
	{
		Var0 = { *uParam4 };
	}
	if (func_35(Var0))
	{
		if (!bParam6)
		{
			Var0 = { Param3 };
			if (unk_0x7830326EF9D54DBB(Var0.f_0, Var0.f_1, (Var0.f_2 + 1f)))
			{
			}
			else
			{
				Var0.f_2 = (Var0.f_2 + 4f);
			}
		}
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_35(Var0))
		{
			if (func_76(unk_0x259BE71D8A81D4FA(), 0))
			{
				if (unk_0xFC8BFE4B41177C22(func_177()) && !unk_0x1C2F771CDC87A3A5(func_177(), 0))
				{
					Var0 = { unk_0xD1A6A821F5AC81DB(func_177(), 1) };
					Var1 = { 0f, 0f, unk_0xCFC0C995455A6204(func_177()) };
					if (func_74(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_802, 1, 0))
					{
						Var0 = { unk_0x02AF3EA0F67D2329() };
						Var1 = { unk_0x958849BB56EC0F07(2) };
					}
				}
				else
				{
					Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
					Var1 = { 0f, 0f, unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D()) };
				}
			}
			else
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
				Var1 = { 0f, 0f, unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D()) };
			}
			if ((func_176(unk_0x259BE71D8A81D4FA()) || func_175(unk_0x259BE71D8A81D4FA())) && func_174())
			{
				Var0.f_2 = (Var0.f_2 + 1.5f);
			}
			else if (unk_0xF8A8852F99E201DD(unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D())))
			{
				if (func_176(unk_0x259BE71D8A81D4FA()))
				{
					Var0.f_2 = (Var0.f_2 + 0.4f);
				}
				else
				{
					Var0.f_2 = (Var0.f_2 + 1.5f);
				}
			}
			else
			{
				Var0.f_2 = (Var0.f_2 + 4f);
			}
		}
	}
	if (BitTest(uParam12, 3))
	{
		Var0 = { 1124.745f, 263.6554f, -48.8552f };
		Var1 = { -22.4617f, 0f, -75.8431f };
		fVar2 = 50f;
	}
	else if (func_172(unk_0x259BE71D8A81D4FA()))
	{
		Var0 = { 488.6712f, -2623.074f, -48.1159f };
		Var1 = { -9.1167f, 0f, 130.9763f };
		fVar2 = 50f;
	}
	else if (func_171(Global_4718592.f_113724) || BitTest(uParam12, 2))
	{
		if (func_170(unk_0x259BE71D8A81D4FA()))
		{
			Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			Var1 = { 0f, 0f, unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D()) };
			Var0.f_2 = (Var0.f_2 + 0.4f);
			fVar2 = unk_0xB99978989A0F4E57();
		}
		else
		{
			Var0 = { -194.2056f, -1853.75f, 70.3345f };
			Var1 = { -10.0011f, 0f, 131.0271f };
			fVar2 = 42.6052f;
		}
	}
	else if (func_169(Global_4718592.f_113724) || BitTest(uParam12, 1))
	{
		Var0 = { 347.2638f, 4867.324f, -59.2679f };
		Var1 = { 1.2933f, 0.0747f, -34.6934f };
		fVar2 = 50f;
	}
	else if (BitTest(uParam12, 4) || func_168(Global_4718592.f_113724))
	{
		Var0 = { 2709.332f, -366.5988f, -52.2786f };
		Var1 = { -19.962f, 0f, -121.3927f };
		fVar2 = 56.6574f;
	}
	else if (BitTest(uParam12, 5))
	{
		iVar6 = func_167(unk_0x259BE71D8A81D4FA());
		Var0 = { unk_0xF10F2A2453AF1DFB(func_166(iVar6), func_165(iVar6), 3.5688f, 7.9792f, 4.1641f) };
		Var1 = { -21.6791f, 0f, (func_165(iVar6) + 40.237f) };
		fVar2 = 70f;
	}
	else if (BitTest(uParam12, 6) || func_164())
	{
		if (BitTest(uParam12, 6))
		{
			Var0 = { Global_1977693.f_1073 };
			Var1 = { Global_1977693.f_1073.f_3 };
			fVar2 = Global_1977693.f_1073.f_6;
		}
		else
		{
			func_161(&Var0, &Var1, &fVar2);
		}
	}
	else if (BitTest(uParam12, 7))
	{
		Var0 = { -1381.784f, 38.8164f, 63.1614f };
		Var1 = { -19.0288f, 0f, -35.2577f };
		fVar2 = 50f;
	}
	else if (BitTest(uParam12, 8) || func_160(Global_4718592.f_113724))
	{
	}
	else if (BitTest(uParam12, 9) || (func_158() && func_157(249)))
	{
		Var0 = { -822.1176f, -198.5518f, 40.085f };
		Var1 = { 13.7424f, 0f, 145.7582f };
		fVar2 = 65.2994f;
		bVar3 = true;
		if (!func_116())
		{
			iVar5 = 0;
		}
	}
	else if (BitTest(uParam12, 10))
	{
	}
	else if (func_156(Global_4718592.f_113724))
	{
		Var0 = { 800.2757f, -3051.393f, 10.5728f };
		Var1 = { 3.1956f, 0f, -8.4268f };
		fVar2 = 50f;
	}
	else if (BitTest(uParam12, 11))
	{
		Var0 = { 1403.907f, 3586.428f, 41.1676f };
		Var1 = { -8.8877f, 0f, 39.6448f };
		fVar2 = 62f;
	}
	else if (BitTest(uParam12, 12))
	{
		Var0 = { 622.9118f, -396.3098f, 31.0305f };
		Var1 = { -10.3971f, 0f, 133.29f };
		fVar2 = 60f;
	}
	if (func_195() && !bParam11)
	{
		Var0 = { -213.5595f, 316.9778f, 96.9244f };
		Var1 = { -1.0483f, 0f, -127.3989f };
		fVar2 = 25.5102f;
	}
	if (iParam1 == 0 && bParam7)
	{
		func_150();
		func_149(&Var7, 144, Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_33);
		if (!func_35(Var7))
		{
			Var0 = { Var7 };
		}
		func_143(&Var7, 144, Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_33);
		Var1 = { Var7 };
	}
	unk_0x4CBC5D1BC117616B(*uParam0, 1);
	unk_0x1761457F86AD0EE2(*uParam0, Var0);
	unk_0x5E5CEC33463AD803(*uParam0, Var1, 2);
	if (fVar2 > 0f)
	{
		unk_0x58BDA5D9262F5D30(*uParam0, fVar2);
	}
	else
	{
		unk_0x58BDA5D9262F5D30(*uParam0, 40f);
	}
	if (bVar3)
	{
		unk_0x2A09425009DAD0F5(*uParam0, "HAND_SHAKE", fVar4);
	}
	if (func_195() && !bParam11)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (!func_142(unk_0x259BE71D8A81D4FA()))
			{
				func_85(unk_0x259BE71D8A81D4FA(), 0, 4, 0);
				unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -209.434f, 305.016f, 95.9464f, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 12.5f);
				unk_0x63C8DCBEC1CF8225(unk_0x4A8C381C258A124D(), -209.867f, 306.969f, 95.9464f, 1f, 20000, 1193033728, 0.1f);
				unk_0x717804C8C8DA67BF(unk_0x4A8C381C258A124D(), joaat("MotionState_Walk"), 0, 0, 0);
				unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
			}
		}
		unk_0x60040CDD28AA1BC3(-209.434f, 305.016f, 95.9464f, 30f, 0, 0, 0, 0, 0, 0, 0);
		func_141(1);
	}
	if (iVar5 && !unk_0x3555462DB47B7AB1())
	{
		if (!func_195() || bParam11)
		{
			func_184(0);
		}
	}
	unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
	if ((((!func_140() && !func_139()) && !func_138()) && !func_137()) && !func_136())
	{
		func_135(0);
	}
	if (func_73())
	{
		unk_0xE3F88173F42C071B();
	}
	if (unk_0x3555462DB47B7AB1())
	{
		*uParam8 = { Var0 };
		*uParam9 = 1;
	}
	else
	{
		func_134(Var0);
	}
	unk_0x3AFFD31224BF9207(unk_0x259BE71D8A81D4FA(), 1);
	func_128(func_195(), ((BitTest(uParam12, 0) || BitTest(uParam12, 1)) || BitTest(uParam12, 2)));
}

void func_128(bool bParam0, bool bParam1)
{
	if (func_76(unk_0x259BE71D8A81D4FA(), 0))
	{
		return;
	}
	if (!bParam1 && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
		{
			if (unk_0xA3736D76B0E93E93(unk_0x4A8C381C258A124D()))
			{
				unk_0x837D67618BF89034(unk_0x4A8C381C258A124D(), 1, 1);
			}
		}
	}
	if (!bParam0)
	{
		if (unk_0x76CD105BCAC6EB9F())
		{
			if (func_131())
			{
				unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
			}
			if (func_130(unk_0x259BE71D8A81D4FA()))
			{
				func_85(unk_0x259BE71D8A81D4FA(), 0, 32768, 0);
			}
			else if (func_129())
			{
				func_85(unk_0x259BE71D8A81D4FA(), 0, 32772, 0);
			}
			else if (!bParam1)
			{
				func_85(unk_0x259BE71D8A81D4FA(), 0, 319492, 0);
			}
		}
		else
		{
			func_85(unk_0x259BE71D8A81D4FA(), 0, 57348, 0);
		}
	}
}

bool func_129()
{
	return Global_2684801.f_6341;
}

int func_130(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1890444[iParam0 /*129*/].f_29, 31);
	}
	return 0;
}

int func_131()
{
	var uVar0;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (func_133(uVar0, 1) && !func_132(uVar0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_132(int iParam0, bool bParam1)
{
	if (Global_78558)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0) && (!bParam1 || unk_0xD9F5E1FEFD1329E4(iParam0, 0)))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "Player_Vehicle"))
			{
				if (unk_0xE2F6FE9B61232165(iParam0, "Player_Vehicle") == unk_0x3351FEF40EC734DB(unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_133(int iParam0, bool bParam1)
{
	if (Global_78558)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0) && (!bParam1 || unk_0xD9F5E1FEFD1329E4(iParam0, 0)))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_134(struct<3> Param0)
{
	if (!func_73())
	{
		return;
	}
	unk_0x2D8D239B3F1D13F9(Param0, 0f, 0f, 0f);
	unk_0x0A83667A5D36A4FF(1);
}

void func_135(int iParam0)
{
	if (func_71())
	{
		return;
	}
	if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861, 2) && !Global_2684801.f_2846.f_216 == -1)
	{
		return;
	}
	if (unk_0x15CCE8886267624F() || unk_0x78ABC1D11B34F324())
	{
		unk_0x10B228D2FDB7AF16(iParam0);
	}
}

bool func_136()
{
	return BitTest(Global_2683864.f_3, 17);
}

bool func_137()
{
	return BitTest(Global_2683864.f_3, 14);
}

bool func_138()
{
	return BitTest(Global_2683864.f_3, 12);
}

bool func_139()
{
	return BitTest(Global_2683864.f_3, 9);
}

bool func_140()
{
	return BitTest(Global_2683864.f_3, 6);
}

void func_141(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_143), 27);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_143), 27);
	}
}

bool func_142(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_143, 27);
}

int func_143(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	switch (iParam2)
	{
		case default:
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_144(iParam2, iParam1, &Var0, -1, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_144(iParam2, iParam1, &Var0, 61, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 83:
		case 84:
		case 85:
			func_144(iParam2, iParam1, &Var0, 83, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			func_144(iParam2, iParam1, &Var0, 77, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_144(iParam2, iParam1, &Var0, 73, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_144(iParam2, iParam1, &Var0, 88, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
			return 0;
	}
}

void func_144(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<6> Var0[2];
	struct<3> Var1;
	
	Var0[0 /*6*/] = { func_148(iParam3, bParam4) };
	Var0[1 /*6*/] = { func_148(iParam0, bParam4) };
	*uParam2 = { func_146(iParam1, iParam3) };
	Var1 = { *uParam2 - Var0[0 /*6*/] };
	Var1 = { func_145(Var1, -Var0[0 /*6*/].f_3.f_2) };
	Var1 = { func_145(Var1, Var0[1 /*6*/].f_3.f_2) };
	*uParam2 = { unk_0xF10F2A2453AF1DFB(Var0[1 /*6*/], 0f, Var1) };
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 153:
		case 154:
		case 155:
		case 157:
		case 234:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 235:
		case 149:
		case 150:
		case 151:
		case 152:
		case 172:
		case 187:
		case 173:
		case 201:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 306:
		case 305:
		case 308:
		case 309:
		case 312:
		case 313:
		case 314:
		case 315:
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 307:
		case 331:
		case 332:
		case 333:
		case 334:
		case 310:
		case 335:
		case 336:
		case 337:
		case 338:
		case 339:
		case 311:
		case 340:
		case 435:
		case 436:
		case 437:
		case 470:
		case 477:
		case 504:
		case 507:
		case 510:
		case 513:
		case 528:
		case 531:
		case 534:
		case 537:
		case 540:
		case 547:
		case 445:
		case 446:
		case 447:
		case 448:
		case 449:
		case 450:
		case 471:
		case 472:
		case 478:
		case 479:
		case 505:
		case 506:
		case 508:
		case 509:
		case 511:
		case 512:
		case 514:
		case 515:
		case 529:
		case 530:
		case 532:
		case 533:
		case 535:
		case 536:
		case 538:
		case 539:
		case 541:
		case 542:
		case 548:
		case 549:
		case 432:
		case 433:
		case 434:
		case 451:
		case 452:
		case 453:
		case 454:
		case 455:
		case 456:
		case 459:
		case 460:
		case 461:
		case 462:
		case 463:
		case 464:
		case 560:
		case 546:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 501:
		case 502:
		case 500:
		case 616:
		case 615:
		case 612:
		case 629:
		case 630:
		case 631:
		case 714:
		case 633:
		case 634:
		case 635:
		case 636:
		case 637:
		case 638:
		case 639:
		case 640:
		case 643:
		case 644:
		case 641:
		case 642:
		case 646:
		case 645:
		case 647:
		case 648:
		case 649:
		case 650:
		case 666:
		case 667:
		case 668:
		case 669:
		case 670:
		case 671:
		case 673:
		case 674:
		case 675:
		case 676:
		case 677:
		case 689:
		case 690:
		case 691:
		case 692:
		case 693:
		case 694:
		case 695:
		case 696:
		case 697:
		case 698:
		case 699:
		case 700:
		case 701:
		case 702:
		case 703:
		case 704:
		case 705:
		case 706:
		case 707:
		case 708:
		case 709:
		case 710:
		case 711:
		case 712:
		case 713:
		case 632:
		case 738:
		case 739:
		case 740:
		case 741:
		case 742:
		case 743:
		case 744:
		case 745:
		case 746:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 715:
		case 716:
		case 717:
		case 718:
		case 719:
		case 720:
		case 721:
		case 722:
		case 723:
		case 724:
		case 725:
		case 726:
		case 727:
		case 728:
		case 729:
		case 730:
		case 731:
		case 732:
		case 733:
		case 734:
		case 735:
		case 736:
		case 737:
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 755:
		case 756:
		case 757:
		case 758:
		case 759:
		case 760:
		case 761:
		case 762:
		case 763:
		case 764:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 770:
		case 771:
		case 772:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 789:
		case 790:
		case 791:
		case 792:
		case 793:
		case 794:
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 802:
		case 801:
		case 803:
		case 804:
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 678:
		case 679:
		case 680:
		case 681:
		case 682:
		case 683:
		case 684:
		case 685:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 815:
		case 817:
		case 816:
		case 819:
		case 818:
		case 820:
		case 821:
		case 822:
		case 823:
		case 824:
		case 825:
		case 826:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 686:
		case 687:
		case 688:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
		case 879:
		case 880:
		case 881:
		case 882:
		case 883:
		case 884:
		case 888:
		case 889:
		case 890:
		case 891:
		case 651:
		case 652:
		case 653:
		case 654:
		case 655:
		case 656:
		case 657:
		case 658:
		case 659:
		case 660:
		case 661:
		case 662:
		case 663:
		case 664:
		case 665:
		case 887:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
		case 904:
		case 905:
		case 906:
		case 907:
		case 908:
		case 911:
		case 913:
		case 914:
		case 915:
		case 916:
		case 917:
		case 918:
		case 919:
		case 920:
		case 921:
		case 922:
		case 923:
		case 924:
		case 925:
		case 926:
		case 927:
		case 928:
		case 929:
		case 930:
		case 931:
		case 932:
		case 954:
		case 955:
		case 956:
		case 957:
		case 958:
		case 959:
		case 968:
		case 969:
		case 970:
		case 973:
		case 974:
		case 975:
		case 976:
		case 977:
		case 978:
		case 979:
		case 980:
		case 981:
		case 982:
		case 983:
		case 984:
		case 985:
		case 986:
		case 987:
		case 988:
		case 989:
		case 990:
		case 1008:
		case 1009:
		case 1010:
		case 991:
		case 992:
		case 993:
		case 994:
		case 995:
		case 996:
		case 997:
		case 998:
		case 999:
		case 960:
		case 961:
		case 962:
		case 963:
		case 964:
		case 965:
		case 966:
		case 967:
		case 1000:
		case 1001:
		case 1002:
		case 1003:
		case 1004:
		case 1005:
		case 1006:
		case 1007:
		case 1011:
		case 1012:
		case 1013:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

Vector3 func_145(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = sin(fParam1);
	fVar2 = cos(fParam1);
	Var0.f_0 = ((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_146(var uParam0, int iParam1)
{
	struct<6> Var0;
	var uVar1;
	int iVar2;
	
	iVar2 = 0;
	if (func_147(iParam1, &uVar1))
	{
		iVar2 = 1;
	}
	if (iVar2 && unk_0xC557C842E425A746(&Var0, &(Var0.f_3), uParam0, uVar1))
	{
		return Var0;
	}
	return Var0;
}

int func_147(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case -1:
		case 1:
			*uParam1 = 0;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap", 64);
			return 1;
			break;
		
		case 61:
			*uParam1 = 1;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
			return 1;
			break;
		
		case 73:
			*uParam1 = 2;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
			return 1;
			break;
		
		case 77:
			*uParam1 = 3;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
			return 1;
			break;
		
		case 83:
			*uParam1 = 4;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
			return 1;
			break;
		
		case 86:
			*uParam1 = 5;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
			return 1;
			break;
		
		case 88:
			*uParam1 = 6;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
			return 1;
			break;
		
		case 91:
			*uParam1 = 7;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
			return 1;
			break;
		
		case 97:
			*uParam1 = 8;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
			return 1;
			break;
		
		case 109:
			*uParam1 = 9;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
			return 1;
			break;
	}
	return 0;
}

struct<6> func_148(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_149(var uParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	switch (iParam2)
	{
		case default:
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_144(iParam2, iParam1, &Var0, -1, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_144(iParam2, iParam1, &Var0, 61, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 83:
		case 84:
		case 85:
			func_144(iParam2, iParam1, &Var0, 83, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			func_144(iParam2, iParam1, &Var0, 77, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_144(iParam2, iParam1, &Var0, 73, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_144(iParam2, iParam1, &Var0, 88, 0);
			*uParam0 = { Var0 };
			return 1;
			return 0;
	}
}

void func_150()
{
	int iVar0;
	
	if (func_153())
	{
		return;
	}
	func_152(4, -1);
	if (func_151())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x762604C40829DB72(unk_0xB23E0F9B63D009A8(iVar0)))
		{
			if (unk_0xB23E0F9B63D009A8(iVar0) == unk_0x259BE71D8A81D4FA())
			{
				if (!func_157(48))
				{
					unk_0x903DAFB544C5CA0D(unk_0xB23E0F9B63D009A8(iVar0), 0);
				}
			}
			else
			{
				unk_0x903DAFB544C5CA0D(unk_0xB23E0F9B63D009A8(iVar0), 0);
			}
		}
		iVar0++;
	}
}

bool func_151()
{
	return BitTest(Global_2683864.f_43.f_4, 0);
}

void func_152(bool bParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1653913.f_1047), bParam0);
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1653913.f_170[iParam1] = 1;
			}
			break;
	}
}

int func_153()
{
	if (func_155() != 2)
	{
		return 0;
	}
	if (!func_151() && !((Global_1943594 || Global_1574964) && func_154()))
	{
		return 0;
	}
	return 1;
}

var func_154()
{
	return Global_2683864.f_43.f_57;
}

int func_155()
{
	return Global_2683864.f_43.f_40;
}

int func_156(int iParam0)
{
	int iVar0;
	
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_262145.f_6211[18])
		{
			if (iParam0 == Global_262145.f_5066[18 /*51*/][iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_157(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 >= 8)
	{
		return 0;
	}
	return BitTest(Global_2684801.f_1.f_2813[iVar0], iVar1);
}

int func_158()
{
	return func_159(Global_4718592.f_113724);
}

int func_159(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31722[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_160(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31715[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_161(var uParam0, var uParam1, float fParam2)
{
	if (func_163(Global_4718592.f_113724))
	{
		if (unk_0x1D5CD3EAAA7422B0((unk_0x4AE9635532D92447(0) - 1.333333f)) < 0.1f)
		{
			*uParam0 = { 1561.161f, 384.824f, -48.6215f };
			*uParam1 = { -89.3034f, -0.1435f, 180f };
			*fParam2 = 69f;
		}
		else
		{
			*uParam0 = { 1561.16f, 384.8204f, -48.9135f };
			*uParam1 = { -89.5003f, -0.204f, 180f };
			*fParam2 = 69f;
		}
	}
	else if (func_162(Global_4718592.f_113724))
	{
		*uParam0 = { -1348.956f, 138.2791f, -94.7272f };
		*uParam1 = { -2.4593f, 0f, -164.9275f };
		*fParam2 = 70f;
	}
}

int func_162(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31051[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_163(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (Global_262145.f_29933[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_164()
{
	if (func_163(Global_4718592.f_113724))
	{
		return 1;
	}
	return 0;
}

float func_165(int iParam0)
{
	return Global_4280768[iParam0 /*45*/].f_7;
}

Vector3 func_166(int iParam0)
{
	return Global_4280768[iParam0 /*45*/].f_4;
}

var func_167(int iParam0)
{
	return Global_2652258[iParam0 /*3*/];
}

int func_168(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_6087[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_169(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5042[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_170(int iParam0)
{
	return BitTest(Global_2657589[iParam0 /*466*/].f_200, 24);
}

int func_171(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 19)
		{
			if (Global_262145.f_6891[iVar1] == 251)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_6211[iVar1])
				{
					if (iParam0 == Global_262145.f_5066[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_172(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_15())
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 25;
			}
		}
	}
	return 0;
}

int func_173(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
	}
	return -1;
}

var func_174()
{
	return BitTest(Global_2683864.f_3, 4);
}

int func_175(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 6;
			}
		}
	}
	return 0;
}

int func_176(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_15())
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 5;
			}
		}
	}
	return 0;
}

var func_177()
{
	if (unk_0xFC8BFE4B41177C22(func_179()))
	{
		return func_179();
	}
	return func_178();
}

var func_178()
{
	return Global_2621446.f_2;
}

var func_179()
{
	return Global_2621446.f_3;
}

float func_180(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			return 40.5914f;
		
		case 122:
			return 50f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 50f;
				
				case 1:
					return 50f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 50f;
				
				case 1:
					return 40.4324f;
				
				case 2:
					return 42.2709f;
				
				case 3:
					return 43.6444f;
				
				case 4:
					return 37.3862f;
				
				case 5:
					return 38.6952f;
				
				case 6:
					return 40.9091f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 40.5238f;
				
				case 1:
					return 47.4321f;
				
				case 2:
					return 38.6571f;
				
				case 3:
					return 44.0641f;
				
				case 4:
					return 39.2991f;
				
				case 5:
					return 31.7484f;
				
				case 6:
					return 35.6342f;
				
				case 7:
					return 36.0072f;
				
				case 8:
					return 42.5782f;
				
				case 9:
					return 37.4336f;
				
				default:
			}
			break;
		
		case 14:
			return 50f;
	}
	return 50f;
}

Vector3 func_181(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			return 1.3773f, 0f, -88.827f;
		
		case 122:
			return -18.1605f, 2.6167f, 113.0513f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 2.3039f, 0f, -19.6903f;
				
				case 1:
					return -5.9341f, 0f, -151.6385f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -3.627f, 0f, 34.6935f;
				
				case 1:
					return -57.9221f, 0f, 58.3042f;
				
				case 2:
					return -15.4498f, 0f, 161.1361f;
				
				case 3:
					return -1.8386f, 0f, -135.0223f;
				
				case 4:
					return 0.5233f, 0f, -85.7377f;
				
				case 5:
					return -4.2364f, 0f, 173.6634f;
				
				case 6:
					return -3.74f, 0f, -30.7752f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 4.1441f, 0f, 15.6909f;
				
				case 1:
					return 5.4815f, 0f, -127.6695f;
				
				case 2:
					return -4.1889f, 0f, -15.0654f;
				
				case 3:
					return 16.4433f, 0f, -60.3988f;
				
				case 4:
					return 7.8225f, 0f, 39.2409f;
				
				case 5:
					return 2.0405f, 0f, -122.3459f;
				
				case 6:
					return 7.3382f, 0f, 157.6388f;
				
				case 7:
					return 6.481f, 0f, 172.9874f;
				
				case 8:
					return 14.0573f, 0f, 5.0622f;
				
				case 9:
					return -10.1444f, 0f, -131.4038f;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8.8196f, 0f, 57.5677f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_182(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			return -1297.855f, 84.6478f, 54.6519f;
		
		case 122:
			return -855.7661f, -2645.376f, 100.8438f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 13.4678f, -1097.781f, 30.192f;
				
				case 1:
					return 816.6221f, -2160.659f, 30.3139f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1172.111f, -1641.549f, 5.7494f;
				
				case 1:
					return 498.4758f, -226.4275f, 71.0569f;
				
				case 2:
					return -1217.632f, 364.4556f, 86.527f;
				
				case 3:
					return -2884.754f, 32.9823f, 15.1123f;
				
				case 4:
					return -948.1036f, -1260.249f, 8.228f;
				
				case 5:
					return -1614.216f, 302.0945f, 66.0158f;
				
				case 6:
					return -1380.721f, -107.9713f, 50.6998f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 903.8763f, -192.214f, 74.6401f;
				
				case 1:
					return 1419.517f, -2216.034f, 61.8467f;
				
				case 2:
					return -83.9713f, -1331.635f, 29.8383f;
				
				case 3:
					return 364.6455f, -2441.897f, 6.2607f;
				
				case 4:
					return 1237.207f, 2715.999f, 37.6424f;
				
				case 5:
					return 1019.153f, 2680.427f, 41.2254f;
				
				case 6:
					return 269.5203f, 2617.41f, 44.7054f;
				
				case 7:
					return -194.2518f, 6295.688f, 31.0991f;
				
				case 8:
					return 1682.759f, 4954.088f, 42.6891f;
				
				case 9:
					return 2325.447f, 3145.91f, 58.4284f;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 1993.697f, 3049.667f, 47.7241f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_183(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

void func_184(int iParam0)
{
	if (!unk_0x47CB3D397940E783(func_185(0)))
	{
		unk_0xDCAFFD08A08087EB(func_185(iParam0), 0, 1);
	}
}

char* func_185(int iParam0)
{
	if (func_194(Global_4718592.f_113724))
	{
		return "MenuMGIslandHeistIn";
	}
	if (iParam0 || func_157(134))
	{
		return "MenuMGHeistIn";
	}
	if (func_193())
	{
		return "MenuMGTournamentIn";
	}
	if (func_187(Global_4718592.f_166301))
	{
		return "MenuMGRemixIn";
	}
	if (func_186(Global_4718592.f_166301) && BitTest(Global_4718592.f_167679.f_2808, 2))
	{
		return "MenuSurvivalAlienIn";
	}
	return "MenuMGSelectionIn";
}

bool func_186(int iParam0)
{
	return iParam0 == 998;
}

int func_187(int iParam0)
{
	if ((((func_192(iParam0) || func_191(iParam0)) || func_190(iParam0)) || func_189(iParam0)) || func_188(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_188(int iParam0)
{
	return iParam0 == 64;
}

bool func_189(int iParam0)
{
	return iParam0 == 65;
}

bool func_190(int iParam0)
{
	return iParam0 == 69;
}

bool func_191(int iParam0)
{
	return iParam0 == 67;
}

bool func_192(int iParam0)
{
	return iParam0 == 68;
}

bool func_193()
{
	return BitTest(Global_2684801.f_1.f_2809, 12);
}

int func_194(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (Global_262145.f_29933[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_195()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139, 2);
}

void func_196()
{
	Global_2683864.f_717 = 1;
}

void func_197()
{
	unk_0x8744D2E3FC95740E(&Global_2683864, 7);
}

void func_198()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2683864, 5);
	func_199();
}

void func_199()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2683864, 8);
}

void func_200()
{
	unk_0x8744D2E3FC95740E(&(Global_2683864.f_2), 14);
}

void func_201(var uParam0)
{
	Global_2683864.f_42 = uParam0;
}

void func_202(char* sParam0)
{
	StringCopy(&(Global_2683864.f_860), sParam0, 24);
	if (func_203())
	{
		StringCopy(&(Global_1048576.f_44), sParam0, 24);
	}
}

bool func_203()
{
	return BitTest(Global_2684801.f_1.f_2809, 5);
}

void func_204(struct<13> Param0)
{
	if (func_205(Param0))
	{
		Global_2684801.f_6591 = { Param0 };
	}
}

bool func_205(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xA8F635A578C0CE07(&uParam0, 13);
}

struct<13> func_206(int iParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(iParam0, &Var0, 13);
	return Var0;
}

void func_207()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1890444[unk_0x259BE71D8A81D4FA() /*129*/].f_29), 12);
}

void func_208(int iParam0)
{
	Global_2683864.f_9 = iParam0;
}

var func_209()
{
	return Global_2683864.f_756;
}

void func_210()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1890444[unk_0x259BE71D8A81D4FA() /*129*/].f_29), 28);
}

void func_211()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_2683864.f_3), 13);
}

void func_212()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1890444[unk_0x259BE71D8A81D4FA() /*129*/].f_29), 27);
}

void func_213()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_2683864.f_3), 11);
}

void func_214(int iParam0)
{
	Global_1057409 = iParam0;
}

void func_215()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_2683864.f_3), 2);
}

void func_216()
{
	Global_2692735.f_1 = 0;
}

void func_217(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xD130E7CDEE903624(unk_0xE8466DBC1A7E794F(iParam0), "MPBitset"))
	{
		iVar0 = unk_0xE2F6FE9B61232165(unk_0xE8466DBC1A7E794F(iParam0), "MPBitset");
	}
	unk_0x0B0C9A0F9AAEB7F0(&iVar0, bParam1);
	unk_0xEE8559BBFC27701B(unk_0xE8466DBC1A7E794F(iParam0), "MPBitset", iVar0);
}

void func_218(struct<3> Param0)
{
	Global_2694513 = { Param0 };
}

Vector3 func_219(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xC450B06E5AAA0985(Global_2646729[iParam0]))
	{
		Var0 = { func_278(Global_2646729[iParam0]) };
	}
	else if (unk_0xC450B06E5AAA0985(Global_2646729.f_33[iParam0]) && !iParam0 == Global_2672505)
	{
		Var0 = { func_278(Global_2646729.f_33[iParam0]) };
	}
	if (vmag(Var0) > 0f)
	{
		return Var0;
	}
	return func_220(iParam0);
}

Vector3 func_220(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	if (Global_2644534)
	{
		if (func_277(iParam0))
		{
			Var1 = { func_276(iParam0) };
			if (vmag(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2657589[iParam0 /*466*/].f_73.f_11)
		{
			if (vmag(Global_2657589[iParam0 /*466*/].f_73.f_12) > 0f)
			{
				return Global_2657589[iParam0 /*466*/].f_73.f_12;
			}
		}
	}
	if (Global_1853910[iParam0 /*862*/].f_267.f_33 > 0)
	{
		Var1 = { func_274(func_275(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_33)) };
		if (vmag(Var1) > 0f)
		{
			return Var1;
		}
	}
	else
	{
		func_271(func_273(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { func_274(func_275(iVar0)) };
			if (vmag(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (func_270(iParam0))
	{
		Var1 = { func_223(iParam0) };
		if (vmag(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (func_222(iParam0))
	{
		iVar2 = func_221(iParam0);
		if (iVar2 > -1)
		{
			Var1 = { Global_1950108.f_542[iVar2 /*3*/] };
			if (vmag(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (!Global_2644534)
	{
		if (func_277(iParam0))
		{
			Var1 = { func_276(iParam0) };
			if (vmag(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2657589[iParam0 /*466*/].f_73.f_11)
		{
			if (vmag(Global_2657589[iParam0 /*466*/].f_73.f_12) > 0f)
			{
				return Global_2657589[iParam0 /*466*/].f_73.f_12;
			}
		}
	}
	return func_273(iParam0);
}

int func_221(int iParam0)
{
	if (iParam0 != func_15())
	{
		return Global_2657589[iParam0 /*466*/].f_321.f_16;
	}
	return -1;
}

int func_222(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_15() && (func_75(iParam0, 1, 1) || Global_2635559.f_2680))
	{
		iVar0 = BitTest(Global_2657589[iParam0 /*466*/].f_321, 1);
		return iVar0;
	}
	return 0;
}

Vector3 func_223(int iParam0)
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
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	if (iParam0 == func_15())
	{
	}
	if (func_176(iParam0))
	{
		iVar0 = func_269(iParam0);
		if (iVar0 != func_15())
		{
			if (!func_268(iVar0))
			{
				if (unk_0xFC8BFE4B41177C22(Global_2672505.f_254[iVar0 /*3*/][1]))
				{
					return unk_0xD1A6A821F5AC81DB(Global_2672505.f_254[iVar0 /*3*/][1], 0);
				}
				else
				{
					return Global_2657589[func_269(iParam0) /*466*/].f_321.f_12;
				}
			}
			else
			{
				iVar1 = func_265(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1950108.f_542[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_172(iParam0))
	{
		iVar2 = func_264(iParam0);
		if (iVar2 != func_15())
		{
			if (!func_263(iVar2))
			{
				if (unk_0xFC8BFE4B41177C22(Global_1968145[iVar2]))
				{
					return unk_0xD1A6A821F5AC81DB(Global_1968145[iVar2], 0);
				}
				else
				{
					return Global_2657589[func_269(iParam0) /*466*/].f_321.f_12;
				}
			}
			else
			{
				iVar3 = 160;
				if (!iVar3 == -1)
				{
					return Global_1950108.f_542[iVar3 /*3*/];
				}
			}
		}
	}
	else if (func_175(iParam0))
	{
		if (unk_0xFC8BFE4B41177C22(Global_2793046.f_308))
		{
			return unk_0xD1A6A821F5AC81DB(Global_2793046.f_308, 0);
		}
	}
	else if (func_262(iParam0) && !func_261(iParam0))
	{
		iVar4 = Global_2657589[iParam0 /*466*/].f_321.f_10;
		if (iVar4 != func_15())
		{
			iVar5 = func_265(iVar4);
			if (!iVar5 == -1)
			{
				return Global_1950108.f_542[iVar5 /*3*/];
			}
		}
	}
	else if (func_260(iParam0) && !func_259(iParam0))
	{
		if (func_270(iParam0) && func_258())
		{
			return Global_1950108.f_542[Global_2657589[iParam0 /*466*/].f_321.f_7 /*3*/];
		}
		iVar6 = Global_2657589[iParam0 /*466*/].f_321.f_10;
		if (iVar6 != func_15())
		{
			if (func_257(iVar6))
			{
				iVar7 = func_254(iVar6);
				if (iVar7 != -1)
				{
					return Global_1950108.f_542[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_253(iParam0))
	{
		iVar8 = func_252(iParam0);
		if (iVar8 != func_15())
		{
			if (!func_251(iVar8))
			{
				if (unk_0xFC8BFE4B41177C22(Global_2672505.f_351[iVar8]))
				{
					return unk_0xD1A6A821F5AC81DB(Global_2672505.f_351[iVar8], 0);
				}
				else
				{
					return Global_2657589[func_252(iParam0) /*466*/].f_321.f_20;
				}
			}
			else
			{
				iVar9 = func_254(iVar8);
				if (!iVar9 == -1)
				{
					return Global_1950108.f_542[iVar9 /*3*/];
				}
			}
		}
	}
	else if (func_250(iParam0))
	{
		if (unk_0xFC8BFE4B41177C22(Global_2793046.f_310))
		{
			return unk_0xD1A6A821F5AC81DB(Global_2793046.f_310, 0);
		}
	}
	else if (func_249(iParam0) && !func_248(iParam0))
	{
		iVar10 = Global_2657589[iParam0 /*466*/].f_321.f_10;
		if (iVar10 != func_15())
		{
			if (func_247(iVar10))
			{
				iVar11 = func_244(iVar10);
				if (iVar11 != -1)
				{
					return func_243(iVar11);
				}
			}
		}
	}
	else if (func_242(iParam0) && !func_241(iParam0))
	{
		iVar12 = Global_2657589[iParam0 /*466*/].f_321.f_10;
		if (iVar12 != func_15())
		{
			if (func_240(iVar12))
			{
				iVar13 = func_237(iVar12);
				if (iVar13 != -1)
				{
					return Global_1950108.f_542[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_236(iParam0, 0))
	{
		iVar14 = func_235(iParam0);
		if (iVar14 != func_15())
		{
			if (!func_234(iVar14))
			{
				if (unk_0xFC8BFE4B41177C22(Global_2672505.f_384[iVar14]))
				{
					return unk_0xD1A6A821F5AC81DB(Global_2672505.f_384[iVar14], 0);
				}
				else
				{
					return Global_1894573[func_235(iParam0) /*608*/].f_590;
				}
			}
			else
			{
				iVar15 = func_237(iVar14);
				if (!iVar15 == -1)
				{
					return Global_1950108.f_542[iVar15 /*3*/];
				}
			}
		}
	}
	else if (func_233(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	else if (func_232(iParam0))
	{
		iVar16 = func_229(iParam0);
		if (iVar16 != func_15())
		{
			if (unk_0xFC8BFE4B41177C22(Global_2672505.f_417[iVar16]))
			{
				return unk_0xD1A6A821F5AC81DB(Global_2672505.f_417[iVar16], 0);
			}
			else
			{
				return Global_1914091[iVar16 /*297*/].f_51;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (func_249(iParam0))
	{
		return func_243(Global_2657589[iParam0 /*466*/].f_321.f_7);
	}
	if (func_224(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1950108.f_542[Global_2657589[iParam0 /*466*/].f_321.f_7 /*3*/];
}

int func_224(int iParam0)
{
	if (((func_228(iParam0) || func_227(iParam0)) || func_226(iParam0)) || func_225(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_225(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 19;
			}
		}
	}
	return 0;
}

int func_226(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 15;
			}
		}
	}
	return 0;
}

int func_227(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 16;
			}
		}
	}
	return 0;
}

int func_228(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 14;
			}
		}
	}
	return 0;
}

int func_229(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_15())
	{
		return iParam0;
	}
	if (func_231(iParam0) != -1)
	{
		iVar0 = func_173(func_231(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_230(iParam0, 0))
			{
				return func_22(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_15();
		}
		return Global_2657589[iParam0 /*466*/].f_321.f_10;
	}
	return func_15();
}

bool func_230(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_104(iParam0))
		{
			return 0;
		}
	}
	return Global_1894573[iParam0 /*608*/].f_10 != func_15();
}

int func_231(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7;
		}
		else if (((Global_1575060 || Global_2635559.f_2680) && iParam0 == unk_0x259BE71D8A81D4FA()) && func_75(iParam0, 1, 0))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7;
		}
	}
	return -1;
}

int func_232(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 20;
			}
		}
		else if (((Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_1575060) && iParam0 == unk_0x259BE71D8A81D4FA()) && func_75(iParam0, 1, 0))
		{
			return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 20;
		}
	}
	return 0;
}

int func_233(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 13;
			}
		}
	}
	return 0;
}

int func_234(int iParam0)
{
	if (iParam0 != func_15())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_3, 4);
	}
	return 0;
}

int func_235(int iParam0)
{
	if (iParam0 == func_15())
	{
		return iParam0;
	}
	return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_236(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0x4B423FAA24E8ABF0(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_15())
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 12;
			}
		}
	}
	return 0;
}

int func_237(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_15())
	{
		iVar0 = func_239(iParam0);
		if (iVar0 != 0)
		{
			return func_238(iVar0);
		}
	}
	return -1;
}

int func_238(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_239(int iParam0)
{
	if (iParam0 != func_15())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_310;
	}
	return 0;
}

int func_240(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (Global_1853910[iParam0 /*862*/].f_267.f_310 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_241(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_242(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_242(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

Vector3 func_243(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 750.5f, -1322.3f, 26.2802f;
		
		case 103:
			return 331.9f, -974.9f, 30f;
		
		case 104:
			return -146f, -1270f, 28.3088f;
		
		case 105:
			return -17.7f, 225.7f, 106.7566f;
		
		case 106:
			return 894.4f, -2106.4f, 29.4768f;
		
		case 107:
			return -668f, -2431.5f, 12.9444f;
		
		case 108:
			return 213.4f, -3166.6f, 4.7903f;
		
		case 109:
			return 366.6f, 237.6f, 104.9f;
		
		case 110:
			return -1275.3f, -666.8f, 25.6332f;
		
		case 111:
			return -1188.8f, -1156.9f, 4.6582f;
		
		default:
	}
	return Global_1950108.f_542[iParam0 /*3*/];
}

int func_244(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_15())
	{
		iVar0 = func_246(iParam0);
		if (iVar0 != 0)
		{
			return func_245(iVar0);
		}
	}
	return -1;
}

int func_245(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_246(int iParam0)
{
	if (iParam0 != func_15())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_353;
	}
	return 0;
}

int func_247(int iParam0)
{
	if (iParam0 != func_15())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_353 != 0;
	}
	return 0;
}

int func_248(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_249(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_249(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

int func_250(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 10;
			}
		}
	}
	return 0;
}

int func_251(int iParam0)
{
	if (iParam0 != func_15())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_2, 6);
	}
	return 0;
}

int func_252(int iParam0)
{
	if (iParam0 == func_15())
	{
		return iParam0;
	}
	return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_253(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_15())
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 8;
			}
		}
	}
	return 0;
}

int func_254(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_15())
	{
		return -1;
	}
	iVar0 = func_256(iParam0);
	if (!iVar0 == 0)
	{
		return func_255(iVar0);
	}
	return -1;
}

int func_255(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 89;
			break;
		
		case 2:
			return 90;
			break;
		
		case 3:
			return 91;
			break;
		
		case 4:
			return 92;
			break;
		
		case 5:
			return 93;
			break;
		
		case 6:
			return 94;
			break;
		
		case 7:
			return 95;
			break;
		
		case 8:
			return 96;
			break;
		
		case 9:
			return 97;
			break;
	}
	return -1;
}

int func_256(int iParam0)
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	return Global_1853910[iParam0 /*862*/].f_267.f_300;
}

int func_257(int iParam0)
{
	if (iParam0 != func_15())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_300 != 0;
	}
	return 0;
}

int func_258()
{
	if (BitTest(Global_1950108.f_2, 13) || Global_1950108.f_3347)
	{
		return 1;
	}
	return 0;
}

int func_259(int iParam0)
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	if (func_260(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_260(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 9;
			}
		}
	}
	return 0;
}

int func_261(int iParam0)
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	if (func_262(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_262(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 4;
			}
		}
	}
	return 0;
}

int func_263(int iParam0)
{
	if (iParam0 != func_15())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_5, 26);
	}
	return 0;
}

int func_264(int iParam0)
{
	if (iParam0 == func_15())
	{
		return iParam0;
	}
	return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_265(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_15())
	{
		return -1;
	}
	iVar0 = func_267(iParam0);
	if (!iVar0 == 0)
	{
		return func_266(iVar0);
	}
	return -1;
}

int func_266(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 22;
			break;
		
		case 2:
			return 23;
			break;
		
		case 3:
			return 24;
			break;
		
		case 4:
			return 25;
			break;
		
		case 5:
			return 26;
			break;
		
		case 6:
			return 27;
			break;
		
		case 7:
			return 28;
			break;
		
		case 8:
			return 29;
			break;
		
		case 9:
			return 30;
			break;
		
		case 10:
			return 31;
			break;
		
		case 11:
			return 32;
			break;
		
		case 12:
			return 33;
			break;
		
		case 13:
			return 34;
			break;
		
		case 14:
			return 35;
			break;
		
		case 15:
			return 36;
			break;
		
		case 16:
			return 37;
			break;
		
		case 17:
			return 38;
			break;
		
		case 18:
			return 39;
			break;
		
		case 19:
			return 40;
			break;
		
		case 20:
			return 41;
			break;
		
		case 32:
			return 159;
			break;
		
		case 21:
			return 70;
			break;
		
		case 22:
			return 71;
			break;
		
		case 23:
			return 72;
			break;
		
		case 24:
			return 73;
			break;
		
		case 25:
			return 74;
			break;
		
		case 26:
			return 75;
			break;
		
		case 27:
			return 76;
			break;
		
		case 28:
			return 77;
			break;
		
		case 29:
			return 78;
			break;
		
		case 30:
			return 79;
			break;
		
		case 31:
			return 80;
			break;
	}
	return -1;
}

int func_267(int iParam0)
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	return Global_1853910[iParam0 /*862*/].f_267.f_193[5 /*13*/];
}

int func_268(int iParam0)
{
	if (iParam0 != func_15())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321, 6);
	}
	return 0;
}

int func_269(int iParam0)
{
	if (iParam0 == func_15())
	{
		return iParam0;
	}
	return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_270(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
		else if ((Global_1575060 && iParam0 == unk_0x259BE71D8A81D4FA()) && func_75(iParam0, 1, 0))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

void func_271(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_272(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 34;
	iVar1 = 43;
	while (iVar0 <= iVar1)
	{
		if (func_272(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 61;
	iVar1 = 65;
	while (iVar0 <= iVar1)
	{
		if (func_272(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_272(Param0, iVar0, 0))
	{
		if (Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_33 > 0)
		{
			*uParam1 = Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_33;
		}
		else if (Global_2635145.f_1 > 0)
		{
			*uParam1 = Global_2635145.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
	iVar0 = 17;
	if (func_272(Param0, iVar0, 0))
	{
		if (Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_33 > 0)
		{
			*uParam1 = Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_33;
		}
		else if (Global_2635145.f_1 > 0)
		{
			*uParam1 = Global_2635145.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
}

int func_272(struct<3> Param0, int iParam1, float fParam2)
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var2[3];
	int iVar3;
	
	if (iParam1 != 999)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_1312228[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_2 > Global_1312228[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3.f_2)
			{
				Var1[iVar3 /*3*/] = { Global_1312228[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
				Var2[iVar3 /*3*/] = { Global_1312228[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
			}
			else
			{
				Var1[iVar3 /*3*/] = { Global_1312228[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
				Var2[iVar3 /*3*/] = { Global_1312228[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
			}
			Var1[iVar3 /*3*/].f_2 = (Var1[iVar3 /*3*/].f_2 + fParam2);
			Var2[iVar3 /*3*/].f_2 = (Var2[iVar3 /*3*/].f_2 - fParam2);
			iVar3++;
		}
		if (((Global_1312228[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6 != 0f && unk_0x26715B0ED6702C87(Param0, Var2[0 /*3*/], Var1[0 /*3*/], Global_1312228[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6, 0, 1)) || (Global_1312228[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && unk_0x26715B0ED6702C87(Param0, Var2[1 /*3*/], Var1[1 /*3*/], Global_1312228[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6, 0, 1))) || (Global_1312228[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && unk_0x26715B0ED6702C87(Param0, Var2[2 /*3*/], Var1[2 /*3*/], Global_1312228[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6, 0, 1)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_272(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_272(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_272(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_272(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_272(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_272(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_272(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_272(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_272(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_272(Param0, 8, fParam2))
		{
			return 1;
		}
		if (func_272(Param0, 17, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_273(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

Vector3 func_274(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 1:
			Var0 = { -773.4775f, 310.6321f, 84.6981f };
			break;
		
		case 2:
			Var0 = { -252.5713f, -949.9199f, 30.221f };
			break;
		
		case 3:
			Var0 = { -1443.094f, -544.7684f, 33.7424f };
			break;
		
		case 4:
			Var0 = { -913.85f, -455.1392f, 38.5999f };
			break;
		
		case 5:
			Var0 = { -47.3145f, -585.9766f, 36.9593f };
			break;
		
		case 6:
			Var0 = { -932.7474f, -383.9246f, 37.9613f };
			break;
		
		case 7:
			Var0 = { -619.1315f, 37.8841f, 42.5883f };
			break;
		
		case 8:
			Var0 = { 284.9614f, -159.9891f, 63.6221f };
			break;
		
		case 9:
			Var0 = { 2.8889f, 35.7762f, 70.5349f };
			break;
		
		case 10:
			Var0 = { 9.74f, 84.6906f, 77.3975f };
			break;
		
		case 11:
			Var0 = { -512.1465f, 111.2223f, 62.351f };
			break;
		
		case 12:
			Var0 = { -197.3405f, 88.1053f, 68.7422f };
			break;
		
		case 13:
			Var0 = { -628.3212f, 165.8364f, 60.1651f };
			break;
		
		case 14:
			Var0 = { -973.3757f, -1429.425f, 6.6791f };
			break;
		
		case 15:
			Var0 = { -829.1362f, -855.0104f, 18.6297f };
			break;
		
		case 16:
			Var0 = { -757.5739f, -755.5591f, 25.5697f };
			break;
		
		case 17:
			Var0 = { -45.1289f, -57.0925f, 62.2531f };
			break;
		
		case 18:
			Var0 = { -206.7293f, 184.142f, 79.3279f };
			break;
		
		case 19:
			Var0 = { -811.7045f, -984.1961f, 13.1538f };
			break;
		
		case 20:
			Var0 = { -664.0032f, -853.6744f, 23.4325f };
			break;
		
		case 21:
			Var0 = { -1534.025f, -324.5247f, 46.5237f };
			break;
		
		case 22:
			Var0 = { -1561.381f, -412.1974f, 41.389f };
			break;
		
		case 23:
			Var0 = { -1608.851f, -429.184f, 39.439f };
			break;
		
		case 24:
			Var0 = { 964.3583f, -1034.199f, 39.8303f };
			break;
		
		case 25:
			Var0 = { 894.2868f, -885.5679f, 26.1212f };
			break;
		
		case 26:
			Var0 = { 821.1741f, -924.1658f, 25.1998f };
			break;
		
		case 27:
			Var0 = { 759.7933f, -759.8209f, 25.759f };
			break;
		
		case 28:
			Var0 = { 844.7289f, -1164.1f, 24.2681f };
			break;
		
		case 29:
			Var0 = { 526.2521f, -1604.613f, 28.2625f };
			break;
		
		case 30:
			Var0 = { 572.0462f, -1570.736f, 27.4904f };
			break;
		
		case 31:
			Var0 = { 722.2852f, -1190.617f, 23.282f };
			break;
		
		case 32:
			Var0 = { 497.6212f, -1494.084f, 28.2893f };
			break;
		
		case 33:
			Var0 = { 480.3127f, -1549.937f, 28.2828f };
			break;
		
		case 34:
			Var0 = { -68.702f, 6426.148f, 30.439f };
			break;
		
		case 35:
			Var0 = { -247.4374f, 6240.294f, 30.4892f };
			break;
		
		case 36:
			Var0 = { 2554.165f, 4668.059f, 33.0233f };
			break;
		
		case 37:
			Var0 = { 2461.22f, 1589.255f, 32.0443f };
			break;
		
		case 38:
			Var0 = { -2203.335f, 4244.427f, 47.3305f };
			break;
		
		case 39:
			Var0 = { 218.0665f, 2601.817f, 44.7668f };
			break;
		
		case 40:
			Var0 = { 186.1719f, 2786.343f, 45.0144f };
			break;
		
		case 41:
			Var0 = { 642.0746f, 2791.729f, 40.9795f };
			break;
		
		case 42:
			Var0 = { -1130.938f, 2701.133f, 17.8004f };
			break;
		
		case 43:
			Var0 = { -10.944f, -1646.76f, 28.3125f };
			break;
		
		case 44:
			Var0 = { 1024.263f, -2398.404f, 29.1261f };
			break;
		
		case 45:
			Var0 = { 870.8577f, -2232.323f, 29.5508f };
			break;
		
		case 46:
			Var0 = { -663.8541f, -2380.389f, 12.9446f };
			break;
		
		case 47:
			Var0 = { -1088.616f, -2235.098f, 12.2182f };
			break;
		
		case 48:
			Var0 = { -342.5126f, -1468.675f, 29.6107f };
			break;
		
		case 49:
			Var0 = { -1241.54f, -259.8841f, 37.9445f };
			break;
		
		case 50:
			Var0 = { 899.8448f, -147.528f, 75.5674f };
			break;
		
		case 51:
			Var0 = { -1405.411f, 526.8572f, 122.8361f };
			break;
		
		case 52:
			Var0 = { 1341.552f, -1578.037f, 53.4443f };
			break;
		
		case 53:
			Var0 = { -105.7029f, 6528.539f, 29.1719f };
			break;
		
		case 54:
			Var0 = { -302.3985f, 6327.434f, 31.8918f };
			break;
		
		case 55:
			Var0 = { -15.258f, 6557.378f, 32.2454f };
			break;
		
		case 56:
			Var0 = { 1899.673f, 3773.178f, 31.8829f };
			break;
		
		case 57:
			Var0 = { 1662.121f, 4776.317f, 41.0075f };
			break;
		
		case 58:
			Var0 = { -178.2278f, 490.886f, 134.0466f };
			break;
		
		case 59:
			Var0 = { 339.5743f, 439.7083f, 145.5896f };
			break;
		
		case 60:
			Var0 = { -764.6163f, 618.3144f, 137.5536f };
			break;
		
		case 61:
			Var0 = { -679.5461f, 592.5162f, 139.693f };
			break;
		
		case 62:
			Var0 = { 124.4571f, 551.8877f, 181.658f };
			break;
		
		case 63:
			Var0 = { -563.7349f, 689.099f, 151.6596f };
			break;
		
		case 64:
			Var0 = { -743.0927f, 590.0371f, 140.9221f };
			break;
		
		case 65:
			Var0 = { -861.252f, 684.8923f, 146.2643f };
			break;
		
		case 66:
			Var0 = { -1292.456f, 440.9454f, 93.7572f };
			break;
		
		case 67:
			Var0 = { 369.5891f, 417.4813f, 136.8344f };
			break;
		
		case 68:
			Var0 = { -1581.501f, -558.2578f, 33.9528f };
			break;
		
		case 69:
			Var0 = { -1379.546f, -499.1783f, 32.1574f };
			break;
		
		case 70:
			Var0 = { -117.5296f, -605.7157f, 35.2857f };
			break;
		
		case 71:
			Var0 = { -67.0943f, -802.4415f, 43.2273f };
			break;
		
		case 72:
			Var0 = { 254.1892f, -1809.183f, 26.1805f };
			break;
		
		case 73:
			Var0 = { -1472.278f, -920.0677f, 8.9683f };
			break;
		
		case 74:
			Var0 = { 38.9478f, -1026.629f, 28.6354f };
			break;
		
		case 75:
			Var0 = { 46.903f, 2789.825f, 57.1124f };
			break;
		
		case 76:
			Var0 = { -342.3246f, 6065.316f, 30.4895f };
			break;
		
		case 77:
			Var0 = { 1737.878f, 3709.088f, 33.1348f };
			break;
		
		case 78:
			Var0 = { 939.7161f, -1459.204f, 30.467f };
			break;
		
		case 79:
			Var0 = { 189.7624f, 309.7488f, 104.4714f };
			break;
		
		case 80:
			Var0 = { -21.9593f, -191.3618f, 51.5599f };
			break;
		
		case 81:
			Var0 = { 2472.22f, 4110.493f, 36.9629f };
			break;
		
		case 82:
			Var0 = { -39.3286f, 6420.603f, 30.7017f };
			break;
		
		case 83:
			Var0 = { -1134.762f, -1568.848f, 3.4077f };
			break;
	}
	return Var0;
}

int func_275(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 61:
		case 83:
		case 84:
		case 85:
			return 1;
			break;
		
		case 5:
		case 6:
			return 2;
			break;
		
		case 7:
		case 34:
		case 62:
			return 3;
			break;
		
		case 35:
		case 36:
		case 37:
			return 4;
			break;
		
		case 38:
		case 39:
		case 65:
			return 5;
			break;
		
		case 40:
		case 41:
		case 63:
			return 6;
			break;
		
		case 42:
		case 43:
		case 64:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 14:
			return 14;
			break;
		
		case 15:
			return 15;
			break;
		
		case 16:
			return 16;
			break;
		
		case 17:
			return 17;
			break;
		
		case 18:
			return 18;
			break;
		
		case 19:
			return 19;
			break;
		
		case 20:
			return 20;
			break;
		
		case 21:
			return 21;
			break;
		
		case 22:
			return 22;
			break;
		
		case 23:
			return 23;
			break;
		
		case 24:
			return 24;
			break;
		
		case 25:
			return 25;
			break;
		
		case 26:
			return 26;
			break;
		
		case 27:
			return 27;
			break;
		
		case 28:
			return 28;
			break;
		
		case 29:
			return 29;
			break;
		
		case 30:
			return 30;
			break;
		
		case 31:
			return 31;
			break;
		
		case 32:
			return 32;
			break;
		
		case 33:
			return 33;
			break;
		
		case 44:
			return 34;
			break;
		
		case 45:
			return 35;
			break;
		
		case 46:
			return 36;
			break;
		
		case 47:
			return 37;
			break;
		
		case 48:
			return 38;
			break;
		
		case 49:
			return 39;
			break;
		
		case 50:
			return 40;
			break;
		
		case 51:
			return 41;
			break;
		
		case 52:
			return 42;
			break;
		
		case 53:
			return 43;
			break;
		
		case 54:
			return 44;
			break;
		
		case 55:
			return 45;
			break;
		
		case 56:
			return 46;
			break;
		
		case 57:
			return 47;
			break;
		
		case 58:
			return 48;
			break;
		
		case 59:
			return 49;
			break;
		
		case 60:
			return 50;
			break;
		
		case 66:
			return 51;
			break;
		
		case 67:
			return 52;
			break;
		
		case 68:
			return 53;
			break;
		
		case 69:
			return 54;
			break;
		
		case 70:
			return 55;
			break;
		
		case 71:
			return 56;
			break;
		
		case 72:
			return 57;
			break;
		
		case 73:
			return 58;
			break;
		
		case 74:
			return 59;
			break;
		
		case 75:
			return 60;
			break;
		
		case 76:
			return 61;
			break;
		
		case 77:
			return 62;
			break;
		
		case 78:
			return 63;
			break;
		
		case 79:
			return 64;
			break;
		
		case 80:
			return 65;
			break;
		
		case 81:
			return 66;
			break;
		
		case 82:
			return 67;
			break;
		
		case 87:
		case 103:
		case 104:
		case 105:
			return 68;
			break;
		
		case 88:
		case 106:
		case 107:
		case 108:
			return 69;
			break;
		
		case 89:
		case 109:
		case 110:
		case 111:
			return 70;
			break;
		
		case 90:
		case 112:
		case 113:
		case 114:
			return 71;
			break;
		
		case 91:
			return 72;
			break;
		
		case 92:
			return 73;
			break;
		
		case 93:
			return 74;
			break;
		
		case 94:
			return 75;
			break;
		
		case 95:
			return 76;
			break;
		
		case 96:
			return 77;
			break;
		
		case 97:
			return 78;
			break;
		
		case 98:
			return 79;
			break;
		
		case 99:
			return 80;
			break;
		
		case 100:
			return 81;
			break;
		
		case 101:
			return 82;
			break;
		
		case 102:
			return 83;
			break;
	}
	return 0;
}

Vector3 func_276(int iParam0)
{
	return Global_2657589[iParam0 /*466*/].f_73.f_7;
}

int func_277(int iParam0)
{
	if (Global_2657589[iParam0 /*466*/].f_73.f_6 != -1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_278(var uParam0)
{
	var uVar0;
	
	switch (unk_0x6AEAF32EC173BB39(uParam0))
	{
		case 1:
		case 2:
		case 3:
			uVar0 = unk_0xA143F1936B350BD0(uParam0);
			if (unk_0xFC8BFE4B41177C22(uVar0))
			{
				return unk_0xD1A6A821F5AC81DB(iVar0, 0);
			}
			break;
	}
	return unk_0x3CF9D442F2C902BD(uParam0);
}

void func_279()
{
	Global_2683864.f_756 = 1;
}

var func_280()
{
	return Global_2683864.f_735;
}

var func_281()
{
	return BitTest(Global_2683864.f_2, 11);
}

void func_282(var uParam0)
{
	if (!func_460(uParam0))
	{
		func_453(uParam0);
		func_452(uParam0);
	}
	func_292(uParam0);
	if (!func_291(uParam0))
	{
		func_284(uParam0);
		func_283(uParam0);
	}
}

void func_283(var uParam0)
{
	unk_0x8744D2E3FC95740E(&(uParam0->f_726.f_4), uParam0->f_726.f_1);
}

void func_284(var uParam0)
{
	if (Local_161.f_4.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_161.f_4.f_1);
	}
	switch (uParam0->f_726.f_1)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (!unk_0x834C960822A4683F())
			{
				func_289(uParam0, 1, 0);
			}
			func_288(uParam0, 0);
			func_287(uParam0);
			func_285(uParam0);
			break;
		
		case 5:
			break;
	}
}

void func_285(var uParam0)
{
	func_286(&(uParam0->f_741.f_1), 0, 1);
	unk_0xD7C0EA10993D3214(0, 0);
}

void func_286(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0x78411E34CF90EA8C(*uParam0))
	{
		if (bParam2)
		{
			unk_0xE37AF9002E782BA0(0, 0, 3000, 1, iParam1, 0);
		}
		if (unk_0xBC886554B5888A64(*uParam0))
		{
			unk_0x4CBC5D1BC117616B(*uParam0, 0);
		}
		unk_0x85E6A1E36B5E2E4D(*uParam0, iParam1);
	}
	if (uParam0->f_23)
	{
		unk_0xF3E3EA936C653F22();
		uParam0->f_23 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0f;
}

void func_287(var uParam0)
{
	if (unk_0xA0C7B98BCF1EEF9E(uParam0->f_712))
	{
		unk_0xD314260005F064BF(&(uParam0->f_712));
	}
}

void func_288(var uParam0, int iParam1)
{
	if (uParam0->f_704 != iParam1)
	{
	}
	uParam0->f_704 = iParam1;
}

void func_289(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if ((uParam0->f_1092 && !func_290(unk_0x259BE71D8A81D4FA())) || iParam2)
		{
			func_85(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), false);
			uParam0->f_1092 = 0;
		}
	}
	else
	{
		func_85(unk_0x259BE71D8A81D4FA(), 0, 0, 0);
		unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), true);
		uParam0->f_1092 = 1;
	}
}

int func_290(int iParam0)
{
	if (iParam0 != func_15() && func_75(iParam0, 1, 1))
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321, 3);
	}
	return 0;
}

bool func_291(var uParam0)
{
	return !BitTest(uParam0->f_726.f_4, uParam0->f_726.f_1);
}

void func_292(var uParam0)
{
	if (Local_161.f_4.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_161.f_4.f_2);
	}
	switch (uParam0->f_726)
	{
		case 0:
			if (!uParam0->f_1091)
			{
				func_451(uParam0);
			}
			break;
		
		case 1:
			func_451(uParam0);
			break;
		
		case 2:
			if (func_450(uParam0) && func_449())
			{
				func_451(uParam0);
			}
			break;
		
		case 3:
			func_357(uParam0);
			if (func_356(uParam0))
			{
				func_451(uParam0);
			}
			break;
		
		case 4:
			func_355(uParam0);
			func_352(uParam0);
			func_357(uParam0);
			func_335(uParam0);
			func_334(uParam0);
			func_329(uParam0);
			func_298(uParam0);
			func_294();
			func_81(uParam0, 0);
			if (!func_356(uParam0))
			{
				func_293(uParam0);
			}
			break;
		
		case 5:
			break;
	}
}

void func_293(var uParam0)
{
	int iVar0;
	
	uParam0->f_726.f_1 = uParam0->f_726;
	unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_726.f_4), uParam0->f_726.f_1);
	unk_0x8744D2E3FC95740E(&(uParam0->f_726.f_3), uParam0->f_726.f_1);
	iVar0 = uParam0->f_726;
	iVar0 = (iVar0 - 1);
	uParam0->f_726 = iVar0;
	if (uParam0->f_726 == 0)
	{
		uParam0->f_726 = 1;
	}
}

void func_294()
{
	unk_0x0C9B2F8C2BD128C2();
	unk_0x4EB223432F8FA0A0(18);
	unk_0x43AE50D2A33F6E2A();
	func_297(0);
	unk_0x66EFB3D6110055C4(0, 199, 1);
	unk_0x513E63C787EE96A7();
	func_295();
	unk_0xD10838CEA97E4725(19);
	func_152(11, -1);
}

void func_295()
{
	unk_0x903DAFB544C5CA0D(unk_0x259BE71D8A81D4FA(), 0);
	func_296();
}

void func_296()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x762604C40829DB72(unk_0xB23E0F9B63D009A8(iVar0)))
		{
			iVar1 = unk_0xB23E0F9B63D009A8(iVar0);
			if (iVar1 != func_15() && iVar1 != unk_0x259BE71D8A81D4FA())
			{
				unk_0x903DAFB544C5CA0D(iVar1, 0);
			}
		}
		iVar0++;
	}
}

void func_297(int iParam0)
{
	if (func_58())
	{
		return;
	}
	if (!Global_20383.f_1 == 1)
	{
		if (func_59(0))
		{
			func_54(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 2);
	}
}

void func_298(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	char cVar3[24];
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 53)
	{
		if (func_328(uParam0, iVar0) && !func_327(uParam0, iVar0))
		{
			if (func_301(uParam0, iVar0))
			{
				iVar1 = iVar0;
			}
			else
			{
				Jump @123; //curOff = 61
				if (func_327(uParam0, iVar0))
				{
					Var2 = { func_300() };
					StringCopy(&cVar3, func_299(iVar0), 24);
					if (!unk_0xD6F9DEE4765092A9(&Var2) && unk_0x1B79E937E91F40C3(&Var2, &cVar3))
					{
						iVar1 = iVar0;
					}
					else
					{
						iVar0++;
					}
					if (Local_176.f_6 != iVar1)
					{
						Local_176.f_6 = iVar1;
					}
				}

char* func_299(int iParam0)
{
	if (Local_161.f_43.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_161.f_43.f_1);
		return StackVal;
	}
	return "";
}

struct<6> func_300()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21725 == 4)
	{
		return Global_21344;
	}
	return Var0;
}

int func_301(var uParam0, int iParam1)
{
	struct<2> Var0;
	
	if (!func_10())
	{
		StringCopy(&Var0, func_299(iParam1), 16);
		if (!unk_0xD6F9DEE4765092A9(&Var0))
		{
			func_323(&(Local_176.f_7), func_326(iParam1), func_325(iParam1), func_324(iParam1), 0, 1);
			if (func_303(&(Local_176.f_7), func_322(iParam1), &Var0, 9, 0, 0, 0))
			{
				func_302(uParam0, iParam1);
				return 1;
			}
		}
	}
	return 0;
}

void func_302(var uParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Local_176.f_3[(iParam1 / 32)]), (iParam1 % 32));
	if (Local_161.f_43.f_7 != 0)
	{
		Stack.Push(iParam1);
		Call_Loc(Local_161.f_43.f_7);
	}
}

bool func_303(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_321(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_304(sParam2, iParam3, 0);
}

int func_304(char* sParam0, int iParam1, bool bParam2)
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
					func_320();
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
		if (func_319(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_318();
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
				func_310();
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
				if (func_309())
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
			if (func_55())
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
			func_308();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_307();
		func_305();
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
		func_320();
	}
	return 0;
}

void func_305()
{
	if (!func_306())
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

int func_306()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_15())
	{
		return 0;
	}
	if (func_119(unk_0x259BE71D8A81D4FA()))
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

void func_307()
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

void func_308()
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

int func_309()
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

void func_310()
{
	if (func_317(14))
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
		Global_20383 = func_311();
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

var func_311()
{
	func_312();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_312()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_315(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_314(unk_0x4A8C381C258A124D());
			if (func_313(iVar0) && (!func_317(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_313(Global_113648.f_2365.f_539.f_4321))
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

bool func_313(int iParam0)
{
	return iParam0 < 3;
}

int func_314(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_315(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_315(int iParam0)
{
	if (func_313(iParam0))
	{
		return func_316(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_316(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

bool func_317(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_318()
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

bool func_319(int iParam0, int iParam1)
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

void func_320()
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

void func_321(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

char* func_322(var uParam0)
{
	if (Local_161.f_43.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_161.f_43.f_2);
		return StackVal;
	}
	return "";
}

void func_323(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
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

char* func_324(var uParam0)
{
	if (Local_161.f_43.f_5 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_161.f_43.f_5);
		return StackVal;
	}
	return "";
}

int func_325(var uParam0)
{
	if (Local_161.f_43.f_4 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_161.f_43.f_4);
		return StackVal;
	}
	return 0;
}

int func_326(var uParam0)
{
	if (Local_161.f_43.f_3 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_161.f_43.f_3);
		return StackVal;
	}
	return -1;
}

bool func_327(var uParam0, int iParam1)
{
	return BitTest(Local_176.f_3[(iParam1 / 32)], (iParam1 % 32));
}

var func_328(var uParam0, int iParam1)
{
	return BitTest(Local_176[(iParam1 / 32)], (iParam1 % 32));
}

void func_329(var uParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_332(uParam0);
	if (((uParam0->f_741.f_62 || func_331(uParam0)) || uParam0->f_1086 != -1) || uParam0->f_1093)
	{
		return;
	}
	if (Local_161.f_28 != 0)
	{
		Stack.Push(uParam0);
		Stack.Push(uVar0);
		Stack.Push(&uVar1);
		Call_Loc(Local_161.f_28);
	}
	if (BitTest(uVar1, 0))
	{
		if (Local_161.f_3 != 0)
		{
			Stack.Push(uParam0);
			Call_Loc(Local_161.f_3);
		}
		else
		{
			func_330(uParam0);
		}
	}
}

void func_330(var uParam0)
{
	uParam0->f_726.f_5 = 0;
}

var func_331(var uParam0)
{
	return uParam0->f_820;
}

int func_332(var uParam0)
{
	if (unk_0xA43CD45F18522E3F())
	{
		return -1;
	}
	if (unk_0x4D9174D8796EA622())
	{
		return -1;
	}
	if (unk_0x875A214D5EBCA509(2, 188) || func_333(uParam0, 0, 0))
	{
		return 0;
	}
	else if (unk_0x875A214D5EBCA509(2, 187) || func_333(uParam0, 0, 1))
	{
		return 1;
	}
	else if (unk_0x875A214D5EBCA509(2, 189) || func_333(uParam0, 0, 2))
	{
		return 2;
	}
	else if (unk_0x875A214D5EBCA509(2, 190) || func_333(uParam0, 0, 3))
	{
		return 3;
	}
	else if (unk_0x2645430E708CBFAC(2, 201))
	{
		return 4;
	}
	else if (unk_0x2645430E708CBFAC(2, 202))
	{
		return 5;
	}
	else if (unk_0x2645430E708CBFAC(2, 203))
	{
		return 6;
	}
	else if (unk_0x2645430E708CBFAC(2, 204))
	{
		return 7;
	}
	else if (unk_0x875A214D5EBCA509(2, 205))
	{
		return 8;
	}
	else if (unk_0x875A214D5EBCA509(2, 206))
	{
		return 9;
	}
	else if (unk_0x875A214D5EBCA509(2, 207))
	{
		return 10;
	}
	else if (unk_0x875A214D5EBCA509(2, 208))
	{
		return 11;
	}
	else if (unk_0x875A214D5EBCA509(2, 209))
	{
		return 12;
	}
	else if (unk_0x875A214D5EBCA509(2, 210))
	{
		return 13;
	}
	else if (unk_0x875A214D5EBCA509(2, 199))
	{
		return 14;
	}
	else if (unk_0x875A214D5EBCA509(2, 217))
	{
		return 15;
	}
	return -1;
}

int func_333(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	switch (iParam1)
	{
		case 0:
			iVar1 = floor((unk_0xB504E1B50AA21FC5(2, 218) * 127f));
			iVar2 = floor((unk_0xB504E1B50AA21FC5(2, 219) * 127f));
			switch (bParam2)
			{
				case 0:
					if (iVar2 <= -110)
					{
						if (!BitTest(uParam0->f_820.f_1, bParam2))
						{
							iVar0 = 1;
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_820.f_1), bParam2);
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_820.f_1), bParam2);
					}
					break;
				
				case 1:
					if (iVar2 >= 110)
					{
						if (!BitTest(uParam0->f_820.f_1, bParam2))
						{
							iVar0 = 1;
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_820.f_1), bParam2);
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_820.f_1), bParam2);
					}
					break;
				
				case 2:
					if (iVar1 <= -110)
					{
						if (!BitTest(uParam0->f_820.f_1, bParam2))
						{
							iVar0 = 1;
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_820.f_1), bParam2);
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_820.f_1), bParam2);
					}
					break;
				
				case 3:
					if (iVar1 >= 110)
					{
						if (!BitTest(uParam0->f_820.f_1, bParam2))
						{
							iVar0 = 1;
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_820.f_1), bParam2);
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_820.f_1), bParam2);
					}
					break;
			}
			break;
		
		case 1:
			iVar1 = floor((unk_0xB504E1B50AA21FC5(2, 220) * 127f));
			iVar2 = floor((unk_0xB504E1B50AA21FC5(2, 221) * 127f));
			switch (bParam2)
			{
				case 0:
					if (iVar2 <= -110)
					{
						if (!BitTest(uParam0->f_820.f_2, bParam2))
						{
							iVar0 = 1;
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_820.f_2), bParam2);
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_820.f_2), bParam2);
					}
					break;
				
				case 1:
					if (iVar2 >= 110)
					{
						if (!BitTest(uParam0->f_820.f_2, bParam2))
						{
							iVar0 = 1;
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_820.f_2), bParam2);
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_820.f_2), bParam2);
					}
					break;
				
				case 2:
					if (iVar1 <= -110)
					{
						if (!BitTest(uParam0->f_820.f_2, bParam2))
						{
							iVar0 = 1;
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_820.f_2), bParam2);
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_820.f_2), bParam2);
					}
					break;
				
				case 3:
					if (iVar1 >= 110)
					{
						if (!BitTest(uParam0->f_820.f_2, bParam2))
						{
							iVar0 = 1;
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_820.f_2), bParam2);
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_820.f_2), bParam2);
					}
					break;
			}
			break;
	}
	return iVar0;
}

void func_334(var uParam0)
{
	bool bVar0;
	
	if (uParam0->f_1086 == -1)
	{
		return;
	}
	if (func_124(uParam0, uParam0->f_1086, &bVar0))
	{
		if (bVar0)
		{
			switch (uParam0->f_1086)
			{
				case 1:
					Global_1978795[unk_0x383461852896D73D() /*25*/].f_21 = 1;
					break;
				
				case 2:
					if (Local_161.f_56.f_8 != 0)
					{
						Stack.Push(uParam0);
						Call_Loc(Local_161.f_56.f_8);
					}
					break;
			}
		}
		else
		{
			switch (uParam0->f_1086)
			{
				case 2:
					if (Local_161.f_56.f_9 != 0)
					{
						Stack.Push(uParam0);
						Call_Loc(Local_161.f_56.f_9);
					}
					break;
				
				default:
					break;
				}
		}
		uParam0->f_1086 = -1;
		uParam0->f_1087 = -1;
		func_81(uParam0, 1);
	}
}

void func_335(var uParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (uParam0->f_741.f_32 != uParam0->f_741.f_33)
	{
		func_351(uParam0, uParam0->f_741.f_33);
		uParam0->f_741.f_62 = 1;
		Var0 = { 0f, 0f, 0f };
		Var1 = { 0f, 0f, 0f };
		uParam0->f_741.f_44 = { func_350(uParam0) };
		uParam0->f_741.f_47 = { func_349(uParam0) };
		uParam0->f_741.f_1.f_17 = func_348(uParam0);
		uParam0->f_741.f_38 = { unk_0xA452B06E281A9014(uParam0->f_741.f_1) };
		uParam0->f_741.f_41 = { unk_0x9DDBEF363FADFA4C(uParam0->f_741.f_1, 2) };
		uParam0->f_741.f_1.f_18 = unk_0x4A1D1AB55229AAF0(uParam0->f_741.f_1);
		uParam0->f_741.f_1.f_14 = { 0f, 0f, 0f };
		uParam0->f_741.f_63 = 750;
		if (func_347())
		{
			unk_0x2A09425009DAD0F5(uParam0->f_741.f_1, func_346(), func_345());
		}
		unk_0xA3774254665BAA82(uParam0->f_741.f_1, uParam0->f_741.f_38, uParam0->f_741.f_41, uParam0->f_741.f_1.f_18, 0, 1, 1, 2);
		unk_0xA3774254665BAA82(uParam0->f_741.f_1, uParam0->f_741.f_44, uParam0->f_741.f_47, uParam0->f_741.f_1.f_17, uParam0->f_741.f_63, 1, 1, 2);
	}
	if (uParam0->f_741.f_62)
	{
		uParam0->f_741.f_1.f_18 = func_348(uParam0);
		if (!unk_0x323C4A67159DAD02(uParam0->f_741.f_1))
		{
			uParam0->f_741.f_38 = { uParam0->f_741.f_44 };
			uParam0->f_741.f_41 = { uParam0->f_741.f_47 };
			uParam0->f_741.f_1.f_1 = { uParam0->f_741.f_44 };
			uParam0->f_741.f_1.f_4 = { uParam0->f_741.f_47 };
			if (func_347())
			{
				unk_0x2A09425009DAD0F5(uParam0->f_741.f_1, func_346(), func_345());
			}
			uParam0->f_741.f_62 = 0;
			func_344(uParam0, uParam0->f_741.f_1.f_18);
			func_340(&(uParam0->f_741.f_1), 0, 0, 1, 0, 1045220557, 0, 1065353216, 0);
		}
	}
	else
	{
		func_340(&(uParam0->f_741.f_1), func_339(), func_338(), func_337(), 0, 1045220557, 0, 1065353216, func_336());
	}
}

int func_336()
{
	if (Local_161.f_18.f_4.f_2 != 0)
	{
		Call_Loc(Local_161.f_18.f_4.f_2);
		return StackVal;
	}
	return 1;
}

int func_337()
{
	if (Local_161.f_18.f_4.f_1 != 0)
	{
		Call_Loc(Local_161.f_18.f_4.f_1);
		return StackVal;
	}
	return 0;
}

int func_338()
{
	if (Local_161.f_18.f_3 != 0)
	{
		Call_Loc(Local_161.f_18.f_3);
		return StackVal;
	}
	return 1;
}

int func_339()
{
	if (Local_161.f_18.f_4 != 0)
	{
		Call_Loc(Local_161.f_18.f_4);
		return StackVal;
	}
	return 1;
}

void func_340(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
{
	int iVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	
	unk_0xE0EEB603997F273F(2);
	func_343(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0x660D0B8C8AE85314())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0xAE231F549813BBDF(2))
	{
		fVar1 = unk_0x4AAE7492E7D81A57(2, 239);
		fVar2 = unk_0x4AAE7492E7D81A57(2, 240);
		fVar3 = (fVar1 - uParam0->f_29);
		fVar4 = (fVar2 - uParam0->f_30);
		uParam0->f_29 = fVar1;
		uParam0->f_30 = fVar2;
		if (bParam4)
		{
			iVar0[2] = -round(((fVar3 * fParam5) * 127f));
			iVar0[3] = -round(((fVar4 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = round(((unk_0x4AAE7492E7D81A57(2, 290) * fParam5) * 127f));
			iVar0[3] = round(((unk_0x4AAE7492E7D81A57(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_342((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_342((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0x1DD05E817C89C737())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0xAE231F549813BBDF(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = unk_0x1DD05E817C89C737() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(to_float(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(to_float(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar5 = (30f * timestep());
	Var6 = { uParam0->f_8 + uParam0->f_11 };
	if ((unk_0xAE231F549813BBDF(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = Var6.f_0;
		uParam0->f_14.f_1 = Var6.f_1;
		uParam0->f_14.f_2 = Var6.f_2;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_341(((((Var6.f_0 - uParam0->f_14) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_341(((((Var6.f_1 - uParam0->f_14.f_1) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_341(((((Var6.f_2 - uParam0->f_14.f_2) * 0.05f) * fVar5) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_341(uParam0->f_14, to_float(-uParam0->f_21), to_float(uParam0->f_21));
		uParam0->f_14.f_1 = func_341(uParam0->f_14.f_1, to_float(-uParam0->f_22), to_float(uParam0->f_22));
		uParam0->f_14.f_2 = func_341(uParam0->f_14.f_2, to_float(-uParam0->f_20), to_float(uParam0->f_20));
	}
	if (unk_0xAE231F549813BBDF(0) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (unk_0xAE231F549813BBDF(0))
		{
			iVar7 = 40;
			iVar8 = 41;
			if (bParam6)
			{
				iVar7 = 241;
				iVar8 = 242;
			}
			if (unk_0xDEE3EFEA31A1F555(0, iVar7))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0x1DD05E817C89C737() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0xDEE3EFEA31A1F555(0, iVar8))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0x1DD05E817C89C737() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_341(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_341(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = unk_0x6C29A57AC29D7033(2, 207);
			iVar0[3] = unk_0x6C29A57AC29D7033(2, 208);
			if (bParam3)
			{
				if (to_float(iVar0[3]) > 127f)
				{
					uParam0->f_17 = (uParam0->f_17 - IntToFloat(round(((to_float(iVar0[3]) / 128f) * (uParam0->f_19 / 2f)))));
				}
			}
			else
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
				uParam0->f_17 = (uParam0->f_17 - IntToFloat(round(((to_float(iVar0[3]) / 128f) * uParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (to_float(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0.06f) * fVar5));
	unk_0xA3774254665BAA82(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (unk_0x78411E34CF90EA8C(*uParam0))
	{
		if (unk_0xBC886554B5888A64(*uParam0))
		{
			if (unk_0x8DE2438443E6A145(*uParam0))
			{
				unk_0x9D0B099EEAD74270();
			}
		}
	}
}

float func_341(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_342(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_343(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = floor((unk_0x4AAE7492E7D81A57(2, 218) * 127f));
	*uParam1 = floor((unk_0x4AAE7492E7D81A57(2, 219) * 127f));
	*uParam2 = floor((unk_0x4AAE7492E7D81A57(2, 220) * 127f));
	*uParam3 = floor((unk_0x4AAE7492E7D81A57(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x5CCBA474776568B7(2, 218))
		{
			*uParam0 = floor((unk_0xC3B77DE416935168(2, 218) * 127f));
		}
		if (!unk_0x5CCBA474776568B7(2, 219))
		{
			*uParam1 = floor((unk_0xC3B77DE416935168(2, 219) * 127f));
		}
		if (!unk_0x5CCBA474776568B7(2, 220))
		{
			*uParam2 = floor((unk_0xC3B77DE416935168(2, 220) * 127f));
		}
		if (!unk_0x5CCBA474776568B7(2, 221))
		{
			*uParam3 = floor((unk_0xC3B77DE416935168(2, 221) * 127f));
		}
	}
	if (unk_0xAE231F549813BBDF(2))
	{
		if (bParam5)
		{
			if (unk_0x660D0B8C8AE85314())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xDD087A873D2E08F0())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_344(var uParam0, var uParam1)
{
	uParam0->f_741.f_1.f_7 = uParam1;
	uParam0->f_741.f_1.f_20 = 15;
	uParam0->f_741.f_1.f_21 = 10;
	uParam0->f_741.f_1.f_22 = 1;
	uParam0->f_741.f_1.f_19 = 10f;
}

float func_345()
{
	if (Local_161.f_18.f_7.f_2 != 0)
	{
		Call_Loc(Local_161.f_18.f_7.f_2);
		return StackVal;
	}
	return 1f;
}

char* func_346()
{
	if (Local_161.f_18.f_7.f_1 != 0)
	{
		Call_Loc(Local_161.f_18.f_7.f_1);
		return StackVal;
	}
	return "HAND_SHAKE";
}

int func_347()
{
	if (Local_161.f_18.f_7 != 0)
	{
		Call_Loc(Local_161.f_18.f_7);
		return StackVal;
	}
	return 1;
}

var func_348(var uParam0)
{
	Stack.Push(uParam0->f_741.f_33);
	Call_Loc(Local_161.f_18.f_2);
	return StackVal;
}

Vector3 func_349(var uParam0)
{
	Stack.Push(uParam0->f_741.f_33);
	Call_Loc(Local_161.f_18.f_1);
	return StackVal, StackVal, StackVal;
}

Vector3 func_350(var uParam0)
{
	Stack.Push(uParam0->f_741.f_33);
	Call_Loc(Local_161.f_18);
	return StackVal, StackVal, StackVal;
}

void func_351(var uParam0, var uParam1)
{
	uParam0->f_741.f_32 = uParam1;
}

void func_352(var uParam0)
{
	int iVar0;
	
	if (!unk_0x834C960822A4683F())
	{
		return;
	}
	iVar0 = uParam0->f_1084;
	if (iVar0 == -1)
	{
		return;
	}
	Stack.Push(Local_161.f_51 == 0);
	Stack.Push(uParam0);
	Call_Loc(Local_161.f_51);
	if (StackVal || !StackVal)
	{
		return;
	}
	if (!func_354(&(Global_1978795[iVar0 /*25*/].f_18)))
	{
		if (uParam0->f_1084 == unk_0x259BE71D8A81D4FA())
		{
			Stack.Push(uParam0);
			Call_Loc(Local_161.f_51.f_1);
			if (StackVal)
			{
				func_41(&(Global_1978795[iVar0 /*25*/].f_18), 0, 0);
			}
		}
	}
	else
	{
		Call_Loc(Local_161.f_51.f_2);
		uParam0->f_823.f_245 = (StackVal - func_353(&(Global_1978795[iVar0 /*25*/].f_18), 0, 0));
		if (uParam0->f_823.f_245 > 0)
		{
			if (uParam0->f_823.f_245 < (uParam0->f_823.f_246 - 1000))
			{
				Stack.Push(uParam0);
				Call_Loc(Local_161.f_51.f_3);
				uParam0->f_823.f_246 = uParam0->f_823.f_245;
			}
		}
		else
		{
			uParam0->f_823.f_245 = 0;
			Stack.Push(uParam0);
			Call_Loc(Local_161.f_51.f_4);
		}
	}
}

int func_353(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x76CD105BCAC6EB9F() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0);
		}
		else
		{
			return unk_0x775142054EC39277(unk_0x0728E77B2BF91D54(), *uParam0);
		}
	}
	return unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0);
}

bool func_354(var uParam0)
{
	return uParam0->f_1;
}

void func_355(var uParam0)
{
	if (Local_161.f_28.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_161.f_28.f_1);
	}
	else if (unk_0xAE231F549813BBDF(2))
	{
		unk_0x4CC1CF98851922CE(2, 202);
	}
}

bool func_356(var uParam0)
{
	return uParam0->f_726.f_5;
}

void func_357(var uParam0)
{
	if (func_448(uParam0))
	{
		if (unk_0xA0C7B98BCF1EEF9E(uParam0->f_711))
		{
			unk_0xA66AC5949E305457(1);
			unk_0x61055542D9D877AE(uParam0->f_700);
			switch (func_447())
			{
				case 1:
					unk_0x6CDCD138191E7A06(uParam0->f_711, 1);
					break;
				
				case 0:
					unk_0x32323864D97FCFF0(uParam0->f_711, 1);
					break;
			}
			unk_0x6D16B99FEB0AFFF1(uParam0->f_711, func_446(), func_445(), func_444(), func_443(), 255, 255, 255, 255, 0);
			unk_0x61055542D9D877AE(unk_0xB803C9D209A7C3DC());
			unk_0xA66AC5949E305457(0);
			if (uParam0->f_706)
			{
			}
		}
	}
	else if (func_442(uParam0))
	{
		if (Local_161.f_7.f_2.f_7 != 0)
		{
			Stack.Push(uParam0);
			Call_Loc(Local_161.f_7.f_2.f_7);
		}
	}
	if (func_441(uParam0))
	{
		func_358(uParam0);
	}
}

void func_358(var uParam0)
{
	struct<9> Var0;
	
	Var0 = { func_440() };
	if (unk_0xA43CD45F18522E3F())
	{
		return;
	}
	if (Local_176.f_6 != -1)
	{
		func_438(uParam0);
		return;
	}
	else if (iLocal_344)
	{
		func_437(uParam0, 1);
		iLocal_344 = 0;
	}
	if (!func_436(uParam0))
	{
		func_429(&(uParam0->f_712), &Var0, uParam0, 0);
		return;
	}
	if (!unk_0x485ADB2D2728D748() || unk_0x8608526719A575EE() == 10)
	{
		func_428(uParam0, 0.5f);
	}
	else
	{
		func_428(uParam0, 0.7f);
	}
	func_426(uParam0);
	func_359(uParam0);
	func_429(&(uParam0->f_712), &Var0, uParam0, uParam0->f_707);
	func_437(uParam0, 0);
}

void func_359(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = uParam0->f_1084 == unk_0x259BE71D8A81D4FA();
	if (func_354(&(Global_1978795[uParam0->f_1084 /*25*/].f_18)))
	{
		func_425("", "HEIST_IB_CONT", uParam0->f_823.f_245, uParam0, 0);
	}
	iVar1 = uParam0->f_806;
	bLocal_143 = true;
	if (iLocal_154 != 0)
	{
		if (((func_424(iLocal_154) || iLocal_154 == -2) || iLocal_154 == -3) || iLocal_154 == -4)
		{
			func_423(2, 201, "CH_INSTR_SEL", uParam0, 1, 363);
		}
		else if (iVar1 == 1002)
		{
			func_423(2, 201, "CH_INSTR_LM", uParam0, 1, 363);
		}
		else
		{
			func_423(2, 201, "CH_INSTR_SEL", uParam0, 1, 363);
		}
		func_423(2, 202, "CH_INSTR_BACK", uParam0, 1, 363);
		if ((iLocal_154 != -2 && iLocal_154 != -3) && iLocal_154 != -4)
		{
			func_422(2, 0, "HEIST_IB_NAV", uParam0);
		}
		return;
	}
	if (func_421(uParam0, iVar1))
	{
		func_423(2, 201, "H4P_INSTR_EQU", uParam0, 1, 363);
	}
	else if (func_420(uParam0, iVar1))
	{
		func_423(2, 201, "H4P_INSTR_REM", uParam0, 1, 363);
	}
	else if (func_419(uParam0, iVar1))
	{
		func_423(2, 201, "CH_INSTR_PREV", uParam0, 1, 363);
	}
	else if (func_418(uParam0, iVar1))
	{
		func_423(2, 201, "CH_INSTR_SEL", uParam0, 1, 363);
	}
	else if (bVar0 && func_417(uParam0, iVar1))
	{
		func_423(2, 201, "CH_INSTR_LM", uParam0, 1, 363);
	}
	else if (bVar0 && func_414(uParam0, iVar1))
	{
		func_423(2, 201, "H4P_INSTR_PUR", uParam0, 1, 363);
	}
	else if (!bVar0 && func_413(uParam0, iVar1))
	{
		func_423(2, 201, "HEIST_IB_RDY", uParam0, 1, 363);
	}
	else if (!bVar0 && func_411(uParam0, iVar1))
	{
		func_423(2, 201, "HEIST_IB_UNRDY", uParam0, 1, 363);
	}
	else
	{
		bLocal_143 = false;
	}
	if (func_410(iVar1))
	{
		func_423(2, 202, "CH_INSTR_QUIT", uParam0, 1, 363);
	}
	else
	{
		func_423(2, 202, "CH_INSTR_BACK", uParam0, 1, 363);
	}
	if (func_409(uParam0))
	{
		func_423(2, 203, "HP_MAP", uParam0, 1, 363);
	}
	if (func_363(uParam0, iVar1))
	{
		func_423(2, 204, "CH_INSTR_INFO", uParam0, 1, 363);
	}
	if (func_17(uParam0->f_1084, 0))
	{
		func_422(2, 14, "H4P_INSTR_SCR", uParam0);
	}
	if (func_17(uParam0->f_1084, 0) || func_362(uParam0->f_1084))
	{
		func_422(2, 0, "HEIST_IB_NAV", uParam0);
	}
	if (func_361(iVar1))
	{
		if ((unk_0x0BA1A956D36B210F() || func_62()) || unk_0x761778199FE1211C())
		{
			func_423(2, 217, "HEIST_IB_PSN", uParam0, 1, 363);
		}
		else if (unk_0x1226C55CA7D2269A() || func_63())
		{
			func_360(unk_0xE934399D6F2C3AC5(2, 217, 1), "HEIST_IB_XBL", uParam0, 0);
		}
		else
		{
			func_360(unk_0xE934399D6F2C3AC5(2, 217, 1), "HEIST_IB_PSNXBL", uParam0, 0);
		}
	}
}

void func_360(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

int func_361(int iParam0)
{
	switch (iParam0)
	{
		case 105:
		case 106:
		case 107:
		case 108:
			return 1;
		
		default:
	}
	return 0;
}

int func_362(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_1, 1);
	}
	return 0;
}

int func_363(var uParam0, int iParam1)
{
	if (unk_0xD6F9DEE4765092A9(func_364(uParam0, iParam1)))
	{
		return 0;
	}
	return 1;
}

char* func_364(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return "H4P_INT0_GATH_I";
		
		case 2:
			return "H4P_INT0_LOOT_I";
		
		case 3:
			return "H4P_INT0_ENTR_I";
		
		case 4:
			return "H4P_INT0_EXIT_I";
		
		case 5:
			return "H4P_INT0_COMP_I";
		
		case 6:
			return "H4P_INT0_ITEM_I";
		
		case 7:
			return "H4P_INT2_CASH_I";
		
		case 8:
			return "H4P_INT2_WEED_I";
		
		case 9:
			return "H4P_INT2_COKE_I";
		
		case 10:
			return "H4P_INT2_GOLD_I";
		
		case 11:
			return "H4P_INT2_PAIN_I";
		
		case 12:
			return "H4P_INT3_AIRS_I";
		
		case 13:
			return "H4P_INT3_PARA_I";
		
		case 14:
			return "H4P_INT3_BEAC_I";
		
		case 15:
			return "H4P_INT3_MDCK_I";
		
		case 16:
			return "H4P_INT3_NDCK_I";
		
		case 17:
			return "H4P_INT3_NDRP_I";
		
		case 18:
			return "H4P_INT3_SDRP_I";
		
		case 19:
			return "H4P_INT3_DTUN_I";
		
		case 20:
			return "H4P_INT4_AIRS_I";
		
		case 21:
			return "H4P_INT4_MDCK_I";
		
		case 22:
			return "H4P_INT4_NDCK_I";
		
		case 23:
			return "H4P_INT4_SUBM_I";
		
		case 30:
			return func_407(func_408(uParam0->f_1084), "H4P_INT6_PWRS_I", "");
		
		case 31:
			return func_407(func_406(uParam0->f_1084), "H4P_INT6_CTOW_I", "");
		
		case 32:
			return func_407(func_400(uParam0->f_1084), "H4P_INT6_BCUT_I", "");
		
		case 33:
			return func_407(func_394(uParam0->f_1084), "H4P_INT6_GRAP_I", "");
		
		case 34:
			return func_407(func_388(uParam0->f_1084), "H4P_INT6_UNIF_I", "");
		
		case 35:
			return func_407(func_387(uParam0->f_1084), "H4P_INT6_TROJ_I", "");
		
		case 24:
			return "H4P_INT5_MGAT_I";
		
		case 25:
			return "H4P_INT5_NWAL_I";
		
		case 26:
			return "H4P_INT5_NSGT_I";
		
		case 27:
			return "H4P_INT5_SWAL_I";
		
		case 28:
			return "H4P_INT5_SSGT_I";
		
		case 29:
			return "H4P_INT5_DTUN_I";
		
		case 36:
			return "";
		
		case 37:
			return "";
		
		case 38:
			return "";
		
		case 39:
			return "";
		
		case 40:
			return "H4P_PRP1_SUBM_I";
		
		case 41:
			return "";
		
		case 42:
			return "H4P_PRP1_SPLA_I";
		
		case 43:
			return "";
		
		case 44:
			return "H4P_PRP1_PBOA_I";
		
		case 45:
			return "H4P_PRP1_SBOA_I";
		
		case 46:
			return "H4P_PRP1_BOM1_I";
		
		case 47:
			return "H4P_PRP1_BOM2_I";
		
		case 48:
			return "H4P_PRP1_HEL1_I";
		
		case 49:
			return "H4P_PRP1_HEL2_I";
		
		case 50:
			return "H4P_PRP2_DEMC_I";
		
		case 53:
			return "H4P_PRP2_ATOR_I";
		
		case 51:
			return func_407(func_386(uParam0->f_1084) == 11, "H4P_PRP2_TAR1_I", "H4P_PRP2_TAR2_I");
		
		case 52:
			return "H4P_PRP2_FING_I";
		
		case 54:
			return "H4P_PRP3_SHOT_I";
		
		case 55:
			return "H4P_PRP3_RIFL_I";
		
		case 56:
			return "H4P_PRP3_SNIP_I";
		
		case 57:
			return func_407(func_370(uParam0, iParam1), "H4P_PRP3_M2SM_2", "H4P_PRP3_M2SM_I");
		
		case 58:
			return func_407(func_370(uParam0, iParam1), "H4P_PRP3_M2RI_2", "H4P_PRP3_M2RI_I");
		
		case 59:
			return "H4P_PRP3_SUPP_I";
		
		case 60:
			return "H4P_PRP4_WEAP_I";
		
		case 61:
			return "H4P_PRP4_ARMR_I";
		
		case 62:
			return "H4P_PRP4_BRES_I";
		
		case 63:
			return "";
		
		case 64:
			return "";
		
		case 65:
			return "";
		
		case 66:
			return "";
		
		case 67:
			return "";
		
		case 68:
			return "";
		
		case 69:
			return "";
		
		case 70:
			return "";
		
		case 71:
			return "H4P_FIN1_SUBM_I";
		
		case 72:
			return "H4P_FIN1_BOMB_I";
		
		case 73:
			return "H4P_FIN1_SMPL_I";
		
		case 74:
			return "H4P_FIN1_SHEL_I";
		
		case 75:
			return "H4P_FIN1_PBOA_I";
		
		case 76:
			return "H4P_FIN1_SBOA_I";
		
		case 77:
			return "H4P_FIN2_AIRS_I";
		
		case 78:
			return "H4P_FIN2_PARA_I";
		
		case 79:
			return "H4P_FIN2_WBEA_I";
		
		case 80:
			return "H4P_FIN2_MDOC_I";
		
		case 81:
			return "H4P_FIN2_NDOC_I";
		
		case 82:
			return "H4P_FIN2_NDRP_I";
		
		case 83:
			return "H4P_FIN2_SDRP_I";
		
		case 84:
			return "H4P_FIN2_DTUN_I";
		
		case 85:
			return "H4P_FIN3_MGAT_I";
		
		case 86:
			return "H4P_FIN3_DTUN_I";
		
		case 87:
			return "H4P_FIN4_AIRS_I";
		
		case 88:
			return "H4P_FIN4_MDOC_I";
		
		case 89:
			return "H4P_FIN4_NDOC_I";
		
		case 90:
			return "H4P_FIN4_SUBM_I";
		
		case 91:
			return "H4P_FIN5_TDAY_I";
		
		case 92:
			return "H4P_FIN5_TNGT_I";
		
		case 93:
			return "H4P_FIN6_SHOT_I";
		
		case 94:
			return "H4P_FIN6_RIFL_I";
		
		case 95:
			return "H4P_FIN6_SNIP_I";
		
		case 96:
			return "H4P_FIN6_MKSM_I";
		
		case 97:
			return "H4P_FIN6_MKAR_I";
		
		case 98:
			return "H4P_FIN6_SUPP_I";
		
		case 99:
			return func_407(func_365(uParam0, iParam1), "H4P_FIN7_AIRS_I", "H4P_FIN7_AIRS_2");
		
		case 100:
			return "H4P_FIN7_WDRP_I";
		
		case 101:
			return "H4P_FIN7_SNIP_I";
		
		case 102:
			return "H4P_FIN7_HELI_I";
		
		case 103:
			return func_407(func_365(uParam0, iParam1), "H4P_FIN7_SPYD_I", "H4P_FIN7_SPYD_2");
		
		case 104:
			return "H4P_FIN7_WEAP_I";
		
		default:
	}
	return "";
}

int func_365(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 99:
			return func_366(uParam0->f_1084, 0);
		
		case 103:
			return func_366(uParam0->f_1084, 3);
		
		default:
	}
	return 1;
}

int func_366(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (!func_369(iParam0) || !func_368(iParam0))
			{
				return 0;
			}
			break;
		
		case 3:
			if (!func_367(iParam0) || !BitTest(Global_1975258[iParam0 /*68*/].f_42, 4))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_367(int iParam0)
{
	if (unk_0x834C960822A4683F())
	{
		return BitTest(Global_4718592.f_160064.f_14, 12);
	}
	if (iParam0 != -1)
	{
		return BitTest(Global_1853910[iParam0 /*862*/].f_267.f_386, 31);
	}
	return 0;
}

int func_368(int iParam0)
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	return Global_1853910[iParam0 /*862*/].f_267.f_293.f_5;
}

int func_369(int iParam0)
{
	if (iParam0 != func_15())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_293 != 0;
	}
	return 0;
}

int func_370(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return !func_385(uParam0->f_1084, 0, 0, 0);
		
		case 8:
			return !func_385(uParam0->f_1084, 1, 0, 0);
		
		case 9:
			return !func_385(uParam0->f_1084, 2, 0, 0);
		
		case 10:
			return !func_385(uParam0->f_1084, 3, 0, 0);
		
		case 11:
			return !func_385(uParam0->f_1084, 4, 0, 0);
		
		case 12:
			return !func_383(uParam0->f_1084, func_384(bParam1));
		
		case 13:
			return !func_383(uParam0->f_1084, func_384(bParam1));
		
		case 14:
			return !func_383(uParam0->f_1084, func_384(bParam1));
		
		case 15:
			return !func_383(uParam0->f_1084, func_384(bParam1));
		
		case 16:
			return !func_383(uParam0->f_1084, func_384(bParam1));
		
		case 17:
			return !func_383(uParam0->f_1084, func_384(bParam1));
		
		case 18:
			return !func_383(uParam0->f_1084, func_384(bParam1));
		
		case 19:
			return !func_383(uParam0->f_1084, func_384(bParam1));
		
		case 20:
			return !func_381(uParam0->f_1084, func_382(bParam1));
		
		case 21:
			return !func_381(uParam0->f_1084, func_382(bParam1));
		
		case 22:
			return !func_381(uParam0->f_1084, func_382(bParam1));
		
		case 23:
			return !func_381(uParam0->f_1084, func_382(bParam1));
		
		case 30:
			return !func_408(uParam0->f_1084);
		
		case 31:
			return !func_406(uParam0->f_1084);
		
		case 32:
			return !func_400(uParam0->f_1084);
		
		case 33:
			return !func_394(uParam0->f_1084);
		
		case 34:
			return !func_388(uParam0->f_1084);
		
		case 35:
			return !func_387(uParam0->f_1084);
		
		case 24:
			return !func_379(uParam0->f_1084, func_380(bParam1));
		
		case 25:
			return !func_379(uParam0->f_1084, func_380(bParam1));
		
		case 26:
			return !func_379(uParam0->f_1084, func_380(bParam1));
		
		case 27:
			return !func_379(uParam0->f_1084, func_380(bParam1));
		
		case 28:
			return !func_379(uParam0->f_1084, func_380(bParam1));
		
		case 29:
			return !func_379(uParam0->f_1084, func_380(bParam1));
		
		case 36:
			return 0;
		
		case 37:
			return 0;
		
		case 38:
			return 0;
		
		case 39:
			return 0;
		
		case 40:
			return 0;
		
		case 41:
		case 42:
			return 0;
		
		case 43:
			if (!func_383(uParam0->f_1084, 5) && !func_383(uParam0->f_1084, 6))
			{
				return 1;
			}
			return 0;
		
		case 44:
			return !(func_383(uParam0->f_1084, 3) || func_383(uParam0->f_1084, 4));
		
		case 45:
			return !(func_383(uParam0->f_1084, 3) || func_383(uParam0->f_1084, 4));
		
		case 46:
			return 0;
		
		case 47:
			if (func_17(uParam0->f_1084, 6))
			{
				return 0;
			}
			if (func_17(uParam0->f_1084, 1))
			{
				return 0;
			}
			return 1;
		
		case 48:
			return !(func_383(uParam0->f_1084, 5) || func_383(uParam0->f_1084, 6));
		
		case 49:
			if (!func_383(uParam0->f_1084, 5) && !func_383(uParam0->f_1084, 6))
			{
				return 1;
			}
			if (func_17(uParam0->f_1084, 6))
			{
				return 0;
			}
			if (func_17(uParam0->f_1084, 2))
			{
				return 0;
			}
			return 1;
		
		case 50:
			return 0;
		
		case 53:
			return !func_383(uParam0->f_1084, 7);
		
		case 51:
			return 0;
		
		case 52:
			return 0;
		
		case 54:
			return (func_17(uParam0->f_1084, 13) && func_378(uParam0->f_1084) != 1);
		
		case 55:
			return (func_17(uParam0->f_1084, 13) && func_378(uParam0->f_1084) != 2);
		
		case 56:
			return (func_17(uParam0->f_1084, 13) && func_378(uParam0->f_1084) != 3);
		
		case 57:
			if (func_17(uParam0->f_1084, 13) && func_378(uParam0->f_1084) != 4)
			{
				return 1;
			}
			if (func_377(uParam0->f_1084) && func_373(uParam0->f_1084, func_267(uParam0->f_1084)))
			{
				return 0;
			}
			if (func_372(uParam0->f_1084) && func_371(uParam0->f_1084))
			{
				return 0;
			}
			return 1;
		
		case 58:
			if (func_17(uParam0->f_1084, 13) && func_378(uParam0->f_1084) != 5)
			{
				return 1;
			}
			if (func_377(uParam0->f_1084) && func_373(uParam0->f_1084, func_267(uParam0->f_1084)))
			{
				return 0;
			}
			if (func_372(uParam0->f_1084) && func_371(uParam0->f_1084))
			{
				return 0;
			}
			return 1;
		
		case 60:
			return 0;
		
		case 61:
			return 0;
		
		case 62:
			return 0;
		
		case 99:
			return !func_365(uParam0, bParam1);
		
		case 103:
			return !func_365(uParam0, bParam1);
		
		default:
	}
	return 0;
}

int func_371(int iParam0)
{
	if (iParam0 != func_15())
	{
		return BitTest(Global_1853910[iParam0 /*862*/].f_267.f_372.f_2, 13);
	}
	return 0;
}

int func_372(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (Global_1853910[iParam0 /*862*/].f_267.f_372 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_373(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_376(iParam0, iParam1))
	{
		iVar0 = func_374(iParam0, iParam1);
		if (Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/].f_4 > 0 && Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

int func_374(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_375(iParam1) && iParam0 != func_15())
	{
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if (Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_375(int iParam0)
{
	if (iParam0 == 33 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_376(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_375(iParam1) && iParam0 != func_15())
	{
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if (Global_1853910[iParam0 /*862*/].f_267.f_193[iVar0 /*13*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_377(int iParam0)
{
	return func_267(iParam0) != 0;
}

int func_378(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1979596[iParam0 /*53*/].f_5.f_35;
	}
	return 0;
}

int func_379(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_2, iParam1);
	}
	return 0;
}

int func_380(bool bParam0)
{
	switch (bParam0)
	{
		case 24:
			return 0;
		
		case 25:
			return 1;
		
		case 26:
			return 2;
		
		case 27:
			return 3;
		
		case 28:
			return 4;
		
		case 29:
			return 5;
		
		default:
	}
	return 6;
}

int func_381(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_1, 0);
			
			case 1:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_1, 3);
			
			case 2:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_1, 4);
			
			case 3:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_1, 2);
			}
		
		default:
	}
	return 0;
}

int func_382(bool bParam0)
{
	switch (bParam0)
	{
		case 20:
		case 87:
			return 0;
		
		case 21:
		case 88:
			return 1;
		
		case 22:
		case 89:
			return 2;
		
		case 23:
		case 90:
			return 3;
		
		default:
	}
	return 4;
}

int func_383(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_1, iParam1);
	}
	return 0;
}

int func_384(bool bParam0)
{
	switch (bParam0)
	{
		case 12:
		case 77:
			return 0;
		
		case 13:
		case 78:
			return 1;
		
		case 14:
		case 79:
			return 2;
		
		case 15:
		case 80:
			return 3;
		
		case 16:
		case 81:
			return 4;
		
		case 17:
		case 82:
			return 5;
		
		case 18:
		case 83:
			return 6;
		
		case 19:
		case 84:
			return 7;
		
		default:
	}
	return 8;
}

int func_385(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_5, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_13, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			
			case 1:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_6, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_14, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			
			case 2:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_7, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_15, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			
			case 3:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_8, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_16, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			
			case 4:
				bVar0 = false;
				while (bVar0 < 7)
				{
					if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_18, bVar0))
					{
						return 1;
					}
					bVar0++;
				}
				break;
			}
	}
	return 0;
}

int func_386(int iParam0)
{
	if (iParam0 != -1)
	{
		switch (Global_1979596[iParam0 /*53*/].f_5.f_9)
		{
			case 4:
			case 2:
				return 11;
			
			default:
		}
		return 10;
	}
	return -1;
}

int func_387(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 15);
	}
	return 0;
}

int func_388(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_389(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_389(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_393(iParam0);
		
		case 1:
			return func_392(iParam0);
		
		case 2:
			return func_391(iParam0);
		
		case 3:
			return func_390(iParam0);
		
		default:
	}
	return 0;
}

int func_390(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 7);
	}
	return 0;
}

int func_391(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 6);
	}
	return 0;
}

int func_392(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 5);
	}
	return 0;
}

int func_393(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 4);
	}
	return 0;
}

int func_394(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_395(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_395(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_399(iParam0);
		
		case 1:
			return func_398(iParam0);
		
		case 2:
			return func_397(iParam0);
		
		case 3:
			return func_396(iParam0);
		
		default:
	}
	return 0;
}

int func_396(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 3);
	}
	return 0;
}

int func_397(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 2);
	}
	return 0;
}

int func_398(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 1);
	}
	return 0;
}

int func_399(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 0);
	}
	return 0;
}

int func_400(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_401(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_401(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_405(iParam0);
		
		case 1:
			return func_404(iParam0);
		
		case 2:
			return func_403(iParam0);
		
		case 3:
			return func_402(iParam0);
		
		default:
	}
	return 0;
}

int func_402(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 11);
	}
	return 0;
}

int func_403(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 10);
	}
	return 0;
}

int func_404(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 9);
	}
	return 0;
}

int func_405(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 8);
	}
	return 0;
}

int func_406(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 16);
	}
	return 0;
}

char* func_407(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_408(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 14);
	}
	return 0;
}

int func_409(var uParam0)
{
	if (!func_17(uParam0->f_1084, 0) && !func_362(uParam0->f_1084))
	{
		return 0;
	}
	return 1;
}

int func_410(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 36:
		case 37:
		case 38:
		case 39:
		case 67:
		case 63:
		case 64:
		case 66:
		case 65:
		case 68:
		case 69:
		case 70:
		case 1000:
			return 1;
		
		default:
	}
	return 0;
}

int func_411(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1000:
			if (func_412(uParam0, unk_0x259BE71D8A81D4FA()) != -1)
			{
				return uParam0->f_823.f_67[func_412(uParam0, unk_0x259BE71D8A81D4FA())] == 1;
			}
			break;
	}
	return 0;
}

int func_412(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_823.f_51[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_413(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1000:
			if (func_412(uParam0, unk_0x259BE71D8A81D4FA()) != -1)
			{
				return uParam0->f_823.f_67[func_412(uParam0, unk_0x259BE71D8A81D4FA())] == 0;
			}
			break;
	}
	return 0;
}

int func_414(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 99:
			return !func_416(uParam0->f_1084, 0);
		
		case 100:
			return !func_416(uParam0->f_1084, 4);
		
		case 101:
			return !func_416(uParam0->f_1084, 1);
		
		case 102:
			return !func_416(uParam0->f_1084, 2);
		
		case 103:
			return !func_416(uParam0->f_1084, 3);
		
		case 104:
			return !func_416(uParam0->f_1084, 5);
		
		case 59:
			if (unk_0x834C960822A4683F())
			{
				return 0;
			}
			return !func_415(uParam0->f_1084);
		
		default:
	}
	return 0;
}

int func_415(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5, 12);
	}
	return 0;
}

int func_416(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_45, bParam1);
	}
	return 0;
}

int func_417(var uParam0, int iParam1)
{
	if (func_370(uParam0, iParam1))
	{
		return 0;
	}
	if (unk_0x834C960822A4683F())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			return 1;
		
		case 40:
			return !func_17(uParam0->f_1084, 7);
		
		case 42:
			return !func_17(uParam0->f_1084, 5);
		
		case 44:
			return !func_17(uParam0->f_1084, 3);
		
		case 45:
			return !func_17(uParam0->f_1084, 4);
		
		case 46:
			return !func_17(uParam0->f_1084, 1);
		
		case 48:
			return !func_17(uParam0->f_1084, 2);
		
		case 47:
			return !func_17(uParam0->f_1084, 6);
		
		case 49:
			return !func_17(uParam0->f_1084, 6);
		
		case 50:
			return !func_17(uParam0->f_1084, 8);
		
		case 53:
			return !func_17(uParam0->f_1084, 9);
		
		case 51:
			return !func_17(uParam0->f_1084, 11);
		
		case 52:
			return !func_17(uParam0->f_1084, 12);
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			if (func_378(uParam0->f_1084) == 0 || !func_17(uParam0->f_1084, 13))
			{
				return 1;
			}
			break;
		
		case 60:
			return !func_17(uParam0->f_1084, 14);
		
		case 61:
			return !func_17(uParam0->f_1084, 15);
		
		case 62:
			return !func_17(uParam0->f_1084, 16);
	}
	return 0;
}

int func_418(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1000:
			return 1;
		
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 36:
		case 37:
		case 38:
		case 39:
		case 41:
		case 43:
			if (func_370(uParam0, iParam1))
			{
				return 0;
			}
			return 1;
		
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			if (uParam0->f_1084 != iLocal_160)
			{
				return 0;
			}
			return unk_0x834C960822A4683F();
		
		case 68:
		case 70:
			return unk_0x834C960822A4683F();
		
		case 91:
		case 92:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 98:
		case 105:
		case 106:
		case 107:
		case 108:
			return (unk_0x834C960822A4683F() && uParam0->f_1084 == iLocal_160);
		
		default:
	}
	return 0;
}

int func_419(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 67:
		case 63:
		case 64:
		case 65:
		case 66:
		case 68:
		case 69:
		case 70:
			return !unk_0x834C960822A4683F();
		
		default:
	}
	return 0;
}

int func_420(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 98:
			if ((unk_0x834C960822A4683F() && uParam0->f_1084 == unk_0x259BE71D8A81D4FA()) && Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_44)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_421(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 98:
			if ((unk_0x834C960822A4683F() && uParam0->f_1084 == unk_0x259BE71D8A81D4FA()) && !Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_44)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_422(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_689), iVar0);
	uParam3->f_1[bVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[bVar0 /*57*/].f_55 = iParam1;
	unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_690), bVar0);
	uParam3->f_693++;
}

void func_423(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_689), iVar0);
	uParam3->f_1[bVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[bVar0 /*57*/].f_55 = iParam1;
	uParam3->f_1[bVar0 /*57*/].f_56 = iParam5;
	if (bParam4)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_691), bVar0);
		if (iParam5 < 363)
		{
		}
	}
	uParam3->f_693++;
}

int func_424(int iParam0)
{
	switch (iParam0)
	{
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			return 1;
		
		default:
	}
	return 0;
}

void func_425(char* sParam0, char* sParam1, var uParam2, var uParam3, char* sParam4)
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_16), sParam4, 64);
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam3->f_1[iVar0 /*57*/].f_36 = uParam2;
	unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_686), iVar0);
	uParam3->f_694 = bVar0;
	uParam3->f_693++;
}

void func_426(var uParam0)
{
	func_427(uParam0);
	uParam0->f_692 = 1;
}

void func_427(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 363;
		uParam0->f_1[iVar0 /*57*/].f_56 = 363;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

void func_428(var uParam0, float fParam1)
{
	uParam0->f_699 = fParam1;
}

void func_429(var uParam0, var uParam1, var uParam2, int iParam3)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0x7811C74D5B749F76(2))
	{
		*uParam2 = 0;
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			if (unk_0x761778199FE1211C())
			{
				unk_0x88F483FBD433696A(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x557F1E2300EF1A3E(0);
				unk_0xE6B753D52F4CA222();
			}
			unk_0x88F483FBD433696A(*uParam0, "CLEAR_ALL");
			unk_0xE6B753D52F4CA222();
		}
		func_435(uParam2);
	}
	if (Global_1577898 < 2)
	{
		func_434(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			*uParam0 = unk_0x8DE4F68A9728925E("instructional_buttons");
		}
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			unk_0xB750FE3C9F094356(*uParam0, "CLEAR_ALL");
			if (unk_0x761778199FE1211C())
			{
				unk_0x88F483FBD433696A(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x557F1E2300EF1A3E(1);
				unk_0xE6B753D52F4CA222();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						uVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						uVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_433(unk_0xE934399D6F2C3AC5(uVar1, uVar2, 1));
						if (iVar3 < 363)
						{
							func_433(unk_0xE934399D6F2C3AC5(iVar1, iVar3, 1));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						uVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_433(unk_0xF761D79754BC3043(uVar4, uVar5, 1));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							unk_0xBD34A69071611974(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						unk_0xCFAD3D478C87321A();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						unk_0x60D332F23943B34F(&(uParam2->f_1[bVar0 /*57*/].f_38));
						unk_0xCFAD3D478C87321A();
					}
					else
					{
						func_432(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (unk_0x761778199FE1211C())
					{
						if (BitTest(uParam2->f_691, bVar0))
						{
							unk_0x557F1E2300EF1A3E(1);
							unk_0x330108B080A2132F(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							unk_0x557F1E2300EF1A3E(0);
							unk_0x330108B080A2132F(363);
						}
					}
					unk_0xE6B753D52F4CA222();
				}
				else
				{
					unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(bVar0);
					func_433(&(uParam2->f_1[bVar0 /*57*/]));
					if (!unk_0xD6F9DEE4765092A9(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_433(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							unk_0xBD34A69071611974(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						unk_0xCFAD3D478C87321A();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						unk_0x60D332F23943B34F(&(uParam2->f_1[bVar0 /*57*/].f_38));
						unk_0xCFAD3D478C87321A();
					}
					else
					{
						func_432(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (unk_0x761778199FE1211C())
					{
						unk_0x557F1E2300EF1A3E(0);
						unk_0x330108B080A2132F(363);
					}
					unk_0xE6B753D52F4CA222();
				}
				bVar0++;
			}
			unk_0x88F483FBD433696A(*uParam0, "SET_MAX_WIDTH");
			unk_0x74BF156C860580D4(uParam2->f_699);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x330108B080A2132F(false);
			unk_0xE6B753D52F4CA222();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_431(*uParam0, uParam1);
	}
	func_430();
}

void func_430()
{
	unk_0x4EB223432F8FA0A0(7);
	unk_0x4EB223432F8FA0A0(6);
	unk_0x4EB223432F8FA0A0(8);
	unk_0x4EB223432F8FA0A0(9);
}

void func_431(var uParam0, var uParam1)
{
	unk_0xA91A4C18A2DB01BD(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_432(var uParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

void func_433(var uParam0)
{
	unk_0xCE3E870AC37B4253(uParam0);
}

void func_434(int iParam0)
{
	Global_1577898 = iParam0;
}

void func_435(var uParam0)
{
	uParam0->f_692 = 0;
}

bool func_436(var uParam0)
{
	return uParam0->f_707;
}

void func_437(var uParam0, int iParam1)
{
	if (uParam0->f_707 != iParam1)
	{
	}
	uParam0->f_707 = iParam1;
}

void func_438(var uParam0)
{
	struct<9> Var0;
	int iVar1;
	
	if (!func_439(Local_176.f_6))
	{
		return;
	}
	Var0 = { func_440() };
	if (iLocal_344 && !uParam0->f_707)
	{
		func_429(&(uParam0->f_712), &Var0, uParam0, 0);
		return;
	}
	if (!unk_0x485ADB2D2728D748() || unk_0x8608526719A575EE() == 10)
	{
		func_428(uParam0, 0.5f);
	}
	else
	{
		func_428(uParam0, 0.7f);
	}
	func_426(uParam0);
	iVar1 = uParam0->f_806;
	if (func_419(uParam0, iVar1))
	{
		func_423(2, 201, "CH_INSTR_PREV", uParam0, 1, 363);
	}
	else if (func_418(uParam0, iVar1))
	{
		func_423(2, 201, "CH_INSTR_SEL", uParam0, 1, 363);
	}
	if (func_410(iVar1))
	{
		func_423(2, 202, "CH_INSTR_QUIT", uParam0, 1, 363);
	}
	else
	{
		func_423(2, 202, "CH_INSTR_BACK", uParam0, 1, 363);
	}
	if (func_409(uParam0))
	{
		func_423(2, 203, "HP_MAP", uParam0, 1, 363);
	}
	func_422(2, 0, "HEIST_IB_NAV", uParam0);
	func_429(&(uParam0->f_712), &Var0, uParam0, 1);
	if (!iLocal_344)
	{
		iLocal_344 = 1;
	}
	else if (uParam0->f_707)
	{
		uParam0->f_707 = 0;
	}
}

int func_439(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 19:
		case 37:
			return 1;
		
		default:
	}
	return 0;
}

struct<9> func_440()
{
	struct<9> Var0;
	
	Var0.f_0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

bool func_441(var uParam0)
{
	return uParam0->f_704;
}

bool func_442(var uParam0)
{
	if (Local_161.f_7.f_2.f_6 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_161.f_7.f_2.f_6);
		return StackVal;
	}
	return uParam0->f_703;
}

float func_443()
{
	if (Local_161.f_7.f_2.f_5 != 0)
	{
		Call_Loc(Local_161.f_7.f_2.f_5);
		return StackVal;
	}
	return 1f;
}

float func_444()
{
	if (Local_161.f_7.f_2.f_4 != 0)
	{
		Call_Loc(Local_161.f_7.f_2.f_4);
		return StackVal;
	}
	return 1f;
}

float func_445()
{
	if (Local_161.f_7.f_2.f_3 != 0)
	{
		Call_Loc(Local_161.f_7.f_2.f_3);
		return StackVal;
	}
	return 0.5f;
}

float func_446()
{
	if (Local_161.f_7.f_2.f_2 != 0)
	{
		Call_Loc(Local_161.f_7.f_2.f_2);
		return StackVal;
	}
	return 0.5f;
}

int func_447()
{
	if (Local_161.f_7.f_2.f_1 != 0)
	{
		Call_Loc(Local_161.f_7.f_2.f_1);
		return StackVal;
	}
	return 1;
}

bool func_448(var uParam0)
{
	return uParam0->f_702;
}

var func_449()
{
	return Global_2692735.f_6;
}

int func_450(var uParam0)
{
	if (!unk_0xA0C7B98BCF1EEF9E(uParam0->f_711))
	{
		return 0;
	}
	if (!unk_0xA0C7B98BCF1EEF9E(uParam0->f_712))
	{
		return 0;
	}
	return 1;
}

void func_451(var uParam0)
{
	int iVar0;
	
	uParam0->f_726.f_1 = uParam0->f_726;
	unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_726.f_4), uParam0->f_726.f_1);
	unk_0x8744D2E3FC95740E(&(uParam0->f_726.f_3), uParam0->f_726.f_1);
	iVar0 = uParam0->f_726;
	iVar0++;
	uParam0->f_726 = iVar0;
	if (uParam0->f_726 == 7)
	{
		uParam0->f_726 = 5;
	}
}

void func_452(var uParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_726.f_3), uParam0->f_726);
}

void func_453(var uParam0)
{
	if (Local_161.f_4 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_161.f_4);
	}
	switch (uParam0->f_726)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			func_457(uParam0);
			break;
		
		case 3:
			uParam0->f_1096 = 0;
			uParam0->f_1097 = 0;
			break;
		
		case 4:
			func_454(uParam0);
			func_288(uParam0, 1);
			func_437(uParam0, 1);
			func_289(uParam0, 0, 0);
			break;
		
		case 5:
			break;
	}
}

void func_454(var uParam0)
{
	uParam0->f_741.f_35 = 0f;
	uParam0->f_741.f_35.f_1 = 0f;
	uParam0->f_741.f_35.f_2 = -180f;
	func_456(uParam0, 0);
	func_455(&(uParam0->f_741.f_1), func_350(uParam0), func_349(uParam0), func_348(uParam0), 20, 10, 3, 10f, 1, 0, -1f, 1);
	if (func_347())
	{
		unk_0x2A09425009DAD0F5(uParam0->f_741.f_1, func_346(), func_345());
	}
	func_344(uParam0, func_348(uParam0));
	unk_0xD7C0EA10993D3214(1, 0);
	uParam0->f_741.f_38 = { func_350(uParam0) };
	uParam0->f_741.f_41 = { func_349(uParam0) };
	if (!unk_0x9390801B06EE998F() && !unk_0xDDED2C93E8FD5B69())
	{
		unk_0x10B228D2FDB7AF16(250);
	}
}

void func_455(var uParam0, struct<3> Param1, struct<3> Param2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, float fParam10, bool bParam11)
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param2 };
	uParam0->f_7 = uParam3;
	uParam0->f_20 = iParam4;
	uParam0->f_21 = iParam5;
	uParam0->f_22 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = uParam3;
	uParam0->f_18 = uParam3;
	uParam0->f_23 = iParam8;
	uParam0->f_19 = fParam7;
	*uParam0 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x4CBC5D1BC117616B(*uParam0, 1);
	unk_0xA3774254665BAA82(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		unk_0x2A09425009DAD0F5(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
	if (fParam10 > 0f)
	{
		unk_0x3AAB5D3F3D4028CC(*uParam0, fParam10);
	}
	if (uParam0->f_23)
	{
		unk_0xCD1B743BDEC39145(iParam9);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_456(var uParam0, int iParam1)
{
	uParam0->f_741.f_33 = iParam1;
}

void func_457(var uParam0)
{
	uParam0->f_711 = unk_0x8DE4F68A9728925E(func_459(uParam0));
	uParam0->f_712 = unk_0x8DE4F68A9728925E(func_458(uParam0));
}

char* func_458(var uParam0)
{
	if (Local_161.f_7.f_10 != 0)
	{
		Call_Loc(Local_161.f_7.f_10);
		return StackVal;
	}
	return "INSTRUCTIONAL_BUTTONS";
}

char* func_459(var uParam0)
{
	if (Local_161.f_7.f_2 != 0)
	{
		Call_Loc(Local_161.f_7.f_2);
		return StackVal;
	}
	return "";
}

bool func_460(var uParam0)
{
	return BitTest(uParam0->f_726.f_3, uParam0->f_726);
}

void func_461(int iParam0)
{
	if (iLocal_172 != iParam0)
	{
	}
	iLocal_172 = iParam0;
}

void func_462()
{
	if (unk_0x834C960822A4683F() && func_463() == 25)
	{
		Global_1978795[unk_0x259BE71D8A81D4FA() /*25*/].f_20 = 1;
	}
}

int func_463()
{
	return Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_192;
}

int func_464(var uParam0)
{
	if (!func_471(uParam0))
	{
		return 0;
	}
	if (!func_466(uParam0))
	{
		return 0;
	}
	if (!func_465())
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() != -1 && !Global_1978795[unk_0x259BE71D8A81D4FA() /*25*/].f_20)
	{
		Global_1978795[unk_0x259BE71D8A81D4FA() /*25*/].f_20 = 1;
	}
	return 1;
}

int func_465()
{
	return 1;
}

int func_466(var uParam0)
{
	var uVar0;
	int iVar1;
	
	if (!BitTest(uParam0->f_1085, 1))
	{
		Call_Loc(Local_161.f_7);
		uVar0 = StackVal;
		Call_Loc(Local_161.f_7.f_1);
		iVar1 = StackVal;
		if (unk_0xD6F9DEE4765092A9(uVar0))
		{
			return 0;
		}
		if (iVar1 == 0)
		{
			return 0;
		}
		if (func_468(sVar0, iVar1))
		{
			uParam0->f_700 = func_467(sVar0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1085), true);
		}
	}
	return BitTest(uParam0->f_1085, 1);
}

int func_467(char* sParam0)
{
	if (!unk_0xD6F9DEE4765092A9(uParam0))
	{
		return unk_0x08732C0099FA1813(sParam0);
	}
	return -1;
}

bool func_468(var uParam0, int iParam1)
{
	return (func_470(uParam0) && func_469(iParam1));
}

int func_469(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!unk_0x4D05B3FECBCB8D97(iParam0))
		{
			unk_0xF1C26EB47E689774(iParam0);
		}
		return 1;
	}
	return 0;
}

int func_470(char* sParam0)
{
	if (!unk_0xD6F9DEE4765092A9(uParam0))
	{
		if (!unk_0xC13AFEAFC3F7AD96(sParam0))
		{
			unk_0x106F99CDCDEED9A0(sParam0, 0);
		}
		return 1;
	}
	return 0;
}

bool func_471(var uParam0)
{
	if (!BitTest(uParam0->f_1085, 0))
	{
		uParam0->f_1082 = func_974();
		uParam0->f_732 = { func_972() };
		uParam0->f_732.f_6 = { uParam0->f_732 };
		uParam0->f_741.f_33 = func_971();
		if (func_970() == 0)
		{
			uParam0->f_1073 = { 1561.161f, 384.824f, -48.6215f };
			uParam0->f_1073.f_3 = { -89.3034f, -0.1435f, 180f };
			uParam0->f_1073.f_6 = 69f;
		}
		else
		{
			uParam0->f_1073 = { 1561.16f, 384.8204f, -48.9135f };
			uParam0->f_1073.f_3 = { -89.5003f, -0.204f, 180f };
			uParam0->f_1073.f_6 = 69f;
		}
		if (!unk_0x834C960822A4683F())
		{
			uParam0->f_1084 = func_969();
		}
		Local_161.f_0 = 144975;
		Local_161.f_1 = 144931;
		Local_161.f_2 = 144912;
		Local_161.f_3 = 144893;
		Local_161.f_4 = 126188;
		Local_161.f_4.f_1 = 126103;
		Local_161.f_4.f_2 = 74750;
		Local_161.f_7 = 74738;
		Local_161.f_7.f_1 = 74725;
		Local_161.f_7.f_2 = 74713;
		Local_161.f_7.f_2.f_1 = 74704;
		Local_161.f_7.f_2.f_2 = 74691;
		Local_161.f_7.f_2.f_3 = 74678;
		Local_161.f_7.f_2.f_4 = 74665;
		Local_161.f_7.f_2.f_5 = 74652;
		Local_161.f_7.f_2.f_7 = 74525;
		Local_161.f_28 = 71598;
		Local_161.f_18 = 71530;
		Local_161.f_18.f_1 = 71462;
		Local_161.f_18.f_2 = 71432;
		Local_161.f_18.f_3 = 71423;
		Local_161.f_18.f_4 = 71414;
		Local_161.f_18.f_7.f_2 = 71401;
		Local_161.f_30 = 71337;
		Local_161.f_31 = 71204;
		Local_161.f_32 = 71114;
		Local_161.f_33.f_2 = 71101;
		Local_161.f_33 = 71023;
		Local_161.f_33.f_1 = 68095;
		Local_161.f_33.f_3 = 68080;
		Local_161.f_33.f_5 = 68068;
		Local_161.f_33.f_4 = 68028;
		Local_161.f_33.f_6 = 68012;
		Local_161.f_33.f_7 = 68000;
		Local_161.f_33.f_8 = 63219;
		Local_161.f_33.f_9 = 63207;
		Local_161.f_43 = 63195;
		Local_161.f_43.f_1 = 62487;
		Local_161.f_43.f_2 = 62475;
		Local_161.f_43.f_3 = 62466;
		Local_161.f_43.f_5 = 62454;
		Local_161.f_43.f_6 = 62408;
		Local_161.f_43.f_7 = 62300;
		Local_161.f_51 = 62291;
		Local_161.f_51.f_1 = 62153;
		Local_161.f_51.f_2 = 62141;
		Local_161.f_51.f_3 = 62127;
		Local_161.f_51.f_4 = 61309;
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1085), false);
	}
	return BitTest(uParam0->f_1085, 0);
}

void func_472(var uParam0)
{
	func_474(uParam0);
	if (uParam0->f_1084 == unk_0x259BE71D8A81D4FA())
	{
		func_473(uParam0);
		Global_1978795[unk_0x383461852896D73D() /*25*/].f_22 = 1;
	}
}

void func_473(var uParam0)
{
	uParam0->f_823.f_67[0] = 1;
	Global_1978795[unk_0x383461852896D73D() /*25*/].f_7[0] = 1;
}

void func_474(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch (uParam0->f_823.f_49)
	{
		case 1:
			if (uParam0->f_1084 == unk_0x259BE71D8A81D4FA())
			{
				Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[0] = 100;
				Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[1] = 0;
				Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[2] = 0;
				Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[3] = 0;
				Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[4] = 0;
			}
			uParam0->f_823.f_56[0] = 100;
			uParam0->f_823.f_56[1] = 0;
			uParam0->f_823.f_56[2] = 0;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		
		case 2:
			if (uParam0->f_1084 == unk_0x259BE71D8A81D4FA())
			{
				Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[0] = 85;
				Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[1] = 15;
				Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[2] = 0;
				Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[3] = 0;
				Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[4] = 0;
			}
			uParam0->f_823.f_56[0] = 85;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 0;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		
		case 3:
			if (uParam0->f_1084 == unk_0x259BE71D8A81D4FA())
			{
				Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[0] = 70;
				Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[1] = 15;
				Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[2] = 15;
				Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[3] = 0;
				Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[4] = 0;
			}
			uParam0->f_823.f_56[0] = 70;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 15;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		
		case 4:
			if (uParam0->f_1084 == unk_0x259BE71D8A81D4FA())
			{
				Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[0] = 55;
				Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[1] = 15;
				Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[2] = 15;
				Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[3] = 15;
				Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[4] = 0;
			}
			uParam0->f_823.f_56[0] = 55;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 15;
			uParam0->f_823.f_56[3] = 15;
			uParam0->f_823.f_56[4] = 0;
			break;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (uParam0->f_823.f_51[iVar0] != unk_0x383461852896D73D())
		{
		}
		else
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	Global_2684801.f_6589 = uParam0->f_823.f_56[iVar1];
	Global_1948392.f_29 = Global_2684801.f_6589;
}

void func_475(var uParam0)
{
	uParam0->f_707 = 1;
}

int func_476()
{
	return 120000;
}

int func_477(var uParam0)
{
	if (((((uParam0->f_1084 == -1 || Global_1979596[uParam0->f_1084 /*53*/].f_5.f_39 == 0) || Global_1979596[uParam0->f_1084 /*53*/].f_5.f_40 == -1) || Global_1979596[uParam0->f_1084 /*53*/].f_5.f_41 == -1) || Global_1979596[uParam0->f_1084 /*53*/].f_5.f_42 == -1) || Global_1979596[uParam0->f_1084 /*53*/].f_5.f_43 == 0)
	{
		return 0;
	}
	return 1;
}

int func_478(var uParam0)
{
	return 1;
}

void func_479(int iParam0)
{
	var uVar0;
	
	if (func_480(iParam0) != 14192)
	{
		uVar0 = func_7(func_480(iParam0), -1, 0);
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, (iParam0 % 32));
		func_4(func_480(iParam0), uVar0, -1, 1, 0);
	}
}

int func_480(int iParam0)
{
	switch ((iParam0 / 32))
	{
		case 0:
			return 9541;
		
		case 1:
			return 9542;
		
		default:
	}
	return 14192;
}

int func_481(int iParam0)
{
	if (func_480(iParam0) != 14192)
	{
		if (BitTest(func_7(func_480(iParam0), -1, 0), (iParam0 % 32)))
		{
			return 0;
		}
	}
	return 1;
}

char* func_482(var uParam0)
{
	return "HS4_PAVEL";
}

int func_483(var uParam0)
{
	return 2;
}

char* func_484(var uParam0)
{
	return "HS4PAAU";
}

char* func_485(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HS4PA_PS_1";
		
		case 1:
			return "HS4PA_PS_2";
		
		case 2:
			return "HS4PA_PS_3";
		
		case 3:
			return "HS4PA_PS_49";
		
		case 4:
			return "HS4PA_PS_50";
		
		case 5:
			return "HS4PA_PS_4";
		
		case 6:
			return "HS4PA_PS_5";
		
		case 7:
			return "HS4PA_PS_6";
		
		case 8:
			return "HS4PA_PS_7";
		
		case 9:
			return "HS4PA_PS_8";
		
		case 10:
			return "HS4PA_PS_15";
		
		case 11:
			return "HS4PA_PS_9";
		
		case 12:
			return "HS4PA_PS_10";
		
		case 13:
			return "HS4PA_PS_11";
		
		case 14:
			return "HS4PA_PS_51";
		
		case 15:
			return "HS4PA_PS_12";
		
		case 16:
			return "HS4PA_PS_52";
		
		case 17:
			return "HS4PA_PS_13";
		
		case 18:
			return "HS4PA_PS_14";
		
		case 19:
			return "HS4PA_PS_16";
		
		case 20:
			return "HS4PA_PS_17";
		
		case 21:
			return "HS4PA_PS_18";
		
		case 22:
			return "HS4PA_PS_19";
		
		case 23:
			return "HS4PA_PS_20";
		
		case 24:
			return "HS4PA_PS_21";
		
		case 25:
			return "HS4PA_PS_22";
		
		case 26:
			return "HS4PA_PS_23";
		
		case 27:
			return "HS4PA_PS_24";
		
		case 28:
			return "HS4PA_PS_25";
		
		case 29:
			return "HS4PA_PS_53";
		
		case 30:
			return "HS4PA_PS_26";
		
		case 31:
			return "HS4PA_PS_27";
		
		case 32:
			return "HS4PA_PS_28";
		
		case 33:
			return "HS4PA_PS_29";
		
		case 34:
			return "HS4PA_PS_30";
		
		case 35:
			return "HS4PA_PS_31";
		
		case 36:
			return "HS4PA_PS_32";
		
		case 37:
			return "HS4PA_PS_33";
		
		case 38:
			return "HS4PA_PS_34";
		
		case 39:
			return "HS4PA_PS_35";
		
		case 40:
			return "HS4PA_PS_36";
		
		case 41:
			return "HS4PA_PS_37";
		
		case 42:
			return "HS4PA_PS_38";
		
		case 43:
			return "HS4PA_PS_39";
		
		case 44:
			return "HS4PA_PS_40";
		
		case 45:
			return "HS4PA_PS_41";
		
		case 46:
			return "HS4PA_PS_42";
		
		case 47:
			return "HS4PA_PS_43";
		
		case 48:
			return "HS4PA_PS_44";
		
		case 49:
			return "HS4PA_PS_45";
		
		case 50:
			return "HS4PA_PS_46";
		
		case 51:
			return "HS4PA_PS_47";
		
		case 52:
			return "HS4PA_PS_48";
		
		default:
	}
	return "";
}

var func_486()
{
	return Global_1579631;
}

char* func_487()
{
	return "HIP_SETUP_CASH";
}

int func_488()
{
	var uVar0;
	struct<10> Var1;
	
	if (func_503())
	{
		if (func_502())
		{
			func_490(396623013, Global_262145.f_29930, &uVar0, 0, 1, 0);
		}
		else
		{
			Var1 = -1;
			Var1.f_1 = -1;
			Var1.f_2 = -1;
			Var1.f_3 = -1;
			Var1.f_4 = -1;
			Var1.f_5 = -1;
			Var1.f_6 = -1;
			Var1.f_7 = -1;
			Var1.f_8 = -1;
			Var1.f_9 = -1;
			func_489(&Var1);
			Var1.f_7 = Global_262145.f_29930;
			unk_0xDCA98A271D0CC516(Global_262145.f_29930, 0, 1, &Var1);
		}
		return 1;
	}
	return 0;
}

void func_489(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = -1;
}

void func_490(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_502())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 2115896461:
		case 797947947:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28375)
			{
				func_491(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_491(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
		case -2013760296:
		case -1033889004:
		case -2081984382:
		case 1089562091:
			if (iParam1 > 0 || Global_262145.f_28375)
			{
				func_491(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
		case 208223429:
		case -1433071892:
		case 761999406:
		case -1101941763:
		case 1748245957:
		case 1036772696:
		case -1384648535:
		case -800037808:
		case -695852120:
		case 77355315:
		case 2097889166:
		case 1707592130:
		case 1628412596:
		case 883337077:
		case -1274418755:
		case -1853979468:
		case -239888995:
		case 1163066566:
		case -955087020:
		case 1874391251:
		case 1633116913:
		case 668586600:
		case 15168061:
		case 590289134:
		case 99792878:
		case 1866258778:
		case -178394060:
		case 409592287:
		case 593836803:
		case 1973036520:
		case 2063456538:
		case -728008329:
		case 119239868:
			func_491(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_491(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_502())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_6()) || unk_0x34F31012FED51A0F())
		{
			Global_4536674 = 1;
			return 0;
		}
		if (Global_2695821)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4536675 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535172[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x54BC5E0B6A29AE8A(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x5F7C6361179DFFC4(iVar4))
		{
			*uParam0 = func_498(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535172[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535172[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4536673 = 1;
			Global_4536676 = iParam4;
			Global_4536678 = iParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4536676 = iParam4;
			Global_4536678 = iParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_497(1, iParam4);
			Global_4536673 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_492(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_492(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_126.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_493(iParam0);
	}
}

void func_493(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_502())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_496(iParam0))
		{
			if (!bVar0)
			{
				unk_0xD8EB47E09DFC393C();
			}
		}
		else if (!bVar0)
		{
			unk_0x1FDE21A286357401(Global_4535172[iParam0 /*85*/].f_66);
		}
		func_494(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_494(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_495(&(uParam0->f_14));
	func_495(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_495(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_496(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_497(int iParam0, var uParam1)
{
	Global_2697015 = uParam1;
	Global_2697014 = iParam0;
}

int func_498(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_502())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535172[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535172[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4535172[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535172[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4535172[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4535172[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535172[iVar0 /*85*/].f_66 = iParam0;
			Global_4535172[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535172[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535172[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4535172[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535172[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535172[iVar0 /*85*/].f_66.f_14 = unk_0x8034325BF6D6E41F();
			Global_4535172[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4536659 = 0;
			if (bParam6)
			{
				Global_4535172[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_499(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_499(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 45913685;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_501(Var0.f_1);
	if ((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_500();
		unk_0x01F0B819E78A18A1(1, &Var0, 36, iVar1);
	}
}

void func_500()
{
	unk_0x97A5024CE91641F1("AM_ARENA_SHP");
}

var func_501(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, bParam0);
	}
	return uVar0;
}

int func_502()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

int func_503()
{
	var uVar0;
	var uVar1;
	
	if (unk_0x0189E96FAC892B16(&uVar0, &uVar1))
	{
		func_4(9571, uVar0, -1, 1, 0);
		func_4(9572, uVar1, -1, 1, 0);
		return 1;
	}
	return 0;
}

char* func_504()
{
	return "HIP_COOLDOWN";
}

var func_505()
{
	return BitTest(Global_1981293.f_10, 6);
}

struct<16> func_506()
{
	struct<16> Var0;
	
	StringCopy(&Var0, "HIP_WARN_SETUP", 64);
	if (BitTest(Global_1981293.f_10, 7))
	{
		StringCopy(&Var0, "HIP_WARN_SETUP2", 64);
	}
	return Var0;
}

char* func_507()
{
	return "HIP_PROMPT_S";
}

var func_508()
{
	return Global_262145.f_29930;
}

void func_509()
{
	if (BitTest(Global_1981293.f_10, 7))
	{
		func_514(0);
		func_510(1, 1);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1977693.f_1085), 7);
		Global_1977693.f_1096 = 1;
	}
	else
	{
		func_514(1);
	}
}

void func_510(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_7(9511, -1, 0);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 12);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_1), 12);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, 12);
		unk_0x8744D2E3FC95740E(&(Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_1), 12);
	}
	func_4(9511, iVar0, -1, 1, 0);
	if (bParam1)
	{
		func_511(-1713398555, 18, 0);
	}
}

void func_511(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_513(iParam1, iParam2))
	{
		iVar0 = func_512();
		Global_2694420[iVar0] = iParam1;
		Global_2694431[iVar0] = iParam0;
	}
}

int func_512()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2694420[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_513(int iParam0, var uParam1)
{
	if (Global_1575048)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575060) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_514(bool bParam0)
{
	var uVar0;
	
	uVar0 = func_7(9511, -1, 0);
	unk_0x0B0C9A0F9AAEB7F0(&uVar0, false);
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_1), false);
	func_4(9511, uVar0, -1, 1, 0);
	func_526(6);
	func_525();
	func_521();
	func_516();
	func_515(1);
	if (bParam0)
	{
		func_511(-1713398555, 18, 0);
	}
}

void func_515(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_7(9511, -1, 0);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 5);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_1), 5);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, 5);
		unk_0x8744D2E3FC95740E(&(Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_1), 5);
	}
	func_4(9511, iVar0, -1, 1, 0);
}

void func_516()
{
	int iVar0;
	bool bVar1;
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
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17[24];
	int iVar18[8];
	int iVar19[7];
	int iVar20;
	int iVar21;
	float fVar22;
	
	iVar0 = unk_0xC5935DFB3F39785A(Global_262145.f_29748, Global_262145.f_29749);
	bVar1 = false;
	while (bVar1 < iVar0)
	{
		iVar17[bVar1] = 1;
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 24)
	{
		iVar2 = unk_0xC5935DFB3F39785A(0, 24);
		iVar20 = iVar17[bVar1];
		iVar17[bVar1] = iVar17[iVar2];
		iVar17[iVar2] = iVar20;
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 24)
	{
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 24)
	{
		if (iVar17[bVar1])
		{
			iVar21 = func_520(bVar1, 1);
			switch (iVar21)
			{
				case 0:
					unk_0x0B0C9A0F9AAEB7F0(&iVar3, bVar1);
					break;
				
				case 1:
					unk_0x0B0C9A0F9AAEB7F0(&iVar5, bVar1);
					break;
				
				case 2:
					unk_0x0B0C9A0F9AAEB7F0(&iVar7, bVar1);
					break;
				
				case 3:
					unk_0x0B0C9A0F9AAEB7F0(&iVar9, bVar1);
					break;
				}
		}
		bVar1++;
	}
	if (!func_362(unk_0x259BE71D8A81D4FA()))
	{
		unk_0x8744D2E3FC95740E(&iVar3, 6);
		unk_0x8744D2E3FC95740E(&iVar3, 7);
		unk_0x0B0C9A0F9AAEB7F0(&iVar5, 6);
		unk_0x0B0C9A0F9AAEB7F0(&iVar5, 7);
		unk_0x8744D2E3FC95740E(&iVar7, 6);
		unk_0x8744D2E3FC95740E(&iVar7, 7);
		unk_0x8744D2E3FC95740E(&iVar9, 6);
		unk_0x8744D2E3FC95740E(&iVar9, 7);
		unk_0x8744D2E3FC95740E(&iVar3, 11);
		unk_0x8744D2E3FC95740E(&iVar3, 12);
		unk_0x8744D2E3FC95740E(&iVar5, 11);
		unk_0x8744D2E3FC95740E(&iVar5, 12);
		unk_0x8744D2E3FC95740E(&iVar7, 11);
		unk_0x8744D2E3FC95740E(&iVar7, 12);
		unk_0x8744D2E3FC95740E(&iVar9, 11);
		unk_0x8744D2E3FC95740E(&iVar9, 12);
	}
	iVar0 = unk_0xC5935DFB3F39785A(Global_262145.f_29750, Global_262145.f_29751);
	bVar1 = false;
	while (bVar1 < iVar0)
	{
		iVar18[bVar1] = 1;
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 8)
	{
		iVar2 = unk_0xC5935DFB3F39785A(0, 8);
		iVar20 = iVar18[bVar1];
		iVar18[bVar1] = iVar18[iVar2];
		iVar18[iVar2] = iVar20;
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 8)
	{
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 8)
	{
		if (iVar18[bVar1])
		{
			iVar21 = func_520(bVar1, 0);
			switch (iVar21)
			{
				case 0:
					unk_0x0B0C9A0F9AAEB7F0(&iVar4, bVar1);
					break;
				
				case 1:
					unk_0x0B0C9A0F9AAEB7F0(&iVar6, bVar1);
					break;
				
				case 2:
					unk_0x0B0C9A0F9AAEB7F0(&iVar8, bVar1);
					break;
				
				case 3:
					unk_0x0B0C9A0F9AAEB7F0(&iVar10, bVar1);
					break;
				}
		}
		bVar1++;
	}
	iVar0 = unk_0xC5935DFB3F39785A(Global_262145.f_29752, Global_262145.f_29753);
	bVar1 = false;
	while (bVar1 < iVar0)
	{
		iVar19[bVar1] = 1;
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 7)
	{
		iVar2 = unk_0xC5935DFB3F39785A(0, 7);
		iVar20 = iVar19[bVar1];
		iVar19[bVar1] = iVar19[iVar2];
		iVar19[iVar2] = iVar20;
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 7)
	{
		if (iVar19[bVar1])
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar11, bVar1);
		}
		bVar1++;
	}
	iVar12 = unk_0xC5935DFB3F39785A(Global_262145.f_29754, Global_262145.f_29755 + 1);
	iVar13 = unk_0xC5935DFB3F39785A(Global_262145.f_29756, Global_262145.f_29757 + 1);
	iVar14 = unk_0xC5935DFB3F39785A(Global_262145.f_29758, Global_262145.f_29759 + 1);
	iVar15 = unk_0xC5935DFB3F39785A(Global_262145.f_29760, Global_262145.f_29761 + 1);
	iVar16 = unk_0xC5935DFB3F39785A(Global_262145.f_29762, Global_262145.f_29763 + 1);
	iVar12 = ceil((to_float(iVar12) / 100f)) * 100;
	iVar13 = ceil((to_float(iVar13) / 100f)) * 100;
	iVar14 = ceil((to_float(iVar14) / 100f)) * 100;
	iVar15 = ceil((to_float(iVar15) / 100f)) * 100;
	iVar16 = ceil((to_float(iVar16) / 100f)) * 100;
	fVar22 = func_517();
	if (fVar22 != 1f)
	{
		iVar12 = ceil((IntToFloat(iVar12) * fVar22));
		iVar13 = ceil((IntToFloat(iVar13) * fVar22));
		iVar14 = ceil((IntToFloat(iVar14) * fVar22));
		iVar15 = ceil((IntToFloat(iVar15) * fVar22));
		iVar16 = ceil((IntToFloat(iVar16) * fVar22));
	}
	func_4(9495, iVar3, -1, 1, 0);
	func_4(9496, iVar4, -1, 1, 0);
	func_4(9497, iVar12, -1, 1, 0);
	func_4(9498, iVar5, -1, 1, 0);
	func_4(9499, iVar6, -1, 1, 0);
	func_4(9500, iVar13, -1, 1, 0);
	func_4(9501, iVar7, -1, 1, 0);
	func_4(9502, iVar8, -1, 1, 0);
	func_4(9503, iVar14, -1, 1, 0);
	func_4(9504, iVar9, -1, 1, 0);
	func_4(9505, iVar10, -1, 1, 0);
	func_4(9506, iVar15, -1, 1, 0);
	func_4(9507, iVar11, -1, 1, 0);
	func_4(9508, iVar16, -1, 1, 0);
}

float func_517()
{
	switch (func_518(1))
	{
		case 0:
			return Global_262145.f_29905;
		
		case 1:
			return Global_262145.f_29906;
		
		case 2:
			return Global_262145.f_29907;
		
		case 3:
			return Global_262145.f_29908;
		
		case 4:
			return Global_262145.f_29909;
		
		case 5:
			return Global_262145.f_29910;
		
		default:
	}
	return 1f;
}

int func_518(bool bParam0)
{
	if (bParam0)
	{
		return func_7(9489, -1, 0);
	}
	return func_519(unk_0x259BE71D8A81D4FA());
}

int func_519(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1979596[iParam0 /*53*/].f_5.f_9;
	}
	return -1;
}

int func_520(bool bParam0, bool bParam1)
{
	var uVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	
	if (bParam1)
	{
		uVar0[0] = Global_262145.f_29766[bParam0];
		uVar0[1] = Global_262145.f_29791[bParam0];
		uVar0[2] = Global_262145.f_29816[bParam0];
		uVar0[3] = Global_262145.f_29841[bParam0];
	}
	else
	{
		uVar0[0] = Global_262145.f_29866[bParam0];
		uVar0[1] = Global_262145.f_29875[bParam0];
		uVar0[2] = Global_262145.f_29884[bParam0];
		uVar0[3] = Global_262145.f_29893[bParam0];
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		fVar1 = (fVar1 + uVar0[iVar4]);
		iVar4++;
	}
	fVar3 = unk_0xD2AA6F822D3A55D2(0f, fVar1);
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		fVar2 = (fVar2 + uVar0[iVar4]);
		if (fVar3 < fVar2)
		{
			iVar5 = iVar4;
			return iVar5;
		}
		iVar4++;
	}
	return -1;
}

void func_521()
{
	var uVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	if (!func_524(0))
	{
		func_4(9489, 4, -1, 1, 0);
		return;
	}
	if (Global_262145.f_29922 != 0)
	{
		if (func_523(9360, -1) != Global_262145.f_29922)
		{
			func_4(9489, 5, -1, 1, 0);
			return;
		}
	}
	if (func_522())
	{
		uVar0[0] = Global_262145.f_29916;
		uVar0[1] = Global_262145.f_29917;
		uVar0[2] = Global_262145.f_29918;
		uVar0[3] = Global_262145.f_29919;
	}
	else
	{
		uVar0[0] = Global_262145.f_29911;
		uVar0[1] = Global_262145.f_29912;
		uVar0[2] = Global_262145.f_29913;
		uVar0[3] = Global_262145.f_29914;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		fVar1 = (fVar1 + uVar0[iVar4]);
		iVar4++;
	}
	fVar3 = unk_0xD2AA6F822D3A55D2(0f, fVar1);
	iVar4 = 0;
	while (iVar4 < 4)
	{
		fVar2 = (fVar2 + uVar0[iVar4]);
		if (fVar3 < fVar2)
		{
			func_4(9489, iVar4, -1, 1, 0);
			return;
		}
		iVar4++;
	}
}

int func_522()
{
	if (Global_262145.f_29921 == -1)
	{
		return 0;
	}
	if (BitTest(Global_1981293.f_10, 21))
	{
		return 0;
	}
	return 1;
}

int func_523(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	return unk_0x03CFFD51CE515454(iParam0, iParam1);
}

bool func_524(bool bParam0)
{
	if (bParam0)
	{
		return BitTest(func_7(9511, -1, 0), 1);
	}
	return func_362(unk_0x259BE71D8A81D4FA());
}

void func_525()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = unk_0xC5935DFB3F39785A(0, 3 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	bVar0 = unk_0xC5935DFB3F39785A(4, 7 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	bVar0 = unk_0xC5935DFB3F39785A(8, 11 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	bVar0 = unk_0xC5935DFB3F39785A(12, 15 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	func_4(9490, iVar1, -1, 1, 0);
	iVar1 = 0;
	bVar0 = unk_0xC5935DFB3F39785A(0, 3 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	bVar0 = unk_0xC5935DFB3F39785A(4, 7 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	bVar0 = unk_0xC5935DFB3F39785A(8, 11 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	bVar0 = unk_0xC5935DFB3F39785A(12, 15 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	func_4(9491, iVar1, -1, 1, 0);
	iVar1 = 0;
	bVar0 = unk_0xC5935DFB3F39785A(0, 3 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	bVar0 = unk_0xC5935DFB3F39785A(4, 7 + 1);
	if (!func_362(unk_0x259BE71D8A81D4FA()))
	{
		bVar0 = 6;
	}
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	bVar0 = unk_0xC5935DFB3F39785A(8, 11 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	bVar0 = unk_0xC5935DFB3F39785A(12, 15 + 1);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, bVar0);
	func_4(9492, iVar1, -1, 1, 0);
}

void func_526(int iParam0)
{
	if (iParam0 == 6)
	{
		iParam0 = unk_0xC5935DFB3F39785A(0 + 1, 6);
	}
	func_4(9493, iParam0, -1, 1, 0);
}

int func_527()
{
	return func_528(1);
}

int func_528(bool bParam0)
{
	if (bParam0)
	{
		return BitTest(func_7(9511, -1, 0), 0);
	}
	return func_529(unk_0x259BE71D8A81D4FA());
}

int func_529(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_1, 0);
	}
	return 0;
}

bool func_530()
{
	return func_524(1);
}

int func_531(var uParam0)
{
	return func_532(0);
}

int func_532(int iParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_533(iParam0);
	iVar1 = unk_0xEAA437DE2A801E8A(uVar0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	return -1;
}

int func_533(int iParam0)
{
	if (iParam0 == -1 || iParam0 == 11)
	{
		return 0;
	}
	return Global_262145.f_29933[iParam0];
}

int func_534()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_159) && func_75(iLocal_160, 1, 1))
	{
		if ((!func_118() && !func_117()) && !func_116())
		{
			if ((unk_0xAB74A6FE5E16479E(iLocal_159) != joaat("Rm_Command") && unk_0xAB74A6FE5E16479E(iLocal_159) != joaat("Rm_Stair1")) && unk_0xAB74A6FE5E16479E(iLocal_159) != joaat("Rm_Room2"))
			{
				return 1;
			}
		}
	}
	if (Global_1950108.f_3693 == 147)
	{
		return 1;
	}
	return 0;
}

char* func_535(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_362(iLocal_160) && !func_17(iLocal_160, 0))
			{
				return "HIP_HELP_BBOSS2";
			}
			return "HIP_HELP_BBOSS";
		
		default:
	}
	return "";
}

float func_536()
{
	return 0.1f;
}

int func_537()
{
	return 0;
}

int func_538()
{
	return 0;
}

float func_539(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 69f;
		
		default:
	}
	return 0f;
}

Vector3 func_540(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_970() == 0)
			{
				return -89.3034f, -0.1435f, 180f;
			}
			return -89.5003f, -0.204f, 180f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_541(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_970() == 0)
			{
				return 1561.161f, 384.824f, -48.6215f;
			}
			return 1561.16f, 384.8204f, -48.9135f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_542(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	
	if ((iLocal_133 || iLocal_134) || (Local_176.f_6 != -1 && !func_439(Local_176.f_6)))
	{
		return;
	}
	iVar0 = uParam0->f_806;
	func_554(uParam0, iParam1, iVar0);
	switch (iParam1)
	{
		case 0:
			if (iLocal_154 != 0)
			{
				return;
			}
			func_553(uParam0->f_711, 188);
			func_552(uParam0->f_711);
			break;
		
		case 1:
			if (iLocal_154 != 0)
			{
				return;
			}
			func_553(uParam0->f_711, 187);
			func_552(uParam0->f_711);
			break;
		
		case 2:
			if (func_361(iVar0))
			{
				func_549(uParam0, iVar0, iParam1);
			}
			else
			{
				func_553(uParam0->f_711, 189);
				func_552(uParam0->f_711);
			}
			break;
		
		case 3:
			if (func_361(iVar0))
			{
				func_549(uParam0, iVar0, iParam1);
			}
			else
			{
				func_553(uParam0->f_711, 190);
				func_552(uParam0->f_711);
			}
			break;
		
		case 8:
			if (Local_176.f_6 != -1)
			{
				return;
			}
			func_553(uParam0->f_711, 205);
			func_552(uParam0->f_711);
			break;
		
		case 9:
			if (Local_176.f_6 != -1)
			{
				return;
			}
			func_553(uParam0->f_711, 206);
			func_552(uParam0->f_711);
			break;
		
		case 4:
			if (func_548(uParam0, iVar0))
			{
				func_553(uParam0->f_711, 201);
				func_547(uParam0->f_711);
				func_552(uParam0->f_711);
			}
			if (iVar0 == 5 || iVar0 == 65)
			{
				if (!bLocal_139)
				{
					bLocal_139 = true;
				}
			}
			break;
		
		case 5:
			if (iLocal_154 != 0)
			{
				func_545(uParam0);
			}
			else if (func_410(iVar0))
			{
				if (Local_176.f_6 == -1)
				{
					if (unk_0x834C960822A4683F())
					{
						uParam0->f_1086 = 1;
					}
					else
					{
						unk_0x0B0C9A0F9AAEB7F0(uParam2, false);
					}
				}
			}
			else
			{
				func_553(uParam0->f_711, 202);
				func_552(uParam0->f_711);
				if (func_544(iVar0))
				{
					if (bLocal_139)
					{
						bLocal_139 = false;
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_154 != 0)
			{
				return;
			}
			if (!func_409(uParam0))
			{
				return;
			}
			bLocal_139 = !bLocal_139;
			break;
		
		case 7:
			if (iLocal_154 != 0)
			{
				return;
			}
			if (Local_176.f_6 != -1)
			{
				return;
			}
			iLocal_137 = !iLocal_137;
			break;
		
		case 15:
			if (func_361(iVar0))
			{
				iVar1 = unk_0xB23E0F9B63D009A8(uParam0->f_823.f_51[func_543(iVar0)]);
				Var2 = { func_206(iVar1) };
				func_34(uParam0, 5);
				unk_0xAD9DEC6201018EA3(&Var2);
			}
			break;
	}
}

int func_543(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 0;
		
		case 106:
			return 1;
		
		case 107:
			return 2;
		
		case 108:
			return 3;
		
		default:
	}
	return -1;
}

int func_544(int iParam0)
{
	switch (iParam0)
	{
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 85:
		case 86:
			return 1;
		
		default:
	}
	return 0;
}

void func_545(var uParam0)
{
	iLocal_154 = 0;
	uParam0->f_707 = 1;
	func_546(uParam0->f_711);
}

void func_546(var uParam0)
{
	unk_0xB750FE3C9F094356(uParam0, "HIDE_OVERLAY");
}

void func_547(var uParam0)
{
	unk_0x88F483FBD433696A(uParam0, "REQUEST_CURRENT_SELECTION");
	uLocal_132 = unk_0x6CA3F2B87712B6A4();
	iLocal_134 = 1;
}

int func_548(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			if (unk_0x834C960822A4683F() && uParam0->f_1084 != iLocal_160)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_549(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1084 != unk_0x259BE71D8A81D4FA())
	{
		return;
	}
	if (uParam0->f_823.f_49 == 1)
	{
		func_34(uParam0, 4);
		return;
	}
	if (func_551(3))
	{
		func_9("CUTS_LOCKED", -1);
		func_34(uParam0, 7);
		return;
	}
	switch (iParam2)
	{
		case 2:
			iVar0 = -5;
			break;
		
		case 3:
			if (uParam0->f_823.f_56[4] >= 5)
			{
				iVar0 = 5;
			}
			break;
	}
	iVar1 = func_543(iParam1);
	func_550(uParam0, iVar1, iVar0);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar1++;
	}
}

void func_550(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 15;
	iVar1 = 85;
	if (uParam0->f_823.f_49 == 1)
	{
		iVar1 = 100;
	}
	if (iParam2 < 0)
	{
		iVar2 = uParam0->f_823.f_56[iParam1];
		if (iVar2 < unk_0x510D0699BE9C6D06(iParam2))
		{
			iParam2 = iVar2;
		}
		if (uParam0->f_823.f_56[iParam1] < iVar0)
		{
			iVar3 = (iVar0 - uParam0->f_823.f_56[iParam1]);
			uParam0->f_823.f_56[iParam1] = (uParam0->f_823.f_56[iParam1] + iVar3);
			func_34(uParam0, 4);
		}
		else if (uParam0->f_823.f_56[iParam1] == iVar0)
		{
			func_34(uParam0, 4);
		}
		else
		{
			if (uParam0->f_823.f_56[4] <= (100 - unk_0x510D0699BE9C6D06(iParam2)))
			{
				uParam0->f_823.f_56[4] = (uParam0->f_823.f_56[4] + unk_0x510D0699BE9C6D06(iParam2));
				uParam0->f_823.f_56[iParam1] = (uParam0->f_823.f_56[iParam1] - unk_0x510D0699BE9C6D06(iParam2));
			}
			if (iParam2 == 0)
			{
				func_34(uParam0, 4);
			}
			else
			{
				func_34(uParam0, 13);
			}
		}
		if (uParam0->f_823.f_56[iParam1] <= iVar0)
		{
			if (!func_12("HEIST_NOTE_6"))
			{
				unk_0x428C32CC68809A35(1);
				func_9("HEIST_NOTE_6", 5000);
			}
		}
	}
	else
	{
		iVar4 = uParam0->f_823.f_56[4];
		if (iVar4 < unk_0x510D0699BE9C6D06(iParam2))
		{
			iParam2 = iVar4;
		}
		if (uParam0->f_823.f_56[iParam1] > iVar1)
		{
			iVar5 = (uParam0->f_823.f_56[iParam1] - iVar1);
			uParam0->f_823.f_56[4] = (uParam0->f_823.f_56[4] + iVar5);
			func_34(uParam0, 4);
		}
		else if (uParam0->f_823.f_56[iParam1] == iVar1)
		{
			func_34(uParam0, 4);
		}
		else
		{
			if (uParam0->f_823.f_56[4] >= unk_0x510D0699BE9C6D06(iParam2))
			{
				uParam0->f_823.f_56[4] = (uParam0->f_823.f_56[4] - unk_0x510D0699BE9C6D06(iParam2));
				uParam0->f_823.f_56[iParam1] = (uParam0->f_823.f_56[iParam1] + unk_0x510D0699BE9C6D06(iParam2));
			}
			if (iParam2 == 0)
			{
				func_34(uParam0, 4);
			}
			else
			{
				func_34(uParam0, 12);
			}
		}
		if (uParam0->f_823.f_56[iParam1] >= iVar1)
		{
			if (!func_12("HEIST_NOTE_5"))
			{
				unk_0x428C32CC68809A35(1);
				func_9("HEIST_NOTE_5", 5000);
			}
		}
	}
}

int func_551(int iParam0)
{
	if (Global_262145.f_33902 == -1)
	{
		return 0;
	}
	if (BitTest(Global_1983551, 4))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			return BitTest(Global_1983551, 0);
		
		case 1:
			return BitTest(Global_1983551, 1);
		
		case 2:
			return BitTest(Global_1983551, 2);
		
		case 3:
			return BitTest(Global_1983551, 3);
		
		default:
	}
	return 0;
}

void func_552(var uParam0)
{
	unk_0x88F483FBD433696A(uParam0, "REQUEST_CURRENT_ROLLOVER");
	uLocal_131 = unk_0x6CA3F2B87712B6A4();
	iLocal_133 = 1;
}

void func_553(var uParam0, int iParam1)
{
	unk_0xDBCE37B37A697642(uParam0, "SET_INPUT_EVENT", to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_554(var uParam0, int iParam1, int iParam2)
{
	if (!func_17(uParam0->f_1084, 0) && !func_362(uParam0->f_1084))
	{
		switch (iParam1)
		{
			case 0:
			case 1:
			case 8:
			case 9:
				func_34(uParam0, 4);
				return;
				break;
			}
	}
	switch (iParam1)
	{
		case 0:
			if (func_361(iParam2) && uParam0->f_823.f_49 == 1)
			{
				func_34(uParam0, 4);
				return;
			}
			if (iLocal_154 == 0)
			{
				func_34(uParam0, 0);
				if (!func_361(iParam2))
				{
					if (func_557(iParam2))
					{
						func_34(uParam0, 21);
					}
					else
					{
						func_34(uParam0, 22);
					}
				}
			}
			else
			{
				func_34(uParam0, 4);
			}
			break;
		
		case 1:
			if (func_361(iParam2) && uParam0->f_823.f_49 == 1)
			{
				func_34(uParam0, 4);
				return;
			}
			if (iLocal_154 == 0)
			{
				func_34(uParam0, 0);
				if (!func_361(iParam2))
				{
					if (func_557(iParam2))
					{
						func_34(uParam0, 21);
					}
					else
					{
						func_34(uParam0, 22);
					}
				}
			}
			else
			{
				func_34(uParam0, 4);
			}
			break;
		
		case 2:
			if (iLocal_154 == 0)
			{
				if (iParam2 == 1000)
				{
					func_34(uParam0, 1);
				}
				else if (!func_361(iParam2))
				{
					func_34(uParam0, 4);
				}
			}
			else if (iLocal_154 > 0)
			{
				if (iParam2 == 1002)
				{
					func_34(uParam0, 1);
				}
				else
				{
					func_34(uParam0, 4);
				}
			}
			break;
		
		case 3:
			if (iLocal_154 == 0)
			{
				if (unk_0x834C960822A4683F())
				{
					if ((func_8(iParam2, 2) && !func_361(iParam2)) && func_555(uParam0))
					{
						func_34(uParam0, 1);
					}
					else
					{
						func_34(uParam0, 4);
					}
				}
				else if (func_8(iParam2, 2) && iParam2 != 1000)
				{
					func_34(uParam0, 1);
				}
				else
				{
					func_34(uParam0, 4);
				}
			}
			else if (iLocal_154 > 0)
			{
				if (iParam2 == 1001)
				{
					func_34(uParam0, 1);
				}
				else
				{
					func_34(uParam0, 4);
				}
			}
			break;
		
		case 8:
			func_34(uParam0, 1);
			break;
		
		case 9:
			func_34(uParam0, 1);
			break;
		
		case 4:
			if (bLocal_143)
			{
				func_34(uParam0, 5);
			}
			else
			{
				func_34(uParam0, 7);
			}
			break;
		
		case 5:
			if (!func_410(iParam2))
			{
				func_34(uParam0, 6);
			}
			break;
		
		case 6:
			if (func_409(uParam0) && iLocal_154 == 0)
			{
				func_34(uParam0, 8);
			}
			break;
		
		case 7:
			if (func_363(uParam0, iParam2) && iLocal_154 == 0)
			{
				func_34(uParam0, 9);
			}
			break;
	}
}

int func_555(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0->f_806;
	if (func_556(iVar0) != 2)
	{
		return 0;
	}
	if (uParam0->f_1084 == unk_0x259BE71D8A81D4FA() && unk_0x834C960822A4683F())
	{
		if (Global_1979596[uParam0->f_1084 /*53*/].f_5.f_39 == 0)
		{
			return 0;
		}
		if (Global_1979596[uParam0->f_1084 /*53*/].f_5.f_40 == -1)
		{
			return 0;
		}
		if (Global_1979596[uParam0->f_1084 /*53*/].f_5.f_41 == -1)
		{
			return 0;
		}
		if (Global_1979596[uParam0->f_1084 /*53*/].f_5.f_42 == -1)
		{
			return 0;
		}
		if (Global_1979596[uParam0->f_1084 /*53*/].f_5.f_43 == 0)
		{
			return 0;
		}
		if (Global_1978795[uParam0->f_1084 /*25*/].f_12[4] > 0)
		{
			return 0;
		}
		iVar1 = 1;
		while (iVar1 <= 3)
		{
			if (uParam0->f_823.f_51[iVar1] == -1)
			{
			}
			else if (uParam0->f_823.f_67[iVar1] == 0)
			{
				return 0;
			}
			iVar1++;
		}
	}
	return 1;
}

int func_556(int iParam0)
{
	if (func_8(iParam0, 0))
	{
		return 0;
	}
	else if (func_8(iParam0, 1))
	{
		return 1;
	}
	return 2;
}

int func_557(int iParam0)
{
	switch (iParam0)
	{
		case 36:
		case 37:
		case 38:
		case 39:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 91:
		case 92:
			return 0;
		
		default:
	}
	return 1;
}

void func_558(var uParam0)
{
	char* sVar0;
	char* sVar1;
	
	if (BitTest(Global_1944833.f_233, 1))
	{
		sVar1 = "hs4f_int";
		sVar0 = "cutscene_ui_3_screen_island_2";
	}
	else if (BitTest(Global_1944833.f_233, 0))
	{
		sVar1 = "hs4f_int";
		sVar0 = "cutscene_ui_3_screen_island_3";
	}
	unk_0x61055542D9D877AE(uParam0->f_700);
	unk_0x9A122D542F2BB60E(73, 73);
	unk_0xA4F67CEB594AE064(4);
	unk_0xA66AC5949E305457(1);
	unk_0xF13626F74924F72A(sVar1, sVar0, 0.5f, 0.75f, 1f, 0.5f, 0f, 255, 255, 255, 255, 0);
	unk_0x90B531766063C5CD();
	unk_0x61055542D9D877AE(unk_0xB803C9D209A7C3DC());
}

float func_559()
{
	return 0.5f;
}

float func_560()
{
	return 0.5f;
}

float func_561()
{
	return 0.75f;
}

float func_562()
{
	return 0.25f;
}

int func_563()
{
	return 1;
}

char* func_564()
{
	return "ISLAND_HEIST_BOARD";
}

int func_565()
{
	return joaat("h4_int_sub_command_table");
}

char* func_566()
{
	return "submarine_table";
}

void func_567(var uParam0)
{
	switch (uParam0->f_726)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0x834C960822A4683F() && !iLocal_145)
			{
				unk_0xD0D00ED689D6CA81("HS4F_INT", 0);
				iLocal_145 = 1;
			}
			func_853(uParam0);
			break;
		
		case 3:
			func_830(uParam0);
			break;
		
		case 4:
			func_826(uParam0);
			func_601(uParam0);
			func_830(uParam0);
			func_568(uParam0);
			break;
		
		case 5:
			break;
	}
}

void func_568(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (!unk_0x834C960822A4683F())
	{
		return;
	}
	iVar3 = unk_0x383461852896D73D();
	iVar2 = uParam0->f_1084;
	if (iVar2 == -1)
	{
		return;
	}
	if (uParam0->f_1084 == unk_0x259BE71D8A81D4FA())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iVar0 >= 4)
			{
				if (Global_1978795[iVar3 /*25*/].f_12[4] != uParam0->f_823.f_56[4])
				{
					Global_1978795[iVar3 /*25*/].f_12[4] = uParam0->f_823.f_56[4];
				}
			}
			else
			{
				if (Global_1978795[iVar3 /*25*/].f_12[iVar0] != uParam0->f_823.f_56[iVar0])
				{
					Global_1978795[iVar3 /*25*/].f_12[iVar0] = uParam0->f_823.f_56[iVar0];
					if (uParam0->f_823.f_51[iVar0] == unk_0x383461852896D73D())
					{
						Global_2684801.f_6589 = Global_1978795[iVar3 /*25*/].f_12[iVar0];
						Global_1948392.f_29 = Global_2684801.f_6589;
					}
					iLocal_149 = 1;
				}
				if (Global_1978795[iVar3 /*25*/].f_2[iVar0] != uParam0->f_823.f_51[iVar0])
				{
					Global_1978795[iVar3 /*25*/].f_2[iVar0] = uParam0->f_823.f_51[iVar0];
				}
				iVar1 = 0;
				while (iVar1 <= 31)
				{
					if (uParam0->f_823.f_51[iVar0] != iVar1 || uParam0->f_823.f_51[iVar0] == uParam0->f_1084)
					{
					}
					else if (uParam0->f_823.f_67[iVar0] != Global_1978795[iVar1 /*25*/].f_7[iVar0])
					{
						uParam0->f_823.f_67[iVar0] = Global_1978795[iVar1 /*25*/].f_7[iVar0];
						if (uParam0->f_823.f_67[iVar0] == 1)
						{
							func_34(uParam0, 16);
						}
						else
						{
							func_34(uParam0, 17);
						}
						Global_1978795[iVar3 /*25*/].f_7[iVar0] = uParam0->f_823.f_67[iVar0];
						iLocal_149 = 1;
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
	else
	{
		if (Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_39 != Global_1979596[uParam0->f_1084 /*53*/].f_5.f_39)
		{
			func_596(uParam0, func_600(Global_1979596[uParam0->f_1084 /*53*/].f_5.f_39));
		}
		if (Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_40 != Global_1979596[uParam0->f_1084 /*53*/].f_5.f_40)
		{
			func_579(uParam0, func_595(Global_1979596[uParam0->f_1084 /*53*/].f_5.f_40));
		}
		if (Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_41 != Global_1979596[uParam0->f_1084 /*53*/].f_5.f_41)
		{
			func_576(uParam0, func_578(Global_1979596[uParam0->f_1084 /*53*/].f_5.f_41));
		}
		if (Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_42 != Global_1979596[uParam0->f_1084 /*53*/].f_5.f_42)
		{
			func_573(uParam0, func_575(Global_1979596[uParam0->f_1084 /*53*/].f_5.f_42));
		}
		if (Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_43 != Global_1979596[uParam0->f_1084 /*53*/].f_5.f_43)
		{
			func_569(uParam0, func_572(Global_1979596[uParam0->f_1084 /*53*/].f_5.f_43));
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (uParam0->f_823.f_51[iVar0] != unk_0x383461852896D73D())
			{
			}
			else
			{
				Global_1978795[unk_0x383461852896D73D() /*25*/].f_7[iVar0] = uParam0->f_823.f_67[iVar0];
				iVar4 = iVar0;
			}
			iVar0++;
		}
		bVar5 = true;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (Global_1978795[iVar2 /*25*/].f_2[iVar0] != 0)
			{
				bVar5 = false;
			}
			iVar0++;
		}
		if (bVar5)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iVar0 >= 4)
			{
				if (uParam0->f_823.f_56[4] != Global_1978795[iVar2 /*25*/].f_12[4])
				{
					uParam0->f_823.f_56[4] = Global_1978795[iVar2 /*25*/].f_12[4];
				}
			}
			else
			{
				if (uParam0->f_823.f_56[iVar0] != Global_1978795[iVar2 /*25*/].f_12[iVar0])
				{
					uParam0->f_823.f_56[iVar0] = Global_1978795[iVar2 /*25*/].f_12[iVar0];
					if (iVar4 == iVar0)
					{
						Global_2684801.f_6589 = Global_1978795[iVar2 /*25*/].f_12[iVar0];
						Global_1948392.f_29 = Global_2684801.f_6589;
					}
					iLocal_149 = 1;
				}
				if (uParam0->f_823.f_51[iVar0] != Global_1978795[iVar2 /*25*/].f_2[iVar0])
				{
					uParam0->f_823.f_51[iVar0] = Global_1978795[iVar2 /*25*/].f_2[iVar0];
				}
				if (uParam0->f_823.f_67[iVar0] != Global_1978795[iVar2 /*25*/].f_7[iVar0])
				{
					if (iVar4 != iVar0)
					{
						uParam0->f_823.f_67[iVar0] = Global_1978795[iVar2 /*25*/].f_7[iVar0];
						if (uParam0->f_823.f_67[iVar0] == 1)
						{
							func_34(uParam0, 16);
						}
						else
						{
							func_34(uParam0, 17);
						}
						iLocal_149 = 1;
					}
				}
			}
			iVar0++;
		}
	}
}

void func_569(var uParam0, bool bParam1)
{
	if (!unk_0x834C960822A4683F())
	{
		return;
	}
	func_571(uParam0);
	func_570(uParam0->f_711, bParam1, 1);
	switch (bParam1)
	{
		case 91:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_43 = 1;
			break;
		
		case 92:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_43 = 2;
			break;
	}
}

void func_570(var uParam0, bool bParam1, int iParam2)
{
	unk_0x88F483FBD433696A(uParam0, "SET_FINALE_ITEM_SELECTED");
	unk_0x330108B080A2132F(bParam1);
	unk_0x557F1E2300EF1A3E(iParam2);
	unk_0xE6B753D52F4CA222();
}

void func_571(var uParam0)
{
	func_570(uParam0->f_711, 91, 0);
	func_570(uParam0->f_711, 92, 0);
}

int func_572(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 91;
		
		case 2:
			return 92;
		
		default:
	}
	return 0;
}

void func_573(var uParam0, bool bParam1)
{
	if (!unk_0x834C960822A4683F())
	{
		return;
	}
	func_574(uParam0);
	func_570(uParam0->f_711, bParam1, 1);
	switch (bParam1)
	{
		case 87:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_42 = 0;
			break;
		
		case 88:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_42 = 1;
			break;
		
		case 89:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_42 = 2;
			break;
		
		case 90:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_42 = 3;
			break;
	}
}

void func_574(var uParam0)
{
	func_570(uParam0->f_711, 87, 0);
	func_570(uParam0->f_711, 88, 0);
	func_570(uParam0->f_711, 89, 0);
	func_570(uParam0->f_711, 90, 0);
}

int func_575(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		
		case 1:
			return 88;
		
		case 2:
			return 89;
		
		case 3:
			return 90;
		
		default:
	}
	return 0;
}

void func_576(var uParam0, bool bParam1)
{
	if (!unk_0x834C960822A4683F())
	{
		return;
	}
	func_577(uParam0);
	func_570(uParam0->f_711, bParam1, 1);
	switch (bParam1)
	{
		case 85:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_41 = 0;
			break;
		
		case 86:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_41 = 5;
			break;
	}
}

void func_577(var uParam0)
{
	func_570(uParam0->f_711, 85, 0);
	func_570(uParam0->f_711, 86, 0);
}

int func_578(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 85;
		
		case 5:
			return 86;
		
		default:
	}
	return 0;
}

void func_579(var uParam0, bool bParam1)
{
	if (!unk_0x834C960822A4683F())
	{
		return;
	}
	func_594(uParam0);
	func_570(uParam0->f_711, bParam1, 1);
	if (bParam1 == 84)
	{
		func_593(uParam0);
	}
	else
	{
		func_580(uParam0);
	}
	switch (bParam1)
	{
		case 77:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_40 = 0;
			break;
		
		case 78:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_40 = 1;
			break;
		
		case 79:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_40 = 2;
			break;
		
		case 80:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_40 = 3;
			break;
		
		case 81:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_40 = 4;
			break;
		
		case 82:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_40 = 5;
			break;
		
		case 83:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_40 = 6;
			break;
		
		case 84:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_40 = 7;
			break;
	}
}

void func_580(var uParam0)
{
	struct<9> Var0;
	int iVar1;
	int iVar2;
	
	func_570(uParam0->f_711, 85, 0);
	func_592(uParam0->f_711, 85);
	func_570(uParam0->f_711, 86, 0);
	func_592(uParam0->f_711, 86);
	Local_125[0 /*9*/] = { Var0 };
	Local_125[1 /*9*/] = { Var0 };
	if (func_17(uParam0->f_1084, 8))
	{
		func_583(uParam0, &(Local_125[iVar1 /*9*/]), 65, 85);
		iVar1++;
	}
	if (func_17(uParam0->f_1084, 9))
	{
		func_583(uParam0, &(Local_125[iVar1 /*9*/]), 65, 86);
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		func_581(uParam0->f_711, Local_125[iVar2 /*9*/], 0);
		iVar2++;
	}
	Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_41 = -1;
}

void func_581(var uParam0, struct<9> Param1, bool bParam2)
{
	unk_0x88F483FBD433696A(uParam0, "ADD_FINALE_ITEM");
	unk_0x330108B080A2132F(Param1.f_1);
	unk_0x330108B080A2132F(Param1.f_2);
	if (bParam2)
	{
		func_582(Param1.f_3);
	}
	else
	{
		func_432(Param1.f_3);
		unk_0x557F1E2300EF1A3E(Param1.f_4);
		func_432(Param1.f_5);
		unk_0x3585BEBEDC67FCC7(Param1.f_6);
		unk_0x330108B080A2132F(Param1.f_7);
		unk_0x557F1E2300EF1A3E(Param1.f_8);
	}
	unk_0xE6B753D52F4CA222();
}

void func_582(var uParam0)
{
	unk_0xCE3E870AC37B4253(uParam0);
}

void func_583(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	*uParam1 = 1;
	uParam1->f_1 = iParam2;
	uParam1->f_2 = bParam3;
	uParam1->f_4 = func_591(uParam0, bParam3);
	uParam1->f_3 = func_590(uParam0, bParam3);
	uParam1->f_5 = func_588(uParam0, bParam3);
	uParam1->f_6 = func_586(uParam0, bParam3);
	if (func_370(uParam0, bParam3))
	{
		uParam1->f_7 = func_585(uParam0, bParam3);
	}
	else
	{
		uParam1->f_7 = 0;
	}
	uParam1->f_8 = func_584(bParam3);
}

int func_584(bool bParam0)
{
	switch (bParam0)
	{
		case 59:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			return 1;
		
		default:
	}
	return 0;
}

int func_585(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 99:
		case 103:
			return 1;
		
		case 47:
			return 1;
		
		case 49:
			if (!func_383(uParam0->f_1084, 5) && !func_383(uParam0->f_1084, 6))
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return 2;
}

char* func_586(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 1:
			return func_587(uParam0);
		
		case 2:
			return "ADDITIONAL_LOOT";
		
		case 3:
			return "INFILTRATION_POINTS";
		
		case 4:
			return "ESCAPE_POINTS";
		
		case 5:
			return "COMPOUND_ENTRY_POINTS";
		
		case 6:
			return "POINTS_OF_INTEREST";
		
		case 7:
			return "CASH";
		
		case 8:
			return "WEED";
		
		case 9:
			return "COCAINE";
		
		case 10:
			return "GOLD";
		
		case 11:
			return "PAINTINGS";
		
		case 12:
			return "AIRSTRIP";
		
		case 13:
			return "PARACHUTING";
		
		case 14:
			return "WEST_BEACH";
		
		case 15:
			return "MAIN_DOCK";
		
		case 16:
			return "NORTH_DOCK";
		
		case 17:
			return "NORTH_DROP_ZONE";
		
		case 18:
			return "SOUTH_DROP_ZONE";
		
		case 19:
			return "DRAINAGE_TUNNEL";
		
		case 20:
			return "AIRSTRIP";
		
		case 21:
			return "MAIN_DOCK";
		
		case 22:
			return "NORTH_DOCK";
		
		case 23:
			return "SUBMARINE";
		
		case 30:
			return "POWER_STATION";
		
		case 31:
			return "CONTROL_TOWER";
		
		case 32:
			return "BOLT_CUTTERS";
		
		case 33:
			return "GRAPPLING_EQUIPMENT";
		
		case 34:
			return "GUARD_UNIFORM";
		
		case 35:
			return "GUARD_TRUCK";
		
		case 24:
			return "MAIN_GATE";
		
		case 25:
			return "NORTH_WALL";
		
		case 26:
			return "NORTH_SIDE_GATE";
		
		case 27:
			return "SOUTH_WALL";
		
		case 28:
			return "SOUTH_SIDE_GATE";
		
		case 29:
			return "DRAINAGE_TUNNEL";
		
		case 36:
			return "";
		
		case 37:
			return "";
		
		case 38:
			return "";
		
		case 39:
			return "";
		
		case 40:
			return "SUBMARINE";
		
		case 41:
			return "BOMBER";
		
		case 42:
			return "PLANE";
		
		case 43:
			return "HELICOPTER";
		
		case 44:
			return "PATROL_BOAT";
		
		case 45:
			return "SMUGGLER_BOAT";
		
		case 46:
			return "BOMBER";
		
		case 47:
			return "PILOT";
		
		case 48:
			return "HELICOPTER";
		
		case 49:
			return "PILOT";
		
		case 50:
			return "DEMOLITION_CHARGES";
		
		case 53:
			return "ACETYLENE_TORCH";
		
		case 51:
			return func_407(func_386(uParam0->f_1084) == 11, "SAFE_CODE", "PLASMA_CUTTER");
		
		case 52:
			return "FINGERPRINT";
		
		case 54:
			return "SHOTGUN";
		
		case 55:
			return "BULLPUP_RIFLE";
		
		case 56:
			return "SNIPER";
		
		case 57:
			return "SMG";
		
		case 58:
			return "ASSAULT_RIFLE";
		
		case 59:
			return "SUPPRESSORS";
		
		case 60:
			return "WEAPONS";
		
		case 61:
			return "ARMOR";
		
		case 62:
			return "BACKUP";
		
		case 63:
			return "";
		
		case 64:
			return "";
		
		case 65:
			return "";
		
		case 66:
			return "";
		
		case 67:
			return "";
		
		case 68:
			return "";
		
		case 69:
			return "";
		
		case 70:
			return "";
		
		case 71:
			return "SUBMARINE";
		
		case 72:
			return "BOMBER";
		
		case 73:
			return "PLANE";
		
		case 74:
			return "HELICOPTER";
		
		case 75:
			return "PATROL_BOAT";
		
		case 76:
			return "SMUGGLER_BOAT";
		
		case 77:
			return "AIRSTRIP";
		
		case 78:
			return "PARACHUTING";
		
		case 79:
			return "WEST_BEACH";
		
		case 80:
			return "MAIN_DOCK";
		
		case 81:
			return "NORTH_DOCK";
		
		case 82:
			return "NORTH_DROP_ZONE";
		
		case 83:
			return "SOUTH_DROP_ZONE";
		
		case 84:
			return "DRAINAGE_TUNNEL";
		
		case 85:
			return "MAIN_GATE";
		
		case 86:
			return "DRAINAGE_TUNNEL";
		
		case 87:
			return "AIRSTRIP";
		
		case 88:
			return "MAIN_DOCK";
		
		case 89:
			return "NORTH_DOCK";
		
		case 90:
			return "SUBMARINE";
		
		case 91:
			return "";
		
		case 92:
			return "";
		
		case 93:
			return "SHOTGUN";
		
		case 94:
			return "BULLPUP_RIFLE";
		
		case 95:
			return "SNIPER";
		
		case 96:
			return "SMG";
		
		case 97:
			return "ASSAULT_RIFLE";
		
		case 98:
			return "SUPPRESSORS";
		
		case 99:
			return "AIRSTRIKE_SUPPORT";
		
		case 100:
			return "HEAVY_WEAPON_SUPPORT";
		
		case 101:
			return "SNIPER_SUPPORT";
		
		case 102:
			return "HELICOPTER_SUPPORT";
		
		case 103:
			return "SPY_DRONE_SUPPORT";
		
		case 104:
			return "WEAPON_STASH_SUPPORT";
		
		default:
	}
	return "";
}

char* func_587(var uParam0)
{
	if (func_17(uParam0->f_1084, 0))
	{
		switch (func_519(uParam0->f_1084))
		{
			case 0:
				return "GATHER_INTEL_TEQUILA";
			
			case 1:
				return "GATHER_INTEL_NECKLACE";
			
			case 2:
				return "GATHER_INTEL_BONDS";
			
			case 3:
				return "GATHER_INTEL_DIAMOND";
			
			case 4:
				return "GATHER_INTEL_FILES";
			
			case 5:
				return "GATHER_INTEL_STATUE";
			}
		
		default:
	}
	return "GATHER_INTEL";
}

char* func_588(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 1:
			if (!func_362(uParam0->f_1084))
			{
				if (!func_17(uParam0->f_1084, 0))
				{
					return "H4P_INT0_GAT_D1";
				}
			}
			else if (!func_17(uParam0->f_1084, 0))
			{
				return "H4P_INT0_GAT_D2";
			}
			return "H4P_INT0_GAT_D3";
		
		case 2:
			return "H4P_INT0_LOOT_D";
		
		case 3:
			return "H4P_INT0_ENTR_D";
		
		case 4:
			return "H4P_INT0_EXIT_D";
		
		case 5:
			return "H4P_INT0_COMP_D";
		
		case 6:
			return "H4P_INT0_ITEM_D";
		
		case 7:
			return "H4P_INT2_CASH_D";
		
		case 8:
			return "H4P_INT2_WEED_D";
		
		case 9:
			return "H4P_INT2_COKE_D";
		
		case 10:
			return "H4P_INT2_GOLD_D";
		
		case 11:
			return "H4P_INT2_PAIN_D";
		
		case 12:
			return "H4P_INT3_AIRS_D";
		
		case 13:
			return "H4P_INT3_PARA_D";
		
		case 14:
			return "H4P_INT3_BEAC_D";
		
		case 15:
			return "H4P_INT3_MDCK_D";
		
		case 16:
			return "H4P_INT3_NDCK_D";
		
		case 17:
			return "H4P_INT3_NDRP_D";
		
		case 18:
			return "H4P_INT3_SDRP_D";
		
		case 19:
			return "H4P_INT3_DTUN_D";
		
		case 20:
			return "H4P_INT4_AIRS_D";
		
		case 21:
			return "H4P_INT4_MDCK_D";
		
		case 22:
			return "H4P_INT4_NDCK_D";
		
		case 23:
			return "H4P_INT4_SUBM_D";
		
		case 30:
			return "H4P_INT6_PWRS_D";
		
		case 31:
			return "H4P_INT6_CTOW_D";
		
		case 32:
			return "H4P_INT6_BCUT_D";
		
		case 33:
			return "H4P_INT6_GRAP_D";
		
		case 34:
			return "H4P_INT6_UNIF_D";
		
		case 35:
			return "H4P_INT6_TROJ_D";
		
		case 24:
			return "H4P_INT5_MGAT_D";
		
		case 25:
			return "H4P_INT5_NWAL_D";
		
		case 26:
			return "H4P_INT5_NSGT_D";
		
		case 27:
			return "H4P_INT5_SWAL_D";
		
		case 28:
			return "H4P_INT5_SSGT_D";
		
		case 29:
			return "H4P_INT5_DTUN_D";
		
		case 36:
			return "H4P_PRP0_APVH_D";
		
		case 37:
			return "H4P_PRP0_EQUI_D";
		
		case 38:
			return "H4P_PRP0_WEPL_D";
		
		case 39:
			return "H4P_PRP0_DISR_D";
		
		case 40:
			return func_407(func_589(uParam0->f_1084, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 41:
			return func_407(func_589(uParam0->f_1084, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 42:
			return func_407(func_589(uParam0->f_1084, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 43:
			return func_407(func_589(uParam0->f_1084, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 44:
			return func_407(func_589(uParam0->f_1084, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 45:
			return func_407(func_589(uParam0->f_1084, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 46:
			return func_407(func_589(uParam0->f_1084, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 47:
			return func_407(func_589(uParam0->f_1084, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 48:
			return func_407(func_589(uParam0->f_1084, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 49:
			return func_407(func_589(uParam0->f_1084, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 50:
			return func_407(func_17(uParam0->f_1084, 9), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 53:
			return func_407(func_17(uParam0->f_1084, 8), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 51:
			return "H4P_PREP_MAND";
		
		case 52:
			return "H4P_PREP_MAND";
		
		case 54:
			return "H4P_PREP_MAND";
		
		case 55:
			return "H4P_PREP_MAND";
		
		case 56:
			return "H4P_PREP_MAND";
		
		case 57:
			if (!func_377(uParam0->f_1084) || !func_373(uParam0->f_1084, func_267(uParam0->f_1084)))
			{
				return "H4P_PRP3_UKNW_D";
			}
			return "H4P_PREP_MAND";
		
		case 58:
			if (!func_377(uParam0->f_1084) || !func_373(uParam0->f_1084, func_267(uParam0->f_1084)))
			{
				return "H4P_PRP3_UKNW_D";
			}
			return "H4P_PREP_MAND";
		
		case 59:
			return "H4P_PRP3_SUPP_D";
		
		case 60:
			return "H4P_PREP_OPT";
		
		case 61:
			return "H4P_PREP_OPT";
		
		case 62:
			return "H4P_PREP_OPT";
		
		case 63:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN0_APRV_2", "H4P_FIN0_APRV_D");
		
		case 64:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN0_INFI_2", "H4P_FIN0_INFI_D");
		
		case 65:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN0_CENT_2", "H4P_FIN0_CENT_D");
		
		case 66:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN0_ESCA_2", "H4P_FIN0_ESCA_D");
		
		case 67:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN0_TIMD_2", "H4P_FIN0_TIMD_D");
		
		case 68:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN0_WEAP_2", "H4P_FIN0_WEAP_D");
		
		case 69:
			return "H4P_FIN0_SUPP_D";
		
		case 70:
			return "H4P_FIN0_CREW_D";
		
		case 71:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN1_SUBM_D", "H4P_FIN1_APRV_D");
		
		case 72:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN1_BOMB_D", "H4P_FIN1_APRV_D");
		
		case 73:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN1_SMPL_D", "H4P_FIN1_APRV_D");
		
		case 74:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN1_SHEL_D", "H4P_FIN1_APRV_D");
		
		case 75:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN1_PBOA_D", "H4P_FIN1_APRV_D");
		
		case 76:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN1_SBOA_D", "H4P_FIN1_APRV_D");
		
		case 77:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN2_AIRS_D", "H4P_FIN2_INFI_D");
		
		case 78:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN2_PARA_D", "H4P_FIN2_INFI_D");
		
		case 79:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN2_WBEA_D", "H4P_FIN2_INFI_D");
		
		case 80:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN2_MDOC_D", "H4P_FIN2_INFI_D");
		
		case 81:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN2_NDOC_D", "H4P_FIN2_INFI_D");
		
		case 82:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN2_NDRP_D", "H4P_FIN2_INFI_D");
		
		case 83:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN2_SDRP_D", "H4P_FIN2_INFI_D");
		
		case 84:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN2_DTUN_D", "H4P_FIN2_INFI_D");
		
		case 85:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN3_MGAT_D", "H4P_FIN3_CENT_D");
		
		case 86:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN3_DTUN_D", "H4P_FIN3_CENT_D");
		
		case 87:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN4_AIRS_D", "H4P_FIN4_ESCA_D");
		
		case 88:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN4_MDOC_D", "H4P_FIN4_ESCA_D");
		
		case 89:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN4_NDOC_D", "H4P_FIN4_ESCA_D");
		
		case 90:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN4_SUBM_D", "H4P_FIN4_ESCA_D");
		
		case 91:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN5_TDAY_D", "H4P_FIN5_TIMD_D");
		
		case 92:
			return func_407(unk_0x834C960822A4683F(), "H4P_FIN5_TNGT_D", "H4P_FIN5_TIMD_D");
		
		case 93:
			return "H4P_FIN6_SHOT_D";
		
		case 94:
			return "H4P_FIN6_RIFL_D";
		
		case 95:
			return "H4P_FIN6_SNIP_D";
		
		case 96:
			return "H4P_FIN6_MKSM_D";
		
		case 97:
			return "H4P_FIN6_MKAR_D";
		
		case 98:
			return "H4P_FIN6_SUPP_D";
		
		case 99:
			return func_407(func_370(uParam0, bParam1), "H4P_PRP3_UKNW_D", "H4P_FIN7_AIRS_D");
		
		case 100:
			return "H4P_FIN7_WDRP_D";
		
		case 101:
			return "H4P_FIN7_SNIP_D";
		
		case 102:
			return "H4P_FIN7_HELI_D";
		
		case 103:
			return func_407(func_370(uParam0, bParam1), "H4P_PRP3_UKNW_D", "H4P_FIN7_SPYD_D");
		
		case 104:
			return "H4P_FIN7_WEAP_D";
		
		default:
	}
	return "";
}

int func_589(int iParam0, bool bParam1)
{
	if (((func_17(iParam0, 7) || func_17(iParam0, 5)) || func_17(iParam0, 3)) || func_17(iParam0, 4))
	{
		return 1;
	}
	if (func_17(iParam0, 1) || func_17(iParam0, 2))
	{
		if (bParam1)
		{
			return func_17(iParam0, 6);
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

char* func_590(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return "H4P_INT0_GATH_T";
		
		case 2:
			return "H4P_INT0_LOOT_T";
		
		case 3:
			return "H4P_INT0_ENTR_T";
		
		case 4:
			return "H4P_INT0_EXIT_T";
		
		case 5:
			return "H4P_INT0_COMP_T";
		
		case 6:
			return "H4P_INT0_ITEM_T";
		
		case 7:
			return "H4P_INT2_CASH_T";
		
		case 8:
			return "H4P_INT2_WEED_T";
		
		case 9:
			return "H4P_INT2_COKE_T";
		
		case 10:
			return "H4P_INT2_GOLD_T";
		
		case 11:
			return "H4P_INT2_PAIN_T";
		
		case 12:
			return "H4P_INT3_AIRS_T";
		
		case 13:
			return "H4P_INT3_PARA_T";
		
		case 14:
			return "H4P_INT3_BEAC_T";
		
		case 15:
			return "H4P_INT3_MDCK_T";
		
		case 16:
			return "H4P_INT3_NDCK_T";
		
		case 17:
			return "H4P_INT3_NDRP_T";
		
		case 18:
			return "H4P_INT3_SDRP_T";
		
		case 19:
			return "H4P_INT3_DTUN_T";
		
		case 20:
			return "H4P_INT4_AIRS_T";
		
		case 21:
			return "H4P_INT4_MDCK_T";
		
		case 22:
			return "H4P_INT4_NDCK_T";
		
		case 23:
			return "H4P_INT4_SUBM_T";
		
		case 30:
			return "H4P_INT6_PWRS_T";
		
		case 31:
			return "H4P_INT6_CTOW_T";
		
		case 32:
			return "H4P_INT6_BCUT_T";
		
		case 33:
			return "H4P_INT6_GRAP_T";
		
		case 34:
			return "H4P_INT6_UNIF_T";
		
		case 35:
			return "H4P_INT6_TROJ_T";
		
		case 24:
			return "H4P_INT5_MGAT_T";
		
		case 25:
			return "H4P_INT5_NWAL_T";
		
		case 26:
			return "H4P_INT5_NSGT_T";
		
		case 27:
			return "H4P_INT5_SWAL_T";
		
		case 28:
			return "H4P_INT5_SSGT_T";
		
		case 29:
			return "H4P_INT5_DTUN_T";
		
		case 36:
			return "H4P_PRP0_APVH_T";
		
		case 37:
			return "H4P_PRP0_EQUI_T";
		
		case 38:
			return "H4P_PRP0_WEPL_T";
		
		case 39:
			return "H4P_PRP0_DISR_T";
		
		case 40:
			return "H4P_PRP1_SUBM_T";
		
		case 41:
			return "H4P_PRP1_SBOM_T";
		
		case 42:
			return "H4P_PRP1_SPLA_T";
		
		case 43:
			return "H4P_PRP1_SHEL_T";
		
		case 44:
			return "H4P_PRP1_PBOA_T";
		
		case 45:
			return "H4P_PRP1_SBOA_T";
		
		case 46:
			return "H4P_PRP1_BOM1_T";
		
		case 47:
			return "H4P_PRP1_BOM2_T";
		
		case 48:
			return "H4P_PRP1_HEL1_T";
		
		case 49:
			return "H4P_PRP1_HEL2_T";
		
		case 50:
			return "H4P_PRP2_DEMC_T";
		
		case 53:
			return "H4P_PRP2_ATOR_T";
		
		case 51:
			return func_407(func_386(uParam0->f_1084) == 11, "H4P_PRP2_TAR1_T", "H4P_PRP2_TAR2_T");
		
		case 52:
			return "H4P_PRP2_FING_T";
		
		case 54:
			return "H4P_PRP3_SHOT_T";
		
		case 55:
			return "H4P_PRP3_RIFL_T";
		
		case 56:
			return "H4P_PRP3_SNIP_T";
		
		case 57:
			return "H4P_PRP3_M2SM_T";
		
		case 58:
			return "H4P_PRP3_M2RI_T";
		
		case 59:
			return "H4P_PRP3_SUPP_T";
		
		case 60:
			return "H4P_PRP4_WEAP_T";
		
		case 61:
			return "H4P_PRP4_ARMR_T";
		
		case 62:
			return "H4P_PRP4_BRES_T";
		
		case 63:
			return "H4P_FIN0_APRV_T";
		
		case 64:
			return "H4P_FIN0_INFI_T";
		
		case 65:
			return "H4P_FIN0_CENT_T";
		
		case 66:
			return "H4P_FIN0_ESCA_T";
		
		case 67:
			return "H4P_FIN0_TIMD_T";
		
		case 68:
			return "H4P_FIN0_WEAP_T";
		
		case 69:
			return "H4P_FIN0_SUPP_T";
		
		case 70:
			return "H4P_FIN0_CREW_T";
		
		case 71:
			return "H4P_FIN1_SUBM_T";
		
		case 72:
			return "H4P_FIN1_BOMB_T";
		
		case 73:
			return "H4P_FIN1_SMPL_T";
		
		case 74:
			return "H4P_FIN1_SHEL_T";
		
		case 75:
			return "H4P_FIN1_PBOA_T";
		
		case 76:
			return "H4P_FIN1_SBOA_T";
		
		case 77:
			return "H4P_FIN2_AIRS_T";
		
		case 78:
			return "H4P_FIN2_PARA_T";
		
		case 79:
			return "H4P_FIN2_WBEA_T";
		
		case 80:
			return "H4P_FIN2_MDOC_T";
		
		case 81:
			return "H4P_FIN2_NDOC_T";
		
		case 82:
			return "H4P_FIN2_NDRP_T";
		
		case 83:
			return "H4P_FIN2_SDRP_T";
		
		case 84:
			return "H4P_FIN2_DTUN_T";
		
		case 85:
			return "H4P_FIN3_MGAT_T";
		
		case 86:
			return "H4P_FIN3_DTUN_T";
		
		case 87:
			return "H4P_FIN4_AIRS_T";
		
		case 88:
			return "H4P_FIN4_MDOC_T";
		
		case 89:
			return "H4P_FIN4_NDOC_T";
		
		case 90:
			return "H4P_FIN4_SUBM_T";
		
		case 91:
			return "H4P_FIN5_TDAY_T";
		
		case 92:
			return "H4P_FIN5_TNGT_T";
		
		case 93:
			return "H4P_FIN6_SHOT_T";
		
		case 94:
			return "H4P_FIN6_RIFL_T";
		
		case 95:
			return "H4P_FIN6_SNIP_T";
		
		case 96:
			return "H4P_FIN6_MKSM_T";
		
		case 97:
			return "H4P_FIN6_MKAR_T";
		
		case 98:
			return "H4P_FIN6_SUPP_T";
		
		case 99:
			return "H4P_FIN7_AIRS_T";
		
		case 100:
			return "H4P_FIN7_WDRP_T";
		
		case 101:
			return "H4P_FIN7_SNIP_T";
		
		case 102:
			return "H4P_FIN7_HELI_T";
		
		case 103:
			return "H4P_FIN7_SPYD_T";
		
		case 104:
			return "H4P_FIN7_WEAP_T";
		
		default:
	}
	return "";
}

int func_591(var uParam0, var uParam1)
{
	return 0;
}

void func_592(var uParam0, bool bParam1)
{
	unk_0x88F483FBD433696A(uParam0, "REMOVE_FINALE_ITEM");
	unk_0x330108B080A2132F(bParam1);
	unk_0xE6B753D52F4CA222();
}

void func_593(var uParam0)
{
	struct<9> Var0;
	
	func_592(uParam0->f_711, 85);
	func_592(uParam0->f_711, 86);
	Local_125[0 /*9*/] = { Var0 };
	Local_125[1 /*9*/] = { Var0 };
	func_583(uParam0, &(Local_125[0 /*9*/]), 65, 86);
	func_570(uParam0->f_711, 86, 1);
	func_581(uParam0->f_711, Local_125[0 /*9*/], 0);
}

void func_594(var uParam0)
{
	func_570(uParam0->f_711, 77, 0);
	func_570(uParam0->f_711, 78, 0);
	func_570(uParam0->f_711, 79, 0);
	func_570(uParam0->f_711, 80, 0);
	func_570(uParam0->f_711, 81, 0);
	func_570(uParam0->f_711, 82, 0);
	func_570(uParam0->f_711, 83, 0);
	func_570(uParam0->f_711, 84, 0);
}

int func_595(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 77;
		
		case 1:
			return 78;
		
		case 2:
			return 79;
		
		case 3:
			return 80;
		
		case 4:
			return 81;
		
		case 5:
			return 82;
		
		case 6:
			return 83;
		
		case 7:
			return 84;
		
		default:
	}
	return 0;
}

void func_596(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x834C960822A4683F())
	{
		return;
	}
	func_599(uParam0);
	func_598(uParam0);
	func_592(uParam0->f_711, 90);
	func_580(uParam0);
	func_570(uParam0->f_711, bParam1, 1);
	switch (bParam1)
	{
		case 71:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_39 = 1;
			func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 79);
			iVar0++;
			if (func_383(uParam0->f_1084, 3))
			{
				func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 80);
				iVar0++;
			}
			if (func_383(uParam0->f_1084, 4))
			{
				func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 81);
				iVar0++;
			}
			if (func_383(uParam0->f_1084, 7))
			{
				func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 84);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_581(uParam0->f_711, Local_124[iVar1 /*9*/], 0);
				iVar1++;
			}
			func_597(uParam0);
			break;
		
		case 72:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_39 = 2;
			func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 78);
			iVar0++;
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_581(uParam0->f_711, Local_124[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		
		case 73:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_39 = 3;
			func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 77);
			iVar0++;
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_581(uParam0->f_711, Local_124[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		
		case 74:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_39 = 4;
			if (func_383(uParam0->f_1084, 5))
			{
				func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 82);
				iVar0++;
			}
			if (func_383(uParam0->f_1084, 6))
			{
				func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 83);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_581(uParam0->f_711, Local_124[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		
		case 75:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_39 = 5;
			if (func_383(uParam0->f_1084, 3))
			{
				func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 80);
				iVar0++;
			}
			if (func_383(uParam0->f_1084, 4))
			{
				func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 81);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_581(uParam0->f_711, Local_124[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		
		case 76:
			Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_39 = 6;
			if (func_383(uParam0->f_1084, 3))
			{
				func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 80);
				iVar0++;
			}
			if (func_383(uParam0->f_1084, 4))
			{
				func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, 81);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_581(uParam0->f_711, Local_124[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
	}
}

void func_597(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_592(uParam0->f_711, 87);
	func_592(uParam0->f_711, 88);
	func_592(uParam0->f_711, 89);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = (87 + iVar1);
		if (func_381(uParam0->f_1084, func_382(iVar2)))
		{
			func_583(uParam0, &(Local_126[iVar0 /*9*/]), 66, iVar2);
			iVar0++;
		}
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_126.f_0)
	{
		if (Local_126[iVar1 /*9*/])
		{
			func_581(uParam0->f_711, Local_126[iVar1 /*9*/], 0);
		}
		iVar1++;
	}
}

void func_598(var uParam0)
{
	int iVar0;
	struct<9> Var1;
	
	func_592(uParam0->f_711, 77);
	func_592(uParam0->f_711, 78);
	func_592(uParam0->f_711, 79);
	func_592(uParam0->f_711, 80);
	func_592(uParam0->f_711, 81);
	func_592(uParam0->f_711, 82);
	func_592(uParam0->f_711, 83);
	func_592(uParam0->f_711, 84);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_124[iVar0 /*9*/] = { Var1 };
		iVar0++;
	}
	Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_40 = -1;
}

void func_599(var uParam0)
{
	func_570(uParam0->f_711, 71, 0);
	func_570(uParam0->f_711, 72, 0);
	func_570(uParam0->f_711, 73, 0);
	func_570(uParam0->f_711, 74, 0);
	func_570(uParam0->f_711, 75, 0);
	func_570(uParam0->f_711, 76, 0);
}

int func_600(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 71;
		
		case 2:
			return 72;
		
		case 3:
			return 73;
		
		case 4:
			return 74;
		
		case 5:
			return 75;
		
		case 6:
			return 76;
		
		default:
	}
	return 0;
}

void func_601(var uParam0)
{
	int iVar0;
	
	if (!iLocal_134)
	{
		return;
	}
	iVar0 = -1;
	if (func_825(&iVar0))
	{
		uParam0->f_806.f_3 = uParam0->f_806.f_2;
		uParam0->f_806.f_2 = iVar0;
		uParam0->f_707 = 1;
		func_602(uParam0);
		iLocal_134 = 0;
	}
}

void func_602(var uParam0)
{
	bool bVar0;
	
	bVar0 = uParam0->f_806.f_2;
	if (uParam0->f_1084 != unk_0x259BE71D8A81D4FA() && bVar0 != 1000)
	{
		return;
	}
	switch (bVar0)
	{
		case 1:
			if (Local_176.f_6 != -1)
			{
				return;
			}
			if (unk_0x834C960822A4683F())
			{
				return;
			}
			if (func_370(uParam0, bVar0))
			{
				return;
			}
			if (func_17(uParam0->f_1084, 0))
			{
				func_814(uParam0);
				return;
			}
			func_630(uParam0, bVar0);
			break;
		
		case 40:
		case 42:
		case 44:
		case 45:
		case 46:
		case 48:
		case 47:
		case 49:
		case 50:
		case 53:
		case 51:
		case 52:
		case 60:
		case 61:
		case 62:
			if (unk_0x834C960822A4683F())
			{
				return;
			}
			if (func_370(uParam0, bVar0))
			{
				return;
			}
			if (Local_176.f_6 != -1)
			{
				return;
			}
			func_630(uParam0, bVar0);
			break;
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			if (func_370(uParam0, bVar0))
			{
				return;
			}
			if (Local_176.f_6 != -1)
			{
				return;
			}
			func_627(uParam0, bVar0);
			break;
		
		case 59:
			if (unk_0x834C960822A4683F())
			{
				return;
			}
			func_625(uParam0);
			break;
		
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			func_596(uParam0, bVar0);
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
			func_579(uParam0, bVar0);
			break;
		
		case 85:
		case 86:
			func_576(uParam0, bVar0);
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_573(uParam0, bVar0);
			break;
		
		case 91:
		case 92:
			func_569(uParam0, bVar0);
			break;
		
		case 98:
			func_624(uParam0, bVar0);
			break;
		
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			if (func_370(uParam0, bVar0))
			{
				return;
			}
			func_618(uParam0, bVar0);
			break;
		
		case 1000:
			if (Local_176.f_6 != -1)
			{
				return;
			}
			if (!unk_0x834C960822A4683F())
			{
				if (uParam0->f_1084 == unk_0x259BE71D8A81D4FA())
				{
					func_617(uParam0);
				}
			}
			else if (uParam0->f_1084 == unk_0x259BE71D8A81D4FA())
			{
				func_473(uParam0);
			}
			else
			{
				func_614(uParam0);
			}
			break;
		
		case 1002:
			func_603(uParam0);
			break;
		
		case 1001:
			func_545(uParam0);
			break;
	}
}

void func_603(var uParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<10> Var3;
	struct<10> Var4;
	
	switch (iLocal_154)
	{
		case -2:
			func_613(uParam0, 0);
			iVar2 = func_7(9511, -1, 0);
			unk_0x0B0C9A0F9AAEB7F0(&iVar2, 16);
			func_4(9511, iVar2, -1, 1, 0);
			break;
		
		case -3:
			iVar2 = func_7(9511, -1, 0);
			unk_0x0B0C9A0F9AAEB7F0(&iVar2, 14);
			func_4(9511, iVar2, -1, 1, 0);
			break;
		
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			iVar0 = func_612(iLocal_154);
			if (func_502())
			{
				func_490(func_611(iLocal_154), iVar0, &uVar1, 0, 1, 0);
			}
			else
			{
				Var3 = -1;
				Var3.f_1 = -1;
				Var3.f_2 = -1;
				Var3.f_3 = -1;
				Var3.f_4 = -1;
				Var3.f_5 = -1;
				Var3.f_6 = -1;
				Var3.f_7 = -1;
				Var3.f_8 = -1;
				Var3.f_9 = -1;
				func_489(&Var3);
				func_610(&Var3, iLocal_154, iVar0);
				unk_0xDCA98A271D0CC516(iVar0, 0, 1, &Var3);
			}
			func_608(func_609(iLocal_154), 1);
			func_570(uParam0->f_711, iLocal_154, 1);
			func_34(uParam0, 11);
			func_41(&uLocal_157, 0, 0);
			break;
		
		case 1:
			func_630(uParam0, iLocal_154);
			break;
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			func_606(func_607(iLocal_154));
			func_630(uParam0, iLocal_154);
			break;
		
		case 59:
			if (func_502())
			{
				func_490(1322977732, Global_262145.f_29929, &uVar1, 0, 1, 0);
			}
			else
			{
				Var4 = -1;
				Var4.f_1 = -1;
				Var4.f_2 = -1;
				Var4.f_3 = -1;
				Var4.f_4 = -1;
				Var4.f_5 = -1;
				Var4.f_6 = -1;
				Var4.f_7 = -1;
				Var4.f_8 = -1;
				Var4.f_9 = -1;
				func_489(&Var4);
				Var4.f_6 = Global_262145.f_29929;
				unk_0xDCA98A271D0CC516(Global_262145.f_29929, 0, 1, &Var4);
			}
			func_605(1);
			func_604(uParam0->f_711, 59, 1);
			func_570(uParam0->f_711, 98, 1);
			func_34(uParam0, 11);
			func_41(&uLocal_157, 0, 0);
			break;
	}
	iLocal_154 = 0;
	uParam0->f_707 = 1;
	func_546(uParam0->f_711);
}

void func_604(var uParam0, bool bParam1, bool bParam2)
{
	unk_0x88F483FBD433696A(uParam0, "SET_SETUP_ITEM_NUM_COMPLETE");
	unk_0x330108B080A2132F(bParam1);
	unk_0x330108B080A2132F(bParam2);
	unk_0xE6B753D52F4CA222();
}

void func_605(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_7(9482, -1, 0);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 12);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 12);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, 12);
		unk_0x8744D2E3FC95740E(&(Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 12);
	}
	func_4(9482, iVar0, -1, 1, 0);
}

void func_606(int iParam0)
{
	func_4(9485, iParam0, -1, 1, 0);
}

int func_607(bool bParam0)
{
	switch (bParam0)
	{
		case 54:
			return 1;
		
		case 55:
			return 2;
		
		case 56:
			return 3;
		
		case 57:
			return 4;
		
		case 58:
			return 5;
		
		default:
	}
	return 0;
}

void func_608(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_7(9484, -1, 0);
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, bParam0);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_45), bParam0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, bParam0);
		unk_0x8744D2E3FC95740E(&(Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_45), bParam0);
	}
	func_4(9484, iVar0, -1, 1, 0);
}

int func_609(int iParam0)
{
	switch (iParam0)
	{
		case 99:
			return 0;
		
		case 100:
			return 4;
		
		case 101:
			return 1;
		
		case 102:
			return 2;
		
		case 103:
			return 3;
		
		case 104:
			return 5;
		
		default:
	}
	return 6;
}

void func_610(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 99:
			*uParam0 = iParam2;
			break;
		
		case 100:
			uParam0->f_1 = iParam2;
			break;
		
		case 101:
			uParam0->f_2 = iParam2;
			break;
		
		case 102:
			uParam0->f_3 = iParam2;
			break;
		
		case 103:
			uParam0->f_4 = iParam2;
			break;
		
		case 104:
			uParam0->f_5 = iParam2;
			break;
	}
}

int func_611(int iParam0)
{
	switch (iParam0)
	{
		case 99:
			return -1896606724;
		
		case 100:
			return -1291433573;
		
		case 101:
			return 538631715;
		
		case 102:
			return 133782822;
		
		case 103:
			return 2081885153;
		
		case 104:
			return -1314365345;
		
		default:
	}
	return -2085313189;
}

int func_612(int iParam0)
{
	switch (iParam0)
	{
		case 99:
			return Global_262145.f_29923;
		
		case 100:
			return Global_262145.f_29924;
		
		case 101:
			return Global_262145.f_29925;
		
		case 102:
			return Global_262145.f_29926;
		
		case 103:
			return Global_262145.f_29927;
		
		case 104:
			return Global_262145.f_29928;
		
		default:
	}
	return 0;
}

void func_613(var uParam0, int iParam1)
{
	if (uParam0->f_1084 != unk_0x259BE71D8A81D4FA())
	{
		return;
	}
	if (Local_161.f_43.f_6 != 0)
	{
		Stack.Push(iParam1);
		Call_Loc(Local_161.f_43.f_6);
		if (!StackVal)
		{
			return;
		}
	}
	if (!BitTest(Local_176[(iParam1 / 32)], (iParam1 % 32)))
	{
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Local_176[(iParam1 / 32)]), (iParam1 % 32));
}

void func_614(var uParam0)
{
	int iVar0;
	
	iVar0 = func_412(uParam0, unk_0x259BE71D8A81D4FA());
	if (iVar0 != -1)
	{
		if (uParam0->f_823.f_67[iVar0] == 0)
		{
			uParam0->f_823.f_67[iVar0] = 1;
		}
		else
		{
			uParam0->f_823.f_67[iVar0] = 0;
		}
		func_615(uParam0->f_711, 1, func_616(uParam0));
		iLocal_149 = 1;
	}
}

void func_615(var uParam0, int iParam1, var uParam2)
{
	unk_0x88F483FBD433696A(uParam0, "SET_LAUNCH_BUTTON");
	unk_0x557F1E2300EF1A3E(iParam1);
	func_432(uParam2);
	unk_0xE6B753D52F4CA222();
}

char* func_616(var uParam0)
{
	if (unk_0x834C960822A4683F())
	{
		if (uParam0->f_1084 == unk_0x259BE71D8A81D4FA())
		{
			return "H4_FINALE_CONT";
		}
		else if (func_412(uParam0, unk_0x259BE71D8A81D4FA()) != -1)
		{
			if (uParam0->f_823.f_67[func_412(uParam0, unk_0x259BE71D8A81D4FA())] == 0)
			{
				return "H4_FINALE_RDY";
			}
			else
			{
				return "H4_FINALE_NRDY";
			}
		}
	}
	return "CH_FINALE_LBS";
}

void func_617(var uParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1085), 3);
	uParam0->f_726.f_5 = 0;
	iLocal_150 = 6;
	iLocal_136 = 1;
	uParam0->f_704 = 0;
	func_34(uParam0, 15);
}

void func_618(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_609(bParam1);
	if (iVar0 == 6)
	{
		return;
	}
	if (func_416(unk_0x259BE71D8A81D4FA(), iVar0))
	{
		return;
	}
	if (!unk_0x0AF5E4A6C74DC312(func_612(bParam1), 0, 1, 0, -1, 0))
	{
		return;
	}
	func_619(uParam0->f_711, func_623(bParam1), func_622(bParam1), func_621(), func_620());
	uParam0->f_707 = 1;
	iLocal_154 = bParam1;
}

void func_619(var uParam0, char* sParam1, char* sParam2, var uParam3, char* sParam4)
{
	unk_0x88F483FBD433696A(uParam0, "SHOW_OVERLAY");
	func_432(sParam1);
	func_432(sParam2);
	func_432(uParam3);
	func_432(sParam4);
	unk_0xE6B753D52F4CA222();
}

char* func_620()
{
	return "H4P_OVERLAY_CAN";
}

char* func_621()
{
	return "H4P_OVERLAY_CON";
}

char* func_622(int iParam0)
{
	switch (iParam0)
	{
		case 99:
			return "H4P_OVR_SC1_M";
		
		case 100:
			return "H4P_OVR_SC2_M";
		
		case 101:
			return "H4P_OVR_SC3_M";
		
		case 102:
			return "H4P_OVR_SC4_M";
		
		case 103:
			return "H4P_OVR_SC5_M";
		
		case 104:
			return "H4P_OVR_SC6_M";
		
		default:
	}
	return "";
}

char* func_623(int iParam0)
{
	switch (iParam0)
	{
		case 99:
			return "H4P_OVR_SC1_T";
		
		case 100:
			return "H4P_OVR_SC2_T";
		
		case 101:
			return "H4P_OVR_SC3_T";
		
		case 102:
			return "H4P_OVR_SC4_T";
		
		case 103:
			return "H4P_OVR_SC5_T";
		
		case 104:
			return "H4P_OVR_SC6_T";
		
		default:
	}
	return "";
}

void func_624(var uParam0, bool bParam1)
{
	if (!unk_0x834C960822A4683F())
	{
		return;
	}
	if (Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_44)
	{
		Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_44 = 0;
		func_570(uParam0->f_711, bParam1, 0);
	}
	else
	{
		Global_1979596[unk_0x259BE71D8A81D4FA() /*53*/].f_5.f_44 = 1;
		func_570(uParam0->f_711, bParam1, 1);
	}
}

void func_625(var uParam0)
{
	if (func_415(uParam0->f_1084))
	{
		return;
	}
	if (!unk_0x0AF5E4A6C74DC312(Global_262145.f_29929, 0, 1, 0, -1, 0))
	{
		return;
	}
	func_619(uParam0->f_711, "H4P_OVR_SUP_T", "H4P_OVR_SUP_M", func_626(), func_620());
	uParam0->f_707 = 1;
	iLocal_154 = 59;
}

char* func_626()
{
	return "H4P_OVERLAY_ACC";
}

void func_627(var uParam0, int iParam1)
{
	if (func_378(uParam0->f_1084) == 0)
	{
		func_619(uParam0->f_711, func_629(iParam1), func_628(iParam1), func_626(), func_620());
		uParam0->f_707 = 1;
		iLocal_154 = iParam1;
	}
	else if (!func_17(uParam0->f_1084, 13))
	{
		func_630(uParam0, iParam1);
	}
}

char* func_628(int iParam0)
{
	switch (iParam0)
	{
		case 54:
			return "H4P_OVR_WL1_M";
		
		case 55:
			return "H4P_OVR_WL2_M";
		
		case 56:
			return "H4P_OVR_WL3_M";
		
		case 57:
			return "H4P_OVR_WL4_M";
		
		case 58:
			return "H4P_OVR_WL5_M";
		
		default:
	}
	return "";
}

char* func_629(int iParam0)
{
	switch (iParam0)
	{
		case 54:
			return "H4P_OVR_WL1_T";
		
		case 55:
			return "H4P_OVR_WL2_T";
		
		case 56:
			return "H4P_OVR_WL3_T";
		
		case 57:
			return "H4P_OVR_WL4_T";
		
		case 58:
			return "H4P_OVR_WL5_T";
		
		default:
	}
	return "";
}

void func_630(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_813(uParam0, bParam1);
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_16(uParam0, iVar0))
	{
		return;
	}
	if (func_812(iLocal_160, 0))
	{
		return;
	}
	iVar1 = func_649(unk_0x259BE71D8A81D4FA(), 256, 0);
	if (iVar1 != -1)
	{
		func_646(uParam0, bParam1, iVar1);
		return;
	}
	func_631(iVar0);
	Global_1978795[unk_0x383461852896D73D() /*25*/].f_23 = 1;
	Global_1978795[unk_0x383461852896D73D() /*25*/].f_24 = 0;
	iLocal_150 = 5;
	func_34(uParam0, 15);
}

void func_631(int iParam0)
{
	func_632(-1, iParam0);
}

void func_632(int iParam0, var uParam1)
{
	if (!func_108())
	{
		return;
	}
	if (!func_645(-1))
	{
		return;
	}
	if (iParam0 != -1)
	{
		func_644(iParam0);
	}
	func_643(uParam1);
	func_633(256, -1);
}

void func_633(int iParam0, int iParam1)
{
	if ((func_108() || !func_642(1)) || func_641(iParam0) == 3)
	{
		if (!func_640(unk_0x259BE71D8A81D4FA(), 0) && !func_640(unk_0x259BE71D8A81D4FA(), 3))
		{
			func_639(iParam0);
			func_634(iParam0, func_638(1, 1), func_637(), func_636(), func_635(), iParam1);
		}
	}
}

void func_634(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<7> Var0;
	
	Var0.f_0 = 23546804;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = uParam5;
	if (!iParam1 == 0)
	{
		unk_0x01F0B819E78A18A1(1, &Var0, 7, iParam1);
	}
}

var func_635()
{
	return Global_2793046.f_5225.f_346;
}

var func_636()
{
	return Global_2793046.f_5225.f_345;
}

var func_637()
{
	return Global_2793046.f_5225.f_344;
}

int func_638(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(bVar1);
		if (func_75(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
				else if (!func_76(iVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

void func_639(int iParam0)
{
	Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_32 = iParam0;
}

int func_640(int iParam0, int iParam1)
{
	if (func_120(iParam0, 0))
	{
		return func_641(Global_1894573[iParam0 /*608*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_641(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
		case 291:
		case 292:
		case 293:
		case 294:
		case 295:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
		case 304:
		case 305:
		case 306:
		case 307:
		case 308:
		case 309:
			return 0;
		
		case 276:
		case 267:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

bool func_642(bool bParam0)
{
	return func_230(unk_0x259BE71D8A81D4FA(), bParam0);
}

void func_643(var uParam0)
{
	Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_308 = uParam0;
}

void func_644(int iParam0)
{
	if (Global_2793046.f_5225.f_344 != iParam0)
	{
		Global_2793046.f_5225.f_344 = iParam0;
	}
}

bool func_645(int iParam0)
{
	return func_7(9517, iParam0, 0) != 0;
}

void func_646(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 15:
			if (func_13(iLocal_160))
			{
				func_9("GENERAL_MLF_G1", -1);
			}
			else if (func_648(iLocal_160))
			{
				func_9("GENERAL_MLF_G2", -1);
			}
			else
			{
				func_9("GENERAL_MLF_G3", -1);
			}
			break;
		
		case 16:
			if (func_13(iLocal_160))
			{
				func_9("GENERAL_MLF_G4", -1);
			}
			else if (func_648(iLocal_160))
			{
				func_9("GENERAL_MLF_G5", -1);
			}
			else
			{
				func_9("GENERAL_MLF_G6", -1);
			}
			break;
		
		default:
			if (func_647(func_813(uParam0, iParam1)))
			{
				func_9("CSH_LAUNCHF_0", -1);
			}
			else
			{
				func_9("CSH_LAUNCHF_1", -1);
			}
			break;
	}
}

int func_647(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 7:
		case 8:
		case 9:
		case 13:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_648(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 26);
}

int func_649(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_681(func_784(iParam1, -1, -1, -1), func_741(iParam1, -1, 1, -1, -1, iParam0), func_690(iParam1, -1, -1, -1, -1, iParam0), 0, 1))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (func_13(iParam0))
	{
		if (iParam1 == 153)
		{
			iVar0 = 211;
		}
	}
	if (func_679(iParam1) >= func_678(iVar0))
	{
		return 5;
	}
	if (func_677(iParam0))
	{
		return 6;
	}
	if (func_676(iParam0))
	{
		return 14;
	}
	if (func_675(iParam0) && !func_674(iParam0))
	{
		return 17;
	}
	iVar1 = func_669(iParam0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	if (func_641(iParam1) == 1)
	{
		if ((func_668() || func_667()) || ((!bParam2 && func_666() != 0) && func_641(iParam1) == 1))
		{
			return 2;
		}
	}
	else if (func_641(iParam1) == 2)
	{
		if (!func_663(iParam1))
		{
			return 3;
		}
		if (!bParam2)
		{
			if (Global_1894573[iParam0 /*608*/].f_10.f_34 != func_15())
			{
				return 9;
			}
		}
		if (func_662(iParam0))
		{
			return 10;
		}
	}
	else if (func_660(iParam1))
	{
		if (func_21(iParam0) <= 0)
		{
			return 4;
		}
	}
	if (func_659(iParam1))
	{
		if (func_658())
		{
			return 13;
		}
		if (func_655())
		{
			return 12;
		}
	}
	if (func_21(iParam0) + 1 < func_654(iVar0))
	{
		return 4;
	}
	switch (iParam1)
	{
		case 157:
			break;
		
		case 152:
		case 164:
		case 173:
		case 170:
		case 201:
		case 200:
			if (!func_651(iParam0, 0))
			{
				return 1;
			}
			break;
		
		case 189:
			if (func_650(iParam0, 21) || func_650(iParam0, 25))
			{
				return 0;
			}
			break;
	}
	return -1;
}

var func_650(int iParam0, int iParam1)
{
	return BitTest(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}

int func_651(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xB23E0F9B63D009A8(iVar0);
		if (unk_0x762604C40829DB72(iVar1))
		{
			if (!func_652(iVar1, iParam0, 1))
			{
				if (iParam1 || !func_122(iVar1, 31))
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

int func_652(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_15())
	{
		if (!bParam2)
		{
			if (func_653(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1894573[iParam0 /*608*/].f_10 != func_15())
		{
			return iParam1 == Global_1894573[iParam0 /*608*/].f_10;
		}
	}
	return 0;
}

int func_653(int iParam0, int iParam1)
{
	if (iParam1 != func_15())
	{
		if (iParam0 != func_15())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 != func_15())
			{
				if (Global_1894573[iParam0 /*608*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_654(int iParam0)
{
	switch (iParam0)
	{
		case 180:
			return Global_262145.f_18633;
		
		case 183:
			return Global_262145.f_18641;
		
		case 185:
			return Global_262145.f_18650;
		
		case 182:
			return Global_262145.f_18661;
		
		case 186:
			return Global_262145.f_18670;
		
		case 195:
			return Global_262145.f_18688;
		
		case 198:
			return Global_262145.f_18698;
		
		case 197:
			return Global_262145.f_18710;
		
		case 207:
			return Global_262145.f_18718;
		
		case 209:
			return Global_262145.f_18731;
		
		case 208:
			return Global_262145.f_18739;
		
		case 201:
			return Global_262145.f_18772;
		
		case 211:
			return Global_262145.f_18840;
		
		case 193:
			return Global_262145.f_18863;
		
		case 205:
			return Global_262145.f_18881;
		
		case 189:
			return Global_262145.f_18846;
		
		case 216:
			return 2;
		
		case 220:
			return 2;
		
		default:
	}
	return 1;
}

int func_655()
{
	if (Global_1949970)
	{
		return 0;
	}
	return func_656();
}

int func_656()
{
	if (func_657())
	{
		return 1;
	}
	return Global_2683864.f_744;
}

bool func_657()
{
	return Global_1575018 == 10;
}

bool func_658()
{
	return Global_262145.f_15679;
}

int func_659(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_660(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_661(iParam0, 0);
	return 0;
}

int func_661(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_662(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xB23E0F9B63D009A8(iVar0);
		if (unk_0x762604C40829DB72(iVar1))
		{
			if ((Global_1894573[iParam0 /*608*/].f_10.f_34 != func_15() && Global_1894573[iParam0 /*608*/].f_10.f_34 == iVar1) && Global_1894573[iVar1 /*608*/].f_10.f_34 == iParam0)
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

int func_663(int iParam0)
{
	switch (iParam0)
	{
		case 179:
			if (func_665() < 2)
			{
				return 0;
			}
			break;
		
		case 148:
			if (func_664() < 2)
			{
				return 0;
			}
			break;
		
		default:
			if (func_664() < 2)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_664()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(iVar0);
		if (unk_0x762604C40829DB72(iVar2))
		{
			if (func_104(iVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

int func_665()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(iVar0);
		if (unk_0x762604C40829DB72(iVar2))
		{
			if (func_13(iVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

int func_666()
{
	return Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_103;
}

bool func_667()
{
	return Global_1923597.f_11.f_144 != -1;
}

bool func_668()
{
	return Global_1923597.f_11.f_143 != -1;
}

int func_669(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_671())
	{
		iVar1 = Global_1894573[iParam0 /*608*/].f_10.f_11[iVar0];
		if (iVar1 != func_15())
		{
			if (unk_0x762604C40829DB72(iVar1))
			{
				if (func_677(iVar1))
				{
					return 7;
				}
				if (func_676(iVar1))
				{
					return 15;
				}
				if (func_670(iVar1))
				{
					return 16;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_670(int iParam0)
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	if (((((BitTest(Global_2657589[iParam0 /*466*/].f_321.f_4, 2) || BitTest(Global_2657589[iParam0 /*466*/].f_321.f_4, 3)) || BitTest(Global_2657589[iParam0 /*466*/].f_321.f_4, 5)) || BitTest(Global_2657589[iParam0 /*466*/].f_321.f_4, 6)) || BitTest(Global_2657589[iParam0 /*466*/].f_321.f_4, 7)) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_404.f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_671()
{
	return (func_672() - 1);
}

int func_672()
{
	return func_673(unk_0x259BE71D8A81D4FA());
}

int func_673(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1894573[iParam0 /*608*/].f_10;
	if (iVar0 != func_15() && Global_1894573[iVar0 /*608*/].f_10.f_428 == 1)
	{
		return 8;
	}
	return 4;
}

int func_674(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_173(Global_2657589[iParam0 /*466*/].f_321.f_7) == 23;
			}
		}
	}
	return 0;
}

int func_675(int iParam0)
{
	if (iParam0 != func_15())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_5, 4);
	}
	return 0;
}

int func_676(int iParam0)
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

int func_677(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1894573[iVar0 /*608*/].f_1, 0);
	}
	return 0;
}

int func_678(int iParam0)
{
	switch (iParam0)
	{
		case 162:
			return Global_262145.f_13041;
		
		case 155:
			return Global_262145.f_13066;
		
		case 153:
			return Global_262145.f_13030;
		
		case 163:
			return Global_262145.f_13006;
		
		case 160:
			return Global_262145.f_13019;
		
		case 154:
			return Global_262145.f_13076;
		
		case 169:
			return 1;
		
		case 171:
			return Global_262145.f_15506;
		
		case 172:
			return Global_262145.f_15525;
		
		case 148:
			return Global_262145.f_18747;
		
		case 179:
			return Global_262145.f_18755;
		
		case 201:
			return Global_262145.f_18769;
		
		case 200:
			return Global_262145.f_18809;
		
		case 211:
			return Global_262145.f_18838;
		
		case 194:
			return Global_262145.f_18850;
		
		case 193:
			return Global_262145.f_18861;
		
		case 210:
			return Global_262145.f_18873;
		
		case 205:
			return Global_262145.f_18879;
		
		case 199:
			return Global_262145.f_18892;
		
		case 249:
			return 1;
		
		case 238:
			return 1;
		
		default:
	}
	return 2147483647;
}

int func_679(int iParam0)
{
	return Global_1923597.f_11.f_147[func_680(iParam0)];
}

int func_680(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return 0;
		
		case 152:
			return 1;
		
		case 151:
			return 2;
		
		case 142:
			return 3;
		
		case 157:
			return 4;
		
		case 159:
			return 5;
		
		case 164:
			return 6;
		
		case 160:
			return 7;
		
		case 162:
			return 8;
		
		case 163:
			return 9;
		
		case 154:
			return 10;
		
		case 155:
			return 11;
		
		case 153:
			return 12;
		
		case 166:
			return 13;
		
		case 167:
			return 14;
		
		case 168:
			return 15;
		
		case 169:
			return 16;
		
		case 170:
			return 17;
		
		case 171:
			return 18;
		
		case 172:
			return 19;
		
		case 173:
			return 20;
		
		case 178:
			return 21;
		
		case 179:
			return 22;
		
		case 180:
			return 23;
		
		case 182:
			return 24;
		
		case 183:
			return 25;
		
		case 185:
			return 26;
		
		case 186:
			return 27;
		
		case 189:
			return 28;
		
		case 190:
			return 29;
		
		case 191:
			return 30;
		
		case 192:
			return 31;
		
		case 193:
			return 32;
		
		case 194:
			return 33;
		
		case 195:
			return 34;
		
		case 197:
			return 35;
		
		case 198:
			return 36;
		
		case 199:
			return 37;
		
		case 200:
			return 38;
		
		case 201:
			return 39;
		
		case 205:
			return 40;
		
		case 207:
			return 41;
		
		case 208:
			return 42;
		
		case 209:
			return 43;
		
		case 210:
			return 44;
		
		case 214:
			return 45;
		
		case 215:
			return 46;
		
		case 216:
			return 47;
		
		case 217:
			return 48;
		
		case 218:
			return 49;
		
		case 219:
			return 50;
		
		case 220:
			return 51;
		
		case 221:
			return 52;
		
		case 188:
			return 53;
		
		case 225:
			return 54;
		
		case 226:
			return 55;
		
		case 227:
			return 56;
		
		case 229:
			return 57;
		
		case 230:
			return 58;
		
		case 233:
			return 59;
		
		case 237:
			return 60;
		
		case 238:
			return 61;
		
		case 239:
			return 62;
		
		case 240:
			return 63;
		
		case 241:
			return 64;
		
		case 242:
			return 65;
		
		case 244:
			return 66;
		
		case 248:
			return 67;
		
		case 249:
			return 68;
		
		case 250:
			return 69;
		
		case 243:
			return 70;
		
		case 158:
			return 71;
		
		case 256:
			return 72;
		
		case 258:
			return 73;
		
		case 271:
			return 74;
		
		case 276:
			return 75;
		
		case 277:
			return 76;
		
		case 262:
			return 79;
		
		case 263:
			return 78;
		
		case 264:
			return 77;
		
		case 267:
			return 80;
		
		case 291:
			return 81;
		
		case 292:
			return 82;
		
		case 293:
			return 83;
		
		case 294:
			return 84;
		
		case 295:
			return 85;
		
		case 296:
			return 86;
		
		case 297:
			return 87;
		
		case 298:
			return 88;
		
		case 299:
			return 89;
		
		case 300:
			return 90;
		
		case 301:
			return 91;
		
		case 304:
			return 92;
		
		case 305:
			return 93;
		
		case 306:
			return 94;
		
		case 307:
			return 95;
		
		case 308:
			return 96;
		
		case 309:
			return 97;
		
		default:
	}
	return -1;
}

int func_681(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_689(iParam0, bParam3, bParam4) || func_688(iParam1, bParam3, bParam4)) || func_682(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_682(int iParam0, bool bParam1, bool bParam2)
{
	return func_683(2, iParam0, 0, bParam1, bParam2);
}

int func_683(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1666891, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_687(iParam0) - func_686(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_686(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_687(iParam0) - func_685(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_686(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_687(iParam0) - func_686(iParam0, 1));
		}
		if (!bParam4 && Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/] != 3)
		{
			iVar1 = (iVar1 - func_684(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_684(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_685(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1666891.f_1;
			break;
		
		case 1:
			return Global_1666891.f_2;
			break;
		
		case 2:
			return Global_1666891.f_3;
			break;
	}
	return 0;
}

int func_686(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x259BE71D8A81D4FA();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xE8DB952A4BA8F328())
			{
				return Global_2657589[iVar0 /*466*/].f_219;
			}
			else
			{
				return unk_0xA0522491D076C1E6(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xE8DB952A4BA8F328())
			{
				return Global_2657589[iVar0 /*466*/].f_220;
			}
			else
			{
				return unk_0xF46F370442FAD8F9(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xE8DB952A4BA8F328())
			{
				return Global_2657589[iVar0 /*466*/].f_221;
			}
			else
			{
				return unk_0xD1797191721E17CE(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_687(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1666899;
			break;
		
		case 1:
			return Global_1666900;
			break;
		
		case 2:
			return Global_1666901;
			break;
	}
	return 0;
}

int func_688(int iParam0, bool bParam1, bool bParam2)
{
	return func_683(1, iParam0, 0, bParam1, bParam2);
}

int func_689(int iParam0, bool bParam1, bool bParam2)
{
	return func_683(0, iParam0, 0, bParam1, bParam2);
}

int func_690(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 159:
		case 142:
			return 1;
		
		case 167:
			return func_740(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 9;
		
		case 173:
			return 0;
		
		case 168:
			return 5;
		
		case 178:
		case 188:
			return func_738(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_732(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_720(iParam1, iParam2, iParam3, unk_0xB23E0F9B63D009A8(iParam5), iParam4);
		
		case 233:
			return func_713(iParam1, iParam2, iParam3, unk_0xB23E0F9B63D009A8(bParam5), iParam4);
		
		case 179:
			return 0;
		
		case 182:
			return 7;
		
		case 185:
			return 6;
		
		case 186:
			return 2;
		
		case 180:
			return 9;
		
		case 190:
			return 8;
		
		case 191:
			return 0;
		
		case 192:
			return func_706(iParam1, iParam2);
		
		case 193:
			return 0;
		
		case 194:
			return 0;
		
		case 199:
			return 0;
		
		case 195:
			return 9;
		
		case 201:
			return 16;
		
		case 198:
			return 12;
		
		case 205:
			return 8;
		
		case 207:
			return 0;
		
		case 208:
			return 15;
		
		case 209:
			return 0;
		
		case 210:
			return 0;
		
		case 214:
			return 9;
		
		case 215:
			return 0;
		
		case 216:
			return 16;
		
		case 217:
			return 0;
		
		case 218:
			return 0;
		
		case 219:
			return 0;
		
		case 220:
			return 30;
		
		case 221:
			return 30;
		
		case 237:
		case 250:
			return func_703(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_702(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 1;
		
		case 241:
			return 1;
		
		case 242:
			return 1;
		
		case 244:
			return 4;
		
		case 248:
			return 5;
		
		case 243:
			return func_698(iParam1, iParam2, unk_0xB23E0F9B63D009A8(bParam5), iParam4);
		
		case 158:
			return func_694(iParam1, iParam2, unk_0xB23E0F9B63D009A8(bParam5), iParam4);
		
		case 181:
			return func_691(iParam1, iParam2, unk_0xB23E0F9B63D009A8(bParam5), iParam4);
		
		default:
	}
	return 0;
}

int func_691(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_693(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_692(iParam0, iParam2));
	return iVar0;
}

int func_692(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 5;
		
		default:
	}
	return 1;
}

int func_693(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_694(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_697(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_695(iParam0, iParam2));
	return iVar0;
}

int func_695(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam0)
	{
		case 4:
		case 2:
		case 1:
		case 3:
		case 30:
		case 31:
		case 32:
		case 28:
		case 29:
		case 52:
		case 37:
			return 0;
		
		case 19:
		case 20:
			return 1;
		
		case 38:
		case 8:
		case 14:
		case 17:
		case 11:
		case 18:
		case 21:
		case 22:
		case 7:
		case 34:
		case 23:
		case 41:
		case 49:
		case 48:
		case 27:
		case 15:
		case 50:
		case 24:
		case 6:
		case 9:
		case 10:
		case 47:
		case 42:
		case 26:
		case 25:
			return 2;
		
		case 43:
			return 3;
		
		case 16:
			return 4;
		
		case 12:
		case 13:
			if (func_230(iParam1, 1))
			{
				Var0 = { func_696(iParam1) };
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 33:
			return 5;
	}
	return 1;
}

Vector3 func_696(int iParam0)
{
	return Global_1894573[iParam0 /*608*/].f_10.f_305;
}

int func_697(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 24:
			return 1;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					return 11;
				
				case 31:
				case 32:
					return 9;
				
				default:
			}
			break;
		
		case 36:
			return 0;
		
		case 38:
			return 3;
		
		case 40:
			return 4;
		
		case 41:
			return 4;
		
		case 8:
			return 13;
		
		case 13:
			switch (iParam1)
			{
				case 38:
				case 39:
					return 10;
				
				case 40:
					return 11;
				
				default:
			}
			break;
		
		case 35:
			return 5;
		
		case 46:
			return 2;
		
		case 9:
			return 8;
		
		case 4:
			return 7;
		
		case 14:
			return 11;
		
		case 17:
			return 8;
		
		case 47:
			return 11;
		
		case 11:
			return 9;
		
		case 18:
			return 13;
		
		case 6:
			return 17;
		
		case 48:
			return 21;
		
		case 33:
			return 5;
		
		case 44:
			return 2;
		
		case 21:
			return 22;
		
		case 22:
			return 12;
		
		case 7:
			return 10;
		
		case 2:
			return 0;
		
		case 34:
			switch (iParam1)
			{
				case 91:
					return 16;
				
				case 92:
					return 14;
				
				default:
			}
			break;
		
		case 27:
			return 12;
		
		case 23:
			return 17;
		
		case 31:
			return 3;
		
		case 12:
			return 4;
		
		case 3:
			return 2;
		
		case 49:
			return 15;
		
		case 19:
			return 14;
		
		case 50:
			return 12;
		
		case 20:
			return 12;
		
		case 32:
			return 15;
		
		case 30:
			return 6;
		
		case 16:
			return 12;
		
		case 39:
			return 5;
		
		case 42:
			return 3;
		
		case 37:
			return 19;
		
		case 52:
			return 6;
		
		case 15:
			return 2;
		
		case 25:
			switch (iParam1)
			{
				case 69:
					return 11;
				
				case 70:
					return 12;
				
				default:
			}
			break;
	}
	return 0;
}

int func_698(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_701(iParam0, iParam1, iParam3);
	if (!func_700(iParam0))
	{
		iVar0 = (iVar0 + func_699(iParam0, iParam2));
	}
	return iVar0;
}

int func_699(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 14:
		case 5:
		case 0:
		case 3:
		case 2:
			return 0;
		
		case 6:
			if (func_21(iParam1) + 1 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_700(int iParam0)
{
	return 0;
}

int func_701(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 13:
			return 3;
		
		case 5:
			switch (iParam1)
			{
				case 15:
					return 17;
				
				case 16:
					return 12;
				
				case 17:
					return 12;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
				case 36:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					return 3;
				
				default:
			}
			break;
		
		case 12:
			return 15;
		
		case 0:
			return 1;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 0;
						
						case 2:
							return 3;
						
						default:
					}
					break;
				
				case 29:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 2;
						
						case 2:
							return 0;
						
						default:
					}
					break;
				
				case 30:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 0;
						
						case 2:
							return 0;
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 10:
					return 6;
				
				default:
			}
			return 5;
		
		case 2:
			switch (iParam1)
			{
				case 6:
					return 22;
				
				case 7:
					return 23;
				
				case 8:
					return 25;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return 3;
				
				case 26:
					return 8;
				
				case 27:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_702(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 0;
		
		case 4:
			return 3;
		
		case 5:
			return 0;
		
		default:
	}
	return 0;
}

int func_703(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_705(iParam0, iParam1);
	if (func_704(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_704(int iParam0)
{
	return 1;
}

int func_705(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			return 3;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					return 3;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
					return 2;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 102:
				case 103:
				case 104:
					return 4;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 133:
				case 135:
					return 1;
				
				case 136:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			return 10;
		
		case 18:
			return 3;
		
		case 3:
			return 4;
		
		case 21:
			return 2;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 9;
				
				case 1:
					return 9;
				
				case 2:
					return 8;
				
				case 3:
					return 6;
				
				case 4:
					return 8;
				
				case 5:
					return 8;
				
				case 6:
					return 8;
				
				case 7:
					return 8;
				
				case 8:
					return 8;
				
				case 9:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_706(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_712(iParam0, iParam1);
	if (!func_711(iParam0))
	{
		iVar0 = (iVar0 + func_707(iParam0, func_20() + 1));
	}
	if (iParam0 == 14 || ((((func_711(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_707(iParam0, func_20() + 1));
	}
	if (iParam0 == 7)
	{
		iVar0 += 6;
	}
	if (iParam0 == 17)
	{
		iVar0 += 2;
	}
	return iVar0;
}

int func_707(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_710(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_709(iParam0, iParam1);
			iVar2 = func_708(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_711(iParam0))
		{
			if (iVar0 > Global_262145.f_18384)
			{
				iVar0 = Global_262145.f_18384;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_18383)
			{
				iVar0 = Global_262145.f_18383;
			}
			if (iVar0 > Global_262145.f_18382)
			{
				iVar0 = Global_262145.f_18382;
			}
		}
	}
	return iVar0;
}

int func_708(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18421;
		
		case 10:
			return Global_262145.f_18446;
		
		default:
	}
	return 1;
}

int func_709(int iParam0, int iParam1)
{
	if (func_711(iParam0))
	{
		if (iParam1 >= Global_262145.f_18385)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18422;
		
		case 10:
			return Global_262145.f_18447;
		
		default:
	}
	return 8;
}

int func_710(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_711(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 32:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			return 0;
		
		default:
	}
	return 1;
}

int func_712(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 32:
			switch (iParam1)
			{
				case 195:
					return 3;
				
				case 196:
					return 3;
				
				case 197:
					return 3;
				
				case 198:
					return 3;
				
				case 199:
					return 3;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 231:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					return 9;
				
				case 8:
					return 8;
				
				case 9:
					return 7;
				
				case 10:
					return 4;
				
				case 11:
					return 5;
				
				case 12:
					return 6;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					return 10;
				
				case 2:
					return 10;
				
				case 3:
					return 8;
				
				case 4:
					return 10;
				
				case 5:
					return 10;
				
				case 6:
					return 10;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					return 10;
				
				case 14:
					return 8;
				
				case 15:
					return 8;
				
				case 16:
					return 8;
				
				case 17:
					return 10;
				
				case 18:
					return 9;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					return 5;
				
				case 20:
					return 8;
				
				case 21:
					return 4;
				
				case 22:
					return 0;
				
				case 23:
					return 10;
				
				case 24:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					return 20;
				
				case 26:
					return 15;
				
				case 27:
					return 13;
				
				case 28:
					return 16;
				
				case 29:
					return 14;
				
				case 30:
					return 14;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					return 7;
				
				case 75:
					return 5;
				
				case 76:
					return 5;
				
				case 77:
					return 4;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 64:
					return 1;
				
				case 67:
					return 1;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					return 6;
				
				case 39:
					return 6;
				
				case 40:
					return 7;
				
				case 41:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_713(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = func_719(iParam0, iParam1, iParam2, iParam4);
	if (!func_718(iParam0))
	{
		if (iParam3 != func_15())
		{
			iVar0 = (iVar0 + func_715(iParam0, func_21(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_714(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_714(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 5:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_715(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	switch (iParam0)
	{
		case 5:
		case 7:
		case 6:
		case 4:
		case 10:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 2;
			break;
		
		case 3:
		case 2:
			iVar0 = 4;
			break;
		
		default:
			if (func_718(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_717(iParam0))
	{
		iVar0 = func_717(iParam0);
	}
	else if (iVar0 < func_716(iParam0))
	{
		iVar0 = func_716(iParam0);
	}
	return iVar0;
}

int func_716(int iParam0)
{
	return 1;
}

int func_717(int iParam0)
{
	return 4;
}

int func_718(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_719(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 5;
		
		case 3:
			iVar0 = 1;
			switch (iParam1)
			{
				case 26:
					return iVar0 + 1;
				
				case 34:
					return iVar0 + 1;
				
				default:
			}
			return iVar0;
			break;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 8:
			return 7;
		
		case 12:
			switch (iParam1)
			{
				case 125:
					return 6;
				
				default:
			}
			return 2;
			break;
		
		case 9:
			return 0;
		
		case 13:
			return 1;
		
		case 10:
			return 12;
	}
	return 0;
}

int func_720(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = func_731(iParam0, iParam1, iParam2, iParam4);
	if (!func_730(iParam0))
	{
		if (iParam3 != func_15())
		{
			iVar0 = (iVar0 + func_722(iParam0, func_21(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_721(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_721(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_722(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_729(iParam0))
	{
		iVar1 = func_728(iParam3);
		switch (iParam0)
		{
			case 21:
				iVar0 = 1;
				break;
			
			case 23:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 2;
						break;
				}
				break;
			
			case 15:
				switch (iVar1)
				{
					case 1:
						iVar0 = 3;
						break;
					
					case 2:
						iVar0 = 6;
						break;
					
					case 3:
						iVar0 = 8;
						break;
				}
				break;
			
			case 20:
			case 24:
			case 22:
			case 16:
			case 17:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
			
			case 25:
				switch (iVar1)
				{
					case 1:
						iVar0 = 2;
						break;
					
					case 2:
						iVar0 = 3;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
		}
		return iVar0;
	}
	else if (func_727(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_726(iParam2))
		{
			iVar0 = func_726(iParam2);
		}
	}
	if (iVar0 > func_724(iParam0))
	{
		iVar0 = func_724(iParam0);
	}
	else if (iVar0 < func_723(iParam0))
	{
		iVar0 = func_723(iParam0);
	}
	return iVar0;
}

int func_723(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_724(int iParam0)
{
	if (!func_729(iParam0))
	{
		if (func_730(iParam0))
		{
			if (func_725(iParam0))
			{
				return 2;
			}
			return 3;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 21:
				return 1;
			
			case 23:
				return 2;
			
			case 15:
				return 9;
			
			default:
		}
		return 3;
	}
	return 4;
}

int func_725(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_726(int iParam0)
{
	if (iParam0 == func_15() || Global_1853910[iParam0 /*862*/].f_267.f_293 == 0)
	{
		return 50;
	}
	return (50 - Global_1853910[iParam0 /*862*/].f_267.f_293.f_3);
}

int func_727(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_728(int iParam0)
{
	if (iParam0 > 25)
	{
		return 3;
	}
	else if (iParam0 > 10)
	{
		return 2;
	}
	return 1;
}

int func_729(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		
		default:
	}
	return 0;
}

int func_730(int iParam0)
{
	if (func_729(iParam0) || func_727(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_731(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 12;
		
		case 11:
			return 1;
		
		case 5:
			return 10;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 3;
				
				case 2:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					return 17;
				
				case 35:
					return 20;
				
				case 36:
					return 22;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					return 9;
				
				case 7:
					return 0;
				
				case 8:
					return 5;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam2)
			{
				case 1:
					return 7;
				
				case 2:
					return 14;
				
				case 3:
					return 14;
				
				case 4:
					return 14;
				
				default:
			}
			break;
		
		case 8:
			return 2;
		
		case 23:
			return (2 * iParam2);
		
		case 24:
			return (2 * iParam2);
		
		case 26:
			return 2;
	}
	return 0;
}

int func_732(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_737(iParam0, iParam1, iParam2, iParam3);
	if (!func_736(iParam0))
	{
		iVar0 = (iVar0 + func_734(iParam0, func_20() + 1, -1, iParam2));
	}
	if (func_733(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_733(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 12:
		case 6:
		case 14:
		case 15:
		case 16:
		case 17:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_734(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_735(iParam0))
	{
		if (iParam2 <= Global_262145.f_21683)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_21684)
		{
			iVar0 = 2;
			if (iParam0 == 18)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 3;
			if (iParam0 == 18)
			{
				iVar0 = 2;
			}
			else if (iParam0 == 19 || iParam0 == 2)
			{
				iVar0 = 4;
			}
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 < 4)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (iParam0 == 0 || iParam0 == 20)
	{
		iVar0 = 1;
	}
	else if (func_736(iParam0))
	{
		if (iParam1 < Global_262145.f_21643)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_735(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_736(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_737(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 6;
				
				case 2:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					return 0;
				
				case 4:
					return 0;
				
				case 5:
					return 0;
				
				case 6:
					return 0;
				
				case 7:
					return 0;
				
				case 8:
					return 0;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					return 0;
				
				case 10:
					return 0;
				
				case 11:
					return 0;
				
				case 12:
					return 0;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					return 10;
				
				case 15:
					return 12;
				
				case 13:
					return 2;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 16:
					return 0;
				
				case 17:
					return 0;
				
				case 18:
					return 0;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					return 15;
				
				case 20:
					return 15;
				
				case 21:
					return 11;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					return 10;
				
				case 23:
					return 7;
				
				case 24:
					return 6;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return (6 + iParam2 * 2);
				
				case 26:
					return (7 + iParam2 * 2);
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 9;
				
				case 28:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					return 6;
				
				case 30:
					return 6;
				
				case 31:
					return 6;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					return 8;
				
				case 33:
					return 8;
				
				case 34:
					return 8;
				
				default:
			}
			break;
		
		case 12:
			return 0;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					return 18;
				
				case 36:
					return 9;
				
				case 37:
					return 0;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam3)
			{
				case 0:
					return 9;
				
				case 1:
					return 16;
				
				case 2:
					return 6;
				
				case 3:
					return 3;
				
				case 4:
					return 9;
				
				case 5:
					return 6;
				
				case 6:
					return 6;
				
				case 7:
					return 3;
				
				case 8:
					return 3;
				
				case 9:
					return 3;
				
				case 10:
					return 0;
				
				case 11:
					return 9;
				
				case 12:
					return 3;
				
				default:
			}
			break;
		
		case 15:
			return iParam2;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 13;
	}
	return 0;
}

int func_738(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_739(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_739(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
			switch (iParam1)
			{
				case 18:
					return 9;
				
				case 19:
					return 7;
				
				case 20:
					return 8;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 1;
				
				case 28:
					return 1;
				
				case 29:
					return 1;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					return 2;
				
				case 22:
					return 2;
				
				case 23:
					return 2;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					return 8;
				
				case 37:
					return 7;
				
				case 38:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					return 8;
				
				case 40:
					return 6;
				
				case 41:
					return 2;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					return 5;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					return 1;
				
				case 43:
					return 1;
				
				case 44:
					return 1;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					return 12;
				
				case 46:
					return 12;
				
				case 47:
					return 12;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					return 7;
				
				case 49:
					return 7;
				
				case 50:
					return 7;
				
				default:
			}
			break;
		
		case 12:
			return 3;
	}
	return 0;
}

int func_740(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 3;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 1;
		
		case 17:
			return 3;
		
		case 19:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 1;
}

int func_741(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_783(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 8;
		
		case 178:
		case 188:
			return func_779(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_775(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_769(iParam1, iParam3, iParam4, unk_0xB23E0F9B63D009A8(iParam5), 0, 0, 0);
		
		case 233:
			return func_763(iParam1, iParam3, iParam4, unk_0xB23E0F9B63D009A8(bParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_762(iParam1, iParam3);
		
		case 179:
			return 0;
		
		case 183:
			return 5;
		
		case 182:
			return 14;
		
		case 185:
			return 24;
		
		case 186:
			return 13;
		
		case 180:
			return 6;
		
		case 193:
			return 6;
		
		case 194:
			return 0;
		
		case 197:
			return 4;
		
		case 199:
			return 0;
		
		case 195:
			return 20;
		
		case 201:
			return 0;
		
		case 198:
			return 8;
		
		case 205:
			return 1;
		
		case 207:
			return 8;
		
		case 208:
			return 2;
		
		case 209:
			return 6;
		
		case 210:
			return 0;
		
		case 214:
			return 5;
		
		case 215:
			return 11;
		
		case 216:
			return 8;
		
		case 217:
			return 24;
		
		case 218:
			return 23;
		
		case 219:
			return 1;
		
		case 220:
			return 4;
		
		case 221:
			return 4;
		
		case 237:
		case 250:
			return func_761(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_760(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 11;
		
		case 241:
			return 3;
		
		case 242:
			return 5;
		
		case 244:
			return 4;
		
		case 248:
			return 1;
		
		case 243:
			return func_754(iParam1, iParam3, unk_0xB23E0F9B63D009A8(bParam5), 0, -1, 0, 0);
		
		case 158:
			return func_748(iParam1, iParam3, unk_0xB23E0F9B63D009A8(bParam5), 0, -1, 0, 0);
		
		case 181:
			return func_742(iParam1, iParam3, unk_0xB23E0F9B63D009A8(bParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_742(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_747(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_746(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_745(func_21(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_744(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_743(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_743(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_744(int iParam0, int iParam1)
{
	return func_743(iParam0, iParam1) > 0;
}

int func_745(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_746(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_747(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_748(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0++;
			break;
		
		case 24:
			iVar0++;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 89:
					iVar0++;
					break;
				
				case 90:
					iVar0 += 2;
					break;
			}
			break;
		
		case 36:
			iVar0 += 2;
			break;
		
		case 37:
			iVar0 += 2;
			break;
		
		case 38:
			iVar0++;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 38:
					iVar0 += 3;
					break;
				
				case 39:
					iVar0 += 3;
					break;
				
				case 40:
					iVar0 += 4;
					break;
			}
			break;
		
		case 16:
			iVar0 += 12;
			break;
		
		case 35:
			iVar0 += 4;
			break;
		
		case 4:
			iVar0 += 16;
			break;
		
		case 46:
			iVar0++;
			break;
		
		case 9:
			iVar0 += 7;
			break;
		
		case 14:
			iVar0 += 7;
			break;
		
		case 17:
			iVar0 += 7;
			break;
		
		case 47:
			iVar0 += 2;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 6:
			iVar0 += 11;
			break;
		
		case 48:
			iVar0 += 2;
			break;
		
		case 44:
			iVar0 += 2;
			break;
		
		case 21:
			iVar0 += 8;
			break;
		
		case 22:
			iVar0 += 3;
			break;
		
		case 7:
			iVar0 += 7;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 2:
			iVar0++;
			break;
		
		case 34:
			iVar0 += 5;
			break;
		
		case 27:
			iVar0 += 9;
			break;
		
		case 26:
			iVar0 += 3;
			break;
		
		case 31:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 21;
			break;
		
		case 12:
			iVar0 += 20;
			break;
		
		case 41:
			iVar0 += 11;
			break;
		
		case 49:
			iVar0 += 3;
			break;
		
		case 29:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 50:
			iVar0 += 4;
			break;
		
		case 23:
			iVar0 += 4;
			break;
		
		case 20:
			iVar0 += 3;
			break;
		
		case 32:
			iVar0 = iVar0;
			break;
		
		case 51:
			iVar0 += 4;
			break;
		
		case 52:
			iVar0 += 6;
			break;
		
		case 39:
			iVar0 += 2;
			break;
		
		case 40:
			iVar0++;
			break;
		
		case 25:
			iVar0 += 3;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_753(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_752(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_751(func_21(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_750(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_749(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_749(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 27:
		case 49:
		case 48:
		case 6:
		case 50:
		case 7:
		case 16:
		case 47:
		case 5:
		case 25:
		case 26:
		case 22:
		case 11:
		case 17:
		case 14:
			return 2;
		
		default:
	}
	return 0;
}

bool func_750(int iParam0, int iParam1)
{
	return func_749(iParam0, iParam1) > 0;
}

int func_751(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam1)
	{
		case 43:
			return 3;
		
		case 17:
		case 18:
		case 15:
			return 2;
		
		case 12:
		case 13:
			if (iParam2 != func_15())
			{
				if (func_230(iParam2, 1))
				{
					Var0 = { func_696(iParam2) };
				}
			}
			else
			{
				return 4;
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 53:
			if (iParam0 == 1)
			{
			}
			break;
	}
	return 1;
}

int func_752(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 96:
		case 97:
		case 98:
		case 108:
		case 109:
		case 110:
		case 118:
		case 119:
		case 120:
		case 105:
		case 106:
		case 107:
			return 0;
		
		case 66:
		case 67:
		case 68:
		case 30:
		case 31:
		case 32:
		case 121:
		case 122:
		case 123:
			return 1;
		
		case 93:
		case 94:
		case 95:
			return 3;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		case 116:
		case 117:
			return 2;
		
		case 20:
			return 9;
		
		case 21:
			return 5;
		
		case 27:
		case 28:
		case 29:
			return 7;
		
		case 114:
		case 115:
			return iParam0;
		
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 38:
		case 39:
		case 40:
			switch (iParam0)
			{
				case 0:
					return 3;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 6;
				
				default:
			}
			break;
		
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 5;
				
				case 1:
					return 6;
				
				default:
			}
			break;
		
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 7;
				
				case 1:
					return 8;
				
				default:
			}
			break;
		
		case 33:
		case 34:
		case 35:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 51:
		case 52:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 36:
		case 37:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				case 1:
					return 21;
				
				case 2:
					return 22;
				
				case 3:
					return 23;
				
				default:
			}
			break;
		
		case 17:
		case 18:
		case 19:
			return 3;
		
		case 131:
			return 4;
	}
	return -1;
}

int func_753(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_754(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 4;
			break;
		
		case 1:
			iVar0 += 10;
			break;
		
		case 15:
			iVar0 += 21;
			break;
		
		case 14:
			iVar0 += 2;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 4;
					break;
				
				case 36:
					iVar0 += 5;
					break;
				
				case 37:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 += 5;
					break;
				
				case 1:
					iVar0 += 5;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0++;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 3;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 4;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 29:
					switch (iParam4)
					{
						case 0:
							iVar0 += 4;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 30:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
			}
			break;
		
		case 3:
			iVar0 += 6;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 7;
					break;
				
				case 13:
					iVar0 += 10;
					break;
				
				case 14:
					iVar0 += 8;
					break;
			}
			break;
		
		case 2:
			iVar0 += 3;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_700(iParam0))
		{
			iVar0 = (iVar0 + func_699(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_759(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_758(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_757(func_21(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_756(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_755(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_755(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

bool func_756(int iParam0, int iParam1)
{
	return func_755(iParam0, iParam1) > 0;
}

int func_757(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 6:
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_758(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				default:
			}
			break;
		
		case 35:
		case 36:
		case 37:
			return 0;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
		
		case 28:
		case 29:
		case 30:
			return 0;
		
		case 18:
		case 19:
		case 20:
		case 21:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 31:
		case 32:
		case 33:
		case 34:
			return 0;
		
		case 38:
		case 39:
		case 40:
			return 0;
		
		case 12:
			return 6;
		
		case 13:
			return 9;
		
		case 14:
			return 7;
		
		case 22:
		case 23:
		case 24:
			return 0;
		
		case 25:
		case 26:
		case 27:
			return 0;
	}
	return -1;
}

int func_759(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_760(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 4;
		
		case 2:
			return 6;
		
		case 3:
			return 1;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_761(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 80:
					iVar0++;
					break;
				
				case 81:
					iVar0++;
					break;
				
				case 82:
					iVar0++;
					break;
			}
			break;
		
		case 22:
			iVar0 += 4;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 3;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0++;
			break;
		
		case 20:
			iVar0 += 4;
			break;
		
		case 17:
			iVar0++;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 16:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 8;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 8;
			break;
		
		case 4:
		case 24:
		case 2:
			iVar0++;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 0:
			iVar0 += 3;
			break;
	}
	if (func_704(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_762(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 = iVar0;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 7;
					break;
				
				case 2:
					iVar0 += 6;
					break;
				
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 3;
					break;
				
				case 6:
					iVar0 += 2;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 4;
					break;
				
				case 9:
					iVar0 += 2;
					break;
				
				case 10:
					iVar0 += 2;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 2;
					break;
				
				case 14:
					iVar0 += 4;
					break;
				
				case 15:
					iVar0 += 6;
					break;
				
				case 16:
					iVar0 += 3;
					break;
				
				case 17:
					iVar0 += 3;
					break;
				
				case 18:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 5;
					break;
				
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 3;
					break;
				
				case 34:
					iVar0 += 5;
					break;
				
				case 35:
					iVar0 += 5;
					break;
				
				case 36:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0++;
					break;
				
				case 75:
					iVar0++;
					break;
				
				case 76:
					iVar0++;
					break;
				
				case 77:
					iVar0++;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 = iVar0;
					break;
				
				case 79:
					iVar0 = iVar0;
					break;
				
				case 80:
					iVar0 = iVar0;
					break;
				
				case 81:
					iVar0 = iVar0;
					break;
				
				case 82:
					iVar0 = iVar0;
					break;
				
				case 83:
					iVar0 = iVar0;
					break;
				
				case 84:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 7:
			iVar0 += 4;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 6;
					break;
				
				case 63:
					iVar0 += 6;
					break;
				
				case 64:
					iVar0 += 6;
					break;
				
				case 65:
					iVar0 += 6;
					break;
				
				case 66:
					iVar0 += 6;
					break;
				
				case 67:
					iVar0 += 6;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 = iVar0;
					break;
				
				case 86:
					iVar0 = iVar0;
					break;
				
				case 87:
					iVar0 = iVar0;
					break;
				
				case 88:
					iVar0 = iVar0;
					break;
				
				case 89:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 4;
					break;
				
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 4;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if ((func_711(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_707(iParam0, func_20() + 1));
	}
	return iVar0;
}

int func_763(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 3:
			iVar0++;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 8:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0++;
			break;
		
		case 12:
			iVar0 += 2;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 = iVar0;
			break;
		
		case 13:
			iVar0 += 2;
			break;
		
		case 10:
			iVar0 += 4;
			break;
	}
	if (!bParam5)
	{
		if (func_718(iParam0))
		{
			if (iParam3 != func_15())
			{
				iVar0 = (iVar0 + func_715(iParam0, func_21(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_15())
		{
			iVar0 = (iVar0 + func_768(iParam0, func_21(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_767(0, iParam1) != -1)
		{
			if (iParam3 != func_15())
			{
				iVar0 = (iVar0 + func_766(func_21(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_765(iParam0))
		{
			iVar0 = (iVar0 + func_764(iParam0));
		}
	}
	return iVar0;
}

int func_764(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 8:
		case 1:
		case 12:
		case 10:
		case 11:
		case 13:
			return 2;
		
		default:
	}
	return 0;
}

bool func_765(int iParam0)
{
	return func_764(iParam0) > 0;
}

int func_766(var uParam0, int iParam1)
{
	return 2;
}

int func_767(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 136:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_768(int iParam0, int iParam1)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 1:
			uVar0 = func_7(5329, -1, 0);
			if (BitTest(uVar0, 7))
			{
				if (iParam1 > 4)
				{
					return 4;
				}
				return iParam1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_769(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 11:
			iVar0 += 9;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 4:
			iVar0 += 10;
			break;
		
		case 8:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0++;
					break;
				
				case 1:
					iVar0++;
					break;
				
				case 2:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 5;
					break;
			}
			break;
		
		case 3:
			if (iParam2 >= 4)
			{
				iVar0 += 10;
			}
			else if (iParam2 == 3)
			{
				iVar0 += 8;
			}
			else if (iParam2 == 2)
			{
				iVar0 += 7;
			}
			else if (iParam2 == 1)
			{
				iVar0 += 6;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					iVar0++;
					break;
				
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 2;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 16:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 17:
			iVar0 += 5;
			break;
		
		case 26:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_730(iParam0))
		{
			if (iParam3 != func_15())
			{
				iVar0 = (iVar0 + func_722(iParam0, func_21(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_15())
		{
			iVar0 = (iVar0 + func_774(iParam0, func_21(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_773(0, iParam1) != -1)
		{
			if (iParam3 != func_15())
			{
				iVar0 = (iVar0 + func_772(func_21(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_771(iParam0))
		{
			iVar0 = (iVar0 + func_770(iParam0));
		}
	}
	return iVar0;
}

int func_770(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 11:
		case 1:
		case 2:
		case 14:
		case 4:
		case 10:
		case 7:
		case 3:
		case 8:
		case 0:
		case 5:
			return 2;
		
		case 21:
		case 16:
		case 17:
			return 2;
		
		default:
	}
	return 0;
}

bool func_771(int iParam0)
{
	return func_770(iParam0) > 0;
}

int func_772(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_725(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_725(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_725(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_725(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_725(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_725(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_725(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_725(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_773(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					return 4;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 48:
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 28:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 8;
				
				case 3:
					return 9;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 40:
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 0;
				
				case 3:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_774(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 14:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 7:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 2:
		case 4:
		case 3:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 10:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 9:
			return 1;
		
		case 0:
			if (iParam1 > 1)
			{
				return 2;
			}
			return 1;
		
		case 8:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 5:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		case 13:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 11:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return ceil((IntToFloat(iParam1) / 2f));
}

int func_775(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 3;
					break;
				
				case 1:
					iVar0 += 3;
					break;
				
				case 2:
					iVar0 += 3;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 3;
					break;
				
				case 10:
					iVar0 += 3;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					iVar0 += 2;
					break;
				
				case 15:
					iVar0 += 4;
					break;
				
				case 13:
					iVar0 += 2;
					break;
			}
			break;
		
		case 5:
			iVar0 += 4;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 5;
					break;
				
				case 21:
					iVar0 += 5;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 4;
					break;
				
				case 23:
					iVar0 += 3;
					break;
				
				case 24:
					iVar0 += 3;
					break;
			}
			if (func_734(iParam0, func_20() + 1, -1, iParam2) == 1)
			{
				iVar0++;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 5;
					break;
				
				case 26:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 2;
					break;
				
				case 28:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
					iVar0 += 4;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 3;
					break;
				
				case 36:
					iVar0 += 3;
					break;
				
				case 37:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
	}
	if (!bParam4)
	{
		if (func_736(iParam0))
		{
			iVar0 = (iVar0 + func_734(iParam0, func_20() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_778(iParam0, func_20() + 1));
	}
	if (!bParam3)
	{
		if (func_777(iParam0))
		{
			iVar0 = (iVar0 + func_776(iParam0));
		}
	}
	return iVar0;
}

int func_776(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 19:
		case 8:
			return 2;
		
		default:
	}
	return 0;
}

bool func_777(int iParam0)
{
	return func_776(iParam0) > 0;
}

int func_778(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 1)
			{
				return 1;
			}
			return floor((IntToFloat(iParam1) / 1.5f));
		
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			return floor((IntToFloat(iParam1) / 2f));
		
		default:
	}
	return 0;
}

int func_779(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 = iVar0;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 13:
			iVar0 = iVar0;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 2;
					break;
				
				case 2:
					iVar0 += 2;
					break;
				
				case 3:
					iVar0 += 2;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 2;
					break;
				
				case 19:
					iVar0 += 2;
					break;
				
				case 20:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 7;
					break;
				
				case 22:
					iVar0 += 7;
					break;
				
				case 23:
					iVar0 += 7;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 = iVar0;
					break;
				
				case 28:
					iVar0 = iVar0;
					break;
				
				case 29:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 2;
					break;
				
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 7;
					break;
				
				case 38:
					iVar0 += 7;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 6;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 2;
					break;
				
				case 43:
					iVar0 += 2;
					break;
				
				case 44:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 6;
					break;
				
				case 46:
					iVar0 += 6;
					break;
				
				case 47:
					iVar0 += 6;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 2;
					break;
				
				case 49:
					iVar0 += 2;
					break;
				
				case 50:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 11;
			break;
	}
	iVar0 = (iVar0 + func_782(iParam0, func_20() + 1, iParam2));
	iVar0 = (iVar0 + func_780(iParam0));
	return iVar0;
}

int func_780(int iParam0)
{
	if (func_781(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_781(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_782(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	if (iVar0 == 0)
	{
		if (iParam0 == 8)
		{
			iVar0 = iParam2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_783(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

int func_784(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 167:
			return func_811(iParam1);
		
		case 168:
			return 12;
		
		case 170:
			return 4;
		
		case 171:
			return 0;
		
		case 172:
			return 0;
		
		case 173:
			return 4;
		
		case 178:
		case 188:
			return func_808(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_805(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_802(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_799(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_798(iParam1, iParam2);
		
		case 179:
			return 0;
		
		case 183:
			return 15;
		
		case 182:
			return 20;
		
		case 185:
			return 21;
		
		case 186:
			return 36;
		
		case 180:
			return 10;
		
		case 193:
			return 10;
		
		case 194:
			return 0;
		
		case 197:
			return 12;
		
		case 199:
			return 6;
		
		case 195:
			return 15;
		
		case 201:
			return 0;
		
		case 198:
			return 18;
		
		case 205:
			return 1;
		
		case 207:
			return 24;
		
		case 208:
			return 14;
		
		case 209:
			return 11;
		
		case 210:
			return 0;
		
		case 214:
			return 12;
		
		case 215:
			return 20;
		
		case 216:
			return 20;
		
		case 217:
			return func_797();
		
		case 218:
			return func_796();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_795(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_794(iParam1, iParam2);
		
		case 239:
			return 6;
		
		case 240:
			return 11;
		
		case 241:
			return 14;
		
		case 242:
			return 14;
		
		case 244:
			return 9;
		
		case 248:
			return 10;
		
		case 243:
			return func_791(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_788(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_785(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_785(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			iVar0 += 6;
			break;
	}
	if (!bParam2)
	{
		if (func_744(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_786(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_786(int iParam0, var uParam1)
{
	if (func_744(iParam0, uParam1))
	{
		return (func_743(iParam0, uParam1) + func_787(iParam0, uParam1));
	}
	return 0;
}

int func_787(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_788(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 += 6;
			break;
		
		case 24:
			iVar0 += 2;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 12;
					break;
				
				case 31:
				case 32:
					iVar0 += 10;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 88:
					iVar0 += 10;
					break;
				
				case 89:
					iVar0 += 9;
					break;
				
				case 90:
					iVar0 += 10;
					break;
			}
			break;
		
		case 36:
			iVar0 += 9;
			break;
		
		case 43:
			iVar0 += 6;
			break;
		
		case 38:
			iVar0 += 6;
			break;
		
		case 40:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 += 16;
			break;
		
		case 16:
			iVar0 += 14;
			break;
		
		case 35:
			iVar0 += 13;
			break;
		
		case 4:
			iVar0 += 32;
			break;
		
		case 45:
			iVar0 += 2;
			break;
		
		case 46:
			iVar0 += 9;
			break;
		
		case 9:
			iVar0 += 15;
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 17:
			iVar0 += 14;
			break;
		
		case 47:
			iVar0 += 13;
			break;
		
		case 11:
			iVar0 += 11;
			break;
		
		case 18:
			iVar0 += 24;
			break;
		
		case 6:
			iVar0 += 14;
			break;
		
		case 48:
			iVar0 += 15;
			break;
		
		case 44:
			iVar0 += 9;
			break;
		
		case 21:
			iVar0 += 20;
			break;
		
		case 22:
			iVar0 += 14;
			break;
		
		case 7:
			iVar0 += 22;
			break;
		
		case 15:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 34:
			iVar0 += 18;
			break;
		
		case 27:
			iVar0 += 16;
			break;
		
		case 26:
			iVar0 += 10;
			break;
		
		case 23:
			iVar0 += 10;
			break;
		
		case 31:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 14;
			break;
		
		case 12:
			iVar0 += 7;
			break;
		
		case 41:
			iVar0 += 10;
			break;
		
		case 49:
			iVar0 += 30;
			break;
		
		case 19:
			iVar0 += 15;
			break;
		
		case 5:
			iVar0 += 7;
			break;
		
		case 30:
			iVar0++;
			break;
		
		case 13:
			iVar0 += 20;
			break;
		
		case 29:
			iVar0 += 9;
			break;
		
		case 50:
			iVar0 += 24;
			break;
		
		case 20:
			iVar0 += 26;
			break;
		
		case 32:
			iVar0 += 30;
			break;
		
		case 28:
			iVar0 += 3;
			break;
		
		case 42:
			iVar0 += 13;
			break;
		
		case 52:
			iVar0 += 12;
			break;
		
		case 39:
			iVar0 += 5;
			break;
		
		case 37:
			iVar0 += 6;
			break;
		
		case 25:
			iVar0 += 6;
			break;
		
		case 51:
			iVar0 += 20;
			break;
	}
	if (!bParam2)
	{
		if (func_750(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_789(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_789(int iParam0, int iParam1)
{
	if (func_750(iParam0, iParam1))
	{
		return (func_749(iParam0, iParam1) + func_790(iParam0, iParam1));
	}
	return 0;
}

int func_790(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 49:
		case 48:
		case 7:
		case 16:
		case 5:
		case 26:
		case 22:
		case 25:
		case 11:
		case 17:
		case 14:
			return 2;
		
		case 6:
		case 50:
		case 47:
			return 4;
		
		case 27:
			return 2;
		
		default:
	}
	return 0;
}

int func_791(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 8;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 2:
					iVar0 += 10;
					break;
				
				case 3:
					iVar0 += 10;
					break;
				
				case 4:
					iVar0 += 14;
					break;
				
				case 5:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			iVar0 += 20;
			break;
		
		case 14:
			iVar0 += 19;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 6;
					break;
				
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 17;
					break;
			}
			break;
		
		case 6:
			iVar0 += 8;
			break;
		
		case 5:
			iVar0 += 11;
			break;
		
		case 0:
			iVar0 += 12;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0++;
					break;
				
				case 32:
					iVar0 += 7;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 12:
			iVar0 += 30;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					iVar0 += 10;
					break;
				
				case 29:
					iVar0 += 8;
					break;
				
				case 30:
					iVar0 += 9;
					break;
			}
			break;
		
		case 3:
			iVar0 += 19;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 12;
					break;
				
				case 13:
					iVar0 += 14;
					break;
				
				case 14:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam2)
	{
		if (func_756(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_792(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_792(int iParam0, int iParam1)
{
	if (func_756(iParam0, iParam1))
	{
		return (func_755(iParam0, iParam1) + func_793(iParam0, iParam1));
	}
	return 0;
}

int func_793(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

int func_794(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 14;
		
		case 1:
			return 7;
		
		case 2:
			return 27;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			switch (iParam1)
			{
				case 0:
				case 2:
					return 11;
				
				case 1:
					return 9;
				
				default:
			}
			break;
	}
	return 0;
}

int func_795(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					iVar0 += 19;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 9;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 80:
				case 81:
				case 82:
					iVar0 += 3;
					break;
			}
			break;
		
		case 22:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0 += 3;
			break;
		
		case 20:
			iVar0 += 12;
			break;
		
		case 18:
			iVar0 += 20;
			break;
		
		case 17:
			iVar0 += 9;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 5;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 17;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 1:
			iVar0 += 30;
			break;
		
		case 2:
			iVar0 += 4;
			break;
		
		case 5:
			iVar0 += 16;
			break;
	}
	return iVar0;
}

int func_796()
{
	int iVar0;
	
	iVar0 = 32;
	return iVar0;
}

int func_797()
{
	int iVar0;
	
	iVar0 = 8;
	return iVar0;
}

int func_798(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 16;
					break;
				
				case 2:
					iVar0 += 14;
					break;
				
				case 3:
					iVar0 += 13;
					break;
				
				case 4:
					iVar0 += 12;
					break;
				
				case 5:
					iVar0 += 12;
					break;
				
				case 6:
					iVar0 += 12;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 12;
					break;
				
				case 8:
					iVar0 += 12;
					break;
				
				case 9:
					iVar0 += 12;
					break;
				
				case 10:
					iVar0 += 12;
					break;
				
				case 11:
					iVar0 += 12;
					break;
				
				case 12:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 17;
					break;
				
				case 14:
					iVar0 += 12;
					break;
				
				case 15:
					iVar0 += 13;
					break;
				
				case 16:
					iVar0 += 14;
					break;
				
				case 17:
					iVar0 += 12;
					break;
				
				case 18:
					iVar0 += 14;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 14;
					break;
				
				case 20:
					iVar0 += 14;
					break;
				
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
				
				case 24:
					iVar0 += 14;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					iVar0 += 4;
					break;
				
				case 26:
					iVar0 += 4;
					break;
				
				case 27:
					iVar0 += 4;
					break;
				
				case 28:
					iVar0 += 4;
					break;
				
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 13;
					break;
				
				case 32:
					iVar0 += 13;
					break;
				
				case 33:
					iVar0 += 13;
					break;
				
				case 34:
					iVar0 += 13;
					break;
				
				case 35:
					iVar0 += 13;
					break;
				
				case 36:
					iVar0 += 13;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0 += 10;
					break;
				
				case 75:
					iVar0 += 10;
					break;
				
				case 76:
					iVar0 += 10;
					break;
				
				case 77:
					iVar0 += 10;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 += 3;
					break;
				
				case 79:
					iVar0 += 3;
					break;
				
				case 80:
					iVar0 += 3;
					break;
				
				case 81:
					iVar0 += 3;
					break;
				
				case 82:
					iVar0 += 5;
					break;
				
				case 83:
					iVar0 += 3;
					break;
				
				case 84:
					iVar0 += 3;
					break;
			}
			break;
		
		case 7:
			iVar0 += 8;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 8;
					break;
				
				case 63:
					iVar0 += 8;
					break;
				
				case 64:
					iVar0 += 8;
					break;
				
				case 65:
					iVar0 += 8;
					break;
				
				case 66:
					iVar0 += 8;
					break;
				
				case 67:
					iVar0 += 8;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 += 3;
					break;
				
				case 86:
					iVar0 += 3;
					break;
				
				case 87:
					iVar0 += 3;
					break;
				
				case 88:
					iVar0 += 3;
					break;
				
				case 89:
					iVar0 += 3;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 18;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 8;
					break;
				
				case 39:
					iVar0 += 8;
					break;
				
				case 40:
					iVar0 += 8;
					break;
				
				case 41:
					iVar0 += 8;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if (iParam0 == 12 || iParam0 == 9)
	{
		iVar0 = (iVar0 + func_707(iParam0, func_20() + 1));
	}
	return iVar0;
}

int func_799(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 14;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 3:
			iVar0 += 23;
			break;
		
		case 4:
			iVar0 += 20;
			break;
		
		case 5:
			iVar0 += 5;
			break;
		
		case 8:
			iVar0 += 11;
			break;
		
		case 6:
			iVar0 += 7;
			break;
		
		case 12:
			iVar0 += 8;
			break;
		
		case 7:
			iVar0 += 18;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 12;
			break;
		
		case 13:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 16;
			break;
	}
	if (!bParam3)
	{
		if (func_765(iParam0))
		{
			iVar0 = (iVar0 + func_800(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_800(int iParam0, var uParam1)
{
	if (func_765(iParam0))
	{
		return (func_764(iParam0) + func_801(iParam0, uParam1));
	}
	return 0;
}

int func_801(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 2:
		case 12:
		case 1:
		case 11:
		case 10:
			return 2;
		
		case 8:
			return 4;
		
		default:
	}
	return 0;
}

int func_802(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			iVar0 += 16;
			break;
		
		case 11:
			iVar0 += 21;
			break;
		
		case 1:
			iVar0 += 4;
			break;
		
		case 14:
			iVar0 += 15;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 15;
			break;
		
		case 4:
			iVar0 += 9;
			break;
		
		case 10:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 7;
			break;
		
		case 8:
			iVar0 += 2;
			break;
		
		case 5:
			iVar0 += 10;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 7:
					iVar0 += 17;
					break;
				
				default:
					iVar0 += 16;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 10;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 26:
			iVar0 += 2;
			break;
	}
	if (!bParam3)
	{
		if (func_771(iParam0))
		{
			iVar0 = (iVar0 + func_803(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_803(int iParam0, int iParam1)
{
	if (func_771(iParam0))
	{
		return (func_770(iParam0) + func_804(iParam0, iParam1));
	}
	return 0;
}

int func_804(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
		case 14:
		case 2:
		case 10:
		case 5:
			return 2;
		
		case 1:
		case 0:
			return 4;
		
		case 4:
			return 1;
		
		case 12:
			switch (iParam1)
			{
				case 2:
					return 2;
				
				default:
			}
			break;
		
		case 21:
			return 2;
		
		case 17:
			return 4;
	}
	return 0;
}

int func_805(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 18;
					break;
				
				case 1:
					iVar0 += 18;
					break;
				
				case 2:
					iVar0 += 18;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 4;
					break;
				
				case 10:
					iVar0 += 4;
					break;
				
				case 11:
					iVar0 += 4;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 13:
					iVar0 += 20;
					break;
				
				case 14:
					iVar0 += 20;
					break;
				
				case 15:
					iVar0 += 20;
					break;
			}
			break;
		
		case 5:
			iVar0 += 12;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 24;
					break;
				
				case 20:
					iVar0 += 24;
					break;
				
				case 21:
					iVar0 += 24;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 12;
					break;
				
				case 23:
					iVar0 += 12;
					break;
				
				case 24:
					iVar0 += 12;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 16;
					break;
				
				case 26:
					iVar0 += 15;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 25;
					break;
				
				case 28:
					iVar0 += 25;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 15;
					break;
				
				case 30:
					iVar0 += 15;
					break;
				
				case 31:
					iVar0 += 15;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 12;
					break;
				
				case 33:
					iVar0 += 12;
					break;
				
				case 34:
					iVar0 += 12;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 22;
					break;
				
				case 36:
					iVar0 += 22;
					break;
				
				case 37:
					iVar0 += 22;
					break;
			}
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 20:
			iVar0 += 22;
			break;
	}
	if (!bParam3)
	{
		if (func_777(iParam0))
		{
			iVar0 = (iVar0 + func_806(iParam0));
		}
	}
	return iVar0;
}

int func_806(int iParam0)
{
	if (func_777(iParam0))
	{
		return (func_776(iParam0) + func_807(iParam0));
	}
	return 0;
}

int func_807(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 12:
		case 13:
		case 17:
		case 11:
			return 2;
		
		case 15:
		case 16:
		case 19:
			return 3;
		
		case 10:
		case 8:
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_808(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 6;
			break;
		
		case 2:
			iVar0 += 10;
			break;
		
		case 12:
			iVar0 += 11;
			break;
		
		case 13:
			iVar0 += 10;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 12;
					break;
				
				case 2:
					iVar0 += 12;
					break;
				
				case 3:
					iVar0 += 12;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 8;
					break;
				
				case 19:
					iVar0 += 8;
					break;
				
				case 20:
					iVar0 += 8;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 14;
					break;
				
				case 28:
					iVar0 += 14;
					break;
				
				case 29:
					iVar0 += 14;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 3;
					break;
				
				case 31:
					iVar0 += 3;
					break;
				
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 18;
					break;
				
				case 37:
					iVar0 += 18;
					break;
				
				case 38:
					iVar0 += 18;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 10;
					break;
				
				case 43:
					iVar0 += 10;
					break;
				
				case 44:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 17;
					break;
				
				case 46:
					iVar0 += 17;
					break;
				
				case 47:
					iVar0 += 17;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 11;
					break;
				
				case 49:
					iVar0 += 11;
					break;
				
				case 50:
					iVar0 += 11;
					break;
			}
			break;
	}
	iVar0 = (iVar0 + func_809(iParam0));
	return iVar0;
}

int func_809(int iParam0)
{
	if (func_781(iParam0))
	{
		if (func_810(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_810(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_811(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		case 4:
			return 12;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 2;
		
		case 8:
			return 12;
		
		case 9:
			return 12;
		
		case 10:
			return 9;
		
		case 11:
			return 8;
		
		case 12:
			return 7;
		
		case 13:
			return 5;
		
		case 14:
			return 12;
		
		case 15:
			return 13;
		
		case 16:
			return 5;
		
		case 17:
			return 15;
		
		case 19:
			return 4;
		
		case 18:
			return 11;
		
		default:
	}
	return 8;
}

int func_812(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_32 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

int func_813(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return 0;
		
		case 40:
			return 7;
		
		case 42:
			return 5;
		
		case 44:
			return 3;
		
		case 45:
			return 4;
		
		case 46:
			return 1;
		
		case 48:
			return 2;
		
		case 47:
			return 6;
		
		case 49:
			return 6;
		
		case 50:
			return 8;
		
		case 53:
			return 9;
		
		case 51:
			return func_386(uParam0->f_1084);
		
		case 52:
			return 12;
		
		case 54:
			return 13;
		
		case 55:
			return 13;
		
		case 56:
			return 13;
		
		case 57:
			return 13;
		
		case 58:
			return 13;
		
		case 59:
			return 13;
		
		case 60:
			return 14;
		
		case 61:
			return 15;
		
		case 62:
			return 16;
		
		default:
	}
	return -1;
}

void func_814(var uParam0)
{
	func_619(uParam0->f_711, "H4P_OVR_GAT_T", func_815(uParam0), func_626(), func_620());
	uParam0->f_707 = 1;
	iLocal_154 = 1;
}

char* func_815(var uParam0)
{
	if (func_816(uParam0->f_1084))
	{
		return "H4P_OVR_GAT_2";
	}
	return "H4P_OVR_GAT_M";
}

int func_816(int iParam0)
{
	if (((func_823(iParam0) && func_822(iParam0)) && func_821(iParam0)) && func_817(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_817(int iParam0)
{
	if (iParam0 != -1)
	{
		if (((((func_820(iParam0) && func_819(iParam0)) && func_818(iParam0)) && func_387(iParam0)) && func_408(iParam0)) && func_406(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_818(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_389(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_819(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_395(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_820(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_401(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_821(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!func_379(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_822(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_383(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_823(int iParam0)
{
	if (iParam0 != -1)
	{
		if ((((func_824(iParam0, 0) && func_824(iParam0, 1)) && func_824(iParam0, 2)) && func_824(iParam0, 3)) && func_824(iParam0, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_824(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (Global_1979596[iParam0 /*53*/].f_5.f_10.f_1 == Global_1979596[iParam0 /*53*/].f_5.f_10.f_5 && Global_1979596[iParam0 /*53*/].f_5.f_10.f_9 == Global_1979596[iParam0 /*53*/].f_5.f_10.f_13)
				{
					return 1;
				}
				break;
			
			case 1:
				if (Global_1979596[iParam0 /*53*/].f_5.f_10.f_2 == Global_1979596[iParam0 /*53*/].f_5.f_10.f_6 && Global_1979596[iParam0 /*53*/].f_5.f_10.f_10 == Global_1979596[iParam0 /*53*/].f_5.f_10.f_14)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_1979596[iParam0 /*53*/].f_5.f_10.f_3 == Global_1979596[iParam0 /*53*/].f_5.f_10.f_7 && Global_1979596[iParam0 /*53*/].f_5.f_10.f_11 == Global_1979596[iParam0 /*53*/].f_5.f_10.f_15)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_1979596[iParam0 /*53*/].f_5.f_10.f_4 == Global_1979596[iParam0 /*53*/].f_5.f_10.f_8 && Global_1979596[iParam0 /*53*/].f_5.f_10.f_12 == Global_1979596[iParam0 /*53*/].f_5.f_10.f_16)
				{
					return 1;
				}
				break;
			
			case 4:
				if (Global_1979596[iParam0 /*53*/].f_5.f_10.f_17 == Global_1979596[iParam0 /*53*/].f_5.f_10.f_18)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_825(int iParam0)
{
	if (unk_0xA6F779AA284EB20E(uLocal_132))
	{
		*iParam0 = unk_0x5DEF122A58D4F685(uLocal_132);
		return 1;
	}
	*iParam0 = -1;
	return 0;
}

void func_826(var uParam0)
{
	int iVar0;
	
	if (!iLocal_133)
	{
		return;
	}
	iVar0 = -1;
	if (func_829(&iVar0))
	{
		uParam0->f_806.f_8 = uParam0->f_806;
		uParam0->f_806 = iVar0;
		Global_1979596[unk_0x383461852896D73D() /*53*/].f_4 = iVar0;
		uParam0->f_707 = 1;
		if (func_424(uParam0->f_806) && uParam0->f_1098)
		{
			func_828(uParam0);
			uParam0->f_1098 = 0;
		}
		func_827(uParam0, uParam0->f_806);
		iLocal_133 = 0;
		iLocal_137 = 0;
	}
}

void func_827(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 36:
			if (!unk_0x834C960822A4683F())
			{
				func_613(uParam0, 19);
			}
			break;
		
		case 63:
			if (!unk_0x834C960822A4683F())
			{
				func_613(uParam0, 37);
			}
			break;
		
		case 1000:
			if (unk_0x834C960822A4683F())
			{
				func_613(uParam0, 52);
			}
			else
			{
				func_613(uParam0, 50);
			}
			break;
		
		case 105:
		case 106:
		case 107:
		case 108:
			func_613(uParam0, 51);
			break;
	}
	if (unk_0x834C960822A4683F())
	{
		switch (iParam1)
		{
			case 71:
			case 72:
			case 73:
			case 74:
			case 75:
			case 76:
				func_613(uParam0, 40);
				break;
			
			case 77:
			case 78:
			case 79:
			case 80:
			case 81:
			case 82:
			case 83:
			case 84:
				func_613(uParam0, 38);
				break;
			
			case 85:
			case 86:
				func_613(uParam0, 42);
				break;
			
			case 87:
			case 88:
			case 89:
			case 90:
				func_613(uParam0, 39);
				break;
			
			case 91:
			case 92:
				func_613(uParam0, 41);
				break;
			}
	}
}

void func_828(var uParam0)
{
	func_619(uParam0->f_711, "H4P_OVR_CRE_T", "H4P_OVR_CRE_M", func_621(), "");
	uParam0->f_707 = 1;
	uParam0->f_806 = 1002;
	iLocal_154 = -4;
}

int func_829(int iParam0)
{
	if (unk_0xA6F779AA284EB20E(uLocal_131))
	{
		*iParam0 = unk_0x5DEF122A58D4F685(uLocal_131);
		return 1;
	}
	*iParam0 = -1;
	return 0;
}

void func_830(var uParam0)
{
	if (iLocal_146 && !func_852(uParam0))
	{
		iLocal_146 = 0;
		return;
	}
	if (unk_0x834C960822A4683F())
	{
		func_850(uParam0);
		func_845(uParam0);
		func_842(uParam0);
	}
	func_841(uParam0);
	func_837(uParam0);
	func_835(uParam0);
	func_832(uParam0);
	func_831(uParam0);
	iLocal_146 = 1;
}

void func_831(var uParam0)
{
	if (func_852(uParam0))
	{
		unk_0x0EE2019295C31BBA(3);
		unk_0x0EE2019295C31BBA(4);
		unk_0x0EE2019295C31BBA(13);
	}
}

void func_832(var uParam0)
{
	bool bVar0;
	bool bVar1;
	
	if (uParam0->f_1084 == unk_0x259BE71D8A81D4FA())
	{
		return;
	}
	if (iLocal_152 != Global_1979596[uParam0->f_1084 /*53*/].f_5.f_45)
	{
		bVar0 = false;
		while (bVar0 < 6)
		{
			if (BitTest(Global_1979596[uParam0->f_1084 /*53*/].f_5.f_45, bVar0) && !BitTest(iLocal_152, bVar0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&iLocal_152, bVar0);
				func_570(uParam0->f_711, func_834(bVar0), 1);
			}
			bVar0++;
		}
	}
	if (bLocal_141 != func_415(uParam0->f_1084))
	{
		bLocal_141 = func_415(uParam0->f_1084);
		func_604(uParam0->f_711, 59, 1);
	}
	if (iLocal_142 != Global_1979596[uParam0->f_1084 /*53*/].f_5.f_44)
	{
		iLocal_142 = Global_1979596[uParam0->f_1084 /*53*/].f_5.f_44;
		func_570(uParam0->f_711, 98, iLocal_142);
	}
	if (unk_0x834C960822A4683F())
	{
		return;
	}
	if (uParam0->f_806 != Global_1979596[uParam0->f_1084 /*53*/].f_4)
	{
		uParam0->f_806 = Global_1979596[uParam0->f_1084 /*53*/].f_4;
		bVar1 = uParam0->f_806;
		if (bVar1 != 1002 && bVar1 != 1001)
		{
			func_833(uParam0->f_711, bVar1);
		}
	}
	if (iLocal_137 != Global_1979596[uParam0->f_1084 /*53*/].f_51)
	{
		iLocal_137 = Global_1979596[uParam0->f_1084 /*53*/].f_51;
	}
	if (bLocal_139 != Global_1979596[uParam0->f_1084 /*53*/].f_52)
	{
		bLocal_139 = Global_1979596[uParam0->f_1084 /*53*/].f_52;
	}
}

void func_833(var uParam0, bool bParam1)
{
	unk_0x88F483FBD433696A(uParam0, "SET_CURRENT_SELECTION");
	unk_0x330108B080A2132F(bParam1);
	unk_0xE6B753D52F4CA222();
}

int func_834(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 99;
		
		case 1:
			return 101;
		
		case 2:
			return 102;
		
		case 3:
			return 103;
		
		case 4:
			return 100;
		
		case 5:
			return 104;
		
		default:
	}
	return 0;
}

void func_835(var uParam0)
{
	if (bLocal_139)
	{
		if (!iLocal_140)
		{
			func_836(uParam0->f_711, 1);
			iLocal_140 = 1;
		}
	}
	else if (iLocal_140)
	{
		func_836(uParam0->f_711, 0);
		iLocal_140 = 0;
	}
	if (uParam0->f_1084 == unk_0x259BE71D8A81D4FA() && Global_1979596[unk_0x383461852896D73D() /*53*/].f_52 != iLocal_140)
	{
		Global_1979596[unk_0x383461852896D73D() /*53*/].f_52 = iLocal_140;
	}
}

void func_836(var uParam0, bool bParam1)
{
	unk_0x88F483FBD433696A(uParam0, "SET_MAP_VIEW");
	unk_0x330108B080A2132F(bParam1);
	unk_0xE6B753D52F4CA222();
}

void func_837(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0->f_806;
	if (iLocal_137)
	{
		if (!iLocal_138)
		{
			if (func_363(uParam0, iVar0))
			{
				func_840(uParam0->f_711, func_364(uParam0, iVar0));
				func_839(uParam0, iVar0);
				iLocal_138 = 1;
			}
			else
			{
				iLocal_137 = 0;
			}
		}
	}
	else if (iLocal_138)
	{
		func_838(uParam0->f_711);
		iLocal_138 = 0;
	}
	if (uParam0->f_1084 == unk_0x259BE71D8A81D4FA() && Global_1979596[unk_0x383461852896D73D() /*53*/].f_51 != iLocal_138)
	{
		Global_1979596[unk_0x383461852896D73D() /*53*/].f_51 = iLocal_138;
	}
}

void func_838(var uParam0)
{
	unk_0xB750FE3C9F094356(uParam0, "HIDE_TIP_TEXT");
}

void func_839(var uParam0, int iParam1)
{
	if (func_370(uParam0, iParam1))
	{
		return;
	}
	switch (iParam1)
	{
		case 1:
			if (func_17(uParam0->f_1084, 0))
			{
				func_613(uParam0, 5);
			}
			break;
		
		case 2:
			func_613(uParam0, 8);
			break;
		
		case 3:
			func_613(uParam0, 6);
			break;
		
		case 4:
			func_613(uParam0, 7);
			break;
		
		case 5:
			func_613(uParam0, 10);
			break;
		
		case 6:
			func_613(uParam0, 9);
			break;
		
		case 30:
			func_613(uParam0, 18);
			break;
		
		case 31:
			func_613(uParam0, 17);
			break;
		
		case 32:
			func_613(uParam0, 11);
			break;
		
		case 33:
			func_613(uParam0, 12);
			break;
		
		case 34:
			if (func_387(uParam0->f_1084))
			{
				func_613(uParam0, 14);
			}
			else
			{
				func_613(uParam0, 13);
			}
			break;
		
		case 35:
			if (func_388(uParam0->f_1084))
			{
				func_613(uParam0, 16);
			}
			else
			{
				func_613(uParam0, 15);
			}
			break;
		
		case 40:
			func_613(uParam0, 20);
			break;
		
		case 44:
			func_613(uParam0, 22);
			break;
		
		case 45:
			func_613(uParam0, 23);
			break;
		
		case 42:
			func_613(uParam0, 24);
			break;
		
		case 46:
		case 47:
			func_613(uParam0, 25);
			break;
		
		case 48:
		case 49:
			func_613(uParam0, 21);
			break;
		
		case 50:
			func_613(uParam0, 26);
			break;
		
		case 53:
			func_613(uParam0, 27);
			break;
		
		case 51:
			if (func_386(uParam0->f_1084) == 11)
			{
				if (!func_362(uParam0->f_1084))
				{
					func_613(uParam0, 28);
				}
				else
				{
					func_613(uParam0, 29);
				}
			}
			else
			{
				func_613(uParam0, 30);
			}
			break;
		
		case 52:
			func_613(uParam0, 31);
			break;
		
		case 38:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			func_613(uParam0, 32);
			break;
		
		case 59:
			func_613(uParam0, 33);
			break;
		
		case 60:
			func_613(uParam0, 34);
			break;
		
		case 61:
			func_613(uParam0, 35);
			break;
		
		case 62:
			func_613(uParam0, 36);
			break;
		
		case 64:
			if (unk_0x834C960822A4683F())
			{
				func_613(uParam0, 38);
			}
			break;
		
		case 66:
			if (unk_0x834C960822A4683F())
			{
				func_613(uParam0, 39);
			}
			break;
		
		case 63:
			if (unk_0x834C960822A4683F())
			{
				func_613(uParam0, 40);
			}
			break;
		
		case 67:
			if (unk_0x834C960822A4683F())
			{
				func_613(uParam0, 41);
			}
			break;
		
		case 65:
			if (unk_0x834C960822A4683F())
			{
				func_613(uParam0, 42);
			}
			break;
		
		case 69:
			func_613(uParam0, 43);
			break;
		
		case 99:
			func_613(uParam0, 44);
			break;
		
		case 100:
			func_613(uParam0, 45);
			break;
		
		case 101:
			func_613(uParam0, 46);
			break;
		
		case 102:
			func_613(uParam0, 47);
			break;
		
		case 103:
			func_613(uParam0, 48);
			break;
		
		case 104:
			func_613(uParam0, 49);
			break;
	}
}

void func_840(var uParam0, var uParam1)
{
	unk_0x4A536D06AFED1D5B(uParam0, "SHOW_TIP_TEXT", uParam1, 0, 0, 0, 0);
}

void func_841(var uParam0)
{
	if (func_555(uParam0))
	{
		if (!iLocal_148)
		{
			func_615(uParam0->f_711, 1, func_616(uParam0));
			iLocal_148 = 1;
		}
	}
	else if (iLocal_148)
	{
		func_615(uParam0->f_711, 0, func_616(uParam0));
		iLocal_148 = 0;
	}
}

void func_842(var uParam0)
{
	if (func_844(uParam0))
	{
		if (!iLocal_147)
		{
			func_843(uParam0->f_711, 1);
			iLocal_147 = 1;
		}
	}
	else if (iLocal_147)
	{
		func_843(uParam0->f_711, 0);
		iLocal_147 = 0;
	}
}

void func_843(var uParam0, int iParam1)
{
	unk_0x88F483FBD433696A(uParam0, "SET_CREW_CUTS_VISIBLE");
	unk_0x557F1E2300EF1A3E(iParam1);
	unk_0xE6B753D52F4CA222();
}

bool func_844(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0->f_806;
	if (func_556(iVar0) != 2)
	{
		return 0;
	}
	return unk_0x834C960822A4683F();
}

void func_845(var uParam0)
{
	int iVar0;
	
	if (!iLocal_149)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_823.f_49)
	{
		if (uParam0->f_823.f_51[iVar0] != -1)
		{
			func_846(uParam0->f_711, func_849(iVar0), func_848(uParam0, iVar0), uParam0->f_823.f_56[iVar0], uParam0->f_823.f_239[iVar0], func_847(uParam0->f_823.f_67[iVar0]));
		}
		iVar0++;
	}
	iLocal_149 = 0;
}

void func_846(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	unk_0x88F483FBD433696A(uParam0, "SET_CREW_MEMBER");
	unk_0x330108B080A2132F(bParam1);
	func_582(unk_0xBD6CA019F46AB947(iParam2));
	unk_0x330108B080A2132F(bParam3);
	unk_0x330108B080A2132F(bParam4);
	unk_0x557F1E2300EF1A3E(iParam5);
	unk_0xE6B753D52F4CA222();
}

bool func_847(int iParam0)
{
	return iParam0 == 1;
}

int func_848(var uParam0, int iParam1)
{
	if (iParam1 != -1 && uParam0->f_823.f_51[iParam1] != -1)
	{
		return unk_0xB23E0F9B63D009A8(uParam0->f_823.f_51[iParam1]);
	}
	return func_15();
}

int func_849(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 105;
		
		case 1:
			return 106;
		
		case 2:
			return 107;
		
		case 3:
			return 108;
		
		default:
	}
	return 0;
}

void func_850(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_823.f_49)
	{
		if (uParam0->f_823.f_51[iVar0] != -1)
		{
			iVar1 = func_851(func_848(uParam0, iVar0));
			if (uParam0->f_823.f_239[iVar0] != iVar1)
			{
				uParam0->f_823.f_239[iVar0] = iVar1;
				iLocal_149 = 1;
			}
		}
		iVar0++;
	}
}

int func_851(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_15() && unk_0x762604C40829DB72(iParam0))
	{
		Var0 = { func_206(iParam0) };
		if (func_205(Var0))
		{
			if (unk_0xC9D8BDF3564325CA(&Var0))
			{
				if (unk_0x6E171E077926FBF7(&Var0))
				{
					return 2;
				}
				else if (unk_0x73038C255039CB0A(&Var0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x73038C255039CB0A(&Var0))
			{
				return 1;
			}
			else
			{
				return 3;
			}
		}
	}
	return 0;
}

int func_852(var uParam0)
{
	switch (iLocal_154)
	{
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 59:
			return 1;
			break;
	}
	if (func_354(&uLocal_157))
	{
		if (func_40(&uLocal_157, 4000, 0))
		{
			func_38(&uLocal_157);
		}
		return 1;
	}
	return 0;
}

void func_853(var uParam0)
{
	int iVar0;
	
	uParam0->f_823.f_49 = func_854(uParam0);
	switch (uParam0->f_823.f_49)
	{
		case 1:
			uParam0->f_823.f_56[0] = 100;
			uParam0->f_823.f_56[1] = 0;
			uParam0->f_823.f_56[2] = 0;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		
		case 2:
			uParam0->f_823.f_56[0] = 85;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 0;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		
		case 3:
			uParam0->f_823.f_56[0] = 70;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 15;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		
		case 4:
			uParam0->f_823.f_56[0] = 55;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 15;
			uParam0->f_823.f_56[3] = 15;
			uParam0->f_823.f_56[4] = 0;
			break;
	}
	if (uParam0->f_1084 == unk_0x259BE71D8A81D4FA())
	{
		Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[4] = uParam0->f_823.f_56[4];
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_1084 == unk_0x259BE71D8A81D4FA())
		{
			Global_1978795[unk_0x383461852896D73D() /*25*/].f_12[iVar0] = uParam0->f_823.f_56[iVar0];
		}
		if (uParam0->f_823.f_51[iVar0] == unk_0x383461852896D73D())
		{
			Global_2684801.f_6589 = uParam0->f_823.f_56[iVar0];
			Global_1948392.f_29 = Global_2684801.f_6589;
		}
		iVar0++;
	}
	iLocal_149 = 1;
}

int func_854(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x834C960822A4683F())
	{
		uParam0->f_823.f_51[0] = uParam0->f_1084;
		uParam0->f_823.f_51[1] = -1;
		uParam0->f_823.f_51[2] = -1;
		uParam0->f_823.f_51[3] = -1;
		return 1;
	}
	iVar0 = func_15();
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_823.f_51[iVar1] = -1;
		uParam0->f_823.f_67[iVar1] = 0;
		uParam0->f_823.f_239[iVar1] = 0;
		Global_1978795[unk_0x383461852896D73D() /*25*/].f_7[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = unk_0xB23E0F9B63D009A8(iVar1);
		if (func_75(iVar0, 1, 1))
		{
			if (iVar0 != func_15())
			{
				if (!func_855(iVar0))
				{
					if (iVar2 > 3)
					{
					}
					else
					{
						uParam0->f_823.f_51[iVar2] = iVar0;
						iVar2++;
					}
				}
			}
		}
		bVar1++;
	}
	return iVar2;
}

int func_855(int iParam0)
{
	if (func_76(iParam0, 0) || func_856(iParam0))
	{
		return 1;
	}
	return 0;
}

var func_856(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_96.f_32, 5);
}

void func_857(var uParam0)
{
	switch (uParam0->f_726.f_1)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (unk_0x834C960822A4683F())
			{
				unk_0x80F87A4A3B930613();
			}
			break;
		
		case 5:
			break;
	}
}

void func_858(var uParam0)
{
	switch (uParam0->f_726)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			if (!iLocal_135)
			{
				func_962(uParam0);
				func_941(uParam0);
				func_940(uParam0);
				func_938(uParam0);
				func_896(uParam0);
				func_863(uParam0);
				iLocal_135 = 1;
			}
			break;
		
		case 4:
			iLocal_133 = 0;
			iLocal_134 = 0;
			func_862(uParam0);
			if (unk_0x834C960822A4683F())
			{
				unk_0x80F87A4A3B930613();
				unk_0x5C483F4653DC993C("h4_sub_commandroom_BloomRedux");
			}
			func_859();
			break;
		
		case 5:
			break;
	}
}

void func_859()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672505.f_2514[iVar0 /*80*/].f_2 != 0)
		{
			Global_2672505.f_2514[iVar0 /*80*/].f_2 = 5;
			func_860(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_860(var uParam0, int iParam1)
{
	func_861(uParam0, iParam1);
}

void func_861(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_862(var uParam0)
{
	int iVar0;
	
	if (unk_0x4C705AAF75363287())
	{
		unk_0x428C32CC68809A35(1);
	}
	if ((uParam0->f_1084 == iLocal_160 && !func_362(iLocal_160)) && !func_17(iLocal_160, 0))
	{
		iVar0 = func_7(9511, -1, 0);
		if (!BitTest(iVar0, 13))
		{
			func_9("HIF_INTROVIBE", -1);
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 13);
			func_4(9511, iVar0, -1, 1, 0);
		}
	}
}

void func_863(var uParam0)
{
	bool bVar0;
	
	if (func_17(uParam0->f_1084, 0))
	{
		func_881(uParam0->f_711, 1, func_892(uParam0), func_884(uParam0), func_883(uParam0), func_882());
		func_880(uParam0->f_711, 99, func_612(99));
		func_880(uParam0->f_711, 100, func_612(100));
		func_880(uParam0->f_711, 101, func_612(101));
		func_880(uParam0->f_711, 102, func_612(102));
		func_880(uParam0->f_711, 103, func_612(103));
		func_880(uParam0->f_711, 104, func_612(104));
		if (unk_0x834C960822A4683F())
		{
			func_879(uParam0->f_711, 67, 63, 64, 66, 68, 69, 70, 65);
			func_615(uParam0->f_711, 1, func_616(uParam0));
			iLocal_148 = 1;
		}
		else
		{
			func_879(uParam0->f_711, 67, 63, 64, 66, 68, 69, -1, 65);
		}
		func_877(uParam0->f_711, func_878(uParam0));
	}
	else
	{
		if (func_876(uParam0->f_1084))
		{
			func_613(uParam0, 2);
		}
		else if (func_362(uParam0->f_1084))
		{
			func_613(uParam0, 1);
		}
		if (func_875(uParam0->f_1084))
		{
			func_613(uParam0, 4);
		}
	}
	func_874(uParam0->f_711, func_875(uParam0->f_1084));
	func_871(uParam0->f_711, func_873(0), func_872(uParam0, 0), func_873(1), func_872(uParam0, 1), func_873(2), func_872(uParam0, 2));
	func_869(uParam0->f_711, func_870());
	func_836(uParam0->f_711, 0);
	bVar0 = func_868(uParam0);
	func_867(uParam0->f_711, bVar0);
	if (func_870() == 0)
	{
		uParam0->f_806 = 1;
	}
	else
	{
		uParam0->f_806 = 63;
	}
	if (uParam0->f_1084 == iLocal_160)
	{
		Global_1979596[unk_0x383461852896D73D() /*53*/].f_4 = uParam0->f_806;
	}
	else if (unk_0x834C960822A4683F())
	{
		uParam0->f_806 = 1000;
		func_833(uParam0->f_711, 1000);
	}
	else if (Global_1978795[uParam0->f_1084 /*25*/].f_20)
	{
		uParam0->f_806 = Global_1979596[unk_0x383461852896D73D() /*53*/].f_4;
		func_833(uParam0->f_711, uParam0->f_806);
	}
	if (bVar0 == 0)
	{
		func_34(uParam0, 18);
	}
	func_866(uParam0);
	func_864(uParam0);
}

void func_864(var uParam0)
{
	int iVar0;
	
	if (unk_0x834C960822A4683F() || uParam0->f_1084 != iLocal_160)
	{
		return;
	}
	iVar0 = func_7(9511, -1, 0);
	if (func_17(uParam0->f_1084, 0) && !BitTest(iVar0, 16))
	{
		func_619(uParam0->f_711, "H4P_OVR_INT_T", "H4P_OVR_INT_M", func_626(), "");
		uParam0->f_707 = 1;
		uParam0->f_806 = 1002;
		iLocal_154 = -2;
		return;
	}
	if (func_865(uParam0->f_1084) && !BitTest(iVar0, 14))
	{
		func_619(uParam0->f_711, "H4P_OVR_MAN_T", "H4P_OVR_MAN_M", func_626(), "");
		uParam0->f_707 = 1;
		uParam0->f_806 = 1002;
		iLocal_154 = -3;
	}
}

int func_865(int iParam0)
{
	if (!func_589(iParam0, 1))
	{
		return 0;
	}
	if (!func_17(iParam0, 8) && !func_17(iParam0, 9))
	{
		return 0;
	}
	if (!func_18(iParam0, 10))
	{
		return 0;
	}
	if (!func_17(iParam0, 13))
	{
		return 0;
	}
	if (!func_17(iParam0, 12))
	{
		return 0;
	}
	return 1;
}

void func_866(var uParam0)
{
	if (!uParam0->f_1080)
	{
		uParam0->f_1080.f_1 = unk_0xCA369FBC0DE29517();
		if (uParam0->f_1080.f_1 != -1)
		{
			unk_0xF37CDE164C892195(uParam0->f_1080.f_1, func_37(19), uParam0->f_732.f_6, func_36(19), 0, 0, 0);
			uParam0->f_1080 = 1;
		}
	}
}

void func_867(var uParam0, bool bParam1)
{
	unk_0x88F483FBD433696A(uParam0, "SHOW_SCREEN");
	unk_0x330108B080A2132F(bParam1);
	unk_0xE6B753D52F4CA222();
}

int func_868(var uParam0)
{
	if (((unk_0x834C960822A4683F() || uParam0->f_1096) || (uParam0->f_1084 != iLocal_160 && Global_1978795[uParam0->f_1084 /*25*/].f_20)) || uParam0->f_1097)
	{
		return 1;
	}
	return 0;
}

void func_869(var uParam0, bool bParam1)
{
	unk_0x88F483FBD433696A(uParam0, "SET_INITIAL_TAB_VIEW");
	unk_0x330108B080A2132F(bParam1);
	unk_0xE6B753D52F4CA222();
}

int func_870()
{
	if (unk_0x834C960822A4683F())
	{
		return 2;
	}
	return 0;
}

void func_871(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, var uParam5, bool bParam6)
{
	unk_0x88F483FBD433696A(uParam0, "SET_TABS");
	func_432(uParam1);
	unk_0x557F1E2300EF1A3E(bParam2);
	func_432(uParam3);
	unk_0x557F1E2300EF1A3E(bParam4);
	func_432(uParam5);
	unk_0x557F1E2300EF1A3E(bParam6);
	unk_0xE6B753D52F4CA222();
}

int func_872(var uParam0, int iParam1)
{
	if (unk_0x834C960822A4683F())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (!func_17(uParam0->f_1084, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (!func_865(uParam0->f_1084))
			{
				return 1;
			}
			break;
	}
	return 0;
}

char* func_873(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "H4P_INTEL_TAB";
		
		case 1:
			return "H4P_PREP_TAB";
		
		case 2:
			return "H4P_FINALE_TAB";
		
		default:
	}
	return "";
}

void func_874(var uParam0, bool bParam1)
{
	unk_0x88F483FBD433696A(uParam0, "SET_IS_HARD_MODE");
	unk_0x557F1E2300EF1A3E(bParam1);
	unk_0xE6B753D52F4CA222();
}

int func_875(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_1, 12);
	}
	return 0;
}

int func_876(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_1, 3);
	}
	return 0;
}

void func_877(var uParam0, var uParam1)
{
	unk_0x88F483FBD433696A(uParam0, "SET_FINALE_LIST_TITLE");
	func_432(uParam1);
	unk_0xE6B753D52F4CA222();
}

char* func_878(var uParam0)
{
	if (!unk_0x834C960822A4683F() || uParam0->f_1084 != unk_0x259BE71D8A81D4FA())
	{
		return "H4P_LIST_PREV";
	}
	return "H4P_LIST_MAKE";
}

void func_879(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	unk_0x88F483FBD433696A(uParam0, "SET_FINALE_MENU_IDS");
	unk_0x330108B080A2132F(bParam1);
	unk_0x330108B080A2132F(bParam2);
	unk_0x330108B080A2132F(bParam3);
	unk_0x330108B080A2132F(bParam4);
	unk_0x330108B080A2132F(bParam5);
	unk_0x330108B080A2132F(bParam6);
	unk_0x330108B080A2132F(bParam7);
	unk_0x330108B080A2132F(bParam8);
	unk_0xE6B753D52F4CA222();
}

void func_880(var uParam0, bool bParam1, bool bParam2)
{
	unk_0x88F483FBD433696A(uParam0, "SET_FINALE_COST");
	unk_0x330108B080A2132F(bParam1);
	unk_0x330108B080A2132F(bParam2);
	unk_0xE6B753D52F4CA222();
}

void func_881(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4, var uParam5)
{
	unk_0x88F483FBD433696A(uParam0, "SET_PAYOUTS");
	unk_0x557F1E2300EF1A3E(iParam1);
	unk_0x330108B080A2132F(bParam2);
	unk_0x330108B080A2132F(bParam3);
	func_432(uParam4);
	func_432(uParam5);
	unk_0xE6B753D52F4CA222();
}

char* func_882()
{
	return "H4_LOOT_ADD";
}

char* func_883(var uParam0)
{
	switch (func_519(uParam0->f_1084))
	{
		case 0:
			return "H4_LOOT_TEQ";
		
		case 1:
			return "H4_LOOT_NKLC";
		
		case 2:
			return "H4_LOOT_BONDS";
		
		case 3:
			return "H4_LOOT_DIAM";
		
		case 4:
			return "H4_LOOT_FILES";
		
		case 5:
			return "H4_LOOT_STAT";
		
		default:
	}
	return "";
}

int func_884(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = (iVar0 + (func_886(uParam0->f_1084, iVar1) * func_885(uParam0->f_1084, iVar1, 0, 0)));
		iVar1++;
	}
	return iVar0;
}

int func_885(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_5, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_13, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 1:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_6, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_14, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 2:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_7, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_15, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 3:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_8, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_16, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 4:
				bVar1 = false;
				while (bVar1 < 7)
				{
					if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_18, bVar1))
					{
						iVar0++;
					}
					bVar1++;
				}
				break;
			}
	}
	return iVar0;
}

int func_886(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_891(iParam0);
		
		case 1:
			return func_890(iParam0);
		
		case 2:
			return func_889(iParam0);
		
		case 3:
			return func_888(iParam0);
		
		case 4:
			return func_887(iParam0);
		
		default:
	}
	return 0;
}

int func_887(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1979596[iParam0 /*53*/].f_5.f_10.f_23;
	}
	return 0;
}

int func_888(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1979596[iParam0 /*53*/].f_5.f_10.f_22;
	}
	return 0;
}

int func_889(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1979596[iParam0 /*53*/].f_5.f_10.f_21;
	}
	return 0;
}

int func_890(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1979596[iParam0 /*53*/].f_5.f_10.f_20;
	}
	return 0;
}

int func_891(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1979596[iParam0 /*53*/].f_5.f_10.f_19;
	}
	return 0;
}

int func_892(var uParam0)
{
	int iVar0;
	float fVar1;
	
	iVar0 = func_895(func_519(uParam0->f_1084));
	fVar1 = func_893(func_894(func_875(uParam0->f_1084), 2, 1));
	iVar0 = round((IntToFloat(iVar0) * fVar1));
	return iVar0;
}

float func_893(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_29988;
		
		case 2:
			return Global_262145.f_29989;
		
		default:
	}
	return 1f;
}

int func_894(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_895(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_29982;
		
		case 1:
			return Global_262145.f_29983;
		
		case 2:
			return Global_262145.f_29984;
		
		case 3:
			return Global_262145.f_29985;
		
		case 4:
			return Global_262145.f_29986;
		
		case 5:
			return Global_262145.f_29987;
		
		default:
	}
	return 0;
}

void func_896(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_17(uParam0->f_1084, 0) && !func_362(uParam0->f_1084))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < 24)
	{
		if (func_937(uParam0->f_1084, bVar0) && func_936(uParam0->f_1084, bVar0))
		{
			iVar3 = func_935(uParam0->f_1084, bVar0);
			func_931(uParam0->f_711, func_934(iVar3), -1, func_933(iVar3), 0, func_932(bVar0));
		}
		bVar0++;
	}
	bVar1 = false;
	while (bVar1 < 8)
	{
		if (func_930(uParam0->f_1084, bVar1) && func_929(uParam0->f_1084, bVar1))
		{
			iVar3 = func_928(uParam0->f_1084, bVar1);
			func_931(uParam0->f_711, func_934(iVar3), -1, func_933(iVar3), 1, func_927(bVar1));
		}
		bVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 7)
	{
		if (func_926(uParam0->f_1084, iVar2) && func_925(uParam0->f_1084, iVar2))
		{
			func_931(uParam0->f_711, 11, -1, 7, 1, func_924(iVar2));
		}
		iVar2++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (func_395(uParam0->f_1084, iVar4))
		{
			func_931(uParam0->f_711, 33, -1, 2, 0, func_918(func_919(uParam0->f_1084, iVar4)));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (func_389(uParam0->f_1084, iVar4))
		{
			func_931(uParam0->f_711, 34, -1, 2, 0, func_912(func_913(uParam0->f_1084, iVar4)));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (func_401(uParam0->f_1084, iVar4))
		{
			func_931(uParam0->f_711, 32, -1, 2, 0, func_906(func_907(uParam0->f_1084, iVar4)));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 8)
	{
		if (func_383(uParam0->f_1084, iVar4))
		{
			func_931(uParam0->f_711, func_905(iVar4, 0), func_905(iVar4, 1), func_904(iVar4), 0, func_903(iVar4));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (func_381(uParam0->f_1084, iVar4))
		{
			func_931(uParam0->f_711, func_902(iVar4, 0), func_902(iVar4, 1), 1, 0, func_901(iVar4));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 6)
	{
		if (func_379(uParam0->f_1084, iVar4))
		{
			func_931(uParam0->f_711, func_900(iVar4, 0), func_900(iVar4, 1), 0, 1, func_899(iVar4));
		}
		iVar4++;
	}
	if (func_406(uParam0->f_1084))
	{
		func_931(uParam0->f_711, 31, -1, 2, 0, 4367.82f, -4579f, 23.06f);
	}
	if (func_408(uParam0->f_1084))
	{
		func_931(uParam0->f_711, 30, -1, 2, 0, 4480.7f, -4588.52f, 4.56f);
	}
	func_931(uParam0->f_711, 5, -1, 8, 0, 5020.635f, -5746.534f, 31.93707f);
	if (func_387(uParam0->f_1084))
	{
		func_931(uParam0->f_711, 35, -1, 2, 0, func_897(func_898(uParam0->f_1084)));
	}
}

Vector3 func_897(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4527.591f, -4526.633f, 3.211f;
		
		case 2:
			return 5152.974f, -4619.487f, 1.752f;
		
		case 3:
			return 5155.974f, -5132.699f, 1.312f;
		
		case 4:
			return 4900.456f, -5210.057f, 1.512f;
		
		case 5:
			return 4970.79f, -5695.73f, 18.888f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_898(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1979596[iParam0 /*53*/].f_5.f_34;
	}
	return 0;
}

Vector3 func_899(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4982.59f, -5711.01f, 18.86f;
		
		case 1:
			return 5031.86f, -5685.84f, 23.87f;
		
		case 2:
			return 5085.03f, -5732.67f, 14.8f;
		
		case 3:
			return 4992.24f, -5807.17f, 24.87f;
		
		case 4:
			return 4960.13f, -5785.66f, 19.96f;
		
		case 5:
			return 5045.17f, -5817.24f, -12.7f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_900(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 85;
			
			case 5:
				return 86;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 24;
			
			case 1:
				return 25;
			
			case 2:
				return 26;
			
			case 3:
				return 27;
			
			case 4:
				return 28;
			
			case 5:
				return 29;
			}
		
		default:
	}
	return -1;
}

Vector3 func_901(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4052.4f, -4655.79f, 3.18f;
		
		case 1:
			return 4799.21f, -5157.77f, -4.34f;
		
		case 2:
			return 5176.88f, -4752.2f, -4.11f;
		
		case 3:
			return 4533.25f, -4278.35f, 0f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_902(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 87;
			
			case 1:
				return 88;
			
			case 2:
				return 89;
			
			case 3:
				return 90;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 20;
			
			case 1:
				return 21;
			
			case 2:
				return 22;
			
			case 3:
				return 23;
			}
		
		default:
	}
	return -1;
}

Vector3 func_903(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4052.4f, -4655.79f, 3.18f;
		
		case 3:
			return 4799.21f, -5157.77f, -4.34f;
		
		case 4:
			return 5176.88f, -4752.2f, -4.11f;
		
		case 2:
			return 4891.13f, -4925.02f, 9.31f;
		
		case 5:
			return 4820.73f, -4302.71f, 4.24f;
		
		case 6:
			return 5478.63f, -5847.74f, 19.54f;
		
		case 7:
			return 5045.17f, -5817.24f, -12.7f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_904(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 9;
		
		default:
	}
	return 0;
}

int func_905(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 77;
			
			case 1:
				return 78;
			
			case 2:
				return 79;
			
			case 3:
				return 80;
			
			case 4:
				return 81;
			
			case 5:
				return 82;
			
			case 6:
				return 83;
			
			case 7:
				return 84;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 12;
			
			case 1:
				return 13;
			
			case 2:
				return 14;
			
			case 3:
				return 15;
			
			case 4:
				return 16;
			
			case 5:
				return 17;
			
			case 6:
				return 18;
			
			case 7:
				return 19;
			}
		
		default:
	}
	return -1;
}

Vector3 func_906(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4534.709f, -4543.447f, 4.53f;
		
		case 1:
			return 4523.664f, -4511.79f, 4.184f;
		
		case 2:
			return 4076.849f, -4667.305f, 4.163f;
		
		case 3:
			return 4505.6f, -4653.089f, 10.456f;
		
		case 4:
			return 4805.025f, -4315.458f, 6.514f;
		
		case 5:
			return 5180.197f, -4670.979f, 6.231f;
		
		case 6:
			return 5098.02f, -4621.306f, 2.594f;
		
		case 7:
			return 5070.327f, -4638.299f, 2.902f;
		
		case 8:
			return 4955.743f, -5181.93f, 4.512f;
		
		case 9:
			return 5216.539f, -5126.448f, 5.984f;
		
		case 10:
			return 4879.029f, -5112.622f, 1.995f;
		
		case 11:
			return 4901.985f, -5348.011f, 9.409f;
		
		case 12:
			return 5362.94f, -5437.508f, 48.491f;
		
		case 13:
			return 5466.287f, -5232.051f, 27.065f;
		
		case 14:
			return 4754.99f, -5541.311f, 18.056f;
		
		case 15:
			return 5326.267f, -5266.071f, 32.237f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_907(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return func_911(iParam0);
			
			case 1:
				return func_910(iParam0);
			
			case 2:
				return func_909(iParam0);
			
			case 3:
				return func_908(iParam0);
			}
		
		default:
	}
	return -1;
}

int func_908(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 12))
		{
			return 12;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 13))
		{
			return 13;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 14))
		{
			return 14;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 15);
			return 15;
		}
	}
	return -1;
}

int func_909(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 8))
		{
			return 8;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 9))
		{
			return 9;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 10))
		{
			return 10;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 11);
			return 11;
		}
	}
	return -1;
}

int func_910(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 4))
		{
			return 4;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 5))
		{
			return 5;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 6))
		{
			return 6;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 7);
			return 7;
		}
	}
	return -1;
}

int func_911(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 0))
		{
			return 0;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 2))
		{
			return 2;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_5, 3);
			return 3;
		}
	}
	return -1;
}

Vector3 func_912(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5163.384f, -4995.56f, 11.682f;
		
		case 1:
			return 4765.362f, -4778.338f, 2.781f;
		
		case 2:
			return 4502.198f, -4523.357f, 3.396f;
		
		case 3:
			return 4528.522f, -4536.311f, 6.558f;
		
		case 4:
			return 5098.933f, -4609.03f, 1.369f;
		
		case 5:
			return 5060.167f, -4589.7f, 1.9f;
		
		case 6:
			return 5148.113f, -4616.131f, 1.387f;
		
		case 7:
			return 5170.703f, -4675.337f, 1.439f;
		
		case 8:
			return 5116.664f, -5130.588f, 1.143f;
		
		case 9:
			return 5002.533f, -5125.336f, 1.955f;
		
		case 10:
			return 4949.935f, -5321.81f, 7.085f;
		
		case 11:
			return 5012.355f, -5203.456f, 1.516f;
		
		case 12:
			return 4923.873f, -5273.464f, 4.65f;
		
		case 13:
			return 5263.995f, -5435.548f, 64.881f;
		
		case 14:
			return 4886.995f, -5454.333f, 29.731f;
		
		case 15:
			return 5106.183f, -5524.682f, 53.239f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_913(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return func_917(iParam0);
			
			case 1:
				return func_916(iParam0);
			
			case 2:
				return func_915(iParam0);
			
			case 3:
				return func_914(iParam0);
			}
		
		default:
	}
	return -1;
}

int func_914(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 12))
		{
			return 12;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 13))
		{
			return 13;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 14))
		{
			return 14;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 15);
			return 15;
		}
	}
	return -1;
}

int func_915(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 8))
		{
			return 8;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 9))
		{
			return 9;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 10))
		{
			return 10;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 11);
			return 11;
		}
	}
	return -1;
}

int func_916(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 4))
		{
			return 4;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 5))
		{
			return 5;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 6))
		{
			return 6;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 7);
			return 7;
		}
	}
	return -1;
}

int func_917(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 0))
		{
			return 0;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 2))
		{
			return 2;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_4, 3);
			return 3;
		}
	}
	return -1;
}

Vector3 func_918(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4896.678f, -4791.297f, 2.59f;
		
		case 1:
			return 4529.568f, -4703.347f, 3.134f;
		
		case 2:
			return 4493.661f, -4733.618f, 10.01f;
		
		case 3:
			return 3895.499f, -4695.022f, 5.547f;
		
		case 4:
			return 5103.035f, -4681.288f, 7.702f;
		
		case 5:
			return 5130.433f, -4610.441f, 11.724f;
		
		case 6:
			return 5109.232f, -4578.338f, 28.711f;
		
		case 7:
			return 4879.964f, -4487.782f, 9.922f;
		
		case 8:
			return 4901.395f, -5331.422f, 28.64f;
		
		case 9:
			return 4862.909f, -5158.419f, 2.283f;
		
		case 10:
			return 5124.89f, -5097.902f, 2.192f;
		
		case 11:
			return 4867.519f, -4642.129f, 13.571f;
		
		case 12:
			return 5568.438f, -5185.942f, 10.22f;
		
		case 13:
			return 5406.297f, -5170.91f, 31.198f;
		
		case 14:
			return 5265.993f, -5430.593f, 140.566f;
		
		case 15:
			return 5611.286f, -5654.516f, 9.051f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_919(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return func_923(iParam0);
			
			case 1:
				return func_922(iParam0);
			
			case 2:
				return func_921(iParam0);
			
			case 3:
				return func_920(iParam0);
			}
		
		default:
	}
	return -1;
}

int func_920(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 12))
		{
			return 12;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 13))
		{
			return 13;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 14))
		{
			return 14;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 15);
			return 15;
		}
	}
	return -1;
}

int func_921(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 8))
		{
			return 8;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 9))
		{
			return 9;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 10))
		{
			return 10;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 11);
			return 11;
		}
	}
	return -1;
}

int func_922(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 4))
		{
			return 4;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 5))
		{
			return 5;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 6))
		{
			return 6;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 7);
			return 7;
		}
	}
	return -1;
}

int func_923(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 0))
		{
			return 0;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 2))
		{
			return 2;
		}
		else
		{
			BitTest(Global_1979596[iParam0 /*53*/].f_5.f_3, 3);
			return 3;
		}
	}
	return -1;
}

Vector3 func_924(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5081.14f, -5758.794f, 15.981f;
		
		case 1:
			return 5027.032f, -5738.977f, 18.027f;
		
		case 2:
			return 5008.773f, -5783.208f, 17.99f;
		
		case 3:
			return 5014.587f, -5751.069f, 29.006f;
		
		case 4:
			return 5004.83f, -5755.521f, 29.006f;
		
		case 5:
			return 4995.553f, -5748.032f, 15.002f;
		
		case 6:
			return 4997.112f, -5745.52f, 15.001f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_925(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_18, iParam1);
	}
	return 0;
}

int func_926(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_17, iParam1);
	}
	return 0;
}

Vector3 func_927(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 5081.753f, -5754.63f, 15.764f;
		
		case 1:
			return 5082.945f, -5758.447f, 15.765f;
		
		case 2:
			return 5029.346f, -5733.933f, 17.81f;
		
		case 3:
			return 5029.777f, -5737.731f, 17.808f;
		
		case 4:
			return 5012.031f, -5788.325f, 17.773f;
		
		case 5:
			return 5006.233f, -5785.789f, 17.771f;
		
		case 6:
			return 4998.106f, -5752.379f, 14.783f;
		
		case 7:
			return 5003.947f, -5748.77f, 14.787f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_928(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_9, bParam1))
		{
			return 0;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_10, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_11, bParam1))
		{
			return 2;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_12, bParam1))
		{
			return 3;
		}
	}
	return -1;
}

int func_929(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		switch (func_928(iParam0, bParam1))
		{
			case 0:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_13, bParam1);
			
			case 1:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_14, bParam1);
			
			case 2:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_15, bParam1);
			
			case 3:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_16, bParam1);
			}
		
		default:
	}
	return 0;
}

int func_930(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_9, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_10, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_11, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_12, bParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_931(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, struct<2> Param5, float fParam6)
{
	unk_0x88F483FBD433696A(uParam0, "ADD_WORLD_MAP_ICON");
	unk_0x330108B080A2132F(bParam1);
	unk_0x330108B080A2132F(bParam2);
	unk_0x330108B080A2132F(bParam3);
	unk_0x330108B080A2132F(bParam4);
	unk_0x74BF156C860580D4(Param5.f_0);
	unk_0x74BF156C860580D4(Param5.f_1);
	unk_0xE6B753D52F4CA222();
}

Vector3 func_932(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 4447.822f, -4442.135f, 7.175f;
		
		case 1:
			return 4448.821f, -4444.858f, 7.182f;
		
		case 2:
			return 4435.688f, -4446.595f, 4.25f;
		
		case 3:
			return 4438.332f, -4445.811f, 4.267f;
		
		case 4:
			return 4506.064f, -4555.47f, 4.095f;
		
		case 5:
			return 4503.678f, -4556.323f, 4.096f;
		
		case 6:
			return 5064.635f, -4589.759f, 2.801f;
		
		case 7:
			return 5067.557f, -4590.849f, 2.795f;
		
		case 8:
			return 5092.602f, -4680.137f, 2.35f;
		
		case 9:
			return 5093.195f, -4683.354f, 2.35f;
		
		case 10:
			return 5091.02f, -4685.678f, 2.351f;
		
		case 11:
			return 5136.102f, -4613.863f, 2.401f;
		
		case 12:
			return 5131.834f, -4612.648f, 2.404f;
		
		case 13:
			return 5329.472f, -5272.372f, 33.13f;
		
		case 14:
			return 5328.096f, -5270.587f, 33.129f;
		
		case 15:
			return 5196.664f, -5133.933f, 3.284f;
		
		case 16:
			return 5196.121f, -5136.333f, 3.285f;
		
		case 17:
			return 5000.313f, -5163.344f, 2.697f;
		
		case 18:
			return 5001.3f, -5165.434f, 2.697f;
		
		case 19:
			return 4959.845f, -5107.064f, 2.911f;
		
		case 20:
			return 4962.675f, -5106.771f, 2.913f;
		
		case 21:
			return 4963.856f, -5109.32f, 2.912f;
		
		case 22:
			return 4926.316f, -5244.514f, 2.461f;
		
		case 23:
			return 4924.385f, -5245.882f, 2.461f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_933(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		
		case 1:
			return 3;
		
		case 2:
			return 6;
		
		case 3:
			return 5;
		
		default:
	}
	return -1;
}

int func_934(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 8;
		
		case 2:
			return 9;
		
		case 3:
			return 10;
		
		default:
	}
	return -1;
}

int func_935(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_1, bParam1))
		{
			return 0;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_2, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_3, bParam1))
		{
			return 2;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_4, bParam1))
		{
			return 3;
		}
	}
	return -1;
}

int func_936(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		switch (func_935(iParam0, bParam1))
		{
			case 0:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_5, bParam1);
			
			case 1:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_6, bParam1);
			
			case 2:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_7, bParam1);
			
			case 3:
				return BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_8, bParam1);
			}
		
		default:
	}
	return 0;
}

int func_937(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_1, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_2, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_3, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_4, bParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_938(var uParam0)
{
	int iVar0;
	
	if (!func_17(uParam0->f_1084, 0) && !func_362(uParam0->f_1084))
	{
		func_939(uParam0->f_711, Local_111[iVar0 /*14*/]);
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_111.f_0)
	{
		if (Local_111[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_111[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_112.f_0)
	{
		if (Local_112[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_112[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_113.f_0)
	{
		if (Local_113[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_113[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_114.f_0)
	{
		if (Local_114[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_114[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_116.f_0)
	{
		if (Local_116[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_116[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_115.f_0)
	{
		if (Local_115[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_115[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_117.f_0)
	{
		if (Local_117[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_117[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_118.f_0)
	{
		if (Local_118[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_118[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_119.f_0)
	{
		if (Local_119[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_119[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_120.f_0)
	{
		if (Local_120[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_120[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_121.f_0)
	{
		if (Local_121[iVar0 /*14*/])
		{
			func_939(uParam0->f_711, Local_121[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_122.f_0)
	{
		if (Local_122[iVar0 /*9*/])
		{
			func_581(uParam0->f_711, Local_122[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_123.f_0)
	{
		if (Local_123[iVar0 /*9*/])
		{
			func_581(uParam0->f_711, Local_123[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_124.f_0)
	{
		if (Local_124[iVar0 /*9*/])
		{
			func_581(uParam0->f_711, Local_124[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_125.f_0)
	{
		if (Local_125[iVar0 /*9*/])
		{
			func_581(uParam0->f_711, Local_125[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_126.f_0)
	{
		if (Local_126[iVar0 /*9*/])
		{
			func_581(uParam0->f_711, Local_126[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_127.f_0)
	{
		if (Local_127[iVar0 /*9*/])
		{
			func_581(uParam0->f_711, Local_127[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_128.f_0)
	{
		if (Local_128[iVar0 /*9*/])
		{
			func_581(uParam0->f_711, Local_128[iVar0 /*9*/], 0);
			if (Local_128[iVar0 /*9*/].f_2 != 98 || func_415(uParam0->f_1084))
			{
				func_570(uParam0->f_711, Local_128[iVar0 /*9*/].f_2, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_129.f_0)
	{
		if (Local_129[iVar0 /*9*/])
		{
			func_581(uParam0->f_711, Local_129[iVar0 /*9*/], 0);
			if (func_416(uParam0->f_1084, func_609(Local_129[iVar0 /*9*/].f_2)))
			{
				func_570(uParam0->f_711, Local_129[iVar0 /*9*/].f_2, 1);
			}
		}
		iVar0++;
	}
	if (unk_0x834C960822A4683F() && uParam0->f_1084 == unk_0x259BE71D8A81D4FA())
	{
		iVar0 = 0;
		while (iVar0 < Local_130.f_0)
		{
			if (Local_130[iVar0 /*9*/])
			{
				func_581(uParam0->f_711, Local_130[iVar0 /*9*/], 1);
			}
			iVar0++;
		}
	}
}

void func_939(var uParam0, struct<14> Param1)
{
	unk_0x88F483FBD433696A(uParam0, "ADD_SETUP_ITEM");
	unk_0x330108B080A2132F(Param1.f_1);
	unk_0x330108B080A2132F(Param1.f_2);
	unk_0x330108B080A2132F(Param1.f_3);
	func_432(Param1.f_4);
	unk_0x330108B080A2132F(Param1.f_5);
	unk_0x330108B080A2132F(Param1.f_6);
	unk_0x330108B080A2132F(Param1.f_7);
	unk_0x557F1E2300EF1A3E(Param1.f_8);
	func_432(Param1.f_9);
	unk_0x3585BEBEDC67FCC7(Param1.f_10);
	unk_0x557F1E2300EF1A3E(Param1.f_11);
	if (Param1.f_12 != -2)
	{
		unk_0x330108B080A2132F(Param1.f_12);
		unk_0x330108B080A2132F(Param1.f_13);
	}
	unk_0xE6B753D52F4CA222();
}

void func_940(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (func_872(uParam0, 2))
	{
		return;
	}
	func_583(uParam0, &(Local_122[0 /*9*/]), 0, 63);
	func_583(uParam0, &(Local_122[1 /*9*/]), 0, 64);
	func_583(uParam0, &(Local_122[2 /*9*/]), 0, 65);
	func_583(uParam0, &(Local_122[3 /*9*/]), 0, 66);
	func_583(uParam0, &(Local_122[4 /*9*/]), 0, 67);
	func_583(uParam0, &(Local_122[5 /*9*/]), 0, 68);
	func_583(uParam0, &(Local_122[6 /*9*/]), 0, 69);
	if (unk_0x834C960822A4683F() && uParam0->f_1084 == unk_0x259BE71D8A81D4FA())
	{
		func_583(uParam0, &(Local_122[7 /*9*/]), 0, 70);
	}
	iVar0 = 0;
	if (func_17(uParam0->f_1084, 7))
	{
		func_583(uParam0, &(Local_123[iVar0 /*9*/]), 63, 71);
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 1) && func_17(uParam0->f_1084, 6))
	{
		func_583(uParam0, &(Local_123[iVar0 /*9*/]), 63, 72);
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 5))
	{
		func_583(uParam0, &(Local_123[iVar0 /*9*/]), 63, 73);
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 2) && func_17(uParam0->f_1084, 6))
	{
		func_583(uParam0, &(Local_123[iVar0 /*9*/]), 63, 74);
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 3))
	{
		func_583(uParam0, &(Local_123[iVar0 /*9*/]), 63, 75);
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 4))
	{
		func_583(uParam0, &(Local_123[iVar0 /*9*/]), 63, 76);
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		bVar2 = (77 + iVar1);
		if (func_383(uParam0->f_1084, func_384(bVar2)))
		{
			func_583(uParam0, &(Local_124[iVar0 /*9*/]), 64, bVar2);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	if (func_17(uParam0->f_1084, 8))
	{
		func_583(uParam0, &(Local_125[iVar0 /*9*/]), 65, 85);
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 9))
	{
		func_583(uParam0, &(Local_125[iVar0 /*9*/]), 65, 86);
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		bVar2 = (87 + iVar1);
		if (func_381(uParam0->f_1084, func_382(bVar2)))
		{
			func_583(uParam0, &(Local_126[iVar0 /*9*/]), 66, bVar2);
			iVar0++;
		}
		iVar1++;
	}
	func_583(uParam0, &(Local_127[0 /*9*/]), 67, 91);
	func_583(uParam0, &(Local_127[1 /*9*/]), 67, 92);
	if (func_378(uParam0->f_1084) == 1)
	{
		func_583(uParam0, &(Local_128[0 /*9*/]), 68, 93);
	}
	else if (func_378(uParam0->f_1084) == 2)
	{
		func_583(uParam0, &(Local_128[0 /*9*/]), 68, 94);
	}
	else if (func_378(uParam0->f_1084) == 3)
	{
		func_583(uParam0, &(Local_128[0 /*9*/]), 68, 95);
	}
	else if (func_378(uParam0->f_1084) == 4)
	{
		func_583(uParam0, &(Local_128[0 /*9*/]), 68, 96);
	}
	else if (func_378(uParam0->f_1084) == 5)
	{
		func_583(uParam0, &(Local_128[0 /*9*/]), 68, 97);
	}
	func_583(uParam0, &(Local_128[1 /*9*/]), 68, 98);
	bLocal_141 = func_415(uParam0->f_1084);
	func_583(uParam0, &(Local_129[0 /*9*/]), 69, 99);
	func_583(uParam0, &(Local_129[1 /*9*/]), 69, 100);
	func_583(uParam0, &(Local_129[2 /*9*/]), 69, 101);
	func_583(uParam0, &(Local_129[3 /*9*/]), 69, 102);
	func_583(uParam0, &(Local_129[4 /*9*/]), 69, 103);
	func_583(uParam0, &(Local_129[5 /*9*/]), 69, 104);
	if (unk_0x834C960822A4683F() && uParam0->f_1084 == unk_0x259BE71D8A81D4FA())
	{
		func_583(uParam0, &(Local_130[0 /*9*/]), 70, 105);
		func_583(uParam0, &(Local_130[1 /*9*/]), 70, 106);
		func_583(uParam0, &(Local_130[2 /*9*/]), 70, 107);
		func_583(uParam0, &(Local_130[3 /*9*/]), 70, 108);
	}
}

void func_941(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (func_872(uParam0, 1))
	{
		return;
	}
	func_942(uParam0, &(Local_117[0 /*14*/]), 1, 0, 36, 0);
	func_942(uParam0, &(Local_117[1 /*14*/]), 1, 0, 37, 0);
	func_942(uParam0, &(Local_117[2 /*14*/]), 1, 0, 38, 0);
	func_942(uParam0, &(Local_117[3 /*14*/]), 1, 0, 39, 0);
	func_942(uParam0, &(Local_118[0 /*14*/]), 1, 36, 40, 0);
	func_942(uParam0, &(Local_118[1 /*14*/]), 1, 36, 41, 0);
	func_942(uParam0, &(Local_118[2 /*14*/]), 1, 36, 42, 0);
	func_942(uParam0, &(Local_118[3 /*14*/]), 1, 36, 43, 0);
	func_942(uParam0, &(Local_118[4 /*14*/]), 1, 36, 44, 0);
	func_942(uParam0, &(Local_118[5 /*14*/]), 1, 36, 45, 0);
	func_942(uParam0, &(Local_118[6 /*14*/]), 1, 41, 46, 0);
	func_942(uParam0, &(Local_118[7 /*14*/]), 1, 41, 47, 0);
	func_942(uParam0, &(Local_118[8 /*14*/]), 1, 43, 48, 0);
	func_942(uParam0, &(Local_118[9 /*14*/]), 1, 43, 49, 0);
	func_942(uParam0, &(Local_119[0 /*14*/]), 1, 37, 50, 0);
	func_942(uParam0, &(Local_119[1 /*14*/]), 1, 37, 51, 0);
	func_942(uParam0, &(Local_119[2 /*14*/]), 1, 37, 52, 0);
	func_942(uParam0, &(Local_119[3 /*14*/]), 1, 37, 53, 0);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		bVar2 = (54 + iVar1);
		if (!func_17(uParam0->f_1084, 13) || func_378(uParam0->f_1084) == func_607(bVar2))
		{
			func_942(uParam0, &(Local_120[iVar0 /*14*/]), 1, 38, bVar2, 0);
			iVar0++;
		}
		iVar1++;
	}
	func_942(uParam0, &(Local_120[iVar0 /*14*/]), 1, 38, 59, 0);
	func_942(uParam0, &(Local_121[0 /*14*/]), 1, 39, 60, 0);
	func_942(uParam0, &(Local_121[1 /*14*/]), 1, 39, 61, 0);
	func_942(uParam0, &(Local_121[2 /*14*/]), 1, 39, 62, 0);
}

void func_942(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	*uParam1 = 1;
	uParam1->f_1 = iParam2;
	uParam1->f_2 = iParam3;
	uParam1->f_3 = bParam4;
	if (bParam5)
	{
		uParam1->f_4 = "CH_LIST_BLANK";
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 2;
		uParam1->f_8 = 0;
		uParam1->f_9 = "CH_LIST_BLANK";
		uParam1->f_10 = "";
		uParam1->f_11 = 0;
		uParam1->f_12 = -1;
		uParam1->f_13 = -1;
	}
	else
	{
		uParam1->f_4 = func_590(uParam0, bParam4);
		uParam1->f_5 = func_960(uParam0, bParam4);
		uParam1->f_6 = func_959(uParam0, bParam4);
		if (func_370(uParam0, bParam4))
		{
			uParam1->f_7 = func_585(uParam0, bParam4);
		}
		else
		{
			uParam1->f_7 = 0;
		}
		uParam1->f_8 = func_958(uParam0, bParam4);
		uParam1->f_9 = func_588(uParam0, bParam4);
		uParam1->f_10 = func_586(uParam0, bParam4);
		uParam1->f_11 = func_584(bParam4);
		if (func_946(uParam0, bParam4) != -2)
		{
			uParam1->f_12 = func_946(uParam0, bParam4);
			uParam1->f_13 = func_943(uParam0, bParam4);
		}
	}
}

int func_943(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 2:
			if (func_823(uParam0->f_1084))
			{
				return func_945(uParam0->f_1084);
			}
			return -1;
		
		case 3:
			return 8;
		
		case 4:
			return 4;
		
		case 5:
			return 6;
		
		case 6:
			return 6;
		
		case 7:
			if (func_944(uParam0->f_1084, 0, 0, 0) > 0 && func_885(uParam0->f_1084, 0, 0, 0) == func_944(uParam0->f_1084, 0, 0, 0))
			{
				return func_944(uParam0->f_1084, 0, 0, 0);
			}
			break;
		
		case 8:
			if (func_944(uParam0->f_1084, 1, 0, 0) > 0 && func_885(uParam0->f_1084, 1, 0, 0) == func_944(uParam0->f_1084, 1, 0, 0))
			{
				return func_944(uParam0->f_1084, 1, 0, 0);
			}
			break;
		
		case 9:
			if (func_944(uParam0->f_1084, 2, 0, 0) > 0 && func_885(uParam0->f_1084, 2, 0, 0) == func_944(uParam0->f_1084, 2, 0, 0))
			{
				return func_944(uParam0->f_1084, 2, 0, 0);
			}
			break;
		
		case 10:
			if (func_944(uParam0->f_1084, 3, 0, 0) > 0 && func_885(uParam0->f_1084, 3, 0, 0) == func_944(uParam0->f_1084, 3, 0, 0))
			{
				return func_944(uParam0->f_1084, 3, 0, 0);
			}
			break;
		
		case 11:
			if (func_944(uParam0->f_1084, 4, 0, 0) > 0 && func_885(uParam0->f_1084, 4, 0, 0) == func_944(uParam0->f_1084, 4, 0, 0))
			{
				return func_944(uParam0->f_1084, 4, 0, 0);
			}
			break;
		
		case 30:
			return 1;
		
		case 31:
			return 1;
		
		case 33:
			return 4;
		
		case 34:
			return 4;
		
		case 32:
			return 4;
		
		case 35:
			return 1;
		
		case 36:
			if (func_383(uParam0->f_1084, 5) || func_383(uParam0->f_1084, 6))
			{
				return 6;
			}
			return 5;
		
		case 37:
			if (!func_383(uParam0->f_1084, 7))
			{
				return 3;
			}
			return 4;
		
		case 38:
			return 1;
		
		case 39:
			return 3;
	}
	return -2;
}

int func_944(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_1, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_9, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 1:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_2, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_10, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 2:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_3, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_11, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 3:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_4, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_12, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 4:
				bVar1 = false;
				while (bVar1 < 7)
				{
					if (BitTest(Global_1979596[iParam0 /*53*/].f_5.f_10.f_17, bVar1))
					{
						iVar0++;
					}
					bVar1++;
				}
				break;
			}
	}
	return iVar0;
}

int func_945(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = (iVar0 + func_944(iParam0, 0, 0, 0));
		iVar0 = (iVar0 + func_944(iParam0, 1, 0, 0));
		iVar0 = (iVar0 + func_944(iParam0, 2, 0, 0));
		iVar0 = (iVar0 + func_944(iParam0, 3, 0, 0));
		iVar0 = (iVar0 + func_944(iParam0, 4, 0, 0));
	}
	return iVar0;
}

int func_946(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 2:
			if (func_823(uParam0->f_1084))
			{
				return func_945(uParam0->f_1084);
			}
			return -1;
		
		case 3:
			return func_957(uParam0);
		
		case 4:
			return func_956(uParam0);
		
		case 5:
			return func_955(uParam0);
		
		case 6:
			return func_954(uParam0);
		
		case 7:
			if (func_944(uParam0->f_1084, 0, 0, 0) > 0 && func_885(uParam0->f_1084, 0, 0, 0) == func_944(uParam0->f_1084, 0, 0, 0))
			{
				return func_944(uParam0->f_1084, 0, 0, 0);
			}
			break;
		
		case 8:
			if (func_944(uParam0->f_1084, 1, 0, 0) > 0 && func_885(uParam0->f_1084, 1, 0, 0) == func_944(uParam0->f_1084, 1, 0, 0))
			{
				return func_944(uParam0->f_1084, 1, 0, 0);
			}
			break;
		
		case 9:
			if (func_944(uParam0->f_1084, 2, 0, 0) > 0 && func_885(uParam0->f_1084, 2, 0, 0) == func_944(uParam0->f_1084, 2, 0, 0))
			{
				return func_944(uParam0->f_1084, 2, 0, 0);
			}
			break;
		
		case 10:
			if (func_944(uParam0->f_1084, 3, 0, 0) > 0 && func_885(uParam0->f_1084, 3, 0, 0) == func_944(uParam0->f_1084, 3, 0, 0))
			{
				return func_944(uParam0->f_1084, 3, 0, 0);
			}
			break;
		
		case 11:
			if (func_944(uParam0->f_1084, 4, 0, 0) > 0 && func_885(uParam0->f_1084, 4, 0, 0) == func_944(uParam0->f_1084, 4, 0, 0))
			{
				return func_944(uParam0->f_1084, 4, 0, 0);
			}
			break;
		
		case 30:
			return func_953(func_408(uParam0->f_1084));
		
		case 31:
			return func_953(func_406(uParam0->f_1084));
		
		case 33:
			return func_952(uParam0);
		
		case 34:
			return func_951(uParam0);
		
		case 32:
			return func_950(uParam0);
		
		case 35:
			return func_953(func_387(uParam0->f_1084));
		
		case 36:
			return func_949(uParam0);
		
		case 37:
			return func_948(uParam0);
		
		case 38:
			if (func_17(uParam0->f_1084, 13))
			{
				return 1;
			}
			return 0;
		
		case 39:
			return func_947(uParam0);
	}
	return -2;
}

int func_947(var uParam0)
{
	int iVar0;
	
	if (func_17(uParam0->f_1084, 14))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 15))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 16))
	{
		iVar0++;
	}
	return iVar0;
}

int func_948(var uParam0)
{
	int iVar0;
	
	if (func_17(uParam0->f_1084, 8))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 9))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 11))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 12))
	{
		iVar0++;
	}
	return iVar0;
}

int func_949(var uParam0)
{
	int iVar0;
	
	if (func_17(uParam0->f_1084, 7))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 1) && func_17(uParam0->f_1084, 6))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 5))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 2) && func_17(uParam0->f_1084, 6))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 3))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 4))
	{
		iVar0++;
	}
	return iVar0;
}

int func_950(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_401(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_951(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_389(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_952(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_395(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_953(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_954(var uParam0)
{
	int iVar0;
	
	if (func_820(uParam0->f_1084))
	{
		iVar0++;
	}
	if (func_819(uParam0->f_1084))
	{
		iVar0++;
	}
	if (func_818(uParam0->f_1084))
	{
		iVar0++;
	}
	if (func_387(uParam0->f_1084))
	{
		iVar0++;
	}
	if (func_408(uParam0->f_1084))
	{
		iVar0++;
	}
	if (func_406(uParam0->f_1084))
	{
		iVar0++;
	}
	return iVar0;
}

int func_955(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_379(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_956(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_381(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_957(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_383(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_958(var uParam0, bool bParam1)
{
	if (func_370(uParam0, bParam1))
	{
		return 0;
	}
	switch (bParam1)
	{
		case 37:
		case 38:
			return 1;
		
		case 36:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			if (!func_589(uParam0->f_1084, 1))
			{
				return 1;
			}
			break;
		
		case 50:
		case 53:
			if (!func_17(uParam0->f_1084, 8) && !func_17(uParam0->f_1084, 9))
			{
				return 1;
			}
			break;
		
		case 51:
		case 52:
			return 1;
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			if (!func_17(uParam0->f_1084, 13))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_959(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 1;
		
		case 9:
			return 1;
		
		case 10:
			return 1;
		
		case 11:
			return 1;
		
		case 12:
			return 1;
		
		case 13:
			return 1;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 1;
		
		case 17:
			return 1;
		
		case 18:
			return 1;
		
		case 19:
			return 1;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 22:
			return 1;
		
		case 23:
			return 1;
		
		case 30:
			return 1;
		
		case 31:
			return 1;
		
		case 32:
			return 1;
		
		case 33:
			return 1;
		
		case 34:
			return 1;
		
		case 35:
			return 1;
		
		case 24:
			return 1;
		
		case 25:
			return 1;
		
		case 26:
			return 1;
		
		case 27:
			return 1;
		
		case 28:
			return 1;
		
		case 29:
			return 1;
		
		case 36:
			return 1;
		
		case 37:
			return 1;
		
		case 38:
			return 1;
		
		case 39:
			return 1;
		
		case 40:
			return 1;
		
		case 41:
			return 1;
		
		case 42:
			return 1;
		
		case 43:
			return 1;
		
		case 44:
			return 1;
		
		case 45:
			return 1;
		
		case 46:
			return 1;
		
		case 47:
			return 1;
		
		case 48:
			return 1;
		
		case 49:
			return 1;
		
		case 50:
			return 1;
		
		case 53:
			return 1;
		
		case 51:
			return 1;
		
		case 52:
			return 1;
		
		case 54:
			return 1;
		
		case 55:
			return 1;
		
		case 56:
			return 1;
		
		case 57:
			return 1;
		
		case 58:
			return 1;
		
		case 59:
			return 1;
		
		case 60:
			return 1;
		
		case 61:
			return 1;
		
		case 62:
			return 1;
		
		default:
	}
	return 0;
}

int func_960(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return func_953(func_824(uParam0->f_1084, 0));
		
		case 8:
			return func_953(func_824(uParam0->f_1084, 1));
		
		case 9:
			return func_953(func_824(uParam0->f_1084, 2));
		
		case 10:
			return func_953(func_824(uParam0->f_1084, 3));
		
		case 11:
			return func_953(func_961(uParam0->f_1084));
		
		case 12:
			return func_953(func_383(uParam0->f_1084, 0));
		
		case 13:
			return func_953(func_383(uParam0->f_1084, 1));
		
		case 14:
			return func_953(func_383(uParam0->f_1084, 2));
		
		case 15:
			return func_953(func_383(uParam0->f_1084, 3));
		
		case 16:
			return func_953(func_383(uParam0->f_1084, 4));
		
		case 17:
			return func_953(func_383(uParam0->f_1084, 5));
		
		case 18:
			return func_953(func_383(uParam0->f_1084, 6));
		
		case 19:
			return func_953(func_383(uParam0->f_1084, 7));
		
		case 20:
			return func_953(func_381(uParam0->f_1084, 0));
		
		case 21:
			return func_953(func_381(uParam0->f_1084, 1));
		
		case 22:
			return func_953(func_381(uParam0->f_1084, 2));
		
		case 23:
			return func_953(func_381(uParam0->f_1084, 3));
		
		case 30:
			return func_953(func_408(uParam0->f_1084));
		
		case 31:
			return func_953(func_406(uParam0->f_1084));
		
		case 32:
			return func_953(func_820(uParam0->f_1084));
		
		case 33:
			return func_953(func_819(uParam0->f_1084));
		
		case 34:
			return func_953(func_818(uParam0->f_1084));
		
		case 35:
			return func_953(func_387(uParam0->f_1084));
		
		case 24:
			return func_953(func_379(uParam0->f_1084, 0));
		
		case 25:
			return func_953(func_379(uParam0->f_1084, 1));
		
		case 26:
			return func_953(func_379(uParam0->f_1084, 2));
		
		case 27:
			return func_953(func_379(uParam0->f_1084, 3));
		
		case 28:
			return func_953(func_379(uParam0->f_1084, 4));
		
		case 29:
			return func_953(func_379(uParam0->f_1084, 5));
		
		case 36:
			if (func_589(uParam0->f_1084, 1))
			{
				return 1;
			}
			break;
		
		case 37:
			if (((func_18(uParam0->f_1084, 8) || func_18(uParam0->f_1084, 9)) && func_18(uParam0->f_1084, 10)) && func_18(uParam0->f_1084, 11))
			{
				return 1;
			}
			break;
		
		case 38:
			if (func_18(uParam0->f_1084, 12))
			{
				return 1;
			}
			break;
		
		case 39:
			if ((func_18(uParam0->f_1084, 13) && func_18(uParam0->f_1084, 14)) && func_18(uParam0->f_1084, 15))
			{
				return 1;
			}
			break;
		
		case 40:
			return func_953(func_18(uParam0->f_1084, 1));
		
		case 41:
			if (func_18(uParam0->f_1084, 2) && func_18(uParam0->f_1084, 7))
			{
				return 1;
			}
			break;
		
		case 42:
			return func_953(func_18(uParam0->f_1084, 3));
		
		case 43:
			if (func_18(uParam0->f_1084, 4) && func_18(uParam0->f_1084, 7))
			{
				return 2;
			}
			break;
		
		case 44:
			return func_953(func_18(uParam0->f_1084, 5));
		
		case 45:
			return func_953(func_18(uParam0->f_1084, 6));
		
		case 46:
			return func_953(func_18(uParam0->f_1084, 2));
		
		case 47:
			return func_953(func_18(uParam0->f_1084, 7));
		
		case 48:
			return func_953(func_18(uParam0->f_1084, 4));
		
		case 49:
			return func_953(func_18(uParam0->f_1084, 7));
		
		case 50:
			return func_953(func_18(uParam0->f_1084, 8));
		
		case 53:
			return func_953(func_18(uParam0->f_1084, 9));
		
		case 51:
			return func_953(func_18(uParam0->f_1084, 10));
		
		case 52:
			return func_953(func_18(uParam0->f_1084, 11));
		
		case 54:
			return func_953((func_18(uParam0->f_1084, 12) && func_378(uParam0->f_1084) == 1));
		
		case 55:
			return func_953((func_18(uParam0->f_1084, 12) && func_378(uParam0->f_1084) == 2));
		
		case 56:
			return func_953((func_18(uParam0->f_1084, 12) && func_378(uParam0->f_1084) == 3));
		
		case 57:
			return func_953((func_18(uParam0->f_1084, 12) && func_378(uParam0->f_1084) == 4));
		
		case 58:
			return func_953((func_18(uParam0->f_1084, 12) && func_378(uParam0->f_1084) == 5));
		
		case 59:
			return func_953(func_415(uParam0->f_1084));
		
		case 60:
			return func_953(func_18(uParam0->f_1084, 13));
		
		case 61:
			return func_953(func_18(uParam0->f_1084, 14));
		
		case 62:
			return func_953(func_18(uParam0->f_1084, 15));
	}
	return 0;
}

int func_961(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1979596[iParam0 /*53*/].f_5.f_10.f_17 == Global_1979596[iParam0 /*53*/].f_5.f_10.f_18;
	}
	return 0;
}

void func_962(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	func_942(uParam0, &(Local_111[0 /*14*/]), 0, 0, 1, 0);
	if (!func_17(uParam0->f_1084, 0) && !func_362(uParam0->f_1084))
	{
		return;
	}
	func_942(uParam0, &(Local_111[1 /*14*/]), 0, 0, 2, 0);
	func_942(uParam0, &(Local_111[2 /*14*/]), 0, 0, 3, 0);
	func_942(uParam0, &(Local_111[3 /*14*/]), 0, 0, 4, 0);
	func_942(uParam0, &(Local_111[4 /*14*/]), 0, 0, 5, 0);
	func_942(uParam0, &(Local_111[5 /*14*/]), 0, 0, 6, 0);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		bVar2 = (7 + iVar0);
		if (func_385(uParam0->f_1084, func_963(bVar2), 0, 0))
		{
			func_942(uParam0, &(Local_114[iVar1 /*14*/]), 0, 2, bVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_942(uParam0, &(Local_114[iVar1 /*14*/]), 0, 2, 7, 1);
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		bVar2 = (12 + iVar0);
		if (func_383(uParam0->f_1084, func_384(bVar2)))
		{
			func_942(uParam0, &(Local_112[iVar1 /*14*/]), 0, 3, bVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		bVar2 = (20 + iVar0);
		if (func_381(uParam0->f_1084, func_382(bVar2)))
		{
			func_942(uParam0, &(Local_113[iVar1 /*14*/]), 0, 4, bVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		bVar2 = (24 + iVar0);
		if (func_379(uParam0->f_1084, func_380(bVar2)))
		{
			func_942(uParam0, &(Local_116[iVar1 /*14*/]), 0, 5, bVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	iVar1 = 0;
	if (func_408(uParam0->f_1084))
	{
		func_942(uParam0, &(Local_115[iVar1 /*14*/]), 0, 6, 30, 0);
		iVar1++;
	}
	if (func_406(uParam0->f_1084))
	{
		func_942(uParam0, &(Local_115[iVar1 /*14*/]), 0, 6, 31, 0);
		iVar1++;
	}
	if (func_400(uParam0->f_1084))
	{
		func_942(uParam0, &(Local_115[iVar1 /*14*/]), 0, 6, 32, 0);
		iVar1++;
	}
	if (func_394(uParam0->f_1084))
	{
		func_942(uParam0, &(Local_115[iVar1 /*14*/]), 0, 6, 33, 0);
		iVar1++;
	}
	if (func_388(uParam0->f_1084))
	{
		func_942(uParam0, &(Local_115[iVar1 /*14*/]), 0, 6, 34, 0);
		iVar1++;
	}
	if (func_387(uParam0->f_1084))
	{
		func_942(uParam0, &(Local_115[iVar1 /*14*/]), 0, 6, 35, 0);
		iVar1++;
	}
	if (iVar1 == 0)
	{
		func_942(uParam0, &(Local_115[iVar1 /*14*/]), 0, 6, 32, 1);
	}
}

int func_963(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 0;
		
		case 8:
			return 1;
		
		case 9:
			return 2;
		
		case 10:
			return 3;
		
		case 11:
			return 4;
		
		default:
	}
	return -1;
}

void func_964(var uParam0)
{
	if (iLocal_150 == 4)
	{
		iLocal_150 = 5;
	}
}

void func_965(var uParam0)
{
	if (iLocal_150 == 0)
	{
		iLocal_150 = 1;
	}
}

char* func_966()
{
	if (!func_362(iLocal_160) && !func_17(iLocal_160, 0))
	{
		return "HIP_PROMPT2";
	}
	return "HIP_PROMPT";
}

int func_967()
{
	if (iLocal_150 > 0)
	{
		return 0;
	}
	if (unk_0x65FFA94B82A71741(iLocal_159, 1561.149f, 386.0429f, -49.68533f, 1f, 0.65f, 1f, 0, 1, 0) && func_968(unk_0xCFC0C995455A6204(iLocal_159), 180f, 60f))
	{
		return 1;
	}
	return 0;
}

int func_968(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_969()
{
	return func_229(unk_0x259BE71D8A81D4FA());
}

int func_970()
{
	if (unk_0x1D5CD3EAAA7422B0((unk_0x4AE9635532D92447(0) - 1.333333f)) < 0.1f)
	{
		return 0;
	}
	return 1;
}

int func_971()
{
	return 0;
}

Vector3 func_972()
{
	return func_973();
}

Vector3 func_973()
{
	return 1561.054f, 385.9017f, -50.6854f;
}

int func_974()
{
	return 0;
}

int func_975()
{
	return iLocal_172;
}

void func_976(var uParam0)
{
	if (func_979(uParam0) || func_978())
	{
		if (!uParam0->f_1091 && !func_978())
		{
			func_977(uParam0, 5);
			uParam0->f_1091 = 1;
		}
		else if (uParam0->f_726 == 5 || func_978())
		{
			func_461(2);
			uParam0->f_1091 = 0;
		}
	}
}

void func_977(var uParam0, int iParam1)
{
	if (uParam0->f_726 != iParam1)
	{
		uParam0->f_726.f_1 = uParam0->f_726;
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_726.f_4), uParam0->f_726.f_1);
		unk_0x8744D2E3FC95740E(&(uParam0->f_726.f_3), uParam0->f_726.f_1);
		uParam0->f_726 = iParam1;
		if (uParam0->f_726 == 7)
		{
			uParam0->f_726 = 5;
		}
	}
}

int func_978()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return 1;
	}
	if (func_117() && func_68() == 1)
	{
		return 1;
	}
	if (Global_1977693.f_1095)
	{
		return 1;
	}
	return 0;
}

int func_979(var uParam0)
{
	if (BitTest(uParam0->f_1085, 7))
	{
		return 1;
	}
	if (BitTest(uParam0->f_1085, 8))
	{
		return 1;
	}
	if (func_980())
	{
		return 1;
	}
	if (Local_161.f_31 != 0)
	{
		Call_Loc(Local_161.f_31);
		if (StackVal)
		{
			return 1;
		}
	}
	return 0;
}

bool func_980()
{
	return Global_2683864.f_696;
}

void func_981()
{
	iLocal_159 = unk_0x4A8C381C258A124D();
	iLocal_160 = unk_0x259BE71D8A81D4FA();
}

void func_982(var uParam0)
{
	func_993(uParam0);
	func_991();
	func_984();
	func_112();
	func_983();
	if (unk_0x259BE71D8A81D4FA() != -1 && Global_1978795[unk_0x259BE71D8A81D4FA() /*25*/].f_20)
	{
		Global_1978795[unk_0x259BE71D8A81D4FA() /*25*/].f_20 = 0;
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_983()
{
	if (Global_1978793)
	{
		Global_1978793 = 0;
	}
	if (iLocal_145)
	{
		unk_0x633E3833FB96BCCB("HS4F_INT");
	}
}

void func_984()
{
	func_990(&Global_1977693);
	func_989(&(Global_1977693.f_726));
	func_988(&(Global_1977693.f_732));
	func_987(&(Global_1977693.f_741));
	func_986(&(Global_1977693.f_806));
	func_985(&(Global_1977693.f_820));
	Global_1977693.f_1082 = -1;
	Global_1977693.f_1084 = func_15();
	Global_1977693.f_1085 = 0;
	Global_1977693.f_1094 = 0;
	Global_1977693.f_1083 = -1;
	Global_1977693.f_1095 = 0;
}

void func_985(var uParam0)
{
	struct<3> Var0;
	
	*uParam0 = { Var0 };
}

void func_986(var uParam0)
{
	struct<14> Var0;
	
	*uParam0 = { Var0 };
}

void func_987(var uParam0)
{
	struct<65> Var0;
	
	Var0.f_63 = 500;
	Var0.f_64 = 2;
	*uParam0 = { Var0 };
}

void func_988(var uParam0)
{
	struct<9> Var0;
	
	*uParam0 = { Var0 };
}

void func_989(var uParam0)
{
	struct<6> Var0;
	
	*uParam0 = { Var0 };
}

void func_990(var uParam0)
{
	struct<726> Var0;
	
	Var0.f_1 = 12;
	Var0.f_699 = 1065353216;
	Var0.f_701 = 1;
	Var0.f_702 = 1;
	*uParam0 = { Var0 };
}

void func_991()
{
	if (Local_161.f_7 != 0)
	{
		Call_Loc(Local_161.f_7);
		func_992(StackVal);
	}
}

void func_992(char* sParam0)
{
	if (unk_0xC13AFEAFC3F7AD96(uParam0))
	{
		unk_0xF8211BE23F0D0552(sParam0);
	}
}

void func_993(var uParam0)
{
	if (uParam0->f_1080)
	{
		if (uParam0->f_1080.f_1 != -1)
		{
			unk_0x8E4825CCACA34B58(uParam0->f_1080.f_1);
			unk_0x394AFAC073E1F277(uParam0->f_1080.f_1);
			uParam0->f_1080.f_1 = -1;
			uParam0->f_1080 = 0;
		}
	}
}

int func_994(var uParam0)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return 0;
	}
	if (BitTest(uParam0->f_1085, 8))
	{
		unk_0x8744D2E3FC95740E(&(uParam0->f_1085), 8);
	}
	if (BitTest(uParam0->f_1085, 9))
	{
		unk_0x8744D2E3FC95740E(&(uParam0->f_1085), 9);
	}
	unk_0x51CC1333A10C4E09();
	func_995();
	return 1;
}

void func_995()
{
	if (!Global_1978793)
	{
		Global_1978793 = 1;
	}
}
