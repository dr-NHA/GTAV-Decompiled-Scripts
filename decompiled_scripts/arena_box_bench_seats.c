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
	float fLocal_62 = 0f;
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
	var uLocal_87 = -1;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	struct<282> Local_95 = { 20, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_96 = -1;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = -1;
	var uLocal_102 = -1;
	var uLocal_103 = -1;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	struct<15> Local_114 = { 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	struct<2> Local_125[32];
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (func_160())
	{
		while (!func_150())
		{
			wait(0);
			func_59(&Local_95, &Local_114);
			func_46();
			if (unk_0x76CD105BCAC6EB9F() && unk_0x93E08E0F531E2C35())
			{
				func_36(&Local_95, &Local_114);
				func_35();
			}
		}
	}
	func_1();
}

void func_1()
{
	func_3(&Local_95, &Local_114);
	Global_2764619 = 0;
	func_2();
}

void func_2()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_3(var uParam0, var uParam1)
{
	var uVar0;
	
	if (func_34(&(uParam0->f_281), 15))
	{
		func_33();
		unk_0x8744D2E3FC95740E(&Global_2764622, 8);
		func_32(&(uParam0->f_281), 15);
	}
	func_30(&(uParam0->f_281.f_6));
	func_25(uParam0, 1);
	if (uParam0->f_281.f_5 > 2)
	{
		if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
		{
			if (((unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D())) && unk_0x93BF17E19A9F0E9B(uParam1->f_14[uParam0->f_281.f_2])) && unk_0xEADBDBE0422CF7E6(uParam1->f_14[uParam0->f_281.f_2]))
			{
				if (unk_0x21478251925DBFD7(unk_0xAB3646235DE50E93(uParam1->f_14[uParam0->f_281.f_2]), unk_0x4A8C381C258A124D()))
				{
					unk_0x837D67618BF89034(unk_0xAB3646235DE50E93(uParam1->f_14[uParam0->f_281.f_2]), 0, 1);
					func_24(&(uParam1->f_14[uParam0->f_281.f_2]));
				}
			}
		}
		if ((!BitTest(Global_1969892, 7) && !BitTest(Global_1969892, 3)) && !func_22(unk_0x259BE71D8A81D4FA()))
		{
			func_21(-1);
			func_20(-1);
		}
		Global_2764620 = 0;
		unk_0x8744D2E3FC95740E(&Global_2764622, 6);
		uVar0 = unk_0x643DC062EE904FCA(uParam0->f_281.f_1);
		if (unk_0x5266F1D2AEF6F73A(uVar0))
		{
			unk_0xF2E51EC84D76A2B6(uParam0->f_281.f_1);
		}
		if ((uParam0->f_281.f_9 == 1 && !unk_0x787F8EE1F6FBDC6D()) && func_18())
		{
			func_5(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
		}
		func_4();
	}
}

void func_4()
{
	if (Global_2672505.f_947.f_10)
	{
		Global_2672505.f_947.f_10 = 0;
	}
}

void func_5(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_17())
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
		if (!func_18())
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
				else if (bVar14 || (!func_14(unk_0x259BE71D8A81D4FA(), 0) && !func_13()))
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
					func_10(0, 0, 0);
					if (bVar25)
					{
						unk_0xE3F88173F42C071B();
					}
				}
				if (!func_9(uVar27) && !unk_0xB431D60610E7F85F(uVar27))
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
					func_8();
					func_7();
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
				if (!func_9(uVar27) && !unk_0xB431D60610E7F85F(uVar27))
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
					if (func_6(Global_4718592.f_166301))
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

bool func_6(int iParam0)
{
	return iParam0 == 17;
}

void func_7()
{
	struct<3> Var0;
	
	Global_2672505.f_1024 = 0;
	Global_2672505.f_1025 = 0;
	Global_2672505.f_1026 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672505.f_1031 = -1;
	Global_2672505.f_1032 = 0;
	Global_2635559.f_2692 = { Var0 };
}

void func_8()
{
	Global_2635559.f_702 = 0;
	Global_2635559.f_2735 = 0;
	Global_2635559.f_515 = 0;
	Global_2635559.f_606 = 0;
	Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_217 = 0;
	Global_2635559.f_2690 = 0;
}

int func_9(var uParam0)
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

void func_10(int iParam0, int iParam1, int iParam2)
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
				func_12();
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
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), true);
			}
		}
		if (func_14(unk_0x259BE71D8A81D4FA(), 0))
		{
			unk_0x522EF6D7B4059F2C(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xF11FEC6A04FD7226(iParam0, iParam1);
		}
		unk_0x4BDB60141FD6E156(iParam0, iParam1);
		func_11(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_11(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, 1);
	}
}

void func_12()
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
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), false);
		}
	}
}

bool func_13()
{
	return BitTest(Global_2621446, 3);
}

bool func_14(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_15(-1, 0) == 8;
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

int func_15(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_16();
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

int func_16()
{
	return Global_1574918;
}

int func_17()
{
	if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861, 2) && !Global_2684801.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_18()
{
	if (func_19() == 0)
	{
		return 1;
	}
	return 0;
}

int func_19()
{
	return Global_1574632.f_18;
}

void func_20(int iParam0)
{
	Global_2694553 = iParam0;
}

void func_21(int iParam0)
{
	Global_2694555 = iParam0;
	Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_855 = iParam0;
}

int func_22(bool bParam0)
{
	if (bParam0 != func_23())
	{
		return BitTest(Global_1853910[bParam0 /*862*/].f_267.f_365, 29);
	}
	return 0;
}

int func_23()
{
	return -1;
}

void func_24(var uParam0)
{
	var uVar0;
	
	if (unk_0x2FC2FDC413532977(*uParam0))
	{
		if (!unk_0xEADBDBE0422CF7E6(*uParam0))
		{
		}
	}
	if (unk_0x93BF17E19A9F0E9B(*uParam0))
	{
		uVar0 = unk_0xF5014688C9788D5F(*uParam0);
		unk_0x81A7F3CD719DD53B(&uVar0);
	}
}

void func_25(var uParam0, int iParam1)
{
	if (func_26())
	{
		unk_0x428C32CC68809A35(1);
	}
	if (iParam1 && uParam0->f_281.f_6 != -1)
	{
		func_30(&(uParam0->f_281.f_6));
		uParam0->f_281.f_6 = -1;
	}
}

int func_26()
{
	if ((BitTest(Global_4718592.f_32, 23) && !BitTest(Global_1969893, 13)) && !BitTest(Global_1969893, 19))
	{
		return 0;
	}
	if ((BitTest(Global_4718592.f_30, 25) && !BitTest(Global_1969893, 15)) && !BitTest(Global_1969893, 19))
	{
		return 0;
	}
	if ((((((((((((func_29("MPOFSEAT_PCEXIT") || func_29("MPOFSEAT_EXIT")) || func_29("ARENA_SEAT")) || func_29("ARENA_SEAT_PC")) || func_28("ARENA_SEAT1", Global_262145.f_26645, Global_262145.f_26646)) || func_28("ARENA_SEAT_PC1", Global_262145.f_26645, Global_262145.f_26646)) || func_27("ARENA_SEAT2", Global_262145.f_26645)) || func_27("ARENA_SEAT_PC2", Global_262145.f_26645)) || func_27("ARENA_SEAT3", Global_262145.f_26646)) || func_27("ARENA_SEAT_PC3", Global_262145.f_26646)) || func_29("ARENA_SEAT4")) || func_29("ARENA_SEAT_PC4")) || func_29("ARENA_SEAT_EX"))
	{
		return 1;
	}
	return 0;
}

bool func_27(char* sParam0, var uParam1)
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	return unk_0x7EBCD400E7DE179C(0);
}

var func_28(char* sParam0, var uParam1, var uParam2)
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	unk_0x511D14ED2DA887E1(uParam2);
	return unk_0x7EBCD400E7DE179C(0);
}

bool func_29(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_30(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_31(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44000[iVar0 /*32*/])
		{
			Global_44000[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_31(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44000[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_32(var uParam0, bool bParam1)
{
	unk_0x8744D2E3FC95740E(uParam0, iParam1);
}

void func_33()
{
	unk_0x4E6A84BCEF2DCCBF();
}

bool func_34(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_35()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	bVar0 = false;
	while (bVar0 < 32)
	{
		iVar1 = 0;
		bVar2 = unk_0xB23E0F9B63D009A8(bVar0);
		if (bVar2 != func_23() && unk_0xCCD470854FB0E643(bVar2))
		{
			if (BitTest(Local_125[bVar2 /*2*/], 0))
			{
				if (!BitTest(Local_114.f_13, bVar2))
				{
					if (Local_125[bVar2 /*2*/].f_1 != 0)
					{
						if (BitTest(Local_125[bVar2 /*2*/].f_1, 0))
						{
							iVar3 = 0;
							while (iVar3 < 10)
							{
								if (Local_114.f_2[iVar3] < 0)
								{
									Local_114.f_2[iVar3] = bVar2;
									unk_0x0B0C9A0F9AAEB7F0(&(Local_114.f_13), bVar2);
								}
								else
								{
									iVar3++;
								}
							}
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < 10)
							{
								if (BitTest(Local_125[bVar2 /*2*/].f_1, iVar4 + 1))
								{
									Local_114.f_2[iVar4] = bVar2;
									unk_0x0B0C9A0F9AAEB7F0(&(Local_114.f_13), bVar2);
								}
								else
								{
									iVar4++;
								}
							}
						}
					}
				}
			}
			else
			{
				iVar1 = 1;
			}
		}
		else
		{
			iVar1 = 1;
		}
		if (iVar1 && bVar2 != unk_0x259BE71D8A81D4FA())
		{
			if (BitTest(Local_114.f_13, bVar0))
			{
				iVar5 = 0;
				while (iVar5 < 10)
				{
					if (Local_114.f_2[iVar5] == bVar0)
					{
						if (unk_0x2FC2FDC413532977(Local_114.f_14[iVar5]))
						{
							if (unk_0xEADBDBE0422CF7E6(Local_114.f_14[iVar5]))
							{
								Local_114.f_2[iVar5] = -1;
								func_24(&(Local_114.f_14[iVar5]));
								unk_0x8744D2E3FC95740E(&(Local_114.f_13), bVar0);
							}
							else
							{
								unk_0x460D2A8B2C7DC7D4(Local_114.f_14[iVar5]);
							}
							else
							{
								Jump @393; //curOff = 369
								Local_114.f_2[iVar5] = -1;
								unk_0x8744D2E3FC95740E(&(Local_114.f_13), bVar0);
								iVar5++;
							}
							bVar0++;
						}

void func_36(var uParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	unk_0x80813AC549A1E8AE(func_43());
	if (!unk_0xE100DD4F82A51BDE(func_43()))
	{
		return;
	}
	if (*uParam1)
	{
		if (!unk_0x93BF17E19A9F0E9B(uParam1->f_14[uParam0->f_281.f_4]))
		{
			iVar0 = joaat("xs_prop_arena_tablet_drone_01");
			unk_0xEC9DAA34BBB4658C(iVar0);
			if (!unk_0x6252BC0DD8A320DB(iVar0))
			{
				return;
			}
			if (func_37(unk_0xD1797191721E17CE(false, 1) + 1, 0, 1))
			{
				if (!BitTest(uParam1->f_1, uParam0->f_281.f_4))
				{
					unk_0x99C26F3C23B37F42(unk_0xD1797191721E17CE(false, 1) + 1);
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_1), uParam0->f_281.f_4);
				}
				else if (unk_0x78D35ABAF71764AD(1))
				{
					Var2 = { unk_0xBE8776D2466E9EA6(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_4 /*14*/])->f_8, (uParam0[uParam0->f_281.f_4 /*14*/])->f_8.f_3, 0, 2) };
					Var3 = { unk_0x7A6103DCF5EE8CC3(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_4 /*14*/])->f_8, (uParam0[uParam0->f_281.f_4 /*14*/])->f_8.f_3, 0, 2) };
					uVar1 = unk_0x4E55EAB577C13329(iVar0, Var2, 1, 1, 0);
					unk_0x55098D9E9AD58806(iVar0);
					unk_0x999C62072AF920FD(uVar1, 0);
					unk_0x62C438C53BB57AFD(uVar1, Var2, 0, 0, 1);
					unk_0xCF39804E8C88080E(uVar1, Var3, 2, 1);
					unk_0x5D7CD709B34C90F0(uVar1, true);
					uParam1->f_14[uParam0->f_281.f_4] = unk_0x16FE0AE33E462D17(uVar1);
				}
			}
		}
		uParam0->f_281.f_4++;
		if (uParam0->f_281.f_4 >= 10)
		{
			uParam0->f_281.f_4 = 0;
		}
	}
}

bool func_37(int iParam0, bool bParam1, bool bParam2)
{
	return func_38(2, iParam0, 1, bParam1, bParam2);
}

int func_38(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1666891, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_42(iParam0) - func_41(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_41(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_42(iParam0) - func_40(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_41(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_42(iParam0) - func_41(iParam0, 1));
		}
		if (!bParam4 && Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/] != 3)
		{
			iVar1 = (iVar1 - func_39(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_39(int iParam0)
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

int func_40(int iParam0)
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

int func_41(int iParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0x259BE71D8A81D4FA();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xE8DB952A4BA8F328())
			{
				return Global_2657589[bVar0 /*466*/].f_219;
			}
			else
			{
				return unk_0xA0522491D076C1E6(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xE8DB952A4BA8F328())
			{
				return Global_2657589[bVar0 /*466*/].f_220;
			}
			else
			{
				return unk_0xF46F370442FAD8F9(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xE8DB952A4BA8F328())
			{
				return Global_2657589[bVar0 /*466*/].f_221;
			}
			else
			{
				return unk_0xD1797191721E17CE(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_42(int iParam0)
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

char* func_43()
{
	if (func_44())
	{
		return "anim@arena@amb@seat_drone_tablet@female@";
	}
	return "anim@arena@amb@seat_drone_tablet@male@";
}

bool func_44()
{
	return func_45(unk_0x259BE71D8A81D4FA());
}

int func_45(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_46()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_114.f_0)
	{
		iVar0 = 1;
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_114.f_2[iVar1] == -1 || Local_114.f_2[iVar1] == unk_0x259BE71D8A81D4FA())
			{
				iVar0 = 0;
				if (Local_114.f_2[iVar1] == -1)
				{
					if ((iVar1 <= 7 && func_56()) && func_52())
					{
						unk_0xE226F16D30AF5945(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), 1);
					}
					else
					{
						unk_0xC94AE68759E1B3BD(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), 0);
					}
				}
				else
				{
					unk_0xE226F16D30AF5945(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), 1);
				}
			}
			else
			{
				unk_0xE226F16D30AF5945(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), 1);
			}
			iVar1++;
		}
		Global_2764619 = iVar0;
	}
	else
	{
		Global_2764619 = 0;
	}
	if (Local_95.f_281.f_5 == 4)
	{
		if (!BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*2*/], 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*2*/]), false);
			if (func_50())
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*2*/].f_1), false);
			}
			else if (Local_95.f_281.f_9 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*2*/].f_1), Local_95.f_281.f_2 + 1);
			}
		}
		else if (BitTest(Local_114.f_13, unk_0x259BE71D8A81D4FA()))
		{
			if (func_49() < 0)
			{
				iVar2 = 0;
				while (iVar2 < 10)
				{
					if (Local_114.f_2[iVar2] == unk_0x259BE71D8A81D4FA())
					{
						func_21(iVar2);
					}
					iVar2++;
				}
			}
		}
	}
	else if ((!BitTest(Global_1969892, 7) && !BitTest(Global_1969892, 3)) && !func_22(unk_0x259BE71D8A81D4FA()))
	{
		if (func_50())
		{
			if (func_48() && unk_0x9390801B06EE998F())
			{
				func_47(0);
			}
		}
		if (BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*2*/], 0))
		{
			if (!func_48() && func_49() < 0)
			{
				if (func_50())
				{
					func_47(0);
				}
				unk_0x8744D2E3FC95740E(&(Local_125[unk_0x259BE71D8A81D4FA() /*2*/]), false);
				Local_125[unk_0x259BE71D8A81D4FA() /*2*/].f_1 = 0;
			}
		}
	}
}

void func_47(int iParam0)
{
	Global_2764618 = iParam0;
}

int func_48()
{
	if (Global_2694553 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_49()
{
	return Global_2694555;
}

bool func_50()
{
	return Global_2764618;
}

Vector3 func_51(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2800.331f, -3922.829f, 181.4558f;
		
		case 1:
			return 2799.301f, -3922.829f, 181.4558f;
		
		case 2:
			return 2798.268f, -3922.829f, 181.4558f;
		
		case 3:
			return 2797.243f, -3922.829f, 181.4558f;
		
		case 4:
			return 2796.213f, -3922.829f, 181.4558f;
		
		case 5:
			return 2795.178f, -3922.829f, 181.4558f;
		
		case 6:
			return 2794.153f, -3922.829f, 181.4558f;
		
		case 7:
			return 2793.123f, -3922.829f, 181.4558f;
		
		case 8:
			return 2792.087f, -3922.829f, 181.4558f;
		
		case 9:
			return 2791.061f, -3922.829f, 181.4558f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_52()
{
	int iVar0;
	int iVar1;
	
	if (func_55() && !func_54())
	{
		return 1;
	}
	if (BitTest(Global_4718592.f_30, 25) || BitTest(Global_4718592.f_32, 23))
	{
		if (func_53())
		{
			return 1;
		}
	}
	iVar0 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
	if (iVar0 > 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_1058070.f_14[iVar0];
	if (iVar1 < 17)
	{
		if ((((BitTest(Global_4718592.f_1265[iVar0 /*23466*/].f_8085[iVar1], 23) && BitTest(Global_4718592.f_1265[iVar0 /*23466*/].f_8085[iVar1], 24)) && BitTest(Global_4718592.f_1265[iVar0 /*23466*/].f_8085[iVar1], 25)) && BitTest(Global_4718592.f_1265[iVar0 /*23466*/].f_8085[iVar1], 26)) && BitTest(Global_4718592.f_32, 16))
		{
			return 1;
		}
	}
	return 0;
}

bool func_53()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_18, 14);
}

bool func_54()
{
	return Global_1574966;
}

var func_55()
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1969892, 0));
}

int func_56()
{
	if (func_58() && !func_57())
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_32, 16))
	{
		return 1;
	}
	return 0;
}

int func_57()
{
	if (Global_4718592.f_114294 == 1 || Global_4718592.f_114294 == 2)
	{
		return 1;
	}
	return 0;
}

var func_58()
{
	return BitTest(Global_4718592.f_160050, 12);
}

void func_59(var uParam0, int iParam1)
{
	char* sVar0;
	char* sVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var5;
	bool bVar6;
	int iVar7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	var uVar13;
	var uVar14;
	struct<3> Var15;
	struct<3> Var16;
	var uVar17;
	int iVar18;
	struct<3> Var19;
	struct<3> Var20;
	
	func_147(uParam0);
	func_145(uParam0);
	func_133(uParam0);
	switch (uParam0->f_281.f_5)
	{
		case 0:
			func_32(&(uParam0->f_281), 11);
			func_132(uParam0, 1);
			break;
		
		case 1:
			if (func_131(uParam0))
			{
				uParam0->f_281.f_7 = unk_0x1DD05E817C89C737();
				func_132(uParam0, 2);
			}
			else if (func_50())
			{
				uParam0->f_281.f_7 = unk_0x1DD05E817C89C737();
				func_132(uParam0, 2);
			}
			break;
		
		case 2:
			if ((func_130(unk_0x4A8C381C258A124D(), uParam0[uParam0->f_281.f_2 /*14*/]) && func_129(unk_0x4A8C381C258A124D(), (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3)) && !func_50())
			{
				if ((((((func_128(uParam0) || Global_1935176) || func_126(uParam0)) || !func_125(uParam0)) || ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != unk_0x259BE71D8A81D4FA())) || ((uParam0->f_281.f_2 <= 7 && func_56()) && func_52())) || (uParam0->f_281.f_2 < 10 && Global_262145.f_26642))
				{
					if (!Global_1935176 && ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != unk_0x259BE71D8A81D4FA()))
					{
						uVar3 = unk_0x56E414973C2A8C0E(iParam1->f_2[uParam0->f_281.f_2]);
						if (unk_0xFC8BFE4B41177C22(uVar3) && !unk_0x5105BE70DEF1F5FB(iVar3, 2797.988f, -3954.898f, 181.0005f, 2797.949f, -3930.85f, 187.4114f, 30f, 0, 1, 0))
						{
							if (uParam0->f_281.f_6 == -1)
							{
								func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_FULL", 0, unk_0xBD6CA019F46AB947(iParam1->f_2[uParam0->f_281.f_2]), 0, 1);
							}
						}
						else
						{
							func_25(uParam0, 1);
							func_132(uParam0, 1);
						}
					}
					else if ((uParam0->f_281.f_2 <= 7 && func_56()) && func_52())
					{
						if (uParam0->f_281.f_6 == -1)
						{
							func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_NO", 0, 0, 0, 0);
						}
					}
					else
					{
						func_25(uParam0, 1);
						func_132(uParam0, 1);
					}
				}
				else if (uParam0->f_281.f_6 == -1)
				{
					if ((unk_0x1DD05E817C89C737() - uParam0->f_281.f_7) > 150)
					{
						if (uParam0->f_281.f_2 <= 9)
						{
							func_124(&(uParam0->f_281.f_6), 4, "AR_SEAT_PRMPT", 0, 0, 0, 0);
						}
						else
						{
							func_124(&(uParam0->f_281.f_6), 4, "MPJAC_SIT", 0, 0, 0, 0);
						}
					}
				}
				else if (unk_0x875A214D5EBCA509(0, 51))
				{
					func_30(&(uParam0->f_281.f_6));
					func_121(uParam0);
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(unk_0x259BE71D8A81D4FA(), 0, 256, 0);
						func_132(uParam0, 4);
					}
					else
					{
						func_132(uParam0, 3);
					}
				}
			}
			else if (func_50())
			{
				func_30(&(uParam0->f_281.f_6));
				func_132(uParam0, 4);
			}
			else
			{
				func_25(uParam0, 1);
				func_132(uParam0, 1);
			}
			break;
		
		case 4:
			if (func_49() >= 0)
			{
				if (func_50())
				{
					uParam0->f_281.f_2 = func_49();
					if (unk_0xE5E2AE8B19267B8A(unk_0x4A8C381C258A124D()))
					{
						unk_0x091AB029AFE429F2(unk_0x4A8C381C258A124D(), 0, 1);
					}
					func_120(&(uParam0->f_281), 14);
				}
				func_121(uParam0);
				func_132(uParam0, 3);
			}
			if (!func_50())
			{
				if ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != unk_0x259BE71D8A81D4FA())
				{
					func_25(uParam0, 1);
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
					}
					func_4();
					func_132(uParam0, 1);
				}
			}
			break;
		
		case 3:
			func_119(uParam0, &sVar0);
			if (uParam0->f_281.f_9 == 1)
			{
				if (!unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]))
				{
					return;
				}
				if (!unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
				{
					unk_0x460D2A8B2C7DC7D4(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			unk_0x80813AC549A1E8AE(&sVar0);
			if (unk_0xE100DD4F82A51BDE(&sVar0))
			{
				func_118();
				func_132(uParam0, 5);
			}
			break;
		
		case 5:
			func_119(uParam0, &sVar0);
			func_117(uParam0, &sVar1, 0);
			Var4 = { unk_0xBE8776D2466E9EA6(&sVar0, &sVar1, func_116(uParam0), func_115(uParam0), 0, 2) };
			Var5 = { unk_0x7A6103DCF5EE8CC3(&sVar0, &sVar1, func_116(uParam0), func_115(uParam0), 0, 2) };
			if (func_34(&(uParam0->f_281), 14))
			{
				bVar6 = true;
				if (func_114() >= 0)
				{
					bVar6 = false;
				}
				if (func_102(Var4, Var5.f_2, 0, 0, 0, 0, 1, bVar6, 1, 0, 0) && Global_2764621)
				{
					func_132(uParam0, 6);
				}
				else if (!Global_2764621)
				{
				}
			}
			else if (Global_2764621)
			{
				if (uParam0->f_281.f_9 == 1)
				{
					if (unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && !unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
					{
						unk_0x460D2A8B2C7DC7D4(iParam1->f_14[uParam0->f_281.f_2]);
					}
				}
				unk_0x63C8DCBEC1CF8225(unk_0x4A8C381C258A124D(), Var4, 1f, 500, Var5.f_2, 0.05f);
				func_21(uParam0->f_281.f_2);
				func_132(uParam0, 6);
			}
			else if (!Global_2764621)
			{
			}
			break;
		
		case 6:
			if (uParam0->f_281.f_9 == 1)
			{
				if (unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && !unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
				{
					unk_0x460D2A8B2C7DC7D4(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			func_119(uParam0, &sVar0);
			func_117(uParam0, &sVar1, 0);
			iVar7 = unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_go_straight_to_coord"));
			Var8 = { unk_0x7A6103DCF5EE8CC3(&sVar0, &sVar1, func_116(uParam0), func_115(uParam0), 0, 2) };
			fVar9 = Var8.f_2;
			if (((iVar7 != 1 && iVar7 != 0) || func_101(unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D()), fVar9, 5f)) || func_34(&(uParam0->f_281), 14))
			{
				fVar10 = 1f;
				fVar11 = 0f;
				Var12 = { func_116(uParam0) };
				if (func_34(&(uParam0->f_281), 14))
				{
					fVar10 = 2f;
					fVar11 = 0.9f;
				}
				uParam0->f_281.f_1 = unk_0xBC5D9A293974F095(Var12, func_115(uParam0), 2, 1, 0, 1065353216, fVar11, fVar10);
				unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), uParam0->f_281.f_1, &sVar0, &sVar1, 2f, -1000f, 13, 16, 1148846080, 0);
				unk_0xE7101255AD6F1952(uParam0->f_281.f_1);
				uParam0->f_281.f_9.f_4 = unk_0x1DD05E817C89C737();
				func_120(&(uParam0->f_281), 8);
				func_132(uParam0, 7);
			}
			break;
		
		case 7:
			if (uParam0->f_281.f_9 == 1)
			{
				if (unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && !unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
				{
					unk_0x460D2A8B2C7DC7D4(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			if (func_34(&(uParam0->f_281), 10))
			{
				func_32(&(uParam0->f_281), 10);
				if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
				{
					unk_0xBD618A73193F9982(uVar13, "Exit_Menu", unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
				}
				func_100(uParam0);
			}
			func_62(uParam0, iParam1);
			uVar2 = unk_0x643DC062EE904FCA(uParam0->f_281.f_1);
			if (unk_0x5266F1D2AEF6F73A(uVar2))
			{
				if (unk_0xBD3B265153D3BA2D(uVar2) >= 1f)
				{
					if (!Global_2764620)
					{
						if (!unk_0xE5E2AE8B19267B8A(unk_0x4A8C381C258A124D()) && !unk_0x6BF8FE9F26BBABDE(unk_0x4A8C381C258A124D()))
						{
							if (Global_1574965)
							{
								unk_0x6EF982A39E8D08FA(unk_0x4A8C381C258A124D(), 1, 1);
							}
						}
					}
					if (!func_48())
					{
						if (uParam0->f_281.f_9 == 1)
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								unk_0xBD618A73193F9982(uVar14, "Enter_Menu", unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
							}
							func_20(uParam0->f_281.f_2);
						}
						else
						{
							func_20(uParam0->f_281.f_2 + 20);
						}
						Global_2764620 = 1;
					}
					else
					{
						Global_2764620 = 1;
					}
					func_60(uParam0, 0);
					func_119(uParam0, &sVar0);
					func_117(uParam0, &sVar1, 0);
					uParam0->f_281.f_1 = unk_0xBC5D9A293974F095(func_116(uParam0), func_115(uParam0), 2, 1, 0, 1065353216, 0f, 1f);
					unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), uParam0->f_281.f_1, &sVar0, &sVar1, 4f, -1.5f, 13, 16, 1148846080, 0);
					unk_0xE7101255AD6F1952(uParam0->f_281.f_1);
					func_120(&(uParam0->f_281), 8);
					func_120(&(uParam0->f_281), 11);
				}
				else
				{
					if (uParam0->f_281.f_9 == 1 && (unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), 1374875855) || unk_0xBD3B265153D3BA2D(uVar2) > 0.25f))
					{
						if ((unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2])) && !unk_0x1C2F771CDC87A3A5(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), 0))
						{
							if (!unk_0xA3736D76B0E93E93(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2])))
							{
								unk_0x4D306DD94DD6FDBA(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), unk_0x4A8C381C258A124D(), unk_0x72F7E39FB49FC0BA(unk_0x4A8C381C258A124D(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
							}
						}
					}
					func_32(&(uParam0->f_281), 8);
				}
			}
			else if (!func_34(&(uParam0->f_281), 8) && uParam0->f_281.f_5 == 7)
			{
				if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
				{
					if (unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
					{
						if (unk_0xA3736D76B0E93E93(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2])))
						{
							unk_0x837D67618BF89034(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), 0, 1);
						}
						func_24(&(iParam1->f_14[uParam0->f_281.f_2]));
					}
				}
				func_132(uParam0, 9);
			}
			break;
		
		case 8:
			if (uParam0->f_281.f_9 == 1)
			{
				if (unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && !unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
				{
					unk_0x460D2A8B2C7DC7D4(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			unk_0xF2E51EC84D76A2B6(uParam0->f_281.f_1);
			if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
			{
				if (unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
				{
					if (unk_0xA3736D76B0E93E93(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2])))
					{
						unk_0x837D67618BF89034(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), 0, 1);
					}
					Var15 = { unk_0xBE8776D2466E9EA6(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0, 2) };
					Var16 = { unk_0x7A6103DCF5EE8CC3(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0, 2) };
					unk_0x62C438C53BB57AFD(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), Var15, 0, 0, 1);
					unk_0xCF39804E8C88080E(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), Var16, 2, 1);
					unk_0x5D7CD709B34C90F0(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), true);
				}
			}
			func_132(uParam0, 9);
			break;
		
		case 9:
			if (func_34(&(uParam0->f_281), 15))
			{
				func_33();
				unk_0x8744D2E3FC95740E(&Global_2764622, 8);
				func_32(&(uParam0->f_281), 15);
			}
			if (uParam0->f_281.f_9 == 1)
			{
				if (unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && !unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
				{
					unk_0x460D2A8B2C7DC7D4(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			uVar17 = unk_0x643DC062EE904FCA(uParam0->f_281.f_1);
			iVar18 = unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_synchronized_scene"));
			if (iVar18 == 0 || iVar18 == 1)
			{
				if (unk_0x5266F1D2AEF6F73A(uVar17))
				{
					if ((unk_0xBD3B265153D3BA2D(uVar17) >= 0.7f || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), 364629851)) || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), 2116425869))
					{
						unk_0xF2E51EC84D76A2B6(uParam0->f_281.f_1);
						if ((!BitTest(Global_1969892, 7) && !BitTest(Global_1969892, 3)) && !func_22(unk_0x259BE71D8A81D4FA()))
						{
							func_21(-1);
							func_20(-1);
						}
						Global_2764620 = 0;
						unk_0x8744D2E3FC95740E(&Global_2764622, 6);
						func_25(uParam0, 1);
						func_32(&(uParam0->f_281), 14);
						if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
						{
							if (unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
							{
								if (unk_0xA3736D76B0E93E93(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2])))
								{
									unk_0x837D67618BF89034(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), 0, 1);
								}
								Var19 = { unk_0xBE8776D2466E9EA6(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0, 2) };
								Var20 = { unk_0x7A6103DCF5EE8CC3(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0, 2) };
								unk_0x62C438C53BB57AFD(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), Var19, 0, 0, 1);
								unk_0xCF39804E8C88080E(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), Var20, 2, 1);
								unk_0x5D7CD709B34C90F0(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), true);
							}
						}
						if (!unk_0x787F8EE1F6FBDC6D())
						{
							if (uParam0->f_281.f_9 == 1)
							{
								func_5(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
							}
						}
						func_4();
						func_132(uParam0, 0);
					}
					else if (unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), -641050666))
					{
						if (uParam0->f_281.f_9 == 1)
						{
							if (unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
							{
								if (unk_0xA3736D76B0E93E93(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2])))
								{
									unk_0x837D67618BF89034(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), 0, 1);
								}
							}
						}
					}
				}
			}
			else
			{
				if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
				{
					if (unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
					{
						if (unk_0xA3736D76B0E93E93(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2])))
						{
							unk_0x837D67618BF89034(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), 0, 1);
						}
						func_24(&(iParam1->f_14[uParam0->f_281.f_2]));
					}
				}
				if ((!BitTest(Global_1969892, 7) && !BitTest(Global_1969892, 3)) && !func_22(unk_0x259BE71D8A81D4FA()))
				{
					func_21(-1);
					func_20(-1);
				}
				Global_2764620 = 0;
				unk_0x8744D2E3FC95740E(&Global_2764622, 6);
				func_25(uParam0, 1);
				func_32(&(uParam0->f_281), 14);
				if (!unk_0x787F8EE1F6FBDC6D())
				{
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
					}
				}
				func_4();
				func_132(uParam0, 0);
			}
			break;
	}
}

void func_60(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam1)
	{
		iVar1 = func_61(uParam0);
		if (iVar1 != uParam0->f_281.f_9.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + uParam0->f_281.f_9.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_281.f_9.f_2;
		}
		iVar1 = uParam0->f_281.f_9.f_1;
	}
	else if (uParam0->f_281.f_9.f_2 == 5)
	{
		iVar1 = uParam0->f_281.f_9.f_1;
		iVar2 = 3;
		iVar0 = unk_0xC5935DFB3F39785A(0, iVar2);
		if (iVar0 == uParam0->f_281.f_9.f_3)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (uParam0->f_281.f_9.f_2 > 6)
		{
			iVar1 = func_61(uParam0);
			uParam0->f_281.f_9.f_4 = unk_0x1DD05E817C89C737();
		}
		else
		{
			iVar1 = uParam0->f_281.f_9.f_1;
		}
		if ((unk_0x1DD05E817C89C737() - uParam0->f_281.f_9.f_4) >= 90000)
		{
			iVar1 = func_61(uParam0);
			if (iVar1 != uParam0->f_281.f_9.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + uParam0->f_281.f_9.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = uParam0->f_281.f_9.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	uParam0->f_281.f_9.f_3 = uParam0->f_281.f_9.f_2;
	uParam0->f_281.f_9.f_2 = iVar0;
	uParam0->f_281.f_9.f_1 = iVar1;
}

int func_61(var uParam0)
{
	return uParam0->f_281.f_9.f_1;
}

void func_62(var uParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	
	if ((BitTest(Global_1969892, 7) || BitTest(Global_1969892, 3)) || func_22(unk_0x259BE71D8A81D4FA()))
	{
		if (uParam0->f_281.f_5 == 7 && unk_0x15CCE8886267624F())
		{
			func_3(uParam0, uParam1);
			func_132(uParam0, 9);
		}
	}
	if (func_34(&(uParam0->f_281), 13))
	{
		iVar0 = func_92(&(uParam0->f_281.f_17));
		if (iVar0 == 1)
		{
			if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
			{
				unk_0xBD618A73193F9982(uVar1, "Select_Turret", unk_0xAB3646235DE50E93(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
			}
			unk_0x0B0C9A0F9AAEB7F0(&Global_1969892, 9);
			func_32(&(uParam0->f_281), 13);
		}
		else if (iVar0 == 2)
		{
			if (!BitTest(Global_2764622, 7))
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_2764622, 7);
			}
			unk_0xBF3D28CA44F3BE2D(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_32(&(uParam0->f_281), 13);
		}
	}
	if (uParam0->f_281.f_5 == 7)
	{
		if (unk_0x7811C74D5B749F76(2))
		{
			func_25(uParam0, 1);
		}
		if (unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), -1322051853))
		{
			func_25(uParam0, 1);
			if (func_34(&(uParam0->f_281), 15))
			{
				func_33();
				unk_0x8744D2E3FC95740E(&Global_2764622, 8);
				func_32(&(uParam0->f_281), 15);
			}
		}
		else if ((((((((((((((((((((((func_34(&(uParam0->f_281), 13) || !Global_1574965) || (!BitTest(Global_1969892, 23) && !func_91())) || Global_2766480) || Global_2766483) || BitTest(Global_1962996, 13)) || BitTest(Global_1969892, 14)) || BitTest(Global_1962996, 9)) || BitTest(Global_2764622, 0)) || BitTest(Global_1969892, 6)) || BitTest(Global_1969892, 7)) || BitTest(Global_1969892, 8)) || BitTest(Global_1969892, 9)) || BitTest(Global_1969892, 2)) || BitTest(Global_1969892, 3)) || BitTest(Global_1969892, 4)) || BitTest(Global_1969892, 5)) || func_22(unk_0x259BE71D8A81D4FA())) || func_50()) || unk_0x4465D55576678706(2, 19)) || !unk_0x9390801B06EE998F()) || func_88(unk_0x259BE71D8A81D4FA())) || Global_2764643 != 0)
		{
			func_25(uParam0, 1);
			if (!BitTest(Global_1969892, 23))
			{
				if (!func_34(&(uParam0->f_281), 15) && Global_2764643 == 0)
				{
					func_87("ARENA SPECTATOR BOX TABLETS");
					unk_0x0B0C9A0F9AAEB7F0(&Global_2764622, 8);
					func_120(&(uParam0->f_281), 15);
				}
			}
			else if (func_34(&(uParam0->f_281), 15))
			{
				func_33();
				unk_0x8744D2E3FC95740E(&Global_2764622, 8);
				func_32(&(uParam0->f_281), 15);
			}
		}
		else if (func_86(uParam0))
		{
			func_25(uParam0, 1);
			if (func_34(&(uParam0->f_281), 15))
			{
				func_33();
				unk_0x8744D2E3FC95740E(&Global_2764622, 8);
				func_32(&(uParam0->f_281), 15);
			}
		}
		else
		{
			if (!func_34(&(uParam0->f_281), 15))
			{
				func_87("ARENA SPECTATOR BOX TABLETS");
				unk_0x0B0C9A0F9AAEB7F0(&Global_2764622, 8);
				func_120(&(uParam0->f_281), 15);
			}
			unk_0xE0EEB603997F273F(2);
			unk_0x66EFB3D6110055C4(0, 24, 1);
			unk_0x66EFB3D6110055C4(0, 257, 1);
			unk_0x66EFB3D6110055C4(0, 142, 1);
			unk_0x66EFB3D6110055C4(0, 141, 1);
			unk_0x66EFB3D6110055C4(0, 140, 1);
			unk_0x66EFB3D6110055C4(0, 263, 1);
			unk_0x66EFB3D6110055C4(0, 264, 1);
			unk_0x66EFB3D6110055C4(0, 143, 1);
			unk_0x66EFB3D6110055C4(2, 200, 1);
			bVar2 = false;
			if (func_85())
			{
				bVar2 = true;
			}
			if (func_27("ARENA_VIP_CASH1", Global_262145.f_26645))
			{
				unk_0x8744D2E3FC95740E(&Global_2764622, 5);
			}
			if (func_27("ARENA_VIP_CASH2", Global_262145.f_26646))
			{
				unk_0x8744D2E3FC95740E(&Global_2764622, 4);
			}
			if (func_29("ARENA_VIP_ABIL"))
			{
				unk_0x8744D2E3FC95740E(&Global_2764622, 7);
			}
			if (BitTest(Global_2764622, 4) && uParam0->f_281.f_6 == -1)
			{
				func_84("ARENA_VIP_CASH2", Global_262145.f_26646, 2000);
			}
			if (BitTest(Global_2764622, 5) && uParam0->f_281.f_6 == -1)
			{
				func_84("ARENA_VIP_CASH1", Global_262145.f_26645, 2000);
			}
			if (BitTest(Global_2764622, 7) && uParam0->f_281.f_6 == -1)
			{
				func_83("ARENA_VIP_ABIL", 2000);
			}
			if ((BitTest(Global_2764622, 4) || BitTest(Global_2764622, 5)) || BitTest(Global_2764622, 7))
			{
				func_25(uParam0, 1);
			}
			if ((((((((!unk_0x4D9174D8796EA622() && !Global_1935176) && !func_34(&(uParam0->f_281), 0)) && !func_34(&(uParam0->f_281), 4)) && !func_82()) && !func_80(1)) && uParam0->f_281.f_9.f_2 != 3) && !unk_0xB11671B812399BA2()) && !func_79())
			{
				if (bVar2)
				{
					if (func_56() && !func_52())
					{
						if (((((func_28("ARENA_SEAT_PC1", Global_262145.f_26645, Global_262145.f_26646) || func_27("ARENA_SEAT_PC2", Global_262145.f_26645)) || func_27("ARENA_SEAT_PC3", Global_262145.f_26646)) || func_28("ARENA_SEAT1", Global_262145.f_26645, Global_262145.f_26646)) || func_27("ARENA_SEAT2", Global_262145.f_26645)) || func_27("ARENA_SEAT3", Global_262145.f_26646))
						{
							func_25(uParam0, 1);
						}
					}
					else if (func_29("ARENA_SEAT_PC") || func_29("ARENA_SEAT"))
					{
						func_25(uParam0, 1);
					}
				}
				if ((((((!func_26() && !BitTest(Global_2764622, 4)) && !BitTest(Global_2764622, 5)) && !BitTest(Global_2764622, 7)) && !func_27("ARENA_VIP_CASH1", Global_262145.f_26645)) && !func_27("ARENA_VIP_CASH2", Global_262145.f_26646)) && !func_29("ARENA_VIP_ABIL"))
				{
					if (unk_0xAE231F549813BBDF(2))
					{
						if (bVar2)
						{
							if (func_56() && !func_52())
							{
								if ((func_28("ARENA_SEAT_PC1", Global_262145.f_26645, Global_262145.f_26646) || func_27("ARENA_SEAT_PC2", Global_262145.f_26645)) || func_27("ARENA_SEAT_PC3", Global_262145.f_26646))
								{
									func_25(uParam0, 1);
								}
								func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_PC", 0, 0, 0, 0);
							}
							else
							{
								if (func_29("ARENA_SEAT_PC"))
								{
									func_25(uParam0, 1);
								}
								if (!BitTest(Global_2764622, 2) && !BitTest(Global_2764622, 3))
								{
									func_78("ARENA_SEAT_PC1", Global_262145.f_26645, Global_262145.f_26646);
								}
								else if (BitTest(Global_2764622, 2) && !BitTest(Global_2764622, 3))
								{
									func_84("ARENA_SEAT_PC2", Global_262145.f_26645, -1);
								}
								else if (!BitTest(Global_2764622, 2) && BitTest(Global_2764622, 3))
								{
									func_84("ARENA_SEAT_PC3", Global_262145.f_26646, -1);
								}
								else
								{
									func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_PC4", 0, 0, 0, 0);
								}
							}
						}
						else
						{
							func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_EX", 0, 0, 0, 0);
						}
					}
					else if (bVar2)
					{
						if (func_56() && !func_52())
						{
							if ((func_28("ARENA_SEAT1", Global_262145.f_26645, Global_262145.f_26646) || func_27("ARENA_SEAT2", Global_262145.f_26645)) || func_27("ARENA_SEAT3", Global_262145.f_26646))
							{
								func_25(uParam0, 1);
							}
							func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT", 0, 0, 0, 0);
						}
						else
						{
							if (func_29("ARENA_SEAT"))
							{
								func_25(uParam0, 1);
							}
							if (!BitTest(Global_2764622, 2) && !BitTest(Global_2764622, 3))
							{
								func_78("ARENA_SEAT1", Global_262145.f_26645, Global_262145.f_26646);
							}
							else if (BitTest(Global_2764622, 2) && !BitTest(Global_2764622, 3))
							{
								func_84("ARENA_SEAT2", Global_262145.f_26645, -1);
							}
							else if (!BitTest(Global_2764622, 2) && BitTest(Global_2764622, 3))
							{
								func_84("ARENA_SEAT3", Global_262145.f_26646, -1);
							}
							else
							{
								func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT4", 0, 0, 0, 0);
							}
						}
					}
					else
					{
						func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_EX", 0, 0, 0, 0);
					}
				}
				if (uParam0->f_281.f_5 == 7)
				{
					if (func_56() && !func_52())
					{
						if (((((((((unk_0xDEE3EFEA31A1F555(2, 235) && !unk_0x875A214D5EBCA509(2, 223)) && !unk_0x875A214D5EBCA509(2, 225)) && !unk_0x875A214D5EBCA509(2, 224)) && !unk_0x875A214D5EBCA509(2, 222)) && !BitTest(Global_1969892, 6)) && !BitTest(Global_1969892, 7)) && !BitTest(Global_1969892, 8)) && !BitTest(Global_1969892, 9)) && !func_22(unk_0x259BE71D8A81D4FA()))
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								unk_0xBD618A73193F9982(uVar3, "Exit_Menu", unk_0xAB3646235DE50E93(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
							}
							func_100(uParam0);
						}
						if ((((((((((unk_0xDEE3EFEA31A1F555(2, 223) && !unk_0xDEE3EFEA31A1F555(2, 235)) && !unk_0x875A214D5EBCA509(2, 225)) && !unk_0x875A214D5EBCA509(2, 224)) && !unk_0x875A214D5EBCA509(2, 222)) && !BitTest(Global_1969892, 6)) && !BitTest(Global_1969892, 7)) && !BitTest(Global_1969892, 8)) && !BitTest(Global_1969892, 9)) && !func_22(unk_0x259BE71D8A81D4FA())) && bVar2)
						{
							if (func_77())
							{
								func_25(uParam0, 1);
								unk_0x0B0C9A0F9AAEB7F0(&Global_1969892, 6);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									unk_0xBD618A73193F9982(uVar4, "Select_Drone", unk_0xAB3646235DE50E93(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2764622, 7))
								{
									unk_0x0B0C9A0F9AAEB7F0(&Global_2764622, 7);
								}
								unk_0xBF3D28CA44F3BE2D(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							}
						}
						if ((((((((((unk_0xDEE3EFEA31A1F555(2, 225) && !unk_0xDEE3EFEA31A1F555(2, 235)) && !unk_0x875A214D5EBCA509(2, 223)) && !unk_0x875A214D5EBCA509(2, 224)) && !unk_0x875A214D5EBCA509(2, 222)) && !BitTest(Global_1969892, 6)) && !BitTest(Global_1969892, 7)) && !BitTest(Global_1969892, 8)) && !BitTest(Global_1969892, 9)) && !func_22(unk_0x259BE71D8A81D4FA())) && bVar2)
						{
							if (func_76())
							{
								func_25(uParam0, 1);
								unk_0x0B0C9A0F9AAEB7F0(&Global_1969892, 7);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									unk_0xBD618A73193F9982(uVar5, "Select_RC_Car", unk_0xAB3646235DE50E93(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2764622, 7))
								{
									unk_0x0B0C9A0F9AAEB7F0(&Global_2764622, 7);
								}
								unk_0xBF3D28CA44F3BE2D(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							}
						}
						if ((((((((((unk_0xDEE3EFEA31A1F555(2, 224) && !unk_0xDEE3EFEA31A1F555(2, 235)) && !unk_0x875A214D5EBCA509(2, 223)) && !unk_0x875A214D5EBCA509(2, 225)) && !unk_0x875A214D5EBCA509(2, 222)) && !BitTest(Global_1969892, 6)) && !BitTest(Global_1969892, 7)) && !BitTest(Global_1969892, 8)) && !BitTest(Global_1969892, 9)) && !func_22(unk_0x259BE71D8A81D4FA())) && bVar2)
						{
							if (func_73())
							{
								func_25(uParam0, 1);
								unk_0x0B0C9A0F9AAEB7F0(&Global_1969892, 8);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									unk_0xBD618A73193F9982(uVar6, "Select_Trap_Cam", unk_0xAB3646235DE50E93(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2764622, 7))
								{
									unk_0x0B0C9A0F9AAEB7F0(&Global_2764622, 7);
								}
								unk_0xBF3D28CA44F3BE2D(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							}
						}
						if ((((((((((unk_0xDEE3EFEA31A1F555(2, 222) && !unk_0xDEE3EFEA31A1F555(2, 235)) && !unk_0x875A214D5EBCA509(2, 223)) && !unk_0x875A214D5EBCA509(2, 225)) && !unk_0x875A214D5EBCA509(2, 224)) && !BitTest(Global_1969892, 6)) && !BitTest(Global_1969892, 7)) && !BitTest(Global_1969892, 8)) && !BitTest(Global_1969892, 9)) && !func_22(unk_0x259BE71D8A81D4FA())) && bVar2)
						{
							if (func_72())
							{
								func_25(uParam0, 1);
								if (func_34(&(uParam0->f_281), 15))
								{
									func_33();
									unk_0x8744D2E3FC95740E(&Global_2764622, 8);
									func_32(&(uParam0->f_281), 15);
								}
								func_120(&(uParam0->f_281), 13);
							}
							else
							{
								if (!BitTest(Global_2764622, 7))
								{
									unk_0x0B0C9A0F9AAEB7F0(&Global_2764622, 7);
								}
								unk_0xBF3D28CA44F3BE2D(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							}
						}
					}
					else
					{
						if (((unk_0xDEE3EFEA31A1F555(2, 235) && !unk_0x875A214D5EBCA509(2, 224)) && !Global_2766483) && !Global_2766480)
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								unk_0xBD618A73193F9982(uVar7, "Exit_Menu", unk_0xAB3646235DE50E93(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
							}
							func_100(uParam0);
						}
						if ((((unk_0xDEE3EFEA31A1F555(2, 223) && !unk_0xDEE3EFEA31A1F555(2, 235)) && !unk_0x875A214D5EBCA509(2, 224)) && bVar2) && !Global_262145.f_26643)
						{
							if (unk_0x0AF5E4A6C74DC312(Global_262145.f_26645, 0, 0, 1, -1, 0) || BitTest(Global_2764622, 3))
							{
								func_25(uParam0, 1);
								Global_2766483 = 1;
								Global_2766480 = 1;
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									unk_0xBD618A73193F9982(uVar8, "Select_Live_Stream", unk_0xAB3646235DE50E93(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
								}
								func_70(73, -1);
								func_68();
								func_63();
							}
							else if (!BitTest(Global_2764622, 5))
							{
								unk_0x0B0C9A0F9AAEB7F0(&Global_2764622, 5);
							}
						}
					}
				}
			}
		}
	}
	func_32(&(uParam0->f_281), 9);
}

void func_63()
{
	func_64(1, 7986);
}

void func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_67(iParam1, -1, 0);
	func_65(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_65(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805029[iParam0 /*3*/][func_66(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
	}
}

int func_66(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
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

int func_67(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805029[iParam0 /*3*/][func_66(iParam1)];
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_68()
{
	int iVar0;
	
	iVar0 = func_69(73, -1);
	if (iVar0 >= 50)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_372.f_3), 13);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_372.f_3), 13);
	}
}

int func_69(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2850194[iParam0 /*3*/][func_66(iParam1)];
	if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_70(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_69(iParam0, func_66(iParam1));
	iVar0++;
	func_71(iParam0, iVar0, iParam1);
}

void func_71(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	uVar0 = Global_2850194[iParam0 /*3*/][func_66(uParam2)];
	unk_0x1164A75E490C27B6(uVar0, iParam1, 1);
}

int func_72()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058070.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_1265[iVar1 /*23466*/].f_8085[iVar2], 26))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_32, 4) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_73()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!func_74())
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058070.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_1265[iVar1 /*23466*/].f_8085[iVar2], 25))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_32, 1) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_74()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_68925 - 1))
	{
		if (!func_75(Global_4980736.f_68927[iVar0 /*205*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_75(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_76()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058070.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_1265[iVar1 /*23466*/].f_8085[iVar2], 24))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_30, 14) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058070.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_1265[iVar1 /*23466*/].f_8085[iVar2], 23))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_30, 13) && !bVar0)
	{
		return 1;
	}
	return 0;
}

void func_78(char* sParam0, var uParam1, var uParam2)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	unk_0x511D14ED2DA887E1(uParam2);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, -1);
}

bool func_79()
{
	return unk_0x1DD05E817C89C737() <= Global_23270.f_6321 + 100;
}

int func_80(bool bParam0)
{
	if (unk_0x22C925E7C63C5628())
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (func_81(unk_0x4A8C381C258A124D()))
			{
				if (unk_0x6D05C5731A838CB3(0, 25) || unk_0x6D05C5731A838CB3(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23131.f_130)
	{
		return 0;
	}
	if (unk_0x6D05C5731A838CB3(0, 19) || (!bParam0 && unk_0x4465D55576678706(0, 19)))
	{
		return 1;
	}
	if (unk_0x761778199FE1211C())
	{
		if (((unk_0x6D05C5731A838CB3(0, 166) || unk_0x6D05C5731A838CB3(0, 167)) || unk_0x6D05C5731A838CB3(0, 168)) || unk_0x6D05C5731A838CB3(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x4465D55576678706(0, 166) || unk_0x4465D55576678706(0, 167)) || unk_0x4465D55576678706(0, 168)) || unk_0x4465D55576678706(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_81(var uParam0)
{
	int iVar0;
	
	if (unk_0x5EA7A06A1491D450())
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0))
		{
			unk_0x23B29877D0BE9547(uParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_82()
{
	if (Global_2672505.f_947.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_83(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

void func_84(char* sParam0, var uParam1, int iParam2)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam2);
}

int func_85()
{
	if (Global_2694553 >= 0 && Global_2694553 < 10)
	{
		return 1;
	}
	return 0;
}

bool func_86(var uParam0)
{
	return func_34(&(uParam0->f_281), 9);
}

void func_87(char* sParam0)
{
	unk_0x005E8B7CFA7D52A6(sParam0);
}

bool func_88(int iParam0)
{
	return func_89(iParam0) != 0;
}

int func_89(int iParam0)
{
	if (iParam0 == unk_0x259BE71D8A81D4FA() && !func_90())
	{
		return Global_2764649.f_1;
	}
	return Global_2648605.f_1399[iParam0 /*3*/].f_1;
}

int func_90()
{
	if (((Global_2764652 != 0 && Global_2764652 == Global_2764653) && Global_2764641 != 3) && Global_2764641 != 1)
	{
		return 0;
	}
	return 1;
}

int func_91()
{
	if (((((func_29("ARENA_SEAT_GM0") || func_29("ARENA_SEAT_GM1")) || func_29("TAGTM_HELP_2O")) || func_29("TAGTM_HELP_2P")) || func_29("TAGTM_HELP_2Pi")) || func_29("TAGTM_HELP_2G"))
	{
		return 1;
	}
	return 0;
}

int func_92(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		*uParam0 = func_98(1, 0, 0, 1, 1);
	}
	iVar0 = func_97(*uParam0);
	if (iVar0 == 1)
	{
		*uParam0 = 0;
	}
	else if (iVar0 != 0)
	{
		*uParam0 = 0;
		func_93(0, -1, -1);
	}
	return iVar0;
}

int func_93(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 0 && Global_2764646.f_1 != iParam0)
	{
		return 0;
	}
	if (iParam1 != -1 && Global_2764646.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != -1 && Global_2764646 != iParam2)
	{
		return 0;
	}
	if (func_96())
	{
		return 0;
	}
	func_95();
	func_94(3);
	Global_2764646.f_1 = 0;
	Global_2764646.f_2 = -1;
	Global_2764646 = -1;
	Global_2764642 = 0;
	Global_2764644 = 0;
	Global_2764652 = unk_0x0728E77B2BF91D54();
	Global_2764645 = 1;
	return 1;
}

void func_94(int iParam0)
{
	Global_2764641 = iParam0;
}

void func_95()
{
	if (unk_0x486FF5D06E9659F1(joaat("turret_cam_script")) > 0)
	{
		Global_2764654 = 1;
	}
}

bool func_96()
{
	return (Global_2764641 == 3 || Global_2764641 == 0);
}

int func_97(int iParam0)
{
	if (Global_2764652 == iParam0)
	{
		if (Global_2764641 == 2)
		{
			if (Global_2764652 == Global_2764653)
			{
				return 1;
			}
			else
			{
				return 2;
			}
		}
		else if (Global_2764641 == 0)
		{
			return 2;
		}
	}
	else
	{
		return 2;
	}
	return 0;
}

var func_98(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<3> Var0;
	
	Var0.f_2 = -1;
	Var0.f_1 = iParam0;
	Var0.f_2 = iParam1;
	Var0.f_0 = iParam2;
	func_94(1);
	Global_2764646 = { Var0 };
	Global_2764642 = iParam3;
	Global_2764652 = unk_0x0728E77B2BF91D54();
	Global_2764644 = 0;
	func_99(&Global_2764644, 0, !bParam4);
	Global_2764645 = 1;
	return Global_2764652;
}

void func_99(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(uParam0, iParam1);
	}
	else
	{
		unk_0x8744D2E3FC95740E(uParam0, bParam1);
	}
}

void func_100(var uParam0)
{
	char* sVar0;
	
	uParam0->f_281.f_1 = unk_0xBC5D9A293974F095(func_116(uParam0), func_115(uParam0), 2, 1, 0, 1065353216, 0f, 1f);
	func_119(uParam0, &sVar0);
	unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), uParam0->f_281.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1148846080, 0);
	unk_0xE7101255AD6F1952(uParam0->f_281.f_1);
	func_30(&(uParam0->f_281.f_6));
	unk_0x0B0C9A0F9AAEB7F0(&Global_2764622, 6);
	func_32(&(uParam0->f_281), 14);
	func_132(uParam0, 9);
}

int func_101(float fParam0, float fParam1, float fParam2)
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
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
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

int func_102(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10)
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	Global_23131.f_6 = 1;
	if (Global_2672505.f_1024 && Global_2672505.f_1032)
	{
		func_111(0, bParam7);
		return 1;
	}
	if (unk_0x3555462DB47B7AB1() && !bParam7)
	{
		if (Global_2672505.f_1024)
		{
			func_111(0, bParam7);
		}
		return 0;
	}
	if ((unk_0x787F8EE1F6FBDC6D() && !bParam7) && !unk_0x705A7AB2D4BC0A9B())
	{
		return 0;
	}
	if (!func_110(0))
	{
		if (func_109(unk_0x259BE71D8A81D4FA(), 1, 0) && !(func_55() || func_108()))
		{
			if (((bParam7 && func_107(unk_0x259BE71D8A81D4FA(), 1, 0)) && unk_0x3555462DB47B7AB1()) && Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_232 == 1)
			{
			}
			else if (func_106() == 28)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam1 < 0f)
	{
		fParam1 = (fParam1 + 360f);
	}
	if (fParam1 >= 360f)
	{
		fParam1 = (fParam1 + -360f);
	}
	if (!Global_2672505.f_1024 && !bParam9)
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0) };
		if ((unk_0x1D5CD3EAAA7422B0((Var1.f_0 - Param0.f_0)) < 0.2f && unk_0x1D5CD3EAAA7422B0((Var1.f_1 - Param0.f_1)) < 0.2f) && unk_0x1D5CD3EAAA7422B0((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar2 = (fParam1 - unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D()));
			if (fVar2 > 180f)
			{
				fVar2 = (fVar2 + -360f);
			}
			if (fVar2 < -180f)
			{
				fVar2 = (fVar2 + 360f);
			}
			if (unk_0x1D5CD3EAAA7422B0(fVar2) < 1f)
			{
				Global_2672505.f_1024 = 0;
				Global_2672505.f_1025 = 0;
				if (unk_0x705A7AB2D4BC0A9B())
				{
					unk_0xEB205B72FDDFDFC6();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2672505.f_1026 || !Param0.f_1 == Global_2672505.f_1026.f_1) || !Param0.f_2 == Global_2672505.f_1026.f_2) || !fParam1 == Global_2672505.f_1029)
	{
		if (Global_2672505.f_1024 == 1)
		{
			if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2672505.f_1030) < func_105(0))
			{
				return 0;
			}
			unk_0xEB205B72FDDFDFC6();
			Global_2672505.f_1025 = 1;
		}
		else
		{
			Global_2672505.f_1025 = 0;
		}
		Global_2672505.f_1026 = { Param0 };
		Global_2672505.f_1029 = fParam1;
		Global_2672505.f_1024 = 0;
	}
	if (bParam2)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
			if (unk_0xFC8BFE4B41177C22(uVar0) && unk_0x4B423FAA24E8ABF0(iVar0) == joaat("kosatka"))
			{
				bParam2 = false;
			}
		}
	}
	if (!Global_2672505.f_1024 && !unk_0x705A7AB2D4BC0A9B())
	{
		if (bParam2)
		{
			bParam3 = false;
		}
		bParam5 = bParam5;
		if (bParam5)
		{
		}
		if (bParam3)
		{
		}
		if (bParam6)
		{
		}
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (!BitTest(Global_100733.f_1407[44], 16))
			{
				func_104(0);
			}
			if (!unk_0x51B462E1DEB9F762(unk_0x4A8C381C258A124D(), &(Global_2635559.f_502)))
			{
				Global_2635559.f_502 = 0;
			}
		}
		if (bParam2)
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
				if (unk_0xA6D8AF5A058A75F0(iVar0))
				{
					Global_2672505.f_1031 = 0;
				}
			}
		}
		if (Global_2672505.f_1031 > -1)
		{
			Global_2672505.f_1030 = unk_0x7E3F74F641EE6B27();
			Global_2672505.f_1024 = 1;
		}
		else
		{
			if (bParam7)
			{
				if (bParam2)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
						if (unk_0x1B1A446EFA398EB5(iVar0))
						{
							unk_0xB2BD5837A8D3CEDA(iVar0, Param0, 0, 1, 1, 1);
							unk_0x5C96CEA06531AB03(iVar0, fParam1);
							if (fParam10 != 0f)
							{
								unk_0xCF39804E8C88080E(iVar0, fParam10, 0f, fParam1, 2, 1);
							}
						}
						else
						{
							unk_0xF093E270C0B6B318(iVar0);
						}
					}
					else
					{
						unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Param0, 0, 0, 0, 1);
						unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), fParam1);
					}
				}
				else
				{
					unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Param0, 0, 0, 0, 1);
					unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), fParam1);
				}
				func_111(bParam4, bParam7);
				return 1;
			}
			else
			{
				unk_0xE3F88173F42C071B();
				unk_0xCB7327FDCE6757E1(unk_0x259BE71D8A81D4FA(), Param0, fParam1, bParam2, iParam8, 0);
			}
			Global_2672505.f_1030 = unk_0x7E3F74F641EE6B27();
			Global_2672505.f_1024 = 1;
		}
	}
	if (Global_2672505.f_1024)
	{
		Global_23131.f_6 = 1;
		Global_2672505.f_1030 = unk_0x7E3F74F641EE6B27();
		if (Global_2672505.f_1031 > -1)
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
			}
			if (func_103(&(Global_2672505.f_1031), Param0, fParam1, iVar0))
			{
				func_111(bParam4, bParam7);
				return 1;
			}
		}
		else
		{
			if (bParam7)
			{
				if (vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Global_2672505.f_1026) < 2f)
				{
					if (unk_0x705A7AB2D4BC0A9B())
					{
						unk_0xEB205B72FDDFDFC6();
					}
					func_111(bParam4, bParam7);
					return 1;
				}
			}
			if (!unk_0x705A7AB2D4BC0A9B())
			{
				if (fParam10 != 0f)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
						unk_0xCF39804E8C88080E(iVar0, fParam10, 0f, fParam1, 2, 1);
						Global_2672505.f_1032 = 1;
						return 0;
					}
				}
				func_111(bParam4, bParam7);
				return 1;
			}
		}
	}
	return 0;
}

int func_103(var uParam0, struct<3> Param1, float fParam2, var uParam3)
{
	if (unk_0xFC8BFE4B41177C22(Global_2672505.f_1033) && !unk_0x1C2F771CDC87A3A5(Global_2672505.f_1033, 0))
	{
		unk_0xF093E270C0B6B318(Global_2672505.f_1033);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2672505.f_1033 = uParam3;
			unk_0xF093E270C0B6B318(Global_2672505.f_1033);
			if (unk_0x1B1A446EFA398EB5(Global_2672505.f_1033))
			{
				if (!unk_0x1C2F771CDC87A3A5(Global_2672505.f_1033, 0))
				{
					unk_0x5C96CEA06531AB03(Global_2672505.f_1033, fParam2);
					unk_0xB2BD5837A8D3CEDA(Global_2672505.f_1033, Param1, 0, 1, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_104(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2635559.f_2691;
	if ((unk_0x7507A74A3D963966() && Global_2635559.f_2689 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2635559.f_2688)
	{
		if (!unk_0xC47E3FF56898A28B())
		{
			Global_2635559.f_2688 = iVar0;
		}
	}
}

int func_105(bool bParam0)
{
	if (unk_0x15CCE8886267624F())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_106()
{
	return Global_1574993;
}

int func_107(int iParam0, bool bParam1, bool bParam2)
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

bool func_108()
{
	return ((BitTest(Global_4718592.f_30, 12) && BitTest(Global_1969892, 12)) && Global_1969891 == 8);
}

int func_109(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2657589[iParam0 /*466*/].f_232 == 99)
	{
		if ((iParam2 && Global_2657589[iParam0 /*466*/].f_235 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2657589[iParam0 /*466*/].f_232 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_110(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_111(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0xD815D4BD1AE9E85A(0f, 1065353216);
		unk_0x64BB72494B9DF6DC(0f);
	}
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x5EF96FB2D3902DC7(unk_0x4A8C381C258A124D());
	}
	if (!bParam1)
	{
		unk_0xE3F88173F42C071B();
	}
	if (unk_0x705A7AB2D4BC0A9B())
	{
		unk_0xEB205B72FDDFDFC6();
	}
	func_7();
	if (!BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 14) && !func_113())
	{
		func_112();
	}
}

void func_112()
{
	Global_2802791.f_92 = 1;
}

int func_113()
{
	if (!unk_0x834C960822A4683F() && !func_110(0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_174409[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

int func_114()
{
	return Global_2694553;
}

Vector3 func_115(var uParam0)
{
	return (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3;
}

Vector3 func_116(var uParam0)
{
	return (uParam0[uParam0->f_281.f_2 /*14*/])->f_8;
}

void func_117(var uParam0, char* sParam1, bool bParam2)
{
	switch (uParam0->f_281.f_9)
	{
		case 0:
			switch (uParam0->f_281.f_9.f_2)
			{
				case 0:
					StringCopy(sParam1, "IDLE_A", 16);
					break;
				
				case 1:
					StringCopy(sParam1, "IDLE_B", 16);
					break;
				
				case 2:
					StringCopy(sParam1, "IDLE_C", 16);
					break;
				
				case 3:
					StringCopy(sParam1, "ENTER", 16);
					break;
				
				case 5:
					StringCopy(sParam1, "BASE", 16);
					break;
				
				case 4:
					StringCopy(sParam1, "EXIT", 16);
					break;
				
				case 7:
					StringCopy(sParam1, "A_TO_B", 16);
					break;
				
				case 8:
					StringCopy(sParam1, "B_TO_C", 16);
					break;
				
				case 9:
					StringCopy(sParam1, "C_TO_D", 16);
					break;
				
				case 10:
					StringCopy(sParam1, "D_TO_E", 16);
					break;
				
				case 12:
					StringCopy(sParam1, "B_TO_E", 16);
					break;
				
				case 13:
					StringCopy(sParam1, "C_TO_A", 16);
					break;
				
				case 14:
					StringCopy(sParam1, "D_TO_A", 16);
					break;
				
				case 15:
					StringCopy(sParam1, "E_TO_A", 16);
					break;
				
				default:
					StringCopy(sParam1, "invalid_clip", 16);
					break;
			}
			break;
		
		case 1:
			switch (uParam0->f_281.f_9.f_2)
			{
				case 0:
					StringCopy(sParam1, "IDLE_A", 16);
					break;
				
				case 1:
					StringCopy(sParam1, "IDLE_B", 16);
					break;
				
				case 2:
					StringCopy(sParam1, "IDLE_C", 16);
					break;
				
				case 3:
					StringCopy(sParam1, "ENTER", 16);
					break;
				
				case 5:
					StringCopy(sParam1, "BASE", 16);
					break;
				
				case 4:
					StringCopy(sParam1, "EXIT", 16);
					break;
				
				case 7:
					StringCopy(sParam1, "A_TO_B", 16);
					break;
				
				case 8:
					StringCopy(sParam1, "B_TO_C", 16);
					break;
				
				case 9:
					StringCopy(sParam1, "C_TO_D", 16);
					break;
				
				case 10:
					StringCopy(sParam1, "D_TO_E", 16);
					break;
				
				case 12:
					StringCopy(sParam1, "B_TO_E", 16);
					break;
				
				case 13:
					StringCopy(sParam1, "C_TO_A", 16);
					break;
				
				case 14:
					StringCopy(sParam1, "D_TO_A", 16);
					break;
				
				case 15:
					StringCopy(sParam1, "E_TO_A", 16);
					break;
				
				default:
					StringCopy(sParam1, "invalid_clip", 16);
					break;
			}
			break;
	}
	if (bParam2)
	{
		StringConCat(sParam1, "_TABLET", 16);
	}
}

void func_118()
{
	if (!Global_2672505.f_947.f_10)
	{
		Global_2672505.f_947.f_10 = 1;
	}
}

void func_119(var uParam0, char* sParam1)
{
	switch (uParam0->f_281.f_9)
	{
		case 0:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "ANIM@ARENA@AMB@SEAT_DRONE_TABLET", 64);
			break;
	}
	if (func_44())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_281.f_9)
	{
		case 0:
			switch (uParam0->f_281.f_9.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@", 64);
					break;
			}
			break;
		
		case 1:
			switch (uParam0->f_281.f_9.f_1)
			{
				case 0:
					StringConCat(sParam1, "@", 64);
					break;
			}
			break;
	}
}

void func_120(var uParam0, bool bParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(uParam0, iParam1);
}

void func_121(var uParam0)
{
	uParam0->f_281.f_9 = func_123((*uParam0)[uParam0->f_281.f_2 /*14*/]);
	uParam0->f_281.f_9.f_1 = func_122(uParam0);
	uParam0->f_281.f_9.f_2 = 3;
	uParam0->f_281.f_9.f_3 = 3;
}

int func_122(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_281.f_9 == 0)
	{
		if (func_44())
		{
			iVar0 = unk_0xC5935DFB3F39785A(0, 3);
			switch (iVar0)
			{
				case 0:
					return 0;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				default:
			}
		}
		else
		{
			iVar0 = unk_0xC5935DFB3F39785A(0, 3);
			switch (iVar0)
			{
				case 0:
					return 0;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				}
			}
		
		default:
	}
	return 0;
}

int func_123(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

void func_124(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x486FF5D06E9659F1(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x3555462DB47B7AB1())
	{
		if (!*uParam0 == -1)
		{
			func_30(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_44000[iVar0 /*32*/])
		{
			Global_44000[iVar0 /*32*/] = 1;
			Global_44000[iVar0 /*32*/].f_1 = Global_44201;
			Global_44201++;
			Global_44000[iVar0 /*32*/].f_4 = 0;
			Global_44000[iVar0 /*32*/].f_29 = 0;
			Global_44000[iVar0 /*32*/].f_5 = 0;
			Global_44000[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44000[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44000[iVar0 /*32*/].f_6 = iParam3;
			Global_44000[iVar0 /*32*/].f_31 = unk_0x8F76B2250AC806FA();
			Global_44000[iVar0 /*32*/].f_7 = 0;
			Global_44000[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xD6F9DEE4765092A9(sParam4))
			{
				Global_44000[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44000[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44000[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44000[iVar0 /*32*/].f_12 = 0;
				Global_44000[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_44000[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_125(var uParam0)
{
	Stack.Push(!func_34(&(uParam0->f_281), 5));
	Stack.Push(uParam0[uParam0->f_281.f_2 /*14*/]);
	Stack.Push(uParam0->f_281.f_2);
	Call_Loc(uParam0->f_281.f_14);
	return (StackVal || StackVal);
}

int func_126(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			iVar1 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar0));
			if (iVar1 != unk_0x259BE71D8A81D4FA() && func_107(iVar1, 1, 1))
			{
				if (func_130(unk_0x56E414973C2A8C0E(iVar1), uParam0[uParam0->f_281.f_2 /*14*/]) || func_127(iVar1) == uParam0->f_281.f_2)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_127(int iParam0)
{
	if (iParam0 != func_23())
	{
		return Global_1853910[iParam0 /*862*/].f_855;
	}
	return -1;
}

bool func_128(var uParam0)
{
	if (((BitTest(Global_1969892, 6) || BitTest(Global_1969892, 7)) || BitTest(Global_1969892, 8)) || BitTest(Global_1969892, 9))
	{
		return 1;
	}
	return uParam0->f_281 & 31 > 0;
}

int func_129(int iParam0, struct<3> Param1)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (func_101(unk_0xCFC0C995455A6204(iParam0), (Param1.f_2 - 180f), 90f))
		{
			return 1;
		}
	}
	return 0;
}

bool func_130(int iParam0, var uParam1)
{
	return unk_0x5105BE70DEF1F5FB(uParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, 0, 1, 0);
}

int func_131(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_130(unk_0x4A8C381C258A124D(), uParam0[uParam0->f_281.f_2 /*14*/]) && func_129(unk_0x4A8C381C258A124D(), (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3))
		{
			return 1;
		}
		else
		{
			uParam0->f_281.f_2 = (uParam0->f_281.f_2 + 1 % 20);
		}
		iVar0++;
	}
	return 0;
}

void func_132(var uParam0, int iParam1)
{
	uParam0->f_281.f_5 = iParam1;
}

void func_133(var uParam0)
{
	int iVar0;
	
	if (BitTest(Global_1969892, 7))
	{
		func_139(1);
	}
	switch (uParam0->f_281.f_5)
	{
		case 5:
		case 9:
			func_139(1);
		
		case 7:
			unk_0x513E63C787EE96A7();
			unk_0x92D8C10950A06B6D(0);
			unk_0xFC14A38C4235E772(0);
			unk_0x4EB223432F8FA0A0(19);
			unk_0x4EB223432F8FA0A0(2);
			unk_0xF25C7C5177203507();
			if (!func_138())
			{
				func_137();
			}
			if (unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar0, 1) && iVar0 != joaat("weapon_unarmed"))
			{
				unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
			}
			unk_0x66EFB3D6110055C4(0, 37, 1);
			func_135(1);
			func_134();
			break;
	}
}

void func_134()
{
	Global_23131.f_6 = 1;
}

void func_135(bool bParam0)
{
	if (bParam0)
	{
		if (func_136())
		{
			Global_2683864.f_41 = 1;
		}
	}
	else
	{
		Global_2683864.f_41 = 0;
	}
}

bool func_136()
{
	return BitTest(Global_2683864.f_2, 11);
}

void func_137()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 4);
}

bool func_138()
{
	return BitTest(Global_1962996, 19);
}

void func_139(int iParam0)
{
	if (func_138())
	{
		return;
	}
	if (!Global_20383.f_1 == 1)
	{
		if (func_144(0))
		{
			func_140(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 2);
	}
}

void func_140(int iParam0)
{
	if (func_138())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_143())
		{
			func_142(1, 1);
		}
		else
		{
			func_142(0, 0);
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
	if (!func_141())
	{
		Global_20383.f_1 = 3;
	}
}

int func_141()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_142(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_144(0))
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

bool func_143()
{
	return BitTest(Global_1962996, 5);
}

int func_144(int iParam0)
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

void func_145(var uParam0)
{
	if (uParam0->f_281.f_5 == 7)
	{
	}
	else if (uParam0->f_281.f_5 > 5)
	{
		unk_0x159356D054E19158(unk_0x4A8C381C258A124D());
		unk_0x04FC75A7251431C6(unk_0x4A8C381C258A124D(), func_146());
		uParam0->f_281.f_8 = unk_0x8034325BF6D6E41F();
	}
	else if ((unk_0x8034325BF6D6E41F() - uParam0->f_281.f_8) < 5)
	{
		unk_0x04FC75A7251431C6(unk_0x4A8C381C258A124D(), func_146());
	}
}

float func_146()
{
	return 0.13f;
}

void func_147(var uParam0)
{
	func_148(&(uParam0->f_281), 4, func_149());
	func_148(&(uParam0->f_281), 1, unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0));
	func_148(&(uParam0->f_281), 3, unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1));
	func_148(&(uParam0->f_281), 0, func_144(0));
	func_148(&(uParam0->f_281), 2, unk_0x24433628C02BED5F(unk_0x4A8C381C258A124D()));
}

void func_148(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	uVar0 = iParam1;
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(uParam0, uVar0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(uParam0, bVar0);
	}
}

bool func_149()
{
	return Global_75693;
}

int func_150()
{
	if ((((!func_159() && !func_50()) && !BitTest(Global_1969892, 7)) && !BitTest(Global_1969892, 3)) && !func_22(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	if (BitTest(Global_1969892, 11) && unk_0x15CCE8886267624F())
	{
		return 1;
	}
	if (func_151())
	{
		return 1;
	}
	if (unk_0x486FF5D06E9659F1(unk_0x70E57E9927B6BA58("AM_MP_ARENA_BOX")) <= 0)
	{
		return 1;
	}
	if (!Global_2764616)
	{
		return 1;
	}
	return 0;
}

int func_151()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_158())
	{
		return 1;
	}
	if (Global_2696917)
	{
		return 1;
	}
	if (func_157())
	{
		return 1;
	}
	if (func_156(159))
	{
		if (!func_155())
		{
			return 1;
		}
	}
	if (func_156(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_152() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_152()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_152()
{
	switch (func_154())
	{
		case 0:
			return func_153();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_153()
{
	switch (Global_2697021)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_154()
{
	return Global_32163;
}

bool func_155()
{
	return Global_2683864.f_698;
}

int func_156(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_157()
{
	return Global_2694526;
}

bool func_158()
{
	return Global_2683864.f_693;
}

int func_159()
{
	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2797.988f, -3943.898f, 181.0005f, 2797.949f, -3919.85f, 187.4114f, 30f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_160()
{
	int iVar0;
	
	if (unk_0x99F8FC8A6D8E20C0("arena_box_bench_seats", -1, 1, 0))
	{
		return 0;
	}
	unk_0xDB2434E51017FFCC(32, 0, -1);
	func_168(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&Local_114, 25, 0);
	unk_0x7B13DC83218D9AF5(&Local_125, 65, 0);
	unk_0xAECC5FA98C879D67(0);
	func_167();
	func_161();
	if (unk_0x76CD105BCAC6EB9F() && unk_0x93E08E0F531E2C35())
	{
		if (!Local_114.f_0)
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				Local_114.f_2[iVar0] = -1;
				iVar0++;
			}
			Local_114.f_0 = 1;
		}
	}
	return 1;
}

void func_161()
{
	func_162(0, &Local_95, 0, 2);
	func_162(1, &Local_95, 1, 2);
	func_162(2, &Local_95, 2, 2);
	func_162(3, &Local_95, 3, 2);
	func_162(4, &Local_95, 4, 2);
	func_162(5, &Local_95, 5, 2);
	func_162(6, &Local_95, 6, 2);
	func_162(7, &Local_95, 7, 2);
	func_162(8, &Local_95, 8, 2);
	func_162(9, &Local_95, 9, 2);
	func_162(10, &Local_95, 10, 1);
	func_162(11, &Local_95, 11, 1);
	func_162(12, &Local_95, 12, 1);
	func_162(13, &Local_95, 13, 1);
	func_162(14, &Local_95, 14, 1);
	func_162(15, &Local_95, 15, 1);
	func_162(16, &Local_95, 16, 1);
	func_162(17, &Local_95, 17, 1);
	func_162(18, &Local_95, 18, 1);
	func_162(19, &Local_95, 19, 1);
}

void func_162(int iParam0, var uParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	float fVar1;
	
	func_166(iParam0, &Var0, &fVar1);
	(*uParam1)[iParam2 /*14*/] = iParam3;
	(uParam1[iParam2 /*14*/])->f_8 = { Var0 };
	(uParam1[iParam2 /*14*/])->f_8.f_3 = { 0f, 0f, fVar1 };
	(uParam1[iParam2 /*14*/])->f_1 = { func_164(func_165(), (fVar1 - 180f)) + Var0 };
	(uParam1[iParam2 /*14*/])->f_1.f_3 = { func_164(func_163(), (fVar1 - 180f)) + Var0 };
	(uParam1[iParam2 /*14*/])->f_1.f_6 = 1.25f;
}

Vector3 func_163()
{
	return 0.5f, -0.5f, 2f;
}

Vector3 func_164(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = sin(fParam1);
	fVar2 = cos(fParam1);
	Var0.f_0 = ((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_165()
{
	return -0.5f, -0.5f, 0f;
}

void func_166(int iParam0, var uParam1, var uParam2)
{
	if (func_44())
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 2799.885f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 1:
				*uParam1 = { 2798.857f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 2:
				*uParam1 = { 2797.821f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 3:
				*uParam1 = { 2796.794f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 4:
				*uParam1 = { 2795.764f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 5:
				*uParam1 = { 2794.729f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 6:
				*uParam1 = { 2793.706f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 7:
				*uParam1 = { 2792.677f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 8:
				*uParam1 = { 2791.638f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 9:
				*uParam1 = { 2790.611f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 10:
				*uParam1 = { 2799.913f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 11:
				*uParam1 = { 2798.89f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 12:
				*uParam1 = { 2797.817f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 13:
				*uParam1 = { 2796.821f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 14:
				*uParam1 = { 2795.784f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 15:
				*uParam1 = { 2794.75f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 16:
				*uParam1 = { 2793.711f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 17:
				*uParam1 = { 2792.696f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 18:
				*uParam1 = { 2791.635f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 19:
				*uParam1 = { 2790.644f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 2799.864f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 1:
				*uParam1 = { 2798.837f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 2:
				*uParam1 = { 2797.8f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 3:
				*uParam1 = { 2796.774f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 4:
				*uParam1 = { 2795.744f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 5:
				*uParam1 = { 2794.708f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 6:
				*uParam1 = { 2793.685f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 7:
				*uParam1 = { 2792.657f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 8:
				*uParam1 = { 2791.618f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 9:
				*uParam1 = { 2790.59f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 10:
				*uParam1 = { 2799.913f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 11:
				*uParam1 = { 2798.89f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 12:
				*uParam1 = { 2797.817f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 13:
				*uParam1 = { 2796.821f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 14:
				*uParam1 = { 2795.784f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 15:
				*uParam1 = { 2794.75f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 16:
				*uParam1 = { 2793.711f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 17:
				*uParam1 = { 2792.696f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 18:
				*uParam1 = { 2791.635f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 19:
				*uParam1 = { 2790.644f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			}
	}
}

void func_167()
{
}

int func_168(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
		if (!func_110(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_158())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_156(157))
				{
					if (!bParam2)
					{
						func_2();
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
					func_2();
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
				func_2();
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
			func_2();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}
