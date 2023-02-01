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
	var uLocal_18 = 0;
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_20[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_21 = 0;
	char* sLocal_22[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	struct<3> Local_34 = { 0, 0, 0 } ;
	struct<3> Local_35 = { 0, 0, 0 } ;
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	struct<3> Local_41 = { 0, 0, 0 } ;
	struct<3> Local_42 = { 0, 0, 0 } ;
	struct<3> Local_43 = { 0, 0, 0 } ;
	struct<3> Local_44 = { 0, 0, 0 } ;
	struct<3> Local_45 = { 0, 0, 0 } ;
	struct<3> Local_46 = { 0, 0, 0 } ;
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	float fLocal_65 = 0f;
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
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	char cLocal_96[16] = "";
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	iLocal_26 = 1;
	bLocal_29 = true;
	bLocal_30 = true;
	fLocal_36 = 0f;
	fLocal_37 = 172f;
	fLocal_40 = 0.7f;
	iLocal_88 = 1200;
	iLocal_89 = 1200;
	iLocal_90 = 166;
	fLocal_107 = 0.5f;
	fLocal_108 = 0.85f;
	fLocal_109 = 0.5f;
	fLocal_110 = -0.25f;
	fLocal_111 = 0.25f;
	fLocal_112 = 0.3f;
	fLocal_113 = 0.3f;
	fLocal_114 = 0.075f;
	unk_0x51CC1333A10C4E09();
	if (unk_0x8608526719A575EE() == 0)
	{
		fLocal_40 = 1f;
	}
	else
	{
		fLocal_40 = 0.7f;
	}
	if (!func_174())
	{
		Global_4541021 = 99;
		Global_4541022 = 99;
		iLocal_24 = 99;
	}
	else
	{
		Global_4541021 = 0;
		Global_4541022 = 0;
	}
	sLocal_19[0] = "No_Filter";
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_20[0] = "No_Border";
	sLocal_20[1] = "frame1";
	sLocal_20[2] = "frame2";
	sLocal_20[3] = "frame3";
	sLocal_20[4] = "frame4";
	sLocal_20[5] = "frame5";
	sLocal_20[6] = "frame6";
	sLocal_20[7] = "frame7";
	sLocal_20[8] = "frame8";
	sLocal_20[9] = "frame9";
	sLocal_20[10] = "frame10";
	sLocal_20[11] = "frame11";
	sLocal_20[12] = "frame12";
	sLocal_22[0] = "No_Expression";
	sLocal_22[1] = "mood_Aiming_1";
	sLocal_22[2] = "mood_Happy_1";
	sLocal_22[3] = "mood_smug_1";
	sLocal_22[4] = "mood_Injured_1";
	sLocal_22[5] = "mood_sulk_1";
	sLocal_22[6] = "mood_Angry_1";
	func_173();
	if (func_172(1, 1, !iLocal_31, 1))
	{
		iLocal_31 = 1;
	}
	func_171();
	iLocal_63 = unk_0xCA369FBC0DE29517();
	if (Global_20328 == 0)
	{
		fLocal_47 = 0.207f;
		fLocal_48 = 0.158f;
		fLocal_49 = 0.207f;
		fLocal_50 = 0.335f;
	}
	else
	{
		fLocal_47 = 0.24f;
		fLocal_48 = 0.258f;
		fLocal_49 = 0.24f;
		fLocal_50 = 0.435f;
	}
	Global_22758 = 0;
	Global_22759 = 0;
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (unk_0x1BAABBB7277FCD90(unk_0x4A8C381C258A124D()))
		{
			Global_22758 = 1;
		}
		if (unk_0xDC7D2B438B687A13())
		{
			Global_22758 = 1;
		}
		if (unk_0xD9F5E1FEFD1329E4(unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D()), 0))
		{
			Global_22758 = 1;
		}
		if (unk_0x49F8918E2DC5FFBC(unk_0x4A8C381C258A124D(), 78, 1))
		{
			Global_22758 = 1;
		}
		if (unk_0x17CB7D9FBEC4100F(unk_0x4A8C381C258A124D()))
		{
			Global_22758 = 1;
		}
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (iLocal_82 == 1)
			{
				Global_22758 = 1;
			}
			uLocal_99 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if ((((unk_0x4B423FAA24E8ABF0(uLocal_99) == joaat("rhino") || unk_0x4B423FAA24E8ABF0(iLocal_99) == joaat("cutter")) || unk_0x4B423FAA24E8ABF0(iLocal_99) == joaat("submersible")) || unk_0x4B423FAA24E8ABF0(iLocal_99) == joaat("khanjali")) || (unk_0x4B423FAA24E8ABF0(iLocal_99) == joaat("barrage") && unk_0x333A2A6253C809D2(iLocal_99, func_170(unk_0x4A8C381C258A124D(), 1))))
			{
				Global_22758 = 1;
			}
			else if (unk_0xFD5C5BBD1FE92BB7(iLocal_99, -1, 0) == unk_0x4A8C381C258A124D())
			{
				if (unk_0x032CEF99C0D59B73(iLocal_99) > 0f)
				{
					if (!Global_78558)
					{
						if (!func_169(0))
						{
							unk_0xFCCE667AD0E974AD(unk_0x4A8C381C258A124D(), iLocal_99, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_78558)
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x19AD76EC04A73800(unk_0x259BE71D8A81D4FA(), 0);
		}
	}
	unk_0x8744D2E3FC95740E(&Global_8253, 21);
	func_168(0);
	unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 17);
	if (Global_20325 == 0)
	{
		func_167();
	}
	else
	{
		uLocal_91 = unk_0x8DE4F68A9728925E("camera_gallery");
		uLocal_92 = unk_0x8DE4F68A9728925E("instructional_buttons");
		while (!unk_0xA0C7B98BCF1EEF9E(uLocal_91) || !unk_0xA0C7B98BCF1EEF9E(uLocal_92))
		{
			wait(0);
			unk_0xC0964AABD3C0CC7E();
			unk_0x66EFB3D6110055C4(0, 25, 1);
		}
		if (Global_78558)
		{
			iLocal_95 = 2;
		}
		else
		{
			switch (func_166())
			{
				case 0:
					iLocal_95 = 2;
					break;
				
				case 2:
					iLocal_95 = 2;
					break;
				
				case 3:
					iLocal_95 = 2;
					break;
				}
		}
		func_165(uLocal_91, "DISPLAY_VIEW", to_float(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
		func_164(uLocal_91, "CLOSE_SHUTTER");
		unk_0x88F483FBD433696A(Global_20364, "DISPLAY_VIEW");
		unk_0x330108B080A2132F(16);
		unk_0xE6B753D52F4CA222();
	}
	Local_41 = { Global_20343 };
	Local_42 = { Global_20336[Global_20328 /*3*/] };
	Global_22759 = 1;
	iLocal_69 = 1;
	iLocal_70 = 1;
	iLocal_71 = 1;
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 0;
	if (Global_20383.f_1 > 3)
	{
		Global_20383.f_1 = 8;
	}
	if (iLocal_82 == 0)
	{
		unk_0x8744D2E3FC95740E(&Global_8255, 3);
	}
	func_162();
	unk_0xA4F67CEB594AE064(4);
	if (unk_0xADED703C1F8CC52B())
	{
	}
	if (Global_4718592.f_160554)
	{
	}
	if (Global_4718592.f_160556 == 1)
	{
		iLocal_106 = 1;
	}
	if (iLocal_106 == 1)
	{
	}
	while (true)
	{
		wait(0);
		unk_0x4CC1CF98851922CE(0, Global_20352);
		unk_0x4CC1CF98851922CE(0, 186);
		unk_0xC0964AABD3C0CC7E();
		unk_0x66EFB3D6110055C4(0, 25, 1);
		unk_0x66EFB3D6110055C4(0, 0, 1);
		if (func_161())
		{
			if (!BitTest(Global_4542297, 2))
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_4542297, 2);
				func_165(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (!Global_113648.f_14053.f_81)
		{
			if (!BitTest(Global_4542297, 13))
			{
				if (!unk_0x4C705AAF75363287())
				{
					if (!BitTest(Global_8254, 28))
					{
						if ((iLocal_79 && iLocal_82 == 0) && !func_161())
						{
							unk_0x0B0C9A0F9AAEB7F0(&Global_4542297, 13);
							Global_113648.f_14053.f_81 = 1;
							func_160("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0x4D9174D8796EA622())
		{
			if (Global_4718592.f_160553 == 0 && Global_4718592.f_160554 == 0)
			{
				unk_0x36A472841BBC9D4A(15, 0f, -0.0375f);
			}
			unk_0x4EB223432F8FA0A0(7);
			func_159();
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 200, 1);
			}
			unk_0x66EFB3D6110055C4(0, 44, 1);
			unk_0x66EFB3D6110055C4(0, 47, 1);
			unk_0x66EFB3D6110055C4(0, 91, 1);
			unk_0x66EFB3D6110055C4(0, 92, 1);
			unk_0x66EFB3D6110055C4(0, 68, 1);
			if (iLocal_100 == 0)
			{
				unk_0x4CC1CF98851922CE(0, Global_20356);
			}
			unk_0x4CC1CF98851922CE(0, Global_20353);
			if ((unk_0x15CCE8886267624F() || unk_0x78ABC1D11B34F324()) && !func_161())
			{
				iLocal_81 = 1;
				Global_20383.f_1 = 3;
				unk_0x98E393364463951A(0);
			}
			if (unk_0xF6D8C7059C3C2495())
			{
				Global_20383.f_1 = 3;
				unk_0x98E393364463951A(0);
			}
			if (BitTest(Global_8254, 3))
			{
				Global_20383.f_1 = 3;
				unk_0x98E393364463951A(0);
			}
			if (unk_0x76CD105BCAC6EB9F())
			{
				if (func_151())
				{
					Global_20383.f_1 = 3;
					unk_0x98E393364463951A(0);
				}
			}
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xD6179D448A06A77F(unk_0x4A8C381C258A124D(), 0))
				{
					Global_20383.f_1 = 3;
					unk_0x98E393364463951A(0);
				}
				if ((unk_0x49F8918E2DC5FFBC(unk_0x4A8C381C258A124D(), 78, 1) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1C751EF63BF4D501(unk_0x259BE71D8A81D4FA()))
				{
					if (func_150())
					{
					}
					else
					{
						Global_20383.f_1 = 3;
						unk_0x98E393364463951A(0);
					}
				}
				if (unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x333554781C7582D7(unk_0x4A8C381C258A124D()))
				{
					if (Global_78558 == 1)
					{
						Global_20383.f_1 = 3;
					}
				}
				if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
				{
					if (unk_0x837FF265C016E3B7(unk_0x4A8C381C258A124D()) > 0.3f)
					{
						Global_20383.f_1 = 3;
					}
				}
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					func_149();
					iLocal_99 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
					if (unk_0x032CEF99C0D59B73(iLocal_99) < 0f)
					{
						func_146(0);
					}
					if (iLocal_66 == 1)
					{
						if (iLocal_67 == 1)
						{
							if (!unk_0x5F0F4F152FB7156C())
							{
								func_146(0);
							}
						}
						else if (!unk_0x5F0F4F152FB7156C())
						{
							iLocal_67 = 1;
							wait(0);
							unk_0xC0964AABD3C0CC7E();
						}
					}
				}
				else if (Global_78558 == 0)
				{
					if (BitTest(Global_8253, 18))
					{
						func_145();
						if ((Global_20383 == 0 || Global_20383 == 1) || Global_20383 == 2)
						{
							if (!unk_0x65815C3D3CB39062(unk_0x4A8C381C258A124D()))
							{
								if (unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D()) == 2)
								{
								}
								else
								{
									Global_20383.f_1 = 3;
									unk_0x98E393364463951A(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_93)
			{
				func_144();
			}
			if (Global_20383.f_1 < 4)
			{
			}
			if (iLocal_103 == 0)
			{
				if (iLocal_54 == 0)
				{
					if (iLocal_55 == 0)
					{
						if (iLocal_62 == 0)
						{
							if (Global_20383.f_1 > 3)
							{
								if (iLocal_100)
								{
									func_142();
									if (Global_22763 == 0 && Global_22760 == 6)
									{
										unk_0x665A7E873A6664BC(0, 1);
										unk_0x65662724C6BC4810();
										iLocal_100 = 0;
										func_141();
										if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
										{
											Local_34 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
										}
										func_140();
										iLocal_60++;
										if (func_174())
										{
											func_165(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_165(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_129();
									}
									if (Global_22760 == 0)
									{
										iLocal_100 = 0;
										unk_0x65662724C6BC4810();
										if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
										{
											Local_34 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
										}
										func_128();
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_129();
										if (func_174())
										{
											if (Global_4541022 == 0)
											{
												if (!BitTest(Global_4542297, 2))
												{
													func_165(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!BitTest(Global_4542297, 2))
										{
											func_165(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_127();
										func_126(1);
									}
								}
								else if (Global_20383.f_1 != 9)
								{
									if (Global_22759 == 1)
									{
										if (Global_22758 == 0)
										{
											func_125();
										}
									}
									else if ((Global_8861 - Global_8860) > Global_8862)
									{
										if (unk_0x15CCE8886267624F() && func_124())
										{
											if (func_123() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												unk_0x98E393364463951A(0);
												unk_0x8E4825CCACA34B58(iLocal_63);
												iLocal_94 = 0;
												if (Global_22758 == 0)
												{
													func_140();
													Global_22758 = 1;
													unk_0x665A7E873A6664BC(0, 1);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_122(0, 0);
													func_126(0);
													iLocal_66 = 0;
													func_117(1);
													iLocal_93 = 0;
													func_115(0, 1);
													func_165(Global_20364, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
													func_113(1);
												}
											}
										}
										if (func_112(2, Global_20351, 0))
										{
											if (func_161())
											{
												if (((Global_1935176 || Global_1574964) || Global_22761) || BitTest(Global_8253, 21))
												{
												}
												else if (func_123() && iLocal_78)
												{
												}
												else if (!func_124())
												{
													if (iLocal_78 == 0)
													{
														unk_0x8F72AF14CE5AACE4(500);
														iLocal_94 = 0;
														func_115(1, 1);
														func_111(1);
													}
												}
											}
											else if (func_123() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												unk_0x98E393364463951A(0);
												unk_0x8E4825CCACA34B58(iLocal_63);
												iLocal_94 = 0;
												if (Global_22758 == 0)
												{
													func_140();
													Global_22758 = 1;
													unk_0x665A7E873A6664BC(0, 1);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_122(0, 0);
													func_126(0);
													iLocal_66 = 0;
													func_117(1);
													iLocal_93 = 0;
													func_115(0, 1);
													func_165(Global_20364, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_52 == 0)
									{
										if (unk_0x4C705AAF75363287())
										{
											func_110();
											iLocal_52 = 1;
										}
									}
									else if (!unk_0x4C705AAF75363287())
									{
										func_110();
										iLocal_52 = 0;
									}
									if (iLocal_53 == 0)
									{
										if (BitTest(Global_8253, 28))
										{
											func_110();
											iLocal_53 = 1;
										}
									}
									else if (!BitTest(Global_8253, 28))
									{
										func_110();
										iLocal_53 = 0;
									}
									if (Global_22758 == 1)
									{
										func_99();
									}
									else if (Global_20383.f_1 > 4)
									{
										if (iLocal_75 == 1 && iLocal_76 == 0)
										{
											func_95();
										}
										if (iLocal_75 == 0 && iLocal_76 == 1)
										{
											func_128();
											if (iLocal_87 == 1 || iLocal_87 == 0)
											{
												if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
												{
													if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
													{
														func_164(uLocal_91, "CLOSE_SHUTTER");
														iLocal_86 = unk_0x1DD05E817C89C737();
														while (unk_0x1DD05E817C89C737() < (iLocal_86 + iLocal_88) && Global_20383.f_1 > 3)
														{
															func_159();
															func_144();
															func_94();
															unk_0xC0964AABD3C0CC7E();
															wait(0);
														}
													}
												}
												if (func_174())
												{
													if (Global_4541022 == 0)
													{
														if (!BitTest(Global_4542297, 2))
														{
															func_165(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!BitTest(Global_4542297, 2))
												{
													func_165(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_144();
												func_159();
												iLocal_83 = 0;
												iLocal_84 = 0;
												iLocal_85 = 0;
												iLocal_78 = 0;
												func_129();
												iLocal_87 = 0;
												func_164(uLocal_91, "OPEN_SHUTTER");
											}
											func_127();
											func_126(1);
											func_93();
										}
									}
									if (iLocal_94 == 1)
									{
										func_90();
									}
									if (iLocal_80)
									{
										if (timerb() > 500)
										{
											iLocal_79 = 1;
											iLocal_80 = 0;
											unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 18);
											if (Global_22758 == 0)
											{
												func_115(1, 1);
											}
										}
									}
									if (iLocal_78 == 0)
									{
										if (iLocal_79 && Global_22758 == 0)
										{
											if ((iLocal_81 == 0 && iLocal_76 == 0) && Global_22761 == 0)
											{
												func_12();
											}
										}
										else
										{
											func_94();
										}
									}
									else if (iLocal_75 == 0)
									{
										func_7();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_20383.f_1 > 3)
					{
						if (Global_22759 == 1)
						{
							if (Global_22758 == 0)
							{
								func_125();
							}
						}
					}
					func_6();
				}
			}
			else
			{
				if (iLocal_105 == 1)
				{
					set_warning_message_with_header("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_102, "CELL_CAM_FW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 2)
				{
					set_warning_message_with_header("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_102, "", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 6)
				{
					set_warning_message_with_header("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_102, "", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 3)
				{
					set_warning_message_with_header("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_102, "", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 7)
				{
					if (unk_0x1226C55CA7D2269A() || func_5())
					{
						set_warning_message_with_header("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_102, "", false, -1, "", "", true, 0);
					}
					if (unk_0x0BA1A956D36B210F() || func_4())
					{
						set_warning_message_with_header("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_102, "", false, -1, "", "", true, 0);
					}
					if (unk_0x761778199FE1211C())
					{
						set_warning_message_with_header("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_102, "", false, -1, "", "", true, 0);
					}
				}
				if (iLocal_105 == 4)
				{
					set_warning_message_with_header("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_102, "CELL_CAM_CCW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_105 == 5)
				{
					iVar0 = unk_0xB3592BAAAC94842D();
					switch (iVar0)
					{
						case -1:
							set_warning_message_with_header("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_102, "", false, -1, "", "", true, 0);
							break;
						
						case 0:
							set_warning_message_with_header("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", false, -1, "", "", true, 0);
							break;
						
						case 1:
							set_warning_message_with_header("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_102, "", false, -1, "", "", true, 0);
							break;
						
						case 2:
							set_warning_message_with_header("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_102, "", false, -1, "", "", true, 0);
							break;
						
						default:
							set_warning_message_with_header("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", false, -1, "", "", true, 0);
							break;
						}
				}
				if (iLocal_105 == 0)
				{
				}
				if (iLocal_105 == 2 || iLocal_105 == 3)
				{
					if (unk_0x875A214D5EBCA509(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_115(0, 1);
					}
					if (unk_0x875A214D5EBCA509(2, 201))
					{
						iLocal_104 = 1;
					}
					if (iLocal_104 == 1)
					{
						if (unk_0x2645430E708CBFAC(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_115(0, 1);
							iLocal_104 = 0;
							unk_0xDA24B54CF6C0E8B8("Gallery");
							unk_0x20D7E34C22DC60AC();
						}
					}
				}
				else if (iLocal_105 == 7)
				{
					if (func_4())
					{
						if (unk_0x875A214D5EBCA509(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_115(0, 1);
							iLocal_62 = 0;
						}
					}
					else if (unk_0x875A214D5EBCA509(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_115(0, 1);
						iLocal_62 = 0;
					}
					if (!func_4())
					{
						if (unk_0x875A214D5EBCA509(2, Global_20355))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_115(0, 1);
							if (BitTest(Global_8254, 28))
							{
								iLocal_62 = 0;
							}
							else
							{
								iLocal_62 = 2;
							}
							iLocal_58 = unk_0x1DD05E817C89C737();
							unk_0xC296E8407A7E3E69(1);
						}
					}
				}
				else if (unk_0x875A214D5EBCA509(2, 201))
				{
					iLocal_103 = 0;
					iLocal_105 = 0;
					func_115(0, 1);
				}
			}
		}
		iLocal_59 = unk_0x1DD05E817C89C737();
		if (func_161())
		{
			if (!BitTest(Global_4542297, 2))
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_4542297, 2);
				func_165(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (func_3() || iLocal_81)
		{
			func_1(0);
			func_122(0, 0);
			func_126(0);
			iLocal_66 = 0;
			func_117(1);
			Global_22758 = 0;
			Global_22759 = 0;
			Global_22761 = 0;
			unk_0xD314260005F064BF(&uLocal_91);
			unk_0xD314260005F064BF(&uLocal_92);
			unk_0x98E393364463951A(0);
			if (Global_20586 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 17);
			}
			else
			{
				unk_0x8744D2E3FC95740E(&Global_8253, 17);
			}
			unk_0x665A7E873A6664BC(0, 1);
			unk_0x19AD76EC04A73800(unk_0x259BE71D8A81D4FA(), 1);
			unk_0x8744D2E3FC95740E(&Global_8255, 3);
			unk_0x8744D2E3FC95740E(&Global_4542297, 3);
			unk_0xDCFF86AAD108A201(15);
			Global_22762 = 1;
			unk_0x8E4825CCACA34B58(iLocal_63);
			unk_0x394AFAC073E1F277(iLocal_63);
			unk_0x65662724C6BC4810();
			func_117(1);
			unk_0x20B0BCFBA94C4732(0);
			unk_0x453DA8CFCDA69D26(0);
			unk_0xD974CD3A050559FE(1f);
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				unk_0x2C09C6B54CFCFAF1(unk_0x4A8C381C258A124D(), "Mood_Normal_1", 0);
				unk_0x490EA3A0CF334F58(unk_0x4A8C381C258A124D());
			}
			if (Global_4541022 > 0 && Global_4541022 < 13)
			{
				unk_0x633E3833FB96BCCB(sLocal_20[Global_4541022]);
			}
			unk_0x8744D2E3FC95740E(&Global_8253, 18);
			if (func_161())
			{
				func_115(1, 1);
			}
			else
			{
				func_115(0, 1);
			}
			if (func_172(0, 1, iLocal_31, 1))
			{
				iLocal_31 = 0;
			}
			unk_0xBBC29EBE6E1A48FA();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0xF3D5C578ED6C7528(1);
		}
		else if (Global_20383.f_1 > 3)
		{
			unk_0xF3D5C578ED6C7528(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78558)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xBF03D0685ADC793B();
	iVar1 = unk_0xBCF87EE3DC296C2A(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4542575 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_20383.f_1 == 1 || Global_20383.f_1 == 3) || Global_20383.f_1 == 0) || Global_20327 == 1)
	{
		Global_20370 = 1;
		return 1;
	}
	return 0;
}

bool func_4()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_5()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

void func_6()
{
	iLocal_57 = unk_0x62830FDE95255DE5(0);
	switch (iLocal_57)
	{
		case 0:
			iLocal_54 = 0;
			iLocal_60 = unk_0x991C49208F09B7C0();
			iLocal_61 = unk_0xA0BFBD756D313CF2();
			if (iLocal_55 == 1)
			{
				if (iLocal_78 == 0)
				{
					if (unk_0xA0C7B98BCF1EEF9E(uLocal_91))
					{
						if (func_174())
						{
							if (Global_4541022 == 0)
							{
								if (!BitTest(Global_4542297, 2))
								{
									func_165(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_165(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!BitTest(Global_4542297, 2))
							{
								func_165(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_165(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0xA0C7B98BCF1EEF9E(uLocal_91))
				{
					func_165(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_165(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
				}
				iLocal_55 = 0;
			}
			unk_0x65662724C6BC4810();
			break;
		
		case 1:
			if (!unk_0x73F9AE5F32ABCCA9())
			{
				unk_0xB661D6EC3F065818("CELL_SPINNER2");
				unk_0x654AFEEF256E650F(1);
			}
			break;
		
		case 2:
			if (BitTest(Global_8254, 28))
			{
				iLocal_54 = 0;
				iLocal_60 = 0;
				iLocal_61 = 0;
			}
			else
			{
				Global_20383.f_1 = 3;
				Global_22762 = 1;
			}
			unk_0x65662724C6BC4810();
			break;
	}
}

void func_7()
{
	if (func_112(2, Global_20352, 0))
	{
		func_1(0);
		if (BitTest(Global_8254, 28))
		{
			unk_0x98E393364463951A(0);
			settimerb(0);
			func_141();
			iLocal_78 = 0;
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				Local_34 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			}
			func_140();
			iLocal_87 = 1;
		}
		else if (func_11())
		{
			if (BitTest(Global_8254, 14))
			{
				func_160("CELL_299", -1);
			}
			else
			{
				func_140();
				func_10();
			}
		}
		else
		{
			iLocal_103 = 1;
			func_115(1, 1);
		}
	}
	if (BitTest(Global_8253, 22))
	{
		func_1(0);
		while (timera() < 2000)
		{
			wait(0);
			func_159();
			unk_0xC0964AABD3C0CC7E();
			func_94();
			func_149();
			func_144();
		}
		unk_0x98E393364463951A(0);
		func_141();
		settimerb(0);
		iLocal_78 = 0;
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			Local_34 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		}
		func_129();
		func_140();
	}
	if (func_112(2, Global_20356, 0))
	{
		func_1(0);
		if (func_123() || BitTest(Global_8254, 28))
		{
		}
		else
		{
			unk_0x98E393364463951A(0);
			settimerb(0);
			iLocal_87 = 1;
			func_141();
			iLocal_78 = 0;
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				Local_34 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			}
			func_140();
		}
	}
	if (BitTest(Global_8253, 28))
	{
		if (func_112(2, Global_20355, 0))
		{
			func_1(0);
			unk_0x98E393364463951A(0);
			unk_0x4FA503A6757253A7(0, 0);
			wait(0);
			unk_0xC0964AABD3C0CC7E();
			func_159();
			wait(0);
			unk_0xC0964AABD3C0CC7E();
			func_159();
			unk_0xE379C4B49924485C();
			unk_0x464C2B9EE565B093();
			Global_22762 = 1;
			iLocal_94 = 0;
			iLocal_77 = 0;
			func_115(0, 1);
			Global_22758 = 1;
			unk_0x665A7E873A6664BC(0, 1);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_8();
			iLocal_78 = 0;
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				Local_34 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			}
			func_122(0, 0);
			func_126(0);
			iLocal_66 = 0;
			func_117(1);
			if (!Global_2793046.f_6749)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 9);
			}
			iLocal_93 = 0;
			func_165(Global_20364, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_8()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Accept", &Global_20372, 1);
		func_9();
	}
}

void func_9()
{
	if (func_2())
	{
		unk_0xBF3F90E670404C44(5);
	}
}

void func_10()
{
	iLocal_100 = 1;
	Global_22763 = 1;
	unk_0x665A7E873A6664BC(0, 1);
}

int func_11()
{
	if (iLocal_58 == iLocal_59)
	{
		if (iLocal_56)
		{
			iLocal_56 = 1;
		}
	}
	if (Global_20383.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_60 == iLocal_61 || iLocal_60 > iLocal_61)
	{
		iLocal_105 = 1;
		iLocal_102 = 2;
		return 0;
	}
	return 1;
}

void func_12()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xAE231F549813BBDF(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_82)
	{
		func_85();
		func_81();
		func_80();
		fLocal_36 = unk_0x98F0D28A64EC7D5D();
		fLocal_37 = unk_0x3FAFDC4C824A6C54();
		if (iLocal_84 == 0)
		{
			if (unk_0x6D05C5731A838CB3(2, iVar0) && !unk_0x6D05C5731A838CB3(2, iVar1))
			{
				iLocal_84 = 1;
				func_165(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_165(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (BitTest(Global_8253, 28))
				{
					func_78(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xE934399D6F2C3AC5(0, 177, 1), "CELL_281");
					func_78(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xE934399D6F2C3AC5(2, 179, 1), func_67());
					func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_78(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xE934399D6F2C3AC5(0, 176, 1), "CELL_280");
					func_78(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xE934399D6F2C3AC5(0, 177, 1), "CELL_281");
					func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_66();
				unk_0x88F483FBD433696A(uLocal_92, "SET_MAX_WIDTH");
				unk_0x74BF156C860580D4(fLocal_40);
				unk_0xE6B753D52F4CA222();
				func_165(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x6D05C5731A838CB3(2, iVar0) || unk_0x6D05C5731A838CB3(2, iVar1))
		{
			iLocal_84 = 0;
			func_129();
		}
		if (iLocal_85 == 0)
		{
			if (unk_0x6D05C5731A838CB3(2, iVar1) && !unk_0x6D05C5731A838CB3(2, iVar0))
			{
				iLocal_85 = 1;
				func_165(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_165(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (BitTest(Global_8253, 28))
				{
					func_78(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xE934399D6F2C3AC5(0, 177, 1), "CELL_281");
					func_78(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xE934399D6F2C3AC5(2, 179, 1), func_67());
				}
				else if (!func_161())
				{
					func_78(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xE934399D6F2C3AC5(0, 176, 1), "CELL_280");
					func_78(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xE934399D6F2C3AC5(0, 177, 1), "CELL_281");
				}
				else
				{
					func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(0, 176, 1), "CELL_280");
					func_78(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xE934399D6F2C3AC5(0, 177, 1), "CELL_281");
				}
				func_65();
				unk_0x88F483FBD433696A(uLocal_92, "SET_MAX_WIDTH");
				unk_0x74BF156C860580D4(fLocal_40);
				unk_0xE6B753D52F4CA222();
				func_165(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x6D05C5731A838CB3(2, iVar1) || unk_0x6D05C5731A838CB3(2, iVar0))
		{
			iLocal_85 = 0;
			func_129();
		}
	}
	else
	{
		unk_0xB211E45F1FE1ED2D(0, 2, 1);
		unk_0xB211E45F1FE1ED2D(0, 1, 1);
	}
	if (unk_0x7811C74D5B749F76(2))
	{
		func_129();
	}
	func_149();
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 200, 1);
	}
	if (func_161())
	{
		if (!BitTest(Global_4542297, 2))
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_4542297, 2);
			func_165(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if ((unk_0x875A214D5EBCA509(2, 183) && iLocal_106 == 0) && !func_161())
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20372, 1);
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (!unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D()) == 2)
			{
				if (BitTest(Global_4542297, 2))
				{
					unk_0x8744D2E3FC95740E(&Global_4542297, 2);
					if (!BitTest(Global_4542297, 2))
					{
						func_165(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&Global_4542297, 2);
					func_165(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_82)
	{
		if (iLocal_83 == 1)
		{
			iLocal_83 = 0;
			unk_0x88F483FBD433696A(uLocal_91, "SET_FOCUS_LOCK");
			unk_0x557F1E2300EF1A3E(0);
			func_64("CELL_FOCUS");
			unk_0x557F1E2300EF1A3E(1);
			unk_0xE6B753D52F4CA222();
		}
		if (!func_63(14))
		{
			if (BitTest(Global_4542297, 10))
			{
				if ((Global_78558 == 0 && unk_0x486FF5D06E9659F1(joaat("pi_menu")) > 0) && func_62())
				{
					unk_0x88F483FBD433696A(uLocal_91, "SET_FOCUS_LOCK");
					unk_0x557F1E2300EF1A3E(1);
					unk_0x882AEFD55B8D51FB("CELL_ACTTL");
					unk_0x60D332F23943B34F(unk_0xFACCDE46E24AD056(&Global_4543282));
					unk_0xCFAD3D478C87321A();
					unk_0x557F1E2300EF1A3E(0);
					unk_0xE6B753D52F4CA222();
					unk_0x8744D2E3FC95740E(&Global_4542297, 10);
				}
			}
		}
		else if (BitTest(Global_4542297, 10))
		{
			unk_0x8744D2E3FC95740E(&Global_4542297, 10);
		}
		iLocal_33 = unk_0x1DD05E817C89C737();
		if ((iLocal_33 - iLocal_32) > 1500)
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				Local_35 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
				if (unk_0xED977E2AE2CB16EE(Local_35, Local_34, 1) > 5f)
				{
					Global_20383.f_1 = 3;
					unk_0x98E393364463951A(0);
				}
				iLocal_32 = unk_0x1DD05E817C89C737();
			}
		}
	}
	else if (iLocal_83)
	{
		if (!unk_0x6D05C5731A838CB3(0, 182) && !func_161())
		{
			unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20372, 1);
			iLocal_83 = 0;
			unk_0x88F483FBD433696A(uLocal_91, "SET_FOCUS_LOCK");
			unk_0x557F1E2300EF1A3E(0);
			func_64("CELL_FOCUS");
			unk_0x557F1E2300EF1A3E(1);
			unk_0xE6B753D52F4CA222();
		}
	}
	else if (unk_0x6D05C5731A838CB3(0, 182) && !func_161())
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20372, 1);
		iLocal_83 = 1;
		if (!func_63(14))
		{
			unk_0x88F483FBD433696A(uLocal_91, "SET_FOCUS_LOCK");
			unk_0x557F1E2300EF1A3E(1);
			func_64("CELL_FOCUS");
			unk_0x557F1E2300EF1A3E(1);
			unk_0xE6B753D52F4CA222();
		}
	}
	if (func_174())
	{
		if ((unk_0x875A214D5EBCA509(2, 186) && iLocal_106 == 0) && !func_161())
		{
			if (iLocal_82)
			{
				iLocal_24++;
				if (iLocal_24 > 0 && iLocal_24 < 7)
				{
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
					{
						unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20372, 1);
						unk_0x2C09C6B54CFCFAF1(unk_0x4A8C381C258A124D(), "Mood_Normal_1", 0);
						unk_0x490EA3A0CF334F58(unk_0x4A8C381C258A124D());
						if (Global_20383 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0xB204F40D393426B6(unk_0x4A8C381C258A124D(), 0, 1);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0xB204F40D393426B6(unk_0x4A8C381C258A124D(), 1, 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_24 == 2 || iLocal_24 == 3) || iLocal_24 == 4) || iLocal_24 == 8) || iLocal_24 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_24 == 3)
										{
											unk_0x2C09C6B54CFCFAF1(unk_0x4A8C381C258A124D(), sLocal_22[iLocal_24], 0);
										}
									}
								}
								else
								{
									unk_0x2C09C6B54CFCFAF1(unk_0x4A8C381C258A124D(), sLocal_22[iLocal_24], 0);
								}
							}
							else
							{
								unk_0x2C09C6B54CFCFAF1(unk_0x4A8C381C258A124D(), sLocal_22[iLocal_24], 0);
							}
						}
						else
						{
							unk_0x2C09C6B54CFCFAF1(unk_0x4A8C381C258A124D(), sLocal_22[iLocal_24], 0);
						}
					}
				}
				if (iLocal_24 == 7 || iLocal_24 > 7)
				{
					iLocal_24 = 0;
				}
				if (iLocal_24 == 0)
				{
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
					{
						unk_0x2C09C6B54CFCFAF1(unk_0x4A8C381C258A124D(), "Mood_Normal_1", 0);
						unk_0x490EA3A0CF334F58(unk_0x4A8C381C258A124D());
						unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20372, 1);
					}
				}
			}
		}
		if ((unk_0x875A214D5EBCA509(2, 185) && iLocal_106 == 0) && !func_161())
		{
			if (iLocal_82)
			{
				if (bLocal_29 == 1)
				{
					unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20372, 1);
					if (iLocal_28 == 0)
					{
						iLocal_28 = 1;
						iLocal_27 = 1;
						if (unk_0x1B79E937E91F40C3(sLocal_19[Global_4541021], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0x20B0BCFBA94C4732(1);
							unk_0x453DA8CFCDA69D26(1);
						}
					}
					else
					{
						iLocal_28 = 0;
						iLocal_27 = 0;
						unk_0x20B0BCFBA94C4732(0);
						unk_0x453DA8CFCDA69D26(0);
					}
				}
			}
			else if (bLocal_30 == 1)
			{
				if (iLocal_27 == 0)
				{
					iLocal_27 = 1;
					iLocal_28 = 1;
					unk_0x20B0BCFBA94C4732(1);
					unk_0x453DA8CFCDA69D26(1);
				}
				else
				{
					iLocal_27 = 0;
					iLocal_28 = 0;
					unk_0x20B0BCFBA94C4732(0);
					unk_0x453DA8CFCDA69D26(0);
				}
			}
		}
	}
	if (iLocal_26 == 1 && !func_161())
	{
		if (unk_0x875A214D5EBCA509(0, 172) && iLocal_106 == 0)
		{
			if (func_174())
			{
				Global_4541022++;
				unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20372, 1);
			}
			if (Global_4541022 == 13)
			{
				func_126(0);
				unk_0xD974CD3A050559FE(1f);
				unk_0x633E3833FB96BCCB(sLocal_20[(Global_4541022 - 1)]);
				Global_4541022 = 0;
				func_61();
				if (iLocal_21 == 1)
				{
					unk_0x8744D2E3FC95740E(&Global_4542297, 2);
					iLocal_21 = 0;
					func_165(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4541022 > 0 && Global_4541022 < 13)
			{
				iLocal_26 = 0;
				iLocal_25 = 0;
				unk_0xD0D00ED689D6CA81(sLocal_20[Global_4541022], 0);
			}
		}
	}
	if (Global_4541022 > 0)
	{
		if (iLocal_26 == 0)
		{
			if (unk_0x38D063D8CF6D1967(sLocal_20[Global_4541022]))
			{
				iLocal_25 = 1;
				iLocal_26 = 1;
				if (!unk_0xB18CDB475D274A8E())
				{
					func_126(1);
				}
				if (iLocal_21 == 0)
				{
					if (!BitTest(Global_4542297, 2))
					{
						iLocal_21 = 1;
					}
				}
				unk_0x0B0C9A0F9AAEB7F0(&Global_4542297, 2);
				func_165(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0xD974CD3A050559FE(0.25f);
				unk_0xEB4A8AC9A591F10E(sLocal_20[Global_4541022], 0);
			}
		}
		if (iLocal_25 == 1)
		{
			if (Global_4541022 == 1 || Global_4541022 == 3)
			{
			}
			if (Global_4541022 == 2 || Global_4541022 == 4)
			{
			}
		}
	}
	if ((unk_0x875A214D5EBCA509(0, 173) && iLocal_106 == 0) && !func_161())
	{
		if (func_174())
		{
			func_117(0);
			Global_4541021++;
			unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20372, 1);
		}
		if (Global_4541021 == 13)
		{
			Global_4541021 = 0;
		}
		if (Global_4541021 == 0)
		{
			if (func_174())
			{
				func_117(0);
			}
		}
		else
		{
			func_127();
		}
		func_60();
	}
	if ((unk_0xDEE3EFEA31A1F555(0, 184) && iLocal_106 == 0) && !func_161())
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && !unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D()) == 2)
			{
				Local_34 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
				unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20372, 1);
				func_165(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_164(uLocal_91, "CLOSE_SHUTTER");
				iLocal_86 = unk_0x1DD05E817C89C737();
				while (unk_0x1DD05E817C89C737() < (iLocal_86 + iLocal_90) && Global_20383.f_1 > 3)
				{
					func_159();
					func_144();
					func_94();
					unk_0xC0964AABD3C0CC7E();
					wait(0);
				}
				if (iLocal_82 == 0)
				{
					unk_0x8E4825CCACA34B58(iLocal_63);
					iLocal_82 = 1;
					func_59(1);
					func_58();
					unk_0x0B0C9A0F9AAEB7F0(&Global_8255, 3);
					iLocal_32 = unk_0x1DD05E817C89C737();
				}
				else
				{
					iLocal_84 = 0;
					iLocal_85 = 0;
					func_59(0);
					iLocal_82 = 0;
					unk_0x8744D2E3FC95740E(&Global_8255, 3);
				}
				iLocal_86 = unk_0x1DD05E817C89C737();
				while (unk_0x1DD05E817C89C737() < (iLocal_86 + iLocal_88) && Global_20383.f_1 > 3)
				{
					func_159();
					func_144();
					func_94();
					unk_0xC0964AABD3C0CC7E();
					wait(0);
				}
				func_164(uLocal_91, "OPEN_SHUTTER");
				if (func_174())
				{
					if (Global_4541022 == 0)
					{
						if (!BitTest(Global_4542297, 2))
						{
							func_165(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!BitTest(Global_4542297, 2))
				{
					func_165(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_144();
				func_159();
				if (BitTest(Global_8253, 28))
				{
					StringCopy(&cLocal_96, "CELL_296", 16);
					func_56();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_295", 16);
					func_30();
				}
			}
		}
	}
	if (iLocal_82 == 0)
	{
		if (iLocal_64 == 0)
		{
			if (unk_0x875A214D5EBCA509(0, 40) || unk_0x875A214D5EBCA509(0, 41))
			{
				fLocal_65 = unk_0x9B92BDBE805E7967();
				if (fLocal_65 > 1f && fLocal_65 < 4.5f)
				{
					if (unk_0x9F0C06CFBACDD6A1(iLocal_63))
					{
						unk_0xBF3D28CA44F3BE2D(iLocal_63, "Camera_Zoom", &Global_20372, 1);
					}
				}
				else
				{
					unk_0x8E4825CCACA34B58(iLocal_63);
				}
				iLocal_64 = 1;
			}
		}
		else if (unk_0x6D05C5731A838CB3(0, 40) || unk_0x6D05C5731A838CB3(0, 41))
		{
			fLocal_65 = unk_0x9B92BDBE805E7967();
			if (fLocal_65 > 1f && fLocal_65 < 4.5f)
			{
				if (unk_0x9F0C06CFBACDD6A1(iLocal_63))
				{
					unk_0xBF3D28CA44F3BE2D(iLocal_63, "Camera_Zoom", &Global_20372, 1);
				}
			}
			else
			{
				unk_0x8E4825CCACA34B58(iLocal_63);
			}
		}
		else
		{
			unk_0x8E4825CCACA34B58(iLocal_63);
		}
	}
	if ((func_112(2, Global_20352, 0) && !func_124()) && !func_112(2, Global_20351, 0))
	{
		fLocal_38 = unk_0x98F0D28A64EC7D5D();
		fLocal_39 = unk_0x3FAFDC4C824A6C54();
		unk_0x4FA503A6757253A7(0, 0);
		unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 21);
		unk_0x8E4825CCACA34B58(iLocal_63);
		iLocal_78 = 1;
		func_165(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_165(uLocal_91, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0xBF3D28CA44F3BE2D(-1, "Camera_Shoot", &Global_20372, 1);
		func_164(uLocal_91, "CLOSE_SHUTTER");
		Local_43 = { -90.3f, 0f, 90f };
		unk_0xA0382000AA987093(Local_43, 0);
		if (!func_174())
		{
			func_117(1);
		}
		Global_22761 = 1;
		unk_0x665A7E873A6664BC(0, 1);
		while (Global_22760 < 6 && Global_20383.f_1 > 3)
		{
			func_159();
			func_144();
			func_94();
			func_149();
			unk_0xC0964AABD3C0CC7E();
			wait(0);
		}
		unk_0xFF7028E54EB0EA84(0, 0);
		if (Global_20325)
		{
			func_1(1);
		}
		iLocal_86 = unk_0x1DD05E817C89C737();
		while (unk_0x1DD05E817C89C737() < (iLocal_86 + iLocal_89) && Global_20383.f_1 > 3)
		{
			func_159();
			func_144();
			func_94();
			unk_0xC0964AABD3C0CC7E();
			wait(0);
		}
		settimera(0);
		func_164(uLocal_91, "OPEN_SHUTTER");
		unk_0x8744D2E3FC95740E(&Global_8253, 21);
		func_129();
		if (Global_20383.f_1 > 3)
		{
			if (Global_78558)
			{
				func_23(1087, 1, -1);
				func_22();
				func_19(-1492367786, 23, 0);
			}
			else
			{
				switch (func_13())
				{
					case 0:
						unk_0x3CAC0DB32E69B1B8(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0x3CAC0DB32E69B1B8(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0x3CAC0DB32E69B1B8(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_22();
			}
			func_126(0);
		}
		func_144();
	}
	if (BitTest(Global_8253, 28))
	{
		if (func_112(2, Global_20355, 0))
		{
			unk_0x4FA503A6757253A7(0, 0);
			wait(0);
			unk_0xC0964AABD3C0CC7E();
			func_159();
			wait(0);
			unk_0xC0964AABD3C0CC7E();
			func_159();
			unk_0xE379C4B49924485C();
			unk_0x464C2B9EE565B093();
			Global_22762 = 1;
			iLocal_94 = 0;
			iLocal_77 = 1;
			Global_22758 = 1;
			unk_0x665A7E873A6664BC(0, 1);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_8();
			iLocal_78 = 0;
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				Local_34 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			}
			func_122(0, 0);
			func_126(0);
			iLocal_66 = 0;
			func_117(1);
			if (!Global_2793046.f_6749)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 9);
			}
			unk_0x98E393364463951A(0);
			iLocal_93 = 0;
			func_165(Global_20364, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_13()
{
	func_14();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_14()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_17(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_16(unk_0x4A8C381C258A124D());
			if (func_15(iVar0) && (!func_63(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_15(Global_113648.f_2365.f_539.f_4321))
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

bool func_15(int iParam0)
{
	return iParam0 < 3;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)
{
	if (func_15(iParam0))
	{
		return func_18(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_18(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_19(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_21(iParam1, iParam2))
	{
		iVar0 = func_20();
		Global_2694420[iVar0] = iParam1;
		Global_2694431[iVar0] = iParam0;
	}
}

int func_20()
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

int func_21(int iParam0, var uParam1)
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

void func_22()
{
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 1;
	iLocal_76 = 0;
	Global_20320 = { Global_20336[Global_20328 /*3*/] };
	func_115(0, 1);
	func_122(0, 0);
	func_126(0);
	iLocal_66 = 0;
	func_117(1);
	if (!BitTest(Global_8254, 28))
	{
		if (unk_0xADED703C1F8CC52B() == 0)
		{
			if (unk_0x1226C55CA7D2269A())
			{
				if (iLocal_68 == 0)
				{
					iLocal_68 = 1;
				}
			}
		}
	}
}

void func_23(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_27(iParam0, func_28(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_26(iParam0))
	{
		func_25(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_24(iParam0, iVar0, iParam2, 1);
	}
}

void func_24(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2805029[iParam0 /*3*/][func_28(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1665566[func_28(uParam2)] = iParam1;
			break;
		
		case 789:
			Global_1665572[func_28(uParam2)] = iParam1;
			break;
		
		case 790:
			Global_1665578[func_28(uParam2)] = iParam1;
			break;
		
		case 791:
			Global_1665584[func_28(uParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1665590[func_28(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1665536[func_28(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1665542[func_28(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1665548[func_28(uParam2)] = iParam1;
			break;
		
		case 781:
			Global_1665554[func_28(uParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1665560[func_28(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1665506[func_28(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1665512[func_28(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1665518[func_28(uParam2)] = iParam1;
			break;
		
		case 771:
			Global_1665524[func_28(uParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1665530[func_28(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1665596[func_28(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1665602[func_28(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1665608[func_28(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1665614[func_28(uParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1665620[func_28(uParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1665626[func_28(uParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1665632[func_28(uParam2)] = iParam1;
			break;
		
		case 640:
			Global_1665638[func_28(uParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1665644[func_28(uParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2851325[0 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2851325[1 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2851325[2 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2851325[3 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 12424:
			Global_2851504[func_28(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1665650[func_28(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1665656[func_28(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1665662[func_28(uParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1665668[func_28(uParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1665674[func_28(uParam2)] = iParam1;
			break;
		
		case 11803:
			Global_1665680[func_28(uParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1665686[func_28(uParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2851413[0 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2851413[1 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2851413[2 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2851413[3 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2851413[4 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2851507[0 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2851507[1 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2851507[2 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2851507[3 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2851507[4 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2851523[0 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2851523[1 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2851523[2 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2851523[3 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2851523[4 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2851413[5 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2851325[4 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2851539[func_28(uParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2851548[func_28(uParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2851542[func_28(uParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2851551[func_28(uParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2851545[func_28(uParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2851554[func_28(uParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2851557[func_28(uParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2851413[6 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2851325[5 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2851413[7 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2851325[6 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2851413[8 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2851325[7 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2851413[9 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2851325[8 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2851413[10 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2851325[9 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2851413[11 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2851325[10 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2851413[12 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2851325[11 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2851413[13 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2851325[12 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2851413[14 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2851325[13 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2851413[15 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2851325[14 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2851413[16 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2851325[15 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2851413[17 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2851325[16 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2851325[17 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2851325[18 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2851325[19 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2851325[20 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2851560[func_28(uParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2851563[func_28(uParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2851566[func_28(uParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2851569[func_28(uParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2851572[func_28(uParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2851575[func_28(uParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2851578[func_28(uParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2851581[func_28(uParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2851584[func_28(uParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2851587[func_28(uParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2851590[func_28(uParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2851593[func_28(uParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2851596[func_28(uParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2851599[func_28(uParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2851325[21 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2851413[23 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2851325[22 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2851413[24 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2851325[23 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2851325[24 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2851325[25 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2851413[27 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2851325[26 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2851413[28 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2851325[27 /*3*/][func_28(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_25(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805029[iParam0 /*3*/][func_28(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
	}
}

int func_26(int iParam0)
{
	if (Global_1665487)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8729:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8731:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8733:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8735:
			case 1304:
			case 7236:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8734:
			case 9538:
			case 11803:
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 12424:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3060:
			case 3235:
			case 3237:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3230:
			case 3224:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3671:
			case 3692:
			case 3233:
			case 3232:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 4032:
			case 4031:
			case 6113:
			case 6112:
			case 6171:
			case 6170:
			case 6536:
			case 6535:
			case 6549:
			case 6548:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 6568:
			case 6567:
			case 7286:
			case 7288:
			case 7290:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8297:
			case 8905:
			case 8013:
			case 8537:
			case 8980:
			case 8982:
			case 8983:
			case 8985:
			case 9624:
			case 9913:
			case 10441:
			case 10443:
			case 10444:
			case 10446:
				return 1;
				break;
			}
	}
	return 0;
}

int func_27(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805029[iParam0 /*3*/][func_28(uParam1)];
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_28(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
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

var func_29()
{
	return Global_1574918;
}

void func_30()
{
	if (iLocal_106 == 1)
	{
		func_55();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_165(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_165(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		if (!func_161())
		{
			func_78(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xE934399D6F2C3AC5(0, 177, 1), "CELL_281");
			func_78(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xE934399D6F2C3AC5(0, 176, 1), "CELL_280");
		}
		else
		{
			func_78(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xE934399D6F2C3AC5(0, 177, 1), "CELL_281");
			func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(0, 176, 1), "CELL_280");
		}
		if (iLocal_82)
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) || unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D()) == 2)
				{
					if (unk_0xAE231F549813BBDF(2) || func_4())
					{
						func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_78558 == 0 && unk_0x486FF5D06E9659F1(joaat("pi_menu")) > 0) && func_62())
				{
					func_53();
				}
				else
				{
					if (unk_0xAE231F549813BBDF(2) || func_4())
					{
						func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_78(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xE934399D6F2C3AC5(2, 183, 1), "CELL_GRID");
					func_78(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xF761D79754BC3043(0, 1, 1), "CELL_285");
					if (func_174())
					{
						func_52(5f);
						func_51(6f);
						if (func_32(1))
						{
							func_31(7f);
							if (bLocal_29)
							{
								func_78(uLocal_92, "SET_DATA_SLOT", 8f, unk_0xE934399D6F2C3AC5(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_78(uLocal_92, "SET_DATA_SLOT", 7f, unk_0xE934399D6F2C3AC5(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) || unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D()) == 2)
			{
				if (!unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D()) == 2)
				{
					if (!func_161())
					{
						func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF761D79754BC3043(0, 1, 1), "CELL_285");
						func_78(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xE934399D6F2C3AC5(2, 183, 1), "CELL_GRID");
						func_78(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xE934399D6F2C3AC5(0, 39, 1), "CELL_284");
					}
					else
					{
						func_78(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xF761D79754BC3043(0, 1, 1), "CELL_285");
						if (!unk_0xAE231F549813BBDF(0))
						{
							func_78(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xE934399D6F2C3AC5(0, 210, 1), "CELL_284");
						}
						else
						{
							func_78(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xF761D79754BC3043(0, 29, 1), "CELL_284");
						}
					}
					if (!func_161())
					{
						if (func_174())
						{
							func_52(6f);
							func_51(7f);
							if (bLocal_30)
							{
								func_78(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xE934399D6F2C3AC5(0, 182, 1), "CELL_FOCUS");
							}
							func_78(uLocal_92, "SET_DATA_SLOT", 8f, unk_0xE934399D6F2C3AC5(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF761D79754BC3043(0, 1, 1), "CELL_285");
					if (func_174())
					{
						func_52(3f);
						func_51(4f);
						func_78(uLocal_92, "SET_DATA_SLOT", 8f, unk_0xE934399D6F2C3AC5(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (!func_161())
				{
					if (unk_0xAE231F549813BBDF(2) || func_4())
					{
						func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(0, 184, 1), "CELL_SP_1NP_XB");
					}
				}
				if (!unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D()) == 2)
				{
					if (!func_161())
					{
						func_78(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xE934399D6F2C3AC5(2, 183, 1), "CELL_GRID");
						func_78(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xF761D79754BC3043(0, 1, 1), "CELL_285");
					}
					else
					{
						func_78(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xF761D79754BC3043(0, 1, 1), "CELL_285");
						if (!unk_0xAE231F549813BBDF(0))
						{
							func_78(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xE934399D6F2C3AC5(0, 210, 1), "CELL_284");
						}
						else
						{
							func_78(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xF761D79754BC3043(0, 29, 1), "CELL_284");
						}
					}
					if (!func_161())
					{
						func_78(uLocal_92, "SET_DATA_SLOT", 6f, unk_0xE934399D6F2C3AC5(0, 39, 1), "CELL_284");
					}
					if (!func_161())
					{
						if (func_174())
						{
							func_52(7f);
							func_51(8f);
							if (bLocal_30)
							{
								func_78(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xE934399D6F2C3AC5(0, 182, 1), "CELL_FOCUS");
							}
							func_78(uLocal_92, "SET_DATA_SLOT", 9f, unk_0xE934399D6F2C3AC5(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF761D79754BC3043(0, 1, 1), "CELL_285");
					if (func_174())
					{
						func_52(3f);
						func_51(4f);
						func_78(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xE934399D6F2C3AC5(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0x88F483FBD433696A(uLocal_92, "SET_MAX_WIDTH");
		unk_0x74BF156C860580D4(fLocal_40);
		unk_0xE6B753D52F4CA222();
		func_165(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_31(float fParam0)
{
	func_78(uLocal_92, "SET_DATA_SLOT", fParam0, unk_0xE934399D6F2C3AC5(0, 174, 1), "CELL_ACTION");
}

int func_32(int iParam0)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_50(Global_4456522, Global_4456523))
		{
			if (iParam0 == 0 || !func_33(Global_4456522, Global_4456523, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_33(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_34(unk_0x4A8C381C258A124D(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_34(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (func_49())
	{
		return 0;
	}
	uVar0 = 6;
	uVar1 = 6;
	uVar2 = 7;
	if (iParam1 == 0)
	{
		iVar6 = 3;
	}
	else if (bParam3)
	{
		iVar6 = 1;
	}
	else if (bParam4)
	{
		iVar6 = 2;
	}
	else
	{
		iVar6 = 0;
	}
	func_42(iParam1, iParam2, &uVar0, &uVar1, &uVar2, iVar6, bParam5);
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar3 = func_41(iParam0);
			if (!iVar3 == -1)
			{
				if (func_40(&uVar0, iVar3))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar4 = func_39(iParam0);
			if (!iVar4 == -1)
			{
				if (func_37(&uVar1, iVar4))
				{
					return 1;
				}
			}
		}
		if (unk_0x76CD105BCAC6EB9F())
		{
			iVar5 = func_36(iParam0);
			if (!iVar5 == 0)
			{
				if (func_35(&uVar2, iVar5))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (BitTest((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_36(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xC0120BBCC298EA2F(iParam0, 1);
	return uVar0;
}

bool func_37(var uParam0, int iParam1)
{
	return func_38(uParam0, iParam1);
}

int func_38(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (BitTest((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_39(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xB204F40D393426B6(iParam0, 0, 1);
	return uVar0;
}

bool func_40(var uParam0, int iParam1)
{
	return func_38(uParam0, iParam1);
}

var func_41(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xB204F40D393426B6(iParam0, 0, 1);
	return uVar0;
}

void func_42(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_48(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			func_47(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 13, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 1:
							func_46(uParam3, 4, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 2:
							func_46(uParam3, 13, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 39, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 38, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 62, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_48(uParam4, 136, 1);
							func_48(uParam4, 138, 1);
							func_48(uParam4, 139, 1);
							func_48(uParam4, 143, 1);
							func_48(uParam4, 144, 1);
							func_48(uParam4, 145, 1);
							func_48(uParam4, 147, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 1:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 2:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_48(uParam4, 136, 1);
							func_48(uParam4, 138, 1);
							func_48(uParam4, 139, 1);
							func_48(uParam4, 143, 1);
							func_48(uParam4, 144, 1);
							func_48(uParam4, 145, 1);
							func_48(uParam4, 147, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
					}
					break;
				
				case 59:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 66, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 77, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 60:
				case 63:
					func_46(uParam3, 67, 1);
					func_46(uParam3, 68, 1);
					func_46(uParam3, 69, 1);
					func_46(uParam3, 70, 1);
					func_46(uParam3, 71, 1);
					func_46(uParam3, 72, 1);
					func_46(uParam3, 73, 1);
					func_46(uParam3, 74, 1);
					func_46(uParam3, 78, 1);
					func_46(uParam3, 79, 1);
					func_46(uParam3, 80, 1);
					func_46(uParam3, 81, 1);
					func_46(uParam3, 82, 1);
					func_46(uParam3, 91, 1);
					func_46(uParam3, 92, 1);
					func_44(uParam2, 66, 1);
					func_44(uParam2, 67, 1);
					func_44(uParam2, 68, 1);
					func_44(uParam2, 69, 1);
					func_44(uParam2, 70, 1);
					func_44(uParam2, 71, 1);
					func_44(uParam2, 72, 1);
					func_44(uParam2, 73, 1);
					func_44(uParam2, 77, 1);
					func_44(uParam2, 78, 1);
					func_44(uParam2, 79, 1);
					func_44(uParam2, 80, 1);
					func_44(uParam2, 81, 1);
					func_44(uParam2, 90, 1);
					func_44(uParam2, 91, 1);
					func_46(uParam3, 38, 1);
					func_46(uParam3, 47, 1);
					func_46(uParam3, 111, 1);
					func_44(uParam2, 37, 1);
					func_44(uParam2, 46, 1);
					func_44(uParam2, 110, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_43(uParam2, uParam3, uParam4);
					break;
				
				case 61:
					func_46(uParam3, 67, 1);
					func_46(uParam3, 68, 1);
					func_46(uParam3, 69, 1);
					func_46(uParam3, 70, 1);
					func_46(uParam3, 71, 1);
					func_46(uParam3, 72, 1);
					func_46(uParam3, 73, 1);
					func_46(uParam3, 74, 1);
					func_46(uParam3, 78, 1);
					func_46(uParam3, 79, 1);
					func_46(uParam3, 80, 1);
					func_46(uParam3, 81, 1);
					func_46(uParam3, 82, 1);
					func_46(uParam3, 91, 1);
					func_46(uParam3, 92, 1);
					func_44(uParam2, 66, 1);
					func_44(uParam2, 67, 1);
					func_44(uParam2, 68, 1);
					func_44(uParam2, 69, 1);
					func_44(uParam2, 70, 1);
					func_44(uParam2, 71, 1);
					func_44(uParam2, 72, 1);
					func_44(uParam2, 73, 1);
					func_44(uParam2, 77, 1);
					func_44(uParam2, 78, 1);
					func_44(uParam2, 79, 1);
					func_44(uParam2, 80, 1);
					func_44(uParam2, 81, 1);
					func_44(uParam2, 90, 1);
					func_44(uParam2, 91, 1);
					func_46(uParam3, 38, 1);
					func_46(uParam3, 47, 1);
					func_46(uParam3, 111, 1);
					func_44(uParam2, 37, 1);
					func_44(uParam2, 46, 1);
					func_44(uParam2, 110, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_43(uParam2, uParam3, uParam4);
					break;
				
				case 62:
					func_46(uParam3, 67, 1);
					func_46(uParam3, 68, 1);
					func_46(uParam3, 69, 1);
					func_46(uParam3, 70, 1);
					func_46(uParam3, 71, 1);
					func_46(uParam3, 72, 1);
					func_46(uParam3, 73, 1);
					func_46(uParam3, 74, 1);
					func_46(uParam3, 78, 1);
					func_46(uParam3, 79, 1);
					func_46(uParam3, 80, 1);
					func_46(uParam3, 81, 1);
					func_46(uParam3, 82, 1);
					func_46(uParam3, 91, 1);
					func_46(uParam3, 92, 1);
					func_44(uParam2, 66, 1);
					func_44(uParam2, 67, 1);
					func_44(uParam2, 68, 1);
					func_44(uParam2, 69, 1);
					func_44(uParam2, 70, 1);
					func_44(uParam2, 71, 1);
					func_44(uParam2, 72, 1);
					func_44(uParam2, 73, 1);
					func_44(uParam2, 77, 1);
					func_44(uParam2, 78, 1);
					func_44(uParam2, 79, 1);
					func_44(uParam2, 80, 1);
					func_44(uParam2, 81, 1);
					func_44(uParam2, 90, 1);
					func_44(uParam2, 91, 1);
					func_46(uParam3, 38, 1);
					func_46(uParam3, 47, 1);
					func_46(uParam3, 111, 1);
					func_44(uParam2, 37, 1);
					func_44(uParam2, 46, 1);
					func_44(uParam2, 110, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_43(uParam2, uParam3, uParam4);
					break;
				
				case 64:
				case 65:
				case 66:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 3, 1);
							func_46(uParam3, 4, 1);
							func_46(uParam3, 6, 1);
							func_46(uParam3, 10, 1);
							func_46(uParam3, 54, 1);
							func_46(uParam3, 55, 1);
							func_46(uParam3, 56, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 37, 1);
							func_46(uParam3, 39, 1);
							func_46(uParam3, 55, 1);
							func_46(uParam3, 106, 1);
							func_46(uParam3, 114, 1);
							func_46(uParam3, 116, 1);
							func_46(uParam3, 117, 1);
							func_46(uParam3, 118, 1);
							func_46(uParam3, 119, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 8, 1);
							func_44(uParam2, 9, 1);
							func_44(uParam2, 10, 1);
							func_44(uParam2, 53, 1);
							func_44(uParam2, 56, 1);
							func_44(uParam2, 55, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 26, 1);
							func_44(uParam2, 27, 1);
							func_44(uParam2, 28, 1);
							func_44(uParam2, 32, 1);
							func_44(uParam2, 36, 1);
							func_44(uParam2, 38, 1);
							func_44(uParam2, 55, 1);
							func_44(uParam2, 14, 1);
							func_44(uParam2, 105, 1);
							func_44(uParam2, 113, 1);
							func_44(uParam2, 114, 1);
							func_44(uParam2, 115, 1);
							func_44(uParam2, 116, 1);
							func_44(uParam2, 117, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_46(uParam3, 3, 1);
							func_46(uParam3, 4, 1);
							func_46(uParam3, 6, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 19, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 37, 1);
							func_46(uParam3, 39, 1);
							func_46(uParam3, 55, 1);
							func_46(uParam3, 106, 1);
							func_46(uParam3, 114, 1);
							func_46(uParam3, 116, 1);
							func_46(uParam3, 117, 1);
							func_46(uParam3, 118, 1);
							func_46(uParam3, 119, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 8, 1);
							func_44(uParam2, 9, 1);
							func_44(uParam2, 10, 1);
							func_44(uParam2, 53, 1);
							func_44(uParam2, 56, 1);
							func_44(uParam2, 55, 1);
							func_44(uParam2, 11, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 22, 1);
							func_44(uParam2, 54, 1);
							func_44(uParam2, 26, 1);
							func_44(uParam2, 27, 1);
							func_44(uParam2, 28, 1);
							func_44(uParam2, 30, 1);
							func_44(uParam2, 31, 1);
							func_44(uParam2, 32, 1);
							func_44(uParam2, 36, 1);
							func_44(uParam2, 38, 1);
							func_44(uParam2, 55, 1);
							func_44(uParam2, 14, 1);
							func_44(uParam2, 105, 1);
							func_44(uParam2, 113, 1);
							func_44(uParam2, 114, 1);
							func_44(uParam2, 115, 1);
							func_44(uParam2, 116, 1);
							func_44(uParam2, 117, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 39, 1);
							func_46(uParam3, 106, 1);
							func_46(uParam3, 114, 1);
							func_46(uParam3, 116, 1);
							func_46(uParam3, 117, 1);
							func_46(uParam3, 118, 1);
							func_46(uParam3, 119, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 38, 1);
							func_44(uParam2, 14, 1);
							func_44(uParam2, 105, 1);
							func_44(uParam2, 113, 1);
							func_44(uParam2, 114, 1);
							func_44(uParam2, 115, 1);
							func_44(uParam2, 116, 1);
							func_44(uParam2, 117, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 19, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_43(uParam2, uParam3, uParam4);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 2:
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_48(uParam4, 115, 1);
							func_48(uParam4, 116, 1);
							func_43(uParam2, uParam3, uParam4);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 4, 1);
							break;
						
						case 1:
							func_48(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_48(uParam4, 110, 1);
							func_48(uParam4, 112, 1);
							func_43(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 6, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 1:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 6, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 2:
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 5, 1);
							func_48(uParam4, 6, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 3, 1);
							func_46(uParam3, 7, 1);
							func_46(uParam3, 0, 1);
							func_46(uParam3, 12, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 15, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 17, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 21, 1);
							func_46(uParam3, 25, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 30, 1);
							func_46(uParam3, 31, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 39, 1);
							func_46(uParam3, 37, 1);
							func_44(uParam2, 0, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 7, 1);
							func_44(uParam2, 8, 1);
							func_44(uParam2, 11, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 15, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 17, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 19, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 22, 1);
							func_44(uParam2, 54, 1);
							func_44(uParam2, 24, 1);
							func_44(uParam2, 26, 1);
							func_44(uParam2, 27, 1);
							func_44(uParam2, 28, 1);
							func_44(uParam2, 30, 1);
							func_44(uParam2, 31, 1);
							func_44(uParam2, 32, 1);
							func_44(uParam2, 38, 1);
							func_44(uParam2, 36, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 77, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 1:
							func_46(uParam3, 3, 1);
							func_46(uParam3, 7, 1);
							func_46(uParam3, 0, 1);
							func_46(uParam3, 12, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 15, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 17, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 21, 1);
							func_46(uParam3, 25, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 30, 1);
							func_46(uParam3, 31, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 39, 1);
							func_44(uParam2, 0, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 7, 1);
							func_44(uParam2, 11, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 15, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 17, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 19, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 22, 1);
							func_44(uParam2, 54, 1);
							func_44(uParam2, 24, 1);
							func_44(uParam2, 38, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 6, 1);
							func_48(uParam4, 7, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 43, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 77, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
						
						case 2:
							func_46(uParam3, 1, 1);
							func_46(uParam3, 3, 1);
							func_46(uParam3, 4, 1);
							func_46(uParam3, 5, 1);
							func_46(uParam3, 7, 1);
							func_46(uParam3, 10, 1);
							func_46(uParam3, 54, 1);
							func_46(uParam3, 55, 1);
							func_46(uParam3, 56, 1);
							func_46(uParam3, 0, 1);
							func_46(uParam3, 12, 1);
							func_46(uParam3, 13, 1);
							func_46(uParam3, 15, 1);
							func_46(uParam3, 16, 1);
							func_46(uParam3, 48, 1);
							func_46(uParam3, 49, 1);
							func_46(uParam3, 17, 1);
							func_46(uParam3, 18, 1);
							func_46(uParam3, 50, 1);
							func_46(uParam3, 51, 1);
							func_46(uParam3, 52, 1);
							func_46(uParam3, 53, 1);
							func_46(uParam3, 62, 1);
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_46(uParam3, 20, 1);
							func_46(uParam3, 21, 1);
							func_46(uParam3, 25, 1);
							func_46(uParam3, 26, 1);
							func_46(uParam3, 27, 1);
							func_46(uParam3, 30, 1);
							func_46(uParam3, 31, 1);
							func_46(uParam3, 32, 1);
							func_46(uParam3, 33, 1);
							func_46(uParam3, 37, 1);
							func_46(uParam3, 39, 1);
							func_44(uParam2, 0, 1);
							func_44(uParam2, 1, 1);
							func_44(uParam2, 2, 1);
							func_44(uParam2, 3, 1);
							func_44(uParam2, 4, 1);
							func_44(uParam2, 5, 1);
							func_44(uParam2, 6, 1);
							func_44(uParam2, 7, 1);
							func_44(uParam2, 8, 1);
							func_44(uParam2, 9, 1);
							func_44(uParam2, 10, 1);
							func_44(uParam2, 53, 1);
							func_44(uParam2, 56, 1);
							func_44(uParam2, 55, 1);
							func_44(uParam2, 11, 1);
							func_44(uParam2, 12, 1);
							func_44(uParam2, 13, 1);
							func_44(uParam2, 14, 1);
							func_44(uParam2, 15, 1);
							func_44(uParam2, 16, 1);
							func_44(uParam2, 47, 1);
							func_44(uParam2, 48, 1);
							func_44(uParam2, 17, 1);
							func_44(uParam2, 18, 1);
							func_44(uParam2, 49, 1);
							func_44(uParam2, 50, 1);
							func_44(uParam2, 51, 1);
							func_44(uParam2, 52, 1);
							func_44(uParam2, 62, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							func_44(uParam2, 19, 1);
							func_44(uParam2, 20, 1);
							func_44(uParam2, 21, 1);
							func_44(uParam2, 22, 1);
							func_44(uParam2, 54, 1);
							func_44(uParam2, 23, 1);
							func_44(uParam2, 24, 1);
							func_44(uParam2, 26, 1);
							func_44(uParam2, 27, 1);
							func_44(uParam2, 28, 1);
							func_44(uParam2, 29, 1);
							func_44(uParam2, 30, 1);
							func_44(uParam2, 31, 1);
							func_44(uParam2, 32, 1);
							func_44(uParam2, 33, 1);
							func_44(uParam2, 36, 1);
							func_44(uParam2, 38, 1);
							func_44(uParam2, 55, 1);
							func_48(uParam4, 1, 1);
							func_48(uParam4, 2, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 3, 1);
							func_48(uParam4, 4, 1);
							func_48(uParam4, 14, 1);
							func_48(uParam4, 15, 1);
							func_48(uParam4, 16, 1);
							func_48(uParam4, 6, 1);
							func_48(uParam4, 8, 1);
							func_48(uParam4, 9, 1);
							func_48(uParam4, 10, 1);
							func_48(uParam4, 12, 1);
							func_48(uParam4, 13, 1);
							func_48(uParam4, 17, 1);
							func_48(uParam4, 18, 1);
							func_48(uParam4, 19, 1);
							func_48(uParam4, 20, 1);
							func_48(uParam4, 59, 1);
							func_48(uParam4, 60, 1);
							func_48(uParam4, 61, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 62, 1);
							func_48(uParam4, 63, 1);
							func_48(uParam4, 64, 1);
							func_48(uParam4, 65, 1);
							func_48(uParam4, 66, 1);
							func_48(uParam4, 67, 1);
							func_48(uParam4, 68, 1);
							func_48(uParam4, 69, 1);
							func_48(uParam4, 70, 1);
							func_48(uParam4, 71, 1);
							func_48(uParam4, 72, 1);
							func_48(uParam4, 21, 1);
							func_48(uParam4, 22, 1);
							func_48(uParam4, 23, 1);
							func_48(uParam4, 24, 1);
							func_48(uParam4, 25, 1);
							func_48(uParam4, 26, 1);
							func_48(uParam4, 36, 1);
							func_48(uParam4, 46, 1);
							func_48(uParam4, 38, 1);
							func_48(uParam4, 29, 1);
							func_48(uParam4, 28, 1);
							func_48(uParam4, 31, 1);
							func_48(uParam4, 33, 1);
							func_48(uParam4, 34, 1);
							func_48(uParam4, 32, 1);
							func_48(uParam4, 92, 1);
							func_48(uParam4, 93, 1);
							func_48(uParam4, 94, 1);
							func_48(uParam4, 96, 1);
							func_48(uParam4, 97, 1);
							func_48(uParam4, 98, 1);
							func_48(uParam4, 100, 1);
							func_48(uParam4, 103, 1);
							func_48(uParam4, 104, 1);
							func_48(uParam4, 105, 1);
							func_48(uParam4, 106, 1);
							func_48(uParam4, 107, 1);
							func_48(uParam4, 108, 1);
							func_46(uParam3, 65, 1);
							func_46(uParam3, 67, 1);
							func_46(uParam3, 68, 1);
							func_46(uParam3, 69, 1);
							func_46(uParam3, 70, 1);
							func_46(uParam3, 71, 1);
							func_46(uParam3, 72, 1);
							func_46(uParam3, 73, 1);
							func_46(uParam3, 74, 1);
							func_46(uParam3, 75, 1);
							func_46(uParam3, 76, 1);
							func_46(uParam3, 77, 1);
							func_46(uParam3, 78, 1);
							func_46(uParam3, 79, 1);
							func_46(uParam3, 80, 1);
							func_46(uParam3, 81, 1);
							func_46(uParam3, 82, 1);
							func_46(uParam3, 91, 1);
							func_46(uParam3, 92, 1);
							func_44(uParam2, 64, 1);
							func_44(uParam2, 65, 1);
							func_44(uParam2, 66, 1);
							func_44(uParam2, 67, 1);
							func_44(uParam2, 68, 1);
							func_44(uParam2, 69, 1);
							func_44(uParam2, 70, 1);
							func_44(uParam2, 71, 1);
							func_44(uParam2, 72, 1);
							func_44(uParam2, 73, 1);
							func_44(uParam2, 74, 1);
							func_44(uParam2, 75, 1);
							func_44(uParam2, 77, 1);
							func_44(uParam2, 78, 1);
							func_44(uParam2, 79, 1);
							func_44(uParam2, 80, 1);
							func_44(uParam2, 81, 1);
							func_44(uParam2, 90, 1);
							func_44(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_44(uParam2, 2, 1);
							func_44(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 9:
				case 11:
				case 13:
				case 15:
				case 19:
				case 23:
				case 26:
				case 30:
				case 34:
				case 20:
				case 22:
					func_42(2, 59, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 32:
					func_42(2, 60, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 17:
				case 27:
				case 31:
					break;
			}
			break;
	}
}

void func_43(var uParam0, var uParam1, var uParam2)
{
	if ((*uParam0)[0] == 0 || (*uParam1)[0] == 0)
	{
	}
	func_48(uParam2, 124, 1);
	func_48(uParam2, 125, 1);
	func_48(uParam2, 126, 1);
	func_48(uParam2, 127, 1);
	func_48(uParam2, 128, 1);
	func_48(uParam2, 129, 1);
	func_48(uParam2, 130, 1);
	func_48(uParam2, 131, 1);
	func_48(uParam2, 132, 1);
	func_48(uParam2, 133, 1);
	func_48(uParam2, 136, 1);
	func_48(uParam2, 138, 1);
	func_48(uParam2, 139, 1);
	func_48(uParam2, 143, 1);
	func_48(uParam2, 144, 1);
	func_48(uParam2, 145, 1);
	func_48(uParam2, 147, 1);
}

void func_44(var uParam0, int iParam1, bool bParam2)
{
	func_45(uParam0, iParam1, bParam2);
}

void func_45(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0x8744D2E3FC95740E(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_46(var uParam0, int iParam1, bool bParam2)
{
	func_45(uParam0, iParam1, bParam2);
}

void func_47(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_48(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							break;
						
						case 1:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							break;
						
						case 2:
							func_46(uParam3, 38, 1);
							func_46(uParam3, 47, 1);
							func_46(uParam3, 111, 1);
							func_44(uParam2, 37, 1);
							func_44(uParam2, 46, 1);
							func_44(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_44(uParam2, 16, 1);
						func_44(uParam2, 47, 1);
						func_44(uParam2, 48, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
					}
					func_48(uParam4, 3, 1);
					func_48(uParam4, 4, 1);
					func_48(uParam4, 5, 1);
					func_48(uParam4, 6, 1);
					func_48(uParam4, 7, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 9, 1);
					func_48(uParam4, 12, 1);
					func_48(uParam4, 14, 1);
					func_48(uParam4, 15, 1);
					func_48(uParam4, 16, 1);
					func_48(uParam4, 17, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 28, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 33, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_48(uParam4, 110, 1);
					func_48(uParam4, 112, 1);
					func_48(uParam4, 115, 1);
					func_48(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 62, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
					}
					func_48(uParam4, 9, 1);
					func_48(uParam4, 12, 1);
					func_48(uParam4, 13, 1);
					func_48(uParam4, 17, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 29, 1);
					func_48(uParam4, 28, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 31, 1);
					func_48(uParam4, 33, 1);
					func_48(uParam4, 34, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					break;
				
				case 10:
					func_48(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_46(uParam3, 3, 1);
						func_46(uParam3, 4, 1);
						func_46(uParam3, 6, 1);
						func_46(uParam3, 10, 1);
						func_46(uParam3, 54, 1);
						func_46(uParam3, 55, 1);
						func_46(uParam3, 56, 1);
						func_46(uParam3, 13, 1);
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_46(uParam3, 20, 1);
						func_46(uParam3, 26, 1);
						func_46(uParam3, 27, 1);
						func_46(uParam3, 32, 1);
						func_46(uParam3, 33, 1);
						func_46(uParam3, 37, 1);
						func_46(uParam3, 39, 1);
						func_46(uParam3, 106, 1);
						func_46(uParam3, 114, 1);
						func_46(uParam3, 116, 1);
						func_46(uParam3, 117, 1);
						func_46(uParam3, 118, 1);
						func_46(uParam3, 119, 1);
						func_44(uParam2, 3, 1);
						func_44(uParam2, 4, 1);
						func_44(uParam2, 6, 1);
						func_44(uParam2, 8, 1);
						func_44(uParam2, 9, 1);
						func_44(uParam2, 10, 1);
						func_44(uParam2, 53, 1);
						func_44(uParam2, 56, 1);
						func_44(uParam2, 55, 1);
						func_44(uParam2, 13, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 62, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
						func_44(uParam2, 21, 1);
						func_44(uParam2, 26, 1);
						func_44(uParam2, 27, 1);
						func_44(uParam2, 28, 1);
						func_44(uParam2, 32, 1);
						func_44(uParam2, 36, 1);
						func_44(uParam2, 38, 1);
						func_44(uParam2, 55, 1);
						func_44(uParam2, 14, 1);
						func_44(uParam2, 105, 1);
						func_44(uParam2, 113, 1);
						func_44(uParam2, 114, 1);
						func_44(uParam2, 115, 1);
						func_44(uParam2, 116, 1);
						func_44(uParam2, 117, 1);
					}
					func_48(uParam4, 2, 1);
					func_48(uParam4, 3, 1);
					func_48(uParam4, 4, 1);
					func_48(uParam4, 14, 1);
					func_48(uParam4, 15, 1);
					func_48(uParam4, 16, 1);
					func_48(uParam4, 9, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 12, 1);
					func_48(uParam4, 13, 1);
					func_48(uParam4, 17, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 29, 1);
					func_48(uParam4, 28, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 31, 1);
					func_48(uParam4, 32, 1);
					func_48(uParam4, 33, 1);
					func_48(uParam4, 34, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_48(uParam4, 110, 1);
					func_48(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 62, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
						func_44(uParam2, 19, 1);
					}
					func_48(uParam4, 3, 1);
					func_48(uParam4, 6, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 9, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 13, 1);
					func_48(uParam4, 17, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 29, 1);
					func_48(uParam4, 28, 1);
					func_48(uParam4, 31, 1);
					func_48(uParam4, 32, 1);
					func_48(uParam4, 33, 1);
					func_48(uParam4, 34, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					func_48(uParam4, 110, 1);
					func_48(uParam4, 112, 1);
					func_48(uParam4, 115, 1);
					func_48(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_46(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_48(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_44(uParam2, 16, 1);
						func_44(uParam2, 47, 1);
						func_44(uParam2, 48, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 62, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
					}
					func_48(uParam4, 9, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 29, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_46(uParam3, 3, 1);
						func_46(uParam3, 7, 1);
						func_46(uParam3, 0, 1);
						func_46(uParam3, 12, 1);
						func_46(uParam3, 13, 1);
						func_46(uParam3, 15, 1);
						func_46(uParam3, 16, 1);
						func_46(uParam3, 48, 1);
						func_46(uParam3, 49, 1);
						func_46(uParam3, 17, 1);
						func_46(uParam3, 18, 1);
						func_46(uParam3, 50, 1);
						func_46(uParam3, 51, 1);
						func_46(uParam3, 52, 1);
						func_46(uParam3, 53, 1);
						func_46(uParam3, 38, 1);
						func_46(uParam3, 47, 1);
						func_46(uParam3, 111, 1);
						func_46(uParam3, 62, 1);
						func_46(uParam3, 20, 1);
						func_46(uParam3, 21, 1);
						func_46(uParam3, 25, 1);
						func_46(uParam3, 26, 1);
						func_46(uParam3, 27, 1);
						func_46(uParam3, 30, 1);
						func_46(uParam3, 31, 1);
						func_46(uParam3, 32, 1);
						func_46(uParam3, 33, 1);
						func_46(uParam3, 39, 1);
						func_46(uParam3, 37, 1);
						func_46(uParam3, 55, 1);
						func_44(uParam2, 0, 1);
						func_44(uParam2, 2, 1);
						func_44(uParam2, 3, 1);
						func_44(uParam2, 4, 1);
						func_44(uParam2, 6, 1);
						func_44(uParam2, 7, 1);
						func_44(uParam2, 8, 1);
						func_44(uParam2, 11, 1);
						func_44(uParam2, 13, 1);
						func_44(uParam2, 15, 1);
						func_44(uParam2, 16, 1);
						func_44(uParam2, 47, 1);
						func_44(uParam2, 48, 1);
						func_44(uParam2, 17, 1);
						func_44(uParam2, 18, 1);
						func_44(uParam2, 49, 1);
						func_44(uParam2, 50, 1);
						func_44(uParam2, 51, 1);
						func_44(uParam2, 52, 1);
						func_44(uParam2, 62, 1);
						func_44(uParam2, 37, 1);
						func_44(uParam2, 46, 1);
						func_44(uParam2, 110, 1);
						func_44(uParam2, 19, 1);
						func_44(uParam2, 20, 1);
						func_44(uParam2, 21, 1);
						func_44(uParam2, 22, 1);
						func_44(uParam2, 54, 1);
						func_44(uParam2, 24, 1);
						func_44(uParam2, 26, 1);
						func_44(uParam2, 27, 1);
						func_44(uParam2, 28, 1);
						func_44(uParam2, 30, 1);
						func_44(uParam2, 31, 1);
						func_44(uParam2, 32, 1);
						func_44(uParam2, 38, 1);
						func_44(uParam2, 36, 1);
					}
					func_48(uParam4, 3, 1);
					func_48(uParam4, 3, 1);
					func_48(uParam4, 4, 1);
					func_48(uParam4, 14, 1);
					func_48(uParam4, 15, 1);
					func_48(uParam4, 16, 1);
					func_48(uParam4, 8, 1);
					func_48(uParam4, 9, 1);
					func_48(uParam4, 10, 1);
					func_48(uParam4, 12, 1);
					func_48(uParam4, 13, 1);
					func_48(uParam4, 17, 1);
					func_48(uParam4, 18, 1);
					func_48(uParam4, 19, 1);
					func_48(uParam4, 20, 1);
					func_48(uParam4, 59, 1);
					func_48(uParam4, 60, 1);
					func_48(uParam4, 61, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 62, 1);
					func_48(uParam4, 63, 1);
					func_48(uParam4, 64, 1);
					func_48(uParam4, 65, 1);
					func_48(uParam4, 66, 1);
					func_48(uParam4, 67, 1);
					func_48(uParam4, 68, 1);
					func_48(uParam4, 69, 1);
					func_48(uParam4, 70, 1);
					func_48(uParam4, 71, 1);
					func_48(uParam4, 72, 1);
					func_48(uParam4, 21, 1);
					func_48(uParam4, 22, 1);
					func_48(uParam4, 23, 1);
					func_48(uParam4, 24, 1);
					func_48(uParam4, 25, 1);
					func_48(uParam4, 26, 1);
					func_48(uParam4, 36, 1);
					func_48(uParam4, 46, 1);
					func_48(uParam4, 38, 1);
					func_48(uParam4, 29, 1);
					func_48(uParam4, 28, 1);
					func_48(uParam4, 31, 1);
					func_48(uParam4, 33, 1);
					func_48(uParam4, 34, 1);
					func_48(uParam4, 92, 1);
					func_48(uParam4, 93, 1);
					func_48(uParam4, 94, 1);
					func_48(uParam4, 96, 1);
					func_48(uParam4, 97, 1);
					func_48(uParam4, 98, 1);
					func_48(uParam4, 100, 1);
					func_48(uParam4, 103, 1);
					func_48(uParam4, 104, 1);
					func_48(uParam4, 105, 1);
					func_48(uParam4, 106, 1);
					func_48(uParam4, 107, 1);
					func_48(uParam4, 108, 1);
					break;
			}
			break;
	}
}

void func_48(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0x8744D2E3FC95740E(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_49()
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
				case 30:
				case 34:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
				case 45:
				case 46:
				case 47:
				case 48:
				case 49:
				case 50:
				case 51:
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_51(float fParam0)
{
	func_78(uLocal_92, "SET_DATA_SLOT", fParam0, unk_0xE934399D6F2C3AC5(0, 172, 1), "CELL_BORDER");
}

void func_52(float fParam0)
{
	if (Global_1945396)
	{
		fParam0 = -1f;
	}
	func_78(uLocal_92, "SET_DATA_SLOT", fParam0, unk_0xE934399D6F2C3AC5(0, 173, 1), "CELL_FILTER");
}

void func_53()
{
	if (unk_0xAE231F549813BBDF(2) || func_4())
	{
		func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_78(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xE934399D6F2C3AC5(0, 183, 1), "CELL_GRID");
	func_78(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xF761D79754BC3043(0, 1, 1), "CELL_285");
	func_52(5f);
	func_51(6f);
	func_54(7f);
	func_31(8f);
	if (bLocal_29)
	{
		func_78(uLocal_92, "SET_DATA_SLOT", 9f, unk_0xE934399D6F2C3AC5(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_63(14))
	{
		if ((Global_78558 == 0 && unk_0x486FF5D06E9659F1(joaat("pi_menu")) > 0) && func_62())
		{
			unk_0x88F483FBD433696A(uLocal_91, "SET_FOCUS_LOCK");
			unk_0x557F1E2300EF1A3E(1);
			unk_0x882AEFD55B8D51FB("CELL_ACTTL");
			unk_0x60D332F23943B34F(unk_0xFACCDE46E24AD056(&Global_4543282));
			unk_0xCFAD3D478C87321A();
			unk_0x557F1E2300EF1A3E(0);
			unk_0xE6B753D52F4CA222();
		}
	}
}

void func_54(float fParam0)
{
	func_78(uLocal_92, "SET_DATA_SLOT", fParam0, unk_0xE934399D6F2C3AC5(0, 175, 1), "CELL_ACCYC");
}

void func_55()
{
	func_165(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_165(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_78(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xE934399D6F2C3AC5(0, 39, 1), "CELL_284");
	func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF761D79754BC3043(0, 1, 1), "CELL_285");
	func_78(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xE934399D6F2C3AC5(0, 177, 1), "CELL_281");
	func_78(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xE934399D6F2C3AC5(0, 176, 1), "CELL_280");
	unk_0x88F483FBD433696A(uLocal_92, "SET_MAX_WIDTH");
	unk_0x74BF156C860580D4(fLocal_40);
	unk_0xE6B753D52F4CA222();
	func_165(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_56()
{
	if (iLocal_106 == 1)
	{
		func_57();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_165(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_165(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_78(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xE934399D6F2C3AC5(0, 177, 1), "CELL_281");
		func_78(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xE934399D6F2C3AC5(2, 179, 1), func_67());
		if (iLocal_82)
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) || unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D()) == 2)
				{
					if (unk_0xAE231F549813BBDF(2) || func_4())
					{
						func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_174())
					{
						func_52(3f);
						func_51(4f);
					}
				}
				else if ((Global_78558 == 0 && unk_0x486FF5D06E9659F1(joaat("pi_menu")) > 0) && func_62())
				{
					func_53();
				}
				else
				{
					if (unk_0xAE231F549813BBDF(2) || func_4())
					{
						func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_78(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xE934399D6F2C3AC5(2, 183, 1), "CELL_GRID");
					func_78(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xF761D79754BC3043(0, 1, 1), "CELL_285");
					if (func_174())
					{
						func_52(5f);
						func_51(6f);
						if (func_32(1))
						{
							func_31(7f);
							if (bLocal_29)
							{
								func_78(uLocal_92, "SET_DATA_SLOT", 8f, unk_0xE934399D6F2C3AC5(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_78(uLocal_92, "SET_DATA_SLOT", 7f, unk_0xE934399D6F2C3AC5(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) || unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D()) == 2)
			{
				if (!unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D()) == 2)
				{
					func_78(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xE934399D6F2C3AC5(2, 183, 1), "CELL_GRID");
					func_78(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xF761D79754BC3043(0, 1, 1), "CELL_285");
					func_78(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xE934399D6F2C3AC5(0, 39, 1), "CELL_284");
					if (func_174())
					{
						func_52(6f);
						func_51(7f);
						func_78(uLocal_92, "SET_DATA_SLOT", 8f, unk_0xE934399D6F2C3AC5(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF761D79754BC3043(0, 1, 1), "CELL_285");
					if (func_174())
					{
						func_52(3f);
						func_51(4f);
						func_78(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xE934399D6F2C3AC5(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D()) == 2)
			{
				if (!func_161())
				{
					if (unk_0xAE231F549813BBDF(2) || func_4())
					{
						func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(0, 184, 1), "CELL_SP_1NP_XB");
					}
				}
				func_78(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xE934399D6F2C3AC5(2, 183, 1), "CELL_GRID");
				func_78(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xF761D79754BC3043(0, 1, 1), "CELL_285");
				func_78(uLocal_92, "SET_DATA_SLOT", 6f, unk_0xE934399D6F2C3AC5(0, 39, 1), "CELL_284");
				if (func_174())
				{
					if (!func_161())
					{
						func_52(7f);
						func_51(8f);
						if (bLocal_30)
						{
							func_78(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xE934399D6F2C3AC5(0, 182, 1), "CELL_FOCUS");
						}
						func_78(uLocal_92, "SET_DATA_SLOT", 9f, unk_0xE934399D6F2C3AC5(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					if (!func_161())
					{
						if (unk_0xAE231F549813BBDF(2) || func_4())
						{
							func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(0, 184, 1), "CELL_SP_1NP_XB");
						}
						else
						{
							func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(0, 184, 1), "CELL_SP_1NP_XB");
						}
					}
					func_78(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xF761D79754BC3043(0, 1, 1), "CELL_285");
					if (func_174())
					{
						if (!func_161())
						{
							func_52(4f);
							func_51(5f);
							func_78(uLocal_92, "SET_DATA_SLOT", 6f, unk_0xE934399D6F2C3AC5(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		unk_0x88F483FBD433696A(uLocal_92, "SET_MAX_WIDTH");
		unk_0x74BF156C860580D4(fLocal_40);
		unk_0xE6B753D52F4CA222();
		func_165(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_57()
{
	func_165(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_165(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_78(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xE934399D6F2C3AC5(0, 39, 1), "CELL_284");
	func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF761D79754BC3043(0, 1, 1), "CELL_285");
	func_78(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xE934399D6F2C3AC5(2, 179, 1), func_67());
	func_78(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xE934399D6F2C3AC5(0, 177, 1), "CELL_281");
	unk_0x88F483FBD433696A(uLocal_92, "SET_MAX_WIDTH");
	unk_0x74BF156C860580D4(fLocal_40);
	unk_0xE6B753D52F4CA222();
	func_165(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_58()
{
	if (iLocal_82)
	{
		unk_0xD815D4BD1AE9E85A(fLocal_36, 1065353216);
		unk_0x64BB72494B9DF6DC(fLocal_37);
	}
}

void func_59(int iParam0)
{
	if (iLocal_106 == 1)
	{
		return;
	}
	if (Global_4718592.f_160553 == 1)
	{
	}
	else if (Global_4718592.f_160554 == 1)
	{
	}
	else
	{
		unk_0x9764C9C63439A2D9(iParam0);
	}
}

void func_60()
{
	if (iLocal_28 == 1)
	{
		if (unk_0x1B79E937E91F40C3(sLocal_19[Global_4541021], "phone_cam12DUMMY"))
		{
			unk_0x20B0BCFBA94C4732(0);
			unk_0x453DA8CFCDA69D26(0);
		}
		else
		{
			unk_0x20B0BCFBA94C4732(1);
			unk_0x453DA8CFCDA69D26(1);
		}
	}
}

void func_61()
{
	func_165(uLocal_91, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_174())
	{
		if (!Global_1945396)
		{
			unk_0x5C483F4653DC993C("phone_cam");
		}
	}
}

int func_62()
{
	if (func_63(14))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if ((unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113648.f_28052[0 /*29*/] || unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113648.f_28052[1 /*29*/]) || unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113648.f_28052[2 /*29*/])
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
	return 1;
}

bool func_63(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_64(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_65()
{
	if (unk_0xAE231F549813BBDF(2) || func_4())
	{
		func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (unk_0xAE231F549813BBDF(2))
	{
		func_78(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xE934399D6F2C3AC5(0, 30, 1), "CELL_RT_RSTICK");
		func_78(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xF761D79754BC3043(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_78(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xE934399D6F2C3AC5(0, 1, 1), "CELL_RT_RSTICK");
		func_78(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xF761D79754BC3043(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_66()
{
	if (unk_0xAE231F549813BBDF(2) || func_4())
	{
		func_78(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xE934399D6F2C3AC5(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_78(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xE934399D6F2C3AC5(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_78(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xF761D79754BC3043(0, 1, 1), "CELL_LT_RSTICK");
	if (func_63(14))
	{
		func_78(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xE934399D6F2C3AC5(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_78(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xE934399D6F2C3AC5(0, 39, 1), "CELL_LT_LSTICKZ");
		func_78(uLocal_92, "SET_DATA_SLOT", 6f, unk_0xE934399D6F2C3AC5(2, 30, 1), "CELL_LT_LSTICK");
	}
}

char* func_67()
{
	if (!unk_0xD6F9DEE4765092A9(&Global_1969246))
	{
		return func_77(&Global_1969246);
	}
	if (func_76())
	{
		return "FHHUD_SENDLES";
	}
	if (func_74())
	{
		return "CSH_PHONEC";
	}
	if (func_73(unk_0x259BE71D8A81D4FA(), 275) && Global_1969239)
	{
		return "RE_SS_SNDOMG";
	}
	switch (func_72(unk_0x259BE71D8A81D4FA()))
	{
		case 14:
		case 3:
		case 7:
		case 8:
		case 12:
		case 2:
		case 15:
			return "TR_SESS_PHTO";
		
		default:
	}
	switch (func_68(unk_0x259BE71D8A81D4FA()))
	{
		case 3:
			return "FXR_FRAN_PHTO";
		
		case 2:
			return "FXR_IMAN_PHTO";
		
		default:
	}
	return "CELL_287";
}

int func_68(int iParam0)
{
	if (func_71(iParam0) == 264)
	{
		return func_69(iParam0);
	}
	return -1;
}

int func_69(int iParam0)
{
	if (func_70(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_182;
	}
	return -1;
}

int func_70(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0)
{
	if (func_70(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

int func_72(int iParam0)
{
	if (func_71(iParam0) == 271)
	{
		return func_69(iParam0);
	}
	return -1;
}

int func_73(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < Global_1890386)
	{
		if (Global_1890386[iVar1] == iParam1)
		{
			if (Global_1890444[iVar0 /*129*/].f_77.f_1[iVar1 /*3*/] == 2)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_74()
{
	switch (func_75(unk_0x259BE71D8A81D4FA()))
	{
		case 16:
			return 1;
		
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_75(int iParam0)
{
	if (func_71(iParam0) == 256)
	{
		return func_69(iParam0);
	}
	return -1;
}

int func_76()
{
	switch (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_33)
	{
		case 233:
			switch (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_182)
			{
				case 9:
					return 1;
				
				default:
			}
			break;
		
		case 158:
			switch (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_182)
			{
				case 3:
				case 1:
				case 41:
					return 1;
				
				default:
			}
			break;
	}
	if (Global_1977436)
	{
		return 1;
	}
	return 0;
}

var func_77(var uParam0)
{
	return uParam0;
}

void func_78(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(round(fParam2));
	if (!unk_0xD6F9DEE4765092A9(uParam3))
	{
		func_79(uParam3);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam4))
	{
		func_64(sParam4);
	}
	unk_0xE6B753D52F4CA222();
}

void func_79(var uParam0)
{
	unk_0xCE3E870AC37B4253(uParam0);
}

void func_80()
{
	if (Global_78558)
	{
		switch (Global_22842)
		{
			case 0:
				if (unk_0xAE231F549813BBDF(2))
				{
					func_160("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_160("CELL_CAM_SELFIE_0", -1);
				}
				Global_22842++;
				break;
			
			case 1:
				if (!unk_0x4C705AAF75363287())
				{
					if (unk_0xAE231F549813BBDF(2))
					{
						func_160("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_160("CELL_CAM_SELFIE_1", -1);
					}
					Global_22842++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_22841)
		{
			case 0:
				if (unk_0xAE231F549813BBDF(2))
				{
					func_160("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_160("CELL_CAM_SELFIE_0", -1);
				}
				Global_22841++;
				break;
			
			case 1:
				if (!unk_0x4C705AAF75363287())
				{
					if (unk_0xAE231F549813BBDF(2))
					{
						func_160("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_160("CELL_CAM_SELFIE_1", -1);
					}
					Global_22841++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_81()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (unk_0xAE231F549813BBDF(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0x6D05C5731A838CB3(2, iVar10) && !unk_0x6D05C5731A838CB3(2, iVar9))
	{
		unk_0x66EFB3D6110055C4(0, 2, 1);
		unk_0x66EFB3D6110055C4(0, 1, 1);
		iVar0 = floor(unk_0xC3B77DE416935168(0, 30)) * 127;
		iVar1 = floor(unk_0xC3B77DE416935168(0, 31)) * 127;
		iVar2 = floor(unk_0xC3B77DE416935168(0, 1)) * 127;
		iVar3 = floor(unk_0xC3B77DE416935168(0, 2)) * 127;
		if (unk_0xAE231F549813BBDF(2))
		{
			if (unk_0x510D0699BE9C6D06(iVar0) > 28 || unk_0x510D0699BE9C6D06(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			}
		}
		else if (unk_0x510D0699BE9C6D06(iVar2) > 28 || unk_0x510D0699BE9C6D06(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
		}
		if (unk_0xAE231F549813BBDF(2))
		{
			fVar7 = unk_0xC3B77DE416935168(0, 290);
			fVar8 = unk_0xC3B77DE416935168(0, 291);
			if (unk_0xDD087A873D2E08F0())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0x510D0699BE9C6D06(iVar0) > 28 || unk_0x510D0699BE9C6D06(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_114);
		}
		func_84(fVar5);
		func_83(fVar6);
		func_82(fVar4);
	}
	else if (!unk_0x6D05C5731A838CB3(2, iVar9))
	{
		unk_0xB211E45F1FE1ED2D(0, 2, 1);
		unk_0xB211E45F1FE1ED2D(0, 1, 1);
	}
}

void func_82(float fParam0)
{
	fLocal_111 = (fLocal_111 + fParam0);
	if (fLocal_111 > 1f)
	{
		fLocal_111 = 1f;
	}
	else if (fLocal_111 < -1f)
	{
		fLocal_111 = -1f;
	}
	unk_0x48BDE4C1BEB65AD4(fLocal_111);
}

void func_83(float fParam0)
{
	fLocal_112 = (fLocal_112 + fParam0);
	if (fLocal_112 > 1f)
	{
		fLocal_112 = 1f;
	}
	else if (fLocal_112 < -1f)
	{
		fLocal_112 = -1f;
	}
	unk_0xDEC275C3811D6AD8(fLocal_112);
}

void func_84(float fParam0)
{
	fLocal_113 = (fLocal_113 + fParam0);
	if (fLocal_113 > 1f)
	{
		fLocal_113 = 1f;
	}
	else if (fLocal_113 < -1f)
	{
		fLocal_113 = -1f;
	}
	unk_0xFA6A3ED1D3AA4BD4(fLocal_113);
}

void func_85()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (unk_0xAE231F549813BBDF(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0x6D05C5731A838CB3(2, iVar10))
		{
			if (unk_0x875A214D5EBCA509(2, 178) && !func_161())
			{
				unk_0xCF33DB366A4071FB(0.5f);
				unk_0x289AEE012C9C5F5D(0.85f);
				unk_0x6DE386DA26D363D5(0.5f);
				unk_0x263FA094C828FD3E(-0.25f);
				fLocal_107 = 0.5f;
				fLocal_108 = 0.85f;
				fLocal_109 = 0.5f;
				fLocal_110 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (unk_0x6D05C5731A838CB3(2, iVar10) && !unk_0x6D05C5731A838CB3(2, iVar11))
	{
		if (unk_0x875A214D5EBCA509(2, 178) && !func_161())
		{
			unk_0xCF33DB366A4071FB(0.5f);
			unk_0x289AEE012C9C5F5D(0.85f);
			unk_0x6DE386DA26D363D5(0.5f);
			unk_0x263FA094C828FD3E(-0.25f);
			fLocal_107 = 0.5f;
			fLocal_108 = 0.85f;
			fLocal_109 = 0.5f;
			fLocal_110 = -0.25f;
		}
		unk_0x66EFB3D6110055C4(0, 2, 1);
		unk_0x66EFB3D6110055C4(0, 1, 1);
		iVar0 = floor(unk_0xC3B77DE416935168(0, 30)) * 127;
		iVar1 = floor(unk_0xC3B77DE416935168(0, 31)) * 127;
		iVar2 = floor(unk_0xC3B77DE416935168(0, 1)) * 127;
		iVar3 = floor(unk_0xC3B77DE416935168(0, 2)) * 127;
		if (unk_0xAE231F549813BBDF(2))
		{
			iVar1 = floor(unk_0xC3B77DE416935168(0, 39)) * 127;
			fVar8 = unk_0xC3B77DE416935168(0, 290);
			fVar9 = unk_0xC3B77DE416935168(0, 291);
			if (unk_0xDD087A873D2E08F0())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0x510D0699BE9C6D06(iVar2) > 15 || unk_0x510D0699BE9C6D06(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (unk_0x510D0699BE9C6D06(iVar0) > 28 || unk_0x510D0699BE9C6D06(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		func_89(fVar6);
		func_88(fVar7);
		func_87(fVar4);
		if (!func_63(14))
		{
			func_86(fVar5);
		}
	}
	else if (!unk_0x4465D55576678706(2, iVar11))
	{
		unk_0xB211E45F1FE1ED2D(0, 2, 1);
		unk_0xB211E45F1FE1ED2D(0, 1, 1);
	}
	if (!unk_0x4465D55576678706(2, iVar10) && !unk_0x4465D55576678706(2, iVar11))
	{
		iVar0 = floor(unk_0xC3B77DE416935168(0, 30)) * 127;
		iVar1 = floor(unk_0xC3B77DE416935168(0, 31)) * 127;
		iVar2 = floor(unk_0xC3B77DE416935168(0, 290)) * 127;
		iVar3 = floor(unk_0xC3B77DE416935168(0, 291)) * 127;
		iVar2 = floor(unk_0xC3B77DE416935168(0, 294)) * 127;
		iVar2 = floor(unk_0xC3B77DE416935168(0, 295)) * 127;
		iVar3 = floor(unk_0xC3B77DE416935168(0, 292)) * 127;
		iVar3 = floor(unk_0xC3B77DE416935168(0, 293)) * 127;
		if (unk_0x510D0699BE9C6D06(iVar2) > 28 || unk_0x510D0699BE9C6D06(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (unk_0x510D0699BE9C6D06(iVar0) > 28 || unk_0x510D0699BE9C6D06(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		if (!func_63(14))
		{
			func_86(fVar5);
		}
	}
}

void func_86(float fParam0)
{
	fLocal_109 = (fLocal_109 + fParam0);
	if (fLocal_109 > 1f)
	{
		fLocal_109 = 1f;
	}
	else if (fLocal_109 < 0f)
	{
		fLocal_109 = 0f;
	}
	unk_0x6DE386DA26D363D5(fLocal_109);
}

void func_87(float fParam0)
{
	fLocal_110 = (fLocal_110 + fParam0);
	if (fLocal_110 > 1f)
	{
		fLocal_110 = 1f;
	}
	else if (fLocal_110 < -1f)
	{
		fLocal_110 = -1f;
	}
	unk_0x263FA094C828FD3E(fLocal_110);
}

void func_88(float fParam0)
{
	fLocal_108 = (fLocal_108 + fParam0);
	if (fLocal_108 > 1.5f)
	{
		fLocal_108 = 1.5f;
	}
	else if (fLocal_108 < 0.5f)
	{
		fLocal_108 = 0.5f;
	}
	unk_0x289AEE012C9C5F5D(fLocal_108);
}

void func_89(float fParam0)
{
	fLocal_107 = (fLocal_107 + fParam0);
	if (fLocal_107 > 2f)
	{
		fLocal_107 = 2f;
	}
	else if (fLocal_107 < -1.7f)
	{
		fLocal_107 = -1.7f;
	}
	unk_0xCF33DB366A4071FB(fLocal_107);
}

void func_90()
{
	if (Global_78819 || Global_78820)
	{
		return;
	}
	if (iLocal_75 == 0)
	{
		if (!iLocal_100)
		{
			if (Global_4718592.f_160553 == 0 && Global_4718592.f_160554 == 0)
			{
				unk_0xA91A4C18A2DB01BD(uLocal_92, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_78 == 0)
	{
		if (Global_20325)
		{
			if (Global_20584)
			{
				if (iLocal_100 == 0)
				{
					if (Global_20383.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_92(255, 255, 255, 255);
			func_91(0.059f, 0.644f, "CELL_284", 0);
			func_92(255, 255, 255, 255);
			func_91(0.165f, 0.644f, "CELL_285", 0);
			func_92(255, 255, 255, 255);
			func_91(0.275f, 0.75f, "CELL_280", 0);
			func_92(255, 255, 255, 255);
			func_91(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_20325)
	{
	}
	else
	{
		func_92(255, 255, 255, 255);
		func_91(0.275f, 0.75f, func_67(), 0);
		func_92(255, 255, 255, 255);
		func_91(0.275f, 0.79f, "CELL_286", 0);
		func_92(255, 255, 255, 255);
		func_91(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_91(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, iParam3);
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xBFE94E91C83D8794(0.4f, 0.4f);
	unk_0xB91BC43E3A58E2C8(0, 0, 0, 0, 0);
	unk_0xBE923A0FDD781C93(1, 0, 0, 0, 205);
	unk_0xEA62FB8CA7210CF3(1);
	unk_0x8413CD3BCEEAD8DC(0);
	unk_0x5A18938160AE52D0(iParam0, iParam1, iParam2, iParam3);
}

void func_93()
{
	unk_0xD815D4BD1AE9E85A(fLocal_38, 1065353216);
	unk_0x64BB72494B9DF6DC(fLocal_39);
}

void func_94()
{
	unk_0x66EFB3D6110055C4(0, 25, 1);
	unk_0x66EFB3D6110055C4(0, 44, 1);
	unk_0x66EFB3D6110055C4(0, 3, 1);
	unk_0x66EFB3D6110055C4(0, 4, 1);
	unk_0x66EFB3D6110055C4(0, 5, 1);
	unk_0x66EFB3D6110055C4(0, 6, 1);
	unk_0x66EFB3D6110055C4(0, 1, 1);
	unk_0x66EFB3D6110055C4(0, 2, 1);
	unk_0x66EFB3D6110055C4(0, 39, 1);
	unk_0x66EFB3D6110055C4(0, 47, 1);
	unk_0x66EFB3D6110055C4(0, 56, 1);
}

void func_95()
{
	Local_44 = { Global_20336[Global_20328 /*3*/] };
	if (Global_20325)
	{
		if (func_98())
		{
			unk_0x78C4EBB0251847E2(&Local_46);
			Local_44 = { Local_46 };
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		func_1(1);
		if (iLocal_72)
		{
			Local_42.f_0 = (Local_42.f_0 + 12f);
		}
		if (Local_42.f_0 > Local_44.f_0 || Local_42.f_0 == Local_44.f_0)
		{
			Local_42.f_0 = Local_44.f_0;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			Local_42.f_1 = (Local_42.f_1 - 6f);
		}
		if (BitTest(Global_8255, 4))
		{
			if (Local_42.f_1 < (Local_44.f_1 + 15f) || Local_42.f_1 == (Local_44.f_1 + 15f))
			{
				Local_42.f_1 = (Local_44.f_1 + 15f);
				iLocal_73 = 0;
			}
		}
		else if (Local_42.f_1 < (Local_44.f_1 + 10f) || Local_42.f_1 == (Local_44.f_1 + 10f))
		{
			Local_42.f_1 = (Local_44.f_1 + 10f);
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			Local_42.f_2 = (Local_42.f_2 - 10f);
		}
		if (Local_42.f_2 < Local_44.f_2 || Local_42.f_2 == Local_44.f_2)
		{
			Local_42.f_2 = Local_44.f_2;
			iLocal_74 = 0;
		}
		if (func_98() == 0)
		{
			if (BitTest(Global_8255, 4))
			{
				Local_44.f_1 = (Local_44.f_1 + 15f);
			}
			else
			{
				Local_44.f_1 = (Local_44.f_1 + 10f);
			}
			Local_44.f_0 = (Local_44.f_0 - 14f);
		}
		else
		{
			Local_44 = { Global_20329[Global_20328 /*3*/] };
		}
		Local_42 = { Local_44 };
		iLocal_74 = 0;
		iLocal_73 = 0;
		iLocal_72 = 0;
		unk_0x6B7EA0158D00C600(Local_42);
		if ((iLocal_72 == 0 && iLocal_73 == 0) && iLocal_74 == 0)
		{
			iLocal_75 = 0;
			Local_43 = { -90.3f, 0f, 90f };
			unk_0xA0382000AA987093(Local_43, 0);
			if (!BitTest(Global_8253, 22))
			{
				if (BitTest(Global_8253, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_97();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_96();
				}
				iLocal_51 = 2;
			}
		}
	}
}

void func_96()
{
	func_165(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_165(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (BitTest(Global_8254, 28))
	{
		func_78(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xE934399D6F2C3AC5(0, 176, 1), "CELL_286");
	}
	else
	{
		func_78(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xE934399D6F2C3AC5(2, 178, 1), "CELL_277");
		func_78(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xE934399D6F2C3AC5(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0x88F483FBD433696A(uLocal_92, "SET_MAX_WIDTH");
	unk_0x74BF156C860580D4(fLocal_40);
	unk_0xE6B753D52F4CA222();
	func_165(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_97()
{
	func_165(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_165(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (BitTest(Global_8254, 28))
	{
		func_78(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xE934399D6F2C3AC5(2, 179, 1), func_67());
		func_78(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xE934399D6F2C3AC5(0, 176, 1), "CELL_286");
	}
	else
	{
		func_78(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE934399D6F2C3AC5(2, 179, 1), func_67());
		func_78(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xE934399D6F2C3AC5(2, 178, 1), "CELL_277");
		func_78(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xE934399D6F2C3AC5(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0x88F483FBD433696A(uLocal_92, "SET_MAX_WIDTH");
	unk_0x74BF156C860580D4(fLocal_40);
	unk_0xE6B753D52F4CA222();
	func_165(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_98()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		{
			if (Global_20326 == 0)
			{
				if (Global_7568 != 128)
				{
					if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if (Global_21725 != 2)
						{
						}
					}
				}
			}
		}
		if (func_63(14))
		{
			return 0;
		}
		if (unk_0xD6179D448A06A77F(unk_0x4A8C381C258A124D(), 0))
		{
			return 0;
		}
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (!unk_0x9CA0AFAD60564183())
			{
				if (unk_0x69799E0840A34AFB(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D()) || unk_0x9AC89B274C35B3FC(unk_0x4A8C381C258A124D())) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || (unk_0xC3174723CF144560(unk_0x4A8C381C258A124D()) && !(BitTest(Global_4718592.f_37, 17) && (unk_0x834C960822A4683F() || Global_1926632))))
		{
			return 0;
		}
		if (Global_112696)
		{
			return 0;
		}
	}
	if (Global_78558)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xBF03D0685ADC793B();
	iVar1 = unk_0xBCF87EE3DC296C2A(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x9CA0AFAD60564183()))
	{
		iVar2 = 1;
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				iVar3 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				if ((((((((unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(iVar3)) || unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(iVar3))) || unk_0x9910CD0D8626AA28(unk_0x4B423FAA24E8ABF0(iVar3))) || unk_0x4B423FAA24E8ABF0(iVar3) == joaat("seashark")) || unk_0x4B423FAA24E8ABF0(iVar3) == joaat("seashark2")) || unk_0x4B423FAA24E8ABF0(iVar3) == joaat("rhino")) || unk_0x4B423FAA24E8ABF0(iVar3) == joaat("submersible")) || unk_0x4B423FAA24E8ABF0(iVar3) == joaat("submersible2")) || unk_0x4B423FAA24E8ABF0(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4542575 || iVar2 == 1)
	{
		if (unk_0x486FF5D06E9659F1(joaat("apptrackify")) > 0 || Global_113648.f_14053.f_89)
		{
			if (unk_0x486FF5D06E9659F1(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_99()
{
	unk_0x66EFB3D6110055C4(0, 47, 1);
	unk_0x4CC1CF98851922CE(0, Global_20353);
	Local_43 = { Global_20343 };
	Local_44 = { Global_20336[Global_20328 /*3*/] };
	if (func_98())
	{
		unk_0x3CA646A848A5F334(&Local_45, 0);
		Local_43 = { Local_45 };
		unk_0x78C4EBB0251847E2(&Local_46);
		Local_44 = { Local_46 };
		iLocal_69 = 0;
		iLocal_70 = 0;
		iLocal_71 = 0;
		iLocal_72 = 0;
		iLocal_73 = 0;
		iLocal_74 = 0;
	}
	if (Global_20325)
	{
		func_165(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_59(0);
		iLocal_82 = 0;
		if (BitTest(Global_8253, 30))
		{
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			func_100();
		}
		if (iLocal_72)
		{
			if (BitTest(Global_8253, 9))
			{
				Local_42.f_0 = (Local_42.f_0 + 2f);
			}
			else
			{
				Local_42.f_0 = (Local_42.f_0 + 12f);
			}
		}
		if (Local_42.f_0 > Local_44.f_0 || Local_42.f_0 == Local_44.f_0)
		{
			Local_42.f_0 = Local_44.f_0;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			Local_42.f_1 = (Local_42.f_1 - 6f);
		}
		if (Local_42.f_1 < Local_44.f_1 || Local_42.f_1 == Local_44.f_1)
		{
			Local_42.f_1 = Local_44.f_1;
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			Local_42.f_2 = (Local_42.f_2 - 10f);
		}
		if (Local_42.f_2 < Local_44.f_2 || Local_42.f_2 == Local_44.f_2)
		{
			Local_42.f_2 = Local_44.f_2;
			iLocal_74 = 0;
		}
		if (iLocal_74 == 0)
		{
			if (iLocal_69)
			{
				Local_41.f_0 = (Local_41.f_0 + 1f);
			}
			if (Local_41.f_0 > Local_43.f_0 || Local_41.f_0 == Local_43.f_0)
			{
				Local_41.f_0 = Local_43.f_0;
				iLocal_69 = 0;
			}
			if (iLocal_70)
			{
				Local_41.f_1 = (Local_41.f_1 - 2f);
			}
			if (Local_41.f_1 < Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
			{
				Local_41.f_1 = Local_43.f_1;
				iLocal_70 = 0;
			}
			if (iLocal_71)
			{
				Local_41.f_2 = (Local_41.f_2 - 14f);
			}
			if (Local_41.f_2 < Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
			{
				Local_41.f_2 = Local_43.f_2;
				iLocal_71 = 0;
			}
		}
		if (iLocal_77)
		{
			Local_41 = { Local_43 };
			Local_42 = { Local_44 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			if (func_98() == 0)
			{
				unk_0xA0382000AA987093(Local_41, 0);
				unk_0x6B7EA0158D00C600(Local_42);
			}
			func_115(0, 1);
		}
		else if (func_98() == 0)
		{
			unk_0xA0382000AA987093(Local_41, 0);
			unk_0x6B7EA0158D00C600(Local_42);
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_100();
		}
	}
	else
	{
		if (iLocal_69)
		{
			Local_41.f_0 = (Local_41.f_0 + 1f);
		}
		if (Local_41.f_0 > Local_43.f_0 || Local_41.f_0 == Local_43.f_0)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			Local_41.f_1 = (Local_41.f_1 - 2f);
		}
		if (Local_41.f_1 < Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			Local_41.f_2 = (Local_41.f_2 - 7f);
		}
		if (Local_41.f_2 < Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
		{
			iLocal_71 = 0;
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_100();
		}
	}
	unk_0xA0382000AA987093(Local_41, 0);
}

void func_100()
{
	func_1(0);
	if (func_98() == 0)
	{
		if (BitTest(Global_8253, 30))
		{
			unk_0x6B7EA0158D00C600(Global_20329[Global_20328 /*3*/]);
		}
		else
		{
			unk_0x6B7EA0158D00C600(Global_20336[Global_20328 /*3*/]);
		}
		Local_41 = { Local_43 };
		unk_0xA0382000AA987093(Local_41, 0);
	}
	Global_22758 = 0;
	func_122(0, 0);
	func_126(0);
	iLocal_66 = 0;
	func_117(1);
	Global_20370 = 1;
	Global_22761 = 0;
	if (Global_20383.f_1 > 4)
	{
		Global_20383.f_1 = 6;
		Global_20361 = 1;
		func_101();
	}
	if (unk_0xA0C7B98BCF1EEF9E(uLocal_91))
	{
		func_164(uLocal_91, "SHUTDOWN_MOVIE");
	}
	wait(0);
	unk_0xC0964AABD3C0CC7E();
	unk_0xD314260005F064BF(&uLocal_92);
	unk_0xD314260005F064BF(&uLocal_91);
	if (Global_20586 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 17);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8253, 17);
	}
	unk_0x8744D2E3FC95740E(&Global_8253, 18);
	unk_0x8744D2E3FC95740E(&Global_8253, 21);
	unk_0x665A7E873A6664BC(0, 1);
	unk_0x8744D2E3FC95740E(&Global_8255, 3);
	unk_0x8744D2E3FC95740E(&Global_4542297, 3);
	unk_0x98E393364463951A(0);
	unk_0x19AD76EC04A73800(unk_0x259BE71D8A81D4FA(), 1);
	unk_0xDCFF86AAD108A201(15);
	Global_22762 = 1;
	unk_0x8E4825CCACA34B58(iLocal_63);
	unk_0x394AFAC073E1F277(iLocal_63);
	unk_0x65662724C6BC4810();
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x2C09C6B54CFCFAF1(unk_0x4A8C381C258A124D(), "Mood_Normal_1", 0);
		unk_0x490EA3A0CF334F58(unk_0x4A8C381C258A124D());
	}
	func_117(1);
	unk_0x20B0BCFBA94C4732(0);
	unk_0x453DA8CFCDA69D26(0);
	unk_0xD974CD3A050559FE(1f);
	if (Global_4541022 > 0 && Global_4541022 < 13)
	{
		unk_0x633E3833FB96BCCB(sLocal_20[Global_4541022]);
	}
	func_115(0, 1);
	if (func_172(0, 1, iLocal_31, 1))
	{
		iLocal_31 = 0;
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_101()
{
	struct<3> Var0;
	
	if (Global_20366 == 1)
	{
		return;
	}
	if (Global_20383.f_1 < 4)
	{
		return;
	}
	while (!unk_0xA0C7B98BCF1EEF9E(Global_20364))
	{
		if (Global_78558)
		{
			return;
		}
		wait(0);
	}
	switch (Global_20383.f_1)
	{
		case 6:
			func_165(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_109(Global_8858);
			if (Global_8858 == 1)
			{
				func_165(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20387), -1082130432, -1082130432, -1082130432);
				Global_20363 = Global_20387;
			}
			else
			{
				func_165(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20388), -1082130432, -1082130432, -1082130432);
				Global_20363 = Global_20388;
			}
			if (Global_20371)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20586 == 0)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8253, 17);
			}
			else if (Global_78558)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8253, 17);
			}
			else
			{
				if (Global_20585 == 1)
				{
					if (Global_20371)
					{
						func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20371)
				{
					func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 17);
			}
			if (Global_78558)
			{
				func_106();
				unk_0x8744D2E3FC95740E(&Global_8255, 9);
				func_165(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20387), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_165(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_108(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8253, 17);
			if (BitTest(Global_8253, 20))
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20326)
				{
					func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20382 == 1)
			{
				func_105();
				func_165(Global_20364, "SET_THEME", to_float(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21738)
				{
					unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(4);
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(2);
					unk_0x882AEFD55B8D51FB("CELL_CONDFON");
					unk_0x60D332F23943B34F(&Global_21740);
					unk_0xCFAD3D478C87321A();
					func_64("CELL_300");
					func_64("CELL_217");
					func_64("CELL_217");
					unk_0xE6B753D52F4CA222();
				}
				else if (func_104(Global_7568, Global_20383) == 0)
				{
					func_108(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_108(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), "CELL_217", &(Global_2028[Global_7568 /*29*/].f_3), 0);
				}
				func_165(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21725 == 4 || Global_21725 == 3)
			{
				func_165(Global_20364, "SET_THEME", to_float(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_105();
				if (Global_21738)
				{
					unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(4);
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(2);
					unk_0x882AEFD55B8D51FB("CELL_CONDFON");
					unk_0x60D332F23943B34F(&Global_21740);
					unk_0xCFAD3D478C87321A();
					func_64("CELL_300");
					func_64("CELL_219");
					func_64("CELL_219");
					unk_0xE6B753D52F4CA222();
				}
				else
				{
					if (Global_21983)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (func_104(Global_7568, Global_20383) == 0)
					{
						func_165(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_108(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_165(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_108(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), &Var0, &(Global_2028[Global_7568 /*29*/].f_3), 0);
					}
				}
				func_165(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_102();
			break;
		
		default:
			break;
	}
}

void func_102()
{
	if (unk_0xA0C7B98BCF1EEF9E(Global_20364))
	{
		func_103();
		if (Global_20382 == 1)
		{
			if (Global_20371)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21772)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8253, 20))
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8253, 17);
		}
		else
		{
			func_108(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8253, 17);
			if (BitTest(Global_8253, 20))
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20326)
				{
					func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_108(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_103()
{
	if (Global_78558)
	{
		func_108(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x8744D2E3FC95740E(&Global_8253, 17);
	}
}

int func_104(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

void func_105()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (Global_20383 == 0)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
			{
				case 1:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 0);
					break;
				
				case 2:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 1);
					break;
				
				case 3:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 2);
					break;
				
				case 4:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 3);
					break;
				
				case 5:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 4);
					break;
				
				case 6:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 5);
					break;
				
				case 7:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_20383 == 1)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
			{
				case 1:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 6);
					break;
				
				case 2:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 0);
					break;
				
				case 3:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 1);
					break;
				
				case 4:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 2);
					break;
				
				case 5:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 3);
					break;
				
				case 6:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 4);
					break;
				
				case 7:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_20383 == 2)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
			{
				case 1:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 5);
					break;
				
				case 2:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 6);
					break;
				
				case 3:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 1);
					break;
				
				case 4:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 0);
					break;
				
				case 5:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 2);
					break;
				
				case 6:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 3);
					break;
				
				case 7:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_20383 == 3)
		{
			switch (Global_4542573)
			{
				case 1:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 0);
					break;
				
				case 2:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 1);
					break;
				
				case 3:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 2);
					break;
				
				case 4:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 3);
					break;
				
				case 5:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 4);
					break;
				
				case 6:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 5);
					break;
				
				case 7:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_106()
{
	if (Global_78558)
	{
		if (func_107() == 0)
		{
			return;
		}
		func_108(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 17);
	}
}

int func_107()
{
	return 0;
}

void func_108(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x330108B080A2132F(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x330108B080A2132F(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x330108B080A2132F(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x330108B080A2132F(round(fParam6));
	}
	if (!unk_0xD6F9DEE4765092A9(sParam7))
	{
		func_64(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam8))
	{
		func_64(iParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam9))
	{
		func_64(iParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam10))
	{
		func_64(iParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam11))
	{
		func_64(iParam11);
	}
	unk_0xE6B753D52F4CA222();
}

void func_109(int iParam0)
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
	
	Global_22793 = 0;
	Global_8858 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8822[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_63(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8260[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8260[iVar1 /*15*/].f_4)
					{
						if (Global_8822[iVar0] == 0)
						{
							Global_8786[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8254, 3))
								{
									iVar2 = 42;
									Global_20588 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20588 = 0;
								}
								unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8260[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_64(&(Global_8260[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar2);
								unk_0xE6B753D52F4CA222();
							}
							if (Global_2694521)
							{
								if (iVar1 == 14)
								{
									func_108(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8822[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8260[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8260[iVar1 /*15*/].f_4)
					{
						if (Global_8822[iVar0] == 0)
						{
							Global_8786[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113648.f_14143[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113648.f_14143[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113648.f_14143[iVar3 /*104*/].f_99[Global_20383] == 1)
											{
												Global_22793++;
											}
										}
									}
									iVar3++;
								}
								func_108(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22793), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78558)
								{
									iVar4 = 0;
									iVar4 = Global_4541031;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541032[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541032[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541032[iVar5 /*104*/].f_99[Global_20383] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_108(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20383)
									{
										case 0:
											iVar6 = Global_44457;
											break;
										
										case 1:
											iVar6 = Global_44458;
											break;
										
										case 2:
											iVar6 = Global_44459;
											break;
										
										default:
											break;
									}
									func_108(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_108(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8260[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_64(&(Global_8260[iVar1 /*15*/]));
								unk_0x330108B080A2132F(Global_8259);
								unk_0xE6B753D52F4CA222();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8254, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8260[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_64(&(Global_8260[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar7);
								unk_0xE6B753D52F4CA222();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8254, 3))
								{
									iVar8 = 42;
									Global_20588 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20588 = 0;
								}
								unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8260[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_64(&(Global_8260[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar8);
								unk_0xE6B753D52F4CA222();
							}
							else if (iVar1 == 8)
							{
								unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8260[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_64(&(Global_8260[iVar1 /*15*/]));
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if ((iVar1 == 23 && unk_0x1B79E937E91F40C3(&(Global_8260[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8254, 6))
							{
								unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8260[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_64(&(Global_8260[iVar1 /*15*/]));
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if (Global_8260[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1890001.f_1;
								func_108(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_108(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8822[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_110()
{
	switch (iLocal_51)
	{
		case 1:
			unk_0x665A7E873A6664BC(0, 1);
			if (BitTest(Global_8253, 28))
			{
				StringCopy(&cLocal_96, "CELL_296", 16);
				func_56();
			}
			else
			{
				StringCopy(&cLocal_96, "CELL_295", 16);
				func_30();
			}
			break;
		
		case 2:
			if (!BitTest(Global_8253, 22))
			{
				unk_0x665A7E873A6664BC(0, 1);
				if (BitTest(Global_8253, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_97();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_96();
				}
				iLocal_51 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_111(bool bParam0)
{
	if (bParam0)
	{
		if (!func_124())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1962996, 17);
		}
	}
	else if (func_124())
	{
		unk_0x8744D2E3FC95740E(&Global_1962996, 17);
	}
}

int func_112(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x875A214D5EBCA509(iParam0, uParam1) || (iParam2 == 1 && unk_0xDEE3EFEA31A1F555(iParam0, iParam1)))
	{
		if (unk_0x761778199FE1211C())
		{
			if (unk_0x66DA7155B68E7638() == 0 || (unk_0xA43CD45F18522E3F() && unk_0xAE231F549813BBDF(2)))
			{
				return 0;
			}
		}
		if (unk_0x4D9174D8796EA622() || unk_0xB11671B812399BA2())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_113(bool bParam0)
{
	if (bParam0)
	{
		if (!func_114())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1962996, 18);
		}
	}
	else if (func_114())
	{
		unk_0x8744D2E3FC95740E(&Global_1962996, 18);
	}
}

bool func_114()
{
	return BitTest(Global_1962996, 18);
}

void func_115(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_116(0))
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

int func_116(int iParam0)
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

void func_117(int iParam0)
{
	if ((Global_4718592.f_160553 == 0 && Global_4718592.f_160554 == 0) && !Global_1945396)
	{
		if (func_118(unk_0x259BE71D8A81D4FA()) && iParam0)
		{
			Global_1977509 = 1;
		}
		else
		{
			unk_0x80F87A4A3B930613();
		}
	}
}

int func_118(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (func_120(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_119(Global_2657589[iParam0 /*466*/].f_321.f_7) == 17;
			}
		}
	}
	return 0;
}

int func_119(int iParam0)
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

int func_120(int iParam0, bool bParam1, bool bParam2)
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

int func_121()
{
	return -1;
}

void func_122(int iParam0, int iParam1)
{
	if (Global_4718592.f_160553 == 1)
	{
	}
	else if (Global_4718592.f_160554 == 1)
	{
	}
	else
	{
		unk_0xFF7028E54EB0EA84(iParam0, iParam1);
	}
}

int func_123()
{
	if (BitTest(Global_8253, 15))
	{
		return 1;
	}
	return 0;
}

bool func_124()
{
	return BitTest(Global_1962996, 17);
}

void func_125()
{
	if (Global_20325)
	{
		Local_43 = { -90.3f, 0f, 90f };
		Local_44 = { 1.5f, 0f, -17f };
		if (func_98())
		{
			unk_0x3CA646A848A5F334(&Local_45, 0);
			Local_43 = { Local_45 };
			unk_0x78C4EBB0251847E2(&Local_46);
			Local_44 = { Local_46 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		if (iLocal_71 == 0)
		{
			if (iLocal_72)
			{
				Local_42.f_0 = (Local_42.f_0 - 14f);
			}
			if (Local_42.f_0 < Local_44.f_0 || Local_42.f_0 == Local_44.f_0)
			{
				iLocal_72 = 0;
			}
			if (iLocal_73)
			{
				Local_42.f_1 = (Local_42.f_1 + 7f);
			}
			if (Local_42.f_1 > Local_44.f_1 || Local_42.f_1 == Local_44.f_1)
			{
				iLocal_73 = 0;
			}
			if (iLocal_74)
			{
				Local_42.f_2 = (Local_42.f_2 + 12f);
			}
			if (Local_42.f_2 > Local_44.f_2 || Local_42.f_2 == Local_44.f_2)
			{
				iLocal_74 = 0;
			}
		}
		if (iLocal_69)
		{
			Local_41.f_0 = (Local_41.f_0 - 1f);
		}
		if (Local_41.f_0 < Local_43.f_0 || Local_41.f_0 == Local_43.f_0)
		{
			Local_41.f_0 = Local_43.f_0;
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			Local_41.f_1 = (Local_41.f_1 - 0.5f);
		}
		if (Local_41.f_1 < Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
		{
			Local_41.f_1 = Local_43.f_1;
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			Local_41.f_2 = (Local_41.f_2 + 11f);
		}
		if (Local_41.f_2 > Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
		{
			Local_41.f_2 = Local_43.f_2;
			iLocal_71 = 0;
		}
		if (func_98() == 0)
		{
			unk_0xA0382000AA987093(Local_41, 0);
			unk_0x6B7EA0158D00C600(Local_42);
		}
	}
	else
	{
		Local_43 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_69)
		{
			Local_41.f_0 = (Local_41.f_0 - 1f);
		}
		if (Local_41.f_0 < Local_43.f_0 || Local_41.f_0 == Local_43.f_0)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			Local_41.f_1 = (Local_41.f_1 + 2f);
		}
		if (Local_41.f_1 > Local_43.f_1 || Local_41.f_1 == Local_43.f_1)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			Local_41.f_2 = (Local_41.f_2 + 7f);
		}
		if (Local_41.f_2 > Local_43.f_2 || Local_41.f_2 == Local_43.f_2)
		{
			iLocal_71 = 0;
		}
		unk_0xA0382000AA987093(Local_41, 0);
	}
	if (Global_20325)
	{
		if (((((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0) && iLocal_72 == 0) && iLocal_73 == 0) && iLocal_74 == 0)
		{
			if (func_98())
			{
			}
			else
			{
				Local_41 = { Local_43 };
				unk_0xA0382000AA987093(Local_41, 0);
				Local_42 = { Local_44 };
				unk_0x6B7EA0158D00C600(Local_42);
			}
			if (iLocal_54 == 0)
			{
				Global_22759 = 0;
				func_122(1, 1);
				iLocal_66 = 1;
				func_126(1);
				func_61();
				func_127();
				func_59(0);
				settimera(0);
				iLocal_93 = 1;
				iLocal_94 = 1;
				func_144();
				func_165(uLocal_91, "DISPLAY_VIEW", to_float(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!BitTest(Global_4542297, 2))
				{
					func_165(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_165(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
				func_167();
			}
		}
	}
	else if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
	{
		Local_41 = { Local_43 };
		unk_0xA0382000AA987093(Local_41, 0);
		Global_22759 = 0;
	}
}

void func_126(bool bParam0)
{
	if (func_174())
	{
		if (bParam0)
		{
			if (!unk_0xB18CDB475D274A8E())
			{
				unk_0x6256A54A328A35E6(1);
				if (Global_4541022 > 0 && Global_4541022 < 99)
				{
					unk_0xEB4A8AC9A591F10E(sLocal_20[Global_4541022], 0);
					unk_0xD974CD3A050559FE(0.25f);
				}
			}
		}
		else if (unk_0xB18CDB475D274A8E())
		{
			unk_0x6256A54A328A35E6(0);
		}
	}
}

void func_127()
{
	if (Global_4541021 > 0 && Global_4541021 < 99)
	{
		if (!Global_1945396)
		{
			unk_0x5C483F4653DC993C(sLocal_19[Global_4541021]);
		}
	}
}

void func_128()
{
	if (Global_20325)
	{
		iLocal_76 = 0;
		func_61();
		func_115(1, 1);
		func_122(1, 1);
		iLocal_66 = 1;
		Global_22762 = 1;
	}
}

void func_129()
{
	if (Global_4718592.f_160553 == 1 && func_130())
	{
		return;
	}
	if (iLocal_78 == 0)
	{
		if (BitTest(Global_8253, 28))
		{
			StringCopy(&cLocal_96, "CELL_296", 16);
			func_56();
		}
		else
		{
			StringCopy(&cLocal_96, "CELL_295", 16);
			func_30();
		}
		if (unk_0x1B79E937E91F40C3(&cLocal_96, "DUMMYCOMPARISON"))
		{
			fLocal_49 = fLocal_50;
			fLocal_47 = fLocal_48;
			fLocal_50 = fLocal_49;
			fLocal_48 = fLocal_47;
		}
		iLocal_51 = 1;
	}
}

int func_130()
{
	if ((((((func_139() || func_138()) || func_137()) || func_136()) || func_135()) || func_133()) || func_131())
	{
		return 1;
	}
	if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_131()
{
	return func_132(Global_4718592.f_113724);
}

int func_132(int iParam0)
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

int func_133()
{
	return func_134(Global_4718592.f_113724);
}

int func_134(int iParam0)
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

var func_135()
{
	return Global_2683864.f_24;
}

var func_136()
{
	return Global_2683864.f_21;
}

var func_137()
{
	return Global_2683864.f_19;
}

var func_138()
{
	return Global_2683864.f_18;
}

var func_139()
{
	return Global_2683864.f_17;
}

void func_140()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Back", &Global_20372, 1);
	}
}

void func_141()
{
	unk_0x4FA503A6757253A7(0, 0);
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 1;
}

void func_142()
{
	func_143();
}

void func_143()
{
	if (iLocal_101)
	{
		if (timera() > 50)
		{
			iLocal_101 = 0;
		}
	}
	if (iLocal_101 == 0)
	{
	}
}

void func_144()
{
	if (Global_20383.f_1 > 3)
	{
		if (!unk_0x4D9174D8796EA622())
		{
			unk_0x6D16B99FEB0AFFF1(uLocal_91, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_145()
{
	if (func_63(14))
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
		Global_20383 = func_13();
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

void func_146(int iParam0)
{
	if (func_148())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_161())
		{
			func_115(1, 1);
		}
		else
		{
			func_115(0, 0);
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
	if (!func_147())
	{
		Global_20383.f_1 = 3;
	}
}

int func_147()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_148()
{
	return BitTest(Global_1962996, 19);
}

void func_149()
{
	unk_0x66EFB3D6110055C4(0, 0, 1);
	unk_0x66EFB3D6110055C4(0, 56, 1);
	if (iLocal_100 == 0)
	{
		unk_0x4CC1CF98851922CE(0, Global_20356);
		unk_0x4CC1CF98851922CE(0, Global_20353);
		unk_0x66EFB3D6110055C4(0, 278, 1);
		unk_0x66EFB3D6110055C4(0, 279, 1);
		unk_0x66EFB3D6110055C4(0, 280, 1);
		unk_0x66EFB3D6110055C4(0, 281, 1);
		unk_0x66EFB3D6110055C4(0, 282, 1);
		unk_0x66EFB3D6110055C4(0, 282, 1);
		unk_0x66EFB3D6110055C4(0, 284, 1);
		unk_0x66EFB3D6110055C4(0, 285, 1);
		unk_0x66EFB3D6110055C4(0, 69, 1);
		unk_0x66EFB3D6110055C4(0, 70, 1);
		unk_0x66EFB3D6110055C4(0, 114, 1);
		unk_0x66EFB3D6110055C4(0, 71, 1);
		unk_0x66EFB3D6110055C4(0, 72, 1);
		unk_0x66EFB3D6110055C4(0, 74, 1);
		unk_0x66EFB3D6110055C4(0, 75, 1);
		unk_0x66EFB3D6110055C4(0, 76, 1);
		unk_0x66EFB3D6110055C4(0, 73, 1);
		unk_0x66EFB3D6110055C4(0, 77, 1);
		unk_0x66EFB3D6110055C4(0, 78, 1);
		unk_0x66EFB3D6110055C4(0, 286, 1);
		unk_0x66EFB3D6110055C4(0, 287, 1);
		unk_0x66EFB3D6110055C4(0, 79, 1);
		unk_0x66EFB3D6110055C4(0, 80, 1);
		unk_0x66EFB3D6110055C4(0, 81, 1);
		unk_0x66EFB3D6110055C4(0, 82, 1);
		unk_0x66EFB3D6110055C4(0, 86, 1);
		unk_0x66EFB3D6110055C4(0, 59, 1);
		unk_0x66EFB3D6110055C4(0, 60, 1);
		unk_0x66EFB3D6110055C4(0, 61, 1);
		unk_0x66EFB3D6110055C4(0, 62, 1);
		unk_0x66EFB3D6110055C4(0, 63, 1);
		unk_0x66EFB3D6110055C4(0, 64, 1);
		unk_0x66EFB3D6110055C4(0, 87, 1);
		unk_0x66EFB3D6110055C4(0, 88, 1);
		unk_0x66EFB3D6110055C4(0, 89, 1);
		unk_0x66EFB3D6110055C4(0, 90, 1);
		unk_0x66EFB3D6110055C4(0, 107, 1);
		unk_0x66EFB3D6110055C4(0, 108, 1);
		unk_0x66EFB3D6110055C4(0, 109, 1);
		unk_0x66EFB3D6110055C4(0, 110, 1);
		unk_0x66EFB3D6110055C4(0, 111, 1);
		unk_0x66EFB3D6110055C4(0, 112, 1);
		unk_0x66EFB3D6110055C4(0, 113, 1);
		unk_0x66EFB3D6110055C4(0, 114, 1);
		unk_0x66EFB3D6110055C4(0, 91, 1);
		unk_0x66EFB3D6110055C4(0, 92, 1);
		unk_0x66EFB3D6110055C4(0, 68, 1);
		unk_0x66EFB3D6110055C4(0, 102, 1);
		unk_0x66EFB3D6110055C4(0, 136, 1);
		unk_0x66EFB3D6110055C4(0, 137, 1);
		unk_0x66EFB3D6110055C4(0, 138, 1);
		unk_0x66EFB3D6110055C4(0, 139, 1);
		unk_0x66EFB3D6110055C4(0, 102, 1);
	}
}

int func_150()
{
	var uVar0;
	
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0xC39AE5D390581AD5(uVar0, -1, 0))
			{
				return 1;
			}
			else if (!unk_0xFD5C5BBD1FE92BB7(uVar0, -1, 0) == unk_0x4A8C381C258A124D())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_151()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_158())
	{
		return 1;
	}
	if (Global_2696917)
	{
		return 1;
	}
	if (func_157())
	{
		return 1;
	}
	if (func_156(159))
	{
		if (!func_155())
		{
			return 1;
		}
	}
	if (func_156(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_152() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_152()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_152()
{
	switch (func_154())
	{
		case 0:
			return func_153();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_153()
{
	switch (Global_2697021)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_154()
{
	return Global_32163;
}

bool func_155()
{
	return Global_2683864.f_698;
}

int func_156(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_157()
{
	return Global_2694526;
}

bool func_158()
{
	return Global_2683864.f_693;
}

void func_159()
{
	if (iLocal_106 == 1)
	{
		unk_0x4EB223432F8FA0A0(7);
		unk_0x4EB223432F8FA0A0(1);
		unk_0x4EB223432F8FA0A0(3);
		unk_0x4EB223432F8FA0A0(4);
		unk_0x4EB223432F8FA0A0(6);
		unk_0x4EB223432F8FA0A0(8);
		unk_0x4EB223432F8FA0A0(9);
		unk_0x4EB223432F8FA0A0(2);
	}
	else
	{
		unk_0x43AE50D2A33F6E2A();
	}
}

void func_160(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

bool func_161()
{
	return BitTest(Global_1962996, 5);
}

void func_162()
{
	if (func_163())
	{
		unk_0x60B12E049FB8FF1C();
		if (unk_0xAE1965746C93F8D5(0))
		{
			iLocal_54 = 1;
			iLocal_62 = 0;
		}
		else
		{
			Global_22762 = 1;
			Global_20383.f_1 = 3;
			unk_0x65662724C6BC4810();
		}
	}
	else
	{
		iLocal_60 = 0;
		iLocal_61 = 0;
		if (iLocal_55 == 1)
		{
			if (iLocal_78 == 0)
			{
				if (unk_0xA0C7B98BCF1EEF9E(uLocal_91))
				{
					if (func_174())
					{
						if (Global_4541022 == 0)
						{
							if (!BitTest(Global_4542297, 2))
							{
								func_165(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_165(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!BitTest(Global_4542297, 2))
						{
							func_165(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_165(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0xA0C7B98BCF1EEF9E(uLocal_91))
			{
				func_165(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_165(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
			}
			iLocal_55 = 0;
		}
		iLocal_62 = 0;
		unk_0x65662724C6BC4810();
	}
}

int func_163()
{
	if (Global_4718592.f_160553 == 1)
	{
		if (Global_78558)
		{
			return 0;
		}
	}
	if (Global_4718592.f_160554 == 1)
	{
		if (Global_78558)
		{
			return 0;
		}
	}
	if (unk_0x1226C55CA7D2269A() || unk_0x0BA1A956D36B210F())
	{
		if (BitTest(Global_8254, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_164(var uParam0, char* sParam1)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0xE6B753D52F4CA222();
}

void func_165(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x330108B080A2132F(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x330108B080A2132F(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x330108B080A2132F(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x330108B080A2132F(round(fParam6));
	}
	unk_0xE6B753D52F4CA222();
}

int func_166()
{
	if (Global_78558)
	{
		Global_20383 = 3;
	}
	else
	{
		Global_20383 = func_13();
	}
	if (Global_20383 > 3)
	{
		Global_20383 = 3;
	}
	return Global_113648.f_14053[Global_20383 /*20*/].f_7;
}

void func_167()
{
	if (Global_20383.f_1 > 3)
	{
		Global_20383.f_1 = 8;
	}
	Global_22761 = 0;
	iLocal_78 = 0;
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		Local_34 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	}
	if (Global_20325)
	{
		while (timera() < iLocal_88)
		{
			wait(0);
			func_144();
			func_94();
			unk_0xC0964AABD3C0CC7E();
		}
		func_164(uLocal_91, "OPEN_SHUTTER");
		func_159();
		func_129();
		iLocal_80 = 1;
		settimerb(0);
	}
	else
	{
		func_122(1, 1);
		func_126(1);
		func_61();
		func_127();
		func_59(0);
		iLocal_66 = 1;
	}
}

void func_168(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 15);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8253, 15);
	}
}

bool func_169(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

int func_170(int iParam0, int iParam1)
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

void func_171()
{
}

int func_172(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x4A0B7E53EBC937D5() != iParam0 && bParam2)
		{
			unk_0x7882946B06ED216B(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_173()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (unk_0xC2BF1F6F84E31EB2(unk_0x4A8C381C258A124D()))
		{
			unk_0xF9358C41CC69C616(unk_0x4A8C381C258A124D(), 0, 0);
			unk_0xCF33DB366A4071FB(fLocal_107);
			unk_0x289AEE012C9C5F5D(fLocal_108);
			unk_0x6DE386DA26D363D5(fLocal_109);
		}
		else
		{
			unk_0xCF33DB366A4071FB(fLocal_107);
			unk_0x289AEE012C9C5F5D(fLocal_108);
			unk_0x6DE386DA26D363D5(fLocal_109);
		}
	}
	unk_0x263FA094C828FD3E(fLocal_110);
	unk_0x48BDE4C1BEB65AD4(fLocal_111);
	unk_0xDEC275C3811D6AD8(fLocal_112);
	unk_0xFA6A3ED1D3AA4BD4(fLocal_113);
	func_58();
}

int func_174()
{
	if (iLocal_23 == 0)
	{
		iLocal_23 = 1;
	}
	return 1;
}
