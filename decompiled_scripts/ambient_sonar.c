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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	struct<8> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	struct<11> Local_48[30];
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	bLocal_40 = true;
	bLocal_41 = true;
	iLocal_54 = -1;
	iLocal_55 = 5;
	if (unk_0x96CFB880BAC634CE(210))
	{
		func_126();
	}
	if (unk_0x486FF5D06E9659F1(joaat("ambient_sonar")) > 1)
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	func_125(13);
	func_124(0);
	while (true)
	{
		wait(0);
		func_123(unk_0x4A8C381C258A124D());
		switch (iLocal_51)
		{
			case 0:
				func_117();
				break;
			
			case 1:
				func_109();
				break;
			
			case 2:
				func_1();
				break;
			
			case 3:
				func_126();
				break;
		}
	}
}

void func_1()
{
	iLocal_52 = 0;
	if (func_108(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if (func_75(&Local_42, &Local_48))
			{
				func_31();
			}
			else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
			{
				uLocal_49 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				func_124(1);
				func_13(0);
				if (func_108(unk_0x4A8C381C258A124D()))
				{
					if (func_11(&Local_42, &Local_48, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), &iLocal_54))
					{
						func_8();
					}
				}
				unk_0xDAE61414743C8D1D(0);
				func_7();
				func_6(1);
			}
			else if (func_108(uLocal_49))
			{
				if (vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(uLocal_49, 1)) > 62500f)
				{
					func_5();
				}
				else if (!unk_0xC450B06E5AAA0985(uLocal_50))
				{
					uLocal_50 = func_2(uLocal_49, 0, 0);
					unk_0x4C905FB262965D5D(uLocal_50, 308);
				}
			}
			else
			{
				func_7();
			}
		}
	}
}

int func_2(var uParam0, bool bParam1, bool bParam2)
{
	return func_3(uParam0, !bParam1, bParam2);
}

int func_3(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(uParam0);
	if (unk_0x55B80B6E7AB61270(uParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_4(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
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
		unk_0x5D3946F818C6B331(uVar0, func_4(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(uParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_4(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_4(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_5()
{
	func_7();
	if (unk_0xFC8BFE4B41177C22(uLocal_49))
	{
		unk_0x68298CA6191CDFDB(&uLocal_49);
	}
}

void func_6(int iParam0)
{
	iLocal_51 = iParam0;
}

void func_7()
{
	if (unk_0xC450B06E5AAA0985(uLocal_50))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_50);
	}
}

void func_8()
{
	func_9(func_10(iLocal_54), 1, 1);
	iLocal_53 = 1;
}

void func_9(struct<3> Param0, bool bParam1, bool bParam2)
{
	Global_22831 = { Param0 };
	unk_0x8744D2E3FC95740E(&Global_8254, 30);
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 29);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8254, 29);
	}
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8255, true);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8255, true);
	}
}

Vector3 func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1435.61f, 5781.12f, -29.87f;
			break;
		
		case 1:
			return -1956.54f, -1125.07f, -37.21f;
			break;
		
		case 2:
			return 2752.88f, -1212.78f, -22.41f;
			break;
		
		case 3:
			return 3188.04f, -1668.19f, -146.88f;
			break;
		
		case 4:
			return 2555.04f, -2372.47f, -112.01f;
			break;
		
		case 5:
			return 2945.9f, 6537.41f, -27.36f;
			break;
		
		case 6:
			return -1266.69f, 6261.75f, -34.17f;
			break;
		
		case 7:
			return 3034.72f, 6550.42f, -35.2f;
			break;
		
		case 8:
			return 1694.53f, 6991.69f, -137.62f;
			break;
		
		case 9:
			return 1233.43f, 7081.15f, -141.72f;
			break;
		
		case 10:
			return -3413.73f, 830.23f, -12.95f;
			break;
		
		case 11:
			return 1422.5f, 6854.67f, -38.2f;
			break;
		
		case 12:
			return -3345.1f, 3547.8f, -59.1f;
			break;
		
		case 13:
			return -3437.93f, 3069.57f, -54.85f;
			break;
		
		case 14:
			return -2909.28f, 4204.32f, -111.62f;
			break;
		
		case 15:
			return -3179.12f, 2151.28f, -31.86f;
			break;
		
		case 16:
			return 4146.09f, 3825.86f, -40.96f;
			break;
		
		case 17:
			return 2716.61f, 6956.91f, -157.17f;
			break;
		
		case 18:
			return 2487.5f, 7001.69f, -143.56f;
			break;
		
		case 19:
			return -3043.23f, -212.16f, -23.48f;
			break;
		
		case 20:
			return -2871.1f, 4268.19f, -152.47f;
			break;
		
		case 21:
			return -777.21f, 6726.71f, -30.89f;
			break;
		
		case 22:
			return -3008.33f, 2877.73f, -27.76f;
			break;
		
		case 23:
			return -1843.12f, -1260.67f, -22.17f;
			break;
		
		case 24:
			return -2591.62f, -470.34f, -30.4f;
			break;
		
		case 25:
			return 3824.99f, 3729.17f, -16.17f;
			break;
		
		case 26:
			return 3885.44f, 3797.19f, -24.26f;
			break;
		
		case 27:
			return 2153.9f, -2826.37f, -50.76f;
			break;
		
		case 28:
			return 1873.5f, -3012.6f, -47f;
			break;
		
		case 29:
			return -2325.06f, -1046.7f, -70.67f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_11(var uParam0, int iParam1, struct<3> Param2, int iParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = 0;
	fVar1 = 0f;
	fVar2 = -1f;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!func_12(&(uParam0->f_1), iVar0))
		{
			fVar1 = vdist2(Param2, (iParam1[iVar0 /*11*/])->f_3);
			if (fVar2 == -1f || fVar1 < fVar2)
			{
				*iParam3 = iVar0;
				fVar2 = fVar1;
			}
		}
		iVar0++;
	}
	return *iParam3 != -1;
}

int func_12(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return 0;
	}
	if (iParam1 <= 31)
	{
		return BitTest(*uParam0, iParam1);
	}
	return BitTest(uParam0->f_1, (iParam1 - 32));
}

int func_13(int iParam0)
{
	if (func_14(17, 0, 1, 0))
	{
		if (iParam0 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 22);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&Global_8254, 22);
		}
		return 1;
	}
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
			func_27();
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
	func_20();
	if (Global_20383.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_19(0) == 1)
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
	func_27();
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

int func_19(int iParam0)
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

void func_20()
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
		Global_20383 = func_21();
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

var func_21()
{
	func_22();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_22()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_25(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_24(unk_0x4A8C381C258A124D());
			if (func_23(iVar0) && (!func_17(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_23(Global_113648.f_2365.f_539.f_4321))
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
	return iParam0 < 3;
}

int func_24(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return func_26(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_26(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_27()
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
			if (func_30(iVar2, Global_20383) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_16(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_43257 == 15 && func_29(0) == 0) && Global_8258 == 0)
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
				if (func_28())
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
			if (func_28())
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

int func_28()
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

int func_29(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

int func_30(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2028[iParam0 /*29*/].f_19[iParam1];
}

void func_31()
{
	func_54(3, 250000);
	func_47(299, 0, 0);
	func_34(20, 1);
	func_32();
	func_6(3);
}

void func_32()
{
	int iVar0;
	
	iVar0 = func_33(65);
	Global_2645068[iVar0 /*83*/] = 65;
	StringCopy(&(Global_2645068[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2645068[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2645068[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_34(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_35(iParam0, iParam1);
}

int func_35(int iParam0, int iParam1)
{
	if (func_17(14) && !func_46(iParam0))
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
	if (func_45(&Global_4542597))
	{
		if (func_43(&Global_4542597, iParam0))
		{
			return 0;
		}
		if (func_36(&Global_4542597, iParam0))
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

int func_36(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_46(iParam1))
	{
		return 0;
	}
	if (func_43(uParam0, iParam1))
	{
		return 0;
	}
	if (func_42(uParam0) < 0f)
	{
		func_41(uParam0, 0);
	}
	func_39(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_37(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_37(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_46(iParam1))
	{
		return 0;
	}
	if (func_43(uParam0, iParam1))
	{
		return 0;
	}
	if (func_42(uParam0) < 0f)
	{
		func_41(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_38(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_38(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_39(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_40(uParam0, iVar0);
		iVar0++;
	}
	func_41(uParam0, (Global_4542596 - 0.5f));
}

void func_40(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_41(var uParam0, float fParam1)
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

float func_42(var uParam0)
{
	return uParam0->f_80;
}

bool func_43(var uParam0, int iParam1)
{
	return func_44(uParam0, iParam1) != -1;
}

int func_44(var uParam0, int iParam1)
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

bool func_45(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_46(int iParam0)
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

void func_47(int iParam0, int iParam1, int iParam2)
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
		func_52((891 + iParam0), 1, -1);
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
		Global_113648.f_10196[iParam0 /*12*/].f_10 = iParam1;
		Global_113648.f_10196[iParam0 /*12*/].f_11 = iParam2;
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
		func_48();
	}
}

void func_48()
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
		func_51(13, floor(Global_113648.f_10196.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_78558)
		{
			if (func_50() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113382 = 0;
				}
				if (!Global_63362)
				{
					func_49();
				}
			}
		}
	}
}

int func_49()
{
	if (func_29(0))
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

int func_50()
{
	return Global_32163;
}

int func_51(int iParam0, int iParam1)
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

void func_52(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_53();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

int func_53()
{
	return Global_1574918;
}

void func_54(int iParam0, int iParam1)
{
	int iVar0;
	
	func_56(Global_113648.f_24906[iParam0 /*4*/], func_74(iParam0), iParam1, 0, 0);
	switch (iParam0)
	{
		case 3:
			Global_113648.f_24906.f_69 = (Global_113648.f_24906.f_69 + iParam1);
			break;
		
		case 2:
			Global_113648.f_24906.f_70 = (Global_113648.f_24906.f_70 + iParam1);
			break;
		
		case 0:
			Global_113648.f_24906.f_71 = (Global_113648.f_24906.f_71 + iParam1);
			break;
	}
	unk_0xDF7F16323520B858(func_55(iParam0, 1), &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x1164A75E490C27B6(func_55(iParam0, 1), iVar0, 1);
}

int func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_towi");
					break;
				
				case 1:
					return joaat("prop_earned_towi");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_taxi");
					break;
				
				case 1:
					return joaat("prop_earned_taxi");
					break;
				
				case 2:
					return joaat("prop_missions_taxi");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_traf");
					break;
				
				case 1:
					return joaat("prop_earned_traf");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_soco");
					break;
				
				case 1:
					return joaat("prop_earned_soco");
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cmsh");
					break;
				
				case 1:
					return joaat("prop_earned_cmsh");
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cinv");
					break;
				
				case 1:
					return joaat("prop_earned_cinv");
					break;
				
				case 2:
					return joaat("prop_missions_cinv");
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cind");
					break;
				
				case 1:
					return joaat("prop_earned_cind");
					break;
				
				case 2:
					return joaat("prop_missions_cind");
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cinm");
					break;
				
				case 1:
					return joaat("prop_earned_cinm");
					break;
				
				case 2:
					return joaat("prop_missions_cinm");
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_golf");
					break;
				
				case 1:
					return joaat("prop_earned_golf");
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cscr");
					break;
				
				case 1:
					return joaat("prop_earned_cscr");
					break;
				
				case 2:
					return joaat("prop_missions_cscr");
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_weed");
					break;
				
				case 1:
					return joaat("prop_earned_weed");
					break;
				
				case 2:
					return joaat("prop_missions_weed");
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barte");
					break;
				
				case 1:
					return joaat("prop_earned_barte");
					break;
				
				case 2:
					return joaat("prop_missions_barte");
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barpi");
					break;
				
				case 1:
					return joaat("prop_earned_barpi");
					break;
				
				case 2:
					return joaat("prop_missions_barpi");
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barhe");
					break;
				
				case 1:
					return joaat("prop_earned_barhe");
					break;
				
				case 2:
					return joaat("prop_missions_barhe");
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barho");
					break;
				
				case 1:
					return joaat("prop_earned_barho");
					break;
				
				case 2:
					return joaat("prop_missions_barho");
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_strip");
					break;
				
				case 1:
					return joaat("prop_earned_strip");
					break;
			}
			break;
	}
	return joaat("prop_bought_towi");
}

void func_56(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_73(iParam0) == 3)
	{
		return;
	}
	if (func_73(iParam0) == 4)
	{
		return;
	}
	func_57(func_73(iParam0), 1, iParam1, iParam2, 0);
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

int func_57(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_72();
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
					func_71(99, 1);
					func_70(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_70(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_70(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_69(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_66(5))
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
							func_70(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_70(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_70(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_66(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_70(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_70(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_70(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_70(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_70(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_70(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_70(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_70(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_70(joaat("sp2_money_spent_property"), iParam3);
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
									func_70(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_70(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_70(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_70(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_70(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_70(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_66(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_70(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_70(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_70(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_70(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_70(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_70(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_65(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_71(95, iParam3);
					break;
				
				case 1:
					func_71(97, iParam3);
					break;
				
				case 2:
					func_71(96, iParam3);
					break;
			}
			func_71(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_60(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_60(bVar1);
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
					func_70(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_70(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_70(joaat("sp2_total_cash_earned"), iParam3);
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
	func_59(iParam0);
	if (Global_43257 == 15)
	{
		func_58(0);
	}
	return 1;
}

void func_58(bool bParam0)
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

void func_59(int iParam0)
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

void func_60(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_52(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_52(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_52(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_52(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_63(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_63(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_63(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_63(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_63(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_63(8277, 0, -1, 1, 0);
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
	else if (BitTest(Global_113648.f_20566.f_471, bParam0) || BitTest(Global_2359296[func_62() /*5568*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0x8744D2E3FC95740E(&(Global_113648.f_20566.f_471), bParam0);
		unk_0x8744D2E3FC95740E(&(Global_2359296[func_62() /*5568*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xCCDB0041859B85A6("COUP_RED");
		unk_0xACF853FB3F6EA7D4(func_61(bParam0));
		unk_0x5C7E2225D7451992(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_61(bool bParam0)
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

int func_62()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_63(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805029[iParam0 /*3*/][func_64(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
	}
}

int func_64(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_53();
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

void func_65(int iParam0)
{
	func_71(93, iParam0);
	func_71(29, iParam0);
	func_71(30, iParam0);
}

int func_66(int iParam0)
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
		return func_68(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_68(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_68(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_68(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x39D1D336459711BE();
		iVar1 = func_67(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x39D1D336459711BE();
		iVar3 = func_67(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x39D1D336459711BE();
		iVar5 = func_67(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x39D1D336459711BE();
		iVar7 = func_67(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x39D1D336459711BE();
		iVar9 = func_67(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x39D1D336459711BE();
		iVar11 = func_67(8277, -1, 0);
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
	return BitTest(Global_2359296[func_62() /*5568*/].f_681.f_10, iParam0);
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805029[iParam0 /*3*/][func_64(iParam1)];
		if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_68(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_53();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

int func_69(bool bParam0)
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
		func_51(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_34(27, 1);
	return 1;
}

void func_70(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDF7F16323520B858(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x1164A75E490C27B6(iParam0, iVar0, 1);
}

void func_71(int iParam0, int iParam1)
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

void func_72()
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

int func_73(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_17;
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 99;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 101;
			break;
		
		case 3:
			return 102;
			break;
		
		case 4:
			return 103;
			break;
		
		case 5:
			return 104;
			break;
		
		case 6:
			return 105;
			break;
		
		case 7:
			return 106;
			break;
		
		case 8:
			return 107;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 109;
			break;
		
		case 11:
			return 110;
			break;
		
		case 12:
			return 111;
			break;
		
		case 13:
			return 112;
			break;
		
		case 14:
			return 113;
			break;
		
		case 15:
			return 25;
			break;
	}
	return 0;
}

int func_75(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	
	unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D());
	Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	iVar0 = 0;
	while (iVar0 < iLocal_55)
	{
		bVar2 = func_12(&(uParam0->f_1), uParam0->f_10);
		if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
		{
			if (!bVar2)
			{
				if (!func_107((iParam1[uParam0->f_10 /*11*/])->f_6, 0f, 0f, 0f, 0))
				{
					func_105(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 0);
				}
				else
				{
					func_105(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bVar2)
		{
			if (func_92(uParam0, iParam1, Var1))
			{
				if (func_11(uParam0, iParam1, Var1, &iLocal_54))
				{
					func_54(3, 23000);
					func_8();
				}
			}
		}
		func_89(uParam0->f_10, bVar2);
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1)
		{
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (!Global_78819)
	{
		func_82(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 3, &iLocal_56, &uLocal_57, "SUBM_TITLE", "SUBM_COLLECT");
	}
	if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
	{
		func_81();
		func_124(0);
		func_76(0);
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

void func_76(int iParam0)
{
	if (func_80())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_79())
		{
			func_78(1, 1);
		}
		else
		{
			func_78(0, 0);
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
	if (!func_77())
	{
		Global_20383.f_1 = 3;
	}
}

int func_77()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_78(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_19(0))
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

bool func_79()
{
	return BitTest(Global_1962996, 5);
}

bool func_80()
{
	return BitTest(Global_1962996, 19);
}

void func_81()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 30);
}

void func_82(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, char* sParam6, char* sParam7)
{
	var uVar0;
	
	func_88(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*uParam5 = unk_0x8DE4F68A9728925E("MIDSIZED_MESSAGE");
				if (unk_0xA0C7B98BCF1EEF9E(*uParam5))
				{
					uVar0 = unk_0xCA369FBC0DE29517();
					if (iParam3 == 6)
					{
						unk_0xBF3D28CA44F3BE2D(uVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						unk_0xBF3D28CA44F3BE2D(uVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				unk_0x88F483FBD433696A(*uParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0x882AEFD55B8D51FB(sParam6);
				unk_0xCFAD3D478C87321A();
				unk_0x882AEFD55B8D51FB(sParam7);
				unk_0x511D14ED2DA887E1(func_84(iParam3));
				unk_0xCFAD3D478C87321A();
				unk_0xE6B753D52F4CA222();
				*uParam2 = unk_0x1DD05E817C89C737();
				*iParam4++;
				break;
			
			case 2:
				if ((unk_0x1DD05E817C89C737() - *uParam2) > 7000)
				{
					unk_0x88F483FBD433696A(*uParam5, "SHARD_ANIM_OUT");
					unk_0x330108B080A2132F(1);
					unk_0x74BF156C860580D4(0.33f);
					unk_0xE6B753D52F4CA222();
					*iParam4++;
				}
				else if (!func_83())
				{
					if (unk_0xA0C7B98BCF1EEF9E(*uParam5))
					{
						func_88(1);
						unk_0xA91A4C18A2DB01BD(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0x1DD05E817C89C737() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_83())
				{
					if (unk_0xA0C7B98BCF1EEF9E(*uParam5))
					{
						func_88(1);
						unk_0xA91A4C18A2DB01BD(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0xA0C7B98BCF1EEF9E(*uParam5))
				{
					unk_0xD314260005F064BF(uParam5);
				}
				func_88(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

int func_83()
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

int func_84(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_87(iParam0))
		{
			if (BitTest(Global_113648.f_10051.f_108, func_86(func_87(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		unk_0xDF7F16323520B858(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		unk_0xDF7F16323520B858(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		unk_0xDF7F16323520B858(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_87(iParam0))
		{
			iVar2 = (func_85(iParam0) + iVar1);
			if (func_68(iVar2, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_85(int iParam0)
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_86(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_87(int iParam0)
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_88(int iParam0)
{
	if (Global_78826 != iParam0)
	{
		Global_78826 = iParam0;
	}
}

void func_89(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (func_91(iParam0) == 0)
	{
		return;
	}
	if (iLocal_58[iParam0] == -1)
	{
		if (!bParam1 && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_48[iParam0 /*11*/].f_3) < (100f * 100f))
			{
				if (func_90(&iVar0))
				{
					unk_0xACA69FD04F5F38B9(iVar0, Local_48[iParam0 /*11*/].f_3, 8f);
					iLocal_58[iParam0] = iVar0;
				}
			}
		}
	}
	else if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_48[iParam0 /*11*/].f_3) > (105f * 105f))
		{
			if (iLocal_58[iParam0] >= 0 && iLocal_58[iParam0] < 8)
			{
				unk_0x85183ED7096BA9E5(iLocal_58[iParam0]);
				iLocal_58[iParam0] = -1;
			}
		}
	}
}

int func_90(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 0;
	while (*uParam0 < 8)
	{
		if (!unk_0x67A272C42918EF9F(*uParam0))
		{
			return 1;
		}
		*uParam0++;
	}
	*uParam0 = -1;
	return 0;
}

int func_91(int iParam0)
{
	if (iParam0 == 23)
	{
		return 0;
	}
	return 1;
}

int func_92(var uParam0, var uParam1, struct<3> Param2)
{
	bool bVar0;
	
	bVar0 = uParam0->f_10;
	if ((uParam1[bVar0 /*11*/])->f_10)
	{
		if ((uParam1[bVar0 /*11*/])->f_1 != 0)
		{
			if (unk_0x1D56B24774D5E23C((uParam1[bVar0 /*11*/])->f_1) || func_104((uParam1[bVar0 /*11*/])->f_1))
			{
				func_94(uParam0, uParam1, bVar0);
				return 1;
			}
		}
	}
	if (unk_0xB0E14182FAD64944((uParam1[bVar0 /*11*/])->f_1))
	{
		if ((vdist2(Param2, unk_0x80C8AA1625977488((uParam1[bVar0 /*11*/])->f_1)) > (60f * 60f) || func_17(13)) || func_17(14))
		{
			func_93(&((uParam1[bVar0 /*11*/])->f_1));
			(uParam1[bVar0 /*11*/])->f_1 = 0;
			(uParam1[bVar0 /*11*/])->f_10 = 0;
		}
	}
	return 0;
}

void func_93(var uParam0)
{
	if (unk_0xB0E14182FAD64944(*uParam0))
	{
		unk_0xDDFB0941A19702BE(*uParam0);
	}
}

void func_94(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = (func_85(*uParam0) + bParam2);
	func_93(&((uParam1[bParam2 /*11*/])->f_1));
	func_103(&((uParam1[bParam2 /*11*/])->f_2));
	(uParam1[bParam2 /*11*/])->f_1 = 0;
	(uParam1[bParam2 /*11*/])->f_10 = 0;
	func_102(&(uParam0->f_1), bParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_101(*uParam0, bParam2, 1);
	}
	unk_0x97A041099E92C69F(0, 200, 250);
	unk_0x3CAC0DB32E69B1B8(uParam0->f_6, 1f);
	if (bLocal_41)
	{
		func_100(&(uParam0->f_1), bParam2);
	}
	else
	{
		func_98(&(uParam0->f_1));
	}
	func_96();
	unk_0x4E84B27CF8AA616F(iVar0);
	func_95(1, 0);
	func_49();
	uParam0->f_11 = 1;
}

void func_95(int iParam0, int iParam1)
{
	Global_100720.f_7 = iParam0;
	Global_100720.f_8 = iParam1;
}

void func_96()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	unk_0xDF7F16323520B858(func_97(0), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_51(18, iVar0);
	}
	unk_0xDF7F16323520B858(func_97(1), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_51(19, iVar0);
	}
	unk_0xDF7F16323520B858(func_97(3), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_51(20, iVar0);
	}
	iVar2 = ((func_87(0) + func_87(1)) + func_87(3));
	if (iVar2 > 0)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	unk_0x1164A75E490C27B6(joaat("percent_hidden_packages"), iVar3, 1);
}

int func_97(int iParam0)
{
	if (iParam0 == 3)
	{
		return joaat("num_hidden_packages_3");
	}
	if (iParam0 == 1)
	{
		return joaat("num_hidden_packages_0");
	}
	if (iParam0 == 0)
	{
		return joaat("num_hidden_packages_1");
	}
	if (iParam0 == 5)
	{
		return joaat("num_hidden_packages_4");
	}
	return joaat("num_hidden_packages_2");
}

void func_98(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_12(uParam0, iVar0))
		{
			iVar1++;
			func_52((uParam0->f_2 + iVar0), 1, -1);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_99(168, 0);
	}
}

void func_99(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_113648.f_8615[iParam0] = 1;
	Global_113648.f_8615.f_236[iParam0] = (unk_0x1DD05E817C89C737() + iParam1);
}

void func_100(var uParam0, bool bParam1)
{
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	if (bParam1 >= uParam0->f_3)
	{
	}
	if (func_12(uParam0, bParam1))
	{
		uParam0->f_4++;
		func_52((uParam0->f_2 + bParam1), 1, -1);
		if (bLocal_40)
		{
		}
	}
	if (bLocal_40)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_99(168, 0);
	}
}

void func_101(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 < 0 || bParam1 >= 64)
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (bParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_10051.f_122), bParam1);
			}
			else
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_10051.f_122), bParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_10051.f_122.f_1), (bParam1 - 32));
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_113648.f_10051.f_122.f_1), (bParam1 - 32));
		}
	}
	else if (iParam0 == 0)
	{
		if (bParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_10051.f_125), bParam1);
			}
			else
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_10051.f_125), bParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_10051.f_125.f_1), (bParam1 - 32));
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_113648.f_10051.f_125.f_1), (bParam1 - 32));
		}
	}
}

void func_102(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 < 0 || bParam1 >= 64)
	{
		return;
	}
	if (bParam1 <= 31)
	{
		if (bParam2)
		{
			unk_0x0B0C9A0F9AAEB7F0(uParam0, bParam1);
		}
		else
		{
			unk_0x8744D2E3FC95740E(uParam0, bParam1);
		}
		return;
	}
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), (bParam1 - 32));
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(uParam0->f_1), (bParam1 - 32));
	}
}

void func_103(var uParam0)
{
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		unk_0xBC64B805EE071A37(*uParam0, 0);
		unk_0xFE54B8568B2ABD12(uParam0);
	}
}

int func_104(var uParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0xB0E14182FAD64944(uParam0))
	{
		return 0;
	}
	if (func_108(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			iVar1 = unk_0x4B423FAA24E8ABF0(uVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0x80C8AA1625977488(uParam0)) < (5f * 5f) || unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), unk_0xA9D6BD2486442887(uParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_105(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	var uVar0;
	
	if (!uParam0->f_10)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (!func_17(13) && !func_17(14))
			{
				if (!unk_0xB0E14182FAD64944(uParam0->f_1))
				{
					if (vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), uParam0->f_3) <= (50f * 50f))
					{
						unk_0xEC9DAA34BBB4658C(uParam1);
						while (!unk_0x6252BC0DD8A320DB(uParam1))
						{
							unk_0xEC9DAA34BBB4658C(uParam1);
							wait(0);
						}
						if (bParam3)
						{
							func_106(uParam0->f_3);
						}
						unk_0x2094BC4B6731BA68(uParam0->f_3, 2.5f, 0, 0, 0, 0);
						if (bParam4)
						{
							unk_0x0B0C9A0F9AAEB7F0(&uVar0, true);
							uParam0->f_1 = unk_0x6FCBED6282FF5DA5(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, uVar0, -1, iParam5, 1, uParam1);
						}
						else
						{
							unk_0x0B0C9A0F9AAEB7F0(&uVar0, 3);
							unk_0x0B0C9A0F9AAEB7F0(&uVar0, 4);
							unk_0x0B0C9A0F9AAEB7F0(&uVar0, 8);
							unk_0x0B0C9A0F9AAEB7F0(&uVar0, true);
							uParam0->f_1 = unk_0x8D4CAF9A056EA9E4(iParam2, uParam0->f_3, uVar0, -1, 1, uParam1);
						}
						unk_0x55098D9E9AD58806(uParam1);
					}
				}
			}
			if (unk_0xB0E14182FAD64944(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_106(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0x0E171121A3A25363(Param0);
	if (unk_0xF8A8852F99E201DD(uVar0))
	{
		unk_0x74C1590CC91B3930(uVar0);
		while (!unk_0xD0B0D1BD29678350(uVar0))
		{
			wait(0);
		}
		wait(0);
		unk_0xBBB6D0F765409642(uVar0);
	}
}

bool func_107(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_108(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_109()
{
	if (func_108(unk_0x4A8C381C258A124D()))
	{
		if (!unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
		{
			func_124(0);
			func_76(0);
			unk_0xDAE61414743C8D1D(5);
			func_6(2);
		}
		else
		{
			if (!func_116(15))
			{
				func_113("SUBM_HELP1", 1, 0, -1, 10000, 7, 0, 0, 0);
				func_112(15);
			}
			if (!func_111())
			{
				func_124(1);
				if (!iLocal_52 && !Local_42.f_1.f_4 >= Local_42.f_1.f_3)
				{
					func_113("SUBM_TRKHELP", 1, 0, -1, 10000, 7, 0, 0, 0);
					iLocal_52 = 1;
				}
			}
			func_110();
			if (func_75(&Local_42, &Local_48))
			{
				func_31();
			}
		}
	}
}

void func_110()
{
	iLocal_53++;
	if ((iLocal_53 % 30) == 0 || iLocal_54 == -1)
	{
		if (func_11(&Local_42, &Local_48, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), &iLocal_54))
		{
			func_8();
		}
	}
}

int func_111()
{
	if (unk_0x486FF5D06E9659F1(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_112(int iParam0)
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

void func_113(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_114(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_114(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_115();
	}
}

void func_115()
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

int func_116(int iParam0)
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

void func_117()
{
	iLocal_56 = 0;
	func_121();
	func_120(&Local_42, 3, joaat("prop_rad_waste_barrel_01"), "SUBM_COLLECT");
	func_118(&Local_42, joaat("num_hidden_packages_3"), 815, 30);
	if (func_108(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
		{
			unk_0xDAE61414743C8D1D(0);
			func_6(1);
		}
		else
		{
			unk_0xDAE61414743C8D1D(5);
			func_6(2);
		}
	}
}

void func_118(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_6 = iParam1;
	func_119(&(uParam0->f_1), iParam2, iParam3);
}

void func_119(var uParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	if (bLocal_40)
	{
	}
	bVar0 = false;
	while (bVar0 < uParam0->f_3)
	{
		if (func_68((uParam0->f_2 + bVar0), -1))
		{
			iVar1++;
			func_102(uParam0, bVar0, 1);
			if (bLocal_40)
			{
			}
		}
		bVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
}

void func_120(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

void func_121()
{
	int iVar0;
	
	Local_48[0 /*11*/].f_3 = { func_10(0) };
	Local_48[0 /*11*/].f_9 = 179.47f;
	Local_48[1 /*11*/].f_3 = { func_10(1) };
	Local_48[1 /*11*/].f_9 = 104f;
	Local_48[2 /*11*/].f_3 = { func_10(2) };
	Local_48[2 /*11*/].f_9 = 321.5f;
	Local_48[3 /*11*/].f_3 = { func_10(3) };
	Local_48[3 /*11*/].f_9 = -29.79f;
	Local_48[4 /*11*/].f_3 = { func_10(4) };
	Local_48[4 /*11*/].f_9 = -165.6f;
	Local_48[5 /*11*/].f_3 = { func_10(5) };
	Local_48[5 /*11*/].f_9 = 116f;
	Local_48[6 /*11*/].f_3 = { func_10(6) };
	Local_48[6 /*11*/].f_9 = -68.65f;
	Local_48[7 /*11*/].f_3 = { func_10(7) };
	Local_48[7 /*11*/].f_9 = 40f;
	Local_48[8 /*11*/].f_3 = { func_10(8) };
	Local_48[8 /*11*/].f_9 = 40f;
	Local_48[9 /*11*/].f_3 = { func_10(9) };
	Local_48[9 /*11*/].f_9 = 40f;
	Local_48[10 /*11*/].f_3 = { func_10(10) };
	Local_48[10 /*11*/].f_9 = 40f;
	Local_48[11 /*11*/].f_3 = { func_10(11) };
	Local_48[11 /*11*/].f_9 = 27.04f;
	Local_48[12 /*11*/].f_3 = { func_10(12) };
	Local_48[12 /*11*/].f_9 = 40f;
	Local_48[13 /*11*/].f_3 = { func_10(13) };
	Local_48[13 /*11*/].f_9 = 40f;
	Local_48[14 /*11*/].f_3 = { func_10(14) };
	Local_48[14 /*11*/].f_9 = 40f;
	Local_48[15 /*11*/].f_3 = { func_10(15) };
	Local_48[15 /*11*/].f_9 = 40f;
	Local_48[16 /*11*/].f_3 = { func_10(16) };
	Local_48[16 /*11*/].f_6 = { 89.94f, 61.93f, 90.94f };
	Local_48[17 /*11*/].f_3 = { func_10(17) };
	Local_48[17 /*11*/].f_9 = 40f;
	Local_48[18 /*11*/].f_3 = { func_10(18) };
	Local_48[18 /*11*/].f_9 = 40f;
	Local_48[19 /*11*/].f_3 = { func_10(19) };
	Local_48[19 /*11*/].f_9 = 40f;
	Local_48[20 /*11*/].f_3 = { func_10(20) };
	Local_48[20 /*11*/].f_9 = 40f;
	Local_48[21 /*11*/].f_3 = { func_10(21) };
	Local_48[21 /*11*/].f_9 = 40f;
	Local_48[22 /*11*/].f_3 = { func_10(22) };
	Local_48[22 /*11*/].f_9 = 40f;
	Local_48[23 /*11*/].f_3 = { func_10(23) };
	Local_48[23 /*11*/].f_9 = 40f;
	Local_48[24 /*11*/].f_3 = { func_10(24) };
	Local_48[24 /*11*/].f_9 = 40f;
	Local_48[25 /*11*/].f_3 = { func_10(25) };
	Local_48[25 /*11*/].f_9 = 198f;
	Local_48[26 /*11*/].f_3 = { func_10(26) };
	Local_48[26 /*11*/].f_9 = 198f;
	Local_48[27 /*11*/].f_3 = { func_10(27) };
	Local_48[27 /*11*/].f_9 = 198f;
	Local_48[28 /*11*/].f_3 = { func_10(28) };
	Local_48[28 /*11*/].f_9 = 198f;
	Local_48[29 /*11*/].f_3 = { func_10(29) };
	Local_48[29 /*11*/].f_9 = -109.43f;
	func_122(&Local_48);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iLocal_58[iVar0] = -1;
		iVar0++;
	}
}

void func_122(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		(iParam0[iVar0 /*11*/])->f_10 = 0;
		iVar0++;
	}
}

bool func_123(var uParam0)
{
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	return !unk_0x1C2F771CDC87A3A5(uParam0, 0);
}

void func_124(bool bParam0)
{
	if (bParam0)
	{
		Global_113648.f_14053.f_89 = 1;
	}
	else
	{
		Global_113648.f_14053.f_89 = 0;
	}
}

int func_125(int iParam0)
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

void func_126()
{
	int iVar0;
	
	unk_0xDAE61414743C8D1D(5);
	func_5();
	iVar0 = 0;
	while (iVar0 < Local_48.f_0)
	{
		func_103(&(Local_48[iVar0 /*11*/].f_2));
		func_93(&(Local_48[iVar0 /*11*/].f_1));
		if (iLocal_58[iVar0] >= 0 && iLocal_58[iVar0] < 8)
		{
			unk_0x85183ED7096BA9E5(iLocal_58[iVar0]);
		}
		iVar0++;
	}
	if (func_128(&(Local_42.f_1)))
	{
		func_127(13);
	}
	func_81();
	func_124(0);
	func_76(0);
	unk_0x55098D9E9AD58806(Local_42.f_7);
	unk_0xBBC29EBE6E1A48FA();
}

int func_127(int iParam0)
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

bool func_128(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}
