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
	float fLocal_47 = 0f;
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
	var uLocal_62 = 0;
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
	int iLocal_85 = 0;
	struct<2> Local_86 = { 0, 0 } ;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	struct<2> Local_89 = { 0, 0 } ;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	struct<2> Local_92 = { 0, 0 } ;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	struct<2> Local_95 = { 0, 0 } ;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	struct<2> Local_98 = { 0, 0 } ;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	struct<2> Local_101 = { 0, 0 } ;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
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
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	StringCopy(&Local_86, "CELL_206", 16);
	StringCopy(&Local_89, "CELL_214", 16);
	StringCopy(&Local_92, "CELL_243", 16);
	StringCopy(&Local_95, "CELL_244", 16);
	StringCopy(&Local_98, "CELL_265", 16);
	StringCopy(&Local_101, "CELL_300", 16);
	unk_0x51CC1333A10C4E09();
	func_98(&uLocal_107);
	iLocal_104 = 0;
	func_96();
	func_95(Global_20364, "SET_THEME", to_float(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_85(0);
	while (true)
	{
		wait(0);
		func_84();
		func_83();
		if (!Global_20383.f_1 == 9 && Global_20383.f_1 > 3)
		{
			switch (iLocal_85)
			{
				case 0:
					func_47();
					break;
				
				case 1:
					func_31();
					break;
				
				case 3:
					func_5();
					break;
				
				case 2:
					func_4();
					break;
				
				default:
					break;
			}
			if (Global_20383.f_1 != 8)
			{
				if (func_3())
				{
					func_2();
				}
			}
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_20383.f_1 == 1 || Global_20383.f_1 == 3) || Global_20383.f_1 == 0) || Global_20327 == 1)
	{
		Global_20370 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	Global_1890001.f_6 = 0;
	unk_0xBBC29EBE6E1A48FA();
}

int func_3()
{
	if (Global_8859 == 1 || Global_20383.f_1 < 7)
	{
		Global_20370 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
}

void func_5()
{
	int iVar0;
	
	Global_1890001.f_6 = 1;
	if (iLocal_106)
	{
		if (unk_0x2645430E708CBFAC(2, Global_20352))
		{
			iLocal_106 = 0;
		}
		return;
	}
	if (unk_0x2645430E708CBFAC(2, 201))
	{
		iLocal_85 = 1;
		iVar0 = func_29(iLocal_104, 0);
		func_6(iVar0);
		return;
	}
	if (unk_0x2645430E708CBFAC(2, 202))
	{
		iLocal_85 = 1;
		return;
	}
	set_warning_message_with_header("HUD_INPUT23", "BA_APP_PASS_W", 36, 0, false, -1, 0, 0, true, 0);
}

void func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1890001.f_7[iParam0 /*8*/].f_2;
	if (Global_1890001.f_7[iParam0 /*8*/].f_1 == 1 && iLocal_105 == iVar0)
	{
		func_26(iVar0, Global_1890001.f_7[iParam0 /*8*/].f_6);
		func_13(iParam0);
	}
	Global_1890001.f_6 = 0;
	func_7(0);
}

void func_7(int iParam0)
{
	if (func_12())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_11())
		{
			func_9(1, 1);
		}
		else
		{
			func_9(0, 0);
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
	if (!func_8())
	{
		Global_20383.f_1 = 3;
	}
}

int func_8()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_10(0))
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

int func_10(int iParam0)
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

bool func_11()
{
	return BitTest(Global_1962996, 5);
}

bool func_12()
{
	return BitTest(Global_1962996, 19);
}

void func_13(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		if (Global_1890001.f_7[iParam0 /*8*/].f_1 == 1)
		{
			if (BitTest(Global_1890001.f_7[iParam0 /*8*/].f_5, 0))
			{
				func_25();
				if (Global_1890001.f_7[iParam0 /*8*/].f_7 == 0)
				{
					func_25();
				}
				else
				{
					Global_1890001.f_4 = (Global_1890001.f_4 - 1);
					if (Global_1890001.f_4 < 0)
					{
						Global_1890001.f_4 = 0;
					}
					func_18();
				}
			}
			unk_0x8744D2E3FC95740E(&(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_22), Global_1890001.f_7[iParam0 /*8*/].f_2);
			unk_0xFE3A52C5B7AE3101(Global_1890001.f_7[iParam0 /*8*/].f_4);
			func_17();
			func_15(0);
		}
		iVar0 = iParam0;
		while (iVar0 <= 8)
		{
			Global_1890001.f_7[iVar0 /*8*/] = { Global_1890001.f_7[iVar0 + 1 /*8*/] };
			iVar0++;
		}
		Global_1890001.f_7[9 /*8*/].f_1 = 0;
		Global_1890001.f_7[9 /*8*/].f_2 = func_14();
	}
}

int func_14()
{
	return -1;
}

void func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1890001.f_3), iParam0);
	}
}

bool func_16(int iParam0)
{
	return BitTest(Global_1890001.f_3, iParam0);
}

void func_17()
{
	Global_1890001 = (Global_1890001 - 1);
}

void func_18()
{
	Global_22788 = (Global_22788 - 1);
	if (Global_22788 < 0)
	{
		func_24("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_19();
}

void func_19()
{
	if (!Global_20585)
	{
		if (Global_20383.f_1 == 6)
		{
			func_95(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_20(1);
			func_95(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20363), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_20(int iParam0)
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
		if (func_23(14))
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
								func_22(&(Global_8260[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar2);
								unk_0xE6B753D52F4CA222();
							}
							if (Global_2694521)
							{
								if (iVar1 == 14)
								{
									func_21(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_21(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22793), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_21(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_21(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_21(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8260[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_22(&(Global_8260[iVar1 /*15*/]));
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
								func_22(&(Global_8260[iVar1 /*15*/]));
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
								func_22(&(Global_8260[iVar1 /*15*/]));
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
								func_22(&(Global_8260[iVar1 /*15*/]));
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
								func_22(&(Global_8260[iVar1 /*15*/]));
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if (Global_8260[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1890001.f_1;
								func_21(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_21(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_21(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_22(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam8))
	{
		func_22(sParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam9))
	{
		func_22(sParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam10))
	{
		func_22(sParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam11))
	{
		func_22(sParam11);
	}
	unk_0xE6B753D52F4CA222();
}

void func_22(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

bool func_23(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_24(char* sParam0)
{
	if (Global_22788 != 0)
	{
		if (!unk_0xD6F9DEE4765092A9(sParam0))
		{
		}
		Global_22788 = 0;
	}
}

void func_25()
{
	Global_1890001.f_1 = (Global_1890001.f_1 - 1);
	if (Global_1890001.f_1 < 0)
	{
		Global_1890001.f_1 = 0;
	}
}

void func_26(int iParam0, var uParam1)
{
	if (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_26 == func_14())
	{
		if (unk_0x762604C40829DB72(iParam0))
		{
			Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_26 = iParam0;
			Global_2793046.f_5225.f_225 = uParam1;
			func_27(func_28(iParam0));
		}
	}
}

void func_27(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = 1053257221;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	if (!iParam0 == 0)
	{
		unk_0x01F0B819E78A18A1(1, &Var0, 2, iParam0);
	}
}

int func_28(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, iParam0);
	}
	return uVar0;
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1890001.f_7[iVar0 /*8*/].f_7 == iParam1)
		{
			iParam0 = (iParam0 - 1);
			if (iParam0 < 0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_30()
{
	return Global_1890001;
}

void func_31()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_29(iLocal_104, 0);
	if (iLocal_104 == -1)
	{
		func_85(1);
		return;
	}
	iVar1 = Global_1890001.f_7[iVar0 /*8*/].f_2;
	if (!func_46(iVar1, 0, 1) || iLocal_105 != iVar1)
	{
		func_85(1);
		return;
	}
	func_41(&uLocal_107);
	if (func_39(&uLocal_107))
	{
		func_85(1);
		return;
	}
	if (func_38(&uLocal_107))
	{
		func_13(iVar0);
		func_85(1);
		return;
	}
	if (func_34(&uLocal_107))
	{
		if (func_33())
		{
			iLocal_106 = 1;
			iLocal_85 = 3;
		}
		else if (Global_1890001.f_7[iVar0 /*8*/] == 0)
		{
			func_6(iVar0);
		}
		else if (Global_1890001.f_7[iVar0 /*8*/] == 1)
		{
			func_32(iVar0);
		}
		else
		{
			func_7(0);
		}
	}
}

void func_32(int iParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_1836078, 15);
	func_13(iParam0);
	Global_1890001.f_6 = 0;
	func_7(0);
}

bool func_33()
{
	return Global_1574582;
}

int func_34(var uParam0)
{
	if (!BitTest(*uParam0, 0))
	{
		return 0;
	}
	if (Global_20361)
	{
		return 0;
	}
	if (!unk_0x9390801B06EE998F())
	{
		return 0;
	}
	if (!unk_0x875A214D5EBCA509(2, Global_20352))
	{
		return 0;
	}
	func_35();
	Global_20361 = 1;
	return 1;
}

void func_35()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Accept", &Global_20372, 1);
		func_36();
	}
}

void func_36()
{
	if (func_37())
	{
		unk_0xBF3F90E670404C44(5);
	}
}

int func_37()
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

int func_38(var uParam0)
{
	if (!BitTest(*uParam0, 1))
	{
		return 0;
	}
	if (Global_20361)
	{
		return 0;
	}
	if (!unk_0x9390801B06EE998F())
	{
		return 0;
	}
	if (!unk_0x875A214D5EBCA509(2, Global_20355))
	{
		return 0;
	}
	func_35();
	Global_20361 = 1;
	return 1;
}

int func_39(var uParam0)
{
	if (!BitTest(*uParam0, 2))
	{
		return 0;
	}
	if (Global_20361)
	{
		return 0;
	}
	if (!unk_0x9390801B06EE998F())
	{
		return 0;
	}
	if (!unk_0x875A214D5EBCA509(2, Global_20353))
	{
		return 0;
	}
	func_40();
	Global_20361 = 1;
	return 1;
}

void func_40()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Back", &Global_20372, 1);
	}
}

void func_41(var uParam0)
{
	if (unk_0x1DD05E817C89C737() < uParam0->f_1)
	{
		return;
	}
	if (!unk_0x9390801B06EE998F())
	{
		return;
	}
	if (unk_0x875A214D5EBCA509(2, Global_20359) || unk_0x875A214D5EBCA509(2, 181))
	{
		func_44();
		uParam0->f_1 = unk_0x1DD05E817C89C737() + 50;
	}
	if (unk_0x875A214D5EBCA509(2, Global_20360) || unk_0x875A214D5EBCA509(2, 180))
	{
		func_42();
		uParam0->f_1 = unk_0x1DD05E817C89C737() + 50;
	}
}

void func_42()
{
	func_95(Global_20364, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20372, 1);
	func_43();
}

void func_43()
{
	if (func_37())
	{
		if (Global_20589 == 0)
		{
			unk_0xBF3F90E670404C44(2);
		}
		else
		{
			unk_0xBF3F90E670404C44(1);
		}
	}
}

void func_44()
{
	func_95(Global_20364, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20372, 1);
	func_45();
}

void func_45()
{
	if (func_37())
	{
		if (Global_20589 == 0)
		{
			unk_0xBF3F90E670404C44(1);
		}
		else
		{
			unk_0xBF3F90E670404C44(2);
		}
	}
}

int func_46(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x762604C40829DB72(uParam0))
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

void func_47()
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (func_30() > 1)
	{
		func_41(&uLocal_107);
	}
	if (func_34(&uLocal_107))
	{
		unk_0x88F483FBD433696A(Global_20364, "GET_CURRENT_SELECTION");
		uVar0 = unk_0x6CA3F2B87712B6A4();
		while (!unk_0xA6F779AA284EB20E(uVar0))
		{
			wait(0);
		}
		iLocal_104 = unk_0x5DEF122A58D4F685(uVar0);
		iVar1 = func_29(iLocal_104, 0);
		switch (Global_1890001.f_7[iVar1 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_49();
				break;
			
			default:
				return;
		}
		Global_20383.f_1 = 8;
		return;
	}
	if (func_38(&uLocal_107))
	{
		unk_0x88F483FBD433696A(Global_20364, "GET_CURRENT_SELECTION");
		uVar2 = unk_0x6CA3F2B87712B6A4();
		while (!unk_0xA6F779AA284EB20E(uVar2))
		{
			wait(0);
		}
		iLocal_104 = unk_0x5DEF122A58D4F685(uVar2);
		iVar3 = func_29(iLocal_104, 0);
		switch (Global_1890001.f_7[iVar3 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_13(iVar3);
				func_85(0);
				return;
			
			default:
		}
		return;
		return;
	}
	if (func_16(0))
	{
		func_48(0);
		func_85(0);
	}
}

void func_48(int iParam0)
{
	if (func_16(iParam0))
	{
		unk_0x8744D2E3FC95740E(&(Global_1890001.f_3), iParam0);
	}
}

void func_49()
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<16> Var5;
	var uVar6[3];
	bool bVar7;
	int iVar8;
	int iVar9;
	char cVar10[16];
	struct<16> Var11;
	char cVar12[16];
	
	if (Global_20383.f_1 != 8)
	{
		Global_20383.f_1 = 8;
	}
	func_95(Global_20364, "SET_DATA_SLOT_EMPTY", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	bVar0 = false;
	iVar3 = func_29(iLocal_104, 0);
	iLocal_105 = Global_1890001.f_7[iVar3 /*8*/].f_2;
	iVar4 = Global_1890001.f_7[iVar3 /*8*/].f_2;
	unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(26);
	unk_0x330108B080A2132F(0);
	if (func_46(iVar4, 0, 1))
	{
		Var5 = { func_82(iVar4) };
		unk_0x882AEFD55B8D51FB("STRING");
		unk_0x4E5A3D96808F7F84(func_76(iVar4));
		unk_0x60D332F23943B34F(&Var5);
		unk_0xCFAD3D478C87321A();
		bVar0 = true;
	}
	else
	{
		func_22("");
	}
	if (Global_1890001.f_7[iVar3 /*8*/] == 0)
	{
		if (Global_262145.f_15419)
		{
			bVar7 = func_75(iVar4);
			iVar8 = 0;
			while (iVar8 < 3)
			{
				if (iVar9 < 3)
				{
					if (Global_1894573[iVar4 /*608*/].f_10.f_11[iVar8] != func_14())
					{
						if (func_46(Global_1894573[iVar4 /*608*/].f_10.f_11[iVar8], 0, 1))
						{
							uVar6[iVar9] = Global_1894573[iVar4 /*608*/].f_10.f_11[iVar8];
							iVar9++;
						}
					}
				}
				iVar8++;
			}
			if (iVar9 == 0)
			{
				if (bVar7)
				{
					func_22("BA_APP_BODYCTA");
				}
				else
				{
					func_22("BA_APP_BODY_TA");
				}
			}
			else
			{
				StringCopy(&cVar10, "BA_APP_BODY_T4", 16);
				if (bVar7)
				{
					StringCopy(&cVar10, "BA_APP_BODYCT4", 16);
				}
				if (iVar9 == 2)
				{
					if (bVar7)
					{
						StringCopy(&cVar10, "BA_APP_BODYCT5", 16);
					}
					else
					{
						StringCopy(&cVar10, "BA_APP_BODY_T5", 16);
					}
				}
				else if (iVar9 > 2)
				{
					if (bVar7)
					{
						StringCopy(&cVar10, "BA_APP_BODYCT6", 16);
					}
					else
					{
						StringCopy(&cVar10, "BA_APP_BODY_T6", 16);
					}
				}
				unk_0x882AEFD55B8D51FB(&cVar10);
				iVar8 = 0;
				while (iVar8 < iVar9)
				{
					Var11 = { func_82(uVar6[iVar8]) };
					unk_0x60D332F23943B34F(&Var11);
					iVar8++;
				}
				unk_0xCFAD3D478C87321A();
			}
		}
		else
		{
			if (Global_1890001.f_88[iVar3 /*5*/].f_1)
			{
				if (Global_1890001.f_88[iVar3 /*5*/].f_2)
				{
					StringCopy(&cVar12, "BA_APP_BODY_T9", 16);
				}
				else
				{
					StringCopy(&cVar12, "BA_APP_BODY_T8", 16);
				}
			}
			else if (Global_1890001.f_88[iVar3 /*5*/].f_2)
			{
				StringCopy(&cVar12, "BA_APP_BODY_T7", 16);
			}
			else
			{
				StringCopy(&cVar12, "BA_APP_BODY_T10", 16);
			}
			unk_0x882AEFD55B8D51FB(&cVar12);
			unk_0x511D14ED2DA887E1(Global_1890001.f_88[iVar3 /*5*/]);
			unk_0x511D14ED2DA887E1(func_74(iVar4));
			unk_0x511D14ED2DA887E1(Global_1890001.f_88[iVar3 /*5*/].f_3);
			unk_0x511D14ED2DA887E1(Global_1890001.f_88[iVar3 /*5*/].f_4);
			unk_0xCFAD3D478C87321A();
		}
	}
	else if (Global_1890001.f_7[iVar3 /*8*/] == 1)
	{
		unk_0x882AEFD55B8D51FB("BA_APP_BODY_DM2");
		unk_0x4E5A3D96808F7F84(func_76(Global_1890001.f_7[iVar3 /*8*/].f_2));
		unk_0x60D332F23943B34F(func_61(Global_1890001.f_7[iVar3 /*8*/].f_2));
		unk_0xCFAD3D478C87321A();
	}
	if (bVar0)
	{
		iVar2 = func_55(Global_1890001.f_7[iVar3 /*8*/].f_2);
		if (iVar2 == 0)
		{
			bVar0 = false;
		}
		else
		{
			sVar1 = unk_0x008C0EB38E4459EE(iVar2);
		}
	}
	if (bVar0)
	{
		unk_0x3585BEBEDC67FCC7(sVar1);
	}
	else
	{
		func_22(&Local_101);
	}
	unk_0xE6B753D52F4CA222();
	func_95(Global_20364, "DISPLAY_VIEW", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_53(&Local_98);
	func_50(13, &Local_92, 12, &Local_95, 4, &Local_86, &uLocal_107);
	iLocal_85 = 1;
}

void func_50(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, var uParam6)
{
	func_51(2, iParam0, sParam1, 0, uParam6, -1);
	func_51(1, iParam2, sParam3, 1, uParam6, 17);
	func_51(3, iParam4, sParam5, 2, uParam6, -1);
}

void func_51(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, int iParam5)
{
	if (iParam1 == 1)
	{
		func_21(Global_20364, "SET_SOFT_KEYS", to_float(iParam0), 0f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x8744D2E3FC95740E(uParam4, iParam3);
		func_52(iParam5, 0);
		return;
	}
	if (Global_20371)
	{
		func_21(Global_20364, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		unk_0x0B0C9A0F9AAEB7F0(uParam4, iParam3);
		func_52(iParam5, 1);
		return;
	}
	func_21(Global_20364, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0B0C9A0F9AAEB7F0(uParam4, iParam3);
	func_52(iParam5, 1);
}

void func_52(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8253, iParam0);
		return;
	}
	unk_0x8744D2E3FC95740E(&Global_8253, iParam0);
}

void func_53(char* sParam0)
{
	func_54(Global_20364, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_54(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	func_22(sParam2);
	if (!unk_0xD6F9DEE4765092A9(sParam3))
	{
		func_22(sParam3);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam4))
	{
		func_22(sParam4);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam5))
	{
		func_22(sParam5);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam6))
	{
		func_22(sParam6);
	}
	unk_0xE6B753D52F4CA222();
}

int func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = func_58(iParam0);
	if (iVar0 == -1)
	{
		func_56(iParam0, 1);
		return 0;
	}
	Global_1666668[iVar0 /*5*/].f_4 = 1;
	return Global_1666668[iVar0 /*5*/].f_2;
}

void func_56(int iParam0, bool bParam1)
{
	if (!func_46(iParam0, 0, 1))
	{
		return;
	}
	if (func_58(iParam0) != -1)
	{
		return;
	}
	if (Global_1666831)
	{
		if (iParam0 == Global_1666831.f_1)
		{
			return;
		}
	}
	if (func_57(iParam0))
	{
		return;
	}
	if (Global_1666869 >= 32)
	{
		return;
	}
	Global_1666836[Global_1666869] = iParam0;
	Global_1666869++;
	if (bParam1)
	{
	}
}

int func_57(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1666869)
	{
		if (Global_1666836[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0)
{
	int iVar0;
	
	if (!func_46(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1666829 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1666829)
	{
		if (Global_1666668[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xCF3FA9D6B87D2277(Global_1666668[iVar0 /*5*/].f_2) && unk_0x445B6F53EA9E6A6F(Global_1666668[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_59(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_59(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1666829)
	{
		return;
	}
	if (unk_0xCF3FA9D6B87D2277(Global_1666668[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1666668[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x008C0EB38E4459EE(Global_1666668[iParam0 /*5*/].f_2), 64);
			unk_0x4CF6314488B07405(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x697995B2B26B6CD4(Global_1666668[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1666829)
	{
		Global_1666668[iVar2 /*5*/] = { Global_1666668[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_60(&(Global_1666668[iVar2 /*5*/]));
	Global_1666829 = (Global_1666829 - 1);
}

void func_60(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_14();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x76CD105BCAC6EB9F())
	{
		uParam0->f_3 = unk_0x7E3F74F641EE6B27();
	}
}

char* func_61(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		uVar0 = func_73(&(Global_1894573[iParam0 /*608*/].f_10.f_105));
		return uVar0;
	}
	if (Global_1894573[iParam0 /*608*/].f_10.f_121 != Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_121)
	{
		uVar0 = func_68(iParam0, 0);
		return uVar0;
	}
	if (((func_67(iParam0, 28) || func_67(unk_0x259BE71D8A81D4FA(), 28)) || func_66(iParam0)) && !func_64(iParam0))
	{
		return func_68(iParam0, 0);
	}
	iVar1 = func_63(iParam0);
	if (iVar1 != func_14())
	{
		if (iVar1 != unk_0x259BE71D8A81D4FA())
		{
			if (!func_62() && !unk_0x8FF2665359043205(0, -1, 1))
			{
				return func_68(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_14())
	{
		uVar0 = func_73(&(Global_1894573[iVar1 /*608*/].f_10.f_105));
		if (unk_0xD6F9DEE4765092A9(uVar0))
		{
			return func_68(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

bool func_62()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

int func_63(int iParam0)
{
	if (iParam0 != func_14())
	{
		return Global_1894573[iParam0 /*608*/].f_10;
	}
	return func_14();
}

int func_64(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_65(iParam0) };
	if (func_62())
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			return 1;
		}
		else if (unk_0x97DD063A9C6137F8(0))
		{
			if (unk_0x8EF8E27D73EB5271(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_65(int iParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(iParam0, &Var0, 13);
	return Var0;
}

int func_66(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_14())
	{
		Var0 = { func_65(iParam0) };
		if ((unk_0x3B880DE16766E9C3() && !unk_0x716271729B9FB8E6()) || unk_0x761778199FE1211C())
		{
			if (unk_0x97DD063A9C6137F8(0))
			{
				return 0;
			}
		}
		else if (func_62() || unk_0x716271729B9FB8E6())
		{
			if (unk_0x97DD063A9C6137F8(0))
			{
				if (unk_0x8EF8E27D73EB5271(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

var func_67(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

var func_68(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_70(iParam0, 1))
		{
			return func_69();
		}
	}
	return unk_0xFACCDE46E24AD056("GB_REST_ACC");
}

var func_69()
{
	return unk_0xFACCDE46E24AD056("GB_REST_ACCM");
}

bool func_70(int iParam0, bool bParam1)
{
	return func_71(iParam0, bParam1, 1);
}

int func_71(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_14())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_72(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1894573[iParam0 /*608*/].f_10;
	if (iVar0 != func_14() && Global_1894573[iVar0 /*608*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0, int iParam1)
{
	if (iParam0 != func_14())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_14())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 == iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_73(var uParam0)
{
	return uParam0;
}

int func_74(int iParam0)
{
	if (func_63(iParam0) == func_14())
	{
		return 0;
	}
	return Global_1894573[iParam0 /*608*/].f_10.f_19;
}

int func_75(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 26);
}

int func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = func_79(iParam0);
	if (iVar0 != -1)
	{
		return func_77(iVar0);
	}
	return 1;
}

int func_77(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_78(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_78(int iParam0)
{
	return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_79(int iParam0)
{
	if (!iParam0 == func_14())
	{
		if (func_80(iParam0, 1))
		{
			return Global_2648605.f_818.f_11[func_63(iParam0)];
		}
	}
	return -1;
}

bool func_80(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_81(iParam0))
		{
			return 0;
		}
	}
	return Global_1894573[iParam0 /*608*/].f_10 != func_14();
}

int func_81(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_14())
		{
			return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
		}
	}
	return 0;
}

struct<16> func_82(var uParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, unk_0xBD6CA019F46AB947(uParam0), 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_83()
{
	if (Global_1890001.f_6)
	{
		if (iLocal_85 != 3)
		{
			if (!unk_0xB11671B812399BA2())
			{
				Global_1890001.f_6 = 0;
			}
		}
	}
}

void func_84()
{
	unk_0x4CC1CF98851922CE(0, 176);
	unk_0x4CC1CF98851922CE(0, 177);
}

void func_85(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iLocal_105 = func_14();
	if (!Global_20383.f_1 == 7)
	{
		Global_20383.f_1 = 7;
	}
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = iLocal_104;
	}
	if (iVar0 >= Global_1665288)
	{
		iVar0 = 0;
	}
	if (Global_22785)
	{
		func_49();
		Global_22785 = 0;
		return;
	}
	iVar1 = func_30();
	iVar1 = (iVar1 - func_94());
	if ((func_80(unk_0x259BE71D8A81D4FA(), 0) && !func_93(1)) && iVar1 <= 0)
	{
		func_91();
		return;
	}
	func_86();
	func_95(Global_20364, "DISPLAY_VIEW", to_float(25), to_float(iVar0), -1082130432, -1082130432, -1082130432);
	func_53("CELL_BOSSAGE");
	bVar2 = false;
	if (iVar1 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		func_50(13, &Local_89, 12, &Local_95, 4, &Local_86, &uLocal_107);
	}
	else
	{
		func_50(1, "", 1, "", 4, &Local_86, &uLocal_107);
	}
	iLocal_85 = 0;
}

void func_86()
{
	int iVar0;
	int iVar1;
	
	func_95(Global_20364, "SET_DATA_SLOT_EMPTY", to_float(25), -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1890001.f_7[iVar0 /*8*/].f_1 == 1 && Global_1890001.f_7[iVar0 /*8*/].f_7 == 0)
		{
			switch (Global_1890001.f_7[iVar0 /*8*/])
			{
				case 0:
					if (func_90(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				
				case 1:
					if (func_88(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				}
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return;
	}
	func_87();
}

void func_87()
{
	bool bVar0;
	
	unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(25);
	unk_0x330108B080A2132F(0);
	if (func_81(unk_0x259BE71D8A81D4FA()))
	{
		func_22("BA_APP_NONEB");
	}
	else
	{
		func_22("BA_APP_NONE");
	}
	func_22("");
	unk_0x330108B080A2132F(-1);
	unk_0x330108B080A2132F(1);
	bVar0 = unk_0x76CD105BCAC6EB9F();
	unk_0x557F1E2300EF1A3E(bVar0);
	unk_0xE6B753D52F4CA222();
}

int func_88(int iParam0, int iParam1)
{
	struct<16> Var0;
	int iVar1;
	int iVar2;
	
	if (Global_1890001.f_7[iParam0 /*8*/].f_2 == func_14() || !func_46(Global_1890001.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(25);
	unk_0x330108B080A2132F(iParam1);
	Var0 = { func_82(Global_1890001.f_7[iParam0 /*8*/].f_2) };
	func_89(&Var0);
	unk_0x882AEFD55B8D51FB("BA_APP_BODY_DM1");
	unk_0xCFAD3D478C87321A();
	unk_0x330108B080A2132F(-1);
	iVar1 = 1;
	iVar2 = func_79(Global_1890001.f_7[iParam0 /*8*/].f_2);
	if (iVar2 != -1)
	{
		iVar1 = func_77(iVar2);
	}
	unk_0x330108B080A2132F(iVar1);
	unk_0x557F1E2300EF1A3E(true);
	unk_0xE6B753D52F4CA222();
	return 1;
}

void func_89(var uParam0)
{
	unk_0xCE3E870AC37B4253(uParam0);
}

int func_90(int iParam0, int iParam1)
{
	struct<16> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1890001.f_7[iParam0 /*8*/].f_2 == func_14() || !func_46(Global_1890001.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(25);
	unk_0x330108B080A2132F(iParam1);
	Var0 = { func_82(Global_1890001.f_7[iParam0 /*8*/].f_2) };
	func_89(&Var0);
	bVar1 = func_75(Global_1890001.f_7[iParam0 /*8*/].f_2);
	iVar2 = func_74(Global_1890001.f_7[iParam0 /*8*/].f_2);
	if (iVar2 == 0)
	{
		if (bVar1)
		{
			func_22("BA_APP_BODYCT");
		}
		else
		{
			func_22("BA_APP_BODY_T");
		}
	}
	else if (iVar2 == 1)
	{
		if (bVar1)
		{
			unk_0x882AEFD55B8D51FB("BA_APP_BODYCT3");
		}
		else
		{
			unk_0x882AEFD55B8D51FB("BA_APP_BODY_T3");
		}
		unk_0x511D14ED2DA887E1(iVar2);
		unk_0xCFAD3D478C87321A();
	}
	else
	{
		if (bVar1)
		{
			unk_0x882AEFD55B8D51FB("BA_APP_BODYCT2");
		}
		else
		{
			unk_0x882AEFD55B8D51FB("BA_APP_BODY_T2");
		}
		unk_0x511D14ED2DA887E1(iVar2);
		unk_0xCFAD3D478C87321A();
	}
	unk_0x330108B080A2132F(-1);
	iVar3 = 1;
	iVar4 = func_79(Global_1890001.f_7[iParam0 /*8*/].f_2);
	if (iVar4 != -1)
	{
		iVar3 = func_77(iVar4);
	}
	unk_0x330108B080A2132F(iVar3);
	unk_0x557F1E2300EF1A3E(true);
	unk_0xE6B753D52F4CA222();
	return 1;
}

void func_91()
{
	func_95(Global_20364, "SET_DATA_SLOT_EMPTY", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(26);
	unk_0x330108B080A2132F(0);
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x4E5A3D96808F7F84(func_76(unk_0x259BE71D8A81D4FA()));
	unk_0x60D332F23943B34F(func_92());
	unk_0xCFAD3D478C87321A();
	func_22("BA_APP_NONEG");
	func_22("CELL_AGBOSSPIC");
	unk_0xE6B753D52F4CA222();
	func_95(Global_20364, "DISPLAY_VIEW", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_53("CELL_BOSSAGE");
	func_50(1, "", 1, "", 4, &Local_86, &uLocal_107);
	iLocal_85 = 2;
}

char* func_92()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_63(unk_0x259BE71D8A81D4FA());
	if (iVar0 != func_14())
	{
		if (iVar0 != unk_0x259BE71D8A81D4FA())
		{
			if (((func_67(iVar0, 28) || func_67(unk_0x259BE71D8A81D4FA(), 28)) || func_66(iVar0)) && !func_64(iVar0))
			{
				return func_68(iVar0, 0);
			}
			if (!func_62() && !unk_0x8FF2665359043205(0, -1, 1))
			{
				return func_68(iVar0, 0);
			}
		}
		uVar1 = func_73(&(Global_1894573[iVar0 /*608*/].f_10.f_105));
		if (unk_0xD6F9DEE4765092A9(uVar1))
		{
			return func_68(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

bool func_93(bool bParam0)
{
	return func_70(unk_0x259BE71D8A81D4FA(), bParam0);
}

int func_94()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1890001.f_7[iVar0 /*8*/].f_7 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_95(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_96()
{
	Global_1890001.f_1 = 0;
	func_97();
}

void func_97()
{
	Global_1890001.f_5 = 0;
}

void func_98(var uParam0)
{
	*uParam0 = 0;
}
