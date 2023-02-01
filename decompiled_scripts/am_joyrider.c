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
	struct<11> Local_61 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_62 = 0;
	struct<3> Local_63[32];
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	struct<21> Local_73 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_69 = 20;
	if (unk_0x76CD105BCAC6EB9F() && func_70(unk_0x259BE71D8A81D4FA(), 0, 1))
	{
		func_61(ScriptParam_73);
	}
	else
	{
		func_57();
	}
	while (true)
	{
		func_56();
		if (func_48() || func_44(9))
		{
			func_57();
		}
		if (unk_0xF859473E4AD09F30())
		{
			func_57();
		}
		switch (func_43(unk_0xAE032CEDCF23C6D5()))
		{
			case 0:
				if (func_42() == 1)
				{
					func_41();
					Local_63[unk_0xAE032CEDCF23C6D5() /*3*/] = 1;
				}
				else if (func_42() == 4)
				{
					Local_63[unk_0xAE032CEDCF23C6D5() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_42() == 1)
				{
					func_39();
				}
				else if (func_42() == 4)
				{
					Local_63[unk_0xAE032CEDCF23C6D5() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_37(&(Local_61.f_10));
				if (func_36(&(Local_61.f_10)))
				{
					Local_63[unk_0xAE032CEDCF23C6D5() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_63[unk_0xAE032CEDCF23C6D5() /*3*/] = 4;
			
			case 4:
				func_57();
				break;
		}
		if (unk_0x93E08E0F531E2C35())
		{
			switch (func_42())
			{
				case 0:
					if (func_35())
					{
						if (func_8())
						{
							Local_61.f_0 = 1;
						}
					}
					break;
				
				case 1:
					func_7();
					func_6();
					if (func_1())
					{
						Local_61.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Local_61.f_9 == 0)
	{
		if (!func_4(Local_61.f_2))
		{
			return 1;
		}
		else if (func_3(Local_61.f_3))
		{
			return 1;
		}
		else
		{
			if (iLocal_72 == 1)
			{
				if (BitTest(Local_61.f_1, 0))
				{
					return 1;
				}
			}
			if (!unk_0xCECDBB848D53DEB2(unk_0xC35A3A4C05A4831B(Local_61.f_3), unk_0xE38610F405049F71(Local_61.f_2), 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(uParam0));
	}
	return 1;
}

int func_4(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return !func_5(unk_0xE38610F405049F71(uParam0));
	}
	return 0;
}

int func_5(var uParam0)
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

void func_6()
{
	switch (Local_61.f_9)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iLocal_71 == 0)
	{
		iLocal_72 = 0;
		unk_0x0B0C9A0F9AAEB7F0(&(Local_61.f_1), false);
	}
	if (func_4(Local_61.f_2))
	{
		iVar0 = 1;
	}
	if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iLocal_71)))
	{
		iVar1 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iLocal_71));
		uVar2 = unk_0x56E414973C2A8C0E(iVar1);
		if (func_70(iVar1, 1, 1))
		{
			if (BitTest(Local_61.f_1, 0))
			{
				if (iVar0 == 1)
				{
					if (unk_0xFAA48325A90263BE(uVar2, unk_0xE38610F405049F71(Local_61.f_2), 250f, 250f, 250f, 0, 1, 0))
					{
						unk_0x8744D2E3FC95740E(&(Local_61.f_1), false);
					}
				}
				else
				{
					unk_0x8744D2E3FC95740E(&(Local_61.f_1), false);
				}
			}
		}
	}
	iLocal_71++;
	if (iLocal_71 == unk_0x95C7A22DBE7AEF4C())
	{
		iLocal_71 = 0;
		iLocal_72 = 1;
	}
}

int func_8()
{
	if (unk_0x4D64DFA5BE3B2871(1, 1, 0, 0))
	{
		if (func_34(Local_61.f_4) && func_34(Local_61.f_5))
		{
			if (func_12() && func_9())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9()
{
	int iVar0;
	
	if ((!unk_0x2FC2FDC413532977(Local_61.f_3) && func_34(Local_61.f_5)) && unk_0x2FC2FDC413532977(Local_61.f_2))
	{
		if (func_4(Local_61.f_2))
		{
			if (func_11(&(Local_61.f_3), Local_61.f_2, 22, Local_61.f_5, -1, 1, 1, 1))
			{
				unk_0xC6E8E1D693021E9E(unk_0xC35A3A4C05A4831B(Local_61.f_3), 0);
				if (func_10())
				{
					unk_0x3CEA1FD137ACE2D9(unk_0xC35A3A4C05A4831B(Local_61.f_3), Global_1837210);
				}
				else
				{
					unk_0x3CEA1FD137ACE2D9(unk_0xC35A3A4C05A4831B(Local_61.f_3), Global_1837213);
				}
				unk_0x44FB298D6382876D(unk_0xC35A3A4C05A4831B(Local_61.f_3), 1);
				if (func_10())
				{
					iVar0 = unk_0xC5935DFB3F39785A(0, 10);
					if (iVar0 < 5)
					{
						unk_0x4BD3F83B0D7E1417(unk_0xC35A3A4C05A4831B(Local_61.f_3), joaat("weapon_pistol"), 25000, func_10());
					}
					else if (iVar0 > 6)
					{
						unk_0x4BD3F83B0D7E1417(unk_0xC35A3A4C05A4831B(Local_61.f_3), joaat("weapon_microsmg"), 25000, func_10());
					}
					else
					{
						unk_0x4BD3F83B0D7E1417(unk_0xC35A3A4C05A4831B(Local_61.f_3), joaat("weapon_pumpshotgun"), 25000, func_10());
					}
				}
				iVar0 = unk_0xC5935DFB3F39785A(0, 10);
				if (iVar0 == 0 || iVar0 == 1)
				{
					unk_0x139711196A42A037(unk_0xC35A3A4C05A4831B(Local_61.f_3), 0);
				}
				else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
				{
					unk_0x139711196A42A037(unk_0xC35A3A4C05A4831B(Local_61.f_3), 2);
				}
				else
				{
					unk_0x139711196A42A037(unk_0xC35A3A4C05A4831B(Local_61.f_3), 1);
				}
				iVar0 = unk_0xC5935DFB3F39785A(0, 4);
				if (iVar0 == 0)
				{
					unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_61.f_3), 5, 1);
				}
				else if (iVar0 == 1)
				{
					unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_61.f_3), 17, 1);
				}
				else if (iVar0 == 2)
				{
					unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_61.f_3), 13, 1);
				}
				if (func_10())
				{
					unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_61.f_3), 20, 1);
				}
				if (func_10())
				{
					unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_61.f_3), 2, 1);
				}
				iVar0 = unk_0xC5935DFB3F39785A(0, 4);
				if (iVar0 == 0)
				{
					unk_0xD0764B65C2DFEDCA(unk_0xC35A3A4C05A4831B(Local_61.f_3), 2);
				}
				else if (iVar0 == 1)
				{
					unk_0xD0764B65C2DFEDCA(unk_0xC35A3A4C05A4831B(Local_61.f_3), 1);
				}
				else if (iVar0 == 2)
				{
					unk_0xD0764B65C2DFEDCA(unk_0xC35A3A4C05A4831B(Local_61.f_3), 3);
				}
				unk_0x55A8A33A33B949EC(unk_0xC35A3A4C05A4831B(Local_61.f_3), 1);
				unk_0x379E96D5D36B27DC(unk_0xC35A3A4C05A4831B(Local_61.f_3), 1);
				unk_0x0428AFDCAA63B06E(unk_0xC35A3A4C05A4831B(Local_61.f_3), 29, 1);
				unk_0x68F395D64BC35E68(unk_0xC35A3A4C05A4831B(Local_61.f_3), 3);
				unk_0xD25E9BDC14A0B649(unk_0xC35A3A4C05A4831B(Local_61.f_3), round((200f * Global_262145.f_165)), 0);
				unk_0x7D167E642755C276(unk_0xE38610F405049F71(Local_61.f_2), 1);
				unk_0xA80E7D11DB73C8BA(unk_0xE38610F405049F71(Local_61.f_2), 1);
				func_41();
				unk_0x4BD42B0527065BB6(unk_0xC35A3A4C05A4831B(Local_61.f_3), uLocal_65);
				unk_0x55098D9E9AD58806(Local_61.f_5);
			}
		}
	}
	if (!unk_0x2FC2FDC413532977(Local_61.f_3))
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	if (BitTest(unk_0xC5935DFB3F39785A(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_11(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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
	*uParam0 = unk_0x9F7A52B1537567AC(unk_0x8728A378EF2B46B2(unk_0xE38610F405049F71(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
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

int func_12()
{
	struct<3> Var0;
	var uVar1;
	
	if (!unk_0x2FC2FDC413532977(Local_61.f_2))
	{
		if (func_34(Local_61.f_4))
		{
			if (func_16(&Var0, &uVar1))
			{
				if (func_13(&(Local_61.f_2), Local_61.f_4, Var0, uVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					unk_0xC229299217554C78(unk_0xE38610F405049F71(Local_61.f_2), 1, 1, 0);
					unk_0xDC05A8A020E60C86(unk_0xE38610F405049F71(Local_61.f_2), 1);
					unk_0xD37CA6D6F8993BB9(unk_0xE38610F405049F71(Local_61.f_2), 1);
					unk_0x616C2EAE947E6027(unk_0xE38610F405049F71(Local_61.f_2), "JOYRIDER_GROUP", 0f);
					unk_0x55098D9E9AD58806(Local_61.f_4);
				}
			}
		}
	}
	if (!unk_0x2FC2FDC413532977(Local_61.f_2))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
	iVar1 = unk_0x5779387E956077A6(iParam1, Param2, uParam3, iParam5, iParam4, iParam12);
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
			func_14(Param2, uParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_14(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_15(unk_0x259BE71D8A81D4FA(), Param0, iParam2) > -1)
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

int func_15(int iParam0, struct<3> Param1, int iParam2)
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

bool func_16(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!bVar0)
	{
		if (unk_0x8D6ED2284F9E6186(&(Local_61.f_6), uParam0, &uVar2, 0f, 180f, 40f, 0, 1, 1))
		{
			unk_0x6009FBA2EAAA60BE(*uParam0, 1, uParam0, uParam1, &iVar1, 4, 1077936128, 0);
			if (iVar1 >= 1 || unk_0x1E2447C0261A7995(*uParam0) == joaat("City"))
			{
				if (unk_0xED977E2AE2CB16EE(-1367.557f, -3220.598f, 12.9448f, Local_61.f_6, 1) >= 600f && unk_0xED977E2AE2CB16EE(750f, -3200f, 6f, Local_61.f_6, 1) >= 700f)
				{
					if (unk_0xED977E2AE2CB16EE(func_33(unk_0x259BE71D8A81D4FA()), *uParam0, 1) <= (250f - 50f))
					{
						if (iLocal_70 <= 5)
						{
							if (func_17(*uParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								bVar0 = true;
							}
						}
						else
						{
							Local_61.f_0 = 4;
						}
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_69 += 4;
		if (iLocal_69 >= 80)
		{
			iLocal_69 = 20;
			iLocal_70++;
		}
	}
	return bVar0;
}

int func_17(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_26(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_18(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2635559.f_2++;
	return 1;
}

int func_18(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_70(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (!unk_0x15CCE8886267624F())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xED977E2AE2CB16EE(func_23(unk_0x259BE71D8A81D4FA()), Param0, 1) <= (fVar2 + fParam1))
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
		if (func_70(iVar1, 1, 1))
		{
			if (!func_20(iVar1, 0) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x259BE71D8A81D4FA()))
				{
					if ((func_19(iVar1) || !bParam8) && !Global_2657589[iVar1 /*466*/].f_270)
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
								if (unk_0xED977E2AE2CB16EE(func_23(iVar1), Param0, 1) <= (fVar2 + fParam1))
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
							if (unk_0xED977E2AE2CB16EE(func_23(iVar1), Param0, 1) <= (fVar2 + fParam1))
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

int func_19(int iParam0)
{
	if (unk_0x870372B586EFB3EE(unk_0x56E414973C2A8C0E(iParam0)) || Global_2657589[iParam0 /*466*/].f_255)
	{
		return 1;
	}
	return 0;
}

bool func_20(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_21(-1, 0) == 8;
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

int func_21(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_22();
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

int func_22()
{
	return Global_1574918;
}

Vector3 func_23(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_25() && Global_1853910[iVar0 /*862*/].f_832) && !func_24(Global_1853910[iVar0 /*862*/].f_833))
	{
		return Global_1853910[iVar0 /*862*/].f_833;
	}
	return func_33(iParam0);
}

int func_24(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_25()
{
	return Global_2683864.f_19;
}

int func_26(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x259BE71D8A81D4FA() != iVar1) || iParam6 == 0)
		{
			if (func_70(iVar1, bParam2, bParam3))
			{
				if (iParam8 || unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
				{
					if (!bParam5 || (!unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(iVar1)) && func_19(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) != unk_0x1864096A95E36EBA(iVar1))) || unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
						{
							if (((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && uParam7) && bParam4) && func_27(iVar1))
							{
							}
							else if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(iVar1)))
							{
								if (unk_0xED977E2AE2CB16EE(func_33(iVar1), Param0, 1) < fParam1)
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

int func_27(int iParam0)
{
	if (func_32(unk_0x259BE71D8A81D4FA(), iParam0))
	{
		return 1;
	}
	Global_2764203 = { func_31(iParam0) };
	if (unk_0xEDD63461767A518C(&Global_2764203))
	{
		return 1;
	}
	if (func_28(unk_0x259BE71D8A81D4FA(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_30(iParam0);
	if (!iVar0 == func_29())
	{
		if (iVar0 == func_30(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_29()
{
	return -1;
}

int func_30(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1894573[iParam0 /*608*/].f_10;
	}
	return func_29();
}

struct<13> func_31(var uParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(uParam0, &Var0, 13);
	return Var0;
}

int func_32(int iParam0, var uParam1)
{
	if (unk_0x7260716F2E4D7661())
	{
		Global_2764203 = { func_31(iParam0) };
		Global_2764216 = { func_31(uParam1) };
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

Vector3 func_33(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

int func_34(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xEC9DAA34BBB4658C(iParam0);
	return unk_0x6252BC0DD8A320DB(iParam0);
}

bool func_35()
{
	if (!BitTest(uLocal_64, 1))
	{
		if (unk_0x8B777C12D64DF209(func_33(unk_0x259BE71D8A81D4FA()), iLocal_68, &(Local_61.f_6), 4, 1077936128, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_64, true);
		}
		else
		{
			iLocal_68++;
		}
	}
	return BitTest(uLocal_64, 1);
}

int func_36(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_37(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x93E08E0F531E2C35())
		{
			func_38(uParam0, 0, 0);
		}
	}
}

void func_38(var uParam0, bool bParam1, bool bParam2)
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

void func_39()
{
	switch (Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_2)
	{
		case 0:
			func_41();
			func_40();
			if (Local_61.f_9 > 0)
			{
				Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_57();
			break;
	}
}

void func_40()
{
	int iVar0;
	float fVar1;
	
	if (!BitTest(Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_1, 0))
	{
		if (func_4(Local_61.f_2) && !func_3(Local_61.f_3))
		{
			iVar0 = unk_0x8D91ADE44AC79BC9(unk_0xE38610F405049F71(Local_61.f_2));
			fVar1 = unk_0xDF93B3CFAC96698F(unk_0xE38610F405049F71(Local_61.f_2));
			if (iVar0 < 200)
			{
				func_41();
				unk_0x4BD42B0527065BB6(unk_0xC35A3A4C05A4831B(Local_61.f_3), uLocal_67);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_1), false);
			}
			else if (fVar1 < 3f)
			{
				if ((((unk_0xD1F1A906BA9226BE(unk_0xE38610F405049F71(Local_61.f_2)) || unk_0xA24B9FF9863A909D(unk_0xE38610F405049F71(Local_61.f_2), 3, 10000)) || unk_0xA24B9FF9863A909D(unk_0xE38610F405049F71(Local_61.f_2), 1, 10000)) || unk_0xA24B9FF9863A909D(unk_0xE38610F405049F71(Local_61.f_2), 0, 10000)) || unk_0xA24B9FF9863A909D(unk_0xE38610F405049F71(Local_61.f_2), 2, 10000))
				{
					func_41();
					unk_0x4BD42B0527065BB6(unk_0xC35A3A4C05A4831B(Local_61.f_3), uLocal_66);
					unk_0x0B0C9A0F9AAEB7F0(&(Local_63[unk_0xAE032CEDCF23C6D5() /*3*/].f_1), false);
				}
			}
		}
	}
}

void func_41()
{
	if (!BitTest(uLocal_64, 0))
	{
		if (func_4(Local_61.f_2))
		{
			unk_0xB5396F1FB088FE38(&uLocal_65);
			unk_0x30CCF17FEE4BDA53(0, unk_0xE38610F405049F71(Local_61.f_2), Local_61.f_6, 14, 30f, 786468, 15f, 1f, 0);
			unk_0x7C8E9DE09D4AD3FF(0, unk_0xE38610F405049F71(Local_61.f_2), 30f, 786468);
			unk_0x93C0674FC00824D0(uLocal_65);
			unk_0xB5396F1FB088FE38(&uLocal_66);
			unk_0x092B9247AF00F5CF(0, 0, 1);
			unk_0x93C0674FC00824D0(uLocal_66);
			unk_0xB5396F1FB088FE38(&uLocal_67);
			unk_0x30CCF17FEE4BDA53(0, unk_0xE38610F405049F71(Local_61.f_2), Local_61.f_6, 5, 30f, 786468, 99999f, 1f, 0);
			unk_0x092B9247AF00F5CF(0, 0, 1);
			unk_0x93C0674FC00824D0(uLocal_67);
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_64, false);
		}
	}
}

int func_42()
{
	return Local_61.f_0;
}

int func_43(int iParam0)
{
	return Local_63[iParam0 /*3*/];
}

bool func_44(int iParam0)
{
	return !func_45(iParam0);
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_7120)
			{
				return 0;
			}
			if (func_47(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_7121)
			{
				return 0;
			}
			if (func_47(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_7122)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_7123)
			{
				return 0;
			}
			if (func_47(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_46(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_70(unk_0xB23E0F9B63D009A8(iVar0), 0, 1))
		{
			if (BitTest(Global_2657589[iVar0 /*466*/].f_218, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)
{
	return BitTest(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}

int func_48()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_55())
	{
		return 1;
	}
	if (Global_2696917)
	{
		return 1;
	}
	if (func_54())
	{
		return 1;
	}
	if (func_53(159))
	{
		if (!func_52())
		{
			return 1;
		}
	}
	if (func_53(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_49() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_49()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_49()
{
	switch (func_51())
	{
		case 0:
			return func_50();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_50()
{
	switch (Global_2697021)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_51()
{
	return Global_32163;
}

bool func_52()
{
	return Global_2683864.f_698;
}

int func_53(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_54()
{
	return Global_2694526;
}

bool func_55()
{
	return Global_2683864.f_693;
}

void func_56()
{
	wait(0);
}

void func_57()
{
	func_60();
	if (func_42() == 4 && Local_61.f_4 != 0)
	{
		unk_0xCCA6D8A84EE8C88A(Local_61.f_4, 0);
	}
	if (func_4(Local_61.f_2))
	{
		unk_0x001B008A010F2FE6(unk_0xE38610F405049F71(Local_61.f_2), 0f);
	}
	unk_0xB43467C43086A6A1("JOYRIDER_RADIO_SCENE");
	func_59(9, 0);
	func_58();
}

void func_58()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_59(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!BitTest(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_218, bParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_218), bParam0);
		}
	}
	else if (BitTest(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_218, bParam0))
	{
		unk_0x8744D2E3FC95740E(&(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_218), bParam0);
	}
}

void func_60()
{
	unk_0xD0557B139A542F12(&uLocal_65);
}

void func_61(struct<21> Param0)
{
	int iVar0;
	
	func_66(func_67(Param0.f_0), Param0);
	unk_0x17C7D9B3979F5759(1);
	unk_0x552B3BADB43FF551(1);
	func_64(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&Local_61, 12, 0);
	unk_0x7B13DC83218D9AF5(&Local_63, 97, 0);
	if (!func_63())
	{
		func_57();
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		unk_0xAECC5FA98C879D67(0);
		if (unk_0x93E08E0F531E2C35())
		{
			if (Global_2793046.f_4481 == 0)
			{
				iVar0 = unk_0xC5935DFB3F39785A(0, 7);
				switch (iVar0)
				{
					case 0:
						Local_61.f_4 = joaat("stingergt");
						break;
					
					case 1:
						Local_61.f_4 = joaat("entityxf");
						break;
					
					case 2:
						Local_61.f_4 = joaat("feltzer2");
						break;
					
					case 3:
						Local_61.f_4 = joaat("monroe");
						break;
					
					case 4:
						Local_61.f_4 = joaat("cogcabrio");
						break;
					
					case 5:
						Local_61.f_4 = joaat("superd");
						break;
					
					case 6:
						Local_61.f_4 = joaat("infernus");
						break;
				}
			}
			else
			{
				Local_61.f_4 = Global_2793046.f_4481;
				Global_2793046.f_4481 = 0;
			}
			unk_0xCCA6D8A84EE8C88A(Local_61.f_4, 1);
			Local_61.f_5 = func_62(1);
		}
		func_59(9, 1);
		unk_0xCAC4020CCF361AC8("JOYRIDER_RADIO_SCENE");
		Local_63[unk_0xAE032CEDCF23C6D5() /*3*/] = 0;
	}
	else
	{
		func_57();
	}
}

int func_62(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, 32);
	if (bParam0)
	{
		switch (iVar0)
		{
			case 0:
				return joaat("a_m_m_eastsa_01");
			
			case 1:
				return joaat("a_m_m_bevhills_01");
			
			case 2:
				return joaat("a_m_m_bevhills_02");
			
			case 3:
				return joaat("a_m_m_business_01");
			
			case 4:
				return joaat("a_m_m_malibu_01");
			
			case 5:
				return joaat("a_m_m_eastsa_02");
			
			case 6:
				return joaat("a_m_m_hillbilly_01");
			
			case 7:
				return joaat("a_m_m_hillbilly_02");
			
			case 8:
				return joaat("a_m_m_og_boss_01");
			
			case 9:
				return joaat("a_m_m_stlat_02");
			
			case 10:
				return joaat("a_m_y_beachvesp_01");
			
			case 11:
				return joaat("a_m_y_epsilon_01");
			
			case 12:
				return joaat("a_m_m_prolhost_01");
			
			case 13:
				return joaat("a_m_m_salton_01");
			
			case 14:
				return joaat("a_m_m_skater_01");
			
			case 15:
				return joaat("a_m_y_skater_02");
			
			case 16:
				return joaat("a_m_y_methhead_01");
			
			case 17:
				return joaat("a_m_m_skidrow_01");
			
			case 18:
				return joaat("a_m_m_soucent_01");
			
			case 19:
				return joaat("a_m_m_soucent_02");
			
			case 20:
				return joaat("a_m_m_soucent_03");
			
			case 21:
				return joaat("a_m_y_genstreet_02");
			
			case 22:
				return joaat("a_m_y_roadcyc_01");
			
			case 23:
				return joaat("a_m_m_afriamer_01");
			
			case 24:
				return joaat("a_m_m_beach_01");
			
			case 25:
				return joaat("a_m_m_farmer_01");
			
			case 26:
				return joaat("a_m_m_fatlatin_01");
			
			case 27:
				return joaat("a_m_m_genfat_01");
			
			case 28:
				return joaat("a_m_m_indian_01");
			
			case 29:
				return joaat("a_m_m_ktown_01");
			
			case 30:
				return joaat("a_m_m_socenlat_01");
			
			case 31:
				return joaat("a_m_m_mexlabor_01");
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return joaat("a_f_m_bevhills_01");
			
			case 1:
				return joaat("a_f_m_bevhills_02");
			
			case 2:
				return joaat("a_f_m_beach_01");
			
			case 3:
				return joaat("a_f_m_ktown_02");
			
			case 4:
				return joaat("a_f_m_prolhost_01");
			
			case 5:
				return joaat("a_f_m_bodybuild_01");
			
			case 6:
				return joaat("a_f_m_business_02");
			
			case 7:
				return joaat("a_f_m_downtown_01");
			
			case 8:
				return joaat("a_f_m_eastsa_01");
			
			case 9:
				return joaat("a_f_m_eastsa_02");
			
			case 10:
				return joaat("a_f_m_fatwhite_01");
			
			case 11:
				return joaat("a_f_m_ktown_01");
			
			case 12:
				return joaat("a_f_m_ktown_02");
			
			case 13:
				return joaat("a_f_m_salton_01");
			
			case 14:
				return joaat("a_f_m_skidrow_01");
			
			case 15:
				return joaat("a_f_m_soucent_01");
			
			case 16:
				return joaat("a_f_m_soucent_02");
			
			case 17:
				return joaat("a_f_m_soucentmc_01");
			
			case 18:
				return joaat("a_f_m_tramp_01");
			
			case 19:
				return joaat("a_f_m_trampbeac_01");
			
			case 20:
				return joaat("a_f_y_yoga_01");
			
			case 21:
				return joaat("a_f_y_vinewood_02");
			
			case 22:
				return joaat("a_f_y_vinewood_03");
			
			case 23:
				return joaat("a_f_y_vinewood_04");
			
			case 24:
				return joaat("a_f_y_tennis_01");
			
			case 25:
				return joaat("a_f_y_tourist_01");
			
			case 26:
				return joaat("a_f_y_hipster_01");
			
			case 27:
				return joaat("a_f_y_golfer_01");
			
			case 28:
				return joaat("a_f_y_fitness_01");
			
			case 29:
				return joaat("a_f_y_scdressy_01");
			
			case 30:
				return joaat("a_f_y_epsilon_01");
			
			case 31:
				return joaat("a_f_y_hiker_01");
			
			default:
		}
	}
	return joaat("a_f_m_bevhills_01");
}

int func_63()
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
		if (func_55())
		{
			return 0;
		}
		if (func_53(157))
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

int func_64(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_58();
			}
			else
			{
				return 0;
			}
		}
		if (!func_65(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_58();
					}
					else
					{
						return 0;
					}
				}
				if (func_55())
				{
					if (!bParam2)
					{
						func_58();
					}
					else
					{
						return 0;
					}
				}
				if (func_53(157))
				{
					if (!bParam2)
					{
						func_58();
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
					func_58();
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
				func_58();
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
			func_58();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_65(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_66(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		func_58();
	}
	unk_0xDB2434E51017FFCC(uParam0, 0, Param1.f_16);
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 173:
			return 32;
		
		case 174:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 185:
			return 32;
		
		case 186:
			return 32;
		
		case 175:
			return 32;
		
		case 176:
			return 32;
		
		case 180:
			return 32;
		
		case 178:
			return 32;
		
		case 179:
			return 32;
		
		case 183:
			return 32;
		
		case 184:
			return 32;
		
		case 181:
			return 32;
		
		case 182:
			return 32;
		
		case 187:
			return 32;
		
		case 188:
			return 32;
		
		case 189:
			return 32;
		
		case 190:
			return 32;
		
		case 191:
			return 2;
		
		case 196:
			return 1;
		
		case 192:
			return 2;
		
		case 193:
			return 4;
		
		case 194:
			return 2;
		
		case 195:
			return 2;
		
		case 177:
			return 1;
		
		case 197:
			return 2;
		
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
			return 0;
		
		case 219:
			return 1;
		
		case 204:
			return 4;
		
		case 207:
			return 4;
		
		case 208:
			return 1;
		
		case 209:
			return 1;
		
		case 215:
			return 1;
		
		case 211:
			return 2;
		
		case 216:
			return 1;
		
		case 212:
			return 1;
		
		case 210:
			return 2;
		
		case 213:
			return 8;
		
		case 214:
			return 8;
		
		case 217:
			return 1;
		
		case 218:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 205:
			return 16;
		
		case 206:
			return 32;
		
		default:
	}
	switch (func_68(func_69(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_68(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		default:
	}
	return -1;
}

int func_69(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 191:
			return 15;
		
		case 198:
			return 8;
		
		case 192:
			return 14;
		
		case 196:
			return 122;
		
		case 199:
			return 1;
		
		case 197:
			return 5;
		
		case 200:
			return 6;
		
		case 193:
			return 11;
		
		case 201:
			return 0;
		
		case 202:
			return 2;
		
		case 194:
			return 13;
		
		case 203:
			return 3;
		
		case 195:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		default:
	}
	if (bParam1)
	{
	}
	return 312;
}

int func_70(int iParam0, bool bParam1, bool bParam2)
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
