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
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50[2] = { 0, 0 };
	struct<3> Local_51[2];
	float fLocal_52[2] = { 0f, 0f };
	int iLocal_53 = 0;
	struct<3> Local_54 = { 0, 0, 0 } ;
	float fLocal_55 = 0f;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	struct<3> Local_59 = { 0, 0, 0 } ;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	struct<6> Local_62 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_63 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	bool bLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89[2] = { 0, 0 };
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 16;
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
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
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
	int iVar0;
	
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
	StringCopy(&Local_62, "", 24);
	if (unk_0x96CFB880BAC634CE(11))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_58))
		{
			if (unk_0x133460AD0F183CC9(iLocal_58))
			{
				unk_0x5C4B3034CCDA5270(iLocal_58);
			}
		}
		func_212();
	}
	if (func_170(ScriptParam_285.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_167(-1);
	}
	else
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	while (true)
	{
		wait(0);
		if ((unk_0x173751E886F8E9AB() || iLocal_76) || iLocal_103)
		{
			if (!func_166())
			{
				if (func_165())
				{
					func_212();
				}
			}
			unk_0xECF30459397D5190("RE_RA", 0);
			switch (iLocal_46)
			{
				case 0:
					if (func_153())
					{
						func_212();
					}
					if (!iLocal_71)
					{
						func_152();
					}
					else
					{
						func_151();
					}
					if (bLocal_72)
					{
						iLocal_70 = 1;
						iLocal_46 = 1;
					}
					break;
				
				case 1:
					if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
					{
						switch (iLocal_47)
						{
							case 0:
								func_144();
								iLocal_47 = 1;
								break;
							
							case 1:
								if (!func_143())
								{
									if ((unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_59, 75f, 75f, 75f, 0, 1, 0) && !unk_0xF6C26AE940C14749(iLocal_58)) || unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_58, 15f, 15f, 15f, 0, 1, 0))
									{
										if (!func_166())
										{
											unk_0xE67051907958B5EB(unk_0x4A8C381C258A124D(), iLocal_58, -1, 0, 2);
											unk_0x425BBE19F25A57AB(0.1f);
											func_142();
											func_133(1);
										}
										bLocal_79 = true;
									}
									if (!unk_0x4FAFF4BCB7633475(iLocal_50[0]) && !unk_0x4FAFF4BCB7633475(iLocal_50[1]))
									{
										if (unk_0x9B3D4335E0EDB0BE(iLocal_50[0], unk_0x4A8C381C258A124D(), 1) || unk_0x9B3D4335E0EDB0BE(iLocal_50[1], unk_0x4A8C381C258A124D(), 1))
										{
											func_142();
											bLocal_79 = true;
										}
									}
									if (bLocal_79)
									{
										func_127();
									}
									if (!unk_0x4FAFF4BCB7633475(iLocal_58) && unk_0xD9F5E1FEFD1329E4(uLocal_53, 0))
									{
										if (unk_0xCECDBB848D53DEB2(iLocal_58, uLocal_53, 0))
										{
											iLocal_103 = 1;
										}
									}
									if (bLocal_104)
									{
										if (unk_0xD9F5E1FEFD1329E4(uLocal_53, 0))
										{
											if (!unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), uLocal_53, 150f, 150f, 150f, 0, 1, 0))
											{
												iLocal_47 = 9;
											}
										}
									}
								}
								if (func_126())
								{
									func_142();
									iLocal_47 = 3;
								}
								else if (func_143())
								{
									func_142();
									func_124();
									iLocal_47 = 2;
								}
								break;
							
							case 2:
								switch (iLocal_98)
								{
									case 0:
										iLocal_47 = 3;
										break;
									
									case 1:
										iLocal_47 = 3;
										break;
									
									case 3:
										iLocal_47 = 3;
										break;
									
									case 4:
										iLocal_47 = 3;
										break;
									
									case 5:
										if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 4))
										{
											iLocal_106 = 1;
											iLocal_49 = 9;
										}
										else
										{
											iLocal_49 = 13;
										}
										iLocal_47 = 1;
										break;
								}
								if (func_143())
								{
									switch (iLocal_48)
									{
										case 2:
											func_123();
											break;
										
										case 4:
											func_122();
											break;
										
										case 5:
											func_121();
											break;
										}
								}
								break;
							
							case 3:
								func_118();
								unk_0x84B06A81C98DA4B8(unk_0x4A8C381C258A124D());
								if (!unk_0x4FAFF4BCB7633475(iLocal_58))
								{
									unk_0xEBA2204AAD092B47(iLocal_58, 3, 0, 0);
									if (!unk_0x7F420695E3F776FB(iLocal_58, 0))
									{
										if (!iLocal_85)
										{
											if (unk_0x13CCB1AD131C1082(iLocal_58, "random@homelandsecurity", "idle_girl", 3) && !unk_0x8BF5256C439DF778(iLocal_58))
											{
												unk_0x72B18C9612CF3DA0(iLocal_58, 16);
												unk_0xB5396F1FB088FE38(&uLocal_102);
												unk_0x10425721983AE158(0, "random@homelandsecurity", "idle_to_knees_girl", 1000f, -8f, -1, 8192, 0, 0, 0, 0);
												unk_0x10425721983AE158(0, "random@homelandsecurity", "knees_loop_girl", 8f, -8f, -1, 8321, 0, 0, 0, 0);
												unk_0x93C0674FC00824D0(uLocal_102);
												unk_0x4BD42B0527065BB6(iLocal_58, uLocal_102);
												unk_0xD0557B139A542F12(&uLocal_102);
												iLocal_85 = 1;
											}
											else
											{
												unk_0xAFC7A89C990C4339(iLocal_58, -1);
												iLocal_85 = 1;
											}
										}
										else if ((((!unk_0x13CCB1AD131C1082(iLocal_58, "random@homelandsecurity", "idle_girl", 3) && !unk_0x13CCB1AD131C1082(iLocal_58, "random@homelandsecurity", "idle_to_knees_girl", 1)) && !unk_0x13CCB1AD131C1082(iLocal_58, "random@homelandsecurity", "knees_loop_girl", 1)) && unk_0x9B5C1660CCDF7189(iLocal_58, joaat("script_task_cower")) != 0) && unk_0x9B5C1660CCDF7189(iLocal_58, joaat("script_task_cower")) != 1)
										{
											iLocal_85 = 0;
										}
									}
									else if (unk_0xD9F5E1FEFD1329E4(iLocal_53, 0))
									{
										if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_53, 0))
										{
											if (unk_0xC450B06E5AAA0985(uLocal_88))
											{
												unk_0xFE54B8568B2ABD12(&uLocal_88);
											}
										}
									}
								}
								else
								{
									func_117();
								}
								if (!func_116())
								{
									if (iLocal_95 < unk_0x1DD05E817C89C737())
									{
										if (func_115())
										{
											if (!unk_0x4FAFF4BCB7633475(iLocal_50[0]))
											{
												func_114(&uLocal_120, "REHOMAU", "REHOM_YELL", 4, 0, 0, 0);
											}
										}
										else if (!unk_0x4FAFF4BCB7633475(iLocal_50[1]))
										{
											func_114(&uLocal_120, "REHOMAU", "REHOM_YELL2", 4, 0, 0, 0);
										}
										iLocal_95 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(4500, 5000));
									}
								}
								if (unk_0x4FAFF4BCB7633475(iLocal_50[0]))
								{
									if (unk_0xC450B06E5AAA0985(uLocal_89[0]))
									{
										unk_0xFE54B8568B2ABD12(&(uLocal_89[0]));
									}
									func_113(&uLocal_120, 5);
								}
								else if (unk_0x7E54CB377175F94E(iLocal_50[0], unk_0x4A8C381C258A124D()) || unk_0xFAA48325A90263BE(iLocal_50[0], unk_0x4A8C381C258A124D(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (unk_0xC450B06E5AAA0985(uLocal_89[0]))
								{
									unk_0xFE54B8568B2ABD12(&(uLocal_89[0]));
								}
								if (unk_0x4FAFF4BCB7633475(iLocal_50[1]))
								{
									if (unk_0xC450B06E5AAA0985(uLocal_89[1]))
									{
										unk_0xFE54B8568B2ABD12(&(uLocal_89[1]));
									}
									func_113(&uLocal_120, 4);
								}
								else if (unk_0x7E54CB377175F94E(iLocal_50[1], unk_0x4A8C381C258A124D()) || unk_0xFAA48325A90263BE(iLocal_50[1], unk_0x4A8C381C258A124D(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (unk_0xC450B06E5AAA0985(uLocal_89[1]))
								{
									unk_0xFE54B8568B2ABD12(&(uLocal_89[1]));
								}
								if (unk_0xFC8BFE4B41177C22(iLocal_50[0]) && unk_0xFC8BFE4B41177C22(iLocal_50[1]))
								{
									if (((unk_0x1AC621DBDFE4ECA0(iLocal_50[0], joaat("weapon_stungun"), 0) && unk_0x1AC621DBDFE4ECA0(iLocal_50[1], joaat("weapon_stungun"), 0)) || (unk_0x89568FA9A6BC0B4A(iLocal_50[0], 1) && unk_0x89568FA9A6BC0B4A(iLocal_50[1], 1))) || func_112())
									{
										if (unk_0xC450B06E5AAA0985(uLocal_89[0]))
										{
											unk_0xFE54B8568B2ABD12(&(uLocal_89[0]));
										}
										if (unk_0xC450B06E5AAA0985(uLocal_89[1]))
										{
											unk_0xFE54B8568B2ABD12(&(uLocal_89[1]));
										}
										if (!unk_0x4FAFF4BCB7633475(iLocal_58))
										{
											if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_58, 15f, 15f, 15f, 0, 1, 0))
											{
												if (!func_116())
												{
													func_114(&uLocal_120, "REHOMAU", "REHOM_THNK", 4, 0, 0, 0);
													bLocal_64 = false;
													iLocal_76 = 1;
													unk_0xBCB78CFBB026B0DF(iLocal_58, 16);
													unk_0xE4DC7B3DD712372B(iLocal_58);
													iLocal_47 = 4;
												}
											}
										}
									}
								}
								break;
							
							case 4:
								if (!bLocal_64)
								{
									if (!unk_0x4FAFF4BCB7633475(iLocal_58))
									{
										if ((unk_0x13CCB1AD131C1082(iLocal_58, "random@homelandsecurity", "idle_to_knees_girl", 1) || unk_0x13CCB1AD131C1082(iLocal_58, "random@homelandsecurity", "knees_loop_girl", 1)) && !unk_0x8BF5256C439DF778(iLocal_58))
										{
											unk_0x10425721983AE158(iLocal_58, "random@homelandsecurity", "knees_to_stand_girl", 4f, -4f, -1, 0, 0.3f, 0, 0, 0);
										}
										else
										{
											unk_0x974022927CB47E68(iLocal_58);
										}
										unk_0x412B9F2CF0E60079(iLocal_58, 0);
										unk_0x03AB73582A77DBD3(iLocal_58, func_111());
										unk_0xBC14FFDBE1C32C51(iLocal_58, 1);
										func_110();
										bLocal_64 = true;
									}
								}
								if (!unk_0x4FAFF4BCB7633475(iLocal_58))
								{
									if (unk_0x13CCB1AD131C1082(iLocal_58, "random@homelandsecurity", "knees_to_stand_girl", 3))
									{
										if (unk_0x82E64DE58A6B84A8(iLocal_58, "random@homelandsecurity", "knees_to_stand_girl") > 0.8f)
										{
											unk_0x974022927CB47E68(iLocal_58);
										}
									}
								}
								if (!iLocal_66)
								{
									if (!func_116())
									{
										if (func_114(&uLocal_120, "REHOMAU", "REHOM_ASK", 4, 0, 0, 0))
										{
											iLocal_66 = 1;
										}
									}
								}
								else if (!iLocal_65)
								{
									if (!func_116())
									{
										if (func_109() == 0)
										{
											func_114(&uLocal_120, "REHOMAU", "REHOM_RES1_M", 4, 0, 0, 0);
										}
										else if (func_109() == 1)
										{
											func_114(&uLocal_120, "REHOMAU", "REHOM_GOGO", 4, 0, 0, 0);
										}
										iLocal_65 = 1;
									}
								}
								if (bLocal_64)
								{
									if (!unk_0x4FAFF4BCB7633475(iLocal_58))
									{
										if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_58, 8f, 8f, 8f, 0, 1, 0) || unk_0x0F00017BC718D851(unk_0x4A8C381C258A124D()))
										{
											if (unk_0xC450B06E5AAA0985(uLocal_88))
											{
												unk_0xFE54B8568B2ABD12(&uLocal_88);
											}
										}
										else if (!unk_0xC450B06E5AAA0985(uLocal_88))
										{
											uLocal_88 = func_107(iLocal_58, 0, 145);
										}
									}
								}
								if (!unk_0x4FAFF4BCB7633475(iLocal_50[0]))
								{
									if (unk_0x7E54CB377175F94E(iLocal_50[0], unk_0x4A8C381C258A124D()))
									{
										if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) < 2)
										{
										}
									}
								}
								if (!unk_0x4FAFF4BCB7633475(iLocal_50[1]))
								{
									if (unk_0x7E54CB377175F94E(iLocal_50[1], unk_0x4A8C381C258A124D()))
									{
										if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) < 2)
										{
										}
									}
								}
								if (iLocal_65 && func_106())
								{
									if (!func_116())
									{
										func_104();
										wait(0);
										func_114(&uLocal_120, "REHOMAU", "REHOM_COME", 4, 0, 0, 0);
										unk_0xF09E30AF1B8FB379(&(iLocal_50[0]));
										unk_0xF09E30AF1B8FB379(&(iLocal_50[1]));
										if (!unk_0x4FAFF4BCB7633475(iLocal_58))
										{
											if (unk_0x133460AD0F183CC9(iLocal_58))
											{
												iVar0 = 0;
												while (iVar0 < iLocal_50)
												{
													if (unk_0xFC8BFE4B41177C22(iLocal_50[iVar0]))
													{
														unk_0xF09E30AF1B8FB379(&(iLocal_50[iVar0]));
													}
													iVar0++;
												}
												unk_0x425BBE19F25A57AB(1f);
												iLocal_47 = 5;
											}
										}
									}
								}
								break;
							
							case 5:
								func_98();
								func_93();
								func_92();
								func_89();
								func_88();
								if (func_87(Local_67))
								{
									func_68(0);
									func_104();
									wait(0);
									func_114(&uLocal_120, "REHOMAU", "REHOM_WRONG", 4, 0, 0, 0);
								}
								if (func_66())
								{
									func_68(0);
									func_104();
									wait(0);
									func_114(&uLocal_120, "REHOMAU", "REHOM_CULT", 4, 0, 0, 0);
								}
								if (!unk_0x4FAFF4BCB7633475(iLocal_58))
								{
									if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_67, Global_22, 1, 1, 0) && unk_0xFAA48325A90263BE(iLocal_58, unk_0x4A8C381C258A124D(), 8f, 8f, 8f, 0, 1, 0))
									{
										if (unk_0x133460AD0F183CC9(iLocal_58))
										{
											if (unk_0xC450B06E5AAA0985(uLocal_88))
											{
												unk_0xFE54B8568B2ABD12(&uLocal_88);
											}
											if (unk_0xC450B06E5AAA0985(uLocal_90))
											{
												unk_0xFE54B8568B2ABD12(&uLocal_90);
											}
											if (unk_0xC450B06E5AAA0985(uLocal_91))
											{
												unk_0xFE54B8568B2ABD12(&uLocal_91);
											}
											if (unk_0x133460AD0F183CC9(iLocal_58))
											{
												unk_0x5C4B3034CCDA5270(iLocal_58);
											}
											if (func_106())
											{
												if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
												{
													unk_0xE5EE5C9DDF05D925(unk_0xDC8D5832207C2EAD(), 5f, 2, 0);
												}
												iLocal_47 = 6;
											}
											else
											{
												func_104();
												wait(0);
												func_114(&uLocal_120, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
												if (!unk_0x4FAFF4BCB7633475(iLocal_58))
												{
													unk_0xB5396F1FB088FE38(&uLocal_102);
													unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), 5000, 2052, 2);
													unk_0xA966E518B752B92A(0, Local_68, 1f, -1, 0.25f, 0, 38.9844f);
													unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_SMOKING", 0, 1);
													unk_0x93C0674FC00824D0(uLocal_102);
													unk_0x4BD42B0527065BB6(iLocal_58, uLocal_102);
													unk_0xD0557B139A542F12(&uLocal_102);
													unk_0x44FB298D6382876D(iLocal_58, 1);
												}
												func_35(func_109(), 1, 80, 0, 1);
												iLocal_47 = 7;
											}
										}
									}
								}
								break;
							
							case 6:
								func_34();
								break;
							
							case 7:
								func_4();
								break;
							
							case 9:
								func_117();
								break;
						}
						if (iLocal_116 && !iLocal_117)
						{
							if (iLocal_47 != 6)
							{
								if (unk_0x5266F1D2AEF6F73A(uLocal_115))
								{
									if (unk_0xBD3B265153D3BA2D(uLocal_115) > 0.85f)
									{
										if (unk_0xD9F5E1FEFD1329E4(iLocal_53, 0))
										{
											if (!unk_0x4FAFF4BCB7633475(iLocal_58))
											{
												if (!unk_0xCECDBB848D53DEB2(iLocal_58, iLocal_53, 0))
												{
													if (!unk_0x8BF5256C439DF778(iLocal_58))
													{
														unk_0x974022927CB47E68(iLocal_58);
														unk_0x73CAFD2038E812B3(iLocal_58, iLocal_53, 2);
														unk_0x44FB298D6382876D(iLocal_58, 1);
														iLocal_117 = 1;
													}
													else
													{
														iLocal_117 = 1;
													}
												}
											}
										}
									}
								}
							}
						}
						if (func_2())
						{
							if (unk_0xFC8BFE4B41177C22(iLocal_58))
							{
								unk_0x734A9F4537A31459(&iLocal_58);
							}
							func_4();
						}
						if ((iLocal_47 != 0 && iLocal_47 != 6) && iLocal_47 != 7)
						{
							if (func_1())
							{
								iLocal_47 = 9;
							}
						}
						if (iLocal_47 == 4 || iLocal_47 == 5)
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_58))
							{
								if (!unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_58, 150f, 150f, 150f, 0, 1, 0) || unk_0x9B3D4335E0EDB0BE(iLocal_58, unk_0x4A8C381C258A124D(), 1))
								{
									unk_0xD844F5E50DAB6FF7(iLocal_58, unk_0x4A8C381C258A124D(), 150f, -1, 0, 0);
									func_104();
									func_117();
								}
							}
						}
						if (iLocal_47 < 5)
						{
							unk_0x9C931A1395CC1AE9(unk_0x259BE71D8A81D4FA());
						}
						if (unk_0x4FAFF4BCB7633475(iLocal_50[0]))
						{
							if (unk_0xC450B06E5AAA0985(uLocal_89[0]))
							{
								unk_0xFE54B8568B2ABD12(&(uLocal_89[0]));
							}
						}
						if (unk_0x4FAFF4BCB7633475(iLocal_50[1]))
						{
							if (unk_0xC450B06E5AAA0985(uLocal_89[1]))
							{
								unk_0xFE54B8568B2ABD12(&(uLocal_89[1]));
							}
						}
						if (unk_0x4FAFF4BCB7633475(iLocal_58))
						{
							if (unk_0xC450B06E5AAA0985(uLocal_88))
							{
								unk_0xFE54B8568B2ABD12(&uLocal_88);
							}
						}
					}
					break;
			}
		}
		else
		{
			func_212();
		}
	}
}

int func_1()
{
	int iVar0[3];
	
	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	if (unk_0xFC8BFE4B41177C22(iLocal_50[0]))
	{
		if (unk_0x4FAFF4BCB7633475(iLocal_50[0]))
		{
			iVar0[0] = 1;
		}
	}
	else
	{
		iVar0[0] = 1;
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_50[1]))
	{
		if (unk_0x4FAFF4BCB7633475(iLocal_50[1]))
		{
			iVar0[1] = 1;
		}
	}
	else
	{
		iVar0[1] = 1;
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_58))
	{
		if (unk_0x4FAFF4BCB7633475(iLocal_58))
		{
			iVar0[2] = 1;
		}
	}
	else
	{
		iVar0[2] = 1;
	}
	if ((iVar0[0] && iVar0[1]) && iVar0[2])
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Global_32403)
	{
		func_3(4);
		return 1;
	}
	return 0;
}

void func_3(int iParam0)
{
	Global_113634 = iParam0;
}

void func_4()
{
	while (func_116())
	{
		wait(0);
	}
	while (!func_33())
	{
		wait(0);
	}
	func_8(-1, 0);
	func_5();
	func_212();
}

void func_5()
{
	func_6();
}

int func_6()
{
	if (func_7(0))
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

int func_7(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_8(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_30(iParam0))
	{
		func_29(iParam0, iParam1);
		if (!func_28(51))
		{
			func_18("RE_REWARD", 1, 0, 4000, 10000, func_21(), 0, 138, 0);
			func_17(51);
		}
		if (func_16(iParam0))
		{
			Global_113648.f_24997.f_2 = 3;
		}
		if (func_15(iParam0, iParam1) != 322)
		{
			func_9(func_15(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_113636 = iParam1;
		if (Global_113634 == 0)
		{
			if (((Global_113637 == 1 || Global_113637 == 5) || Global_113637 == 11) || Global_113637 == 25)
			{
				func_3(2);
			}
			else if ((Global_113637 == 26 || Global_113637 == 8) || Global_113637 == 17)
			{
				func_3(7);
			}
			else
			{
				func_3(1);
			}
		}
	}
}

void func_9(int iParam0, var uParam1, var uParam2)
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
		func_13((891 + iParam0), 1, -1);
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
		func_10();
	}
}

void func_10()
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
		func_12(13, floor(Global_113648.f_10196.f_3853));
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
					func_6();
				}
			}
		}
	}
}

int func_11()
{
	return Global_32163;
}

int func_12(int iParam0, int iParam1)
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

void func_13(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_14();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

int func_14()
{
	return Global_1574918;
}

int func_15(int iParam0, int iParam1)
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

int func_16(int iParam0)
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

void func_17(int iParam0)
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

void func_18(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_19(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_19(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_20();
	}
}

void func_20()
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

int func_21()
{
	func_22();
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

void func_22()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_26(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_25(unk_0x4A8C381C258A124D());
			if (func_24(iVar0) && (!func_23(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_24(Global_113648.f_2365.f_539.f_4321))
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

bool func_23(int iParam0)
{
	return Global_43257 == iParam0;
}

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_27(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

int func_28(int iParam0)
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

void func_29(int iParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_24997.f_8[iParam0]), iParam1);
}

int func_30(int iParam0)
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

int func_31()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1AF90EB93E0012D6(), 64);
	uVar1 = func_32(Var0);
	return uVar1;
}

int func_32(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_33()
{
	return 1;
}

void func_34()
{
	switch (iLocal_118)
	{
		case 0:
			func_104();
			wait(0);
			func_114(&uLocal_120, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
			iLocal_118++;
			break;
		
		case 1:
			iLocal_118++;
			break;
		
		case 2:
			iLocal_118++;
			break;
		
		case 3:
			if (!unk_0x4FAFF4BCB7633475(iLocal_58))
			{
				unk_0xB5396F1FB088FE38(&uLocal_102);
				unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), 5000, 2052, 2);
				unk_0xA966E518B752B92A(0, Local_68, 1f, -1, 0.25f, 0, 38.9844f);
				unk_0x21B9EFA4B4AA3A5B(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0x93C0674FC00824D0(uLocal_102);
				unk_0x4BD42B0527065BB6(iLocal_58, uLocal_102);
				unk_0xD0557B139A542F12(&uLocal_102);
				unk_0x44FB298D6382876D(iLocal_58, 1);
			}
			iLocal_118++;
			break;
		
		case 4:
			func_35(func_109(), 1, 80, 0, 1);
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
			func_4();
			break;
	}
}

void func_35(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_65(iParam0) == 3)
	{
		return;
	}
	if (func_65(iParam0) == 4)
	{
		return;
	}
	func_36(func_65(iParam0), 1, iParam1, iParam2, 0);
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

int func_36(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_64();
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
					func_63(99, 1);
					func_62(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_62(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_62(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_48(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_45(5))
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
							func_62(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_62(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_62(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_45(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_62(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_62(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_62(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_62(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_62(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_62(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_62(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_62(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_62(joaat("sp2_money_spent_property"), iParam3);
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
									func_62(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_62(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_62(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_62(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_62(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_62(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_45(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_62(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_62(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_62(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_62(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_62(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_62(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_44(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_63(95, iParam3);
					break;
				
				case 1:
					func_63(97, iParam3);
					break;
				
				case 2:
					func_63(96, iParam3);
					break;
			}
			func_63(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_39(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_39(bVar1);
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
					func_62(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_62(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_62(joaat("sp2_total_cash_earned"), iParam3);
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
	func_38(iParam0);
	if (Global_43257 == 15)
	{
		func_37(0);
	}
	return 1;
}

void func_37(bool bParam0)
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

void func_38(int iParam0)
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

void func_39(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_13(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_13(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_13(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_13(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_42(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_42(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_42(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_42(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_42(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_42(8277, 0, -1, 1, 0);
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
	else if (BitTest(Global_113648.f_20566.f_471, bParam0) || BitTest(Global_2359296[func_41() /*5568*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0x8744D2E3FC95740E(&(Global_113648.f_20566.f_471), bParam0);
		unk_0x8744D2E3FC95740E(&(Global_2359296[func_41() /*5568*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xCCDB0041859B85A6("COUP_RED");
		unk_0xACF853FB3F6EA7D4(func_40(bParam0));
		unk_0x5C7E2225D7451992(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_40(bool bParam0)
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

int func_41()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_42(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805029[iParam0 /*3*/][func_43(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
	}
}

int func_43(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
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

void func_44(int iParam0)
{
	func_63(93, iParam0);
	func_63(29, iParam0);
	func_63(30, iParam0);
}

int func_45(int iParam0)
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
		return func_47(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_47(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_47(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_47(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x39D1D336459711BE();
		iVar1 = func_46(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x39D1D336459711BE();
		iVar3 = func_46(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x39D1D336459711BE();
		iVar5 = func_46(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x39D1D336459711BE();
		iVar7 = func_46(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x39D1D336459711BE();
		iVar9 = func_46(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x39D1D336459711BE();
		iVar11 = func_46(8277, -1, 0);
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
	return BitTest(Global_2359296[func_41() /*5568*/].f_681.f_10, iParam0);
}

int func_46(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805029[iParam0 /*3*/][func_43(iParam1)];
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_47(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

int func_48(bool bParam0)
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
		func_12(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_49(27, 1);
	return 1;
}

int func_49(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_50(iParam0, iParam1);
}

int func_50(int iParam0, int iParam1)
{
	if (func_23(14) && !func_61(iParam0))
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
	if (func_60(&Global_4542597))
	{
		if (func_58(&Global_4542597, iParam0))
		{
			return 0;
		}
		if (func_51(&Global_4542597, iParam0))
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

int func_51(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_23(14) && !func_61(iParam1))
	{
		return 0;
	}
	if (func_58(uParam0, iParam1))
	{
		return 0;
	}
	if (func_57(uParam0) < 0f)
	{
		func_56(uParam0, 0);
	}
	func_54(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_52(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_52(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_23(14) && !func_61(iParam1))
	{
		return 0;
	}
	if (func_58(uParam0, iParam1))
	{
		return 0;
	}
	if (func_57(uParam0) < 0f)
	{
		func_56(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_53(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_53(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_54(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_55(uParam0, iVar0);
		iVar0++;
	}
	func_56(uParam0, (Global_4542596 - 0.5f));
}

void func_55(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_56(var uParam0, float fParam1)
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

float func_57(var uParam0)
{
	return uParam0->f_80;
}

bool func_58(var uParam0, int iParam1)
{
	return func_59(uParam0, iParam1) != -1;
}

int func_59(var uParam0, int iParam1)
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

bool func_60(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_61(int iParam0)
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

void func_62(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDF7F16323520B858(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x1164A75E490C27B6(iParam0, iVar0, 1);
}

void func_63(int iParam0, int iParam1)
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

void func_64()
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

int func_65(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_17;
}

int func_66()
{
	if (func_109() == 2)
	{
		if (func_67())
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

bool func_67()
{
	return Global_32402;
}

void func_68(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_61)
		{
			if (func_71(&uLocal_120, "REHOMAU", &Local_63, &Local_62, 8, 0, 0))
			{
				iLocal_61 = 0;
			}
		}
	}
	else if (!iLocal_61 && unk_0x1F9EB85925C3ECD7())
	{
		Local_63 = { func_70() };
		Local_62 = { func_69() };
		func_124();
		iLocal_61 = 1;
	}
}

struct<6> func_69()
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

struct<6> func_70()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21725 == 4)
	{
		return Global_21344;
	}
	return Var0;
}

bool func_71(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_86(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_72(sParam2, iParam4, 0);
}

int func_72(char* sParam0, int iParam1, bool bParam2)
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
					func_85();
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
		if (func_84(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_83();
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
				func_82();
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
				if (func_81())
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
			if (func_80())
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
			func_79();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_78();
		func_73();
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
		func_85();
	}
	return 0;
}

void func_73()
{
	if (!func_74())
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

int func_74()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_77())
	{
		return 0;
	}
	if (func_75(unk_0x259BE71D8A81D4FA()))
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

bool func_75(int iParam0)
{
	return func_76(iParam0, 20);
}

var func_76(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_77()
{
	return -1;
}

void func_78()
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

void func_79()
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

int func_80()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_81()
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

void func_82()
{
	if (func_23(14))
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
		Global_20383 = func_109();
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

void func_83()
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

bool func_84(int iParam0, int iParam1)
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

void func_85()
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

void func_86(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_87(struct<3> Param0)
{
	if (func_109() == 2)
	{
		if (func_67() && !Global_32405)
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

void func_88()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_58))
	{
		if (!iLocal_73)
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0xDC8D5832207C2EAD(), 0))
			{
				if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xDC8D5832207C2EAD(), 1) && unk_0xCECDBB848D53DEB2(iLocal_58, unk_0xDC8D5832207C2EAD(), 0))
				{
					func_68(0);
					func_104();
					wait(0);
					func_114(&uLocal_120, "REHOMAU", "REHOM_GETOUT", 4, 0, 0, 0);
					iLocal_73 = 1;
				}
			}
		}
		else if (!unk_0x1C2F771CDC87A3A5(unk_0xDC8D5832207C2EAD(), 0))
		{
			if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xDC8D5832207C2EAD(), 0) && unk_0xCECDBB848D53DEB2(iLocal_58, unk_0xDC8D5832207C2EAD(), 0))
			{
				iLocal_73 = 0;
			}
		}
		if (!iLocal_74)
		{
			if (unk_0x49CB27F641DC1328(unk_0x4A8C381C258A124D()))
			{
				func_68(0);
				func_104();
				wait(0);
				func_114(&uLocal_120, "REHOMAU", "REHOM_JACK", 4, 0, 0, 0);
				iLocal_74 = 1;
			}
		}
		else if (!unk_0x49CB27F641DC1328(unk_0x4A8C381C258A124D()))
		{
			iLocal_74 = 0;
		}
		if (!iLocal_75)
		{
			if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
			{
				func_68(0);
				func_104();
				wait(0);
				func_114(&uLocal_120, "REHOMAU", "REHOM_SHOOT", 4, 0, 0, 0);
				iLocal_75 = 1;
			}
		}
		else if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
		{
			iLocal_75 = 0;
		}
	}
}

void func_89()
{
	if (!func_90())
	{
		func_68(1);
	}
	if (!func_116())
	{
		switch (iLocal_96)
		{
			case 0:
				if (func_109() == 0)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_WTF_M", 4, 0, 0, 0);
				}
				else if (func_109() == 1)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_WTF_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			
			case 1:
				func_114(&uLocal_120, "REHOMAU", "REHOM_CORR", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 2:
				func_114(&uLocal_120, "REHOMAU", "REHOM_TALK", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 3:
				if (func_109() == 0)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_CAR_M", 4, 0, 0, 0);
				}
				else if (func_109() == 1)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_CAR_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			
			case 4:
				func_114(&uLocal_120, "REHOMAU", "REHOM_TALK2", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 5:
				if (func_109() == 0)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_REJ_M", 4, 0, 0, 0);
				}
				else if (func_109() == 1)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_REJ_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			
			case 6:
				func_114(&uLocal_120, "REHOMAU", "REHOM_TALK2b", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 7:
				func_114(&uLocal_120, "REHOMAU", "REHOM_TALK3", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 8:
				if (func_109() == 0)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_INT_M", 4, 0, 0, 0);
				}
				else if (func_109() == 1)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_INT_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			
			case 9:
				func_114(&uLocal_120, "REHOMAU", "REHOM_NOBAN", 4, 0, 0, 0);
				iLocal_96++;
				break;
			}
	}
}

int func_90()
{
	if (((((((((func_91("REHOM_QM") || func_91("REHOM_GETOUT")) || func_91("REHOM_SHOOT")) || func_91("REHOM_JACK")) || func_91("REHOM_WRONG")) || func_91("REHOM_CULT")) || func_91("REHOM_STOP")) || func_91("REHOM_NOVEH")) || func_91("REHOM_UNS1")) || func_91("REHOM_UNS2"))
	{
		return 1;
	}
	return 0;
}

int func_91(char* sParam0)
{
	var uVar0;
	
	if (func_116())
	{
		MemCopy(&uVar0, {func_70()}, 4);
		if (unk_0x1B79E937E91F40C3(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_92()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_58))
	{
		if (unk_0x5B3431FA66D59A4C(iLocal_58))
		{
			if (!iLocal_108)
			{
				iLocal_109 = unk_0x1DD05E817C89C737();
				iLocal_108 = 1;
			}
			else
			{
				iLocal_110 = unk_0x1DD05E817C89C737();
			}
		}
		else
		{
			iLocal_108 = 0;
		}
		if ((iLocal_110 - iLocal_109) > 180000)
		{
			if (unk_0x133460AD0F183CC9(iLocal_58))
			{
				unk_0x5C4B3034CCDA5270(iLocal_58);
				func_114(&uLocal_120, "REHOMAU", "REHOM_WK", 4, 0, 0, 0);
				func_117();
			}
		}
	}
}

void func_93()
{
	if (unk_0xD9CCFCDF70474932(unk_0x4A8C381C258A124D()))
	{
		if (!iLocal_111)
		{
			iLocal_113 = unk_0x1DD05E817C89C737();
			iLocal_111 = 1;
		}
		else
		{
			iLocal_114 = unk_0x1DD05E817C89C737();
		}
	}
	else
	{
		iLocal_114 = 0;
		iLocal_111 = 0;
		iLocal_112 = 0;
	}
	if ((iLocal_114 - iLocal_113) > 50000 && !iLocal_112)
	{
		func_68(0);
		func_104();
		wait(0);
		func_114(&uLocal_120, "REHOMAU", "REHOM_QM", 4, 0, 0, 0);
		iLocal_112 = 1;
	}
	if ((iLocal_114 - iLocal_113) > 60000 && iLocal_112)
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_58))
		{
			unk_0xD844F5E50DAB6FF7(iLocal_58, unk_0x4A8C381C258A124D(), 150f, -1, 0, 0);
			func_94(iLocal_58, 120000, 0);
			unk_0x44FB298D6382876D(iLocal_58, 1);
			if (unk_0x133460AD0F183CC9(iLocal_58))
			{
				unk_0x5C4B3034CCDA5270(iLocal_58);
			}
		}
		func_117();
	}
}

int func_94(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	iVar0 = func_97(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_96(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_95();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_44206[iVar2 /*5*/] = 0;
	Global_44206[iVar2 /*5*/].f_1 = iParam0;
	Global_44206[iVar2 /*5*/].f_2 = iParam1;
	Global_44206[iVar2 /*5*/].f_3 = iParam1;
	Global_44206[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0x4A8C381C258A124D())
	{
		Global_44444 = 1;
	}
	Global_44204++;
	return 1;
}

int func_95()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_44206[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_44206[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_97(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44232[iVar0 /*5*/].f_1)
		{
			return Global_44232[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_98()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_58))
	{
		if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_58, 8f, 8f, 8f, 0, 1, 0) || unk_0x0F00017BC718D851(unk_0x4A8C381C258A124D()))
		{
			if (unk_0xC450B06E5AAA0985(uLocal_88))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_88);
			}
			if (!unk_0x133460AD0F183CC9(iLocal_58))
			{
				unk_0x03AB73582A77DBD3(iLocal_58, unk_0xD59511AF30BE1934(unk_0x259BE71D8A81D4FA()));
				unk_0x412B9F2CF0E60079(iLocal_58, 0);
			}
			if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
			{
				if (!unk_0xC450B06E5AAA0985(uLocal_90))
				{
					uLocal_90 = func_102(Local_67, 1);
				}
				if (unk_0x0F00017BC718D851(unk_0x4A8C381C258A124D()))
				{
					if (!unk_0xC450B06E5AAA0985(uLocal_90))
					{
						uLocal_90 = func_102(Local_67, 1);
					}
				}
				if (func_109() == 2 && !func_101())
				{
					if (!unk_0xC450B06E5AAA0985(uLocal_91))
					{
						uLocal_91 = func_102(Local_69, 0);
						unk_0x4C905FB262965D5D(uLocal_91, 269);
						func_99();
					}
				}
			}
		}
		else
		{
			if (!unk_0xC450B06E5AAA0985(uLocal_88))
			{
				uLocal_88 = func_107(iLocal_58, 0, 145);
			}
			if (unk_0xC450B06E5AAA0985(uLocal_90))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_90);
			}
		}
	}
}

void func_99()
{
	if (func_109() == 2)
	{
		if (!Global_32404)
		{
			func_100("CULT_BLIP_HELP", -1);
			Global_32404 = 1;
		}
	}
}

void func_100(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_101()
{
	if (Global_113648.f_24997.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

var func_102(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0x34864AB7DA700AA6(Param0);
	unk_0x5D3946F818C6B331(uVar0, func_103(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
	unk_0xBC64B805EE071A37(uVar0, iParam1);
	return uVar0;
}

float func_103(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_104()
{
	Global_20591 = 0;
	func_105();
}

void func_105()
{
	unk_0xC78B293A5F4EACF9();
	Global_22736 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_21725 = 6;
	}
}

int func_106()
{
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		uLocal_86 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (unk_0xD9F5E1FEFD1329E4(uLocal_86, 0))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_58))
			{
				if (unk_0xF4244288C3EF3306(iLocal_58, iLocal_86))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_107(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_108(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC450B06E5AAA0985(uVar0)) && unk_0x6BA487C862DB8DDF(&(Global_2028[iParam2 /*29*/].f_3)))
	{
		unk_0x594D5D0D7071B0DE(uVar0, &(Global_2028[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_108(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_103(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
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
		unk_0x5D3946F818C6B331(uVar0, func_103(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_103(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_109()
{
	func_22();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_110()
{
	if (!func_101())
	{
		if (func_109() == 2)
		{
			Global_32402 = 1;
		}
	}
}

var func_111()
{
	return unk_0xD59511AF30BE1934(unk_0xB6B621402486C3E4());
}

int func_112()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_53))
	{
		if (((unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_53, 0) && unk_0xCECDBB848D53DEB2(iLocal_58, iLocal_53, 0)) && !unk_0xCECDBB848D53DEB2(iLocal_50[0], iLocal_53, 0)) && !unk_0xCECDBB848D53DEB2(iLocal_50[1], iLocal_53, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_113(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_114(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_86(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_72(sParam2, iParam3, 0);
}

int func_115()
{
	if (BitTest(unk_0xC5935DFB3F39785A(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_116()
{
	if (Global_21725 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_117()
{
	func_212();
}

void func_118()
{
	if (!iLocal_77)
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_50[0]))
		{
			unk_0xD0764B65C2DFEDCA(iLocal_50[0], 0);
			unk_0x974022927CB47E68(iLocal_50[0]);
			unk_0xB5396F1FB088FE38(&uLocal_102);
			unk_0x84B06A81C98DA4B8(0);
			unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
			unk_0x93C0674FC00824D0(uLocal_102);
			unk_0x4BD42B0527065BB6(iLocal_50[0], uLocal_102);
			unk_0xD0557B139A542F12(&uLocal_102);
			unk_0x44FB298D6382876D(iLocal_50[0], 1);
			if (unk_0xC450B06E5AAA0985(uLocal_89[0]))
			{
				unk_0x6A52036D51C7E18E(uLocal_89[0], false);
			}
			settimerb(0);
			iLocal_77 = 1;
		}
		else
		{
			settimerb(500);
			iLocal_77 = 1;
		}
	}
	if (!iLocal_78)
	{
		if (unk_0xC450B06E5AAA0985(uLocal_89[1]))
		{
			unk_0x6A52036D51C7E18E(uLocal_89[1], false);
		}
		func_104();
		wait(0);
		if (!unk_0x4FAFF4BCB7633475(iLocal_50[1]))
		{
			func_119(iLocal_50[1], "GENERIC_INSULT_HIGH", 24);
			unk_0xD0764B65C2DFEDCA(iLocal_50[1], 2);
			if ((unk_0x13CCB1AD131C1082(iLocal_50[1], "random@homelandsecurity", "idle_cop_ground", 3) || unk_0x5266F1D2AEF6F73A(uLocal_115)) && !unk_0x8BF5256C439DF778(iLocal_50[1]))
			{
				unk_0x72B18C9612CF3DA0(iLocal_50[1], 16);
				unk_0xB5396F1FB088FE38(&uLocal_102);
				unk_0x10425721983AE158(0, "random@homelandsecurity", "idle_to_stand_cop_ground", 4f, -2f, 1400, 8192, 0, 0, 0, 0);
				unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
				unk_0x93C0674FC00824D0(uLocal_102);
				unk_0x4BD42B0527065BB6(iLocal_50[1], uLocal_102);
				unk_0xD0557B139A542F12(&uLocal_102);
				unk_0x44FB298D6382876D(iLocal_50[1], 1);
				iLocal_78 = 1;
			}
			else
			{
				unk_0x62A5310368A20EFA(iLocal_50[1], unk_0x4A8C381C258A124D(), 0, 16);
				unk_0x44FB298D6382876D(iLocal_50[1], 1);
				iLocal_78 = 1;
			}
		}
	}
	else if (!unk_0x4FAFF4BCB7633475(iLocal_50[1]))
	{
		if (((!unk_0x13CCB1AD131C1082(iLocal_50[1], "random@homelandsecurity", "idle_cop_ground", 3) && !unk_0x13CCB1AD131C1082(iLocal_50[1], "random@homelandsecurity", "idle_to_stand_cop_ground", 1)) && unk_0x9B5C1660CCDF7189(iLocal_50[1], joaat("script_task_combat")) != 0) && unk_0x9B5C1660CCDF7189(iLocal_50[1], joaat("script_task_combat")) != 1)
		{
			iLocal_78 = 1;
		}
	}
}

void func_119(var uParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(uParam0, sParam1, func_120(iParam2), 1);
}

int func_120(int iParam0)
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

void func_121()
{
	iLocal_47 = 3;
}

void func_122()
{
	func_104();
	wait(0);
	func_114(&uLocal_120, "REHOMAU", "REHOM_AGG", 4, 0, 0, 0);
	iLocal_47 = 3;
}

void func_123()
{
	iLocal_47 = 3;
}

void func_124()
{
	Global_20591 = 0;
	func_125();
}

void func_125()
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

int func_126()
{
	iLocal_92 = 0;
	while (iLocal_92 <= 1)
	{
		if (unk_0x1C2F771CDC87A3A5(iLocal_50[iLocal_92], 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iLocal_50[iLocal_92], unk_0x4A8C381C258A124D(), 1))
			{
				return 1;
			}
		}
		iLocal_92++;
	}
	return 0;
}

void func_127()
{
	iLocal_94 = unk_0x1DD05E817C89C737();
	if (!bLocal_104)
	{
		switch (iLocal_49)
		{
			case 0:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (func_114(&uLocal_120, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
				{
					iLocal_93 = unk_0x1DD05E817C89C737();
					iLocal_49 = 1;
				}
				break;
			
			case 1:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (func_114(&uLocal_120, "REHOMAU", "REHOM_COM", 4, 0, 0, 0))
				{
					iLocal_93 = unk_0x1DD05E817C89C737();
					iLocal_49 = 2;
				}
				break;
			
			case 2:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if ((iLocal_94 - iLocal_93) > 6000)
				{
					if (func_114(&uLocal_120, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_93 = unk_0x1DD05E817C89C737();
						iLocal_49 = 3;
					}
				}
				break;
			
			case 3:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (func_114(&uLocal_120, "REHOMAU", "REHOM_COM2", 4, 0, 0, 0))
				{
					iLocal_93 = unk_0x1DD05E817C89C737();
					iLocal_49 = 4;
				}
				break;
			
			case 4:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if ((iLocal_94 - iLocal_93) > 5500)
				{
					if (func_114(&uLocal_120, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_93 = unk_0x1DD05E817C89C737();
						iLocal_49 = 5;
					}
				}
				break;
			
			case 5:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (!iLocal_83 && timera() > 5000)
				{
					unk_0xB5396F1FB088FE38(&uLocal_102);
					unk_0xE67051907958B5EB(0, iLocal_58, -1, 2054, 2);
					unk_0x0E95B96CFEFE7B61(0, iLocal_58, -1);
					unk_0x93C0674FC00824D0(uLocal_102);
					unk_0x4BD42B0527065BB6(iLocal_50[0], uLocal_102);
					unk_0x44FB298D6382876D(iLocal_50[0], 1);
					iLocal_83 = 1;
				}
				if ((iLocal_94 - iLocal_93) > 3000 || iLocal_82)
				{
					if (((unk_0xD9F5E1FEFD1329E4(iLocal_53, 0) && !unk_0x4FAFF4BCB7633475(iLocal_50[0])) && !unk_0x4FAFF4BCB7633475(iLocal_50[1])) && !unk_0x4FAFF4BCB7633475(iLocal_58))
					{
						if (unk_0x5266F1D2AEF6F73A(uLocal_115))
						{
							if (unk_0xBD3B265153D3BA2D(uLocal_115) > 0.98f)
							{
								if (!func_116())
								{
									if (unk_0x3644984C9D7B57EF(iLocal_50[0], iLocal_58, 10f))
									{
										if (func_114(&uLocal_120, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
										{
											unk_0x84B06A81C98DA4B8(iLocal_50[0]);
											uLocal_115 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
											unk_0x2DCB8CA1FE6895AB(uLocal_115, iLocal_53, 0);
											unk_0x3DA436E63AB0F541(iLocal_58, uLocal_115, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
											unk_0x3DA436E63AB0F541(iLocal_50[0], uLocal_115, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
											unk_0x3DA436E63AB0F541(iLocal_50[1], uLocal_115, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
											unk_0x5ED9595F4AC7D134(iLocal_53, "exit_car", "random@homelandsecurity", 4f, 0, 0, 0, 0, 0);
											iLocal_116 = 1;
											iLocal_93 = unk_0x1DD05E817C89C737();
											iLocal_49 = 6;
										}
									}
								}
							}
						}
					}
				}
				if (func_130())
				{
					iLocal_49 = 15;
				}
				break;
			
			case 15:
				if (((unk_0xD9F5E1FEFD1329E4(iLocal_53, 0) && !unk_0x4FAFF4BCB7633475(iLocal_50[0])) && !unk_0x4FAFF4BCB7633475(iLocal_50[1])) && !unk_0x4FAFF4BCB7633475(iLocal_58))
				{
					if (unk_0x5266F1D2AEF6F73A(uLocal_115))
					{
						if (!func_116())
						{
							if (unk_0x3644984C9D7B57EF(iLocal_50[0], iLocal_58, 10f))
							{
								if (func_114(&uLocal_120, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
								{
									unk_0x84B06A81C98DA4B8(iLocal_50[0]);
									uLocal_115 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
									unk_0x2DCB8CA1FE6895AB(uLocal_115, iLocal_53, 0);
									unk_0x3DA436E63AB0F541(iLocal_58, uLocal_115, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
									unk_0x3DA436E63AB0F541(iLocal_50[0], uLocal_115, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
									unk_0x3DA436E63AB0F541(iLocal_50[1], uLocal_115, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
									unk_0x5ED9595F4AC7D134(iLocal_53, "exit_car", "random@homelandsecurity", 2f, 0, 0, 0, 0, 0);
									iLocal_116 = 1;
									iLocal_93 = unk_0x1DD05E817C89C737();
									iLocal_49 = 6;
								}
							}
						}
					}
				}
				break;
			
			case 6:
				func_128();
				if (unk_0x5266F1D2AEF6F73A(uLocal_115))
				{
					if (unk_0xBD3B265153D3BA2D(uLocal_115) > 0.45f)
					{
						if ((unk_0xD9F5E1FEFD1329E4(iLocal_53, 0) && !unk_0x4FAFF4BCB7633475(iLocal_58)) && !unk_0x4FAFF4BCB7633475(iLocal_50[0]))
						{
						}
					}
				}
				if (unk_0x5266F1D2AEF6F73A(uLocal_115))
				{
					if (unk_0xBD3B265153D3BA2D(uLocal_115) > 0.9f)
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_53, 0))
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_50[0]))
							{
								unk_0xEBA229B2E0BB05E0(iLocal_50[0], iLocal_53, -1, -1, 1f, 9, 0);
								iLocal_49 = 7;
							}
						}
					}
				}
				break;
			
			case 7:
				func_128();
				if (unk_0x5266F1D2AEF6F73A(uLocal_115))
				{
					if (unk_0xBD3B265153D3BA2D(uLocal_115) > 0.95f)
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_53, 0))
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_50[1]))
							{
								unk_0xEBA229B2E0BB05E0(iLocal_50[1], iLocal_53, -1, 0, 1f, 9, 0);
								unk_0x44FB298D6382876D(iLocal_50[1], 1);
								iLocal_49 = 8;
							}
						}
					}
				}
				break;
			
			case 8:
				func_128();
				if ((unk_0xD9F5E1FEFD1329E4(iLocal_53, 0) && !unk_0x4FAFF4BCB7633475(iLocal_50[0])) && !unk_0x4FAFF4BCB7633475(iLocal_50[1]))
				{
					if ((unk_0xF4244288C3EF3306(iLocal_58, iLocal_53) && unk_0xF4244288C3EF3306(iLocal_50[0], iLocal_53)) && unk_0xF4244288C3EF3306(iLocal_50[1], iLocal_53))
					{
						unk_0x7C8E9DE09D4AD3FF(iLocal_50[0], iLocal_53, 15f, 786468);
						unk_0x4539850624F18A9E(iLocal_53, 1);
						bLocal_104 = true;
					}
				}
				break;
			
			case 9:
				unk_0xB5396F1FB088FE38(&uLocal_102);
				unk_0x84B06A81C98DA4B8(0);
				unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), 20000, 0, 2);
				unk_0x646DE293036A3499(0, unk_0x4A8C381C258A124D(), -1, 0);
				unk_0x93C0674FC00824D0(uLocal_102);
				if (!unk_0x4FAFF4BCB7633475(iLocal_50[0]))
				{
					unk_0x4BD42B0527065BB6(iLocal_50[0], uLocal_102);
				}
				unk_0xD0557B139A542F12(&uLocal_102);
				if (!iLocal_80)
				{
					if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 4) && !unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 3))
					{
						func_104();
						wait(0);
						func_114(&uLocal_120, "REHOMAU", "REHOM_GUN", 4, 0, 0, 0);
					}
					if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 3) && !unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 4))
					{
						func_104();
						wait(0);
						if (!unk_0x4FAFF4BCB7633475(iLocal_50[0]))
						{
							func_119(iLocal_50[0], "GUN_COOL", 24);
						}
					}
					iLocal_80 = 1;
					iLocal_100 = unk_0x1DD05E817C89C737();
				}
				iLocal_49 = 10;
				break;
			
			case 10:
				if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6) && unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_50[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_101 = unk_0x1DD05E817C89C737();
				}
				else
				{
					iLocal_49 = 13;
				}
				if (((iLocal_101 - iLocal_100) > 6000 && unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6)) && !iLocal_81)
				{
					if (func_114(&uLocal_120, "REHOMAU", "REHOM_STAY3", 4, 0, 0, 0))
					{
						iLocal_100 = unk_0x1DD05E817C89C737();
						iLocal_81 = 1;
					}
					iLocal_49 = 11;
				}
				break;
			
			case 11:
				if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6) && unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_50[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_101 = unk_0x1DD05E817C89C737();
				}
				else
				{
					iLocal_49 = 13;
				}
				if (((iLocal_101 - iLocal_100) > 9000 && unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6)) || iLocal_106)
				{
					if (func_114(&uLocal_120, "REHOMAU", "REHOM_SHOO", 4, 0, 0, 0))
					{
						iLocal_49 = 12;
					}
				}
				break;
			
			case 12:
				if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
				{
					iLocal_101 = unk_0x1DD05E817C89C737();
				}
				else
				{
					iLocal_49 = 13;
				}
				if ((iLocal_101 - iLocal_100) > 13000)
				{
					iLocal_47 = 3;
				}
				break;
			
			case 13:
				if (!unk_0x4FAFF4BCB7633475(iLocal_50[0]))
				{
					unk_0xB5396F1FB088FE38(&uLocal_102);
					unk_0x84B06A81C98DA4B8(0);
					unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), -1, 2052, 4);
					unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), -1);
					unk_0x93C0674FC00824D0(uLocal_102);
					unk_0x4BD42B0527065BB6(iLocal_50[0], uLocal_102);
					unk_0xD0557B139A542F12(&uLocal_102);
				}
				if (iLocal_107)
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_50[1]))
					{
						if (!unk_0x4FAFF4BCB7633475(iLocal_58))
						{
							if (unk_0x9B5C1660CCDF7189(iLocal_50[1], joaat("script_task_synchronized_scene")) != 1)
							{
								unk_0xB5396F1FB088FE38(&uLocal_102);
								unk_0x84B06A81C98DA4B8(0);
								unk_0x0E95B96CFEFE7B61(0, iLocal_58, 0);
								unk_0xE67051907958B5EB(0, iLocal_58, 20000, 0, 2);
								unk_0x329B82704ED2A3E3(0, iLocal_58, -1f, 0f, 0f, 1f, -1, 1036831949, 1);
								unk_0x93C0674FC00824D0(uLocal_102);
								unk_0x4BD42B0527065BB6(iLocal_50[1], uLocal_102);
								unk_0xD0557B139A542F12(&uLocal_102);
							}
						}
						else if (unk_0x9B5C1660CCDF7189(iLocal_50[1], joaat("script_task_synchronized_scene")) != 1)
						{
							unk_0xB5396F1FB088FE38(&uLocal_102);
							unk_0x84B06A81C98DA4B8(0);
							unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
							unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), 20000, 0, 2);
							unk_0x93C0674FC00824D0(uLocal_102);
							unk_0x4BD42B0527065BB6(iLocal_50[1], uLocal_102);
							unk_0xD0557B139A542F12(&uLocal_102);
						}
					}
					if (!unk_0x4FAFF4BCB7633475(iLocal_58))
					{
						if (unk_0x9B5C1660CCDF7189(iLocal_58, joaat("script_task_synchronized_scene")) != 1)
						{
							unk_0x3D948B91131AF671(iLocal_58, unk_0x4A8C381C258A124D(), -1, 0);
							unk_0x44FB298D6382876D(iLocal_58, 1);
						}
					}
				}
				iLocal_49 = 14;
				break;
			
			case 14:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_130())
				{
					if (unk_0x5266F1D2AEF6F73A(uLocal_115))
					{
						if (!iLocal_107)
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_50[1]))
							{
							}
							if (!unk_0x4FAFF4BCB7633475(iLocal_58))
							{
								unk_0x3D948B91131AF671(iLocal_58, unk_0x4A8C381C258A124D(), -1, 0);
								unk_0x44FB298D6382876D(iLocal_58, 1);
							}
							iLocal_107 = 1;
						}
					}
				}
				if (!unk_0x4FAFF4BCB7633475(iLocal_50[0]))
				{
					if (!func_116() && !iLocal_82)
					{
						if (func_115())
						{
							func_114(&uLocal_120, "REHOMAU", "REHOM_AWAY1", 4, 0, 0, 0);
						}
						else
						{
							func_114(&uLocal_120, "REHOMAU", "REHOM_AWAY2", 4, 0, 0, 0);
						}
						iLocal_82 = 1;
					}
					iLocal_83 = 0;
					settimera(0);
					iLocal_93 = (unk_0x1DD05E817C89C737() - 4500);
					iLocal_49 = 5;
				}
			}
	}
}

void func_128()
{
	if (!func_116())
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_53, 0))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_58))
			{
				if (unk_0xCECDBB848D53DEB2(iLocal_58, iLocal_53, 0))
				{
					if (func_129(iLocal_58, 0) == 2)
					{
						if (iLocal_95 < unk_0x1DD05E817C89C737())
						{
							func_114(&uLocal_120, "REHOMAU", "REHOM_FOLL", 4, 0, 0, 0);
							iLocal_95 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(3500, 4000));
						}
					}
				}
			}
		}
	}
}

int func_129(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x7F420695E3F776FB(iParam0, iParam1))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(iParam0, iParam1);
			if (unk_0xFC8BFE4B41177C22(uVar0))
			{
				iVar1 = unk_0xDC1AA2FE20EEB2E9(unk_0x4B423FAA24E8ABF0(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xC39AE5D390581AD5(iVar0, iVar3, 0))
					{
						if (unk_0xFD5C5BBD1FE92BB7(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_130()
{
	if ((!unk_0x4FAFF4BCB7633475(iLocal_50[0]) && !unk_0x4FAFF4BCB7633475(iLocal_50[1])) && !unk_0x4FAFF4BCB7633475(iLocal_58))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if ((unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_50[0], 1.5f, 1.5f, 5f, 0, 1, 2) || unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_50[1], 2.5f, 2.5f, 5f, 0, 1, 2)) || unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_58, 1.5f, 1.5f, 5f, 0, 1, 2))
			{
				return 1;
			}
		}
		else if ((unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_50[0], 0.5f, 0.5f, 5f, 0, 1, 1) || unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_50[1], 0.5f, 0.5f, 5f, 0, 1, 1)) || unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_58, 0.5f, 0.5f, 5f, 0, 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_131()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_50[1]))
	{
		if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_50[1], 6f, 6f, 6f, 0, 1, 0))
		{
			if (unk_0x3644984C9D7B57EF(iLocal_50[1], unk_0x4A8C381C258A124D(), 120f))
			{
				if (!unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!unk_0x4FAFF4BCB7633475(iLocal_50[0]))
	{
		if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_50[0], 6f, 6f, 6f, 0, 1, 0))
		{
			if (!unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_132()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_50[1]))
	{
		if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_50[1], 6f, 6f, 6f, 0, 1, 1))
		{
			if (unk_0x3644984C9D7B57EF(iLocal_50[1], unk_0x4A8C381C258A124D(), 120f))
			{
				if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!unk_0x4FAFF4BCB7633475(iLocal_50[0]))
	{
		if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_50[0], 6f, 6f, 6f, 0, 1, 1))
		{
			if (unk_0x3644984C9D7B57EF(iLocal_50[0], unk_0x4A8C381C258A124D(), 120f))
			{
				if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_133(int iParam0)
{
	if (func_136())
	{
		Global_113638 = 1;
		Global_113635 = unk_0x1DD05E817C89C737();
		if (func_16(Global_113637))
		{
			func_134(0);
		}
		unk_0xB51A8DA1DD0D2E4E(1, "RE_TITLE");
		if (iParam0 && func_16(Global_113637))
		{
			unk_0x2716F9D3A99349AB();
		}
		return 1;
	}
	return 0;
}

void func_134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113648.f_24997.f_2 < 3)
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_100(func_135(iParam0), -1);
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
					func_100(func_135(iParam0), -1);
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
					func_100(func_135(iParam0), -1);
					Global_113648.f_24997.f_4++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113644, 2);
				}
			}
			break;
	}
}

char* func_135(int iParam0)
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

int func_136()
{
	switch (func_137(&Global_32223, 0, 5, 0, unk_0x8F76B2250AC806FA()))
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

int func_137(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_141(0))
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
		if (!func_139(iParam2))
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
			func_138(uParam0, iParam4);
		}
	}
	return 2;
}

void func_138(var uParam0, int iParam1)
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

bool func_139(int iParam0)
{
	return func_140(iParam0, Global_43257);
}

int func_140(int iParam0, int iParam1)
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

int func_141(int iParam0)
{
	if (Global_43257 == 15)
	{
		return 0;
	}
	if (func_139(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_142()
{
	if (unk_0xC450B06E5AAA0985(uLocal_87))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_87);
	}
	if (!unk_0xC450B06E5AAA0985(uLocal_88))
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_58, 0))
		{
			uLocal_88 = func_107(iLocal_58, 0, 145);
			unk_0x89FE619BFBB2024B(uLocal_88, 0);
		}
	}
	else
	{
		unk_0x89FE619BFBB2024B(uLocal_88, 1);
	}
	iLocal_92 = 0;
	while (iLocal_92 <= 1)
	{
		if (!unk_0xC450B06E5AAA0985(uLocal_89[iLocal_92]))
		{
			if (!unk_0x1C2F771CDC87A3A5(iLocal_50[iLocal_92], 0))
			{
				uLocal_89[iLocal_92] = func_107(iLocal_50[iLocal_92], 0, 145);
				unk_0x89FE619BFBB2024B(uLocal_89[iLocal_92], 0);
			}
		}
		else
		{
			unk_0x89FE619BFBB2024B(uLocal_89[iLocal_92], 1);
		}
		iLocal_92++;
	}
}

int func_143()
{
	var uVar0;
	var uVar1;
	
	if (!bLocal_99)
	{
		if (unk_0xE94C7FA27FEB00DD(Local_54 - Vector(30f, 30f, 30f), Local_54 + Vector(30f, 30f, 30f), 1) || unk_0x5BF86E66F9BF0BE9(Local_54 - Vector(30f, 30f, 30f), Local_54 + Vector(30f, 30f, 30f), 1))
		{
			iLocal_48 = 2;
			return 1;
		}
		if (!unk_0x4FAFF4BCB7633475(iLocal_50[0]) && !unk_0x4FAFF4BCB7633475(iLocal_50[1]))
		{
			if (unk_0xFAA48325A90263BE(iLocal_50[0], unk_0x4A8C381C258A124D(), 20f, 20f, 20f, 0, 1, 0))
			{
				if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 7) || (unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()) && unk_0xFAA48325A90263BE(iLocal_50[0], unk_0x4A8C381C258A124D(), 6f, 6f, 6f, 0, 1, 0)))
				{
					if (((unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iLocal_50[0]) || unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iLocal_50[0])) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iLocal_50[1])) || unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iLocal_50[1]))
					{
						if (unk_0x7E54CB377175F94E(iLocal_50[0], unk_0x4A8C381C258A124D()) || unk_0x7E54CB377175F94E(iLocal_50[1], unk_0x4A8C381C258A124D()))
						{
							iLocal_48 = 2;
							return 1;
						}
					}
				}
			}
		}
		uVar0 = unk_0xDC8D5832207C2EAD();
		if (unk_0xFC8BFE4B41177C22(iLocal_53))
		{
			if (!unk_0x1C2F771CDC87A3A5(iLocal_53, 0))
			{
				if (unk_0x9B3D4335E0EDB0BE(iLocal_53, unk_0x4A8C381C258A124D(), 1))
				{
					iLocal_48 = 2;
					return 1;
				}
				if (unk_0x6A89FD77560DE959(unk_0x4A8C381C258A124D(), iLocal_53) && unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) > 0.1f)
				{
					iLocal_48 = 2;
					return 1;
				}
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_53, 0))
				{
					iLocal_48 = 2;
					return 1;
				}
				if (unk_0xD9F5E1FEFD1329E4(uVar0, 0))
				{
					if (unk_0x9B3D4335E0EDB0BE(iLocal_53, iVar0, 1))
					{
						iLocal_48 = 2;
						return 1;
					}
				}
			}
			else if (unk_0x9B3D4335E0EDB0BE(iLocal_53, unk_0x4A8C381C258A124D(), 1))
			{
				iLocal_48 = 2;
				return 1;
			}
		}
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x0595DAC15F5513F9(unk_0x4A8C381C258A124D(), joaat("towtruck")) || unk_0x0595DAC15F5513F9(unk_0x4A8C381C258A124D(), joaat("towtruck2")))
			{
				uVar1 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				if (!unk_0x1C2F771CDC87A3A5(iLocal_53, 0))
				{
					if (unk_0x4A64AADF9B40D2AF(uVar1, iLocal_53))
					{
						iLocal_48 = 2;
						return 1;
					}
				}
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iLocal_50[0]) || unk_0x1C2F771CDC87A3A5(iLocal_50[0], 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iLocal_50[0], unk_0x4A8C381C258A124D(), 1))
			{
				iLocal_48 = 5;
				return 1;
			}
			if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), iLocal_50[0]) && unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) > 0.1f)
			{
				iLocal_48 = 5;
				return 1;
			}
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (unk_0x9B3D4335E0EDB0BE(iLocal_50[0], iVar0, 1))
				{
					iLocal_48 = 5;
					return 1;
				}
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iLocal_50[1]) || unk_0x1C2F771CDC87A3A5(iLocal_50[1], 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iLocal_50[1], unk_0x4A8C381C258A124D(), 1))
			{
				iLocal_48 = 5;
				return 1;
			}
			if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), iLocal_50[1]) && unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) > 0.1f)
			{
				iLocal_48 = 5;
				return 1;
			}
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (unk_0x9B3D4335E0EDB0BE(iLocal_50[1], iVar0, 1))
				{
					iLocal_48 = 5;
					return 1;
				}
			}
		}
		if (!unk_0x1C2F771CDC87A3A5(iLocal_58, 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iLocal_58, unk_0x4A8C381C258A124D(), 1))
			{
				iLocal_48 = 4;
				return 1;
			}
			if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), iLocal_58))
			{
				iLocal_48 = 4;
				return 1;
			}
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (unk_0x9B3D4335E0EDB0BE(iLocal_58, iVar0, 1))
				{
					iLocal_48 = 4;
					return 1;
				}
			}
		}
		else if (unk_0x9B3D4335E0EDB0BE(iLocal_58, unk_0x4A8C381C258A124D(), 1))
		{
			iLocal_48 = 4;
			return 1;
		}
	}
	return 0;
}

void func_144()
{
	func_146(39, 1);
	func_146(40, 1);
	func_146(41, 1);
	func_146(42, 1);
	func_146(43, 1);
	func_146(44, 1);
	unk_0xA7B0B03284E7503C(374.869f, -1358.043f, 25.667f, 452.41f, -1423.882f, 38.337f, 0, 1, 1, 1);
	unk_0xA7B0B03284E7503C(Local_68 - Vector(20f, 20f, 20f), Local_68 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	unk_0x55F7AC4B2B875901(Local_59, 50f, 0);
	unk_0x79CA429D8B4B057A(419f, -1387f, 28f, 427f, -1370f, 29f, 0, 0);
	unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 5);
	iLocal_58 = unk_0xB1DBFEB95C0EFB88(26, iLocal_60, Local_59, 0, 1, 1);
	unk_0xAAA71DD7E9059338(iLocal_58, 1);
	unk_0x55098D9E9AD58806(iLocal_60);
	unk_0x3F58BFCF656F0DF1(iLocal_58, 0);
	unk_0x0428AFDCAA63B06E(iLocal_58, 185, 1);
	unk_0x0428AFDCAA63B06E(iLocal_58, 206, 1);
	unk_0x1CA08719184AFC6F(iLocal_58, 2, 0);
	unk_0xFD61BB3B8F1CDB6D(iLocal_58, 1);
	unk_0x397CF4F4C8B17365(iLocal_58, "REHOMGirl");
	unk_0xD1C578C204015E1F(iLocal_58, 0, 2, 1, 0);
	unk_0xD1C578C204015E1F(iLocal_58, 2, 0, 0, 0);
	unk_0xD1C578C204015E1F(iLocal_58, 3, 1, 4, 0);
	unk_0xD1C578C204015E1F(iLocal_58, 4, 0, 5, 0);
	unk_0xD1C578C204015E1F(iLocal_58, 6, 1, 0, 0);
	unk_0x06CD913C241C765E("OFFICERS", &iLocal_119);
	iLocal_92 = 0;
	while (iLocal_92 <= 1)
	{
		iLocal_50[iLocal_92] = unk_0xB1DBFEB95C0EFB88(6, iLocal_56, Local_51[iLocal_92 /*3*/], fLocal_52[iLocal_92], 1, 1);
		unk_0xAAA71DD7E9059338(iLocal_50[iLocal_92], 1);
		unk_0x55098D9E9AD58806(iLocal_56);
		unk_0x3CEA1FD137ACE2D9(iLocal_50[iLocal_92], iLocal_119);
		unk_0x0428AFDCAA63B06E(iLocal_50[iLocal_92], 42, 1);
		iLocal_92++;
	}
	unk_0xB41DEC3AAC1AA107(iLocal_50[0], joaat("weapon_pistol"), -1, 1, 1);
	unk_0xB41DEC3AAC1AA107(iLocal_50[1], joaat("weapon_pistol"), -1, 0, 1);
	unk_0xD414C47AFF81382A(5, iLocal_119, joaat("player"));
	unk_0xD414C47AFF81382A(1, iLocal_119, joaat("COP"));
	unk_0xD414C47AFF81382A(1, joaat("COP"), iLocal_119);
	iLocal_53 = unk_0x5779387E956077A6(iLocal_57, Local_54, fLocal_55, 1, 1, 0);
	unk_0xCCA6D8A84EE8C88A(iLocal_57, 1);
	unk_0x1DE99C193C7EC64B(iLocal_53, 1084227584);
	unk_0x4539850624F18A9E(iLocal_53, 1);
	func_145(&uLocal_120, 5, iLocal_50[0], "ACULTMember1", 0, 1);
	func_145(&uLocal_120, 4, iLocal_50[1], "ACULTMember2", 0, 1);
	func_145(&uLocal_120, 3, iLocal_58, "REHOMGirl", 0, 1);
	if (func_109() == 0)
	{
		func_145(&uLocal_120, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
	}
	else if (func_109() == 1)
	{
		func_145(&uLocal_120, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
	}
	uLocal_115 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
	unk_0x2DCB8CA1FE6895AB(uLocal_115, iLocal_53, 0);
	unk_0x3DA436E63AB0F541(iLocal_58, uLocal_115, "random@homelandsecurity", "idle_girl", 4f, -2f, 1, 0, 1148846080, 0);
	unk_0x3DA436E63AB0F541(iLocal_50[0], uLocal_115, "random@homelandsecurity", "idle_cop_gun", 4f, -2f, 1, 0, 1148846080, 0);
	unk_0x3DA436E63AB0F541(iLocal_50[1], uLocal_115, "random@homelandsecurity", "idle_cop_ground", 4f, -2f, 1, 0, 1148846080, 0);
	unk_0xBF3497E24DEAD835(uLocal_115, 1);
}

void func_145(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_146(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_150(iParam0, 2, 1))
		{
			func_149(iParam0, 2, 1);
		}
	}
	else if (func_150(iParam0, 2, 1))
	{
		func_147(iParam0, 2, 1);
	}
}

void func_147(int iParam0, bool bParam1, bool bParam2)
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
			uVar0 = func_46(func_148(iParam0), -1, 0);
			unk_0x8744D2E3FC95740E(&uVar0, bParam1);
			func_42(func_148(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_113648.f_668[iParam0]), bParam1);
	}
}

int func_148(int iParam0)
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

void func_149(int iParam0, int iParam1, bool bParam2)
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
			uVar0 = func_46(func_148(iParam0), -1, 0);
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, iParam1);
			func_42(func_148(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_668[iParam0]), iParam1);
	}
}

int func_150(int iParam0, int iParam1, bool bParam2)
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
			return BitTest(func_46(func_148(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113648.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_151()
{
	unk_0xEC9DAA34BBB4658C(iLocal_60);
	unk_0xEC9DAA34BBB4658C(iLocal_56);
	unk_0xEC9DAA34BBB4658C(iLocal_57);
	unk_0x80813AC549A1E8AE("random@homelandsecurity");
	if (((unk_0x6252BC0DD8A320DB(iLocal_60) && unk_0x6252BC0DD8A320DB(iLocal_56)) && unk_0x6252BC0DD8A320DB(iLocal_57)) && unk_0xE100DD4F82A51BDE("random@homelandsecurity"))
	{
		bLocal_72 = true;
	}
	else
	{
		unk_0xEC9DAA34BBB4658C(iLocal_60);
		unk_0xEC9DAA34BBB4658C(iLocal_56);
		unk_0xEC9DAA34BBB4658C(iLocal_57);
		unk_0x80813AC549A1E8AE("random@homelandsecurity");
	}
}

void func_152()
{
	iLocal_60 = joaat("a_f_y_tourist_01");
	iLocal_56 = joaat("a_m_o_acult_01");
	iLocal_57 = joaat("fugitive");
	Local_59 = { -174.0522f, 1905.611f, 197.0466f };
	Local_51[0 /*3*/] = { -174.3279f, 1903.972f, 197.0502f };
	fLocal_52[0] = 147.8596f;
	Local_51[1 /*3*/] = { -174.3233f, 1906.384f, 197.0145f };
	fLocal_52[1] = 164.5974f;
	Local_54 = { -172.4207f, 1905.183f, 197.1163f };
	fLocal_55 = 187.3899f;
	Local_67 = { 469.8768f, 2617.532f, 42.2566f };
	Local_68 = { 472.2393f, 2611.611f, 42.2676f };
	Local_69 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_71 = 1;
}

int func_153()
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_164())
		{
			return 0;
		}
	}
	if (func_160())
	{
		return 1;
	}
	if (func_154(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_154(float fParam0, bool bParam1)
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
		if (func_24(func_109()))
		{
			iVar5 = func_21();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113648.f_18576[iVar1 /*6*/], 2) && !BitTest(Global_113648.f_18576[iVar1 /*6*/], 3))
				{
					func_155(iVar1, &Var0);
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

void func_155(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_156(uParam1, "Abigail1", func_158(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 1:
			func_156(uParam1, "Abigail2", func_158(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 2:
			func_156(uParam1, "Barry1", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 3:
			func_156(uParam1, "Barry2", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 4:
			func_156(uParam1, "Barry3", func_158(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 5:
			func_156(uParam1, "Barry3A", func_158(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 6:
			func_156(uParam1, "Barry3C", func_158(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 7:
			func_156(uParam1, "Barry4", func_158(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_157(iParam0), 0, 0);
			break;
		
		case 8:
			func_156(uParam1, "Dreyfuss1", func_158(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 9:
			func_156(uParam1, "Epsilon1", func_158(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 10:
			func_156(uParam1, "Epsilon2", func_158(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 11:
			func_156(uParam1, "Epsilon3", func_158(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 12:
			func_156(uParam1, "Epsilon4", func_158(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 13:
			func_156(uParam1, "Epsilon5", func_158(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 14:
			func_156(uParam1, "Epsilon6", func_158(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 15:
			func_156(uParam1, "Epsilon7", func_158(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 16:
			func_156(uParam1, "Epsilon8", func_158(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 17:
			func_156(uParam1, "Extreme1", func_158(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 18:
			func_156(uParam1, "Extreme2", func_158(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 19:
			func_156(uParam1, "Extreme3", func_158(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 20:
			func_156(uParam1, "Extreme4", func_158(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 21:
			func_156(uParam1, "Fanatic1", func_158(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_157(iParam0), 1, 0);
			break;
		
		case 22:
			func_156(uParam1, "Fanatic2", func_158(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_157(iParam0), 1, 0);
			break;
		
		case 23:
			func_156(uParam1, "Fanatic3", func_158(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_157(iParam0), 0, 1);
			break;
		
		case 24:
			func_156(uParam1, "Hao1", func_158(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_157(iParam0), 0, 1);
			break;
		
		case 25:
			func_156(uParam1, "Hunting1", func_158(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 26:
			func_156(uParam1, "Hunting2", func_158(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 27:
			func_156(uParam1, "Josh1", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 28:
			func_156(uParam1, "Josh2", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 29:
			func_156(uParam1, "Josh3", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 30:
			func_156(uParam1, "Josh4", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 31:
			func_156(uParam1, "Maude1", func_158(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 32:
			func_156(uParam1, "Minute1", func_158(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 33:
			func_156(uParam1, "Minute2", func_158(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 34:
			func_156(uParam1, "Minute3", func_158(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 35:
			func_156(uParam1, "MrsPhilips1", func_158(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 36:
			func_156(uParam1, "MrsPhilips2", func_158(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 37:
			func_156(uParam1, "Nigel1", func_158(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 38:
			func_156(uParam1, "Nigel1A", func_158(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 39:
			func_156(uParam1, "Nigel1B", func_158(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 40:
			func_156(uParam1, "Nigel1C", func_158(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 41:
			func_156(uParam1, "Nigel1D", func_158(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 42:
			func_156(uParam1, "Nigel2", func_158(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 43:
			func_156(uParam1, "Nigel3", func_158(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 44:
			func_156(uParam1, "Omega1", func_158(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 45:
			func_156(uParam1, "Omega2", func_158(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 46:
			func_156(uParam1, "Paparazzo1", func_158(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 47:
			func_156(uParam1, "Paparazzo2", func_158(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 48:
			func_156(uParam1, "Paparazzo3", func_158(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 49:
			func_156(uParam1, "Paparazzo3A", func_158(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 50:
			func_156(uParam1, "Paparazzo3B", func_158(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 51:
			func_156(uParam1, "Paparazzo4", func_158(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 52:
			func_156(uParam1, "Rampage1", func_158(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 54:
			func_156(uParam1, "Rampage3", func_158(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 55:
			func_156(uParam1, "Rampage4", func_158(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 56:
			func_156(uParam1, "Rampage5", func_158(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 53:
			func_156(uParam1, "Rampage2", func_158(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 57:
			func_156(uParam1, "TheLastOne", func_158(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 58:
			func_156(uParam1, "Tonya1", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 59:
			func_156(uParam1, "Tonya2", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 60:
			func_156(uParam1, "Tonya3", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 61:
			func_156(uParam1, "Tonya4", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 62:
			func_156(uParam1, "Tonya5", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_156(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_157(int iParam0)
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

struct<2> func_158(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_159(iParam0) };
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

struct<2> func_159(int iParam0)
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

int func_160()
{
	if (func_163() && !func_164())
	{
		return 1;
	}
	if (func_162() && func_161())
	{
		return 1;
	}
	return 0;
}

bool func_161()
{
	return Global_113366 > 0;
}

int func_162()
{
	if (Global_97603 != -1)
	{
		return 1;
	}
	return 0;
}

int func_163()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 20);
	}
	return 0;
}

int func_164()
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

int func_165()
{
	if (!func_139(5))
	{
		return 1;
	}
	if (func_160())
	{
		return 1;
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_164())
		{
			return 0;
		}
	}
	if (func_154(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_166()
{
	if ((Global_113637 == func_31() && unk_0x9FA91AA1AC724CD0()) && Global_113638)
	{
		return 1;
	}
	return 0;
}

void func_167(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_169(iParam0);
	unk_0x21EA3DC8C16770EF(0);
	unk_0x7EA65A7D5C6CBDB5(1);
	Global_113634 = 0;
	func_168();
}

void func_168()
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

void func_169(int iParam0)
{
	Global_113637 = iParam0;
}

int func_170(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_31();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_211())
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
			if (vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_164())
			{
				return 0;
			}
		}
		if (!Global_113648.f_9087)
		{
			return 0;
		}
		if (func_7(0))
		{
			return 0;
		}
		if (func_160())
		{
			return 0;
		}
		if (func_210())
		{
			return 0;
		}
		if (Global_113637 != -1)
		{
			return 0;
		}
		if (func_24(func_109()))
		{
			if (func_154(100f, 1) != -1)
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
		if (!func_209(iParam1))
		{
			return 0;
		}
		if (func_24(func_109()))
		{
			if (func_208(func_109()) == 4 || func_208(func_109()) == 5)
			{
				return 0;
			}
		}
		if (func_24(func_109()))
		{
			if (!func_207(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_206(Global_113648.f_24997.f_43[iParam1]))
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
		if (func_205())
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
		if (!func_196(4))
		{
			return 0;
		}
		if (!func_139(5))
		{
			return 0;
		}
		if (func_195(iParam1, bParam2) && !bParam3)
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
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_195(0, 0))
		{
			return 0;
		}
		if (Global_32310)
		{
			return 0;
		}
		if (func_209(30) && !func_195(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_24(func_109()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113648.f_2365.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113648.f_2365.f_539.f_2296[iVar2];
				if (func_194(iVar4))
				{
					if (func_172(iVar2))
					{
						if (!func_171(Var3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Var3) < (210f * 210f))
							{
								if (func_109() != iVar2)
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

bool func_171(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_172(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113648.f_2365.f_539.f_2296[iParam0];
	return func_173(iVar0);
}

int func_173(int iParam0)
{
	return func_174(iParam0, 1);
}

int func_174(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_194(iParam0))
	{
		return 0;
	}
	func_175(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_175(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_176(func_187(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_176(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_186(iParam0, iParam1))
	{
		iVar0 = func_185(iParam1);
		iVar1 = func_183(iParam0);
		iVar2 = (func_183(iParam0) - func_183(iParam1));
		iVar3 = (func_185(iParam0) - func_185(iParam1));
		iVar4 = (func_182(iParam0) - func_182(iParam1));
		iVar5 = (func_181(iParam0) - func_181(iParam1));
		iVar6 = (func_180(iParam0) - func_180(iParam1));
		iVar7 = (func_179(iParam0) - func_179(iParam1));
	}
	else
	{
		iVar0 = func_185(iParam0);
		iVar1 = func_183(iParam1);
		iVar2 = (func_183(iParam1) - func_183(iParam0));
		iVar3 = (func_185(iParam1) - func_185(iParam0));
		iVar4 = (func_182(iParam1) - func_182(iParam0));
		iVar5 = (func_181(iParam1) - func_181(iParam0));
		iVar6 = (func_180(iParam1) - func_180(iParam0));
		iVar7 = (func_179(iParam1) - func_179(iParam0));
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
		iVar4 = (iVar4 + func_178(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_177(to_float(iVar0 + 1), 0f, 12f));
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

float func_177(float fParam0, float fParam1, float fParam2)
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

int func_178(int iParam0, int iParam1)
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

int func_179(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_180(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_181(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_182(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_183(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_184(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_184(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_185(int iParam0)
{
	return iParam0 & 15;
}

int func_186(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_194(iParam1) || !func_194(iParam0))
	{
		return 1;
	}
	iVar0 = func_183(iParam0);
	iVar1 = func_183(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_185(iParam0);
	iVar1 = func_185(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_182(iParam0);
	iVar1 = func_182(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_181(iParam0);
	iVar1 = func_181(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_180(iParam0);
	iVar1 = func_180(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_179(iParam0);
	iVar1 = func_179(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_187()
{
	var uVar0;
	
	func_193(&uVar0, unk_0x4BA5A16068183C5E());
	func_192(&uVar0, unk_0x18E502A71E28968C());
	func_191(&uVar0, unk_0x5295501D0862870D());
	func_190(&uVar0, unk_0xB12880C92EA6EE15());
	func_189(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_188(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_188(var uParam0, int iParam1)
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

void func_189(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_190(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_185(*uParam0);
	iVar1 = func_183(*uParam0);
	if (iParam1 < 1 || iParam1 > func_178(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_191(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_192(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_193(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_194(int iParam0)
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
	iVar0 = func_179(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_180(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_181(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_183(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_185(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_182(iParam0);
	if (iVar5 < 1 || iVar5 > func_178(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_195(int iParam0, bool bParam1)
{
	if (BitTest(Global_113648.f_24997.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0)
{
	int iVar0;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				iVar0 = func_109();
				if (!func_24(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_204()) || Global_112695) || Global_32166) || func_203()) || func_84(8, -1)) || func_202()) || func_201()) || func_200()) || func_199()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_204()) || Global_32166) || func_203()) || func_84(8, -1)) || func_200()) || func_202()) || func_201()) || func_199()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_204()) || Global_112695) || Global_32166) || func_203()) || func_84(8, -1)) || func_200()) || func_202()) || func_201()) || func_199()) || Global_113648.f_7690.f_919[iVar0] == 5) || Global_43804 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_204()) || Global_112695) || Global_32166) || func_203()) || func_84(8, -1)) || func_202()) || func_201()) || func_199()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_204() || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || func_84(8, -1)) || func_199()) || func_198()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_84(8, -1) || func_202()) || func_201()) || func_198()) || func_197())
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
							if ((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_204()) || Global_32166) || func_203()) || func_84(8, -1)) || func_201()) || func_200()) || func_199()) || Global_113648.f_7690.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || func_204()) || func_201()) || Global_112695) || Global_32166) || func_203()) || Global_44446) || func_84(8, -1)) || func_200()) || func_198()) || func_199()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1)) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_204()) || Global_112695) || Global_32166) || func_203()) || func_84(8, -1)) || func_200()) || func_198()) || func_202()) || func_201()) || func_199())
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

var func_197()
{
	return Global_100720.f_1;
}

int func_198()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 13);
	}
	return 0;
}

int func_199()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_200()
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

bool func_201()
{
	return Global_100733.f_388 > 0;
}

bool func_202()
{
	return Global_100733.f_387 > 0;
}

var func_203()
{
	return Global_1575060;
}

int func_204()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98159.f_44 == 1;
	}
	return 0;
}

int func_205()
{
	func_82();
	if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_206(int iParam0)
{
	return func_186(func_187(), iParam0);
}

int func_207(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_109();
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

int func_208(int iParam0)
{
	if (!func_24(iParam0))
	{
		return 7;
	}
	return Global_113648.f_7690.f_919[iParam0];
}

int func_209(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_211())
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

int func_210()
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

int func_211()
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

void func_212()
{
	int iVar0;
	
	if (iLocal_70)
	{
		func_226(0);
		if (Global_32406)
		{
			unk_0x86A2BC11844DEEB3("AC_STOP");
		}
		func_225();
		unk_0x830C51B62E7CD5B2();
		unk_0xE649818AF72843C4(420.5f, -1387f, 28f, 427f, -1379f, 29f, 0);
		unk_0xF58D3BBA4A469D70(unk_0x259BE71D8A81D4FA());
		unk_0x425BBE19F25A57AB(1f);
		func_104();
		if (iLocal_71)
		{
			unk_0x55098D9E9AD58806(iLocal_60);
			unk_0x55098D9E9AD58806(iLocal_56);
			unk_0x55098D9E9AD58806(iLocal_57);
			unk_0xCCA6D8A84EE8C88A(iLocal_57, 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_50)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_50[iVar0]))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_50[iVar0]))
				{
					if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						unk_0xC86A930D894F8CE2(iLocal_50[iVar0], func_224(unk_0x259BE71D8A81D4FA()), -1, 0, 0);
						unk_0x44FB298D6382876D(iLocal_50[iVar0], 1);
						if (!unk_0x4FAFF4BCB7633475(iLocal_58))
						{
							unk_0xAFC7A89C990C4339(iLocal_58, -1);
							unk_0x44FB298D6382876D(iLocal_58, 1);
						}
					}
					unk_0xAAA71DD7E9059338(iLocal_50[iVar0], 0);
				}
				unk_0xF09E30AF1B8FB379(&(iLocal_50[iVar0]));
			}
			iVar0++;
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_58))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_58))
			{
				unk_0x0428AFDCAA63B06E(iLocal_58, 317, 1);
				if (unk_0x133460AD0F183CC9(iLocal_58))
				{
					unk_0x5C4B3034CCDA5270(iLocal_58);
				}
				if (!unk_0x7F420695E3F776FB(iLocal_58, 0))
				{
					unk_0x61BB4B7411E1DF82(iLocal_58);
				}
				unk_0xAAA71DD7E9059338(iLocal_58, 0);
			}
			unk_0xF09E30AF1B8FB379(&iLocal_58);
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_53))
		{
			unk_0x68298CA6191CDFDB(&iLocal_53);
		}
		unk_0xCC1C92F7E1A3CE9D(5, 1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
			{
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
			}
		}
	}
	func_213(-1);
	unk_0xBBC29EBE6E1A48FA();
}

void func_213(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_166())
	{
		func_217(iParam0);
		unk_0xB51A8DA1DD0D2E4E(0, 0);
		Global_113639 = unk_0x1DD05E817C89C737();
		func_216(30000);
		StringCopy(&cVar0, func_215(Global_113637, 1), 64);
		if (func_30(Global_113637) > 0)
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
	func_214(&Global_32223);
	Global_113638 = 0;
	func_169(-1);
}

void func_214(var uParam0)
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

char* func_215(int iParam0, bool bParam1)
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

void func_216(int iParam0)
{
	Global_43808 = (unk_0x1DD05E817C89C737() + iParam0);
}

void func_217(int iParam0)
{
	func_218(iParam0, 0, func_223(iParam0));
}

void func_218(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_187();
	func_221(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_220(iParam0, &uVar0);
	Var1 = { func_219(&uVar0) };
}

struct<16> func_219(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_181(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_180(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_179(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_182(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_185(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_183(*uParam0), 64);
	return Var0;
}

void func_220(int iParam0, var uParam1)
{
	Global_113648.f_24997.f_43[iParam0] = *uParam1;
}

void func_221(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_183(*uParam0);
	iVar1 = func_185(*uParam0);
	iVar2 = func_182(*uParam0);
	iVar3 = func_181(*uParam0);
	iVar4 = func_180(*uParam0);
	iVar5 = func_179(*uParam0);
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
	iVar6 = func_178(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_178(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_222(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_222(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_193(uParam0, iParam1);
	func_192(uParam0, iParam2);
	func_191(uParam0, iParam3);
	func_189(uParam0, iParam5);
	func_190(uParam0, iParam4);
	func_188(uParam0, iParam6);
}

int func_223(int iParam0)
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

Vector3 func_224(var uParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(uParam0), 0);
}

void func_225()
{
	Global_32402 = 0;
	Global_32403 = 0;
	Global_32405 = 0;
	Global_32406 = 0;
	Global_32407 = 0;
}

void func_226(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_146(iVar0, bParam0);
		iVar0++;
	}
}
