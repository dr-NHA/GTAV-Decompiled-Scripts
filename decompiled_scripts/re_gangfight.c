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
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_60 = 0;
	int iLocal_61[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_62 = 0;
	var uLocal_63 = 16;
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
	struct<2> Local_229 = { 0, 5 } ;
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
	var uLocal_245 = 5;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	Local_48 = { ScriptParam_229.f_1[0 /*3*/] };
	if (unk_0x96CFB880BAC634CE(11))
	{
		func_146();
	}
	if (func_104(Local_48, -1, 0, 0, 0))
	{
		func_101(-1);
	}
	else
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	while (true)
	{
		wait(0);
		func_100();
		if (unk_0x173751E886F8E9AB())
		{
			if (iLocal_55 > unk_0x1DD05E817C89C737())
			{
				unk_0x9D0B099EEAD74270();
			}
			if (!func_99())
			{
				if (!func_99())
				{
					if (func_98())
					{
						func_146();
					}
				}
				unk_0xECF30459397D5190("RE_CGF", 0);
				switch (iLocal_44)
				{
					case 0:
						if (func_86())
						{
							func_146();
						}
						if (func_85())
						{
							iLocal_49 = 1;
							iLocal_44 = 1;
						}
						break;
					
					case 1:
						func_84();
						if (!func_83() || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
						{
							if ((!unk_0x4FAFF4BCB7633475(uLocal_58) && !unk_0x4FAFF4BCB7633475(iLocal_59[0])) && !unk_0x4FAFF4BCB7633475(iLocal_59[1]))
							{
								if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), 969.2191f, 3608.665f, 41.8758f, 100f, 80f, 20f, 0, 1, 0))
								{
									uLocal_56 = func_80(uLocal_58, 0, 145);
									unk_0x1456FD5C0C438B19(uLocal_56, 9);
									uLocal_57[0] = func_80(iLocal_59[0], 1, 145);
									uLocal_57[1] = func_80(iLocal_59[1], 1, 145);
									unk_0x89FE619BFBB2024B(uLocal_56, 0);
									unk_0x89FE619BFBB2024B(uLocal_57[0], 0);
									unk_0x89FE619BFBB2024B(uLocal_57[1], 0);
									func_70(1);
								}
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < iLocal_59)
							{
								if (!unk_0x4FAFF4BCB7633475(iLocal_59[iVar0]))
								{
									unk_0xD844F5E50DAB6FF7(iLocal_59[iVar0], unk_0x4A8C381C258A124D(), 150f, -1, 0, 0);
								}
								iVar0++;
							}
							if (!unk_0x4FAFF4BCB7633475(uLocal_58))
							{
								unk_0xD844F5E50DAB6FF7(uLocal_58, unk_0x4A8C381C258A124D(), 150f, -1, 0, 0);
							}
							func_69();
						}
						break;
				}
			}
			else
			{
				unk_0x425BBE19F25A57AB(0f);
				unk_0x9C931A1395CC1AE9(unk_0x259BE71D8A81D4FA());
				if (!unk_0x4FAFF4BCB7633475(uLocal_58))
				{
					if (unk_0x9B3D4335E0EDB0BE(uLocal_58, unk_0x4A8C381C258A124D(), 1))
					{
						unk_0xD844F5E50DAB6FF7(uLocal_58, unk_0x4A8C381C258A124D(), 150f, -1, 0, 0);
						func_69();
					}
					if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), uLocal_58, 150f, 150f, 50f, 0, 1, 0))
					{
						if (iLocal_46 >= 5 && iLocal_45 == 2)
						{
						}
						else
						{
							func_84();
							func_68();
						}
						switch (iLocal_45)
						{
							case 0:
								func_67();
								if (func_83())
								{
									bLocal_51 = true;
									iLocal_46 = 4;
								}
								break;
							
							case 1:
								if (iLocal_46 < 7 && !unk_0x4FAFF4BCB7633475(uLocal_58))
								{
									if (unk_0x3644984C9D7B57EF(unk_0x4A8C381C258A124D(), uLocal_58, 90f))
									{
										if (unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), uLocal_58) || unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), uLocal_58))
										{
											func_64();
										}
									}
								}
								func_59();
								break;
							
							case 2:
								func_9();
								break;
							
							case 3:
								func_1();
								break;
						}
					}
					else
					{
						func_69();
					}
				}
				else
				{
					if (unk_0xC450B06E5AAA0985(uLocal_56))
					{
						unk_0xFE54B8568B2ABD12(&uLocal_56);
					}
					if (((!unk_0x4FAFF4BCB7633475(iLocal_59[0]) && !unk_0x4FAFF4BCB7633475(iLocal_59[1])) && !unk_0x1C2F771CDC87A3A5(iLocal_61[0], 0)) && !unk_0x1C2F771CDC87A3A5(iLocal_61[1], 0))
					{
						func_69();
					}
					iVar1 = 0;
					iVar2 = 0;
					while (iVar2 < iLocal_59)
					{
						if (!unk_0x4FAFF4BCB7633475(iLocal_59[iVar2]))
						{
							unk_0x62A5310368A20EFA(iLocal_59[iVar2], unk_0x4A8C381C258A124D(), 0, 16);
							unk_0x44FB298D6382876D(iLocal_59[iVar2], 1);
							if (!unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_59[iVar2], 150f, 150f, 50f, 0, 1, 0))
							{
								func_69();
							}
							iVar1 = 1;
						}
						else if (unk_0xC450B06E5AAA0985(uLocal_57[iVar2]))
						{
							unk_0xFE54B8568B2ABD12(&(uLocal_57[iVar2]));
						}
						iVar2++;
					}
					if (iVar1 == 0)
					{
						func_69();
					}
				}
			}
		}
		else
		{
			func_146();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (iLocal_49 && !iLocal_54)
	{
		if (!func_6("RECGF_SHOOT"))
		{
			func_4();
		}
		if (unk_0xC450B06E5AAA0985(uLocal_56))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_56);
		}
		if (!unk_0x4FAFF4BCB7633475(uLocal_58))
		{
			unk_0x1F7539C841C2A71F(uLocal_58, 0);
			unk_0xAAA71DD7E9059338(uLocal_58, 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_59)
		{
			if (unk_0xC450B06E5AAA0985(uLocal_57[iVar0]))
			{
				unk_0xFE54B8568B2ABD12(&(uLocal_57[iVar0]));
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_59[iVar0]) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (iVar0 < 2)
				{
					if (!unk_0x1C2F771CDC87A3A5(iLocal_61[iVar0], 0))
					{
						unk_0x13DE13EA38996410(iLocal_59[iVar0], iLocal_61[iVar0], unk_0x4A8C381C258A124D(), 8, 20f, 786469, 150f, 10f, 1);
						unk_0x44FB298D6382876D(iLocal_59[iVar0], 1);
					}
					else
					{
						unk_0xD844F5E50DAB6FF7(iLocal_59[iVar0], unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
					}
				}
				else
				{
					unk_0xD844F5E50DAB6FF7(iLocal_59[iVar0], unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
				}
				unk_0xAAA71DD7E9059338(iLocal_59[iVar0], 0);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_61)
		{
			if (!unk_0x1C2F771CDC87A3A5(iLocal_61[iVar0], 0))
			{
				unk_0x68298CA6191CDFDB(&(iLocal_61[iVar0]));
				if (unk_0xBC2EE32DE886BD08("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		unk_0xB43467C43086A6A1("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		unk_0x425BBE19F25A57AB(1f);
		unk_0x2AF2D6F164BD6F5A(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 1);
		unk_0x830C51B62E7CD5B2();
		unk_0xCC1C92F7E1A3CE9D(3, 1);
		unk_0xCC1C92F7E1A3CE9D(5, 1);
		func_3(&uLocal_63, 1);
		func_3(&uLocal_63, 2);
		func_3(&uLocal_63, 3);
		func_3(&uLocal_63, 4);
		iLocal_54 = 1;
	}
	if (unk_0xED977E2AE2CB16EE(func_2(unk_0x259BE71D8A81D4FA()), Local_48, 1) > 50f)
	{
		func_146();
	}
}

Vector3 func_2(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

void func_3(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()
{
	Global_20591 = 0;
	func_5();
}

void func_5()
{
	unk_0xC78B293A5F4EACF9();
	Global_22736 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_21725 = 6;
	}
}

int func_6(char* sParam0)
{
	var uVar0;
	
	if (func_8())
	{
		MemCopy(&uVar0, {func_7()}, 4);
		if (unk_0x1B79E937E91F40C3(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_7()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21725 == 4)
	{
		return Global_21344;
	}
	return Var0;
}

int func_8()
{
	if (Global_21725 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_9()
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_46)
	{
		case 0:
			if (timerb() > 2000)
			{
				iVar0 = 0;
				while (iVar0 < iLocal_59)
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_59[iVar0]) && !unk_0x1C2F771CDC87A3A5(iLocal_61[iVar0], 0))
					{
						if (!unk_0xC450B06E5AAA0985(uLocal_57[iVar0]))
						{
							uLocal_57[iVar0] = func_80(iLocal_59[iVar0], 1, 145);
							if (unk_0x7F420695E3F776FB(iLocal_59[iVar0], 0))
							{
								if (!bLocal_51)
								{
									unk_0xD83588CA24829967(iLocal_59[iVar0], unk_0x4A8C381C258A124D(), 0, 0f, 0f, 0f, 150f, 100, 1, -753768974);
								}
								else
								{
									unk_0xB5396F1FB088FE38(&uLocal_62);
									unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
									unk_0x93C0674FC00824D0(uLocal_62);
									unk_0x4BD42B0527065BB6(iLocal_59[iVar0], uLocal_62);
									unk_0xD0557B139A542F12(&uLocal_62);
									unk_0x44FB298D6382876D(iLocal_59[iVar0], 1);
								}
							}
						}
					}
					iVar0++;
				}
				if (!func_8())
				{
					if (func_42(&uLocal_63, "RECGFAU", "RECGF_BIKERS", 4, 0, 0, 0))
					{
						iLocal_46++;
					}
				}
			}
			break;
		
		case 1:
			iVar1 = 0;
			while (iVar1 < iLocal_59)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_59[iVar1]))
				{
					if (unk_0x65FFA94B82A71741(iLocal_59[iVar1], 904.3153f, 3631.684f, 31.574f, 7f, 7f, 7f, 0, 1, 0))
					{
						if (!unk_0x1C2F771CDC87A3A5(iLocal_61[iVar1], 0))
						{
							unk_0x001B008A010F2FE6(iLocal_61[iVar1], 0);
						}
						if (unk_0x7F420695E3F776FB(iLocal_59[iVar1], 0))
						{
							unk_0xB5396F1FB088FE38(&uLocal_62);
							unk_0x092B9247AF00F5CF(0, 0, 0);
							unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
							unk_0x93C0674FC00824D0(uLocal_62);
							unk_0x4BD42B0527065BB6(iLocal_59[iVar1], uLocal_62);
							unk_0xD0557B139A542F12(&uLocal_62);
							unk_0x44FB298D6382876D(iLocal_59[iVar1], 1);
						}
					}
					if (!unk_0x7F420695E3F776FB(iLocal_59[iVar1], 0))
					{
						unk_0x62A5310368A20EFA(iLocal_59[iVar1], unk_0x4A8C381C258A124D(), 0, 16);
						unk_0x44FB298D6382876D(iLocal_59[iVar1], 1);
					}
					if (!unk_0x1C2F771CDC87A3A5(iLocal_61[iVar1], 0))
					{
						if (unk_0xD99C77F6466B9C48(iLocal_61[iVar1]))
						{
						}
					}
				}
				if (unk_0x4FAFF4BCB7633475(iLocal_59[iVar1]))
				{
					if (unk_0xC450B06E5AAA0985(uLocal_57[iVar1]))
					{
						unk_0xFE54B8568B2ABD12(&(uLocal_57[iVar1]));
					}
				}
				iVar1++;
			}
			if (((unk_0x4FAFF4BCB7633475(iLocal_59[2]) && unk_0x4FAFF4BCB7633475(iLocal_59[3])) && unk_0x4FAFF4BCB7633475(iLocal_59[4])) && unk_0x4FAFF4BCB7633475(iLocal_59[5]))
			{
				unk_0xB43467C43086A6A1("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
				iLocal_46++;
			}
			break;
		
		case 2:
			func_41(1500);
			if (!unk_0x4FAFF4BCB7633475(uLocal_58))
			{
				unk_0x974022927CB47E68(uLocal_58);
				unk_0xB5396F1FB088FE38(&uLocal_62);
				unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), -1, 2056, 2);
				unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), -1);
				unk_0x93C0674FC00824D0(uLocal_62);
				unk_0x4BD42B0527065BB6(uLocal_58, uLocal_62);
				unk_0xD0557B139A542F12(&uLocal_62);
			}
			if (!unk_0x1C2F771CDC87A3A5(uLocal_60, 0))
			{
				unk_0xE4DC7B3DD712372B(uLocal_60);
				if (!unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), uLocal_58, 5f, 5f, 5f, 0, 1, 0))
				{
					func_42(&uLocal_63, "RECGFAU", "RECGF_REWARD", 4, 0, 0, 0);
				}
			}
			iLocal_46++;
			break;
		
		case 3:
			if (!unk_0x4FAFF4BCB7633475(uLocal_58))
			{
				if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), uLocal_58, 6f, 6f, 6f, 0, 1, 0))
				{
					if (unk_0x3644984C9D7B57EF(uLocal_58, unk_0x4A8C381C258A124D(), 60f))
					{
						if (!func_8())
						{
							if (func_42(&uLocal_63, "RECGFAU", "RECGF_END", 4, 0, 0, 0))
							{
								iLocal_46++;
							}
						}
					}
				}
			}
			if (!unk_0x4FAFF4BCB7633475(uLocal_58))
			{
				if (!unk_0xFAA48325A90263BE(uLocal_58, unk_0x4A8C381C258A124D(), 120f, 120f, 120f, 0, 1, 0))
				{
					func_10();
				}
			}
			if (!unk_0x1C2F771CDC87A3A5(uLocal_60, 0))
			{
				if (unk_0x9B3D4335E0EDB0BE(uLocal_60, unk_0x4A8C381C258A124D(), 0))
				{
					func_69();
				}
			}
			break;
		
		case 4:
			iLocal_46++;
			break;
		
		case 5:
			if (!unk_0x4FAFF4BCB7633475(uLocal_58) && !unk_0x1C2F771CDC87A3A5(uLocal_60, 0))
			{
				unk_0xB5396F1FB088FE38(&uLocal_62);
				unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 1500);
				unk_0xEBA229B2E0BB05E0(0, uLocal_60, -1, -1, 2f, 8, 0);
				unk_0x5524CAF18378DF39(0, 2000);
				unk_0x10425721983AE158(0, "veh@drivebystd_ds_grenades", "drop_grenade", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x7C8E9DE09D4AD3FF(0, uLocal_60, 10f, 786603);
				unk_0x93C0674FC00824D0(uLocal_62);
				unk_0x4BD42B0527065BB6(uLocal_58, uLocal_62);
				unk_0xD0557B139A542F12(&uLocal_62);
				unk_0x44FB298D6382876D(uLocal_58, 1);
				unk_0xA80E7D11DB73C8BA(uLocal_60, 1);
				iLocal_46++;
			}
			break;
		
		case 6:
			if (!unk_0x4FAFF4BCB7633475(uLocal_58))
			{
				if (unk_0x13CCB1AD131C1082(uLocal_58, "veh@drivebystd_ds_grenades", "drop_grenade", 3))
				{
					if (unk_0x82E64DE58A6B84A8(uLocal_58, "veh@drivebystd_ds_grenades", "drop_grenade") > 0.436f && unk_0x7F420695E3F776FB(uLocal_58, 0))
					{
						unk_0x24703703CFA1C70A(unk_0x0D1381B6E0F3987D(unk_0x6EF03BE64E058E2F(uLocal_58, 0), -1f, 0f, 0f), 1000, 1, 0);
						iLocal_46++;
					}
				}
			}
			break;
		
		case 7:
			if (!func_8())
			{
				func_42(&uLocal_63, "RECGFAU", "RECGF_END2", 4, 0, 0, 0);
				func_10();
			}
			break;
	}
}

void func_10()
{
	while (func_8())
	{
		wait(0);
	}
	while (!func_40())
	{
		wait(0);
	}
	func_14(-1, 0);
	func_11();
	iLocal_45 = 3;
}

void func_11()
{
	func_12();
}

int func_12()
{
	if (func_13(0))
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

int func_13(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_14(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_38();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_37(iParam0))
	{
		func_36(iParam0, iParam1);
		if (!func_35(51))
		{
			func_25("RE_REWARD", 1, 0, 4000, 10000, func_28(), 0, 138, 0);
			func_24(51);
		}
		if (func_23(iParam0))
		{
			Global_113648.f_24997.f_2 = 3;
		}
		if (func_22(iParam0, iParam1) != 322)
		{
			func_16(func_22(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113636 = iParam1;
		if (Global_113634 == 0)
		{
			if (((Global_113637 == 1 || Global_113637 == 5) || Global_113637 == 11) || Global_113637 == 25)
			{
				func_15(2);
			}
			else if ((Global_113637 == 26 || Global_113637 == 8) || Global_113637 == 17)
			{
				func_15(7);
			}
			else
			{
				func_15(1);
			}
		}
	}
}

void func_15(int iParam0)
{
	Global_113634 = iParam0;
}

void func_16(int iParam0, var uParam1, var uParam2)
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
		func_20((891 + iParam0), 1, -1);
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
		func_17();
	}
}

void func_17()
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
		func_19(13, floor(Global_113648.f_10196.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_78558)
		{
			if (func_18() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113382 = 0;
				}
				if (!Global_63362)
				{
					func_12();
				}
			}
		}
	}
}

int func_18()
{
	return Global_32163;
}

int func_19(int iParam0, int iParam1)
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

void func_20(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

int func_21()
{
	return Global_1574918;
}

int func_22(int iParam0, int iParam1)
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

int func_23(int iParam0)
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

void func_24(int iParam0)
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

void func_25(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_26(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_26(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_27();
	}
}

void func_27()
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

int func_28()
{
	func_29();
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

void func_29()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_33(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_32(unk_0x4A8C381C258A124D());
			if (func_31(iVar0) && (!func_30(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_31(Global_113648.f_2365.f_539.f_4321))
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

bool func_30(int iParam0)
{
	return Global_43257 == iParam0;
}

bool func_31(int iParam0)
{
	return iParam0 < 3;
}

int func_32(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)
{
	if (func_31(iParam0))
	{
		return func_34(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_34(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

int func_35(int iParam0)
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

void func_36(int iParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_24997.f_8[iParam0]), iParam1);
}

int func_37(int iParam0)
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

int func_38()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1AF90EB93E0012D6(), 64);
	uVar1 = func_39(Var0);
	return uVar1;
}

int func_39(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_40()
{
	return 1;
}

void func_41(int iParam0)
{
	int iVar0;
	
	iVar0 = (unk_0x1DD05E817C89C737() + iParam0);
	while (unk_0x1DD05E817C89C737() <= iVar0)
	{
		wait(0);
		if (iLocal_55 > unk_0x1DD05E817C89C737())
		{
			unk_0x9D0B099EEAD74270();
		}
	}
}

bool func_42(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_58(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_43(sParam2, iParam3, 0);
}

int func_43(char* sParam0, int iParam1, bool bParam2)
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
					func_57();
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
		if (func_56(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_55();
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
				func_53();
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
				if (func_52())
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
			if (func_51())
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
			func_50();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_49();
		func_44();
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
		func_57();
	}
	return 0;
}

void func_44()
{
	if (!func_45())
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

int func_45()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_48())
	{
		return 0;
	}
	if (func_46(unk_0x259BE71D8A81D4FA()))
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

bool func_46(int iParam0)
{
	return func_47(iParam0, 20);
}

var func_47(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_48()
{
	return -1;
}

void func_49()
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

void func_50()
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

int func_51()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_52()
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

void func_53()
{
	if (func_30(14))
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

int func_54()
{
	func_29();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_55()
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

bool func_56(int iParam0, int iParam1)
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

void func_57()
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

void func_58(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_59()
{
	int iVar0;
	
	switch (iLocal_46)
	{
		case 0:
			if (!unk_0x4FAFF4BCB7633475(uLocal_58))
			{
				iLocal_46++;
			}
			break;
		
		case 1:
			if (!unk_0x4FAFF4BCB7633475(uLocal_58))
			{
				if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), uLocal_58, 20f, 20f, 20f, 0, 1, 0))
				{
					unk_0xE67051907958B5EB(uLocal_58, unk_0x4A8C381C258A124D(), -1, 2060, 2);
					func_42(&uLocal_63, "RECGFAU", "RECGF_THX", 4, 0, 0, 0);
					iLocal_46++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x4FAFF4BCB7633475(iLocal_58) && !unk_0x1C2F771CDC87A3A5(uLocal_60, 0))
			{
				unk_0xB5396F1FB088FE38(&uLocal_62);
				unk_0xA966E518B752B92A(0, 916.5764f, 3602.146f, 31.9262f, 1f, 40000, 1048576000, 0, 1193033728);
				unk_0x93C0674FC00824D0(uLocal_62);
				unk_0x4BD42B0527065BB6(iLocal_58, uLocal_62);
				unk_0xD0557B139A542F12(&uLocal_62);
				iLocal_46++;
			}
			break;
		
		case 3:
			if (!func_8())
			{
				if (func_54() == 0)
				{
					func_42(&uLocal_63, "RECGFAU", "RECGF_JABM", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_42(&uLocal_63, "RECGFAU", "RECGF_JABF", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_42(&uLocal_63, "RECGFAU", "RECGF_JABBER", 4, 0, 0, 0);
				}
				iLocal_46++;
			}
			break;
		
		case 4:
			if (!unk_0x4FAFF4BCB7633475(iLocal_58))
			{
				if (unk_0x65FFA94B82A71741(iLocal_58, 916.5764f, 3602.146f, 31.9262f, 3.3f, 3.3f, 3.3f, 0, 1, 0))
				{
					if (!unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_58, 8f, 8f, 8f, 0, 1, 0))
					{
						if (!func_8())
						{
							if (func_42(&uLocal_63, "RECGFAU", "RECGF_STASH", 4, 0, 0, 0))
							{
								unk_0x0E95B96CFEFE7B61(iLocal_58, unk_0x4A8C381C258A124D(), -1);
								if (!unk_0x1C2F771CDC87A3A5(uLocal_60, 0))
								{
									unk_0xE4DC7B3DD712372B(uLocal_60);
								}
								iLocal_46++;
							}
						}
					}
					else
					{
						if (!unk_0x1C2F771CDC87A3A5(uLocal_60, 0))
						{
							unk_0xE4DC7B3DD712372B(uLocal_60);
						}
						iLocal_46 = 6;
					}
				}
			}
			break;
		
		case 5:
			if (!func_8())
			{
				if (func_54() == 0)
				{
					func_42(&uLocal_63, "RECGFAU", "RECGF_STASHM", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_42(&uLocal_63, "RECGFAU", "RECGF_STASHF", 4, 0, 0, 0);
				}
				iLocal_46++;
			}
			break;
		
		case 6:
			if (!unk_0x4FAFF4BCB7633475(iLocal_58))
			{
				if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_58, 8f, 8f, 8f, 0, 1, 0))
				{
					if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) || unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
					{
						if (func_62())
						{
							func_41(1000);
							if ((!unk_0x4FAFF4BCB7633475(iLocal_58) && !unk_0x4FAFF4BCB7633475(iLocal_59[2])) && !unk_0x1C2F771CDC87A3A5(uLocal_60, 0))
							{
								unk_0xB5396F1FB088FE38(&uLocal_62);
								unk_0xFECF11FFA163942B(0, uLocal_60, -1, -1, 1f);
								unk_0xE67051907958B5EB(0, iLocal_59[2], 2000, 0, 2);
								unk_0x0E95B96CFEFE7B61(0, iLocal_59[2], 0);
								unk_0x93C0674FC00824D0(uLocal_62);
								unk_0x4BD42B0527065BB6(iLocal_58, uLocal_62);
								unk_0xD0557B139A542F12(&uLocal_62);
								func_41(2000);
								func_4();
								func_41(0);
								func_42(&uLocal_63, "RECGFAU", "RECGF_HIDE", 4, 0, 0, 0);
								if ((!unk_0x4FAFF4BCB7633475(iLocal_58) && !unk_0x1C2F771CDC87A3A5(uLocal_60, 0)) && unk_0x7F420695E3F776FB(iLocal_58, 0))
								{
									iLocal_46++;
								}
								else
								{
									if (!unk_0x4FAFF4BCB7633475(iLocal_58) && !unk_0x4FAFF4BCB7633475(iLocal_59[2]))
									{
										unk_0xB5396F1FB088FE38(&uLocal_62);
										unk_0xAFC7A89C990C4339(0, -1);
										unk_0x93C0674FC00824D0(uLocal_62);
										unk_0x4BD42B0527065BB6(iLocal_58, uLocal_62);
										unk_0xD0557B139A542F12(&uLocal_62);
									}
									bLocal_51 = false;
									settimerb(0);
									iLocal_46++;
								}
							}
						}
					}
				}
			}
			if (!unk_0x1C2F771CDC87A3A5(uLocal_60, 0))
			{
				if (unk_0x9B3D4335E0EDB0BE(uLocal_60, unk_0x4A8C381C258A124D(), 0))
				{
					func_69();
				}
			}
			break;
		
		case 7:
			if ((((!unk_0x4FAFF4BCB7633475(iLocal_58) && !unk_0x1C2F771CDC87A3A5(uLocal_60, 0)) && !unk_0xCECDBB848D53DEB2(iLocal_58, uLocal_60, 0)) && !unk_0xD6179D448A06A77F(iLocal_58, 0)) && !unk_0x3F055D2CBA242A5D(iLocal_58))
			{
			}
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_59[iVar0]) && !unk_0x1C2F771CDC87A3A5(iLocal_61[iVar0], 0))
				{
					if (((((unk_0x6051CE9D47B0B904(unk_0x4A8C381C258A124D(), (916.3351f - 100f), (3602.048f - 100f), (31.9209f - 100f), (916.3351f + 100f), (3602.048f + 100f), (31.9209f + 100f), 0, 1) || unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_59[iVar0], 5f, 5f, 5f, 0, 1, 0)) || unk_0x9B3D4335E0EDB0BE(iLocal_59[iVar0], unk_0x4A8C381C258A124D(), 1)) || unk_0x9B3D4335E0EDB0BE(iLocal_61[iVar0], unk_0x4A8C381C258A124D(), 1)) || unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), iLocal_59[iVar0])) || unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), iLocal_61[iVar0]))
					{
						bLocal_51 = true;
						settimerb(2000);
						iLocal_46 = 0;
						iLocal_45 = 2;
					}
				}
				iVar0++;
			}
			if (((unk_0x4FAFF4BCB7633475(iLocal_59[2]) && unk_0x4FAFF4BCB7633475(iLocal_59[3])) && unk_0x4FAFF4BCB7633475(iLocal_59[4])) && unk_0x4FAFF4BCB7633475(iLocal_59[5]))
			{
				iLocal_46 = 2;
				iLocal_45 = 2;
			}
			if (unk_0x65FFA94B82A71741(iLocal_59[2], 970.3641f, 3629.886f, 31.3694f, 5f, 5f, 5f, 0, 1, 0) || timerb() > 13000)
			{
				func_41(2000);
				iVar0 = 0;
				while (iVar0 < iLocal_59)
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_59[iVar0]))
					{
						if (!unk_0x1C2F771CDC87A3A5(iLocal_61[iVar0], 0))
						{
							if (unk_0xCECDBB848D53DEB2(iLocal_59[iVar0], iLocal_61[iVar0], 0))
							{
								unk_0x13DE13EA38996410(iLocal_59[iVar0], iLocal_61[iVar0], unk_0x4A8C381C258A124D(), (iVar0 - 2) + 10, 60f, 786475, 5f, 10f, 1);
							}
						}
					}
					iVar0++;
				}
				if (!unk_0x4FAFF4BCB7633475(iLocal_58))
				{
					if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_58, 15f, 15f, 15f, 0, 1, 0))
					{
						func_60();
						func_41(0);
						func_42(&uLocal_63, "RECGFAU", "RECGF_GANG", 4, 0, 0, 0);
					}
				}
				settimerb(0);
				iLocal_46 = 0;
				iLocal_45 = 2;
			}
			break;
	}
}

void func_60()
{
	Global_20591 = 0;
	func_61();
}

void func_61()
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

int func_62()
{
	int iVar0;
	
	if (((((((!unk_0xFC8BFE4B41177C22(iLocal_61[2]) && !unk_0xFC8BFE4B41177C22(iLocal_61[3])) && !unk_0xFC8BFE4B41177C22(iLocal_61[4])) && !unk_0xFC8BFE4B41177C22(iLocal_61[5])) && !unk_0xFC8BFE4B41177C22(iLocal_59[2])) && !unk_0xFC8BFE4B41177C22(iLocal_59[3])) && !unk_0xFC8BFE4B41177C22(iLocal_59[4])) && !unk_0xFC8BFE4B41177C22(iLocal_59[5]))
	{
		unk_0xEC9DAA34BBB4658C(joaat("hexer"));
		unk_0xEC9DAA34BBB4658C(joaat("g_m_y_lost_01"));
		unk_0xEC9DAA34BBB4658C(joaat("g_m_y_lost_02"));
		unk_0xCAC4020CCF361AC8("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		if (unk_0x6252BC0DD8A320DB(joaat("hexer")))
		{
			iLocal_61[2] = unk_0x5779387E956077A6(joaat("hexer"), 863.4697f, 3633.5f, 31.9874f, 290.5797f, 1, 1, 0);
			iLocal_61[3] = unk_0x5779387E956077A6(joaat("hexer"), 866.4073f, 3636.039f, 31.9514f, 270.3649f, 1, 1, 0);
			iLocal_61[4] = unk_0x5779387E956077A6(joaat("hexer"), 866.3153f, 3631.587f, 31.9545f, 276.6327f, 1, 1, 0);
			iLocal_61[5] = unk_0x5779387E956077A6(joaat("hexer"), 868.5937f, 3633.523f, 31.9622f, 267.0991f, 1, 1, 0);
			unk_0x55098D9E9AD58806(joaat("hexer"));
			unk_0xF8B40A38F93CE540(iLocal_61[2], 3);
			unk_0xF8B40A38F93CE540(iLocal_61[4], 3);
			iLocal_55 = unk_0x1DD05E817C89C737() + 1500;
		}
		if ((unk_0x6252BC0DD8A320DB(joaat("g_m_y_lost_01")) && unk_0x6252BC0DD8A320DB(joaat("g_m_y_lost_02"))) && unk_0xBC2EE32DE886BD08("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
		{
			iLocal_59[2] = unk_0x8728A378EF2B46B2(iLocal_61[2], 22, joaat("g_m_y_lost_01"), -1, 1, 1);
			iLocal_59[3] = unk_0x8728A378EF2B46B2(iLocal_61[3], 22, joaat("g_m_y_lost_02"), -1, 1, 1);
			iLocal_59[4] = unk_0x8728A378EF2B46B2(iLocal_61[4], 22, joaat("g_m_y_lost_01"), -1, 1, 1);
			iLocal_59[5] = unk_0x8728A378EF2B46B2(iLocal_61[5], 22, joaat("g_m_y_lost_02"), -1, 1, 1);
			func_63(&uLocal_63, 4, iLocal_59[4], "RECGFLost3", 0, 1);
			iLocal_55 = unk_0x1DD05E817C89C737() + 1500;
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_59[iVar0]) && !unk_0x1C2F771CDC87A3A5(iLocal_61[iVar0], 0))
				{
					unk_0x616C2EAE947E6027(iLocal_61[iVar0], "RE_COUNTRYSIDE_GANG_BIKES", 0);
					unk_0x0428AFDCAA63B06E(iLocal_59[iVar0], 137, 1);
					unk_0xC6E8E1D693021E9E(iLocal_59[iVar0], 0);
					unk_0xD0764B65C2DFEDCA(iLocal_59[iVar0], 2);
					unk_0xBE8796DB2B90A437(iLocal_59[iVar0], 50, 1);
					unk_0x139711196A42A037(iLocal_59[iVar0], 2);
					unk_0xDC914F868C070C56(iLocal_59[iVar0], 50f, 20);
					unk_0x1090EAA386FB31A8(iLocal_59[iVar0], 1);
					unk_0xC652B7E19CE29859(iLocal_59[iVar0], 13);
					unk_0x35365D1E3ADB7109(iLocal_59[iVar0], 100f);
					unk_0x25DBF9F9C6BDFFEA(iLocal_59[iVar0], 100f);
					unk_0x3CEA1FD137ACE2D9(iLocal_59[iVar0], uLocal_228);
					unk_0xAAA71DD7E9059338(iLocal_59[iVar0], 1);
					unk_0x68F395D64BC35E68(iLocal_59[iVar0], 3);
					unk_0xECF7FE1783A38672(iLocal_59[iVar0], 0);
					unk_0x3F58BFCF656F0DF1(iLocal_59[iVar0], 1);
					unk_0x87EDE48547CC8942(iLocal_59[iVar0], 1, 1000f);
					if (iVar0 > 1 && iVar0 < 5)
					{
						unk_0xB41DEC3AAC1AA107(iLocal_59[iVar0], joaat("weapon_pistol"), -1, 1, 1);
					}
					else
					{
						unk_0xB41DEC3AAC1AA107(iLocal_59[iVar0], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
					}
					unk_0xB5396F1FB088FE38(&uLocal_62);
					unk_0xCF6CC9EA0D2EFE23(0, iLocal_61[2], 966.7098f, 3633.926f, 31.3974f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0xE237FA90A8AFEE59(0, Local_48, 5000, 0, 2);
					unk_0x93C0674FC00824D0(uLocal_62);
					unk_0x4BD42B0527065BB6(iLocal_59[2], uLocal_62);
					unk_0xD0557B139A542F12(&uLocal_62);
					unk_0xB5396F1FB088FE38(&uLocal_62);
					unk_0xCF6CC9EA0D2EFE23(0, iLocal_61[3], 970.6208f, 3636.743f, 31.3666f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0xE237FA90A8AFEE59(0, Local_48, 5000, 0, 2);
					unk_0x93C0674FC00824D0(uLocal_62);
					unk_0x4BD42B0527065BB6(iLocal_59[3], uLocal_62);
					unk_0xD0557B139A542F12(&uLocal_62);
					unk_0x44FB298D6382876D(iLocal_59[3], 1);
					unk_0xB5396F1FB088FE38(&uLocal_62);
					unk_0xCF6CC9EA0D2EFE23(0, iLocal_61[4], 971.023f, 3631.225f, 31.3807f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0xE237FA90A8AFEE59(0, Local_48, 5000, 0, 2);
					unk_0x93C0674FC00824D0(uLocal_62);
					unk_0x4BD42B0527065BB6(iLocal_59[4], uLocal_62);
					unk_0xD0557B139A542F12(&uLocal_62);
					unk_0xB5396F1FB088FE38(&uLocal_62);
					unk_0xCF6CC9EA0D2EFE23(0, iLocal_61[5], 974.8073f, 3633.771f, 31.3818f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0xE237FA90A8AFEE59(0, Local_48, 5000, 0, 2);
					unk_0x93C0674FC00824D0(uLocal_62);
					unk_0x4BD42B0527065BB6(iLocal_59[5], uLocal_62);
					unk_0xD0557B139A542F12(&uLocal_62);
				}
				iVar0++;
			}
			unk_0x55098D9E9AD58806(joaat("hexer"));
			unk_0x55098D9E9AD58806(joaat("g_m_y_lost_01"));
			unk_0x55098D9E9AD58806(joaat("g_m_y_lost_02"));
			return 1;
		}
	}
	return 0;
}

void func_63(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_64()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_58))
	{
		unk_0xD844F5E50DAB6FF7(iLocal_58, unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
		unk_0x44FB298D6382876D(iLocal_58, 1);
		if (!unk_0x1C2F771CDC87A3A5(iLocal_59[0], 0) && !unk_0x1C2F771CDC87A3A5(iLocal_59[1], 0))
		{
			unk_0xD25E9BDC14A0B649(iLocal_58, 101, 0);
			unk_0x1F7539C841C2A71F(iLocal_58, 0);
			unk_0xE84EF4129A44CCA3(iLocal_59[0], iLocal_58, 1000, 0);
			unk_0xE84EF4129A44CCA3(iLocal_59[1], iLocal_58, 1000, 0);
		}
		else
		{
			func_4();
			func_41(0);
			if (!unk_0x4FAFF4BCB7633475(iLocal_58))
			{
				func_65(iLocal_58, "GENERIC_FRIGHTENED_HIGH", 24);
			}
		}
		func_41(1000);
		func_69();
	}
}

void func_65(var uParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(uParam0, sParam1, func_66(iParam2), 1);
}

int func_66(int iParam0)
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

void func_67()
{
	int iVar0;
	
	switch (iLocal_46)
	{
		case 0:
			if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_58, 45f, 45f, 20f, 0, 1, 0))
			{
				if (!func_8())
				{
					if (func_54() == 0)
					{
						func_42(&uLocal_63, "RECGFAU", "RECGF_COMM", 4, 0, 0, 0);
					}
					else if (func_54() == 1)
					{
						func_42(&uLocal_63, "RECGFAU", "RECGF_COMF", 4, 0, 0, 0);
					}
					else if (func_54() == 2)
					{
						func_42(&uLocal_63, "RECGFAU", "RECGF_COMT", 4, 0, 0, 0);
					}
					iLocal_46++;
				}
			}
			break;
		
		case 1:
			if (!unk_0x4FAFF4BCB7633475(iLocal_58))
			{
				if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_58, 40f, 40f, 20f, 0, 1, 0))
				{
					if (func_42(&uLocal_63, "RECGFAU", "RECGF_HELP", 4, 0, 0, 0))
					{
						iLocal_46++;
					}
				}
			}
			break;
		
		case 2:
			if (!func_8())
			{
				func_42(&uLocal_63, "RECGFAU", "RECGF_SHUTUP", 4, 0, 0, 0);
				settimera(0);
				iLocal_46++;
			}
			break;
		
		case 3:
			if ((!unk_0x4FAFF4BCB7633475(iLocal_58) && !unk_0x4FAFF4BCB7633475(iLocal_59[0])) && !unk_0x4FAFF4BCB7633475(iLocal_59[1]))
			{
				if ((timera() > 5000 && !iLocal_52) && !func_8())
				{
					func_42(&uLocal_63, "RECGFAU", "RECGF_PAYUP", 4, 0, 0, 0);
					iLocal_52 = 1;
				}
				if (timera() < 28000)
				{
					if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_58, 12f, 12f, 2.5f, 0, 1, 0))
					{
						if (((unk_0x7E54CB377175F94E(iLocal_59[0], unk_0x4A8C381C258A124D()) || unk_0x7E54CB377175F94E(iLocal_59[1], unk_0x4A8C381C258A124D())) || unk_0x300A997AE991C0A8(iLocal_59[0], unk_0x4A8C381C258A124D())) || unk_0x300A997AE991C0A8(iLocal_59[1], unk_0x4A8C381C258A124D()))
						{
							unk_0xE67051907958B5EB(iLocal_59[0], unk_0x4A8C381C258A124D(), 4000, 2056, 4);
							unk_0xE67051907958B5EB(iLocal_59[1], unk_0x4A8C381C258A124D(), 4000, 2056, 4);
							if (!iLocal_53)
							{
								func_4();
								func_41(0);
								if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
								{
									func_42(&uLocal_63, "RECGFAU", "RECGF_GETLOS", 4, 0, 0, 0);
								}
								else
								{
									func_42(&uLocal_63, "RECGFAU", "RECGF_BEGONE", 4, 0, 0, 0);
								}
								iLocal_53 = 1;
							}
						}
					}
					else if (!unk_0x13CCB1AD131C1082(iLocal_59[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 3))
					{
						if (!unk_0x3644984C9D7B57EF(iLocal_59[0], iLocal_58, 10f))
						{
							unk_0x646DE293036A3499(iLocal_59[0], iLocal_58, -1, 0);
						}
					}
				}
				else if (!unk_0x1C2F771CDC87A3A5(iLocal_61[0], 0) && !unk_0x1C2F771CDC87A3A5(iLocal_61[1], 0))
				{
					func_4();
					func_41(0);
					func_42(&uLocal_63, "RECGFAU", "RECGF_SHOOT", 4, 0, 0, 0);
					func_41(2000);
					func_64();
				}
			}
			break;
		
		case 4:
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_59[iVar0]))
				{
					unk_0x0FB8E752BCC547A9(iLocal_59[iVar0], 156, 1);
					unk_0x62A5310368A20EFA(iLocal_59[iVar0], unk_0x4A8C381C258A124D(), 0, 16);
					unk_0x44FB298D6382876D(iLocal_59[iVar0], 1);
				}
				iVar0++;
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_58))
			{
				unk_0xAFC7A89C990C4339(iLocal_58, -1);
			}
			iLocal_46++;
			break;
		
		case 5:
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (unk_0x4FAFF4BCB7633475(iLocal_59[iVar0]))
				{
					if (unk_0xC450B06E5AAA0985(uLocal_57[iVar0]))
					{
						unk_0xFE54B8568B2ABD12(&(uLocal_57[iVar0]));
						func_3(&uLocal_63, 2);
						func_3(&uLocal_63, 3);
					}
				}
				iVar0++;
			}
			if (unk_0x4FAFF4BCB7633475(iLocal_59[0]) && unk_0x4FAFF4BCB7633475(iLocal_59[1]))
			{
				iLocal_46 = 0;
				iLocal_45 = 1;
			}
			break;
	}
}

void func_68()
{
	if (!unk_0x7B780C491DEC834E(916.4631f, 3601.261f, 31.9327f, 3f))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0xDC8D5832207C2EAD(), 0))
		{
			if (unk_0x65FFA94B82A71741(unk_0xDC8D5832207C2EAD(), 916.4631f, 3601.261f, 31.9327f, 2f, 2f, 2f, 0, 1, 0))
			{
				unk_0xB2BD5837A8D3CEDA(unk_0xDC8D5832207C2EAD(), 915.6531f, 3595.061f, 32.0774f, 1, 0, 0, 1);
			}
		}
	}
}

void func_69()
{
	iLocal_45 = 3;
}

int func_70(int iParam0)
{
	if (func_74())
	{
		Global_113638 = 1;
		Global_113635 = unk_0x1DD05E817C89C737();
		if (func_23(Global_113637))
		{
			func_71(0);
		}
		unk_0xB51A8DA1DD0D2E4E(1, "RE_TITLE");
		if (iParam0 && func_23(Global_113637))
		{
			unk_0x2716F9D3A99349AB();
		}
		return 1;
	}
	return 0;
}

void func_71(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113648.f_24997.f_2 < 3)
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_72(func_73(iParam0), -1);
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
					func_72(func_73(iParam0), -1);
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
					func_72(func_73(iParam0), -1);
					Global_113648.f_24997.f_4++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113644, 2);
				}
			}
			break;
	}
}

void func_72(var uParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(uParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

char* func_73(int iParam0)
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

int func_74()
{
	switch (func_75(&Global_32223, 0, 5, 0, unk_0x8F76B2250AC806FA()))
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

int func_75(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_79(0))
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
		if (!func_77(iParam2))
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
			func_76(uParam0, iParam4);
		}
	}
	return 2;
}

void func_76(var uParam0, int iParam1)
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

bool func_77(int iParam0)
{
	return func_78(iParam0, Global_43257);
}

int func_78(int iParam0, int iParam1)
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

int func_79(int iParam0)
{
	if (Global_43257 == 15)
	{
		return 0;
	}
	if (func_77(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_80(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_81(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC450B06E5AAA0985(uVar0)) && unk_0x6BA487C862DB8DDF(&(Global_2028[iParam2 /*29*/].f_3)))
	{
		unk_0x594D5D0D7071B0DE(uVar0, &(Global_2028[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_81(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(uParam0);
	if (unk_0x55B80B6E7AB61270(uParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_82(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6A52036D51C7E18E(uVar0, bParam1);
		}
		else
		{
			unk_0x61183D6239A9D7B8(uVar0, 2);
		}
	}
	else if (unk_0x0101C509A6E67F99(uParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_82(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(uParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_82(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_82(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_83()
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!bLocal_51)
	{
		unk_0xD414C47AFF81382A(255, uLocal_228, joaat("player"));
		if (!unk_0x1C2F771CDC87A3A5(iLocal_59[0], 0) && !unk_0x1C2F771CDC87A3A5(iLocal_59[1], 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iLocal_59[0], unk_0x4A8C381C258A124D(), 1) || unk_0x9B3D4335E0EDB0BE(iLocal_59[1], unk_0x4A8C381C258A124D(), 1))
			{
				func_4();
				return 1;
			}
			if (!unk_0x1C2F771CDC87A3A5(unk_0xDC8D5832207C2EAD(), 0))
			{
				if (unk_0x9B3D4335E0EDB0BE(iLocal_59[0], unk_0xDC8D5832207C2EAD(), 1) || unk_0x9B3D4335E0EDB0BE(iLocal_59[1], unk_0xDC8D5832207C2EAD(), 1))
				{
					func_4();
					return 1;
				}
			}
		}
		if (!unk_0x1C2F771CDC87A3A5(iLocal_61[0], 0) && !unk_0x1C2F771CDC87A3A5(iLocal_61[1], 0))
		{
			if (((unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_61[0], 0) || unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_61[1], 0)) || unk_0x9B3D4335E0EDB0BE(iLocal_61[0], unk_0x4A8C381C258A124D(), 1)) || unk_0x9B3D4335E0EDB0BE(iLocal_61[1], unk_0x4A8C381C258A124D(), 1))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_59[0]) && !unk_0x4FAFF4BCB7633475(iLocal_59[1]))
				{
					if (func_99())
					{
						func_4();
						func_41(0);
						func_42(&uLocal_63, "RECGFAU", "RECGF_BIKES", 4, 0, 0, 0);
					}
					return 1;
				}
			}
		}
		if (unk_0x4FAFF4BCB7633475(iLocal_59[0]) || unk_0x4FAFF4BCB7633475(iLocal_59[1]))
		{
			func_4();
			return 1;
		}
		Var0 = { 15f, 15f, 15f };
		Var1 = { -15f, -15f, -15f };
		if (!unk_0x4FAFF4BCB7633475(iLocal_59[0]))
		{
			if (unk_0x398315D0C90DE6F6(unk_0x83FDC027F0BEA202(iLocal_59[0], 31086, 0f, 0f, 0f), 5f, 1))
			{
				func_4();
				return 1;
			}
			Var0 = { Var0 + unk_0x83FDC027F0BEA202(iLocal_59[0], 31086, 0f, 0f, 0f) };
			Var1 = { Var1 + unk_0x83FDC027F0BEA202(iLocal_59[0], 31086, 0f, 0f, 0f) };
			if (((unk_0x7A082DC02E5E00C1(Var1, Var0, joaat("weapon_smokegrenade"), 1) || unk_0x7A082DC02E5E00C1(Var1, Var0, joaat("weapon_grenade"), 1)) || unk_0x7A082DC02E5E00C1(Var1, Var0, joaat("weapon_grenadelauncher"), 1)) || unk_0x7A082DC02E5E00C1(Var1, Var0, joaat("weapon_stickybomb"), 1))
			{
				func_4();
				return 1;
			}
			if (unk_0x5713DE6DB59E98EB(unk_0x83FDC027F0BEA202(iLocal_59[0], 31086, 0f, 0f, 0f), 3f))
			{
				func_4();
				return 1;
			}
		}
		if (unk_0x6051CE9D47B0B904(unk_0x4A8C381C258A124D(), (973.053f - 30f), (3616.738f - 30f), (32.6181f - 30f), (973.053f + 30f), (3616.738f + 30f), (32.6181f + 30f), 0, 1))
		{
			func_4();
			return 1;
		}
		if ((!unk_0x4FAFF4BCB7633475(iLocal_58) && !unk_0x4FAFF4BCB7633475(iLocal_59[0])) && !unk_0x4FAFF4BCB7633475(iLocal_59[1]))
		{
			if (iLocal_47 != -1)
			{
				if (((unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iLocal_59[0]) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iLocal_59[1])) || unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iLocal_59[0])) || unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iLocal_59[1]))
				{
					func_4();
					return 1;
				}
			}
			if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_58, 12f, 12f, 2.5f, 0, 1, 0))
			{
				if (((unk_0x7E54CB377175F94E(iLocal_59[0], unk_0x4A8C381C258A124D()) || unk_0x7E54CB377175F94E(iLocal_59[1], unk_0x4A8C381C258A124D())) || unk_0x300A997AE991C0A8(iLocal_59[0], unk_0x4A8C381C258A124D())) || unk_0x300A997AE991C0A8(iLocal_59[1], unk_0x4A8C381C258A124D()))
				{
					if (!iLocal_50)
					{
						unk_0x646DE293036A3499(iLocal_59[0], unk_0x4A8C381C258A124D(), -1, 0);
						iLocal_50 = 1;
					}
					if (unk_0xC450B06E5AAA0985(uLocal_56))
					{
						unk_0x89FE619BFBB2024B(uLocal_56, 1);
					}
					if (unk_0xC450B06E5AAA0985(uLocal_57[0]))
					{
						unk_0x89FE619BFBB2024B(uLocal_57[0], 1);
					}
					if (unk_0xC450B06E5AAA0985(uLocal_57[1]))
					{
						unk_0x89FE619BFBB2024B(uLocal_57[1], 1);
					}
					if ((!func_8() || func_6("RECGF_SHUTUP")) || func_6("RECGF_PAYUP"))
					{
						if (iLocal_47 == -1)
						{
							iLocal_47 = unk_0x1DD05E817C89C737();
							if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
							{
								func_4();
								func_41(0);
								func_42(&uLocal_63, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
							else
							{
								func_4();
								func_41(0);
								func_42(&uLocal_63, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			else
			{
				iLocal_50 = 0;
				iLocal_47 = -1;
			}
			if (iLocal_47 != -1 && unk_0x1DD05E817C89C737() > iLocal_47 + 10000)
			{
				func_4();
				func_41(0);
				func_42(&uLocal_63, "RECGFAU", "RECGF_WARNED", 4, 0, 0, 0);
				return 1;
			}
			if (!unk_0x9B3D4335E0EDB0BE(iLocal_59[0], unk_0x4A8C381C258A124D(), 1) && !unk_0x9B3D4335E0EDB0BE(iLocal_59[1], unk_0x4A8C381C258A124D(), 1))
			{
				if (unk_0x9B3D4335E0EDB0BE(iLocal_58, unk_0x4A8C381C258A124D(), 1))
				{
					if (func_99())
					{
						func_4();
						func_41(0);
						func_42(&uLocal_63, "RECGFAU", "RECGF_DEALER", 4, 0, 0, 0);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_84()
{
	if (unk_0xD9F5E1FEFD1329E4(uLocal_60, 0))
	{
		if ((!unk_0x65FFA94B82A71741(uLocal_60, 915.7905f, 3603.449f, 31.9111f, 5f, 5f, 5f, 0, 1, 0) && !unk_0xCECDBB848D53DEB2(iLocal_58, iLocal_60, 0)) || unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_60, 1))
		{
			func_64();
		}
	}
	else
	{
		func_64();
	}
}

int func_85()
{
	int iVar0;
	
	if (((((!unk_0xFC8BFE4B41177C22(iLocal_58) && !unk_0xFC8BFE4B41177C22(iLocal_59[0])) && !unk_0xFC8BFE4B41177C22(iLocal_59[1])) && !unk_0xFC8BFE4B41177C22(iLocal_60)) && !unk_0xFC8BFE4B41177C22(iLocal_61[0])) && !unk_0xFC8BFE4B41177C22(iLocal_61[1]))
	{
		unk_0xEC9DAA34BBB4658C(joaat("a_m_m_skidrow_01"));
		unk_0xEC9DAA34BBB4658C(joaat("g_m_y_lost_01"));
		unk_0xEC9DAA34BBB4658C(joaat("g_m_y_lost_02"));
		unk_0xEC9DAA34BBB4658C(joaat("picador"));
		unk_0xEC9DAA34BBB4658C(joaat("hexer"));
		unk_0x80813AC549A1E8AE("random@countryside_gang_fight");
		unk_0x80813AC549A1E8AE("veh@drivebystd_ds_grenades");
		unk_0xA336AFF285251641("move_m@gangster@var_i");
		if (((((((unk_0x6252BC0DD8A320DB(joaat("a_m_m_skidrow_01")) && unk_0x6252BC0DD8A320DB(joaat("g_m_y_lost_01"))) && unk_0x6252BC0DD8A320DB(joaat("g_m_y_lost_02"))) && unk_0x6252BC0DD8A320DB(joaat("picador"))) && unk_0x6252BC0DD8A320DB(joaat("hexer"))) && unk_0xE100DD4F82A51BDE("random@countryside_gang_fight")) && unk_0xE100DD4F82A51BDE("veh@drivebystd_ds_grenades")) && unk_0x60C643DC13B0C72B("move_m@gangster@var_i"))
		{
			unk_0xCCA6D8A84EE8C88A(joaat("picador"), 1);
			unk_0xCCA6D8A84EE8C88A(joaat("hexer"), 1);
			unk_0x5E08BBBF87BC4886(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 0, 0, 1);
			unk_0xA7B0B03284E7503C(Local_48 - Vector(20f, 50f, 80f), Local_48 + Vector(20f, 50f, 70f), 0, 1, 1, 1);
			unk_0xCC1C92F7E1A3CE9D(3, 0);
			unk_0xCC1C92F7E1A3CE9D(5, 0);
			unk_0x06CD913C241C765E("rghLost", &uLocal_228);
			unk_0xD414C47AFF81382A(5, uLocal_228, joaat("player"));
			iLocal_58 = unk_0xB1DBFEB95C0EFB88(26, joaat("a_m_m_skidrow_01"), 973.053f, 3616.738f, 31.6181f, 110.2753f, 1, 1);
			unk_0xD1C578C204015E1F(iLocal_58, 0, 0, 1, 0);
			unk_0xD1C578C204015E1F(iLocal_58, 2, 1, 0, 0);
			unk_0xD1C578C204015E1F(iLocal_58, 3, 1, 2, 0);
			unk_0xD1C578C204015E1F(iLocal_58, 4, 0, 0, 0);
			unk_0x55098D9E9AD58806(joaat("a_m_m_skidrow_01"));
			unk_0xAAA71DD7E9059338(iLocal_58, 1);
			unk_0xBE8796DB2B90A437(iLocal_58, 17, 1);
			unk_0x3F58BFCF656F0DF1(iLocal_58, 0);
			unk_0x1F7539C841C2A71F(iLocal_58, 1);
			unk_0x0428AFDCAA63B06E(iLocal_58, 185, 1);
			unk_0x72B18C9612CF3DA0(iLocal_58, 16);
			unk_0x397CF4F4C8B17365(iLocal_58, "A_M_M_TRAMP_01_BLACK_MINI_01");
			func_63(&uLocal_63, 1, iLocal_58, "RECGFDealer", 0, 1);
			unk_0xFD61BB3B8F1CDB6D(iLocal_58, 1);
			unk_0x10425721983AE158(iLocal_58, "random@countryside_gang_fight", "gangmember_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x4669032A1DFBB449(iLocal_58, "move_m@gangster@var_i", 1048576000);
			iLocal_60 = unk_0x5779387E956077A6(joaat("picador"), 915.7905f, 3603.449f, 31.9111f, 111.9593f, 1, 1, 0);
			unk_0xD133EF7430EDCD09(iLocal_60, 37, 0);
			unk_0xBB361D7264AC4FD8(iLocal_60, 4, 0);
			unk_0x0248EA593ACD1C87(iLocal_60, 1);
			unk_0x3FEAE59CDE6D3946(iLocal_60, "WDU 696");
			iLocal_59[0] = unk_0xB1DBFEB95C0EFB88(22, joaat("g_m_y_lost_01"), 970.2217f, 3614.821f, 31.6909f, 297.4345f, 1, 1);
			func_63(&uLocal_63, 3, iLocal_59[0], "RECGFLost2", 0, 1);
			iLocal_59[1] = unk_0xB1DBFEB95C0EFB88(22, joaat("g_m_y_lost_02"), 971.504f, 3618.054f, 31.5565f, 216.9967f, 1, 1);
			func_63(&uLocal_63, 2, iLocal_59[1], "RECGFLost1", 0, 1);
			unk_0x55098D9E9AD58806(joaat("g_m_y_lost_01"));
			unk_0x55098D9E9AD58806(joaat("g_m_y_lost_02"));
			iLocal_61[0] = unk_0x5779387E956077A6(joaat("hexer"), 968.2626f, 3611.717f, 31.7874f, 296.8978f, 1, 1, 0);
			iLocal_61[1] = unk_0x5779387E956077A6(joaat("hexer"), 970.8362f, 3625.563f, 31.3415f, 212.3456f, 1, 1, 0);
			unk_0x55098D9E9AD58806(joaat("hexer"));
			unk_0x10425721983AE158(iLocal_59[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x10425721983AE158(iLocal_59[1], "random@countryside_gang_fight", "biker_01_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (iVar0 < 2)
				{
					unk_0xC6E8E1D693021E9E(iLocal_59[iVar0], 0);
					unk_0x3CEA1FD137ACE2D9(iLocal_59[iVar0], uLocal_228);
					unk_0xD0764B65C2DFEDCA(iLocal_59[iVar0], 2);
					unk_0xBE8796DB2B90A437(iLocal_59[iVar0], 50, 1);
					unk_0x1090EAA386FB31A8(iLocal_59[iVar0], 0);
					unk_0xB41DEC3AAC1AA107(iLocal_59[0], joaat("weapon_pistol"), -1, 1, 1);
					unk_0xB41DEC3AAC1AA107(iLocal_59[1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
					unk_0x44FB298D6382876D(iLocal_59[iVar0], 1);
					unk_0xAAA71DD7E9059338(iLocal_59[iVar0], 1);
					unk_0x788F35D395511DFE(iLocal_59[iVar0], 1, 1);
				}
				iVar0++;
			}
			iLocal_55 = unk_0x1DD05E817C89C737() + 1500;
			if (func_54() == 0)
			{
				func_63(&uLocal_63, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
			}
			else if (func_54() == 1)
			{
				func_63(&uLocal_63, 0, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
			}
			else if (func_54() == 2)
			{
				func_63(&uLocal_63, 0, unk_0x4A8C381C258A124D(), "TREVOR", 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

int func_86()
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_97())
		{
			return 0;
		}
	}
	if (func_93())
	{
		return 1;
	}
	if (func_87(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_87(float fParam0, bool bParam1)
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
		if (func_31(func_54()))
		{
			iVar5 = func_28();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113648.f_18576[iVar1 /*6*/], 2) && !BitTest(Global_113648.f_18576[iVar1 /*6*/], 3))
				{
					func_88(iVar1, &Var0);
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

void func_88(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_89(uParam1, "Abigail1", func_91(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 1:
			func_89(uParam1, "Abigail2", func_91(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 2:
			func_89(uParam1, "Barry1", func_91(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 3:
			func_89(uParam1, "Barry2", func_91(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 4:
			func_89(uParam1, "Barry3", func_91(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 5:
			func_89(uParam1, "Barry3A", func_91(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 6:
			func_89(uParam1, "Barry3C", func_91(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 7:
			func_89(uParam1, "Barry4", func_91(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_90(iParam0), 0, 0);
			break;
		
		case 8:
			func_89(uParam1, "Dreyfuss1", func_91(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 9:
			func_89(uParam1, "Epsilon1", func_91(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 10:
			func_89(uParam1, "Epsilon2", func_91(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 11:
			func_89(uParam1, "Epsilon3", func_91(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 12:
			func_89(uParam1, "Epsilon4", func_91(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 13:
			func_89(uParam1, "Epsilon5", func_91(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 14:
			func_89(uParam1, "Epsilon6", func_91(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 15:
			func_89(uParam1, "Epsilon7", func_91(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 16:
			func_89(uParam1, "Epsilon8", func_91(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 17:
			func_89(uParam1, "Extreme1", func_91(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 18:
			func_89(uParam1, "Extreme2", func_91(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 19:
			func_89(uParam1, "Extreme3", func_91(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 20:
			func_89(uParam1, "Extreme4", func_91(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 21:
			func_89(uParam1, "Fanatic1", func_91(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_90(iParam0), 1, 0);
			break;
		
		case 22:
			func_89(uParam1, "Fanatic2", func_91(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_90(iParam0), 1, 0);
			break;
		
		case 23:
			func_89(uParam1, "Fanatic3", func_91(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_90(iParam0), 0, 1);
			break;
		
		case 24:
			func_89(uParam1, "Hao1", func_91(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_90(iParam0), 0, 1);
			break;
		
		case 25:
			func_89(uParam1, "Hunting1", func_91(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 26:
			func_89(uParam1, "Hunting2", func_91(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 27:
			func_89(uParam1, "Josh1", func_91(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 28:
			func_89(uParam1, "Josh2", func_91(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 29:
			func_89(uParam1, "Josh3", func_91(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 30:
			func_89(uParam1, "Josh4", func_91(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 31:
			func_89(uParam1, "Maude1", func_91(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 32:
			func_89(uParam1, "Minute1", func_91(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 33:
			func_89(uParam1, "Minute2", func_91(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 34:
			func_89(uParam1, "Minute3", func_91(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 35:
			func_89(uParam1, "MrsPhilips1", func_91(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 36:
			func_89(uParam1, "MrsPhilips2", func_91(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 37:
			func_89(uParam1, "Nigel1", func_91(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 38:
			func_89(uParam1, "Nigel1A", func_91(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 39:
			func_89(uParam1, "Nigel1B", func_91(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_90(iParam0), 1, 1);
			break;
		
		case 40:
			func_89(uParam1, "Nigel1C", func_91(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_90(iParam0), 1, 1);
			break;
		
		case 41:
			func_89(uParam1, "Nigel1D", func_91(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_90(iParam0), 1, 1);
			break;
		
		case 42:
			func_89(uParam1, "Nigel2", func_91(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 43:
			func_89(uParam1, "Nigel3", func_91(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 44:
			func_89(uParam1, "Omega1", func_91(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 45:
			func_89(uParam1, "Omega2", func_91(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 46:
			func_89(uParam1, "Paparazzo1", func_91(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 47:
			func_89(uParam1, "Paparazzo2", func_91(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 48:
			func_89(uParam1, "Paparazzo3", func_91(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 49:
			func_89(uParam1, "Paparazzo3A", func_91(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 50:
			func_89(uParam1, "Paparazzo3B", func_91(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 51:
			func_89(uParam1, "Paparazzo4", func_91(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 52:
			func_89(uParam1, "Rampage1", func_91(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 54:
			func_89(uParam1, "Rampage3", func_91(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 55:
			func_89(uParam1, "Rampage4", func_91(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 56:
			func_89(uParam1, "Rampage5", func_91(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 53:
			func_89(uParam1, "Rampage2", func_91(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 57:
			func_89(uParam1, "TheLastOne", func_91(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 58:
			func_89(uParam1, "Tonya1", func_91(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 59:
			func_89(uParam1, "Tonya2", func_91(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 60:
			func_89(uParam1, "Tonya3", func_91(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 61:
			func_89(uParam1, "Tonya4", func_91(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 62:
			func_89(uParam1, "Tonya5", func_91(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_89(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_90(int iParam0)
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

struct<2> func_91(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_92(iParam0) };
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

struct<2> func_92(int iParam0)
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

int func_93()
{
	if (func_96() && !func_97())
	{
		return 1;
	}
	if (func_95() && func_94())
	{
		return 1;
	}
	return 0;
}

bool func_94()
{
	return Global_113366 > 0;
}

int func_95()
{
	if (Global_97603 != -1)
	{
		return 1;
	}
	return 0;
}

int func_96()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 20);
	}
	return 0;
}

int func_97()
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

int func_98()
{
	if (!func_77(5))
	{
		return 1;
	}
	if (func_93())
	{
		return 1;
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_97())
		{
			return 0;
		}
	}
	if (func_87(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_99()
{
	if ((Global_113637 == func_38() && unk_0x9FA91AA1AC724CD0()) && Global_113638)
	{
		return 1;
	}
	return 0;
}

void func_100()
{
}

void func_101(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_38();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_103(iParam0);
	unk_0x21EA3DC8C16770EF(0);
	unk_0x7EA65A7D5C6CBDB5(1);
	Global_113634 = 0;
	func_102();
}

void func_102()
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

void func_103(int iParam0)
{
	Global_113637 = iParam0;
}

int func_104(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_38();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_145())
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
			if (vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_97())
			{
				return 0;
			}
		}
		if (!Global_113648.f_9087)
		{
			return 0;
		}
		if (func_13(0))
		{
			return 0;
		}
		if (func_93())
		{
			return 0;
		}
		if (func_144())
		{
			return 0;
		}
		if (Global_113637 != -1)
		{
			return 0;
		}
		if (func_31(func_54()))
		{
			if (func_87(100f, 1) != -1)
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
		if (!func_143(iParam1))
		{
			return 0;
		}
		if (func_31(func_54()))
		{
			if (func_142(func_54()) == 4 || func_142(func_54()) == 5)
			{
				return 0;
			}
		}
		if (func_31(func_54()))
		{
			if (!func_141(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_140(Global_113648.f_24997.f_43[iParam1]))
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
		if (func_139())
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
		if (!func_130(4))
		{
			return 0;
		}
		if (!func_77(5))
		{
			return 0;
		}
		if (func_129(iParam1, bParam2) && !bParam3)
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
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_129(0, 0))
		{
			return 0;
		}
		if (Global_32310)
		{
			return 0;
		}
		if (func_143(30) && !func_129(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_31(func_54()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113648.f_2365.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113648.f_2365.f_539.f_2296[iVar2];
				if (func_128(iVar4))
				{
					if (func_106(iVar2))
					{
						if (!func_105(Var3, 0f, 0f, 0f, 0))
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

bool func_105(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113648.f_2365.f_539.f_2296[iParam0];
	return func_107(iVar0);
}

int func_107(int iParam0)
{
	return func_108(iParam0, 1);
}

int func_108(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_128(iParam0))
	{
		return 0;
	}
	func_109(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_109(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_110(func_121(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_110(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_120(iParam0, iParam1))
	{
		iVar0 = func_119(iParam1);
		iVar1 = func_117(iParam0);
		iVar2 = (func_117(iParam0) - func_117(iParam1));
		iVar3 = (func_119(iParam0) - func_119(iParam1));
		iVar4 = (func_116(iParam0) - func_116(iParam1));
		iVar5 = (func_115(iParam0) - func_115(iParam1));
		iVar6 = (func_114(iParam0) - func_114(iParam1));
		iVar7 = (func_113(iParam0) - func_113(iParam1));
	}
	else
	{
		iVar0 = func_119(iParam0);
		iVar1 = func_117(iParam1);
		iVar2 = (func_117(iParam1) - func_117(iParam0));
		iVar3 = (func_119(iParam1) - func_119(iParam0));
		iVar4 = (func_116(iParam1) - func_116(iParam0));
		iVar5 = (func_115(iParam1) - func_115(iParam0));
		iVar6 = (func_114(iParam1) - func_114(iParam0));
		iVar7 = (func_113(iParam1) - func_113(iParam0));
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
		iVar4 = (iVar4 + func_112(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_111(to_float(iVar0 + 1), 0f, 12f));
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

float func_111(float fParam0, float fParam1, float fParam2)
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

int func_112(int iParam0, int iParam1)
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

int func_113(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_114(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_115(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_116(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_117(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_118(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_118(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_119(int iParam0)
{
	return iParam0 & 15;
}

int func_120(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_128(iParam1) || !func_128(iParam0))
	{
		return 1;
	}
	iVar0 = func_117(iParam0);
	iVar1 = func_117(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_119(iParam0);
	iVar1 = func_119(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_116(iParam0);
	iVar1 = func_116(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_115(iParam0);
	iVar1 = func_115(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_114(iParam0);
	iVar1 = func_114(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_113(iParam0);
	iVar1 = func_113(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_121()
{
	var uVar0;
	
	func_127(&uVar0, unk_0x4BA5A16068183C5E());
	func_126(&uVar0, unk_0x18E502A71E28968C());
	func_125(&uVar0, unk_0x5295501D0862870D());
	func_124(&uVar0, unk_0xB12880C92EA6EE15());
	func_123(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_122(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_122(var uParam0, int iParam1)
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

void func_123(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_124(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_119(*uParam0);
	iVar1 = func_117(*uParam0);
	if (iParam1 < 1 || iParam1 > func_112(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_125(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_126(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_127(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_128(int iParam0)
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
	iVar0 = func_113(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_114(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_115(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_117(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_119(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_116(iParam0);
	if (iVar5 < 1 || iVar5 > func_112(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_129(int iParam0, bool bParam1)
{
	if (BitTest(Global_113648.f_24997.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)
{
	int iVar0;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				iVar0 = func_54();
				if (!func_31(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_138()) || Global_112695) || Global_32166) || func_137()) || func_56(8, -1)) || func_136()) || func_135()) || func_134()) || func_133()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_138()) || Global_32166) || func_137()) || func_56(8, -1)) || func_134()) || func_136()) || func_135()) || func_133()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_138()) || Global_112695) || Global_32166) || func_137()) || func_56(8, -1)) || func_134()) || func_136()) || func_135()) || func_133()) || Global_113648.f_7690.f_919[iVar0] == 5) || Global_43804 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_138()) || Global_112695) || Global_32166) || func_137()) || func_56(8, -1)) || func_136()) || func_135()) || func_133()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_138() || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || func_56(8, -1)) || func_133()) || func_132()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_56(8, -1) || func_136()) || func_135()) || func_132()) || func_131())
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
							if ((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_138()) || Global_32166) || func_137()) || func_56(8, -1)) || func_135()) || func_134()) || func_133()) || Global_113648.f_7690.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || func_138()) || func_135()) || Global_112695) || Global_32166) || func_137()) || Global_44446) || func_56(8, -1)) || func_134()) || func_132()) || func_133()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1)) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_138()) || Global_112695) || Global_32166) || func_137()) || func_56(8, -1)) || func_134()) || func_132()) || func_136()) || func_135()) || func_133())
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

var func_131()
{
	return Global_100720.f_1;
}

int func_132()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 13);
	}
	return 0;
}

int func_133()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_134()
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

bool func_135()
{
	return Global_100733.f_388 > 0;
}

bool func_136()
{
	return Global_100733.f_387 > 0;
}

var func_137()
{
	return Global_1575060;
}

int func_138()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98159.f_44 == 1;
	}
	return 0;
}

int func_139()
{
	func_53();
	if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_140(int iParam0)
{
	return func_120(func_121(), iParam0);
}

int func_141(int iParam0, int iParam1, int iParam2)
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

int func_142(int iParam0)
{
	if (!func_31(iParam0))
	{
		return 7;
	}
	return Global_113648.f_7690.f_919[iParam0];
}

int func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_145())
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

int func_144()
{
	var uVar0;
	
	if (Global_32315)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0xD9F5E1FEFD1329E4(uVar0, 0))
			{
				if (!unk_0x4FAFF4BCB7633475(unk_0xFD5C5BBD1FE92BB7(uVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_145()
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

void func_146()
{
	int iVar0;
	
	if (iLocal_49 && !iLocal_54)
	{
		if (!func_6("RECGF_SHOOT"))
		{
			func_4();
		}
		if (unk_0xC450B06E5AAA0985(uLocal_56))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_56);
		}
		if (!unk_0x4FAFF4BCB7633475(iLocal_58))
		{
			unk_0x0428AFDCAA63B06E(iLocal_58, 317, 1);
			unk_0x1F7539C841C2A71F(iLocal_58, 0);
			unk_0xAAA71DD7E9059338(iLocal_58, 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_59)
		{
			if (unk_0xC450B06E5AAA0985(uLocal_57[iVar0]))
			{
				unk_0xFE54B8568B2ABD12(&(uLocal_57[iVar0]));
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_59[iVar0]) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (iVar0 < 2)
				{
					if (!unk_0x1C2F771CDC87A3A5(iLocal_61[iVar0], 0))
					{
						unk_0x13DE13EA38996410(iLocal_59[iVar0], iLocal_61[iVar0], unk_0x4A8C381C258A124D(), 8, 20f, 786469, 150f, 10f, 1);
						unk_0x44FB298D6382876D(iLocal_59[iVar0], 1);
					}
					else
					{
						unk_0xD844F5E50DAB6FF7(iLocal_59[iVar0], unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
					}
				}
				else
				{
					unk_0xD844F5E50DAB6FF7(iLocal_59[iVar0], unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
				}
				unk_0xAAA71DD7E9059338(iLocal_59[iVar0], 0);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_61)
		{
			if (!unk_0x1C2F771CDC87A3A5(iLocal_61[iVar0], 0))
			{
				unk_0x68298CA6191CDFDB(&(iLocal_61[iVar0]));
				if (unk_0xBC2EE32DE886BD08("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		unk_0xB43467C43086A6A1("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		unk_0x425BBE19F25A57AB(1f);
		unk_0x2AF2D6F164BD6F5A(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 1);
		unk_0x830C51B62E7CD5B2();
		unk_0xCC1C92F7E1A3CE9D(3, 1);
		unk_0xCC1C92F7E1A3CE9D(5, 1);
		func_3(&uLocal_63, 1);
		func_3(&uLocal_63, 2);
		func_3(&uLocal_63, 3);
		func_3(&uLocal_63, 4);
	}
	func_147(-1);
	unk_0xBBC29EBE6E1A48FA();
}

void func_147(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_38();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_99())
	{
		func_151(iParam0);
		unk_0xB51A8DA1DD0D2E4E(0, 0);
		Global_113639 = unk_0x1DD05E817C89C737();
		func_150(30000);
		StringCopy(&cVar0, func_149(Global_113637, 1), 64);
		if (func_37(Global_113637) > 0)
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
	func_148(&Global_32223);
	Global_113638 = 0;
	func_103(-1);
}

void func_148(var uParam0)
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

char* func_149(int iParam0, bool bParam1)
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

void func_150(int iParam0)
{
	Global_43808 = (unk_0x1DD05E817C89C737() + iParam0);
}

void func_151(int iParam0)
{
	func_152(iParam0, 0, func_157(iParam0));
}

void func_152(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_121();
	func_155(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_154(iParam0, &uVar0);
	Var1 = { func_153(&uVar0) };
}

struct<16> func_153(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_115(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_114(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_113(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_116(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_119(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_117(*uParam0), 64);
	return Var0;
}

void func_154(int iParam0, var uParam1)
{
	Global_113648.f_24997.f_43[iParam0] = *uParam1;
}

void func_155(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_117(*uParam0);
	iVar1 = func_119(*uParam0);
	iVar2 = func_116(*uParam0);
	iVar3 = func_115(*uParam0);
	iVar4 = func_114(*uParam0);
	iVar5 = func_113(*uParam0);
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
	iVar6 = func_112(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_112(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_156(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_156(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_127(uParam0, iParam1);
	func_126(uParam0, iParam2);
	func_125(uParam0, iParam3);
	func_123(uParam0, iParam5);
	func_124(uParam0, iParam4);
	func_122(uParam0, iParam6);
}

int func_157(int iParam0)
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
