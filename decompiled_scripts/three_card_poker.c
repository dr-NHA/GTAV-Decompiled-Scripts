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
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	struct<592> Local_111 = { 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 32, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 32;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	struct<9> Local_153[32];
	struct<855> Local_154 = { 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, -1, -1, 0, 0, 0, 4, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_155 = 3;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	struct<23> Local_163 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_164 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	bool bLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	bool bLocal_172 = 0;
	bool bLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179[4] = { 0, 0, 0, 0 };
	int iLocal_180[4] = { 0, 0, 0, 0 };
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	bool bLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
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
	sLocal_20 = "NULL";
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_167 = 1;
	func_434();
	while (true)
	{
		wait(0);
		if (func_426())
		{
			func_422();
		}
		if (Global_1970462)
		{
			Global_1970462 = 0;
			func_422();
		}
		if (Global_2635559.f_2681 && Global_2639783 != 0)
		{
			if (Global_2639783 != 6)
			{
				func_422();
			}
		}
		if (func_421() && unk_0x15CCE8886267624F())
		{
			func_422();
		}
		if ((!func_420(unk_0x259BE71D8A81D4FA()) && !func_419(unk_0x259BE71D8A81D4FA())) && !func_418(unk_0x259BE71D8A81D4FA()))
		{
			func_422();
		}
		if (unk_0x834C960822A4683F() && !BitTest(Global_4718592.f_34, 6))
		{
			func_422();
		}
		if (func_419(unk_0x259BE71D8A81D4FA()) && func_414() != func_413())
		{
			if (BitTest(Global_2657589[func_414() /*466*/].f_321.f_4, 0) && unk_0x15CCE8886267624F())
			{
				func_422();
			}
		}
		if (func_419(unk_0x259BE71D8A81D4FA()) && func_414() != func_413())
		{
			if (Global_2657589[func_414() /*466*/].f_457 != Global_1970471 && unk_0x15CCE8886267624F())
			{
				func_422();
			}
		}
		if (func_419(unk_0x259BE71D8A81D4FA()) && func_411() != 0)
		{
			func_422();
		}
		if (func_419(unk_0x259BE71D8A81D4FA()) && func_409(unk_0x259BE71D8A81D4FA()))
		{
			func_422();
		}
		iVar0 = 0;
		while (iVar0 < Local_154.f_26)
		{
			if ((!func_408() && unk_0x2FC2FDC413532977(Local_111.f_50[iVar0])) && unk_0xEADBDBE0422CF7E6(Local_111.f_50[iVar0]))
			{
				unk_0x8FC511FC963C67E5(Local_111.f_50[iVar0], 1);
			}
			iVar0++;
		}
		func_91();
		if (func_408())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	func_90();
	func_87();
	func_81();
	iVar0 = 0;
	while (iVar0 < Local_154.f_26)
	{
		switch (Local_111.f_586[iVar0])
		{
			case 0:
				if (Global_2765559 != iVar0 && (Global_2765559 != -1 || func_419(unk_0x259BE71D8A81D4FA())))
				{
					Local_111.f_25[iVar0] = 1;
					func_80(&(Local_111.f_168[iVar0 /*55*/]));
					func_79(1, iVar0);
				}
				break;
			
			case 1:
				if (unk_0x93BF17E19A9F0E9B(Local_111.f_50[iVar0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_111.f_50[iVar0])))
				{
					if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iVar0]))
					{
						Local_111.f_45[iVar0] = unk_0x643DC062EE904FCA(Local_111.f_35[iVar0]);
						if (Local_111.f_45[iVar0] != -1)
						{
							if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_111.f_50[iVar0]), func_78(), func_77(iVar0), 3))
							{
								if (unk_0xBD3B265153D3BA2D(Local_111.f_45[iVar0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iVar0]), joaat("blend_out")))
								{
									Local_111.f_35[iVar0] = unk_0xBC5D9A293974F095(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iVar0]), Local_111.f_35[iVar0], func_78(), func_74(iVar0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xE7101255AD6F1952(Local_111.f_35[iVar0]);
								}
							}
							else if (unk_0xBD3B265153D3BA2D(Local_111.f_45[iVar0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iVar0]), joaat("blend_out")))
							{
								Local_111.f_35[iVar0] = unk_0xBC5D9A293974F095(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, 0, 1, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iVar0]), Local_111.f_35[iVar0], func_78(), func_77(iVar0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_111.f_35[iVar0]);
							}
						}
					}
					else
					{
						unk_0x460D2A8B2C7DC7D4(Local_111.f_50[iVar0]);
					}
				}
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if ((Local_111.f_117[(iVar0 * 4 + iVar1)] != func_413() && Global_2765559 != iVar0) && (Global_2765559 != -1 || func_419(unk_0x259BE71D8A81D4FA())))
					{
						func_79(2, iVar0);
						Local_111.f_40[iVar0] = iVar1;
						func_73(&(Local_111.f_159[iVar0 /*2*/]), 0, 0);
						return;
					}
					iVar1++;
				}
				break;
			
			case 2:
				if ((unk_0x93BF17E19A9F0E9B(Local_111.f_50[iVar0]) && unk_0xEADBDBE0422CF7E6(Local_111.f_50[iVar0])) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_111.f_50[iVar0])))
				{
					if (func_72(&(Local_111.f_159[iVar0 /*2*/])) && func_71(&(Local_111.f_159[iVar0 /*2*/]), 2000, 0))
					{
						Local_111.f_35[iVar0] = unk_0xBC5D9A293974F095(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, 1, 0, 1065353216, 0, 1065353216);
						unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iVar0]), Local_111.f_35[iVar0], func_78(), func_70(iVar0, Local_111.f_40[iVar0]), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0xE7101255AD6F1952(Local_111.f_35[iVar0]);
						func_69(&(Local_111.f_159[iVar0 /*2*/]));
					}
				}
				func_2(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	struct<3> Var11;
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
	int iVar22;
	struct<5> Var23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	
	iVar3 = 0;
	iVar4 = 0;
	bVar6 = false;
	if (Local_111.f_576[iParam0] > 7 && Local_111.f_576[iParam0] < 12)
	{
		bVar6 = true;
	}
	if ((!func_68(iParam0, bVar6) || Global_2765559 == iParam0) || Local_111[iParam0])
	{
		Local_111[iParam0] = 1;
		func_67(iParam0);
		return;
	}
	if (unk_0x2FC2FDC413532977(Local_111.f_50[iParam0]))
	{
		if (!unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
		{
			Local_111.f_10[iParam0] = 0;
			unk_0x460D2A8B2C7DC7D4(Local_111.f_50[iParam0]);
		}
		else if (!Local_111.f_10[iParam0])
		{
			unk_0x8FC511FC963C67E5(Local_111.f_50[iParam0], 0);
			Local_111.f_10[iParam0] = 1;
		}
	}
	Local_111.f_45[iParam0] = unk_0x643DC062EE904FCA(Local_111.f_35[iParam0]);
	switch (Local_111.f_576[iParam0])
	{
		case 0:
			func_66(1, iParam0);
			break;
		
		case 1:
			bVar0 = true;
			iVar2 = 0;
			while (iVar2 < 4)
			{
				iVar1 = Local_111.f_117[(iParam0 * 4 + iVar2)];
				if (iVar1 != -1)
				{
					if (Local_153[iVar1 /*9*/] != 0 || Local_153[iVar1 /*9*/].f_6 != 0)
					{
						bVar0 = false;
					}
				}
				iVar2++;
			}
			if (bVar0)
			{
				func_65(&(Local_111.f_168[iParam0 /*55*/]));
				func_64(iParam0);
				func_66(2, iParam0);
			}
			break;
		
		case 2:
			bVar0 = true;
			iVar2 = 0;
			while (iVar2 < 4)
			{
				iVar1 = Local_111.f_117[(iParam0 * 4 + iVar2)];
				if (iVar1 != -1)
				{
					if (!BitTest(Local_153[iVar1 /*9*/].f_6, 0))
					{
						bVar0 = false;
					}
				}
				iVar2++;
			}
			if (bVar0)
			{
				func_66(3, iParam0);
			}
			break;
		
		case 3:
			if (!func_63(iParam0, 18))
			{
				if (func_53(12, &(Local_111.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 18);
				}
			}
			if (unk_0x93BF17E19A9F0E9B(Local_111.f_50[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0])))
			{
				if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
				{
					if (Local_111.f_45[iParam0] != -1)
					{
						if (Local_111.f_30[iParam0] == 1)
						{
							if ((unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out"))) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), func_78(), func_77(iParam0), 3))
							{
								Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_78(), func_51(iParam0, -1), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
							}
						}
						else if (((unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), func_78(), func_51(iParam0, 0), 3) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), func_78(), func_51(iParam0, 1), 3)) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), func_78(), func_51(iParam0, 2), 3)) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), func_78(), func_51(iParam0, 3), 3))
						{
							Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
							unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_78(), func_50(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
						}
						else if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), func_78(), func_77(iParam0), 3))
						{
							if (unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out")))
							{
								Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_78(), func_74(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
							}
						}
						else if (unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out")))
						{
							Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
							unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
						}
					}
				}
				else
				{
					unk_0x460D2A8B2C7DC7D4(Local_111.f_50[iParam0]);
				}
			}
			bVar0 = true;
			iVar3 = 0;
			iVar4 = 0;
			if (!func_72(&(Local_111.f_150[iParam0 /*2*/])))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_111.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						iVar3++;
						if (Local_153[iVar1 /*9*/].f_3 > 0 || Local_153[iVar1 /*9*/].f_5 > 0)
						{
							func_73(&(Local_111.f_150[iParam0 /*2*/]), 0, 0);
						}
						else
						{
							iVar4++;
						}
					}
					iVar2++;
				}
				if (iVar3 == iVar4)
				{
					if (!func_72(&(Local_111.f_591[iParam0 /*2*/])))
					{
						func_73(&(Local_111.f_591[iParam0 /*2*/]), 0, 0);
					}
					else if (func_71(&(Local_111.f_591[iParam0 /*2*/]), 60000, 0))
					{
						func_64(iParam0);
						func_69(&(Local_111.f_591[iParam0 /*2*/]));
					}
					else if (func_71(&(Local_111.f_591[iParam0 /*2*/]), 30000, 0))
					{
						if (!func_63(iParam0, 17))
						{
							if (func_53(8, &(Local_111.f_50[iParam0]), 0, -1))
							{
								func_52(iParam0, 17);
							}
						}
					}
				}
				else
				{
					func_69(&(Local_111.f_591[iParam0 /*2*/]));
				}
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_111.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						if (Local_153[iVar1 /*9*/].f_3 > 0 || Local_153[iVar1 /*9*/].f_5 > 0)
						{
							iVar8++;
						}
						if (!BitTest(Local_153[iVar1 /*9*/], 2))
						{
							bVar0 = false;
						}
					}
					iVar2++;
				}
				if (iVar8 > 0)
				{
					if (func_71(&(Local_111.f_150[iParam0 /*2*/]), 30000, 0) || bVar0)
					{
						func_69(&(Local_111.f_150[iParam0 /*2*/]));
						func_64(iParam0);
						func_66(4, iParam0);
					}
					else if (func_71(&(Local_111.f_150[iParam0 /*2*/]), 18000, 0))
					{
						if (!func_63(iParam0, 19))
						{
							if (func_53(13, &(Local_111.f_50[iParam0]), 0, -1))
							{
								func_52(iParam0, 19);
							}
						}
					}
				}
				else
				{
					func_69(&(Local_111.f_150[iParam0 /*2*/]));
				}
			}
			break;
		
		case 4:
			func_64(iParam0);
			if (!BitTest(Local_111.f_20[iParam0], 11))
			{
				if (func_48(iParam0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 11);
				}
			}
			else if (func_47(iParam0))
			{
				unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 11);
				func_66(5, iParam0);
			}
			break;
		
		case 5:
			if (!func_63(iParam0, 20))
			{
				if (func_53(21, &(Local_111.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 20);
				}
			}
			if (unk_0x93BF17E19A9F0E9B(Local_111.f_50[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0])))
			{
				if ((unk_0x93BF17E19A9F0E9B(Local_111.f_55[func_46(iParam0, 0)]) && unk_0x93BF17E19A9F0E9B(Local_111.f_55[func_46(iParam0, 1)])) && unk_0x93BF17E19A9F0E9B(Local_111.f_55[func_46(iParam0, 2)]))
				{
					if (!unk_0xEADBDBE0422CF7E6(Local_111.f_55[func_46(iParam0, 0)]))
					{
						unk_0x460D2A8B2C7DC7D4(Local_111.f_55[func_46(iParam0, 0)]);
						bVar9 = true;
					}
					if (!unk_0xEADBDBE0422CF7E6(Local_111.f_55[func_46(iParam0, 1)]))
					{
						unk_0x460D2A8B2C7DC7D4(Local_111.f_55[func_46(iParam0, 1)]);
						bVar9 = true;
					}
					if (!unk_0xEADBDBE0422CF7E6(Local_111.f_55[func_46(iParam0, 2)]))
					{
						unk_0x460D2A8B2C7DC7D4(Local_111.f_55[func_46(iParam0, 2)]);
						bVar9 = true;
					}
					if (bVar9)
					{
						return;
					}
					if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
					{
						if (!BitTest(Local_111.f_20[iParam0], 0))
						{
							Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_44(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), false);
						}
						else if (!BitTest(Local_111.f_20[iParam0], 8))
						{
							if (Local_111.f_45[iParam0] != -1)
							{
								if (unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out")))
								{
									Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_43(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 0)]), Local_111.f_35[iParam0], func_45(), "deck_shuffle_card_a", 1000f, -1000f, 13);
									unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 1)]), Local_111.f_35[iParam0], func_45(), "deck_shuffle_card_b", 1000f, -1000f, 13);
									unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 2)]), Local_111.f_35[iParam0], func_45(), "deck_shuffle_card_c", 1000f, -1000f, 13);
									unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 8);
								}
							}
						}
						else if (Local_111.f_45[iParam0] != -1)
						{
							if (unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out")))
							{
								Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_42(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
								unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
								unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 8);
								unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 0)]), true, 0);
								unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 1)]), true, 0);
								unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 2)]), true, 0);
								func_66(6, iParam0);
							}
							else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), -1813854677))
							{
								unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 0)]), true, 0);
								unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 1)]), true, 0);
								unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 2)]), true, 0);
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (!BitTest(Local_111.f_20[iParam0], 11))
			{
				if (func_48(iParam0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 11);
				}
			}
			else
			{
				Local_111.f_168[iParam0 /*55*/] = 0;
				func_66(7, iParam0);
			}
			break;
		
		case 7:
			Var11 = { func_76(iParam0) };
			Var11.f_2 = (Var11.f_2 + 0.914f);
			switch (Local_111.f_571[iParam0])
			{
				case 0:
					iVar1 = Local_111.f_117[iParam0 * 4];
					if (iVar1 >= 0)
					{
						if (Local_153[iVar1 /*9*/].f_2 == iParam0 && (Local_153[iVar1 /*9*/].f_3 > 0 || Local_153[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0x93BF17E19A9F0E9B(Local_111.f_50[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0])))
							{
								if (!unk_0x2FC2FDC413532977(Local_111.f_68[func_41(iParam0, 0, 0)]))
								{
									iVar10 = Local_111.f_168[iParam0 /*55*/];
									unk_0xEC9DAA34BBB4658C(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5));
									if (unk_0x6252BC0DD8A320DB(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5)))
									{
										func_39(&(Local_111.f_68[func_41(iParam0, 0, 0)]), func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0x2FC2FDC413532977(Local_111.f_68[func_41(iParam0, 1, 0)]))
								{
									iVar10 = Local_111.f_168[iParam0 /*55*/] + 1;
									unk_0xEC9DAA34BBB4658C(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5));
									if (unk_0x6252BC0DD8A320DB(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5)))
									{
										func_39(&(Local_111.f_68[func_41(iParam0, 1, 0)]), func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0x2FC2FDC413532977(Local_111.f_68[func_41(iParam0, 2, 0)]))
								{
									iVar10 = Local_111.f_168[iParam0 /*55*/] + 2;
									unk_0xEC9DAA34BBB4658C(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5));
									if (unk_0x6252BC0DD8A320DB(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5)))
									{
										func_39(&(Local_111.f_68[func_41(iParam0, 2, 0)]), func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 0, 0)]) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 1, 0)])) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 2, 0)]))
								{
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 0, 0)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 0, 0)]);
										bVar12 = true;
									}
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 1, 0)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 1, 0)]);
										bVar12 = true;
									}
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 2, 0)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 2, 0)]);
										bVar12 = true;
									}
									if (bVar12)
									{
										return;
									}
									if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
									{
										if (!BitTest(Local_111.f_20[iParam0], 0))
										{
											Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
											unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_38(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
											unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 0)]), Local_111.f_35[iParam0], func_45(), "deck_deal_p01_card_a", 1000f, -1000f, 13);
											unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 0)]), Local_111.f_35[iParam0], func_45(), "deck_deal_p01_card_b", 1000f, -1000f, 13);
											unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 0)]), Local_111.f_35[iParam0], func_45(), "deck_deal_p01_card_c", 1000f, -1000f, 13);
											unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), false);
										}
										else if (Local_111.f_45[iParam0] != -1)
										{
											if ((unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_111.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
													Local_111.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
													Local_111.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
													Local_111.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_111.f_410[iVar1 /*5*/] = 3;
												}
												unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_111.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
												Local_111.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
												Local_111.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
												Local_111.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_111.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(1, iParam0);
					}
					break;
				
				case 1:
					iVar1 = Local_111.f_117[iParam0 * 4 + 1];
					if (iVar1 >= 0)
					{
						if (Local_153[iVar1 /*9*/].f_2 == iParam0 && (Local_153[iVar1 /*9*/].f_3 > 0 || Local_153[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0x93BF17E19A9F0E9B(Local_111.f_50[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0])))
							{
								if (!unk_0x2FC2FDC413532977(Local_111.f_68[func_41(iParam0, 0, 1)]))
								{
									iVar10 = Local_111.f_168[iParam0 /*55*/];
									unk_0xEC9DAA34BBB4658C(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5));
									if (unk_0x6252BC0DD8A320DB(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5)))
									{
										func_39(&(Local_111.f_68[func_41(iParam0, 0, 1)]), func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0x2FC2FDC413532977(Local_111.f_68[func_41(iParam0, 1, 1)]))
								{
									iVar10 = Local_111.f_168[iParam0 /*55*/] + 1;
									unk_0xEC9DAA34BBB4658C(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5));
									if (unk_0x6252BC0DD8A320DB(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5)))
									{
										func_39(&(Local_111.f_68[func_41(iParam0, 1, 1)]), func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0x2FC2FDC413532977(Local_111.f_68[func_41(iParam0, 2, 1)]))
								{
									iVar10 = Local_111.f_168[iParam0 /*55*/] + 2;
									unk_0xEC9DAA34BBB4658C(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5));
									if (unk_0x6252BC0DD8A320DB(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5)))
									{
										func_39(&(Local_111.f_68[func_41(iParam0, 2, 1)]), func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 0, 1)]) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 1, 1)])) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 2, 1)]))
								{
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 0, 1)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 0, 1)]);
										bVar13 = true;
									}
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 1, 1)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 1, 1)]);
										bVar13 = true;
									}
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 2, 1)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 2, 1)]);
										bVar13 = true;
									}
									if (bVar13)
									{
										return;
									}
									if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
									{
										if (!BitTest(Local_111.f_20[iParam0], 0))
										{
											Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
											unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_35(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
											unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 1)]), Local_111.f_35[iParam0], func_45(), "deck_deal_p02_card_a", 1000f, -1000f, 13);
											unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 1)]), Local_111.f_35[iParam0], func_45(), "deck_deal_p02_card_b", 1000f, -1000f, 13);
											unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 1)]), Local_111.f_35[iParam0], func_45(), "deck_deal_p02_card_c", 1000f, -1000f, 13);
											unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), false);
										}
										else if (Local_111.f_45[iParam0] != -1)
										{
											if ((unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_111.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
													Local_111.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
													Local_111.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
													Local_111.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_111.f_410[iVar1 /*5*/] = 3;
												}
												unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_111.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
												Local_111.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
												Local_111.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
												Local_111.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_111.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(2, iParam0);
					}
					break;
				
				case 2:
					iVar1 = Local_111.f_117[iParam0 * 4 + 2];
					if (iVar1 >= 0)
					{
						if (Local_153[iVar1 /*9*/].f_2 == iParam0 && (Local_153[iVar1 /*9*/].f_3 > 0 || Local_153[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0x93BF17E19A9F0E9B(Local_111.f_50[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0])))
							{
								if (!unk_0x2FC2FDC413532977(Local_111.f_68[func_41(iParam0, 0, 2)]))
								{
									iVar10 = Local_111.f_168[iParam0 /*55*/];
									unk_0xEC9DAA34BBB4658C(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5));
									if (unk_0x6252BC0DD8A320DB(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5)))
									{
										func_39(&(Local_111.f_68[func_41(iParam0, 0, 2)]), func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0x2FC2FDC413532977(Local_111.f_68[func_41(iParam0, 1, 2)]))
								{
									iVar10 = Local_111.f_168[iParam0 /*55*/] + 1;
									unk_0xEC9DAA34BBB4658C(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5));
									if (unk_0x6252BC0DD8A320DB(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5)))
									{
										func_39(&(Local_111.f_68[func_41(iParam0, 1, 2)]), func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0x2FC2FDC413532977(Local_111.f_68[func_41(iParam0, 2, 2)]))
								{
									iVar10 = Local_111.f_168[iParam0 /*55*/] + 2;
									unk_0xEC9DAA34BBB4658C(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5));
									if (unk_0x6252BC0DD8A320DB(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5)))
									{
										func_39(&(Local_111.f_68[func_41(iParam0, 2, 2)]), func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 0, 2)]) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 1, 2)])) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 2, 2)]))
								{
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 0, 2)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 0, 2)]);
										bVar14 = true;
									}
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 1, 2)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 1, 2)]);
										bVar14 = true;
									}
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 2, 2)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 2, 2)]);
										bVar14 = true;
									}
									if (bVar14)
									{
										return;
									}
									if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
									{
										if (!BitTest(Local_111.f_20[iParam0], 0))
										{
											Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
											unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_34(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
											unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 2)]), Local_111.f_35[iParam0], func_45(), "deck_deal_p03_card_a", 1000f, -1000f, 13);
											unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 2)]), Local_111.f_35[iParam0], func_45(), "deck_deal_p03_card_b", 1000f, -1000f, 13);
											unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 2)]), Local_111.f_35[iParam0], func_45(), "deck_deal_p03_card_c", 1000f, -1000f, 13);
											unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), false);
										}
										else if (Local_111.f_45[iParam0] != -1)
										{
											if ((unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_111.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
													Local_111.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
													Local_111.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
													Local_111.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_111.f_410[iVar1 /*5*/] = 3;
												}
												unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_111.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
												Local_111.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
												Local_111.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
												Local_111.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_111.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(3, iParam0);
					}
					break;
				
				case 3:
					iVar1 = Local_111.f_117[iParam0 * 4 + 3];
					if (iVar1 >= 0)
					{
						if (Local_153[iVar1 /*9*/].f_2 == iParam0 && (Local_153[iVar1 /*9*/].f_3 > 0 || Local_153[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0x93BF17E19A9F0E9B(Local_111.f_50[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0])))
							{
								if (!unk_0x2FC2FDC413532977(Local_111.f_68[func_41(iParam0, 0, 3)]))
								{
									iVar10 = Local_111.f_168[iParam0 /*55*/];
									unk_0xEC9DAA34BBB4658C(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5));
									if (unk_0x6252BC0DD8A320DB(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5)))
									{
										func_39(&(Local_111.f_68[func_41(iParam0, 0, 3)]), func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0x2FC2FDC413532977(Local_111.f_68[func_41(iParam0, 1, 3)]))
								{
									iVar10 = Local_111.f_168[iParam0 /*55*/] + 1;
									unk_0xEC9DAA34BBB4658C(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5));
									if (unk_0x6252BC0DD8A320DB(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5)))
									{
										func_39(&(Local_111.f_68[func_41(iParam0, 1, 3)]), func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0x2FC2FDC413532977(Local_111.f_68[func_41(iParam0, 2, 3)]))
								{
									iVar10 = Local_111.f_168[iParam0 /*55*/] + 2;
									unk_0xEC9DAA34BBB4658C(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5));
									if (unk_0x6252BC0DD8A320DB(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5)))
									{
										func_39(&(Local_111.f_68[func_41(iParam0, 2, 3)]), func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 0, 3)]) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 1, 3)])) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 2, 3)]))
								{
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 0, 3)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 0, 3)]);
										bVar15 = true;
									}
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 1, 3)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 1, 3)]);
										bVar15 = true;
									}
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 2, 3)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 2, 3)]);
										bVar15 = true;
									}
									if (bVar15)
									{
										return;
									}
									if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
									{
										if (!BitTest(Local_111.f_20[iParam0], 0))
										{
											Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
											unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_33(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
											unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 3)]), Local_111.f_35[iParam0], func_45(), "deck_deal_p04_card_a", 1000f, -1000f, 13);
											unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 3)]), Local_111.f_35[iParam0], func_45(), "deck_deal_p04_card_b", 1000f, -1000f, 13);
											unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 3)]), Local_111.f_35[iParam0], func_45(), "deck_deal_p04_card_c", 1000f, -1000f, 13);
											unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), false);
										}
										else if (Local_111.f_45[iParam0] != -1)
										{
											if ((unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_111.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
													Local_111.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
													Local_111.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
													Local_111.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_111.f_410[iVar1 /*5*/] = 3;
												}
												unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_111.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
												Local_111.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
												Local_111.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
												Local_111.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_111.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(4, iParam0);
					}
					break;
				
				case 4:
					if (unk_0x93BF17E19A9F0E9B(Local_111.f_50[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0])))
					{
						if (!unk_0x2FC2FDC413532977(Local_111.f_55[func_46(iParam0, 0)]))
						{
							iVar10 = Local_111.f_168[iParam0 /*55*/];
							unk_0xEC9DAA34BBB4658C(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5));
							if (unk_0x6252BC0DD8A320DB(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5)))
							{
								func_39(&(Local_111.f_55[func_46(iParam0, 0)]), func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
							}
							return;
						}
						if (!unk_0x2FC2FDC413532977(Local_111.f_55[func_46(iParam0, 1)]))
						{
							iVar10 = Local_111.f_168[iParam0 /*55*/] + 1;
							unk_0xEC9DAA34BBB4658C(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5));
							if (unk_0x6252BC0DD8A320DB(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5)))
							{
								func_39(&(Local_111.f_55[func_46(iParam0, 1)]), func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
							}
							return;
						}
						if (!unk_0x2FC2FDC413532977(Local_111.f_55[func_46(iParam0, 2)]))
						{
							iVar10 = Local_111.f_168[iParam0 /*55*/] + 2;
							unk_0xEC9DAA34BBB4658C(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5));
							if (unk_0x6252BC0DD8A320DB(func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5)))
							{
								func_39(&(Local_111.f_55[func_46(iParam0, 2)]), func_40(Local_111.f_168[iParam0 /*55*/].f_2[iVar10], Local_154.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
							}
							return;
						}
						if ((unk_0x93BF17E19A9F0E9B(Local_111.f_55[func_46(iParam0, 0)]) && unk_0x93BF17E19A9F0E9B(Local_111.f_55[func_46(iParam0, 1)])) && unk_0x93BF17E19A9F0E9B(Local_111.f_55[func_46(iParam0, 2)]))
						{
							if (!unk_0xEADBDBE0422CF7E6(Local_111.f_55[func_46(iParam0, 0)]))
							{
								unk_0x460D2A8B2C7DC7D4(Local_111.f_55[func_46(iParam0, 0)]);
								bVar16 = true;
							}
							if (!unk_0xEADBDBE0422CF7E6(Local_111.f_55[func_46(iParam0, 1)]))
							{
								unk_0x460D2A8B2C7DC7D4(Local_111.f_55[func_46(iParam0, 1)]);
								bVar16 = true;
							}
							if (!unk_0xEADBDBE0422CF7E6(Local_111.f_55[func_46(iParam0, 2)]))
							{
								unk_0x460D2A8B2C7DC7D4(Local_111.f_55[func_46(iParam0, 2)]);
								bVar16 = true;
							}
							if (bVar16)
							{
								return;
							}
							if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
							{
								if (!BitTest(Local_111.f_20[iParam0], 0))
								{
									Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_32(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 0)]), Local_111.f_35[iParam0], func_45(), "deck_deal_self_card_a", 1000f, -1000f, 13);
									unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 1)]), Local_111.f_35[iParam0], func_45(), "deck_deal_self_card_b", 1000f, -1000f, 13);
									unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 2)]), Local_111.f_35[iParam0], func_45(), "deck_deal_self_card_c", 1000f, -1000f, 13);
									unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), false);
								}
								else if (Local_111.f_45[iParam0] != -1)
								{
									if (unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out")))
									{
										bVar7 = true;
										Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
										unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
										if (Local_111.f_389[iParam0 /*5*/] == 0)
										{
											func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
											Local_111.f_389[iParam0 /*5*/].f_1[0] = uVar5;
											func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
											Local_111.f_389[iParam0 /*5*/].f_1[1] = uVar5;
											func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
											Local_111.f_389[iParam0 /*5*/].f_1[2] = uVar5;
											Local_111.f_389[iParam0 /*5*/] = 3;
										}
										unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
									}
								}
								else
								{
									bVar7 = true;
									Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
									if (Local_111.f_389[iParam0 /*5*/] == 0)
									{
										func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
										Local_111.f_389[iParam0 /*5*/].f_1[0] = uVar5;
										func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
										Local_111.f_389[iParam0 /*5*/].f_1[1] = uVar5;
										func_37(&(Local_111.f_168[iParam0 /*55*/]), &uVar5);
										Local_111.f_389[iParam0 /*5*/].f_1[2] = uVar5;
										Local_111.f_389[iParam0 /*5*/] = 3;
									}
								}
							}
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(0, iParam0);
						func_66(8, iParam0);
					}
					break;
			}
			break;
		
		case 8:
			if (unk_0x93BF17E19A9F0E9B(Local_111.f_50[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0])))
			{
				if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]) && Local_111.f_45[iParam0] != -1)
				{
					if (unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out")))
					{
						Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
						unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
						func_64(iParam0);
						func_66(9, iParam0);
					}
				}
			}
			break;
		
		case 9:
			bVar0 = true;
			if (!func_72(&(Local_111.f_150[iParam0 /*2*/])))
			{
				func_73(&(Local_111.f_150[iParam0 /*2*/]), 0, 0);
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_111.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						if ((!BitTest(Local_153[iVar1 /*9*/], 1) && !BitTest(Local_153[iVar1 /*9*/], 3)) && (Local_153[iVar1 /*9*/].f_3 > 0 || Local_153[iVar1 /*9*/].f_5 > 0))
						{
							if (!func_63(iParam0, 18))
							{
								if (func_53(14, &(Local_111.f_50[iParam0]), 0, -1))
								{
									func_52(iParam0, 18);
								}
							}
							bVar0 = false;
						}
					}
					iVar2++;
				}
				if (bVar0)
				{
					func_69(&(Local_111.f_150[iParam0 /*2*/]));
					func_66(10, iParam0);
				}
				else if (func_71(&(Local_111.f_150[iParam0 /*2*/]), 15000, 0))
				{
					if (!func_63(iParam0, 19))
					{
						if (func_53(9, &(Local_111.f_50[iParam0]), 0, -1))
						{
							func_52(iParam0, 19);
						}
					}
				}
			}
			break;
		
		case 10:
			switch (Local_111.f_581[iParam0])
			{
				case 0:
					if (unk_0x93BF17E19A9F0E9B(Local_111.f_50[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0])))
					{
						if ((unk_0x93BF17E19A9F0E9B(Local_111.f_55[func_46(iParam0, 0)]) && unk_0x93BF17E19A9F0E9B(Local_111.f_55[func_46(iParam0, 1)])) && unk_0x93BF17E19A9F0E9B(Local_111.f_55[func_46(iParam0, 2)]))
						{
							if (!unk_0xEADBDBE0422CF7E6(Local_111.f_55[func_46(iParam0, 0)]))
							{
								unk_0x460D2A8B2C7DC7D4(Local_111.f_55[func_46(iParam0, 0)]);
								bVar17 = true;
							}
							if (!unk_0xEADBDBE0422CF7E6(Local_111.f_55[func_46(iParam0, 1)]))
							{
								unk_0x460D2A8B2C7DC7D4(Local_111.f_55[func_46(iParam0, 1)]);
								bVar17 = true;
							}
							if (!unk_0xEADBDBE0422CF7E6(Local_111.f_55[func_46(iParam0, 2)]))
							{
								unk_0x460D2A8B2C7DC7D4(Local_111.f_55[func_46(iParam0, 2)]);
								bVar17 = true;
							}
							if (bVar17)
							{
								return;
							}
							if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
							{
								if (!BitTest(Local_111.f_20[iParam0], 0))
								{
									Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_30(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 0)]), Local_111.f_35[iParam0], func_45(), "reveal_self_card_a", 1000f, -1000f, 13);
									unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 1)]), Local_111.f_35[iParam0], func_45(), "reveal_self_card_b", 1000f, -1000f, 13);
									unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 2)]), Local_111.f_35[iParam0], func_45(), "reveal_self_card_c", 1000f, -1000f, 13);
									unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), false);
								}
								else if (Local_111.f_45[iParam0] != -1)
								{
									if ((unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), 2116425869))
									{
										bVar7 = true;
										Local_111.f_5[iParam0] = 1;
										unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
									}
								}
								else
								{
									bVar7 = true;
									Local_111.f_5[iParam0] = 1;
									unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
								}
							}
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						bVar7 = false;
						func_29(1, iParam0);
					}
					break;
				
				case 1:
					iVar1 = Local_111.f_117[iParam0 * 4];
					if (iVar1 >= 0)
					{
						if (Local_153[iVar1 /*9*/].f_2 == iParam0 && (Local_153[iVar1 /*9*/].f_3 > 0 || Local_153[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0x93BF17E19A9F0E9B(Local_111.f_50[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0])))
							{
								if (((unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 0, 0)]) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 1, 0)])) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 2, 0)])) && (BitTest(Local_153[iVar1 /*9*/], 1) || BitTest(Local_153[iVar1 /*9*/], 3)))
								{
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 0, 0)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 0, 0)]);
										bVar18 = true;
									}
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 1, 0)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 1, 0)]);
										bVar18 = true;
									}
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 2, 0)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 2, 0)]);
										bVar18 = true;
									}
									if (bVar18)
									{
										return;
									}
									if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
									{
										if (!BitTest(Local_111.f_20[iParam0], 0))
										{
											Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
											if (BitTest(Local_153[iVar1 /*9*/], 4))
											{
												unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_28(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 0)]), Local_111.f_35[iParam0], func_45(), "reveal_blind_p01_card_a", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 0)]), Local_111.f_35[iParam0], func_45(), "reveal_blind_p01_card_b", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 0)]), Local_111.f_35[iParam0], func_45(), "reveal_blind_p01_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_153[iVar1 /*9*/], 1))
											{
												unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_27(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 0)]), Local_111.f_35[iParam0], func_45(), "reveal_played_p01_card_a", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 0)]), Local_111.f_35[iParam0], func_45(), "reveal_played_p01_card_b", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 0)]), Local_111.f_35[iParam0], func_45(), "reveal_played_p01_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_153[iVar1 /*9*/], 3))
											{
												unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_26(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 0)]), Local_111.f_35[iParam0], func_45(), "reveal_folded_p01_card_a", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 0)]), Local_111.f_35[iParam0], func_45(), "reveal_folded_p01_card_b", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 0)]), Local_111.f_35[iParam0], func_45(), "reveal_folded_p01_card_c", 1000f, -1000f, 13);
											}
											unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), false);
										}
										else if (Local_111.f_45[iParam0] != -1)
										{
											if ((unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
											}
											else if (unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.5f)
											{
												unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 12);
											}
										}
										else
										{
											bVar7 = true;
											unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 12);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(2, iParam0);
					}
					break;
				
				case 2:
					iVar1 = Local_111.f_117[iParam0 * 4 + 1];
					if (iVar1 >= 0)
					{
						if (Local_153[iVar1 /*9*/].f_2 == iParam0 && (Local_153[iVar1 /*9*/].f_3 > 0 || Local_153[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0x93BF17E19A9F0E9B(Local_111.f_50[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0])))
							{
								if (((unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 0, 1)]) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 1, 1)])) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 2, 1)])) && (BitTest(Local_153[iVar1 /*9*/], 1) || BitTest(Local_153[iVar1 /*9*/], 3)))
								{
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 0, 1)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 0, 1)]);
										bVar19 = true;
									}
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 1, 1)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 1, 1)]);
										bVar19 = true;
									}
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 2, 1)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 2, 1)]);
										bVar19 = true;
									}
									if (bVar19)
									{
										return;
									}
									if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
									{
										if (!BitTest(Local_111.f_20[iParam0], 0))
										{
											Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
											if (BitTest(Local_153[iVar1 /*9*/], 4))
											{
												unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_20(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 1)]), Local_111.f_35[iParam0], func_45(), "reveal_blind_p02_card_a", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 1)]), Local_111.f_35[iParam0], func_45(), "reveal_blind_p02_card_b", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 1)]), Local_111.f_35[iParam0], func_45(), "reveal_blind_p02_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_153[iVar1 /*9*/], 1))
											{
												unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_19(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 1)]), Local_111.f_35[iParam0], func_45(), "reveal_played_p02_card_a", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 1)]), Local_111.f_35[iParam0], func_45(), "reveal_played_p02_card_b", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 1)]), Local_111.f_35[iParam0], func_45(), "reveal_played_p02_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_153[iVar1 /*9*/], 3))
											{
												unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_18(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 1)]), Local_111.f_35[iParam0], func_45(), "reveal_folded_p02_card_a", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 1)]), Local_111.f_35[iParam0], func_45(), "reveal_folded_p02_card_b", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 1)]), Local_111.f_35[iParam0], func_45(), "reveal_folded_p02_card_c", 1000f, -1000f, 13);
											}
											unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), false);
										}
										else if (Local_111.f_45[iParam0] != -1)
										{
											if ((unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
											}
											else if (unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.5f)
											{
												unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 13);
											}
										}
										else
										{
											bVar7 = true;
											unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 13);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(3, iParam0);
					}
					break;
				
				case 3:
					iVar1 = Local_111.f_117[iParam0 * 4 + 2];
					if (iVar1 >= 0)
					{
						if (Local_153[iVar1 /*9*/].f_2 == iParam0 && (Local_153[iVar1 /*9*/].f_3 > 0 || Local_153[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0x93BF17E19A9F0E9B(Local_111.f_50[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0])))
							{
								if (((unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 0, 2)]) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 1, 2)])) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 2, 2)])) && (BitTest(Local_153[iVar1 /*9*/], 1) || BitTest(Local_153[iVar1 /*9*/], 3)))
								{
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 0, 2)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 0, 2)]);
										bVar20 = true;
									}
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 1, 2)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 1, 2)]);
										bVar20 = true;
									}
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 2, 2)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 2, 2)]);
										bVar20 = true;
									}
									if (bVar20)
									{
										return;
									}
									if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
									{
										if (!BitTest(Local_111.f_20[iParam0], 0))
										{
											Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
											if (BitTest(Local_153[iVar1 /*9*/], 4))
											{
												unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_17(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 2)]), Local_111.f_35[iParam0], func_45(), "reveal_blind_p03_card_a", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 2)]), Local_111.f_35[iParam0], func_45(), "reveal_blind_p03_card_b", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 2)]), Local_111.f_35[iParam0], func_45(), "reveal_blind_p03_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_153[iVar1 /*9*/], 1))
											{
												unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_16(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 2)]), Local_111.f_35[iParam0], func_45(), "reveal_played_p03_card_a", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 2)]), Local_111.f_35[iParam0], func_45(), "reveal_played_p03_card_b", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 2)]), Local_111.f_35[iParam0], func_45(), "reveal_played_p03_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_153[iVar1 /*9*/], 3))
											{
												unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_15(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 2)]), Local_111.f_35[iParam0], func_45(), "reveal_folded_p03_card_a", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 2)]), Local_111.f_35[iParam0], func_45(), "reveal_folded_p03_card_b", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 2)]), Local_111.f_35[iParam0], func_45(), "reveal_folded_p03_card_c", 1000f, -1000f, 13);
											}
											unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), false);
										}
										else if (Local_111.f_45[iParam0] != -1)
										{
											if ((unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
											}
											else if (unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.5f)
											{
												unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 14);
											}
										}
										else
										{
											bVar7 = true;
											unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 14);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(4, iParam0);
					}
					break;
				
				case 4:
					iVar1 = Local_111.f_117[iParam0 * 4 + 3];
					if (iVar1 >= 0)
					{
						if (Local_153[iVar1 /*9*/].f_2 == iParam0 && (Local_153[iVar1 /*9*/].f_3 > 0 || Local_153[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0x93BF17E19A9F0E9B(Local_111.f_50[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0])))
							{
								if (((unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 0, 3)]) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 1, 3)])) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 2, 3)])) && (BitTest(Local_153[iVar1 /*9*/], 1) || BitTest(Local_153[iVar1 /*9*/], 3)))
								{
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 0, 3)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 0, 3)]);
										bVar21 = true;
									}
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 1, 3)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 1, 3)]);
										bVar21 = true;
									}
									if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 2, 3)]))
									{
										unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 2, 3)]);
										bVar21 = true;
									}
									if (bVar21)
									{
										return;
									}
									if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
									{
										if (!BitTest(Local_111.f_20[iParam0], 0))
										{
											Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
											if (BitTest(Local_153[iVar1 /*9*/], 4))
											{
												unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_14(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 3)]), Local_111.f_35[iParam0], func_45(), "reveal_blind_p04_card_a", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 3)]), Local_111.f_35[iParam0], func_45(), "reveal_blind_p04_card_b", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 3)]), Local_111.f_35[iParam0], func_45(), "reveal_blind_p04_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_153[iVar1 /*9*/], 1))
											{
												unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_13(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 3)]), Local_111.f_35[iParam0], func_45(), "reveal_played_p04_card_a", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 3)]), Local_111.f_35[iParam0], func_45(), "reveal_played_p04_card_b", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 3)]), Local_111.f_35[iParam0], func_45(), "reveal_played_p04_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_153[iVar1 /*9*/], 3))
											{
												unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_12(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 3)]), Local_111.f_35[iParam0], func_45(), "reveal_folded_p04_card_a", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 3)]), Local_111.f_35[iParam0], func_45(), "reveal_folded_p04_card_b", 1000f, -1000f, 13);
												unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 3)]), Local_111.f_35[iParam0], func_45(), "reveal_folded_p04_card_c", 1000f, -1000f, 13);
											}
											unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), false);
										}
										else if (Local_111.f_45[iParam0] != -1)
										{
											if ((unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
											}
											else if (unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.5f)
											{
												unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 15);
											}
										}
										else
										{
											bVar7 = true;
											unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 15);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(0, iParam0);
						func_66(11, iParam0);
					}
					break;
			}
			break;
		
		case 11:
			if (unk_0x93BF17E19A9F0E9B(Local_111.f_50[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0])))
			{
				if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
				{
					if (!BitTest(Local_111.f_20[iParam0], 0))
					{
						Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
						unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_78(), func_8(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), false);
					}
					else if (BitTest(Local_111.f_20[iParam0], 0) && !BitTest(Local_111.f_20[iParam0], 2))
					{
						if (Local_111.f_45[iParam0] != -1)
						{
							if (unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out")))
							{
								Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_44(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
								unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 9);
								unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 2);
							}
						}
					}
					else if (BitTest(Local_111.f_20[iParam0], 9))
					{
						if (Local_111.f_45[iParam0] != -1)
						{
							if (unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out")))
							{
								Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_42(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
								unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
								unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 9);
								func_64(iParam0);
								func_66(12, iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 12:
			if (!func_63(iParam0, 21))
			{
				if (func_53(1, &(Local_111.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 21);
				}
			}
			Var23.f_1 = 3;
			if (unk_0x93BF17E19A9F0E9B(Local_111.f_50[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0])))
			{
				if (!BitTest(Local_111.f_20[iParam0], 3))
				{
					iVar2 = iParam0 * 4;
					iVar22 = Local_111.f_117[iVar2];
					if (iVar22 != func_413() && iVar22 > -1)
					{
						if (Local_111.f_410[iVar22 /*5*/] > 0 || BitTest(Local_111.f_20[iParam0], 0))
						{
							if ((unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 0, 0)]) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 1, 0)])) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 2, 0)]))
							{
								if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 0, 0)]))
								{
									unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 0, 0)]);
									bVar24 = true;
								}
								if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 1, 0)]))
								{
									unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 1, 0)]);
									bVar24 = true;
								}
								if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 2, 0)]))
								{
									unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 2, 0)]);
									bVar24 = true;
								}
								if (bVar24)
								{
									return;
								}
								if (!BitTest(Local_111.f_20[iParam0], 0))
								{
									if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
									{
										Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
										unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_7(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 0)]), Local_111.f_35[iParam0], func_45(), "cards_collect_p01_card_a", 1000f, -1000f, 13);
										unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 0)]), Local_111.f_35[iParam0], func_45(), "cards_collect_p01_card_b", 1000f, -1000f, 13);
										unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 0)]), Local_111.f_35[iParam0], func_45(), "cards_collect_p01_card_c", 1000f, -1000f, 13);
										unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), false);
									}
								}
								else if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
								{
									if (Local_111.f_45[iParam0] != -1)
									{
										if ((unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), 2116425869))
										{
											unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 3);
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 0)]), false, 0);
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 0)]), false, 0);
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 0)]), false, 0);
											Local_111.f_410[iVar22 /*5*/] = { Var23 };
										}
										else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), -1406739296))
										{
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 0)]), false, 0);
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 0)]), false, 0);
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 0)]), false, 0);
										}
									}
									else
									{
										unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 3);
										unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 0)]), false, 0);
										unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 0)]), false, 0);
										unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 0)]), false, 0);
										Local_111.f_410[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
								unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 3);
							}
						}
						else
						{
							unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 3);
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 3);
					}
				}
				else if (!BitTest(Local_111.f_20[iParam0], 4))
				{
					iVar2 = iParam0 * 4 + 1;
					iVar22 = Local_111.f_117[iVar2];
					if (iVar22 != func_413() && iVar22 > -1)
					{
						if (Local_111.f_410[iVar22 /*5*/] > 0 || BitTest(Local_111.f_20[iParam0], 0))
						{
							if ((unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 0, 1)]) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 1, 1)])) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 2, 1)]))
							{
								if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 0, 1)]))
								{
									unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 0, 1)]);
									bVar25 = true;
								}
								if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 1, 1)]))
								{
									unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 1, 1)]);
									bVar25 = true;
								}
								if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 2, 1)]))
								{
									unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 2, 1)]);
									bVar25 = true;
								}
								if (bVar25)
								{
									return;
								}
								if (!BitTest(Local_111.f_20[iParam0], 0))
								{
									if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
									{
										Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
										unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_6(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 1)]), Local_111.f_35[iParam0], func_45(), "cards_collect_p02_card_a", 1000f, -1000f, 13);
										unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 1)]), Local_111.f_35[iParam0], func_45(), "cards_collect_p02_card_b", 1000f, -1000f, 13);
										unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 1)]), Local_111.f_35[iParam0], func_45(), "cards_collect_p02_card_c", 1000f, -1000f, 13);
										unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), false);
									}
								}
								else if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
								{
									if (Local_111.f_45[iParam0] != -1)
									{
										if ((unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), 2116425869))
										{
											unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 4);
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 1)]), false, 0);
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 1)]), false, 0);
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 1)]), false, 0);
											Local_111.f_410[iVar22 /*5*/] = { Var23 };
										}
										else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), -1406739296))
										{
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 1)]), false, 0);
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 1)]), false, 0);
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 1)]), false, 0);
										}
									}
									else
									{
										unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 4);
										unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 1)]), false, 0);
										unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 1)]), false, 0);
										unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 1)]), false, 0);
										Local_111.f_410[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
								unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 4);
							}
						}
						else
						{
							unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 4);
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 4);
					}
				}
				else if (!BitTest(Local_111.f_20[iParam0], 5))
				{
					iVar2 = iParam0 * 4 + 2;
					iVar22 = Local_111.f_117[iVar2];
					if (iVar22 != func_413() && iVar22 > -1)
					{
						if (Local_111.f_410[iVar22 /*5*/] > 0 || BitTest(Local_111.f_20[iParam0], 0))
						{
							if ((unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 0, 2)]) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 1, 2)])) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 2, 2)]))
							{
								if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 0, 2)]))
								{
									unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 0, 2)]);
									bVar26 = true;
								}
								if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 1, 2)]))
								{
									unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 1, 2)]);
									bVar26 = true;
								}
								if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 2, 2)]))
								{
									unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 2, 2)]);
									bVar26 = true;
								}
								if (bVar26)
								{
									return;
								}
								if (!BitTest(Local_111.f_20[iParam0], 0))
								{
									if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
									{
										Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
										unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_5(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 2)]), Local_111.f_35[iParam0], func_45(), "cards_collect_p03_card_a", 1000f, -1000f, 13);
										unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 2)]), Local_111.f_35[iParam0], func_45(), "cards_collect_p03_card_b", 1000f, -1000f, 13);
										unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 2)]), Local_111.f_35[iParam0], func_45(), "cards_collect_p03_card_c", 1000f, -1000f, 13);
										unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), false);
									}
								}
								else if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
								{
									if (Local_111.f_45[iParam0] != -1)
									{
										if ((unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), 2116425869))
										{
											unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 5);
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 2)]), false, 0);
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 2)]), false, 0);
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 2)]), false, 0);
											Local_111.f_410[iVar22 /*5*/] = { Var23 };
										}
										else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), -1406739296))
										{
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 2)]), false, 0);
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 2)]), false, 0);
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 2)]), false, 0);
										}
									}
									else
									{
										unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 5);
										unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 2)]), false, 0);
										unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 2)]), false, 0);
										unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 2)]), false, 0);
										Local_111.f_410[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
								unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 5);
							}
						}
						else
						{
							unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 5);
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 5);
					}
				}
				else if (!BitTest(Local_111.f_20[iParam0], 6))
				{
					iVar2 = iParam0 * 4 + 3;
					iVar22 = Local_111.f_117[iVar2];
					if (iVar22 != func_413() && iVar22 > -1)
					{
						if (Local_111.f_410[iVar22 /*5*/] > 0 || BitTest(Local_111.f_20[iParam0], 0))
						{
							if ((unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 0, 3)]) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 1, 3)])) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 2, 3)]))
							{
								if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 0, 3)]))
								{
									unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 0, 3)]);
									bVar27 = true;
								}
								if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 1, 3)]))
								{
									unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 1, 3)]);
									bVar27 = true;
								}
								if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 2, 3)]))
								{
									unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 2, 3)]);
									bVar27 = true;
								}
								if (bVar27)
								{
									return;
								}
								if (!BitTest(Local_111.f_20[iParam0], 0))
								{
									if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
									{
										Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
										unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_4(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 3)]), Local_111.f_35[iParam0], func_45(), "cards_collect_p04_card_a", 1000f, -1000f, 13);
										unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 3)]), Local_111.f_35[iParam0], func_45(), "cards_collect_p04_card_b", 1000f, -1000f, 13);
										unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 3)]), Local_111.f_35[iParam0], func_45(), "cards_collect_p04_card_c", 1000f, -1000f, 13);
										unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), false);
									}
								}
								else if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
								{
									if (Local_111.f_45[iParam0] != -1)
									{
										if ((unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), 2116425869))
										{
											unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 6);
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 3)]), false, 0);
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 3)]), false, 0);
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 3)]), false, 0);
											Local_111.f_410[iVar22 /*5*/] = { Var23 };
										}
										else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), -1406739296))
										{
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 3)]), false, 0);
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 3)]), false, 0);
											unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 3)]), false, 0);
										}
									}
									else
									{
										unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 6);
										unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 0, 3)]), false, 0);
										unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 1, 3)]), false, 0);
										unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(iParam0, 2, 3)]), false, 0);
										Local_111.f_410[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
								unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 6);
							}
						}
						else
						{
							unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 6);
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 6);
					}
				}
				else if (!BitTest(Local_111.f_20[iParam0], 7))
				{
					if (Local_111.f_389[iParam0 /*5*/] > 0 || BitTest(Local_111.f_20[iParam0], 0))
					{
						if ((unk_0x93BF17E19A9F0E9B(Local_111.f_55[func_46(iParam0, 0)]) && unk_0x93BF17E19A9F0E9B(Local_111.f_55[func_46(iParam0, 1)])) && unk_0x93BF17E19A9F0E9B(Local_111.f_55[func_46(iParam0, 2)]))
						{
							if (!unk_0xEADBDBE0422CF7E6(Local_111.f_55[func_46(iParam0, 0)]))
							{
								unk_0x460D2A8B2C7DC7D4(Local_111.f_55[func_46(iParam0, 0)]);
								bVar28 = true;
							}
							if (!unk_0xEADBDBE0422CF7E6(Local_111.f_55[func_46(iParam0, 1)]))
							{
								unk_0x460D2A8B2C7DC7D4(Local_111.f_55[func_46(iParam0, 1)]);
								bVar28 = true;
							}
							if (!unk_0xEADBDBE0422CF7E6(Local_111.f_55[func_46(iParam0, 2)]))
							{
								unk_0x460D2A8B2C7DC7D4(Local_111.f_55[func_46(iParam0, 2)]);
								bVar28 = true;
							}
							if (bVar28)
							{
								return;
							}
							if (!BitTest(Local_111.f_20[iParam0], 0))
							{
								if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
								{
									Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_3(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 0)]), Local_111.f_35[iParam0], func_45(), "cards_collect_self_card_a", 1000f, -1000f, 13);
									unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 1)]), Local_111.f_35[iParam0], func_45(), "cards_collect_self_card_b", 1000f, -1000f, 13);
									unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 2)]), Local_111.f_35[iParam0], func_45(), "cards_collect_self_card_c", 1000f, -1000f, 13);
									unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), false);
								}
							}
							else if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
							{
								if (Local_111.f_45[iParam0] != -1)
								{
									if (unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out")))
									{
										Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
										unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
										unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 7);
										unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 0)]), false, 0);
										unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 1)]), false, 0);
										unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 2)]), false, 0);
										Local_111.f_389[iParam0 /*5*/] = { Var23 };
									}
									else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), -1406739296))
									{
										unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 0)]), false, 0);
										unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 1)]), false, 0);
										unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 2)]), false, 0);
									}
								}
								else
								{
									Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
									unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 7);
									unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 0)]), false, 0);
									unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 1)]), false, 0);
									unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_111.f_55[func_46(iParam0, 2)]), false, 0);
									Local_111.f_389[iParam0 /*5*/] = { Var23 };
								}
							}
						}
						else
						{
							unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 7);
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 0);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 7);
					}
				}
				else if (!BitTest(Local_111.f_20[iParam0], 10))
				{
					if (Local_111.f_45[iParam0] != -1)
					{
						if (unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out")))
						{
							if (Local_111.f_30[iParam0] == 1)
							{
								Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_78(), func_51(iParam0, -1), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
							}
							else
							{
								Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
							}
							unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), 10);
						}
					}
				}
				else
				{
					Local_111.f_5[iParam0] = 0;
					Local_111.f_20[iParam0] = 0;
					Local_111.f_25[iParam0]++;
					func_69(&(Local_111.f_150[iParam0 /*2*/]));
					func_66(0, iParam0);
				}
			}
			break;
	}
}

char* func_3(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_self";
	}
	return "cards_collect_self";
}

char* func_4(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p04";
	}
	return "cards_collect_p04";
}

char* func_5(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p03";
	}
	return "cards_collect_p03";
}

char* func_6(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p02";
	}
	return "cards_collect_p02";
}

char* func_7(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p01";
	}
	return "cards_collect_p01";
}

char* func_8(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = false;
	iVar1 = func_9(&(Local_111.f_389[iParam0 /*5*/].f_1), 0, 0);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar2 = Local_111.f_117[(iParam0 * 4 + iVar3)];
		if (iVar2 != func_413())
		{
			iVar4 = func_9(&(Local_111.f_410[iVar2 /*5*/].f_1), 0, 0);
			if (iVar4 > iVar1 && (BitTest(Local_153[iVar2 /*9*/], 1) || Local_153[iVar2 /*9*/].f_3 <= 0))
			{
				bVar0 = true;
			}
		}
		iVar3++;
	}
	if (Local_111.f_15[iParam0] >= 7)
	{
		if (iVar1 < 12)
		{
			switch (unk_0xC5935DFB3F39785A(0, 3))
			{
				case 0:
					return "female_dealer_reaction_impartial_var01";
				
				case 1:
					return "female_dealer_reaction_impartial_var02";
				
				case 2:
					return "female_dealer_reaction_impartial_var03";
				
				default:
			}
		}
		else if (bVar0)
		{
			switch (unk_0xC5935DFB3F39785A(0, 3))
			{
				case 0:
					return "female_dealer_reaction_good_var01";
				
				case 1:
					return "female_dealer_reaction_good_var02";
				
				case 2:
					return "female_dealer_reaction_good_var03";
				
				default:
			}
		}
		else
		{
			switch (unk_0xC5935DFB3F39785A(0, 3))
			{
				case 0:
					return "female_dealer_reaction_bad_var01";
				
				case 1:
					return "female_dealer_reaction_bad_var02";
				
				case 2:
					return "female_dealer_reaction_bad_var03";
				}
			
			default:
		}
	}
	else if (iVar1 < 12)
	{
		switch (unk_0xC5935DFB3F39785A(0, 4))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			
			default:
		}
	}
	else if (bVar0)
	{
		switch (unk_0xC5935DFB3F39785A(0, 3))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			default:
		}
	}
	else
	{
		switch (unk_0xC5935DFB3F39785A(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

int func_9(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if ((func_11((*uParam0)[0]) != func_11((*uParam0)[1]) && func_11((*uParam0)[0]) != func_11((*uParam0)[2])) && func_11((*uParam0)[1]) != func_11((*uParam0)[2]))
	{
		bVar0 = false;
		iVar1 = ((func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + func_11((*uParam0)[2]));
		if (iVar1 == 19)
		{
			if ((((func_11((*uParam0)[0]) == 14 || func_11((*uParam0)[0]) == 2) || func_11((*uParam0)[0]) == 3) && ((func_11((*uParam0)[1]) == 14 || func_11((*uParam0)[1]) == 2) || func_11((*uParam0)[1]) == 3)) && ((func_11((*uParam0)[2]) == 14 || func_11((*uParam0)[2]) == 2) || func_11((*uParam0)[2]) == 3))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 9)
		{
			if ((((func_11((*uParam0)[0]) == 2 || func_11((*uParam0)[0]) == 3) || func_11((*uParam0)[0]) == 4) && ((func_11((*uParam0)[1]) == 2 || func_11((*uParam0)[1]) == 3) || func_11((*uParam0)[1]) == 4)) && ((func_11((*uParam0)[2]) == 2 || func_11((*uParam0)[2]) == 3) || func_11((*uParam0)[2]) == 4))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 12)
		{
			if ((((func_11((*uParam0)[0]) == 3 || func_11((*uParam0)[0]) == 4) || func_11((*uParam0)[0]) == 5) && ((func_11((*uParam0)[1]) == 3 || func_11((*uParam0)[1]) == 4) || func_11((*uParam0)[1]) == 5)) && ((func_11((*uParam0)[2]) == 3 || func_11((*uParam0)[2]) == 4) || func_11((*uParam0)[2]) == 5))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 15)
		{
			if ((((func_11((*uParam0)[0]) == 4 || func_11((*uParam0)[0]) == 5) || func_11((*uParam0)[0]) == 6) && ((func_11((*uParam0)[1]) == 4 || func_11((*uParam0)[1]) == 5) || func_11((*uParam0)[1]) == 6)) && ((func_11((*uParam0)[2]) == 4 || func_11((*uParam0)[2]) == 5) || func_11((*uParam0)[2]) == 6))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 18)
		{
			if ((((func_11((*uParam0)[0]) == 5 || func_11((*uParam0)[0]) == 6) || func_11((*uParam0)[0]) == 7) && ((func_11((*uParam0)[1]) == 5 || func_11((*uParam0)[1]) == 6) || func_11((*uParam0)[1]) == 7)) && ((func_11((*uParam0)[2]) == 5 || func_11((*uParam0)[2]) == 6) || func_11((*uParam0)[2]) == 7))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 21)
		{
			if ((((func_11((*uParam0)[0]) == 6 || func_11((*uParam0)[0]) == 7) || func_11((*uParam0)[0]) == 8) && ((func_11((*uParam0)[1]) == 6 || func_11((*uParam0)[1]) == 7) || func_11((*uParam0)[1]) == 8)) && ((func_11((*uParam0)[2]) == 6 || func_11((*uParam0)[2]) == 7) || func_11((*uParam0)[2]) == 8))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 24)
		{
			if ((((func_11((*uParam0)[0]) == 7 || func_11((*uParam0)[0]) == 8) || func_11((*uParam0)[0]) == 9) && ((func_11((*uParam0)[1]) == 7 || func_11((*uParam0)[1]) == 8) || func_11((*uParam0)[1]) == 9)) && ((func_11((*uParam0)[2]) == 7 || func_11((*uParam0)[2]) == 8) || func_11((*uParam0)[2]) == 9))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 27)
		{
			if ((((func_11((*uParam0)[0]) == 8 || func_11((*uParam0)[0]) == 9) || func_11((*uParam0)[0]) == 10) && ((func_11((*uParam0)[1]) == 8 || func_11((*uParam0)[1]) == 9) || func_11((*uParam0)[1]) == 10)) && ((func_11((*uParam0)[2]) == 8 || func_11((*uParam0)[2]) == 9) || func_11((*uParam0)[2]) == 10))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 30)
		{
			if ((((func_11((*uParam0)[0]) == 9 || func_11((*uParam0)[0]) == 10) || func_11((*uParam0)[0]) == 11) && ((func_11((*uParam0)[1]) == 9 || func_11((*uParam0)[1]) == 10) || func_11((*uParam0)[1]) == 11)) && ((func_11((*uParam0)[2]) == 9 || func_11((*uParam0)[2]) == 10) || func_11((*uParam0)[2]) == 11))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 33)
		{
			if ((((func_11((*uParam0)[0]) == 10 || func_11((*uParam0)[0]) == 11) || func_11((*uParam0)[0]) == 12) && ((func_11((*uParam0)[1]) == 10 || func_11((*uParam0)[1]) == 11) || func_11((*uParam0)[1]) == 12)) && ((func_11((*uParam0)[2]) == 10 || func_11((*uParam0)[2]) == 11) || func_11((*uParam0)[2]) == 12))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 36)
		{
			if ((((func_11((*uParam0)[0]) == 11 || func_11((*uParam0)[0]) == 12) || func_11((*uParam0)[0]) == 13) && ((func_11((*uParam0)[1]) == 11 || func_11((*uParam0)[1]) == 12) || func_11((*uParam0)[1]) == 13)) && ((func_11((*uParam0)[2]) == 11 || func_11((*uParam0)[2]) == 12) || func_11((*uParam0)[2]) == 13))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 39)
		{
			if ((((func_11((*uParam0)[0]) == 12 || func_11((*uParam0)[0]) == 13) || func_11((*uParam0)[0]) == 14) && ((func_11((*uParam0)[1]) == 12 || func_11((*uParam0)[1]) == 13) || func_11((*uParam0)[1]) == 14)) && ((func_11((*uParam0)[2]) == 12 || func_11((*uParam0)[2]) == 13) || func_11((*uParam0)[2]) == 14))
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			if (iVar1 == 19)
			{
				iVar1 = 6;
			}
			if (func_10((*uParam0)[0]) == func_10((*uParam0)[1]) && func_10((*uParam0)[0]) == func_10((*uParam0)[2]))
			{
				return iVar1 + 500;
			}
			return iVar1 + 300;
		}
	}
	iVar2 = 0;
	if (func_11((*uParam0)[0]) == func_11((*uParam0)[1]) && func_11((*uParam0)[0]) != func_11((*uParam0)[2]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + 100;
		}
		else
		{
			return func_11((*uParam0)[2]);
		}
	}
	else if (func_11((*uParam0)[1]) == func_11((*uParam0)[2]) && func_11((*uParam0)[1]) != func_11((*uParam0)[0]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[1]) + func_11((*uParam0)[2])) + 100;
		}
		else
		{
			return func_11((*uParam0)[0]);
		}
	}
	else if (func_11((*uParam0)[2]) == func_11((*uParam0)[0]) && func_11((*uParam0)[2]) != func_11((*uParam0)[1]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[0]) + func_11((*uParam0)[2])) + 100;
		}
		else
		{
			return func_11((*uParam0)[1]);
		}
	}
	else if (func_11((*uParam0)[0]) == func_11((*uParam0)[1]) && func_11((*uParam0)[0]) == func_11((*uParam0)[2]))
	{
		return ((func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + func_11((*uParam0)[2])) + 400;
	}
	else if (func_10((*uParam0)[0]) == func_10((*uParam0)[1]) && func_10((*uParam0)[0]) == func_10((*uParam0)[2]))
	{
		iVar2 = 200;
	}
	if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]) && func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
		}
		return (func_11((*uParam0)[0]) + iVar2);
	}
	else if (func_11((*uParam0)[1]) > func_11((*uParam0)[0]) && func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
		}
		return (func_11((*uParam0)[1]) + iVar2);
	}
	else if (func_11((*uParam0)[2]) > func_11((*uParam0)[0]) && func_11((*uParam0)[2]) > func_11((*uParam0)[1]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]))
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]))
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
		}
		return (func_11((*uParam0)[2]) + iVar2);
	}
	return 0;
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
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
			return 0;
		
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
			return 1;
		
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
			return 2;
		
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
			return 3;
		
		default:
	}
	return 3;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 15:
		case 28:
		case 41:
			return 2;
		
		case 3:
		case 16:
		case 29:
		case 42:
			return 3;
		
		case 4:
		case 17:
		case 30:
		case 43:
			return 4;
		
		case 5:
		case 18:
		case 31:
		case 44:
			return 5;
		
		case 6:
		case 19:
		case 32:
		case 45:
			return 6;
		
		case 7:
		case 20:
		case 33:
		case 46:
			return 7;
		
		case 8:
		case 21:
		case 34:
		case 47:
			return 8;
		
		case 9:
		case 22:
		case 35:
		case 48:
			return 9;
		
		case 10:
		case 23:
		case 36:
		case 49:
			return 10;
		
		case 11:
		case 24:
		case 37:
		case 50:
			return 11;
		
		case 12:
		case 25:
		case 38:
		case 51:
			return 12;
		
		case 13:
		case 26:
		case 39:
		case 52:
			return 13;
		
		case 1:
		case 14:
		case 27:
		case 40:
			return 14;
		
		default:
	}
	return 0;
}

char* func_12(int iParam0)
{
	if (Local_111.f_15[iParam0] > 7)
	{
		return "female_reveal_folded_p04";
	}
	return "reveal_folded_p04";
}

char* func_13(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p04";
	}
	return "reveal_played_p04";
}

char* func_14(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p04";
	}
	return "reveal_blind_p04";
}

char* func_15(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p03";
	}
	return "reveal_folded_p03";
}

char* func_16(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p03";
	}
	return "reveal_played_p03";
}

char* func_17(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p03";
	}
	return "reveal_blind_p03";
}

char* func_18(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p02";
	}
	return "reveal_folded_p02";
}

char* func_19(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p02";
	}
	return "reveal_played_p02";
}

char* func_20(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p02";
	}
	return "reveal_blind_p02";
}

int func_21(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	if (iParam0 < 0 || iParam0 >= 4)
	{
		return 1;
	}
	if (!func_24(iParam0, iParam1) && !func_22(iParam1))
	{
		return func_53(11, &(Local_111.f_50[iParam0]), 0, -1);
	}
	return 1;
}

int func_22(int iParam0)
{
	int iVar0;
	
	if (Local_153[iParam0 /*9*/].f_5 > 0)
	{
		iVar0 = func_9(&(Local_111.f_410[iParam0 /*5*/].f_1), 0, 0);
		if (func_23(iVar0) > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_23(int iParam0)
{
	if (iParam0 > 500)
	{
		return 40;
	}
	else if (iParam0 > 400)
	{
		return 30;
	}
	else if (iParam0 > 300)
	{
		return 6;
	}
	else if (iParam0 > 200)
	{
		return 4;
	}
	else if (iParam0 > 100)
	{
		return 1;
	}
	return 0;
}

int func_24(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Local_153[iParam1 /*9*/].f_3 > 0 && BitTest(Local_153[iParam1 /*9*/], 1))
	{
		iVar0 = func_9(&(Local_111.f_410[iParam1 /*5*/].f_1), 0, 0);
		iVar1 = func_9(&(Local_111.f_389[iParam0 /*5*/].f_1), 0, 0);
		if (!func_25(iVar1))
		{
			return 1;
		}
		if (iVar0 > iVar1)
		{
			return 1;
		}
		if (iVar0 == iVar1)
		{
			iVar0 = func_9(&(Local_111.f_410[iParam1 /*5*/].f_1), 1, 0);
			iVar1 = func_9(&(Local_111.f_389[iParam0 /*5*/].f_1), 1, 0);
			if (iVar0 > iVar1)
			{
				return 1;
			}
			if (iVar0 == iVar1)
			{
				iVar0 = func_9(&(Local_111.f_410[iParam1 /*5*/].f_1), 0, 1);
				iVar1 = func_9(&(Local_111.f_389[iParam0 /*5*/].f_1), 0, 1);
				if (iVar0 > iVar1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
{
	if (iParam0 >= 12)
	{
		return 1;
	}
	return 0;
}

char* func_26(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p01";
	}
	return "reveal_folded_p01";
}

char* func_27(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p01";
	}
	return "reveal_played_p01";
}

char* func_28(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p01";
	}
	return "reveal_blind_p01";
}

void func_29(int iParam0, int iParam1)
{
	Local_111.f_581[iParam1] = iParam0;
}

char* func_30(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_reveal_self";
	}
	return "reveal_self";
}

char* func_31(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_deck_put_down";
	}
	return "deck_put_down";
}

char* func_32(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_self";
	}
	return "deck_deal_self";
}

char* func_33(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p04";
	}
	return "deck_deal_p04";
}

char* func_34(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p03";
	}
	return "deck_deal_p03";
}

char* func_35(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p02";
	}
	return "deck_deal_p02";
}

void func_36(int iParam0, int iParam1)
{
	Local_111.f_571[iParam1] = iParam0;
}

int func_37(var uParam0, var uParam1)
{
	if (*uParam0 >= uParam0->f_1)
	{
		return 0;
	}
	*uParam1 = uParam0->f_2[*uParam0];
	*uParam0++;
	return 1;
}

char* func_38(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p01";
	}
	return "deck_deal_p01";
}

int func_39(var uParam0, int iParam1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0x78D35ABAF71764AD(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x16FE0AE33E462D17(unk_0x43AFC452F25F3A2F(iParam1, Param2, iParam4, bParam3, iParam5));
	}
	else
	{
		*uParam0 = unk_0x16FE0AE33E462D17(unk_0x4E55EAB577C13329(iParam1, Param2, iParam4, bParam3, iParam5));
	}
	if (unk_0x2FC2FDC413532977(*uParam0))
	{
		unk_0x11C125313CB8ADA2(unk_0xAB3646235DE50E93(*uParam0), iParam6);
		if (bParam8)
		{
			unk_0x32C336953C18A3CE(unk_0xAB3646235DE50E93(*uParam0), 1);
		}
		if (bParam9)
		{
			unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(*uParam0), false, 0);
		}
		if (unk_0xC8D49539708A80B4(unk_0xAB3646235DE50E93(*uParam0)))
		{
			if (bParam3)
			{
				unk_0x3C1752E361ED8FC9(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_a_a");
			
			case 2:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_02a");
			
			case 3:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_03a");
			
			case 4:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_04a");
			
			case 5:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_05a");
			
			case 6:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_06a");
			
			case 7:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_07a");
			
			case 8:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_08a");
			
			case 9:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_09a");
			
			case 10:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_10a");
			
			case 11:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_j_a");
			
			case 12:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_q_a");
			
			case 13:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_k_a");
			
			case 14:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_a_a");
			
			case 15:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_02a");
			
			case 16:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_03a");
			
			case 17:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_04a");
			
			case 18:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_05a");
			
			case 19:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_06a");
			
			case 20:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_07a");
			
			case 21:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_08a");
			
			case 22:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_09a");
			
			case 23:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_10a");
			
			case 24:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_j_a");
			
			case 25:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_q_a");
			
			case 26:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_k_a");
			
			case 27:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_a_a");
			
			case 28:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_02a");
			
			case 29:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_03a");
			
			case 30:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_04a");
			
			case 31:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_05a");
			
			case 32:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_06a");
			
			case 33:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_07a");
			
			case 34:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_08a");
			
			case 35:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_09a");
			
			case 36:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_10a");
			
			case 37:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_j_a");
			
			case 38:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_q_a");
			
			case 39:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_k_a");
			
			case 40:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_a_a");
			
			case 41:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_02a");
			
			case 42:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_03a");
			
			case 43:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_04a");
			
			case 44:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_05a");
			
			case 45:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_06a");
			
			case 46:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_07a");
			
			case 47:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_08a");
			
			case 48:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_09a");
			
			case 49:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_10a");
			
			case 50:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_j_a");
			
			case 51:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_q_a");
			
			case 52:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_k_a");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_ace");
			
			case 2:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_02");
			
			case 3:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_03");
			
			case 4:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_04");
			
			case 5:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_05");
			
			case 6:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_06");
			
			case 7:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_07");
			
			case 8:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_08");
			
			case 9:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_09");
			
			case 10:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_10");
			
			case 11:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_jack");
			
			case 12:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_queen");
			
			case 13:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_king");
			
			case 14:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_ace");
			
			case 15:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_02");
			
			case 16:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_03");
			
			case 17:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_04");
			
			case 18:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_05");
			
			case 19:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_06");
			
			case 20:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_07");
			
			case 21:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_08");
			
			case 22:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_09");
			
			case 23:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_10");
			
			case 24:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_jack");
			
			case 25:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_queen");
			
			case 26:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_king");
			
			case 27:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_ace");
			
			case 28:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_02");
			
			case 29:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_03");
			
			case 30:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_04");
			
			case 31:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_05");
			
			case 32:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_06");
			
			case 33:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_07");
			
			case 34:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_08");
			
			case 35:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_09");
			
			case 36:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_10");
			
			case 37:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_jack");
			
			case 38:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_queen");
			
			case 39:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_king");
			
			case 40:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_ace");
			
			case 41:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_02");
			
			case 42:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_03");
			
			case 43:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_04");
			
			case 44:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_05");
			
			case 45:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_06");
			
			case 46:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_07");
			
			case 47:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_08");
			
			case 48:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_09");
			
			case 49:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_10");
			
			case 50:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_jack");
			
			case 51:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_queen");
			
			case 52:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_king");
			}
		
		default:
	}
	return 0;
}

int func_41(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0 * 3 * 4 + iParam2 * 3) + iParam1);
}

char* func_42(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_deck_idle";
	}
	return "deck_idle";
}

char* func_43(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_deck_shuffle";
	}
	return "deck_shuffle";
}

char* func_44(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_deck_pick_up";
	}
	return "deck_pick_up";
}

char* func_45()
{
	return "anim_casino_b@amb@casino@games@threecardpoker@dealer";
}

int func_46(int iParam0, int iParam1)
{
	return (iParam0 * 3 + iParam1);
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	Var3 = { func_76(iParam0) };
	Var3.f_2 = (Var3.f_2 + 0.914f);
	iVar4 = 0;
	while (iVar4 < 3)
	{
		iVar0 = func_46(iParam0, iVar4);
		iVar2 = unk_0xC5935DFB3F39785A(1, 53);
		iVar1 = func_40(iVar2, Local_154.f_5);
		if (!unk_0x2FC2FDC413532977(Local_111.f_55[iVar0]))
		{
			unk_0xEC9DAA34BBB4658C(iVar1);
			if (!unk_0x6252BC0DD8A320DB(iVar1) || !func_39(&(Local_111.f_55[iVar0]), iVar1, Var3, 1, 1, 1, 1, 1, 1, 1))
			{
				return 0;
			}
		}
		iVar4++;
	}
	return 1;
}

int func_48(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = false;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar1 = func_41(iParam0, iVar3, iVar2);
			if (unk_0x2FC2FDC413532977(Local_111.f_68[iVar1]))
			{
				if (unk_0xEADBDBE0422CF7E6(Local_111.f_68[iVar1]))
				{
					func_49(&(Local_111.f_68[iVar1]));
				}
				else
				{
					unk_0x460D2A8B2C7DC7D4(Local_111.f_68[iVar1]);
					bVar0 = true;
				}
			}
			iVar3++;
		}
		iVar2++;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		iVar1 = func_46(iParam0, iVar4);
		if (unk_0x2FC2FDC413532977(Local_111.f_55[iVar1]))
		{
			if (unk_0xEADBDBE0422CF7E6(Local_111.f_55[iVar1]))
			{
				func_49(&(Local_111.f_55[iVar1]));
			}
			else
			{
				unk_0x460D2A8B2C7DC7D4(Local_111.f_55[iVar1]);
				bVar0 = true;
			}
		}
		iVar4++;
	}
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

void func_49(var uParam0)
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

char* func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), func_78(), func_51(iParam0, 0), 3))
	{
		iVar0 = 0;
	}
	else if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), func_78(), func_51(iParam0, 1), 3))
	{
		iVar0 = 1;
	}
	else if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), func_78(), func_51(iParam0, 2), 3))
	{
		iVar0 = 2;
	}
	else if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), func_78(), func_51(iParam0, 3), 3))
	{
		iVar0 = 3;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != iVar0 && Local_111.f_117[(iParam0 * 4 + iVar2)] != func_413())
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (Local_111.f_15[iParam0] >= 7)
	{
		switch (iVar1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

char* func_51(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_111.f_117[(iParam0 * 4 + iVar1)] != func_413())
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iParam1 >= 0)
	{
		iVar0 = iParam1;
	}
	if (Local_111.f_15[iParam0] >= 7)
	{
		switch (iVar0)
		{
			case 0:
				return "female_idle_single_p01";
			
			case 1:
				return "female_idle_single_p02";
			
			case 2:
				return "female_idle_single_p03";
			
			case 3:
				return "female_idle_single_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return "idle_single_p01";
			
			case 1:
				return "idle_single_p02";
			
			case 2:
				return "idle_single_p03";
			
			case 3:
				return "idle_single_p04";
			}
		
		default:
	}
	return "";
}

void func_52(int iParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_20[iParam0]), bParam1);
}

int func_53(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char cVar0[64];
	var uVar1;
	var uVar2;
	
	StringCopy(&cVar0, func_55(iParam0, iParam3), 64);
	if (unk_0xD6F9DEE4765092A9(&cVar0))
	{
		return 0;
	}
	uVar1 = unk_0xC35A3A4C05A4831B(*uParam1);
	if (unk_0x1C2F771CDC87A3A5(uVar1, 0))
	{
		return 0;
	}
	if (!unk_0x93BF17E19A9F0E9B(*uParam1))
	{
		return 0;
	}
	if (!unk_0x1B1A446EFA398EB5(uVar1))
	{
		return 0;
	}
	if (unk_0x912159A05BE6B52E(uVar1))
	{
		return 0;
	}
	uVar2 = func_54(7);
	unk_0x04C016145CE6A18B(uVar1, &cVar0, uVar2, 1);
	return 1;
}

int func_54(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

char* func_55(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 1:
			return "MINIGAME_DEALER_ANOTHER_GO";
		
		case 3:
			return "MINIGAME_DEALER_REJOIN_TABLE";
		
		case 2:
			return func_56(uParam1);
		
		case 4:
			return "MINIGAME_DEALER_LEAVE_GOOD_GAME";
		
		case 5:
			return "MINIGAME_DEALER_LEAVE_BAD_GAME";
		
		case 6:
			return "MINIGAME_DEALER_LEAVE_NEUTRAL_GAME";
		
		case 7:
			return "MINIGAME_DEALER_REFUSE_BETS";
		
		case 9:
			return "MINIGAME_DEALER_COMMENT_SLOW";
		
		case 21:
			return "MINIGAME_DEALER_CLOSED_BETS";
		
		case 8:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		
		case 10:
			return "MINIGAME_DEALER_BUSTS";
		
		case 11:
			return "MINIGAME_DEALER_WINS";
		
		case 12:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 13:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		
		case 14:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 15:
			return "";
		
		case 16:
			return "";
		
		case 17:
			return "";
		
		case 18:
			return "";
		
		case 19:
			return "";
		
		case 20:
			return "";
		
		default:
	}
	return "";
}

char* func_56(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xF0C9E5565CB32F4B(uParam0);
	if (!unk_0x7206AEB20960CCC8(iVar0))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar1 = unk_0x4470BE79F5771783(iVar0);
	if (!func_62(iVar1, 1, 1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar2 = unk_0x56E414973C2A8C0E(iVar1);
	if (func_60(iVar2))
	{
		return "MINIGAME_DEALER_GREET_DRUNK";
	}
	if (!func_58(&iVar1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	if (func_57(iVar1))
	{
		return "MINIGAME_DEALER_GREET_FEMALE";
	}
	return "MINIGAME_DEALER_GREET_MALE";
}

int func_57(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = Local_153[*iParam0 /*9*/].f_2;
	return func_59(iVar0, Local_154.f_26);
}

int func_59(int iParam0, int iParam1)
{
	if ((iParam0 == 2 || iParam0 == 3) || iParam1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_61(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_61(int iParam0)
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

int func_62(int iParam0, bool bParam1, bool bParam2)
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

int func_63(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return BitTest(Local_111.f_20[iParam0], iParam1);
}

void func_64(int iParam0)
{
	unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 16);
	unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 17);
	unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 18);
	unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 19);
	unk_0x8744D2E3FC95740E(&(Local_111.f_20[iParam0]), 21);
}

void func_65(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = 0;
	uParam0->f_1 = 52;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_1)
		{
			iVar0 = unk_0x4AFA59A11CC00538(0, uParam0->f_1);
			uVar2 = uParam0->f_2[iVar1];
			uParam0->f_2[iVar1] = uParam0->f_2[iVar0];
			uParam0->f_2[iVar0] = uVar2;
			iVar1++;
		}
		iVar3++;
	}
}

void func_66(int iParam0, int iParam1)
{
	Local_111.f_576[iParam1] = iParam0;
}

void func_67(int iParam0)
{
	struct<5> Var0;
	
	Local_111[iParam0] = 1;
	if (unk_0x93BF17E19A9F0E9B(Local_111.f_50[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0])))
	{
		if (!unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), func_78(), func_77(iParam0), 3))
		{
			if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iParam0]))
			{
				Local_111.f_45[iParam0] = unk_0x643DC062EE904FCA(Local_111.f_35[iParam0]);
				if (Local_111.f_45[iParam0] == -1 || (unk_0xBD3B265153D3BA2D(Local_111.f_45[iParam0]) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), joaat("blend_out"))))
				{
					Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
					unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
					unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
				}
			}
			else
			{
				unk_0x460D2A8B2C7DC7D4(Local_111.f_50[iParam0]);
			}
			return;
		}
	}
	if (func_48(iParam0))
	{
		Local_111.f_20[iParam0] = 0;
		Var0.f_1 = 3;
		Local_111.f_389[iParam0 /*5*/] = { Var0 };
		Local_111.f_5[iParam0] = 0;
		func_69(&(Local_111.f_150[iParam0 /*2*/]));
		func_79(1, iParam0);
		func_66(0, iParam0);
		func_36(0, iParam0);
		func_29(0, iParam0);
		Local_111.f_25[iParam0]++;
		Local_111[iParam0] = 0;
	}
}

int func_68(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (bParam1)
		{
			if (Local_111.f_117[(iParam0 * 4 + iVar1)] != func_413() && Local_111.f_410[Local_111.f_117[(iParam0 * 4 + iVar1)] /*5*/] > 0)
			{
				iVar0++;
			}
			else
			{
				if (unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 0, iVar1)]))
				{
					if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 0, iVar1)]))
					{
						unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 0, iVar1)]);
					}
					else
					{
						func_49(&(Local_111.f_68[func_41(iParam0, 0, iVar1)]));
					}
				}
				if (unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 1, iVar1)]))
				{
					if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 1, iVar1)]))
					{
						unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 1, iVar1)]);
					}
					else
					{
						func_49(&(Local_111.f_68[func_41(iParam0, 1, iVar1)]));
					}
				}
				if (unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 2, iVar1)]))
				{
					if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 2, iVar1)]))
					{
						unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 2, iVar1)]);
					}
					else
					{
						func_49(&(Local_111.f_68[func_41(iParam0, 2, iVar1)]));
					}
				}
			}
		}
		else if (Local_111.f_117[(iParam0 * 4 + iVar1)] != func_413())
		{
			iVar0++;
		}
		else
		{
			if (unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 0, iVar1)]))
			{
				if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 0, iVar1)]))
				{
					unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 0, iVar1)]);
				}
				else
				{
					func_49(&(Local_111.f_68[func_41(iParam0, 0, iVar1)]));
				}
			}
			if (unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 1, iVar1)]))
			{
				if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 1, iVar1)]))
				{
					unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 1, iVar1)]);
				}
				else
				{
					func_49(&(Local_111.f_68[func_41(iParam0, 1, iVar1)]));
				}
			}
			if (unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(iParam0, 2, iVar1)]))
			{
				if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(iParam0, 2, iVar1)]))
				{
					unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(iParam0, 2, iVar1)]);
				}
				else
				{
					func_49(&(Local_111.f_68[func_41(iParam0, 2, iVar1)]));
				}
			}
		}
		iVar1++;
	}
	if (Local_111.f_30[iParam0] != iVar0)
	{
		Local_111.f_30[iParam0] = iVar0;
	}
	if (iVar0 > 0)
	{
		return 1;
	}
	return 0;
}

void func_69(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_70(int iParam0, int iParam1)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

int func_71(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_73(uParam0, bParam2, 0);
	if (unk_0x76CD105BCAC6EB9F() && !bParam2)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_72(var uParam0)
{
	return uParam0->f_1;
}

void func_73(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x76CD105BCAC6EB9F() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				*uParam0 = unk_0x0728E77B2BF91D54();
			}
		}
		else
		{
			*uParam0 = unk_0x1DD05E817C89C737();
		}
		uParam0->f_1 = 1;
	}
}

char* func_74(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		switch (unk_0xC5935DFB3F39785A(0, 5))
		{
			case 0:
				return "female_idle_var_01";
			
			case 1:
				return "female_idle_var_02";
			
			case 2:
				return "female_idle_var_03";
			
			case 3:
				return "female_idle_var_04";
			
			case 4:
				return "female_idle_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0xC5935DFB3F39785A(0, 5))
		{
			case 0:
				return "idle_var_01";
			
			case 1:
				return "idle_var_02";
			
			case 2:
				return "idle_var_03";
			
			case 3:
				return "idle_var_04";
			
			case 4:
				return "idle_var_05";
			}
		
		default:
	}
	return "";
}

float func_75(int iParam0)
{
	if (Local_154.f_26 == 1)
	{
		return -122f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return -135f;
			
			case 1:
				return 45f;
			
			case 2:
				return -45f;
			
			case 3:
				return -45f;
			}
		
		default:
	}
	return 0f;
}

Vector3 func_76(int iParam0)
{
	if (Local_154.f_26 == 1)
	{
		return 967.33f, 32.0191f, 115.1742f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1143.338f, 264.2453f, -52.8409f;
			
			case 1:
				return 1146.329f, 261.2543f, -52.8409f;
			
			case 2:
				return 1133.74f, 266.6947f, -52.0409f;
			
			case 3:
				return 1148.74f, 251.6947f, -52.0409f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_77(int iParam0)
{
	if (Local_111.f_15[iParam0] >= 7)
	{
		return "female_idle";
	}
	return "idle";
}

char* func_78()
{
	return "anim_casino_b@amb@casino@games@shared@dealer@";
}

void func_79(int iParam0, int iParam1)
{
	Local_111.f_586[iParam1] = iParam0;
}

void func_80(var uParam0)
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = 52;
	iVar3 = 0;
	while (iVar3 < 52)
	{
		iVar1 = unk_0x4AFA59A11CC00538(0, iVar2);
		iVar4 = 0;
		while (iVar4 < 52)
		{
			iVar6 = (iVar4 / 32);
			bVar7 = (iVar4 % 32);
			if (iVar5 == iVar1 && !BitTest(uVar0[iVar6], bVar7))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uVar0[iVar6]), bVar7);
				uParam0->f_2[iVar3] = iVar4 + 1;
			}
			else
			{
				if (!BitTest(uVar0[iVar6], bVar7))
				{
					iVar5++;
				}
				iVar4++;
			}
		}
		iVar5 = 0;
		iVar2 = (iVar2 - 1);
		iVar3++;
	}
	uParam0->f_1 = 52;
}

void func_81()
{
	int iVar0;
	
	if (!func_85(unk_0x259BE71D8A81D4FA()))
	{
		iVar0 = iLocal_188;
		if (Global_2765559 != iVar0 && (Global_2765559 != -1 || func_419(unk_0x259BE71D8A81D4FA())))
		{
			if (!unk_0x93BF17E19A9F0E9B(Local_111.f_50[iVar0]))
			{
				func_82(iVar0);
			}
		}
		else if (unk_0x93BF17E19A9F0E9B(Local_111.f_50[iVar0]))
		{
			if (unk_0xEADBDBE0422CF7E6(Local_111.f_50[iVar0]))
			{
				func_49(&(Local_111.f_50[iVar0]));
			}
			else
			{
				unk_0x460D2A8B2C7DC7D4(Local_111.f_50[iVar0]);
			}
		}
	}
	iLocal_188++;
	if (iLocal_188 >= Local_154.f_26)
	{
		iLocal_188 = 0;
	}
}

void func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("s_m_y_casino_01");
	if (Local_111.f_15[iParam0] >= 7)
	{
		iVar0 = joaat("s_f_y_casino_01");
	}
	unk_0xEC9DAA34BBB4658C(iVar0);
	if (!unk_0x6252BC0DD8A320DB(iVar0))
	{
		return;
	}
	unk_0x80813AC549A1E8AE(func_78());
	if (!unk_0xE100DD4F82A51BDE(func_78()))
	{
		return;
	}
	if (!unk_0x93BF17E19A9F0E9B(Local_111.f_50[iParam0]))
	{
		if (unk_0xADCE9BCAFCB83364(1))
		{
			if (unk_0x0721B5D4CF3ACD02())
			{
				unk_0x6ABC02CAFE92B58C(1);
			}
			iVar1 = unk_0xB1DBFEB95C0EFB88(26, iVar0, func_76(iParam0), func_75(iParam0), 1, 1);
			unk_0x55098D9E9AD58806(iVar0);
			unk_0x999C62072AF920FD(iVar1, 0);
			unk_0x4BD214FCF7332FF6(iVar1, 0);
			unk_0xAAA71DD7E9059338(iVar1, 1);
			unk_0x0FB8E752BCC547A9(iVar1, 249, 1);
			unk_0x0428AFDCAA63B06E(iVar1, 185, 1);
			unk_0x0428AFDCAA63B06E(iVar1, 108, 1);
			unk_0x32C336953C18A3CE(iVar1, 1);
			unk_0x8FEAF7F0538CEF55(iVar1, 1);
			unk_0x84D421ACEBF9E529(iVar1, 0);
			unk_0x00941975834A0817(iVar1, 1);
			unk_0x81E9E7612B0E4BCE(iVar1, 0);
			unk_0x0428AFDCAA63B06E(iVar1, 208, 1);
			unk_0x9FF00EA9A61211D2(iVar1, 0);
			func_84(Local_111.f_15[iParam0], &iVar1);
			func_83(Local_111.f_15[iParam0], &iVar1);
			unk_0x62C438C53BB57AFD(iVar1, func_76(iParam0), 0, 0, 1);
			unk_0x5C96CEA06531AB03(iVar1, func_75(iParam0));
			if (unk_0xFC8BFE4B41177C22(iVar1))
			{
				Local_111.f_50[iParam0] = unk_0x9F7A52B1537567AC(iVar1);
				if (unk_0x93BF17E19A9F0E9B(Local_111.f_50[iParam0]))
				{
					unk_0x8FC511FC963C67E5(Local_111.f_50[iParam0], 0);
					Local_111.f_10[iParam0] = 1;
					Local_111.f_35[iParam0] = unk_0xBC5D9A293974F095(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
					unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_111.f_50[iParam0]), Local_111.f_35[iParam0], func_78(), func_77(iParam0), 1000f, -2f, 13, 16, 1148846080, 0);
					unk_0xE7101255AD6F1952(Local_111.f_35[iParam0]);
					unk_0x268BE77F77533D03(func_78());
				}
			}
			if (unk_0x0721B5D4CF3ACD02())
			{
				unk_0x6ABC02CAFE92B58C(0);
			}
		}
	}
}

void func_83(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 1:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 2:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_M_Y_Casino_01_ASIAN_02"));
			break;
		
		case 3:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 4:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 5:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_M_Y_Casino_01_WHITE_02"));
			break;
		
		case 6:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 7:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 8:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 9:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 10:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 11:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_F_Y_Casino_01_LATINA_01"));
			break;
		
		case 12:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_F_Y_Casino_01_LATINA_02"));
			break;
		
		case 13:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_F_Y_Casino_01_LATINA_01"));
			break;
	}
}

void func_84(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 3, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 3, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 3, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 1, 0, 0);
			break;
		
		case 1:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 2, 2, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 4, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 0, 3, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 1, 0, 0);
			break;
		
		case 2:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 2, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 0, 3, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 1, 0, 0);
			break;
		
		case 3:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 3, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 1, 3, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 3, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 1, 0, 0);
			break;
		
		case 4:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 4, 2, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 3, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 1, 0, 0);
			break;
		
		case 5:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 4, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 1, 0, 0);
			break;
		
		case 6:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 4, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 4, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 3, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 1, 0, 0);
			break;
		
		case 7:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 1, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 0, 3, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 0, 0, 0);
			break;
		
		case 8:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 1, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 1, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 1, 3, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 0, 0, 0);
			break;
		
		case 9:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 2, 3, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 0, 0, 0);
			break;
		
		case 10:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 2, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 2, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 3, 3, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 3, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 0, 0, 0);
			break;
		
		case 11:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 3, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 3, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 0, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 0, 0, 0);
			unk_0x7F08C4791E6D6969(*iParam1, 1, 0, 0, 0, 1);
			break;
		
		case 12:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 3, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 3, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 1, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 0, 0, 0);
			break;
		
		case 13:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 4, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 4, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 2, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 0, 0, 0);
			unk_0x7F08C4791E6D6969(*iParam1, 1, 0, 0, 0, 1);
			break;
	}
}

int func_85(int iParam0)
{
	if (iParam0 != func_413() && func_62(iParam0, 1, 1))
	{
		if (func_86(iParam0) && !func_418(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_86(int iParam0)
{
	if (iParam0 != func_413() && func_62(iParam0, 1, 1))
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321, 3);
	}
	return 0;
}

void func_87()
{
	struct<5> Var0;
	bool bVar1;
	int iVar2;
	
	Var0.f_1 = 3;
	bVar1 = false;
	iVar2 = iLocal_187;
	if (Local_153[iVar2 /*9*/].f_2 == -1)
	{
		Local_111.f_410[iVar2 /*5*/] = { Var0 };
	}
	if (Local_153[iVar2 /*9*/].f_7 == 0)
	{
		if (Local_111.f_600[iVar2] != 0)
		{
			Local_111.f_600[iVar2] = 0;
		}
	}
	if (!bVar1)
	{
		if (func_88(iVar2))
		{
			bVar1 = true;
		}
	}
	iLocal_187++;
	if (iLocal_187 >= 32)
	{
		iLocal_187 = 0;
	}
}

int func_88(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_408())
	{
		return 0;
	}
	iVar0 = unk_0xF0C9E5565CB32F4B(iParam0);
	if (!unk_0x7206AEB20960CCC8(iVar0))
	{
		return 0;
	}
	iVar1 = unk_0x4470BE79F5771783(iVar0);
	if (!func_62(iVar1, 1, 1))
	{
		return 0;
	}
	iVar2 = Local_153[iParam0 /*9*/].f_7.f_1;
	if (iVar2 < 0 || iVar2 >= 4)
	{
		return 0;
	}
	if (Local_153[iParam0 /*9*/].f_7 == 1)
	{
		if (func_53(2, &(Local_111.f_50[iVar2]), 0, iParam0))
		{
			func_89(iParam0, 1);
		}
		return 1;
	}
	if (Local_153[iParam0 /*9*/].f_7 == 2)
	{
		if (func_53(3, &(Local_111.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 2);
		}
		return 1;
	}
	if (Local_153[iParam0 /*9*/].f_7 == 4)
	{
		if (func_53(4, &(Local_111.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 4);
		}
		return 1;
	}
	if (Local_153[iParam0 /*9*/].f_7 == 5)
	{
		if (func_53(5, &(Local_111.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 5);
		}
		return 1;
	}
	if (Local_153[iParam0 /*9*/].f_7 == 6)
	{
		if (func_53(6, &(Local_111.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 6);
		}
		return 1;
	}
	if (Local_153[iParam0 /*9*/].f_7 == 7)
	{
		if (func_53(7, &(Local_111.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 7);
		}
		return 1;
	}
	return 0;
}

void func_89(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Local_111.f_600[iParam0]), iVar0);
}

void func_90()
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_186;
	if (Local_111.f_117[iVar0] != func_413())
	{
		iVar1 = Local_111.f_117[iVar0];
		if (((!func_62(Local_111.f_117[iVar0], 1, 1) || Local_153[iVar1 /*9*/].f_1 == -1) || Local_153[iVar1 /*9*/].f_1 != iVar0) || !unk_0xCCD470854FB0E643(Local_111.f_117[iVar0]))
		{
			Local_111.f_117[iVar0] = func_413();
			if (Local_111.f_600[iVar0] != 0)
			{
				Local_111.f_600[iVar0] = 0;
			}
		}
	}
	if (func_62(iVar0, 1, 1) && unk_0xCCD470854FB0E643(iVar0))
	{
		if (Local_153[iVar0 /*9*/].f_1 > -1 && Local_153[iVar0 /*9*/].f_1 < 32)
		{
			if (Local_111.f_117[Local_153[iVar0 /*9*/].f_1] == func_413())
			{
				if (func_62(unk_0xB23E0F9B63D009A8(iVar0), 1, 1))
				{
					Local_111.f_117[Local_153[iVar0 /*9*/].f_1] = unk_0xB23E0F9B63D009A8(iVar0);
				}
			}
		}
	}
	iLocal_186++;
	if (iLocal_186 >= 32)
	{
		iLocal_186 = 0;
	}
}

void func_91()
{
	bool bVar0;
	var uVar1;
	char* sVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<16> Var6;
	struct<3> Var7;
	
	if (!Local_154.f_5)
	{
		if (func_419(unk_0x259BE71D8A81D4FA()) && func_414() != func_413())
		{
			if (BitTest(Global_2657589[func_414() /*466*/].f_321.f_4, 4))
			{
				Local_154.f_5 = 1;
				func_407();
				iLocal_181 = 1;
			}
		}
	}
	else if (iLocal_181)
	{
		if (func_406())
		{
			iLocal_181 = 0;
		}
	}
	func_405();
	Local_154.f_19 = func_402();
	func_392();
	func_388();
	func_385();
	if (Local_154.f_798 > 2)
	{
		unk_0x66EFB3D6110055C4(2, 210, 1);
		unk_0x4CC1CF98851922CE(2, 210);
		unk_0x66EFB3D6110055C4(2, 26, 1);
		if (unk_0x61C3701AD6D746B2(2, 210))
		{
		}
		if (func_384(Local_154.f_18) >= 0 && unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), func_76(func_384(Local_154.f_18)), 1) > 5f)
		{
			func_379(0);
		}
	}
	if (Local_154.f_798 > 5)
	{
		unk_0x43AE50D2A33F6E2A();
		unk_0x0C9B2F8C2BD128C2();
		unk_0xD10838CEA97E4725(19);
		func_377(1);
		func_376(1, 0);
	}
	if (Local_154.f_798 > 6)
	{
		unk_0x66EFB3D6110055C4(2, 0, 1);
		if (unk_0x61C3701AD6D746B2(2, 0))
		{
			if (unk_0xBCF87EE3DC296C2A(0) == 0)
			{
				unk_0x07938654FF332D78(0, 4);
			}
			else if (unk_0xBCF87EE3DC296C2A(0) == 4)
			{
				unk_0x07938654FF332D78(0, 0);
			}
		}
		unk_0xE71B1E03F658C30C();
	}
	if (Local_154.f_798 > 7)
	{
		func_372(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/]));
	}
	if (func_371())
	{
		bLocal_183 = true;
	}
	else if (bLocal_183)
	{
		func_370(&uLocal_184, 0, 0);
		bLocal_183 = false;
	}
	else if (func_72(&uLocal_184) && func_71(&uLocal_184, 500, 0))
	{
		func_69(&uLocal_184);
	}
	switch (Local_154.f_798)
	{
		case 0:
			if (func_365())
			{
				Local_154.f_796 = "idle_cardgames";
				Local_154.f_22 = 0;
				Local_153[unk_0x259BE71D8A81D4FA() /*9*/] = 0;
				Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_6 = 0;
				Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 = -1;
				Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 = -1;
				func_364(unk_0x259BE71D8A81D4FA());
				func_363(1);
			}
			break;
		
		case 1:
			switch (func_384(Local_154.f_18))
			{
				case 0:
				case 1:
					bVar0 = false;
					Local_154.f_16 = 5000;
					Local_154.f_17 = 10;
					Local_154.f_27 = 500;
					Local_154.f_28 = 10;
					break;
				
				case 2:
				case 3:
					bVar0 = true;
					Local_154.f_16 = 50000;
					Local_154.f_17 = 1000;
					Local_154.f_27 = 5000;
					Local_154.f_28 = 1000;
					break;
			}
			if (Local_154.f_26 == 1)
			{
				bVar0 = true;
				Local_154.f_16 = 50000;
				Local_154.f_17 = 1000;
				Local_154.f_27 = 5000;
				Local_154.f_28 = 1000;
			}
			if (((((((((((((((((((((((!Global_262145.f_26956 && !(Global_262145.f_26958 && !bVar0)) && !(Global_262145.f_26957 && bVar0)) && ((func_362(joaat("rm_GamingFloor_02")) || func_362(joaat("rm_GamingFloor_03"))) || func_419(unk_0x259BE71D8A81D4FA()))) && func_360(unk_0x4A8C381C258A124D(), func_361(Local_154.f_18), 1.5f, 1)) && func_355(unk_0x4A8C381C258A124D(), func_359(Local_154.f_18), 40f)) && Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/] == 0) && !BitTest(Global_1950108.f_4, 2)) && !Global_2635559.f_2681) && Global_2765559 != func_384(Local_154.f_18)) && (Global_2765559 != -1 || func_419(unk_0x259BE71D8A81D4FA()))) && func_354()) && !func_350()) && !unk_0x15CCE8886267624F()) && !unk_0x78ABC1D11B34F324()) && func_347(unk_0x4A8C381C258A124D()) <= 9) && !Global_2635559.f_2681) && !unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) && !func_346()) && !func_345()) && !func_343()) && !Global_2694562.f_12) && Global_1950102 != 33) && !func_342())
			{
				func_363(2);
			}
			else
			{
				Local_154.f_18++;
				if (Local_154.f_18 >= Local_154.f_26 * 4)
				{
					Local_154.f_18 = 0;
				}
			}
			break;
		
		case 2:
			func_341();
			func_364(unk_0x259BE71D8A81D4FA());
			if (((((((((((((((((((((func_362(joaat("rm_GamingFloor_02")) || func_362(joaat("rm_GamingFloor_03"))) || func_419(unk_0x259BE71D8A81D4FA())) && func_360(unk_0x4A8C381C258A124D(), func_361(Local_154.f_18), 1.5f, 1)) && func_355(unk_0x4A8C381C258A124D(), func_359(Local_154.f_18), 40f)) && Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/] == 0) && Global_2765559 != func_384(Local_154.f_18)) && (Global_2765559 != -1 || func_419(unk_0x259BE71D8A81D4FA()))) && func_354()) && !func_350()) && !unk_0x15CCE8886267624F()) && !unk_0x78ABC1D11B34F324()) && func_347(unk_0x4A8C381C258A124D()) <= 9) && !Global_2635559.f_2681) && !unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) && !func_346()) && !func_345()) && !func_343()) && !Global_2694562.f_12) && Global_1950102 != 33) && !Local_111[func_384(Local_154.f_18)]) && !func_342())
			{
				if ((((((func_62(unk_0x259BE71D8A81D4FA(), 1, 1) && unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) && !func_340()) && !func_339()) && !unk_0xB11671B812399BA2()) && !bLocal_183) && !func_72(&uLocal_184))
				{
					if (func_338(2, &uVar1))
					{
						if (!func_337("TCP_NA"))
						{
							func_336("TCP_NA");
						}
					}
					else if (Local_111.f_117[Local_154.f_18] != func_413())
					{
						if (!func_337("TCP_USED"))
						{
							func_336("TCP_USED");
						}
					}
					else if (func_335())
					{
						if (func_331() == 2)
						{
							if (!func_337("CAS_MG_CTIME"))
							{
								func_336("CAS_MG_CTIME");
							}
						}
						else if (!func_337("CAS_MG_CBAN"))
						{
							func_336("CAS_MG_CBAN");
						}
					}
					else if ((!func_330(unk_0x259BE71D8A81D4FA()) && (func_384(Local_154.f_18) == 2 || func_384(Local_154.f_18) == 3)) && !(func_329(1) && func_330(func_328())))
					{
						if (!func_337("CAS_MG_SUITE2"))
						{
							func_336("CAS_MG_SUITE2");
						}
					}
					else if (!func_327() && !(func_329(1) && func_326(func_328())))
					{
						if (!func_324("CAS_MG_MEMB2", func_325(1)))
						{
							func_323("CAS_MG_MEMB2", func_325(1));
						}
						else if (unk_0x875A214D5EBCA509(2, 52))
						{
							unk_0x428C32CC68809A35(1);
							func_322();
							func_363(3);
						}
					}
					else if (Local_154.f_19 <= 0)
					{
						if (func_419(unk_0x259BE71D8A81D4FA()))
						{
							if (!func_337("CAS_MG_NOCHIPS7"))
							{
								func_336("CAS_MG_NOCHIPS7");
							}
						}
						else if (!func_337("CAS_MG_NOCHIPS3"))
						{
							func_336("CAS_MG_NOCHIPS3");
						}
					}
					else if (Local_154.f_19 < Local_154.f_28)
					{
						if (func_419(unk_0x259BE71D8A81D4FA()))
						{
							if (!func_337("CAS_MG_LOWCHIPS7"))
							{
								func_336("CAS_MG_LOWCHIPS7");
							}
						}
						else if (!func_337("CAS_MG_LOWCHIPS3"))
						{
							func_336("CAS_MG_LOWCHIPS3");
						}
					}
					else if (Local_154.f_31 == -1)
					{
						if (func_321())
						{
							unk_0x428C32CC68809A35(1);
						}
						if (((!func_330(unk_0x259BE71D8A81D4FA()) && (func_384(Local_154.f_18) == 2 || func_384(Local_154.f_18) == 3)) && !(func_329(1) && func_330(func_328()))) || (!func_327() && (func_329(1) && func_326(func_328()))))
						{
							if (func_318(func_328()) == 1)
							{
								Local_154.f_25 = 1;
								func_317(&(Local_154.f_31), 4, "TCP_PLAY_A", 0, 0, 0, 0);
							}
							else if (func_316(func_328()))
							{
								Local_154.f_25 = 2;
								func_317(&(Local_154.f_31), 4, "TCP_PLAY_B", 0, 0, 0, 0);
							}
							else
							{
								Local_154.f_25 = 3;
								func_317(&(Local_154.f_31), 4, "TCP_PLAY_C", 0, 0, 0, 0);
							}
						}
						else
						{
							Local_154.f_25 = 0;
							func_317(&(Local_154.f_31), 4, "TCP_PLAY", 0, 0, 0, 0);
						}
					}
					else if (func_315(Local_154.f_31, 1))
					{
						func_313(&(Local_154.f_31));
						Local_154.f_31 = -1;
						unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 185, 1);
						func_312();
						func_302(unk_0x259BE71D8A81D4FA(), 0, 1048832, 0);
						if (unk_0xBCF87EE3DC296C2A(0) == 4 && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						{
							unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
							unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
						}
						func_363(4);
					}
				}
				else
				{
					if (func_321())
					{
						unk_0x428C32CC68809A35(1);
					}
					if (Local_154.f_31 != -1)
					{
						func_313(&(Local_154.f_31));
						Local_154.f_31 = -1;
					}
					Local_154.f_18 = 0;
					func_363(1);
				}
			}
			else
			{
				if (func_321())
				{
					unk_0x428C32CC68809A35(1);
				}
				if (Local_154.f_31 != -1)
				{
					func_313(&(Local_154.f_31));
					Local_154.f_31 = -1;
				}
				Local_154.f_18 = 0;
				func_363(1);
			}
			break;
		
		case 3:
			if (!func_301())
			{
				func_363(2);
			}
			break;
		
		case 4:
			func_377(1);
			sVar2 = "CasinoUI_Cards_Three";
			if ((func_384(Local_154.f_18) == 2 || func_384(Local_154.f_18) == 3) || func_419(unk_0x259BE71D8A81D4FA()))
			{
				sVar2 = "CasinoUI_Cards_Three_High";
			}
			if (BitTest(Global_1950108.f_5, 22))
			{
				func_370(&(Local_154.f_792), 0, 0);
				func_300(Local_154.f_18);
				if (unk_0xBCF87EE3DC296C2A(0) == 4)
				{
					func_302(unk_0x259BE71D8A81D4FA(), 0, 0, 0);
				}
				else
				{
					func_302(unk_0x259BE71D8A81D4FA(), 0, 256, 0);
				}
				func_363(5);
			}
			else
			{
				unk_0xD0D00ED689D6CA81(sVar2, 0);
				if (func_298(0, -1, 0) && unk_0x38D063D8CF6D1967(sVar2))
				{
					if (!iLocal_182)
					{
						unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
						func_297(0, 0);
						func_295(1, sVar2, sVar2);
						func_294("TCP_TITLE");
						func_293(-1, 1, 1);
						func_292("TCP_DIS", 0, 0);
						func_291("TCP_DIS1");
						func_291("TCP_DIS2");
						func_291("TCP_DIS3");
						func_290(202, "TCP_EXIT", -1);
						func_290(201, "TCP_CONT", -1);
						iLocal_182 = 1;
					}
					func_263(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (unk_0x61C3701AD6D746B2(2, 202))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
					func_260(1, -1);
					unk_0x633E3833FB96BCCB(sVar2);
					iLocal_182 = 0;
					func_251();
				}
				else if (unk_0x61C3701AD6D746B2(2, 201))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
					func_260(1, -1);
					unk_0x633E3833FB96BCCB(sVar2);
					iLocal_182 = 0;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_1950108.f_5), 22);
					func_370(&(Local_154.f_792), 0, 0);
					func_300(Local_154.f_18);
					if (unk_0xBCF87EE3DC296C2A(0) == 4)
					{
						func_302(unk_0x259BE71D8A81D4FA(), 0, 0, 0);
					}
					else
					{
						func_302(unk_0x259BE71D8A81D4FA(), 0, 256, 0);
					}
					func_363(5);
				}
			}
			break;
		
		case 5:
			if ((((func_250(Local_154.f_18) && !func_339()) && !func_371()) && func_354()) && !func_350())
			{
				func_69(&(Local_154.f_792));
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_321.f_4), 3);
				func_241(2);
				func_363(6);
			}
			else
			{
				if (func_339())
				{
					func_251();
				}
				if (func_371())
				{
					func_251();
				}
				if (func_240(Local_154.f_18))
				{
					func_251();
				}
				if (func_239())
				{
					func_251();
				}
				if (!func_354())
				{
					func_251();
				}
				if (func_350())
				{
					func_251();
				}
			}
			break;
		
		case 6:
			if (!func_339() && !func_371())
			{
				if (func_238())
				{
					if (unk_0xBCF87EE3DC296C2A(0) == 1 || unk_0xBCF87EE3DC296C2A(0) == 2)
					{
						unk_0x07938654FF332D78(0, 0);
					}
					fVar3 = func_236(unk_0x4A8C381C258A124D(), func_237(Local_154.f_18, 0), 1);
					fVar4 = func_236(unk_0x4A8C381C258A124D(), func_237(Local_154.f_18, 1), 1);
					fVar5 = func_236(unk_0x4A8C381C258A124D(), func_237(Local_154.f_18, 2), 1);
					if (fVar4 < fVar5 && fVar4 < fVar3)
					{
						Local_154.f_21 = 1;
					}
					else if (fVar5 < fVar4 && fVar5 < fVar3)
					{
						Local_154.f_21 = 2;
					}
					else
					{
						Local_154.f_21 = 0;
					}
					unk_0x63C8DCBEC1CF8225(unk_0x4A8C381C258A124D(), func_237(Local_154.f_18, Local_154.f_21), 1f, 5000, func_235(Local_154.f_18, Local_154.f_21), 0.01f);
					func_363(7);
				}
			}
			else
			{
				func_251();
			}
			break;
		
		case 7:
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_go_straight_to_coord")) != 0)
			{
				Local_154.f_24 = unk_0xBC5D9A293974F095(func_361(Local_154.f_18), func_233(Local_154.f_18), 2, 1, 0, 1065353216, 0, 1065353216);
				unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_154.f_24, func_232(), func_231(Local_154.f_21), 2f, -2f, 13, 16, 2f, 0);
				unk_0xE7101255AD6F1952(Local_154.f_24);
				Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_7.f_1 = Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2;
				func_363(8);
			}
			break;
		
		case 8:
			unk_0xC1AAF981A4F50898(-1938411241);
			Local_154.f_30 = unk_0x643DC062EE904FCA(Local_154.f_24);
			if (func_230())
			{
				func_229(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/]), 2);
			}
			else
			{
				func_229(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/]), 1);
			}
			if (Local_154.f_30 != -1)
			{
				if ((unk_0xBD3B265153D3BA2D(Local_154.f_30) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), joaat("ShowUi"))) || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), joaat("blend_out")))
				{
					func_302(unk_0x259BE71D8A81D4FA(), 0, 256, 0);
					Local_164 = { Var6 };
					if (func_419(unk_0x259BE71D8A81D4FA()))
					{
						Local_164.f_0 = 1695074466;
					}
					else if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 == 2 || Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 == 3)
					{
						Local_164.f_0 = 1952785842;
					}
					else
					{
						Local_164.f_0 = joaat("standard");
					}
					Local_164.f_1 = Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2;
					Local_164.f_6 = 1;
					if (func_330(unk_0x259BE71D8A81D4FA()))
					{
						Local_164.f_15 = 1983458449;
					}
					else if (func_327())
					{
						Local_164.f_15 = 1334658487;
					}
					else if (func_329(1) && (func_330(func_328()) || func_227(unk_0x259BE71D8A81D4FA())))
					{
						Local_164.f_15 = 980726932;
					}
					else
					{
						Local_164.f_15 = 939907746;
					}
					func_370(&uLocal_161, 0, 0);
					func_226();
					Local_154.f_32 = func_402();
					func_363(9);
				}
			}
			break;
		
		case 9:
			if (!unk_0xBC2EE32DE886BD08("DLC_VW_Casino_Table_Games"))
			{
				unk_0xCAC4020CCF361AC8("DLC_VW_Casino_Table_Games");
			}
			unk_0xC1AAF981A4F50898(-1938411241);
			func_95();
			break;
		
		case 10:
			if (unk_0xBC2EE32DE886BD08("DLC_VW_Casino_Table_Games"))
			{
				unk_0xB43467C43086A6A1("DLC_VW_Casino_Table_Games");
			}
			if (unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_synchronized_scene")) == 1)
			{
				func_229(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/]), func_94());
				Var7 = { unk_0xB504E1B50AA21FC5(2, 218), unk_0xB504E1B50AA21FC5(2, 219), 0f };
				Local_154.f_30 = unk_0x643DC062EE904FCA(Local_154.f_24);
				if (Local_154.f_7)
				{
					if (Local_154.f_30 != -1 && (unk_0xBD3B265153D3BA2D(Local_154.f_30) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), joaat("blend_out"))))
					{
						Local_154.f_24 = unk_0xBC5D9A293974F095(func_361(Local_154.f_18), func_233(Local_154.f_18), 2, 0, 0, 1065353216, 0, 1065353216);
						unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_154.f_24, func_232(), func_93(Local_154.f_18), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0xE7101255AD6F1952(Local_154.f_24);
						Local_154.f_7 = 0;
					}
				}
				else if (Local_154.f_30 != -1 && ((unk_0xBD3B265153D3BA2D(Local_154.f_30) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), joaat("blend_out"))) || (vmag(Var7) >= 0.24f && unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), 2116425869))))
				{
					unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
					func_302(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
					unk_0x268BE77F77533D03(func_45());
					unk_0x268BE77F77533D03(func_78());
					unk_0x268BE77F77533D03(func_92());
					unk_0x268BE77F77533D03(func_232());
					func_407();
					unk_0x8744D2E3FC95740E(&(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_321.f_4), 3);
					func_341();
					func_363(2);
				}
			}
			else
			{
				unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
				func_302(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
				unk_0x268BE77F77533D03(func_45());
				unk_0x268BE77F77533D03(func_78());
				unk_0x268BE77F77533D03(func_92());
				unk_0x268BE77F77533D03(func_232());
				unk_0x8744D2E3FC95740E(&(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_321.f_4), 3);
				func_341();
				func_363(2);
			}
			break;
	}
}

char* func_92()
{
	return "anim_casino_b@amb@casino@games@threecardpoker@player";
}

char* func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
		case 5:
		case 8:
		case 9:
		case 12:
		case 13:
			return "sit_exit_left";
		
		default:
	}
	return "sit_exit_left";
}

int func_94()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_402();
	iVar1 = (iVar0 - Local_154.f_32);
	if (iVar1 < 0)
	{
		return 5;
	}
	if (iVar1 > 0)
	{
		return 4;
	}
	return 6;
}

void func_95()
{
	int iVar0;
	struct<9> Var1;
	struct<5> Var2;
	struct<23> Var3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	char* sVar29;
	bool bVar30;
	bool bVar31;
	
	if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 >= 0)
	{
		if (func_225(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2))
		{
			func_224("TCP_ERROR", -1);
			return;
		}
	}
	func_211();
	if (func_408())
	{
		Local_164.f_10 = 1;
	}
	Local_164.f_11 = func_209();
	if ((((((((unk_0x875A214D5EBCA509(2, 202) && !unk_0xA43CD45F18522E3F()) && !func_339()) && !unk_0xB11671B812399BA2()) && !unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), func_92(), "cards_pickup", 3)) && !BitTest(Local_154.f_20, 0)) && !BitTest(Local_154.f_20, 3)) && !Local_154.f_1) && !func_208())
	{
		Local_163.f_4 = joaat("QUIT");
		Local_164.f_2 = joaat("QUIT");
		Local_163.f_22 = joaat("QUIT");
		Local_163.f_7 = func_402();
		Local_163.f_17 = func_207(&uLocal_159, 0, 0);
		Local_163.f_18 = func_408();
		Local_163.f_19 = func_209();
		if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 > -1)
		{
			Local_163.f_9 = Local_111.f_30[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2];
		}
		if ((Local_154.f_797 > 1 || Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 != 0) || Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5 != 0)
		{
			if (Global_262145.f_26827)
			{
				unk_0x5B04C6D6A21F6BDE(&Local_163);
			}
		}
		if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 > 0 && !Local_154.f_2)
		{
			func_206(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3);
		}
		if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5 > 0 && !Local_154.f_6)
		{
			func_206(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5);
		}
		if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4 > 0 && !Local_154.f_3)
		{
			func_206(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4);
		}
		unk_0xA759D3AD1579CBCB(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3));
		unk_0xA759D3AD1579CBCB(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5));
		unk_0xA759D3AD1579CBCB(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4));
		func_379(1);
		unk_0x428C32CC68809A35(1);
		return;
	}
	if (((Global_2765559 == Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 || Global_2694562.f_12) || Global_1950102 == 33) || !func_204())
	{
		Local_163.f_7 = func_402();
		Local_163.f_17 = func_207(&uLocal_159, 0, 0);
		Local_163.f_18 = func_408();
		Local_163.f_19 = func_209();
		if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 > -1)
		{
			Local_163.f_9 = Local_111.f_30[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2];
		}
		if (Global_262145.f_26827)
		{
			unk_0x5B04C6D6A21F6BDE(&Local_163);
		}
		func_379(1);
		unk_0x428C32CC68809A35(1);
		return;
	}
	if (Local_154.f_24 > -1)
	{
		Local_154.f_30 = unk_0x643DC062EE904FCA(Local_154.f_24);
		if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), func_92(), "cards_idle", 3)) && !BitTest(Local_154.f_22, 0)) && !Local_154.f_1)
		{
			if (!unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), func_232(), "idle_cardgames", 3))
			{
				if (Local_154.f_30 != -1 && (unk_0xBD3B265153D3BA2D(Local_154.f_30) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), joaat("blend_out"))))
				{
					Local_154.f_24 = unk_0xBC5D9A293974F095(func_361(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), func_233(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
					unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_154.f_24, func_232(), "idle_cardgames", 2f, -2f, 13, 16, 1148846080, 0);
					unk_0xE7101255AD6F1952(Local_154.f_24);
					Local_154.f_796 = "idle_cardgames";
				}
			}
			else if (Local_154.f_30 != -1 && (unk_0xBD3B265153D3BA2D(Local_154.f_30) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), joaat("blend_out"))))
			{
				Local_154.f_24 = unk_0xBC5D9A293974F095(func_361(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), func_233(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
				unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_154.f_24, func_232(), func_203(0), 2f, -2f, 13, 16, 1148846080, 0);
				unk_0xE7101255AD6F1952(Local_154.f_24);
			}
		}
	}
	if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 >= 0)
	{
		func_201(&(Local_154.f_90));
		if (!BitTest(Local_154.f_20, 0) && !BitTest(Local_154.f_20, 3))
		{
			func_200(unk_0xE934399D6F2C3AC5(0, 202, 1), "TCP_EXIT", &(Local_154.f_90), 0);
			if (((((Local_154.f_797 == 3 && Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 > 0) && !BitTest(Local_154.f_22, 2)) && !BitTest(Local_153[unk_0x259BE71D8A81D4FA() /*9*/], 1)) && !BitTest(Local_154.f_22, 1)) && !BitTest(Local_153[unk_0x259BE71D8A81D4FA() /*9*/], 3))
			{
				func_200(unk_0xE934399D6F2C3AC5(0, 201, 1), "TCP_PLAY_HAND", &(Local_154.f_90), 0);
				func_200(unk_0xE934399D6F2C3AC5(0, 203, 1), "TCP_FOLD_HAND", &(Local_154.f_90), 0);
			}
			if (Local_111.f_576[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2] == 3 && ((Local_154.f_19 >= Local_154.f_28 || Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 != 0) || Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5 != 0))
			{
				if (!BitTest(Local_153[unk_0x259BE71D8A81D4FA() /*9*/], 0) && !BitTest(Local_154.f_22, 0))
				{
					if (Local_154.f_19 >= Local_154.f_17 * 2)
					{
						func_200(unk_0xE934399D6F2C3AC5(0, 201, 1), "TCP_PLACE", &(Local_154.f_90), 0);
					}
					func_200(unk_0xE934399D6F2C3AC5(0, 203, 1), "TCP_DECLINEA", &(Local_154.f_90), 0);
					if (Local_154.f_19 >= Local_154.f_17 * 2)
					{
						if (!BitTest(Local_154.f_22, 8))
						{
							func_200(unk_0xE934399D6F2C3AC5(0, 204, 1), "TCP_BET_MAX", &(Local_154.f_90), 0);
						}
						func_199(2, 7, "TCP_BET_NUM", &(Local_154.f_90));
					}
				}
				else if ((!BitTest(Local_153[unk_0x259BE71D8A81D4FA() /*9*/], 2) && Local_154.f_19 >= (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 + Local_154.f_28)) && !BitTest(Local_154.f_22, 0))
				{
					func_200(unk_0xE934399D6F2C3AC5(0, 201, 1), "TCP_PLACE_PP", &(Local_154.f_90), 0);
					func_200(unk_0xE934399D6F2C3AC5(0, 203, 1), "TCP_DECLINE", &(Local_154.f_90), 0);
					if (!BitTest(Local_154.f_22, 8))
					{
						func_200(unk_0xE934399D6F2C3AC5(0, 204, 1), "TCP_BET_MAX", &(Local_154.f_90), 0);
					}
					func_199(2, 7, "TCP_BET_NUM", &(Local_154.f_90));
				}
			}
		}
		if (BitTest(Local_154.f_20, 0))
		{
			func_200(unk_0xE934399D6F2C3AC5(0, 202, 1), "IB_BACK", &(Local_154.f_90), 0);
			func_199(2, 8, "IB_TAB", &(Local_154.f_90));
		}
		else if (BitTest(Local_154.f_20, 3))
		{
			func_200(unk_0xE934399D6F2C3AC5(0, 202, 1), "IB_BACK", &(Local_154.f_90), 0);
		}
		if (Local_111.f_576[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2] < 12)
		{
			if (Local_111.f_389[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*5*/] > 0)
			{
				func_200(unk_0xE934399D6F2C3AC5(0, 208, 1), "TCP_DLR", &(Local_154.f_90), 0);
			}
			if (Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/] > 0)
			{
				if (BitTest(Local_154.f_22, 4) || BitTest(Local_111.f_20[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2], func_198(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1)))
				{
					func_200(unk_0xE934399D6F2C3AC5(0, 207, 1), "TCP_CARDS", &(Local_154.f_90), 0);
				}
				else if (((((Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 > 0 && Local_154.f_797 == 3) && !BitTest(Local_154.f_22, 2)) && !BitTest(Local_153[unk_0x259BE71D8A81D4FA() /*9*/], 1)) && !BitTest(Local_154.f_22, 1)) && !BitTest(Local_153[unk_0x259BE71D8A81D4FA() /*9*/], 3))
				{
					func_200(unk_0xE934399D6F2C3AC5(0, 207, 1), "TCP_PICK_UP", &(Local_154.f_90), 0);
				}
			}
		}
		if (!BitTest(Local_154.f_20, 0) && !BitTest(Local_154.f_20, 3))
		{
			func_200(unk_0xE934399D6F2C3AC5(2, 210, 1), "TCP_RULESb", &(Local_154.f_90), 0);
			func_200(unk_0xE934399D6F2C3AC5(2, 209, 1), "TCP_HANDSb", &(Local_154.f_90), 0);
		}
		Var1 = { func_197() };
		func_196(&(Local_154.f_90), 1f);
		func_188(&(Local_154.f_89), &Var1, &(Local_154.f_90), func_195(&(Local_154.f_90)));
		func_187(1);
	}
	func_182();
	func_162();
	switch (Local_154.f_797)
	{
		case 0:
			if (Local_111.f_576[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2] == 3)
			{
				if ((Local_154.f_15 > (Local_154.f_19 / 2) || Local_154.f_15 < Local_154.f_17) || Local_154.f_15 > Local_154.f_16)
				{
					Local_154.f_15 = Local_154.f_17;
				}
				if ((((Local_154.f_23 > Local_154.f_19 || Local_154.f_23 > Local_154.f_27) || Local_154.f_23 < Local_154.f_28) || Local_154.f_23 > (Local_154.f_19 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3)) || Local_154.f_23 > Local_154.f_19)
				{
					Local_154.f_23 = Local_154.f_28;
				}
				Var2.f_1 = 3;
				Local_154.f_854 = { Var2 };
				Local_163 = { Var3 };
				Local_163.f_10 = 1;
				Local_163.f_0 = -941885798;
				Local_163.f_11 = func_330(unk_0x259BE71D8A81D4FA());
				if (func_330(unk_0x259BE71D8A81D4FA()))
				{
					Local_163.f_20 = 1983458449;
				}
				else if (func_327())
				{
					Local_163.f_20 = 1334658487;
				}
				else if (func_329(1) && (func_330(func_328()) || func_227(unk_0x259BE71D8A81D4FA())))
				{
					Local_163.f_20 = 980726932;
				}
				else
				{
					Local_163.f_20 = 939907746;
				}
				if (func_419(unk_0x259BE71D8A81D4FA()))
				{
					Local_163.f_1 = 1695074466;
				}
				else if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 == 2 || Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 == 3)
				{
					Local_163.f_1 = 1952785842;
				}
				else
				{
					Local_163.f_1 = joaat("standard");
				}
				func_370(&uLocal_159, 0, 0);
				Local_163.f_3 = Local_111.f_25[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2];
				Local_163.f_2 = Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2;
				func_161(1);
			}
			break;
		
		case 1:
			if ((!func_327() && !(func_329(1) && func_326(func_328()))) || ((!func_330(unk_0x259BE71D8A81D4FA()) && (func_384(Local_154.f_18) == 2 || func_384(Local_154.f_18) == 3)) && !(func_329(1) && func_330(func_328()))))
			{
				if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 > -1)
				{
					Local_163.f_9 = Local_111.f_30[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2];
				}
				Local_164.f_2 = 939907746;
				Local_163.f_4 = 939907746;
				Local_163.f_7 = func_402();
				Local_163.f_17 = func_207(&uLocal_159, 0, 0);
				Local_163.f_18 = func_408();
				Local_163.f_19 = func_209();
				if (Global_262145.f_26827)
				{
					unk_0x5B04C6D6A21F6BDE(&Local_163);
				}
				func_379(1);
				unk_0x428C32CC68809A35(1);
				if (Local_154.f_25 == 1)
				{
					func_224("IT_MEMBOc", -1);
				}
				else if (Local_154.f_25 == 2)
				{
					func_224("IT_MEMBOa", -1);
				}
				else if (Local_154.f_25 == 3)
				{
					func_224("IT_MEMBOb", -1);
				}
				return;
			}
			if ((((Local_154.f_19 < Local_154.f_28 && Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 == 0) && Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5 == 0) && Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4 == 0) && !Local_154.f_1)
			{
				Local_163.f_4 = -1275559872;
				Local_164.f_2 = -1275559872;
				Local_163.f_7 = func_402();
				Local_163.f_17 = func_207(&uLocal_159, 0, 0);
				Local_163.f_18 = func_408();
				Local_163.f_19 = func_209();
				if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 > -1)
				{
					Local_163.f_9 = Local_111.f_30[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2];
				}
				if (Global_262145.f_26827)
				{
					unk_0x5B04C6D6A21F6BDE(&Local_163);
				}
				func_379(1);
				unk_0x428C32CC68809A35(1);
				if (func_419(unk_0x259BE71D8A81D4FA()))
				{
					if (Local_154.f_19 <= 0)
					{
						func_224("CAS_MG_NOCHIPS7", -1);
					}
					else
					{
						func_224("CAS_MG_LOWCHIPS7", -1);
					}
				}
				else if (Local_154.f_19 <= 0)
				{
					func_224("CAS_MG_NOCHIPS3", -1);
				}
				else
				{
					func_224("CAS_MG_LOWCHIPS3", -1);
				}
				return;
			}
			if (func_335())
			{
				switch (func_331())
				{
					case 0:
						Local_163.f_4 = 1982714739;
						break;
					
					case 1:
						Local_163.f_4 = -633175758;
						break;
					
					case 2:
						Local_163.f_4 = -1625999354;
						break;
				}
				switch (func_331())
				{
					case 0:
						Local_164.f_2 = 1982714739;
						break;
					
					case 1:
						Local_164.f_2 = -633175758;
						break;
					
					case 2:
						Local_164.f_2 = -1625999354;
						break;
				}
				Local_163.f_7 = func_402();
				Local_163.f_17 = func_207(&uLocal_159, 0, 0);
				Local_163.f_18 = func_408();
				Local_163.f_19 = func_209();
				if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 > -1)
				{
					Local_163.f_9 = Local_111.f_30[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2];
				}
				if (Global_262145.f_26827)
				{
					unk_0x5B04C6D6A21F6BDE(&Local_163);
				}
				func_379(1);
				unk_0x428C32CC68809A35(1);
				if (func_331() == 2)
				{
					func_224("CAS_MG_CTIME", -1);
				}
				else
				{
					func_224("CAS_MG_CBAN", -1);
				}
				return;
			}
			if (((!BitTest(Local_153[unk_0x259BE71D8A81D4FA() /*9*/], 0) && !BitTest(Local_153[unk_0x259BE71D8A81D4FA() /*9*/], 2)) && !BitTest(Local_154.f_22, 0)) && (!func_354() || func_350()))
			{
				Local_163.f_7 = func_402();
				Local_163.f_17 = func_207(&uLocal_159, 0, 0);
				Local_163.f_18 = func_408();
				Local_163.f_19 = func_209();
				if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 > -1)
				{
					Local_163.f_9 = Local_111.f_30[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2];
				}
				if (Global_262145.f_26827)
				{
					unk_0x5B04C6D6A21F6BDE(&Local_163);
				}
				func_379(1);
				unk_0x428C32CC68809A35(1);
				return;
			}
			if (!BitTest(Local_153[unk_0x259BE71D8A81D4FA() /*9*/], 0))
			{
				if (!BitTest(Local_154.f_22, 0))
				{
					if ((((((!BitTest(Local_154.f_29, 1) && !unk_0xA43CD45F18522E3F()) && !unk_0x875A214D5EBCA509(2, 204)) && !func_339()) && !unk_0xB11671B812399BA2()) && !BitTest(Local_154.f_20, 0)) && !BitTest(Local_154.f_20, 3))
					{
						bVar5 = unk_0x6D05C5731A838CB3(2, 188);
						bVar6 = unk_0x6D05C5731A838CB3(2, 187);
						if (bVar6 || ((((((bVar5 && !unk_0x875A214D5EBCA509(2, 204)) && !unk_0xA43CD45F18522E3F()) && !func_339()) && !unk_0xB11671B812399BA2()) && !BitTest(Local_154.f_20, 0)) && !BitTest(Local_154.f_20, 3)))
						{
							func_73(&(Local_154.f_790), 0, 0);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_29), true);
						}
					}
					else if (func_71(&(Local_154.f_790), 100, 0))
					{
						func_69(&(Local_154.f_790));
						unk_0x8744D2E3FC95740E(&(Local_154.f_29), 1);
					}
					if ((((((((unk_0x875A214D5EBCA509(2, 204) && !bVar6) && !bVar5) && !unk_0xA43CD45F18522E3F()) && !func_339()) && !unk_0xB11671B812399BA2()) && !BitTest(Local_154.f_20, 0)) && !BitTest(Local_154.f_20, 3)) && !BitTest(Local_154.f_22, 8))
					{
						unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", 1);
						bVar4 = true;
					}
					if (bVar4)
					{
						while (bVar4)
						{
							if (Local_154.f_15 >= 10000)
							{
								iVar7 = 5000;
							}
							else if (Local_154.f_15 >= 5000)
							{
								iVar7 = 1000;
							}
							else if (Local_154.f_15 >= 500)
							{
								iVar7 = 500;
							}
							else if (Local_154.f_15 >= 100)
							{
								iVar7 = 50;
							}
							else
							{
								iVar7 = 10;
							}
							if (Local_154.f_15 > (Local_154.f_19 / 2))
							{
								Local_154.f_15 = (Local_154.f_15 - iVar7);
							}
							if (Local_154.f_15 < Local_154.f_17)
							{
								Local_154.f_15 = Local_154.f_17;
							}
							if (Local_154.f_15 > Local_154.f_16)
							{
								Local_154.f_15 = Local_154.f_16;
							}
							Local_154.f_15 = (Local_154.f_15 + iVar7);
							if (Local_154.f_15 > (Local_154.f_19 / 2))
							{
								bVar4 = false;
								Local_154.f_15 = (Local_154.f_15 - iVar7);
							}
							if (Local_154.f_15 < Local_154.f_17)
							{
								Local_154.f_15 = Local_154.f_17;
							}
							if (Local_154.f_15 > Local_154.f_16)
							{
								bVar4 = false;
								Local_154.f_15 = Local_154.f_16;
							}
						}
					}
					else
					{
						if (Local_154.f_15 >= 10000)
						{
							iVar7 = 5000;
						}
						else if (Local_154.f_15 >= 5000)
						{
							iVar7 = 1000;
						}
						else if (Local_154.f_15 >= 500)
						{
							iVar7 = 500;
						}
						else if (Local_154.f_15 >= 100)
						{
							iVar7 = 50;
						}
						else
						{
							iVar7 = 10;
						}
						if (Local_154.f_15 > (Local_154.f_19 / 2))
						{
							Local_154.f_15 = (Local_154.f_15 - iVar7);
						}
						if (Local_154.f_15 < Local_154.f_17)
						{
							Local_154.f_15 = Local_154.f_17;
						}
						if (Local_154.f_15 > Local_154.f_16)
						{
							Local_154.f_15 = Local_154.f_16;
						}
						iVar8 = Local_154.f_15;
						if (bVar5)
						{
							Local_154.f_15 = (Local_154.f_15 + iVar7);
							if (Local_154.f_15 > (Local_154.f_19 / 2))
							{
								Local_154.f_15 = (Local_154.f_15 - iVar7);
							}
							if (Local_154.f_15 < Local_154.f_17)
							{
								Local_154.f_15 = Local_154.f_17;
							}
							if (Local_154.f_15 > Local_154.f_16)
							{
								Local_154.f_15 = Local_154.f_16;
							}
							if (Local_154.f_15 == iVar8)
							{
								if (unk_0x875A214D5EBCA509(2, 188) || !BitTest(Local_154.f_22, 10))
								{
									unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 1);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_22), 10);
								}
							}
							else
							{
								unk_0x8744D2E3FC95740E(&(Local_154.f_22), 10);
								unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", 1);
							}
						}
						if (bVar6)
						{
							if (Local_154.f_15 <= 100)
							{
								iVar7 = 10;
							}
							else if (Local_154.f_15 <= 500)
							{
								iVar7 = 50;
							}
							else if (Local_154.f_15 <= 5000)
							{
								iVar7 = 500;
							}
							else if (Local_154.f_15 <= 10000)
							{
								iVar7 = 1000;
							}
							else
							{
								iVar7 = 5000;
							}
							Local_154.f_15 = (Local_154.f_15 - iVar7);
							if (Local_154.f_15 < Local_154.f_17)
							{
								Local_154.f_15 = Local_154.f_17;
							}
							if (Local_154.f_15 == iVar8)
							{
								if (unk_0x875A214D5EBCA509(2, 187) || !BitTest(Local_154.f_22, 10))
								{
									unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 1);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_22), 10);
								}
							}
							else
							{
								unk_0x8744D2E3FC95740E(&(Local_154.f_22), 10);
								unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_BET_DOWN", "dlc_vw_table_games_frontend_sounds", 1);
							}
						}
					}
					if ((Local_154.f_15 == Local_154.f_16 || (Local_154.f_15 + iVar7) > Local_154.f_16) || (Local_154.f_15 + iVar7) > (Local_154.f_19 / 2))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_22), 8);
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(Local_154.f_22), 8);
					}
					unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_29), false);
					iVar0 = (30 - (func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
					if (iVar0 > 0 || !func_72(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/])))
					{
						if ((((!unk_0xA43CD45F18522E3F() && !func_339()) && !unk_0xB11671B812399BA2()) && !BitTest(Local_154.f_20, 0)) && !BitTest(Local_154.f_20, 3))
						{
							if (((unk_0x875A214D5EBCA509(2, 201) && !unk_0x6D05C5731A838CB3(2, 203)) && Local_154.f_15 >= Local_154.f_17) && Local_154.f_19 >= Local_154.f_17 * 2)
							{
								unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_22), false);
								Local_154.f_24 = unk_0xBC5D9A293974F095(func_361(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), func_233(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
								if (func_160(Local_154.f_15))
								{
									unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_154.f_24, func_92(), "bet_ante_large", 2f, -2f, 13, 16, 1148846080, 0);
								}
								else
								{
									unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_154.f_24, func_92(), "bet_ante", 2f, -2f, 13, 16, 1148846080, 0);
								}
								unk_0xE7101255AD6F1952(Local_154.f_24);
							}
							else if ((unk_0x875A214D5EBCA509(2, 203) && !unk_0x6D05C5731A838CB3(2, 201)) || Local_154.f_19 < Local_154.f_28)
							{
								Local_154.f_19 = func_402();
								if ((((Local_154.f_23 > Local_154.f_19 || Local_154.f_23 > Local_154.f_27) || Local_154.f_23 < Local_154.f_28) || Local_154.f_23 > (Local_154.f_19 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3)) || Local_154.f_23 > Local_154.f_19)
								{
									Local_154.f_23 = Local_154.f_28;
								}
								unk_0x0B0C9A0F9AAEB7F0(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/]), false);
							}
						}
						if (func_72(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/])) && (30000 - func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
						{
							if (func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
							{
								func_159((30000 - func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_159((30000 - func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (Local_154.f_19 < Local_154.f_17 * 2)
						{
							if (((!func_337("TCP_LOW") && !bLocal_172) && !bLocal_173) && !bLocal_168)
							{
								func_158("TCP_LOW");
							}
						}
						else if (((!func_337("TCP_PLACE_ANTE") && !bLocal_172) && !bLocal_173) && !bLocal_168)
						{
							func_158("TCP_PLACE_ANTE");
						}
					}
				}
				else
				{
					if (((!func_337("TCP_PLACE_ANTE") && !bLocal_172) && !bLocal_173) && !bLocal_168)
					{
						func_158("TCP_PLACE_ANTE");
					}
					if (func_72(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/])) && (30000 - func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							func_159((30000 - func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_159((30000 - func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
					if (Local_154.f_30 != -1 && !BitTest(Local_153[unk_0x259BE71D8A81D4FA() /*9*/], 0))
					{
						if ((unk_0xBD3B265153D3BA2D(Local_154.f_30) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), joaat("blend_out"))) && Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 > 0)
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/]), false);
							unk_0x8744D2E3FC95740E(&(Local_154.f_22), 0);
						}
						else if (unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), 1503712844) && Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 <= 0)
						{
							Local_154.f_1 = 1;
						}
						if (Local_154.f_1)
						{
							if (func_155(Local_154.f_15, &(Local_154.f_14), 2, Local_154.f_0))
							{
								if (Local_154.f_14 == 3)
								{
									Local_154.f_1 = 0;
									unk_0x8744D2E3FC95740E(&(Local_154.f_22), 0);
									Local_154.f_14 = 0;
								}
								else
								{
									Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 = Local_154.f_15;
									unk_0xFAF127E6FF05E72E(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3));
									if (Local_154.f_15 >= 10000)
									{
										iVar9 = 5000;
									}
									else if (Local_154.f_15 >= 5000)
									{
										iVar9 = 1000;
									}
									else if (Local_154.f_15 >= 500)
									{
										iVar9 = 500;
									}
									else if (Local_154.f_15 >= 100)
									{
										iVar9 = 50;
									}
									else
									{
										iVar9 = 10;
									}
									if ((Local_154.f_15 == Local_154.f_16 || (Local_154.f_15 + iVar9) > Local_154.f_16) || (Local_154.f_15 + iVar9) > (Local_154.f_19 / 2))
									{
										Local_163.f_5 = 1;
									}
									Local_163.f_6 = (Local_163.f_6 - Local_154.f_15);
									Local_164.f_3 = (Local_164.f_3 - Local_154.f_15);
									Local_164.f_7 = (Local_164.f_7 + Local_154.f_15);
									Local_163.f_12 = (Local_163.f_12 + Local_154.f_15);
									Local_154.f_19 = func_402();
									if ((((Local_154.f_23 > Local_154.f_19 || Local_154.f_23 > Local_154.f_27) || Local_154.f_23 < Local_154.f_28) || Local_154.f_23 > (Local_154.f_19 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3)) || Local_154.f_23 > Local_154.f_19)
									{
										Local_154.f_23 = Local_154.f_28;
									}
									Local_154.f_1 = 0;
								}
							}
						}
					}
				}
				func_151(Local_154.f_15, "TCP_BET2", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
			}
			else if (!BitTest(Local_153[unk_0x259BE71D8A81D4FA() /*9*/], 2))
			{
				if (!BitTest(Local_154.f_22, 0))
				{
					if ((((((!BitTest(Local_154.f_29, 1) && !unk_0xA43CD45F18522E3F()) && !func_339()) && !unk_0xB11671B812399BA2()) && !BitTest(Local_154.f_20, 0)) && !BitTest(Local_154.f_20, 3)) && !unk_0x875A214D5EBCA509(2, 204))
					{
						bVar10 = unk_0x6D05C5731A838CB3(2, 188);
						bVar11 = unk_0x6D05C5731A838CB3(2, 187);
						if (bVar11 || ((((((bVar10 && !unk_0x875A214D5EBCA509(2, 204)) && !unk_0xA43CD45F18522E3F()) && !func_339()) && !unk_0xB11671B812399BA2()) && !BitTest(Local_154.f_20, 0)) && !BitTest(Local_154.f_20, 3)))
						{
							func_73(&(Local_154.f_790), 0, 0);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_29), true);
						}
					}
					else if (func_71(&(Local_154.f_790), 100, 0))
					{
						func_69(&(Local_154.f_790));
						unk_0x8744D2E3FC95740E(&(Local_154.f_29), 1);
					}
					if ((((((((unk_0x875A214D5EBCA509(2, 204) && !bVar11) && !bVar10) && !unk_0xA43CD45F18522E3F()) && !func_339()) && !unk_0xB11671B812399BA2()) && !BitTest(Local_154.f_20, 0)) && !BitTest(Local_154.f_20, 3)) && !BitTest(Local_154.f_22, 8))
					{
						unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", 1);
						bVar4 = true;
					}
					if (bVar4)
					{
						while (bVar4)
						{
							if (Local_154.f_23 >= 10000)
							{
								iVar12 = 5000;
							}
							else if (Local_154.f_23 >= 5000)
							{
								iVar12 = 1000;
							}
							else if (Local_154.f_23 >= 500)
							{
								iVar12 = 500;
							}
							else if (Local_154.f_23 >= 100)
							{
								iVar12 = 50;
							}
							else
							{
								iVar12 = 10;
							}
							if (Local_154.f_23 > Local_154.f_19)
							{
								Local_154.f_23 = (Local_154.f_23 - iVar12);
							}
							if (Local_154.f_23 > Local_154.f_27)
							{
								Local_154.f_23 = Local_154.f_27;
							}
							if (Local_154.f_23 < Local_154.f_28)
							{
								Local_154.f_23 = Local_154.f_28;
							}
							if (Local_154.f_23 > (Local_154.f_19 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3))
							{
								Local_154.f_23 = (Local_154.f_23 - iVar12);
							}
							Local_154.f_23 = (Local_154.f_23 + iVar12);
							if (Local_154.f_23 > Local_154.f_19)
							{
								bVar4 = false;
								Local_154.f_23 = (Local_154.f_23 - iVar12);
							}
							if (Local_154.f_23 > Local_154.f_27)
							{
								bVar4 = false;
								Local_154.f_23 = Local_154.f_27;
							}
							if (Local_154.f_23 < Local_154.f_28)
							{
								Local_154.f_23 = Local_154.f_28;
							}
							if (Local_154.f_23 > (Local_154.f_19 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3))
							{
								bVar4 = false;
								Local_154.f_23 = (Local_154.f_23 - iVar12);
							}
						}
					}
					else
					{
						if (Local_154.f_23 >= 10000)
						{
							iVar12 = 5000;
						}
						else if (Local_154.f_23 >= 5000)
						{
							iVar12 = 1000;
						}
						else if (Local_154.f_23 >= 500)
						{
							iVar12 = 500;
						}
						else if (Local_154.f_23 >= 100)
						{
							iVar12 = 50;
						}
						else
						{
							iVar12 = 10;
						}
						if (Local_154.f_23 > Local_154.f_19)
						{
							Local_154.f_23 = (Local_154.f_23 - iVar12);
						}
						if (Local_154.f_23 > Local_154.f_27)
						{
							Local_154.f_23 = Local_154.f_27;
						}
						if (Local_154.f_23 < Local_154.f_28)
						{
							Local_154.f_23 = Local_154.f_28;
						}
						if (Local_154.f_23 > (Local_154.f_19 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3))
						{
							Local_154.f_23 = (Local_154.f_23 - iVar12);
						}
						iVar13 = Local_154.f_23;
						if (bVar10)
						{
							Local_154.f_23 = (Local_154.f_23 + iVar12);
							if (Local_154.f_23 > Local_154.f_19)
							{
								Local_154.f_23 = (Local_154.f_23 - iVar12);
							}
							if (Local_154.f_23 > Local_154.f_27)
							{
								Local_154.f_23 = Local_154.f_27;
							}
							if (Local_154.f_23 < Local_154.f_28)
							{
								Local_154.f_23 = Local_154.f_28;
							}
							if (Local_154.f_23 > (Local_154.f_19 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3))
							{
								Local_154.f_23 = (Local_154.f_23 - iVar12);
							}
							if (Local_154.f_23 == iVar13)
							{
								if (unk_0x875A214D5EBCA509(2, 188) || !BitTest(Local_154.f_22, 10))
								{
									unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 1);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_22), 10);
								}
							}
							else
							{
								unk_0x8744D2E3FC95740E(&(Local_154.f_22), 10);
								unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", 1);
							}
						}
						if (bVar11)
						{
							if (Local_154.f_23 <= 100)
							{
								iVar12 = 10;
							}
							else if (Local_154.f_23 <= 500)
							{
								iVar12 = 50;
							}
							else if (Local_154.f_23 <= 5000)
							{
								iVar12 = 500;
							}
							else if (Local_154.f_23 <= 10000)
							{
								iVar12 = 1000;
							}
							else
							{
								iVar12 = 5000;
							}
							Local_154.f_23 = (Local_154.f_23 - iVar12);
							if (Local_154.f_23 < Local_154.f_28)
							{
								Local_154.f_23 = Local_154.f_28;
							}
							if (Local_154.f_23 == iVar13)
							{
								if (unk_0x875A214D5EBCA509(2, 187) || !BitTest(Local_154.f_22, 10))
								{
									unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 1);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_22), 10);
								}
							}
							else
							{
								unk_0x8744D2E3FC95740E(&(Local_154.f_22), 10);
								unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_BET_DOWN", "dlc_vw_table_games_frontend_sounds", 1);
							}
						}
					}
					if ((Local_154.f_23 == Local_154.f_27 || (Local_154.f_23 + iVar12) > Local_154.f_27) || (Local_154.f_23 + iVar12) > (Local_154.f_19 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_22), 8);
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(Local_154.f_22), 8);
					}
					unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_29), false);
					iVar0 = (30 - (func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
					if (iVar0 > 0 || !func_72(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/])))
					{
						if ((((!unk_0xA43CD45F18522E3F() && !func_339()) && !unk_0xB11671B812399BA2()) && !BitTest(Local_154.f_20, 0)) && !BitTest(Local_154.f_20, 3))
						{
							if (((((unk_0x875A214D5EBCA509(2, 201) && !unk_0x6D05C5731A838CB3(2, 203)) && !unk_0x6D05C5731A838CB3(2, 204)) && Local_154.f_23 >= Local_154.f_28) && Local_154.f_23 <= Local_154.f_19) && Local_154.f_19 >= (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 + Local_154.f_28))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_22), false);
								Local_154.f_24 = unk_0xBC5D9A293974F095(func_361(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), func_233(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
								if (func_160(Local_154.f_23))
								{
									unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_154.f_24, func_92(), "bet_plus_large", 2f, -2f, 13, 16, 1148846080, 0);
								}
								else
								{
									unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_154.f_24, func_92(), "bet_plus", 2f, -2f, 13, 16, 1148846080, 0);
								}
								unk_0xE7101255AD6F1952(Local_154.f_24);
							}
							else if (((unk_0x875A214D5EBCA509(2, 203) && !unk_0x6D05C5731A838CB3(2, 201)) && !unk_0x6D05C5731A838CB3(2, 204)) || Local_154.f_19 < (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 + Local_154.f_28))
							{
								if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 > 0)
								{
									unk_0x0B0C9A0F9AAEB7F0(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/]), 2);
								}
								else
								{
									Local_163.f_4 = joaat("QUIT");
									Local_164.f_2 = joaat("QUIT");
									Local_163.f_7 = func_402();
									Local_163.f_17 = func_207(&uLocal_159, 0, 0);
									Local_163.f_18 = func_408();
									Local_163.f_19 = func_209();
									if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 > -1)
									{
										Local_163.f_9 = Local_111.f_30[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2];
									}
									if (Global_262145.f_26827)
									{
										unk_0x5B04C6D6A21F6BDE(&Local_163);
									}
									func_379(1);
									unk_0x428C32CC68809A35(1);
									return;
								}
							}
						}
						if (func_72(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/])) && (30000 - func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
						{
							if (func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
							{
								func_159((30000 - func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_159((30000 - func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (((!func_337("TCP_PLACE_PAIR") && !bLocal_172) && !bLocal_173) && !bLocal_168)
						{
							func_158("TCP_PLACE_PAIR");
						}
					}
				}
				else
				{
					if (((!func_337("TCP_PLACE_PAIR") && !bLocal_172) && !bLocal_173) && !bLocal_168)
					{
						func_158("TCP_PLACE_PAIR");
					}
					if (func_72(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/])) && (30000 - func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							func_159((30000 - func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_159((30000 - func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
					if (Local_154.f_30 != -1 && !BitTest(Local_153[unk_0x259BE71D8A81D4FA() /*9*/], 2))
					{
						if ((unk_0xBD3B265153D3BA2D(Local_154.f_30) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), joaat("blend_out"))) && Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5 > 0)
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/]), 2);
							unk_0x8744D2E3FC95740E(&(Local_154.f_22), 0);
						}
						else if (unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), 1503712844) && Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5 <= 0)
						{
							Local_154.f_1 = 1;
						}
						if (Local_154.f_1)
						{
							if (func_155(Local_154.f_23, &(Local_154.f_14), 2, Local_154.f_0))
							{
								if (Local_154.f_14 == 3)
								{
									Local_154.f_1 = 0;
									unk_0x8744D2E3FC95740E(&(Local_154.f_22), 0);
									Local_154.f_14 = 0;
								}
								else
								{
									Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5 = Local_154.f_23;
									unk_0xFAF127E6FF05E72E(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5));
									if (Local_154.f_23 >= 10000)
									{
										iVar14 = 5000;
									}
									else if (Local_154.f_23 >= 5000)
									{
										iVar14 = 1000;
									}
									else if (Local_154.f_23 >= 500)
									{
										iVar14 = 500;
									}
									else if (Local_154.f_23 >= 100)
									{
										iVar14 = 50;
									}
									else
									{
										iVar14 = 10;
									}
									if ((Local_154.f_23 == Local_154.f_27 || (Local_154.f_23 + iVar14) > Local_154.f_27) || (Local_154.f_23 + iVar14) > (Local_154.f_19 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3))
									{
										Local_163.f_5 = 1;
									}
									Local_163.f_6 = (Local_163.f_6 - Local_154.f_23);
									Local_164.f_3 = (Local_164.f_3 - Local_154.f_23);
									Local_164.f_8 = (Local_164.f_8 + Local_154.f_23);
									Local_163.f_13 = (Local_163.f_13 + Local_154.f_23);
									Local_154.f_19 = func_402();
									Local_154.f_1 = 0;
								}
							}
						}
					}
				}
				func_151(Local_154.f_23, "TCP_BET3", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				bVar15 = true;
				iVar16 = 0;
				while (iVar16 < 4)
				{
					iVar17 = Local_111.f_117[(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4 + iVar16)];
					if (iVar17 != -1)
					{
						if (!BitTest(Local_153[iVar17 /*9*/], 2))
						{
							bVar15 = false;
						}
					}
					iVar16++;
				}
				if ((((!func_337("TCP_WAIT") && !bVar15) && !bLocal_172) && !bLocal_173) && !bLocal_168)
				{
					func_158("TCP_WAIT");
				}
				if (func_72(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/])) && (30000 - func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
				{
					if (func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
					{
						func_159((30000 - func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						func_159((30000 - func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					}
				}
			}
			if ((Local_111.f_576[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2] > 3 && !BitTest(Local_154.f_22, 0)) && !Local_154.f_1)
			{
				if (BitTest(Local_154.f_29, 0))
				{
					unk_0x428C32CC68809A35(1);
					Local_164.f_12++;
					if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 <= 0 && Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5 <= 0)
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/]), 5);
					}
					func_161(2);
				}
				else
				{
					bVar18 = true;
					iVar19 = 0;
					while (iVar19 < 4)
					{
						iVar20 = Local_111.f_117[(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4 + iVar19)];
						if (iVar20 != -1)
						{
							if (!BitTest(Local_153[iVar20 /*9*/], 2))
							{
								bVar18 = false;
							}
						}
						iVar19++;
					}
					if ((((!func_337("TCP_WAIT") && !bVar18) && !bLocal_172) && !bLocal_173) && !bLocal_168)
					{
						func_158("TCP_WAIT");
					}
					if (func_72(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/])) && (30000 - func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							func_159((30000 - func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_159((30000 - func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
				}
			}
			break;
		
		case 2:
			if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 >= 0)
			{
				if (Local_111.f_389[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*5*/] == 3)
				{
					if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 > 0)
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_22), 6);
					}
					unk_0x8744D2E3FC95740E(&(Local_154.f_22), 0);
					func_161(3);
				}
			}
			break;
		
		case 3:
			if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 <= 0 && Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5 <= 0)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/]), 3);
				if (!BitTest(Local_154.f_22, 4))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/]), 4);
				}
				func_161(4);
				return;
			}
			if ((unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 0, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 1, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))])) && unk_0x93BF17E19A9F0E9B(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 2, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]))
			{
				if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 0, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]))
				{
					unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 0, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]);
					bVar21 = true;
				}
				if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 1, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]))
				{
					unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 1, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]);
					bVar21 = true;
				}
				if (!unk_0xEADBDBE0422CF7E6(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 2, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]))
				{
					unk_0x460D2A8B2C7DC7D4(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 2, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]);
					bVar21 = true;
				}
				if (bVar21)
				{
					return;
				}
				if ((((((!BitTest(Local_154.f_22, 0) && !BitTest(Local_154.f_22, 4)) && !BitTest(Local_154.f_22, 2)) && !BitTest(Local_154.f_22, 1)) && !BitTest(Local_153[unk_0x259BE71D8A81D4FA() /*9*/], 1)) && !BitTest(Local_153[unk_0x259BE71D8A81D4FA() /*9*/], 3)) && Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 > 0)
				{
					if ((!unk_0xA43CD45F18522E3F() && !func_339()) && !unk_0xB11671B812399BA2())
					{
						if ((unk_0x875A214D5EBCA509(2, 207) && !unk_0x6D05C5731A838CB3(2, 203)) && !unk_0x6D05C5731A838CB3(2, 201))
						{
							Local_154.f_24 = unk_0xBC5D9A293974F095(func_361(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), func_233(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_154.f_24, func_92(), "cards_pickup", 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 0, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]), Local_154.f_24, func_92(), "cards_pickup_card_a", 1000f, -1000f, 13);
							unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 1, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]), Local_154.f_24, func_92(), "cards_pickup_card_b", 1000f, -1000f, 13);
							unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 2, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]), Local_154.f_24, func_92(), "cards_pickup_card_c", 1000f, -1000f, 13);
							unk_0xE7101255AD6F1952(Local_154.f_24);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_22), 7);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_22), false);
						}
					}
				}
				if (!BitTest(Local_154.f_22, 0))
				{
					if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 > 0)
					{
						iVar0 = (30 - (func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
						if (iVar0 > 0)
						{
							if (func_72(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/])) && (30000 - func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
							{
								if (func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
								{
									func_159((30000 - func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
								}
								else
								{
									func_159((30000 - func_207(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
							if (((!func_337("TCP_PLACE_PLAY") && !bLocal_172) && !bLocal_173) && !bLocal_168)
							{
								func_158("TCP_PLACE_PLAY");
							}
							if ((((!unk_0xA43CD45F18522E3F() && !func_339()) && !unk_0xB11671B812399BA2()) && !BitTest(Local_154.f_20, 0)) && !BitTest(Local_154.f_20, 3))
							{
								if ((unk_0x875A214D5EBCA509(2, 201) && !unk_0x6D05C5731A838CB3(2, 203)) && (!unk_0x6D05C5731A838CB3(2, 207) || BitTest(Local_154.f_22, 4)))
								{
									if (BitTest(Local_154.f_22, 4))
									{
										Local_154.f_24 = unk_0xBC5D9A293974F095(func_361(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), func_233(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
										unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_154.f_24, func_92(), "cards_play", 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 0, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]), Local_154.f_24, func_92(), "cards_play_card_a", 1000f, -1000f, 13);
										unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 1, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]), Local_154.f_24, func_92(), "cards_play_card_b", 1000f, -1000f, 13);
										unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 2, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]), Local_154.f_24, func_92(), "cards_play_card_c", 1000f, -1000f, 13);
										unk_0xE7101255AD6F1952(Local_154.f_24);
									}
									unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_22), false);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_22), 2);
								}
								else if ((unk_0x875A214D5EBCA509(2, 203) && !unk_0x6D05C5731A838CB3(2, 201)) && (!unk_0x6D05C5731A838CB3(2, 207) || BitTest(Local_154.f_22, 4)))
								{
									if (BitTest(Local_154.f_22, 4))
									{
										Local_154.f_24 = unk_0xBC5D9A293974F095(func_361(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), func_233(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
										unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_154.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 0, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]), Local_154.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
										unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 1, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]), Local_154.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
										unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 2, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]), Local_154.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
										unk_0xE7101255AD6F1952(Local_154.f_24);
									}
									unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_22), false);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_22), true);
								}
							}
						}
						else if (func_72(&(Local_111.f_150[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*2*/])))
						{
							if (BitTest(Local_154.f_22, 4))
							{
								Local_154.f_24 = unk_0xBC5D9A293974F095(func_361(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), func_233(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_154.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 0, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]), Local_154.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
								unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 1, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]), Local_154.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
								unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 2, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]), Local_154.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
								unk_0xE7101255AD6F1952(Local_154.f_24);
							}
							unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_22), false);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_22), true);
						}
					}
					else
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/]), 3);
						if (!BitTest(Local_154.f_22, 4))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/]), 4);
						}
						func_161(4);
						return;
					}
				}
				else if (BitTest(Local_154.f_22, 2))
				{
					if (!BitTest(Local_154.f_22, 3))
					{
						if ((Local_154.f_30 != -1 && (unk_0xBD3B265153D3BA2D(Local_154.f_30) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), joaat("blend_out")))) || !BitTest(Local_154.f_22, 4))
						{
							Local_154.f_24 = unk_0xBC5D9A293974F095(func_361(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), func_233(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
							if (func_160(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3))
							{
								unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_154.f_24, func_92(), "cards_bet_large", 2f, -2f, 13, 16, 1148846080, 0);
							}
							else
							{
								unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_154.f_24, func_92(), "cards_bet", 2f, -2f, 13, 16, 1148846080, 0);
							}
							unk_0xE7101255AD6F1952(Local_154.f_24);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_22), 3);
						}
					}
					else if (Local_154.f_30 != -1)
					{
						if ((unk_0xBD3B265153D3BA2D(Local_154.f_30) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), joaat("blend_out"))) && Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4 > 0)
						{
							Local_154.f_796 = "idle_cardgames";
							Local_154.f_24 = unk_0xBC5D9A293974F095(func_361(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), func_233(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_154.f_24, func_232(), Local_154.f_796, 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xE7101255AD6F1952(Local_154.f_24);
							unk_0x8744D2E3FC95740E(&(Local_154.f_22), 0);
							unk_0x8744D2E3FC95740E(&(Local_154.f_22), 1);
							unk_0x8744D2E3FC95740E(&(Local_154.f_22), 2);
							unk_0x8744D2E3FC95740E(&(Local_154.f_22), 3);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/]), true);
							if (!BitTest(Local_154.f_22, 4))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/]), 4);
							}
							func_161(4);
						}
						else if (unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), 1503712844) && Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4 <= 0)
						{
							Local_154.f_1 = 1;
						}
						if (Local_154.f_1)
						{
							if (func_155(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3, &(Local_154.f_14), 2, Local_154.f_0))
							{
								if (Local_154.f_14 == 3)
								{
									Local_154.f_1 = 0;
									unk_0x8744D2E3FC95740E(&(Local_154.f_22), 0);
									unk_0x8744D2E3FC95740E(&(Local_154.f_22), 1);
									unk_0x8744D2E3FC95740E(&(Local_154.f_22), 2);
									unk_0x8744D2E3FC95740E(&(Local_154.f_22), 3);
									if (BitTest(Local_154.f_22, 4))
									{
										Local_154.f_24 = unk_0xBC5D9A293974F095(func_361(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), func_233(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), 2, 0, 1, 1065353216, 0, 1065353216);
										unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_154.f_24, func_92(), "cards_idle", 1000f, -1000f, 13, 16, 1148846080, 0);
										unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 0, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]), Local_154.f_24, func_92(), "cards_idle_card_a", 1000f, -1000f, 13);
										unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 1, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]), Local_154.f_24, func_92(), "cards_idle_card_b", 1000f, -1000f, 13);
										unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 2, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]), Local_154.f_24, func_92(), "cards_idle_card_c", 1000f, -1000f, 13);
										unk_0xE7101255AD6F1952(Local_154.f_24);
									}
									Local_154.f_14 = 0;
								}
								else
								{
									Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4 = Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3;
									unk_0xFAF127E6FF05E72E(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4));
									Local_163.f_6 = (Local_163.f_6 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3);
									Local_164.f_3 = (Local_164.f_3 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3);
									Local_154.f_19 = func_402();
									Local_154.f_1 = 0;
								}
							}
						}
					}
				}
				else if (BitTest(Local_154.f_22, 1))
				{
					if ((Local_154.f_30 != -1 && (unk_0xBD3B265153D3BA2D(Local_154.f_30) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), joaat("blend_out")))) || !BitTest(Local_154.f_22, 4))
					{
						Local_154.f_796 = "idle_cardgames";
						Local_154.f_24 = unk_0xBC5D9A293974F095(func_361(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), func_233(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
						unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_154.f_24, func_232(), Local_154.f_796, 2f, -2f, 13, 16, 1148846080, 0);
						unk_0xE7101255AD6F1952(Local_154.f_24);
						unk_0x8744D2E3FC95740E(&(Local_154.f_22), 0);
						unk_0x8744D2E3FC95740E(&(Local_154.f_22), 1);
						unk_0x8744D2E3FC95740E(&(Local_154.f_22), 2);
						unk_0x8744D2E3FC95740E(&(Local_154.f_22), 3);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/]), 3);
						if (!BitTest(Local_154.f_22, 4))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/]), 4);
						}
						func_161(4);
					}
				}
				else if (BitTest(Local_154.f_22, 7) && unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), func_92(), "cards_pickup", 3))
				{
					if (Local_154.f_30 != -1 && (unk_0xBD3B265153D3BA2D(Local_154.f_30) >= 0.99f || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), joaat("blend_out"))))
					{
						Local_154.f_24 = unk_0xBC5D9A293974F095(func_361(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), func_233(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), 2, 0, 1, 1065353216, 0, 1065353216);
						unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_154.f_24, func_92(), "cards_idle", 2f, -2f, 13, 16, 1148846080, 0);
						unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 0, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]), Local_154.f_24, func_92(), "cards_idle_card_a", 1000f, -1000f, 13);
						unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 1, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]), Local_154.f_24, func_92(), "cards_idle_card_b", 1000f, -1000f, 13);
						unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 2, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]), Local_154.f_24, func_92(), "cards_idle_card_c", 1000f, -1000f, 13);
						unk_0xE7101255AD6F1952(Local_154.f_24);
						unk_0x8744D2E3FC95740E(&(Local_154.f_22), 0);
						unk_0x8744D2E3FC95740E(&(Local_154.f_22), 7);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_22), 4);
					}
				}
				if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 > 0)
				{
					func_151(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3, "TCP_BET4", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
		
		case 4:
			if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 >= 0)
			{
				bVar22 = true;
				iVar23 = 0;
				while (iVar23 < 4)
				{
					iVar24 = Local_111.f_117[(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4 + iVar23)];
					if (iVar24 != -1)
					{
						if ((!BitTest(Local_153[iVar24 /*9*/], 1) && !BitTest(Local_153[iVar24 /*9*/], 3)) && (Local_153[iVar24 /*9*/].f_3 > 0 || Local_153[iVar24 /*9*/].f_5 > 0))
						{
							bVar22 = false;
						}
					}
					iVar23++;
				}
				if (Local_111.f_576[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2] == 9 && !bVar22)
				{
					if (((!func_337("TCP_WAIT") && !bLocal_172) && !bLocal_173) && !bLocal_168)
					{
						func_158("TCP_WAIT");
					}
				}
				else if (func_337("TCP_WAIT") || func_337("TCP_PLACE_PLAY"))
				{
					unk_0x428C32CC68809A35(1);
				}
				if (Local_111.f_576[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2] == 1)
				{
					if (BitTest(Local_153[unk_0x259BE71D8A81D4FA() /*9*/], 5))
					{
						bVar25 = true;
					}
					if (Local_154.f_31 != -1)
					{
						func_313(&(Local_154.f_31));
						Local_154.f_31 = -1;
					}
					Local_154.f_2 = 0;
					Local_154.f_3 = 0;
					Local_154.f_4 = 0;
					Local_154.f_6 = 0;
					Local_154.f_22 = 0;
					Local_153[unk_0x259BE71D8A81D4FA() /*9*/] = 0;
					Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_6 = 0;
					Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 = 0;
					Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5 = 0;
					Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4 = 0;
					func_161(0);
					Local_163.f_7 = func_402();
					Local_163.f_17 = func_207(&uLocal_159, 0, 0);
					Local_163.f_18 = func_408();
					Local_163.f_19 = func_209();
					if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 > -1)
					{
						Local_163.f_9 = Local_111.f_30[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2];
					}
					if (!func_354() || func_350())
					{
						if (Global_262145.f_26827 && !bVar25)
						{
							unk_0x5B04C6D6A21F6BDE(&Local_163);
						}
						func_379(1);
						unk_0x428C32CC68809A35(1);
						return;
					}
					if (func_335())
					{
						switch (func_331())
						{
							case 0:
								Local_163.f_4 = 1982714739;
								break;
							
							case 1:
								Local_163.f_4 = -633175758;
								break;
							
							case 2:
								Local_163.f_4 = -1625999354;
								break;
						}
						switch (func_331())
						{
							case 0:
								Local_164.f_2 = 1982714739;
								break;
							
							case 1:
								Local_164.f_2 = -633175758;
								break;
							
							case 2:
								Local_164.f_2 = -1625999354;
								break;
						}
						if (Global_262145.f_26827 && !bVar25)
						{
							unk_0x5B04C6D6A21F6BDE(&Local_163);
						}
						func_379(1);
						unk_0x428C32CC68809A35(1);
						if (func_331() == 2)
						{
							func_224("CAS_MG_CTIME", -1);
						}
						else
						{
							func_224("CAS_MG_CBAN", -1);
						}
						return;
					}
					if (Global_262145.f_26827 && !bVar25)
					{
						unk_0x5B04C6D6A21F6BDE(&Local_163);
					}
					return;
				}
				if ((Local_111.f_5[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2] && Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/] > 0) && BitTest(Local_111.f_20[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2], func_198(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1)))
				{
					iVar27 = func_9(&(Local_111.f_389[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*5*/].f_1), 0, 0);
					iVar28 = func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0);
					if (func_25(iVar27))
					{
						bVar26 = true;
					}
					if (iVar28 > 500)
					{
						Local_163.f_22 = 745220304;
					}
					else if (iVar28 > 400)
					{
						Local_163.f_22 = 588481795;
					}
					else if (iVar28 > 300)
					{
						Local_163.f_22 = joaat("straight");
					}
					else if (iVar28 > 200)
					{
						Local_163.f_22 = joaat("flush");
					}
					else if (iVar28 > 100)
					{
						Local_163.f_22 = 378531009;
					}
					else
					{
						Local_163.f_22 = 201584577;
					}
					if (((Local_154.f_2 && Local_154.f_3) && Local_154.f_4) && Local_154.f_6)
					{
						if (!BitTest(Local_154.f_22, 5))
						{
							Local_154.f_24 = unk_0xBC5D9A293974F095(func_361(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), func_233(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
							sVar29 = func_150(Local_163.f_6);
							if ((Local_154.f_26 == 1 || func_384(Local_154.f_18) == 2) || func_384(Local_154.f_18) == 3)
							{
								if (((Local_154.f_15 >= 35000 && iVar28 > iVar27) && iVar28 > 300) || (Local_154.f_23 >= 3500 && iVar28 > 300))
								{
									sVar29 = func_149();
								}
								else if (((Local_154.f_15 >= 35000 && iVar28 > 300) && iVar28 < iVar27) && !(Local_154.f_23 >= 3500 && iVar28 > 300))
								{
									sVar29 = func_147();
								}
							}
							else if (((Local_154.f_15 >= 4500 && iVar28 > iVar27) && iVar28 > 300) || (Local_154.f_23 >= 450 && iVar28 > 300))
							{
								sVar29 = func_149();
							}
							else if (((Local_154.f_15 >= 4500 && iVar28 > 300) && iVar28 < iVar27) && !(Local_154.f_23 >= 450 && iVar28 > 300))
							{
								sVar29 = func_147();
							}
							unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_154.f_24, func_232(), sVar29, 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xE7101255AD6F1952(Local_154.f_24);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_22), 5);
						}
						if (Local_163.f_14 > 0)
						{
							if (!BitTest(Local_154.f_22, 9))
							{
								if (func_102(Local_163.f_14, &(Local_154.f_14), 2))
								{
									unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_WIN_CHIPS", "dlc_vw_table_games_frontend_sounds", 1);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_22), 9);
									if (func_420(unk_0x259BE71D8A81D4FA()) && iVar28 > 500)
									{
										unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_828), 11);
									}
								}
							}
						}
					}
					if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 > 0)
					{
						if (!BitTest(Local_153[unk_0x259BE71D8A81D4FA() /*9*/], 3))
						{
							if (!bVar26)
							{
								if ((((((Local_154.f_2 && Local_154.f_3) && Local_154.f_4) && Local_154.f_6) && !bLocal_172) && !bLocal_173) && !bLocal_168)
								{
									if (!func_100("TCP_WIN_NP", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 0), Local_163.f_14))
									{
										func_99("TCP_WIN_NP", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 0), Local_163.f_14);
									}
								}
								if (!Local_154.f_2)
								{
									Local_154.f_2 = 1;
									unk_0x3AABE0CD8115D72E();
									Local_164.f_3 = (Local_164.f_3 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 * 2);
									Local_163.f_6 = (Local_163.f_6 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 * 2);
									Local_163.f_14 = (Local_163.f_14 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 * 2);
								}
								if (!Local_154.f_3)
								{
									Local_154.f_3 = 1;
									unk_0x3AABE0CD8115D72E();
									Local_164.f_3 = (Local_164.f_3 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4);
									Local_163.f_6 = (Local_163.f_6 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4);
									Local_164.f_13++;
									Local_163.f_15 = 1;
									Local_163.f_14 = (Local_163.f_14 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4);
									Local_163.f_4 = joaat("win");
								}
							}
							else if (iVar28 > iVar27)
							{
								if ((((((Local_154.f_2 && Local_154.f_3) && Local_154.f_4) && Local_154.f_6) && !bLocal_172) && !bLocal_173) && !bLocal_168)
								{
									if (iVar28 > 500 && iVar27 > 500)
									{
										bVar30 = true;
									}
									if ((iVar28 > 400 && iVar27 > 400) && (iVar28 < 500 && iVar27 < 500))
									{
										bVar30 = true;
									}
									if ((iVar28 > 300 && iVar27 > 300) && (iVar28 < 400 && iVar27 < 400))
									{
										bVar30 = true;
									}
									if ((iVar28 > 200 && iVar27 > 200) && (iVar28 < 300 && iVar27 < 300))
									{
										bVar30 = true;
									}
									if ((iVar28 > 100 && iVar27 > 100) && (iVar28 < 200 && iVar27 < 200))
									{
										bVar30 = true;
									}
									if (bVar30)
									{
										if (!func_100("TCP_WIN2", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 1), Local_163.f_14))
										{
											func_99("TCP_WIN2", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 1), Local_163.f_14);
										}
									}
									else if (!func_100("TCP_WIN", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 0), Local_163.f_14))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 0), Local_163.f_14);
									}
								}
								if (!Local_154.f_2)
								{
									Local_154.f_2 = 1;
									unk_0x3AABE0CD8115D72E();
									Local_164.f_3 = (Local_164.f_3 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 * 2);
									Local_163.f_6 = (Local_163.f_6 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 * 2);
									Local_163.f_14 = (Local_163.f_14 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 * 2);
								}
								if (!Local_154.f_3)
								{
									Local_154.f_3 = 1;
									unk_0x3AABE0CD8115D72E();
									Local_164.f_3 = (Local_164.f_3 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4 * 2);
									Local_163.f_6 = (Local_163.f_6 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4 * 2);
									Local_163.f_14 = (Local_163.f_14 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4 * 2);
									Local_164.f_13++;
									Local_163.f_15 = 1;
									Local_163.f_4 = joaat("win");
								}
							}
							else if (iVar28 == iVar27)
							{
								iVar27 = func_9(&(Local_111.f_389[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*5*/].f_1), 1, 0);
								iVar28 = func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 1, 0);
								if (iVar28 == iVar27)
								{
									iVar27 = func_9(&(Local_111.f_389[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*5*/].f_1), 0, 1);
									iVar28 = func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 1);
									if (iVar28 > iVar27)
									{
										if ((((((Local_154.f_2 && Local_154.f_3) && Local_154.f_4) && Local_154.f_6) && !bLocal_172) && !bLocal_173) && !bLocal_168)
										{
											if (!func_100("TCP_WIN2", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 1), Local_163.f_14))
											{
												func_99("TCP_WIN2", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 1), Local_163.f_14);
											}
										}
										if (!Local_154.f_2)
										{
											Local_154.f_2 = 1;
											unk_0x3AABE0CD8115D72E();
											Local_164.f_3 = (Local_164.f_3 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 * 2);
											Local_163.f_6 = (Local_163.f_6 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 * 2);
											Local_163.f_14 = (Local_163.f_14 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 * 2);
										}
										if (!Local_154.f_3)
										{
											Local_154.f_3 = 1;
											unk_0x3AABE0CD8115D72E();
											Local_164.f_3 = (Local_164.f_3 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4 * 2);
											Local_163.f_6 = (Local_163.f_6 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4 * 2);
											Local_163.f_14 = (Local_163.f_14 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4 * 2);
											Local_164.f_13++;
											Local_163.f_15 = 1;
											Local_163.f_4 = joaat("win");
										}
									}
									else if (iVar28 == iVar27)
									{
										if ((((((Local_154.f_2 && Local_154.f_3) && Local_154.f_4) && Local_154.f_6) && !bLocal_172) && !bLocal_173) && !bLocal_168)
										{
											if (!func_337("TCP_LOSE_PUSH"))
											{
												func_158("TCP_LOSE_PUSH");
											}
										}
										if (!Local_154.f_2)
										{
											Local_154.f_2 = 1;
											unk_0x3AABE0CD8115D72E();
											Local_164.f_3 = (Local_164.f_3 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3);
											Local_163.f_6 = (Local_163.f_6 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3);
											Local_163.f_14 = (Local_163.f_14 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3);
											func_206(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3);
										}
										if (!Local_154.f_3)
										{
											Local_154.f_3 = 1;
											unk_0x3AABE0CD8115D72E();
											Local_164.f_3 = (Local_164.f_3 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4);
											Local_163.f_6 = (Local_163.f_6 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4);
											Local_163.f_14 = (Local_163.f_14 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4);
											Local_164.f_13++;
											Local_163.f_15 = 1;
											Local_163.f_4 = joaat("win");
										}
										Local_154.f_2 = 1;
									}
									else
									{
										if ((((((Local_154.f_2 && Local_154.f_3) && Local_154.f_4) && Local_154.f_6) && !bLocal_172) && !bLocal_173) && !bLocal_168)
										{
											if (Local_163.f_14 > 0)
											{
												if (!func_100("TCP_WIN", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 1), Local_163.f_14))
												{
													func_99("TCP_WIN", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 1), Local_163.f_14);
												}
											}
											else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_111.f_389[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
											{
												func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_111.f_389[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
											}
										}
										Local_163.f_4 = joaat("lose");
										if (!Local_154.f_3)
										{
											func_206((Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3));
											Local_154.f_3 = 1;
											Local_164.f_14++;
										}
										Local_154.f_2 = 1;
									}
								}
								else if (iVar28 > iVar27)
								{
									if ((((((Local_154.f_2 && Local_154.f_3) && Local_154.f_4) && Local_154.f_6) && !bLocal_172) && !bLocal_173) && !bLocal_168)
									{
										if (!func_100("TCP_WIN2", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 1), Local_163.f_14))
										{
											func_99("TCP_WIN2", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 1), Local_163.f_14);
										}
									}
									if (!Local_154.f_2)
									{
										Local_154.f_2 = 1;
										unk_0x3AABE0CD8115D72E();
										Local_164.f_3 = (Local_164.f_3 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 * 2);
										Local_163.f_6 = (Local_163.f_6 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 * 2);
										Local_163.f_14 = (Local_163.f_14 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 * 2);
									}
									if (!Local_154.f_3)
									{
										Local_154.f_3 = 1;
										unk_0x3AABE0CD8115D72E();
										Local_164.f_3 = (Local_164.f_3 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4 * 2);
										Local_163.f_6 = (Local_163.f_6 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4 * 2);
										Local_164.f_13++;
										Local_163.f_15 = 1;
										Local_163.f_14 = (Local_163.f_14 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4 * 2);
										Local_163.f_4 = joaat("win");
									}
								}
								else
								{
									if ((((((Local_154.f_2 && Local_154.f_3) && Local_154.f_4) && Local_154.f_6) && !bLocal_172) && !bLocal_173) && !bLocal_168)
									{
										if (Local_163.f_14 > 0)
										{
											if (!func_100("TCP_WIN", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 1), Local_163.f_14))
											{
												func_99("TCP_WIN", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 1), Local_163.f_14);
											}
										}
										else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_111.f_389[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
										{
											func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_111.f_389[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
										}
									}
									Local_163.f_4 = joaat("lose");
									if (!Local_154.f_3)
									{
										func_206((Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3));
										Local_154.f_3 = 1;
										Local_164.f_14++;
									}
									Local_154.f_2 = 1;
								}
							}
							else
							{
								if ((((((Local_154.f_2 && Local_154.f_3) && Local_154.f_4) && Local_154.f_6) && !bLocal_172) && !bLocal_173) && !bLocal_168)
								{
									if (iVar28 > 500 && iVar27 > 500)
									{
										bVar31 = true;
									}
									if ((iVar28 > 400 && iVar27 > 400) && (iVar28 < 500 && iVar27 < 500))
									{
										bVar31 = true;
									}
									if ((iVar28 > 300 && iVar27 > 300) && (iVar28 < 400 && iVar27 < 400))
									{
										bVar31 = true;
									}
									if ((iVar28 > 200 && iVar27 > 200) && (iVar28 < 300 && iVar27 < 300))
									{
										bVar31 = true;
									}
									if ((iVar28 > 100 && iVar27 > 100) && (iVar28 < 200 && iVar27 < 200))
									{
										bVar31 = true;
									}
									if (bVar31)
									{
										if (Local_163.f_14 > 0)
										{
											if (!func_100("TCP_WIN", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 1), Local_163.f_14))
											{
												func_99("TCP_WIN", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 1), Local_163.f_14);
											}
										}
										else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_111.f_389[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
										{
											func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_111.f_389[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
										}
									}
									else if (Local_163.f_14 > 0)
									{
										if (!func_100("TCP_WIN", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 0), Local_163.f_14))
										{
											func_99("TCP_WIN", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 0), Local_163.f_14);
										}
									}
									else if (!func_98("TCP_LOSE_PLAY", func_101(func_9(&(Local_111.f_389[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*5*/].f_1), 0, 0), 0)))
									{
										func_97("TCP_LOSE_PLAY", func_101(func_9(&(Local_111.f_389[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
									}
								}
								Local_163.f_4 = joaat("lose");
								if (!Local_154.f_3)
								{
									func_206((Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4 + Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3));
									Local_154.f_3 = 1;
									Local_164.f_14++;
								}
								Local_154.f_2 = 1;
							}
							iVar28 = func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0);
							if (!Local_154.f_4)
							{
								unk_0x3AABE0CD8115D72E();
								if (func_96(iVar28) > 0)
								{
									Local_164.f_3 = (Local_164.f_3 + (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 * func_96(iVar28)));
									Local_163.f_6 = (Local_163.f_6 + (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 * func_96(iVar28)));
									Local_164.f_13++;
									Local_163.f_15 = 1;
									Local_163.f_14 = (Local_163.f_14 + (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 * func_96(iVar28)));
								}
								Local_154.f_4 = 1;
							}
						}
						else
						{
							if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 >= 0)
							{
								Local_163.f_4 = joaat("fold");
							}
							if ((((((Local_154.f_2 && Local_154.f_3) && Local_154.f_4) && Local_154.f_6) && !bLocal_172) && !bLocal_173) && !bLocal_168)
							{
								if (Local_163.f_14 > 0)
								{
									if (!func_100("TCP_WIN", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 0), Local_163.f_14))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 0), Local_163.f_14);
									}
								}
								else if (!func_98("TCP_LOSE_FOLD", func_101(func_9(&(Local_111.f_389[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*5*/].f_1), 0, 0), 0)))
								{
									func_97("TCP_LOSE_FOLD", func_101(func_9(&(Local_111.f_389[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
								}
							}
							if (!Local_154.f_3)
							{
								func_206(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3);
								Local_154.f_3 = 1;
								Local_164.f_14++;
							}
							Local_154.f_4 = 1;
							Local_154.f_2 = 1;
						}
					}
					else
					{
						Local_154.f_2 = 1;
						Local_154.f_3 = 1;
						Local_154.f_4 = 1;
					}
					iVar28 = func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0);
					if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5 > 0)
					{
						Local_163.f_21 = 1;
						if (func_23(iVar28) > 0)
						{
							if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 <= 0)
							{
								if ((((((Local_154.f_2 && Local_154.f_3) && Local_154.f_4) && Local_154.f_6) && !bLocal_172) && !bLocal_173) && !bLocal_168)
								{
									if (!func_100("TCP_WIN", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 0), Local_163.f_14))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 0), Local_163.f_14);
									}
								}
							}
							if (!Local_154.f_6)
							{
								Local_154.f_6 = 1;
								unk_0x3AABE0CD8115D72E();
								Local_164.f_3 = (Local_164.f_3 + (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5 + (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5 * func_23(iVar28))));
								Local_163.f_6 = (Local_163.f_6 + (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5 + (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5 * func_23(iVar28))));
								Local_164.f_13++;
								Local_163.f_15 = 1;
								Local_163.f_14 = (Local_163.f_14 + (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5 + (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5 * func_23(iVar28))));
								Local_163.f_4 = joaat("win");
							}
						}
						else
						{
							if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 <= 0)
							{
								Local_163.f_4 = joaat("lose");
								if ((((((Local_154.f_2 && Local_154.f_3) && Local_154.f_4) && Local_154.f_6) && !bLocal_172) && !bLocal_173) && !bLocal_168)
								{
									if (!func_98("TCP_LOSE_PP", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 0)))
									{
										func_97("TCP_LOSE_PP", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 0));
									}
								}
							}
							if (!Local_154.f_6)
							{
								func_206(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5);
								Local_154.f_6 = 1;
								if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 <= 0)
								{
									Local_164.f_14++;
								}
							}
						}
					}
					else
					{
						Local_154.f_6 = 1;
					}
				}
				else
				{
					if (!Local_111.f_5[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2])
					{
					}
					if (Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/] <= 0)
					{
					}
					if (!BitTest(Local_111.f_20[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2], func_198(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1)))
					{
					}
					if (((Local_154.f_2 && Local_154.f_3) && Local_154.f_4) && Local_154.f_6)
					{
						if (Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/] <= 0)
						{
							Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 = 0;
							Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5 = 0;
							Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4 = 0;
							unk_0xA759D3AD1579CBCB(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3));
							unk_0xA759D3AD1579CBCB(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5));
							unk_0xA759D3AD1579CBCB(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4));
						}
					}
				}
			}
			break;
	}
}

int func_96(int iParam0)
{
	if (iParam0 > 500)
	{
		return 5;
	}
	else if (iParam0 > 400)
	{
		return 4;
	}
	else if (iParam0 > 300)
	{
		return 1;
	}
	return 0;
}

void func_97(char* sParam0, var uParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	unk_0x5E01B6B1F460FE3F(0, 1, 0, -1);
}

bool func_98(char* sParam0, var uParam1)
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_99(char* sParam0, var uParam1, int iParam2)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	unk_0x511D14ED2DA887E1(iParam2);
	unk_0x5E01B6B1F460FE3F(0, 1, 0, -1);
}

bool func_100(char* sParam0, var uParam1, int iParam2)
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	unk_0x511D14ED2DA887E1(iParam2);
	return unk_0x7EBCD400E7DE179C(0);
}

char* func_101(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (iParam0 > 500)
		{
			return "TCP_STRAIGHTF_F";
		}
		else if (iParam0 > 400)
		{
			return "TCP_TOFAKIND_F";
		}
		else if (iParam0 > 300)
		{
			return "TCP_STRAIGHT_F";
		}
		else if (iParam0 > 200)
		{
			return "TCP_FLUSH_F";
		}
		else if (iParam0 > 100)
		{
			return "TCP_PAIR_F";
		}
		else if (iParam0 == 12)
		{
			return "TCP_HIGH_Q_F";
		}
		else if (iParam0 == 13)
		{
			return "TCP_HIGH_K_F";
		}
		else
		{
			return "TCP_HIGH_A_F";
		}
	}
	else if (iParam0 > 500)
	{
		return "TCP_STRAIGHTF";
	}
	else if (iParam0 > 400)
	{
		return "TCP_TOFAKIND";
	}
	else if (iParam0 > 300)
	{
		return "TCP_STRAIGHT";
	}
	else if (iParam0 > 200)
	{
		return "TCP_FLUSH";
	}
	else if (iParam0 > 100)
	{
		if (iParam0 == 128)
		{
			return "TCP_PAIR_A";
		}
		else if (iParam0 == 104)
		{
			return "TCP_PAIR_2";
		}
		else if (iParam0 == 106)
		{
			return "TCP_PAIR_3";
		}
		else if (iParam0 == 108)
		{
			return "TCP_PAIR_4";
		}
		else if (iParam0 == 110)
		{
			return "TCP_PAIR_5";
		}
		else if (iParam0 == 112)
		{
			return "TCP_PAIR_6";
		}
		else if (iParam0 == 114)
		{
			return "TCP_PAIR_7";
		}
		else if (iParam0 == 116)
		{
			return "TCP_PAIR_8";
		}
		else if (iParam0 == 118)
		{
			return "TCP_PAIR_9";
		}
		else if (iParam0 == 120)
		{
			return "TCP_PAIR_10";
		}
		else if (iParam0 == 122)
		{
			return "TCP_PAIR_J";
		}
		else if (iParam0 == 124)
		{
			return "TCP_PAIR_Q";
		}
		else if (iParam0 == 126)
		{
			return "TCP_PAIR_K";
		}
	}
	else if (iParam0 == 5)
	{
		return "TCP_HIGH_5";
	}
	else if (iParam0 == 6)
	{
		return "TCP_HIGH_6";
	}
	else if (iParam0 == 7)
	{
		return "TCP_HIGH_7";
	}
	else if (iParam0 == 8)
	{
		return "TCP_HIGH_8";
	}
	else if (iParam0 == 9)
	{
		return "TCP_HIGH_9";
	}
	else if (iParam0 == 10)
	{
		return "TCP_HIGH_10";
	}
	else if (iParam0 == 11)
	{
		return "TCP_HIGH_J";
	}
	else if (iParam0 == 12)
	{
		return "TCP_HIGH_Q";
	}
	else if (iParam0 == 13)
	{
		return "TCP_HIGH_K";
	}
	else
	{
		return "TCP_HIGH_A";
	}
	return "";
}

bool func_102(int iParam0, var uParam1, int iParam2)
{
	return func_103(iParam0, 3, uParam1, iParam2, -1);
}

int func_103(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	
	if (iParam0 <= 0)
	{
	}
	else if (!func_146(iParam1))
	{
	}
	else
	{
		iVar0 = func_402();
		iVar1 = (Global_262145.f_27186 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_144();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_124(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_402() - Global_1970467);
			func_123(iVar4, 1);
			func_121();
			func_120();
			Global_1970467 = (Global_1970467 + iVar4);
			if (iParam1 == 0)
			{
				func_114(iVar4);
				Global_2694477 = 1;
			}
			else if (iParam1 == 3)
			{
				func_107(iVar4);
				if (iVar4 >= Global_262145.f_27194)
				{
					Global_2694476 = 1;
				}
				else if (iVar4 >= Global_262145.f_27193)
				{
					Global_2694477 = 1;
				}
			}
			Var5.f_0 = func_106(iParam1);
			Var5.f_1 = func_105(iParam1, iParam3, iParam4);
			if (func_104(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (unk_0x00BDC89742B13CD2(-1) + unk_0x227D0C27EB51D76C());
			Var5.f_6 = Global_1970467;
			unk_0x3537BA3FCD2A039A(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_105(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			
			case 1:
				iVar0 = 21;
				break;
			
			case 4:
				iVar0 = 22;
				break;
			
			case 5:
				iVar0 = 23;
				break;
			
			case 6:
				iVar0 = 24;
				break;
			
			case 7:
				iVar0 = 25;
				break;
			
			case 9:
				iVar0 = 26;
				break;
			
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
			
			case 11:
				iVar0 = 29;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
			}
	}
	return iVar0;
}

int func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -2043662707;
			break;
		
		case 1:
			iVar0 = -1612659516;
			break;
		
		case 2:
			iVar0 = -1304782539;
			break;
		
		case 3:
			iVar0 = 1196301501;
			break;
		
		case 4:
			iVar0 = -1964607937;
			break;
		
		case 5:
			iVar0 = -2125268726;
			break;
		
		case 6:
			iVar0 = 1138851024;
			break;
		
		case 11:
			iVar0 = 1138851024;
			break;
		
		case 7:
			iVar0 = 1848798713;
			break;
		
		case 8:
			iVar0 = 1196301501;
			break;
		
		case 9:
			iVar0 = -1297103179;
			break;
		
		case 10:
			iVar0 = 1754365518;
			break;
	}
	return iVar0;
}

void func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_113();
	iVar1 = unk_0x39D1D336459711BE();
	iVar2 = func_111();
	if (iVar0 == 0)
	{
		func_110();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_27188)
	{
		func_109();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_27190)
	{
		func_108(joaat("mpply_casino_chips_won_gd"), Global_262145.f_27190);
		func_109();
		Global_2694477 = 1;
	}
	else
	{
		func_108(joaat("mpply_casino_chips_won_gd"), (iVar2 + iParam0));
	}
}

void func_108(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, 1);
	}
}

void func_109()
{
	func_110();
}

void func_110()
{
	func_108(joaat("mpply_casino_chips_wontim"), unk_0x39D1D336459711BE());
}

int func_111()
{
	return func_112(joaat("mpply_casino_chips_won_gd"));
}

int func_112(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_113()
{
	return func_112(joaat("mpply_casino_chips_wontim"));
}

void func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_119();
	iVar1 = unk_0x39D1D336459711BE();
	iVar2 = func_118();
	if (iVar0 == 0)
	{
		func_117();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_27187)
	{
		func_116();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_115()
	{
		func_108(joaat("mpply_casino_chips_pur_gd"), func_115());
		func_116();
	}
	else
	{
		func_108(joaat("mpply_casino_chips_pur_gd"), (iVar2 + iParam0));
	}
}

int func_115()
{
	if (func_330(unk_0x259BE71D8A81D4FA()))
	{
		return Global_262145.f_26982;
	}
	return Global_262145.f_26981;
}

void func_116()
{
	func_117();
}

void func_117()
{
	func_108(joaat("mpply_casino_chips_purtim"), unk_0x39D1D336459711BE());
}

int func_118()
{
	return func_112(joaat("mpply_casino_chips_pur_gd"));
}

int func_119()
{
	return func_112(joaat("mpply_casino_chips_purtim"));
}

void func_120()
{
	if (BitTest(Global_1970540, 6))
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_1970540, 9);
		func_370(&Global_1970543, 0, 0);
	}
}

void func_121()
{
	if (func_122())
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_1970540, true);
	}
}

bool func_122()
{
	return (BitTest(Global_1970540, 6) || BitTest(Global_1970540, 5));
}

void func_123(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	unk_0x0B0C9A0F9AAEB7F0(&Global_1970540, 6);
	Global_1970541 = iParam0;
	Global_1970542 = iParam1;
}

bool func_124(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_104(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_143())
	{
		if (*uParam0 == 0)
		{
			if (func_142() != -1)
			{
				return 0;
			}
			iVar3 = 657241867;
			iVar4 = func_106(iParam1);
			iVar5 = -22148635;
			if (func_146(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_138(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_138(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_132())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_131(func_142()))
			{
				if (func_130(func_142()) == 2)
				{
					unk_0x1F4C0FAC35E805F4(func_129(func_142()));
					if (func_146(iParam1))
					{
						unk_0x265D164F770DA9AB(iVar0, iParam2);
					}
					else
					{
						unk_0x273A6B01207A9FE5(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_125(func_142());
			}
		}
	}
	else if (iVar0 > 0 || unk_0x0AF5E4A6C74DC312(iVar0, 0, 1, 0, -1, 0))
	{
		if (func_146(iParam1))
		{
			unk_0x265D164F770DA9AB(iVar0, iParam2);
		}
		else
		{
			unk_0x273A6B01207A9FE5(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

void func_125(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_128(iParam0))
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
		func_126(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_126(var uParam0)
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
	func_127(&(uParam0->f_14));
	func_127(&(uParam0->f_14.f_13));
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

void func_127(var uParam0)
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

int func_128(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_129(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_130(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_131(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_132()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_142();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_137()) || unk_0x34F31012FED51A0F())
		{
			if (func_136(Global_4535172[iVar2 /*85*/].f_66.f_6, Global_4535172[iVar2 /*85*/].f_66.f_4, Global_4535172[iVar2 /*85*/].f_66.f_1) == 1)
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
	iVar3 = func_129(iVar2);
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
				func_133(Global_4535172[iVar2 /*85*/], iVar2);
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	return 0;
}

void func_133(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_135(Var0.f_1);
	if ((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_134();
		unk_0x01F0B819E78A18A1(1, &Var0, 36, iVar1);
	}
}

void func_134()
{
	unk_0x97A5024CE91641F1("AM_ARENA_SHP");
}

var func_135(bool bParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, iParam0);
	}
	return uVar0;
}

int func_136(int iParam0, int iParam1, int iParam2)
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

int func_137()
{
	return Global_1574918;
}

int func_138(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_137()) || unk_0x34F31012FED51A0F())
		{
			Global_4536674 = 1;
			return 0;
		}
		if (Global_2695821)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4536675 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_142();
	if (iVar1 == -1)
	{
		if (!func_140(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_139(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4535172[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4535172[iVar1 /*85*/].f_66.f_15 = Var2.f_0;
		Global_4535172[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || unk_0x5E8BF7E974BEA7D7(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_140(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_137()) || unk_0x34F31012FED51A0F())
		{
			Global_4536674 = 1;
			return 0;
		}
		if (Global_2695821)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4536675 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4535172[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4535172[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x79EEE2067838CC59())
		{
			unk_0xD8EB47E09DFC393C();
		}
	}
	if (bVar0 || unk_0x5156B6B1D1CD58FE(&uVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_141(uVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_141(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_143())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4535172[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535172[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535172[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535172[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535172[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4535172[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535172[iVar0 /*85*/].f_66 = uParam0;
			Global_4535172[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535172[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535172[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4535172[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535172[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535172[iVar0 /*85*/].f_66.f_14 = unk_0x8034325BF6D6E41F();
			Global_4535172[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4536659 = 0;
			if (bParam6)
			{
				Global_4535172[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_133(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_142()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_129(iVar0) != 2147483647)
		{
			if (func_128(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_143()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

int func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_115() - func_118());
	iVar1 = (Global_262145.f_27186 - func_402());
	iVar2 = func_145();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_145()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_115();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (unk_0xDA91B00799F1223C())
	{
		if (unk_0x0AF5E4A6C74DC312(iVar0, 0, 1, 0, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (unk_0x227D0C27EB51D76C() + unk_0x00BDC89742B13CD2(-1));
		}
	}
	else if (unk_0x0AF5E4A6C74DC312(iVar0, 0, 1, 0, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = unk_0xF9A874A9AA3CA007();
	}
	return iVar1;
}

int func_146(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

char* func_147()
{
	if (func_148())
	{
		switch (unk_0xC5935DFB3F39785A(0, 5))
		{
			case 0:
				return "female_reaction_terrible_var_01";
			
			case 1:
				return "female_reaction_terrible_var_02";
			
			case 2:
				return "female_reaction_terrible_var_03";
			
			case 3:
				return "female_reaction_terrible_var_04";
			
			case 4:
				return "female_reaction_terrible_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0xC5935DFB3F39785A(0, 4))
		{
			case 0:
				return "reaction_terrible_var_01";
			
			case 1:
				return "reaction_terrible_var_02";
			
			case 2:
				return "reaction_terrible_var_03";
			
			case 3:
				return "reaction_terrible_var_04";
			}
		
		default:
	}
	return "";
}

bool func_148()
{
	return func_57(unk_0x259BE71D8A81D4FA());
}

char* func_149()
{
	if (func_148())
	{
		switch (unk_0xC5935DFB3F39785A(0, 5))
		{
			case 0:
				return "female_reaction_great_var_01";
			
			case 1:
				return "female_reaction_great_var_02";
			
			case 2:
				return "female_reaction_great_var_03";
			
			case 3:
				return "female_reaction_great_var_04";
			
			case 4:
				return "female_reaction_great_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0xC5935DFB3F39785A(0, 4))
		{
			case 0:
				return "reaction_great_var_01";
			
			case 1:
				return "reaction_great_var_02";
			
			case 2:
				return "reaction_great_var_03";
			
			case 3:
				return "reaction_great_var_04";
			}
		
		default:
	}
	return "";
}

char* func_150(int iParam0)
{
	if (func_148())
	{
		if ((func_419(unk_0x259BE71D8A81D4FA()) || func_384(Local_154.f_18) == 2) || func_384(Local_154.f_18) == 3)
		{
			if (iParam0 > 10000)
			{
				switch (unk_0xC5935DFB3F39785A(0, 4))
				{
					case 0:
						return "female_reaction_good_var_01";
					
					case 1:
						return "female_reaction_good_var_02";
					
					case 2:
						return "female_reaction_good_var_03";
					
					case 3:
						return "female_reaction_good_var_04";
					
					default:
				}
			}
			else if (iParam0 > -10000)
			{
				switch (unk_0xC5935DFB3F39785A(0, 7))
				{
					case 0:
						return "female_reaction_impartial_var_01";
					
					case 1:
						return "female_reaction_impartial_var_02";
					
					case 2:
						return "female_reaction_impartial_var_03";
					
					case 3:
						return "female_reaction_impartial_var_04";
					
					case 4:
						return "female_reaction_impartial_var_05";
					
					case 5:
						return "female_reaction_impartial_var_06";
					
					case 6:
						return "female_reaction_impartial_var_07";
					
					default:
				}
			}
			else
			{
				switch (unk_0xC5935DFB3F39785A(0, 4))
				{
					case 0:
						return "female_reaction_bad_var_01";
					
					case 1:
						return "female_reaction_bad_var_02";
					
					case 2:
						return "female_reaction_bad_var_03";
					
					case 3:
						return "female_reaction_bad_var_04";
					}
				
				default:
			}
		}
		else if (iParam0 > 1000)
		{
			switch (unk_0xC5935DFB3F39785A(0, 4))
			{
				case 0:
					return "female_reaction_good_var_01";
				
				case 1:
					return "female_reaction_good_var_02";
				
				case 2:
					return "female_reaction_good_var_03";
				
				case 3:
					return "female_reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -1000)
		{
			switch (unk_0xC5935DFB3F39785A(0, 7))
			{
				case 0:
					return "female_reaction_impartial_var_01";
				
				case 1:
					return "female_reaction_impartial_var_02";
				
				case 2:
					return "female_reaction_impartial_var_03";
				
				case 3:
					return "female_reaction_impartial_var_04";
				
				case 4:
					return "female_reaction_impartial_var_05";
				
				case 5:
					return "female_reaction_impartial_var_06";
				
				case 6:
					return "female_reaction_impartial_var_07";
				
				default:
			}
		}
		else
		{
			switch (unk_0xC5935DFB3F39785A(0, 4))
			{
				case 0:
					return "female_reaction_bad_var_01";
				
				case 1:
					return "female_reaction_bad_var_02";
				
				case 2:
					return "female_reaction_bad_var_03";
				
				case 3:
					return "female_reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if ((func_419(unk_0x259BE71D8A81D4FA()) || func_384(Local_154.f_18) == 2) || func_384(Local_154.f_18) == 3)
	{
		if (iParam0 > 10000)
		{
			switch (unk_0xC5935DFB3F39785A(0, 4))
			{
				case 0:
					return "reaction_good_var_01";
				
				case 1:
					return "reaction_good_var_02";
				
				case 2:
					return "reaction_good_var_03";
				
				case 3:
					return "reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -10000)
		{
			switch (unk_0xC5935DFB3F39785A(0, 8))
			{
				case 0:
					return "reaction_impartial_var_01";
				
				case 1:
					return "reaction_impartial_var_02";
				
				case 2:
					return "reaction_impartial_var_03";
				
				case 3:
					return "reaction_impartial_var_04";
				
				case 4:
					return "reaction_impartial_var_05";
				
				case 5:
					return "reaction_impartial_var_06";
				
				case 6:
					return "reaction_impartial_var_07";
				
				case 7:
					return "reaction_impartial_var_08";
				
				default:
			}
		}
		else
		{
			switch (unk_0xC5935DFB3F39785A(0, 4))
			{
				case 0:
					return "reaction_bad_var_01";
				
				case 1:
					return "reaction_bad_var_02";
				
				case 2:
					return "reaction_bad_var_03";
				
				case 3:
					return "reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if (iParam0 > 1000)
	{
		switch (unk_0xC5935DFB3F39785A(0, 4))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			case 3:
				return "reaction_good_var_04";
			
			default:
		}
	}
	else if (iParam0 > -1000)
	{
		switch (unk_0xC5935DFB3F39785A(0, 8))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			
			case 4:
				return "reaction_impartial_var_05";
			
			case 5:
				return "reaction_impartial_var_06";
			
			case 6:
				return "reaction_impartial_var_07";
			
			case 7:
				return "reaction_impartial_var_08";
			
			default:
		}
	}
	else
	{
		switch (unk_0xC5935DFB3F39785A(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

void func_151(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	if (func_154(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_153(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655472.f_1 = 1;
		func_152(3, iVar0);
		Global_1655472.f_2839[iVar0] = uParam0;
		StringCopy(&(Global_1655472.f_2839.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1655472.f_2839.f_183[iVar0] = iParam3;
		Global_1655472.f_2839.f_172[iVar0] = iParam2;
		Global_1655472.f_2839.f_205[iVar0] = iParam4;
		Global_1655472.f_2839.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1655472.f_2839.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1655472.f_2839.f_420[iVar0] = iParam7;
		Global_1655472.f_2839.f_453[iVar0] = iParam8;
		Global_1655472.f_2839.f_431[iVar0] = iParam9;
		Global_1655472.f_2839.f_442[iVar0] = iParam10;
		Global_1655472.f_2839.f_464[iVar0] = iParam11;
		Global_1655472.f_2839.f_475[iVar0] = iParam12;
		Global_1655472.f_2839.f_486[iVar0] = iParam13;
		Global_1655472.f_2839.f_497[iVar0] = iParam14;
	}
}

void func_152(int iParam0, bool bParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1655472.f_7009[iParam0]), iParam1);
}

int func_153(int iParam0, int iParam1)
{
	return BitTest(Global_1655472.f_7009[iParam0], iParam1);
}

int func_154(var uParam0)
{
	if (unk_0xFF692AB7350A74D7(uParam0))
	{
		return 1;
	}
	else if (unk_0x1B79E937E91F40C3(uParam0, "") || unk_0x1B79E937E91F40C3(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_155(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_143() && *uParam1 == 1)
	{
		bParam3 = false;
	}
	if (!bParam3 || func_157(iParam0))
	{
		return func_156(iParam0, 2, uParam1, iParam2, -1, -1);
	}
	else
	{
		*uParam1 = 3;
	}
	return 1;
}

int func_156(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (iParam0 <= 0)
	{
	}
	else if (func_146(iParam1))
	{
	}
	else
	{
		iVar0 = func_402();
		iVar1 = (iVar0 - iParam0);
		if (iVar1 < 0 && (!func_143() || *uParam2 != 1))
		{
			iVar1 = iVar0;
			iParam0 = iVar0;
		}
		if (func_124(uParam2, iParam1, iParam0))
		{
			iVar2 = (Global_1970467 - func_402());
			if (iParam1 == 1)
			{
				Global_2694476 = 1;
			}
			else if (iVar2 >= Global_262145.f_27195)
			{
				Global_2694477 = 1;
			}
			func_123(iVar2, 0);
			func_121();
			func_120();
			Global_1970467 = (Global_1970467 - iVar2);
			Var3.f_0 = func_106(iParam1);
			Var3.f_1 = func_105(iParam1, iParam3, iParam4);
			if (func_104(iParam1))
			{
				Var3.f_2 = iVar2;
			}
			else
			{
				Var3.f_2 = 0;
			}
			Var3.f_3 = iVar2;
			Var3.f_4 = iParam1;
			Var3.f_5 = (unk_0x00BDC89742B13CD2(-1) + unk_0x227D0C27EB51D76C());
			Var3.f_6 = Global_1970467;
			Var3.f_7 = iParam5;
			unk_0x3537BA3FCD2A039A(&Var3);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_157(int iParam0)
{
	int iVar0;
	
	if (func_335())
	{
		return 0;
	}
	iVar0 = func_402();
	if (iVar0 < iParam0)
	{
		return 0;
	}
	return 1;
}

void func_158(char* sParam0)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 1, 0, -1);
}

void func_159(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_153(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655472.f_1 = 1;
		func_152(7, iVar0);
		Global_1655472.f_4659[iVar0] = iParam0;
		StringCopy(&(Global_1655472.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1655472.f_4659.f_172[iVar0] = iParam2;
		Global_1655472.f_4659.f_216[iVar0] = iParam3;
		Global_1655472.f_4659.f_183[iVar0] = iParam4;
		Global_1655472.f_4659.f_194[iVar0] = iParam5;
		Global_1655472.f_4659.f_249[iVar0] = iParam6;
		Global_1655472.f_4659.f_260[iVar0] = iParam7;
		Global_1655472.f_4659.f_205[iVar0] = iParam8;
		Global_1655472.f_4659.f_314[iVar0] = iParam9;
		Global_1655472.f_4659.f_325[iVar0] = iParam10;
		Global_1655472.f_4659.f_357[iVar0] = iParam11;
		Global_1655472.f_4659.f_238[iVar0] = iParam12;
		Global_1655472.f_4659.f_271[iVar0] = iParam13;
		Global_1655472.f_4659.f_368[iVar0] = iParam14;
		Global_1655472.f_4659.f_379[iVar0] = iParam15;
		Global_1655472.f_4659.f_390[iVar0] = iParam16;
		Global_1655472.f_4659.f_227[iVar0] = iParam17;
	}
}

int func_160(int iParam0)
{
	if ((Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 == 2 || Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 == 3) || func_419(unk_0x259BE71D8A81D4FA()))
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_161(int iParam0)
{
	Local_154.f_797 = iParam0;
}

void func_162()
{
	char* sVar0;
	int iVar1;
	
	unk_0x66EFB3D6110055C4(2, 209, 1);
	unk_0x4CC1CF98851922CE(2, 209);
	if (!BitTest(Local_154.f_20, 3))
	{
		if ((unk_0x61C3701AD6D746B2(2, 209) && !unk_0x4465D55576678706(2, 210)) && !BitTest(Local_154.f_20, 0))
		{
			unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_20), 3);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_384(Local_154.f_18) == 2 || func_384(Local_154.f_18) == 3) || func_419(unk_0x259BE71D8A81D4FA()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		unk_0xD0D00ED689D6CA81(sVar0, 0);
		if (func_298(0, -1, 0) && unk_0x38D063D8CF6D1967(sVar0))
		{
			if (!BitTest(Local_154.f_20, 4))
			{
				func_297(0, 0);
				func_295(1, sVar0, sVar0);
				func_294("TCP_HANDS");
				func_181(1, 2, 2, 2, 1);
				func_180(1, 1, 1, 1, 0);
				iVar1 = 0;
				func_176(iVar1, "TCP_HAND1", 0, 1, 0, 0, 0);
				func_176(iVar1, "TCP_10", 1, 1, 0, 0, 0);
				func_163(60, 0);
				func_176(iVar1, "TCP_9", 1, 1, 0, 0, 0);
				func_163(60, 0);
				func_176(iVar1, "TCP_8", 1, 1, 0, 0, 0);
				func_163(60, 0);
				iVar1 = 1;
				func_176(iVar1, "TCP_HAND2", 0, 1, 0, 0, 0);
				func_176(iVar1, "TCP_5", 1, 1, 0, 0, 0);
				func_163(58, 0);
				func_176(iVar1, "TCP_5", 1, 1, 0, 0, 0);
				func_163(59, 0);
				func_176(iVar1, "TCP_5", 1, 1, 0, 0, 0);
				func_163(57, 0);
				iVar1 = 2;
				func_176(iVar1, "TCP_HAND3", 0, 1, 0, 0, 0);
				func_176(iVar1, "TCP_2", 1, 1, 0, 0, 0);
				func_163(58, 0);
				func_176(iVar1, "TCP_3", 1, 1, 0, 0, 0);
				func_163(60, 0);
				func_176(iVar1, "TCP_4", 1, 1, 0, 0, 0);
				func_163(58, 0);
				iVar1 = 3;
				func_176(iVar1, "TCP_HAND4", 0, 1, 0, 0, 0);
				func_176(iVar1, "TCP_A", 1, 1, 0, 0, 0);
				func_163(60, 0);
				func_176(iVar1, "TCP_Q", 1, 1, 0, 0, 0);
				func_163(60, 0);
				func_176(iVar1, "TCP_9", 1, 1, 0, 0, 0);
				func_163(60, 0);
				iVar1 = 4;
				func_176(iVar1, "TCP_HAND5", 0, 1, 0, 0, 0);
				func_176(iVar1, "TCP_K", 1, 1, 0, 0, 0);
				func_163(58, 0);
				func_176(iVar1, "TCP_K", 1, 1, 0, 0, 0);
				func_163(60, 0);
				func_176(iVar1, "TCP_7", 1, 1, 0, 0, 0);
				func_163(57, 0);
				iVar1 = 5;
				func_176(iVar1, "TCP_HAND6", 0, 1, 0, 0, 0);
				func_176(iVar1, "TCP_A", 1, 1, 0, 0, 0);
				func_163(57, 0);
				func_176(iVar1, "TCP_7", 1, 1, 0, 0, 0);
				func_163(58, 0);
				func_176(iVar1, "TCP_3", 1, 1, 0, 0, 0);
				func_163(60, 0);
				func_293(-1, 1, 1);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_20), 4);
			}
			func_263(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (unk_0x61C3701AD6D746B2(2, 202))
		{
			unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
			func_260(1, -1);
			unk_0x633E3833FB96BCCB(sVar0);
			iLocal_167 = 1;
			Local_154.f_20 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_20), 2);
		}
	}
}

void func_163(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_23270.f_5667 >= 256)
	{
		return;
	}
	if (Global_23270.f_6186 >= 4)
	{
		return;
	}
	if (Global_23270.f_6187 != 1)
	{
		return;
	}
	if (Global_23270.f_6186 >= Global_23270.f_6184)
	{
		return;
	}
	Global_23270.f_4824[Global_23270.f_5667] = iParam0;
	Global_23270.f_5667++;
	Global_23270.f_2387[Global_23270.f_6185 /*5*/][Global_23270.f_6186] = 4;
	Global_23270.f_6186++;
	if (Global_23270.f_6186 >= Global_23270.f_6184)
	{
		fVar0 = func_173();
		if (Global_23270.f_5518[Global_23270.f_5662] && Global_23270.f_6186 == Global_23270.f_6184)
		{
			func_165(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23270.f_5511[(Global_23270.f_5662 - 1)])
		{
			Global_23270.f_5511[(Global_23270.f_5662 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23270.f_6186 >= Global_23270.f_6184)
		{
			fVar3 = func_164();
			if (fVar3 > Global_23270.f_6188[Global_23270.f_5661])
			{
				Global_23270.f_6188[Global_23270.f_5661] = fVar3;
			}
		}
	}
}

float func_164()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_23270.f_6186)
	{
		if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_23270.f_4824[((Global_23270.f_5667 - iVar1) + iVar0)] != 0)
		{
			if (func_165(Global_23270.f_4824[((Global_23270.f_5667 - iVar1) + iVar0)], 1, 0, &fVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x3D634C7F6A6D4CA4(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x3D634C7F6A6D4CA4(0.35f, 0);
}

int func_165(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	float fVar6;
	
	StringCopy(&cVar0, func_172(iParam0), 64);
	StringCopy(&cVar1, func_169(iParam0, bParam1), 64);
	if (unk_0x70E57E9927B6BA58(&cVar1) != 0)
	{
		fVar4 = 1f;
		func_167(bParam5, &iVar2, &iVar3, &fVar4);
		Var5 = { unk_0x32D86930C15E1159(&cVar0, &cVar1) };
		fVar6 = (func_166(iParam0) / fVar4);
		Var5 = { Var5 * Vector(fVar6, fVar6, fVar6) };
		if (!bParam2)
		{
			Var5.f_0 = (Var5.f_0 - 2f);
			Var5.f_1 = (Var5.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var5.f_0 = 288f;
			Var5.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x70E57E9927B6BA58(&(Global_23270.f_7488[29 /*16*/])) == joaat("crew_logo"))
		{
			Var5.f_0 = 106f;
			Var5.f_1 = 106f;
		}
		*fParam3 = ((Var5.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var5.f_1 / IntToFloat(iVar3)) / (Var5.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x485ADB2D2728D748() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23269)
			{
				*fParam4 = (*fParam4 * (Global_23269 / *fParam3));
				*fParam3 = Global_23269;
			}
		}
		return 1;
	}
	return 0;
}

float func_166(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 53:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 63:
			return 0.5f;
			break;
		
		case 62:
			return 0.8f;
			break;
	}
	return 1f;
}

void func_167(bool bParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		unk_0x5949C3C031610A30(uParam1, uParam2);
		return;
	}
	unk_0x21564F65F997D833(uParam1, uParam2);
	fVar0 = to_float(*uParam1);
	fVar1 = to_float(*uParam2);
	fVar2 = unk_0x4AE9635532D92447(0);
	if (func_168(*uParam1, *uParam2))
	{
		*fParam3 = 1f;
		*uParam1 = round((fVar1 * fVar2));
		*uParam2 = round(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*uParam1 = round((fVar0 / *fParam3));
	*uParam2 = round((fVar1 / *fParam3));
}

bool func_168(int iParam0, int iParam1)
{
	return (to_float(iParam0) / to_float(iParam1)) > 3.5f;
}

var func_169(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xD6F9DEE4765092A9(&(Global_23270.f_7488[iParam0 /*16*/])))
	{
		if (unk_0x70E57E9927B6BA58(&(Global_23270.f_7488[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var2 = { func_171(unk_0x259BE71D8A81D4FA()) };
			if (unk_0xE460920F3D75C34D(&Var2, &uVar1))
			{
				return func_170(&uVar1);
			}
		}
		else
		{
			return func_170(&(Global_23270.f_7488[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 52:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 53:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 55:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 56:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 60:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 61:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 63:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_170(var uParam0)
{
	return uParam0;
}

struct<13> func_171(int iParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(iParam0, &Var0, 13);
	return Var0;
}

char* func_172(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xD6F9DEE4765092A9(&(Global_23270.f_6463[iParam0 /*16*/])))
	{
		if (unk_0x70E57E9927B6BA58(&(Global_23270.f_6463[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var1 = { func_171(unk_0x259BE71D8A81D4FA()) };
			unk_0xE460920F3D75C34D(&Var1, &uVar0);
			return func_170(&uVar0);
		}
		else
		{
			return func_170(&(Global_23270.f_6463[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 52)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

float func_173()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_23270.f_6186)
	{
		if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_174(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
	{
		unk_0x282D5DA1EE14950F(&(Global_23270.f_79[Global_23270.f_6185 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_23270.f_6186)
	{
		if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0xACF853FB3F6EA7D4(&(Global_23270.f_79[(Global_23270.f_6185 + iVar8) /*6*/]));
			}
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0xACF853FB3F6EA7D4(&(Global_23270.f_79[(Global_23270.f_6185 + iVar8) /*6*/]));
			}
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 2)
		{
			if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x511D14ED2DA887E1(Global_23270.f_4309[((Global_23270.f_5665 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 3)
		{
			if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x7DCF91CE9137DE0E(Global_23270.f_4566[((Global_23270.f_5666 - iVar4) + iVar10)], Global_23270.f_4695[((Global_23270.f_5666 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 5)
		{
			if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x60D332F23943B34F(&(Global_2695072[((Global_23270.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 6)
		{
			if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0xACF853FB3F6EA7D4(&(Global_2695072[((Global_23270.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 7)
		{
			if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x60D332F23943B34F(&(Global_2695072[((Global_23270.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 9)
		{
			if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x60D332F23943B34F(&(Global_2695072[((Global_23270.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
	{
		fVar0 = unk_0x43026780D77E3DC0(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_23270.f_4824[((Global_23270.f_5667 - iVar5) + iVar7)] != 0)
		{
			func_165(Global_23270.f_4824[((Global_23270.f_5667 - iVar5) + iVar7)], 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_174(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_175(Global_23270.f_6454[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xA306E6FD2A6558E6(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xA306E6FD2A6558E6(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xA306E6FD2A6558E6(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x5A18938160AE52D0(155, 155, 155, 255);
		}
		else
		{
			unk_0x5A18938160AE52D0(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x5A18938160AE52D0(0, 0, 0, floor((255f * 0.8f)));
		}
		else
		{
			unk_0xA306E6FD2A6558E6(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x5A18938160AE52D0(155, 155, 155, 255);
	}
	else
	{
		unk_0x5A18938160AE52D0(155, 155, 155, 255);
	}
	unk_0xBFE94E91C83D8794(0f, 0.35f);
	unk_0x2873B596E322DCDA(1);
	if (bParam5)
	{
		unk_0xBFE94E91C83D8794(0f, 0.425f);
		unk_0x8413CD3BCEEAD8DC(4);
	}
	else if (bParam6)
	{
		unk_0xBFE94E91C83D8794(0f, 0.425f);
		unk_0x8413CD3BCEEAD8DC(6);
	}
	else
	{
		unk_0x8413CD3BCEEAD8DC(0);
	}
	unk_0xE05EB1EAE7CCDC59(0f, 1f);
	unk_0xEAF65721ACB2FDFB(0);
	unk_0xB91BC43E3A58E2C8(0, 0, 0, 0, 0);
	unk_0xBE923A0FDD781C93(0, 0, 0, 0, 0);
}

void func_175(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_176(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23270.f_5661 > iParam0)
	{
		return;
	}
	if (Global_23270.f_5661 >= 128)
	{
		return;
	}
	if (Global_23270.f_5663 >= 256)
	{
		return;
	}
	if (Global_23270.f_6186 < Global_23270.f_6184)
	{
		return;
	}
	if (Global_23270.f_5661 != iParam0)
	{
		Global_23270.f_5661 = iParam0;
		Global_23270.f_5662 = 0;
	}
	iVar0 = Global_23270.f_5499[Global_23270.f_5662];
	if (iVar0 != 1)
	{
		while (Global_23270.f_5662 < 4 && iVar0 != 1)
		{
			Global_23270.f_5662++;
			iVar0 = Global_23270.f_5499[Global_23270.f_5662];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]), sParam1, 24);
	if (!unk_0xD6F9DEE4765092A9(sParam1) && !unk_0x6BA487C862DB8DDF(sParam1))
	{
	}
	Global_23270.f_1616[Global_23270.f_5663] = bParam3;
	Global_23270.f_1873[Global_23270.f_5663] = iParam4;
	Global_23270.f_2130[Global_23270.f_5663] = iParam6;
	Global_23270.f_5663++;
	if (!bParam3)
	{
		func_179(Global_23270.f_5661, 1);
	}
	else
	{
		func_179(Global_23270.f_5661, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_178(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]));
		if (Global_23270.f_5518[Global_23270.f_5662])
		{
			func_165(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23270.f_5511[Global_23270.f_5662])
		{
			Global_23270.f_5511[Global_23270.f_5662] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_177(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]));
			if (fVar4 > Global_23270.f_6188[iParam0])
			{
				Global_23270.f_6188[iParam0] = fVar4;
			}
		}
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Global_23270.f_5532[iParam0]), Global_23270.f_5662);
	Global_23270.f_5662++;
	Global_23270.f_6187 = 1;
	Global_23270.f_6185 = (Global_23270.f_5663 - 1);
	Global_23270.f_6186 = 0;
	Global_23270.f_6184 = iParam2;
}

float func_177(char* sParam0)
{
	if (!unk_0x6BA487C862DB8DDF(sParam0))
	{
	}
	return unk_0x3D634C7F6A6D4CA4(0.35f, 0);
}

float func_178(char* sParam0)
{
	if (!unk_0xFF692AB7350A74D7(sParam0))
	{
		if (unk_0x70E57E9927B6BA58(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_174(0, 1, 0, 0, 0, 0, 0);
	unk_0x282D5DA1EE14950F(sParam0);
	return unk_0x43026780D77E3DC0(1);
}

void func_179(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_23270.f_6458[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_23270.f_6458[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_180(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23270.f_5499[0] = iParam0;
	Global_23270.f_5499[1] = iParam1;
	Global_23270.f_5499[2] = iParam2;
	Global_23270.f_5499[3] = iParam3;
	Global_23270.f_5499[4] = iParam4;
	Global_23270.f_5669 = 0;
	if (iParam0 != 0)
	{
		Global_23270.f_5669++;
	}
	if (iParam1 != 0)
	{
		Global_23270.f_5669++;
	}
	if (iParam2 != 0)
	{
		Global_23270.f_5669++;
	}
	if (iParam3 != 0)
	{
		Global_23270.f_5669++;
	}
	if (iParam4 != 0)
	{
		Global_23270.f_5669++;
	}
}

void func_181(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23270.f_5526[0] = iParam0;
	Global_23270.f_5526[1] = iParam1;
	Global_23270.f_5526[2] = iParam2;
	Global_23270.f_5526[3] = iParam3;
	Global_23270.f_5526[4] = iParam4;
}

void func_182()
{
	char* sVar0;
	
	if (BitTest(Local_154.f_20, 2))
	{
		unk_0x8744D2E3FC95740E(&(Local_154.f_20), 2);
	}
	unk_0x66EFB3D6110055C4(2, 210, 1);
	unk_0x4CC1CF98851922CE(2, 210);
	if (!BitTest(Local_154.f_20, 0))
	{
		if ((unk_0x61C3701AD6D746B2(2, 210) && !unk_0x4465D55576678706(2, 209)) && !BitTest(Local_154.f_20, 3))
		{
			unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_20), false);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_384(Local_154.f_18) == 2 || func_384(Local_154.f_18) == 3) || func_419(unk_0x259BE71D8A81D4FA()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		unk_0xD0D00ED689D6CA81(sVar0, 0);
		if (func_298(0, -1, 0) && unk_0x38D063D8CF6D1967(sVar0))
		{
			if (!BitTest(Local_154.f_20, 1))
			{
				func_297(0, 0);
				func_295(1, sVar0, sVar0);
				func_294("TCP_RULES");
				func_186(1, iLocal_167, 6);
				func_185(1, 1, 1, 1, 1);
				func_293(-1, 1, 1);
				func_292(func_184(iLocal_167), 0, 0);
				func_291(func_183(iLocal_167));
				unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_20), true);
			}
			func_263(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (unk_0x61C3701AD6D746B2(2, 202))
		{
			unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
			func_260(1, -1);
			unk_0x633E3833FB96BCCB(sVar0);
			iLocal_167 = 1;
			Local_154.f_20 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_20), 2);
		}
		else if (unk_0x61C3701AD6D746B2(2, 190))
		{
			iLocal_167++;
			if (iLocal_167 > 6)
			{
				iLocal_167 = 1;
			}
			unk_0x8744D2E3FC95740E(&(Local_154.f_20), 1);
		}
		else if (unk_0x61C3701AD6D746B2(2, 189))
		{
			iLocal_167 = (iLocal_167 - 1);
			if (iLocal_167 < 1)
			{
				iLocal_167 = 6;
			}
			unk_0x8744D2E3FC95740E(&(Local_154.f_20), 1);
		}
	}
}

char* func_183(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "TCP_RULE_1";
		
		case 2:
			return "TCP_RULE_2";
		
		case 3:
			return "TCP_RULE_3";
		
		case 4:
			return "TCP_RULE_4";
		
		case 5:
			return "TCP_RULE_5";
		
		case 6:
			if ((func_384(Local_154.f_18) == 2 || func_384(Local_154.f_18) == 3) || func_419(unk_0x259BE71D8A81D4FA()))
			{
				return "TCP_RULE_6b";
			}
			else
			{
				return "TCP_RULE_6a";
			}
			break;
	}
	return "";
}

char* func_184(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "TCP_RULE_1T";
		
		case 2:
			return "TCP_RULE_2T";
		
		case 3:
			return "TCP_RULE_3T";
		
		case 4:
			return "TCP_RULE_4T";
		
		case 5:
			return "TCP_RULE_5T";
		
		case 6:
			if ((func_384(Local_154.f_18) == 2 || func_384(Local_154.f_18) == 3) || func_419(unk_0x259BE71D8A81D4FA()))
			{
				return "TCP_RULE_6Tb";
			}
			else
			{
				return "TCP_RULE_6Ta";
			}
			break;
	}
	return "";
}

void func_185(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23270.f_5518[0] = iParam0;
	Global_23270.f_5518[1] = iParam1;
	Global_23270.f_5518[2] = iParam2;
	Global_23270.f_5518[3] = iParam3;
	Global_23270.f_5518[4] = iParam4;
}

void func_186(int iParam0, int iParam1, int iParam2)
{
	Global_23270.f_6178 = iParam0;
	Global_23270.f_6179 = iParam1;
	Global_23270.f_6180 = iParam2;
}

void func_187(int iParam0)
{
	Global_1655472.f_1163 = iParam0;
}

void func_188(var uParam0, var uParam1, var uParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0x7811C74D5B749F76(2))
	{
		*uParam2 = 0;
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			if (unk_0x761778199FE1211C())
			{
				unk_0x88F483FBD433696A(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x557F1E2300EF1A3E(0);
				unk_0xE6B753D52F4CA222();
			}
			unk_0x88F483FBD433696A(*uParam0, "CLEAR_ALL");
			unk_0xE6B753D52F4CA222();
		}
		func_194(uParam2);
	}
	if (Global_1577898 < 2)
	{
		func_193(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			*uParam0 = unk_0x8DE4F68A9728925E("instructional_buttons");
		}
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			unk_0xB750FE3C9F094356(*uParam0, "CLEAR_ALL");
			if (unk_0x761778199FE1211C())
			{
				unk_0x88F483FBD433696A(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x557F1E2300EF1A3E(1);
				unk_0xE6B753D52F4CA222();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						iVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_192(unk_0xE934399D6F2C3AC5(iVar1, iVar2, 1));
						if (iVar3 < 363)
						{
							func_192(unk_0xE934399D6F2C3AC5(iVar1, iVar3, 1));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						uVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_192(unk_0xF761D79754BC3043(iVar4, uVar5, 1));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							unk_0xBD34A69071611974(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						unk_0xCFAD3D478C87321A();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						unk_0x60D332F23943B34F(&(uParam2->f_1[bVar0 /*57*/].f_38));
						unk_0xCFAD3D478C87321A();
					}
					else
					{
						func_191(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (unk_0x761778199FE1211C())
					{
						if (BitTest(uParam2->f_691, bVar0))
						{
							unk_0x557F1E2300EF1A3E(1);
							unk_0x330108B080A2132F(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							unk_0x557F1E2300EF1A3E(0);
							unk_0x330108B080A2132F(363);
						}
					}
					unk_0xE6B753D52F4CA222();
				}
				else
				{
					unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(bVar0);
					func_192(&(uParam2->f_1[bVar0 /*57*/]));
					if (!unk_0xD6F9DEE4765092A9(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_192(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							unk_0xBD34A69071611974(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						unk_0xCFAD3D478C87321A();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						unk_0x60D332F23943B34F(&(uParam2->f_1[bVar0 /*57*/].f_38));
						unk_0xCFAD3D478C87321A();
					}
					else
					{
						func_191(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (unk_0x761778199FE1211C())
					{
						unk_0x557F1E2300EF1A3E(0);
						unk_0x330108B080A2132F(363);
					}
					unk_0xE6B753D52F4CA222();
				}
				bVar0++;
			}
			unk_0x88F483FBD433696A(*uParam0, "SET_MAX_WIDTH");
			unk_0x74BF156C860580D4(uParam2->f_699);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x330108B080A2132F(false);
			unk_0xE6B753D52F4CA222();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_190(*uParam0, uParam1);
	}
	func_189();
}

void func_189()
{
	unk_0x4EB223432F8FA0A0(7);
	unk_0x4EB223432F8FA0A0(6);
	unk_0x4EB223432F8FA0A0(8);
	unk_0x4EB223432F8FA0A0(9);
}

void func_190(var uParam0, var uParam1)
{
	unk_0xA91A4C18A2DB01BD(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_191(var uParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

void func_192(char* sParam0)
{
	unk_0xCE3E870AC37B4253(sParam0);
}

void func_193(int iParam0)
{
	Global_1577898 = iParam0;
}

void func_194(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_195(var uParam0)
{
	return uParam0->f_692;
}

void func_196(var uParam0, float fParam1)
{
	uParam0->f_699 = fParam1;
}

struct<9> func_197()
{
	struct<9> Var0;
	
	Var0.f_0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

int func_198(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return 12;
		
		case 1:
		case 5:
		case 9:
		case 13:
			return 13;
		
		case 2:
		case 6:
		case 10:
		case 14:
			return 14;
		
		case 3:
		case 7:
		case 11:
		case 15:
			return 15;
		
		default:
	}
	return 0;
}

void func_199(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_689), iVar0);
	uParam3->f_1[bVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[bVar0 /*57*/].f_55 = iParam1;
	unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_690), bVar0);
	uParam3->f_693++;
}

void func_200(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

void func_201(var uParam0)
{
	func_202(uParam0);
	uParam0->f_692 = 1;
}

void func_202(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 363;
		uParam0->f_1[iVar0 /*57*/].f_56 = 363;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

var func_203(bool bParam0)
{
	if (func_148())
	{
		if (!bParam0)
		{
			switch (unk_0xC5935DFB3F39785A(0, 8))
			{
				case 0:
					Local_154.f_796 = "female_idle_cardgames_var_01";
					break;
				
				case 1:
					Local_154.f_796 = "female_idle_cardgames_var_02";
					break;
				
				case 2:
					Local_154.f_796 = "female_idle_cardgames_var_03";
					break;
				
				case 3:
					Local_154.f_796 = "female_idle_cardgames_var_04";
					break;
				
				case 4:
					Local_154.f_796 = "female_idle_cardgames_var_05";
					break;
				
				case 5:
					Local_154.f_796 = "female_idle_cardgames_var_06";
					break;
				
				case 6:
					Local_154.f_796 = "female_idle_cardgames_var_07";
					break;
				
				case 7:
					Local_154.f_796 = "female_idle_cardgames_var_08";
					break;
				}
		}
	}
	else if (!bParam0)
	{
		switch (unk_0xC5935DFB3F39785A(0, 13))
		{
			case 0:
				Local_154.f_796 = "idle_cardgames_var_01";
				break;
			
			case 1:
				Local_154.f_796 = "idle_cardgames_var_02";
				break;
			
			case 2:
				Local_154.f_796 = "idle_cardgames_var_03";
				break;
			
			case 3:
				Local_154.f_796 = "idle_cardgames_var_04";
				break;
			
			case 4:
				Local_154.f_796 = "idle_cardgames_var_05";
				break;
			
			case 5:
				Local_154.f_796 = "idle_cardgames_var_06";
				break;
			
			case 6:
				Local_154.f_796 = "idle_cardgames_var_07";
				break;
			
			case 7:
				Local_154.f_796 = "idle_cardgames_var_08";
				break;
			
			case 8:
				Local_154.f_796 = "idle_cardgames_var_09";
				break;
			
			case 9:
				Local_154.f_796 = "idle_cardgames_var_10";
				break;
			
			case 10:
				Local_154.f_796 = "idle_cardgames_var_11";
				break;
			
			case 11:
				Local_154.f_796 = "idle_cardgames_var_12";
				break;
			
			case 12:
				Local_154.f_796 = "idle_cardgames_var_13";
				break;
			}
	}
	return Local_154.f_796;
}

int func_204()
{
	if (func_205() == 0)
	{
		return 1;
	}
	return 0;
}

int func_205()
{
	return Global_1574632.f_18;
}

void func_206(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_113();
	iVar1 = unk_0x39D1D336459711BE();
	iVar2 = func_111();
	if (iVar0 == 0)
	{
		func_110();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_27188)
	{
		func_109();
		iVar2 = 0;
	}
	if ((iVar2 - iParam0) >= Global_262145.f_27189)
	{
		func_108(joaat("mpply_casino_chips_won_gd"), Global_262145.f_27189);
		func_109();
		Global_2694477 = 1;
	}
	else
	{
		func_108(joaat("mpply_casino_chips_won_gd"), (iVar2 - iParam0));
	}
}

int func_207(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x76CD105BCAC6EB9F() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0);
		}
		else
		{
			return unk_0x775142054EC39277(unk_0x0728E77B2BF91D54(), *uParam0);
		}
	}
	return unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0);
}

int func_208()
{
	if ((((Local_154.f_2 && Local_154.f_3) && Local_154.f_4) && Local_154.f_6) && (!BitTest(Local_154.f_22, 9) && Local_163.f_14 > 0))
	{
		return 1;
	}
	return 0;
}

int func_209()
{
	if (unk_0x48B835569F078653() != func_210())
	{
		return unk_0x17E5F27FA417E82E(unk_0x4470BE79F5771783(unk_0x48B835569F078653()));
	}
	return 0;
}

int func_210()
{
	return -1;
}

void func_211()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	float fVar11;
	
	if (!unk_0x6D05C5731A838CB3(2, 207))
	{
		if (bLocal_173)
		{
			func_302(unk_0x259BE71D8A81D4FA(), 0, 256, 0);
		}
		bLocal_173 = false;
	}
	if (!unk_0x6D05C5731A838CB3(2, 208))
	{
		if (bLocal_172)
		{
			func_302(unk_0x259BE71D8A81D4FA(), 0, 256, 0);
		}
		bLocal_172 = false;
	}
	if ((((Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 >= 0 && !unk_0xA43CD45F18522E3F()) && !func_339()) && !unk_0xB11671B812399BA2()) && Local_111.f_576[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2] < 12)
	{
		if (Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/] > 0 && (BitTest(Local_154.f_22, 4) || BitTest(Local_111.f_20[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2], func_198(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1))))
		{
			if ((((unk_0x6D05C5731A838CB3(2, 207) && !unk_0x6D05C5731A838CB3(2, 208)) && !bLocal_172) && !func_72(&uLocal_174)) && !unk_0x78411E34CF90EA8C(Local_154.f_13))
			{
				if (!bLocal_173)
				{
					if (unk_0xBCF87EE3DC296C2A(0) == 4)
					{
						bLocal_168 = true;
					}
					func_302(unk_0x259BE71D8A81D4FA(), 0, 0, 0);
					bLocal_173 = true;
				}
			}
		}
		else
		{
			if (bLocal_173)
			{
				func_302(unk_0x259BE71D8A81D4FA(), 0, 256, 0);
			}
			bLocal_173 = false;
		}
		if (Local_111.f_389[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*5*/] > 0)
		{
			if ((((unk_0x6D05C5731A838CB3(2, 208) && !unk_0x6D05C5731A838CB3(2, 207)) && !bLocal_173) && !func_72(&uLocal_174)) && !unk_0x78411E34CF90EA8C(Local_154.f_13))
			{
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
				{
					func_302(unk_0x259BE71D8A81D4FA(), 0, 0, 0);
				}
				bLocal_172 = true;
			}
		}
		else
		{
			if (bLocal_172)
			{
				func_302(unk_0x259BE71D8A81D4FA(), 0, 256, 0);
			}
			bLocal_172 = false;
		}
	}
	else
	{
		if (bLocal_173 || bLocal_172)
		{
			func_302(unk_0x259BE71D8A81D4FA(), 0, 256, 0);
		}
		bLocal_173 = false;
		bLocal_172 = false;
	}
	if (bLocal_172 || bLocal_173)
	{
		unk_0x2AFB778D9C7EA690(1);
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 166, 1);
		}
		if (!unk_0xBC2EE32DE886BD08("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			unk_0xCAC4020CCF361AC8("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (!unk_0x78411E34CF90EA8C(Local_154.f_13))
		{
			Local_154.f_13 = unk_0xBB209150C6081BBE(26379945, 1);
			unk_0xA3774254665BAA82(Local_154.f_13, func_223(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1, Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, bLocal_172), func_222(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1, Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, bLocal_172), func_221(bLocal_172), 0, 1, 1, 2);
			unk_0x2A09425009DAD0F5(Local_154.f_13, "HAND_SHAKE", 0.03f);
			unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
		}
		else if (bLocal_172)
		{
			if (Local_111.f_5[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2])
			{
				if (!func_98("TCP_D_HAND", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 0)))
				{
					func_97("TCP_D_HAND", func_101(func_9(&(Local_111.f_389[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
				}
			}
			else if (!func_337("TCP_D_HAND_D"))
			{
				func_158("TCP_D_HAND_D");
			}
			fVar0 = unk_0x4A1D1AB55229AAF0(Local_154.f_13);
			fVar1 = 50f;
			fVar1 = func_220();
			fVar0 = func_218(fVar0, fVar1, 0.2f, 4);
			unk_0xA3774254665BAA82(Local_154.f_13, func_223(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1, Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, bLocal_172), func_222(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1, Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, bLocal_172), fVar0, 0, 1, 1, 2);
		}
		else if (bLocal_173)
		{
			if (bLocal_168)
			{
				fVar2 = unk_0x4A1D1AB55229AAF0(Local_154.f_13);
				fVar3 = 50f;
				Var4 = { unk_0x9DDBEF363FADFA4C(Local_154.f_13, 2) };
				Var5 = { 0f, 0f, 0f };
				Var6 = { -38.1166f, -0.0930717f, -102.613f };
				Var7 = { unk_0xA452B06E281A9014(Local_154.f_13) };
				Var8 = { 0f, 0f, 0f };
				Var9 = { 966.621f, 32.009f, 116.621f };
				if (Var4.f_2 < 0f)
				{
					Var4.f_2 = (Var4.f_2 + 360f);
				}
				Var9 = { func_217(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1) };
				Var6 = { func_216(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1) };
				fVar3 = func_220();
				if (Var6.f_2 < 0f)
				{
					Var6.f_2 = (Var6.f_2 + 360f);
				}
				Var5 = { func_214(Var4, Var6, 0.35f, 4) };
				Var8 = { func_213(Var7, Var9, 0.35f, 4) };
				if (Var5.f_2 > 180f)
				{
					Var5.f_2 = (Var5.f_2 - 360f);
				}
				else if (Var5.f_2 < -180f)
				{
					Var5.f_2 = (Var5.f_2 + 360f);
				}
				if (func_212(Var4, Var6, 10f, 0) && func_212(Var7, Var9, 0.1f, 0))
				{
					fVar2 = func_218(fVar2, fVar3, 0.35f, 4);
				}
				unk_0xA3774254665BAA82(Local_154.f_13, Var8, Var5, fVar2, 0, 1, 1, 2);
			}
			else
			{
				fVar10 = unk_0x4A1D1AB55229AAF0(Local_154.f_13);
				fVar11 = 50f;
				fVar11 = func_220();
				fVar10 = func_218(fVar10, fVar11, 0.35f, 4);
				unk_0xA3774254665BAA82(Local_154.f_13, func_223(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1, Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, bLocal_172), func_222(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1, Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, bLocal_172), fVar10, 0, 1, 1, 2);
			}
		}
	}
	else
	{
		if (unk_0xBC2EE32DE886BD08("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			unk_0xB43467C43086A6A1("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (unk_0x78411E34CF90EA8C(Local_154.f_13))
		{
			unk_0x2AFB778D9C7EA690(1);
			if (!func_72(&uLocal_174) && bLocal_168)
			{
				func_73(&uLocal_174, 0, 0);
				unk_0xDCAFFD08A08087EB("PokerCamTransition", 0, 0);
			}
			else if (func_71(&uLocal_174, 100, 0) || !bLocal_168)
			{
				unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				unk_0x85E6A1E36B5E2E4D(Local_154.f_13, 0);
				unk_0x428C32CC68809A35(1);
				func_69(&uLocal_174);
				bLocal_168 = false;
			}
		}
	}
	if (bLocal_173 || bLocal_168)
	{
		if (BitTest(Local_154.f_22, 4) || BitTest(Local_111.f_20[Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2], func_198(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1)))
		{
			if (!func_98("TCP_P_HAND", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 0)))
			{
				func_97("TCP_P_HAND", func_101(func_9(&(Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1), 0, 0), 0));
			}
		}
	}
}

int func_212(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x1D5CD3EAAA7422B0((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (unk_0x1D5CD3EAAA7422B0((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x1D5CD3EAAA7422B0((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x1D5CD3EAAA7422B0((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (unk_0x1D5CD3EAAA7422B0((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_213(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0.f_0 = func_218(Param0.f_0, Param1.f_0, fParam2, iParam3);
	Var0.f_1 = func_218(Param0.f_1, Param1.f_1, fParam2, iParam3);
	Var0.f_2 = func_218(Param0.f_2, Param1.f_2, fParam2, iParam3);
	return Var0;
}

Vector3 func_214(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0.f_0 = func_215(Param0.f_0, Param1.f_0, fParam2, iParam3);
	Var0.f_1 = func_215(Param0.f_1, Param1.f_1, fParam2, iParam3);
	Var0.f_2 = func_215(Param0.f_2, Param1.f_2, fParam2, iParam3);
	return Var0;
}

float func_215(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x1D5CD3EAAA7422B0((fParam1 - fParam0));
	if (fVar0 > 180f)
	{
		if (fParam1 > fParam0)
		{
			fParam0 = (fParam0 + 360f);
		}
		else
		{
			fParam1 = (fParam1 + 360f);
		}
	}
	fVar1 = func_218(fParam0, fParam1, fParam2, iParam3);
	fVar2 = 360f;
	if (fVar1 >= 0f && fVar1 <= 360f)
	{
		return fVar1;
	}
	return (fVar1 % fVar2);
}

Vector3 func_216(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { func_233(iParam0) };
	Var1 = { -47.16f, 0f, -87.475f };
	return Vector(Var0.f_2, 0f, 0f) + Var1;
}

Vector3 func_217(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_233(iParam0) };
	return unk_0xF10F2A2453AF1DFB(func_361(iParam0), Var0.f_2, 0.198f, 0f, 1.388f);
}

float func_218(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = pow(fParam2, 2f);
			break;
		
		case 2:
		case 7:
			fParam2 = (1f - pow((1f - fParam2), 2f));
			break;
		
		case 3:
		case 8:
			fParam2 = ((-cos(func_219((3.141593f * fParam2))) / 2f) + 0.5f);
			break;
		
		case 4:
		case 9:
			fParam2 = (pow(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_218(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_218(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_219(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_220()
{
	if (bLocal_172)
	{
		return 37.8425f;
	}
	return 43.3518f;
}

float func_221(bool bParam0)
{
	float fVar0;
	
	fVar0 = 44.6546f;
	if (bParam0)
	{
		fVar0 = 40.5607f;
	}
	if (bLocal_168)
	{
		fVar0 = 50f;
	}
	return fVar0;
}

Vector3 func_222(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	
	if (bParam2)
	{
		Var0 = { -74.52f, 0f, 0f };
	}
	else if (bLocal_168)
	{
		return unk_0xD84A545408A3099A(2);
	}
	else
	{
		return func_216(iParam0);
	}
	return Vector(func_75(iParam1), 0f, 0f) + Var0;
}

Vector3 func_223(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	
	if (bParam2)
	{
		Var0 = { 0f, -0.02f, 1.62f };
	}
	else if (bLocal_168)
	{
		return unk_0xCF141FCD0940B0A3();
	}
	else
	{
		return func_217(iParam0);
	}
	return unk_0xF10F2A2453AF1DFB(func_76(iParam1), func_75(iParam1), Var0);
}

void func_224(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_225(int iParam0)
{
	if (Local_111.f_576[iParam0] == 2)
	{
		if (!BitTest(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_6, 0))
		{
			Local_154.f_799 = { Local_111.f_168[iParam0 /*55*/] };
			unk_0x0B0C9A0F9AAEB7F0(&(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_6), false);
		}
	}
	else if (Local_111.f_576[iParam0] > 2 && BitTest(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_6, 0))
	{
		if (Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/] > 0)
		{
			if (Local_154.f_854 != Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/])
			{
				Local_154.f_854 = { Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/] };
			}
			else
			{
				if (Local_154.f_854.f_1[iLocal_171] != Local_111.f_410[unk_0x259BE71D8A81D4FA() /*5*/].f_1[iLocal_171])
				{
					iLocal_170 = 0;
					iLocal_171 = 0;
					if (Global_262145.f_26827)
					{
						unk_0x5B04C6D6A21F6BDE(&Local_163);
					}
					func_379(1);
					unk_0x428C32CC68809A35(1);
					return 1;
				}
				iLocal_171++;
				if (iLocal_171 >= Local_154.f_854)
				{
					iLocal_171 = 0;
				}
			}
		}
		if (Local_111.f_168[iParam0 /*55*/].f_2[iLocal_170] != Local_154.f_799.f_2[iLocal_170])
		{
			iLocal_170 = 0;
			iLocal_171 = 0;
			if (Global_262145.f_26827)
			{
				unk_0x5B04C6D6A21F6BDE(&Local_163);
			}
			func_379(1);
			unk_0x428C32CC68809A35(1);
			return 1;
		}
		iLocal_170++;
		if (iLocal_170 >= 52)
		{
			iLocal_170 = 0;
		}
	}
	return 0;
}

void func_226()
{
	int iVar0;
	
	iVar0 = func_384(Local_154.f_18);
	if (iVar0 < 32)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Local_154.f_33), iVar0);
	}
}

int func_227(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_413())
	{
		return 0;
	}
	iVar0 = func_228(iParam0);
	if (iVar0 != func_413())
	{
		return func_326(iVar0);
	}
	return 0;
}

int func_228(int iParam0)
{
	if (iParam0 != func_413())
	{
		return Global_1894573[iParam0 /*608*/].f_10;
	}
	return func_413();
}

void func_229(var uParam0, int iParam1)
{
	if (uParam0->f_7 == iParam1)
	{
		return;
	}
	if (iParam1 < uParam0->f_7 && iParam1 != 0)
	{
		return;
	}
	if ((iParam1 == 4 || iParam1 == 5) || iParam1 == 6)
	{
		if (func_335())
		{
			func_229(uParam0, 7);
			return;
		}
	}
	uParam0->f_7 = iParam1;
	func_69(&(Local_154.f_794));
	if ((iParam1 != 0 && iParam1 != 3) && iParam1 != 8)
	{
		func_73(&(Local_154.f_794), 0, 0);
	}
}

int func_230()
{
	int iVar0;
	
	iVar0 = func_384(Local_154.f_18);
	if (iVar0 < 32)
	{
		return BitTest(Local_154.f_33, iVar0);
	}
	return 0;
}

char* func_231(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "sit_enter_left";
		
		case 1:
			return "sit_enter_left_side";
		
		case 2:
			return "sit_enter_right_side";
		
		default:
	}
	return "sit_enter_left";
}

char* func_232()
{
	return "anim_casino_b@amb@casino@games@shared@player@";
}

Vector3 func_233(int iParam0)
{
	var uVar0;
	
	if (Local_154.f_26 == 1)
	{
		if (func_414() != func_413())
		{
			uVar0 = unk_0x8366ABB82B1ABC59(func_76(func_384(iParam0)), 1f, func_234(Global_2657589[func_414() /*466*/].f_457), 0, 0, 0);
		}
	}
	else if (func_384(iParam0) == 0 || func_384(iParam0) == 1)
	{
		uVar0 = unk_0x8366ABB82B1ABC59(func_76(func_384(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01"), 0, 0, 0);
	}
	else
	{
		uVar0 = unk_0x8366ABB82B1ABC59(func_76(func_384(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01b"), 0, 0, 0);
	}
	if (unk_0xFC8BFE4B41177C22(uVar0) && unk_0xF98CC1C0E657B6CB(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_04"));
			
			case 1:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_03"));
			
			case 2:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_02"));
			
			case 3:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_01"));
			
			case 4:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_04"));
			
			case 5:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_03"));
			
			case 6:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_02"));
			
			case 7:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_01"));
			
			case 8:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_04"));
			
			case 9:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_03"));
			
			case 10:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_02"));
			
			case 11:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_01"));
			
			case 12:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_04"));
			
			case 13:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_03"));
			
			case 14:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_02"));
			
			case 15:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_234(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("h4_prop_casino_3cardpoker_01a");
			break;
		
		case 2:
			return joaat("h4_prop_casino_3cardpoker_01b");
			break;
		
		case 3:
			return joaat("h4_prop_casino_3cardpoker_01c");
			break;
		
		case 4:
			return joaat("h4_prop_casino_3cardpoker_01e");
			break;
	}
	return joaat("vw_prop_casino_3cardpoker_01b");
}

var func_235(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { unk_0x7A6103DCF5EE8CC3(func_232(), func_231(iParam1), func_361(iParam0), func_233(iParam0), 0.01f, 2) };
	return Var0.f_2;
}

float func_236(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Param1, iParam2);
}

Vector3 func_237(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { unk_0xBE8776D2466E9EA6(func_232(), func_231(iParam1), func_361(iParam0), func_233(iParam0), 0.01f, 2) };
	return Var0;
}

int func_238()
{
	unk_0x80813AC549A1E8AE(func_45());
	unk_0x80813AC549A1E8AE(func_78());
	unk_0x80813AC549A1E8AE(func_92());
	unk_0x80813AC549A1E8AE(func_232());
	if (((unk_0xE100DD4F82A51BDE(func_45()) && unk_0xE100DD4F82A51BDE(func_78())) && unk_0xE100DD4F82A51BDE(func_92())) && unk_0xE100DD4F82A51BDE(func_232()))
	{
		return 1;
	}
	return 0;
}

int func_239()
{
	if (func_71(&(Local_154.f_792), 3500, 0))
	{
		func_69(&(Local_154.f_792));
		return 1;
	}
	return 0;
}

bool func_240(int iParam0)
{
	if (Local_111.f_117[iParam0] == func_413())
	{
		return 0;
	}
	return Local_111.f_117[iParam0] != unk_0x259BE71D8A81D4FA();
}

void func_241(int iParam0)
{
	Global_1970479 = unk_0x39D1D336459711BE();
	Global_1970497 = iParam0;
	if (!func_249())
	{
		func_246();
	}
	if (!func_245())
	{
		func_242();
	}
}

void func_242()
{
	func_108(joaat("mpply_cas_gmblng_l24_px"), unk_0x39D1D336459711BE());
	func_244();
	func_243();
	Global_1970493 = 1;
	Global_1970488 = 0;
}

void func_243()
{
	func_108(joaat("mpply_cas_24h_gmblng_px"), unk_0x39D1D336459711BE());
}

void func_244()
{
	func_108(joaat("mpply_cas_gmblng_l24"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_1"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_2"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_3"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_4"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_5"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_6"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_7"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_8"), 0);
	func_108(joaat("mpply_cas_cur_gmblng_hr"), 0);
	func_108(joaat("mpply_cas_24h_gmblng_px"), 0);
}

bool func_245()
{
	return Global_1970493;
}

void func_246()
{
	func_108(joaat("mpply_casino_gmblng_gd"), unk_0x39D1D336459711BE());
	func_248();
	func_247((unk_0x39D1D336459711BE() + 86400));
	Global_1970492 = 1;
}

void func_247(int iParam0)
{
	Global_1970487 = iParam0;
}

void func_248()
{
	func_108(joaat("mpply_cas_cur_gmblng_px"), unk_0x39D1D336459711BE());
}

bool func_249()
{
	return func_112(joaat("mpply_casino_gmblng_gd")) != 0;
}

bool func_250(int iParam0)
{
	return Local_111.f_117[iParam0] == unk_0x259BE71D8A81D4FA();
}

void func_251()
{
	func_363(2);
	unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 185, 0);
	func_341();
	func_302(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
	func_259();
	unk_0x8744D2E3FC95740E(&(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_321.f_4), 3);
	func_252();
}

void func_252()
{
	int iVar0;
	int iVar1;
	
	if (Global_1970497 != -1)
	{
		iVar0 = (unk_0x39D1D336459711BE() - Global_1970479);
		iVar1 = (unk_0x39D1D336459711BE() - Global_1970480);
		if (Global_1970480 == -1)
		{
			func_253(iVar0);
		}
		else
		{
			func_253(iVar1);
		}
		func_248();
		func_243();
		Global_1970479 = -1;
		Global_1970480 = -1;
		Global_1970497 = -1;
	}
}

void func_253(int iParam0)
{
	int iVar0;
	
	iVar0 = func_258();
	Global_1970488 = (Global_1970488 + iParam0);
	func_254(iVar0, iParam0);
	func_243();
}

void func_254(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1[9];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	iVar2 = (iParam0 + 1 * 12 - 12);
	iVar3 = 1;
	if ((iVar2 % 32) + 12 > 32)
	{
		iVar3 = 2;
	}
	iVar4 = floor((to_float(iVar2) / 32f));
	if (iVar4 < 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		if ((iVar4 + iVar0) >= 9)
		{
			return;
		}
		iVar5 = func_257((iVar4 + iVar0));
		uVar1[(iVar4 + iVar0)] = func_112(iVar5);
		iVar0++;
	}
	iVar6 = func_256(&uVar1, iParam0, 12);
	iVar6 = (iVar6 + iParam1);
	func_255(&uVar1, iParam0, 12, iVar6);
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		uVar7 = func_257((iVar4 + iVar0));
		func_108(uVar7, uVar1[(iVar4 + iVar0)]);
		iVar0++;
	}
}

void func_255(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar2 = (iParam1 + 1 * iParam2);
	iVar3 = (iVar2 - iParam2);
	iVar4 = floor((to_float(iVar3) / 32f));
	iVar5 = ceil((to_float((((iVar3 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar4 - 1) + iVar5) >= *uParam0)
	{
		return;
	}
	bVar6 = false;
	iVar7 = (iVar3 % 32);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		iVar8 = (32 - iVar7);
		if (iVar8 > (iParam2 - bVar6))
		{
			iVar8 = (iParam2 - bVar6);
		}
		iVar1 = iVar7;
		while (iVar1 <= ((iVar7 + iVar8) - 1))
		{
			if (BitTest(iParam3, bVar6))
			{
				unk_0x0B0C9A0F9AAEB7F0(uParam0[(iVar4 + iVar0)], iVar1);
			}
			else
			{
				unk_0x8744D2E3FC95740E(uParam0[(iVar4 + iVar0)], bVar1);
			}
			bVar6++;
			bVar1++;
		}
		if (iVar7 > 0)
		{
			iVar7 = 0;
		}
		else
		{
			iVar7 = (iVar7 + iVar8);
		}
		iVar0++;
	}
}

int func_256(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar3 = (iParam1 + 1 * iParam2);
	iVar4 = (iVar3 - iParam2);
	iVar5 = floor((to_float(iVar4) / 32f));
	iVar6 = ceil((to_float((((iVar4 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar5 - 1) + iVar6) >= *uParam0)
	{
		return 0;
	}
	iVar7 = 0;
	iVar8 = (iVar4 % 32);
	iVar0 = 0;
	while (iVar0 < iVar6)
	{
		iVar9 = (32 - iVar8);
		if (iVar9 > (iParam2 - iVar7))
		{
			iVar9 = (iParam2 - iVar7);
		}
		bVar1 = iVar8;
		while (bVar1 <= ((iVar8 + iVar9) - 1))
		{
			if (BitTest((*uParam0)[(iVar5 + iVar0)], bVar1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&uVar2, iVar7);
			}
			bVar7++;
			bVar1++;
		}
		if (iVar8 > 0)
		{
			iVar8 = 0;
		}
		else
		{
			iVar8 = (iVar8 + iVar9);
		}
		iVar0++;
	}
	return uVar2;
}

int func_257(int iParam0)
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MPPLY_CAS_GMBLNG_L24", 24);
	if (iParam0 > 0)
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, iParam0, 24);
	}
	return unk_0x70E57E9927B6BA58(&cVar0);
}

int func_258()
{
	return func_112(joaat("mpply_cas_cur_gmblng_hr"));
}

void func_259()
{
	if (Global_2672505.f_947.f_10)
	{
		Global_2672505.f_947.f_10 = 0;
	}
}

void func_260(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_262(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23270.f_8892)
	{
		unk_0xDCFF86AAD108A201(15);
		Global_23270.f_8892 = 0;
	}
	unk_0x043244A32AD6E17D(0f);
	if (Global_23270.f_6071[iVar0])
	{
		unk_0xA790E8E6FD7393AC(9, 0);
		Global_23270.f_6071[iVar0] = 0;
	}
	if (Global_23270.f_6057[iVar0])
	{
		unk_0x633E3833FB96BCCB("CommonMenu");
		Global_23270.f_6057[iVar0] = 0;
	}
	if (Global_23270.f_6064[iVar0])
	{
		unk_0x633E3833FB96BCCB("MPShopSale");
		Global_23270.f_6064[iVar0] = 0;
	}
	if (bParam0)
	{
		func_261(&(Global_23270.f_6103[iVar0 /*10*/]));
		Global_23270.f_6164[iVar0] = 0;
	}
	else
	{
		Global_23270.f_6164[iVar0] = 0;
	}
}

void func_261(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			unk_0xD314260005F064BF(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_262(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x76CD105BCAC6EB9F() && unk_0xE8DB952A4BA8F328())
		{
			iParam2 = unk_0xF25E5B7C1279A85B();
		}
	}
	StringCopy(&cVar0, unk_0x1AF90EB93E0012D6(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x70E57E9927B6BA58(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_23270.f_6164[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_23270.f_6164[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_23270.f_6164[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_263(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	var uVar58;
	var uVar59;
	float fVar60;
	char cVar61[64];
	char cVar62[64];
	float fVar63;
	int iVar64;
	float fVar65;
	float fVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	char cVar73[16];
	float fVar74;
	float fVar75;
	float fVar76;
	float fVar77;
	float fVar78;
	
	if (!func_262(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_287(0, bParam6))
	{
		return;
	}
	unk_0x9A122D542F2BB60E(76, 84);
	unk_0x9C066F8D86A1A438(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_23270)
	{
		if (func_165(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = (fVar37 / fVar36);
		}
		else
		{
			Global_23270 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23269;
	}
	fVar55 = (fParam5 * fVar56);
	if (unk_0x70E57E9927B6BA58(&(Global_23270.f_1)) == unk_0x70E57E9927B6BA58("HIDE"))
	{
		fVar57 = Global_23268;
	}
	else
	{
		fVar57 = (((Global_23268 + fVar55) + 0.034722f) + 0f);
	}
	fVar60 = 1f;
	func_167(bParam7, &uVar58, &uVar59, &fVar60);
	if (bParam3)
	{
		if (Global_23270.f_5661 <= 1)
		{
			func_176(Global_23270.f_5661 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_23270.f_6457 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23270.f_6171)
		{
			if (unk_0x70E57E9927B6BA58(&(Global_23270.f_1)) == unk_0x70E57E9927B6BA58("HIDE"))
			{
				fVar49 = Global_23268;
			}
			else
			{
				if (Global_23270)
				{
					StringCopy(&cVar61, func_172(29), 64);
					StringCopy(&cVar62, func_169(29, 1), 64);
					if (unk_0x70E57E9927B6BA58(&(Global_23270.f_7488[29 /*16*/])) == joaat("crew_logo"))
					{
						func_286(Global_23267, Global_23268, fParam5, fVar55, 0, 0, 0, 255);
						unk_0xFFA2B456A81EA1EB(&cVar61, &cVar62, (Global_23267 + (fParam5 * 0.5f)), (Global_23268 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, 0, 0);
					}
					else
					{
						unk_0xFFA2B456A81EA1EB(&cVar61, &cVar62, (Global_23267 + (fParam5 * 0.5f)), (Global_23268 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, 0, 0);
					}
				}
				if (Global_23270.f_8862)
				{
					iVar1 = Global_23270.f_8858;
					iVar2 = Global_23270.f_8859;
					iVar3 = Global_23270.f_8860;
					iVar4 = Global_23270.f_8861;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_286(Global_23267, (Global_23268 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_23268 + fVar55) + 0.034722f) + 0f);
				if (unk_0x70E57E9927B6BA58(&(Global_23270.f_1)) != 0)
				{
					func_285();
					unk_0xEAEB6E7D3FAEBD5B(&(Global_23270.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23270.f_74)
					{
						if (Global_23270.f_5[iVar14] == 2)
						{
							unk_0x511D14ED2DA887E1(Global_23270.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23270.f_5[iVar14] == 3)
						{
							unk_0x7DCF91CE9137DE0E(Global_23270.f_14[iVar16], Global_23270.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23270.f_5[iVar14] == 1)
						{
							unk_0xACF853FB3F6EA7D4(&(Global_23270.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23270.f_5[iVar14] == 8)
						{
							unk_0xACF853FB3F6EA7D4(&(Global_23270.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23270.f_5[iVar14] == 5)
						{
							unk_0x60D332F23943B34F(&(Global_23270.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23270.f_5[iVar14] == 6)
						{
							unk_0xACF853FB3F6EA7D4(&(Global_23270.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23270.f_5[iVar14] == 7)
						{
							unk_0x60D332F23943B34F(&(Global_23270.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23270.f_5[iVar14] == 9)
						{
							unk_0x60D332F23943B34F(&(Global_23270.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x25DD447A6EB3A86F((Global_23267 + 0.00390625f), ((Global_23268 + fVar55) + 0.00416664f), 0);
				}
				if (Global_23270.f_6178)
				{
					func_285();
					func_283((((Global_23267 + fParam5) - 0.00390625f) - func_284("CM_ITEM_COUNT", Global_23270.f_6179, Global_23270.f_6180)), ((Global_23268 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23270.f_6179, Global_23270.f_6180);
				}
				else if (Global_23270.f_6174 > Global_23270.f_5668)
				{
					if (Global_23270.f_6177 != 0)
					{
						func_285();
						func_283((((Global_23267 + fParam5) - 0.00390625f) - func_284("CM_ITEM_COUNT", Global_23270.f_6177, Global_23270.f_6176)), ((Global_23268 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23270.f_6177, Global_23270.f_6176);
					}
				}
			}
			iVar6 = Global_23270.f_6181;
			iVar9 = 0;
			fVar63 = fVar49;
			if (Global_23270.f_8872)
			{
				iVar1 = Global_23270.f_8868;
				iVar2 = Global_23270.f_8869;
				iVar3 = Global_23270.f_8870;
				iVar4 = Global_23270.f_8871;
			}
			else
			{
				unk_0xA306E6FD2A6558E6(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23270.f_5668 && iVar6 <= Global_23270.f_5661)
			{
				if (iVar6 >= 0)
				{
					if (Global_23270.f_5928[iVar6])
					{
						if (Global_23270.f_5799[iVar6] && iVar6 != Global_23270.f_6181)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_23270.f_6188[iVar6] != 0f)
						{
							fVar54 = Global_23270.f_6188[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar63 + ((fVar49 - fVar63) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar63), 0f, 255, 255, 255, 255, 0, 0);
			if (Global_23270.f_6174 > Global_23270.f_5668)
			{
				if (Global_23270.f_8877)
				{
					iVar1 = Global_23270.f_8873;
					iVar2 = Global_23270.f_8874;
					iVar3 = Global_23270.f_8875;
					iVar4 = Global_23270.f_8876;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_286(Global_23267, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0x32D86930C15E1159("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar60));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar60));
				if (Global_23270.f_8890)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xA306E6FD2A6558E6(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFFA2B456A81EA1EB("CommonMenu", "shop_arrows_upANDdown", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x70E57E9927B6BA58(&(Global_23270.f_5081)) != 0 && Global_23270.f_5163 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_23267 + 0.0046875f);
				if (Global_23270.f_5165 != 0)
				{
					func_165(Global_23270.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23267 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_282(fVar40);
				unk_0x012F78DEB1F1AF9C(&(Global_23270.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23270.f_5159)
				{
					if (Global_23270.f_5093[iVar14] == 2)
					{
						unk_0x511D14ED2DA887E1(Global_23270.f_5098[iVar15]);
						iVar15++;
					}
					else if (Global_23270.f_5093[iVar14] == 3)
					{
						unk_0x7DCF91CE9137DE0E(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
						iVar16++;
					}
					else if (Global_23270.f_5093[iVar14] == 1)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 5)
					{
						unk_0x60D332F23943B34F(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 6)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 7)
					{
						unk_0x60D332F23943B34F(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 9)
					{
						unk_0x60D332F23943B34F(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x83FBFC2ED3CA1611(fVar40, (fVar49 + 0.00277776f));
				unk_0xA306E6FD2A6558E6(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_286(Global_23267, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23270.f_8882)
				{
					iVar1 = Global_23270.f_8878;
					iVar2 = Global_23270.f_8879;
					iVar3 = Global_23270.f_8880;
					iVar4 = Global_23270.f_8881;
				}
				else
				{
					unk_0xA306E6FD2A6558E6(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x3D634C7F6A6D4CA4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x3D634C7F6A6D4CA4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_282(fVar40);
				unk_0xEAEB6E7D3FAEBD5B(&(Global_23270.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23270.f_5159)
				{
					if (Global_23270.f_5093[iVar14] == 2)
					{
						unk_0x511D14ED2DA887E1(Global_23270.f_5098[iVar15]);
						iVar15++;
					}
					else if (Global_23270.f_5093[iVar14] == 3)
					{
						unk_0x7DCF91CE9137DE0E(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
						iVar16++;
					}
					else if (Global_23270.f_5093[iVar14] == 1)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 5)
					{
						unk_0x60D332F23943B34F(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 6)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 7)
					{
						unk_0x60D332F23943B34F(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 9)
					{
						unk_0x60D332F23943B34F(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 8)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x25DD447A6EB3A86F(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_23270.f_5165 != 0)
				{
					func_165(Global_23270.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
					func_281(Global_23270.f_5165, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xFFA2B456A81EA1EB(func_172(Global_23270.f_5165), func_169(Global_23270.f_5165, 1), ((Global_23267 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
				}
				fVar49 = (fVar49 + (((unk_0x3D634C7F6A6D4CA4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (!unk_0xD6F9DEE4765092A9(&(Global_23270.f_5087)))
				{
					fVar49 = (fVar49 + (0.00138888f * 6f));
					func_282(fVar40);
					unk_0x012F78DEB1F1AF9C(&(Global_23270.f_5087));
					iVar6 = unk_0x83FBFC2ED3CA1611(fVar40, (fVar49 + 0.00277776f));
					unk_0xA306E6FD2A6558E6(2, &iVar1, &iVar2, &iVar3, &iVar4);
					func_286(Global_23267, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
					if (Global_23270.f_8882)
					{
						iVar1 = Global_23270.f_8878;
						iVar2 = Global_23270.f_8879;
						iVar3 = Global_23270.f_8880;
						iVar4 = Global_23270.f_8881;
					}
					else
					{
						unk_0xA306E6FD2A6558E6(140, &iVar1, &iVar2, &iVar3, &iVar4);
					}
					unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x3D634C7F6A6D4CA4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x3D634C7F6A6D4CA4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
					func_282(fVar40);
					unk_0xEAEB6E7D3FAEBD5B(&(Global_23270.f_5087));
					unk_0x25DD447A6EB3A86F(fVar40, (fVar49 + 0.00277776f), 0);
					fVar49 = (fVar49 + (((unk_0x3D634C7F6A6D4CA4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				}
				if (Global_23270.f_5163 > 0)
				{
					if ((unk_0x1DD05E817C89C737() - Global_23270.f_5164) > Global_23270.f_5163)
					{
						StringCopy(&(Global_23270.f_5081), "", 24);
						Global_23270.f_5163 = -1;
					}
				}
			}
			else if (!unk_0xD6F9DEE4765092A9(&(Global_23270.f_5087)))
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_23267 + 0.0046875f);
				func_282(fVar40);
				unk_0x012F78DEB1F1AF9C(&(Global_23270.f_5087));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23270.f_5159)
				{
					if (Global_23270.f_5093[iVar14] == 2)
					{
						unk_0x511D14ED2DA887E1(Global_23270.f_5098[iVar15]);
						iVar15++;
					}
					else if (Global_23270.f_5093[iVar14] == 3)
					{
						unk_0x7DCF91CE9137DE0E(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
						iVar16++;
					}
					else if (Global_23270.f_5093[iVar14] == 1)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 5)
					{
						unk_0x60D332F23943B34F(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 6)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 7)
					{
						unk_0x60D332F23943B34F(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 9)
					{
						unk_0x60D332F23943B34F(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x83FBFC2ED3CA1611(fVar40, (fVar49 + 0.00277776f));
				unk_0xA306E6FD2A6558E6(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_286(Global_23267, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23270.f_8882)
				{
					iVar1 = Global_23270.f_8878;
					iVar2 = Global_23270.f_8879;
					iVar3 = Global_23270.f_8880;
					iVar4 = Global_23270.f_8881;
				}
				else
				{
					unk_0xA306E6FD2A6558E6(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x3D634C7F6A6D4CA4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x3D634C7F6A6D4CA4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_282(fVar40);
				unk_0xEAEB6E7D3FAEBD5B(&(Global_23270.f_5087));
				unk_0x25DD447A6EB3A86F(fVar40, (fVar49 + 0.00277776f), 0);
			}
			if (unk_0x70E57E9927B6BA58(&(Global_4540953.f_21)) != 0 && Global_4540953.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_23267 + 0.0046875f);
				if (Global_4540953.f_67 != 0)
				{
					func_165(Global_4540953.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23267 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_282(fVar40);
				unk_0x012F78DEB1F1AF9C(&(Global_4540953.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4540953.f_61)
				{
					if (Global_4540953.f_25[iVar14] == 2)
					{
						unk_0x511D14ED2DA887E1(Global_4540953.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4540953.f_25[iVar14] == 3)
					{
						unk_0x7DCF91CE9137DE0E(Global_4540953.f_34[iVar16], Global_4540953.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4540953.f_25[iVar14] == 1)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 5)
					{
						unk_0x60D332F23943B34F(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 6)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 7)
					{
						unk_0x60D332F23943B34F(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 9)
					{
						unk_0x60D332F23943B34F(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 8)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x83FBFC2ED3CA1611(fVar40, (fVar49 + 0.00277776f));
				unk_0xA306E6FD2A6558E6(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_286(Global_23267, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23270.f_8882)
				{
					iVar1 = Global_23270.f_8878;
					iVar2 = Global_23270.f_8879;
					iVar3 = Global_23270.f_8880;
					iVar4 = Global_23270.f_8881;
				}
				else
				{
					unk_0xA306E6FD2A6558E6(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x3D634C7F6A6D4CA4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x3D634C7F6A6D4CA4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_282(fVar40);
				unk_0xEAEB6E7D3FAEBD5B(&(Global_4540953.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4540953.f_61)
				{
					if (Global_4540953.f_25[iVar14] == 2)
					{
						unk_0x511D14ED2DA887E1(Global_4540953.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4540953.f_25[iVar14] == 3)
					{
						unk_0x7DCF91CE9137DE0E(Global_4540953.f_34[iVar16], Global_4540953.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4540953.f_25[iVar14] == 1)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 8)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 5)
					{
						unk_0x60D332F23943B34F(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 6)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 7)
					{
						unk_0x60D332F23943B34F(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 9)
					{
						unk_0x60D332F23943B34F(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x25DD447A6EB3A86F(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4540953.f_67 != 0)
				{
					func_165(Global_4540953.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_281(Global_4540953.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xFFA2B456A81EA1EB(func_172(Global_4540953.f_67), func_169(Global_4540953.f_67, 1), ((Global_23267 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
				}
				fVar49 = (fVar49 + (((unk_0x3D634C7F6A6D4CA4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4540953.f_65 > 0)
				{
					if ((unk_0x1DD05E817C89C737() - Global_4540953.f_66) > Global_4540953.f_65)
					{
						StringCopy(&(Global_4540953.f_21), "", 16);
						Global_4540953.f_65 = -1;
					}
				}
			}
			func_276(uVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0x9A122D542F2BB60E(76, 84);
			unk_0x9C066F8D86A1A438(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23270.f_6171)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar64 = Global_23270.f_5661;
			if (Global_23270.f_6172)
			{
				iVar64 = (Global_23270.f_6175 - 1);
			}
			fVar65 = 0f;
			fVar66 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar64)
			{
				fVar54 = 0.034722f;
				if (Global_23270.f_6188[iVar6] != 0f)
				{
					fVar54 = Global_23270.f_6188[iVar6];
				}
				if (Global_23270.f_6172)
				{
					iVar6 = Global_23270.f_8513[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23270.f_6181 && iVar9 < Global_23270.f_5668)
				{
					bVar33 = true;
					if (Global_23270.f_6182 == iVar6)
					{
						fVar66 = fVar65;
					}
					if (Global_23270.f_5799[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23270.f_6322[iVar6] = fVar35;
				fVar34 = (Global_23267 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_23270.f_6182 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar68 = 255;
					iVar69 = 255;
					iVar70 = 255;
					iVar71 = 255;
					if (Global_23270.f_8884)
					{
						unk_0xA306E6FD2A6558E6(Global_23270.f_8883, &iVar68, &iVar69, &iVar70, &iVar71);
					}
					else
					{
						unk_0xA306E6FD2A6558E6(1, &iVar68, &iVar69, &iVar70, &iVar71);
					}
					unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Nav", (Global_23267 + (fParam5 * 0.5f)), (((fVar57 + fVar66) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar68, iVar69, iVar70, iVar71, 0, 0);
					Global_23270.f_6320 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23270.f_5669)
				{
					if (BitTest(Global_23270.f_5532[iVar6], iVar8) || Global_23270.f_5499[iVar8] == 5)
					{
						if (Global_23270.f_6172)
						{
							iVar19 = Global_23270.f_8529[((iVar9 * Global_23270.f_5669) + iVar8)];
							iVar20 = Global_23270.f_8570[((iVar9 * Global_23270.f_5669) + iVar8)];
							iVar21 = Global_23270.f_8611[((iVar9 * Global_23270.f_5669) + iVar8)];
							iVar22 = Global_23270.f_8652[((iVar9 * Global_23270.f_5669) + iVar8)];
							iVar23 = Global_23270.f_8693[((iVar9 * Global_23270.f_5669) + iVar8)];
						}
						else
						{
							Global_23270.f_8529[((iVar9 * Global_23270.f_5669) + iVar8)] = iVar19;
							Global_23270.f_8570[((iVar9 * Global_23270.f_5669) + iVar8)] = iVar20;
							Global_23270.f_8611[((iVar9 * Global_23270.f_5669) + iVar8)] = iVar21;
							Global_23270.f_8652[((iVar9 * Global_23270.f_5669) + iVar8)] = iVar22;
							Global_23270.f_8693[((iVar9 * Global_23270.f_5669) + iVar8)] = iVar23;
						}
						iVar72 = 0;
						bVar53 = false;
						if (Global_23270.f_6454[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23270.f_6451[0])
							{
								bVar53 = true;
								iVar72 = 0;
							}
						}
						if (Global_23270.f_6454[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23270.f_6451[1])
							{
								bVar53 = true;
								iVar72 = 1;
							}
						}
						if (Global_23270.f_5505[iVar8] != -1f)
						{
							fVar34 = ((Global_23267 + 0.0046875f) + Global_23270.f_5505[iVar8]);
						}
						if ((iVar8 < 4 && Global_23270.f_5505[iVar8 + 1] != -1f) && fVar34 < Global_23270.f_5505[iVar8 + 1])
						{
							fVar44 = (Global_23270.f_5505[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_23267 + Global_23269) - 0.0046875f) - fVar34);
						}
						if ((Global_23270.f_5518[iVar8] && Global_23270.f_6317) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_23270.f_5499[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23270.f_6172)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23270.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											if (Global_23270.f_2130[iVar24])
											{
												bVar51 = true;
											}
											func_174(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, iVar72, bVar51, bVar50);
											unk_0x282D5DA1EE14950F(&(Global_23270.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xACF853FB3F6EA7D4(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xACF853FB3F6EA7D4(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x60D332F23943B34F(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xACF853FB3F6EA7D4(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x60D332F23943B34F(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x60D332F23943B34F(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x511D14ED2DA887E1(Global_23270.f_4309[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x7DCF91CE9137DE0E(Global_23270.f_4566[(iVar21 + iVar27)], Global_23270.f_4695[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
										{
											fVar41 = unk_0x43026780D77E3DC0(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_165(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_23270.f_4824[(iVar22 + iVar14)] == 2 || Global_23270.f_4824[(iVar22 + iVar14)] == 52) || Global_23270.f_4824[(iVar22 + iVar14)] == 62)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_23270.f_5526[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_23270.f_5526[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar40;
										Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar41;
										Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar42;
										if (Global_23270.f_5526[iVar8] == 2)
										{
											iVar67 = (iVar8 - 1);
											while (iVar67 >= 0)
											{
												if (Global_23270.f_5526[iVar67] == 2)
												{
													Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar67)] = (Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar67)] - Global_23270.f_5511[iVar8]);
												}
												iVar67 = (iVar67 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
										fVar41 = Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
										fVar42 = Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)];
									}
									if (bVar52)
									{
										if (func_165(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23270.f_5526[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_281(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_172(26), func_169(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
										if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_281(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_172(27), func_169(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23270.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										if (Global_23270.f_2130[iVar24])
										{
											bVar51 = true;
										}
										func_174(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_23270.f_8888 && Global_23270.f_8889 == iVar6)
										{
											func_275(bVar32);
										}
										unk_0xEAEB6E7D3FAEBD5B(&(Global_23270.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xACF853FB3F6EA7D4(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xACF853FB3F6EA7D4(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x60D332F23943B34F(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xACF853FB3F6EA7D4(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x60D332F23943B34F(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x60D332F23943B34F(&(Global_2695072[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x511D14ED2DA887E1(Global_23270.f_4309[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x7DCF91CE9137DE0E(Global_23270.f_4566[(iVar21 + iVar27)], Global_23270.f_4695[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23270.f_4824[(iVar22 + iVar28)] == 2 || Global_23270.f_4824[(iVar22 + iVar28)] == 52) || Global_23270.f_4824[(iVar22 + iVar28)] == 62)
											{
												if (func_165(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_165(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_281(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_23270.f_5526[iVar8] == 2)
															{
																unk_0xFFA2B456A81EA1EB(func_172(Global_23270.f_4824[(iVar22 + iVar28)]), func_169(Global_23270.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
															}
															else
															{
																unk_0xFFA2B456A81EA1EB(func_172(Global_23270.f_4824[(iVar22 + iVar28)]), func_169(Global_23270.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x70E57E9927B6BA58(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23270.f_5526[iVar8] == 2)
										{
											unk_0x25DD447A6EB3A86F(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0x25DD447A6EB3A86F((fVar34 + fVar40), fVar35, 0);
											if (func_274() && unk_0x486FF5D06E9659F1(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23270.f_2130[iVar24])
													{
														bVar51 = true;
													}
													func_174(0, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar73, "TEST_LABEL", 16);
													fVar74 = 0f;
													fVar75 = 55f;
													fVar76 = 0.0185f;
													fVar77 = 0.004f;
													fVar78 = 0.02f;
													unk_0xBFE94E91C83D8794(0f, (0.35f * 0.7f));
													unk_0x5A18938160AE52D0(255, 255, 255, 150);
													unk_0x81645EE95A114FAE((fVar34 - (fVar78 * 0.6f)), (fVar35 + (fVar76 * 0.75f)), 0.0175f, 0.035f, floor(fVar74), floor(fVar74), floor(fVar74), floor(fVar75), 0);
													unk_0xEAEB6E7D3FAEBD5B(&cVar73);
													unk_0x511D14ED2DA887E1((Global_23270.f_6181 + iVar30));
													unk_0x25DD447A6EB3A86F((fVar34 - fVar78), (fVar35 + fVar77), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23270.f_4824[(iVar22 + iVar14)] != 2 && Global_23270.f_4824[(iVar22 + iVar14)] != 52) && Global_23270.f_4824[(iVar22 + iVar14)] != 62)
											{
												if (func_165(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_165(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_281(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_23270.f_4824[(iVar22 + iVar14)] == 30)
															{
																unk_0xFFA2B456A81EA1EB(func_172(Global_23270.f_4824[(iVar22 + iVar14)]), func_169(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), (Global_23267 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
															}
															else if (Global_23270.f_5526[iVar8] == 2)
															{
																unk_0xFFA2B456A81EA1EB(func_172(Global_23270.f_4824[(iVar22 + iVar14)]), func_169(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
															}
															else
															{
																unk_0xFFA2B456A81EA1EB(func_172(Global_23270.f_4824[(iVar22 + iVar14)]), func_169(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23270.f_6172)
									{
										func_174(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23270.f_8888 && Global_23270.f_8889 == iVar6)
										{
											func_275(bVar32);
										}
										unk_0x282D5DA1EE14950F("NUMBER");
										unk_0x511D14ED2DA887E1(Global_23270.f_4309[iVar20]);
										fVar41 = unk_0x43026780D77E3DC0(1);
										fVar40 = 0f;
										if (Global_23270.f_5526[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_23270.f_5526[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar40;
										Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
										fVar41 = Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
									}
									if (bVar52)
									{
										if (func_165(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23270.f_5526[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_281(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_172(26), func_169(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
										if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_281(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_172(27), func_169(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_174(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, 0, 0);
										func_273((fVar34 + fVar40), fVar35, "NUMBER", Global_23270.f_4309[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23270.f_6172)
									{
										func_174(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23270.f_8888 && Global_23270.f_8889 == iVar6)
										{
											func_275(bVar32);
										}
										unk_0x282D5DA1EE14950F("NUMBER");
										unk_0x7DCF91CE9137DE0E(Global_23270.f_4566[iVar21], Global_23270.f_4695[iVar21]);
										fVar41 = unk_0x43026780D77E3DC0(1);
										fVar40 = 0f;
										if (Global_23270.f_5526[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_23270.f_5526[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar40;
										Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
										fVar41 = Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
									}
									if (bVar52)
									{
										if (func_165(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23270.f_5526[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_281(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_172(26), func_169(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
										if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_281(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_172(27), func_169(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
									}
									func_174(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar53, 0, 0, 0);
									func_272((fVar34 + fVar40), fVar35, "NUMBER", Global_23270.f_4566[iVar21], Global_23270.f_4695[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_165(Global_23270.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23270.f_6172)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_23270.f_5526[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_23270.f_5526[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar40;
											Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
											fVar42 = Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)];
										}
										if (bVar52)
										{
											if (func_165(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23270.f_5526[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_281(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0xFFA2B456A81EA1EB(func_172(26), func_169(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
													}
												}
											}
											if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_281(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0xFFA2B456A81EA1EB(func_172(27), func_169(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_165(Global_23270.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_281(Global_23270.f_4824[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0xFFA2B456A81EA1EB(func_172(Global_23270.f_4824[iVar22]), func_169(Global_23270.f_4824[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_271(Global_23270.f_4824[iVar22])), (fVar37 * func_271(Global_23270.f_4824[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_23270.f_5499[iVar8] == 5)
						{
							if (Global_23270.f_5511[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23270.f_5511[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23270.f_5511[iVar8]);
							if (Global_23270.f_5518[iVar8])
							{
								if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23270.f_5511[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_23270.f_8513[iVar9] = iVar6;
						Global_23270.f_6183 = iVar6;
						iVar9++;
						if (Global_23270.f_5799[iVar6])
						{
							iVar13++;
						}
						if (Global_23270.f_6188[iVar6] != 0f)
						{
							fVar65 = (fVar65 + Global_23270.f_6188[iVar6]);
						}
						else
						{
							fVar65 = (fVar65 + 0.034722f);
						}
					}
					if (!Global_23270.f_6171)
					{
						Global_23270.f_5928[iVar6] = 1;
						if (Global_23270.f_5670[iVar6])
						{
							if (bVar32)
							{
								Global_23270.f_6177 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23270.f_6177 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23270.f_6171)
			{
				Global_23270.f_6173 = ((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12)));
				Global_23270.f_6176 = iVar11;
				Global_23270.f_6174 = iVar10;
				Global_23270.f_6171 = 1;
			}
		}
		if (!Global_23270.f_6172)
		{
			Global_23270.f_6175 = iVar9;
			Global_23270.f_6172 = 1;
		}
		iVar5++;
	}
	Global_23270.f_6319 = fVar49;
	Global_23270.f_6321 = unk_0x1DD05E817C89C737();
	unk_0x043244A32AD6E17D(Global_23270.f_6319);
	if (!Global_23270.f_8857)
	{
		func_264(0);
	}
	Global_23270.f_8857 = 0;
	if (bParam2)
	{
		unk_0x4EB223432F8FA0A0(10);
	}
	unk_0x4EB223432F8FA0A0(6);
	unk_0x4EB223432F8FA0A0(7);
	unk_0x4EB223432F8FA0A0(9);
	unk_0x4EB223432F8FA0A0(8);
	if (bParam0)
	{
		func_187(1);
	}
	unk_0x90B531766063C5CD();
}

void func_264(int iParam0)
{
	if (func_270())
	{
		return;
	}
	if (!Global_20383.f_1 == 1)
	{
		if (func_269(0))
		{
			func_265(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 2);
	}
}

void func_265(int iParam0)
{
	if (func_270())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_268())
		{
			func_267(1, 1);
		}
		else
		{
			func_267(0, 0);
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
	if (!func_266())
	{
		Global_20383.f_1 = 3;
	}
}

int func_266()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_267(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_269(0))
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

bool func_268()
{
	return BitTest(Global_1962996, 5);
}

int func_269(int iParam0)
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

bool func_270()
{
	return BitTest(Global_1962996, 19);
}

float func_271(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 49:
		case 48:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 54:
		case 45:
		case 46:
		case 47:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_272(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x7DCF91CE9137DE0E(uParam3, uParam4);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, 0);
}

void func_273(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x511D14ED2DA887E1(iParam3);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, iParam4);
}

var func_274()
{
	return unk_0x087611B922B50F13(-1762644250);
}

void func_275(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xA306E6FD2A6558E6(Global_23270.f_8885[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xA306E6FD2A6558E6(Global_23270.f_8885[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, 255);
}

void func_276(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_262(&iVar0, 0, iParam1))
	{
		return;
	}
	uParam0 = uParam0;
	if (iParam3 && !func_287(bParam4, bParam8))
	{
		return;
	}
	if (func_279())
	{
		return;
	}
	if (unk_0xA43CD45F18522E3F())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_277(unk_0x259BE71D8A81D4FA(), 0))
		{
			return;
		}
	}
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x66DA7155B68E7638() == 0 || unk_0xA43CD45F18522E3F())
		{
			return;
		}
	}
	if (Global_23270.f_5166 != 0)
	{
		if (unk_0x7811C74D5B749F76(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23270.f_5166)
			{
				if (Global_23270.f_5465[iVar1] != 363)
				{
					StringCopy(&(Global_23270.f_5168[iVar1 /*16*/]), unk_0xE934399D6F2C3AC5(2, Global_23270.f_5465[iVar1], 1), 64);
				}
				else if (Global_23270.f_5480[iVar1] != 32)
				{
					StringCopy(&(Global_23270.f_5168[iVar1 /*16*/]), unk_0xF761D79754BC3043(2, Global_23270.f_5480[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_23270.f_5167 = 0;
		}
		if (!Global_23270.f_5167)
		{
			unk_0x88F483FBD433696A(Global_23270.f_6103[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(Global_23270.f_6103[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x74BF156C860580D4((1f - (Global_23270.f_5524 / 100f)));
			unk_0xE6B753D52F4CA222();
			if (unk_0x761778199FE1211C())
			{
				unk_0x88F483FBD433696A(Global_23270.f_6103[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x557F1E2300EF1A3E(1);
				unk_0xE6B753D52F4CA222();
			}
			iVar1 = 0;
			while (iVar1 < Global_23270.f_5166)
			{
				if (unk_0x70E57E9927B6BA58(&(Global_23270.f_5393[iVar1 /*4*/])) != unk_0x70E57E9927B6BA58("PREV"))
				{
					unk_0x88F483FBD433696A(Global_23270.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x330108B080A2132F(iVar1);
					func_192(&(Global_23270.f_5168[bVar1 /*16*/]));
					iVar2 = bVar1 + 1;
					while (iVar2 < 14 && unk_0x70E57E9927B6BA58(&(Global_23270.f_5393[iVar2 /*4*/])) == unk_0x70E57E9927B6BA58("PREV"))
					{
						func_192(&(Global_23270.f_5168[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23270.f_5450[bVar1] == -1)
					{
						func_191(&(Global_23270.f_5393[bVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23270.f_5450[bVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x882AEFD55B8D51FB(&(Global_23270.f_5393[bVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xBD34A69071611974(iVar3, 70);
						}
						else
						{
							unk_0x511D14ED2DA887E1(iVar3);
						}
						unk_0xCFAD3D478C87321A();
					}
					if (unk_0x761778199FE1211C())
					{
						if (Global_23270.f_5465[bVar1] != 363 && BitTest(Global_23270.f_5495, bVar1))
						{
							unk_0x557F1E2300EF1A3E(1);
							unk_0x330108B080A2132F(Global_23270.f_5465[bVar1]);
						}
						else
						{
							unk_0x557F1E2300EF1A3E(0);
							unk_0x330108B080A2132F(363);
						}
					}
					unk_0xE6B753D52F4CA222();
				}
				bVar1++;
			}
			if (unk_0x70E57E9927B6BA58(&(Global_4540953.f_16)) != unk_0x70E57E9927B6BA58(""))
			{
				unk_0x88F483FBD433696A(Global_23270.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x330108B080A2132F(Global_23270.f_5166);
				func_192(&Global_4540953);
				if (Global_4540953.f_20 == -1)
				{
					func_191(&(Global_4540953.f_16));
				}
				else
				{
					iVar4 = Global_23270.f_5450[bVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x882AEFD55B8D51FB(&(Global_4540953.f_16));
					if (bParam5)
					{
						unk_0xBD34A69071611974(iVar4, 70);
					}
					else
					{
						unk_0x511D14ED2DA887E1(iVar4);
					}
					unk_0xCFAD3D478C87321A();
				}
				unk_0xE6B753D52F4CA222();
			}
			unk_0x88F483FBD433696A(Global_23270.f_6103[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x330108B080A2132F(false);
			unk_0x330108B080A2132F(false);
			unk_0x330108B080A2132F(false);
			unk_0x330108B080A2132F(80);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(Global_23270.f_6103[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23270.f_5525)
			{
				unk_0x330108B080A2132F(true);
			}
			else
			{
				unk_0x330108B080A2132F(false);
			}
			unk_0xE6B753D52F4CA222();
			Global_23270.f_5167 = 1;
		}
		bVar1 = false;
		while (bVar1 < Global_23270.f_5166)
		{
			if (Global_23270.f_5450[bVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x88F483FBD433696A(Global_23270.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x330108B080A2132F(bVar1);
					unk_0x882AEFD55B8D51FB(&(Global_23270.f_5393[bVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xBD34A69071611974(iParam2, 70);
					}
					else
					{
						unk_0x511D14ED2DA887E1(iParam2);
					}
					unk_0xCFAD3D478C87321A();
					unk_0xE6B753D52F4CA222();
				}
			}
			bVar1++;
		}
		if (Global_4540953.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x88F483FBD433696A(Global_23270.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x330108B080A2132F(bVar1);
				unk_0x882AEFD55B8D51FB(&(Global_4540953.f_16));
				if (bParam5)
				{
					unk_0xBD34A69071611974(iParam2, 70);
				}
				else
				{
					unk_0x511D14ED2DA887E1(iParam2);
				}
				unk_0xCFAD3D478C87321A();
				unk_0xE6B753D52F4CA222();
			}
		}
		unk_0x9A122D542F2BB60E(76, 66);
		unk_0x9C066F8D86A1A438(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23270.f_8892)
			{
				unk_0x36A472841BBC9D4A(15, 0f, -0.0375f);
				Global_23270.f_8892 = 1;
			}
		}
		else if (Global_23270.f_8892)
		{
			unk_0xDCFF86AAD108A201(15);
			Global_23270.f_8892 = 0;
		}
		unk_0x90B531766063C5CD();
		if (Global_23270.f_5498)
		{
			unk_0x9A122D542F2BB60E(82, 66);
			unk_0x9C066F8D86A1A438(0f, 0f, 0f, 0f);
			unk_0x6D16B99FEB0AFFF1(Global_23270.f_6103[iVar0 /*10*/], Global_23270.f_5496, Global_23270.f_5497, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x90B531766063C5CD();
		}
		else
		{
			unk_0xA91A4C18A2DB01BD(Global_23270.f_6103[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_277(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_278(-1, 0) == 8;
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

int func_278(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_137();
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

int func_279()
{
	struct<3> Var0;
	
	if (Global_20383.f_1 > 3)
	{
		return 1;
	}
	if (func_280())
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

int func_280()
{
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_281(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xA306E6FD2A6558E6(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 49:
		case 48:
		case 42:
		case 36:
		case 37:
		case 54:
		case 39:
		case 40:
		case 38:
		case 44:
		case 43:
		case 45:
		case 46:
		case 47:
		case 53:
		case 57:
		case 58:
		case 59:
		case 60:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 55:
			*iParam5 = 100;
			break;
		
		case 63:
			*iParam5 = 100;
			break;
		
		case 56:
			unk_0xA306E6FD2A6558E6(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_282(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA306E6FD2A6558E6(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x8413CD3BCEEAD8DC(0);
	unk_0xBFE94E91C83D8794(0f, 0.35f);
	unk_0xFB193A91887FFAB1(2);
	unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, iVar3);
	unk_0xE05EB1EAE7CCDC59(fParam0, ((Global_23267 + Global_23269) - 0.0046875f));
	unk_0xEAF65721ACB2FDFB(0);
	unk_0xB91BC43E3A58E2C8(0, 0, 0, 0, 0);
	unk_0xBE923A0FDD781C93(0, 0, 0, 0, 0);
}

void func_283(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x511D14ED2DA887E1(uParam3);
	unk_0x511D14ED2DA887E1(uParam4);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, 0);
}

float func_284(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xFF692AB7350A74D7(sParam0))
	{
		if (unk_0x70E57E9927B6BA58(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_285();
	unk_0x282D5DA1EE14950F(sParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	unk_0x511D14ED2DA887E1(uParam2);
	return unk_0x43026780D77E3DC0(1);
}

void func_285()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA306E6FD2A6558E6(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23270.f_8867)
	{
		iVar0 = Global_23270.f_8863;
		iVar1 = Global_23270.f_8864;
		iVar2 = Global_23270.f_8865;
		iVar3 = Global_23270.f_8866;
	}
	unk_0x8413CD3BCEEAD8DC(0);
	unk_0xBFE94E91C83D8794(0f, 0.35f);
	unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, iVar3);
	unk_0xE05EB1EAE7CCDC59((Global_23267 + 0.0046875f), ((Global_23267 + Global_23269) - 0.0046875f));
	unk_0xEAF65721ACB2FDFB(0);
	unk_0xB91BC43E3A58E2C8(0, 0, 0, 0, 0);
	unk_0xBE923A0FDD781C93(0, 0, 0, 0, 0);
}

void func_286(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x81645EE95A114FAE((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_287(bool bParam0, bool bParam1)
{
	if (Global_2672505.f_1685.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x9390801B06EE998F() || (func_289(8, -1) && func_288() != 65)) || (unk_0x05AA183DA1344935() != 0 && !bParam1)) || (unk_0x3555462DB47B7AB1() && !bParam0)) || unk_0x2B8BAF9BA2A3D36B()) || Global_78819) || Global_23270.f_8891) || unk_0xB11671B812399BA2()) || Global_100733.f_1474)
	{
		return 0;
	}
	return 1;
}

int func_288()
{
	return Global_1574993;
}

var func_289(int iParam0, int iParam1)
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

void func_290(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xE934399D6F2C3AC5(2, iParam0, 1);
	if (Global_23270.f_5166 >= 14)
	{
		StringCopy(&Global_4540953, sVar0, 64);
		StringCopy(&(Global_4540953.f_16), sParam1, 16);
		Global_4540953.f_20 = iParam2;
		return;
		return;
	}
	unk_0x8744D2E3FC95740E(&(Global_23270.f_5495), Global_23270.f_5166);
	StringCopy(&(Global_23270.f_5168[Global_23270.f_5166 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23270.f_5393[Global_23270.f_5166 /*4*/]), sParam1, 16);
	Global_23270.f_5450[Global_23270.f_5166] = iParam2;
	Global_23270.f_5465[Global_23270.f_5166] = iParam0;
	Global_23270.f_5480[Global_23270.f_5166] = 32;
	Global_23270.f_5166++;
}

void func_291(char* sParam0)
{
	if (Global_23270.f_5162 >= 3 || Global_23270.f_5159 >= 4)
	{
		return;
	}
	Global_23270.f_5093[Global_23270.f_5159] = 1;
	Global_23270.f_5159++;
	StringCopy(&(Global_23270.f_5110[Global_23270.f_5162 /*16*/]), sParam0, 64);
	Global_23270.f_5162++;
}

void func_292(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_23270.f_5081), sParam0, 24);
	Global_23270.f_5159 = 0;
	Global_23270.f_5160 = 0;
	Global_23270.f_5161 = 0;
	Global_23270.f_5162 = 0;
	Global_23270.f_5163 = iParam1;
	Global_23270.f_5164 = unk_0x1DD05E817C89C737();
	Global_23270.f_5165 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23270.f_5093[iVar0] = 0;
		iVar0++;
	}
}

void func_293(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_23270.f_6182 = iParam0;
	Global_23270.f_6317 = iParam2;
	if (Global_23270.f_6182 < Global_23270.f_6181)
	{
		Global_23270.f_6181 = Global_23270.f_6182;
	}
	else if ((Global_23270.f_6172 && Global_23270.f_6182 > Global_23270.f_6183) || (!Global_23270.f_6172 && Global_23270.f_6182 >= (Global_23270.f_6181 + Global_23270.f_5668)))
	{
		iVar0 = Global_23270.f_6181;
		while (iVar0 <= Global_23270.f_6182)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23270.f_5532[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23270.f_5668 && Global_23270.f_6181 < 128)
		{
			Global_23270.f_6181++;
			iVar1 = 0;
			iVar0 = Global_23270.f_6181;
			while (iVar0 <= Global_23270.f_6182)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23270.f_5532[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23270.f_6171 = 0;
	Global_23270.f_6172 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23270.f_5081), "", 24);
		StringCopy(&(Global_4540953.f_21), "", 16);
	}
}

void func_294(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_23270.f_1), sParam0, 16);
	Global_23270.f_74 = 0;
	Global_23270.f_75 = 0;
	Global_23270.f_76 = 0;
	Global_23270.f_77 = 0;
	Global_23270.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23270.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_295(int iParam0, char* sParam1, char* sParam2)
{
	Global_23270 = iParam0;
	func_296(29, sParam1, sParam2);
}

void func_296(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_23270.f_6463[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_23270.f_7488[iParam0 /*16*/]), sParam2, 64);
}

void func_297(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23270.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23270.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		StringCopy(&(Global_2695072[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23270.f_4309[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23270.f_4566[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23270.f_4824[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23270.f_5532[iVar0] = 0;
		Global_23270.f_5670[iVar0] = 0;
		Global_23270.f_5799[iVar0] = 0;
		Global_23270.f_6322[iVar0] = 0f;
		Global_23270.f_5928[iVar0] = 0;
		Global_23270.f_6188[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23270.f_5499[iVar0] = 0;
		Global_23270.f_5511[iVar0] = 0f;
		Global_23270.f_5505[iVar0] = -1f;
		Global_23270.f_5518[iVar0] = 0;
		Global_23270.f_5526[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23270.f_5393[iVar0 /*4*/]), "", 16);
		Global_23270.f_5450[iVar0] = -1;
		Global_23270.f_5465[iVar0] = 363;
		Global_23270.f_5480[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 64)
	{
		StringCopy(&(Global_23270.f_6463[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23270.f_7488[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23270.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4540953.f_16), "", 16);
	Global_4540953.f_20 = -1;
	Global_23270 = 0;
	Global_23270.f_5661 = 0;
	Global_23270.f_5662 = 0;
	Global_23270.f_5663 = 0;
	Global_23270.f_5665 = 0;
	Global_23270.f_5666 = 0;
	Global_23270.f_5667 = 0;
	Global_23270.f_5664 = 0;
	Global_23270.f_6317 = 0;
	Global_23270.f_6457 = 0;
	Global_23270.f_6182 = 0;
	Global_23270.f_6181 = 0;
	Global_23270.f_6183 = 0;
	StringCopy(&(Global_23270.f_5081), "", 24);
	Global_23270.f_5159 = 0;
	Global_23270.f_5160 = 0;
	Global_23270.f_5161 = 0;
	Global_23270.f_5162 = 0;
	Global_23270.f_5163 = 0;
	Global_23270.f_5164 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23270.f_5093[iVar0] = 0;
		iVar0++;
	}
	Global_23270.f_5165 = 0;
	StringCopy(&(Global_4540953.f_21), "", 16);
	Global_4540953.f_61 = 0;
	Global_4540953.f_62 = 0;
	Global_4540953.f_63 = 0;
	Global_4540953.f_64 = 0;
	Global_4540953.f_65 = 0;
	Global_4540953.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4540953.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4540953.f_67 = 0;
	StringCopy(&(Global_23270.f_1), "", 16);
	Global_23270.f_5517 = 0f;
	Global_23270.f_74 = 0;
	Global_23270.f_75 = 0;
	Global_23270.f_76 = 0;
	Global_23270.f_77 = 0;
	Global_23270.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23270.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23270.f_6187 = 0;
	Global_23270.f_6186 = 0;
	Global_23270.f_6184 = 0;
	Global_23270.f_6185 = 0;
	Global_23270.f_5166 = 0;
	Global_23270.f_5167 = 0;
	Global_23270.f_5668 = 10;
	Global_23270.f_5669 = 0;
	Global_23270.f_6319 = 0f;
	Global_23270.f_6320 = 0f;
	Global_23270.f_6171 = 0;
	Global_23270.f_6172 = 0;
	Global_23270.f_6173 = 0f;
	Global_23270.f_6174 = 0;
	Global_23270.f_6176 = 0;
	Global_23270.f_6175 = 0;
	Global_23270.f_6177 = 0;
	Global_23270.f_6178 = 0;
	Global_23270.f_6179 = 0;
	Global_23270.f_6180 = 0;
	Global_23270.f_8888 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23270.f_6451[iVar0] = -1;
		Global_23270.f_6454[iVar0] = -1;
		iVar0++;
	}
	Global_23270.f_5524 = 0f;
	Global_23270.f_5495 = 0;
	Global_23270.f_5525 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23270.f_6458)
	{
		Global_23270.f_6458[iVar0] = 0;
		iVar0++;
	}
	Global_23270.f_8867 = 0;
	Global_23270.f_8862 = 0;
	Global_23270.f_8872 = 0;
	Global_23270.f_8877 = 0;
	Global_23270.f_8882 = 0;
	Global_23270.f_8884 = 0;
	Global_23270.f_8890 = 0;
	Global_23267 = 0.05f;
	Global_23268 = 0.05f;
	Global_23269 = 0.225f;
	fVar2 = unk_0x4AE9635532D92447(0);
	if (bParam0)
	{
		Global_23269 = (0.225f * (1.777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23269 = (0.225f * (1.777778f / fVar2));
	}
	else
	{
		Global_23269 = 0.225f;
	}
}

bool func_298(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_262(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23270.f_6078[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xD6F9DEE4765092A9(&(Global_23270.f_6078[iVar0 /*4*/])))
	{
		unk_0xF2CB0224D3BE0B42(&(Global_23270.f_6078[iVar0 /*4*/]), 9);
		Global_23270.f_6071[iVar0] = 1;
		if (!unk_0xCC2EFE4B1D0EE422(&(Global_23270.f_6078[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xD0D00ED689D6CA81("CommonMenu", 0);
	Global_23270.f_6057[iVar0] = 1;
	if (!unk_0x38D063D8CF6D1967("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xD0D00ED689D6CA81("MPShopSale", 0);
		Global_23270.f_6064[iVar0] = 1;
		if (!unk_0x38D063D8CF6D1967("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23270.f_6103[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_299(&(Global_23270.f_6103[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_299(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xA0C7B98BCF1EEF9E(*uParam0))
			{
				*uParam0 = unk_0x8DE4F68A9728925E(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
					{
						uParam0->f_8 = unk_0x1DD05E817C89C737();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x1DD05E817C89C737();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
			{
				uParam0->f_8 = unk_0x1DD05E817C89C737();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xA0C7B98BCF1EEF9E(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_300(int iParam0)
{
	Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 = iParam0;
	Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 = func_384(iParam0);
}

bool func_301()
{
	return Global_4536666 == 1;
}

void func_302(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_311())
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
		if (!func_204())
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
				else if (bVar14 || (!func_277(unk_0x259BE71D8A81D4FA(), 0) && !func_310()))
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
					func_307(0, 0, 0);
					if (bVar25)
					{
						unk_0xE3F88173F42C071B();
					}
				}
				if (!func_306(uVar27) && !unk_0xB431D60610E7F85F(uVar27))
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
					func_305();
					func_304();
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
				if (!func_306(iVar27) && !unk_0xB431D60610E7F85F(iVar27))
				{
					if (!bVar22)
					{
						unk_0x44C48AC14D3C09ED(iVar27, !bVar15, 0);
					}
					if (!unk_0xA3736D76B0E93E93(iVar27))
					{
						if (!bVar21)
						{
							unk_0x5D7CD709B34C90F0(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x11C125313CB8ADA2(iVar27, 1);
						}
					}
					if (func_303(Global_4718592.f_166301))
					{
						unk_0x5D7CD709B34C90F0(iVar27, true);
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
				unk_0x3F58BFCF656F0DF1(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xBFD01C2045360289(iVar27) && !unk_0x7F420695E3F776FB(iVar27, 0))
					{
						unk_0x19626F992DC71FB9(iVar27);
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

bool func_303(int iParam0)
{
	return iParam0 == 17;
}

void func_304()
{
	struct<3> Var0;
	
	Global_2672505.f_1024 = 0;
	Global_2672505.f_1025 = 0;
	Global_2672505.f_1026 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672505.f_1031 = -1;
	Global_2672505.f_1032 = 0;
	Global_2635559.f_2692 = { Var0 };
}

void func_305()
{
	Global_2635559.f_702 = 0;
	Global_2635559.f_2735 = 0;
	Global_2635559.f_515 = 0;
	Global_2635559.f_606 = 0;
	Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_217 = 0;
	Global_2635559.f_2690 = 0;
}

int func_306(int iParam0)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_307(int iParam0, int iParam1, int iParam2)
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
				func_309();
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
		if (func_277(unk_0x259BE71D8A81D4FA(), 0))
		{
			unk_0x522EF6D7B4059F2C(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xF11FEC6A04FD7226(iParam0, iParam1);
		}
		unk_0x4BDB60141FD6E156(iParam0, iParam1);
		func_308(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_308(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, 1);
	}
}

void func_309()
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

bool func_310()
{
	return BitTest(Global_2621446, 3);
}

int func_311()
{
	if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861, 2) && !Global_2684801.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_312()
{
	if (!Global_2672505.f_947.f_10)
	{
		Global_2672505.f_947.f_10 = 1;
	}
}

void func_313(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_314(*uParam0);
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

int func_314(int iParam0)
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

int func_315(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_314(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x75EAB09F5E974116(unk_0xB6B621402486C3E4()))
	{
		return 0;
	}
	if (func_269(0))
	{
		return 0;
	}
	if (unk_0xFD216000DC314A92())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44000[iVar0 /*32*/] == 1 && Global_44000[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44000[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44000[iVar0 /*32*/].f_5 = 1;
			Global_44000[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44000[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44000[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_316(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 26);
}

void func_317(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x486FF5D06E9659F1(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x3555462DB47B7AB1())
	{
		if (!*uParam0 == -1)
		{
			func_313(uParam0);
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

int func_318(int iParam0)
{
	if (func_319(iParam0, 1))
	{
		return Global_1894573[func_328() /*608*/].f_10.f_428;
	}
	return -1;
}

bool func_319(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_320(iParam0))
		{
			return 0;
		}
	}
	return Global_1894573[iParam0 /*608*/].f_10 != func_413();
}

int func_320(int iParam0)
{
	if (iParam0 != func_413())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_413())
		{
			return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_321()
{
	if (((((((((func_337("TCP_USED") || func_337("CAS_MG_CBAN")) || func_337("CAS_MG_CTIME")) || func_324("CAS_MG_MEMB2", func_325(1))) || func_337("CAS_MG_SUITE2")) || func_337("CAS_MG_NOCHIPS3")) || func_337("CAS_MG_LOWCHIPS3")) || func_337("CAS_MG_NOCHIPS7")) || func_337("CAS_MG_LOWCHIPS7")) || func_337("TCP_NA"))
	{
		return 1;
	}
	return 0;
}

void func_322()
{
	if (!unk_0x0AF5E4A6C74DC312(func_325(0), 0, 1, 0, -1, 0))
	{
		func_224("MAITRD_M_D0E", -1);
	}
	else if (func_326(unk_0x259BE71D8A81D4FA()))
	{
	}
	else if (BitTest(Global_1950108.f_5, 31))
	{
	}
	else if (Global_4536666 != 0)
	{
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1950108.f_5), 30);
	}
}

void func_323(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

bool func_324(char* sParam0, int iParam1)
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	return unk_0x7EBCD400E7DE179C(0);
}

int func_325(bool bParam0)
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

int func_326(int iParam0)
{
	if (iParam0 == func_413())
	{
		return 0;
	}
	return BitTest(Global_1853910[iParam0 /*862*/].f_267.f_404.f_1, 18);
}

bool func_327()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_404.f_1, 18);
}

int func_328()
{
	return Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10;
}

bool func_329(bool bParam0)
{
	return func_319(unk_0x259BE71D8A81D4FA(), bParam0);
}

int func_330(int iParam0)
{
	if (iParam0 != func_413())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_404 != 0;
	}
	return 0;
}

int func_331()
{
	if (func_334() <= 0)
	{
		return 0;
	}
	if (func_333() <= 0)
	{
		return 1;
	}
	if (func_332())
	{
		return 2;
	}
	return 3;
}

bool func_332()
{
	return Global_1970486 != 0;
}

int func_333()
{
	return (Global_262145.f_27189 + func_111());
}

int func_334()
{
	return (Global_262145.f_27190 - func_111());
}

bool func_335()
{
	return func_331() != 3;
}

void func_336(char* sParam0)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

bool func_337(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

int func_338(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -850297695;
			break;
		
		case 1:
			iVar0 = 1316161270;
			break;
		
		case 2:
			iVar0 = 1023703758;
			break;
		
		case 5:
			iVar0 = 1045499606;
			break;
		
		case 3:
			iVar0 = 1697066635;
			break;
		
		case 4:
			iVar0 = 1144169546;
			break;
	}
	if (!unk_0xA737C76A9908948A(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_339()
{
	return unk_0x05AA183DA1344935() != 0;
}

int func_340()
{
	if (Global_4521801.f_910 == 1)
	{
		return 1;
	}
	return 0;
}

void func_341()
{
	if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 != -1)
	{
		Local_154.f_2 = 0;
		Local_154.f_3 = 0;
		Local_154.f_4 = 0;
		Local_154.f_6 = 0;
		Local_154.f_22 = 0;
		Local_153[unk_0x259BE71D8A81D4FA() /*9*/] = 0;
		Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_6 = 0;
		Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_3 = 0;
		Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_5 = 0;
		Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_4 = 0;
		Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 = -1;
		Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 = -1;
	}
}

bool func_342()
{
	return Global_2793046.f_6880;
}

int func_343()
{
	if (((func_344() != -1 && func_344() != 28) && func_344() != 17) && func_344() != 12)
	{
		return 1;
	}
	return 0;
}

int func_344()
{
	return Global_1057409;
}

bool func_345()
{
	return BitTest(Global_2683864.f_2, 11);
}

bool func_346()
{
	return Global_2683864.f_691;
}

int func_347(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	iVar0 = func_349(iParam0);
	iVar1 = func_348(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_44232[iVar1 /*5*/].f_3;
}

int func_348(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44232[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_349(int iParam0)
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
		if (iParam0 == Global_44232[iVar0 /*5*/].f_1)
		{
			return Global_44232[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_350()
{
	int iVar0;
	
	if (func_319(unk_0x259BE71D8A81D4FA(), 1))
	{
		iVar0 = func_328();
		if (func_62(iVar0, 1, 1) && BitTest(Global_1853910[iVar0 /*862*/].f_267.f_404.f_3, 6))
		{
			return 1;
		}
		if ((func_353(unk_0x259BE71D8A81D4FA(), 0) && func_351(unk_0x259BE71D8A81D4FA())) || func_409(unk_0x259BE71D8A81D4FA()))
		{
			return 1;
		}
	}
	return 0;
}

int func_351(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_352(iParam0, 9);
	}
	return 0;
}

var func_352(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_353(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_354()
{
	if (func_419(unk_0x259BE71D8A81D4FA()) && func_414() != func_413())
	{
		if ((BitTest(Global_2657589[func_414() /*466*/].f_321.f_4, 0) || BitTest(Global_1950108.f_6, 10)) || Global_2657589[func_414() /*466*/].f_457 != Global_1970471)
		{
			return 0;
		}
	}
	return 1;
}

bool func_355(int iParam0, struct<3> Param1, float fParam2)
{
	return func_356(unk_0xD1A6A821F5AC81DB(iParam0, 1), unk_0xCFC0C995455A6204(iParam0), Param1, fParam2);
}

bool func_356(struct<3> Param0, var uParam1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	var uVar1;
	
	Var0 = { unk_0xF10F2A2453AF1DFB(0f, 0f, 0f, uParam1, 0f, 1f, 0f) };
	uVar1 = func_357(func_358(Var0), func_358(Param2 - Param0));
	return unk_0x42CDD13001C98400(uVar1) <= fParam3;
}

float func_357(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_358(struct<3> Param0)
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

Vector3 func_359(int iParam0)
{
	if (Local_154.f_26 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 966.9982f, 31.2594f, 116.2281f;
			
			case 1:
				return 966.8203f, 31.9305f, 116.2222f;
			
			case 2:
				return 967.2217f, 32.4899f, 116.2216f;
			
			case 3:
				return 967.8962f, 32.6604f, 116.218f;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1142.798f, 263.5501f, -51.7869f;
			
			case 1:
				return 1142.82f, 264.2595f, -51.8004f;
			
			case 2:
				return 1143.339f, 264.7519f, -51.8289f;
			
			case 3:
				return 1144.052f, 264.7396f, -51.7913f;
			
			case 4:
				return 1146.849f, 261.9344f, -51.8167f;
			
			case 5:
				return 1146.865f, 261.2238f, -51.8003f;
			
			case 6:
				return 1146.325f, 260.7546f, -51.812f;
			
			case 7:
				return 1145.63f, 260.7765f, -51.7979f;
			
			case 8:
				return 1134.411f, 266.1568f, -50.9898f;
			
			case 9:
				return 1133.708f, 266.1863f, -50.9883f;
			
			case 10:
				return 1133.242f, 266.7186f, -50.9969f;
			
			case 11:
				return 1133.261f, 267.4263f, -50.9812f;
			
			case 12:
				return 1149.42f, 251.1891f, -50.9655f;
			
			case 13:
				return 1148.727f, 251.1957f, -50.9855f;
			
			case 14:
				return 1148.236f, 251.7239f, -51.0083f;
			
			case 15:
				return 1148.262f, 252.4149f, -51.0019f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_360(int iParam0, struct<3> Param1, float fParam2, int iParam3)
{
	return vdist2(unk_0xD1A6A821F5AC81DB(iParam0, iParam3), Param1) <= (fParam2 * fParam2);
}

Vector3 func_361(int iParam0)
{
	var uVar0;
	
	if (Local_154.f_26 == 1)
	{
		if (func_414() != func_413())
		{
			uVar0 = unk_0x8366ABB82B1ABC59(func_76(func_384(iParam0)), 1f, func_234(Global_2657589[func_414() /*466*/].f_457), 0, 0, 0);
		}
	}
	else if (func_384(iParam0) == 0 || func_384(iParam0) == 1)
	{
		uVar0 = unk_0x8366ABB82B1ABC59(func_76(func_384(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01"), 0, 0, 0);
	}
	else
	{
		uVar0 = unk_0x8366ABB82B1ABC59(func_76(func_384(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01b"), 0, 0, 0);
	}
	if (unk_0xFC8BFE4B41177C22(uVar0) && unk_0xF98CC1C0E657B6CB(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_04"));
			
			case 1:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_03"));
			
			case 2:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_02"));
			
			case 3:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_01"));
			
			case 4:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_04"));
			
			case 5:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_03"));
			
			case 6:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_02"));
			
			case 7:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_01"));
			
			case 8:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_04"));
			
			case 9:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_03"));
			
			case 10:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_02"));
			
			case 11:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_01"));
			
			case 12:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_04"));
			
			case 13:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_03"));
			
			case 14:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_02"));
			
			case 15:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_362(int iParam0)
{
	return Global_100733.f_386 == iParam0;
}

void func_363(int iParam0)
{
	Local_154.f_798 = iParam0;
}

void func_364(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	func_229(&(Local_153[iParam0 /*9*/]), 0);
	Local_153[iParam0 /*9*/].f_7.f_1 = -1;
}

int func_365()
{
	int iVar0;
	
	if (Local_154.f_26 == 1)
	{
		if (!unk_0xFC8BFE4B41177C22(Local_154.f_34))
		{
			if (func_414() != func_413())
			{
				iVar0 = func_234(Global_2657589[func_414() /*466*/].f_457);
				unk_0xEC9DAA34BBB4658C(iVar0);
				if (!unk_0x6252BC0DD8A320DB(iVar0))
				{
					return 0;
				}
				Local_154.f_34 = unk_0x4E55EAB577C13329(iVar0, func_76(0), 0, false, 1);
				unk_0x62C438C53BB57AFD(Local_154.f_34, func_76(0), 0, 0, 1);
				unk_0x5C96CEA06531AB03(Local_154.f_34, func_75(0));
				unk_0xDEFDEE8D4FA47138(Local_154.f_34, func_366(func_414()));
				unk_0x5D7CD709B34C90F0(Local_154.f_34, true);
				unk_0x55098D9E9AD58806(iVar0);
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_366(int iParam0)
{
	if (func_369(iParam0))
	{
		return 1;
	}
	else if (func_368(iParam0))
	{
		return 2;
	}
	else if (func_367(iParam0))
	{
		return 3;
	}
	return 1;
}

int func_367(int iParam0)
{
	if (iParam0 != func_413())
	{
		return BitTest(Global_1853910[iParam0 /*862*/].f_267.f_404.f_1, 21);
	}
	return 0;
}

int func_368(int iParam0)
{
	if (iParam0 != func_413())
	{
		return BitTest(Global_1853910[iParam0 /*862*/].f_267.f_404.f_1, 20);
	}
	return 0;
}

int func_369(int iParam0)
{
	if (iParam0 != func_413())
	{
		return BitTest(Global_1853910[iParam0 /*862*/].f_267.f_404.f_1, 19);
	}
	return 0;
}

void func_370(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x76CD105BCAC6EB9F() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x7E3F74F641EE6B27();
		}
		else
		{
			*uParam0 = unk_0x0728E77B2BF91D54();
		}
	}
	else
	{
		*uParam0 = unk_0x1DD05E817C89C737();
	}
	uParam0->f_1 = 1;
}

int func_371()
{
	if (Global_2672505.f_947.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_372(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			if ((func_375(unk_0x259BE71D8A81D4FA(), 1) || func_375(unk_0x259BE71D8A81D4FA(), 2)) || func_374())
			{
				func_229(uParam0, 3);
			}
			break;
		
		case 2:
			if ((func_375(unk_0x259BE71D8A81D4FA(), 1) || func_375(unk_0x259BE71D8A81D4FA(), 2)) || func_374())
			{
				func_229(uParam0, 3);
			}
			break;
		
		case 3:
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
			if (func_373())
			{
				func_229(uParam0, 8);
			}
			break;
		
		case 8:
			break;
	}
}

int func_373()
{
	if ((((func_375(unk_0x259BE71D8A81D4FA(), 4) || func_375(unk_0x259BE71D8A81D4FA(), 5)) || func_375(unk_0x259BE71D8A81D4FA(), 6)) || func_375(unk_0x259BE71D8A81D4FA(), 7)) || func_374())
	{
		return 1;
	}
	return 0;
}

int func_374()
{
	if (func_71(&(Local_154.f_794), 3500, 0))
	{
		func_69(&(Local_154.f_794));
		return 1;
	}
	return 0;
}

int func_375(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return BitTest(Local_111.f_600[iParam0], iVar0);
}

void func_376(int iParam0, int iParam1)
{
	Global_23131.f_9 = iParam0;
	Global_23131.f_10 = iParam1;
}

void func_377(bool bParam0)
{
	if (bParam0)
	{
		func_378(1);
		func_265(1);
	}
	if (!unk_0xEF37E704F02B50F3() && !unk_0x4D9174D8796EA622())
	{
		unk_0x6C978B200DAA54DE();
		unk_0xD4510218399ED105(0);
		unk_0xD6D50527C75F8C6C(1);
		unk_0x66EFB3D6110055C4(2, 200, 1);
		unk_0x66EFB3D6110055C4(2, 199, 1);
		unk_0x4CC1CF98851922CE(0, 200);
		unk_0x4CC1CF98851922CE(2, 200);
		unk_0x4CC1CF98851922CE(0, 199);
		unk_0x4CC1CF98851922CE(2, 199);
		unk_0x4CC1CF98851922CE(0, 201);
		unk_0x4CC1CF98851922CE(0, 202);
		unk_0x4CC1CF98851922CE(0, 187);
	}
}

void func_378(bool bParam0)
{
	if (bParam0)
	{
		if (func_345())
		{
			Global_2683864.f_41 = 1;
		}
	}
	else
	{
		Global_2683864.f_41 = 0;
	}
}

void func_379(bool bParam0)
{
	char* sVar0;
	
	if (Local_154.f_798 > 2 && unk_0xBCF87EE3DC296C2A(0) != 4)
	{
		if (((((!func_383() && !func_382()) && !func_381()) && !func_380()) && !func_86(unk_0x259BE71D8A81D4FA())) && !unk_0x705A7AB2D4BC0A9B())
		{
			func_302(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
		}
		func_259();
	}
	if (Local_154.f_798 > 2)
	{
		func_259();
	}
	if (BitTest(Local_154.f_20, 0) || BitTest(Local_154.f_20, 3))
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_384(Local_154.f_18) == 2 || func_384(Local_154.f_18) == 3) || func_419(unk_0x259BE71D8A81D4FA()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		func_260(1, -1);
		unk_0x633E3833FB96BCCB(sVar0);
		iLocal_167 = 1;
		Local_154.f_20 = 0;
	}
	if (unk_0x78411E34CF90EA8C(Local_154.f_13))
	{
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
		unk_0x85E6A1E36B5E2E4D(Local_154.f_13, 0);
		bLocal_168 = false;
	}
	if (Local_154.f_31 != -1)
	{
		func_313(&(Local_154.f_31));
		Local_154.f_31 = -1;
	}
	if (bParam0)
	{
		if (BitTest(Local_154.f_22, 4) && unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), func_92(), "cards_idle", 3))
		{
			Local_154.f_24 = unk_0xBC5D9A293974F095(func_361(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), func_233(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
			unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_154.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1148846080, 0);
			unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 0, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]), Local_154.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
			unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 1, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]), Local_154.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
			unk_0xDEE175A01A05A2F7(unk_0xAB3646235DE50E93(Local_111.f_68[func_41(Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2, 2, (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_1 - Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 * 4))]), Local_154.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
			unk_0xE7101255AD6F1952(Local_154.f_24);
			Local_154.f_7 = 1;
		}
		else
		{
			Local_154.f_24 = unk_0xBC5D9A293974F095(func_361(Local_154.f_18), func_233(Local_154.f_18), 2, 0, 0, 1065353216, 0, 1065353216);
			unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_154.f_24, func_232(), func_93(Local_154.f_18), 2f, -2f, 13, 16, 1148846080, 0);
			unk_0xE7101255AD6F1952(Local_154.f_24);
		}
	}
	Local_154.f_15 = 0;
	Local_154.f_23 = 0;
	Local_154.f_22 = 0;
	Local_154.f_29 = 0;
	Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_6 = 0;
	Local_154.f_1 = 0;
	Local_154.f_2 = 0;
	Local_154.f_3 = 0;
	Local_154.f_4 = 0;
	Local_154.f_6 = 0;
	Local_154.f_14 = 0;
	if (!bParam0)
	{
		func_341();
	}
	Local_164.f_4 = func_402();
	Local_164.f_5 = func_207(&uLocal_161, 0, 0);
	if (Local_154.f_798 > 2)
	{
		if (Global_262145.f_26833)
		{
			unk_0x9908830BDC036C61(&Local_164);
		}
	}
	if (!bParam0)
	{
		unk_0x8744D2E3FC95740E(&(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_321.f_4), 3);
	}
	if (bParam0 || Local_154.f_798 > 2)
	{
		func_252();
	}
	func_363(10);
	func_161(0);
}

int func_380()
{
	if (unk_0x486FF5D06E9659F1(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_381()
{
	return Global_1575060;
}

int func_382()
{
	if (func_205() == 3 || func_205() == 2)
	{
		return 1;
	}
	return 0;
}

int func_383()
{
	if (func_205() == 1 || func_205() == 4)
	{
		return 1;
	}
	return 0;
}

int func_384(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 0;
		
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
		
		case 8:
		case 9:
		case 10:
		case 11:
			return 2;
		
		case 12:
		case 13:
		case 14:
		case 15:
			return 3;
		
		default:
	}
	return 0;
}

void func_385()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_154.f_26)
	{
		if (!unk_0x93BF17E19A9F0E9B(Local_111.f_50[iVar0]))
		{
		}
		else
		{
			uVar1 = unk_0xC35A3A4C05A4831B(Local_111.f_50[iVar0]);
			if (func_387(uVar1))
			{
				if (func_386(iVar0))
				{
					unk_0x789F31BC158A5307(uVar1, 0, 1);
				}
				else
				{
					unk_0x789F31BC158A5307(uVar1, 1, 0);
				}
			}
		}
		iVar0++;
	}
}

int func_386(int iParam0)
{
	if (BitTest(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_321.f_4, 5) || BitTest(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_321.f_4, 2))
	{
		return 0;
	}
	if (BitTest(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_321.f_4, 3))
	{
		if (Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2 != iParam0)
		{
			return 0;
		}
	}
	return 1;
}

int func_387(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_388()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_154.f_26)
	{
		if (Global_2765559 != iVar0 && (Global_2765559 != -1 || func_419(unk_0x259BE71D8A81D4FA())))
		{
			if (!unk_0xFC8BFE4B41177C22(Local_154.f_35[iVar0]))
			{
				func_391(iVar0);
			}
			else if (unk_0x93BF17E19A9F0E9B(Local_111.f_50[iVar0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_111.f_50[iVar0])))
			{
				if (!iLocal_179[iVar0])
				{
					if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_111.f_50[iVar0]), func_45(), func_44(iVar0), 3))
					{
						if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iVar0]), 1691374422))
						{
							iLocal_180[iVar0] = 1;
						}
					}
					else
					{
						iLocal_180[iVar0] = 0;
					}
					if (((iLocal_180[iVar0] || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_111.f_50[iVar0]), func_45(), func_43(iVar0), 3)) || Local_111.f_576[iVar0] == 6) || Local_111.f_576[iVar0] == 7)
					{
						if (!unk_0x5B9219522937741D(Local_154.f_35[iVar0]))
						{
							unk_0x5D7CD709B34C90F0(Local_154.f_35[iVar0], false);
							unk_0x4D306DD94DD6FDBA(Local_154.f_35[iVar0], unk_0xC35A3A4C05A4831B(Local_111.f_50[iVar0]), unk_0x72F7E39FB49FC0BA(unk_0xC35A3A4C05A4831B(Local_111.f_50[iVar0]), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
						}
						iLocal_179[iVar0] = 1;
					}
				}
				else if ((unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_111.f_50[iVar0]), func_45(), func_31(iVar0), 3) && unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_111.f_50[iVar0]), 152918166)) || ((Local_111.f_576[iVar0] < 5 && !unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_111.f_50[iVar0]), func_45(), func_44(iVar0), 3)) && !unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_111.f_50[iVar0]), func_45(), func_43(iVar0), 3)))
				{
					if (unk_0x5B9219522937741D(Local_154.f_35[iVar0]))
					{
						unk_0x837D67618BF89034(Local_154.f_35[iVar0], 1, 1);
						unk_0x62C438C53BB57AFD(Local_154.f_35[iVar0], func_390(iVar0), 0, 0, 1);
						unk_0xCF39804E8C88080E(Local_154.f_35[iVar0], func_389(iVar0), 2, 1);
						unk_0x5D7CD709B34C90F0(Local_154.f_35[iVar0], true);
					}
					iLocal_179[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

Vector3 func_389(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { unk_0x7A6103DCF5EE8CC3(func_45(), "deck_pick_up_deck", func_76(iParam0), 0f, 0f, func_75(iParam0), 0.01f, 2) };
	return Var0;
}

Vector3 func_390(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { unk_0xBE8776D2466E9EA6(func_45(), "deck_pick_up_deck", func_76(iParam0), 0f, 0f, func_75(iParam0), 0.01f, 2) };
	return Var0;
}

void func_391(int iParam0)
{
	int iVar0;
	
	if (Local_154.f_5)
	{
		iVar0 = joaat("vw_prop_vw_casino_cards_01");
	}
	else
	{
		iVar0 = joaat("vw_prop_casino_cards_01");
	}
	unk_0xEC9DAA34BBB4658C(iVar0);
	if (!unk_0x6252BC0DD8A320DB(iVar0))
	{
		return;
	}
	unk_0x80813AC549A1E8AE(func_45());
	if (!unk_0xE100DD4F82A51BDE(func_45()))
	{
		return;
	}
	if (!unk_0xFC8BFE4B41177C22(Local_154.f_35[iParam0]))
	{
		Local_154.f_35[iParam0] = unk_0x43AFC452F25F3A2F(iVar0, func_390(iParam0), 0, false, 1);
		unk_0x55098D9E9AD58806(iVar0);
		unk_0x62C438C53BB57AFD(Local_154.f_35[iParam0], func_390(iParam0), 0, 0, 1);
		unk_0xCF39804E8C88080E(Local_154.f_35[iParam0], func_389(iParam0), 2, 1);
		unk_0x5D7CD709B34C90F0(Local_154.f_35[iParam0], true);
		unk_0x268BE77F77533D03(func_45());
	}
}

void func_392()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	
	if (((func_362(joaat("rm_GamingFloor_02")) || func_362(joaat("rm_GamingFloor_03"))) || func_419(unk_0x259BE71D8A81D4FA())) && !func_401())
	{
		iLocal_166 = 1;
		if (!bLocal_165)
		{
			bLocal_165 = (func_406() && func_400());
		}
	}
	else
	{
		if (iLocal_166)
		{
			func_407();
			func_398();
			iLocal_166 = 0;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_154.f_26)
	{
		if (iVar0 != iLocal_169 && iVar0 != Local_153[unk_0x259BE71D8A81D4FA() /*9*/].f_2)
		{
		}
		else
		{
			bVar1 = false;
			if (func_59(iVar0, Local_154.f_26))
			{
				bVar1 = true;
			}
			Var3 = { 0f, 0f, func_75(iVar0) };
			iVar4 = 0;
			while (iVar4 < 4)
			{
				iVar5 = Local_111.f_117[(iVar0 * 4 + iVar4)];
				if (iVar5 < 0 || ((!func_362(joaat("rm_GamingFloor_02")) && !func_362(joaat("rm_GamingFloor_03"))) && !func_419(unk_0x259BE71D8A81D4FA())))
				{
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (unk_0xFC8BFE4B41177C22(Local_154.f_40[func_397(iVar0, iVar4, iVar2)]))
						{
							unk_0x51C8BEA2005931AB(&(Local_154.f_40[func_397(iVar0, iVar4, iVar2)]));
						}
						iVar2++;
					}
				}
				else
				{
					if (Local_153[iVar5 /*9*/].f_3 > 0)
					{
						if (!unk_0xFC8BFE4B41177C22(Local_154.f_40[func_397(iVar0, iVar4, 0)]))
						{
							if (func_396(Local_153[iVar5 /*9*/].f_3, bVar1) != 0)
							{
								Local_154.f_40[func_397(iVar0, iVar4, 0)] = unk_0x43AFC452F25F3A2F(func_396(Local_153[iVar5 /*9*/].f_3, bVar1), unk_0xF10F2A2453AF1DFB(func_76(iVar0), Var3.f_2, func_395(Local_153[iVar5 /*9*/].f_3, 0, iVar4, bVar1, 0)), 0, false, 1);
								unk_0x62C438C53BB57AFD(Local_154.f_40[func_397(iVar0, iVar4, 0)], unk_0xF10F2A2453AF1DFB(func_76(iVar0), Var3.f_2, func_395(Local_153[iVar5 /*9*/].f_3, 0, iVar4, bVar1, 0)), 0, 0, 1);
								unk_0xCF39804E8C88080E(Local_154.f_40[func_397(iVar0, iVar4, 0)], Var3 + func_394(Local_153[iVar5 /*9*/].f_4, 0, iVar4, bVar1), 2, 1);
								if (!unk_0xD6F9DEE4765092A9(func_393(Local_153[iVar5 /*9*/].f_3)))
								{
									unk_0xBD618A73193F9982(-1, func_393(Local_153[iVar5 /*9*/].f_3), Local_154.f_40[func_397(iVar0, iVar4, 0)], "dlc_vw_table_games_sounds", 0, 0);
								}
							}
						}
						else if (unk_0x3D2DD3A02C8AA9A8(Local_154.f_40[func_397(iVar0, iVar4, 0)]) != 255)
						{
							unk_0x51C8BEA2005931AB(&(Local_154.f_40[func_397(iVar0, iVar4, 0)]));
						}
					}
					else if (unk_0xFC8BFE4B41177C22(Local_154.f_40[func_397(iVar0, iVar4, 0)]))
					{
						if (unk_0x3D2DD3A02C8AA9A8(Local_154.f_40[func_397(iVar0, iVar4, 0)]) > 0)
						{
							unk_0xC1DAC4DA85BB166D(Local_154.f_40[func_397(iVar0, iVar4, 0)], floor(func_218(to_float(unk_0x3D2DD3A02C8AA9A8(Local_154.f_40[func_397(iVar0, iVar4, 0)])), 0f, 0.1f, 0)), 1);
						}
						else
						{
							unk_0x51C8BEA2005931AB(&(Local_154.f_40[func_397(iVar0, iVar4, 0)]));
						}
					}
					if (Local_153[iVar5 /*9*/].f_5 > 0)
					{
						if (!unk_0xFC8BFE4B41177C22(Local_154.f_40[func_397(iVar0, iVar4, 1)]))
						{
							if (func_396(Local_153[iVar5 /*9*/].f_5, bVar1) != 0)
							{
								Local_154.f_40[func_397(iVar0, iVar4, 1)] = unk_0x43AFC452F25F3A2F(func_396(Local_153[iVar5 /*9*/].f_5, bVar1), unk_0xF10F2A2453AF1DFB(func_76(iVar0), Var3.f_2, func_395(Local_153[iVar5 /*9*/].f_5, 1, iVar4, bVar1, 0)), 0, false, 1);
								unk_0x62C438C53BB57AFD(Local_154.f_40[func_397(iVar0, iVar4, 1)], unk_0xF10F2A2453AF1DFB(func_76(iVar0), Var3.f_2, func_395(Local_153[iVar5 /*9*/].f_5, 1, iVar4, bVar1, 0)), 0, 0, 1);
								unk_0xCF39804E8C88080E(Local_154.f_40[func_397(iVar0, iVar4, 1)], Var3 + func_394(Local_153[iVar5 /*9*/].f_4, 1, iVar4, bVar1), 2, 1);
								if (!unk_0xD6F9DEE4765092A9(func_393(Local_153[iVar5 /*9*/].f_5)))
								{
									unk_0xBD618A73193F9982(-1, func_393(Local_153[iVar5 /*9*/].f_5), Local_154.f_40[func_397(iVar0, iVar4, 1)], "dlc_vw_table_games_sounds", 0, 0);
								}
							}
						}
						else if (unk_0x3D2DD3A02C8AA9A8(Local_154.f_40[func_397(iVar0, iVar4, 1)]) != 255)
						{
							unk_0x51C8BEA2005931AB(&(Local_154.f_40[func_397(iVar0, iVar4, 1)]));
						}
					}
					else if (unk_0xFC8BFE4B41177C22(Local_154.f_40[func_397(iVar0, iVar4, 1)]))
					{
						if (unk_0x3D2DD3A02C8AA9A8(Local_154.f_40[func_397(iVar0, iVar4, 1)]) > 0)
						{
							unk_0xC1DAC4DA85BB166D(Local_154.f_40[func_397(iVar0, iVar4, 1)], floor(func_218(to_float(unk_0x3D2DD3A02C8AA9A8(Local_154.f_40[func_397(iVar0, iVar4, 1)])), 0f, 0.1f, 0)), 1);
						}
						else
						{
							unk_0x51C8BEA2005931AB(&(Local_154.f_40[func_397(iVar0, iVar4, 1)]));
						}
					}
					if (Local_153[iVar5 /*9*/].f_4 > 0)
					{
						if (!unk_0xFC8BFE4B41177C22(Local_154.f_40[func_397(iVar0, iVar4, 2)]))
						{
							if (func_396(Local_153[iVar5 /*9*/].f_4, bVar1) != 0)
							{
								Local_154.f_40[func_397(iVar0, iVar4, 2)] = unk_0x43AFC452F25F3A2F(func_396(Local_153[iVar5 /*9*/].f_4, bVar1), unk_0xF10F2A2453AF1DFB(func_76(iVar0), Var3.f_2, func_395(Local_153[iVar5 /*9*/].f_4, 2, iVar4, bVar1, 1)), 0, false, 1);
								unk_0x62C438C53BB57AFD(Local_154.f_40[func_397(iVar0, iVar4, 2)], unk_0xF10F2A2453AF1DFB(func_76(iVar0), Var3.f_2, func_395(Local_153[iVar5 /*9*/].f_4, 2, iVar4, bVar1, 1)), 0, 0, 1);
								unk_0xCF39804E8C88080E(Local_154.f_40[func_397(iVar0, iVar4, 2)], Var3 + func_394(Local_153[iVar5 /*9*/].f_4, 2, iVar4, bVar1), 2, 1);
								if (!unk_0xD6F9DEE4765092A9(func_393(Local_153[iVar5 /*9*/].f_4)))
								{
									unk_0xBD618A73193F9982(-1, func_393(Local_153[iVar5 /*9*/].f_4), Local_154.f_40[func_397(iVar0, iVar4, 2)], "dlc_vw_table_games_sounds", 0, 0);
								}
							}
						}
						else if (unk_0x3D2DD3A02C8AA9A8(Local_154.f_40[func_397(iVar0, iVar4, 2)]) != 255)
						{
							unk_0x51C8BEA2005931AB(&(Local_154.f_40[func_397(iVar0, iVar4, 2)]));
						}
					}
					else if (unk_0xFC8BFE4B41177C22(Local_154.f_40[func_397(iVar0, iVar4, 2)]))
					{
						if (unk_0x3D2DD3A02C8AA9A8(Local_154.f_40[func_397(iVar0, iVar4, 2)]) > 0)
						{
							unk_0xC1DAC4DA85BB166D(Local_154.f_40[func_397(iVar0, iVar4, 2)], floor(func_218(to_float(unk_0x3D2DD3A02C8AA9A8(Local_154.f_40[func_397(iVar0, iVar4, 2)])), 0f, 0.1f, 0)), 1);
						}
						else
						{
							unk_0x51C8BEA2005931AB(&(Local_154.f_40[func_397(iVar0, iVar4, 2)]));
						}
					}
				}
				iVar4++;
			}
			if (!Local_111.f_5[iVar0])
			{
				Local_154.f_8[iVar0] = 1;
			}
			else
			{
				Local_154.f_8[iVar0] = 0;
			}
		}
		iVar0++;
	}
	iLocal_169++;
	if (iLocal_169 >= Local_154.f_26)
	{
		iLocal_169 = 0;
	}
}

char* func_393(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 20:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 30:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 40:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 50:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 60:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 70:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 80:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 90:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 100:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 150:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 200:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 250:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 300:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 350:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 400:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 450:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 500:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1000:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1500:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 3000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 3500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4500:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 5000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 6000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 7000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 8000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 9000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 10000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 15000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 20000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 25000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 30000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 35000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 40000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 45000:
			return "DLC_VW_CHIP_BET_LRG_LARGE";
		
		case 50000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		default:
	}
	return "";
}

Vector3 func_394(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!bParam3)
	{
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 66.96f;
					
					case 1:
						return 0f, 0f, 66.96f;
					
					case 2:
						return 0f, 0f, 64.08f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 21.24f;
					
					case 1:
						return 0f, 0f, 15.48f;
					
					case 2:
						return 0f, 0f, 20.16f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -21.6f;
					
					case 1:
						return 0f, 0f, -25.56f;
					
					case 2:
						return 0f, 0f, -21.96f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -71.64f;
					
					case 1:
						return 0f, 0f, -70.2f;
					
					case 2:
						return 0f, 0f, -68.4f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 68.76f;
							
							case 1:
								return 0f, 0f, 68.76f;
							
							case 2:
								return 0f, 0f, 69.48f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 22.68f;
							
							case 1:
								return 0f, 0f, 21.96f;
							
							case 2:
								return 0f, 0f, 22.68f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -21.96f;
							
							case 1:
								return 0f, 0f, -23.04f;
							
							case 2:
								return 0f, 0f, -21.6f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -68.04f;
							
							case 1:
								return 0f, 0f, -69.84f;
							
							case 2:
								return 0f, 0f, -69.84f;
							
							default:
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 66.96f;
							
							case 1:
								return 0f, 0f, 66.96f;
							
							case 2:
								return 0f, 0f, 64.08f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 21.24f;
							
							case 1:
								return 0f, 0f, 15.48f;
							
							case 2:
								return 0f, 0f, 20.16f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -21.6f;
							
							case 1:
								return 0f, 0f, -25.56f;
							
							case 2:
								return 0f, 0f, -21.96f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -71.64f;
							
							case 1:
								return 0f, 0f, -70.2f;
							
							case 2:
								return 0f, 0f, -68.4f;
							
							default:
						}
						break;
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

Vector3 func_395(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	struct<3> Var1;
	
	if (!bParam3)
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			
			case 20:
				fVar0 = 0.896f;
				break;
			
			case 30:
				fVar0 = 0.901f;
				break;
			
			case 40:
				fVar0 = 0.907f;
				break;
			
			case 50:
				fVar0 = 0.95f;
				break;
			
			case 60:
				fVar0 = 0.917f;
				break;
			
			case 70:
				fVar0 = 0.922f;
				break;
			
			case 80:
				fVar0 = 0.927f;
				break;
			
			case 90:
				fVar0 = 0.932f;
				break;
			
			case 100:
				fVar0 = 0.95f;
				break;
			
			case 150:
				fVar0 = 0.904f;
				break;
			
			case 200:
				fVar0 = 0.899f;
				break;
			
			case 250:
				fVar0 = 0.914f;
				break;
			
			case 300:
				fVar0 = 0.904f;
				break;
			
			case 350:
				fVar0 = 0.924f;
				break;
			
			case 400:
				fVar0 = 0.91f;
				break;
			
			case 450:
				fVar0 = 0.935f;
				break;
			
			case 500:
				fVar0 = 0.95f;
				break;
			
			case 1000:
				fVar0 = 0.95f;
				break;
			
			case 1500:
				fVar0 = 0.904f;
				break;
			
			case 2000:
				fVar0 = 0.899f;
				break;
			
			case 2500:
				fVar0 = 0.915f;
				break;
			
			case 3000:
				fVar0 = 0.904f;
				break;
			
			case 3500:
				fVar0 = 0.925f;
				break;
			
			case 4000:
				fVar0 = 0.91f;
				break;
			
			case 4500:
				fVar0 = 0.935f;
				break;
			
			case 5000:
				fVar0 = 0.95f;
				break;
			
			case 6000:
				fVar0 = 0.919f;
				break;
			
			case 7000:
				fVar0 = 0.924f;
				break;
			
			case 8000:
				fVar0 = 0.93f;
				break;
			
			case 9000:
				fVar0 = 0.935f;
				break;
			
			case 10000:
				fVar0 = 0.95f;
				break;
			
			case 15000:
				fVar0 = 0.902f;
				break;
			
			case 20000:
				fVar0 = 0.897f;
				break;
			
			case 25000:
				fVar0 = 0.912f;
				break;
			
			case 30000:
				fVar0 = 0.902f;
				break;
			
			case 35000:
				fVar0 = 0.922f;
				break;
			
			case 40000:
				fVar0 = 0.907f;
				break;
			
			case 45000:
				fVar0 = 0.932f;
				break;
			
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.59535f, 0.200875f, 0f };
						break;
					
					case 1:
						Var1 = { 0.51655f, 0.2268f, 0f };
						break;
					
					case 2:
						Var1 = { 0.689125f, 0.171575f, 0f };
						break;
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.247825f, -0.123625f, 0f };
						break;
					
					case 1:
						Var1 = { 0.2163f, -0.04745f, 0f };
						break;
					
					case 2:
						Var1 = { 0.2869f, -0.211925f, 0f };
						break;
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.2804f, -0.109775f, 0f };
						break;
					
					case 1:
						Var1 = { -0.2552f, -0.031225f, 0f };
						break;
					
					case 2:
						Var1 = { -0.30935f, -0.205675f, 0f };
						break;
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.606975f, 0.249675f, 0f };
						break;
					
					case 1:
						Var1 = { -0.529875f, 0.281425f, 0f };
						break;
					
					case 2:
						Var1 = { -0.69795f, 0.211525f, 0f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			
			case 20:
				fVar0 = 0.896f;
				break;
			
			case 30:
				fVar0 = 0.901f;
				break;
			
			case 40:
				fVar0 = 0.907f;
				break;
			
			case 50:
				fVar0 = 0.95f;
				break;
			
			case 60:
				fVar0 = 0.917f;
				break;
			
			case 70:
				fVar0 = 0.922f;
				break;
			
			case 80:
				fVar0 = 0.927f;
				break;
			
			case 90:
				fVar0 = 0.932f;
				break;
			
			case 100:
				fVar0 = 0.95f;
				break;
			
			case 150:
				fVar0 = 0.904f;
				break;
			
			case 200:
				fVar0 = 0.899f;
				break;
			
			case 250:
				fVar0 = 0.914f;
				break;
			
			case 300:
				fVar0 = 0.904f;
				break;
			
			case 350:
				fVar0 = 0.924f;
				break;
			
			case 400:
				fVar0 = 0.91f;
				break;
			
			case 450:
				fVar0 = 0.935f;
				break;
			
			case 500:
				fVar0 = 0.95f;
				break;
			
			case 1000:
				fVar0 = 0.95f;
				break;
			
			case 1500:
				fVar0 = 0.904f;
				break;
			
			case 2000:
				fVar0 = 0.899f;
				break;
			
			case 2500:
				fVar0 = 0.915f;
				break;
			
			case 3000:
				fVar0 = 0.904f;
				break;
			
			case 3500:
				fVar0 = 0.925f;
				break;
			
			case 4000:
				fVar0 = 0.91f;
				break;
			
			case 4500:
				fVar0 = 0.935f;
				break;
			
			case 5000:
				fVar0 = 0.953f;
				break;
			
			case 6000:
				fVar0 = 0.919f;
				break;
			
			case 7000:
				fVar0 = 0.924f;
				break;
			
			case 8000:
				fVar0 = 0.93f;
				break;
			
			case 9000:
				fVar0 = 0.935f;
				break;
			
			case 10000:
				fVar0 = 0.95f;
				break;
			
			case 15000:
				fVar0 = 0.902f;
				break;
			
			case 20000:
				fVar0 = 0.897f;
				break;
			
			case 25000:
				fVar0 = 0.912f;
				break;
			
			case 30000:
				fVar0 = 0.902f;
				break;
			
			case 35000:
				fVar0 = 0.922f;
				break;
			
			case 40000:
				fVar0 = 0.907f;
				break;
			
			case 45000:
				fVar0 = 0.932f;
				break;
			
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.597825f, 0.20105f, 0f };
								break;
							
							case 1:
								Var1 = { 0.5151f, 0.22775f, 0f };
								break;
							
							case 2:
								Var1 = { 0.686125f, 0.171625f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.248425f, -0.126325f, 0f };
								break;
							
							case 1:
								Var1 = { 0.2144f, -0.04415f, 0f };
								break;
							
							case 2:
								Var1 = { 0.285325f, -0.212f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.281f, -0.111875f, 0f };
								break;
							
							case 1:
								Var1 = { -0.254775f, -0.029175f, 0f };
								break;
							
							case 2:
								Var1 = { -0.308175f, -0.199325f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.61015f, 0.24815f, 0f };
								break;
							
							case 1:
								Var1 = { -0.527375f, 0.283575f, 0f };
								break;
							
							case 2:
								Var1 = { -0.694475f, 0.214225f, 0f };
								break;
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.59535f, 0.200875f, 0f };
								break;
							
							case 1:
								Var1 = { 0.51655f, 0.2268f, 0f };
								break;
							
							case 2:
								Var1 = { 0.689125f, 0.171575f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.247825f, -0.123625f, 0f };
								break;
							
							case 1:
								Var1 = { 0.2163f, -0.04745f, 0f };
								break;
							
							case 2:
								Var1 = { 0.2869f, -0.211925f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.2804f, -0.109775f, 0f };
								break;
							
							case 1:
								Var1 = { -0.2552f, -0.031225f, 0f };
								break;
							
							case 2:
								Var1 = { -0.30935f, -0.205675f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.606975f, 0.249675f, 0f };
								break;
							
							case 1:
								Var1 = { -0.529875f, 0.281425f, 0f };
								break;
							
							case 2:
								Var1 = { -0.69795f, 0.211525f, 0f };
								break;
						}
						break;
				}
				break;
			}
	}
	if (!bParam4)
	{
		Var1.f_2 = fVar0;
	}
	else
	{
		Var1.f_2 = fVar0;
		switch (iParam0)
		{
			case 10:
			case 50:
			case 100:
			case 500:
			case 1000:
			case 5000:
			case 10000:
				Var1.f_2 = (Var1.f_2 + 0.004f);
				break;
			}
	}
	return Var1;
}

int func_396(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 5000:
				return joaat("vw_prop_chip_5kdollar_x1");
			
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 10000:
				return joaat("vw_prop_chip_10kdollar_x1");
			
			case 15000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 20000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 25000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 30000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 35000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 40000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 45000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 50000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 5000:
				return joaat("vw_prop_plaq_5kdollar_x1");
			
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 10000:
				return joaat("vw_prop_plaq_10kdollar_x1");
			
			case 15000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 20000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 25000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 30000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 35000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 40000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 45000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 50000:
				return joaat("vw_prop_plaq_10kdollar_st");
			}
		
		default:
	}
	return 0;
}

int func_397(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0 * 3 * 4 + iParam1 * 3) + iParam2);
}

void func_398()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		uVar1 = func_399(iVar0);
		unk_0x55098D9E9AD58806(uVar1);
		iVar0++;
	}
}

int func_399(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("vw_prop_chip_10dollar_x1");
		
		case 1:
			return joaat("vw_prop_chip_50dollar_x1");
		
		case 2:
			return joaat("vw_prop_chip_100dollar_x1");
		
		case 3:
			return joaat("vw_prop_chip_500dollar_x1");
		
		case 4:
			return joaat("vw_prop_chip_1kdollar_x1");
		
		case 5:
			return joaat("vw_prop_chip_5kdollar_x1");
		
		case 6:
			return joaat("vw_prop_chip_10kdollar_x1");
		
		case 7:
			return joaat("vw_prop_chip_10dollar_st");
		
		case 8:
			return joaat("vw_prop_chip_50dollar_st");
		
		case 9:
			return joaat("vw_prop_chip_100dollar_st");
		
		case 10:
			return joaat("vw_prop_chip_500dollar_st");
		
		case 11:
			return joaat("vw_prop_chip_1kdollar_st");
		
		case 12:
			return joaat("vw_prop_chip_5kdollar_st");
		
		case 13:
			return joaat("vw_prop_chip_10kdollar_st");
		
		case 14:
			return joaat("vw_prop_plaq_5kdollar_x1");
		
		case 15:
			return joaat("vw_prop_plaq_5kdollar_st");
		
		case 16:
			return joaat("vw_prop_plaq_10kdollar_x1");
		
		case 17:
			return joaat("vw_prop_plaq_10kdollar_st");
		
		default:
	}
	return 0;
}

int func_400()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		uVar1 = func_399(iVar0);
		unk_0xEC9DAA34BBB4658C(uVar1);
		if (!unk_0x6252BC0DD8A320DB(iVar1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_401()
{
	return BitTest(Global_1950108.f_6, 12);
}

int func_402()
{
	return func_403(8251, -1, 0);
}

int func_403(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805029[iParam0 /*3*/][func_404(iParam1)];
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_404(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_137();
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

void func_405()
{
	if (Local_154.f_26 == 1)
	{
		if (!unk_0xFC8BFE4B41177C22(uLocal_176))
		{
			if (func_414() != func_413())
			{
				iLocal_176 = unk_0x8366ABB82B1ABC59(func_76(0), 1f, func_234(Global_2657589[func_414() /*466*/].f_457), 0, 0, 0);
			}
		}
		else if (func_414() != func_413() && unk_0x15CCE8886267624F())
		{
			if (unk_0xC557ED333E7A31E1(iLocal_176) != func_366(func_414()))
			{
				unk_0xDEFDEE8D4FA47138(iLocal_176, func_366(func_414()));
			}
		}
	}
	else
	{
		if (!unk_0xFC8BFE4B41177C22(uLocal_177))
		{
			iLocal_177 = unk_0x8366ABB82B1ABC59(1133.74f, 266.6947f, -52.0409f, 1f, joaat("vw_prop_casino_3cardpoker_01b"), 0, 0, 0);
		}
		else if (unk_0xC557ED333E7A31E1(iLocal_177) != 3)
		{
			unk_0xDEFDEE8D4FA47138(iLocal_177, 3);
		}
		if (!unk_0xFC8BFE4B41177C22(uLocal_178))
		{
			iLocal_178 = unk_0x8366ABB82B1ABC59(1148.74f, 251.6947f, -52.0409f, 1f, joaat("vw_prop_casino_3cardpoker_01b"), 0, 0, 0);
		}
		else if (unk_0xC557ED333E7A31E1(iLocal_178) != 3)
		{
			unk_0xDEFDEE8D4FA47138(iLocal_178, 3);
		}
	}
}

int func_406()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		uVar2 = func_40(iVar1, Local_154.f_5);
		unk_0xEC9DAA34BBB4658C(uVar2);
		if (!unk_0x6252BC0DD8A320DB(iVar2))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_407()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		uVar2 = func_40(iVar1, Local_154.f_5);
		unk_0x55098D9E9AD58806(uVar2);
		iVar0++;
	}
}

int func_408()
{
	if (unk_0x76CD105BCAC6EB9F() && unk_0x93E08E0F531E2C35())
	{
		return 1;
	}
	return 0;
}

int func_409(int iParam0)
{
	if (func_410(iParam0) != func_413())
	{
		return func_410(iParam0) == func_228(iParam0);
	}
	return 0;
}

int func_410(int iParam0)
{
	return Global_1894573[iParam0 /*608*/].f_10.f_35;
}

int func_411()
{
	return func_412(unk_0x259BE71D8A81D4FA());
}

var func_412(int iParam0)
{
	return unk_0x8B5B2BE72A7C0CF6(Global_2657589[iParam0 /*466*/].f_321.f_3, 28, 31);
}

int func_413()
{
	return -1;
}

int func_414()
{
	return func_415(unk_0x259BE71D8A81D4FA());
}

int func_415(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_413())
	{
		return iParam0;
	}
	if (func_417(iParam0) != -1)
	{
		iVar0 = func_416(func_417(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_319(iParam0, 0))
			{
				return func_228(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_413();
		}
		return Global_2657589[iParam0 /*466*/].f_321.f_10;
	}
	return func_413();
}

int func_416(int iParam0)
{
	switch (iParam0)
	{
		case 0:
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
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
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
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
	}
	return -1;
}

int func_417(int iParam0)
{
	if (iParam0 != func_413())
	{
		if (func_62(iParam0, 1, 1))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7;
		}
		else if (((Global_1575060 || Global_2635559.f_2680) && iParam0 == unk_0x259BE71D8A81D4FA()) && func_62(iParam0, 1, 0))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7;
		}
	}
	return -1;
}

int func_418(int iParam0)
{
	if (iParam0 != func_413() && func_62(iParam0, 1, 1))
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321, 4);
	}
	return 0;
}

int func_419(int iParam0)
{
	if (iParam0 != func_413())
	{
		if (func_62(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_416(Global_2657589[iParam0 /*466*/].f_321.f_7) == 15;
			}
		}
	}
	return 0;
}

int func_420(int iParam0)
{
	if (iParam0 != func_413())
	{
		if (func_62(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_416(Global_2657589[iParam0 /*466*/].f_321.f_7) == 14;
			}
		}
	}
	return 0;
}

var func_421()
{
	return BitTest(Global_1950108.f_3, 2);
}

void func_422()
{
	if (Local_154.f_798 > 2)
	{
		if (Global_262145.f_26827)
		{
			unk_0x5B04C6D6A21F6BDE(&Local_163);
		}
	}
	if (unk_0xBC2EE32DE886BD08("DLC_VW_Casino_Table_Games"))
	{
		unk_0xB43467C43086A6A1("DLC_VW_Casino_Table_Games");
	}
	if (unk_0xBC2EE32DE886BD08("DLC_VW_Casino_Cards_Focus_Hand"))
	{
		unk_0xB43467C43086A6A1("DLC_VW_Casino_Cards_Focus_Hand");
	}
	func_379(0);
	func_407();
	func_398();
	func_425();
	func_424();
	if (unk_0xFC8BFE4B41177C22(Local_154.f_34))
	{
		unk_0x51C8BEA2005931AB(&(Local_154.f_34));
	}
	if (Local_154.f_798 > 0)
	{
		unk_0x268BE77F77533D03(func_45());
		unk_0x268BE77F77533D03(func_78());
		unk_0x268BE77F77533D03(func_92());
		unk_0x268BE77F77533D03(func_232());
	}
	Global_1970469 = 0;
	func_423();
}

void func_423()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_424()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xFC8BFE4B41177C22(Local_154.f_35[iVar0]))
		{
			if (unk_0xA3736D76B0E93E93(Local_154.f_35[iVar0]))
			{
				unk_0x837D67618BF89034(Local_154.f_35[iVar0], 1, 1);
			}
			unk_0x51C8BEA2005931AB(&(Local_154.f_35[iVar0]));
		}
		iVar0++;
	}
}

void func_425()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 48;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (unk_0xFC8BFE4B41177C22(Local_154.f_40[iVar1]))
		{
			unk_0x51C8BEA2005931AB(&(Local_154.f_40[iVar1]));
		}
		iVar1++;
	}
}

int func_426()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_433())
	{
		return 1;
	}
	if (Global_2696917)
	{
		return 1;
	}
	if (func_432())
	{
		return 1;
	}
	if (func_431(159))
	{
		if (!func_430())
		{
			return 1;
		}
	}
	if (func_431(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_427() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_427()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_427()
{
	switch (func_429())
	{
		case 0:
			return func_428();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_428()
{
	switch (Global_2697021)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_429()
{
	return Global_32163;
}

bool func_430()
{
	return Global_2683864.f_698;
}

int func_431(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_432()
{
	return Global_2694526;
}

bool func_433()
{
	return Global_2683864.f_693;
}

void func_434()
{
	int iVar0;
	
	if (Global_1970462)
	{
		Global_1970462 = 0;
	}
	if (func_419(unk_0x259BE71D8A81D4FA()) && func_414() != func_413())
	{
		if (BitTest(Global_2657589[func_414() /*466*/].f_321.f_4, 4))
		{
			Local_154.f_5 = 1;
		}
		Global_1970471 = Global_2657589[func_414() /*466*/].f_457;
	}
	while (!(Global_2765559 != -1 || func_419(unk_0x259BE71D8A81D4FA())))
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			func_422();
		}
		if (func_426())
		{
			func_422();
		}
		wait(0);
	}
	iVar0 = -1;
	if (func_419(unk_0x259BE71D8A81D4FA()))
	{
		iVar0 = func_438();
	}
	unk_0xDB2434E51017FFCC(32, 0, iVar0);
	func_436(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&Local_111, 633, 0);
	unk_0x7B13DC83218D9AF5(&Local_153, 289, 0);
	if (func_419(unk_0x259BE71D8A81D4FA()))
	{
		while (!unk_0x78D35ABAF71764AD(15))
		{
			wait(0);
		}
		Local_154.f_26 = 1;
		unk_0x7E46D691B4F4B711(1);
		unk_0x99C26F3C23B37F42(15);
	}
	else
	{
		while (!unk_0x78D35ABAF71764AD(45))
		{
			wait(0);
		}
		unk_0x7E46D691B4F4B711(3);
		unk_0x99C26F3C23B37F42(45);
	}
	if (!func_435())
	{
		func_422();
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		unk_0xAECC5FA98C879D67(0);
	}
	else
	{
		func_422();
	}
	if (unk_0x93E08E0F531E2C35())
	{
		if (func_419(unk_0x259BE71D8A81D4FA()))
		{
			Local_111.f_15[0] = unk_0xC5935DFB3F39785A(0, 14);
		}
		else
		{
			Local_111.f_15[0] = Global_2765577[0];
			Local_111.f_15[1] = Global_2765577[1];
			Local_111.f_15[2] = Global_2765577[2];
			Local_111.f_15[3] = Global_2765577[3];
		}
	}
	Global_1970469 = 1;
}

int func_435()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 0;
		}
		if (unk_0x37F4AB46DE999660())
		{
			return 1;
		}
		if (func_433())
		{
			return 0;
		}
		if (func_431(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_436(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_423();
			}
			else
			{
				return 0;
			}
		}
		if (!func_437(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_423();
					}
					else
					{
						return 0;
					}
				}
				if (func_433())
				{
					if (!bParam2)
					{
						func_423();
					}
					else
					{
						return 0;
					}
				}
				if (func_431(157))
				{
					if (!bParam2)
					{
						func_423();
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
					func_423();
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
				func_423();
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
			func_423();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_437(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

int func_438()
{
	var uVar0;
	
	uVar0 = Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_321.f_8;
	return uVar0;
}
