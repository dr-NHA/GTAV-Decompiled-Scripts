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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	struct<4> Local_49[10];
	bool bLocal_50 = 0;
	struct<3> Local_51 = { 0, 0, 0 } ;
	int iLocal_52 = 0;
	struct<3> Local_53 = { 0, 0, 0 } ;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	bool bLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	struct<3> Local_74 = { 0, 0, 0 } ;
	struct<3> Local_75 = { 0, 0, 0 } ;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_79 = { 0, 0, 0 } ;
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	char[] cLocal_92[8] = 0;
	char[] cLocal_93[8] = 0;
	char* sLocal_94 = NULL;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	struct<10> Local_107[16];
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	char* sLocal_114 = NULL;
	char* sLocal_115 = NULL;
	char* sLocal_116 = NULL;
	char* sLocal_117 = NULL;
	char* sLocal_118 = NULL;
	char* sLocal_119 = NULL;
	char[] cLocal_120[8] = 0;
	char* sLocal_121 = NULL;
	char* sLocal_122 = NULL;
	char[] cLocal_123[8] = 0;
	char* sLocal_124 = NULL;
	char* sLocal_125 = NULL;
	int iLocal_126 = 0;
	bool bLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	float fLocal_132 = 0f;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	struct<3> Local_136 = { 0, 0, 0 } ;
	struct<3> Local_137 = { 0, 0, 0 } ;
	struct<3> Local_138 = { 0, 0, 0 } ;
	float fLocal_139 = 0f;
	struct<3> Local_140 = { 0, 0, 0 } ;
	float fLocal_141 = 0f;
	char[] cLocal_142[8] = 0;
	char* sLocal_143 = NULL;
	char* sLocal_144 = NULL;
	char* sLocal_145 = NULL;
	char* sLocal_146 = NULL;
	char* sLocal_147 = NULL;
	char[] cLocal_148[8] = 0;
	char* sLocal_149 = NULL;
	char* sLocal_150 = NULL;
	char* sLocal_151 = NULL;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = -1;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 1000;
	var uLocal_162 = 1000;
	var uLocal_163 = 0;
	struct<147> Local_164 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_165 = 1;
	struct<18> Local_166 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	
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
	uLocal_46 = unk_0x8CC13B3BF7A9890A();
	uLocal_47 = unk_0x2A3612A4B836469E();
	bLocal_65 = 3;
	bLocal_80 = true;
	cLocal_92 = "RANDOM@ATMROBBERYGEN";
	cLocal_93 = "RANDOM@ATMROBBERYGEN";
	iLocal_101 = joaat("prop_ld_wallet_01_s");
	iLocal_102 = joaat("prop_ld_wallet_01_s");
	iLocal_133 = 500;
	iLocal_134 = -1;
	iLocal_135 = -1;
	fLocal_139 = 0f;
	fLocal_141 = 0f;
	Local_53 = { ScriptParam_166.f_1[0 /*3*/] };
	uLocal_54 = ScriptParam_166.f_17[0];
	if (unk_0x96CFB880BAC634CE(11))
	{
		if (bLocal_95)
		{
			bLocal_96 = true;
			func_294(0);
		}
		else
		{
			func_276();
		}
	}
	if (vdist(Local_53, -203.758f, -861.738f, 29.2684f) < 5f)
	{
		bLocal_65 = true;
	}
	else if (vdist(Local_53, -2957.61f, 488.29f, 14.47f) < 5f)
	{
		bLocal_65 = true;
	}
	else if (vdist(Local_53, 288.973f, -1256.79f, 28.4407f) < 5f)
	{
		bLocal_65 = 2;
	}
	else if (vdist(Local_53, -3043.93f, 594.84f, 6.6115f) < 5f)
	{
		bLocal_65 = 3;
	}
	else if (vdist(Local_53, 174.715f, 6637.77f, 30.5733f) < 5f)
	{
		bLocal_65 = 4;
	}
	else
	{
		bLocal_65 = 5;
	}
	if (func_234(Local_53, 1, bLocal_65, 1, 0))
	{
		func_231(-1);
	}
	else
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	settimera(0);
	func_230();
	while (true)
	{
		wait(0);
		func_229();
		func_228(uLocal_58, &uLocal_64);
		func_225(&Local_164);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x9C931A1395CC1AE9(unk_0x259BE71D8A81D4FA());
		}
		if (!func_222())
		{
			if (func_221())
			{
				func_276();
			}
			if (unk_0x173751E886F8E9AB())
			{
				switch (iLocal_52)
				{
					case 0:
						if (func_195())
						{
							iLocal_52 = 1;
						}
						break;
					
					case 1:
						func_194();
						if (iLocal_69 == 0)
						{
							iLocal_69 = unk_0x18B384412B836744(101, Local_53, 30000f);
						}
						if (unk_0xFC8BFE4B41177C22(iLocal_55))
						{
						}
						if (unk_0xFC8BFE4B41177C22(iLocal_56))
						{
						}
						if (!unk_0x4FAFF4BCB7633475(iLocal_55))
						{
							if (unk_0x4FAFF4BCB7633475(iLocal_56))
							{
								unk_0xFD251F92B546F389(iLocal_55, Local_53, 200f, -1, 0, 0);
								unk_0x44FB298D6382876D(iLocal_55, 1);
								wait(0);
								func_276();
							}
							if (!unk_0x4FAFF4BCB7633475(iLocal_56))
							{
								if (unk_0x7B780C491DEC834E(Local_53, 2.5f))
								{
									if (bLocal_65 == 2)
									{
										if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 120f, 120f, 8f, 0, 1, 0) || func_193())
										{
											func_184();
										}
									}
									else if (bLocal_65 == 1)
									{
										if (vdist(Local_53, -203.758f, -861.738f, 29.2684f) < 5f)
										{
											if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 100f, 100f, 8f, 0, 1, 0) || func_193())
											{
												func_184();
											}
										}
										else if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 170f, 170f, 8f, 0, 1, 0) || func_193())
										{
											func_184();
										}
									}
									else if (vdist(Local_53, -3044.06f, 594.93f, 6.74f) < 5f)
									{
										if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 65f, 65f, 5f, 0, 1, 0) || func_193())
										{
											func_184();
										}
									}
									else if (unk_0xED977E2AE2CB16EE(Local_53, -712.9f, -819.32f, 22.73f, 1) < 5f)
									{
										if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 50f, 50f, 5f, 0, 1, 0) || func_193())
										{
											func_184();
										}
									}
									else if (unk_0xED977E2AE2CB16EE(Local_53, 24.13f, -946.84f, 28.36f, 1) < 5f)
									{
										if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 60f, 60f, 5f, 0, 1, 0) || func_193())
										{
											func_184();
										}
									}
									else if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 30f, 30f, 8f, 0, 1, 0) || func_193())
									{
										func_184();
									}
								}
							}
						}
						else
						{
							if (Local_107[2 /*10*/].f_7)
							{
								func_183(&Local_107, 2);
							}
							if (!unk_0x4FAFF4BCB7633475(iLocal_56))
							{
								unk_0xFD251F92B546F389(iLocal_56, Local_53, 200f, -1, 0, 0);
								unk_0x44FB298D6382876D(iLocal_56, 1);
								wait(0);
							}
							func_276();
						}
						break;
				}
			}
			else
			{
				func_181("IF NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()\n");
				func_276();
			}
		}
		else
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_55))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_55))
				{
					if (func_180(iLocal_55, -251125078))
					{
						if (func_179(iLocal_55, Local_53, 1) >= 190f)
						{
							unk_0x974022927CB47E68(iLocal_55);
							unk_0xD844F5E50DAB6FF7(iLocal_55, unk_0x4A8C381C258A124D(), 300f, -1, 0, 0);
						}
					}
					else if (func_180(iLocal_55, joaat("script_task_stand_still")))
					{
						unk_0x974022927CB47E68(iLocal_55);
						unk_0xD844F5E50DAB6FF7(iLocal_55, unk_0x4A8C381C258A124D(), 300f, -1, 0, 0);
					}
				}
			}
			if (unk_0xFC8BFE4B41177C22(iLocal_56))
			{
			}
			if (unk_0x1DD05E817C89C737() > iLocal_66 + 3000)
			{
				func_150();
			}
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (!func_130() && !func_127())
				{
					unk_0x4BD41CDB13AC8486(unk_0x259BE71D8A81D4FA());
					if (!iLocal_85 && !bLocal_90)
					{
						if (unk_0xFC8BFE4B41177C22(iLocal_56))
						{
							if (vdist(unk_0xD1A6A821F5AC81DB(iLocal_56, 0), -2956.26f, 487.97f, 15.46f) < 5f)
							{
								if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 100f, 100f, 15f, 0, 1, 0))
								{
									if (func_120(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
							else if (unk_0xED977E2AE2CB16EE(Local_53, -203.72f, -861.8f, 29.27f, 1) < 5f)
							{
								if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 40f, 40f, 15f, 0, 1, 0))
								{
									if (func_120(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
							else if (unk_0xED977E2AE2CB16EE(Local_53, 288.46f, -1256.71f, 28.44f, 1) < 5f)
							{
								if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 50f, 50f, 15f, 0, 1, 0))
								{
									if (func_120(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
							else if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 50f, 50f, 15f, 0, 1, 0))
							{
								if (func_120(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
								{
									iLocal_85 = 1;
								}
							}
						}
					}
					if (unk_0xC450B06E5AAA0985(iLocal_59))
					{
						if (!unk_0x4FAFF4BCB7633475(iLocal_55))
						{
							if (iLocal_126)
							{
								if (unk_0xFAA48325A90263BE(iLocal_55, unk_0x4A8C381C258A124D(), fLocal_132, fLocal_132, fLocal_132, 0, 1, 0))
								{
									if (!unk_0x7F420695E3F776FB(iLocal_55, 0))
									{
										if (timera() > 1000)
										{
											if (unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iLocal_55))
											{
												fLocal_132 = vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_55, 1));
												fLocal_132 = (fLocal_132 * 1.5f);
												settimera(0);
											}
											unk_0xBE8796DB2B90A437(iLocal_55, 17, 0);
										}
									}
								}
								else if (!iLocal_128)
								{
									if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_55, 25f, 25f, 25f, 0, 1, 0))
									{
										if (!unk_0x7F420695E3F776FB(iLocal_55, 0))
										{
											unk_0xBE8796DB2B90A437(iLocal_55, 17, 1);
											unk_0xBE8796DB2B90A437(iLocal_55, 13, 0);
											func_119();
											iLocal_128 = 1;
										}
									}
								}
							}
							else if (!iLocal_87)
							{
								if ((unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iLocal_55) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iLocal_55)) || unk_0x9B3D4335E0EDB0BE(iLocal_55, unk_0x4A8C381C258A124D(), 0))
								{
									func_120(&Local_107, cLocal_123, sLocal_113, 4, 0, 0, 0);
									settimera(0);
									fLocal_132 = vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_55, 1));
									fLocal_132 = (fLocal_132 * 1.5f);
									iLocal_126 = 1;
									iLocal_87 = 1;
								}
								if (unk_0xD9F5E1FEFD1329E4(iLocal_73, 0))
								{
									if (unk_0x9B3D4335E0EDB0BE(iLocal_73, unk_0x4A8C381C258A124D(), 1))
									{
										unk_0xBE8796DB2B90A437(iLocal_55, 17, 0);
										if (unk_0x27E68848F0E5D7D9(iLocal_55))
										{
											unk_0x13DE13EA38996410(iLocal_55, iLocal_73, unk_0x4A8C381C258A124D(), 8, 35f, 4, 10f, 10f, 1);
										}
										else
										{
											unk_0xD844F5E50DAB6FF7(iLocal_55, unk_0x4A8C381C258A124D(), 300f, -1, 0, 0);
										}
										func_120(&Local_107, cLocal_123, sLocal_113, 4, 0, 0, 0);
										settimera(0);
										fLocal_132 = vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_55, 1));
										fLocal_132 = (fLocal_132 * 1.5f);
										iLocal_126 = 1;
										iLocal_87 = 1;
									}
								}
							}
							if ((iLocal_128 || iLocal_126) || bLocal_130)
							{
								if (unk_0xC450B06E5AAA0985(iLocal_59))
								{
									if (unk_0xA247F53580E53DCE(iLocal_59) == 1)
									{
									}
									else
									{
										unk_0x6A52036D51C7E18E(iLocal_59, 0);
										unk_0x61183D6239A9D7B8(iLocal_59, 1);
									}
								}
								if (!iLocal_128)
								{
									func_119();
									iLocal_128 = 1;
								}
							}
							else
							{
								if (unk_0x1B32E388988DD296(iLocal_55, unk_0x4A8C381C258A124D()))
								{
									bLocal_130 = true;
								}
								func_117(iLocal_59, &uLocal_70);
							}
							if (unk_0xFC8BFE4B41177C22(iLocal_56))
							{
								if (!iLocal_87)
								{
									if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 15f, 15f, 10f, 0, 1, 0))
									{
										if (func_120(&Local_107, cLocal_123, sLocal_116, 4, 0, 0, 0))
										{
											unk_0xB5396F1FB088FE38(&uLocal_61);
											unk_0x10425721983AE158(0, cLocal_148, sLocal_149, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x10425721983AE158(0, cLocal_148, sLocal_150, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x10425721983AE158(0, cLocal_148, sLocal_151, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x10425721983AE158(0, cLocal_148, sLocal_149, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x10425721983AE158(0, cLocal_148, sLocal_150, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x10425721983AE158(0, cLocal_148, sLocal_151, 8f, -4f, -1, 1, 0, 0, 0, 0);
											unk_0x93C0674FC00824D0(uLocal_61);
											unk_0x4BD42B0527065BB6(iLocal_56, uLocal_61);
											unk_0xD0557B139A542F12(&uLocal_61);
											settimera(0);
											iLocal_87 = 1;
										}
									}
								}
								else if (!iLocal_88)
								{
									if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 15f, 15f, 10f, 0, 1, 0))
									{
										if (((!unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iLocal_55) && !unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iLocal_55)) && !unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D())) && func_116(iLocal_56, iLocal_55, 1) > 30f)
										{
											if (func_120(&Local_107, cLocal_123, sLocal_117, 4, 0, 0, 0))
											{
												settimera(0);
												iLocal_88 = 1;
											}
										}
									}
								}
								else if (!unk_0x75E315E7679F4F24(iLocal_56))
								{
									func_114(iLocal_56, "GENERIC_CURSE_MED", 24);
								}
							}
							if (func_112())
							{
								func_111();
								if (unk_0xFC8BFE4B41177C22(iLocal_56))
								{
									Var0 = { unk_0xD1A6A821F5AC81DB(iLocal_56, 1) };
								}
								if (!unk_0x65FFA94B82A71741(iLocal_55, Var0, 25f, 25f, 25f, 0, 1, 0) && unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_55, 12f, 12f, 12f, 0, 1, 0))
								{
									if (timera() > 20000)
									{
										if (func_110(iLocal_55) && !unk_0x8BF5256C439DF778(iLocal_55))
										{
											if (func_120(&Local_107, cLocal_123, sLocal_118, 4, 0, 0, 0))
											{
												bLocal_130 = true;
												settimera(0);
											}
										}
									}
								}
							}
							else if (func_110(iLocal_56))
							{
								if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, Global_19, 0, 1, 0))
								{
									if (func_120(&Local_107, cLocal_123, sLocal_121, 4, 0, 0, 0))
									{
										unk_0xB5396F1FB088FE38(&uLocal_61);
										unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 3000);
										unk_0x761F56E633460973(0, 1193033728, 0);
										unk_0x93C0674FC00824D0(uLocal_61);
										unk_0x4BD42B0527065BB6(iLocal_56, uLocal_61);
										unk_0xD0557B139A542F12(&uLocal_61);
										bLocal_127 = true;
										func_276();
									}
								}
								else if (bLocal_130)
								{
									if (func_120(&Local_107, cLocal_123, sLocal_122, 4, 0, 0, 0))
									{
										unk_0x761F56E633460973(iLocal_56, 1193033728, 0);
										unk_0x717804C8C8DA67BF(iLocal_56, joaat("MotionState_Walk"), 0, 0, 0);
										bLocal_127 = true;
										func_276();
									}
								}
								else
								{
									unk_0x761F56E633460973(iLocal_56, 1193033728, 0);
									unk_0x717804C8C8DA67BF(iLocal_56, joaat("MotionState_Walk"), 0, 0, 0);
									bLocal_127 = true;
									func_276();
								}
							}
							else
							{
								bLocal_127 = true;
								func_276();
							}
						}
						else if (func_112())
						{
							if ((unk_0x4FAFF4BCB7633475(iLocal_55) || unk_0x89568FA9A6BC0B4A(iLocal_55, 1)) || func_180(iLocal_55, joaat("script_task_writhe")))
							{
								func_120(&Local_107, cLocal_123, sLocal_125, 4, 0, 0, 0);
								func_107();
								func_183(&Local_107, 2);
								unk_0xFE54B8568B2ABD12(&iLocal_59);
							}
						}
					}
					else if (!unk_0xC450B06E5AAA0985(uLocal_58))
					{
						if (bLocal_95)
						{
							if (unk_0xC450B06E5AAA0985(iLocal_60))
							{
								unk_0xFE54B8568B2ABD12(&iLocal_60);
							}
							iLocal_60 = 0;
							unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
							iLocal_58 = func_103(iLocal_56, 0, 0);
							func_102(&uLocal_64);
							if (unk_0xFC8BFE4B41177C22(iLocal_56))
							{
								fLocal_82 = vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_56, 0));
								unk_0xE4DC7B3DD712372B(iLocal_56);
							}
							if (fLocal_82 > 750f)
							{
								func_294(0);
							}
						}
						else
						{
							func_99();
						}
					}
					else
					{
						if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
						{
							if (bLocal_95)
							{
								func_294(0);
							}
							else
							{
								func_276();
							}
						}
						if (bLocal_100)
						{
						}
						else
						{
							func_2();
						}
						if (!bLocal_100)
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_56))
							{
								if (vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_56, 0)) > (fLocal_82 + 100f))
								{
									if (bLocal_95)
									{
										func_294(0);
									}
									else
									{
										unk_0xD844F5E50DAB6FF7(iLocal_56, unk_0x4A8C381C258A124D(), 100f, -1, 0, 0);
										func_276();
									}
								}
								else if (vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_56, 0)) < fLocal_82)
								{
									fLocal_82 = vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_56, 0));
								}
								if (unk_0x9B3D4335E0EDB0BE(iLocal_56, unk_0x4A8C381C258A124D(), 1))
								{
									if (bLocal_95)
									{
										func_294(0);
									}
								}
							}
						}
					}
				}
				else
				{
					func_1();
				}
			}
			else
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_56))
	{
		unk_0xD844F5E50DAB6FF7(iLocal_56, unk_0x4A8C381C258A124D(), 100f, -1, 0, 0);
		func_114(iLocal_56, "GENERIC_FRIGHTENED_HIGH", 24);
		unk_0x44FB298D6382876D(iLocal_56, 1);
		unk_0xAAA71DD7E9059338(iLocal_56, 0);
		unk_0x3F58BFCF656F0DF1(iLocal_56, 1);
		unk_0xF09E30AF1B8FB379(&iLocal_56);
	}
	func_99();
	if (bLocal_90)
	{
		if (unk_0xC450B06E5AAA0985(iLocal_60))
		{
			if (unk_0xB0E14182FAD64944(uLocal_89))
			{
				if (vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0x80C8AA1625977488(uLocal_89)) > 100f)
				{
					func_276();
				}
			}
		}
		else if (bLocal_95)
		{
			func_294(0);
		}
		else if (unk_0x4FAFF4BCB7633475(iLocal_55))
		{
			func_276();
		}
	}
	if (unk_0xC450B06E5AAA0985(iLocal_59))
	{
		if (unk_0x4FAFF4BCB7633475(iLocal_55))
		{
			unk_0xFE54B8568B2ABD12(&iLocal_59);
		}
		else if (!func_112())
		{
			func_276();
		}
	}
}

void func_2()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	bool bVar8;
	float fVar9;
	float fVar10;
	char cVar11[16];
	char cVar12[16];
	var uVar13;
	int iVar14;
	
	if (!unk_0x4FAFF4BCB7633475(iLocal_56))
	{
		if (!bLocal_99)
		{
			if (iLocal_129)
			{
				if (!iLocal_131)
				{
					if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 15f, 15f, 20f, 0, 1, 0))
					{
						func_114(iLocal_56, "GENERIC_HI", 5);
						iLocal_131 = 1;
					}
				}
				if (unk_0xED977E2AE2CB16EE(Local_53, 296.13f, -894.01f, 28.23f, 1) < 5f)
				{
					if (fLocal_83 == 6f)
					{
						fLocal_83 = 5f;
					}
				}
				else if (unk_0xED977E2AE2CB16EE(Local_53, -2072.88f, -317.19f, 12.32f, 1) < 5f)
				{
					if (fLocal_83 == 6f)
					{
						fLocal_83 = 4f;
					}
				}
				if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, fLocal_83, fLocal_83, fLocal_83, 0, 1, 0) && !func_98())
				{
					if (func_95(2))
					{
						unk_0x428C32CC68809A35(1);
					}
					if (!func_127())
					{
						if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
						{
							if (func_94(1, 0, 1))
							{
								if (!BitTest(Global_8253, 11) || func_93())
								{
									if (!unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))
									{
										unk_0x428C32CC68809A35(1);
										if (func_92())
										{
											func_91();
										}
										if (iLocal_101 == joaat("prop_ld_wallet_pickup"))
										{
											iLocal_57 = unk_0x4E55EAB577C13329(iLocal_102, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1, 1, 0);
										}
										else
										{
											iLocal_57 = unk_0x4E55EAB577C13329(iLocal_101, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1, 1, 0);
										}
										if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
										{
											unk_0x4D306DD94DD6FDBA(iLocal_57, unk_0x4A8C381C258A124D(), unk_0x72F7E39FB49FC0BA(unk_0x4A8C381C258A124D(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
										}
										unk_0x4285E11B28063EE0(iLocal_57, 0, 0);
										func_83(1, 1, 1, 0, 0, 0, 0);
										if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
										{
											if (unk_0xFC8BFE4B41177C22(iLocal_57))
											{
												while ((!func_81(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), uLocal_84, 1, 1056964608, 0, 1, 0) || func_92()) || !unk_0xF98CC1C0E657B6CB(iLocal_57))
												{
													if (!func_81(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), uLocal_84, 1, 1056964608, 0, 1, 0))
													{
													}
													if (func_92())
													{
													}
													if (!unk_0xF98CC1C0E657B6CB(iLocal_57))
													{
													}
													wait(0);
												}
												if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
												{
													unk_0x092B9247AF00F5CF(unk_0x4A8C381C258A124D(), 0, 0);
												}
											}
										}
										else if (unk_0xFC8BFE4B41177C22(iLocal_57))
										{
											while (func_92() || !unk_0xF98CC1C0E657B6CB(iLocal_57))
											{
												wait(0);
											}
										}
										unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
										if (!unk_0x4FAFF4BCB7633475(iLocal_56))
										{
											unk_0x9FF00EA9A61211D2(iLocal_56, 0);
										}
										unk_0xEAFAA716662898B8(0);
										unk_0x6E8A7BB566D1F7AF(iLocal_69);
										unk_0xF9358C41CC69C616(unk_0x4A8C381C258A124D(), 0, 0);
										func_79();
										func_73(0);
										wait(0);
										if (func_110(iLocal_56))
										{
											if (unk_0xB98B1A5B59BC5065(iLocal_56))
											{
												sLocal_94 = "move_m@hurry@b";
											}
											else
											{
												sLocal_94 = "move_f@hurry@a";
											}
										}
										unk_0x73DEEAB0747FB17C(sLocal_94);
										bLocal_99 = true;
										settimera(0);
									}
								}
							}
						}
					}
				}
				else
				{
					func_71(unk_0xD1A6A821F5AC81DB(iLocal_56, 1), &fLocal_83, &uLocal_84);
					if (!func_98())
					{
						if (!func_180(iLocal_56, joaat("script_task_go_to_entity")) && !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
						{
							unk_0x974022927CB47E68(iLocal_56);
							unk_0xAB3658A740EED98E(iLocal_56, unk_0x4A8C381C258A124D(), 20000, 1056964608, 1f, 1073741824, 0);
						}
					}
					else if (func_180(iLocal_56, joaat("script_task_go_to_entity")))
					{
						unk_0x974022927CB47E68(iLocal_56);
						unk_0xD0557B139A542F12(&uLocal_61);
						unk_0xB5396F1FB088FE38(&uLocal_61);
						unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), -1, 2048, 2);
						unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
						unk_0x10425721983AE158(0, cLocal_148, sLocal_149, 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x10425721983AE158(0, cLocal_148, sLocal_151, 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x10425721983AE158(0, cLocal_148, sLocal_150, 8f, -8f, -1, 1, 0, 0, 0, 0);
						unk_0x93C0674FC00824D0(uLocal_61);
						unk_0x4BD42B0527065BB6(iLocal_56, uLocal_61);
						unk_0xD0557B139A542F12(&uLocal_61);
						unk_0xD8ED11B32DF72E0B(iLocal_56, 0, 0);
					}
				}
			}
			else if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 25f, 25f, 20f, 0, 1, 1) || unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 30f, 30f, 20f, 0, 1, 2))
			{
				if (!func_98())
				{
					if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					{
						unk_0x974022927CB47E68(iLocal_56);
						unk_0xD0557B139A542F12(&uLocal_61);
						unk_0xB5396F1FB088FE38(&uLocal_61);
						unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), -1, 2048, 2);
						unk_0xAB3658A740EED98E(0, unk_0x4A8C381C258A124D(), 20000, 1056964608, 1f, 1073741824, 0);
						unk_0x93C0674FC00824D0(uLocal_61);
						unk_0x4BD42B0527065BB6(iLocal_56, uLocal_61);
						unk_0xD0557B139A542F12(&uLocal_61);
					}
					iLocal_129 = 1;
				}
			}
		}
		if (bLocal_99)
		{
			switch (iLocal_98)
			{
				case 0:
					if (((!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) && !unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) && !unk_0x78174817EDF226B3(unk_0x4A8C381C258A124D())) && !unk_0x0B3FC0E7676E79BF(unk_0x4A8C381C258A124D()))
					{
						if (bLocal_80)
						{
							if (unk_0xED977E2AE2CB16EE(Local_53, -712.9f, -819.32f, 22.73f, 1) < 5f && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -709.9229f, -824.0863f, 22.0751f, -715.2137f, -824.2247f, 25.01217f, 3.25f, 0, 1, 0))
							{
								Local_78 = { -710.1279f, -821.3084f, 22.6169f };
								Local_79 = { 0f, 0f, 266.962f };
							}
							else if (!unk_0x4FAFF4BCB7633475(iLocal_56))
							{
								Var7 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0) };
								func_68(iLocal_56, &Local_78, &Local_79, cLocal_142, sLocal_144);
								if ((Local_78.f_2 - Var7.f_2) > 20f)
								{
									Local_78 = { Var7 };
								}
								Local_78.f_2 = (Local_78.f_2 + 2f);
								unk_0xB1EAADCB692D69CE(Local_78, &(Local_78.f_2), 0, 0);
								if (Local_78.f_2 == 0f)
								{
									Local_78 = { Local_138 };
									Local_79.f_2 = fLocal_139;
								}
								if (unk_0xED977E2AE2CB16EE(Local_53, -203.72f, -861.8f, 29.27f, 1) < 5f)
								{
									if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -202.4218f, -864.449f, 27.88059f, -211.4486f, -861.5274f, 31.75401f, 9.5f, 0, 1, 0))
									{
										if (Local_79.f_2 > 315f && Local_79.f_2 < 360f)
										{
											Local_79.f_2 = 251.4238f;
										}
										else if (Local_79.f_2 > 120f && Local_79.f_2 < 212f)
										{
											Local_79.f_2 = 67.2304f;
										}
										Local_78 = { -205.81f, -865.2f, 28.5f };
									}
								}
								else if (unk_0xED977E2AE2CB16EE(Local_53, -821.33f, -1082.43f, 10.14f, 1) < 5f && unk_0x26715B0ED6702C87(Local_78, -826.1744f, -1083.943f, 9.137519f, -811.6559f, -1075.567f, 13.88779f, 6f, 0, 1))
								{
									Local_78 = { -814.0593f, -1082.483f, 10.0671f };
									Local_79.f_2 = 275.5752f;
								}
								else if (unk_0xED977E2AE2CB16EE(Local_53, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0x26715B0ED6702C87(Local_78, -377.5788f, 6033.821f, 29.29119f, -373.0138f, 6029.14f, 33.75382f, 4.75f, 0, 1))
								{
									Local_78 = { -375.0627f, 6030.533f, 30.5313f };
									Local_79.f_2 = 222.9049f;
								}
								else if (unk_0xED977E2AE2CB16EE(Local_53, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0x26715B0ED6702C87(Local_78, -381.4607f, 6031.481f, 29.24971f, -376.6766f, 6026.68f, 33.76656f, 3f, 0, 1))
								{
									Local_78 = { -379.7835f, 6029.472f, 30.5014f };
									Local_79.f_2 = 213.2611f;
								}
								else if (unk_0xED977E2AE2CB16EE(Local_53, 89.39f, 2f, 67.34f, 1) < 5f)
								{
									if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 73.30347f, 4.781172f, 66.79439f, 107.6572f, -8.330787f, 69.16833f, 9.75f, 0, 1, 0))
									{
										if (Local_79.f_2 > 128f && Local_79.f_2 < 195f)
										{
											if (Local_79.f_2 > 162f)
											{
												Local_79.f_2 = 220f;
											}
											else
											{
												Local_79.f_2 = 107f;
											}
										}
									}
								}
								else if (unk_0xED977E2AE2CB16EE(Local_53, 174.53f, 6637.64f, 30.57f, 1) < 5f)
								{
									if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 176.3895f, 6635.983f, 29.87799f, 181.7585f, 6641.302f, 33.556f, 7.75f, 0, 1, 0))
									{
										if (Local_79.f_2 > 244.444f && Local_79.f_2 < 326.2103f)
										{
											Local_79.f_2 = 343.1367f;
										}
									}
								}
								else if (unk_0xED977E2AE2CB16EE(Local_53, -3044.11f, 594.34f, 6.73f, 1) < 5f)
								{
									if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -3042.549f, 597.1118f, 6.612578f, -3046.965f, 595.6973f, 9.065809f, 5f, 0, 1, 0))
									{
										Local_78 = { -3045.4f, 598.65f, 6.51f };
									}
								}
								Var4 = { unk_0xBE8776D2466E9EA6(cLocal_142, sLocal_144, Local_78, Local_79, 0f, 2) };
								Var5 = { Var4 - Local_78 };
								Var5.f_2 = 0f;
								fVar10 = vmag(Var5);
								unk_0xB1EAADCB692D69CE(Var4, &(Var4.f_2), 0, 0);
								fVar9 = (Local_78.f_2 - Var4.f_2);
								Local_79.f_0 = unk_0x4964D7A2BFD2F9A3(fVar9, fVar10);
								if (Local_79.f_0 > 20f || Local_79.f_0 < -330f)
								{
									Local_78 = { Local_138 };
									Local_79.f_0 = 0f;
									Local_79.f_2 = fLocal_139;
									Var4 = { unk_0xBE8776D2466E9EA6(cLocal_142, sLocal_144, Local_78, Local_79, 0f, 2) };
									Var5 = { Var4 - Local_78 };
									Var5.f_2 = 0f;
									fVar10 = vmag(Var5);
									unk_0xB1EAADCB692D69CE(Var4, &(Var4.f_2), 0, 0);
									fVar9 = (Local_78.f_2 - Var4.f_2);
								}
							}
							if (func_67(Local_53, -526.58f, -1222.79f, 17.46f, 10f, 0))
							{
								if (unk_0x26715B0ED6702C87(Local_78, -538.4412f, -1214.903f, 16.79794f, -520.3268f, -1223.249f, 20.556f, 6.5f, 0, 1))
								{
									if (Local_79.f_2 < 35f || Local_79.f_2 > 275f)
									{
										if (Local_79.f_2 < 335f)
										{
											Local_79.f_2 = 260f;
										}
										else
										{
											Local_79.f_2 = 55f;
										}
									}
									else if (Local_79.f_2 > 107.2072f && Local_79.f_2 < 210f)
									{
										if (Local_79.f_2 > 154.6742f)
										{
											Local_79.f_2 = 233f;
										}
										else
										{
											Local_79.f_2 = 73f;
										}
									}
								}
							}
						}
						else if (bLocal_65 == 4)
						{
							if (vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 183.6065f, 6636.653f, 30.6299f) < vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 172.2291f, 6631.007f, 30.7398f))
							{
								Local_78 = { 183.6065f, 6636.653f, 30.6299f };
								Local_79 = { 0f, 0f, 265f };
							}
							else
							{
								Local_78 = { 172.2291f, 6631.007f, 30.7398f };
								Local_79 = { 0f, 0f, 132f };
							}
						}
						else
						{
							Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
							if (!unk_0x4FAFF4BCB7633475(iLocal_56))
							{
								Var2 = { unk_0xD1A6A821F5AC81DB(iLocal_56, 1) };
							}
							Var3 = { Var1 - Var2 };
							Local_78 = { Var1 };
							Local_78 = { Local_78.f_0, Local_78.f_1, (Local_78.f_2 - 1f) };
							Local_79 = { 0f, 0f, unk_0x97BC40FFA2FFCCD2(Var3.f_0, Var3.f_1) };
						}
						if (unk_0xED977E2AE2CB16EE(Local_78, -535.795f, -1222.23f, 17.4567f, 1) < 5f)
						{
							Local_78 = { -521.475f, -1210.47f, 17.1848f };
							Local_79 = { 0f, 0f, 308.502f };
						}
						if (unk_0xD9F5E1FEFD1329E4(iLocal_73, 0))
						{
							unk_0x68298CA6191CDFDB(&iLocal_73);
						}
						if (unk_0xD9F5E1FEFD1329E4(unk_0xDC8D5832207C2EAD(), 0))
						{
							if (!unk_0xD9F5E1FEFD1329E4(iVar0, 0))
							{
								iVar0 = unk_0xDC8D5832207C2EAD();
								unk_0xC93BAF616F1C680F(unk_0x4B423FAA24E8ABF0(iVar0), &Local_136, &Local_137);
								if (unk_0x65FFA94B82A71741(iVar0, Local_78, (Local_137.f_1 + 1f), (Local_137.f_1 + 1f), 3f, 0, 1, 0) || unk_0x65FFA94B82A71741(iVar0, unk_0xBE8776D2466E9EA6(cLocal_142, sLocal_144, Local_78, Local_79, 0, 2), (Local_137.f_1 + 1f), (Local_137.f_1 + 1f), 3f, 0, 1, 0))
								{
									if (func_67(Local_53, -526.58f, -1222.79f, 17.46f, 10f, 0) && (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -529.7477f, -1218.399f, 16.78482f, -520.9798f, -1222.305f, 20.55204f, 7.5f, 0, 1, 0)))
									{
										if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0))
										{
											Var6 = { 2.9f, 12f, 8f };
											Local_75 = { -543.34f, -1216.8f, 17.96f };
											fLocal_77 = 337.5f;
											bVar8 = true;
										}
										else
										{
											Var6 = { 2.9f, 12f, 8f };
											Local_75 = { -522.4418f, -1214.57f, 17.1848f };
											fLocal_77 = 246.7714f;
											bVar8 = true;
										}
										if ((Local_137.f_0 - Local_136.f_0) > Var6.f_0)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_1 - Local_136.f_1) > Var6.f_1)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_2 - Local_136.f_2) > Var6.f_2)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_66(iVar0))
											{
												unk_0xB2BD5837A8D3CEDA(iVar0, Local_75, 1, 0, 0, 1);
												unk_0x5C96CEA06531AB03(iVar0, fLocal_77);
												unk_0xC1FE4FCB32785633(iVar0, 0, 1, 1, 1);
												unk_0x1DE99C193C7EC64B(iVar0, 1084227584);
											}
										}
										else if (unk_0xFC8BFE4B41177C22(iVar0))
										{
											if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iVar0, 0))
											{
												unk_0x8C1F7D7A31B2A38E(&iVar0);
											}
										}
									}
									else if (unk_0xED977E2AE2CB16EE(Local_53, -203.72f, -861.8f, 29.27f, 1) < 5f && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -197.7616f, -865.9772f, 27.31116f, -191.161f, -849.0546f, 32.89275f, 10.25f, 0, 1, 0))
									{
										Var6 = { 2.9f, 12f, 8f };
										Local_75 = { -187f, -855.51f, 29.02f };
										fLocal_77 = 158.28f;
										bVar8 = true;
										if ((Local_137.f_0 - Local_136.f_0) > Var6.f_0)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_1 - Local_136.f_1) > Var6.f_1)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_2 - Local_136.f_2) > Var6.f_2)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_66(iVar0))
											{
												unk_0xB2BD5837A8D3CEDA(iVar0, Local_75, 1, 0, 0, 1);
												unk_0x5C96CEA06531AB03(iVar0, fLocal_77);
												unk_0x1DE99C193C7EC64B(iVar0, 1084227584);
											}
										}
										else if (unk_0xFC8BFE4B41177C22(iVar0))
										{
											if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iVar0, 0))
											{
												unk_0x8C1F7D7A31B2A38E(&iVar0);
											}
										}
									}
									else if (unk_0xED977E2AE2CB16EE(Local_53, -387.12f, 6045.79f, 30.5f, 1) < 5f && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -390.4536f, 6044.05f, 29.99868f, -380.4771f, 6032.985f, 33.24879f, 6f, 0, 1, 0))
									{
										Var6 = { 2.9f, 12f, 8f };
										Local_75 = { -395.84f, 6051.16f, 31.19f };
										fLocal_77 = 139.92f;
										bVar8 = true;
										if ((Local_137.f_0 - Local_136.f_0) > Var6.f_0)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_1 - Local_136.f_1) > Var6.f_1)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_2 - Local_136.f_2) > Var6.f_2)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_66(iVar0))
											{
												unk_0xB2BD5837A8D3CEDA(iVar0, Local_75, 1, 0, 0, 1);
												unk_0x5C96CEA06531AB03(iVar0, fLocal_77);
												unk_0x1DE99C193C7EC64B(iVar0, 1084227584);
											}
										}
										else if (unk_0xFC8BFE4B41177C22(iVar0))
										{
											if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iVar0, 0))
											{
												unk_0x8C1F7D7A31B2A38E(&iVar0);
											}
										}
									}
									else if (unk_0xED977E2AE2CB16EE(Local_53, -2956.78f, 488.19f, 14.47f, 1) < 5f && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -2955.234f, 492.4626f, 13.80307f, -2967.116f, 493.0511f, 17.05663f, 9.75f, 0, 1, 0))
									{
										Var6 = { 2.9f, 12f, 8f };
										Local_75 = { -2972.31f, 490.07f, 15.03f };
										fLocal_77 = 357.64f;
										bVar8 = true;
										if ((Local_137.f_0 - Local_136.f_0) > Var6.f_0)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_1 - Local_136.f_1) > Var6.f_1)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_2 - Local_136.f_2) > Var6.f_2)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_66(iVar0))
											{
												unk_0xB2BD5837A8D3CEDA(iVar0, Local_75, 1, 0, 0, 1);
												unk_0x5C96CEA06531AB03(iVar0, fLocal_77);
												unk_0x1DE99C193C7EC64B(iVar0, 1084227584);
											}
										}
										else if (unk_0xFC8BFE4B41177C22(iVar0))
										{
											if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iVar0, 0))
											{
												unk_0x8C1F7D7A31B2A38E(&iVar0);
											}
										}
									}
									else if ((unk_0xED977E2AE2CB16EE(Local_53, 174.53f, 6637.64f, 30.57f, 1) < 5f && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 178.246f, 6638.824f, 30.5274f, 173.4713f, 6634.083f, 33.6823f, 6f, 0, 1, 0)) && unk_0x5105BE70DEF1F5FB(iVar0, 180.1225f, 6640.33f, 30.78129f, 171.623f, 6631.794f, 33.69934f, 8f, 0, 1, 0))
									{
										Var6 = { 2.9f, 12f, 8f };
										Local_75 = { 184.05f, 6628.75f, 31.27f };
										fLocal_77 = 89.37f;
										bVar8 = true;
										if ((Local_137.f_0 - Local_136.f_0) > Var6.f_0)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_1 - Local_136.f_1) > Var6.f_1)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_2 - Local_136.f_2) > Var6.f_2)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_66(iVar0))
											{
												unk_0xB2BD5837A8D3CEDA(iVar0, Local_75, 1, 0, 0, 1);
												unk_0x5C96CEA06531AB03(iVar0, fLocal_77);
												unk_0x1DE99C193C7EC64B(iVar0, 1084227584);
											}
										}
										else if (unk_0xFC8BFE4B41177C22(iVar0))
										{
											if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iVar0, 0))
											{
												unk_0x8C1F7D7A31B2A38E(&iVar0);
											}
										}
									}
									else
									{
										Var6 = { 2.9f, 12f, 8f };
										fLocal_77 = unk_0xCFC0C995455A6204(iVar0);
										Local_75 = { func_64(Local_78, unk_0xBE8776D2466E9EA6(cLocal_142, sLocal_144, Local_78, Local_79, 0, 2)) };
										if (func_63(0f, 0f, 0f, Local_75, 0))
										{
											Local_75 = { unk_0xD1A6A821F5AC81DB(iVar0, 1) };
										}
										if (unk_0xBA16CD57E37AC32A(unk_0x4B423FAA24E8ABF0(iVar0)))
										{
											Local_137.f_0 = (Local_137.f_0 + 3f);
											Local_137.f_1 = (Local_137.f_1 + 3f);
										}
										bVar8 = true;
										if ((Local_137.f_0 - Local_136.f_0) > Var6.f_0)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_1 - Local_136.f_1) > Var6.f_1)
										{
											bVar8 = false;
										}
										else if ((Local_137.f_2 - Local_136.f_2) > Var6.f_2)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_66(iVar0))
											{
												unk_0xB2BD5837A8D3CEDA(iVar0, Local_75, 1, 0, 0, 1);
												unk_0x5C96CEA06531AB03(iVar0, fLocal_77);
												unk_0x1DE99C193C7EC64B(iVar0, 1084227584);
											}
										}
										else if (unk_0xFC8BFE4B41177C22(iVar0))
										{
											if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iVar0, 0))
											{
												unk_0x8C1F7D7A31B2A38E(&iVar0);
											}
										}
									}
								}
							}
						}
						if (func_66(iVar0))
						{
							unk_0xC93BAF616F1C680F(unk_0x4B423FAA24E8ABF0(iVar0), &Local_136, &Local_137);
							if (unk_0x65FFA94B82A71741(iVar0, Local_78, (Local_137.f_1 + 1f), (Local_137.f_1 + 1f), 1f, 0, 1, 0) || unk_0x65FFA94B82A71741(iVar0, unk_0xBE8776D2466E9EA6(cLocal_142, sLocal_144, Local_78, Local_79, 0, 2), (Local_137.f_1 + 1f), (Local_137.f_1 + 1f), 1f, 0, 1, 0))
							{
								unk_0xB2BD5837A8D3CEDA(iVar0, Local_140, 1, 0, 0, 1);
								unk_0x5C96CEA06531AB03(iVar0, fLocal_141);
								unk_0x1DE99C193C7EC64B(iVar0, 1084227584);
							}
						}
						if (unk_0xFC8BFE4B41177C22(iLocal_57))
						{
							unk_0x4285E11B28063EE0(iLocal_57, 1, 0);
						}
						unk_0xC4BCE90F7242F354(Local_78 - Vector(10f, 10f, 10f), Local_78 + Vector(10f, 10f, 10f), 0);
						unk_0xEC73DFE5CE55E19C(Local_78, 20f, 0);
						unk_0x55F7AC4B2B875901(Local_78, 10f, 0);
						unk_0x2094BC4B6731BA68(Local_78, (Local_137.f_1 + 1f), 1, 0, 0, 0);
						unk_0xD7ABE01242C5B8E3(Local_78, 25f);
						unk_0x4A46DAA87A4C235E(unk_0x4A8C381C258A124D(), 1);
						unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 0, 0);
						uLocal_68 = unk_0x2EC137C692A52458(Local_78, Local_79, 2);
						unk_0xA7C372501A8A3B23(uLocal_68, 0);
						uLocal_97 = unk_0x69D23632E4288DBD("DEFAULT_ANIMATED_CAMERA", 0);
						unk_0x58BDA5D9262F5D30(uLocal_97, 15f);
						unk_0xF9B66DAE101B699C(uLocal_97, uLocal_68, sLocal_145, cLocal_142);
						unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
						unk_0x84B06A81C98DA4B8(unk_0x4A8C381C258A124D());
						unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uLocal_68, cLocal_142, sLocal_143, 1000f, -1000f, 1024, 0, 1148846080, 0);
						unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
						if (!unk_0x4FAFF4BCB7633475(iLocal_56))
						{
							unk_0x19626F992DC71FB9(iLocal_56);
							unk_0x3DA436E63AB0F541(iLocal_56, uLocal_68, cLocal_142, sLocal_144, 1000f, -4f, 0, 0, 1148846080, 0);
						}
						unk_0x4CBC5D1BC117616B(uLocal_97, 1);
						unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
						StringCopy(&cVar11, sLocal_124, 16);
						StringConCat(&cVar11, "_1", 16);
						StringCopy(&cVar12, cLocal_120, 16);
						StringConCat(&cVar12, "_1", 16);
						func_51(&Local_107, cLocal_123, sLocal_124, &cVar11, cLocal_120, &cVar12, 7, 0, 0);
						settimera(0);
						unk_0xEAFAA716662898B8(0);
						func_50(joaat("rc_wallets_returned"), 1);
						unk_0xDF7F16323520B858(joaat("rc_wallets_returned"), &uVar13, -1);
						iLocal_98++;
					}
					else
					{
						if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
						{
						}
						if (unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))
						{
						}
						if (unk_0x78174817EDF226B3(unk_0x4A8C381C258A124D()))
						{
						}
						if (unk_0x0B3FC0E7676E79BF(unk_0x4A8C381C258A124D()))
						{
						}
					}
					unk_0x43AE50D2A33F6E2A();
					break;
				
				case 1:
					if ((unk_0x5266F1D2AEF6F73A(uLocal_68) && unk_0xBD3B265153D3BA2D(uLocal_68) == 1f) || func_47())
					{
						unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
						unk_0x15263A2A8A135DF3(unk_0x259BE71D8A81D4FA(), 0, 0);
						if (!unk_0x4FAFF4BCB7633475(iLocal_56))
						{
							unk_0x886FA295C1257AAA(iLocal_56, (iLocal_133 - (iLocal_133 / 10)));
							unk_0xAAA71DD7E9059338(iLocal_56, 0);
							unk_0x4669032A1DFBB449(iLocal_56, sLocal_94, 1048576000);
						}
						if (unk_0x15CCE8886267624F())
						{
							unk_0x19626F992DC71FB9(iLocal_56);
							Var4 = { unk_0xBE8776D2466E9EA6(cLocal_142, sLocal_144, Local_78, Local_79, 1f, 2) };
							unk_0xB1EAADCB692D69CE(Var4, &(Var4.f_2), 0, 0);
							unk_0xB2BD5837A8D3CEDA(iLocal_56, Var4, 1, 0, 0, 1);
							Var4 = { unk_0x7A6103DCF5EE8CC3(cLocal_142, sLocal_144, Local_78, Local_79, 1f, 2) };
							unk_0x5C96CEA06531AB03(iLocal_56, Var4.f_2);
						}
						Var4 = { unk_0x7A6103DCF5EE8CC3(cLocal_142, sLocal_144, Local_78, Local_79, 1f, 2) };
						if (func_67(Local_53, -526.58f, -1222.79f, 17.46f, 10f, 0))
						{
							if (func_46(unk_0x4A8C381C258A124D(), 215.68f, 60f))
							{
								unk_0xB5396F1FB088FE38(&uLocal_61);
								unk_0xA966E518B752B92A(0, unk_0x0D1381B6E0F3987D(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xA966E518B752B92A(0, -503.46f, -1199.39f, 19.02f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x761F56E633460973(0, unk_0xCFC0C995455A6204(iLocal_56), 1);
								unk_0x93C0674FC00824D0(uLocal_61);
								unk_0x4BD42B0527065BB6(iLocal_56, uLocal_61);
								unk_0xD0557B139A542F12(&uLocal_61);
							}
							else if (func_46(unk_0x4A8C381C258A124D(), 122.0371f, 60f))
							{
								unk_0xB5396F1FB088FE38(&uLocal_61);
								unk_0xA966E518B752B92A(0, unk_0x0D1381B6E0F3987D(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xA966E518B752B92A(0, -543.35f, -1208.09f, 16.73f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x761F56E633460973(0, unk_0xCFC0C995455A6204(iLocal_56), 1);
								unk_0x93C0674FC00824D0(uLocal_61);
								unk_0x4BD42B0527065BB6(iLocal_56, uLocal_61);
								unk_0xD0557B139A542F12(&uLocal_61);
							}
							else
							{
								unk_0xB5396F1FB088FE38(&uLocal_61);
								unk_0xA966E518B752B92A(0, unk_0x0D1381B6E0F3987D(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x761F56E633460973(0, unk_0xCFC0C995455A6204(iLocal_56), 1);
								unk_0x93C0674FC00824D0(uLocal_61);
								unk_0x4BD42B0527065BB6(iLocal_56, uLocal_61);
								unk_0xD0557B139A542F12(&uLocal_61);
							}
						}
						else if (unk_0xED977E2AE2CB16EE(Local_53, 288.46f, -1256.71f, 28.44f, 1) < 5f)
						{
							if (func_46(unk_0x4A8C381C258A124D(), 200.8887f, 60f))
							{
								unk_0xB5396F1FB088FE38(&uLocal_61);
								unk_0xA966E518B752B92A(0, unk_0x0D1381B6E0F3987D(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xA966E518B752B92A(0, 289.08f, -1286.56f, 28.68f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x761F56E633460973(0, unk_0xCFC0C995455A6204(iLocal_56), 1);
								unk_0x93C0674FC00824D0(uLocal_61);
								unk_0x4BD42B0527065BB6(iLocal_56, uLocal_61);
								unk_0xD0557B139A542F12(&uLocal_61);
							}
							else if (func_46(unk_0x4A8C381C258A124D(), 347.8599f, 60f))
							{
								unk_0xB5396F1FB088FE38(&uLocal_61);
								unk_0xA966E518B752B92A(0, unk_0x0D1381B6E0F3987D(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0xA966E518B752B92A(0, 241.22f, -1236.76f, 28.26f, 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x761F56E633460973(0, unk_0xCFC0C995455A6204(iLocal_56), 1);
								unk_0x93C0674FC00824D0(uLocal_61);
								unk_0x4BD42B0527065BB6(iLocal_56, uLocal_61);
								unk_0xD0557B139A542F12(&uLocal_61);
							}
							else
							{
								unk_0xB5396F1FB088FE38(&uLocal_61);
								unk_0xA966E518B752B92A(0, unk_0x0D1381B6E0F3987D(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								unk_0x761F56E633460973(0, unk_0xCFC0C995455A6204(iLocal_56), 1);
								unk_0x93C0674FC00824D0(uLocal_61);
								unk_0x4BD42B0527065BB6(iLocal_56, uLocal_61);
								unk_0xD0557B139A542F12(&uLocal_61);
							}
						}
						else
						{
							unk_0xB5396F1FB088FE38(&uLocal_61);
							unk_0xA966E518B752B92A(0, unk_0x0D1381B6E0F3987D(iLocal_56, 0f, 2.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
							unk_0x761F56E633460973(0, unk_0xCFC0C995455A6204(iLocal_56), 1);
							unk_0x93C0674FC00824D0(uLocal_61);
							unk_0x4BD42B0527065BB6(iLocal_56, uLocal_61);
							unk_0xD0557B139A542F12(&uLocal_61);
						}
						unk_0x717804C8C8DA67BF(iLocal_56, joaat("MotionState_Walk"), 1, 0, 0);
						unk_0x9FF00EA9A61211D2(iLocal_56, 1);
						unk_0x44FB298D6382876D(iLocal_56, 1);
						func_45(&iLocal_73);
						settimerb(0);
						unk_0x3C44EF9027A21847(0);
						if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						{
							unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
							if (!func_44())
							{
								unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
							}
						}
						if (unk_0xFC8BFE4B41177C22(iLocal_57))
						{
							unk_0x51C8BEA2005931AB(&iLocal_57);
						}
						if (!unk_0x4FAFF4BCB7633475(iLocal_56))
						{
							unk_0x886FA295C1257AAA(iLocal_56, (iLocal_133 - (iLocal_133 / 10)));
						}
						unk_0x4A46DAA87A4C235E(unk_0x4A8C381C258A124D(), 0);
						unk_0x64BB72494B9DF6DC(0f);
						unk_0x4CBC5D1BC117616B(uLocal_97, 0);
						func_43();
						unk_0x85E6A1E36B5E2E4D(uLocal_97, 0);
						unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
						if (unk_0x15CCE8886267624F())
						{
							unk_0x10B228D2FDB7AF16(500);
							while (unk_0xDDED2C93E8FD5B69())
							{
								wait(0);
							}
						}
						iVar14 = (iLocal_133 / 100);
						iVar14 *= 90;
						wait(0);
						unk_0xC289B882CEF4CAC9(0, 0, 3, 0);
						func_83(0, 1, 1, 0, 0, 0, 0);
						func_3(func_37(), 1, iVar14);
						func_294(1);
					}
					else
					{
						unk_0x43AE50D2A33F6E2A();
						if (unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), joaat("detach")))
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_56) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
							{
								if (unk_0x21478251925DBFD7(iLocal_57, unk_0x4A8C381C258A124D()))
								{
									unk_0x837D67618BF89034(iLocal_57, 0, 1);
									if (unk_0xB98B1A5B59BC5065(iLocal_56))
									{
										unk_0x4D306DD94DD6FDBA(iLocal_57, iLocal_56, unk_0x72F7E39FB49FC0BA(iLocal_56, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
									}
									else
									{
										unk_0x4D306DD94DD6FDBA(iLocal_57, iLocal_56, unk_0x72F7E39FB49FC0BA(iLocal_56, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
									}
								}
							}
						}
					}
					break;
				}
			}
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (func_36(iParam0) == 3)
	{
		return 0;
	}
	if (func_36(iParam0) == 4)
	{
		return 0;
	}
	return func_4(func_36(iParam0), 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_35();
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
					func_34(99, 1);
					func_50(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_50(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_50(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_18(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_15(5))
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
							func_50(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_15(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_50(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_50(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_50(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_property"), iParam3);
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
									func_50(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_15(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_14(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_34(95, iParam3);
					break;
				
				case 1:
					func_34(97, iParam3);
					break;
				
				case 2:
					func_34(96, iParam3);
					break;
			}
			func_34(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_7(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_7(bVar1);
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
					func_50(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_50(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_50(joaat("sp2_total_cash_earned"), iParam3);
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
	func_6(iParam0);
	if (Global_43257 == 15)
	{
		func_5(0);
	}
	return 1;
}

void func_5(bool bParam0)
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

void func_6(int iParam0)
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

void func_7(bool bParam0)
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
		func_10(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_10(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_10(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_10(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_10(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_10(8277, 0, -1, 1, 0);
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
	else if (BitTest(Global_113648.f_20566.f_471, bParam0) || BitTest(Global_2359296[func_9() /*5568*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0x8744D2E3FC95740E(&(Global_113648.f_20566.f_471), bParam0);
		unk_0x8744D2E3FC95740E(&(Global_2359296[func_9() /*5568*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xCCDB0041859B85A6("COUP_RED");
		unk_0xACF853FB3F6EA7D4(func_8(bParam0));
		unk_0x5C7E2225D7451992(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_8(bool bParam0)
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

int func_9()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805029[iParam0 /*3*/][func_11(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
	}
}

int func_11(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1574918;
}

void func_13(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_12();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

void func_14(int iParam0)
{
	func_34(93, iParam0);
	func_34(29, iParam0);
	func_34(30, iParam0);
}

int func_15(int iParam0)
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
		return func_17(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_17(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_17(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_17(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x39D1D336459711BE();
		iVar1 = func_16(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x39D1D336459711BE();
		iVar3 = func_16(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x39D1D336459711BE();
		iVar5 = func_16(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x39D1D336459711BE();
		iVar7 = func_16(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x39D1D336459711BE();
		iVar9 = func_16(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x39D1D336459711BE();
		iVar11 = func_16(8277, -1, 0);
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
	return BitTest(Global_2359296[func_9() /*5568*/].f_681.f_10, iParam0);
}

int func_16(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805029[iParam0 /*3*/][func_11(iParam1)];
		if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_17(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_12();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

int func_18(bool bParam0)
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
		func_33(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_19(27, 1);
	return 1;
}

int func_19(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_20(iParam0, iParam1);
}

int func_20(int iParam0, int iParam1)
{
	if (func_32(14) && !func_31(iParam0))
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
	if (func_30(&Global_4542597))
	{
		if (func_28(&Global_4542597, iParam0))
		{
			return 0;
		}
		if (func_21(&Global_4542597, iParam0))
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

int func_21(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_31(iParam1))
	{
		return 0;
	}
	if (func_28(uParam0, iParam1))
	{
		return 0;
	}
	if (func_27(uParam0) < 0f)
	{
		func_26(uParam0, 0);
	}
	func_24(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_22(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_22(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_31(iParam1))
	{
		return 0;
	}
	if (func_28(uParam0, iParam1))
	{
		return 0;
	}
	if (func_27(uParam0) < 0f)
	{
		func_26(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_23(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_23(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_24(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_25(uParam0, iVar0);
		iVar0++;
	}
	func_26(uParam0, (Global_4542596 - 0.5f));
}

void func_25(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_26(var uParam0, float fParam1)
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

float func_27(var uParam0)
{
	return uParam0->f_80;
}

bool func_28(var uParam0, int iParam1)
{
	return func_29(uParam0, iParam1) != -1;
}

int func_29(var uParam0, int iParam1)
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

bool func_30(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_31(int iParam0)
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

bool func_32(int iParam0)
{
	return Global_43257 == iParam0;
}

int func_33(int iParam0, int iParam1)
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

void func_34(int iParam0, int iParam1)
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

void func_35()
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

int func_36(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_17;
}

int func_37()
{
	func_38();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_38()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_41(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_40(unk_0x4A8C381C258A124D());
			if (func_39(iVar0) && (!func_32(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_39(Global_113648.f_2365.f_539.f_4321))
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

bool func_39(int iParam0)
{
	return iParam0 < 3;
}

int func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_41(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_41(int iParam0)
{
	if (func_39(iParam0))
	{
		return func_42(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_42(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_43()
{
	var uVar0;
	
	uVar0 = unk_0x96A32328480B485C(26379945, unk_0x0D1381B6E0F3987D(unk_0x4A8C381C258A124D(), 0.5f, -1f, 0.5f), 0f, 0f, unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D()), 1115815936, 1, 2);
	unk_0x4CBC5D1BC117616B(uVar0, 1);
}

int func_44()
{
	if (unk_0xBCF87EE3DC296C2A(unk_0xBF03D0685ADC793B()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_45(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(*iParam0))
	{
		unk_0x1C2F771CDC87A3A5(*iParam0, 0);
		if (unk_0x110821AE6C63DD4F(*iParam0) && unk_0x7C9905528EE2C3AB(*iParam0, 1))
		{
			unk_0x68298CA6191CDFDB(iParam0);
		}
	}
}

int func_46(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (fParam1 + (fParam2 / 2f));
	if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	fVar1 = (fParam1 - (fParam2 / 2f));
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (fVar0 > fVar1)
		{
			if (unk_0xCFC0C995455A6204(iParam0) < fVar0 && unk_0xCFC0C995455A6204(iParam0) > fVar1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (unk_0xCFC0C995455A6204(iParam0) < fVar0 || unk_0xCFC0C995455A6204(iParam0) > fVar1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_47()
{
	if (func_48(1000))
	{
		unk_0x8F72AF14CE5AACE4(500);
		while (unk_0x78ABC1D11B34F324())
		{
			unk_0x43AE50D2A33F6E2A();
			wait(0);
		}
		return 1;
	}
	return 0;
}

int func_48(int iParam0)
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
			if (func_49())
			{
				Global_27 = unk_0x1DD05E817C89C737();
				return 1;
			}
		}
	}
	return 0;
}

int func_49()
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

void func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDF7F16323520B858(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x1164A75E490C27B6(iParam0, iVar0, 1);
}

int func_51(var uParam0, char* sParam1, char* sParam2, char[4] cParam3, char* sParam4, char[4] cParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	func_62(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar1 = 10;
	func_61(2, &uVar0, &uVar1, sParam2, cParam3, sParam4, cParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_52(&uVar0, &uVar1, iParam6, 0);
}

int func_52(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_21726 = 0;
	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam2 > Global_21727)
			{
				if (bParam3 == 0)
				{
					unk_0x0F15249D24BC5ADA(0);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
				}
				else
				{
					func_60();
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
		if (func_59(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_58();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22721 = Global_22722;
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21344.f_370 = Global_22714;
		Global_21721 = Global_21722;
		Global_21723 = Global_21724;
		if (Global_21983 == 0)
		{
			Global_21879[0 /*6*/] = { Global_21905[0 /*6*/] };
			Global_21879[1 /*6*/] = { Global_21905[1 /*6*/] };
			Global_21931[0 /*6*/] = { Global_21957[0 /*6*/] };
			Global_21931[1 /*6*/] = { Global_21957[1 /*6*/] };
			Global_21892[0 /*6*/] = { Global_21918[0 /*6*/] };
			Global_21892[1 /*6*/] = { Global_21918[1 /*6*/] };
			Global_21944[0 /*6*/] = { Global_21970[0 /*6*/] };
			Global_21944[1 /*6*/] = { Global_21970[1 /*6*/] };
		}
		if (Global_21731)
		{
			unk_0x8744D2E3FC95740E(&Global_8253, 20);
			unk_0x8744D2E3FC95740E(&Global_8254, 17);
			unk_0x8744D2E3FC95740E(&Global_8255, false);
			if (bParam3)
			{
				func_57();
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_56())
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
					if (Global_21983 == 0)
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
			}
			func_54();
			Global_21735 = bParam3;
		}
		Global_21727 = iParam2;
		if (Global_21721 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21721)
			{
				StringCopy(&(Global_21344.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_21344.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_20591 = 0;
		func_53();
		return 1;
	}
	if (Global_21725 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21727 || iParam2 == Global_21727)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_60();
	}
	return 0;
}

void func_53()
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

void func_54()
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

int func_55()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_56()
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

void func_57()
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
		Global_20383 = func_37();
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

void func_58()
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

bool func_59(int iParam0, int iParam1)
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

void func_60()
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

void func_61(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_21722 = iParam0;
	Global_21732 = 0;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_62(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_63(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_64(struct<3> Param0, struct<3> Param1)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	var uVar13;
	
	iVar5 = 0;
	iVar6 = 1;
	iVar0 = unk_0xDC8D5832207C2EAD();
	if (!unk_0x110821AE6C63DD4F(iVar0))
	{
		unk_0xEE0BCDB1B5E36BCB(iVar0, 1, 0);
	}
	unk_0xC93BAF616F1C680F(unk_0x4B423FAA24E8ABF0(iVar0), &Var3, &Var4);
	unk_0x8B777C12D64DF209(Param0, 3, &Var2, 1, 1077936128, 0);
	if (vdist(Param0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		Var1 = { -3045.49f, 604.46f, 7.02f };
		iVar5 = 8;
	}
	else if (vdist(Param0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		Var1 = { 278.97f, -1255.06f, 28.88f };
		iVar5 = 8;
	}
	while (iVar5 < 8)
	{
		switch (iVar5)
		{
			case 0:
				if (vdist(Var2, unk_0x0D1381B6E0F3987D(iVar0, 0f, (Var4.f_1 + IntToFloat(iVar6)), 0f)) < vdist(Var2, unk_0x0D1381B6E0F3987D(iVar0, 0f, -(Var4.f_1 + IntToFloat(iVar6)), 0f)))
				{
					Var1 = { unk_0x0D1381B6E0F3987D(iVar0, 0f, (Var4.f_1 + IntToFloat(iVar6)), 0f) };
				}
				else
				{
					Var1 = { unk_0x0D1381B6E0F3987D(iVar0, 0f, -(Var4.f_1 + IntToFloat(iVar6)), 0f) };
				}
				if (unk_0xFC8BFE4B41177C22(iVar0))
				{
					if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
					{
						Var10 = { func_65(Var1, 0f, Var4) };
						Var11 = { func_65(Var1, 0f, Var3) };
						uVar13 = unk_0x120E577522852984(Var10, Var11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 1:
				if (unk_0x0E7DD1EBCA8D2DE3(uVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else if (unk_0xED977E2AE2CB16EE(Var1, Param0, 1) <= 5f || unk_0xED977E2AE2CB16EE(Var1, Param1, 1) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 2:
				if (vdist(Var2, unk_0x0D1381B6E0F3987D(iVar0, 0f, (Var4.f_1 - IntToFloat(iVar6)), 0f)) < vdist(Var2, unk_0x0D1381B6E0F3987D(iVar0, 0f, -(Var4.f_1 - IntToFloat(iVar6)), 0f)))
				{
					Var1 = { unk_0x0D1381B6E0F3987D(iVar0, 0f, (Var4.f_1 - IntToFloat(iVar6)), 0f) };
				}
				else
				{
					Var1 = { unk_0x0D1381B6E0F3987D(iVar0, 0f, -(Var4.f_1 - IntToFloat(iVar6)), 0f) };
				}
				if (unk_0xFC8BFE4B41177C22(iVar0))
				{
					if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
					{
						Var10 = { func_65(Var1, 0f, Var4) };
						Var11 = { func_65(Var1, 0f, Var3) };
						uVar13 = unk_0x120E577522852984(Var10, Var11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 3:
				if (unk_0x0E7DD1EBCA8D2DE3(uVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else if (unk_0xED977E2AE2CB16EE(Var1, Param0, 1) <= 5f || unk_0xED977E2AE2CB16EE(Var1, Param1, 1) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 4:
				if (vdist(Var2, unk_0x0D1381B6E0F3987D(iVar0, (Var4.f_0 + IntToFloat(iVar6)), 0f, 0f)) < vdist(Var2, unk_0x0D1381B6E0F3987D(iVar0, -(Var4.f_0 + IntToFloat(iVar6)), 0f, 0f)))
				{
					Var1 = { unk_0x0D1381B6E0F3987D(iVar0, (Var4.f_0 + IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0x0D1381B6E0F3987D(iVar0, -(Var4.f_0 + IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0xFC8BFE4B41177C22(iVar0))
				{
					if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
					{
						Var10 = { func_65(Var1, 0f, Var4) };
						Var11 = { func_65(Var1, 0f, Var3) };
						uVar13 = unk_0x120E577522852984(Var10, Var11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 5:
				if (unk_0x0E7DD1EBCA8D2DE3(uVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else if (unk_0xED977E2AE2CB16EE(Var1, Param0, 1) <= 5f || unk_0xED977E2AE2CB16EE(Var1, Param1, 1) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 6:
				if (vdist(Var2, unk_0x0D1381B6E0F3987D(iVar0, (Var4.f_0 - IntToFloat(iVar6)), 0f, 0f)) < vdist(Var2, unk_0x0D1381B6E0F3987D(iVar0, -(Var4.f_0 - IntToFloat(iVar6)), 0f, 0f)))
				{
					Var1 = { unk_0x0D1381B6E0F3987D(iVar0, (Var4.f_0 - IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					Var1 = { unk_0x0D1381B6E0F3987D(iVar0, -(Var4.f_0 - IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0xFC8BFE4B41177C22(iVar0))
				{
					if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
					{
						Var10 = { func_65(Var1, 0f, Var4) };
						Var11 = { func_65(Var1, 0f, Var3) };
						uVar13 = unk_0x120E577522852984(Var10, Var11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 7:
				if (unk_0x0E7DD1EBCA8D2DE3(uVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else if (unk_0xED977E2AE2CB16EE(Var1, Param0, 1) <= 5f || unk_0xED977E2AE2CB16EE(Var1, Param1, 1) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 8:
				break;
		}
		wait(0);
	}
	return Var1;
}

Vector3 func_65(struct<3> Param0, float fParam1, struct<2> Param2, var uParam3)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	fVar1 = fParam1;
	fVar2 = cos(fVar1);
	fVar3 = sin(fVar1);
	Var0.f_0 = ((Param2.f_0 * fVar2) + (Param2.f_1 * fVar3));
	Var0.f_1 = ((Param2.f_1 * fVar2) - (Param2.f_0 * fVar3));
	Var4 = { Param0 + Var0 };
	return Var4;
}

int func_66(int iParam0)
{
	if (func_110(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (!unk_0x5B702A5D1F2635BE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_67(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x1D5CD3EAAA7422B0((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (unk_0x1D5CD3EAAA7422B0((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x1D5CD3EAAA7422B0((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x1D5CD3EAAA7422B0((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (unk_0x1D5CD3EAAA7422B0((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_68(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	var uVar11;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0) };
	uParam2->f_2 = func_70(iParam0, unk_0x4A8C381C258A124D(), 1);
	fVar3 = func_70(iParam0, unk_0x4A8C381C258A124D(), 1);
	fVar4 = func_70(iParam0, unk_0x4A8C381C258A124D(), 1);
	Var10 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) - unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0) };
	if (unk_0xE100DD4F82A51BDE(sParam3))
	{
		Var9 = { unk_0xBE8776D2466E9EA6(sParam3, sParam4, *uParam1, *uParam2, 0, 2) };
	}
	else
	{
		Var9 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					uParam2->f_2 = func_69(unk_0xD1A6A821F5AC81DB(iParam0, 0), *uParam1, 1);
					*uParam1 = { unk_0xF10F2A2453AF1DFB(unk_0xD1A6A821F5AC81DB(iParam0, 0), uParam2->f_2, Var10) };
					iVar0 = 2;
				}
				else
				{
					uVar5 = unk_0x26C582EF5CD8A3A2(*uParam1, Var9 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (unk_0x0E7DD1EBCA8D2DE3(uVar5, &iVar6, &Var8, &uVar7, &uVar11) == 2)
				{
					if (iVar6 != 0)
					{
						if (Var8.f_2 > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 = (fVar4 + 7.5f);
							}
							else
							{
								fVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { unk_0xF10F2A2453AF1DFB(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), fVar4, Var10) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = func_69(Var9 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			
			case 2:
				break;
		}
		wait(0);
	}
}

float func_69(struct<2> Param0, Vector3 vParam1, struct<2> Param2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2.f_0 - Param0.f_0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x4964D7A2BFD2F9A3(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

float func_70(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 0) };
	return func_69(Var0, Var1, iParam2);
}

void func_71(struct<3> Param0, float fParam1, var uParam2)
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	
	bVar0 = false;
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) - Param0 };
		fVar2 = unk_0x97BC40FFA2FFCCD2(Var1.f_0, Var1.f_1);
		if (func_72(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		fVar2 = unk_0x97BC40FFA2FFCCD2(Var1.f_0, Var1.f_1);
		if (func_72(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) > 30f)
		{
			*fParam1 = (6f * 4f);
		}
		else if (unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) > 20f)
		{
			*fParam1 = (6f * 3f);
		}
		else if (unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) > 10f)
		{
			*fParam1 = (6f * 2f);
		}
		else
		{
			*fParam1 = 6f;
		}
		*uParam2 = ((*fParam1 / 1.33f) - 1f);
	}
	else
	{
		*fParam1 = 6f;
		*uParam2 = ((*fParam1 / 1.33f) - 1f);
	}
}

int func_72(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		fVar0 = unk_0xCFC0C995455A6204(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_73(int iParam0)
{
	if (func_78())
	{
		return;
	}
	if (!Global_20383.f_1 == 1)
	{
		if (func_77(0))
		{
			func_74(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 2);
	}
}

void func_74(int iParam0)
{
	if (func_78())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_76())
		{
			func_75(1, 1);
		}
		else
		{
			func_75(0, 0);
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

void func_75(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_77(0))
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

bool func_76()
{
	return BitTest(Global_1962996, 5);
}

int func_77(int iParam0)
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

bool func_78()
{
	return BitTest(Global_1962996, 19);
}

void func_79()
{
	Global_20591 = 0;
	func_80();
}

void func_80()
{
	unk_0xC78B293A5F4EACF9();
	Global_22736 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_21725 = 6;
	}
}

int func_81(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x66EFB3D6110055C4(0, 71, 1);
	unk_0x66EFB3D6110055C4(0, 72, 1);
	unk_0x66EFB3D6110055C4(0, 76, 1);
	unk_0x66EFB3D6110055C4(0, 73, 1);
	unk_0x66EFB3D6110055C4(0, 59, 1);
	unk_0x66EFB3D6110055C4(0, 60, 1);
	if (bParam5)
	{
		unk_0x66EFB3D6110055C4(0, 75, 1);
	}
	unk_0x66EFB3D6110055C4(0, 80, 1);
	if (!bParam6)
	{
		unk_0x66EFB3D6110055C4(0, 69, 1);
		unk_0x66EFB3D6110055C4(0, 70, 1);
		unk_0x66EFB3D6110055C4(0, 68, 1);
	}
	unk_0x66EFB3D6110055C4(0, 74, 1);
	unk_0x66EFB3D6110055C4(0, 86, 1);
	unk_0x66EFB3D6110055C4(0, 81, 1);
	unk_0x66EFB3D6110055C4(0, 82, 1);
	unk_0x66EFB3D6110055C4(0, 138, 1);
	unk_0x66EFB3D6110055C4(0, 136, 1);
	unk_0x66EFB3D6110055C4(0, 114, 1);
	unk_0x66EFB3D6110055C4(0, 107, 1);
	unk_0x66EFB3D6110055C4(0, 110, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 87, 1);
	unk_0x66EFB3D6110055C4(0, 88, 1);
	unk_0x66EFB3D6110055C4(0, 113, 1);
	unk_0x66EFB3D6110055C4(0, 115, 1);
	unk_0x66EFB3D6110055C4(0, 116, 1);
	unk_0x66EFB3D6110055C4(0, 117, 1);
	unk_0x66EFB3D6110055C4(0, 118, 1);
	unk_0x66EFB3D6110055C4(0, 119, 1);
	unk_0x66EFB3D6110055C4(0, 352, 1);
	unk_0x66EFB3D6110055C4(0, 131, 1);
	unk_0x66EFB3D6110055C4(0, 132, 1);
	unk_0x66EFB3D6110055C4(0, 123, 1);
	unk_0x66EFB3D6110055C4(0, 126, 1);
	unk_0x66EFB3D6110055C4(0, 129, 1);
	unk_0x66EFB3D6110055C4(0, 130, 1);
	unk_0x66EFB3D6110055C4(0, 133, 1);
	unk_0x66EFB3D6110055C4(0, 134, 1);
	unk_0x1C74A3A76F738D39();
	func_82(iParam0);
	if ((unk_0x1DD05E817C89C737() - Global_29) > 500)
	{
		unk_0xE5EE5C9DDF05D925(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x1DD05E817C89C737();
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0x1D5CD3EAAA7422B0(unk_0xDF93B3CFAC96698F(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_82(int iParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0xA03728CC57F6DD36(iParam0))
		{
			if (unk_0x772683F12F46CE82(iParam0))
			{
				unk_0x5B29AF88D03CEB7A(iParam0, 0);
			}
		}
	}
}

void func_83(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_90(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_55())
			{
				Global_20383.f_1 = 3;
			}
			Global_21725 = 5;
		}
		func_89(1, iParam3, iParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_90(0);
		unk_0xCCC82B30A1C53626();
		Global_63368 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_89(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_87(unk_0x259BE71D8A81D4FA())) && !func_85(unk_0x259BE71D8A81D4FA(), 0)) && !func_84()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_87(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_78556 = 0;
	}
}

bool func_84()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_18, 14);
}

bool func_85(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_86(-1, 0) == 8;
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

int func_86(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_87(int iParam0)
{
	if (func_85(iParam0, 0))
	{
		return 1;
	}
	if (func_88())
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

bool func_88()
{
	return BitTest(Global_2621446, 3);
}

int func_89(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_90(int iParam0)
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

void func_91()
{
	Global_20591 = 0;
	func_60();
}

int func_92()
{
	if (Global_21725 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

int func_93()
{
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (func_92())
		{
			return 1;
		}
	}
	return 0;
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

bool func_95(int iParam0)
{
	return func_96(func_97(iParam0));
}

bool func_96(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

char* func_97(int iParam0)
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

int func_98()
{
	switch (iLocal_72)
	{
		case 1:
			if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -190.8152f, -801.3224f, 25.45401f, -214.8212f, -866.6472f, 35.0318f, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 270.5801f, -1290.954f, 24.16572f, 270.499f, -1238.311f, 34.52738f, 58.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -3038.987f, 606.4774f, 2.589385f, -3057.039f, 599.7103f, 12.70948f, 19.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 170.8581f, 6619.894f, 30.31941f, 183.9522f, 6632.882f, 34.06088f, 22.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -9.663248f, -938.2167f, 24.29024f, 48.12534f, -959.4428f, 34.60982f, 7.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 283.0487f, -923.3091f, 24.13956f, 301.367f, -871.6924f, 34.4707f, 6.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 11:
			if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1053.799f, -772.7601f, 53.31232f, 1112.018f, -772.2864f, 60.16156f, 14.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 16:
			if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -2097.21f, -292.7766f, 8.141721f, -2101.908f, -345.41f, 18.23235f, 54.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 17:
			if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -799.6841f, -1117.781f, 5.659806f, -820.5555f, -1080.585f, 16.38764f, 29.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 18:
			if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -731.1746f, -820.053f, 18.06713f, -670.6583f, -821.2724f, 29.66125f, 8f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 19:
			if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -379.9555f, 6033.261f, 29.74875f, -394.2914f, 6047.678f, 33.9986f, 7f, 0, 1, 0) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -393.6422f, 6056.547f, 29.75011f, -402.4834f, 6047.817f, 33.99312f, 17.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 22:
			if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -294.338f, -833.5905f, 26.65178f, -330.661f, -827.2508f, 38.64983f, 16.5f, 0, 1, 0) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -294.1309f, -836.8602f, 26.72095f, -284.6938f, -814.233f, 37.38612f, 11f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 23:
			if ((!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -253.9362f, -689.096f, 28.56934f, -278.4698f, -682.0773f, 38.52502f, 9.5f, 0, 1, 0) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -253.3138f, -687.6628f, 28.5611f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0)) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -255.6709f, -726.2742f, 28.5187f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 25:
			if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 114.2641f, -9.324284f, 62.78819f, 75.47891f, 4.897117f, 73.96004f, 7f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 30:
			if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -544.5211f, -1200.006f, 12.87966f, -509.3911f, -1216.772f, 23.72543f, 41f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 31:
			if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -2945.132f, 491.4792f, 13.2899f, -2971.825f, 492.9101f, 18.0671f, 10f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) != 0)
	{
		return 1;
	}
	return 0;
}

void func_99()
{
	var uVar0;
	
	if (!bLocal_95)
	{
		if (iLocal_126)
		{
			func_107();
		}
		else
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_55))
			{
				if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iLocal_55) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iLocal_55))
				{
					if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_55, 25f, 25f, 25f, 0, 1, 0))
					{
						iLocal_126 = 1;
					}
				}
			}
			else
			{
				iLocal_126 = 1;
			}
			func_117(iLocal_59, &uLocal_70);
		}
		if (!bLocal_127)
		{
			if (bLocal_90)
			{
				if (unk_0x1D56B24774D5E23C(uLocal_89))
				{
					func_50(joaat("rc_wallets_recovered"), 1);
					unk_0xDF7F16323520B858(joaat("rc_wallets_recovered"), &uVar0, -1);
					unk_0x97A041099E92C69F(0, 200, 250);
					func_100(2);
					bLocal_95 = true;
				}
				else if (unk_0xC450B06E5AAA0985(iLocal_60))
				{
					if (vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0x80C8AA1625977488(uLocal_89)) > 150f)
					{
						if (unk_0x4FAFF4BCB7633475(iLocal_56))
						{
							func_276();
						}
						else if (vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_56, 1)) > 100f)
						{
							func_276();
						}
					}
				}
			}
		}
	}
}

void func_100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113648.f_24997.f_2 < 3)
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_101(func_97(iParam0), -1);
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
					func_101(func_97(iParam0), -1);
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
					func_101(func_97(iParam0), -1);
					Global_113648.f_24997.f_4++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113644, 2);
				}
			}
			break;
	}
}

void func_101(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

void func_102(var uParam0)
{
	*uParam0 = -99;
}

int func_103(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_104(iParam0, bParam1, 145);
}

int func_104(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_105(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC450B06E5AAA0985(uVar0)) && unk_0x6BA487C862DB8DDF(&(Global_2028[iParam2 /*29*/].f_3)))
	{
		unk_0x594D5D0D7071B0DE(iVar0, &(Global_2028[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_105(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_106(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6A52036D51C7E18E(uVar0, bParam1);
		}
		else
		{
			unk_0x61183D6239A9D7B8(iVar0, 2);
		}
	}
	else if (unk_0x0101C509A6E67F99(iParam0))
	{
		unk_0x5D3946F818C6B331(iVar0, func_106(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
		unk_0x6A52036D51C7E18E(iVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(iVar0, func_106(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_106(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_107()
{
	int iVar0;
	var uVar1;
	
	iVar0 = joaat("pickup_money_purse");
	if (!bLocal_90)
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar1, 3);
		unk_0x0B0C9A0F9AAEB7F0(&uVar1, 4);
		unk_0x0B0C9A0F9AAEB7F0(&uVar1, true);
		uLocal_89 = unk_0x8D4CAF9A056EA9E4(iVar0, unk_0x240E88FB0B8CC932(iLocal_55, 1067030938, 1069547520), uVar1, iLocal_133, 1, iLocal_101);
		bLocal_90 = true;
		iLocal_60 = func_108(uLocal_89);
		func_120(&Local_107, cLocal_123, sLocal_119, 4, 0, 0, 0);
		if (unk_0xC450B06E5AAA0985(iLocal_59))
		{
			unk_0xFE54B8568B2ABD12(&iLocal_59);
		}
		if (func_110(iLocal_56))
		{
			unk_0x974022927CB47E68(iLocal_56);
		}
	}
	else
	{
		if (!iLocal_91)
		{
			if (!func_180(iLocal_56, joaat("script_task_perform_sequence")) && !unk_0x4FAFF4BCB7633475(iLocal_56))
			{
				unk_0xB5396F1FB088FE38(&uLocal_61);
				if (!unk_0x65FFA94B82A71741(iLocal_56, Local_138, 0.5f, 0.5f, 0.5f, 0, 1, 0))
				{
					unk_0x63C8DCBEC1CF8225(0, Local_138, 1f, 20000, 1193033728, 1056964608);
				}
				unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 0);
				unk_0x10425721983AE158(0, cLocal_148, sLocal_149, 8f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, cLocal_148, sLocal_151, 8f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, cLocal_148, sLocal_150, 8f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x93C0674FC00824D0(uLocal_61);
				unk_0x4BD42B0527065BB6(iLocal_56, uLocal_61);
				unk_0xD0557B139A542F12(&uLocal_61);
			}
		}
		if (iLocal_91)
		{
			if (!bLocal_95)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_56))
				{
					if (unk_0x13CCB1AD131C1082(iLocal_56, cLocal_93, "pickup_low", 3))
					{
						if (unk_0x82E64DE58A6B84A8(iLocal_56, cLocal_93, "pickup_low") > 0.35f)
						{
							if (unk_0xB0E14182FAD64944(uLocal_89))
							{
								func_120(&Local_107, cLocal_123, cLocal_120, 4, 0, 0, 0);
								unk_0xDDFB0941A19702BE(uLocal_89);
								unk_0x886FA295C1257AAA(iLocal_56, iLocal_133);
								unk_0xAAA71DD7E9059338(iLocal_56, 0);
								unk_0xF09E30AF1B8FB379(&iLocal_56);
								func_294(1);
							}
						}
					}
					else if (unk_0x9B5C1660CCDF7189(iLocal_56, joaat("script_task_perform_sequence")) == 7)
					{
						unk_0x974022927CB47E68(iLocal_56);
						unk_0xB5396F1FB088FE38(&uLocal_61);
						unk_0x10425721983AE158(0, cLocal_93, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), 3000, 2048, 2);
						unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 3000);
						unk_0x761F56E633460973(0, 1193033728, 0);
						unk_0x93C0674FC00824D0(uLocal_61);
						unk_0x4BD42B0527065BB6(iLocal_56, uLocal_61);
						unk_0xD0557B139A542F12(&uLocal_61);
						unk_0x44FB298D6382876D(iLocal_56, 1);
					}
				}
			}
		}
		else if (!unk_0x4FAFF4BCB7633475(iLocal_56))
		{
			if (unk_0xB0E14182FAD64944(uLocal_89))
			{
				if (unk_0x65FFA94B82A71741(iLocal_56, unk_0x80C8AA1625977488(uLocal_89), 10f, 10f, 7f, 0, 1, 0))
				{
					unk_0x974022927CB47E68(iLocal_56);
					unk_0xB5396F1FB088FE38(&uLocal_61);
					unk_0xA966E518B752B92A(0, unk_0x80C8AA1625977488(uLocal_89), 1f, 20000, 1f, 512, 1193033728);
					unk_0xCD76801E1106CABE(0, unk_0x80C8AA1625977488(uLocal_89), 0);
					unk_0x10425721983AE158(0, cLocal_93, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), 3000, 2048, 2);
					unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), 3000);
					unk_0x761F56E633460973(0, 1193033728, 0);
					unk_0x93C0674FC00824D0(uLocal_61);
					unk_0x4BD42B0527065BB6(iLocal_56, uLocal_61);
					unk_0xD0557B139A542F12(&uLocal_61);
					unk_0x44FB298D6382876D(iLocal_56, 1);
					iLocal_91 = 1;
				}
			}
		}
	}
}

int func_108(var uParam0)
{
	return func_109(uParam0);
}

int func_109(var uParam0)
{
	var uVar0;
	
	if (!unk_0xB0E14182FAD64944(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xA1521B7DF72BC9C8(uParam0);
	unk_0x5D3946F818C6B331(uVar0, func_106(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
	return iVar0;
}

int func_110(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_111()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	switch (bLocal_65)
	{
		case 1:
		case 2:
			if (unk_0x9B3D4335E0EDB0BE(iLocal_55, unk_0x4A8C381C258A124D(), 1))
			{
				unk_0xE4DC7B3DD712372B(iLocal_55);
				bVar0 = true;
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_73, 0) && unk_0xCECDBB848D53DEB2(iLocal_55, iLocal_73, 0))
			{
				if (unk_0x67AC1AE8A2697D67(iLocal_73))
				{
					if (unk_0x413E19AD37DE3A4C(iLocal_73))
					{
						bVar0 = true;
					}
				}
			}
			else if (!unk_0xD9F5E1FEFD1329E4(iLocal_73, 0) || !func_180(iLocal_55, joaat("script_task_vehicle_mission")))
			{
				bVar0 = true;
			}
			if (!unk_0xCA038E64C65D1F9D(iLocal_55))
			{
				if (unk_0x9B5C1660CCDF7189(iLocal_55, joaat("script_task_vehicle_mission")) == 7)
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				if (!iLocal_86)
				{
					if (unk_0xCECDBB848D53DEB2(iLocal_55, iLocal_73, 0))
					{
						if (unk_0x9B5C1660CCDF7189(iLocal_55, joaat("script_task_perform_sequence")) != 1 && unk_0x9B5C1660CCDF7189(iLocal_55, joaat("script_task_perform_sequence")) != 0)
						{
							unk_0xB5396F1FB088FE38(&uLocal_62);
							unk_0x092B9247AF00F5CF(0, 0, 0);
							unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 300f, -1, 0, 0);
							unk_0x93C0674FC00824D0(uLocal_62);
							unk_0x4BD42B0527065BB6(iLocal_55, uLocal_62);
							unk_0xD0557B139A542F12(&uLocal_62);
						}
					}
					else if (unk_0x9B5C1660CCDF7189(iLocal_55, joaat("script_task_perform_sequence")) != 1 && unk_0x9B5C1660CCDF7189(iLocal_55, joaat("script_task_perform_sequence")) != 0)
					{
						unk_0xB5396F1FB088FE38(&uLocal_62);
						unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 300f, -1, 0, 0);
						unk_0x93C0674FC00824D0(uLocal_62);
						unk_0x4BD42B0527065BB6(iLocal_55, uLocal_62);
						unk_0xD0557B139A542F12(&uLocal_62);
					}
					iVar1 = unk_0x604F9A1C471B5137(iLocal_55);
					if (iVar1 == 2)
					{
						unk_0x974022927CB47E68(iLocal_55);
						if (func_110(unk_0x4A8C381C258A124D()))
						{
							unk_0x62A5310368A20EFA(iLocal_55, unk_0x4A8C381C258A124D(), 0, 16);
						}
						iLocal_86 = 1;
					}
				}
			}
			break;
	}
}

int func_112()
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_55))
	{
		if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_55, 180f, 180f, 50f, 0, 1, 0) || !unk_0xF6C26AE940C14749(iLocal_55))
		{
			func_113(iLocal_59, iLocal_55, 180f, 1061158912, 0);
			return 1;
		}
		else
		{
			if (Local_107[2 /*10*/].f_7)
			{
				func_183(&Local_107, 2);
			}
			unk_0x734A9F4537A31459(&iLocal_55);
			if (unk_0xD9F5E1FEFD1329E4(iLocal_73, 0))
			{
				if (unk_0xF6C26AE940C14749(iLocal_73))
				{
					unk_0x8C1F7D7A31B2A38E(&iLocal_73);
				}
			}
		}
	}
	else if (vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), unk_0xD1A6A821F5AC81DB(iLocal_55, 0)) < 300f)
	{
		return 1;
	}
	return 0;
}

void func_113(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xC450B06E5AAA0985(uParam0))
	{
		if ((unk_0xFC8BFE4B41177C22(iParam1) && unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D())) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x55B80B6E7AB61270(iParam1))
			{
				if (unk_0xD9F5E1FEFD1329E4(unk_0xE93EDE86BBB66532(iParam1), 0))
				{
					fVar1 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x861AC9C2D48CEA7F(iParam0, 1);
						unk_0xF42EBD7CD0682A8B(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x861AC9C2D48CEA7F(iParam0, 0);
						unk_0xF42EBD7CD0682A8B(iParam0, 255);
					}
				}
			}
			else if (unk_0x0101C509A6E67F99(iParam1))
			{
				if (!unk_0x4FAFF4BCB7633475(unk_0xBD545F8729E9F413(iParam1)))
				{
					fVar1 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x861AC9C2D48CEA7F(iParam0, 1);
						unk_0xF42EBD7CD0682A8B(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x861AC9C2D48CEA7F(iParam0, 0);
						unk_0xF42EBD7CD0682A8B(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_114(int iParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(iParam0, sParam1, func_115(iParam2), 1);
}

int func_115(int iParam0)
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

float func_116(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	}
	if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
	}
	else
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Var1, iParam2);
}

void func_117(int iParam0, var uParam1)
{
	if (unk_0xC450B06E5AAA0985(uParam0))
	{
		if (unk_0x1DD05E817C89C737() > *uParam1 + 500)
		{
			if (unk_0xA247F53580E53DCE(iParam0) == 1)
			{
				unk_0x6A52036D51C7E18E(iParam0, true);
			}
			else
			{
				unk_0x6A52036D51C7E18E(iParam0, false);
				unk_0x61183D6239A9D7B8(iParam0, 1);
			}
			*uParam1 = unk_0x1DD05E817C89C737();
		}
		if (!unk_0x4C705AAF75363287() && func_118(0))
		{
			func_100(1);
		}
	}
}

var func_118(int iParam0)
{
	return BitTest(Global_113644, iParam0);
}

void func_119()
{
	switch (bLocal_65)
	{
		case 1:
		case 2:
			if (unk_0xD9F5E1FEFD1329E4(iLocal_73, 0))
			{
				if (iLocal_126)
				{
					if (unk_0xF4244288C3EF3306(iLocal_55, iLocal_73) || unk_0x9B5C1660CCDF7189(iLocal_55, joaat("script_task_vehicle_mission")) == 1)
					{
						unk_0x30CCF17FEE4BDA53(iLocal_55, iLocal_73, Local_53, 8, 35f, 786469, 10f, 10f, 1);
					}
					else
					{
						unk_0xD844F5E50DAB6FF7(iLocal_55, unk_0x4A8C381C258A124D(), 300f, -1, 0, 0);
					}
				}
				else
				{
					if (!unk_0x67AC1AE8A2697D67(iLocal_73))
					{
						unk_0x177C21F54C9A6E9E(iLocal_73, 0.1f, 1000, 0, 0, 0, -1);
					}
					unk_0x30CCF17FEE4BDA53(iLocal_55, iLocal_73, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 8, 35f, 786469, 10f, 10f, 1);
				}
			}
			else
			{
				unk_0xD844F5E50DAB6FF7(iLocal_55, unk_0x4A8C381C258A124D(), 300f, -1, 0, 0);
			}
			break;
		
		case 4:
			if (!iLocal_126)
			{
				unk_0xB5396F1FB088FE38(&uLocal_61);
				unk_0xA966E518B752B92A(0, 182.61f, 6637.91f, 30.54f, 3f, 20000, 0.25f, 1, 1193033728);
				unk_0xA966E518B752B92A(0, 240.53f, 6694.1f, 28.62f, 3f, 20000, 0.25f, 1, 1193033728);
				unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 300f, -1, 0, 0);
				unk_0x93C0674FC00824D0(uLocal_61);
				unk_0x4BD42B0527065BB6(iLocal_55, uLocal_61);
				unk_0xD0557B139A542F12(&uLocal_61);
			}
			else
			{
				unk_0xD844F5E50DAB6FF7(iLocal_55, unk_0x4A8C381C258A124D(), 300f, -1, 0, 0);
			}
			break;
		
		default:
			if (unk_0xED977E2AE2CB16EE(Local_53, -3044.11f, 594.34f, 6.73f, 1) < 5f)
			{
				unk_0xFD251F92B546F389(iLocal_55, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 300f, -1, 0, 0);
				unk_0xD0557B139A542F12(&uLocal_61);
			}
			else if (iLocal_126)
			{
				unk_0xD844F5E50DAB6FF7(iLocal_55, unk_0x4A8C381C258A124D(), 300f, -1, 0, 0);
			}
			else
			{
				unk_0xFD251F92B546F389(iLocal_55, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 300f, -1, 0, 0);
			}
			break;
	}
	if (!unk_0x4FAFF4BCB7633475(iLocal_55))
	{
		unk_0x44FB298D6382876D(iLocal_55, 1);
	}
}

bool func_120(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_62(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_121(sParam2, iParam3, 0);
}

int func_121(char* sParam0, int iParam1, bool bParam2)
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
					func_60();
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
		if (func_59(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_58();
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
				func_57();
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
				if (func_56())
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
			func_54();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_53();
		func_122();
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
		func_60();
	}
	return 0;
}

void func_122()
{
	if (!func_123())
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

int func_123()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_126())
	{
		return 0;
	}
	if (func_124(unk_0x259BE71D8A81D4FA()))
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

bool func_124(int iParam0)
{
	return func_125(iParam0, 20);
}

var func_125(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_126()
{
	return -1;
}

bool func_127()
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	Var1 = { 6f, 6f, 6f };
	Var2 = { -6f, -6f, -6f };
	if (!unk_0x4FAFF4BCB7633475(iLocal_56))
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iLocal_56))
			{
				iLocal_67++;
				if (iLocal_67 > 60)
				{
					bVar0 = true;
				}
			}
			else
			{
				iLocal_67 = 0;
			}
		}
		if (unk_0x398315D0C90DE6F6(unk_0x83FDC027F0BEA202(iLocal_56, 31086, 0f, 0f, 0f), 2f, 1))
		{
			bVar0 = true;
		}
		Var1 = { Var1 + unk_0x83FDC027F0BEA202(iLocal_56, 31086, 0f, 0f, 0f) };
		Var2 = { Var2 + unk_0x83FDC027F0BEA202(iLocal_56, 31086, 0f, 0f, 0f) };
		if ((unk_0x7A082DC02E5E00C1(Var2, Var1, joaat("weapon_smokegrenade"), 1) || unk_0x7A082DC02E5E00C1(Var2, Var1, joaat("weapon_grenade"), 1)) || unk_0x7A082DC02E5E00C1(Var2, Var1, joaat("weapon_stickybomb"), 1))
		{
			bVar0 = true;
		}
		if (unk_0x5713DE6DB59E98EB(unk_0x83FDC027F0BEA202(iLocal_56, 31086, 0f, 0f, 0f), 12f))
		{
			bVar0 = true;
		}
		if (unk_0x8764A5B95AE1F967(-1, unk_0x83FDC027F0BEA202(iLocal_56, 31086, 0f, 0f, 0f), 50f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!func_129())
		{
		}
		else
		{
			bVar0 = false;
			if (unk_0x9B5C1660CCDF7189(iLocal_56, joaat("script_task_cower")) != 1)
			{
				if (func_128(iLocal_56))
				{
					unk_0xAFC7A89C990C4339(iLocal_56, 2000);
				}
			}
		}
	}
	return bVar0;
}

int func_128(int iParam0)
{
	if (func_110(iParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_129()
{
	if (func_110(iLocal_55))
	{
		if (func_116(iLocal_56, iLocal_55, 1) < 22f)
		{
			return 1;
		}
	}
	return 0;
}

bool func_130()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0xFC8BFE4B41177C22(iLocal_56))
	{
		if (unk_0x4FAFF4BCB7633475(iLocal_56))
		{
			bVar0 = true;
		}
		else
		{
			if (unk_0x9B3D4335E0EDB0BE(iLocal_56, unk_0x4A8C381C258A124D(), 1) && unk_0x8BF5256C439DF778(iLocal_56))
			{
				bVar0 = true;
				unk_0xE4DC7B3DD712372B(iLocal_56);
			}
			if (unk_0x398315D0C90DE6F6(unk_0xD1A6A821F5AC81DB(iLocal_56, 1), 1f, 1))
			{
				bVar0 = true;
			}
			if (func_131(iLocal_56, 0, 1116471296, 1126825984, 0, 1, 0, 0))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		if (func_129())
		{
			bVar0 = false;
			if (unk_0x9B5C1660CCDF7189(iLocal_56, joaat("script_task_cower")) != 1)
			{
				if (func_128(iLocal_56))
				{
					unk_0xAFC7A89C990C4339(iLocal_56, 2000);
				}
			}
		}
		else if (!unk_0x4FAFF4BCB7633475(iLocal_55))
		{
			if (unk_0x9B5C1660CCDF7189(iLocal_55, joaat("script_task_smart_flee_ped")) == 7)
			{
				unk_0xBE8796DB2B90A437(iLocal_55, 17, 1);
				unk_0xBE8796DB2B90A437(iLocal_55, 13, 0);
				unk_0xD844F5E50DAB6FF7(iLocal_55, unk_0x4A8C381C258A124D(), 300f, -1, 0, 0);
			}
		}
	}
	return bVar0;
}

int func_131(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_110(unk_0x4A8C381C258A124D()) && func_110(iParam0))
	{
		if (unk_0x9B3D4335E0EDB0BE(iParam0, unk_0x4A8C381C258A124D(), 1))
		{
			return 1;
		}
		if (func_145(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
		{
			if (unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()))
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) - unk_0xD1A6A821F5AC81DB(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_144(unk_0x4A8C381C258A124D(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_132(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_132(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_110(unk_0x4A8C381C258A124D()) && func_110(iParam0))
	{
		if (func_143(iParam0) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iParam0))
		{
			if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_133(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_133(int iParam0, float fParam1)
{
	return func_134(iParam0, unk_0x4A8C381C258A124D(), fParam1, 1, 250, 7);
}

bool func_134(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	
	iVar2 = func_142(iParam0, iParam1);
	if (!func_110(iParam0) || !func_110(iParam1))
	{
		if (iVar2 != -1)
		{
			func_141(&(Local_49[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_138(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_137();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_49[iVar2 /*4*/].f_1 = iParam0;
		Local_49[iVar2 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_135(&(Local_49[iVar2 /*4*/]), Var1, iParam1, &(Local_49[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x1DD05E817C89C737() - Local_49[iVar2 /*4*/].f_3) < iParam4);
}

int func_135(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_110(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_136(iParam2, iParam5) };
		*uParam0 = unk_0x120E577522852984(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = unk_0x0E7DD1EBCA8D2DE3(*uParam0, &uVar0, &Var1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x0101C509A6E67F99(iVar3))
	{
		func_110(iVar3);
		if (unk_0xBD545F8729E9F413(iVar3) == iParam2)
		{
			if (bLocal_50)
			{
				unk_0x7B26600F66208BC6(Param1, unk_0xD1A6A821F5AC81DB(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = unk_0x1DD05E817C89C737();
			return 1;
		}
		return 0;
	}
	if (unk_0x55B80B6E7AB61270(iVar3))
	{
		func_110(iVar3);
		if (unk_0x7F420695E3F776FB(iParam2, 0))
		{
			if (unk_0xE93EDE86BBB66532(iVar3) == unk_0x6EF03BE64E058E2F(iParam2, 0))
			{
				if (bLocal_50)
				{
					unk_0x7B26600F66208BC6(Param1, unk_0xD1A6A821F5AC81DB(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = unk_0x1DD05E817C89C737();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_136(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0xC5935DFB3F39785A(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xD1A6A821F5AC81DB(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x83FDC027F0BEA202(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x83FDC027F0BEA202(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x83FDC027F0BEA202(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x83FDC027F0BEA202(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x83FDC027F0BEA202(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xD1A6A821F5AC81DB(iParam0, 1);
}

int func_137()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49.f_0)
	{
		if ((Local_49[iVar0 /*4*/] == 0 && Local_49[iVar0 /*4*/].f_1 == 0) && Local_49[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_138(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_140(unk_0xD1A6A821F5AC81DB(iParam1, 1) - unk_0xD1A6A821F5AC81DB(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { unk_0x90D0E0397D3F7690(iParam0) };
	}
	else
	{
		Var1 = { func_140(unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 5f, 0f) - unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_139(Var1, Var0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_139(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_140(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_141(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_142(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49.f_0)
	{
		if (Local_49[iVar0 /*4*/].f_1 == iParam0 && Local_49[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_143(int iParam0)
{
	if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iParam0) && unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_144(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0x90D0E0397D3F7690(iParam0) };
	Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) - unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	return (((Var0.f_0 * Var1.f_0) + (Var0.f_1 * Var1.f_1)) / vdist(Var1, 0f, 0f, 0f)) > cos(fParam2);
}

int func_145(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_110(unk_0x4A8C381C258A124D()) && func_110(iParam0))
	{
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_149(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_146(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x3C2402675D8FFADA(unk_0x4A8C381C258A124D()))
			{
				if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
				{
					if (unk_0x398315D0C90DE6F6(unk_0xD1A6A821F5AC81DB(iParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_149(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_146(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_146(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	Var1 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var1.f_0 = (Var1.f_0 + fParam1);
	Var1.f_1 = (Var1.f_1 + fParam1);
	Var1.f_2 = (Var1.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x8EC0BB480F11446F(unk_0xD1A6A821F5AC81DB(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x8EC0BB480F11446F(unk_0xD1A6A821F5AC81DB(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x8EC0BB480F11446F(unk_0xD1A6A821F5AC81DB(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x8EC0BB480F11446F(unk_0xD1A6A821F5AC81DB(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_147(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_147(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE94C7FA27FEB00DD(Var0, Var1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_147(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0xF67924A428A734EC(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0xF67924A428A734EC(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0xF67924A428A734EC(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0xF67924A428A734EC(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0xF67924A428A734EC(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_148(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_148(int iParam0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_140(Param1 - unk_0xD1A6A821F5AC81DB(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { unk_0x90D0E0397D3F7690(iParam0) };
	}
	else
	{
		Var1 = { func_140(unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 5f, 0f) - unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_139(Var1, Var0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_149(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
		{
			if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x398315D0C90DE6F6(unk_0xD1A6A821F5AC81DB(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

void func_150()
{
	if (bLocal_90 || unk_0x1C2F771CDC87A3A5(iLocal_55, 0))
	{
		func_178(&uLocal_152, 0, 0);
	}
	else
	{
		func_151(&uLocal_152, iLocal_55, "ATM_CHASEHINT", 0, 1, 1, 1);
	}
}

void func_151(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_152(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_152(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_153(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_153(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		func_178(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_154(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_154(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xE37AC296E66C33AF())
	{
		if (unk_0x1DD05E817C89C737() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (unk_0xFF692AB7350A74D7(iVar0))
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_96(iVar0))
	{
		func_177();
	}
	if (func_176(iParam1) && unk_0xE5E2AE8B19267B8A(iParam1))
	{
		iVar1 = 0;
		if (unk_0x0101C509A6E67F99(iParam1))
		{
			unk_0x7A8C6BB4DA2434F1(unk_0xBD545F8729E9F413(iParam1));
			unk_0x7AA365BA6A18440B(unk_0xBD545F8729E9F413(iParam1), 1);
			if (unk_0x731EE2A006FD5120(unk_0xBD545F8729E9F413(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x55B80B6E7AB61270(iParam1))
		{
			unk_0x8FBF79AC214E3747(unk_0xE93EDE86BBB66532(iParam1));
			if (unk_0x4F7C7E268667C7B3(unk_0xE93EDE86BBB66532(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xBE79A96C521F4432(iParam1))
		{
			unk_0x33D763C13554690A(unk_0x0646D07BB2D516CD(iParam1));
			if (unk_0xF31BAE02C52ADEFD(unk_0x0646D07BB2D516CD(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xE37AC296E66C33AF())
		{
			if (func_171(uParam0, bParam5, bParam7, 0))
			{
				func_168(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_158(iVar0))
				{
					if ((unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0)) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if ((iVar1 && !unk_0x4C705AAF75363287()) && uParam6)
						{
							if (!func_96(iVar0))
							{
								func_101(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
								{
									func_157(1);
								}
							}
						}
					}
				}
			}
			else if (func_158(iVar0))
			{
				if (unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0))
				{
					if (((unk_0xCB5CAFF0A4A8B74B(iParam1) && iVar1) && !unk_0x4C705AAF75363287()) && uParam6)
					{
						if (!func_96(iVar0))
						{
							func_101(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
							{
								func_157(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xFF692AB7350A74D7(sParam3))
			{
				if (func_96(sParam3))
				{
					unk_0x428C32CC68809A35(1);
				}
			}
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
			{
				if (unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(3) == 3 || unk_0xBCF87EE3DC296C2A(3) == 4)
					{
						func_178(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
					{
						func_178(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
					{
						func_178(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
					{
						func_178(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
					{
						func_178(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
				{
					func_178(uParam0, iVar0, 1);
				}
			}
			if (!func_171(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_156(uParam0))
				{
					func_155(uParam0);
				}
			}
		}
	}
	else
	{
		func_178(uParam0, iVar0, 0);
	}
}

void func_155(var uParam0)
{
	if (func_176(unk_0x4A8C381C258A124D()))
	{
		unk_0x84B06A81C98DA4B8(unk_0x4A8C381C258A124D());
	}
	if (unk_0xE37AC296E66C33AF())
	{
		unk_0x0A0A06C514052E80(1);
		unk_0x3C44EF9027A21847(0);
		unk_0xB43467C43086A6A1("HINT_CAM_SCENE");
		unk_0x21172E4DF035B893("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xDCAFFD08A08087EB("FocusOut", 0, 0);
			unk_0xBF3D28CA44F3BE2D(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_156(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x1DD05E817C89C737()
		{
			return 1;
		}
	}
	return 0;
}

int func_157(bool bParam0)
{
	switch (Global_43257)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_113648.f_10051.f_100++;
			}
			return Global_113648.f_10051.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_113648.f_10051.f_101++;
			}
			return Global_113648.f_10051.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_113648.f_10051.f_102++;
			}
			return Global_113648.f_10051.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_158(char* sParam0)
{
	if (!func_159(1, 1, 0))
	{
		if ((!unk_0xD6F9DEE4765092A9(sParam0) && func_96(sParam0)) || func_96("CMN_HINT"))
		{
			unk_0x428C32CC68809A35(1);
		}
		return 0;
	}
	switch (Global_43257)
	{
		case 0:
		case 3:
			if (func_157(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_157(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_157(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_159(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x3555462DB47B7AB1())
	{
		return 0;
	}
	if (func_77(0))
	{
		return 0;
	}
	if (func_167())
	{
		return 0;
	}
	if (unk_0xA43CD45F18522E3F())
	{
		return 0;
	}
	if (Global_75693)
	{
		return 0;
	}
	if (unk_0x486FF5D06E9659F1(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_60543)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
		{
			if (unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(3) == 3 || unk_0xBCF87EE3DC296C2A(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
			{
				return 0;
			}
			if (unk_0xDD851254D8C7D338())
			{
				return 0;
			}
		}
	}
	if ((func_166() || func_165(Global_4718592.f_166301)) || func_164())
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			iVar1 = func_163(unk_0x4A8C381C258A124D(), 0);
			if (((unk_0x333A2A6253C809D2(iVar0, iVar1) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x4B423FAA24E8ABF0(iVar0) == joaat("riot2") && iVar1 == 0) && func_162(iVar0, 10)) && unk_0x94C9CD3D66808551(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1962010)
	{
		return 0;
	}
	if (func_160(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

int func_160(int iParam0)
{
	if (iParam0 != func_126())
	{
		if (func_161(iParam0, 1, 1))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
		else if ((Global_1575060 && iParam0 == unk_0x259BE71D8A81D4FA()) && func_161(iParam0, 1, 0))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

int func_161(int iParam0, bool bParam1, bool bParam2)
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

int func_162(int iParam0, int iParam1)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0x90E3EAFF8AAA1A42(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x5B59C12A02157D00(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_163(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x7F420695E3F776FB(iParam0, iParam1))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(iParam0, iParam1);
			if (unk_0xFC8BFE4B41177C22(iVar0))
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

var func_164()
{
	return Global_2683864.f_19;
}

bool func_165(int iParam0)
{
	return iParam0 == 51;
}

var func_166()
{
	return Global_2683864.f_18;
}

bool func_167()
{
	return unk_0x1DD05E817C89C737() <= Global_23270.f_6321 + 100;
}

void func_168(var uParam0, int iParam1, struct<3> Param2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1581968 == 1)
	{
		return;
	}
	if (unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		func_178(uParam0, 0, 0);
	}
	if (func_63(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x0101C509A6E67F99(iParam1))
		{
			iVar0 = unk_0xBD545F8729E9F413(iParam1);
			if (!unk_0x7F420695E3F776FB(iVar0, 0))
			{
				if (unk_0x501EBB0523078750(iVar0))
				{
					if (!func_169())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xB98B1A5B59BC5065(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x0A0A06C514052E80(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x190BA0A3BB48F7FD(iParam1, Param2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xE67051907958B5EB(unk_0x4A8C381C258A124D(), iParam1, -1, iVar3, iVar4);
	unk_0xDCAFFD08A08087EB("FocusIn", 0, 0);
	unk_0xCAC4020CCF361AC8("HINT_CAM_SCENE");
	unk_0xBF3D28CA44F3BE2D(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x1DD05E817C89C737();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_169()
{
	return func_170(unk_0x259BE71D8A81D4FA());
}

int func_170(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_171(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x1DD05E817C89C737() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					if (func_175(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_174(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_174(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_175(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_156(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					{
						if (!func_175(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1DD05E817C89C737();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_174(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_174(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_175(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					if (!func_175(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_174(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_174(bParam1, bParam2, bParam3) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x12623527E5B8AB7C(unk_0x4A8C381C258A124D(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_175(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					{
						if (func_173(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_172(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || func_172(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x12623527E5B8AB7C(unk_0x4A8C381C258A124D(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_173(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_156(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_159(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_177();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_172(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_159(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x66EFB3D6110055C4(0, 140, 1);
			unk_0x66EFB3D6110055C4(0, 80, 1);
			if (unk_0x61C3701AD6D746B2(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_173(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_159(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x66EFB3D6110055C4(0, 80, 1);
		if (unk_0x77CDF75A783A0B04())
		{
			if (unk_0x61C3701AD6D746B2(0, 80))
			{
				unk_0x0A0A06C514052E80(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_174(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_159(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x66EFB3D6110055C4(0, 140, 1);
			unk_0x66EFB3D6110055C4(0, 80, 1);
			if (unk_0x4465D55576678706(0, 80) && unk_0x1DD05E817C89C737() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_175(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_159(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x66EFB3D6110055C4(0, 80, 1);
		if (unk_0x77CDF75A783A0B04())
		{
			if (unk_0x4465D55576678706(0, 80) && unk_0x1DD05E817C89C737() > Global_116)
			{
				unk_0x0A0A06C514052E80(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_176(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0x55B80B6E7AB61270(iParam0))
		{
			if (unk_0xD9F5E1FEFD1329E4(unk_0xE93EDE86BBB66532(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x0101C509A6E67F99(iParam0))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0xBD545F8729E9F413(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xBE79A96C521F4432(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_177()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 4);
}

void func_178(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (BitTest(Global_2793046.f_4690, 26))
		{
			return;
		}
	}
	if (unk_0xE37AC296E66C33AF())
	{
		unk_0x3C44EF9027A21847(iParam2);
		unk_0x21172E4DF035B893("FocusIn");
		unk_0xB43467C43086A6A1("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xDCAFFD08A08087EB("FocusOut", 0, 0);
			unk_0xBF3D28CA44F3BE2D(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x0A0A06C514052E80(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xFF692AB7350A74D7(sVar0))
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xFF692AB7350A74D7(uParam0->f_3))
	{
		if (func_96(uParam0->f_3))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
	if (!unk_0xFF692AB7350A74D7(sVar0))
	{
		if (func_96(sVar0))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
}

float func_179(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Param1, iParam2);
}

int func_180(int iParam0, int iParam1)
{
	if (func_128(iParam0))
	{
		if (unk_0x9B5C1660CCDF7189(iParam0, iParam1) == 1 || unk_0x9B5C1660CCDF7189(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_181(char* sParam0)
{
	func_182(sParam0);
}

void func_182(char* sParam0)
{
	if (unk_0x1B79E937E91F40C3(sParam0, sParam0))
	{
	}
}

void func_183(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_184()
{
	unk_0xB5396F1FB088FE38(&uLocal_61);
	unk_0x0E95B96CFEFE7B61(0, iLocal_55, 750);
	unk_0x10425721983AE158(0, cLocal_148, sLocal_149, 8f, -8f, -1, 0, 0, 0, 0, 0);
	unk_0x10425721983AE158(0, cLocal_148, sLocal_150, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x10425721983AE158(0, cLocal_148, sLocal_151, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x10425721983AE158(0, cLocal_148, sLocal_149, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x10425721983AE158(0, cLocal_148, sLocal_150, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x10425721983AE158(0, cLocal_148, sLocal_151, 8f, -2f, -1, 1, 0, 0, 0, 0);
	unk_0x93C0674FC00824D0(uLocal_61);
	unk_0x4BD42B0527065BB6(iLocal_56, uLocal_61);
	unk_0xD0557B139A542F12(&uLocal_61);
	if (unk_0xC450B06E5AAA0985(iLocal_58))
	{
		unk_0xFE54B8568B2ABD12(&iLocal_58);
	}
	if (!unk_0xC450B06E5AAA0985(iLocal_59))
	{
		iLocal_59 = func_103(iLocal_55, 1, 0);
	}
	unk_0x89FE619BFBB2024B(iLocal_59, 1);
	unk_0xD682DD0578BF5392(0);
	unk_0x425BBE19F25A57AB(0.1f);
	func_119();
	if ((vdist(unk_0xD1A6A821F5AC81DB(iLocal_56, 0), -2956.26f, 487.97f, 15.46f) > 5f && unk_0xED977E2AE2CB16EE(Local_53, -203.72f, -861.8f, 29.27f, 1) > 5f) && unk_0xED977E2AE2CB16EE(Local_53, 288.46f, -1256.71f, 28.44f, 1) > 5f)
	{
		if (func_116(unk_0x4A8C381C258A124D(), iLocal_56, 1) < 50f)
		{
			func_120(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0);
			iLocal_85 = 1;
		}
	}
	iLocal_66 = unk_0x1DD05E817C89C737();
	settimera(0);
	if (func_110(unk_0x4A8C381C258A124D()))
	{
		unk_0xFD61BB3B8F1CDB6D(unk_0x4A8C381C258A124D(), 1);
	}
	func_185(1);
}

int func_185(int iParam0)
{
	if (func_187())
	{
		Global_113638 = 1;
		Global_113635 = unk_0x1DD05E817C89C737();
		if (func_186(Global_113637))
		{
			func_100(0);
		}
		unk_0xB51A8DA1DD0D2E4E(1, "RE_TITLE");
		if (iParam0 && func_186(Global_113637))
		{
			unk_0x2716F9D3A99349AB();
		}
		return 1;
	}
	return 0;
}

int func_186(int iParam0)
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

int func_187()
{
	switch (func_188(&Global_32223, 0, 5, 0, unk_0x8F76B2250AC806FA()))
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

int func_188(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_192(0))
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
		if (!func_190(iParam2))
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
			func_189(uParam0, iParam4);
		}
	}
	return 2;
}

void func_189(var uParam0, int iParam1)
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

bool func_190(int iParam0)
{
	return func_191(iParam0, Global_43257);
}

int func_191(int iParam0, int iParam1)
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

int func_192(int iParam0)
{
	if (Global_43257 == 15)
	{
		return 0;
	}
	if (func_190(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_193()
{
	if (iLocal_134 == -1)
	{
		if (unk_0x5EA7A06A1491D450())
		{
			if (unk_0xCB5CAFF0A4A8B74B(iLocal_55))
			{
				iLocal_134 = unk_0x1DD05E817C89C737();
			}
		}
	}
	else if (unk_0x1DD05E817C89C737() > iLocal_134 + 1000)
	{
		return 1;
	}
	if (unk_0x8764A5B95AE1F967(-1, Local_53, 50f))
	{
		return 1;
	}
	if ((unk_0x1DD05E817C89C737() - iLocal_135) > 30000)
	{
		if (!unk_0xF6C26AE940C14749(iLocal_55))
		{
			return 1;
		}
		else
		{
			func_276();
		}
	}
	if (unk_0xC450B06E5AAA0985(iLocal_59))
	{
		if ((unk_0xED977E2AE2CB16EE(Local_53, -3044.11f, 594.34f, 6.73f, 1) > 5f && unk_0xED977E2AE2CB16EE(Local_53, -712.9f, -819.32f, 22.73f, 1) > 5f) && unk_0xED977E2AE2CB16EE(Local_53, 24.13f, -946.84f, 28.36f, 1) > 5f)
		{
			if (unk_0x7B780C491DEC834E(unk_0xD1A6A821F5AC81DB(iLocal_55, 0), 2.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_194()
{
	if (vdist(Local_53, -3044.06f, 594.93f, 6.74f) < 5f)
	{
		if (!unk_0xC450B06E5AAA0985(iLocal_59))
		{
			if (func_110(iLocal_56) && func_110(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 60f, 90f, 12f, 0, 1, 0))
				{
					iLocal_59 = func_103(iLocal_55, 1, 0);
					unk_0x89FE619BFBB2024B(iLocal_59, 0);
				}
			}
		}
		else
		{
			func_117(iLocal_59, &uLocal_70);
		}
	}
	else if (!unk_0xC450B06E5AAA0985(iLocal_59))
	{
		if (func_110(iLocal_56) && func_110(unk_0x4A8C381C258A124D()))
		{
			if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_56, 90f, 90f, 8f, 0, 1, 0))
			{
				iLocal_59 = func_103(iLocal_55, 1, 0);
				unk_0x89FE619BFBB2024B(iLocal_59, 0);
			}
		}
	}
	else
	{
		func_117(iLocal_59, &uLocal_70);
	}
	if (iLocal_135 == -1)
	{
		iLocal_135 = unk_0x1DD05E817C89C737();
	}
}

int func_195()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	
	Var0 = { Local_53 };
	Var1 = { 0f, 0f, uLocal_54 };
	Var2 = { 10f, 10f, 5f };
	if (bLocal_65 == 1)
	{
		func_219();
		if (vdist(Local_53, -203.758f, -861.738f, 29.2684f) < 5f)
		{
			Local_74 = { -197.9643f, -868.5554f, 28.2738f };
			fLocal_76 = 196f;
			Local_75 = { -187.5415f, -858.1728f, 28.1863f };
			fLocal_77 = 160.391f;
			Local_136 = { -259.0351f, -865.7119f, 28f };
			Local_137 = { -130.3981f, -908.8096f, 40f };
			unk_0xF73325FB8144737E("ATM_1");
			unk_0xEC9DAA34BBB4658C(iLocal_106);
			while (!unk_0x6252BC0DD8A320DB(iLocal_106))
			{
				if (func_206())
				{
					func_276();
				}
				wait(0);
			}
			unk_0xCCA6D8A84EE8C88A(iLocal_106, 1);
		}
		else
		{
			Local_74 = { -2968.5f, 494.48f, 14.82f };
			fLocal_76 = 55.24f;
			Local_75 = { -2973.03f, 496.38f, 14.96f };
			fLocal_77 = 3.18f;
			Local_136 = { -259.0351f, -865.7119f, 28f };
			Local_137 = { -130.3981f, -908.8096f, 40f };
			unk_0xEC9DAA34BBB4658C(iLocal_106);
			while (!unk_0x6252BC0DD8A320DB(iLocal_106))
			{
				if (func_206())
				{
					func_276();
				}
				wait(0);
			}
			unk_0xCCA6D8A84EE8C88A(iLocal_106, 1);
		}
	}
	else if (bLocal_65 == 2)
	{
		func_219();
		Local_74 = { 283.31f, -1249.51f, 28.95f };
		fLocal_76 = 78.25f;
		Local_75 = { 288.9906f, -1248.443f, 28.2847f };
		fLocal_77 = 75.9756f;
		Local_136 = { 266.3643f, -1313.829f, 28.59103f };
		Local_137 = { 265.1489f, -1215.932f, 36.20192f };
		unk_0xEC9DAA34BBB4658C(iLocal_106);
		while (!unk_0x6252BC0DD8A320DB(iLocal_106))
		{
			if (func_206())
			{
				func_276();
			}
			wait(0);
		}
		unk_0xCCA6D8A84EE8C88A(iLocal_106, 1);
	}
	else if (bLocal_65 == 3)
	{
		func_219();
		Local_75 = { -1587.15f, -539.9152f, 34.3644f };
		fLocal_77 = 327f;
		Local_136 = { -1596.203f, -474.8844f, 32f };
		Local_137 = { -1595.572f, -565.8368f, 48f };
	}
	else if (bLocal_65 == 4)
	{
		func_219();
		Local_74 = { 181.2355f, 6632.627f, 30.5732f };
		fLocal_76 = 182f;
		Local_75 = { 200.0727f, 6630.587f, 30.517f };
		fLocal_77 = 165f;
		Local_136 = { 178.1817f, 6660.375f, 31f };
		Local_137 = { 179.1249f, 6530.043f, 38f };
		unk_0x7F0D18D1F5BF6D0F(0);
		unk_0xA63572E348CC4CFB(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 0, 1);
		unk_0xEC9DAA34BBB4658C(iLocal_106);
		while (!unk_0x6252BC0DD8A320DB(iLocal_106))
		{
			if (func_206())
			{
				func_276();
			}
			wait(0);
		}
		unk_0xCCA6D8A84EE8C88A(iLocal_106, 1);
	}
	else if (bLocal_65 == 5)
	{
		func_219();
	}
	if (func_197())
	{
		unk_0x2094BC4B6731BA68(Local_53, Var2.f_0, 0, 0, 0, 0);
		uLocal_63 = unk_0xA7B0B03284E7503C(Local_53 - Var2, Local_53 + Var2, 0, 1, 1, 1);
		iLocal_56 = unk_0xB1DBFEB95C0EFB88(5, iLocal_105, Local_53, uLocal_54, 1, 1);
		unk_0xBE8796DB2B90A437(iLocal_56, 13, 0);
		unk_0xBE8796DB2B90A437(iLocal_56, 11, 1);
		unk_0xBE8796DB2B90A437(iLocal_56, 17, 0);
		unk_0xD1C578C204015E1F(iLocal_56, 6, 1, 0, 0);
		unk_0x788F35D395511DFE(iLocal_56, 1, 1);
		unk_0x1F7539C841C2A71F(iLocal_56, 1);
		unk_0x3F58BFCF656F0DF1(iLocal_56, 0);
		unk_0x397CF4F4C8B17365(iLocal_56, sLocal_147);
		unk_0x886FA295C1257AAA(iLocal_56, 0);
		if (bLocal_71 == 1)
		{
			unk_0xD1C578C204015E1F(iLocal_56, 0, 0, 0, 0);
			unk_0xD1C578C204015E1F(iLocal_56, 2, 0, 1, 0);
			unk_0xD1C578C204015E1F(iLocal_56, 3, 0, 1, 0);
			unk_0xD1C578C204015E1F(iLocal_56, 4, 0, 2, 0);
		}
		iLocal_55 = unk_0xB1DBFEB95C0EFB88(22, iLocal_104, Local_53, 0, 1, 1);
		unk_0xBE8796DB2B90A437(iLocal_55, 17, 1);
		unk_0xBE8796DB2B90A437(iLocal_55, 13, 0);
		unk_0xBE8796DB2B90A437(iLocal_55, 6, 1);
		unk_0x1CA08719184AFC6F(iLocal_55, 128, 1);
		unk_0x788F35D395511DFE(iLocal_55, 1, 1);
		unk_0xAAA71DD7E9059338(iLocal_55, 1);
		unk_0x0428AFDCAA63B06E(iLocal_55, 42, 1);
		unk_0x0428AFDCAA63B06E(iLocal_55, 281, 1);
		unk_0x0428AFDCAA63B06E(iLocal_55, 172, 0);
		unk_0x0428AFDCAA63B06E(iLocal_55, 137, 1);
		unk_0x75DACB7D11C3CEF4(iLocal_55);
		unk_0x397CF4F4C8B17365(iLocal_55, sLocal_146);
		unk_0x570AAA413775DFFB(iLocal_55, 1);
		unk_0x62C438C53BB57AFD(iLocal_55, unk_0xBE8776D2466E9EA6(cLocal_92, "b_atm_mugging", Var0, Var1, 0, 2), 0, 0, 1);
		Var3 = { unk_0x7A6103DCF5EE8CC3(cLocal_92, "b_atm_mugging", Var0, Var1, 0, 2) };
		unk_0x5C96CEA06531AB03(iLocal_55, Var3.f_2);
		if (func_110(iLocal_56))
		{
			if (unk_0xB98B1A5B59BC5065(iLocal_56))
			{
				unk_0x62C438C53BB57AFD(iLocal_56, unk_0xBE8776D2466E9EA6("random@atmrobberygen@male", "idle_a", Var0, Var1, 0, 2), 0, 0, 1);
				Var3 = { unk_0x7A6103DCF5EE8CC3("random@atmrobberygen@male", "idle_a", Var0, Var1, 0, 2) };
			}
			else
			{
				unk_0x62C438C53BB57AFD(iLocal_56, unk_0xBE8776D2466E9EA6("random@atmrobberygen@female", "idle_a", Var0, Var1, 0, 2), 0, 0, 1);
				Var3 = { unk_0x7A6103DCF5EE8CC3("random@atmrobberygen@female", "idle_a", Var0, Var1, 0, 2) };
			}
			unk_0x5C96CEA06531AB03(iLocal_56, Var3.f_2);
		}
		unk_0x10425721983AE158(iLocal_55, cLocal_92, "b_atm_mugging", 1000f, -4f, -1, 1, 0, 0, 0, 0);
		if (unk_0xB98B1A5B59BC5065(iLocal_56))
		{
			unk_0x10425721983AE158(iLocal_56, "random@atmrobberygen@male", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x268BE77F77533D03("random@atmrobberygen@female");
		}
		else
		{
			unk_0x10425721983AE158(iLocal_56, "random@atmrobberygen@female", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x268BE77F77533D03("random@atmrobberygen@male");
		}
		unk_0x4BD214FCF7332FF6(iLocal_55, 1);
		unk_0xAAA71DD7E9059338(iLocal_56, 1);
		unk_0xB41DEC3AAC1AA107(iLocal_55, joaat("weapon_pistol"), -1, 1, 1);
		unk_0x45FC566246B3511B(iLocal_55, joaat("weapon_pistol"), 34, 0);
		unk_0x3C0F448853B71C92(iLocal_55, joaat("weapon_pistol"), 0);
		unk_0x87EDE48547CC8942(iLocal_55, 1, 0);
		switch (func_37())
		{
			case 0:
				sLocal_112 = "MICHAEL";
				break;
			
			case 1:
				sLocal_112 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_112 = "TREVOR";
				break;
		}
		func_196(&Local_107, 0, unk_0x4A8C381C258A124D(), sLocal_112, 0, 1);
		func_196(&Local_107, 1, iLocal_56, sLocal_114, 0, 1);
		func_196(&Local_107, 2, iLocal_55, "ATMRobber", 0, 1);
		if (bLocal_65 == 1 || bLocal_65 == 2)
		{
			iLocal_73 = unk_0x5779387E956077A6(iLocal_106, Local_74, fLocal_76, 1, 1, 0);
			unk_0xC229299217554C78(iLocal_73, 1, 1, 0);
			unk_0x306C263AAEC4A988(iLocal_73);
			unk_0xA80E7D11DB73C8BA(iLocal_73, 1);
			if (bLocal_65 == 2)
			{
				unk_0xBFE60A5CC0C835D8(iLocal_73, 0, 0, 0);
			}
			else if (bLocal_65 == 1)
			{
				unk_0xECF7FE1783A38672(iLocal_55, 0);
				unk_0x68F395D64BC35E68(iLocal_55, 3);
			}
			else if (bLocal_65 == 4)
			{
				unk_0x0B74F181ADFC39BF(iLocal_73, 3);
			}
		}
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 0);
		return 1;
	}
	else if (func_206())
	{
		func_276();
	}
	return 0;
}

void func_196(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_197()
{
	unk_0x80813AC549A1E8AE("random@atmrobberygen@male");
	unk_0x80813AC549A1E8AE("random@atmrobberygen@female");
	if (!iLocal_81)
	{
		func_205(&Local_164, 3);
		Local_164.f_146 = unk_0x8034325BF6D6E41F();
		func_204(&Local_164, iLocal_104);
		func_204(&Local_164, iLocal_105);
		func_204(&Local_164, iLocal_101);
		func_204(&Local_164, iLocal_102);
		func_202(&Local_164, cLocal_92);
		func_202(&Local_164, cLocal_148);
		func_202(&Local_164, cLocal_142);
		func_202(&Local_164, cLocal_93);
		iLocal_81 = 1;
	}
	if ((unk_0xE100DD4F82A51BDE("random@atmrobberygen@male") && unk_0xE100DD4F82A51BDE("random@atmrobberygen@female")) && func_198(&Local_164))
	{
		return 1;
	}
	return 0;
}

int func_198(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_199(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_199(var uParam0)
{
	return func_200(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_200(var uParam0, char* sParam1, int iParam2)
{
	if (BitTest(uParam0, 30))
	{
		if (BitTest(uParam0, 29))
		{
			switch (func_201(uParam0))
			{
				case 0:
					return unk_0x6252BC0DD8A320DB(iParam2);
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

int func_201(var uParam0)
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

void func_202(var uParam0, char* sParam1)
{
	func_203(uParam0, 1, -1, sParam1, 0);
}

void func_203(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*18*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 != 4)
				{
					if (!unk_0x1B79E937E91F40C3(sParam3, "NULL"))
					{
						if (unk_0x1B79E937E91F40C3(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
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
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x0B0C9A0F9AAEB7F0(uParam0[iVar0 /*18*/], bParam1);
			unk_0x0B0C9A0F9AAEB7F0(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_204(var uParam0, int iParam1)
{
	func_203(uParam0, 0, iParam1, "NULL", 0);
}

void func_205(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

int func_206()
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_51) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_218())
		{
			return 0;
		}
	}
	if (func_214())
	{
		return 1;
	}
	if (func_207(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_207(float fParam0, bool bParam1)
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
		if (func_39(func_37()))
		{
			iVar5 = func_213();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113648.f_18576[iVar1 /*6*/], 2) && !BitTest(Global_113648.f_18576[iVar1 /*6*/], 3))
				{
					func_208(iVar1, &Var0);
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

void func_208(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_209(uParam1, "Abigail1", func_211(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 1:
			func_209(uParam1, "Abigail2", func_211(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 2:
			func_209(uParam1, "Barry1", func_211(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 3:
			func_209(uParam1, "Barry2", func_211(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_210(iParam0), 1, 1);
			break;
		
		case 4:
			func_209(uParam1, "Barry3", func_211(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 5:
			func_209(uParam1, "Barry3A", func_211(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 6:
			func_209(uParam1, "Barry3C", func_211(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 7:
			func_209(uParam1, "Barry4", func_211(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_210(iParam0), 0, 0);
			break;
		
		case 8:
			func_209(uParam1, "Dreyfuss1", func_211(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 9:
			func_209(uParam1, "Epsilon1", func_211(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 10:
			func_209(uParam1, "Epsilon2", func_211(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 11:
			func_209(uParam1, "Epsilon3", func_211(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 12:
			func_209(uParam1, "Epsilon4", func_211(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 13:
			func_209(uParam1, "Epsilon5", func_211(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 14:
			func_209(uParam1, "Epsilon6", func_211(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 15:
			func_209(uParam1, "Epsilon7", func_211(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 16:
			func_209(uParam1, "Epsilon8", func_211(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 17:
			func_209(uParam1, "Extreme1", func_211(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 18:
			func_209(uParam1, "Extreme2", func_211(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 19:
			func_209(uParam1, "Extreme3", func_211(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 20:
			func_209(uParam1, "Extreme4", func_211(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 21:
			func_209(uParam1, "Fanatic1", func_211(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_210(iParam0), 1, 0);
			break;
		
		case 22:
			func_209(uParam1, "Fanatic2", func_211(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_210(iParam0), 1, 0);
			break;
		
		case 23:
			func_209(uParam1, "Fanatic3", func_211(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_210(iParam0), 0, 1);
			break;
		
		case 24:
			func_209(uParam1, "Hao1", func_211(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_210(iParam0), 0, 1);
			break;
		
		case 25:
			func_209(uParam1, "Hunting1", func_211(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 26:
			func_209(uParam1, "Hunting2", func_211(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 27:
			func_209(uParam1, "Josh1", func_211(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 28:
			func_209(uParam1, "Josh2", func_211(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_210(iParam0), 1, 1);
			break;
		
		case 29:
			func_209(uParam1, "Josh3", func_211(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_210(iParam0), 1, 1);
			break;
		
		case 30:
			func_209(uParam1, "Josh4", func_211(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 31:
			func_209(uParam1, "Maude1", func_211(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 32:
			func_209(uParam1, "Minute1", func_211(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 33:
			func_209(uParam1, "Minute2", func_211(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 34:
			func_209(uParam1, "Minute3", func_211(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 35:
			func_209(uParam1, "MrsPhilips1", func_211(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 36:
			func_209(uParam1, "MrsPhilips2", func_211(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 37:
			func_209(uParam1, "Nigel1", func_211(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 38:
			func_209(uParam1, "Nigel1A", func_211(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_210(iParam0), 1, 1);
			break;
		
		case 39:
			func_209(uParam1, "Nigel1B", func_211(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_210(iParam0), 1, 1);
			break;
		
		case 40:
			func_209(uParam1, "Nigel1C", func_211(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_210(iParam0), 1, 1);
			break;
		
		case 41:
			func_209(uParam1, "Nigel1D", func_211(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_210(iParam0), 1, 1);
			break;
		
		case 42:
			func_209(uParam1, "Nigel2", func_211(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_210(iParam0), 1, 1);
			break;
		
		case 43:
			func_209(uParam1, "Nigel3", func_211(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_210(iParam0), 1, 1);
			break;
		
		case 44:
			func_209(uParam1, "Omega1", func_211(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 45:
			func_209(uParam1, "Omega2", func_211(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 46:
			func_209(uParam1, "Paparazzo1", func_211(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 47:
			func_209(uParam1, "Paparazzo2", func_211(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 48:
			func_209(uParam1, "Paparazzo3", func_211(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 49:
			func_209(uParam1, "Paparazzo3A", func_211(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 50:
			func_209(uParam1, "Paparazzo3B", func_211(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 51:
			func_209(uParam1, "Paparazzo4", func_211(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 52:
			func_209(uParam1, "Rampage1", func_211(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 54:
			func_209(uParam1, "Rampage3", func_211(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 55:
			func_209(uParam1, "Rampage4", func_211(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 56:
			func_209(uParam1, "Rampage5", func_211(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_210(iParam0), 0, 0);
			break;
		
		case 53:
			func_209(uParam1, "Rampage2", func_211(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_210(iParam0), 1, 0);
			break;
		
		case 57:
			func_209(uParam1, "TheLastOne", func_211(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 58:
			func_209(uParam1, "Tonya1", func_211(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 59:
			func_209(uParam1, "Tonya2", func_211(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 60:
			func_209(uParam1, "Tonya3", func_211(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 61:
			func_209(uParam1, "Tonya4", func_211(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		case 62:
			func_209(uParam1, "Tonya5", func_211(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_210(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_209(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_210(int iParam0)
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

struct<2> func_211(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_212(iParam0) };
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

struct<2> func_212(int iParam0)
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

int func_213()
{
	func_38();
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

int func_214()
{
	if (func_217() && !func_218())
	{
		return 1;
	}
	if (func_216() && func_215())
	{
		return 1;
	}
	return 0;
}

bool func_215()
{
	return Global_113366 > 0;
}

int func_216()
{
	if (Global_97603 != -1)
	{
		return 1;
	}
	return 0;
}

int func_217()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 20);
	}
	return 0;
}

int func_218()
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

void func_219()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (bLocal_71 == 0 && bLocal_65 == 5)
	{
		bLocal_71 = unk_0xC5935DFB3F39785A(1, 5);
	}
	else if (bLocal_65 != 5)
	{
		bLocal_71 = bLocal_65;
	}
	switch (bLocal_71)
	{
		case 1:
			iLocal_104 = joaat("g_m_y_armgoon_02");
			sLocal_146 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_01";
			iLocal_105 = joaat("a_f_m_tourist_01");
			sLocal_147 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
			iLocal_106 = joaat("sanchez");
			sLocal_115 = "REAR1_ATTR";
			sLocal_116 = "REAR1_HELP";
			sLocal_117 = "REAR1_PROMPT";
			sLocal_118 = "REAR1_CHASE";
			sLocal_119 = "REAR1_FLEE";
			cLocal_120 = "REAR1_THX";
			sLocal_121 = "REAR1_DAMN";
			switch (func_37())
			{
				case 0:
					sLocal_124 = "REAR1_REM";
					sLocal_122 = "REAR1_FKM";
					sLocal_113 = "REAR1_WM";
					sLocal_125 = "REAR1_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR1_REF";
					sLocal_122 = "REAR1_FKF";
					sLocal_113 = "REAR1_WF";
					sLocal_125 = "REAR1_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR1_RET";
					sLocal_122 = "REAR1_FKT";
					sLocal_113 = "REAR1_WT";
					sLocal_125 = "REAR1_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim1";
			cLocal_123 = "REAR1AU";
			if (iLocal_103 == 0)
			{
				iVar0 = unk_0xC5935DFB3F39785A(0, 3);
				if (iVar0 == 0)
				{
					iLocal_101 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_101 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar1 = func_220();
					if (bVar1)
					{
						iLocal_101 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_101 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_103 = 1;
			}
			cLocal_142 = "RANDOM@ATMROBBERY1";
			sLocal_143 = "Return_Wallet_Positive_A_Player";
			sLocal_144 = "Return_Wallet_Positive_A_Female";
			sLocal_145 = "Return_Wallet_Positive_A_Cam";
			cLocal_148 = "random@car_thief@waiting_ig_4";
			sLocal_149 = "waiting";
			sLocal_150 = "waiting";
			sLocal_151 = "waiting";
			break;
		
		case 2:
			iLocal_104 = joaat("g_m_y_famfor_01");
			sLocal_146 = "G_M_Y_FamFor_01_BLACK_MINI_01";
			iLocal_105 = joaat("a_m_y_hipster_02");
			sLocal_147 = "A_M_Y_Hipster_02_White_Full_01";
			iLocal_106 = joaat("ruiner");
			sLocal_115 = "REAR2_ATTR";
			sLocal_116 = "REAR2_HELP";
			sLocal_117 = "REAR2_PROMPT";
			sLocal_118 = "REAR2_CHASE";
			sLocal_119 = "REAR2_FLEE";
			cLocal_120 = "REAR2_THX";
			sLocal_121 = "REAR2_DAMN";
			switch (func_37())
			{
				case 0:
					sLocal_124 = "REAR2_REM";
					sLocal_122 = "REAR2_FKM";
					sLocal_113 = "REAR2_WM";
					sLocal_125 = "REAR2_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR2_REF";
					sLocal_122 = "REAR2_FKF";
					sLocal_113 = "REAR2_WF";
					sLocal_125 = "REAR2_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR2_RET";
					sLocal_122 = "REAR2_FKT";
					sLocal_113 = "REAR2_WT";
					sLocal_125 = "REAR2_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim2";
			cLocal_123 = "REAR2AU";
			iLocal_101 = joaat("prop_ld_wallet_pickup");
			cLocal_142 = "RANDOM@ATMROBBERY2";
			sLocal_143 = "Return_Wallet_Positive_A_Player";
			sLocal_144 = "Return_Wallet_Positive_A_Male";
			sLocal_145 = "Return_Wallet_Positive_A_Cam";
			cLocal_148 = "RANDOM@BICYCLE_THIEF@IDLE_A";
			sLocal_149 = "IDLE_A";
			sLocal_150 = "IDLE_B";
			sLocal_151 = "IDLE_C";
			break;
		
		case 3:
			iLocal_105 = joaat("a_f_m_tourist_01");
			sLocal_147 = "A_F_Y_Tourist_01_White_Mini_01";
			iLocal_104 = joaat("g_m_y_salvagoon_02");
			sLocal_146 = "G_M_Y_SalvaGoon_02_SALVADORIAN_MINI_03";
			sLocal_115 = "REAR5_ATTR";
			sLocal_116 = "REAR5_HELP";
			sLocal_117 = "REAR5_PROMPT";
			sLocal_118 = "REAR5_CHASE";
			sLocal_119 = "REAR5_FLEE";
			cLocal_120 = "REAR5_THX";
			sLocal_121 = "REAR5_DAMN";
			switch (func_37())
			{
				case 0:
					sLocal_124 = "REAR5_REM";
					sLocal_122 = "REAR5_FKM";
					sLocal_113 = "REAR5_WM";
					sLocal_125 = "REAR5_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR5_REF";
					sLocal_122 = "REAR5_FKF";
					sLocal_113 = "REAR5_WF";
					sLocal_125 = "REAR5_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR5_RET";
					sLocal_122 = "REAR5_FKT";
					sLocal_113 = "REAR5_WT";
					sLocal_125 = "REAR5_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim5";
			cLocal_123 = "REAR5AU";
			if (iLocal_103 == 0)
			{
				iVar0 = unk_0xC5935DFB3F39785A(0, 3);
				if (iVar0 == 0)
				{
					iLocal_101 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_101 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar2 = func_220();
					if (bVar2)
					{
						iLocal_101 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_101 = joaat("prop_ld_wallet_01");
					}
				}
				iLocal_103 = 1;
			}
			cLocal_142 = "RANDOM@ATMROBBERY3";
			sLocal_143 = "Return_Wallet_Positive_B_Player";
			sLocal_144 = "Return_Wallet_Positive_B_Female";
			sLocal_145 = "Return_Wallet_Positive_B_Cam";
			cLocal_148 = "random@car_thief@waiting_ig_4";
			sLocal_149 = "waiting";
			sLocal_150 = "waiting";
			sLocal_151 = "waiting";
			break;
		
		case 4:
			iLocal_105 = joaat("a_f_m_tourist_01");
			sLocal_147 = "A_F_M_BevHills_02_WHITE_FULL_01";
			iLocal_106 = joaat("ruiner");
			iLocal_104 = joaat("g_m_y_azteca_01");
			sLocal_146 = "G_M_Y_Latino01_Latino_MINI_01";
			sLocal_115 = "REAR3_ATTR";
			sLocal_116 = "REAR3_HELP";
			sLocal_117 = "REAR3_PROMPT";
			sLocal_118 = "REAR3_CHASE";
			sLocal_119 = "REAR3_FLEE";
			cLocal_120 = "REAR3_THX";
			sLocal_121 = "REAR3_DAMN";
			switch (func_37())
			{
				case 0:
					sLocal_124 = "REAR3_REM";
					sLocal_122 = "REAR3_FKM";
					sLocal_113 = "REAR3_WM";
					sLocal_125 = "REAR3_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR3_REF";
					sLocal_122 = "REAR3_FKF";
					sLocal_113 = "REAR3_WF";
					sLocal_125 = "REAR3_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR3_RET";
					sLocal_122 = "REAR3_FKT";
					sLocal_113 = "REAR3_WT";
					sLocal_125 = "REAR3_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim3";
			cLocal_123 = "REAR3AU";
			if (iLocal_103 == 0)
			{
				iVar0 = unk_0xC5935DFB3F39785A(0, 3);
				if (iVar0 == 0)
				{
					iLocal_101 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_101 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar3 = func_220();
					if (bVar3)
					{
						iLocal_101 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_101 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_103 = 1;
			}
			cLocal_142 = "RANDOM@ATMROBBERY4";
			sLocal_143 = "Return_Wallet_Positive_C_Player";
			sLocal_144 = "Return_Wallet_Positive_C_Female";
			sLocal_145 = "Return_Wallet_Positive_C_Cam";
			cLocal_148 = "random@car_thief@waiting_ig_4";
			sLocal_149 = "waiting";
			sLocal_150 = "waiting";
			sLocal_151 = "waiting";
			break;
	}
	if (unk_0xED977E2AE2CB16EE(Local_53, -203.72f, -861.8f, 29.27f, 1) < 5f)
	{
		Local_138 = { -197.64f, -863.25f, 28.33f };
		fLocal_139 = 334.5007f;
		Local_140 = { -187.24f, -856.77f, 28.97f };
		fLocal_141 = 162.69f;
		iLocal_72 = 1;
	}
	else if (unk_0xED977E2AE2CB16EE(Local_53, 288.46f, -1256.71f, 28.44f, 1) < 5f)
	{
		Local_138 = { 286.5f, -1256.73f, 28.29f };
		fLocal_139 = 167.3216f;
		Local_140 = { 250.55f, -1239.27f, 28.84f };
		fLocal_141 = 265.51f;
		iLocal_72 = 2;
	}
	else if (unk_0xED977E2AE2CB16EE(Local_53, -3044.11f, 594.34f, 6.73f, 1) < 5f)
	{
		Local_138 = { -3044.66f, 595.7f, 6.59f };
		fLocal_139 = 296.7338f;
		Local_140 = { -3037.55f, 608.53f, 7.34f };
		fLocal_141 = 202.3f;
		iLocal_72 = 3;
	}
	else if (unk_0xED977E2AE2CB16EE(Local_53, 174.53f, 6637.64f, 30.57f, 1) < 5f)
	{
		Local_138 = { 175.57f, 6636.58f, 30.57f };
		fLocal_139 = 260.4868f;
		Local_140 = { 188.97f, 6616.2f, 31.48f };
		fLocal_141 = 93.97f;
		iLocal_72 = 4;
	}
	else if (unk_0xED977E2AE2CB16EE(Local_53, 24.13f, -946.84f, 28.36f, 1) < 5f)
	{
		Local_138 = { 23.65f, -948.26f, 28.36f };
		fLocal_139 = 258.8732f;
		Local_140 = { 22.19f, -955.82f, 28.94f };
		fLocal_141 = 70.66f;
		iLocal_72 = 6;
	}
	else if (unk_0xED977E2AE2CB16EE(Local_53, 296.13f, -894.01f, 28.23f, 1) < 5f)
	{
		Local_138 = { 294.64f, -893.6f, 28.18f };
		fLocal_139 = 156.7222f;
		Local_140 = { 286.4f, -897.28f, 28.57f };
		fLocal_141 = 341.97f;
		iLocal_72 = 8;
	}
	else if (unk_0xED977E2AE2CB16EE(Local_53, 1077.69f, -775.73f, 57.21f, 1) < 5f)
	{
		Local_138 = { 1077.64f, -773.86f, 57.09f };
		fLocal_139 = 275.6593f;
		Local_140 = { 1081.93f, -764.08f, 57.35f };
		fLocal_141 = 268.57f;
		iLocal_72 = 11;
	}
	else if (unk_0xED977E2AE2CB16EE(Local_53, -2072.88f, -317.19f, 12.32f, 1) < 5f)
	{
		Local_138 = { -2074.93f, -316.75f, 12.16f };
		fLocal_139 = 157.3363f;
		Local_140 = { -2101.2f, -293.74f, 12.74f };
		fLocal_141 = 263.12f;
		iLocal_72 = 16;
	}
	else if (unk_0xED977E2AE2CB16EE(Local_53, -821.33f, -1082.43f, 10.14f, 1) < 5f)
	{
		Local_138 = { -819.39f, -1084.12f, 10.03f };
		fLocal_139 = 236.6294f;
		Local_140 = { -803.18f, -1075.91f, 11.13f };
		fLocal_141 = 209.53f;
		iLocal_72 = 17;
	}
	else if (unk_0xED977E2AE2CB16EE(Local_53, -712.9f, -819.32f, 22.73f, 1) < 5f)
	{
		Local_138 = { -712.88f, -820.47f, 22.61f };
		fLocal_139 = 268.2568f;
		Local_140 = { -721.63f, -826.84f, 22.82f };
		fLocal_141 = 93.14f;
		iLocal_72 = 18;
	}
	else if (unk_0xED977E2AE2CB16EE(Local_53, -387.12f, 6045.79f, 30.5f, 1) < 5f)
	{
		Local_138 = { -389.5633f, 6042.153f, 30.4989f };
		fLocal_139 = 223.2838f;
		Local_140 = { -406.23f, 6045.69f, 31.06f };
		fLocal_141 = 229.52f;
		iLocal_72 = 19;
	}
	else if (unk_0xED977E2AE2CB16EE(Local_53, -301.84f, -830.39f, 31.38f, 1) < 5f)
	{
		Local_138 = { -304.1459f, -837.4778f, 30.6799f };
		fLocal_139 = 286.139f;
		Local_140 = { -304.56f, -840.76f, 31.26f };
		fLocal_141 = 77.59f;
		iLocal_72 = 22;
	}
	else if (unk_0xED977E2AE2CB16EE(Local_53, -254.3f, -691.96f, 32.61f, 1) < 5f)
	{
		Local_138 = { -253.51f, -689.26f, 32.57f };
		fLocal_139 = 209.9227f;
		Local_140 = { -250.91f, -684.01f, 33f };
		fLocal_141 = 230.65f;
		iLocal_72 = 23;
	}
	else if (unk_0xED977E2AE2CB16EE(Local_53, 89.39f, 2f, 67.34f, 1) < 5f)
	{
		Local_138 = { 88.7f, 0.01f, 67.38f };
		fLocal_139 = 71.0114f;
		Local_140 = { 91.35f, -7.07f, 67.82f };
		fLocal_141 = 70.28f;
		iLocal_72 = 25;
	}
	else if (unk_0xED977E2AE2CB16EE(Local_53, -526.42f, -1222.51f, 17.46f, 1) < 5f)
	{
		Local_138 = { -530.11f, -1217.33f, 17.26f };
		fLocal_139 = 53.768f;
		Local_140 = { -522.45f, -1196.35f, 18.45f };
		fLocal_141 = 297.22f;
		iLocal_72 = 30;
	}
	else if (unk_0xED977E2AE2CB16EE(Local_53, -2956.78f, 488.19f, 14.47f, 1) < 5f)
	{
		Local_138 = { -2956.78f, 488.19f, 14.47f };
		fLocal_139 = 80.0912f;
		Local_140 = { -2974.34f, 491.96f, 15f };
		fLocal_141 = 1.95f;
		iLocal_72 = 31;
	}
	else
	{
		Local_138 = { Local_53 };
	}
}

int func_220()
{
	if (BitTest(unk_0xC5935DFB3F39785A(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_221()
{
	if (!func_190(5))
	{
		return 1;
	}
	if (func_214())
	{
		return 1;
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_218())
		{
			return 0;
		}
	}
	if (func_207(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_222()
{
	if ((Global_113637 == func_223() && unk_0x9FA91AA1AC724CD0()) && Global_113638)
	{
		return 1;
	}
	return 0;
}

int func_223()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1AF90EB93E0012D6(), 64);
	uVar1 = func_224(Var0);
	return uVar1;
}

int func_224(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_225(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0x8034325BF6D6E41F() >= (uParam0->f_146 + uParam0->f_147) || BitTest(Global_100681.f_20, 2)) || BitTest(Global_100681.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (BitTest((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
					{
						func_226(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0x8034325BF6D6E41F();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_226(var uParam0)
{
	func_227(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_227(var uParam0, char* sParam1, int iParam2)
{
	if (BitTest(*uParam0, 30))
	{
		switch (func_201(*uParam0))
		{
			case 0:
				unk_0xEC9DAA34BBB4658C(uParam2);
				break;
			
			case 1:
				unk_0x80813AC549A1E8AE(uParam1);
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

void func_228(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x1DD05E817C89C737();
	}
	if (unk_0xC450B06E5AAA0985(uParam0))
	{
		iVar0 = (unk_0x1DD05E817C89C737() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = ceil((to_float(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0xF03FBAFA0284124E(iParam0) != 255)
				{
					unk_0xF42EBD7CD0682A8B(iParam0, 255);
				}
			}
			else if (unk_0xF03FBAFA0284124E(iParam0) != 0)
			{
				unk_0xF42EBD7CD0682A8B(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0xF03FBAFA0284124E(iParam0) != 255)
			{
				unk_0xF42EBD7CD0682A8B(iParam0, 255);
			}
		}
	}
}

void func_229()
{
}

void func_230()
{
}

void func_231(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_223();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_233(iParam0);
	unk_0x21EA3DC8C16770EF(0);
	unk_0x7EA65A7D5C6CBDB5(1);
	Global_113634 = 0;
	func_232();
}

void func_232()
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

void func_233(int iParam0)
{
	Global_113637 = iParam0;
}

int func_234(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_223();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_275())
		{
			return 0;
		}
	}
	Local_51 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			if (vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_218())
			{
				return 0;
			}
		}
		if (!Global_113648.f_9087)
		{
			return 0;
		}
		if (func_274(0))
		{
			return 0;
		}
		if (func_214())
		{
			return 0;
		}
		if (func_273())
		{
			return 0;
		}
		if (Global_113637 != -1)
		{
			return 0;
		}
		if (func_39(func_37()))
		{
			if (func_207(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !bParam4)
		{
			if ((Var1.f_2 - Local_51.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_272(iParam1))
		{
			return 0;
		}
		if (func_39(func_37()))
		{
			if (func_271(func_37()) == 4 || func_271(func_37()) == 5)
			{
				return 0;
			}
		}
		if (func_39(func_37()))
		{
			if (!func_270(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_269(Global_113648.f_24997.f_43[iParam1]))
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
		if (func_268())
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
		if (!func_259(4))
		{
			return 0;
		}
		if (!func_190(5))
		{
			return 0;
		}
		if (func_258(iParam1, bParam2) && !bParam3)
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
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_258(0, 0))
		{
			return 0;
		}
		if (Global_32310)
		{
			return 0;
		}
		if (func_272(30) && !func_258(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_39(func_37()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113648.f_2365.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113648.f_2365.f_539.f_2296[iVar2];
				if (func_257(iVar4))
				{
					if (func_235(iVar2))
					{
						if (!func_63(Var3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Var3) < (210f * 210f))
							{
								if (func_37() != iVar2)
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

bool func_235(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113648.f_2365.f_539.f_2296[iParam0];
	return func_236(iVar0);
}

int func_236(int iParam0)
{
	return func_237(iParam0, 1);
}

int func_237(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_257(iParam0))
	{
		return 0;
	}
	func_238(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_238(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_239(func_250(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_239(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_249(iParam0, iParam1))
	{
		iVar0 = func_248(iParam1);
		iVar1 = func_246(iParam0);
		iVar2 = (func_246(iParam0) - func_246(iParam1));
		iVar3 = (func_248(iParam0) - func_248(iParam1));
		iVar4 = (func_245(iParam0) - func_245(iParam1));
		iVar5 = (func_244(iParam0) - func_244(iParam1));
		iVar6 = (func_243(iParam0) - func_243(iParam1));
		iVar7 = (func_242(iParam0) - func_242(iParam1));
	}
	else
	{
		iVar0 = func_248(iParam0);
		iVar1 = func_246(iParam1);
		iVar2 = (func_246(iParam1) - func_246(iParam0));
		iVar3 = (func_248(iParam1) - func_248(iParam0));
		iVar4 = (func_245(iParam1) - func_245(iParam0));
		iVar5 = (func_244(iParam1) - func_244(iParam0));
		iVar6 = (func_243(iParam1) - func_243(iParam0));
		iVar7 = (func_242(iParam1) - func_242(iParam0));
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
		iVar4 = (iVar4 + func_241(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_240(to_float(iVar0 + 1), 0f, 12f));
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

float func_240(float fParam0, float fParam1, float fParam2)
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

int func_241(int iParam0, int iParam1)
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

int func_242(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_243(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_244(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_245(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_246(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_247(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_247(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_248(int iParam0)
{
	return iParam0 & 15;
}

int func_249(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_257(iParam1) || !func_257(iParam0))
	{
		return 1;
	}
	iVar0 = func_246(iParam0);
	iVar1 = func_246(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_248(iParam0);
	iVar1 = func_248(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_245(iParam0);
	iVar1 = func_245(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_244(iParam0);
	iVar1 = func_244(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_243(iParam0);
	iVar1 = func_243(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_242(iParam0);
	iVar1 = func_242(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_250()
{
	var uVar0;
	
	func_256(&uVar0, unk_0x4BA5A16068183C5E());
	func_255(&uVar0, unk_0x18E502A71E28968C());
	func_254(&uVar0, unk_0x5295501D0862870D());
	func_253(&uVar0, unk_0xB12880C92EA6EE15());
	func_252(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_251(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_251(var uParam0, int iParam1)
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

void func_252(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_253(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_248(*uParam0);
	iVar1 = func_246(*uParam0);
	if (iParam1 < 1 || iParam1 > func_241(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_254(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_255(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_256(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_257(int iParam0)
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
	iVar0 = func_242(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_243(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_244(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_246(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_248(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_245(iParam0);
	if (iVar5 < 1 || iVar5 > func_241(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_258(int iParam0, bool bParam1)
{
	if (BitTest(Global_113648.f_24997.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_259(int iParam0)
{
	int iVar0;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				iVar0 = func_37();
				if (!func_39(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_267()) || Global_112695) || Global_32166) || func_266()) || func_59(8, -1)) || func_265()) || func_264()) || func_263()) || func_262()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_267()) || Global_32166) || func_266()) || func_59(8, -1)) || func_263()) || func_265()) || func_264()) || func_262()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_267()) || Global_112695) || Global_32166) || func_266()) || func_59(8, -1)) || func_263()) || func_265()) || func_264()) || func_262()) || Global_113648.f_7690.f_919[iVar0] == 5) || Global_43804 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_267()) || Global_112695) || Global_32166) || func_266()) || func_59(8, -1)) || func_265()) || func_264()) || func_262()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_267() || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || func_59(8, -1)) || func_262()) || func_261()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_59(8, -1) || func_265()) || func_264()) || func_261()) || func_260())
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
							if ((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_267()) || Global_32166) || func_266()) || func_59(8, -1)) || func_264()) || func_263()) || func_262()) || Global_113648.f_7690.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || func_267()) || func_264()) || Global_112695) || Global_32166) || func_266()) || Global_44446) || func_59(8, -1)) || func_263()) || func_261()) || func_262()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1)) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_267()) || Global_112695) || Global_32166) || func_266()) || func_59(8, -1)) || func_263()) || func_261()) || func_265()) || func_264()) || func_262())
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

var func_260()
{
	return Global_100720.f_1;
}

int func_261()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 13);
	}
	return 0;
}

int func_262()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_263()
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

bool func_264()
{
	return Global_100733.f_388 > 0;
}

bool func_265()
{
	return Global_100733.f_387 > 0;
}

var func_266()
{
	return Global_1575060;
}

int func_267()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98159.f_44 == 1;
	}
	return 0;
}

int func_268()
{
	func_57();
	if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_269(int iParam0)
{
	return func_249(func_250(), iParam0);
}

int func_270(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_37();
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

int func_271(int iParam0)
{
	if (!func_39(iParam0))
	{
		return 7;
	}
	return Global_113648.f_7690.f_919[iParam0];
}

int func_272(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_275())
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

int func_273()
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

int func_274(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

int func_275()
{
	int iVar0;
	
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
				unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, 4);
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, 6);
				unk_0x0B0C9A0F9AAEB7F0(&Global_25, 2);
				unk_0x0B0C9A0F9AAEB7F0(&Global_25, 4);
				unk_0x0B0C9A0F9AAEB7F0(&Global_25, 6);
				unk_0x1164A75E490C27B6(joaat("sp_unlock_exclus_content"), iVar0, 1);
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

void func_276()
{
	if (bLocal_127)
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_73, 0))
		{
			if (unk_0x67AC1AE8A2697D67(iLocal_73))
			{
				unk_0xB7BDF91BE073DCFB(iLocal_73);
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_55))
	{
		unk_0xF09E30AF1B8FB379(&iLocal_55);
	}
	unk_0xEAFAA716662898B8(0);
	if (iLocal_69 != 0)
	{
		unk_0x6E8A7BB566D1F7AF(iLocal_69);
	}
	unk_0xEAFAA716662898B8(0);
	if (!unk_0x4FAFF4BCB7633475(iLocal_56))
	{
		unk_0xAAA71DD7E9059338(iLocal_56, 0);
		unk_0x3F58BFCF656F0DF1(iLocal_56, 1);
		unk_0xF09E30AF1B8FB379(&iLocal_56);
	}
	if (bLocal_65 == 4)
	{
		unk_0xA63572E348CC4CFB(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 1, 1);
	}
	func_178(&uLocal_152, 0, 0);
	if (func_222())
	{
		unk_0x425BBE19F25A57AB(1f);
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0xFD61BB3B8F1CDB6D(unk_0x4A8C381C258A124D(), 0);
	}
	func_289(&Local_164, 0);
	func_277(-1);
	unk_0x7F0D18D1F5BF6D0F(1);
	unk_0xD7B6A43ACC36D868(uLocal_63, 0);
	unk_0xBBC29EBE6E1A48FA();
}

void func_277(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_223();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_222())
	{
		func_282(iParam0);
		unk_0xB51A8DA1DD0D2E4E(0, 0);
		Global_113639 = unk_0x1DD05E817C89C737();
		func_281(30000);
		StringCopy(&cVar0, func_280(Global_113637, 1), 64);
		if (func_279(Global_113637) > 0)
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
	func_278(&Global_32223);
	Global_113638 = 0;
	func_233(-1);
}

void func_278(var uParam0)
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

int func_279(int iParam0)
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

char* func_280(int iParam0, bool bParam1)
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

void func_281(int iParam0)
{
	Global_43808 = (unk_0x1DD05E817C89C737() + iParam0);
}

void func_282(int iParam0)
{
	func_283(iParam0, 0, func_288(iParam0));
}

void func_283(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_250();
	func_286(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_285(iParam0, &uVar0);
	Var1 = { func_284(&uVar0) };
}

struct<16> func_284(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_244(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_243(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_242(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_245(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_248(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_246(*uParam0), 64);
	return Var0;
}

void func_285(int iParam0, var uParam1)
{
	Global_113648.f_24997.f_43[iParam0] = *uParam1;
}

void func_286(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_246(*uParam0);
	iVar1 = func_248(*uParam0);
	iVar2 = func_245(*uParam0);
	iVar3 = func_244(*uParam0);
	iVar4 = func_243(*uParam0);
	iVar5 = func_242(*uParam0);
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
	iVar6 = func_241(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_241(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_287(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_287(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_256(uParam0, iParam1);
	func_255(uParam0, iParam2);
	func_254(uParam0, iParam3);
	func_252(uParam0, iParam5);
	func_253(uParam0, iParam4);
	func_251(uParam0, iParam6);
}

int func_288(int iParam0)
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

void func_289(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_291(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_290(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_290(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_291(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			func_292(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_292(var uParam0)
{
	func_293(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_293(var uParam0, char* sParam1, var uParam2)
{
	if (BitTest(uParam0, 30))
	{
		switch (func_201(uParam0))
		{
			case 0:
				unk_0x55098D9E9AD58806(uParam2);
				break;
			
			case 1:
				unk_0x268BE77F77533D03(uParam1);
				break;
			
			case 2:
				unk_0x9B64A44D0B8D7CF6(sParam1);
				break;
			
			case 3:
				unk_0x633E3833FB96BCCB(sParam1);
				break;
			
			case 4:
				unk_0x7821F942CAEEBEE1(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x8943BF9E0F15EDA0(sParam1);
				break;
			
			case 6:
				unk_0x59E2E0637E7776F3();
				break;
			
			case 7:
				unk_0xD21650BDA0F10841(uParam2);
				break;
			
			case 8:
				unk_0xA790E8E6FD7393AC(uParam2, BitTest(uParam0, 26));
				break;
			
			case 9:
				unk_0xAE427DA16687F323();
				break;
			
			default:
				break;
		}
	}
}

void func_294(bool bParam0)
{
	Global_113640 = { Local_53 };
	if (bParam0)
	{
		func_309(3);
	}
	func_298(1, 0);
	if (!bLocal_96)
	{
		func_297();
	}
	func_295();
	func_276();
}

void func_295()
{
	func_296();
}

int func_296()
{
	if (func_274(0))
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

int func_297()
{
	return 1;
}

void func_298(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_223();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_279(iParam0))
	{
		func_308(iParam0, iParam1);
		if (!func_307(51))
		{
			func_304("RE_REWARD", 1, 0, 4000, 10000, func_213(), 0, 138, 0);
			func_303(51);
		}
		if (func_186(iParam0))
		{
			Global_113648.f_24997.f_2 = 3;
		}
		if (func_302(iParam0, iParam1) != 322)
		{
			func_299(func_302(iParam0, iParam1), Local_51.f_0, Local_51.f_1);
		}
		Global_113636 = iParam1;
		if (Global_113634 == 0)
		{
			if (((Global_113637 == 1 || Global_113637 == 5) || Global_113637 == 11) || Global_113637 == 25)
			{
				func_309(2);
			}
			else if ((Global_113637 == 26 || Global_113637 == 8) || Global_113637 == 17)
			{
				func_309(7);
			}
			else
			{
				func_309(1);
			}
		}
	}
}

void func_299(int iParam0, var uParam1, var uParam2)
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
		func_300();
	}
}

void func_300()
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
		func_33(13, floor(Global_113648.f_10196.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_78558)
		{
			if (func_301() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113382 = 0;
				}
				if (!Global_63362)
				{
					func_296();
				}
			}
		}
	}
}

int func_301()
{
	return Global_32163;
}

int func_302(int iParam0, int iParam1)
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

void func_303(int iParam0)
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

void func_304(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_305(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_305(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_306();
	}
}

void func_306()
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

int func_307(int iParam0)
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

void func_308(int iParam0, bool bParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_24997.f_8[iParam0]), iParam1);
}

void func_309(int iParam0)
{
	Global_113634 = iParam0;
}
