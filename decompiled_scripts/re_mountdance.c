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
	struct<3> Local_44 = { 0, 0, 0 } ;
	var uLocal_45 = 0;
	var uLocal_46 = 10;
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
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	struct<3> Local_89 = { 0, 0, 0 } ;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	char* sLocal_94 = NULL;
	int iLocal_95 = 0;
	var uLocal_96 = 0;
	int iLocal_97 = 0;
	struct<18> Local_98 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_88 = joaat("u_m_o_taphillbilly");
	sLocal_94 = "SPECIAL_PED@MOUNTAIN_DANCER@MONOLOGUE_1@MONOLOGUE_1A";
	iLocal_97 = -1;
	Local_89 = { ScriptParam_98.f_1[0 /*3*/] };
	uLocal_90 = ScriptParam_98.f_17[0];
	if (unk_0x96CFB880BAC634CE(11))
	{
		func_37(0);
	}
	if (func_36(Global_113648.f_20119, 16384))
	{
		func_37(0);
	}
	while (true)
	{
		wait(0);
		if (unk_0xFC8BFE4B41177C22(uLocal_91))
		{
			if (unk_0x1C2F771CDC87A3A5(uLocal_91, 0) && !iLocal_95 == 7)
			{
				func_35(&(Global_113648.f_20119), 16384);
				iLocal_95 = 7;
			}
		}
		switch (iLocal_95)
		{
			case 0:
				if ((unk_0x173751E886F8E9AB() && !func_34()) && !func_12())
				{
					if (func_11())
					{
						uLocal_91 = unk_0xB1DBFEB95C0EFB88(26, iLocal_88, Local_89, uLocal_90, 1, 1);
						unk_0xAAA71DD7E9059338(uLocal_91, 1);
						uLocal_92 = unk_0x4E55EAB577C13329(joaat("prop_tapeplayer_01"), 704.7615f, 4179.574f, 39.7093f, 1, 1, 0);
						unk_0x5C96CEA06531AB03(uLocal_92, (233.8288f + 180f));
						unk_0x7F08C4791E6D6969(uLocal_91, 0, 0, 0, 0, 1);
						iLocal_95 = 1;
					}
				}
				else
				{
					func_37(0);
				}
				break;
			
			case 1:
				iLocal_97 = unk_0x2EC137C692A52458(Local_89 + Vector(1f, 0f, 0f), 0f, 0f, uLocal_90, 2);
				unk_0x3DA436E63AB0F541(uLocal_91, iLocal_97, sLocal_94, "MTN_DNC_if_you_want_to_get_to_heaven", 2f, -2f, 1, 0, 1148846080, 0);
				unk_0x4FE00B5CFB97782B("MNT_DNC", uLocal_91);
				iLocal_95 = 2;
				break;
			
			case 2:
				if (unk_0x20279DB6A8C883E5(iLocal_97, "MNT_DNC") == 1)
				{
					unk_0x9DE3D932AA2B055C(iLocal_97);
					iLocal_95 = 3;
				}
				break;
			
			case 3:
				Var0 = { unk_0xD1A6A821F5AC81DB(uLocal_91, 1) };
				unk_0x93956DF263A4A0DC(uLocal_91, 3f);
				if (func_10(unk_0x4A8C381C258A124D(), uLocal_91) < 10f)
				{
					unk_0xF9F66C74E3167674(unk_0x4A8C381C258A124D(), 1, uLocal_91, 31086, 0f, 0f, 0f, 0, -1, -1);
					unk_0xF9F66C74E3167674(uLocal_91, 1, unk_0x4A8C381C258A124D(), 31086, 0f, 0f, 0f, 0, -1, -1);
				}
				if (func_9(uLocal_91, unk_0x4A8C381C258A124D(), 1) < 25f)
				{
					if (!unk_0xC450B06E5AAA0985(uLocal_96))
					{
						func_5(&uLocal_96, &uLocal_91, 0);
						unk_0x61183D6239A9D7B8(uLocal_96, 3);
					}
				}
				else if (unk_0xC450B06E5AAA0985(uLocal_96))
				{
					func_4(&uLocal_96);
				}
				if (unk_0xBD3B265153D3BA2D(iLocal_97) > 0.9999999f)
				{
					iLocal_95 = 1;
				}
				if (unk_0x8BF5256C439DF778(uLocal_91))
				{
					unk_0x32FA1FA41E0D63D1(iLocal_97);
					iLocal_95 = 4;
				}
				if (((((unk_0x4FAFF4BCB7633475(uLocal_91) || unk_0x398315D0C90DE6F6(Var0, 50f, 1)) || unk_0x398315D0C90DE6F6(Var0, 50f, 0)) || unk_0xE94C7FA27FEB00DD(Var0, 20f, 20f, 20f, 0)) || unk_0x8764A5B95AE1F967(-1, Var0, 50f)) || (((unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), uLocal_91) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), uLocal_91)) && unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Var0, 1) < 25f) && func_1(uLocal_91, unk_0x4A8C381C258A124D(), 1126825984, 0)))
				{
					unk_0x32FA1FA41E0D63D1(iLocal_97);
					iLocal_95 = 4;
					iLocal_93 = 1;
				}
				break;
			
			case 4:
				if (unk_0xC450B06E5AAA0985(uLocal_96))
				{
					func_4(&uLocal_96);
				}
				if (!unk_0x8BF5256C439DF778(uLocal_91))
				{
					if (iLocal_93 == 1)
					{
						unk_0xA966E518B752B92A(uLocal_91, 723.1315f, 4171.957f, 39.7091f, 2f, -1, 1f, 1024, 1193033728);
					}
					else
					{
						unk_0xA966E518B752B92A(uLocal_91, 723.1315f, 4171.957f, 39.7091f, 1f, -1, 1f, 1024, 1193033728);
					}
					unk_0x44FB298D6382876D(uLocal_91, 1);
					iLocal_95 = 6;
				}
				break;
			
			case 6:
				if (unk_0x9B5C1660CCDF7189(uLocal_91, joaat("script_task_follow_nav_mesh_to_coord")) != 1 && unk_0x9B5C1660CCDF7189(uLocal_91, joaat("script_task_follow_nav_mesh_to_coord")) != 0)
				{
					unk_0xAAA71DD7E9059338(uLocal_91, 0);
					if (iLocal_93 == 1)
					{
						unk_0xD844F5E50DAB6FF7(uLocal_91, unk_0x4A8C381C258A124D(), 100f, -1, 0, 0);
					}
					else
					{
						unk_0x761F56E633460973(uLocal_91, 1193033728, 0);
					}
					unk_0x44FB298D6382876D(uLocal_91, 1);
					iLocal_95 = 5;
				}
				break;
			
			case 5:
				if ((unk_0xF6C26AE940C14749(uLocal_91) && unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(uLocal_91, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1) > 50f) && !unk_0x173751E886F8E9AB())
				{
					func_37(1);
				}
				break;
			
			case 7:
				if (!unk_0x173751E886F8E9AB())
				{
					func_37(0);
				}
				break;
		}
	}
}

int func_1(var uParam0, var uParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_3(unk_0xD1A6A821F5AC81DB(uParam1, 1) - unk_0xD1A6A821F5AC81DB(uParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { unk_0x90D0E0397D3F7690(uParam0) };
	}
	else
	{
		Var1 = { func_3(unk_0x83FDC027F0BEA202(uParam0, 31086, 0f, 5f, 0f) - unk_0x83FDC027F0BEA202(uParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_2(Var1, Var0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_2(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_3(struct<3> Param0)
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

void func_4(var uParam0)
{
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		unk_0xFE54B8568B2ABD12(uParam0);
	}
}

void func_5(var uParam0, var uParam1, bool bParam2)
{
	if (!unk_0xC450B06E5AAA0985(*uParam0))
	{
		if (unk_0xFC8BFE4B41177C22(*uParam1))
		{
			if (!unk_0x4FAFF4BCB7633475(*uParam1))
			{
				*uParam0 = func_6(*uParam1, bParam2, 145);
				if (bParam2 == 0)
				{
					unk_0x1456FD5C0C438B19(*uParam0, 7);
				}
			}
		}
	}
}

var func_6(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_7(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC450B06E5AAA0985(uVar0)) && unk_0x6BA487C862DB8DDF(&(Global_2028[iParam2 /*29*/].f_3)))
	{
		unk_0x594D5D0D7071B0DE(uVar0, &(Global_2028[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_7(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(uParam0);
	if (unk_0x55B80B6E7AB61270(uParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_8(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
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
		unk_0x5D3946F818C6B331(uVar0, func_8(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(uParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_8(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_8(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

float func_9(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(uParam0, 0) };
	}
	if (!unk_0x1C2F771CDC87A3A5(uParam1, 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(uParam1, 1) };
	}
	else
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(uParam1, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Var1, iParam2);
}

float func_10(var uParam0, var uParam1)
{
	return func_9(uParam0, uParam1, 1);
}

int func_11()
{
	unk_0xEC9DAA34BBB4658C(iLocal_88);
	unk_0x80813AC549A1E8AE(sLocal_94);
	if (unk_0x6252BC0DD8A320DB(iLocal_88) && unk_0xE100DD4F82A51BDE(sLocal_94))
	{
		return 1;
	}
	return 0;
}

int func_12()
{
	if (!func_32(5))
	{
		return 1;
	}
	if (func_28())
	{
		return 1;
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_27())
		{
			return 0;
		}
	}
	if (func_13(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_13(float fParam0, bool bParam1)
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
		if (func_25(func_26()))
		{
			iVar5 = func_19();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113648.f_18576[iVar1 /*6*/], 2) && !BitTest(Global_113648.f_18576[iVar1 /*6*/], 3))
				{
					func_14(iVar1, &Var0);
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

void func_14(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_15(uParam1, "Abigail1", func_17(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
		
		case 1:
			func_15(uParam1, "Abigail2", func_17(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
		
		case 2:
			func_15(uParam1, "Barry1", func_17(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
		
		case 3:
			func_15(uParam1, "Barry2", func_17(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
		
		case 4:
			func_15(uParam1, "Barry3", func_17(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
		
		case 5:
			func_15(uParam1, "Barry3A", func_17(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		case 6:
			func_15(uParam1, "Barry3C", func_17(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		case 7:
			func_15(uParam1, "Barry4", func_17(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_16(iParam0), 0, 0);
			break;
		
		case 8:
			func_15(uParam1, "Dreyfuss1", func_17(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
		
		case 9:
			func_15(uParam1, "Epsilon1", func_17(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_16(iParam0), 0, 0);
			break;
		
		case 10:
			func_15(uParam1, "Epsilon2", func_17(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
		
		case 11:
			func_15(uParam1, "Epsilon3", func_17(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_16(iParam0), 0, 0);
			break;
		
		case 12:
			func_15(uParam1, "Epsilon4", func_17(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_16(iParam0), 0, 0);
			break;
		
		case 13:
			func_15(uParam1, "Epsilon5", func_17(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
		
		case 14:
			func_15(uParam1, "Epsilon6", func_17(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		case 15:
			func_15(uParam1, "Epsilon7", func_17(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_16(iParam0), 0, 0);
			break;
		
		case 16:
			func_15(uParam1, "Epsilon8", func_17(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
			break;
		
		case 17:
			func_15(uParam1, "Extreme1", func_17(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		case 18:
			func_15(uParam1, "Extreme2", func_17(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		case 19:
			func_15(uParam1, "Extreme3", func_17(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		case 20:
			func_15(uParam1, "Extreme4", func_17(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
		
		case 21:
			func_15(uParam1, "Fanatic1", func_17(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_16(iParam0), 1, 0);
			break;
		
		case 22:
			func_15(uParam1, "Fanatic2", func_17(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_16(iParam0), 1, 0);
			break;
		
		case 23:
			func_15(uParam1, "Fanatic3", func_17(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_16(iParam0), 0, 1);
			break;
		
		case 24:
			func_15(uParam1, "Hao1", func_17(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_16(iParam0), 0, 1);
			break;
		
		case 25:
			func_15(uParam1, "Hunting1", func_17(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		case 26:
			func_15(uParam1, "Hunting2", func_17(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		case 27:
			func_15(uParam1, "Josh1", func_17(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
		
		case 28:
			func_15(uParam1, "Josh2", func_17(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
		
		case 29:
			func_15(uParam1, "Josh3", func_17(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
		
		case 30:
			func_15(uParam1, "Josh4", func_17(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
		
		case 31:
			func_15(uParam1, "Maude1", func_17(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		case 32:
			func_15(uParam1, "Minute1", func_17(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		case 33:
			func_15(uParam1, "Minute2", func_17(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		case 34:
			func_15(uParam1, "Minute3", func_17(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		case 35:
			func_15(uParam1, "MrsPhilips1", func_17(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 0);
			break;
		
		case 36:
			func_15(uParam1, "MrsPhilips2", func_17(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 0);
			break;
		
		case 37:
			func_15(uParam1, "Nigel1", func_17(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
		
		case 38:
			func_15(uParam1, "Nigel1A", func_17(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
		
		case 39:
			func_15(uParam1, "Nigel1B", func_17(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_16(iParam0), 1, 1);
			break;
		
		case 40:
			func_15(uParam1, "Nigel1C", func_17(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_16(iParam0), 1, 1);
			break;
		
		case 41:
			func_15(uParam1, "Nigel1D", func_17(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_16(iParam0), 1, 1);
			break;
		
		case 42:
			func_15(uParam1, "Nigel2", func_17(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
		
		case 43:
			func_15(uParam1, "Nigel3", func_17(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
			break;
		
		case 44:
			func_15(uParam1, "Omega1", func_17(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
		
		case 45:
			func_15(uParam1, "Omega2", func_17(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
		
		case 46:
			func_15(uParam1, "Paparazzo1", func_17(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		case 47:
			func_15(uParam1, "Paparazzo2", func_17(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		case 48:
			func_15(uParam1, "Paparazzo3", func_17(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
		
		case 49:
			func_15(uParam1, "Paparazzo3A", func_17(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		case 50:
			func_15(uParam1, "Paparazzo3B", func_17(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		case 51:
			func_15(uParam1, "Paparazzo4", func_17(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
			break;
		
		case 52:
			func_15(uParam1, "Rampage1", func_17(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_16(iParam0), 0, 0);
			break;
		
		case 54:
			func_15(uParam1, "Rampage3", func_17(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
		
		case 55:
			func_15(uParam1, "Rampage4", func_17(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
		
		case 56:
			func_15(uParam1, "Rampage5", func_17(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_16(iParam0), 0, 0);
			break;
		
		case 53:
			func_15(uParam1, "Rampage2", func_17(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
			break;
		
		case 57:
			func_15(uParam1, "TheLastOne", func_17(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		case 58:
			func_15(uParam1, "Tonya1", func_17(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		case 59:
			func_15(uParam1, "Tonya2", func_17(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		case 60:
			func_15(uParam1, "Tonya3", func_17(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		case 61:
			func_15(uParam1, "Tonya4", func_17(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		case 62:
			func_15(uParam1, "Tonya5", func_17(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_15(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_16(int iParam0)
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

struct<2> func_17(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_18(iParam0) };
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

struct<2> func_18(int iParam0)
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

int func_19()
{
	func_20();
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

void func_20()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_23(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_22(unk_0x4A8C381C258A124D());
			if (func_25(iVar0) && (!func_21(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_25(Global_113648.f_2365.f_539.f_4321))
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

bool func_21(int iParam0)
{
	return Global_43257 == iParam0;
}

int func_22(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)
{
	if (func_25(iParam0))
	{
		return func_24(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_24(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26()
{
	func_20();
	return Global_113648.f_2365.f_539.f_4321;
}

int func_27()
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

int func_28()
{
	if (func_31() && !func_27())
	{
		return 1;
	}
	if (func_30() && func_29())
	{
		return 1;
	}
	return 0;
}

bool func_29()
{
	return Global_113366 > 0;
}

int func_30()
{
	if (Global_97603 != -1)
	{
		return 1;
	}
	return 0;
}

int func_31()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_32(int iParam0)
{
	return func_33(iParam0, Global_43257);
}

int func_33(int iParam0, int iParam1)
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

int func_34()
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_27())
		{
			return 0;
		}
	}
	if (func_28())
	{
		return 1;
	}
	if (func_13(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_35(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_36(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_37(bool bParam0)
{
	if (unk_0xFC8BFE4B41177C22(uLocal_92))
	{
		unk_0x51C8BEA2005931AB(&uLocal_92);
	}
	if (unk_0xC450B06E5AAA0985(uLocal_96))
	{
		func_4(&uLocal_96);
	}
	if (unk_0xFC8BFE4B41177C22(uLocal_91))
	{
		if (bParam0)
		{
			unk_0x734A9F4537A31459(&uLocal_91);
		}
		else
		{
			unk_0xF09E30AF1B8FB379(&uLocal_91);
		}
	}
	unk_0xBBC29EBE6E1A48FA();
}
