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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
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
	int iLocal_64 = 0;
	struct<40> Local_65 = { 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0 } ;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	float fLocal_70 = 0f;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
	float fLocal_80 = 0f;
	float fLocal_81 = 0f;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	bool bLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88[4] = { 0, 0, 0, 0 };
	var uLocal_89[4] = { 0, 0, 0, 0 };
	var uLocal_90[4] = { 0, 0, 0, 0 };
	var uLocal_91[4] = { 0, 0, 0, 0 };
	var uLocal_92[4] = { 0, 0, 0, 0 };
	var uLocal_93[4] = { 0, 0, 0, 0 };
	var uLocal_94[4] = { 0, 0, 0, 0 };
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102[4] = { 0, 0, 0, 0 };
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 16;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
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
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132[3] = { 0, 0, 0 };
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	float fLocal_141 = 0f;
	bool bLocal_142 = 0;
	bool bLocal_143 = 0;
	float fLocal_144 = 0f;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	char* sLocal_149 = NULL;
	int iLocal_150 = 0;
	bool bLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	var uLocal_155 = 0;
	int iLocal_156 = 0;
	var uLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159[2] = { 0, 0 };
	int iLocal_160 = 0;
	var uLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	var uLocal_167 = 0;
	bool bLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	struct<3> Local_171 = { 0, 0, 0 } ;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_70 = 0.056f;
	fLocal_71 = 0.006f;
	fLocal_72 = 0.140625f;
	fLocal_73 = 0.3875f;
	fLocal_74 = 1f;
	fLocal_75 = 1f;
	fLocal_76 = 0.087f;
	fLocal_77 = 0.098f;
	fLocal_78 = 0.175f;
	fLocal_79 = 1f;
	fLocal_80 = 1f;
	fLocal_81 = 1.3333f;
	fLocal_82 = -0.106f;
	fLocal_83 = 0.635f;
	iLocal_101 = -1;
	iLocal_133 = -1;
	unk_0x51CC1333A10C4E09();
	func_899(&uLocal_106);
	func_898();
	while (true)
	{
		func_882(&uLocal_106);
		switch (iLocal_64)
		{
			case 0:
				func_881();
				break;
			
			case 1:
				func_16();
				break;
			
			case 2:
				func_1();
				break;
		}
		wait(0);
	}
}

void func_1()
{
	func_15();
	func_14();
	func_2(&uLocal_106);
	unk_0xBBC29EBE6E1A48FA();
}

void func_2(var uParam0)
{
	struct<16> Var0;
	
	if (BitTest(*uParam0, 3))
	{
		func_13(0, uParam0);
	}
	if (BitTest(*uParam0, 12))
	{
		func_10(uParam0);
	}
	if (uParam0->f_3)
	{
		Var0 = { func_8() };
		func_3(&Var0, 1);
		uParam0->f_3 = 0;
	}
}

void func_3(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_112288 && iParam1)
	{
		if (func_7(uParam0) && !unk_0xA5DAECD045AA8024())
		{
			unk_0x428C32CC68809A35(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_20412.f_145)
	{
		if (unk_0x1B79E937E91F40C3(uParam0, &(Global_113648.f_20412[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_113648.f_20412.f_145 - 2))
			{
				func_6(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_5((Global_113648.f_20412.f_145 - 1));
			Global_113648.f_20412.f_145 = (Global_113648.f_20412.f_145 - 1);
			func_4();
			return;
		}
		iVar0++;
	}
}

void func_4()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113648.f_20412.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_20412.f_145)
	{
		if (BitTest(Global_113648.f_20412[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[0])
			{
				Global_113648.f_20412.f_146[0] = Global_113648.f_20412[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113648.f_20412[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[1])
			{
				Global_113648.f_20412.f_146[1] = Global_113648.f_20412[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113648.f_20412[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[2])
			{
				Global_113648.f_20412.f_146[2] = Global_113648.f_20412[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_5(int iParam0)
{
	StringCopy(&(Global_113648.f_20412[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_113648.f_20412[iParam0 /*16*/].f_4), "", 16);
	Global_113648.f_20412[iParam0 /*16*/].f_8 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_9 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_11 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_10 = -1;
	Global_113648.f_20412[iParam0 /*16*/].f_12 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_13 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_14 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_15 = 0;
}

void func_6(int iParam0, int iParam1)
{
	Global_113648.f_20412[iParam0 /*16*/] = { Global_113648.f_20412[iParam1 /*16*/] };
	Global_113648.f_20412[iParam0 /*16*/].f_4 = { Global_113648.f_20412[iParam1 /*16*/].f_4 };
	Global_113648.f_20412[iParam0 /*16*/].f_8 = Global_113648.f_20412[iParam1 /*16*/].f_8;
	Global_113648.f_20412[iParam0 /*16*/].f_10 = Global_113648.f_20412[iParam1 /*16*/].f_10;
	Global_113648.f_20412[iParam0 /*16*/].f_9 = Global_113648.f_20412[iParam1 /*16*/].f_9;
	Global_113648.f_20412[iParam0 /*16*/].f_11 = Global_113648.f_20412[iParam1 /*16*/].f_11;
	Global_113648.f_20412[iParam0 /*16*/].f_12 = Global_113648.f_20412[iParam1 /*16*/].f_12;
	Global_113648.f_20412[iParam0 /*16*/].f_13 = Global_113648.f_20412[iParam1 /*16*/].f_13;
	Global_113648.f_20412[iParam0 /*16*/].f_14 = Global_113648.f_20412[iParam1 /*16*/].f_14;
	Global_113648.f_20412[iParam0 /*16*/].f_15 = Global_113648.f_20412[iParam1 /*16*/].f_15;
}

var func_7(var uParam0)
{
	unk_0x39DCBE5519BD783A(uParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

struct<16> func_8()
{
	return func_9("N_", "GE", "AP", "SW");
}

struct<16> func_9(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	struct<16> Var0;
	
	StringCopy(&Var0, sParam1, 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, sParam3, 64);
	StringConCat(&Var0, sParam2, 64);
	return Var0;
}

void func_10(var uParam0)
{
	unk_0x55098D9E9AD58806(func_12());
	unk_0x55098D9E9AD58806(func_11());
	unk_0x8744D2E3FC95740E(uParam0, 12);
}

int func_11()
{
	return joaat("ig_orleans");
}

int func_12()
{
	return joaat("mp_m_freemode_01");
}

void func_13(bool bParam0, var uParam1)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(uParam1, 3);
	}
	else
	{
		unk_0x8744D2E3FC95740E(uParam1, 3);
	}
	unk_0x8744D2E3FC95740E(uParam1, 29);
	unk_0x8744D2E3FC95740E(uParam1, 6);
	unk_0x8744D2E3FC95740E(uParam1, 30);
	unk_0x8744D2E3FC95740E(uParam1, 16);
	uParam1->f_1 = unk_0x1DD05E817C89C737() + 1000;
}

void func_14()
{
	if (iLocal_101 != -1)
	{
		unk_0x988DAD0F0370C94E(iLocal_101);
	}
	iLocal_101 = -1;
	sLocal_149 = "";
	iLocal_146 = 0;
	iLocal_147 = 0;
	iLocal_148 = 0;
}

void func_15()
{
	if (Global_23131)
	{
		iLocal_164 = 1;
		if (Global_23131.f_105 != -1 && Global_23131.f_106 == unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()))
		{
			unk_0x8E4825CCACA34B58(Global_23131.f_105);
			unk_0x394AFAC073E1F277(Global_23131.f_105);
			Global_23131.f_105 = -1;
			Global_23131.f_106 = 0;
			unk_0xCFBD89D2F1F18961("ActivateSwitchWheelAudio", 0);
		}
	}
	if (iLocal_158)
	{
		if (unk_0xC450B06E5AAA0985(uLocal_127))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_127);
		}
		unk_0x8128CB4AD398D07B(-1, -1, 1);
		unk_0x8349F3048B5A74C7(-1f, -1f);
		unk_0x69EA52C44C3F78D9(0);
		unk_0xEA2F24FFC9F29EDD(0);
		unk_0x33311EBA9464741D();
	}
	iLocal_158 = 0;
	iLocal_97 = 0;
	iLocal_140 = 0;
	iLocal_96 = -1;
	iLocal_103 = -1;
	iLocal_160 = 0;
	Global_23131.f_11 = 0;
	Global_23131.f_69 = -1;
	Global_23131.f_1 = 0;
	Global_23131.f_4 = 0;
	Global_23131.f_121 = 1;
	Global_23131.f_104 = 0;
}

void func_16()
{
	func_132();
	func_18();
	func_17();
}

void func_17()
{
	Global_23131.f_3 = 0;
	Global_23131.f_2 = 0;
	Global_23131.f_70 = 0;
	Global_23131.f_11 = 0;
	Global_23131.f_12 = 0;
	Global_23131.f_121 = 1;
	Global_23131.f_122 = 1;
	Global_23131.f_123 = 0;
	Global_23131.f_9 = 0;
	Global_23131.f_10 = 0;
	Global_23131.f_7 = 0;
	Global_23131.f_8 = 0;
	Global_23131.f_125 = 0;
	if (uLocal_161 && !Global_23131.f_6)
	{
	}
	uLocal_161 = Global_23131.f_6;
	Global_23131.f_6 = 0;
	if (uLocal_136 && !Global_23131.f_134)
	{
	}
	uLocal_136 = Global_23131.f_134;
	Global_23131.f_134 = 0;
	if (Global_23131.f_17)
	{
		if ((unk_0x1DD05E817C89C737() - Global_23131.f_18) > 5000 || unk_0x76CD105BCAC6EB9F())
		{
			Global_23131.f_17 = 0;
		}
	}
	bLocal_168 = Global_1836367;
	if (!unk_0x6D05C5731A838CB3(2, 19) && !unk_0x4465D55576678706(2, 19))
	{
		Global_23131.f_130 = 0;
	}
	if (!unk_0x6D05C5731A838CB3(2, 202) && !unk_0x4465D55576678706(2, 202))
	{
		Global_23131.f_131 = 0;
	}
	if (((!unk_0x6D05C5731A838CB3(2, 201) && !unk_0x4465D55576678706(2, 201)) && !unk_0x6D05C5731A838CB3(0, 144)) && !unk_0x4465D55576678706(0, 144))
	{
		Global_23131.f_132 = 0;
	}
	if (!unk_0x6D05C5731A838CB3(2, 203) && !unk_0x4465D55576678706(2, 203))
	{
		Global_23131.f_133 = 0;
	}
}

void func_18()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	int iVar8;
	char* sVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	int iVar13;
	float fVar14;
	struct<3> Var15;
	float fVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	var uVar21;
	float fVar22;
	float fVar23;
	int iVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	
	bVar0 = false;
	bVar1 = false;
	bVar2 = true;
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	iVar6 = 0;
	if (func_131(Global_23131.f_121) || func_130(Global_23131.f_121))
	{
		Global_23131.f_124 = func_117(1);
		if (Global_23131.f_124)
		{
			if (Global_23131.f_104 == 4)
			{
				iVar6 = 4;
			}
			else if (Global_23131.f_104 == 0)
			{
				iVar6 = 1;
			}
			else if (Global_23131.f_104 == 1)
			{
				if (((unk_0x76CD105BCAC6EB9F() && (unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(Global_23131.f_115, 300)) || unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_23131.f_115)) > 1300)) || ((!unk_0x76CD105BCAC6EB9F() && !Global_23131.f_12) && (unk_0x1DD05E817C89C737() - Global_23131.f_114) > 200)) || ((!unk_0x76CD105BCAC6EB9F() && Global_23131.f_12) && (unk_0x1DD05E817C89C737() - Global_23131.f_114) > 300))
				{
					iVar6 = 4;
				}
				else
				{
					iVar6 = 1;
				}
			}
			else if (Global_23131.f_104 == 2)
			{
				iVar6 = 3;
			}
			else if (Global_23131.f_104 == 3)
			{
				if ((unk_0x76CD105BCAC6EB9F() && (unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(Global_23131.f_115, 300)) || unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_23131.f_115)) > 1300)) || (!unk_0x76CD105BCAC6EB9F() && (unk_0x1DD05E817C89C737() - Global_23131.f_114) > 300))
				{
					iVar6 = 4;
				}
				else
				{
					iVar6 = 3;
				}
			}
		}
	}
	else if (Global_23131.f_12 && Global_23131.f_70)
	{
		Global_23131.f_124 = func_117(0);
		if (Global_23131.f_124)
		{
			iVar6 = 2;
		}
	}
	else if (Global_23131.f_126)
	{
		Global_23131.f_124 = 1;
		iVar6 = 5;
		iLocal_102[func_116(0)] = 0;
		iLocal_102[func_116(2)] = 1;
		iLocal_102[func_116(1)] = 2;
		iLocal_102[func_116(3)] = 3;
		if (iLocal_103 != Global_23131.f_127)
		{
			Global_23131.f_3 = 1;
			Global_23131.f_129 = unk_0x1DD05E817C89C737();
			iLocal_105 = 0;
		}
		if (Global_23131.f_4)
		{
			if (!iLocal_105)
			{
				iLocal_104 = unk_0x1DD05E817C89C737();
				iLocal_105 = 1;
			}
			if ((unk_0x1DD05E817C89C737() - iLocal_104) > 500)
			{
				Global_23131.f_126 = 0;
			}
		}
		else
		{
			if ((unk_0x1DD05E817C89C737() - Global_23131.f_129) > 2000)
			{
				Global_23131.f_126 = 0;
			}
			iLocal_105 = 0;
		}
	}
	else
	{
		Global_23131.f_124 = 0;
	}
	if (Global_23131.f_124)
	{
		iLocal_164 = 0;
	}
	if ((iVar6 == 0 && Global_23131.f_7) || Global_23131.f_9)
	{
		iVar6 = 1;
	}
	if (Global_23131.f_104 != iVar6)
	{
		if (((iLocal_97 != Global_23131.f_11 && Global_23131.f_69 != 2) && Global_23131.f_12) && !Global_78558)
		{
			Global_23131.f_13 = 1;
		}
		Global_23131.f_14 = 0;
		if (unk_0x76CD105BCAC6EB9F())
		{
			Global_23131.f_115 = unk_0x7E3F74F641EE6B27();
		}
		else
		{
			Global_23131.f_114 = unk_0x1DD05E817C89C737();
		}
		if (iVar6 != 5)
		{
			Global_23131.f_126 = 0;
		}
		Global_23131.f_3 = 1;
	}
	if ((Global_23131.f_124 || (iLocal_87 && !iLocal_164)) || Global_23131.f_7)
	{
		if (!Global_23131.f_9)
		{
			if (!unk_0x7B035E8A1D320F1B(7))
			{
				unk_0x4EB223432F8FA0A0(7);
			}
			if (!unk_0x7B035E8A1D320F1B(6))
			{
				unk_0x4EB223432F8FA0A0(6);
			}
			if (!unk_0x7B035E8A1D320F1B(8))
			{
				unk_0x4EB223432F8FA0A0(8);
			}
			if (!unk_0x7B035E8A1D320F1B(9))
			{
				unk_0x4EB223432F8FA0A0(9);
			}
		}
		func_115();
		func_102();
		func_99(&sVar7, 0);
	}
	if (Global_23131)
	{
		if ((!Global_23131.f_1 && iVar6 != 1) && iVar6 != 0)
		{
			func_70();
			iVar8 = 0;
			while (iVar8 <= 3)
			{
				uLocal_88[iVar8] = Global_23131.f_19[iVar8];
				uLocal_89[iVar8] = Global_23131.f_24[iVar8];
				uLocal_90[iVar8] = Global_23131.f_29[iVar8];
				uLocal_93[iVar8] = Global_23131.f_54[iVar8];
				uLocal_94[iVar8] = Global_23131.f_59[iVar8];
				iVar8++;
			}
			uLocal_91[0] = Global_23131.f_34[0];
			uLocal_91[1] = Global_23131.f_34[1];
			uLocal_91[2] = Global_23131.f_34[2];
			uLocal_91[3] = Global_23131.f_34[3];
			uLocal_92[0] = Global_23131.f_49[0];
			uLocal_92[1] = Global_23131.f_49[1];
			uLocal_92[2] = Global_23131.f_49[2];
			uLocal_92[3] = Global_23131.f_49[3];
			iLocal_98 = 0;
			iLocal_95 = -1;
			iLocal_140 = 0;
			Global_23131.f_1 = 1;
			Global_23131.f_15 = 1;
			Global_23131.f_3 = 1;
		}
		if (Global_23131.f_1 || iVar6 == 0)
		{
			if (iVar6 == 2 || iVar6 == 3)
			{
				iVar8 = 0;
				while (iVar8 <= 3)
				{
					if (((uLocal_88[iVar8] != Global_23131.f_19[iVar8] || uLocal_89[iVar8] != Global_23131.f_24[iVar8]) || uLocal_90[iVar8] != Global_23131.f_29[iVar8]) || Global_23131.f_3)
					{
						unk_0x88F483FBD433696A(iLocal_84, "SET_SWITCH_SLOT");
						unk_0x330108B080A2132F(iVar8);
						if (Global_23131.f_19[iVar8] == 1 && Global_23131.f_29[iVar8] != 1)
						{
							unk_0x330108B080A2132F(1);
						}
						else
						{
							unk_0x330108B080A2132F(3);
						}
						unk_0x330108B080A2132F(Global_23131.f_24[iVar8]);
						unk_0x557F1E2300EF1A3E(false);
						unk_0xE6B753D52F4CA222();
						uLocal_88[iVar8] = Global_23131.f_19[iVar8];
						uLocal_89[iVar8] = Global_23131.f_24[iVar8];
						uLocal_90[iVar8] = Global_23131.f_29[iVar8];
						bVar3 = true;
					}
					if ((uLocal_93[iVar8] != Global_23131.f_54[iVar8] || uLocal_94[iVar8] != Global_23131.f_59[iVar8]) || Global_23131.f_3)
					{
						unk_0x88F483FBD433696A(iLocal_84, "SET_PLAYER_DAMAGE");
						unk_0x330108B080A2132F(func_116(iVar8));
						unk_0x557F1E2300EF1A3E(Global_23131.f_54[iVar8]);
						unk_0x557F1E2300EF1A3E(Global_23131.f_59[iVar8]);
						unk_0xE6B753D52F4CA222();
						uLocal_93[iVar8] = Global_23131.f_54[iVar8];
						uLocal_94[iVar8] = Global_23131.f_59[iVar8];
					}
					if (uLocal_92[iVar8] != Global_23131.f_49[iVar8] || Global_23131.f_3)
					{
						bVar4 = true;
					}
					if (uLocal_91[iVar8] != Global_23131.f_34[iVar8] || Global_23131.f_3)
					{
						bVar3 = true;
					}
					iVar8++;
				}
				if (bVar4)
				{
					unk_0x88F483FBD433696A(iLocal_84, "SET_SWITCH_HINTED_ALL");
					unk_0x557F1E2300EF1A3E(Global_23131.f_49[func_69(0)]);
					unk_0x557F1E2300EF1A3E(Global_23131.f_49[func_69(1)]);
					unk_0x557F1E2300EF1A3E(Global_23131.f_49[func_69(2)]);
					unk_0x557F1E2300EF1A3E(Global_23131.f_49[func_69(3)]);
					unk_0xE6B753D52F4CA222();
					uLocal_92[0] = Global_23131.f_49[0];
					uLocal_92[1] = Global_23131.f_49[1];
					uLocal_92[2] = Global_23131.f_49[2];
					uLocal_92[3] = Global_23131.f_49[3];
					bVar4 = false;
				}
				if (bVar3)
				{
					unk_0x88F483FBD433696A(iLocal_84, "SET_SWITCH_COUNTER_ALL");
					unk_0x330108B080A2132F(Global_23131.f_34[func_69(0)]);
					unk_0x330108B080A2132F(Global_23131.f_34[func_69(1)]);
					unk_0x330108B080A2132F(Global_23131.f_34[func_69(2)]);
					unk_0x330108B080A2132F(Global_23131.f_34[func_69(3)]);
					unk_0xE6B753D52F4CA222();
					uLocal_91[0] = Global_23131.f_34[0];
					uLocal_91[1] = Global_23131.f_34[1];
					uLocal_91[2] = Global_23131.f_34[2];
					uLocal_91[3] = Global_23131.f_34[3];
					bVar3 = false;
				}
				if (iLocal_98 != Global_23131.f_124 || Global_23131.f_3)
				{
					unk_0x88F483FBD433696A(iLocal_84, "SET_SWITCH_VISIBLE");
					unk_0x330108B080A2132F(1);
					unk_0xE6B753D52F4CA222();
					unk_0x88F483FBD433696A(iLocal_84, "SET_PLAYER_SELECTED");
					unk_0x330108B080A2132F(-1);
					unk_0xE6B753D52F4CA222();
					iLocal_95 = -1;
					iLocal_140 = 0;
					iLocal_98 = Global_23131.f_124;
				}
			}
			else if (iVar6 == 4)
			{
				iVar8 = 0;
				while (iVar8 <= 3)
				{
					if (((uLocal_88[iVar8] != Global_23131.f_19[iVar8] || uLocal_89[iVar8] != Global_23131.f_24[iVar8]) || uLocal_90[iVar8] != Global_23131.f_29[iVar8]) || Global_23131.f_3)
					{
						unk_0x88F483FBD433696A(iLocal_84, "SET_SWITCH_SLOT");
						unk_0x330108B080A2132F(iVar8);
						unk_0x330108B080A2132F(Global_23131.f_19[iVar8]);
						unk_0x330108B080A2132F(Global_23131.f_24[iVar8]);
						unk_0x557F1E2300EF1A3E(Global_23131.f_29[iVar8] == 1);
						unk_0xE6B753D52F4CA222();
						uLocal_88[iVar8] = Global_23131.f_19[iVar8];
						uLocal_89[iVar8] = Global_23131.f_24[iVar8];
						uLocal_90[iVar8] = Global_23131.f_29[iVar8];
					}
					if ((uLocal_93[iVar8] != Global_23131.f_54[iVar8] || uLocal_94[iVar8] != Global_23131.f_59[iVar8]) || Global_23131.f_3)
					{
						unk_0x88F483FBD433696A(iLocal_84, "SET_PLAYER_DAMAGE");
						unk_0x330108B080A2132F(func_116(iVar8));
						unk_0x557F1E2300EF1A3E(Global_23131.f_54[iVar8]);
						unk_0x557F1E2300EF1A3E(Global_23131.f_59[iVar8]);
						unk_0xE6B753D52F4CA222();
						uLocal_93[iVar8] = Global_23131.f_54[iVar8];
						uLocal_94[iVar8] = Global_23131.f_59[iVar8];
					}
					if (uLocal_92[iVar8] != Global_23131.f_49[iVar8] || Global_23131.f_3)
					{
						bVar4 = true;
					}
					if (uLocal_91[iVar8] != Global_23131.f_34[iVar8] || Global_23131.f_3)
					{
						bVar3 = true;
					}
					iVar8++;
				}
				if (bVar4)
				{
					unk_0x88F483FBD433696A(iLocal_84, "SET_SWITCH_HINTED_ALL");
					unk_0x557F1E2300EF1A3E(Global_23131.f_49[func_69(0)]);
					unk_0x557F1E2300EF1A3E(Global_23131.f_49[func_69(1)]);
					unk_0x557F1E2300EF1A3E(Global_23131.f_49[func_69(2)]);
					unk_0x557F1E2300EF1A3E(Global_23131.f_49[func_69(3)]);
					unk_0xE6B753D52F4CA222();
					uLocal_92[0] = Global_23131.f_49[0];
					uLocal_92[1] = Global_23131.f_49[1];
					uLocal_92[2] = Global_23131.f_49[2];
					uLocal_92[3] = Global_23131.f_49[3];
					bVar4 = false;
				}
				if (bVar3)
				{
					unk_0x88F483FBD433696A(iLocal_84, "SET_SWITCH_COUNTER_ALL");
					unk_0x330108B080A2132F(Global_23131.f_34[func_69(0)]);
					unk_0x330108B080A2132F(Global_23131.f_34[func_69(1)]);
					unk_0x330108B080A2132F(Global_23131.f_34[func_69(2)]);
					unk_0x330108B080A2132F(Global_23131.f_34[func_69(3)]);
					unk_0xE6B753D52F4CA222();
					uLocal_91[0] = Global_23131.f_34[0];
					uLocal_91[1] = Global_23131.f_34[1];
					uLocal_91[2] = Global_23131.f_34[2];
					uLocal_91[3] = Global_23131.f_34[3];
					bVar3 = false;
				}
				if (iLocal_146 && !iLocal_147)
				{
					if (func_68(14))
					{
						unk_0x88F483FBD433696A(iLocal_84, "SET_MULTIPLAYER_HEAD");
						unk_0x3585BEBEDC67FCC7("director");
						unk_0xE6B753D52F4CA222();
					}
					else if ((((((!func_68(0) && !func_68(3)) && !func_68(2)) && !func_68(4)) && !func_68(9)) && !func_68(10)) && !func_67(0))
					{
						unk_0x88F483FBD433696A(iLocal_84, "SET_MULTIPLAYER_HEAD");
						unk_0x3585BEBEDC67FCC7(sLocal_149);
						unk_0xE6B753D52F4CA222();
					}
					iLocal_147 = 1;
				}
				if (iLocal_98 != Global_23131.f_124 || Global_23131.f_3)
				{
					if (Global_23131.f_124)
					{
						unk_0x88F483FBD433696A(iLocal_84, "SET_SWITCH_VISIBLE");
						unk_0x330108B080A2132F(1);
						unk_0xE6B753D52F4CA222();
						if (iLocal_95 == -1)
						{
							iLocal_140 = 0;
						}
						else
						{
							iLocal_140 = 1;
						}
					}
					else
					{
						unk_0x88F483FBD433696A(iLocal_84, "SET_SWITCH_VISIBLE");
						unk_0x330108B080A2132F(0);
						unk_0xE6B753D52F4CA222();
						unk_0x88F483FBD433696A(iLocal_84, "SET_PLAYER_SELECTED");
						unk_0x330108B080A2132F(-1);
						unk_0xE6B753D52F4CA222();
						iLocal_95 = -1;
						iLocal_140 = 0;
					}
					iLocal_98 = Global_23131.f_124;
				}
				if ((iLocal_154 || uLocal_155) || Global_23131.f_3)
				{
					func_99(&sVar9, 1);
					unk_0x88F483FBD433696A(iLocal_84, "SET_MP_LABEL");
					unk_0xCE3E870AC37B4253(&sVar9);
					unk_0xE6B753D52F4CA222();
					iLocal_154 = 0;
					iLocal_156 = unk_0x1DD05E817C89C737();
					if (unk_0x76CD105BCAC6EB9F())
					{
						uLocal_157 = unk_0x7E3F74F641EE6B27();
					}
				}
				else if ((unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_157, 1000))) || (!unk_0x76CD105BCAC6EB9F() && (unk_0x1DD05E817C89C737() - iLocal_156) > 1000))
				{
					iLocal_154 = 1;
				}
				unk_0x4CC1CF98851922CE(0, 12);
				unk_0x4CC1CF98851922CE(0, 13);
				fVar10 = unk_0xF069618D9974EB9D(0, 12);
				fVar11 = unk_0xF069618D9974EB9D(0, 13);
				bVar12 = true;
				iVar13 = -1;
				if (unk_0x761778199FE1211C())
				{
					if (unk_0x4465D55576678706(0, 166))
					{
						fVar10 = 0f;
						fVar11 = -1f;
						Global_23131.f_69 = 3;
						Global_23131.f_14 = 1;
					}
					else if (unk_0x4465D55576678706(0, 167))
					{
						fVar10 = -1f;
						fVar11 = 0f;
						Global_23131.f_69 = 0;
						Global_23131.f_14 = 1;
					}
					else if (unk_0x4465D55576678706(0, 168))
					{
						fVar10 = 0f;
						fVar11 = 1f;
						Global_23131.f_69 = 1;
						Global_23131.f_14 = 1;
					}
					else if (unk_0x4465D55576678706(0, 169))
					{
						fVar10 = 1f;
						fVar11 = 0f;
						Global_23131.f_69 = 2;
						Global_23131.f_14 = 1;
					}
				}
				if (unk_0xED977E2AE2CB16EE(0f, 0f, 0f, fVar11, fVar10, 0f, 1) <= 0.3f)
				{
					bVar12 = false;
					Global_23131.f_15 = 0;
				}
				if (bVar12)
				{
					fVar14 = 90f;
					Var15 = { func_66(fVar11, fVar10, 0f) };
					fVar16 = unk_0x20A3B1C2EC4167BB(0f, -1f, Var15.f_0, Var15.f_1);
					if (fVar11 < 0f)
					{
						fVar16 = (360f - fVar16);
					}
					if ((fVar16 >= 0f && fVar16 <= (0f + (fVar14 / 2f))) || (fVar16 >= (360f - (fVar14 / 2f)) && fVar16 <= 360f))
					{
						iVar13 = 0;
					}
					else if (fVar16 >= (90f - (fVar14 / 2f)) && fVar16 <= (90f + (fVar14 / 2f)))
					{
						iVar13 = 1;
					}
					else if (fVar16 >= (180f - (fVar14 / 2f)) && fVar16 <= (180f + (fVar14 / 2f)))
					{
						iVar13 = 2;
					}
					else if (fVar16 >= (270f - (fVar14 / 2f)) && fVar16 <= (270f + (fVar14 / 2f)))
					{
						iVar13 = 3;
					}
				}
				if (((bVar12 && Global_23131.f_15) && iLocal_96 == -1) && Global_23131.f_69 != -1)
				{
					iLocal_96 = iVar13;
				}
				if (iLocal_96 != -1 && iVar13 != iLocal_96)
				{
					Global_23131.f_15 = 0;
				}
				if (bVar12 && !Global_23131.f_15)
				{
					Global_23131.f_69 = iVar13;
					Global_23131.f_14 = 1;
				}
				if (iLocal_95 != Global_23131.f_69)
				{
					if (!Global_23131.f_111)
					{
						if (!unk_0x76CD105BCAC6EB9F() || iLocal_95 != -1)
						{
							unk_0x85E83A170EF61477(-1, "CHARACTER_CHANGE_CHARACTER_01_MASTER", 0, 0, 0, 0);
						}
					}
				}
				if (iLocal_95 != Global_23131.f_69 || Global_23131.f_3)
				{
					unk_0x88F483FBD433696A(iLocal_84, "SET_PLAYER_SELECTED");
					unk_0x330108B080A2132F(Global_23131.f_69);
					unk_0xE6B753D52F4CA222();
					iLocal_95 = Global_23131.f_69;
					func_70();
					iLocal_140 = 0;
					if ((((iLocal_95 != -1 && (Global_23131.f_19[iLocal_95] != 3 || iLocal_95 == 2)) && Global_23131.f_24[iLocal_95] != 4) && Global_23131.f_24[iLocal_95] != 5) && Global_23131.f_24[iLocal_95] != 6)
					{
						if (iLocal_95 == 0)
						{
							iLocal_140 = 1;
						}
						else if (iLocal_95 == 1)
						{
							iLocal_140 = 1;
						}
						else if (iLocal_95 == 2)
						{
							if (unk_0x76CD105BCAC6EB9F() || !func_68(14))
							{
								iLocal_140 = 1;
							}
						}
						else if (iLocal_95 == 3)
						{
							iLocal_140 = 1;
						}
					}
				}
				if (iLocal_97 != Global_23131.f_11)
				{
					iLocal_97 = Global_23131.f_11;
					if (Global_23131.f_105 != -1 && Global_23131.f_106 == unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()))
					{
						unk_0x8E4825CCACA34B58(Global_23131.f_105);
						unk_0x394AFAC073E1F277(Global_23131.f_105);
						Global_23131.f_105 = -1;
						Global_23131.f_106 = 0;
					}
					if (Global_23131.f_112)
					{
						unk_0x21172E4DF035B893("SwitchHUDMichaelIn");
						unk_0x21172E4DF035B893("SwitchHUDFranklinIn");
						unk_0x21172E4DF035B893("SwitchHUDTrevorIn");
						unk_0x21172E4DF035B893("SwitchHUDIn");
						switch (func_61())
						{
							case 0:
								if (!unk_0x47CB3D397940E783("SwitchOpenMichaelIn") && !unk_0x47CB3D397940E783("SwitchShortMichaelIn"))
								{
									unk_0xDCAFFD08A08087EB("SwitchHUDMichaelOut", 0, 0);
								}
								break;
							
							case 1:
								if (!unk_0x47CB3D397940E783("SwitchOpenFranklinIn") && !unk_0x47CB3D397940E783("SwitchShortFranklinIn"))
								{
									unk_0xDCAFFD08A08087EB("SwitchHUDFranklinOut", 0, 0);
								}
								break;
							
							case 2:
								if (!unk_0x47CB3D397940E783("SwitchOpenTrevorIn") && !unk_0x47CB3D397940E783("SwitchShortTrevorIn"))
								{
									unk_0xDCAFFD08A08087EB("SwitchHUDTrevorOut", 0, 0);
								}
								break;
							
							default:
								unk_0xDCAFFD08A08087EB("SwitchHUDOut", 0, 0);
								break;
						}
						unk_0xCFBD89D2F1F18961("ActivateSwitchWheelAudio", 0);
						Global_23131.f_112 = 0;
					}
				}
			}
			else if (iVar6 == 5)
			{
				iVar8 = 0;
				while (iVar8 <= 3)
				{
					if (Global_23131.f_3)
					{
						unk_0x88F483FBD433696A(iLocal_84, "SET_SWITCH_SLOT");
						unk_0x330108B080A2132F(iVar8);
						if (Global_23131.f_127 == iVar8)
						{
							unk_0x330108B080A2132F(1);
							unk_0x330108B080A2132F(iLocal_102[iVar8]);
							unk_0x557F1E2300EF1A3E(true);
						}
						else
						{
							unk_0x330108B080A2132F(3);
							unk_0x330108B080A2132F(iLocal_102[iVar8]);
							unk_0x557F1E2300EF1A3E(false);
						}
						unk_0xE6B753D52F4CA222();
						unk_0x88F483FBD433696A(iLocal_84, "SET_PLAYER_DAMAGE");
						unk_0x330108B080A2132F(func_116(iVar8));
						unk_0x557F1E2300EF1A3E(false);
						unk_0x557F1E2300EF1A3E(false);
						unk_0xE6B753D52F4CA222();
					}
					iVar8++;
				}
				if (Global_23131.f_3)
				{
					unk_0x88F483FBD433696A(iLocal_84, "SET_SWITCH_HINTED_ALL");
					unk_0x557F1E2300EF1A3E(false);
					unk_0x557F1E2300EF1A3E(false);
					unk_0x557F1E2300EF1A3E(false);
					unk_0x557F1E2300EF1A3E(false);
					unk_0xE6B753D52F4CA222();
					unk_0x88F483FBD433696A(iLocal_84, "SET_SWITCH_COUNTER_ALL");
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(0);
					unk_0xE6B753D52F4CA222();
					unk_0x88F483FBD433696A(iLocal_84, "SET_SWITCH_VISIBLE");
					unk_0x330108B080A2132F(1);
					unk_0xE6B753D52F4CA222();
					unk_0x88F483FBD433696A(iLocal_84, "SET_PLAYER_SELECTED");
					unk_0x330108B080A2132F(Global_23131.f_127);
					unk_0xE6B753D52F4CA222();
					iLocal_103 = Global_23131.f_127;
					iLocal_95 = -1;
					iLocal_140 = 0;
					iLocal_98 = Global_23131.f_124;
				}
			}
			else if (iVar6 == 0)
			{
				unk_0x88F483FBD433696A(iLocal_84, "SET_SWITCH_VISIBLE");
				unk_0x330108B080A2132F(0);
				unk_0xE6B753D52F4CA222();
				unk_0x88F483FBD433696A(iLocal_84, "SET_PLAYER_SELECTED");
				unk_0x330108B080A2132F(-1);
				unk_0xE6B753D52F4CA222();
				iLocal_95 = -1;
				iLocal_140 = 0;
				if (((((((!unk_0x761778199FE1211C() && func_60() != 0) && func_60() != 2) && !unk_0x3555462DB47B7AB1()) && !func_59()) && !func_58()) && !func_57(unk_0x4A8C381C258A124D())) && Global_23131.f_104 != 5)
				{
					unk_0x0EE2019295C31BBA(6);
					unk_0x0EE2019295C31BBA(7);
					unk_0x0EE2019295C31BBA(8);
					unk_0x0EE2019295C31BBA(9);
				}
				func_15();
				func_14();
			}
			else if (iVar6 == 1)
			{
			}
		}
		Global_23131.f_104 = iVar6;
	}
	if (Global_23131 && Global_23131.f_1)
	{
		if (Global_23131.f_104 == 4)
		{
			if (Global_23131.f_4)
			{
				if (!Global_23131.f_111)
				{
					if (Global_23131.f_105 == -1)
					{
						Global_23131.f_105 = unk_0xCA369FBC0DE29517();
						Global_23131.f_106 = unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6());
						if (unk_0x76CD105BCAC6EB9F())
						{
							unk_0x85E83A170EF61477(Global_23131.f_105, "CHARACTER_CHANGE_DPAD_DOWN_MP_MASTER", 0, 0, 0, 0);
						}
						else
						{
							unk_0x85E83A170EF61477(Global_23131.f_105, "CHARACTER_CHANGE_DPAD_DOWN_MASTER", 0, 0, 0, 0);
						}
					}
				}
				if (!Global_23131.f_112)
				{
					switch (func_61())
					{
						case 0:
							unk_0xDCAFFD08A08087EB("SwitchHUDMichaelIn", 0, 0);
							break;
						
						case 1:
							unk_0xDCAFFD08A08087EB("SwitchHUDFranklinIn", 0, 0);
							break;
						
						case 2:
							unk_0xDCAFFD08A08087EB("SwitchHUDTrevorIn", 0, 0);
							break;
						
						default:
							unk_0xDCAFFD08A08087EB("SwitchHUDIn", 0, 0);
							break;
					}
					unk_0xCFBD89D2F1F18961("ActivateSwitchWheelAudio", 1);
					Global_23131.f_112 = 1;
				}
			}
		}
		else if (Global_23131.f_104 == 2)
		{
			iVar5 = 1;
		}
		if (Global_23131.f_124)
		{
			if (Global_23131.f_104 == 4)
			{
				bLocal_143 = true;
				bVar0 = true;
				if (iLocal_140 && !bLocal_86)
				{
					if (unk_0x76CD105BCAC6EB9F())
					{
						bVar1 = true;
					}
					else if (Global_23131.f_69 == 0)
					{
						if (BitTest(Global_113648.f_9087.f_2[27 /*3*/], 2) || !BitTest(Global_113648.f_9087.f_2[27 /*3*/], 1))
						{
							bVar1 = true;
						}
					}
					else if (Global_23131.f_69 == 1)
					{
						if (BitTest(Global_113648.f_9087.f_2[27 /*3*/], 2) || !BitTest(Global_113648.f_9087.f_2[27 /*3*/], 1))
						{
							bVar1 = true;
						}
					}
					else if (Global_23131.f_69 == 2)
					{
						if ((((((((!func_68(0) && !func_68(3)) && !func_68(2)) && !func_68(4)) && !func_68(9)) && !func_68(10)) && !func_67(0)) && func_54()) && func_50(func_53()))
						{
							bVar1 = true;
						}
					}
					else if (Global_23131.f_69 == 3)
					{
						if (BitTest(Global_113648.f_9087.f_2[27 /*3*/], 2) || !BitTest(Global_113648.f_9087.f_2[27 /*3*/], 1))
						{
							bVar1 = true;
						}
					}
					if (func_68(14))
					{
						bVar1 = false;
					}
					if (bVar1)
					{
						if (unk_0x485ADB2D2728D748())
						{
							unk_0xD46356460DA60CB1(3);
						}
						unk_0x9A122D542F2BB60E(82, 66);
						unk_0x9C066F8D86A1A438(0f, 0f, 0f, 0f);
						func_49(&fLocal_70);
						if (!bLocal_151)
						{
							unk_0x6D16B99FEB0AFFF1(iLocal_85, (fLocal_70 + (((fLocal_72 * fLocal_74) * fLocal_81) * 0.5f)), fLocal_71, ((fLocal_72 * fLocal_74) * fLocal_81), (fLocal_73 * fLocal_75), 255, 255, 255, 255, 0);
						}
						unk_0x90B531766063C5CD();
						if (Global_23131.f_69 == 0)
						{
							iVar17 = 1;
						}
						else if (Global_23131.f_69 == 1)
						{
							iVar17 = 2;
						}
						else if (Global_23131.f_69 == 2)
						{
							iVar17 = 3;
						}
						else if (Global_23131.f_69 == 3)
						{
							iVar17 = 0;
						}
						if (!func_48(Global_23131.f_81[iVar17 /*3*/], 0f, 0f, 0f, 0) && !Global_23131.f_8)
						{
							if (!unk_0xC450B06E5AAA0985(uLocal_127))
							{
								uLocal_127 = unk_0x34864AB7DA700AA6(Global_23131.f_81[iVar17 /*3*/]);
								unk_0x61183D6239A9D7B8(uLocal_127, 3);
							}
							unk_0xDABC73EF230B6665(uLocal_127, Global_23131.f_81[iVar17 /*3*/]);
							if (Global_23131.f_71[iVar17] == -1)
							{
								unk_0x8128CB4AD398D07B(-1, -1, 1);
								unk_0x8349F3048B5A74C7(-1f, -1f);
								unk_0x69EA52C44C3F78D9(0);
								unk_0xEA2F24FFC9F29EDD(0);
							}
							else
							{
								unk_0x69EA52C44C3F78D9(unk_0x3C8EDE4003ABACA0(unk_0x4A8C381C258A124D()));
								unk_0xEA2F24FFC9F29EDD(100);
								unk_0x8128CB4AD398D07B(floor((to_float(unk_0x3C8EDE4003ABACA0(unk_0x4A8C381C258A124D())) * (to_float(Global_23131.f_71[iVar17]) / 100f))), Global_23131.f_76[iVar17], 1);
								unk_0x8349F3048B5A74C7(to_float(Global_23131.f_94[iVar17]), to_float(Global_23131.f_99[iVar17]));
							}
							unk_0x43F4B7E163A31644(Global_23131.f_81[iVar17 /*3*/], Global_23131.f_81[iVar17 /*3*/].f_1);
							iLocal_158 = 1;
							bVar2 = false;
						}
					}
				}
				func_47();
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (func_46(func_61()))
					{
						if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
						{
							unk_0xF064FD8FB64821D1(unk_0x259BE71D8A81D4FA(), 0);
						}
					}
				}
				if (Global_23131.f_4)
				{
					if (!func_68(14))
					{
						if (func_45() != 53)
						{
							unk_0x0EE2019295C31BBA(3);
						}
						unk_0x0EE2019295C31BBA(2);
					}
				}
				if ((!unk_0x76CD105BCAC6EB9F() && !unk_0xD6F9DEE4765092A9(&Global_63377)) && !unk_0x4C705AAF75363287())
				{
					if (((func_68(0) || func_68(2)) || func_68(3)) || func_68(4))
					{
						if (Global_23131.f_4)
						{
							unk_0x9A122D542F2BB60E(82, 66);
							unk_0x9C066F8D86A1A438(fLocal_82, 0f, 0f, 0f);
							unk_0xBFE94E91C83D8794(0.67f, 0.67f);
							unk_0x8413CD3BCEEAD8DC(1);
							unk_0x2873B596E322DCDA(2);
							switch (func_61())
							{
								case 0:
									unk_0xA306E6FD2A6558E6(143, &iVar18, &iVar19, &iVar20, &uVar21);
									break;
								
								case 1:
									unk_0xA306E6FD2A6558E6(144, &iVar18, &iVar19, &iVar20, &uVar21);
									break;
								
								case 2:
									unk_0xA306E6FD2A6558E6(145, &iVar18, &iVar19, &iVar20, &uVar21);
									break;
								
								default:
									iVar18 = 240;
									iVar19 = 200;
									iVar20 = 80;
									break;
							}
							unk_0x5A18938160AE52D0(iVar18, iVar19, iVar20, uVar21);
							unk_0x2B50C29142312934();
							unk_0xEAEB6E7D3FAEBD5B(&Global_63377);
							unk_0x25DD447A6EB3A86F(fLocal_82, fLocal_83, 0);
							unk_0x90B531766063C5CD();
						}
					}
				}
				unk_0x4EB223432F8FA0A0(6);
				unk_0x4EB223432F8FA0A0(7);
				unk_0x4EB223432F8FA0A0(8);
				unk_0x4EB223432F8FA0A0(9);
				unk_0x4EB223432F8FA0A0(15);
				unk_0xD46356460DA60CB1(3);
				unk_0x9A122D542F2BB60E(82, 66);
				unk_0x9C066F8D86A1A438(0f, 0f, 0f, 0f);
				if (!bLocal_151)
				{
					unk_0x6D16B99FEB0AFFF1(iLocal_84, (((fLocal_77 * fLocal_79) * fLocal_81) * 0.5f), fLocal_76, ((fLocal_77 * fLocal_79) * fLocal_81), (fLocal_78 * fLocal_80), 255, 255, 255, 255, 0);
				}
				unk_0x90B531766063C5CD();
				Global_23131.f_4 = 1;
			}
			else if ((Global_23131.f_104 == 2 || Global_23131.f_104 == 3) || Global_23131.f_104 == 5)
			{
				unk_0x4EB223432F8FA0A0(6);
				unk_0x4EB223432F8FA0A0(7);
				unk_0x4EB223432F8FA0A0(8);
				unk_0x4EB223432F8FA0A0(9);
				unk_0xD46356460DA60CB1(3);
				unk_0x9A122D542F2BB60E(82, 66);
				unk_0x9C066F8D86A1A438(0f, 0f, 0f, 0f);
				if (!bLocal_151)
				{
					unk_0x6D16B99FEB0AFFF1(iLocal_84, (((fLocal_77 * fLocal_79) * fLocal_81) * 0.5f), fLocal_76, ((fLocal_77 * fLocal_79) * fLocal_81), (fLocal_78 * fLocal_80), 255, 255, 255, 255, 0);
				}
				unk_0x90B531766063C5CD();
				Global_23131.f_4 = 1;
			}
		}
	}
	if (Global_23131.f_104 != 4)
	{
		if (Global_23131.f_105 != -1 && Global_23131.f_106 == unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()))
		{
			unk_0x8E4825CCACA34B58(Global_23131.f_105);
			unk_0x394AFAC073E1F277(Global_23131.f_105);
			Global_23131.f_105 = -1;
			Global_23131.f_106 = 0;
		}
	}
	if (Global_23131.f_4 && Global_23131.f_104 == 4)
	{
		unk_0xED8161DA7D783683(1);
	}
	else
	{
		unk_0xED8161DA7D783683(0);
	}
	if (!bVar0)
	{
		if (unk_0x3555462DB47B7AB1())
		{
			bVar0 = true;
			bLocal_143 = false;
			if (unk_0x1403FEB4554982F8() == 3)
			{
				bVar0 = false;
			}
			else if (unk_0x6D231A0D52134FC1() > 3)
			{
				bVar0 = false;
			}
		}
	}
	if (!bVar0)
	{
		if (Global_23131.f_112)
		{
			unk_0x21172E4DF035B893("SwitchHUDMichaelIn");
			unk_0x21172E4DF035B893("SwitchHUDFranklinIn");
			unk_0x21172E4DF035B893("SwitchHUDTrevorIn");
			unk_0x21172E4DF035B893("SwitchHUDIn");
			unk_0xCFBD89D2F1F18961("ActivateSwitchWheelAudio", 0);
			if (Global_23131.f_113)
			{
			}
			else if (bLocal_143)
			{
				switch (func_61())
				{
					case 0:
						if (!unk_0x47CB3D397940E783("SwitchOpenMichaelIn") && !unk_0x47CB3D397940E783("SwitchShortMichaelIn"))
						{
							unk_0xDCAFFD08A08087EB("SwitchHUDMichaelOut", 0, 0);
						}
						break;
					
					case 1:
						if (!unk_0x47CB3D397940E783("SwitchOpenFranklinIn") && !unk_0x47CB3D397940E783("SwitchShortFranklinIn"))
						{
							unk_0xDCAFFD08A08087EB("SwitchHUDFranklinOut", 0, 0);
						}
						break;
					
					case 2:
						if (!unk_0x47CB3D397940E783("SwitchOpenTrevorIn") && !unk_0x47CB3D397940E783("SwitchShortTrevorIn"))
						{
							unk_0xDCAFFD08A08087EB("SwitchHUDTrevorOut", 0, 0);
						}
						break;
					
					default:
						if (func_60() == 0)
						{
							unk_0xDCAFFD08A08087EB("SwitchHUDOut", 0, 0);
						}
						break;
				}
			}
			Global_23131.f_112 = 0;
		}
	}
	if (bVar0 != bLocal_142)
	{
		if (fLocal_144 == fLocal_141)
		{
			iLocal_145 = unk_0x1DD05E817C89C737();
		}
		else
		{
			iLocal_145 = ((unk_0x1DD05E817C89C737() - 250) + (unk_0x1DD05E817C89C737() - iLocal_145));
		}
		if (bVar0)
		{
			fLocal_144 = 0.1f;
			bLocal_142 = true;
		}
		else
		{
			fLocal_144 = 1f;
			bLocal_142 = false;
		}
	}
	if (fLocal_144 != fLocal_141)
	{
		fVar23 = (to_float((unk_0x1DD05E817C89C737() - iLocal_145)) / (250f * fLocal_141));
		if (bLocal_142)
		{
			fVar22 = (1f - (fVar23 * 0.9f));
			if (fVar22 <= 0.111111f)
			{
				fVar22 = 0.1f;
			}
		}
		else
		{
			fVar22 = (0.1f + (fVar23 * 0.9f));
			if (fVar22 >= 0.999999f)
			{
				fVar22 = 1f;
			}
		}
		iVar24 = 0;
		if (func_68(14))
		{
			iVar24 = 1;
		}
		else if (unk_0x76CD105BCAC6EB9F())
		{
			fVar22 = 1f;
		}
		else if (func_44())
		{
			fVar22 = 1f;
		}
		else if (!func_46(func_61()))
		{
		}
		else if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
		{
		}
		else
		{
			iVar24 = 1;
		}
		if (iVar24 || fVar22 > fLocal_141)
		{
			unk_0xE6AC149D1121535D(fVar22);
		}
		fLocal_141 = fVar22;
	}
	bVar25 = false;
	bVar26 = false;
	if (unk_0x5F9F81C08516558E() || unk_0x761778199FE1211C())
	{
		if (func_43(66) && func_43(67))
		{
			if (!func_43(72))
			{
				switch (func_41("AM_H_EDIT_3"))
				{
					case 2:
						if (unk_0xE7585CE3CDD6F47E() && iLocal_131 == 1)
						{
							func_39("AM_H_EDIT_3", 1, 0, -1, 10000, 7, 0, 0, 0);
						}
						break;
					
					case 1:
						func_38(72);
						break;
					}
			}
			if (!func_43(73))
			{
				switch (func_41("AM_H_EDIT_4"))
				{
					case 2:
						if (unk_0xE7585CE3CDD6F47E() && iLocal_131 == 0)
						{
							func_39("AM_H_EDIT_4", 1, 0, -1, 10000, 7, 0, 0, 0);
						}
						break;
					
					case 1:
						func_38(73);
						break;
					}
				}
		}
		if (func_131(0) || (unk_0x761778199FE1211C() && unk_0xAE231F549813BBDF(2)))
		{
			bVar25 = func_22();
			iLocal_137 = unk_0x1DD05E817C89C737() + 250;
			if (bVar25)
			{
				if (Global_23131.f_124)
				{
					if (((Global_23131.f_4 && Global_23131) && Global_23131.f_1) && Global_23131.f_104 == 4)
					{
						bVar26 = true;
					}
				}
				else if (func_131(0))
				{
					bVar26 = true;
				}
			}
		}
		if (func_131(0))
		{
			if (bVar25)
			{
				Global_116 = unk_0x1DD05E817C89C737() + 500;
			}
		}
		func_21(&bVar26);
		if (bVar26)
		{
			if (!Global_23131.f_135)
			{
				iVar27 = 0;
				while (iVar27 < iLocal_132)
				{
					iLocal_132[iVar27] = -1;
					iVar27++;
				}
				unk_0xC138265FD0CDEA4E();
				unk_0x2DDB2996437CC59C(1);
				if (unk_0xBCF87EE3DC296C2A(unk_0xBF03D0685ADC793B()) == 4 && !unk_0x5A50E8F361E4CFB1())
				{
					unk_0x7C64D5DE5CA79A81();
					unk_0xCCDB0041859B85A6("REC_FEED_WAR");
					iLocal_132[0] = unk_0x25ABFB435E16C7D9(0, 1);
				}
				if (unk_0xE7585CE3CDD6F47E())
				{
					if (iLocal_131 == 1)
					{
						unk_0x7C64D5DE5CA79A81();
						unk_0xCCDB0041859B85A6("REC_FEED_5");
						iLocal_132[1] = unk_0xAB3EA738521899AA(1, "~INPUT_REPLAY_START_STOP_RECORDING~", "");
						unk_0x7C64D5DE5CA79A81();
						unk_0xCCDB0041859B85A6("REC_FEED_4");
						iLocal_132[2] = unk_0xAB3EA738521899AA(1, "~INPUT_SAVE_REPLAY_CLIP~", "");
					}
					else if (iLocal_131 == 0)
					{
						unk_0x7C64D5DE5CA79A81();
						unk_0xCCDB0041859B85A6("REC_FEED_3");
						iLocal_132[1] = unk_0xAB3EA738521899AA(1, "~INPUT_REPLAY_START_STOP_RECORDING~", "");
						unk_0x7C64D5DE5CA79A81();
						unk_0xCCDB0041859B85A6("REC_FEED_2");
						iLocal_132[2] = unk_0xAB3EA738521899AA(1, "~INPUT_SAVE_REPLAY_CLIP~", "");
					}
				}
				else
				{
					unk_0x7C64D5DE5CA79A81();
					unk_0xCCDB0041859B85A6("REC_FEED_1");
					iLocal_132[1] = unk_0xAB3EA738521899AA(1, "~INPUT_REPLAY_START_STOP_RECORDING~", "");
					unk_0x7C64D5DE5CA79A81();
					unk_0xCCDB0041859B85A6("REC_FEED_0");
					iLocal_132[2] = unk_0xAB3EA738521899AA(1, "~INPUT_REPLAY_START_STOP_RECORDING_SECONDARY~", "");
				}
				unk_0x5C6622EF2CEA902F();
				Global_23131.f_135 = 1;
			}
		}
		else
		{
			func_20();
		}
		if (iLocal_133 != -1)
		{
			if ((!unk_0x76CD105BCAC6EB9F() && (unk_0x1DD05E817C89C737() - iLocal_134) > 4000) || (unk_0x76CD105BCAC6EB9F() && unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), uLocal_135)) > 4000))
			{
				unk_0xFE3A52C5B7AE3101(iLocal_133);
				iLocal_133 = -1;
			}
		}
		if (bVar25)
		{
			bVar28 = false;
			bVar29 = false;
			bVar30 = false;
			bVar31 = false;
			if (unk_0xAE231F549813BBDF(2))
			{
				bVar28 = unk_0x875A214D5EBCA509(0, 288);
				bVar29 = unk_0x875A214D5EBCA509(0, 170);
				bVar30 = unk_0x875A214D5EBCA509(0, 289);
			}
			else if (func_131(0))
			{
				bVar28 = (unk_0x875A214D5EBCA509(0, 288) || unk_0xDEE3EFEA31A1F555(0, 288));
				bVar29 = (unk_0x875A214D5EBCA509(0, 170) || unk_0xDEE3EFEA31A1F555(0, 170));
				bVar30 = (unk_0x875A214D5EBCA509(0, 289) || unk_0xDEE3EFEA31A1F555(0, 289));
			}
			if (unk_0xE7585CE3CDD6F47E())
			{
				if (bVar28)
				{
					if (iLocal_131 == 0)
					{
						unk_0x6CD6A4BE55F8343E();
					}
					else
					{
						unk_0x98188EDB7446A033();
					}
					bVar31 = true;
				}
				else if (bVar29)
				{
					unk_0x9A7045411AC5794F();
					if (iLocal_131 == 0)
					{
						iLocal_130 = 1;
					}
					bVar31 = true;
				}
			}
			else if (bVar28)
			{
				unk_0x318F6CC45BC7DB75(1);
				if (unk_0x37E75188C827C483(0))
				{
					iLocal_131 = 1;
				}
				bVar31 = true;
			}
			else if (bVar30)
			{
				unk_0x318F6CC45BC7DB75(0);
				if (unk_0x37E75188C827C483(0))
				{
					iLocal_131 = 0;
					iLocal_129 = 1;
				}
				bVar31 = true;
			}
			if (bVar31)
			{
				Global_23131.f_130 = 1;
				Global_23131.f_131 = bVar29;
				Global_23131.f_132 = bVar28;
				Global_23131.f_133 = bVar30;
			}
		}
	}
	else
	{
		func_20();
	}
	if (!unk_0xAE231F549813BBDF(2))
	{
		if (unk_0x486FF5D06E9659F1(joaat("creator")) == 0)
		{
			if ((Global_23131.f_131 || bVar25) || iLocal_137 > unk_0x1DD05E817C89C737())
			{
				unk_0x4CC1CF98851922CE(2, 202);
				if (unk_0x05AA183DA1344935() == 0)
				{
					unk_0x66EFB3D6110055C4(2, 202, 1);
				}
				unk_0x66EFB3D6110055C4(0, 80, 1);
			}
			if ((Global_23131.f_132 || bVar25) || iLocal_137 > unk_0x1DD05E817C89C737())
			{
				unk_0x4CC1CF98851922CE(2, 201);
				if (unk_0x05AA183DA1344935() == 0)
				{
					unk_0x66EFB3D6110055C4(2, 201, 1);
				}
				unk_0x66EFB3D6110055C4(0, 73, 1);
				unk_0x66EFB3D6110055C4(0, 144, 1);
			}
			if ((Global_23131.f_133 || bVar25) || iLocal_137 > unk_0x1DD05E817C89C737())
			{
				unk_0x4CC1CF98851922CE(2, 203);
				if (unk_0x05AA183DA1344935() == 0)
				{
					unk_0x66EFB3D6110055C4(2, 203, 1);
				}
				unk_0x66EFB3D6110055C4(0, 22, 1);
			}
		}
	}
	bVar32 = false;
	while (bVar32 < 3)
	{
		if (BitTest(Global_23130, bVar32))
		{
			if (!Local_65.f_8[bVar32])
			{
				func_19(&Local_65, bVar32, 1);
			}
		}
		else if (Local_65.f_8[bVar32])
		{
			func_19(&Local_65, bVar32, 0);
		}
		bVar32++;
	}
	if (bVar2)
	{
		if (iLocal_158)
		{
			if (unk_0xC450B06E5AAA0985(uLocal_127))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_127);
			}
			unk_0x8128CB4AD398D07B(-1, -1, 1);
			unk_0x8349F3048B5A74C7(-1f, -1f);
			unk_0x69EA52C44C3F78D9(0);
			unk_0xEA2F24FFC9F29EDD(0);
			unk_0x33311EBA9464741D();
			iLocal_158 = 0;
		}
	}
	bVar33 = false;
	bVar34 = false;
	if (Global_23131.f_104 == 2 || Global_23131.f_104 == 3)
	{
		if ((((Global_23131.f_54[0] && Global_23131.f_59[0]) || (Global_23131.f_54[1] && Global_23131.f_59[1])) || (Global_23131.f_54[2] && Global_23131.f_59[2])) || (Global_23131.f_54[3] && Global_23131.f_59[3]))
		{
			bVar33 = true;
		}
		else if (((Global_23131.f_49[0] || Global_23131.f_49[1]) || Global_23131.f_49[2]) || Global_23131.f_49[3])
		{
			bVar34 = true;
		}
	}
	if (((!Global_23131.f_49[0] && !Global_23131.f_49[1]) && !Global_23131.f_49[2]) && !Global_23131.f_49[3])
	{
		iLocal_160 = 0;
	}
	if (bVar33)
	{
		if (iLocal_159[0] == -1)
		{
			iLocal_159[0] = unk_0xCA369FBC0DE29517();
			unk_0xCAC4020CCF361AC8("PLAYER_SWITCH_RED_ALERT_SCENE");
			unk_0xBF3D28CA44F3BE2D(iLocal_159[0], "SwitchRedWarning", "SPECIAL_ABILITY_SOUNDSET", 0);
		}
	}
	else if (iLocal_159[0] != -1)
	{
		unk_0x8E4825CCACA34B58(iLocal_159[0]);
		unk_0x394AFAC073E1F277(iLocal_159[0]);
		if (!bVar34)
		{
			unk_0xB43467C43086A6A1("PLAYER_SWITCH_RED_ALERT_SCENE");
		}
		iLocal_159[0] = -1;
	}
	if (bVar34)
	{
		if (iLocal_159[1] == -1 && !iLocal_160)
		{
			iLocal_159[1] = unk_0xCA369FBC0DE29517();
			iLocal_160 = 1;
			unk_0xCAC4020CCF361AC8("PLAYER_SWITCH_WHITE_ALERT_SCENE");
			unk_0xBF3D28CA44F3BE2D(iLocal_159[1], "SwitchWhiteWarning", "SPECIAL_ABILITY_SOUNDSET", 0);
		}
	}
	else if (iLocal_159[1] != -1)
	{
		unk_0x8E4825CCACA34B58(iLocal_159[1]);
		unk_0x394AFAC073E1F277(iLocal_159[1]);
		if (!bVar33)
		{
			unk_0xB43467C43086A6A1("PLAYER_SWITCH_WHITE_ALERT_SCENE");
		}
		iLocal_159[1] = -1;
	}
	if ((iVar5 && !bVar33) && !bVar34)
	{
		if (!iLocal_138)
		{
			if ((unk_0x1DD05E817C89C737() - iLocal_169) > 12500)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "CHARACTER_SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
			}
		}
		iLocal_138 = 1;
	}
	if (((unk_0x3555462DB47B7AB1() || func_59()) || func_58()) || Global_23131.f_125)
	{
		iLocal_162 = unk_0x1DD05E817C89C737();
	}
	if ((unk_0x1DD05E817C89C737() - iLocal_162) < 1000)
	{
		unk_0x4EB223432F8FA0A0(6);
		unk_0x4EB223432F8FA0A0(7);
		unk_0x4EB223432F8FA0A0(8);
		unk_0x4EB223432F8FA0A0(9);
		iLocal_163 = 1;
	}
	else if (iLocal_163)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
			}
		}
		iLocal_163 = 0;
	}
	if (unk_0x3555462DB47B7AB1() && unk_0x1403FEB4554982F8() == 3)
	{
		bLocal_151 = true;
		iLocal_152 = unk_0x1DD05E817C89C737();
	}
	if (bLocal_151)
	{
		if (unk_0x3555462DB47B7AB1())
		{
			iLocal_153 = 0;
		}
		else
		{
			iLocal_153++;
		}
		if (((unk_0x1DD05E817C89C737() - iLocal_152) > 5000 || Global_23131.f_4) || ((!unk_0x3555462DB47B7AB1() && !Global_23131.f_12) && iLocal_153 > 5))
		{
			bLocal_151 = false;
		}
		unk_0x4EB223432F8FA0A0(10);
		unk_0x4EB223432F8FA0A0(15);
	}
	if (iLocal_164)
	{
		if (((!unk_0x76CD105BCAC6EB9F() && (unk_0x1DD05E817C89C737() - iLocal_165) > 2000) && !bLocal_151) || unk_0x76CD105BCAC6EB9F())
		{
			if (iLocal_87)
			{
				unk_0xD314260005F064BF(&iLocal_84);
				if (!bLocal_86)
				{
					unk_0xD314260005F064BF(&iLocal_85);
				}
			}
			iLocal_166 = unk_0x1DD05E817C89C737();
			if (unk_0x76CD105BCAC6EB9F())
			{
				uLocal_167 = unk_0x7E3F74F641EE6B27();
			}
			Global_2695841 = 0;
			iLocal_139 = 0;
			iLocal_87 = 0;
			iLocal_84 = 0;
			iLocal_85 = 0;
			iLocal_164 = 0;
			Global_23131 = 0;
		}
	}
	if (Global_23131.f_4)
	{
		iLocal_169 = unk_0x1DD05E817C89C737();
	}
}

void func_19(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1 != 4)
	{
		uParam0->f_8[bParam1] = iParam2;
	}
}

void func_20()
{
	int iVar0;
	
	if (Global_23131.f_135)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_132)
		{
			if (iLocal_132[iVar0] != -1)
			{
				unk_0xFE3A52C5B7AE3101(iLocal_132[iVar0]);
				iLocal_132[iVar0] = -1;
			}
			iVar0++;
		}
		if (iLocal_133 != -1)
		{
			unk_0xFE3A52C5B7AE3101(iLocal_133);
			iLocal_133 = -1;
		}
		unk_0x2DDB2996437CC59C(0);
		unk_0xCCC82B30A1C53626();
		Global_2695841 = 0;
		Global_23131.f_135 = 0;
	}
	if (iLocal_129)
	{
		if (iLocal_133 != -1)
		{
			unk_0xFE3A52C5B7AE3101(iLocal_133);
			iLocal_133 = -1;
		}
		unk_0xCCDB0041859B85A6("REC_FEED_6");
		iLocal_133 = unk_0xBB8346AD199D9F61(2, 0, "");
		iLocal_129 = 0;
		iLocal_134 = unk_0x1DD05E817C89C737();
		if (unk_0x76CD105BCAC6EB9F())
		{
			uLocal_135 = unk_0x7E3F74F641EE6B27();
		}
	}
	if (iLocal_130)
	{
		if (iLocal_133 != -1)
		{
			unk_0xFE3A52C5B7AE3101(iLocal_133);
			iLocal_133 = -1;
		}
		unk_0xCCDB0041859B85A6("REC_FEED_7");
		iLocal_133 = unk_0xBB8346AD199D9F61(2, 0, "");
		iLocal_130 = 0;
		iLocal_134 = unk_0x1DD05E817C89C737();
		if (unk_0x76CD105BCAC6EB9F())
		{
			uLocal_135 = unk_0x7E3F74F641EE6B27();
		}
	}
}

void func_21(int iParam0)
{
	if (*iParam0)
	{
		if (!Local_171.f_2)
		{
			Local_171.f_0 = unk_0x1DD05E817C89C737();
			if (unk_0x76CD105BCAC6EB9F())
			{
				Local_171.f_1 = unk_0x7E3F74F641EE6B27();
			}
			Local_171.f_2 = 1;
		}
		if (!Global_23131.f_124)
		{
			if ((!unk_0x76CD105BCAC6EB9F() && (unk_0x1DD05E817C89C737() - Local_171.f_0) < 200) || (unk_0x76CD105BCAC6EB9F() && unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Local_171.f_1)) < 300))
			{
				*iParam0 = 0;
			}
		}
	}
	else
	{
		Local_171.f_2 = 0;
	}
}

int func_22()
{
	if (((((((((((((((((((((((((((((Global_23131.f_134 || unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D())) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || unk_0x3555462DB47B7AB1()) || func_59()) || func_37(8, -1)) || unk_0xFD216000DC314A92()) || func_35()) || (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) && unk_0x486FF5D06E9659F1(joaat("golf")) == 0)) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || func_34()) || func_44()) || func_33()) || func_32()) || func_44()) || func_31()) || func_30()) || !func_28()) || func_27(0)) || unk_0x4D9174D8796EA622()) || unk_0xEF37E704F02B50F3()) || unk_0x486FF5D06E9659F1(joaat("appcamera")) > 0) || unk_0x486FF5D06E9659F1(joaat("creator")) > 0) || func_26()) || Global_63353) || func_25()) || !unk_0x85CC9F47ACE575F1()) || !unk_0x0E46E59812BDC8B7()) || func_24(Global_112673, 256)) || (unk_0x76CD105BCAC6EB9F() && func_23(unk_0x259BE71D8A81D4FA())))
	{
		return 0;
	}
	return 1;
}

int func_23(int iParam0)
{
	if (Global_2657589[iParam0 /*466*/].f_272.f_4 != 0 || Global_2657589[iParam0 /*466*/].f_272.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_24(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_25()
{
	return Global_97990;
}

var func_26()
{
	return Global_75693;
}

int func_27(int iParam0)
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

int func_28()
{
	if (func_29() == 0)
	{
		return 1;
	}
	return 0;
}

int func_29()
{
	return Global_1574632.f_18;
}

bool func_30()
{
	return unk_0x1DD05E817C89C737() <= Global_23270.f_6321 + 100;
}

bool func_31()
{
	return Global_100733.f_388 > 0;
}

int func_32()
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

var func_33()
{
	return Global_2683864.f_698;
}

int func_34()
{
	if (((Global_100681 == 13 || Global_100681 == 10) || Global_100681 == 11) || Global_100681 == 12)
	{
		return 0;
	}
	return 1;
}

int func_35()
{
	struct<3> Var0;
	
	if (Global_20383.f_1 > 3)
	{
		return 1;
	}
	if (func_36())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x78C4EBB0251847E2(&Var0);
		if (Global_20328 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_36()
{
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_37(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1653913.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1653913.f_1048, iParam0);
}

void func_38(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	iVar1 = 0;
	while (bVar0 > 31)
	{
		bVar0 = (bVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_20412.f_150[iVar1]), bVar0);
	}
}

void func_39(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_40(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_40(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x1B79E937E91F40C3(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_20412.f_145)
	{
		if (unk_0x1B79E937E91F40C3(&(Global_113648.f_20412[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113648.f_20412.f_145 < 9)
	{
		StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8 = (unk_0x1DD05E817C89C737() + iParam3);
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9 = iParam5;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11 = iParam6;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12 = uParam2;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13 = iParam7;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14 = iParam8;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = ((unk_0x1DD05E817C89C737() + iParam3) + iParam4);
		}
		else
		{
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = -1;
		}
		Global_113648.f_20412.f_145++;
		func_4();
	}
}

int func_41(char* sParam0)
{
	if (unk_0x1B79E937E91F40C3(sParam0, &Global_112291))
	{
		return 1;
	}
	if (func_42(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_42(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_113648.f_20412.f_145)
	{
		if (unk_0x1B79E937E91F40C3(sParam0, &(Global_113648.f_20412[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_113648.f_20412.f_150[iVar1], iVar0);
	}
	return 0;
}

bool func_44()
{
	return Global_1575060;
}

int func_45()
{
	return Global_78821;
}

bool func_46(bool bParam0)
{
	return bParam0 < 3;
}

void func_47()
{
	unk_0x66EFB3D6110055C4(0, 37, 1);
	unk_0x66EFB3D6110055C4(0, 85, 1);
	if (!Global_75693)
	{
		unk_0x4CC1CF98851922CE(0, 19);
	}
	unk_0x4CC1CF98851922CE(0, 12);
	unk_0x4CC1CF98851922CE(0, 13);
	if (!unk_0xAE231F549813BBDF(2))
	{
		unk_0x4CC1CF98851922CE(2, 203);
		unk_0x4CC1CF98851922CE(2, 204);
		unk_0x4CC1CF98851922CE(2, 202);
		unk_0x4CC1CF98851922CE(2, 201);
	}
	unk_0x66EFB3D6110055C4(0, 74, 1);
	unk_0x66EFB3D6110055C4(0, 69, 1);
	unk_0x66EFB3D6110055C4(0, 70, 1);
	unk_0x66EFB3D6110055C4(0, 80, 1);
}

bool func_48(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_49(float fParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	unk_0x21564F65F997D833(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	fVar3 = unk_0x4AE9635532D92447(0);
	if (fVar2 > (3f / 2f) && fVar2 < 3.5f)
	{
		if ((fVar3 == (16f / 9f) || fVar3 == (17f / 9f)) || (fVar3 == (21f / 9f) && fVar2 >= (17f / 9f)))
		{
			*fParam0 = 0.042f;
		}
		else if (fVar3 == (5f / 3f))
		{
			*fParam0 = 0.045f;
		}
		else if (fVar3 == (16f / 10f))
		{
			*fParam0 = 0.047f;
		}
		else if ((fVar2 % fVar3) == 0f)
		{
			*fParam0 = 0.047f;
		}
		else
		{
			*fParam0 = 0.056f;
		}
	}
	else
	{
		*fParam0 = 0.056f;
	}
}

int func_50(int iParam0)
{
	if (func_51(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2848282[iParam0 /*3*/][func_52(iParam1)];
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_52(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_53();
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

int func_53()
{
	return Global_1574918;
}

int func_54()
{
	if (func_56() && func_55(0))
	{
		return 1;
	}
	return 0;
}

var func_55(int iParam0)
{
	return Global_1574538[iParam0];
}

var func_56()
{
	return func_55(func_53() + 1);
}

int func_57(int iParam0)
{
	int iVar0;
	
	if (unk_0x5EA7A06A1491D450())
	{
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			unk_0x23B29877D0BE9547(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_58()
{
	return Global_23129;
}

int func_59()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98159.f_44 == 1;
	}
	return 0;
}

int func_60()
{
	return Global_32163;
}

bool func_61()
{
	func_62();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_62()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_64(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_63(unk_0x4A8C381C258A124D());
			if (func_46(iVar0) && (!func_68(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_46(Global_113648.f_2365.f_539.f_4321))
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

int func_63(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_64(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_64(int iParam0)
{
	if (func_46(iParam0))
	{
		return func_65(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_65(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

Vector3 func_66(struct<3> Param0)
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

int func_67(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

bool func_68(int iParam0)
{
	return Global_43257 == iParam0;
}

int func_69(int iParam0)
{
	if (iParam0 == 3)
	{
		return 0;
	}
	else if (iParam0 == 0)
	{
		return 1;
	}
	else if (iParam0 == 1)
	{
		return 2;
	}
	else if (iParam0 == 2)
	{
		return 3;
	}
	return 0;
}

void func_70()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (bLocal_86)
	{
		return;
	}
	iVar0 = 145;
	if (Global_23131.f_69 == 0)
	{
		iVar0 = 1;
		iVar1 = 144;
	}
	else if (Global_23131.f_69 == 1)
	{
		iVar0 = 2;
		iVar1 = 145;
	}
	else if (Global_23131.f_69 == 2)
	{
		iVar0 = 3;
		iVar1 = 116;
	}
	else if (Global_23131.f_69 == 3)
	{
		iVar0 = 0;
		iVar1 = 143;
	}
	unk_0x88F483FBD433696A(iLocal_85, "SET_STATS_LABELS");
	unk_0x330108B080A2132F(iVar1);
	unk_0x557F1E2300EF1A3E(iVar0 == 3);
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (iVar2 != 0 || Global_23131.f_69 != 2)
		{
			if (iVar0 == 145 || (iVar0 == 3 && !func_54()))
			{
				unk_0x330108B080A2132F(0);
			}
			else if (iVar0 == 3)
			{
				unk_0x330108B080A2132F(func_77(iVar0, func_98(iVar2), 0, func_53()));
			}
			else
			{
				unk_0x330108B080A2132F(func_77(iVar0, func_98(iVar2), 0, -1));
			}
			func_75(func_76(func_98(iVar2)));
		}
		else if (iVar2 == 0 && Global_23131.f_69 == 2)
		{
			if (func_54())
			{
				iVar3 = Global_1665638[func_52(-1)];
				iVar4 = func_74(iVar3, 1);
				iVar5 = func_72(iVar4, 0);
				iVar6 = func_72(iVar4 + 1, 0);
				iVar7 = floor(((to_float((iVar3 - iVar5)) / to_float((iVar6 - iVar5))) * 100f));
				if (Global_297010[8000] == iVar3 && iVar7 == 0)
				{
					iVar7 = 100;
				}
				unk_0x330108B080A2132F(iVar7);
				unk_0x882AEFD55B8D51FB("TR_RANKNUM");
				unk_0x511D14ED2DA887E1(iVar4);
				unk_0xCFAD3D478C87321A();
			}
			else
			{
				unk_0x330108B080A2132F(0);
				func_75("TR_RANK");
			}
		}
		iVar2++;
	}
	if (iVar0 == 3 && func_54())
	{
		unk_0x330108B080A2132F(floor(func_71(133, -1)));
		unk_0x882AEFD55B8D51FB("PCARD_MENTAL_STATE");
		unk_0xCFAD3D478C87321A();
	}
	unk_0xE6B753D52F4CA222();
}

float func_71(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2847606[iParam0 /*3*/][func_52(iParam1)];
	if (unk_0x2F0966A034F5ADC6(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

var func_72(int iParam0, bool bParam1)
{
	return func_73(iParam0, bParam1, 0);
}

var func_73(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_297010[iParam0];
}

int func_74(int iParam0, int iParam1)
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

void func_75(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

char* func_76(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PS_SPEC_AB";
			break;
		
		case 1:
			return "PS_STAMINA";
			break;
		
		case 3:
			return "PS_LUNG";
			break;
		
		case 2:
			return "PS_STRENGTH";
			break;
		
		case 4:
			return "PS_DRIVING";
			break;
		
		case 5:
			return "PS_FLYING";
			break;
		
		case 6:
			return "PS_SHOOTING";
			break;
		
		case 7:
			return "PS_STEALTH";
			break;
	}
	return "ERROR";
}

int func_77(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	float fVar0;
	float fVar1;
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
	float fVar12;
	
	iVar2 = 0;
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				unk_0xDF7F16323520B858(joaat("sp0_special_ability_unlocked"), &iVar3, -1);
				fVar0 = to_float(iVar3);
			}
			else if (iParam0 == 1)
			{
				unk_0xDF7F16323520B858(joaat("sp1_special_ability_unlocked"), &iVar3, -1);
				fVar0 = to_float(iVar3);
			}
			else if (iParam0 == 2)
			{
				unk_0xDF7F16323520B858(joaat("sp2_special_ability_unlocked"), &iVar3, -1);
				fVar0 = to_float(iVar3);
			}
			else if (iParam0 == 3)
			{
				fVar0 = to_float(func_97(64, iParam3, 0));
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				unk_0x2F0966A034F5ADC6(joaat("sp0_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113648.f_2365.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 1)
			{
				unk_0x2F0966A034F5ADC6(joaat("sp1_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113648.f_2365.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 2)
			{
				unk_0x2F0966A034F5ADC6(joaat("sp2_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113648.f_2365.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_71(20, iParam3) / 175f);
				func_88(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + to_float(func_87(joaat("sp0_time_swimming"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + to_float(func_87(joaat("sp1_time_swimming"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + to_float(func_87(joaat("sp2_time_swimming"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + to_float(func_87(func_86(50, iParam3))));
				func_88(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + to_float(func_87(joaat("sp0_time_driving_bicycle"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + to_float(func_87(joaat("sp1_time_driving_bicycle"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + to_float(func_87(joaat("sp2_time_driving_bicycle"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + to_float(func_87(func_86(47, iParam3))));
				func_88(&fVar0);
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 + ((4f * Global_262145.f_24333) * IntToFloat(func_97(7237, -1, 0))));
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 * 0.25f);
			}
			break;
		
		case 3:
			if (iParam0 == 0)
			{
				fVar0 = (to_float(func_85(joaat("sp0_time_underwater"))) / 30f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (to_float(func_85(joaat("sp1_time_underwater"))) / 30f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (to_float(func_85(joaat("sp2_time_underwater"))) / 30f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (to_float(func_85(func_86(52, iParam3))) / 30f);
				func_88(&fVar0);
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				unk_0xDF7F16323520B858(joaat("sp0_unarmed_hits"), &iVar3, -1);
				fVar0 = (to_float((iVar3 - Global_113648.f_2365.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 1)
			{
				unk_0xDF7F16323520B858(joaat("sp1_unarmed_hits"), &iVar3, -1);
				fVar0 = (to_float((iVar3 - Global_113648.f_2365.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 2)
			{
				unk_0xDF7F16323520B858(joaat("sp2_unarmed_hits"), &iVar3, -1);
				fVar0 = (to_float((iVar3 - Global_113648.f_2365.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (to_float(func_97(1500, iParam3, 0)) / 20f);
				func_88(&fVar0);
			}
			break;
		
		case 4:
			if (iParam0 == 0)
			{
				unk_0xDF7F16323520B858(joaat("sp0_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (to_float((iVar3 - Global_113648.f_2365.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 1)
			{
				unk_0xDF7F16323520B858(joaat("sp1_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (to_float((iVar3 - Global_113648.f_2365.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 2)
			{
				unk_0xDF7F16323520B858(joaat("sp2_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (to_float((iVar3 - Global_113648.f_2365.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat((func_97(113, iParam3, 0) / 50)));
				func_88(&fVar0);
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				fVar0 = (to_float(func_87(joaat("sp0_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (to_float(func_87(joaat("sp1_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (to_float(func_87(joaat("sp2_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (to_float(func_87(func_86(43, iParam3))) / 10f);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + (to_float(func_87(joaat("sp0_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + (to_float(func_87(joaat("sp1_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + (to_float(func_87(joaat("sp2_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + (to_float(func_87(func_86(45, iParam3))) / 10f));
			}
			if (iParam0 == 0)
			{
				unk_0xDF7F16323520B858(joaat("sp0_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + to_float(iVar3));
			}
			else if (iParam0 == 1)
			{
				unk_0xDF7F16323520B858(joaat("sp1_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + to_float(iVar3));
			}
			else if (iParam0 == 2)
			{
				unk_0xDF7F16323520B858(joaat("sp2_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + to_float(iVar3));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_97(61, iParam3, 0)));
				func_88(&fVar0);
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar4 = func_84(iParam0, 0);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_84(iParam0, 1);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_84(iParam0, 2);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_84(iParam0, 3);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_84(iParam0, 6);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_84(iParam0, 4);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 5f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 3f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 2f);
				}
				iVar4 = func_84(iParam0, 5);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_84(iParam0, 7);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_84(iParam0, 8);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_84(iParam0, 11);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
			}
			break;
		
		case 7:
			if (iParam0 == 0)
			{
				unk_0x2F0966A034F5ADC6(joaat("sp0_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113648.f_2365.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 1)
			{
				unk_0x2F0966A034F5ADC6(joaat("sp1_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113648.f_2365.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 2)
			{
				unk_0x2F0966A034F5ADC6(joaat("sp2_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113648.f_2365.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_71(19, iParam3) / 45f);
			}
			if (iParam0 == 0)
			{
				unk_0xDF7F16323520B858(joaat("sp0_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((to_float((iVar3 - Global_113648.f_2365.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 1)
			{
				unk_0xDF7F16323520B858(joaat("sp1_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((to_float((iVar3 - Global_113648.f_2365.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 2)
			{
				unk_0xDF7F16323520B858(joaat("sp2_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((to_float((iVar3 - Global_113648.f_2365.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 3)
			{
				iVar3 = func_97(34, iParam3, 0);
				fVar0 = (fVar0 + ((to_float(iVar3) / 2f) * 1.5f));
				func_88(&fVar0);
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				unk_0xDF7F16323520B858(joaat("sp0_hits_mission"), &iVar5, -1);
				unk_0xDF7F16323520B858(joaat("sp0_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (to_float((iVar5 - Global_113648.f_2365.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (to_float((iVar6 - Global_113648.f_2365.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 1)
			{
				unk_0xDF7F16323520B858(joaat("sp1_hits_mission"), &iVar5, -1);
				unk_0xDF7F16323520B858(joaat("sp1_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (to_float((iVar5 - Global_113648.f_2365.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (to_float((iVar6 - Global_113648.f_2365.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 2)
			{
				unk_0xDF7F16323520B858(joaat("sp2_hits_mission"), &iVar5, -1);
				unk_0xDF7F16323520B858(joaat("sp2_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (to_float((iVar5 - Global_113648.f_2365.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (to_float((iVar6 - Global_113648.f_2365.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 3)
			{
				iVar6 = func_97(172, iParam3, 0);
				fVar0 = (fVar0 + (to_float(iVar6) / 80f));
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar7 = 0;
				while (iVar7 < 22)
				{
					switch (func_83(iVar7, iParam0))
					{
						case 3:
							iVar8++;
							break;
						
						case 2:
							iVar9++;
							break;
						
						case 1:
							iVar10++;
							break;
					}
					iVar7++;
				}
				fVar0 = (fVar0 + IntToFloat(iVar8 * 3));
				fVar0 = (fVar0 + IntToFloat(iVar9 * 2));
				fVar0 = (fVar0 + IntToFloat(iVar10 * 1));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_82(joaat("mpply_shootingrange_wins")) * 1));
				func_88(&fVar0);
			}
			break;
	}
	if (iParam1 != 0)
	{
		iVar11 = func_81(iParam0, iParam1, iParam3);
		fVar0 = (fVar0 + IntToFloat(iVar11));
		fVar0 = (fVar0 + IntToFloat(func_80(iParam0, iParam1, iParam3)));
	}
	if (bParam2)
	{
		fVar12 = (fVar0 - (fVar0 % IntToFloat(func_79(iParam0, iParam1))));
		if ((fVar0 % IntToFloat(func_79(iParam0, iParam1))) >= 0f)
		{
			fVar12 = (fVar12 + IntToFloat(func_79(iParam0, iParam1)));
		}
		if (fVar0 >= fVar12)
		{
			fVar0 = fVar12;
		}
		else
		{
			fVar0 = (fVar12 - IntToFloat(func_79(iParam0, iParam1)));
		}
	}
	iVar2 = floor(fVar0);
	iVar2 = func_78(iVar2, 0, 100);
	return iVar2;
}

int func_78(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_79(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
	}
	return 1;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][iParam0];
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_97(72, iParam2, 0);
					break;
				
				case 3:
					return func_97(74, iParam2, 0);
					break;
				
				case 2:
					return func_97(73, iParam2, 0);
					break;
				
				case 4:
					return func_97(75, iParam2, 0);
					break;
				
				case 5:
					return func_97(76, iParam2, 0);
					break;
				
				case 6:
					return func_97(77, iParam2, 0);
					break;
				
				case 7:
					return func_97(78, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

int func_81(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		if (func_68(14))
		{
			return 100;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 47;
					break;
				
				case 3:
					return 22;
					break;
				
				case 2:
					return 21;
					break;
				
				case 4:
					return 54;
					break;
				
				case 5:
					return 31;
					break;
				
				case 6:
					return 79;
					break;
				
				case 7:
					return 81;
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
					return 51;
					break;
				
				case 3:
					return 46;
					break;
				
				case 2:
					return 49;
					break;
				
				case 4:
					return 71;
					break;
				
				case 5:
					return 19;
					break;
				
				case 6:
					return 24;
					break;
				
				case 7:
					return 21;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 23;
					break;
				
				case 3:
					return 28;
					break;
				
				case 2:
					return 79;
					break;
				
				case 4:
					return 31;
					break;
				
				case 5:
					return 82;
					break;
				
				case 6:
					return 69;
					break;
				
				case 7:
					return 49;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_97(1225, iParam2, 0);
					break;
				
				case 3:
					return func_97(1231, iParam2, 0);
					break;
				
				case 2:
					return func_97(1227, iParam2, 0);
					break;
				
				case 4:
					return func_97(1230, iParam2, 0);
					break;
				
				case 5:
					return func_97(1229, iParam2, 0);
					break;
				
				case 6:
					return func_97(1226, iParam2, 0);
					break;
				
				case 7:
					return func_97(1228, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

int func_82(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_83(int iParam0, int iParam1)
{
	return Global_113648.f_19149[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_84(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > 2)
	{
		return 0;
	}
	return Global_113648.f_1990[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + (unk_0x4F256B9F00ACB695(iParam0) * 86400));
	iVar0 = (iVar0 + unk_0xDF21396D0886D8F7(iParam0) * 3600);
	iVar0 = (iVar0 + unk_0xE44C8536D6F264FC(iParam0) * 60);
	iVar0 = (iVar0 + unk_0x77A7B5685F038D01(iParam0));
	return iVar0;
}

int func_86(int iParam0, int iParam1)
{
	return Global_2805029[iParam0 /*3*/][func_52(iParam1)];
}

int func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + unk_0x4F256B9F00ACB695(iParam0) * 1440);
	iVar0 = (iVar0 + unk_0xDF21396D0886D8F7(iParam0) * 60);
	iVar0 = (iVar0 + unk_0xE44C8536D6F264FC(iParam0));
	return iVar0;
}

var func_88(float fParam0)
{
	if (func_95())
	{
		if (func_89() < Global_262145.f_13170)
		{
			if (*fParam0 + (IntToFloat(func_89()) * Global_262145.f_13169)) <= IntToFloat(Global_262145.f_13179)
			{
				*fParam0 = (*fParam0 + (IntToFloat(func_89()) * Global_262145.f_13169));
			}
		}
		return *fParam0;
	}
	return *fParam0;
}

int func_89()
{
	if (func_91(1))
	{
		return Global_1853910[func_90() /*862*/].f_205.f_6;
	}
	return 0;
}

int func_90()
{
	return Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10;
}

bool func_91(bool bParam0)
{
	return func_92(unk_0x259BE71D8A81D4FA(), bParam0);
}

bool func_92(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_94(iParam0))
		{
			return 0;
		}
	}
	return Global_1894573[iParam0 /*608*/].f_10 != func_93();
}

int func_93()
{
	return -1;
}

int func_94(int iParam0)
{
	if (iParam0 != func_93())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_93())
		{
			return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_95()
{
	if (!func_91(1))
	{
		return 0;
	}
	if (func_96())
	{
		return 0;
	}
	return Global_1947720;
}

bool func_96()
{
	return func_94(unk_0x259BE71D8A81D4FA());
}

int func_97(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805029[iParam0 /*3*/][func_52(iParam1)];
		if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_98(int iParam0)
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
			return 6;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 7;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 4;
			break;
		
		case 7:
			return 3;
			break;
	}
	return 0;
}

bool func_99(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	StringCopy(sParam0, "", 32);
	return 0;
	if ((func_101() || func_100()) || unk_0x76CD105BCAC6EB9F())
	{
		StringCopy(sParam0, "GTA Online", 32);
		return 0;
	}
	if (bParam1)
	{
		MemCopy(sParam0, {Global_23131.f_117}, 8);
	}
	else
	{
		StringCopy(sParam0, "GTA Online", 32);
		if (unk_0x99DFE4CAC19D527F())
		{
			iVar0 = Global_262145.f_15;
			iVar1 = unk_0x39D1D336459711BE();
			iVar2 = (iVar0 - iVar1);
			if (iVar2 > 0)
			{
				if ((iVar2 / 86400) > 0)
				{
					iVar3 = (iVar2 / 86400);
					iVar2 = (iVar2 - (iVar3 * 86400));
				}
				if ((iVar2 / 3600) > 0)
				{
					iVar4 = (iVar2 / 3600);
					iVar2 = (iVar2 - iVar4 * 3600);
				}
				if ((iVar2 / 60) > 0)
				{
					iVar5 = (iVar2 / 60);
					iVar2 = (iVar2 - iVar5 * 60);
				}
				StringCopy(sParam0, "", 32);
				StringIntConCat(sParam0, iVar3, 32);
				StringConCat(sParam0, " days", 32);
			}
		}
		MemCopy(&(Global_23131.f_117), {*sParam0}, 4);
	}
	return !unk_0x1B79E937E91F40C3(sParam0, "GTA Online");
}

int func_100()
{
	return 1;
}

int func_101()
{
	return 1;
}

void func_102()
{
	struct<13> Var0;
	struct<16> Var1;
	
	switch (iLocal_148)
	{
		case 0:
			if (func_68(14))
			{
				iLocal_146 = 1;
				return;
			}
			if ((((unk_0x99DFE4CAC19D527F() && unk_0x261E3728EE56B3AC()) && unk_0x5676319ACE5BEC37()) && func_110(0)) && !Global_1666887)
			{
				if (!unk_0x8FE5240A69F17DF8() || unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), Global_1666877))
				{
					if (func_54() && func_50(func_53()))
					{
						func_105();
					}
					Var0 = { func_104(unk_0x259BE71D8A81D4FA()) };
					iLocal_150 = func_53();
					Var1 = { func_103(iLocal_150) };
					if (iLocal_150 != -1)
					{
						iLocal_101 = unk_0x1905CE168C7AF873(&Var0, &Var1, "selector_ui_headshot", Global_1666880[iLocal_150]);
					}
					else
					{
						iLocal_101 = unk_0x1905CE168C7AF873(&Var0, &Var1, "selector_ui_headshot", 0);
					}
					iLocal_148++;
				}
			}
			break;
		
		case 1:
			if (unk_0x26EA30089CAD115D(iLocal_101))
			{
				Global_1666887 = 1;
				iLocal_148 = 99;
			}
			else
			{
				sLocal_149 = unk_0x6DE51300ACD3E3F3(iLocal_101);
				if (!unk_0xD6F9DEE4765092A9(sLocal_149))
				{
					if (iLocal_150 != -1)
					{
						Global_1666880[iLocal_150] = 1;
					}
					iLocal_146 = 1;
					iLocal_148++;
				}
			}
			break;
	}
}

struct<16> func_103(int iParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "share/gta5/mpchars/", 64);
	StringIntConCat(&Var0, iParam0, 64);
	if (unk_0x716271729B9FB8E6())
	{
		StringConCat(&Var0, "_ps5", 64);
	}
	else if (unk_0x6823557BDD18031C())
	{
		StringConCat(&Var0, "_xboxsx", 64);
	}
	else if (unk_0x3B880DE16766E9C3())
	{
		StringConCat(&Var0, "_ps4", 64);
	}
	else if (unk_0xFD5A25A8B9488D42())
	{
		StringConCat(&Var0, "_xboxone", 64);
	}
	else if (unk_0x761778199FE1211C())
	{
	}
	StringConCat(&Var0, ".dds", 64);
	return Var0;
}

struct<13> func_104(int iParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(iParam0, &Var0, 13);
	return Var0;
}

void func_105()
{
	if (unk_0xB10D024D4A098884() != Global_1577877)
	{
		func_106();
	}
	Global_1577877 = unk_0xB10D024D4A098884();
	if (unk_0x3369879DB5987727() != Global_1577878)
	{
		func_106();
	}
	Global_1577878 = unk_0x3369879DB5987727();
}

void func_106()
{
	if (!Global_1666878)
	{
		func_107(1);
		Global_1666877 = unk_0x7E3F74F641EE6B27();
	}
}

void func_107(int iParam0)
{
	Global_1666884 = iParam0;
	func_108(139, iParam0, -1, 1);
}

void func_108(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_109())
	{
		iVar0 = Global_2848282[iParam0 /*3*/][func_52(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xF1D0B0CE940F620D(iVar0, iParam1, iParam3);
		}
	}
}

int func_109()
{
	return 1;
	return 0;
}

int func_110(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 1)
	{
	}
	if (iParam0 == 0)
	{
		if (func_113() == 0)
		{
			return 0;
		}
	}
	if (func_111(&iVar0) && unk_0x38640D2193CB547F(903) == 1)
	{
		return 1;
	}
	if (!func_111(&iVar0))
	{
		if (iVar0 == 6)
		{
			return 1;
		}
		else if (iVar0 == 7)
		{
			return 1;
		}
		else if (iVar0 == 8)
		{
			return 1;
		}
		else if (iVar0 == 10)
		{
			return 1;
		}
		else if (iVar0 == 12)
		{
			return 1;
		}
		else if (iVar0 == 13)
		{
			return 1;
		}
		else if (iVar0 == 11)
		{
			return 1;
		}
	}
	return 0;
}

int func_111(var uParam0)
{
	if (func_112())
	{
		*uParam0 = 11;
		return 1;
	}
	return unk_0x0C81430427CA20D7(uParam0);
}

bool func_112()
{
	return Global_32441;
}

int func_113()
{
	if (func_114())
	{
		if (!unk_0xECBFC40AE72FA489())
		{
			if (unk_0x444B1E9E9A9D726B() == 4)
			{
				return 0;
			}
			if (unk_0x444B1E9E9A9D726B() == 2)
			{
				return 0;
			}
			if (unk_0x444B1E9E9A9D726B() == 1)
			{
				return 0;
			}
			if (unk_0x444B1E9E9A9D726B() == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_114()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

void func_115()
{
	if (!Global_23131)
	{
		if ((!unk_0x76CD105BCAC6EB9F() && (unk_0x1DD05E817C89C737() - iLocal_166) > 300) || (unk_0x76CD105BCAC6EB9F() && (unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_167, 300)) || unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), uLocal_167)) > 1000)))
		{
			if (!unk_0x76CD105BCAC6EB9F() || !bLocal_168)
			{
				if (!iLocal_87)
				{
					if (func_45() == 53)
					{
						iLocal_84 = unk_0x8DE4F68A9728925E("PLAYER_SWITCH_PROLOGUE");
						bLocal_86 = true;
					}
					else
					{
						iLocal_84 = unk_0x8DE4F68A9728925E("PLAYER_SWITCH");
						iLocal_85 = unk_0x8DE4F68A9728925E("PLAYER_SWITCH_STATS_PANEL");
						bLocal_86 = false;
					}
					iLocal_87 = 1;
				}
				iLocal_138 = 0;
				Global_23131.f_3 = 1;
				Global_23131 = 0;
				if (unk_0xA0C7B98BCF1EEF9E(iLocal_84) && (bLocal_86 || unk_0xA0C7B98BCF1EEF9E(iLocal_85)))
				{
					if (!iLocal_139)
					{
						unk_0x2EE4366DBD59BB7A(iLocal_84, 1);
						iLocal_139 = 1;
					}
					Global_23131 = 1;
				}
			}
		}
	}
	iLocal_165 = unk_0x1DD05E817C89C737();
}

int func_116(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3;
	}
	else if (iParam0 == 1)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 1;
	}
	else if (iParam0 == 3)
	{
		return 2;
	}
	return 0;
}

int func_117(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !(Global_78558 && func_129()))
	{
		return 0;
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (((((((unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || ((unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) && iParam0) && !func_127(unk_0x4A8C381C258A124D()))) || func_126()) || func_125(unk_0x4A8C381C258A124D())) || !unk_0xB032847A7F7F0BFE()) || ((((((Global_78828.f_1 && !unk_0x76CD105BCAC6EB9F()) && !func_68(0)) && !func_68(3)) && !func_122(2)) && !func_68(9)) && !func_68(10))) || Global_78819) || (unk_0x17CB7D9FBEC4100F(unk_0x4A8C381C258A124D()) && unk_0x486FF5D06E9659F1(joaat("franklin0")) == 0))
		{
			return 0;
		}
	}
	if (Global_78558)
	{
		if (func_121())
		{
			return 0;
		}
		iVar0 = unk_0x259BE71D8A81D4FA();
		if (iVar0 != -1 && BitTest(Global_1890444[iVar0 /*129*/].f_14, 0))
		{
			return 0;
		}
	}
	if (!Global_78558)
	{
		bVar1 = func_61();
		if (func_46(bVar1))
		{
			if (func_120(bVar1) == 5)
			{
				if (((!func_67(0) && !func_68(0)) && !func_68(3)) && !func_68(2))
				{
					return 0;
				}
			}
		}
		else if (!func_68(14))
		{
			return 0;
		}
		if (!Global_23131.f_12)
		{
			if ((unk_0x333554781C7582D7(unk_0x4A8C381C258A124D()) && iParam0) || (unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D()) != -1 && iParam0))
			{
				return 0;
			}
			if (Global_23131.f_17)
			{
				return 0;
			}
		}
	}
	if (unk_0x3555462DB47B7AB1())
	{
		return 0;
	}
	if (((((((((((((((((((((((Global_23131.f_11 || func_119()) || unk_0x3555462DB47B7AB1()) || func_59()) || func_37(8, -1)) || unk_0xFD216000DC314A92()) || func_35()) || unk_0x4D9174D8796EA622()) || unk_0xEF37E704F02B50F3()) || unk_0xF6D8C7059C3C2495()) || func_30()) || unk_0x486FF5D06E9659F1(joaat("appcamera")) > 0) || Global_112695) || Global_75693) || Global_63353) || (unk_0x7B035E8A1D320F1B(19) && !Global_23131.f_4)) || (unk_0x7B035E8A1D320F1B(16) && !Global_23131.f_4)) || func_31()) || func_25()) || Global_75693) || Global_78813 == 4) || Global_78813 == 5) || func_118()) || unk_0x4CEC1EF3DCEEDD1C())
	{
		return 0;
	}
	return 1;
}

bool func_118()
{
	return unk_0x05AA183DA1344935() != 0;
}

var func_119()
{
	return (Global_23131.f_5 || Global_23131.f_6);
}

int func_120(bool bParam0)
{
	if (!func_46(bParam0))
	{
		return 7;
	}
	return Global_113648.f_7690.f_919[bParam0];
}

int func_121()
{
	if (func_27(0))
	{
		return 1;
	}
	return 0;
}

int func_122(int iParam0)
{
	if (Global_43257 == 15)
	{
		return 0;
	}
	if (func_123(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_123(int iParam0)
{
	return func_124(iParam0, Global_43257);
}

int func_124(int iParam0, int iParam1)
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

int func_125(int iParam0)
{
	struct<3> Var0;
	float fVar1;
	
	if (unk_0x7F420695E3F776FB(iParam0, 0) && !unk_0x27E68848F0E5D7D9(iParam0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
		fVar1 = 0f;
		if (unk_0xB1EAADCB692D69CE(Var0, &fVar1, 0, 0))
		{
			if (Var0.f_2 > (fVar1 + 1.5f))
			{
				return 1;
			}
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_126()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_127(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_128(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_128(int iParam0)
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

bool func_129()
{
	return BitTest(Global_2621446, 3);
}

int func_130(bool bParam0)
{
	if (Global_23131.f_130)
	{
		return 0;
	}
	if (unk_0x2645430E708CBFAC(0, 19) || (!bParam0 && unk_0x61C3701AD6D746B2(0, 19)))
	{
		return 1;
	}
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x2645430E708CBFAC(0, 166))
		{
			if ((!unk_0x6D05C5731A838CB3(0, 167) && !unk_0x6D05C5731A838CB3(0, 168)) && !unk_0x6D05C5731A838CB3(0, 169))
			{
				return 1;
			}
		}
		else if (unk_0x2645430E708CBFAC(0, 167))
		{
			if ((!unk_0x6D05C5731A838CB3(0, 166) && !unk_0x6D05C5731A838CB3(0, 168)) && !unk_0x6D05C5731A838CB3(0, 169))
			{
				return 1;
			}
		}
		else if (unk_0x2645430E708CBFAC(0, 168))
		{
			if ((!unk_0x6D05C5731A838CB3(0, 166) && !unk_0x6D05C5731A838CB3(0, 167)) && !unk_0x6D05C5731A838CB3(0, 169))
			{
				return 1;
			}
		}
		else if (unk_0x2645430E708CBFAC(0, 169))
		{
			if ((!unk_0x6D05C5731A838CB3(0, 166) && !unk_0x6D05C5731A838CB3(0, 167)) && !unk_0x6D05C5731A838CB3(0, 168))
			{
				return 1;
			}
		}
		if (!bParam0)
		{
			if (unk_0x61C3701AD6D746B2(0, 166))
			{
				if ((!unk_0x4465D55576678706(0, 167) && !unk_0x4465D55576678706(0, 168)) && !unk_0x4465D55576678706(0, 169))
				{
					return 1;
				}
			}
			else if (unk_0x61C3701AD6D746B2(0, 167))
			{
				if ((!unk_0x4465D55576678706(0, 166) && !unk_0x4465D55576678706(0, 168)) && !unk_0x4465D55576678706(0, 169))
				{
					return 1;
				}
			}
			else if (unk_0x61C3701AD6D746B2(0, 168))
			{
				if ((!unk_0x4465D55576678706(0, 166) && !unk_0x4465D55576678706(0, 167)) && !unk_0x4465D55576678706(0, 169))
				{
					return 1;
				}
			}
			else if (unk_0x61C3701AD6D746B2(0, 169))
			{
				if ((!unk_0x4465D55576678706(0, 166) && !unk_0x4465D55576678706(0, 167)) && !unk_0x4465D55576678706(0, 168))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_131(bool bParam0)
{
	if (unk_0x22C925E7C63C5628())
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (func_57(unk_0x4A8C381C258A124D()))
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

void func_132()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
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
	
	bVar0 = false;
	bVar1 = false;
	bVar2 = Global_23131.f_121;
	bVar3 = false;
	if (!Global_23131.f_12 && !Global_15)
	{
		if (!unk_0x3555462DB47B7AB1() || Global_1574632)
		{
			if (unk_0x76CD105BCAC6EB9F())
			{
				if (func_880())
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				bVar2 = false;
			}
			if ((func_131(bVar2) || func_130(bVar2)) && func_866(&Local_65, bVar2, 1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_2694550, 3);
				if (func_865(&Local_65) || func_60() == 0)
				{
					iVar4 = unk_0x259BE71D8A81D4FA();
					if (iVar4 > -1)
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[iVar4 /*862*/].f_861), 11);
					}
					if (unk_0x9390801B06EE998F() && !unk_0x78ABC1D11B34F324())
					{
						unk_0xCFBD89D2F1F18961("AllowRadioOverScreenFade", 1);
						unk_0x6FF322107B12B749(1);
						unk_0x8F72AF14CE5AACE4(0);
					}
					func_864();
				}
				Global_1577839 = 1;
				if (unk_0x834C960822A4683F() || (func_863() || func_859()))
				{
					Global_2694529 = 1;
				}
				switch (func_60())
				{
					case 0:
						if (((((func_858() || func_857()) || func_856()) || func_855()) || Global_1836589) || func_854(unk_0x259BE71D8A81D4FA(), 1))
						{
							Global_1577839 = 1;
						}
						break;
				}
				bVar3 = true;
			}
		}
	}
	if (func_853())
	{
		bVar3 = true;
	}
	if (func_852())
	{
		bVar3 = true;
	}
	if (func_44() == 0)
	{
		if (func_851())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_2694550, 4);
			bVar3 = true;
		}
	}
	if (unk_0xE90EEDCA654B46A9())
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_2694550, 8);
	}
	if (unk_0x7B661ACC29FA795E())
	{
		if (func_849())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_2694550, 7);
		}
		else
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_2694550, 6);
		}
	}
	if (func_848())
	{
		func_847(0);
		Local_65.f_39 = 1;
		Local_65.f_7 = 3;
		bVar3 = true;
		bVar0 = true;
		unk_0x0B0C9A0F9AAEB7F0(&Global_2694550, true);
	}
	if ((func_846() && ((func_54() && func_845() == 0) || func_54() == 0)) && func_844())
	{
		iVar5 = 1;
		if (func_54())
		{
			iVar5 = func_837();
		}
		if (iVar5 || func_60() == 0)
		{
			if (func_60() == 0)
			{
				func_836(1);
			}
			unk_0xA1C98227D7D82333();
			func_847(0);
			if (func_60() == -1 || func_60() == 999)
			{
				func_835(1);
			}
			Local_65.f_39 = 1;
			Local_65.f_7 = 3;
			bVar3 = true;
		}
	}
	if (((func_834() && !func_44()) && !unk_0x3555462DB47B7AB1()) && Global_98159.f_44 != 1)
	{
		iVar6 = Global_2696942;
		iVar6 |= 1;
		Global_2696942 = iVar6;
	}
	if ((func_833() && !unk_0x3555462DB47B7AB1()) && Global_98159.f_44 != 1)
	{
		func_847(0);
		Local_65.f_39 = 1;
		if (!unk_0xDCE42B3C644D1A4E())
		{
		}
		Local_65.f_7 = 3;
		bVar3 = true;
		bVar0 = true;
	}
	if ((func_832() && !unk_0x3555462DB47B7AB1()) && Global_98159.f_44 != 1)
	{
		func_847(0);
		Local_65.f_39 = 1;
		if (!unk_0xDCE42B3C644D1A4E())
		{
		}
		Local_65.f_7 = 3;
		bVar3 = true;
		bVar0 = true;
	}
	if ((func_831() && !unk_0x3555462DB47B7AB1()) && Global_98159.f_44 != 1)
	{
		func_847(0);
		Local_65.f_39 = 1;
		if (!unk_0xDCE42B3C644D1A4E())
		{
		}
		Local_65.f_7 = 3;
		bVar3 = true;
		bVar0 = true;
	}
	if (!iLocal_128)
	{
		if (Global_2)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_2694550, 2);
			Global_2696207 = 1;
			Local_65.f_39 = 1;
			Local_65.f_7 = 3;
			bVar3 = true;
			iLocal_128 = 1;
		}
	}
	if (bVar3)
	{
		func_864();
		bVar7 = true;
		if (Global_1577839 == 0)
		{
			bVar7 = false;
		}
		if (func_851())
		{
			bVar7 = false;
		}
		if (Global_2696941 == 1)
		{
			if (func_848())
			{
				bVar7 = false;
			}
		}
		if (func_833())
		{
			if (unk_0xDCE42B3C644D1A4E())
			{
				bVar7 = false;
			}
			else
			{
				bVar7 = true;
			}
			func_830(0);
		}
		if (func_832())
		{
			if (unk_0xDCE42B3C644D1A4E())
			{
				bVar7 = false;
			}
			else
			{
				bVar7 = true;
			}
			func_830(0);
			func_829();
			func_828();
			if (unk_0x76CD105BCAC6EB9F())
			{
				func_827();
			}
			func_826();
		}
		if (func_831())
		{
			if (unk_0xDCE42B3C644D1A4E())
			{
				bVar7 = false;
			}
			else
			{
				bVar7 = true;
			}
			func_830(0);
		}
		if (Global_2696941 == 0)
		{
			if (func_848())
			{
				bVar7 = false;
			}
		}
		if (func_68(14) && !bVar0)
		{
			unk_0xCFBD89D2F1F18961("AllowRadioOverScreenFade", 0);
			if (func_825(&Local_65, 3))
			{
				Global_112596 = 1;
			}
			else if (func_825(&Local_65, func_824(Global_113648.f_2365.f_539.f_4323)))
			{
				Global_112595 = 1;
			}
			Local_65.f_7 = 4;
		}
		else if (func_68(14))
		{
		}
		if (func_823(&Local_65))
		{
			if (Global_14)
			{
				Global_15 = 1;
			}
			else
			{
				func_820(func_822(Local_65.f_7), !bVar7);
			}
		}
		if ((((((((func_865(&Local_65) || func_853()) || func_851()) || unk_0x76CD105BCAC6EB9F()) || func_848()) || func_833()) || func_832()) || func_831()) || func_852())
		{
			func_20();
			if (bVar7)
			{
				if (func_60() == 0)
				{
					unk_0x2B52F77101390E6F(unk_0x259BE71D8A81D4FA(), 0);
				}
				unk_0xCFBD89D2F1F18961("ActivateSwitchWheelAudio", 0);
				func_819(1);
				iVar10 = 0;
				while (bVar7 == 1)
				{
					func_864();
					unk_0x4EB223432F8FA0A0(7);
					unk_0x4EB223432F8FA0A0(6);
					unk_0x4EB223432F8FA0A0(8);
					unk_0x4EB223432F8FA0A0(9);
					func_818(0);
					func_111(&iVar9);
					if (!func_110(0))
					{
						if (!func_111(&iVar9) || func_113() == 0)
						{
							if (iVar9 == 3)
							{
								iVar10 = func_817();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (iVar9 == 6)
							{
								if (iVar8 == 0 && unk_0x6823557BDD18031C() == 0)
								{
									unk_0xE6AC149D1121535D(1f);
									unk_0xC296E8407A7E3E69(1);
									func_816(&Global_1577861);
									iVar8 = 1;
								}
								iVar10 = func_812(1, 1);
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (iVar9 == 7)
							{
								if (iVar8 == 0)
								{
									unk_0xE6AC149D1121535D(1f);
									unk_0xC296E8407A7E3E69(1);
									func_816(&Global_1577861);
									iVar8 = 1;
								}
								iVar10 = func_812(1, 1);
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (unk_0x6B47B305B6557EF9() == 0)
							{
								iVar10 = func_811();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (unk_0x9A98CA859043585F())
							{
							}
							else if (func_114() && unk_0x8C9CC81BD246DE31())
							{
							}
							else if (func_810() && iVar9 == 8)
							{
								if (iLocal_170 == 0)
								{
									func_809(1);
									iLocal_170 = 1;
								}
								iVar10 = func_808();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if ((func_114() && unk_0xECBFC40AE72FA489() == 0) && unk_0x444B1E9E9A9D726B() == 4)
							{
								iVar10 = func_807();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if ((func_114() && unk_0xECBFC40AE72FA489() == 0) && unk_0x444B1E9E9A9D726B() == 2)
							{
								iVar10 = func_806();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if ((func_114() && unk_0xECBFC40AE72FA489() == 0) && unk_0x444B1E9E9A9D726B() == 1)
							{
								iVar10 = func_805();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if ((func_114() && unk_0xECBFC40AE72FA489() == 0) && unk_0x444B1E9E9A9D726B() == 5)
							{
								iVar10 = func_804();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (iVar9 == 10)
							{
								iVar10 = func_800();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (unk_0x5676319ACE5BEC37() == 0)
							{
								if (func_798(&Global_1577861, 3000, 0))
								{
									iVar10 = func_797();
									if (iVar10 == 1)
									{
										iVar10 = 2;
									}
								}
							}
							else if (network_is_platform_subscription_check_pending() == 1)
							{
							}
							else if (func_114() && unk_0x47C5F1CAA6A07D67() == 0)
							{
								if (iLocal_170 == 0)
								{
									unk_0x130048FEFDA3B288();
									iLocal_170 = 1;
								}
								iVar10 = func_796();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (func_810() && unk_0x47C5F1CAA6A07D67() == 0)
							{
								if (iLocal_170 == 0)
								{
									func_795(1);
									iLocal_170 = 1;
								}
								iVar10 = func_794();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (func_793())
							{
								iVar10 = func_792();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (iVar9 == 8)
							{
								if (func_114())
								{
									iVar10 = func_807();
								}
								else
								{
									iVar10 = func_791();
								}
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (iVar9 == 10)
							{
								iVar10 = func_800();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (iVar9 == 11 || unk_0xB1839CEE630503F9())
							{
								iVar10 = func_789();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (unk_0x1595D1B690089487() == 0)
							{
								func_816(&Global_2696999);
							}
							else if (unk_0x1DD7AFEBE9FED010())
							{
							}
							else if (iVar9 == 12)
							{
								iVar10 = func_788();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
							else if (unk_0x3B952A9A844B63C6())
							{
							}
							else if (iVar9 == 13)
							{
								if (func_798(&Global_2696999, 3000, 0))
								{
									iVar10 = func_765();
									if (iVar10 == 1)
									{
										iVar10 = 2;
									}
								}
								else if (unk_0x73F9AE5F32ABCCA9() == 0)
								{
									unk_0xB661D6EC3F065818("MP_SPINLOADING");
									unk_0x654AFEEF256E650F(5);
								}
							}
							else if (iVar9 == 4)
							{
							}
							else
							{
								iVar10 = func_763();
								if (iVar10 == 1)
								{
									iVar10 = 2;
								}
							}
						}
						else
						{
							iVar10 = func_763();
							if (iVar10 == 1)
							{
								iVar10 = 2;
							}
						}
					}
					else if (func_793())
					{
						iVar10 = func_792();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (iVar9 == 1)
					{
						iVar10 = func_817();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (iVar9 == 3)
					{
						iVar10 = func_817();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (iVar9 == 6)
					{
						if (iVar8 == 0 && unk_0x6823557BDD18031C() == 0)
						{
							unk_0xE6AC149D1121535D(1f);
							unk_0xC296E8407A7E3E69(1);
							func_816(&Global_1577861);
							iVar8 = 1;
						}
						iVar10 = func_812(1, 1);
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (iVar9 == 7)
					{
						if (iVar8 == 0)
						{
							unk_0xE6AC149D1121535D(1f);
							unk_0xC296E8407A7E3E69(1);
							func_816(&Global_1577861);
							iVar8 = 1;
						}
						iVar10 = func_812(1, 1);
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (func_810() && iVar9 == 8)
					{
						if (iLocal_170 == 0)
						{
							func_809(1);
							iLocal_170 = 1;
						}
						iVar10 = func_808();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (unk_0x6B47B305B6557EF9() == 0)
					{
						iVar10 = func_811();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (unk_0x9A98CA859043585F())
					{
					}
					else if (func_114() && unk_0x8C9CC81BD246DE31())
					{
					}
					else if ((func_114() && unk_0xECBFC40AE72FA489() == 0) && unk_0x444B1E9E9A9D726B() == 0)
					{
						iVar10 = func_804();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if ((func_114() && unk_0xECBFC40AE72FA489() == 0) && unk_0x444B1E9E9A9D726B() == 5)
					{
						iVar10 = func_804();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (unk_0x261E3728EE56B3AC() == 0)
					{
						if (iVar8 == 0)
						{
							unk_0xE6AC149D1121535D(1f);
							unk_0xC296E8407A7E3E69(1);
							func_816(&Global_1577861);
							iVar8 = 1;
						}
						iVar10 = func_812(1, 0);
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if ((func_114() && unk_0x47C5F1CAA6A07D67() == 0) && func_762() == 0)
					{
						if (func_114())
						{
							if (unk_0xEF37E704F02B50F3() == 0 && iLocal_170 == 1)
							{
								iVar10 = func_796();
							}
							if (iLocal_170 == 0)
							{
								unk_0x130048FEFDA3B288();
								iLocal_170 = 1;
							}
						}
						else
						{
							iVar10 = func_791();
						}
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if ((func_810() && unk_0x47C5F1CAA6A07D67() == 0) && func_762() == 0)
					{
						if (iLocal_170 == 0)
						{
							func_795(1);
							iLocal_170 = 1;
						}
						iVar10 = func_794();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (func_756() == 6)
					{
						iVar10 = func_791();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (unk_0x54A2F9B7AD878EB5() == 1)
					{
					}
					else if (iVar9 == 10)
					{
						iVar10 = func_800();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (unk_0x5676319ACE5BEC37() == 0)
					{
						iVar10 = func_797();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (unk_0x1595D1B690089487() == 0)
					{
						func_816(&Global_2696999);
					}
					else if (unk_0x1DD7AFEBE9FED010())
					{
					}
					else if (iVar9 == 12 && func_60() != 0)
					{
						iVar10 = func_788();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (unk_0x3B952A9A844B63C6())
					{
						if (unk_0x73F9AE5F32ABCCA9() == 0)
						{
							unk_0xB661D6EC3F065818("MP_SPINLOADING");
							unk_0x654AFEEF256E650F(5);
						}
					}
					else if (iVar9 == 13)
					{
						if (func_798(&Global_2696999, 3000, 0))
						{
							iVar10 = func_765();
							if (iVar10 == 1)
							{
								iVar10 = 2;
							}
						}
					}
					else if (iVar9 == 11 || unk_0xB1839CEE630503F9())
					{
						iVar10 = func_789();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (func_755() == 0)
					{
						iVar10 = func_763();
						if (iVar10 == 1)
						{
							iVar10 = 2;
						}
					}
					else if (func_60() == 0)
					{
						iVar10 = func_749();
						if (iVar10 == 1)
						{
							func_715(1, 0);
						}
					}
					else
					{
						iVar10 = func_701();
						if (iVar10 == 1)
						{
							func_715(1, 0);
						}
					}
					if ((func_700() && func_698(unk_0x259BE71D8A81D4FA())) && !((func_831() || func_832()) || func_833()))
					{
						iVar10 = 2;
					}
					if (iVar10 == 1)
					{
						bVar7 = false;
						iLocal_170 = 0;
						if ((((func_831() || func_832()) || func_833()) && !unk_0x3555462DB47B7AB1()) && Global_98159.f_44 != 1)
						{
							if (Global_78556 == 1 && unk_0x174DBD3C5DB3557B() == 0)
							{
								func_835(1);
							}
							else
							{
								func_697(1);
							}
						}
					}
					else if (iVar10 == 2)
					{
						bVar7 = false;
						iLocal_170 = 0;
						Global_1577856 = 0;
						func_694();
						func_818(1);
						func_584(0);
						func_583();
						func_582();
						Global_2695841 = 0;
						func_898();
						bVar3 = false;
					}
					if (func_581())
					{
						iLocal_170 = 0;
						bVar7 = false;
						Global_1577856 = 0;
						func_694();
						func_818(1);
					}
					wait(0);
					if (unk_0x261E3728EE56B3AC() == 0)
					{
						unk_0xE6AC149D1121535D(1f);
					}
					if (func_60() != 0 || (unk_0x261E3728EE56B3AC() == 0 && (unk_0xEF37E704F02B50F3() || unk_0xB11671B812399BA2())))
					{
						if (unk_0x9390801B06EE998F())
						{
							if (unk_0xB11671B812399BA2() || unk_0xEF37E704F02B50F3())
							{
								if (func_565())
								{
									if (unk_0x9390801B06EE998F() && !unk_0x78ABC1D11B34F324())
									{
										unk_0x10B228D2FDB7AF16(0);
									}
								}
								unk_0x98E393364463951A(1);
							}
						}
					}
				}
				unk_0x98E393364463951A(0);
				iVar8 = 0;
				iLocal_170 = 0;
				func_819(0);
			}
			if (bVar3 == 0)
			{
				if (unk_0x15CCE8886267624F())
				{
					unk_0x6FF322107B12B749(0);
					if (!unk_0x76CD105BCAC6EB9F())
					{
						unk_0x10B228D2FDB7AF16(0);
					}
					else if (func_565())
					{
						func_564(0);
					}
				}
				iVar11 = unk_0x259BE71D8A81D4FA();
				if (iVar11 > -1)
				{
					unk_0x8744D2E3FC95740E(&(Global_1853910[iVar11 /*862*/].f_861), 11);
				}
				func_15();
				func_14();
				unk_0xCFBD89D2F1F18961("AllowRadioOverScreenFade", 0);
				iLocal_170 = 0;
				Global_1577839 = 0;
				func_561(1, 0, 1);
				return;
			}
			if (func_67(0))
			{
				iLocal_170 = 0;
				unk_0xB1495D79F52B9EEE(2);
				unk_0xCFBD89D2F1F18961("AllowRadioOverScreenFade", 0);
				return;
			}
			unk_0xCFBD89D2F1F18961("AllowRadioOverScreenFade", 0);
			func_553();
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				unk_0x2B52F77101390E6F(unk_0x259BE71D8A81D4FA(), 1);
			}
			if (func_865(&Local_65) && func_851() == 0)
			{
				Global_1577840 = 1;
			}
			else
			{
				Global_1577840 = 0;
			}
			if ((((Global_1577840 || Global_1577839) && !Global_2) && !unk_0xA7D416B098808337()) && !iLocal_128)
			{
				func_697(1);
			}
			if (iLocal_128)
			{
				if (unk_0x9390801B06EE998F())
				{
					iLocal_128 = 0;
				}
			}
			if ((((func_851() && Global_78821 == -1) && func_552() == 0) && func_551() == 0) && func_550() == 0)
			{
				if ((unk_0x486FF5D06E9659F1(joaat("am_mp_property_int")) == 0 && func_60() != 2) && func_549() == 0)
				{
					func_548(1);
				}
				if (func_60() != 0)
				{
					func_547();
				}
			}
			if (((func_851() && Global_78821 != -1) && func_552() == 0) && func_549() == 0)
			{
				func_543(0);
				func_542(1);
				func_547();
			}
			Global_1577839 = 0;
			if (!unk_0x76CD105BCAC6EB9F())
			{
				iVar15 = func_61();
				if (func_46(iVar15))
				{
					iVar12 = 0;
					while (iVar12 <= 43)
					{
						iVar13 = func_541(iVar12);
						if (iVar13 != 0 && iVar13 != 1993361168)
						{
							iVar14 = unk_0xBCEDAE6CA2B2046E(unk_0x4A8C381C258A124D(), iVar13);
							if (iVar14 != 0 && iVar14 != joaat("weapon_unarmed"))
							{
								if (!func_536(iVar15, iVar14))
								{
									unk_0x45FC566246B3511B(unk_0x4A8C381C258A124D(), iVar14, 0, 0);
									unk_0x4F07124B9C56ED6F(unk_0x4A8C381C258A124D(), iVar14);
								}
							}
						}
						iVar12++;
					}
				}
				func_527(unk_0x4A8C381C258A124D(), 0);
				func_526();
				unk_0xB1495D79F52B9EEE(8);
			}
			if (func_823(&Local_65))
			{
				func_525(1);
			}
			unk_0x66EFB3D6110055C4(2, 199, 1);
			func_518(1);
			unk_0xF064FD8FB64821D1(unk_0x259BE71D8A81D4FA(), 0);
			func_516();
			func_514();
			func_513(8, 1, -1);
			func_816(&uLocal_99);
			if (unk_0x73F9AE5F32ABCCA9())
			{
				unk_0x65662724C6BC4810();
			}
			unk_0x97A5024CE91641F1("MainTransition");
			while (!unk_0xA6E4F7A73ABC4A76("MainTransition") && bVar3)
			{
				unk_0x66EFB3D6110055C4(2, 199, 1);
				if (func_798(&uLocal_99, 20000, 0))
				{
					func_509();
					bVar3 = false;
					return;
				}
				func_20();
				wait(0);
			}
			func_20();
			func_15();
			func_14();
			if (!func_508())
			{
				if (unk_0x15CCE8886267624F())
				{
					unk_0x6FF322107B12B749(0);
					unk_0xCFBD89D2F1F18961("AllowRadioOverScreenFade", 0);
					if (!unk_0x76CD105BCAC6EB9F())
					{
						unk_0x10B228D2FDB7AF16(0);
					}
					else if (func_565())
					{
						func_564(0);
					}
				}
			}
			if (Global_262145.f_3777 == 0 && func_507())
			{
				while (!func_506())
				{
					func_137();
					wait(0);
				}
			}
			else
			{
				func_136(1);
			}
			while (unk_0x546238515F929872(8032) == 0)
			{
				wait(0);
			}
			Global_1651890 = start_new_script("MainTransition", 8032);
			unk_0xFD49725F3FE7EE13("MainTransition");
			Global_2696207 = 0;
			iLocal_128 = 0;
			while (unk_0xF40767E41852FB72(Global_1651890) && func_135() != 64)
			{
				unk_0x66EFB3D6110055C4(2, 199, 1);
				func_553();
				wait(0);
			}
			while (func_134())
			{
				unk_0x66EFB3D6110055C4(2, 199, 1);
				wait(0);
			}
			Global_1574628 = 0;
			func_525(0);
			func_513(8, 0, -1);
			func_518(0);
			if (unk_0x76CD105BCAC6EB9F())
			{
				func_133();
			}
		}
	}
}

void func_133()
{
	if (Global_98159.f_44 == 1 && Global_98159.f_46 == 0)
	{
		Global_98159.f_44 = 0;
	}
}

int func_134()
{
	if (func_29() == 1 || func_29() == 4)
	{
		return 1;
	}
	return 0;
}

int func_135()
{
	return Global_1574993;
}

void func_136(int iParam0)
{
	Global_152235 = iParam0;
}

void func_137()
{
	int iVar0;
	int iVar1;
	
	if (!Global_152235)
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if (!func_44() || ((func_505() != -1 && func_505() != 999) && func_60() != 0))
			{
				if (!unk_0x3555462DB47B7AB1() && unk_0x486FF5D06E9659F1(joaat("startup_positioning")) == 0)
				{
					iVar0 = func_504();
					if (!func_503(iVar0))
					{
						if (func_503(func_64(Global_113648.f_2365.f_539.f_4321)))
						{
							iVar1 = Global_113648.f_2365.f_539.f_4321;
						}
						else if (func_503(func_64(Global_113648.f_2365.f_539.f_4323)))
						{
							iVar1 = Global_113648.f_2365.f_539.f_4323;
						}
						else
						{
							iVar1 = 1;
						}
						if (!func_138(func_824(iVar1), 1))
						{
							func_136(0);
							return;
						}
					}
					else
					{
						func_136(1);
					}
				}
				else
				{
					func_136(0);
				}
			}
			else
			{
				func_136(0);
			}
		}
		else
		{
			func_136(0);
		}
	}
}

int func_138(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	
	Global_23131.f_13 = 0;
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		return 1;
	}
	iVar0 = func_822(iParam0);
	iVar1 = func_64(iVar0);
	if (iVar1 == 0)
	{
		return 1;
	}
	if (unk_0x700C28A639389477(unk_0x4A8C381C258A124D(), iVar1))
	{
		return 1;
	}
	unk_0xEC9DAA34BBB4658C(iVar1);
	if (!unk_0x6252BC0DD8A320DB(iVar1))
	{
		return 0;
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		iVar2 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (unk_0x4A8C381C258A124D() == unk_0xFD5C5BBD1FE92BB7(iVar2, -1, 0))
		{
			iVar3 = -1;
		}
		else if (unk_0x4A8C381C258A124D() == unk_0xFD5C5BBD1FE92BB7(iVar2, 0, 0))
		{
			iVar3 = 0;
		}
		else if (unk_0x4A8C381C258A124D() == unk_0xFD5C5BBD1FE92BB7(iVar2, 1, 0))
		{
			iVar3 = 1;
		}
		else if (unk_0x4A8C381C258A124D() == unk_0xFD5C5BBD1FE92BB7(iVar2, 2, 0))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = 0;
	}
	if (unk_0xFC8BFE4B41177C22(iVar2) && unk_0xD9F5E1FEFD1329E4(iVar2, 0))
	{
		unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
		func_502(&(Global_23085[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		unk_0xB1EAADCB692D69CE(Var4, &(Var4.f_2), 0, 0);
		func_187(&(Global_23085[iParam0]), iVar0, Var4, unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D()), bParam1, 0, 0);
	}
	Global_23085.f_7 = iParam0;
	Global_23085.f_39 = 1;
	func_140(&Global_23085, 0, 0, 0);
	func_139(iParam0);
	return 1;
}

void func_139(int iParam0)
{
	return;
	Global_23131.f_126 = 1;
	Global_23131.f_127 = func_116(iParam0);
	Global_23131.f_129 = unk_0x1DD05E817C89C737();
}

int func_140(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar7;
	var uVar8;
	char* sVar9;
	
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if (*uParam0)[uParam0->f_7] != unk_0x4A8C381C258A124D()
	{
	}
	if ((!unk_0x4FAFF4BCB7633475((*uParam0)[uParam0->f_7]) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D())) && (*uParam0)[uParam0->f_7] != unk_0x4A8C381C258A124D())
	{
		if (!bParam2)
		{
			if ((unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) && !unk_0x5B702A5D1F2635BE(unk_0x4A8C381C258A124D())) && !unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D()))
			{
				unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
			}
			else
			{
				unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
			}
			if ((unk_0x8BF5256C439DF778((*uParam0)[uParam0->f_7]) && !unk_0x5B702A5D1F2635BE((*uParam0)[uParam0->f_7])) && !unk_0x9D6DF8F3584AAC2B((*uParam0)[uParam0->f_7]))
			{
				unk_0x19626F992DC71FB9((*uParam0)[uParam0->f_7]);
			}
			else
			{
				unk_0x974022927CB47E68((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = unk_0x4A8C381C258A124D();
		iVar1 = func_61();
		if (!uParam0->f_23)
		{
			func_527(iVar0, 0);
		}
		func_185(iVar1, &iVar0);
		unk_0x0428AFDCAA63B06E(iVar0, 32, 1);
		unk_0x0428AFDCAA63B06E(iVar0, 250, 1);
		iVar2 = func_822(uParam0->f_7);
		func_527((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((to_float(unk_0x8D91ADE44AC79BC9((*uParam0)[uParam0->f_7])) - 100f) / (to_float(unk_0x3C8EDE4003ABACA0((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (func_63(unk_0x4A8C381C258A124D()))
		{
			case 0:
				if (unk_0x47CB3D397940E783("BulletTime"))
				{
					unk_0x21172E4DF035B893("BulletTime");
				}
				if (unk_0x47CB3D397940E783("BulletTimeOut"))
				{
					unk_0x21172E4DF035B893("BulletTimeOut");
				}
				break;
			
			case 1:
				if (unk_0x47CB3D397940E783("DrivingFocus"))
				{
					unk_0x21172E4DF035B893("DrivingFocus");
				}
				if (unk_0x47CB3D397940E783("DrivingFocusOut"))
				{
					unk_0x21172E4DF035B893("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (unk_0x47CB3D397940E783("REDMIST"))
				{
					unk_0x21172E4DF035B893("REDMIST");
				}
				if (unk_0x47CB3D397940E783("REDMISTOut"))
				{
					unk_0x21172E4DF035B893("REDMISTOut");
				}
				break;
		}
		if (func_46(func_61()))
		{
			if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
			{
				unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
			}
		}
		unk_0x43892D65E9AE6F1B(unk_0x259BE71D8A81D4FA(), (*uParam0)[uParam0->f_7], bParam2, 0);
		unk_0x4EB223432F8FA0A0(3);
		unk_0x4EB223432F8FA0A0(13);
		if (iParam3 & 1 != 0)
		{
			unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 210, 0);
		}
		if (func_122(0) || func_122(3))
		{
			if (Global_23131.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (BitTest(Global_91433[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_91433[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_91469[Global_78828.f_109[iVar5 /*4*/] /*34*/]), 64);
						unk_0x3CAC0DB32E69B1B8(unk_0x70E57E9927B6BA58(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_23131.f_13 = 0;
		uParam0->f_5 = func_824(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = func_824(iVar2);
		uParam0->f_7 = 4;
		iVar7 = unk_0x4A8C381C258A124D();
		unk_0x4285E11B28063EE0(unk_0x4A8C381C258A124D(), true, 0);
		func_184(iVar7);
		unk_0x6E544F5DBF10461B(iVar7, 0, 0);
		if (fVar3 < 25f && !unk_0x9AC89B274C35B3FC(unk_0x4A8C381C258A124D()))
		{
			unk_0xD25E9BDC14A0B649(unk_0x4A8C381C258A124D(), round((((25f / 100f) * (to_float(unk_0x3C8EDE4003ABACA0(unk_0x4A8C381C258A124D())) - 100f)) + 100f)), 0);
		}
		if (bParam1)
		{
			if (unk_0xFC8BFE4B41177C22(iVar0))
			{
				unk_0x4285E11B28063EE0(iVar0, true, 0);
				func_184(iVar0);
				unk_0x6E544F5DBF10461B(iVar0, 0, 0);
				unk_0xF9358C41CC69C616(iVar0, 0, 0);
			}
		}
		else if (unk_0xFC8BFE4B41177C22(iVar0))
		{
			sVar9 = unk_0xED22194AB8539910(iVar0, &uVar8);
			if (!unk_0xFF692AB7350A74D7(sVar9))
			{
				if (!unk_0x1B79E937E91F40C3(sVar9, unk_0x1AF90EB93E0012D6()))
				{
					unk_0xEE0BCDB1B5E36BCB(iVar0, 0, 1);
				}
				unk_0x734A9F4537A31459(&iVar0);
			}
		}
		Global_97963 = 1;
		func_183(unk_0x4A8C381C258A124D());
		func_182();
		func_181(iVar2);
		func_176();
		func_173(iVar2);
		func_147(func_171(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 145, 0));
		unk_0x336E2A96F643C9D5(unk_0x259BE71D8A81D4FA());
		unk_0x1F7539C841C2A71F(unk_0x4A8C381C258A124D(), 0);
		unk_0x1537AF7B62B52EB1(unk_0x4A8C381C258A124D(), 1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0xE8B2E2E978035EF0(unk_0x259BE71D8A81D4FA(), func_146(67));
		}
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x5D0510F58106E4FF(unk_0x259BE71D8A81D4FA(), func_146(68));
		}
		func_143(iVar2, &iVar7);
		if (((func_68(0) || func_68(3)) || func_68(2)) || func_68(4))
		{
			unk_0x0428AFDCAA63B06E(iVar7, 32, 0);
			unk_0x0428AFDCAA63B06E(iVar7, 250, 0);
		}
		else
		{
			unk_0x0428AFDCAA63B06E(iVar7, 32, 1);
			unk_0x0428AFDCAA63B06E(iVar7, 250, 1);
		}
		if (!func_58())
		{
			func_141();
		}
		Global_97600 = 0;
		return 1;
	}
	else
	{
		if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
		}
		if (unk_0x4FAFF4BCB7633475((*uParam0)[uParam0->f_7]))
		{
		}
		if (unk_0x4A8C381C258A124D() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}

void func_141()
{
	if (Global_97993)
	{
		func_62();
		unk_0xAFB25B9F2232474E(func_142(Global_113648.f_2365.f_539.f_4321));
	}
	else
	{
		unk_0xAFB25B9F2232474E("");
	}
}

char* func_142(var uParam0)
{
	uParam0 = uParam0;
	return "";
}

void func_143(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_144(4, *iParam1);
			func_144(7, *iParam1);
			func_144(8, *iParam1);
			func_144(11, *iParam1);
			break;
		
		case 1:
			if (Global_113648.f_9087.f_330[2 /*6*/])
			{
				func_144(4, *iParam1);
			}
			func_144(7, *iParam1);
			func_144(8, *iParam1);
			func_144(11, *iParam1);
			if (Global_113648.f_9087.f_99.f_58[126])
			{
				func_144(12, *iParam1);
			}
			break;
		
		case 2:
			if (Global_113648.f_9087.f_330[20 /*6*/])
			{
				func_144(4, *iParam1);
			}
			func_144(7, *iParam1);
			func_144(8, *iParam1);
			func_144(11, *iParam1);
			break;
	}
}

void func_144(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!unk_0xFC8BFE4B41177C22(iParam1))
	{
		return;
	}
	if (func_145(iParam0, iParam1))
	{
		return;
	}
	if (Global_41953[iParam0 /*31*/].f_24 < 5)
	{
		Global_41953[iParam0 /*31*/].f_25[Global_41953[iParam0 /*31*/].f_24] = iParam1;
		Global_41953[iParam0 /*31*/].f_24++;
	}
	else
	{
		bVar2 = false;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = Global_41953[iParam0 /*31*/].f_25[iVar0];
			if (!unk_0xFC8BFE4B41177C22(iVar1) || unk_0x4FAFF4BCB7633475(iVar1))
			{
				Global_41953[iParam0 /*31*/].f_25[iVar0] = iParam1;
				bVar2 = true;
				iVar0 = 6;
			}
			iVar0++;
		}
		if (!bVar2)
		{
		}
	}
}

int func_145(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_41953[iParam0 /*31*/].f_24)
	{
		if (iParam1 == Global_41953[iParam0 /*31*/].f_25[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_146(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113648.f_9087.f_99.f_58[iParam0];
}

void func_147(int iParam0)
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0x0B0C9A0F9AAEB7F0(&(Global_38617[(38 / 32)]), (38 % 32));
			func_148(38, 0);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_38617[(41 / 32)]), (41 % 32));
			func_148(41, 0);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_38617[(43 / 32)]), (43 % 32));
			func_148(43, 0);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_38617[(42 / 32)]), (42 % 32));
			func_148(42, 0);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_38617[(44 / 32)]), (44 % 32));
			func_148(44, 0);
			break;
		
		case 1:
			unk_0x0B0C9A0F9AAEB7F0(&(Global_38617[(51 / 32)]), (51 % 32));
			func_148(51, 0);
			break;
		
		case 2:
			unk_0x0B0C9A0F9AAEB7F0(&(Global_38617[(51 / 32)]), (51 % 32));
			func_148(51, 0);
			break;
		
		case 3:
			unk_0x0B0C9A0F9AAEB7F0(&(Global_38617[(53 / 32)]), (53 % 32));
			func_148(53, 0);
			break;
		
		case 4:
			unk_0x0B0C9A0F9AAEB7F0(&(Global_38617[(81 / 32)]), (81 % 32));
			func_148(81, 0);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_38617[(82 / 32)]), (82 % 32));
			func_148(82, 0);
			break;
		
		case 5:
			unk_0x0B0C9A0F9AAEB7F0(&(Global_38617[(47 / 32)]), (47 % 32));
			func_148(47, 0);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_38617[(50 / 32)]), (50 % 32));
			func_148(50, 0);
			break;
		
		case 6:
			unk_0x0B0C9A0F9AAEB7F0(&(Global_38617[(50 / 32)]), (50 % 32));
			func_148(50, 0);
			break;
	}
}

void func_148(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_78558)
		{
			iVar0 = Global_42791[iParam0];
		}
		else
		{
			iVar0 = Global_113648.f_7263[iParam0];
		}
		if (iVar0 != iParam1 || BitTest(Global_38617[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_38626[(iParam0 / 32)]), (iParam0 % 32));
				Global_39089[iParam0] = iParam1;
			}
			else if (Global_78558)
			{
				Global_42791[iParam0] = iParam1;
			}
			else
			{
				Global_113648.f_7263[iParam0] = iParam1;
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Global_38617[(iParam0 / 32)]), (iParam0 % 32));
			func_150(iParam0);
			if (BitTest(Global_38617[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_149(iParam0);
			}
		}
	}
}

void func_149(int iParam0)
{
	if (!BitTest(Global_39560.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_39560.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_39560[Global_39560.f_227] = iParam0;
		Global_39560.f_227++;
	}
}

void func_150(int iParam0)
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (!func_170())
	{
		return;
	}
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		return;
	}
	Var0 = { func_169(iParam0) };
	if (BitTest(Var0.f_4, 2))
	{
		func_155(iParam0, &Var0);
	}
	if (!unk_0x116053132936EA1F(Var0.f_5))
	{
		if (unk_0xFD216000DC314A92())
		{
			return;
		}
	}
	bVar1 = false;
	bVar2 = false;
	fVar4 = unk_0xED977E2AE2CB16EE(Var0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1);
	if ((BitTest(Global_38626[(iParam0 / 32)], (iParam0 % 32)) && Global_39089[iParam0] == 2) && fVar4 > 210f)
	{
		unk_0x8744D2E3FC95740E(&(Global_38626[(iParam0 / 32)]), (iParam0 % 32));
		Global_38635[iParam0] = 0;
	}
	if (unk_0x486FF5D06E9659F1(joaat("startup_positioning")) == 0)
	{
		if (BitTest(Global_38862[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar4 < 25f)
			{
				if (Global_100733.f_385 == 0)
				{
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
					{
						Global_100733.f_385 = unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D());
					}
				}
				iVar5 = Global_100733.f_385;
				iVar6 = unk_0x0E171121A3A25363(Var0);
				if (iVar5 == iVar6 && iVar5 != 0)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_38626[(iParam0 / 32)]), (iParam0 % 32));
					Global_39089[iParam0] = 3;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_38617[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			unk_0x8744D2E3FC95740E(&(Global_38862[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (BitTest(Global_38626[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar3 = Global_39089[iParam0];
	}
	else if (BitTest(Var0.f_4, 0))
	{
		if (Global_113648.f_9087)
		{
			iVar3 = func_152(iParam0);
		}
		else
		{
			iVar3 = 0;
		}
		if (func_68(14))
		{
			iVar3 = 0;
		}
	}
	else if (BitTest(Var0.f_4, 1) && unk_0x486FF5D06E9659F1(joaat("ambient_solomon")) == 0)
	{
		if (func_151())
		{
			iVar3 = 0;
		}
		else
		{
			iVar3 = 1;
		}
	}
	else
	{
		iVar3 = Global_113648.f_7263[iParam0];
	}
	if (Global_39316[iParam0] != iVar3)
	{
		bVar1 = true;
	}
	if (BitTest(Global_38617[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!BitTest(Global_38626[(iParam0 / 32)], (iParam0 % 32)) || (Global_38635[iParam0] == 0 && Global_39089[iParam0] != 2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (!Global_38616)
		{
		}
		else
		{
			if (!unk_0x116053132936EA1F(Var0.f_5))
			{
				unk_0xB80B2E08713B8BC6(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar3)
			{
				case 1:
					if (BitTest(Var0.f_4, 3))
					{
						bVar7 = true;
					}
					else if (fVar4 > 3f || unk_0x1D5CD3EAAA7422B0(unk_0x8CA2126DEA4C3796(Var0.f_5)) <= 0.015f)
					{
						iVar8 = unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D());
						iVar9 = unk_0x0E171121A3A25363(Var0);
						if (iVar8 != iVar9 || iVar8 == 0)
						{
							bVar7 = true;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 0);
						}
						unk_0xEBB2809684978887(Var0.f_5, iVar3, 0, 1);
						bVar2 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xEBB2809684978887(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xEBB2809684978887(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 1);
					}
					unk_0xEBB2809684978887(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xEBB2809684978887(Var0.f_5, 0, 0, 1);
					bVar2 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xEBB2809684978887(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xEBB2809684978887(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xEBB2809684978887(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				}
		}
		if (bVar2)
		{
			unk_0x8744D2E3FC95740E(&(Global_38617[(iParam0 / 32)]), (iParam0 % 32));
			Global_39316[iParam0] = iVar3;
		}
	}
	if (BitTest(Global_38626[(iParam0 / 32)], (iParam0 % 32)) && Global_39089[iParam0] != 2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_38617[(iParam0 / 32)]), (iParam0 % 32));
		func_149(iParam0);
		if (Global_38635[iParam0] < 2)
		{
			Global_38635[iParam0]++;
		}
	}
}

int func_151()
{
	if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
	{
		return 0;
	}
	switch (func_61())
	{
		case 0:
			if (Global_113648.f_9087.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_113648.f_9087.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_113648.f_9087.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_152(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_61();
	if (func_153(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (bVar0 == 1)
		{
			if (BitTest(Global_113648.f_7231[5], 0) || BitTest(Global_113648.f_7231[6], 0))
			{
				return 0;
			}
		}
		if (func_46(bVar0))
		{
			if (BitTest(Global_95708[5], bVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (bVar0 == 0)
			{
				if (BitTest(Global_113648.f_7231[0], 0))
				{
					return 0;
				}
			}
			if (func_46(bVar0))
			{
				if (BitTest(Global_95708[0], bVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (bVar0 == 1)
			{
				if (BitTest(Global_113648.f_7231[5], 0))
				{
					return 0;
				}
			}
			if (func_46(bVar0))
			{
				if (BitTest(Global_95708[5], bVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (bVar0 == 1)
			{
				if (BitTest(Global_113648.f_7231[6], 0))
				{
					return 0;
				}
			}
			if (func_46(bVar0))
			{
				if (BitTest(Global_95708[6], bVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (bVar0 == 2)
			{
				if (BitTest(Global_113648.f_7231[2], 0))
				{
					return 0;
				}
				if (func_46(bVar0))
				{
					if (BitTest(Global_95708[2], bVar0))
					{
						return 0;
					}
				}
			}
			else if (bVar0 == 0)
			{
				if (BitTest(Global_113648.f_7231[1], 0))
				{
					return 0;
				}
				if (func_46(bVar0))
				{
					if (BitTest(Global_95708[1], bVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (bVar0 == 2)
			{
				if (BitTest(Global_113648.f_7231[3], 0))
				{
					return 0;
				}
			}
			if (func_46(bVar0))
			{
				if (BitTest(Global_95708[3], bVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_153(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
			{
				iVar0 = unk_0x4B423FAA24E8ABF0(func_154(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 1)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

var func_154(var uParam0)
{
	return uParam0;
}

void func_155(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_158();
	iVar1 = func_157(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_156(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_113648.f_7263[iParam0] = 0;
						unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 12f)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 12f)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_156(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_113648.f_7263[iParam0] = 0;
						unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 12f)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 12f)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_156(iParam0))
			{
				if ((unk_0x486FF5D06E9659F1(joaat("jewelry_heist")) == 0 && unk_0x486FF5D06E9659F1(joaat("jewelry_setup1")) == 0) && !Global_113648.f_9087.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_113648.f_7263[iParam0] = 0;
							unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_113648.f_9087.f_99.f_58[4])
				{
					Global_113648.f_7263[iParam0] = 0;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			else if (Global_113648.f_9087.f_99.f_58[4])
			{
				Global_113648.f_7263[iParam0] = 1;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
			}
			else if (unk_0x486FF5D06E9659F1(joaat("jewelry_heist")) == 0 && unk_0x486FF5D06E9659F1(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 18f)
					{
						Global_113648.f_7263[iParam0] = 1;
						unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 18f)
					{
						Global_113648.f_7263[iParam0] = 1;
						unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_156(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_113648.f_7263[iParam0] = 0;
						unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 40f)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 40f)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_156(iParam0))
			{
				Global_113648.f_7263[iParam0] = 1;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_156(iParam0))
			{
				if (unk_0x486FF5D06E9659F1(joaat("assassin_valet")) == 0)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			else if (unk_0x486FF5D06E9659F1(joaat("assassin_valet")) > 0)
			{
				Global_113648.f_7263[iParam0] = 0;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (unk_0x486FF5D06E9659F1(Global_91469[70 /*34*/].f_6) == 0)
			{
				if (!func_156(iParam0))
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (unk_0x486FF5D06E9659F1(joaat("omega2")) == 0)
			{
				if (!func_156(iParam0))
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_156(iParam0) && unk_0x486FF5D06E9659F1(Global_91469[26 /*34*/].f_6) == 0)
			{
				Global_113648.f_7263[iParam0] = 1;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_156(iParam0))
			{
				if (unk_0x486FF5D06E9659F1(Global_91469[43 /*34*/].f_6) == 0)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_156(iParam0))
			{
				Global_113648.f_7263[iParam0] = 1;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_156(iParam0))
			{
				if (unk_0x486FF5D06E9659F1(Global_91469[93 /*34*/].f_6) > 0)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_156(iParam0))
			{
				Global_113648.f_7263[iParam0] = 1;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_156(iParam0))
			{
				if (unk_0x486FF5D06E9659F1(Global_91469[8 /*34*/].f_6) == 0 && unk_0x486FF5D06E9659F1(Global_91469[10 /*34*/].f_6) == 0)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_156(iParam0))
			{
				if (unk_0x486FF5D06E9659F1(Global_91469[47 /*34*/].f_6) == 0)
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (unk_0x486FF5D06E9659F1(Global_91469[70 /*34*/].f_6) == 0)
			{
				if (!func_156(iParam0))
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (unk_0x486FF5D06E9659F1(Global_91469[48 /*34*/].f_6) == 0)
			{
				if (!func_156(iParam0))
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (unk_0x486FF5D06E9659F1(Global_91469[39 /*34*/].f_6) == 0)
			{
				if (!func_156(iParam0))
				{
					Global_113648.f_7263[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_156(iParam0))
			{
				Global_113648.f_7263[iParam0] = 1;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_156(iParam0))
			{
				Global_113648.f_7263[iParam0] = 1;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_156(iParam0))
			{
				Global_113648.f_7263[iParam0] = 0;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113648.f_7263[iParam0], 1, 1);
			}
			break;
	}
}

bool func_156(int iParam0)
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = { func_169(iParam0) };
	iVar1 = unk_0x117BCCA03F7A311A(Var0.f_5);
	return ((iVar1 == 1 || iVar1 == 4) || iVar1 == 2);
}

int func_157(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

var func_158()
{
	var uVar0;
	
	func_168(&uVar0, unk_0x4BA5A16068183C5E());
	func_167(&uVar0, unk_0x18E502A71E28968C());
	func_166(&uVar0, unk_0x5295501D0862870D());
	func_161(&uVar0, unk_0xB12880C92EA6EE15());
	func_160(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_159(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_159(var uParam0, int iParam1)
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

void func_160(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_161(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_165(*uParam0);
	iVar1 = func_163(*uParam0);
	if (iParam1 < 1 || iParam1 > func_162(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_162(int iParam0, int iParam1)
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

var func_163(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_164(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_164(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_165(var uParam0)
{
	return uParam0 & 15;
}

void func_166(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_167(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_168(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

struct<7> func_169(int iParam0)
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), false);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = joaat("lr_prop_supermod_door_01");
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 792295685;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = joaat("v_ilev_fh_door4");
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = joaat("v_ilev_epsstoredoor");
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), true);
			break;
		
		case 136:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), true);
			break;
		
		case 137:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), true);
			break;
		
		case 138:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), true);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = joaat("hei_v_ilev_bk_gate_pris");
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 1487704245;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = -2018911784;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = -2116116146;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_170()
{
	if ((func_60() == -1 || func_60() == 999) && !func_505() == 0)
	{
		return 1;
	}
	return 0;
}

int func_171(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_95719[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_95719[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_172(iVar0) || iParam2 == 0)
				{
					fVar1 = unk_0xED977E2AE2CB16EE(Param0, Global_95719[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

var func_172(int iParam0)
{
	return BitTest(Global_113648.f_7231[iParam0], 0);
}

void func_173(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_174(iParam0, iVar0);
		iVar0++;
	}
}

void func_174(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_175(iParam0, iParam1, &iVar2, &iVar3);
	if (unk_0x76CD105BCAC6EB9F())
	{
		iVar0 = func_97(iVar3, -1, 0);
	}
	else
	{
		unk_0xDF7F16323520B858(iVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (to_float(iVar0) / 100f)));
			unk_0xA8762533460B016B(unk_0x259BE71D8A81D4FA(), fVar1, 1);
			break;
		
		case 7:
			if (unk_0x486FF5D06E9659F1(joaat("armenian3")) != 0 || unk_0x486FF5D06E9659F1(joaat("trevor3")) != 0)
			{
				Global_97964 = 1;
			}
			else
			{
				fVar1 = (1f - (to_float(iVar0) / 100f));
				unk_0xF75E68D9DCB8C80B(unk_0x259BE71D8A81D4FA(), fVar1);
				unk_0x92F9E3A242F41E98(unk_0x259BE71D8A81D4FA(), fVar1);
				unk_0x048D90B19F701DC3(unk_0x259BE71D8A81D4FA(), fVar1);
			}
			break;
	}
}

void func_175(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_176()
{
	struct<50> Var0;
	
	if ((unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) || !func_46(func_61())) || !func_54())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_178(unk_0x4A8C381C258A124D(), &Var0, 1, -1);
	func_177(1306, Var0[0], -1);
	func_177(1307, Var0[1], -1);
	func_177(1308, Var0[2], -1);
	func_177(1309, Var0[3], -1);
	func_177(1310, Var0[4], -1);
	func_177(1311, Var0[5], -1);
	func_177(1312, Var0[6], -1);
	func_177(1313, Var0[7], -1);
	func_177(1314, Var0[8], -1);
	func_177(1315, Var0[9], -1);
	func_177(1316, Var0[10], -1);
	func_177(1317, Var0[11], -1);
	func_177(1318, Var0.f_13[0], -1);
	func_177(1319, Var0.f_13[1], -1);
	func_177(1320, Var0.f_13[2], -1);
	func_177(1321, Var0.f_13[3], -1);
	func_177(1322, Var0.f_13[4], -1);
	func_177(1323, Var0.f_13[5], -1);
	func_177(1324, Var0.f_13[6], -1);
	func_177(1325, Var0.f_13[7], -1);
	func_177(1326, Var0.f_13[8], -1);
	func_177(1327, Var0.f_13[9], -1);
	func_177(1328, Var0.f_13[10], -1);
	func_177(1329, Var0.f_13[11], -1);
	func_177(1330, Var0.f_26[0], -1);
	func_177(1331, Var0.f_26[1], -1);
	func_177(1332, Var0.f_26[2], -1);
	func_177(1333, Var0.f_26[3], -1);
	func_177(1334, Var0.f_26[4], -1);
	func_177(1335, Var0.f_26[5], -1);
	func_177(1336, Var0.f_26[6], -1);
	func_177(1337, Var0.f_26[7], -1);
	func_177(1338, Var0.f_26[8], -1);
	func_177(1339, Var0.f_26[9], -1);
	func_177(1340, Var0.f_26[10], -1);
	func_177(1341, Var0.f_26[11], -1);
	func_177(1342, Var0.f_39[0], -1);
	func_177(1343, Var0.f_39[1], -1);
	func_177(1344, Var0.f_39[2], -1);
	func_177(1345, Var0.f_39[3], -1);
	func_177(1346, Var0.f_39[4], -1);
	func_177(1347, Var0.f_39[5], -1);
	func_177(1348, Var0.f_39[6], -1);
	func_177(1349, Var0.f_39[7], -1);
	func_177(1350, Var0.f_39[8], -1);
	func_177(1351, Var0.f_49[0], -1);
	func_177(1352, Var0.f_49[1], -1);
	func_177(1353, Var0.f_49[2], -1);
	func_177(1354, Var0.f_49[3], -1);
	func_177(1355, Var0.f_49[4], -1);
	func_177(1356, Var0.f_49[5], -1);
	func_177(1357, Var0.f_49[6], -1);
	func_177(1358, Var0.f_49[7], -1);
	func_177(1359, Var0.f_49[8], -1);
	func_177(1360, func_61(), -1);
	unk_0xF1D0B0CE940F620D(joaat("clo_stored_initial"), 1, 1);
	Global_113648.f_2365.f_539.f_4315 = 1;
}

void func_177(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_53();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	unk_0x0F575D68F532124C(iParam0, iParam1, iParam2);
}

void func_178(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		iVar0 = func_63(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_180(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_179(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_46(iVar0))
		{
			uParam1->f_59 = Global_113648.f_2365.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113648.f_2365.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113648.f_2365.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113648.f_2365.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113648.f_2365.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113648.f_2365.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x76CD105BCAC6EB9F() && unk_0x4B423FAA24E8ABF0(iParam0) == unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			if (func_51(161, iParam3))
			{
				uParam1->f_59 = func_97(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_97(753, iParam3, 0);
			}
			uParam1->f_60 = func_97(754, iParam3, 0);
			uParam1->f_61 = func_97(755, iParam3, 0);
		}
		if (unk_0x76CD105BCAC6EB9F() && iParam0 == unk_0x4A8C381C258A124D())
		{
			if (func_51(161, iParam3))
			{
				uParam1->f_59 = func_97(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_97(753, iParam3, 0);
			}
		}
	}
}

void func_179(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_63(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xB204F40D393426B6(iParam0, iParam1, 1);
		*uParam3 = unk_0x0DC23FA727759F9F(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x6DBAC05AFA907A23(iParam0) && unk_0xB34A70D5AC13FB8C(iParam0) != -1)
				{
					*uParam2 = unk_0xB34A70D5AC13FB8C(iParam0);
					*uParam3 = unk_0xAA6E5BB6733B4BB0(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_180(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_63(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xC0120BBCC298EA2F(iParam0, iParam1);
		*uParam3 = unk_0xD6AED6BFCC58AF7F(iParam0, iParam1);
		*uParam4 = unk_0xDAF263B0E792EAEC(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

void func_181(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			unk_0xD414C47AFF81382A(255, 1166638144, joaat("player"));
			unk_0xD414C47AFF81382A(2, joaat("player"), -1865950624);
			unk_0xD414C47AFF81382A(255, -1865950624, joaat("player"));
			unk_0xD414C47AFF81382A(1, Global_95684, joaat("player"));
			unk_0xD414C47AFF81382A(1, joaat("player"), Global_95684);
			unk_0xD414C47AFF81382A(1, Global_95685, joaat("player"));
			unk_0xD414C47AFF81382A(1, joaat("player"), Global_95685);
			unk_0xD414C47AFF81382A(1, Global_95686, joaat("player"));
			unk_0xD414C47AFF81382A(1, joaat("player"), Global_95686);
			break;
		
		case 1:
			unk_0xD414C47AFF81382A(1, 1166638144, joaat("player"));
			unk_0xD414C47AFF81382A(2, joaat("player"), -1865950624);
			unk_0xD414C47AFF81382A(255, -1865950624, joaat("player"));
			unk_0xD414C47AFF81382A(1, Global_95684, joaat("player"));
			unk_0xD414C47AFF81382A(1, joaat("player"), Global_95684);
			unk_0xD414C47AFF81382A(1, Global_95685, joaat("player"));
			unk_0xD414C47AFF81382A(1, joaat("player"), Global_95685);
			unk_0xD414C47AFF81382A(1, Global_95686, joaat("player"));
			unk_0xD414C47AFF81382A(1, joaat("player"), Global_95686);
			break;
		
		case 2:
			unk_0xD414C47AFF81382A(255, 1166638144, joaat("player"));
			unk_0xD414C47AFF81382A(5, joaat("player"), -1865950624);
			unk_0xD414C47AFF81382A(5, -1865950624, joaat("player"));
			unk_0xD414C47AFF81382A(1, Global_95684, joaat("player"));
			unk_0xD414C47AFF81382A(1, joaat("player"), Global_95684);
			unk_0xD414C47AFF81382A(1, Global_95685, joaat("player"));
			unk_0xD414C47AFF81382A(1, joaat("player"), Global_95685);
			unk_0xD414C47AFF81382A(1, Global_95686, joaat("player"));
			unk_0xD414C47AFF81382A(1, joaat("player"), Global_95686);
			break;
		
		default:
			break;
	}
}

void func_182()
{
	var uVar0;
	int iVar1;
	
	func_62();
	uVar0 = unk_0x413A91F497E3428F();
	if (unk_0xC450B06E5AAA0985(uVar0))
	{
		iVar1 = Global_113648.f_2365.f_539.f_4321;
		if (func_68(14))
		{
			iVar1 = func_63(unk_0x4A8C381C258A124D());
		}
		if (iVar1 == 0)
		{
			unk_0x594D5D0D7071B0DE(uVar0, "BLIP_MICHAEL");
		}
		else if (iVar1 == 1)
		{
			unk_0x594D5D0D7071B0DE(uVar0, "BLIP_FRANKLIN");
		}
		else if (iVar1 == 2)
		{
			unk_0x594D5D0D7071B0DE(uVar0, "BLIP_TREV");
		}
		else
		{
			unk_0x594D5D0D7071B0DE(uVar0, "BLIP_PLAYER");
		}
	}
}

void func_183(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		iVar2 = func_541(iVar0);
		if (iVar2 != 0)
		{
			iVar3 = unk_0xBCEDAE6CA2B2046E(iParam0, iVar2);
			if ((iVar3 != 0 && iVar3 != joaat("weapon_unarmed")) && iVar3 != joaat("object"))
			{
				if (unk_0x1149D67DB429787A(iParam0, iVar3) == -1)
				{
					if (unk_0xACBE463290141D49(iParam0, iVar3, &uVar1))
					{
						unk_0xA83DA0A0DF32920C(iParam0, 0, iVar3);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = unk_0x9A7818E159C72516();
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (unk_0xDF94727C5BBB298F(iVar4, &Var6))
		{
			iVar3 = Var6.f_1;
			if (unk_0x1149D67DB429787A(iParam0, iVar3) == -1)
			{
				if (unk_0xACBE463290141D49(iParam0, iVar3, &uVar1))
				{
					unk_0xA83DA0A0DF32920C(iParam0, 0, iVar3);
				}
			}
		}
		iVar4++;
	}
}

void func_184(int iParam0)
{
	int iVar0;
	
	iVar0 = func_63(iParam0);
	if (func_46(iVar0) && !unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (iParam0 == unk_0x4A8C381C258A124D() && unk_0x3C8EDE4003ABACA0(iParam0) == 200)
		{
			unk_0x36A20106D0B42723(iParam0, round((IntToFloat(unk_0x3C8EDE4003ABACA0(iParam0)) * Global_262145.f_107)));
		}
		if (Global_113648.f_2365.f_539.f_290[iVar0] <= 0f)
		{
			Global_113648.f_2365.f_539.f_290[iVar0] = 100f;
		}
		else if (Global_113648.f_2365.f_539.f_290[iVar0] <= 10f)
		{
			Global_113648.f_2365.f_539.f_290[iVar0] = 10f;
		}
		unk_0xD25E9BDC14A0B649(iParam0, round((((Global_113648.f_2365.f_539.f_290[iVar0] / 100f) * (to_float(unk_0x3C8EDE4003ABACA0(iParam0)) - 100f)) + 100f)), 0);
	}
}

void func_185(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_186(4, *iParam1, 0);
			func_186(7, *iParam1, 0);
			func_186(8, *iParam1, 0);
			func_186(11, *iParam1, 0);
			break;
		
		case 1:
			func_186(4, *iParam1, 0);
			func_186(7, *iParam1, 0);
			func_186(8, *iParam1, 0);
			func_186(11, *iParam1, 0);
			if (Global_113648.f_9087.f_99.f_58[126])
			{
				func_186(12, *iParam1, 0);
			}
			break;
		
		case 2:
			func_186(4, *iParam1, 0);
			func_186(7, *iParam1, 0);
			func_186(8, *iParam1, 0);
			func_186(11, *iParam1, 0);
			break;
	}
}

void func_186(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	if (!bParam2)
	{
		if (!unk_0xFC8BFE4B41177C22(iParam1))
		{
			return;
		}
	}
	if (Global_41953[iParam0 /*31*/].f_24 == 0)
	{
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_41953[iParam0 /*31*/].f_24)
	{
		if (bVar1)
		{
			Global_41953[iParam0 /*31*/].f_25[(iVar0 - 1)] = Global_41953[iParam0 /*31*/].f_25[iVar0];
			Global_41953[iParam0 /*31*/].f_25[iVar0] = 0;
		}
		else if (iParam1 == Global_41953[iParam0 /*31*/].f_25[iVar0])
		{
			Global_41953[iParam0 /*31*/].f_25[iVar0] = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_41953[iParam0 /*31*/].f_24 = (Global_41953[iParam0 /*31*/].f_24 - 1);
	}
}

int func_187(var uParam0, int iParam1, struct<3> Param2, var uParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	if (func_46(iParam1))
	{
		iVar0 = func_64(iParam1);
		unk_0xEC9DAA34BBB4658C(iVar0);
		if (unk_0x6252BC0DD8A320DB(iVar0))
		{
			if (unk_0xFC8BFE4B41177C22(*uParam0))
			{
				unk_0x734A9F4537A31459(uParam0);
			}
			*uParam0 = unk_0xB1DBFEB95C0EFB88(26, iVar0, Param2, uParam3, 0, 0);
			func_501(*uParam0, iParam1, bParam5);
			unk_0x6E544F5DBF10461B(*uParam0, 0, 0);
			func_494(*uParam0);
			func_479(*uParam0, 1, 0);
			func_478(*uParam0);
			func_475(*uParam0);
			func_189(*uParam0, bParam6);
			func_188(*uParam0);
			if (bParam4)
			{
				unk_0x55098D9E9AD58806(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

void func_188(int iParam0)
{
	int iVar0;
	
	if (unk_0x4FAFF4BCB7633475(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98050[iVar0]) && Global_98050[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xFC8BFE4B41177C22(Global_98050[iVar0]))
		{
			Global_98050[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

int func_189(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_63(iParam0);
	if (func_474(iVar0))
	{
		func_473(iVar0, 0);
		func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_280(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (func_278(iParam0))
		{
			func_473(iVar0, 0);
			func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_280(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113648.f_9087.f_99.f_58[120] && !Global_113648.f_9087.f_99.f_58[122])
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113648.f_9087.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113648.f_9087.f_99.f_58[123])
			{
				Global_113648.f_9087.f_99.f_58[123] = 0;
				if (!unk_0x4FAFF4BCB7633475(iParam0))
				{
					if (func_258(iParam0, 3, 169))
					{
						func_459(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_258(iParam0, 12, 6))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_258(iParam0, 12, 17))
			{
				if (!func_190(unk_0x4B423FAA24E8ABF0(iParam0), 12, 17))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 20))
			{
				if (!func_190(unk_0x4B423FAA24E8ABF0(iParam0), 12, 20))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 21))
			{
				if (!func_190(unk_0x4B423FAA24E8ABF0(iParam0), 12, 21))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 22))
			{
				if (!func_190(unk_0x4B423FAA24E8ABF0(iParam0), 12, 22))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 11))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_258(iParam0, 12, 10))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_258(iParam0, 12, 50))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_258(iParam0, 14, 59))
			{
				func_459(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_258(iParam0, 8, 22))
			{
				func_459(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_258(iParam0, 12, 14))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		
		case 1:
			if (func_258(iParam0, 12, 13))
			{
				if (!func_190(unk_0x4B423FAA24E8ABF0(iParam0), 12, 13))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 14))
			{
				if (!func_190(unk_0x4B423FAA24E8ABF0(iParam0), 12, 14))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 15))
			{
				if (!func_190(unk_0x4B423FAA24E8ABF0(iParam0), 12, 15))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 4))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_258(iParam0, 12, 3))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_258(iParam0, 14, 82))
			{
				func_459(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_258(iParam0, 8, 76))
			{
				func_459(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_258(iParam0, 12, 1))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		
		case 2:
			if (func_258(iParam0, 12, 12))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_258(iParam0, 12, 15))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_258(iParam0, 3, 71))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 17))
			{
				if (!func_190(unk_0x4B423FAA24E8ABF0(iParam0), 12, 17))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 18))
			{
				if (!func_190(unk_0x4B423FAA24E8ABF0(iParam0), 12, 18))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 19))
			{
				if (!func_190(unk_0x4B423FAA24E8ABF0(iParam0), 12, 19))
				{
					func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_258(iParam0, 12, 7))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_258(iParam0, 12, 6))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_258(iParam0, 14, 88))
			{
				func_459(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_258(iParam0, 8, 17))
			{
				func_459(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_258(iParam0, 12, 11))
			{
				func_459(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_190(int iParam0, int iParam1, int iParam2)
{
	Global_78341[1 /*14*/] = { func_191(iParam0, iParam1, iParam2, -1) };
	return BitTest(Global_78341[1 /*14*/].f_6, 1);
}

struct<14> func_191(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_257();
	if (iParam0 == joaat("player_zero"))
	{
		func_239(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_220(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_192(iParam1, iParam2);
	}
	return Global_78341[0 /*14*/];
}

void func_192(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_219(iParam1);
			break;
		
		case 2:
			func_218(iParam1);
			break;
		
		case 3:
			func_215(iParam1);
			break;
		
		case 4:
			func_214(iParam1);
			break;
		
		case 6:
			func_213(iParam1);
			break;
		
		case 5:
			func_212(iParam1);
			break;
		
		case 8:
			func_211(iParam1);
			break;
		
		case 9:
			func_210(iParam1);
			break;
		
		case 10:
			func_209(iParam1);
			break;
		
		case 1:
			func_208(iParam1);
			break;
		
		case 7:
			func_207(iParam1);
			break;
		
		case 11:
			func_206(iParam1);
			break;
		
		case 12:
			func_205(iParam1);
			break;
		
		case 13:
			func_204(iParam1);
			break;
		
		case 14:
			func_193(iParam1);
			break;
	}
}

void func_193(int iParam0)
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
	iVar7 = 14;
	Global_78341[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 215;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 49;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 63;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar3 = 26;
			iVar4 = 10;
			iVar1 = 18;
			iVar5 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar3 = 26;
			iVar4 = 11;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar3 = 26;
			iVar4 = 12;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar3 = 26;
			iVar4 = 13;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar3 = 26;
			iVar4 = 14;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar3 = 26;
			iVar4 = 15;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_202(iVar7, iParam0, 155, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_194(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
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
	uParam0->f_12 = func_201(iParam8);
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
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), false);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 5);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), true);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 6);
		if (func_68(14))
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
			if (!func_199(Global_2883588, 1, 1, 1, -1))
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_6), 2);
			}
			if (!func_199(Global_2883588, 2, 1, 1, -1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_199(Global_2883588, 1, 1, 1, -1))
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_6), 2);
			}
			if (!func_199(Global_2883588, 2, 1, 1, -1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_199(Global_2883588, 1, 1, 1, -1))
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_6), 2);
			}
			if (!func_199(Global_2883588, 2, 1, 1, -1))
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
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), false);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 5);
		if (func_198(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), true);
		}
		if (func_198(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
		}
		if (!func_198(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), false);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_68(14))
			{
				return;
			}
			uVar0 = func_97(func_197(iParam1, uParam0->f_2), Global_78338, 0);
			if (BitTest(uVar0, uParam0->f_1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), true);
			}
			uVar0 = func_97(func_196(iParam1, uParam0->f_2), Global_78338, 0);
			if (BitTest(uVar0, uParam0->f_1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
			}
			if (func_195(iParam1, uParam0->f_2, &iVar1))
			{
				uVar0 = func_97(iVar1, Global_78338, 0);
				if (!BitTest(uVar0, uParam0->f_1))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), true);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), true);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
		}
	}
}

bool func_195(int iParam0, int iParam1, var uParam2)
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

int func_196(int iParam0, int iParam1)
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

int func_197(int iParam0, int iParam1)
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

int func_198(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_2365[iParam1 /*164*/][iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113648.f_2365[iParam1 /*164*/][iParam3]), bParam4);
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

int func_199(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
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
	if (func_200(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3))
	{
		uVar3 = func_97(iVar2, iVar0, 0);
		return BitTest(uVar3, uVar1);
	}
	return 0;
}

bool func_200(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
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

int func_201(int iParam0)
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

void func_202(int iParam0, int iParam1, int iParam2, int iParam3)
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
				func_194(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_194(&(Global_78341[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
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
				func_194(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, unk_0x304A39EB177D246B(Var5.f_1, joaat("outfit_only"), 0), iVar6, 2, Var5.f_1 != 0);
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
			func_194(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x304A39EB177D246B(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 != 0);
			return;
		}
		iVar10 = (iParam1 - iParam2);
		if (iVar10 >= 0)
		{
			iVar11 = unk_0x7B6C0A0D604E68FA(iVar1, 10, -1, 0, -1, func_203(iParam0));
			if (iVar11 > iVar10)
			{
				unk_0xD36906FE7BBBDB62(iVar10, &Var9);
				Global_2883588 = Var9.f_1;
				Global_2883589 = Var9.f_0;
				func_194(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x304A39EB177D246B(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 != 0);
				return;
			}
		}
	}
}

int func_203(int iParam0)
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

void func_204(int iParam0)
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
	iVar7 = 13;
	Global_78341[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_202(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_205(int iParam0)
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
	Global_78341[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_202(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_206(int iParam0)
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
	iVar7 = 11;
	Global_78341[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_202(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_207(int iParam0)
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
	Global_78341[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_202(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_208(int iParam0)
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
	iVar7 = 1;
	Global_78341[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_202(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_209(int iParam0)
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
	Global_78341[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		default:
			func_202(iVar7, iParam0, 33, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_210(int iParam0)
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
	iVar7 = 9;
	Global_78341[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_202(iVar7, iParam0, 17, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_211(int iParam0)
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
	iVar7 = 8;
	Global_78341[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_202(iVar7, iParam0, 18, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_212(int iParam0)
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
	Global_78341[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_202(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_213(int iParam0)
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
	iVar7 = 6;
	Global_78341[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_202(iVar7, iParam0, 84, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_214(int iParam0)
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
	iVar7 = 4;
	Global_78341[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 80;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		default:
			func_202(iVar7, iParam0, 104, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_215(int iParam0)
{
	if (iParam0 < 136)
	{
		func_217(iParam0);
	}
	else
	{
		func_216(iParam0);
	}
	if (Global_78341[0 /*14*/].f_2 == -1)
	{
		func_202(3, iParam0, 242, -1);
	}
}

void func_216(int iParam0)
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
	iVar7 = 3;
	Global_78341[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar3 = 25;
			iVar4 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar3 = 25;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar3 = 25;
			iVar4 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar3 = 25;
			iVar4 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar3 = 27;
			iVar4 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_217(int iParam0)
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
	iVar7 = 3;
	Global_78341[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_218(int iParam0)
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
	iVar7 = 2;
	Global_78341[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		default:
			func_202(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_219(int iParam0)
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
	iVar7 = 0;
	Global_78341[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_202(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_220(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_238(iParam1);
			break;
		
		case 2:
			func_237(iParam1);
			break;
		
		case 3:
			func_233(iParam1);
			break;
		
		case 4:
			func_232(iParam1);
			break;
		
		case 6:
			func_231(iParam1);
			break;
		
		case 5:
			func_230(iParam1);
			break;
		
		case 8:
			func_229(iParam1);
			break;
		
		case 9:
			func_228(iParam1);
			break;
		
		case 10:
			func_227(iParam1);
			break;
		
		case 1:
			func_226(iParam1);
			break;
		
		case 7:
			func_225(iParam1);
			break;
		
		case 11:
			func_224(iParam1);
			break;
		
		case 12:
			func_223(iParam1);
			break;
		
		case 13:
			func_222(iParam1);
			break;
		
		case 14:
			func_221(iParam1);
			break;
	}
}

void func_221(int iParam0)
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
	iVar7 = 14;
	Global_78341[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 4590;
			iVar5 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 4100;
			iVar5 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 3850;
			iVar5 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 1850;
			iVar5 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5250;
			iVar5 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 5050;
			iVar5 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 2500;
			iVar5 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 1950;
			iVar5 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 3900;
			iVar5 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 3550;
			iVar5 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 4500;
			iVar5 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2950;
			iVar5 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 130;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 112;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 118;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 125;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 139;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 198;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 200;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 208;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 160;
			iVar5 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 32;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 38;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 45;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 48;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_202(iVar7, iParam0, 175, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_222(int iParam0)
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
	iVar7 = 13;
	Global_78341[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_202(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_223(int iParam0)
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
	Global_78341[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_202(iVar7, iParam0, 47, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_224(int iParam0)
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
	iVar7 = 11;
	Global_78341[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_202(iVar7, iParam0, 63, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_225(int iParam0)
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
	Global_78341[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_202(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_226(int iParam0)
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
	iVar7 = 1;
	Global_78341[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_202(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_227(int iParam0)
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
	Global_78341[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		default:
			func_202(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_228(int iParam0)
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
	iVar7 = 9;
	Global_78341[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_202(iVar7, iParam0, 12, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_229(int iParam0)
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
	iVar7 = 8;
	Global_78341[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		default:
			func_202(iVar7, iParam0, 77, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_230(int iParam0)
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
	Global_78341[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_202(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_231(int iParam0)
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
	iVar7 = 6;
	Global_78341[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_202(iVar7, iParam0, 134, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_232(int iParam0)
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
	iVar7 = 4;
	Global_78341[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar3 = 22;
			iVar4 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar3 = 22;
			iVar4 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_202(iVar7, iParam0, 117, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_233(int iParam0)
{
	if (iParam0 < 107)
	{
		func_236(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_235(iParam0);
	}
	else
	{
		func_234(iParam0);
	}
	if (Global_78341[0 /*14*/].f_2 == -1)
	{
		func_202(3, iParam0, 318, -1);
	}
}

void func_234(int iParam0)
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
	iVar7 = 3;
	Global_78341[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar6 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar3 = 29;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar3 = 29;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar3 = 29;
			iVar4 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar3 = 30;
			iVar4 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar3 = 30;
			iVar4 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar3 = 30;
			iVar4 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar3 = 30;
			iVar4 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar3 = 30;
			iVar4 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar3 = 31;
			iVar4 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar3 = 31;
			iVar4 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar3 = 31;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar3 = 31;
			iVar4 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar3 = 31;
			iVar4 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_235(int iParam0)
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
	iVar7 = 3;
	Global_78341[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 3100;
			iVar6 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 2800;
			iVar6 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 2500;
			iVar6 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3000;
			iVar6 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_236(int iParam0)
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
	iVar7 = 3;
	Global_78341[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 23;
			iVar6 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 26;
			iVar6 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 24;
			iVar6 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_237(int iParam0)
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
	iVar7 = 2;
	Global_78341[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_202(iVar7, iParam0, 21, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_238(int iParam0)
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
	iVar7 = 0;
	Global_78341[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		default:
			func_202(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_239(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_256(iParam1);
			break;
		
		case 2:
			func_255(iParam1);
			break;
		
		case 3:
			func_252(iParam1);
			break;
		
		case 4:
			func_251(iParam1);
			break;
		
		case 6:
			func_250(iParam1);
			break;
		
		case 5:
			func_249(iParam1);
			break;
		
		case 8:
			func_248(iParam1);
			break;
		
		case 9:
			func_247(iParam1);
			break;
		
		case 10:
			func_246(iParam1);
			break;
		
		case 1:
			func_245(iParam1);
			break;
		
		case 7:
			func_244(iParam1);
			break;
		
		case 11:
			func_243(iParam1);
			break;
		
		case 12:
			func_242(iParam1);
			break;
		
		case 13:
			func_241(iParam1);
			break;
		
		case 14:
			func_240(iParam1);
			break;
	}
}

void func_240(int iParam0)
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
	iVar7 = 14;
	Global_78341[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 56;
			iVar5 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 70;
			iVar5 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 74;
			iVar5 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 78;
			iVar5 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 82;
			iVar5 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar5 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 235;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 250;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 275;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 280;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 295;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 179;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 225;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		default:
			func_202(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_241(int iParam0)
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
	iVar7 = 13;
	Global_78341[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_202(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_242(int iParam0)
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
	Global_78341[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_202(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_243(int iParam0)
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
	iVar7 = 11;
	Global_78341[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_202(iVar7, iParam0, 45, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_244(int iParam0)
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
	Global_78341[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_202(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_245(int iParam0)
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
	iVar7 = 1;
	Global_78341[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_202(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_246(int iParam0)
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
	Global_78341[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			break;
		
		default:
			func_202(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_247(int iParam0)
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
	iVar7 = 9;
	Global_78341[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_202(iVar7, iParam0, 20, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_248(int iParam0)
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
	iVar7 = 8;
	Global_78341[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_202(iVar7, iParam0, 24, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_249(int iParam0)
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
	Global_78341[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_202(iVar7, iParam0, 14, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_250(int iParam0)
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
	iVar7 = 6;
	Global_78341[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_202(iVar7, iParam0, 99, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_251(int iParam0)
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
	iVar7 = 4;
	Global_78341[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 29;
			iVar4 = 0;
			break;
		
		default:
			func_202(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_252(int iParam0)
{
	if (iParam0 < 60)
	{
		func_254(iParam0);
	}
	else
	{
		func_253(iParam0);
	}
	if (Global_78341[0 /*14*/].f_2 == -1)
	{
		func_202(3, iParam0, 181, -1);
	}
}

void func_253(int iParam0)
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
	iVar7 = 3;
	Global_78341[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar3 = 21;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar3 = 21;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_254(int iParam0)
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
	iVar7 = 3;
	Global_78341[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_255(int iParam0)
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
	iVar7 = 2;
	Global_78341[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_202(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_256(int iParam0)
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
	iVar7 = 0;
	Global_78341[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_202(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_194(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_257()
{
	Global_78341[0 /*14*/].f_1 = -1;
	Global_78341[0 /*14*/].f_2 = -1;
	Global_78341[0 /*14*/].f_5 = -1;
	Global_78341[0 /*14*/].f_3 = -1;
	Global_78341[0 /*14*/].f_4 = -1;
	Global_78341[0 /*14*/].f_7 = 0;
	Global_78341[0 /*14*/].f_6 = 0;
	Global_78341[0 /*14*/].f_13 = -1;
	Global_78341[0 /*14*/].f_12 = 0;
	Global_78341[0 /*14*/] = 0;
	StringCopy(&(Global_78341[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_258(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	
	if (unk_0x4FAFF4BCB7633475(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	Global_78341[1 /*14*/] = { func_191(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78341[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_274(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_258(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { func_269(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_258(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78341[2 /*14*/] = { func_191(iVar0, 14, iVar4, -1) };
									if (Global_78341[2 /*14*/].f_12 == iVar3)
									{
										if (func_258(iParam0, 14, iVar4))
										{
											if (!func_261(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78341[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_259(iParam0, iVar2);
						Global_78341[2 /*14*/] = { func_191(iVar0, iVar2, iVar1, -1) };
						if (!func_261(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78341[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar8 = { func_269(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_258(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xB204F40D393426B6(iParam0, Global_78341[1 /*14*/].f_12, 1) == Global_78341[1 /*14*/].f_3 && (unk_0x0DC23FA727759F9F(iParam0, Global_78341[1 /*14*/].f_12) == Global_78341[1 /*14*/].f_4 || Global_78341[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_78341[1 /*14*/].f_3 == unk_0xC0120BBCC298EA2F(iParam0, func_203(iParam1)) && Global_78341[1 /*14*/].f_4 == unk_0xD6AED6BFCC58AF7F(iParam0, func_203(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_259(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x4FAFF4BCB7633475(iParam0))
	{
		return -99;
	}
	iVar0 = func_203(iParam1);
	iVar1 = unk_0xC0120BBCC298EA2F(iParam0, iVar0);
	iVar2 = unk_0xD6AED6BFCC58AF7F(iParam0, iVar0);
	return func_260(iParam0, iVar1, iVar2, iParam1);
}

int func_260(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_203(iParam3);
	iVar1 = unk_0x1A4EFE92822E3123(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + unk_0x8401C77F508D70FD(iParam0, iVar0, iVar3));
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

int func_261(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
		uVar0 = { func_269(iParam0, (*uParam4)[13]) };
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
	if (func_268(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_267(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_266(iParam0, iParam2, iParam3, -1))
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
		else if (func_262(iParam0, iParam2, iParam3, -1))
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
		if (func_267(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_266(iParam0, iParam2, iParam3, -1))
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
		else if (func_262(iParam0, iParam2, iParam3, -1))
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
		if (func_267(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_266(iParam0, iParam2, iParam3, -1))
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
		else if (func_262(iParam0, iParam2, iParam3, -1))
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

int func_262(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_263(iParam0, iParam2, 14, 3);
						}
						return (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 1) || unk_0x304A39EB177D246B(func_263(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_263(iParam0, iParam2, 1, 3);
						}
						return (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 0) || unk_0x304A39EB177D246B(func_263(iParam0, iParam2, 1, 3), -1842686353, 0));
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
							iParam3 = func_263(iParam0, iParam2, 14, 4);
						}
						return (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 1) || unk_0x304A39EB177D246B(func_263(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_263(iParam0, iParam2, 1, 4);
						}
						return (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 0) || unk_0x304A39EB177D246B(func_263(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_263(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar1 = (iParam1 - func_265(iParam0));
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
		iVar4 = (iParam1 - func_264(iParam0, func_203(iParam2)));
		if (iVar4 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_78491.f_26[iParam2] && iParam1 == Global_78491[iParam2]) && Global_78491.f_13[iParam2] != 0)
		{
			return Global_78491.f_13[iParam2];
		}
		iVar5 = unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 0, -1, func_203(iParam2));
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

int func_264(int iParam0, int iParam1)
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

int func_265(int iParam0)
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

int func_266(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_263(iParam0, iParam2, 1, 3);
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
						iParam3 = func_263(iParam0, iParam2, 1, 4);
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

int func_267(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_263(iParam0, iParam2, 14, 3);
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
						iParam3 = func_263(iParam0, iParam2, 14, 4);
					}
					return unk_0x304A39EB177D246B(iParam3, joaat("glasses"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_268(int iParam0, int iParam1, int iParam2)
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

struct<10> func_269(int iParam0, int iParam1)
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
					func_273(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_273(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_273(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_273(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_273(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_273(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_273(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_273(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_273(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_273(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_273(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_270(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_273(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_273(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_273(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_273(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_273(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_273(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_273(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_273(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_273(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_273(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_270(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_273(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_273(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_273(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_273(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_273(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_273(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_273(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_273(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_273(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_273(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_270(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_273(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_273(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_273(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_273(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_273(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_273(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_273(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_273(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_273(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_273(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_273(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_273(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_273(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_273(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_273(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_273(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_273(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_273(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_273(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_273(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_273(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_273(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_273(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_273(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_273(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_273(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_270(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_273(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_273(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_273(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_273(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_273(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_273(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_273(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_273(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_273(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_273(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_273(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_273(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_273(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_273(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_273(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_273(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_273(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_273(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_273(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_273(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_273(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_273(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_273(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_273(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_273(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_270(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_270(int iParam0, int iParam1, int iParam2, int iParam3)
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
						(*iParam0)[Var2.f_2] = func_271(iParam1, Var2.f_0, 14, iVar0);
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

int func_271(int iParam0, int iParam1, int iParam2, int iParam3)
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
				return (func_272(iParam0) + iVar1);
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
			return (func_265(iParam0) + iVar3);
		}
	}
	else
	{
		unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 0, -1, func_203(iParam2));
		iVar4 = unk_0x55FF07D3A2FE8317(iParam1);
		if (iVar4 != -1)
		{
			return (func_264(iParam0, func_203(iParam2)) + iVar4);
		}
	}
	return -99;
}

int func_272(int iParam0)
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

void func_273(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

struct<17> func_274(int iParam0, int iParam1)
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
						func_277(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_277(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_277(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_277(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_277(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_277(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_277(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[0], Global_113648.f_2365.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_277(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_277(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_277(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_277(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_277(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_277(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_277(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_277(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_277(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_277(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_277(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_277(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_277(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_277(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_277(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_277(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_277(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_277(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_277(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_277(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_277(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_277(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_277(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_277(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_277(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_277(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_277(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_277(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_277(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_277(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_277(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_277(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_277(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_277(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_277(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_277(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_277(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_277(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_277(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_277(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_277(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_277(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_277(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_277(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_277(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_277(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_277(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_275(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_277(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_277(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_277(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[1], Global_113648.f_2365.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_277(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_277(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_277(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_277(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_277(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_277(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_277(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_277(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_277(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_277(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_277(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_277(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_277(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_277(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_277(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_277(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_277(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_277(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_277(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_277(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_277(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_277(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_277(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_277(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_277(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_277(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_277(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_277(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_277(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_277(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_277(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_277(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_277(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_277(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_277(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_277(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_277(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_277(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_277(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_277(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_277(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_277(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_277(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_277(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_275(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_277(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_277(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_277(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_277(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_277(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[2], Global_113648.f_2365.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_277(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_277(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_277(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_277(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_277(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_277(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_277(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_277(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_277(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_277(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_277(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_277(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_277(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_277(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_277(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_277(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_277(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_277(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_277(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_277(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_277(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_277(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_277(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_277(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_277(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_277(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_277(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_277(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_277(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_277(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_277(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_277(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_277(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_277(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_277(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_277(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_277(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_277(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_277(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_277(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_277(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_277(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_277(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_275(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_277(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_277(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_277(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_277(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_277(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_277(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_277(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_277(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_277(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_277(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_277(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_277(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_277(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_277(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_277(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_277(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_277(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_277(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_277(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_277(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_277(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_277(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_277(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_277(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_277(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_277(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_275(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_277(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_277(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_277(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_277(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_277(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_277(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_277(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_277(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_277(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_277(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_277(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_277(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_277(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_277(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_277(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_277(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_277(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_277(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_277(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_277(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_277(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_277(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_277(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_277(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_277(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_277(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_277(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_277(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_275(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_275(var uParam0, int iParam1, int iParam2, int iParam3)
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
						(*uParam0)[func_276(Var2.f_2)] = Var2.f_0;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_276(Var2.f_2)] = func_271(iParam1, Var2.f_0, func_276(Var2.f_2), iVar0);
					}
				}
				else if (Var2.f_1 != -1)
				{
					(*uParam0)[func_276(Var2.f_2)] = Var2.f_1;
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

int func_276(int iParam0)
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

void func_277(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

bool func_278(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
	iVar0 = func_259(iParam0, 4);
	return func_279(iVar1, 4, iVar0);
}

int func_279(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 79)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 169 || (iParam2 >= 92 && iParam2 <= 96))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 77)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 260)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if ((iParam2 >= 81 && iParam2 <= 90) || (iParam2 >= 94 && iParam2 <= 103))
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 96)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_280(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		iVar0 = func_63(iParam0);
		if (func_46(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_458(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					func_457(iVar0);
					func_282(iParam0, &(Global_113648.f_2365.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			func_178(iParam0, &Var2, 1, -1);
			Global_100406[iVar0 /*65*/] = { Var2 };
			if (iParam0 == unk_0x4A8C381C258A124D())
			{
				func_176();
			}
			if (unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) != unk_0x70E57E9927B6BA58("clothes_shop_sp") || (unk_0x486FF5D06E9659F1(joaat("lester1")) == 0 && unk_0x486FF5D06E9659F1(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!func_68(0) && !func_68(1)) && !func_68(2)) && !func_68(3)) && !func_68(4)) && !func_68(9)) && !func_68(10)))
				{
					Global_113648.f_2365.f_539[iVar0 /*65*/] = { Var2 };
					Global_113648.f_2365.f_539.f_2391[iVar0] = func_281(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113648.f_2365.f_539.f_204[iVar3 /*4*/][iVar0] = func_259(iParam0, func_276(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113648.f_2365.f_539.f_204[iVar3 /*4*/][iVar0] = func_259(iParam0, func_276(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_113648.f_9087.f_99.f_58[121])
						{
							Global_113648.f_9087.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

int func_281(int iParam0)
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
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar4 = iVar1;
		iVar3 = unk_0x1A4EFE92822E3123(iParam0, iVar4);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = (iVar0 + unk_0x8401C77F508D70FD(iParam0, iVar4, iVar2));
			iVar2++;
		}
		iVar1++;
	}
	iVar5 = 0;
	while (iVar5 < 9)
	{
		iVar8 = iVar5;
		iVar7 = unk_0x4D0F04723A52D0E9(iParam0, iVar8);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar0 = (iVar0 + unk_0x1D77F90D87ACD2BA(iParam0, iVar8, iVar6));
			iVar6++;
		}
		iVar5++;
	}
	return iVar0;
}

void func_282(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
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
	int iVar11;
	struct<5> Var12;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0) || iParam5)
	{
		iVar0 = func_63(iParam0);
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= unk_0x1A4EFE92822E3123(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= unk_0x8401C77F508D70FD(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				unk_0xD1C578C204015E1F(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= unk_0x4D0F04723A52D0E9(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= unk_0x1D77F90D87ACD2BA(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				unk_0x7F08C4791E6D6969(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false, 1);
			}
			else
			{
				unk_0x09397806857F5DFB(iParam0, iVar3, 1);
			}
			iVar3++;
		}
		if (func_46(iVar0))
		{
			Global_113648.f_2365.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113648.f_2365.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113648.f_2365.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_456(iParam0, iVar1, &iVar2, 0))
			{
				func_459(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113648.f_2365.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113648.f_2365.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113648.f_2365.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_454(iParam0, iVar1, &iVar2))
			{
				func_459(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (unk_0x76CD105BCAC6EB9F() && unk_0x4B423FAA24E8ABF0(iParam0) == unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			bVar4 = func_451(iParam0);
			func_450(754, uParam1->f_60, Global_78338, 1, 0);
			func_450(755, uParam1->f_61, Global_78338, 1, 0);
			iVar5 = func_260(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("mp_m_freemode_01"))
				{
					iVar6 = func_448(iVar5);
				}
				else if (iVar1 == joaat("mp_f_freemode_01"))
				{
					iVar6 = func_446(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_286(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78338, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = func_260(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_286(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78338, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = func_283(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_286(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78338, bVar4, 0, 0);
			}
		}
		if (unk_0x76CD105BCAC6EB9F() && iParam0 == unk_0x4A8C381C258A124D())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("mp_m_freemode_01"))
			{
				iVar9 = func_448(iVar9);
			}
			else
			{
				iVar9 = func_446(iVar9);
			}
			func_450(753, iVar9, Global_78338, 1, 0);
			func_450(2053, iVar9, Global_78338, 1, 0);
			func_108(161, 1, -1, 1);
		}
		if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
		{
			iVar10 = unk_0x94B8A32AA940A6B5(iParam0, 1, unk_0xC0120BBCC298EA2F(iParam0, 1), unk_0xD6AED6BFCC58AF7F(iParam0, 1));
			iVar11 = unk_0x6B7AEB5F3D578298(iParam0, 1, unk_0xB204F40D393426B6(iParam0, 1, 1), unk_0x0DC23FA727759F9F(iParam0, 1));
			if (iVar10 == joaat("dlc_mp_arena_m_berd_13_0") || iVar10 == joaat("dlc_mp_arena_f_berd_13_0"))
			{
				if (!unk_0x304A39EB177D246B(iVar11, joaat("arena_draw_0"), 1))
				{
					unk_0x7A491C9A90975007(&Var12);
					if (iVar10 == joaat("dlc_mp_arena_m_berd_13_0"))
					{
						unk_0x2DBB2D25D50A5392(joaat("dlc_mp_arena_m_peyes_0_0"), &Var12);
					}
					else
					{
						unk_0x2DBB2D25D50A5392(joaat("dlc_mp_arena_f_peyes_0_0"), &Var12);
					}
					unk_0x7F08C4791E6D6969(iParam0, 1, Var12.f_3, Var12.f_4, false, 1);
				}
			}
			else if (unk_0x304A39EB177D246B(iVar11, joaat("arena_draw_0"), 1))
			{
				unk_0x09397806857F5DFB(iParam0, 1, 1);
			}
		}
	}
}

int func_283(int iParam0, int iParam1, int iParam2, int iParam3)
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
		return func_285(iParam3);
	}
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	iVar1 = unk_0x6B7AEB5F3D578298(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_271(unk_0x4B423FAA24E8ABF0(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_271(unk_0x4B423FAA24E8ABF0(iParam0), iVar1, 14, 4);
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
					iVar3 = (iVar3 + func_284(iParam0, iParam3));
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
	return func_285(iParam3);
}

int func_284(int iParam0, int iParam1)
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

int func_285(int iParam0)
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

int func_286(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
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
		Global_78341[1 /*14*/] = { func_413(iVar5, iParam1, iParam2, -1) };
		if (!func_412(iParam3))
		{
			Global_78339 = (Global_78339 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78339 > 1)
		{
		}
		else if (BitTest(Global_78341[1 /*14*/].f_6, 4))
		{
			func_409(iVar5, iParam1, iParam2, 1);
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
			uVar14 = { func_274(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78341[1 /*14*/] = { func_413(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						unk_0xD1C578C204015E1F(iParam0, func_203(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, unk_0xDAF263B0E792EAEC(iParam0, func_203(iVar0)));
					}
					else
					{
						unk_0xD1C578C204015E1F(iParam0, func_203(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78341[1 /*14*/].f_6, 1))
					{
						func_409(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78341[1 /*14*/] = { func_413(iVar5, iVar0, uVar14[iVar0], -1) };
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
								uVar15 = { func_269(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78341[1 /*14*/] = { func_413(iVar5, 14, uVar15[iVar1], -1) };
								func_408(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
								if (BitTest(Global_78341[1 /*14*/].f_6, 1))
								{
									func_409(iVar5, iVar0, uVar14[iVar0], 1);
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
									unk_0xD1C578C204015E1F(iParam0, func_203(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, unk_0xDAF263B0E792EAEC(iParam0, func_203(iVar0)));
								}
								else
								{
									unk_0xD1C578C204015E1F(iParam0, func_203(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_286(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78341[1 /*14*/].f_6, 1))
							{
								func_409(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78341[1 /*14*/] = { func_413(iVar5, iVar0, func_406(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78341[1 /*14*/].f_6, 3))
				{
					uVar16 = { func_274(iVar5, 0) };
					func_286(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		unk_0xD1C578C204015E1F(iParam0, 1, unk_0xC0120BBCC298EA2F(iParam0, 1), unk_0xD6AED6BFCC58AF7F(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = func_405();
			if (iVar17 != -1)
			{
				func_402(iVar17, 0, iParam10);
			}
			func_400(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { func_269(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78341[1 /*14*/] = { func_413(iVar5, 14, uVar18[iVar1], -1) };
			func_408(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
			if (BitTest(Global_78341[1 /*14*/].f_6, 1))
			{
				func_409(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78339 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_398(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_286(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		func_408(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
		if (BitTest(Global_78341[1 /*14*/].f_6, 1))
		{
			func_409(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78341[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78341[1 /*14*/].f_6, 6) && unk_0x304A39EB177D246B(Global_2883588, joaat("shrink_hair"), 1))
			{
			}
			else if (unk_0xCA362C769B0F4F0E(iParam0, 1, joaat("hair_shrink")))
			{
				func_286(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78341[1 /*14*/] = { func_413(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78341[1 /*14*/].f_12 == 0)
		{
			func_391(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78339 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_398(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_286(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_398(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_286(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		if ((iParam1 == 4 || iParam1 == 11) || iParam1 == 8)
		{
			iVar19 = func_203(iParam1);
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
				iVar23 = func_259(iParam0, 11);
				iVar24 = func_259(iParam0, 8);
				iVar25 = func_259(iParam0, 4);
				if (unk_0xCA362C769B0F4F0E(iParam0, 8, joaat("over_jacket")))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar22 = func_263(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar22 = func_263(iVar5, iParam2, 11, 4);
					}
					if ((((((unk_0x304A39EB177D246B(iVar22, joaat("silk_robe"), 0) || unk_0x304A39EB177D246B(iVar22, joaat("silk_pyjamas"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar22, -826135203, 0)) || unk_0x304A39EB177D246B(iVar22, joaat("morph_suit"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("gorka_suit"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("cat_suit"), 0))
					{
					}
					else
					{
						iVar8 = func_259(iParam0, 8);
					}
				}
				iVar26 = unk_0x94B8A32AA940A6B5(iParam0, 3, unk_0xC0120BBCC298EA2F(iParam0, 3), 0);
				if (unk_0x304A39EB177D246B(iVar26, joaat("gloves"), 0))
				{
					iVar27 = func_390(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = func_398(iParam0, iVar5, 11, iVar23, 3, 0);
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
							iVar22 = func_263(iVar5, iParam2, 11, 4);
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
							if (func_389(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = unk_0xD6AED6BFCC58AF7F(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && unk_0x304A39EB177D246B(func_263(iVar5, iParam2, 11, 4), joaat("vest"), 0))
				{
					iVar23 = func_259(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = func_263(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && unk_0x304A39EB177D246B(iVar22, joaat("vest_shirt"), 0))
					{
						iVar29 = func_387(iVar5, iVar23, iParam2, unk_0xD6AED6BFCC58AF7F(iParam0, 11));
						if (iVar29 != -99)
						{
							func_286(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78341[1 /*14*/] = { func_413(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_386(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = func_263(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = func_263(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!func_386(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar23 >= 256) && (unk_0x304A39EB177D246B(iVar22, joaat("vest"), 0) || unk_0x304A39EB177D246B(iVar22, joaat("vest_shirt"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar23 >= 256) && ((((((((unk_0x304A39EB177D246B(iVar22, joaat("heist_draw_5"), 0) || unk_0x304A39EB177D246B(iVar22, joaat("heist_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("heist_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("heist_draw_11"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("heist_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar22, -872449705, 0)) || unk_0x304A39EB177D246B(iVar22, joaat("apart_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("stunt_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("stunt_draw_9"), 0)))
						{
						}
						else
						{
							iVar30 = func_385(iParam0, iParam2);
							iVar31 = func_387(iVar5, iVar23, iParam2, unk_0xD6AED6BFCC58AF7F(iParam0, 11));
							if (iVar31 != -99)
							{
								func_286(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78341[1 /*14*/] = { func_413(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == unk_0x4A8C381C258A124D() || iParam0 == Global_4539790))
							{
								func_286(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78341[1 /*14*/] = { func_413(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar32 = func_384(iVar5, 11, -1);
									Global_78341[1 /*14*/] = { func_413(iVar5, 11, iVar32, -1) };
									iVar31 = func_387(iVar5, iVar32, iParam2, Global_78341[1 /*14*/].f_4);
									iVar33 = func_263(iVar5, iParam2, 11, 3);
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
									if (unk_0x304A39EB177D246B(func_263(iVar5, iParam2, 11, 4), joaat("biker_vest"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_286(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78341[1 /*14*/] = { func_413(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78341[1 /*14*/] = { func_413(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78341[1 /*14*/].f_3;
						Global_78341[1 /*14*/] = { func_413(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78341[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = func_385(iParam0, iParam2);
							Global_78341[1 /*14*/] = { func_413(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78341[1 /*14*/].f_4;
							iVar38 = func_383(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == unk_0x4A8C381C258A124D() || iParam0 == Global_4539790))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar40 = func_263(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_382(iVar40) == 6) || unk_0x304A39EB177D246B(iVar40, joaat("biker_vest"), 0))
									{
										iVar38 = func_384(iVar5, 11, -1);
										Global_78341[1 /*14*/] = { func_413(iVar5, 11, iVar38, -1) };
										iVar39 = func_387(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!unk_0x304A39EB177D246B(func_263(iVar5, iParam2, 11, 4), joaat("jacket_only"), 0))
									{
										iVar38 = func_384(iVar5, 11, -1);
										Global_78341[1 /*14*/] = { func_413(iVar5, 11, iVar38, -1) };
										iVar39 = func_387(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar41 = func_263(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar41 = func_263(iVar5, iVar24, 8, 4);
								}
								if (unk_0x304A39EB177D246B(iVar41, joaat("overcoat_accs"), 0))
								{
									iVar38 = func_384(iVar5, 11, -1);
									Global_78341[1 /*14*/] = { func_413(iVar5, 11, iVar38, -1) };
									iVar39 = func_387(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = func_387(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (unk_0x304A39EB177D246B(func_263(iVar5, iParam2, 11, 3), joaat("low2_open_check"), 0))
									{
										if (!func_381(iVar5, func_259(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x304A39EB177D246B(func_263(iVar5, iParam2, 11, 4), joaat("low2_open_check"), 0))
									{
										if (!func_381(iVar5, func_259(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_286(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar38 = func_384(iVar5, 11, -1);
								Global_78341[1 /*14*/] = { func_413(iVar5, 11, iVar38, -1) };
								iVar39 = func_387(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_286(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_286(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78341[1 /*14*/] = { func_413(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_378(iVar5, iParam2);
				if (!bParam13)
				{
					unk_0xD1C578C204015E1F(iParam0, 10, 0, 0, unk_0xDAF263B0E792EAEC(iParam0, 10));
				}
			}
			func_400(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_390(iVar5, func_406(iParam0, 8, -1), iParam2, func_406(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_97(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_97(2160, iParam10, 0);
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
						iVar42 = func_448(iParam2);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar42 = func_446(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_328(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = unk_0x94B8A32AA940A6B5(iParam0, 3, unk_0xC0120BBCC298EA2F(iParam0, 3), 0);
			if (unk_0x304A39EB177D246B(iVar43, joaat("gloves"), 0))
			{
				iVar44 = func_259(iParam0, 11);
				iVar45 = func_259(iParam0, 4);
				iVar46 = func_390(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = func_398(iParam0, iVar5, 11, iVar44, 3, 0);
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
						iVar47 = func_263(iVar5, iParam2, 11, 4);
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
						if (func_389(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = unk_0xD6AED6BFCC58AF7F(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_400(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = func_259(iParam0, 11);
			if (func_386(iVar5, iVar49, -1))
			{
				iVar50 = func_383(iVar5, iParam2, Global_78341[1 /*14*/].f_4);
				func_378(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_390(iVar5, iParam2, func_259(iParam0, 11), func_259(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = func_259(iParam0, 7);
				if (!func_325(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					unk_0xD1C578C204015E1F(iParam0, func_203(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && unk_0x304A39EB177D246B(Global_2883588, joaat("shrink_head"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && unk_0x304A39EB177D246B(Global_2883588, joaat("shrink_head"), 0)))
			{
				iVar52 = func_97(2100, iParam10, 0);
				iVar53 = func_97(2101, iParam10, 0);
				iVar54 = func_97(2102, iParam10, 0);
				uVar55 = func_71(135, iParam10);
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
				func_310(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = func_259(iParam0, 11);
			iVar58 = func_259(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x304A39EB177D246B(func_263(iVar5, iVar57, 11, 3), joaat("low2_open_check"), 0))
				{
					if (!func_381(iVar5, iParam2, func_383(iVar5, iVar58, 0)))
					{
						func_286(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78341[1 /*14*/] = { func_413(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (unk_0x304A39EB177D246B(func_263(iVar5, iVar57, 11, 4), joaat("low2_open_check"), 0))
				{
					if (!func_381(iVar5, iParam2, func_383(iVar5, iVar58, 0)))
					{
						func_286(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78341[1 /*14*/] = { func_413(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_390(iVar5, func_259(iParam0, 8), func_259(iParam0, 11), iParam2);
			}
			iVar59 = unk_0x94B8A32AA940A6B5(iParam0, 3, unk_0xC0120BBCC298EA2F(iParam0, 3), 0);
			if (unk_0x304A39EB177D246B(iVar59, joaat("gloves"), 0))
			{
				iVar60 = func_390(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = func_398(iParam0, iVar5, 11, iVar57, 3, 0);
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
						iVar61 = func_263(iVar5, iParam2, 11, 4);
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
						if (func_389(iVar5, iVar60, iVar62) == iVar59)
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
			unk_0xD1C578C204015E1F(iParam0, func_203(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, unk_0xDAF263B0E792EAEC(iParam0, func_203(iParam1)));
		}
		else
		{
			unk_0xD1C578C204015E1F(iParam0, func_203(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78339 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_398(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_286(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_390(iVar5, iVar3, func_259(iParam0, 11), func_259(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_398(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_286(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_309(iParam0))
				{
					iVar63 = func_307(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + unk_0xD6AED6BFCC58AF7F(iParam0, 9));
						if (!func_306(iParam0, 9, iVar63))
						{
							func_286(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_286(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (unk_0xCA362C769B0F4F0E(iParam0, 8, joaat("over_jacket")))
					{
						func_286(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = func_97(2042, -1, 0);
				if (unk_0xC0120BBCC298EA2F(iParam0, 5) != 0)
				{
					unk_0xD1C578C204015E1F(iParam0, 5, func_300(iParam0, iVar64), func_299(iParam0, iVar64), func_298(iParam0, iVar64));
				}
				if (iParam0 == unk_0x4A8C381C258A124D())
				{
					unk_0x740F6E63EE1C1D43(unk_0x259BE71D8A81D4FA(), 5, func_300(unk_0x4A8C381C258A124D(), iVar64), func_299(unk_0x4A8C381C258A124D(), iVar64), 0);
					unk_0xC02C4AB8A5C744D7(unk_0x259BE71D8A81D4FA(), func_298(unk_0x4A8C381C258A124D(), iVar64));
					func_296(unk_0x259BE71D8A81D4FA(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (unk_0x304A39EB177D246B(Global_2883588, joaat("big_chain"), 0))
					{
						func_286(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_406(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_406(iParam0, 11, -1);
				}
				if (func_295(iVar5, 11, iVar66, -1))
				{
					if (!func_294(iVar5, 4, iVar65, -1))
					{
						if (func_293(iVar5, 4, iVar65, &uVar67))
						{
							func_286(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_294(iVar5, 4, iVar65, -1))
				{
					if (func_292(iVar5, 4, iVar65, &uVar67))
					{
						func_286(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar74 = func_259(iParam0, 4);
				iVar75 = func_259(iParam0, 6);
				if (func_291(iVar5, iVar70))
				{
					if (unk_0x304A39EB177D246B(iVar70, joaat("alt_feet"), 0) != func_290(iVar5, iVar74, iVar70))
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
										iVar75 = func_271(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_286(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar75 = func_271(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_286(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (unk_0x304A39EB177D246B(iVar73, joaat("alt_legs"), 0) != func_289(iVar5, iVar75, iVar73))
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
										iVar74 = func_271(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_286(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar74 = func_271(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_286(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (func_291(iVar5, iVar73))
				{
					if (unk_0x304A39EB177D246B(iVar73, joaat("alt_legs"), 0) != func_289(iVar5, iVar75, iVar73))
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
										iVar74 = func_271(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_286(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar74 = func_271(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_286(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (unk_0x304A39EB177D246B(iVar70, joaat("alt_feet"), 0) != func_290(iVar5, iVar74, iVar70))
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
										iVar75 = func_271(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_286(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar75 = func_271(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_286(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_391(iParam0);
				iVar81 = unk_0xC0120BBCC298EA2F(iParam0, 1);
				iVar82 = unk_0xD6AED6BFCC58AF7F(iParam0, 1);
				iVar83 = unk_0x94B8A32AA940A6B5(iParam0, 1, iVar81, iVar82);
				if (unk_0x304A39EB177D246B(iVar83, joaat("force_prop"), 0))
				{
					iVar3 = func_398(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_286(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_398(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_286(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_287(iParam0, &uVar4))
		{
			func_286(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_286(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_286(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_286(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = func_389(iVar5, func_406(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar9 = func_271(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar9 = func_271(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_286(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78339 = (Global_78339 - 1);
	return 1;
}

int func_287(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_406(unk_0x4A8C381C258A124D(), 2, -1);
	if (func_97(754, Global_78338, 0) != -99 && func_54())
	{
		if (func_288() == 4)
		{
			return 1;
		}
		if (func_97(754, Global_78338, 0) == 0 && func_97(755, Global_78338, 0) == 0)
		{
			if (func_51(161, Global_78338))
			{
				if (func_97(2053, Global_78338, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_97(753, Global_78338, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_97(754, Global_78338, 0);
		iVar1 = func_97(755, Global_78338, 0);
		if (!func_306(iParam0, iVar1, iVar0))
		{
			if (func_51(161, Global_78338))
			{
				*uParam1 = func_97(2053, Global_78338, 0);
			}
			else
			{
				*uParam1 = func_97(753, Global_78338, 0);
			}
			func_450(754, -99, Global_78338, 1, 0);
			func_450(755, 2, Global_78338, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_288()
{
	return Global_1574992;
}

int func_289(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_263(iParam0, iParam1, 6, 3);
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
				iVar0 = func_263(iParam0, iParam1, 6, 4);
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

int func_290(int iParam0, int iParam1, int iParam2)
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
				iVar0 = func_263(iParam0, iParam1, 4, 3);
				iVar1 = func_382(iVar0);
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
				iVar0 = func_263(iParam0, iParam1, 4, 4);
				iVar1 = func_382(iVar0);
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

int func_291(int iParam0, int iParam1)
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

int func_292(int iParam0, int iParam1, int iParam2, var uParam3)
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
						iVar0 = func_263(iParam0, iParam2, iParam1, 4);
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
											*uParam3 = func_271(iParam0, iVar3, iParam1, 4);
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

int func_293(int iParam0, int iParam1, int iParam2, var uParam3)
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
						iVar0 = func_263(iParam0, iParam2, iParam1, 4);
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
											*uParam3 = func_271(iParam0, iVar3, iParam1, 4);
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

int func_294(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_263(iParam0, iParam2, 4, 4);
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

int func_295(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_263(iParam0, iParam2, 11, 4);
						}
						return unk_0x304A39EB177D246B(iParam3, joaat("dress"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_296(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_297(iParam1);
	if (iVar0 != joaat("p_parachute_s"))
	{
		unk_0xD8FE716A11BE669A(iParam0, iVar0);
	}
	else
	{
		unk_0xBDAA517C3D10DB80(iParam0);
	}
}

int func_297(int iParam0)
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

int func_298(int iParam0, int iParam1)
{
	return 0;
}

int func_299(int iParam0, int iParam1)
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

var func_300(int iParam0, int iParam1)
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
		Global_78538 = func_301(iParam0, iParam1);
	}
	return Global_78538;
}

int func_301(int iParam0, int iParam1)
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
				return func_305(iParam0, iParam1, 1);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_3"), 8) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_0"), 8))
			{
				return func_305(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_4"), 8))
			{
				return func_305(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_5"), 8))
			{
				return func_305(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_6"), 8))
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_2"), 8))
			{
				return func_305(iParam0, iParam1, 6);
			}
			if ((unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_3"), 8) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_0"), 8)) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_1"), 8))
			{
				return func_305(iParam0, iParam1, 7);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_4"), 8))
			{
				return func_305(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_5"), 8))
			{
				return func_305(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_6"), 8))
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		return func_305(iParam0, iParam1, 9);
	}
	if (func_304(iParam0))
	{
		if (bVar1)
		{
			return func_305(iParam0, iParam1, 7);
		}
		else
		{
			return func_305(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = unk_0x94B8A32AA940A6B5(iParam0, 11, iVar0, unk_0xD6AED6BFCC58AF7F(iParam0, 11));
		if (unk_0x304A39EB177D246B(iVar4, 98087521, 0))
		{
			return func_305(iParam0, iParam1, 0);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -135391604, 0))
		{
			return func_305(iParam0, iParam1, 1);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 1398721900, 0))
		{
			return func_305(iParam0, iParam1, 2);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 1030529416, 0))
		{
			return func_305(iParam0, iParam1, 3);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 873008833, 0))
		{
			return func_305(iParam0, iParam1, 4);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1646534043, 0))
		{
			return func_305(iParam0, iParam1, 5);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1868675094, 0))
		{
			return func_305(iParam0, iParam1, 6);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1500122155, 0))
		{
			return func_305(iParam0, iParam1, 7);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1741007074, 0))
		{
			return func_305(iParam0, iParam1, 8);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -226291902, 0))
		{
			return func_305(iParam0, iParam1, 9);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 607416996, 0))
		{
			return func_305(iParam0, iParam1, 10);
		}
		if (unk_0x304A39EB177D246B(iVar4, joaat("hipster_dress"), 0))
		{
			if (bVar1)
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, -405912369, 0))
		{
			return func_305(iParam0, iParam1, 1);
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("dress"), 0))
		{
			if (bVar1)
			{
				return func_305(iParam0, iParam1, 5);
			}
			else
			{
				return func_305(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("pilot_suit"), 0))
		{
			return func_305(iParam0, iParam1, 8);
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("combat_gear"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 7);
				}
				else
				{
					return func_305(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("hooded_jacket"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 7);
				}
				else
				{
					return func_305(iParam0, iParam1, 1);
				}
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_5"), 0))
			{
				return func_305(iParam0, iParam1, 10);
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_32"), 0))
			{
				return func_305(iParam0, iParam1, 10);
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_33"), 0))
			{
				return func_305(iParam0, iParam1, 10);
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_30"), 0))
			{
				return func_305(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("LUXE_COAT"), 0) && !unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_3"), 0))
		{
			iVar5 = func_303(iVar4, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return func_305(iParam0, iParam1, 1);
						break;
					
					case 2:
						return func_305(iParam0, iParam1, 8);
						break;
					
					default:
						iVar0 = func_382(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return func_305(iParam0, iParam1, 6);
						break;
					
					default:
						iVar0 = func_382(iVar4);
						break;
					}
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe_bomb"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_4"), 0))
			{
				return func_305(iParam0, iParam1, 2);
			}
			else
			{
				return func_305(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("heist_gear"), 0))
		{
			iVar6 = func_302(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return func_305(iParam0, iParam1, 7);
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_305(iParam0, iParam1, 7);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_305(iParam0, iParam1, 7);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_305(iParam0, iParam1, 7);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_305(iParam0, iParam1, 7);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_305(iParam0, iParam1, 9);
					}
					else
					{
						return func_305(iParam0, iParam1, 7);
					}
					break;
				
				case 13:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_305(iParam0, iParam1, 9);
					}
					else
					{
						return func_305(iParam0, iParam1, 9);
					}
					break;
				
				case 14:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_305(iParam0, iParam1, 9);
					}
					break;
				
				default:
					iVar0 = func_382(iVar4);
					break;
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("xmas2_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 7);
				}
				else
				{
					return func_305(iParam0, iParam1, 2);
				}
			}
			else if (bVar1)
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 1);
			}
			else
			{
				return func_305(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 1);
			}
			else if (bVar1)
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 2);
			}
			else
			{
				return func_305(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 2);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 1);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 8);
			}
			else
			{
				return func_305(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("LOW_DRAW_7"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("jan_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 2);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("LOW_DRAW_8"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("jan_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x304A39EB177D246B(iVar4, joaat("air_draw_3"), 0))
				{
					return func_305(iParam0, iParam1, 10);
				}
				else
				{
					return func_305(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 1);
			}
		}
		else if ((unk_0x304A39EB177D246B(iVar4, -1086258388, 0) || unk_0x304A39EB177D246B(iVar4, joaat("luxe_sweat"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_sweat"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 7);
				}
				else
				{
					return func_305(iParam0, iParam1, 5);
				}
			}
			else if (bVar1)
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 8);
			}
			else if (bVar1)
			{
				return func_305(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 7);
				}
				else
				{
					return func_305(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 6);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 7);
				}
				else
				{
					return func_305(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 2);
			}
			else
			{
				return func_305(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 2);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 9);
				}
				else
				{
					return func_305(iParam0, iParam1, 1);
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
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 7);
				}
				else
				{
					return func_305(iParam0, iParam1, 5);
				}
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 7);
				}
				else
				{
					return func_305(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 7);
				}
				else
				{
					return func_305(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 7);
				}
				else
				{
					return func_305(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 7);
				}
				else
				{
					return func_305(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_305(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 7);
				}
				else
				{
					return func_305(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_305(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 7);
				}
				else
				{
					return func_305(iParam0, iParam1, 6);
				}
			}
			else
			{
				return func_305(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 7);
				}
				else
				{
					return func_305(iParam0, iParam1, 2);
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
				return func_305(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 7);
				}
				else
				{
					return func_305(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 7);
				}
				else
				{
					return func_305(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_0"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("air_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 9);
			}
			else if (bVar1)
			{
				return func_305(iParam0, iParam1, 10);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 2);
			}
			else
			{
				return func_305(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 2);
			}
			else
			{
				return func_305(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 2);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 2);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_305(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 10);
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 10);
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 10);
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("smug_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
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
				return func_305(iParam0, iParam1, 10);
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 10);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 10);
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("assault_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 0);
			}
			else
			{
				return func_305(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_305(iParam0, iParam1, 10);
				}
				else
				{
					return func_305(iParam0, iParam1, 10);
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 1);
			}
			else
			{
				return func_305(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 10);
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 10);
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 10);
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 3);
			}
			else
			{
				return func_305(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 10);
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 1);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 10);
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 9);
			}
			else
			{
				return func_305(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 10);
			}
			else
			{
				return func_305(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("vest_shirt"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("tails_jacket"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_305(iParam0, iParam1, 7);
			}
			else
			{
				return func_305(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("smoking_jacket"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_305(iParam0, iParam1, 2);
			}
			else
			{
				return func_305(iParam0, iParam1, 7);
			}
		}
		else if ((unk_0x304A39EB177D246B(iVar4, joaat("silk_pyjamas"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar4, -826135203, 0))
		{
			return func_305(iParam0, iParam1, 6);
		}
		else
		{
			iVar7 = iVar0;
			iVar0 = func_382(iVar4);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 1);
				}
				else
				{
					return func_305(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 1);
				}
				else
				{
					return func_305(iParam0, iParam1, 0);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 6);
				}
				else
				{
					return func_305(iParam0, iParam1, 6);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 2);
				}
				else
				{
					return func_305(iParam0, iParam1, 2);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 2);
				}
				else
				{
					return func_305(iParam0, iParam1, 2);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 1);
				}
				else
				{
					return func_305(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 1);
				}
				else
				{
					return func_305(iParam0, iParam1, 1);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 2);
				}
				else
				{
					return func_305(iParam0, iParam1, 2);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 7);
				}
				else
				{
					return func_305(iParam0, iParam1, 0);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 1);
				}
				else
				{
					return func_305(iParam0, iParam1, 0);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 2);
				}
				else
				{
					return func_305(iParam0, iParam1, 2);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 7);
				}
				else
				{
					return func_305(iParam0, iParam1, 1);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 1);
				}
				else
				{
					return func_305(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 6);
				}
				else
				{
					return func_305(iParam0, iParam1, 1);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 5);
				}
				else
				{
					return func_305(iParam0, iParam1, 5);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 1);
				}
				else
				{
					return func_305(iParam0, iParam1, 4);
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
					return func_305(iParam0, iParam1, 1);
				}
				else
				{
					return func_305(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 6);
				}
				else
				{
					return func_305(iParam0, iParam1, 6);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 3);
				}
				else
				{
					return func_305(iParam0, iParam1, 2);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 5);
				}
				else
				{
					return func_305(iParam0, iParam1, 4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 1);
				}
				else
				{
					return func_305(iParam0, iParam1, 0);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 1);
				}
				else
				{
					return func_305(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 6);
				}
				else
				{
					return func_305(iParam0, iParam1, 6);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 6);
				}
				else
				{
					return func_305(iParam0, iParam1, 6);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 6);
				}
				else
				{
					return func_305(iParam0, iParam1, 6);
				}
				break;
			
			case 9:
				return func_305(iParam0, iParam1, 1);
				break;
			
			case 10:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 6);
				}
				else
				{
					return func_305(iParam0, iParam1, 6);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 1);
				}
				else
				{
					return func_305(iParam0, iParam1, 0);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 1);
				}
				else
				{
					return func_305(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 1);
				}
				else
				{
					return func_305(iParam0, iParam1, 0);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 7);
				}
				else
				{
					return func_305(iParam0, iParam1, 3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_305(iParam0, iParam1, 1);
				}
				else
				{
					return func_305(iParam0, iParam1, 0);
				}
				break;
			}
	}
	return func_305(iParam0, iParam1, 0);
	return 0;
}

int func_302(int iParam0, int iParam1)
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

int func_303(int iParam0, int iParam1)
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

int func_304(int iParam0)
{
	if (unk_0xCA362C769B0F4F0E(iParam0, 4, joaat("dungarees")))
	{
		return 1;
	}
	return 0;
}

int func_305(int iParam0, int iParam1, int iParam2)
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

int func_306(int iParam0, int iParam1, int iParam2)
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
	Global_78341[1 /*14*/] = { func_413(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78341[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_274(iVar0, iParam2) };
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
				if (!func_306(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { func_269(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_306(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78341[2 /*14*/] = { func_413(iVar0, 14, iVar6, -1) };
									if (Global_78341[2 /*14*/].f_12 == iVar5)
									{
										if (func_306(iParam0, 14, iVar6))
										{
											if (!func_261(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78341[2 /*14*/])))
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
						iVar1 = func_259(iParam0, iVar4);
						Global_78341[2 /*14*/] = { func_413(iVar0, iVar4, iVar1, -1) };
						if (!func_261(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78341[2 /*14*/])))
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
			if (func_97(1759, Global_78338, 0) != uVar8[10])
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
		uVar11 = { func_269(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_306(iParam0, 14, uVar11[iVar10]))
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
		if (Global_78341[1 /*14*/].f_3 == unk_0xC0120BBCC298EA2F(iParam0, func_203(iParam1)) && Global_78341[1 /*14*/].f_4 == unk_0xD6AED6BFCC58AF7F(iParam0, func_203(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78340++;
			if (Global_78340 == 1)
			{
				if (func_295(iVar0, 11, func_259(iParam0, 11), -1))
				{
					if (func_293(iVar0, 4, iParam2, &uVar18))
					{
						return func_306(iParam0, 4, uVar18);
					}
				}
				else if (func_292(iVar0, 4, iParam2, &uVar18))
				{
					return func_306(iParam0, 4, uVar18);
				}
			}
			Global_78340 = (Global_78340 - 1);
		}
	}
	return 0;
}

int func_307(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (func_304(iParam0))
	{
		return -99;
	}
	if (func_308(iParam0))
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
				iVar0 = func_263(iParam1, iParam3, 11, 3);
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
								return func_271(iParam1, iVar3, 9, 3);
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
				iVar6 = func_263(iParam1, iParam3, 11, 4);
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
								return func_271(iParam1, iVar9, 9, 4);
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

int func_308(int iParam0)
{
	if (unk_0xCA362C769B0F4F0E(iParam0, 8, joaat("x17_draw_6")))
	{
		return 1;
	}
	return 0;
}

int func_309(int iParam0)
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

void func_310(int iParam0, int iParam1)
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
	if (func_324())
	{
		return;
	}
	unk_0x5CB7287FD7611BC7(iParam0, &Var0);
	iVar1 = func_97(2097, iParam1, 0);
	iVar2 = func_97(2098, iParam1, 0);
	iVar3 = func_97(2099, iParam1, 0);
	iVar4 = func_97(2100, iParam1, 0);
	iVar5 = func_97(2101, iParam1, 0);
	iVar6 = func_97(2102, iParam1, 0);
	fVar7 = func_71(134, iParam1);
	fVar8 = func_71(135, iParam1);
	fVar9 = func_71(136, iParam1);
	bVar10 = func_51(160, iParam1);
	if (((((((((Var0.f_0 != iVar1 || Var0.f_1 != iVar2) || Var0.f_2 != iVar3) || Var0.f_3 != iVar4) || Var0.f_4 != iVar5) || Var0.f_5 != iVar6) || Var0.f_6 != fVar7) || Var0.f_7 != fVar8) || Var0.f_8 != fVar9) || Var0.f_9 != bVar10)
	{
		unk_0x0A5987DCA39E8BE5(iParam0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, fVar7, fVar8, fVar9, bVar10);
		iVar11 = func_97(2103, iParam1, 0);
		if (iVar11 > 0)
		{
			func_311(iParam0, iParam1, 0);
		}
	}
}

void func_311(int iParam0, int iParam1, bool bParam2)
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
		iVar2 = func_323(iVar1);
		if (!bParam2)
		{
			fVar3 = func_71(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_322(iVar2, iParam1);
		}
		unk_0xAAF9B08B469F707F(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_321(iVar4);
		iVar6 = func_320(iVar5);
		iVar7 = func_319(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!bParam2)
			{
				uVar10 = func_318(iVar6, iParam1);
				uVar11 = func_71(iVar7, iParam1);
			}
			else
			{
				uVar10 = func_317(iVar6, iParam1);
				uVar11 = func_322(iVar7, iParam1);
			}
			unk_0xE5B6C9B29510B84E(iParam0, iVar5, uVar10, uVar11);
			iVar8 = func_316(iVar5);
			iVar9 = func_315(iVar5);
			if (iVar8 != -1)
			{
				if (!bParam2)
				{
					iVar13 = func_97(iVar8, iParam1, 0);
					iVar14 = func_97(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_314(iVar8, iParam1);
					iVar14 = func_314(iVar9, iParam1);
				}
				func_313(iVar13, &uVar12, &uVar15);
				unk_0x94965BB62753D4D6(iParam0, iVar5, uVar15, uVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_312(&iParam0, iParam1, bParam2);
}

void func_312(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	
	if (!bParam2)
	{
		fVar0 = func_71(157, iParam1);
	}
	else
	{
		fVar0 = func_322(157, iParam1);
	}
	if (*iParam0 == unk_0x4A8C381C258A124D())
	{
	}
	unk_0x348FF3E632DCB635(*iParam0, round(fVar0));
}

void func_313(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	*uParam1 = shift_right(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_314(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2805029[iParam0 /*3*/][func_52(iParam1)];
	if (unk_0x074484B0C0972EF8(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_315(int iParam0)
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

int func_316(int iParam0)
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

int func_317(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_53();
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

var func_318(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_53();
	}
	return unk_0x03CFFD51CE515454(iParam0, iParam1);
}

int func_319(int iParam0)
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

int func_320(int iParam0)
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

int func_321(int iParam0)
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

float func_322(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2847606[iParam0 /*3*/][func_52(iParam1)];
	if (unk_0xE1A5C172B921BBD6(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_323(int iParam0)
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

int func_324()
{
	if (unk_0xF40767E41852FB72(Global_2639783.f_60) && !Global_2639783.f_59 == 0)
	{
		return 1;
	}
	return 0;
}

int func_325(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
			iVar2 = func_263(iParam0, iParam1, 7, 3);
			iVar1 = func_382(iVar2);
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
			iVar4 = func_263(iParam0, iParam3, 11, 3);
			iVar3 = func_382(iVar4);
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
			iVar6 = func_263(iParam0, iParam4, 8, 3);
			iVar5 = func_382(iVar6);
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
			iVar8 = func_263(iParam0, iParam10, 1, 3);
			iVar7 = func_382(iVar8);
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
			if (func_386(iParam0, iParam3, -1))
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
					iVar9 = func_263(iParam0, iParam9, 14, 3);
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
					else if (func_327(iParam0, iParam3))
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
				else if (func_327(iParam0, iParam3))
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
					iVar10 = func_263(iParam0, iParam11, 4, 3);
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
			if (iParam9 >= 327 && unk_0x304A39EB177D246B(func_263(iParam0, iParam9, 14, 3), joaat("pilot_suit"), 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0x304A39EB177D246B(func_263(iParam0, iParam9, 14, 3), joaat("pilot_suit"), 1)) && iParam1 != 0)
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
				if (((iParam3 >= 204 && iParam3 <= 219) || func_386(iParam0, iParam3, -1)) || iVar3 == 13)
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
					iVar0 = func_259(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_382(func_263(iParam0, iVar0, 11, 3)) == 13))
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
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || func_386(iParam0, iParam3, -1)) || iVar3 == 13) || iVar3 == 11)
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
					iVar0 = func_259(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_382(func_263(iParam0, iVar0, 11, 3)) == 13))
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
				if (((iParam4 >= 192 && iParam4 <= 207) || func_326(iVar6)) || (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("draw_12"), 0)))
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
			iVar12 = func_263(iParam0, iParam1, 7, 4);
			iVar11 = func_382(iVar12);
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
			iVar14 = func_263(iParam0, iParam3, 11, 4);
			iVar13 = func_382(iVar14);
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
			iVar16 = func_263(iParam0, iParam4, 8, 4);
			iVar15 = func_382(iVar16);
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
			iVar18 = func_263(iParam0, iParam10, 1, 4);
			iVar17 = func_382(iVar18);
			Global_4539511 = iParam10;
			Global_4539510 = iVar18;
			Global_4539509 = iVar17;
		}
		iVar19 = -1;
		if (iParam9 >= 327)
		{
			iVar19 = func_263(iParam0, iParam9, 14, 4);
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
			if (func_386(iParam0, iParam3, -1))
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
					else if (func_327(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_327(iParam0, iParam3) || unk_0x304A39EB177D246B(iVar14, joaat("block_scarfs"), 0))
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
			if (iParam9 >= 327 && unk_0x304A39EB177D246B(func_263(iParam0, iParam9, 14, 4), joaat("pilot_suit"), 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0x304A39EB177D246B(func_263(iParam0, iParam9, 14, 4), joaat("pilot_suit"), 1)) && iParam1 != 0)
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
					iVar20 = func_263(iParam0, iParam11, 4, 4);
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
				else if (func_386(iParam0, iParam3, -1))
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
				else if (func_383(iParam0, iParam4, 0) != -99)
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
				if (iParam4 >= 136 && unk_0x304A39EB177D246B(func_263(iParam0, iParam4, 8, 4), joaat("long_sleeve"), 0))
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
				if (iParam4 >= 136 && unk_0x304A39EB177D246B(func_263(iParam0, iParam4, 8, 4), joaat("long_sleeve"), 0))
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
				if (iParam4 >= 136 && unk_0x304A39EB177D246B(func_263(iParam0, iParam4, 8, 4), joaat("long_sleeve"), 0))
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
					iVar22 = func_263(iParam0, iParam11, 4, 4);
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

int func_326(int iParam0)
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

int func_327(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = func_263(iParam0, iParam1, 11, 3);
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
		return func_386(iParam0, iParam1, -1);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_263(iParam0, iParam1, 11, 4);
		iVar2 = -1;
		if (iVar1 != -1)
		{
			iVar2 = func_382(iVar1);
		}
		if (((((((((((((((((((((((((((((((((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 48 && iParam1 < 64)) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 144 && iParam1 < 160)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 224 && iParam1 < 240)) || iVar2 == 1) || iVar2 == 3) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10) || iVar2 == 14) || unk_0x304A39EB177D246B(iVar1, joaat("jacket"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("combat_top"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("heist_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("heist_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("silk_pyjamas"), 0)) || unk_0x304A39EB177D246B(iVar1, -826135203, 0)) || unk_0x304A39EB177D246B(iVar1, joaat("low2_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar1, -102825006, 0)) || unk_0x304A39EB177D246B(iVar1, joaat("apart_draw_18"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("apart_draw_20"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("apart_draw_24"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("air_draw_0"), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_328(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	func_377(unk_0x70E57E9927B6BA58("hairOverlay"), iParam0);
	iVar1 = func_376(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78338;
		}
		func_402(iVar1, 1, iParam2);
	}
	func_329(iParam0, bParam3, 0, -1);
}

void func_329(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		iVar2 = func_375(iParam0);
		bVar3 = func_370(iParam0, 0);
		bVar4 = func_362(iParam0);
		bVar5 = func_361(iParam0, iParam3);
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
			if (func_358(iVar6, iVar0))
			{
				if (func_353(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (func_350(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						unk_0x49A5A17556C31561(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (func_358(123, iVar0))
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
					if (func_358(iVar10, iVar0))
					{
						if (func_350(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!func_331(Var9.f_2, Var9.f_3, iVar10))
							{
								unk_0x49A5A17556C31561(iParam0, Var9.f_2, Var9.f_3);
								func_330(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

void func_330(int iParam0, int iParam1, int iParam2)
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

int func_331(int iParam0, int iParam1, int iParam2)
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
					if (func_349(36717, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -507124931);
					break;
				
				case -187038898:
				case 524638244:
					if (func_349(36767, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -187038898);
					break;
				
				case 1797082704:
				case -757817895:
					if (func_349(36766, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 1797082704);
					break;
				
				case 1959890413:
				case 1506629605:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 1959890413);
					break;
				
				case 1167984459:
				case 568901597:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 1167984459);
					break;
				
				case 1006005360:
				case 1403427788:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 1006005360);
					break;
				
				case -1295693571:
				case -1940685798:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -1295693571);
					break;
				
				case -1825141795:
				case 1441861967:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -1825141795);
					break;
				
				case 61080464:
				case -1941007133:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 61080464);
					break;
				
				case -1622071979:
				case -1216457341:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -1622071979);
					break;
				
				case -899024637:
				case 141030546:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -899024637);
					break;
				
				case -569499773:
				case 2065160600:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -569499773);
					break;
				
				case -665339429:
				case 222569387:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -665339429);
					break;
				
				case 858185772:
				case -1269669251:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 858185772);
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
					if (func_349(34505, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 1529075272);
					break;
				
				case 1769388797:
				case 183205348:
					if (func_349(34375, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 1769388797);
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
					if (func_344(116, -1) >= func_343(116, 5, 9) || func_349(31760, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -129339642);
					break;
				
				case 887263619:
				case -436866133:
					if (func_342(123, -1) || func_349(31761, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 887263619);
					break;
				
				case -598443208:
				case 457275657:
					if (func_342(124, -1) || func_349(31762, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -598443208);
					break;
				
				case -619123295:
				case -250832592:
					if (func_342(125, -1) || func_349(31763, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -619123295);
					break;
				
				case -2139930425:
				case -798760789:
					if (func_342(126, -1) || func_349(31764, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -2139930425);
					break;
				
				case 991513037:
				case -1634791241:
					if (func_349(31768, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 991513037);
					break;
				
				case -675149090:
				case -1227437948:
					if (func_349(31769, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -675149090);
					break;
				
				case -1686814509:
				case -1408179706:
					if (func_349(31770, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -1686814509);
					break;
				
				case 2138708412:
				case -1894139601:
					if (func_349(31771, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 2138708412);
					break;
				
				case 205793848:
				case -786254870:
					if (func_349(31772, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 205793848);
					break;
				
				case 1325175663:
				case -773154515:
					if (func_349(31773, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 1325175663);
					break;
				
				case -368088972:
				case 1778247767:
					if (func_349(31774, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -368088972);
					break;
				
				case -1771053026:
				case -648092145:
					if (func_349(31775, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -1771053026);
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
					if (func_349(30533, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_030_M"));
					break;
				
				case joaat("MP_Heist4_Tee_032_M"):
				case joaat("MP_Heist4_Tee_032_F"):
					if (func_349(30534, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_032_M"));
					break;
				
				case joaat("MP_Heist4_Tee_028_M"):
				case joaat("MP_Heist4_Tee_028_F"):
					if (func_349(30535, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_028_M"));
					break;
				
				case joaat("MP_Heist4_Tee_029_M"):
				case joaat("MP_Heist4_Tee_029_F"):
					if (func_349(30536, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_029_M"));
					break;
				
				case joaat("MP_Heist4_Tee_031_M"):
				case joaat("MP_Heist4_Tee_031_F"):
					if (func_349(30537, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_031_M"));
					break;
				
				case joaat("MP_Heist4_Tee_022_M"):
				case joaat("MP_Heist4_Tee_022_F"):
					if (func_349(30538, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_022_M"));
					break;
				
				case joaat("MP_Heist4_Tee_023_M"):
				case joaat("MP_Heist4_Tee_023_F"):
					if (func_349(30539, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_023_M"));
					break;
				
				case joaat("MP_Heist4_Tee_020_M"):
				case joaat("MP_Heist4_Tee_020_F"):
					if (func_349(30540, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_020_M"));
					break;
				
				case joaat("MP_Heist4_Tee_021_M"):
				case joaat("MP_Heist4_Tee_021_F"):
					if (func_349(30541, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_021_M"));
					break;
				
				case joaat("MP_Heist4_Tee_003_M"):
				case joaat("MP_Heist4_Tee_003_F"):
					if (func_349(30542, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_003_M"));
					break;
				
				case joaat("MP_Heist4_Tee_004_M"):
				case joaat("MP_Heist4_Tee_004_F"):
					if (func_349(30543, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_004_M"));
					break;
				
				case joaat("MP_Heist4_Tee_005_M"):
				case joaat("MP_Heist4_Tee_005_F"):
					if (func_349(30544, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_005_M"));
					break;
				
				case joaat("MP_Heist4_Tee_006_M"):
				case joaat("MP_Heist4_Tee_006_F"):
					if (func_349(30545, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_006_M"));
					break;
				
				case joaat("MP_Heist4_Tee_027_M"):
				case joaat("MP_Heist4_Tee_027_F"):
					if (func_349(30546, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_027_M"));
					break;
				
				case joaat("MP_Heist4_Tee_026_M"):
				case joaat("MP_Heist4_Tee_026_F"):
					if (func_349(30547, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_026_M"));
					break;
				
				case joaat("MP_Heist4_Tee_025_M"):
				case joaat("MP_Heist4_Tee_025_F"):
					if (func_349(30548, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_025_M"));
					break;
				
				case joaat("MP_Heist4_Tee_024_M"):
				case joaat("MP_Heist4_Tee_024_F"):
					if (func_349(30549, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_024_M"));
					break;
				
				case joaat("MP_Heist4_Tee_002_M"):
				case joaat("MP_Heist4_Tee_002_F"):
					if (func_349(30550, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_002_M"));
					break;
				
				case joaat("MP_Heist4_Tee_001_M"):
				case joaat("MP_Heist4_Tee_001_F"):
					if (func_349(30551, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_001_M"));
					break;
				
				case joaat("MP_Heist4_Tee_000_M"):
				case joaat("MP_Heist4_Tee_000_F"):
					if (func_349(30552, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_000_M"));
					break;
				
				case joaat("MP_Heist4_Tee_007_M"):
				case joaat("MP_Heist4_Tee_007_F"):
					if (func_349(30553, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_007_M"));
					break;
				
				case joaat("MP_Heist4_Tee_008_M"):
				case joaat("MP_Heist4_Tee_008_F"):
					if (func_349(30554, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_008_M"));
					break;
				
				case joaat("MP_Heist4_Tee_009_M"):
				case joaat("MP_Heist4_Tee_009_F"):
					if (func_349(30555, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_009_M"));
					break;
				
				case joaat("MP_Heist4_Tee_010_M"):
				case joaat("MP_Heist4_Tee_010_F"):
					if (func_349(30556, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_010_M"));
					break;
				
				case joaat("MP_Heist4_Tee_011_M"):
				case joaat("MP_Heist4_Tee_011_F"):
					if (func_349(30557, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_011_M"));
					break;
				
				case joaat("MP_Heist4_Tee_012_M"):
				case joaat("MP_Heist4_Tee_012_F"):
					if (func_349(30524, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_012_M"));
					break;
				
				case joaat("MP_Heist4_Tee_013_M"):
				case joaat("MP_Heist4_Tee_013_F"):
					if (func_349(30525, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_013_M"));
					break;
				
				case joaat("MP_Heist4_Tee_014_M"):
				case joaat("MP_Heist4_Tee_014_F"):
					if (func_349(30526, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_014_M"));
					break;
				
				case joaat("MP_Heist4_Tee_015_M"):
				case joaat("MP_Heist4_Tee_015_F"):
					if (func_349(30527, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_015_M"));
					break;
				
				case joaat("MP_Heist4_Tee_016_M"):
				case joaat("MP_Heist4_Tee_016_F"):
					if (func_349(30528, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_016_M"));
					break;
				
				case joaat("MP_Heist4_Tee_017_M"):
				case joaat("MP_Heist4_Tee_017_F"):
					if (func_349(30529, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_017_M"));
					break;
				
				case joaat("MP_Heist4_Tee_018_M"):
				case joaat("MP_Heist4_Tee_018_F"):
					if (func_349(30530, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_018_M"));
					break;
				
				case joaat("MP_Heist4_Tee_019_M"):
				case joaat("MP_Heist4_Tee_019_F"):
					if (func_349(30531, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_019_M"));
					break;
				
				case joaat("MP_Heist4_Tee_033_M"):
				case joaat("MP_Heist4_Tee_033_F"):
					if (func_349(30532, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_033_M"));
					break;
				
				case joaat("MP_Heist4_Tee_045_M"):
				case joaat("MP_Heist4_Tee_045_F"):
					if (func_349(30570, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_045_M"));
					break;
				
				case joaat("MP_Heist4_Tee_046_M"):
				case joaat("MP_Heist4_Tee_046_F"):
					if (func_349(30571, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_046_M"));
					break;
				
				case joaat("MP_Heist4_Tee_048_M"):
				case joaat("MP_Heist4_Tee_048_F"):
					if (func_349(30568, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_048_M"));
					break;
				
				case joaat("MP_Heist4_Tee_047_M"):
				case joaat("MP_Heist4_Tee_047_F"):
					if (func_349(30569, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_047_M"));
					break;
				
				case joaat("MP_Heist4_Tee_049_M"):
				case joaat("MP_Heist4_Tee_049_F"):
					if (func_349(30634, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_049_M"));
					break;
				
				case joaat("MP_Heist4_Tee_051_M"):
				case joaat("MP_Heist4_Tee_051_F"):
					if (func_349(30635, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_051_M"));
					break;
				
				case joaat("MP_Heist4_Tee_053_M"):
				case joaat("MP_Heist4_Tee_053_F"):
					if (func_349(30636, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_053_M"));
					break;
				
				case joaat("MP_Heist4_Tee_054_M"):
				case joaat("MP_Heist4_Tee_054_F"):
					if (func_349(30637, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_054_M"));
					break;
				
				case joaat("MP_Heist4_Tee_055_M"):
				case joaat("MP_Heist4_Tee_055_F"):
					if (func_349(30703, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_055_M"));
					break;
				
				case joaat("MP_Heist4_Tee_057_M"):
				case joaat("MP_Heist4_Tee_057_F"):
					if (func_349(30704, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_057_M"));
					break;
				
				case joaat("MP_Heist4_Tee_059_M"):
				case joaat("MP_Heist4_Tee_059_F"):
					if (func_349(30700, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_059_M"));
					break;
				
				case joaat("MP_Heist4_Tee_061_M"):
				case joaat("MP_Heist4_Tee_061_F"):
					if (func_349(30701, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_061_M"));
					break;
				
				case joaat("MP_Heist4_Tee_063_M"):
				case joaat("MP_Heist4_Tee_063_F"):
					if (func_349(30702, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_063_M"));
					break;
				
				case joaat("MP_Heist4_Tee_065_M"):
				case joaat("MP_Heist4_Tee_065_F"):
					if (func_349(30699, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_065_M"));
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
					if (func_349(30260, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -1265443416);
					break;
				
				case 1888753218:
				case 272160153:
					if (func_349(30261, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 1888753218);
					break;
				
				case -552467991:
				case 1593344440:
					if (func_349(30262, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -552467991);
					break;
				
				case -1655919948:
				case 546222390:
					if (func_349(30263, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -1655919948);
					break;
				
				case -917106601:
				case 1983375900:
					if (func_349(30264, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -917106601);
					break;
				
				case 1595446967:
				case -620589387:
					if (func_349(30265, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 1595446967);
					break;
				
				case -530593323:
				case 383923929:
					if (func_349(30266, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -530593323);
					break;
				
				case 561619447:
				case -1703406594:
					if (func_349(30267, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 561619447);
					break;
				
				case -1913656173:
				case -398286533:
					if (func_349(30268, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -1913656173);
					break;
				
				case -1766901922:
				case -80478106:
					if (func_349(30269, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -1766901922);
					break;
				
				case 2091781849:
				case 1835331655:
					if (func_349(30270, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 2091781849);
					break;
				
				case 1824588341:
				case -1650596870:
					if (func_349(30271, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 1824588341);
					break;
				
				case 242597641:
				case 1231926496:
					if (func_349(30272, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 242597641);
					break;
				
				case 566785691:
				case -1506181253:
					if (func_349(30273, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 566785691);
					break;
				
				case -2091312957:
				case -1737145605:
					if (func_349(30274, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -2091312957);
					break;
				
				case -2079214831:
				case 1673851512:
					if (func_349(30275, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -2079214831);
					break;
				
				case 1359156274:
				case 1023339598:
					if (func_349(30276, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 1359156274);
					break;
				
				case 1904247246:
				case -163738770:
					if (func_349(30277, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 1904247246);
					break;
				
				case -1351518396:
				case 1863218823:
					if (func_349(30278, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -1351518396);
					break;
				
				case -797874817:
				case 333966447:
					if (func_349(30279, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -797874817);
					break;
				
				case -385507297:
				case 1412626052:
					if (func_349(30280, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -385507297);
					break;
				
				case 2011910758:
				case -39100956:
					if (func_349(30281, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 2011910758);
					break;
				
				case -1953985443:
				case 1631533003:
					if (func_349(30282, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -1953985443);
					break;
				
				case -1124222352:
				case 1493430918:
					if (func_349(30283, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -1124222352);
					break;
				
				case -1806994767:
				case -196693334:
					if (func_349(30284, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -1806994767);
					break;
				
				case -1445761968:
				case 553507495:
					if (func_349(30285, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -1445761968);
					break;
				
				case -89186417:
				case 2003474700:
					if (func_349(30286, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -89186417);
					break;
				
				case -308083083:
				case 1121792228:
					if (func_349(30287, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -308083083);
					break;
				
				case 667714507:
				case -1424651669:
					if (func_349(30288, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 667714507);
					break;
				
				case -1610210252:
				case -1454164346:
					if (func_349(30289, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -1610210252);
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
					if (func_349(28255, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -417116499);
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
					if (func_342(89, -1) || func_349(30254, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 1246110729);
					break;
				
				case 461575135:
				case 1250161120:
					if (func_342(90, -1) || func_349(30255, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == 461575135);
					break;
				
				case -386163163:
				case 1288201657:
					if (func_342(92, -1) || func_349(30256, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -386163163);
					break;
				
				case -1414541879:
				case 111412152:
					if ((((func_342(89, -1) && func_342(90, -1)) && func_342(92, -1)) && func_342(91, -1)) || func_349(30257, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == -1414541879);
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
					if (func_342(78, -1) || func_349(28199, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_001_M"));
					break;
				
				case joaat("mpHeist3_Tee_000_F"):
				case joaat("mpHeist3_Tee_000_M"):
					if (((func_342(77, -1) && func_342(78, -1)) && func_344(92, -1) >= func_343(92, 5, 9)) || func_349(28200, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_000_M"));
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
					if (((func_344(93, -1) >= func_343(93, 5, 9) && func_342(79, -1)) && func_342(80, -1)) || func_349(28204, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, ((iParam1 == joaat("mpHeist3_Tee_007_M") || iParam1 == joaat("mpHeist3_Tee_008_M")) || iParam1 == joaat("mpHeist3_Tee_009_M")));
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
					if (func_342(81, -1) || func_349(28206, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_004_M"));
					break;
				
				case joaat("mpHeist3_Tee_005_F"):
				case joaat("mpHeist3_Tee_005_M"):
					if (func_344(94, -1) >= func_343(94, 5, 9) || func_349(28207, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_005_M"));
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
					if (((func_342(84, -1) && func_342(85, -1)) && func_344(97, -1) >= func_343(97, 5, 9)) || func_349(28212, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_006_M"));
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
					if (func_349(28249, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_002_M"));
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
					if (func_349(28183, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_013_M"));
					break;
				
				case joaat("mpHeist3_Tee_014_F"):
				case joaat("mpHeist3_Tee_014_M"):
					if (func_349(28182, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_014_M"));
					break;
				
				case joaat("mpHeist3_Tee_015_F"):
				case joaat("mpHeist3_Tee_015_M"):
					if (func_349(28184, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_015_M"));
					break;
				
				case joaat("mpHeist3_Tee_016_F"):
				case joaat("mpHeist3_Tee_016_M"):
					if (func_349(28181, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_016_M"));
					break;
				
				case joaat("mpHeist3_Tee_017_F"):
				case joaat("mpHeist3_Tee_017_M"):
					if (func_349(28178, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_017_M"));
					break;
				
				case joaat("mpHeist3_Tee_018_F"):
				case joaat("mpHeist3_Tee_018_M"):
					if (func_349(28177, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_018_M"));
					break;
				
				case joaat("mpHeist3_Tee_019_F"):
				case joaat("mpHeist3_Tee_019_M"):
					if (func_349(28176, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_019_M"));
					break;
				
				case joaat("mpHeist3_Tee_020_F"):
				case joaat("mpHeist3_Tee_020_M"):
					if (func_349(28180, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_020_M"));
					break;
				
				case joaat("mpHeist3_Tee_021_F"):
				case joaat("mpHeist3_Tee_021_M"):
					if (func_349(28179, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_021_M"));
					break;
				
				case joaat("mpHeist3_Tee_022_F"):
				case joaat("mpHeist3_Tee_022_M"):
					if (((((((((func_349(28176, -1) && func_349(28177, -1)) && func_349(28178, -1)) && func_349(28179, -1)) && func_349(28180, -1)) && func_349(28181, -1)) && func_349(28182, -1)) && func_349(28183, -1)) && func_349(28184, -1)) || func_349(28221, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_022_M"));
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
					if (func_349(28191, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_023_M"));
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
					if (func_349(28190, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_011_M"));
					break;
				
				case joaat("mpHeist3_Tee_012_F"):
				case joaat("mpHeist3_Tee_012_M"):
					if (func_349(28189, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_012_M"));
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
					if (func_339(0, 1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_003_M"));
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
					if ((((((((((((((((((func_342(77, -1) && func_342(78, -1)) && func_344(92, -1) >= func_343(92, 5, 9)) && func_344(93, -1) >= func_343(93, 5, 9)) && func_342(79, -1)) && func_342(80, -1)) && func_342(81, -1)) && func_344(94, -1) >= func_343(94, 5, 9)) && func_344(95, -1) >= func_343(95, 5, 9)) && func_342(82, -1)) && func_342(83, -1)) && func_344(96, -1) >= func_343(96, 5, 9)) && func_342(84, -1)) && func_342(85, -1)) && func_344(97, -1) >= func_343(97, 5, 9)) && func_342(86, -1)) && func_342(87, -1)) && func_342(88, -1)) || func_349(28222, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_010_M"));
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
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_023_M"));
					break;
				
				case joaat("MP_Vinewood_Tat_030_M"):
				case joaat("MP_Vinewood_Tat_030_F"):
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_030_M"));
					break;
				
				case joaat("CasinoTop_M_21"):
				case joaat("CasinoTop_F_21"):
					if (func_349(27109, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_21"));
					break;
				
				case joaat("CasinoTop_M_23"):
				case joaat("CasinoTop_F_23"):
					if (func_349(27110, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_23"));
					break;
				
				case joaat("CasinoTop_M_2"):
				case joaat("CasinoTop_F_2"):
					if (func_349(27111, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_2"));
					break;
				
				case joaat("CasinoTop_M_4"):
				case joaat("CasinoTop_F_4"):
					if (func_349(27112, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_4"));
					break;
				
				case joaat("CasinoTop_M_6"):
				case joaat("CasinoTop_F_6"):
					if (func_349(27113, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_6"));
					break;
				
				case joaat("CasinoTop_M_10"):
				case joaat("CasinoTop_F_10"):
					if (func_349(27114, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_10"));
					break;
				
				case joaat("CasinoTop_M_22"):
				case joaat("CasinoTop_F_22"):
					if (func_349(27115, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_22"));
					break;
			}
			break;
		
		case joaat("mpChristmas2018_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Christmas2018_Tee_000_M"):
				case joaat("MP_Christmas2018_Tee_000_F"):
					if (func_349(25032, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_000_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_001_M"):
				case joaat("MP_Christmas2018_Tee_001_F"):
					if (func_349(25033, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_001_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_002_M"):
				case joaat("MP_Christmas2018_Tee_002_F"):
					if (func_349(25034, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_002_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_003_M"):
				case joaat("MP_Christmas2018_Tee_003_F"):
					if (func_349(25035, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_003_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_004_M"):
				case joaat("MP_Christmas2018_Tee_004_F"):
					if (func_349(25036, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_004_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_005_M"):
				case joaat("MP_Christmas2018_Tee_005_F"):
					if (func_349(25037, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_005_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_006_M"):
				case joaat("MP_Christmas2018_Tee_006_F"):
					if (func_349(25038, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_006_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_007_M"):
				case joaat("MP_Christmas2018_Tee_007_F"):
					if (func_349(25039, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_007_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_008_M"):
				case joaat("MP_Christmas2018_Tee_008_F"):
					if (func_349(25040, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_008_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_009_M"):
				case joaat("MP_Christmas2018_Tee_009_F"):
					if (func_349(25041, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_009_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_010_M"):
				case joaat("MP_Christmas2018_Tee_010_F"):
					if (func_349(25042, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_010_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_011_M"):
				case joaat("MP_Christmas2018_Tee_011_F"):
					if (func_349(25043, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_011_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_012_M"):
				case joaat("MP_Christmas2018_Tee_012_F"):
					if (func_349(25044, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_012_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_013_M"):
				case joaat("MP_Christmas2018_Tee_013_F"):
					if (func_349(25045, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_013_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_014_M"):
				case joaat("MP_Christmas2018_Tee_014_F"):
					if (func_349(25046, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_014_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_015_M"):
				case joaat("MP_Christmas2018_Tee_015_F"):
					if (func_349(25047, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_015_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_016_M"):
				case joaat("MP_Christmas2018_Tee_016_F"):
					if (func_349(25048, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_016_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_017_M"):
				case joaat("MP_Christmas2018_Tee_017_F"):
					if (func_349(25049, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_017_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_018_M"):
				case joaat("MP_Christmas2018_Tee_018_F"):
					if (func_349(25050, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_018_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_019_M"):
				case joaat("MP_Christmas2018_Tee_019_F"):
					if (func_349(25051, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_019_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_020_M"):
				case joaat("MP_Christmas2018_Tee_020_F"):
					if (func_349(25052, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_020_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_021_M"):
				case joaat("MP_Christmas2018_Tee_021_F"):
					if (func_349(25053, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_021_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_022_M"):
				case joaat("MP_Christmas2018_Tee_022_F"):
					if (func_349(25054, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_022_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_023_M"):
				case joaat("MP_Christmas2018_Tee_023_F"):
					if (func_349(25055, -1))
					{
						return 0;
					}
					if (func_349(27077, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_023_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_024_M"):
				case joaat("MP_Christmas2018_Tee_024_F"):
					if (func_349(25056, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_024_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_025_M"):
				case joaat("MP_Christmas2018_Tee_025_F"):
					if (func_349(25057, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_025_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_026_M"):
				case joaat("MP_Christmas2018_Tee_026_F"):
					if (func_349(25058, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_026_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_027_M"):
				case joaat("MP_Christmas2018_Tee_027_F"):
					if (func_349(25059, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_027_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_028_M"):
				case joaat("MP_Christmas2018_Tee_028_F"):
					if (func_349(25060, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_028_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_029_M"):
				case joaat("MP_Christmas2018_Tee_029_F"):
					if (func_349(25061, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_029_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_030_M"):
				case joaat("MP_Christmas2018_Tee_030_F"):
					if (func_349(25062, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_030_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_031_M"):
				case joaat("MP_Christmas2018_Tee_031_F"):
					if (func_349(25063, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_031_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_032_M"):
				case joaat("MP_Christmas2018_Tee_032_F"):
					if (func_349(25064, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_032_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_033_M"):
				case joaat("MP_Christmas2018_Tee_033_F"):
					if (func_349(25065, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_033_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_034_M"):
				case joaat("MP_Christmas2018_Tee_034_F"):
					if (func_349(25066, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_034_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_035_M"):
				case joaat("MP_Christmas2018_Tee_035_F"):
					if (func_349(25067, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_035_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_036_M"):
				case joaat("MP_Christmas2018_Tee_036_F"):
					if (func_349(25068, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_036_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_037_M"):
				case joaat("MP_Christmas2018_Tee_037_F"):
					if (func_349(25069, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_037_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_038_M"):
				case joaat("MP_Christmas2018_Tee_038_F"):
					if (func_349(25070, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_038_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_039_M"):
				case joaat("MP_Christmas2018_Tee_039_F"):
					if (func_349(25071, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_039_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_040_M"):
				case joaat("MP_Christmas2018_Tee_040_F"):
					if (func_349(25072, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_040_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_041_M"):
				case joaat("MP_Christmas2018_Tee_041_F"):
					if (func_349(25073, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_041_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_042_M"):
				case joaat("MP_Christmas2018_Tee_042_F"):
					if (func_349(25074, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_042_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_043_M"):
				case joaat("MP_Christmas2018_Tee_043_F"):
					if (func_349(25075, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_043_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_044_M"):
				case joaat("MP_Christmas2018_Tee_044_F"):
					if (func_349(25076, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_044_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_045_M"):
				case joaat("MP_Christmas2018_Tee_045_F"):
					if (func_349(25077, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_045_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_046_M"):
				case joaat("MP_Christmas2018_Tee_046_F"):
					if (func_349(25078, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_046_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_047_M"):
				case joaat("MP_Christmas2018_Tee_047_F"):
					if (func_349(25079, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_047_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_048_M"):
				case joaat("MP_Christmas2018_Tee_048_F"):
					if (func_349(25080, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_048_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_049_M"):
				case joaat("MP_Christmas2018_Tee_049_F"):
					if (func_349(25081, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_049_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_050_M"):
				case joaat("MP_Christmas2018_Tee_050_F"):
					if (func_349(25082, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_050_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_051_M"):
				case joaat("MP_Christmas2018_Tee_051_F"):
					if (func_349(25083, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_051_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_052_M"):
				case joaat("MP_Christmas2018_Tee_052_F"):
					if (func_349(25084, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_052_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_053_M"):
				case joaat("MP_Christmas2018_Tee_053_F"):
					if (func_349(25085, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_053_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_054_M"):
				case joaat("MP_Christmas2018_Tee_054_F"):
					if (func_349(25086, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_054_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_055_M"):
				case joaat("MP_Christmas2018_Tee_055_F"):
					if (func_349(25087, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_055_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_056_M"):
				case joaat("MP_Christmas2018_Tee_056_F"):
					if (func_349(25088, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_056_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_057_M"):
				case joaat("MP_Christmas2018_Tee_057_F"):
					if (func_349(25089, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_057_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_058_M"):
				case joaat("MP_Christmas2018_Tee_058_F"):
					if (func_349(25090, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_058_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_059_M"):
				case joaat("MP_Christmas2018_Tee_059_F"):
					if (func_349(25091, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_059_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_060_M"):
				case joaat("MP_Christmas2018_Tee_060_F"):
					if (func_349(25092, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_060_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_061_M"):
				case joaat("MP_Christmas2018_Tee_061_F"):
					if (func_349(25093, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_061_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_062_M"):
				case joaat("MP_Christmas2018_Tee_062_F"):
					if (func_349(25094, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_062_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_063_M"):
				case joaat("MP_Christmas2018_Tee_063_F"):
					if (func_349(25095, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_063_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_064_M"):
				case joaat("MP_Christmas2018_Tee_064_F"):
					if (func_349(25096, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_064_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_065_M"):
				case joaat("MP_Christmas2018_Tee_065_F"):
					if (func_349(25097, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_065_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_066_M"):
				case joaat("MP_Christmas2018_Tee_066_F"):
					if (func_349(25098, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_066_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_067_M"):
				case joaat("MP_Christmas2018_Tee_067_F"):
					if (func_349(25099, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_067_M"));
					break;
				
				case joaat("MP_Christmas2018_Tat_000_M"):
				case joaat("MP_Christmas2018_Tat_000_F"):
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tat_000_M"));
					break;
			}
			break;
		
		case joaat("mpBattle_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_000_M"):
				case joaat("MP_Battle_Clothing_000_F"):
					if (func_349(22108, -1) || func_349(25006, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_000_M"));
					break;
				
				case joaat("MP_Battle_Clothing_002_M"):
				case joaat("MP_Battle_Clothing_002_F"):
					if (func_349(9481, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_002_M"));
					break;
				
				case joaat("MP_Battle_Clothing_003_M"):
				case joaat("MP_Battle_Clothing_003_F"):
					if (func_349(9470, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_003_M"));
					break;
				
				case joaat("MP_Battle_Clothing_004_M"):
				case joaat("MP_Battle_Clothing_004_F"):
					if (func_349(9475, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_004_M"));
					break;
				
				case joaat("MP_Battle_Clothing_005_M"):
				case joaat("MP_Battle_Clothing_005_F"):
					if (func_349(9472, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_005_M"));
					break;
				
				case joaat("MP_Battle_Clothing_006_M"):
				case joaat("MP_Battle_Clothing_006_F"):
					if (func_349(9465, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_006_M"));
					break;
				
				case joaat("MP_Battle_Clothing_007_M"):
				case joaat("MP_Battle_Clothing_007_F"):
					if (func_349(9463, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_007_M"));
					break;
				
				case joaat("MP_Battle_Clothing_008_M"):
				case joaat("MP_Battle_Clothing_008_F"):
					if (func_349(9464, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_008_M"));
					break;
				
				case joaat("MP_Battle_Clothing_009_M"):
				case joaat("MP_Battle_Clothing_009_F"):
					if (func_349(9468, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_009_M"));
					break;
				
				case joaat("MP_Battle_Clothing_010_M"):
				case joaat("MP_Battle_Clothing_010_F"):
					if (func_349(9469, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_010_M"));
					break;
				
				case joaat("MP_Battle_Clothing_011_M"):
				case joaat("MP_Battle_Clothing_011_F"):
					if (func_349(9479, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_011_M"));
					break;
				
				case joaat("MP_Battle_Clothing_012_M"):
				case joaat("MP_Battle_Clothing_012_F"):
					if (func_349(9473, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_012_M"));
					break;
				
				case joaat("MP_Battle_Clothing_013_M"):
				case joaat("MP_Battle_Clothing_013_F"):
					if (func_349(9480, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_013_M"));
					break;
				
				case joaat("MP_Battle_Clothing_014_M"):
				case joaat("MP_Battle_Clothing_014_F"):
					if (func_349(9476, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_014_M"));
					break;
				
				case joaat("MP_Battle_Clothing_015_M"):
				case joaat("MP_Battle_Clothing_015_F"):
					if (func_349(9477, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_015_M"));
					break;
				
				case joaat("MP_Battle_Clothing_016_M"):
				case joaat("MP_Battle_Clothing_016_F"):
					if (func_349(9471, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_016_M"));
					break;
				
				case joaat("MP_Battle_Clothing_017_M"):
				case joaat("MP_Battle_Clothing_017_F"):
					if (func_349(9474, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_017_M"));
					break;
				
				case joaat("MP_Battle_Clothing_018_M"):
				case joaat("MP_Battle_Clothing_018_F"):
					if (func_349(9467, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_018_M"));
					break;
				
				case joaat("MP_Battle_Clothing_019_M"):
				case joaat("MP_Battle_Clothing_019_F"):
					if (func_349(9478, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_019_M"));
					break;
				
				case joaat("MP_Battle_Clothing_020_M"):
				case joaat("MP_Battle_Clothing_020_F"):
					if (func_349(9462, -1))
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Battle_Clothing_020_M"))
					{
						if (func_349(27085, -1))
						{
							return 0;
						}
					}
					else if (func_349(27084, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_020_M"));
					break;
				
				case joaat("MP_Battle_Clothing_021_M"):
				case joaat("MP_Battle_Clothing_021_F"):
					if (func_349(9466, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_021_M"));
					break;
				
				case joaat("MP_Battle_Clothing_022_M"):
				case joaat("MP_Battle_Clothing_022_F"):
					if (func_349(22126, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_022_M"));
					break;
				
				case joaat("MP_Battle_Clothing_023_M"):
				case joaat("MP_Battle_Clothing_023_F"):
					if (func_349(22127, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_023_M"));
					break;
				
				case joaat("MP_Battle_Clothing_024_M"):
				case joaat("MP_Battle_Clothing_024_F"):
					if (func_349(22128, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_024_M"));
					break;
				
				case joaat("MP_Battle_Clothing_025_M"):
				case joaat("MP_Battle_Clothing_025_F"):
					if (func_349(22124, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_025_M"));
					break;
				
				case joaat("MP_Battle_Clothing_026_M"):
				case joaat("MP_Battle_Clothing_026_F"):
					if (func_349(22130, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_026_M"));
					break;
				
				case joaat("MP_Battle_Clothing_027_M"):
				case joaat("MP_Battle_Clothing_027_F"):
					if (func_349(22125, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_027_M"));
					break;
				
				case joaat("MP_Battle_Clothing_028_M"):
				case joaat("MP_Battle_Clothing_028_F"):
					if (func_349(22129, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_028_M"));
					break;
				
				case joaat("MP_Battle_Clothing_029_M"):
				case joaat("MP_Battle_Clothing_029_F"):
					if (func_349(22131, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_029_M"));
					break;
				
				case joaat("MP_Battle_Clothing_030_M"):
				case joaat("MP_Battle_Clothing_030_F"):
					if (func_349(22132, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_030_M"));
					break;
			}
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_031_M"):
				case joaat("MP_Battle_Clothing_031_F"):
					if (func_349(22147, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_031_M"));
					break;
				
				case joaat("MP_Battle_Clothing_032_M"):
				case joaat("MP_Battle_Clothing_032_F"):
					if (func_349(22148, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_032_M"));
					break;
				
				case joaat("MP_Battle_Clothing_033_M"):
				case joaat("MP_Battle_Clothing_033_F"):
					if (func_349(22149, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_033_M"));
					break;
				
				case joaat("MP_Battle_Clothing_034_M"):
				case joaat("MP_Battle_Clothing_034_F"):
					if (func_349(22150, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_034_M"));
					break;
				
				case joaat("MP_Battle_Clothing_035_M"):
				case joaat("MP_Battle_Clothing_035_F"):
					if (func_349(22151, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_035_M"));
					break;
				
				case joaat("MP_Battle_Clothing_036_M"):
				case joaat("MP_Battle_Clothing_036_F"):
					if (func_349(22152, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_036_M"));
					break;
				
				case joaat("MP_Battle_Clothing_037_M"):
				case joaat("MP_Battle_Clothing_037_F"):
					if (func_349(22153, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_037_M"));
					break;
				
				case joaat("MP_Battle_Clothing_038_M"):
				case joaat("MP_Battle_Clothing_038_F"):
					if (func_349(22154, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_038_M"));
					break;
				
				case joaat("MP_Battle_Clothing_039_M"):
				case joaat("MP_Battle_Clothing_039_F"):
					if (func_349(22155, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_039_M"));
					break;
				
				case joaat("MP_Battle_Clothing_040_M"):
				case joaat("MP_Battle_Clothing_040_F"):
					if (func_349(22156, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_040_M"));
					break;
				
				case joaat("MP_Battle_Clothing_041_M"):
				case joaat("MP_Battle_Clothing_041_F"):
					if (func_349(22157, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_041_M"));
					break;
				
				case joaat("MP_Battle_Clothing_042_M"):
				case joaat("MP_Battle_Clothing_042_F"):
					if (func_349(22158, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_042_M"));
					break;
				
				case joaat("MP_Battle_Clothing_043_M"):
				case joaat("MP_Battle_Clothing_043_F"):
					if (func_349(22159, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_043_M"));
					break;
				
				case joaat("MP_Battle_Clothing_044_M"):
				case joaat("MP_Battle_Clothing_044_F"):
					if (func_349(22160, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_044_M"));
					break;
				
				case joaat("MP_Battle_Clothing_045_M"):
				case joaat("MP_Battle_Clothing_045_F"):
					if (func_349(22161, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_045_M"));
					break;
				
				case joaat("MP_Battle_Clothing_046_M"):
				case joaat("MP_Battle_Clothing_046_F"):
					if (func_349(22162, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_046_M"));
					break;
				
				case joaat("MP_Battle_Clothing_047_M"):
				case joaat("MP_Battle_Clothing_047_F"):
					if (func_349(22163, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_047_M"));
					break;
				
				case joaat("MP_Battle_Clothing_048_M"):
				case joaat("MP_Battle_Clothing_048_F"):
					if (func_349(22164, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_048_M"));
					break;
				
				case joaat("MP_Battle_Clothing_049_M"):
				case joaat("MP_Battle_Clothing_049_F"):
					if (func_349(22165, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_049_M"));
					break;
				
				case joaat("MP_Battle_Clothing_050_M"):
				case joaat("MP_Battle_Clothing_050_F"):
					if (func_349(22166, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_050_M"));
					break;
				
				case joaat("MP_Battle_Clothing_051_M"):
				case joaat("MP_Battle_Clothing_051_F"):
					if (func_349(22167, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_051_M"));
					break;
				
				case joaat("MP_Battle_Clothing_052_M"):
				case joaat("MP_Battle_Clothing_052_F"):
					if (func_349(22168, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_052_M"));
					break;
				
				case joaat("MP_Battle_Clothing_053_M"):
				case joaat("MP_Battle_Clothing_053_F"):
					if (func_349(22169, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_053_M"));
					break;
				
				case joaat("MP_Battle_Clothing_054_M"):
				case joaat("MP_Battle_Clothing_054_F"):
					if (func_349(22170, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_054_M"));
					break;
				
				case joaat("MP_Battle_Clothing_055_M"):
				case joaat("MP_Battle_Clothing_055_F"):
					if (func_349(22171, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_055_M"));
					break;
				
				case joaat("MP_Battle_Clothing_056_M"):
				case joaat("MP_Battle_Clothing_056_F"):
					if (func_349(22172, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_056_M"));
					break;
				
				case joaat("MP_Battle_Clothing_057_M"):
				case joaat("MP_Battle_Clothing_057_F"):
					if (func_349(22173, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_057_M"));
					break;
				
				case joaat("MP_Battle_Clothing_058_M"):
				case joaat("MP_Battle_Clothing_058_F"):
					if (func_349(22174, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_058_M"));
					break;
				
				case joaat("MP_Battle_Clothing_059_M"):
				case joaat("MP_Battle_Clothing_059_F"):
					if (func_349(22175, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_059_M"));
					break;
				
				case joaat("MP_Battle_Clothing_060_M"):
				case joaat("MP_Battle_Clothing_060_F"):
					if (func_349(22176, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_060_M"));
					break;
				
				case joaat("MP_Battle_Clothing_061_M"):
				case joaat("MP_Battle_Clothing_061_F"):
					if (func_349(22177, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_061_M"));
					break;
				
				case joaat("MP_Battle_Clothing_062_M"):
				case joaat("MP_Battle_Clothing_062_F"):
					if (func_349(22178, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_062_M"));
					break;
			}
			break;
		
		case joaat("mpGunrunning_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_019_M"):
				case joaat("MP_Gunrunning_Award_025_F"):
					if (func_349(15426, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_019_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_020_M"):
				case joaat("MP_Gunrunning_Award_020_F"):
					if (func_349(15422, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_020_M_ALT"):
				case joaat("MP_Gunrunning_Award_020_F_ALT"):
					if (func_349(15423, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M_ALT"));
					break;
				
				case joaat("MP_Gunrunning_Award_021_M"):
				case joaat("MP_Gunrunning_Award_021_F"):
					if (func_349(15421, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_021_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_022_M"):
				case joaat("MP_Gunrunning_Award_026_F"):
					if (func_349(15427, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_022_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_023_M"):
				case joaat("MP_Gunrunning_Award_023_F"):
					if (func_349(15419, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_023_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_024_M"):
				case joaat("MP_Gunrunning_Award_024_F"):
					if (func_349(15420, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_024_M"));
					break;
			}
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_000_M"):
				case joaat("MP_Gunrunning_Award_000_F"):
					if (func_349(15394, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_000_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_001_M"):
				case joaat("MP_Gunrunning_Award_001_F"):
					if (func_51(209, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_001_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_002_M"):
				case joaat("MP_Gunrunning_Award_002_F"):
					if (func_349(15406, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_002_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_003_M"):
				case joaat("MP_Gunrunning_Award_003_F"):
					if (func_349(15395, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_003_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_004_M"):
				case joaat("MP_Gunrunning_Award_004_F"):
					if (func_51(209, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_004_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_005_M"):
				case joaat("MP_Gunrunning_Award_005_F"):
					if (func_349(15410, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_005_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_006_M"):
				case joaat("MP_Gunrunning_Award_006_F"):
					if (func_349(15407, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_006_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_007_M"):
				case joaat("MP_Gunrunning_Award_007_F"):
					if (func_51(209, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_007_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_008_M"):
				case joaat("MP_Gunrunning_Award_008_F"):
					if (func_51(209, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_008_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_009_M"):
				case joaat("MP_Gunrunning_Award_009_F"):
					if (func_349(15414, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_009_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_010_M"):
				case joaat("MP_Gunrunning_Award_010_F"):
					if (func_349(15415, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_010_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_011_M"):
				case joaat("MP_Gunrunning_Award_011_F"):
					if (func_349(15399, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_011_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_012_M"):
				case joaat("MP_Gunrunning_Award_012_F"):
					if (func_349(15404, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_012_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_013_M"):
				case joaat("MP_Gunrunning_Award_013_F"):
					if (func_51(209, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_013_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_014_M"):
				case joaat("MP_Gunrunning_Award_014_F"):
					if (func_349(15392, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_014_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_015_M"):
				case joaat("MP_Gunrunning_Award_015_F"):
					if (func_349(15390, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_015_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_016_M"):
				case joaat("MP_Gunrunning_Award_016_F"):
					if (func_349(15402, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_016_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_017_M"):
				case joaat("MP_Gunrunning_Award_017_F"):
					if (func_349(15416, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_017_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_018_M"):
				case joaat("MP_Gunrunning_Award_018_F"):
					if (func_51(209, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_018_M"));
					break;
			}
			break;
		
		case joaat("mpBiker_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Biker_Tee_022_M"):
				case joaat("MP_Biker_Tee_022_F"):
					if (func_349(9366, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_022_M"));
					break;
				
				case joaat("MP_Biker_Tee_023_M"):
				case joaat("MP_Biker_Tee_023_F"):
					if (func_349(9367, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_023_M"));
					break;
				
				case joaat("MP_Biker_Tee_024_M"):
				case joaat("MP_Biker_Tee_024_F"):
					if (func_349(9369, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_024_M"));
					break;
				
				case joaat("MP_Biker_Tee_025_M"):
				case joaat("MP_Biker_Tee_025_F"):
					if (func_349(9368, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_025_M"));
					break;
				
				case joaat("MP_Biker_Tee_047_M"):
				case joaat("MP_Biker_Tee_047_F"):
					if (func_349(9365, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_047_M"));
					break;
				
				case joaat("MP_Biker_Tee_048_M"):
				case joaat("MP_Biker_Tee_048_F"):
					if (func_349(9364, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_048_M"));
					break;
				
				case joaat("MP_Biker_Tee_049_M"):
				case joaat("MP_Biker_Tee_049_F"):
					if (func_349(27078, -1))
					{
						return 0;
					}
					if (func_349(9363, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_049_M"));
					break;
				
				case joaat("MP_Biker_Tee_050_M"):
				case joaat("MP_Biker_Tee_050_F"):
					if (func_349(9362, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_050_M"));
					break;
				
				case joaat("MP_Biker_Tee_051_M"):
				case joaat("MP_Biker_Tee_051_F"):
					if (func_349(9370, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_051_M"));
					break;
				
				case joaat("MP_Biker_Tee_052_M"):
				case joaat("MP_Biker_Tee_052_F"):
					if (func_349(9371, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_052_M"));
					break;
				
				case joaat("MP_Biker_Tee_053_M"):
				case joaat("MP_Biker_Tee_053_F"):
					if (func_349(9372, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_053_M"));
					break;
				
				case joaat("MP_Biker_Tee_054_M"):
				case joaat("MP_Biker_Tee_054_F"):
					if (func_349(9373, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_054_M"));
					break;
				
				case joaat("MP_Biker_Tee_055_M"):
				case joaat("MP_Biker_Tee_055_F"):
					if (func_349(9374, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_055_M"));
					break;
				
				case joaat("MP_Biker_Award_000_M"):
				case joaat("MP_Biker_Award_000_F"):
					if (func_349(9384, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_000_M"));
					break;
				
				case joaat("MP_Biker_Award_001_M"):
				case joaat("MP_Biker_Award_001_F"):
					if (func_349(9385, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_001_M"));
					break;
			}
			break;
		
		case joaat("mpExecutive_overlays"):
			switch (iParam1)
			{
				case joaat("MP_exec_prizes_015_M"):
				case joaat("MP_exec_prizes_015_F"):
					if (func_349(7551, -1) || func_97(3792, -1, 0) >= Global_262145.f_16768)
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_015_M"));
					break;
				
				case joaat("MP_exec_prizes_000_M"):
				case joaat("MP_exec_prizes_000_F"):
					if (func_349(7467, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_000_M"));
					break;
				
				case joaat("MP_exec_prizes_001_M"):
				case joaat("MP_exec_prizes_001_F"):
					if (func_349(7468, -1))
					{
						return 0;
					}
					if (iParam1 == joaat("MP_exec_prizes_001_M"))
					{
						if (func_349(27083, -1))
						{
							return 0;
						}
					}
					else if (func_349(27086, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_001_M"));
					break;
				
				case joaat("MP_exec_prizes_002_M"):
				case joaat("MP_exec_prizes_002_F"):
					if (func_349(7469, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_002_M"));
					break;
				
				case joaat("MP_exec_prizes_003_M"):
				case joaat("MP_exec_prizes_003_F"):
					if (func_349(7470, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_003_M"));
					break;
				
				case joaat("MP_exec_prizes_004_M"):
				case joaat("MP_exec_prizes_004_F"):
					if (func_349(7471, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_004_M"));
					break;
				
				case joaat("MP_exec_prizes_005_M"):
				case joaat("MP_exec_prizes_005_F"):
					if (func_349(7472, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_005_M"));
					break;
				
				case joaat("MP_exec_prizes_006_M"):
				case joaat("MP_exec_prizes_006_F"):
					if (func_349(7473, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_006_M"));
					break;
				
				case joaat("MP_exec_prizes_007_M"):
				case joaat("MP_exec_prizes_007_F"):
					if (func_349(7474, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_007_M"));
					break;
				
				case joaat("MP_exec_prizes_008_M"):
				case joaat("MP_exec_prizes_008_F"):
					if (func_349(7475, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_008_M"));
					break;
				
				case joaat("MP_exec_prizes_009_M"):
				case joaat("MP_exec_prizes_009_F"):
					if (func_349(7476, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_009_M"));
					break;
				
				case joaat("MP_exec_prizes_010_M"):
				case joaat("MP_exec_prizes_010_F"):
					if (func_349(7477, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_010_M"));
					break;
				
				case joaat("MP_exec_prizes_011_M"):
				case joaat("MP_exec_prizes_011_F"):
					if (func_349(7478, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_011_M"));
					break;
				
				case joaat("MP_exec_prizes_012_M"):
				case joaat("MP_exec_prizes_012_F"):
					if (func_349(7479, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_012_M"));
					break;
				
				case joaat("MP_exec_prizes_013_M"):
				case joaat("MP_exec_prizes_013_F"):
					if (func_349(7480, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_013_M"));
					break;
				
				case joaat("MP_exec_prizes_014_M"):
				case joaat("MP_exec_prizes_014_F"):
					if (func_349(7481, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_014_M"));
					break;
			}
			break;
		
		case joaat("mpHalloween_overlays"):
			switch (iParam1)
			{
				case joaat("HW_Tee_000_F"):
				case joaat("HW_Tee_000_M"):
					if (func_349(4260, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("HW_Tee_000_M"));
					break;
				
				case joaat("HW_Tee_001_F"):
				case joaat("HW_Tee_001_M"):
					if (func_349(4257, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("HW_Tee_001_M"));
					break;
				
				case joaat("HW_Tee_002_F"):
				case joaat("HW_Tee_002_M"):
					if (func_349(4269, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("HW_Tee_002_M"));
					break;
				
				case joaat("HW_Tee_003_F"):
				case joaat("HW_Tee_003_M"):
					if (func_349(4261, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("HW_Tee_003_M"));
					break;
				
				case joaat("HW_Tee_004_F"):
				case joaat("HW_Tee_004_M"):
					if (func_349(4259, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("HW_Tee_004_M"));
					break;
				
				case joaat("HW_Tee_005_F"):
				case joaat("HW_Tee_005_M"):
					if (func_349(4268, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("HW_Tee_005_M"));
					break;
				
				case joaat("HW_Tee_006_F"):
				case joaat("HW_Tee_006_M"):
					if (func_349(4265, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("HW_Tee_006_M"));
					break;
				
				case joaat("HW_Tee_007_F"):
				case joaat("HW_Tee_007_M"):
					if (func_349(4258, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("HW_Tee_007_M"));
					break;
				
				case joaat("HW_Tee_008_F"):
				case joaat("HW_Tee_008_M"):
					if (func_349(4264, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("HW_Tee_008_M"));
					break;
				
				case joaat("HW_Tee_009_F"):
				case joaat("HW_Tee_009_M"):
					if (func_349(4267, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("HW_Tee_009_M"));
					break;
				
				case joaat("HW_Tee_010_F"):
				case joaat("HW_Tee_010_M"):
					if (func_349(4262, -1))
					{
						return 0;
					}
					if (func_349(27079, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("HW_Tee_010_M"));
					break;
				
				case joaat("HW_Tee_011_F"):
				case joaat("HW_Tee_011_M"):
					if (func_349(4263, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("HW_Tee_011_M"));
					break;
				
				case joaat("HW_Tee_012_F"):
				case joaat("HW_Tee_012_M"):
					if (func_349(4266, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("HW_Tee_012_M"));
					break;
			}
			break;
		
		case joaat("mpLowrider_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Bennys_000_M"):
				case joaat("MP_Bennys_001_M"):
					if (func_97(2934, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Bennys_001_M"))
					{
						if (func_349(27068, -1))
						{
							return 0;
						}
					}
					return !func_345(iParam2, iParam1, 1);
					break;
				
				case joaat("MP_Bennys_000_F"):
				case joaat("MP_Bennys_001_F"):
					if (func_97(2934, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Bennys_001_F"))
					{
						if (func_349(27068, -1))
						{
							return 0;
						}
					}
					return !func_345(iParam2, iParam1, 0);
					break;
			}
			break;
		
		case joaat("mpxmas_604490_overlays"):
			switch (iParam1)
			{
				case joaat("MP_IHeartLC_000_M"):
				case joaat("MP_IHeartLC_001_F"):
					if (func_349(113, -1))
					{
						return 0;
					}
					return !func_345(iParam2, iParam1, iParam1 == joaat("MP_IHeartLC_000_M"));
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
						if (func_349(27082, -1))
						{
							return 0;
						}
						if (func_349(3770, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_005"))
					{
						if (func_349(3771, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_006"))
					{
						if (func_349(3772, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_007"))
					{
						if (func_349(3773, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_008"))
					{
						if (func_349(3774, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_009"))
					{
						if (func_349(3775, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_010"))
					{
						if (func_349(3776, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_011"))
					{
						if (func_349(3777, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_012"))
					{
						if (func_349(3778, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_013"))
					{
						if (func_349(3779, -1) || func_349(27084, -1))
						{
							return 0;
						}
					}
					return !func_345(iParam2, iParam1, 1);
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
						if (func_349(3770, -1))
						{
							return 0;
						}
						if (func_349(27082, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_005"))
					{
						if (func_349(3771, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_006"))
					{
						if (func_349(3772, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_007"))
					{
						if (func_349(3773, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_008"))
					{
						if (func_349(3774, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_009"))
					{
						if (func_349(3775, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_010"))
					{
						if (func_349(3776, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_011"))
					{
						if (func_349(3777, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_012"))
					{
						if (func_349(3778, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_013"))
					{
						if (func_349(3779, -1) || func_349(27083, -1))
						{
							return 0;
						}
					}
					return !func_345(iParam2, iParam1, 0);
					break;
				
				case joaat("MP_Elite_M_Tshirt"):
				case joaat("MP_Elite_M_Tshirt_1"):
				case joaat("MP_Elite_F_Tshirt"):
				case joaat("MP_Elite_F_Tshirt_1"):
					if ((((func_349(3765, -1) && func_349(3766, -1)) && func_349(3767, -1)) && func_349(3768, -1)) && func_349(3769, -1))
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
					return !func_349(3593, -1);
					break;
			}
			if (!Global_262145.f_8259 && !func_345(iParam2, iParam1, 0))
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
					return (!func_51(152, -1) && !func_349(9440, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_003"):
				case joaat("FM_Hip_F_Retro_003"):
					return (!func_51(151, -1) && !func_349(9430, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_000"):
				case joaat("FM_Hip_F_Retro_000"):
					return (!func_334(iParam2, -1) && !func_349(9426, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_001"):
				case joaat("FM_Hip_F_Retro_001"):
					return (!func_334(iParam2, -1) && !func_349(9427, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_002"):
				case joaat("FM_Hip_F_Retro_002"):
					return (!func_334(iParam2, -1) && !func_349(9428, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_004"):
				case joaat("FM_Hip_F_Retro_004"):
					return (!func_334(iParam2, -1) && !func_349(9431, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_005"):
				case joaat("FM_Hip_F_Retro_005"):
					return (!func_334(iParam2, -1) && !func_349(9432, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_006"):
				case joaat("FM_Hip_F_Retro_006"):
					return (!func_334(iParam2, -1) && !func_349(9433, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_007"):
				case joaat("FM_Hip_F_Retro_007"):
					return (!func_334(iParam2, -1) && !func_349(9439, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_008"):
				case joaat("FM_Hip_F_Retro_008"):
					return (!func_334(iParam2, -1) && !func_349(9434, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_009"):
				case joaat("FM_Hip_F_Retro_009"):
					return (!func_334(iParam2, -1) && !func_349(9435, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_011"):
				case joaat("FM_Hip_F_Retro_011"):
					return (!func_334(iParam2, -1) && !func_349(9436, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_012"):
				case joaat("FM_Hip_F_Retro_012"):
					return (!func_334(iParam2, -1) && !func_349(9429, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_013"):
				case joaat("FM_Hip_F_Retro_013"):
					return (!func_334(iParam2, -1) && !func_349(9437, -1));
					break;
				
				case joaat("FM_Rstar_M_Tshirt_000"):
				case joaat("FM_Rstar_M_Tshirt_001"):
				case joaat("FM_Rstar_M_Tshirt_002"):
				case joaat("FM_Rstar_F_Tshirt_000"):
				case joaat("FM_Rstar_F_Tshirt_001"):
				case joaat("FM_Rstar_F_Tshirt_002"):
					return !func_333();
					break;
			}
			break;
		
		case joaat("mpvalentines_overlays"):
			if ((!Global_262145.f_7059 && !func_334(iParam2, -1)) && !Global_262145.f_12034)
			{
				return 1;
			}
			break;
		
		case joaat("mpPilot_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Fli_M_Tshirt_000"):
				case joaat("MP_Fli_F_Tshirt_000"):
					return !func_349(3608, -1);
					break;
			}
			break;
		
		case joaat("mpLTS_overlays"):
			switch (iParam1)
			{
				case joaat("FM_LTS_M_Tshirt_000"):
				case joaat("FM_LTS_F_Tshirt_000"):
					return (!func_349(3615, -1) && !func_349(9438, -1));
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
					return !func_349(3783, -1);
					break;
				
				case joaat("MP_FAKE_DIS_001_M"):
				case joaat("MP_FAKE_DIS_001_F"):
					return !func_349(3784, -1);
					break;
				
				case joaat("MP_FAKE_DS_000_M"):
				case joaat("MP_FAKE_DS_000_F"):
					return !func_349(3785, -1);
					break;
				
				case joaat("MP_FAKE_ENEMA_000_M"):
				case joaat("MP_FAKE_ENEMA_000_F"):
					return !func_349(3786, -1);
					break;
				
				case joaat("MP_FAKE_LB_000_M"):
				case joaat("MP_FAKE_LB_000_F"):
					return !func_349(3787, -1);
					break;
				
				case joaat("MP_FAKE_LC_000_M"):
				case joaat("MP_FAKE_LC_000_F"):
					return !func_349(3788, -1);
					break;
				
				case joaat("MP_FAKE_SC_000_M"):
				case joaat("MP_FAKE_SC_000_F"):
					if (func_349(27081, -1))
					{
						return 0;
					}
					return !func_349(3789, -1);
					break;
				
				case joaat("MP_FAKE_Vap_000_M"):
				case joaat("MP_FAKE_Vap_000_F"):
					return !func_349(3790, -1);
					break;
				
				case joaat("MP_FAKE_Per_000_M"):
				case joaat("MP_FAKE_Per_000_F"):
					return !func_349(3791, -1);
					break;
				
				case joaat("MP_FAKE_SN_000_M"):
				case joaat("MP_FAKE_SN_000_F"):
					return !func_349(3792, -1);
					break;
				
				case joaat("MP_FILM_000_F"):
				case joaat("MP_FILM_000_M"):
					if (iParam1 == joaat("MP_FILM_000_F"))
					{
						iVar0 = func_97(2444, -1, 0);
						if (BitTest(iVar0, 0))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_000_M"))
					{
						iVar1 = func_97(2424, -1, 0);
						if (BitTest(iVar1, 18))
						{
							return 0;
						}
					}
					return !func_349(3793, -1);
					break;
				
				case joaat("MP_FILM_001_F"):
				case joaat("MP_FILM_001_M"):
					if (iParam1 == joaat("MP_FILM_001_F"))
					{
						iVar2 = func_97(2444, -1, 0);
						if (BitTest(iVar2, 1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_001_M"))
					{
						iVar3 = func_97(2424, -1, 0);
						if (BitTest(iVar3, 19))
						{
							return 0;
						}
					}
					return !func_349(3794, -1);
					break;
				
				case joaat("MP_FILM_002_F"):
				case joaat("MP_FILM_002_M"):
					if (iParam1 == joaat("MP_FILM_002_F"))
					{
						iVar4 = func_97(2444, -1, 0);
						if (BitTest(iVar4, 2))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_002_M"))
					{
						iVar5 = func_97(2424, -1, 0);
						if (BitTest(iVar5, 20))
						{
							return 0;
						}
					}
					return !func_349(3795, -1);
					break;
				
				case joaat("MP_FILM_003_F"):
				case joaat("MP_FILM_003_M"):
					if (iParam1 == joaat("MP_FILM_003_F"))
					{
						iVar6 = func_97(2444, -1, 0);
						if (BitTest(iVar6, 3))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_003_M"))
					{
						iVar7 = func_97(2424, -1, 0);
						if (BitTest(iVar7, 21))
						{
							return 0;
						}
					}
					return !func_349(3796, -1);
					break;
				
				case joaat("MP_FILM_004_F"):
				case joaat("MP_FILM_004_M"):
					if (iParam1 == joaat("MP_FILM_004_F"))
					{
						iVar8 = func_97(2444, -1, 0);
						if (BitTest(iVar8, 4))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_004_M"))
					{
						iVar9 = func_97(2424, -1, 0);
						if (BitTest(iVar9, 22))
						{
							return 0;
						}
					}
					return !func_349(3797, -1);
					break;
				
				case joaat("MP_FILM_005_F"):
				case joaat("MP_FILM_005_M"):
					if (iParam1 == joaat("MP_FILM_005_F"))
					{
						iVar10 = func_97(2444, -1, 0);
						if (BitTest(iVar10, 5))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_005_M"))
					{
						iVar11 = func_97(2424, -1, 0);
						if (BitTest(iVar11, 23))
						{
							return 0;
						}
					}
					return !func_349(3798, -1);
					break;
				
				case joaat("MP_FILM_006_F"):
				case joaat("MP_FILM_006_M"):
					if (iParam1 == joaat("MP_FILM_006_F"))
					{
						iVar12 = func_97(2444, -1, 0);
						if (BitTest(iVar12, 6))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_006_M"))
					{
						iVar13 = func_97(2424, -1, 0);
						if (BitTest(iVar13, 24))
						{
							return 0;
						}
					}
					return !func_349(3799, -1);
					break;
				
				case joaat("MP_FILM_007_F"):
				case joaat("MP_FILM_007_M"):
					if (iParam1 == joaat("MP_FILM_007_F"))
					{
						iVar14 = func_97(2444, -1, 0);
						if (BitTest(iVar14, 7))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_007_M"))
					{
						iVar15 = func_97(2424, -1, 0);
						if (BitTest(iVar15, 25))
						{
							return 0;
						}
					}
					return !func_349(3800, -1);
					break;
				
				case joaat("MP_FILM_008_F"):
				case joaat("MP_FILM_008_M"):
					if (iParam1 == joaat("MP_FILM_008_F"))
					{
						iVar16 = func_97(2444, -1, 0);
						if (BitTest(iVar16, 8))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_008_M"))
					{
						iVar17 = func_97(2424, -1, 0);
						if (BitTest(iVar17, 26))
						{
							return 0;
						}
					}
					return !func_349(3801, -1);
					break;
				
				case joaat("MP_FILM_009_F"):
				case joaat("MP_FILM_009_M"):
					if (iParam1 == joaat("MP_FILM_009_F"))
					{
						iVar18 = func_97(2444, -1, 0);
						if (BitTest(iVar18, 9))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_009_M"))
					{
						iVar19 = func_97(2424, -1, 0);
						if (BitTest(iVar19, 27))
						{
							return 0;
						}
					}
					return !func_349(3802, -1);
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
					return !func_332();
					break;
			}
			break;
	}
	return 0;
}

int func_332()
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
					unk_0x0B0C9A0F9AAEB7F0(&iVar0, false);
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

bool func_333()
{
	return unk_0x087611B922B50F13(-1762644250);
}

int func_334(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (func_337(iParam0) == 14192)
	{
		return 0;
	}
	uVar0 = func_336(iParam0, iParam1);
	iVar1 = iParam0;
	return BitTest(uVar0, func_335(iVar1));
}

int func_335(int iParam0)
{
	return (iParam0 % 32);
}

var func_336(var uParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_97(func_337(uParam0), iParam1, 0);
	return uVar0;
}

int func_337(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_338(iVar0);
	if ((func_60() == 0 || func_505() == 0) || (func_60() == 999 && func_505() == 999))
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

int func_338(int iParam0)
{
	return (iParam0 / 32);
}

int func_339(int iParam0, bool bParam1)
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
		if (!func_341(iVar2) || iParam0)
		{
			if (!func_340(unk_0x259BE71D8A81D4FA(), iVar2, 0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_340(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	if (iParam0 != func_93())
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

int func_341(int iParam0)
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

int func_342(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2850651[iParam0 /*3*/][func_52(iParam1)];
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_343(int iParam0, int iParam1, int iParam2)
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
				
		