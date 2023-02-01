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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	char cLocal_30[16] = "";
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	char cLocal_33[16] = "";
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	char cLocal_36[16] = "";
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	char cLocal_39[16] = "";
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	char cLocal_42[16] = "";
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	char cLocal_45[16] = "";
	var uLocal_46 = 0;
	var uLocal_47 = 0;
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
	StringCopy(&cLocal_30, "CELL_212", 16);
	StringCopy(&cLocal_33, "CELL_213", 16);
	StringCopy(&cLocal_36, "CELL_39", 16);
	StringCopy(&cLocal_39, "CELL_MP_300", 16);
	StringCopy(&cLocal_42, "CELL_MP_301", 16);
	StringCopy(&cLocal_45, "CELL_MP_302", 16);
	unk_0x51CC1333A10C4E09();
	func_45(&uLocal_28);
	func_36();
	while (true)
	{
		wait(0);
		if (!unk_0xBF52D447C795492B())
		{
			func_34(1);
			func_33();
		}
		if (!Global_20383.f_1 == 9 && Global_20383.f_1 > 3)
		{
			func_3();
			if (Global_20383.f_1 != 8)
			{
				if (func_2())
				{
					func_33();
				}
			}
		}
		if (func_1())
		{
			func_33();
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

int func_2()
{
	if (Global_8859 == 1 || Global_20383.f_1 < 7)
	{
		Global_20370 = 1;
		return 1;
	}
	return 0;
}

void func_3()
{
	if (func_29(&uLocal_28))
	{
		if (func_16())
		{
			if (Global_2694465)
			{
				unk_0xF2EE6216DEB74ACC(0);
				func_10(1583221826, func_11(1, 1));
				Global_2694465 = 0;
			}
			else
			{
				unk_0xF2EE6216DEB74ACC(1);
				func_10(1217051745, func_11(1, 1));
				Global_2694465 = 1;
			}
			func_4(0);
			return;
		}
	}
}

void func_4(int iParam0)
{
	if (func_9())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_8())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
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
	if (!func_5())
	{
		Global_20383.f_1 = 3;
	}
}

int func_5()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_7(0))
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

int func_7(int iParam0)
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

bool func_8()
{
	return BitTest(Global_1962996, 5);
}

bool func_9()
{
	return BitTest(Global_1962996, 19);
}

void func_10(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0.f_0 = -1428749433;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_2 = iParam0;
	Var0.f_3 = unk_0xC5935DFB3F39785A(0, 9999);
	if (!iParam1 == 0)
	{
		if (unk_0x76CD105BCAC6EB9F())
		{
			unk_0x01F0B819E78A18A1(1, &Var0, 4, iParam1);
		}
	}
}

int func_11(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(iVar1);
		if (func_15(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, iVar1);
				}
				else if (!func_12(iVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_12(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_13(-1, 0) == 8;
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

int func_13(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_14();
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

int func_14()
{
	return Global_1574918;
}

int func_15(int iParam0, bool bParam1, bool bParam2)
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

int func_16()
{
	if (!func_23(unk_0x259BE71D8A81D4FA(), 1) && func_17())
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	if (!func_18())
	{
		return 0;
	}
	return 1;
}

int func_18()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_22())
	{
		return 1;
	}
	if (func_21())
	{
		return 1;
	}
	return func_19(120, -1);
}

int func_19(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2848282[iParam0 /*3*/][func_20(iParam1)];
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_20(var uParam0)
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

bool func_21()
{
	return Global_1575048;
}

bool func_22()
{
	return Global_1575050;
}

bool func_23(int iParam0, bool bParam1)
{
	if (func_28() != 0)
	{
		return func_27(iParam0) != 0;
	}
	return func_24(iParam0, bParam1, 0);
}

int func_24(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_25(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853910[iParam0 /*862*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_25(int iParam0)
{
	return func_26(iParam0);
}

var func_26(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

int func_27(int iParam0)
{
	if (func_15(iParam0, 0, 1))
	{
		return Global_2657589[iParam0 /*466*/].f_1;
	}
	return 0;
}

int func_28()
{
	return Global_32163;
}

int func_29(var uParam0)
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
	func_30();
	Global_20361 = 1;
	return 1;
}

void func_30()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Accept", &Global_20372, 1);
		func_31();
	}
}

void func_31()
{
	if (func_32())
	{
		unk_0xBF3F90E670404C44(5);
	}
}

int func_32()
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

void func_33()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_34(bool bParam0)
{
	if (bParam0)
	{
		func_35();
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 16);
		}
		Global_20383.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_20383.f_1 == 1)
	{
		if (!Global_20383.f_1 == 0)
		{
			Global_20383.f_1 = 3;
		}
	}
}

void func_35()
{
	if (Global_20383.f_1 == 9 || Global_20383.f_1 == 10)
	{
		Global_21778 = 0;
		Global_21774 = 1;
	}
}

void func_36()
{
	if (!Global_20383.f_1 == 7)
	{
		Global_20383.f_1 = 7;
	}
	func_44(Global_20364, "SET_DATA_SLOT_EMPTY", to_float(13), -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_16())
	{
		if (Global_2694465)
		{
			func_43(Global_20364, "SET_DATA_SLOT", to_float(13), to_float(0), to_float(12), -1f, -1f, &cLocal_42, 0, 0, 0, 0);
		}
		else
		{
			func_43(Global_20364, "SET_DATA_SLOT", to_float(13), to_float(0), to_float(12), -1f, -1f, &cLocal_39, 0, 0, 0, 0);
		}
	}
	else
	{
		func_43(Global_20364, "SET_DATA_SLOT", to_float(13), to_float(0), to_float(12), -1f, -1f, &cLocal_45, 0, 0, 0, 0);
	}
	func_44(Global_20364, "DISPLAY_VIEW", to_float(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_40(&cLocal_36);
	if (func_16())
	{
		func_37(13, &cLocal_30, 1, "", 4, &cLocal_33, &uLocal_28);
	}
	else
	{
		func_37(1, "", 1, "", 4, &cLocal_33, &uLocal_28);
	}
}

void func_37(int iParam0, char[4] cParam1, int iParam2, char[4] cParam3, int iParam4, char[4] cParam5, var uParam6)
{
	func_38(2, iParam0, cParam1, 0, uParam6, -1);
	func_38(1, iParam2, cParam3, 1, uParam6, 17);
	func_38(3, iParam4, cParam5, 2, uParam6, -1);
}

void func_38(int iParam0, int iParam1, char[4] cParam2, int iParam3, var uParam4, int iParam5)
{
	if (iParam1 == 1)
	{
		func_43(Global_20364, "SET_SOFT_KEYS", to_float(iParam0), 0f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x8744D2E3FC95740E(uParam4, iParam3);
		func_39(iParam5, 0);
		return;
	}
	if (Global_20371)
	{
		func_43(Global_20364, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, cParam2, 0, 0, 0, 0);
		unk_0x0B0C9A0F9AAEB7F0(uParam4, iParam3);
		func_39(iParam5, 1);
		return;
	}
	func_43(Global_20364, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0B0C9A0F9AAEB7F0(uParam4, iParam3);
	func_39(iParam5, 1);
}

void func_39(int iParam0, bool bParam1)
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

void func_40(char[4] cParam0)
{
	func_41(Global_20364, "SET_HEADER", cParam0, 0, 0, 0, 0);
}

void func_41(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	func_42(uParam2);
	if (!unk_0xD6F9DEE4765092A9(iParam3))
	{
		func_42(iParam3);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam4))
	{
		func_42(iParam4);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam5))
	{
		func_42(iParam5);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam6))
	{
		func_42(iParam6);
	}
	unk_0xE6B753D52F4CA222();
}

void func_42(var uParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

void func_43(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char[4] cParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	if (!unk_0xD6F9DEE4765092A9(cParam7))
	{
		func_42(cParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam8))
	{
		func_42(iParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam9))
	{
		func_42(iParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam10))
	{
		func_42(iParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam11))
	{
		func_42(iParam11);
	}
	unk_0xE6B753D52F4CA222();
}

void func_44(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_45(var uParam0)
{
	*uParam0 = 0;
}
