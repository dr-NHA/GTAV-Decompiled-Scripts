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
	int iLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	struct<67> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2147483647 } ;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	struct<2> Local_41 = { 0, 0 } ;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_81 = 1;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	struct<34> Local_87 = { 2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_14 = -1;
	fLocal_15 = 0.001f;
	sLocal_18 = "NULL";
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_51(ScriptParam_87);
	}
	else
	{
		func_49();
	}
	while (true)
	{
		func_48();
		if (Global_262145.f_24076)
		{
			func_49();
		}
		if (func_40())
		{
			func_49();
		}
		func_1();
	}
}

void func_1()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (Global_4536658)
	{
		if (Global_4540733[iLocal_21 /*12*/].f_11)
		{
			func_37(iLocal_21);
			Global_4540733[iLocal_21 /*12*/].f_11 = 0;
		}
	}
	if (Local_22.f_66.f_8)
	{
		func_17(Local_22.f_66);
	}
	if ((Local_22.f_66.f_2 == 1 && Global_4536659) && func_16(&Local_22))
	{
		bVar0 = true;
	}
	if (Global_4535172[iLocal_21 /*85*/].f_66 == 2147483647 && Local_22.f_66.f_12)
	{
		if (bVar0)
		{
			func_15(0);
		}
		func_49();
	}
	if (Local_22.f_66.f_18 > 0 && !func_14())
	{
		iVar2 = (1000 / round((unk_0x0B852B0BF94A8DC1() * 1000f)));
		if ((unk_0x8034325BF6D6E41F() - Local_22.f_66.f_18) > iVar2 * 10)
		{
			Local_22.f_66.f_18 = -1;
		}
	}
	if (((func_13() && Local_22.f_66.f_2 == 1) && Local_22.f_66.f_13) && !Local_22.f_66.f_12)
	{
		if (unk_0x8034325BF6D6E41F() - Local_22.f_66.f_14) >= func_12(Local_22.f_66.f_5)
		{
			iVar1 = 0;
			if (!unk_0x134EF45B578F4CCF(func_11()) || unk_0x34F31012FED51A0F())
			{
				iVar1 = 1;
			}
			else if (Local_22.f_66.f_2 != 1)
			{
				iVar1 = 2;
			}
			else if (Local_22.f_66.f_5 != 1 && !unk_0x54BC5E0B6A29AE8A(&(Local_22.f_66), Local_22.f_66.f_6, Local_22.f_66.f_4, Local_22.f_66.f_7, Local_22.f_66.f_1, Local_22.f_66.f_10))
			{
				iVar1 = 3;
			}
			else if (!unk_0x5F7C6361179DFFC4(Local_22.f_66))
			{
				iVar1 = 4;
			}
			else
			{
				Local_22.f_66.f_12 = 1;
				Global_4535172[iLocal_21 /*85*/].f_66.f_12 = 1;
				Global_4535172[iLocal_21 /*85*/].f_66 = Local_22.f_66;
			}
			if (iVar1 != 0)
			{
				func_7(iLocal_21);
				func_49();
			}
		}
	}
	if (!iLocal_86)
	{
		if (bVar0)
		{
			func_5(&Local_41, 0);
			iLocal_86 = 1;
		}
	}
	else if (bVar0)
	{
		StringCopy(&(Local_41.f_1), "HUD_TRANSP", 64);
		func_2(&Local_41, func_4(&Local_41));
	}
	else
	{
		iLocal_86 = 0;
		func_15(0);
	}
}

void func_2(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_3(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0x511D14ED2DA887E1(uParam0->f_33);
			unk_0x511D14ED2DA887E1(uParam0->f_34);
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0x511D14ED2DA887E1(uParam0->f_33);
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0x60D332F23943B34F(&(uParam0->f_17));
			unk_0x511D14ED2DA887E1(uParam0->f_33);
			unk_0x511D14ED2DA887E1(uParam0->f_34);
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0x60D332F23943B34F(&(uParam0->f_17));
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0xBD34A69071611974(uParam0->f_33, 70);
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		else
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_3(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_4(var uParam0)
{
	return uParam0->f_35;
}

void func_5(var uParam0, bool bParam1)
{
	func_6(uParam0);
	if (bParam1)
	{
		func_15(0);
	}
	uParam0->f_35 = 1;
}

void func_6(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_7(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_10(iParam0))
		{
			if (!bVar0)
			{
				unk_0xD8EB47E09DFC393C();
			}
		}
		else if (!bVar0)
		{
			unk_0x1FDE21A286357401(Global_4535172[iParam0 /*85*/].f_66);
		}
		func_8(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_8(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_9(&(uParam0->f_14));
	func_9(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_9(var uParam0)
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

int func_10(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

var func_11()
{
	return Global_1574918;
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_4536661;
			break;
		
		case 1:
			return Global_4536660;
			break;
	}
	return 0;
}

int func_13()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

bool func_14()
{
	return Global_100733.f_388 > 0;
}

void func_15(bool bParam0)
{
	unk_0x65662724C6BC4810();
	if (bParam0)
	{
		unk_0x8CBD7E751A3A6A85();
	}
}

int func_16(var uParam0)
{
	if (uParam0->f_66.f_4 == 2043854386)
	{
		return 0;
	}
	return 1;
}

void func_17(var uParam0)
{
	struct<7> Var0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<67> Var4;
	bool bVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar1 = 0;
	bVar2 = false;
	if (!func_13())
	{
		iVar1 = 1;
		Var0.f_0 = uParam0;
		Var0.f_2 = 0;
	}
	if (iVar1 || unk_0xFCEF367B86651ED3(1, uParam0, &Var0, 7))
	{
		Var4.f_66 = 2147483647;
		iVar3 = func_36(Var0.f_0, &Var4);
		if (iVar3 != -1)
		{
			Global_4535172[iVar3 /*85*/].f_66.f_8 = 0;
			if (Global_4535172[iVar3 /*85*/].f_66.f_18 == 0)
			{
				Global_4535172[iVar3 /*85*/].f_66.f_18 = unk_0x8034325BF6D6E41F();
			}
		}
		bVar5 = true;
		if (iVar3 != -1)
		{
			Global_4535172[iVar3 /*85*/].f_66.f_17 = Var0.f_2;
		}
		else
		{
			Global_4536646.f_4 = Var0.f_2;
			Global_4536646.f_6 = Var0.f_3;
			Global_4536646.f_7 = Var0.f_4;
			Global_4536646.f_8 = Var0.f_5;
			Global_4536646.f_9 = Var0.f_6;
			if (Global_4536646.f_10 == 0)
			{
				Global_4536646.f_10 = unk_0x8034325BF6D6E41F();
			}
		}
		switch (Var0.f_2)
		{
			case 0:
				if (iVar3 != -1)
				{
					Global_4540733[iVar3 /*12*/] = Global_4535172[iVar3 /*85*/].f_66.f_3;
					Global_4540733[iVar3 /*12*/].f_1 = Global_4535172[iVar3 /*85*/].f_66.f_7;
					Global_4540733[iVar3 /*12*/].f_2 = Global_4535172[iVar3 /*85*/].f_66.f_4;
					Global_4540733[iVar3 /*12*/].f_3 = Global_4535172[iVar3 /*85*/].f_66.f_1;
					Global_4540733[iVar3 /*12*/].f_5 = Var0.f_1;
					Global_4540733[iVar3 /*12*/].f_6 = Var0.f_3;
					Global_4540733[iVar3 /*12*/].f_7 = Var0.f_4;
					Global_4540733[iVar3 /*12*/].f_8 = Var0.f_5;
					Global_4540733[iVar3 /*12*/].f_9 = Var0.f_6;
					Global_4540733[iVar3 /*12*/].f_11 = 1;
					Global_4535172[iVar3 /*85*/].f_66.f_2 = 2;
					if (Global_4535172[iVar3 /*85*/].f_66.f_11 & 4 != 0)
					{
						func_32(iVar3, bVar5);
					}
					else if (func_13())
					{
						if (bVar5)
						{
							unk_0x11FD21BA1B765FE2(Global_4535172[iVar3 /*85*/].f_66, &uVar6);
						}
					}
				}
				break;
			
			default:
				if (iVar3 != -1)
				{
					Global_4535172[iVar3 /*85*/].f_66.f_2 = 3;
					if ((Global_4535172[iVar3 /*85*/].f_66.f_11 & 1 != 0 && Global_4535172[iVar3 /*85*/].f_66.f_9 < 2) && func_31(Var0.f_2))
					{
						if (func_10(iVar3))
						{
							if (func_24())
							{
								Global_4535172[iVar3 /*85*/].f_66.f_2 = 1;
								Global_4535172[iVar3 /*85*/].f_66.f_9++;
							}
							else if (Global_4535172[iVar3 /*85*/].f_66.f_11 & 2 != 0)
							{
								Global_4536676 = Global_4535172[iVar3 /*85*/].f_66.f_4;
								Global_4536678 = Global_4535172[iVar3 /*85*/].f_66.f_6;
								Global_4536679 = Var0.f_2;
								Global_4536677 = Global_4535172[iVar3 /*85*/].f_66.f_1;
								if (func_23(Global_4536676) && func_13())
								{
									if (!func_22(Global_4535172[iVar3 /*85*/].f_66))
									{
										iVar7 = func_21();
										Global_4536533[iVar7 /*7*/] = Global_4535172[iVar3 /*85*/].f_66;
										Global_4536533[iVar7 /*7*/].f_2 = Global_4536676;
										Global_4536533[iVar7 /*7*/].f_3 = Global_4536678;
										Global_4536533[iVar7 /*7*/].f_1 = Global_4536677;
										Global_4536533[iVar7 /*7*/].f_4 = unk_0x7E3F74F641EE6B27();
									}
								}
								else
								{
									Global_4536673 = 1;
								}
							}
						}
						else if (func_20(&iVar3))
						{
							Global_4535172[iVar3 /*85*/].f_66.f_2 = 1;
							Global_4535172[iVar3 /*85*/].f_66.f_9++;
						}
						else if (Global_4535172[iVar3 /*85*/].f_66.f_11 & 2 != 0)
						{
							Global_4536676 = Global_4535172[iVar3 /*85*/].f_66.f_4;
							Global_4536678 = Global_4535172[iVar3 /*85*/].f_66.f_6;
							Global_4536679 = Var0.f_2;
							Global_4536677 = Global_4535172[iVar3 /*85*/].f_66.f_1;
							if (func_23(Global_4536676) && func_13())
							{
								if (!func_22(Global_4535172[iVar3 /*85*/].f_66))
								{
									iVar8 = func_21();
									Global_4536533[iVar8 /*7*/] = Global_4535172[iVar3 /*85*/].f_66;
									Global_4536533[iVar8 /*7*/].f_2 = Global_4536676;
									Global_4536533[iVar8 /*7*/].f_3 = Global_4536678;
									Global_4536533[iVar8 /*7*/].f_1 = Global_4536677;
									Global_4536533[iVar8 /*7*/].f_4 = unk_0x7E3F74F641EE6B27();
								}
							}
							else
							{
								Global_4536673 = 1;
							}
						}
					}
					else if (Global_4535172[iVar3 /*85*/].f_66.f_11 & 2 != 0)
					{
						Global_4536676 = Global_4535172[iVar3 /*85*/].f_66.f_4;
						Global_4536678 = Global_4535172[iVar3 /*85*/].f_66.f_6;
						Global_4536679 = Var0.f_2;
						Global_4536677 = Global_4535172[iVar3 /*85*/].f_66.f_1;
						if ((func_23(Global_4536676) && func_13()) && func_31(Var0.f_2))
						{
							if (!func_22(Global_4535172[iVar3 /*85*/].f_66))
							{
								iVar9 = func_21();
								Global_4536533[iVar9 /*7*/] = Global_4535172[iVar3 /*85*/].f_66;
								Global_4536533[iVar9 /*7*/].f_2 = Global_4536676;
								Global_4536533[iVar9 /*7*/].f_3 = Global_4536678;
								Global_4536533[iVar9 /*7*/].f_1 = Global_4536677;
								Global_4536533[iVar9 /*7*/].f_4 = unk_0x7E3F74F641EE6B27();
							}
						}
						else
						{
							Global_4536673 = 1;
						}
					}
					if (Global_4535172[iVar3 /*85*/].f_66.f_2 == 3)
					{
						if (bVar2)
						{
							func_19(1, Global_4535172[iVar3 /*85*/].f_66.f_4);
							Global_4536673 = 0;
						}
						if (Global_4535172[iVar3 /*85*/].f_66.f_11 & 4 != 0)
						{
							func_18(iVar3, Global_4535172[iVar3 /*85*/].f_66.f_4, Global_4535172[iVar3 /*85*/].f_66.f_10, Global_4535172[iVar3 /*85*/].f_66.f_1, Var0.f_2);
						}
					}
				}
				break;
			}
	}
}

void func_18(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_7(iParam0);
	}
}

void func_19(int iParam0, var uParam1)
{
	Global_2697015 = uParam1;
	Global_2697014 = iParam0;
}

int func_20(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (*iParam0 == -1 || func_10(*iParam0))
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_11()) || unk_0x34F31012FED51A0F())
		{
			Global_4536674 = 1;
			return 0;
		}
		if (Global_2695821)
		{
			if (Global_4535172[*iParam0 /*85*/].f_66.f_6 == 1067618600 || Global_4535172[*iParam0 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4536675 = 1;
				return 0;
			}
		}
	}
	if ((bVar0 || iVar1) || unk_0x5F7C6361179DFFC4(Global_4535172[*iParam0 /*85*/].f_66))
	{
		if (iVar1 && !bVar0)
		{
		}
		Global_4535172[*iParam0 /*85*/].f_66.f_13 = 1;
		Global_4535172[*iParam0 /*85*/].f_66.f_12 = 0;
		Global_4535172[*iParam0 /*85*/].f_66.f_14 = unk_0x8034325BF6D6E41F();
		if (bVar0)
		{
			if (*iParam0 != -1)
			{
				Global_4535172[*iParam0 /*85*/].f_66.f_8 = 1;
				Global_4535172[*iParam0 /*85*/].f_66.f_12 = 1;
			}
		}
		Global_4535172[*iParam0 /*85*/].f_66.f_18 = 0;
		return 1;
	}
	return 0;
}

int func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = Global_4536533;
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (Global_4536533[iVar0 /*7*/] != 0 && Global_4536533[iVar0 /*7*/] != 2147483647)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= iVar2)
	{
		return 0;
	}
	return iVar1;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = Global_4536533;
	if (iParam0 == 2147483647 || iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (Global_4536533[iVar0 /*7*/] == iParam0)
		{
			return 1;
		}
		if (Global_4536533[iVar0 /*7*/].f_6 == iParam0)
		{
			Global_4536533[iVar0 /*7*/].f_4 = unk_0x7E3F74F641EE6B27();
			Global_4536533[iVar0 /*7*/].f_6 = 2147483647;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_23(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 1780666425 || iParam0 == -2043695058) || iParam0 == -1586170317) || iParam0 == 393059668) || iParam0 == -1027218631) || iParam0 == 1048226110) || iParam0 == 569170531) || iParam0 == -856006867) || iParam0 == 848090538) || iParam0 == -293060240) || iParam0 == -47546905) || iParam0 == 463142405) || iParam0 == 1550217370) || iParam0 == -101307780) || iParam0 == 1052472386) || iParam0 == -2130199671) || iParam0 == -1227654538) || iParam0 == -876012764) || iParam0 == -722894325) || iParam0 == 1407278493) || iParam0 == -1579394494) || iParam0 == 1179783540) || iParam0 == 923419301) || iParam0 == -308826175) || iParam0 == 603298940) || iParam0 == -12619854) || iParam0 == -311112675) || iParam0 == 870439158) || iParam0 == -974288740) || iParam0 == -4138654) || iParam0 == -1180954122) || iParam0 == -1918051016) || iParam0 == 844330594) || iParam0 == 1934825517) || iParam0 == 1852024236) || iParam0 == 2099238988) || iParam0 == 1952643559) || iParam0 == -1172900789) || iParam0 == -2015399333) || iParam0 == -1574795641) || iParam0 == -961034881) || iParam0 == 1135468152) || iParam0 == 1265272476) || iParam0 == -634726636) || iParam0 == 696556762) || iParam0 == 443347049) || iParam0 == 403506509) || iParam0 == -883876414) || iParam0 == -1064150715) || iParam0 == -1387253055) || iParam0 == -716963152) || iParam0 == 1138089938) || iParam0 == -561012053) || iParam0 == 1240683675) || iParam0 == 1241904665) || iParam0 == -494565059) || iParam0 == 827308208) || iParam0 == -1857685192) || iParam0 == 1698417709) || iParam0 == -2017925037) || iParam0 == 1057653594) || iParam0 == 1810506918) || iParam0 == 451427308) || iParam0 == 824622151) || iParam0 == 1253978276) || iParam0 == -1576080766) || iParam0 == 1508411869) || iParam0 == 1428501742) || iParam0 == -1918967151) || iParam0 == 1261538664) || iParam0 == 1180397655) || iParam0 == 1414674366) || iParam0 == 261460130) || iParam0 == -2027658376) || iParam0 == 1668610896) || iParam0 == -2032529561) || iParam0 == -1224479447) || iParam0 == -319306689) || iParam0 == -466527264) || iParam0 == 1925965142) || iParam0 == 592152676) || iParam0 == 2035612943) || iParam0 == 1568659720) || iParam0 == 1220095570) || iParam0 == 2050320631) || iParam0 == 592672421) || iParam0 == 1775876058) || iParam0 == -842062976) || iParam0 == -518651910) || iParam0 == 14658715) || iParam0 == -604793592) || iParam0 == -823426392) || iParam0 == -1401862980) || iParam0 == -173354274) || iParam0 == 409533976) || iParam0 == -1472522337) || iParam0 == 542574408) || iParam0 == -1261799063) || iParam0 == 784631574) || iParam0 == -2027479156) || iParam0 == -837690641) || iParam0 == -1029672338) || iParam0 == -1503749970) || iParam0 == -1843409092) || iParam0 == 1669058563) || iParam0 == 2102747615) || iParam0 == 2030771998) || iParam0 == 1708747007) || iParam0 == 645293860) || iParam0 == -818859193) || iParam0 == 300796227) || iParam0 == -1999832346) || iParam0 == 1058055395) || iParam0 == -321151125) || iParam0 == 2078731875) || iParam0 == 1280785534) || iParam0 == -1878824774) || iParam0 == 247992227) || iParam0 == -229237358) || iParam0 == -1123183389) || iParam0 == 1814197076) || iParam0 == 713955548) || iParam0 == -2026544524) || iParam0 == -719580138) || iParam0 == -163417439) || iParam0 == -550417574) || iParam0 == 208223429) || iParam0 == -1433071892) || iParam0 == 761999406) || iParam0 == -1101941763) || iParam0 == 1748245957) || iParam0 == 1036772696) || iParam0 == -1384648535) || iParam0 == -800037808) || iParam0 == -695852120) || iParam0 == 77355315) || iParam0 == 2097889166) || iParam0 == 1707592130) || iParam0 == 1628412596) || iParam0 == 883337077) || iParam0 == -1274418755) || iParam0 == -1853979468) || iParam0 == -239888995) || iParam0 == 1163066566) || iParam0 == -955087020) || iParam0 == 1874391251) || iParam0 == 1633116913) || iParam0 == 668586600) || iParam0 == 15168061) || iParam0 == 590289134) || iParam0 == 99792878) || iParam0 == 1866258778) || iParam0 == -178394060) || iParam0 == 409592287) || iParam0 == 593836803) || iParam0 == 1973036520) || iParam0 == 2063456538) || iParam0 == -728008329) || iParam0 == 119239868)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_30();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_11()) || unk_0x34F31012FED51A0F())
		{
			if (func_29(Global_4535172[iVar2 /*85*/].f_66.f_6, Global_4535172[iVar2 /*85*/].f_66.f_4, Global_4535172[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4536674 = 1;
			}
			return 0;
		}
		if (Global_2695821)
		{
			if (Global_4535172[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4535172[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4536675 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_28(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x5F7C6361179DFFC4(iVar3))
		{
			Global_4535172[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4535172[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4535172[iVar2 /*85*/].f_66.f_14 = unk_0x8034325BF6D6E41F();
			if (bVar0)
			{
				Global_4535172[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4535172[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4535172[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_25(Global_4535172[iVar2 /*85*/], iVar2);
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	return 0;
}

void func_25(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 45913685;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_27(Var0.f_1);
	if ((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_26();
		unk_0x01F0B819E78A18A1(1, &Var0, 36, iVar1);
	}
}

void func_26()
{
	unk_0x97A5024CE91641F1("AM_ARENA_SHP");
}

var func_27(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, iParam0);
	}
	return uVar0;
}

int func_28(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
			case 14658715:
			case -604793592:
			case -823426392:
			case -1401862980:
			case -173354274:
			case 409533976:
			case -1472522337:
			case 542574408:
			case -1261799063:
			case 784631574:
			case -2027479156:
			case -837690641:
			case -1029672338:
			case -1503749970:
			case -1843409092:
			case 1669058563:
			case 2102747615:
			case 2030771998:
			case 1708747007:
			case 645293860:
			case -818859193:
			case 300796227:
			case -1999832346:
			case 1058055395:
			case -321151125:
			case 2078731875:
			case 1280785534:
			case -1878824774:
			case 247992227:
			case -229237358:
			case -1123183389:
			case 1814197076:
			case 713955548:
			case -2026544524:
			case -719580138:
			case -163417439:
			case -550417574:
			case 208223429:
			case -1433071892:
			case 761999406:
			case -1101941763:
			case 1748245957:
			case 1036772696:
			case -1384648535:
			case -800037808:
			case -695852120:
			case 77355315:
			case 2097889166:
			case 1707592130:
			case 1628412596:
			case 883337077:
			case -1274418755:
			case -1853979468:
			case -239888995:
			case 1163066566:
			case -955087020:
			case 1874391251:
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_30()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_28(iVar0) != 2147483647)
		{
			if (func_10(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_31(int iParam0)
{
	if ((iParam0 >= 500 && iParam0 <= 599) || iParam0 == 408)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<10> Var3;
	int iVar4;
	struct<3> Var5;
	var uVar6;
	
	if (iParam0 == -1)
	{
		return;
	}
	unk_0x1F4C0FAC35E805F4(func_28(iParam0));
	if (Global_4535172[iParam0 /*85*/].f_66.f_10 == 1)
	{
	}
	else if (Global_4535172[iParam0 /*85*/].f_66.f_10 == 4)
	{
		iVar0 = 1;
	}
	else if (Global_4535172[iParam0 /*85*/].f_66.f_10 == 2)
	{
		iVar1 = 1;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	Var3.f_9 = -1;
	func_35(&Var3);
	switch (Global_4535172[iParam0 /*85*/].f_66.f_4)
	{
		case 631654431:
			unk_0x5ACC4ABDE69D38D4(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case -180141073:
			unk_0xA8C662E16DC4030E(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14), iVar1, iVar0, 0);
			break;
		
		case 68030260:
			unk_0xC093604219A86052(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], &(Global_4535172[iParam0 /*85*/].f_14), iVar1, iVar0);
			break;
		
		case -982394051:
			unk_0x2896F1C9B1221336(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0);
			break;
		
		case 454359403:
			unk_0x5B01531ADF19BFE7(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, Global_4535172[iParam0 /*85*/].f_2, iVar0);
			break;
		
		case -1586170317:
			unk_0xFD5431F2DAC6AD75(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_34));
			break;
		
		case 650665123:
			unk_0xE7F56AD8A71AC4E6(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case 1654961868:
			unk_0x3C433641FBE9B092(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14), iVar1, iVar0);
			break;
		
		case 1182673174:
			unk_0xB18702619A0C0E6E(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0);
			break;
		
		case 563463121:
			unk_0xDB31E3DCD4EC4157(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1940862352:
			unk_0x1BF8BBFBF0066C79(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), iVar1, iVar0);
			break;
		
		case -1389227906:
			unk_0x1BF8BBFBF0066C79(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), iVar1, iVar0);
			break;
		
		case -516219046:
			unk_0x872D579FE9A001C0(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case -1398318418:
			unk_0xEEF9D0725B6BE1E9(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_34));
			break;
		
		case 2043854386:
			unk_0x93D264A3F6B3EC83(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case 277665518:
			unk_0x5ED8FA0BD19D1554(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case -1077156170:
			unk_0xE36D9E1EDE0E76B4(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_34), -1);
			break;
		
		case -96593501:
			unk_0x2A073933B945C84D(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case 742499889:
			unk_0x6409DA98EAB29EF9(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 2050093329:
			unk_0x773A6B5BEC33A424(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1752488069:
			unk_0x7E8D3E1CB76D4269(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 634375935:
			unk_0x1DC31E2CC59D9BB2(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case 2115896461:
			unk_0x14DF63D0BB614642(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, func_34(&(Global_1914091[unk_0x259BE71D8A81D4FA() /*297*/].f_265)));
			break;
		
		case 797947947:
			unk_0x2416BBA9A9F18EAB(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, func_34(&(Global_1914091[unk_0x259BE71D8A81D4FA() /*297*/].f_281)));
			break;
		
		case -1027218631:
			unk_0x429D9B81D13F3456(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
			break;
		
		case -47546905:
			unk_0xCFDC32D2EF467A52(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
			break;
		
		case 291576838:
			unk_0x231BA68A82FF0316(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 14, 1, iVar1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 0, 0, 0, iVar0);
			break;
		
		case 1612072658:
			unk_0x3DFB797B5A3B9923(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, 0);
			break;
		
		case -990286235:
			unk_0xFED8EC9FDD58021A(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14), &(Global_4535172[iParam0 /*85*/].f_14.f_13), 1);
			break;
		
		case 1349151477:
			unk_0xEAC14C370D2B9D5C(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -31156877:
		case -327918414:
		case 550898518:
		case 835976347:
			unk_0x1D8AF8B06B2F7D3A(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1186079845:
			unk_0xAA3D72C5CCFC8EF3(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1734805203:
			unk_0xC972841F26BA2800(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1645229221:
			unk_0xE2A7BB72F7220C7E(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case -585718395:
			unk_0xD00BC7FDBE039771(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, &Global_4540944);
			break;
		
		case -2129781826:
			unk_0xEC8A7DFF32FD54B9(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], iVar1, iVar0);
			break;
		
		case 1941570214:
			unk_0xD4C7A8B7798F8D76(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], iVar1, iVar0);
			break;
		
		case 1869490922:
			unk_0xD0D235D716CBBF3A(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0);
			break;
		
		case -336803850:
			unk_0xD0D235D716CBBF3A(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0);
			break;
		
		case -1412692765:
			unk_0xD0D235D716CBBF3A(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0);
			break;
		
		case 618167454:
			unk_0xD0D235D716CBBF3A(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0);
			break;
		
		case 980623936:
			unk_0xD0D235D716CBBF3A(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0);
			break;
		
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case -664597565:
		case -1100963799:
			unk_0x9CBD6E7B088910A1(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_40), &(Global_4535172[iParam0 /*85*/].f_14.f_44), iVar1);
			break;
		
		case 312105838:
			unk_0x1445487E16675A4E(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1922554349:
			unk_0x237E99388DCA3CEF(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_DESTROY_VEH", &uVar2);
			break;
		
		case -2043695058:
			unk_0x237E99388DCA3CEF(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_DISTRACT_COPS", &uVar2);
			break;
		
		case 1780666425:
			unk_0x237E99388DCA3CEF(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_PLANE_TAKEDOWN", &uVar2);
			break;
		
		case 1643659499:
			unk_0xD8F9465B2186C59F(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0, 0);
			break;
		
		case 1839532116:
			unk_0x47E7DCF167AAD291(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0);
			break;
		
		case 941287179:
			unk_0x4D10D49AEE7C9AEA(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_3);
			break;
		
		case -352356931:
			unk_0x830CE9F43780AC92(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 1948102096:
			unk_0x473E72253CC49698(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, Global_4535172[iParam0 /*85*/]);
			break;
		
		case -1834046564:
			if (Global_4535172[iParam0 /*85*/].f_66.f_16 == 1)
			{
				iVar4 = 1;
			}
			unk_0x46B2ECD9DD5C325A(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, 0, iVar4);
			break;
		
		case 393059668:
			unk_0x31F0EC70888E1490(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
			break;
		
		case -57868256:
			unk_0x736F26192289EEBB(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_34), Global_4535172[iParam0 /*85*/].f_4);
			break;
		
		case -1127021384:
			unk_0x190378368BE7EFF3(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1564537328:
			unk_0x1BF8BBFBF0066C79(Global_4535172[iParam0 /*85*/].f_66.f_1, "RaceToPoint", 0, 0);
			break;
		
		case -1359375127:
			unk_0x8D54F66F66BE0AA4(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case 283351220:
			unk_0x231BA68A82FF0316(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_5, 1, iVar1, &(Global_4535172[iParam0 /*85*/].f_14.f_40), 0, 0, 0, iVar0);
			break;
		
		case -2085313189:
			switch (Global_4535172[iParam0 /*85*/].f_66.f_6)
			{
				case 1067618600:
					unk_0x231BA68A82FF0316(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_5, 1, iVar1, &(Global_4535172[iParam0 /*85*/].f_14.f_40), 0, 0, 0, iVar0);
					break;
			}
			break;
		
		case 1704445500:
			unk_0xEFA7F7BEF6727E05(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, &(Global_4535172[iParam0 /*85*/].f_14.f_34), 0, 0);
			break;
		
		case 1620609399:
			unk_0x237E99388DCA3CEF(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_DELIVER", &uVar2);
			break;
		
		case 1961641934:
			unk_0x237E99388DCA3CEF(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_KILL", &uVar2);
			break;
		
		case 210955503:
			unk_0x237E99388DCA3CEF(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_KILL_LIST", &uVar2);
			break;
		
		case -59668082:
			unk_0x237E99388DCA3CEF(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_CP_COLLECTION", &uVar2);
			break;
		
		case 1736933716:
			unk_0x237E99388DCA3CEF(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_TIME_TRIAL", &uVar2);
			break;
		
		case -1468524125:
			unk_0x237E99388DCA3CEF(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_CHALLENGES", &uVar2);
			break;
		
		case 111573502:
			unk_0x237E99388DCA3CEF(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_HELI", &uVar2);
			break;
		
		case 1525644423:
			unk_0x237E99388DCA3CEF(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_DEAD_DROP", &uVar2);
			break;
		
		case 968073639:
			unk_0x237E99388DCA3CEF(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_PENNED_IN", &uVar2);
			break;
		
		case 1577781788:
			unk_0x237E99388DCA3CEF(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_PASS_THE_PARCEL", &uVar2);
			break;
		
		case -934465332:
			unk_0x237E99388DCA3CEF(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_CRIMINAL_DAMAGE", &uVar2);
			break;
		
		case -1194253122:
			unk_0x237E99388DCA3CEF(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HOT_PROPERTY", &uVar2);
			break;
		
		case -212607085:
			unk_0x237E99388DCA3CEF(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_KING_OF_THE_HILL", &uVar2);
			break;
		
		case -815546555:
			unk_0x237E99388DCA3CEF(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HUNT_THE_BEAST", &uVar2);
			break;
		
		case 1048226110:
			unk_0x1C3E529B167B0152(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 569170531:
			unk_0x22A4F417AF7EDBB3(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -856006867:
			unk_0xB7FF64F7F3C11C73(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_8);
			break;
		
		case 208223429:
			unk_0x183CC5B7D51F8C27(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_9);
			break;
		
		case 848090538:
			unk_0x95508E1DCDC31638(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 665109499:
			unk_0x4EF4490FC3B90AD2(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 0, 1);
			break;
		
		case -1330755006:
			unk_0xAC68FC3E6CBCE6FC(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 0, 1);
			break;
		
		case 1976384368:
			unk_0x4EFA5A2F877A4580(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 0, 0);
			break;
		
		case 268924934:
			unk_0x2AED47655EBD41F9(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/].f_9);
			break;
		
		case -293060240:
			unk_0x8692D3326B328B82(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7);
			break;
		
		case 437291904:
			unk_0x234A1A7A21B287F0(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_10, Global_4535172[iParam0 /*85*/].f_11, Global_4535172[iParam0 /*85*/].f_12);
			break;
		
		case -135813048:
			unk_0x4748E1ADA6271630(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case 463142405:
			unk_0xE1037BCF8C2FC81D(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_8);
			break;
		
		case 1550217370:
			unk_0xF031AD8A21A8C1A0(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -101307780:
			unk_0x19B6E06EEAE42FD9(Global_4535172[iParam0 /*85*/].f_66.f_1, 0);
			break;
		
		case 599804707:
			unk_0x237E99388DCA3CEF(Global_4535172[iParam0 /*85*/].f_66.f_1, "GB_SALVAGE", &uVar2);
			break;
		
		case 1347433368:
			unk_0xD96CCBEFF9394523(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1052472386:
			unk_0x30EE7ED666906E6A(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_34));
			break;
		
		case -2130199671:
			unk_0x2AF3C8E8D2120D10(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_34));
			break;
		
		case -1227654538:
			unk_0x4247915DE1F30269(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_34));
			break;
		
		case -930104477:
			unk_0xD22ED94E238E6212(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 1864522104:
			unk_0x1B7FCA28E35CDBB0(Global_4535172[iParam0 /*85*/].f_66.f_1, 0);
			break;
		
		case 215608230:
			unk_0x1B7FCA28E35CDBB0(Global_4535172[iParam0 /*85*/].f_66.f_1, 1);
			break;
		
		case -876012764:
			unk_0xC7791AFBC3D6AAD5(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case -722894325:
			unk_0xCFCD749D4E341FD7(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 1407278493:
			unk_0x1320A36B594CBEC2(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1579394494:
		case -27443911:
			unk_0xE31A6007C811856C(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
			break;
		
		case 1179783540:
			unk_0x177CA8EC3BEBA1EB(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
			break;
		
		case 923419301:
			unk_0xA32B695D90B1EA0E(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 0);
			break;
		
		case -308826175:
			unk_0xA32B695D90B1EA0E(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 1);
			break;
		
		case 603298940:
			unk_0xA32B695D90B1EA0E(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 2);
			break;
		
		case -12619854:
			unk_0xA32B695D90B1EA0E(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 3);
			break;
		
		case -311112675:
			unk_0xA32B695D90B1EA0E(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 4);
			break;
		
		case 870439158:
			unk_0xA32B695D90B1EA0E(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 5);
			break;
		
		case -974288740:
			unk_0xA32B695D90B1EA0E(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 6);
			break;
		
		case -4138654:
			unk_0xA32B695D90B1EA0E(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 7);
			break;
		
		case -1180954122:
			unk_0xA32B695D90B1EA0E(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 8);
			break;
		
		case -1918051016:
			unk_0xA32B695D90B1EA0E(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 9);
			break;
		
		case 844330594:
			unk_0xA32B695D90B1EA0E(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 10);
			break;
		
		case 1934825517:
			unk_0x90C7361D0621A3B6(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 0);
			break;
		
		case 1852024236:
			unk_0x90C7361D0621A3B6(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 1);
			break;
		
		case 2099238988:
			unk_0x90C7361D0621A3B6(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 2);
			break;
		
		case 1952643559:
			break;
		
		case 2039302543:
			break;
		
		case -1172900789:
			unk_0x80D494C63CA32BD2(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_9);
			break;
		
		case -1733398043:
			unk_0xDE737A0063E49970(Global_4535172[iParam0 /*85*/].f_9, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case -1892760262:
			unk_0xE01ABEB9E2CF42B9(Global_4535172[iParam0 /*85*/].f_9, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case -2015399333:
			unk_0xB1C4AF1EA46263A1(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 402505853:
			if (func_33(unk_0xB23E0F9B63D009A8(Global_4535172[iParam0 /*85*/]), 0, 0))
			{
				unk_0x75BD55E6AB869CAF(unk_0xB23E0F9B63D009A8(Global_4535172[iParam0 /*85*/]), Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
			}
			break;
		
		case 1678112166:
			unk_0xC72D28E5EF1107CF(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 0, 1);
			break;
		
		case -1143510182:
			unk_0x8F5EE908F5AE9BC3(Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case -1574795641:
			unk_0x0FB341836D41663F(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -961034881:
			unk_0xE57ED256E47D44C1(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 1135468152:
			unk_0x46A6A8998E3D8C20(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1265272476:
			unk_0xADDD87AAD0952829(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/].f_9);
			break;
		
		case -634726636:
			unk_0x9C94CA5701190287(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 696556762:
			unk_0x69071D15F1FDD00C(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 837955913:
			unk_0x6AE6C5324BD6DEBD(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_15, 0, 1);
			break;
		
		case 403506509:
			unk_0x5CD8E37BA3CBA971(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -883876414:
			unk_0x2F7D409DB8FCD57F(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
			unk_0xC7D8414269660FC0(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -1532467144:
			unk_0x5F6D2B7BA40483E7(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 0, 1);
			break;
		
		case 1815541181:
			unk_0xF5BEEB8BA669C558(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case -561012053:
			unk_0x6B07E1D996A69ACF(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1342064661:
			unk_0x929557FEA326BBCC(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case 1240683675:
			unk_0xC46CA38367F16578(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1241904665:
			unk_0x9025AEE080F84A1B(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_16, Global_4535172[iParam0 /*85*/].f_1);
			break;
		
		case -494565059:
			unk_0x110068A07EDA9FBC(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 827308208:
			unk_0x4FF0B515E4C83097(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1857685192:
			unk_0xDE5641418FF92887(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1698417709:
			unk_0xE073EC11C22D5CB5(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -2017925037:
			unk_0xCC4DAB4ED0FA0069(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
			unk_0x6F19DA0555AFD918(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case -1693570755:
			unk_0xE4A2A5E5455654BF(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), Global_4535172[iParam0 /*85*/]);
			break;
		
		case 1868043300:
			unk_0xE05D60BF50DB8652(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -697248883:
			unk_0x4BB8B039E0467D33(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1295545795:
			unk_0x47051CE8E3FBF361(Global_4535172[iParam0 /*85*/].f_9, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case 914079366:
			unk_0x217CC1BF55D59C44(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 0, 0);
			break;
		
		case 395122350:
			unk_0x217CC1BF55D59C44(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
			break;
		
		case -331981076:
			unk_0x217CC1BF55D59C44(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case 1671535231:
			unk_0x217CC1BF55D59C44(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1982688246:
			break;
	}
	switch (Global_4535172[iParam0 /*85*/].f_66.f_4)
	{
		case 1668610896:
			unk_0x814E3AEA72604174(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case -2032529561:
			unk_0x814E3AEA72604174(Global_4535172[iParam0 /*85*/].f_66.f_1, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
			break;
		
		case -1224479447:
			unk_0x814E3AEA72604174(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
			unk_0x9ACC96FE8469BF29(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case 1220095570:
		case 2050320631:
		case 592672421:
			unk_0x9ACC96FE8469BF29(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1775876058:
			unk_0x2B8A3862BDE6737C(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case -842062976:
			unk_0xD8D4BFD9BC71E9CC(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case -1896606724:
			Var3.f_0 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			unk_0xDCA98A271D0CC516(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case -1291433573:
			Var3.f_1 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			unk_0xDCA98A271D0CC516(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 538631715:
			Var3.f_2 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			unk_0xDCA98A271D0CC516(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 133782822:
			Var3.f_3 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			unk_0xDCA98A271D0CC516(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 2081885153:
			Var3.f_4 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			unk_0xDCA98A271D0CC516(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case -1314365345:
			Var3.f_5 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			unk_0xDCA98A271D0CC516(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 1322977732:
			Var3.f_6 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			unk_0xDCA98A271D0CC516(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 396623013:
			Var3.f_7 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			unk_0xDCA98A271D0CC516(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 1981664462:
			unk_0x1F6D32912DBFCEA7(Global_4535172[iParam0 /*85*/]);
			break;
		
		case -518651910:
		case 14658715:
			unk_0x22F6103D7DF1811B(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
			unk_0xB413CA811F506DCF(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/].f_66.f_16, Global_4535172[iParam0 /*85*/], 0, 0);
			break;
		
		case -837690641:
			unk_0xB413CA811F506DCF(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1029672338:
			unk_0x5836433A62D1A6C4(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1921250821:
			unk_0x0C919F00C1EB6628(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case -1370731547:
			unk_0x0C919F00C1EB6628(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, Global_4535172[iParam0 /*85*/].f_66.f_1, 0);
			break;
		
		case 1683798242:
			unk_0x0C919F00C1EB6628(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -910968288:
			unk_0x7295CAE6372986E4(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_10, Global_4535172[iParam0 /*85*/].f_11, Global_4535172[iParam0 /*85*/].f_12, Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7);
			break;
		
		case -1503749970:
			unk_0xAF64B7223D9E0FEB(Global_4535172[iParam0 /*85*/].f_66.f_1, -1, -1, Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1843409092:
			unk_0xAF64B7223D9E0FEB(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_1, unk_0x70E57E9927B6BA58(&(Global_4535172[iParam0 /*85*/].f_14.f_26)), -1, -1);
			break;
		
		case 1669058563:
			unk_0x7A3449D1CF40578C(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 2102747615:
			unk_0xD378B386217DBB5E(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 2030771998:
			unk_0x0C9F128BF7D93196(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
			unk_0x16FD73B3F4345670(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_44));
			break;
		
		case 1051883823:
			unk_0xC8EAF995510A953C(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 1280785534:
			unk_0xE16238C3C62697D0(Global_4535172[iParam0 /*85*/].f_66.f_1, 277);
			break;
		
		case -168319378:
			unk_0xCF0625D5D2A8F298(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Global_4540926);
			break;
		
		case -1878824774:
			unk_0xEBDEC0D7E92D20B0(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 247992227:
			unk_0x87065E48A6ACAF50(Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -229237358:
			unk_0x4B9D927C4A4FB9DC(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1123183389:
			unk_0x9E645A15DE54B5EE(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 1814197076:
			unk_0x50EE547EE5B116FA(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 713955548:
			unk_0x61D4C8F1146AD04D(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -2026544524:
			unk_0x583714F99BC53894(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -719580138:
			unk_0xFC7D9950A581B4F3(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -163417439:
			unk_0xF4E49895EADECEB2(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1658225921:
			unk_0x2F5233FB30DF57D5(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -551835600:
			unk_0xA19C2545709CF8B5(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -1230687625:
			unk_0x29F36537BAC3D711(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -550417574:
			unk_0x07729F2302AF3353(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 1637817605:
			unk_0xE521F8F950FE34C3(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_16, Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case 830018386:
			unk_0x566ADA7FE6D2FFC4(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case -1433071892:
			unk_0xE57ED256E47D44C1(Global_4535172[iParam0 /*85*/].f_66.f_1, 1989714117);
			break;
		
		case -2013760296:
			unk_0x92473EA3E0FD6C3C(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 761999406:
			unk_0x4D488739F6C82163(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1033889004:
			unk_0x2ED93149B4CC68C1(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -754024203:
			unk_0x5281982126ED6EB1(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 1208553146:
			unk_0x0B191D6DA6D08B82(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case -1101941763:
		case 1748245957:
		case 1036772696:
		case -1384648535:
		case -800037808:
		case -695852120:
		case 77355315:
		case 2097889166:
		case 1707592130:
		case -239888995:
		case 1163066566:
		case -955087020:
		case 1874391251:
			unk_0x237E99388DCA3CEF(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &uVar2);
			break;
		
		case 1628412596:
			unk_0x1D83165BDA8DF7FC(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/].f_9, Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -2081984382:
			unk_0x635D6A4C16C8B427(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0);
			break;
		
		case 1089562091:
			unk_0x2ED93149B4CC68C1(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case 883337077:
			Var5.f_0 = Global_4535172[iParam0 /*85*/].f_13;
			Var5.f_1 = Global_4535172[iParam0 /*85*/];
			Var5.f_2 = Global_4535172[iParam0 /*85*/].f_66.f_15;
			unk_0x04AA32C25ED6D69D(Global_4535172[iParam0 /*85*/].f_66.f_1, &Var5);
			break;
		
		case -1274418755:
			unk_0xE8C7135747EA3054(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case -1853979468:
			unk_0x5B46189D0DA97DE4(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 1633116913:
			unk_0xF8BBC07B8BA14ECF(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 668586600:
			unk_0xD16E87370ADCE88C(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 15168061:
			unk_0x00A1243621982D87(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 590289134:
			unk_0xDD0F567A35809C42(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 99792878:
			unk_0xCFA8FE5301B9E6CE(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 1866258778:
			unk_0x2656226DE9A2C644(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case -178394060:
			unk_0x0A4457A33AC118B4(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 409592287:
			unk_0x39D90796902DFED4(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 593836803:
			unk_0x9657D8B784593A5E(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 1973036520:
			unk_0xD755F13556CF7C9D(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 2063456538:
			unk_0x8D2A2025E94588A1(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case -728008329:
			unk_0x733EB09C30E2BC1E(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 119239868:
			unk_0x5E3EE3B0D24ED146(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
	}
	if (func_13())
	{
		if (bParam1)
		{
			unk_0x11FD21BA1B765FE2(Global_4535172[iParam0 /*85*/].f_66, &uVar6);
		}
	}
	func_7(iParam0);
}

int func_33(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x762604C40829DB72(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x75EAB09F5E974116(uParam0))
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

var func_34(var uParam0)
{
	return uParam0;
}

void func_35(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = -1;
}

int func_36(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66 == iParam0)
		{
			*uParam1 = { Global_4535172[iVar0 /*85*/] };
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_37(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Global_4540733[iParam0 /*12*/].f_1 == Global_4540733[iParam0 /*12*/].f_6)
	{
		if (Global_4540733[iParam0 /*12*/].f_1 != 1445302971 && Global_4540733[iParam0 /*12*/].f_1 != -1316591359)
		{
			return;
		}
	}
	iVar0 = 0;
	sVar2 = "Wardrobe";
	iVar0 = unk_0x70E57E9927B6BA58(sVar2);
	iVar0 = (iVar0 || func_39());
	iVar0 = (iVar0 + Global_4538682);
	func_38(&uVar1);
	iVar0 = (iVar0 || uVar1);
	unk_0x8744D2E3FC95740E(&iVar0, 28);
	unk_0x8744D2E3FC95740E(&iVar0, 29);
	unk_0x8744D2E3FC95740E(&iVar0, 26);
	iVar3 = (Global_4540733[iParam0 /*12*/].f_9 && iVar0);
	iVar4 = (Global_4540733[iParam0 /*12*/].f_8 && iVar0);
	iVar5 = Global_4540733[iParam0 /*12*/].f_7;
	if (iVar5 == 0)
	{
		iVar5 = -2085313189;
	}
	if (((Global_4540733[iParam0 /*12*/] != Global_4540733[iParam0 /*12*/].f_5 || Global_4540733[iParam0 /*12*/].f_1 != Global_4540733[iParam0 /*12*/].f_6) || Global_4540733[iParam0 /*12*/].f_2 != iVar5) || Global_4540733[iParam0 /*12*/].f_3 != (iVar4 + iVar3))
	{
		Global_110350 = 1;
	}
}

int func_38(var uParam0)
{
	*uParam0 = shift_left(1, 2);
	return 5410420;
}

int func_39()
{
	return shift_left(1, 25);
}

int func_40()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_47())
	{
		return 1;
	}
	if (Global_2696917)
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	if (func_45(159))
	{
		if (!func_44())
		{
			return 1;
		}
	}
	if (func_45(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_41() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_41()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_41()
{
	switch (func_43())
	{
		case 0:
			return func_42();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_42()
{
	switch (Global_2697021)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_43()
{
	return Global_32163;
}

bool func_44()
{
	return Global_2683864.f_698;
}

int func_45(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_46()
{
	return Global_2694526;
}

bool func_47()
{
	return Global_2683864.f_693;
}

void func_48()
{
	wait(0);
}

void func_49()
{
	func_50();
}

void func_50()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_51(struct<34> Param0)
{
	if (Global_262145.f_24076)
	{
		func_49();
	}
	Local_22.f_66 = { Param0 };
	Local_22 = { Param0.f_19 };
	Local_22.f_14 = { Global_4535172[Param0.f_33 /*85*/].f_14 };
	iLocal_21 = Param0.f_33;
	if (Param0.f_33 < 0)
	{
		func_49();
	}
	if (!func_52(Param0, Param0.f_33))
	{
		func_7(Param0.f_33);
		func_49();
	}
	if (Local_22.f_66.f_2 != 0)
	{
		Local_22.f_66.f_2 = 1;
	}
}

int func_52(struct<18> Param0, var uParam1, int iParam2)
{
	if (Global_4535172[iParam2 /*85*/].f_66.f_1 != Param0.f_1)
	{
		return 0;
	}
	if (Global_4535172[iParam2 /*85*/].f_66.f_3 != Param0.f_3)
	{
		return 0;
	}
	if (Global_4535172[iParam2 /*85*/].f_66.f_4 != Param0.f_4)
	{
		return 0;
	}
	if (Global_4535172[iParam2 /*85*/].f_66.f_5 != Param0.f_5)
	{
		return 0;
	}
	if (Global_4535172[iParam2 /*85*/].f_66.f_6 != Param0.f_6)
	{
		return 0;
	}
	if (Global_4535172[iParam2 /*85*/].f_66.f_7 != Param0.f_7)
	{
		return 0;
	}
	if (Global_4535172[iParam2 /*85*/].f_66.f_14 != Param0.f_14)
	{
		return 0;
	}
	if (Global_4535172[iParam2 /*85*/].f_66.f_17 != Param0.f_17)
	{
		return 0;
	}
	return 1;
}
