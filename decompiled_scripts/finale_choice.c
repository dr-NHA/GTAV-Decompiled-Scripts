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
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 1;
	if (unk_0x96CFB880BAC634CE(18))
	{
		func_43();
	}
	func_42(20);
	func_41();
	func_40(1);
	func_40(0);
	func_40(2);
	func_40(13);
	func_40(12);
	Global_8258 = 1;
	func_39();
	if (!func_38(-1615086084))
	{
		func_37(-1615086084, 2, 2, 2, 1, -1, 5);
	}
	if (!func_38(-1970925435))
	{
		func_37(-1970925435, 2, 0, 0, 1, -1, 5);
	}
	if (!func_38(-1817481777))
	{
		func_37(-1817481777, 2, 12, 3, 1, -1, 5);
	}
	bVar0 = false;
	while (func_36(23) && !func_35(134))
	{
		if (func_30() == 1)
		{
			if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
			{
				if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
				{
					if ((!unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) && !unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D())) && !unk_0x5B702A5D1F2635BE(unk_0x4A8C381C258A124D()))
					{
						if (!bVar0)
						{
							if (!((func_29() || unk_0x3555462DB47B7AB1()) || func_28()))
							{
								if (func_13())
								{
									bVar0 = true;
								}
							}
						}
						else
						{
							if (iLocal_28)
							{
								unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 384);
								unk_0x4190C67D524CD0DC(unk_0x4A8C381C258A124D(), 0f);
								unk_0xB211E45F1FE1ED2D(0, 173, 1);
								unk_0xB211E45F1FE1ED2D(0, 172, 1);
								unk_0xB211E45F1FE1ED2D(0, 174, 1);
								unk_0xB211E45F1FE1ED2D(0, 175, 1);
								unk_0xB211E45F1FE1ED2D(0, 176, 1);
								unk_0xB211E45F1FE1ED2D(0, 177, 1);
								unk_0xB211E45F1FE1ED2D(0, 178, 1);
								unk_0xB211E45F1FE1ED2D(0, 179, 1);
								unk_0xB211E45F1FE1ED2D(0, 180, 1);
								unk_0xB211E45F1FE1ED2D(0, 181, 1);
							}
							else
							{
								unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
							}
							switch (func_12())
							{
								case -1615086084:
									if (!func_38(-1989308064))
									{
										func_8(-1989308064, 0, 1, 0, 1, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								
								case -1989308064:
									func_7(12, 0);
									func_6(134, 1);
									unk_0x1164A75E490C27B6(joaat("sp_final_decision"), 2, 1);
									break;
								
								case -1970925435:
									if (!func_38(-1060930305))
									{
										func_8(-1060930305, 0, 1, 2, 2, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								
								case -1060930305:
									func_7(12, 1);
									func_6(134, 1);
									unk_0x1164A75E490C27B6(joaat("sp_final_decision"), 1, 1);
									break;
								
								case -1817481777:
									func_7(12, 2);
									func_6(134, 1);
									unk_0x1164A75E490C27B6(joaat("sp_final_decision"), 3, 1);
									break;
								
								default:
									if (!func_5(0))
									{
										bVar0 = false;
									}
									else if (iLocal_28)
									{
										if (func_4())
										{
											iLocal_28 = 0;
										}
									}
									break;
								}
							}
						}
					}
				}
		}
		wait(0);
	}
	func_3(20);
	Global_100720 = 0;
	func_1();
	func_43();
}

int func_1()
{
	if (func_2(0))
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

int func_2(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

int func_3(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113648.f_9087.f_99.f_219[iVar0], bVar1))
	{
		unk_0x8744D2E3FC95740E(&(Global_113648.f_9087.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

int func_4()
{
	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0)
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

void func_6(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_113648.f_9087.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_113648.f_9087.f_99.f_58[iParam0] = iParam1;
}

void func_7(int iParam0, int iParam1)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_113648.f_9087.f_99.f_205[iParam0] == iParam1)
	{
		return;
	}
	Global_113648.f_9087.f_99.f_205[iParam0] = iParam1;
}

int func_8(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<15> Var0;
	int iVar1;
	
	if (func_2(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == bParam2)
	{
		return 0;
	}
	if (((bParam2 != 144 && bParam2 != 0) && bParam2 != 1) && bParam2 != 2)
	{
		return 0;
	}
	if (Global_113648.f_7690.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_113648.f_7690.f_911 == Var0.f_0)
		{
			Global_113648.f_7690.f_911 = -1;
		}
		Var0.f_3 = func_11(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (unk_0x1DD05E817C89C737() + iParam5);
		Var0.f_1 = iParam10;
		iVar1 = 0;
		unk_0x0B0C9A0F9AAEB7F0(&iVar1, bParam2);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_1), false);
		unk_0x8744D2E3FC95740E(&(Var0.f_1), true);
		if (iParam1 == 0)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_1), 10);
		}
		Global_113648.f_7690[Global_113648.f_7690.f_136 /*15*/] = { Var0 };
		Global_113648.f_7690.f_136++;
		func_9(bParam2);
		return 1;
	}
	return 0;
}

void func_9(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_10(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_7690.f_136)
	{
		if (BitTest(Global_113648.f_7690[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_113648.f_7690[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_113648.f_7690[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_113648.f_7690.f_764)
	{
		if (BitTest(Global_113648.f_7690.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_113648.f_7690.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_113648.f_7690.f_919[bParam0] = iVar1;
}

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_12()
{
	return Global_113648.f_7690.f_911;
}

int func_13()
{
	if (Global_20383.f_1 > 3)
	{
		unk_0x8744D2E3FC95740E(&Global_8254, false);
		func_23(0);
		return 0;
	}
	unk_0x0B0C9A0F9AAEB7F0(&Global_8254, false);
	if (func_14(0, 0, 1, 1))
	{
		return 1;
	}
	unk_0x8744D2E3FC95740E(&Global_8254, false);
	return 0;
}

int func_14(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_78558)
	{
		if (((iParam0 != 17 && iParam0 != 3) && iParam0 != 23) && iParam0 != 1)
		{
			return 0;
		}
		if (!BitTest(Global_4542297, 14))
		{
			if (iParam0 == 17)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_4542297, 14);
				unk_0x0B0C9A0F9AAEB7F0(&Global_4542297, 16);
			}
			if (iParam0 == 3)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_4542297, 14);
				unk_0x0B0C9A0F9AAEB7F0(&Global_4542297, 15);
			}
			if (iParam0 == 23)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_4542297, 14);
				unk_0x0B0C9A0F9AAEB7F0(&Global_4542297, 27);
			}
			if (iParam0 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_4542297, 14);
				unk_0x0B0C9A0F9AAEB7F0(&Global_4542297, 29);
			}
		}
		if (Global_8260[iParam0 /*15*/].f_9 == 0)
		{
			func_20();
		}
		if (unk_0x486FF5D06E9659F1(Global_8260[iParam0 /*15*/].f_9) > 0)
		{
			unk_0x8744D2E3FC95740E(&Global_4542297, 14);
			unk_0x8744D2E3FC95740E(&Global_4542297, 16);
			unk_0x8744D2E3FC95740E(&Global_4542297, 15);
			unk_0x8744D2E3FC95740E(&Global_4542297, 27);
			unk_0x8744D2E3FC95740E(&Global_4542297, 29);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_19();
	if (Global_20383.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_5(0) == 1)
		{
			return 0;
		}
	}
	if (Global_20349 == 1)
	{
		return 0;
	}
	if (Global_20383.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!unk_0xF40767E41852FB72(Global_20380))
	{
		if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_20383.f_1 < 4)
			{
				func_18("cellphone_flashhand");
				if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
				{
					Global_20380 = start_new_script("cellphone_flashhand", 1424);
				}
				unk_0xFD49725F3FE7EE13("cellphone_flashhand");
			}
		}
	}
	while (!Global_20365)
	{
		wait(0);
	}
	func_20();
	func_15();
	if (unk_0x486FF5D06E9659F1(Global_8260[iParam0 /*15*/].f_9) == 0)
	{
		Global_8859 = 0;
		Global_20383.f_1 = 7;
		func_18(&(Global_8260[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (unk_0x486FF5D06E9659F1(Global_8260[iParam0 /*15*/].f_9) == 0)
			{
				Global_20381 = start_new_script(&(Global_8260[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (unk_0x486FF5D06E9659F1(Global_8260[iParam0 /*15*/].f_9) == 0)
		{
			Global_20381 = start_new_script(&(Global_8260[iParam0 /*15*/].f_5), 2552);
		}
		unk_0xFD49725F3FE7EE13(&(Global_8260[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_15()
{
	if (Global_78558 == 0)
	{
		Global_8260[14 /*15*/].f_4 = -99;
		Global_8260[4 /*15*/].f_4 = -99;
		if (Global_2694521)
		{
			if (func_17(14))
			{
				func_16(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_16(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_16(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_16(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_8260[iParam0 /*15*/]), sParam1, 16);
	Global_8260[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_8260[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8260[iParam0 /*15*/].f_9 = unk_0x70E57E9927B6BA58(sParam3);
	Global_8260[iParam0 /*15*/].f_10 = iParam4;
	Global_8260[iParam0 /*15*/].f_11 = iParam5;
	Global_8260[iParam0 /*15*/].f_12 = iParam6;
	Global_8260[iParam0 /*15*/].f_13 = iParam7;
	Global_8260[iParam0 /*15*/].f_14 = iParam8;
	if (Global_8260[iParam0 /*15*/].f_12 == 0)
	{
		Global_8260[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_8260[iParam0 /*15*/].f_13 == 0)
	{
		Global_8260[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_8260[iParam0 /*15*/].f_14 == 0)
	{
		Global_8260[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_17(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_18(char* sParam0)
{
	unk_0x97A5024CE91641F1(sParam0);
	while (!unk_0xA6E4F7A73ABC4A76(sParam0))
	{
		wait(0);
	}
}

void func_19()
{
	if (func_17(14))
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
		Global_20383 = func_30();
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

void func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_8260[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_78558 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_22(iVar2, Global_20383) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_16(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_43257 == 15 && func_2(0) == 0) && Global_8258 == 0)
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_20587 = 0;
			Global_8259 = 255;
		}
		else
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_20587 = 1;
			Global_8259 = 42;
		}
		if (iVar1 == 1)
		{
			func_16(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_16(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_113648.f_14053.f_89 == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_113648.f_14053.f_88 == 1)
		{
			func_16(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_16(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_16(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_16(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_16(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_16(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_16(21, "CELL_37", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (BitTest(Global_4542297, 4) == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_16(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_16(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_16(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_16(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_16(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_16(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_16(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_16(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!BitTest(Global_4542297, 4) == 1)
		{
			if (Global_1836102)
			{
				func_16(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4542297, 20) == 1)
			{
				func_16(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4542297, 22) == 1)
			{
				func_16(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4542297, 26) == 1)
			{
				if (func_21())
				{
					func_16(23, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
				}
				else
				{
					func_16(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
				}
			}
		}
		if ((((BitTest(Global_4542297, 4) == 0 && Global_1836102 == 0) && BitTest(Global_4542297, 20) == 0) && BitTest(Global_4542297, 22) == 0) && BitTest(Global_4542297, 26) == 0)
		{
			if (func_21())
			{
				func_16(23, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
			}
			else
			{
				func_16(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
			}
		}
	}
}

int func_21()
{
	if (Global_78558)
	{
		if (Global_1836499 || Global_1836500 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_22(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2028[iParam0 /*29*/].f_19[iParam1];
}

void func_23(int iParam0)
{
	if (func_27())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_26())
		{
			func_25(1, 1);
		}
		else
		{
			func_25(0, 0);
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
	if (!func_24())
	{
		Global_20383.f_1 = 3;
	}
}

int func_24()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_25(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_5(0))
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

bool func_26()
{
	return BitTest(Global_1962996, 5);
}

bool func_27()
{
	return BitTest(Global_1962996, 19);
}

int func_28()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98159.f_44 == 1;
	}
	return 0;
}

int func_29()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_30()
{
	func_31();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_31()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_33(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_32(unk_0x4A8C381C258A124D());
			if (func_10(iVar0) && (!func_17(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_10(Global_113648.f_2365.f_539.f_4321))
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
	if (func_10(iParam0))
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
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113648.f_9087.f_99.f_58[iParam0];
}

int func_36(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

int func_37(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<15> Var0;
	
	if (func_2(0))
	{
		return 0;
	}
	if (bParam2 < 3)
	{
		if (BitTest(iParam1, bParam2))
		{
			return 0;
		}
	}
	if (iParam1 < 1 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam4 <= 0)
	{
		return 0;
	}
	if (Global_113648.f_7690.f_650 < 30)
	{
		Var0.f_0 = iParam0;
		if (Global_113648.f_7690.f_911 == Var0.f_0)
		{
			Global_113648.f_7690.f_911 = -1;
		}
		Var0.f_1 = 0;
		Var0.f_6 = bParam2;
		Var0.f_2 = iParam1;
		Var0.f_14 = iParam3;
		Var0.f_3 = iParam6;
		Var0.f_7 = -1;
		Var0.f_8 = 0;
		Var0.f_9 = -1;
		Var0.f_4 = (unk_0x1DD05E817C89C737() + iParam4);
		Var0.f_9 = iParam5;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_1), false);
		unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_1), 6);
		Global_113648.f_7690.f_199[Global_113648.f_7690.f_650 /*15*/] = { Var0 };
		Global_113648.f_7690.f_650++;
		return 1;
	}
	return 0;
}

int func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_113648.f_7690.f_136)
	{
		if (Global_113648.f_7690[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_7690.f_650)
	{
		if (Global_113648.f_7690.f_199[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_7690.f_198)
	{
		if (Global_113648.f_7690.f_137[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_7690.f_764)
	{
		if (Global_113648.f_7690.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_7690.f_866)
	{
		if (Global_113648.f_7690.f_765[iVar0 /*10*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_39()
{
	Global_100720 = 1;
}

void func_40(int iParam0)
{
	if (((((iParam0 == 144 || iParam0 == 145) || iParam0 == 161) || iParam0 == 191) || iParam0 == 190) || iParam0 == 162)
	{
		return;
	}
	Global_43809[iParam0] = unk_0x1DD05E817C89C737();
}

void func_41()
{
	Global_43808 = unk_0x1DD05E817C89C737();
}

int func_42(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113648.f_9087.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_9087.f_99.f_219[iVar0]), bVar1);
	return 1;
}

void func_43()
{
	func_44(-1615086084);
	func_44(-1989308064);
	func_44(-1970925435);
	func_44(-1060930305);
	func_44(-1817481777);
	Global_8258 = 0;
	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
	unk_0xBBC29EBE6E1A48FA();
}

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_113648.f_7690.f_136)
	{
		if (Global_113648.f_7690[iVar0 /*15*/] == iParam0)
		{
			if (Global_43804 != iVar0)
			{
				func_55(iVar0);
				func_48(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_7690.f_198)
	{
		if (Global_113648.f_7690.f_137[iVar0 /*15*/] == iParam0)
		{
			func_48(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_7690.f_650)
	{
		if (Global_113648.f_7690.f_199[iVar0 /*15*/] == iParam0)
		{
			func_47(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_7690.f_764)
	{
		if (Global_113648.f_7690.f_651[iVar0 /*14*/] == iParam0)
		{
			func_46(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_7690.f_866)
	{
		if (Global_113648.f_7690.f_765[iVar0 /*10*/] == iParam0)
		{
			func_45(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_45(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_113648.f_7690.f_866)
	{
		return;
	}
	if (Global_113648.f_7690.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_113648.f_7690.f_866 - 2))
		{
			Global_113648.f_7690.f_765[iVar0 /*10*/] = { Global_113648.f_7690.f_765[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_113648.f_7690.f_866 > 0)
	{
		Global_113648.f_7690.f_765[(Global_113648.f_7690.f_866 - 1) /*10*/] = { Var1 };
		Global_113648.f_7690.f_866 = (Global_113648.f_7690.f_866 - 1);
	}
}

void func_46(int iParam0)
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_113648.f_7690.f_764)
	{
		return;
	}
	if (Global_113648.f_7690.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_113648.f_7690.f_764 - 2))
		{
			Global_113648.f_7690.f_651[iVar0 /*14*/] = { Global_113648.f_7690.f_651[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_113648.f_7690.f_764 > 0)
	{
		Global_113648.f_7690.f_651[(Global_113648.f_7690.f_764 - 1) /*14*/] = { Var1 };
		Global_113648.f_7690.f_764 = (Global_113648.f_7690.f_764 - 1);
	}
	func_9(0);
	func_9(1);
	func_9(2);
}

void func_47(int iParam0)
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < Global_113648.f_7690.f_650)
	{
		if (Global_113648.f_7690.f_199[iVar1 /*15*/] == iParam0)
		{
			iVar2 = iVar1;
			while (iVar2 <= (Global_113648.f_7690.f_650 - 2))
			{
				Global_113648.f_7690.f_199[iVar2 /*15*/] = { Global_113648.f_7690.f_199[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_113648.f_7690.f_199[(Global_113648.f_7690.f_650 - 1) /*15*/] = { Var0 };
			Global_113648.f_7690.f_650 = (Global_113648.f_7690.f_650 - 1);
			return;
		}
		iVar1++;
	}
}

void func_48(int iParam0)
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < Global_113648.f_7690.f_198)
	{
		if (Global_113648.f_7690.f_137[iVar1 /*15*/] == iParam0)
		{
			func_49(Global_113648.f_7690.f_137[iVar1 /*15*/].f_6);
			iVar2 = iVar1;
			while (iVar2 <= (Global_113648.f_7690.f_198 - 2))
			{
				Global_113648.f_7690.f_137[iVar2 /*15*/] = { Global_113648.f_7690.f_137[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_113648.f_7690.f_137[(Global_113648.f_7690.f_198 - 1) /*15*/] = { Var0 };
			Global_113648.f_7690.f_198 = (Global_113648.f_7690.f_198 - 1);
			return;
		}
		iVar1++;
	}
}

int func_49(int iParam0)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 169)
	{
		if (func_22(iParam0, Global_20383) == 1)
		{
			func_54(iParam0, Global_20383, 0);
			if (func_53(iParam0, Global_20383) == 0)
			{
				iVar0 = Global_20383;
				func_50(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 169)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_52(iParam0, iVar0, 0);
			func_51(iParam0, iVar0, 0);
		}
	}
}

void func_51(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2028[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113648.f_28052[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_52(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2028[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113648.f_28052[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_53(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

void func_54(int iParam0, int iParam1, int iParam2)
{
	Global_2028[iParam0 /*29*/].f_19[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113648.f_28052[iParam0 /*29*/].f_19[iParam1] = iParam2;
	}
}

void func_55(int iParam0)
{
	bool bVar0;
	var uVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_113648.f_7690.f_136)
	{
		return;
	}
	uVar1 = Global_113648.f_7690[iParam0 /*15*/].f_2;
	if (Global_113648.f_7690.f_136 > 1)
	{
		bVar0 = iParam0;
		while (bVar0 <= (Global_113648.f_7690.f_136 - 2))
		{
			Global_113648.f_7690[bVar0 /*15*/] = { Global_113648.f_7690[bVar0 + 1 /*15*/] };
			bVar0++;
		}
	}
	if (Global_113648.f_7690.f_136 > 0)
	{
		Global_113648.f_7690[(Global_113648.f_7690.f_136 - 1) /*15*/] = { Var2 };
		Global_113648.f_7690.f_136 = (Global_113648.f_7690.f_136 - 1);
	}
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (BitTest(uVar1, bVar0))
		{
			func_9(bVar0);
		}
		bVar0++;
	}
}
