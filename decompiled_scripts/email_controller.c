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
#endregion

void __EntryFunction__()
{
	int iVar0[122];
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	
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
	if (unk_0x96CFB880BAC634CE(34))
	{
		func_70();
	}
	func_69();
	func_68();
	Global_44454 = 0;
	iVar1 = func_61();
	iVar2 = func_61();
	iVar3 = 2000;
	Global_44456 = 1;
	bVar4 = true;
	while (true)
	{
		iVar5 = 0;
		if (bVar4)
		{
			if (BitTest(Global_113648.f_24988, (4 - 1)))
			{
				func_60(26);
				bVar4 = false;
			}
		}
		if (!Global_44455 && unk_0x1DD05E817C89C737() > Global_43808)
		{
			iVar5 = 0;
			while (iVar5 < 122)
			{
				if ((Global_47790[iVar5 /*46*/] && !Global_47790[iVar5 /*46*/].f_1) && !Global_47790[iVar5 /*46*/].f_45)
				{
					iVar0[iVar5] = (iVar0[iVar5] + iVar3);
					if (iVar0[iVar5] > Global_47790[iVar5 /*46*/].f_43)
					{
						if (func_34(7, 144, 2, -1, 0))
						{
							func_32(iVar5, 0);
							iVar0[iVar5] = 0;
							Global_44456 = 1;
						}
					}
				}
				wait(0);
				iVar5++;
			}
			iVar1 = func_61();
			iVar6 = 0;
			iVar7 = 0;
			iVar8 = 0;
			func_20(iVar1, iVar2, &iVar7, &iVar7, &iVar6, &iVar7, &iVar7, &iVar7);
			if (iVar6 < 0)
			{
				iVar6 = (iVar6 * -1);
			}
			if (iVar6 > 0 && Global_20383.f_1 == 3)
			{
				iVar2 = iVar1;
				if (Global_55187 > 0)
				{
					iVar9 = Global_55187;
					iVar10 = 0;
					while (iVar9 != 0)
					{
						if ((Global_55188[iVar10 /*53*/].f_52 != 0 && iVar10 < 8) && Global_55188[iVar10 /*53*/].f_4)
						{
							Global_55188[iVar10 /*53*/].f_2 = (Global_55188[iVar10 /*53*/].f_2 - iVar6);
							bVar11 = false;
							bVar12 = false;
							bVar13 = false;
							iVar14 = 0;
							while (!bVar13)
							{
								if (Global_53765[iVar14 /*203*/].f_1 != Global_55188[iVar10 /*53*/].f_52)
								{
									iVar14++;
								}
								else
								{
									bVar12 = true;
									bVar13 = true;
								}
								if (iVar14 == 7)
								{
									bVar13 = true;
									Global_55188[iVar10 /*53*/].f_52 = 0;
									bVar11 = true;
								}
							}
							if (!bVar12)
							{
								bVar11 = true;
								Global_55188[iVar10 /*53*/].f_4 = 0;
							}
							else if (Global_55188[iVar10 /*53*/].f_2 < 1)
							{
								if (func_34(7, 145, 2, -1, 0))
								{
									bVar15 = false;
									if (Global_55188[iVar10 /*53*/].f_5 || Global_55188[iVar10 /*53*/].f_10 > 0)
									{
										bVar15 = true;
									}
									if (func_17(Global_55188[iVar10 /*53*/], Global_55188[iVar10 /*53*/].f_1, bVar15))
									{
										bVar16 = true;
										if (Global_55188[iVar10 /*53*/].f_10 > 0)
										{
											bVar16 = false;
										}
										if (Global_55188[iVar10 /*53*/].f_5)
										{
											func_16(Global_55188[iVar10 /*53*/], &(Global_55188[iVar10 /*53*/].f_6), bVar16);
										}
										if (Global_55188[iVar10 /*53*/].f_10 > 0)
										{
											iVar8 = 0;
											iVar8 = 0;
											while (iVar8 < Global_55188[iVar10 /*53*/].f_10)
											{
												func_15(Global_55188[iVar10 /*53*/], &(Global_55188[iVar10 /*53*/].f_11[iVar8 /*4*/]));
												iVar8++;
											}
										}
										if (bVar15 && !bVar16)
										{
											func_1(Global_55188[iVar10 /*53*/]);
										}
										func_60(Global_55188[iVar10 /*53*/]);
									}
									Global_55188[iVar10 /*53*/].f_52 = 0;
									Global_55188[iVar10 /*53*/].f_5 = 0;
									Global_55188[iVar10 /*53*/].f_2 = 0;
									bVar11 = true;
									Global_55188[iVar10 /*53*/].f_4 = 0;
								}
							}
							if (bVar11)
							{
								Global_55187 = (Global_55187 - 1);
							}
							iVar9 = (iVar9 - 1);
						}
						iVar10++;
						if (iVar10 == 8)
						{
							iVar9 = 0;
						}
						wait(0);
					}
				}
			}
		}
		wait(iVar3);
		Global_44457 = 0;
		Global_44458 = 0;
		Global_44459 = 0;
		iVar17 = Global_53403[0 /*120*/];
		if (iVar17 > 16)
		{
			iVar17 = 16;
		}
		iVar5 = 0;
		while (iVar5 < iVar17)
		{
			if (!Global_53403[0 /*120*/].f_69[iVar5])
			{
				Global_44457++;
			}
			iVar5++;
		}
		iVar17 = Global_53403[1 /*120*/];
		if (iVar17 > 16)
		{
			iVar17 = 16;
		}
		iVar5 = 0;
		while (iVar5 < iVar17)
		{
			if (!Global_53403[1 /*120*/].f_69[iVar5])
			{
				Global_44458++;
			}
			iVar5++;
		}
		iVar17 = Global_53403[2 /*120*/];
		if (iVar17 > 16)
		{
			iVar17 = 16;
		}
		iVar5 = 0;
		while (iVar5 < iVar17)
		{
			if (!Global_53403[2 /*120*/].f_69[iVar5])
			{
				Global_44459++;
			}
			iVar5++;
		}
		wait(iVar3);
	}
}

void func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar4;
	char* sVar5;
	
	iVar0 = func_14(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_53765[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_53765[iVar0 /*203*/].f_9 - 1);
	if (!Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar4 = Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_13(Global_44465[iVar4 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar5 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar5 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar5 = "PW_FEED_EM_2";
				break;
		}
		func_2(1, Global_44465[iVar1 /*12*/].f_2, iVar1, sVar5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_44465[iVar1 /*12*/].f_3)
		{
			case 0:
				func_2(0, Global_44465[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_2(1, Global_44465[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_2(2, Global_44465[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_53765[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_2(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0xFD216000DC314A92())
	{
		return;
	}
	iVar0 = func_6();
	bVar1 = false;
	StringCopy(&cVar2, func_5(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0xCCDB0041859B85A6("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0xCCDB0041859B85A6("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0xCCDB0041859B85A6("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0xCCDB0041859B85A6(sParam3);
				if (!unk_0xD6F9DEE4765092A9(iParam4))
				{
					unk_0xACF853FB3F6EA7D4(iParam4);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam5))
				{
					unk_0xACF853FB3F6EA7D4(iParam5);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam6))
				{
					unk_0xACF853FB3F6EA7D4(iParam6);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam7))
				{
					unk_0xACF853FB3F6EA7D4(iParam7);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam8))
				{
					unk_0xACF853FB3F6EA7D4(iParam8);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam9))
				{
					unk_0xACF853FB3F6EA7D4(iParam9);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam10))
				{
					unk_0xACF853FB3F6EA7D4(iParam10);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam11))
				{
					unk_0xACF853FB3F6EA7D4(iParam11);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam12))
				{
					unk_0xACF853FB3F6EA7D4(iParam12);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam13))
				{
					unk_0xACF853FB3F6EA7D4(iParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_3(unk_0x5C7E2225D7451992(&cVar2, &cVar2, 0, 2, unk_0xFACCDE46E24AD056(func_4(iParam1)), 0));
		}
		else
		{
			func_3(unk_0x5C7E2225D7451992("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xFACCDE46E24AD056(func_4(iParam1)), 0));
		}
		switch (Global_20383)
		{
			case 0:
				StringCopy(&Global_20372, "Phone_SoundSet_Michael", 24);
				Global_44457++;
				if (Global_44457 > 16)
				{
					Global_44457 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_20372, "Phone_SoundSet_Trevor", 24);
				Global_44459++;
				if (Global_44459 > 16)
				{
					Global_44459 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_20372, "Phone_SoundSet_Franklin", 24);
				Global_44458++;
				if (Global_44458 > 16)
				{
					Global_44458 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_20372, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0xBF3D28CA44F3BE2D(-1, "Notification", &Global_20372, 1);
	}
}

void func_3(var uParam0)
{
	Global_44460[Global_44464] = uParam0;
	Global_22783 = 1;
	Global_22782 = uParam0;
	Global_44464++;
	if (Global_44464 == 3)
	{
		Global_44464 = 0;
	}
}

char* func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_5(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0xFACCDE46E24AD056(&(Global_2028[0 /*29*/].f_7));
		
		case 1:
			return unk_0xFACCDE46E24AD056(&(Global_2028[1 /*29*/].f_7));
		
		case 2:
			return unk_0xFACCDE46E24AD056(&(Global_2028[2 /*29*/].f_7));
		
		case 7:
			return unk_0xFACCDE46E24AD056(&(Global_2028[12 /*29*/].f_7));
		
		case 4:
			return unk_0xFACCDE46E24AD056(&(Global_2028[60 /*29*/].f_7));
		
		case 6:
			return unk_0xFACCDE46E24AD056(&(Global_2028[62 /*29*/].f_7));
		
		case 3:
			return unk_0xFACCDE46E24AD056(&(Global_2028[14 /*29*/].f_7));
		
		case 16:
			return unk_0xFACCDE46E24AD056(&(Global_2028[97 /*29*/].f_7));
		
		case 19:
			return unk_0xFACCDE46E24AD056(&(Global_2028[99 /*29*/].f_7));
		
		case 15:
			return unk_0xFACCDE46E24AD056(&(Global_2028[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return unk_0xFACCDE46E24AD056(&(Global_2028[15 /*29*/].f_7));
		
		case 26:
			return unk_0xFACCDE46E24AD056(&(Global_2028[30 /*29*/].f_7));
		
		case 27:
			return unk_0xFACCDE46E24AD056(&(Global_2028[17 /*29*/].f_7));
		
		case 29:
			return unk_0xFACCDE46E24AD056(&(Global_2028[20 /*29*/].f_7));
		
		case 30:
			return unk_0xFACCDE46E24AD056(&(Global_2028[43 /*29*/].f_7));
		
		case 31:
			return unk_0xFACCDE46E24AD056(&(Global_2028[44 /*29*/].f_7));
		
		case 32:
			return unk_0xFACCDE46E24AD056(&(Global_2028[19 /*29*/].f_7));
		
		case 34:
			return unk_0xFACCDE46E24AD056(&(Global_2028[40 /*29*/].f_7));
		
		case 36:
			return unk_0xFACCDE46E24AD056("CELL_E_381");
		
		case 38:
			return unk_0xFACCDE46E24AD056(&(Global_2028[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return unk_0xFACCDE46E24AD056(&(Global_2028[122 /*29*/].f_7));
		
		case 40:
			return unk_0xFACCDE46E24AD056(&(Global_2028[125 /*29*/].f_7));
		
		case 41:
			return unk_0xFACCDE46E24AD056(&(Global_2028[113 /*29*/].f_7));
		
		case 42:
			return unk_0xFACCDE46E24AD056(&(Global_2028[126 /*29*/].f_7));
		
		case 43:
			return unk_0xFACCDE46E24AD056(&(Global_2028[127 /*29*/].f_7));
		
		case 44:
			return unk_0xFACCDE46E24AD056(&(Global_2028[124 /*29*/].f_7));
		
		case 45:
			return unk_0xFACCDE46E24AD056(&(Global_2028[114 /*29*/].f_7));
		
		case 46:
			return unk_0xFACCDE46E24AD056(&(Global_2028[115 /*29*/].f_7));
		
		case 47:
			return unk_0xFACCDE46E24AD056(&(Global_2028[116 /*29*/].f_7));
		
		case 48:
			return unk_0xFACCDE46E24AD056(&(Global_2028[123 /*29*/].f_7));
		
		case 49:
			return unk_0xFACCDE46E24AD056(&(Global_2028[117 /*29*/].f_7));
		
		case 50:
			return unk_0xFACCDE46E24AD056(&(Global_2028[118 /*29*/].f_7));
		
		case 51:
			return unk_0xFACCDE46E24AD056(&(Global_2028[119 /*29*/].f_7));
		
		case 52:
			return unk_0xFACCDE46E24AD056(&(Global_2028[120 /*29*/].f_7));
		
		case 53:
			return unk_0xFACCDE46E24AD056(&(Global_2028[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

int func_6()
{
	func_7();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_7()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_11(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_10(unk_0x4A8C381C258A124D());
			if (func_9(iVar0) && (!func_8(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_9(Global_113648.f_2365.f_539.f_4321))
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

bool func_8(int iParam0)
{
	return Global_43257 == iParam0;
}

bool func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_11(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_11(int iParam0)
{
	if (func_9(iParam0))
	{
		return func_12(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_12(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

struct<16> func_13(int iParam0)
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_53765[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_53765[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_53765[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_15(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_14(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_53765[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

void func_16(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_14(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_53765[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_1 = 1;
	StringCopy(&(Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_2), sParam1, 16);
	Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 = 0;
	StringCopy(&(Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[0 /*4*/]), "", 16);
	StringCopy(&(Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[1 /*4*/]), "", 16);
	StringCopy(&(Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[2 /*4*/]), "", 16);
	StringCopy(&(Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[3 /*4*/]), "", 16);
	StringCopy(&(Global_53765[iVar0 /*203*/].f_10[(Global_53765[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[4 /*4*/]), "", 16);
	if (bParam2)
	{
		func_1(iParam0);
	}
}

int func_17(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_19(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_53765[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_53765[iVar0 /*203*/].f_2 = iParam0;
	Global_53765[iVar0 /*203*/].f_10[Global_53765[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_53765[iVar0 /*203*/].f_10[Global_53765[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_53765[iVar0 /*203*/].f_10[Global_53765[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_53765[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_53765[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_53765[iVar0 /*203*/].f_4[iVar1] == Global_44465[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_53765[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_53765[iVar0 /*203*/].f_4[Global_53765[iVar0 /*203*/].f_3] = Global_44465[iParam1 /*12*/].f_3;
			Global_53765[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_53765[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_53765[iVar0 /*203*/].f_4[iVar1] == Global_44465[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_53765[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_53765[iVar0 /*203*/].f_4[Global_53765[iVar0 /*203*/].f_3] = Global_44465[iParam1 /*12*/].f_2;
			Global_53765[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_53765[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_53765[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_18(Global_53765[iVar0 /*203*/].f_4[iVar1], Global_53765[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_18(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_47790[iParam1 /*46*/].f_42 - 1);
		if (iVar4 < 0)
		{
			return;
		}
		iVar5 = Global_47790[iParam1 /*46*/].f_32[iVar4];
		iVar2 = iVar5;
		Var3 = { func_13(Global_44465[iVar5 /*12*/].f_1) };
		if (Global_44465[iVar5 /*12*/].f_2 == iParam0 && !Global_44465[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_44465[iVar5 /*12*/].f_2;
		iVar0 = Global_53403[iParam0 /*120*/];
		bVar6 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar6 = true;
		}
		if (bVar6)
		{
			if (!Global_53403[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_44457 = (Global_44457 - 1);
						if (Global_44457 < 0)
						{
							Global_44457 = 0;
						}
						break;
					
					case 1:
						Global_44458 = (Global_44458 - 1);
						if (Global_44458 < 0)
						{
							Global_44458 = 0;
						}
						break;
					
					case 2:
						Global_44459 = (Global_44459 - 1);
						if (Global_44459 < 0)
						{
							Global_44459 = 0;
						}
						break;
					}
				}
		}
		Global_53403[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_53403[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_53403[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_53403[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_53403[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_53403[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_53403[iParam0 /*120*/];
		bVar7 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar7 = true;
		}
		if (bVar7)
		{
			if (!Global_53403[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_44457 = (Global_44457 - 1);
						if (Global_44457 < 0)
						{
							Global_44457 = 0;
						}
						break;
					
					case 1:
						Global_44458 = (Global_44458 - 1);
						if (Global_44458 < 0)
						{
							Global_44458 = 0;
						}
						break;
					
					case 2:
						Global_44459 = (Global_44459 - 1);
						if (Global_44459 < 0)
						{
							Global_44459 = 0;
						}
						break;
					}
				}
		}
		iVar8 = -1;
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if (Global_53765[iVar9 /*203*/].f_1 == iParam1 && Global_53765[iVar9 /*203*/].f_9 > 0)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == -1)
		{
			return;
		}
		Global_53403[iParam0 /*120*/].f_18[iVar0] = Global_53765[iVar8 /*203*/].f_1;
		Global_53403[iParam0 /*120*/].f_1[iVar0] = (Global_53765[iVar8 /*203*/].f_9 - 1);
		Global_53403[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_53403[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_53403[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_53403[iParam0 /*120*/]++;
		iVar10 = Global_53403[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_53765[iVar8 /*203*/].f_10[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_44465[iVar11 /*12*/].f_2;
		if (Global_53765[iVar8 /*203*/].f_10[(Global_53765[iVar8 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_53765[iVar8 /*203*/].f_10[(Global_53765[iVar8 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_13(Global_44465[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_53403[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_2(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_2(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_2(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_2(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_19(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_14(iParam0);
	if (iVar0 > -1)
	{
		if (Global_53765[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_53765[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_53765[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_53765[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_53765[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_53765[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_53765[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_53765[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_53403[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_53403[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_53403[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_53403[iVar6 /*120*/].f_18[iVar8] == Global_53765[iVar4 /*203*/].f_1)
							{
								if (Global_53403[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_44457 = (Global_44457 - 1);
											break;
										
										case 1:
											Global_44458 = (Global_44458 - 1);
											break;
										
										case 2:
											Global_44459 = (Global_44459 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_53765[iVar4 /*203*/].f_2 = iParam0;
	Global_53765[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_53765[iVar4 /*203*/] = 1;
	}
	Global_113648.f_21039.f_310++;
	if (Global_113648.f_21039.f_310 == 0)
	{
		Global_113648.f_21039.f_310 = 1;
	}
	Global_53765[iVar4 /*203*/].f_1 = Global_113648.f_21039.f_310;
	Global_53765[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_20(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_30(iParam0, iParam1))
	{
		iVar0 = func_29(iParam1);
		iVar1 = func_27(iParam0);
		iVar2 = (func_27(iParam0) - func_27(iParam1));
		iVar3 = (func_29(iParam0) - func_29(iParam1));
		iVar4 = (func_26(iParam0) - func_26(iParam1));
		iVar5 = (func_25(iParam0) - func_25(iParam1));
		iVar6 = (func_24(iParam0) - func_24(iParam1));
		iVar7 = (func_23(iParam0) - func_23(iParam1));
	}
	else
	{
		iVar0 = func_29(iParam0);
		iVar1 = func_27(iParam1);
		iVar2 = (func_27(iParam1) - func_27(iParam0));
		iVar3 = (func_29(iParam1) - func_29(iParam0));
		iVar4 = (func_26(iParam1) - func_26(iParam0));
		iVar5 = (func_25(iParam1) - func_25(iParam0));
		iVar6 = (func_24(iParam1) - func_24(iParam0));
		iVar7 = (func_23(iParam1) - func_23(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_22(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_21(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

float func_21(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_22(int iParam0, int iParam1)
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

int func_23(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_24(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_25(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_26(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_27(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_28(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_28(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_29(int iParam0)
{
	return iParam0 & 15;
}

int func_30(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_31(iParam1) || !func_31(iParam0))
	{
		return 1;
	}
	iVar0 = func_27(iParam0);
	iVar1 = func_27(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_29(iParam0);
	iVar1 = func_29(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_26(iParam0);
	iVar1 = func_26(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	return 0;
}

int func_31(int iParam0)
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
	iVar0 = func_23(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_24(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_25(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_27(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_29(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_26(iParam0);
	if (iVar5 < 1 || iVar5 > func_22(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_32(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_47790[iParam0 /*46*/] && !Global_47790[iParam0 /*46*/].f_1)
	{
		return;
	}
	if (Global_47790[iParam0 /*46*/].f_31 == Global_47790[iParam0 /*46*/].f_30)
	{
		iVar0 = (Global_47790[iParam0 /*46*/].f_42 - 1);
		if (iVar0 < 0)
		{
			return;
		}
		if (Global_44465[Global_47790[iParam0 /*46*/].f_32[iVar0] /*12*/].f_4 == 0)
		{
			Global_47790[iParam0 /*46*/].f_1 = 1;
		}
		return;
	}
	if (Global_47790[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar1 = Global_47790[iParam0 /*46*/].f_8[Global_47790[iParam0 /*46*/].f_31];
	Global_47790[iParam0 /*46*/].f_31++;
	func_33(iParam0, iVar1);
	Global_47790[iParam0 /*46*/].f_45 = Global_44465[iVar1 /*12*/].f_10;
	Global_47790[iParam0 /*46*/].f_43 = Global_44465[iVar1 /*12*/].f_11;
	iVar2 = Global_47790[iParam0 /*46*/].f_2;
	func_18(Global_44465[iVar1 /*12*/].f_3, iParam0, 0, 0, bParam1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_47790[iParam0 /*46*/].f_3[iVar3] != Global_44465[iVar1 /*12*/].f_2 && Global_47790[iParam0 /*46*/].f_3[iVar3] != Global_44465[iVar1 /*12*/].f_3)
		{
			func_18(Global_47790[iParam0 /*46*/].f_3[iVar3], iParam0, 0, 0, bParam1);
		}
		iVar3++;
	}
	if (Global_47790[iParam0 /*46*/].f_31 == Global_47790[iParam0 /*46*/].f_30)
	{
		if (Global_44465[Global_47790[iParam0 /*46*/].f_32[(Global_47790[iParam0 /*46*/].f_42 - 1)] /*12*/].f_4 == 0)
		{
			Global_47790[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}
}

int func_33(int iParam0, var uParam1)
{
	if (Global_47790[iParam0 /*46*/].f_42 >= 9)
	{
		return 0;
	}
	Global_47790[iParam0 /*46*/].f_32[Global_47790[iParam0 /*46*/].f_42] = uParam1;
	Global_47790[iParam0 /*46*/].f_42++;
	return 1;
}

int func_34(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[16];
	int iVar6[2];
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (!unk_0x9390801B06EE998F())
	{
		return 0;
	}
	if (func_59())
	{
		return 0;
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D()) != -1)
		{
			return 0;
		}
	}
	if (unk_0x1F9EB85925C3ECD7())
	{
		return 0;
	}
	if (func_58() && iParam2 < 4)
	{
		return 0;
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (func_56(unk_0x4A8C381C258A124D()))
		{
			if (BitTest(iParam0, func_55()) && !BitTest(iParam4, 19))
			{
				return 0;
			}
		}
	}
	if (Global_78556)
	{
		return 0;
	}
	if (unk_0xFD216000DC314A92())
	{
		return 0;
	}
	if (Global_75693)
	{
		return 0;
	}
	if (Global_96688)
	{
		return 0;
	}
	if ((func_54() || (Global_23131.f_4 && Global_23131.f_104 == 4)) || func_53())
	{
		return 0;
	}
	if (BitTest(iParam4, 18))
	{
		if (!BitTest(iParam0, func_55()))
		{
			return 0;
		}
	}
	iVar0 = 1;
	if (((Global_100681 == 13 || Global_100681 == 10) || Global_100681 == 11) || Global_100681 == 12)
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	else if (iParam2 != 5)
	{
		if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 1)
		{
			return 0;
		}
		if (unk_0x46150A5112561134())
		{
			return 0;
		}
		if (Global_97609)
		{
			return 0;
		}
		if (func_46(50f, 1) != -1)
		{
			return 0;
		}
		if (((((iParam1 == 17 || iParam1 == 19) || iParam1 == 14) || iParam1 == 0) || iParam1 == 1) || iParam1 == 2)
		{
			if (BitTest(iParam0, func_55()))
			{
				iVar1 = func_43(func_6());
				iVar2 = func_43(iParam1);
				iVar3 = func_42(iVar1, iVar2);
				if (iVar3 < 9)
				{
					if (Global_113648.f_18105.f_175[iVar3 /*19*/].f_8 == 1 || Global_113648.f_18105.f_175[iVar3 /*19*/].f_8 == 2)
					{
						if (func_41(&(Global_113648.f_18105.f_175[iVar3 /*19*/].f_5)))
						{
							if (func_38(&(Global_113648.f_18105.f_175[iVar3 /*19*/].f_5)) < 30f)
							{
								return 0;
							}
						}
					}
				}
			}
		}
	}
	if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 2)
	{
		return 0;
	}
	if (func_37())
	{
		return 0;
	}
	if (BitTest(iParam4, 3))
	{
		if (Global_112695)
		{
			return 0;
		}
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
			{
				return 0;
			}
		}
		if (Global_112358.f_19 != 0)
		{
			return 0;
		}
		if (Global_43257 == 5)
		{
			return 0;
		}
	}
	if (iParam3 != -1)
	{
		if (func_36(unk_0x4A8C381C258A124D(), iParam3, 0))
		{
			return 0;
		}
	}
	iVar4 = func_6();
	if (func_9(iVar4))
	{
		unk_0xAA3F0A9E20917995(unk_0x4A8C381C258A124D(), &uVar5, -1);
		switch (iParam1)
		{
			case 4:
				switch (iVar4)
				{
					case 0:
						iVar6[0] = func_11(1);
						iVar6[1] = func_11(2);
						break;
					
					case 1:
						iVar6[0] = func_11(0);
						iVar6[1] = func_11(2);
						break;
					
					case 2:
						iVar6[0] = func_11(0);
						iVar6[1] = func_11(1);
						break;
				}
				break;
			
			case 5:
				iVar6[0] = func_11(1);
				iVar6[1] = func_11(2);
				break;
			
			case 6:
				iVar6[0] = func_35(12);
				iVar6[1] = func_11(1);
				break;
			
			case 7:
				iVar6[0] = func_35(12);
				iVar6[1] = func_11(0);
				break;
			
			case 8:
				iVar6[0] = func_11(0);
				iVar6[1] = func_11(1);
				break;
			
			case 9:
				iVar6[0] = func_11(0);
				iVar6[1] = func_11(2);
				break;
			
			case 10:
				iVar6[0] = func_35(23);
				iVar6[1] = func_11(0);
				break;
			
			case 11:
				iVar6[0] = func_35(23);
				iVar6[1] = func_11(0);
				break;
			
			default:
				if (func_9(iParam1))
				{
					iVar6[0] = func_11(iParam1);
				}
				else
				{
					iVar6[0] = func_35(iParam1);
				}
				iVar6[1] = 0;
				break;
		}
		iVar7 = 0;
		while (iVar7 < 2)
		{
			if (iVar6[iVar7] != 0)
			{
				iVar8 = 0;
				while (iVar8 < 16)
				{
					if (unk_0xFC8BFE4B41177C22(uVar5[iVar8]))
					{
						if (unk_0x4B423FAA24E8ABF0(uVar5[iVar8]) == iVar6[iVar7])
						{
							if (!unk_0x1C2F771CDC87A3A5(uVar5[iVar8], 0))
							{
								if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
								{
									if (vdist2(unk_0xD1A6A821F5AC81DB(uVar5[iVar8], 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) < 6400f)
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
					iVar8++;
				}
				iVar9 = 0;
				switch (iVar6[iVar7])
				{
					case joaat("player_zero"):
						iVar9 = Global_98159[0];
						break;
					
					case joaat("player_one"):
						iVar9 = Global_98159[1];
						break;
					
					case joaat("player_two"):
						iVar9 = Global_98159[2];
						break;
				}
				if (unk_0xFC8BFE4B41177C22(iVar9))
				{
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
					{
						if (vdist2(unk_0xD1A6A821F5AC81DB(iVar9, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) < 6400f)
						{
							return 0;
						}
					}
				}
				switch (iVar6[iVar7])
				{
					case joaat("player_zero"):
						iVar9 = Global_100606[0];
						break;
					
					case joaat("player_one"):
						iVar9 = Global_100606[1];
						break;
					
					case joaat("player_two"):
						iVar9 = Global_100606[2];
						break;
				}
				if (unk_0xFC8BFE4B41177C22(iVar9))
				{
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
					{
						if (vdist2(unk_0xD1A6A821F5AC81DB(iVar9, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) < 6400f)
						{
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_35(int iParam0)
{
	if (!func_9(iParam0))
	{
		return func_12(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_36(int iParam0, int iParam1, float fParam2)
{
	struct<5> Var0;
	float fVar1;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		Var0 = { Global_43258[iParam1 /*5*/] };
		fVar1 = Var0.f_3;
		if (fParam2 > 0f)
		{
			fVar1 = fParam2;
		}
		if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(iParam0, 1), Var0, 1) < fVar1)
		{
			return 1;
		}
		else if (Var0.f_4 != -1)
		{
			return func_36(iParam0, Var0.f_4, fParam2);
		}
	}
	return 0;
}

int func_37()
{
	if (Global_78819)
	{
		return 1;
	}
	else if (Global_63356 && !Global_63362)
	{
		return 1;
	}
	return 0;
}

float func_38(var uParam0)
{
	if (func_41(uParam0))
	{
		if (func_40(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_39(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_39(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(unk_0x1DD05E817C89C737());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		iVar2 = unk_0x7E3F74F641EE6B27();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0x1DD05E817C89C737()) / 1000f);
}

bool func_40(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_41(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_42(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_43(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < func_45())
	{
		return func_44(iParam0);
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == func_45())
	{
		return 6;
	}
	if (iParam0 == 191)
	{
		return 6;
	}
	return 6;
}

var func_44(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_11;
}

int func_45()
{
	if (Global_32163 == 0 || Global_32163 == 2)
	{
		return 190;
	}
	return 161;
}

int func_46(float fParam0, bool bParam1)
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
		iVar5 = func_52();
		iVar6 = 0;
		iVar6 = 0;
		while (iVar6 < 63)
		{
			iVar1 = iVar6;
			if (BitTest(Global_113648.f_18576[iVar1 /*6*/], 2) && !BitTest(Global_113648.f_18576[iVar1 /*6*/], 3))
			{
				func_47(iVar1, &Var0);
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
	return iVar2;
}

void func_47(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_48(uParam1, "Abigail1", func_50(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 1:
			func_48(uParam1, "Abigail2", func_50(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 2:
			func_48(uParam1, "Barry1", func_50(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 3:
			func_48(uParam1, "Barry2", func_50(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
		
		case 4:
			func_48(uParam1, "Barry3", func_50(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 5:
			func_48(uParam1, "Barry3A", func_50(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 6:
			func_48(uParam1, "Barry3C", func_50(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 7:
			func_48(uParam1, "Barry4", func_50(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_49(iParam0), 0, 0);
			break;
		
		case 8:
			func_48(uParam1, "Dreyfuss1", func_50(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 9:
			func_48(uParam1, "Epsilon1", func_50(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 10:
			func_48(uParam1, "Epsilon2", func_50(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 11:
			func_48(uParam1, "Epsilon3", func_50(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 12:
			func_48(uParam1, "Epsilon4", func_50(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 13:
			func_48(uParam1, "Epsilon5", func_50(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 14:
			func_48(uParam1, "Epsilon6", func_50(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 15:
			func_48(uParam1, "Epsilon7", func_50(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 16:
			func_48(uParam1, "Epsilon8", func_50(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 17:
			func_48(uParam1, "Extreme1", func_50(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 18:
			func_48(uParam1, "Extreme2", func_50(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 19:
			func_48(uParam1, "Extreme3", func_50(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 20:
			func_48(uParam1, "Extreme4", func_50(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 21:
			func_48(uParam1, "Fanatic1", func_50(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_49(iParam0), 1, 0);
			break;
		
		case 22:
			func_48(uParam1, "Fanatic2", func_50(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_49(iParam0), 1, 0);
			break;
		
		case 23:
			func_48(uParam1, "Fanatic3", func_50(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_49(iParam0), 0, 1);
			break;
		
		case 24:
			func_48(uParam1, "Hao1", func_50(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_49(iParam0), 0, 1);
			break;
		
		case 25:
			func_48(uParam1, "Hunting1", func_50(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 26:
			func_48(uParam1, "Hunting2", func_50(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 27:
			func_48(uParam1, "Josh1", func_50(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 28:
			func_48(uParam1, "Josh2", func_50(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
		
		case 29:
			func_48(uParam1, "Josh3", func_50(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
		
		case 30:
			func_48(uParam1, "Josh4", func_50(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 31:
			func_48(uParam1, "Maude1", func_50(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 32:
			func_48(uParam1, "Minute1", func_50(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 33:
			func_48(uParam1, "Minute2", func_50(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 34:
			func_48(uParam1, "Minute3", func_50(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 35:
			func_48(uParam1, "MrsPhilips1", func_50(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 36:
			func_48(uParam1, "MrsPhilips2", func_50(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 37:
			func_48(uParam1, "Nigel1", func_50(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 38:
			func_48(uParam1, "Nigel1A", func_50(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
		
		case 39:
			func_48(uParam1, "Nigel1B", func_50(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_49(iParam0), 1, 1);
			break;
		
		case 40:
			func_48(uParam1, "Nigel1C", func_50(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_49(iParam0), 1, 1);
			break;
		
		case 41:
			func_48(uParam1, "Nigel1D", func_50(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_49(iParam0), 1, 1);
			break;
		
		case 42:
			func_48(uParam1, "Nigel2", func_50(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
		
		case 43:
			func_48(uParam1, "Nigel3", func_50(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
		
		case 44:
			func_48(uParam1, "Omega1", func_50(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 45:
			func_48(uParam1, "Omega2", func_50(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 46:
			func_48(uParam1, "Paparazzo1", func_50(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 47:
			func_48(uParam1, "Paparazzo2", func_50(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 48:
			func_48(uParam1, "Paparazzo3", func_50(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 49:
			func_48(uParam1, "Paparazzo3A", func_50(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 50:
			func_48(uParam1, "Paparazzo3B", func_50(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 51:
			func_48(uParam1, "Paparazzo4", func_50(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 52:
			func_48(uParam1, "Rampage1", func_50(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 54:
			func_48(uParam1, "Rampage3", func_50(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 55:
			func_48(uParam1, "Rampage4", func_50(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 56:
			func_48(uParam1, "Rampage5", func_50(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 53:
			func_48(uParam1, "Rampage2", func_50(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 57:
			func_48(uParam1, "TheLastOne", func_50(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 58:
			func_48(uParam1, "Tonya1", func_50(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 59:
			func_48(uParam1, "Tonya2", func_50(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 60:
			func_48(uParam1, "Tonya3", func_50(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 61:
			func_48(uParam1, "Tonya4", func_50(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 62:
			func_48(uParam1, "Tonya5", func_50(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_48(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_49(int iParam0)
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

struct<2> func_50(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_51(iParam0) };
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

struct<2> func_51(int iParam0)
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

int func_52()
{
	func_7();
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

int func_53()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_54()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98159.f_44 == 1;
	}
	return 0;
}

bool func_55()
{
	func_7();
	return Global_113648.f_2365.f_539.f_4321;
}

int func_56(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_57(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_57(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_44232[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44232[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_58()
{
	if (Global_43257 == 15)
	{
		return 0;
	}
	return 1;
}

int func_59()
{
	if (Global_20383.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_60(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!BitTest(Global_113648.f_24988, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_14(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_53765[iVar0 /*203*/] = 0;
}

var func_61()
{
	var uVar0;
	
	func_67(&uVar0, unk_0x4BA5A16068183C5E());
	func_66(&uVar0, unk_0x18E502A71E28968C());
	func_65(&uVar0, unk_0x5295501D0862870D());
	func_64(&uVar0, unk_0xB12880C92EA6EE15());
	func_63(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_62(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_62(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_63(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_64(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_29(*uParam0);
	iVar1 = func_27(*uParam0);
	if (iParam1 < 1 || iParam1 > func_22(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_65(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_66(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_67(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

void func_68()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_53403[iVar0 /*120*/] = Global_113648.f_21039[iVar0 /*103*/];
		iVar1 = 0;
		while (iVar1 < 16)
		{
			Global_53403[iVar0 /*120*/].f_1[iVar1] = Global_113648.f_21039[iVar0 /*103*/].f_1[iVar1];
			Global_53403[iVar0 /*120*/].f_18[iVar1] = Global_113648.f_21039[iVar0 /*103*/].f_18[iVar1];
			Global_53403[iVar0 /*120*/].f_35[iVar1] = Global_113648.f_21039[iVar0 /*103*/].f_35[iVar1];
			Global_53403[iVar0 /*120*/].f_52[iVar1] = Global_113648.f_21039[iVar0 /*103*/].f_52[iVar1];
			Global_53403[iVar0 /*120*/].f_69[iVar1] = Global_113648.f_21039[iVar0 /*103*/].f_69[iVar1];
			Global_53403[iVar0 /*120*/].f_86[iVar1] = Global_113648.f_21039[iVar0 /*103*/].f_86[iVar1];
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_53765[iVar0 /*203*/].f_2 = Global_113648.f_21039.f_311[iVar0 /*203*/];
		Global_53765[iVar0 /*203*/] = Global_113648.f_21039.f_311[iVar0 /*203*/].f_2;
		Global_53765[iVar0 /*203*/].f_3 = Global_113648.f_21039.f_311[iVar0 /*203*/].f_3;
		Global_53765[iVar0 /*203*/].f_1 = Global_113648.f_21039.f_311[iVar0 /*203*/].f_1;
		Global_53765[iVar0 /*203*/].f_9 = Global_113648.f_21039.f_311[iVar0 /*203*/].f_9;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_53765[iVar0 /*203*/].f_4[iVar1] = Global_113648.f_21039.f_311[iVar0 /*203*/].f_4[iVar1];
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_53765[iVar0 /*203*/].f_10[iVar1 /*48*/] = Global_113648.f_21039.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/];
			Global_53765[iVar0 /*203*/].f_10[iVar1 /*48*/].f_1 = Global_113648.f_21039.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_1;
			Global_53765[iVar0 /*203*/].f_10[iVar1 /*48*/].f_2 = { Global_113648.f_21039.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_2 };
			Global_53765[iVar0 /*203*/].f_10[iVar1 /*48*/].f_6 = Global_113648.f_21039.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_6;
			iVar2 = 0;
			while (iVar2 < 10)
			{
				Global_53765[iVar0 /*203*/].f_10[iVar1 /*48*/].f_7[iVar2 /*4*/] = { Global_113648.f_21039.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_7[iVar2 /*4*/] };
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 122)
	{
		Global_47790[iVar0 /*46*/] = Global_113648.f_21039.f_1733[iVar0 /*14*/];
		Global_47790[iVar0 /*46*/].f_1 = Global_113648.f_21039.f_1733[iVar0 /*14*/].f_1;
		Global_47790[iVar0 /*46*/].f_45 = Global_113648.f_21039.f_1733[iVar0 /*14*/].f_2;
		Global_47790[iVar0 /*46*/].f_31 = Global_113648.f_21039.f_1733[iVar0 /*14*/].f_3;
		iVar1 = 0;
		while (iVar1 < 9)
		{
			if (Global_113648.f_21039.f_1733[iVar0 /*14*/].f_4[iVar1] > 0)
			{
				Global_47790[iVar0 /*46*/].f_32[iVar1] = (Global_113648.f_21039.f_1733[iVar0 /*14*/].f_4[iVar1] - 1);
				Global_47790[iVar0 /*46*/].f_42++;
			}
			iVar1++;
		}
		iVar0++;
	}
	Global_55187 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_55188[iVar0 /*53*/] = Global_113648.f_21039.f_3442[iVar0 /*53*/];
		Global_55188[iVar0 /*53*/].f_1 = Global_113648.f_21039.f_3442[iVar0 /*53*/].f_1;
		Global_55188[iVar0 /*53*/].f_2 = Global_113648.f_21039.f_3442[iVar0 /*53*/].f_2;
		Global_55188[iVar0 /*53*/].f_5 = Global_113648.f_21039.f_3442[iVar0 /*53*/].f_5;
		Global_55188[iVar0 /*53*/].f_6 = { Global_113648.f_21039.f_3442[iVar0 /*53*/].f_6 };
		Global_55188[iVar0 /*53*/].f_10 = Global_113648.f_21039.f_3442[iVar0 /*53*/].f_10;
		iVar1 = 0;
		while (iVar1 < 10)
		{
			Global_55188[iVar0 /*53*/].f_11[iVar1 /*4*/] = { Global_113648.f_21039.f_3442[iVar0 /*53*/].f_11[iVar1 /*4*/] };
			iVar1++;
		}
		Global_55188[iVar0 /*53*/].f_52 = Global_113648.f_21039.f_3442[iVar0 /*53*/].f_52;
		if (Global_55188[iVar0 /*53*/].f_52 != 0)
		{
			Global_55187++;
		}
		iVar0++;
	}
}

void func_69()
{
	Global_44465[0 /*12*/] = 15;
	Global_44465[0 /*12*/].f_1 = 16;
	Global_44465[0 /*12*/].f_2 = 4;
	Global_44465[0 /*12*/].f_3 = 0;
	Global_44465[0 /*12*/].f_10 = 1;
	Global_44465[0 /*12*/].f_11 = 0;
	Global_44465[0 /*12*/].f_4 = 0;
	Global_44465[1 /*12*/] = 17;
	Global_44465[1 /*12*/].f_1 = 16;
	Global_44465[1 /*12*/].f_2 = 4;
	Global_44465[1 /*12*/].f_3 = 0;
	Global_44465[1 /*12*/].f_10 = 1;
	Global_44465[1 /*12*/].f_11 = 0;
	Global_44465[1 /*12*/].f_4 = 0;
	Global_44465[2 /*12*/] = 18;
	Global_44465[2 /*12*/].f_1 = 16;
	Global_44465[2 /*12*/].f_2 = 4;
	Global_44465[2 /*12*/].f_3 = 0;
	Global_44465[2 /*12*/].f_10 = 1;
	Global_44465[2 /*12*/].f_11 = 0;
	Global_44465[2 /*12*/].f_4 = 0;
	Global_44465[3 /*12*/] = 19;
	Global_44465[3 /*12*/].f_1 = 16;
	Global_44465[3 /*12*/].f_2 = 4;
	Global_44465[3 /*12*/].f_3 = 0;
	Global_44465[3 /*12*/].f_10 = 1;
	Global_44465[3 /*12*/].f_11 = 0;
	Global_44465[3 /*12*/].f_4 = 0;
	Global_44465[4 /*12*/] = 20;
	Global_44465[4 /*12*/].f_1 = 16;
	Global_44465[4 /*12*/].f_2 = 4;
	Global_44465[4 /*12*/].f_3 = 0;
	Global_44465[4 /*12*/].f_10 = 1;
	Global_44465[4 /*12*/].f_11 = 0;
	Global_44465[4 /*12*/].f_4 = 0;
	Global_44465[5 /*12*/] = 21;
	Global_44465[5 /*12*/].f_1 = 16;
	Global_44465[5 /*12*/].f_2 = 4;
	Global_44465[5 /*12*/].f_3 = 0;
	Global_44465[5 /*12*/].f_10 = 1;
	Global_44465[5 /*12*/].f_11 = 0;
	Global_44465[5 /*12*/].f_4 = 0;
	Global_44465[6 /*12*/] = 22;
	Global_44465[6 /*12*/].f_1 = 16;
	Global_44465[6 /*12*/].f_2 = 4;
	Global_44465[6 /*12*/].f_3 = 0;
	Global_44465[6 /*12*/].f_10 = 0;
	Global_44465[6 /*12*/].f_11 = 0;
	Global_44465[6 /*12*/].f_4 = 0;
	Global_44465[7 /*12*/] = 23;
	Global_44465[7 /*12*/].f_1 = 24;
	Global_44465[7 /*12*/].f_2 = 4;
	Global_44465[7 /*12*/].f_3 = 0;
	Global_44465[7 /*12*/].f_10 = 0;
	Global_44465[7 /*12*/].f_11 = 0;
	Global_44465[7 /*12*/].f_4 = 0;
	Global_44465[8 /*12*/] = 25;
	Global_44465[8 /*12*/].f_1 = 26;
	Global_44465[8 /*12*/].f_2 = 4;
	Global_44465[8 /*12*/].f_3 = 0;
	Global_44465[8 /*12*/].f_10 = 0;
	Global_44465[8 /*12*/].f_11 = 0;
	Global_44465[8 /*12*/].f_4 = 0;
	Global_44465[9 /*12*/] = 27;
	Global_44465[9 /*12*/].f_1 = 28;
	Global_44465[9 /*12*/].f_2 = 4;
	Global_44465[9 /*12*/].f_3 = 0;
	Global_44465[9 /*12*/].f_10 = 0;
	Global_44465[9 /*12*/].f_11 = 0;
	Global_44465[9 /*12*/].f_4 = 0;
	Global_44465[10 /*12*/] = 32;
	Global_44465[10 /*12*/].f_1 = 33;
	Global_44465[10 /*12*/].f_2 = 5;
	Global_44465[10 /*12*/].f_3 = 0;
	Global_44465[10 /*12*/].f_10 = 0;
	Global_44465[10 /*12*/].f_11 = 0;
	Global_44465[10 /*12*/].f_4 = 0;
	Global_44465[11 /*12*/] = 34;
	Global_44465[11 /*12*/].f_1 = 35;
	Global_44465[11 /*12*/].f_2 = 5;
	Global_44465[11 /*12*/].f_3 = 0;
	Global_44465[11 /*12*/].f_10 = 0;
	Global_44465[11 /*12*/].f_11 = 0;
	Global_44465[11 /*12*/].f_4 = 0;
	Global_44465[12 /*12*/] = 42;
	Global_44465[12 /*12*/].f_1 = 43;
	Global_44465[12 /*12*/].f_2 = 7;
	Global_44465[12 /*12*/].f_3 = 1;
	Global_44465[12 /*12*/].f_10 = 0;
	Global_44465[12 /*12*/].f_11 = 0;
	Global_44465[12 /*12*/].f_4 = 0;
	Global_44465[13 /*12*/] = 44;
	Global_44465[13 /*12*/].f_1 = 45;
	Global_44465[13 /*12*/].f_2 = 7;
	Global_44465[13 /*12*/].f_3 = 1;
	Global_44465[13 /*12*/].f_10 = 0;
	Global_44465[13 /*12*/].f_11 = 0;
	Global_44465[13 /*12*/].f_4 = 0;
	Global_44465[14 /*12*/] = 46;
	Global_44465[14 /*12*/].f_1 = 47;
	Global_44465[14 /*12*/].f_2 = 7;
	Global_44465[14 /*12*/].f_3 = 1;
	Global_44465[14 /*12*/].f_10 = 0;
	Global_44465[14 /*12*/].f_11 = 0;
	Global_44465[14 /*12*/].f_4 = 0;
	Global_44465[15 /*12*/] = 48;
	Global_44465[15 /*12*/].f_1 = 49;
	Global_44465[15 /*12*/].f_2 = 7;
	Global_44465[15 /*12*/].f_3 = 1;
	Global_44465[15 /*12*/].f_10 = 0;
	Global_44465[15 /*12*/].f_11 = 0;
	Global_44465[15 /*12*/].f_4 = 0;
	Global_44465[16 /*12*/] = 50;
	Global_44465[16 /*12*/].f_1 = 51;
	Global_44465[16 /*12*/].f_2 = 4;
	Global_44465[16 /*12*/].f_3 = 0;
	Global_44465[16 /*12*/].f_10 = 0;
	Global_44465[16 /*12*/].f_11 = 0;
	Global_44465[16 /*12*/].f_4 = 0;
	Global_44465[17 /*12*/] = 61;
	Global_44465[17 /*12*/].f_1 = 62;
	Global_44465[17 /*12*/].f_2 = 8;
	Global_44465[17 /*12*/].f_3 = 0;
	Global_44465[17 /*12*/].f_10 = 1;
	Global_44465[17 /*12*/].f_11 = 0;
	Global_44465[17 /*12*/].f_4 = 0;
	Global_44465[18 /*12*/] = 63;
	Global_44465[18 /*12*/].f_1 = 64;
	Global_44465[18 /*12*/].f_2 = 9;
	Global_44465[18 /*12*/].f_3 = 1;
	Global_44465[18 /*12*/].f_10 = 1;
	Global_44465[18 /*12*/].f_11 = 0;
	Global_44465[18 /*12*/].f_4 = 0;
	Global_44465[19 /*12*/] = 61;
	Global_44465[19 /*12*/].f_1 = 65;
	Global_44465[19 /*12*/].f_2 = 8;
	Global_44465[19 /*12*/].f_3 = 0;
	Global_44465[19 /*12*/].f_10 = 1;
	Global_44465[19 /*12*/].f_11 = 0;
	Global_44465[19 /*12*/].f_4 = 0;
	Global_44465[20 /*12*/] = 61;
	Global_44465[20 /*12*/].f_1 = 66;
	Global_44465[20 /*12*/].f_2 = 8;
	Global_44465[20 /*12*/].f_3 = 0;
	Global_44465[20 /*12*/].f_10 = 1;
	Global_44465[20 /*12*/].f_11 = 0;
	Global_44465[20 /*12*/].f_4 = 0;
	Global_44465[21 /*12*/] = 61;
	Global_44465[21 /*12*/].f_1 = 67;
	Global_44465[21 /*12*/].f_2 = 8;
	Global_44465[21 /*12*/].f_3 = 0;
	Global_44465[21 /*12*/].f_10 = 1;
	Global_44465[21 /*12*/].f_11 = 0;
	Global_44465[21 /*12*/].f_4 = 0;
	Global_44465[22 /*12*/] = 61;
	Global_44465[22 /*12*/].f_1 = 68;
	Global_44465[22 /*12*/].f_2 = 8;
	Global_44465[22 /*12*/].f_3 = 0;
	Global_44465[22 /*12*/].f_10 = 0;
	Global_44465[22 /*12*/].f_11 = 0;
	Global_44465[22 /*12*/].f_4 = 0;
	Global_44465[23 /*12*/] = 69;
	Global_44465[23 /*12*/].f_1 = 70;
	Global_44465[23 /*12*/].f_2 = 10;
	Global_44465[23 /*12*/].f_3 = 2;
	Global_44465[23 /*12*/].f_10 = 1;
	Global_44465[23 /*12*/].f_11 = 0;
	Global_44465[23 /*12*/].f_4 = 0;
	Global_44465[24 /*12*/] = 63;
	Global_44465[24 /*12*/].f_1 = 74;
	Global_44465[24 /*12*/].f_2 = 9;
	Global_44465[24 /*12*/].f_3 = 1;
	Global_44465[24 /*12*/].f_10 = 1;
	Global_44465[24 /*12*/].f_11 = 0;
	Global_44465[24 /*12*/].f_4 = 0;
	Global_44465[25 /*12*/] = 63;
	Global_44465[25 /*12*/].f_1 = 75;
	Global_44465[25 /*12*/].f_2 = 9;
	Global_44465[25 /*12*/].f_3 = 1;
	Global_44465[25 /*12*/].f_10 = 1;
	Global_44465[25 /*12*/].f_11 = 0;
	Global_44465[25 /*12*/].f_4 = 0;
	Global_44465[26 /*12*/] = 63;
	Global_44465[26 /*12*/].f_1 = 76;
	Global_44465[26 /*12*/].f_2 = 9;
	Global_44465[26 /*12*/].f_3 = 1;
	Global_44465[26 /*12*/].f_10 = 1;
	Global_44465[26 /*12*/].f_11 = 0;
	Global_44465[26 /*12*/].f_4 = 0;
	Global_44465[27 /*12*/] = 63;
	Global_44465[27 /*12*/].f_1 = 77;
	Global_44465[27 /*12*/].f_2 = 9;
	Global_44465[27 /*12*/].f_3 = 1;
	Global_44465[27 /*12*/].f_10 = 0;
	Global_44465[27 /*12*/].f_11 = 0;
	Global_44465[27 /*12*/].f_4 = 0;
	Global_44465[28 /*12*/] = 69;
	Global_44465[28 /*12*/].f_1 = 73;
	Global_44465[28 /*12*/].f_2 = 10;
	Global_44465[28 /*12*/].f_3 = 2;
	Global_44465[28 /*12*/].f_10 = 1;
	Global_44465[28 /*12*/].f_11 = 0;
	Global_44465[28 /*12*/].f_4 = 0;
	Global_44465[29 /*12*/] = 69;
	Global_44465[29 /*12*/].f_1 = 72;
	Global_44465[29 /*12*/].f_2 = 10;
	Global_44465[29 /*12*/].f_3 = 2;
	Global_44465[29 /*12*/].f_10 = 1;
	Global_44465[29 /*12*/].f_11 = 0;
	Global_44465[29 /*12*/].f_4 = 0;
	Global_44465[30 /*12*/] = 69;
	Global_44465[30 /*12*/].f_1 = 71;
	Global_44465[30 /*12*/].f_2 = 10;
	Global_44465[30 /*12*/].f_3 = 2;
	Global_44465[30 /*12*/].f_10 = 0;
	Global_44465[30 /*12*/].f_11 = 0;
	Global_44465[30 /*12*/].f_4 = 0;
	Global_44465[31 /*12*/] = 90;
	Global_44465[31 /*12*/].f_1 = 91;
	Global_44465[31 /*12*/].f_2 = 11;
	Global_44465[31 /*12*/].f_3 = 1;
	Global_44465[31 /*12*/].f_10 = 0;
	Global_44465[31 /*12*/].f_11 = 0;
	Global_44465[31 /*12*/].f_4 = 0;
	Global_44465[32 /*12*/] = 90;
	Global_44465[32 /*12*/].f_1 = 92;
	Global_44465[32 /*12*/].f_2 = 11;
	Global_44465[32 /*12*/].f_3 = 0;
	Global_44465[32 /*12*/].f_10 = 0;
	Global_44465[32 /*12*/].f_11 = 0;
	Global_44465[32 /*12*/].f_4 = 0;
	Global_44465[33 /*12*/] = 90;
	Global_44465[33 /*12*/].f_1 = 93;
	Global_44465[33 /*12*/].f_2 = 11;
	Global_44465[33 /*12*/].f_3 = 2;
	Global_44465[33 /*12*/].f_10 = 0;
	Global_44465[33 /*12*/].f_11 = 0;
	Global_44465[33 /*12*/].f_4 = 0;
	Global_44465[34 /*12*/] = 94;
	Global_44465[34 /*12*/].f_1 = 95;
	Global_44465[34 /*12*/].f_2 = 13;
	Global_44465[34 /*12*/].f_3 = 0;
	Global_44465[34 /*12*/].f_10 = 0;
	Global_44465[34 /*12*/].f_11 = 0;
	Global_44465[34 /*12*/].f_4 = 0;
	Global_44465[35 /*12*/] = 94;
	Global_44465[35 /*12*/].f_1 = 96;
	Global_44465[35 /*12*/].f_2 = 13;
	Global_44465[35 /*12*/].f_3 = 1;
	Global_44465[35 /*12*/].f_10 = 0;
	Global_44465[35 /*12*/].f_11 = 0;
	Global_44465[35 /*12*/].f_4 = 0;
	Global_44465[36 /*12*/] = 94;
	Global_44465[36 /*12*/].f_1 = 97;
	Global_44465[36 /*12*/].f_2 = 13;
	Global_44465[36 /*12*/].f_3 = 2;
	Global_44465[36 /*12*/].f_10 = 0;
	Global_44465[36 /*12*/].f_11 = 0;
	Global_44465[36 /*12*/].f_4 = 0;
	Global_44465[37 /*12*/] = 94;
	Global_44465[37 /*12*/].f_1 = 98;
	Global_44465[37 /*12*/].f_2 = 14;
	Global_44465[37 /*12*/].f_3 = 0;
	Global_44465[37 /*12*/].f_10 = 0;
	Global_44465[37 /*12*/].f_11 = 0;
	Global_44465[37 /*12*/].f_4 = 0;
	Global_44465[38 /*12*/] = 94;
	Global_44465[38 /*12*/].f_1 = 99;
	Global_44465[38 /*12*/].f_2 = 14;
	Global_44465[38 /*12*/].f_3 = 1;
	Global_44465[38 /*12*/].f_10 = 0;
	Global_44465[38 /*12*/].f_11 = 0;
	Global_44465[38 /*12*/].f_4 = 0;
	Global_44465[39 /*12*/] = 94;
	Global_44465[39 /*12*/].f_1 = 100;
	Global_44465[39 /*12*/].f_2 = 14;
	Global_44465[39 /*12*/].f_3 = 2;
	Global_44465[39 /*12*/].f_10 = 0;
	Global_44465[39 /*12*/].f_11 = 0;
	Global_44465[39 /*12*/].f_4 = 0;
	Global_44465[40 /*12*/] = 94;
	Global_44465[40 /*12*/].f_1 = 101;
	Global_44465[40 /*12*/].f_2 = 12;
	Global_44465[40 /*12*/].f_3 = 0;
	Global_44465[40 /*12*/].f_10 = 0;
	Global_44465[40 /*12*/].f_11 = 0;
	Global_44465[40 /*12*/].f_4 = 0;
	Global_44465[41 /*12*/] = 94;
	Global_44465[41 /*12*/].f_1 = 102;
	Global_44465[41 /*12*/].f_2 = 12;
	Global_44465[41 /*12*/].f_3 = 1;
	Global_44465[41 /*12*/].f_10 = 0;
	Global_44465[41 /*12*/].f_11 = 0;
	Global_44465[41 /*12*/].f_4 = 0;
	Global_44465[42 /*12*/] = 94;
	Global_44465[42 /*12*/].f_1 = 103;
	Global_44465[42 /*12*/].f_2 = 12;
	Global_44465[42 /*12*/].f_3 = 2;
	Global_44465[42 /*12*/].f_10 = 0;
	Global_44465[42 /*12*/].f_11 = 0;
	Global_44465[42 /*12*/].f_4 = 0;
	Global_44465[43 /*12*/] = 104;
	Global_44465[43 /*12*/].f_1 = 105;
	Global_44465[43 /*12*/].f_2 = 7;
	Global_44465[43 /*12*/].f_3 = 0;
	Global_44465[43 /*12*/].f_10 = 1;
	Global_44465[43 /*12*/].f_11 = 0;
	Global_44465[43 /*12*/].f_4 = 0;
	Global_44465[44 /*12*/] = 108;
	Global_44465[44 /*12*/].f_1 = 109;
	Global_44465[44 /*12*/].f_2 = 15;
	Global_44465[44 /*12*/].f_3 = 0;
	Global_44465[44 /*12*/].f_10 = 1;
	Global_44465[44 /*12*/].f_11 = 0;
	Global_44465[44 /*12*/].f_4 = 0;
	Global_44465[45 /*12*/] = 110;
	Global_44465[45 /*12*/].f_1 = 111;
	Global_44465[45 /*12*/].f_2 = 15;
	Global_44465[45 /*12*/].f_3 = 0;
	Global_44465[45 /*12*/].f_10 = 1;
	Global_44465[45 /*12*/].f_11 = 0;
	Global_44465[45 /*12*/].f_4 = 0;
	Global_44465[46 /*12*/] = 112;
	Global_44465[46 /*12*/].f_1 = 113;
	Global_44465[46 /*12*/].f_2 = 15;
	Global_44465[46 /*12*/].f_3 = 0;
	Global_44465[46 /*12*/].f_10 = 1;
	Global_44465[46 /*12*/].f_11 = 0;
	Global_44465[46 /*12*/].f_4 = 0;
	Global_44465[47 /*12*/] = 117;
	Global_44465[47 /*12*/].f_1 = 118;
	Global_44465[47 /*12*/].f_2 = 16;
	Global_44465[47 /*12*/].f_3 = 0;
	Global_44465[47 /*12*/].f_10 = 1;
	Global_44465[47 /*12*/].f_11 = 0;
	Global_44465[47 /*12*/].f_4 = 0;
	Global_44465[48 /*12*/] = 119;
	Global_44465[48 /*12*/].f_1 = 120;
	Global_44465[48 /*12*/].f_2 = 16;
	Global_44465[48 /*12*/].f_3 = 0;
	Global_44465[48 /*12*/].f_10 = 1;
	Global_44465[48 /*12*/].f_11 = 0;
	Global_44465[48 /*12*/].f_4 = 0;
	Global_44465[49 /*12*/] = 131;
	Global_44465[49 /*12*/].f_1 = 132;
	Global_44465[49 /*12*/].f_2 = 16;
	Global_44465[49 /*12*/].f_3 = 0;
	Global_44465[49 /*12*/].f_10 = 1;
	Global_44465[49 /*12*/].f_11 = 0;
	Global_44465[49 /*12*/].f_4 = 0;
	Global_44465[50 /*12*/] = 129;
	Global_44465[50 /*12*/].f_1 = 130;
	Global_44465[50 /*12*/].f_2 = 16;
	Global_44465[50 /*12*/].f_3 = 0;
	Global_44465[50 /*12*/].f_10 = 0;
	Global_44465[50 /*12*/].f_11 = 0;
	Global_44465[50 /*12*/].f_4 = 0;
	Global_44465[51 /*12*/] = 127;
	Global_44465[51 /*12*/].f_1 = 128;
	Global_44465[51 /*12*/].f_2 = 16;
	Global_44465[51 /*12*/].f_3 = 0;
	Global_44465[51 /*12*/].f_10 = 1;
	Global_44465[51 /*12*/].f_11 = 0;
	Global_44465[51 /*12*/].f_4 = 0;
	Global_44465[52 /*12*/] = 125;
	Global_44465[52 /*12*/].f_1 = 126;
	Global_44465[52 /*12*/].f_2 = 16;
	Global_44465[52 /*12*/].f_3 = 0;
	Global_44465[52 /*12*/].f_10 = 1;
	Global_44465[52 /*12*/].f_11 = 0;
	Global_44465[52 /*12*/].f_4 = 0;
	Global_44465[53 /*12*/] = 123;
	Global_44465[53 /*12*/].f_1 = 124;
	Global_44465[53 /*12*/].f_2 = 16;
	Global_44465[53 /*12*/].f_3 = 0;
	Global_44465[53 /*12*/].f_10 = 1;
	Global_44465[53 /*12*/].f_11 = 0;
	Global_44465[53 /*12*/].f_4 = 0;
	Global_44465[54 /*12*/] = 121;
	Global_44465[54 /*12*/].f_1 = 122;
	Global_44465[54 /*12*/].f_2 = 16;
	Global_44465[54 /*12*/].f_3 = 0;
	Global_44465[54 /*12*/].f_10 = 1;
	Global_44465[54 /*12*/].f_11 = 0;
	Global_44465[54 /*12*/].f_4 = 0;
	Global_44465[55 /*12*/] = 133;
	Global_44465[55 /*12*/].f_1 = 134;
	Global_44465[55 /*12*/].f_2 = 12;
	Global_44465[55 /*12*/].f_3 = 0;
	Global_44465[55 /*12*/].f_10 = 0;
	Global_44465[55 /*12*/].f_11 = 0;
	Global_44465[55 /*12*/].f_4 = 0;
	Global_44465[56 /*12*/] = 135;
	Global_44465[56 /*12*/].f_1 = 136;
	Global_44465[56 /*12*/].f_2 = 14;
	Global_44465[56 /*12*/].f_3 = 0;
	Global_44465[56 /*12*/].f_10 = 0;
	Global_44465[56 /*12*/].f_11 = 0;
	Global_44465[56 /*12*/].f_4 = 0;
	Global_44465[57 /*12*/] = 137;
	Global_44465[57 /*12*/].f_1 = 138;
	Global_44465[57 /*12*/].f_2 = 12;
	Global_44465[57 /*12*/].f_3 = 0;
	Global_44465[57 /*12*/].f_10 = 0;
	Global_44465[57 /*12*/].f_11 = 0;
	Global_44465[57 /*12*/].f_4 = 0;
	Global_44465[58 /*12*/] = 133;
	Global_44465[58 /*12*/].f_1 = 139;
	Global_44465[58 /*12*/].f_2 = 12;
	Global_44465[58 /*12*/].f_3 = 1;
	Global_44465[58 /*12*/].f_10 = 0;
	Global_44465[58 /*12*/].f_11 = 0;
	Global_44465[58 /*12*/].f_4 = 0;
	Global_44465[59 /*12*/] = 133;
	Global_44465[59 /*12*/].f_1 = 140;
	Global_44465[59 /*12*/].f_2 = 12;
	Global_44465[59 /*12*/].f_3 = 2;
	Global_44465[59 /*12*/].f_10 = 0;
	Global_44465[59 /*12*/].f_11 = 0;
	Global_44465[59 /*12*/].f_4 = 0;
	Global_44465[60 /*12*/] = 135;
	Global_44465[60 /*12*/].f_1 = 136;
	Global_44465[60 /*12*/].f_2 = 14;
	Global_44465[60 /*12*/].f_3 = 1;
	Global_44465[60 /*12*/].f_10 = 0;
	Global_44465[60 /*12*/].f_11 = 0;
	Global_44465[60 /*12*/].f_4 = 0;
	Global_44465[61 /*12*/] = 135;
	Global_44465[61 /*12*/].f_1 = 136;
	Global_44465[61 /*12*/].f_2 = 14;
	Global_44465[61 /*12*/].f_3 = 2;
	Global_44465[61 /*12*/].f_10 = 0;
	Global_44465[61 /*12*/].f_11 = 0;
	Global_44465[61 /*12*/].f_4 = 0;
	Global_44465[62 /*12*/] = 137;
	Global_44465[62 /*12*/].f_1 = 141;
	Global_44465[62 /*12*/].f_2 = 12;
	Global_44465[62 /*12*/].f_3 = 1;
	Global_44465[62 /*12*/].f_10 = 0;
	Global_44465[62 /*12*/].f_11 = 0;
	Global_44465[62 /*12*/].f_4 = 0;
	Global_44465[63 /*12*/] = 137;
	Global_44465[63 /*12*/].f_1 = 138;
	Global_44465[63 /*12*/].f_2 = 12;
	Global_44465[63 /*12*/].f_3 = 2;
	Global_44465[63 /*12*/].f_10 = 0;
	Global_44465[63 /*12*/].f_11 = 0;
	Global_44465[63 /*12*/].f_4 = 0;
	Global_44465[64 /*12*/] = 148;
	Global_44465[64 /*12*/].f_1 = 149;
	Global_44465[64 /*12*/].f_2 = 7;
	Global_44465[64 /*12*/].f_3 = 0;
	Global_44465[64 /*12*/].f_10 = 0;
	Global_44465[64 /*12*/].f_11 = 0;
	Global_44465[64 /*12*/].f_4 = 0;
	Global_44465[65 /*12*/] = 148;
	Global_44465[65 /*12*/].f_1 = 151;
	Global_44465[65 /*12*/].f_2 = 7;
	Global_44465[65 /*12*/].f_3 = 0;
	Global_44465[65 /*12*/].f_10 = 0;
	Global_44465[65 /*12*/].f_11 = 0;
	Global_44465[65 /*12*/].f_4 = 0;
	Global_44465[66 /*12*/] = 148;
	Global_44465[66 /*12*/].f_1 = 150;
	Global_44465[66 /*12*/].f_2 = 7;
	Global_44465[66 /*12*/].f_3 = 0;
	Global_44465[66 /*12*/].f_10 = 0;
	Global_44465[66 /*12*/].f_11 = 0;
	Global_44465[66 /*12*/].f_4 = 0;
	Global_44465[67 /*12*/] = 155;
	Global_44465[67 /*12*/].f_1 = 156;
	Global_44465[67 /*12*/].f_2 = 63;
	Global_44465[67 /*12*/].f_3 = 2;
	Global_44465[67 /*12*/].f_10 = 0;
	Global_44465[67 /*12*/].f_11 = 0;
	Global_44465[67 /*12*/].f_4 = 0;
	Global_44465[68 /*12*/] = 125;
	Global_44465[68 /*12*/].f_1 = 160;
	Global_44465[68 /*12*/].f_2 = 16;
	Global_44465[68 /*12*/].f_3 = 0;
	Global_44465[68 /*12*/].f_10 = 1;
	Global_44465[68 /*12*/].f_11 = 0;
	Global_44465[68 /*12*/].f_4 = 0;
	Global_44465[69 /*12*/] = 161;
	Global_44465[69 /*12*/].f_1 = 162;
	Global_44465[69 /*12*/].f_2 = 64;
	Global_44465[69 /*12*/].f_3 = 2;
	Global_44465[69 /*12*/].f_10 = 0;
	Global_44465[69 /*12*/].f_11 = 0;
	Global_44465[69 /*12*/].f_4 = 0;
	Global_44465[70 /*12*/] = 161;
	Global_44465[70 /*12*/].f_1 = 162;
	Global_44465[70 /*12*/].f_2 = 64;
	Global_44465[70 /*12*/].f_3 = 1;
	Global_44465[70 /*12*/].f_10 = 0;
	Global_44465[70 /*12*/].f_11 = 0;
	Global_44465[70 /*12*/].f_4 = 0;
	Global_44465[71 /*12*/] = 161;
	Global_44465[71 /*12*/].f_1 = 162;
	Global_44465[71 /*12*/].f_2 = 64;
	Global_44465[71 /*12*/].f_3 = 2;
	Global_44465[71 /*12*/].f_10 = 0;
	Global_44465[71 /*12*/].f_11 = 0;
	Global_44465[71 /*12*/].f_4 = 0;
	Global_44465[72 /*12*/] = 166;
	Global_44465[72 /*12*/].f_1 = 16;
	Global_44465[72 /*12*/].f_2 = 21;
	Global_44465[72 /*12*/].f_3 = 0;
	Global_44465[72 /*12*/].f_10 = 0;
	Global_44465[72 /*12*/].f_11 = 0;
	Global_44465[72 /*12*/].f_4 = 0;
	Global_44465[73 /*12*/] = 166;
	Global_44465[73 /*12*/].f_1 = 16;
	Global_44465[73 /*12*/].f_2 = 21;
	Global_44465[73 /*12*/].f_3 = 1;
	Global_44465[73 /*12*/].f_10 = 0;
	Global_44465[73 /*12*/].f_11 = 0;
	Global_44465[73 /*12*/].f_4 = 0;
	Global_44465[74 /*12*/] = 166;
	Global_44465[74 /*12*/].f_1 = 16;
	Global_44465[74 /*12*/].f_2 = 21;
	Global_44465[74 /*12*/].f_3 = 2;
	Global_44465[74 /*12*/].f_10 = 0;
	Global_44465[74 /*12*/].f_11 = 0;
	Global_44465[74 /*12*/].f_4 = 0;
	Global_44465[75 /*12*/] = 167;
	Global_44465[75 /*12*/].f_1 = 16;
	Global_44465[75 /*12*/].f_2 = 6;
	Global_44465[75 /*12*/].f_3 = 2;
	Global_44465[75 /*12*/].f_10 = 0;
	Global_44465[75 /*12*/].f_11 = 0;
	Global_44465[75 /*12*/].f_4 = 0;
	Global_44465[76 /*12*/] = 168;
	Global_44465[76 /*12*/].f_1 = 16;
	Global_44465[76 /*12*/].f_2 = 6;
	Global_44465[76 /*12*/].f_3 = 2;
	Global_44465[76 /*12*/].f_10 = 0;
	Global_44465[76 /*12*/].f_11 = 0;
	Global_44465[76 /*12*/].f_4 = 0;
	Global_44465[77 /*12*/] = 169;
	Global_44465[77 /*12*/].f_1 = 16;
	Global_44465[77 /*12*/].f_2 = 6;
	Global_44465[77 /*12*/].f_3 = 2;
	Global_44465[77 /*12*/].f_10 = 0;
	Global_44465[77 /*12*/].f_11 = 0;
	Global_44465[77 /*12*/].f_4 = 0;
	Global_44465[78 /*12*/] = 170;
	Global_44465[78 /*12*/].f_1 = 16;
	Global_44465[78 /*12*/].f_2 = 6;
	Global_44465[78 /*12*/].f_3 = 2;
	Global_44465[78 /*12*/].f_10 = 0;
	Global_44465[78 /*12*/].f_11 = 0;
	Global_44465[78 /*12*/].f_4 = 0;
	Global_44465[79 /*12*/] = 171;
	Global_44465[79 /*12*/].f_1 = 16;
	Global_44465[79 /*12*/].f_2 = 6;
	Global_44465[79 /*12*/].f_3 = 2;
	Global_44465[79 /*12*/].f_10 = 0;
	Global_44465[79 /*12*/].f_11 = 0;
	Global_44465[79 /*12*/].f_4 = 0;
	Global_44465[80 /*12*/] = 172;
	Global_44465[80 /*12*/].f_1 = 173;
	Global_44465[80 /*12*/].f_2 = 6;
	Global_44465[80 /*12*/].f_3 = 2;
	Global_44465[80 /*12*/].f_10 = 0;
	Global_44465[80 /*12*/].f_11 = 0;
	Global_44465[80 /*12*/].f_4 = 0;
	Global_44465[81 /*12*/] = 174;
	Global_44465[81 /*12*/].f_1 = 175;
	Global_44465[81 /*12*/].f_2 = 6;
	Global_44465[81 /*12*/].f_3 = 2;
	Global_44465[81 /*12*/].f_10 = 0;
	Global_44465[81 /*12*/].f_11 = 0;
	Global_44465[81 /*12*/].f_4 = 0;
	Global_44465[82 /*12*/] = 176;
	Global_44465[82 /*12*/].f_1 = 177;
	Global_44465[82 /*12*/].f_2 = 6;
	Global_44465[82 /*12*/].f_3 = 2;
	Global_44465[82 /*12*/].f_10 = 0;
	Global_44465[82 /*12*/].f_11 = 0;
	Global_44465[82 /*12*/].f_4 = 0;
	Global_44465[83 /*12*/] = 178;
	Global_44465[83 /*12*/].f_1 = 179;
	Global_44465[83 /*12*/].f_2 = 6;
	Global_44465[83 /*12*/].f_3 = 2;
	Global_44465[83 /*12*/].f_10 = 0;
	Global_44465[83 /*12*/].f_11 = 0;
	Global_44465[83 /*12*/].f_4 = 0;
	Global_44465[84 /*12*/] = 180;
	Global_44465[84 /*12*/].f_1 = 181;
	Global_44465[84 /*12*/].f_2 = 4;
	Global_44465[84 /*12*/].f_3 = 0;
	Global_44465[84 /*12*/].f_10 = 0;
	Global_44465[84 /*12*/].f_11 = 3000;
	Global_44465[84 /*12*/].f_4 = 0;
	Global_44465[85 /*12*/] = 185;
	Global_44465[85 /*12*/].f_1 = 186;
	Global_44465[85 /*12*/].f_2 = 22;
	Global_44465[85 /*12*/].f_3 = 0;
	Global_44465[85 /*12*/].f_10 = 0;
	Global_44465[85 /*12*/].f_11 = 0;
	Global_44465[85 /*12*/].f_4 = 0;
	Global_44465[86 /*12*/] = 193;
	Global_44465[86 /*12*/].f_1 = 194;
	Global_44465[86 /*12*/].f_2 = 24;
	Global_44465[86 /*12*/].f_3 = 0;
	Global_44465[86 /*12*/].f_10 = 1;
	Global_44465[86 /*12*/].f_11 = 0;
	Global_44465[86 /*12*/].f_4 = 1;
	Global_44465[86 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[86 /*12*/].f_5[0 /*4*/].f_1 = 87;
	Global_44465[86 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[86 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[87 /*12*/] = 195;
	Global_44465[87 /*12*/].f_1 = 196;
	Global_44465[87 /*12*/].f_2 = 0;
	Global_44465[87 /*12*/].f_3 = 24;
	Global_44465[87 /*12*/].f_10 = 0;
	Global_44465[87 /*12*/].f_11 = 0;
	Global_44465[87 /*12*/].f_4 = 1;
	Global_44465[87 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[87 /*12*/].f_5[0 /*4*/].f_1 = 88;
	Global_44465[87 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[87 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[88 /*12*/] = 197;
	Global_44465[88 /*12*/].f_1 = 198;
	Global_44465[88 /*12*/].f_2 = 24;
	Global_44465[88 /*12*/].f_3 = 0;
	Global_44465[88 /*12*/].f_10 = 0;
	Global_44465[88 /*12*/].f_11 = 120000;
	Global_44465[88 /*12*/].f_4 = 0;
	Global_44465[89 /*12*/] = 200;
	Global_44465[89 /*12*/].f_1 = 201;
	Global_44465[89 /*12*/].f_2 = 24;
	Global_44465[89 /*12*/].f_3 = 0;
	Global_44465[89 /*12*/].f_10 = 1;
	Global_44465[89 /*12*/].f_11 = 0;
	Global_44465[89 /*12*/].f_4 = 1;
	Global_44465[89 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[89 /*12*/].f_5[0 /*4*/].f_1 = 90;
	Global_44465[89 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[89 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[90 /*12*/] = 202;
	Global_44465[90 /*12*/].f_1 = 203;
	Global_44465[90 /*12*/].f_2 = 0;
	Global_44465[90 /*12*/].f_3 = 24;
	Global_44465[90 /*12*/].f_10 = 0;
	Global_44465[90 /*12*/].f_11 = 0;
	Global_44465[90 /*12*/].f_4 = 1;
	Global_44465[90 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[90 /*12*/].f_5[0 /*4*/].f_1 = 91;
	Global_44465[90 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[90 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[91 /*12*/] = 204;
	Global_44465[91 /*12*/].f_1 = 205;
	Global_44465[91 /*12*/].f_2 = 24;
	Global_44465[91 /*12*/].f_3 = 0;
	Global_44465[91 /*12*/].f_10 = 0;
	Global_44465[91 /*12*/].f_11 = 120000;
	Global_44465[91 /*12*/].f_4 = 0;
	Global_44465[92 /*12*/] = 209;
	Global_44465[92 /*12*/].f_1 = 210;
	Global_44465[92 /*12*/].f_2 = 25;
	Global_44465[92 /*12*/].f_3 = 0;
	Global_44465[92 /*12*/].f_10 = 1;
	Global_44465[92 /*12*/].f_11 = 0;
	Global_44465[92 /*12*/].f_4 = 1;
	Global_44465[92 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[92 /*12*/].f_5[0 /*4*/].f_1 = 93;
	Global_44465[92 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[92 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[93 /*12*/] = 211;
	Global_44465[93 /*12*/].f_1 = 212;
	Global_44465[93 /*12*/].f_2 = 0;
	Global_44465[93 /*12*/].f_3 = 25;
	Global_44465[93 /*12*/].f_10 = 0;
	Global_44465[93 /*12*/].f_11 = 0;
	Global_44465[93 /*12*/].f_4 = 1;
	Global_44465[93 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[93 /*12*/].f_5[0 /*4*/].f_1 = 94;
	Global_44465[93 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[93 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[94 /*12*/] = 213;
	Global_44465[94 /*12*/].f_1 = 214;
	Global_44465[94 /*12*/].f_2 = 25;
	Global_44465[94 /*12*/].f_3 = 0;
	Global_44465[94 /*12*/].f_10 = 1;
	Global_44465[94 /*12*/].f_11 = 60000;
	Global_44465[94 /*12*/].f_4 = 1;
	Global_44465[94 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[94 /*12*/].f_5[0 /*4*/].f_1 = 95;
	Global_44465[94 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[94 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[95 /*12*/] = 215;
	Global_44465[95 /*12*/].f_1 = 216;
	Global_44465[95 /*12*/].f_2 = 0;
	Global_44465[95 /*12*/].f_3 = 25;
	Global_44465[95 /*12*/].f_10 = 0;
	Global_44465[95 /*12*/].f_11 = 0;
	Global_44465[95 /*12*/].f_4 = 1;
	Global_44465[95 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[95 /*12*/].f_5[0 /*4*/].f_1 = 96;
	Global_44465[95 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[95 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[96 /*12*/] = 217;
	Global_44465[96 /*12*/].f_1 = 218;
	Global_44465[96 /*12*/].f_2 = 25;
	Global_44465[96 /*12*/].f_3 = 0;
	Global_44465[96 /*12*/].f_10 = 0;
	Global_44465[96 /*12*/].f_11 = 60000;
	Global_44465[96 /*12*/].f_4 = 0;
	Global_44465[97 /*12*/] = 222;
	Global_44465[97 /*12*/].f_1 = 223;
	Global_44465[97 /*12*/].f_2 = 26;
	Global_44465[97 /*12*/].f_3 = 0;
	Global_44465[97 /*12*/].f_10 = 1;
	Global_44465[97 /*12*/].f_11 = 0;
	Global_44465[97 /*12*/].f_4 = 1;
	Global_44465[97 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[97 /*12*/].f_5[0 /*4*/].f_1 = 98;
	Global_44465[97 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[97 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[98 /*12*/] = 224;
	Global_44465[98 /*12*/].f_1 = 225;
	Global_44465[98 /*12*/].f_2 = 0;
	Global_44465[98 /*12*/].f_3 = 26;
	Global_44465[98 /*12*/].f_10 = 0;
	Global_44465[98 /*12*/].f_11 = 0;
	Global_44465[98 /*12*/].f_4 = 0;
	Global_44465[99 /*12*/] = 229;
	Global_44465[99 /*12*/].f_1 = 230;
	Global_44465[99 /*12*/].f_2 = 27;
	Global_44465[99 /*12*/].f_3 = 0;
	Global_44465[99 /*12*/].f_10 = 1;
	Global_44465[99 /*12*/].f_11 = 0;
	Global_44465[99 /*12*/].f_4 = 1;
	Global_44465[99 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[99 /*12*/].f_5[0 /*4*/].f_1 = 100;
	Global_44465[99 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[99 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[100 /*12*/] = 231;
	Global_44465[100 /*12*/].f_1 = 232;
	Global_44465[100 /*12*/].f_2 = 0;
	Global_44465[100 /*12*/].f_3 = 27;
	Global_44465[100 /*12*/].f_10 = 0;
	Global_44465[100 /*12*/].f_11 = 0;
	Global_44465[100 /*12*/].f_4 = 0;
	Global_44465[101 /*12*/] = 236;
	Global_44465[101 /*12*/].f_1 = 237;
	Global_44465[101 /*12*/].f_2 = 28;
	Global_44465[101 /*12*/].f_3 = 0;
	Global_44465[101 /*12*/].f_10 = 0;
	Global_44465[101 /*12*/].f_11 = 0;
	Global_44465[101 /*12*/].f_4 = 0;
	Global_44465[102 /*12*/] = 238;
	Global_44465[102 /*12*/].f_1 = 239;
	Global_44465[102 /*12*/].f_2 = 26;
	Global_44465[102 /*12*/].f_3 = 0;
	Global_44465[102 /*12*/].f_10 = 1;
	Global_44465[102 /*12*/].f_11 = 0;
	Global_44465[102 /*12*/].f_4 = 1;
	Global_44465[102 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[102 /*12*/].f_5[0 /*4*/].f_1 = 103;
	Global_44465[102 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[102 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[103 /*12*/] = 240;
	Global_44465[103 /*12*/].f_1 = 241;
	Global_44465[103 /*12*/].f_2 = 0;
	Global_44465[103 /*12*/].f_3 = 26;
	Global_44465[103 /*12*/].f_10 = 0;
	Global_44465[103 /*12*/].f_11 = 0;
	Global_44465[103 /*12*/].f_4 = 0;
	Global_44465[104 /*12*/] = 245;
	Global_44465[104 /*12*/].f_1 = 246;
	Global_44465[104 /*12*/].f_2 = 29;
	Global_44465[104 /*12*/].f_3 = 0;
	Global_44465[104 /*12*/].f_10 = 1;
	Global_44465[104 /*12*/].f_11 = 0;
	Global_44465[104 /*12*/].f_4 = 1;
	Global_44465[104 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[104 /*12*/].f_5[0 /*4*/].f_1 = 105;
	Global_44465[104 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[104 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[105 /*12*/] = 247;
	Global_44465[105 /*12*/].f_1 = 248;
	Global_44465[105 /*12*/].f_2 = 0;
	Global_44465[105 /*12*/].f_3 = 29;
	Global_44465[105 /*12*/].f_10 = 0;
	Global_44465[105 /*12*/].f_11 = 0;
	Global_44465[105 /*12*/].f_4 = 0;
	Global_44465[106 /*12*/] = 252;
	Global_44465[106 /*12*/].f_1 = 253;
	Global_44465[106 /*12*/].f_2 = 30;
	Global_44465[106 /*12*/].f_3 = 1;
	Global_44465[106 /*12*/].f_10 = 1;
	Global_44465[106 /*12*/].f_11 = 120000;
	Global_44465[106 /*12*/].f_4 = 1;
	Global_44465[106 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[106 /*12*/].f_5[0 /*4*/].f_1 = 107;
	Global_44465[106 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[106 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[107 /*12*/] = 254;
	Global_44465[107 /*12*/].f_1 = 255;
	Global_44465[107 /*12*/].f_2 = 1;
	Global_44465[107 /*12*/].f_3 = 30;
	Global_44465[107 /*12*/].f_10 = 0;
	Global_44465[107 /*12*/].f_11 = 0;
	Global_44465[107 /*12*/].f_4 = 1;
	Global_44465[107 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[107 /*12*/].f_5[0 /*4*/].f_1 = 108;
	Global_44465[107 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[107 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[108 /*12*/] = 256;
	Global_44465[108 /*12*/].f_1 = 257;
	Global_44465[108 /*12*/].f_2 = 30;
	Global_44465[108 /*12*/].f_3 = 1;
	Global_44465[108 /*12*/].f_10 = 1;
	Global_44465[108 /*12*/].f_11 = 120000;
	Global_44465[108 /*12*/].f_4 = 1;
	Global_44465[108 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[108 /*12*/].f_5[0 /*4*/].f_1 = 109;
	Global_44465[108 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[108 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[109 /*12*/] = 258;
	Global_44465[109 /*12*/].f_1 = 259;
	Global_44465[109 /*12*/].f_2 = 1;
	Global_44465[109 /*12*/].f_3 = 30;
	Global_44465[109 /*12*/].f_10 = 0;
	Global_44465[109 /*12*/].f_11 = 0;
	Global_44465[109 /*12*/].f_4 = 1;
	Global_44465[109 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[109 /*12*/].f_5[0 /*4*/].f_1 = 110;
	Global_44465[109 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[109 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[110 /*12*/] = 260;
	Global_44465[110 /*12*/].f_1 = 261;
	Global_44465[110 /*12*/].f_2 = 30;
	Global_44465[110 /*12*/].f_3 = 1;
	Global_44465[110 /*12*/].f_10 = 0;
	Global_44465[110 /*12*/].f_11 = 60000;
	Global_44465[110 /*12*/].f_4 = 0;
	Global_44465[111 /*12*/] = 265;
	Global_44465[111 /*12*/].f_1 = 266;
	Global_44465[111 /*12*/].f_2 = 31;
	Global_44465[111 /*12*/].f_3 = 1;
	Global_44465[111 /*12*/].f_10 = 1;
	Global_44465[111 /*12*/].f_11 = 0;
	Global_44465[111 /*12*/].f_4 = 1;
	Global_44465[111 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[111 /*12*/].f_5[0 /*4*/].f_1 = 112;
	Global_44465[111 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[111 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[112 /*12*/] = 267;
	Global_44465[112 /*12*/].f_1 = 268;
	Global_44465[112 /*12*/].f_2 = 1;
	Global_44465[112 /*12*/].f_3 = 31;
	Global_44465[112 /*12*/].f_10 = 0;
	Global_44465[112 /*12*/].f_11 = 0;
	Global_44465[112 /*12*/].f_4 = 0;
	Global_44465[113 /*12*/] = 272;
	Global_44465[113 /*12*/].f_1 = 273;
	Global_44465[113 /*12*/].f_2 = 32;
	Global_44465[113 /*12*/].f_3 = 1;
	Global_44465[113 /*12*/].f_10 = 1;
	Global_44465[113 /*12*/].f_11 = 0;
	Global_44465[113 /*12*/].f_4 = 1;
	Global_44465[113 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[113 /*12*/].f_5[0 /*4*/].f_1 = 114;
	Global_44465[113 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[113 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[114 /*12*/] = 274;
	Global_44465[114 /*12*/].f_1 = 275;
	Global_44465[114 /*12*/].f_2 = 1;
	Global_44465[114 /*12*/].f_3 = 32;
	Global_44465[114 /*12*/].f_10 = 0;
	Global_44465[114 /*12*/].f_11 = 0;
	Global_44465[114 /*12*/].f_4 = 1;
	Global_44465[114 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[114 /*12*/].f_5[0 /*4*/].f_1 = 115;
	Global_44465[114 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[114 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[115 /*12*/] = 276;
	Global_44465[115 /*12*/].f_1 = 277;
	Global_44465[115 /*12*/].f_2 = 32;
	Global_44465[115 /*12*/].f_3 = 1;
	Global_44465[115 /*12*/].f_10 = 0;
	Global_44465[115 /*12*/].f_11 = 30000;
	Global_44465[115 /*12*/].f_4 = 0;
	Global_44465[116 /*12*/] = 278;
	Global_44465[116 /*12*/].f_1 = 279;
	Global_44465[116 /*12*/].f_2 = 32;
	Global_44465[116 /*12*/].f_3 = 1;
	Global_44465[116 /*12*/].f_10 = 1;
	Global_44465[116 /*12*/].f_11 = 0;
	Global_44465[116 /*12*/].f_4 = 1;
	Global_44465[116 /*12*/].f_5[0 /*4*/] = 282;
	Global_44465[116 /*12*/].f_5[0 /*4*/].f_1 = 117;
	Global_44465[116 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[116 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[117 /*12*/] = 280;
	Global_44465[117 /*12*/].f_1 = 281;
	Global_44465[117 /*12*/].f_2 = 1;
	Global_44465[117 /*12*/].f_3 = 32;
	Global_44465[117 /*12*/].f_10 = 0;
	Global_44465[117 /*12*/].f_11 = 0;
	Global_44465[117 /*12*/].f_4 = 0;
	Global_44465[118 /*12*/] = 283;
	Global_44465[118 /*12*/].f_1 = 284;
	Global_44465[118 /*12*/].f_2 = 32;
	Global_44465[118 /*12*/].f_3 = 1;
	Global_44465[118 /*12*/].f_10 = 1;
	Global_44465[118 /*12*/].f_11 = 0;
	Global_44465[118 /*12*/].f_4 = 1;
	Global_44465[118 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[118 /*12*/].f_5[0 /*4*/].f_1 = 119;
	Global_44465[118 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[118 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[119 /*12*/] = 285;
	Global_44465[119 /*12*/].f_1 = 286;
	Global_44465[119 /*12*/].f_2 = 1;
	Global_44465[119 /*12*/].f_3 = 32;
	Global_44465[119 /*12*/].f_10 = 0;
	Global_44465[119 /*12*/].f_11 = 0;
	Global_44465[119 /*12*/].f_4 = 0;
	Global_44465[120 /*12*/] = 287;
	Global_44465[120 /*12*/].f_1 = 288;
	Global_44465[120 /*12*/].f_2 = 32;
	Global_44465[120 /*12*/].f_3 = 1;
	Global_44465[120 /*12*/].f_10 = 1;
	Global_44465[120 /*12*/].f_11 = 0;
	Global_44465[120 /*12*/].f_4 = 1;
	Global_44465[120 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[120 /*12*/].f_5[0 /*4*/].f_1 = 121;
	Global_44465[120 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[120 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[121 /*12*/] = 289;
	Global_44465[121 /*12*/].f_1 = 290;
	Global_44465[121 /*12*/].f_2 = 1;
	Global_44465[121 /*12*/].f_3 = 32;
	Global_44465[121 /*12*/].f_10 = 0;
	Global_44465[121 /*12*/].f_11 = 0;
	Global_44465[121 /*12*/].f_4 = 1;
	Global_44465[121 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[121 /*12*/].f_5[0 /*4*/].f_1 = 122;
	Global_44465[121 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[121 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[122 /*12*/] = 291;
	Global_44465[122 /*12*/].f_1 = 292;
	Global_44465[122 /*12*/].f_2 = 32;
	Global_44465[122 /*12*/].f_3 = 1;
	Global_44465[122 /*12*/].f_10 = 1;
	Global_44465[122 /*12*/].f_11 = 30000;
	Global_44465[122 /*12*/].f_4 = 1;
	Global_44465[122 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[122 /*12*/].f_5[0 /*4*/].f_1 = 123;
	Global_44465[122 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[122 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[123 /*12*/] = 293;
	Global_44465[123 /*12*/].f_1 = 294;
	Global_44465[123 /*12*/].f_2 = 1;
	Global_44465[123 /*12*/].f_3 = 32;
	Global_44465[123 /*12*/].f_10 = 0;
	Global_44465[123 /*12*/].f_11 = 0;
	Global_44465[123 /*12*/].f_4 = 0;
	Global_44465[124 /*12*/] = 295;
	Global_44465[124 /*12*/].f_1 = 296;
	Global_44465[124 /*12*/].f_2 = 27;
	Global_44465[124 /*12*/].f_3 = 1;
	Global_44465[124 /*12*/].f_10 = 1;
	Global_44465[124 /*12*/].f_11 = 0;
	Global_44465[124 /*12*/].f_4 = 1;
	Global_44465[124 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[124 /*12*/].f_5[0 /*4*/].f_1 = 125;
	Global_44465[124 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[124 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[125 /*12*/] = 297;
	Global_44465[125 /*12*/].f_1 = 298;
	Global_44465[125 /*12*/].f_2 = 1;
	Global_44465[125 /*12*/].f_3 = 27;
	Global_44465[125 /*12*/].f_10 = 0;
	Global_44465[125 /*12*/].f_11 = 0;
	Global_44465[125 /*12*/].f_4 = 0;
	Global_44465[126 /*12*/] = 299;
	Global_44465[126 /*12*/].f_1 = 300;
	Global_44465[126 /*12*/].f_2 = 2;
	Global_44465[126 /*12*/].f_3 = 1;
	Global_44465[126 /*12*/].f_10 = 1;
	Global_44465[126 /*12*/].f_11 = 0;
	Global_44465[126 /*12*/].f_4 = 1;
	Global_44465[126 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[126 /*12*/].f_5[0 /*4*/].f_1 = 127;
	Global_44465[126 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[126 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[127 /*12*/] = 301;
	Global_44465[127 /*12*/].f_1 = 302;
	Global_44465[127 /*12*/].f_2 = 1;
	Global_44465[127 /*12*/].f_3 = 2;
	Global_44465[127 /*12*/].f_10 = 0;
	Global_44465[127 /*12*/].f_11 = 0;
	Global_44465[127 /*12*/].f_4 = 1;
	Global_44465[127 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[127 /*12*/].f_5[0 /*4*/].f_1 = 128;
	Global_44465[127 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[127 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[128 /*12*/] = 303;
	Global_44465[128 /*12*/].f_1 = 304;
	Global_44465[128 /*12*/].f_2 = 2;
	Global_44465[128 /*12*/].f_3 = 1;
	Global_44465[128 /*12*/].f_10 = 1;
	Global_44465[128 /*12*/].f_11 = 60000;
	Global_44465[128 /*12*/].f_4 = 1;
	Global_44465[128 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[128 /*12*/].f_5[0 /*4*/].f_1 = 129;
	Global_44465[128 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[128 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[129 /*12*/] = 305;
	Global_44465[129 /*12*/].f_1 = 306;
	Global_44465[129 /*12*/].f_2 = 1;
	Global_44465[129 /*12*/].f_3 = 2;
	Global_44465[129 /*12*/].f_10 = 0;
	Global_44465[129 /*12*/].f_11 = 0;
	Global_44465[129 /*12*/].f_4 = 1;
	Global_44465[129 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[129 /*12*/].f_5[0 /*4*/].f_1 = 130;
	Global_44465[129 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[129 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[130 /*12*/] = 307;
	Global_44465[130 /*12*/].f_1 = 308;
	Global_44465[130 /*12*/].f_2 = 2;
	Global_44465[130 /*12*/].f_3 = 1;
	Global_44465[130 /*12*/].f_10 = 0;
	Global_44465[130 /*12*/].f_11 = 30000;
	Global_44465[130 /*12*/].f_4 = 0;
	Global_44465[131 /*12*/] = 309;
	Global_44465[131 /*12*/].f_1 = 310;
	Global_44465[131 /*12*/].f_2 = 0;
	Global_44465[131 /*12*/].f_3 = 1;
	Global_44465[131 /*12*/].f_10 = 1;
	Global_44465[131 /*12*/].f_11 = 0;
	Global_44465[131 /*12*/].f_4 = 1;
	Global_44465[131 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[131 /*12*/].f_5[0 /*4*/].f_1 = 132;
	Global_44465[131 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[131 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[132 /*12*/] = 311;
	Global_44465[132 /*12*/].f_1 = 312;
	Global_44465[132 /*12*/].f_2 = 1;
	Global_44465[132 /*12*/].f_3 = 0;
	Global_44465[132 /*12*/].f_10 = 0;
	Global_44465[132 /*12*/].f_11 = 0;
	Global_44465[132 /*12*/].f_4 = 1;
	Global_44465[132 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[132 /*12*/].f_5[0 /*4*/].f_1 = 133;
	Global_44465[132 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[132 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[133 /*12*/] = 313;
	Global_44465[133 /*12*/].f_1 = 314;
	Global_44465[133 /*12*/].f_2 = 0;
	Global_44465[133 /*12*/].f_3 = 1;
	Global_44465[133 /*12*/].f_10 = 0;
	Global_44465[133 /*12*/].f_11 = 25000;
	Global_44465[133 /*12*/].f_4 = 0;
	Global_44465[134 /*12*/] = 315;
	Global_44465[134 /*12*/].f_1 = 316;
	Global_44465[134 /*12*/].f_2 = 0;
	Global_44465[134 /*12*/].f_3 = 1;
	Global_44465[134 /*12*/].f_10 = 1;
	Global_44465[134 /*12*/].f_11 = 0;
	Global_44465[134 /*12*/].f_4 = 1;
	Global_44465[134 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[134 /*12*/].f_5[0 /*4*/].f_1 = 135;
	Global_44465[134 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[134 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[135 /*12*/] = 317;
	Global_44465[135 /*12*/].f_1 = 318;
	Global_44465[135 /*12*/].f_2 = 1;
	Global_44465[135 /*12*/].f_3 = 0;
	Global_44465[135 /*12*/].f_10 = 0;
	Global_44465[135 /*12*/].f_11 = 0;
	Global_44465[135 /*12*/].f_4 = 0;
	Global_44465[136 /*12*/] = 322;
	Global_44465[136 /*12*/].f_1 = 323;
	Global_44465[136 /*12*/].f_2 = 33;
	Global_44465[136 /*12*/].f_3 = 2;
	Global_44465[136 /*12*/].f_10 = 1;
	Global_44465[136 /*12*/].f_11 = 0;
	Global_44465[136 /*12*/].f_4 = 1;
	Global_44465[136 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[136 /*12*/].f_5[0 /*4*/].f_1 = 137;
	Global_44465[136 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[136 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[137 /*12*/] = 324;
	Global_44465[137 /*12*/].f_1 = 325;
	Global_44465[137 /*12*/].f_2 = 2;
	Global_44465[137 /*12*/].f_3 = 33;
	Global_44465[137 /*12*/].f_10 = 0;
	Global_44465[137 /*12*/].f_11 = 0;
	Global_44465[137 /*12*/].f_4 = 0;
	Global_44465[138 /*12*/] = 326;
	Global_44465[138 /*12*/].f_1 = 327;
	Global_44465[138 /*12*/].f_2 = 33;
	Global_44465[138 /*12*/].f_3 = 2;
	Global_44465[138 /*12*/].f_10 = 1;
	Global_44465[138 /*12*/].f_11 = 0;
	Global_44465[138 /*12*/].f_4 = 1;
	Global_44465[138 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[138 /*12*/].f_5[0 /*4*/].f_1 = 139;
	Global_44465[138 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[138 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[139 /*12*/] = 328;
	Global_44465[139 /*12*/].f_1 = 329;
	Global_44465[139 /*12*/].f_2 = 2;
	Global_44465[139 /*12*/].f_3 = 33;
	Global_44465[139 /*12*/].f_10 = 0;
	Global_44465[139 /*12*/].f_11 = 0;
	Global_44465[139 /*12*/].f_4 = 1;
	Global_44465[139 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[139 /*12*/].f_5[0 /*4*/].f_1 = -1;
	Global_44465[139 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[139 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[140 /*12*/] = 330;
	Global_44465[140 /*12*/].f_1 = 331;
	Global_44465[140 /*12*/].f_2 = 2;
	Global_44465[140 /*12*/].f_3 = 33;
	Global_44465[140 /*12*/].f_10 = 0;
	Global_44465[140 /*12*/].f_11 = 0;
	Global_44465[140 /*12*/].f_4 = 0;
	Global_44465[141 /*12*/] = 332;
	Global_44465[141 /*12*/].f_1 = 333;
	Global_44465[141 /*12*/].f_2 = 29;
	Global_44465[141 /*12*/].f_3 = 2;
	Global_44465[141 /*12*/].f_10 = 0;
	Global_44465[141 /*12*/].f_11 = 0;
	Global_44465[141 /*12*/].f_4 = 1;
	Global_44465[141 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[141 /*12*/].f_5[0 /*4*/].f_1 = 142;
	Global_44465[141 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[141 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[142 /*12*/] = 334;
	Global_44465[142 /*12*/].f_1 = 335;
	Global_44465[142 /*12*/].f_2 = 2;
	Global_44465[142 /*12*/].f_3 = 29;
	Global_44465[142 /*12*/].f_10 = 0;
	Global_44465[142 /*12*/].f_11 = 0;
	Global_44465[142 /*12*/].f_4 = 0;
	Global_44465[143 /*12*/] = 336;
	Global_44465[143 /*12*/].f_1 = 337;
	Global_44465[143 /*12*/].f_2 = 3;
	Global_44465[143 /*12*/].f_3 = 2;
	Global_44465[143 /*12*/].f_10 = 0;
	Global_44465[143 /*12*/].f_11 = 0;
	Global_44465[143 /*12*/].f_4 = 1;
	Global_44465[143 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[143 /*12*/].f_5[0 /*4*/].f_1 = 144;
	Global_44465[143 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[143 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[144 /*12*/] = 338;
	Global_44465[144 /*12*/].f_1 = 339;
	Global_44465[144 /*12*/].f_2 = 2;
	Global_44465[144 /*12*/].f_3 = 3;
	Global_44465[144 /*12*/].f_10 = 0;
	Global_44465[144 /*12*/].f_11 = 0;
	Global_44465[144 /*12*/].f_4 = 0;
	Global_44465[145 /*12*/] = 343;
	Global_44465[145 /*12*/].f_1 = 344;
	Global_44465[145 /*12*/].f_2 = 34;
	Global_44465[145 /*12*/].f_3 = 2;
	Global_44465[145 /*12*/].f_10 = 0;
	Global_44465[145 /*12*/].f_11 = 0;
	Global_44465[145 /*12*/].f_4 = 1;
	Global_44465[145 /*12*/].f_5[0 /*4*/] = 199;
	Global_44465[145 /*12*/].f_5[0 /*4*/].f_1 = 146;
	Global_44465[145 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[145 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[146 /*12*/] = 345;
	Global_44465[146 /*12*/].f_1 = 346;
	Global_44465[146 /*12*/].f_2 = 2;
	Global_44465[146 /*12*/].f_3 = 34;
	Global_44465[146 /*12*/].f_10 = 0;
	Global_44465[146 /*12*/].f_11 = 0;
	Global_44465[146 /*12*/].f_4 = 0;
	Global_44465[147 /*12*/] = 319;
	Global_44465[147 /*12*/].f_1 = 347;
	Global_44465[147 /*12*/].f_2 = 26;
	Global_44465[147 /*12*/].f_3 = 2;
	Global_44465[147 /*12*/].f_10 = 0;
	Global_44465[147 /*12*/].f_11 = 0;
	Global_44465[147 /*12*/].f_4 = 0;
	Global_44465[148 /*12*/] = 351;
	Global_44465[148 /*12*/].f_1 = 352;
	Global_44465[148 /*12*/].f_2 = 35;
	Global_44465[148 /*12*/].f_3 = 2;
	Global_44465[148 /*12*/].f_10 = 0;
	Global_44465[148 /*12*/].f_11 = 0;
	Global_44465[148 /*12*/].f_4 = 0;
	Global_44465[149 /*12*/] = 351;
	Global_44465[149 /*12*/].f_1 = 352;
	Global_44465[149 /*12*/].f_2 = 35;
	Global_44465[149 /*12*/].f_3 = 0;
	Global_44465[149 /*12*/].f_10 = 0;
	Global_44465[149 /*12*/].f_11 = 0;
	Global_44465[149 /*12*/].f_4 = 0;
	Global_44465[150 /*12*/] = 351;
	Global_44465[150 /*12*/].f_1 = 352;
	Global_44465[150 /*12*/].f_2 = 35;
	Global_44465[150 /*12*/].f_3 = 1;
	Global_44465[150 /*12*/].f_10 = 0;
	Global_44465[150 /*12*/].f_11 = 0;
	Global_44465[150 /*12*/].f_4 = 0;
	Global_44465[151 /*12*/] = 355;
	Global_44465[151 /*12*/].f_1 = 356;
	Global_44465[151 /*12*/].f_2 = 36;
	Global_44465[151 /*12*/].f_3 = 2;
	Global_44465[151 /*12*/].f_10 = 0;
	Global_44465[151 /*12*/].f_11 = 0;
	Global_44465[151 /*12*/].f_4 = 0;
	Global_44465[152 /*12*/] = 355;
	Global_44465[152 /*12*/].f_1 = 356;
	Global_44465[152 /*12*/].f_2 = 36;
	Global_44465[152 /*12*/].f_3 = 0;
	Global_44465[152 /*12*/].f_10 = 0;
	Global_44465[152 /*12*/].f_11 = 0;
	Global_44465[152 /*12*/].f_4 = 0;
	Global_44465[153 /*12*/] = 355;
	Global_44465[153 /*12*/].f_1 = 356;
	Global_44465[153 /*12*/].f_2 = 36;
	Global_44465[153 /*12*/].f_3 = 1;
	Global_44465[153 /*12*/].f_10 = 0;
	Global_44465[153 /*12*/].f_11 = 0;
	Global_44465[153 /*12*/].f_4 = 0;
	Global_44465[154 /*12*/] = 363;
	Global_44465[154 /*12*/].f_1 = 364;
	Global_44465[154 /*12*/].f_2 = 38;
	Global_44465[154 /*12*/].f_3 = 2;
	Global_44465[154 /*12*/].f_10 = 0;
	Global_44465[154 /*12*/].f_11 = 0;
	Global_44465[154 /*12*/].f_4 = 0;
	Global_44465[155 /*12*/] = 365;
	Global_44465[155 /*12*/].f_1 = 366;
	Global_44465[155 /*12*/].f_2 = 11;
	Global_44465[155 /*12*/].f_3 = 0;
	Global_44465[155 /*12*/].f_10 = 0;
	Global_44465[155 /*12*/].f_11 = 0;
	Global_44465[155 /*12*/].f_4 = 0;
	Global_44465[156 /*12*/] = 365;
	Global_44465[156 /*12*/].f_1 = 366;
	Global_44465[156 /*12*/].f_2 = 11;
	Global_44465[156 /*12*/].f_3 = 1;
	Global_44465[156 /*12*/].f_10 = 0;
	Global_44465[156 /*12*/].f_11 = 0;
	Global_44465[156 /*12*/].f_4 = 0;
	Global_44465[157 /*12*/] = 365;
	Global_44465[157 /*12*/].f_1 = 366;
	Global_44465[157 /*12*/].f_2 = 11;
	Global_44465[157 /*12*/].f_3 = 2;
	Global_44465[157 /*12*/].f_10 = 0;
	Global_44465[157 /*12*/].f_11 = 0;
	Global_44465[157 /*12*/].f_4 = 0;
	Global_44465[158 /*12*/] = 367;
	Global_44465[158 /*12*/].f_1 = 368;
	Global_44465[158 /*12*/].f_2 = 29;
	Global_44465[158 /*12*/].f_3 = 2;
	Global_44465[158 /*12*/].f_10 = 0;
	Global_44465[158 /*12*/].f_11 = 0;
	Global_44465[158 /*12*/].f_4 = 0;
	Global_44465[159 /*12*/] = 372;
	Global_44465[159 /*12*/].f_1 = 373;
	Global_44465[159 /*12*/].f_2 = 39;
	Global_44465[159 /*12*/].f_3 = 0;
	Global_44465[159 /*12*/].f_10 = 0;
	Global_44465[159 /*12*/].f_11 = 0;
	Global_44465[159 /*12*/].f_4 = 0;
	Global_44465[160 /*12*/] = 374;
	Global_44465[160 /*12*/].f_1 = 375;
	Global_44465[160 /*12*/].f_2 = 39;
	Global_44465[160 /*12*/].f_3 = 1;
	Global_44465[160 /*12*/].f_10 = 0;
	Global_44465[160 /*12*/].f_11 = 0;
	Global_44465[160 /*12*/].f_4 = 0;
	Global_44465[161 /*12*/] = 417;
	Global_44465[161 /*12*/].f_1 = 418;
	Global_44465[161 /*12*/].f_2 = 40;
	Global_44465[161 /*12*/].f_3 = 1;
	Global_44465[161 /*12*/].f_10 = 0;
	Global_44465[161 /*12*/].f_11 = 0;
	Global_44465[161 /*12*/].f_4 = 0;
	Global_44465[162 /*12*/] = 419;
	Global_44465[162 /*12*/].f_1 = 420;
	Global_44465[162 /*12*/].f_2 = 43;
	Global_44465[162 /*12*/].f_3 = 0;
	Global_44465[162 /*12*/].f_10 = 0;
	Global_44465[162 /*12*/].f_11 = 0;
	Global_44465[162 /*12*/].f_4 = 0;
	Global_44465[163 /*12*/] = 421;
	Global_44465[163 /*12*/].f_1 = 422;
	Global_44465[163 /*12*/].f_2 = 43;
	Global_44465[163 /*12*/].f_3 = 2;
	Global_44465[163 /*12*/].f_10 = 0;
	Global_44465[163 /*12*/].f_11 = 0;
	Global_44465[163 /*12*/].f_4 = 0;
	Global_44465[164 /*12*/] = 423;
	Global_44465[164 /*12*/].f_1 = 424;
	Global_44465[164 /*12*/].f_2 = 43;
	Global_44465[164 /*12*/].f_3 = 1;
	Global_44465[164 /*12*/].f_10 = 0;
	Global_44465[164 /*12*/].f_11 = 0;
	Global_44465[164 /*12*/].f_4 = 0;
	Global_44465[165 /*12*/] = 425;
	Global_44465[165 /*12*/].f_1 = 426;
	Global_44465[165 /*12*/].f_2 = 44;
	Global_44465[165 /*12*/].f_3 = 1;
	Global_44465[165 /*12*/].f_10 = 0;
	Global_44465[165 /*12*/].f_11 = 0;
	Global_44465[165 /*12*/].f_4 = 0;
	Global_44465[166 /*12*/] = 427;
	Global_44465[166 /*12*/].f_1 = 428;
	Global_44465[166 /*12*/].f_2 = 45;
	Global_44465[166 /*12*/].f_3 = 0;
	Global_44465[166 /*12*/].f_10 = 0;
	Global_44465[166 /*12*/].f_11 = 0;
	Global_44465[166 /*12*/].f_4 = 0;
	Global_44465[167 /*12*/] = 429;
	Global_44465[167 /*12*/].f_1 = 430;
	Global_44465[167 /*12*/].f_2 = 46;
	Global_44465[167 /*12*/].f_3 = 0;
	Global_44465[167 /*12*/].f_10 = 0;
	Global_44465[167 /*12*/].f_11 = 0;
	Global_44465[167 /*12*/].f_4 = 0;
	Global_44465[168 /*12*/] = 431;
	Global_44465[168 /*12*/].f_1 = 432;
	Global_44465[168 /*12*/].f_2 = 49;
	Global_44465[168 /*12*/].f_3 = 0;
	Global_44465[168 /*12*/].f_10 = 0;
	Global_44465[168 /*12*/].f_11 = 0;
	Global_44465[168 /*12*/].f_4 = 0;
	Global_44465[169 /*12*/] = 433;
	Global_44465[169 /*12*/].f_1 = 434;
	Global_44465[169 /*12*/].f_2 = 49;
	Global_44465[169 /*12*/].f_3 = 2;
	Global_44465[169 /*12*/].f_10 = 0;
	Global_44465[169 /*12*/].f_11 = 0;
	Global_44465[169 /*12*/].f_4 = 0;
	Global_44465[170 /*12*/] = 435;
	Global_44465[170 /*12*/].f_1 = 436;
	Global_44465[170 /*12*/].f_2 = 49;
	Global_44465[170 /*12*/].f_3 = 1;
	Global_44465[170 /*12*/].f_10 = 0;
	Global_44465[170 /*12*/].f_11 = 0;
	Global_44465[170 /*12*/].f_4 = 0;
	Global_44465[171 /*12*/] = 437;
	Global_44465[171 /*12*/].f_1 = 438;
	Global_44465[171 /*12*/].f_2 = 50;
	Global_44465[171 /*12*/].f_3 = 1;
	Global_44465[171 /*12*/].f_10 = 0;
	Global_44465[171 /*12*/].f_11 = 0;
	Global_44465[171 /*12*/].f_4 = 0;
	Global_44465[172 /*12*/] = 439;
	Global_44465[172 /*12*/].f_1 = 440;
	Global_44465[172 /*12*/].f_2 = 51;
	Global_44465[172 /*12*/].f_3 = 0;
	Global_44465[172 /*12*/].f_10 = 0;
	Global_44465[172 /*12*/].f_11 = 0;
	Global_44465[172 /*12*/].f_4 = 0;
	Global_44465[173 /*12*/] = 441;
	Global_44465[173 /*12*/].f_1 = 442;
	Global_44465[173 /*12*/].f_2 = 51;
	Global_44465[173 /*12*/].f_3 = 2;
	Global_44465[173 /*12*/].f_10 = 0;
	Global_44465[173 /*12*/].f_11 = 0;
	Global_44465[173 /*12*/].f_4 = 0;
	Global_44465[174 /*12*/] = 443;
	Global_44465[174 /*12*/].f_1 = 444;
	Global_44465[174 /*12*/].f_2 = 51;
	Global_44465[174 /*12*/].f_3 = 1;
	Global_44465[174 /*12*/].f_10 = 0;
	Global_44465[174 /*12*/].f_11 = 0;
	Global_44465[174 /*12*/].f_4 = 0;
	Global_44465[175 /*12*/] = 445;
	Global_44465[175 /*12*/].f_1 = 446;
	Global_44465[175 /*12*/].f_2 = 52;
	Global_44465[175 /*12*/].f_3 = 0;
	Global_44465[175 /*12*/].f_10 = 0;
	Global_44465[175 /*12*/].f_11 = 0;
	Global_44465[175 /*12*/].f_4 = 0;
	Global_44465[176 /*12*/] = 447;
	Global_44465[176 /*12*/].f_1 = 448;
	Global_44465[176 /*12*/].f_2 = 52;
	Global_44465[176 /*12*/].f_3 = 2;
	Global_44465[176 /*12*/].f_10 = 0;
	Global_44465[176 /*12*/].f_11 = 0;
	Global_44465[176 /*12*/].f_4 = 0;
	Global_44465[177 /*12*/] = 449;
	Global_44465[177 /*12*/].f_1 = 450;
	Global_44465[177 /*12*/].f_2 = 52;
	Global_44465[177 /*12*/].f_3 = 1;
	Global_44465[177 /*12*/].f_10 = 0;
	Global_44465[177 /*12*/].f_11 = 0;
	Global_44465[177 /*12*/].f_4 = 0;
	Global_44465[178 /*12*/] = 451;
	Global_44465[178 /*12*/].f_1 = 452;
	Global_44465[178 /*12*/].f_2 = 53;
	Global_44465[178 /*12*/].f_3 = 2;
	Global_44465[178 /*12*/].f_10 = 0;
	Global_44465[178 /*12*/].f_11 = 0;
	Global_44465[178 /*12*/].f_4 = 0;
	Global_44465[179 /*12*/] = 453;
	Global_44465[179 /*12*/].f_1 = 454;
	Global_44465[179 /*12*/].f_2 = 53;
	Global_44465[179 /*12*/].f_3 = 0;
	Global_44465[179 /*12*/].f_10 = 0;
	Global_44465[179 /*12*/].f_11 = 0;
	Global_44465[179 /*12*/].f_4 = 0;
	Global_44465[180 /*12*/] = 455;
	Global_44465[180 /*12*/].f_1 = 456;
	Global_44465[180 /*12*/].f_2 = 53;
	Global_44465[180 /*12*/].f_3 = 1;
	Global_44465[180 /*12*/].f_10 = 0;
	Global_44465[180 /*12*/].f_11 = 0;
	Global_44465[180 /*12*/].f_4 = 0;
	Global_44465[181 /*12*/] = 457;
	Global_44465[181 /*12*/].f_1 = 458;
	Global_44465[181 /*12*/].f_2 = 4;
	Global_44465[181 /*12*/].f_3 = 0;
	Global_44465[181 /*12*/].f_10 = 0;
	Global_44465[181 /*12*/].f_11 = 0;
	Global_44465[181 /*12*/].f_4 = 0;
	Global_44465[182 /*12*/] = 459;
	Global_44465[182 /*12*/].f_1 = 460;
	Global_44465[182 /*12*/].f_2 = 37;
	Global_44465[182 /*12*/].f_3 = 0;
	Global_44465[182 /*12*/].f_10 = 0;
	Global_44465[182 /*12*/].f_11 = 0;
	Global_44465[182 /*12*/].f_4 = 0;
	Global_44465[183 /*12*/] = 461;
	Global_44465[183 /*12*/].f_1 = 462;
	Global_44465[183 /*12*/].f_2 = 37;
	Global_44465[183 /*12*/].f_3 = 2;
	Global_44465[183 /*12*/].f_10 = 0;
	Global_44465[183 /*12*/].f_11 = 0;
	Global_44465[183 /*12*/].f_4 = 0;
	Global_44465[184 /*12*/] = 463;
	Global_44465[184 /*12*/].f_1 = 464;
	Global_44465[184 /*12*/].f_2 = 37;
	Global_44465[184 /*12*/].f_3 = 1;
	Global_44465[184 /*12*/].f_10 = 0;
	Global_44465[184 /*12*/].f_11 = 0;
	Global_44465[184 /*12*/].f_4 = 0;
	Global_44465[185 /*12*/] = 471;
	Global_44465[185 /*12*/].f_1 = 472;
	Global_44465[185 /*12*/].f_2 = 54;
	Global_44465[185 /*12*/].f_3 = 1;
	Global_44465[185 /*12*/].f_10 = 0;
	Global_44465[185 /*12*/].f_11 = 0;
	Global_44465[185 /*12*/].f_4 = 0;
	Global_44465[186 /*12*/] = 473;
	Global_44465[186 /*12*/].f_1 = 474;
	Global_44465[186 /*12*/].f_2 = 54;
	Global_44465[186 /*12*/].f_3 = 0;
	Global_44465[186 /*12*/].f_10 = 0;
	Global_44465[186 /*12*/].f_11 = 0;
	Global_44465[186 /*12*/].f_4 = 0;
	Global_44465[187 /*12*/] = 475;
	Global_44465[187 /*12*/].f_1 = 476;
	Global_44465[187 /*12*/].f_2 = 55;
	Global_44465[187 /*12*/].f_3 = 1;
	Global_44465[187 /*12*/].f_10 = 0;
	Global_44465[187 /*12*/].f_11 = 0;
	Global_44465[187 /*12*/].f_4 = 0;
	Global_44465[188 /*12*/] = 477;
	Global_44465[188 /*12*/].f_1 = 478;
	Global_44465[188 /*12*/].f_2 = 54;
	Global_44465[188 /*12*/].f_3 = 2;
	Global_44465[188 /*12*/].f_10 = 0;
	Global_44465[188 /*12*/].f_11 = 0;
	Global_44465[188 /*12*/].f_4 = 0;
	Global_44465[189 /*12*/] = 479;
	Global_44465[189 /*12*/].f_1 = 480;
	Global_44465[189 /*12*/].f_2 = 55;
	Global_44465[189 /*12*/].f_3 = 0;
	Global_44465[189 /*12*/].f_10 = 0;
	Global_44465[189 /*12*/].f_11 = 0;
	Global_44465[189 /*12*/].f_4 = 0;
	Global_44465[190 /*12*/] = 481;
	Global_44465[190 /*12*/].f_1 = 482;
	Global_44465[190 /*12*/].f_2 = 55;
	Global_44465[190 /*12*/].f_3 = 2;
	Global_44465[190 /*12*/].f_10 = 0;
	Global_44465[190 /*12*/].f_11 = 0;
	Global_44465[190 /*12*/].f_4 = 0;
	Global_44465[191 /*12*/] = 483;
	Global_44465[191 /*12*/].f_1 = 484;
	Global_44465[191 /*12*/].f_2 = 12;
	Global_44465[191 /*12*/].f_3 = 0;
	Global_44465[191 /*12*/].f_10 = 0;
	Global_44465[191 /*12*/].f_11 = 0;
	Global_44465[191 /*12*/].f_4 = 0;
	Global_44465[192 /*12*/] = 485;
	Global_44465[192 /*12*/].f_1 = 486;
	Global_44465[192 /*12*/].f_2 = 12;
	Global_44465[192 /*12*/].f_3 = 1;
	Global_44465[192 /*12*/].f_10 = 0;
	Global_44465[192 /*12*/].f_11 = 0;
	Global_44465[192 /*12*/].f_4 = 0;
	Global_44465[193 /*12*/] = 487;
	Global_44465[193 /*12*/].f_1 = 488;
	Global_44465[193 /*12*/].f_2 = 12;
	Global_44465[193 /*12*/].f_3 = 2;
	Global_44465[193 /*12*/].f_10 = 0;
	Global_44465[193 /*12*/].f_11 = 0;
	Global_44465[193 /*12*/].f_4 = 0;
	Global_44465[194 /*12*/] = 510;
	Global_44465[194 /*12*/].f_1 = 511;
	Global_44465[194 /*12*/].f_2 = 56;
	Global_44465[194 /*12*/].f_3 = 0;
	Global_44465[194 /*12*/].f_10 = 0;
	Global_44465[194 /*12*/].f_11 = 0;
	Global_44465[194 /*12*/].f_4 = 0;
	Global_44465[195 /*12*/] = 512;
	Global_44465[195 /*12*/].f_1 = 513;
	Global_44465[195 /*12*/].f_2 = 56;
	Global_44465[195 /*12*/].f_3 = 0;
	Global_44465[195 /*12*/].f_10 = 0;
	Global_44465[195 /*12*/].f_11 = 0;
	Global_44465[195 /*12*/].f_4 = 0;
	Global_44465[196 /*12*/] = 514;
	Global_44465[196 /*12*/].f_1 = 515;
	Global_44465[196 /*12*/].f_2 = 56;
	Global_44465[196 /*12*/].f_3 = 0;
	Global_44465[196 /*12*/].f_10 = 0;
	Global_44465[196 /*12*/].f_11 = 0;
	Global_44465[196 /*12*/].f_4 = 0;
	Global_44465[197 /*12*/] = 516;
	Global_44465[197 /*12*/].f_1 = 517;
	Global_44465[197 /*12*/].f_2 = 56;
	Global_44465[197 /*12*/].f_3 = 0;
	Global_44465[197 /*12*/].f_10 = 0;
	Global_44465[197 /*12*/].f_11 = 0;
	Global_44465[197 /*12*/].f_4 = 0;
	Global_44465[198 /*12*/] = 518;
	Global_44465[198 /*12*/].f_1 = 519;
	Global_44465[198 /*12*/].f_2 = 56;
	Global_44465[198 /*12*/].f_3 = 0;
	Global_44465[198 /*12*/].f_10 = 0;
	Global_44465[198 /*12*/].f_11 = 0;
	Global_44465[198 /*12*/].f_4 = 0;
	Global_44465[199 /*12*/] = 520;
	Global_44465[199 /*12*/].f_1 = 521;
	Global_44465[199 /*12*/].f_2 = 57;
	Global_44465[199 /*12*/].f_3 = 0;
	Global_44465[199 /*12*/].f_10 = 1;
	Global_44465[199 /*12*/].f_11 = 60000;
	Global_44465[199 /*12*/].f_4 = 1;
	Global_44465[199 /*12*/].f_5[0 /*4*/] = 536;
	Global_44465[199 /*12*/].f_5[0 /*4*/].f_1 = 200;
	Global_44465[199 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[199 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[200 /*12*/] = 522;
	Global_44465[200 /*12*/].f_1 = 523;
	Global_44465[200 /*12*/].f_2 = 0;
	Global_44465[200 /*12*/].f_3 = 57;
	Global_44465[200 /*12*/].f_10 = 0;
	Global_44465[200 /*12*/].f_11 = 0;
	Global_44465[200 /*12*/].f_4 = 1;
	Global_44465[200 /*12*/].f_5[0 /*4*/] = 537;
	Global_44465[200 /*12*/].f_5[0 /*4*/].f_1 = 201;
	Global_44465[200 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[200 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[201 /*12*/] = 524;
	Global_44465[201 /*12*/].f_1 = 525;
	Global_44465[201 /*12*/].f_2 = 57;
	Global_44465[201 /*12*/].f_3 = 0;
	Global_44465[201 /*12*/].f_10 = 1;
	Global_44465[201 /*12*/].f_11 = 60000;
	Global_44465[201 /*12*/].f_4 = 1;
	Global_44465[201 /*12*/].f_5[0 /*4*/] = 538;
	Global_44465[201 /*12*/].f_5[0 /*4*/].f_1 = 202;
	Global_44465[201 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[201 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[202 /*12*/] = 526;
	Global_44465[202 /*12*/].f_1 = 527;
	Global_44465[202 /*12*/].f_2 = 0;
	Global_44465[202 /*12*/].f_3 = 57;
	Global_44465[202 /*12*/].f_10 = 0;
	Global_44465[202 /*12*/].f_11 = 0;
	Global_44465[202 /*12*/].f_4 = 1;
	Global_44465[202 /*12*/].f_5[0 /*4*/] = 539;
	Global_44465[202 /*12*/].f_5[0 /*4*/].f_1 = 203;
	Global_44465[202 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[202 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[203 /*12*/] = 528;
	Global_44465[203 /*12*/].f_1 = 529;
	Global_44465[203 /*12*/].f_2 = 57;
	Global_44465[203 /*12*/].f_3 = 0;
	Global_44465[203 /*12*/].f_10 = 1;
	Global_44465[203 /*12*/].f_11 = 60000;
	Global_44465[203 /*12*/].f_4 = 1;
	Global_44465[203 /*12*/].f_5[0 /*4*/] = 540;
	Global_44465[203 /*12*/].f_5[0 /*4*/].f_1 = 204;
	Global_44465[203 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[203 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[204 /*12*/] = 530;
	Global_44465[204 /*12*/].f_1 = 531;
	Global_44465[204 /*12*/].f_2 = 0;
	Global_44465[204 /*12*/].f_3 = 57;
	Global_44465[204 /*12*/].f_10 = 0;
	Global_44465[204 /*12*/].f_11 = 0;
	Global_44465[204 /*12*/].f_4 = 1;
	Global_44465[204 /*12*/].f_5[0 /*4*/] = 541;
	Global_44465[204 /*12*/].f_5[0 /*4*/].f_1 = 205;
	Global_44465[204 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[204 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[205 /*12*/] = 532;
	Global_44465[205 /*12*/].f_1 = 533;
	Global_44465[205 /*12*/].f_2 = 57;
	Global_44465[205 /*12*/].f_3 = 0;
	Global_44465[205 /*12*/].f_10 = 1;
	Global_44465[205 /*12*/].f_11 = 60000;
	Global_44465[205 /*12*/].f_4 = 1;
	Global_44465[205 /*12*/].f_5[0 /*4*/] = 542;
	Global_44465[205 /*12*/].f_5[0 /*4*/].f_1 = 206;
	Global_44465[205 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[205 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[206 /*12*/] = 534;
	Global_44465[206 /*12*/].f_1 = 535;
	Global_44465[206 /*12*/].f_2 = 0;
	Global_44465[206 /*12*/].f_3 = 57;
	Global_44465[206 /*12*/].f_10 = 0;
	Global_44465[206 /*12*/].f_11 = 0;
	Global_44465[206 /*12*/].f_4 = 0;
	Global_44465[207 /*12*/] = 543;
	Global_44465[207 /*12*/].f_1 = 544;
	Global_44465[207 /*12*/].f_2 = 58;
	Global_44465[207 /*12*/].f_3 = 0;
	Global_44465[207 /*12*/].f_10 = 1;
	Global_44465[207 /*12*/].f_11 = 60000;
	Global_44465[207 /*12*/].f_4 = 1;
	Global_44465[207 /*12*/].f_5[0 /*4*/] = 557;
	Global_44465[207 /*12*/].f_5[0 /*4*/].f_1 = 208;
	Global_44465[207 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[207 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[208 /*12*/] = 545;
	Global_44465[208 /*12*/].f_1 = 546;
	Global_44465[208 /*12*/].f_2 = 0;
	Global_44465[208 /*12*/].f_3 = 58;
	Global_44465[208 /*12*/].f_10 = 0;
	Global_44465[208 /*12*/].f_11 = 0;
	Global_44465[208 /*12*/].f_4 = 1;
	Global_44465[208 /*12*/].f_5[0 /*4*/] = 558;
	Global_44465[208 /*12*/].f_5[0 /*4*/].f_1 = 209;
	Global_44465[208 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[208 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[209 /*12*/] = 547;
	Global_44465[209 /*12*/].f_1 = 548;
	Global_44465[209 /*12*/].f_2 = 58;
	Global_44465[209 /*12*/].f_3 = 0;
	Global_44465[209 /*12*/].f_10 = 1;
	Global_44465[209 /*12*/].f_11 = 60000;
	Global_44465[209 /*12*/].f_4 = 1;
	Global_44465[209 /*12*/].f_5[0 /*4*/] = 559;
	Global_44465[209 /*12*/].f_5[0 /*4*/].f_1 = 210;
	Global_44465[209 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[209 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[210 /*12*/] = 549;
	Global_44465[210 /*12*/].f_1 = 550;
	Global_44465[210 /*12*/].f_2 = 0;
	Global_44465[210 /*12*/].f_3 = 58;
	Global_44465[210 /*12*/].f_10 = 0;
	Global_44465[210 /*12*/].f_11 = 0;
	Global_44465[210 /*12*/].f_4 = 1;
	Global_44465[210 /*12*/].f_5[0 /*4*/] = 560;
	Global_44465[210 /*12*/].f_5[0 /*4*/].f_1 = 211;
	Global_44465[210 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[210 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[211 /*12*/] = 551;
	Global_44465[211 /*12*/].f_1 = 552;
	Global_44465[211 /*12*/].f_2 = 58;
	Global_44465[211 /*12*/].f_3 = 0;
	Global_44465[211 /*12*/].f_10 = 1;
	Global_44465[211 /*12*/].f_11 = 60000;
	Global_44465[211 /*12*/].f_4 = 1;
	Global_44465[211 /*12*/].f_5[0 /*4*/] = 561;
	Global_44465[211 /*12*/].f_5[0 /*4*/].f_1 = 212;
	Global_44465[211 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[211 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[212 /*12*/] = 553;
	Global_44465[212 /*12*/].f_1 = 554;
	Global_44465[212 /*12*/].f_2 = 0;
	Global_44465[212 /*12*/].f_3 = 58;
	Global_44465[212 /*12*/].f_10 = 0;
	Global_44465[212 /*12*/].f_11 = 0;
	Global_44465[212 /*12*/].f_4 = 1;
	Global_44465[212 /*12*/].f_5[0 /*4*/] = 562;
	Global_44465[212 /*12*/].f_5[0 /*4*/].f_1 = -1;
	Global_44465[212 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[212 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[213 /*12*/] = 555;
	Global_44465[213 /*12*/].f_1 = 556;
	Global_44465[213 /*12*/].f_2 = 58;
	Global_44465[213 /*12*/].f_3 = 0;
	Global_44465[213 /*12*/].f_10 = 1;
	Global_44465[213 /*12*/].f_11 = 60000;
	Global_44465[213 /*12*/].f_4 = 0;
	Global_44465[214 /*12*/] = 563;
	Global_44465[214 /*12*/].f_1 = 564;
	Global_44465[214 /*12*/].f_2 = 59;
	Global_44465[214 /*12*/].f_3 = 0;
	Global_44465[214 /*12*/].f_10 = 1;
	Global_44465[214 /*12*/].f_11 = 60000;
	Global_44465[214 /*12*/].f_4 = 1;
	Global_44465[214 /*12*/].f_5[0 /*4*/] = 579;
	Global_44465[214 /*12*/].f_5[0 /*4*/].f_1 = 215;
	Global_44465[214 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[214 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[215 /*12*/] = 565;
	Global_44465[215 /*12*/].f_1 = 566;
	Global_44465[215 /*12*/].f_2 = 0;
	Global_44465[215 /*12*/].f_3 = 59;
	Global_44465[215 /*12*/].f_10 = 0;
	Global_44465[215 /*12*/].f_11 = 0;
	Global_44465[215 /*12*/].f_4 = 1;
	Global_44465[215 /*12*/].f_5[0 /*4*/] = 580;
	Global_44465[215 /*12*/].f_5[0 /*4*/].f_1 = 216;
	Global_44465[215 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[215 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[216 /*12*/] = 567;
	Global_44465[216 /*12*/].f_1 = 568;
	Global_44465[216 /*12*/].f_2 = 59;
	Global_44465[216 /*12*/].f_3 = 0;
	Global_44465[216 /*12*/].f_10 = 1;
	Global_44465[216 /*12*/].f_11 = 60000;
	Global_44465[216 /*12*/].f_4 = 1;
	Global_44465[216 /*12*/].f_5[0 /*4*/] = 581;
	Global_44465[216 /*12*/].f_5[0 /*4*/].f_1 = 217;
	Global_44465[216 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[216 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[217 /*12*/] = 569;
	Global_44465[217 /*12*/].f_1 = 570;
	Global_44465[217 /*12*/].f_2 = 0;
	Global_44465[217 /*12*/].f_3 = 59;
	Global_44465[217 /*12*/].f_10 = 0;
	Global_44465[217 /*12*/].f_11 = 0;
	Global_44465[217 /*12*/].f_4 = 1;
	Global_44465[217 /*12*/].f_5[0 /*4*/] = 582;
	Global_44465[217 /*12*/].f_5[0 /*4*/].f_1 = 218;
	Global_44465[217 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[217 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[218 /*12*/] = 571;
	Global_44465[218 /*12*/].f_1 = 572;
	Global_44465[218 /*12*/].f_2 = 59;
	Global_44465[218 /*12*/].f_3 = 0;
	Global_44465[218 /*12*/].f_10 = 1;
	Global_44465[218 /*12*/].f_11 = 60000;
	Global_44465[218 /*12*/].f_4 = 1;
	Global_44465[218 /*12*/].f_5[0 /*4*/] = 583;
	Global_44465[218 /*12*/].f_5[0 /*4*/].f_1 = 219;
	Global_44465[218 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[218 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[219 /*12*/] = 573;
	Global_44465[219 /*12*/].f_1 = 574;
	Global_44465[219 /*12*/].f_2 = 0;
	Global_44465[219 /*12*/].f_3 = 59;
	Global_44465[219 /*12*/].f_10 = 0;
	Global_44465[219 /*12*/].f_11 = 0;
	Global_44465[219 /*12*/].f_4 = 1;
	Global_44465[219 /*12*/].f_5[0 /*4*/] = 584;
	Global_44465[219 /*12*/].f_5[0 /*4*/].f_1 = 220;
	Global_44465[219 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[219 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[220 /*12*/] = 575;
	Global_44465[220 /*12*/].f_1 = 576;
	Global_44465[220 /*12*/].f_2 = 59;
	Global_44465[220 /*12*/].f_3 = 0;
	Global_44465[220 /*12*/].f_10 = 1;
	Global_44465[220 /*12*/].f_11 = 60000;
	Global_44465[220 /*12*/].f_4 = 1;
	Global_44465[220 /*12*/].f_5[0 /*4*/] = 585;
	Global_44465[220 /*12*/].f_5[0 /*4*/].f_1 = 221;
	Global_44465[220 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[220 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[221 /*12*/] = 577;
	Global_44465[221 /*12*/].f_1 = 578;
	Global_44465[221 /*12*/].f_2 = 0;
	Global_44465[221 /*12*/].f_3 = 59;
	Global_44465[221 /*12*/].f_10 = 0;
	Global_44465[221 /*12*/].f_11 = 0;
	Global_44465[221 /*12*/].f_4 = 0;
	Global_44465[222 /*12*/] = 586;
	Global_44465[222 /*12*/].f_1 = 587;
	Global_44465[222 /*12*/].f_2 = 60;
	Global_44465[222 /*12*/].f_3 = 2;
	Global_44465[222 /*12*/].f_10 = 1;
	Global_44465[222 /*12*/].f_11 = 60000;
	Global_44465[222 /*12*/].f_4 = 1;
	Global_44465[222 /*12*/].f_5[0 /*4*/] = 600;
	Global_44465[222 /*12*/].f_5[0 /*4*/].f_1 = 223;
	Global_44465[222 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[222 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[223 /*12*/] = 588;
	Global_44465[223 /*12*/].f_1 = 589;
	Global_44465[223 /*12*/].f_2 = 2;
	Global_44465[223 /*12*/].f_3 = 60;
	Global_44465[223 /*12*/].f_10 = 0;
	Global_44465[223 /*12*/].f_11 = 0;
	Global_44465[223 /*12*/].f_4 = 1;
	Global_44465[223 /*12*/].f_5[0 /*4*/] = 601;
	Global_44465[223 /*12*/].f_5[0 /*4*/].f_1 = 224;
	Global_44465[223 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[223 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[224 /*12*/] = 590;
	Global_44465[224 /*12*/].f_1 = 591;
	Global_44465[224 /*12*/].f_2 = 60;
	Global_44465[224 /*12*/].f_3 = 2;
	Global_44465[224 /*12*/].f_10 = 1;
	Global_44465[224 /*12*/].f_11 = 60000;
	Global_44465[224 /*12*/].f_4 = 1;
	Global_44465[224 /*12*/].f_5[0 /*4*/] = 602;
	Global_44465[224 /*12*/].f_5[0 /*4*/].f_1 = 225;
	Global_44465[224 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[224 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[225 /*12*/] = 592;
	Global_44465[225 /*12*/].f_1 = 593;
	Global_44465[225 /*12*/].f_2 = 2;
	Global_44465[225 /*12*/].f_3 = 60;
	Global_44465[225 /*12*/].f_10 = 0;
	Global_44465[225 /*12*/].f_11 = 0;
	Global_44465[225 /*12*/].f_4 = 1;
	Global_44465[225 /*12*/].f_5[0 /*4*/] = 603;
	Global_44465[225 /*12*/].f_5[0 /*4*/].f_1 = 226;
	Global_44465[225 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[225 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[226 /*12*/] = 594;
	Global_44465[226 /*12*/].f_1 = 595;
	Global_44465[226 /*12*/].f_2 = 60;
	Global_44465[226 /*12*/].f_3 = 2;
	Global_44465[226 /*12*/].f_10 = 1;
	Global_44465[226 /*12*/].f_11 = 60000;
	Global_44465[226 /*12*/].f_4 = 1;
	Global_44465[226 /*12*/].f_5[0 /*4*/] = 604;
	Global_44465[226 /*12*/].f_5[0 /*4*/].f_1 = 227;
	Global_44465[226 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[226 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[227 /*12*/] = 596;
	Global_44465[227 /*12*/].f_1 = 597;
	Global_44465[227 /*12*/].f_2 = 2;
	Global_44465[227 /*12*/].f_3 = 60;
	Global_44465[227 /*12*/].f_10 = 1;
	Global_44465[227 /*12*/].f_11 = 60000;
	Global_44465[227 /*12*/].f_4 = 1;
	Global_44465[227 /*12*/].f_5[0 /*4*/] = 605;
	Global_44465[227 /*12*/].f_5[0 /*4*/].f_1 = 228;
	Global_44465[227 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[227 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[228 /*12*/] = 598;
	Global_44465[228 /*12*/].f_1 = 599;
	Global_44465[228 /*12*/].f_2 = 2;
	Global_44465[228 /*12*/].f_3 = 60;
	Global_44465[228 /*12*/].f_10 = 0;
	Global_44465[228 /*12*/].f_11 = 0;
	Global_44465[228 /*12*/].f_4 = 0;
	Global_44465[229 /*12*/] = 606;
	Global_44465[229 /*12*/].f_1 = 607;
	Global_44465[229 /*12*/].f_2 = 61;
	Global_44465[229 /*12*/].f_3 = 2;
	Global_44465[229 /*12*/].f_10 = 1;
	Global_44465[229 /*12*/].f_11 = 60000;
	Global_44465[229 /*12*/].f_4 = 1;
	Global_44465[229 /*12*/].f_5[0 /*4*/] = 610;
	Global_44465[229 /*12*/].f_5[0 /*4*/].f_1 = 230;
	Global_44465[229 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[229 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[230 /*12*/] = 608;
	Global_44465[230 /*12*/].f_1 = 609;
	Global_44465[230 /*12*/].f_2 = 2;
	Global_44465[230 /*12*/].f_3 = 61;
	Global_44465[230 /*12*/].f_10 = 0;
	Global_44465[230 /*12*/].f_11 = 0;
	Global_44465[230 /*12*/].f_4 = 1;
	Global_44465[230 /*12*/].f_5[0 /*4*/] = 617;
	Global_44465[230 /*12*/].f_5[0 /*4*/].f_1 = 231;
	Global_44465[230 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[230 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[231 /*12*/] = 611;
	Global_44465[231 /*12*/].f_1 = 612;
	Global_44465[231 /*12*/].f_2 = 61;
	Global_44465[231 /*12*/].f_3 = 2;
	Global_44465[231 /*12*/].f_10 = 1;
	Global_44465[231 /*12*/].f_11 = 60000;
	Global_44465[231 /*12*/].f_4 = 1;
	Global_44465[231 /*12*/].f_5[0 /*4*/] = 618;
	Global_44465[231 /*12*/].f_5[0 /*4*/].f_1 = 232;
	Global_44465[231 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[231 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[232 /*12*/] = 613;
	Global_44465[232 /*12*/].f_1 = 614;
	Global_44465[232 /*12*/].f_2 = 2;
	Global_44465[232 /*12*/].f_3 = 61;
	Global_44465[232 /*12*/].f_10 = 0;
	Global_44465[232 /*12*/].f_11 = 0;
	Global_44465[232 /*12*/].f_4 = 1;
	Global_44465[232 /*12*/].f_5[0 /*4*/] = 619;
	Global_44465[232 /*12*/].f_5[0 /*4*/].f_1 = 233;
	Global_44465[232 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[232 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[233 /*12*/] = 615;
	Global_44465[233 /*12*/].f_1 = 616;
	Global_44465[233 /*12*/].f_2 = 61;
	Global_44465[233 /*12*/].f_3 = 2;
	Global_44465[233 /*12*/].f_10 = 1;
	Global_44465[233 /*12*/].f_11 = 60000;
	Global_44465[233 /*12*/].f_4 = 1;
	Global_44465[233 /*12*/].f_5[0 /*4*/] = 622;
	Global_44465[233 /*12*/].f_5[0 /*4*/].f_1 = 234;
	Global_44465[233 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[233 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[234 /*12*/] = 620;
	Global_44465[234 /*12*/].f_1 = 621;
	Global_44465[234 /*12*/].f_2 = 2;
	Global_44465[234 /*12*/].f_3 = 61;
	Global_44465[234 /*12*/].f_10 = 0;
	Global_44465[234 /*12*/].f_11 = 0;
	Global_44465[234 /*12*/].f_4 = 0;
	Global_44465[235 /*12*/] = 623;
	Global_44465[235 /*12*/].f_1 = 624;
	Global_44465[235 /*12*/].f_2 = 62;
	Global_44465[235 /*12*/].f_3 = 2;
	Global_44465[235 /*12*/].f_10 = 1;
	Global_44465[235 /*12*/].f_11 = 60000;
	Global_44465[235 /*12*/].f_4 = 1;
	Global_44465[235 /*12*/].f_5[0 /*4*/] = 635;
	Global_44465[235 /*12*/].f_5[0 /*4*/].f_1 = 236;
	Global_44465[235 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[235 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[236 /*12*/] = 625;
	Global_44465[236 /*12*/].f_1 = 626;
	Global_44465[236 /*12*/].f_2 = 2;
	Global_44465[236 /*12*/].f_3 = 62;
	Global_44465[236 /*12*/].f_10 = 0;
	Global_44465[236 /*12*/].f_11 = 0;
	Global_44465[236 /*12*/].f_4 = 1;
	Global_44465[236 /*12*/].f_5[0 /*4*/] = 636;
	Global_44465[236 /*12*/].f_5[0 /*4*/].f_1 = 237;
	Global_44465[236 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[236 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[237 /*12*/] = 627;
	Global_44465[237 /*12*/].f_1 = 628;
	Global_44465[237 /*12*/].f_2 = 62;
	Global_44465[237 /*12*/].f_3 = 2;
	Global_44465[237 /*12*/].f_10 = 1;
	Global_44465[237 /*12*/].f_11 = 60000;
	Global_44465[237 /*12*/].f_4 = 1;
	Global_44465[237 /*12*/].f_5[0 /*4*/] = 637;
	Global_44465[237 /*12*/].f_5[0 /*4*/].f_1 = 238;
	Global_44465[237 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[237 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[238 /*12*/] = 629;
	Global_44465[238 /*12*/].f_1 = 630;
	Global_44465[238 /*12*/].f_2 = 2;
	Global_44465[238 /*12*/].f_3 = 62;
	Global_44465[238 /*12*/].f_10 = 0;
	Global_44465[238 /*12*/].f_11 = 0;
	Global_44465[238 /*12*/].f_4 = 1;
	Global_44465[238 /*12*/].f_5[0 /*4*/] = 638;
	Global_44465[238 /*12*/].f_5[0 /*4*/].f_1 = 239;
	Global_44465[238 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[238 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[239 /*12*/] = 631;
	Global_44465[239 /*12*/].f_1 = 632;
	Global_44465[239 /*12*/].f_2 = 62;
	Global_44465[239 /*12*/].f_3 = 2;
	Global_44465[239 /*12*/].f_10 = 1;
	Global_44465[239 /*12*/].f_11 = 60000;
	Global_44465[239 /*12*/].f_4 = 1;
	Global_44465[239 /*12*/].f_5[0 /*4*/] = 639;
	Global_44465[239 /*12*/].f_5[0 /*4*/].f_1 = 240;
	Global_44465[239 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44465[239 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44465[240 /*12*/] = 633;
	Global_44465[240 /*12*/].f_1 = 634;
	Global_44465[240 /*12*/].f_2 = 2;
	Global_44465[240 /*12*/].f_3 = 62;
	Global_44465[240 /*12*/].f_10 = 0;
	Global_44465[240 /*12*/].f_11 = 0;
	Global_44465[240 /*12*/].f_4 = 0;
	Global_44465[241 /*12*/] = 646;
	Global_44465[241 /*12*/].f_1 = 647;
	Global_44465[241 /*12*/].f_2 = 36;
	Global_44465[241 /*12*/].f_3 = 2;
	Global_44465[241 /*12*/].f_10 = 0;
	Global_44465[241 /*12*/].f_11 = 0;
	Global_44465[241 /*12*/].f_4 = 0;
	Global_44465[242 /*12*/] = 648;
	Global_44465[242 /*12*/].f_1 = 649;
	Global_44465[242 /*12*/].f_2 = 36;
	Global_44465[242 /*12*/].f_3 = 0;
	Global_44465[242 /*12*/].f_10 = 0;
	Global_44465[242 /*12*/].f_11 = 0;
	Global_44465[242 /*12*/].f_4 = 0;
	Global_44465[243 /*12*/] = 650;
	Global_44465[243 /*12*/].f_1 = 651;
	Global_44465[243 /*12*/].f_2 = 36;
	Global_44465[243 /*12*/].f_3 = 1;
	Global_44465[243 /*12*/].f_10 = 0;
	Global_44465[243 /*12*/].f_11 = 0;
	Global_44465[243 /*12*/].f_4 = 0;
	Global_44465[244 /*12*/] = 655;
	Global_44465[244 /*12*/].f_1 = 656;
	Global_44465[244 /*12*/].f_2 = 65;
	Global_44465[244 /*12*/].f_3 = 1;
	Global_44465[244 /*12*/].f_10 = 0;
	Global_44465[244 /*12*/].f_11 = 0;
	Global_44465[244 /*12*/].f_4 = 0;
	Global_44465[245 /*12*/] = 657;
	Global_44465[245 /*12*/].f_1 = 658;
	Global_44465[245 /*12*/].f_2 = 65;
	Global_44465[245 /*12*/].f_3 = 1;
	Global_44465[245 /*12*/].f_10 = 0;
	Global_44465[245 /*12*/].f_11 = 0;
	Global_44465[245 /*12*/].f_4 = 0;
	Global_44465[246 /*12*/] = 659;
	Global_44465[246 /*12*/].f_1 = 660;
	Global_44465[246 /*12*/].f_2 = 65;
	Global_44465[246 /*12*/].f_3 = 1;
	Global_44465[246 /*12*/].f_10 = 0;
	Global_44465[246 /*12*/].f_11 = 0;
	Global_44465[246 /*12*/].f_4 = 0;
	Global_44465[247 /*12*/] = 661;
	Global_44465[247 /*12*/].f_1 = 662;
	Global_44465[247 /*12*/].f_2 = 65;
	Global_44465[247 /*12*/].f_3 = 1;
	Global_44465[247 /*12*/].f_10 = 0;
	Global_44465[247 /*12*/].f_11 = 0;
	Global_44465[247 /*12*/].f_4 = 0;
	Global_44465[248 /*12*/] = 663;
	Global_44465[248 /*12*/].f_1 = 664;
	Global_44465[248 /*12*/].f_2 = 33;
	Global_44465[248 /*12*/].f_3 = 2;
	Global_44465[248 /*12*/].f_10 = 0;
	Global_44465[248 /*12*/].f_11 = 40000;
	Global_44465[248 /*12*/].f_4 = 0;
	Global_44465[249 /*12*/] = 665;
	Global_44465[249 /*12*/].f_1 = 666;
	Global_44465[249 /*12*/].f_2 = 19;
	Global_44465[249 /*12*/].f_3 = 1;
	Global_44465[249 /*12*/].f_10 = 1;
	Global_44465[249 /*12*/].f_11 = 0;
	Global_44465[249 /*12*/].f_4 = 0;
	Global_44465[250 /*12*/] = 667;
	Global_44465[250 /*12*/].f_1 = 668;
	Global_44465[250 /*12*/].f_2 = 19;
	Global_44465[250 /*12*/].f_3 = 1;
	Global_44465[250 /*12*/].f_10 = 1;
	Global_44465[250 /*12*/].f_11 = 0;
	Global_44465[250 /*12*/].f_4 = 0;
	Global_44465[251 /*12*/] = 669;
	Global_44465[251 /*12*/].f_1 = 670;
	Global_44465[251 /*12*/].f_2 = 19;
	Global_44465[251 /*12*/].f_3 = 1;
	Global_44465[251 /*12*/].f_10 = 1;
	Global_44465[251 /*12*/].f_11 = 0;
	Global_44465[251 /*12*/].f_4 = 0;
	Global_44465[252 /*12*/] = 671;
	Global_44465[252 /*12*/].f_1 = 672;
	Global_44465[252 /*12*/].f_2 = 19;
	Global_44465[252 /*12*/].f_3 = 1;
	Global_44465[252 /*12*/].f_10 = 1;
	Global_44465[252 /*12*/].f_11 = 0;
	Global_44465[252 /*12*/].f_4 = 0;
	Global_44465[253 /*12*/] = 673;
	Global_44465[253 /*12*/].f_1 = 674;
	Global_44465[253 /*12*/].f_2 = 19;
	Global_44465[253 /*12*/].f_3 = 1;
	Global_44465[253 /*12*/].f_10 = 1;
	Global_44465[253 /*12*/].f_11 = 0;
	Global_44465[253 /*12*/].f_4 = 0;
	Global_44465[254 /*12*/] = 675;
	Global_44465[254 /*12*/].f_1 = 676;
	Global_44465[254 /*12*/].f_2 = 19;
	Global_44465[254 /*12*/].f_3 = 1;
	Global_44465[254 /*12*/].f_10 = 1;
	Global_44465[254 /*12*/].f_11 = 0;
	Global_44465[254 /*12*/].f_4 = 0;
	Global_44465[255 /*12*/] = 679;
	Global_44465[255 /*12*/].f_1 = 680;
	Global_44465[255 /*12*/].f_2 = 19;
	Global_44465[255 /*12*/].f_3 = 1;
	Global_44465[255 /*12*/].f_10 = 1;
	Global_44465[255 /*12*/].f_11 = 0;
	Global_44465[255 /*12*/].f_4 = 0;
	Global_44465[256 /*12*/] = 677;
	Global_44465[256 /*12*/].f_1 = 678;
	Global_44465[256 /*12*/].f_2 = 19;
	Global_44465[256 /*12*/].f_3 = 1;
	Global_44465[256 /*12*/].f_10 = 1;
	Global_44465[256 /*12*/].f_11 = 0;
	Global_44465[256 /*12*/].f_4 = 0;
	Global_44465[257 /*12*/] = 681;
	Global_44465[257 /*12*/].f_1 = 682;
	Global_44465[257 /*12*/].f_2 = 19;
	Global_44465[257 /*12*/].f_3 = 1;
	Global_44465[257 /*12*/].f_10 = 1;
	Global_44465[257 /*12*/].f_11 = 0;
	Global_44465[257 /*12*/].f_4 = 0;
	Global_44465[258 /*12*/] = 683;
	Global_44465[258 /*12*/].f_1 = 684;
	Global_44465[258 /*12*/].f_2 = 19;
	Global_44465[258 /*12*/].f_3 = 1;
	Global_44465[258 /*12*/].f_10 = 1;
	Global_44465[258 /*12*/].f_11 = 0;
	Global_44465[258 /*12*/].f_4 = 0;
	Global_44465[259 /*12*/] = 685;
	Global_44465[259 /*12*/].f_1 = 686;
	Global_44465[259 /*12*/].f_2 = 19;
	Global_44465[259 /*12*/].f_3 = 1;
	Global_44465[259 /*12*/].f_10 = 1;
	Global_44465[259 /*12*/].f_11 = 0;
	Global_44465[259 /*12*/].f_4 = 0;
	Global_44465[260 /*12*/] = 687;
	Global_44465[260 /*12*/].f_1 = 688;
	Global_44465[260 /*12*/].f_2 = 19;
	Global_44465[260 /*12*/].f_3 = 1;
	Global_44465[260 /*12*/].f_10 = 1;
	Global_44465[260 /*12*/].f_11 = 0;
	Global_44465[260 /*12*/].f_4 = 0;
	Global_44465[261 /*12*/] = 691;
	Global_44465[261 /*12*/].f_1 = 692;
	Global_44465[261 /*12*/].f_2 = 19;
	Global_44465[261 /*12*/].f_3 = 1;
	Global_44465[261 /*12*/].f_10 = 1;
	Global_44465[261 /*12*/].f_11 = 0;
	Global_44465[261 /*12*/].f_4 = 0;
	Global_44465[262 /*12*/] = 689;
	Global_44465[262 /*12*/].f_1 = 690;
	Global_44465[262 /*12*/].f_2 = 19;
	Global_44465[262 /*12*/].f_3 = 1;
	Global_44465[262 /*12*/].f_10 = 1;
	Global_44465[262 /*12*/].f_11 = 0;
	Global_44465[262 /*12*/].f_4 = 0;
	Global_44465[263 /*12*/] = 693;
	Global_44465[263 /*12*/].f_1 = 694;
	Global_44465[263 /*12*/].f_2 = 19;
	Global_44465[263 /*12*/].f_3 = 1;
	Global_44465[263 /*12*/].f_10 = 1;
	Global_44465[263 /*12*/].f_11 = 0;
	Global_44465[263 /*12*/].f_4 = 0;
	Global_44465[264 /*12*/] = 695;
	Global_44465[264 /*12*/].f_1 = 696;
	Global_44465[264 /*12*/].f_2 = 19;
	Global_44465[264 /*12*/].f_3 = 1;
	Global_44465[264 /*12*/].f_10 = 1;
	Global_44465[264 /*12*/].f_11 = 0;
	Global_44465[264 /*12*/].f_4 = 0;
	Global_44465[265 /*12*/] = 697;
	Global_44465[265 /*12*/].f_1 = 698;
	Global_44465[265 /*12*/].f_2 = 19;
	Global_44465[265 /*12*/].f_3 = 1;
	Global_44465[265 /*12*/].f_10 = 1;
	Global_44465[265 /*12*/].f_11 = 0;
	Global_44465[265 /*12*/].f_4 = 0;
	Global_44465[266 /*12*/] = 699;
	Global_44465[266 /*12*/].f_1 = 700;
	Global_44465[266 /*12*/].f_2 = 19;
	Global_44465[266 /*12*/].f_3 = 1;
	Global_44465[266 /*12*/].f_10 = 1;
	Global_44465[266 /*12*/].f_11 = 0;
	Global_44465[266 /*12*/].f_4 = 0;
	Global_44465[267 /*12*/] = 701;
	Global_44465[267 /*12*/].f_1 = 702;
	Global_44465[267 /*12*/].f_2 = 19;
	Global_44465[267 /*12*/].f_3 = 1;
	Global_44465[267 /*12*/].f_10 = 1;
	Global_44465[267 /*12*/].f_11 = 0;
	Global_44465[267 /*12*/].f_4 = 0;
	Global_44465[268 /*12*/] = 703;
	Global_44465[268 /*12*/].f_1 = 704;
	Global_44465[268 /*12*/].f_2 = 19;
	Global_44465[268 /*12*/].f_3 = 1;
	Global_44465[268 /*12*/].f_10 = 1;
	Global_44465[268 /*12*/].f_11 = 0;
	Global_44465[268 /*12*/].f_4 = 0;
	Global_44465[269 /*12*/] = 705;
	Global_44465[269 /*12*/].f_1 = 706;
	Global_44465[269 /*12*/].f_2 = 19;
	Global_44465[269 /*12*/].f_3 = 1;
	Global_44465[269 /*12*/].f_10 = 1;
	Global_44465[269 /*12*/].f_11 = 0;
	Global_44465[269 /*12*/].f_4 = 0;
	Global_44465[270 /*12*/] = 707;
	Global_44465[270 /*12*/].f_1 = 708;
	Global_44465[270 /*12*/].f_2 = 16;
	Global_44465[270 /*12*/].f_3 = 0;
	Global_44465[270 /*12*/].f_10 = 1;
	Global_44465[270 /*12*/].f_11 = 0;
	Global_44465[270 /*12*/].f_4 = 0;
	Global_44465[271 /*12*/] = 709;
	Global_44465[271 /*12*/].f_1 = 710;
	Global_44465[271 /*12*/].f_2 = 16;
	Global_44465[271 /*12*/].f_3 = 0;
	Global_44465[271 /*12*/].f_10 = 1;
	Global_44465[271 /*12*/].f_11 = 0;
	Global_44465[271 /*12*/].f_4 = 0;
	Global_44465[272 /*12*/] = 711;
	Global_44465[272 /*12*/].f_1 = 712;
	Global_44465[272 /*12*/].f_2 = 16;
	Global_44465[272 /*12*/].f_3 = 0;
	Global_44465[272 /*12*/].f_10 = 1;
	Global_44465[272 /*12*/].f_11 = 0;
	Global_44465[272 /*12*/].f_4 = 0;
	Global_44465[273 /*12*/] = 713;
	Global_44465[273 /*12*/].f_1 = 714;
	Global_44465[273 /*12*/].f_2 = 16;
	Global_44465[273 /*12*/].f_3 = 0;
	Global_44465[273 /*12*/].f_10 = 1;
	Global_44465[273 /*12*/].f_11 = 0;
	Global_44465[273 /*12*/].f_4 = 0;
	Global_44465[274 /*12*/] = 715;
	Global_44465[274 /*12*/].f_1 = 716;
	Global_44465[274 /*12*/].f_2 = 16;
	Global_44465[274 /*12*/].f_3 = 0;
	Global_44465[274 /*12*/].f_10 = 1;
	Global_44465[274 /*12*/].f_11 = 0;
	Global_44465[274 /*12*/].f_4 = 0;
	Global_44465[275 /*12*/] = 717;
	Global_44465[275 /*12*/].f_1 = 718;
	Global_44465[275 /*12*/].f_2 = 16;
	Global_44465[275 /*12*/].f_3 = 0;
	Global_44465[275 /*12*/].f_10 = 1;
	Global_44465[275 /*12*/].f_11 = 0;
	Global_44465[275 /*12*/].f_4 = 0;
	Global_44465[276 /*12*/] = 719;
	Global_44465[276 /*12*/].f_1 = 720;
	Global_44465[276 /*12*/].f_2 = 16;
	Global_44465[276 /*12*/].f_3 = 0;
	Global_44465[276 /*12*/].f_10 = 1;
	Global_44465[276 /*12*/].f_11 = 0;
	Global_44465[276 /*12*/].f_4 = 0;
	Global_47790[0 /*46*/].f_45 = 0;
	Global_47790[0 /*46*/].f_31 = 0;
	Global_47790[0 /*46*/].f_42 = 0;
	Global_47790[0 /*46*/].f_43 = 0;
	Global_47790[0 /*46*/].f_2 = 2;
	Global_47790[0 /*46*/].f_3[0] = 0;
	Global_47790[0 /*46*/].f_3[1] = 4;
	Global_47790[0 /*46*/].f_30 = 8;
	Global_47790[0 /*46*/].f_8[0] = 0;
	Global_47790[0 /*46*/].f_8[1] = 1;
	Global_47790[0 /*46*/].f_8[2] = 2;
	Global_47790[0 /*46*/].f_8[3] = 3;
	Global_47790[0 /*46*/].f_8[4] = 4;
	Global_47790[0 /*46*/].f_8[5] = 5;
	Global_47790[0 /*46*/].f_8[6] = 6;
	Global_47790[0 /*46*/].f_8[7] = 9;
	Global_47790[1 /*46*/].f_45 = 0;
	Global_47790[1 /*46*/].f_31 = 0;
	Global_47790[1 /*46*/].f_42 = 0;
	Global_47790[1 /*46*/].f_43 = 0;
	Global_47790[1 /*46*/].f_2 = 3;
	Global_47790[1 /*46*/].f_3[0] = 5;
	Global_47790[1 /*46*/].f_3[1] = 0;
	Global_47790[1 /*46*/].f_3[2] = 4;
	Global_47790[1 /*46*/].f_30 = 3;
	Global_47790[1 /*46*/].f_8[0] = 10;
	Global_47790[1 /*46*/].f_8[1] = 11;
	Global_47790[1 /*46*/].f_8[2] = 16;
	Global_47790[2 /*46*/].f_45 = 0;
	Global_47790[2 /*46*/].f_31 = 0;
	Global_47790[2 /*46*/].f_42 = 0;
	Global_47790[2 /*46*/].f_43 = 0;
	Global_47790[2 /*46*/].f_2 = 2;
	Global_47790[2 /*46*/].f_3[0] = 7;
	Global_47790[2 /*46*/].f_3[1] = 1;
	Global_47790[2 /*46*/].f_30 = 1;
	Global_47790[2 /*46*/].f_8[0] = 12;
	Global_47790[3 /*46*/].f_45 = 0;
	Global_47790[3 /*46*/].f_31 = 0;
	Global_47790[3 /*46*/].f_42 = 0;
	Global_47790[3 /*46*/].f_43 = 0;
	Global_47790[3 /*46*/].f_2 = 2;
	Global_47790[3 /*46*/].f_3[0] = 7;
	Global_47790[3 /*46*/].f_3[1] = 1;
	Global_47790[3 /*46*/].f_30 = 1;
	Global_47790[3 /*46*/].f_8[0] = 14;
	Global_47790[4 /*46*/].f_45 = 0;
	Global_47790[4 /*46*/].f_31 = 0;
	Global_47790[4 /*46*/].f_42 = 0;
	Global_47790[4 /*46*/].f_43 = 0;
	Global_47790[4 /*46*/].f_2 = 2;
	Global_47790[4 /*46*/].f_3[0] = 7;
	Global_47790[4 /*46*/].f_3[1] = 1;
	Global_47790[4 /*46*/].f_30 = 1;
	Global_47790[4 /*46*/].f_8[0] = 13;
	Global_47790[5 /*46*/].f_45 = 0;
	Global_47790[5 /*46*/].f_31 = 0;
	Global_47790[5 /*46*/].f_42 = 0;
	Global_47790[5 /*46*/].f_43 = 0;
	Global_47790[5 /*46*/].f_2 = 2;
	Global_47790[5 /*46*/].f_3[0] = 7;
	Global_47790[5 /*46*/].f_3[1] = 1;
	Global_47790[5 /*46*/].f_30 = 1;
	Global_47790[5 /*46*/].f_8[0] = 15;
	Global_47790[6 /*46*/].f_45 = 0;
	Global_47790[6 /*46*/].f_31 = 0;
	Global_47790[6 /*46*/].f_42 = 0;
	Global_47790[6 /*46*/].f_43 = 0;
	Global_47790[6 /*46*/].f_2 = 2;
	Global_47790[6 /*46*/].f_3[0] = 0;
	Global_47790[6 /*46*/].f_3[1] = 8;
	Global_47790[6 /*46*/].f_30 = 5;
	Global_47790[6 /*46*/].f_8[0] = 17;
	Global_47790[6 /*46*/].f_8[1] = 19;
	Global_47790[6 /*46*/].f_8[2] = 20;
	Global_47790[6 /*46*/].f_8[3] = 21;
	Global_47790[6 /*46*/].f_8[4] = 22;
	Global_47790[7 /*46*/].f_45 = 0;
	Global_47790[7 /*46*/].f_31 = 0;
	Global_47790[7 /*46*/].f_42 = 0;
	Global_47790[7 /*46*/].f_43 = 0;
	Global_47790[7 /*46*/].f_2 = 2;
	Global_47790[7 /*46*/].f_3[0] = 1;
	Global_47790[7 /*46*/].f_3[1] = 9;
	Global_47790[7 /*46*/].f_30 = 5;
	Global_47790[7 /*46*/].f_8[0] = 18;
	Global_47790[7 /*46*/].f_8[1] = 24;
	Global_47790[7 /*46*/].f_8[2] = 25;
	Global_47790[7 /*46*/].f_8[3] = 26;
	Global_47790[7 /*46*/].f_8[4] = 27;
	Global_47790[8 /*46*/].f_45 = 0;
	Global_47790[8 /*46*/].f_31 = 0;
	Global_47790[8 /*46*/].f_42 = 0;
	Global_47790[8 /*46*/].f_43 = 0;
	Global_47790[8 /*46*/].f_2 = 2;
	Global_47790[8 /*46*/].f_3[0] = 2;
	Global_47790[8 /*46*/].f_3[1] = 10;
	Global_47790[8 /*46*/].f_30 = 4;
	Global_47790[8 /*46*/].f_8[0] = 23;
	Global_47790[8 /*46*/].f_8[1] = 28;
	Global_47790[8 /*46*/].f_8[2] = 29;
	Global_47790[8 /*46*/].f_8[3] = 30;
	Global_47790[9 /*46*/].f_45 = 0;
	Global_47790[9 /*46*/].f_31 = 0;
	Global_47790[9 /*46*/].f_42 = 0;
	Global_47790[9 /*46*/].f_43 = 0;
	Global_47790[9 /*46*/].f_2 = 1;
	Global_47790[9 /*46*/].f_3[0] = 11;
	Global_47790[9 /*46*/].f_30 = 3;
	Global_47790[9 /*46*/].f_8[0] = 31;
	Global_47790[9 /*46*/].f_8[1] = 32;
	Global_47790[9 /*46*/].f_8[2] = 33;
	Global_47790[10 /*46*/].f_45 = 0;
	Global_47790[10 /*46*/].f_31 = 0;
	Global_47790[10 /*46*/].f_42 = 0;
	Global_47790[10 /*46*/].f_43 = 0;
	Global_47790[10 /*46*/].f_2 = 1;
	Global_47790[10 /*46*/].f_3[0] = 13;
	Global_47790[10 /*46*/].f_30 = 3;
	Global_47790[10 /*46*/].f_8[0] = 34;
	Global_47790[10 /*46*/].f_8[1] = 35;
	Global_47790[10 /*46*/].f_8[2] = 36;
	Global_47790[11 /*46*/].f_45 = 0;
	Global_47790[11 /*46*/].f_31 = 0;
	Global_47790[11 /*46*/].f_42 = 0;
	Global_47790[11 /*46*/].f_43 = 0;
	Global_47790[11 /*46*/].f_2 = 1;
	Global_47790[11 /*46*/].f_3[0] = 14;
	Global_47790[11 /*46*/].f_30 = 3;
	Global_47790[11 /*46*/].f_8[0] = 37;
	Global_47790[11 /*46*/].f_8[1] = 38;
	Global_47790[11 /*46*/].f_8[2] = 39;
	Global_47790[12 /*46*/].f_45 = 0;
	Global_47790[12 /*46*/].f_31 = 0;
	Global_47790[12 /*46*/].f_42 = 0;
	Global_47790[12 /*46*/].f_43 = 0;
	Global_47790[12 /*46*/].f_2 = 1;
	Global_47790[12 /*46*/].f_3[0] = 12;
	Global_47790[12 /*46*/].f_30 = 6;
	Global_47790[12 /*46*/].f_8[0] = 40;
	Global_47790[12 /*46*/].f_8[1] = 41;
	Global_47790[12 /*46*/].f_8[2] = 42;
	Global_47790[12 /*46*/].f_8[3] = 191;
	Global_47790[12 /*46*/].f_8[4] = 192;
	Global_47790[12 /*46*/].f_8[5] = 193;
	Global_47790[13 /*46*/].f_45 = 0;
	Global_47790[13 /*46*/].f_31 = 0;
	Global_47790[13 /*46*/].f_42 = 0;
	Global_47790[13 /*46*/].f_43 = 0;
	Global_47790[13 /*46*/].f_2 = 2;
	Global_47790[13 /*46*/].f_3[0] = 7;
	Global_47790[13 /*46*/].f_3[1] = 0;
	Global_47790[13 /*46*/].f_30 = 1;
	Global_47790[13 /*46*/].f_8[0] = 43;
	Global_47790[14 /*46*/].f_45 = 0;
	Global_47790[14 /*46*/].f_31 = 0;
	Global_47790[14 /*46*/].f_42 = 0;
	Global_47790[14 /*46*/].f_43 = 0;
	Global_47790[14 /*46*/].f_2 = 4;
	Global_47790[14 /*46*/].f_3[0] = 15;
	Global_47790[14 /*46*/].f_3[1] = 0;
	Global_47790[14 /*46*/].f_3[2] = 1;
	Global_47790[14 /*46*/].f_3[3] = 2;
	Global_47790[14 /*46*/].f_30 = 3;
	Global_47790[14 /*46*/].f_8[0] = 44;
	Global_47790[14 /*46*/].f_8[1] = 45;
	Global_47790[14 /*46*/].f_8[2] = 46;
	Global_47790[15 /*46*/].f_45 = 0;
	Global_47790[15 /*46*/].f_31 = 0;
	Global_47790[15 /*46*/].f_42 = 0;
	Global_47790[15 /*46*/].f_43 = 0;
	Global_47790[15 /*46*/].f_2 = 4;
	Global_47790[15 /*46*/].f_3[0] = 16;
	Global_47790[15 /*46*/].f_3[1] = 0;
	Global_47790[15 /*46*/].f_3[2] = 1;
	Global_47790[15 /*46*/].f_3[3] = 2;
	Global_47790[15 /*46*/].f_30 = 1;
	Global_47790[15 /*46*/].f_8[0] = 47;
	Global_47790[16 /*46*/].f_45 = 0;
	Global_47790[16 /*46*/].f_31 = 0;
	Global_47790[16 /*46*/].f_42 = 0;
	Global_47790[16 /*46*/].f_43 = 0;
	Global_47790[16 /*46*/].f_2 = 4;
	Global_47790[16 /*46*/].f_3[0] = 16;
	Global_47790[16 /*46*/].f_3[1] = 0;
	Global_47790[16 /*46*/].f_3[2] = 1;
	Global_47790[16 /*46*/].f_3[3] = 2;
	Global_47790[16 /*46*/].f_30 = 1;
	Global_47790[16 /*46*/].f_8[0] = 48;
	Global_47790[17 /*46*/].f_45 = 0;
	Global_47790[17 /*46*/].f_31 = 0;
	Global_47790[17 /*46*/].f_42 = 0;
	Global_47790[17 /*46*/].f_43 = 0;
	Global_47790[17 /*46*/].f_2 = 4;
	Global_47790[17 /*46*/].f_3[0] = 0;
	Global_47790[17 /*46*/].f_3[1] = 1;
	Global_47790[17 /*46*/].f_3[2] = 2;
	Global_47790[17 /*46*/].f_3[3] = 16;
	Global_47790[17 /*46*/].f_30 = 1;
	Global_47790[17 /*46*/].f_8[0] = 49;
	Global_47790[18 /*46*/].f_45 = 0;
	Global_47790[18 /*46*/].f_31 = 0;
	Global_47790[18 /*46*/].f_42 = 0;
	Global_47790[18 /*46*/].f_43 = 0;
	Global_47790[18 /*46*/].f_2 = 4;
	Global_47790[18 /*46*/].f_3[0] = 0;
	Global_47790[18 /*46*/].f_3[1] = 1;
	Global_47790[18 /*46*/].f_3[2] = 2;
	Global_47790[18 /*46*/].f_3[3] = 16;
	Global_47790[18 /*46*/].f_30 = 1;
	Global_47790[18 /*46*/].f_8[0] = 50;
	Global_47790[19 /*46*/].f_45 = 0;
	Global_47790[19 /*46*/].f_31 = 0;
	Global_47790[19 /*46*/].f_42 = 0;
	Global_47790[19 /*46*/].f_43 = 0;
	Global_47790[19 /*46*/].f_2 = 4;
	Global_47790[19 /*46*/].f_3[0] = 0;
	Global_47790[19 /*46*/].f_3[1] = 1;
	Global_47790[19 /*46*/].f_3[2] = 2;
	Global_47790[19 /*46*/].f_3[3] = 16;
	Global_47790[19 /*46*/].f_30 = 1;
	Global_47790[19 /*46*/].f_8[0] = 51;
	Global_47790[20 /*46*/].f_45 = 0;
	Global_47790[20 /*46*/].f_31 = 0;
	Global_47790[20 /*46*/].f_42 = 0;
	Global_47790[20 /*46*/].f_43 = 0;
	Global_47790[20 /*46*/].f_2 = 4;
	Global_47790[20 /*46*/].f_3[0] = 0;
	Global_47790[20 /*46*/].f_3[1] = 1;
	Global_47790[20 /*46*/].f_3[2] = 2;
	Global_47790[20 /*46*/].f_3[3] = 16;
	Global_47790[20 /*46*/].f_30 = 1;
	Global_47790[20 /*46*/].f_8[0] = 52;
	Global_47790[21 /*46*/].f_45 = 0;
	Global_47790[21 /*46*/].f_31 = 0;
	Global_47790[21 /*46*/].f_42 = 0;
	Global_47790[21 /*46*/].f_43 = 0;
	Global_47790[21 /*46*/].f_2 = 4;
	Global_47790[21 /*46*/].f_3[0] = 16;
	Global_47790[21 /*46*/].f_3[1] = 0;
	Global_47790[21 /*46*/].f_3[2] = 1;
	Global_47790[21 /*46*/].f_3[3] = 2;
	Global_47790[21 /*46*/].f_30 = 1;
	Global_47790[21 /*46*/].f_8[0] = 53;
	Global_47790[22 /*46*/].f_45 = 0;
	Global_47790[22 /*46*/].f_31 = 0;
	Global_47790[22 /*46*/].f_42 = 0;
	Global_47790[22 /*46*/].f_43 = 0;
	Global_47790[22 /*46*/].f_2 = 4;
	Global_47790[22 /*46*/].f_3[0] = 0;
	Global_47790[22 /*46*/].f_3[1] = 1;
	Global_47790[22 /*46*/].f_3[2] = 2;
	Global_47790[22 /*46*/].f_3[3] = 16;
	Global_47790[22 /*46*/].f_30 = 1;
	Global_47790[22 /*46*/].f_8[0] = 54;
	Global_47790[23 /*46*/].f_45 = 0;
	Global_47790[23 /*46*/].f_31 = 0;
	Global_47790[23 /*46*/].f_42 = 0;
	Global_47790[23 /*46*/].f_43 = 0;
	Global_47790[23 /*46*/].f_2 = 1;
	Global_47790[23 /*46*/].f_3[0] = 12;
	Global_47790[23 /*46*/].f_30 = 3;
	Global_47790[23 /*46*/].f_8[0] = 55;
	Global_47790[23 /*46*/].f_8[1] = 58;
	Global_47790[23 /*46*/].f_8[2] = 59;
	Global_47790[24 /*46*/].f_45 = 0;
	Global_47790[24 /*46*/].f_31 = 0;
	Global_47790[24 /*46*/].f_42 = 0;
	Global_47790[24 /*46*/].f_43 = 0;
	Global_47790[24 /*46*/].f_2 = 1;
	Global_47790[24 /*46*/].f_3[0] = 14;
	Global_47790[24 /*46*/].f_30 = 3;
	Global_47790[24 /*46*/].f_8[0] = 56;
	Global_47790[24 /*46*/].f_8[1] = 60;
	Global_47790[24 /*46*/].f_8[2] = 61;
	Global_47790[25 /*46*/].f_45 = 0;
	Global_47790[25 /*46*/].f_31 = 0;
	Global_47790[25 /*46*/].f_42 = 0;
	Global_47790[25 /*46*/].f_43 = 0;
	Global_47790[25 /*46*/].f_2 = 1;
	Global_47790[25 /*46*/].f_3[0] = 12;
	Global_47790[25 /*46*/].f_30 = 3;
	Global_47790[25 /*46*/].f_8[0] = 57;
	Global_47790[25 /*46*/].f_8[1] = 62;
	Global_47790[25 /*46*/].f_8[2] = 63;
	Global_47790[26 /*46*/].f_45 = 0;
	Global_47790[26 /*46*/].f_31 = 0;
	Global_47790[26 /*46*/].f_42 = 0;
	Global_47790[26 /*46*/].f_43 = 0;
	Global_47790[26 /*46*/].f_2 = 4;
	Global_47790[26 /*46*/].f_3[0] = 1;
	Global_47790[26 /*46*/].f_3[1] = 0;
	Global_47790[26 /*46*/].f_3[2] = 2;
	Global_47790[26 /*46*/].f_3[3] = 20;
	Global_47790[26 /*46*/].f_30 = 1;
	Global_47790[26 /*46*/].f_8[0] = 64;
	Global_47790[27 /*46*/].f_45 = 0;
	Global_47790[27 /*46*/].f_31 = 0;
	Global_47790[27 /*46*/].f_42 = 0;
	Global_47790[27 /*46*/].f_43 = 0;
	Global_47790[27 /*46*/].f_2 = 4;
	Global_47790[27 /*46*/].f_3[0] = 17;
	Global_47790[27 /*46*/].f_3[1] = 0;
	Global_47790[27 /*46*/].f_3[2] = 1;
	Global_47790[27 /*46*/].f_3[3] = 2;
	Global_47790[27 /*46*/].f_30 = 1;
	Global_47790[27 /*46*/].f_8[0] = 66;
	Global_47790[28 /*46*/].f_45 = 0;
	Global_47790[28 /*46*/].f_31 = 0;
	Global_47790[28 /*46*/].f_42 = 0;
	Global_47790[28 /*46*/].f_43 = 0;
	Global_47790[28 /*46*/].f_2 = 4;
	Global_47790[28 /*46*/].f_3[0] = 18;
	Global_47790[28 /*46*/].f_3[1] = 0;
	Global_47790[28 /*46*/].f_3[2] = 1;
	Global_47790[28 /*46*/].f_3[3] = 2;
	Global_47790[28 /*46*/].f_30 = 1;
	Global_47790[28 /*46*/].f_8[0] = 65;
	Global_47790[29 /*46*/].f_45 = 0;
	Global_47790[29 /*46*/].f_31 = 0;
	Global_47790[29 /*46*/].f_42 = 0;
	Global_47790[29 /*46*/].f_43 = 0;
	Global_47790[29 /*46*/].f_2 = 2;
	Global_47790[29 /*46*/].f_3[0] = 2;
	Global_47790[29 /*46*/].f_3[1] = 63;
	Global_47790[29 /*46*/].f_30 = 1;
	Global_47790[29 /*46*/].f_8[0] = 67;
	Global_47790[30 /*46*/].f_45 = 0;
	Global_47790[30 /*46*/].f_31 = 0;
	Global_47790[30 /*46*/].f_42 = 0;
	Global_47790[30 /*46*/].f_43 = 0;
	Global_47790[30 /*46*/].f_2 = 3;
	Global_47790[30 /*46*/].f_3[0] = 0;
	Global_47790[30 /*46*/].f_3[1] = 1;
	Global_47790[30 /*46*/].f_3[2] = 2;
	Global_47790[30 /*46*/].f_30 = 1;
	Global_47790[30 /*46*/].f_8[0] = 68;
	Global_47790[31 /*46*/].f_45 = 0;
	Global_47790[31 /*46*/].f_31 = 0;
	Global_47790[31 /*46*/].f_42 = 0;
	Global_47790[31 /*46*/].f_43 = 0;
	Global_47790[31 /*46*/].f_2 = 2;
	Global_47790[31 /*46*/].f_3[0] = 0;
	Global_47790[31 /*46*/].f_3[1] = 64;
	Global_47790[31 /*46*/].f_30 = 1;
	Global_47790[31 /*46*/].f_8[0] = 69;
	Global_47790[32 /*46*/].f_45 = 0;
	Global_47790[32 /*46*/].f_31 = 0;
	Global_47790[32 /*46*/].f_42 = 0;
	Global_47790[32 /*46*/].f_43 = 0;
	Global_47790[32 /*46*/].f_2 = 2;
	Global_47790[32 /*46*/].f_3[0] = 1;
	Global_47790[32 /*46*/].f_3[1] = 64;
	Global_47790[32 /*46*/].f_30 = 1;
	Global_47790[32 /*46*/].f_8[0] = 70;
	Global_47790[33 /*46*/].f_45 = 0;
	Global_47790[33 /*46*/].f_31 = 0;
	Global_47790[33 /*46*/].f_42 = 0;
	Global_47790[33 /*46*/].f_43 = 0;
	Global_47790[33 /*46*/].f_2 = 2;
	Global_47790[33 /*46*/].f_3[0] = 2;
	Global_47790[33 /*46*/].f_3[1] = 64;
	Global_47790[33 /*46*/].f_30 = 1;
	Global_47790[33 /*46*/].f_8[0] = 71;
	Global_47790[34 /*46*/].f_45 = 0;
	Global_47790[34 /*46*/].f_31 = 0;
	Global_47790[34 /*46*/].f_42 = 0;
	Global_47790[34 /*46*/].f_43 = 0;
	Global_47790[34 /*46*/].f_2 = 1;
	Global_47790[34 /*46*/].f_3[0] = 21;
	Global_47790[34 /*46*/].f_30 = 1;
	Global_47790[34 /*46*/].f_8[0] = 72;
	Global_47790[35 /*46*/].f_45 = 0;
	Global_47790[35 /*46*/].f_31 = 0;
	Global_47790[35 /*46*/].f_42 = 0;
	Global_47790[35 /*46*/].f_43 = 0;
	Global_47790[35 /*46*/].f_2 = 1;
	Global_47790[35 /*46*/].f_3[0] = 21;
	Global_47790[35 /*46*/].f_30 = 1;
	Global_47790[35 /*46*/].f_8[0] = 73;
	Global_47790[36 /*46*/].f_45 = 0;
	Global_47790[36 /*46*/].f_31 = 0;
	Global_47790[36 /*46*/].f_42 = 0;
	Global_47790[36 /*46*/].f_43 = 0;
	Global_47790[36 /*46*/].f_2 = 1;
	Global_47790[36 /*46*/].f_3[0] = 21;
	Global_47790[36 /*46*/].f_30 = 1;
	Global_47790[36 /*46*/].f_8[0] = 74;
	Global_47790[37 /*46*/].f_45 = 0;
	Global_47790[37 /*46*/].f_31 = 0;
	Global_47790[37 /*46*/].f_42 = 0;
	Global_47790[37 /*46*/].f_43 = 0;
	Global_47790[37 /*46*/].f_2 = 2;
	Global_47790[37 /*46*/].f_3[0] = 6;
	Global_47790[37 /*46*/].f_3[1] = 2;
	Global_47790[37 /*46*/].f_30 = 9;
	Global_47790[37 /*46*/].f_8[0] = 75;
	Global_47790[37 /*46*/].f_8[1] = 76;
	Global_47790[37 /*46*/].f_8[2] = 77;
	Global_47790[37 /*46*/].f_8[3] = 78;
	Global_47790[37 /*46*/].f_8[4] = 79;
	Global_47790[37 /*46*/].f_8[5] = 80;
	Global_47790[37 /*46*/].f_8[6] = 81;
	Global_47790[37 /*46*/].f_8[7] = 82;
	Global_47790[37 /*46*/].f_8[8] = 83;
	Global_47790[38 /*46*/].f_45 = 0;
	Global_47790[38 /*46*/].f_31 = 0;
	Global_47790[38 /*46*/].f_42 = 0;
	Global_47790[38 /*46*/].f_43 = 0;
	Global_47790[38 /*46*/].f_2 = 2;
	Global_47790[38 /*46*/].f_3[0] = 0;
	Global_47790[38 /*46*/].f_3[1] = 4;
	Global_47790[38 /*46*/].f_30 = 1;
	Global_47790[38 /*46*/].f_8[0] = 84;
	Global_47790[39 /*46*/].f_45 = 0;
	Global_47790[39 /*46*/].f_31 = 0;
	Global_47790[39 /*46*/].f_42 = 0;
	Global_47790[39 /*46*/].f_43 = 0;
	Global_47790[39 /*46*/].f_2 = 4;
	Global_47790[39 /*46*/].f_3[0] = 22;
	Global_47790[39 /*46*/].f_3[1] = 0;
	Global_47790[39 /*46*/].f_3[2] = 1;
	Global_47790[39 /*46*/].f_3[3] = 2;
	Global_47790[39 /*46*/].f_30 = 1;
	Global_47790[39 /*46*/].f_8[0] = 85;
	Global_47790[40 /*46*/].f_45 = 0;
	Global_47790[40 /*46*/].f_31 = 0;
	Global_47790[40 /*46*/].f_42 = 0;
	Global_47790[40 /*46*/].f_43 = 0;
	Global_47790[40 /*46*/].f_2 = 2;
	Global_47790[40 /*46*/].f_3[0] = 0;
	Global_47790[40 /*46*/].f_3[1] = 24;
	Global_47790[40 /*46*/].f_30 = 3;
	Global_47790[40 /*46*/].f_8[0] = 86;
	Global_47790[40 /*46*/].f_8[1] = 87;
	Global_47790[40 /*46*/].f_8[2] = 88;
	Global_47790[41 /*46*/].f_45 = 0;
	Global_47790[41 /*46*/].f_31 = 0;
	Global_47790[41 /*46*/].f_42 = 0;
	Global_47790[41 /*46*/].f_43 = 0;
	Global_47790[41 /*46*/].f_2 = 2;
	Global_47790[41 /*46*/].f_3[0] = 0;
	Global_47790[41 /*46*/].f_3[1] = 24;
	Global_47790[41 /*46*/].f_30 = 3;
	Global_47790[41 /*46*/].f_8[0] = 89;
	Global_47790[41 /*46*/].f_8[1] = 90;
	Global_47790[41 /*46*/].f_8[2] = 91;
	Global_47790[42 /*46*/].f_45 = 0;
	Global_47790[42 /*46*/].f_31 = 0;
	Global_47790[42 /*46*/].f_42 = 0;
	Global_47790[42 /*46*/].f_43 = 0;
	Global_47790[42 /*46*/].f_2 = 2;
	Global_47790[42 /*46*/].f_3[0] = 0;
	Global_47790[42 /*46*/].f_3[1] = 25;
	Global_47790[42 /*46*/].f_30 = 5;
	Global_47790[42 /*46*/].f_8[0] = 92;
	Global_47790[42 /*46*/].f_8[1] = 93;
	Global_47790[42 /*46*/].f_8[2] = 94;
	Global_47790[42 /*46*/].f_8[3] = 95;
	Global_47790[42 /*46*/].f_8[4] = 96;
	Global_47790[43 /*46*/].f_45 = 0;
	Global_47790[43 /*46*/].f_31 = 0;
	Global_47790[43 /*46*/].f_42 = 0;
	Global_47790[43 /*46*/].f_43 = 0;
	Global_47790[43 /*46*/].f_2 = 2;
	Global_47790[43 /*46*/].f_3[0] = 26;
	Global_47790[43 /*46*/].f_3[1] = 0;
	Global_47790[43 /*46*/].f_30 = 2;
	Global_47790[43 /*46*/].f_8[0] = 97;
	Global_47790[43 /*46*/].f_8[1] = 98;
	Global_47790[44 /*46*/].f_45 = 0;
	Global_47790[44 /*46*/].f_31 = 0;
	Global_47790[44 /*46*/].f_42 = 0;
	Global_47790[44 /*46*/].f_43 = 0;
	Global_47790[44 /*46*/].f_2 = 2;
	Global_47790[44 /*46*/].f_3[0] = 27;
	Global_47790[44 /*46*/].f_3[1] = 0;
	Global_47790[44 /*46*/].f_30 = 2;
	Global_47790[44 /*46*/].f_8[0] = 99;
	Global_47790[44 /*46*/].f_8[1] = 100;
	Global_47790[45 /*46*/].f_45 = 0;
	Global_47790[45 /*46*/].f_31 = 0;
	Global_47790[45 /*46*/].f_42 = 0;
	Global_47790[45 /*46*/].f_43 = 0;
	Global_47790[45 /*46*/].f_2 = 3;
	Global_47790[45 /*46*/].f_3[0] = 0;
	Global_47790[45 /*46*/].f_3[1] = 2;
	Global_47790[45 /*46*/].f_3[2] = 28;
	Global_47790[45 /*46*/].f_30 = 1;
	Global_47790[45 /*46*/].f_8[0] = 101;
	Global_47790[46 /*46*/].f_45 = 0;
	Global_47790[46 /*46*/].f_31 = 0;
	Global_47790[46 /*46*/].f_42 = 0;
	Global_47790[46 /*46*/].f_43 = 0;
	Global_47790[46 /*46*/].f_2 = 2;
	Global_47790[46 /*46*/].f_3[0] = 0;
	Global_47790[46 /*46*/].f_3[1] = 26;
	Global_47790[46 /*46*/].f_30 = 2;
	Global_47790[46 /*46*/].f_8[0] = 102;
	Global_47790[46 /*46*/].f_8[1] = 103;
	Global_47790[47 /*46*/].f_45 = 0;
	Global_47790[47 /*46*/].f_31 = 0;
	Global_47790[47 /*46*/].f_42 = 0;
	Global_47790[47 /*46*/].f_43 = 0;
	Global_47790[47 /*46*/].f_2 = 2;
	Global_47790[47 /*46*/].f_3[0] = 0;
	Global_47790[47 /*46*/].f_3[1] = 29;
	Global_47790[47 /*46*/].f_30 = 2;
	Global_47790[47 /*46*/].f_8[0] = 104;
	Global_47790[47 /*46*/].f_8[1] = 105;
	Global_47790[48 /*46*/].f_45 = 0;
	Global_47790[48 /*46*/].f_31 = 0;
	Global_47790[48 /*46*/].f_42 = 0;
	Global_47790[48 /*46*/].f_43 = 0;
	Global_47790[48 /*46*/].f_2 = 2;
	Global_47790[48 /*46*/].f_3[0] = 1;
	Global_47790[48 /*46*/].f_3[1] = 30;
	Global_47790[48 /*46*/].f_30 = 5;
	Global_47790[48 /*46*/].f_8[0] = 106;
	Global_47790[48 /*46*/].f_8[1] = 107;
	Global_47790[48 /*46*/].f_8[2] = 108;
	Global_47790[48 /*46*/].f_8[3] = 109;
	Global_47790[48 /*46*/].f_8[4] = 110;
	Global_47790[49 /*46*/].f_45 = 0;
	Global_47790[49 /*46*/].f_31 = 0;
	Global_47790[49 /*46*/].f_42 = 0;
	Global_47790[49 /*46*/].f_43 = 0;
	Global_47790[49 /*46*/].f_2 = 2;
	Global_47790[49 /*46*/].f_3[0] = 1;
	Global_47790[49 /*46*/].f_3[1] = 31;
	Global_47790[49 /*46*/].f_30 = 2;
	Global_47790[49 /*46*/].f_8[0] = 111;
	Global_47790[49 /*46*/].f_8[1] = 112;
	Global_47790[50 /*46*/].f_45 = 0;
	Global_47790[50 /*46*/].f_31 = 0;
	Global_47790[50 /*46*/].f_42 = 0;
	Global_47790[50 /*46*/].f_43 = 0;
	Global_47790[50 /*46*/].f_2 = 2;
	Global_47790[50 /*46*/].f_3[0] = 1;
	Global_47790[50 /*46*/].f_3[1] = 32;
	Global_47790[50 /*46*/].f_30 = 3;
	Global_47790[50 /*46*/].f_8[0] = 113;
	Global_47790[50 /*46*/].f_8[1] = 114;
	Global_47790[50 /*46*/].f_8[2] = 115;
	Global_47790[51 /*46*/].f_45 = 0;
	Global_47790[51 /*46*/].f_31 = 0;
	Global_47790[51 /*46*/].f_42 = 0;
	Global_47790[51 /*46*/].f_43 = 0;
	Global_47790[51 /*46*/].f_2 = 2;
	Global_47790[51 /*46*/].f_3[0] = 1;
	Global_47790[51 /*46*/].f_3[1] = 32;
	Global_47790[51 /*46*/].f_30 = 2;
	Global_47790[51 /*46*/].f_8[0] = 116;
	Global_47790[51 /*46*/].f_8[1] = 117;
	Global_47790[52 /*46*/].f_45 = 0;
	Global_47790[52 /*46*/].f_31 = 0;
	Global_47790[52 /*46*/].f_42 = 0;
	Global_47790[52 /*46*/].f_43 = 0;
	Global_47790[52 /*46*/].f_2 = 2;
	Global_47790[52 /*46*/].f_3[0] = 1;
	Global_47790[52 /*46*/].f_3[1] = 32;
	Global_47790[52 /*46*/].f_30 = 2;
	Global_47790[52 /*46*/].f_8[0] = 118;
	Global_47790[52 /*46*/].f_8[1] = 119;
	Global_47790[53 /*46*/].f_45 = 0;
	Global_47790[53 /*46*/].f_31 = 0;
	Global_47790[53 /*46*/].f_42 = 0;
	Global_47790[53 /*46*/].f_43 = 0;
	Global_47790[53 /*46*/].f_2 = 2;
	Global_47790[53 /*46*/].f_3[0] = 1;
	Global_47790[53 /*46*/].f_3[1] = 32;
	Global_47790[53 /*46*/].f_30 = 4;
	Global_47790[53 /*46*/].f_8[0] = 120;
	Global_47790[53 /*46*/].f_8[1] = 121;
	Global_47790[53 /*46*/].f_8[2] = 122;
	Global_47790[53 /*46*/].f_8[3] = 123;
	Global_47790[54 /*46*/].f_45 = 0;
	Global_47790[54 /*46*/].f_31 = 0;
	Global_47790[54 /*46*/].f_42 = 0;
	Global_47790[54 /*46*/].f_43 = 0;
	Global_47790[54 /*46*/].f_2 = 2;
	Global_47790[54 /*46*/].f_3[0] = 1;
	Global_47790[54 /*46*/].f_3[1] = 27;
	Global_47790[54 /*46*/].f_30 = 2;
	Global_47790[54 /*46*/].f_8[0] = 124;
	Global_47790[54 /*46*/].f_8[1] = 125;
	Global_47790[55 /*46*/].f_45 = 0;
	Global_47790[55 /*46*/].f_31 = 0;
	Global_47790[55 /*46*/].f_42 = 0;
	Global_47790[55 /*46*/].f_43 = 0;
	Global_47790[55 /*46*/].f_2 = 2;
	Global_47790[55 /*46*/].f_3[0] = 1;
	Global_47790[55 /*46*/].f_3[1] = 2;
	Global_47790[55 /*46*/].f_30 = 5;
	Global_47790[55 /*46*/].f_8[0] = 126;
	Global_47790[55 /*46*/].f_8[1] = 127;
	Global_47790[55 /*46*/].f_8[2] = 128;
	Global_47790[55 /*46*/].f_8[3] = 129;
	Global_47790[55 /*46*/].f_8[4] = 130;
	Global_47790[56 /*46*/].f_45 = 0;
	Global_47790[56 /*46*/].f_31 = 0;
	Global_47790[56 /*46*/].f_42 = 0;
	Global_47790[56 /*46*/].f_43 = 0;
	Global_47790[56 /*46*/].f_2 = 2;
	Global_47790[56 /*46*/].f_3[0] = 1;
	Global_47790[56 /*46*/].f_3[1] = 0;
	Global_47790[56 /*46*/].f_30 = 3;
	Global_47790[56 /*46*/].f_8[0] = 131;
	Global_47790[56 /*46*/].f_8[1] = 132;
	Global_47790[56 /*46*/].f_8[2] = 133;
	Global_47790[57 /*46*/].f_45 = 0;
	Global_47790[57 /*46*/].f_31 = 0;
	Global_47790[57 /*46*/].f_42 = 0;
	Global_47790[57 /*46*/].f_43 = 0;
	Global_47790[57 /*46*/].f_2 = 2;
	Global_47790[57 /*46*/].f_3[0] = 0;
	Global_47790[57 /*46*/].f_3[1] = 1;
	Global_47790[57 /*46*/].f_30 = 2;
	Global_47790[57 /*46*/].f_8[0] = 134;
	Global_47790[57 /*46*/].f_8[1] = 135;
	Global_47790[58 /*46*/].f_45 = 0;
	Global_47790[58 /*46*/].f_31 = 0;
	Global_47790[58 /*46*/].f_42 = 0;
	Global_47790[58 /*46*/].f_43 = 0;
	Global_47790[58 /*46*/].f_2 = 2;
	Global_47790[58 /*46*/].f_3[0] = 2;
	Global_47790[58 /*46*/].f_3[1] = 33;
	Global_47790[58 /*46*/].f_30 = 2;
	Global_47790[58 /*46*/].f_8[0] = 136;
	Global_47790[58 /*46*/].f_8[1] = 137;
	Global_47790[59 /*46*/].f_45 = 0;
	Global_47790[59 /*46*/].f_31 = 0;
	Global_47790[59 /*46*/].f_42 = 0;
	Global_47790[59 /*46*/].f_43 = 0;
	Global_47790[59 /*46*/].f_2 = 2;
	Global_47790[59 /*46*/].f_3[0] = 2;
	Global_47790[59 /*46*/].f_3[1] = 33;
	Global_47790[59 /*46*/].f_30 = 3;
	Global_47790[59 /*46*/].f_8[0] = 138;
	Global_47790[59 /*46*/].f_8[1] = 139;
	Global_47790[59 /*46*/].f_8[2] = 248;
	Global_47790[60 /*46*/].f_45 = 0;
	Global_47790[60 /*46*/].f_31 = 0;
	Global_47790[60 /*46*/].f_42 = 0;
	Global_47790[60 /*46*/].f_43 = 0;
	Global_47790[60 /*46*/].f_2 = 2;
	Global_47790[60 /*46*/].f_3[0] = 2;
	Global_47790[60 /*46*/].f_3[1] = 33;
	Global_47790[60 /*46*/].f_30 = 1;
	Global_47790[60 /*46*/].f_8[0] = 140;
	Global_47790[61 /*46*/].f_45 = 0;
	Global_47790[61 /*46*/].f_31 = 0;
	Global_47790[61 /*46*/].f_42 = 0;
	Global_47790[61 /*46*/].f_43 = 0;
	Global_47790[61 /*46*/].f_2 = 2;
	Global_47790[61 /*46*/].f_3[0] = 2;
	Global_47790[61 /*46*/].f_3[1] = 29;
	Global_47790[61 /*46*/].f_30 = 2;
	Global_47790[61 /*46*/].f_8[0] = 141;
	Global_47790[61 /*46*/].f_8[1] = 142;
	Global_47790[62 /*46*/].f_45 = 0;
	Global_47790[62 /*46*/].f_31 = 0;
	Global_47790[62 /*46*/].f_42 = 0;
	Global_47790[62 /*46*/].f_43 = 0;
	Global_47790[62 /*46*/].f_2 = 2;
	Global_47790[62 /*46*/].f_3[0] = 3;
	Global_47790[62 /*46*/].f_3[1] = 2;
	Global_47790[62 /*46*/].f_30 = 2;
	Global_47790[62 /*46*/].f_8[0] = 143;
	Global_47790[62 /*46*/].f_8[1] = 144;
	Global_47790[63 /*46*/].f_45 = 0;
	Global_47790[63 /*46*/].f_31 = 0;
	Global_47790[63 /*46*/].f_42 = 0;
	Global_47790[63 /*46*/].f_43 = 0;
	Global_47790[63 /*46*/].f_2 = 2;
	Global_47790[63 /*46*/].f_3[0] = 2;
	Global_47790[63 /*46*/].f_3[1] = 34;
	Global_47790[63 /*46*/].f_30 = 2;
	Global_47790[63 /*46*/].f_8[0] = 145;
	Global_47790[63 /*46*/].f_8[1] = 146;
	Global_47790[64 /*46*/].f_45 = 0;
	Global_47790[64 /*46*/].f_31 = 0;
	Global_47790[64 /*46*/].f_42 = 0;
	Global_47790[64 /*46*/].f_43 = 0;
	Global_47790[64 /*46*/].f_2 = 2;
	Global_47790[64 /*46*/].f_3[0] = 2;
	Global_47790[64 /*46*/].f_3[1] = 26;
	Global_47790[64 /*46*/].f_30 = 1;
	Global_47790[64 /*46*/].f_8[0] = 147;
	Global_47790[65 /*46*/].f_45 = 0;
	Global_47790[65 /*46*/].f_31 = 0;
	Global_47790[65 /*46*/].f_42 = 0;
	Global_47790[65 /*46*/].f_43 = 0;
	Global_47790[65 /*46*/].f_2 = 1;
	Global_47790[65 /*46*/].f_3[0] = 35;
	Global_47790[65 /*46*/].f_30 = 3;
	Global_47790[65 /*46*/].f_8[0] = 148;
	Global_47790[65 /*46*/].f_8[1] = 149;
	Global_47790[65 /*46*/].f_8[2] = 150;
	Global_47790[66 /*46*/].f_45 = 0;
	Global_47790[66 /*46*/].f_31 = 0;
	Global_47790[66 /*46*/].f_42 = 0;
	Global_47790[66 /*46*/].f_43 = 0;
	Global_47790[66 /*46*/].f_2 = 1;
	Global_47790[66 /*46*/].f_3[0] = 36;
	Global_47790[66 /*46*/].f_30 = 3;
	Global_47790[66 /*46*/].f_8[0] = 151;
	Global_47790[66 /*46*/].f_8[1] = 152;
	Global_47790[66 /*46*/].f_8[2] = 153;
	Global_47790[67 /*46*/].f_45 = 0;
	Global_47790[67 /*46*/].f_31 = 0;
	Global_47790[67 /*46*/].f_42 = 0;
	Global_47790[67 /*46*/].f_43 = 0;
	Global_47790[67 /*46*/].f_2 = 2;
	Global_47790[67 /*46*/].f_3[0] = 4;
	Global_47790[67 /*46*/].f_3[1] = 0;
	Global_47790[67 /*46*/].f_30 = 1;
	Global_47790[67 /*46*/].f_8[0] = 7;
	Global_47790[68 /*46*/].f_45 = 0;
	Global_47790[68 /*46*/].f_31 = 0;
	Global_47790[68 /*46*/].f_42 = 0;
	Global_47790[68 /*46*/].f_43 = 0;
	Global_47790[68 /*46*/].f_2 = 2;
	Global_47790[68 /*46*/].f_3[0] = 4;
	Global_47790[68 /*46*/].f_3[1] = 0;
	Global_47790[68 /*46*/].f_30 = 1;
	Global_47790[68 /*46*/].f_8[0] = 8;
	Global_47790[69 /*46*/].f_45 = 0;
	Global_47790[69 /*46*/].f_31 = 0;
	Global_47790[69 /*46*/].f_42 = 0;
	Global_47790[69 /*46*/].f_43 = 0;
	Global_47790[69 /*46*/].f_2 = 2;
	Global_47790[69 /*46*/].f_3[0] = 2;
	Global_47790[69 /*46*/].f_3[1] = 38;
	Global_47790[69 /*46*/].f_30 = 1;
	Global_47790[69 /*46*/].f_8[0] = 154;
	Global_47790[70 /*46*/].f_45 = 0;
	Global_47790[70 /*46*/].f_31 = 0;
	Global_47790[70 /*46*/].f_42 = 0;
	Global_47790[70 /*46*/].f_43 = 0;
	Global_47790[70 /*46*/].f_2 = 1;
	Global_47790[70 /*46*/].f_3[0] = 11;
	Global_47790[70 /*46*/].f_30 = 3;
	Global_47790[70 /*46*/].f_8[0] = 155;
	Global_47790[70 /*46*/].f_8[1] = 156;
	Global_47790[70 /*46*/].f_8[2] = 157;
	Global_47790[71 /*46*/].f_45 = 0;
	Global_47790[71 /*46*/].f_31 = 0;
	Global_47790[71 /*46*/].f_42 = 0;
	Global_47790[71 /*46*/].f_43 = 0;
	Global_47790[71 /*46*/].f_2 = 2;
	Global_47790[71 /*46*/].f_3[0] = 2;
	Global_47790[71 /*46*/].f_3[1] = 29;
	Global_47790[71 /*46*/].f_30 = 1;
	Global_47790[71 /*46*/].f_8[0] = 158;
	Global_47790[72 /*46*/].f_45 = 0;
	Global_47790[72 /*46*/].f_31 = 0;
	Global_47790[72 /*46*/].f_42 = 0;
	Global_47790[72 /*46*/].f_43 = 0;
	Global_47790[72 /*46*/].f_2 = 1;
	Global_47790[72 /*46*/].f_3[0] = 0;
	Global_47790[72 /*46*/].f_30 = 1;
	Global_47790[72 /*46*/].f_8[0] = 159;
	Global_47790[73 /*46*/].f_45 = 0;
	Global_47790[73 /*46*/].f_31 = 0;
	Global_47790[73 /*46*/].f_42 = 0;
	Global_47790[73 /*46*/].f_43 = 0;
	Global_47790[73 /*46*/].f_2 = 1;
	Global_47790[73 /*46*/].f_3[0] = 1;
	Global_47790[73 /*46*/].f_30 = 1;
	Global_47790[73 /*46*/].f_8[0] = 160;
	Global_47790[74 /*46*/].f_45 = 0;
	Global_47790[74 /*46*/].f_31 = 0;
	Global_47790[74 /*46*/].f_42 = 0;
	Global_47790[74 /*46*/].f_43 = 0;
	Global_47790[74 /*46*/].f_2 = 1;
	Global_47790[74 /*46*/].f_3[0] = 1;
	Global_47790[74 /*46*/].f_30 = 1;
	Global_47790[74 /*46*/].f_8[0] = 161;
	Global_47790[75 /*46*/].f_45 = 0;
	Global_47790[75 /*46*/].f_31 = 0;
	Global_47790[75 /*46*/].f_42 = 0;
	Global_47790[75 /*46*/].f_43 = 0;
	Global_47790[75 /*46*/].f_2 = 1;
	Global_47790[75 /*46*/].f_3[0] = 0;
	Global_47790[75 /*46*/].f_30 = 1;
	Global_47790[75 /*46*/].f_8[0] = 162;
	Global_47790[76 /*46*/].f_45 = 0;
	Global_47790[76 /*46*/].f_31 = 0;
	Global_47790[76 /*46*/].f_42 = 0;
	Global_47790[76 /*46*/].f_43 = 0;
	Global_47790[76 /*46*/].f_2 = 1;
	Global_47790[76 /*46*/].f_3[0] = 2;
	Global_47790[76 /*46*/].f_30 = 1;
	Global_47790[76 /*46*/].f_8[0] = 163;
	Global_47790[77 /*46*/].f_45 = 0;
	Global_47790[77 /*46*/].f_31 = 0;
	Global_47790[77 /*46*/].f_42 = 0;
	Global_47790[77 /*46*/].f_43 = 0;
	Global_47790[77 /*46*/].f_2 = 1;
	Global_47790[77 /*46*/].f_3[0] = 1;
	Global_47790[77 /*46*/].f_30 = 1;
	Global_47790[77 /*46*/].f_8[0] = 164;
	Global_47790[78 /*46*/].f_45 = 0;
	Global_47790[78 /*46*/].f_31 = 0;
	Global_47790[78 /*46*/].f_42 = 0;
	Global_47790[78 /*46*/].f_43 = 0;
	Global_47790[78 /*46*/].f_2 = 1;
	Global_47790[78 /*46*/].f_3[0] = 1;
	Global_47790[78 /*46*/].f_30 = 1;
	Global_47790[78 /*46*/].f_8[0] = 165;
	Global_47790[79 /*46*/].f_45 = 0;
	Global_47790[79 /*46*/].f_31 = 0;
	Global_47790[79 /*46*/].f_42 = 0;
	Global_47790[79 /*46*/].f_43 = 0;
	Global_47790[79 /*46*/].f_2 = 1;
	Global_47790[79 /*46*/].f_3[0] = 0;
	Global_47790[79 /*46*/].f_30 = 1;
	Global_47790[79 /*46*/].f_8[0] = 166;
	Global_47790[80 /*46*/].f_45 = 0;
	Global_47790[80 /*46*/].f_31 = 0;
	Global_47790[80 /*46*/].f_42 = 0;
	Global_47790[80 /*46*/].f_43 = 0;
	Global_47790[80 /*46*/].f_2 = 1;
	Global_47790[80 /*46*/].f_3[0] = 0;
	Global_47790[80 /*46*/].f_30 = 1;
	Global_47790[80 /*46*/].f_8[0] = 167;
	Global_47790[81 /*46*/].f_45 = 0;
	Global_47790[81 /*46*/].f_31 = 0;
	Global_47790[81 /*46*/].f_42 = 0;
	Global_47790[81 /*46*/].f_43 = 0;
	Global_47790[81 /*46*/].f_2 = 1;
	Global_47790[81 /*46*/].f_3[0] = 0;
	Global_47790[81 /*46*/].f_30 = 1;
	Global_47790[81 /*46*/].f_8[0] = 168;
	Global_47790[82 /*46*/].f_45 = 0;
	Global_47790[82 /*46*/].f_31 = 0;
	Global_47790[82 /*46*/].f_42 = 0;
	Global_47790[82 /*46*/].f_43 = 0;
	Global_47790[82 /*46*/].f_2 = 1;
	Global_47790[82 /*46*/].f_3[0] = 2;
	Global_47790[82 /*46*/].f_30 = 1;
	Global_47790[82 /*46*/].f_8[0] = 169;
	Global_47790[83 /*46*/].f_45 = 0;
	Global_47790[83 /*46*/].f_31 = 0;
	Global_47790[83 /*46*/].f_42 = 0;
	Global_47790[83 /*46*/].f_43 = 0;
	Global_47790[83 /*46*/].f_2 = 1;
	Global_47790[83 /*46*/].f_3[0] = 1;
	Global_47790[83 /*46*/].f_30 = 1;
	Global_47790[83 /*46*/].f_8[0] = 170;
	Global_47790[84 /*46*/].f_45 = 0;
	Global_47790[84 /*46*/].f_31 = 0;
	Global_47790[84 /*46*/].f_42 = 0;
	Global_47790[84 /*46*/].f_43 = 0;
	Global_47790[84 /*46*/].f_2 = 1;
	Global_47790[84 /*46*/].f_3[0] = 1;
	Global_47790[84 /*46*/].f_30 = 1;
	Global_47790[84 /*46*/].f_8[0] = 171;
	Global_47790[85 /*46*/].f_45 = 0;
	Global_47790[85 /*46*/].f_31 = 0;
	Global_47790[85 /*46*/].f_42 = 0;
	Global_47790[85 /*46*/].f_43 = 0;
	Global_47790[85 /*46*/].f_2 = 1;
	Global_47790[85 /*46*/].f_3[0] = 0;
	Global_47790[85 /*46*/].f_30 = 1;
	Global_47790[85 /*46*/].f_8[0] = 172;
	Global_47790[86 /*46*/].f_45 = 0;
	Global_47790[86 /*46*/].f_31 = 0;
	Global_47790[86 /*46*/].f_42 = 0;
	Global_47790[86 /*46*/].f_43 = 0;
	Global_47790[86 /*46*/].f_2 = 1;
	Global_47790[86 /*46*/].f_3[0] = 2;
	Global_47790[86 /*46*/].f_30 = 1;
	Global_47790[86 /*46*/].f_8[0] = 173;
	Global_47790[87 /*46*/].f_45 = 0;
	Global_47790[87 /*46*/].f_31 = 0;
	Global_47790[87 /*46*/].f_42 = 0;
	Global_47790[87 /*46*/].f_43 = 0;
	Global_47790[87 /*46*/].f_2 = 1;
	Global_47790[87 /*46*/].f_3[0] = 1;
	Global_47790[87 /*46*/].f_30 = 1;
	Global_47790[87 /*46*/].f_8[0] = 174;
	Global_47790[88 /*46*/].f_45 = 0;
	Global_47790[88 /*46*/].f_31 = 0;
	Global_47790[88 /*46*/].f_42 = 0;
	Global_47790[88 /*46*/].f_43 = 0;
	Global_47790[88 /*46*/].f_2 = 1;
	Global_47790[88 /*46*/].f_3[0] = 0;
	Global_47790[88 /*46*/].f_30 = 1;
	Global_47790[88 /*46*/].f_8[0] = 175;
	Global_47790[89 /*46*/].f_45 = 0;
	Global_47790[89 /*46*/].f_31 = 0;
	Global_47790[89 /*46*/].f_42 = 0;
	Global_47790[89 /*46*/].f_43 = 0;
	Global_47790[89 /*46*/].f_2 = 1;
	Global_47790[89 /*46*/].f_3[0] = 2;
	Global_47790[89 /*46*/].f_30 = 1;
	Global_47790[89 /*46*/].f_8[0] = 176;
	Global_47790[90 /*46*/].f_45 = 0;
	Global_47790[90 /*46*/].f_31 = 0;
	Global_47790[90 /*46*/].f_42 = 0;
	Global_47790[90 /*46*/].f_43 = 0;
	Global_47790[90 /*46*/].f_2 = 1;
	Global_47790[90 /*46*/].f_3[0] = 1;
	Global_47790[90 /*46*/].f_30 = 1;
	Global_47790[90 /*46*/].f_8[0] = 177;
	Global_47790[91 /*46*/].f_45 = 0;
	Global_47790[91 /*46*/].f_31 = 0;
	Global_47790[91 /*46*/].f_42 = 0;
	Global_47790[91 /*46*/].f_43 = 0;
	Global_47790[91 /*46*/].f_2 = 1;
	Global_47790[91 /*46*/].f_3[0] = 0;
	Global_47790[91 /*46*/].f_30 = 1;
	Global_47790[91 /*46*/].f_8[0] = 179;
	Global_47790[92 /*46*/].f_45 = 0;
	Global_47790[92 /*46*/].f_31 = 0;
	Global_47790[92 /*46*/].f_42 = 0;
	Global_47790[92 /*46*/].f_43 = 0;
	Global_47790[92 /*46*/].f_2 = 1;
	Global_47790[92 /*46*/].f_3[0] = 2;
	Global_47790[92 /*46*/].f_30 = 1;
	Global_47790[92 /*46*/].f_8[0] = 178;
	Global_47790[93 /*46*/].f_45 = 0;
	Global_47790[93 /*46*/].f_31 = 0;
	Global_47790[93 /*46*/].f_42 = 0;
	Global_47790[93 /*46*/].f_43 = 0;
	Global_47790[93 /*46*/].f_2 = 1;
	Global_47790[93 /*46*/].f_3[0] = 1;
	Global_47790[93 /*46*/].f_30 = 1;
	Global_47790[93 /*46*/].f_8[0] = 180;
	Global_47790[94 /*46*/].f_45 = 0;
	Global_47790[94 /*46*/].f_31 = 0;
	Global_47790[94 /*46*/].f_42 = 0;
	Global_47790[94 /*46*/].f_43 = 0;
	Global_47790[94 /*46*/].f_2 = 2;
	Global_47790[94 /*46*/].f_3[0] = 4;
	Global_47790[94 /*46*/].f_3[1] = 0;
	Global_47790[94 /*46*/].f_30 = 1;
	Global_47790[94 /*46*/].f_8[0] = 181;
	Global_47790[95 /*46*/].f_45 = 0;
	Global_47790[95 /*46*/].f_31 = 0;
	Global_47790[95 /*46*/].f_42 = 0;
	Global_47790[95 /*46*/].f_43 = 0;
	Global_47790[95 /*46*/].f_2 = 1;
	Global_47790[95 /*46*/].f_3[0] = 37;
	Global_47790[95 /*46*/].f_30 = 1;
	Global_47790[95 /*46*/].f_8[0] = 182;
	Global_47790[96 /*46*/].f_45 = 0;
	Global_47790[96 /*46*/].f_31 = 0;
	Global_47790[96 /*46*/].f_42 = 0;
	Global_47790[96 /*46*/].f_43 = 0;
	Global_47790[96 /*46*/].f_2 = 1;
	Global_47790[96 /*46*/].f_3[0] = 37;
	Global_47790[96 /*46*/].f_30 = 1;
	Global_47790[96 /*46*/].f_8[0] = 183;
	Global_47790[97 /*46*/].f_45 = 0;
	Global_47790[97 /*46*/].f_31 = 0;
	Global_47790[97 /*46*/].f_42 = 0;
	Global_47790[97 /*46*/].f_43 = 0;
	Global_47790[97 /*46*/].f_2 = 1;
	Global_47790[97 /*46*/].f_3[0] = 37;
	Global_47790[97 /*46*/].f_30 = 1;
	Global_47790[97 /*46*/].f_8[0] = 184;
	Global_47790[98 /*46*/].f_45 = 0;
	Global_47790[98 /*46*/].f_31 = 0;
	Global_47790[98 /*46*/].f_42 = 0;
	Global_47790[98 /*46*/].f_43 = 0;
	Global_47790[98 /*46*/].f_2 = 1;
	Global_47790[98 /*46*/].f_3[0] = 54;
	Global_47790[98 /*46*/].f_30 = 3;
	Global_47790[98 /*46*/].f_8[0] = 185;
	Global_47790[98 /*46*/].f_8[1] = 186;
	Global_47790[98 /*46*/].f_8[2] = 188;
	Global_47790[99 /*46*/].f_45 = 0;
	Global_47790[99 /*46*/].f_31 = 0;
	Global_47790[99 /*46*/].f_42 = 0;
	Global_47790[99 /*46*/].f_43 = 0;
	Global_47790[99 /*46*/].f_2 = 1;
	Global_47790[99 /*46*/].f_3[0] = 55;
	Global_47790[99 /*46*/].f_30 = 3;
	Global_47790[99 /*46*/].f_8[0] = 187;
	Global_47790[99 /*46*/].f_8[1] = 189;
	Global_47790[99 /*46*/].f_8[2] = 190;
	Global_47790[100 /*46*/].f_45 = 0;
	Global_47790[100 /*46*/].f_31 = 0;
	Global_47790[100 /*46*/].f_42 = 0;
	Global_47790[100 /*46*/].f_43 = 0;
	Global_47790[100 /*46*/].f_2 = 3;
	Global_47790[100 /*46*/].f_3[0] = 56;
	Global_47790[100 /*46*/].f_3[1] = 0;
	Global_47790[100 /*46*/].f_3[2] = 2;
	Global_47790[100 /*46*/].f_30 = 5;
	Global_47790[100 /*46*/].f_8[0] = 194;
	Global_47790[100 /*46*/].f_8[1] = 195;
	Global_47790[100 /*46*/].f_8[2] = 196;
	Global_47790[100 /*46*/].f_8[3] = 197;
	Global_47790[100 /*46*/].f_8[4] = 198;
	Global_47790[101 /*46*/].f_45 = 0;
	Global_47790[101 /*46*/].f_31 = 0;
	Global_47790[101 /*46*/].f_42 = 0;
	Global_47790[101 /*46*/].f_43 = 0;
	Global_47790[101 /*46*/].f_2 = 2;
	Global_47790[101 /*46*/].f_3[0] = 57;
	Global_47790[101 /*46*/].f_3[1] = 0;
	Global_47790[101 /*46*/].f_30 = 8;
	Global_47790[101 /*46*/].f_8[0] = 199;
	Global_47790[101 /*46*/].f_8[1] = 200;
	Global_47790[101 /*46*/].f_8[2] = 201;
	Global_47790[101 /*46*/].f_8[3] = 202;
	Global_47790[101 /*46*/].f_8[4] = 203;
	Global_47790[101 /*46*/].f_8[5] = 204;
	Global_47790[101 /*46*/].f_8[6] = 205;
	Global_47790[101 /*46*/].f_8[7] = 206;
	Global_47790[102 /*46*/].f_45 = 0;
	Global_47790[102 /*46*/].f_31 = 0;
	Global_47790[102 /*46*/].f_42 = 0;
	Global_47790[102 /*46*/].f_43 = 0;
	Global_47790[102 /*46*/].f_2 = 2;
	Global_47790[102 /*46*/].f_3[0] = 58;
	Global_47790[102 /*46*/].f_3[1] = 0;
	Global_47790[102 /*46*/].f_30 = 7;
	Global_47790[102 /*46*/].f_8[0] = 207;
	Global_47790[102 /*46*/].f_8[1] = 208;
	Global_47790[102 /*46*/].f_8[2] = 209;
	Global_47790[102 /*46*/].f_8[3] = 210;
	Global_47790[102 /*46*/].f_8[4] = 211;
	Global_47790[102 /*46*/].f_8[5] = 212;
	Global_47790[102 /*46*/].f_8[6] = 213;
	Global_47790[103 /*46*/].f_45 = 0;
	Global_47790[103 /*46*/].f_31 = 0;
	Global_47790[103 /*46*/].f_42 = 0;
	Global_47790[103 /*46*/].f_43 = 0;
	Global_47790[103 /*46*/].f_2 = 2;
	Global_47790[103 /*46*/].f_3[0] = 59;
	Global_47790[103 /*46*/].f_3[1] = 0;
	Global_47790[103 /*46*/].f_30 = 8;
	Global_47790[103 /*46*/].f_8[0] = 214;
	Global_47790[103 /*46*/].f_8[1] = 215;
	Global_47790[103 /*46*/].f_8[2] = 216;
	Global_47790[103 /*46*/].f_8[3] = 217;
	Global_47790[103 /*46*/].f_8[4] = 218;
	Global_47790[103 /*46*/].f_8[5] = 219;
	Global_47790[103 /*46*/].f_8[6] = 220;
	Global_47790[103 /*46*/].f_8[7] = 221;
	Global_47790[104 /*46*/].f_45 = 0;
	Global_47790[104 /*46*/].f_31 = 0;
	Global_47790[104 /*46*/].f_42 = 0;
	Global_47790[104 /*46*/].f_43 = 0;
	Global_47790[104 /*46*/].f_2 = 2;
	Global_47790[104 /*46*/].f_3[0] = 60;
	Global_47790[104 /*46*/].f_3[1] = 2;
	Global_47790[104 /*46*/].f_30 = 7;
	Global_47790[104 /*46*/].f_8[0] = 222;
	Global_47790[104 /*46*/].f_8[1] = 223;
	Global_47790[104 /*46*/].f_8[2] = 224;
	Global_47790[104 /*46*/].f_8[3] = 225;
	Global_47790[104 /*46*/].f_8[4] = 226;
	Global_47790[104 /*46*/].f_8[5] = 227;
	Global_47790[104 /*46*/].f_8[6] = 228;
	Global_47790[105 /*46*/].f_45 = 0;
	Global_47790[105 /*46*/].f_31 = 0;
	Global_47790[105 /*46*/].f_42 = 0;
	Global_47790[105 /*46*/].f_43 = 0;
	Global_47790[105 /*46*/].f_2 = 2;
	Global_47790[105 /*46*/].f_3[0] = 61;
	Global_47790[105 /*46*/].f_3[1] = 2;
	Global_47790[105 /*46*/].f_30 = 6;
	Global_47790[105 /*46*/].f_8[0] = 229;
	Global_47790[105 /*46*/].f_8[1] = 230;
	Global_47790[105 /*46*/].f_8[2] = 231;
	Global_47790[105 /*46*/].f_8[3] = 232;
	Global_47790[105 /*46*/].f_8[4] = 233;
	Global_47790[105 /*46*/].f_8[5] = 234;
	Global_47790[106 /*46*/].f_45 = 0;
	Global_47790[106 /*46*/].f_31 = 0;
	Global_47790[106 /*46*/].f_42 = 0;
	Global_47790[106 /*46*/].f_43 = 0;
	Global_47790[106 /*46*/].f_2 = 2;
	Global_47790[106 /*46*/].f_3[0] = 62;
	Global_47790[106 /*46*/].f_3[1] = 2;
	Global_47790[106 /*46*/].f_30 = 6;
	Global_47790[106 /*46*/].f_8[0] = 235;
	Global_47790[106 /*46*/].f_8[1] = 236;
	Global_47790[106 /*46*/].f_8[2] = 237;
	Global_47790[106 /*46*/].f_8[3] = 238;
	Global_47790[106 /*46*/].f_8[4] = 239;
	Global_47790[106 /*46*/].f_8[5] = 240;
	Global_47790[107 /*46*/].f_45 = 0;
	Global_47790[107 /*46*/].f_31 = 0;
	Global_47790[107 /*46*/].f_42 = 0;
	Global_47790[107 /*46*/].f_43 = 0;
	Global_47790[107 /*46*/].f_2 = 1;
	Global_47790[107 /*46*/].f_3[0] = 36;
	Global_47790[107 /*46*/].f_30 = 1;
	Global_47790[107 /*46*/].f_8[0] = 241;
	Global_47790[108 /*46*/].f_45 = 0;
	Global_47790[108 /*46*/].f_31 = 0;
	Global_47790[108 /*46*/].f_42 = 0;
	Global_47790[108 /*46*/].f_43 = 0;
	Global_47790[108 /*46*/].f_2 = 1;
	Global_47790[108 /*46*/].f_3[0] = 36;
	Global_47790[108 /*46*/].f_30 = 1;
	Global_47790[108 /*46*/].f_8[0] = 242;
	Global_47790[109 /*46*/].f_45 = 0;
	Global_47790[109 /*46*/].f_31 = 0;
	Global_47790[109 /*46*/].f_42 = 0;
	Global_47790[109 /*46*/].f_43 = 0;
	Global_47790[109 /*46*/].f_2 = 1;
	Global_47790[109 /*46*/].f_3[0] = 36;
	Global_47790[109 /*46*/].f_30 = 1;
	Global_47790[109 /*46*/].f_8[0] = 243;
	Global_47790[110 /*46*/].f_45 = 0;
	Global_47790[110 /*46*/].f_31 = 0;
	Global_47790[110 /*46*/].f_42 = 0;
	Global_47790[110 /*46*/].f_43 = 0;
	Global_47790[110 /*46*/].f_2 = 1;
	Global_47790[110 /*46*/].f_3[0] = 65;
	Global_47790[110 /*46*/].f_30 = 1;
	Global_47790[110 /*46*/].f_8[0] = 244;
	Global_47790[111 /*46*/].f_45 = 0;
	Global_47790[111 /*46*/].f_31 = 0;
	Global_47790[111 /*46*/].f_42 = 0;
	Global_47790[111 /*46*/].f_43 = 0;
	Global_47790[111 /*46*/].f_2 = 1;
	Global_47790[111 /*46*/].f_3[0] = 65;
	Global_47790[111 /*46*/].f_30 = 1;
	Global_47790[111 /*46*/].f_8[0] = 245;
	Global_47790[112 /*46*/].f_45 = 0;
	Global_47790[112 /*46*/].f_31 = 0;
	Global_47790[112 /*46*/].f_42 = 0;
	Global_47790[112 /*46*/].f_43 = 0;
	Global_47790[112 /*46*/].f_2 = 1;
	Global_47790[112 /*46*/].f_3[0] = 65;
	Global_47790[112 /*46*/].f_30 = 1;
	Global_47790[112 /*46*/].f_8[0] = 246;
	Global_47790[113 /*46*/].f_45 = 0;
	Global_47790[113 /*46*/].f_31 = 0;
	Global_47790[113 /*46*/].f_42 = 0;
	Global_47790[113 /*46*/].f_43 = 0;
	Global_47790[113 /*46*/].f_2 = 1;
	Global_47790[113 /*46*/].f_3[0] = 65;
	Global_47790[113 /*46*/].f_30 = 1;
	Global_47790[113 /*46*/].f_8[0] = 247;
	Global_47790[114 /*46*/].f_45 = 0;
	Global_47790[114 /*46*/].f_31 = 0;
	Global_47790[114 /*46*/].f_42 = 0;
	Global_47790[114 /*46*/].f_43 = 0;
	Global_47790[114 /*46*/].f_2 = 2;
	Global_47790[114 /*46*/].f_3[0] = 19;
	Global_47790[114 /*46*/].f_3[1] = 1;
	Global_47790[114 /*46*/].f_30 = 21;
	Global_47790[114 /*46*/].f_8[0] = 249;
	Global_47790[114 /*46*/].f_8[1] = 250;
	Global_47790[114 /*46*/].f_8[2] = 251;
	Global_47790[114 /*46*/].f_8[3] = 252;
	Global_47790[114 /*46*/].f_8[4] = 253;
	Global_47790[114 /*46*/].f_8[5] = 254;
	Global_47790[114 /*46*/].f_8[6] = 255;
	Global_47790[114 /*46*/].f_8[7] = 256;
	Global_47790[114 /*46*/].f_8[8] = 257;
	Global_47790[114 /*46*/].f_8[9] = 258;
	Global_47790[114 /*46*/].f_8[10] = 259;
	Global_47790[114 /*46*/].f_8[11] = 260;
	Global_47790[114 /*46*/].f_8[12] = 261;
	Global_47790[114 /*46*/].f_8[13] = 262;
	Global_47790[114 /*46*/].f_8[14] = 263;
	Global_47790[114 /*46*/].f_8[15] = 264;
	Global_47790[114 /*46*/].f_8[16] = 265;
	Global_47790[114 /*46*/].f_8[17] = 266;
	Global_47790[114 /*46*/].f_8[18] = 267;
	Global_47790[114 /*46*/].f_8[19] = 268;
	Global_47790[114 /*46*/].f_8[20] = 269;
	Global_47790[115 /*46*/].f_45 = 0;
	Global_47790[115 /*46*/].f_31 = 0;
	Global_47790[115 /*46*/].f_42 = 0;
	Global_47790[115 /*46*/].f_43 = 0;
	Global_47790[115 /*46*/].f_2 = 4;
	Global_47790[115 /*46*/].f_3[0] = 0;
	Global_47790[115 /*46*/].f_3[1] = 1;
	Global_47790[115 /*46*/].f_3[2] = 2;
	Global_47790[115 /*46*/].f_3[3] = 16;
	Global_47790[115 /*46*/].f_30 = 1;
	Global_47790[115 /*46*/].f_8[0] = 270;
	Global_47790[116 /*46*/].f_45 = 0;
	Global_47790[116 /*46*/].f_31 = 0;
	Global_47790[116 /*46*/].f_42 = 0;
	Global_47790[116 /*46*/].f_43 = 0;
	Global_47790[116 /*46*/].f_2 = 4;
	Global_47790[116 /*46*/].f_3[0] = 0;
	Global_47790[116 /*46*/].f_3[1] = 1;
	Global_47790[116 /*46*/].f_3[2] = 2;
	Global_47790[116 /*46*/].f_3[3] = 16;
	Global_47790[116 /*46*/].f_30 = 1;
	Global_47790[116 /*46*/].f_8[0] = 271;
	Global_47790[117 /*46*/].f_45 = 0;
	Global_47790[117 /*46*/].f_31 = 0;
	Global_47790[117 /*46*/].f_42 = 0;
	Global_47790[117 /*46*/].f_43 = 0;
	Global_47790[117 /*46*/].f_2 = 4;
	Global_47790[117 /*46*/].f_3[0] = 0;
	Global_47790[117 /*46*/].f_3[1] = 1;
	Global_47790[117 /*46*/].f_3[2] = 2;
	Global_47790[117 /*46*/].f_3[3] = 16;
	Global_47790[117 /*46*/].f_30 = 1;
	Global_47790[117 /*46*/].f_8[0] = 272;
	Global_47790[118 /*46*/].f_45 = 0;
	Global_47790[118 /*46*/].f_31 = 0;
	Global_47790[118 /*46*/].f_42 = 0;
	Global_47790[118 /*46*/].f_43 = 0;
	Global_47790[118 /*46*/].f_2 = 4;
	Global_47790[118 /*46*/].f_3[0] = 0;
	Global_47790[118 /*46*/].f_3[1] = 1;
	Global_47790[118 /*46*/].f_3[2] = 2;
	Global_47790[118 /*46*/].f_3[3] = 16;
	Global_47790[118 /*46*/].f_30 = 1;
	Global_47790[118 /*46*/].f_8[0] = 273;
	Global_47790[119 /*46*/].f_45 = 0;
	Global_47790[119 /*46*/].f_31 = 0;
	Global_47790[119 /*46*/].f_42 = 0;
	Global_47790[119 /*46*/].f_43 = 0;
	Global_47790[119 /*46*/].f_2 = 4;
	Global_47790[119 /*46*/].f_3[0] = 0;
	Global_47790[119 /*46*/].f_3[1] = 1;
	Global_47790[119 /*46*/].f_3[2] = 2;
	Global_47790[119 /*46*/].f_3[3] = 16;
	Global_47790[119 /*46*/].f_30 = 1;
	Global_47790[119 /*46*/].f_8[0] = 274;
	Global_47790[120 /*46*/].f_45 = 0;
	Global_47790[120 /*46*/].f_31 = 0;
	Global_47790[120 /*46*/].f_42 = 0;
	Global_47790[120 /*46*/].f_43 = 0;
	Global_47790[120 /*46*/].f_2 = 4;
	Global_47790[120 /*46*/].f_3[0] = 0;
	Global_47790[120 /*46*/].f_3[1] = 1;
	Global_47790[120 /*46*/].f_3[2] = 2;
	Global_47790[120 /*46*/].f_3[3] = 16;
	Global_47790[120 /*46*/].f_30 = 1;
	Global_47790[120 /*46*/].f_8[0] = 275;
	Global_47790[121 /*46*/].f_45 = 0;
	Global_47790[121 /*46*/].f_31 = 0;
	Global_47790[121 /*46*/].f_42 = 0;
	Global_47790[121 /*46*/].f_43 = 0;
	Global_47790[121 /*46*/].f_2 = 4;
	Global_47790[121 /*46*/].f_3[0] = 0;
	Global_47790[121 /*46*/].f_3[1] = 1;
	Global_47790[121 /*46*/].f_3[2] = 2;
	Global_47790[121 /*46*/].f_3[3] = 16;
	Global_47790[121 /*46*/].f_30 = 1;
	Global_47790[121 /*46*/].f_8[0] = 276;
}

void func_70()
{
	unk_0xBBC29EBE6E1A48FA();
}
