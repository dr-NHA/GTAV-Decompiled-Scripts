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
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
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
	if (unk_0x96CFB880BAC634CE(11))
	{
		iLocal_43 = 5;
	}
	while (true)
	{
		wait(0);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			switch (iLocal_43)
			{
				case 0:
					func_9();
					break;
				
				case 1:
					break;
				
				case 2:
					func_8();
					if (unk_0x76CD105BCAC6EB9F())
					{
						if (unk_0xDD121F61016F3CE0(7, unk_0x4A8C381C258A124D(), 2, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0x1DD05E817C89C737();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x70DA4F87B396F9F9(7, Local_45, 2, 3f, &uLocal_47, 0, 0))
					{
						iLocal_46 = unk_0x1DD05E817C89C737();
						iLocal_43 = 5;
					}
					break;
				
				case 3:
					func_8();
					if (unk_0x76CD105BCAC6EB9F())
					{
						if ((func_7(unk_0x259BE71D8A81D4FA(), 0) && func_4(unk_0x259BE71D8A81D4FA()) == 5) && Global_1968277)
						{
							if (Global_1968278 == 0)
							{
								Global_1968278 = 1;
							}
							iLocal_43 = 5;
						}
						else if (unk_0xDD121F61016F3CE0(5, unk_0x4A8C381C258A124D(), 2, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0x1DD05E817C89C737();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x70DA4F87B396F9F9(5, Local_45, 2, 3f, &uLocal_47, 0, 0))
					{
						iLocal_46 = unk_0x1DD05E817C89C737();
						iLocal_43 = 5;
					}
					break;
				
				case 4:
					func_8();
					if (unk_0x76CD105BCAC6EB9F())
					{
						if (unk_0xDD121F61016F3CE0(3, unk_0x4A8C381C258A124D(), 4, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0x1DD05E817C89C737();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x70DA4F87B396F9F9(3, Local_45, 4, 3f, &uLocal_47, 0, 0))
					{
						if (Global_97178.f_358 == unk_0x70E57E9927B6BA58("AGENCY_PREP_1") || (unk_0x486FF5D06E9659F1(unk_0x70E57E9927B6BA58("agency_prep1")) > 0 && func_3(0)))
						{
							Global_97178.f_358 = unk_0x70E57E9927B6BA58("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_97108 = 1;
						}
						iLocal_46 = unk_0x1DD05E817C89C737();
						iLocal_43 = 5;
					}
					break;
				
				case 5:
					if (unk_0x1DD05E817C89C737() > (iLocal_46 + 60000) || !unk_0x5BA108AB15E668B7(uLocal_47))
					{
						func_1();
					}
					else if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
					{
						if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
						{
							if (unk_0x5BA108AB15E668B7(uLocal_47))
							{
								unk_0x3D09B44C2ACEA592(uLocal_47);
							}
						}
					}
					break;
				}
		}
	}
}

void func_1()
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	unk_0xBBC29EBE6E1A48FA();
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

int func_3(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

int func_4(int iParam0)
{
	if (func_6(iParam0) == 233)
	{
		return func_5(iParam0);
	}
	return -1;
}

int func_5(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_182;
	}
	return -1;
}

int func_6(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

int func_7(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (unk_0x1DD05E817C89C737() > iLocal_46 + 30000)
	{
		iLocal_43 = 5;
	}
}

void func_9()
{
	var uVar0;
	
	switch (iLocal_44)
	{
		case 0:
			iLocal_44 = 1;
			iLocal_46 = unk_0x1DD05E817C89C737();
			break;
		
		case 1:
			while (!func_19())
			{
				wait(0);
				if (func_18() == 3)
				{
					iLocal_43 = 3;
				}
				if (func_18() == 4)
				{
					iLocal_43 = 4;
				}
				if (func_18() == 5)
				{
					iLocal_43 = 2;
				}
				if (unk_0x1DD05E817C89C737() > iLocal_46 + 30000)
				{
					iLocal_46 = unk_0x1DD05E817C89C737();
					func_12(0);
				}
			}
			if (iLocal_43 == 0)
			{
				iLocal_43 = 5;
			}
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				func_10(unk_0x4A8C381C258A124D(), &Local_45, &uVar0);
			}
			iLocal_46 = unk_0x1DD05E817C89C737();
			break;
	}
}

void func_10(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	var uVar14;
	int iVar15;
	var uVar16;
	struct<3> Var17;
	var uVar18;
	
	fVar12 = 5f;
	iVar0 = 1;
	iVar13 = 0;
	while (iVar13 < 2)
	{
		switch (iVar13)
		{
			case 0:
				unk_0x6009FBA2EAAA60BE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), iVar0, uParam1, &fVar10, &iVar1, 5, 1077936128, 0);
				unk_0x748728E3BFD8E371(*uParam1, 1f, 1, &uVar4, &uVar5, &uVar2, &uVar3, &fVar7, 0);
				if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), -3044.66f, 596.43f, 6.58f, 1) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				Var6 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) - unk_0xD1A6A821F5AC81DB(uParam0, 1) };
				fVar8 = unk_0x97BC40FFA2FFCCD2(Var6.f_0, Var6.f_1);
				fVar9 = (fVar10 + 180f);
				if (fVar9 > 360f)
				{
					fVar9 = (fVar9 - 360f);
				}
				if (func_11(fVar8, fVar10, 90f))
				{
					*uParam2 = fVar10;
				}
				else
				{
					*uParam2 = fVar9;
				}
				if (fVar7 < 0f)
				{
					fVar11 = 0f;
				}
				else if (unk_0xD2507ABB3A05C571(unk_0x97C50CC028477E0D(*uParam1, 1, 1, 1077936128, 0)))
				{
					fVar11 = 0f;
				}
				else
				{
					fVar11 = (fVar12 * to_float((iVar1 / 2)));
					if (fVar11 == 0f)
					{
						fVar11 = (fVar11 + fVar12);
					}
					if (iVar1 == 5)
					{
						fVar11 = (fVar11 + fVar12);
					}
					if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 294f, -895f, 28f, 1) < 25f || unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), -713.01f, -819.64f, 22.63f, 1) < 25f)
					{
						fVar11 = (fVar11 + 5f);
					}
					else
					{
						fVar11 = (fVar11 + 3.75f);
					}
					fVar11 = (fVar11 + (fVar7 / 2f));
				}
				if (vdist(unk_0xF10F2A2453AF1DFB(*uParam1, *uParam2, fVar11, 0f, 0f), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) > vdist(unk_0xF10F2A2453AF1DFB(*uParam1, *uParam2, -fVar11, 0f, 0f), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)))
				{
					fVar11 = -fVar11;
				}
				*uParam1 = { unk_0xF10F2A2453AF1DFB(*uParam1, *uParam2, fVar11, 0f, 0f) };
				uVar14 = unk_0x26C582EF5CD8A3A2(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar13++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (unk_0x0E7DD1EBCA8D2DE3(uVar14, &iVar15, &Var17, &uVar16, &uVar18) == 2)
					{
						if (iVar15 != 0)
						{
							if (Var17.f_2 > (uParam1->f_2 + 8.5f))
							{
								iVar13++;
							}
							else
							{
								iVar0++;
								iVar13 = 0;
							}
						}
						else
						{
							iVar13++;
						}
					}
				}
				else
				{
					iVar13++;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_11(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_12(int iParam0)
{
	if (func_17())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_16())
		{
			func_14(1, 1);
		}
		else
		{
			func_14(0, 0);
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
	if (!func_13())
	{
		Global_20383.f_1 = 3;
	}
}

int func_13()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
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

int func_15(int iParam0)
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

bool func_16()
{
	return BitTest(Global_1962996, 5);
}

bool func_17()
{
	return BitTest(Global_1962996, 19);
}

int func_18()
{
	return Global_22742;
}

int func_19()
{
	if (Global_21725 == 0)
	{
		return 1;
	}
	return 0;
}
