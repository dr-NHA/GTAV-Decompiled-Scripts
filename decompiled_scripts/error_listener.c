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
	func_12();
	while (true)
	{
		wait(0);
		if (func_11())
		{
			return;
		}
		func_1();
	}
}

void func_1()
{
	func_2();
}

void func_2()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x703C4F7316B7195D(2))
	{
		iVar1 = unk_0x4BC3E5D2FB0A1665(2, iVar0);
		if (func_10(iVar1))
		{
			func_9(&Var2);
			func_8(2, iVar0, iVar1, &Var2);
			Var2.f_1 = (unk_0x8034325BF6D6E41F() - 1);
			Var2.f_0 = iVar1;
			if (!func_7(&Var2, &uVar3))
			{
				func_6(&Var2);
			}
			func_3(&Var2);
		}
		iVar0++;
	}
}

void func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = *iParam0;
	if (((func_5() && func_4(iVar0)) && iVar0 != 248) && unk_0xF08B45C0CEBE11C2())
	{
		unk_0xB0926B14C2D3A838(0, 1, 0);
	}
}

bool func_4(int iParam0)
{
	return (((iParam0 == 249 || iParam0 == 250) || iParam0 == 251) || iParam0 == 248);
}

bool func_5()
{
	return Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_192 != 0;
}

int func_6(int iParam0)
{
	if (Global_32442.f_61 < 20)
	{
		Global_32442[Global_32442.f_61 /*3*/] = { *iParam0 };
		Global_32442.f_61++;
		return 1;
	}
	return 0;
}

int func_7(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_32442.f_61)
	{
		if (Global_32442[*uParam1 /*3*/] == *iParam0 && Global_32442[*uParam1 /*3*/].f_2 == iParam0->f_2)
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

void func_8(int iParam0, int iParam1, int iParam2, var uParam3)
{
	var uVar0;
	
	if (((iParam2 == 248 || iParam2 == 249) || iParam2 == 250) || iParam2 == 251)
	{
		if (unk_0xFCEF367B86651ED3(iParam0, iParam1, &uVar0, 1))
		{
			uParam3->f_2 = uVar0;
		}
	}
}

void func_9(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_10(int iParam0)
{
	return func_4(iParam0);
}

int func_11()
{
	return 0;
}

void func_12()
{
	unk_0x51CC1333A10C4E09();
}
