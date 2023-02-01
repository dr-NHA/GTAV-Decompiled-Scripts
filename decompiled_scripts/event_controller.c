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
	int iLocal_64 = 0;
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
	if (unk_0x96CFB880BAC634CE(34))
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	while (true)
	{
		wait(0);
		func_143();
		func_1();
	}
}

void func_1()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	if (unk_0x99DFE4CAC19D527F())
	{
		iVar2 = 0;
		while (iVar2 < unk_0x703C4F7316B7195D(1))
		{
			iVar7 = unk_0x4BC3E5D2FB0A1665(1, iVar2);
			switch (iVar7)
			{
				case 193:
					func_140();
					break;
				
				case 194:
					func_139();
					break;
				
				case 195:
					func_133(iVar2);
					break;
				
				case 196:
					func_132(iVar2);
					break;
				
				case 197:
					func_121(iVar2);
					break;
				
				case 215:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < unk_0x703C4F7316B7195D(0))
	{
		iVar0 = unk_0x4BC3E5D2FB0A1665(0, iVar2);
		iLocal_64 = 1;
		switch (iVar0)
		{
			case 141:
				unk_0xFCEF367B86651ED3(0, iVar2, &uVar1, 1);
				if (unk_0xFC8BFE4B41177C22(uVar1))
				{
					if (unk_0x55B80B6E7AB61270(uVar1))
					{
						if (func_2(iVar3))
						{
							Global_55613.f_1[iVar3] = uVar1;
							iVar3++;
						}
					}
					else if (unk_0x0101C509A6E67F99(uVar1))
					{
						if (func_2(iVar5))
						{
							Global_55613.f_25[iVar5] = uVar1;
							iVar5++;
						}
					}
				}
				break;
			
			case 142:
				unk_0xFCEF367B86651ED3(0, iVar2, &uVar1, 1);
				if (unk_0xFC8BFE4B41177C22(uVar1))
				{
					if (unk_0x55B80B6E7AB61270(uVar1))
					{
						if (func_2(iVar4))
						{
							Global_55613.f_13[iVar4] = uVar1;
							iVar4++;
						}
					}
					else if (unk_0x0101C509A6E67F99(uVar1))
					{
						if (func_2(iVar6))
						{
							Global_55613.f_37[iVar6] = uVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_55613 = iVar3;
	Global_55613.f_12 = iVar4;
	Global_55613.f_24 = iVar5;
	Global_55613.f_36 = iVar6;
}

bool func_2(int iParam0)
{
	return iParam0 < 10;
}

void func_3(int iParam0)
{
	struct<39> Var0;
	int iVar1;
	
	if (unk_0xFCEF367B86651ED3(1, iParam0, &Var0, 39))
	{
		iVar1 = unk_0x7F36EF28AE77E331(Var0.f_38);
		if (iVar1 >= 0 && iVar1 < unk_0xA21ED22C344748B0())
		{
			if (unk_0xB73605870CAE4123(iVar1) || unk_0x5CAC0C9085C92014(iVar1))
			{
				if (unk_0x5CAC0C9085C92014(iVar1))
				{
					func_58(iVar1);
				}
				else
				{
					unk_0xA69636D9FC46B96C(iVar1);
				}
				func_57(Var0.f_37, -1);
			}
			else if (func_49())
			{
				func_4(Var0.f_29, Var0, Var0.f_38, Var0.f_16, Var0.f_35, Var0.f_36);
			}
		}
	}
}

int func_4(struct<6> Param0, struct<16> Param1, var uParam2, struct<13> Param3, var uParam4, int iParam5)
{
	bool bVar0;
	bool bVar1;
	struct<16> Var2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	struct<10> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<16> Var12;
	struct<16> Var13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	
	bVar0 = false;
	if (iParam5 >= 1000000)
	{
		iParam5 = (iParam5 - 1000000);
		bVar0 = true;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_48())
		{
			func_47(uParam2);
			return 0;
		}
		if (func_46())
		{
			func_47(uParam2);
			return 0;
		}
	}
	if (!unk_0x76CD105BCAC6EB9F())
	{
		if (bVar0)
		{
		}
		else if (!unk_0xEDD63461767A518C(&Param3))
		{
			func_47(uParam2);
			return 0;
		}
		if (Global_20326)
		{
			func_47(uParam2);
			return 0;
		}
		bVar1 = true;
		if (!func_45())
		{
			if (!func_44(0))
			{
				if (bVar1)
				{
					func_47(uParam2);
					return 0;
				}
			}
		}
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!func_43(unk_0x259BE71D8A81D4FA()))
		{
			func_47(uParam2);
			return 0;
		}
	}
	if (unk_0xD6F9DEE4765092A9(&Param1))
	{
		func_47(uParam2);
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(&Param0))
	{
		func_47(uParam2);
		return 0;
	}
	Var2 = { Param1 };
	iVar3 = func_42(Var2);
	if (iVar3 != -1)
	{
		func_39(iVar3);
	}
	uVar4 = unk_0x7F36EF28AE77E331(uParam2);
	iVar5 = unk_0x32FF25F8A134DEC8(uVar4);
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 11)
	{
		if (iVar5 == Global_2625771[iVar6 /*4*/].f_3 && unk_0x1DD05E817C89C737() < Global_2625771[iVar6 /*4*/].f_2)
		{
			Global_2625771[iVar6 /*4*/].f_2 = unk_0x1DD05E817C89C737() + 30000;
			iVar6 = 12;
			func_47(uParam2);
			return 0;
		}
		iVar6++;
	}
	Var7.f_1 = -1;
	Var7.f_2 = -1;
	Var7.f_9 = -1;
	func_38(&Var7);
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 63;
	iVar11 = 0;
	StringCopy(&Var12, "", 64);
	StringCopy(&Var13, "", 64);
	iVar14 = 0;
	iVar15 = 0;
	iVar16 = 0;
	iVar17 = 1;
	iVar18 = 0;
	iVar19 = 0;
	if (func_37(&Param0, &iVar8, &iVar11))
	{
		iVar10 = 40;
		iVar15 = 0;
		iVar11 = iVar11;
	}
	else if (func_35(&Param0, &Var7, 0))
	{
		iVar10 = Var7.f_2;
		iVar8 = func_34(iVar10, Var7.f_1);
		iVar9 = func_33(&Var7);
		Var12 = { func_32(&Var7, 0) };
		Var13 = { func_31(&Var7) };
		iVar15 = 1;
		iVar14 = func_30(&Var7, 0);
		iVar19 = func_29(&Var7);
		uVar20 = func_27(&Var7);
		uVar21 = func_26(&Var7);
		bVar22 = func_21(&Var7);
		if (!bVar22)
		{
			iVar18 = 1;
		}
	}
	else
	{
		bVar23 = false;
		if (func_19(unk_0x259BE71D8A81D4FA(), Param3))
		{
			if (!unk_0x76CD105BCAC6EB9F())
			{
				bVar23 = true;
			}
			else
			{
				func_47(uParam2);
				func_17(0);
				return 0;
			}
		}
		if (!func_16())
		{
			if (!bVar23)
			{
				if (func_14(unk_0x259BE71D8A81D4FA(), Param3))
				{
					func_47(uParam2);
					func_17(0);
					return 0;
				}
			}
		}
		if (!func_13())
		{
			func_47(uParam2);
			bVar24 = true;
			func_17(bVar24);
			return 0;
		}
		bVar25 = false;
		if (!bVar23)
		{
			if (func_7(Param3, &bVar25, 1))
			{
				func_47(uParam2);
				func_17(bVar25);
				return 0;
			}
		}
		iVar16 = 1;
		iVar17 = 0;
		iVar15 = 1;
	}
	iVar26 = Global_1665317;
	if (iVar26 >= 12)
	{
		iVar26 = (iVar26 - 1);
	}
	iVar27 = (iVar26 - 1);
	while (iVar27 >= 0)
	{
		Global_2623469[iVar26 /*99*/] = { Global_2623469[iVar27 /*99*/] };
		iVar26 = (iVar26 - 1);
		iVar27 = (iVar27 - 1);
	}
	Global_1665317++;
	if (Global_1665317 > 12)
	{
		Global_1665317 = 12;
	}
	iVar28 = 0;
	Global_2623469[iVar28 /*99*/] = 0;
	Global_2623469[iVar28 /*99*/].f_1 = 0;
	Global_2623469[iVar28 /*99*/].f_5 = 0;
	Global_2623469[iVar28 /*99*/].f_2 = iVar16;
	Global_2623469[iVar28 /*99*/].f_3 = 0;
	Global_2623469[iVar28 /*99*/].f_4 = iVar17;
	Global_2623469[iVar28 /*99*/].f_6 = { Param0 };
	Global_2623469[iVar28 /*99*/].f_12 = uVar20;
	Global_2623469[iVar28 /*99*/].f_13 = uVar21;
	Global_2623469[iVar28 /*99*/].f_15 = { Param1 };
	StringCopy(&(Global_2623469[iVar28 /*99*/].f_31), "", 64);
	Global_2623469[iVar28 /*99*/].f_49 = iVar10;
	Global_2623469[iVar28 /*99*/].f_50 = iVar8;
	Global_2623469[iVar28 /*99*/].f_51 = iVar9;
	Global_2623469[iVar28 /*99*/].f_91 = uParam2;
	Global_2623469[iVar28 /*99*/].f_57 = { Var12 };
	Global_2623469[iVar28 /*99*/].f_73 = { Var13 };
	Global_2623469[iVar28 /*99*/].f_52 = iVar14;
	Global_2623469[iVar28 /*99*/].f_53 = 0;
	Global_2623469[iVar28 /*99*/].f_53.f_1 = 0;
	Global_2623469[iVar28 /*99*/].f_53.f_2 = 0;
	Global_2623469[iVar28 /*99*/].f_56 = iVar15;
	Global_2623469[iVar28 /*99*/].f_90 = uParam4;
	Global_2623469[iVar28 /*99*/].f_92 = -1;
	Global_2623469[iVar28 /*99*/].f_93 = iVar18;
	Global_2623469[iVar28 /*99*/].f_94 = Global_2625823;
	Global_2623469[iVar28 /*99*/].f_95 = iVar19;
	Global_2623469[iVar28 /*99*/].f_98 = unk_0xEDD63461767A518C(&Param3);
	if (Global_2623469[iVar28 /*99*/].f_50 == 0)
	{
		if (Global_2623469[iVar28 /*99*/].f_51 == 1)
		{
			Global_2623469[iVar28 /*99*/].f_56 = 0;
		}
	}
	Global_2623469[iVar28 /*99*/].f_96 = func_6(Param3, iVar28);
	Global_2623469[iVar28 /*99*/].f_97 = 0;
	Global_2623469[iVar28 /*99*/].f_89 = iParam5;
	Global_2625823++;
	Global_2623469[iVar28 /*99*/].f_47 = func_5(Param3);
	if (Global_2623469[iVar28 /*99*/].f_47 != -1)
	{
		Global_2623469[iVar28 /*99*/].f_48 = unk_0x1DD05E817C89C737() + 15000;
	}
	return 1;
}

int func_5(struct<13> Param0)
{
	struct<13> Var0[1];
	int iVar1;
	
	if (!func_16())
	{
		return -1;
	}
	Var0[0 /*13*/] = { Param0 };
	iVar1 = unk_0x310461CE0659232F(&Var0, 1);
	if (iVar1 < 0)
	{
		return -1;
	}
	return iVar1;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	if (!unk_0xEDD63461767A518C(&uParam0))
	{
		return 0;
	}
	if (Global_2623469[iParam13 /*99*/].f_90 > 0)
	{
		return 0;
	}
	return 1;
}

int func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, bool bParam14)
{
	struct<13> Var0;
	
	*iParam13 = 0;
	if (func_12(0))
	{
		return 0;
	}
	if (func_16())
	{
		if (!func_11())
		{
			*iParam13 = 1;
			return 1;
		}
	}
	if (!func_9(1) && !bParam14)
	{
		return 1;
	}
	Var0 = { func_8(unk_0x259BE71D8A81D4FA()) };
	if (!bParam14 && !unk_0xD43ED7463CB7671C(&Var0, &uParam0))
	{
		if (!unk_0xEDD63461767A518C(&uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_8(int iParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(iParam0, &Var0, 13);
	return Var0;
}

int func_9(int iParam0)
{
	if (unk_0x0BA1A956D36B210F() || (func_10() && iParam0 == 0))
	{
		if (unk_0x97DD063A9C6137F8(1) == 0 || unk_0x9A9677D7F3615A86(1, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x97DD063A9C6137F8(1) == 0)
	{
		return 0;
	}
	if (func_11() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_10()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

int func_11()
{
	if (unk_0x0BA1A956D36B210F() && unk_0xD25970CBEE074E07())
	{
		return 1;
	}
	if (unk_0x1226C55CA7D2269A() && unk_0xD25970CBEE074E07())
	{
		return 1;
	}
	if ((func_10() && unk_0xB0DF27929B02C57E() == 0) && unk_0xD25970CBEE074E07())
	{
		return 1;
	}
	if (func_16() && unk_0xD25970CBEE074E07())
	{
		return 1;
	}
	if (unk_0x761778199FE1211C() && unk_0xD25970CBEE074E07())
	{
		return 1;
	}
	return 0;
}

int func_12(int iParam0)
{
	if (unk_0x0BA1A956D36B210F() || (func_10() && iParam0 == 0))
	{
		if (unk_0x97DD063A9C6137F8(0) == 0 || unk_0x9A9677D7F3615A86(0, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x97DD063A9C6137F8(0) == 0)
	{
		return 0;
	}
	if (func_11() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_13()
{
	if (!unk_0x1226C55CA7D2269A())
	{
		return 1;
	}
	return unk_0xD25970CBEE074E07();
}

int func_14(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_15(iParam0))
	{
		if (func_16())
		{
			if (unk_0x8EF8E27D73EB5271(&uParam1))
			{
				return 0;
			}
		}
		if (!unk_0x97DD063A9C6137F8(0))
		{
			if (!unk_0x97DD063A9C6137F8(1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

bool func_16()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

void func_17(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (!unk_0x1226C55CA7D2269A())
		{
			return;
		}
	}
	if (func_16())
	{
		return;
	}
	iVar0 = unk_0x1DD05E817C89C737();
	if (iVar0 < Global_2625820)
	{
		return;
	}
	if (unk_0x4C705AAF75363287())
	{
		return;
	}
	if (bParam0)
	{
		func_18("INV_NO_XBOXLIVE", -1);
	}
	else
	{
		func_18("INV_RESTRICT", -1);
	}
	Global_2625820 = (iVar0 + 1800000);
}

void func_18(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_19(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_15(iParam0))
	{
		if (func_16())
		{
			if (unk_0x8EF8E27D73EB5271(&uParam1))
			{
				return 0;
			}
		}
		if (!func_20())
		{
			return 1;
		}
	}
	return 0;
}

int func_20()
{
	if (unk_0x62B038F95CEA3FE9() == 0)
	{
		return 0;
	}
	if (func_10())
	{
		if (unk_0x97DD063A9C6137F8(1))
		{
			if (unk_0xD25970CBEE074E07())
			{
				return 1;
			}
		}
	}
	else if (func_16())
	{
		if (unk_0x8FF2665359043205(0, -3, 1))
		{
			return 1;
		}
	}
	else if (unk_0x761778199FE1211C())
	{
		if (unk_0x9A9677D7F3615A86(0, -1))
		{
			if (unk_0xD25970CBEE074E07())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_21(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_25(uParam0))
	{
		return BitTest(Global_2625825.f_356[uParam0->f_9 /*75*/].f_10.f_63, 14);
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return BitTest(Global_2628582.f_1.f_63, 14);
		}
		return iVar0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return BitTest(Global_794709.f_4[iVar1 /*88*/].f_76, 14);
		
		case 62:
			return BitTest(Global_978406.f_1804[iVar1 /*88*/].f_76, 14);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x259BE71D8A81D4FA())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_22(var uParam0)
{
	int iVar0;
	
	if (unk_0xD6F9DEE4765092A9(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (BitTest(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x1B79E937E91F40C3(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1818)
			{
				if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x1B79E937E91F40C3(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (BitTest(Global_978406.f_1804[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x1B79E937E91F40C3(&(Global_978406.f_1804[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_978406.f_1804[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 300)
			{
				if (BitTest(Global_978406.f_1804[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x1B79E937E91F40C3(&(Global_978406.f_1804[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0x259BE71D8A81D4FA())
	{
		if (BitTest(Global_1010831.f_4[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0x1B79E937E91F40C3(&(Global_1010831.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (BitTest(Global_1010831.f_4[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1573131.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (BitTest(Global_1010831.f_4[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0x1B79E937E91F40C3(&(Global_1010831.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_23(var uParam0)
{
	if (Global_2628582)
	{
		if (unk_0x1B79E937E91F40C3(&(Global_2628582.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_24(int iParam0)
{
	return iParam0 == 9999;
}

int func_25(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0->f_9;
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_2625825.f_356[iVar0 /*75*/])
	{
		return 0;
	}
	if (!unk_0x1B79E937E91F40C3(&(Global_2625825.f_356[iVar0 /*75*/].f_10), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!BitTest(Global_2625825.f_356[iVar0 /*75*/].f_5, 3))
	{
		return 0;
	}
	return 1;
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_80;
		
		case 62:
			return iVar0;
		
		default:
	}
	return iVar0;
}

int func_27(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = 0;
	iVar2 = func_22(uParam0);
	if (iVar2 == -1)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_28(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_28(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_159989[iVar1 /*13*/];
		
		case 62:
			return Global_978406.f_28205[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

int func_29(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_25(uParam0))
	{
		return BitTest(Global_2625825.f_356[uParam0->f_9 /*75*/].f_10.f_63, 17);
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return BitTest(Global_2628582.f_1.f_63, 17);
		}
		return iVar0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return BitTest(Global_794709.f_4[iVar1 /*88*/].f_76, 17);
		
		case 62:
			return BitTest(Global_978406.f_1804[iVar1 /*88*/].f_76, 17);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x259BE71D8A81D4FA())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_30(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!bParam1)
	{
		if (func_25(uParam0))
		{
			if (BitTest(Global_1573916.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2628716.f_513[uParam0->f_9];
			}
		}
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return Global_2628582.f_1.f_54;
		}
		return iVar0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_54;
		
		case 62:
			return Global_978406.f_1804[iVar1 /*88*/].f_54;
		
		case 40:
			return 0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x259BE71D8A81D4FA())
	{
		return Global_1010831.f_4[iVar1 /*88*/].f_54;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

struct<16> func_31(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NO DESCRIPTION", 64);
	if (func_25(uParam0))
	{
		return Global_2625825.f_356[uParam0->f_9 /*75*/].f_10.f_28;
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return Global_2628582.f_1.f_28;
		}
		return Var0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_38;
		
		case 62:
			return Global_978406.f_1804[iVar1 /*88*/].f_38;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x259BE71D8A81D4FA())
	{
		return Global_1010831.f_4[iVar1 /*88*/].f_38;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

struct<16> func_32(var uParam0, bool bParam1)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "UNKNOWN", 64);
	if (bParam1)
	{
		StringCopy(&Var0, "", 64);
	}
	if (!bParam1)
	{
		if (func_25(uParam0))
		{
			if (BitTest(Global_1573916.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2628716[uParam0->f_9 /*16*/];
			}
			return Global_2625825.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return Global_2628582.f_1.f_12;
		}
		return Var0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_22;
		
		case 62:
			return Global_978406.f_1804[iVar1 /*88*/].f_22;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x259BE71D8A81D4FA())
	{
		return Global_1010831.f_4[iVar1 /*88*/].f_22;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_33(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (func_25(uParam0))
	{
		return Global_2625825.f_356[uParam0->f_9 /*75*/].f_10.f_55;
	}
	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
		{
			return Global_2628582.f_1.f_55;
		}
		return iVar0;
	}
	iVar1 = func_22(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_68;
		
		case 62:
			return Global_978406.f_1804[iVar1 /*88*/].f_68;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x259BE71D8A81D4FA())
	{
		return Global_1010831.f_4[iVar1 /*88*/].f_68;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_34(int iParam0, int iParam1)
{
	if (func_24(iParam1))
	{
		if (Global_2628582)
		{
			return Global_2628582.f_1.f_53;
		}
		return 312;
	}
	switch (iParam0)
	{
		case 63:
			return Global_794709.f_4[iParam1 /*88*/].f_65;
		
		case 62:
			return Global_978406.f_1804[iParam1 /*88*/].f_65;
		
		default:
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		return Global_1010831.f_4[iParam1 /*88*/].f_65;
	}
	else if (iParam0 < 32)
	{
		return 312;
	}
	return 312;
}

int func_35(char* sParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 1818;
	if (!bParam2)
	{
		iVar2 = 1800;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0x1B79E937E91F40C3(&(Global_794709.f_4[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_794709.f_4[iVar0 /*88*/].f_65;
				*uParam1 = func_36(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794709.f_4[iVar0 /*88*/] };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 300)
	{
		if (BitTest(Global_978406.f_1804[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0x1B79E937E91F40C3(&(Global_978406.f_1804[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_978406.f_1804[iVar0 /*88*/].f_65;
				*uParam1 = func_36(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		if (BitTest(Global_1010831.f_4[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0x1B79E937E91F40C3(&(Global_1010831.f_4[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_1010831.f_4[iVar0 /*88*/].f_65;
				*uParam1 = func_36(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = unk_0x259BE71D8A81D4FA();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 191;
		
		case 14:
			return 192;
		
		case 122:
			return 196;
		
		case 11:
			return 193;
		
		case 13:
			return 194;
		
		case 12:
			return 195;
		
		case 8:
			return 198;
		
		case 1:
			return 199;
		
		case 5:
			return 197;
		
		case 6:
			return 200;
		
		case 3:
			return 203;
		
		case 0:
			return 201;
		
		case 2:
			return 202;
		
		case 148:
			return 49;
		
		case 151:
			return 52;
		
		case 152:
			return 53;
		
		case 157:
			return 54;
		
		case 153:
			return 55;
		
		case 154:
			return 56;
		
		case 155:
			return 57;
		
		case 159:
			return 58;
		
		case 162:
			return 51;
		
		case 142:
			return 60;
		
		case 160:
			return 62;
		
		case 164:
			return 63;
		
		case 163:
			return 64;
		
		case 166:
			return 65;
		
		case 167:
			return 66;
		
		case 168:
			return 67;
		
		case 169:
			return 68;
		
		case 170:
			return 69;
		
		case 171:
			return 70;
		
		case 172:
			return 71;
		
		case 173:
			return 72;
		
		case 178:
			return 73;
		
		case 188:
			return 74;
		
		case 214:
			return 75;
		
		case 215:
			return 76;
		
		case 216:
			return 77;
		
		case 217:
			return 78;
		
		case 218:
			return 79;
		
		case 219:
			return 80;
		
		case 220:
			return 81;
		
		case 221:
			return 82;
		
		case 179:
			return 84;
		
		case 189:
			return 83;
		
		case 180:
			return 85;
		
		case 182:
			return 87;
		
		case 183:
			return 88;
		
		case 185:
			return 89;
		
		case 186:
			return 90;
		
		case 190:
			return 91;
		
		case 191:
			return 92;
		
		case 192:
			return 93;
		
		case 193:
			return 94;
		
		case 205:
			return 102;
		
		case 194:
			return 95;
		
		case 197:
			return 96;
		
		case 198:
			return 97;
		
		case 195:
			return 98;
		
		case 199:
			return 99;
		
		case 200:
			return 100;
		
		case 201:
			return 101;
		
		case 207:
			return 103;
		
		case 208:
			return 104;
		
		case 209:
			return 105;
		
		case 210:
			return 106;
		
		case 225:
			return 107;
		
		case 226:
			return 108;
		
		case 227:
			return 109;
		
		case 229:
			return 110;
		
		case 230:
			return 111;
		
		case 233:
			return 113;
		
		case 237:
			return 115;
		
		case 238:
			return 116;
		
		case 249:
			return 123;
		
		case 239:
			return 117;
		
		case 240:
			return 118;
		
		case 241:
			return 119;
		
		case 242:
			return 120;
		
		case 244:
			return 121;
		
		case 248:
			return 122;
		
		case 250:
			return 124;
		
		case 243:
			return 125;
		
		case 158:
			return 126;
		
		case 181:
			return 86;
		
		case 150:
			return 127;
		
		case 24:
			return 128;
		
		case 26:
			return 129;
		
		case 256:
			return 130;
		
		case 258:
			return 131;
		
		case 259:
			return 133;
		
		case 271:
			return 134;
		
		case 273:
			return 135;
		
		case 276:
			return 136;
		
		case 277:
			return 137;
		
		case 262:
			return 138;
		
		case 263:
			return 139;
		
		case 264:
			return 140;
		
		case 268:
			return 141;
		
		case 269:
			return 143;
		
		case 270:
			return 144;
		
		case 275:
			return 145;
		
		case 286:
			return 146;
		
		case 267:
			return 148;
		
		case 266:
			return 147;
		
		case 287:
			return 149;
		
		case 289:
			return 150;
		
		case 147:
			return 151;
		
		case 291:
			return 152;
		
		case 292:
			return 153;
		
		case 293:
			return 154;
		
		case 294:
			return 155;
		
		case 295:
			return 156;
		
		case 296:
			return 157;
		
		case 297:
			return 158;
		
		case 298:
			return 159;
		
		case 299:
			return 160;
		
		case 300:
			return 161;
		
		case 301:
			return 162;
		
		case 288:
			return 163;
		
		case 290:
			return 164;
		
		case 304:
			return 165;
		
		case 305:
			return 166;
		
		case 306:
			return 167;
		
		case 307:
			return 168;
		
		case 308:
			return 169;
		
		case 309:
			return 170;
		
		case 310:
			return 171;
		
		case 311:
			return 172;
		
		default:
	}
	return 0;
}

int func_37(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	char[] cVar1[8];
	char cVar2[16];
	char[] cVar3[8];
	
	if (unk_0xD6F9DEE4765092A9(uParam0))
	{
		return 0;
	}
	iVar0 = unk_0x31A0D8A679F7D5A7(sParam0);
	if (!iVar0 > 12)
	{
		return 0;
	}
	StringCopy(&cVar1, unk_0xE82BC2F91FAEEAE8(sParam0, 0, 5), 8);
	if (!unk_0x1B79E937E91F40C3(&cVar1, "FAKE_"))
	{
		return 0;
	}
	StringCopy(&cVar2, unk_0xE82BC2F91FAEEAE8(sParam0, 5, 12), 16);
	if (unk_0x1B79E937E91F40C3(&cVar2, "GOLF___"))
	{
		*iParam1 = 11;
	}
	else if (unk_0x1B79E937E91F40C3(&cVar2, "TENNIS_"))
	{
		*iParam1 = 12;
	}
	else if (unk_0x1B79E937E91F40C3(&cVar2, "PILOTS_"))
	{
		*iParam1 = 122;
	}
	else if (unk_0x1B79E937E91F40C3(&cVar2, "SHOOTR_"))
	{
		*iParam1 = 13;
	}
	else if (unk_0x1B79E937E91F40C3(&cVar2, "DARTS__"))
	{
		*iParam1 = 14;
	}
	else if (unk_0x1B79E937E91F40C3(&cVar2, "ARMWRS_"))
	{
		*iParam1 = 15;
	}
	else
	{
		return 0;
	}
	StringCopy(&cVar3, unk_0xE82BC2F91FAEEAE8(sParam0, 12, iVar0), 8);
	if (!unk_0xA2ADD4A27CA857C2(&cVar3, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_38(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	StringCopy(&(uParam0->f_3), "", 24);
	uParam0->f_9 = -1;
}

void func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 >= Global_1665317)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (unk_0x1DD05E817C89C737() > Global_2625771[iVar0 /*4*/].f_2 || Global_2625771[iVar0 /*4*/].f_2 == 0)
		{
			if (unk_0xA21ED22C344748B0() > 0 && Global_2623469[iParam0 /*99*/].f_91 < unk_0xA21ED22C344748B0())
			{
				Global_2625771[iVar0 /*4*/].f_3 = unk_0x32FF25F8A134DEC8(Global_2623469[iParam0 /*99*/].f_91);
				Global_2625771[iVar0 /*4*/].f_2 = unk_0x1DD05E817C89C737() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_2623469[iParam0 /*99*/].f_92 != -1)
	{
		unk_0xFE3A52C5B7AE3101(Global_2623469[iParam0 /*99*/].f_92);
	}
	if (!Global_2623469[iParam0 /*99*/].f_56)
	{
		if (Global_2623469[iParam0 /*99*/].f_52 != 0)
		{
			unk_0x2D133345AB736461(Global_2623469[iParam0 /*99*/].f_52);
		}
	}
	func_47(Global_2623469[iParam0 /*99*/].f_91);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_1665317)
	{
		Global_2623469[iVar1 /*99*/] = { Global_2623469[iVar2 /*99*/] };
		iVar1++;
		iVar2++;
	}
	func_41(iVar1);
	Global_1665317 = (Global_1665317 - 1);
	if (Global_1665290)
	{
		if (Global_1665288 > 0)
		{
			func_40();
		}
	}
}

void func_40()
{
	Global_1665290 = 0;
}

void func_41(int iParam0)
{
	Global_2623469[iParam0 /*99*/] = 0;
	Global_2623469[iParam0 /*99*/].f_1 = 0;
	Global_2623469[iParam0 /*99*/].f_5 = 0;
	StringCopy(&(Global_2623469[iParam0 /*99*/].f_15), "", 64);
	StringCopy(&(Global_2623469[iParam0 /*99*/].f_31), "", 64);
	Global_2623469[iParam0 /*99*/].f_47 = -1;
	Global_2623469[iParam0 /*99*/].f_48 = unk_0x1DD05E817C89C737();
	Global_2623469[iParam0 /*99*/].f_49 = -1;
	Global_2623469[iParam0 /*99*/].f_50 = -1;
	Global_2623469[iParam0 /*99*/].f_51 = -1;
	Global_2623469[iParam0 /*99*/].f_52 = 0;
	Global_2623469[iParam0 /*99*/].f_53 = 0;
	Global_2623469[iParam0 /*99*/].f_53.f_1 = 0;
	Global_2623469[iParam0 /*99*/].f_53.f_2 = 0;
	Global_2623469[iParam0 /*99*/].f_56 = 0;
	StringCopy(&(Global_2623469[iParam0 /*99*/].f_57), "", 64);
	StringCopy(&(Global_2623469[iParam0 /*99*/].f_73), "", 64);
	Global_2623469[iParam0 /*99*/].f_89 = 0;
	Global_2623469[iParam0 /*99*/].f_90 = 0;
	Global_2623469[iParam0 /*99*/].f_91 = -1;
	Global_2623469[iParam0 /*99*/].f_92 = -1;
	Global_2623469[iParam0 /*99*/].f_93 = 0;
	Global_2623469[iParam0 /*99*/].f_94 = -1;
	Global_2623469[iParam0 /*99*/].f_95 = 0;
	Global_2623469[iParam0 /*99*/].f_96 = 0;
	Global_2623469[iParam0 /*99*/].f_97 = 0;
	Global_2623469[iParam0 /*99*/].f_98 = 0;
}

int func_42(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1665317)
	{
		if (unk_0x1B79E937E91F40C3(&uParam0, &(Global_2623469[iVar0 /*99*/].f_15)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_43(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_139, 22);
}

int func_44(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

int func_45()
{
	if (Global_113648.f_9087.f_330[0 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_46()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139, 2);
}

void func_47(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x7F36EF28AE77E331(uParam0);
	if (iVar0 < 0 || iVar0 >= unk_0xA21ED22C344748B0())
	{
		return;
	}
	if (unk_0x97F5F6E518D1ADB5(iVar0))
	{
		return;
	}
}

bool func_48()
{
	return Global_1575018 == 10;
}

int func_49()
{
	if (!Global_78558)
	{
		return 1;
	}
	else if (func_50())
	{
		return 1;
	}
	return 0;
}

int func_50()
{
	if (!func_51())
	{
		return 0;
	}
	return 1;
}

int func_51()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_56())
	{
		return 1;
	}
	if (func_55())
	{
		return 1;
	}
	return func_52(120, -1);
}

int func_52(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2848282[iParam0 /*3*/][func_53(iParam1)];
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_54();
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

int func_54()
{
	return Global_1574918;
}

bool func_55()
{
	return Global_1575048;
}

bool func_56()
{
	return Global_1575050;
}

void func_57(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = func_54();
	}
	Global_1575040[iVar0] = uParam0;
}

void func_58(int iParam0)
{
	func_114();
	if (func_113(1))
	{
		if (!func_102())
		{
			if (!func_91(1))
			{
				if (unk_0x834C960822A4683F())
				{
					func_90();
				}
				func_61(1, 0);
				unk_0xA69636D9FC46B96C(iParam0);
				func_60();
				func_59();
			}
		}
	}
}

void func_59()
{
	Global_1935368.f_7 = 1;
}

void func_60()
{
	Global_1935368.f_6 = 1;
}

void func_61(int iParam0, bool bParam1)
{
	if (func_113(iParam0))
	{
		Global_1935368.f_16[iParam0 /*44*/].f_5 = 1;
		func_63(iParam0, 0);
		func_62();
		if (bParam1)
		{
			Global_1935368 = 1;
		}
	}
}

void func_62()
{
	Global_1935368.f_2 = 1;
}

void func_63(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	if (!unk_0x834C960822A4683F())
	{
		if (bParam1)
		{
			func_89();
			func_75(unk_0x259BE71D8A81D4FA(), 0, 81920, 0);
			Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_95 = 8;
			func_74();
			func_73();
		}
		func_72(iParam0);
		func_71(iParam0);
		func_69();
		func_68();
		func_62();
	}
	Var0 = { func_67(iParam0) };
	func_66(iParam0);
	func_64(&Var0);
}

void func_64(char* sParam0)
{
	StringCopy(&(Global_2683864.f_860), sParam0, 24);
	if (func_65())
	{
		StringCopy(&(Global_1048576.f_44), sParam0, 24);
	}
}

bool func_65()
{
	return BitTest(Global_2684801.f_1.f_2809, 5);
}

void func_66(int iParam0)
{
	Global_1935368.f_16[iParam0 /*44*/].f_3 = 1;
}

struct<6> func_67(int iParam0)
{
	return Global_1935368.f_16[iParam0 /*44*/].f_6;
}

void func_68()
{
	Global_2683864.f_9 = 100;
}

void func_69()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2683864, 5);
	func_70();
}

void func_70()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2683864, 8);
}

void func_71(var uParam0)
{
	Global_1935368.f_8 = uParam0;
}

void func_72(var uParam0)
{
	Global_1935368.f_9 = uParam0;
}

void func_73()
{
	Global_2692735.f_1 = 0;
}

void func_74()
{
	char* sVar0;
	
	StringCopy(&(Global_2683864.f_860), sVar0, 24);
}

void func_75(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x828F3FAE99DA791A())
		{
			unk_0x6FF322107B12B749(0);
		}
	}
	if (func_88())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x76CD105BCAC6EB9F())
	{
		uVar0 = iParam2;
		unk_0x4686BC3BFDBB5348(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0x834C960822A4683F())
		{
			bVar1 = false;
		}
		if (!func_86())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x762604C40829DB72(iParam0) && (unk_0x75EAB09F5E974116(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0x56E414973C2A8C0E(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x76CD105BCAC6EB9F())
				{
					unk_0x6E2FA5434737D22F(1);
				}
				else if (bVar14 || (!func_84(unk_0x259BE71D8A81D4FA(), 0) && !func_83()))
				{
					unk_0x4285E11B28063EE0(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x76CD105BCAC6EB9F() && !bVar19)
					{
						unk_0x6E2FA5434737D22F(0);
					}
					Global_2657589[iParam0 /*466*/].f_254 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_80(0, 0, 0);
					if (bVar25)
					{
						unk_0xE3F88173F42C071B();
					}
				}
				if (!func_79(uVar27) && !unk_0xB431D60610E7F85F(uVar27))
				{
					if (!bVar22)
					{
						unk_0x44C48AC14D3C09ED(uVar27, true, 0);
					}
				}
				if (!unk_0xA3736D76B0E93E93(uVar27))
				{
					if (!bVar21)
					{
						unk_0x5D7CD709B34C90F0(uVar27, false);
					}
					unk_0x11C125313CB8ADA2(uVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x5D7CD709B34C90F0(uVar27, false);
				}
				unk_0x3F58BFCF656F0DF1(uVar27, true);
				unk_0x2B52F77101390E6F(iParam0, 0);
				unk_0x6C4F5AA91D39455C(iParam0, 0);
				if (unk_0x4CEC77F224BCD884(uVar27) && unk_0x69CD279BFCFE278E(uVar27))
				{
					unk_0xAF8337BF5A296283(uVar27);
				}
				unk_0x9FF00EA9A61211D2(uVar27, 1);
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) == 0)
				{
					func_78();
					func_77();
				}
				if (unk_0x705A7AB2D4BC0A9B())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x787F8EE1F6FBDC6D())
				{
				}
				Global_2657589[iParam0 /*466*/].f_255 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2635559.f_2681)
				{
					Global_2635559.f_2681 = 0;
				}
			}
			else
			{
				if (!func_79(uVar27) && !unk_0xB431D60610E7F85F(uVar27))
				{
					if (!bVar22)
					{
						unk_0x44C48AC14D3C09ED(uVar27, !bVar15, 0);
					}
					if (!unk_0xA3736D76B0E93E93(uVar27))
					{
						if (!bVar21)
						{
							unk_0x5D7CD709B34C90F0(uVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x11C125313CB8ADA2(uVar27, 1);
						}
					}
					if (func_76(Global_4718592.f_166301))
					{
						unk_0x5D7CD709B34C90F0(uVar27, true);
					}
				}
				if (Global_1575035)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x2B52F77101390E6F(iParam0, 0);
				}
				else
				{
					unk_0x2B52F77101390E6F(iParam0, 1);
				}
				unk_0x3F58BFCF656F0DF1(uVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xBFD01C2045360289(uVar27) && !unk_0x7F420695E3F776FB(uVar27, 0))
					{
						unk_0x19626F992DC71FB9(uVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x4686BC3BFDBB5348(iParam0, bParam1, iVar28);
		}
	}
}

bool func_76(int iParam0)
{
	return iParam0 == 17;
}

void func_77()
{
	struct<3> Var0;
	
	Global_2672505.f_1024 = 0;
	Global_2672505.f_1025 = 0;
	Global_2672505.f_1026 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672505.f_1031 = -1;
	Global_2672505.f_1032 = 0;
	Global_2635559.f_2692 = { Var0 };
}

void func_78()
{
	Global_2635559.f_702 = 0;
	Global_2635559.f_2735 = 0;
	Global_2635559.f_515 = 0;
	Global_2635559.f_606 = 0;
	Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_217 = 0;
	Global_2635559.f_2690 = 0;
}

int func_79(var uParam0)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x9B5C1660CCDF7189(uParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xFC8BFE4B41177C22(iParam1))
		{
			if (unk_0x501EBB0523078750(iParam1))
			{
				if (!unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), unk_0x1C1C92A1CBAE364B(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_82();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x07938654FF332D78(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 1);
			}
		}
		if (func_84(unk_0x259BE71D8A81D4FA(), 0))
		{
			unk_0x522EF6D7B4059F2C(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xF11FEC6A04FD7226(iParam0, iParam1);
		}
		unk_0x4BDB60141FD6E156(iParam0, iParam1);
		func_81(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, 1);
	}
}

void func_82()
{
	int iVar0;
	
	if (!unk_0xAD15761928FCF79C())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0xBCF87EE3DC296C2A(iVar0);
				iVar0++;
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 0);
		}
	}
}

bool func_83()
{
	return BitTest(Global_2621446, 3);
}

bool func_84(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_85(-1, 0) == 8;
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

int func_85(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_54();
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

int func_86()
{
	if (func_87() == 0)
	{
		return 1;
	}
	return 0;
}

int func_87()
{
	return Global_1574632.f_18;
}

int func_88()
{
	if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861, 2) && !Global_2684801.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_89()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2683864, 7);
}

void func_90()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_2683864.f_2), 15);
}

int func_91(int iParam0)
{
	if (iParam0 || func_101())
	{
		if (!func_93(1))
		{
			return 1;
		}
		if (!func_92())
		{
			return 1;
		}
		if (unk_0xB10D024D4A098884())
		{
			return 1;
		}
	}
	return 0;
}

bool func_92()
{
	return Global_1935368.f_4;
}

int func_93(bool bParam0)
{
	if (!func_98())
	{
		return 0;
	}
	if ((func_96(func_97(-1), 0) >= 1 || func_52(123, -1)) && func_52(133, -1))
	{
		func_95();
		return 1;
	}
	else if (bParam0)
	{
		func_94();
	}
	return 0;
}

void func_94()
{
	Global_1935368.f_5 = 1;
}

void func_95()
{
	Global_1935368.f_4 = 1;
}

int func_96(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_297010[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_297010[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_97(int iParam0)
{
	return Global_1665638[func_53(iParam0)];
}

int func_98()
{
	if (func_100() && func_99(0))
	{
		return 1;
	}
	return 0;
}

var func_99(int iParam0)
{
	return Global_1574538[iParam0];
}

var func_100()
{
	return func_99(func_54() + 1);
}

var func_101()
{
	return Global_1935368.f_2;
}

int func_102()
{
	if (((((func_112() || !func_110(-1)) || !func_108()) || !func_105()) || !func_104()) || func_103())
	{
		return 1;
	}
	return 0;
}

var func_103()
{
	return Global_2694539;
}

int func_104()
{
	if (unk_0x38640D2193CB547F(903) == 1)
	{
		return 1;
	}
	return 0;
}

int func_105()
{
	int iVar0;
	
	if (func_106(&iVar0) == 0)
	{
		if (iVar0 == 1)
		{
			return 0;
		}
	}
	return 1;
}

int func_106(var uParam0)
{
	if (func_107())
	{
		*uParam0 = 11;
		return 1;
	}
	return unk_0x0C81430427CA20D7(uParam0);
}

bool func_107()
{
	return Global_32441;
}

int func_108()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_109(iVar0) == 1)
		{
			iVar0 = 2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_109(int iParam0)
{
	if (func_52(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_111(iParam0);
	uVar1 = unk_0x38640D2193CB547F(uVar0);
	if (BitTest(uVar1, 1))
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_54();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

var func_112()
{
	return Global_2683864.f_743;
}

bool func_113(int iParam0)
{
	return Global_1935368.f_16[iParam0 /*44*/].f_4;
}

void func_114()
{
	int iVar0;
	int iVar1;
	
	func_120();
	if (unk_0x23AB41CD7BD481B9() && !func_117())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = unk_0xC9892FE6CC695923(func_116(iVar0));
			if (iVar1 > 0)
			{
				Global_1935368.f_16[iVar0 /*44*/] = iVar1;
				func_115(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1935368.f_16[iVar0 /*44*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_115(int iParam0, int iParam1)
{
	bool bVar0;
	struct<16> Var1;
	var uVar2;
	
	bVar0 = true;
	if (unk_0x59632E3312C5FFDF(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_1935368.f_16[iParam0 /*44*/].f_6), {Var1}, 6);
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0x59632E3312C5FFDF(iParam1, "playlist", &Var1))
	{
		Global_1935368.f_16[iParam0 /*44*/].f_12 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0xF5EB76164CE420A5(iParam1, &Var1))
	{
		Global_1935368.f_16[iParam0 /*44*/].f_28 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (iParam0 == 1)
	{
		if (unk_0x72930FB68F9B4179(iParam1, "coronaCountdown", &uVar2))
		{
			Global_1935368.f_16[iParam0 /*44*/].f_1 = uVar2;
		}
		else
		{
			Global_1935368.f_16[iParam0 /*44*/].f_1 = 120000;
		}
		Global_1935368.f_16[iParam0 /*44*/].f_2 = 0;
		if (unk_0x72930FB68F9B4179(iParam1, "eventSubType", &uVar2))
		{
			Global_1935368.f_16[iParam0 /*44*/].f_2 = uVar2;
		}
	}
	if (bVar0)
	{
		if (iParam0 != 1)
		{
			Global_1935368.f_1 = 1;
		}
		Global_1935368.f_16[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_1935368.f_16[iParam0 /*44*/].f_4 = 0;
	}
}

char* func_116(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TournamentQualifying";
		
		case 1:
			return "Tournament";
		
		case 2:
			return "LiveStreaming";
		
		case 3:
			return "Sweepstakes";
		
		case 4:
			return "FeaturedPlaylist";
		
		default:
	}
	return "";
}

int func_117()
{
	if (!func_118())
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	if (func_119())
	{
		return 0;
	}
	if (unk_0x5676319ACE5BEC37() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_119()
{
	return Global_2695033;
}

void func_120()
{
	struct<281> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = 6;
	Global_1935368 = { Var0 };
}

void func_121(int iParam0)
{
	var uVar0;
	
	if (Global_78558)
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
	}
	else
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Hang_Up", &Global_20372, 1);
	}
	if (unk_0xFCEF367B86651ED3(1, iParam0, &uVar0, 21))
	{
		func_123();
	}
	Global_2800025.f_1 = 0;
	Global_2800025.f_33 = -1;
	Global_2800025.f_34 = -1;
	StringCopy(&(Global_2800025.f_4), "", 64);
	func_122(&(Global_2800025.f_20));
}

void func_122(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_123()
{
	Global_2800025.f_2 = 1;
	Global_2800025.f_38 = 1;
	if (unk_0x261E3728EE56B3AC())
	{
		if (unk_0x5150DDF9D3BDA9E5())
		{
			while (unk_0x8BDB5F6FED3994AD())
			{
				wait(0);
			}
			unk_0x7D8697356CC73FFD();
			Global_2800025 = 0;
			Global_2800025.f_2 = 0;
		}
		else if (func_131(Global_2800025.f_20))
		{
			if (unk_0xEDD63461767A518C(&(Global_2800025.f_20)))
			{
				if (!unk_0x484CF81C32C3D413(&(Global_2800025.f_20)))
				{
					func_130();
				}
			}
		}
		else
		{
			func_130();
		}
	}
	else
	{
		func_130();
	}
	if (Global_2800025.f_37)
	{
		func_124(0);
	}
	Global_2800025.f_37 = 0;
	Global_2800025.f_3 = 0;
}

void func_124(int iParam0)
{
	if (func_129())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_128())
		{
			func_126(1, 1);
		}
		else
		{
			func_126(0, 0);
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
	if (!func_125())
	{
		Global_20383.f_1 = 3;
	}
}

int func_125()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_126(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_127(0))
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

int func_127(int iParam0)
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

bool func_128()
{
	return BitTest(Global_1962996, 5);
}

bool func_129()
{
	return BitTest(Global_1962996, 19);
}

void func_130()
{
	Global_2800025.f_1 = 0;
	Global_2800025 = 0;
	Global_2800025.f_2 = 0;
	Global_2800025.f_33 = -1;
	Global_2800025.f_34 = -1;
	StringCopy(&(Global_2800025.f_4), "", 64);
	StringCopy(&(Global_2800025.f_39[0 /*16*/]), "", 64);
	Global_2800025.f_38 = 0;
	Global_2800025.f_56 = 0;
	Global_2800025.f_57 = 0;
	Global_2800025.f_58 = -2;
	Global_2800025.f_3 = 0;
	func_122(&(Global_2800025.f_20));
}

bool func_131(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xA8F635A578C0CE07(&uParam0, 13);
}

void func_132(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0xFCEF367B86651ED3(1, iParam0, &Var0, 15))
	{
		Global_2800025.f_33 = Var0.f_1;
		Global_2800025.f_34 = Var0.f_0;
	}
}

void func_133(int iParam0)
{
	struct<9> Var0;
	
	if (unk_0xFCEF367B86651ED3(1, iParam0, &Var0, 21))
	{
		if (Global_2800025.f_3 == 0)
		{
			if (!func_134(&(Var0.f_8)))
			{
				unk_0x04C07C028D5A3A1A(0, 2);
			}
			else
			{
				Global_2800025.f_3 = 1;
				MemCopy(&(Global_2800025.f_4), {Var0}, 16);
				Global_2800025.f_20 = { Var0.f_8 };
				StringCopy(&(Global_2800025.f_39[0 /*16*/]), "", 64);
				Global_2800025.f_58 = -2;
				Global_2800025.f_56 = 0;
				Global_2800025.f_57 = 0;
			}
		}
		else if (!func_134(&(Var0.f_8)))
		{
			unk_0x04C07C028D5A3A1A(0, 2);
		}
		else
		{
			Global_2800025.f_3 = 1;
			MemCopy(&(Global_2800025.f_4), {Var0}, 16);
			Global_2800025.f_20 = { Var0.f_8 };
			StringCopy(&(Global_2800025.f_39[0 /*16*/]), "", 64);
			Global_2800025.f_58 = -2;
			Global_2800025.f_56 = 0;
			Global_2800025.f_57 = 0;
		}
	}
}

int func_134(var uParam0)
{
	if (Global_78558)
	{
		if (func_50() == 0)
		{
			return 0;
		}
		if (func_138(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
			{
				if (unk_0x837FF265C016E3B7(unk_0x4A8C381C258A124D()) >= 1f)
				{
					return 0;
				}
			}
		}
	}
	if (unk_0x5676319ACE5BEC37() == 0)
	{
		return 0;
	}
	if (Global_2800025.f_1)
	{
	}
	if (Global_20592 == 1)
	{
		return 0;
	}
	if (Global_1836619)
	{
		return 0;
	}
	if (Global_2800025.f_36)
	{
		return 0;
	}
	if (func_125())
	{
		return 0;
	}
	if (((Global_43257 != 6 && Global_43257 != 8) && Global_43257 != 12) && Global_43257 != 15)
	{
		return 0;
	}
	if (func_137() && !func_136(12))
	{
		return 0;
	}
	if (unk_0xE87F28FD4128D063())
	{
		return 0;
	}
	if (unk_0x0CB7695268A7F50F())
	{
		return 0;
	}
	if (!func_135(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (unk_0x4D9174D8796EA622())
	{
		return 0;
	}
	if (Global_78819)
	{
		return 0;
	}
	if (unk_0x7B3F26F5D11BF3BE())
	{
		if (!unk_0xF060DE6D44C11C50(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 0;
	}
	if (unk_0x73038C255039CB0A(uParam0) || unk_0x4BD40114338C93C0(uParam0))
	{
		return 0;
	}
	if (unk_0xD948F622B2C316C0(uParam0) || unk_0x48888A41791BFEF1(uParam0))
	{
		return 0;
	}
	if (unk_0x6FE3848CD1092574())
	{
		if (func_16())
		{
			if (unk_0x03D7696E3D331706())
			{
				return 0;
			}
		}
		else if (func_10())
		{
			return 0;
		}
	}
	return 1;
}

int func_135(int iParam0)
{
	int iVar0;
	struct<13> Var1;
	
	if (unk_0x62B038F95CEA3FE9() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != unk_0x259BE71D8A81D4FA())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0x0BA1A956D36B210F() || func_10())
	{
		if (unk_0x9A9677D7F3615A86(0, iVar0))
		{
			if (unk_0xD25970CBEE074E07())
			{
				return 1;
			}
		}
	}
	if (unk_0x1226C55CA7D2269A() || func_16())
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			if (unk_0x521B8DE052C56837(0, -3, 1) || unk_0x9A9677D7F3615A86(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_8(iParam0) };
			if (unk_0x9A9677D7F3615A86(0, -1) || (unk_0x9A9677D7F3615A86(1, -1) && unk_0xEDD63461767A518C(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x9A9677D7F3615A86(0, iVar0))
		{
			if (unk_0xD25970CBEE074E07())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_136(int iParam0)
{
	return Global_43257 == iParam0;
}

int func_137()
{
	if (Global_43257 == 15)
	{
		return 0;
	}
	return 1;
}

int func_138(int iParam0, bool bParam1, bool bParam2)
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

void func_139()
{
	func_130();
}

void func_140()
{
	Global_2800025.f_1 = 1;
	Global_2800025.f_33 = -1;
	Global_2800025.f_34 = -1;
	if (unk_0xA0C7B98BCF1EEF9E(Global_20364) == 1)
	{
		if (Global_20371)
		{
			func_141(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_20326)
			{
				func_141(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			func_141(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_141(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_142(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam8))
	{
		func_142(iParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam9))
	{
		func_142(iParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam10))
	{
		func_142(iParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam11))
	{
		func_142(iParam11);
	}
	unk_0xE6B753D52F4CA222();
}

void func_142(var uParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

void func_143()
{
	int iVar0;
	
	if (iLocal_64)
	{
		Global_55613 = 0;
		Global_55613.f_12 = 0;
		Global_55613.f_24 = 0;
		Global_55613.f_36 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_55613.f_1[iVar0] = 0;
			Global_55613.f_13[iVar0] = 0;
			Global_55613.f_25[iVar0] = 0;
			Global_55613.f_37[iVar0] = 0;
			iVar0++;
		}
		iLocal_64 = 0;
	}
}
