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
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
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
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	float fLocal_68 = 0f;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	float fLocal_71[2] = { 0f, 0f };
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<21> Local_77 = { 0, 0, 745926877, 0, 2, 0, 2064532783, 0, 2064532783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_78[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<21> Local_79 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
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
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_68 = -1f;
	iLocal_72 = 23;
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_96(ScriptParam_79);
	}
	while (true)
	{
		func_95();
		if (func_87())
		{
			func_84();
		}
		if (unk_0x93E08E0F531E2C35())
		{
			if (Global_2793046.f_456)
			{
				Local_77.f_20 = 1;
				if (unk_0x7F258099B06D4C7C() == 1)
				{
					func_84();
				}
			}
		}
		else if (Local_77.f_20)
		{
			func_84();
		}
		if (unk_0x76CD105BCAC6EB9F())
		{
			func_83();
			switch (func_82(unk_0xAE032CEDCF23C6D5()))
			{
				case 0:
					if (func_81() > 0)
					{
						iLocal_78[unk_0xAE032CEDCF23C6D5()] = 2;
					}
					break;
				
				case 2:
					func_61();
					if (func_81() == 3)
					{
						iLocal_78[unk_0xAE032CEDCF23C6D5()] = 3;
					}
					break;
				
				case 3:
					func_84();
					break;
			}
			if (unk_0x93E08E0F531E2C35())
			{
				switch (func_81())
				{
					case 0:
						Local_77.f_0 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()
{
	func_7();
	if (Local_77.f_1.f_2 == 5)
	{
		Local_77.f_0 = 3;
	}
	if (func_6(&(Local_77.f_1.f_17)))
	{
		if (func_4(&(Local_77.f_1.f_17), 20000, 0))
		{
			Local_77.f_0 = 3;
		}
	}
	if (func_3())
	{
		Local_77.f_0 = 3;
	}
	if (bLocal_62)
	{
		if (!unk_0xF859473E4AD09F30())
		{
			Local_77.f_0 = 3;
		}
	}
	else if (unk_0xF859473E4AD09F30())
	{
		Local_77.f_0 = 3;
	}
	if (func_2())
	{
		Local_77.f_0 = 3;
	}
}

bool func_2()
{
	return Global_1926705.f_3;
}

bool func_3()
{
	return Global_1574582;
}

int func_4(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_5(uParam0, bParam2, 0);
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

void func_5(var uParam0, bool bParam1, bool bParam2)
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

bool func_6(var uParam0)
{
	return uParam0->f_1;
}

void func_7()
{
	switch (Local_77.f_1.f_2)
	{
		case 0:
			func_60(1);
			break;
		
		case 1:
			if (func_40())
			{
				if (func_27())
				{
					func_5(&(Local_77.f_1.f_15), 0, 0);
					func_60(2);
				}
			}
			break;
		
		case 2:
			func_18();
			func_16();
			if (func_15())
			{
				func_60(3);
				func_14(0);
			}
			if (!func_12(Local_77.f_1))
			{
				if (func_11(Local_77.f_1.f_3[0 /*2*/]) && func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			else if (func_11(Local_77.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			else if (func_11(Local_77.f_1.f_3[1 /*2*/]))
			{
				func_60(3);
			}
			else
			{
				if (func_6(&(Local_77.f_1.f_15)))
				{
					if (func_4(&(Local_77.f_1.f_15), Global_262145.f_11084, 0))
					{
						func_60(3);
					}
				}
				if (func_10(unk_0x259BE71D8A81D4FA(), 0))
				{
					func_60(3);
				}
				if (bLocal_63)
				{
					func_60(3);
				}
				if (func_8(unk_0x259BE71D8A81D4FA(), 136))
				{
					func_60(3);
				}
			}
			break;
		
		case 3:
			func_18();
			if (!func_12(Local_77.f_1))
			{
				if (func_11(Local_77.f_1.f_3[0 /*2*/]) && func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			else if (func_11(Local_77.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			break;
		
		case 5:
			break;
	}
}

int func_8(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/] == iParam1)
	{
		return func_9(iParam0);
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1894573[iVar0 /*608*/].f_1, 0);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return BitTest(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}

int func_11(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(uParam0));
	}
	return 1;
}

int func_12(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return !func_13(unk_0xE38610F405049F71(uParam0));
	}
	return 0;
}

int func_13(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (unk_0x1C2F771CDC87A3A5(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xD9F5E1FEFD1329E4(uParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	Global_2793046.f_455 = iParam0;
}

bool func_15()
{
	return Global_2793046.f_455;
}

void func_16()
{
	if (Global_2672505.f_3803)
	{
		func_17(1, 600000);
		bLocal_63 = true;
	}
	if (Global_2672505.f_3802 >= 250f)
	{
		func_17(1, 600000);
		bLocal_63 = true;
	}
}

void func_17(int iParam0, int iParam1)
{
	if (Global_2672505.f_3686[iParam0] < iParam1)
	{
		Global_2672505.f_3686[iParam0] = iParam1;
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Global_2672505.f_3685), iParam0);
}

void func_18()
{
	iLocal_66 = 0;
	iLocal_67 = 0;
	if (func_12(Local_77.f_1))
	{
		iLocal_66++;
	}
	else if (unk_0xFC8BFE4B41177C22(unk_0xE38610F405049F71(Local_77.f_1)))
	{
		func_26(&(Local_77.f_1));
		iLocal_66++;
	}
	if (func_11(Local_77.f_1.f_3[0 /*2*/]))
	{
		if (unk_0x93BF17E19A9F0E9B(Local_77.f_1.f_3[0 /*2*/]))
		{
			func_26(&(Local_77.f_1.f_3[0 /*2*/]));
			iLocal_67++;
		}
	}
	else
	{
		iLocal_67++;
	}
	if (func_11(Local_77.f_1.f_3[1 /*2*/]))
	{
		if (unk_0x93BF17E19A9F0E9B(Local_77.f_1.f_3[1 /*2*/]))
		{
			func_26(&(Local_77.f_1.f_3[1 /*2*/]));
			iLocal_67++;
		}
	}
	else
	{
		iLocal_67++;
	}
	if (unk_0xF46F370442FAD8F9(false, 0) != iLocal_66)
	{
		if (func_25(iLocal_66, 0, 1))
		{
			unk_0x552B3BADB43FF551(iLocal_66);
		}
	}
	if (unk_0xA0522491D076C1E6(false, 0) != iLocal_67)
	{
		if (func_19(iLocal_67, 0, 1))
		{
			unk_0x17C7D9B3979F5759(iLocal_67);
		}
	}
}

bool func_19(int iParam0, bool bParam1, bool bParam2)
{
	return func_20(0, iParam0, 1, bParam1, bParam2);
}

int func_20(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1666891, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_24(iParam0) - func_23(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_23(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_24(iParam0) - func_22(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_23(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_24(iParam0) - func_23(iParam0, 1));
		}
		if (!bParam4 && Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/] != 3)
		{
			iVar1 = (iVar1 - func_21(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)
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

int func_22(int iParam0)
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

int func_23(int iParam0, bool bParam1)
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

int func_24(int iParam0)
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

bool func_25(int iParam0, bool bParam1, bool bParam2)
{
	return func_20(1, iParam0, 1, bParam1, bParam2);
}

void func_26(var uParam0)
{
	var uVar0;
	
	if (unk_0x93BF17E19A9F0E9B(*uParam0))
	{
		uVar0 = unk_0xF5014688C9788D5F(*uParam0);
		unk_0x76AD45C3946F87DD(&uVar0);
	}
}

int func_27()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = joaat("a_m_m_farmer_01");
	if (func_39(Local_77.f_1.f_1))
	{
		if (func_39(Local_77.f_1.f_3[1 /*2*/].f_1) && func_39(iVar0))
		{
			if (!func_12(Local_77.f_1))
			{
				if (func_36(&(Local_77.f_1), Local_77.f_1.f_1, Local_77.f_1.f_8, 0f, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0))
				{
					uVar1 = unk_0xE38610F405049F71(Local_77.f_1);
					if (unk_0x90E3EAFF8AAA1A42(uVar1) > 0)
					{
						unk_0xB5AD06DDA85E2E8F(uVar1, 0);
					}
					unk_0xD133EF7430EDCD09(uVar1, 127, 0);
					unk_0xA9F7300B498DDED7(uVar1);
					unk_0xC229299217554C78(uVar1, 1, 1, 0);
					unk_0x0B74F181ADFC39BF(uVar1, 1);
					unk_0x79B52EC5A9AB6229(uVar1);
					unk_0xC7D381E526A969D3(uVar1, 1);
					func_35(uVar1, 4);
					Global_2672505.f_3804 = uVar1;
					unk_0xD25E9BDC14A0B649(uVar1, Global_262145.f_11085, 0);
					if (func_34(&(Local_77.f_1.f_3[0 /*2*/]), Local_77.f_1, 4, iVar0, -1, 1, 1, 1))
					{
						uVar2 = unk_0xC35A3A4C05A4831B(Local_77.f_1.f_3[0 /*2*/]);
						func_29(Local_77.f_1.f_3[0 /*2*/]);
						func_28(uVar2, 0, 0, 1);
						unk_0x926910F3168C206A(uVar2, unk_0x259BE71D8A81D4FA());
						func_35(uVar2, 4);
						Global_2672505.f_3804.f_1[0] = uVar2;
						unk_0xD1C578C204015E1F(uVar2, 0, 1, 1, 0);
						unk_0xD1C578C204015E1F(uVar2, 2, 1, 1, 0);
						unk_0xD1C578C204015E1F(uVar2, 3, 0, 0, 0);
						unk_0xD1C578C204015E1F(uVar2, 4, 0, 0, 0);
						unk_0xD1C578C204015E1F(uVar2, 8, 0, 1, 0);
						unk_0x7F08C4791E6D6969(uVar2, 1, 0, 0, 0, 1);
						unk_0x7F08C4791E6D6969(uVar2, 0, 0, 0, 0, 1);
						if (func_34(&(Local_77.f_1.f_3[1 /*2*/]), Local_77.f_1, 4, Local_77.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_29(Local_77.f_1.f_3[1 /*2*/]);
							func_28(unk_0xC35A3A4C05A4831B(Local_77.f_1.f_3[1 /*2*/]), 1, 1, 1);
							unk_0x926910F3168C206A(unk_0xC35A3A4C05A4831B(Local_77.f_1.f_3[1 /*2*/]), unk_0x259BE71D8A81D4FA());
							func_35(unk_0xC35A3A4C05A4831B(Local_77.f_1.f_3[1 /*2*/]), 4);
							Global_2672505.f_3804.f_1[1] = unk_0xC35A3A4C05A4831B(Local_77.f_1.f_3[1 /*2*/]);
							unk_0x55098D9E9AD58806(Local_77.f_1.f_3[1 /*2*/].f_1);
							unk_0x55098D9E9AD58806(iVar0);
							unk_0x55098D9E9AD58806(Local_77.f_1.f_1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_28(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	unk_0x4BD3F83B0D7E1417(uParam0, joaat("weapon_assaultrifle"), 300, 1);
	unk_0xBE8796DB2B90A437(uParam0, 5, 1);
	unk_0xBE8796DB2B90A437(uParam0, 3, 0);
	unk_0xD0764B65C2DFEDCA(uParam0, 2);
	unk_0x139711196A42A037(uParam0, 2);
	unk_0x1090EAA386FB31A8(uParam0, 2);
	unk_0x570AAA413775DFFB(uParam0, 1);
	unk_0xCAF62AAD9CA7C260(uParam0, 1);
	unk_0x3F58BFCF656F0DF1(uParam0, 1);
	unk_0x25DBF9F9C6BDFFEA(uParam0, (fLocal_71[iParam1] + 100f));
	unk_0xAF30637CFE0F3A89(uParam0, 400f);
	unk_0xC3AD0E1324FB3465(uParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			unk_0xF0259D91B002AE9F(uParam0, 250);
			unk_0xD25E9BDC14A0B649(uParam0, 250, 0);
			unk_0x10A676E622A468AA(uParam0, 250);
		}
	}
	else
	{
		unk_0x935364B4448CD584(uParam0, 1);
	}
}

void func_29(var uParam0)
{
	var uVar0;
	
	if (!func_31(unk_0x259BE71D8A81D4FA(), 0, 0) && !func_30())
	{
		uVar0 = Global_1837223[5];
	}
	else
	{
		uVar0 = unk_0x2A661A0285B74A27(unk_0x4A8C381C258A124D());
	}
	unk_0x3CEA1FD137ACE2D9(unk_0xC35A3A4C05A4831B(uParam0), uVar0);
}

bool func_30()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_18, 0);
}

int func_31(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_32(iParam0))
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

bool func_32(int iParam0)
{
	return func_33(iParam0);
}

var func_33(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

int func_34(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xADCE9BCAFCB83364(1))
	{
		return 0;
	}
	if (!unk_0x2FC2FDC413532977(uParam1))
	{
		return 0;
	}
	if (!unk_0xD9F5E1FEFD1329E4(unk_0xE38610F405049F71(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x9F7A52B1537567AC(unk_0x8728A378EF2B46B2(unk_0xE38610F405049F71(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x2FC2FDC413532977(*uParam0))
	{
		unk_0x11C125313CB8ADA2(unk_0xC35A3A4C05A4831B(*uParam0), iParam7);
		if (unk_0xC8D49539708A80B4(unk_0xC35A3A4C05A4831B(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x3C1752E361ED8FC9(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xD130E7CDEE903624(uParam0, "AttributeDamage"))
	{
		iVar0 = unk_0xE2F6FE9B61232165(uParam0, "AttributeDamage");
	}
	unk_0x0B0C9A0F9AAEB7F0(&iVar0, iParam1);
	unk_0xEE8559BBFC27701B(uParam0, "AttributeDamage", iVar0);
}

int func_36(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x441B9C85D0FFA9ED(iParam1))
	{
		return 0;
	}
	if (!unk_0x2E9F58AD6FE93DFF(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x60040CDD28AA1BC3(Param2, fVar0, 0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x5779387E956077A6(iParam1, Param2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0xFC8BFE4B41177C22(iVar1))
	{
		*uParam0 = unk_0x913A6486719A87D2(iVar1);
		Global_2793046.f_6736 = iVar1;
		if (unk_0x2FC2FDC413532977(*uParam0))
		{
			if (bParam13)
			{
				unk_0x32C336953C18A3CE(iVar1, 1);
			}
			unk_0x11C125313CB8ADA2(iVar1, iParam8);
			if (unk_0xC8D49539708A80B4(iVar1))
			{
				if (bParam6)
				{
					unk_0x3C1752E361ED8FC9(*uParam0, 1);
				}
				else
				{
					unk_0x3C1752E361ED8FC9(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x4C48F052678AA7EF(*uParam0, unk_0x259BE71D8A81D4FA(), 1);
				}
			}
			unk_0xD37CA6D6F8993BB9(iVar1, iParam7);
			unk_0xA133EF296C37D6E6(iVar1, 1);
			if (bParam10)
			{
				unk_0x8E18C9CFBC30C9FF(iVar1);
				unk_0x3E13A302AA0F06BF(iVar1, 5, 5, 1f);
			}
			func_37(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_37(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_38(unk_0x259BE71D8A81D4FA(), Param0, iParam2) > -1)
	{
		if ((Global_2635559.f_2921[1 /*6*/].f_5 == iParam3 && Global_2635559.f_2921[1 /*6*/].f_4 == iParam2) && vdist(Global_2635559.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635559.f_2921[iVar0 /*6*/] = { Global_2635559.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635559.f_2921[1 /*6*/] = { Param0 };
		Global_2635559.f_2921[1 /*6*/].f_3 = uParam1;
		Global_2635559.f_2921[1 /*6*/].f_4 = iParam2;
		Global_2635559.f_2921[1 /*6*/].f_5 = iParam3;
	}
}

int func_38(int iParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (unk_0x1D5CD3EAAA7422B0((Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_39(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xEC9DAA34BBB4658C(iParam0);
	return unk_0x6252BC0DD8A320DB(iParam0);
}

int func_40()
{
	struct<3> Var0;
	
	if (func_59(Local_77.f_1.f_8))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				Var0 = { func_57(func_58(unk_0x259BE71D8A81D4FA()), 0f, (-200f * sin((to_float(Local_77.f_1.f_13) * 30f))), (200f * cos((to_float(Local_77.f_1.f_13) * 30f))), 0f) };
				Var0.f_2 = unk_0x54D01A0F98391D5B(Var0.f_0, Var0.f_1);
				Var0.f_2 = (Var0.f_2 + 30f);
				if (func_41(Var0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Local_77.f_1.f_8 = { Var0 };
					return 1;
				}
				else
				{
					Local_77.f_1.f_13++;
					if (Local_77.f_1.f_13 >= 12)
					{
						Local_77.f_1.f_13 = 0;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_41(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2635559.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x913602ADD2D86A7A(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x2DBCF31839B069B4(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || unk_0x2DBCF31839B069B4(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x80F249EA6DFE8476(Param0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (bParam11)
	{
		if (unk_0xE8D2BD34CCB74431(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (fParam12 > 0f)
	{
		if (func_50(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_42(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2635559.f_2++;
	return 1;
}

int func_42(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_49(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (!unk_0x15CCE8886267624F())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xED977E2AE2CB16EE(func_47(unk_0x259BE71D8A81D4FA()), Param0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x7B780C491DEC834E(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_49(iVar1, 1, 1))
		{
			if (!func_44(iVar1, 0) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x259BE71D8A81D4FA()))
				{
					if ((func_43(iVar1) || !bParam8) && !Global_2657589[iVar1 /*466*/].f_270)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x1864096A95E36EBA(iVar1) == -1)
							{
								if (unk_0x1864096A95E36EBA(iVar1) == unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x1864096A95E36EBA(iVar1) != unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))) || unk_0x1864096A95E36EBA(iVar1) == -1)
							{
								if (unk_0xED977E2AE2CB16EE(func_47(iVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x267FC71D3F0D131A(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x1864096A95E36EBA(iVar1) != iParam6 || unk_0x1864096A95E36EBA(iVar1) == -1)
						{
							if (unk_0xED977E2AE2CB16EE(func_47(iVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x267FC71D3F0D131A(iVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_43(int iParam0)
{
	if (unk_0x870372B586EFB3EE(unk_0x56E414973C2A8C0E(iParam0)) || Global_2657589[iParam0 /*466*/].f_255)
	{
		return 1;
	}
	return 0;
}

bool func_44(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_45(-1, 0) == 8;
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

int func_45(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_46();
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

int func_46()
{
	return Global_1574918;
}

Vector3 func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_48() && Global_1853910[iVar0 /*862*/].f_832) && !func_59(Global_1853910[iVar0 /*862*/].f_833))
	{
		return Global_1853910[iVar0 /*862*/].f_833;
	}
	return func_58(iParam0);
}

var func_48()
{
	return Global_2683864.f_19;
}

int func_49(int iParam0, bool bParam1, bool bParam2)
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

int func_50(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x259BE71D8A81D4FA() != iVar1) || iParam6 == 0)
		{
			if (func_49(iVar1, bParam2, bParam3))
			{
				if (iParam8 || unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
				{
					if (!bParam5 || (!unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(iVar1)) && func_43(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) != unk_0x1864096A95E36EBA(iVar1))) || unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
						{
							if (((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && uParam7) && bParam4) && func_51(iVar1))
							{
							}
							else if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(iVar1)))
							{
								if (unk_0xED977E2AE2CB16EE(func_58(iVar1), Param0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_51(int iParam0)
{
	if (func_56(unk_0x259BE71D8A81D4FA(), iParam0))
	{
		return 1;
	}
	Global_2764203 = { func_55(iParam0) };
	if (unk_0xEDD63461767A518C(&Global_2764203))
	{
		return 1;
	}
	if (func_52(unk_0x259BE71D8A81D4FA(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_54(iParam0);
	if (!iVar0 == func_53())
	{
		if (iVar0 == func_54(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_53()
{
	return -1;
}

int func_54(int iParam0)
{
	if (iParam0 != func_53())
	{
		return Global_1894573[iParam0 /*608*/].f_10;
	}
	return func_53();
}

struct<13> func_55(var uParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(uParam0, &Var0, 13);
	return Var0;
}

int func_56(int iParam0, var uParam1)
{
	if (unk_0x7260716F2E4D7661())
	{
		Global_2764203 = { func_55(iParam0) };
		Global_2764216 = { func_55(uParam1) };
		if (unk_0xE582BF3EDDBB1A68(&Global_2764203))
		{
			if (unk_0xE582BF3EDDBB1A68(&Global_2764216))
			{
				unk_0xC07B1AA6155EC337(&Global_2764133, 35, &Global_2764203);
				unk_0xC07B1AA6155EC337(&Global_2764168, 35, &Global_2764216);
				if (Global_2764133 == Global_2764168)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_57(struct<3> Param0, float fParam1, struct<2> Param2, float fParam3)
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

Vector3 func_58(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

int func_59(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_60(int iParam0)
{
	Local_77.f_1.f_2 = iParam0;
}

void func_61()
{
	func_67();
	func_62();
}

void func_62()
{
	if (Local_77.f_1.f_2 == 2)
	{
		func_64();
	}
	else
	{
		func_63();
	}
}

void func_63()
{
	if (unk_0xC450B06E5AAA0985(uLocal_61))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_61);
	}
}

void func_64()
{
	var uVar0;
	
	uVar0 = unk_0xE38610F405049F71(Local_77.f_1);
	if (!unk_0xC450B06E5AAA0985(uLocal_61) && unk_0xFC8BFE4B41177C22(uVar0))
	{
		uLocal_61 = unk_0x18E23E031A9B798F(iVar0);
		unk_0x4C905FB262965D5D(uLocal_61, 422);
		unk_0x89FE619BFBB2024B(uLocal_61, 0);
		unk_0x594D5D0D7071B0DE(uLocal_61, "MPCT_MERRY3");
		func_65(&uLocal_61, 1);
	}
}

void func_65(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		uVar0 = func_66(iParam1);
		unk_0x61183D6239A9D7B8(*uParam0, uVar0);
	}
}

int func_66(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xA306E6FD2A6558E6(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_67()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	switch (Local_77.f_1.f_2)
	{
		case 0:
			func_63();
			break;
		
		case 1:
			func_63();
			break;
		
		case 2:
			if (func_12(Local_77.f_1))
			{
				uVar1 = unk_0xE38610F405049F71(Local_77.f_1);
				func_64();
				if (func_80(Local_77.f_1))
				{
					if (unk_0xEADBDBE0422CF7E6(Local_77.f_1))
					{
						if (unk_0x8B8BD77BD5CC1D17(uVar1))
						{
							if (func_79())
							{
								if (!unk_0xC536067E456DED6C(uVar1))
								{
									unk_0x130DC0384195C42E(uVar1, 1, 0);
								}
							}
							else if (unk_0xC536067E456DED6C(uVar1))
							{
								unk_0x130DC0384195C42E(uVar1, 0, 0);
							}
						}
					}
				}
				func_69();
				if (unk_0x2FC2FDC413532977(Local_77.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0xC35A3A4C05A4831B(Local_77.f_1.f_3[0 /*2*/]);
					if (!unk_0x4FAFF4BCB7633475(uVar0))
					{
						iVar2 = unk_0x927395DFE42BE071(uVar1);
						if (iVar2 != iLocal_72 || fLocal_71[0] != fLocal_68)
						{
							if (func_80(Local_77.f_1))
							{
								if (unk_0xEADBDBE0422CF7E6(Local_77.f_1.f_3[0 /*2*/]))
								{
									fLocal_71[0] = fLocal_68;
									unk_0xAAA71DD7E9059338(uVar0, 1);
									func_28(uVar0, 0, 0, 0);
									unk_0xA9F7300B498DDED7(uVar1);
									unk_0xC229299217554C78(uVar1, 1, 1, 0);
									if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
									{
										if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
										{
											unk_0xDAC27BA46D21818F(uVar0, uVar1, 0, unk_0x4A8C381C258A124D(), 0f, 0f, 0f, iLocal_72, 20f, 40f, -1f, ceil(fLocal_71[0]), 10, -1082130432, 0);
										}
									}
								}
							}
						}
					}
				}
				if (unk_0x2FC2FDC413532977(Local_77.f_1.f_3[1 /*2*/]))
				{
					uVar0 = unk_0xC35A3A4C05A4831B(Local_77.f_1.f_3[1 /*2*/]);
					if (!unk_0x4FAFF4BCB7633475(uVar0))
					{
						if (!unk_0x1B32E388988DD296(uVar0, 0) || fLocal_71[1] != fLocal_68)
						{
							if (func_80(Local_77.f_1))
							{
								if (unk_0xEADBDBE0422CF7E6(Local_77.f_1.f_3[1 /*2*/]))
								{
									fLocal_71[1] = fLocal_68;
									unk_0xAAA71DD7E9059338(uVar0, 0);
									func_28(uVar0, 1, 0, 0);
								}
							}
						}
					}
				}
			}
			if (!func_12(Local_77.f_1) || func_11(Local_77.f_1.f_3[0 /*2*/]))
			{
				func_68();
			}
			break;
		
		case 3:
			func_63();
			if (!func_6(&(Local_77.f_1.f_17)))
			{
				func_5(&(Local_77.f_1.f_17), 0, 0);
			}
			if (func_12(Local_77.f_1))
			{
				uVar1 = unk_0xE38610F405049F71(Local_77.f_1);
				if (!func_11(Local_77.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0xC35A3A4C05A4831B(Local_77.f_1.f_3[0 /*2*/]);
					if (iLocal_64 == 0)
					{
						if (func_80(Local_77.f_1))
						{
							if (unk_0xEADBDBE0422CF7E6(Local_77.f_1.f_3[0 /*2*/]))
							{
								unk_0xAAA71DD7E9059338(uVar0, 0);
								unk_0x974022927CB47E68(uVar0);
								unk_0x3CEA1FD137ACE2D9(uVar0, Global_1837208);
								if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
								{
									if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
									{
										unk_0xDAC27BA46D21818F(uVar0, uVar1, 0, unk_0x4A8C381C258A124D(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1082130432, 0);
										unk_0x44FB298D6382876D(uVar0, 1);
										iLocal_64 = 1;
									}
								}
							}
						}
					}
				}
				if (!func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					if (iLocal_65 == 0)
					{
						uVar0 = unk_0xC35A3A4C05A4831B(Local_77.f_1.f_3[1 /*2*/]);
						if (func_80(Local_77.f_1))
						{
							if (unk_0xEADBDBE0422CF7E6(Local_77.f_1.f_3[1 /*2*/]))
							{
								unk_0x974022927CB47E68(uVar0);
								unk_0xAAA71DD7E9059338(uVar0, 1);
								unk_0x44FB298D6382876D(uVar0, 1);
								iLocal_65 = 1;
							}
						}
					}
				}
			}
			if (!func_12(Local_77.f_1) || func_11(Local_77.f_1.f_3[0 /*2*/]))
			{
				func_68();
			}
			break;
		
		case 5:
			func_63();
			break;
	}
}

void func_68()
{
	var uVar0;
	
	if (!func_11(Local_77.f_1.f_3[0 /*2*/]))
	{
		if (func_80(Local_77.f_1.f_3[0 /*2*/]))
		{
			if (unk_0xEADBDBE0422CF7E6(Local_77.f_1.f_3[0 /*2*/]))
			{
				uVar0 = unk_0xC35A3A4C05A4831B(Local_77.f_1.f_3[0 /*2*/]);
				unk_0xD25E9BDC14A0B649(uVar0, 0, 0);
			}
		}
	}
	if (!func_11(Local_77.f_1.f_3[1 /*2*/]))
	{
		if (func_80(Local_77.f_1.f_3[1 /*2*/]))
		{
			if (unk_0xEADBDBE0422CF7E6(Local_77.f_1.f_3[1 /*2*/]))
			{
				uVar0 = unk_0xC35A3A4C05A4831B(Local_77.f_1.f_3[1 /*2*/]);
				unk_0xD25E9BDC14A0B649(uVar0, 0, 0);
			}
		}
	}
}

void func_69()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	
	if (!Global_1962985)
	{
		return;
	}
	if (!unk_0xEADBDBE0422CF7E6(Local_77.f_1))
	{
		return;
	}
	uVar0 = unk_0xE38610F405049F71(Local_77.f_1);
	if (func_78(uVar0))
	{
		return;
	}
	if (!func_77(uVar0))
	{
		return;
	}
	if (iLocal_75 == func_53())
	{
		func_71();
		return;
	}
	uVar1 = unk_0x56E414973C2A8C0E(iLocal_75);
	if (!func_6(&uLocal_73))
	{
		if (iLocal_75 != func_53() && func_77(uVar1))
		{
			if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(uVar1, 1), unk_0xD1A6A821F5AC81DB(uVar0, 1), 0) > 50f)
			{
				return;
			}
		}
	}
	if (!func_4(&uLocal_73, Global_1962984, 0))
	{
		return;
	}
	func_70(&uLocal_73);
	iVar3 = Local_77.f_1.f_3;
	bVar4 = false;
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		uVar5 = unk_0xC35A3A4C05A4831B(Local_77.f_1.f_3[iVar2 /*2*/]);
		if (func_77(uVar5) && unk_0x1B32E388988DD296(uVar5, 0))
		{
			bVar4 = true;
		}
		else
		{
			iVar2++;
		}
	}
	if (!bVar4)
	{
		iLocal_75 = func_53();
	}
}

void func_70(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_71()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	iVar1 = unk_0x259BE71D8A81D4FA();
	uVar3 = unk_0xC35A3A4C05A4831B(Local_77.f_1.f_3[0 /*2*/]);
	uVar4 = unk_0xE38610F405049F71(Local_77.f_1);
	uVar5 = func_74(unk_0x259BE71D8A81D4FA());
	uVar6 = unk_0x56E414973C2A8C0E(uVar5);
	iLocal_75 = func_53();
	iLocal_76++;
	iLocal_76 = func_73(iLocal_76, 32);
	iVar0 = iLocal_76;
	if (iVar0 == func_53())
	{
		return;
	}
	if (iVar0 == iLocal_75)
	{
		return;
	}
	if (!func_49(iVar0, 1, 1))
	{
		return;
	}
	uVar2 = unk_0x56E414973C2A8C0E(iVar0);
	if (!func_77(uVar2))
	{
		return;
	}
	if (func_77(uVar6))
	{
		if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(uVar6, 1), unk_0xD1A6A821F5AC81DB(uVar2, 1), 0) > Global_1962986)
		{
			return;
		}
	}
	if (func_52(iVar1, iVar0) || func_72(iVar1, iVar0, -2, 0))
	{
		unk_0xDAC27BA46D21818F(uVar3, uVar4, 0, uVar2, 0f, 0f, 0f, iLocal_72, 20f, 40f, -1f, ceil(fLocal_71[0]), 10, -1082130432, 0);
		iLocal_75 = iVar0;
	}
}

bool func_72(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x1864096A95E36EBA(iParam0) == -1 && unk_0x1864096A95E36EBA(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x1864096A95E36EBA(iParam0) == unk_0x1864096A95E36EBA(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x1864096A95E36EBA(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x1864096A95E36EBA(iParam0) == iParam2;
	}
	return unk_0x1864096A95E36EBA(iParam0) == iParam2;
}

int func_73(int iParam0, int iParam1)
{
	return (((iParam0 % iParam1) + iParam1) % iParam1);
}

int func_74(int iParam0)
{
	if (func_75(iParam0, 1))
	{
		return Global_1894573[func_54(iParam0) /*608*/].f_10.f_462;
	}
	return func_53();
}

bool func_75(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_76(iParam0))
		{
			return 0;
		}
	}
	return Global_1894573[iParam0 /*608*/].f_10 != func_53();
}

int func_76(int iParam0)
{
	if (iParam0 != func_53())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_53())
		{
			return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_77(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_78(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (!unk_0x5B702A5D1F2635BE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_79()
{
	if (unk_0x5295501D0862870D() >= 22)
	{
		return 1;
	}
	if (unk_0x5295501D0862870D() <= 6 && unk_0x5295501D0862870D() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_80(var uParam0)
{
	if (unk_0xB0AB1F334666E337(uParam0))
	{
		return 1;
	}
	if (unk_0x93E08E0F531E2C35())
	{
		unk_0x460D2A8B2C7DC7D4(uParam0);
	}
	return 0;
}

int func_81()
{
	return Local_77.f_0;
}

int func_82(int iParam0)
{
	return iLocal_78[iParam0];
}

void func_83()
{
	bool bVar0;
	struct<3> Var1;
	
	if (fLocal_68 == -1f)
	{
		bVar0 = true;
	}
	else if (!func_6(&uLocal_69))
	{
		func_5(&uLocal_69, 0, 0);
	}
	else if (func_4(&uLocal_69, 5000, 0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Var1 = { func_58(unk_0x259BE71D8A81D4FA()) };
		fLocal_68 = unk_0x54D01A0F98391D5B(Var1.f_0, Var1.f_1);
		if (fLocal_68 < Global_262145.f_11086)
		{
			fLocal_68 = Global_262145.f_11086;
		}
		func_70(&uLocal_69);
	}
}

void func_84()
{
	if (unk_0xFC8BFE4B41177C22(Global_2672505.f_3804.f_1[0]))
	{
		unk_0x734A9F4537A31459(&(Global_2672505.f_3804.f_1[0]));
	}
	if (unk_0xFC8BFE4B41177C22(Global_2672505.f_3804.f_1[1]))
	{
		unk_0x734A9F4537A31459(&(Global_2672505.f_3804.f_1[1]));
	}
	if (unk_0xFC8BFE4B41177C22(Global_2672505.f_3804))
	{
		unk_0x8C1F7D7A31B2A38E(&(Global_2672505.f_3804));
	}
	Global_2672505.f_3804.f_5 = 0f;
	Global_2672505.f_3804.f_6 = 0;
	Global_2672505.f_3804.f_7 = 0;
	func_86(0);
	func_85();
}

void func_85()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_86(int iParam0)
{
	Global_2793046.f_456 = iParam0;
}

int func_87()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_94())
	{
		return 1;
	}
	if (Global_2696917)
	{
		return 1;
	}
	if (func_93())
	{
		return 1;
	}
	if (func_92(159))
	{
		if (!func_91())
		{
			return 1;
		}
	}
	if (func_92(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_88() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_88()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_88()
{
	switch (func_90())
	{
		case 0:
			return func_89();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_89()
{
	switch (Global_2697021)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_90()
{
	return Global_32163;
}

bool func_91()
{
	return Global_2683864.f_698;
}

int func_92(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_93()
{
	return Global_2694526;
}

bool func_94()
{
	return Global_2683864.f_693;
}

void func_95()
{
	wait(0);
}

void func_96(struct<21> Param0)
{
	func_86(0);
	func_100(32, Param0);
	unk_0x17C7D9B3979F5759(2);
	unk_0x552B3BADB43FF551(1);
	func_98(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&Local_77, 21, 0);
	unk_0x7B13DC83218D9AF5(&iLocal_78, 33, 0);
	unk_0xAECC5FA98C879D67(0);
	if (!func_97())
	{
		func_84();
	}
	if (unk_0xF859473E4AD09F30())
	{
		bLocal_62 = true;
	}
	iLocal_75 = unk_0x259BE71D8A81D4FA();
	iLocal_78[unk_0xAE032CEDCF23C6D5()] = 0;
}

int func_97()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 0;
		}
		if (unk_0x37F4AB46DE999660())
		{
			return 1;
		}
		if (func_94())
		{
			return 0;
		}
		if (func_92(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_98(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_85();
			}
			else
			{
				return 0;
			}
		}
		if (!func_99(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_85();
					}
					else
					{
						return 0;
					}
				}
				if (func_94())
				{
					if (!bParam2)
					{
						func_85();
					}
					else
					{
						return 0;
					}
				}
				if (func_92(157))
				{
					if (!bParam2)
					{
						func_85();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xBF52D447C795492B())
			{
				if (!bParam2)
				{
					func_85();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0xDFF16B5B12604EFF();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			if (!bParam2)
			{
				func_85();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xBF52D447C795492B())
	{
		if (!bParam2)
		{
			func_85();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_99(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_100(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		func_85();
	}
	unk_0xDB2434E51017FFCC(iParam0, 0, Param1.f_16);
}
