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
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	char* sLocal_50 = NULL;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	bool bLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	sLocal_50 = "NULL";
	Local_56 = { 6f, 10f, 2f };
	fLocal_57 = 0.306f;
	fLocal_58 = 0.31f;
	fLocal_59 = 0.98f;
	iLocal_60 = -99;
	iLocal_63 = -1;
	func_1(iScriptParam_78);
}

void func_1(int iParam0)
{
	int iVar0;
	
	if (!unk_0x76CD105BCAC6EB9F())
	{
		if (unk_0x96CFB880BAC634CE(2))
		{
			func_386();
		}
	}
	if (func_385(13) || func_385(14))
	{
		func_386();
	}
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		unk_0xD0F1DB0E50B367AD(iParam0, 0, 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_386();
	}
	func_382(iParam0);
	if (iLocal_48 == 0)
	{
		func_386();
	}
	func_379();
	while (true)
	{
		wait(0);
		if (bLocal_75)
		{
			if (func_372())
			{
				func_386();
			}
			if (!unk_0x76CD105BCAC6EB9F())
			{
				func_386();
			}
		}
		if (Global_32166)
		{
			func_386();
		}
		if (unk_0xFC8BFE4B41177C22(iParam0))
		{
			if (unk_0x110821AE6C63DD4F(iParam0))
			{
				iVar0 = 1;
			}
			else if (unk_0x71C1A46B17126AA4(iParam0))
			{
				iVar0 = 1;
			}
			if (iVar0 && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
			{
				if (unk_0x8D91ADE44AC79BC9(iParam0) < 875)
				{
					unk_0xD25E9BDC14A0B649(iParam0, 0, 0);
				}
				switch (iLocal_47)
				{
					case 0:
						if (func_371(iLocal_48))
						{
							if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
							{
								unk_0xE4DC7B3DD712372B(unk_0x4A8C381C258A124D());
							}
							iLocal_47 = 2;
						}
						break;
					
					case 2:
						if ((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) && !func_370())
						{
							func_248(iParam0, iLocal_48);
						}
						else
						{
							func_245(1);
							func_3(iLocal_48);
						}
						break;
					
					case 3:
						func_2("VENDEMP", -1);
						unk_0xD25E9BDC14A0B649(iParam0, 0, 0);
						break;
				}
			}
			else
			{
				func_386();
			}
		}
		else
		{
			func_386();
		}
		Global_32418 = 1;
	}
}

void func_2(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

void func_3(int iParam0)
{
	if (BitTest(uLocal_74, 0))
	{
		unk_0x96A0632EBDD87FA3(unk_0x4A8C381C258A124D(), 1, -1, 0);
		unk_0x8744D2E3FC95740E(&uLocal_74, false);
	}
	if (Global_78558)
	{
		if (iLocal_51)
		{
			func_234(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
		}
	}
	else
	{
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), true, 0);
		func_225(0, 1, 1, 0, 0, 0, 0);
		Global_32419 = 0;
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), sLocal_50, "PLYR_BUY_DRINK_PT1", 3) || func_370())
		{
			unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
		}
	}
	if (Global_78558)
	{
		if (unk_0x2A9ED010C087BF2B(iLocal_54))
		{
			unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), iLocal_54, 0);
		}
		if (iLocal_60 != -99)
		{
			func_11(unk_0x4A8C381C258A124D(), 1, iLocal_60, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			iLocal_60 = -99;
		}
		if (iLocal_61)
		{
			func_9(unk_0x4A8C381C258A124D());
			iLocal_61 = 0;
		}
		func_8();
	}
	iLocal_51 = 0;
	if (unk_0xFC8BFE4B41177C22(iLocal_55))
	{
		func_7(iParam0);
		func_6();
		func_245(0);
	}
	func_5(0);
	func_4(&uLocal_69);
}

void func_4(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_5(int iParam0)
{
	iLocal_49 = iParam0;
}

void func_6()
{
	unk_0xD25E9BDC14A0B649(unk_0x4A8C381C258A124D(), unk_0x3C8EDE4003ABACA0(unk_0x4A8C381C258A124D()), 0);
	iLocal_62++;
}

void func_7(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 5:
			break;
		
		case 6:
			break;
		
		case 7:
			break;
		
		case 8:
			break;
	}
}

void func_8()
{
	if (Global_2672505.f_947.f_10)
	{
		Global_2672505.f_947.f_10 = 0;
	}
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xD6AED6BFCC58AF7F(iParam0, 8);
	iVar1 = unk_0x94B8A32AA940A6B5(iParam0, 8, unk_0xC0120BBCC298EA2F(iParam0, 8), iVar0);
	if (unk_0x304A39EB177D246B(iVar1, joaat("haz_hood"), 0))
	{
		iVar2 = -1;
		if (unk_0x304A39EB177D246B(iVar1, joaat("hood_up"), 0))
		{
			iVar2 = func_10(iParam0, 0);
			unk_0xD1C578C204015E1F(iParam0, 8, iVar2, iVar0, 0);
			return 1;
		}
		else if (unk_0x304A39EB177D246B(iVar1, joaat("hood_down"), 0))
		{
			iVar2 = func_10(iParam0, 1);
			unk_0xD1C578C204015E1F(iParam0, 8, iVar2, iVar0, 0);
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_10(int iParam0, bool bParam1)
{
	struct<4> Var0;
	bool bVar1;
	
	bVar1 = unk_0x4B423FAA24E8ABF0(iParam0) == joaat("mp_m_freemode_01");
	Var0.f_3 = -1;
	if (bVar1)
	{
		if (bParam1)
		{
			unk_0xA5690D702773BED4(joaat("dlc_mp_heist_m_special_7_0"), &Var0);
		}
		else
		{
			unk_0xA5690D702773BED4(joaat("dlc_mp_heist_m_special_6_0"), &Var0);
		}
	}
	else if (bParam1)
	{
		unk_0xA5690D702773BED4(joaat("dlc_mp_heist_f_special_11_0"), &Var0);
	}
	else
	{
		unk_0xA5690D702773BED4(joaat("dlc_mp_heist_f_special_10_0"), &Var0);
	}
	return Var0.f_3;
}

int func_11(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	var uVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	var uVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	var uVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	var uVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	
	if (!unk_0x76CD105BCAC6EB9F())
	{
		if ((Global_1574992 != 4 && Global_1574992 != 5) && Global_1574992 != 7)
		{
			return 0;
		}
	}
	if (unk_0x4FAFF4BCB7633475(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == unk_0x4A8C381C258A124D() && Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_232 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_78338;
	}
	Global_78339++;
	iVar5 = unk_0x4B423FAA24E8ABF0(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = -1;
	iVar11 = -1;
	if (iParam5 == 0)
	{
		Global_78341[1 /*14*/] = { func_184(iVar5, iParam1, iParam2, -1) };
		if (!func_183(iParam3))
		{
			Global_78339 = (Global_78339 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78339 > 1)
		{
		}
		else if (BitTest(Global_78341[1 /*14*/].f_6, 4))
		{
			func_178(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar12 = Global_2883588;
		uVar13 = Global_2883589;
		unk_0x445E7F949766A0C7(iParam0, 1);
		uVar14 = 15;
		if (iParam5 == 1)
		{
			uVar14 = { Global_78384 };
		}
		else
		{
			uVar14 = { func_174(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78341[1 /*14*/] = { func_184(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						unk_0xD1C578C204015E1F(iParam0, func_173(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, unk_0xDAF263B0E792EAEC(iParam0, func_173(iVar0)));
					}
					else
					{
						unk_0xD1C578C204015E1F(iParam0, func_173(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78341[1 /*14*/].f_6, 1))
					{
						func_178(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78341[1 /*14*/] = { func_184(iVar5, iVar0, uVar14[iVar0], -1) };
					if (BitTest(Global_78341[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar15 = 9;
							if (iParam5 == 1)
							{
								uVar15 = { Global_78401 };
							}
							else
							{
								uVar15 = { func_170(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78341[1 /*14*/] = { func_184(iVar5, 14, uVar15[iVar1], -1) };
								func_169(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
								if (BitTest(Global_78341[1 /*14*/].f_6, 1))
								{
									func_178(iVar5, iVar0, uVar14[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									unk_0xD1C578C204015E1F(iParam0, func_173(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, unk_0xDAF263B0E792EAEC(iParam0, func_173(iVar0)));
								}
								else
								{
									unk_0xD1C578C204015E1F(iParam0, func_173(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_11(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78341[1 /*14*/].f_6, 1))
							{
								func_178(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78341[1 /*14*/] = { func_184(iVar5, iVar0, func_165(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78341[1 /*14*/].f_6, 3))
				{
					uVar16 = { func_174(iVar5, 0) };
					func_11(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		unk_0xD1C578C204015E1F(iParam0, 1, unk_0xC0120BBCC298EA2F(iParam0, 1), unk_0xD6AED6BFCC58AF7F(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = func_164();
			if (iVar17 != -1)
			{
				func_161(iVar17, 0, iParam10);
			}
			func_156(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { func_170(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78341[1 /*14*/] = { func_184(iVar5, 14, uVar18[iVar1], -1) };
			func_169(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
			if (BitTest(Global_78341[1 /*14*/].f_6, 1))
			{
				func_178(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78339 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_154(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_11(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_169(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
		if (BitTest(Global_78341[1 /*14*/].f_6, 1))
		{
			func_178(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78341[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78341[1 /*14*/].f_6, 6) && unk_0x304A39EB177D246B(Global_2883588, joaat("shrink_hair"), 1))
			{
			}
			else if (unk_0xCA362C769B0F4F0E(iParam0, 1, joaat("hair_shrink")))
			{
				func_11(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78341[1 /*14*/] = { func_184(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78341[1 /*14*/].f_12 == 0)
		{
			func_147(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78339 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_154(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_11(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_154(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_11(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		if ((iParam1 == 4 || iParam1 == 11) || iParam1 == 8)
		{
			iVar19 = func_173(iParam1);
			if (unk_0xC0120BBCC298EA2F(iParam0, iVar19) != Global_78341[1 /*14*/].f_3 || unk_0xD6AED6BFCC58AF7F(iParam0, iVar19) != Global_78341[1 /*14*/].f_4)
			{
				iVar20 = unk_0x94B8A32AA940A6B5(iParam0, 8, unk_0xC0120BBCC298EA2F(iParam0, 8), unk_0xD6AED6BFCC58AF7F(iParam0, 8));
				iVar21 = unk_0x94B8A32AA940A6B5(iParam0, 7, unk_0xC0120BBCC298EA2F(iParam0, 7), unk_0xD6AED6BFCC58AF7F(iParam0, 7));
				if (((iParam1 == 11 && unk_0x304A39EB177D246B(iVar21, 307252627, 0)) || (iParam1 == 8 && unk_0x304A39EB177D246B(iVar21, joaat("REMOVE_WITH_SPECIAL"), 0))) || (iParam1 == 4 && unk_0x304A39EB177D246B(iVar21, -2095729091, 0)))
				{
					unk_0xD1C578C204015E1F(iParam0, 7, 0, 0, unk_0xDAF263B0E792EAEC(iParam0, 7));
				}
				if ((iParam1 == 11 && unk_0x304A39EB177D246B(iVar20, 307252627, 0)) || (iParam1 == 4 && unk_0x304A39EB177D246B(iVar20, -2095729091, 0)))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						unk_0xD1C578C204015E1F(iParam0, 8, 15, 0, unk_0xDAF263B0E792EAEC(iParam0, 8));
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						unk_0xD1C578C204015E1F(iParam0, 8, 2, 0, unk_0xDAF263B0E792EAEC(iParam0, 8));
					}
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar22 = -1;
				if (BitTest(Global_78341[1 /*14*/].f_6, 6) && unk_0x304A39EB177D246B(Global_2883588, joaat("CREW_COL"), 11))
				{
					unk_0xA3C0950202881572(iParam0, Global_1576217, Global_1576218, Global_1576219, 0);
					unk_0xA3C0950202881572(iParam0, Global_1576217, Global_1576218, Global_1576219, 1);
					unk_0xA3C0950202881572(iParam0, Global_1576217, Global_1576218, Global_1576219, 2);
					unk_0xA3C0950202881572(iParam0, Global_1576217, Global_1576218, Global_1576219, 3);
				}
				iVar23 = func_145(iParam0, 11);
				iVar24 = func_145(iParam0, 8);
				iVar25 = func_145(iParam0, 4);
				if (unk_0xCA362C769B0F4F0E(iParam0, 8, joaat("over_jacket")))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar22 = func_144(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar22 = func_144(iVar5, iParam2, 11, 4);
					}
					if ((((((unk_0x304A39EB177D246B(iVar22, joaat("silk_robe"), 0) || unk_0x304A39EB177D246B(iVar22, joaat("silk_pyjamas"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar22, -826135203, 0)) || unk_0x304A39EB177D246B(iVar22, joaat("morph_suit"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("gorka_suit"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("cat_suit"), 0))
					{
					}
					else
					{
						iVar8 = func_145(iParam0, 8);
					}
				}
				iVar26 = unk_0x94B8A32AA940A6B5(iParam0, 3, unk_0xC0120BBCC298EA2F(iParam0, 3), 0);
				if (unk_0x304A39EB177D246B(iVar26, joaat("gloves"), 0))
				{
					iVar27 = func_143(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = func_154(iParam0, iVar5, 11, iVar23, 3, 0);
					}
					switch (iVar26)
					{
						case joaat("dlc_mp_val_f_uppr0_0"):
						case joaat("dlc_mp_val_f_uppr0_1"):
						case joaat("dlc_mp_val_f_uppr0_2"):
						case joaat("dlc_mp_val_f_uppr0_3"):
						case joaat("dlc_mp_val_f_uppr0_4"):
						case joaat("dlc_mp_val_f_uppr0_5"):
							iVar27 = 11;
							iVar22 = func_144(iVar5, iParam2, 11, 4);
							if (!unk_0x304A39EB177D246B(iVar22, joaat("dress"), 0))
							{
								iVar27 = -99;
							}
							break;
					}
					if (iVar27 != -99)
					{
						iVar28 = 0;
						while (iVar28 < 18)
						{
							if (func_142(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = unk_0xD6AED6BFCC58AF7F(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && unk_0x304A39EB177D246B(func_144(iVar5, iParam2, 11, 4), joaat("vest"), 0))
				{
					iVar23 = func_145(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = func_144(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && unk_0x304A39EB177D246B(iVar22, joaat("vest_shirt"), 0))
					{
						iVar29 = func_140(iVar5, iVar23, iParam2, unk_0xD6AED6BFCC58AF7F(iParam0, 11));
						if (iVar29 != -99)
						{
							func_11(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78341[1 /*14*/] = { func_184(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_139(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = func_144(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = func_144(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!func_139(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar23 >= 256) && (unk_0x304A39EB177D246B(iVar22, joaat("vest"), 0) || unk_0x304A39EB177D246B(iVar22, joaat("vest_shirt"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar23 >= 256) && ((((((((unk_0x304A39EB177D246B(iVar22, joaat("heist_draw_5"), 0) || unk_0x304A39EB177D246B(iVar22, joaat("heist_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("heist_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("heist_draw_11"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("heist_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar22, -872449705, 0)) || unk_0x304A39EB177D246B(iVar22, joaat("apart_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("stunt_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("stunt_draw_9"), 0)))
						{
						}
						else
						{
							iVar30 = func_138(iParam0, iParam2);
							iVar31 = func_140(iVar5, iVar23, iParam2, unk_0xD6AED6BFCC58AF7F(iParam0, 11));
							if (iVar31 != -99)
							{
								func_11(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78341[1 /*14*/] = { func_184(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == unk_0x4A8C381C258A124D() || iParam0 == Global_4539790))
							{
								func_11(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78341[1 /*14*/] = { func_184(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar32 = func_136(iVar5, 11, -1);
									Global_78341[1 /*14*/] = { func_184(iVar5, 11, iVar32, -1) };
									iVar31 = func_140(iVar5, iVar32, iParam2, Global_78341[1 /*14*/].f_4);
									iVar33 = func_144(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || unk_0x304A39EB177D246B(iVar33, joaat("biker_vest"), 0)) || unk_0x304A39EB177D246B(iVar33, joaat("open_short"), 0))
									{
										iVar31 = 240;
									}
									else if (unk_0x304A39EB177D246B(iVar33, -1099375697, 0))
									{
										iVar31 = 80;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x304A39EB177D246B(func_144(iVar5, iParam2, 11, 4), joaat("biker_vest"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_11(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78341[1 /*14*/] = { func_184(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78341[1 /*14*/] = { func_184(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78341[1 /*14*/].f_3;
						Global_78341[1 /*14*/] = { func_184(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78341[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = func_138(iParam0, iParam2);
							Global_78341[1 /*14*/] = { func_184(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78341[1 /*14*/].f_4;
							iVar38 = func_135(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == unk_0x4A8C381C258A124D() || iParam0 == Global_4539790))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar40 = func_144(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_134(iVar40) == 6) || unk_0x304A39EB177D246B(iVar40, joaat("biker_vest"), 0))
									{
										iVar38 = func_136(iVar5, 11, -1);
										Global_78341[1 /*14*/] = { func_184(iVar5, 11, iVar38, -1) };
										iVar39 = func_140(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!unk_0x304A39EB177D246B(func_144(iVar5, iParam2, 11, 4), joaat("jacket_only"), 0))
									{
										iVar38 = func_136(iVar5, 11, -1);
										Global_78341[1 /*14*/] = { func_184(iVar5, 11, iVar38, -1) };
										iVar39 = func_140(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar41 = func_144(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar41 = func_144(iVar5, iVar24, 8, 4);
								}
								if (unk_0x304A39EB177D246B(iVar41, joaat("overcoat_accs"), 0))
								{
									iVar38 = func_136(iVar5, 11, -1);
									Global_78341[1 /*14*/] = { func_184(iVar5, 11, iVar38, -1) };
									iVar39 = func_140(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = func_140(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (unk_0x304A39EB177D246B(func_144(iVar5, iParam2, 11, 3), joaat("low2_open_check"), 0))
									{
										if (!func_133(iVar5, func_145(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x304A39EB177D246B(func_144(iVar5, iParam2, 11, 4), joaat("low2_open_check"), 0))
									{
										if (!func_133(iVar5, func_145(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_11(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar38 = func_136(iVar5, 11, -1);
								Global_78341[1 /*14*/] = { func_184(iVar5, 11, iVar38, -1) };
								iVar39 = func_140(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_11(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_11(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78341[1 /*14*/] = { func_184(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_130(iVar5, iParam2);
				if (!bParam13)
				{
					unk_0xD1C578C204015E1F(iParam0, 10, 0, 0, unk_0xDAF263B0E792EAEC(iParam0, 10));
				}
			}
			func_156(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_143(iVar5, func_165(iParam0, 8, -1), iParam2, func_165(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_129(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_129(2160, iParam10, 0);
				}
				unk_0x894EE2587C8D8D1E(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar42 = -99;
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar42 = func_127(iParam2);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar42 = func_125(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_70(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = unk_0x94B8A32AA940A6B5(iParam0, 3, unk_0xC0120BBCC298EA2F(iParam0, 3), 0);
			if (unk_0x304A39EB177D246B(iVar43, joaat("gloves"), 0))
			{
				iVar44 = func_145(iParam0, 11);
				iVar45 = func_145(iParam0, 4);
				iVar46 = func_143(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = func_154(iParam0, iVar5, 11, iVar44, 3, 0);
				}
				switch (iVar43)
				{
					case joaat("dlc_mp_val_f_uppr0_0"):
					case joaat("dlc_mp_val_f_uppr0_1"):
					case joaat("dlc_mp_val_f_uppr0_2"):
					case joaat("dlc_mp_val_f_uppr0_3"):
					case joaat("dlc_mp_val_f_uppr0_4"):
					case joaat("dlc_mp_val_f_uppr0_5"):
						iVar46 = 11;
						iVar47 = func_144(iVar5, iParam2, 11, 4);
						if (!unk_0x304A39EB177D246B(iVar47, joaat("dress"), 0))
						{
							iVar46 = -99;
						}
						break;
				}
				if (iVar46 != -99)
				{
					iVar48 = 0;
					while (iVar48 < 18)
					{
						if (func_142(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = unk_0xD6AED6BFCC58AF7F(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_156(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = func_145(iParam0, 11);
			if (func_139(iVar5, iVar49, -1))
			{
				iVar50 = func_135(iVar5, iParam2, Global_78341[1 /*14*/].f_4);
				func_130(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_143(iVar5, iParam2, func_145(iParam0, 11), func_145(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = func_145(iParam0, 7);
				if (!func_67(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					unk_0xD1C578C204015E1F(iParam0, func_173(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && unk_0x304A39EB177D246B(Global_2883588, joaat("shrink_head"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && unk_0x304A39EB177D246B(Global_2883588, joaat("shrink_head"), 0)))
			{
				iVar52 = func_129(2100, iParam10, 0);
				iVar53 = func_129(2101, iParam10, 0);
				iVar54 = func_129(2102, iParam10, 0);
				uVar55 = func_66(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					unk_0x0A5987DCA39E8BE5(iParam0, 0, 0, 0, iVar52, iVar53, iVar54, 0f, uVar55, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					unk_0x0A5987DCA39E8BE5(iParam0, 21, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
				}
				iVar56 = 0;
				while (iVar56 < 20)
				{
					unk_0xAAF9B08B469F707F(iParam0, iVar56, 0f);
					iVar56++;
				}
			}
			else
			{
				func_51(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = func_145(iParam0, 11);
			iVar58 = func_145(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x304A39EB177D246B(func_144(iVar5, iVar57, 11, 3), joaat("low2_open_check"), 0))
				{
					if (!func_133(iVar5, iParam2, func_135(iVar5, iVar58, 0)))
					{
						func_11(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78341[1 /*14*/] = { func_184(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (unk_0x304A39EB177D246B(func_144(iVar5, iVar57, 11, 4), joaat("low2_open_check"), 0))
				{
					if (!func_133(iVar5, iParam2, func_135(iVar5, iVar58, 0)))
					{
						func_11(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78341[1 /*14*/] = { func_184(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_143(iVar5, func_145(iParam0, 8), func_145(iParam0, 11), iParam2);
			}
			iVar59 = unk_0x94B8A32AA940A6B5(iParam0, 3, unk_0xC0120BBCC298EA2F(iParam0, 3), 0);
			if (unk_0x304A39EB177D246B(iVar59, joaat("gloves"), 0))
			{
				iVar60 = func_143(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = func_154(iParam0, iVar5, 11, iVar57, 3, 0);
				}
				switch (iVar59)
				{
					case joaat("dlc_mp_val_f_uppr0_0"):
					case joaat("dlc_mp_val_f_uppr0_1"):
					case joaat("dlc_mp_val_f_uppr0_2"):
					case joaat("dlc_mp_val_f_uppr0_3"):
					case joaat("dlc_mp_val_f_uppr0_4"):
					case joaat("dlc_mp_val_f_uppr0_5"):
						iVar60 = 11;
						iVar61 = func_144(iVar5, iParam2, 11, 4);
						if (!unk_0x304A39EB177D246B(iVar61, joaat("dress"), 0))
						{
							iVar60 = -99;
						}
						break;
				}
				if (iVar60 != -99)
				{
					iVar62 = 0;
					while (iVar62 < 18)
					{
						if (func_142(iVar5, iVar60, iVar62) == iVar59)
						{
							iVar10 = iVar62;
							iVar11 = unk_0xD6AED6BFCC58AF7F(iParam0, 3);
						}
						iVar62++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			unk_0xD1C578C204015E1F(iParam0, func_173(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, unk_0xDAF263B0E792EAEC(iParam0, func_173(iParam1)));
		}
		else
		{
			unk_0xD1C578C204015E1F(iParam0, func_173(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78339 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_154(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_11(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2883588)
							{
								case joaat("dlc_mp_val_f_uppr0_0"):
								case joaat("dlc_mp_val_f_uppr0_1"):
								case joaat("dlc_mp_val_f_uppr0_2"):
								case joaat("dlc_mp_val_f_uppr0_3"):
								case joaat("dlc_mp_val_f_uppr0_4"):
								case joaat("dlc_mp_val_f_uppr0_5"):
									iVar10 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_143(iVar5, iVar3, func_145(iParam0, 11), func_145(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_154(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_11(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_50(iParam0))
				{
					iVar63 = func_48(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + unk_0xD6AED6BFCC58AF7F(iParam0, 9));
						if (!func_42(iParam0, 9, iVar63))
						{
							func_11(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_11(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (unk_0xCA362C769B0F4F0E(iParam0, 8, joaat("over_jacket")))
					{
						func_11(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = func_129(2042, -1, 0);
				if (unk_0xC0120BBCC298EA2F(iParam0, 5) != 0)
				{
					unk_0xD1C578C204015E1F(iParam0, 5, func_36(iParam0, iVar64), func_35(iParam0, iVar64), func_34(iParam0, iVar64));
				}
				if (iParam0 == unk_0x4A8C381C258A124D())
				{
					unk_0x740F6E63EE1C1D43(unk_0x259BE71D8A81D4FA(), 5, func_36(unk_0x4A8C381C258A124D(), iVar64), func_35(unk_0x4A8C381C258A124D(), iVar64), 0);
					unk_0xC02C4AB8A5C744D7(unk_0x259BE71D8A81D4FA(), func_34(unk_0x4A8C381C258A124D(), iVar64));
					func_32(unk_0x259BE71D8A81D4FA(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (unk_0x304A39EB177D246B(Global_2883588, joaat("big_chain"), 0))
					{
						func_11(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_165(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_165(iParam0, 11, -1);
				}
				if (func_31(iVar5, 11, iVar66, -1))
				{
					if (!func_30(iVar5, 4, iVar65, -1))
					{
						if (func_29(iVar5, 4, iVar65, &uVar67))
						{
							func_11(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_30(iVar5, 4, iVar65, -1))
				{
					if (func_28(iVar5, 4, iVar65, &uVar67))
					{
						func_11(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar68 = unk_0xC0120BBCC298EA2F(iParam0, 6);
				iVar69 = unk_0xD6AED6BFCC58AF7F(iParam0, 6);
				iVar70 = unk_0x94B8A32AA940A6B5(iParam0, 6, iVar68, iVar69);
				iVar71 = unk_0xC0120BBCC298EA2F(iParam0, 4);
				iVar72 = unk_0xD6AED6BFCC58AF7F(iParam0, 4);
				iVar73 = unk_0x94B8A32AA940A6B5(iParam0, 4, iVar71, iVar72);
				iVar74 = func_145(iParam0, 4);
				iVar75 = func_145(iParam0, 6);
				if (func_27(iVar5, iVar70))
				{
					if (unk_0x304A39EB177D246B(iVar70, joaat("alt_feet"), 0) != func_26(iVar5, iVar74, iVar70))
					{
						iVar76 = unk_0x5A3F0A3B7ECCBD32(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							unk_0x0249B53AB91BF9D0(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar75 = func_22(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_11(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar75 = func_22(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_11(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (unk_0x304A39EB177D246B(iVar73, joaat("alt_legs"), 0) != func_21(iVar5, iVar75, iVar73))
					{
						iVar76 = unk_0x5A3F0A3B7ECCBD32(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							unk_0x0249B53AB91BF9D0(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar74 = func_22(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_11(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar74 = func_22(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_11(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (func_27(iVar5, iVar73))
				{
					if (unk_0x304A39EB177D246B(iVar73, joaat("alt_legs"), 0) != func_21(iVar5, iVar75, iVar73))
					{
						iVar76 = unk_0x5A3F0A3B7ECCBD32(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							unk_0x0249B53AB91BF9D0(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar74 = func_22(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_11(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar74 = func_22(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_11(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (unk_0x304A39EB177D246B(iVar70, joaat("alt_feet"), 0) != func_26(iVar5, iVar74, iVar70))
					{
						iVar76 = unk_0x5A3F0A3B7ECCBD32(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							unk_0x0249B53AB91BF9D0(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar75 = func_22(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_11(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar75 = func_22(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_11(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_147(iParam0);
				iVar81 = unk_0xC0120BBCC298EA2F(iParam0, 1);
				iVar82 = unk_0xD6AED6BFCC58AF7F(iParam0, 1);
				iVar83 = unk_0x94B8A32AA940A6B5(iParam0, 1, iVar81, iVar82);
				if (unk_0x304A39EB177D246B(iVar83, joaat("force_prop"), 0))
				{
					iVar3 = func_154(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_11(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_154(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_11(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_12(iParam0, &uVar4))
		{
			func_11(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_11(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_11(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_11(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = func_142(iVar5, func_165(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar9 = func_22(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar9 = func_22(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_11(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78339 = (Global_78339 - 1);
	return 1;
}

int func_12(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_165(unk_0x4A8C381C258A124D(), 2, -1);
	if (func_129(754, Global_78338, 0) != -99 && func_18())
	{
		if (func_17() == 4)
		{
			return 1;
		}
		if (func_129(754, Global_78338, 0) == 0 && func_129(755, Global_78338, 0) == 0)
		{
			if (func_16(161, Global_78338))
			{
				if (func_129(2053, Global_78338, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_129(753, Global_78338, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_129(754, Global_78338, 0);
		iVar1 = func_129(755, Global_78338, 0);
		if (!func_42(iParam0, iVar1, iVar0))
		{
			if (func_16(161, Global_78338))
			{
				*uParam1 = func_129(2053, Global_78338, 0);
			}
			else
			{
				*uParam1 = func_129(753, Global_78338, 0);
			}
			func_13(754, -99, Global_78338, 1, 0);
			func_13(755, 2, Global_78338, 1, 0);
			return 1;
		}
	}
	return 0;
}

void func_13(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805029[iParam0 /*3*/][func_14(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
	}
}

int func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_15();
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

int func_15()
{
	return Global_1574918;
}

int func_16(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2848282[iParam0 /*3*/][func_14(iParam1)];
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_17()
{
	return Global_1574992;
}

int func_18()
{
	if (func_20() && func_19(0))
	{
		return 1;
	}
	return 0;
}

var func_19(int iParam0)
{
	return Global_1574538[iParam0];
}

var func_20()
{
	return func_19(func_15() + 1);
}

int func_21(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_144(iParam0, iParam1, 6, 3);
			}
			if (unk_0x304A39EB177D246B(iParam2, 1137160120, 0))
			{
				if (unk_0x304A39EB177D246B(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x304A39EB177D246B(iVar0, joaat("cowboy_boots"), 0))
			{
				if ((unk_0x304A39EB177D246B(iParam2, joaat("gun_draw_0"), 0) || unk_0x304A39EB177D246B(iParam2, joaat("gun_draw_1"), 0)) || unk_0x304A39EB177D246B(iParam2, joaat("gorka_suit"), 0))
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iParam2, joaat("has_alt_version"), 0))
			{
				if ((((((((((unk_0x304A39EB177D246B(iVar0, joaat("pilot_suit"), 0) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("cowboy_boots"), 0))
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_144(iParam0, iParam1, 6, 4);
			}
			if (unk_0x304A39EB177D246B(iParam2, 1137160120, 0))
			{
				if (unk_0x304A39EB177D246B(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x304A39EB177D246B(iParam2, joaat("has_alt_version"), 0))
			{
				if (((((((((unk_0x304A39EB177D246B(iVar0, joaat("pilot_suit"), 0) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_8"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_22(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == 12)
	{
		iVar2 = unk_0xF2DDA7CE028AB9CB(iParam3, 0);
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			unk_0x808A8ABE207631DF(iVar1, &Var0);
			if (Var0.f_1 == iParam1)
			{
				return (func_25(iParam0) + iVar1);
			}
			iVar1++;
		}
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 1, -1, -1);
		iVar3 = unk_0x289EDE99827978AD(iParam1);
		if (iVar3 != -1)
		{
			return (func_24(iParam0) + iVar3);
		}
	}
	else
	{
		unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 0, -1, func_173(iParam2));
		iVar4 = unk_0x55FF07D3A2FE8317(iParam1);
		if (iVar4 != -1)
		{
			return (func_23(iParam0, func_173(iParam2)) + iVar4);
		}
	}
	return -99;
}

int func_23(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_25(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 53;
			break;
		
		case joaat("player_one"):
			return 47;
			break;
		
		case joaat("player_two"):
			return 48;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 26;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 28;
			break;
	}
	return -99;
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_144(iParam0, iParam1, 4, 3);
				iVar1 = func_134(iVar0);
			}
			if (unk_0x304A39EB177D246B(iParam2, joaat("cowboy_boots"), 0) || unk_0x304A39EB177D246B(iParam2, joaat("has_alt_version"), 0))
			{
				iVar2 = 1;
				if ((((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || unk_0x304A39EB177D246B(iVar0, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("skinny"), 0)) || (unk_0x304A39EB177D246B(iVar0, joaat("gun_draw_0"), 0) && !unk_0x304A39EB177D246B(iParam2, joaat("cowboy_boots"), 0))) || (unk_0x304A39EB177D246B(iVar0, joaat("gun_draw_1"), 0) && !unk_0x304A39EB177D246B(iParam2, joaat("cowboy_boots"), 0))) || (unk_0x304A39EB177D246B(iVar0, joaat("gorka_suit"), 0) && !unk_0x304A39EB177D246B(iParam2, joaat("cowboy_boots"), 0))) || unk_0x304A39EB177D246B(iVar0, -1854729816, 0))
				{
					iVar2 = 0;
				}
				if (((unk_0x304A39EB177D246B(iParam2, joaat("smug_draw_0"), 0) || unk_0x304A39EB177D246B(iParam2, joaat("smug_draw_1"), 0)) || unk_0x304A39EB177D246B(iParam2, joaat("battle_draw_1"), 0)) || unk_0x304A39EB177D246B(iParam2, joaat("battle_draw_2"), 0))
				{
					if ((((((unk_0x304A39EB177D246B(iVar0, joaat("gun_draw_0"), 0) || unk_0x304A39EB177D246B(iVar0, joaat("gun_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("gorka_suit"), 0))
					{
						iVar2 = 1;
					}
				}
				if (unk_0x304A39EB177D246B(iVar0, 1137160120, 0))
				{
					if (unk_0x304A39EB177D246B(iParam2, -2005216901, 0))
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = 1;
					}
				}
				return iVar2;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_144(iParam0, iParam1, 4, 4);
				iVar1 = func_134(iVar0);
			}
			if (unk_0x304A39EB177D246B(iParam2, joaat("cowboy_boots"), 0) || unk_0x304A39EB177D246B(iParam2, joaat("has_alt_version"), 0))
			{
				if (unk_0x304A39EB177D246B(iVar0, 1137160120, 0))
				{
					if (unk_0x304A39EB177D246B(iParam2, -2005216901, 0))
					{
						return 0;
					}
				}
				if ((unk_0x304A39EB177D246B(iVar0, joaat("gun_draw_0"), 0) || unk_0x304A39EB177D246B(iVar0, joaat("gun_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("gorka_suit"), 0))
				{
					if ((((unk_0x304A39EB177D246B(iParam2, joaat("cowboy_boots"), 0) || unk_0x304A39EB177D246B(iParam2, joaat("biker_draw_5"), 0)) || unk_0x304A39EB177D246B(iParam2, joaat("biker_draw_6"), 0)) || unk_0x304A39EB177D246B(iParam2, joaat("smug_draw_0"), 0)) || unk_0x304A39EB177D246B(iParam2, joaat("smug_draw_1"), 0))
					{
						return 1;
					}
					return 0;
				}
				if (((((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_10"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar0, -430330349, 0)) || unk_0x304A39EB177D246B(iVar0, -1103045158, 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low2_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("dungarees"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("h3_draw_5"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_27(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (unk_0x304A39EB177D246B(iParam1, joaat("cowboy_boots"), 0) || unk_0x304A39EB177D246B(iParam1, joaat("has_alt_version"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (unk_0x304A39EB177D246B(iParam1, joaat("cowboy_boots"), 0) || unk_0x304A39EB177D246B(iParam1, joaat("has_alt_version"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_28(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_144(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x5A3F0A3B7ECCBD32(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0x0249B53AB91BF9D0(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (!unk_0x304A39EB177D246B(iVar3, joaat("dress_legs"), 0))
										{
											*uParam3 = func_22(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_29(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_144(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x5A3F0A3B7ECCBD32(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0x0249B53AB91BF9D0(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (unk_0x304A39EB177D246B(iVar3, joaat("dress_legs"), 0))
										{
											*uParam3 = func_22(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_30(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_144(iParam0, iParam2, 4, 4);
						}
						if (unk_0x304A39EB177D246B(iParam3, joaat("dress_legs"), 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_31(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_144(iParam0, iParam2, 11, 4);
						}
						return unk_0x304A39EB177D246B(iParam3, joaat("dress"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_32(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_33(iParam1);
	if (iVar0 != joaat("p_parachute_s"))
	{
		unk_0xD8FE716A11BE669A(iParam0, iVar0);
	}
	else
	{
		unk_0xBDAA517C3D10DB80(iParam0);
	}
}

int func_33(int iParam0)
{
	if (iParam0 > 66)
	{
		return joaat("reh_p_para_bag_reh_s_01a");
	}
	else if (iParam0 > 63)
	{
		return joaat("p_para_bag_tr_s_01a");
	}
	else if (iParam0 > 61)
	{
		return joaat("vw_p_para_bag_vine_s");
	}
	else if (iParam0 > 51)
	{
		return joaat("lts_p_para_bag_pilot2_s");
	}
	else if (iParam0 > 46)
	{
		return joaat("p_para_bag_xmas_s");
	}
	else if (iParam0 > 26)
	{
		return joaat("lts_p_para_bag_lts_s");
	}
	else if (iParam0 > 0)
	{
		return joaat("lts_p_para_bag_pilot2_s");
	}
	return joaat("p_parachute_s");
}

int func_34(int iParam0, int iParam1)
{
	return 0;
}

int func_35(int iParam0, int iParam1)
{
	switch (iParam1)
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
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
		
		case 13:
			return 12;
			break;
		
		case 14:
			return 13;
			break;
		
		case 15:
			return 14;
			break;
		
		case 16:
			return 15;
			break;
		
		case 17:
			return 16;
			break;
		
		case 18:
			return 17;
			break;
		
		case 19:
			return 18;
			break;
		
		case 20:
			return 19;
			break;
		
		case 21:
			return 20;
			break;
		
		case 22:
			return 21;
			break;
		
		case 23:
			return 22;
			break;
		
		case 24:
			return 23;
			break;
		
		case 25:
			return 24;
			break;
		
		case 26:
			return 25;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 2;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 4;
			break;
		
		case 32:
			return 5;
			break;
		
		case 33:
			return 6;
			break;
		
		case 34:
			return 7;
			break;
		
		case 35:
			return 8;
			break;
		
		case 36:
			return 9;
			break;
		
		case 37:
			return 10;
			break;
		
		case 38:
			return 11;
			break;
		
		case 39:
			return 12;
			break;
		
		case 40:
			return 13;
			break;
		
		case 41:
			return 14;
			break;
		
		case 42:
			return 15;
			break;
		
		case 43:
			return 16;
			break;
		
		case 44:
			return 17;
			break;
		
		case 45:
			return 18;
			break;
		
		case 46:
			return 19;
			break;
		
		case 47:
			return 0;
			break;
		
		case 48:
			return 1;
			break;
		
		case 49:
			return 2;
			break;
		
		case 50:
			return 3;
			break;
		
		case 51:
			return 4;
			break;
		
		case 52:
			return 0;
			break;
		
		case 53:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 2;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 4;
			break;
		
		case 58:
			return 5;
			break;
		
		case 59:
			return 6;
			break;
		
		case 60:
			return 7;
			break;
		
		case 61:
			return 8;
			break;
		
		case 62:
			return 0;
			break;
		
		case 63:
			return 1;
			break;
		
		case 64:
			return 0;
			break;
		
		case 65:
			return 1;
			break;
		
		case 66:
			return 2;
			break;
		
		case 67:
			return 0;
			break;
	}
	return 0;
}

var func_36(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0xC0120BBCC298EA2F(iParam0, 8);
	iVar1 = unk_0xC0120BBCC298EA2F(iParam0, 11);
	iVar2 = unk_0xC0120BBCC298EA2F(iParam0, 4);
	bVar3 = unk_0xC0120BBCC298EA2F(iParam0, 9) != false;
	iVar4 = unk_0x94B8A32AA940A6B5(iParam0, 8, iVar0, unk_0xD6AED6BFCC58AF7F(iParam0, 8));
	iVar5 = unk_0x94B8A32AA940A6B5(iParam0, 11, iVar1, unk_0xD6AED6BFCC58AF7F(iParam0, 11));
	iVar6 = unk_0x94B8A32AA940A6B5(iParam0, 4, iVar2, unk_0xD6AED6BFCC58AF7F(iParam0, 4));
	if (((((((bVar3 != Global_78530 || iParam1 != Global_78531) || iVar4 != Global_78532) || iVar5 != Global_78533) || iVar6 != Global_78534) || iVar0 != Global_78535) || iVar1 != Global_78536) || iVar2 != Global_78537)
	{
		Global_78530 = bVar3;
		Global_78531 = iParam1;
		Global_78532 = iVar4;
		Global_78533 = iVar5;
		Global_78534 = iVar6;
		Global_78535 = iVar0;
		Global_78536 = iVar1;
		Global_78537 = iVar2;
		Global_78538 = func_37(iParam0, iParam1);
	}
	return Global_78538;
}

int func_37(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = unk_0xC0120BBCC298EA2F(iParam0, 11);
	if (unk_0xC0120BBCC298EA2F(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x4B423FAA24E8ABF0(iParam0);
	iVar3 = unk_0x94B8A32AA940A6B5(iParam0, 8, unk_0xC0120BBCC298EA2F(iParam0, 8), unk_0xD6AED6BFCC58AF7F(iParam0, 8));
	if (unk_0x304A39EB177D246B(iVar3, joaat("over_jacket"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_2"), 8) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_1"), 8))
			{
				return func_41(iParam0, iParam1, 1);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_3"), 8) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_0"), 8))
			{
				return func_41(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_4"), 8))
			{
				return func_41(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_5"), 8))
			{
				return func_41(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_6"), 8))
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_2"), 8))
			{
				return func_41(iParam0, iParam1, 6);
			}
			if ((unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_3"), 8) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_0"), 8)) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_1"), 8))
			{
				return func_41(iParam0, iParam1, 7);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_4"), 8))
			{
				return func_41(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_5"), 8))
			{
				return func_41(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_6"), 8))
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		return func_41(iParam0, iParam1, 9);
	}
	if (func_40(iParam0))
	{
		if (bVar1)
		{
			return func_41(iParam0, iParam1, 7);
		}
		else
		{
			return func_41(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = unk_0x94B8A32AA940A6B5(iParam0, 11, iVar0, unk_0xD6AED6BFCC58AF7F(iParam0, 11));
		if (unk_0x304A39EB177D246B(iVar4, 98087521, 0))
		{
			return func_41(iParam0, iParam1, 0);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -135391604, 0))
		{
			return func_41(iParam0, iParam1, 1);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 1398721900, 0))
		{
			return func_41(iParam0, iParam1, 2);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 1030529416, 0))
		{
			return func_41(iParam0, iParam1, 3);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 873008833, 0))
		{
			return func_41(iParam0, iParam1, 4);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1646534043, 0))
		{
			return func_41(iParam0, iParam1, 5);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1868675094, 0))
		{
			return func_41(iParam0, iParam1, 6);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1500122155, 0))
		{
			return func_41(iParam0, iParam1, 7);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1741007074, 0))
		{
			return func_41(iParam0, iParam1, 8);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -226291902, 0))
		{
			return func_41(iParam0, iParam1, 9);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 607416996, 0))
		{
			return func_41(iParam0, iParam1, 10);
		}
		if (unk_0x304A39EB177D246B(iVar4, joaat("hipster_dress"), 0))
		{
			if (bVar1)
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, -405912369, 0))
		{
			return func_41(iParam0, iParam1, 1);
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("dress"), 0))
		{
			if (bVar1)
			{
				return func_41(iParam0, iParam1, 5);
			}
			else
			{
				return func_41(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("pilot_suit"), 0))
		{
			return func_41(iParam0, iParam1, 8);
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("combat_gear"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 7);
				}
				else
				{
					return func_41(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("hooded_jacket"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 7);
				}
				else
				{
					return func_41(iParam0, iParam1, 1);
				}
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_5"), 0))
			{
				return func_41(iParam0, iParam1, 10);
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_32"), 0))
			{
				return func_41(iParam0, iParam1, 10);
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_33"), 0))
			{
				return func_41(iParam0, iParam1, 10);
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_30"), 0))
			{
				return func_41(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("LUXE_COAT"), 0) && !unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_3"), 0))
		{
			iVar5 = func_39(iVar4, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return func_41(iParam0, iParam1, 1);
						break;
					
					case 2:
						return func_41(iParam0, iParam1, 8);
						break;
					
					default:
						iVar0 = func_134(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return func_41(iParam0, iParam1, 6);
						break;
					
					default:
						iVar0 = func_134(iVar4);
						break;
					}
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe_bomb"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_4"), 0))
			{
				return func_41(iParam0, iParam1, 2);
			}
			else
			{
				return func_41(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("heist_gear"), 0))
		{
			iVar6 = func_38(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return func_41(iParam0, iParam1, 7);
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_41(iParam0, iParam1, 7);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_41(iParam0, iParam1, 7);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_41(iParam0, iParam1, 7);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_41(iParam0, iParam1, 7);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_41(iParam0, iParam1, 9);
					}
					else
					{
						return func_41(iParam0, iParam1, 7);
					}
					break;
				
				case 13:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_41(iParam0, iParam1, 9);
					}
					else
					{
						return func_41(iParam0, iParam1, 9);
					}
					break;
				
				case 14:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_41(iParam0, iParam1, 9);
					}
					break;
				
				default:
					iVar0 = func_134(iVar4);
					break;
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("xmas2_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 7);
				}
				else
				{
					return func_41(iParam0, iParam1, 2);
				}
			}
			else if (bVar1)
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 1);
			}
			else
			{
				return func_41(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 1);
			}
			else if (bVar1)
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 2);
			}
			else
			{
				return func_41(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 2);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 1);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 8);
			}
			else
			{
				return func_41(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("LOW_DRAW_7"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("jan_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 2);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("LOW_DRAW_8"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("jan_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x304A39EB177D246B(iVar4, joaat("air_draw_3"), 0))
				{
					return func_41(iParam0, iParam1, 10);
				}
				else
				{
					return func_41(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 1);
			}
		}
		else if ((unk_0x304A39EB177D246B(iVar4, -1086258388, 0) || unk_0x304A39EB177D246B(iVar4, joaat("luxe_sweat"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_sweat"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 7);
				}
				else
				{
					return func_41(iParam0, iParam1, 5);
				}
			}
			else if (bVar1)
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 8);
			}
			else if (bVar1)
			{
				return func_41(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 7);
				}
				else
				{
					return func_41(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 6);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 7);
				}
				else
				{
					return func_41(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 2);
			}
			else
			{
				return func_41(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 2);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 9);
				}
				else
				{
					return func_41(iParam0, iParam1, 1);
				}
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 7);
				}
				else
				{
					return func_41(iParam0, iParam1, 5);
				}
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 7);
				}
				else
				{
					return func_41(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 7);
				}
				else
				{
					return func_41(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 7);
				}
				else
				{
					return func_41(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 7);
				}
				else
				{
					return func_41(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_41(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 7);
				}
				else
				{
					return func_41(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_41(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 7);
				}
				else
				{
					return func_41(iParam0, iParam1, 6);
				}
			}
			else
			{
				return func_41(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 7);
				}
				else
				{
					return func_41(iParam0, iParam1, 2);
				}
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_41(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 7);
				}
				else
				{
					return func_41(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 7);
				}
				else
				{
					return func_41(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_0"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("air_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 9);
			}
			else if (bVar1)
			{
				return func_41(iParam0, iParam1, 10);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 2);
			}
			else
			{
				return func_41(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 2);
			}
			else
			{
				return func_41(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 2);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 2);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_41(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 10);
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 10);
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 10);
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("smug_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("air_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 10);
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 10);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 10);
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("assault_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 0);
			}
			else
			{
				return func_41(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_41(iParam0, iParam1, 10);
				}
				else
				{
					return func_41(iParam0, iParam1, 10);
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 1);
			}
			else
			{
				return func_41(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 10);
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 10);
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 10);
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 3);
			}
			else
			{
				return func_41(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 10);
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 1);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 10);
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 9);
			}
			else
			{
				return func_41(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 10);
			}
			else
			{
				return func_41(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("vest_shirt"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("tails_jacket"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_41(iParam0, iParam1, 7);
			}
			else
			{
				return func_41(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("smoking_jacket"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_41(iParam0, iParam1, 2);
			}
			else
			{
				return func_41(iParam0, iParam1, 7);
			}
		}
		else if ((unk_0x304A39EB177D246B(iVar4, joaat("silk_pyjamas"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar4, -826135203, 0))
		{
			return func_41(iParam0, iParam1, 6);
		}
		else
		{
			iVar7 = iVar0;
			iVar0 = func_134(iVar4);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 1);
				}
				else
				{
					return func_41(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 1);
				}
				else
				{
					return func_41(iParam0, iParam1, 0);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 6);
				}
				else
				{
					return func_41(iParam0, iParam1, 6);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 2);
				}
				else
				{
					return func_41(iParam0, iParam1, 2);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 2);
				}
				else
				{
					return func_41(iParam0, iParam1, 2);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 1);
				}
				else
				{
					return func_41(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 1);
				}
				else
				{
					return func_41(iParam0, iParam1, 1);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 2);
				}
				else
				{
					return func_41(iParam0, iParam1, 2);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 7);
				}
				else
				{
					return func_41(iParam0, iParam1, 0);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 1);
				}
				else
				{
					return func_41(iParam0, iParam1, 0);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 2);
				}
				else
				{
					return func_41(iParam0, iParam1, 2);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 7);
				}
				else
				{
					return func_41(iParam0, iParam1, 1);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 1);
				}
				else
				{
					return func_41(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 6);
				}
				else
				{
					return func_41(iParam0, iParam1, 1);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 5);
				}
				else
				{
					return func_41(iParam0, iParam1, 5);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 1);
				}
				else
				{
					return func_41(iParam0, iParam1, 4);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 1);
				}
				else
				{
					return func_41(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 6);
				}
				else
				{
					return func_41(iParam0, iParam1, 6);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 3);
				}
				else
				{
					return func_41(iParam0, iParam1, 2);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 5);
				}
				else
				{
					return func_41(iParam0, iParam1, 4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 1);
				}
				else
				{
					return func_41(iParam0, iParam1, 0);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 1);
				}
				else
				{
					return func_41(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 6);
				}
				else
				{
					return func_41(iParam0, iParam1, 6);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 6);
				}
				else
				{
					return func_41(iParam0, iParam1, 6);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 6);
				}
				else
				{
					return func_41(iParam0, iParam1, 6);
				}
				break;
			
			case 9:
				return func_41(iParam0, iParam1, 1);
				break;
			
			case 10:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 6);
				}
				else
				{
					return func_41(iParam0, iParam1, 6);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 1);
				}
				else
				{
					return func_41(iParam0, iParam1, 0);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 1);
				}
				else
				{
					return func_41(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 1);
				}
				else
				{
					return func_41(iParam0, iParam1, 0);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 7);
				}
				else
				{
					return func_41(iParam0, iParam1, 3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_41(iParam0, iParam1, 1);
				}
				else
				{
					return func_41(iParam0, iParam1, 0);
				}
				break;
			}
	}
	return func_41(iParam0, iParam1, 0);
	return 0;
}

int func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_39(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x304A39EB177D246B(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x304A39EB177D246B(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_40(int iParam0)
{
	if (unk_0xCA362C769B0F4F0E(iParam0, 4, joaat("dungarees")))
	{
		return 1;
	}
	return 0;
}

int func_41(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 2;
					break;
				
				case 2:
					return 3;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 6;
					break;
				
				case 6:
					return 7;
					break;
				
				case 7:
					return 8;
					break;
				
				case 8:
					return 19;
					break;
				
				case 9:
					return 48;
					break;
				
				case 10:
					return 62;
					break;
			}
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			switch (iParam2)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 11;
					break;
				
				case 2:
					return 12;
					break;
				
				case 3:
					return 13;
					break;
				
				case 4:
					return 14;
					break;
				
				case 5:
					return 15;
					break;
				
				case 6:
					return 16;
					break;
				
				case 7:
					return 17;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 49;
					break;
				
				case 10:
					return 64;
					break;
			}
			break;
		
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			switch (iParam2)
			{
				case 0:
					return 21;
					break;
				
				case 1:
					return 22;
					break;
				
				case 2:
					return 23;
					break;
				
				case 3:
					return 24;
					break;
				
				case 4:
					return 25;
					break;
				
				case 5:
					return 26;
					break;
				
				case 6:
					return 27;
					break;
				
				case 7:
					return 28;
					break;
				
				case 8:
					return 29;
					break;
				
				case 9:
					return 50;
					break;
				
				case 10:
					return 65;
					break;
			}
			break;
		
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
			switch (iParam2)
			{
				case 0:
					return 31;
					break;
				
				case 1:
					return 32;
					break;
				
				case 2:
					return 33;
					break;
				
				case 3:
					return 34;
					break;
				
				case 4:
					return 35;
					break;
				
				case 5:
					return 36;
					break;
				
				case 6:
					return 37;
					break;
				
				case 7:
					return 38;
					break;
				
				case 8:
					return 39;
					break;
				
				case 9:
					return 51;
					break;
				
				case 10:
					return 66;
					break;
			}
			break;
		
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
			switch (iParam2)
			{
				case 0:
					return 52;
					break;
				
				case 1:
					return 53;
					break;
				
				case 2:
					return 54;
					break;
				
				case 3:
					return 55;
					break;
				
				case 4:
					return 56;
					break;
				
				case 5:
					return 57;
					break;
				
				case 6:
					return 58;
					break;
				
				case 7:
					return 59;
					break;
				
				case 8:
					return 60;
					break;
				
				case 9:
					return 61;
					break;
				
				case 10:
					return 69;
					break;
			}
			break;
		
		case 62:
		case 63:
			switch (iParam2)
			{
				case 0:
					return 70;
					break;
				
				case 1:
					return 71;
					break;
				
				case 2:
					return 72;
					break;
				
				case 3:
					return 73;
					break;
				
				case 4:
					return 74;
					break;
				
				case 5:
					return 75;
					break;
				
				case 6:
					return 76;
					break;
				
				case 7:
					return 77;
					break;
				
				case 8:
					return 78;
					break;
				
				case 9:
					return 79;
					break;
				
				case 10:
					return 80;
					break;
			}
			break;
		
		case 64:
		case 65:
		case 66:
			switch (iParam2)
			{
				case 0:
					return 89;
					break;
				
				case 1:
					return 90;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 92;
					break;
				
				case 4:
					return 93;
					break;
				
				case 5:
					return 94;
					break;
				
				case 6:
					return 95;
					break;
				
				case 7:
					return 96;
					break;
				
				case 8:
					return 97;
					break;
				
				case 9:
					return 98;
					break;
				
				case 10:
					return 99;
					break;
			}
			break;
		
		case 67:
			switch (iParam2)
			{
				case 0:
					return 100;
					break;
				
				case 1:
					return 101;
					break;
				
				case 2:
					return 102;
					break;
				
				case 3:
					return 103;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 105;
					break;
				
				case 6:
					return 106;
					break;
				
				case 7:
					return 107;
					break;
				
				case 8:
					return 108;
					break;
				
				case 9:
					return 109;
					break;
				
				case 10:
					return 110;
					break;
			}
			break;
	}
	return 0;
}

int func_42(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	struct<5> Var17;
	var uVar18;
	
	if (unk_0x4FAFF4BCB7633475(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	Global_78341[1 /*14*/] = { func_184(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78341[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_174(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_42(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { func_170(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_42(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78341[2 /*14*/] = { func_184(iVar0, 14, iVar6, -1) };
									if (Global_78341[2 /*14*/].f_12 == iVar5)
									{
										if (func_42(iParam0, 14, iVar6))
										{
											if (!func_43(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78341[2 /*14*/])))
											{
												Global_2883588 = uVar2;
												Global_2883589 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_145(iParam0, iVar4);
						Global_78341[2 /*14*/] = { func_184(iVar0, iVar4, iVar1, -1) };
						if (!func_43(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78341[2 /*14*/])))
						{
							Global_2883588 = uVar2;
							Global_2883589 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != joaat("0")) && uVar8.f_16)
		{
			if (func_129(1759, Global_78338, 0) != uVar8[10])
			{
				Global_2883588 = uVar2;
				Global_2883589 = uVar3;
				return 0;
			}
		}
		Global_2883588 = uVar2;
		Global_2883589 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { func_170(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_42(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xB204F40D393426B6(iParam0, Global_78341[1 /*14*/].f_12, 1) == Global_78341[1 /*14*/].f_3 && (unk_0x0DC23FA727759F9F(iParam0, Global_78341[1 /*14*/].f_12) == Global_78341[1 /*14*/].f_4 || Global_78341[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_78341[1 /*14*/].f_12 == 0 && BitTest(Global_78341[1 /*14*/].f_6, 6)) && unk_0x304A39EB177D246B(Global_2883588, joaat("helmet"), 1)) && unk_0xCD6EB4A3CCA20602(Global_2883588) > 0)
		{
			iVar16 = unk_0xCD6EB4A3CCA20602(Global_2883588);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				unk_0x5C6B8DD2E15C6B3C(Global_2883588, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != joaat("0"))
				{
					unk_0x7A491C9A90975007(&Var17);
					unk_0x09A485A642AEADEF(iVar13, &Var17);
					if (Var17.f_3 == unk_0xB204F40D393426B6(iParam0, Global_78341[1 /*14*/].f_12, 1) && Var17.f_4 == unk_0x0DC23FA727759F9F(iParam0, Global_78341[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		if (Global_78341[1 /*14*/].f_3 == unk_0xC0120BBCC298EA2F(iParam0, func_173(iParam1)) && Global_78341[1 /*14*/].f_4 == unk_0xD6AED6BFCC58AF7F(iParam0, func_173(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78340++;
			if (Global_78340 == 1)
			{
				if (func_31(iVar0, 11, func_145(iParam0, 11), -1))
				{
					if (func_29(iVar0, 4, iParam2, &uVar18))
					{
						return func_42(iParam0, 4, uVar18);
					}
				}
				else if (func_28(iVar0, 4, iParam2, &uVar18))
				{
					return func_42(iParam0, 4, uVar18);
				}
			}
			Global_78340 = (Global_78340 - 1);
		}
	}
	return 0;
}

int func_43(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_170(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (func_47(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_46(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_45(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_44(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_46(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_45(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
						}
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_44(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_46(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_45(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_44(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_44(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_144(iParam0, iParam2, 14, 3);
						}
						return (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 1) || unk_0x304A39EB177D246B(func_144(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_144(iParam0, iParam2, 1, 3);
						}
						return (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 0) || unk_0x304A39EB177D246B(func_144(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_144(iParam0, iParam2, 14, 4);
						}
						return (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 1) || unk_0x304A39EB177D246B(func_144(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_144(iParam0, iParam2, 1, 4);
						}
						return (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 0) || unk_0x304A39EB177D246B(func_144(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_45(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_144(iParam0, iParam2, 1, 3);
					}
					if (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 0) || unk_0x304A39EB177D246B(iParam3, joaat("hair_shrink"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_144(iParam0, iParam2, 1, 4);
					}
					if (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 0) || unk_0x304A39EB177D246B(iParam3, joaat("hair_shrink"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_46(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_144(iParam0, iParam2, 14, 3);
					}
					return unk_0x304A39EB177D246B(iParam3, joaat("glasses"), 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_144(iParam0, iParam2, 14, 4);
					}
					return unk_0x304A39EB177D246B(iParam3, joaat("glasses"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (func_40(iParam0))
	{
		return -99;
	}
	if (func_49(iParam0))
	{
		return -99;
	}
	if (iParam2 == 11)
	{
		if (iParam1 == joaat("mp_m_freemode_01"))
		{
			if (((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 188 && iParam3 <= 203))
			{
				return 1;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 108 && iParam3 <= 123))
			{
				return 11;
			}
			else if (iParam3 >= 96 && iParam3 <= 107)
			{
				return 41;
			}
			else if (iParam3 >= 156 && iParam3 <= 171)
			{
				return 36;
			}
			else if (iParam3 >= 172 && iParam3 <= 187)
			{
				return 31;
			}
			else if (iParam3 >= 204 && iParam3 <= 219)
			{
				return 16;
			}
			else if ((iParam3 >= 220 && iParam3 <= 235) || (iParam3 >= 124 && iParam3 <= 139))
			{
				return 26;
			}
			else if (iParam3 == 236)
			{
				return 21;
			}
			else if (iParam3 >= 237)
			{
				iVar0 = func_144(iParam1, iParam3, 11, 3);
				if (iVar0 != -1)
				{
					iVar1 = unk_0x5A3F0A3B7ECCBD32(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						unk_0x0249B53AB91BF9D0(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != joaat("0"))
							{
								return func_22(iParam1, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
			}
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			if ((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255))
			{
				return 1;
			}
			else if (((iParam3 >= 16 && iParam3 <= 31) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 128 && iParam3 <= 143))
			{
				return 16;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (iParam3 >= 48 && iParam3 <= 63)
			{
				return 11;
			}
			else if ((iParam3 >= 96 && iParam3 <= 111) || (iParam3 >= 160 && iParam3 <= 175))
			{
				return 21;
			}
			else if (iParam3 >= 224 && iParam3 <= 239)
			{
				return 26;
			}
			else if (iParam3 >= 144 && iParam3 <= 159)
			{
				return 0;
			}
			else if (iParam3 >= 80 && iParam3 <= 95)
			{
				return 31;
			}
			else if (iParam3 >= 256)
			{
				iVar6 = func_144(iParam1, iParam3, 11, 4);
				if (iVar6 != -1)
				{
					iVar7 = unk_0x5A3F0A3B7ECCBD32(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						unk_0x0249B53AB91BF9D0(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != joaat("0"))
							{
								return func_22(iParam1, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

int func_49(int iParam0)
{
	if (unk_0xCA362C769B0F4F0E(iParam0, 8, joaat("x17_draw_6")))
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0)
{
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0xC0120BBCC298EA2F(iParam0, 9) != 0 && !unk_0xCA362C769B0F4F0E(iParam0, 9, -138631194))
		{
			return 1;
		}
	}
	return 0;
}

void func_51(int iParam0, int iParam1)
{
	struct<10> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	
	if (!unk_0x4CEC77F224BCD884(iParam0))
	{
	}
	if (func_65())
	{
		return;
	}
	unk_0x5CB7287FD7611BC7(iParam0, &Var0);
	iVar1 = func_129(2097, iParam1, 0);
	iVar2 = func_129(2098, iParam1, 0);
	iVar3 = func_129(2099, iParam1, 0);
	iVar4 = func_129(2100, iParam1, 0);
	iVar5 = func_129(2101, iParam1, 0);
	iVar6 = func_129(2102, iParam1, 0);
	fVar7 = func_66(134, iParam1);
	fVar8 = func_66(135, iParam1);
	fVar9 = func_66(136, iParam1);
	bVar10 = func_16(160, iParam1);
	if (((((((((Var0.f_0 != iVar1 || Var0.f_1 != iVar2) || Var0.f_2 != iVar3) || Var0.f_3 != iVar4) || Var0.f_4 != iVar5) || Var0.f_5 != iVar6) || Var0.f_6 != fVar7) || Var0.f_7 != fVar8) || Var0.f_8 != fVar9) || Var0.f_9 != bVar10)
	{
		unk_0x0A5987DCA39E8BE5(iParam0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, fVar7, fVar8, fVar9, bVar10);
		iVar11 = func_129(2103, iParam1, 0);
		if (iVar11 > 0)
		{
			func_52(iParam0, iParam1, 0);
		}
	}
}

void func_52(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_64(iVar1);
		if (!bParam2)
		{
			fVar3 = func_66(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_63(iVar2, iParam1);
		}
		unk_0xAAF9B08B469F707F(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_62(iVar4);
		iVar6 = func_61(iVar5);
		iVar7 = func_60(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!bParam2)
			{
				uVar10 = func_59(iVar6, iParam1);
				uVar11 = func_66(iVar7, iParam1);
			}
			else
			{
				uVar10 = func_58(iVar6, iParam1);
				uVar11 = func_63(iVar7, iParam1);
			}
			unk_0xE5B6C9B29510B84E(iParam0, iVar5, uVar10, uVar11);
			iVar8 = func_57(iVar5);
			iVar9 = func_56(iVar5);
			if (iVar8 != -1)
			{
				if (!bParam2)
				{
					iVar13 = func_129(iVar8, iParam1, 0);
					iVar14 = func_129(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_55(iVar8, iParam1);
					iVar14 = func_55(iVar9, iParam1);
				}
				func_54(iVar13, &uVar12, &uVar15);
				unk_0x94965BB62753D4D6(iParam0, iVar5, uVar15, uVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_53(&iParam0, iParam1, bParam2);
}

void func_53(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	
	if (!bParam2)
	{
		fVar0 = func_66(157, iParam1);
	}
	else
	{
		fVar0 = func_63(157, iParam1);
	}
	if (*iParam0 == unk_0x4A8C381C258A124D())
	{
	}
	unk_0x348FF3E632DCB635(*iParam0, round(fVar0));
}

void func_54(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	*uParam1 = shift_right(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_55(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2805029[iParam0 /*3*/][func_14(iParam1)];
	if (unk_0x074484B0C0972EF8(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2161;
		
		case 1:
			return 2162;
		
		case 5:
			return 2163;
		
		case 8:
			return 2164;
		
		case 10:
			return 2159;
		
		default:
	}
	return -1;
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2154;
		
		case 1:
			return 2155;
		
		case 5:
			return 2156;
		
		case 8:
			return 2157;
		
		case 10:
			return 2158;
		
		default:
	}
	return -1;
}

int func_58(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_15();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar1 = unk_0xC80B42F8AEC90782((iParam0 - 384), 0, 1, iParam1);
		iVar2 = ((iParam0 - 384) - unk_0xC24FF3ECDBA75CAC((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar1 = unk_0xC80B42F8AEC90782((iParam0 - 457), 1, 1, iParam1);
		iVar2 = ((iParam0 - 457) - unk_0xC24FF3ECDBA75CAC((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar1 = unk_0xC80B42F8AEC90782((iParam0 - 1281), 0, 0, 0);
		iVar2 = ((iParam0 - 1281) - unk_0xC24FF3ECDBA75CAC((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar1 = unk_0xC80B42F8AEC90782((iParam0 - 1305), 1, 0, 0);
		iVar2 = ((iParam0 - 1305) - unk_0xC24FF3ECDBA75CAC((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar1 = unk_0x443206C9783C69F1((iParam0 - 1393), 0, 1, iParam1);
		iVar2 = ((iParam0 - 1393) - unk_0xC24FF3ECDBA75CAC((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar1 = unk_0x443206C9783C69F1((iParam0 - 1361), 0, 0, 0);
		iVar2 = ((iParam0 - 1361) - unk_0xC24FF3ECDBA75CAC((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = ((iParam0 - 3879) - unk_0xC24FF3ECDBA75CAC((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 4143), 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = ((iParam0 - 4143) - unk_0xC24FF3ECDBA75CAC((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 4399), 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = ((iParam0 - 4399) - unk_0xC24FF3ECDBA75CAC((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 6413), 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = ((iParam0 - 6413) - unk_0xC24FF3ECDBA75CAC((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 7262), 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = ((iParam0 - 7262) - unk_0xC24FF3ECDBA75CAC((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 7681), 0, 1, iParam1, "_MP_BIKEPSTAT_INT");
		iVar2 = ((iParam0 - 7681) - unk_0xC24FF3ECDBA75CAC((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 9553), 0, 1, iParam1, "_MP_IMPEXPPSTAT_INT");
		iVar2 = ((iParam0 - 9553) - unk_0xC24FF3ECDBA75CAC((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 15265), 0, 1, iParam1, "_MP_GUNRPSTAT_INT");
		iVar2 = ((iParam0 - 15265) - unk_0xC24FF3ECDBA75CAC((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7641) - unk_0xC24FF3ECDBA75CAC((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 7313), 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7313) - unk_0xC24FF3ECDBA75CAC((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
		iVar2 = ((iParam0 - 16010) - unk_0xC24FF3ECDBA75CAC((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
		iVar2 = ((iParam0 - 18162) - unk_0xC24FF3ECDBA75CAC((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
		iVar2 = ((iParam0 - 19018) - unk_0xC24FF3ECDBA75CAC((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
		iVar2 = ((iParam0 - 22194) - unk_0xC24FF3ECDBA75CAC((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
		iVar2 = ((iParam0 - 25538) - unk_0xC24FF3ECDBA75CAC((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
		iVar2 = ((iParam0 - 27258) - unk_0xC24FF3ECDBA75CAC((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
		iVar2 = ((iParam0 - 28483) - unk_0xC24FF3ECDBA75CAC((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
		iVar2 = ((iParam0 - 30483) - unk_0xC24FF3ECDBA75CAC((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 30707), 0, 1, iParam1, "_TUNERPSTAT_INT");
		iVar2 = ((iParam0 - 30707) - unk_0xC24FF3ECDBA75CAC((iParam0 - 30707)) * 8) * 8;
	}
	else if (iParam0 >= 32475 && iParam0 < 34123)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 32475), 0, 1, iParam1, "_FIXERPSTAT_INT");
		iVar2 = ((iParam0 - 32475) - unk_0xC24FF3ECDBA75CAC((iParam0 - 32475)) * 8) * 8;
	}
	if (!unk_0x77B8D5FD0CF3258F(iVar1, &iVar0, iVar2, 8))
	{
		iVar0 = 0;
	}
	if (iParam0 == 384)
	{
	}
	return iVar0;
}

var func_59(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_15();
	}
	return unk_0x03CFFD51CE515454(iParam0, iParam1);
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 90;
		
		case 7:
			return 93;
		
		case 0:
			return 87;
		
		case 6:
			return 92;
		
		case 2:
			return 89;
		
		case 1:
			return 88;
		
		case 4:
			return 91;
		
		case 8:
			return 158;
		
		case 9:
			return 159;
		
		case 5:
			return 160;
		
		case 10:
			return 163;
		
		case 11:
			return 161;
		
		case 12:
			return 162;
		
		default:
	}
	return -1;
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 450;
		
		case 7:
			return 453;
		
		case 0:
			return 447;
		
		case 6:
			return 452;
		
		case 2:
			return 449;
		
		case 1:
			return 448;
		
		case 4:
			return 451;
		
		case 8:
			return 3940;
		
		case 9:
			return 3941;
		
		case 5:
			return 3942;
		
		case 10:
			return 3943;
		
		case 11:
			return 3944;
		
		case 12:
			return 3945;
		
		default:
	}
	return -1;
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 3;
		
		case 2:
			return 9;
		
		case 3:
			return 6;
		
		case 4:
			return 0;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 7:
			return 2;
		
		case 8:
			return 1;
		
		case 9:
			return 8;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		default:
	}
	return -1;
}

float func_63(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2847606[iParam0 /*3*/][func_14(iParam1)];
	if (unk_0xE1A5C172B921BBD6(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 137;
		
		case 1:
			return 138;
		
		case 2:
			return 139;
		
		case 3:
			return 140;
		
		case 4:
			return 141;
		
		case 5:
			return 142;
		
		case 6:
			return 143;
		
		case 7:
			return 144;
		
		case 8:
			return 145;
		
		case 9:
			return 146;
		
		case 10:
			return 147;
		
		case 11:
			return 148;
		
		case 12:
			return 149;
		
		case 13:
			return 150;
		
		case 14:
			return 151;
		
		case 15:
			return 152;
		
		case 16:
			return 153;
		
		case 17:
			return 154;
		
		case 18:
			return 155;
		
		case 19:
			return 156;
		
		default:
	}
	return -1;
}

int func_65()
{
	if (unk_0xF40767E41852FB72(Global_2639783.f_60) && !Global_2639783.f_59 == 0)
	{
		return 1;
	}
	return 0;
}

float func_66(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2847606[iParam0 /*3*/][func_14(iParam1)];
	if (unk_0x2F0966A034F5ADC6(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_67(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<7> Var21;
	int iVar22;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar1 = -1;
		iVar2 = -1;
		if (Global_4539502 == iParam1)
		{
			iVar2 = Global_4539501;
			iVar1 = Global_4539500;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = func_144(iParam0, iParam1, 7, 3);
			iVar1 = func_134(iVar2);
			Global_4539502 = iParam1;
			Global_4539501 = iVar2;
			Global_4539500 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_4539505 == iParam3)
		{
			iVar4 = Global_4539504;
			iVar3 = Global_4539503;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = func_144(iParam0, iParam3, 11, 3);
			iVar3 = func_134(iVar4);
			Global_4539505 = iParam3;
			Global_4539504 = iVar4;
			Global_4539503 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_4539508 == iParam4)
		{
			iVar6 = Global_4539507;
			iVar5 = Global_4539506;
		}
		else if (iParam4 >= 241)
		{
			iVar6 = func_144(iParam0, iParam4, 8, 3);
			iVar5 = func_134(iVar6);
			Global_4539508 = iParam4;
			Global_4539507 = iVar6;
			Global_4539506 = iVar5;
		}
		iVar7 = -1;
		iVar8 = -1;
		if (Global_4539511 == iParam10)
		{
			iVar8 = Global_4539510;
			iVar7 = Global_4539509;
		}
		else if (iParam10 >= 26)
		{
			iVar8 = func_144(iParam0, iParam10, 1, 3);
			iVar7 = func_134(iVar8);
			Global_4539511 = iParam10;
			Global_4539510 = iVar8;
			Global_4539509 = iVar7;
		}
		if (iParam3 != -99)
		{
			if ((unk_0x304A39EB177D246B(iVar4, joaat("morph_suit"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("scuba_gear"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("gorka_suit"), 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar8, joaat("headscarf"), 0) && !unk_0x304A39EB177D246B(iVar8, joaat("smug_draw_6"), 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (unk_0x304A39EB177D246B(iVar2, joaat("hoop_necklace"), 0))
		{
			if (func_139(iParam0, iParam3, -1))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar4, joaat("pilot_suit"), 0))
			{
				if (iParam1 != 0 && !(iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("pilot_suit"), 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar2, joaat("epsilon_chain_alt"), 0))
			{
				if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_0"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x304A39EB177D246B(iVar2, joaat("epsilon_chain"), 0))
			{
				if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_0"), 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar2, joaat("epsilon_chain_alt"), 0))
			{
				if (iParam4 == 240)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar2, 91564168, 0))
			{
				if (unk_0x304A39EB177D246B(iVar4, 91564168, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar2, 91564168, 0))
			{
				if (unk_0x304A39EB177D246B(iVar6, 91564168, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar2, 1536943816, 0))
			{
				if (unk_0x304A39EB177D246B(iVar4, -589305886, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (unk_0x304A39EB177D246B(iVar2, -120244486, 0))
		{
			if (iParam9 != -99)
			{
				iVar9 = -1;
				if (iParam9 >= 327)
				{
					iVar9 = func_144(iParam0, iParam9, 14, 3);
				}
				if (((iParam9 >= 27 && iParam9 <= 34) || (iParam9 >= 75 && iParam9 <= 82)) || (iParam9 >= 107 && iParam9 <= 114))
				{
					return 0;
				}
				switch (iVar9)
				{
					case 1411612772:
					case 1399488226:
					case 1103092621:
					case 798340921:
					case 495850282:
					case -1972900644:
					case 2016102499:
					case 1719477511:
					case 288210625:
					case -882756821:
					case -1242625979:
					case -1358792084:
					case joaat("dlc_mp_exec_m_phead_1_0"):
					case joaat("dlc_mp_beach_m_head0_0"):
					case joaat("dlc_mp_beach_m_head0_1"):
					case joaat("dlc_mp_beach_m_head0_2"):
					case joaat("dlc_mp_beach_m_head0_3"):
					case joaat("dlc_mp_beach_m_head0_4"):
					case joaat("dlc_mp_beach_m_head0_5"):
					case joaat("dlc_mp_stunt_m_phead_10_0"):
					case joaat("dlc_mp_stunt_m_phead_10_1"):
					case joaat("dlc_mp_stunt_m_phead_10_2"):
					case joaat("dlc_mp_stunt_m_phead_10_3"):
					case joaat("dlc_mp_stunt_m_phead_10_4"):
					case joaat("dlc_mp_stunt_m_phead_10_5"):
					case joaat("dlc_mp_stunt_m_phead_10_6"):
					case joaat("dlc_mp_stunt_m_phead_10_7"):
					case joaat("dlc_mp_stunt_m_phead_10_8"):
					case joaat("dlc_mp_stunt_m_phead_10_9"):
					case joaat("dlc_mp_stunt_m_phead_10_10"):
					case joaat("dlc_mp_stunt_m_phead_10_11"):
					case joaat("dlc_mp_stunt_m_phead_10_12"):
					case joaat("dlc_mp_stunt_m_phead_10_13"):
					case joaat("dlc_mp_stunt_m_phead_10_14"):
					case joaat("dlc_mp_stunt_m_phead_10_15"):
					case joaat("dlc_mp_stunt_m_phead_10_16"):
					case joaat("dlc_mp_stunt_m_phead_10_17"):
					case joaat("dlc_mp_stunt_m_phead_10_18"):
					case joaat("dlc_mp_stunt_m_phead_10_19"):
					case joaat("dlc_mp_stunt_m_phead_10_20"):
					case joaat("dlc_mp_gr_m_phead_7_0"):
					case joaat("dlc_mp_gr_m_phead_7_1"):
					case joaat("dlc_mp_gr_m_phead_7_2"):
					case joaat("dlc_mp_gr_m_phead_7_3"):
					case joaat("dlc_mp_gr_m_phead_7_4"):
					case joaat("dlc_mp_gr_m_phead_7_5"):
					case joaat("dlc_mp_gr_m_phead_7_6"):
					case joaat("dlc_mp_gr_m_phead_7_7"):
					case joaat("dlc_mp_gr_m_phead_7_8"):
					case joaat("dlc_mp_gr_m_phead_7_9"):
					case joaat("dlc_mp_gr_m_phead_7_10"):
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (unk_0x304A39EB177D246B(iVar8, joaat("headscarf"), 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("scarf"), 0))
			{
				if (unk_0x304A39EB177D246B(iVar2, joaat("jacket_scarf"), 0))
				{
					if (((((((((((((((((((((((((((((((((((((((((unk_0x304A39EB177D246B(iVar4, joaat("block_scarfs"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("LOW_DRAW_7"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("LOW_DRAW_8"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar4, -826135203, 0)) || unk_0x304A39EB177D246B(iVar4, joaat("jan_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("jan_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_24"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_15"), 0)) || unk_0x304A39EB177D246B(iVar4, -102825006, 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_19"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_20"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("air_draw_0"), 0))
					{
						return 0;
					}
					else if (func_69(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (unk_0x304A39EB177D246B(iVar4, joaat("block_scarfs"), 0))
				{
					return 0;
				}
				else if (func_69(iParam0, iParam3))
				{
					return 0;
				}
				else if (unk_0x304A39EB177D246B(iVar2, -120244486, 0))
				{
					if (((((((((((((iParam3 >= 188 && iParam3 <= 203) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 12) || iVar3 == 14) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_10"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("air_draw_0"), 0))
					{
						return 0;
					}
				}
				if (iParam10 != -99)
				{
					if (unk_0x304A39EB177D246B(iVar8, joaat("headscarf"), 0))
					{
						return 0;
					}
				}
			}
			if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("luxe_scarf"), 0))
			{
				if (((unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_0"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_1"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("scarf"), 0)) || (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("big_chain"), 0)))
		{
			if (iParam11 != -99)
			{
				iVar10 = -1;
				if (iParam11 >= 256)
				{
					iVar10 = func_144(iParam0, iParam11, 4, 3);
				}
				if (unk_0x304A39EB177D246B(iVar10, joaat("dungarees"), 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("bead_necklace"), 0))
			{
				if (unk_0x304A39EB177D246B(iVar4, joaat("sweat_vest"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_20"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("chain"), 0))
		{
			if (iParam3 != -99)
			{
				if (unk_0x304A39EB177D246B(iVar2, joaat("big_chain"), 0))
				{
					if ((iParam3 >= 96 && iParam3 <= 107) || iVar3 == 6)
					{
						return 0;
					}
				}
				if (iParam3 == 236)
				{
					if (unk_0x304A39EB177D246B(iVar2, joaat("alt_chain"), 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || unk_0x304A39EB177D246B(iVar4, joaat("block_chains"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("tux_jacket"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("pilot_suit"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("combat_top"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("xmas2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, -1086258388, 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("scruffy_jacket"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_10"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_13"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_15"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_16"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("LOW_DRAW_7"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("silk_pyjamas"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar4, -826135203, 0)) || unk_0x304A39EB177D246B(iVar4, joaat("jan_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("jan_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_15"), 0)) || unk_0x304A39EB177D246B(iVar4, -102825006, 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_19"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_20"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_21"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("jacket_only"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("air_draw_0"), 0))
				{
					return 0;
				}
				else if (!unk_0x304A39EB177D246B(iVar2, joaat("alt_chain"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 12) || iVar5 == 13) || unk_0x304A39EB177D246B(iVar6, joaat("tux_vest"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("block_chains"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("stunt_draw_2"), 0))
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("big_chain"), 0))
		{
			if (iParam8 != -99)
			{
				return 0;
			}
		}
		if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("pilot_suit"), 0))
		{
			if (iParam9 >= 327 && unk_0x304A39EB177D246B(func_144(iParam0, iParam9, 14, 3), joaat("pilot_suit"), 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0x304A39EB177D246B(func_144(iParam0, iParam9, 14, 3), joaat("pilot_suit"), 1)) && iParam1 != 0)
		{
			return 0;
		}
		if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, -1119006951, 0))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((iParam3 >= 140 && iParam3 <= 155) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 9) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || unk_0x304A39EB177D246B(iVar4, joaat("luxe_bomb"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("LOW_BOMB"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("JAN_BOMB"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("pilot_suit"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("combat_top"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("LOW2_BOMB"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_20"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_25"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("air_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("smug_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("assault_draw_0"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 144 && iParam4 <= 159)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 176 && iParam4 <= 191)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 9) || iVar5 == 10) || iVar5 == 11) || iVar5 == 12) || iVar5 == 13) || unk_0x304A39EB177D246B(iVar6, joaat("ALLOW_TIES"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("vest_shirt"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("tux_vest"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("closed_collar"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("open_collar"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("tux_shirt"), 0))
				{
					return 0;
				}
			}
		}
		if ((iParam1 >= 1 && iParam1 <= 3) || iVar1 == 1)
		{
			if (iParam5 != -99)
			{
				if (iParam5 != 15)
				{
					return 0;
				}
			}
			if (iParam3 != -99)
			{
				if (iParam3 != 236)
				{
					return 0;
				}
			}
			if (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("outfit_checks"), 0))
			{
				return 0;
			}
		}
		else if ((iParam1 >= 4 && iParam1 <= 6) || iVar1 == 2)
		{
			if (iParam3 != -99)
			{
				if ((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((iParam4 >= 0 && iParam4 <= 15) || (iParam4 >= 16 && iParam4 <= 31)) || (iParam4 >= 32 && iParam4 <= 47)) || (iParam4 >= 80 && iParam4 <= 95)) || (iParam4 >= 128 && iParam4 <= 143)) || iParam4 == 240) || iVar5 == 0) || iVar5 == 1) || iVar5 == 2) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 10 && iParam1 <= 25) || iVar1 == 4)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 172 && iParam3 <= 187)) || (iParam3 >= 204 && iParam3 <= 219)) || iParam3 == 236) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8) || iVar3 == 9) || iVar3 == 11) || iVar3 == 13) || iVar3 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 32 && iParam1 <= 37) || iVar1 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((iParam3 >= 96 && iParam3 <= 107) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 6) || iVar3 == 10)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x304A39EB177D246B(iVar2, joaat("high_roller_tie"), 0))
		{
			if (iParam4 != -99)
			{
				if (unk_0x304A39EB177D246B(iVar6, joaat("high_roller_shirt"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (((((iParam1 >= 41 && iParam1 <= 56) || (iParam1 >= 73 && iParam1 <= 88)) || iVar1 == 10) || iVar1 == 12) || (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("tie"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((iParam3 >= 204 && iParam3 <= 219) || func_139(iParam0, iParam3, -1)) || iVar3 == 13)
				{
					if (((unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_4"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_21"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("sweat_vest"), 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((iParam4 >= 160 && iParam4 <= 175) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("ALLOW_TIES"), 0))) || (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("tux_shirt"), 0)))
				{
					if (unk_0x304A39EB177D246B(iVar6, joaat("high_roller_shirt"), 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = func_145(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_134(func_144(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((iParam4 >= 176 && iParam4 <= 191) || iVar5 == 11)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if ((iParam1 >= 57 && iParam1 <= 72) || iVar1 == 11)
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || func_139(iParam0, iParam3, -1)) || iVar3 == 13) || iVar3 == 11)
				{
					if ((unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_4"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("sweat_vest"), 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("ALLOW_TIES"), 0))) || (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("vest_shirt"), 0))) || (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("tux_vest"), 0))) || (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("tux_shirt"), 0))) || unk_0x304A39EB177D246B(iVar6, joaat("CUFFED_SHIRT"), 0)) || iVar6 == joaat("dlc_mp_val_m_accs0_0")) || iVar6 == joaat("dlc_mp_val_m_accs0_1")) || iVar6 == joaat("dlc_mp_val_m_accs0_2")) || iVar6 == joaat("dlc_mp_val_m_accs0_3")) || iVar6 == joaat("dlc_mp_val_m_accs0_4"))
				{
					if (unk_0x304A39EB177D246B(iVar6, joaat("high_roller_shirt"), 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = func_145(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_134(func_144(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!unk_0x304A39EB177D246B(iVar6, joaat("sweat_vest"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x304A39EB177D246B(iVar2, joaat("vest_tie"), 0))
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11) || iVar4 == -27166014) || iVar4 == -273228435) || iVar4 == -2118057713) || iVar4 == -1809078812) || iVar4 == -1522415600) || iVar4 == -1212584705) || iVar4 == -886664231) || iVar4 == -646500230) || iVar4 == -290891042) || iVar4 == 15400801) || iVar4 == -485413449) || iVar4 == -254359230) || unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_0"), 0)) || iVar4 == joaat("dlc_mp_busi_m_jbib4_0")) || iVar4 == joaat("dlc_mp_busi_m_jbib4_1")) || iVar4 == joaat("dlc_mp_busi_m_jbib4_2")) || iVar4 == joaat("dlc_mp_val_m_jbib0_0")) || iVar4 == joaat("dlc_mp_val_m_jbib0_1")) || iVar4 == joaat("dlc_mp_val_m_jbib0_2")) || iVar4 == joaat("dlc_mp_val_m_jbib0_3"))
				{
					if (!unk_0x304A39EB177D246B(iVar4, joaat("sweat_vest"), 0))
					{
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
			else if (iParam4 != -99)
			{
				if (((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || iVar5 == 4) || iVar5 == 6) || (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("vest_shirt"), 0))) || unk_0x304A39EB177D246B(iVar6, joaat("CUFFED_SHIRT"), 0)) || iVar6 == joaat("dlc_mp_val_m_accs0_0")) || iVar6 == joaat("dlc_mp_val_m_accs0_1")) || iVar6 == joaat("dlc_mp_val_m_accs0_2")) || iVar6 == joaat("dlc_mp_val_m_accs0_3")) || iVar6 == joaat("dlc_mp_val_m_accs0_4"))
				{
					if (unk_0x304A39EB177D246B(iVar6, joaat("high_roller_shirt"), 0))
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!unk_0x304A39EB177D246B(iVar6, joaat("sweat_vest"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x304A39EB177D246B(iVar2, joaat("tux_tie"), 0))
		{
			if (iParam3 != -99)
			{
				if (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("tux_jacket"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("tux_vest"), 0)) && unk_0x304A39EB177D246B(iVar2, joaat("tux_tie_alt"), 0)) || (((iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("tux_shirt"), 0)) && !unk_0x304A39EB177D246B(iVar2, joaat("tux_tie_alt"), 0)) && !unk_0x304A39EB177D246B(iVar6, joaat("high_roller_shirt"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x304A39EB177D246B(iVar2, joaat("loose_bowtie"), 0))
		{
			if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar6 == joaat("dlc_mp_val_m_accs0_0")) || iVar6 == joaat("dlc_mp_val_m_accs0_1")) || iVar6 == joaat("dlc_mp_val_m_accs0_2")) || iVar6 == joaat("dlc_mp_val_m_accs0_3")) || iVar6 == joaat("dlc_mp_val_m_accs0_4")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_0")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_1")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_2")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_3")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_4")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_5")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_6")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_7")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_8")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_9")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_10")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_11")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_12")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_13")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_14")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_15")) || iVar6 == joaat("dlc_mp_ind_m_special_0_0")) || iVar6 == joaat("dlc_mp_ind_m_special_0_1")) || iVar6 == joaat("dlc_mp_ind_m_special_2_0")) || iVar6 == joaat("dlc_mp_ind_m_special_2_1")) || iVar6 == joaat("dlc_mp_ind_m_special_2_2")) || iVar6 == joaat("dlc_mp_ind_m_special_2_3")) || iVar6 == joaat("dlc_mp_ind_m_special_2_4")) || iVar6 == joaat("dlc_mp_ind_m_special_2_5")) || iVar6 == joaat("dlc_mp_ind_m_special_2_6")) || iVar6 == joaat("dlc_mp_ind_m_special_2_7")) || iVar6 == joaat("dlc_mp_ind_m_special_2_8")) || iVar6 == joaat("dlc_mp_biker_m_special_9_0")) || iVar6 == joaat("dlc_mp_biker_m_special_9_1")) || unk_0x304A39EB177D246B(iVar6, joaat("heist_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("draw_3"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("draw_7"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("draw_11"), 0))
				{
					if (!unk_0x304A39EB177D246B(iVar6, joaat("sweat_vest"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10)
						{
							if (!unk_0x304A39EB177D246B(iVar6, joaat("sweat_vest"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x304A39EB177D246B(iVar2, joaat("loose_tie"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 4) || iVar3 == 10) || unk_0x304A39EB177D246B(iVar4, joaat("open_jacket"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((iParam4 >= 176 && iParam4 <= 191) || iVar6 == joaat("dlc_mp_val_m_accs0_0")) || iVar6 == joaat("dlc_mp_val_m_accs0_1")) || iVar6 == joaat("dlc_mp_val_m_accs0_2")) || iVar6 == joaat("dlc_mp_val_m_accs0_3")) || iVar6 == joaat("dlc_mp_val_m_accs0_4")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_0")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_1")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_2")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_3")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_4")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_5")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_6")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_7")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_8")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_9")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_10")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_11")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_12")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_13")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_14")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_15")) || iVar6 == joaat("dlc_mp_ind_m_special_0_0")) || iVar6 == joaat("dlc_mp_ind_m_special_0_1")) || iVar6 == joaat("dlc_mp_biker_m_special_9_0")) || iVar6 == joaat("dlc_mp_biker_m_special_9_1")) || unk_0x304A39EB177D246B(iVar6, joaat("heist_draw_5"), 0))
				{
					if (!unk_0x304A39EB177D246B(iVar6, joaat("sweat_vest"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((iParam4 >= 160 && iParam4 <= 175) || iVar5 == 10)
						{
							if (!unk_0x304A39EB177D246B(iVar6, joaat("sweat_vest"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x304A39EB177D246B(iVar2, joaat("slack_tie"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 188 && iParam3 <= 203)) || iVar3 == 12) || iVar3 == 4) || unk_0x304A39EB177D246B(iVar4, joaat("open_jacket"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iParam4 >= 192 && iParam4 <= 207) || func_68(iVar6)) || (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("draw_12"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x304A39EB177D246B(iVar2, joaat("scarf"), 0))
		{
			if (iParam3 != -99)
			{
				if ((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11)
				{
					return 0;
				}
				else if ((iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_4"), 0)) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_16"), 0)))
				{
					return 0;
				}
				else if (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("pilot_suit"), 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (unk_0x304A39EB177D246B(iVar8, joaat("headscarf"), 0))
				{
					return 0;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar11 = -1;
		iVar12 = -1;
		if (Global_4539502 == iParam1)
		{
			iVar12 = Global_4539501;
			iVar11 = Global_4539500;
		}
		else if (iParam1 >= 55)
		{
			iVar12 = func_144(iParam0, iParam1, 7, 4);
			iVar11 = func_134(iVar12);
			Global_4539502 = iParam1;
			Global_4539501 = iVar12;
			Global_4539500 = iVar11;
		}
		iVar13 = -1;
		iVar14 = -1;
		if (Global_4539505 == iParam3)
		{
			iVar14 = Global_4539504;
			iVar13 = Global_4539503;
		}
		else if (iParam3 >= 256)
		{
			iVar14 = func_144(iParam0, iParam3, 11, 4);
			iVar13 = func_134(iVar14);
			Global_4539505 = iParam3;
			Global_4539504 = iVar14;
			Global_4539503 = iVar13;
		}
		iVar15 = -1;
		iVar16 = -1;
		if (Global_4539508 == iParam4)
		{
			iVar16 = Global_4539507;
			iVar15 = Global_4539506;
		}
		else if (iParam4 >= 136)
		{
			iVar16 = func_144(iParam0, iParam4, 8, 4);
			iVar15 = func_134(iVar16);
			Global_4539508 = iParam4;
			Global_4539507 = iVar16;
			Global_4539506 = iVar15;
		}
		iVar17 = -1;
		iVar18 = -1;
		if (Global_4539511 == iParam10)
		{
			iVar18 = Global_4539510;
			iVar17 = Global_4539509;
		}
		else if (iParam10 >= 26)
		{
			iVar18 = func_144(iParam0, iParam10, 1, 4);
			iVar17 = func_134(iVar18);
			Global_4539511 = iParam10;
			Global_4539510 = iVar18;
			Global_4539509 = iVar17;
		}
		iVar19 = -1;
		if (iParam9 >= 327)
		{
			iVar19 = func_144(iParam0, iParam9, 14, 4);
		}
		if (iParam3 != -99)
		{
			if (((unk_0x304A39EB177D246B(iVar14, joaat("morph_suit"), 0) || unk_0x304A39EB177D246B(iVar14, joaat("scuba_gear"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("cat_suit"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("gorka_suit"), 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar18, joaat("headscarf"), 0) && !unk_0x304A39EB177D246B(iVar18, joaat("smug_draw_6"), 0))
			{
				if (((((((iParam1 == 0 || (iParam1 >= 13 && iParam1 <= 18)) || iVar11 == 3) || (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("cuff"), 0))) || (iParam1 >= 19 && iParam1 <= 24)) || iVar11 == 4) || (iParam1 >= 25 && iParam1 <= 30)) || iVar11 == 5)
				{
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar18, joaat("headscarf"), 0))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("earring"), 0)))
				{
					return 0;
				}
			}
		}
		if (unk_0x304A39EB177D246B(iVar12, joaat("hoop_necklace"), 0))
		{
			if (func_139(iParam0, iParam3, -1))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar14, joaat("pilot_suit"), 0))
			{
				if (iParam1 != 0 && !(iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("pilot_suit"), 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar12, joaat("epsilon_chain_alt"), 0))
			{
				if (unk_0x304A39EB177D246B(iVar14, joaat("arena_draw_0"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x304A39EB177D246B(iVar12, joaat("epsilon_chain"), 0))
			{
				if (unk_0x304A39EB177D246B(iVar14, joaat("arena_draw_0"), 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar12, joaat("epsilon_chain_alt"), 0))
			{
				if (iParam4 == 66)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar12, 91564168, 0))
			{
				if (unk_0x304A39EB177D246B(iVar14, 91564168, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar12, 91564168, 0))
			{
				if (unk_0x304A39EB177D246B(iVar16, 91564168, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar12, 1536943816, 0))
			{
				if (unk_0x304A39EB177D246B(iVar14, -148268191, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar12 == joaat("DLC_MP_APA_F_TEETH_0_0") || iVar12 == 653911448) || iVar12 == -1519558015)
		{
			if (iParam9 != -99)
			{
				switch (iVar19)
				{
					case 1446628467:
					case -1938048778:
					case 2041418586:
					case -1342898200:
					case 2026483804:
					case -1977527541:
					case -1670449242:
					case -1385031204:
					case -1088111295:
					case -1530918836:
					case -1221415631:
					case -629869643:
					case joaat("dlc_mp_exec_f_phead_1_0"):
					case joaat("dlc_mp_stunt_f_phead_10_0"):
					case joaat("dlc_mp_stunt_f_phead_10_1"):
					case joaat("dlc_mp_stunt_f_phead_10_2"):
					case joaat("dlc_mp_stunt_f_phead_10_3"):
					case joaat("dlc_mp_stunt_f_phead_10_4"):
					case joaat("dlc_mp_stunt_f_phead_10_5"):
					case joaat("dlc_mp_stunt_f_phead_10_6"):
					case joaat("dlc_mp_stunt_f_phead_10_7"):
					case joaat("dlc_mp_stunt_f_phead_10_8"):
					case joaat("dlc_mp_stunt_f_phead_10_9"):
					case joaat("dlc_mp_stunt_f_phead_10_10"):
					case joaat("dlc_mp_stunt_f_phead_10_11"):
					case joaat("dlc_mp_stunt_f_phead_10_12"):
					case joaat("dlc_mp_stunt_f_phead_10_13"):
					case joaat("dlc_mp_stunt_f_phead_10_14"):
					case joaat("dlc_mp_stunt_f_phead_10_15"):
					case joaat("dlc_mp_stunt_f_phead_10_16"):
					case joaat("dlc_mp_stunt_f_phead_10_17"):
					case joaat("dlc_mp_stunt_f_phead_10_18"):
					case joaat("dlc_mp_stunt_f_phead_10_19"):
					case joaat("dlc_mp_stunt_f_phead_10_20"):
					case joaat("dlc_mp_gr_f_phead_7_0"):
					case joaat("dlc_mp_gr_f_phead_7_1"):
					case joaat("dlc_mp_gr_f_phead_7_2"):
					case joaat("dlc_mp_gr_f_phead_7_3"):
					case joaat("dlc_mp_gr_f_phead_7_4"):
					case joaat("dlc_mp_gr_f_phead_7_5"):
					case joaat("dlc_mp_gr_f_phead_7_6"):
					case joaat("dlc_mp_gr_f_phead_7_7"):
					case joaat("dlc_mp_gr_f_phead_7_8"):
					case joaat("dlc_mp_gr_f_phead_7_9"):
					case joaat("dlc_mp_gr_f_phead_7_10"):
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (unk_0x304A39EB177D246B(iVar18, joaat("headscarf"), 0))
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar16, joaat("over_jacket"), 0))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("scarf"), 0))
			{
				if (unk_0x304A39EB177D246B(iVar12, joaat("jacket_scarf"), 0))
				{
					if ((((((((((((((((unk_0x304A39EB177D246B(iVar14, joaat("block_scarfs"), 0) || unk_0x304A39EB177D246B(iVar14, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar14, -826135203, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_15"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_18"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_20"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_24"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("air_draw_0"), 0))
					{
						return 0;
					}
					else if (func_69(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_69(iParam0, iParam3) || unk_0x304A39EB177D246B(iVar14, joaat("block_scarfs"), 0))
				{
					return 0;
				}
				if (iParam10 != -99)
				{
					if (unk_0x304A39EB177D246B(iVar18, joaat("headscarf"), 0))
					{
						return 0;
					}
				}
			}
			if (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("luxe_scarf"), 0))
			{
				if ((((unk_0x304A39EB177D246B(iVar14, joaat("luxe_draw_0"), 0) || unk_0x304A39EB177D246B(iVar14, joaat("luxe_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("luxe_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("luxe2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("luxe2_draw_1"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("scarf"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar16, joaat("block_scarfs"), 0))
			{
				return 0;
			}
		}
		else if (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("chain"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar16, joaat("block_chains"), 0))
			{
				return 0;
			}
		}
		if (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("pilot_suit"), 0))
		{
			if (iParam9 >= 327 && unk_0x304A39EB177D246B(func_144(iParam0, iParam9, 14, 4), joaat("pilot_suit"), 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0x304A39EB177D246B(func_144(iParam0, iParam9, 14, 4), joaat("pilot_suit"), 1)) && iParam1 != 0)
		{
			return 0;
		}
		if ((((iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("scarf"), 0)) || (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("big_chain"), 0))) || (iParam1 >= 43 && iParam1 <= 48)) || iVar11 == 8)
		{
			if (iParam11 != -99)
			{
				iVar20 = -1;
				if (iParam11 >= 256)
				{
					iVar20 = func_144(iParam0, iParam11, 4, 4);
				}
				if (unk_0x304A39EB177D246B(iVar20, joaat("dungarees"), 0))
				{
					return 0;
				}
			}
		}
		if (iVar12 != -1 && (unk_0x304A39EB177D246B(iVar12, joaat("tie"), 0) || unk_0x304A39EB177D246B(iVar12, joaat("bowtie"), 0)))
		{
			if (iParam2 == 11)
			{
				if ((((((((((((unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_5"), 0) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_11"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar14, -872449705, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_10"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_25"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_9"), 0)) || (iParam3 >= 112 && iParam3 <= 127)) || iVar13 == 7)
				{
				}
				else if ((unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_9"), 0) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_11"), 0)) || unk_0x304A39EB177D246B(iVar14, 144417099, 0))
				{
					if (unk_0x304A39EB177D246B(iVar12, joaat("bowtie"), 0))
					{
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
			else if (iParam2 == 8)
			{
				if (unk_0x304A39EB177D246B(iVar16, joaat("open_collar"), 0) || unk_0x304A39EB177D246B(iVar16, joaat("closed_collar"), 0))
				{
					if (unk_0x304A39EB177D246B(iVar12, joaat("tie"), 0))
					{
						if (unk_0x304A39EB177D246B(iVar16, joaat("heist_draw_8"), 0) || unk_0x304A39EB177D246B(iVar16, joaat("heist_draw_9"), 0))
						{
							if (unk_0x304A39EB177D246B(iVar12, joaat("alt_tie"), 0))
							{
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0x304A39EB177D246B(iVar12, joaat("alt_tie"), 0))
						{
							return 0;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam9 != -99)
		{
			if ((iVar19 != -1 && unk_0x304A39EB177D246B(iVar19, joaat("earring"), 1)) || (iVar19 != -1 && unk_0x304A39EB177D246B(iVar19, joaat("block_earrings"), 1)))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("earring"), 0)))
				{
					return 0;
				}
			}
		}
		if (unk_0x304A39EB177D246B(iVar12, joaat("hoop_necklace"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar14, joaat("dress"), 0))
			{
				return 1;
			}
		}
		if (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("chain"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((((unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_5"), 0) || unk_0x304A39EB177D246B(iVar14, -102825006, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_18"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_20"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_24"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("block_chains"), 0))
				{
					return 0;
				}
				else if (func_139(iParam0, iParam3, -1))
				{
				}
				else if ((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 176 && iParam3 <= 191)) || iVar13 == 2) || iVar13 == 11) || unk_0x304A39EB177D246B(iVar14, joaat("tails_jacket"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("luxe_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("luxe2_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar14, -430330349, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_21"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("exec_draw_14"), 0)) || iVar14 == joaat("dlc_mp_ind_f_jbib_1_0")) || iVar14 == joaat("dlc_mp_ind_f_jbib_1_1")) || unk_0x304A39EB177D246B(iVar14, joaat("smug_draw_5"), 0))
				{
					if (!unk_0x304A39EB177D246B(iVar12, joaat("alt_chain"), 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || unk_0x304A39EB177D246B(iVar14, joaat("dress"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("vest_shirt"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("vest"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("pilot_suit"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("combat_top"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("COMBAT_SWEAT"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("xmas2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, -1086258388, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_10"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_13"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_15"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("silk_pyjamas"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar14, -826135203, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("LOW2_DRAW_8"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar14, -1103045158, 0)) || unk_0x304A39EB177D246B(iVar14, -102825006, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_20"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_24"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("air_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, 891044832, 0))
				{
					return 0;
				}
				else if (unk_0x304A39EB177D246B(iVar12, joaat("alt_chain"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam4 >= 71 && iParam4 <= 86) || iVar15 == 11) || unk_0x304A39EB177D246B(iVar16, joaat("OFF_SHOULDER_ACCS"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("heist_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_10"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_11"), 0)) || iVar16 == joaat("dlc_mp_heist_f_special_12_0")) || iVar16 == joaat("dlc_mp_heist_f_special_12_1")) || iVar16 == joaat("dlc_mp_hips_f_accs3_0")) || iVar16 == joaat("dlc_mp_hips_f_accs3_1")) || iVar16 == joaat("dlc_mp_hips_f_accs3_2")) || iVar16 == joaat("dlc_mp_hips_f_accs3_3")) || iVar16 == joaat("dlc_mp_val_f_accs0_0")) || iVar16 == joaat("dlc_mp_val_f_accs0_1")) || iVar16 == joaat("dlc_mp_val_f_accs0_2")) || iVar16 == joaat("dlc_mp_val_f_accs1_0")) || iVar16 == joaat("dlc_mp_val_f_accs1_1")) || iVar16 == joaat("dlc_mp_val_f_accs1_2")) || unk_0x304A39EB177D246B(iVar16, joaat("low_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low2_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low2_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low2_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low2_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low2_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("apart_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("apart_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("EXEC_DRAW_3"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("EXEC_DRAW_4"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("EXEC_DRAW_5"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("EXEC_DRAW_17"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("biker_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("biker_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("biker_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("biker_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("biker_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("biker_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("biker_draw_33"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("smug_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("block_chains"), 0))
				{
					if (!unk_0x304A39EB177D246B(iVar12, joaat("alt_chain"), 0))
					{
						return 0;
					}
				}
				else if (((((((unk_0x304A39EB177D246B(iVar16, joaat("vest_shirt"), 0) || unk_0x304A39EB177D246B(iVar16, joaat("heist_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("heist_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("heist_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("heist_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("heist_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar16, 1353777856, 0)) || unk_0x304A39EB177D246B(iVar16, joaat("apart_draw_1"), 0))
				{
					return 0;
				}
				else if (func_135(iParam0, iParam4, 0) != -99)
				{
					if (unk_0x304A39EB177D246B(iVar12, joaat("alt_chain"), 0))
					{
						return 0;
					}
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("bead_necklace"), 0))
			{
				if (unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_21"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (((iParam1 >= 13 && iParam1 <= 18) || iVar11 == 3) || (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("cuff"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("combat_gear"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("long_sleeve"), 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x304A39EB177D246B(func_144(iParam0, iParam4, 8, 4), joaat("long_sleeve"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x304A39EB177D246B(iVar19, joaat("cuff"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 19 && iParam1 <= 24) || iVar11 == 4)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("combat_gear"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("long_sleeve"), 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x304A39EB177D246B(func_144(iParam0, iParam4, 8, 4), joaat("long_sleeve"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x304A39EB177D246B(iVar19, joaat("cuff"), 1))
				{
					unk_0x09A485A642AEADEF(iVar19, &Var21);
					if (Var21.f_6 == 7)
					{
						return 0;
					}
				}
			}
		}
		else if ((iParam1 >= 25 && iParam1 <= 30) || iVar11 == 5)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("combat_gear"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("long_sleeve"), 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x304A39EB177D246B(func_144(iParam0, iParam4, 8, 4), joaat("long_sleeve"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x304A39EB177D246B(iVar19, joaat("cuff"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 31 && iParam1 <= 36) || iVar11 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("vest_shirt"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("combat_gear"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("heist_gear"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_3"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("luxe_sweat"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("luxe_draw_4"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("low_sweat"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("low_draw_0"), 0))) || unk_0x304A39EB177D246B(iVar14, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("silk_pyjamas"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar14, -826135203, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar14, -430330349, 0)) || unk_0x304A39EB177D246B(iVar14, -102825006, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_18"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_20"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_21"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_24"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("exec_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("biker_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("biker_draw_15"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("biker_draw_16"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("morph_suit"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("air_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("assault_draw_0"), 0))
				{
					return 0;
				}
			}
		}
		else if (((iParam1 >= 37 && iParam1 <= 42) || iVar11 == 7) || (iParam1 >= 55 && unk_0x304A39EB177D246B(iVar12, joaat("long_necklace"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 48 && iParam3 <= 63)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 2) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("combat_gear"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("heist_gear"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_3"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("draw_0"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("luxe_sweat"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("luxe_draw_4"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("low_sweat"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("low_draw_0"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("low_draw_3"), 0))) || unk_0x304A39EB177D246B(iVar14, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("silk_pyjamas"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar14, -826135203, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("vest_shirt"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar14, -430330349, 0)) || unk_0x304A39EB177D246B(iVar14, -102825006, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_18"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_20"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_21"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_24"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("exec_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("biker_draw_19"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("air_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("block_chains"), 0))
				{
					return 0;
				}
				else if (((((((((((iParam3 >= 112 && iParam3 <= 127) || (iParam3 >= 160 && iParam3 <= 175)) || (iParam3 >= 192 && iParam3 <= 207)) || iVar13 == 7) || iVar13 == 10) || iVar13 == 12) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("long_sleeve"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("vest"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("combat_gear"), 0))) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_7"), 0))
				{
					if (iParam1 >= 55 && unk_0x304A39EB177D246B(iVar12, joaat("long_necklace"), 0))
					{
						return 0;
					}
				}
			}
			else if (iParam4 != -99)
			{
				if (unk_0x304A39EB177D246B(iVar16, joaat("vest_shirt"), 0))
				{
					if (unk_0x304A39EB177D246B(iVar12, joaat("long_necklace"), 0))
					{
						return 0;
					}
				}
				else if (((unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_1"), 0) || unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_4"), 0))
				{
					return 0;
				}
				else if ((unk_0x304A39EB177D246B(iVar16, joaat("ALT_SPECIAL_4"), 0) || unk_0x304A39EB177D246B(iVar16, joaat("alt_special_5"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("alt_special_6"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x304A39EB177D246B(iVar19, joaat("cuff"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 43 && iParam1 <= 48) || iVar11 == 8)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 2) || iVar13 == 4) || iVar13 == 5) || iVar13 == 9) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("vest"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("dress"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("luxe_sweat"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("low_sweat"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 49 && iParam1 <= 54) || iVar11 == 9)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 4) || iVar13 == 5) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("vest"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("dress"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (unk_0x304A39EB177D246B(iVar16, joaat("sweat_vest"), 0) || unk_0x304A39EB177D246B(iVar16, joaat("basic_vest"), 0))
				{
					return 0;
				}
				else if (((unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_1"), 0) || unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_4"), 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (unk_0x304A39EB177D246B(iVar18, joaat("headscarf"), 0))
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && unk_0x304A39EB177D246B(iVar12, joaat("high_roller_tie"), 0))
		{
			if (iParam4 != -99)
			{
				if (unk_0x304A39EB177D246B(iVar16, joaat("high_roller_shirt"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && unk_0x304A39EB177D246B(iVar12, joaat("braces"), 0))
		{
			if (iParam3 != -99)
			{
				if (iVar14 != -1 && unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_7"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (iParam11 != -99)
			{
				iVar22 = -1;
				if (iParam11 >= 256)
				{
					iVar22 = func_144(iParam0, iParam11, 4, 4);
				}
				if (unk_0x304A39EB177D246B(iVar22, joaat("high_waist"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_68(int iParam0)
{
	if (iParam0 != -1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("dlc_mp_busi_m_accs4_0"):
		case joaat("dlc_mp_busi_m_accs5_0"):
		case joaat("dlc_mp_busi_m_accs4_1"):
		case joaat("dlc_mp_busi_m_accs5_1"):
		case joaat("dlc_mp_busi_m_accs4_2"):
		case joaat("dlc_mp_busi_m_accs5_2"):
		case joaat("dlc_mp_busi_m_accs4_3"):
		case joaat("dlc_mp_busi_m_accs5_3"):
		case joaat("dlc_mp_busi_m_accs4_4"):
		case joaat("dlc_mp_busi_m_accs5_4"):
		case joaat("dlc_mp_busi_m_accs4_5"):
		case joaat("dlc_mp_busi_m_accs5_5"):
		case joaat("dlc_mp_busi_m_accs4_6"):
		case joaat("dlc_mp_busi_m_accs5_6"):
		case joaat("dlc_mp_busi_m_accs4_7"):
		case joaat("dlc_mp_busi_m_accs5_7"):
		case joaat("dlc_mp_busi_m_accs4_8"):
		case joaat("dlc_mp_busi_m_accs5_8"):
		case joaat("dlc_mp_busi_m_accs4_9"):
		case joaat("dlc_mp_busi_m_accs5_9"):
		case joaat("dlc_mp_busi_m_accs4_10"):
		case joaat("dlc_mp_busi_m_accs5_10"):
		case joaat("dlc_mp_busi_m_accs4_11"):
		case joaat("dlc_mp_busi_m_accs5_11"):
		case joaat("dlc_mp_busi_m_accs4_12"):
		case joaat("dlc_mp_busi_m_accs5_12"):
		case joaat("dlc_mp_busi_m_accs4_13"):
		case joaat("dlc_mp_busi_m_accs5_13"):
		case joaat("dlc_mp_busi_m_accs4_14"):
		case joaat("dlc_mp_busi_m_accs5_14"):
		case joaat("dlc_mp_busi_m_accs4_15"):
		case joaat("dlc_mp_busi_m_accs5_15"):
			return 1;
			break;
	}
	return 0;
}

int func_69(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = func_144(iParam0, iParam1, 11, 3);
		if (iVar0 != -1)
		{
			if (((((((((((((((((((((((((((((((unk_0x304A39EB177D246B(iVar0, joaat("low_draw_0"), 0) || unk_0x304A39EB177D246B(iVar0, joaat("low_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("LOW_DRAW_7"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("LOW_DRAW_8"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar0, -826135203, 0)) || unk_0x304A39EB177D246B(iVar0, joaat("jan_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("jan_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low2_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low2_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low2_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low2_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low2_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low2_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("stunt_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("air_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("use_jacket_scarf"), 0))
			{
				return 1;
			}
		}
		if (iVar0 != -1)
		{
			if (unk_0x304A39EB177D246B(iVar0, joaat("silk_pyjamas"), 0))
			{
				return 1;
			}
		}
		return func_139(iParam0, iParam1, -1);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_144(iParam0, iParam1, 11, 4);
		iVar2 = -1;
		if (iVar1 != -1)
		{
			iVar2 = func_134(iVar1);
		}
		if (((((((((((((((((((((((((((((((((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 48 && iParam1 < 64)) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 144 && iParam1 < 160)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 224 && iParam1 < 240)) || iVar2 == 1) || iVar2 == 3) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10) || iVar2 == 14) || unk_0x304A39EB177D246B(iVar1, joaat("jacket"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("combat_top"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("heist_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("heist_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("silk_pyjamas"), 0)) || unk_0x304A39EB177D246B(iVar1, -826135203, 0)) || unk_0x304A39EB177D246B(iVar1, joaat("low2_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar1, -102825006, 0)) || unk_0x304A39EB177D246B(iVar1, joaat("apart_draw_18"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("apart_draw_20"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("apart_draw_24"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("air_draw_0"), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_70(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	func_124(unk_0x70E57E9927B6BA58("hairOverlay"), iParam0);
	iVar1 = func_123(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78338;
		}
		func_161(iVar1, 1, iParam2);
	}
	func_71(iParam0, bParam3, 0, -1);
}

void func_71(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	int iVar10;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		iVar0 = Global_78338;
		unk_0x98E00E3ED7D61628(iParam0);
		iVar2 = func_122(iParam0);
		bVar3 = func_117(iParam0, 0);
		bVar4 = func_109(iParam0);
		bVar5 = func_108(iParam0, iParam3);
		if (bParam1)
		{
			bVar4 = true;
		}
		if (bParam2)
		{
			bVar4 = false;
		}
		iVar6 = 0;
		while (iVar6 < 127)
		{
			if (func_105(iVar6, iVar0))
			{
				if (func_98(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (func_95(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						unk_0x49A5A17556C31561(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (func_105(123, iVar0))
		{
			if (unk_0x50CA4ACB66148FF0(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				unk_0x49A5A17556C31561(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar8 = unk_0x82D6E3FDBD0A80B6(iVar2);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if (unk_0xC8FF7E3E267EBEF5(iVar2, iVar7, &Var9))
			{
				if (!unk_0x4BFA043D318BF9AE(Var9.f_0))
				{
					iVar10 = (129 + iVar7);
					if (func_105(iVar10, iVar0))
					{
						if (func_95(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!func_73(Var9.f_2, Var9.f_3, iVar10))
							{
								unk_0x49A5A17556C31561(iParam0, Var9.f_2, Var9.f_3);
								func_72(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

void func_72(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1841427399:
			switch (iParam2)
			{
				case -507124931:
					unk_0x49A5A17556C31561(iParam0, 1841427399, -435695677);
					break;
				
				case -2045170715:
					unk_0x49A5A17556C31561(iParam0, 1841427399, 1684098164);
					break;
			}
			break;
		
		case joaat("mpsecurity_overlays"):
			switch (iParam2)
			{
				case -1698823936:
					unk_0x49A5A17556C31561(iParam0, joaat("mpsecurity_overlays"), -1282588017);
					break;
				
				case 543067199:
					unk_0x49A5A17556C31561(iParam0, joaat("mpsecurity_overlays"), 884393080);
					break;
			}
			break;
		
		case joaat("mptuner_overlays"):
			switch (iParam2)
			{
				case -129339642:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), 1959383570);
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), -543063956);
					break;
				
				case 887263619:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), -543063956);
					break;
				
				case -598443208:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), -1160700813);
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), -543063956);
					break;
				
				case -619123295:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), -543063956);
					break;
				
				case -2139930425:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), -543063956);
					break;
				
				case 991513037:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), 847416951);
					break;
				
				case -675149090:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), 847416951);
					break;
				
				case 2021781367:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), -1625184579);
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), 1294359428);
					break;
				
				case -436866133:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), 1294359428);
					break;
				
				case 457275657:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), 429414924);
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), 1294359428);
					break;
				
				case -250832592:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), 1294359428);
					break;
				
				case -798760789:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), 1294359428);
					break;
				
				case -1634791241:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), -2021672848);
					break;
				
				case -1227437948:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), -2021672848);
					break;
			}
			break;
		
		case joaat("mpheist4_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Heist4_Tee_039_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_040_M"));
					break;
				
				case joaat("MP_Heist4_Tee_041_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_042_M"));
					break;
				
				case joaat("MP_Heist4_Tee_043_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_044_M"));
					break;
				
				case joaat("MP_Heist4_Tee_049_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_050_M"));
					break;
				
				case joaat("MP_Heist4_Tee_051_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_052_M"));
					break;
				
				case joaat("MP_Heist4_Tee_055_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_056_M"));
					break;
				
				case joaat("MP_Heist4_Tee_057_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_058_M"));
					break;
				
				case joaat("MP_Heist4_Tee_059_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_060_M"));
					break;
				
				case joaat("MP_Heist4_Tee_061_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_062_M"));
					break;
				
				case joaat("MP_Heist4_Tee_063_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_064_M"));
					break;
				
				case joaat("MP_Heist4_Tee_065_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_066_M"));
					break;
				
				case joaat("MP_Heist4_Tee_039_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_040_F"));
					break;
				
				case joaat("MP_Heist4_Tee_041_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_042_F"));
					break;
				
				case joaat("MP_Heist4_Tee_043_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_044_F"));
					break;
				
				case joaat("MP_Heist4_Tee_049_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_050_F"));
					break;
				
				case joaat("MP_Heist4_Tee_051_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_052_F"));
					break;
				
				case joaat("MP_Heist4_Tee_055_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_056_F"));
					break;
				
				case joaat("MP_Heist4_Tee_057_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_058_F"));
					break;
				
				case joaat("MP_Heist4_Tee_059_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_060_F"));
					break;
				
				case joaat("MP_Heist4_Tee_061_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_062_F"));
					break;
				
				case joaat("MP_Heist4_Tee_063_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_064_F"));
					break;
				
				case joaat("MP_Heist4_Tee_065_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_066_F"));
					break;
			}
			break;
		
		case joaat("mpVinewood_overlays"):
			switch (iParam2)
			{
				case joaat("CasinoTop_M_0"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_M"));
					break;
				
				case joaat("CasinoTop_M_1"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
					break;
				
				case joaat("CasinoTop_M_2"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
					break;
				
				case joaat("CasinoTop_M_3"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
					break;
				
				case joaat("CasinoTop_M_4"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
					break;
				
				case joaat("CasinoTop_M_5"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
					break;
				
				case joaat("CasinoTop_M_6"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
					break;
				
				case joaat("CasinoTop_M_7"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_M"));
					break;
				
				case joaat("CasinoTop_M_8"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_M"));
					break;
				
				case joaat("CasinoTop_M_9"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
					break;
				
				case joaat("CasinoTop_M_10"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
					break;
				
				case joaat("CasinoTop_M_11"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_M"));
					break;
				
				case joaat("CasinoTop_M_12"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_M"));
					break;
				
				case joaat("CasinoTop_M_13"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_M"));
					break;
				
				case joaat("CasinoTop_M_14"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_M"));
					break;
				
				case joaat("CasinoTop_M_15"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_M"));
					break;
				
				case joaat("CasinoTop_M_16"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_M"));
					break;
				
				case joaat("CasinoTop_M_17"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_M"));
					break;
				
				case joaat("CasinoTop_M_18"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_M"));
					break;
				
				case joaat("CasinoTop_M_19"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_M"));
					break;
				
				case joaat("CasinoTop_M_20"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_M"));
					break;
				
				case joaat("CasinoTop_M_21"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
					break;
				
				case joaat("CasinoTop_M_22"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
					break;
				
				case joaat("CasinoTop_M_23"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_M"));
					break;
				
				case joaat("CasinoTop_M_24"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
					break;
				
				case joaat("CasinoTop_M_25"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
					break;
				
				case joaat("CasinoTop_M_26"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_M"));
					break;
				
				case joaat("CasinoTop_M_27"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
					break;
				
				case joaat("CasinoTop_M_28"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
					break;
				
				case joaat("CasinoTop_M_29"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
					break;
				
				case joaat("CasinoTop_M_30"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
					break;
				
				case joaat("CasinoTop_M_31"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
					break;
				
				case joaat("CasinoTop_M_32"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
					break;
				
				case joaat("CasinoTop_M_33"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
					break;
				
				case joaat("CasinoTop_M_34"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
					break;
				
				case joaat("CasinoTop_M_35"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
					break;
				
				case joaat("CasinoTop_M_36"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
					break;
				
				case joaat("CasinoTop_M_37"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
					break;
				
				case joaat("CasinoTop_M_38"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
					break;
				
				case joaat("CasinoTop_M_39"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
					break;
				
				case joaat("CasinoTop_M_40"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
					break;
				
				case joaat("CasinoTop_M_41"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
					break;
				
				case joaat("CasinoTop_M_42"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
					break;
				
				case joaat("CasinoTop_M_43"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
					break;
				
				case joaat("CasinoTop_M_44"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
					break;
			}
			switch (iParam2)
			{
				case joaat("CasinoTop_F_0"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_F"));
					break;
				
				case joaat("CasinoTop_F_1"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
					break;
				
				case joaat("CasinoTop_F_2"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
					break;
				
				case joaat("CasinoTop_F_3"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
					break;
				
				case joaat("CasinoTop_F_4"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
					break;
				
				case joaat("CasinoTop_F_5"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
					break;
				
				case joaat("CasinoTop_F_6"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
					break;
				
				case joaat("CasinoTop_F_7"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_F"));
					break;
				
				case joaat("CasinoTop_F_8"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_F"));
					break;
				
				case joaat("CasinoTop_F_9"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
					break;
				
				case joaat("CasinoTop_F_10"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
					break;
				
				case joaat("CasinoTop_F_11"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_F"));
					break;
				
				case joaat("CasinoTop_F_12"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_F"));
					break;
				
				case joaat("CasinoTop_F_13"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_F"));
					break;
				
				case joaat("CasinoTop_F_14"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_F"));
					break;
				
				case joaat("CasinoTop_F_15"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_F"));
					break;
				
				case joaat("CasinoTop_F_16"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_F"));
					break;
				
				case joaat("CasinoTop_F_17"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_F"));
					break;
				
				case joaat("CasinoTop_F_18"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_F"));
					break;
				
				case joaat("CasinoTop_F_19"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_F"));
					break;
				
				case joaat("CasinoTop_F_20"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_F"));
					break;
				
				case joaat("CasinoTop_F_21"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
					break;
				
				case joaat("CasinoTop_F_22"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
					break;
				
				case joaat("CasinoTop_F_23"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_F"));
					break;
				
				case joaat("CasinoTop_F_24"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
					break;
				
				case joaat("CasinoTop_F_25"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
					break;
				
				case joaat("CasinoTop_F_26"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_F"));
					break;
				
				case joaat("CasinoTop_F_27"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
					break;
				
				case joaat("CasinoTop_F_28"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
					break;
				
				case joaat("CasinoTop_F_29"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
					break;
				
				case joaat("CasinoTop_F_30"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
					break;
				
				case joaat("CasinoTop_F_31"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
					break;
				
				case joaat("CasinoTop_F_32"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
					break;
				
				case joaat("CasinoTop_F_33"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
					break;
				
				case joaat("CasinoTop_F_34"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
					break;
				
				case joaat("CasinoTop_F_35"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
					break;
				
				case joaat("CasinoTop_F_36"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
					break;
				
				case joaat("CasinoTop_F_37"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
					break;
				
				case joaat("CasinoTop_F_38"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
					break;
				
				case joaat("CasinoTop_F_39"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
					break;
				
				case joaat("CasinoTop_F_40"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
					break;
				
				case joaat("CasinoTop_F_41"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
					break;
				
				case joaat("CasinoTop_F_42"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
					break;
				
				case joaat("CasinoTop_F_43"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
					break;
				
				case joaat("CasinoTop_F_44"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
					break;
			}
			break;
		
		case joaat("mpBattle_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Battle_Clothing_000_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_M"));
					break;
			}
			switch (iParam2)
			{
				case joaat("MP_Battle_Clothing_000_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_F"));
					break;
			}
			break;
		
		case joaat("mpSmuggler_overlays"):
			switch (iParam2)
			{
				case joaat("M_TankTop_Smug_5_3_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_17_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_10_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_11_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_12_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_13_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_20_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_21_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_23_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_22_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_5_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_18_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_0_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_3_b"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_25_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_7_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_4_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_1_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_M"));
					break;
				
				case joaat("M_TankTop_Smug_5_9_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_M"));
					break;
			}
			switch (iParam2)
			{
				case joaat("F_TankTop_Smug_5_3_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_17_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_10_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_11_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_12_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_13_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_20_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_21_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_23_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_22_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_5_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_18_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_0_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_3_b"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_25_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_7_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_4_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_1_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_F"));
					break;
				
				case joaat("F_TankTop_Smug_5_9_a"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_F"));
					break;
			}
			break;
		
		case joaat("mpGunrunning_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Gunrunning_Award_020_M_ALT"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_020_F_ALT"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_F"));
					break;
			}
			break;
		
		case joaat("mpExecutive_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Securoserv_000_Mb"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_M"));
					break;
				
				case joaat("MP_Securoserv_000_Fb"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_F"));
					break;
			}
			break;
		
		case joaat("mpHeist_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Elite_M_Tshirt_1"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_M_Tshirt_2"));
					break;
				
				case joaat("MP_Elite_F_Tshirt_1"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_F_Tshirt_2"));
					break;
			}
			break;
		
		case joaat("mpLuxe2_overlays"):
			switch (iParam2)
			{
				case joaat("MP_LUXE_TAT_029_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_030_M"));
					unk_0x49A5A17556C31561(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_031_M"));
					break;
				
				case joaat("MP_LUXE_TAT_029_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_030_F"));
					unk_0x49A5A17556C31561(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_031_F"));
					break;
			}
			break;
	}
}

int func_73(int iParam0, int iParam1, int iParam2)
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
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	switch (iParam0)
	{
		case 1841427399:
			switch (iParam1)
			{
				case -507124931:
				case -2045170715:
					if (func_94(36717, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -507124931);
					break;
				
				case -187038898:
				case 524638244:
					if (func_94(36767, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -187038898);
					break;
				
				case 1797082704:
				case -757817895:
					if (func_94(36766, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 1797082704);
					break;
				
				case 1959890413:
				case 1506629605:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 1959890413);
					break;
				
				case 1167984459:
				case 568901597:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 1167984459);
					break;
				
				case 1006005360:
				case 1403427788:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 1006005360);
					break;
				
				case -1295693571:
				case -1940685798:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -1295693571);
					break;
				
				case -1825141795:
				case 1441861967:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -1825141795);
					break;
				
				case 61080464:
				case -1941007133:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 61080464);
					break;
				
				case -1622071979:
				case -1216457341:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -1622071979);
					break;
				
				case -899024637:
				case 141030546:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -899024637);
					break;
				
				case -569499773:
				case 2065160600:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -569499773);
					break;
				
				case -665339429:
				case 222569387:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -665339429);
					break;
				
				case 858185772:
				case -1269669251:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 858185772);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 987639353:
			switch (iParam1)
			{
				case 1529075272:
				case 28812113:
					if (func_94(34505, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 1529075272);
					break;
				
				case 1769388797:
				case 183205348:
					if (func_94(34375, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 1769388797);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mptuner_overlays"):
			switch (iParam1)
			{
				case -129339642:
				case 2021781367:
					if (func_89(116, -1) >= func_88(116, 5, 9) || func_94(31760, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -129339642);
					break;
				
				case 887263619:
				case -436866133:
					if (func_87(123, -1) || func_94(31761, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 887263619);
					break;
				
				case -598443208:
				case 457275657:
					if (func_87(124, -1) || func_94(31762, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -598443208);
					break;
				
				case -619123295:
				case -250832592:
					if (func_87(125, -1) || func_94(31763, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -619123295);
					break;
				
				case -2139930425:
				case -798760789:
					if (func_87(126, -1) || func_94(31764, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -2139930425);
					break;
				
				case 991513037:
				case -1634791241:
					if (func_94(31768, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 991513037);
					break;
				
				case -675149090:
				case -1227437948:
					if (func_94(31769, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -675149090);
					break;
				
				case -1686814509:
				case -1408179706:
					if (func_94(31770, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -1686814509);
					break;
				
				case 2138708412:
				case -1894139601:
					if (func_94(31771, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 2138708412);
					break;
				
				case 205793848:
				case -786254870:
					if (func_94(31772, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 205793848);
					break;
				
				case 1325175663:
				case -773154515:
					if (func_94(31773, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 1325175663);
					break;
				
				case -368088972:
				case 1778247767:
					if (func_94(31774, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -368088972);
					break;
				
				case -1771053026:
				case -648092145:
					if (func_94(31775, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -1771053026);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpheist4_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Heist4_Tee_030_M"):
				case joaat("MP_Heist4_Tee_030_F"):
					if (func_94(30533, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_030_M"));
					break;
				
				case joaat("MP_Heist4_Tee_032_M"):
				case joaat("MP_Heist4_Tee_032_F"):
					if (func_94(30534, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_032_M"));
					break;
				
				case joaat("MP_Heist4_Tee_028_M"):
				case joaat("MP_Heist4_Tee_028_F"):
					if (func_94(30535, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_028_M"));
					break;
				
				case joaat("MP_Heist4_Tee_029_M"):
				case joaat("MP_Heist4_Tee_029_F"):
					if (func_94(30536, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_029_M"));
					break;
				
				case joaat("MP_Heist4_Tee_031_M"):
				case joaat("MP_Heist4_Tee_031_F"):
					if (func_94(30537, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_031_M"));
					break;
				
				case joaat("MP_Heist4_Tee_022_M"):
				case joaat("MP_Heist4_Tee_022_F"):
					if (func_94(30538, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_022_M"));
					break;
				
				case joaat("MP_Heist4_Tee_023_M"):
				case joaat("MP_Heist4_Tee_023_F"):
					if (func_94(30539, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_023_M"));
					break;
				
				case joaat("MP_Heist4_Tee_020_M"):
				case joaat("MP_Heist4_Tee_020_F"):
					if (func_94(30540, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_020_M"));
					break;
				
				case joaat("MP_Heist4_Tee_021_M"):
				case joaat("MP_Heist4_Tee_021_F"):
					if (func_94(30541, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_021_M"));
					break;
				
				case joaat("MP_Heist4_Tee_003_M"):
				case joaat("MP_Heist4_Tee_003_F"):
					if (func_94(30542, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_003_M"));
					break;
				
				case joaat("MP_Heist4_Tee_004_M"):
				case joaat("MP_Heist4_Tee_004_F"):
					if (func_94(30543, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_004_M"));
					break;
				
				case joaat("MP_Heist4_Tee_005_M"):
				case joaat("MP_Heist4_Tee_005_F"):
					if (func_94(30544, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_005_M"));
					break;
				
				case joaat("MP_Heist4_Tee_006_M"):
				case joaat("MP_Heist4_Tee_006_F"):
					if (func_94(30545, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_006_M"));
					break;
				
				case joaat("MP_Heist4_Tee_027_M"):
				case joaat("MP_Heist4_Tee_027_F"):
					if (func_94(30546, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_027_M"));
					break;
				
				case joaat("MP_Heist4_Tee_026_M"):
				case joaat("MP_Heist4_Tee_026_F"):
					if (func_94(30547, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_026_M"));
					break;
				
				case joaat("MP_Heist4_Tee_025_M"):
				case joaat("MP_Heist4_Tee_025_F"):
					if (func_94(30548, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_025_M"));
					break;
				
				case joaat("MP_Heist4_Tee_024_M"):
				case joaat("MP_Heist4_Tee_024_F"):
					if (func_94(30549, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_024_M"));
					break;
				
				case joaat("MP_Heist4_Tee_002_M"):
				case joaat("MP_Heist4_Tee_002_F"):
					if (func_94(30550, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_002_M"));
					break;
				
				case joaat("MP_Heist4_Tee_001_M"):
				case joaat("MP_Heist4_Tee_001_F"):
					if (func_94(30551, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_001_M"));
					break;
				
				case joaat("MP_Heist4_Tee_000_M"):
				case joaat("MP_Heist4_Tee_000_F"):
					if (func_94(30552, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_000_M"));
					break;
				
				case joaat("MP_Heist4_Tee_007_M"):
				case joaat("MP_Heist4_Tee_007_F"):
					if (func_94(30553, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_007_M"));
					break;
				
				case joaat("MP_Heist4_Tee_008_M"):
				case joaat("MP_Heist4_Tee_008_F"):
					if (func_94(30554, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_008_M"));
					break;
				
				case joaat("MP_Heist4_Tee_009_M"):
				case joaat("MP_Heist4_Tee_009_F"):
					if (func_94(30555, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_009_M"));
					break;
				
				case joaat("MP_Heist4_Tee_010_M"):
				case joaat("MP_Heist4_Tee_010_F"):
					if (func_94(30556, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_010_M"));
					break;
				
				case joaat("MP_Heist4_Tee_011_M"):
				case joaat("MP_Heist4_Tee_011_F"):
					if (func_94(30557, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_011_M"));
					break;
				
				case joaat("MP_Heist4_Tee_012_M"):
				case joaat("MP_Heist4_Tee_012_F"):
					if (func_94(30524, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_012_M"));
					break;
				
				case joaat("MP_Heist4_Tee_013_M"):
				case joaat("MP_Heist4_Tee_013_F"):
					if (func_94(30525, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_013_M"));
					break;
				
				case joaat("MP_Heist4_Tee_014_M"):
				case joaat("MP_Heist4_Tee_014_F"):
					if (func_94(30526, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_014_M"));
					break;
				
				case joaat("MP_Heist4_Tee_015_M"):
				case joaat("MP_Heist4_Tee_015_F"):
					if (func_94(30527, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_015_M"));
					break;
				
				case joaat("MP_Heist4_Tee_016_M"):
				case joaat("MP_Heist4_Tee_016_F"):
					if (func_94(30528, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_016_M"));
					break;
				
				case joaat("MP_Heist4_Tee_017_M"):
				case joaat("MP_Heist4_Tee_017_F"):
					if (func_94(30529, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_017_M"));
					break;
				
				case joaat("MP_Heist4_Tee_018_M"):
				case joaat("MP_Heist4_Tee_018_F"):
					if (func_94(30530, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_018_M"));
					break;
				
				case joaat("MP_Heist4_Tee_019_M"):
				case joaat("MP_Heist4_Tee_019_F"):
					if (func_94(30531, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_019_M"));
					break;
				
				case joaat("MP_Heist4_Tee_033_M"):
				case joaat("MP_Heist4_Tee_033_F"):
					if (func_94(30532, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_033_M"));
					break;
				
				case joaat("MP_Heist4_Tee_045_M"):
				case joaat("MP_Heist4_Tee_045_F"):
					if (func_94(30570, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_045_M"));
					break;
				
				case joaat("MP_Heist4_Tee_046_M"):
				case joaat("MP_Heist4_Tee_046_F"):
					if (func_94(30571, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_046_M"));
					break;
				
				case joaat("MP_Heist4_Tee_048_M"):
				case joaat("MP_Heist4_Tee_048_F"):
					if (func_94(30568, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_048_M"));
					break;
				
				case joaat("MP_Heist4_Tee_047_M"):
				case joaat("MP_Heist4_Tee_047_F"):
					if (func_94(30569, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_047_M"));
					break;
				
				case joaat("MP_Heist4_Tee_049_M"):
				case joaat("MP_Heist4_Tee_049_F"):
					if (func_94(30634, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_049_M"));
					break;
				
				case joaat("MP_Heist4_Tee_051_M"):
				case joaat("MP_Heist4_Tee_051_F"):
					if (func_94(30635, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_051_M"));
					break;
				
				case joaat("MP_Heist4_Tee_053_M"):
				case joaat("MP_Heist4_Tee_053_F"):
					if (func_94(30636, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_053_M"));
					break;
				
				case joaat("MP_Heist4_Tee_054_M"):
				case joaat("MP_Heist4_Tee_054_F"):
					if (func_94(30637, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_054_M"));
					break;
				
				case joaat("MP_Heist4_Tee_055_M"):
				case joaat("MP_Heist4_Tee_055_F"):
					if (func_94(30703, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_055_M"));
					break;
				
				case joaat("MP_Heist4_Tee_057_M"):
				case joaat("MP_Heist4_Tee_057_F"):
					if (func_94(30704, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_057_M"));
					break;
				
				case joaat("MP_Heist4_Tee_059_M"):
				case joaat("MP_Heist4_Tee_059_F"):
					if (func_94(30700, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_059_M"));
					break;
				
				case joaat("MP_Heist4_Tee_061_M"):
				case joaat("MP_Heist4_Tee_061_F"):
					if (func_94(30701, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_061_M"));
					break;
				
				case joaat("MP_Heist4_Tee_063_M"):
				case joaat("MP_Heist4_Tee_063_F"):
					if (func_94(30702, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_063_M"));
					break;
				
				case joaat("MP_Heist4_Tee_065_M"):
				case joaat("MP_Heist4_Tee_065_F"):
					if (func_94(30699, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_065_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpsum_overlays"):
			switch (iParam1)
			{
				case -1265443416:
				case 676807987:
					if (func_94(30260, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -1265443416);
					break;
				
				case 1888753218:
				case 272160153:
					if (func_94(30261, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 1888753218);
					break;
				
				case -552467991:
				case 1593344440:
					if (func_94(30262, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -552467991);
					break;
				
				case -1655919948:
				case 546222390:
					if (func_94(30263, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -1655919948);
					break;
				
				case -917106601:
				case 1983375900:
					if (func_94(30264, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -917106601);
					break;
				
				case 1595446967:
				case -620589387:
					if (func_94(30265, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 1595446967);
					break;
				
				case -530593323:
				case 383923929:
					if (func_94(30266, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -530593323);
					break;
				
				case 561619447:
				case -1703406594:
					if (func_94(30267, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 561619447);
					break;
				
				case -1913656173:
				case -398286533:
					if (func_94(30268, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -1913656173);
					break;
				
				case -1766901922:
				case -80478106:
					if (func_94(30269, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -1766901922);
					break;
				
				case 2091781849:
				case 1835331655:
					if (func_94(30270, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 2091781849);
					break;
				
				case 1824588341:
				case -1650596870:
					if (func_94(30271, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 1824588341);
					break;
				
				case 242597641:
				case 1231926496:
					if (func_94(30272, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 242597641);
					break;
				
				case 566785691:
				case -1506181253:
					if (func_94(30273, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 566785691);
					break;
				
				case -2091312957:
				case -1737145605:
					if (func_94(30274, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -2091312957);
					break;
				
				case -2079214831:
				case 1673851512:
					if (func_94(30275, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -2079214831);
					break;
				
				case 1359156274:
				case 1023339598:
					if (func_94(30276, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 1359156274);
					break;
				
				case 1904247246:
				case -163738770:
					if (func_94(30277, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 1904247246);
					break;
				
				case -1351518396:
				case 1863218823:
					if (func_94(30278, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -1351518396);
					break;
				
				case -797874817:
				case 333966447:
					if (func_94(30279, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -797874817);
					break;
				
				case -385507297:
				case 1412626052:
					if (func_94(30280, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -385507297);
					break;
				
				case 2011910758:
				case -39100956:
					if (func_94(30281, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 2011910758);
					break;
				
				case -1953985443:
				case 1631533003:
					if (func_94(30282, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -1953985443);
					break;
				
				case -1124222352:
				case 1493430918:
					if (func_94(30283, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -1124222352);
					break;
				
				case -1806994767:
				case -196693334:
					if (func_94(30284, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -1806994767);
					break;
				
				case -1445761968:
				case 553507495:
					if (func_94(30285, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -1445761968);
					break;
				
				case -89186417:
				case 2003474700:
					if (func_94(30286, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -89186417);
					break;
				
				case -308083083:
				case 1121792228:
					if (func_94(30287, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -308083083);
					break;
				
				case 667714507:
				case -1424651669:
					if (func_94(30288, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 667714507);
					break;
				
				case -1610210252:
				case -1454164346:
					if (func_94(30289, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -1610210252);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpsum_overlays"):
			switch (iParam1)
			{
				case -417116499:
				case -779574408:
					if (func_94(28255, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -417116499);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpsum_overlays"):
			switch (iParam1)
			{
				case 1246110729:
				case -1361908447:
					if (func_87(89, -1) || func_94(30254, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 1246110729);
					break;
				
				case 461575135:
				case 1250161120:
					if (func_87(90, -1) || func_94(30255, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == 461575135);
					break;
				
				case -386163163:
				case 1288201657:
					if (func_87(92, -1) || func_94(30256, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -386163163);
					break;
				
				case -1414541879:
				case 111412152:
					if ((((func_87(89, -1) && func_87(90, -1)) && func_87(92, -1)) && func_87(91, -1)) || func_94(30257, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == -1414541879);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_001_F"):
				case joaat("mpHeist3_Tee_001_M"):
					if (func_87(78, -1) || func_94(28199, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_001_M"));
					break;
				
				case joaat("mpHeist3_Tee_000_F"):
				case joaat("mpHeist3_Tee_000_M"):
					if (((func_87(77, -1) && func_87(78, -1)) && func_89(92, -1) >= func_88(92, 5, 9)) || func_94(28200, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_000_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_007_F"):
				case joaat("mpHeist3_Tee_008_F"):
				case joaat("mpHeist3_Tee_009_F"):
				case joaat("mpHeist3_Tee_007_M"):
				case joaat("mpHeist3_Tee_008_M"):
				case joaat("mpHeist3_Tee_009_M"):
					if (((func_89(93, -1) >= func_88(93, 5, 9) && func_87(79, -1)) && func_87(80, -1)) || func_94(28204, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, ((iParam1 == joaat("mpHeist3_Tee_007_M") || iParam1 == joaat("mpHeist3_Tee_008_M")) || iParam1 == joaat("mpHeist3_Tee_009_M")));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_004_F"):
				case joaat("mpHeist3_Tee_004_M"):
					if (func_87(81, -1) || func_94(28206, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_004_M"));
					break;
				
				case joaat("mpHeist3_Tee_005_F"):
				case joaat("mpHeist3_Tee_005_M"):
					if (func_89(94, -1) >= func_88(94, 5, 9) || func_94(28207, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_005_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_006_F"):
				case joaat("mpHeist3_Tee_006_M"):
					if (((func_87(84, -1) && func_87(85, -1)) && func_89(97, -1) >= func_88(97, 5, 9)) || func_94(28212, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_006_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_002_F"):
				case joaat("mpHeist3_Tee_002_M"):
					if (func_94(28249, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_002_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_013_F"):
				case joaat("mpHeist3_Tee_013_M"):
					if (func_94(28183, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_013_M"));
					break;
				
				case joaat("mpHeist3_Tee_014_F"):
				case joaat("mpHeist3_Tee_014_M"):
					if (func_94(28182, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_014_M"));
					break;
				
				case joaat("mpHeist3_Tee_015_F"):
				case joaat("mpHeist3_Tee_015_M"):
					if (func_94(28184, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_015_M"));
					break;
				
				case joaat("mpHeist3_Tee_016_F"):
				case joaat("mpHeist3_Tee_016_M"):
					if (func_94(28181, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_016_M"));
					break;
				
				case joaat("mpHeist3_Tee_017_F"):
				case joaat("mpHeist3_Tee_017_M"):
					if (func_94(28178, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_017_M"));
					break;
				
				case joaat("mpHeist3_Tee_018_F"):
				case joaat("mpHeist3_Tee_018_M"):
					if (func_94(28177, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_018_M"));
					break;
				
				case joaat("mpHeist3_Tee_019_F"):
				case joaat("mpHeist3_Tee_019_M"):
					if (func_94(28176, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_019_M"));
					break;
				
				case joaat("mpHeist3_Tee_020_F"):
				case joaat("mpHeist3_Tee_020_M"):
					if (func_94(28180, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_020_M"));
					break;
				
				case joaat("mpHeist3_Tee_021_F"):
				case joaat("mpHeist3_Tee_021_M"):
					if (func_94(28179, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_021_M"));
					break;
				
				case joaat("mpHeist3_Tee_022_F"):
				case joaat("mpHeist3_Tee_022_M"):
					if (((((((((func_94(28176, -1) && func_94(28177, -1)) && func_94(28178, -1)) && func_94(28179, -1)) && func_94(28180, -1)) && func_94(28181, -1)) && func_94(28182, -1)) && func_94(28183, -1)) && func_94(28184, -1)) || func_94(28221, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_022_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_023_F"):
				case joaat("mpHeist3_Tee_023_M"):
					if (func_94(28191, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_023_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_011_F"):
				case joaat("mpHeist3_Tee_011_M"):
					if (func_94(28190, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_011_M"));
					break;
				
				case joaat("mpHeist3_Tee_012_F"):
				case joaat("mpHeist3_Tee_012_M"):
					if (func_94(28189, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_012_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_003_F"):
				case joaat("mpHeist3_Tee_003_M"):
					if (func_83(0, 1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_003_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_010_F"):
				case joaat("mpHeist3_Tee_010_M"):
					if ((((((((((((((((((func_87(77, -1) && func_87(78, -1)) && func_89(92, -1) >= func_88(92, 5, 9)) && func_89(93, -1) >= func_88(93, 5, 9)) && func_87(79, -1)) && func_87(80, -1)) && func_87(81, -1)) && func_89(94, -1) >= func_88(94, 5, 9)) && func_89(95, -1) >= func_88(95, 5, 9)) && func_87(82, -1)) && func_87(83, -1)) && func_89(96, -1) >= func_88(96, 5, 9)) && func_87(84, -1)) && func_87(85, -1)) && func_89(97, -1) >= func_88(97, 5, 9)) && func_87(86, -1)) && func_87(87, -1)) && func_87(88, -1)) || func_94(28222, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_010_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpVinewood_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Vinewood_Tat_023_M"):
				case joaat("MP_Vinewood_Tat_023_F"):
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_023_M"));
					break;
				
				case joaat("MP_Vinewood_Tat_030_M"):
				case joaat("MP_Vinewood_Tat_030_F"):
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_030_M"));
					break;
				
				case joaat("CasinoTop_M_21"):
				case joaat("CasinoTop_F_21"):
					if (func_94(27109, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_21"));
					break;
				
				case joaat("CasinoTop_M_23"):
				case joaat("CasinoTop_F_23"):
					if (func_94(27110, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_23"));
					break;
				
				case joaat("CasinoTop_M_2"):
				case joaat("CasinoTop_F_2"):
					if (func_94(27111, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_2"));
					break;
				
				case joaat("CasinoTop_M_4"):
				case joaat("CasinoTop_F_4"):
					if (func_94(27112, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_4"));
					break;
				
				case joaat("CasinoTop_M_6"):
				case joaat("CasinoTop_F_6"):
					if (func_94(27113, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_6"));
					break;
				
				case joaat("CasinoTop_M_10"):
				case joaat("CasinoTop_F_10"):
					if (func_94(27114, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_10"));
					break;
				
				case joaat("CasinoTop_M_22"):
				case joaat("CasinoTop_F_22"):
					if (func_94(27115, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_22"));
					break;
			}
			break;
		
		case joaat("mpChristmas2018_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Christmas2018_Tee_000_M"):
				case joaat("MP_Christmas2018_Tee_000_F"):
					if (func_94(25032, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_000_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_001_M"):
				case joaat("MP_Christmas2018_Tee_001_F"):
					if (func_94(25033, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_001_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_002_M"):
				case joaat("MP_Christmas2018_Tee_002_F"):
					if (func_94(25034, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_002_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_003_M"):
				case joaat("MP_Christmas2018_Tee_003_F"):
					if (func_94(25035, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_003_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_004_M"):
				case joaat("MP_Christmas2018_Tee_004_F"):
					if (func_94(25036, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_004_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_005_M"):
				case joaat("MP_Christmas2018_Tee_005_F"):
					if (func_94(25037, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_005_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_006_M"):
				case joaat("MP_Christmas2018_Tee_006_F"):
					if (func_94(25038, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_006_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_007_M"):
				case joaat("MP_Christmas2018_Tee_007_F"):
					if (func_94(25039, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_007_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_008_M"):
				case joaat("MP_Christmas2018_Tee_008_F"):
					if (func_94(25040, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_008_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_009_M"):
				case joaat("MP_Christmas2018_Tee_009_F"):
					if (func_94(25041, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_009_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_010_M"):
				case joaat("MP_Christmas2018_Tee_010_F"):
					if (func_94(25042, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_010_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_011_M"):
				case joaat("MP_Christmas2018_Tee_011_F"):
					if (func_94(25043, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_011_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_012_M"):
				case joaat("MP_Christmas2018_Tee_012_F"):
					if (func_94(25044, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_012_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_013_M"):
				case joaat("MP_Christmas2018_Tee_013_F"):
					if (func_94(25045, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_013_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_014_M"):
				case joaat("MP_Christmas2018_Tee_014_F"):
					if (func_94(25046, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_014_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_015_M"):
				case joaat("MP_Christmas2018_Tee_015_F"):
					if (func_94(25047, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_015_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_016_M"):
				case joaat("MP_Christmas2018_Tee_016_F"):
					if (func_94(25048, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_016_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_017_M"):
				case joaat("MP_Christmas2018_Tee_017_F"):
					if (func_94(25049, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_017_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_018_M"):
				case joaat("MP_Christmas2018_Tee_018_F"):
					if (func_94(25050, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_018_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_019_M"):
				case joaat("MP_Christmas2018_Tee_019_F"):
					if (func_94(25051, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_019_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_020_M"):
				case joaat("MP_Christmas2018_Tee_020_F"):
					if (func_94(25052, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_020_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_021_M"):
				case joaat("MP_Christmas2018_Tee_021_F"):
					if (func_94(25053, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_021_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_022_M"):
				case joaat("MP_Christmas2018_Tee_022_F"):
					if (func_94(25054, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_022_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_023_M"):
				case joaat("MP_Christmas2018_Tee_023_F"):
					if (func_94(25055, -1))
					{
						return 0;
					}
					if (func_94(27077, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_023_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_024_M"):
				case joaat("MP_Christmas2018_Tee_024_F"):
					if (func_94(25056, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_024_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_025_M"):
				case joaat("MP_Christmas2018_Tee_025_F"):
					if (func_94(25057, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_025_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_026_M"):
				case joaat("MP_Christmas2018_Tee_026_F"):
					if (func_94(25058, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_026_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_027_M"):
				case joaat("MP_Christmas2018_Tee_027_F"):
					if (func_94(25059, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_027_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_028_M"):
				case joaat("MP_Christmas2018_Tee_028_F"):
					if (func_94(25060, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_028_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_029_M"):
				case joaat("MP_Christmas2018_Tee_029_F"):
					if (func_94(25061, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_029_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_030_M"):
				case joaat("MP_Christmas2018_Tee_030_F"):
					if (func_94(25062, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_030_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_031_M"):
				case joaat("MP_Christmas2018_Tee_031_F"):
					if (func_94(25063, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_031_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_032_M"):
				case joaat("MP_Christmas2018_Tee_032_F"):
					if (func_94(25064, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_032_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_033_M"):
				case joaat("MP_Christmas2018_Tee_033_F"):
					if (func_94(25065, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_033_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_034_M"):
				case joaat("MP_Christmas2018_Tee_034_F"):
					if (func_94(25066, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_034_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_035_M"):
				case joaat("MP_Christmas2018_Tee_035_F"):
					if (func_94(25067, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_035_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_036_M"):
				case joaat("MP_Christmas2018_Tee_036_F"):
					if (func_94(25068, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_036_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_037_M"):
				case joaat("MP_Christmas2018_Tee_037_F"):
					if (func_94(25069, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_037_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_038_M"):
				case joaat("MP_Christmas2018_Tee_038_F"):
					if (func_94(25070, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_038_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_039_M"):
				case joaat("MP_Christmas2018_Tee_039_F"):
					if (func_94(25071, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_039_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_040_M"):
				case joaat("MP_Christmas2018_Tee_040_F"):
					if (func_94(25072, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_040_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_041_M"):
				case joaat("MP_Christmas2018_Tee_041_F"):
					if (func_94(25073, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_041_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_042_M"):
				case joaat("MP_Christmas2018_Tee_042_F"):
					if (func_94(25074, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_042_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_043_M"):
				case joaat("MP_Christmas2018_Tee_043_F"):
					if (func_94(25075, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_043_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_044_M"):
				case joaat("MP_Christmas2018_Tee_044_F"):
					if (func_94(25076, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_044_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_045_M"):
				case joaat("MP_Christmas2018_Tee_045_F"):
					if (func_94(25077, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_045_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_046_M"):
				case joaat("MP_Christmas2018_Tee_046_F"):
					if (func_94(25078, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_046_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_047_M"):
				case joaat("MP_Christmas2018_Tee_047_F"):
					if (func_94(25079, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_047_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_048_M"):
				case joaat("MP_Christmas2018_Tee_048_F"):
					if (func_94(25080, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_048_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_049_M"):
				case joaat("MP_Christmas2018_Tee_049_F"):
					if (func_94(25081, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_049_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_050_M"):
				case joaat("MP_Christmas2018_Tee_050_F"):
					if (func_94(25082, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_050_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_051_M"):
				case joaat("MP_Christmas2018_Tee_051_F"):
					if (func_94(25083, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_051_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_052_M"):
				case joaat("MP_Christmas2018_Tee_052_F"):
					if (func_94(25084, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_052_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_053_M"):
				case joaat("MP_Christmas2018_Tee_053_F"):
					if (func_94(25085, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_053_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_054_M"):
				case joaat("MP_Christmas2018_Tee_054_F"):
					if (func_94(25086, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_054_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_055_M"):
				case joaat("MP_Christmas2018_Tee_055_F"):
					if (func_94(25087, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_055_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_056_M"):
				case joaat("MP_Christmas2018_Tee_056_F"):
					if (func_94(25088, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_056_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_057_M"):
				case joaat("MP_Christmas2018_Tee_057_F"):
					if (func_94(25089, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_057_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_058_M"):
				case joaat("MP_Christmas2018_Tee_058_F"):
					if (func_94(25090, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_058_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_059_M"):
				case joaat("MP_Christmas2018_Tee_059_F"):
					if (func_94(25091, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_059_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_060_M"):
				case joaat("MP_Christmas2018_Tee_060_F"):
					if (func_94(25092, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_060_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_061_M"):
				case joaat("MP_Christmas2018_Tee_061_F"):
					if (func_94(25093, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_061_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_062_M"):
				case joaat("MP_Christmas2018_Tee_062_F"):
					if (func_94(25094, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_062_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_063_M"):
				case joaat("MP_Christmas2018_Tee_063_F"):
					if (func_94(25095, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_063_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_064_M"):
				case joaat("MP_Christmas2018_Tee_064_F"):
					if (func_94(25096, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_064_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_065_M"):
				case joaat("MP_Christmas2018_Tee_065_F"):
					if (func_94(25097, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_065_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_066_M"):
				case joaat("MP_Christmas2018_Tee_066_F"):
					if (func_94(25098, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_066_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_067_M"):
				case joaat("MP_Christmas2018_Tee_067_F"):
					if (func_94(25099, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_067_M"));
					break;
				
				case joaat("MP_Christmas2018_Tat_000_M"):
				case joaat("MP_Christmas2018_Tat_000_F"):
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tat_000_M"));
					break;
			}
			break;
		
		case joaat("mpBattle_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_000_M"):
				case joaat("MP_Battle_Clothing_000_F"):
					if (func_94(22108, -1) || func_94(25006, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_000_M"));
					break;
				
				case joaat("MP_Battle_Clothing_002_M"):
				case joaat("MP_Battle_Clothing_002_F"):
					if (func_94(9481, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_002_M"));
					break;
				
				case joaat("MP_Battle_Clothing_003_M"):
				case joaat("MP_Battle_Clothing_003_F"):
					if (func_94(9470, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_003_M"));
					break;
				
				case joaat("MP_Battle_Clothing_004_M"):
				case joaat("MP_Battle_Clothing_004_F"):
					if (func_94(9475, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_004_M"));
					break;
				
				case joaat("MP_Battle_Clothing_005_M"):
				case joaat("MP_Battle_Clothing_005_F"):
					if (func_94(9472, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_005_M"));
					break;
				
				case joaat("MP_Battle_Clothing_006_M"):
				case joaat("MP_Battle_Clothing_006_F"):
					if (func_94(9465, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_006_M"));
					break;
				
				case joaat("MP_Battle_Clothing_007_M"):
				case joaat("MP_Battle_Clothing_007_F"):
					if (func_94(9463, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_007_M"));
					break;
				
				case joaat("MP_Battle_Clothing_008_M"):
				case joaat("MP_Battle_Clothing_008_F"):
					if (func_94(9464, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_008_M"));
					break;
				
				case joaat("MP_Battle_Clothing_009_M"):
				case joaat("MP_Battle_Clothing_009_F"):
					if (func_94(9468, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_009_M"));
					break;
				
				case joaat("MP_Battle_Clothing_010_M"):
				case joaat("MP_Battle_Clothing_010_F"):
					if (func_94(9469, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_010_M"));
					break;
				
				case joaat("MP_Battle_Clothing_011_M"):
				case joaat("MP_Battle_Clothing_011_F"):
					if (func_94(9479, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_011_M"));
					break;
				
				case joaat("MP_Battle_Clothing_012_M"):
				case joaat("MP_Battle_Clothing_012_F"):
					if (func_94(9473, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_012_M"));
					break;
				
				case joaat("MP_Battle_Clothing_013_M"):
				case joaat("MP_Battle_Clothing_013_F"):
					if (func_94(9480, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_013_M"));
					break;
				
				case joaat("MP_Battle_Clothing_014_M"):
				case joaat("MP_Battle_Clothing_014_F"):
					if (func_94(9476, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_014_M"));
					break;
				
				case joaat("MP_Battle_Clothing_015_M"):
				case joaat("MP_Battle_Clothing_015_F"):
					if (func_94(9477, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_015_M"));
					break;
				
				case joaat("MP_Battle_Clothing_016_M"):
				case joaat("MP_Battle_Clothing_016_F"):
					if (func_94(9471, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_016_M"));
					break;
				
				case joaat("MP_Battle_Clothing_017_M"):
				case joaat("MP_Battle_Clothing_017_F"):
					if (func_94(9474, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_017_M"));
					break;
				
				case joaat("MP_Battle_Clothing_018_M"):
				case joaat("MP_Battle_Clothing_018_F"):
					if (func_94(9467, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_018_M"));
					break;
				
				case joaat("MP_Battle_Clothing_019_M"):
				case joaat("MP_Battle_Clothing_019_F"):
					if (func_94(9478, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_019_M"));
					break;
				
				case joaat("MP_Battle_Clothing_020_M"):
				case joaat("MP_Battle_Clothing_020_F"):
					if (func_94(9462, -1))
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Battle_Clothing_020_M"))
					{
						if (func_94(27085, -1))
						{
							return 0;
						}
					}
					else if (func_94(27084, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_020_M"));
					break;
				
				case joaat("MP_Battle_Clothing_021_M"):
				case joaat("MP_Battle_Clothing_021_F"):
					if (func_94(9466, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_021_M"));
					break;
				
				case joaat("MP_Battle_Clothing_022_M"):
				case joaat("MP_Battle_Clothing_022_F"):
					if (func_94(22126, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_022_M"));
					break;
				
				case joaat("MP_Battle_Clothing_023_M"):
				case joaat("MP_Battle_Clothing_023_F"):
					if (func_94(22127, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_023_M"));
					break;
				
				case joaat("MP_Battle_Clothing_024_M"):
				case joaat("MP_Battle_Clothing_024_F"):
					if (func_94(22128, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_024_M"));
					break;
				
				case joaat("MP_Battle_Clothing_025_M"):
				case joaat("MP_Battle_Clothing_025_F"):
					if (func_94(22124, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_025_M"));
					break;
				
				case joaat("MP_Battle_Clothing_026_M"):
				case joaat("MP_Battle_Clothing_026_F"):
					if (func_94(22130, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_026_M"));
					break;
				
				case joaat("MP_Battle_Clothing_027_M"):
				case joaat("MP_Battle_Clothing_027_F"):
					if (func_94(22125, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_027_M"));
					break;
				
				case joaat("MP_Battle_Clothing_028_M"):
				case joaat("MP_Battle_Clothing_028_F"):
					if (func_94(22129, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_028_M"));
					break;
				
				case joaat("MP_Battle_Clothing_029_M"):
				case joaat("MP_Battle_Clothing_029_F"):
					if (func_94(22131, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_029_M"));
					break;
				
				case joaat("MP_Battle_Clothing_030_M"):
				case joaat("MP_Battle_Clothing_030_F"):
					if (func_94(22132, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_030_M"));
					break;
			}
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_031_M"):
				case joaat("MP_Battle_Clothing_031_F"):
					if (func_94(22147, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_031_M"));
					break;
				
				case joaat("MP_Battle_Clothing_032_M"):
				case joaat("MP_Battle_Clothing_032_F"):
					if (func_94(22148, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_032_M"));
					break;
				
				case joaat("MP_Battle_Clothing_033_M"):
				case joaat("MP_Battle_Clothing_033_F"):
					if (func_94(22149, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_033_M"));
					break;
				
				case joaat("MP_Battle_Clothing_034_M"):
				case joaat("MP_Battle_Clothing_034_F"):
					if (func_94(22150, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_034_M"));
					break;
				
				case joaat("MP_Battle_Clothing_035_M"):
				case joaat("MP_Battle_Clothing_035_F"):
					if (func_94(22151, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_035_M"));
					break;
				
				case joaat("MP_Battle_Clothing_036_M"):
				case joaat("MP_Battle_Clothing_036_F"):
					if (func_94(22152, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_036_M"));
					break;
				
				case joaat("MP_Battle_Clothing_037_M"):
				case joaat("MP_Battle_Clothing_037_F"):
					if (func_94(22153, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_037_M"));
					break;
				
				case joaat("MP_Battle_Clothing_038_M"):
				case joaat("MP_Battle_Clothing_038_F"):
					if (func_94(22154, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_038_M"));
					break;
				
				case joaat("MP_Battle_Clothing_039_M"):
				case joaat("MP_Battle_Clothing_039_F"):
					if (func_94(22155, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_039_M"));
					break;
				
				case joaat("MP_Battle_Clothing_040_M"):
				case joaat("MP_Battle_Clothing_040_F"):
					if (func_94(22156, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_040_M"));
					break;
				
				case joaat("MP_Battle_Clothing_041_M"):
				case joaat("MP_Battle_Clothing_041_F"):
					if (func_94(22157, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_041_M"));
					break;
				
				case joaat("MP_Battle_Clothing_042_M"):
				case joaat("MP_Battle_Clothing_042_F"):
					if (func_94(22158, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_042_M"));
					break;
				
				case joaat("MP_Battle_Clothing_043_M"):
				case joaat("MP_Battle_Clothing_043_F"):
					if (func_94(22159, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_043_M"));
					break;
				
				case joaat("MP_Battle_Clothing_044_M"):
				case joaat("MP_Battle_Clothing_044_F"):
					if (func_94(22160, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_044_M"));
					break;
				
				case joaat("MP_Battle_Clothing_045_M"):
				case joaat("MP_Battle_Clothing_045_F"):
					if (func_94(22161, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_045_M"));
					break;
				
				case joaat("MP_Battle_Clothing_046_M"):
				case joaat("MP_Battle_Clothing_046_F"):
					if (func_94(22162, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_046_M"));
					break;
				
				case joaat("MP_Battle_Clothing_047_M"):
				case joaat("MP_Battle_Clothing_047_F"):
					if (func_94(22163, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_047_M"));
					break;
				
				case joaat("MP_Battle_Clothing_048_M"):
				case joaat("MP_Battle_Clothing_048_F"):
					if (func_94(22164, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_048_M"));
					break;
				
				case joaat("MP_Battle_Clothing_049_M"):
				case joaat("MP_Battle_Clothing_049_F"):
					if (func_94(22165, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_049_M"));
					break;
				
				case joaat("MP_Battle_Clothing_050_M"):
				case joaat("MP_Battle_Clothing_050_F"):
					if (func_94(22166, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_050_M"));
					break;
				
				case joaat("MP_Battle_Clothing_051_M"):
				case joaat("MP_Battle_Clothing_051_F"):
					if (func_94(22167, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_051_M"));
					break;
				
				case joaat("MP_Battle_Clothing_052_M"):
				case joaat("MP_Battle_Clothing_052_F"):
					if (func_94(22168, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_052_M"));
					break;
				
				case joaat("MP_Battle_Clothing_053_M"):
				case joaat("MP_Battle_Clothing_053_F"):
					if (func_94(22169, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_053_M"));
					break;
				
				case joaat("MP_Battle_Clothing_054_M"):
				case joaat("MP_Battle_Clothing_054_F"):
					if (func_94(22170, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_054_M"));
					break;
				
				case joaat("MP_Battle_Clothing_055_M"):
				case joaat("MP_Battle_Clothing_055_F"):
					if (func_94(22171, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_055_M"));
					break;
				
				case joaat("MP_Battle_Clothing_056_M"):
				case joaat("MP_Battle_Clothing_056_F"):
					if (func_94(22172, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_056_M"));
					break;
				
				case joaat("MP_Battle_Clothing_057_M"):
				case joaat("MP_Battle_Clothing_057_F"):
					if (func_94(22173, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_057_M"));
					break;
				
				case joaat("MP_Battle_Clothing_058_M"):
				case joaat("MP_Battle_Clothing_058_F"):
					if (func_94(22174, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_058_M"));
					break;
				
				case joaat("MP_Battle_Clothing_059_M"):
				case joaat("MP_Battle_Clothing_059_F"):
					if (func_94(22175, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_059_M"));
					break;
				
				case joaat("MP_Battle_Clothing_060_M"):
				case joaat("MP_Battle_Clothing_060_F"):
					if (func_94(22176, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_060_M"));
					break;
				
				case joaat("MP_Battle_Clothing_061_M"):
				case joaat("MP_Battle_Clothing_061_F"):
					if (func_94(22177, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_061_M"));
					break;
				
				case joaat("MP_Battle_Clothing_062_M"):
				case joaat("MP_Battle_Clothing_062_F"):
					if (func_94(22178, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_062_M"));
					break;
			}
			break;
		
		case joaat("mpGunrunning_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_019_M"):
				case joaat("MP_Gunrunning_Award_025_F"):
					if (func_94(15426, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_019_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_020_M"):
				case joaat("MP_Gunrunning_Award_020_F"):
					if (func_94(15422, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_020_M_ALT"):
				case joaat("MP_Gunrunning_Award_020_F_ALT"):
					if (func_94(15423, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M_ALT"));
					break;
				
				case joaat("MP_Gunrunning_Award_021_M"):
				case joaat("MP_Gunrunning_Award_021_F"):
					if (func_94(15421, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_021_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_022_M"):
				case joaat("MP_Gunrunning_Award_026_F"):
					if (func_94(15427, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_022_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_023_M"):
				case joaat("MP_Gunrunning_Award_023_F"):
					if (func_94(15419, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_023_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_024_M"):
				case joaat("MP_Gunrunning_Award_024_F"):
					if (func_94(15420, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_024_M"));
					break;
			}
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_000_M"):
				case joaat("MP_Gunrunning_Award_000_F"):
					if (func_94(15394, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_000_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_001_M"):
				case joaat("MP_Gunrunning_Award_001_F"):
					if (func_16(209, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_001_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_002_M"):
				case joaat("MP_Gunrunning_Award_002_F"):
					if (func_94(15406, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_002_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_003_M"):
				case joaat("MP_Gunrunning_Award_003_F"):
					if (func_94(15395, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_003_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_004_M"):
				case joaat("MP_Gunrunning_Award_004_F"):
					if (func_16(209, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_004_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_005_M"):
				case joaat("MP_Gunrunning_Award_005_F"):
					if (func_94(15410, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_005_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_006_M"):
				case joaat("MP_Gunrunning_Award_006_F"):
					if (func_94(15407, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_006_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_007_M"):
				case joaat("MP_Gunrunning_Award_007_F"):
					if (func_16(209, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_007_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_008_M"):
				case joaat("MP_Gunrunning_Award_008_F"):
					if (func_16(209, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_008_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_009_M"):
				case joaat("MP_Gunrunning_Award_009_F"):
					if (func_94(15414, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_009_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_010_M"):
				case joaat("MP_Gunrunning_Award_010_F"):
					if (func_94(15415, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_010_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_011_M"):
				case joaat("MP_Gunrunning_Award_011_F"):
					if (func_94(15399, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_011_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_012_M"):
				case joaat("MP_Gunrunning_Award_012_F"):
					if (func_94(15404, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_012_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_013_M"):
				case joaat("MP_Gunrunning_Award_013_F"):
					if (func_16(209, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_013_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_014_M"):
				case joaat("MP_Gunrunning_Award_014_F"):
					if (func_94(15392, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_014_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_015_M"):
				case joaat("MP_Gunrunning_Award_015_F"):
					if (func_94(15390, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_015_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_016_M"):
				case joaat("MP_Gunrunning_Award_016_F"):
					if (func_94(15402, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_016_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_017_M"):
				case joaat("MP_Gunrunning_Award_017_F"):
					if (func_94(15416, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_017_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_018_M"):
				case joaat("MP_Gunrunning_Award_018_F"):
					if (func_16(209, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_018_M"));
					break;
			}
			break;
		
		case joaat("mpBiker_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Biker_Tee_022_M"):
				case joaat("MP_Biker_Tee_022_F"):
					if (func_94(9366, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_022_M"));
					break;
				
				case joaat("MP_Biker_Tee_023_M"):
				case joaat("MP_Biker_Tee_023_F"):
					if (func_94(9367, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_023_M"));
					break;
				
				case joaat("MP_Biker_Tee_024_M"):
				case joaat("MP_Biker_Tee_024_F"):
					if (func_94(9369, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_024_M"));
					break;
				
				case joaat("MP_Biker_Tee_025_M"):
				case joaat("MP_Biker_Tee_025_F"):
					if (func_94(9368, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_025_M"));
					break;
				
				case joaat("MP_Biker_Tee_047_M"):
				case joaat("MP_Biker_Tee_047_F"):
					if (func_94(9365, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_047_M"));
					break;
				
				case joaat("MP_Biker_Tee_048_M"):
				case joaat("MP_Biker_Tee_048_F"):
					if (func_94(9364, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_048_M"));
					break;
				
				case joaat("MP_Biker_Tee_049_M"):
				case joaat("MP_Biker_Tee_049_F"):
					if (func_94(27078, -1))
					{
						return 0;
					}
					if (func_94(9363, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_049_M"));
					break;
				
				case joaat("MP_Biker_Tee_050_M"):
				case joaat("MP_Biker_Tee_050_F"):
					if (func_94(9362, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_050_M"));
					break;
				
				case joaat("MP_Biker_Tee_051_M"):
				case joaat("MP_Biker_Tee_051_F"):
					if (func_94(9370, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_051_M"));
					break;
				
				case joaat("MP_Biker_Tee_052_M"):
				case joaat("MP_Biker_Tee_052_F"):
					if (func_94(9371, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_052_M"));
					break;
				
				case joaat("MP_Biker_Tee_053_M"):
				case joaat("MP_Biker_Tee_053_F"):
					if (func_94(9372, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_053_M"));
					break;
				
				case joaat("MP_Biker_Tee_054_M"):
				case joaat("MP_Biker_Tee_054_F"):
					if (func_94(9373, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_054_M"));
					break;
				
				case joaat("MP_Biker_Tee_055_M"):
				case joaat("MP_Biker_Tee_055_F"):
					if (func_94(9374, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_055_M"));
					break;
				
				case joaat("MP_Biker_Award_000_M"):
				case joaat("MP_Biker_Award_000_F"):
					if (func_94(9384, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_000_M"));
					break;
				
				case joaat("MP_Biker_Award_001_M"):
				case joaat("MP_Biker_Award_001_F"):
					if (func_94(9385, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_001_M"));
					break;
			}
			break;
		
		case joaat("mpExecutive_overlays"):
			switch (iParam1)
			{
				case joaat("MP_exec_prizes_015_M"):
				case joaat("MP_exec_prizes_015_F"):
					if (func_94(7551, -1) || func_129(3792, -1, 0) >= Global_262145.f_16768)
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_015_M"));
					break;
				
				case joaat("MP_exec_prizes_000_M"):
				case joaat("MP_exec_prizes_000_F"):
					if (func_94(7467, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_000_M"));
					break;
				
				case joaat("MP_exec_prizes_001_M"):
				case joaat("MP_exec_prizes_001_F"):
					if (func_94(7468, -1))
					{
						return 0;
					}
					if (iParam1 == joaat("MP_exec_prizes_001_M"))
					{
						if (func_94(27083, -1))
						{
							return 0;
						}
					}
					else if (func_94(27086, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_001_M"));
					break;
				
				case joaat("MP_exec_prizes_002_M"):
				case joaat("MP_exec_prizes_002_F"):
					if (func_94(7469, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_002_M"));
					break;
				
				case joaat("MP_exec_prizes_003_M"):
				case joaat("MP_exec_prizes_003_F"):
					if (func_94(7470, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_003_M"));
					break;
				
				case joaat("MP_exec_prizes_004_M"):
				case joaat("MP_exec_prizes_004_F"):
					if (func_94(7471, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_004_M"));
					break;
				
				case joaat("MP_exec_prizes_005_M"):
				case joaat("MP_exec_prizes_005_F"):
					if (func_94(7472, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_005_M"));
					break;
				
				case joaat("MP_exec_prizes_006_M"):
				case joaat("MP_exec_prizes_006_F"):
					if (func_94(7473, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_006_M"));
					break;
				
				case joaat("MP_exec_prizes_007_M"):
				case joaat("MP_exec_prizes_007_F"):
					if (func_94(7474, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_007_M"));
					break;
				
				case joaat("MP_exec_prizes_008_M"):
				case joaat("MP_exec_prizes_008_F"):
					if (func_94(7475, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_008_M"));
					break;
				
				case joaat("MP_exec_prizes_009_M"):
				case joaat("MP_exec_prizes_009_F"):
					if (func_94(7476, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_009_M"));
					break;
				
				case joaat("MP_exec_prizes_010_M"):
				case joaat("MP_exec_prizes_010_F"):
					if (func_94(7477, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_010_M"));
					break;
				
				case joaat("MP_exec_prizes_011_M"):
				case joaat("MP_exec_prizes_011_F"):
					if (func_94(7478, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_011_M"));
					break;
				
				case joaat("MP_exec_prizes_012_M"):
				case joaat("MP_exec_prizes_012_F"):
					if (func_94(7479, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_012_M"));
					break;
				
				case joaat("MP_exec_prizes_013_M"):
				case joaat("MP_exec_prizes_013_F"):
					if (func_94(7480, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_013_M"));
					break;
				
				case joaat("MP_exec_prizes_014_M"):
				case joaat("MP_exec_prizes_014_F"):
					if (func_94(7481, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_014_M"));
					break;
			}
			break;
		
		case joaat("mpHalloween_overlays"):
			switch (iParam1)
			{
				case joaat("HW_Tee_000_F"):
				case joaat("HW_Tee_000_M"):
					if (func_94(4260, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("HW_Tee_000_M"));
					break;
				
				case joaat("HW_Tee_001_F"):
				case joaat("HW_Tee_001_M"):
					if (func_94(4257, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("HW_Tee_001_M"));
					break;
				
				case joaat("HW_Tee_002_F"):
				case joaat("HW_Tee_002_M"):
					if (func_94(4269, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("HW_Tee_002_M"));
					break;
				
				case joaat("HW_Tee_003_F"):
				case joaat("HW_Tee_003_M"):
					if (func_94(4261, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("HW_Tee_003_M"));
					break;
				
				case joaat("HW_Tee_004_F"):
				case joaat("HW_Tee_004_M"):
					if (func_94(4259, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("HW_Tee_004_M"));
					break;
				
				case joaat("HW_Tee_005_F"):
				case joaat("HW_Tee_005_M"):
					if (func_94(4268, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("HW_Tee_005_M"));
					break;
				
				case joaat("HW_Tee_006_F"):
				case joaat("HW_Tee_006_M"):
					if (func_94(4265, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("HW_Tee_006_M"));
					break;
				
				case joaat("HW_Tee_007_F"):
				case joaat("HW_Tee_007_M"):
					if (func_94(4258, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("HW_Tee_007_M"));
					break;
				
				case joaat("HW_Tee_008_F"):
				case joaat("HW_Tee_008_M"):
					if (func_94(4264, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("HW_Tee_008_M"));
					break;
				
				case joaat("HW_Tee_009_F"):
				case joaat("HW_Tee_009_M"):
					if (func_94(4267, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("HW_Tee_009_M"));
					break;
				
				case joaat("HW_Tee_010_F"):
				case joaat("HW_Tee_010_M"):
					if (func_94(4262, -1))
					{
						return 0;
					}
					if (func_94(27079, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("HW_Tee_010_M"));
					break;
				
				case joaat("HW_Tee_011_F"):
				case joaat("HW_Tee_011_M"):
					if (func_94(4263, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("HW_Tee_011_M"));
					break;
				
				case joaat("HW_Tee_012_F"):
				case joaat("HW_Tee_012_M"):
					if (func_94(4266, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("HW_Tee_012_M"));
					break;
			}
			break;
		
		case joaat("mpLowrider_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Bennys_000_M"):
				case joaat("MP_Bennys_001_M"):
					if (func_129(2934, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Bennys_001_M"))
					{
						if (func_94(27068, -1))
						{
							return 0;
						}
					}
					return !func_90(iParam2, iParam1, 1);
					break;
				
				case joaat("MP_Bennys_000_F"):
				case joaat("MP_Bennys_001_F"):
					if (func_129(2934, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Bennys_001_F"))
					{
						if (func_94(27068, -1))
						{
							return 0;
						}
					}
					return !func_90(iParam2, iParam1, 0);
					break;
			}
			break;
		
		case joaat("mpxmas_604490_overlays"):
			switch (iParam1)
			{
				case joaat("MP_IHeartLC_000_M"):
				case joaat("MP_IHeartLC_001_F"):
					if (func_94(113, -1))
					{
						return 0;
					}
					return !func_90(iParam2, iParam1, iParam1 == joaat("MP_IHeartLC_000_M"));
					break;
			}
			break;
		
		case joaat("mpHeist_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Award_M_Tshirt_004"):
				case joaat("MP_Award_M_Tshirt_005"):
				case joaat("MP_Award_M_Tshirt_006"):
				case joaat("MP_Award_M_Tshirt_007"):
				case joaat("MP_Award_M_Tshirt_008"):
				case joaat("MP_Award_M_Tshirt_009"):
				case joaat("MP_Award_M_Tshirt_010"):
				case joaat("MP_Award_M_Tshirt_011"):
				case joaat("MP_Award_M_Tshirt_012"):
				case joaat("MP_Award_M_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_M_Tshirt_004"))
					{
						if (func_94(27082, -1))
						{
							return 0;
						}
						if (func_94(3770, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_005"))
					{
						if (func_94(3771, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_006"))
					{
						if (func_94(3772, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_007"))
					{
						if (func_94(3773, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_008"))
					{
						if (func_94(3774, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_009"))
					{
						if (func_94(3775, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_010"))
					{
						if (func_94(3776, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_011"))
					{
						if (func_94(3777, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_012"))
					{
						if (func_94(3778, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_013"))
					{
						if (func_94(3779, -1) || func_94(27084, -1))
						{
							return 0;
						}
					}
					return !func_90(iParam2, iParam1, 1);
					break;
				
				case joaat("MP_Award_F_Tshirt_004"):
				case joaat("MP_Award_F_Tshirt_005"):
				case joaat("MP_Award_F_Tshirt_006"):
				case joaat("MP_Award_F_Tshirt_007"):
				case joaat("MP_Award_F_Tshirt_008"):
				case joaat("MP_Award_F_Tshirt_009"):
				case joaat("MP_Award_F_Tshirt_010"):
				case joaat("MP_Award_F_Tshirt_011"):
				case joaat("MP_Award_F_Tshirt_012"):
				case joaat("MP_Award_F_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_F_Tshirt_004"))
					{
						if (func_94(3770, -1))
						{
							return 0;
						}
						if (func_94(27082, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_005"))
					{
						if (func_94(3771, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_006"))
					{
						if (func_94(3772, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_007"))
					{
						if (func_94(3773, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_008"))
					{
						if (func_94(3774, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_009"))
					{
						if (func_94(3775, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_010"))
					{
						if (func_94(3776, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_011"))
					{
						if (func_94(3777, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_012"))
					{
						if (func_94(3778, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_013"))
					{
						if (func_94(3779, -1) || func_94(27083, -1))
						{
							return 0;
						}
					}
					return !func_90(iParam2, iParam1, 0);
					break;
				
				case joaat("MP_Elite_M_Tshirt"):
				case joaat("MP_Elite_M_Tshirt_1"):
				case joaat("MP_Elite_F_Tshirt"):
				case joaat("MP_Elite_F_Tshirt_1"):
					if ((((func_94(3765, -1) && func_94(3766, -1)) && func_94(3767, -1)) && func_94(3768, -1)) && func_94(3769, -1))
					{
						return 0;
					}
					return 1;
					break;
			}
			break;
		
		case joaat("mpIndependence_overlays"):
			switch (iParam1)
			{
				case joaat("FM_Ind_M_Award_000"):
				case joaat("FM_Ind_F_Award_000"):
					return !func_94(3593, -1);
					break;
			}
			if (!Global_262145.f_8259 && !func_90(iParam2, iParam1, 0))
			{
				return 1;
			}
			break;
		
		case joaat("mpHipster_overlays"):
			switch (iParam1)
			{
				case 1443536758:
				case 1333229624:
				case -1665422117:
				case 1100930183:
				case -1595008258:
				case 94055115:
				case -627896761:
				case 1873477305:
					return 1;
					break;
				
				case 196632624:
				case -1644428107:
				case 1108198688:
				case 810099095:
					return 1;
					break;
				
				case 300677115:
				case 262692161:
				case -1684141219:
				case 390655118:
				case -479442624:
				case -542924311:
				case 1696910411:
				case -1259058037:
					return 1;
					break;
				
				case 1980445908:
				case -1882429354:
				case -1235341889:
				case -1544517404:
					return 1;
					break;
				
				case joaat("FM_Hip_M_Retro_010"):
				case joaat("FM_Hip_F_Retro_010"):
					return (!func_16(152, -1) && !func_94(9440, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_003"):
				case joaat("FM_Hip_F_Retro_003"):
					return (!func_16(151, -1) && !func_94(9430, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_000"):
				case joaat("FM_Hip_F_Retro_000"):
					return (!func_76(iParam2, -1) && !func_94(9426, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_001"):
				case joaat("FM_Hip_F_Retro_001"):
					return (!func_76(iParam2, -1) && !func_94(9427, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_002"):
				case joaat("FM_Hip_F_Retro_002"):
					return (!func_76(iParam2, -1) && !func_94(9428, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_004"):
				case joaat("FM_Hip_F_Retro_004"):
					return (!func_76(iParam2, -1) && !func_94(9431, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_005"):
				case joaat("FM_Hip_F_Retro_005"):
					return (!func_76(iParam2, -1) && !func_94(9432, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_006"):
				case joaat("FM_Hip_F_Retro_006"):
					return (!func_76(iParam2, -1) && !func_94(9433, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_007"):
				case joaat("FM_Hip_F_Retro_007"):
					return (!func_76(iParam2, -1) && !func_94(9439, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_008"):
				case joaat("FM_Hip_F_Retro_008"):
					return (!func_76(iParam2, -1) && !func_94(9434, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_009"):
				case joaat("FM_Hip_F_Retro_009"):
					return (!func_76(iParam2, -1) && !func_94(9435, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_011"):
				case joaat("FM_Hip_F_Retro_011"):
					return (!func_76(iParam2, -1) && !func_94(9436, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_012"):
				case joaat("FM_Hip_F_Retro_012"):
					return (!func_76(iParam2, -1) && !func_94(9429, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_013"):
				case joaat("FM_Hip_F_Retro_013"):
					return (!func_76(iParam2, -1) && !func_94(9437, -1));
					break;
				
				case joaat("FM_Rstar_M_Tshirt_000"):
				case joaat("FM_Rstar_M_Tshirt_001"):
				case joaat("FM_Rstar_M_Tshirt_002"):
				case joaat("FM_Rstar_F_Tshirt_000"):
				case joaat("FM_Rstar_F_Tshirt_001"):
				case joaat("FM_Rstar_F_Tshirt_002"):
					return !func_75();
					break;
			}
			break;
		
		case joaat("mpvalentines_overlays"):
			if ((!Global_262145.f_7059 && !func_76(iParam2, -1)) && !Global_262145.f_12034)
			{
				return 1;
			}
			break;
		
		case joaat("mpPilot_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Fli_M_Tshirt_000"):
				case joaat("MP_Fli_F_Tshirt_000"):
					return !func_94(3608, -1);
					break;
			}
			break;
		
		case joaat("mpLTS_overlays"):
			switch (iParam1)
			{
				case joaat("FM_LTS_M_Tshirt_000"):
				case joaat("FM_LTS_F_Tshirt_000"):
					return (!func_94(3615, -1) && !func_94(9438, -1));
					break;
			}
			break;
		
		case joaat("mpLuxe_overlays"):
			if (iParam1 == joaat("MP_LUXE_VDG_006_F"))
			{
				return 1;
			}
			switch (iParam1)
			{
				case joaat("MP_FAKE_DIS_000_M"):
				case joaat("MP_FAKE_DIS_000_F"):
					return !func_94(3783, -1);
					break;
				
				case joaat("MP_FAKE_DIS_001_M"):
				case joaat("MP_FAKE_DIS_001_F"):
					return !func_94(3784, -1);
					break;
				
				case joaat("MP_FAKE_DS_000_M"):
				case joaat("MP_FAKE_DS_000_F"):
					return !func_94(3785, -1);
					break;
				
				case joaat("MP_FAKE_ENEMA_000_M"):
				case joaat("MP_FAKE_ENEMA_000_F"):
					return !func_94(3786, -1);
					break;
				
				case joaat("MP_FAKE_LB_000_M"):
				case joaat("MP_FAKE_LB_000_F"):
					return !func_94(3787, -1);
					break;
				
				case joaat("MP_FAKE_LC_000_M"):
				case joaat("MP_FAKE_LC_000_F"):
					return !func_94(3788, -1);
					break;
				
				case joaat("MP_FAKE_SC_000_M"):
				case joaat("MP_FAKE_SC_000_F"):
					if (func_94(27081, -1))
					{
						return 0;
					}
					return !func_94(3789, -1);
					break;
				
				case joaat("MP_FAKE_Vap_000_M"):
				case joaat("MP_FAKE_Vap_000_F"):
					return !func_94(3790, -1);
					break;
				
				case joaat("MP_FAKE_Per_000_M"):
				case joaat("MP_FAKE_Per_000_F"):
					return !func_94(3791, -1);
					break;
				
				case joaat("MP_FAKE_SN_000_M"):
				case joaat("MP_FAKE_SN_000_F"):
					return !func_94(3792, -1);
					break;
				
				case joaat("MP_FILM_000_F"):
				case joaat("MP_FILM_000_M"):
					if (iParam1 == joaat("MP_FILM_000_F"))
					{
						iVar0 = func_129(2444, -1, 0);
						if (BitTest(iVar0, 0))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_000_M"))
					{
						iVar1 = func_129(2424, -1, 0);
						if (BitTest(iVar1, 18))
						{
							return 0;
						}
					}
					return !func_94(3793, -1);
					break;
				
				case joaat("MP_FILM_001_F"):
				case joaat("MP_FILM_001_M"):
					if (iParam1 == joaat("MP_FILM_001_F"))
					{
						iVar2 = func_129(2444, -1, 0);
						if (BitTest(iVar2, 1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_001_M"))
					{
						iVar3 = func_129(2424, -1, 0);
						if (BitTest(iVar3, 19))
						{
							return 0;
						}
					}
					return !func_94(3794, -1);
					break;
				
				case joaat("MP_FILM_002_F"):
				case joaat("MP_FILM_002_M"):
					if (iParam1 == joaat("MP_FILM_002_F"))
					{
						iVar4 = func_129(2444, -1, 0);
						if (BitTest(iVar4, 2))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_002_M"))
					{
						iVar5 = func_129(2424, -1, 0);
						if (BitTest(iVar5, 20))
						{
							return 0;
						}
					}
					return !func_94(3795, -1);
					break;
				
				case joaat("MP_FILM_003_F"):
				case joaat("MP_FILM_003_M"):
					if (iParam1 == joaat("MP_FILM_003_F"))
					{
						iVar6 = func_129(2444, -1, 0);
						if (BitTest(iVar6, 3))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_003_M"))
					{
						iVar7 = func_129(2424, -1, 0);
						if (BitTest(iVar7, 21))
						{
							return 0;
						}
					}
					return !func_94(3796, -1);
					break;
				
				case joaat("MP_FILM_004_F"):
				case joaat("MP_FILM_004_M"):
					if (iParam1 == joaat("MP_FILM_004_F"))
					{
						iVar8 = func_129(2444, -1, 0);
						if (BitTest(iVar8, 4))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_004_M"))
					{
						iVar9 = func_129(2424, -1, 0);
						if (BitTest(iVar9, 22))
						{
							return 0;
						}
					}
					return !func_94(3797, -1);
					break;
				
				case joaat("MP_FILM_005_F"):
				case joaat("MP_FILM_005_M"):
					if (iParam1 == joaat("MP_FILM_005_F"))
					{
						iVar10 = func_129(2444, -1, 0);
						if (BitTest(iVar10, 5))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_005_M"))
					{
						iVar11 = func_129(2424, -1, 0);
						if (BitTest(iVar11, 23))
						{
							return 0;
						}
					}
					return !func_94(3798, -1);
					break;
				
				case joaat("MP_FILM_006_F"):
				case joaat("MP_FILM_006_M"):
					if (iParam1 == joaat("MP_FILM_006_F"))
					{
						iVar12 = func_129(2444, -1, 0);
						if (BitTest(iVar12, 6))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_006_M"))
					{
						iVar13 = func_129(2424, -1, 0);
						if (BitTest(iVar13, 24))
						{
							return 0;
						}
					}
					return !func_94(3799, -1);
					break;
				
				case joaat("MP_FILM_007_F"):
				case joaat("MP_FILM_007_M"):
					if (iParam1 == joaat("MP_FILM_007_F"))
					{
						iVar14 = func_129(2444, -1, 0);
						if (BitTest(iVar14, 7))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_007_M"))
					{
						iVar15 = func_129(2424, -1, 0);
						if (BitTest(iVar15, 25))
						{
							return 0;
						}
					}
					return !func_94(3800, -1);
					break;
				
				case joaat("MP_FILM_008_F"):
				case joaat("MP_FILM_008_M"):
					if (iParam1 == joaat("MP_FILM_008_F"))
					{
						iVar16 = func_129(2444, -1, 0);
						if (BitTest(iVar16, 8))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_008_M"))
					{
						iVar17 = func_129(2424, -1, 0);
						if (BitTest(iVar17, 26))
						{
							return 0;
						}
					}
					return !func_94(3801, -1);
					break;
				
				case joaat("MP_FILM_009_F"):
				case joaat("MP_FILM_009_M"):
					if (iParam1 == joaat("MP_FILM_009_F"))
					{
						iVar18 = func_129(2444, -1, 0);
						if (BitTest(iVar18, 9))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_009_M"))
					{
						iVar19 = func_129(2424, -1, 0);
						if (BitTest(iVar19, 27))
						{
							return 0;
						}
					}
					return !func_94(3802, -1);
					break;
			}
			break;
		
		case joaat("mpLuxe2_overlays"):
			switch (iParam1)
			{
				case joaat("MP_LUXE_TAT_030_M"):
				case joaat("MP_LUXE_TAT_031_M"):
					return 1;
					break;
				
				case joaat("MP_LUXE_TAT_030_F"):
				case joaat("MP_LUXE_TAT_031_F"):
					return 1;
					break;
			}
			break;
		
		case joaat("multiplayer_overlays"):
			switch (iParam1)
			{
				case joaat("MP_FM_OGA_000_m"):
				case joaat("MP_FM_OGA_001_m"):
				case joaat("MP_FM_OGA_002_m"):
				case joaat("MP_FM_OGA_003_m"):
				case joaat("MP_FM_OGA_000_f"):
				case joaat("MP_FM_OGA_001_f"):
				case joaat("MP_FM_OGA_002_f"):
				case joaat("MP_FM_OGA_003_f"):
					return !func_74();
					break;
			}
			break;
	}
	return 0;
}

int func_74()
{
	var uVar0;
	
	if (Global_152523 == 2)
	{
		return 1;
	}
	else if (Global_152523 == 3)
	{
		return 0;
	}
	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x5BC93955B6EEBC0B())
			{
				unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 4);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 6);
				unk_0x0B0C9A0F9AAEB7F0(&Global_25, 2);
				unk_0x0B0C9A0F9AAEB7F0(&Global_25, 4);
				unk_0x0B0C9A0F9AAEB7F0(&Global_25, 6);
				unk_0x1164A75E490C27B6(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x76CA59C648318506())
				{
					iVar0 = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&iVar0, 0);
					unk_0xED11291F7127888E(iVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0x76CA59C648318506())
	{
		if (BitTest(unk_0x38640D2193CB547F(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_75()
{
	return unk_0x087611B922B50F13(-1762644250);
}

int func_76(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (func_79(iParam0) == 14192)
	{
		return 0;
	}
	uVar0 = func_78(iParam0, iParam1);
	iVar1 = iParam0;
	return BitTest(uVar0, func_77(iVar1));
}

int func_77(int iParam0)
{
	return (iParam0 % 32);
}

var func_78(var uParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_129(func_79(uParam0), iParam1, 0);
	return uVar0;
}

int func_79(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_82(iVar0);
	if ((func_81() == 0 || func_80() == 0) || (func_81() == 999 && func_80() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1039;
				break;
			
			case 1:
				return 1040;
				break;
			
			case 2:
				return 1041;
				break;
			
			case 3:
				return 1042;
				break;
			
			case 4:
				return 1043;
				break;
			
			case 5:
				return 1503;
				break;
			
			case 6:
				return 1758;
				break;
			
			case 7:
				return 1952;
				break;
			
			case 8:
				return 1953;
				break;
			
			case 9:
				return 1954;
				break;
			
			case 10:
				return 1955;
				break;
			
			case 11:
				return 1956;
				break;
			
			case 12:
				return 1957;
				break;
			
			case 13:
				return 2424;
				break;
			
			case 14:
				return 2444;
				break;
			
			case 15:
				return 2447;
				break;
			
			case 16:
				return 2450;
				break;
			
			case 17:
				return 2614;
				break;
			
			case 18:
				return 2617;
				break;
			
			case 19:
				return 2620;
				break;
			
			case 20:
				return 3786;
				break;
			
			case 21:
				return 3789;
				break;
			
			case 22:
				return 3864;
				break;
			
			case 23:
				return 3867;
				break;
			
			case 24:
				return 3870;
				break;
			
			case 25:
				return 3873;
				break;
			
			case 26:
				return 5364;
				break;
			
			case 27:
				return 5367;
				break;
			
			case 28:
				return 5469;
				break;
			
			case 29:
				return 5472;
				break;
			
			case 30:
				return 6431;
				break;
			
			case 31:
				return 6434;
				break;
			
			case 32:
				return 7255;
				break;
			
			case 33:
				return 7258;
				break;
			
			case 34:
				return 7261;
				break;
			
			case 35:
				return 7970;
				break;
			
			case 36:
				return 7973;
				break;
			
			case 37:
				return 7976;
				break;
			
			case 38:
				return 7979;
				break;
			
			case 39:
				return 8501;
				break;
			
			case 40:
				return 8504;
				break;
			
			case 41:
				return 8507;
				break;
			
			case 42:
				return 8510;
				break;
			
			case 43:
				return 8906;
				break;
			
			case 44:
				return 8909;
				break;
			
			case 45:
				return 8912;
				break;
			
			case 46:
				return 10287;
				break;
			
			case 47:
				return 10290;
				break;
			
			case 48:
				return 10413;
				break;
			
			case 49:
				return 10416;
				break;
			
			case 50:
				return 11824;
				break;
			
			case 51:
				return 11827;
				break;
		}
	}
	return 14192;
}

int func_80()
{
	return Global_32164;
}

int func_81()
{
	return Global_32163;
}

int func_82(int iParam0)
{
	return (iParam0 / 32);
}

int func_83(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (20 - 1);
	if (bParam1)
	{
		iVar0 = 13;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = iVar1;
		if (!func_86(iVar2) || iParam0)
		{
			if (!func_84(unk_0x259BE71D8A81D4FA(), iVar2, 0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_84(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	if (iParam0 != func_85())
	{
		uVar0 = iParam1;
		switch (iParam2)
		{
			case 0:
				return BitTest(Global_1853910[iParam0 /*862*/].f_267.f_434, uVar0);
				break;
			}
	}
	return 1;
}

int func_85()
{
	return -1;
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case 18:
		case 17:
		case 19:
			return 1;
			break;
	}
	return 0;
}

int func_87(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2850651[iParam0 /*3*/][func_14(iParam1)];
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_88(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	switch (iParam0)
	{
		case 53:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 52:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 60:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 30;
				
				case 4:
					return 60;
				
				case 5:
					return 120;
				
				default:
			}
			break;
		
		case 61:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 30;
				
				default:
			}
			break;
		
		case 62:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 63:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 2;
				
				case 4:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 2;
				
				case 4:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 20;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 31:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 35:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 36:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 42:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 44:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1000;
				
				case 3:
					return 10000;
				
				case 4:
					return 25000;
				
				case 5:
					return 50000;
				
				default:
			}
			break;
		
		case 48:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 3;
				
				case 3:
					return 5;
				
				case 4:
					return 7;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 54:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 55:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 250;
				
				case 4:
					return 500;
				
				case 5:
					return 1000;
				
				default:
			}
			break;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 59:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 135:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 136:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 137:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 128:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 130:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 131:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 132:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 133:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 142:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 143:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 144:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 145:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 67:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 147:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_25307;
				
				case 3:
					return Global_262145.f_25308;
				
				case 4:
					return Global_262145.f_25309;
				
				case 5:
					return Global_262145.f_25310;
				
				default:
			}
			break;
		
		case 148:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_25307;
				
				case 3:
					return Global_262145.f_25308;
				
				case 4:
					return Global_262145.f_25309;
				
				case 5:
					return Global_262145.f_25310;
				
				default:
			}
			break;
		
		case 149:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_25307;
				
				case 3:
					return Global_262145.f_25308;
				
				case 4:
					return Global_262145.f_25309;
				
				case 5:
					return Global_262145.f_25310;
				
				default:
			}
			break;
		
		case 150:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_25307;
				
				case 3:
					return Global_262145.f_25308;
				
				case 4:
					return Global_262145.f_25309;
				
				case 5:
					return Global_262145.f_25310;
				
				default:
			}
			break;
		
		case 151:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 70:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 71:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 72:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 73:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 74:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 75:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 76:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 77:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 78:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 79:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 80:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 81:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 82:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 20;
				
				case 4:
					return 30;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 83:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 100000;
				
				case 3:
					return 250000;
				
				case 4:
					return 500000;
				
				case 5:
					return 1000000;
				
				default:
			}
			break;
		
		case 84:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 85:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1000;
				
				case 3:
					return 3000;
				
				case 4:
					return 15000;
				
				case 5:
					return 55000;
				
				default:
			}
			break;
		
		case 86:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 87:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 88:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 40;
				
				default:
			}
			break;
		
		case 89:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 20;
				
				default:
			}
			break;
		
		case 90:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 25000;
				
				case 3:
					return 50000;
				
				case 4:
					return 75000;
				
				case 5:
					return 100000;
				
				default:
			}
			break;
		
		case 91:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 20;
				
				case 4:
					return 30;
				
				case 5:
					return 40;
				
				default:
			}
			break;
		
		case 92:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28684;
				
				case 3:
					return Global_262145.f_28685;
				
				case 4:
					return Global_262145.f_28686;
				
				case 5:
					return Global_262145.f_28687;
				
				default:
			}
			break;
		
		case 93:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28851;
				
				case 3:
					return Global_262145.f_28852;
				
				case 4:
					return Global_262145.f_28853;
				
				case 5:
					return Global_262145.f_28854;
				
				default:
			}
			break;
		
		case 94:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28885;
				
				case 3:
					return Global_262145.f_28886;
				
				case 4:
					return Global_262145.f_28887;
				
				case 5:
					return Global_262145.f_28888;
				
				default:
			}
			break;
		
		case 95:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28889;
				
				case 3:
					return Global_262145.f_28890;
				
				case 4:
					return Global_262145.f_28891;
				
				case 5:
					return Global_262145.f_28892;
				
				default:
			}
			break;
		
		case 96:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28580;
				
				case 3:
					return Global_262145.f_28581;
				
				case 4:
					return Global_262145.f_28582;
				
				case 5:
					return Global_262145.f_28583;
				
				default:
			}
			break;
		
		case 97:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28855;
				
				case 3:
					return Global_262145.f_28856;
				
				case 4:
					return Global_262145.f_28857;
				
				case 5:
					return Global_262145.f_28858;
				
				default:
			}
			break;
		
		case 99:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
		
		case 100:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 101:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 50000;
				
				case 3:
					return 250000;
				
				case 4:
					return 750000;
				
				case 5:
					return 1000000;
				
				default:
			}
			break;
		
		case 102:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
		
		case 103:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
		
		case 104:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
		
		case 105:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1000000;
				
				case 3:
					return 5000000;
				
				case 4:
					return 10000000;
				
				case 5:
					return 20000000;
				
				default:
			}
			break;
		
		case 106:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 107:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 108:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 109:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 110:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 112:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 114:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 40;
				
				default:
			}
			break;
		
		case 115:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 116:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 30;
				
				default:
			}
			break;
		
		case 111:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 30;
				
				case 3:
					return 60;
				
				case 4:
					return 120;
				
				case 5:
					return 240;
				
				default:
			}
			break;
		
		case 113:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 117:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 118:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 119:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
		
		case 120:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 2;
				
				case 4:
					return 3;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 121:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 122:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 123:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 124:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 125:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 2;
				
				case 4:
					return 3;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 126:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
		
		case 127:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 50;
				
				default:
			}
			break;
	}
	return 999;
}

int func_89(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2850194[iParam0 /*3*/][func_14(iParam1)];
	if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_90(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		if (bParam2)
		{
			iParam0 = func_93(iParam1, 3);
		}
		else
		{
			iParam0 = func_93(iParam1, 4);
		}
	}
	return (func_76(iParam0, -1) || func_91(iParam0, -1));
}

bool func_91(int iParam0, int iParam1)
{
	return func_94(func_92(iParam0), iParam1);
}

int func_92(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 <= 480)
	{
		iVar1 = iParam0;
		iVar0 = (3112 + iVar1);
	}
	else if (iParam0 < 864)
	{
		iVar1 = (iParam0 - 480);
		iVar0 = (6029 + iVar1);
	}
	else if (iParam0 < 1248)
	{
		iVar1 = (iParam0 - 864);
		iVar0 = (15562 + iVar1);
	}
	else if (iParam0 < 1372)
	{
		iVar1 = (iParam0 - 1248);
		iVar0 = (28355 + iVar1);
	}
	else if (iParam0 < 1500)
	{
		iVar1 = (iParam0 - 1372);
		iVar0 = (30355 + iVar1);
	}
	else if (iParam0 < 1564)
	{
		iVar1 = (iParam0 - 1500);
		iVar0 = (32411 + iVar1);
	}
	else if (iParam0 < 1628)
	{
		iVar1 = (iParam0 - 1564);
		iVar0 = (41251 + iVar1);
	}
	else
	{
		iVar2 = iParam0;
	}
	return iVar0;
}

int func_93(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xE80EBC1CABE1C8A7(iParam1, -1, iParam0);
	if (iVar0 != -1)
	{
		return (129 + iVar0);
	}
	return -1;
}

bool func_94(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_15();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

int func_95(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	if (iParam4 == 0)
	{
		iVar1 = func_97(iVar0, sParam1, iParam4);
		iParam4 = unk_0x70E57E9927B6BA58(func_96(iVar1));
	}
	if (iParam3 == 449512698)
	{
		return 0;
	}
	switch (iParam4)
	{
		case joaat("CHEST_FULL"):
		case joaat("CHEST_LEFT"):
		case joaat("CHEST_MID"):
		case joaat("CHEST_RIGHT"):
		case joaat("CHEST_STOM"):
		case joaat("CHEST_STOM_FULL"):
		case joaat("SIDE_RIGHT"):
		case joaat("TORSO_SIDE_LEFT"):
		case joaat("TORSO_SIDE_RIGHT"):
		case -1238079313:
		case joaat("STOMACH_FULL"):
		case joaat("STOMACH_LEFT"):
		case joaat("STOMACH_LOWER_LEFT"):
		case joaat("STOMACH_LOWER_RIGHT"):
		case 1361645381:
		case joaat("STOMACH_RIGHT"):
			if (bParam5)
			{
				return 0;
			}
			if ((((iParam4 == joaat("CHEST_FULL") || (iParam4 == joaat("CHEST_MID") && iVar0 == joaat("mp_f_freemode_01"))) || iParam4 == joaat("CHEST_RIGHT")) || iParam4 == joaat("CHEST_STOM")) || iParam4 == joaat("CHEST_STOM_FULL"))
			{
				if (!bParam6)
				{
					if (Global_4540628 == -1)
					{
						if (!Global_100733.f_1570)
						{
							if (func_105(13, -1))
							{
								return 0;
							}
							else if (func_105(14, -1))
							{
								return 0;
							}
							else if (func_105(15, -1))
							{
								return 0;
							}
							else if (func_105(16, -1))
							{
								return 0;
							}
							else if (func_105(71, -1))
							{
								return 0;
							}
							else if (func_105(72, -1))
							{
							}
						}
					}
					else if (Global_4540628 == 13)
					{
						return 0;
					}
					else if (Global_4540628 == 14)
					{
						return 0;
					}
					else if (Global_4540628 == 15)
					{
						return 0;
					}
					else if (Global_4540628 == 16)
					{
						return 0;
					}
					else if (Global_4540628 == 71)
					{
						return 0;
					}
					else if (Global_4540628 == 72)
					{
					}
				}
			}
			else if (iParam4 == joaat("CHEST_LEFT"))
			{
				if (!bParam6)
				{
					if (Global_4540628 == -1)
					{
						if (!Global_100733.f_1570)
						{
							if (func_105(13, -1))
							{
								return 0;
							}
							else if (func_105(14, -1))
							{
								return 0;
							}
							else if (func_105(15, -1))
							{
								return 0;
							}
							else if (func_105(16, -1))
							{
								return 0;
							}
							else if (func_105(71, -1))
							{
								return 0;
							}
							else if (func_105(72, -1))
							{
							}
						}
					}
					else if (Global_4540628 == 13)
					{
						return 0;
					}
					else if (Global_4540628 == 14)
					{
						return 0;
					}
					else if (Global_4540628 == 15)
					{
						return 0;
					}
					else if (Global_4540628 == 16)
					{
						return 0;
					}
					else if (Global_4540628 == 71)
					{
						return 0;
					}
					else if (Global_4540628 == 72)
					{
					}
				}
			}
			else if ((iParam4 == joaat("STOMACH_FULL") || iParam4 == 1361645381) || iParam4 == joaat("STOMACH_LEFT"))
			{
				if (!bParam6)
				{
					if (Global_4540628 == -1)
					{
						if (!Global_100733.f_1570)
						{
							if (func_105(13, -1))
							{
							}
							else if (func_105(14, -1))
							{
								return 0;
							}
							else if (func_105(15, -1))
							{
								return 0;
							}
							else if (func_105(16, -1))
							{
							}
							else if (func_105(71, -1))
							{
								return 0;
							}
							else if (func_105(72, -1))
							{
							}
						}
					}
					else if (Global_4540628 == 13)
					{
					}
					else if (Global_4540628 == 14)
					{
						return 0;
					}
					else if (Global_4540628 == 15)
					{
						return 0;
					}
					else if (Global_4540628 == 16)
					{
					}
					else if (Global_4540628 == 71)
					{
						return 0;
					}
					else if (Global_4540628 == 72)
					{
					}
				}
			}
			else if (iParam4 == joaat("BACK_UPPER"))
			{
				if (!bParam6)
				{
					if (Global_4540628 == -1)
					{
						if (!Global_100733.f_1570)
						{
							if (func_105(13, -1))
							{
							}
							else if (func_105(14, -1))
							{
							}
							else if (func_105(15, -1))
							{
							}
							else if (func_105(16, -1))
							{
							}
							else if (func_105(71, -1))
							{
							}
							else if (func_105(72, -1))
							{
							}
						}
					}
					else if (Global_4540628 == 13)
					{
					}
					else if (Global_4540628 == 14)
					{
					}
					else if (Global_4540628 == 15)
					{
					}
					else if (Global_4540628 == 16)
					{
					}
					else if (Global_4540628 == 71)
					{
					}
					else if (Global_4540628 == 72)
					{
					}
				}
			}
			break;
		
		case 1484379715:
		case joaat("BACK_FULL"):
		case joaat("BACK_FULL_ARMS_FULL_BACK"):
		case joaat("BACK_FULL_SHORT"):
		case joaat("BACK_LOWER"):
		case joaat("BACK_MID"):
		case joaat("BACK_UPPER"):
		case joaat("BACK_UPPER_LEFT"):
		case joaat("BACK_UPPER_RIGHT"):
			if (bParam8)
			{
				return 0;
			}
			if (!bParam6)
			{
				if (Global_4540628 == -1)
				{
					if (!Global_100733.f_1570)
					{
						if (func_105(13, -1))
						{
						}
						else if (func_105(14, -1))
						{
						}
						else if (func_105(15, -1))
						{
							return 0;
						}
						else if (func_105(16, -1))
						{
						}
						else if (func_105(71, -1))
						{
						}
						else if (func_105(72, -1))
						{
							return 0;
						}
					}
				}
				else if (Global_4540628 == 13)
				{
				}
				else if (Global_4540628 == 14)
				{
				}
				else if (Global_4540628 == 15)
				{
					return 0;
				}
				else if (Global_4540628 == 16)
				{
				}
				else if (Global_4540628 == 71)
				{
				}
				else if (Global_4540628 == 72)
				{
					return 0;
				}
			}
			break;
		
		case 1019352240:
			if (bParam8)
			{
				if (iVar0 == joaat("mp_m_freemode_01"))
				{
					if (Global_4540628 == -1)
					{
						if (!Global_100733.f_1570)
						{
							if (func_105(15, -1))
							{
								return 0;
							}
						}
					}
					else if (Global_4540628 == 15)
					{
						return 0;
					}
				}
			}
			if (bParam6)
			{
				return 0;
			}
			if (bParam5)
			{
				if (Global_4540628 == -1)
				{
					if (!Global_100733.f_1570)
					{
						if (func_105(13, -1))
						{
							return 0;
						}
						else if (func_105(14, -1))
						{
							return 0;
						}
						else if (func_105(15, -1))
						{
							if (!unk_0x1B79E937E91F40C3(sParam1, "TAT_FMM_CLB"))
							{
								return 0;
							}
						}
						else if (func_105(16, -1))
						{
						}
						else if (func_105(71, -1))
						{
						}
						else if (func_105(72, -1))
						{
						}
					}
				}
				else if (Global_4540628 == 13)
				{
					return 0;
				}
				else if (Global_4540628 == 14)
				{
					return 0;
				}
				else if (Global_4540628 == 15)
				{
					if (!unk_0x1B79E937E91F40C3(sParam1, "TAT_FMM_CLB"))
					{
						return 0;
					}
				}
				else if (Global_4540628 == 16)
				{
				}
				else if (Global_4540628 == 71)
				{
				}
				else if (Global_4540628 == 72)
				{
				}
			}
			break;
		
		case 0:
		case 2:
		case joaat("rank"):
			if (bParam5)
			{
				if (!unk_0xD6F9DEE4765092A9(sParam1))
				{
					switch (unk_0x70E57E9927B6BA58(sParam1))
					{
						case joaat("TAT_FM_011"):
						case joaat("TAT_FM_012"):
						case joaat("TAT_FM_019"):
						case joaat("TAT_FM_020"):
						case joaat("TAT_FM_021"):
						case joaat("TAT_FM_218"):
						case joaat("TAT_FM_219"):
						case joaat("TAT_FM_220"):
						case joaat("TAT_FM_225"):
						case joaat("TAT_FM_226"):
						case joaat("TAT_FM_230"):
						case joaat("TAT_FM_233"):
						case joaat("TAT_FM_235"):
						case joaat("TAT_FM_237"):
						case joaat("TAT_FM_245"):
							return 0;
							break;
						}
					}
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				if (!bParam6)
				{
					if (Global_4540628 == -1)
					{
						if (!Global_100733.f_1570)
						{
							if (func_105(13, -1))
							{
							}
							else if (func_105(14, -1))
							{
							}
							else if (func_105(15, -1))
							{
							}
							else if (func_105(16, -1))
							{
							}
							else if (func_105(71, -1))
							{
							}
							else if (func_105(72, -1))
							{
							}
						}
					}
					else if (Global_4540628 == 13)
					{
						return 0;
					}
					else if (Global_4540628 == 14)
					{
					}
					else if (Global_4540628 == 15)
					{
						return 0;
					}
					else if (Global_4540628 == 16)
					{
					}
					else if (Global_4540628 == 71)
					{
					}
					else if (Global_4540628 == 72)
					{
					}
				}
			}
			break;
		
		case joaat("torsoDecal"):
			if (bParam7)
			{
				return 0;
			}
			break;
	}
	return 1;
}

char* func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ARM_LEFT_FULL_SLEEVE";
			break;
		
		case 1:
			return "ARM_LEFT_SHORT_SLEEVE";
			break;
		
		case 2:
			return "ARM_LEFT_LOWER_SLEEVE";
			break;
		
		case 3:
			return "ARM_LEFT_LOWER_INNER";
			break;
		
		case 4:
			return "ARM_LEFT_LOWER_OUTER";
			break;
		
		case 5:
			return "ARM_LEFT_WRIST";
			break;
		
		case 6:
			return "ARM_LEFT_UPPER_SLEEVE";
			break;
		
		case 7:
			return "ARM_LEFT_UPPER_TRICEP";
			break;
		
		case 8:
			return "ARM_LEFT_UPPER_SIDE";
			break;
		
		case 9:
			return "ARM_LEFT_UPPER_BICEP";
			break;
		
		case 10:
			return "ARM_LEFT_SHOULDER";
			break;
		
		case 11:
			return "ARM_LEFT_ELBOW";
			break;
		
		case 12:
			return "ARM_RIGHT_FULL_SLEEVE";
			break;
		
		case 13:
			return "ARM_RIGHT_SHORT_SLEEVE";
			break;
		
		case 14:
			return "ARM_RIGHT_LOWER_SLEEVE";
			break;
		
		case 15:
			return "ARM_RIGHT_LOWER_INNER";
			break;
		
		case 16:
			return "ARM_RIGHT_LOWER_OUTER";
			break;
		
		case 17:
			return "ARM_RIGHT_WRIST";
			break;
		
		case 18:
			return "ARM_RIGHT_UPPER_SLEEVE";
			break;
		
		case 19:
			return "ARM_RIGHT_UPPER_TRICEP";
			break;
		
		case 20:
			return "ARM_RIGHT_UPPER_SIDE";
			break;
		
		case 21:
			return "ARM_RIGHT_UPPER_BICEP";
			break;
		
		case 22:
			return "ARM_RIGHT_SHOULDER";
			break;
		
		case 23:
			return "ARM_RIGHT_ELBOW";
			break;
		
		case 24:
			return "HAND_LEFT";
			break;
		
		case 25:
			return "HAND_RIGHT";
			break;
		
		case 26:
			return "BACK_FULL";
			break;
		
		case 27:
			return "BACK_FULL_ARMS_FULL_BACK";
			break;
		
		case 28:
			return "BACK_FULL_SHORT";
			break;
		
		case 29:
			return "BACK_MID";
			break;
		
		case 30:
			return "BACK_UPPER";
			break;
		
		case 31:
			return "BACK_UPPER_LEFT";
			break;
		
		case 32:
			return "BACK_UPPER_RIGHT";
			break;
		
		case 33:
			return "BACK_LOWER";
			break;
		
		case 34:
			return "BACK_LOWER_LEFT";
			break;
		
		case 35:
			return "BACK_LOWER_MID";
			break;
		
		case 36:
			return "BACK_LOWER_RIGHT";
			break;
		
		case 37:
			return "CHEST_FULL";
			break;
		
		case 38:
			return "CHEST_STOM";
			break;
		
		case 39:
			return "CHEST_STOM_FULL";
			break;
		
		case 40:
			return "CHEST_LEFT";
			break;
		
		case 41:
			return "CHEST_UPPER_LEFT";
			break;
		
		case 42:
			return "CHEST_RIGHT";
			break;
		
		case 43:
			return "CHEST_UPPER_RIGHT";
			break;
		
		case 44:
			return "CHEST_MID";
			break;
		
		case 45:
			return "TORSO_SIDE_RIGHT";
			break;
		
		case 46:
			return "TORSO_SIDE_LEFT";
			break;
		
		case 47:
			return "STOMACH_FULL";
			break;
		
		case 48:
			return "STOMACH_UPPER";
			break;
		
		case 49:
			return "STOMACH_UPPER_LEFT";
			break;
		
		case 50:
			return "STOMACH_UPPER_RIGHT";
			break;
		
		case 51:
			return "STOMACH_LOWER";
			break;
		
		case 52:
			return "STOMACH_LOWER_LEFT";
			break;
		
		case 53:
			return "STOMACH_LOWER_RIGHT";
			break;
		
		case 54:
			return "STOMACH_LEFT";
			break;
		
		case 55:
			return "STOMACH_RIGHT";
			break;
		
		case 56:
			return "FACE";
			break;
		
		case 57:
			return "HEAD_LEFT";
			break;
		
		case 58:
			return "HEAD_RIGHT";
			break;
		
		case 59:
			return "NECK_FRONT";
			break;
		
		case 60:
			return "NECK_BACK";
			break;
		
		case 61:
			return "NECK_LEFT_FULL";
			break;
		
		case 62:
			return "NECK_LEFT_BACK";
			break;
		
		case 63:
			return "NECK_RIGHT_FULL";
			break;
		
		case 64:
			return "NECK_RIGHT_BACK";
			break;
		
		case 65:
			return "LEG_LEFT_FULL_SLEEVE";
			break;
		
		case 66:
			return "LEG_LEFT_FULL_FRONT";
			break;
		
		case 67:
			return "LEG_LEFT_FULL_BACK";
			break;
		
		case 68:
			return "LEG_LEFT_UPPER_SLEEVE";
			break;
		
		case 69:
			return "LEG_LEFT_UPPER_FRONT";
			break;
		
		case 70:
			return "LEG_LEFT_UPPER_BACK";
			break;
		
		case 71:
			return "LEG_LEFT_UPPER_OUTER";
			break;
		
		case 72:
			return "LEG_LEFT_UPPER_INNER";
			break;
		
		case 73:
			return "LEG_LEFT_LOWER_SLEEVE";
			break;
		
		case 74:
			return "LEG_LEFT_LOWER_FRONT";
			break;
		
		case 75:
			return "LEG_LEFT_LOWER_BACK";
			break;
		
		case 76:
			return "LEG_LEFT_LOWER_OUTER";
			break;
		
		case 77:
			return "LEG_LEFT_LOWER_INNER";
			break;
		
		case 78:
			return "LEG_LEFT_KNEE";
			break;
		
		case 79:
			return "LEG_LEFT_ANKLE";
			break;
		
		case 80:
			return "LEG_LEFT_CALF";
			break;
		
		case 81:
			return "LEG_RIGHT_FULL_SLEEVE";
			break;
		
		case 82:
			return "LEG_RIGHT_FULL_FRONT";
			break;
		
		case 83:
			return "LEG_RIGHT_FULL_BACK";
			break;
		
		case 84:
			return "LEG_RIGHT_UPPER_SLEEVE";
			break;
		
		case 85:
			return "LEG_RIGHT_UPPER_FRONT";
			break;
		
		case 86:
			return "LEG_RIGHT_UPPER_BACK";
			break;
		
		case 87:
			return "LEG_RIGHT_UPPER_OUTER";
			break;
		
		case 88:
			return "LEG_RIGHT_UPPER_INNER";
			break;
		
		case 89:
			return "LEG_RIGHT_LOWER_SLEEVE";
			break;
		
		case 90:
			return "LEG_RIGHT_LOWER_FRONT";
			break;
		
		case 91:
			return "LEG_RIGHT_LOWER_BACK";
			break;
		
		case 92:
			return "LEG_RIGHT_LOWER_OUTER";
			break;
		
		case 93:
			return "LEG_RIGHT_LOWER_INNER";
			break;
		
		case 94:
			return "LEG_RIGHT_KNEE";
			break;
		
		case 95:
			return "LEG_RIGHT_ANKLE";
			break;
		
		case 96:
			return "LEG_RIGHT_CALF";
			break;
		
		case 97:
			return "FOOT_LEFT";
			break;
		
		case 98:
			return "FOOT_RIGHT";
			break;
	}
	return "";
}

int func_97(int iParam0, char* sParam1, int iParam2)
{
	switch (iParam2)
	{
		case 1019352240:
		case 2140335355:
		case joaat("torsoDecal"):
			return -1;
			break;
	}
	switch (iParam2)
	{
		case joaat("ARM_LEFT_FULL_SLEEVE"):
			return 0;
			break;
		
		case joaat("ARM_LEFT_SHORT_SLEEVE"):
			return 1;
			break;
		
		case joaat("ARM_LEFT_LOWER_SLEEVE"):
			return 2;
			break;
		
		case joaat("ARM_LEFT_LOWER_INNER"):
			return 3;
			break;
		
		case joaat("ARM_LEFT_LOWER_OUTER"):
			return 4;
			break;
		
		case joaat("ARM_LEFT_WRIST"):
			return 5;
			break;
		
		case joaat("ARM_LEFT_UPPER_SLEEVE"):
			return 6;
			break;
		
		case joaat("ARM_LEFT_UPPER_TRICEP"):
			return 7;
			break;
		
		case joaat("ARM_LEFT_UPPER_SIDE"):
			return 8;
			break;
		
		case joaat("ARM_LEFT_UPPER_BICEP"):
			return 9;
			break;
		
		case joaat("ARM_LEFT_SHOULDER"):
			return 10;
			break;
		
		case joaat("ARM_LEFT_ELBOW"):
			return 11;
			break;
		
		case joaat("ARM_RIGHT_FULL_SLEEVE"):
			return 12;
			break;
		
		case joaat("ARM_RIGHT_SHORT_SLEEVE"):
			return 13;
			break;
		
		case joaat("ARM_RIGHT_LOWER_SLEEVE"):
			return 14;
			break;
		
		case joaat("ARM_RIGHT_LOWER_INNER"):
			return 15;
			break;
		
		case joaat("ARM_RIGHT_LOWER_OUTER"):
			return 16;
			break;
		
		case joaat("ARM_RIGHT_WRIST"):
			return 17;
			break;
		
		case joaat("ARM_RIGHT_UPPER_SLEEVE"):
			return 18;
			break;
		
		case joaat("ARM_RIGHT_UPPER_TRICEP"):
			return 19;
			break;
		
		case joaat("ARM_RIGHT_UPPER_SIDE"):
			return 20;
			break;
		
		case joaat("ARM_RIGHT_UPPER_BICEP"):
			return 21;
			break;
		
		case joaat("ARM_RIGHT_SHOULDER"):
			return 22;
			break;
		
		case joaat("ARM_RIGHT_ELBOW"):
			return 23;
			break;
		
		case joaat("HAND_LEFT"):
			return 24;
			break;
		
		case joaat("HAND_RIGHT"):
			return 25;
			break;
		
		case joaat("BACK_FULL"):
			return 26;
			break;
		
		case joaat("BACK_FULL_ARMS_FULL_BACK"):
			return 27;
			break;
		
		case joaat("BACK_FULL_SHORT"):
			return 28;
			break;
		
		case joaat("BACK_MID"):
			return 29;
			break;
		
		case joaat("BACK_UPPER"):
			return 30;
			break;
		
		case joaat("BACK_UPPER_LEFT"):
			return 31;
			break;
		
		case joaat("BACK_UPPER_RIGHT"):
			return 32;
			break;
		
		case joaat("BACK_LOWER"):
			return 33;
			break;
		
		case joaat("BACK_LOWER_LEFT"):
			return 34;
			break;
		
		case joaat("BACK_LOWER_MID"):
			return 35;
			break;
		
		case joaat("BACK_LOWER_RIGHT"):
			return 36;
			break;
		
		case joaat("CHEST_FULL"):
			return 37;
			break;
		
		case joaat("CHEST_STOM"):
			return 38;
			break;
		
		case joaat("CHEST_STOM_FULL"):
			return 39;
			break;
		
		case joaat("CHEST_LEFT"):
			return 40;
			break;
		
		case joaat("CHEST_UPPER_LEFT"):
			return 41;
			break;
		
		case joaat("CHEST_RIGHT"):
			return 42;
			break;
		
		case joaat("CHEST_UPPER_RIGHT"):
			return 43;
			break;
		
		case joaat("CHEST_MID"):
			return 44;
			break;
		
		case joaat("TORSO_SIDE_RIGHT"):
			return 45;
			break;
		
		case joaat("TORSO_SIDE_LEFT"):
			return 46;
			break;
		
		case joaat("STOMACH_FULL"):
			return 47;
			break;
		
		case joaat("STOMACH_UPPER"):
			return 48;
			break;
		
		case joaat("STOMACH_UPPER_LEFT"):
			return 49;
			break;
		
		case joaat("STOMACH_UPPER_RIGHT"):
			return 50;
			break;
		
		case joaat("STOMACH_LOWER"):
			return 51;
			break;
		
		case joaat("STOMACH_LOWER_LEFT"):
			return 52;
			break;
		
		case joaat("STOMACH_LOWER_RIGHT"):
			return 53;
			break;
		
		case joaat("STOMACH_LEFT"):
			return 54;
			break;
		
		case joaat("STOMACH_RIGHT"):
			return 55;
			break;
		
		case joaat("FACE"):
			return 56;
			break;
		
		case joaat("HEAD_LEFT"):
			return 57;
			break;
		
		case joaat("HEAD_RIGHT"):
			return 58;
			break;
		
		case joaat("NECK_FRONT"):
			return 59;
			break;
		
		case joaat("NECK_BACK"):
			return 60;
			break;
		
		case joaat("NECK_LEFT_FULL"):
			return 61;
			break;
		
		case joaat("NECK_LEFT_BACK"):
			return 62;
			break;
		
		case joaat("NECK_RIGHT_FULL"):
			return 63;
			break;
		
		case joaat("NECK_RIGHT_BACK"):
			return 64;
			break;
		
		case joaat("LEG_LEFT_FULL_SLEEVE"):
			return 65;
			break;
		
		case joaat("LEG_LEFT_FULL_FRONT"):
			return 66;
			break;
		
		case joaat("LEG_LEFT_FULL_BACK"):
			return 67;
			break;
		
		case joaat("LEG_LEFT_UPPER_SLEEVE"):
			return 68;
			break;
		
		case joaat("LEG_LEFT_UPPER_FRONT"):
			return 69;
			break;
		
		case joaat("LEG_LEFT_UPPER_BACK"):
			return 70;
			break;
		
		case joaat("LEG_LEFT_UPPER_OUTER"):
			return 71;
			break;
		
		case joaat("LEG_LEFT_UPPER_INNER"):
			return 72;
			break;
		
		case joaat("LEG_LEFT_LOWER_SLEEVE"):
			return 73;
			break;
		
		case joaat("LEG_LEFT_LOWER_FRONT"):
			return 74;
			break;
		
		case joaat("LEG_LEFT_LOWER_BACK"):
			return 75;
			break;
		
		case joaat("LEG_LEFT_LOWER_OUTER"):
			return 76;
			break;
		
		case joaat("LEG_LEFT_LOWER_INNER"):
			return 77;
			break;
		
		case joaat("LEG_LEFT_KNEE"):
			return 78;
			break;
		
		case joaat("LEG_LEFT_ANKLE"):
			return 79;
			break;
		
		case joaat("LEG_LEFT_CALF"):
			return 80;
			break;
		
		case joaat("LEG_RIGHT_FULL_SLEEVE"):
			return 81;
			break;
		
		case joaat("LEG_RIGHT_FULL_FRONT"):
			return 82;
			break;
		
		case joaat("LEG_RIGHT_FULL_BACK"):
			return 83;
			break;
		
		case joaat("LEG_RIGHT_UPPER_SLEEVE"):
			return 84;
			break;
		
		case joaat("LEG_RIGHT_UPPER_FRONT"):
			return 85;
			break;
		
		case joaat("LEG_RIGHT_UPPER_BACK"):
			return 86;
			break;
		
		case joaat("LEG_RIGHT_UPPER_OUTER"):
			return 87;
			break;
		
		case joaat("LEG_RIGHT_UPPER_INNER"):
			return 88;
			break;
		
		case joaat("LEG_RIGHT_LOWER_SLEEVE"):
			return 89;
			break;
		
		case joaat("LEG_RIGHT_LOWER_FRONT"):
			return 90;
			break;
		
		case joaat("LEG_RIGHT_LOWER_BACK"):
			return 91;
			break;
		
		case joaat("LEG_RIGHT_LOWER_OUTER"):
			return 92;
			break;
		
		case joaat("LEG_RIGHT_LOWER_INNER"):
			return 93;
			break;
		
		case joaat("LEG_RIGHT_KNEE"):
			return 94;
			break;
		
		case joaat("LEG_RIGHT_ANKLE"):
			return 95;
			break;
		
		case joaat("LEG_RIGHT_CALF"):
			return 96;
			break;
		
		case joaat("FOOT_LEFT"):
			return 97;
			break;
		
		case joaat("FOOT_RIGHT"):
			return 98;
			break;
	}
	switch (unk_0x70E57E9927B6BA58(sParam1))
	{
		case 1948764112:
			return -1;
			break;
		
		case joaat("TAT_FM_204"):
			return 12;
			break;
		
		case joaat("TAT_FM_205"):
			return 12;
			break;
		
		case joaat("TAT_FM_209"):
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 75;
			}
			else
			{
				return 65;
			}
			break;
		
		case joaat("TAT_FM_221"):
			return 26;
			break;
		
		case joaat("TAT_FM_219"):
			return 47;
			break;
		
		case joaat("TAT_FM_201"):
			return 1;
			break;
		
		case joaat("TAT_FM_222"):
			return 75;
			break;
		
		case joaat("TAT_FM_202"):
			return 1;
			break;
		
		case joaat("TAT_FM_210"):
			return 89;
			break;
		
		case joaat("TAT_FM_211"):
			return 73;
			break;
		
		case joaat("TAT_FM_247"):
			return 22;
			break;
		
		case joaat("TAT_FM_223"):
			return 91;
			break;
		
		case joaat("TAT_FM_213"):
			return 26;
			break;
		
		case joaat("TAT_FM_224"):
			return 73;
			break;
		
		case joaat("TAT_FM_225"):
			return 38;
			break;
		
		case joaat("TAT_FM_218"):
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 40;
			}
			else
			{
				return 42;
			}
			break;
		
		case joaat("TAT_FM_214"):
			return 31;
			break;
		
		case joaat("TAT_FM_226"):
			return 42;
			break;
		
		case joaat("TAT_FM_220"):
			return 47;
			break;
		
		case joaat("TAT_FM_227"):
			return 75;
			break;
		
		case joaat("TAT_FM_228"):
			return 20;
			break;
		
		case joaat("TAT_FM_215"):
			return 32;
			break;
		
		case joaat("TAT_FM_229"):
			return 14;
			break;
		
		case joaat("TAT_FM_230"):
			return 52;
			break;
		
		case joaat("TAT_FM_231"):
			return 30;
			break;
		
		case joaat("TAT_FM_232"):
			return 6;
			break;
		
		case joaat("TAT_FM_233"):
			return 80;
			break;
		
		case joaat("TAT_FM_207"):
			return 13;
			break;
		
		case joaat("TAT_FM_234"):
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 67;
			}
			else
			{
				return 75;
			}
			break;
		
		case joaat("TAT_FM_235"):
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 40;
			}
			else
			{
				return 42;
			}
			break;
		
		case joaat("TAT_FM_236"):
			return 73;
			break;
		
		case joaat("TAT_FM_237"):
			return 47;
			break;
		
		case joaat("TAT_FM_238"):
			return 73;
			break;
		
		case joaat("TAT_FM_203"):
			return 10;
			break;
		
		case joaat("TAT_FM_216"):
			return 26;
			break;
		
		case joaat("TAT_FM_011"):
			return 42;
			break;
		
		case joaat("TAT_FM_212"):
			return 89;
			break;
		
		case joaat("TAT_FM_239"):
			return 16;
			break;
		
		case joaat("TAT_FM_240"):
			return 91;
			break;
		
		case joaat("TAT_FM_241"):
			return 82;
			break;
		
		case joaat("TAT_FM_208"):
			return 13;
			break;
		
		case joaat("TAT_FM_017"):
			return 75;
			break;
		
		case joaat("TAT_FM_217"):
			return 26;
			break;
		
		case joaat("TAT_FM_242"):
			return 10;
			break;
		
		case joaat("TAT_FM_243"):
			return 90;
			break;
		
		case joaat("TAT_FM_244"):
			return 89;
			break;
		
		case joaat("TAT_FM_245"):
			return 38;
			break;
		
		case joaat("TAT_FM_010"):
			return 20;
			break;
		
		case joaat("TAT_FM_246"):
			return 26;
			break;
		
		case joaat("TAT_FM_206"):
			return 18;
			break;
		
		case joaat("TAT_FM_008"):
			return 56;
			break;
		
		case joaat("TAT_FM_009"):
			return 3;
			break;
		
		case joaat("TAT_FM_012"):
			return 47;
			break;
		
		case joaat("TAT_FM_013"):
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case joaat("TAT_FM_014"):
			return 89;
			break;
		
		case joaat("TAT_FM_015"):
			return 6;
			break;
		
		case joaat("TAT_FM_016"):
			return 33;
			break;
		
		case joaat("TAT_FM_018"):
			return 16;
			break;
		
		case joaat("TAT_FM_019"):
			return 40;
			break;
		
		case joaat("TAT_FM_020"):
			return 40;
			break;
		
		case joaat("TAT_FM_021"):
			return 40;
			break;
		
		case joaat("TAT_FM_022"):
			return 33;
			break;
		
		case joaat("TAT_FM_023"):
			return 6;
			break;
		
		case joaat("TAT_FM_024"):
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case joaat("TAT_FM_025"):
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case joaat("TAT_FM_026"):
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case joaat("TAT_FM_027"):
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case -1516865571:
			return 44;
			break;
		
		case 2130586285:
			return 32;
			break;
		
		case 386521802:
			return 3;
			break;
		
		case 579924440:
			return 33;
			break;
		
		case 741770527:
			return 31;
			break;
		
		case 1173403795:
			return 33;
			break;
		
		case -569087776:
			return 45;
			break;
		
		case -1344959389:
			return 89;
			break;
		
		case -211217527:
			return 64;
			break;
		
		case 86488838:
			return 53;
			break;
		
		case 705494964:
			return 52;
			break;
		
		case -137684175:
			return 30;
			break;
		
		case -979388709:
			return 41;
			break;
		
		case 324653646:
			return 43;
			break;
		
		case -518820414:
			return 52;
			break;
		
		case -1361737401:
			return 20;
			break;
		
		case 2010946386:
			return 8;
			break;
		
		case -894811920:
			return 10;
			break;
		
		case 165068612:
			return 28;
			break;
		
		case 1549427782:
			return 40;
			break;
		
		case -927613913:
			return 42;
			break;
		
		case 385144996:
			return 56;
			break;
		
		case -814626401:
			return 57;
			break;
		
		case -1248225809:
			return 52;
			break;
		
		case 1910378101:
			return 8;
			break;
		
		case -2124501642:
			return 91;
			break;
		
		case -1943747838:
			return 20;
			break;
		
		case -1570115700:
			return 75;
			break;
		
		case 931699147:
			return 62;
			break;
		
		case 1019520067:
			return 63;
			break;
		
		case joaat("TORSO_P2_4_4"):
			return 20;
			break;
		
		case joaat("TORSO_P2_4_5"):
			return 58;
			break;
		
		case joaat("TORSO_P2_4_6"):
			return 47;
			break;
		
		case -1628534963:
			return 37;
			break;
		
		case -1051898870:
			return 33;
			break;
		
		case 1334929540:
			return 80;
			break;
		
		case 1097124907:
			return 64;
			break;
		
		case 747545215:
			return 62;
			break;
		
		case 61892743:
			return 96;
			break;
		
		case 501548332:
			return 15;
			break;
		
		case -244169717:
			return 48;
			break;
		
		case 421886905:
			return 37;
			break;
		
		case -1398791504:
			return 33;
			break;
		
		case -106152761:
			return 3;
			break;
		
		case 125491300:
			return 41;
			break;
		
		case -1576950557:
			return 52;
			break;
		
		case -1815115649:
			return 53;
			break;
		
		case -1043396870:
			return 59;
			break;
		
		case -1388618285:
			return 3;
			break;
		
		case -948484638:
			return 48;
			break;
		
		case 643387405:
			return 33;
			break;
		
		case 979630098:
			return 64;
			break;
		
		case 211688583:
			return 62;
			break;
		
		case 1343791995:
			return 60;
			break;
		
		case 576309246:
			return 20;
			break;
		
		case 949154944:
			return 40;
			break;
		
		case -622511834:
			return 42;
			break;
		
		case -275651969:
			return 11;
			break;
		
		case -1256283855:
			return 15;
			break;
		
		case 955525350:
			return 40;
			break;
		
		case 1252641873:
			return 22;
			break;
		
		case -2034766264:
			return 40;
			break;
		
		case 1748021562:
			return 22;
			break;
		
		case -657146050:
			return 30;
			break;
		
		case -955835485:
			return 19;
			break;
		
		case -1269959119:
			return 40;
			break;
		
		case -1478763187:
			return 4;
			break;
		
		case -1881592504:
			return 15;
			break;
		
		case 2115996117:
			return 62;
			break;
		
		case 1824417551:
			return 45;
			break;
		
		case 1502068898:
			return 24;
			break;
		
		case -2019287742:
			return 22;
			break;
		
		case -1780827729:
			return 80;
			break;
		
		case -1966497207:
			return 25;
			break;
		
		case -2126999769:
			return 30;
			break;
		
		case 2014772448:
			return 30;
			break;
		
		case 1705760778:
			return 44;
			break;
		
		case 497993745:
			return 15;
			break;
		
		case 1142887665:
			return 9;
			break;
		
		case 22777707:
			return 3;
			break;
		
		case 799173624:
			return 16;
			break;
		
		case -410297401:
			return 17;
			break;
		
		case 214410819:
			return 75;
			break;
		
		case -2098342992:
			return 23;
			break;
		
		case -1280920283:
			return 64;
			break;
		
		case -1501455653:
			return 16;
			break;
		
		case 2117454408:
			return 25;
			break;
		
		case -1945704982:
			return 32;
			break;
		
		case -1581870771:
			return 31;
			break;
		
		case -1350521631:
			return 10;
			break;
		
		case -954508266:
			return 5;
			break;
		
		case -716244867:
			return 4;
			break;
		
		case 185361399:
			return 52;
			break;
		
		case -1208107213:
			return 35;
			break;
		
		case -812421538:
			return 30;
			break;
		
		case -566096965:
			return 32;
			break;
		
		case -316757644:
			return 38;
			break;
		
		case -103496992:
			return 24;
			break;
		
		case 391708136:
			return 52;
			break;
		
		case 616667309:
			return 20;
			break;
		
		case 870102755:
			return 10;
			break;
		
		case 1093030262:
			return 92;
			break;
		
		case 1378218869:
			return 0;
			break;
		
		case 332555747:
			return 80;
			break;
		
		case 1077526193:
			return 34;
			break;
		
		case 1332632858:
			return 91;
			break;
		
		case 1556379590:
			return 10;
			break;
		
		case 1780093553:
			return 22;
			break;
		
		case 2001284303:
			return 14;
			break;
		
		case -2059941716:
			return 30;
			break;
		
		case -1759875983:
			return 40;
			break;
		
		case -1521153818:
			return 24;
			break;
	}
	if (iParam2 == 0 && unk_0xD6F9DEE4765092A9(sParam1))
	{
		return -1;
	}
	switch (iParam2)
	{
		case joaat("rank"):
			return -1;
			break;
	}
	return -1;
}

bool func_98(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	func_104(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
	if (unk_0xFC8BFE4B41177C22(iParam3) && !unk_0x4FAFF4BCB7633475(iParam3))
	{
		iVar0 = unk_0x4B423FAA24E8ABF0(iParam3);
	}
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					func_104(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
				
				case 1:
					func_104(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
				
				case 2:
					func_104(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
				
				case 3:
					func_104(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
				
				case 4:
					func_104(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
				
				case 5:
					func_104(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
				
				case 6:
					func_104(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
				
				case 7:
					func_104(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
				
				case 8:
					func_104(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
				
				case 9:
					if (func_103() || func_102())
					{
						iVar1 = 400;
						if (func_74() && (func_101() || func_100()))
						{
							iVar1 = 0;
						}
						func_104(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
					}
					break;
				
				case 10:
					func_104(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
				
				case 11:
					func_104(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
				
				case 12:
					func_104(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
				
				case 13:
					func_104(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
				
				case 14:
					func_104(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
				
				case 15:
					func_104(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
				
				case 16:
					func_104(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
				
				case 17:
					func_104(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
				
				case 18:
					func_104(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
				
				case 19:
					func_104(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
				
				case 20:
					func_104(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
				
				default:
					func_99(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_103() || func_102())
					{
						iVar1 = 450;
						if (func_74() && (func_101() || func_100()))
						{
							iVar1 = 0;
						}
						func_104(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
					}
					break;
				
				case 1:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
				
				case 2:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
				
				case 3:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
				
				case 4:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
				
				case 5:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
				
				case 6:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
				
				case 7:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
				
				case 8:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
				
				case 9:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
				
				case 10:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
				
				case 11:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
				
				case 12:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
				
				case 13:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
				
				case 14:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
				
				case 15:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
				
				case 16:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
				
				case 17:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
				
				case 18:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
				
				case 19:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
				
				case 20:
					break;
				
				case 21:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
				
				case 22:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
				
				case 23:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
				
				case 24:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
				
				case 25:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
				
				case 26:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
				
				case 27:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
				
				case 28:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
				
				case 29:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
				
				case 30:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
				
				case 31:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
				
				case 32:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
				
				case 33:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
				
				case 34:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
				
				case 35:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
				
				case 36:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
				
				case 37:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
				
				case 38:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
				
				case 39:
					func_104(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
				
				default:
					func_99(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
				
				case 1:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
				
				case 2:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
				
				case 3:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
				
				case 4:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
				
				case 5:
					if (func_103() || func_102())
					{
						iVar1 = 380;
						if (func_74() && (func_101() || func_100()))
						{
							iVar1 = 0;
						}
						func_104(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
					}
					break;
				
				case 6:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
				
				case 7:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
				
				case 8:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
				
				case 9:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
				
				case 10:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
				
				case 11:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
				
				case 12:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
				
				case 13:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
				
				case 14:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
				
				case 15:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
				
				case 16:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
				
				case 17:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
				
				case 18:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
				
				case 19:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
				
				case 20:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
				
				case 21:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
				
				case 22:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
				
				case 23:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
				
				case 24:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
				
				case 25:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
				
				case 26:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
				
				case 27:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
				
				case 28:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
				
				case 29:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
				
				case 30:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
				
				case 31:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
				
				case 32:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
				
				case 33:
					func_104(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
				
				default:
					func_99(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, round((to_float(20000) * Global_262145.f_2917)), 0);
					break;
				
				case 1:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, round((to_float(1400) * Global_262145.f_2918)), 2);
					break;
				
				case 2:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, round((to_float(9750) * Global_262145.f_2919)), 3);
					break;
				
				case 3:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, round((to_float(2150) * Global_262145.f_2920)), 0);
					break;
				
				case 4:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, round((to_float(10000) * Global_262145.f_2921)), 0);
					break;
				
				case 54:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, round((to_float(12400) * Global_262145.f_2922)), 1);
					break;
				
				case 5:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, round((to_float(3500) * Global_262145.f_2923)), 0);
					break;
				
				case 6:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, round((to_float(4950) * Global_262145.f_2924)), 2);
					break;
				
				case 55:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, round((to_float(1350) * Global_262145.f_2925)), 1);
					break;
				
				case 7:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, round((to_float(1450) * Global_262145.f_2926)), 0);
					break;
				
				case 8:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, round((to_float(2700) * Global_262145.f_2927)), 7);
					break;
				
				case 9:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, round((to_float(1200) * Global_262145.f_2928)), 0);
					break;
				
				case 10:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, round((to_float(1500) * Global_262145.f_2929)), 0);
					break;
				
				case 11:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, round((to_float(2650) * Global_262145.f_2930)), 0);
					break;
				
				case 56:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, round((to_float(1900) * Global_262145.f_2931)), 1);
					break;
				
				case 12:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, round((to_float(4950) * Global_262145.f_2932)), 2);
					break;
				
				case 57:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, round((to_float(2400) * Global_262145.f_2933)), 1);
					break;
				
				case 58:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, round((to_float(5100) * Global_262145.f_2934)), 1);
					break;
				
				case 59:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, round((to_float(7400) * Global_262145.f_2935)), 1);
					break;
				
				case 60:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, round((to_float(10000) * Global_262145.f_2936)), 1);
					break;
				
				case 17:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, round((to_float(2400) * Global_262145.f_2941)), 2);
					break;
				
				case 18:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, round((to_float(5100) * Global_262145.f_2942)), 2);
					break;
				
				case 19:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, round((to_float(3600) * Global_262145.f_2943)), 2);
					break;
				
				case 20:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, round((to_float(10000) * Global_262145.f_2944)), 3);
					break;
				
				case 21:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, round((to_float(12500) * Global_262145.f_2945)), 3);
					break;
				
				case 22:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, round((to_float(10000) * Global_262145.f_2946)), 3);
					break;
				
				case 23:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, round((to_float(5000) * Global_262145.f_2947)), 3);
					break;
				
				case 24:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, round((to_float(7500) * Global_262145.f_2948)), 3);
					break;
				
				case 25:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, round((to_float(3750) * Global_262145.f_2949)), 2);
					break;
				
				case 26:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, round((to_float(3750) * Global_262145.f_2950)), 3);
					break;
				
				case 27:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, round((to_float(4800) * Global_262145.f_2951)), 3);
					break;
				
				case 28:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, round((to_float(3500) * Global_262145.f_2952)), 3);
					break;
				
				case 61:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, round((to_float(12350) * Global_262145.f_2953)), 1);
					break;
				
				case 62:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, round((to_float(1900) * Global_262145.f_2954)), 1);
					break;
				
				case 63:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, round((to_float(4500) * Global_262145.f_2955)), 1);
					break;
				
				case 64:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, round((to_float(12250) * Global_262145.f_2956)), 1);
					break;
				
				case 65:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, round((to_float(12300) * Global_262145.f_2957)), 1);
					break;
				
				case 29:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, round((to_float(2500) * Global_262145.f_2958)), 0);
					break;
				
				case 30:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, round((to_float(10000) * Global_262145.f_2959)), 0);
					break;
				
				case 31:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, round((to_float(10000) * Global_262145.f_2960)), 0);
					break;
				
				case 66:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, round((to_float(7500) * Global_262145.f_2961)), 1);
					break;
				
				case 32:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, round((to_float(5000) * Global_262145.f_2962)), 2);
					break;
				
				case 33:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, round((to_float(7300) * Global_262145.f_2963)), 3);
					break;
				
				case 34:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, round((to_float(7250) * Global_262145.f_2964)), 2);
					break;
				
				case 35:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, round((to_float(11900) * Global_262145.f_2965)), 0);
					break;
				
				case 36:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, round((to_float(2750) * Global_262145.f_2966)), 0);
					break;
				
				case 37:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, round((to_float(1750) * Global_262145.f_2967)), 0);
					break;
				
				case 38:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, round((to_float(7300) * Global_262145.f_2968)), 3);
					break;
				
				case 39:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, round((to_float(3250) * Global_262145.f_2969)), 2);
					break;
				
				case 40:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, round((to_float(1000) * Global_262145.f_2970)), 0);
					break;
				
				case 67:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, round((to_float(5000) * Global_262145.f_2971)), 1);
					break;
				
				case 41:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, round((to_float(7500) * Global_262145.f_2972)), 2);
					break;
				
				case 68:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, round((to_float(5100) * Global_262145.f_2973)), 1);
					break;
				
				case 42:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, round((to_float(5050) * Global_262145.f_2974)), 0);
					break;
				
				case 43:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, round((to_float(2450) * Global_262145.f_2975)), 2);
					break;
				
				case 44:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, round((to_float(4950) * Global_262145.f_2976)), 0);
					break;
				
				case 45:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, round((to_float(5100) * Global_262145.f_2977)), 0);
					break;
				
				case 46:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, round((to_float(12250) * Global_262145.f_2978)), 0);
					break;
				
				case 47:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, round((to_float(1150) * Global_262145.f_2979)), 3);
					break;
				
				case 48:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, round((to_float(7500) * Global_262145.f_2980)), 3);
					break;
				
				case 49:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, round((to_float(7600) * Global_262145.f_2981)), 3);
					break;
				
				case 50:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, round((to_float(2600) * Global_262145.f_2982)), 2);
					break;
				
				case 51:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, round((to_float(2500) * Global_262145.f_2983)), 3);
					break;
				
				case 52:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, round((to_float(7450) * Global_262145.f_2984)), 3);
					break;
				
				case 53:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, round((to_float(7500) * Global_262145.f_2985)), 0);
					break;
				
				case 69:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, round((to_float(10000) * Global_262145.f_2986)), 1);
					break;
				
				case 70:
					func_104(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, round((to_float(2500) * Global_262145.f_2987)), 2);
					break;
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 86:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 90:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 91:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 124:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 125:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2988)), 0);
						break;
					
					case 88:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2989)), 0);
						break;
					
					case 89:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2990)), 0);
						break;
					
					case 93:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_104(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2937)), 0);
						break;
					
					case 14:
						func_104(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2938)), 0);
						break;
					
					case 15:
						func_104(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2939)), 2);
						break;
					
					case 16:
						func_104(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2940)), 0);
						break;
					
					case 71:
						func_104(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2940)), 0);
						break;
					
					case 72:
						func_104(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2940)), 0);
						break;
				}
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 92:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2988)), 0);
						break;
					
					case 88:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2989)), 0);
						break;
					
					case 89:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2990)), 0);
						break;
					
					case 93:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 118:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 119:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 120:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 121:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 122:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_104(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_104(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2937)), 0);
						break;
					
					case 14:
						func_104(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2938)), 0);
						break;
					
					case 15:
						func_104(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2939)), 2);
						break;
					
					case 16:
						func_104(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2940)), 0);
						break;
					}
			}
			break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129)
	{
		func_99(sParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22)
	{
		sParam0->f_7 *= 2;
	}
	return sParam0->f_11 != -1;
}

void func_99(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	
	iVar0 = (iParam2 - iParam3);
	iVar1 = unk_0x82D6E3FDBD0A80B6(iParam1);
	if (iVar1 > 0 && iVar0 < iVar1)
	{
		if (unk_0xC8FF7E3E267EBEF5(iParam1, iVar0, &Var2))
		{
			if (!unk_0x4BFA043D318BF9AE(Var2.f_0))
			{
				sParam0->f_11 = iParam2;
				MemCopy(sParam0, {Var2.f_7}, 4);
				sParam0->f_5 = Var2.f_3;
				sParam0->f_4 = Var2.f_2;
				sParam0->f_8 = Var2.f_6;
				sParam0->f_6 = iParam1;
				sParam0->f_7 = Var2.f_4;
				sParam0->f_9 = (iParam2 / 32);
				sParam0->f_10 = (iParam2 % 32);
				sParam0->f_12 = Var2.f_5;
			}
		}
	}
}

int func_100()
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (BitTest(Global_25, 5))
	{
		if (BitTest(Global_25, 1) || BitTest(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &uVar0, -1))
	{
		if (BitTest(uVar0, 5))
		{
			if (BitTest(uVar0, 1) || BitTest(uVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x7A207DD1AEF9D26E(0))
	{
		if (Global_152525.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0xDF7F16323520B858(iVar2, &uVar1, -1))
			{
				if (BitTest(uVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x76CA59C648318506())
	{
		uVar3 = unk_0x38640D2193CB547F(866);
		if (BitTest(uVar3, 1) || BitTest(uVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x753B42F8D561B8E2())
			{
				unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &uVar4, -1);
				unk_0x0B0C9A0F9AAEB7F0(&uVar4, 1);
				unk_0x0B0C9A0F9AAEB7F0(&uVar4, 3);
				unk_0x0B0C9A0F9AAEB7F0(&uVar4, 5);
				unk_0x0B0C9A0F9AAEB7F0(&Global_25, 1);
				unk_0x0B0C9A0F9AAEB7F0(&Global_25, 3);
				unk_0x0B0C9A0F9AAEB7F0(&Global_25, 5);
				unk_0x1164A75E490C27B6(joaat("sp_unlock_exclus_content"), uVar4, 1);
				if (unk_0x76CA59C648318506())
				{
					iVar4 = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&iVar4, 1);
					unk_0x0B0C9A0F9AAEB7F0(&iVar4, 3);
					unk_0xED11291F7127888E(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_101()
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	if (BitTest(Global_25, 6))
	{
		if (BitTest(Global_25, 2) || BitTest(Global_25, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &uVar0, -1))
	{
		if (BitTest(uVar0, 6))
		{
			if (BitTest(uVar0, 2) || BitTest(uVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x7A207DD1AEF9D26E(0))
	{
		if (Global_152525.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0xDF7F16323520B858(iVar2, &uVar1, -1))
			{
				if (BitTest(uVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x76CA59C648318506())
	{
		uVar3 = unk_0x38640D2193CB547F(866);
		if (BitTest(uVar3, 2) || BitTest(uVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_102()
{
	return 1;
}

int func_103()
{
	return 1;
}

void func_104(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)
{
	char cVar0[32];
	
	sParam0->f_11 = iParam1;
	StringCopy(sParam0, sParam3, 16);
	sParam0->f_4 = unk_0x70E57E9927B6BA58(sParam4);
	sParam0->f_5 = unk_0x70E57E9927B6BA58(sParam5);
	sParam0->f_8 = unk_0x70E57E9927B6BA58(sParam6);
	sParam0->f_6 = iParam7;
	sParam0->f_7 = iParam8;
	sParam0->f_9 = (iParam1 / 32);
	sParam0->f_10 = (iParam1 % 32);
	sParam0->f_12 = iParam9;
	if (unk_0xFC8BFE4B41177C22(iParam2) && !unk_0x4FAFF4BCB7633475(iParam2))
	{
		if ((sParam0->f_6 == 0 || sParam0->f_6 == 1) || sParam0->f_6 == 2)
		{
		}
		else if (sParam0->f_6 == 3 || sParam0->f_6 == 4)
		{
			StringCopy(&cVar0, "", 32);
			if (((((sParam0->f_11 == 13 || sParam0->f_11 == 14) || sParam0->f_11 == 15) || sParam0->f_11 == 16) || sParam0->f_11 == 71) || sParam0->f_11 == 72)
			{
				StringConCat(&cVar0, "FM_", 32);
				StringConCat(&cVar0, "CREW_", 32);
				if (unk_0x4B423FAA24E8ABF0(iParam2) == joaat("mp_m_freemode_01"))
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			else if (unk_0x1B79E937E91F40C3(sParam6, "torsoDecal") || unk_0x1B79E937E91F40C3(sParam6, "hairOverlay"))
			{
				StringCopy(&cVar0, sParam5, 32);
			}
			else
			{
				if (((((((((((((((((((sParam0->f_11 == 0 || sParam0->f_11 == 1) || sParam0->f_11 == 2) || sParam0->f_11 == 4) || sParam0->f_11 == 3) || sParam0->f_11 == 54) || sParam0->f_11 == 5) || sParam0->f_11 == 6) || sParam0->f_11 == 55) || sParam0->f_11 == 7) || sParam0->f_11 == 8) || sParam0->f_11 == 9) || sParam0->f_11 == 10) || sParam0->f_11 == 11) || sParam0->f_11 == 56) || sParam0->f_11 == 12) || sParam0->f_11 == 57) || sParam0->f_11 == 58) || sParam0->f_11 == 59) || sParam0->f_11 == 60)
				{
					StringConCat(&cVar0, "FM_Tat_Award_", 32);
				}
				else
				{
					StringConCat(&cVar0, "FM_Tat_", 32);
				}
				if (unk_0x4B423FAA24E8ABF0(iParam2) == joaat("mp_m_freemode_01") || sParam0->f_11 == 20)
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			sParam0->f_5 = unk_0x70E57E9927B6BA58(&cVar0);
			if (unk_0x50CA4ACB66148FF0(sParam0->f_4, sParam0->f_5) == 7)
			{
				sParam0->f_11 = -1;
			}
		}
	}
}

int func_105(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		return 0;
	}
	uVar0 = func_106(iParam0, iParam1);
	iVar1 = func_77(iParam0);
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	return BitTest(uVar0, iVar1);
}

int func_106(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_107(iParam0);
	if (iVar0 == 14192)
	{
		if (func_81() == 2 && func_80() == 2)
		{
			return 0;
		}
		else
		{
			return 0;
		}
	}
	iVar1 = func_129(iVar0, iParam1, 0);
	return iVar1;
}

int func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = func_82(iVar0);
	if ((func_81() == 0 || func_80() == 0) || (func_81() == 999 && func_80() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1049;
				break;
			
			case 1:
				return 1050;
				break;
			
			case 2:
				return 1051;
				break;
			
			case 3:
				return 1052;
				break;
			
			case 4:
				return 1053;
				break;
			
			case 5:
				return 1054;
				break;
			
			case 6:
				return 1488;
				break;
			
			case 7:
				return 1489;
				break;
			
			case 8:
				return 1490;
				break;
			
			case 9:
				return 1491;
				break;
			
			case 10:
				return 1949;
				break;
			
			case 11:
				return 1950;
				break;
			
			case 12:
				return 1951;
				break;
			
			case 13:
				return 2425;
				break;
			
			case 14:
				return 2445;
				break;
			
			case 15:
				return 2448;
				break;
			
			case 16:
				return 2451;
				break;
			
			case 17:
				return 2615;
				break;
			
			case 18:
				return 2618;
				break;
			
			case 19:
				return 2621;
				break;
			
			case 20:
				return 3787;
				break;
			
			case 21:
				return 3790;
				break;
			
			case 22:
				return 3865;
				break;
			
			case 23:
				return 3868;
				break;
			
			case 24:
				return 3871;
				break;
			
			case 25:
				return 3874;
				break;
			
			case 26:
				return 5365;
			
			case 27:
				return 5368;
				break;
			
			case 28:
				return 5470;
				break;
			
			case 29:
				return 5473;
				break;
			
			case 30:
				return 6432;
				break;
			
			case 31:
				return 6435;
				break;
			
			case 32:
				return 7256;
				break;
			
			case 33:
				return 7259;
				break;
			
			case 34:
				return 7262;
				break;
			
			case 35:
				return 7971;
				break;
			
			case 36:
				return 7974;
				break;
			
			case 37:
				return 7977;
				break;
			
			case 38:
				return 7980;
				break;
			
			case 39:
				return 8502;
				break;
			
			case 40:
				return 8505;
				break;
			
			case 41:
				return 8508;
				break;
			
			case 42:
				return 8511;
				break;
			
			case 43:
				return 8907;
				break;
			
			case 44:
				return 8910;
				break;
			
			case 45:
				return 8913;
				break;
			
			case 46:
				return 10288;
				break;
			
			case 47:
				return 10291;
				break;
			
			case 48:
				return 10414;
				break;
			
			case 49:
				return 10417;
				break;
			
			case 50:
				return 11825;
				break;
			
			case 51:
				return 11828;
				break;
			
			case 52:
				break;
		}
		return 14192;
	}
	if (func_81() == 2 && func_80() == 2)
	{
		return 14192;
	}
	return 14192;
}

int func_108(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = unk_0xC0120BBCC298EA2F(iParam0, 11);
			iVar2 = func_129(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_165(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = func_144(joaat("mp_m_freemode_01"), iVar3, 11, 3);
					if ((unk_0x304A39EB177D246B(iVar4, joaat("tat_decl"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("multi_decal"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("tat_decl_no_save"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_M_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_M"):
							case joaat("MP_Heist4_Tee_039_M"):
							case joaat("MP_Heist4_Tee_041_M"):
							case joaat("MP_Heist4_Tee_043_M"):
							case joaat("MP_Heist4_Tee_049_M"):
							case joaat("MP_Heist4_Tee_051_M"):
							case joaat("MP_Heist4_Tee_055_M"):
							case joaat("MP_Heist4_Tee_057_M"):
							case joaat("MP_Heist4_Tee_059_M"):
							case joaat("MP_Heist4_Tee_061_M"):
							case joaat("MP_Heist4_Tee_063_M"):
							case joaat("MP_Heist4_Tee_065_M"):
							case -129339642:
							case 887263619:
							case -598443208:
							case -619123295:
							case -2139930425:
							case 991513037:
							case -675149090:
							case -507124931:
								return 1;
								break;
						}
					}
					else if (unk_0x304A39EB177D246B(iVar4, joaat("jacket"), 0) && !unk_0x304A39EB177D246B(iVar4, joaat("biker_vest"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
		else if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = unk_0xC0120BBCC298EA2F(iParam0, 11);
			iVar1 = unk_0xD6AED6BFCC58AF7F(iParam0, 11);
			iVar2 = func_129(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 == 3)
			{
				if (iVar1 == 14)
				{
					return 1;
				}
			}
			else if (iVar0 > 15)
			{
				iVar5 = func_165(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = func_144(joaat("mp_f_freemode_01"), iVar5, 11, 4);
					if ((unk_0x304A39EB177D246B(iVar6, joaat("tat_decl"), 0) || unk_0x304A39EB177D246B(iVar6, joaat("multi_decal"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("tat_decl_no_save"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_F_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_F"):
							case joaat("MP_Heist4_Tee_039_F"):
							case joaat("MP_Heist4_Tee_041_F"):
							case joaat("MP_Heist4_Tee_043_F"):
							case joaat("MP_Heist4_Tee_049_F"):
							case joaat("MP_Heist4_Tee_051_F"):
							case joaat("MP_Heist4_Tee_055_F"):
							case joaat("MP_Heist4_Tee_057_F"):
							case joaat("MP_Heist4_Tee_059_F"):
							case joaat("MP_Heist4_Tee_061_F"):
							case joaat("MP_Heist4_Tee_063_F"):
							case joaat("MP_Heist4_Tee_065_F"):
							case 2021781367:
							case -436866133:
							case 457275657:
							case -250832592:
							case -798760789:
							case -1634791241:
							case -1227437948:
							case -2045170715:
								return 1;
								break;
						}
					}
					else if (unk_0x304A39EB177D246B(iVar6, joaat("jacket"), 0) && !unk_0x304A39EB177D246B(iVar6, joaat("biker_vest"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
	}
	return 0;
}

int func_109(int iParam0)
{
	int iVar0;
	
	if (unk_0x834C960822A4683F())
	{
		iVar0 = Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_96.f_28;
		if (iVar0 != -1 && iVar0 < 4)
		{
			if (func_110(iVar0) != -1 && func_110(iVar0) != 0)
			{
				return 1;
			}
		}
	}
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("mp_m_freemode_01"))
		{
			if (unk_0xC0120BBCC298EA2F(iParam0, 11) == 15)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_110(int iParam0)
{
	if (func_111(1))
	{
		return Global_1665818;
	}
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return -1;
	}
	return Global_2684801.f_6316[iParam0];
}

int func_111(bool bParam0)
{
	if ((func_115(bParam0) || func_113()) || func_112(Global_4718592.f_166301))
	{
		return 1;
	}
	return 0;
}

bool func_112(int iParam0)
{
	return iParam0 == 87;
}

int func_113()
{
	return func_114(Global_4718592.f_113724);
}

int func_114(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31051[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_115(bool bParam0)
{
	if (bParam0)
	{
		return (BitTest(Global_4718592.f_160050, 12) && func_116());
	}
	return BitTest(Global_4718592.f_160050, 12);
}

int func_116()
{
	if (Global_4718592.f_114294 == 1 || Global_4718592.f_114294 == 2)
	{
		return 1;
	}
	return 0;
}

int func_117(int iParam0, bool bParam1)
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
	int iVar12;
	int iVar13;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = unk_0xC0120BBCC298EA2F(iParam0, 11);
			iVar1 = unk_0xD6AED6BFCC58AF7F(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
							return 1;
							break;
						
						case 1:
						case 7:
						case 12:
							iVar2 = func_121(joaat("mp_m_freemode_01"), 11, func_165(iParam0, 11, -1), 0);
							if (((iVar1 == 1 && iVar2 == 88) || (iVar1 == 7 && iVar2 == 89)) || (iVar1 == 12 && iVar2 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				
				case 5:
					if (!bParam1)
					{
						if (func_105(13, -1))
						{
							return 1;
						}
						else if (func_105(14, -1))
						{
							return 1;
						}
						else if (func_105(15, -1))
						{
							return 1;
						}
						else if (func_105(16, -1))
						{
							return 1;
						}
						else if (func_105(71, -1))
						{
							return 1;
						}
						else if (func_105(72, -1))
						{
						}
						else if (func_118(unk_0x259BE71D8A81D4FA(), 1) && Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_165(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = func_144(joaat("mp_m_freemode_01"), iVar3, 11, 3);
							if ((((unk_0x304A39EB177D246B(iVar4, joaat("tat_decl"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("multi_decal"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("tat_decl_no_save"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("combat_top"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_12"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = unk_0xC0120BBCC298EA2F(iParam0, 8);
			iVar1 = unk_0xD6AED6BFCC58AF7F(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar5 = func_165(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = func_144(joaat("mp_m_freemode_01"), iVar5, 8, 3);
							if (((unk_0x304A39EB177D246B(iVar6, joaat("tat_decl"), 0) || unk_0x304A39EB177D246B(iVar6, joaat("multi_decal"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("tat_decl_no_save"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("combat_top"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = unk_0xC0120BBCC298EA2F(iParam0, 11);
			iVar1 = unk_0xD6AED6BFCC58AF7F(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						
						case 7:
						case 4:
						case 9:
							iVar7 = func_121(joaat("mp_f_freemode_01"), 11, func_165(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar7 == 88) || (iVar1 == 4 && iVar7 == 89)) || (iVar1 == 9 && iVar7 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				
				case 3:
					switch (iVar1)
					{
						case 14:
							return 1;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_165(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = func_144(joaat("mp_f_freemode_01"), iVar8, 11, 4);
							if ((((unk_0x304A39EB177D246B(iVar9, joaat("tat_decl"), 0) || unk_0x304A39EB177D246B(iVar9, joaat("multi_decal"), 0)) || unk_0x304A39EB177D246B(iVar9, joaat("tat_decl_no_save"), 0)) || unk_0x304A39EB177D246B(iVar9, joaat("combat_top"), 0)) || unk_0x304A39EB177D246B(iVar9, joaat("heist_draw_13"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = unk_0xC0120BBCC298EA2F(iParam0, 8);
			iVar1 = unk_0xD6AED6BFCC58AF7F(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						
						case 7:
						case 4:
						case 9:
							iVar10 = func_121(joaat("mp_f_freemode_01"), 11, func_165(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar10 == 88) || (iVar1 == 4 && iVar10 == 89)) || (iVar1 == 9 && iVar10 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						
						case 7:
						case 4:
						case 9:
							iVar11 = func_121(joaat("mp_f_freemode_01"), 11, func_165(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar11 == 88) || (iVar1 == 4 && iVar11 == 89)) || (iVar1 == 9 && iVar11 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar12 = func_165(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = func_144(joaat("mp_f_freemode_01"), iVar12, 8, 4);
							if (((unk_0x304A39EB177D246B(iVar13, joaat("tat_decl"), 0) || unk_0x304A39EB177D246B(iVar13, joaat("multi_decal"), 0)) || unk_0x304A39EB177D246B(iVar13, joaat("tat_decl_no_save"), 0)) || unk_0x304A39EB177D246B(iVar13, joaat("combat_top"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_118(int iParam0, bool bParam1)
{
	return func_119(iParam0, bParam1, 1);
}

int func_119(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_85())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_120(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1894573[iParam0 /*608*/].f_10;
	if (iVar0 != func_85() && Global_1894573[iVar0 /*608*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_120(int iParam0, int iParam1)
{
	if (iParam0 != func_85())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_85())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 == iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_121(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	int iVar23;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 23)
			{
				if (func_76(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				return 88;
			}
			else if (iParam2 == 28)
			{
				if (func_76(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 41)
			{
				return 86;
			}
			else if (iParam2 >= 237)
			{
				iVar0 = func_144(iParam0, iParam2, 11, 3);
				if (iVar0 != -1)
				{
					if (unk_0x304A39EB177D246B(iVar0, joaat("tat_decl"), 0) || unk_0x304A39EB177D246B(iVar0, joaat("tat_decl_no_save"), 0))
					{
						iVar1 = unk_0x9FB2D71D9CEC8B5A(iVar0);
						iVar2 = 0;
						while (iVar2 < iVar1)
						{
							unk_0xCF4D7500E7DA5D8E(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
							if (iVar5 == 10)
							{
								if (iVar3 != 0 && iVar3 != joaat("0"))
								{
									return func_93(iVar3, 3);
								}
								else
								{
									return uVar4;
								}
							}
							iVar2++;
						}
					}
					else if (unk_0x304A39EB177D246B(iVar0, joaat("multi_decal"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_129(1759, -1, 0);
						}
						return func_93(iParam3, 3);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 23)
			{
				if (func_76(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				return 88;
			}
			else if (iParam2 == 28)
			{
				if (func_76(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 33)
			{
				return 73;
			}
			else if (iParam2 == 35)
			{
				return 74;
			}
			else if (iParam2 == 37)
			{
				return 75;
			}
			else if (iParam2 == 39)
			{
				return 76;
			}
			else if (iParam2 == 36)
			{
				return 77;
			}
			else if (iParam2 == 40)
			{
				return 78;
			}
			else if (iParam2 == 43)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 227)
			{
				return 80;
			}
			else if (iParam2 == 229)
			{
				return 81;
			}
			else if (iParam2 == 230)
			{
				return 82;
			}
			else if (iParam2 == 232)
			{
				return 83;
			}
			else if (iParam2 == 228)
			{
				return 84;
			}
			else if (iParam2 == 238)
			{
				return 85;
			}
			else if (iParam2 == 231)
			{
				if (func_76(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 225)
			{
				return 88;
			}
			else if (iParam2 == 236)
			{
				if (func_76(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 >= 241)
			{
				iVar6 = func_144(iParam0, iParam2, 8, 3);
				if (iVar6 != -1)
				{
					if (unk_0x304A39EB177D246B(iVar6, joaat("tat_decl"), 0) || unk_0x304A39EB177D246B(iVar6, joaat("tat_decl_no_save"), 0))
					{
						iVar7 = unk_0x9FB2D71D9CEC8B5A(iVar6);
						iVar8 = 0;
						while (iVar8 < iVar7)
						{
							unk_0xCF4D7500E7DA5D8E(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
							if (iVar11 == 10)
							{
								if (iVar9 != 0 && iVar9 != joaat("0"))
								{
									return func_93(iVar9, 3);
								}
								else
								{
									return uVar10;
								}
							}
							iVar8++;
						}
					}
					else if (unk_0x304A39EB177D246B(iVar6, joaat("multi_decal"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_129(1759, -1, 0);
						}
						return func_93(iParam3, 3);
					}
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_76(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				return 88;
			}
			else if (iParam2 == 9)
			{
				if (func_76(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 32)
			{
				return 78;
			}
			else if (iParam2 == 33)
			{
				return 79;
			}
			else if (iParam2 == 34)
			{
				return 80;
			}
			else if (iParam2 == 35)
			{
				return 81;
			}
			else if (iParam2 == 36)
			{
				return 82;
			}
			else if (iParam2 == 62)
			{
				return 76;
			}
			else if (iParam2 == 63)
			{
				return 83;
			}
			else if (iParam2 == 186)
			{
				return 84;
			}
			else if (iParam2 == 187)
			{
				return 85;
			}
			else if (iParam2 == 191)
			{
				return 74;
			}
			else if (iParam2 >= 256)
			{
				iVar12 = func_144(iParam0, iParam2, 11, 4);
				if (iVar12 != -1)
				{
					if (unk_0x304A39EB177D246B(iVar12, joaat("tat_decl"), 0) || unk_0x304A39EB177D246B(iVar12, joaat("tat_decl_no_save"), 0))
					{
						iVar13 = unk_0x9FB2D71D9CEC8B5A(iVar12);
						iVar14 = 0;
						while (iVar14 < iVar13)
						{
							unk_0xCF4D7500E7DA5D8E(iVar12, iVar14, &iVar15, &uVar16, &iVar17);
							if (iVar17 == 10)
							{
								if (iVar15 != 0 && iVar15 != joaat("0"))
								{
									return func_93(iVar15, 4);
								}
								else
								{
									return uVar16;
								}
							}
							iVar14++;
						}
					}
					else if (unk_0x304A39EB177D246B(iVar12, joaat("multi_decal"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_129(1759, -1, 0);
						}
						return func_93(iParam3, 4);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_76(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				return 88;
			}
			else if (iParam2 == 9)
			{
				if (func_76(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 17)
			{
				return 75;
			}
			else if (iParam2 == 18)
			{
				return 77;
			}
			else if (iParam2 == 20)
			{
				if (func_76(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 23)
			{
				return 88;
			}
			else if (iParam2 == 25)
			{
				if (func_76(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 81)
			{
				return 84;
			}
			else if (iParam2 == 82)
			{
				return 85;
			}
			else if (iParam2 == 86)
			{
				return 74;
			}
			else if (iParam2 >= 136)
			{
				iVar18 = func_144(iParam0, iParam2, 8, 4);
				if (iVar18 != -1)
				{
					if (unk_0x304A39EB177D246B(iVar18, joaat("tat_decl"), 0) || unk_0x304A39EB177D246B(iVar18, joaat("tat_decl_no_save"), 0))
					{
						iVar19 = unk_0x9FB2D71D9CEC8B5A(iVar18);
						iVar20 = 0;
						while (iVar20 < iVar19)
						{
							unk_0xCF4D7500E7DA5D8E(iVar18, iVar20, &iVar21, &uVar22, &iVar23);
							if (iVar23 == 10)
							{
								if (iVar21 != 0 && iVar21 != joaat("0"))
								{
									return func_93(iVar21, 4);
								}
								else
								{
									return uVar22;
								}
							}
							iVar20++;
						}
					}
					else if (unk_0x304A39EB177D246B(iVar18, joaat("multi_decal"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_129(1759, -1, 0);
						}
						return func_93(iParam3, 4);
					}
				}
			}
		}
	}
	return -1;
}

int func_122(int iParam0)
{
	if (unk_0x89568FA9A6BC0B4A(iParam0, 1))
	{
		return 0;
	}
	switch (unk_0x4B423FAA24E8ABF0(iParam0))
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		case joaat("mp_m_freemode_01"):
			return 3;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 4;
			break;
	}
	return 0;
}

int func_123(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 0)
		{
			return 123;
			return -1;
		}
		else if (iParam1 == 1)
		{
			return 93;
		}
		else if (iParam1 == 2)
		{
			return 93;
		}
		else if (iParam1 == 3)
		{
			return 93;
		}
		else if (iParam1 == 4)
		{
			return 93;
		}
		else if (iParam1 == 5)
		{
			return 93;
		}
		else if (iParam1 == 6)
		{
			return 93;
		}
		else if (iParam1 == 7)
		{
			return 94;
		}
		else if (iParam1 == 8)
		{
			return 94;
		}
		else if (iParam1 == 9)
		{
			return 94;
		}
		else if (iParam1 == 10)
		{
			return 94;
		}
		else if (iParam1 == 11)
		{
			return 94;
		}
		else if (iParam1 == 12)
		{
			return 94;
		}
		else if (iParam1 == 13)
		{
			return 95;
		}
		else if (iParam1 == 14)
		{
			return 95;
		}
		else if (iParam1 == 15)
		{
			return 95;
		}
		else if (iParam1 == 16)
		{
			return 95;
		}
		else if (iParam1 == 17)
		{
			return 95;
		}
		else if (iParam1 == 18)
		{
			return 95;
		}
		else if (iParam1 == 19)
		{
			return 96;
		}
		else if (iParam1 == 20)
		{
			return 96;
		}
		else if (iParam1 == 21)
		{
			return 96;
		}
		else if (iParam1 == 22)
		{
			return 96;
		}
		else if (iParam1 == 23)
		{
			return 96;
		}
		else if (iParam1 == 24)
		{
			return 96;
		}
		else if (iParam1 == 25)
		{
			return 96;
		}
		else if (iParam1 == 26)
		{
			return 97;
		}
		else if (iParam1 == 27)
		{
			return 97;
		}
		else if (iParam1 == 28)
		{
			return 97;
		}
		else if (iParam1 == 29)
		{
			return 97;
		}
		else if (iParam1 == 30)
		{
			return 97;
		}
		else if (iParam1 == 31)
		{
			return 97;
		}
		else if (iParam1 == 32)
		{
			return 98;
		}
		else if (iParam1 == 33)
		{
			return 98;
		}
		else if (iParam1 == 34)
		{
			return 98;
		}
		else if (iParam1 == 35)
		{
			return 98;
		}
		else if (iParam1 == 36)
		{
			return 98;
		}
		else if (iParam1 == 37)
		{
			return 98;
		}
		else if (iParam1 == 38)
		{
			return 99;
		}
		else if (iParam1 == 39)
		{
			return 99;
		}
		else if (iParam1 == 40)
		{
			return 99;
		}
		else if (iParam1 == 41)
		{
			return 99;
		}
		else if (iParam1 == 42)
		{
			return 99;
		}
		else if (iParam1 == 43)
		{
			return 99;
		}
		else if (iParam1 == 44)
		{
			return 99;
		}
		else if (iParam1 == 45)
		{
			return 100;
		}
		else if (iParam1 == 46)
		{
			return 100;
		}
		else if (iParam1 == 47)
		{
			return 100;
		}
		else if (iParam1 == 48)
		{
			return 100;
		}
		else if (iParam1 == 49)
		{
			return 100;
		}
		else if (iParam1 == 50)
		{
			return 101;
		}
		else if (iParam1 == 51)
		{
			return 101;
		}
		else if (iParam1 == 52)
		{
			return 101;
		}
		else if (iParam1 == 53)
		{
			return 101;
		}
		else if (iParam1 == 54)
		{
			return 101;
		}
		else if (iParam1 == 55)
		{
			return 101;
		}
		else if (iParam1 == 56)
		{
			return 101;
		}
		else if (iParam1 == 57)
		{
			return 102;
		}
		else if (iParam1 == 58)
		{
			return 102;
		}
		else if (iParam1 == 59)
		{
			return 102;
		}
		else if (iParam1 == 60)
		{
			return 102;
		}
		else if (iParam1 == 61)
		{
			return 102;
		}
		else if (iParam1 == 62)
		{
			return 102;
		}
		else if (iParam1 == 63)
		{
			return 103;
		}
		else if (iParam1 == 64)
		{
			return 103;
		}
		else if (iParam1 == 65)
		{
			return 103;
		}
		else if (iParam1 == 66)
		{
			return 103;
		}
		else if (iParam1 == 67)
		{
			return 103;
		}
		else if (iParam1 == 68)
		{
			return 103;
		}
		else if (iParam1 == 69)
		{
			return 104;
		}
		else if (iParam1 == 70)
		{
			return 104;
		}
		else if (iParam1 == 71)
		{
			return 104;
		}
		else if (iParam1 == 72)
		{
			return 104;
		}
		else if (iParam1 == 73)
		{
			return 104;
		}
		else if (iParam1 == 74)
		{
			return 105;
		}
		else if (iParam1 == 75)
		{
			return 105;
		}
		else if (iParam1 == 76)
		{
			return 105;
		}
		else if (iParam1 == 77)
		{
			return 105;
		}
		else if (iParam1 == 78)
		{
			return 105;
		}
		else if (iParam1 == 79)
		{
			return 105;
		}
		else if (iParam1 == 80)
		{
			return 106;
		}
		else if (iParam1 == 81)
		{
			return 106;
		}
		else if (iParam1 == 82)
		{
			return 106;
		}
		else if (iParam1 == 83)
		{
			return 106;
		}
		else if (iParam1 == 84)
		{
			return 106;
		}
		else if (iParam1 == 85)
		{
			return 107;
		}
		else if (iParam1 == 86)
		{
			return 107;
		}
		else if (iParam1 == 87)
		{
			return 107;
		}
		else if (iParam1 == 88)
		{
			return 107;
		}
		else if (iParam1 == 89)
		{
			return 107;
		}
		else if (iParam1 == 90)
		{
			return 107;
		}
		else if (iParam1 >= 91)
		{
			iVar0 = func_144(iParam0, iParam1, 2, 3);
			if (iVar0 != -1)
			{
				switch (iVar0)
				{
					case joaat("dlc_mp_beach_m_hair00"):
					case joaat("dlc_mp_beach_m_hair01"):
					case joaat("dlc_mp_beach_m_hair02"):
					case joaat("dlc_mp_beach_m_hair03"):
					case joaat("dlc_mp_beach_m_hair04"):
					case joaat("dlc_mp_gr_m_hair_15_0"):
						return 108;
						break;
					
					case joaat("dlc_mp_beach_m_hair05"):
					case joaat("dlc_mp_beach_m_hair06"):
					case joaat("dlc_mp_beach_m_hair07"):
					case joaat("dlc_mp_beach_m_hair08"):
					case joaat("dlc_mp_beach_m_hair09"):
					case joaat("dlc_mp_gr_m_hair_16_0"):
						return 109;
						break;
					
					case joaat("dlc_mp_busi_m_hair0_0"):
					case joaat("dlc_mp_busi_m_hair0_1"):
					case joaat("dlc_mp_busi_m_hair0_2"):
					case joaat("dlc_mp_busi_m_hair0_3"):
					case joaat("dlc_mp_busi_m_hair0_4"):
						return 110;
						break;
					
					case joaat("dlc_mp_busi_m_hair1_0"):
					case joaat("dlc_mp_busi_m_hair1_1"):
					case joaat("dlc_mp_busi_m_hair1_2"):
					case joaat("dlc_mp_busi_m_hair1_3"):
					case joaat("dlc_mp_busi_m_hair1_4"):
						return 111;
						break;
					
					case joaat("dlc_mp_hips_m_hair0_0"):
					case joaat("dlc_mp_hips_m_hair0_1"):
					case joaat("dlc_mp_hips_m_hair0_2"):
					case joaat("dlc_mp_hips_m_hair0_3"):
					case joaat("dlc_mp_hips_m_hair0_4"):
						return 112;
						break;
					
					case joaat("dlc_mp_hips_m_hair1_0"):
					case joaat("dlc_mp_hips_m_hair1_1"):
					case joaat("dlc_mp_hips_m_hair1_2"):
					case joaat("dlc_mp_hips_m_hair1_3"):
					case joaat("dlc_mp_hips_m_hair1_4"):
						return 113;
						break;
					
					case 1577121865:
					case 884057515:
					case 2055188806:
					case 1362452146:
					case -1761842625:
						return 114;
						break;
				}
				iVar1 = unk_0x9FB2D71D9CEC8B5A(iVar0);
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					unk_0xCF4D7500E7DA5D8E(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
					if (iVar5 == 10)
					{
						if (iVar3 != 0 && iVar3 != joaat("0"))
						{
							return func_93(iVar3, 3);
						}
						else
						{
							return uVar4;
						}
					}
					iVar2++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 0)
		{
			return 123;
			return -1;
		}
		else if (iParam1 == 1)
		{
			return 93;
		}
		else if (iParam1 == 2)
		{
			return 93;
		}
		else if (iParam1 == 3)
		{
			return 93;
		}
		else if (iParam1 == 4)
		{
			return 93;
		}
		else if (iParam1 == 5)
		{
			return 93;
		}
		else if (iParam1 == 6)
		{
			return 93;
		}
		else if (iParam1 == 7)
		{
			return 94;
		}
		else if (iParam1 == 8)
		{
			return 94;
		}
		else if (iParam1 == 9)
		{
			return 94;
		}
		else if (iParam1 == 10)
		{
			return 94;
		}
		else if (iParam1 == 11)
		{
			return 94;
		}
		else if (iParam1 == 12)
		{
			return 94;
		}
		else if (iParam1 == 13)
		{
			return 95;
		}
		else if (iParam1 == 14)
		{
			return 95;
		}
		else if (iParam1 == 15)
		{
			return 95;
		}
		else if (iParam1 == 16)
		{
			return 95;
		}
		else if (iParam1 == 17)
		{
			return 95;
		}
		else if (iParam1 == 18)
		{
			return 96;
		}
		else if (iParam1 == 19)
		{
			return 96;
		}
		else if (iParam1 == 20)
		{
			return 96;
		}
		else if (iParam1 == 21)
		{
			return 96;
		}
		else if (iParam1 == 22)
		{
			return 96;
		}
		else if (iParam1 == 23)
		{
			return 96;
		}
		else if (iParam1 == 24)
		{
			return 97;
		}
		else if (iParam1 == 25)
		{
			return 97;
		}
		else if (iParam1 == 26)
		{
			return 97;
		}
		else if (iParam1 == 27)
		{
			return 97;
		}
		else if (iParam1 == 28)
		{
			return 97;
		}
		else if (iParam1 == 29)
		{
			return 97;
		}
		else if (iParam1 == 30)
		{
			return 98;
		}
		else if (iParam1 == 31)
		{
			return 98;
		}
		else if (iParam1 == 32)
		{
			return 98;
		}
		else if (iParam1 == 33)
		{
			return 98;
		}
		else if (iParam1 == 34)
		{
			return 98;
		}
		else if (iParam1 == 35)
		{
			return 99;
		}
		else if (iParam1 == 36)
		{
			return 99;
		}
		else if (iParam1 == 37)
		{
			return 99;
		}
		else if (iParam1 == 38)
		{
			return 99;
		}
		else if (iParam1 == 39)
		{
			return 99;
		}
		else if (iParam1 == 40)
		{
			return 99;
		}
		else if (iParam1 == 41)
		{
			return 100;
		}
		else if (iParam1 == 42)
		{
			return 100;
		}
		else if (iParam1 == 43)
		{
			return 100;
		}
		else if (iParam1 == 44)
		{
			return 100;
		}
		else if (iParam1 == 45)
		{
			return 100;
		}
		else if (iParam1 == 46)
		{
			return 100;
		}
		else if (iParam1 == 47)
		{
			return 101;
		}
		else if (iParam1 == 48)
		{
			return 101;
		}
		else if (iParam1 == 49)
		{
			return 101;
		}
		else if (iParam1 == 50)
		{
			return 101;
		}
		else if (iParam1 == 51)
		{
			return 101;
		}
		else if (iParam1 == 52)
		{
			return 101;
		}
		else if (iParam1 == 53)
		{
			return 102;
		}
		else if (iParam1 == 54)
		{
			return 102;
		}
		else if (iParam1 == 55)
		{
			return 102;
		}
		else if (iParam1 == 56)
		{
			return 102;
		}
		else if (iParam1 == 57)
		{
			return 102;
		}
		else if (iParam1 == 58)
		{
			return 102;
		}
		else if (iParam1 == 59)
		{
			return 102;
		}
		else if (iParam1 == 60)
		{
			return 103;
		}
		else if (iParam1 == 61)
		{
			return 103;
		}
		else if (iParam1 == 62)
		{
			return 103;
		}
		else if (iParam1 == 63)
		{
			return 103;
		}
		else if (iParam1 == 64)
		{
			return 103;
		}
		else if (iParam1 == 65)
		{
			return 103;
		}
		else if (iParam1 == 66)
		{
			return 103;
		}
		else if (iParam1 == 67)
		{
			return 104;
		}
		else if (iParam1 == 68)
		{
			return 104;
		}
		else if (iParam1 == 69)
		{
			return 104;
		}
		else if (iParam1 == 70)
		{
			return 104;
		}
		else if (iParam1 == 71)
		{
			return 104;
		}
		else if (iParam1 == 72)
		{
			return 104;
		}
		else if (iParam1 == 73)
		{
			return 105;
		}
		else if (iParam1 == 74)
		{
			return 105;
		}
		else if (iParam1 == 75)
		{
			return 105;
		}
		else if (iParam1 == 76)
		{
			return 105;
		}
		else if (iParam1 == 77)
		{
			return 105;
		}
		else if (iParam1 == 78)
		{
			return 105;
		}
		else if (iParam1 == 79)
		{
			return func_93(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 80)
		{
			return func_93(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 81)
		{
			return func_93(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 82)
		{
			return func_93(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 83)
		{
			return func_93(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 84)
		{
			return func_93(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 85)
		{
			return 107;
		}
		else if (iParam1 == 86)
		{
			return 107;
		}
		else if (iParam1 == 87)
		{
			return 107;
		}
		else if (iParam1 == 88)
		{
			return 107;
		}
		else if (iParam1 == 89)
		{
			return 107;
		}
		else if (iParam1 == 90)
		{
			return 107;
		}
		else if (iParam1 == 91)
		{
			return 107;
		}
		else if (iParam1 >= 92)
		{
			iVar6 = func_144(iParam0, iParam1, 2, 4);
			if (iVar6 != -1)
			{
				switch (iVar6)
				{
					case joaat("dlc_mp_beach_f_hair00"):
					case joaat("dlc_mp_beach_f_hair01"):
					case joaat("dlc_mp_beach_f_hair02"):
					case joaat("dlc_mp_beach_f_hair03"):
					case joaat("dlc_mp_beach_f_hair04"):
					case joaat("dlc_mp_gr_f_hair_16_0"):
						return 108;
						break;
					
					case joaat("dlc_mp_beach_f_hair05"):
					case joaat("dlc_mp_beach_f_hair06"):
					case joaat("dlc_mp_beach_f_hair07"):
					case joaat("dlc_mp_beach_f_hair08"):
					case joaat("dlc_mp_beach_f_hair09"):
					case joaat("dlc_mp_gr_f_hair_15_0"):
						return 109;
						break;
					
					case joaat("dlc_mp_busi_f_hair0_0"):
					case joaat("dlc_mp_busi_f_hair0_1"):
					case joaat("dlc_mp_busi_f_hair0_2"):
					case joaat("dlc_mp_busi_f_hair0_3"):
					case joaat("dlc_mp_busi_f_hair0_4"):
						return 110;
						break;
					
					case joaat("dlc_mp_busi_f_hair1_0"):
					case joaat("dlc_mp_busi_f_hair1_1"):
					case joaat("dlc_mp_busi_f_hair1_2"):
					case joaat("dlc_mp_busi_f_hair1_3"):
					case joaat("dlc_mp_busi_f_hair1_4"):
						return 111;
						break;
					
					case joaat("dlc_mp_hips_f_hair0_0"):
					case joaat("dlc_mp_hips_f_hair0_1"):
					case joaat("dlc_mp_hips_f_hair0_2"):
					case joaat("dlc_mp_hips_f_hair0_3"):
					case joaat("dlc_mp_hips_f_hair0_4"):
						return 112;
						break;
					
					case joaat("dlc_mp_hips_f_hair1_0"):
					case joaat("dlc_mp_hips_f_hair1_1"):
					case joaat("dlc_mp_hips_f_hair1_2"):
					case joaat("dlc_mp_hips_f_hair1_3"):
					case joaat("dlc_mp_hips_f_hair1_4"):
						return 112;
						break;
					
					case 665775322:
					case 618391324:
					case 497473714:
					case 123808807:
					case -231538229:
						return 114;
						break;
				}
				iVar7 = unk_0x9FB2D71D9CEC8B5A(iVar6);
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					unk_0xCF4D7500E7DA5D8E(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
					if (iVar11 == 10)
					{
						if (iVar9 != 0 && iVar9 != joaat("0"))
						{
							return func_93(iVar9, 4);
						}
						else
						{
							return uVar10;
						}
					}
					iVar8++;
				}
			}
		}
	}
	return -1;
}

void func_124(int iParam0, int iParam1)
{
	struct<12> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<7> Var4;
	int iVar5;
	int iVar6;
	struct<7> Var7;
	int iVar8;
	int iVar9;
	struct<7> Var10;
	int iVar11;
	int iVar12;
	struct<7> Var13;
	int iVar14;
	
	if (!unk_0x4FAFF4BCB7633475(iParam1))
	{
		iVar1 = func_122(iParam1);
		if (iParam0 != 0)
		{
			if (iVar1 == 3 || iVar1 == 4)
			{
				if (iParam0 == 1019352240)
				{
					func_161(13, 0, Global_78338);
					func_161(14, 0, Global_78338);
					func_161(15, 0, Global_78338);
					func_161(16, 0, Global_78338);
					func_161(71, 0, Global_78338);
					func_161(72, 0, Global_78338);
					return;
				}
				else if (iParam0 == joaat("torsoDecal"))
				{
					if (iVar1 == 3)
					{
						func_161(73, 0, Global_78338);
						func_161(74, 0, Global_78338);
						func_161(75, 0, Global_78338);
						func_161(76, 0, Global_78338);
						func_161(77, 0, Global_78338);
						func_161(78, 0, Global_78338);
						func_161(79, 0, Global_78338);
						func_161(80, 0, Global_78338);
						func_161(81, 0, Global_78338);
						func_161(82, 0, Global_78338);
						func_161(83, 0, Global_78338);
						func_161(84, 0, Global_78338);
						func_161(85, 0, Global_78338);
						func_161(86, 0, Global_78338);
						func_161(90, 0, Global_78338);
						func_161(91, 0, Global_78338);
						func_161(124, 0, Global_78338);
						func_161(125, 0, Global_78338);
						func_161(87, 0, Global_78338);
						func_161(88, 0, Global_78338);
						func_161(89, 0, Global_78338);
						iVar3 = unk_0x82D6E3FDBD0A80B6(3);
						iVar2 = 0;
						while (iVar2 < iVar3)
						{
							if (unk_0xC8FF7E3E267EBEF5(3, iVar2, &Var4))
							{
								if (Var4.f_6 == joaat("torsoDecal"))
								{
									func_161((129 + iVar2), 0, Global_78338);
								}
							}
							iVar2++;
						}
					}
					else
					{
						func_161(73, 0, Global_78338);
						func_161(74, 0, Global_78338);
						func_161(75, 0, Global_78338);
						func_161(76, 0, Global_78338);
						func_161(77, 0, Global_78338);
						func_161(78, 0, Global_78338);
						func_161(79, 0, Global_78338);
						func_161(80, 0, Global_78338);
						func_161(81, 0, Global_78338);
						func_161(82, 0, Global_78338);
						func_161(83, 0, Global_78338);
						func_161(84, 0, Global_78338);
						func_161(85, 0, Global_78338);
						func_161(92, 0, Global_78338);
						func_161(87, 0, Global_78338);
						func_161(88, 0, Global_78338);
						func_161(89, 0, Global_78338);
						iVar6 = unk_0x82D6E3FDBD0A80B6(4);
						iVar5 = 0;
						while (iVar5 < iVar6)
						{
							if (unk_0xC8FF7E3E267EBEF5(4, iVar5, &Var7))
							{
								if (Var7.f_6 == joaat("torsoDecal"))
								{
									func_161((129 + iVar5), 0, Global_78338);
								}
							}
							iVar5++;
						}
					}
				}
				else if (iParam0 == 2140335355)
				{
					if (iVar1 == 3)
					{
						func_161(93, 0, Global_78338);
						func_161(94, 0, Global_78338);
						func_161(95, 0, Global_78338);
						func_161(96, 0, Global_78338);
						func_161(97, 0, Global_78338);
						func_161(98, 0, Global_78338);
						func_161(99, 0, Global_78338);
						func_161(100, 0, Global_78338);
						func_161(101, 0, Global_78338);
						func_161(102, 0, Global_78338);
						func_161(103, 0, Global_78338);
						func_161(104, 0, Global_78338);
						func_161(105, 0, Global_78338);
						func_161(106, 0, Global_78338);
						func_161(107, 0, Global_78338);
						func_161(108, 0, Global_78338);
						func_161(109, 0, Global_78338);
						func_161(110, 0, Global_78338);
						func_161(111, 0, Global_78338);
						func_161(112, 0, Global_78338);
						func_161(113, 0, Global_78338);
						func_161(114, 0, Global_78338);
						func_161(115, 0, Global_78338);
						func_161(116, 0, Global_78338);
						func_161(117, 0, Global_78338);
						func_161(123, 0, Global_78338);
						iVar9 = unk_0x82D6E3FDBD0A80B6(3);
						iVar8 = 0;
						while (iVar8 < iVar9)
						{
							if (unk_0xC8FF7E3E267EBEF5(3, iVar8, &Var10))
							{
								if (Var10.f_6 == 2140335355)
								{
									func_161((129 + iVar8), 0, Global_78338);
								}
							}
							iVar8++;
						}
					}
					else
					{
						func_161(93, 0, Global_78338);
						func_161(94, 0, Global_78338);
						func_161(95, 0, Global_78338);
						func_161(96, 0, Global_78338);
						func_161(97, 0, Global_78338);
						func_161(98, 0, Global_78338);
						func_161(99, 0, Global_78338);
						func_161(100, 0, Global_78338);
						func_161(101, 0, Global_78338);
						func_161(102, 0, Global_78338);
						func_161(103, 0, Global_78338);
						func_161(104, 0, Global_78338);
						func_161(105, 0, Global_78338);
						func_161(106, 0, Global_78338);
						func_161(107, 0, Global_78338);
						func_161(108, 0, Global_78338);
						func_161(109, 0, Global_78338);
						func_161(110, 0, Global_78338);
						func_161(111, 0, Global_78338);
						func_161(112, 0, Global_78338);
						func_161(113, 0, Global_78338);
						func_161(114, 0, Global_78338);
						func_161(115, 0, Global_78338);
						func_161(116, 0, Global_78338);
						func_161(117, 0, Global_78338);
						func_161(118, 0, Global_78338);
						func_161(119, 0, Global_78338);
						func_161(120, 0, Global_78338);
						func_161(121, 0, Global_78338);
						func_161(122, 0, Global_78338);
						func_161(123, 0, Global_78338);
						iVar12 = unk_0x82D6E3FDBD0A80B6(4);
						iVar11 = 0;
						while (iVar11 < iVar12)
						{
							if (unk_0xC8FF7E3E267EBEF5(4, iVar11, &Var13))
							{
								if (Var13.f_6 == 2140335355)
								{
									func_161((129 + iVar11), 0, Global_78338);
								}
							}
							iVar11++;
						}
					}
					return;
				}
			}
			iVar14 = 0;
			while (iVar14 < 127)
			{
				if (func_98(&Var0, iVar14, iVar1, iParam1, -1))
				{
					if (Var0.f_8 == iParam0)
					{
						func_161(Var0.f_11, 0, Global_78338);
					}
				}
				iVar14++;
			}
		}
	}
}

int func_125(int iParam0)
{
	if (Global_103222)
	{
		return func_126(iParam0);
	}
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 148;
			break;
		
		case 7:
			return 149;
			break;
		
		case 13:
			return 150;
			break;
		
		case 18:
			return 151;
			break;
		
		case 24:
			return 152;
			break;
		
		case 30:
			return 153;
			break;
		
		case 35:
			return 154;
			break;
		
		case 41:
			return 155;
			break;
		
		case 47:
			return 156;
			break;
		
		case 53:
			return 157;
			break;
		
		case 60:
			return 158;
			break;
		
		case 67:
			return 159;
			break;
		
		case 73:
			return 160;
			break;
		
		case 79:
			return 161;
			break;
		
		case 85:
			return 162;
			break;
		
		case 92:
			return 163;
			break;
		
		case 97:
			return 164;
			break;
		
		case 102:
			return 165;
			break;
		
		case 108:
			return 166;
			break;
		
		case 113:
			return 167;
			break;
		
		case 118:
			return 168;
			break;
		
		case 123:
			return 169;
			break;
		
		case 128:
			return 170;
			break;
		
		case 134:
			return 171;
			break;
		
		case 135:
			return 172;
			break;
		
		case 136:
			return 173;
			break;
		
		case 137:
			return 174;
			break;
		
		case 138:
			return 175;
			break;
		
		case 139:
			return 176;
			break;
		
		case 140:
			return 177;
			break;
		
		case 141:
			return 178;
			break;
		
		case 142:
			return 179;
			break;
		
		case 143:
			return 180;
			break;
		
		case 144:
			return 181;
			break;
		
		case 145:
			return 182;
			break;
		
		case 146:
			return 183;
			break;
		
		case 147:
			return 184;
			break;
	}
	return iParam0;
}

int func_126(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 1)
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_0_0"), 2, 4);
	}
	else if (iParam0 == 7)
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_1_0"), 2, 4);
	}
	else if (iParam0 == 13)
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_2_0"), 2, 4);
	}
	else if (iParam0 == 18)
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_3_0"), 2, 4);
	}
	else if (iParam0 == 24)
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_4_0"), 2, 4);
	}
	else if (iParam0 == 30)
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_5_0"), 2, 4);
	}
	else if (iParam0 == 35)
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_6_0"), 2, 4);
	}
	else if (iParam0 == 41)
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_7_0"), 2, 4);
	}
	else if (iParam0 == 47)
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_8_0"), 2, 4);
	}
	else if (iParam0 == 53)
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_9_0"), 2, 4);
	}
	else if (iParam0 == 60)
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_10_0"), 2, 4);
	}
	else if (iParam0 == 67)
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_11_0"), 2, 4);
	}
	else if (iParam0 == 73)
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_12_0"), 2, 4);
	}
	else if (iParam0 == 79)
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_13_0"), 2, 4);
	}
	else if (iParam0 == 85)
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_14_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_beach_f_hair00"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_15_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_beach_f_hair05"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_16_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_busi_f_hair0_0"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_18_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_busi_f_hair1_0"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_19_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_val_f_hair0_0"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_17_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_hips_f_hair0_0"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_20_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_hips_f_hair1_0"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_21_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_ind_f_hair0_0"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_22_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_low_f_hair0_0"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_23_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_low_f_hair1_0"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_24_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_low_f_hair2_0"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_25_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_low_f_hair3_0"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_26_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_low2_f_hair0_0"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_27_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_low2_f_hair1_0"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_28_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_low2_f_hair2_0"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_29_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_biker_f_hair_0_0"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_30_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_biker_f_hair_1_0"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_31_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_biker_f_hair_2_0"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_32_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_biker_f_hair_3_0"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_33_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_biker_f_hair_4_0"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_34_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_biker_f_hair_5_0"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_35_0"), 2, 4);
	}
	else if (iParam0 == func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_biker_f_hair_6_0"), 2, 4))
	{
		return func_22(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_36_0"), 2, 4);
	}
	return iParam0;
}

int func_127(int iParam0)
{
	if (Global_103222)
	{
		return func_128(iParam0);
	}
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 140;
			break;
		
		case 7:
			return 141;
			break;
		
		case 13:
			return 142;
			break;
		
		case 19:
			return 143;
			break;
		
		case 26:
			return 144;
			break;
		
		case 32:
			return 145;
			break;
		
		case 38:
			return 146;
			break;
		
		case 45:
			return 147;
			break;
		
		case 50:
			return 148;
			break;
		
		case 57:
			return 149;
			break;
		
		case 63:
			return 150;
			break;
		
		case 69:
			return 151;
			break;
		
		case 74:
			return 152;
			break;
		
		case 80:
			return 153;
			break;
		
		case 85:
			return 154;
			break;
		
		case 91:
			return 155;
			break;
		
		case 96:
			return 156;
			break;
		
		case 101:
			return 157;
			break;
		
		case 106:
			return 158;
			break;
		
		case 111:
			return 159;
			break;
		
		case 116:
			return 160;
			break;
		
		case 121:
			return 161;
			break;
		
		case 126:
			return 126;
			break;
		
		case 127:
			return 162;
			break;
		
		case 128:
			return 163;
			break;
		
		case 129:
			return 164;
			break;
		
		case 130:
			return 165;
			break;
		
		case 131:
			return 166;
			break;
		
		case 132:
			return 167;
			break;
		
		case 133:
			return 168;
			break;
		
		case 134:
			return 169;
			break;
		
		case 135:
			return 170;
			break;
		
		case 136:
			return 171;
			break;
		
		case 137:
			return 172;
			break;
		
		case 138:
			return 173;
			break;
		
		case 139:
			return 174;
			break;
	}
	return iParam0;
}

int func_128(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 1)
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_0_0"), 2, 3);
	}
	else if (iParam0 == 7)
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_1_0"), 2, 3);
	}
	else if (iParam0 == 13)
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_2_0"), 2, 3);
	}
	else if (iParam0 == 19)
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_3_0"), 2, 3);
	}
	else if (iParam0 == 26)
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_4_0"), 2, 3);
	}
	else if (iParam0 == 32)
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_5_0"), 2, 3);
	}
	else if (iParam0 == 38)
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_6_0"), 2, 3);
	}
	else if (iParam0 == 45)
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_7_0"), 2, 3);
	}
	else if (iParam0 == 50)
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_8_0"), 2, 3);
	}
	else if (iParam0 == 57)
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_9_0"), 2, 3);
	}
	else if (iParam0 == 63)
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_10_0"), 2, 3);
	}
	else if (iParam0 == 69)
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_11_0"), 2, 3);
	}
	else if (iParam0 == 74)
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_12_0"), 2, 3);
	}
	else if (iParam0 == 80)
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_13_0"), 2, 3);
	}
	else if (iParam0 == 85)
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_14_0"), 2, 3);
	}
	else if (iParam0 == func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_beach_m_hair00"), 2, 3))
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_15_0"), 2, 3);
	}
	else if (iParam0 == func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_beach_m_hair05"), 2, 3))
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_16_0"), 2, 3);
	}
	else if (iParam0 == func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_busi_m_hair0_0"), 2, 3))
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_17_0"), 2, 3);
	}
	else if (iParam0 == func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_busi_m_hair1_0"), 2, 3))
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_18_0"), 2, 3);
	}
	else if (iParam0 == func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_hips_m_hair0_0"), 2, 3))
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_19_0"), 2, 3);
	}
	else if (iParam0 == func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_hips_m_hair1_0"), 2, 3))
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_20_0"), 2, 3);
	}
	else if (iParam0 == func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_ind_m_hair0_0"), 2, 3))
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_21_0"), 2, 3);
	}
	else if (iParam0 == func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_low_m_hair0_0"), 2, 3))
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_22_0"), 2, 3);
	}
	else if (iParam0 == func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_low_m_hair1_0"), 2, 3))
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_23_0"), 2, 3);
	}
	else if (iParam0 == func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_low_m_hair2_0"), 2, 3))
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_24_0"), 2, 3);
	}
	else if (iParam0 == func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_low_m_hair3_0"), 2, 3))
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_25_0"), 2, 3);
	}
	else if (iParam0 == func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_low2_m_hair0_0"), 2, 3))
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_26_0"), 2, 3);
	}
	else if (iParam0 == func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_low2_m_hair1_0"), 2, 3))
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_27_0"), 2, 3);
	}
	else if (iParam0 == func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_low2_m_hair2_0"), 2, 3))
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_28_0"), 2, 3);
	}
	else if (iParam0 == func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_biker_m_hair_0_0"), 2, 3))
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_29_0"), 2, 3);
	}
	else if (iParam0 == func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_biker_m_hair_1_0"), 2, 3))
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_30_0"), 2, 3);
	}
	else if (iParam0 == func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_biker_m_hair_2_0"), 2, 3))
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_31_0"), 2, 3);
	}
	else if (iParam0 == func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_biker_m_hair_3_0"), 2, 3))
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_32_0"), 2, 3);
	}
	else if (iParam0 == func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_biker_m_hair_4_0"), 2, 3))
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_33_0"), 2, 3);
	}
	else if (iParam0 == func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_biker_m_hair_5_0"), 2, 3))
	{
		return func_22(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_34_0"), 2, 3);
	}
	return iParam0;
}

int func_129(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805029[iParam0 /*3*/][func_14(iParam1)];
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_130(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_164();
	if (iVar0 != -1)
	{
		if (!func_131(iParam0, iParam1, iVar0))
		{
			func_161(iVar0, 0, Global_78338);
			return 1;
		}
	}
	return 0;
}

int func_131(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_139(iParam0, iParam1, -1))
	{
		if (iParam0 == joaat("mp_m_freemode_01"))
		{
			iVar0 = -1;
			iVar1 = -1;
			if (iParam1 >= 237)
			{
				iVar1 = func_144(iParam0, iParam1, 11, 3);
				iVar0 = func_134(iVar1);
			}
			if (iVar1 != -1 && func_39(iVar1, 0) != -1)
			{
				return 0;
			}
			if (iVar1 != -1 && func_132(iVar1, 0) != -1)
			{
				return 0;
			}
			if (iVar1 != -1 && unk_0x304A39EB177D246B(iVar1, joaat("no_crew_emblem"), 0))
			{
				return 0;
			}
			if ((iVar1 == joaat("dlc_mp_val_m_jbib2_0") || iVar1 == joaat("dlc_mp_val_m_jbib2_1")) || iVar1 == joaat("dlc_mp_val_m_jbib2_2"))
			{
				return 0;
			}
			if ((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 124 && iParam1 <= 139)) || iVar0 == 0) || iVar0 == 1) || iVar0 == 8)
			{
				if (iParam2 == 15)
				{
					return 1;
				}
				else if (iParam2 == 13 || iParam2 == 14)
				{
					if (func_121(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar0 == 5)
			{
				if ((iParam2 == 16 || iParam2 == 71) || iParam2 == 72)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 140 && iParam1 <= 155) || iVar0 == 9)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					return 1;
				}
			}
		}
		else if (iParam0 == joaat("mp_f_freemode_01"))
		{
			iVar2 = -1;
			iVar3 = -1;
			if (iParam1 >= 256)
			{
				iVar3 = func_144(iParam0, iParam1, 11, 4);
				iVar2 = func_134(iVar3);
			}
			if (iVar3 != -1 && func_39(iVar3, 0) != -1)
			{
				return 0;
			}
			if (iVar3 != -1 && func_132(iVar3, 0) != -1)
			{
				return 0;
			}
			if (iVar3 != -1 && unk_0x304A39EB177D246B(iVar3, joaat("no_crew_emblem"), 0))
			{
				return 0;
			}
			if ((iParam1 >= 0 && iParam1 <= 15) || iVar2 == 0)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					if (func_121(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 32 && iParam1 <= 47) || iVar2 == 2)
			{
				if (iParam2 == 13 || iParam2 == 16)
				{
					if (func_121(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 64 && iParam1 <= 79) || iVar2 == 4)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
				if (iParam2 == 15)
				{
					if (iVar2 != 4 || !unk_0x304A39EB177D246B(iVar3, joaat("tat_decl"), 0))
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar2 == 5)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 144 && iParam1 <= 159) || iVar2 == 9)
			{
				if (iParam2 == 14)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_132(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x304A39EB177D246B(iParam0, joaat("luxe2_draw_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe2_draw_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe2_draw_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x304A39EB177D246B(iParam0, 38465448, iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x304A39EB177D246B(iParam0, -1469891622, iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x304A39EB177D246B(iParam0, -502321359, iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x304A39EB177D246B(iParam0, -792359778, iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x304A39EB177D246B(iParam0, 997614074, iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x304A39EB177D246B(iParam0, 748799057, iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x304A39EB177D246B(iParam0, 653048039, iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe2_draw_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x304A39EB177D246B(iParam0, -1685128312, iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x304A39EB177D246B(iParam0, 1892460036, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x304A39EB177D246B(iParam0, -296738547, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_133(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = -1;
		iVar1 = -1;
		if (iParam1 >= 256)
		{
			iVar0 = func_144(iParam0, iParam1, 4, 3);
			iVar1 = func_134(iVar0);
		}
		iVar2 = -1;
		iVar3 = -1;
		if (iParam2 >= 237)
		{
			iVar2 = func_144(iParam0, iParam2, 11, 3);
			iVar3 = func_134(iVar2);
		}
		if (iVar2 != -1)
		{
			if (unk_0x304A39EB177D246B(iVar2, -826135203, 0))
			{
				if (iVar0 != -1 && unk_0x304A39EB177D246B(iVar0, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar0, -826135203, 0))
			{
				if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar2, joaat("morph_suit"), 0))
			{
				if (iVar0 != -1 && unk_0x304A39EB177D246B(iVar0, joaat("morph_suit"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar0, joaat("morph_suit"), 0))
			{
				if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("morph_suit"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar0, joaat("gorka_suit"), 0))
			{
				if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("gorka_suit"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar2, joaat("silk_robe"), 0))
			{
				if (iVar0 != -1 && unk_0x304A39EB177D246B(iVar0, joaat("silk_robe"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar0, joaat("silk_robe"), 0))
			{
				if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("silk_robe"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar2, joaat("silk_pyjamas"), 0))
			{
				if (iVar0 != -1 && unk_0x304A39EB177D246B(iVar0, joaat("silk_pyjamas"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar0, joaat("silk_pyjamas"), 0))
			{
				if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("silk_pyjamas"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar2, joaat("tux_jacket"), 0))
			{
				return 1;
			}
			if (unk_0x304A39EB177D246B(iVar0, joaat("tux_pants"), 0))
			{
				return 1;
			}
		}
		else if (iVar0 != -1)
		{
			if (unk_0x304A39EB177D246B(iVar0, joaat("tux_pants"), 0))
			{
				return 1;
			}
			if (unk_0x304A39EB177D246B(iVar0, -826135203, 0))
			{
				if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar0, joaat("morph_suit"), 0))
			{
				if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("morph_suit"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar0, joaat("gorka_suit"), 0))
			{
				if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("gorka_suit"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar0, joaat("silk_robe"), 0))
			{
				if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("silk_robe"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar0, joaat("silk_pyjamas"), 0))
			{
				if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("silk_pyjamas"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("tails_jacket"), 0))
		{
			if (((((((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 112 && iParam1 <= 127)) || (iParam1 >= 128 && iParam1 <= 143)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 224 && iParam1 <= 239)) || iVar1 == 0) || iVar1 == 3) || iVar1 == 4) || iVar1 == 7) || iVar1 == 8) || iVar1 == 11) || iVar1 == 14) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_4"), 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		switch (iVar0)
		{
			case joaat("dlc_mp_val_m_legs1_0"):
			case 312004063:
			case 6695290:
			case 1724446270:
			case -448105673:
			case -611098679:
			case -1111088081:
			case -1406369540:
			case -1912159043:
			case 2076516410:
			case 1919618438:
			case 45227112:
			case -2129094253:
			case -421370587:
			case -675363106:
				if ((((((((((((((((iParam2 >= 204 && iParam2 <= 219) || iVar3 == 13) || iVar2 == joaat("dlc_mp_smug_m_jbib_4_0")) || iVar2 == joaat("dlc_mp_smug_m_jbib_4_1")) || iVar2 == joaat("dlc_mp_smug_m_jbib_4_2")) || iVar2 == joaat("dlc_mp_smug_m_jbib_4_3")) || iVar2 == joaat("dlc_mp_smug_m_jbib_4_4")) || iVar2 == joaat("dlc_mp_smug_m_jbib_4_5")) || iVar2 == joaat("dlc_mp_smug_m_jbib_4_6")) || iVar2 == joaat("dlc_mp_smug_m_jbib_4_7")) || iVar2 == joaat("dlc_mp_smug_m_jbib_4_8")) || iVar2 == joaat("dlc_mp_smug_m_jbib_4_9")) || iVar2 == joaat("dlc_mp_smug_m_jbib_4_10")) || iVar2 == joaat("dlc_mp_smug_m_jbib_4_11")) || unk_0x304A39EB177D246B(iVar2, joaat("apart_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar2, 1057057059, 0))
				{
					return 0;
				}
				break;
		}
		if (unk_0x304A39EB177D246B(iVar2, joaat("scruffy_jacket"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar0, joaat("low2_draw_0"), 0) || unk_0x304A39EB177D246B(iVar0, joaat("stunt_draw_3"), 0))
			{
				return 0;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar4 = -1;
		iVar5 = -1;
		if (iParam1 >= 256)
		{
			iVar4 = func_144(iParam0, iParam1, 4, 4);
			iVar5 = func_134(iVar4);
		}
		iVar6 = -1;
		if (iParam2 >= 256)
		{
			iVar6 = func_144(iParam0, iParam2, 11, 4);
		}
		if (iVar6 != -1)
		{
			if (unk_0x304A39EB177D246B(iVar6, -826135203, 0))
			{
				if (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar4, -826135203, 0))
			{
				if (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar6, joaat("morph_suit"), 0))
			{
				if (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("morph_suit"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar4, joaat("morph_suit"), 0))
			{
				if (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("morph_suit"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar6, joaat("cat_suit"), 0))
			{
				if (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("cat_suit"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar4, joaat("cat_suit"), 0))
			{
				if (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("cat_suit"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar4, joaat("gorka_suit"), 0))
			{
				if (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("gorka_suit"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar6, joaat("silk_robe"), 0))
			{
				if (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("silk_robe"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar4, joaat("silk_robe"), 0))
			{
				if (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("silk_robe"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar6, joaat("silk_pyjamas"), 0))
			{
				if (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("silk_pyjamas"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar4, joaat("silk_pyjamas"), 0))
			{
				if (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("silk_pyjamas"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar6, joaat("dress"), 0))
			{
				if (unk_0x304A39EB177D246B(iVar6, -405912369, 0) || unk_0x304A39EB177D246B(iVar6, joaat("hipster_dress"), 0))
				{
					if (((iParam1 >= 240 && iParam1 <= 255) || iVar5 == 15) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("stockings"), 0)))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if ((iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("dress"), 0)) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("stockings"), 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar4, joaat("dress"), 0))
			{
				if ((((iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("dress"), 0)) && !unk_0x304A39EB177D246B(iVar6, -405912369, 0)) && !unk_0x304A39EB177D246B(iVar6, joaat("hipster_dress"), 0)) || (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("stockings"), 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if ((((((((((((unk_0x304A39EB177D246B(iVar6, joaat("vest"), 0) || unk_0x304A39EB177D246B(iVar6, joaat("vest_shirt"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("xmas2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar6, -1086258388, 0)) || unk_0x304A39EB177D246B(iVar6, joaat("low_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("low_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("luxe_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("low2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("low2_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("apart_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("apart_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("apart_draw_21"), 0)) || unk_0x304A39EB177D246B(iVar6, 1057057059, 0))
			{
				if (((iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("stockings"), 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15)
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar6, joaat("draw_0"), 0) && !unk_0x304A39EB177D246B(iVar6, joaat("smug_draw_5"), 0))
			{
				if (((iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("stockings"), 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15)
				{
					return 0;
				}
			}
		}
		if (iVar4 != -1)
		{
			if (unk_0x304A39EB177D246B(iVar4, -826135203, 0))
			{
				if (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar4, joaat("morph_suit"), 0))
			{
				if (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("morph_suit"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar4, joaat("cat_suit"), 0))
			{
				if (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("cat_suit"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar4, joaat("gorka_suit"), 0))
			{
				if (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("gorka_suit"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar4, joaat("silk_robe"), 0))
			{
				if (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("silk_robe"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar4, joaat("silk_pyjamas"), 0))
			{
				if (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("silk_pyjamas"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar4, joaat("dress"), 0))
			{
				if ((((iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("dress"), 0)) && !unk_0x304A39EB177D246B(iVar6, -405912369, 0)) && !unk_0x304A39EB177D246B(iVar6, joaat("hipster_dress"), 0)) || (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("stockings"), 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (unk_0x304A39EB177D246B(iVar4, joaat("high_waist"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar6, joaat("low_draw_1"), 0) || unk_0x304A39EB177D246B(iVar6, joaat("low2_draw_7"), 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x304A39EB177D246B(iVar6, joaat("low2_draw_7"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar4, joaat("high_waist"), 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (((iParam1 >= 32 && iParam1 <= 47) || iVar5 == 2) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_3"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar6, joaat("tails_jacket"), 0))
			{
				return 0;
			}
		}
		if (unk_0x304A39EB177D246B(iVar6, joaat("apart_draw_22"), 0))
		{
			if (((((((((((iParam1 >= 32 && iParam1 <= 47) || iVar5 == 2) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("combat_gear"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_1"), 0))
			{
				return 0;
			}
		}
		if (unk_0x304A39EB177D246B(iVar6, joaat("apart_draw_25"), 0) || unk_0x304A39EB177D246B(iVar6, joaat("biker_draw_33"), 0))
		{
			if (((iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("stockings"), 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_134(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0x304A39EB177D246B(iParam0, joaat("draw_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_135(int iParam0, int iParam1, int iParam2)
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
	int iVar12;
	
	iVar0 = -99;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = 124;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = 140;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 207)
		{
			iVar0 = 188;
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 204;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 240)
		{
			iVar0 = 236;
		}
		else if (iParam1 >= 241)
		{
			iVar1 = func_144(iParam0, iParam1, 8, 3);
			if (iVar1 != -1)
			{
				iVar2 = unk_0x5A3F0A3B7ECCBD32(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					unk_0x0249B53AB91BF9D0(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 11)
					{
						if (iVar4 != 0 && iVar4 != joaat("0"))
						{
							iVar0 = func_22(iParam0, iVar4, 11, 3);
							return iVar0;
						}
						else
						{
							iVar0 = iVar5;
							return iVar0;
						}
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 32)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 33)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 49)
		{
			iVar0 = 64;
		}
		else if (iParam1 <= 65)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 66)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 67)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 68)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 69)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 70)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 86)
		{
			iVar0 = 176;
		}
		else if (iParam1 <= 102)
		{
			iVar0 = 192;
		}
		else if (iParam1 <= 118)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 119)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 135)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 136)
		{
			iVar7 = func_144(iParam0, iParam1, 8, 4);
			if (iVar7 != -1)
			{
				iVar8 = unk_0x5A3F0A3B7ECCBD32(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					unk_0x0249B53AB91BF9D0(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 11)
					{
						if (iVar10 != 0 && iVar10 != joaat("0"))
						{
							iVar0 = func_22(iParam0, iVar10, 11, 4);
							return iVar0;
						}
						else
						{
							iVar0 = iVar11;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != -99)
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_136(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == 14)
	{
		iVar0 = iParam2;
		return func_137(iVar0);
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_113648.f_2365.f_539[0 /*65*/].f_59;
					break;
				
				case 3:
					if (Global_113648.f_9087.f_99.f_58[120])
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case 4:
					if (Global_113648.f_9087.f_99.f_58[120])
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case 6:
					return 6;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_113648.f_2365.f_539[1 /*65*/].f_59;
					break;
				
				case 3:
					return 73;
					break;
				
				case 4:
					return 24;
					break;
				
				case 6:
					return 17;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 26;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_113648.f_2365.f_539[2 /*65*/].f_59;
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 91;
					break;
				
				case 6:
					return 8;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 15;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 2:
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 80;
					break;
				
				case 6:
					return 10;
					break;
				
				case 5:
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 2;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 2:
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 233;
					break;
				
				case 6:
					return 16;
					break;
				
				case 5:
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 78;
					break;
			}
			break;
		
		default:
			break;
	}
	return -99;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_138(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_103493 != -99)
	{
		if (Global_103494 == 11)
		{
			Global_78341[1 /*14*/] = { func_184(unk_0x4B423FAA24E8ABF0(iParam0), 11, Global_103493, -1) };
			iVar0 = func_140(unk_0x4B423FAA24E8ABF0(iParam0), Global_103493, iParam1, Global_78341[1 /*14*/].f_4);
			if (iVar0 != -99)
			{
				return iVar0;
			}
		}
		else if (Global_103494 == 8)
		{
			iVar1 = func_135(unk_0x4B423FAA24E8ABF0(iParam0), Global_103493, Global_103495);
			if (iVar1 != -99)
			{
				Global_78341[1 /*14*/] = { func_184(unk_0x4B423FAA24E8ABF0(iParam0), 11, iVar1, -1) };
				iVar2 = func_140(unk_0x4B423FAA24E8ABF0(iParam0), iVar1, iParam1, Global_78341[1 /*14*/].f_4);
				if (iVar2 != -99)
				{
					return iVar2;
				}
			}
			else
			{
				return Global_103493;
			}
		}
	}
	return -99;
}

int func_139(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (((((iParam1 >= 48 && iParam1 < 64) || (iParam1 >= 64 && iParam1 < 80)) || (iParam1 >= 96 && iParam1 < 108)) || (iParam1 >= 108 && iParam1 < 124)) || (iParam1 >= 156 && iParam1 < 172))
			{
				return 1;
			}
			if (iParam2 == -1 && iParam1 >= 237)
			{
				iParam2 = func_144(iParam0, iParam1, 11, 3);
			}
			if (unk_0x304A39EB177D246B(iParam2, joaat("jacket"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 160 && iParam1 < 176))
			{
				return 1;
			}
			if (iParam2 == -1 && iParam1 >= 256)
			{
				iParam2 = func_144(iParam0, iParam1, 11, 4);
			}
			if (unk_0x304A39EB177D246B(iParam2, joaat("jacket"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_140(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	bool bVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	bool bVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	bool bVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	
	iVar0 = -99;
	iVar1 = 1;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar2 = -1;
		iVar3 = -1;
		if (iParam2 >= 237)
		{
			iVar2 = func_144(iParam0, iParam2, 11, 3);
			iVar3 = func_134(iVar2);
		}
		iVar4 = -1;
		iVar5 = -1;
		if (iParam1 >= 237)
		{
			iVar4 = func_144(iParam0, iParam1, 11, 3);
			iVar5 = func_134(iVar4);
		}
		if (iVar2 != -1)
		{
			if (unk_0x304A39EB177D246B(iVar2, joaat("jacket_only"), 0))
			{
				return -99;
			}
		}
		if (iVar2 != -1)
		{
			if (((((((((((unk_0x304A39EB177D246B(iVar2, joaat("luxe_draw_4"), 0) || unk_0x304A39EB177D246B(iVar2, joaat("LOW_DRAW_8"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("jan_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("LOW2_BOMB"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("stunt_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("stunt_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_10"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("air_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("smug_draw_1"), 0))
			{
				if ((((((iParam1 >= 124 && iParam1 <= 139) || (iParam1 >= 188 && iParam1 <= 235)) || iVar5 == 8) || iVar5 == 12) || iVar5 == 13) || iVar5 == 14)
				{
					return -99;
				}
				if (((((((!unk_0x304A39EB177D246B(iVar2, joaat("stunt_draw_4"), 0) && !unk_0x304A39EB177D246B(iVar2, joaat("stunt_draw_9"), 0)) && !unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_6"), 0)) && !unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_9"), 0)) && !unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_10"), 0)) && !unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_12"), 0)) && !unk_0x304A39EB177D246B(iVar2, joaat("air_draw_3"), 0)) && !unk_0x304A39EB177D246B(iVar2, joaat("smug_draw_1"), 0))
				{
					if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_5"), 0))
					{
						return -99;
					}
				}
			}
			if ((unk_0x304A39EB177D246B(iVar2, joaat("luxe_draw_5"), 0) || unk_0x304A39EB177D246B(iVar2, joaat("LOW_DRAW_7"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("jan_draw_1"), 0))
			{
				return -99;
			}
			if (unk_0x304A39EB177D246B(iVar2, joaat("stunt_draw_6"), 0) || unk_0x304A39EB177D246B(iVar2, joaat("stunt_draw_3"), 0))
			{
				return -99;
			}
			if (unk_0x304A39EB177D246B(iVar2, joaat("luxe2_draw_0"), 0))
			{
				if ((((((((((iParam1 >= 80 && iParam1 <= 95) || (iParam1 >= 124 && iParam1 <= 139)) || (iParam1 >= 140 && iParam1 <= 155)) || (iParam1 >= 188 && iParam1 <= 235)) || iVar5 == 5) || iVar5 == 8) || iVar5 == 9) || iVar5 == 12) || iVar5 == 13) || iVar5 == 14)
				{
					return -99;
				}
			}
			if (unk_0x304A39EB177D246B(iVar2, joaat("heist_draw_9"), 0))
			{
				if ((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0) || iVar5 == 1) || iVar5 == 5) || iVar5 == 15)
				{
				}
				else
				{
					return -99;
				}
			}
			if (unk_0x304A39EB177D246B(iVar2, joaat("tux_jacket"), 0) && !unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_20"), 0))
			{
				return -99;
			}
			if (unk_0x304A39EB177D246B(iVar2, joaat("low2_open_check"), 0))
			{
				if ((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 124 && iParam1 <= 139)) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0) || iVar5 == 1) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return -99;
				}
			}
			if (unk_0x304A39EB177D246B(iVar2, joaat("open_short"), 0))
			{
				if (((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 236 && iParam1 <= 236)) || (iParam1 >= 80 && iParam1 <= 95)) || iVar5 == 0) || iVar5 == 5)
				{
				}
				else
				{
					return -99;
				}
			}
			if (unk_0x304A39EB177D246B(iVar2, -1099375697, 0))
			{
				if ((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 80 && iParam1 <= 95)) || iVar5 == 0) || iVar5 == 5)
				{
				}
				else
				{
					return -99;
				}
			}
		}
		iVar6 = 0;
		bVar7 = false;
		if (unk_0x304A39EB177D246B(iVar2, joaat("biker_vest"), 0) && !unk_0x304A39EB177D246B(iVar2, joaat("jacket_only"), 0))
		{
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if ((unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_0"), 0) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_13"), 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_0_0"), 8, 3);
							break;
						
						case 1:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_0_1"), 8, 3);
							break;
						
						case 2:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_0_2"), 8, 3);
							break;
						
						case 3:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_0_3"), 8, 3);
							break;
						
						case 4:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_0_4"), 8, 3);
							break;
						
						case 5:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_0_5"), 8, 3);
							break;
						
						case 7:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_0_6"), 8, 3);
							break;
						
						case 8:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_0_7"), 8, 3);
							break;
						
						case 11:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_0_8"), 8, 3);
							break;
					}
				}
				else if (unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_1"), 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_2_0"), 8, 3);
							break;
						
						case 1:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_2_1"), 8, 3);
							break;
						
						case 2:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_2_2"), 8, 3);
							break;
						
						case 3:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_2_3"), 8, 3);
							break;
						
						case 4:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_2_4"), 8, 3);
							break;
						
						case 5:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_2_5"), 8, 3);
							break;
						
						case 7:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_2_6"), 8, 3);
							break;
						
						case 8:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_2_7"), 8, 3);
							break;
						
						case 11:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_2_8"), 8, 3);
							break;
					}
				}
				else if (unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_2"), 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_4_0"), 8, 3);
							break;
						
						case 1:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_4_1"), 8, 3);
							break;
						
						case 2:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_4_2"), 8, 3);
							break;
						
						case 3:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_4_3"), 8, 3);
							break;
						
						case 4:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_4_4"), 8, 3);
							break;
						
						case 5:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_4_5"), 8, 3);
							break;
						
						case 7:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_4_6"), 8, 3);
							break;
						
						case 8:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_4_7"), 8, 3);
							break;
						
						case 11:
							iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_special_4_8"), 8, 3);
							break;
						}
				}
				return iVar0;
			}
			else if (iParam1 >= 236 && iParam1 <= 236)
			{
				iVar0 = 240;
				return iVar0;
			}
			else if (iParam1 >= 237)
			{
				bVar7 = true;
				if ((unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_0"), 0) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_13"), 0))
				{
					iVar6 = 4;
				}
				else if (unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_1"), 0))
				{
					iVar6 = 5;
				}
				else if (unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_2"), 0) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_5"), 0))
				{
					iVar6 = 6;
				}
				else
				{
					iVar6 = -1;
				}
			}
			else
			{
				return iVar0;
			}
		}
		if (unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_4"), 0))
		{
			bVar7 = true;
			iVar6 = 1;
		}
		if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_20"), 0))
		{
			bVar7 = true;
			if (((((((((unk_0x304A39EB177D246B(iVar2, joaat("open_jacket"), 0) && unk_0x304A39EB177D246B(iVar2, joaat("tux_jacket"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("apart_draw_15"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("apart_draw_24"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_10"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("air_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("smug_draw_1"), 0))
			{
				iVar6 = 1;
			}
			else if ((unk_0x304A39EB177D246B(iVar2, joaat("tux_jacket"), 0) || unk_0x304A39EB177D246B(iVar2, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("apart_draw_21"), 0))
			{
				iVar6 = 0;
			}
			else
			{
				iVar6 = -1;
			}
		}
		if (bVar7)
		{
			if (iVar6 != -1)
			{
				iVar8 = unk_0x5A3F0A3B7ECCBD32(iVar4);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					unk_0x0249B53AB91BF9D0(iVar4, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8)
					{
						if (((((((iVar6 == 6 && unk_0x304A39EB177D246B(iVar10, joaat("alt_special_6"), 0)) || (iVar6 == 5 && unk_0x304A39EB177D246B(iVar10, joaat("alt_special_5"), 0))) || (iVar6 == 4 && unk_0x304A39EB177D246B(iVar10, joaat("ALT_SPECIAL_4"), 0))) || (iVar6 == 3 && unk_0x304A39EB177D246B(iVar10, joaat("ALT_SPECIAL_3"), 0))) || (iVar6 == 2 && unk_0x304A39EB177D246B(iVar10, joaat("alt_special_2"), 0))) || (iVar6 == 1 && unk_0x304A39EB177D246B(iVar10, joaat("alt_special"), 0))) || ((((((iVar6 == 0 && !unk_0x304A39EB177D246B(iVar10, joaat("alt_special"), 0)) && !unk_0x304A39EB177D246B(iVar10, joaat("alt_special_2"), 0)) && !unk_0x304A39EB177D246B(iVar10, joaat("ALT_SPECIAL_3"), 0)) && !unk_0x304A39EB177D246B(iVar10, joaat("ALT_SPECIAL_4"), 0)) && !unk_0x304A39EB177D246B(iVar10, joaat("alt_special_5"), 0)) && !unk_0x304A39EB177D246B(iVar10, joaat("alt_special_6"), 0)))
						{
							if (iVar10 != 0 && iVar10 != joaat("0"))
							{
								iVar0 = func_22(iParam0, iVar10, 8, 3);
							}
							else
							{
								iVar0 = iVar11;
							}
							iVar9 = iVar8 + 1;
							iVar1 = 0;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
			return -99;
		}
		if (unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_11"), 0))
		{
			if ((iParam1 >= 80 && iParam1 <= 95) || iVar5 == 5)
			{
				return -99;
			}
		}
		if (unk_0x304A39EB177D246B(iVar2, joaat("x17_draw_3"), 0) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_11"), 0))
		{
			if ((((iParam1 >= 80 && iParam1 <= 95) || (iParam1 >= 140 && iParam1 <= 155)) || iVar5 == 5) || iVar5 == 9)
			{
				return -99;
			}
		}
		if ((iParam2 >= 96 && iParam2 <= 107) || iVar3 == 6)
		{
			if (iParam1 <= 15)
			{
				iVar0 = 32;
			}
			else if (iParam1 <= 31)
			{
				iVar0 = 224;
			}
			else if (iParam1 == 236)
			{
				iVar0 = 240;
			}
			else if (((iParam1 >= 220 && iParam1 <= 235) && func_141()) && !unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_4"), 0))
			{
				unk_0x7B6C0A0D604E68FA(3, 10, -1, 0, -1, 8);
				iVar13 = unk_0x55FF07D3A2FE8317(joaat("dlc_mp_busi_m_accs5_0"));
				iVar0 = (func_23(iParam0, func_173(8)) + iVar13);
				iVar1 = 1;
			}
			else
			{
				iVar0 = 34;
				iVar1 = 0;
				if (iParam1 >= 237)
				{
					iVar14 = func_144(iParam0, iParam1, 11, 3);
					if ((iVar14 != -1 && !unk_0x304A39EB177D246B(iVar14, joaat("draw_12"), 0)) && !unk_0x304A39EB177D246B(iVar14, joaat("draw_8"), 0))
					{
						iVar15 = unk_0x5A3F0A3B7ECCBD32(iVar14);
						iVar16 = 0;
						while (iVar16 < iVar15)
						{
							unk_0x0249B53AB91BF9D0(iVar14, iVar16, &iVar17, &iVar18, &iVar19);
							if (iVar19 == 8)
							{
								if (iVar17 != 0 && iVar17 != joaat("0"))
								{
									if ((!unk_0x304A39EB177D246B(iVar17, joaat("ALT_SPECIAL_4"), 0) && !unk_0x304A39EB177D246B(iVar17, joaat("alt_special_5"), 0)) && !unk_0x304A39EB177D246B(iVar17, joaat("alt_special_6"), 0))
									{
										iVar0 = func_22(iParam0, iVar17, 8, 3);
									}
								}
								else
								{
									iVar0 = iVar18;
								}
							}
							iVar16++;
						}
					}
				}
			}
		}
		else if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 107)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 123)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 139)
		{
			iVar0 = 128;
		}
		else if (iParam1 <= 155)
		{
			iVar0 = 144;
		}
		else if (iParam1 <= 171)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 187)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 203 || iVar5 == 12)
		{
			if (((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 108 && iParam2 <= 123)) || iVar3 == 3) || iVar3 == 7) || unk_0x304A39EB177D246B(iVar2, joaat("luxe2_draw_0"), 0))
			{
				iVar0 = 2;
				iVar1 = 0;
			}
			else
			{
				iVar20 = 0;
				if (iParam2 >= 236 && unk_0x304A39EB177D246B(iVar2, joaat("tails_jacket"), 0))
				{
					iVar20 = 1;
				}
				iVar21 = func_144(iParam0, iParam1, 11, 3);
				if (iVar21 != -1)
				{
					iVar22 = unk_0x5A3F0A3B7ECCBD32(iVar21);
					iVar23 = 0;
					while (iVar23 < iVar22)
					{
						unk_0x0249B53AB91BF9D0(iVar21, iVar23, &iVar24, &iVar25, &iVar26);
						if (iVar26 == 8 && iVar20 == unk_0x304A39EB177D246B(iVar24, joaat("tails_version"), 0))
						{
							if (iVar24 != 0 && iVar24 != joaat("0"))
							{
								iVar0 = func_22(iParam0, iVar24, 8, 3);
							}
							else
							{
								iVar0 = iVar25;
							}
							iVar23 = iVar22 + 1;
							iVar1 = 0;
						}
						iVar23++;
					}
				}
				else
				{
					iVar0 = func_22(iParam0, joaat("dlc_mp_heist_m_special_9_0"), 8, 3);
					iVar1 = 1;
				}
			}
		}
		else if (iParam1 <= 219)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 235)
		{
			iVar0 = 2;
			iVar1 = 0;
			if (func_141())
			{
				iVar27 = joaat("dlc_mp_busi_m_accs4_0");
				if ((iParam2 >= 96 && iParam2 <= 107) || (iParam2 >= 236 && unk_0x304A39EB177D246B(iVar2, joaat("tails_jacket"), 0)))
				{
					iVar27 = joaat("dlc_mp_busi_m_accs5_0");
				}
				unk_0x7B6C0A0D604E68FA(3, 10, -1, 0, -1, 8);
				iVar28 = unk_0x55FF07D3A2FE8317(iVar27);
				iVar0 = (func_23(iParam0, func_173(8)) + iVar28);
				iVar1 = 1;
			}
			if ((((iParam2 >= 237 && unk_0x304A39EB177D246B(iVar2, joaat("tails_jacket"), 0)) || (iParam2 >= 108 && iParam2 <= 123)) || iVar3 == 7) || unk_0x304A39EB177D246B(iVar2, joaat("luxe2_draw_0"), 0))
			{
				iVar0 = -99;
			}
		}
		else if (iParam1 <= 236)
		{
			iVar0 = 240;
			iVar1 = 0;
		}
		else if (iParam1 >= 237)
		{
			iVar0 = 2;
			iVar1 = 0;
			bVar29 = false;
			iVar30 = func_144(iParam0, iParam1, 11, 3);
			if (unk_0x304A39EB177D246B(iVar2, joaat("apart_draw_21"), 0))
			{
				bVar29 = true;
			}
			if (iVar30 != -1)
			{
				iVar31 = unk_0x5A3F0A3B7ECCBD32(iVar30);
				iVar32 = 0;
				while (iVar32 < iVar31)
				{
					unk_0x0249B53AB91BF9D0(iVar30, iVar32, &iVar33, &iVar34, &iVar35);
					if (iVar35 == 8)
					{
						if (iVar33 != 0 && iVar33 != joaat("0"))
						{
							iVar0 = func_22(iParam0, iVar33, 8, 3);
							iVar1 = 0;
							if (!bVar29 || unk_0x304A39EB177D246B(iVar33, joaat("alt_special"), 0))
							{
								iVar32 = iVar31 + 1;
							}
						}
						else
						{
							iVar0 = iVar34;
							iVar32 = iVar31 + 1;
							iVar1 = 0;
						}
					}
					iVar32++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar36 = -1;
		iVar37 = -1;
		if (iParam2 >= 256)
		{
			iVar36 = func_144(iParam0, iParam2, 11, 4);
			iVar37 = func_134(iVar36);
		}
		iVar38 = -1;
		iVar39 = -1;
		if (iParam1 >= 256)
		{
			iVar38 = func_144(iParam0, iParam1, 11, 4);
			iVar39 = func_134(iVar38);
		}
		if (iVar36 != -1)
		{
			if (unk_0x304A39EB177D246B(iVar36, joaat("jacket_only"), 0))
			{
				return -99;
			}
		}
		if ((((unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_6"), 0) || unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("air_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("smug_draw_1"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar38, joaat("stunt_draw_5"), 0))
			{
				return -99;
			}
		}
		if ((unk_0x304A39EB177D246B(iVar36, joaat("low2_open_check"), 0) || unk_0x304A39EB177D246B(iVar36, joaat("open_short"), 0)) || unk_0x304A39EB177D246B(iVar36, -1099375697, 0))
		{
			if (((((((((((((((((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 32 && iParam1 <= 47)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 208 && iParam1 <= 223)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar39 == 0) || iVar39 == 2) || iVar39 == 4) || iVar39 == 5) || iVar39 == 11) || iVar39 == 12) || iVar39 == 13) || iVar39 == 15) || iVar38 == joaat("dlc_mp_bus2_f_jbib0_0")) || iVar38 == joaat("dlc_mp_bus2_f_jbib0_1")) || iVar38 == joaat("dlc_mp_bus2_f_jbib0_2")) || iVar38 == joaat("dlc_mp_hips_f_jbib7_0")) || iVar38 == joaat("dlc_mp_hips_f_jbib7_1")) || iVar38 == joaat("dlc_mp_hips_f_jbib7_2")) || iVar38 == joaat("dlc_mp_hips_f_jbib7_3")) || iVar38 == joaat("dlc_mp_ind_f_jbib_1_0")) || iVar38 == joaat("dlc_mp_luxe_f_jbib_3_0"))
			{
			}
			else
			{
				return -99;
			}
		}
		if (unk_0x304A39EB177D246B(iVar38, joaat("apart_draw_2"), 0) || unk_0x304A39EB177D246B(iVar38, joaat("apart_draw_3"), 0))
		{
			return -99;
		}
		iVar40 = 0;
		bVar41 = false;
		if ((((((unk_0x304A39EB177D246B(iVar38, joaat("heist_draw_3"), 0) || unk_0x304A39EB177D246B(iVar38, joaat("luxe_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar38, joaat("low_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar38, joaat("low_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar38, joaat("low2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar38, joaat("low2_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar38, joaat("exec_draw_14"), 0))
		{
			bVar41 = true;
			if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || iVar37 == 1) || iVar37 == 8) || unk_0x304A39EB177D246B(iVar36, joaat("open_short"), 0)) || unk_0x304A39EB177D246B(iVar36, -1099375697, 0))
			{
				iVar40 = 2;
			}
			else if ((((unk_0x304A39EB177D246B(iVar36, joaat("luxe2_draw_0"), 0) || unk_0x304A39EB177D246B(iVar36, joaat("luxe2_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("luxe_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("smug_draw_0"), 0))
			{
				iVar40 = 0;
			}
			else if (((((((((((((iParam2 >= 160 && iParam2 <= 175) || iVar37 == 10) || unk_0x304A39EB177D246B(iVar36, joaat("heist_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("heist_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("heist_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("heist_draw_11"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("heist_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar36, -872449705, 0)) || unk_0x304A39EB177D246B(iVar36, joaat("apart_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("apart_draw_10"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("apart_draw_11"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("apart_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar36, 144417099, 0))
			{
				if (unk_0x304A39EB177D246B(iVar38, joaat("low_draw_2"), 0))
				{
					iVar40 = 1;
				}
				else if (unk_0x304A39EB177D246B(iVar38, joaat("low_draw_0"), 0) || unk_0x304A39EB177D246B(iVar38, joaat("low2_draw_0"), 0))
				{
					iVar40 = 1;
				}
				else
				{
					iVar40 = -1;
				}
			}
			else
			{
				iVar40 = 1;
			}
		}
		if (unk_0x304A39EB177D246B(iVar38, joaat("apart_draw_21"), 0))
		{
			bVar41 = true;
			if ((((((((((iParam2 >= 112 && iParam2 <= 127) || iVar37 == 7) || unk_0x304A39EB177D246B(iVar36, joaat("heist_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("heist_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("heist_draw_11"), 0)) || unk_0x304A39EB177D246B(iVar36, -872449705, 0)) || unk_0x304A39EB177D246B(iVar36, joaat("apart_draw_15"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("apart_draw_25"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("stunt_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("stunt_draw_9"), 0))
			{
				if (((unk_0x304A39EB177D246B(iVar36, joaat("luxe2_draw_0"), 0) || unk_0x304A39EB177D246B(iVar36, joaat("luxe2_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("smug_draw_0"), 0))
				{
					iVar40 = 0;
				}
				else
				{
					iVar40 = 1;
				}
			}
			else if ((((((unk_0x304A39EB177D246B(iVar36, joaat("heist_draw_12"), 0) || unk_0x304A39EB177D246B(iVar36, joaat("heist_draw_16"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("heist_draw_17"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("apart_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar36, -1014753511, 0)) || unk_0x304A39EB177D246B(iVar36, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("apart_draw_22"), 0))
			{
				iVar40 = 0;
			}
			else
			{
				iVar40 = -1;
			}
		}
		switch (iVar38)
		{
			case joaat("dlc_mp_bus2_f_jbib0_0"):
			case joaat("dlc_mp_bus2_f_jbib0_1"):
			case joaat("dlc_mp_bus2_f_jbib0_2"):
			case joaat("dlc_mp_hips_f_jbib7_0"):
			case joaat("dlc_mp_hips_f_jbib7_1"):
			case joaat("dlc_mp_hips_f_jbib7_2"):
			case joaat("dlc_mp_hips_f_jbib7_3"):
			case joaat("dlc_mp_ind_f_jbib_1_0"):
			case joaat("dlc_mp_luxe_f_jbib_3_0"):
			case joaat("dlc_mp_stunt_f_jbib_5_0"):
			case joaat("dlc_mp_stunt_f_jbib_5_1"):
			case joaat("dlc_mp_stunt_f_jbib_5_2"):
			case joaat("dlc_mp_stunt_f_jbib_5_3"):
			case joaat("dlc_mp_stunt_f_jbib_5_4"):
			case joaat("dlc_mp_stunt_f_jbib_5_5"):
			case joaat("dlc_mp_stunt_f_jbib_5_6"):
			case joaat("dlc_mp_stunt_f_jbib_5_7"):
			case joaat("dlc_mp_stunt_f_jbib_5_8"):
			case joaat("dlc_mp_stunt_f_jbib_5_9"):
			case joaat("dlc_mp_stunt_f_jbib_5_10"):
			case joaat("dlc_mp_stunt_f_jbib_5_11"):
			case joaat("dlc_mp_stunt_f_jbib_5_12"):
			case joaat("dlc_mp_stunt_f_jbib_5_13"):
			case joaat("dlc_mp_stunt_f_jbib_5_14"):
			case joaat("dlc_mp_stunt_f_jbib_5_15"):
				bVar41 = true;
				if (((unk_0x304A39EB177D246B(iVar36, joaat("luxe2_draw_0"), 0) || unk_0x304A39EB177D246B(iVar36, joaat("luxe_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("smug_draw_0"), 0))
				{
					iVar40 = 1;
				}
				else if (unk_0x304A39EB177D246B(iVar36, joaat("luxe2_draw_1"), 0))
				{
					iVar40 = 2;
				}
				else if ((((((((((((unk_0x304A39EB177D246B(iVar36, joaat("luxe_draw_0"), 0) || unk_0x304A39EB177D246B(iVar36, joaat("low2_open_check"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("apart_draw_15"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("apart_draw_25"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("stunt_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("stunt_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_10"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_33"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("air_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("smug_draw_1"), 0))
				{
					iVar40 = 3;
				}
				else if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || (iParam2 >= 112 && iParam2 <= 127)) || iVar37 == 1) || iVar37 == 7) || iVar37 == 8)
				{
					iVar40 = 0;
				}
				else
				{
					iVar40 = -1;
				}
				break;
			
			case joaat("dlc_mp_ind_f_jbib_1_1"):
				bVar41 = true;
				if ((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || iVar37 == 1) || iVar37 == 8)
				{
					iVar40 = 0;
				}
				else
				{
					iVar40 = -1;
				}
				break;
		}
		if (unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_4"), 0) || unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_5"), 0))
		{
			if ((iParam1 >= 240 && iParam1 <= 255) || iVar39 == 15)
			{
				iVar0 = 120;
			}
			else if (unk_0x304A39EB177D246B(iVar38, joaat("low2_draw_0"), 0) || unk_0x304A39EB177D246B(iVar38, joaat("low2_draw_1"), 0))
			{
				bVar41 = true;
				iVar40 = 0;
			}
			else
			{
				return iVar0;
			}
		}
		else if (unk_0x304A39EB177D246B(iVar36, joaat("biker_vest"), 0) && !unk_0x304A39EB177D246B(iVar36, joaat("jacket_only"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar36, joaat("x17_draw_6"), 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar39 == 12)
				{
					return -99;
				}
			}
			if ((((((((((((iParam1 >= 64 && iParam1 <= 79) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 208 && iParam1 <= 223)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar39 == 4) || iVar39 == 5) || iVar39 == 11) || iVar39 == 12) || iVar39 == 13) || iVar39 == 15)
			{
				bVar41 = false;
			}
			else if (iParam1 >= 256)
			{
				bVar41 = true;
				if ((unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_0"), 0) || unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_13"), 0))
				{
					iVar40 = 4;
				}
				else if (unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_1"), 0))
				{
					iVar40 = 5;
				}
				else if (unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_2"), 0) || unk_0x304A39EB177D246B(iVar36, joaat("x17_draw_6"), 0))
				{
					iVar40 = 6;
				}
				else
				{
					iVar40 = -1;
				}
			}
			else
			{
				return iVar0;
			}
		}
		if (bVar41)
		{
			if (iVar40 != -1)
			{
				iVar42 = unk_0x5A3F0A3B7ECCBD32(iVar38);
				iVar43 = 0;
				while (iVar43 < iVar42)
				{
					unk_0x0249B53AB91BF9D0(iVar38, iVar43, &iVar44, &iVar45, &iVar46);
					if (iVar46 == 8)
					{
						if (((((((iVar40 == 6 && unk_0x304A39EB177D246B(iVar44, joaat("alt_special_6"), 0)) || (iVar40 == 5 && unk_0x304A39EB177D246B(iVar44, joaat("alt_special_5"), 0))) || (iVar40 == 4 && unk_0x304A39EB177D246B(iVar44, joaat("ALT_SPECIAL_4"), 0))) || (iVar40 == 3 && unk_0x304A39EB177D246B(iVar44, joaat("ALT_SPECIAL_3"), 0))) || (iVar40 == 2 && unk_0x304A39EB177D246B(iVar44, joaat("alt_special_2"), 0))) || (iVar40 == 1 && unk_0x304A39EB177D246B(iVar44, joaat("alt_special"), 0))) || ((((((iVar40 == 0 && !unk_0x304A39EB177D246B(iVar44, joaat("alt_special"), 0)) && !unk_0x304A39EB177D246B(iVar44, joaat("alt_special_2"), 0)) && !unk_0x304A39EB177D246B(iVar44, joaat("ALT_SPECIAL_3"), 0)) && !unk_0x304A39EB177D246B(iVar44, joaat("ALT_SPECIAL_4"), 0)) && !unk_0x304A39EB177D246B(iVar44, joaat("alt_special_5"), 0)) && !unk_0x304A39EB177D246B(iVar44, joaat("alt_special_6"), 0)))
						{
							if (iVar44 != 0 && iVar44 != joaat("0"))
							{
								iVar0 = func_22(iParam0, iVar44, 8, 4);
							}
							else
							{
								iVar0 = iVar45;
							}
							iVar43 = iVar42 + 1;
							iVar1 = 0;
							return iVar0;
						}
					}
					iVar43++;
				}
			}
			return -99;
		}
		if ((((((((iParam1 >= 192 && iParam1 <= 207) || iVar39 == 12) && ((((iParam2 >= 96 && iParam2 <= 111) || (iParam2 >= 112 && iParam2 <= 127)) || iVar37 == 6) || iVar37 == 7)) && func_141()) && !unk_0x304A39EB177D246B(iVar36, joaat("apart_draw_15"), 0)) && !unk_0x304A39EB177D246B(iVar36, joaat("apart_draw_25"), 0)) && !unk_0x304A39EB177D246B(iVar36, joaat("stunt_draw_4"), 0)) && !unk_0x304A39EB177D246B(iVar36, joaat("stunt_draw_9"), 0))
		{
			if ((((((unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_6"), 0) || unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_10"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_33"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("air_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("smug_draw_1"), 0))
			{
				return -99;
			}
			iVar47 = iVar38;
			if (iParam1 == 199)
			{
				iVar0 = func_22(iParam0, joaat("dlc_mp_busi_f_accs2_0"), 8, 4);
			}
			else if (iParam1 == 200)
			{
				iVar0 = func_22(iParam0, joaat("dlc_mp_busi_f_accs2_1"), 8, 4);
			}
			else if (iParam1 == 201)
			{
				iVar0 = func_22(iParam0, joaat("dlc_mp_busi_f_accs2_2"), 8, 4);
			}
			else if (iVar47 == joaat("dlc_mp_busi_f_jbib2_0"))
			{
				iVar0 = func_22(iParam0, joaat("dlc_mp_busi_f_accs2_3"), 8, 4);
			}
			else if (iVar47 == joaat("dlc_mp_busi_f_jbib2_1"))
			{
				iVar0 = func_22(iParam0, joaat("dlc_mp_busi_f_accs2_4"), 8, 4);
			}
			else if (iVar47 == joaat("dlc_mp_busi_f_jbib2_2"))
			{
				iVar0 = func_22(iParam0, joaat("dlc_mp_busi_f_accs2_5"), 8, 4);
			}
			else if (iVar47 == joaat("dlc_mp_busi_f_jbib2_3"))
			{
				iVar0 = func_22(iParam0, joaat("dlc_mp_busi_f_accs2_6"), 8, 4);
			}
			else if (iVar47 == joaat("dlc_mp_busi_f_jbib2_4"))
			{
				iVar0 = func_22(iParam0, joaat("dlc_mp_busi_f_accs2_7"), 8, 4);
			}
			else if (iVar47 == joaat("dlc_mp_busi_f_jbib2_5"))
			{
				iVar0 = func_22(iParam0, joaat("dlc_mp_busi_f_accs2_8"), 8, 4);
			}
			else if (iVar47 == joaat("dlc_mp_busi_f_jbib2_6"))
			{
				iVar0 = func_22(iParam0, joaat("dlc_mp_busi_f_accs2_9"), 8, 4);
			}
			else if (iVar47 == joaat("dlc_mp_busi_f_jbib2_7"))
			{
				iVar0 = func_22(iParam0, joaat("dlc_mp_busi_f_accs2_10"), 8, 4);
			}
			else if (iVar47 == joaat("dlc_mp_busi_f_jbib2_8"))
			{
				iVar0 = func_22(iParam0, joaat("dlc_mp_busi_f_accs2_11"), 8, 4);
			}
			else if (iVar47 == joaat("dlc_mp_busi_f_jbib2_9"))
			{
				iVar0 = func_22(iParam0, joaat("dlc_mp_busi_f_accs2_12"), 8, 4);
			}
			else if (iVar47 == joaat("dlc_mp_busi_f_jbib2_10"))
			{
				iVar0 = func_22(iParam0, joaat("dlc_mp_busi_f_accs2_13"), 8, 4);
			}
			else if (iVar47 == joaat("dlc_mp_busi_f_jbib2_11"))
			{
				iVar0 = func_22(iParam0, joaat("dlc_mp_busi_f_accs2_14"), 8, 4);
			}
			else if (iVar47 == joaat("dlc_mp_busi_f_jbib2_12"))
			{
				iVar0 = func_22(iParam0, joaat("dlc_mp_busi_f_accs2_15"), 8, 4);
			}
			iVar1 = 0;
		}
		else if (iParam1 <= 15)
		{
			if (((((iParam2 >= 160 && iParam2 <= 175) || unk_0x304A39EB177D246B(iVar36, joaat("luxe2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("luxe_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("biker_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar36, joaat("smug_draw_0"), 0))
			{
				iVar0 = 16;
			}
			else
			{
				iVar0 = 0;
			}
		}
		else if (iParam1 <= 31)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 34;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 50;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = 71;
		}
		else if (iParam1 <= 207)
		{
			iVar1 = 0;
			switch (iParam1)
			{
				case 199:
					iVar0 = 94;
					break;
				
				case 200:
					iVar0 = 95;
					break;
				
				case 201:
					iVar0 = 96;
					break;
			}
			if ((iParam2 >= 160 && iParam2 <= 175) || iVar37 == 10)
			{
				return -99;
			}
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 103;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 255)
		{
			iVar0 = 120;
		}
		else if (iParam1 >= 256)
		{
			iVar0 = 48;
			iVar1 = 0;
			if (iVar38 != -1)
			{
				bVar48 = true;
				if (unk_0x304A39EB177D246B(iVar38, joaat("vest_shirt"), 0))
				{
					bVar48 = false;
					if (iParam2 >= 256 && unk_0x304A39EB177D246B(iVar36, joaat("vest"), 0))
					{
						bVar48 = true;
					}
				}
				if (bVar48)
				{
					iVar40 = 0;
					if (iParam2 >= 160 && iParam2 <= 175)
					{
						if (iVar39 == 12)
						{
							iVar40 = 1;
						}
					}
					iVar49 = unk_0x5A3F0A3B7ECCBD32(iVar38);
					iVar50 = 0;
					while (iVar50 < iVar49)
					{
						unk_0x0249B53AB91BF9D0(iVar38, iVar50, &iVar51, &iVar52, &iVar53);
						if (iVar53 == 8 && ((((((((iVar51 == 0 || iVar51 == joaat("0")) || (iVar40 == 6 && unk_0x304A39EB177D246B(iVar51, joaat("alt_special_6"), 0))) || (iVar40 == 5 && unk_0x304A39EB177D246B(iVar51, joaat("alt_special_5"), 0))) || (iVar40 == 4 && unk_0x304A39EB177D246B(iVar51, joaat("ALT_SPECIAL_4"), 0))) || (iVar40 == 3 && unk_0x304A39EB177D246B(iVar51, joaat("ALT_SPECIAL_3"), 0))) || (iVar40 == 2 && unk_0x304A39EB177D246B(iVar51, joaat("alt_special_2"), 0))) || (iVar40 == 1 && unk_0x304A39EB177D246B(iVar51, joaat("alt_special"), 0))) || ((((((iVar40 == 0 && !unk_0x304A39EB177D246B(iVar51, joaat("alt_special"), 0)) && !unk_0x304A39EB177D246B(iVar51, joaat("alt_special_2"), 0)) && !unk_0x304A39EB177D246B(iVar51, joaat("ALT_SPECIAL_3"), 0)) && !unk_0x304A39EB177D246B(iVar51, joaat("ALT_SPECIAL_4"), 0)) && !unk_0x304A39EB177D246B(iVar51, joaat("alt_special_5"), 0)) && !unk_0x304A39EB177D246B(iVar51, joaat("alt_special_6"), 0))))
						{
							if (iVar51 != 0 && iVar51 != joaat("0"))
							{
								iVar0 = func_22(iParam0, iVar51, 8, 4);
							}
							else
							{
								iVar0 = iVar52;
							}
							iVar50 = iVar49 + 1;
							iVar1 = 0;
						}
						iVar50++;
					}
				}
			}
		}
	}
	if (iVar1 && iVar0 != -99)
	{
		iVar0 = (iVar0 + iParam3);
	}
	return iVar0;
}

bool func_141()
{
	return unk_0x087611B922B50F13(42019760);
}

int func_142(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_f_torso_0_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_f_torso_13_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_f_torso_26_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_f_torso_39_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_f_torso_52_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_f_torso_65_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_f_torso_78_0");
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return joaat("dlc_mp_gr_f_torso_2_0");
							break;
						
						case 16:
							return joaat("dlc_mp_gr_f_torso_18_0");
							break;
						
						case 17:
							return joaat("dlc_mp_sum_f_torso_2_0");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_f_torso_1_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_f_torso_14_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_f_torso_27_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_f_torso_40_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_f_torso_53_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_f_torso_66_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_f_torso_79_0");
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return joaat("dlc_mp_gr_f_torso_3_0");
							break;
						
						case 16:
							return joaat("dlc_mp_gr_f_torso_19_0");
							break;
						
						case 17:
							return joaat("dlc_mp_sum_f_torso_3_0");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_f_torso_2_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_f_torso_15_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_f_torso_28_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_f_torso_41_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_f_torso_54_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_f_torso_67_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_f_torso_80_0");
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return joaat("dlc_mp_gr_f_torso_4_0");
							break;
						
						case 16:
							return joaat("dlc_mp_gr_f_torso_20_0");
							break;
						
						case 17:
							return joaat("dlc_mp_sum_f_torso_4_0");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return joaat("dlc_mp_lts_f_uppr_0_0");
							break;
						
						case 1:
							return joaat("dlc_mp_lts_f_uppr_1_0");
							break;
						
						case 2:
							return joaat("dlc_mp_heist_f_torso_3_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_f_torso_16_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_f_torso_29_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_f_torso_42_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_f_torso_55_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_f_torso_68_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_f_torso_81_0");
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return joaat("dlc_mp_gr_f_torso_5_0");
							break;
						
						case 16:
							return joaat("dlc_mp_gr_f_torso_21_0");
							break;
						
						case 17:
							return joaat("dlc_mp_sum_f_torso_5_0");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_f_torso_4_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_f_torso_17_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_f_torso_30_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_f_torso_43_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_f_torso_56_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_f_torso_69_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_f_torso_82_0");
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return joaat("dlc_mp_gr_f_torso_6_0");
							break;
						
						case 16:
							return joaat("dlc_mp_gr_f_torso_22_0");
							break;
						
						case 17:
							return joaat("dlc_mp_sum_f_torso_6_0");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_f_torso_5_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_f_torso_18_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_f_torso_31_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_f_torso_44_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_f_torso_57_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_f_torso_70_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_f_torso_83_0");
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return joaat("dlc_mp_gr_f_torso_7_0");
							break;
						
						case 16:
							return joaat("dlc_mp_gr_f_torso_23_0");
							break;
						
						case 17:
							return joaat("dlc_mp_sum_f_torso_7_0");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_f_torso_6_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_f_torso_19_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_f_torso_32_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_f_torso_45_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_f_torso_58_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_f_torso_71_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_f_torso_84_0");
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return joaat("dlc_mp_gr_f_torso_8_0");
							break;
						
						case 16:
							return joaat("dlc_mp_gr_f_torso_24_0");
							break;
						
						case 17:
							return joaat("dlc_mp_sum_f_torso_8_0");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_f_torso_7_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_f_torso_20_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_f_torso_33_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_f_torso_46_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_f_torso_59_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_f_torso_72_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_f_torso_85_0");
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return joaat("dlc_mp_gr_f_torso_9_0");
							break;
						
						case 16:
							return joaat("dlc_mp_gr_f_torso_25_0");
							break;
						
						case 17:
							return joaat("dlc_mp_sum_f_torso_9_0");
							break;
					}
					break;
				
				case 8:
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_f_torso_8_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_f_torso_21_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_f_torso_34_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_f_torso_47_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_f_torso_60_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_f_torso_73_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_f_torso_86_0");
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return joaat("dlc_mp_gr_f_torso_10_0");
							break;
						
						case 16:
							return joaat("dlc_mp_gr_f_torso_26_0");
							break;
						
						case 17:
							return joaat("dlc_mp_sum_f_torso_10_0");
							break;
					}
					break;
				
				case 10:
					break;
				
				case 11:
				case 16:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_f_torso_9_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_f_torso_22_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_f_torso_35_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_f_torso_48_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_f_torso_61_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_f_torso_74_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_f_torso_87_0");
							break;
						
						case 9:
							return joaat("dlc_mp_val_f_uppr0_0");
							break;
						
						case 10:
							return joaat("dlc_mp_val_f_uppr0_1");
							break;
						
						case 11:
							return joaat("dlc_mp_val_f_uppr0_2");
							break;
						
						case 12:
							return joaat("dlc_mp_val_f_uppr0_3");
							break;
						
						case 13:
							return joaat("dlc_mp_val_f_uppr0_4");
							break;
						
						case 14:
							return joaat("dlc_mp_val_f_uppr0_5");
							break;
						
						case 15:
							return joaat("dlc_mp_gr_f_torso_11_0");
							break;
						
						case 16:
							return joaat("dlc_mp_gr_f_torso_27_0");
							break;
						
						case 17:
							return joaat("dlc_mp_sum_f_torso_11_0");
							break;
					}
					break;
				
				case 12:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_f_torso_10_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_f_torso_23_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_f_torso_36_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_f_torso_49_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_f_torso_62_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_f_torso_75_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_f_torso_88_0");
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return joaat("dlc_mp_gr_f_torso_12_0");
							break;
						
						case 16:
							return joaat("dlc_mp_gr_f_torso_28_0");
							break;
						
						case 17:
							return joaat("dlc_mp_sum_f_torso_12_0");
							break;
					}
					break;
				
				case 13:
					break;
				
				case 14:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_f_torso_11_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_f_torso_24_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_f_torso_37_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_f_torso_50_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_f_torso_63_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_f_torso_76_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_f_torso_89_0");
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return joaat("dlc_mp_gr_f_torso_13_0");
							break;
						
						case 16:
							return joaat("dlc_mp_gr_f_torso_29_0");
							break;
						
						case 17:
							return joaat("dlc_mp_sum_f_torso_13_0");
							break;
					}
					break;
				
				case 15:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_f_torso_12_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_f_torso_25_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_f_torso_38_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_f_torso_51_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_f_torso_64_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_f_torso_77_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_f_torso_90_0");
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return joaat("dlc_mp_gr_f_torso_0_0");
							break;
						
						case 16:
							return joaat("dlc_mp_gr_f_torso_1_0");
							break;
						
						case 17:
							return joaat("dlc_mp_sum_f_torso_1_0");
							break;
					}
					break;
				
				case 352:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_biker_f_torso_3_0");
							break;
						
						case 3:
							return joaat("dlc_mp_biker_f_torso_4_0");
							break;
						
						case 4:
							return joaat("dlc_mp_biker_f_torso_5_0");
							break;
						
						case 5:
							return joaat("dlc_mp_biker_f_torso_6_0");
							break;
						
						case 6:
							return joaat("dlc_mp_biker_f_torso_7_0");
							break;
						
						case 7:
							return joaat("dlc_mp_biker_f_torso_8_0");
							break;
						
						case 8:
							return joaat("dlc_mp_biker_f_torso_9_0");
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return joaat("dlc_mp_gr_f_torso_14_0");
							break;
						
						case 16:
							return joaat("dlc_mp_gr_f_torso_30_0");
							break;
						
						case 17:
							return joaat("dlc_mp_sum_f_torso_14_0");
							break;
					}
					break;
				
				case 353:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_biker_f_torso_10_0");
							break;
						
						case 3:
							return joaat("dlc_mp_biker_f_torso_11_0");
							break;
						
						case 4:
							return joaat("dlc_mp_biker_f_torso_12_0");
							break;
						
						case 5:
							return joaat("dlc_mp_biker_f_torso_13_0");
							break;
						
						case 6:
							return joaat("dlc_mp_biker_f_torso_14_0");
							break;
						
						case 7:
							return joaat("dlc_mp_biker_f_torso_15_0");
							break;
						
						case 8:
							return joaat("dlc_mp_biker_f_torso_16_0");
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return joaat("dlc_mp_gr_f_torso_15_0");
							break;
						
						case 16:
							return joaat("dlc_mp_gr_f_torso_31_0");
							break;
						
						case 17:
							return joaat("dlc_mp_sum_f_torso_15_0");
							break;
					}
					break;
				
				case 354:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_biker_f_torso_17_0");
							break;
						
						case 3:
							return joaat("dlc_mp_biker_f_torso_18_0");
							break;
						
						case 4:
							return joaat("dlc_mp_biker_f_torso_19_0");
							break;
						
						case 5:
							return joaat("dlc_mp_biker_f_torso_20_0");
							break;
						
						case 6:
							return joaat("dlc_mp_biker_f_torso_21_0");
							break;
						
						case 7:
							return joaat("dlc_mp_biker_f_torso_22_0");
							break;
						
						case 8:
							return joaat("dlc_mp_biker_f_torso_23_0");
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return joaat("dlc_mp_gr_f_torso_16_0");
							break;
						
						case 16:
							return joaat("dlc_mp_gr_f_torso_32_0");
							break;
						
						case 17:
							return joaat("dlc_mp_sum_f_torso_16_0");
							break;
					}
					break;
				
				case 391:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_ie_f_torso_1_0");
							break;
						
						case 3:
							return joaat("dlc_mp_ie_f_torso_2_0");
							break;
						
						case 4:
							return joaat("dlc_mp_ie_f_torso_3_0");
							break;
						
						case 5:
							return joaat("dlc_mp_ie_f_torso_4_0");
							break;
						
						case 6:
							return joaat("dlc_mp_ie_f_torso_5_0");
							break;
						
						case 7:
							return joaat("dlc_mp_ie_f_torso_6_0");
							break;
						
						case 8:
							return joaat("dlc_mp_ie_f_torso_7_0");
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return joaat("dlc_mp_gr_f_torso_17_0");
							break;
						
						case 16:
							return joaat("dlc_mp_gr_f_torso_33_0");
							break;
						
						case 17:
							return joaat("dlc_mp_sum_f_torso_17_0");
							break;
					}
					break;
				
				case 404:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_ie_f_torso_9_0");
							break;
						
						case 3:
							return joaat("dlc_mp_ie_f_torso_10_0");
							break;
						
						case 4:
							return joaat("dlc_mp_ie_f_torso_11_0");
							break;
						
						case 5:
							return joaat("dlc_mp_ie_f_torso_12_0");
							break;
						
						case 6:
							return joaat("dlc_mp_ie_f_torso_13_0");
							break;
						
						case 7:
							return joaat("dlc_mp_ie_f_torso_14_0");
							break;
						
						case 8:
							return joaat("dlc_mp_ie_f_torso_15_0");
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return joaat("dlc_mp_gr_f_torso_34_0");
							break;
						
						case 16:
							return joaat("dlc_mp_gr_f_torso_35_0");
							break;
						
						case 17:
							return joaat("dlc_mp_sum_f_torso_18_0");
							break;
					}
					break;
				
				case 1326:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_h4_f_torso_1_0");
							break;
						
						case 3:
							return joaat("dlc_mp_h4_f_torso_2_0");
							break;
						
						case 4:
							return joaat("dlc_mp_h4_f_torso_3_0");
							break;
						
						case 5:
							return joaat("dlc_mp_h4_f_torso_4_0");
							break;
						
						case 6:
							return joaat("dlc_mp_h4_f_torso_5_0");
							break;
						
						case 7:
							return joaat("dlc_mp_h4_f_torso_6_0");
							break;
						
						case 8:
							return joaat("dlc_mp_h4_f_torso_7_0");
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return joaat("dlc_mp_h4_f_torso_8_0");
							break;
						
						case 16:
							return joaat("dlc_mp_h4_f_torso_9_0");
							break;
						
						case 17:
							return joaat("dlc_mp_h4_f_torso_10_0");
							break;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_m_torso_0_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_m_torso_11_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_m_torso_22_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_m_torso_33_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_m_torso_44_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_m_torso_55_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_m_torso_66_0");
							break;
						
						case 9:
							return joaat("dlc_mp_gr_m_torso_2_0");
							break;
						
						case 10:
							return joaat("dlc_mp_gr_m_torso_15_0");
							break;
						
						case 11:
							return joaat("dlc_mp_sum_m_torso_2_0");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_m_torso_1_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_m_torso_12_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_m_torso_23_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_m_torso_34_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_m_torso_45_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_m_torso_56_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_m_torso_67_0");
							break;
						
						case 9:
							return joaat("dlc_mp_gr_m_torso_3_0");
							break;
						
						case 10:
							return joaat("dlc_mp_gr_m_torso_16_0");
							break;
						
						case 11:
							return joaat("dlc_mp_sum_m_torso_3_0");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_m_torso_2_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_m_torso_13_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_m_torso_24_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_m_torso_35_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_m_torso_46_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_m_torso_57_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_m_torso_68_0");
							break;
						
						case 9:
							return joaat("dlc_mp_gr_m_torso_4_0");
							break;
						
						case 10:
							return joaat("dlc_mp_gr_m_torso_17_0");
							break;
						
						case 11:
							return joaat("dlc_mp_sum_m_torso_4_0");
							break;
					}
					break;
				
				case 3:
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return joaat("dlc_mp_lts_m_uppr_0_0");
							break;
						
						case 1:
							return joaat("dlc_mp_lts_m_uppr_1_0");
							break;
						
						case 2:
							return joaat("dlc_mp_heist_m_torso_3_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_m_torso_14_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_m_torso_25_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_m_torso_36_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_m_torso_47_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_m_torso_58_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_m_torso_69_0");
							break;
						
						case 9:
							return joaat("dlc_mp_gr_m_torso_5_0");
							break;
						
						case 10:
							return joaat("dlc_mp_gr_m_torso_18_0");
							break;
						
						case 11:
							return joaat("dlc_mp_sum_m_torso_5_0");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_m_torso_4_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_m_torso_15_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_m_torso_26_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_m_torso_37_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_m_torso_48_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_m_torso_59_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_m_torso_70_0");
							break;
						
						case 9:
							return joaat("dlc_mp_gr_m_torso_6_0");
							break;
						
						case 10:
							return joaat("dlc_mp_gr_m_torso_19_0");
							break;
						
						case 11:
							return joaat("dlc_mp_sum_m_torso_6_0");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_m_torso_5_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_m_torso_16_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_m_torso_27_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_m_torso_38_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_m_torso_49_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_m_torso_60_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_m_torso_71_0");
							break;
						
						case 9:
							return joaat("dlc_mp_gr_m_torso_7_0");
							break;
						
						case 10:
							return joaat("dlc_mp_gr_m_torso_20_0");
							break;
						
						case 11:
							return joaat("dlc_mp_sum_m_torso_7_0");
							break;
					}
					break;
				
				case 7:
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_m_torso_6_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_m_torso_17_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_m_torso_28_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_m_torso_39_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_m_torso_50_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_m_torso_61_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_m_torso_72_0");
							break;
						
						case 9:
							return joaat("dlc_mp_gr_m_torso_8_0");
							break;
						
						case 10:
							return joaat("dlc_mp_gr_m_torso_21_0");
							break;
						
						case 11:
							return joaat("dlc_mp_sum_m_torso_8_0");
							break;
					}
					break;
				
				case 9:
					break;
				
				case 10:
					break;
				
				case 11:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_m_torso_7_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_m_torso_18_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_m_torso_29_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_m_torso_40_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_m_torso_51_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_m_torso_62_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_m_torso_73_0");
							break;
						
						case 9:
							return joaat("dlc_mp_gr_m_torso_9_0");
							break;
						
						case 10:
							return joaat("dlc_mp_gr_m_torso_22_0");
							break;
						
						case 11:
							return joaat("dlc_mp_sum_m_torso_9_0");
							break;
					}
					break;
				
				case 12:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_m_torso_8_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_m_torso_19_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_m_torso_30_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_m_torso_41_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_m_torso_52_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_m_torso_63_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_m_torso_74_0");
							break;
						
						case 9:
							return joaat("dlc_mp_gr_m_torso_10_0");
							break;
						
						case 10:
							return joaat("dlc_mp_gr_m_torso_23_0");
							break;
						
						case 11:
							return joaat("dlc_mp_sum_m_torso_10_0");
							break;
					}
					break;
				
				case 13:
					break;
				
				case 14:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_m_torso_9_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_m_torso_20_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_m_torso_31_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_m_torso_42_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_m_torso_53_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_m_torso_64_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_m_torso_75_0");
							break;
						
						case 9:
							return joaat("dlc_mp_gr_m_torso_11_0");
							break;
						
						case 10:
							return joaat("dlc_mp_gr_m_torso_24_0");
							break;
						
						case 11:
							return joaat("dlc_mp_sum_m_torso_11_0");
							break;
					}
					break;
				
				case 15:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_heist_m_torso_10_0");
							break;
						
						case 3:
							return joaat("dlc_mp_heist_m_torso_21_0");
							break;
						
						case 4:
							return joaat("dlc_mp_heist_m_torso_32_0");
							break;
						
						case 5:
							return joaat("dlc_mp_heist_m_torso_43_0");
							break;
						
						case 6:
							return joaat("dlc_mp_heist_m_torso_54_0");
							break;
						
						case 7:
							return joaat("dlc_mp_heist_m_torso_65_0");
							break;
						
						case 8:
							return joaat("dlc_mp_heist_m_torso_76_0");
							break;
						
						case 9:
							return joaat("dlc_mp_gr_m_torso_0_0");
							break;
						
						case 10:
							return joaat("dlc_mp_gr_m_torso_1_0");
							break;
						
						case 11:
							return joaat("dlc_mp_sum_m_torso_1_0");
							break;
					}
					break;
				
				case 302:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_biker_m_torso_3_0");
							break;
						
						case 3:
							return joaat("dlc_mp_biker_m_torso_4_0");
							break;
						
						case 4:
							return joaat("dlc_mp_biker_m_torso_5_0");
							break;
						
						case 5:
							return joaat("dlc_mp_biker_m_torso_6_0");
							break;
						
						case 6:
							return joaat("dlc_mp_biker_m_torso_7_0");
							break;
						
						case 7:
							return joaat("dlc_mp_biker_m_torso_8_0");
							break;
						
						case 8:
							return joaat("dlc_mp_biker_m_torso_9_0");
							break;
						
						case 9:
							return joaat("dlc_mp_gr_m_torso_12_0");
							break;
						
						case 10:
							return joaat("dlc_mp_gr_m_torso_25_0");
							break;
						
						case 11:
							return joaat("dlc_mp_sum_m_torso_12_0");
							break;
					}
					break;
				
				case 303:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_biker_m_torso_10_0");
							break;
						
						case 3:
							return joaat("dlc_mp_biker_m_torso_11_0");
							break;
						
						case 4:
							return joaat("dlc_mp_biker_m_torso_12_0");
							break;
						
						case 5:
							return joaat("dlc_mp_biker_m_torso_13_0");
							break;
						
						case 6:
							return joaat("dlc_mp_biker_m_torso_14_0");
							break;
						
						case 7:
							return joaat("dlc_mp_biker_m_torso_15_0");
							break;
						
						case 8:
							return joaat("dlc_mp_biker_m_torso_16_0");
							break;
						
						case 9:
							return joaat("dlc_mp_gr_m_torso_13_0");
							break;
						
						case 10:
							return joaat("dlc_mp_gr_m_torso_26_0");
							break;
						
						case 11:
							return joaat("dlc_mp_sum_m_torso_13_0");
							break;
					}
					break;
				
				case 304:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_biker_m_torso_17_0");
							break;
						
						case 3:
							return joaat("dlc_mp_biker_m_torso_18_0");
							break;
						
						case 4:
							return joaat("dlc_mp_biker_m_torso_19_0");
							break;
						
						case 5:
							return joaat("dlc_mp_biker_m_torso_20_0");
							break;
						
						case 6:
							return joaat("dlc_mp_biker_m_torso_21_0");
							break;
						
						case 7:
							return joaat("dlc_mp_biker_m_torso_22_0");
							break;
						
						case 8:
							return joaat("dlc_mp_biker_m_torso_23_0");
							break;
						
						case 9:
							return joaat("dlc_mp_gr_m_torso_14_0");
							break;
						
						case 10:
							return joaat("dlc_mp_gr_m_torso_14_0");
							break;
						
						case 11:
							return joaat("dlc_mp_sum_m_torso_14_0");
							break;
					}
					break;
				
				case 1058:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("dlc_mp_h4_m_torso_1_0");
							break;
						
						case 3:
							return joaat("dlc_mp_h4_m_torso_2_0");
							break;
						
						case 4:
							return joaat("dlc_mp_h4_m_torso_3_0");
							break;
						
						case 5:
							return joaat("dlc_mp_h4_m_torso_4_0");
							break;
						
						case 6:
							return joaat("dlc_mp_h4_m_torso_5_0");
							break;
						
						case 7:
							return joaat("dlc_mp_h4_m_torso_6_0");
							break;
						
						case 8:
							return joaat("dlc_mp_h4_m_torso_7_0");
							break;
						
						case 9:
							return joaat("dlc_mp_h4_m_torso_8_0");
							break;
						
						case 10:
							return joaat("dlc_mp_h4_m_torso_9_0");
							break;
						
						case 11:
							return joaat("dlc_mp_h4_m_torso_10_0");
							break;
					}
					break;
				
				case 1122:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1825430876;
							break;
						
						case 3:
							return -1057096950;
							break;
						
						case 4:
							return -470084628;
							break;
						
						case 5:
							return -670660484;
							break;
						
						case 6:
							return -2129037489;
							break;
						
						case 7:
							return 651868221;
							break;
						
						case 8:
							return -2108287414;
							break;
						
						case 9:
							return -235377166;
							break;
						
						case 10:
							return -214147869;
							break;
						
						case 11:
							return 2021053316;
							break;
					}
					break;
			}
			break;
	}
	return -1;
}

int func_143(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = -99;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam2 >= 237)
			{
				iVar2 = func_144(iParam0, iParam2, 11, 3);
				iVar1 = func_134(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = func_144(iParam0, iParam1, 8, 3);
				iVar3 = func_134(iVar4);
			}
			if (unk_0x304A39EB177D246B(iVar2, joaat("silk_robe"), 0))
			{
				iVar0 = 14;
			}
			else if (unk_0x304A39EB177D246B(iVar2, joaat("silk_pyjamas"), 0))
			{
				iVar0 = 6;
			}
			else if ((iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_1"), 0)) && unk_0x304A39EB177D246B(iVar2, joaat("jacket"), 0))
			{
				iVar0 = 1;
			}
			else if ((iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_2"), 0)) && unk_0x304A39EB177D246B(iVar2, joaat("jacket"), 0))
			{
				iVar0 = 4;
			}
			else if (unk_0x304A39EB177D246B(iVar2, joaat("biker_vest"), 0) && !unk_0x304A39EB177D246B(iVar2, joaat("jacket_only"), 0))
			{
				if (iParam1 == 240)
				{
					if ((unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_0"), 0) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_13"), 0))
					{
						iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_torso_0_0"), 3, 3);
					}
					else if (unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_1"), 0))
					{
						iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_torso_1_0"), 3, 3);
					}
					else if (unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_2"), 0))
					{
						iVar0 = func_22(iParam0, joaat("dlc_mp_biker_m_torso_2_0"), 3, 3);
					}
					else if (unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_143(iParam0, -99, func_135(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 0;
					}
				}
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("overcoat_accs"), 0))
			{
				iVar0 = 12;
			}
			else if (((iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("apart_draw_15"), 0)) || (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("apart_draw_24"), 0))) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_6"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 4;
				}
			}
			else if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("low2_open_check"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("heist_draw_7"), 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar3 == 12)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 11;
				}
			}
			else if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("heist_draw_9"), 0))
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("tux_jacket"), 0))
			{
				iVar0 = 12;
			}
			else if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("smug_draw_6"), 0))
			{
				iVar0 = 2;
			}
			else if (((iParam2 >= 0 && iParam2 <= 31) || iVar1 == 0) || iVar1 == 1)
			{
				iVar0 = 0;
			}
			else if ((((((((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 96 && iParam2 <= 107)) || (iParam2 >= 108 && iParam2 <= 123)) || (iParam2 >= 156 && iParam2 <= 171)) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || iVar1 == 7) || iVar1 == 10)
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240 || iVar3 == 15)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 160 && iParam1 <= 175) || iVar3 == 10)
				{
					iVar0 = 4;
				}
				else if ((iParam1 >= 176 && iParam1 <= 191) || iVar3 == 11)
				{
					iVar0 = 12;
				}
				else if ((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 224 && iParam1 <= 239)) || iVar3 == 1) || iVar3 == 14)
				{
					iVar0 = 1;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 32 && iParam1 <= 47) || iVar3 == 2)
				{
					iVar0 = 4;
				}
				else if (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("shirt_braces"), 0))
				{
					if (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("closed_collar"), 0))
					{
						iVar0 = 4;
					}
					else
					{
						iVar0 = 1;
					}
				}
				else if ((iParam1 >= 144 && iParam1 <= 159) || iVar3 == 9)
				{
					iVar0 = 1;
				}
				else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_2"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_3"), 0))
				{
					iVar0 = 4;
				}
				else if (iParam1 >= 241)
				{
					if (iVar4 != -1)
					{
						iVar5 = unk_0x9FB2D71D9CEC8B5A(iVar4);
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							unk_0xCF4D7500E7DA5D8E(iVar4, iVar6, &iVar7, &iVar8, &iVar9);
							if (iVar9 == 3)
							{
								if (iVar7 != 0 && iVar7 != joaat("0"))
								{
									iVar0 = func_22(iParam0, iVar7, 3, 3);
								}
								else
								{
									iVar0 = iVar8;
								}
								iVar6 = iVar5 + 1;
							}
							iVar6++;
						}
					}
				}
			}
			else if ((iParam2 >= 172 && iParam2 <= 187) || iVar1 == 11)
			{
				if (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("sweat_vest"), 0))
				{
					iVar0 = 6;
				}
				else if ((((iParam1 >= 48 && iParam1 <= 63) || (iParam1 >= 112 && iParam1 <= 127)) || iVar3 == 3) || iVar3 == 7)
				{
					iVar0 = 11;
				}
				else if ((iParam1 >= 96 && iParam1 <= 111) || iVar3 == 6)
				{
					iVar0 = 11;
				}
				else if (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("long_sleeve"), 0))
				{
					iVar0 = 12;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			else if ((iParam2 >= 140 && iParam2 <= 155) || iVar1 == 9)
			{
				iVar0 = 0;
			}
			else if (iParam2 == 236)
			{
				if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam2 >= 256)
			{
				iVar2 = func_144(iParam0, iParam2, 11, 4);
				iVar1 = func_134(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = func_144(iParam0, iParam1, 8, 4);
				iVar3 = func_134(iVar4);
				switch (iVar4)
				{
					case joaat("dlc_mp_beach_f_accs2_0"):
					case joaat("dlc_mp_beach_f_accs2_1"):
					case joaat("dlc_mp_beach_f_accs2_2"):
					case joaat("dlc_mp_beach_f_accs2_3"):
					case joaat("dlc_mp_beach_f_accs2_4"):
					case joaat("dlc_mp_beach_f_accs2_5"):
					case joaat("dlc_mp_beach_f_accs2_6"):
					case joaat("dlc_mp_beach_f_accs2_7"):
					case joaat("dlc_mp_beach_f_accs2_8"):
					case joaat("dlc_mp_beach_f_accs2_9"):
					case joaat("dlc_mp_beach_f_accs2_10"):
					case joaat("dlc_mp_beach_f_accs2_11"):
						iVar3 = 15;
						break;
					
					case joaat("dlc_mp_val_f_accs2_0"):
					case joaat("dlc_mp_val_f_accs2_1"):
					case joaat("dlc_mp_val_f_accs2_2"):
					case joaat("dlc_mp_val_f_accs2_3"):
					case joaat("dlc_mp_val_f_accs2_4"):
					case -174365543:
					case -1450128251:
					case -1811439245:
					case 1578218888:
					case -1193481443:
					case 1549742623:
					case 1309119856:
					case 2143418596:
					case 1905745039:
					case 428026984:
					case 1547729071:
					case -1848319017:
						iVar3 = 13;
						break;
					}
			}
			if (unk_0x304A39EB177D246B(iVar2, joaat("silk_robe"), 0))
			{
				iVar0 = 0;
			}
			else if (unk_0x304A39EB177D246B(iVar2, joaat("biker_vest"), 0) && !unk_0x304A39EB177D246B(iVar2, joaat("jacket_only"), 0))
			{
				if ((((((((((((((((((((((((((((iParam1 >= 34 && iParam1 <= 49) || (iParam1 >= 50 && iParam1 <= 65)) || (iParam1 >= 71 && iParam1 <= 86)) || (iParam1 >= 87 && iParam1 <= 102)) || (iParam1 >= 103 && iParam1 <= 118)) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 4) || iVar3 == 5) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 15) || iVar4 == joaat("dlc_mp_beach_f_accs0_0")) || iVar4 == joaat("dlc_mp_beach_f_accs0_1")) || iVar4 == joaat("dlc_mp_beach_f_accs0_2")) || iVar4 == joaat("dlc_mp_beach_f_accs0_3")) || iVar4 == joaat("dlc_mp_beach_f_accs0_4")) || iVar4 == joaat("dlc_mp_beach_f_accs0_5")) || iVar4 == joaat("dlc_mp_beach_f_accs0_6")) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_13"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_14"), 0))
				{
					if ((unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_0"), 0) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_13"), 0))
					{
						iVar0 = func_22(iParam0, joaat("dlc_mp_biker_f_torso_0_0"), 3, 4);
					}
					else if (unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_1"), 0))
					{
						iVar0 = func_22(iParam0, joaat("dlc_mp_biker_f_torso_1_0"), 3, 4);
					}
					else if ((unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_2"), 0) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("x17_draw_6"), 0))
					{
						iVar0 = func_22(iParam0, joaat("dlc_mp_biker_f_torso_2_0"), 3, 4);
					}
				}
				else if ((unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_9"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_10"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_143(iParam0, -99, func_135(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 14;
					}
				}
			}
			else if (unk_0x304A39EB177D246B(iVar2, joaat("open_short"), 0))
			{
				if (((iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("low_draw_4"), 0)) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("low_draw_5"), 0))) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("low_draw_6"), 0)))
				{
					iVar0 = 9;
				}
				else
				{
					iVar0 = func_22(iParam0, joaat("dlc_mp_h4_f_torso_0_0"), 3, 4);
				}
			}
			else if (unk_0x304A39EB177D246B(iVar2, -1099375697, 0))
			{
				if (((iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("low_draw_4"), 0)) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("low_draw_5"), 0))) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("low_draw_6"), 0)))
				{
					iVar0 = 9;
				}
				else
				{
					iVar0 = func_22(iParam0, joaat("dlc_mp_biker_f_torso_0_0"), 3, 4);
				}
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("overcoat_accs"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("vest_shirt"), 0)) && !func_139(iParam0, iParam2, -1)) && !unk_0x304A39EB177D246B(iVar2, joaat("silk_robe"), 0))
			{
				if (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("long_sleeve"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, 1353777856, 0))
			{
				iVar0 = 7;
			}
			else if ((iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_2"), 0)) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_3"), 0)))
			{
				iVar0 = 3;
			}
			else if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("low_draw_1"), 0))
			{
				if (unk_0x304A39EB177D246B(func_144(iParam0, iParam3, 4, 4), joaat("high_waist"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = 15;
				}
			}
			else if ((((((((((((((iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("low_draw_0"), 0)) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("low_draw_4"), 0))) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("low_draw_6"), 0))) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_0"), 0))) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_3"), 0))) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_6"), 0))) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_7"), 0))) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_8"), 0))) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_9"), 0))) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_10"), 0))) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_11"), 0))) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_12"), 0))) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_13"), 0))) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_14"), 0)))
			{
				if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 96 && iParam2 <= 111)) || (iParam2 >= 128 && iParam2 <= 143)) || iVar1 == 1) || iVar1 == 6) || iVar1 == 8)
				{
					iVar0 = 1;
				}
				else if (((((((((((((((((((((((((((iParam2 >= 112 && iParam2 <= 127) || (iParam2 >= 160 && iParam2 <= 175)) || iVar1 == 7) || iVar1 == 10) || unk_0x304A39EB177D246B(iVar2, joaat("tails_jacket"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("heist_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("heist_draw_16"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("heist_draw_17"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("luxe_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("luxe_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("luxe_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("luxe2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("luxe2_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("low2_open_check"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("apart_draw_15"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("apart_draw_25"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("stunt_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("stunt_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_10"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_33"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("air_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("smug_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("smug_draw_1"), 0))
				{
					iVar0 = 3;
				}
				else if (unk_0x304A39EB177D246B(iVar2, joaat("heist_draw_7"), 0))
				{
					iVar0 = 9;
				}
			}
			else if ((((((((iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("luxe_draw_0"), 0)) || (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_6"), 0))) || (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_9"), 0))) || (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_10"), 0))) || (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_12"), 0))) || (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_33"), 0))) || (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("air_draw_3"), 0))) || (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("smug_draw_1"), 0)))
			{
				if ((((unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_5"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_9"), 0))
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else if ((iParam2 >= 16 && iParam2 <= 31) || iVar1 == 1)
			{
				if ((((iParam1 >= 50 && iParam1 <= 65) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 5) || iVar3 == 15)
				{
					iVar0 = 5;
				}
				else if (iParam1 >= 136)
				{
					if (iVar4 != -1)
					{
						iVar10 = unk_0x9FB2D71D9CEC8B5A(iVar4);
						iVar11 = 0;
						while (iVar11 < iVar10)
						{
							unk_0xCF4D7500E7DA5D8E(iVar4, iVar11, &iVar12, &iVar13, &iVar14);
							if (iVar14 == 3)
							{
								if (iVar12 != 0 && iVar12 != joaat("0"))
								{
									iVar0 = func_22(iParam0, iVar12, 3, 4);
								}
								else
								{
									iVar0 = iVar13;
								}
								iVar11 = iVar10 + 1;
							}
							iVar11++;
						}
					}
				}
			}
			else if (((iParam2 >= 112 && iParam2 <= 127) || iVar1 == 7) || unk_0x304A39EB177D246B(iVar2, joaat("low2_open_check"), 0))
			{
				if ((((unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_5"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_9"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 6;
				}
			}
			break;
	}
	return iVar0;
}

int func_144(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	int iVar4;
	int iVar5;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x7A491C9A90975007(&Var0);
		iVar1 = (iParam1 - func_24(iParam0));
		if (iVar1 < 0)
		{
			return -1;
		}
		iVar2 = unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 1, -1, -1);
		if (iVar2 <= iVar1)
		{
			return -1;
		}
		unk_0x2DBB2D25D50A5392(iVar1, &Var0);
		return Var0.f_1;
	}
	else
	{
		unk_0x15D20F88F06530A5(&Var3);
		iVar4 = (iParam1 - func_23(iParam0, func_173(iParam2)));
		if (iVar4 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_78491.f_26[iParam2] && iParam1 == Global_78491[iParam2]) && Global_78491.f_13[iParam2] != 0)
		{
			return Global_78491.f_13[iParam2];
		}
		iVar5 = unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 0, -1, func_173(iParam2));
		if (iVar5 <= iVar4)
		{
			return -1;
		}
		unk_0xD36906FE7BBBDB62(iVar4, &Var3);
		Global_78491.f_13[iParam2] = Var3.f_1;
		Global_78491[iParam2] = iParam1;
		Global_78491.f_26[iParam2] = iParam0;
		return Var3.f_1;
	}
	return -1;
}

int func_145(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x4FAFF4BCB7633475(iParam0))
	{
		return -99;
	}
	iVar0 = func_173(iParam1);
	iVar1 = unk_0xC0120BBCC298EA2F(iParam0, iVar0);
	iVar2 = unk_0xD6AED6BFCC58AF7F(iParam0, iVar0);
	return func_146(iParam0, iVar1, iVar2, iParam1);
}

int func_146(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_173(iParam3);
	iVar1 = unk_0x1A4EFE92822E3123(uParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + unk_0x8401C77F508D70FD(uParam0, iVar0, iVar3));
		}
		else
		{
			iVar2 = (iVar2 + iParam2);
			return iVar2;
		}
		iVar3++;
	}
	return -99;
}

void func_147(int iParam0)
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
	int iVar12;
	int iVar13;
	bool bVar14;
	struct<5> Var15;
	int iVar16;
	int iVar17;
	struct<5> Var18;
	int iVar19;
	int iVar20;
	struct<5> Var21;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	iVar1 = unk_0xC0120BBCC298EA2F(iParam0, 11);
	iVar2 = unk_0xD6AED6BFCC58AF7F(iParam0, 11);
	iVar3 = unk_0xC0120BBCC298EA2F(iParam0, 1);
	iVar4 = unk_0xD6AED6BFCC58AF7F(iParam0, 1);
	iVar5 = unk_0xC0120BBCC298EA2F(iParam0, 8);
	iVar6 = unk_0xD6AED6BFCC58AF7F(iParam0, 8);
	iVar7 = unk_0xC0120BBCC298EA2F(iParam0, 10);
	iVar8 = unk_0xD6AED6BFCC58AF7F(iParam0, 10);
	iVar9 = unk_0x94B8A32AA940A6B5(iParam0, 11, iVar1, iVar2);
	iVar10 = unk_0x94B8A32AA940A6B5(iParam0, 1, iVar3, iVar4);
	iVar11 = unk_0x94B8A32AA940A6B5(iParam0, 8, iVar5, iVar6);
	iVar12 = unk_0x6B7AEB5F3D578298(iParam0, 0, unk_0xB204F40D393426B6(iParam0, 0, 1), unk_0x0DC23FA727759F9F(iParam0, 0));
	iVar13 = unk_0x94B8A32AA940A6B5(iParam0, 10, iVar7, iVar8);
	bVar14 = false;
	if (unk_0x304A39EB177D246B(iVar9, joaat("hooded_jacket"), 0) && unk_0x304A39EB177D246B(iVar9, joaat("hood_up"), 0))
	{
		if (!func_152(iParam0, &bVar14, iVar9, iVar10, iVar12) || unk_0x7F420695E3F776FB(iParam0, 0))
		{
			if (func_151(iVar9, 0, 0, &iVar16))
			{
				unk_0xA5690D702773BED4(iVar16, &Var15);
				unk_0xD1C578C204015E1F(iParam0, 11, Var15.f_3, Var15.f_4, unk_0xDAF263B0E792EAEC(iParam0, 11));
				if (unk_0xC0120BBCC298EA2F(iParam0, 10) == 0 && func_150(iVar13, 11, -1))
				{
					if (func_150(iVar13, 11, Var15.f_1))
					{
						unk_0xD1C578C204015E1F(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (func_149(iVar13, 10, &iVar17, -1))
					{
						if (func_150(iVar17, 11, Var15.f_1))
						{
							unk_0xA5690D702773BED4(iVar17, &Var18);
							unk_0xD1C578C204015E1F(iParam0, 10, Var18.f_3, Var18.f_4, 0);
						}
					}
				}
				if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("mp_m_freemode_01"))
				{
					if (unk_0x304A39EB177D246B(iVar13, joaat("crew_logo"), 0))
					{
						if (unk_0x304A39EB177D246B(iVar16, joaat("ie_draw_16"), 0) && iVar13 != joaat("dlc_mp_ie_m_decl_1_0"))
						{
							unk_0xA5690D702773BED4(joaat("dlc_mp_ie_m_decl_1_0"), &Var15);
							unk_0xD1C578C204015E1F(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (unk_0x304A39EB177D246B(iVar16, joaat("ie_draw_19"), 0) && iVar13 != joaat("dlc_mp_ie_m_decl_2_0"))
						{
							unk_0xA5690D702773BED4(joaat("dlc_mp_ie_m_decl_2_0"), &Var15);
							unk_0xD1C578C204015E1F(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (unk_0x304A39EB177D246B(iVar16, joaat("gorka_suit"), 0))
						{
							unk_0xA5690D702773BED4(joaat("dlc_mp_x17_m_decl_10_0"), &Var15);
							unk_0xD1C578C204015E1F(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (unk_0x304A39EB177D246B(iVar16, 721933872, 0) && iVar13 != joaat("dlc_mp_fixer_m_decl_0_0"))
						{
							unk_0xA5690D702773BED4(joaat("dlc_mp_fixer_m_decl_0_0"), &Var15);
							unk_0xD1C578C204015E1F(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (unk_0x304A39EB177D246B(iVar16, 383888868, 0) && iVar13 != joaat("dlc_mp_fixer_m_decl_1_0"))
						{
							unk_0xA5690D702773BED4(joaat("dlc_mp_fixer_m_decl_1_0"), &Var15);
							unk_0xD1C578C204015E1F(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (unk_0x304A39EB177D246B(iVar13, joaat("crew_logo"), 0))
				{
					if (unk_0x304A39EB177D246B(iVar16, joaat("ie_draw_16"), 0))
					{
						if (iVar13 != joaat("dlc_mp_ie_f_decl_1_0"))
						{
							unk_0xA5690D702773BED4(joaat("dlc_mp_ie_f_decl_1_0"), &Var15);
							unk_0xD1C578C204015E1F(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (unk_0x304A39EB177D246B(iVar16, joaat("ie_draw_19"), 0))
					{
						if (iVar13 != joaat("dlc_mp_ie_f_decl_2_0"))
						{
							unk_0xA5690D702773BED4(joaat("dlc_mp_ie_f_decl_2_0"), &Var15);
							unk_0xD1C578C204015E1F(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (unk_0x304A39EB177D246B(iVar16, joaat("gorka_suit"), 0))
					{
						unk_0xA5690D702773BED4(joaat("dlc_mp_x17_f_decl_10_0"), &Var15);
						unk_0xD1C578C204015E1F(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (unk_0x304A39EB177D246B(iVar16, 507034778, 0) && iVar13 != joaat("dlc_mp_fixer_f_decl_1_0"))
					{
						unk_0xA5690D702773BED4(joaat("dlc_mp_fixer_f_decl_1_0"), &Var15);
						unk_0xD1C578C204015E1F(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (unk_0x304A39EB177D246B(iVar16, 201267239, 0) && iVar13 != joaat("dlc_mp_fixer_f_decl_2_0"))
					{
						unk_0xA5690D702773BED4(joaat("dlc_mp_fixer_f_decl_2_0"), &Var15);
						unk_0xD1C578C204015E1F(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				unk_0xD1C578C204015E1F(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (unk_0x304A39EB177D246B(iVar9, joaat("hooded_jacket"), 0) && unk_0x304A39EB177D246B(iVar9, joaat("hood_down"), 0))
	{
		if (unk_0x304A39EB177D246B(iVar12, joaat("fake_hat"), 1))
		{
			if (func_151(iVar9, 1, 0, &iVar19))
			{
				unk_0xA5690D702773BED4(iVar19, &Var15);
				unk_0xD1C578C204015E1F(iParam0, 11, Var15.f_3, Var15.f_4, unk_0xDAF263B0E792EAEC(iParam0, 11));
				if (unk_0xC0120BBCC298EA2F(iParam0, 10) == 0 && func_150(iVar13, 11, -1))
				{
					if (func_150(iVar13, 11, Var15.f_1))
					{
						unk_0xD1C578C204015E1F(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (func_149(iVar13, 10, &iVar20, -1))
					{
						if (func_150(iVar20, 11, Var15.f_1))
						{
							unk_0xA5690D702773BED4(iVar20, &Var21);
							unk_0xD1C578C204015E1F(iParam0, 10, Var21.f_3, Var21.f_4, 0);
						}
					}
				}
				if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("mp_m_freemode_01"))
				{
					if (unk_0x304A39EB177D246B(iVar13, joaat("crew_logo"), 0))
					{
						if (unk_0x304A39EB177D246B(iVar19, joaat("ie_draw_16"), 0) && iVar13 != joaat("dlc_mp_ie_m_decl_1_0"))
						{
							unk_0xA5690D702773BED4(joaat("dlc_mp_ie_m_decl_1_0"), &Var15);
							unk_0xD1C578C204015E1F(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (unk_0x304A39EB177D246B(iVar19, joaat("ie_draw_19"), 0) && iVar13 != joaat("dlc_mp_ie_m_decl_2_0"))
						{
							unk_0xA5690D702773BED4(joaat("dlc_mp_ie_m_decl_2_0"), &Var15);
							unk_0xD1C578C204015E1F(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (unk_0x304A39EB177D246B(iVar19, joaat("gorka_suit"), 0))
						{
							unk_0xA5690D702773BED4(joaat("dlc_mp_x17_m_decl_10_0"), &Var15);
							unk_0xD1C578C204015E1F(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (unk_0x304A39EB177D246B(iVar19, 721933872, 0) && iVar13 != joaat("dlc_mp_fixer_m_decl_0_0"))
						{
							unk_0xA5690D702773BED4(joaat("dlc_mp_fixer_m_decl_0_0"), &Var15);
							unk_0xD1C578C204015E1F(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (unk_0x304A39EB177D246B(iVar19, 383888868, 0) && iVar13 != joaat("dlc_mp_fixer_m_decl_1_0"))
						{
							unk_0xA5690D702773BED4(joaat("dlc_mp_fixer_m_decl_1_0"), &Var15);
							unk_0xD1C578C204015E1F(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (unk_0x304A39EB177D246B(iVar13, joaat("crew_logo"), 0))
				{
					if (unk_0x304A39EB177D246B(iVar19, joaat("ie_draw_16"), 0))
					{
						if (iVar13 != joaat("dlc_mp_ie_f_decl_1_0"))
						{
							unk_0xA5690D702773BED4(joaat("dlc_mp_ie_f_decl_1_0"), &Var15);
							unk_0xD1C578C204015E1F(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (unk_0x304A39EB177D246B(iVar19, joaat("ie_draw_19"), 0))
					{
						if (iVar13 != joaat("dlc_mp_ie_f_decl_2_0"))
						{
							unk_0xA5690D702773BED4(joaat("dlc_mp_ie_f_decl_2_0"), &Var15);
							unk_0xD1C578C204015E1F(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (unk_0x304A39EB177D246B(iVar19, joaat("gorka_suit"), 0))
					{
						unk_0xA5690D702773BED4(joaat("dlc_mp_x17_f_decl_10_0"), &Var15);
						unk_0xD1C578C204015E1F(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (unk_0x304A39EB177D246B(iVar19, 507034778, 0) && iVar13 != joaat("dlc_mp_fixer_f_decl_1_0"))
					{
						unk_0xA5690D702773BED4(joaat("dlc_mp_fixer_f_decl_1_0"), &Var15);
						unk_0xD1C578C204015E1F(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (unk_0x304A39EB177D246B(iVar19, 201267239, 0) && iVar13 != joaat("dlc_mp_fixer_f_decl_2_0"))
					{
						unk_0xA5690D702773BED4(joaat("dlc_mp_fixer_f_decl_2_0"), &Var15);
						unk_0xD1C578C204015E1F(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				unk_0xD1C578C204015E1F(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (unk_0x304A39EB177D246B(iVar11, joaat("haz_hood"), 0) || func_148(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_152(iParam0, &bVar14, iVar9, iVar10, iVar12))
		{
			if (bVar14)
			{
				if (iVar0 == joaat("mp_m_freemode_01"))
				{
					iVar5 = 15;
					iVar6 = 0;
				}
				else
				{
					iVar5 = 14;
					iVar6 = 0;
				}
			}
			else if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("mp_m_freemode_01"))
			{
				unk_0xA5690D702773BED4(joaat("dlc_mp_heist_m_special_6_0"), &Var15);
				iVar5 = Var15.f_3;
			}
			else
			{
				unk_0xA5690D702773BED4(joaat("dlc_mp_heist_f_special_10_0"), &Var15);
				iVar5 = Var15.f_3;
			}
		}
		else if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("mp_m_freemode_01"))
		{
			unk_0xA5690D702773BED4(joaat("dlc_mp_heist_m_special_7_0"), &Var15);
			iVar5 = Var15.f_3;
		}
		else
		{
			unk_0xA5690D702773BED4(joaat("dlc_mp_heist_f_special_11_0"), &Var15);
			iVar5 = Var15.f_3;
		}
		if (iVar5 != unk_0xC0120BBCC298EA2F(iParam0, 8) || iVar6 != unk_0xD6AED6BFCC58AF7F(iParam0, 8))
		{
			unk_0xD1C578C204015E1F(iParam0, 8, iVar5, iVar6, unk_0xDAF263B0E792EAEC(iParam0, 8));
		}
	}
}

int func_148(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = unk_0x94B8A32AA940A6B5(iParam0, 11, unk_0xC0120BBCC298EA2F(iParam0, 11), unk_0xD6AED6BFCC58AF7F(iParam0, 11));
	}
	if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("mp_m_freemode_01"))
	{
		if (unk_0x304A39EB177D246B(iParam1, joaat("heist_draw_14"), 0))
		{
			return 1;
		}
	}
	else if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("mp_f_freemode_01"))
	{
		if (unk_0x304A39EB177D246B(iParam1, joaat("heist_draw_15"), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_149(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = unk_0x5A3F0A3B7ECCBD32(iParam0);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		unk_0x0249B53AB91BF9D0(iParam0, iVar1, uParam2, &uVar2, &iVar3);
		if (iVar3 == iParam1)
		{
			if (*uParam2 != 0 && *uParam2 != joaat("0"))
			{
				if (iParam3 == -1 || unk_0x304A39EB177D246B(*uParam2, iParam3, iVar3))
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_150(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (iParam0 != -1)
	{
		iVar0 = unk_0x9FB2D71D9CEC8B5A(iParam0);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			unk_0xCF4D7500E7DA5D8E(iParam0, iVar1, &iVar2, &uVar3, &iVar4);
			if (iVar4 == iParam1 && (iParam2 == -1 || iParam2 == iVar2))
			{
				return 1;
			}
			iVar1++;
		}
	}
	return 0;
}

int func_151(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	*uParam3 = -1;
	iVar0 = unk_0x5A3F0A3B7ECCBD32(iParam0);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		unk_0x0249B53AB91BF9D0(iParam0, iVar1, uParam3, &uVar2, &iVar3);
		if ((((iVar3 == 11 && *uParam3 != 0) && *uParam3 != joaat("0")) && iParam1 == unk_0x304A39EB177D246B(*uParam3, joaat("hood_up"), 0)) && iParam2 == unk_0x304A39EB177D246B(*uParam3, joaat("hood_tucked"), 0))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	*iParam1 = 0;
	if (iParam2 == -1)
	{
		iParam2 = unk_0x94B8A32AA940A6B5(iParam0, 11, unk_0xC0120BBCC298EA2F(iParam0, 11), unk_0xD6AED6BFCC58AF7F(iParam0, 11));
	}
	if (iParam3 == -1)
	{
		iParam3 = unk_0x94B8A32AA940A6B5(iParam0, 1, unk_0xC0120BBCC298EA2F(iParam0, 1), unk_0xD6AED6BFCC58AF7F(iParam0, 1));
	}
	if (iParam4 == -1)
	{
		iParam4 = unk_0x6B7AEB5F3D578298(iParam0, 0, unk_0xB204F40D393426B6(iParam0, 0, 1), unk_0x0DC23FA727759F9F(iParam0, 0));
	}
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	if (unk_0x304A39EB177D246B(iParam2, joaat("hooded_jacket"), 0))
	{
		if (unk_0x304A39EB177D246B(iParam2, joaat("fitted_hood"), 0))
		{
			if (!unk_0x304A39EB177D246B(iParam4, joaat("hood_hat"), 1) && unk_0xB204F40D393426B6(iParam0, 0, 1) != -1)
			{
				return 0;
			}
			if ((!unk_0x304A39EB177D246B(iParam3, joaat("HOOD_COMPAT"), 0) && !unk_0x304A39EB177D246B(iParam3, joaat("haz_mask"), 0)) && unk_0xC0120BBCC298EA2F(iParam0, 1) != 0)
			{
				if (unk_0x304A39EB177D246B(iParam4, joaat("hood_hat"), 1))
				{
					if (unk_0x304A39EB177D246B(iParam3, joaat("ski_mask"), 0) || unk_0x304A39EB177D246B(iParam3, joaat("biker_mask"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (unk_0x304A39EB177D246B(iParam3, joaat("biker_mask"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iParam3, joaat("night_vision"), 0))
			{
				return 0;
			}
		}
		else
		{
			if (unk_0xB204F40D393426B6(iParam0, 0, 1) != -1)
			{
				return 0;
			}
			if ((!unk_0x304A39EB177D246B(iParam3, joaat("HOOD_COMPAT"), 0) && !unk_0x304A39EB177D246B(iParam3, joaat("haz_mask"), 0)) && unk_0xC0120BBCC298EA2F(iParam0, 1) != 0)
			{
				return 0;
			}
		}
		return 1;
	}
	if (iVar0 == joaat("mp_m_freemode_01"))
	{
		if (!unk_0x304A39EB177D246B(iParam2, joaat("heist_draw_14"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case joaat("dlc_mp_heist_m_berd_21_0"):
			case joaat("dlc_mp_heist_m_berd_21_1"):
			case joaat("dlc_mp_heist_m_berd_21_2"):
			case joaat("dlc_mp_heist_m_berd_21_3"):
			case joaat("dlc_mp_heist_m_berd_21_4"):
			case joaat("dlc_mp_heist_m_berd_21_5"):
			case joaat("dlc_mp_heist_m_berd_21_6"):
			case joaat("dlc_mp_heist_m_berd_21_7"):
			case joaat("dlc_mp_heist_m_berd_21_8"):
			case joaat("dlc_mp_heist_m_berd_14_0"):
			case joaat("dlc_mp_heist_m_berd_14_1"):
			case joaat("dlc_mp_heist_m_berd_14_2"):
			case joaat("dlc_mp_heist_m_berd_14_3"):
			case joaat("dlc_mp_heist_m_berd_14_4"):
			case joaat("dlc_mp_heist_m_berd_14_5"):
			case joaat("dlc_mp_heist_m_berd_14_6"):
			case joaat("dlc_mp_heist_m_berd_14_7"):
			case joaat("dlc_mp_heist_m_berd_14_8"):
			case joaat("dlc_mp_heist_m_berd_14_9"):
			case joaat("dlc_mp_heist_m_berd_14_10"):
			case joaat("dlc_mp_heist_m_berd_14_11"):
			case joaat("dlc_mp_heist_m_berd_14_12"):
			case joaat("dlc_mp_heist_m_berd_14_13"):
			case joaat("dlc_mp_heist_m_berd_14_14"):
			case joaat("dlc_mp_heist_m_berd_14_15"):
			case joaat("dlc_mp_heist_m_berd_14_16"):
			case joaat("dlc_mp_heist_m_berd_14_17"):
			case joaat("dlc_mp_heist_m_berd_14_18"):
			case joaat("dlc_mp_heist_m_berd_14_19"):
			case joaat("dlc_mp_heist_m_berd_14_20"):
			case joaat("dlc_mp_heist_m_berd_14_21"):
			case joaat("dlc_mp_heist_m_berd_14_22"):
			case joaat("dlc_mp_heist_m_berd_14_23"):
			case joaat("dlc_mp_heist_m_berd_14_24"):
			case joaat("dlc_mp_heist_m_berd_14_25"):
			case joaat("dlc_mp_ind_m_berd_4_0"):
			case joaat("dlc_mp_ind_m_berd_4_1"):
			case joaat("dlc_mp_ind_m_berd_3_0"):
			case joaat("dlc_mp_ind_m_berd_3_1"):
				*iParam1 = 1;
				return 0;
				break;
		}
	}
	else
	{
		if (!unk_0x304A39EB177D246B(iParam2, joaat("heist_draw_15"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		if (unk_0x304A39EB177D246B(iParam3, joaat("scruffy_balaclava"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case joaat("dlc_mp_smug_f_berd_8_0"):
			case joaat("dlc_mp_smug_f_berd_8_1"):
			case joaat("dlc_mp_smug_f_berd_8_2"):
			case joaat("dlc_mp_smug_f_berd_8_3"):
			case joaat("dlc_mp_smug_f_berd_8_4"):
			case joaat("dlc_mp_smug_f_berd_8_5"):
			case joaat("dlc_mp_smug_f_berd_8_6"):
			case joaat("dlc_mp_smug_f_berd_8_7"):
			case joaat("dlc_mp_smug_f_berd_8_8"):
			case joaat("dlc_mp_smug_f_berd_8_9"):
			case joaat("dlc_mp_smug_f_berd_8_10"):
			case joaat("dlc_mp_smug_f_berd_8_11"):
			case joaat("dlc_mp_smug_f_berd_8_12"):
			case joaat("dlc_mp_smug_f_berd_8_13"):
			case joaat("dlc_mp_smug_f_berd_8_14"):
			case joaat("dlc_mp_smug_f_berd_8_15"):
			case joaat("dlc_mp_smug_f_berd_8_16"):
			case joaat("dlc_mp_smug_f_berd_8_17"):
			case joaat("dlc_mp_smug_f_berd_8_18"):
			case joaat("dlc_mp_smug_f_berd_8_19"):
			case joaat("dlc_mp_smug_f_berd_8_20"):
			case joaat("dlc_mp_smug_f_berd_8_21"):
			case joaat("dlc_mp_smug_f_berd_8_22"):
			case joaat("dlc_mp_smug_f_berd_8_23"):
			case joaat("dlc_mp_smug_f_berd_8_24"):
			case joaat("dlc_mp_smug_f_berd_8_25"):
			case joaat("dlc_mp_heist_f_berd_23_0"):
			case joaat("dlc_mp_heist_f_berd_23_1"):
			case joaat("dlc_mp_heist_f_berd_23_2"):
			case joaat("dlc_mp_heist_f_berd_23_3"):
			case joaat("dlc_mp_heist_f_berd_23_4"):
			case joaat("dlc_mp_heist_f_berd_23_5"):
			case joaat("dlc_mp_heist_f_berd_23_6"):
			case joaat("dlc_mp_heist_f_berd_23_7"):
			case joaat("dlc_mp_heist_f_berd_23_8"):
			case joaat("dlc_mp_heist_f_berd_23_9"):
			case joaat("dlc_mp_heist_f_berd_22_0"):
			case joaat("dlc_mp_heist_f_berd_22_1"):
			case joaat("dlc_mp_heist_f_berd_22_2"):
			case joaat("dlc_mp_heist_f_berd_22_3"):
			case joaat("dlc_mp_heist_f_berd_22_4"):
			case joaat("dlc_mp_heist_f_berd_22_5"):
			case joaat("dlc_mp_heist_f_berd_22_6"):
			case joaat("dlc_mp_heist_f_berd_22_7"):
			case joaat("dlc_mp_heist_f_berd_22_8"):
			case joaat("dlc_mp_heist_f_berd_22_9"):
			case joaat("dlc_mp_heist_f_berd_22_10"):
			case joaat("dlc_mp_heist_f_berd_22_11"):
			case joaat("dlc_mp_heist_f_berd_22_12"):
			case joaat("dlc_mp_heist_f_berd_22_13"):
			case joaat("dlc_mp_heist_f_berd_22_14"):
			case joaat("dlc_mp_heist_f_berd_22_15"):
			case joaat("dlc_mp_heist_f_berd_22_16"):
			case joaat("dlc_mp_heist_f_berd_22_17"):
			case joaat("dlc_mp_heist_f_berd_22_18"):
			case joaat("dlc_mp_heist_f_berd_22_19"):
			case joaat("dlc_mp_heist_f_berd_22_20"):
			case joaat("dlc_mp_heist_f_berd_22_21"):
			case joaat("dlc_mp_heist_f_berd_21_0"):
			case joaat("dlc_mp_heist_f_berd_21_1"):
			case joaat("dlc_mp_heist_f_berd_21_2"):
			case joaat("dlc_mp_heist_f_berd_21_3"):
			case joaat("dlc_mp_heist_f_berd_21_4"):
			case joaat("dlc_mp_heist_f_berd_21_5"):
			case joaat("dlc_mp_heist_f_berd_21_6"):
			case joaat("dlc_mp_heist_f_berd_21_7"):
			case joaat("dlc_mp_heist_f_berd_21_8"):
			case joaat("dlc_mp_heist_f_berd_20_0"):
			case joaat("dlc_mp_heist_f_berd_20_1"):
			case joaat("dlc_mp_heist_f_berd_19_0"):
			case joaat("dlc_mp_heist_f_berd_19_1"):
			case joaat("dlc_mp_heist_f_berd_19_2"):
			case joaat("dlc_mp_heist_f_berd_19_3"):
			case joaat("dlc_mp_heist_f_berd_19_4"):
			case joaat("dlc_mp_heist_f_berd_19_5"):
			case joaat("dlc_mp_heist_f_berd_19_6"):
			case joaat("dlc_mp_heist_f_berd_19_7"):
			case joaat("dlc_mp_heist_f_berd_19_8"):
			case joaat("dlc_mp_heist_f_berd_19_9"):
			case joaat("dlc_mp_heist_f_berd_19_10"):
			case joaat("dlc_mp_heist_f_berd_18_0"):
			case joaat("dlc_mp_heist_f_berd_18_1"):
			case joaat("dlc_mp_heist_f_berd_18_2"):
			case joaat("dlc_mp_heist_f_berd_18_3"):
			case joaat("dlc_mp_heist_f_berd_18_4"):
			case joaat("dlc_mp_heist_f_berd_18_5"):
			case joaat("dlc_mp_heist_f_berd_18_6"):
			case joaat("dlc_mp_heist_f_berd_18_7"):
			case joaat("dlc_mp_heist_f_berd_18_8"):
			case joaat("dlc_mp_heist_f_berd_17_0"):
			case joaat("dlc_mp_heist_f_berd_17_1"):
			case joaat("dlc_mp_heist_f_berd_17_2"):
			case joaat("dlc_mp_heist_f_berd_17_3"):
			case joaat("dlc_mp_heist_f_berd_17_4"):
			case joaat("dlc_mp_heist_f_berd_17_5"):
			case joaat("dlc_mp_heist_f_berd_17_6"):
			case joaat("dlc_mp_heist_f_berd_17_7"):
			case joaat("dlc_mp_heist_f_berd_17_8"):
			case joaat("dlc_mp_heist_f_berd_17_9"):
			case joaat("dlc_mp_heist_f_berd_17_10"):
			case joaat("dlc_mp_heist_f_berd_14_0"):
			case joaat("dlc_mp_heist_f_berd_14_1"):
			case joaat("dlc_mp_heist_f_berd_14_2"):
			case joaat("dlc_mp_heist_f_berd_14_3"):
			case joaat("dlc_mp_heist_f_berd_14_4"):
			case joaat("dlc_mp_heist_f_berd_14_5"):
			case joaat("dlc_mp_heist_f_berd_14_6"):
			case joaat("dlc_mp_heist_f_berd_14_7"):
			case joaat("dlc_mp_heist_f_berd_14_8"):
			case joaat("dlc_mp_heist_f_berd_14_9"):
			case joaat("dlc_mp_heist_f_berd_14_10"):
			case joaat("dlc_mp_heist_f_berd_14_11"):
			case joaat("dlc_mp_heist_f_berd_14_12"):
			case joaat("dlc_mp_heist_f_berd_14_13"):
			case joaat("dlc_mp_heist_f_berd_14_14"):
			case joaat("dlc_mp_heist_f_berd_14_15"):
			case joaat("dlc_mp_heist_f_berd_14_16"):
			case joaat("dlc_mp_heist_f_berd_14_17"):
			case joaat("dlc_mp_heist_f_berd_14_18"):
			case joaat("dlc_mp_heist_f_berd_14_19"):
			case joaat("dlc_mp_heist_f_berd_14_20"):
			case joaat("dlc_mp_heist_f_berd_14_21"):
			case joaat("dlc_mp_heist_f_berd_14_22"):
			case joaat("dlc_mp_heist_f_berd_14_23"):
			case joaat("dlc_mp_heist_f_berd_14_24"):
			case joaat("dlc_mp_heist_f_berd_14_25"):
			case joaat("dlc_mp_heist_f_berd_13_0"):
			case joaat("dlc_mp_heist_f_berd_13_1"):
			case joaat("dlc_mp_heist_f_berd_13_2"):
			case joaat("dlc_mp_heist_f_berd_13_3"):
			case joaat("dlc_mp_heist_f_berd_12_0"):
			case joaat("dlc_mp_heist_f_berd_12_1"):
			case joaat("dlc_mp_heist_f_berd_12_2"):
			case joaat("dlc_mp_heist_f_berd_12_3"):
			case joaat("dlc_mp_heist_f_berd_7_0"):
			case joaat("dlc_mp_heist_f_berd_7_1"):
			case joaat("dlc_mp_heist_f_berd_5_0"):
			case joaat("dlc_mp_heist_f_berd_5_1"):
			case joaat("dlc_mp_heist_f_berd_4_0"):
			case joaat("dlc_mp_heist_f_berd_4_1"):
			case joaat("dlc_mp_heist_f_berd_0_0"):
			case -840010097:
			case joaat("dlc_mp_lts_f_berd_0_0"):
			case joaat("dlc_mp_lts_f_berd_0_1"):
			case joaat("dlc_mp_lts_f_berd_0_2"):
			case joaat("dlc_mp_lts_f_berd_0_3"):
			case joaat("dlc_mp_lts_f_berd_0_4"):
			case joaat("dlc_mp_ind_f_berd_4_0"):
			case joaat("dlc_mp_ind_f_berd_4_1"):
			case joaat("dlc_mp_ind_f_berd_3_0"):
			case joaat("dlc_mp_ind_f_berd_3_1"):
				*iParam1 = 1;
				return 0;
				break;
			}
	}
	if (unk_0x304A39EB177D246B(iParam3, joaat("haz_mask"), 0) && !func_153(iVar0, 14, func_165(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_153(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_144(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x304A39EB177D246B(iParam3, joaat("helmet"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_144(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x304A39EB177D246B(iParam3, joaat("helmet"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_154(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	bool bVar37;
	int iVar38;
	int iVar39;
	bool bVar40;
	
	iVar0 = -99;
	if (iParam4 == 2)
	{
		func_155(iParam0, iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 8;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 187)
				{
					iVar2 = func_145(iParam0, 8);
					iVar15 = func_144(iParam1, iVar2, 8, 3);
					iVar16 = func_134(iVar15);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar16 == 6)) || (iVar2 >= 241 && iVar16 == 7)) || (iVar2 >= 241 && unk_0x304A39EB177D246B(iVar15, joaat("vest_shirt"), 0)))
					{
						iVar0 = -99;
					}
					else
					{
						iVar0 = 11;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 4;
				}
				else if (iParam3 == 236)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 237)
				{
					iVar14 = func_144(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						bVar17 = true;
						if (unk_0x304A39EB177D246B(iVar14, joaat("draw_11"), 0))
						{
							iVar2 = func_145(iParam0, 8);
							iVar18 = func_144(iParam1, iVar2, 8, 3);
							iVar19 = func_134(iVar18);
							if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar19 == 6)) || (iVar2 >= 241 && iVar19 == 7)) || (iVar2 >= 241 && unk_0x304A39EB177D246B(iVar18, joaat("vest_shirt"), 0)))
							{
								bVar17 = false;
							}
						}
						if (bVar17)
						{
							iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 3)
								{
									if (iVar5 != 0 && iVar5 != joaat("0"))
									{
										iVar0 = func_22(iParam1, iVar5, 3, 3);
									}
									else
									{
										iVar0 = iVar6;
									}
									iVar4 = iVar3 + 1;
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 8)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 95)
				{
					iVar20 = func_145(iParam0, 11);
					iVar21 = func_144(iParam1, iVar20, 11, 3);
					if ((iVar20 >= 237 && unk_0x304A39EB177D246B(iVar21, joaat("open_short"), 0)) || (iVar20 >= 237 && unk_0x304A39EB177D246B(iVar21, -1099375697, 0)))
					{
						iVar0 = func_22(iParam1, 799429565, 3, 3);
					}
					else
					{
						iVar0 = 6;
					}
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = -99;
				}
				else if (iParam3 == 240)
				{
					iVar22 = func_145(iParam0, 11);
					iVar23 = func_144(iParam1, iVar22, 11, 3);
					if (iVar22 >= 237 && unk_0x304A39EB177D246B(iVar23, joaat("open_short"), 0))
					{
						iVar0 = func_22(iParam1, joaat("dlc_mp_h4_m_torso_0_0"), 3, 3);
					}
					else if (iVar22 >= 237 && unk_0x304A39EB177D246B(iVar23, -1099375697, 0))
					{
						iVar0 = 0;
					}
					else
					{
						iVar0 = 14;
					}
				}
				else if (iParam3 >= 241)
				{
					iVar14 = func_144(iParam1, iParam3, 8, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 3, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = func_144(iParam1, iParam3, 10, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 3, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				iVar24 = -1;
				if (iParam3 >= 237)
				{
					iVar24 = func_134(func_144(iParam1, iParam3, 11, 3));
				}
				if (iParam3 <= 15)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 187 || iVar24 == 11)
				{
					iVar2 = func_145(iParam0, 8);
					iVar25 = func_144(iParam1, iVar2, 8, 3);
					iVar26 = func_134(iVar25);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar26 == 6)) || (iVar2 >= 241 && iVar26 == 7)) || (iVar2 >= 241 && unk_0x304A39EB177D246B(iVar25, joaat("vest_shirt"), 0)))
					{
					}
					else
					{
						iVar0 = 112;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 236)
				{
					iVar0 = 240;
				}
				else if (iParam3 >= 237)
				{
					iVar14 = func_144(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
				else if (iParam2 == 6)
				{
					if (iParam3 >= 256)
					{
						iVar14 = func_144(iParam1, iParam3, 6, 3);
						if (iVar14 != -1)
						{
							iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 8)
								{
									if (iVar5 != 0 && iVar5 != joaat("0"))
									{
										iVar0 = func_22(iParam1, iVar5, 8, 3);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar27 = -1;
				iVar28 = -1;
				if (iParam3 >= 92)
				{
					iVar28 = func_144(iParam1, iParam3, 7, 3);
					iVar27 = func_134(iVar28);
				}
				if (((((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar27 == 10) || iVar27 == 11) || iVar27 == 12) || (iParam3 >= 92 && unk_0x304A39EB177D246B(iVar28, joaat("vest_tie"), 0))) || (iParam3 >= 92 && unk_0x304A39EB177D246B(iVar28, joaat("tux_tie"), 0))) || (iParam3 >= 92 && unk_0x304A39EB177D246B(iVar28, joaat("tie"), 0)))
				{
					iVar2 = func_145(iParam0, 8);
					if (iVar2 >= 48 && iVar2 <= 63)
					{
						iVar1 = (iVar2 - 48);
						iVar0 = (64 + iVar1);
					}
					else if (iVar2 >= 112 && iVar2 <= 127)
					{
						iVar1 = (iVar2 - 112);
						iVar0 = (96 + iVar1);
					}
					else if (iVar2 >= 176 && iVar2 <= 191)
					{
						iVar1 = (iVar2 - 176);
						iVar0 = (160 + iVar1);
					}
					else if (iVar2 >= 241)
					{
						iVar14 = func_144(iParam1, iVar2, 8, 3);
						iVar29 = func_134(iVar14);
						bVar30 = unk_0x304A39EB177D246B(iVar14, joaat("tux_vest"), 0);
						if (((iVar29 == 3 || iVar29 == 7) || iVar29 == 11) || unk_0x304A39EB177D246B(iVar14, joaat("open_collar"), 0))
						{
							if (iVar14 != -1)
							{
								iVar12 = unk_0x5A3F0A3B7ECCBD32(iVar14);
								iVar13 = 0;
								while (iVar13 < iVar12)
								{
									unk_0x0249B53AB91BF9D0(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
									if ((iVar7 == 8 && !bVar30) || (iVar7 == 10 && bVar30))
									{
										if (iVar5 != 0 && iVar5 != joaat("0"))
										{
											iVar0 = func_22(iParam1, iVar5, 8, 3);
										}
										else
										{
											iVar0 = iVar6;
										}
										iVar13 = iVar12 + 1;
									}
									iVar13++;
								}
							}
						}
					}
				}
				else if (((iParam3 >= 92 && unk_0x304A39EB177D246B(iVar28, joaat("loose_tie"), 0)) || (iParam3 >= 92 && unk_0x304A39EB177D246B(iVar28, joaat("slack_tie"), 0))) || (iParam3 >= 92 && unk_0x304A39EB177D246B(iVar28, joaat("loose_bowtie"), 0)))
				{
					iVar14 = func_144(iParam1, iVar2, 8, 3);
					iVar31 = func_134(iVar14);
					bVar32 = unk_0x304A39EB177D246B(iVar14, joaat("tux_vest"), 0);
					if (((iVar31 == 3 || iVar31 == 7) || iVar31 == 11) || unk_0x304A39EB177D246B(iVar14, joaat("open_collar"), 0))
					{
						if (iVar14 != -1)
						{
							iVar12 = unk_0x5A3F0A3B7ECCBD32(iVar14);
							iVar13 = 0;
							while (iVar13 < iVar12)
							{
								unk_0x0249B53AB91BF9D0(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
								if ((iVar7 == 8 && !bVar32) || (iVar7 == 10 && bVar32))
								{
									if (iVar5 != 0 && iVar5 != joaat("0"))
									{
										iVar0 = func_22(iParam1, iVar5, 8, 3);
									}
									else
									{
										iVar0 = iVar6;
									}
									iVar13 = iVar12 + 1;
								}
								iVar13++;
							}
						}
					}
				}
				else if (iParam3 >= 92)
				{
					iVar14 = func_144(iParam1, iParam3, 7, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = func_144(iParam1, iParam3, 10, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_144(iParam1, iParam3, 6, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 7)
			{
				iVar33 = -1;
				iVar34 = -1;
				if (iParam3 >= 92)
				{
					iVar34 = func_144(iParam1, iParam3, 7, 3);
					iVar33 = func_134(iVar34);
				}
				if (((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar33 == 10) || iVar33 == 11) || iVar33 == 12) || unk_0x304A39EB177D246B(iVar34, joaat("tie"), 0))
				{
					iVar35 = func_145(iParam0, 11);
					if (iVar35 >= 237)
					{
						iVar14 = func_144(iParam1, iVar35, 11, 3);
						if ((unk_0x304A39EB177D246B(iVar14, joaat("shirt_braces"), 0) || unk_0x304A39EB177D246B(iVar14, joaat("h3_draw_7"), 0)) && unk_0x304A39EB177D246B(iVar14, joaat("open_collar"), 0))
						{
							if (iVar14 != -1)
							{
								iVar12 = unk_0x5A3F0A3B7ECCBD32(iVar14);
								iVar13 = 0;
								while (iVar13 < iVar12)
								{
									unk_0x0249B53AB91BF9D0(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
									if (iVar7 == 11)
									{
										if (iVar5 != 0 && iVar5 != joaat("0"))
										{
											iVar0 = func_22(iParam1, iVar5, 11, 3);
										}
										else
										{
											iVar0 = iVar6;
										}
										iVar13 = iVar12 + 1;
									}
									iVar13++;
								}
							}
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = func_144(iParam1, iParam3, 10, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 11)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 11, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 11)
			{
				iVar36 = func_145(iParam0, 11);
				if (iVar36 >= 237)
				{
					iVar14 = func_144(iParam1, iVar36, 11, 3);
					if ((unk_0x304A39EB177D246B(iVar14, joaat("shirt_braces"), 0) || unk_0x304A39EB177D246B(iVar14, joaat("h3_draw_7"), 0)) && unk_0x304A39EB177D246B(iVar14, joaat("open_collar"), 0))
					{
						iVar14 = func_144(iParam1, iParam3, 11, 3);
						if (iVar14 != -1)
						{
							iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 7)
								{
									if (iVar5 != 0 && iVar5 != joaat("0"))
									{
										iVar0 = func_22(iParam1, iVar5, 7, 3);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = func_144(iParam1, iParam3, 14, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 7)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 7, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = func_144(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 4)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 4, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 10)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = func_144(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 10)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 10, 3);
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_144(iParam1, iParam3, 4, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 6, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = func_144(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 6, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 1)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = func_144(iParam1, iParam3, 14, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 1, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_144(iParam1, iParam3, 6, 3);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 1, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar14 = func_144(iParam1, iParam3, 1, 3);
					if (iVar14 != -1)
					{
						iVar8 = unk_0xCBBA20766F48DC67(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							unk_0x24F0ED4836CD2E4D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = func_144(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar8 = unk_0xCBBA20766F48DC67(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							unk_0x24F0ED4836CD2E4D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_144(iParam1, iParam3, 6, 3);
					if (iVar14 != -1)
					{
						iVar8 = unk_0xCBBA20766F48DC67(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							unk_0x24F0ED4836CD2E4D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
		}
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 3;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 9;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 7;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 14;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 256)
				{
					iVar14 = func_144(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 3, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = func_144(iParam1, iParam3, 10, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 3, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 223)
				{
					iVar1 = (iParam3 - 208);
					iVar0 = (103 + iVar1);
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 33;
				}
				else if (iParam3 >= 256)
				{
					iVar14 = func_144(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						bVar37 = false;
						if (unk_0x304A39EB177D246B(iVar14, joaat("basic_vest"), 0))
						{
							iVar2 = func_145(iParam0, 8);
							iVar38 = func_144(iParam1, iVar2, 8, 4);
							if (iVar2 >= 136 && unk_0x304A39EB177D246B(iVar38, joaat("vest_shirt"), 0))
							{
							}
							else
							{
								iVar0 = func_22(iParam1, joaat("dlc_mp_h3_f_special_6_0"), 8, 4);
								bVar37 = true;
							}
						}
						if (!bVar37)
						{
							iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 8)
								{
									if (iVar5 != 0 && iVar5 != joaat("0"))
									{
										iVar0 = func_22(iParam1, iVar5, 8, 4);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar39 = -1;
				if (iParam3 >= 55)
				{
					iVar39 = func_144(iParam1, iParam3, 7, 4);
				}
				if ((iVar39 != -1 && unk_0x304A39EB177D246B(iVar39, joaat("tie"), 0)) || (iVar39 != -1 && unk_0x304A39EB177D246B(iVar39, joaat("bowtie"), 0)))
				{
					iVar14 = unk_0x94B8A32AA940A6B5(iParam0, 8, unk_0xC0120BBCC298EA2F(iParam0, 8), unk_0xD6AED6BFCC58AF7F(iParam0, 8));
					bVar40 = false;
					if (unk_0x304A39EB177D246B(iVar39, joaat("loose_tie"), 0) || unk_0x304A39EB177D246B(iVar39, joaat("loose_bowtie"), 0))
					{
						if (unk_0x304A39EB177D246B(iVar14, joaat("closed_collar"), 0))
						{
							bVar40 = true;
						}
					}
					else if (unk_0x304A39EB177D246B(iVar14, joaat("open_collar"), 0))
					{
						bVar40 = true;
					}
					if (bVar40)
					{
						iVar12 = unk_0x5A3F0A3B7ECCBD32(iVar14);
						iVar13 = 0;
						while (iVar13 < iVar12)
						{
							unk_0x0249B53AB91BF9D0(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
								}
								iVar13 = iVar12 + 1;
							}
							iVar13++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = func_144(iParam1, iParam3, 10, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_144(iParam1, iParam3, 6, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_144(iParam1, iParam3, 4, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 6, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_144(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 6, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_144(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 4)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 4, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 10)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_144(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 10)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 10, 4);
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = func_144(iParam1, iParam3, 10, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 11)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 11, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = func_144(iParam1, iParam3, 14, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 7)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 7, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 1)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = func_144(iParam1, iParam3, 14, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 1, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_144(iParam1, iParam3, 6, 4);
					if (iVar14 != -1)
					{
						iVar3 = unk_0x9FB2D71D9CEC8B5A(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							unk_0xCF4D7500E7DA5D8E(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 1, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar14 = func_144(iParam1, iParam3, 1, 4);
					if (iVar14 != -1)
					{
						iVar8 = unk_0xCBBA20766F48DC67(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							unk_0x24F0ED4836CD2E4D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_144(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar8 = unk_0xCBBA20766F48DC67(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							unk_0x24F0ED4836CD2E4D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_144(iParam1, iParam3, 6, 4);
					if (iVar14 != -1)
					{
						iVar8 = unk_0xCBBA20766F48DC67(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							unk_0x24F0ED4836CD2E4D(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = func_22(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
		}
	}
	return iVar0;
}

int func_155(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	int iVar13;
	
	*iParam4 = -99;
	switch (iParam1)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= func_23(iParam1, 1))
					{
						func_184(iParam1, 1, iParam3, -1);
						if (Global_2883589 == joaat("cu_xmas_clothes"))
						{
							*iParam4 = 0;
						}
					}
					iVar0 = func_145(iParam0, 1);
					if (iVar0 >= 26)
					{
						iVar1 = func_144(iParam1, iVar0, 1, 3);
						if (unk_0x304A39EB177D246B(iVar1, joaat("night_vision"), 0))
						{
							iVar1 = func_144(iParam1, iParam3, 1, 3);
							if (iVar1 != -1)
							{
								iVar2 = unk_0x9FB2D71D9CEC8B5A(iVar1);
								iVar3 = 0;
								while (iVar3 < iVar2)
								{
									unk_0xCF4D7500E7DA5D8E(iVar1, iVar3, &iVar4, &uVar5, &iVar6);
									if (iVar6 == 2)
									{
										if (iVar4 != 0 && iVar4 != joaat("0"))
										{
											*iParam4 = func_22(iParam1, iVar4, 2, 3);
										}
										else
										{
											*iParam4 = uVar5;
											iVar3 = iVar2 + 1;
										}
									}
									iVar3++;
								}
							}
						}
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= func_23(iParam1, 1))
					{
						func_184(iParam1, 1, iParam3, -1);
						if (Global_2883589 == joaat("cu_xmas_clothes"))
						{
							*iParam4 = 0;
						}
					}
					iVar7 = func_145(iParam0, 1);
					if (iVar7 >= 26)
					{
						iVar8 = func_144(iParam1, iVar7, 1, 4);
						if (unk_0x304A39EB177D246B(iVar8, joaat("night_vision"), 0))
						{
							iVar8 = func_144(iParam1, iParam3, 1, 4);
							if (iVar8 != -1)
							{
								iVar9 = unk_0x9FB2D71D9CEC8B5A(iVar8);
								iVar10 = 0;
								while (iVar10 < iVar9)
								{
									unk_0xCF4D7500E7DA5D8E(iVar8, iVar10, &iVar11, &uVar12, &iVar13);
									if (iVar13 == 2)
									{
										if (iVar11 != 0 && iVar11 != joaat("0"))
										{
											*iParam4 = func_22(iParam1, iVar11, 2, 4);
										}
										else
										{
											*iParam4 = uVar12;
											iVar10 = iVar9 + 1;
										}
									}
									iVar10++;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (*iParam4 != -99)
	{
		func_13(754, iParam3, Global_78338, 1, 0);
		func_13(755, iParam2, Global_78338, 1, 0);
		return 1;
	}
	return 0;
}

void func_156(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (func_158(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
			if (iParam1 == 11)
			{
				if (func_139(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = func_145(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = func_145(iParam0, 11);
				if (!func_139(iVar0, iVar1, -1))
				{
					return;
				}
			}
			func_124(unk_0x70E57E9927B6BA58("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!func_131(iVar0, iParam2, 13) && !func_131(iVar0, iParam2, 14)) && !func_131(iVar0, iParam2, 15)) && !func_131(iVar0, iParam2, 16)) && !func_131(iVar0, iParam2, 71)) && !func_131(iVar0, iParam2, 72))
				{
					func_124(unk_0x70E57E9927B6BA58("crewLogo"), iParam0);
				}
			}
			iVar2 = func_121(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					func_157(iParam0, iVar2, 0);
				}
				else
				{
					func_161(iVar2, 1, Global_78338);
				}
			}
		}
	}
}

void func_157(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<6> Var1;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (iParam1 != -1)
		{
			iVar0 = func_122(iParam0);
			if (!func_105(iParam1, -1) || iParam2)
			{
				if (func_98(&Var1, iParam1, iVar0, iParam0, -1))
				{
					unk_0x49A5A17556C31561(iParam0, Var1.f_4, Var1.f_5);
					func_72(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
	}
}

int func_158(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("mp_m_freemode_01"))
		{
			if (unk_0x1C1C92A1CBAE364B(iParam0) != func_85() && func_159(unk_0x1C1C92A1CBAE364B(iParam0)))
			{
				return 1;
			}
			iVar0 = unk_0xC0120BBCC298EA2F(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_165(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = func_144(joaat("mp_m_freemode_01"), iVar1, 11, 3);
					if (unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_11"), 0))
					{
						return 1;
					}
					else if ((((((((((unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_1"), 0) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_17"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_18"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_19"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_20"), 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_21"), 0)) || unk_0x304A39EB177D246B(iVar2, 83294665, 0)) || unk_0x304A39EB177D246B(iVar2, joaat("biker_draw_27"), 0))
					{
						return 1;
					}
					else if (unk_0x304A39EB177D246B(iVar2, joaat("jugg_suit"), 0))
					{
						return 1;
					}
					else if (unk_0x304A39EB177D246B(iVar2, joaat("stunt_draw_1"), 0))
					{
						return 1;
					}
					else if (unk_0x304A39EB177D246B(iVar2, joaat("jugg_suit"), 0))
					{
						return 1;
					}
					else if (unk_0x304A39EB177D246B(iVar2, joaat("x17_draw_6"), 0))
					{
						return 1;
					}
				}
			}
		}
		else if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("mp_f_freemode_01"))
		{
			if (unk_0x1C1C92A1CBAE364B(iParam0) != func_85() && func_159(unk_0x1C1C92A1CBAE364B(iParam0)))
			{
				return 1;
			}
			iVar0 = unk_0xC0120BBCC298EA2F(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_165(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = func_144(joaat("mp_f_freemode_01"), iVar3, 11, 4);
					if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_11"), 0))
					{
						return 1;
					}
					else if ((((((((((unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_1"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, 970679185, 0)) || unk_0x304A39EB177D246B(iVar4, 83294665, 0)) || unk_0x304A39EB177D246B(iVar4, 382246252, 0)) || unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_25"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_26"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_28"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_32"), 0))
					{
						return 1;
					}
					else if (unk_0x304A39EB177D246B(iVar4, joaat("jugg_suit"), 0))
					{
						return 1;
					}
					else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_1"), 0))
					{
						return 1;
					}
					else if (unk_0x304A39EB177D246B(iVar4, joaat("jugg_suit"), 0))
					{
						return 1;
					}
					else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_6"), 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

var func_159(int iParam0)
{
	return func_160(iParam0, 10);
}

var func_160(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

void func_161(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_105(iParam0, iParam2))
		{
			func_162(iParam0, 1, iParam2);
		}
	}
	else if (func_105(iParam0, iParam2))
	{
		func_162(iParam0, 0, iParam2);
	}
}

void func_162(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	uVar0 = func_106(iParam0, iParam2);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, func_77(iVar1));
		}
		else
		{
			unk_0x8744D2E3FC95740E(&uVar0, func_77(iVar1));
		}
		if (!func_163(0))
		{
			iVar2 = func_107(iParam0);
			if (iVar2 != 14192)
			{
				func_13(iVar2, uVar0, iParam2, 1, 0);
			}
		}
	}
}

bool func_163(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

int func_164()
{
	int iVar0;
	
	iVar0 = Global_78338;
	if (func_105(13, iVar0))
	{
		return 13;
	}
	if (func_105(14, iVar0))
	{
		return 14;
	}
	if (func_105(15, iVar0))
	{
		return 15;
	}
	if (func_105(16, iVar0))
	{
		return 16;
	}
	if (func_105(71, iVar0))
	{
		return 71;
	}
	if (func_105(72, iVar0))
	{
		return 72;
	}
	return -1;
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_42(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_42(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_166(iParam0, iParam2);
			}
		}
		else
		{
			return func_145(iParam0, iParam1);
		}
	}
	return -99;
}

int func_166(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x4FAFF4BCB7633475(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0xB204F40D393426B6(iParam0, iParam1, 1);
	if (iVar0 == -1)
	{
		return func_137(iParam1);
	}
	iVar1 = unk_0x0DC23FA727759F9F(iParam0, iParam1);
	return func_167(iParam0, iVar0, iVar1, iParam1);
}

int func_167(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_137(iParam3);
	}
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	iVar1 = unk_0x6B7AEB5F3D578298(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_22(unk_0x4B423FAA24E8ABF0(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_22(unk_0x4B423FAA24E8ABF0(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0x4D0F04723A52D0E9(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x1D77F90D87ACD2BA(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_168(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_137(iParam3);
}

int func_168(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam2 == -1)
	{
		unk_0x09397806857F5DFB(iParam0, iParam1, 1);
		if (iParam1 == 0)
		{
			unk_0x0428AFDCAA63B06E(iParam0, 34, 0);
			unk_0x0428AFDCAA63B06E(iParam0, 36, 0);
		}
	}
	else
	{
		unk_0x7F08C4791E6D6969(iParam0, iParam1, iParam2, iParam3, unk_0x76CD105BCAC6EB9F(), 1);
		if (iParam1 == 0)
		{
			iVar0 = func_167(iParam0, iParam2, iParam3, iParam1);
			if (func_153(unk_0x4B423FAA24E8ABF0(iParam0), 14, iVar0, unk_0x6B7AEB5F3D578298(iParam0, 0, iParam2, iParam3)))
			{
				unk_0x0428AFDCAA63B06E(iParam0, 34, 1);
				unk_0x0428AFDCAA63B06E(iParam0, 36, 1);
			}
			else
			{
				unk_0x0428AFDCAA63B06E(iParam0, 34, 0);
				unk_0x0428AFDCAA63B06E(iParam0, 36, 0);
			}
		}
	}
}

struct<10> func_170(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_172(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_172(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_172(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_172(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_172(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_172(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_172(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_172(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_172(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_172(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_172(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_171(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_172(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_172(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_172(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_172(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_172(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_172(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_172(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_172(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_172(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_172(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_171(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_172(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_172(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_172(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_172(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_172(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_172(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_172(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_172(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_172(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_172(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_171(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_172(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_172(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_172(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_172(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_172(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_172(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_172(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_172(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_172(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_172(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_172(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_172(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_172(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_172(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_172(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_172(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_172(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_172(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_172(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_172(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_172(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_172(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_172(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_172(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_172(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_172(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_171(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_172(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_172(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_172(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_172(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_172(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_172(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_172(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_172(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_172(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_172(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_172(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_172(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_172(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_172(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_172(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_172(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_172(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_172(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_172(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_172(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_172(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_172(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_172(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_172(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_172(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_171(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_171(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var2;
	int iVar3;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0x565B95D20273E8CD(iParam2, &Var1);
		if (!unk_0x4BFA043D318BF9AE(Var1.f_0))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (unk_0xCD4F2395AE80D510(Var1.f_1, iVar3, &Var2) && Var2.f_2 != -1)
				{
					if ((Var2.f_0 != 0 && Var2.f_0 != -1) && Var2.f_0 != joaat("0"))
					{
						(*iParam0)[Var2.f_2] = func_22(iParam1, Var2.f_0, 14, iVar0);
					}
					else if (Var2.f_1 != -1)
					{
						(*iParam0)[Var2.f_2] = Var2.f_1;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_172(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

int func_173(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

struct<17> func_174(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_113648.f_9087.f_99.f_58[120])
					{
						func_177(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_177(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_177(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_177(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_177(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_177(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_177(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[0], Global_113648.f_2365.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_177(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_177(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_177(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_177(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_177(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_177(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_177(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_177(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_177(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_177(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_177(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_177(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_177(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_177(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_177(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_177(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_177(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_177(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_177(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_177(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_177(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_177(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_177(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_177(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_177(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_177(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_177(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_177(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_177(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_177(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_177(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_177(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_177(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_177(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_177(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_177(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_177(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_177(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_177(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_177(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_177(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_177(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_177(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_177(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_177(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_177(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_177(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_175(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_177(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_177(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_177(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[1], Global_113648.f_2365.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_177(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_177(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_177(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_177(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_177(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_177(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_177(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_177(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_177(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_177(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_177(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_177(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_177(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_177(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_177(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_177(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_177(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_177(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_177(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_177(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_177(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_177(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_177(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_177(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_177(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_177(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_177(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_177(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_177(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_177(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_177(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_177(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_177(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_177(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_177(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_177(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_177(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_177(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_177(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_177(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_177(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_177(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_177(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_177(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_175(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_177(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_177(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_177(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_177(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_177(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[2], Global_113648.f_2365.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_177(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_177(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_177(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_177(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_177(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_177(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_177(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_177(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_177(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_177(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_177(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_177(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_177(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_177(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_177(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_177(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_177(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_177(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_177(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_177(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_177(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_177(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_177(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_177(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_177(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_177(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_177(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_177(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_177(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_177(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_177(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_177(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_177(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_177(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_177(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_177(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_177(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_177(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_177(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_177(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_177(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_177(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_177(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_175(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_177(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_177(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_177(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_177(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_177(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_177(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_177(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_177(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_177(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_177(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_177(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_177(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_177(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_177(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_177(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_177(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_177(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_177(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_177(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_177(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_177(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_177(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_177(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_177(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_177(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_177(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_175(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_177(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_177(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_177(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_177(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_177(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_177(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_177(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_177(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_177(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_177(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_177(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_177(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_177(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_177(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_177(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_177(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_177(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_177(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_177(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_177(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_177(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_177(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_177(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_177(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_177(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_177(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_177(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_177(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_175(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_175(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0xF2DDA7CE028AB9CB(iVar0, 0);
	unk_0x808A8ABE207631DF((iParam2 - iParam3), &Var1);
	if (!unk_0x4BFA043D318BF9AE(Var1.f_0))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (unk_0xABE43EB6EBE5F2F5(Var1.f_1, iVar4, &Var2))
			{
				if ((Var2.f_0 != 0 && Var2.f_0 != -1) && Var2.f_0 != joaat("0"))
				{
					if (Var2.f_2 == 10)
					{
						unk_0x15D20F88F06530A5(&Var3);
						unk_0xA5690D702773BED4(Var2.f_0, &Var3);
						if (Var2.f_0 != Var3.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var2.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[func_176(Var2.f_2)] = Var2.f_0;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_176(Var2.f_2)] = func_22(iParam1, Var2.f_0, func_176(Var2.f_2), iVar0);
					}
				}
				else if (Var2.f_1 != -1)
				{
					(*uParam0)[func_176(Var2.f_2)] = Var2.f_1;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_177(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

void func_178(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (Global_78338 != func_15() || iParam2 == -99)
		{
			return;
		}
		Global_78341[2 /*14*/] = { func_184(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78341[2 /*14*/].f_6, 1) && BitTest(Global_78341[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				func_181(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				func_181(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				func_181(Global_2883588, 2, 1, 1, -1);
			}
			if (bParam3)
			{
				iVar0 = unk_0x5A3F0A3B7ECCBD32(Global_2883588);
				iVar5 = 0;
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (iVar5 < Global_4539513)
					{
						Global_4539513[iVar5] = -1;
						Global_4539524[iVar5] = -1;
					}
					unk_0x0249B53AB91BF9D0(Global_2883588, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10 && iVar4 != 9)
					{
						if (iParam1 == 4 && unk_0x304A39EB177D246B(Global_2883588, joaat("stockings"), 0))
						{
						}
						else if (iVar2 != 0 && iVar2 != joaat("0"))
						{
							func_181(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4539513)
							{
								Global_4539513[iVar5] = iVar2;
								Global_4539524[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_178(iParam0, func_176(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_4539512++;
				if (Global_4539512 < 2)
				{
					iVar1 = 0;
					while (iVar1 < iVar5)
					{
						if (iVar1 < Global_4539513)
						{
							if (Global_4539513[iVar1] != -1)
							{
								if (iParam0 == joaat("mp_m_freemode_01"))
								{
									func_178(iParam0, func_176(Global_4539524[iVar1]), func_22(iParam0, Global_4539513[iVar1], func_176(Global_4539524[iVar1]), 3), 1);
								}
								else
								{
									func_178(iParam0, func_176(Global_4539524[iVar1]), func_22(iParam0, Global_4539513[iVar1], func_176(Global_4539524[iVar1]), 4), 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_4539512 = (Global_4539512 - 1);
			}
			return;
		}
		if (BitTest(Global_78341[2 /*14*/].f_6, 1) && !BitTest(Global_78341[2 /*14*/].f_6, 6))
		{
			if (func_180(iParam1, Global_78341[1 /*14*/].f_2, &iVar6))
			{
				uVar7 = func_129(iVar6, Global_78338, 0);
				unk_0x0B0C9A0F9AAEB7F0(&uVar7, Global_78341[2 /*14*/].f_1);
				func_13(iVar6, uVar7, Global_78338, 1, 0);
			}
			if (bParam3 == 1)
			{
				if (iParam0 == joaat("mp_m_freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar8 = (75 + Global_78341[2 /*14*/].f_4);
							func_178(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78341[2 /*14*/].f_4);
							func_178(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78341[2 /*14*/].f_4);
							func_178(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78341[2 /*14*/].f_4);
							func_178(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78341[2 /*14*/].f_4);
							func_178(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78341[2 /*14*/].f_4);
							func_178(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78341[2 /*14*/].f_4);
							func_178(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78341[2 /*14*/].f_4);
							func_178(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78341[2 /*14*/].f_4);
							func_178(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78341[2 /*14*/].f_4);
							func_178(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78341[2 /*14*/].f_4);
							func_178(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78341[2 /*14*/].f_4);
							func_178(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs4_0"), 8, 3), 0);
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs5_0"), 8, 3), 0);
									break;
								
								case 221:
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs4_1"), 8, 3), 0);
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs5_1"), 8, 3), 0);
									break;
								
								case 222:
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs4_2"), 8, 3), 0);
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs5_2"), 8, 3), 0);
									break;
								
								case 223:
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs4_3"), 8, 3), 0);
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs5_3"), 8, 3), 0);
									break;
								
								case 224:
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs4_4"), 8, 3), 0);
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs5_4"), 8, 3), 0);
									break;
								
								case 225:
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs4_5"), 8, 3), 0);
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs5_5"), 8, 3), 0);
									break;
								
								case 226:
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs4_6"), 8, 3), 0);
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs5_6"), 8, 3), 0);
									break;
								
								case 227:
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs4_7"), 8, 3), 0);
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs5_7"), 8, 3), 0);
									break;
								
								case 228:
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs4_8"), 8, 3), 0);
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs5_8"), 8, 3), 0);
									break;
								
								case 229:
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs4_9"), 8, 3), 0);
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs5_9"), 8, 3), 0);
									break;
								
								case 230:
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs4_10"), 8, 3), 0);
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs5_10"), 8, 3), 0);
									break;
								
								case 231:
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs4_11"), 8, 3), 0);
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs5_11"), 8, 3), 0);
									break;
								
								case 232:
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs4_12"), 8, 3), 0);
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs5_12"), 8, 3), 0);
									break;
								
								case 233:
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs4_13"), 8, 3), 0);
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs5_13"), 8, 3), 0);
									break;
								
								case 234:
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs4_14"), 8, 3), 0);
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs5_14"), 8, 3), 0);
									break;
								
								case 235:
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs4_15"), 8, 3), 0);
									func_178(iParam0, 8, func_22(iParam0, joaat("dlc_mp_busi_m_accs5_15"), 8, 3), 0);
									break;
								}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_78341[2 /*14*/].f_4)
							{
								case 0:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth0_0"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth2_0"), 7, 3), 0);
									break;
								
								case 1:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth0_1"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth2_1"), 7, 3), 0);
									break;
								
								case 2:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth0_2"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth2_2"), 7, 3), 0);
									break;
								
								case 3:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth0_3"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth2_3"), 7, 3), 0);
									break;
								
								case 4:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth0_4"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth2_4"), 7, 3), 0);
									break;
								
								case 5:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth0_5"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth2_5"), 7, 3), 0);
									break;
								
								case 6:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth0_6"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth2_6"), 7, 3), 0);
									break;
								
								case 7:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth0_7"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth2_7"), 7, 3), 0);
									break;
								
								case 8:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth0_8"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth2_8"), 7, 3), 0);
									break;
								
								case 9:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth0_9"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth2_9"), 7, 3), 0);
									break;
								
								case 10:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth0_10"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth2_10"), 7, 3), 0);
									break;
								
								case 11:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth0_11"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth2_11"), 7, 3), 0);
									break;
								
								case 12:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth0_12"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth2_12"), 7, 3), 0);
									break;
								
								case 13:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth0_13"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth2_13"), 7, 3), 0);
									break;
								
								case 14:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth0_14"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth2_14"), 7, 3), 0);
									break;
								
								case 15:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth0_15"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78341[2 /*14*/].f_4)
							{
								case 0:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth1_0"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth3_0"), 7, 3), 0);
									break;
								
								case 1:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth1_1"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth3_1"), 7, 3), 0);
									break;
								
								case 2:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth1_2"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth3_2"), 7, 3), 0);
									break;
								
								case 3:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth1_3"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth3_3"), 7, 3), 0);
									break;
								
								case 4:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth1_4"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth3_4"), 7, 3), 0);
									break;
								
								case 5:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth1_5"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth3_5"), 7, 3), 0);
									break;
								
								case 6:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth1_6"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth3_6"), 7, 3), 0);
									break;
								
								case 7:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth1_7"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth3_7"), 7, 3), 0);
									break;
								
								case 8:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth1_8"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth3_8"), 7, 3), 0);
									break;
								
								case 9:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth1_9"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth3_9"), 7, 3), 0);
									break;
								
								case 10:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth1_10"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth3_10"), 7, 3), 0);
									break;
								
								case 11:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth1_11"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth3_11"), 7, 3), 0);
									break;
								
								case 12:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth1_12"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth3_12"), 7, 3), 0);
									break;
								
								case 13:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth1_13"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth3_13"), 7, 3), 0);
									break;
								
								case 14:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth1_14"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth3_14"), 7, 3), 0);
									break;
								
								case 15:
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth1_15"), 7, 3), 0);
									func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi2_m_teeth3_15"), 7, 3), 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("mp_f_freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (16 + Global_78341[2 /*14*/].f_4);
							func_178(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78341[2 /*14*/] = { func_184(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = func_179(iParam0, iParam2, Global_78341[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_178(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi_f_accs2_0"), 7, 4), 0);
								break;
							
							case 200:
								func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi_f_accs2_1"), 7, 4), 0);
								break;
							
							case 201:
								func_178(iParam0, 7, func_22(iParam0, joaat("dlc_mp_busi_f_accs2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = func_135(iParam0, iParam2, Global_78341[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_178(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_179(int iParam0, int iParam1, int iParam2)
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
	int iVar12;
	
	iVar0 = -99;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 107)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 123)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 139)
		{
			iVar0 = 128;
		}
		else if (iParam1 <= 155)
		{
			iVar0 = 144;
		}
		else if (iParam1 <= 171)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 187)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 203)
		{
			iVar0 = 192;
		}
		else if (iParam1 <= 219)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 235)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 236)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 237)
		{
			iVar1 = func_144(iParam0, iParam1, 11, 3);
			if (iVar1 != -1)
			{
				iVar2 = unk_0x5A3F0A3B7ECCBD32(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					unk_0x0249B53AB91BF9D0(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 8)
					{
						if (iVar4 != 0 && iVar4 != joaat("0"))
						{
							iVar0 = func_22(iParam0, iVar4, 8, 3);
						}
						else
						{
							iVar0 = iVar5;
						}
						iVar3 = iVar2 + 1;
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 34;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 50;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = 71;
		}
		else if (iParam1 <= 207)
		{
			iVar0 = 87;
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 103;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 255)
		{
			iVar0 = 120;
		}
		else if (iParam1 >= 256)
		{
			iVar7 = func_144(iParam0, iParam1, 11, 4);
			if (iVar7 != -1)
			{
				iVar8 = unk_0x5A3F0A3B7ECCBD32(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					unk_0x0249B53AB91BF9D0(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8)
					{
						if (iVar10 != 0 && iVar10 != joaat("0"))
						{
							iVar0 = func_22(iParam0, iVar10, 8, 4);
						}
						else
						{
							iVar0 = iVar11;
						}
						iVar9 = iVar8 + 1;
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != -99)
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

bool func_180(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 979;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 3:
					*uParam2 = 1430;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 10:
					*uParam2 = 1441;
					break;
				
				case 1:
					*uParam2 = 1012;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
				
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 9:
					*uParam2 = 1440;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
				
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 7:
					*uParam2 = 1444;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
				
				case 6:
					*uParam2 = 1011;
					break;
				
				case 8:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 995;
					break;
				
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}
	return *uParam2 != 979;
}

void func_181(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_78338;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_182(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_129(iVar2, iVar0, 0);
		unk_0x0B0C9A0F9AAEB7F0(&uVar3, iVar1);
		func_13(iVar2, uVar3, iVar0, 1, 0);
	}
}

bool func_182(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 14192;
	if ((bParam4 && Global_4539485) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_m_phead_15_0"):
					case joaat("dlc_mp_stunt_m_phead_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_1"):
					case joaat("dlc_mp_stunt_m_phead_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_2"):
					case joaat("dlc_mp_stunt_m_phead_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_3"):
					case joaat("dlc_mp_stunt_m_phead_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_4"):
					case joaat("dlc_mp_stunt_m_phead_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_5"):
					case joaat("dlc_mp_stunt_m_phead_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_6"):
					case joaat("dlc_mp_stunt_m_phead_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_7"):
					case joaat("dlc_mp_stunt_m_phead_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_0"):
					case joaat("dlc_mp_biker_m_special_2_0"):
					case joaat("dlc_mp_biker_m_special_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_1"):
					case joaat("dlc_mp_biker_m_special_2_1"):
					case joaat("dlc_mp_biker_m_special_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_2"):
					case joaat("dlc_mp_biker_m_special_2_2"):
					case joaat("dlc_mp_biker_m_special_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_3"):
					case joaat("dlc_mp_biker_m_special_2_3"):
					case joaat("dlc_mp_biker_m_special_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_4"):
					case joaat("dlc_mp_biker_m_special_2_4"):
					case joaat("dlc_mp_biker_m_special_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_5"):
					case joaat("dlc_mp_biker_m_special_2_5"):
					case joaat("dlc_mp_biker_m_special_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_7"):
					case joaat("dlc_mp_biker_m_special_2_7"):
					case joaat("dlc_mp_biker_m_special_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_8"):
					case joaat("dlc_mp_biker_m_special_2_8"):
					case joaat("dlc_mp_biker_m_special_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_11"):
					case joaat("dlc_mp_biker_m_special_2_11"):
					case joaat("dlc_mp_biker_m_special_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_m_phead_15_0"):
					case joaat("dlc_mp_stunt_m_phead_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_1"):
					case joaat("dlc_mp_stunt_m_phead_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_2"):
					case joaat("dlc_mp_stunt_m_phead_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_3"):
					case joaat("dlc_mp_stunt_m_phead_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_4"):
					case joaat("dlc_mp_stunt_m_phead_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_5"):
					case joaat("dlc_mp_stunt_m_phead_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_6"):
					case joaat("dlc_mp_stunt_m_phead_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_7"):
					case joaat("dlc_mp_stunt_m_phead_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_f_phead_15_0"):
					case joaat("dlc_mp_stunt_f_phead_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_1"):
					case joaat("dlc_mp_stunt_f_phead_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_2"):
					case joaat("dlc_mp_stunt_f_phead_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_3"):
					case joaat("dlc_mp_stunt_f_phead_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_4"):
					case joaat("dlc_mp_stunt_f_phead_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_5"):
					case joaat("dlc_mp_stunt_f_phead_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_6"):
					case joaat("dlc_mp_stunt_f_phead_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_7"):
					case joaat("dlc_mp_stunt_f_phead_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_f_phead_15_0"):
					case joaat("dlc_mp_stunt_f_phead_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_1"):
					case joaat("dlc_mp_stunt_f_phead_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_2"):
					case joaat("dlc_mp_stunt_f_phead_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_3"):
					case joaat("dlc_mp_stunt_f_phead_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_4"):
					case joaat("dlc_mp_stunt_f_phead_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_5"):
					case joaat("dlc_mp_stunt_f_phead_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_6"):
					case joaat("dlc_mp_stunt_f_phead_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_7"):
					case joaat("dlc_mp_stunt_f_phead_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4539485)
		{
			iVar0 = unk_0x82ADFEA98A0C26DC(iParam0);
		}
		else
		{
			iVar0 = unk_0x6F4B2AB7CFB2F472(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x82ADFEA98A0C26DC(iParam0);
	}
	else
	{
		iVar0 = unk_0x6F4B2AB7CFB2F472(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1761;
					break;
				
				case 1:
					*uParam2 = 1762;
					break;
				
				case 2:
					*uParam2 = 1763;
					break;
				
				case 3:
					*uParam2 = 1764;
					break;
				
				case 4:
					*uParam2 = 1765;
					break;
				
				case 5:
					*uParam2 = 1766;
					break;
				
				case 6:
					*uParam2 = 1773;
					break;
				
				case 7:
					*uParam2 = 1774;
					break;
				
				case 8:
					*uParam2 = 1775;
					break;
				
				case 9:
					*uParam2 = 1776;
					break;
				
				case 10:
					*uParam2 = 1777;
					break;
				
				case 11:
					*uParam2 = 1778;
					break;
				
				case 12:
					*uParam2 = 1779;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1921;
					break;
				
				case 18:
					*uParam2 = 1935;
					break;
				
				case 19:
					*uParam2 = 1936;
					break;
				
				case 20:
					*uParam2 = 1937;
					break;
				
				case 21:
					*uParam2 = 1938;
					break;
				
				case 22:
					*uParam2 = 1939;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2070;
					break;
				
				case 26:
					*uParam2 = 2071;
					break;
				
				case 27:
					*uParam2 = 2072;
					break;
				
				case 28:
					*uParam2 = 2073;
					break;
				
				case 29:
					*uParam2 = 2074;
					break;
				
				case 30:
					*uParam2 = 2075;
					break;
				
				case 31:
					*uParam2 = 2076;
					break;
				
				case 32:
					*uParam2 = 2077;
					break;
				
				case 33:
					*uParam2 = 2078;
					break;
				
				case 34:
					*uParam2 = 2079;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2391;
					break;
				
				case 38:
					*uParam2 = 2392;
					break;
				
				case 39:
					*uParam2 = 2393;
					break;
				
				case 40:
					*uParam2 = 2394;
					break;
				
				case 41:
					*uParam2 = 2453;
					break;
				
				case 42:
					*uParam2 = 2454;
					break;
				
				case 43:
					*uParam2 = 2455;
					break;
				
				case 44:
					*uParam2 = 2456;
					break;
				
				case 45:
					*uParam2 = 2457;
					break;
				
				case 46:
					*uParam2 = 2458;
					break;
				
				case 47:
					*uParam2 = 2459;
					break;
				
				case 48:
					*uParam2 = 2460;
					break;
				
				case 49:
					*uParam2 = 2461;
					break;
				
				case 50:
					*uParam2 = 2462;
					break;
				
				case 51:
					*uParam2 = 2592;
					break;
				
				case 52:
					*uParam2 = 2593;
					break;
				
				case 53:
					*uParam2 = 2594;
					break;
				
				case 54:
					*uParam2 = 2595;
					break;
				
				case 55:
					*uParam2 = 2596;
					break;
				
				case 56:
					*uParam2 = 2597;
					break;
				
				case 57:
					*uParam2 = 2598;
					break;
				
				case 58:
					*uParam2 = 2599;
					break;
				
				case 59:
					*uParam2 = 2600;
					break;
				
				case 60:
					*uParam2 = 2601;
					break;
				
				case 61:
					*uParam2 = 2602;
					break;
				
				case 62:
					*uParam2 = 3199;
					break;
				
				case 63:
					*uParam2 = 3200;
					break;
				
				case 64:
					*uParam2 = 3201;
					break;
				
				case 65:
					*uParam2 = 3202;
					break;
				
				case 66:
					*uParam2 = 3203;
					break;
				
				case 67:
					*uParam2 = 3204;
					break;
				
				case 68:
					*uParam2 = 3672;
					break;
				
				case 69:
					*uParam2 = 3673;
					break;
				
				case 70:
					*uParam2 = 3674;
					break;
				
				case 71:
					*uParam2 = 3675;
					break;
				
				case 72:
					*uParam2 = 3676;
					break;
				
				case 73:
					*uParam2 = 3677;
					break;
				
				case 74:
					*uParam2 = 3678;
					break;
				
				case 75:
					*uParam2 = 3679;
					break;
				
				case 76:
					*uParam2 = 3680;
					break;
				
				case 77:
					*uParam2 = 3681;
					break;
				
				case 78:
					*uParam2 = 3795;
					break;
				
				case 79:
					*uParam2 = 3796;
					break;
				
				case 80:
					*uParam2 = 3797;
					break;
				
				case 81:
					*uParam2 = 3798;
					break;
				
				case 82:
					*uParam2 = 3799;
					break;
				
				case 83:
					*uParam2 = 3800;
					break;
				
				case 84:
					*uParam2 = 3801;
					break;
				
				case 85:
					*uParam2 = 3802;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5340;
					break;
				
				case 90:
					*uParam2 = 5341;
					break;
				
				case 91:
					*uParam2 = 5342;
					break;
				
				case 92:
					*uParam2 = 5343;
					break;
				
				case 93:
					*uParam2 = 5344;
					break;
				
				case 94:
					*uParam2 = 5345;
					break;
				
				case 95:
					*uParam2 = 5346;
					break;
				
				case 96:
					*uParam2 = 5347;
					break;
				
				case 97:
					*uParam2 = 5348;
					break;
				
				case 98:
					*uParam2 = 5349;
					break;
				
				case 99:
					*uParam2 = 5350;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5351;
					break;
				
				case 101:
					*uParam2 = 5397;
					break;
				
				case 102:
					*uParam2 = 5398;
					break;
				
				case 103:
					*uParam2 = 5399;
					break;
				
				case 104:
					*uParam2 = 5400;
					break;
				
				case 105:
					*uParam2 = 5401;
					break;
				
				case 106:
					*uParam2 = 5402;
					break;
				
				case 107:
					*uParam2 = 5403;
					break;
				
				case 108:
					*uParam2 = 5404;
					break;
				
				case 109:
					*uParam2 = 5405;
					break;
				
				case 110:
					*uParam2 = 5406;
					break;
				
				case 111:
					*uParam2 = 5407;
					break;
				
				case 112:
					*uParam2 = 5408;
					break;
				
				case 113:
					*uParam2 = 5409;
					break;
				
				case 114:
					*uParam2 = 5410;
					break;
				
				case 115:
					*uParam2 = 5411;
					break;
				
				case 116:
					*uParam2 = 5412;
					break;
				
				case 117:
					*uParam2 = 5413;
					break;
				
				case 118:
					*uParam2 = 5414;
					break;
				
				case 119:
					*uParam2 = 5415;
					break;
				
				case 120:
					*uParam2 = 5416;
					break;
				
				case 121:
					*uParam2 = 5417;
					break;
				
				case 122:
					*uParam2 = 5418;
					break;
				
				case 123:
					*uParam2 = 5419;
					break;
				
				case 124:
					*uParam2 = 6125;
					break;
				
				case 125:
					*uParam2 = 6126;
					break;
				
				case 126:
					*uParam2 = 6127;
					break;
				
				case 127:
					*uParam2 = 6128;
					break;
				
				case 128:
					*uParam2 = 6129;
					break;
				
				case 129:
					*uParam2 = 6130;
					break;
				
				case 130:
					*uParam2 = 6131;
					break;
				
				case 131:
					*uParam2 = 6132;
					break;
				
				case 132:
					*uParam2 = 6133;
					break;
				
				case 133:
					*uParam2 = 6134;
					break;
				
				case 134:
					*uParam2 = 6135;
					break;
				
				case 135:
					*uParam2 = 6136;
					break;
				
				case 136:
					*uParam2 = 6137;
					break;
				
				case 137:
					*uParam2 = 6138;
					break;
				
				case 138:
					*uParam2 = 6139;
					break;
				
				case 139:
					*uParam2 = 6438;
					break;
				
				case 140:
					*uParam2 = 6439;
					break;
				
				case 141:
					*uParam2 = 6440;
					break;
				
				case 142:
					*uParam2 = 6441;
					break;
				
				case 143:
					*uParam2 = 6442;
					break;
				
				case 144:
					*uParam2 = 6443;
					break;
				
				case 145:
					*uParam2 = 6444;
					break;
				
				case 146:
					*uParam2 = 6445;
					break;
				
				case 147:
					*uParam2 = 6446;
					break;
				
				case 148:
					*uParam2 = 6447;
					break;
				
				case 149:
					*uParam2 = 6448;
					break;
				
				case 150:
					*uParam2 = 6449;
					break;
				
				case 151:
					*uParam2 = 6450;
					break;
				
				case 152:
					*uParam2 = 6451;
					break;
				
				case 153:
					*uParam2 = 6452;
					break;
				
				case 154:
					*uParam2 = 7269;
					break;
				
				case 155:
					*uParam2 = 7270;
					break;
				
				case 156:
					*uParam2 = 7271;
					break;
				
				case 157:
					*uParam2 = 7272;
					break;
				
				case 158:
					*uParam2 = 7273;
					break;
				
				case 159:
					*uParam2 = 7274;
					break;
				
				case 160:
					*uParam2 = 7275;
					break;
				
				case 161:
					*uParam2 = 7882;
					break;
				
				case 162:
					*uParam2 = 7883;
					break;
				
				case 163:
					*uParam2 = 7884;
					break;
				
				case 164:
					*uParam2 = 7885;
					break;
				
				case 165:
					*uParam2 = 7886;
					break;
				
				case 166:
					*uParam2 = 7887;
					break;
				
				case 167:
					*uParam2 = 7888;
					break;
				
				case 168:
					*uParam2 = 7889;
					break;
				
				case 169:
					*uParam2 = 7890;
					break;
				
				case 170:
					*uParam2 = 7891;
					break;
				
				case 171:
					*uParam2 = 7892;
					break;
				
				case 172:
					*uParam2 = 7893;
					break;
				
				case 173:
					*uParam2 = 7894;
					break;
				
				case 174:
					*uParam2 = 7895;
					break;
				
				case 175:
					*uParam2 = 7896;
					break;
				
				case 176:
					*uParam2 = 8302;
					break;
				
				case 177:
					*uParam2 = 8303;
					break;
				
				case 178:
					*uParam2 = 8304;
					break;
				
				case 179:
					*uParam2 = 8305;
					break;
				
				case 180:
					*uParam2 = 8306;
					break;
				
				case 181:
					*uParam2 = 8307;
					break;
				
				case 182:
					*uParam2 = 8308;
					break;
				
				case 183:
					*uParam2 = 8309;
					break;
				
				case 184:
					*uParam2 = 8310;
					break;
				
				case 185:
					*uParam2 = 8311;
					break;
				
				case 186:
					*uParam2 = 8312;
					break;
				
				case 187:
					*uParam2 = 8313;
					break;
				
				case 188:
					*uParam2 = 8314;
					break;
				
				case 189:
					*uParam2 = 8315;
					break;
				
				case 190:
					*uParam2 = 8316;
					break;
				
				case 191:
					*uParam2 = 8317;
					break;
				
				case 192:
					*uParam2 = 8318;
					break;
				
				case 193:
					*uParam2 = 8319;
					break;
				
				case 194:
					*uParam2 = 8320;
					break;
				
				case 195:
					*uParam2 = 8321;
					break;
				
				case 196:
					*uParam2 = 8322;
					break;
				
				case 197:
					*uParam2 = 8323;
					break;
				
				case 198:
					*uParam2 = 8324;
					break;
				
				case 199:
					*uParam2 = 8325;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8326;
					break;
				
				case 201:
					*uParam2 = 8941;
					break;
				
				case 202:
					*uParam2 = 8942;
					break;
				
				case 203:
					*uParam2 = 8943;
					break;
				
				case 204:
					*uParam2 = 8944;
					break;
				
				case 205:
					*uParam2 = 8945;
					break;
				
				case 206:
					*uParam2 = 9424;
					break;
				
				case 207:
					*uParam2 = 9425;
					break;
				
				case 208:
					*uParam2 = 9426;
					break;
				
				case 209:
					*uParam2 = 9427;
					break;
				
				case 210:
					*uParam2 = 9428;
					break;
				
				case 211:
					*uParam2 = 9429;
					break;
				
				case 212:
					*uParam2 = 9430;
					break;
				
				case 213:
					*uParam2 = 9431;
					break;
				
				case 214:
					*uParam2 = 9432;
					break;
				
				case 215:
					*uParam2 = 9433;
					break;
				
				case 216:
					*uParam2 = 9434;
					break;
				
				case 217:
					*uParam2 = 9435;
					break;
				
				case 218:
					*uParam2 = 9436;
					break;
				
				case 219:
					*uParam2 = 9437;
					break;
				
				case 220:
					*uParam2 = 9438;
					break;
				
				case 221:
					*uParam2 = 9439;
					break;
				
				case 222:
					*uParam2 = 9440;
					break;
				
				case 223:
					*uParam2 = 9441;
					break;
				
				case 224:
					*uParam2 = 9442;
					break;
				
				case 225:
					*uParam2 = 9443;
					break;
				
				case 226:
					*uParam2 = 9444;
					break;
				
				case 227:
					*uParam2 = 9445;
					break;
				
				case 228:
					*uParam2 = 9446;
					break;
				
				case 229:
					*uParam2 = 9447;
					break;
				
				case 230:
					*uParam2 = 9448;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10303;
					break;
				
				case 232:
					*uParam2 = 10304;
					break;
				
				case 233:
					*uParam2 = 10305;
					break;
				
				case 234:
					*uParam2 = 10306;
					break;
				
				case 235:
					*uParam2 = 10307;
					break;
				
				case 236:
					*uParam2 = 10308;
					break;
				
				case 237:
					*uParam2 = 10309;
					break;
				
				case 238:
					*uParam2 = 10310;
					break;
				
				case 239:
					*uParam2 = 10311;
					break;
				
				case 240:
					*uParam2 = 10312;
					break;
				
				case 241:
					*uParam2 = 10313;
					break;
				
				case 242:
					*uParam2 = 10314;
					break;
				
				case 243:
					*uParam2 = 10315;
					break;
				
				case 244:
					*uParam2 = 10316;
					break;
				
				case 245:
					*uParam2 = 10317;
					break;
				
				case 246:
					*uParam2 = 10318;
					break;
				
				case 247:
					*uParam2 = 10319;
					break;
				
				case 248:
					*uParam2 = 10320;
					break;
				
				case 249:
					*uParam2 = 10321;
					break;
				
				case 250:
					*uParam2 = 10322;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10419;
					break;
				
				case 252:
					*uParam2 = 10420;
					break;
				
				case 253:
					*uParam2 = 10421;
					break;
				
				case 254:
					*uParam2 = 10422;
					break;
				
				case 255:
					*uParam2 = 10423;
					break;
				
				case 256:
					*uParam2 = 10424;
					break;
				
				case 257:
					*uParam2 = 10425;
					break;
				
				case 258:
					*uParam2 = 10426;
					break;
				
				case 259:
					*uParam2 = 10427;
					break;
				
				case 260:
					*uParam2 = 10428;
					break;
				
				case 261:
					*uParam2 = 11845;
					break;
				
				case 262:
					*uParam2 = 11846;
					break;
				
				case 263:
					*uParam2 = 11847;
					break;
				
				case 264:
					*uParam2 = 11848;
					break;
				
				case 265:
					*uParam2 = 11849;
					break;
				
				case 266:
					*uParam2 = 11850;
					break;
				
				case 267:
					*uParam2 = 11851;
					break;
				
				case 268:
					*uParam2 = 11852;
					break;
				
				case 269:
					*uParam2 = 11853;
					break;
				
				case 270:
					*uParam2 = 11854;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 271:
					*uParam2 = 11876;
					break;
				
				case 272:
					*uParam2 = 11877;
					break;
				
				case 273:
					*uParam2 = 11878;
					break;
				
				case 274:
					*uParam2 = 11879;
					break;
				
				case 275:
					*uParam2 = 11880;
					break;
				
				case 276:
					*uParam2 = 11881;
					break;
				
				case 277:
					*uParam2 = 11882;
					break;
				
				case 278:
					*uParam2 = 11883;
					break;
				
				case 279:
					*uParam2 = 11884;
					break;
				
				case 280:
					*uParam2 = 11885;
					break;
				
				case 281:
					*uParam2 = 11886;
					break;
				
				case 282:
					*uParam2 = 11887;
					break;
			}
			break;
		
		case 2:
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1767;
					break;
				
				case 1:
					*uParam2 = 1768;
					break;
				
				case 2:
					*uParam2 = 1769;
					break;
				
				case 3:
					*uParam2 = 1770;
					break;
				
				case 4:
					*uParam2 = 1771;
					break;
				
				case 5:
					*uParam2 = 1772;
					break;
				
				case 6:
					*uParam2 = 1780;
					break;
				
				case 7:
					*uParam2 = 1781;
					break;
				
				case 8:
					*uParam2 = 1782;
					break;
				
				case 9:
					*uParam2 = 1783;
					break;
				
				case 10:
					*uParam2 = 1784;
					break;
				
				case 11:
					*uParam2 = 1785;
					break;
				
				case 12:
					*uParam2 = 1786;
					break;
				
				case 13:
					*uParam2 = 1789;
					break;
				
				case 14:
					*uParam2 = 1790;
					break;
				
				case 15:
					*uParam2 = 1891;
					break;
				
				case 16:
					*uParam2 = 1892;
					break;
				
				case 17:
					*uParam2 = 1922;
					break;
				
				case 18:
					*uParam2 = 1940;
					break;
				
				case 19:
					*uParam2 = 1941;
					break;
				
				case 20:
					*uParam2 = 1942;
					break;
				
				case 21:
					*uParam2 = 1943;
					break;
				
				case 22:
					*uParam2 = 1944;
					break;
				
				case 23:
					*uParam2 = 2045;
					break;
				
				case 24:
					*uParam2 = 2046;
					break;
				
				case 25:
					*uParam2 = 2080;
					break;
				
				case 26:
					*uParam2 = 2081;
					break;
				
				case 27:
					*uParam2 = 2082;
					break;
				
				case 28:
					*uParam2 = 2083;
					break;
				
				case 29:
					*uParam2 = 2084;
					break;
				
				case 30:
					*uParam2 = 2085;
					break;
				
				case 31:
					*uParam2 = 2086;
					break;
				
				case 32:
					*uParam2 = 2087;
					break;
				
				case 33:
					*uParam2 = 2088;
					break;
				
				case 34:
					*uParam2 = 2089;
					break;
				
				case 35:
					*uParam2 = 2328;
					break;
				
				case 36:
					*uParam2 = 2329;
					break;
				
				case 37:
					*uParam2 = 2395;
					break;
				
				case 38:
					*uParam2 = 2396;
					break;
				
				case 39:
					*uParam2 = 2397;
					break;
				
				case 40:
					*uParam2 = 2398;
					break;
				
				case 41:
					*uParam2 = 2463;
					break;
				
				case 42:
					*uParam2 = 2464;
					break;
				
				case 43:
					*uParam2 = 2465;
					break;
				
				case 44:
					*uParam2 = 2466;
					break;
				
				case 45:
					*uParam2 = 2467;
					break;
				
				case 46:
					*uParam2 = 2468;
					break;
				
				case 47:
					*uParam2 = 2469;
					break;
				
				case 48:
					*uParam2 = 2470;
					break;
				
				case 49:
					*uParam2 = 2471;
					break;
				
				case 50:
					*uParam2 = 2472;
					break;
				
				case 51:
					*uParam2 = 2603;
					break;
				
				case 52:
					*uParam2 = 2604;
					break;
				
				case 53:
					*uParam2 = 2605;
					break;
				
				case 54:
					*uParam2 = 2606;
					break;
				
				case 55:
					*uParam2 = 2607;
					break;
				
				case 56:
					*uParam2 = 2608;
					break;
				
				case 57:
					*uParam2 = 2609;
					break;
				
				case 58:
					*uParam2 = 2610;
					break;
				
				case 59:
					*uParam2 = 2611;
					break;
				
				case 60:
					*uParam2 = 2612;
					break;
				
				case 61:
					*uParam2 = 2613;
					break;
				
				case 62:
					*uParam2 = 3205;
					break;
				
				case 63:
					*uParam2 = 3206;
					break;
				
				case 64:
					*uParam2 = 3207;
					break;
				
				case 65:
					*uParam2 = 3208;
					break;
				
				case 66:
					*uParam2 = 3209;
					break;
				
				case 67:
					*uParam2 = 3210;
					break;
				
				case 68:
					*uParam2 = 3682;
					break;
				
				case 69:
					*uParam2 = 3683;
					break;
				
				case 70:
					*uParam2 = 3684;
					break;
				
				case 71:
					*uParam2 = 3685;
					break;
				
				case 72:
					*uParam2 = 3686;
					break;
				
				case 73:
					*uParam2 = 3687;
					break;
				
				case 74:
					*uParam2 = 3688;
					break;
				
				case 75:
					*uParam2 = 3689;
					break;
				
				case 76:
					*uParam2 = 3690;
					break;
				
				case 77:
					*uParam2 = 3691;
					break;
				
				case 78:
					*uParam2 = 3803;
					break;
				
				case 79:
					*uParam2 = 3804;
					break;
				
				case 80:
					*uParam2 = 3805;
					break;
				
				case 81:
					*uParam2 = 3806;
					break;
				
				case 82:
					*uParam2 = 3807;
					break;
				
				case 83:
					*uParam2 = 3808;
					break;
				
				case 84:
					*uParam2 = 3809;
					break;
				
				case 85:
					*uParam2 = 3810;
					break;
				
				case 86:
					*uParam2 = 3908;
					break;
				
				case 87:
					*uParam2 = 3909;
					break;
				
				case 88:
					*uParam2 = 3910;
					break;
				
				case 89:
					*uParam2 = 5352;
					break;
				
				case 90:
					*uParam2 = 5353;
					break;
				
				case 91:
					*uParam2 = 5354;
					break;
				
				case 92:
					*uParam2 = 5355;
					break;
				
				case 93:
					*uParam2 = 5356;
					break;
				
				case 94:
					*uParam2 = 5357;
					break;
				
				case 95:
					*uParam2 = 5358;
					break;
				
				case 96:
					*uParam2 = 5359;
					break;
				
				case 97:
					*uParam2 = 5360;
					break;
				
				case 98:
					*uParam2 = 5361;
					break;
				
				case 99:
					*uParam2 = 5362;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5363;
					break;
				
				case 101:
					*uParam2 = 5420;
					break;
				
				case 102:
					*uParam2 = 5421;
					break;
				
				case 103:
					*uParam2 = 5422;
					break;
				
				case 104:
					*uParam2 = 5423;
					break;
				
				case 105:
					*uParam2 = 5424;
					break;
				
				case 106:
					*uParam2 = 5425;
					break;
				
				case 107:
					*uParam2 = 5426;
					break;
				
				case 108:
					*uParam2 = 5427;
					break;
				
				case 109:
					*uParam2 = 5428;
					break;
				
				case 110:
					*uParam2 = 5429;
					break;
				
				case 111:
					*uParam2 = 5430;
					break;
				
				case 112:
					*uParam2 = 5431;
					break;
				
				case 113:
					*uParam2 = 5432;
					break;
				
				case 114:
					*uParam2 = 5433;
					break;
				
				case 115:
					*uParam2 = 5434;
					break;
				
				case 116:
					*uParam2 = 5435;
					break;
				
				case 117:
					*uParam2 = 5436;
					break;
				
				case 118:
					*uParam2 = 5437;
					break;
				
				case 119:
					*uParam2 = 5438;
					break;
				
				case 120:
					*uParam2 = 5439;
					break;
				
				case 121:
					*uParam2 = 5440;
					break;
				
				case 122:
					*uParam2 = 5441;
					break;
				
				case 123:
					*uParam2 = 5442;
					break;
				
				case 124:
					*uParam2 = 6140;
					break;
				
				case 125:
					*uParam2 = 6141;
					break;
				
				case 126:
					*uParam2 = 6142;
					break;
				
				case 127:
					*uParam2 = 6143;
					break;
				
				case 128:
					*uParam2 = 6144;
					break;
				
				case 129:
					*uParam2 = 6145;
					break;
				
				case 130:
					*uParam2 = 6146;
					break;
				
				case 131:
					*uParam2 = 6147;
					break;
				
				case 132:
					*uParam2 = 6148;
					break;
				
				case 133:
					*uParam2 = 6149;
					break;
				
				case 134:
					*uParam2 = 6150;
					break;
				
				case 135:
					*uParam2 = 6151;
					break;
				
				case 136:
					*uParam2 = 6152;
					break;
				
				case 137:
					*uParam2 = 6153;
					break;
				
				case 138:
					*uParam2 = 6154;
					break;
				
				case 139:
					*uParam2 = 6453;
					break;
				
				case 140:
					*uParam2 = 6454;
					break;
				
				case 141:
					*uParam2 = 6455;
					break;
				
				case 142:
					*uParam2 = 6456;
					break;
				
				case 143:
					*uParam2 = 6457;
					break;
				
				case 144:
					*uParam2 = 6458;
					break;
				
				case 145:
					*uParam2 = 6459;
					break;
				
				case 146:
					*uParam2 = 6460;
					break;
				
				case 147:
					*uParam2 = 6461;
					break;
				
				case 148:
					*uParam2 = 6462;
					break;
				
				case 149:
					*uParam2 = 6463;
					break;
				
				case 150:
					*uParam2 = 6464;
					break;
				
				case 151:
					*uParam2 = 6465;
					break;
				
				case 152:
					*uParam2 = 6466;
					break;
				
				case 153:
					*uParam2 = 6467;
					break;
				
				case 154:
					*uParam2 = 7276;
					break;
				
				case 155:
					*uParam2 = 7277;
					break;
				
				case 156:
					*uParam2 = 7278;
					break;
				
				case 157:
					*uParam2 = 7279;
					break;
				
				case 158:
					*uParam2 = 7280;
					break;
				
				case 159:
					*uParam2 = 7281;
					break;
				
				case 160:
					*uParam2 = 7282;
					break;
				
				case 161:
					*uParam2 = 7897;
					break;
				
				case 162:
					*uParam2 = 7898;
					break;
				
				case 163:
					*uParam2 = 7899;
					break;
				
				case 164:
					*uParam2 = 7900;
					break;
				
				case 165:
					*uParam2 = 7901;
					break;
				
				case 166:
					*uParam2 = 7902;
					break;
				
				case 167:
					*uParam2 = 7903;
					break;
				
				case 168:
					*uParam2 = 7904;
					break;
				
				case 169:
					*uParam2 = 7905;
					break;
				
				case 170:
					*uParam2 = 7906;
					break;
				
				case 171:
					*uParam2 = 7907;
					break;
				
				case 172:
					*uParam2 = 7908;
					break;
				
				case 173:
					*uParam2 = 7909;
					break;
				
				case 174:
					*uParam2 = 7910;
					break;
				
				case 175:
					*uParam2 = 7911;
					break;
				
				case 176:
					*uParam2 = 8327;
					break;
				
				case 177:
					*uParam2 = 8328;
					break;
				
				case 178:
					*uParam2 = 8329;
					break;
				
				case 179:
					*uParam2 = 8330;
					break;
				
				case 180:
					*uParam2 = 8331;
					break;
				
				case 181:
					*uParam2 = 8332;
					break;
				
				case 182:
					*uParam2 = 8333;
					break;
				
				case 183:
					*uParam2 = 8334;
					break;
				
				case 184:
					*uParam2 = 8335;
					break;
				
				case 185:
					*uParam2 = 8336;
					break;
				
				case 186:
					*uParam2 = 8337;
					break;
				
				case 187:
					*uParam2 = 8338;
					break;
				
				case 188:
					*uParam2 = 8339;
					break;
				
				case 189:
					*uParam2 = 8340;
					break;
				
				case 190:
					*uParam2 = 8341;
					break;
				
				case 191:
					*uParam2 = 8342;
					break;
				
				case 192:
					*uParam2 = 8343;
					break;
				
				case 193:
					*uParam2 = 8344;
					break;
				
				case 194:
					*uParam2 = 8345;
					break;
				
				case 195:
					*uParam2 = 8346;
					break;
				
				case 196:
					*uParam2 = 8347;
					break;
				
				case 197:
					*uParam2 = 8348;
					break;
				
				case 198:
					*uParam2 = 8349;
					break;
				
				case 199:
					*uParam2 = 8350;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8351;
					break;
				
				case 201:
					*uParam2 = 8946;
					break;
				
				case 202:
					*uParam2 = 8947;
					break;
				
				case 203:
					*uParam2 = 8948;
					break;
				
				case 204:
					*uParam2 = 8949;
					break;
				
				case 205:
					*uParam2 = 8950;
					break;
				
				case 206:
					*uParam2 = 9449;
					break;
				
				case 207:
					*uParam2 = 9450;
					break;
				
				case 208:
					*uParam2 = 9451;
					break;
				
				case 209:
					*uParam2 = 9452;
					break;
				
				case 210:
					*uParam2 = 9453;
					break;
				
				case 211:
					*uParam2 = 9454;
					break;
				
				case 212:
					*uParam2 = 9455;
					break;
				
				case 213:
					*uParam2 = 9456;
					break;
				
				case 214:
					*uParam2 = 9457;
					break;
				
				case 215:
					*uParam2 = 9458;
					break;
				
				case 216:
					*uParam2 = 9459;
					break;
				
				case 217:
					*uParam2 = 9460;
					break;
				
				case 218:
					*uParam2 = 9461;
					break;
				
				case 219:
					*uParam2 = 9462;
					break;
				
				case 220:
					*uParam2 = 9463;
					break;
				
				case 221:
					*uParam2 = 9464;
					break;
				
				case 222:
					*uParam2 = 9465;
					break;
				
				case 223:
					*uParam2 = 9466;
					break;
				
				case 224:
					*uParam2 = 9467;
					break;
				
				case 225:
					*uParam2 = 9468;
					break;
				
				case 226:
					*uParam2 = 9469;
					break;
				
				case 227:
					*uParam2 = 9470;
					break;
				
				case 228:
					*uParam2 = 9471;
					break;
				
				case 229:
					*uParam2 = 9472;
					break;
				
				case 230:
					*uParam2 = 9473;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10323;
					break;
				
				case 232:
					*uParam2 = 10324;
					break;
				
				case 233:
					*uParam2 = 10325;
					break;
				
				case 234:
					*uParam2 = 10326;
					break;
				
				case 235:
					*uParam2 = 10327;
					break;
				
				case 236:
					*uParam2 = 10328;
					break;
				
				case 237:
					*uParam2 = 10329;
					break;
				
				case 238:
					*uParam2 = 10330;
					break;
				
				case 239:
					*uParam2 = 10331;
					break;
				
				case 240:
					*uParam2 = 10332;
					break;
				
				case 241:
					*uParam2 = 10333;
					break;
				
				case 242:
					*uParam2 = 10334;
					break;
				
				case 243:
					*uParam2 = 10335;
					break;
				
				case 244:
					*uParam2 = 10336;
					break;
				
				case 245:
					*uParam2 = 10337;
					break;
				
				case 246:
					*uParam2 = 10338;
					break;
				
				case 247:
					*uParam2 = 10339;
					break;
				
				case 248:
					*uParam2 = 10340;
					break;
				
				case 249:
					*uParam2 = 10341;
					break;
				
				case 250:
					*uParam2 = 10342;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10429;
					break;
				
				case 252:
					*uParam2 = 10430;
					break;
				
				case 253:
					*uParam2 = 10431;
					break;
				
				case 254:
					*uParam2 = 10432;
					break;
				
				case 255:
					*uParam2 = 10433;
					break;
				
				case 256:
					*uParam2 = 10434;
					break;
				
				case 257:
					*uParam2 = 10435;
					break;
				
				case 258:
					*uParam2 = 10436;
					break;
				
				case 259:
					*uParam2 = 10437;
					break;
				
				case 260:
					*uParam2 = 10438;
					break;
				
				case 261:
					*uParam2 = 11855;
					break;
				
				case 262:
					*uParam2 = 11856;
					break;
				
				case 263:
					*uParam2 = 11857;
					break;
				
				case 264:
					*uParam2 = 11858;
					break;
				
				case 265:
					*uParam2 = 11859;
					break;
				
				case 266:
					*uParam2 = 11860;
					break;
				
				case 267:
					*uParam2 = 11861;
					break;
				
				case 268:
					*uParam2 = 11862;
					break;
				
				case 269:
					*uParam2 = 11863;
					break;
				
				case 270:
					*uParam2 = 11864;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 271:
					*uParam2 = 11888;
					break;
				
				case 272:
					*uParam2 = 11889;
					break;
				
				case 273:
					*uParam2 = 11890;
					break;
				
				case 274:
					*uParam2 = 11891;
					break;
				
				case 275:
					*uParam2 = 11892;
					break;
				
				case 276:
					*uParam2 = 11893;
					break;
				
				case 277:
					*uParam2 = 11894;
					break;
				
				case 278:
					*uParam2 = 11895;
					break;
				
				case 279:
					*uParam2 = 11896;
					break;
				
				case 280:
					*uParam2 = 11897;
					break;
				
				case 281:
					*uParam2 = 11898;
					break;
				
				case 282:
					*uParam2 = 11899;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 14192;
}

int func_183(int iParam0)
{
	if (!BitTest(Global_78341[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!BitTest(Global_78341[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!BitTest(Global_78341[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

struct<14> func_184(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_224();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_208(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_185(iParam1, iParam2, iParam3);
	}
	return Global_78341[0 /*14*/];
}

void func_185(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			func_207(iParam1, iParam2);
			break;
		
		case 11:
			func_206(iParam1, iParam2);
			break;
		
		case 8:
			func_205(iParam1, iParam2);
			break;
		
		case 9:
			func_204(iParam1, iParam2);
			break;
		
		case 3:
			func_203(iParam1, iParam2);
			break;
		
		case 4:
			func_202(iParam1, iParam2);
			break;
		
		case 6:
			func_201(iParam1, iParam2);
			break;
		
		case 1:
			func_200(iParam1, iParam2);
			break;
		
		case 7:
			func_199(iParam1, iParam2);
			break;
		
		case 10:
			func_198(iParam1, iParam2);
			break;
		
		case 14:
			func_197(iParam1, iParam2);
			break;
		
		case 12:
			func_196(iParam1, iParam2);
			break;
		
		case 5:
			func_195(iParam1, iParam2);
			break;
		
		case 0:
			func_193(iParam1, iParam2);
			break;
		
		case 13:
			func_186(iParam1);
			break;
	}
}

void func_186(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	switch (iParam0)
	{
		case 31:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			break;
	}
	func_187(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_187(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	var uVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_192(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x70E57E9927B6BA58(sParam3) != unk_0x70E57E9927B6BA58("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 5);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 1);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 6);
		if (func_385(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x304A39EB177D246B(Global_2883588, joaat("rebreather"), 0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_191(Global_2883588, 1, 1, 1, -1))
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_6), 2);
			}
			if (!func_191(Global_2883588, 2, 1, 1, -1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_191(Global_2883588, 1, 1, 1, -1))
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_6), 2);
			}
			if (!func_191(Global_2883588, 2, 1, 1, -1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_191(Global_2883588, 1, 1, 1, -1))
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_6), 2);
			}
			if (!func_191(Global_2883588, 2, 1, 1, -1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
			}
		}
		if (unk_0x4BFA043D318BF9AE(Global_2883589))
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_6), true);
			unk_0x8744D2E3FC95740E(&(uParam0->f_6), false);
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 0);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 5);
		if (func_190(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 1);
		}
		if (func_190(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
		}
		if (!func_190(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_385(14))
			{
				return;
			}
			uVar0 = func_129(func_189(iParam1, uParam0->f_2), Global_78338, 0);
			if (BitTest(uVar0, uParam0->f_1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 1);
			}
			uVar0 = func_129(func_188(iParam1, uParam0->f_2), Global_78338, 0);
			if (BitTest(uVar0, uParam0->f_1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
			}
			if (func_180(iParam1, uParam0->f_2, &iVar1))
			{
				uVar0 = func_129(iVar1, Global_78338, 0);
				if (!BitTest(uVar0, uParam0->f_1))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
		}
	}
}

int func_188(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 3:
					return 1415;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 10:
					return 1426;
					break;
				
				case 1:
					return 960;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
				
				case 12:
					return 979;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 9:
					return 1425;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
					break;
				
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 7:
					return 1429;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
					break;
				
				case 6:
					return 959;
					break;
				
				case 8:
					return 1423;
					break;
				
				case 11:
					return 943;
					break;
				
				case 14:
					return 975;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
					break;
			}
			break;
	}
	return 936;
}

int func_189(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 3:
					return 1400;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 10:
					return 1411;
					break;
				
				case 1:
					return 908;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
				
				case 12:
					return 927;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 9:
					return 1410;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
					break;
				
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 7:
					return 1414;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
					break;
				
				case 6:
					return 907;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 11:
					return 891;
					break;
				
				case 14:
					return 923;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
					break;
			}
			break;
	}
	return 884;
}

int func_190(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/][iParam3]), iParam4);
		}
		return BitTest(Global_113648.f_2365[iParam1 /*164*/][iParam3], bParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3]), bParam4);
		}
		return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], bParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3]), bParam4);
		}
		return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], bParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], bParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], bParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], bParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], bParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], bParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], bParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], bParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3]), bParam4);
		}
		return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], bParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], bParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3]), bParam4);
		}
		return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], bParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], bParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3]), bParam4);
		}
		return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], bParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], bParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], bParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], bParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3]), bParam4);
		}
		return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], bParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], bParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3]), bParam4);
			}
			return BitTest(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], bParam4);
		}
	}
	return 0;
}

int func_191(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_78338;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_182(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3))
	{
		uVar3 = func_129(iVar2, iVar0, 0);
		return BitTest(uVar3, uVar1);
	}
	return 0;
}

int func_192(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_193(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	Global_78341[0 /*14*/].f_5 = 4;
	func_194(iVar0, iParam0, 0, iParam1);
}

void func_194(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<10> Var9;
	int iVar10;
	int iVar11;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_78341[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar3 = (iParam1 - iParam2);
		if (iVar3 >= 0)
		{
			iVar4 = unk_0xF2DDA7CE028AB9CB(uVar1, 0);
			if (iVar4 > iVar3)
			{
				unk_0x808A8ABE207631DF(iVar3, &Var2);
				Global_2883588 = Var2.f_1;
				Global_2883589 = Var2.f_0;
				func_187(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_187(&(Global_78341[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x7A491C9A90975007(&Var5);
		iVar7 = (iParam1 - iParam2);
		if (iVar7 >= 0)
		{
			iVar8 = unk_0x7B6C0A0D604E68FA(iVar1, 10, -1, 1, -1, -1);
			if (iVar8 > iVar7)
			{
				unk_0x2DBB2D25D50A5392(iVar7, &Var5);
				if (Var5.f_6 == 0)
				{
					iVar6 = 9;
				}
				else if (Var5.f_6 == 1)
				{
					iVar6 = 10;
				}
				else if (Var5.f_6 == 2)
				{
					iVar6 = 2;
				}
				else if (Var5.f_6 == 3)
				{
					iVar6 = 3;
				}
				else if (Var5.f_6 == 4)
				{
					iVar6 = 4;
				}
				else if (Var5.f_6 == 5)
				{
					iVar6 = 5;
				}
				else if (Var5.f_6 == 6)
				{
					iVar6 = 6;
				}
				else if (Var5.f_6 == 7)
				{
					iVar6 = 7;
				}
				else if (Var5.f_6 == 8)
				{
					iVar6 = 8;
				}
				else
				{
					iVar6 = -1;
				}
				Global_2883588 = Var5.f_1;
				Global_2883589 = Var5.f_0;
				func_187(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, unk_0x304A39EB177D246B(Var5.f_1, joaat("outfit_only"), 0), iVar6, 2, Var5.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		unk_0x15D20F88F06530A5(&Var9);
		if (iParam3 != -1 && Global_78539)
		{
			unk_0xA5690D702773BED4(iParam3, &Var9);
			Global_2883588 = Var9.f_1;
			Global_2883589 = Var9.f_0;
			func_187(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x304A39EB177D246B(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 != 0);
			return;
		}
		iVar10 = (iParam1 - iParam2);
		if (iVar10 >= 0)
		{
			iVar11 = unk_0x7B6C0A0D604E68FA(iVar1, 10, -1, 0, -1, func_173(iParam0));
			if (iVar11 > iVar10)
			{
				unk_0xD36906FE7BBBDB62(iVar10, &Var9);
				Global_2883588 = Var9.f_1;
				Global_2883589 = Var9.f_0;
				func_187(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x304A39EB177D246B(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 != 0);
				return;
			}
		}
	}
}

void func_195(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		default:
			Global_78341[0 /*14*/].f_5 = 4;
			func_194(iVar7, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_187(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_196(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_78341[0 /*14*/].f_5 = 4;
			func_194(iVar7, iParam0, 28, iParam1);
			return;
			break;
	}
	func_187(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_197(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	iVar8 = 0;
	switch (iParam0)
	{
		case 0:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 235;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 5000;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 120;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 400;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 375;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 325;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 255;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 360;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 3970;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1355;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 230;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 515;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 545;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 1440;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 50;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 575;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 605;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 285;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 2125;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 295;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 160;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 855;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 1615;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 1130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 165;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 110;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 145;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 105;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 105;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 115;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 115;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 390;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 395;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 425;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 600;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 590;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 555;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 1060;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 1400;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 1315;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 1230;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 1145;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 8450;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 675;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 8750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 975;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 865;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 890;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 730;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 650;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 645;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 755;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 13850;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 2900;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 2895;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 12500;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 15000;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 14750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 13150;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 2925;
			iVar5 = 0;
			iVar8 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 820;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 435;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 160;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 970;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 585;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 650;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 180;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 595;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 160;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 545;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 590;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 1125;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 740;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 805;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 6250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 4065;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 3585;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 4075;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 4935;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 5600;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 4790;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 2315;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 1930;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 1995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 2245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 210;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 1205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 2215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 2835;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 2450;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 2515;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 5000;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 2820;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 2435;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 2500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 4815;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 4795;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 4305;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 4305;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 4965;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 480;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 465;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 4320;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 2390;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 2005;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 2070;
			iVar5 = 1;
			iVar8 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 70;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 570;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 525;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 4065;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 4275;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 2315;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 1930;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 1995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 3660;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 4165;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 3670;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 3620;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 3610;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 4140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 1490;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 1105;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 1170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 825;
			iVar5 = 6;
			iVar8 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
	}
	if (iVar8 == 1)
	{
		iVar9 = (iParam0 - 10);
		if (iVar9 >= 0 && iVar9 < 121)
		{
			if (iVar9 > 8)
			{
				iVar9 = (iVar9 - 1);
			}
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2054[iVar9]) * Global_296940.f_26));
		}
	}
	else if (iVar8 == 2)
	{
		iVar10 = (iParam0 - 131);
		if (iVar10 >= 0 && iVar10 < 24)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2175[iVar10]) * Global_296940.f_27));
		}
	}
	else if (iVar8 == 3)
	{
		iVar11 = (iParam0 - 155);
		if (iVar11 >= 0 && iVar11 < 128)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2200[iVar11]) * Global_296940.f_56));
		}
	}
	else if (iVar8 == 4)
	{
		iVar12 = (iParam0 - 319);
		if (iVar12 >= 0 && iVar12 < 10)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2329[iVar12]) * Global_296940.f_28));
		}
	}
	if (iParam0 >= 327)
	{
		Global_78341[0 /*14*/].f_5 = 4;
		func_194(iVar7, iParam0, 327, iParam1);
		if (Global_78341[0 /*14*/].f_7 > 0)
		{
			if (unk_0x304A39EB177D246B(Global_2883588, joaat("hat"), 1))
			{
				Global_78341[0 /*14*/].f_7 = round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_26));
			}
			else if (unk_0x304A39EB177D246B(Global_2883588, joaat("glasses"), 1))
			{
				Global_78341[0 /*14*/].f_7 = round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_56));
			}
			else if (unk_0x304A39EB177D246B(Global_2883588, joaat("watch"), 1))
			{
				Global_78341[0 /*14*/].f_7 = round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_28));
			}
		}
	}
	else
	{
		func_187(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_198(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_78341[0 /*14*/].f_5 = 4;
			func_194(iVar7, iParam0, 6, iParam1);
			return;
			break;
	}
	func_187(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_199(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			if (Global_262145.f_4151 != -1)
			{
				iVar1 = Global_262145.f_4151;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			if (Global_262145.f_4152 != -1)
			{
				iVar1 = Global_262145.f_4152;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			if (Global_262145.f_4153 != -1)
			{
				iVar1 = Global_262145.f_4153;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			if (Global_262145.f_4154 != -1)
			{
				iVar1 = Global_262145.f_4154;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			if (Global_262145.f_4155 != -1)
			{
				iVar1 = Global_262145.f_4155;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar3 = 1;
			iVar4 = 5;
			if (Global_262145.f_4156 != -1)
			{
				iVar1 = Global_262145.f_4156;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 0;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 1;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 2;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 3;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar3 = 2;
			iVar4 = 4;
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar3 = 2;
			iVar4 = 5;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 0;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 1;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 2;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar3 = 3;
			iVar4 = 3;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar3 = 3;
			iVar4 = 4;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar3 = 3;
			iVar4 = 5;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 21:
			iVar3 = 4;
			iVar4 = 2;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar3 = 4;
			iVar4 = 3;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar3 = 5;
			iVar4 = 4;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar3 = 5;
			iVar4 = 5;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar3 = 6;
			iVar4 = 0;
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar3 = 6;
			iVar4 = 1;
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar3 = 6;
			iVar4 = 2;
			if (Global_262145.f_4175 != -1)
			{
				iVar1 = Global_262145.f_4175;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar3 = 6;
			iVar4 = 3;
			if (Global_262145.f_4176 != -1)
			{
				iVar1 = Global_262145.f_4176;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar3 = 6;
			iVar4 = 4;
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar3 = 6;
			iVar4 = 5;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar3 = 7;
			iVar4 = 0;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar3 = 7;
			iVar4 = 1;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar3 = 9;
			iVar4 = 0;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		default:
			Global_78341[0 /*14*/].f_5 = 4;
			func_194(iVar7, iParam0, 55, iParam1);
			if (Global_78341[0 /*14*/].f_7 > 0)
			{
				Global_78341[0 /*14*/].f_7 = round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_58));
			}
			return;
			break;
	}
	iVar1 = round((to_float(iVar1) * Global_296940.f_58));
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_187(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_200(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_78341[0 /*14*/].f_5 = 4;
			func_194(iVar7, iParam0, 26, iParam1);
			if (Global_78341[0 /*14*/].f_7 > 0)
			{
				Global_78341[0 /*14*/].f_7 = round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_29));
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = (iParam0 - 1);
	if (iVar8 >= 0 && iVar8 < 26)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_2027[iVar8]) * Global_296940.f_29));
	}
	func_187(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_201(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 1560;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 120;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 365;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 2395;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 3675;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 320;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 3875;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2050;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 375;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 2105;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 345;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 380;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 340;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 385;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 4135;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 370;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 375;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 385;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 365;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 325;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 325;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 370;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 400;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 365;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 410;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 4125;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 4365;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 5365;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 6225;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 3755;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 405;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 4115;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 2240;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 3850;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 3110;
			break;
		
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 1950;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 455;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 405;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 410;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 415;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 4425;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 65;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 85;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 360;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 175;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 675;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 400;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 340;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 195;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 215;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 165;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 1040;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 100;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 205;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 200;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 100;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 1420;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 445;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 435;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 425;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 435;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 425;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 430;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 3215;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 3320;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 440;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 440;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 445;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 450;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 450;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 1255;
			break;
		
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 750;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 165;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 460;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 195;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 205;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 210;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 215;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 220;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 455;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 175;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 790;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 175;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 190;
			break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = iParam0;
	if (iVar8 >= 0 && iVar8 < 256)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_1770[iVar8]) * Global_296940.f_25));
	}
	if (iParam0 >= 256)
	{
		Global_78341[0 /*14*/].f_5 = 4;
		func_194(iVar7, iParam0, 256, iParam1);
		if (Global_78341[0 /*14*/].f_7 > 0)
		{
			Global_78341[0 /*14*/].f_7 = round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_25));
		}
	}
	else
	{
		func_187(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_202(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 450;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 4875;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 1760;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 1090;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 2465;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 305;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 290;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 410;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 255;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 255;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 405;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 5000;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 4480;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 4335;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 375;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 265;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 275;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 280;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 300;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 265;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 255;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 260;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 225;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 230;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 650;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 425;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 345;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 110;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 125;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 130;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 110;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 525;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 535;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 130;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 140;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 520;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 215;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 225;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 245;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 215;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 630;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 250;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 260;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 200;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 225;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 230;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 725;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 650;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 230;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 230;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 280;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 330;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 320;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 315;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 530;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 890;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 440;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 455;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 295;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 155;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 150;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 950;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 580;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 200;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 665;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 780;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 615;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 250;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 435;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 485;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 380;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 1295;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 1135;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 1425;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 1645;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 1925;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 2250;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 365;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 360;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 2245;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 2170;
			break;
		
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 275;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 300;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 145;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 155;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 155;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 510;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 165;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 465;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 250;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 110;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 470;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 480;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 155;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 275;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 395;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 285;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 560;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 595;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 295;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 230;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 215;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 270;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 295;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 285;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 215;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 290;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 230;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 90;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 105;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 230;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 350;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 335;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "L_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = iParam0;
	if (iVar8 >= 0 && iVar8 < 256)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_1256[iVar8]) * Global_296940.f_23));
	}
	if (iParam0 >= 256)
	{
		Global_78341[0 /*14*/].f_5 = 4;
		func_194(iVar7, iParam0, 256, iParam1);
		if (Global_78341[0 /*14*/].f_7 > 0)
		{
			Global_78341[0 /*14*/].f_7 = round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_23));
		}
	}
	else
	{
		func_187(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_203(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 15;
			iVar4 = 0;
			break;
	}
	if (iParam0 >= 16)
	{
		Global_78341[0 /*14*/].f_5 = 4;
		func_194(iVar7, iParam0, 16, iParam1);
		return;
	}
	func_187(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_204(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 11:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 16:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 18:
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 21:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 23:
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 24:
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 26:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 27:
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 28:
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 29:
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 30:
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 31:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 32:
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 33:
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 34:
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 35:
			iVar3 = 7;
			iVar4 = 4;
			break;
	}
	if (iParam0 >= 36)
	{
		Global_78341[0 /*14*/].f_5 = 4;
		func_194(iVar7, iParam0, 36, iParam1);
		return;
	}
	func_187(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_205(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 125;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 220;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 125;
			break;
		
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 33:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMF_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMF_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMF_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMF_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMF_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMF_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 40;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[77]));
			break;
		
		case 48:
			StringCopy(&Var2, "U_FMF_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 40;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[78]));
			break;
		
		case 49:
			StringCopy(&Var2, "U_FMF_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "U_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 45;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[80]));
			break;
		
		case 51:
			StringCopy(&Var2, "U_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 60;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[81]));
			break;
		
		case 52:
			StringCopy(&Var2, "U_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "U_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "U_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "U_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "U_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "U_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 375;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[87]));
			break;
		
		case 58:
			StringCopy(&Var2, "U_FMF_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "U_FMF_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 90;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[89]));
			break;
		
		case 60:
			StringCopy(&Var2, "U_FMF_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "U_FMF_5_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "U_FMF_5_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "U_FMF_5_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "U_FMF_5_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "U_FMF_5_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 66:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 67:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 68:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 69:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 70:
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "U_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 90;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[176]));
			break;
		
		case 72:
			StringCopy(&Var2, "U_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 95;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[177]));
			break;
		
		case 73:
			StringCopy(&Var2, "U_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 95;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[178]));
			break;
		
		case 74:
			StringCopy(&Var2, "U_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "U_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "U_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "U_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "U_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "U_FMF_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMF_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMF_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 150;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[186]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMF_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 65;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[187]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMF_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMF_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMF_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMF_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 145;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[191]));
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 1560;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[199]));
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMF_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 195;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[200]));
			break;
		
		case 96:
			StringCopy(&Var2, "U_FMF_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 200;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[201]));
			break;
		
		case 97:
			StringCopy(&Var2, "U_FMF_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "U_FMF_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "U_FMF_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 100:
			StringCopy(&Var2, "U_FMF_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "U_FMF_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "U_FMF_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "U_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 975;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[208]));
			break;
		
		case 104:
			StringCopy(&Var2, "U_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 2670;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[209]));
			break;
		
		case 105:
			StringCopy(&Var2, "U_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 480;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[210]));
			break;
		
		case 106:
			StringCopy(&Var2, "U_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 400;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[211]));
			break;
		
		case 107:
			StringCopy(&Var2, "U_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 2500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[212]));
			break;
		
		case 108:
			StringCopy(&Var2, "U_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 2060;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[213]));
			break;
		
		case 109:
			StringCopy(&Var2, "U_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 2620;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[214]));
			break;
		
		case 110:
			StringCopy(&Var2, "U_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 475;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[215]));
			break;
		
		case 111:
			StringCopy(&Var2, "U_FMF_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 490;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[216]));
			break;
		
		case 112:
			StringCopy(&Var2, "U_FMF_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 2280;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[217]));
			break;
		
		case 113:
			StringCopy(&Var2, "U_FMF_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 485;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[218]));
			break;
		
		case 114:
			StringCopy(&Var2, "U_FMF_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 2390;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[219]));
			break;
		
		case 115:
			StringCopy(&Var2, "U_FMF_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 2610;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[220]));
			break;
		
		case 116:
			StringCopy(&Var2, "U_FMF_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1450;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[221]));
			break;
		
		case 117:
			StringCopy(&Var2, "U_FMF_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 2720;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[222]));
			break;
		
		case 118:
			StringCopy(&Var2, "U_FMF_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 4995;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[223]));
			break;
		
		case 119:
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 120:
			StringCopy(&Var2, "U_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 325;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[240]));
			break;
		
		case 121:
			StringCopy(&Var2, "U_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 122:
			StringCopy(&Var2, "U_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 123:
			StringCopy(&Var2, "U_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 130;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[243]));
			break;
		
		case 124:
			StringCopy(&Var2, "U_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 125:
			StringCopy(&Var2, "U_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 126:
			StringCopy(&Var2, "U_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 127:
			StringCopy(&Var2, "U_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 128:
			StringCopy(&Var2, "U_FMF_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMF_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMF_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 450;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[250]));
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMF_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 465;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[251]));
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMF_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMF_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMF_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMF_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		default:
			Global_78341[0 /*14*/].f_5 = 4;
			func_194(iVar7, iParam0, 136, iParam1);
			if (Global_78341[0 /*14*/].f_7 > 0)
			{
				Global_78341[0 /*14*/].f_7 = round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_24));
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_76(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round((to_float(1250) * Global_262145.f_2990));
		}
		else
		{
			iVar1 = round((to_float(40) * Global_262145.f_1513[4]));
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = round((to_float(450) * Global_262145.f_2989));
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_76(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round((to_float(500) * Global_262145.f_2988));
		}
		else
		{
			iVar1 = round((to_float(40) * Global_262145.f_1513[9]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 256)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[iVar8]));
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar9 = (iParam0 - 16);
		if (iVar9 >= 0 && iVar9 < 256)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_1513[iVar9]));
		}
	}
	iVar1 = round((to_float(iVar1) * Global_296940.f_24));
	func_187(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_206(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 125;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 230;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 355;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5000;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2725;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3265;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 3625;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 4220;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 310;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 60;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 295;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 80;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 2250;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 275;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 445;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 40;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 470;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 95;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 360;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 100;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 60;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 295;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 460;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 1980;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 2110;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 95;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 40;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 40;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 375;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 90;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 900;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1000;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1050;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1000;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2975;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 1100;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 1825;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 1750;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 1075;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 2805;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 2250;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 525;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 100;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 110;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 130;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 560;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 295;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 975;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 160;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 100;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 1700;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 380;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 95;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 90;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 85;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 90;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 150;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 145;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 1560;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 195;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 200;
			break;
		