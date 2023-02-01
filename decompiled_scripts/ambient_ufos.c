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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	struct<3> Local_64 = { 0, 0, 0 } ;
	float fLocal_65 = 0f;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	struct<3> Local_72[2];
	bool bLocal_73 = 0;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = 0;
	bool bLocal_92 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_44 = 1;
	iLocal_45 = 65;
	iLocal_46 = 49;
	iLocal_47 = 64;
	Local_64 = { -1124.392f, -514.7001f, 33.21493f };
	fLocal_65 = 200f;
	Local_66 = { 2490f, 3777f, 2402.879f };
	Local_67 = { -2052f, 3237f, 1450.078f };
	iLocal_68 = -1;
	iLocal_70 = -1;
	bLocal_73 = true;
	fLocal_74 = 10f;
	fLocal_75 = 90f;
	fLocal_76 = 35f;
	fLocal_77 = 60f;
	fLocal_78 = 275f;
	iLocal_79 = 1500;
	iLocal_80 = -1;
	iLocal_82 = 3000;
	iLocal_83 = 708;
	iLocal_84 = 377;
	iLocal_85 = 1000;
	iLocal_86 = 2093;
	iLocal_89 = -1;
	iLocal_90 = -1;
	bLocal_91 = true;
	bLocal_92 = true;
	if (unk_0x96CFB880BAC634CE(3))
	{
		func_12();
	}
	while (unk_0x15CCE8886267624F())
	{
		wait(0);
	}
	if (!unk_0x5AEB336317DC4151("ufo"))
	{
		unk_0xECFC57F5F11BCD83("ufo");
	}
	Local_72[0 /*3*/] = { Local_66 };
	Local_72[1 /*3*/] = { Local_67 };
	while (true)
	{
		func_11(unk_0x4A8C381C258A124D());
		if (Global_32168 == 1)
		{
			func_12();
		}
		if (bLocal_73)
		{
			if (!func_10(unk_0x4A8C381C258A124D(), Local_72[0 /*3*/], (290f + 50f), 1))
			{
				if (!func_10(unk_0x4A8C381C258A124D(), Local_72[1 /*3*/], (290f + 50f), 1))
				{
					func_12();
				}
			}
			if (iLocal_71 != 0)
			{
				if (!func_10(unk_0x4A8C381C258A124D(), Local_72[0 /*3*/], (fLocal_78 + 50f), 1))
				{
					if (!func_10(unk_0x4A8C381C258A124D(), Local_72[1 /*3*/], (fLocal_78 + 50f), 1))
					{
						unk_0xCD04ECE71F3A9215("AZ_SPECIAL_UFO_01", 0, 1);
						unk_0xCD04ECE71F3A9215("AZ_SPECIAL_UFO_02", 0, 1);
						iLocal_71 = 0;
						iLocal_70 = -1;
					}
				}
			}
		}
		func_8();
		switch (iLocal_71)
		{
			case 0:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < Local_72.f_0)
				{
					if (func_10(unk_0x4A8C381C258A124D(), Local_72[iVar0 /*3*/], fLocal_78, 1))
					{
						iLocal_70 = iVar0;
						iLocal_71 = 1;
						unk_0xCD04ECE71F3A9215("AZ_SPECIAL_UFO_01", 1, 1);
						unk_0xCD04ECE71F3A9215("AZ_SPECIAL_UFO_02", 1, 1);
					}
					iVar0++;
				}
				break;
			
			case 1:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < Local_72.f_0)
				{
					if (func_10(unk_0x4A8C381C258A124D(), Local_72[iVar0 /*3*/], fLocal_75, 1))
					{
						iLocal_70 = iVar0;
						iLocal_71 = 2;
					}
					iVar0++;
				}
				break;
			
			case 2:
				if (iLocal_70 == -1)
				{
					iLocal_71 = 1;
				}
				else
				{
					iLocal_68 = unk_0x1DD05E817C89C737();
					iLocal_69 = 0;
					iLocal_71 = 3;
				}
				break;
			
			case 3:
				if (func_10(unk_0x4A8C381C258A124D(), Local_72[iLocal_70 /*3*/], fLocal_75, 1))
				{
					iLocal_69 = (unk_0x1DD05E817C89C737() - iLocal_68);
					if (iLocal_69 >= iLocal_79)
					{
						iLocal_71 = 4;
						iLocal_80 = unk_0xCA369FBC0DE29517();
						iLocal_81 = unk_0x1DD05E817C89C737();
						if (iLocal_70 == 0)
						{
							unk_0xF37CDE164C892195(iLocal_80, "SPECIAL_EVIL_UFO_DEATH_RAY", Local_72[iLocal_70 /*3*/], 0, 0, 0, 0);
						}
						else
						{
							unk_0xF37CDE164C892195(iLocal_80, "SPECIAL_EVIL_UFO_DEATH_RAY_3", Local_72[iLocal_70 /*3*/], 0, 0, 0, 0);
						}
						func_7();
						func_6();
					}
				}
				else
				{
					iLocal_71 = 1;
				}
				break;
			
			case 4:
				func_5();
				func_7();
				func_6();
				if (unk_0x1DD05E817C89C737() > (iLocal_81 + iLocal_82))
				{
					func_4(&iLocal_80);
				}
				if (!func_10(unk_0x4A8C381C258A124D(), Local_72[iLocal_70 /*3*/], fLocal_78, 1))
				{
					func_1();
					iLocal_70 = -1;
					iLocal_71 = 0;
					func_4(&iLocal_90);
					func_4(&iLocal_89);
					unk_0xCD04ECE71F3A9215("AZ_SPECIAL_UFO_01", 0, 1);
					unk_0xCD04ECE71F3A9215("AZ_SPECIAL_UFO_02", 0, 1);
				}
				break;
		}
		wait(0);
	}
}

void func_1()
{
	var uVar0;
	
	if (func_11(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (func_2(uVar0))
			{
				unk_0xC229299217554C78(uVar0, 1, 0, 0);
			}
		}
	}
}

int func_2(var uParam0)
{
	if (func_3(uParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
		{
			if (!unk_0x5B702A5D1F2635BE(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_4(int iParam0)
{
	if (*iParam0 != -1)
	{
		unk_0x8E4825CCACA34B58(*iParam0);
		unk_0x394AFAC073E1F277(*iParam0);
		*iParam0 = -1;
	}
}

void func_5()
{
	var uVar0;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (func_2(uVar0))
		{
			unk_0xC229299217554C78(uVar0, 0, 0, 0);
			unk_0xE592D924D5438108(uVar0, 2, 0f, 0f, -fLocal_74, 0f, 1f, 0f, 0, 0, 1, 1, 0, 1);
		}
	}
}

void func_6()
{
	if (bLocal_92)
	{
		if (unk_0x1DD05E817C89C737() > iLocal_87)
		{
			if (iLocal_89 != -1)
			{
				func_4(&iLocal_89);
				iLocal_87 = (unk_0x1DD05E817C89C737() + iLocal_86);
			}
			else
			{
				iLocal_89 = unk_0xCA369FBC0DE29517();
				unk_0x85E83A170EF61477(iLocal_89, "ent_amb_elec_crackle", 0, 0, 0, 1);
				iLocal_87 = (unk_0x1DD05E817C89C737() + iLocal_84);
			}
		}
	}
}

void func_7()
{
	if (bLocal_91)
	{
		if (unk_0x1DD05E817C89C737() > iLocal_88)
		{
			if (iLocal_90 != -1)
			{
				func_4(&iLocal_90);
				iLocal_88 = (unk_0x1DD05E817C89C737() + iLocal_85);
			}
			else
			{
				iLocal_90 = unk_0xCA369FBC0DE29517();
				unk_0x85E83A170EF61477(iLocal_90, "spl_stun_npc_master", 0, 0, 0, 1);
				iLocal_88 = (unk_0x1DD05E817C89C737() + iLocal_83);
			}
		}
	}
}

void func_8()
{
	struct<3> Var0;
	
	if (iLocal_70 == -1)
	{
		return;
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		return;
	}
	if (!func_10(unk_0x4A8C381C258A124D(), Local_72[iLocal_70 /*3*/], fLocal_76, 1))
	{
		return;
	}
	Var0 = { func_9(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) - Local_72[iLocal_70 /*3*/]) * Vector(fLocal_77, fLocal_77, fLocal_77) };
	unk_0xE592D924D5438108(unk_0x4A8C381C258A124D(), 2, Var0, 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
}

Vector3 func_9(struct<3> Param0)
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

bool func_10(var uParam0, struct<3> Param1, float fParam2, int iParam3)
{
	return vdist2(unk_0xD1A6A821F5AC81DB(uParam0, iParam3), Param1) <= (fParam2 * fParam2);
}

bool func_11(var uParam0)
{
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	return !unk_0x1C2F771CDC87A3A5(uParam0, 0);
}

void func_12()
{
	if (unk_0x5AEB336317DC4151("ufo"))
	{
		unk_0x5373E9377066509E("ufo");
	}
	func_4(&iLocal_90);
	func_4(&iLocal_89);
	func_4(&iLocal_80);
	unk_0xCD04ECE71F3A9215("AZ_SPECIAL_UFO_01", 0, 1);
	unk_0xCD04ECE71F3A9215("AZ_SPECIAL_UFO_02", 0, 1);
	func_1();
	unk_0xBBC29EBE6E1A48FA();
}
