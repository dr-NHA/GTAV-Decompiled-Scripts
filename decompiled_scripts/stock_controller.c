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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	struct<3> Local_27 = { 0, 0, 0 } ;
	struct<3> Local_28 = { 0, 0, 0 } ;
	int iLocal_29 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
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
	iLocal_20 = -15;
	iLocal_21 = -15;
	iLocal_22 = -1;
	iLocal_26 = -1;
	if (unk_0x96CFB880BAC634CE(2))
	{
		func_99();
	}
	if (unk_0x486FF5D06E9659F1(joaat("stock_controller")) > 1)
	{
		func_99();
	}
	Global_63346 = 1;
	iLocal_22 = round((to_float(480) / 16f));
	func_98();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 204)
	{
		if (!Global_59104[iVar0 /*7*/])
		{
			if (Global_59104[iVar0 /*7*/].f_2)
			{
				if (!Global_59104[iVar0 /*7*/].f_4)
				{
					unk_0xDF7F16323520B858(Global_59104[iVar0 /*7*/].f_3, &(Global_59104[iVar0 /*7*/].f_5), -1);
				}
				else
				{
					fVar1 = 0f;
					unk_0x2F0966A034F5ADC6(Global_59104[iVar0 /*7*/].f_3, &fVar1, -1);
					Global_59104[iVar0 /*7*/].f_5 = floor(fVar1);
				}
			}
		}
		iVar0++;
	}
	func_97();
	func_95();
	func_94();
	func_91();
	Global_63346 = 0;
	func_90(1);
	func_87();
	func_84();
	while (true)
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (!Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 < 11)
			{
				Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 = 0;
			}
			iVar2++;
		}
		func_80();
		if (!unk_0x76CD105BCAC6EB9F() && !func_79(14))
		{
			func_68();
			iVar3 = 16;
			while (func_67() && iVar3 >= 0)
			{
				iVar3 = (iVar3 - 1);
				func_47();
				Global_60540 = 1;
				func_41();
				Global_63348 = 1;
				func_39();
				func_38();
			}
			if (func_30())
			{
				func_28(0);
				func_38();
				func_27();
				func_38();
				func_87();
				func_38();
			}
			while (Global_60533 > 0)
			{
				func_11(&iLocal_20, 0, 480, 0, 0, 0, 0);
				func_11(&iLocal_21, 0, 480, 0, 0, 0, 0);
				Global_60533 = (Global_60533 - 1);
			}
		}
		func_4();
		func_1();
		wait(0);
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4());
	if (unk_0x1C2F771CDC87A3A5(iVar0, 0))
	{
		return;
	}
	iVar1 = func_3(iVar0);
	if (unk_0x5B702A5D1F2635BE(iVar1))
	{
		func_2(89, 1);
		if (unk_0xDF93B3CFAC96698F(iVar1) > 5f)
		{
			func_2(90, 1);
		}
	}
}

void func_2(int iParam0, int iParam1)
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

int func_3(int iParam0)
{
	return iParam0;
}

void func_4()
{
	int iVar0;
	
	if (!unk_0x261E3728EE56B3AC())
	{
		if (Global_60534)
		{
			Global_60534 = 0;
			Global_60535 = unk_0x1DD05E817C89C737();
			Global_63347 = 1;
		}
		return;
	}
	if (Global_60534)
	{
		if (!unk_0xB8581B151258A47D())
		{
			iVar0 = func_5();
			Global_60534 = 0;
			if (iVar0 < 5)
			{
				Global_63347 = 0;
			}
		}
	}
}

int func_5()
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	
	if (!unk_0x261E3728EE56B3AC() || !unk_0x1595D1B690089487())
	{
		return 1;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (Global_55661[iVar0 /*36*/].f_8)
		{
			if (Global_55661[iVar0 /*36*/].f_35 > -1)
			{
				uVar2 = Global_58542[Global_55661[iVar0 /*36*/].f_35 /*7*/];
				unk_0x2F0966A034F5ADC6(uVar2, &(Global_55661[iVar0 /*36*/].f_9), -1);
				if (Global_55661[iVar0 /*36*/].f_9 > 0f)
				{
					fVar3 = 0f;
					unk_0x3BD9AF4ED006CA00(uVar2, 0, &(Global_55661[iVar0 /*36*/].f_33));
					Global_55661[iVar0 /*36*/].f_31 = Global_55661[iVar0 /*36*/].f_9;
					Global_55661[iVar0 /*36*/].f_32 = Global_55661[iVar0 /*36*/].f_9;
					fVar3 = (fVar3 + Global_55661[iVar0 /*36*/].f_33);
					iVar4 = 0;
					while (iVar4 < 4)
					{
						fVar5 = 0f;
						unk_0x3BD9AF4ED006CA00(uVar2, iVar4 + 1, &fVar5);
						if (fVar5 > Global_55661[iVar0 /*36*/].f_31)
						{
							Global_55661[iVar0 /*36*/].f_31 = fVar5;
						}
						if (fVar5 < Global_55661[iVar0 /*36*/].f_32)
						{
							Global_55661[iVar0 /*36*/].f_32 = fVar5;
						}
						fVar3 = (fVar3 + fVar5);
						iVar4++;
					}
					fVar3 = (fVar3 / 5f);
					fVar6 = func_6(iVar0);
					if (fVar6 > Global_55661[iVar0 /*36*/].f_31)
					{
						Global_55661[iVar0 /*36*/].f_31 = fVar6;
					}
					if (fVar6 < Global_55661[iVar0 /*36*/].f_32)
					{
						Global_55661[iVar0 /*36*/].f_32 = fVar6;
					}
					Global_55661[iVar0 /*36*/].f_33 = (fVar6 - fVar3);
					Global_55661[iVar0 /*36*/].f_34 = ((Global_55661[iVar0 /*36*/].f_33 / fVar3) * 100f);
				}
				else
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

float func_6(int iParam0)
{
	int iVar0;
	float fVar1;
	
	iVar0 = iParam0;
	fVar1 = (Global_55661[iParam0 /*36*/].f_9 * func_7(iVar0));
	return (to_float(floor((fVar1 * 100f))) / 100f);
}

float func_7(int iParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = 1f;
	switch (iParam0)
	{
		case 61:
			if (Global_113648.f_9087.f_99.f_58[131])
			{
				fVar0 = 0.5f;
			}
			break;
		
		case 73:
			if (func_10(25))
			{
				fVar0 = (fVar0 * 3f);
			}
			else
			{
				if (func_10(74) || func_10(75))
				{
					fVar0 = (fVar0 * 0.95f);
				}
				if (func_10(14))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(16))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(48))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(24))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_10(27))
				{
					fVar0 = (fVar0 * 0.5f);
				}
			}
			break;
		
		case 66:
			if (func_10(49))
			{
				fVar0 = (fVar0 * 0.5f);
			}
			if (func_10(10))
			{
				fVar0 = (fVar0 * 0.95f);
			}
			break;
		
		case 59:
			if (func_10(93))
			{
				if (!func_10(47))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			if (func_10(38))
			{
				if (!func_10(28))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			if (func_10(84))
			{
				if (!func_10(28))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			break;
		
		case 69:
			if (func_10(90))
			{
				if (!func_10(14))
				{
					fVar0 = (fVar0 * 0.7f);
				}
			}
			break;
		
		case 16:
			if (func_10(28))
			{
				fVar0 = (fVar0 * 2f);
			}
			break;
		
		case 52:
			if (func_10(93))
			{
				if (!func_10(28))
				{
					fVar0 = (fVar0 * 0.6f);
				}
			}
			break;
		
		case 56:
			if (func_10(61))
			{
				if (!func_10(49))
				{
					fVar0 = (fVar0 * 0.5f);
				}
			}
			break;
	}
	if (Global_113648.f_20566.f_442 < 1)
	{
		return fVar0;
	}
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (Global_113648.f_20566.f_443[iVar2] == iParam0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 > -1)
	{
		fVar0 = func_9(Global_113648.f_20566.f_452[iVar1], Global_113648.f_20566.f_461[iVar1]);
	}
	if (fVar0 > 1f)
	{
		fVar3 = (fVar0 - 1f);
		iVar4 = iParam0;
		iVar5 = func_8(0, iVar4);
		iVar6 = func_8(1, iVar4);
		iVar7 = func_8(2, iVar4);
		if (((iVar5 + iVar6) + iVar7) > 0)
		{
			iVar8 = ((Global_60536[0] + Global_60536[1]) + Global_60536[2]);
			iVar2 = 0;
			while (iVar2 < 10)
			{
				if (Global_113648.f_20566.f_22[iVar2] > 0)
				{
					iVar8 = (iVar8 + floor(Global_113648.f_20566.f_11[iVar2]));
				}
				if (Global_113648.f_20566.f_55[iVar2] > 0)
				{
					iVar8 = (iVar8 + floor(Global_113648.f_20566.f_44[iVar2]));
				}
				if (Global_113648.f_20566.f_88[iVar2] > 0)
				{
					iVar8 = (iVar8 + floor(Global_113648.f_20566.f_77[iVar2]));
				}
				iVar2++;
			}
			iVar9 = 700000000;
			iVar10 = 1000000000;
			if (iVar8 > iVar10)
			{
				fVar3 = 0f;
			}
			else if (iVar8 < iVar9)
			{
				fVar3 = 1f;
			}
			else
			{
				fVar11 = to_float((iVar8 - iVar9));
				fVar12 = to_float((iVar10 - iVar9));
				fVar3 = (fVar3 * (1f - (fVar11 / fVar12)));
			}
		}
		fVar0 = (1f + fVar3);
	}
	return fVar0;
}

int func_8(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return Global_113648.f_20566.f_22[iParam1];
			break;
		
		case 1:
			return Global_113648.f_20566.f_55[iParam1];
			break;
		
		case 2:
			return Global_113648.f_20566.f_88[iParam1];
			break;
	}
	return 0;
}

float func_9(int iParam0, var uParam1)
{
	float fVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	fVar0 = 0f;
	if (iParam0 < 1)
	{
		return 1f;
	}
	bVar1 = BitTest(uParam1, 0);
	fVar2 = to_float(iParam0);
	iVar3 = 0;
	if (BitTest(uParam1, 3))
	{
		iVar3++;
	}
	if (BitTest(uParam1, 4))
	{
		iVar3 += 2;
	}
	if (BitTest(uParam1, 5))
	{
		iVar3 += 4;
	}
	if (BitTest(uParam1, 20))
	{
		iVar3 += 8;
	}
	fVar4 = to_float((3 * iVar3));
	if (BitTest(uParam1, 2))
	{
		fVar4 = (fVar4 * 7f);
	}
	if (BitTest(uParam1, 1))
	{
		if (func_10(21))
		{
			return 1f;
		}
	}
	else if (fVar4 < 1f)
	{
		return 1f;
	}
	fVar5 = (1f - (fVar2 / fVar4));
	if (BitTest(uParam1, 16))
	{
		fVar0 = (fVar0 - 0.5f);
	}
	if (BitTest(uParam1, 17))
	{
		fVar0 = (fVar0 - 0.25f);
	}
	if (BitTest(uParam1, 18))
	{
		fVar0 = (fVar0 - 0.1f);
	}
	if (BitTest(uParam1, 19))
	{
		fVar0 = (fVar0 - 0.33f);
	}
	if (bVar1)
	{
		fVar0 = -fVar0;
	}
	if (!BitTest(uParam1, 1))
	{
		if (BitTest(uParam1, 6))
		{
			fVar6 = 0f;
			if (BitTest(uParam1, 8))
			{
				fVar6 = (fVar6 + 0.5f);
			}
			if (BitTest(uParam1, 9))
			{
				fVar6 = (fVar6 + 0.25f);
			}
			if (BitTest(uParam1, 10))
			{
				fVar6 = (fVar6 + 0.125f);
			}
			if (fVar5 < fVar6)
			{
				fVar7 = (fVar5 / fVar6);
				if (BitTest(uParam1, 7))
				{
					fVar7 = (1f - fVar7);
					fVar7 = (fVar7 * fVar7);
					fVar7 = (1f - fVar7);
				}
				fVar0 = (fVar0 * fVar7);
			}
		}
		if (BitTest(uParam1, 11))
		{
			fVar8 = 0f;
			if (BitTest(uParam1, 13))
			{
				fVar8 = (fVar8 + 0.5f);
			}
			if (BitTest(uParam1, 14))
			{
				fVar8 = (fVar8 + 0.25f);
			}
			if (BitTest(uParam1, 15))
			{
				fVar8 = (fVar8 + 0.125f);
			}
			fVar9 = (1f - fVar8);
			if (fVar5 > fVar9)
			{
				fVar10 = ((fVar5 - fVar9) / fVar8);
				if (BitTest(uParam1, 12))
				{
					fVar10 = (fVar10 * fVar10);
				}
				fVar0 = (fVar0 * (1f - fVar10));
			}
		}
	}
	fVar0 = (1f + fVar0);
	return fVar0;
}

bool func_10(int iParam0)
{
	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

void func_11(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	
	iVar0 = func_25(*iParam0);
	iVar1 = func_24(*iParam0);
	iVar2 = func_23(*iParam0);
	iVar3 = func_22(*iParam0);
	iVar4 = func_21(*iParam0);
	iVar5 = func_20(*iParam0);
	if (((iParam4 == 0 && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		iVar7 = iVar0;
		if (iVar6 < 0)
		{
			iVar6 = 11;
			iVar7 = (iVar7 - 1);
		}
		iVar8 = iVar6;
		iVar9 = func_19(iVar8, iVar7);
		iVar2 = (iVar2 + iVar9);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_12(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_12(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_18(iParam0, iParam1);
	func_17(iParam0, iParam2);
	func_16(iParam0, iParam3);
	func_15(iParam0, iParam5);
	func_14(iParam0, iParam4);
	func_13(iParam0, iParam6);
}

void func_13(int iParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*iParam0 = (*iParam0 || shift_left((2011 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || shift_left((iParam1 - 2011), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_14(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_24(*iParam0);
	iVar1 = func_25(*iParam0);
	if (iParam1 < 1 || iParam1 > func_19(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 496);
	*iParam0 = (*iParam0 || shift_left(iParam1, 4));
}

void func_15(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15);
	*iParam0 = (*iParam0 || iParam1);
}

void func_16(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || shift_left(iParam1, 9));
}

void func_17(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || shift_left(iParam1, 14));
}

void func_18(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || shift_left(iParam1, 20));
}

int func_19(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_20(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_21(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_22(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_23(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_24(int iParam0)
{
	return iParam0 & 15;
}

var func_25(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_26(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_26(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_27()
{
	int iVar0;
	
	if (Global_113648.f_20566.f_442 < 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!BitTest(Global_113648.f_20566.f_461[iVar0], 1))
		{
			if (Global_113648.f_20566.f_452[iVar0] > 0)
			{
				Global_113648.f_20566.f_452[iVar0] = (Global_113648.f_20566.f_452[iVar0] - 1);
				if (Global_113648.f_20566.f_452[iVar0] < 1)
				{
					Global_113648.f_20566.f_452[iVar0] = 0;
					Global_113648.f_20566.f_442 = (Global_113648.f_20566.f_442 - 1);
				}
			}
		}
		iVar0++;
	}
}

void func_28(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		func_29(iVar0, bParam0);
		wait(0);
		if (!bParam0)
		{
			func_68();
		}
		iVar0++;
	}
}

void func_29(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (Global_55661[iParam0 /*36*/].f_8)
	{
		return;
	}
	fVar0 = Global_55661[iParam0 /*36*/].f_9;
	if (!bParam1)
	{
		fVar0 = func_6(iParam0);
	}
	if (fVar0 == 0f)
	{
		return;
	}
	Global_55661[iParam0 /*36*/].f_14[Global_55661[iParam0 /*36*/].f_13] = fVar0;
	if (fVar0 > Global_55661[iParam0 /*36*/].f_31)
	{
		Global_55661[iParam0 /*36*/].f_31 = fVar0;
	}
	if (fVar0 < Global_55661[iParam0 /*36*/].f_32)
	{
		Global_55661[iParam0 /*36*/].f_32 = fVar0;
	}
	Global_55661[iParam0 /*36*/].f_13++;
	if (Global_55661[iParam0 /*36*/].f_13 >= 16)
	{
		Global_55661[iParam0 /*36*/].f_13 = 0;
	}
	fVar1 = 0f;
	iVar2 = 0;
	while (iVar2 < 16)
	{
		fVar1 = (fVar1 + Global_55661[iParam0 /*36*/].f_14[iVar2]);
		iVar2++;
	}
	fVar1 = (fVar1 / to_float(16));
	Global_55661[iParam0 /*36*/].f_33 = (fVar0 - fVar1);
	Global_55661[iParam0 /*36*/].f_34 = ((Global_55661[iParam0 /*36*/].f_33 / fVar1) * 100f);
}

int func_30()
{
	int iVar0;
	
	if (iLocal_20 == -15)
	{
		iLocal_20 = func_37();
		iVar0 = func_22(iLocal_20);
		if (iVar0 == 24)
		{
			iVar0 = 0;
		}
		if (func_36(iVar0, 0, 8))
		{
			func_16(&iLocal_20, 8);
		}
		else if (func_36(iVar0, 8, 16))
		{
			func_16(&iLocal_20, 16);
		}
		else if (func_36(iVar0, 16, 24))
		{
			func_16(&iLocal_20, 0);
			func_35(&iLocal_20, 0, 0, 0, 1, 0, 0);
		}
		func_17(&iLocal_20, 0);
		func_18(&iLocal_20, 0);
		iLocal_21 = iLocal_20;
		return 0;
	}
	if (func_34(iLocal_20))
	{
		if (func_31(&iLocal_20, 1, 8))
		{
			return 0;
		}
		func_35(&iLocal_20, 0, 480, 0, 0, 0, 0);
		return 1;
	}
	return 0;
}

int func_31(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_33(Global_1574629))
	{
		if (bParam1)
		{
			iVar0 = func_37();
			iVar1 = func_22(Global_1574629);
			iVar2 = func_21(Global_1574629);
			func_16(&iVar0, iVar1);
			func_17(&iVar0, iVar2);
			func_18(&iVar0, 0);
			if (func_32(func_37(), iVar0))
			{
				func_35(&iVar0, 0, 0, 0, 1, 0, 0);
			}
			iVar3 = 0;
			while (func_32(iVar0, *iParam0) && iVar3 < 24)
			{
				func_35(iParam0, 0, 0, iParam2, 0, 0, 0);
				iVar3 = (iVar3 + iParam2);
			}
		}
		return 1;
	}
	return 0;
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_33(iParam1) || !func_33(iParam0))
	{
		return 1;
	}
	iVar0 = func_25(iParam0);
	iVar1 = func_25(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_24(iParam0);
	iVar1 = func_24(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_23(iParam0);
	iVar1 = func_23(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_22(iParam0);
	iVar1 = func_22(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_21(iParam0);
	iVar1 = func_21(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_20(iParam0);
	iVar1 = func_20(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_20(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_21(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_22(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_25(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_24(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_23(iParam0);
	if (iVar5 < 1 || iVar5 > func_19(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

bool func_34(int iParam0)
{
	return func_32(func_37(), iParam0);
}

void func_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_25(*iParam0);
	iVar1 = func_24(*iParam0);
	iVar2 = func_23(*iParam0);
	iVar3 = func_22(*iParam0);
	iVar4 = func_21(*iParam0);
	iVar5 = func_20(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_19(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_19(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_12(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_36(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

int func_37()
{
	var uVar0;
	
	func_18(&uVar0, unk_0x4BA5A16068183C5E());
	func_17(&uVar0, unk_0x18E502A71E28968C());
	func_16(&uVar0, unk_0x5295501D0862870D());
	func_14(&uVar0, unk_0xB12880C92EA6EE15());
	func_15(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_13(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_38()
{
	wait(0);
	func_68();
}

void func_39()
{
	int iVar0;
	
	iVar0 = unk_0xE1799BB6E4C1CDFB();
	if (iLocal_26 != iVar0)
	{
		if (iLocal_25 > 48)
		{
			switch (func_40(iLocal_26))
			{
				case 1:
					func_2(85, 1);
					break;
				
				case 2:
					func_2(84, 1);
					break;
				
				case 3:
					func_2(86, 1);
					break;
				
				case 4:
					func_2(87, 1);
					break;
				}
		}
		iLocal_25 = 0;
		iLocal_26 = iVar0;
	}
	switch (func_40(iVar0))
	{
		case 1:
			func_2(77, 1);
			break;
		
		case 2:
			func_2(76, 1);
			break;
		
		case 3:
			func_2(79, 1);
			break;
		
		case 4:
			func_2(80, 1);
			break;
		
		case 0:
			break;
	}
	func_2(78, 1);
	iLocal_25++;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
			break;
	}
	return 0;
}

void func_41()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	func_68();
	iVar0 = 0;
	while (iVar0 < 204)
	{
		if (!Global_59104[iVar0 /*7*/])
		{
			if (Global_59104[iVar0 /*7*/].f_2)
			{
				iVar1 = 0;
				if (!Global_59104[iVar0 /*7*/].f_4)
				{
					unk_0xDF7F16323520B858(Global_59104[iVar0 /*7*/].f_3, &iVar1, -1);
				}
				else
				{
					fVar2 = 0f;
					unk_0x2F0966A034F5ADC6(Global_59104[iVar0 /*7*/].f_3, &fVar2, -1);
					iVar3 = floor(fVar2);
					if (Global_59104[iVar0 /*7*/].f_5 < iVar3)
					{
						iVar1 = iVar3;
					}
					else
					{
						iVar1 = Global_59104[iVar0 /*7*/].f_5;
					}
				}
				Global_59104[iVar0 /*7*/].f_6 = (iVar1 - Global_59104[iVar0 /*7*/].f_5);
			}
		}
		if ((iVar0 % 20) == 0)
		{
			wait(0);
			func_68();
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (!Global_55661[iVar0 /*36*/].f_8)
		{
			if (!Global_55661[iVar0 /*36*/].f_10 == 0f)
			{
				Global_55661[iVar0 /*36*/].f_11 = Global_55661[iVar0 /*36*/].f_10;
			}
		}
		if ((iVar0 % 40) == 0)
		{
			wait(0);
			func_68();
		}
		iVar0++;
	}
	iVar4 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (!Global_55661[iVar0 /*36*/].f_8)
		{
			fVar5 = 0f;
			if (Global_55661[iVar0 /*36*/].f_10 != 0f)
			{
				fVar5 = (fVar5 + (((0.02f * Global_55661[iVar0 /*36*/].f_9) * Global_55661[iVar0 /*36*/].f_10) - Global_55661[iVar0 /*36*/].f_9));
			}
			fVar5 = (fVar5 + ((unk_0xD2AA6F822D3A55D2(-Global_58816[iVar4 /*7*/].f_6, Global_58816[iVar4 /*7*/].f_6) * 0.1f) * Global_55661[iVar0 /*36*/].f_9));
			Global_58816[iVar4 /*7*/] = (Global_58816[iVar4 /*7*/] * 0.995f);
			if (fVar5 < 0f)
			{
				fVar5 = (fVar5 * Global_58816[iVar4 /*7*/].f_2);
			}
			else if (fVar5 > 0f)
			{
				fVar5 = (fVar5 * Global_58816[iVar4 /*7*/].f_1);
			}
			fVar5 = func_46(fVar5, -Global_58816[iVar4 /*7*/].f_5, Global_58816[iVar4 /*7*/].f_5);
			iVar6 = 61;
			if (((iVar0 == iVar6 && func_45(44)) && !func_45(64)) && fVar5 > 0f)
			{
				Global_55661[iVar0 /*36*/].f_9 = (Global_55661[iVar0 /*36*/].f_9 - fVar5);
			}
			else
			{
				if (fVar5 > 0f)
				{
					fVar7 = func_43(iVar0);
					fVar5 = (fVar5 * fVar7);
				}
				Global_55661[iVar0 /*36*/].f_9 = (Global_55661[iVar0 /*36*/].f_9 + fVar5);
			}
			if (Global_55661[iVar0 /*36*/].f_9 > Global_58816[iVar4 /*7*/].f_3)
			{
				fVar8 = (Global_55661[iVar0 /*36*/].f_9 - Global_58816[iVar4 /*7*/].f_3);
				fVar8 = (fVar8 * 0.5f);
				Global_55661[iVar0 /*36*/].f_9 = (Global_55661[iVar0 /*36*/].f_9 - fVar8);
			}
			else if (Global_55661[iVar0 /*36*/].f_9 < Global_58816[iVar4 /*7*/].f_4)
			{
				fVar9 = (Global_58816[iVar4 /*7*/].f_4 - Global_55661[iVar0 /*36*/].f_9);
				fVar9 = (fVar9 * 0.5f);
				Global_55661[iVar0 /*36*/].f_9 = (Global_55661[iVar0 /*36*/].f_9 + fVar9);
			}
			Global_58816[iVar4 /*7*/] = (Global_58816[iVar4 /*7*/] - (((fVar5 * 0.66f) + (Global_58816[iVar4 /*7*/] * 0.33f)) * 0.02f));
			if (!Global_55661[iVar0 /*36*/].f_9 > 0f)
			{
				Global_55661[iVar0 /*36*/].f_9 = (-1f * Global_55661[iVar0 /*36*/].f_9);
				Global_55661[iVar0 /*36*/].f_9 = (Global_55661[iVar0 /*36*/].f_9 + 0.02f);
			}
		}
		if ((iVar0 % 20) == 0)
		{
			wait(0);
			func_68();
		}
		iVar0++;
	}
	func_42();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 204)
	{
		if (!Global_59104[iVar0 /*7*/])
		{
			if (Global_59104[iVar0 /*7*/].f_2)
			{
				Global_59104[iVar0 /*7*/].f_5 = (Global_59104[iVar0 /*7*/].f_5 + Global_59104[iVar0 /*7*/].f_6);
			}
		}
		iVar0++;
	}
}

void func_42()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 80)
	{
		if (!Global_55661[iVar1 /*36*/].f_8)
		{
			if (iVar0 < 42)
			{
				Global_113648.f_20566.f_103[iVar0] = Global_55661[iVar1 /*36*/].f_9;
				if (Global_55661[iVar1 /*36*/].f_31 > Global_113648.f_20566.f_146[iVar0])
				{
					Global_113648.f_20566.f_146[iVar0] = Global_55661[iVar1 /*36*/].f_31;
				}
				if (Global_113648.f_20566.f_189[iVar0] == 0f)
				{
					Global_113648.f_20566.f_189[iVar0] = Global_55661[iVar1 /*36*/].f_32;
				}
				else if (Global_55661[iVar1 /*36*/].f_32 < Global_113648.f_20566.f_189[iVar0])
				{
					Global_113648.f_20566.f_189[iVar0] = Global_55661[iVar1 /*36*/].f_32;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

float func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	
	if (Global_55661[iParam0 /*36*/].f_8)
	{
		return 1f;
	}
	iVar0 = func_8(0, iParam0);
	iVar1 = func_8(1, iParam0);
	iVar2 = func_8(2, iParam0);
	if (((iVar0 + iVar1) + iVar2) < 1)
	{
		return 1f;
	}
	iVar3 = 1000000000;
	iVar4 = ((Global_60536[0] + Global_60536[1]) + Global_60536[2]);
	if (Global_60536[0] > iVar3)
	{
		return 0f;
	}
	if (Global_60536[1] > iVar3)
	{
		return 0f;
	}
	if (Global_60536[2] > iVar3)
	{
		return 0f;
	}
	fVar5 = 0f;
	iVar6 = 0;
	while (iVar6 < 10)
	{
		iVar7 = func_8(0, iVar6);
		if (iVar7 > 0)
		{
			fVar5 = (fVar5 + (func_6(func_44(0, iVar6)) * IntToFloat(iVar7)));
		}
		if (func_8(1, iVar6) > 0)
		{
			fVar5 = (fVar5 + (func_6(func_44(1, iVar6)) * IntToFloat(iVar7)));
		}
		if (func_8(2, iVar6) > 0)
		{
			fVar5 = (fVar5 + (func_6(func_44(2, iVar6)) * IntToFloat(iVar7)));
		}
		iVar6++;
	}
	iVar8 = (floor(fVar5) + iVar4);
	iVar9 = 700000000;
	if (iVar8 > iVar3)
	{
		return 0f;
	}
	if (iVar8 < iVar9)
	{
		return 1f;
	}
	fVar10 = to_float((iVar8 - iVar9));
	fVar11 = to_float((iVar3 - iVar9));
	if (!fVar11 > 0f)
	{
		return 1f;
	}
	return (1f - (fVar10 / fVar11));
}

int func_44(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return 31;
	}
	switch (iParam0)
	{
		case 0:
			return Global_113648.f_20566[iParam1];
		
		case 1:
			return Global_113648.f_20566.f_33[iParam1];
		
		case 2:
			return Global_113648.f_20566.f_66[iParam1];
		
		default:
	}
	return 31;
}

int func_45(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

float func_46(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_47()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0xD5FF242D0AFC5855(unk_0xB6B621402486C3E4()))
	{
		iVar0 = unk_0xE7B45027762DEFE7(unk_0xB6B621402486C3E4());
		if (iVar0 == 0)
		{
			func_2(75, 1);
		}
		iVar1 = unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4());
		if (unk_0x7F420695E3F776FB(iVar1, 0))
		{
			iVar2 = unk_0x6EF03BE64E058E2F(iVar1, 0);
			if (iVar2 != 0)
			{
				if (func_58(iVar2))
				{
					iVar3 = unk_0x4B423FAA24E8ABF0(iVar2);
					func_56(iVar3);
				}
			}
		}
		wait(0);
		if (!unk_0x1C2F771CDC87A3A5(iVar1, 0))
		{
			iVar4 = unk_0xB0D77D90171EC35F(iVar1);
			func_54(iVar4);
			switch (iVar4)
			{
				case joaat("weapon_molotov"):
				case joaat("weapon_petrolcan"):
					switch (func_48())
					{
						case 0:
							func_2(147, 1);
							break;
						
						case 1:
							func_2(148, 1);
							break;
						
						case 2:
							func_2(149, 1);
							break;
					}
					break;
				}
			}
	}
}

int func_48()
{
	func_49();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_49()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_52(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_51(unk_0x4A8C381C258A124D());
			if (func_50(iVar0) && (!func_79(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_50(Global_113648.f_2365.f_539.f_4321))
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

bool func_50(int iParam0)
{
	return iParam0 < 3;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_52(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_52(int iParam0)
{
	if (func_50(iParam0))
	{
		return func_53(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_53(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_54(int iParam0)
{
	int iVar0;
	
	iVar0 = func_55(iParam0);
	switch (iVar0)
	{
		case 0:
			func_2(51, 1);
			break;
		
		case 1:
			func_2(52, 1);
			break;
		
		case 2:
			func_2(53, 1);
			break;
	}
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_stickybomb"):
		case joaat("weapon_stungun"):
		case joaat("weapon_grenadelauncher"):
		case joaat("weapon_heavysniper"):
		case joaat("weapon_carbinerifle"):
		case joaat("weapon_specialcarbine"):
		case joaat("weapon_smg"):
		case joaat("weapon_assaultshotgun"):
		case joaat("weapon_appistol"):
			return 0;
			break;
		
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_remotesniper"):
		case joaat("weapon_rpg"):
		case joaat("weapon_mg"):
		case joaat("weapon_advancedrifle"):
		case joaat("weapon_microsmg"):
		case joaat("weapon_sawnoffshotgun"):
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_grenade"):
		case joaat("weapon_minigun"):
		case joaat("weapon_sniperrifle"):
		case joaat("weapon_combatmg"):
		case joaat("weapon_assaultrifle"):
		case joaat("weapon_pumpshotgun"):
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		default:
			return 3;
			break;
	}
	return 3;
}

void func_56(int iParam0)
{
	switch (func_57(iParam0))
	{
		case 0:
			func_2(39, 1);
			break;
		
		case 1:
			func_2(35, 1);
			break;
		
		case 2:
			func_2(32, 1);
			break;
		
		case 3:
			func_2(38, 1);
			break;
		
		case 4:
			func_2(31, 1);
			break;
		
		case 5:
			func_2(33, 1);
			break;
		
		case 6:
			func_2(36, 1);
			break;
		
		case 7:
			func_2(37, 1);
			break;
	}
	switch (iParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike2"):
		case joaat("fixter"):
		case joaat("tribike"):
		case joaat("cruiser"):
			func_2(34, 1);
			break;
	}
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case joaat("benson"):
		case joaat("bobcatxl"):
		case joaat("bullet"):
		case joaat("dominator"):
		case joaat("minivan"):
		case joaat("peyote"):
		case joaat("radi"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("speedo"):
		case joaat("speedo2"):
		case joaat("stanier"):
			return 3;
			break;
		
		case joaat("boxville"):
		case joaat("camper"):
		case joaat("pony"):
		case joaat("pony2"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("tiptruck"):
			return 2;
			break;
		
		case joaat("fusilade"):
			return 6;
			break;
		
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("penumbra"):
		case joaat("sanchez"):
		case joaat("sanchez2"):
			return 1;
			break;
		
		case joaat("bfinjection"):
		case joaat("dune"):
		case joaat("surfer"):
		case joaat("surfer2"):
			return 4;
			break;
		
		case joaat("barracks2"):
		case joaat("biff"):
		case joaat("bulldozer"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("forklift"):
		case joaat("mixer"):
		case joaat("mixer2"):
			return 0;
			break;
		
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("sentinel"):
		case joaat("sentinel2"):
		case joaat("zion"):
		case joaat("zion2"):
			return 7;
			break;
	}
	return 8;
}

int func_58(int iParam0)
{
	var uVar0;
	
	if (Global_78558)
	{
		return unk_0xFDA2576D37032738(iParam0);
	}
	if (func_61(iParam0, &uVar0))
	{
		return 0;
	}
	if (func_60(iParam0))
	{
		return 0;
	}
	if (func_59(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_59(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98042[iVar0]))
		{
			if (Global_98042[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xFC8BFE4B41177C22(Global_98012[iVar0]) && unk_0xD9F5E1FEFD1329E4(Global_98012[iVar0], 0))
			{
				if (Global_98012[iVar0] == iParam0 && unk_0x4B423FAA24E8ABF0(Global_98012[iVar0]) == unk_0x4B423FAA24E8ABF0(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_61(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (Global_77348.f_484[iVar0] == iParam0)
		{
			if (func_62(&(Global_77348.f_555[0 /*21*/]), iVar0))
			{
				if (BitTest(Global_77348.f_555[0 /*21*/].f_9, 10) && Global_77348.f_555[0 /*21*/].f_4 == unk_0x4B423FAA24E8ABF0(iParam0))
				{
					*uParam1 = iVar0;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_62(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_65(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_65(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_65(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_65(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_65(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_65(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_65(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_65(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_65(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 27);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 27);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 27);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 11);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 11);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 9);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 9);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_64())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_64())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113648.f_32751.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_63(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113648.f_32751.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113648.f_32751.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_63(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_63(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

bool func_63(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_64()
{
	int iVar0;
	
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
				unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, 4);
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, 6);
				unk_0x0B0C9A0F9AAEB7F0(&Global_25, 2);
				unk_0x0B0C9A0F9AAEB7F0(&Global_25, 4);
				unk_0x0B0C9A0F9AAEB7F0(&Global_25, 6);
				unk_0x1164A75E490C27B6(joaat("sp_unlock_exclus_content"), iVar0, 1);
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

int func_65(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_50(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_66(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_66(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113648.f_9087.f_99.f_58[128] && !Global_113648.f_9087.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113648.f_9087.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113648.f_9087.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_67()
{
	if (iLocal_21 == -15)
	{
		return 0;
	}
	if (func_34(iLocal_21))
	{
		if (func_31(&iLocal_21, 1, 8))
		{
			return 0;
		}
		func_35(&iLocal_21, 0, iLocal_22, 0, 0, 0, 0);
		return 1;
	}
	return 0;
}

void func_68()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	if (Global_60541)
	{
		Global_60541 = 0;
		switch (func_57(Global_60542))
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_2(29, 1);
				break;
			
			case 4:
			case 5:
			case 6:
			case 7:
				func_2(30, 1);
				break;
			}
	}
	iVar0 = 0;
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < unk_0x703C4F7316B7195D(0))
	{
		iVar2 = unk_0x4BC3E5D2FB0A1665(0, iVar0);
		switch (iVar2)
		{
			case 142:
				unk_0xFCEF367B86651ED3(0, iVar0, &uVar1, 1);
				func_78(uVar1);
				bVar4 = true;
				if (unk_0x76CD105BCAC6EB9F())
				{
					if (unk_0xFC8BFE4B41177C22(uVar1))
					{
						if (!unk_0x1B1A446EFA398EB5(iVar1))
						{
							bVar4 = false;
						}
					}
					else
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					if (unk_0xFC8BFE4B41177C22(iVar1))
					{
						if (unk_0x0101C509A6E67F99(iVar1))
						{
							func_74(iVar1);
						}
						else if (unk_0x55B80B6E7AB61270(iVar1))
						{
							if (func_73(unk_0xE93EDE86BBB66532(iVar1)))
							{
								func_2(3, 1);
							}
							func_72(unk_0x4B423FAA24E8ABF0(iVar1));
						}
						else if (unk_0xBE79A96C521F4432(iVar1))
						{
							switch (unk_0x4B423FAA24E8ABF0(iVar1))
							{
								case joaat("prop_news_disp_01a"):
								case joaat("prop_news_disp_02a"):
								case joaat("prop_news_disp_02a_s"):
								case joaat("prop_news_disp_02b"):
								case joaat("prop_news_disp_02c"):
								case joaat("prop_news_disp_02d"):
								case joaat("prop_news_disp_02e"):
								case joaat("prop_news_disp_03a"):
								case joaat("prop_news_disp_03c"):
								case joaat("prop_news_disp_05a"):
								case -1389481633:
								case 1301918910:
								case joaat("prop_news_disp_06a"):
								case -1406224059:
									func_2(68, 1);
									break;
								
								case -959573699:
								case joaat("prop_postbox_01a"):
								case 1147034058:
								case 1444740423:
								case joaat("prop_postbox_ss_01a"):
									func_2(128, 1);
									break;
								}
							}
						}
				}
				break;
			
			case 141:
				unk_0xFCEF367B86651ED3(0, iVar0, &iVar1, 1);
				func_78(iVar1);
				bVar4 = true;
				if (unk_0x76CD105BCAC6EB9F())
				{
					if (unk_0xFC8BFE4B41177C22(iVar1))
					{
						if (!unk_0x1B1A446EFA398EB5(iVar1))
						{
							bVar4 = false;
						}
					}
					else
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					if (unk_0xFC8BFE4B41177C22(iVar1))
					{
						if (unk_0x0101C509A6E67F99(iVar1))
						{
							iVar3 = unk_0xBD545F8729E9F413(iVar1);
							if (func_48() == 0 && iVar3 != unk_0x4A8C381C258A124D())
							{
								if (unk_0x1C2F771CDC87A3A5(iVar1, 0) || IntToFloat(unk_0x8D91ADE44AC79BC9(iVar1)) < (0.5f * IntToFloat(unk_0x3C8EDE4003ABACA0(iVar3))))
								{
									if (unk_0x0101C509A6E67F99(iVar1) && unk_0x26A004F4BA50E71C(unk_0xBD545F8729E9F413(iVar1)))
									{
										if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
										{
											func_70(3);
										}
									}
								}
							}
							func_2(111, 1);
							func_2(124, 1);
							if (unk_0x5B702A5D1F2635BE(iVar1))
							{
								func_2(130, 1);
							}
						}
						else if (unk_0x55B80B6E7AB61270(iVar1))
						{
							func_69(unk_0x4B423FAA24E8ABF0(iVar1));
							func_2(111, 1);
						}
						else if (unk_0xBE79A96C521F4432(iVar1))
						{
							func_2(111, 1);
						}
					}
				}
				break;
		}
		iVar0++;
	}
}

void func_69(int iParam0)
{
	switch (func_57(iParam0))
	{
		case 0:
			func_2(47, 1);
			break;
		
		case 1:
			func_2(43, 1);
			break;
		
		case 2:
			func_2(41, 1);
			break;
		
		case 3:
			func_2(46, 1);
			break;
		
		case 4:
			func_2(40, 1);
			break;
		
		case 5:
			func_2(42, 1);
			break;
		
		case 6:
			func_2(44, 1);
			break;
		
		case 7:
			func_2(45, 1);
			break;
	}
}

void func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_71(&Global_97149, 1);
			break;
		
		case 1:
			func_71(&Global_97151, 3);
			break;
		
		case 2:
			func_71(&Global_97155, 1);
			break;
		
		case 3:
			func_71(&Global_97157, 1);
			break;
		
		case 4:
			func_71(&Global_97159, 1);
			break;
		
		case 5:
			func_71(&Global_97161, 1);
			break;
		
		case 6:
			func_71(&Global_97163, 1);
			break;
		
		case 7:
			func_71(&Global_97165, 2);
			break;
		
		case 8:
			func_71(&Global_97168, 1);
			break;
		
		case 9:
			func_71(&Global_97170, 1);
			break;
	}
}

void func_71(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (iVar0 < (iParam1 - 1))
		{
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
		}
		else
		{
			(*uParam0)[iVar0] = unk_0x1DD05E817C89C737();
		}
		iVar0++;
	}
}

void func_72(int iParam0)
{
	switch (func_57(iParam0))
	{
		case 0:
			func_2(11, 1);
			break;
		
		case 1:
			func_2(6, 1);
			break;
		
		case 2:
			func_2(1, 1);
			break;
		
		case 3:
			func_2(10, 1);
			break;
		
		case 4:
			func_2(0, 1);
			break;
		
		case 5:
			func_2(2, 1);
			break;
		
		case 6:
			func_2(8, 1);
			break;
		
		case 7:
			func_2(9, 1);
			break;
	}
	if (iParam0 == joaat("taxi"))
	{
		func_2(100, 1);
	}
	func_2(111, 1);
}

int func_73(var uParam0)
{
	if (unk_0xA9DFDFED12311CA7(uParam0) >= 0)
	{
		if (unk_0x94C9CD3D66808551(uParam0, 0) != -1)
		{
			return 1;
		}
		if (unk_0x94C9CD3D66808551(uParam0, 3) != -1)
		{
			return 1;
		}
		if (unk_0x94C9CD3D66808551(uParam0, 4) != -1)
		{
			return 1;
		}
		if (unk_0x94C9CD3D66808551(uParam0, 5) != -1)
		{
			return 1;
		}
		if (unk_0x94C9CD3D66808551(uParam0, 6) != -1)
		{
			return 1;
		}
		if (unk_0x94C9CD3D66808551(uParam0, 7) != -1)
		{
			return 1;
		}
		if (unk_0x94C9CD3D66808551(uParam0, 10) != -1)
		{
			return 1;
		}
		if (unk_0x94C9CD3D66808551(uParam0, 11) != -1)
		{
			return 1;
		}
		if (unk_0x94C9CD3D66808551(uParam0, 12) != -1)
		{
			return 1;
		}
		if (unk_0x94C9CD3D66808551(uParam0, 13) != -1)
		{
			return 1;
		}
		if (unk_0x94C9CD3D66808551(uParam0, 14) != -1)
		{
			return 1;
		}
		if (unk_0x94C9CD3D66808551(uParam0, 15) != -1)
		{
			return 1;
		}
		if (unk_0x94C9CD3D66808551(uParam0, 16) != -1)
		{
			return 1;
		}
		if (unk_0x94C9CD3D66808551(uParam0, 23) != -1)
		{
			return 1;
		}
		if (unk_0x94C9CD3D66808551(uParam0, 24) != -1)
		{
			return 1;
		}
		if (unk_0x94C9CD3D66808551(uParam0, 1) != -1)
		{
			return 1;
		}
		if (unk_0x94C9CD3D66808551(uParam0, 2) != -1)
		{
			return 1;
		}
		if (unk_0x94C9CD3D66808551(uParam0, 8) != -1)
		{
			return 1;
		}
		if (unk_0x94C9CD3D66808551(uParam0, 9) != -1)
		{
			return 1;
		}
		if (unk_0x1D5A665629D417A7(uParam0, 18))
		{
			return 1;
		}
		if (unk_0x1D5A665629D417A7(uParam0, 22))
		{
			return 1;
		}
		if (!unk_0xE6BE8A525BA6BD44(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_74(int iParam0)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	uVar0 = unk_0xBD545F8729E9F413(uParam0);
	if (unk_0xFFF4FB66DA549D0F(iParam0))
	{
		uVar1 = unk_0x836392D80E4F106A(uVar0);
		if (unk_0x55B80B6E7AB61270(uVar1))
		{
			iVar2 = unk_0x4B423FAA24E8ABF0(iVar1);
			func_77(iVar2, unk_0x0DFE7358172FC006(uVar0));
		}
		else
		{
			iVar3 = unk_0x6D7C109F77738F39(uVar0);
			iVar4 = unk_0x4B423FAA24E8ABF0(iParam0);
			func_76(iVar3, unk_0x0DFE7358172FC006(uVar0), iVar4);
		}
	}
	if (unk_0x5B702A5D1F2635BE(iParam0))
	{
		func_2(129, 1);
	}
	if (!func_75(iParam0))
	{
		return;
	}
	func_2(111, 1);
	iVar5 = unk_0x1DD05E817C89C737();
	iVar6 = (iVar5 - iLocal_23);
	iLocal_23 = iVar5;
	if (iVar6 > 2000)
	{
		iLocal_24 = 0;
	}
	else
	{
		iLocal_24++;
		if (iLocal_24 == 3)
		{
			func_2(127, 1);
		}
	}
}

int func_75(int iParam0)
{
	int iVar0;
	
	if (!unk_0x1B1A446EFA398EB5(uParam0))
	{
		return 0;
	}
	iVar0 = unk_0x836392D80E4F106A(unk_0xBD545F8729E9F413(iParam0));
	if (func_3(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4())) == iVar0)
	{
		return 1;
	}
	return 0;
}

void func_76(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_55(iParam0);
	if (iVar0 == 0)
	{
		func_2(108, 1);
	}
	switch (iParam1)
	{
		case 4:
		case 5:
			switch (iVar0)
			{
				case 0:
					func_2(63, 1);
					break;
				
				case 1:
					func_2(64, 1);
					break;
				
				case 2:
					func_2(65, 1);
					break;
			}
			break;
		
		case 22:
			switch (iVar0)
			{
				case 0:
					func_2(57, 1);
					break;
				
				case 1:
					func_2(58, 1);
					break;
				
				case 2:
					func_2(59, 1);
					break;
			}
			break;
		
		case 27:
		case 6:
			switch (iVar0)
			{
				case 0:
					func_2(54, 1);
					break;
				
				case 1:
					func_2(55, 1);
					break;
				
				case 2:
					func_2(56, 1);
					break;
			}
			break;
	}
	switch (iParam2)
	{
		case joaat("s_f_y_hooker_01"):
			func_2(121, 1);
			break;
		
		case joaat("a_f_m_bodybuild_01"):
		case joaat("a_m_m_beach_02"):
		case joaat("a_m_y_musclbeac_02"):
		case joaat("a_m_y_runner_01"):
		case joaat("a_m_y_roadcyc_01"):
		case joaat("a_m_y_skater_01"):
		case joaat("a_m_y_skater_02"):
		case joaat("a_m_y_sunbathe_01"):
		case joaat("a_m_y_surfer_01"):
		case joaat("a_m_y_yoga_01"):
		case joaat("s_m_y_baywatch_01"):
		case joaat("s_m_y_marine_02"):
			func_2(69, 1);
			break;
		
		case joaat("s_m_y_dealer_01"):
			func_2(125, 1);
			break;
	}
}

void func_77(int iParam0, int iParam1)
{
	func_2(48, 1);
	switch (iParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
			func_2(4, 1);
			break;
		
		case joaat("tanker"):
			func_2(5, 1);
			func_2(7, 1);
			func_2(91, 1);
			break;
		
		case joaat("packer"):
			func_2(7, 1);
			break;
		
		case joaat("phantom"):
			func_2(5, 1);
			break;
	}
	switch (func_57(iParam0))
	{
		case 0:
			func_2(109, 1);
			break;
		
		case 1:
			func_2(104, 1);
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(60, 1);
					break;
			}
			break;
		
		case 2:
			func_2(102, 1);
			break;
		
		case 3:
			func_2(107, 1);
			break;
		
		case 4:
			func_2(101, 1);
			break;
		
		case 5:
			func_2(103, 1);
			break;
		
		case 6:
			func_2(105, 1);
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(61, 1);
					break;
			}
			break;
		
		case 7:
			func_2(106, 1);
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(62, 1);
					break;
			}
			break;
	}
}

void func_78(int iParam0)
{
	unk_0xFC8BFE4B41177C22(uParam0);
	unk_0x1C2F771CDC87A3A5(iParam0, 0);
}

bool func_79(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_80()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x75EAB09F5E974116(unk_0xB6B621402486C3E4()))
	{
		iLocal_29 = 0;
		return;
	}
	if (func_82(unk_0xB6B621402486C3E4(), -1))
	{
		iLocal_29 = 0;
		return;
	}
	if (unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), 0))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(unk_0xB6B621402486C3E4()), 0);
		if (iLocal_29 != iVar0)
		{
			Local_27 = { Local_28 };
			iLocal_29 = iVar0;
		}
		if (iVar0 == 0)
		{
			return;
		}
		Local_27 = { unk_0xD1A6A821F5AC81DB(iVar0, 1) };
		if (iLocal_29 == 0)
		{
			Local_28 = { Local_27 };
			iLocal_29 = iVar0;
			return;
		}
		iVar1 = unk_0x4B423FAA24E8ABF0(iVar0);
		if (func_81(iVar1, unk_0xED977E2AE2CB16EE(Local_27, Local_28, 0)))
		{
			Local_28 = { Local_27 };
		}
	}
}

int func_81(int iParam0, float fParam1)
{
	if (fParam1 < 10f)
	{
		return 0;
	}
	switch (func_57(iParam0))
	{
		case 0:
			func_2(28, floor((fParam1 / 10f)));
			break;
		
		case 1:
			func_2(24, floor((fParam1 / 10f)));
			break;
		
		case 2:
			func_2(21, floor((fParam1 / 10f)));
			break;
		
		case 3:
			func_2(27, floor((fParam1 / 10f)));
			break;
		
		case 4:
			func_2(20, floor((fParam1 / 10f)));
			break;
		
		case 5:
			func_2(22, floor((fParam1 / 10f)));
			break;
		
		case 6:
			func_2(25, floor((fParam1 / 10f)));
			break;
		
		case 7:
			func_2(26, floor((fParam1 / 10f)));
			break;
	}
	switch (iParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
			func_2(23, floor((fParam1 / 10f)));
			break;
		
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike2"):
		case joaat("fixter"):
		case joaat("tribike"):
		case joaat("cruiser"):
			switch (func_48())
			{
				case 0:
					func_2(141, floor((fParam1 / 10f)));
					break;
				
				case 1:
					func_2(142, floor((fParam1 / 10f)));
					break;
				
				case 2:
					func_2(143, floor((fParam1 / 10f)));
					break;
			}
			break;
	}
	return 1;
}

int func_82(var uParam0, int iParam1)
{
	var uVar0;
	
	if (func_83(uParam0, 1, 1))
	{
		if (unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(uParam0), 0))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(uParam0), 0);
			if (unk_0xD9F5E1FEFD1329E4(uVar0, 0))
			{
				if (unk_0x4A8C381C258A124D() == unk_0xFD5C5BBD1FE92BB7(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_83(var uParam0, bool bParam1, bool bParam2)
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

void func_84()
{
	func_85(0);
	func_85(1);
	func_85(2);
}

void func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (Global_55661[iVar0 /*36*/].f_8)
		{
			iVar1 = Global_55661[iVar0 /*36*/].f_35;
			if (iVar1 > -1)
			{
				iVar2 = func_86(iParam0, iVar0);
				if (Global_55661[iVar0 /*36*/].f_9 <= 0f)
				{
					iVar2 = 0;
				}
				unk_0x1164A75E490C27B6(Global_58542[iVar1 /*7*/].f_3[iParam0], iVar2, 1);
			}
		}
		iVar0++;
	}
}

int func_86(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iParam0)
		{
			case 0:
				if (Global_113648.f_20566[iVar0] == iParam1)
				{
					if (Global_113648.f_20566.f_22[iVar0] > 0)
					{
						return Global_113648.f_20566.f_22[iVar0];
					}
				}
				break;
			
			case 1:
				if (Global_113648.f_20566.f_33[iVar0] == iParam1)
				{
					if (Global_113648.f_20566.f_55[iVar0] > 0)
					{
						return Global_113648.f_20566.f_55[iVar0];
					}
				}
				break;
			
			case 2:
				if (Global_113648.f_20566.f_66[iVar0] == iParam1)
				{
					if (Global_113648.f_20566.f_88[iVar0] > 0)
					{
						return Global_113648.f_20566.f_88[iVar0];
					}
				}
				break;
		}
		iVar0++;
	}
	return 0;
}

void func_87()
{
	int iVar0;
	int iVar1;
	
	iVar1 = Global_60823;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_60826[iVar0 /*14*/].f_13 > 0)
		{
			Global_60826[iVar0 /*14*/].f_13 = (Global_60826[iVar0 /*14*/].f_13 - 1);
		}
		else if (func_89(iVar0))
		{
			func_88(&(Global_60826[iVar0 /*14*/]), -1);
			Global_60826[iVar0 /*14*/].f_13 = 60000;
		}
		wait(0);
		func_68();
		iVar0++;
	}
}

int func_88(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = *uParam0;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_63208[iVar0 /*34*/][iVar1 /*11*/].f_9 == uParam0->f_9)
		{
			uParam0->f_10 = (uParam0->f_10 + 0.05f);
			return 0;
		}
		iVar1++;
	}
	iVar1 = 0;
	fVar2 = 0f;
	iVar3 = -1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_63208[iVar0 /*34*/][iVar1 /*11*/].f_10 > fVar2)
		{
			iVar3 = iVar1;
			fVar2 = Global_63208[iVar0 /*34*/][iVar1 /*11*/].f_10;
		}
		iVar1++;
	}
	if (iVar3 == -1)
	{
		return 0;
	}
	if (uParam0->f_10 <= Global_63208[iVar0 /*34*/][iVar3 /*11*/].f_10)
	{
		uParam0->f_10 = (uParam0->f_10 + 1f);
		Global_63208[iVar0 /*34*/][iVar3 /*11*/].f_10 = uParam0->f_10;
		Global_63208[iVar0 /*34*/][iVar3 /*11*/].f_1 = { uParam0->f_1 };
		Global_63208[iVar0 /*34*/][iVar3 /*11*/].f_5 = { uParam0->f_5 };
		Global_63208[iVar0 /*34*/][iVar3 /*11*/].f_9 = uParam0->f_9;
		Global_63208[iVar0 /*34*/][iVar3 /*11*/] = *uParam0;
		return 1;
	}
	return 0;
}

int func_89(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	
	iVar0 = Global_60826[iParam0 /*14*/].f_12;
	fVar1 = Global_55661[iVar0 /*36*/].f_9;
	iVar2 = Global_55661[iVar0 /*36*/].f_13;
	while (iVar2 > 15)
	{
		iVar2 = (iVar2 - 16);
	}
	iVar3 = (iVar2 - 10);
	while (iVar3 < 0)
	{
		iVar3 = (16 + iVar3);
	}
	fVar4 = Global_55661[iVar0 /*36*/].f_14[iVar3];
	Global_55661[iVar0 /*36*/].f_14[Global_55661[iVar0 /*36*/].f_13] = func_6(iVar0);
	iVar5 = 0;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = iVar3 + 1;
	if (iVar8 == 16)
	{
		iVar8 = 0;
	}
	iVar9 = 0;
	iVar10 = iVar8;
	iVar11 = 0;
	iVar12 = 0;
	iVar9 = 0;
	while (iVar9 < 8)
	{
		iVar11 = iVar10 + 1;
		if (iVar11 == 16)
		{
			iVar11 = 0;
		}
		iVar12 = iVar11 + 1;
		if (iVar12 == 16)
		{
			iVar12 = 0;
		}
		if (Global_55661[iVar0 /*36*/].f_14[iVar10] < Global_55661[iVar0 /*36*/].f_14[iVar11])
		{
			iVar6++;
			fVar13 = (fVar13 + (Global_55661[iVar0 /*36*/].f_14[iVar11] - Global_55661[iVar0 /*36*/].f_14[iVar10]));
		}
		else
		{
			iVar7++;
			fVar14 = (fVar14 + (Global_55661[iVar0 /*36*/].f_14[iVar10] - Global_55661[iVar0 /*36*/].f_14[iVar11]));
		}
		if (Global_55661[iVar0 /*36*/].f_14[iVar10] < Global_55661[iVar0 /*36*/].f_14[iVar11] && Global_55661[iVar0 /*36*/].f_14[iVar12] < Global_55661[iVar0 /*36*/].f_14[iVar11])
		{
			iVar5++;
		}
		if (Global_55661[iVar0 /*36*/].f_14[iVar10] > Global_55661[iVar0 /*36*/].f_14[iVar11] && Global_55661[iVar0 /*36*/].f_14[iVar12] > Global_55661[iVar0 /*36*/].f_14[iVar11])
		{
			iVar5++;
		}
		iVar10++;
		if (iVar10 == 16)
		{
			iVar10 = 0;
		}
		iVar9++;
	}
	if (iVar6 < 0)
	{
		fVar13 = (fVar13 / IntToFloat(iVar6));
	}
	if (iVar7 > 0)
	{
		fVar14 = (fVar14 / IntToFloat(iVar7));
	}
	fVar15 = (fVar1 - fVar4);
	if (fVar15 < 0f)
	{
		fVar15 = (fVar15 * -1f);
	}
	switch (Global_60826[iParam0 /*14*/].f_11)
	{
		case 0:
			if (iVar6 < 6)
			{
				return 0;
			}
			if (fVar13 < (fVar4 * 0.04f))
			{
				return 0;
			}
			return 1;
			break;
		
		case 1:
			if (iVar7 < 6)
			{
				return 0;
			}
			if (fVar14 < (fVar4 * 0.04f))
			{
				return 0;
			}
			return 1;
			break;
		
		case 2:
			if (iVar5 < 7)
			{
				return 0;
			}
			if (fVar15 > (fVar4 * 0.01f))
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

void func_90(bool bParam0)
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

void func_91()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 80)
	{
		if (iVar0 < 42)
		{
			if (!Global_55661[iVar1 /*36*/].f_8)
			{
				if (Global_113648.f_20566.f_103[iVar0] > 0f)
				{
					Global_55661[iVar1 /*36*/].f_9 = Global_113648.f_20566.f_103[iVar0];
				}
				if (Global_113648.f_20566.f_146[iVar0] > 0f)
				{
					Global_55661[iVar1 /*36*/].f_31 = Global_113648.f_20566.f_146[iVar0];
				}
				if (Global_113648.f_20566.f_189[iVar0] > 0f)
				{
					Global_55661[iVar1 /*36*/].f_32 = Global_113648.f_20566.f_189[iVar0];
				}
				iVar0++;
			}
			if ((Global_55661[iVar1 /*36*/].f_32 > 0f && Global_55661[iVar1 /*36*/].f_31 > 0f) && Global_55661[iVar1 /*36*/].f_9 > 0f)
			{
				fVar2 = Global_55661[iVar1 /*36*/].f_9;
				if (fVar2 > Global_55661[iVar1 /*36*/].f_31)
				{
					Global_55661[iVar1 /*36*/].f_31 = fVar2;
				}
				if (fVar2 < Global_55661[iVar1 /*36*/].f_32)
				{
					Global_55661[iVar1 /*36*/].f_32 = fVar2;
				}
				iVar3 = 0;
				fVar4 = (Global_55661[iVar1 /*36*/].f_31 - Global_55661[iVar1 /*36*/].f_32);
				fVar5 = 0f;
				fVar10 = 2.147484E+09f;
				fVar11 = -2.147484E+09f;
				iVar3 = 15;
				while (iVar3 >= 0)
				{
					fVar6 = ((fVar4 * unk_0xD2AA6F822D3A55D2(1f, 5f)) * 0.01f);
					fVar8 = 1f;
					fVar9 = 1f;
					if (iVar3 == 15)
					{
						fVar12 = ((Global_55661[iVar1 /*36*/].f_31 - Global_55661[iVar1 /*36*/].f_9) / fVar4);
						if (fVar12 < 0.2f)
						{
							fVar8 = (fVar12 / 0.2f);
						}
						fVar13 = ((Global_55661[iVar1 /*36*/].f_9 - Global_55661[iVar1 /*36*/].f_32) / fVar4);
						if (fVar13 < 0.2f)
						{
							fVar9 = (fVar13 / 0.2f);
						}
						fVar7 = unk_0xD2AA6F822D3A55D2((-fVar6 * fVar9), (fVar6 * fVar8));
						Global_55661[iVar1 /*36*/].f_14[iVar3] = Global_55661[iVar1 /*36*/].f_9;
					}
					else
					{
						fVar14 = ((Global_55661[iVar1 /*36*/].f_31 - Global_55661[iVar1 /*36*/].f_14[iVar3 + 1]) / fVar4);
						if (fVar14 < 0.2f)
						{
							fVar8 = (fVar14 / 0.2f);
						}
						fVar15 = ((Global_55661[iVar1 /*36*/].f_14[iVar3 + 1] - Global_55661[iVar1 /*36*/].f_32) / fVar4);
						if (fVar15 < 0.2f)
						{
							fVar9 = (fVar15 / 0.2f);
						}
						fVar7 = unk_0xD2AA6F822D3A55D2((-fVar6 * fVar9), (fVar6 * fVar8));
						Global_55661[iVar1 /*36*/].f_14[iVar3] = (Global_55661[iVar1 /*36*/].f_14[iVar3 + 1] + fVar7);
					}
					fVar10 = func_93(fVar10, Global_55661[iVar1 /*36*/].f_14[iVar3]);
					fVar11 = func_92(fVar11, Global_55661[iVar1 /*36*/].f_14[iVar3]);
					fVar5 = (fVar5 + Global_55661[iVar1 /*36*/].f_14[iVar3]);
					iVar3 = (iVar3 + -1);
				}
				Global_55661[iVar1 /*36*/].f_32 = fVar10;
				Global_55661[iVar1 /*36*/].f_31 = fVar11;
				fVar5 = (fVar5 / 16f);
				Global_55661[iVar1 /*36*/].f_33 = (Global_55661[iVar1 /*36*/].f_9 - fVar5);
				Global_55661[iVar1 /*36*/].f_34 = ((Global_55661[iVar1 /*36*/].f_33 / fVar5) * 100f);
				fVar16 = func_7(iVar1);
				if (fVar16 != 1f)
				{
					fVar5 = 0f;
					fVar17 = (fVar16 - 1f);
					iVar3 = 0;
					while (iVar3 <= 15)
					{
						fVar18 = (to_float(iVar3) / 16f);
						Global_55661[iVar1 /*36*/].f_14[iVar3] = (Global_55661[iVar1 /*36*/].f_14[iVar3] * (unk_0xD2AA6F822D3A55D2(0.95f, 1.05f) + (fVar18 * fVar17)));
						if (iVar3 == 15)
						{
							Global_55661[iVar1 /*36*/].f_14[iVar3] = (Global_55661[iVar1 /*36*/].f_9 * fVar16);
						}
						fVar5 = (fVar5 + Global_55661[iVar1 /*36*/].f_14[iVar3]);
						Global_55661[iVar1 /*36*/].f_32 = func_93(Global_55661[iVar1 /*36*/].f_32, Global_55661[iVar1 /*36*/].f_14[iVar3]);
						Global_55661[iVar1 /*36*/].f_31 = func_92(Global_55661[iVar1 /*36*/].f_31, Global_55661[iVar1 /*36*/].f_14[iVar3]);
						iVar3++;
					}
					fVar5 = (fVar5 / 16f);
					Global_55661[iVar1 /*36*/].f_33 = (Global_55661[iVar1 /*36*/].f_9 - fVar5);
					Global_55661[iVar1 /*36*/].f_34 = ((Global_55661[iVar1 /*36*/].f_33 / fVar5) * 100f);
				}
			}
		}
		iVar1++;
	}
}

float func_92(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_93(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_94()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	if (!Global_113648.f_20566.f_101)
	{
		iVar0 = 0;
		while (iVar0 < 80)
		{
			if (!Global_55661[iVar0 /*36*/].f_8)
			{
				Global_55661[iVar0 /*36*/].f_9 = unk_0xD2AA6F822D3A55D2(15f, 290f);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 15)
		{
			func_28(1);
			iVar0 = 0;
			while (iVar0 < 80)
			{
				fVar2 = 0.85f;
				fVar3 = 1.15f;
				if (Global_55661[iVar0 /*36*/].f_9 < 5f)
				{
					fVar2 = 1.1f;
				}
				else if (Global_55661[iVar0 /*36*/].f_9 < 10f)
				{
					fVar2 = 0.95f;
				}
				else if (Global_55661[iVar0 /*36*/].f_9 > 285f)
				{
					fVar3 = 0.97f;
				}
				else if (Global_55661[iVar0 /*36*/].f_9 > 270f)
				{
					fVar3 = 1.05f;
				}
				Global_55661[iVar0 /*36*/].f_9 = (Global_55661[iVar0 /*36*/].f_9 * unk_0xD2AA6F822D3A55D2(fVar2, fVar3));
				Global_55661[iVar0 /*36*/].f_9 = func_93(func_92(unk_0x1D5CD3EAAA7422B0(Global_55661[iVar0 /*36*/].f_9), 3.5f), 290f);
				iVar0++;
			}
			iVar1++;
		}
		func_42();
		Global_113648.f_20566.f_101 = 1;
	}
}

void func_95()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Global_60823 = 0;
	Global_60825 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			StringCopy(&(Global_63208[iVar0 /*34*/][iVar1 /*11*/].f_1), "BSNEWS_DEFAULT", 16);
			StringCopy(&(Global_63208[iVar0 /*34*/][iVar1 /*11*/].f_5), "BSNEWS_DEFAULT", 16);
			iVar1++;
		}
		iVar0++;
	}
	func_96(55, "ECL_P_SR_H", "ECL_P_SR_C", 0, 0);
	func_96(55, "ECL_P_SF_H", "ECL_P_SF_C", 1, 0);
	func_96(55, "ECL_P_RF_H", "ECL_P_RF_C", 2, 0);
	func_96(51, "BGR_P_SR_H", "BGR_P_SR_C", 0, 0);
	func_96(51, "BGR_P_SF_H", "BGR_P_SF_C", 1, 0);
	func_96(52, "CLK_P_SR_H", "CLK_P_SR_C", 0, 0);
	func_96(52, "CLK_P_SF_H", "CLK_P_SF_C", 1, 0);
	func_96(52, "CLK_P_RF_H", "CLK_P_RF_C", 2, 0);
	func_96(48, "BEN_P_SR_H", "BEN_P_SR_C", 0, 0);
	func_96(48, "BEN_P_SF_H", "BEN_P_SF_C", 1, 0);
	func_96(48, "BEN_P_RF_H", "BEN_P_RF_C", 2, 0);
	func_96(13, "FLC_P_SR_H", "FLC_P_SR_C", 0, 0);
	func_96(13, "FLC_P_SF_H", "FLC_P_SF_C", 1, 0);
	func_96(13, "FLC_P_RF_H", "FLC_P_RF_C", 2, 0);
	func_96(64, "PRO_P_SR_H", "PRO_P_SR_C", 0, 0);
	func_96(64, "PRO_P_SF_H", "PRO_P_SF_C", 1, 0);
	func_96(64, "PRO_P_RF_H", "PRO_P_RF_C", 2, 0);
	func_96(70, "UNI_P_SR_H", "UNI_P_SR_C", 0, 0);
	func_96(70, "UNI_P_SF_H", "UNI_P_SF_C", 1, 0);
	func_96(70, "UNI_P_RF_H", "UNI_P_RF_C", 2, 0);
	func_96(60, "KRP_P_SR_H", "KRP_P_SR_C", 0, 0);
	func_96(60, "KRP_P_SF_H", "KRP_P_SF_C", 1, 0);
	func_96(60, "KRP_P_RF_H", "KRP_P_RF_C", 2, 0);
	func_96(56, "FUS_P_SR_H", "FUS_P_SR_C", 0, 0);
	func_96(56, "FUS_P_SF_H", "FUS_P_SF_C", 1, 0);
	func_96(56, "FUS_P_RF_H", "FUS_P_RF_C", 2, 0);
	func_96(58, "GOP_P_SR_H", "GOP_P_SR_C", 0, 0);
	func_96(58, "GOP_P_SF_H", "GOP_P_SF_C", 1, 0);
	func_96(58, "GOP_P_RF_H", "GOP_P_RF_C", 2, 0);
	func_96(53, "BAN_P_SR_H", "BAN_P_SR_C", 0, 0);
	func_96(53, "BAN_P_SF_H", "BAN_P_SF_C", 1, 0);
	func_96(53, "BAN_P_RF_H", "BAN_P_RF_C", 2, 0);
	func_96(62, "MAX_P_SR_H", "MAX_P_SR_C", 0, 0);
	func_96(62, "MAX_P_SF_H", "MAX_P_SF_C", 1, 0);
	func_96(62, "MAX_P_RF_H", "MAX_P_RF_C", 2, 0);
	func_96(57, "GAS_P_SR_H", "GAS_P_SR_C", 0, 0);
	func_96(57, "GAS_P_SF_H", "GAS_P_SF_C", 1, 0);
	func_96(57, "GAS_P_RF_H", "GAS_P_RF_C", 2, 0);
	func_96(59, "GRU_P_SR_H", "GRU_P_SR_C", 0, 0);
	func_96(59, "GRU_P_SF_H", "GRU_P_SF_C", 1, 0);
	func_96(59, "GRU_P_RF_H", "GRU_P_RF_C", 2, 0);
	func_96(44, "PMP_P_SR_H", "PMP_P_SR_C", 0, 0);
	func_96(44, "PMP_P_SF_H", "PMP_P_SF_C", 1, 0);
	func_96(44, "PMP_P_RF_H", "PMP_P_RF_C", 2, 0);
	iVar2 = unk_0xC5935DFB3F39785A(0, (Global_60823 - 1));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			Global_63208[iVar0 /*34*/][iVar1 /*11*/].f_10 = 5000f;
			while (!func_88(&(Global_60826[iVar2 /*14*/]), iVar0))
			{
				iVar2 = unk_0xC5935DFB3F39785A(0, (Global_60823 - 1));
				wait(2000);
			}
			Global_60826[iVar2 /*14*/].f_10 = 0f;
			iVar2 = unk_0xC5935DFB3F39785A(0, (Global_60823 - 1));
			iVar1++;
		}
		iVar0++;
	}
}

void func_96(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	if (Global_60823 == 150)
	{
		return;
	}
	Global_60826[Global_60823 /*14*/].f_11 = iParam3;
	Global_60826[Global_60823 /*14*/] = iParam4;
	StringCopy(&(Global_60826[Global_60823 /*14*/].f_1), sParam1, 16);
	StringCopy(&(Global_60826[Global_60823 /*14*/].f_5), sParam2, 16);
	Global_60826[Global_60823 /*14*/].f_9 = Global_60825;
	Global_60826[Global_60823 /*14*/].f_12 = iParam0;
	Global_60823++;
	Global_60825++;
}

void func_97()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
}

void func_98()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		Global_55661[iVar0 /*36*/].f_33 = 0f;
		Global_55661[iVar0 /*36*/].f_13 = 0;
		Global_55661[iVar0 /*36*/].f_12 = 0;
		Global_55661[iVar0 /*36*/].f_31 = 0f;
		Global_55661[iVar0 /*36*/].f_32 = 3.402823E+38f;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 16)
		{
			Global_55661[iVar0 /*36*/].f_14[iVar1] = 0f;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 204)
	{
		Global_59104[iVar0 /*7*/].f_2 = 0;
		iVar0++;
	}
	StringCopy(&(Global_55661[0 /*36*/]), "BSS_BSTR_0", 16);
	StringCopy(&(Global_55661[0 /*36*/].f_4), "BSS_BSTR_1", 16);
	Global_55661[0 /*36*/].f_8 = 1;
	Global_55661[0 /*36*/].f_35 = 0;
	StringCopy(&(Global_55661[1 /*36*/]), "BSS_BSTR_2", 16);
	StringCopy(&(Global_55661[1 /*36*/].f_4), "BSS_BSTR_3", 16);
	Global_55661[1 /*36*/].f_8 = 1;
	Global_55661[1 /*36*/].f_35 = 1;
	StringCopy(&(Global_55661[2 /*36*/]), "BSS_BSTR_4", 16);
	StringCopy(&(Global_55661[2 /*36*/].f_4), "BSS_BSTR_5", 16);
	Global_55661[2 /*36*/].f_8 = 0;
	Global_55661[2 /*36*/].f_35 = 0;
	StringCopy(&(Global_55661[3 /*36*/]), "BSS_BSTR_6", 16);
	StringCopy(&(Global_55661[3 /*36*/].f_4), "BSS_BSTR_7", 16);
	Global_55661[3 /*36*/].f_8 = 1;
	Global_55661[3 /*36*/].f_35 = 2;
	StringCopy(&(Global_55661[4 /*36*/]), "BSS_BSTR_8", 16);
	StringCopy(&(Global_55661[4 /*36*/].f_4), "BSS_BSTR_9", 16);
	Global_55661[4 /*36*/].f_8 = 1;
	Global_55661[4 /*36*/].f_35 = 3;
	StringCopy(&(Global_55661[5 /*36*/]), "BSS_BSTR_10", 16);
	StringCopy(&(Global_55661[5 /*36*/].f_4), "BSS_BSTR_11", 16);
	Global_55661[5 /*36*/].f_8 = 1;
	Global_55661[5 /*36*/].f_35 = 4;
	StringCopy(&(Global_55661[6 /*36*/]), "BSS_BSTR_12", 16);
	StringCopy(&(Global_55661[6 /*36*/].f_4), "BSS_BSTR_13", 16);
	Global_55661[6 /*36*/].f_8 = 1;
	Global_55661[6 /*36*/].f_35 = 5;
	StringCopy(&(Global_55661[7 /*36*/]), "BSS_BSTR_14", 16);
	StringCopy(&(Global_55661[7 /*36*/].f_4), "BSS_BSTR_15", 16);
	Global_55661[7 /*36*/].f_8 = 1;
	Global_55661[7 /*36*/].f_35 = 6;
	StringCopy(&(Global_55661[8 /*36*/]), "BSS_BSTR_16", 16);
	StringCopy(&(Global_55661[8 /*36*/].f_4), "BSS_BSTR_16", 16);
	Global_55661[8 /*36*/].f_8 = 1;
	Global_55661[8 /*36*/].f_35 = 7;
	StringCopy(&(Global_55661[9 /*36*/]), "BSS_BSTR_17", 16);
	StringCopy(&(Global_55661[9 /*36*/].f_4), "BSS_BSTR_18", 16);
	Global_55661[9 /*36*/].f_8 = 1;
	Global_55661[9 /*36*/].f_35 = 8;
	StringCopy(&(Global_55661[10 /*36*/]), "BSS_BSTR_19", 16);
	StringCopy(&(Global_55661[10 /*36*/].f_4), "BSS_BSTR_20", 16);
	Global_55661[10 /*36*/].f_8 = 1;
	Global_55661[10 /*36*/].f_35 = 9;
	StringCopy(&(Global_55661[11 /*36*/]), "BSS_BSTR_21", 16);
	StringCopy(&(Global_55661[11 /*36*/].f_4), "BSS_BSTR_22", 16);
	Global_55661[11 /*36*/].f_8 = 1;
	Global_55661[11 /*36*/].f_35 = 10;
	StringCopy(&(Global_55661[12 /*36*/]), "BSS_BSTR_23", 16);
	StringCopy(&(Global_55661[12 /*36*/].f_4), "BSS_BSTR_24", 16);
	Global_55661[12 /*36*/].f_8 = 1;
	Global_55661[12 /*36*/].f_35 = 11;
	StringCopy(&(Global_55661[13 /*36*/]), "BSS_BSTR_25", 16);
	StringCopy(&(Global_55661[13 /*36*/].f_4), "BSS_BSTR_26", 16);
	Global_55661[13 /*36*/].f_8 = 0;
	Global_55661[13 /*36*/].f_35 = 1;
	StringCopy(&(Global_55661[14 /*36*/]), "BSS_BSTR_27", 16);
	StringCopy(&(Global_55661[14 /*36*/].f_4), "BSS_BSTR_28", 16);
	Global_55661[14 /*36*/].f_8 = 0;
	Global_55661[14 /*36*/].f_35 = 2;
	StringCopy(&(Global_55661[15 /*36*/]), "BSS_BSTR_29", 16);
	StringCopy(&(Global_55661[15 /*36*/].f_4), "BSS_BSTR_30", 16);
	Global_55661[15 /*36*/].f_8 = 1;
	Global_55661[15 /*36*/].f_35 = 12;
	StringCopy(&(Global_55661[16 /*36*/]), "BSS_BSTR_31", 16);
	StringCopy(&(Global_55661[16 /*36*/].f_4), "BSS_BSTR_32", 16);
	Global_55661[16 /*36*/].f_8 = 0;
	Global_55661[16 /*36*/].f_35 = 3;
	StringCopy(&(Global_55661[17 /*36*/]), "BSS_BSTR_33", 16);
	StringCopy(&(Global_55661[17 /*36*/].f_4), "BSS_BSTR_34", 16);
	Global_55661[17 /*36*/].f_8 = 0;
	Global_55661[17 /*36*/].f_35 = 4;
	StringCopy(&(Global_55661[18 /*36*/]), "BSS_BSTR_35", 16);
	StringCopy(&(Global_55661[18 /*36*/].f_4), "BSS_BSTR_36", 16);
	Global_55661[18 /*36*/].f_8 = 0;
	Global_55661[18 /*36*/].f_35 = 5;
	StringCopy(&(Global_55661[19 /*36*/]), "BSS_BSTR_37", 16);
	StringCopy(&(Global_55661[19 /*36*/].f_4), "BSS_BSTR_38", 16);
	Global_55661[19 /*36*/].f_8 = 0;
	Global_55661[19 /*36*/].f_35 = 6;
	StringCopy(&(Global_55661[20 /*36*/]), "BSS_BSTR_39", 16);
	StringCopy(&(Global_55661[20 /*36*/].f_4), "BSS_BSTR_40", 16);
	Global_55661[20 /*36*/].f_8 = 1;
	Global_55661[20 /*36*/].f_35 = 13;
	StringCopy(&(Global_55661[21 /*36*/]), "BSS_BSTR_41", 16);
	StringCopy(&(Global_55661[21 /*36*/].f_4), "BSS_BSTR_42", 16);
	Global_55661[21 /*36*/].f_8 = 1;
	Global_55661[21 /*36*/].f_35 = 14;
	StringCopy(&(Global_55661[22 /*36*/]), "BSS_BSTR_43", 16);
	StringCopy(&(Global_55661[22 /*36*/].f_4), "BSS_BSTR_44", 16);
	Global_55661[22 /*36*/].f_8 = 1;
	Global_55661[22 /*36*/].f_35 = 15;
	StringCopy(&(Global_55661[23 /*36*/]), "BSS_BSTR_45", 16);
	StringCopy(&(Global_55661[23 /*36*/].f_4), "BSS_BSTR_46", 16);
	Global_55661[23 /*36*/].f_8 = 1;
	Global_55661[23 /*36*/].f_35 = 16;
	StringCopy(&(Global_55661[24 /*36*/]), "BSS_BSTR_47", 16);
	StringCopy(&(Global_55661[24 /*36*/].f_4), "BSS_BSTR_48", 16);
	Global_55661[24 /*36*/].f_8 = 0;
	Global_55661[24 /*36*/].f_35 = 7;
	StringCopy(&(Global_55661[25 /*36*/]), "BSS_BSTR_49", 16);
	StringCopy(&(Global_55661[25 /*36*/].f_4), "BSS_BSTR_50", 16);
	Global_55661[25 /*36*/].f_8 = 1;
	Global_55661[25 /*36*/].f_35 = 17;
	StringCopy(&(Global_55661[26 /*36*/]), "BSS_BSTR_51", 16);
	StringCopy(&(Global_55661[26 /*36*/].f_4), "BSS_BSTR_52", 16);
	Global_55661[26 /*36*/].f_8 = 0;
	Global_55661[26 /*36*/].f_35 = 8;
	StringCopy(&(Global_55661[27 /*36*/]), "BSS_BSTR_53", 16);
	StringCopy(&(Global_55661[27 /*36*/].f_4), "BSS_BSTR_54", 16);
	Global_55661[27 /*36*/].f_8 = 1;
	Global_55661[27 /*36*/].f_35 = 18;
	StringCopy(&(Global_55661[28 /*36*/]), "BSS_BSTR_55", 16);
	StringCopy(&(Global_55661[28 /*36*/].f_4), "BSS_BSTR_56", 16);
	Global_55661[28 /*36*/].f_8 = 1;
	Global_55661[28 /*36*/].f_35 = 19;
	StringCopy(&(Global_55661[29 /*36*/]), "BSS_BSTR_57", 16);
	StringCopy(&(Global_55661[29 /*36*/].f_4), "BSS_BSTR_58", 16);
	Global_55661[29 /*36*/].f_8 = 0;
	Global_55661[29 /*36*/].f_35 = 9;
	StringCopy(&(Global_55661[30 /*36*/]), "BSS_BSTR_59", 16);
	StringCopy(&(Global_55661[30 /*36*/].f_4), "BSS_BSTR_60", 16);
	Global_55661[30 /*36*/].f_8 = 1;
	Global_55661[30 /*36*/].f_35 = 20;
	StringCopy(&(Global_55661[31 /*36*/]), "BSS_BSTR_61", 16);
	StringCopy(&(Global_55661[31 /*36*/].f_4), "BSS_BSTR_62", 16);
	Global_55661[31 /*36*/].f_8 = 1;
	Global_55661[31 /*36*/].f_35 = 21;
	StringCopy(&(Global_55661[32 /*36*/]), "BSS_BSTR_63", 16);
	StringCopy(&(Global_55661[32 /*36*/].f_4), "BSS_BSTR_64", 16);
	Global_55661[32 /*36*/].f_8 = 1;
	Global_55661[32 /*36*/].f_35 = 22;
	StringCopy(&(Global_55661[33 /*36*/]), "BSS_BSTR_65", 16);
	StringCopy(&(Global_55661[33 /*36*/].f_4), "BSS_BSTR_66", 16);
	Global_55661[33 /*36*/].f_8 = 1;
	Global_55661[33 /*36*/].f_35 = 23;
	StringCopy(&(Global_55661[34 /*36*/]), "BSS_BSTR_67", 16);
	StringCopy(&(Global_55661[34 /*36*/].f_4), "BSS_BSTR_68", 16);
	Global_55661[34 /*36*/].f_8 = 1;
	Global_55661[34 /*36*/].f_35 = 24;
	StringCopy(&(Global_55661[35 /*36*/]), "BSS_BSTR_69", 16);
	StringCopy(&(Global_55661[35 /*36*/].f_4), "BSS_BSTR_70", 16);
	Global_55661[35 /*36*/].f_8 = 1;
	Global_55661[35 /*36*/].f_35 = 25;
	StringCopy(&(Global_55661[36 /*36*/]), "BSS_BSTR_71", 16);
	StringCopy(&(Global_55661[36 /*36*/].f_4), "BSS_BSTR_72", 16);
	Global_55661[36 /*36*/].f_8 = 1;
	Global_55661[36 /*36*/].f_35 = 26;
	StringCopy(&(Global_55661[37 /*36*/]), "BSS_BSTR_73", 16);
	StringCopy(&(Global_55661[37 /*36*/].f_4), "BSS_BSTR_74", 16);
	Global_55661[37 /*36*/].f_8 = 1;
	Global_55661[37 /*36*/].f_35 = 27;
	StringCopy(&(Global_55661[38 /*36*/]), "BSS_BSTR_75", 16);
	StringCopy(&(Global_55661[38 /*36*/].f_4), "BSS_BSTR_76", 16);
	Global_55661[38 /*36*/].f_8 = 1;
	Global_55661[38 /*36*/].f_35 = 28;
	StringCopy(&(Global_55661[39 /*36*/]), "BSS_BSTR_77", 16);
	StringCopy(&(Global_55661[39 /*36*/].f_4), "BSS_BSTR_78", 16);
	Global_55661[39 /*36*/].f_8 = 1;
	Global_55661[39 /*36*/].f_35 = 29;
	StringCopy(&(Global_55661[40 /*36*/]), "BSS_BSTR_79", 16);
	StringCopy(&(Global_55661[40 /*36*/].f_4), "BSS_BSTR_80", 16);
	Global_55661[40 /*36*/].f_8 = 0;
	Global_55661[40 /*36*/].f_35 = 10;
	StringCopy(&(Global_55661[41 /*36*/]), "BSS_BSTR_81", 16);
	StringCopy(&(Global_55661[41 /*36*/].f_4), "BSS_BSTR_82", 16);
	Global_55661[41 /*36*/].f_8 = 1;
	Global_55661[41 /*36*/].f_35 = 30;
	StringCopy(&(Global_55661[42 /*36*/]), "BSS_BSTR_83", 16);
	StringCopy(&(Global_55661[42 /*36*/].f_4), "BSS_BSTR_84", 16);
	Global_55661[42 /*36*/].f_8 = 1;
	Global_55661[42 /*36*/].f_35 = 31;
	StringCopy(&(Global_55661[43 /*36*/]), "BSS_BSTR_85", 16);
	StringCopy(&(Global_55661[43 /*36*/].f_4), "BSS_BSTR_86", 16);
	Global_55661[43 /*36*/].f_8 = 1;
	Global_55661[43 /*36*/].f_35 = 32;
	StringCopy(&(Global_55661[44 /*36*/]), "BSS_BSTR_87", 16);
	StringCopy(&(Global_55661[44 /*36*/].f_4), "BSS_BSTR_88", 16);
	Global_55661[44 /*36*/].f_8 = 1;
	Global_55661[44 /*36*/].f_35 = 33;
	StringCopy(&(Global_55661[45 /*36*/]), "BSS_BSTR_89", 16);
	StringCopy(&(Global_55661[45 /*36*/].f_4), "BSS_BSTR_90", 16);
	Global_55661[45 /*36*/].f_8 = 1;
	Global_55661[45 /*36*/].f_35 = 34;
	StringCopy(&(Global_55661[46 /*36*/]), "BSS_BSTR_91", 16);
	StringCopy(&(Global_55661[46 /*36*/].f_4), "BSS_BSTR_92", 16);
	Global_55661[46 /*36*/].f_8 = 1;
	Global_55661[46 /*36*/].f_35 = 35;
	StringCopy(&(Global_55661[47 /*36*/]), "BSS_BSTR_93", 16);
	StringCopy(&(Global_55661[47 /*36*/].f_4), "BSS_BSTR_94", 16);
	Global_55661[47 /*36*/].f_8 = 0;
	Global_55661[47 /*36*/].f_35 = 11;
	StringCopy(&(Global_55661[48 /*36*/]), "BSS_BSTR_95", 16);
	StringCopy(&(Global_55661[48 /*36*/].f_4), "BSS_BSTR_96", 16);
	Global_55661[48 /*36*/].f_8 = 0;
	Global_55661[48 /*36*/].f_35 = 12;
	StringCopy(&(Global_55661[49 /*36*/]), "BSS_BSTR_97", 16);
	StringCopy(&(Global_55661[49 /*36*/].f_4), "BSS_BSTR_98", 16);
	Global_55661[49 /*36*/].f_8 = 0;
	Global_55661[49 /*36*/].f_35 = 13;
	StringCopy(&(Global_55661[50 /*36*/]), "BSS_BSTR_99", 16);
	StringCopy(&(Global_55661[50 /*36*/].f_4), "BSS_BSTR_100", 16);
	Global_55661[50 /*36*/].f_8 = 0;
	Global_55661[50 /*36*/].f_35 = 14;
	StringCopy(&(Global_55661[51 /*36*/]), "BSS_BSTR_101", 16);
	StringCopy(&(Global_55661[51 /*36*/].f_4), "BSS_BSTR_102", 16);
	Global_55661[51 /*36*/].f_8 = 0;
	Global_55661[51 /*36*/].f_35 = 15;
	StringCopy(&(Global_55661[52 /*36*/]), "BSS_BSTR_103", 16);
	StringCopy(&(Global_55661[52 /*36*/].f_4), "BSS_BSTR_104", 16);
	Global_55661[52 /*36*/].f_8 = 0;
	Global_55661[52 /*36*/].f_35 = 16;
	StringCopy(&(Global_55661[53 /*36*/]), "BSS_BSTR_105", 16);
	StringCopy(&(Global_55661[53 /*36*/].f_4), "BSS_BSTR_106", 16);
	Global_55661[53 /*36*/].f_8 = 0;
	Global_55661[53 /*36*/].f_35 = 17;
	StringCopy(&(Global_55661[54 /*36*/]), "BSS_BSTR_107", 16);
	StringCopy(&(Global_55661[54 /*36*/].f_4), "BSS_BSTR_108", 16);
	Global_55661[54 /*36*/].f_8 = 0;
	Global_55661[54 /*36*/].f_35 = 18;
	StringCopy(&(Global_55661[55 /*36*/]), "BSS_BSTR_109", 16);
	StringCopy(&(Global_55661[55 /*36*/].f_4), "BSS_BSTR_110", 16);
	Global_55661[55 /*36*/].f_8 = 0;
	Global_55661[55 /*36*/].f_35 = 19;
	StringCopy(&(Global_55661[56 /*36*/]), "BSS_BSTR_111", 16);
	StringCopy(&(Global_55661[56 /*36*/].f_4), "BSS_BSTR_112", 16);
	Global_55661[56 /*36*/].f_8 = 0;
	Global_55661[56 /*36*/].f_35 = 20;
	StringCopy(&(Global_55661[57 /*36*/]), "BSS_BSTR_113", 16);
	StringCopy(&(Global_55661[57 /*36*/].f_4), "BSS_BSTR_114", 16);
	Global_55661[57 /*36*/].f_8 = 0;
	Global_55661[57 /*36*/].f_35 = 21;
	StringCopy(&(Global_55661[58 /*36*/]), "BSS_BSTR_115", 16);
	StringCopy(&(Global_55661[58 /*36*/].f_4), "BSS_BSTR_116", 16);
	Global_55661[58 /*36*/].f_8 = 0;
	Global_55661[58 /*36*/].f_35 = 22;
	StringCopy(&(Global_55661[59 /*36*/]), "BSS_BSTR_117", 16);
	StringCopy(&(Global_55661[59 /*36*/].f_4), "BSS_BSTR_118", 16);
	Global_55661[59 /*36*/].f_8 = 0;
	Global_55661[59 /*36*/].f_35 = 23;
	StringCopy(&(Global_55661[60 /*36*/]), "BSS_BSTR_119", 16);
	StringCopy(&(Global_55661[60 /*36*/].f_4), "BSS_BSTR_120", 16);
	Global_55661[60 /*36*/].f_8 = 0;
	Global_55661[60 /*36*/].f_35 = 24;
	StringCopy(&(Global_55661[61 /*36*/]), "BSS_BSTR_121", 16);
	StringCopy(&(Global_55661[61 /*36*/].f_4), "BSS_BSTR_122", 16);
	Global_55661[61 /*36*/].f_8 = 0;
	Global_55661[61 /*36*/].f_35 = 25;
	StringCopy(&(Global_55661[62 /*36*/]), "BSS_BSTR_123", 16);
	StringCopy(&(Global_55661[62 /*36*/].f_4), "BSS_BSTR_124", 16);
	Global_55661[62 /*36*/].f_8 = 0;
	Global_55661[62 /*36*/].f_35 = 26;
	StringCopy(&(Global_55661[63 /*36*/]), "BSS_BSTR_125", 16);
	StringCopy(&(Global_55661[63 /*36*/].f_4), "BSS_BSTR_126", 16);
	Global_55661[63 /*36*/].f_8 = 0;
	Global_55661[63 /*36*/].f_35 = 27;
	StringCopy(&(Global_55661[64 /*36*/]), "BSS_BSTR_127", 16);
	StringCopy(&(Global_55661[64 /*36*/].f_4), "BSS_BSTR_128", 16);
	Global_55661[64 /*36*/].f_8 = 0;
	Global_55661[64 /*36*/].f_35 = 28;
	StringCopy(&(Global_55661[65 /*36*/]), "BSS_BSTR_129", 16);
	StringCopy(&(Global_55661[65 /*36*/].f_4), "BSS_BSTR_130", 16);
	Global_55661[65 /*36*/].f_8 = 0;
	Global_55661[65 /*36*/].f_35 = 29;
	StringCopy(&(Global_55661[66 /*36*/]), "BSS_BSTR_131", 16);
	StringCopy(&(Global_55661[66 /*36*/].f_4), "BSS_BSTR_132", 16);
	Global_55661[66 /*36*/].f_8 = 0;
	Global_55661[66 /*36*/].f_35 = 30;
	StringCopy(&(Global_55661[67 /*36*/]), "BSS_BSTR_133", 16);
	StringCopy(&(Global_55661[67 /*36*/].f_4), "BSS_BSTR_134", 16);
	Global_55661[67 /*36*/].f_8 = 0;
	Global_55661[67 /*36*/].f_35 = 31;
	StringCopy(&(Global_55661[68 /*36*/]), "BSS_BSTR_135", 16);
	StringCopy(&(Global_55661[68 /*36*/].f_4), "BSS_BSTR_136", 16);
	Global_55661[68 /*36*/].f_8 = 0;
	Global_55661[68 /*36*/].f_35 = 32;
	StringCopy(&(Global_55661[69 /*36*/]), "BSS_BSTR_137", 16);
	StringCopy(&(Global_55661[69 /*36*/].f_4), "BSS_BSTR_138", 16);
	Global_55661[69 /*36*/].f_8 = 0;
	Global_55661[69 /*36*/].f_35 = 33;
	StringCopy(&(Global_55661[70 /*36*/]), "BSS_BSTR_139", 16);
	StringCopy(&(Global_55661[70 /*36*/].f_4), "BSS_BSTR_140", 16);
	Global_55661[70 /*36*/].f_8 = 0;
	Global_55661[70 /*36*/].f_35 = 34;
	StringCopy(&(Global_55661[71 /*36*/]), "BSS_BSTR_141", 16);
	StringCopy(&(Global_55661[71 /*36*/].f_4), "BSS_BSTR_142", 16);
	Global_55661[71 /*36*/].f_8 = 1;
	Global_55661[71 /*36*/].f_35 = 36;
	StringCopy(&(Global_55661[72 /*36*/]), "BSS_BSTR_143", 16);
	StringCopy(&(Global_55661[72 /*36*/].f_4), "BSS_BSTR_144", 16);
	Global_55661[72 /*36*/].f_8 = 0;
	Global_55661[72 /*36*/].f_35 = 35;
	StringCopy(&(Global_55661[73 /*36*/]), "BSS_BSTR_145", 16);
	StringCopy(&(Global_55661[73 /*36*/].f_4), "BSS_BSTR_146", 16);
	Global_55661[73 /*36*/].f_8 = 0;
	Global_55661[73 /*36*/].f_35 = 36;
	StringCopy(&(Global_55661[74 /*36*/]), "BSS_BSTR_147", 16);
	StringCopy(&(Global_55661[74 /*36*/].f_4), "BSS_BSTR_148", 16);
	Global_55661[74 /*36*/].f_8 = 0;
	Global_55661[74 /*36*/].f_35 = 37;
	StringCopy(&(Global_55661[75 /*36*/]), "BSS_BSTR_149", 16);
	StringCopy(&(Global_55661[75 /*36*/].f_4), "BSS_BSTR_150", 16);
	Global_55661[75 /*36*/].f_8 = 0;
	Global_55661[75 /*36*/].f_35 = 38;
	StringCopy(&(Global_55661[76 /*36*/]), "BSS_BSTR_151", 16);
	StringCopy(&(Global_55661[76 /*36*/].f_4), "BSS_BSTR_152", 16);
	Global_55661[76 /*36*/].f_8 = 1;
	Global_55661[76 /*36*/].f_35 = 37;
	StringCopy(&(Global_55661[77 /*36*/]), "BSS_BSTR_153", 16);
	StringCopy(&(Global_55661[77 /*36*/].f_4), "BSS_BSTR_154", 16);
	Global_55661[77 /*36*/].f_8 = 1;
	Global_55661[77 /*36*/].f_35 = 38;
	StringCopy(&(Global_55661[78 /*36*/]), "BSS_BSTR_155", 16);
	StringCopy(&(Global_55661[78 /*36*/].f_4), "BSS_BSTR_156", 16);
	Global_55661[78 /*36*/].f_8 = 0;
	Global_55661[78 /*36*/].f_35 = 39;
	StringCopy(&(Global_55661[79 /*36*/]), "BSS_BSTR_157", 16);
	StringCopy(&(Global_55661[79 /*36*/].f_4), "BSS_BSTR_158", 16);
	Global_55661[79 /*36*/].f_8 = 0;
	Global_55661[79 /*36*/].f_35 = 40;
	Global_58816[0 /*7*/].f_2 = 1f;
	Global_58816[0 /*7*/].f_1 = 1f;
	Global_58816[0 /*7*/].f_3 = 1000f;
	Global_58816[0 /*7*/].f_4 = 3.5f;
	Global_58816[0 /*7*/].f_5 = 3.5f;
	Global_58816[0 /*7*/].f_6 = 0.1f;
	Global_58816[1 /*7*/].f_2 = 1f;
	Global_58816[1 /*7*/].f_1 = 1f;
	Global_58816[1 /*7*/].f_3 = 1000f;
	Global_58816[1 /*7*/].f_4 = 3.5f;
	Global_58816[1 /*7*/].f_5 = 3.5f;
	Global_58816[1 /*7*/].f_6 = 0.1f;
	Global_58816[2 /*7*/].f_2 = 1f;
	Global_58816[2 /*7*/].f_1 = 1f;
	Global_58816[2 /*7*/].f_3 = 1000f;
	Global_58816[2 /*7*/].f_4 = 3.5f;
	Global_58816[2 /*7*/].f_5 = 3.5f;
	Global_58816[2 /*7*/].f_6 = 0.1f;
	Global_58816[3 /*7*/].f_2 = 1f;
	Global_58816[3 /*7*/].f_1 = 1f;
	Global_58816[3 /*7*/].f_3 = 1000f;
	Global_58816[3 /*7*/].f_4 = 3.5f;
	Global_58816[3 /*7*/].f_5 = 3.5f;
	Global_58816[3 /*7*/].f_6 = 0.1f;
	Global_58816[4 /*7*/].f_2 = 1f;
	Global_58816[4 /*7*/].f_1 = 1f;
	Global_58816[4 /*7*/].f_3 = 1000f;
	Global_58816[4 /*7*/].f_4 = 3.5f;
	Global_58816[4 /*7*/].f_5 = 3.5f;
	Global_58816[4 /*7*/].f_6 = 0.1f;
	Global_58816[5 /*7*/].f_2 = 1f;
	Global_58816[5 /*7*/].f_1 = 1f;
	Global_58816[5 /*7*/].f_3 = 1000f;
	Global_58816[5 /*7*/].f_4 = 3.5f;
	Global_58816[5 /*7*/].f_5 = 3.5f;
	Global_58816[5 /*7*/].f_6 = 0.1f;
	Global_58816[6 /*7*/].f_2 = 1f;
	Global_58816[6 /*7*/].f_1 = 1f;
	Global_58816[6 /*7*/].f_3 = 1000f;
	Global_58816[6 /*7*/].f_4 = 3.5f;
	Global_58816[6 /*7*/].f_5 = 3.5f;
	Global_58816[6 /*7*/].f_6 = 0.1f;
	Global_58816[7 /*7*/].f_2 = 1f;
	Global_58816[7 /*7*/].f_1 = 1f;
	Global_58816[7 /*7*/].f_3 = 1000f;
	Global_58816[7 /*7*/].f_4 = 3.5f;
	Global_58816[7 /*7*/].f_5 = 3.5f;
	Global_58816[7 /*7*/].f_6 = 0.1f;
	Global_58816[8 /*7*/].f_2 = 1f;
	Global_58816[8 /*7*/].f_1 = 1f;
	Global_58816[8 /*7*/].f_3 = 1000f;
	Global_58816[8 /*7*/].f_4 = 3.5f;
	Global_58816[8 /*7*/].f_5 = 3.5f;
	Global_58816[8 /*7*/].f_6 = 0.1f;
	Global_58816[9 /*7*/].f_2 = 1f;
	Global_58816[9 /*7*/].f_1 = 1f;
	Global_58816[9 /*7*/].f_3 = 1000f;
	Global_58816[9 /*7*/].f_4 = 3.5f;
	Global_58816[9 /*7*/].f_5 = 3.5f;
	Global_58816[9 /*7*/].f_6 = 0.1f;
	Global_58816[10 /*7*/].f_2 = 1f;
	Global_58816[10 /*7*/].f_1 = 1f;
	Global_58816[10 /*7*/].f_3 = 1000f;
	Global_58816[10 /*7*/].f_4 = 3.5f;
	Global_58816[10 /*7*/].f_5 = 3.5f;
	Global_58816[10 /*7*/].f_6 = 0.1f;
	Global_58816[11 /*7*/].f_2 = 1f;
	Global_58816[11 /*7*/].f_1 = 1f;
	Global_58816[11 /*7*/].f_3 = 1000f;
	Global_58816[11 /*7*/].f_4 = 3.5f;
	Global_58816[11 /*7*/].f_5 = 3.5f;
	Global_58816[11 /*7*/].f_6 = 0.1f;
	Global_58816[12 /*7*/].f_2 = 1f;
	Global_58816[12 /*7*/].f_1 = 1f;
	Global_58816[12 /*7*/].f_3 = 1000f;
	Global_58816[12 /*7*/].f_4 = 3.5f;
	Global_58816[12 /*7*/].f_5 = 3.5f;
	Global_58816[12 /*7*/].f_6 = 0.1f;
	Global_58816[13 /*7*/].f_2 = 1f;
	Global_58816[13 /*7*/].f_1 = 1f;
	Global_58816[13 /*7*/].f_3 = 1000f;
	Global_58816[13 /*7*/].f_4 = 3.5f;
	Global_58816[13 /*7*/].f_5 = 3.5f;
	Global_58816[13 /*7*/].f_6 = 0.1f;
	Global_58816[14 /*7*/].f_2 = 1f;
	Global_58816[14 /*7*/].f_1 = 1f;
	Global_58816[14 /*7*/].f_3 = 1000f;
	Global_58816[14 /*7*/].f_4 = 3.5f;
	Global_58816[14 /*7*/].f_5 = 3.5f;
	Global_58816[14 /*7*/].f_6 = 0.1f;
	Global_58816[15 /*7*/].f_2 = 1f;
	Global_58816[15 /*7*/].f_1 = 1f;
	Global_58816[15 /*7*/].f_3 = 1000f;
	Global_58816[15 /*7*/].f_4 = 3.5f;
	Global_58816[15 /*7*/].f_5 = 3.5f;
	Global_58816[15 /*7*/].f_6 = 0.1f;
	Global_58816[16 /*7*/].f_2 = 1f;
	Global_58816[16 /*7*/].f_1 = 1f;
	Global_58816[16 /*7*/].f_3 = 1000f;
	Global_58816[16 /*7*/].f_4 = 3.5f;
	Global_58816[16 /*7*/].f_5 = 3.5f;
	Global_58816[16 /*7*/].f_6 = 0.1f;
	Global_58816[17 /*7*/].f_2 = 1f;
	Global_58816[17 /*7*/].f_1 = 1f;
	Global_58816[17 /*7*/].f_3 = 1000f;
	Global_58816[17 /*7*/].f_4 = 3.5f;
	Global_58816[17 /*7*/].f_5 = 3.5f;
	Global_58816[17 /*7*/].f_6 = 0.1f;
	Global_58816[18 /*7*/].f_2 = 1f;
	Global_58816[18 /*7*/].f_1 = 1f;
	Global_58816[18 /*7*/].f_3 = 1000f;
	Global_58816[18 /*7*/].f_4 = 3.5f;
	Global_58816[18 /*7*/].f_5 = 3.5f;
	Global_58816[18 /*7*/].f_6 = 0.1f;
	Global_58816[19 /*7*/].f_2 = 1f;
	Global_58816[19 /*7*/].f_1 = 1f;
	Global_58816[19 /*7*/].f_3 = 1000f;
	Global_58816[19 /*7*/].f_4 = 3.5f;
	Global_58816[19 /*7*/].f_5 = 3.5f;
	Global_58816[19 /*7*/].f_6 = 0.1f;
	Global_58816[20 /*7*/].f_2 = 1f;
	Global_58816[20 /*7*/].f_1 = 1f;
	Global_58816[20 /*7*/].f_3 = 1000f;
	Global_58816[20 /*7*/].f_4 = 3.5f;
	Global_58816[20 /*7*/].f_5 = 3.5f;
	Global_58816[20 /*7*/].f_6 = 0.1f;
	Global_58816[21 /*7*/].f_2 = 1f;
	Global_58816[21 /*7*/].f_1 = 1f;
	Global_58816[21 /*7*/].f_3 = 1000f;
	Global_58816[21 /*7*/].f_4 = 3.5f;
	Global_58816[21 /*7*/].f_5 = 3.5f;
	Global_58816[21 /*7*/].f_6 = 0.1f;
	Global_58816[22 /*7*/].f_2 = 1f;
	Global_58816[22 /*7*/].f_1 = 1f;
	Global_58816[22 /*7*/].f_3 = 1000f;
	Global_58816[22 /*7*/].f_4 = 3.5f;
	Global_58816[22 /*7*/].f_5 = 3.5f;
	Global_58816[22 /*7*/].f_6 = 0.1f;
	Global_58816[23 /*7*/].f_2 = 1f;
	Global_58816[23 /*7*/].f_1 = 1f;
	Global_58816[23 /*7*/].f_3 = 1000f;
	Global_58816[23 /*7*/].f_4 = 3.5f;
	Global_58816[23 /*7*/].f_5 = 3.5f;
	Global_58816[23 /*7*/].f_6 = 0.1f;
	Global_58816[24 /*7*/].f_2 = 1f;
	Global_58816[24 /*7*/].f_1 = 1f;
	Global_58816[24 /*7*/].f_3 = 1000f;
	Global_58816[24 /*7*/].f_4 = 3.5f;
	Global_58816[24 /*7*/].f_5 = 3.5f;
	Global_58816[24 /*7*/].f_6 = 0.1f;
	Global_58816[25 /*7*/].f_2 = 1f;
	Global_58816[25 /*7*/].f_1 = 1f;
	Global_58816[25 /*7*/].f_3 = 1000f;
	Global_58816[25 /*7*/].f_4 = 3.5f;
	Global_58816[25 /*7*/].f_5 = 3.5f;
	Global_58816[25 /*7*/].f_6 = 0.1f;
	Global_58816[26 /*7*/].f_2 = 1f;
	Global_58816[26 /*7*/].f_1 = 1f;
	Global_58816[26 /*7*/].f_3 = 1000f;
	Global_58816[26 /*7*/].f_4 = 3.5f;
	Global_58816[26 /*7*/].f_5 = 3.5f;
	Global_58816[26 /*7*/].f_6 = 0.1f;
	Global_58816[27 /*7*/].f_2 = 1f;
	Global_58816[27 /*7*/].f_1 = 1f;
	Global_58816[27 /*7*/].f_3 = 1000f;
	Global_58816[27 /*7*/].f_4 = 3.5f;
	Global_58816[27 /*7*/].f_5 = 3.5f;
	Global_58816[27 /*7*/].f_6 = 0.1f;
	Global_58816[28 /*7*/].f_2 = 1f;
	Global_58816[28 /*7*/].f_1 = 1f;
	Global_58816[28 /*7*/].f_3 = 1000f;
	Global_58816[28 /*7*/].f_4 = 3.5f;
	Global_58816[28 /*7*/].f_5 = 3.5f;
	Global_58816[28 /*7*/].f_6 = 0.1f;
	Global_58816[29 /*7*/].f_2 = 1f;
	Global_58816[29 /*7*/].f_1 = 1f;
	Global_58816[29 /*7*/].f_3 = 1000f;
	Global_58816[29 /*7*/].f_4 = 3.5f;
	Global_58816[29 /*7*/].f_5 = 3.5f;
	Global_58816[29 /*7*/].f_6 = 0.1f;
	Global_58816[30 /*7*/].f_2 = 1f;
	Global_58816[30 /*7*/].f_1 = 1f;
	Global_58816[30 /*7*/].f_3 = 1000f;
	Global_58816[30 /*7*/].f_4 = 3.5f;
	Global_58816[30 /*7*/].f_5 = 3.5f;
	Global_58816[30 /*7*/].f_6 = 0.1f;
	Global_58816[31 /*7*/].f_2 = 1f;
	Global_58816[31 /*7*/].f_1 = 1f;
	Global_58816[31 /*7*/].f_3 = 1000f;
	Global_58816[31 /*7*/].f_4 = 3.5f;
	Global_58816[31 /*7*/].f_5 = 3.5f;
	Global_58816[31 /*7*/].f_6 = 0.1f;
	Global_58816[32 /*7*/].f_2 = 1f;
	Global_58816[32 /*7*/].f_1 = 1f;
	Global_58816[32 /*7*/].f_3 = 1000f;
	Global_58816[32 /*7*/].f_4 = 3.5f;
	Global_58816[32 /*7*/].f_5 = 3.5f;
	Global_58816[32 /*7*/].f_6 = 0.1f;
	Global_58816[33 /*7*/].f_2 = 1f;
	Global_58816[33 /*7*/].f_1 = 1f;
	Global_58816[33 /*7*/].f_3 = 1000f;
	Global_58816[33 /*7*/].f_4 = 3.5f;
	Global_58816[33 /*7*/].f_5 = 3.5f;
	Global_58816[33 /*7*/].f_6 = 0.1f;
	Global_58816[34 /*7*/].f_2 = 1f;
	Global_58816[34 /*7*/].f_1 = 1f;
	Global_58816[34 /*7*/].f_3 = 1000f;
	Global_58816[34 /*7*/].f_4 = 3.5f;
	Global_58816[34 /*7*/].f_5 = 3.5f;
	Global_58816[34 /*7*/].f_6 = 0.1f;
	Global_58816[35 /*7*/].f_2 = 1f;
	Global_58816[35 /*7*/].f_1 = 1f;
	Global_58816[35 /*7*/].f_3 = 1000f;
	Global_58816[35 /*7*/].f_4 = 3.5f;
	Global_58816[35 /*7*/].f_5 = 3.5f;
	Global_58816[35 /*7*/].f_6 = 0.1f;
	Global_58816[36 /*7*/].f_2 = 1f;
	Global_58816[36 /*7*/].f_1 = 1f;
	Global_58816[36 /*7*/].f_3 = 1000f;
	Global_58816[36 /*7*/].f_4 = 3.5f;
	Global_58816[36 /*7*/].f_5 = 3.5f;
	Global_58816[36 /*7*/].f_6 = 0.1f;
	Global_58816[37 /*7*/].f_2 = 1f;
	Global_58816[37 /*7*/].f_1 = 1f;
	Global_58816[37 /*7*/].f_3 = 1000f;
	Global_58816[37 /*7*/].f_4 = 3.5f;
	Global_58816[37 /*7*/].f_5 = 3.5f;
	Global_58816[37 /*7*/].f_6 = 0.1f;
	Global_58816[38 /*7*/].f_2 = 1f;
	Global_58816[38 /*7*/].f_1 = 1f;
	Global_58816[38 /*7*/].f_3 = 1000f;
	Global_58816[38 /*7*/].f_4 = 3.5f;
	Global_58816[38 /*7*/].f_5 = 3.5f;
	Global_58816[38 /*7*/].f_6 = 0.1f;
	Global_58816[39 /*7*/].f_2 = 1f;
	Global_58816[39 /*7*/].f_1 = 1f;
	Global_58816[39 /*7*/].f_3 = 1000f;
	Global_58816[39 /*7*/].f_4 = 3.5f;
	Global_58816[39 /*7*/].f_5 = 3.5f;
	Global_58816[39 /*7*/].f_6 = 0.1f;
	Global_58816[40 /*7*/].f_2 = 1f;
	Global_58816[40 /*7*/].f_1 = 1f;
	Global_58816[40 /*7*/].f_3 = 1000f;
	Global_58816[40 /*7*/].f_4 = 3.5f;
	Global_58816[40 /*7*/].f_5 = 3.5f;
	Global_58816[40 /*7*/].f_6 = 0.1f;
	Global_59104[0 /*7*/].f_1 = joaat("sm_brvecdesbfa");
	Global_59104[0 /*7*/] = 1;
	Global_59104[1 /*7*/].f_1 = joaat("sm_brvecdesbru");
	Global_59104[1 /*7*/] = 1;
	Global_59104[3 /*7*/].f_1 = joaat("sm_brvecdeslsc");
	Global_59104[3 /*7*/] = 1;
	Global_59104[4 /*7*/].f_1 = joaat("sm_brvecdeslst");
	Global_59104[4 /*7*/] = 1;
	Global_59104[5 /*7*/].f_1 = joaat("sm_brvecdesltd");
	Global_59104[5 /*7*/] = 1;
	Global_59104[6 /*7*/].f_1 = joaat("sm_brvecdesmai");
	Global_59104[6 /*7*/] = 1;
	Global_59104[7 /*7*/].f_1 = joaat("sm_brvecdesron");
	Global_59104[7 /*7*/] = 1;
	Global_59104[8 /*7*/].f_1 = joaat("sm_brvecdessht");
	Global_59104[8 /*7*/] = 1;
	Global_59104[9 /*7*/].f_1 = joaat("sm_brvecdesuma");
	Global_59104[9 /*7*/] = 1;
	Global_59104[10 /*7*/].f_1 = joaat("sm_brvecdesvap");
	Global_59104[10 /*7*/] = 1;
	Global_59104[11 /*7*/].f_1 = joaat("sm_brvecdeshvy");
	Global_59104[11 /*7*/] = 1;
	Global_59104[12 /*7*/].f_1 = joaat("sm_vecbuybfa");
	Global_59104[12 /*7*/] = 1;
	Global_59104[13 /*7*/].f_1 = joaat("sm_vecbuybru");
	Global_59104[13 /*7*/] = 1;
	Global_59104[15 /*7*/].f_1 = joaat("sm_vecbuymai");
	Global_59104[15 /*7*/] = 1;
	Global_59104[16 /*7*/].f_1 = joaat("sm_vecbuysht");
	Global_59104[16 /*7*/] = 1;
	Global_59104[17 /*7*/].f_1 = joaat("sm_vecbuyuma");
	Global_59104[17 /*7*/] = 1;
	Global_59104[18 /*7*/].f_1 = joaat("sm_vecbuyvap");
	Global_59104[18 /*7*/] = 1;
	Global_59104[19 /*7*/].f_1 = joaat("sm_vecbuyhvy");
	Global_59104[19 /*7*/] = 1;
	Global_59104[20 /*7*/].f_1 = joaat("sm_disdrivbfa");
	Global_59104[20 /*7*/] = 1;
	Global_59104[21 /*7*/].f_1 = joaat("sm_disdrivbru");
	Global_59104[21 /*7*/] = 1;
	Global_59104[23 /*7*/].f_1 = joaat("sm_disdrivlst");
	Global_59104[23 /*7*/] = 1;
	Global_59104[24 /*7*/].f_1 = joaat("sm_disdrivmai");
	Global_59104[24 /*7*/] = 1;
	Global_59104[25 /*7*/].f_1 = joaat("sm_disdrivsht");
	Global_59104[25 /*7*/] = 1;
	Global_59104[26 /*7*/].f_1 = joaat("sm_disdrivuma");
	Global_59104[26 /*7*/] = 1;
	Global_59104[27 /*7*/].f_1 = joaat("sm_disdrivvap");
	Global_59104[27 /*7*/] = 1;
	Global_59104[28 /*7*/].f_1 = joaat("sm_disdrivhvy");
	Global_59104[28 /*7*/] = 1;
	Global_59104[30 /*7*/].f_1 = joaat("sm_vecmodlsc");
	Global_59104[30 /*7*/] = 1;
	Global_59104[31 /*7*/].f_1 = joaat("sm_vecstolbfa");
	Global_59104[31 /*7*/] = 1;
	Global_59104[32 /*7*/].f_1 = joaat("sm_vecstolbru");
	Global_59104[32 /*7*/] = 1;
	Global_59104[34 /*7*/].f_1 = joaat("sm_vecstollst");
	Global_59104[34 /*7*/] = 1;
	Global_59104[35 /*7*/].f_1 = joaat("sm_vecstolmai");
	Global_59104[35 /*7*/] = 1;
	Global_59104[36 /*7*/].f_1 = joaat("sm_vecstolsht");
	Global_59104[36 /*7*/] = 1;
	Global_59104[37 /*7*/].f_1 = joaat("sm_vecstoluma");
	Global_59104[37 /*7*/] = 1;
	Global_59104[38 /*7*/].f_1 = joaat("sm_vecstolvap");
	Global_59104[38 /*7*/] = 1;
	Global_59104[39 /*7*/].f_1 = joaat("sm_vecstolhvy");
	Global_59104[39 /*7*/] = 1;
	Global_59104[40 /*7*/].f_1 = joaat("sm_vecdmgbfa");
	Global_59104[40 /*7*/] = 1;
	Global_59104[41 /*7*/].f_1 = joaat("sm_vecdmgbru");
	Global_59104[41 /*7*/] = 1;
	Global_59104[43 /*7*/].f_1 = joaat("sm_vecdmgmai");
	Global_59104[43 /*7*/] = 1;
	Global_59104[44 /*7*/].f_1 = joaat("sm_vecdmgsht");
	Global_59104[44 /*7*/] = 1;
	Global_59104[45 /*7*/].f_1 = joaat("sm_vecdmguma");
	Global_59104[45 /*7*/] = 1;
	Global_59104[46 /*7*/].f_1 = joaat("sm_vecdmgvap");
	Global_59104[46 /*7*/] = 1;
	Global_59104[47 /*7*/].f_1 = joaat("sm_vecdmghvy");
	Global_59104[47 /*7*/] = 1;
	Global_59104[48 /*7*/].f_1 = joaat("sm_vecpedkil");
	Global_59104[48 /*7*/] = 1;
	Global_59104[49 /*7*/].f_1 = joaat("sm_wepbuyshr");
	Global_59104[49 /*7*/] = 1;
	Global_59104[50 /*7*/].f_1 = joaat("sm_wepbuyhal");
	Global_59104[50 /*7*/] = 1;
	Global_59104[51 /*7*/].f_1 = joaat("sm_weptakevom");
	Global_59104[51 /*7*/] = 1;
	Global_59104[52 /*7*/].f_1 = joaat("sm_weptakeshr");
	Global_59104[52 /*7*/] = 1;
	Global_59104[53 /*7*/].f_1 = joaat("sm_weptakehal");
	Global_59104[53 /*7*/] = 1;
	Global_59104[54 /*7*/].f_1 = joaat("sm_kilcopvom");
	Global_59104[54 /*7*/] = 1;
	Global_59104[55 /*7*/].f_1 = joaat("sm_kilcopshr");
	Global_59104[55 /*7*/] = 1;
	Global_59104[56 /*7*/].f_1 = joaat("sm_kilcophal");
	Global_59104[56 /*7*/] = 1;
	Global_59104[57 /*7*/].f_1 = joaat("sm_kilcrimvom");
	Global_59104[57 /*7*/] = 1;
	Global_59104[58 /*7*/].f_1 = joaat("sm_kilcrimshr");
	Global_59104[58 /*7*/] = 1;
	Global_59104[59 /*7*/].f_1 = joaat("sm_kilcrimhal");
	Global_59104[59 /*7*/] = 1;
	Global_59104[60 /*7*/].f_1 = joaat("sm_kilcivmai");
	Global_59104[60 /*7*/] = 1;
	Global_59104[61 /*7*/].f_1 = joaat("sm_kilcivsht");
	Global_59104[61 /*7*/] = 1;
	Global_59104[62 /*7*/].f_1 = joaat("sm_kilcivuma");
	Global_59104[62 /*7*/] = 1;
	Global_59104[63 /*7*/].f_1 = joaat("sm_kilcivvom");
	Global_59104[63 /*7*/] = 1;
	Global_59104[64 /*7*/].f_1 = joaat("sm_kilcivshr");
	Global_59104[64 /*7*/] = 1;
	Global_59104[65 /*7*/].f_1 = joaat("sm_kilcivhal");
	Global_59104[65 /*7*/] = 1;
	Global_59104[67 /*7*/].f_1 = joaat("sm_venusespu");
	Global_59104[67 /*7*/] = 1;
	Global_59104[68 /*7*/].f_1 = joaat("sm_newdam");
	Global_59104[68 /*7*/] = 1;
	Global_59104[69 /*7*/].f_1 = joaat("sm_hpkil");
	Global_59104[69 /*7*/] = 1;
	Global_59104[70 /*7*/].f_1 = joaat("sm_pubclub");
	Global_59104[70 /*7*/] = 1;
	Global_59104[71 /*7*/].f_1 = joaat("sm_tdrnk");
	Global_59104[71 /*7*/] = 1;
	Global_59104[72 /*7*/].f_1 = joaat("sm_frnpub");
	Global_59104[72 /*7*/] = 1;
	Global_59104[73 /*7*/].f_1 = joaat("sm_drnkcrm");
	Global_59104[73 /*7*/] = 1;
	Global_59104[74 /*7*/].f_1 = joaat("sm_ramcom");
	Global_59104[74 /*7*/] = 1;
	Global_59104[76 /*7*/].f_1 = joaat("sm_radcnt");
	Global_59104[76 /*7*/] = 1;
	Global_59104[77 /*7*/].f_1 = joaat("sm_radwzl");
	Global_59104[77 /*7*/] = 1;
	Global_59104[78 /*7*/].f_1 = joaat("sm_radzit");
	Global_59104[78 /*7*/] = 1;
	Global_59104[81 /*7*/].f_1 = joaat("sm_zititcnt");
	Global_59104[81 /*7*/] = 1;
	Global_59104[82 /*7*/].f_1 = joaat("sm_zititwzl");
	Global_59104[82 /*7*/] = 1;
	Global_59104[83 /*7*/].f_1 = joaat("sm_zititzit");
	Global_59104[83 /*7*/] = 1;
	Global_59104[84 /*7*/].f_1 = joaat("sm_radchacnt");
	Global_59104[84 /*7*/] = 1;
	Global_59104[85 /*7*/].f_1 = joaat("sm_radchawzl");
	Global_59104[85 /*7*/] = 1;
	Global_59104[88 /*7*/].f_1 = joaat("sm_para");
	Global_59104[88 /*7*/] = 1;
	Global_59104[89 /*7*/].f_1 = joaat("sm_tkfire");
	Global_59104[89 /*7*/] = 1;
	Global_59104[90 /*7*/].f_1 = joaat("sm_fibai");
	Global_59104[90 /*7*/] = 1;
	Global_59104[91 /*7*/].f_1 = joaat("sm_tandes");
	Global_59104[91 /*7*/] = 1;
	Global_59104[92 /*7*/].f_1 = joaat("sm_garep");
	Global_59104[92 /*7*/] = 1;
	Global_59104[93 /*7*/].f_1 = joaat("sm_gamonsp");
	Global_59104[93 /*7*/] = 1;
	Global_59104[94 /*7*/].f_1 = joaat("sm_monb");
	Global_59104[94 /*7*/] = 1;
	Global_59104[98 /*7*/].f_1 = joaat("sm_monupshk");
	Global_59104[98 /*7*/] = 1;
	Global_59104[100 /*7*/].f_1 = joaat("sm_taxdest");
	Global_59104[100 /*7*/] = 1;
	Global_59104[101 /*7*/].f_1 = joaat("sm_kilwbfa");
	Global_59104[101 /*7*/] = 1;
	Global_59104[102 /*7*/].f_1 = joaat("sm_kilwbru");
	Global_59104[102 /*7*/] = 1;
	Global_59104[104 /*7*/].f_1 = joaat("sm_kilwmai");
	Global_59104[104 /*7*/] = 1;
	Global_59104[105 /*7*/].f_1 = joaat("sm_kilwsht");
	Global_59104[105 /*7*/] = 1;
	Global_59104[106 /*7*/].f_1 = joaat("sm_kilwuma");
	Global_59104[106 /*7*/] = 1;
	Global_59104[107 /*7*/].f_1 = joaat("sm_kilwvap");
	Global_59104[107 /*7*/] = 1;
	Global_59104[108 /*7*/].f_1 = joaat("sm_kilwvom");
	Global_59104[108 /*7*/] = 1;
	Global_59104[109 /*7*/].f_1 = joaat("sm_kilwhvy");
	Global_59104[109 /*7*/] = 1;
	Global_59104[112 /*7*/].f_1 = joaat("sm_clobofbin");
	Global_59104[112 /*7*/] = 1;
	Global_59104[113 /*7*/].f_1 = joaat("sm_clobofpkw");
	Global_59104[113 /*7*/] = 1;
	Global_59104[114 /*7*/].f_1 = joaat("sm_clobofpon");
	Global_59104[114 /*7*/] = 1;
	Global_59104[117 /*7*/].f_1 = joaat("sm_yoga");
	Global_59104[117 /*7*/] = 1;
	Global_59104[118 /*7*/].f_1 = joaat("sm_tri");
	Global_59104[118 /*7*/] = 1;
	Global_59104[119 /*7*/].f_1 = joaat("sm_gym");
	Global_59104[119 /*7*/] = 1;
	Global_59104[120 /*7*/].f_1 = joaat("sm_strip");
	Global_59104[120 /*7*/] = 1;
	Global_59104[121 /*7*/].f_1 = joaat("sm_ughok");
	Global_59104[121 /*7*/] = 1;
	Global_59104[122 /*7*/].f_1 = joaat("sm_strtro");
	Global_59104[122 /*7*/] = 1;
	Global_59104[123 /*7*/].f_1 = joaat("sm_pisco");
	Global_59104[123 /*7*/] = 1;
	Global_59104[124 /*7*/].f_1 = joaat("sm_totinj");
	Global_59104[124 /*7*/] = 1;
	Global_59104[125 /*7*/].f_1 = joaat("sm_drugkil");
	Global_59104[125 /*7*/] = 1;
	Global_59104[126 /*7*/].f_1 = joaat("sm_hangovr");
	Global_59104[126 /*7*/] = 1;
	Global_59104[127 /*7*/].f_1 = joaat("sm_killspr");
	Global_59104[127 /*7*/] = 1;
	Global_59104[129 /*7*/].f_1 = joaat("sm_pedfirekill");
	Global_59104[129 /*7*/] = 1;
	Global_59104[130 /*7*/].f_1 = joaat("sm_pedfiretick");
	Global_59104[130 /*7*/] = 1;
	Global_59104[131 /*7*/].f_1 = joaat("sm_tvtickwap");
	Global_59104[131 /*7*/] = 1;
	Global_59104[132 /*7*/].f_1 = joaat("sm_tvtickwiw");
	Global_59104[132 /*7*/] = 1;
	Global_59104[134 /*7*/].f_1 = joaat("sm_zitpopzit");
	Global_59104[134 /*7*/] = 1;
	Global_59104[135 /*7*/].f_1 = joaat("sm_carapp");
	Global_59104[135 /*7*/] = 1;
	Global_59104[137 /*7*/].f_1 = joaat("sm_storob");
	Global_59104[137 /*7*/] = 1;
	Global_59104[162 /*7*/].f_1 = joaat("sm_phoncalbdg");
	Global_59104[162 /*7*/] = 1;
	Global_59104[163 /*7*/].f_1 = joaat("sm_phoncaltnk");
	Global_59104[163 /*7*/] = 1;
	Global_59104[164 /*7*/].f_1 = joaat("sm_phoncalwiz");
	Global_59104[164 /*7*/] = 1;
	Global_59104[165 /*7*/].f_1 = joaat("sm_phontxtbdg");
	Global_59104[165 /*7*/] = 1;
	Global_59104[166 /*7*/].f_1 = joaat("sm_phontxttnk");
	Global_59104[166 /*7*/] = 1;
	Global_59104[167 /*7*/].f_1 = joaat("sm_phontxtwiz");
	Global_59104[167 /*7*/] = 1;
	Global_59104[168 /*7*/].f_1 = joaat("sm_chtickbdg");
	Global_59104[168 /*7*/] = 1;
	Global_59104[169 /*7*/].f_1 = joaat("sm_chticktnk");
	Global_59104[169 /*7*/] = 1;
	Global_59104[170 /*7*/].f_1 = joaat("sm_chtickwiz");
	Global_59104[170 /*7*/] = 1;
	Global_59104[171 /*7*/].f_1 = joaat("sm_calcanbdg");
	Global_59104[171 /*7*/] = 1;
	Global_59104[172 /*7*/].f_1 = joaat("sm_calcantnk");
	Global_59104[172 /*7*/] = 1;
	Global_59104[173 /*7*/].f_1 = joaat("sm_calcanwiz");
	Global_59104[173 /*7*/] = 1;
	Global_59104[138 /*7*/].f_2 = 1;
	Global_59104[138 /*7*/].f_3 = joaat("sp0_dist_walking");
	Global_59104[138 /*7*/].f_4 = 1;
	Global_59104[139 /*7*/].f_2 = 1;
	Global_59104[139 /*7*/].f_3 = joaat("sp1_dist_walking");
	Global_59104[139 /*7*/].f_4 = 1;
	Global_59104[140 /*7*/].f_2 = 1;
	Global_59104[140 /*7*/].f_3 = joaat("sp2_dist_walking");
	Global_59104[140 /*7*/].f_4 = 1;
	Global_59104[141 /*7*/].f_2 = 1;
	Global_59104[141 /*7*/].f_3 = joaat("sp0_dist_driving_bicycle");
	Global_59104[141 /*7*/].f_4 = 1;
	Global_59104[142 /*7*/].f_2 = 1;
	Global_59104[142 /*7*/].f_3 = joaat("sp1_dist_driving_bicycle");
	Global_59104[142 /*7*/].f_4 = 1;
	Global_59104[143 /*7*/].f_2 = 1;
	Global_59104[143 /*7*/].f_3 = joaat("sp2_dist_driving_bicycle");
	Global_59104[143 /*7*/].f_4 = 1;
	Global_59104[144 /*7*/].f_2 = 1;
	Global_59104[144 /*7*/].f_3 = joaat("sp0_bailed_from_vehicle");
	Global_59104[144 /*7*/].f_4 = 0;
	Global_59104[145 /*7*/].f_2 = 1;
	Global_59104[145 /*7*/].f_3 = joaat("sp1_bailed_from_vehicle");
	Global_59104[145 /*7*/].f_4 = 0;
	Global_59104[146 /*7*/].f_2 = 1;
	Global_59104[146 /*7*/].f_3 = joaat("sp2_bailed_from_vehicle");
	Global_59104[146 /*7*/].f_4 = 0;
	Global_59104[150 /*7*/].f_2 = 1;
	Global_59104[150 /*7*/].f_3 = joaat("sp0_large_accidents");
	Global_59104[150 /*7*/].f_4 = 0;
	Global_59104[151 /*7*/].f_2 = 1;
	Global_59104[151 /*7*/].f_3 = joaat("sp1_large_accidents");
	Global_59104[151 /*7*/].f_4 = 0;
	Global_59104[152 /*7*/].f_2 = 1;
	Global_59104[152 /*7*/].f_3 = joaat("sp2_large_accidents");
	Global_59104[152 /*7*/].f_4 = 0;
	Global_59104[153 /*7*/].f_2 = 1;
	Global_59104[153 /*7*/].f_3 = joaat("sp0_total_legitimate_kills");
	Global_59104[153 /*7*/].f_4 = 0;
	Global_59104[154 /*7*/].f_2 = 1;
	Global_59104[154 /*7*/].f_3 = joaat("sp1_total_legitimate_kills");
	Global_59104[154 /*7*/].f_4 = 0;
	Global_59104[155 /*7*/].f_2 = 1;
	Global_59104[155 /*7*/].f_3 = joaat("sp2_total_legitimate_kills");
	Global_59104[155 /*7*/].f_4 = 0;
	Global_59104[156 /*7*/].f_2 = 1;
	Global_59104[156 /*7*/].f_3 = joaat("sp0_money_spent_on_taxis");
	Global_59104[156 /*7*/].f_4 = 0;
	Global_59104[157 /*7*/].f_2 = 1;
	Global_59104[157 /*7*/].f_3 = joaat("sp1_money_spent_on_taxis");
	Global_59104[157 /*7*/].f_4 = 0;
	Global_59104[158 /*7*/].f_2 = 1;
	Global_59104[158 /*7*/].f_3 = joaat("sp2_money_spent_on_taxis");
	Global_59104[158 /*7*/].f_4 = 0;
	Global_59104[159 /*7*/].f_2 = 1;
	Global_59104[159 /*7*/].f_3 = joaat("sp0_money_spent_on_healthcare");
	Global_59104[159 /*7*/].f_4 = 0;
	Global_59104[160 /*7*/].f_2 = 1;
	Global_59104[160 /*7*/].f_3 = joaat("sp1_money_spent_on_healthcare");
	Global_59104[160 /*7*/].f_4 = 0;
	Global_59104[161 /*7*/].f_2 = 1;
	Global_59104[161 /*7*/].f_3 = joaat("sp2_money_spent_on_healthcare");
	Global_59104[161 /*7*/].f_4 = 0;
	Global_59104[174 /*7*/].f_2 = 1;
	Global_59104[174 /*7*/].f_3 = joaat("sp0_money_spent_in_cop_bribes");
	Global_59104[174 /*7*/].f_4 = 0;
	Global_59104[175 /*7*/].f_2 = 1;
	Global_59104[175 /*7*/].f_3 = joaat("sp1_money_spent_in_cop_bribes");
	Global_59104[175 /*7*/].f_4 = 0;
	Global_59104[176 /*7*/].f_2 = 1;
	Global_59104[176 /*7*/].f_3 = joaat("sp2_money_spent_in_cop_bribes");
	Global_59104[176 /*7*/].f_4 = 0;
	Global_59104[177 /*7*/].f_2 = 1;
	Global_59104[177 /*7*/].f_3 = joaat("sp0_busted");
	Global_59104[177 /*7*/].f_4 = 0;
	Global_59104[178 /*7*/].f_2 = 1;
	Global_59104[178 /*7*/].f_3 = joaat("sp1_busted");
	Global_59104[178 /*7*/].f_4 = 0;
	Global_59104[179 /*7*/].f_2 = 1;
	Global_59104[179 /*7*/].f_3 = joaat("sp2_busted");
	Global_59104[179 /*7*/].f_4 = 0;
	Global_59104[180 /*7*/].f_2 = 1;
	Global_59104[180 /*7*/].f_3 = joaat("sp0_died_in_fall");
	Global_59104[180 /*7*/].f_4 = 0;
	Global_59104[181 /*7*/].f_2 = 1;
	Global_59104[181 /*7*/].f_3 = joaat("sp1_died_in_fall");
	Global_59104[181 /*7*/].f_4 = 0;
	Global_59104[182 /*7*/].f_2 = 1;
	Global_59104[182 /*7*/].f_3 = joaat("sp2_died_in_fall");
	Global_59104[182 /*7*/].f_4 = 0;
	Global_59104[183 /*7*/].f_2 = 1;
	Global_59104[183 /*7*/].f_3 = joaat("sp0_stars_attained");
	Global_59104[183 /*7*/].f_4 = 0;
	Global_59104[184 /*7*/].f_2 = 1;
	Global_59104[184 /*7*/].f_3 = joaat("sp1_stars_attained");
	Global_59104[184 /*7*/].f_4 = 0;
	Global_59104[185 /*7*/].f_2 = 1;
	Global_59104[185 /*7*/].f_3 = joaat("sp2_stars_attained");
	Global_59104[185 /*7*/].f_4 = 0;
	Global_59104[186 /*7*/].f_2 = 1;
	Global_59104[186 /*7*/].f_3 = joaat("sp0_stars_evaded");
	Global_59104[186 /*7*/].f_4 = 0;
	Global_59104[187 /*7*/].f_2 = 1;
	Global_59104[187 /*7*/].f_3 = joaat("sp1_stars_evaded");
	Global_59104[187 /*7*/].f_4 = 0;
	Global_59104[188 /*7*/].f_2 = 1;
	Global_59104[188 /*7*/].f_3 = joaat("sp2_stars_evaded");
	Global_59104[188 /*7*/].f_4 = 0;
	Global_59104[189 /*7*/].f_2 = 1;
	Global_59104[189 /*7*/].f_3 = joaat("sp0_manual_saved");
	Global_59104[189 /*7*/].f_4 = 0;
	Global_59104[190 /*7*/].f_2 = 1;
	Global_59104[190 /*7*/].f_3 = joaat("sp1_manual_saved");
	Global_59104[190 /*7*/].f_4 = 0;
	Global_59104[191 /*7*/].f_2 = 1;
	Global_59104[191 /*7*/].f_3 = joaat("sp2_manual_saved");
	Global_59104[191 /*7*/].f_4 = 0;
	Global_59104[192 /*7*/].f_2 = 1;
	Global_59104[192 /*7*/].f_3 = joaat("sp0_kills_cop");
	Global_59104[192 /*7*/].f_4 = 0;
	Global_59104[193 /*7*/].f_2 = 1;
	Global_59104[193 /*7*/].f_3 = joaat("sp1_kills_cop");
	Global_59104[193 /*7*/].f_4 = 0;
	Global_59104[194 /*7*/].f_2 = 1;
	Global_59104[194 /*7*/].f_3 = joaat("sp2_kills_cop");
	Global_59104[194 /*7*/].f_4 = 0;
	Global_59104[195 /*7*/].f_2 = 1;
	Global_59104[195 /*7*/].f_3 = joaat("sp0_kills_swat");
	Global_59104[195 /*7*/].f_4 = 0;
	Global_59104[196 /*7*/].f_2 = 1;
	Global_59104[196 /*7*/].f_3 = joaat("sp1_kills_swat");
	Global_59104[196 /*7*/].f_4 = 0;
	Global_59104[197 /*7*/].f_2 = 1;
	Global_59104[197 /*7*/].f_3 = joaat("sp2_kills_swat");
	Global_59104[197 /*7*/].f_4 = 0;
	Global_59104[198 /*7*/].f_2 = 1;
	Global_59104[198 /*7*/].f_3 = joaat("sp0_time_in_cover");
	Global_59104[198 /*7*/].f_4 = 0;
	Global_59104[199 /*7*/].f_2 = 1;
	Global_59104[199 /*7*/].f_3 = joaat("sp1_time_in_cover");
	Global_59104[199 /*7*/].f_4 = 0;
	Global_59104[200 /*7*/].f_2 = 1;
	Global_59104[200 /*7*/].f_3 = joaat("sp2_time_in_cover");
	Global_59104[200 /*7*/].f_4 = 0;
	Global_58542[0 /*7*/] = joaat("sm_price_amu");
	Global_58542[0 /*7*/].f_3[0] = joaat("amu_ow0");
	Global_58542[0 /*7*/].f_3[1] = joaat("amu_ow1");
	Global_58542[0 /*7*/].f_3[2] = joaat("amu_ow2");
	Global_58542[1 /*7*/] = joaat("sm_price_bdg");
	Global_58542[1 /*7*/].f_3[0] = joaat("bdg_ow0");
	Global_58542[1 /*7*/].f_3[1] = joaat("bdg_ow1");
	Global_58542[1 /*7*/].f_3[2] = joaat("bdg_ow2");
	Global_58542[2 /*7*/] = joaat("sm_price_bfa");
	Global_58542[2 /*7*/].f_3[0] = joaat("bfa_ow0");
	Global_58542[2 /*7*/].f_3[1] = joaat("bfa_ow1");
	Global_58542[2 /*7*/].f_3[2] = joaat("bfa_ow2");
	Global_58542[3 /*7*/] = joaat("sm_price_bin");
	Global_58542[3 /*7*/].f_3[0] = joaat("bin_ow0");
	Global_58542[3 /*7*/].f_3[1] = joaat("bin_ow1");
	Global_58542[3 /*7*/].f_3[2] = joaat("bin_ow2");
	Global_58542[4 /*7*/] = joaat("sm_price_btr");
	Global_58542[4 /*7*/].f_3[0] = joaat("btr_ow0");
	Global_58542[4 /*7*/].f_3[1] = joaat("btr_ow1");
	Global_58542[4 /*7*/].f_3[2] = joaat("btr_ow2");
	Global_58542[5 /*7*/] = joaat("sm_price_ble");
	Global_58542[5 /*7*/].f_3[0] = joaat("ble_ow0");
	Global_58542[5 /*7*/].f_3[1] = joaat("ble_ow1");
	Global_58542[5 /*7*/].f_3[2] = joaat("ble_ow2");
	Global_58542[6 /*7*/] = joaat("sm_price_bru");
	Global_58542[6 /*7*/].f_3[0] = joaat("bru_ow0");
	Global_58542[6 /*7*/].f_3[1] = joaat("bru_ow1");
	Global_58542[6 /*7*/].f_3[2] = joaat("bru_ow2");
	Global_58542[7 /*7*/] = joaat("sm_price_cnt");
	Global_58542[7 /*7*/].f_3[0] = joaat("cnt_ow0");
	Global_58542[7 /*7*/].f_3[1] = joaat("cnt_ow1");
	Global_58542[7 /*7*/].f_3[2] = joaat("cnt_ow2");
	Global_58542[8 /*7*/] = joaat("sm_price_cre");
	Global_58542[8 /*7*/].f_3[0] = joaat("cre_ow0");
	Global_58542[8 /*7*/].f_3[1] = joaat("cre_ow1");
	Global_58542[8 /*7*/].f_3[2] = joaat("cre_ow2");
	Global_58542[9 /*7*/] = joaat("sm_price_dgp");
	Global_58542[9 /*7*/].f_3[0] = joaat("dgp_ow0");
	Global_58542[9 /*7*/].f_3[1] = joaat("dgp_ow1");
	Global_58542[9 /*7*/].f_3[2] = joaat("dgp_ow2");
	Global_58542[10 /*7*/] = joaat("sm_price_wap");
	Global_58542[10 /*7*/].f_3[0] = joaat("wap_ow0");
	Global_58542[10 /*7*/].f_3[1] = joaat("wap_ow1");
	Global_58542[10 /*7*/].f_3[2] = joaat("wap_ow2");
	Global_58542[11 /*7*/] = joaat("sm_price_fac");
	Global_58542[11 /*7*/].f_3[0] = joaat("fac_ow0");
	Global_58542[11 /*7*/].f_3[1] = joaat("fac_ow1");
	Global_58542[11 /*7*/].f_3[2] = joaat("fac_ow2");
	Global_58542[12 /*7*/] = joaat("sm_price_frt");
	Global_58542[12 /*7*/].f_3[0] = joaat("frt_ow0");
	Global_58542[12 /*7*/].f_3[1] = joaat("frt_ow1");
	Global_58542[12 /*7*/].f_3[2] = joaat("frt_ow2");
	Global_58542[13 /*7*/] = joaat("sm_price_lsc");
	Global_58542[13 /*7*/].f_3[0] = joaat("lsc_ow0");
	Global_58542[13 /*7*/].f_3[1] = joaat("lsc_ow1");
	Global_58542[13 /*7*/].f_3[2] = joaat("lsc_ow2");
	Global_58542[14 /*7*/] = joaat("sm_price_lst");
	Global_58542[14 /*7*/].f_3[0] = joaat("lst_ow0");
	Global_58542[14 /*7*/].f_3[1] = joaat("lst_ow1");
	Global_58542[14 /*7*/].f_3[2] = joaat("lst_ow2");
	Global_58542[15 /*7*/] = joaat("sm_price_ltd");
	Global_58542[15 /*7*/].f_3[0] = joaat("ltd_ow0");
	Global_58542[15 /*7*/].f_3[1] = joaat("ltd_ow1");
	Global_58542[15 /*7*/].f_3[2] = joaat("ltd_ow2");
	Global_58542[16 /*7*/] = joaat("sm_price_mai");
	Global_58542[16 /*7*/].f_3[0] = joaat("mai_ow0");
	Global_58542[16 /*7*/].f_3[1] = joaat("mai_ow1");
	Global_58542[16 /*7*/].f_3[2] = joaat("mai_ow2");
	Global_58542[17 /*7*/] = joaat("sm_price_pkw");
	Global_58542[17 /*7*/].f_3[0] = joaat("pkw_ow0");
	Global_58542[17 /*7*/].f_3[1] = joaat("pkw_ow1");
	Global_58542[17 /*7*/].f_3[2] = joaat("pkw_ow2");
	Global_58542[18 /*7*/] = joaat("sm_price_pis");
	Global_58542[18 /*7*/].f_3[0] = joaat("pis_ow0");
	Global_58542[18 /*7*/].f_3[1] = joaat("pis_ow1");
	Global_58542[18 /*7*/].f_3[2] = joaat("pis_ow2");
	Global_58542[19 /*7*/] = joaat("sm_price_pon");
	Global_58542[19 /*7*/].f_3[0] = joaat("pon_ow0");
	Global_58542[19 /*7*/].f_3[1] = joaat("pon_ow1");
	Global_58542[19 /*7*/].f_3[2] = joaat("pon_ow2");
	Global_58542[20 /*7*/] = joaat("sm_price_ron");
	Global_58542[20 /*7*/].f_3[0] = joaat("ron_ow0");
	Global_58542[20 /*7*/].f_3[1] = joaat("ron_ow1");
	Global_58542[20 /*7*/].f_3[2] = joaat("ron_ow2");
	Global_58542[21 /*7*/] = joaat("sm_price_sht");
	Global_58542[21 /*7*/].f_3[0] = joaat("sht_ow0");
	Global_58542[21 /*7*/].f_3[1] = joaat("sht_ow1");
	Global_58542[21 /*7*/].f_3[2] = joaat("sht_ow2");
	Global_58542[22 /*7*/] = joaat("sm_price_spu");
	Global_58542[22 /*7*/].f_3[0] = joaat("spu_ow0");
	Global_58542[22 /*7*/].f_3[1] = joaat("spu_ow1");
	Global_58542[22 /*7*/].f_3[2] = joaat("spu_ow2");
	Global_58542[23 /*7*/] = joaat("sm_price_tnk");
	Global_58542[23 /*7*/].f_3[0] = joaat("tnk_ow0");
	Global_58542[23 /*7*/].f_3[1] = joaat("tnk_ow1");
	Global_58542[23 /*7*/].f_3[2] = joaat("tnk_ow2");
	Global_58542[24 /*7*/] = joaat("sm_price_wiw");
	Global_58542[24 /*7*/].f_3[0] = joaat("wiw_ow0");
	Global_58542[24 /*7*/].f_3[1] = joaat("wiw_ow1");
	Global_58542[24 /*7*/].f_3[2] = joaat("wiw_ow2");
	Global_58542[25 /*7*/] = joaat("sm_price_uma");
	Global_58542[25 /*7*/].f_3[0] = joaat("uma_ow0");
	Global_58542[25 /*7*/].f_3[1] = joaat("uma_ow1");
	Global_58542[25 /*7*/].f_3[2] = joaat("uma_ow2");
	Global_58542[26 /*7*/] = joaat("sm_price_vap");
	Global_58542[26 /*7*/].f_3[0] = joaat("vap_ow0");
	Global_58542[26 /*7*/].f_3[1] = joaat("vap_ow1");
	Global_58542[26 /*7*/].f_3[2] = joaat("vap_ow2");
	Global_58542[27 /*7*/] = joaat("sm_price_vom");
	Global_58542[27 /*7*/].f_3[0] = joaat("vom_ow0");
	Global_58542[27 /*7*/].f_3[1] = joaat("vom_ow1");
	Global_58542[27 /*7*/].f_3[2] = joaat("vom_ow2");
	Global_58542[28 /*7*/] = joaat("sm_price_wzl");
	Global_58542[28 /*7*/].f_3[0] = joaat("wzl_ow0");
	Global_58542[28 /*7*/].f_3[1] = joaat("wzl_ow1");
	Global_58542[28 /*7*/].f_3[2] = joaat("wzl_ow2");
	Global_58542[29 /*7*/] = joaat("sm_price_wiz");
	Global_58542[29 /*7*/].f_3[0] = joaat("wiz_ow0");
	Global_58542[29 /*7*/].f_3[1] = joaat("wiz_ow1");
	Global_58542[29 /*7*/].f_3[2] = joaat("wiz_ow2");
	Global_58542[30 /*7*/] = joaat("sm_price_zit");
	Global_58542[30 /*7*/].f_3[0] = joaat("zit_ow0");
	Global_58542[30 /*7*/].f_3[1] = joaat("zit_ow1");
	Global_58542[30 /*7*/].f_3[2] = joaat("zit_ow2");
	Global_58542[31 /*7*/] = joaat("sm_price_shk");
	Global_58542[31 /*7*/].f_3[0] = joaat("shk_ow0");
	Global_58542[31 /*7*/].f_3[1] = joaat("shk_ow1");
	Global_58542[31 /*7*/].f_3[2] = joaat("shk_ow2");
	Global_58542[32 /*7*/] = joaat("sm_price_mol");
	Global_58542[32 /*7*/].f_3[0] = joaat("mol_ow0");
	Global_58542[32 /*7*/].f_3[1] = joaat("mol_ow1");
	Global_58542[32 /*7*/].f_3[2] = joaat("mol_ow2");
	Global_58542[33 /*7*/] = joaat("sm_price_pmp");
	Global_58542[33 /*7*/].f_3[0] = joaat("pmp_ow0");
	Global_58542[33 /*7*/].f_3[1] = joaat("pmp_ow1");
	Global_58542[33 /*7*/].f_3[2] = joaat("pmp_ow2");
	Global_58542[34 /*7*/] = joaat("sm_price_got");
	Global_58542[34 /*7*/].f_3[0] = joaat("got_ow0");
	Global_58542[34 /*7*/].f_3[1] = joaat("got_ow1");
	Global_58542[34 /*7*/].f_3[2] = joaat("got_ow2");
	Global_58542[35 /*7*/] = joaat("sm_price_eye");
	Global_58542[35 /*7*/].f_3[0] = joaat("eye_ow0");
	Global_58542[35 /*7*/].f_3[1] = joaat("eye_ow1");
	Global_58542[35 /*7*/].f_3[2] = joaat("eye_ow2");
	Global_58542[36 /*7*/] = joaat("sm_price_hvy");
	Global_58542[36 /*7*/].f_3[0] = joaat("hvy_ow0");
	Global_58542[36 /*7*/].f_3[1] = joaat("hvy_ow1");
	Global_58542[36 /*7*/].f_3[2] = joaat("hvy_ow2");
	Global_58542[37 /*7*/] = joaat("sm_price_shr");
	Global_58542[37 /*7*/].f_3[0] = joaat("shr_ow0");
	Global_58542[37 /*7*/].f_3[1] = joaat("shr_ow1");
	Global_58542[37 /*7*/].f_3[2] = joaat("shr_ow2");
	Global_58542[38 /*7*/] = joaat("sm_price_hal");
	Global_58542[38 /*7*/].f_3[0] = joaat("hal_ow0");
	Global_58542[38 /*7*/].f_3[1] = joaat("hal_ow1");
	Global_58542[38 /*7*/].f_3[2] = joaat("hal_ow2");
}

void func_99()
{
	unk_0xBBC29EBE6E1A48FA();
}
