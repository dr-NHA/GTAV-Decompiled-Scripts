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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = -1;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 1000;
	var uLocal_38 = 1000;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	var uLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
	bool bLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	float fLocal_109[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_110[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_111[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_112[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_113[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_114 = 0f;
	float fLocal_115 = 0f;
	float fLocal_116 = 0f;
	float fLocal_117 = 0f;
	float fLocal_118[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_119[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_120[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_121[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_122[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_123[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_124[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_125[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_126[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_127[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_128 = 0f;
	float fLocal_129 = 0f;
	float fLocal_130 = 0f;
	float fLocal_131 = 0f;
	float fLocal_132 = 0f;
	float fLocal_133 = 0f;
	float fLocal_134 = 0f;
	float fLocal_135 = 0f;
	float fLocal_136 = 0f;
	float fLocal_137 = 0f;
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	float fLocal_140 = 0f;
	float fLocal_141 = 0f;
	float fLocal_142 = 0f;
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	int iLocal_149[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_150[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_151[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_152[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_153[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_154[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_155[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	struct<3> Local_173[175];
	struct<3> Local_174[15];
	struct<3> Local_175[35];
	struct<3> Local_176 = { 0, 0, 0 } ;
	struct<3> Local_177 = { 0, 0, 0 } ;
	struct<3> Local_178 = { 0, 0, 0 } ;
	struct<3> Local_179 = { 0, 0, 0 } ;
	struct<3> Local_180 = { 0, 0, 0 } ;
	struct<3> Local_181 = { 0, 0, 0 } ;
	struct<3> Local_182 = { 0, 0, 0 } ;
	struct<3> Local_183 = { 0, 0, 0 } ;
	struct<3> Local_184 = { 0, 0, 0 } ;
	char cLocal_185[64] = "";
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_196[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_197[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_202[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_203[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_204[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_205[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	var uLocal_209 = 12;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	var uLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	var uLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265[4] = { 0, 0, 0, 0 };
	int iLocal_266 = 0;
	var uLocal_267[3] = { 0, 0, 0 };
	int iLocal_268[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275[2] = { 0, 0 };
	int iLocal_276[2] = { 0, 0 };
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280[2] = { 0, 0 };
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286[2] = { 0, 0 };
	int iLocal_287 = 0;
	int iLocal_288[2] = { 0, 0 };
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293[2] = { 0, 0 };
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	struct<3> Local_306 = { 0, 0, 0 } ;
	struct<3> Local_307 = { 0, 0, 0 } ;
	struct<3> Local_308 = { 0, 0, 0 } ;
	struct<3> Local_309 = { 0, 0, 0 } ;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	struct<3> Local_316 = { 0, 0, 0 } ;
	struct<3> Local_317 = { 0, 0, 0 } ;
	struct<3> Local_318 = { 0, 0, 0 } ;
	float fLocal_319 = 0f;
	float fLocal_320 = 0f;
	float fLocal_321 = 0f;
	float fLocal_322 = 0f;
	float fLocal_323 = 0f;
	float fLocal_324 = 0f;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	var uLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363[3] = { 0, 0, 0 };
	int iLocal_364[2] = { 0, 0 };
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	var uLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429[2] = { 0, 0 };
	int iLocal_430[2] = { 0, 0 };
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_436[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447[3] = { 0, 0, 0 };
	int iLocal_448[2] = { 0, 0 };
	int iLocal_449 = 0;
	int iLocal_450[4] = { 0, 0, 0, 0 };
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465[3] = { 0, 0, 0 };
	int iLocal_466[3] = { 0, 0, 0 };
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487[4] = { 0, 0, 0, 0 };
	int iLocal_488 = 0;
	char* sLocal_489 = NULL;
	var uLocal_490 = 16;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 21;
	var uLocal_663 = 6;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667[3] = { 0, 0, 0 };
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
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
	iLocal_55 = 3;
	fLocal_58 = 80f;
	fLocal_59 = 140f;
	fLocal_60 = 180f;
	iLocal_66 = 1;
	iLocal_67 = 65;
	iLocal_68 = 49;
	iLocal_69 = 64;
	uLocal_73 = unk_0x8CC13B3BF7A9890A();
	uLocal_74 = unk_0x2A3612A4B836469E();
	bLocal_78 = true;
	bLocal_85 = true;
	bLocal_107 = true;
	fLocal_128 = 120f;
	fLocal_129 = 0f;
	fLocal_131 = 1f;
	fLocal_132 = 0f;
	fLocal_133 = 1f;
	fLocal_134 = 30f;
	fLocal_136 = 1f;
	fLocal_137 = 5f;
	fLocal_138 = 1f;
	fLocal_139 = 1f;
	fLocal_140 = 100f;
	fLocal_141 = 100f;
	fLocal_142 = 0f;
	fLocal_143 = 7000f;
	fLocal_144 = 0f;
	fLocal_145 = 0f;
	fLocal_146 = 0.3f;
	fLocal_147 = 0.5f;
	fLocal_148 = 50f;
	iLocal_159 = -1;
	iLocal_167 = -1;
	iLocal_168 = -1;
	Local_306 = { -1024.1f, -485.3321f, 35.9816f };
	Local_307 = { -428.0263f, -2153.577f, 9.2997f };
	Local_308 = { -498.7f, -2136.5f, 8.4f };
	Local_316 = { -272.8615f, -2186.932f, 9.3174f };
	fLocal_319 = 209.7233f;
	fLocal_320 = 90.947f;
	fLocal_323 = 46.7161f;
	if (func_447(0))
	{
		func_440(24, 0);
	}
	unk_0x8E1F26D6742EC167(0);
	unk_0xE0F4EA3A654155A3("EXTRASUNNY", 20f);
	if (unk_0x96CFB880BAC634CE(3))
	{
		func_438(unk_0x4A8C381C258A124D(), 0);
		unk_0x86A2BC11844DEEB3("TRV4_FAIL");
		func_436();
		func_434();
	}
	func_433(1);
	unk_0x925970A93719CADE(1);
	iLocal_223 = 0;
	iLocal_222 = 0;
	while (true)
	{
		unk_0xECF30459397D5190("M_LegalTrouble", 0);
		if (iLocal_249 > unk_0x1DD05E817C89C737())
		{
			unk_0x9D0B099EEAD74270();
		}
		func_429();
		func_428();
		func_426();
		func_422();
		func_421();
		switch (iLocal_222)
		{
			case 0:
				func_417();
				break;
			
			case 1:
				func_372();
				break;
			
			case 2:
				func_366();
				break;
			
			case 3:
				func_363();
				break;
			
			case 4:
				func_263();
				break;
			
			case 5:
				func_251();
				break;
			
			case 6:
				func_245();
				break;
			
			case 7:
				func_235();
				break;
			
			case 8:
				func_5();
				break;
			
			case 9:
				break;
			
			case 10:
				break;
			
			case 11:
				break;
		}
		wait(0);
		func_1();
	}
}

void func_1()
{
	if (iLocal_411 == 0)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			func_4(unk_0x4A8C381C258A124D(), 476);
			iLocal_411 = 1;
		}
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (iLocal_412 == 0)
			{
				iLocal_289 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				if (unk_0xFC8BFE4B41177C22(iLocal_289))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_289, 0))
					{
						func_3(iLocal_289, -1);
						func_4(iLocal_289, 479);
						iLocal_412 = 1;
					}
				}
			}
		}
		else
		{
			func_4(0, 479);
			func_3(0, -1);
			if (iLocal_412 == 1)
			{
				iLocal_412 = 0;
			}
		}
	}
	if (iLocal_413[0] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_267[0]))
		{
			if (unk_0x4FAFF4BCB7633475(uLocal_267[0]))
			{
				iLocal_233++;
				iLocal_413[0] = 1;
			}
		}
	}
	if (iLocal_413[1] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_267[1]))
		{
			if (unk_0x4FAFF4BCB7633475(uLocal_267[1]))
			{
				iLocal_233++;
				iLocal_413[1] = 1;
			}
		}
	}
	if (iLocal_413[2] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_267[2]))
		{
			if (unk_0x4FAFF4BCB7633475(uLocal_267[2]))
			{
				iLocal_233++;
				iLocal_413[2] = 1;
			}
		}
	}
	if (iLocal_413[3] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_268[0]))
		{
			if (unk_0x4FAFF4BCB7633475(iLocal_268[0]))
			{
				iLocal_233++;
				iLocal_413[3] = 1;
			}
		}
	}
	if (iLocal_413[4] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_268[1]))
		{
			if (unk_0x4FAFF4BCB7633475(iLocal_268[1]))
			{
				iLocal_233++;
				iLocal_413[4] = 1;
			}
		}
	}
	if (iLocal_413[5] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_268[2]))
		{
			if (unk_0x4FAFF4BCB7633475(iLocal_268[2]))
			{
				iLocal_233++;
				iLocal_413[5] = 1;
			}
		}
	}
	if (iLocal_413[6] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_268[3]))
		{
			if (unk_0x4FAFF4BCB7633475(iLocal_268[3]))
			{
				iLocal_233++;
				iLocal_413[6] = 1;
			}
		}
	}
	if (iLocal_413[7] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_268[4]))
		{
			if (unk_0x4FAFF4BCB7633475(iLocal_268[4]))
			{
				iLocal_233++;
				iLocal_413[7] = 1;
			}
		}
	}
	if (iLocal_413[8] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_268[5]))
		{
			if (unk_0x4FAFF4BCB7633475(iLocal_268[5]))
			{
				iLocal_233++;
				iLocal_413[8] = 1;
			}
		}
	}
	if (iLocal_413[9] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_268[6]))
		{
			if (unk_0x4FAFF4BCB7633475(iLocal_268[6]))
			{
				iLocal_233++;
				iLocal_413[9] = 1;
			}
		}
	}
	if (iLocal_413[10] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_268[7]))
		{
			if (unk_0x4FAFF4BCB7633475(iLocal_268[7]))
			{
				iLocal_233++;
				iLocal_413[10] = 1;
			}
		}
	}
	if (iLocal_413[11] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_268[8]))
		{
			if (unk_0x4FAFF4BCB7633475(iLocal_268[8]))
			{
				iLocal_233++;
				iLocal_413[11] = 1;
			}
		}
	}
	if (iLocal_413[12] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_268[9]))
		{
			if (unk_0x4FAFF4BCB7633475(iLocal_268[9]))
			{
				iLocal_233++;
				iLocal_413[12] = 1;
			}
		}
	}
	if (iLocal_413[13] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_268[10]))
		{
			if (unk_0x4FAFF4BCB7633475(iLocal_268[10]))
			{
				iLocal_233++;
				iLocal_413[13] = 1;
			}
		}
	}
	if (iLocal_413[14] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_272))
		{
			if (unk_0x4FAFF4BCB7633475(iLocal_272))
			{
				iLocal_233++;
				iLocal_413[14] = 1;
			}
		}
	}
	if (iLocal_413[15] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_273))
		{
			if (unk_0x4FAFF4BCB7633475(iLocal_273))
			{
				iLocal_233++;
				iLocal_413[15] = 1;
			}
		}
	}
	if (iLocal_413[16] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_274))
		{
			if (unk_0x4FAFF4BCB7633475(iLocal_274))
			{
				iLocal_233++;
				iLocal_413[16] = 1;
			}
		}
	}
	if (iLocal_413[17] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_275[0]))
		{
			if (unk_0x4FAFF4BCB7633475(iLocal_275[0]))
			{
				iLocal_233++;
				iLocal_413[17] = 1;
			}
		}
	}
	if (iLocal_222 == 8)
	{
		if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) != 0)
		{
			if (iLocal_414 == 0)
			{
				func_2(482, 0);
				iLocal_414 = 1;
			}
		}
	}
}

void func_2(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_63372 = iParam0;
	if (!Global_63370)
	{
		Global_63370 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75457)
		{
			if (Global_75458[iVar0 /*9*/] == iParam0)
			{
				Global_75458[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_3(int iParam0, int iParam1)
{
	Global_63373 = iParam0;
	Global_63374 = iParam1;
}

void func_4(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_63375 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_75457)
	{
		if (iParam1 == -1 || Global_75458[iVar0 /*9*/] == iParam1)
		{
			if (Global_75458[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_75458[iVar0 /*9*/].f_6 = iParam0;
				Global_75458[iVar0 /*9*/].f_7 = 1;
				Global_75458[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_5()
{
	if (unk_0x15CCE8886267624F())
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_285))
		{
			unk_0xBFE60A5CC0C835D8(iLocal_285, 0, 0, 1);
		}
	}
	if (iLocal_223 > 0)
	{
		func_233();
	}
	if (iLocal_223 == 0)
	{
		if (iLocal_343 == 1)
		{
			func_123();
			iLocal_343 = 0;
		}
		func_25(3, "STAGE_EVADE_POLICE", 1, 0, 0, 1);
		iLocal_367 = 0;
		iLocal_368 = 0;
		iLocal_369 = 0;
		iLocal_344 = 0;
		iLocal_345 = 0;
		iLocal_346 = 0;
		iLocal_398 = 0;
		iLocal_399 = 0;
		iLocal_400 = 0;
		iLocal_418 = 0;
		iLocal_419 = 0;
		iLocal_423 = 0;
		iLocal_426 = 0;
		iLocal_227 = 0;
		unk_0x80813AC549A1E8AE("Misssolomon_3");
		unk_0xEC9DAA34BBB4658C(joaat("oracle2"));
		unk_0xEC9DAA34BBB4658C(joaat("baller2"));
		if (unk_0xC450B06E5AAA0985(uLocal_297))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_297);
		}
		if (unk_0xA08EEC7306CF6198("Trev4_5"))
		{
			unk_0x94302E8F619FAF3E("Trev4_5", 0, 1f, 1f);
			unk_0x8943BF9E0F15EDA0("Trev4_5");
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_279))
		{
			unk_0x68298CA6191CDFDB(&iLocal_279);
		}
		settimera(0);
		if (unk_0x15CCE8886267624F())
		{
			if (!func_24())
			{
				unk_0x6C39BDF5EA5D38FC(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1));
			}
			func_21(0, -1, 1);
		}
		if (!unk_0x9390801B06EE998F())
		{
			unk_0x10B228D2FDB7AF16(800);
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_266))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_266))
			{
				unk_0x3F58BFCF656F0DF1(iLocal_266, 1);
				unk_0xAAA71DD7E9059338(iLocal_266, 0);
			}
		}
		unk_0x86A2BC11844DEEB3("TRV4_LOSE_COPS");
		if (!unk_0xBC2EE32DE886BD08("SOL_3_LOSE_COPS"))
		{
			unk_0xCAC4020CCF361AC8("SOL_3_LOSE_COPS");
		}
		unk_0x406CBCEA35499884();
		func_20("TRV4_END1", 7500, 1);
		if (unk_0xBC2EE32DE886BD08("SOL_3_ENGINE_DEATH_SCENE"))
		{
			unk_0xB43467C43086A6A1("SOL_3_ENGINE_DEATH_SCENE");
		}
		if (func_19(2))
		{
			func_18(2, 0);
		}
		uLocal_263 = unk_0x8CC50AC10D8037C7(-948.4f, -2992.6f, 13.3f, 6f, 5f, 4f, 60f, 0, 7);
		if (unk_0xFC8BFE4B41177C22(iLocal_284))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_284, 0))
			{
				unk_0x8AFDFB10F32CB1A8(iLocal_284, 0);
			}
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_285))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_285, 0))
			{
				unk_0x8AFDFB10F32CB1A8(iLocal_285, 0);
			}
		}
		unk_0xDAE61414743C8D1D(5);
		unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 3, 0);
		unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
		func_17(&uLocal_490, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
		unk_0xCFBD89D2F1F18961("PoliceScannerDisabled", 0);
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		if (iLocal_418 == 0)
		{
			if (!unk_0xFC8BFE4B41177C22(iLocal_293[0]))
			{
				if (unk_0x6252BC0DD8A320DB(joaat("oracle2")))
				{
					iLocal_293[0] = unk_0x5779387E956077A6(joaat("oracle2"), -1025.596f, -2869.237f, 12.9585f, 241.0686f, 1, 1, 0);
					unk_0x788F35D395511DFE(iLocal_293[0], 1, 1);
					unk_0x1DE99C193C7EC64B(iLocal_293[0], 1084227584);
					unk_0x55098D9E9AD58806(joaat("oracle2"));
					iLocal_418 = 1;
				}
			}
		}
		if (iLocal_419 == 0)
		{
			if (!unk_0xFC8BFE4B41177C22(iLocal_293[1]))
			{
				if (unk_0x6252BC0DD8A320DB(joaat("baller2")))
				{
					iLocal_293[1] = unk_0x5779387E956077A6(joaat("baller2"), -971.4223f, -2903.354f, 12.9652f, 61.0213f, 1, 1, 0);
					unk_0x788F35D395511DFE(iLocal_293[1], 1, 1);
					unk_0x1DE99C193C7EC64B(iLocal_293[1], 1084227584);
					unk_0x55098D9E9AD58806(joaat("baller2"));
					iLocal_419 = 1;
				}
			}
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_293[0]))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_293[0], 0))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_293[0], 0))
				{
					if (!unk_0xBC2EE32DE886BD08("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0xCAC4020CCF361AC8("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(unk_0x4A8C381C258A124D(), iLocal_293[0], 1) > 200f || unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_293[0], 0))
			{
				unk_0x68298CA6191CDFDB(&(iLocal_293[0]));
			}
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_293[1]))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_293[1], 0))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_293[1], 0))
				{
					if (!unk_0xBC2EE32DE886BD08("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0xCAC4020CCF361AC8("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(unk_0x4A8C381C258A124D(), iLocal_293[1], 1) > 200f || unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_293[1], 0))
			{
				unk_0x68298CA6191CDFDB(&(iLocal_293[1]));
			}
		}
		if (iLocal_398 == 0)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_268[0]))
			{
				func_14(iLocal_268[0], "SURROUNDED", 24);
				iLocal_398 = 1;
			}
		}
		if (iLocal_367 == 0)
		{
			if (timera() > 8000)
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_286[0], 0))
				{
					unk_0x88556DA0593A0748(iLocal_286[0], 68, "BB_Chase", 1);
					unk_0x6E859E04BDE20D6E(iLocal_286[0], 0f, 0f, 0.15f);
				}
				if (unk_0xD9F5E1FEFD1329E4(iLocal_286[1], 0))
				{
					unk_0x88556DA0593A0748(iLocal_286[1], 69, "BB_Chase", 1);
					unk_0x6E859E04BDE20D6E(iLocal_286[1], 0f, 0f, 0.15f);
				}
				iLocal_367 = 1;
			}
		}
		else
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_286[0], 0))
			{
				if (unk_0x050D073F91C5243C(iLocal_286[0]))
				{
					if (unk_0x157F3D5A4AAB2C50(iLocal_286[0]) > 5000f)
					{
						if (unk_0x1CE980E99A2A6FB6(iLocal_286[0]))
						{
							unk_0x1D2DAF2A41FFC4A0(iLocal_286[0]);
						}
					}
				}
				else if (iLocal_368 == 0)
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_268[6]))
					{
						unk_0xAAA71DD7E9059338(iLocal_268[6], 0);
					}
					if (!unk_0x4FAFF4BCB7633475(iLocal_268[7]))
					{
						unk_0xAAA71DD7E9059338(iLocal_268[7], 0);
					}
					iLocal_368 = 1;
				}
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_286[1], 0))
			{
				if (unk_0x050D073F91C5243C(iLocal_286[1]))
				{
					if (unk_0x157F3D5A4AAB2C50(iLocal_286[1]) > 5000f)
					{
						if (unk_0x1CE980E99A2A6FB6(iLocal_286[1]))
						{
							unk_0x1D2DAF2A41FFC4A0(iLocal_286[1]);
						}
					}
				}
				else if (iLocal_369 == 0)
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_268[8]))
					{
						unk_0xAAA71DD7E9059338(iLocal_268[8], 0);
					}
					if (!unk_0x4FAFF4BCB7633475(iLocal_268[9]))
					{
						unk_0xAAA71DD7E9059338(iLocal_268[9], 0);
					}
					iLocal_369 = 1;
				}
			}
		}
		func_12();
		if (iLocal_423 == 0)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_285))
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_285, 0))
				{
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_285, 0))
					{
						unk_0x86A2BC11844DEEB3("TRV4_JET_ENTERED");
						if (!unk_0xBC2EE32DE886BD08("SOL_3_LOSE_COPS_PLANE"))
						{
							unk_0xCAC4020CCF361AC8("SOL_3_LOSE_COPS_PLANE");
						}
						unk_0xA62957B100C8DE6D(4f, 15f, 4);
						unk_0x68298CA6191CDFDB(&iLocal_285);
						iLocal_423 = 1;
					}
					else if (func_16(unk_0x4A8C381C258A124D(), iLocal_285, 1) > 200f)
					{
						unk_0x68298CA6191CDFDB(&iLocal_285);
					}
				}
			}
		}
		if (iLocal_423 == 1)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_285))
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_285, 0))
				{
					if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_285, 0))
					{
						if (unk_0xBC2EE32DE886BD08("SOL_3_LOSE_COPS_PLANE"))
						{
							unk_0xB43467C43086A6A1("SOL_3_LOSE_COPS_PLANE");
						}
						unk_0x86A2BC11844DEEB3("TRV4_LOSE_COPS");
						iLocal_423 = 0;
					}
				}
			}
		}
		if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
		{
			if (iLocal_426 == 0)
			{
				iLocal_235 = unk_0x1DD05E817C89C737();
				iLocal_426 = 1;
			}
		}
		if (iLocal_426 == 1)
		{
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
			{
				if (unk_0x1DD05E817C89C737() > iLocal_235 + 3500)
				{
					if (unk_0xBC2EE32DE886BD08("SOL_3_LOSE_COPS_PLANE"))
					{
						unk_0xB43467C43086A6A1("SOL_3_LOSE_COPS_PLANE");
					}
					if (unk_0xBC2EE32DE886BD08("SOL_3_LOSE_COPS"))
					{
						unk_0xB43467C43086A6A1("SOL_3_LOSE_COPS");
					}
					if (unk_0xBC2EE32DE886BD08("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0xB43467C43086A6A1("SOL_3_LOSE_COPS_VEHICLE");
					}
					unk_0x86A2BC11844DEEB3("TRV4_COPS_LOST");
					func_11(0, -1);
					func_6();
				}
			}
			else
			{
				iLocal_426 = 0;
			}
		}
	}
}

void func_6()
{
	func_10(481, iLocal_233, 0);
	func_7(0, 0);
	func_434();
}

void func_7(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_63364)
	{
		Global_63364 = iParam1;
	}
	if (bParam0)
	{
		if ((func_447(0) && Global_78805.f_1 == 1) && func_9(Global_78805))
		{
		}
		else
		{
			Global_63362 = 1;
		}
	}
	if (Global_113648.f_9087 || func_447(0))
	{
		iVar0 = func_8();
		iVar1 = Global_91433[iVar0 /*5*/];
		uVar2 = Global_78828.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113648.f_9087)
			{
			}
			return;
		}
		if (BitTest(Global_91433[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_91433[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Global_91433[iVar0 /*5*/].f_1), 4);
		unk_0x0B0C9A0F9AAEB7F0(&Global_78807, true);
		Global_78823 = uVar2;
		Global_78824 = unk_0x1DD05E817C89C737();
	}
}

int func_8()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_91433[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_9(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_10(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75457)
	{
		if (Global_75458[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_75458[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_75458[iVar0 /*9*/].f_1 = (Global_75458[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_75458[iVar0 /*9*/] != -1)
	{
		if (Global_63587[Global_75458[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_75458[iVar0 /*9*/].f_1 > 1)
			{
				Global_75458[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_75458[iVar0 /*9*/].f_1 < 0)
			{
				Global_75458[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_11(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_63370)
	{
	}
	Global_63370 = 0;
	if (bParam0)
	{
		Global_63371 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75457)
		{
			if (Global_63587[Global_75458[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_75458[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_75457)
		{
			if (Global_75458[iVar0 /*9*/] > 0)
			{
				if (Global_75458[iVar0 /*9*/] == iParam1)
				{
					Global_75458[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_12()
{
	iLocal_231 = 0;
	while (iLocal_231 <= 9)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_268[iLocal_231]))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_268[iLocal_231]))
			{
				if (!unk_0x7F420695E3F776FB(iLocal_268[iLocal_231], 0))
				{
					if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if (func_13(unk_0x4A8C381C258A124D(), iLocal_268[iLocal_231]) > 200f)
						{
							unk_0x974022927CB47E68(iLocal_268[iLocal_231]);
							unk_0xF09E30AF1B8FB379(&(iLocal_268[iLocal_231]));
						}
						else if (func_13(unk_0x4A8C381C258A124D(), iLocal_268[iLocal_231]) > 20f)
						{
							if (unk_0x9B5C1660CCDF7189(iLocal_268[iLocal_231], joaat("script_task_go_to_entity_while_aiming_at_entity")) != 1 && unk_0x9B5C1660CCDF7189(iLocal_268[iLocal_231], joaat("script_task_go_to_entity_while_aiming_at_entity")) != 0)
							{
								unk_0x2433FB137DF847D2(iLocal_268[iLocal_231], unk_0x4A8C381C258A124D(), unk_0x4A8C381C258A124D(), 2f, 1, 15f, 20f, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
							}
						}
						else if (unk_0x9B5C1660CCDF7189(iLocal_268[iLocal_231], joaat("script_task_combat")) != 1 && unk_0x9B5C1660CCDF7189(iLocal_268[iLocal_231], joaat("script_task_combat")) != 0)
						{
							unk_0x62A5310368A20EFA(iLocal_268[iLocal_231], unk_0x4A8C381C258A124D(), 0, 16);
							unk_0xBE8796DB2B90A437(iLocal_268[iLocal_231], 50, 1);
						}
					}
					else if (func_13(unk_0x4A8C381C258A124D(), iLocal_268[iLocal_231]) > 200f)
					{
						unk_0xF09E30AF1B8FB379(&(iLocal_268[iLocal_231]));
					}
					else if (func_13(unk_0x4A8C381C258A124D(), iLocal_268[iLocal_231]) > 5f)
					{
						if (unk_0x9B5C1660CCDF7189(iLocal_268[iLocal_231], joaat("script_task_go_to_entity_while_aiming_at_entity")) != 1 && unk_0x9B5C1660CCDF7189(iLocal_268[iLocal_231], joaat("script_task_go_to_entity_while_aiming_at_entity")) != 0)
						{
							unk_0x2433FB137DF847D2(iLocal_268[iLocal_231], unk_0x4A8C381C258A124D(), unk_0x4A8C381C258A124D(), 2f, 1, 15f, 20f, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
						}
					}
					else if (unk_0x9B5C1660CCDF7189(iLocal_268[iLocal_231], joaat("script_task_combat")) != 1 && unk_0x9B5C1660CCDF7189(iLocal_268[iLocal_231], joaat("script_task_combat")) != 0)
					{
						unk_0x62A5310368A20EFA(iLocal_268[iLocal_231], unk_0x4A8C381C258A124D(), 0, 16);
						unk_0xBE8796DB2B90A437(iLocal_268[iLocal_231], 50, 1);
					}
				}
			}
		}
		iLocal_231++;
	}
	if (iLocal_367 == 1)
	{
		if (iLocal_344 == 0)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_286[0]))
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_286[0], 0))
				{
					if (unk_0x050D073F91C5243C(iLocal_286[0]))
					{
					}
					else
					{
						if (unk_0xFC8BFE4B41177C22(iLocal_268[6]))
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_268[6]))
							{
								unk_0xAAA71DD7E9059338(iLocal_268[6], 0);
								unk_0x974022927CB47E68(iLocal_268[6]);
								unk_0xB5396F1FB088FE38(&uLocal_304);
								unk_0x23EB5FC236231892(0, iLocal_286[0], 256);
								unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
								unk_0x93C0674FC00824D0(uLocal_304);
								unk_0x4BD42B0527065BB6(iLocal_268[6], uLocal_304);
								unk_0xD0557B139A542F12(&uLocal_304);
							}
						}
						if (unk_0xFC8BFE4B41177C22(iLocal_268[7]))
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_268[7]))
							{
								unk_0xAAA71DD7E9059338(iLocal_268[7], 0);
								unk_0x974022927CB47E68(iLocal_268[7]);
								unk_0xB5396F1FB088FE38(&uLocal_304);
								unk_0x23EB5FC236231892(0, iLocal_286[0], 256);
								unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
								unk_0x93C0674FC00824D0(uLocal_304);
								unk_0x4BD42B0527065BB6(iLocal_268[7], uLocal_304);
								unk_0xD0557B139A542F12(&uLocal_304);
							}
						}
						iLocal_344 = 1;
					}
				}
			}
		}
		else if (iLocal_399 == 0)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_286[0]))
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_286[0], 0))
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_268[6]))
					{
						if (!unk_0x4FAFF4BCB7633475(iLocal_268[6]))
						{
							if (!unk_0xCECDBB848D53DEB2(iLocal_268[6], iLocal_286[0], 0))
							{
								if (func_13(unk_0x4A8C381C258A124D(), iLocal_268[6]) < 20f)
								{
									func_14(iLocal_268[6], "DRAW_GUN", 24);
									iLocal_399 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_345 == 0)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_286[1]))
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_286[1], 0))
				{
					if (unk_0x050D073F91C5243C(iLocal_286[1]))
					{
					}
					else
					{
						if (unk_0xFC8BFE4B41177C22(iLocal_268[8]))
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_268[8]))
							{
								unk_0xAAA71DD7E9059338(iLocal_268[8], 0);
								unk_0x974022927CB47E68(iLocal_268[8]);
								unk_0xB5396F1FB088FE38(&uLocal_304);
								unk_0x23EB5FC236231892(0, iLocal_286[1], 256);
								unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
								unk_0x93C0674FC00824D0(uLocal_304);
								unk_0x4BD42B0527065BB6(iLocal_268[8], uLocal_304);
								unk_0xD0557B139A542F12(&uLocal_304);
							}
						}
						if (unk_0xFC8BFE4B41177C22(iLocal_268[9]))
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_268[9]))
							{
								unk_0xAAA71DD7E9059338(iLocal_268[9], 0);
								unk_0x974022927CB47E68(iLocal_268[9]);
								unk_0xB5396F1FB088FE38(&uLocal_304);
								unk_0x23EB5FC236231892(0, iLocal_286[1], 256);
								unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
								unk_0x93C0674FC00824D0(uLocal_304);
								unk_0x4BD42B0527065BB6(iLocal_268[9], uLocal_304);
								unk_0xD0557B139A542F12(&uLocal_304);
							}
						}
						iLocal_345 = 1;
					}
				}
			}
		}
	}
	if (iLocal_346 == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_268[10]))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_268[10]))
			{
				if (func_13(unk_0x4A8C381C258A124D(), iLocal_268[10]) > 200f)
				{
					unk_0xF09E30AF1B8FB379(&(iLocal_268[iLocal_231]));
					unk_0x268BE77F77533D03("misssolomon_3");
				}
				else if (unk_0xE100DD4F82A51BDE("misssolomon_3"))
				{
					if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), -923.2303f, -2948.004f, 12.9451f, 2f, 2f, 2f, 0, 1, 0))
					{
						if (!unk_0x4FAFF4BCB7633475(iLocal_268[10]))
						{
							unk_0x974022927CB47E68(iLocal_268[10]);
							unk_0xB5396F1FB088FE38(&uLocal_304);
							unk_0x10425721983AE158(0, "misssolomon_3", "plyr_roll_left", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
							unk_0x93C0674FC00824D0(uLocal_304);
							unk_0x4BD42B0527065BB6(iLocal_268[10], uLocal_304);
							unk_0xD0557B139A542F12(&uLocal_304);
							iLocal_346 = 1;
						}
					}
				}
			}
		}
	}
}

float func_13(int iParam0, int iParam1)
{
	return func_16(iParam0, iParam1, 1);
}

void func_14(var uParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(uParam0, sParam1, func_15(iParam2), 1);
}

int func_15(int iParam0)
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

float func_16(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	}
	if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
	}
	else
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Var1, iParam2);
}

void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78558)
	{
		if (!unk_0x4FAFF4BCB7633475(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC1BC1B8A5AA67C6B(iParam2, 0);
			}
			else
			{
				unk_0xC1BC1B8A5AA67C6B(iParam2, 1);
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x26C12212366CBF6E(iParam2, 0);
			}
			else
			{
				unk_0x26C12212366CBF6E(iParam2, 1);
			}
		}
	}
}

void func_18(bool bParam0, bool bParam1)
{
	if (BitTest(Global_32323, bParam0))
	{
		if (!bParam1)
		{
			unk_0x8744D2E3FC95740E(&Global_32323, bParam0);
			StringCopy(&(Global_32324[bParam0 /*6*/]), "NULL", 24);
			Global_32379[bParam0] = bParam1;
		}
	}
}

int func_19(bool bParam0)
{
	if (BitTest(Global_32323, bParam0))
	{
		return 1;
	}
	return 0;
}

void func_20(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 1);
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	if (func_23() && func_24())
	{
		while (Global_100676 != 6)
		{
			wait(0);
		}
		unk_0x98E393364463951A(0);
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				unk_0x5EF96FB2D3902DC7(unk_0x4A8C381C258A124D());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xFC8BFE4B41177C22(iParam0))
				{
					if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
					{
						if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam0, 0))
						{
							unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), iParam0, iParam1);
							unk_0xD815D4BD1AE9E85A(0f, 1065353216);
							unk_0x64BB72494B9DF6DC(0f);
							wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), true, 0);
			}
		}
		unk_0x7919995BD2B8745C();
		func_22(0);
	}
}

void func_22(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_100681.f_20), 13);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_100681.f_20), 13);
	}
}

int func_23()
{
	if (Global_100681 == 10 || Global_100681 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_24()
{
	return BitTest(Global_100681.f_20, 13);
}

void func_25(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!unk_0x1B79E937E91F40C3("FinaleC2", unk_0x1AF90EB93E0012D6()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_100718)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_100718)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_122(1);
		if (iParam0 <= Global_100718)
		{
		}
		iVar1 = func_120(unk_0x1AF90EB93E0012D6(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113648.f_9087.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_118(iVar1);
			cVar3 = { Global_91469[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113648.f_9087.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x375B1B37EF136A49(&cVar3, uVar2, Global_100718, iParam0);
		}
		else
		{
			iVar4 = func_113(unk_0x1AF90EB93E0012D6(), 1);
			if (iVar4 != -1)
			{
				Global_113648.f_18576[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_112(iVar4)}, 4);
				unk_0x375B1B37EF136A49(&uVar5, 0, Global_100718, iParam0);
			}
			else
			{
				iVar6 = func_111(&(Global_100681.f_3));
				if (iVar6 > -1)
				{
					Global_113648.f_24988.f_4[iVar6] = 0;
				}
			}
		}
		Global_94859 = iParam2;
		Global_100718 = iParam0;
		func_26(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x1B79E937E91F40C3(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100718)
	{
	}
}

void func_26(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_27(&Global_107196, unk_0x1AF90EB93E0012D6(), iParam0, uParam1, iParam3, iParam2);
}

void func_27(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_110();
	uParam0->f_1 = func_99();
	unk_0x239D73A1DE006629(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		func_68(&(uParam0->f_2884), 0);
		func_67(unk_0x4A8C381C258A124D());
		func_60(unk_0x4A8C381C258A124D(), 0);
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113648.f_2365.f_539.f_294[iVar1];
		if (iVar1 == func_57())
		{
			func_50(unk_0x4A8C381C258A124D(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_100406[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_100406[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_100406[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_100406[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_100406[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_100406[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_100406[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_100406[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_100406[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_100406[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113648.f_2365.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113648.f_2365.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0xDF7F16323520B858(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0xDF7F16323520B858(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0xDF7F16323520B858(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113648.f_20566.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_60536[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113648.f_2365.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113648.f_2365.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113648.f_2365.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113648.f_2365.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113648.f_2365.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113648.f_2365[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0xDF7F16323520B858(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
	unk_0xDF7F16323520B858(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
	unk_0xDF7F16323520B858(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_29(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_28(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_28(var uParam0)
{
	*uParam0 = Global_96530;
	uParam0->f_1 = Global_96531;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_29(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x4A8C381C258A124D();
	}
	if (unk_0xFC8BFE4B41177C22(iParam2))
	{
		uParam1->f_5 = func_47(iParam2);
	}
	if (func_44(iParam2, &iVar0, iParam3, iParam5))
	{
		func_30(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xFC8BFE4B41177C22(iVar0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0x2E6A27037F1DC473(iVar0, joaat("skylift")) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iVar0, 0))
			{
				func_30(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_30(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam2, 0))
	{
		func_32(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_31(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_100681.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_32(var uParam0, int iParam1, int iParam2)
{
	func_39(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_35(iParam1, 145, 0);
	uParam0->f_11 = func_34(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_33(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
		uParam0->f_6 = unk_0xCFC0C995455A6204(iParam1);
		uParam0->f_3 = { unk_0xE5741C6B6539231F(iParam1) };
		if (unk_0x5105BE70DEF1F5FB(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_78253 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xFC8BFE4B41177C22(Global_77348.f_484[iVar0]))
		{
			if (iParam0 == Global_77348.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 145;
	}
	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98012[iVar0]))
		{
			if (Global_98012[iVar0] == iParam0)
			{
				return Global_98022[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_35(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98012[iVar0]))
		{
			if (Global_98012[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_98022[iVar0])
				{
					if (iParam2 == 0 || unk_0x4B423FAA24E8ABF0(iParam0) == func_36(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_38(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_37(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_37(int iParam0, var uParam1, int iParam2)
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

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

void func_39(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		func_43(uParam1);
		uParam1->f_66 = unk_0x4B423FAA24E8ABF0(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xCA7159F2C5FF745A(iParam0), 16);
		*uParam1 = unk_0x4F06416A18248EA0(iParam0);
		unk_0xFF4B16F297D9CB3E(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x741D9B0685E67684(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x9D35AABAEE206518(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xDA63CE76F9AAB439(iParam0);
		uParam1->f_67 = unk_0xA089B04A208DBD0B(iParam0);
		uParam1->f_69 = unk_0x6A375D21624F9187(iParam0);
		uParam1->f_70 = unk_0x38A100E16C95161B(iParam0);
		unk_0x04434FA56DED5500(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x64FEACF0AD019F1F(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xF1B79038130E3C08(iParam0, 2))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 28);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 3))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 29);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 30);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_42(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x7943BD10E2A03FAC(iParam0, 0))
		{
			uParam1->f_68 = unk_0x54DA32C15F7A6ABA(iParam0);
		}
		if (unk_0x00C6FDED3EB75117(uParam1->f_66))
		{
			if (unk_0x61F41693A4648B46(iParam0))
			{
				switch (unk_0x68F7F7C5DF6717F8(iParam0))
				{
					case 3:
					case 0:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xE6BE8A525BA6BD44(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 9);
		}
		if (unk_0xFDA2576D37032738(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 10);
		}
		if (unk_0xA9D64A14804D119B(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 13);
			unk_0xD9B9D4D1CCED7CA6(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x2C0B2BB7913E8DBA(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 12);
		}
		func_41(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5318DF85BEB6B95F(iParam0, iVar0 + 1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_40(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x0BCE48C8677F9824(iParam0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 11);
		}
		if (unk_0xD130E7CDEE903624(iParam0, "IgnoredByQuickSave") && unk_0x3F40AE65F056B43D(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 27);
		}
	}
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
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
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_41(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD9F5E1FEFD1329E4(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x90E3EAFF8AAA1A42(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x1D5A665629D417A7(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x1D5A665629D417A7(*iParam0, iVar1))
			{
				switch (unk_0xD6BA8C57BDF9DEB9(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x94C9CD3D66808551(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xEFDD8C5443F6C9E4(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xEFDD8C5443F6C9E4(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_43(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_44(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			if (iParam0 == unk_0x4A8C381C258A124D())
			{
				*uParam1 = unk_0xDC8D5832207C2EAD();
			}
			else
			{
				*uParam1 = unk_0x6EF03BE64E058E2F(iParam0, 1);
			}
			if (unk_0xFC8BFE4B41177C22(*uParam1))
			{
				if (unk_0xD9F5E1FEFD1329E4(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(*uParam1, 1), unk_0xD1A6A821F5AC81DB(iParam0, 1), 1) < 100f)
					{
						if (unk_0x2E6A27037F1DC473(*uParam1, joaat("taxi")))
						{
							if (unk_0xFD5C5BBD1FE92BB7(*uParam1, -1, 0) != iParam0 && unk_0xFD5C5BBD1FE92BB7(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_45(*uParam1, func_110(), 1))
						{
							sVar0 = unk_0x1AF90EB93E0012D6();
							if (!unk_0x1B79E937E91F40C3(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x7F420695E3F776FB(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xD130E7CDEE903624(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x3F40AE65F056B43D(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x2E6A27037F1DC473(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_45(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_46(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113648.f_7231[iVar2], 0))
		{
			if (unk_0xFE448E8C2209CA31(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)
{
	if (func_38(iParam0))
	{
		return func_49(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_49(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_50(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		iVar0 = func_47(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_56(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_55(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_38(iVar0))
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
			if (func_54(161, iParam3))
			{
				uParam1->f_59 = func_51(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_51(753, iParam3, 0);
			}
			uParam1->f_60 = func_51(754, iParam3, 0);
			uParam1->f_61 = func_51(755, iParam3, 0);
		}
		if (unk_0x76CD105BCAC6EB9F() && iParam0 == unk_0x4A8C381C258A124D())
		{
			if (func_54(161, iParam3))
			{
				uParam1->f_59 = func_51(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_51(753, iParam3, 0);
			}
		}
	}
}

int func_51(int iParam0, int iParam1, int iParam2)
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

int func_52(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
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

int func_54(int iParam0, int iParam1)
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

void func_55(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
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

void func_56(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
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

int func_57()
{
	func_58();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_58()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_48(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_47(unk_0x4A8C381C258A124D());
			if (func_38(iVar0) && (!func_59(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_38(Global_113648.f_2365.f_539.f_4321))
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

bool func_59(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_60(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_47(iParam0);
	if (func_38(iVar0) && !unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (iParam0 == unk_0x4A8C381C258A124D())
		{
			func_61(iParam0, &(Global_113648.f_2365.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113648.f_2365.f_539.f_1730[iVar2 /*4*/][iVar0] = unk_0xFCFCA9D377ED6568(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xAE146ED24909CAF4();
					if (Global_113648.f_2365.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_113648.f_2365.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x755C848B9B13C696(unk_0x259BE71D8A81D4FA(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x1164A75E490C27B6(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x1164A75E490C27B6(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x1164A75E490C27B6(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_61(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	bool bVar10;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_66(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0xBCEDAE6CA2B2046E(iParam0, func_66(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x1149D67DB429787A(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x6C81F95CADD1E6D0(iParam0, Var4.f_0);
					Var4.f_4 = unk_0xB92D606AB30C334C(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!unk_0xACBE463290141D49(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					bVar1 = false;
					iVar2 = func_64(Var4.f_0, bVar1);
					while (iVar2 != 0)
					{
						if (unk_0x5EDED4B3E1A48E68(iParam0, Var4.f_0, iVar2))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Var4.f_2), bVar1);
						}
						bVar1++;
						iVar2 = func_64(Var4.f_0, bVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = unk_0xAFA659708600A8CD();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((unk_0xA40B513DA7201333(iVar5, &Var7) && !func_63(Var7.f_1)) && iVar9 < 51)
			{
				if (!unk_0x4BFA043D318BF9AE(Var7.f_0))
				{
					Var4.f_0 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x1149D67DB429787A(iParam0, Var4.f_0);
					if (unk_0x66B90BA528CFEBCE(iParam0, Var4.f_0, 0))
					{
						Var4.f_3 = unk_0x6C81F95CADD1E6D0(iParam0, Var4.f_0);
						Var4.f_4 = unk_0xB92D606AB30C334C(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xACBE463290141D49(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					bVar10 = false;
					bVar1 = false;
					while (bVar1 < unk_0x0A334014DFD4952C(iVar5))
					{
						if (unk_0x38A1582CAC3F4E95(iVar5, bVar1, &Var8))
						{
							if (!func_62(Var8.f_3))
							{
								if (unk_0x5EDED4B3E1A48E68(iParam0, Var4.f_0, Var8.f_3))
								{
									unk_0x0B0C9A0F9AAEB7F0(&(Var4.f_2), bVar10);
								}
								bVar10++;
							}
						}
						bVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x66B90BA528CFEBCE(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_pistol_mk2_camo_slide"):
		case joaat("component_pistol_mk2_camo_02_slide"):
		case joaat("component_pistol_mk2_camo_03_slide"):
		case joaat("component_pistol_mk2_camo_04_slide"):
		case joaat("component_pistol_mk2_camo_05_slide"):
		case joaat("component_pistol_mk2_camo_06_slide"):
		case joaat("component_pistol_mk2_camo_07_slide"):
		case joaat("component_pistol_mk2_camo_08_slide"):
		case joaat("component_pistol_mk2_camo_09_slide"):
		case joaat("component_pistol_mk2_camo_10_slide"):
		case joaat("component_pistol_mk2_camo_ind_01_slide"):
		case joaat("component_snspistol_mk2_camo_slide"):
		case joaat("component_snspistol_mk2_camo_02_slide"):
		case joaat("component_snspistol_mk2_camo_03_slide"):
		case joaat("component_snspistol_mk2_camo_04_slide"):
		case joaat("component_snspistol_mk2_camo_05_slide"):
		case joaat("component_snspistol_mk2_camo_06_slide"):
		case joaat("component_snspistol_mk2_camo_07_slide"):
		case joaat("component_snspistol_mk2_camo_08_slide"):
		case joaat("component_snspistol_mk2_camo_09_slide"):
		case joaat("component_snspistol_mk2_camo_10_slide"):
		case joaat("component_snspistol_mk2_camo_ind_01_slide"):
		case joaat("component_pistol_mk2_varmod_xm3_slide"):
			return 1;
			break;
	}
	return 0;
}

int func_63(int iParam0)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
			case joaat("weapon_raycarbine"):
			case joaat("weapon_rayminigun"):
			case joaat("weapon_raypistol"):
			case joaat("weapon_navyrevolver"):
			case joaat("weapon_ceramicpistol"):
			case joaat("weapon_gadgetpistol"):
			case joaat("weapon_militaryrifle"):
			case joaat("weapon_combatshotgun"):
			case joaat("weapon_emplauncher"):
			case joaat("weapon_fertilizercan"):
			case joaat("weapon_stungun_mp"):
			case joaat("weapon_metaldetector"):
			case joaat("weapon_precisionrifle"):
			case joaat("weapon_tacticalrifle"):
			case joaat("weapon_pistolxm3"):
			case joaat("weapon_candycane"):
			case joaat("weapon_railgunxm3"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_64(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
				
				case 5:
					iVar0 = joaat("component_appistol_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
				
				case 6:
					iVar0 = joaat("component_microsmg_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
				
				case 3:
					iVar0 = joaat("component_pumpshotgun_varmod_security");
					break;
				
				case 4:
					iVar0 = joaat("component_pumpshotgun_varmod_xm3");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		case joaat("weapon_bat"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_bat_varmod_xm3");
					break;
				
				case 1:
					iVar0 = joaat("component_bat_varmod_xm3_01");
					break;
				
				case 2:
					iVar0 = joaat("component_bat_varmod_xm3_02");
					break;
				
				case 3:
					iVar0 = joaat("component_bat_varmod_xm3_03");
					break;
				
				case 4:
					iVar0 = joaat("component_bat_varmod_xm3_04");
					break;
				
				case 5:
					iVar0 = joaat("component_bat_varmod_xm3_05");
					break;
				
				case 6:
					iVar0 = joaat("component_bat_varmod_xm3_06");
					break;
				
				case 7:
					iVar0 = joaat("component_bat_varmod_xm3_07");
					break;
				
				case 8:
					iVar0 = joaat("component_bat_varmod_xm3_08");
					break;
				
				case 9:
					iVar0 = joaat("component_bat_varmod_xm3_09");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_65(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x660FA55F8D417CAB(iVar1))
					{
						if (unk_0x737024F2814ABDDD(iVar1, iVar2, &Var5))
						{
							if (!func_62(Var5.f_3))
							{
								if (iVar3 == bParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_65(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x9A7818E159C72516();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xDF94727C5BBB298F(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_67(int iParam0)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (func_38(iVar0) && !unk_0x4FAFF4BCB7633475(iParam0))
	{
		Global_113648.f_2365.f_539.f_294[iVar0] = unk_0xE5E6F6EFCE07789A(iParam0);
	}
}

void func_68(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	uParam0->f_3 = unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D());
	uParam0->f_5 = unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D());
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		uParam0->f_4 = unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA());
	}
	if (vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x486FF5D06E9659F1(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (BitTest(Global_78807, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (BitTest(Global_78807, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (BitTest(Global_78807, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (BitTest(Global_78807, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0556019E7EE8EC9A(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_72(&iVar0))
		{
			if (func_70(iVar0, &Var1, &uVar2))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar3 = func_110();
			if (iVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_69(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_69(struct<3> Param0, char* sParam1, struct<3> Param2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7830326EF9D54DBB(Param0))
	{
		iVar0 = unk_0x0556019E7EE8EC9A(Param2, sParam1);
		if (!unk_0xF8A8852F99E201DD(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x91398220755C14BF(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_70(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_71(*uParam1, 0f, 0f, 0f, 0);
}

bool func_71(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_72(var uParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_98())
		{
			*uParam0 = func_78(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 6, -1, 0, 1, -1);
			if (func_77(*uParam0) && !func_73(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_73(int iParam0)
{
	return func_74(iParam0, 0, 1);
}

int func_74(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100733.f_1407[iParam0], iParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_76() == 0)
		{
			return BitTest(func_51(func_75(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113648.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12385;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9916;
			break;
		
		case 57:
			return 9918;
			break;
		
		case 58:
			return 11433;
			break;
		
		case 59:
			return 11844;
			break;
		
		default:
			break;
	}
	return 14192;
}

int func_76()
{
	return Global_32163;
}

int func_77(int iParam0)
{
	return func_74(iParam0, 5, 1);
}

int func_78(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		if (iParam1 == 6 || iParam1 == func_97(iVar0))
		{
			if (!bParam3 || func_96(iVar0))
			{
				fVar1 = unk_0xED977E2AE2CB16EE(Param0, func_79(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_79(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_93(Global_102825);
			break;
		
		case 46:
			if (Global_1853747 != func_92())
			{
				if (func_91(Global_1853747))
				{
					return func_84(2, 2);
				}
				else if (func_83(Global_1853747))
				{
					return func_84(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1970473;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159.901f, 1075.213f, -25.36174f;
			break;
		
		case 55:
			return -2194.123f, 1103.805f, -24.2451f;
			break;
		
		case 56:
			switch (Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_321.f_7)
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
					break;
				
				case 156:
					return -1029.166f, -426.3766f, 72.2069f;
					break;
				
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
					break;
				
				case 158:
					return -1013.718f, -768.3539f, 69.4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
		
		case 58:
			return func_80();
			break;
		
		case 59:
			return 560f, -405f, -69.6591f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_80()
{
	if (!func_82(Global_1956117))
	{
		return Global_1956117;
	}
	switch (func_81())
	{
		case 0:
			return -29.532f, 6435.136f, 31.162f;
		
		case 1:
			return 1705.214f, 4819.167f, 41.75f;
		
		case 2:
			return 1795.522f, 3899.753f, 33.869f;
		
		case 3:
			return 1335.536f, 2758.746f, 51.099f;
		
		case 4:
			return 795.583f, 1210.78f, 338.962f;
		
		case 5:
			return -3192.67f, 1077.205f, 20.594f;
		
		case 6:
			return -789.719f, 5400.921f, 33.915f;
		
		case 7:
			return -24.384f, 3048.167f, 40.703f;
		
		case 8:
			return 2666.786f, 1469.324f, 24.237f;
		
		case 9:
			return -1454.966f, 2667.503f, 3.2f;
		
		case 10:
			return 2340.418f, 3054.188f, 47.888f;
		
		case 11:
			return 1509.183f, -2146.795f, 76.853f;
		
		case 12:
			return 1137.404f, -1358.654f, 34.322f;
		
		case 13:
			return -57.208f, -2658.793f, 5.737f;
		
		case 14:
			return 1905.017f, 565.222f, 175.558f;
		
		case 15:
			return 974.484f, -1718.798f, 30.296f;
		
		case 16:
			return 779.077f, -3266.297f, 5.719f;
		
		case 17:
			return -587.728f, -1637.208f, 19.611f;
		
		case 18:
			return 733.99f, -736.803f, 26.165f;
		
		case 19:
			return -1694.632f, -454.082f, 40.712f;
		
		case 20:
			return -1330.726f, -1163.948f, 4.313f;
		
		case 21:
			return -496.618f, 40.231f, 52.316f;
		
		case 22:
			return 275.527f, 66.509f, 94.108f;
		
		case 23:
			return 260.928f, -763.35f, 30.559f;
		
		case 24:
			return -478.025f, -741.45f, 30.299f;
		
		case 25:
			return 894.94f, 3603.911f, 32.56f;
		
		case 26:
			return -2166.511f, 4289.503f, 48.733f;
		
		case 27:
			return 1465.633f, 6553.67f, 13.771f;
		
		case 28:
			return 1101.032f, -335.172f, 66.944f;
		
		case 29:
			return 149.683f, -1655.674f, 29.028f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_81()
{
	return Global_2652258.f_2650;
}

int func_82(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_83(int iParam0)
{
	if (iParam0 != func_92())
	{
		if ((BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 0) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 1)) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_84(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1853747 != func_92())
	{
		if (iParam1 == 3)
		{
			if (func_85(iParam0, 1, &Var0, 0, 0))
			{
				Var1 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 4))
			{
				if (func_85(iParam0, 1, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
			else if (BitTest(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 5))
			{
				if (func_85(iParam0, 2, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
		}
	}
	return Var1;
}

int func_85(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var1;
	struct<4> Var2;
	struct<3> Var3;
	
	if (!func_90(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_90(iParam1, &Var1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_88(iParam0) };
	}
	else
	{
		Var2 = { func_87(iParam0) };
	}
	Var3 = { Var2 - Var0 };
	Var3 = { func_86(Var3, -Var0.f_3.f_2) };
	Var3 = { func_86(Var3, Var1.f_3.f_2) };
	*uParam2 = { unk_0xF10F2A2453AF1DFB(Var1, 0f, Var3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_86(struct<3> Param0, float fParam1)
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

struct<6> func_87(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_88(int iParam0)
{
	return func_89(iParam0);
}

struct<6> func_89(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_90(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_91(int iParam0)
{
	if (iParam0 != func_92())
	{
		if ((BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 3) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 4)) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_92()
{
	return -1;
}

Vector3 func_93(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_94() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		case 21:
			return 570f, -415f, -70f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_94()
{
	return func_95(unk_0x259BE71D8A81D4FA());
}

var func_95(int iParam0)
{
	return unk_0x8B5B2BE72A7C0CF6(Global_2657589[iParam0 /*466*/].f_321.f_3, 28, 31);
}

int func_96(int iParam0)
{
	return func_74(iParam0, 0, 0);
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
	}
	return 6;
}

bool func_98()
{
	return Global_100733.f_387 > 0;
}

var func_99()
{
	var uVar0;
	
	func_109(&uVar0, unk_0x4BA5A16068183C5E());
	func_108(&uVar0, unk_0x18E502A71E28968C());
	func_107(&uVar0, unk_0x5295501D0862870D());
	func_102(&uVar0, unk_0xB12880C92EA6EE15());
	func_101(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_100(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_100(var uParam0, int iParam1)
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

void func_101(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_102(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_106(*uParam0);
	iVar1 = func_104(*uParam0);
	if (iParam1 < 1 || iParam1 > func_103(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_103(int iParam0, int iParam1)
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

int func_104(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_105(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_105(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_106(int iParam0)
{
	return iParam0 & 15;
}

void func_107(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_108(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_109(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_110()
{
	func_58();
	return Global_113648.f_2365.f_539.f_4321;
}

int func_111(char* sParam0)
{
	if (unk_0x1B79E937E91F40C3("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x1B79E937E91F40C3("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x1B79E937E91F40C3("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x1B79E937E91F40C3("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_112(int iParam0)
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

int func_113(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0x70E57E9927B6BA58(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_114(iVar0, &sVar1);
		if (unk_0x70E57E9927B6BA58(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_114(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_115(uParam1, "Abigail1", func_117(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_116(iParam0), 1, 0);
			break;
		
		case 1:
			func_115(uParam1, "Abigail2", func_117(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_116(iParam0), 1, 0);
			break;
		
		case 2:
			func_115(uParam1, "Barry1", func_117(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_116(iParam0), 1, 0);
			break;
		
		case 3:
			func_115(uParam1, "Barry2", func_117(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_116(iParam0), 1, 1);
			break;
		
		case 4:
			func_115(uParam1, "Barry3", func_117(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_116(iParam0), 0, 0);
			break;
		
		case 5:
			func_115(uParam1, "Barry3A", func_117(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		case 6:
			func_115(uParam1, "Barry3C", func_117(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		case 7:
			func_115(uParam1, "Barry4", func_117(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_116(iParam0), 0, 0);
			break;
		
		case 8:
			func_115(uParam1, "Dreyfuss1", func_117(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_116(iParam0), 0, 0);
			break;
		
		case 9:
			func_115(uParam1, "Epsilon1", func_117(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_116(iParam0), 0, 0);
			break;
		
		case 10:
			func_115(uParam1, "Epsilon2", func_117(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_116(iParam0), 1, 0);
			break;
		
		case 11:
			func_115(uParam1, "Epsilon3", func_117(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_116(iParam0), 0, 0);
			break;
		
		case 12:
			func_115(uParam1, "Epsilon4", func_117(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_116(iParam0), 0, 0);
			break;
		
		case 13:
			func_115(uParam1, "Epsilon5", func_117(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_116(iParam0), 1, 0);
			break;
		
		case 14:
			func_115(uParam1, "Epsilon6", func_117(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		case 15:
			func_115(uParam1, "Epsilon7", func_117(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_116(iParam0), 0, 0);
			break;
		
		case 16:
			func_115(uParam1, "Epsilon8", func_117(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_116(iParam0), 1, 0);
			break;
		
		case 17:
			func_115(uParam1, "Extreme1", func_117(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		case 18:
			func_115(uParam1, "Extreme2", func_117(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		case 19:
			func_115(uParam1, "Extreme3", func_117(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		case 20:
			func_115(uParam1, "Extreme4", func_117(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_116(iParam0), 0, 0);
			break;
		
		case 21:
			func_115(uParam1, "Fanatic1", func_117(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_116(iParam0), 1, 0);
			break;
		
		case 22:
			func_115(uParam1, "Fanatic2", func_117(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_116(iParam0), 1, 0);
			break;
		
		case 23:
			func_115(uParam1, "Fanatic3", func_117(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_116(iParam0), 0, 1);
			break;
		
		case 24:
			func_115(uParam1, "Hao1", func_117(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_116(iParam0), 0, 1);
			break;
		
		case 25:
			func_115(uParam1, "Hunting1", func_117(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		case 26:
			func_115(uParam1, "Hunting2", func_117(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		case 27:
			func_115(uParam1, "Josh1", func_117(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_116(iParam0), 1, 0);
			break;
		
		case 28:
			func_115(uParam1, "Josh2", func_117(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_116(iParam0), 1, 1);
			break;
		
		case 29:
			func_115(uParam1, "Josh3", func_117(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_116(iParam0), 1, 1);
			break;
		
		case 30:
			func_115(uParam1, "Josh4", func_117(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_116(iParam0), 1, 0);
			break;
		
		case 31:
			func_115(uParam1, "Maude1", func_117(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		case 32:
			func_115(uParam1, "Minute1", func_117(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		case 33:
			func_115(uParam1, "Minute2", func_117(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		case 34:
			func_115(uParam1, "Minute3", func_117(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		case 35:
			func_115(uParam1, "MrsPhilips1", func_117(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_116(iParam0), 0, 0);
			break;
		
		case 36:
			func_115(uParam1, "MrsPhilips2", func_117(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_116(iParam0), 0, 0);
			break;
		
		case 37:
			func_115(uParam1, "Nigel1", func_117(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_116(iParam0), 1, 0);
			break;
		
		case 38:
			func_115(uParam1, "Nigel1A", func_117(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_116(iParam0), 1, 1);
			break;
		
		case 39:
			func_115(uParam1, "Nigel1B", func_117(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_116(iParam0), 1, 1);
			break;
		
		case 40:
			func_115(uParam1, "Nigel1C", func_117(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_116(iParam0), 1, 1);
			break;
		
		case 41:
			func_115(uParam1, "Nigel1D", func_117(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_116(iParam0), 1, 1);
			break;
		
		case 42:
			func_115(uParam1, "Nigel2", func_117(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_116(iParam0), 1, 1);
			break;
		
		case 43:
			func_115(uParam1, "Nigel3", func_117(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_116(iParam0), 1, 1);
			break;
		
		case 44:
			func_115(uParam1, "Omega1", func_117(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_116(iParam0), 0, 0);
			break;
		
		case 45:
			func_115(uParam1, "Omega2", func_117(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_116(iParam0), 0, 0);
			break;
		
		case 46:
			func_115(uParam1, "Paparazzo1", func_117(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		case 47:
			func_115(uParam1, "Paparazzo2", func_117(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		case 48:
			func_115(uParam1, "Paparazzo3", func_117(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_116(iParam0), 0, 0);
			break;
		
		case 49:
			func_115(uParam1, "Paparazzo3A", func_117(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		case 50:
			func_115(uParam1, "Paparazzo3B", func_117(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		case 51:
			func_115(uParam1, "Paparazzo4", func_117(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_116(iParam0), 0, 0);
			break;
		
		case 52:
			func_115(uParam1, "Rampage1", func_117(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_116(iParam0), 0, 0);
			break;
		
		case 54:
			func_115(uParam1, "Rampage3", func_117(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_116(iParam0), 1, 0);
			break;
		
		case 55:
			func_115(uParam1, "Rampage4", func_117(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_116(iParam0), 1, 0);
			break;
		
		case 56:
			func_115(uParam1, "Rampage5", func_117(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_116(iParam0), 0, 0);
			break;
		
		case 53:
			func_115(uParam1, "Rampage2", func_117(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_116(iParam0), 1, 0);
			break;
		
		case 57:
			func_115(uParam1, "TheLastOne", func_117(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		case 58:
			func_115(uParam1, "Tonya1", func_117(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		case 59:
			func_115(uParam1, "Tonya2", func_117(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		case 60:
			func_115(uParam1, "Tonya3", func_117(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		case 61:
			func_115(uParam1, "Tonya4", func_117(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		case 62:
			func_115(uParam1, "Tonya5", func_117(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_116(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_115(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_116(int iParam0)
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

struct<2> func_117(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_112(iParam0) };
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

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_119(Global_113648.f_9087.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_119(Global_113648.f_9087.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_119(Global_113648.f_9087.f_99.f_205[11]);
			break;
		
		case 90:
			return func_119(Global_113648.f_9087.f_99.f_205[7]);
			break;
		
		case 93:
			return func_119(Global_113648.f_9087.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_120(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x70E57E9927B6BA58(sParam0);
	iVar1 = func_121(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_121(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_91469[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_122(bool bParam0)
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

void func_123()
{
	unk_0xF286E683D1E1F101("EXTRASUNNY");
	func_232();
	func_204();
	func_125();
	if (!func_24())
	{
		func_124();
	}
	iLocal_349 = 1;
	unk_0x64BB72494B9DF6DC(0f);
}

void func_124()
{
	switch (iLocal_222)
	{
		case 2:
			unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
			unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -1019.579f, -484.872f, 36.0795f, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 93.7701f);
			break;
		
		case 3:
			if (unk_0xD9F5E1FEFD1329E4(iLocal_279, 0))
			{
				if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_279, 0))
				{
					unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), iLocal_279, -1);
				}
				unk_0xD25E9BDC14A0B649(iLocal_279, 3000, 0);
				unk_0xD0F1DB0E50B367AD(iLocal_279, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 5:
			unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
			unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -935.4413f, -2928.061f, 12.9451f, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 178.466f);
			unk_0x788F35D395511DFE(unk_0x4A8C381C258A124D(), 1, 1);
			break;
		
		case 8:
			unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
			unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -937.5466f, -2968.713f, 12.9451f, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 111.5016f);
			unk_0x788F35D395511DFE(unk_0x4A8C381C258A124D(), 1, 1);
			break;
	}
}

void func_125()
{
	switch (iLocal_222)
	{
		case 2:
			unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 0, 0);
			unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
			unk_0x2094BC4B6731BA68(-1026.8f, -492.1f, 36f, 18f, 1, 0, 0, 0);
			unk_0xA63572E348CC4CFB(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0, 1);
			unk_0xC4BCE90F7242F354(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0);
			unk_0xEC9DAA34BBB4658C(joaat("rapidgt"));
			unk_0xEC9DAA34BBB4658C(joaat("surano"));
			unk_0xEC9DAA34BBB4658C(joaat("carbonizzare"));
			while ((!unk_0x6252BC0DD8A320DB(joaat("rapidgt")) || !unk_0x6252BC0DD8A320DB(joaat("surano"))) || !unk_0x6252BC0DD8A320DB(joaat("carbonizzare")))
			{
				wait(0);
			}
			if (!unk_0xFC8BFE4B41177C22(iLocal_279))
			{
				unk_0x2094BC4B6731BA68(Local_306, 5f, 1, 0, 0, 0);
				iLocal_279 = unk_0x5779387E956077A6(joaat("rapidgt"), Local_306, fLocal_319, 1, 1, 0);
				unk_0xD133EF7430EDCD09(iLocal_279, 112, 112);
				unk_0xD25E9BDC14A0B649(iLocal_279, 3000, 0);
				unk_0xD05AF216D970F274(iLocal_279, 1);
				unk_0x55098D9E9AD58806(joaat("rapidgt"));
				unk_0xCCA6D8A84EE8C88A(joaat("rapidgt"), 1);
				unk_0x11C125313CB8ADA2(iLocal_279, 1);
				unk_0x5FE0938FDE9B0958(iLocal_279, 1);
			}
			if (!unk_0xFC8BFE4B41177C22(iLocal_290))
			{
				if (unk_0x6252BC0DD8A320DB(joaat("surano")))
				{
					unk_0x2094BC4B6731BA68(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, 0);
					iLocal_290 = unk_0x5779387E956077A6(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 1, 1, 0);
					unk_0xD133EF7430EDCD09(iLocal_290, 0, 0);
					unk_0xD25E9BDC14A0B649(iLocal_290, 3000, 0);
					unk_0xD05AF216D970F274(iLocal_290, 1);
					unk_0x55098D9E9AD58806(joaat("surano"));
					unk_0xCCA6D8A84EE8C88A(joaat("surano"), 1);
					unk_0x5FE0938FDE9B0958(iLocal_290, 1);
				}
			}
			if (!unk_0xFC8BFE4B41177C22(iLocal_291))
			{
				if (unk_0x6252BC0DD8A320DB(joaat("carbonizzare")))
				{
					unk_0x2094BC4B6731BA68(Local_306, 5f, 1, 0, 0, 0);
					iLocal_291 = unk_0x5779387E956077A6(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 1, 1, 0);
					unk_0xD133EF7430EDCD09(iLocal_291, 89, 89);
					unk_0xD25E9BDC14A0B649(iLocal_291, 3000, 0);
					unk_0xD05AF216D970F274(iLocal_291, 1);
					unk_0x55098D9E9AD58806(joaat("carbonizzare"));
					unk_0xCCA6D8A84EE8C88A(joaat("carbonizzare"), 1);
					unk_0x5FE0938FDE9B0958(iLocal_291, 1);
				}
			}
			break;
		
		case 3:
			unk_0x16088CC55E7F218A("TRV4_CHASE");
			unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 0, 0);
			unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
			func_201();
			unk_0x2094BC4B6731BA68(Local_307, 200f, 1, 0, 0, 0);
			if (!unk_0xFC8BFE4B41177C22(iLocal_278))
			{
				iLocal_278 = unk_0x5779387E956077A6(joaat("cogcabrio"), Local_307, fLocal_320, 1, 1, 0);
				unk_0xD0F1DB0E50B367AD(iLocal_278, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0xD133EF7430EDCD09(iLocal_278, 27, 27);
				unk_0x55098D9E9AD58806(joaat("cogcabrio"));
				unk_0x616C2EAE947E6027(iLocal_278, "SOL_3_MOLLY_CAR_Group", 0);
			}
			if (!unk_0xFC8BFE4B41177C22(iLocal_264))
			{
				iLocal_264 = unk_0x8728A378EF2B46B2(iLocal_278, 26, joaat("ig_molly"), -1, 1, 1);
				unk_0xD0F1DB0E50B367AD(iLocal_264, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x935364B4448CD584(iLocal_264, 1);
				unk_0x3F58BFCF656F0DF1(iLocal_264, 0);
				unk_0x55098D9E9AD58806(joaat("ig_molly"));
				unk_0x3CEA1FD137ACE2D9(iLocal_264, joaat("player"));
			}
			if (func_23())
			{
				if (!unk_0xFC8BFE4B41177C22(iLocal_279))
				{
					if (func_200())
					{
						if (!unk_0xBA16CD57E37AC32A(func_199()) && !unk_0x00C6FDED3EB75117(func_199()))
						{
							iLocal_279 = func_148(Local_316, fLocal_323);
							unk_0x55098D9E9AD58806(func_199());
							unk_0x5FE0938FDE9B0958(iLocal_279, 1);
						}
						else
						{
							iLocal_279 = unk_0x5779387E956077A6(joaat("rapidgt"), Local_316, fLocal_323, 1, 1, 0);
							unk_0xD133EF7430EDCD09(iLocal_279, 112, 112);
						}
					}
					else
					{
						iLocal_279 = unk_0x5779387E956077A6(joaat("rapidgt"), Local_316, fLocal_323, 1, 1, 0);
						unk_0xD133EF7430EDCD09(iLocal_279, 112, 112);
					}
					unk_0xD25E9BDC14A0B649(iLocal_279, 3000, 0);
					unk_0xD05AF216D970F274(iLocal_279, 1);
					unk_0xD0F1DB0E50B367AD(iLocal_279, 0, 1, 0, 0, 0, 0, 0, 0);
					unk_0x11C125313CB8ADA2(iLocal_279, 1);
					unk_0x55098D9E9AD58806(joaat("rapidgt"));
					unk_0x5FE0938FDE9B0958(iLocal_279, 1);
				}
			}
			else if (!unk_0xFC8BFE4B41177C22(iLocal_279))
			{
				iLocal_279 = unk_0x5779387E956077A6(joaat("rapidgt"), Local_316, fLocal_323, 1, 1, 0);
				unk_0xD133EF7430EDCD09(iLocal_279, 112, 112);
				unk_0x55098D9E9AD58806(joaat("rapidgt"));
				unk_0xD25E9BDC14A0B649(iLocal_279, 3000, 0);
				unk_0xD05AF216D970F274(iLocal_279, 1);
				unk_0xD0F1DB0E50B367AD(iLocal_279, 0, 1, 0, 0, 0, 0, 0, 0);
				unk_0x11C125313CB8ADA2(iLocal_279, 1);
				unk_0x5FE0938FDE9B0958(iLocal_279, 1);
			}
			break;
		
		case 5:
			iLocal_350 = 0;
			unk_0x2094BC4B6731BA68(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, 0);
			settimera(0);
			unk_0xEC9DAA34BBB4658C(joaat("jet"));
			unk_0xEC9DAA34BBB4658C(joaat("shamal"));
			unk_0xD04A772C411165F2("BB_MOLLY_2");
			unk_0xEC9DAA34BBB4658C(joaat("s_m_y_airworker"));
			unk_0xEC9DAA34BBB4658C(joaat("s_m_y_cop_01"));
			unk_0xEC9DAA34BBB4658C(joaat("police3"));
			unk_0xEC9DAA34BBB4658C(joaat("ig_molly"));
			unk_0xEC9DAA34BBB4658C(joaat("cogcabrio"));
			unk_0xEC9DAA34BBB4658C(joaat("rapidgt"));
			unk_0xEC9DAA34BBB4658C(joaat("prop_cs_film_reel_01"));
			unk_0xD772E6694B8472A6(68, "BB_Chase");
			unk_0xD772E6694B8472A6(69, "BB_Chase");
			unk_0xD04A772C411165F2("Trev4_5");
			unk_0x8003D3C0115A1035();
			unk_0x80813AC549A1E8AE("move_f@film_reel_arms");
			unk_0x80813AC549A1E8AE("misssolomon_3");
			while (((((((((((((((!unk_0x6252BC0DD8A320DB(joaat("jet")) || !unk_0x6252BC0DD8A320DB(joaat("shamal"))) || !unk_0xA08EEC7306CF6198("BB_MOLLY_2")) || !unk_0x6252BC0DD8A320DB(joaat("s_m_y_airworker"))) || !unk_0x6252BC0DD8A320DB(joaat("s_m_y_cop_01"))) || !unk_0x6252BC0DD8A320DB(joaat("police3"))) || !unk_0x6252BC0DD8A320DB(joaat("ig_molly"))) || !unk_0x6252BC0DD8A320DB(joaat("cogcabrio"))) || !unk_0x6252BC0DD8A320DB(joaat("rapidgt"))) || !unk_0x6252BC0DD8A320DB(joaat("prop_cs_film_reel_01"))) || !unk_0x266D9DB5FCE4003B(68, "BB_Chase")) || !unk_0x266D9DB5FCE4003B(69, "BB_Chase")) || !unk_0xA08EEC7306CF6198("Trev4_5")) || !unk_0x6F13318788EDDAD8()) || !unk_0xE100DD4F82A51BDE("move_f@film_reel_arms")) || !unk_0xE100DD4F82A51BDE("misssolomon_3"))
			{
				wait(0);
			}
			if (!unk_0xFC8BFE4B41177C22(iLocal_264))
			{
				iLocal_264 = unk_0xB1DBFEB95C0EFB88(26, joaat("ig_molly"), -920.5093f, -2943.93f, 12.9451f, 157.6203f, 1, 1);
				unk_0x935364B4448CD584(iLocal_264, 1);
				unk_0x3F58BFCF656F0DF1(iLocal_264, 0);
				unk_0xAAA71DD7E9059338(iLocal_264, 1);
				unk_0x55098D9E9AD58806(joaat("ig_molly"));
				unk_0x788F35D395511DFE(iLocal_264, 1, 1);
				unk_0x3CEA1FD137ACE2D9(iLocal_264, joaat("player"));
			}
			iLocal_295 = unk_0x4E55EAB577C13329(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, 1, 1, 0);
			unk_0x4D306DD94DD6FDBA(iLocal_295, iLocal_264, unk_0x72F7E39FB49FC0BA(iLocal_264, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
			if (!unk_0xFC8BFE4B41177C22(iLocal_284))
			{
				iLocal_284 = unk_0x5779387E956077A6(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1, 0);
				unk_0xA1C03303EC67320B(iLocal_284, 2);
				unk_0xF04751F8E604D487(iLocal_284, 0);
				unk_0x5D7CD709B34C90F0(iLocal_284, 1);
				unk_0xD0F1DB0E50B367AD(iLocal_284, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x55098D9E9AD58806(joaat("jet"));
				unk_0xF88FC425EC7D675D(iLocal_284, 500);
			}
			if (func_23())
			{
				if (func_200())
				{
					func_146();
					while (!func_131())
					{
						wait(0);
					}
				}
				if (!unk_0xFC8BFE4B41177C22(iLocal_279))
				{
					if (func_200())
					{
						iLocal_279 = func_148(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						unk_0x11C125313CB8ADA2(iLocal_279, 1);
						unk_0x55098D9E9AD58806(func_199());
						unk_0x5FE0938FDE9B0958(iLocal_279, 1);
					}
					else
					{
						iLocal_279 = unk_0x5779387E956077A6(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1, 0);
						unk_0xD133EF7430EDCD09(iLocal_279, 112, 112);
						unk_0x11C125313CB8ADA2(iLocal_279, 1);
						unk_0x55098D9E9AD58806(joaat("rapidgt"));
						unk_0x5FE0938FDE9B0958(iLocal_279, 1);
					}
				}
			}
			else if (!unk_0xFC8BFE4B41177C22(iLocal_279))
			{
				iLocal_279 = unk_0x5779387E956077A6(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1, 0);
				unk_0xD133EF7430EDCD09(iLocal_279, 112, 112);
				unk_0x55098D9E9AD58806(joaat("rapidgt"));
				unk_0x11C125313CB8ADA2(iLocal_279, 1);
				unk_0x5FE0938FDE9B0958(iLocal_279, 1);
			}
			if (!unk_0xFC8BFE4B41177C22(iLocal_278))
			{
				iLocal_278 = unk_0x5779387E956077A6(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 1, 1, 0);
				unk_0xD133EF7430EDCD09(iLocal_278, 27, 27);
				unk_0x55098D9E9AD58806(joaat("cogcabrio"));
			}
			if (!unk_0xFC8BFE4B41177C22(iLocal_281))
			{
				iLocal_281 = unk_0x5779387E956077A6(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 1, 1, 0);
			}
			if (!unk_0xFC8BFE4B41177C22(iLocal_272))
			{
				iLocal_272 = unk_0xB1DBFEB95C0EFB88(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, 1);
				unk_0xB41DEC3AAC1AA107(iLocal_272, joaat("weapon_pistol"), 1000, 1, 1);
				func_130(iLocal_272, 0);
				unk_0x55098D9E9AD58806(joaat("s_m_y_cop_01"));
			}
			settimera(0);
			func_129(2, 1);
			iLocal_358 = 1;
			break;
		
		case 8:
			unk_0x2094BC4B6731BA68(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, 0);
			settimera(0);
			iLocal_350 = 0;
			iLocal_358 = 0;
			iLocal_337 = 0;
			unk_0xEC9DAA34BBB4658C(joaat("jet"));
			unk_0xEC9DAA34BBB4658C(joaat("s_m_y_airworker"));
			unk_0xEC9DAA34BBB4658C(joaat("shamal"));
			unk_0xEC9DAA34BBB4658C(joaat("s_m_y_cop_01"));
			unk_0xEC9DAA34BBB4658C(joaat("police3"));
			unk_0xEC9DAA34BBB4658C(joaat("cogcabrio"));
			unk_0xEC9DAA34BBB4658C(joaat("rapidgt"));
			unk_0xEC9DAA34BBB4658C(joaat("prop_jet_bloodsplat_01"));
			unk_0xD772E6694B8472A6(68, "BB_Chase");
			unk_0xD772E6694B8472A6(69, "BB_Chase");
			unk_0x8003D3C0115A1035();
			while ((((((((((!unk_0x6252BC0DD8A320DB(joaat("jet")) || !unk_0x6252BC0DD8A320DB(joaat("s_m_y_airworker"))) || !unk_0x6252BC0DD8A320DB(joaat("shamal"))) || !unk_0x6252BC0DD8A320DB(joaat("s_m_y_cop_01"))) || !unk_0x6252BC0DD8A320DB(joaat("police3"))) || !unk_0x6252BC0DD8A320DB(joaat("cogcabrio"))) || !unk_0x6252BC0DD8A320DB(joaat("rapidgt"))) || !unk_0x6252BC0DD8A320DB(joaat("prop_jet_bloodsplat_01"))) || !unk_0x266D9DB5FCE4003B(68, "BB_Chase")) || !unk_0x266D9DB5FCE4003B(69, "BB_Chase")) || !unk_0x6F13318788EDDAD8())
			{
				wait(0);
			}
			func_128();
			if (func_23())
			{
				if (func_200())
				{
					func_146();
					while (!func_131())
					{
						wait(0);
					}
				}
				if (!unk_0xFC8BFE4B41177C22(iLocal_279))
				{
					if (func_200())
					{
						iLocal_279 = func_148(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						unk_0x11C125313CB8ADA2(iLocal_279, 1);
						unk_0x55098D9E9AD58806(func_199());
						unk_0x5FE0938FDE9B0958(iLocal_279, 1);
					}
					else
					{
						iLocal_279 = unk_0x5779387E956077A6(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1, 0);
						unk_0xD133EF7430EDCD09(iLocal_279, 112, 112);
						unk_0x11C125313CB8ADA2(iLocal_279, 1);
						unk_0x55098D9E9AD58806(joaat("rapidgt"));
						unk_0x5FE0938FDE9B0958(iLocal_279, 1);
					}
				}
			}
			else if (!unk_0xFC8BFE4B41177C22(iLocal_279))
			{
				iLocal_279 = unk_0x5779387E956077A6(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1, 0);
				unk_0xD133EF7430EDCD09(iLocal_279, 112, 112);
				unk_0x55098D9E9AD58806(joaat("rapidgt"));
				unk_0x11C125313CB8ADA2(iLocal_279, 1);
				unk_0x5FE0938FDE9B0958(iLocal_279, 1);
			}
			if (!unk_0xFC8BFE4B41177C22(iLocal_278))
			{
				iLocal_278 = unk_0x5779387E956077A6(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 1, 1, 0);
				unk_0xD133EF7430EDCD09(iLocal_278, 27, 27);
				unk_0x55098D9E9AD58806(joaat("cogcabrio"));
			}
			if (!unk_0xFC8BFE4B41177C22(iLocal_281))
			{
				iLocal_281 = unk_0x5779387E956077A6(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 1, 1, 0);
			}
			if (!unk_0xFC8BFE4B41177C22(iLocal_272))
			{
				iLocal_272 = unk_0xB1DBFEB95C0EFB88(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, 1);
				unk_0xB41DEC3AAC1AA107(iLocal_272, joaat("weapon_pistol"), 1000, 1, 1);
				func_130(iLocal_272, 0);
				unk_0x55098D9E9AD58806(joaat("s_m_y_cop_01"));
			}
			if (!unk_0xFC8BFE4B41177C22(iLocal_294))
			{
				iLocal_294 = unk_0x4E55EAB577C13329(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
				unk_0xCF39804E8C88080E(iLocal_294, 0f, 0f, -121.5948f, 2, 1);
				unk_0xF425E0B05426E088(iLocal_294, 0f, 0f, 0.8729f, -0.4879f);
				unk_0x55098D9E9AD58806(joaat("prop_jet_bloodsplat_01"));
			}
			if (!unk_0xFC8BFE4B41177C22(iLocal_284))
			{
				iLocal_284 = unk_0x5779387E956077A6(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1, 0);
				unk_0xA1C03303EC67320B(iLocal_284, 2);
				unk_0xF04751F8E604D487(iLocal_284, 0);
				unk_0x5D7CD709B34C90F0(iLocal_284, 1);
				unk_0xD0F1DB0E50B367AD(iLocal_284, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x55098D9E9AD58806(joaat("jet"));
				uLocal_672 = unk_0x62750FD2BDD8BD49("scr_trev4_747_engine_damage", iLocal_284, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1065353216, 0, 0, 0);
				unk_0xF88FC425EC7D675D(iLocal_284, 500);
			}
			if (!unk_0xFC8BFE4B41177C22(iLocal_266))
			{
				iLocal_266 = unk_0xB1DBFEB95C0EFB88(26, joaat("s_m_y_airworker"), -933.8942f, -2965.785f, 12.9451f, 331.7339f, 1, 1);
				func_17(&uLocal_490, 4, iLocal_266, "HangerWorker", 0, 1);
				unk_0x55098D9E9AD58806(joaat("s_m_y_airworker"));
				unk_0x3F58BFCF656F0DF1(iLocal_266, 1);
				unk_0xAAA71DD7E9059338(iLocal_266, 1);
				unk_0xD844F5E50DAB6FF7(iLocal_266, unk_0x4A8C381C258A124D(), 150f, -1, 0, 0);
				unk_0x44FB298D6382876D(iLocal_266, 1);
				unk_0xD0F1DB0E50B367AD(iLocal_266, 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0xF09E30AF1B8FB379(&iLocal_266);
			}
			if (func_127(0) == 0 || func_127(0) == joaat("weapon_unarmed"))
			{
				func_126(1);
			}
			break;
	}
}

void func_126(int iParam0)
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		iVar0 = unk_0xF3D409E30929BD33(unk_0x4A8C381C258A124D(), 0);
		if (iVar0 != joaat("weapon_unarmed"))
		{
			unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), iVar0, iParam0);
		}
	}
}

int func_127(int iParam0)
{
	if (Global_100718 > 0)
	{
		return Global_107196.f_21[iParam0];
	}
	return Global_104212.f_21[iParam0];
}

void func_128()
{
	if (iLocal_337 == 0)
	{
		if (!unk_0xFC8BFE4B41177C22(iLocal_286[0]))
		{
			iLocal_286[0] = unk_0x5779387E956077A6(joaat("police3"), -994.5278f, -2903.285f, 12.9447f, 158.7951f, 1, 1, 0);
			unk_0xC13B5C4CC421EA79(iLocal_286[0], 0);
		}
		if (!unk_0xFC8BFE4B41177C22(iLocal_268[0]))
		{
			iLocal_268[0] = unk_0xB1DBFEB95C0EFB88(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, 1);
			unk_0xB41DEC3AAC1AA107(iLocal_268[0], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xC652B7E19CE29859(iLocal_268[0], 20);
			unk_0x788F35D395511DFE(iLocal_268[0], 1, 1);
			unk_0x646DE293036A3499(iLocal_268[0], unk_0x4A8C381C258A124D(), -1, 1);
			func_130(iLocal_268[0], 0);
		}
		if (!unk_0xFC8BFE4B41177C22(iLocal_285))
		{
			iLocal_285 = unk_0x5779387E956077A6(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 1, 1, 0);
			unk_0x1DE99C193C7EC64B(iLocal_285, 1084227584);
			unk_0x55098D9E9AD58806(joaat("shamal"));
			unk_0xD25E9BDC14A0B649(iLocal_285, 2000, 0);
			unk_0xBFE60A5CC0C835D8(iLocal_285, 0, 0, 1);
		}
		if (!unk_0xFC8BFE4B41177C22(iLocal_268[6]))
		{
			iLocal_268[6] = unk_0x8728A378EF2B46B2(iLocal_286[0], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
			unk_0xB41DEC3AAC1AA107(iLocal_268[6], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xC652B7E19CE29859(iLocal_268[6], 20);
			unk_0x788F35D395511DFE(iLocal_268[6], 1, 1);
			unk_0xAAA71DD7E9059338(iLocal_268[6], 1);
			func_130(iLocal_268[6], 0);
		}
		if (!unk_0xFC8BFE4B41177C22(iLocal_268[7]))
		{
			iLocal_268[7] = unk_0x8728A378EF2B46B2(iLocal_286[0], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			unk_0xB41DEC3AAC1AA107(iLocal_268[7], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xC652B7E19CE29859(iLocal_268[7], 20);
			unk_0x788F35D395511DFE(iLocal_268[7], 1, 1);
			unk_0xAAA71DD7E9059338(iLocal_268[7], 1);
			func_130(iLocal_268[7], 0);
		}
		if (!unk_0xFC8BFE4B41177C22(iLocal_286[1]))
		{
			iLocal_286[1] = unk_0x5779387E956077A6(joaat("police3"), -962.2432f, -2864.16f, 12.9447f, 149.5586f, 1, 1, 0);
			unk_0xC13B5C4CC421EA79(iLocal_286[1], 0);
		}
		if (!unk_0xFC8BFE4B41177C22(iLocal_268[8]))
		{
			iLocal_268[8] = unk_0x8728A378EF2B46B2(iLocal_286[1], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
			unk_0xB41DEC3AAC1AA107(iLocal_268[8], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xC652B7E19CE29859(iLocal_268[8], 20);
			unk_0x788F35D395511DFE(iLocal_268[8], 1, 1);
			unk_0xAAA71DD7E9059338(iLocal_268[8], 1);
			func_130(iLocal_268[8], 0);
		}
		if (!unk_0xFC8BFE4B41177C22(iLocal_268[9]))
		{
			iLocal_268[9] = unk_0x8728A378EF2B46B2(iLocal_286[1], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			unk_0xB41DEC3AAC1AA107(iLocal_268[9], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xC652B7E19CE29859(iLocal_268[9], 20);
			unk_0x788F35D395511DFE(iLocal_268[9], 1, 1);
			unk_0xAAA71DD7E9059338(iLocal_268[9], 1);
			func_130(iLocal_268[9], 0);
		}
		if (!unk_0xFC8BFE4B41177C22(iLocal_268[10]))
		{
			iLocal_268[10] = unk_0xB1DBFEB95C0EFB88(6, joaat("s_m_y_cop_01"), -922.1185f, -2939.595f, 12.9451f, 156.1408f, 1, 1);
			unk_0xB41DEC3AAC1AA107(iLocal_268[10], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xC652B7E19CE29859(iLocal_268[10], 20);
			unk_0x788F35D395511DFE(iLocal_268[10], 1, 1);
			unk_0xAAA71DD7E9059338(iLocal_268[10], 1);
			func_130(iLocal_268[10], 0);
			unk_0xD0B00571D4BDDC97(iLocal_268[10], 1);
		}
		iLocal_337 = 1;
	}
}

void func_129(bool bParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_32323, bParam0);
	StringCopy(&(Global_32324[bParam0 /*6*/]), unk_0x1AF90EB93E0012D6(), 24);
	Global_32379[bParam0] = iParam1;
}

void func_130(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_63392[iVar0 /*2*/] != 0)
			{
				if (Global_63392[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_63391)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_63392[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_63392[iVar1 /*2*/] = iParam0;
	Global_63392[iVar1 /*2*/].f_1 = 7;
	Global_63391++;
}

bool func_131()
{
	return func_132(&(Global_107196.f_2890));
}

int func_132(var uParam0)
{
	if (func_133(uParam0))
	{
		if (unk_0x6252BC0DD8A320DB(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_133(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_135(uParam0->f_12.f_66, 0, -1))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_134(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

int func_134(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
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

int func_135(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xAD1840C2E6AF7D5E(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x76CD105BCAC6EB9F()) || (iParam0 == joaat("buffalo3") && !unk_0x76CD105BCAC6EB9F())) || (iParam0 == joaat("gauntlet2") && !unk_0x76CD105BCAC6EB9F())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x76CD105BCAC6EB9F()))
	{
		if (!func_145())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x62B04373BFAD9B85())
		{
			if (unk_0x92EAC7DBD5D1D750(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x4BFA043D318BF9AE(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_144() && !func_143()) && !func_142()) && !func_141()) && !func_145())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_140() || unk_0x761778199FE1211C()) || func_139())
		{
		}
		else if (!func_142())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_138(iParam0, iParam2))
		{
			return 0;
		}
	}
	if (!func_136(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_136(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_137())
	{
		return 1;
	}
	unk_0x8A77EAFEB55D476D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xABE86AEC64720F91(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_137()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

int func_138(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if ((!Global_2764244 && iParam1 >= 0) && iParam1 <= 415)
	{
		if (BitTest(Global_1586468[iParam1 /*142*/].f_103, 2))
		{
			return 1;
		}
	}
	if (Global_2764243)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x39D1D336459711BE();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7059 && !Global_262145.f_13397) && iVar1 < Global_262145.f_13398)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14737 && iVar1 < Global_262145.f_14749)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14733 && iVar1 < Global_262145.f_14745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14734 && iVar1 < Global_262145.f_14746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14735 && iVar1 < Global_262145.f_14747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14736 && iVar1 < Global_262145.f_14748)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14738 && iVar1 < Global_262145.f_14750)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14739 && iVar1 < Global_262145.f_14742)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14740 && iVar1 < Global_262145.f_14743)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14741 && iVar1 < Global_262145.f_14744)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17313 && iVar1 < Global_262145.f_17278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17308 && iVar1 < Global_262145.f_17273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17312 && iVar1 < Global_262145.f_17277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17311 && iVar1 < Global_262145.f_17276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17305 && iVar1 < Global_262145.f_17270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17306 && iVar1 < Global_262145.f_17271)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17309 && iVar1 < Global_262145.f_17274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17310 && iVar1 < Global_262145.f_17275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17307 && iVar1 < Global_262145.f_17272)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17315 && iVar1 < Global_262145.f_17280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17316 && iVar1 < Global_262145.f_17281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17304 && iVar1 < Global_262145.f_17269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17303 && iVar1 < Global_262145.f_17268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17302 && iVar1 < Global_262145.f_17267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17314 && iVar1 < Global_262145.f_17279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17317 && iVar1 < Global_262145.f_17282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17318 && iVar1 < Global_262145.f_17283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17319 && iVar1 < Global_262145.f_17284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17320 && iVar1 < Global_262145.f_17285)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17474 && iVar1 < Global_262145.f_17496)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17475 && iVar1 < Global_262145.f_17497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17476 && iVar1 < Global_262145.f_17498)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17477 && iVar1 < Global_262145.f_17499)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17478 && iVar1 < Global_262145.f_17500)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17479 && iVar1 < Global_262145.f_17501)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17481 && iVar1 < Global_262145.f_17502)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17482 && iVar1 < Global_262145.f_17503)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17483 && iVar1 < Global_262145.f_17504)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17484 && iVar1 < Global_262145.f_17505)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17485 && iVar1 < Global_262145.f_17506)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17486 && iVar1 < Global_262145.f_17507)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17487 && iVar1 < Global_262145.f_17508)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17493 && iVar1 < Global_262145.f_17515)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17490 && iVar1 < Global_262145.f_17511)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17491 && iVar1 < Global_262145.f_17512)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17492 && iVar1 < Global_262145.f_17513)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17480 && iVar1 < Global_262145.f_17514)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17494 && iVar1 < Global_262145.f_17516)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17488 && iVar1 < Global_262145.f_17509)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17489 && iVar1 < Global_262145.f_17510)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17495 && iVar1 < Global_262145.f_17517)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19131 && iVar1 < Global_262145.f_19228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19132 && iVar1 < Global_262145.f_19229)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19133 && iVar1 < Global_262145.f_19230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19134 && iVar1 < Global_262145.f_19231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19135 && iVar1 < Global_262145.f_19232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19136 && iVar1 < Global_262145.f_19233)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19137 && iVar1 < Global_262145.f_19234)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19138 && iVar1 < Global_262145.f_19235)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19139 && iVar1 < Global_262145.f_19236)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19140 && iVar1 < Global_262145.f_19237)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19141 && iVar1 < Global_262145.f_19238)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19142 && iVar1 < Global_262145.f_19239)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19143 && iVar1 < Global_262145.f_19240)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19144 && iVar1 < Global_262145.f_19241)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19145 && iVar1 < Global_262145.f_19242)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19146 && iVar1 < Global_262145.f_19243)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19147 && iVar1 < Global_262145.f_19244)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19148 && iVar1 < Global_262145.f_19245)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19149 && iVar1 < Global_262145.f_19246)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19150 && iVar1 < Global_262145.f_19247)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19151 && iVar1 < Global_262145.f_19248)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19152 && iVar1 < Global_262145.f_19249)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19153 && iVar1 < Global_262145.f_19250)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19154 && iVar1 < Global_262145.f_19251)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19155 && iVar1 < Global_262145.f_19252)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20212 && iVar1 < Global_262145.f_20208)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20213 && iVar1 < Global_262145.f_20209)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20214 && iVar1 < Global_262145.f_20210)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20215 && iVar1 < Global_262145.f_20211)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21094 && iVar1 < Global_262145.f_21102)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21095 && iVar1 < Global_262145.f_21103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21096 && iVar1 < Global_262145.f_21104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21097 && iVar1 < Global_262145.f_21105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21098 && iVar1 < Global_262145.f_21106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21099 && iVar1 < Global_262145.f_21107)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21893 && iVar1 < Global_262145.f_21913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21905 && iVar1 < Global_262145.f_21925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21896 && iVar1 < Global_262145.f_21916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21906 && iVar1 < Global_262145.f_21926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21894 && iVar1 < Global_262145.f_21914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21910 && iVar1 < Global_262145.f_21930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21908 && iVar1 < Global_262145.f_21928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21909 && iVar1 < Global_262145.f_21929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21904 && iVar1 < Global_262145.f_21924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21911 && iVar1 < Global_262145.f_21931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21907 && iVar1 < Global_262145.f_21927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21903 && iVar1 < Global_262145.f_21923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21895 && iVar1 < Global_262145.f_21915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21897 && iVar1 < Global_262145.f_21917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21898 && iVar1 < Global_262145.f_21918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21899 && iVar1 < Global_262145.f_21919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21900 && iVar1 < Global_262145.f_21920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21901 && iVar1 < Global_262145.f_21921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21902 && iVar1 < Global_262145.f_21922)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22861 && iVar1 < Global_262145.f_22889)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22862 && iVar1 < Global_262145.f_22890)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22863 && iVar1 < Global_262145.f_22891)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22864 && iVar1 < Global_262145.f_22892)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22865 && iVar1 < Global_262145.f_22893)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22866 && iVar1 < Global_262145.f_22894)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22867 && iVar1 < Global_262145.f_22895)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22868 && iVar1 < Global_262145.f_22896)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22869 && iVar1 < Global_262145.f_22897)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22870 && iVar1 < Global_262145.f_22898)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22871 && iVar1 < Global_262145.f_22899)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22872 && iVar1 < Global_262145.f_22900)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22873 && iVar1 < Global_262145.f_22901)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22874 && iVar1 < Global_262145.f_22902)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22875 && iVar1 < Global_262145.f_22903)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22876 && iVar1 < Global_262145.f_22904)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22877 && iVar1 < Global_262145.f_22905)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22878 && iVar1 < Global_262145.f_22906)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22879 && iVar1 < Global_262145.f_22907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22880 && iVar1 < Global_262145.f_22908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22881 && iVar1 < Global_262145.f_22909)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22882 && iVar1 < Global_262145.f_22910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22883 && iVar1 < Global_262145.f_22911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22884 && iVar1 < Global_262145.f_22912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22885 && iVar1 < Global_262145.f_22913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22886 && iVar1 < Global_262145.f_22914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22887 && iVar1 < Global_262145.f_22915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22888 && iVar1 < Global_262145.f_22916)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24081 && iVar1 < Global_262145.f_24097)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24082 && iVar1 < Global_262145.f_24098)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24086 && iVar1 < Global_262145.f_24102)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24089 && iVar1 < Global_262145.f_24105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24094 && iVar1 < Global_262145.f_24110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24088 && iVar1 < Global_262145.f_24104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24080 && iVar1 < Global_262145.f_24096)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24087 && iVar1 < Global_262145.f_24103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24093 && iVar1 < Global_262145.f_24109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24092 && iVar1 < Global_262145.f_24108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24083 && iVar1 < Global_262145.f_24099)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24085 && iVar1 < Global_262145.f_24101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24095 && iVar1 < Global_262145.f_24111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24091 && iVar1 < Global_262145.f_24107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24084 && iVar1 < Global_262145.f_24100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24090 && iVar1 < Global_262145.f_24106)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24171 && iVar1 < Global_262145.f_24158)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24172 && iVar1 < Global_262145.f_24159)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24177 && iVar1 < Global_262145.f_24164)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24176 && iVar1 < Global_262145.f_24163)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24174 && iVar1 < Global_262145.f_24161)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24180 && iVar1 < Global_262145.f_24167)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24182 && iVar1 < Global_262145.f_24169)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24183 && iVar1 < Global_262145.f_24170)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24181 && iVar1 < Global_262145.f_24168)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24173 && iVar1 < Global_262145.f_24160)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24175 && iVar1 < Global_262145.f_24162)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24179 && iVar1 < Global_262145.f_24166)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24178 && iVar1 < Global_262145.f_24165)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26768 && iVar1 < Global_262145.f_26770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25781 && iVar1 < Global_262145.f_25774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25782 && iVar1 < Global_262145.f_25775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25783 && iVar1 < Global_262145.f_25776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25784 && iVar1 < Global_262145.f_25777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26769 && iVar1 < Global_262145.f_26771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25785 && iVar1 < Global_262145.f_25778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25786 && iVar1 < Global_262145.f_25779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25787 && iVar1 < Global_262145.f_25780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25792 && iVar1 < Global_262145.f_25813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25793 && iVar1 < Global_262145.f_25814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25794 && iVar1 < Global_262145.f_25815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25795 && iVar1 < Global_262145.f_25816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25796 && iVar1 < Global_262145.f_25817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25797 && iVar1 < Global_262145.f_25818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25798 && iVar1 < Global_262145.f_25819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25799 && iVar1 < Global_262145.f_25820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25800 && iVar1 < Global_262145.f_25821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25801 && iVar1 < Global_262145.f_25822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25802 && iVar1 < Global_262145.f_25823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25803 && iVar1 < Global_262145.f_25824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25804 && iVar1 < Global_262145.f_25825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25805 && iVar1 < Global_262145.f_25826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25806 && iVar1 < Global_262145.f_25827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25807 && iVar1 < Global_262145.f_25828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25808 && iVar1 < Global_262145.f_25829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25809 && iVar1 < Global_262145.f_25830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25810 && iVar1 < Global_262145.f_25831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25811 && iVar1 < Global_262145.f_25832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25812 && iVar1 < Global_262145.f_25833)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28613 && iVar1 < Global_262145.f_28634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28614 && iVar1 < Global_262145.f_28635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28615 && iVar1 < Global_262145.f_28636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28616 && iVar1 < Global_262145.f_28637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28617 && iVar1 < Global_262145.f_28638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28618 && iVar1 < Global_262145.f_28639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28619 && iVar1 < Global_262145.f_28640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28620 && iVar1 < Global_262145.f_28641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28621 && iVar1 < Global_262145.f_28642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28622 && iVar1 < Global_262145.f_28643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28623 && iVar1 < Global_262145.f_28644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28624 && iVar1 < Global_262145.f_28645)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28625 && iVar1 < Global_262145.f_28646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28626 && iVar1 < Global_262145.f_28647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28627 && iVar1 < Global_262145.f_28648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28628 && iVar1 < Global_262145.f_28649)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28629 && iVar1 < Global_262145.f_28650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28630 && iVar1 < Global_262145.f_28651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28631 && iVar1 < Global_262145.f_28652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28632 && iVar1 < Global_262145.f_28653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28633 && iVar1 < Global_262145.f_28654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28656 && iVar1 < Global_262145.f_28657) && !Global_262145.f_28611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28659 && iVar1 < Global_262145.f_28660) && !Global_262145.f_28612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28664 && iVar1 < Global_262145.f_28667)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28665 && iVar1 < Global_262145.f_28668)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28666 && iVar1 < Global_262145.f_28669)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29682 && iVar1 < Global_262145.f_29347)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29333 && iVar1 < Global_262145.f_29354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29334 && iVar1 < Global_262145.f_29340)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29680 && iVar1 < Global_262145.f_29348)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29681 && iVar1 < Global_262145.f_29349)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29327 && iVar1 < Global_262145.f_29346)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29328 && iVar1 < Global_262145.f_29355)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29329 && iVar1 < Global_262145.f_29345)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29330 && iVar1 < Global_262145.f_29343)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29676 && iVar1 < Global_262145.f_29350)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29677 && iVar1 < Global_262145.f_29351)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29678 && iVar1 < Global_262145.f_29352)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29679 && iVar1 < Global_262145.f_29353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29331 && iVar1 < Global_262145.f_29342)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29332 && iVar1 < Global_262145.f_29344)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30141 && iVar1 < Global_262145.f_30124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30142 && iVar1 < Global_262145.f_30125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30143 && iVar1 < Global_262145.f_30126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30144 && iVar1 < Global_262145.f_30127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30145 && iVar1 < Global_262145.f_30128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30146 && iVar1 < Global_262145.f_30129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30147 && iVar1 < Global_262145.f_30130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30148 && iVar1 < Global_262145.f_30131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30149 && iVar1 < Global_262145.f_30132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30158)
		{
		}
		else if (!Global_262145.f_30150 && iVar1 < Global_262145.f_30133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30151 && iVar1 < Global_262145.f_30134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30152 && iVar1 < Global_262145.f_30135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30153 && iVar1 < Global_262145.f_30136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30154 && iVar1 < Global_262145.f_30137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30159)
		{
		}
		else if (!Global_262145.f_30155 && iVar1 < Global_262145.f_30138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30156 && iVar1 < Global_262145.f_30139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30157 && iVar1 < Global_262145.f_30140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_31009 && iVar1 < Global_262145.f_30992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_31010 && iVar1 < Global_262145.f_30993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_31011 && iVar1 < Global_262145.f_30994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31012 && iVar1 < Global_262145.f_30995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31013 && iVar1 < Global_262145.f_30996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31014 && iVar1 < Global_262145.f_30997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31015 && iVar1 < Global_262145.f_30998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31016 && iVar1 < Global_262145.f_30999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31017 && iVar1 < Global_262145.f_31000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31018 && iVar1 < Global_262145.f_31001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31019 && iVar1 < Global_262145.f_31002)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31020 && iVar1 < Global_262145.f_31003)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31021 && iVar1 < Global_262145.f_31004)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31022 && iVar1 < Global_262145.f_31005)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31023 && iVar1 < Global_262145.f_31006)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31024 && iVar1 < Global_262145.f_31007)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31025 && iVar1 < Global_262145.f_31008)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31889 && iVar1 < Global_262145.f_31874)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31890 && iVar1 < Global_262145.f_31875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31891 && iVar1 < Global_262145.f_31876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31892 && iVar1 < Global_262145.f_31877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31893 && iVar1 < Global_262145.f_31878)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31894 && iVar1 < Global_262145.f_31879)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31895 && iVar1 < Global_262145.f_31880)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31896 && iVar1 < Global_262145.f_31881)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31897 && iVar1 < Global_262145.f_31882)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31898 && iVar1 < Global_262145.f_31883)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31899 && iVar1 < Global_262145.f_31884)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31900 && iVar1 < Global_262145.f_31885)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31901 && iVar1 < Global_262145.f_31886)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31902 && iVar1 < Global_262145.f_31887)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31967)
		{
		}
		else if (!Global_262145.f_31903 && iVar1 < Global_262145.f_31888)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso3"))
	{
		if (!Global_262145.f_33131 && iVar1 < Global_262145.f_33112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("corsita"))
	{
		if (!Global_262145.f_33125 && iVar1 < Global_262145.f_33106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("draugur"))
	{
		if (!Global_262145.f_33129 && iVar1 < Global_262145.f_33110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("greenwood"))
	{
		if (!Global_262145.f_33123 && iVar1 < Global_262145.f_33104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjosj"))
	{
		if (!Global_262145.f_33134 && iVar1 < Global_262145.f_33115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lm87"))
	{
		if (!Global_262145.f_33126 && iVar1 < Global_262145.f_33107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("postlude"))
	{
		if (!Global_262145.f_33135 && iVar1 < Global_262145.f_33116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rhinehart"))
	{
		if (!Global_262145.f_33137 && iVar1 < Global_262145.f_33118)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sm722"))
	{
		if (!Global_262145.f_33128 && iVar1 < Global_262145.f_33109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf"))
	{
		if (!Global_262145.f_33136 && iVar1 < Global_262145.f_33117)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf2"))
	{
		if (!Global_262145.f_33139 && iVar1 < Global_262145.f_33120)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero2"))
	{
		if (!Global_262145.f_33124 && iVar1 < Global_262145.f_33105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero2"))
	{
		if (!Global_262145.f_33132 && iVar1 < Global_262145.f_33113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil2"))
	{
		if (!Global_262145.f_33138 && iVar1 < Global_262145.f_33119)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner4"))
	{
		if (!Global_262145.f_33130 && iVar1 < Global_262145.f_33111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel4"))
	{
		if (!Global_262145.f_33140 && iVar1 < Global_262145.f_33121)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("conada"))
	{
		if (!Global_262145.f_33127 && iVar1 < Global_262145.f_33108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnisegt"))
	{
		if (!Global_262145.f_33122 && iVar1 < Global_262145.f_33103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez3"))
	{
		if (!Global_262145.f_33962 && iVar1 < Global_262145.f_33946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brickade2"))
	{
		if (!Global_262145.f_33962 && iVar1 < Global_262145.f_33946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("eudora"))
	{
		if (!Global_262145.f_33971 && iVar1 < Global_262145.f_33954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("powersurge"))
	{
		if (!Global_262145.f_33965 && iVar1 < Global_262145.f_33949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("journey2"))
	{
		if (!Global_262145.f_33959 && iVar1 < Global_262145.f_33943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surfer3"))
	{
		if (!Global_262145.f_33960 && iVar1 < Global_262145.f_33944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity3"))
	{
		if (!Global_262145.f_33957 && iVar1 < Global_262145.f_33941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("panthere"))
	{
		if (!Global_262145.f_33968 && iVar1 < Global_262145.f_33952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boor"))
	{
		if (!Global_262145.f_33972 && iVar1 < Global_262145.f_33956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon2"))
	{
		if (!Global_262145.f_33969 && iVar1 < Global_262145.f_33953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip2"))
	{
		if (!Global_262145.f_33958 && iVar1 < Global_262145.f_33942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("r300"))
	{
		if (!Global_262145.f_33961 && iVar1 < Global_262145.f_33945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virtue"))
	{
		if (!Global_262145.f_33970 && iVar1 < Global_262145.f_33955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi8"))
	{
		if (!Global_262145.f_33966 && iVar1 < Global_262145.f_33950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("broadway"))
	{
		if (!Global_262145.f_33967 && iVar1 < Global_262145.f_33951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tahoma"))
	{
		if (!Global_262145.f_33964 && iVar1 < Global_262145.f_33948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taxi"))
	{
		if (!Global_262145.f_33963 && iVar1 < Global_262145.f_33947)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

var func_139()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_140()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

int func_141()
{
	return 0;
}

int func_142()
{
	return 1;
}

int func_143()
{
	return 1;
}

int func_144()
{
	if (unk_0x087611B922B50F13(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_145()
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
					uVar0 = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, false);
					unk_0xED11291F7127888E(uVar0);
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

void func_146()
{
	func_147(&(Global_107196.f_2890));
}

void func_147(var uParam0)
{
	if (func_133(uParam0))
	{
		unk_0xEC9DAA34BBB4658C(uParam0->f_12.f_66);
	}
}

int func_148(struct<3> Param0, float fParam1)
{
	return func_149(&(Global_107196.f_2890), Param0, fParam1, 0);
}

int func_149(var uParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_133(uParam0))
	{
		if (func_71(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x26715B0ED6702C87(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (func_132(uParam0))
		{
			unk_0x2094BC4B6731BA68(Param1, 5f, 1, 0, 0, 0);
			func_198(Param1, 5f, 0);
			iVar0 = unk_0x5779387E956077A6(uParam0->f_12.f_66, Param1, fParam2, 1, 1, 0);
			if (unk_0xFC8BFE4B41177C22(iVar0))
			{
				Var1 = { unk_0xD1A6A821F5AC81DB(iVar0, 1) };
				if (vdist2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x62C438C53BB57AFD(iVar0, Param1, 0, 0, 1);
				}
				func_170(iVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (unk_0xEA4F815FDC353FEF(uParam0->f_12.f_66) || unk_0xA71279EFEE0ACEB2(uParam0->f_12.f_66))
				{
					if (!unk_0x1EF8801C2AC1FE34(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					unk_0x1DE99C193C7EC64B(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (unk_0xD3CE8D1E6564B011(unk_0x4B423FAA24E8ABF0(iVar0)))
						{
							func_169(uParam0->f_11, 1);
						}
						else if (unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(iVar0)))
						{
							func_169(uParam0->f_11, 2);
						}
					}
					unk_0x9BC299A7D57D7CAA(iVar0, 0);
					unk_0xC13B5C4CC421EA79(iVar0, 0);
					unk_0x5FE0938FDE9B0958(iVar0, 1);
					func_168(iVar0, uParam0->f_11);
				}
				else if ((!func_166(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x1B79E937E91F40C3(unk_0x1AF90EB93E0012D6(), "startup_positioning"))
				{
					iVar4 = func_165(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_160(iVar4);
					}
				}
				if (((Global_100681 != 13 && Global_100681 != 10) && Global_100681 != 11) && Global_100681 != 12)
				{
					if (unk_0x70E57E9927B6BA58(&(Global_100681.f_3)) == Global_78336)
					{
						if (uParam0->f_12.f_66 == Global_113648.f_32751.f_69[21 /*78*/].f_66)
						{
							func_157(24, 0);
							func_160(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_150(iVar0, uParam0->f_11);
				}
				unk_0x55098D9E9AD58806(uParam0->f_12.f_66);
				Var1 = { unk_0xD1A6A821F5AC81DB(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_150(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_151(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0);
		if (!unk_0xFC8BFE4B41177C22(iVar0))
		{
			iVar0 = unk_0x6B854773972E76E4(iParam0, -1);
		}
		if (unk_0xFC8BFE4B41177C22(iVar0) && !unk_0x4FAFF4BCB7633475(iVar0))
		{
			if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113648.f_2365.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x4B423FAA24E8ABF0(iParam0) == Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xD6F9DEE4765092A9(&(Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x1B79E937E91F40C3(unk_0xCA7159F2C5FF745A(iParam0), &(Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113648.f_32751.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x4B423FAA24E8ABF0(iParam0) == Global_113648.f_32751.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xD6F9DEE4765092A9(&(Global_113648.f_32751.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x1B79E937E91F40C3(unk_0xCA7159F2C5FF745A(iParam0), &(Global_113648.f_32751.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113648.f_32751.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113648.f_32751.f_5590 = iParam1;
	Global_78253 = iParam0;
	Global_113648.f_32751.f_5588 = 1;
	func_39(iParam0, &(Global_113648.f_32751.f_5510));
}

int func_151(int iParam0)
{
	if ((((((((((!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0)) || func_45(iParam0, 0, 0)) || func_45(iParam0, 1, 0)) || func_45(iParam0, 2, 0)) || func_34(iParam0) != 145) || func_156(iParam0)) || func_155(iParam0)) || func_154(iParam0)) || func_153(iParam0)) || !func_152(unk_0x4B423FAA24E8ABF0(iParam0)))
	{
		if (func_155(iParam0))
		{
		}
		if (func_155(iParam0))
		{
		}
		if (func_45(iParam0, 0, 0))
		{
		}
		if (func_45(iParam0, 1, 0))
		{
		}
		if (func_45(iParam0, 2, 0))
		{
		}
		if (func_34(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_152(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_135(iParam0, 0, -1))
	{
		return 0;
	}
	if (((unk_0xEA4F815FDC353FEF(iParam0) || unk_0x00C6FDED3EB75117(iParam0)) || unk_0xBA16CD57E37AC32A(iParam0)) || unk_0xAE447CBB33B40CA3(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_153(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	sVar1 = unk_0xCA7159F2C5FF745A(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x1B79E937E91F40C3(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_135(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0)
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

int func_155(int iParam0)
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

int func_156(int iParam0)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(Global_77348.f_484[24]))
	{
		if (iParam0 == Global_77348.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xFC8BFE4B41177C22(Global_77348.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_77348.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_157(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_159(iParam0, 0))
		{
			func_158(iParam0, 1, 0);
			func_158(iParam0, 2, 0);
			func_158(iParam0, 3, 0);
			func_158(iParam0, 4, 0);
			func_158(iParam0, 0, 1);
			Global_77348[iParam0] = 1;
		}
	}
	else
	{
		func_158(iParam0, 0, 0);
	}
}

void func_158(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_32751[iParam0]), bParam1);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_113648.f_32751[iParam0]), bParam1);
	}
}

int func_159(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113648.f_32751[iParam0], iParam1);
}

void func_160(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_164(&(Global_77348.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xFC8BFE4B41177C22(Global_77348.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xD9F5E1FEFD1329E4(Global_77348.f_139[iParam0], 0))
				{
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Global_77348.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xEE0BCDB1B5E36BCB(Global_77348.f_139[iParam0], 1, 1);
				unk_0x8C1F7D7A31B2A38E(&(Global_77348.f_139[iParam0]));
			}
		}
		Global_77348[iParam0] = 1;
		if (BitTest(Global_77348.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_159(iParam0, 0)) && Global_78257.f_66 == 0) && Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] != 0) && Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] > 3) && (!func_162(0, Global_77348.f_555[0 /*21*/].f_12) || !func_162(1, Global_77348.f_555[0 /*21*/].f_12)))
			{
				func_161(&(Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/]), &Global_78257);
				Global_78335 = Global_113648.f_32751.f_5591;
			}
			func_157(iParam0, 0);
		}
	}
}

void func_161(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_162(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_163(&(Global_113648.f_32751.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_135(Global_113648.f_32751.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0, -1);
}

int func_163(var uParam0)
{
	return *uParam0;
}

int func_164(var uParam0, int iParam1)
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
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_36(2, 1);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
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
			if (func_145())
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), true);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_145())
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), true);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
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
		if (!func_71(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_71(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_71(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_165(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0xFC8BFE4B41177C22(Global_77348.f_484[iVar0]) && !unk_0x1C2F771CDC87A3A5(Global_77348.f_484[iVar0], 0)) && unk_0xD9F5E1FEFD1329E4(Global_77348.f_484[iVar0], 0))
		{
			unk_0xFF4B16F297D9CB3E(iParam0, &iVar1, &iVar2);
			unk_0xFF4B16F297D9CB3E(Global_77348.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x4B423FAA24E8ABF0(iParam0) == unk_0x4B423FAA24E8ABF0(Global_77348.f_484[iVar0]) && unk_0xA089B04A208DBD0B(iParam0) == unk_0xA089B04A208DBD0B(Global_77348.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_166(int iParam0, struct<3> Param1, bool bParam2)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_167(iParam0, Global_77348.f_139[38], 0))
			{
				func_160(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_167(iParam0, Global_77348.f_139[43], 1))
			{
				func_160(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0xD65B4E942A960E26(unk_0x4A8C381C258A124D(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_167(iParam0, uVar1[iVar3], 1) && func_134(unk_0xD1A6A821F5AC81DB(uVar1[iVar3], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam2 || func_71(Param1, 0f, 0f, 0f, 0)) || unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(iParam0, 1), unk_0xD1A6A821F5AC81DB(uVar1[iVar3], 1), 1) < 10f)
					{
						unk_0x8C1F7D7A31B2A38E(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0xFC8BFE4B41177C22(Global_77348.f_484[14]) && unk_0xD9F5E1FEFD1329E4(iParam0, 0)) && unk_0xD9F5E1FEFD1329E4(Global_77348.f_484[14], 0))
			{
				if (unk_0x4B423FAA24E8ABF0(Global_77348.f_484[14]) == joaat("luxor2") && unk_0xA089B04A208DBD0B(iParam0) == unk_0xA089B04A208DBD0B(Global_77348.f_484[14]))
				{
					func_160(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0xFC8BFE4B41177C22(Global_77348.f_484[20]) && unk_0xD9F5E1FEFD1329E4(iParam0, 0)) && unk_0xD9F5E1FEFD1329E4(Global_77348.f_484[20], 0))
			{
				if (unk_0x4B423FAA24E8ABF0(Global_77348.f_484[20]) == joaat("swift2") && unk_0xA089B04A208DBD0B(iParam0) == unk_0xA089B04A208DBD0B(Global_77348.f_484[20]))
				{
					func_160(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_167(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0xFC8BFE4B41177C22(iParam1) && !unk_0x1C2F771CDC87A3A5(iParam1, 0)) && unk_0xD9F5E1FEFD1329E4(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0xFF4B16F297D9CB3E(iParam0, &iVar0, &iVar1);
			unk_0xFF4B16F297D9CB3E(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_168(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xFC8BFE4B41177C22(Global_98012[iVar0]))
		{
			Global_98012[iVar0] = iParam0;
			Global_98022[iVar0] = iParam1;
			Global_98032[iVar0] = unk_0x4B423FAA24E8ABF0(iParam0);
			if (unk_0xD3CE8D1E6564B011(Global_98032[iVar0]))
			{
				Global_98060[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_98060[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_169(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98012[iVar0]))
		{
			if (iParam0 == 145 || Global_98022[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x4B423FAA24E8ABF0(Global_98012[iVar0]) == func_36(iParam0, iParam1))
				{
					if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Global_98012[iVar0], 0))
					{
						unk_0xEE0BCDB1B5E36BCB(Global_98012[iVar0], 0, 1);
						unk_0x8C1F7D7A31B2A38E(&(Global_98012[iVar0]));
						Global_98022[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_170(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_190(iParam0))
		{
			if (unk_0x70E57E9927B6BA58(&(uParam1->f_1)) != 0)
			{
				unk_0x3FEAE59CDE6D3946(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0x20DE4C1439E0FC92())
			{
				unk_0x05D3F682DDA06C20(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, func_40(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_40(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_40(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_40(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_40(iVar2)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_40(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_40(iVar3)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_40(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, func_40(iVar4)))
					{
					}
					else
					{
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_40(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("surfer3"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_40(iVar5)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_40(iVar5));
				}
				iVar5++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_40(4)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_40(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (unk_0x94C9CD3D66808551(iParam0, 10) != 0)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), false);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_40(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar6 = 1;
			while (iVar6 <= 2)
			{
				if (BitTest(uParam1->f_77, func_40(iVar6)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_40(iVar6));
				}
				iVar6++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0xE0ACB5BC9D603F02(iParam0, 0);
			if (unk_0x94C9CD3D66808551(iParam0, 5) != -1)
			{
				unk_0xE0ACB5BC9D603F02(iParam0, 1);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			unk_0x84F5FD9CD27457EE(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x963D9A7202C06F65(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			unk_0x593A3115B8AE759B(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x588D8FDC61F7CFAD(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_188(uParam1->f_5) || func_188(uParam1->f_6))
			{
			}
			else
			{
				unk_0xD133EF7430EDCD09(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xBB361D7264AC4FD8(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || func_187(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_186())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0x5DA0536AEAD1FF31(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_42(uParam1->f_66))
		{
			unk_0xFE620ED8E0A3C209(iParam0, 0);
		}
		else
		{
			unk_0xFE620ED8E0A3C209(iParam0, 0);
			unk_0xFE620ED8E0A3C209(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			unk_0x439C904840715871(iParam0, 0);
			unk_0x519F76A38952BBD0(iParam0, 0);
		}
		if (bParam2)
		{
			unk_0x0B74F181ADFC39BF(iParam0, uParam1->f_70);
		}
		unk_0xEAB8A43F6621850F(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xE62930EC6FAABCA5(iParam0, 2, BitTest(uParam1->f_77, 28));
		unk_0xE62930EC6FAABCA5(iParam0, 3, BitTest(uParam1->f_77, 29));
		unk_0xE62930EC6FAABCA5(iParam0, 0, BitTest(uParam1->f_77, 30));
		unk_0xE62930EC6FAABCA5(iParam0, 1, BitTest(uParam1->f_77, 31));
		unk_0xD37CA6D6F8993BB9(iParam0, BitTest(uParam1->f_77, 10));
		if (unk_0xBA3ECE95D3094B0F(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xA1C03303EC67320B(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(iParam0)))
			{
				if (unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_185(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_185(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x7943BD10E2A03FAC(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0xD6B15DF382A594C7(iParam0, 1);
			}
			else
			{
				unk_0x232B023FE4D977E2(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_177(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xBA16CD57E37AC32A(uParam1->f_66) && !unk_0xEA4F815FDC353FEF(uParam1->f_66))
		{
			iVar7 = 0;
			while (iVar7 <= 11)
			{
				if (BitTest(uParam1->f_77, func_40(iVar7 + 1)))
				{
					if (!unk_0x5318DF85BEB6B95F(iParam0, iVar7 + 1))
					{
						unk_0xD772F6AA66750D2B(iParam0, iVar7 + 1, 0);
					}
				}
				else if (unk_0x5318DF85BEB6B95F(iParam0, iVar7 + 1))
				{
					unk_0xD772F6AA66750D2B(iParam0, iVar7 + 1, 1);
				}
				iVar7++;
			}
		}
		if ((unk_0x4B423FAA24E8ABF0(iParam0) == joaat("sheava") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("omnis")) || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("le7b"))
		{
			if (unk_0x94C9CD3D66808551(iParam0, 0) == -1)
			{
				unk_0xD772F6AA66750D2B(iParam0, 1, 0);
			}
		}
		if (((func_171() && unk_0x00C6FDED3EB75117(uParam1->f_66)) && unk_0x8EC15ED9ECD1E9D0(iParam0)) && !unk_0x2E6A27037F1DC473(iParam0, joaat("avenger")))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (BitTest(uParam1->f_77, 22))
				{
					unk_0xC2A036647DD761E4(iParam0, 2);
				}
				else
				{
					unk_0xC2A036647DD761E4(iParam0, 3);
				}
			}
			else
			{
				unk_0xC2A036647DD761E4(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			unk_0xF46ECFD5526E8FF7(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xF46ECFD5526E8FF7(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_171()
{
	if ((((Global_4718592.f_104427 == 6 || Global_4718592.f_104427 == 7) || Global_4718592.f_104427 == 18) || Global_4718592.f_104427 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_175(7))
	{
		if (func_173(Global_2672505.f_4.f_16) || func_172(Global_2672505.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_172(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1890444[iVar0 /*129*/].f_77.f_51 != 0;
	}
	return 0;
}

int func_173(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_174(iParam0, 9);
	}
	return 0;
}

var func_174(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

bool func_175(int iParam0)
{
	return func_176(&(Global_2672505.f_184), iParam0);
}

var func_176(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_177(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD9F5E1FEFD1329E4(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x90E3EAFF8AAA1A42(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xB5AD06DDA85E2E8F(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0xF5501FF9869DAC7C(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0xF5501FF9869DAC7C(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x89D1FDCA3735A1E0(*iParam0, 255);
				}
				else
				{
					unk_0x89D1FDCA3735A1E0(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0xF5501FF9869DAC7C(*iParam0, iVar1, false);
			}
		}
		else if (unk_0x94C9CD3D66808551(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xC87E4FAD00AEDD4B(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					unk_0x8450270DC5896D39(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					unk_0x8450270DC5896D39(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_183(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					unk_0x8450270DC5896D39(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_182(unk_0x4B423FAA24E8ABF0(*iParam0), 1) && unk_0x94C9CD3D66808551(*iParam0, 24) != func_180(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x8450270DC5896D39(*iParam0, 24, func_180(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_179(iParam0);
	if (func_178(*iParam0))
	{
		unk_0xD05AF216D970F274(*iParam0, 1);
		unk_0x5FE0938FDE9B0958(*iParam0, 1);
	}
	return 1;
}

int func_178(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0)) && unk_0x90E3EAFF8AAA1A42(iParam0) > 0)
	{
		unk_0xB5AD06DDA85E2E8F(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x94C9CD3D66808551(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x1340575A0EEE0622(iParam0, iVar1, unk_0x94C9CD3D66808551(iParam0, iVar1)), 32);
				iVar2 = unk_0x70E57E9927B6BA58(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x70E57E9927B6BA58("MNU_CAGE") || iVar2 == unk_0x70E57E9927B6BA58("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_179(var uParam0)
{
	switch (unk_0x4B423FAA24E8ABF0(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x94C9CD3D66808551(*uParam0, 4) == 0)
			{
				unk_0x8450270DC5896D39(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xC87E4FAD00AEDD4B(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			unk_0x8450270DC5896D39(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_180(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		switch (unk_0x4B423FAA24E8ABF0(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
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
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = func_181(iParam0, 38) + 1;
		iVar1 = func_181(iParam0, 24) + 1;
		fVar2 = (to_float(iParam1 + 1) / to_float(iVar0));
		iVar3 = (floor((to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_181(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((unk_0x441B9C85D0FFA9ED(Global_152535) && unk_0x2E6A27037F1DC473(iParam0, Global_152535)) && Global_152536 == iParam1)
	{
		return Global_152537;
	}
	iVar0 = (unk_0x5B59C12A02157D00(iParam0, iParam1) - 1);
	while (iVar0 >= 0 && func_183(iParam0, iParam1, iVar0))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_182(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14734)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14735)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14733)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14736)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14738)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14737)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_19141)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_19143)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_19147)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_19144)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_19151)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_19149)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_19154)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_21100)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_21101)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_183(var uParam0, int iParam1, int iParam2)
{
	if (!func_184() && unk_0xAF82FE1B3E949337(uParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_184()
{
	return 0;
}

void func_185(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x90E3EAFF8AAA1A42(iParam0) > 0)
	{
		unk_0xB5AD06DDA85E2E8F(iParam0, 0);
		iVar0 = unk_0x94C9CD3D66808551(iParam0, 24);
		iVar1 = unk_0xEFDD8C5443F6C9E4(iParam0, 24);
		unk_0xE33678A9AE50A01B(iParam0, uParam1);
		if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("tornado6") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xC87E4FAD00AEDD4B(iParam0, 24);
		}
		else
		{
			unk_0x8450270DC5896D39(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_186()
{
	return unk_0x087611B922B50F13(joaat("mpindependence"));
}

int func_187(int iParam0)
{
	var uVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
			{
				if (unk_0xD130E7CDEE903624(iParam0, "MPBitset"))
				{
					uVar0 = unk_0xE2F6FE9B61232165(iParam0, "MPBitset");
				}
				return BitTest(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_188(int iParam0)
{
	if (!func_184() && func_189(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_190(int iParam0)
{
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!func_196(unk_0x259BE71D8A81D4FA(), -1))
		{
			iParam0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		}
	}
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	if (func_192(unk_0x259BE71D8A81D4FA()) == 3)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (func_191(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_191(int iParam0)
{
	if (unk_0x77B62CAA5DF0922A("FMDeliverableID", 3))
	{
		if (unk_0xD130E7CDEE903624(iParam0, "FMDeliverableID"))
		{
			return unk_0xE2F6FE9B61232165(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_192(int iParam0)
{
	if (func_195(iParam0) == 233)
	{
		return func_193(iParam0);
	}
	return -1;
}

int func_193(int iParam0)
{
	if (func_194(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_182;
	}
	return -1;
}

int func_194(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_195(int iParam0)
{
	if (func_194(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

int func_196(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_197(iParam0, 1, 1))
	{
		if (unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(iParam0), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(iParam0), 0);
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
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

int func_197(int iParam0, bool bParam1, bool bParam2)
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

void func_198(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_164(&(Global_77348.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0xED977E2AE2CB16EE(Param0, Global_77348.f_555[0 /*21*/], iParam2) <= fParam1)
			{
				func_160(iVar0);
			}
		}
		iVar0++;
	}
}

var func_199()
{
	return Global_107196.f_2890.f_12.f_66;
}

bool func_200()
{
	return func_133(&(Global_107196.f_2890));
}

void func_201()
{
	uLocal_305 = unk_0x8DE4F68A9728925E("BREAKING_NEWS");
	unk_0xEC9DAA34BBB4658C(joaat("jet"));
	unk_0xEC9DAA34BBB4658C(joaat("police3"));
	unk_0xEC9DAA34BBB4658C(joaat("maverick"));
	unk_0xEC9DAA34BBB4658C(joaat("bison"));
	unk_0xEC9DAA34BBB4658C(joaat("blista"));
	unk_0xEC9DAA34BBB4658C(joaat("ig_molly"));
	unk_0xEC9DAA34BBB4658C(joaat("cogcabrio"));
	unk_0xEC9DAA34BBB4658C(joaat("rapidgt"));
	unk_0xD772E6694B8472A6(45, "BB_Chase");
	unk_0xD772E6694B8472A6(35, "BB_Chase");
	unk_0xD772E6694B8472A6(2, "BB_Chase");
	unk_0xD772E6694B8472A6(54, "BB_Chase");
	unk_0xD772E6694B8472A6(55, "BB_Chase");
	unk_0xD772E6694B8472A6(67, "BB_Chase");
	func_203(1, "BB_Chase");
	if (func_23())
	{
		if (func_200())
		{
			if (!unk_0xBA16CD57E37AC32A(func_199()) && !unk_0x00C6FDED3EB75117(func_199()))
			{
				func_146();
				while (!func_131())
				{
					wait(0);
				}
			}
		}
	}
	while (((((((!unk_0x6252BC0DD8A320DB(joaat("jet")) || !unk_0x6252BC0DD8A320DB(joaat("police3"))) || !unk_0x6252BC0DD8A320DB(joaat("maverick"))) || !unk_0x6252BC0DD8A320DB(joaat("bison"))) || !unk_0x6252BC0DD8A320DB(joaat("blista"))) || !unk_0x6252BC0DD8A320DB(joaat("ig_molly"))) || !unk_0x6252BC0DD8A320DB(joaat("cogcabrio"))) || !unk_0x6252BC0DD8A320DB(joaat("rapidgt")))
	{
		wait(0);
	}
	while (!unk_0xA0C7B98BCF1EEF9E(uLocal_305) || !func_202(1, "BB_Chase"))
	{
		wait(0);
	}
	while (((((!unk_0x266D9DB5FCE4003B(45, "BB_Chase") || !unk_0x266D9DB5FCE4003B(35, "BB_Chase")) || !unk_0x266D9DB5FCE4003B(2, "BB_Chase")) || !unk_0x266D9DB5FCE4003B(54, "BB_Chase")) || !unk_0x266D9DB5FCE4003B(55, "BB_Chase")) || !unk_0x266D9DB5FCE4003B(67, "BB_Chase"))
	{
		wait(0);
	}
}

bool func_202(int iParam0, char* sParam1)
{
	return unk_0x266D9DB5FCE4003B(iParam0, sParam1);
}

void func_203(int iParam0, char* sParam1)
{
	unk_0xD772E6694B8472A6(iParam0, sParam1);
}

void func_204()
{
	func_230();
	func_228();
	unk_0x406CBCEA35499884();
	unk_0xF6ECB54A7941386F(0);
	unk_0xAD69CF046AA50E85(0);
	unk_0x0A0A06C514052E80(1);
	if (unk_0x116053132936EA1F(iLocal_262))
	{
		unk_0x19B3B7AC049E8354(iLocal_262, 0);
	}
	if (unk_0xF935563454D3B338(uLocal_263))
	{
		unk_0x8E99C7AF6C6639AB(uLocal_263);
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -1019.579f, -484.872f, 36.0795f, 1, 0, 0, 1);
		unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 93.7701f);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_279))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_279, 0))
		{
			if (unk_0x050D073F91C5243C(iLocal_279))
			{
				unk_0x1D2DAF2A41FFC4A0(iLocal_279);
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_278))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
		{
			unk_0x001B008A010F2FE6(iLocal_278, 0);
			if (unk_0x050D073F91C5243C(iLocal_278))
			{
				unk_0x1D2DAF2A41FFC4A0(iLocal_278);
			}
		}
	}
	if (unk_0x9CFFB7009B578840(uLocal_668))
	{
		unk_0x182120534CCF9023(uLocal_668, 0);
	}
	if (unk_0x9CFFB7009B578840(uLocal_669))
	{
		unk_0x182120534CCF9023(uLocal_669, 0);
	}
	if (unk_0x9CFFB7009B578840(uLocal_670))
	{
		unk_0x182120534CCF9023(uLocal_670, 0);
	}
	if (unk_0x9CFFB7009B578840(uLocal_671))
	{
		unk_0x182120534CCF9023(uLocal_671, 0);
	}
	if (unk_0x9CFFB7009B578840(uLocal_672))
	{
		unk_0x182120534CCF9023(uLocal_672, 0);
	}
	if (unk_0x9CFFB7009B578840(uLocal_667[0]))
	{
		unk_0x182120534CCF9023(uLocal_667[0], 0);
	}
	if (unk_0x9CFFB7009B578840(uLocal_667[1]))
	{
		unk_0x182120534CCF9023(uLocal_667[1], 0);
	}
	if (unk_0x9CFFB7009B578840(uLocal_667[2]))
	{
		unk_0x182120534CCF9023(uLocal_667[2], 0);
	}
	unk_0xAE427DA16687F323();
	if (unk_0xFC8BFE4B41177C22(iLocal_264))
	{
		unk_0x734A9F4537A31459(&iLocal_264);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_266))
	{
		unk_0x734A9F4537A31459(&iLocal_266);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_269))
	{
		unk_0x734A9F4537A31459(&iLocal_269);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_270))
	{
		unk_0x734A9F4537A31459(&iLocal_270);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_271))
	{
		unk_0x734A9F4537A31459(&iLocal_271);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_272))
	{
		unk_0x734A9F4537A31459(&iLocal_272);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_273))
	{
		unk_0x734A9F4537A31459(&iLocal_273);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_274))
	{
		unk_0x734A9F4537A31459(&iLocal_274);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_265[0]))
	{
		unk_0x734A9F4537A31459(&(iLocal_265[0]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_265[1]))
	{
		unk_0x734A9F4537A31459(&(iLocal_265[1]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_265[2]))
	{
		unk_0x734A9F4537A31459(&(iLocal_265[2]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_265[3]))
	{
		unk_0x734A9F4537A31459(&(iLocal_265[3]));
	}
	if (unk_0xFC8BFE4B41177C22(uLocal_267[0]))
	{
		unk_0x734A9F4537A31459(&(uLocal_267[0]));
	}
	if (unk_0xFC8BFE4B41177C22(uLocal_267[1]))
	{
		unk_0x734A9F4537A31459(&(uLocal_267[1]));
	}
	if (unk_0xFC8BFE4B41177C22(uLocal_267[2]))
	{
		unk_0x734A9F4537A31459(&(uLocal_267[2]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[0]))
	{
		unk_0x734A9F4537A31459(&(iLocal_268[0]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[1]))
	{
		unk_0x734A9F4537A31459(&(iLocal_268[1]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[2]))
	{
		unk_0x734A9F4537A31459(&(iLocal_268[2]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[3]))
	{
		unk_0x734A9F4537A31459(&(iLocal_268[3]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[4]))
	{
		unk_0x734A9F4537A31459(&(iLocal_268[4]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[5]))
	{
		unk_0x734A9F4537A31459(&(iLocal_268[5]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[6]))
	{
		unk_0x734A9F4537A31459(&(iLocal_268[6]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[7]))
	{
		unk_0x734A9F4537A31459(&(iLocal_268[7]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[8]))
	{
		unk_0x734A9F4537A31459(&(iLocal_268[8]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[9]))
	{
		unk_0x734A9F4537A31459(&(iLocal_268[9]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[10]))
	{
		unk_0x734A9F4537A31459(&(iLocal_268[10]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_275[0]))
	{
		unk_0x734A9F4537A31459(&(iLocal_275[0]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_276[0]))
	{
		unk_0x734A9F4537A31459(&(iLocal_276[0]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_276[1]))
	{
		unk_0x734A9F4537A31459(&(iLocal_276[1]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_278))
	{
		unk_0x8C1F7D7A31B2A38E(&iLocal_278);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_279))
	{
		if (!unk_0x110821AE6C63DD4F(iLocal_279))
		{
			unk_0xEE0BCDB1B5E36BCB(iLocal_279, 1, 0);
		}
		unk_0x8C1F7D7A31B2A38E(&iLocal_279);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_282))
	{
		unk_0x8C1F7D7A31B2A38E(&iLocal_282);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_283))
	{
		unk_0x8C1F7D7A31B2A38E(&iLocal_283);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_284))
	{
		unk_0x8C1F7D7A31B2A38E(&iLocal_284);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_285))
	{
		unk_0x8C1F7D7A31B2A38E(&iLocal_285);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_287))
	{
		unk_0x8C1F7D7A31B2A38E(&iLocal_287);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_289))
	{
		unk_0x8C1F7D7A31B2A38E(&iLocal_289);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_293[0]))
	{
		unk_0x8C1F7D7A31B2A38E(&(iLocal_293[0]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_293[1]))
	{
		unk_0x8C1F7D7A31B2A38E(&(iLocal_293[1]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_280[0]))
	{
		unk_0x8C1F7D7A31B2A38E(&(iLocal_280[0]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_280[1]))
	{
		unk_0x8C1F7D7A31B2A38E(&(iLocal_280[1]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_293[0]))
	{
		unk_0x8C1F7D7A31B2A38E(&(iLocal_293[0]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_293[1]))
	{
		unk_0x8C1F7D7A31B2A38E(&(iLocal_293[1]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_286[0]))
	{
		unk_0x8C1F7D7A31B2A38E(&(iLocal_286[0]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_286[1]))
	{
		unk_0x8C1F7D7A31B2A38E(&(iLocal_286[1]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_288[0]))
	{
		unk_0x8C1F7D7A31B2A38E(&(iLocal_288[0]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_281))
	{
		unk_0x8C1F7D7A31B2A38E(&iLocal_281);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_294))
	{
		unk_0x51C8BEA2005931AB(&iLocal_294);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_295))
	{
		unk_0x51C8BEA2005931AB(&iLocal_295);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_296))
	{
		unk_0x51C8BEA2005931AB(&iLocal_296);
	}
	unk_0x59E2E0637E7776F3();
	if (unk_0xBC2EE32DE886BD08("SOL_3_DRIVE_TO_AIRPORT"))
	{
		unk_0xB43467C43086A6A1("SOL_3_DRIVE_TO_AIRPORT");
	}
	if (unk_0xBC2EE32DE886BD08("SOL_3_MAIN_CHASE"))
	{
		unk_0xB43467C43086A6A1("SOL_3_MAIN_CHASE");
	}
	if (unk_0xBC2EE32DE886BD08("SOL_3_CHOPPER_CAM"))
	{
		unk_0xB43467C43086A6A1("SOL_3_CHOPPER_CAM");
	}
	if (unk_0xBC2EE32DE886BD08("SOL_3_HELI_TAKEOFF"))
	{
		unk_0xB43467C43086A6A1("SOL_3_HELI_TAKEOFF");
	}
	if (unk_0xBC2EE32DE886BD08("SOL_3_EVENT_TANKER_CRASH"))
	{
		unk_0xB43467C43086A6A1("SOL_3_EVENT_TANKER_CRASH");
	}
	if (unk_0xBC2EE32DE886BD08("SOL_3_CAR_JET_ENGINE"))
	{
		unk_0xB43467C43086A6A1("SOL_3_CAR_JET_ENGINE");
	}
	if (unk_0xBC2EE32DE886BD08("SOL_3_PLANE_ON_FIRE"))
	{
		unk_0xB43467C43086A6A1("SOL_3_PLANE_ON_FIRE");
	}
	if (unk_0xBC2EE32DE886BD08("SOL_3_EVENT_JET_LANDING"))
	{
		unk_0xB43467C43086A6A1("SOL_3_EVENT_JET_LANDING");
	}
	if (unk_0xBC2EE32DE886BD08("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
	{
		unk_0xB43467C43086A6A1("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
	}
	if (unk_0xBC2EE32DE886BD08("SOL_3_ARRIVE_AT_HANGAR"))
	{
		unk_0xB43467C43086A6A1("SOL_3_ARRIVE_AT_HANGAR");
	}
	if (unk_0xBC2EE32DE886BD08("SOL_3_ON_FOOT_CHASE"))
	{
		unk_0xB43467C43086A6A1("SOL_3_ON_FOOT_CHASE");
	}
	if (unk_0xBC2EE32DE886BD08("SOL_3_LOSE_COPS"))
	{
		unk_0xB43467C43086A6A1("SOL_3_LOSE_COPS");
	}
	if (unk_0xBC2EE32DE886BD08("SOL_3_LOSE_COPS_PLANE"))
	{
		unk_0xB43467C43086A6A1("SOL_3_LOSE_COPS_PLANE");
	}
	if (unk_0xBC2EE32DE886BD08("SOL_3_LOSE_COPS_VEHICLE"))
	{
		unk_0xB43467C43086A6A1("SOL_3_LOSE_COPS_VEHICLE");
	}
	if (unk_0xBC2EE32DE886BD08("SOL_3_ENGINE_DEATH_SCENE"))
	{
		unk_0xB43467C43086A6A1("SOL_3_ENGINE_DEATH_SCENE");
	}
	unk_0x8E4825CCACA34B58(iLocal_253);
	unk_0x8E4825CCACA34B58(iLocal_255);
	unk_0x8E4825CCACA34B58(iLocal_256);
	unk_0x8E4825CCACA34B58(iLocal_257);
	unk_0x8E4825CCACA34B58(iLocal_258);
	unk_0x8E4825CCACA34B58(iLocal_259);
	unk_0x8E4825CCACA34B58(iLocal_260);
	unk_0x8E4825CCACA34B58(iLocal_261);
	unk_0x8E4825CCACA34B58(iLocal_254);
	func_226(&uLocal_28, 0, 0);
	if (unk_0x78411E34CF90EA8C(uLocal_301))
	{
		unk_0x85E6A1E36B5E2E4D(uLocal_301, 0);
	}
	if (unk_0x78411E34CF90EA8C(uLocal_302))
	{
		unk_0x85E6A1E36B5E2E4D(uLocal_302, 0);
	}
	if (unk_0x78411E34CF90EA8C(uLocal_303))
	{
		unk_0x85E6A1E36B5E2E4D(uLocal_303, 0);
	}
	func_205(1, 1);
	unk_0x268BE77F77533D03("misssolomon_3");
	unk_0x268BE77F77533D03("amb@world_human_clipboard@male@base");
	unk_0x268BE77F77533D03("missheist_agency3aig_lift_waitped_a");
	unk_0x7821F942CAEEBEE1(1, "BB_CHASE");
	unk_0x7821F942CAEEBEE1(2, "BB_Chase");
	unk_0x7821F942CAEEBEE1(9, "BB_CHASE");
	unk_0x7821F942CAEEBEE1(35, "BB_Chase");
	unk_0x7821F942CAEEBEE1(45, "BB_Chase");
	unk_0x7821F942CAEEBEE1(54, "BB_Chase");
	unk_0x7821F942CAEEBEE1(55, "BB_Chase");
	unk_0x7821F942CAEEBEE1(61, "BB_CHASE");
	unk_0x7821F942CAEEBEE1(63, "BB_CHASE");
	unk_0x7821F942CAEEBEE1(64, "BB_CHASE");
	unk_0x7821F942CAEEBEE1(67, "BB_Chase");
	unk_0x7821F942CAEEBEE1(68, "BB_CHASE");
	unk_0x7821F942CAEEBEE1(69, "BB_Chase");
	unk_0xD314260005F064BF(&uLocal_305);
	unk_0x633E3833FB96BCCB("digitalOverlay");
}

void func_205(bool bParam0, bool bParam1)
{
	if (!unk_0xD6F9DEE4765092A9(&cLocal_185))
	{
		iLocal_91 = 0;
		func_225();
		unk_0x2B1BDC32466B40A9(iLocal_194);
		unk_0x33B6B083EA6305A5(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x7BFF320D45B40B56(unk_0x259BE71D8A81D4FA(), 1f);
			unk_0xE383E18054CA323B(unk_0x259BE71D8A81D4FA(), 1);
			unk_0xD682DD0578BF5392(1);
		}
		if (bLocal_107)
		{
			unk_0x55098D9E9AD58806(func_224());
		}
		unk_0x55098D9E9AD58806(func_223());
		unk_0x55098D9E9AD58806(func_222());
		unk_0x55098D9E9AD58806(func_221());
		if (!unk_0x15CCE8886267624F() && !bParam0)
		{
			func_220();
			func_219();
			func_216();
		}
		else
		{
			func_212();
			func_211();
		}
		if (bParam1)
		{
			func_206(0);
		}
	}
}

void func_206(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_207(iVar0, bParam0);
		iVar0++;
	}
}

void func_207(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_74(iParam0, 2, 1))
		{
			func_210(iParam0, 2, 1);
		}
	}
	else if (func_74(iParam0, 2, 1))
	{
		func_208(iParam0, 2, 1);
	}
}

void func_208(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x8744D2E3FC95740E(&(Global_100733.f_1407[iParam0]), bParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_76() == 0)
		{
			uVar0 = func_51(func_75(iParam0), -1, 0);
			unk_0x8744D2E3FC95740E(&uVar0, bParam1);
			func_209(func_75(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_113648.f_668[iParam0]), bParam1);
	}
}

void func_209(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805029[iParam0 /*3*/][func_52(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, uParam1, iParam3);
	}
}

void func_210(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_100733.f_1407[iParam0]), iParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_76() == 0)
		{
			uVar0 = func_51(func_75(iParam0), -1, 0);
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, bParam1);
			func_209(func_75(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_668[iParam0]), bParam1);
	}
}

void func_211()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		iLocal_201[iVar0] = 0;
		Local_173[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_109[iVar0] = 0f;
		fLocal_110[iVar0] = 0f;
		fLocal_111[iVar0] = 0f;
		fLocal_112[iVar0] = 0f;
		iLocal_149[iVar0] = 0;
		fLocal_113[iVar0] = 0f;
		iLocal_150[iVar0] = 0;
		iLocal_195[iVar0] = 0;
		iLocal_151[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iLocal_202[iVar0] = 0;
		iVar0++;
	}
	iLocal_156 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_203[iVar0] = 0;
		Local_174[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_124[iVar0] = 0f;
		fLocal_125[iVar0] = 0f;
		fLocal_126[iVar0] = 0f;
		fLocal_127[iVar0] = 0f;
		iLocal_155[iVar0] = 0;
		iLocal_196[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_205[iVar0] = 0;
		iVar0++;
	}
	iLocal_158 = 0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		iLocal_204[iVar0] = 0;
		Local_175[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_118[iVar0] = 0f;
		fLocal_119[iVar0] = 0f;
		fLocal_120[iVar0] = 0f;
		fLocal_121[iVar0] = 0f;
		iLocal_152[iVar0] = 0;
		fLocal_122[iVar0] = 0f;
		iLocal_153[iVar0] = 0;
		iLocal_197[iVar0] = 0;
		iLocal_154[iVar0] = 0;
		iVar0++;
	}
	iLocal_157 = 0;
	iLocal_160 = 0;
	iLocal_163 = 0;
	iLocal_164 = 0;
	iLocal_165 = 0;
}

void func_212()
{
	func_215();
	func_214();
	func_213();
}

void func_213()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_204[iVar0]))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_204[iVar0], 0))
			{
				if (unk_0x050D073F91C5243C(iLocal_204[iVar0]))
				{
					unk_0x1D2DAF2A41FFC4A0(iLocal_204[iVar0]);
				}
				iVar1 = unk_0xFD5C5BBD1FE92BB7(iLocal_204[iVar0], -1, 0);
				if (unk_0xFC8BFE4B41177C22(iVar1) && iVar1 != unk_0x4A8C381C258A124D())
				{
					if (unk_0x110821AE6C63DD4F(iVar1))
					{
						unk_0x734A9F4537A31459(&iVar1);
					}
				}
			}
			if (unk_0x110821AE6C63DD4F(iLocal_204[iVar0]))
			{
				unk_0x8C1F7D7A31B2A38E(&(iLocal_204[iVar0]));
			}
		}
		iLocal_153[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_152[iVar0] > 0)
			{
				unk_0x7821F942CAEEBEE1(iLocal_152[iVar0], &cLocal_185);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_197[iVar0] == 0)
		{
			unk_0x55098D9E9AD58806(iLocal_197[iVar0]);
		}
		iVar0++;
	}
}

void func_214()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_203[iVar0]))
		{
			if (unk_0x110821AE6C63DD4F(iLocal_203[iVar0]))
			{
				unk_0x8C1F7D7A31B2A38E(&(iLocal_203[iVar0]));
			}
		}
		iLocal_155[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_196[iVar0] == 0)
		{
			unk_0x55098D9E9AD58806(iLocal_196[iVar0]);
		}
		iVar0++;
	}
	iLocal_161 = 0;
	iLocal_158 = 0;
}

void func_215()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_201[iVar0]))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_201[iVar0], 0))
			{
				if (unk_0x050D073F91C5243C(iLocal_201[iVar0]))
				{
					unk_0x1D2DAF2A41FFC4A0(iLocal_201[iVar0]);
				}
				iVar1 = unk_0xFD5C5BBD1FE92BB7(iLocal_201[iVar0], -1, 0);
				if (unk_0xFC8BFE4B41177C22(iVar1) && iVar1 != unk_0x4A8C381C258A124D())
				{
					if (unk_0x110821AE6C63DD4F(iVar1))
					{
						unk_0x734A9F4537A31459(&iVar1);
					}
				}
			}
			if (unk_0x110821AE6C63DD4F(iLocal_201[iVar0]))
			{
				unk_0x8C1F7D7A31B2A38E(&(iLocal_201[iVar0]));
			}
		}
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_149[iVar0] > 0)
			{
				unk_0x7821F942CAEEBEE1(iLocal_149[iVar0], &cLocal_185);
			}
		}
		iLocal_150[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_195[iVar0] == 0)
		{
			unk_0x55098D9E9AD58806(iLocal_195[iVar0]);
		}
		iVar0++;
	}
	iLocal_160 = 0;
	iLocal_156 = 0;
}

void func_216()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_204[iVar0]))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_204[iVar0], 0))
			{
				if (unk_0x050D073F91C5243C(iLocal_204[iVar0]))
				{
					unk_0x1D2DAF2A41FFC4A0(iLocal_204[iVar0]);
				}
			}
			func_218(iLocal_204[iVar0]);
			func_217(iLocal_204[iVar0]);
		}
		iLocal_153[iVar0] = 0;
		iLocal_154[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_152[iVar0] > 0)
			{
				unk_0x7821F942CAEEBEE1(iLocal_152[iVar0], &cLocal_185);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_197[iVar0] == 0)
		{
			unk_0x55098D9E9AD58806(iLocal_197[iVar0]);
		}
		iVar0++;
	}
	iLocal_162 = 0;
}

void func_217(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		unk_0x68298CA6191CDFDB(&iParam0);
	}
}

void func_218(int iParam0)
{
	float fVar0;
	int iVar1;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		iVar1 = unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0);
		if (!unk_0x4FAFF4BCB7633475(iVar1))
		{
			if (!iVar1 == unk_0x4A8C381C258A124D())
			{
				fVar0 = unk_0xDF93B3CFAC96698F(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				unk_0xB3DA477F44309390(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, 1);
				unk_0x1CA08719184AFC6F(iVar1, 8192, 1);
				if (bLocal_108)
				{
					unk_0x1CA08719184AFC6F(iVar1, 65536, 1);
					unk_0x1CA08719184AFC6F(iVar1, 2, 0);
				}
				unk_0xBE8796DB2B90A437(iVar1, 6, 0);
			}
		}
	}
}

void func_219()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_203[iVar0]))
		{
			if (!unk_0x1C2F771CDC87A3A5(iLocal_203[iVar0], 0))
			{
				unk_0x44C48AC14D3C09ED(iLocal_203[iVar0], 1, 0);
			}
			func_217(iLocal_203[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_196[iVar0] == 0)
		{
			unk_0x55098D9E9AD58806(iLocal_196[iVar0]);
		}
		iVar0++;
	}
	iLocal_161 = 0;
	iLocal_158 = 0;
}

void func_220()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_201[iVar0]))
		{
			if (!unk_0x1C2F771CDC87A3A5(iLocal_201[iVar0], 0))
			{
				unk_0x44C48AC14D3C09ED(iLocal_201[iVar0], 1, 0);
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_201[iVar0], 0))
			{
				if (unk_0x050D073F91C5243C(iLocal_201[iVar0]))
				{
					unk_0x1D2DAF2A41FFC4A0(iLocal_201[iVar0]);
				}
			}
			func_218(iLocal_201[iVar0]);
			func_217(iLocal_201[iVar0]);
		}
		iLocal_150[iVar0] = 0;
		iLocal_151[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_149[iVar0] > 0)
			{
				unk_0x7821F942CAEEBEE1(iLocal_149[iVar0], &cLocal_185);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_195[iVar0] == 0)
		{
			unk_0x55098D9E9AD58806(iLocal_195[iVar0]);
		}
		iVar0++;
	}
	iLocal_160 = 0;
	iLocal_156 = 0;
}

int func_221()
{
	return joaat("s_m_y_cop_01");
}

int func_222()
{
	return joaat("police");
}

int func_223()
{
	return joaat("sultan");
}

int func_224()
{
	if (iLocal_198 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_198;
}

void func_225()
{
	unk_0x5A65DF56B098A5F1();
	unk_0xECDFDC2E8AC2D613(-1);
	unk_0x474491073FE815A8(1);
	unk_0xEFAF1ADDE0F583C3(1);
	unk_0xA0265306DFF63938(1f);
	unk_0x283C0970282AA5F3(3);
	unk_0xAD9B1C8FED6B4D96(3);
}

void func_226(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (BitTest(Global_2793046.f_4690, 26))
		{
			return;
		}
	}
	if (unk_0xE37AC296E66C33AF())
	{
		unk_0x3C44EF9027A21847(iParam2);
		unk_0x21172E4DF035B893("FocusIn");
		unk_0xB43467C43086A6A1("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xDCAFFD08A08087EB("FocusOut", 0, 0);
			unk_0xBF3D28CA44F3BE2D(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x0A0A06C514052E80(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xFF692AB7350A74D7(sVar0))
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xFF692AB7350A74D7(uParam0->f_3))
	{
		if (func_227(uParam0->f_3))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
	if (!unk_0xFF692AB7350A74D7(sVar0))
	{
		if (func_227(sVar0))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
}

bool func_227(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_228()
{
	Global_20591 = 0;
	func_229();
}

void func_229()
{
	unk_0xC78B293A5F4EACF9();
	Global_22736 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_21725 = 6;
	}
}

void func_230()
{
	Global_20591 = 0;
	func_231();
}

void func_231()
{
	unk_0xC78B293A5F4EACF9();
	Global_22736 = 0;
	if ((unk_0xE87F28FD4128D063() || Global_20383.f_1 == 9) || Global_20382 == 1)
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(1);
		Global_21725 = 6;
		return;
	}
}

void func_232()
{
	if (unk_0xC450B06E5AAA0985(uLocal_297))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_297);
	}
	if (unk_0xC450B06E5AAA0985(uLocal_298))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_298);
	}
	if (unk_0xC450B06E5AAA0985(uLocal_299))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_299);
	}
	if (unk_0xC450B06E5AAA0985(uLocal_300))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_300);
	}
}

void func_233()
{
	if (iLocal_486 == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_266))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_266))
			{
				if (unk_0x9B3D4335E0EDB0BE(iLocal_266, unk_0x4A8C381C258A124D(), 0))
				{
					iLocal_486 = 1;
				}
			}
		}
	}
	if (iLocal_486 == 0)
	{
		if (iLocal_456 == 0)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_266))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_266))
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_264))
					{
						if (!unk_0x4FAFF4BCB7633475(iLocal_264))
						{
							if (unk_0xBD08B11F7404F5CD(iLocal_264))
							{
								if (unk_0x9558BBC6B5B65853(iLocal_264) > 18)
								{
									if (unk_0xFC8BFE4B41177C22(iLocal_296))
									{
										if (unk_0xA3736D76B0E93E93(iLocal_296))
										{
											unk_0x837D67618BF89034(iLocal_296, 1, 1);
										}
									}
									uLocal_252 = unk_0x2EC137C692A52458(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
									unk_0x3DA436E63AB0F541(iLocal_266, uLocal_252, "misssolomon_3", "_action", 1000f, -1000f, 4, 0, 1148846080, 0);
									unk_0xE67051907958B5EB(iLocal_266, unk_0x4A8C381C258A124D(), 9000, 1024, 3);
									iLocal_456 = 1;
									iLocal_457 = 0;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_456 == 1 && iLocal_458 == 0)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_266))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_266))
				{
					if (unk_0x5266F1D2AEF6F73A(uLocal_252))
					{
						if (!iLocal_457)
						{
							if (unk_0xBD3B265153D3BA2D(uLocal_252) > 0.25f)
							{
								func_17(&uLocal_490, 4, iLocal_266, "HangerWorker", 0, 1);
								func_234(iLocal_266, "T1M4_BCAA", "HangerWorker", 11);
								iLocal_457 = 1;
							}
						}
						if (unk_0xBD3B265153D3BA2D(uLocal_252) > 0.99f)
						{
							uLocal_252 = unk_0x2EC137C692A52458(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
							unk_0x3DA436E63AB0F541(iLocal_266, uLocal_252, "misssolomon_3", "_react_to_death", 1000f, -1.5f, 3, 16, 1148846080, 0);
							iLocal_458 = 1;
						}
					}
				}
			}
		}
		if (iLocal_458 == 1 && iLocal_461 == 0)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_266))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_266))
				{
					if (unk_0x5266F1D2AEF6F73A(uLocal_252))
					{
						if (unk_0x5D640DD02AFD9F75(iLocal_266, unk_0x70E57E9927B6BA58("ENDS_IN_RUN")))
						{
							unk_0xB5396F1FB088FE38(&uLocal_304);
							unk_0x218240D21FF14E21(0, joaat("MotionState_Sprint"), 0);
							unk_0x63C8DCBEC1CF8225(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
							unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
							unk_0x93C0674FC00824D0(uLocal_304);
							unk_0x4BD42B0527065BB6(iLocal_266, uLocal_304);
							unk_0xD0557B139A542F12(&uLocal_304);
							unk_0x717804C8C8DA67BF(iLocal_266, joaat("MotionState_Sprint"), 0, 0, 0);
							iLocal_461 = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_461 == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_266))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_266))
			{
				unk_0xB5396F1FB088FE38(&uLocal_304);
				unk_0x63C8DCBEC1CF8225(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
				unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
				unk_0x93C0674FC00824D0(uLocal_304);
				unk_0x4BD42B0527065BB6(iLocal_266, uLocal_304);
				unk_0xD0557B139A542F12(&uLocal_304);
				iLocal_461 = 1;
			}
		}
	}
}

void func_234(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x4CAD907F190E6F10(iParam0, sParam1, sParam2, func_15(iParam3), 0);
}

void func_235()
{
	if (iLocal_223 == 0)
	{
		iLocal_225 = 0;
		iLocal_253 = unk_0xCA369FBC0DE29517();
		unk_0x839AD252B0708F35("TRV_4_MCS_2", 8);
		unk_0xEC9DAA34BBB4658C(joaat("prop_jet_bloodsplat_01"));
		if (unk_0xA08EEC7306CF6198("Trev4_5"))
		{
			unk_0x94302E8F619FAF3E("Trev4_5", 0, 0.5f, 1f);
		}
		if (!unk_0x9390801B06EE998F())
		{
			unk_0x10B228D2FDB7AF16(800);
		}
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		switch (iLocal_225)
		{
			case 0:
				while (!unk_0x0DDDD9D153BCF51F())
				{
					wait(0);
				}
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), false, 0);
				if (!unk_0x4FAFF4BCB7633475(iLocal_264))
				{
					unk_0xF293D66D4452C854(iLocal_264, "Molly", 1, joaat("ig_molly"), 0);
				}
				if (!unk_0x4FAFF4BCB7633475(iLocal_266))
				{
					unk_0xF293D66D4452C854(iLocal_266, "Airworker_Tackle_trevor", 0, joaat("s_m_y_airworker"), 0);
				}
				if (unk_0xD9F5E1FEFD1329E4(iLocal_284, 0))
				{
					unk_0xF293D66D4452C854(iLocal_284, "JET_TRV4", 0, joaat("jet"), 0);
				}
				func_236(1, 1, 1, 0, 0, 0, 0);
				unk_0x86A2BC11844DEEB3("TRV4_SUCK_CS");
				unk_0xED65412F8B26ED99(0);
				iLocal_225++;
				break;
			
			case 1:
				func_128();
				if (unk_0xD8FC13DA1BA1DBA2("JET_TRV4", joaat("jet")))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_284, 0))
					{
						if (!unk_0x1C2F771CDC87A3A5(iLocal_284, 0))
						{
							unk_0x5D7CD709B34C90F0(iLocal_284, 1);
						}
					}
				}
				if (unk_0xD8FC13DA1BA1DBA2("Airworker_Tackle_trevor", joaat("s_m_y_airworker")))
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_266))
					{
						unk_0xAAA71DD7E9059338(iLocal_266, 1);
						unk_0xD844F5E50DAB6FF7(iLocal_266, unk_0x4A8C381C258A124D(), 150f, -1, 0, 0);
						unk_0x935364B4448CD584(iLocal_266, 0);
						unk_0x3F58BFCF656F0DF1(iLocal_266, 1);
						unk_0xD0F1DB0E50B367AD(iLocal_266, 0, 0, 0, 0, 0, 0, 0, 0);
					}
				}
				if (unk_0xD8FC13DA1BA1DBA2("Michael", 0))
				{
					func_128();
					func_126(1);
				}
				if (!unk_0x0CB7695268A7F50F())
				{
					iLocal_336 = 1;
					if (!unk_0xFC8BFE4B41177C22(iLocal_294))
					{
						if (unk_0x6252BC0DD8A320DB(joaat("prop_jet_bloodsplat_01")))
						{
							iLocal_294 = unk_0x4E55EAB577C13329(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
							unk_0xCF39804E8C88080E(iLocal_294, 0f, 0f, -121.5948f, 2, 1);
							unk_0xF425E0B05426E088(iLocal_294, 0f, 0f, 0.8729f, -0.4879f);
							unk_0x55098D9E9AD58806(joaat("prop_jet_bloodsplat_01"));
						}
					}
					unk_0x9C22AADBAF330B36(0);
					func_236(0, 1, 1, 0, 0, 0, 0);
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), true, 0);
					if (!unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), 0, 2))
					{
						unk_0xB41DEC3AAC1AA107(unk_0x4A8C381C258A124D(), joaat("weapon_smg"), 150, 1, 1);
					}
					iLocal_223 = 2;
				}
				break;
			}
	}
	if (iLocal_223 == 2)
	{
		iLocal_223 = 0;
		iLocal_222 = 8;
	}
}

void func_236(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_244(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_243())
			{
				Global_20383.f_1 = 3;
			}
			Global_21725 = 5;
		}
		func_242(1, iParam3, iParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_244(0);
		unk_0xCCC82B30A1C53626();
		Global_63368 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_242(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_240(unk_0x259BE71D8A81D4FA())) && !func_238(unk_0x259BE71D8A81D4FA(), 0)) && !func_237()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_240(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_78556 = 0;
	}
}

bool func_237()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_18, 14);
}

bool func_238(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_239(-1, 0) == 8;
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

int func_239(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_53();
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

int func_240(int iParam0)
{
	if (func_238(iParam0, 0))
	{
		return 1;
	}
	if (func_241())
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657589[iParam0 /*466*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_241()
{
	return BitTest(Global_2621446, 3);
}

int func_242(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x4A0B7E53EBC937D5() != iParam0 && iParam2)
		{
			unk_0x7882946B06ED216B(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_243()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_244(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 13);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8253, 13);
	}
}

void func_245()
{
	if (iLocal_442 == 0)
	{
		if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, 1, 0))
		{
			iLocal_442 = 1;
		}
	}
	else if (iLocal_446 == 0)
	{
		unk_0x66EFB3D6110055C4(0, 22, 1);
		unk_0x66EFB3D6110055C4(0, 25, 1);
		if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -938.5178f, -2972.022f, 12.46715f, -934.1034f, -2974.613f, 15.96715f, 5.25f, 0, 1, 0))
		{
			unk_0x4190C67D524CD0DC(unk_0x4A8C381C258A124D(), 0f);
		}
		else
		{
			if (fLocal_324 < 1f)
			{
				fLocal_324 = 1f;
			}
			fLocal_324 = (fLocal_324 * 0.975f);
			unk_0x4190C67D524CD0DC(unk_0x4A8C381C258A124D(), fLocal_324);
		}
	}
	if (iLocal_223 > 0)
	{
		func_233();
	}
	if (iLocal_223 == 0)
	{
		iLocal_337 = 0;
		iLocal_338 = 0;
		iLocal_339 = 0;
		iLocal_340 = 0;
		iLocal_342 = 0;
		iLocal_358 = 0;
		iLocal_420 = 0;
		iLocal_421 = 0;
		iLocal_422 = 0;
		iLocal_428 = 0;
		iLocal_443 = 0;
		iLocal_444 = 0;
		iLocal_445 = 0;
		iLocal_446 = 0;
		iLocal_447[0] = 0;
		iLocal_448[0] = 0;
		iLocal_447[1] = 0;
		iLocal_448[1] = 0;
		iLocal_447[2] = 0;
		iLocal_456 = 0;
		iLocal_458 = 0;
		iLocal_459 = 0;
		iLocal_460 = 0;
		iLocal_461 = 0;
		iLocal_464 = 0;
		iLocal_484 = 0;
		iLocal_486 = 0;
		iLocal_487[3] = 0;
		unk_0xEC9DAA34BBB4658C(joaat("prop_jet_bloodsplat_01"));
		unk_0xDC750660004ECB83("V_60_HangerRm");
		unk_0xDAE61414743C8D1D(5);
		unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 3, 0);
		unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
		if (unk_0xFC8BFE4B41177C22(iLocal_264))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_264))
			{
				if (unk_0xBD08B11F7404F5CD(iLocal_264))
				{
					unk_0x3A4A0A988D382998(iLocal_264, 3f, 1);
				}
			}
		}
		if (!unk_0x9390801B06EE998F())
		{
			unk_0x10B228D2FDB7AF16(800);
		}
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		if (iLocal_428 == 0)
		{
			if (unk_0xD7E1DF759CD0FFF2("Trv_4_747", 0, -1))
			{
				iLocal_428 = 1;
			}
		}
		if (iLocal_420 == 0)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_264))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_264))
				{
					if (unk_0xBD08B11F7404F5CD(iLocal_264))
					{
						if (unk_0x9558BBC6B5B65853(iLocal_264) > 20)
						{
							if (unk_0xFC8BFE4B41177C22(iLocal_284))
							{
								if (unk_0xD9F5E1FEFD1329E4(iLocal_284, 0))
								{
									func_250(&iLocal_284);
									unk_0xF37CDE164C892195(iLocal_253, "Trevor_4_747_Jet_Engine", -937.77f, -2981.36f, 15.44f, 0, 0, 0, 0);
									unk_0xC229299217554C78(iLocal_284, 1, 0, 0);
									iLocal_420 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_443 == 0)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_264))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_264))
				{
					if (unk_0xBD08B11F7404F5CD(iLocal_264))
					{
						if (unk_0x9558BBC6B5B65853(iLocal_264) > 23)
						{
							unk_0x974022927CB47E68(iLocal_264);
							if (unk_0xFC8BFE4B41177C22(iLocal_284))
							{
								if (unk_0xD9F5E1FEFD1329E4(iLocal_284, 0))
								{
									if (!unk_0xBC2EE32DE886BD08("SOL_3_ENGINE_DEATH_SCENE"))
									{
										unk_0xCAC4020CCF361AC8("SOL_3_ENGINE_DEATH_SCENE");
									}
									uLocal_251 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
									unk_0x2DCB8CA1FE6895AB(uLocal_251, iLocal_284, unk_0x365DC1E8054AF31A(iLocal_284, "chassis_Control"));
									unk_0x3DA436E63AB0F541(iLocal_264, uLocal_251, "MISSSOLOMON_3", "molly_death", 1.5f, -8f, 4, 0, 1148846080, 0);
									unk_0xA7C372501A8A3B23(uLocal_251, 1);
									iLocal_443 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_444 == 0)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_264))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_264))
				{
					if (iLocal_443 == 1)
					{
						Local_318 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
						if (Local_318.f_1 < -2965f)
						{
							unk_0x190BA0A3BB48F7FD(iLocal_264, 0f, 0f, 0f, 1, 6000, 1000, 2000, 0);
							unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), false, 0);
							unk_0x0E95B96CFEFE7B61(unk_0x4A8C381C258A124D(), iLocal_264, 0);
							unk_0xE67051907958B5EB(unk_0x4A8C381C258A124D(), iLocal_264, 4000, 48, 4);
							iLocal_444 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_445 == 0)
		{
			if (!unk_0xFC8BFE4B41177C22(iLocal_264))
			{
				unk_0x3C44EF9027A21847(0);
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), true, 0);
				if (unk_0xFC8BFE4B41177C22(iLocal_268[0]))
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_268[0]))
					{
						unk_0x974022927CB47E68(iLocal_268[0]);
						unk_0xAAA71DD7E9059338(iLocal_268[0], 0);
					}
				}
				iLocal_445 = 1;
			}
		}
		if (iLocal_422 == 0)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_264))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_264))
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_295))
					{
						if (unk_0x21478251925DBFD7(iLocal_295, iLocal_264))
						{
							if (unk_0x13CCB1AD131C1082(iLocal_264, "MISSSOLOMON_3", "molly_death", 3))
							{
								if (unk_0xBD3B265153D3BA2D(uLocal_251) > 0.59f)
								{
									unk_0x837D67618BF89034(iLocal_295, 1, 1);
									if (unk_0xC450B06E5AAA0985(uLocal_297))
									{
										unk_0xFE54B8568B2ABD12(&uLocal_297);
									}
									if (!unk_0xC450B06E5AAA0985(uLocal_300))
									{
										func_234(iLocal_264, "HIGH_FALL", "WAVELOAD_PAIN_FEMALE", 11);
										if (unk_0xBC2EE32DE886BD08("SOL_3_ON_FOOT_CHASE"))
										{
											unk_0xB43467C43086A6A1("SOL_3_ON_FOOT_CHASE");
										}
										if (!unk_0xBC2EE32DE886BD08("SOL_3_LOSE_COPS"))
										{
											unk_0xCAC4020CCF361AC8("SOL_3_LOSE_COPS");
										}
										settimerb(0);
										iLocal_422 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_446 == 0)
		{
			if (iLocal_422 == 1 && timerb() > 2500)
			{
				uLocal_300 = func_247(iLocal_295);
				func_20("SOL3_GOD1", 7500, -1);
				settimerb(0);
				iLocal_446 = 1;
			}
		}
		if (iLocal_487[3] == 0)
		{
			if (iLocal_446 == 1 && iLocal_445 == 1)
			{
				if (timerb() > 2500)
				{
					unk_0xA62957B100C8DE6D(10f, 2f, 3);
					iLocal_487[3] = 1;
				}
			}
		}
		if (iLocal_421 == 0)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_264))
			{
				if (unk_0x13CCB1AD131C1082(iLocal_264, "MISSSOLOMON_3", "molly_death", 3))
				{
					if (unk_0xBD3B265153D3BA2D(uLocal_251) > 0.89f)
					{
						if (unk_0xFC8BFE4B41177C22(iLocal_284))
						{
							if (unk_0xD9F5E1FEFD1329E4(iLocal_284, 0))
							{
								unk_0x734A9F4537A31459(&iLocal_264);
								unk_0xDD19F75405614D3C("scr_trev4_747_blood_impact", iLocal_284, -12.5793f, 12.2f, -7.09421f, 0f, 0f, 0f, 1f, 0, 0, 0);
								uLocal_673 = unk_0x62750FD2BDD8BD49("scr_trev4_747_exhaust_plane_misfire", iLocal_284, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
								unk_0xF37CDE164C892195(iLocal_254, "Trevor_4_747_Man_Sucked_In", -938.6f, -2984.13f, 15.47f, 0, 0, 0, 0);
								iLocal_234 = unk_0x1DD05E817C89C737();
								iLocal_421 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x1DD05E817C89C737() > iLocal_234 + 574)
			{
				if (!unk_0xFC8BFE4B41177C22(iLocal_294))
				{
					if (unk_0x6252BC0DD8A320DB(joaat("prop_jet_bloodsplat_01")))
					{
						iLocal_294 = unk_0x4E55EAB577C13329(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
						unk_0xCF39804E8C88080E(iLocal_294, 0f, 0f, -121.5948f, 2, 1);
						unk_0xF425E0B05426E088(iLocal_294, 0f, 0f, 0.8729f, -0.4879f);
						unk_0x55098D9E9AD58806(joaat("prop_jet_bloodsplat_01"));
					}
				}
				if (iLocal_484 == 0)
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_284))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_284, 0))
						{
							unk_0xDD19F75405614D3C("scr_trev4_747_engine_debris", iLocal_284, -12.6286f, 6.85353f, -7.13622f, 180f, 0f, 0f, 1f, 0, 0, 0);
							unk_0xC229299217554C78(iLocal_284, 0, 0, 0);
							func_246();
							unk_0x8E4825CCACA34B58(iLocal_253);
							iLocal_484 = 1;
						}
					}
				}
			}
			if (iLocal_447[0] == 0)
			{
				if (unk_0x1DD05E817C89C737() > iLocal_234 + 300)
				{
					if (unk_0x9CFFB7009B578840(uLocal_673))
					{
						unk_0x182120534CCF9023(uLocal_673, 0);
					}
					iLocal_447[0] = 1;
				}
			}
			else if (iLocal_448[0] == 0)
			{
				if (unk_0x1DD05E817C89C737() > iLocal_234 + 700)
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_284))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_284, 0))
						{
							uLocal_673 = unk_0x62750FD2BDD8BD49("scr_trev4_747_exhaust_plane_misfire", iLocal_284, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							iLocal_448[0] = 1;
						}
					}
				}
			}
			else if (iLocal_447[1] == 0)
			{
				if (unk_0x1DD05E817C89C737() > iLocal_234 + 1000)
				{
					if (unk_0x9CFFB7009B578840(uLocal_673))
					{
						unk_0x182120534CCF9023(uLocal_673, 0);
					}
					iLocal_447[1] = 1;
				}
			}
			else if (iLocal_448[1] == 0)
			{
				if (unk_0x1DD05E817C89C737() > iLocal_234 + 1400)
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_284))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_284, 0))
						{
							uLocal_673 = unk_0x62750FD2BDD8BD49("scr_trev4_747_exhaust_plane_misfire", iLocal_284, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							uLocal_672 = unk_0x62750FD2BDD8BD49("scr_trev4_747_engine_damage", iLocal_284, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1065353216, 0, 0, 0);
							iLocal_448[1] = 1;
						}
					}
				}
			}
			else if (iLocal_447[2] == 0)
			{
				if (unk_0x1DD05E817C89C737() > iLocal_234 + 3500)
				{
					if (unk_0x9CFFB7009B578840(uLocal_673))
					{
						unk_0x182120534CCF9023(uLocal_673, 0);
					}
					if (unk_0xFC8BFE4B41177C22(iLocal_284))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_284, 0))
						{
							unk_0xD0F1DB0E50B367AD(iLocal_284, 0, 0, 0, 0, 0, 0, 0, 0);
						}
					}
					iLocal_447[2] = 1;
				}
			}
		}
		if (iLocal_459 == 0)
		{
			if (iLocal_422 == 1)
			{
				if (iLocal_460 == 0)
				{
					if (!unk_0x3F18810075C77D41(iLocal_295))
					{
						iLocal_244 = unk_0x1DD05E817C89C737();
						iLocal_460 = 1;
					}
				}
				else if (unk_0x1DD05E817C89C737() > iLocal_244 + 2000)
				{
					unk_0x5D7CD709B34C90F0(iLocal_295, 1);
					iLocal_459 = 1;
				}
			}
		}
		if (iLocal_464 == 0)
		{
			if (!unk_0xFC8BFE4B41177C22(iLocal_264))
			{
				if (unk_0xFC8BFE4B41177C22(iLocal_284))
				{
					unk_0x5D7CD709B34C90F0(iLocal_284, 0);
					iLocal_464 = 1;
				}
			}
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_295))
		{
			if (unk_0xC450B06E5AAA0985(uLocal_300))
			{
				if (func_16(unk_0x4A8C381C258A124D(), iLocal_295, 1) < 1.5f && !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					unk_0xFE54B8568B2ABD12(&uLocal_300);
					unk_0x51C8BEA2005931AB(&iLocal_295);
					func_128();
					iLocal_223 = 0;
					iLocal_222 = 8;
				}
			}
		}
	}
}

void func_246()
{
	if (unk_0x9CFFB7009B578840(uLocal_668))
	{
		unk_0x182120534CCF9023(uLocal_668, 0);
	}
	if (unk_0x9CFFB7009B578840(uLocal_669))
	{
		unk_0x182120534CCF9023(uLocal_669, 0);
	}
	if (unk_0x9CFFB7009B578840(uLocal_670))
	{
		unk_0x182120534CCF9023(uLocal_670, 0);
	}
	if (unk_0x9CFFB7009B578840(uLocal_671))
	{
		unk_0x182120534CCF9023(uLocal_671, 0);
	}
}

int func_247(int iParam0)
{
	return func_248(iParam0, 1, 0);
}

int func_248(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_249(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6A52036D51C7E18E(uVar0, iParam1);
		}
		else
		{
			unk_0x61183D6239A9D7B8(uVar0, 2);
		}
	}
	else if (unk_0x0101C509A6E67F99(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_249(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
		unk_0x6A52036D51C7E18E(uVar0, iParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_249(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_249(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_250(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!unk_0x1C2F771CDC87A3A5(*iParam0, 0))
	{
		Var0 = { 22.6057f, -2.10018f, -6.22841f };
		Var1 = { 12.6349f, 7.89711f, -7.09742f };
		Var2 = { -22.5879f, -2.2931f, -6.22542f };
		Var3 = { -12.6675f, 8.15519f, -6.98833f };
		Var4 = { 180f, 0f, 0f };
		uLocal_668 = unk_0x62750FD2BDD8BD49("scr_trev4_747_engine_heathaze", *iParam0, Var0, Var4, 1065353216, 0, 0, 0);
		uLocal_669 = unk_0x62750FD2BDD8BD49("scr_trev4_747_engine_heathaze", *iParam0, Var1, Var4, 1065353216, 0, 0, 0);
		uLocal_670 = unk_0x62750FD2BDD8BD49("scr_trev4_747_engine_heathaze", *iParam0, Var2, Var4, 1065353216, 0, 0, 0);
		uLocal_671 = unk_0x62750FD2BDD8BD49("scr_trev4_747_engine_heathaze", *iParam0, Var3, Var4, 1065353216, 0, 0, 0);
	}
}

void func_251()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_264))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_264))
		{
			if (unk_0xBD08B11F7404F5CD(iLocal_264))
			{
				if (func_16(unk_0x4A8C381C258A124D(), iLocal_264, 1) < 17f)
				{
					unk_0x3A4A0A988D382998(iLocal_264, 3f, 1);
				}
				if (func_16(unk_0x4A8C381C258A124D(), iLocal_264, 1) < 22f && func_16(unk_0x4A8C381C258A124D(), iLocal_264, 1) > 17f)
				{
					unk_0x3A4A0A988D382998(iLocal_264, 2f, 1);
				}
				if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), -921.7f, -2946.4f, 13.4f, 1) > 8f && !unk_0xCB5CAFF0A4A8B74B(iLocal_264))
				{
					if (func_16(unk_0x4A8C381C258A124D(), iLocal_264, 1) > 22f)
					{
						unk_0x3A4A0A988D382998(iLocal_264, 1f, 1);
					}
				}
				else if (func_16(unk_0x4A8C381C258A124D(), iLocal_264, 1) > 22f)
				{
					unk_0x3A4A0A988D382998(iLocal_264, 2f, 1);
				}
			}
		}
	}
	if (iLocal_223 > 0)
	{
		if (iLocal_442 == 0)
		{
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, 1, 0))
			{
				iLocal_442 = 1;
			}
		}
		else
		{
			unk_0x66EFB3D6110055C4(0, 22, 1);
			unk_0x66EFB3D6110055C4(0, 25, 1);
			if (fLocal_324 < 1f)
			{
				fLocal_324 = 1f;
			}
			fLocal_324 = (fLocal_324 * 0.98f);
			unk_0x4190C67D524CD0DC(unk_0x4A8C381C258A124D(), fLocal_324);
		}
		if (!unk_0xFC8BFE4B41177C22(iLocal_284))
		{
			unk_0xEC9DAA34BBB4658C(joaat("jet"));
			if (unk_0x6252BC0DD8A320DB(joaat("jet")))
			{
				iLocal_284 = unk_0x5779387E956077A6(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1, 0);
				unk_0xA1C03303EC67320B(iLocal_284, 2);
				unk_0xF04751F8E604D487(iLocal_284, 0);
				unk_0x5D7CD709B34C90F0(iLocal_284, 1);
				unk_0xD0F1DB0E50B367AD(iLocal_284, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x55098D9E9AD58806(joaat("jet"));
				unk_0xF88FC425EC7D675D(iLocal_284, 500);
			}
		}
		if (!unk_0xFC8BFE4B41177C22(iLocal_266))
		{
			unk_0xEC9DAA34BBB4658C(joaat("s_m_y_airworker"));
			unk_0x80813AC549A1E8AE("misssolomon_3");
			unk_0xEC9DAA34BBB4658C(joaat("p_amb_clipboard_01"));
			if ((unk_0x6252BC0DD8A320DB(joaat("s_m_y_airworker")) && unk_0xE100DD4F82A51BDE("misssolomon_3")) && unk_0x6252BC0DD8A320DB(joaat("p_amb_clipboard_01")))
			{
				iLocal_266 = unk_0xB1DBFEB95C0EFB88(26, joaat("s_m_y_airworker"), -932.1812f, -2967.947f, 12.9451f, 170.7182f, 1, 1);
				unk_0xD0F1DB0E50B367AD(iLocal_266, 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0x3F58BFCF656F0DF1(iLocal_266, 0);
				unk_0xAAA71DD7E9059338(iLocal_266, 1);
				func_17(&uLocal_490, 4, iLocal_266, "HangerWorker", 0, 1);
				iLocal_296 = unk_0x4E55EAB577C13329(joaat("p_amb_clipboard_01"), -932.1812f, -2967.947f, 12.9451f, 1, 1, 0);
				unk_0x4D306DD94DD6FDBA(iLocal_296, iLocal_266, unk_0x72F7E39FB49FC0BA(iLocal_264, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
				uLocal_252 = unk_0x2EC137C692A52458(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
				unk_0x3DA436E63AB0F541(iLocal_266, uLocal_252, "misssolomon_3", "_start_loop", 1000f, -8f, 68, 0, 1148846080, 0);
				unk_0x55098D9E9AD58806(joaat("s_m_y_airworker"));
				unk_0x55098D9E9AD58806(joaat("p_amb_clipboard_01"));
			}
		}
		if (!unk_0xFC8BFE4B41177C22(iLocal_268[0]))
		{
			unk_0xEC9DAA34BBB4658C(joaat("s_m_y_cop_01"));
			if (unk_0x6252BC0DD8A320DB(joaat("s_m_y_cop_01")))
			{
				iLocal_268[0] = unk_0xB1DBFEB95C0EFB88(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, 1);
				unk_0xB41DEC3AAC1AA107(iLocal_268[0], joaat("weapon_pistol"), 1000, 1, 1);
				unk_0xC652B7E19CE29859(iLocal_268[0], 20);
				unk_0x788F35D395511DFE(iLocal_268[0], 1, 1);
				unk_0xAAA71DD7E9059338(iLocal_268[0], 1);
				unk_0x646DE293036A3499(iLocal_268[0], unk_0x4A8C381C258A124D(), -1, 1);
				func_130(iLocal_268[0], 0);
			}
		}
		if (!unk_0xFC8BFE4B41177C22(iLocal_285))
		{
			unk_0xEC9DAA34BBB4658C(joaat("shamal"));
			if (unk_0x6252BC0DD8A320DB(joaat("shamal")))
			{
				iLocal_285 = unk_0x5779387E956077A6(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 1, 1, 0);
				unk_0xBFE60A5CC0C835D8(iLocal_285, 0, 0, 1);
				unk_0x1DE99C193C7EC64B(iLocal_285, 1084227584);
				unk_0x55098D9E9AD58806(joaat("shamal"));
				unk_0xD25E9BDC14A0B649(iLocal_285, 2000, 0);
			}
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_285))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_285, 0))
			{
				if (func_16(unk_0x4A8C381C258A124D(), iLocal_285, 1) > 5f)
				{
					unk_0xBFE60A5CC0C835D8(iLocal_285, 0, 0, 0);
				}
			}
		}
	}
	if (iLocal_223 == 0)
	{
		func_25(2, "STAGE_ON_FOOT_CHASE", 0, 0, 0, 1);
		if (iLocal_343 == 1)
		{
			if (!unk_0x15CCE8886267624F())
			{
				unk_0x8F72AF14CE5AACE4(0);
			}
			func_123();
			func_17(&uLocal_490, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
			iLocal_343 = 0;
		}
		iLocal_400 = 0;
		iLocal_401 = 0;
		iLocal_442 = 0;
		fLocal_324 = 3f;
		iLocal_227 = 0;
		func_205(0, 1);
		unk_0x7821F942CAEEBEE1(45, "BB_CHASE");
		unk_0x7821F942CAEEBEE1(35, "BB_CHASE");
		unk_0x7821F942CAEEBEE1(2, "BB_CHASE");
		unk_0x7821F942CAEEBEE1(54, "BB_CHASE");
		unk_0x7821F942CAEEBEE1(1, "BB_CHASE");
		unk_0x7821F942CAEEBEE1(9, "BB_CHASE");
		unk_0x7821F942CAEEBEE1(61, "BB_CHASE");
		unk_0x7821F942CAEEBEE1(63, "BB_CHASE");
		unk_0x7821F942CAEEBEE1(64, "BB_CHASE");
		unk_0xD314260005F064BF(&uLocal_305);
		unk_0x633E3833FB96BCCB("digitalOverlay");
		if (unk_0xFC8BFE4B41177C22(iLocal_278))
		{
			unk_0x001B008A010F2FE6(iLocal_278, 0);
			unk_0x68298CA6191CDFDB(&iLocal_278);
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_287))
		{
			unk_0x8C1F7D7A31B2A38E(&iLocal_287);
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_276[0]))
		{
			unk_0x734A9F4537A31459(&(iLocal_276[0]));
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_280[0]))
		{
			unk_0x8C1F7D7A31B2A38E(&(iLocal_280[0]));
		}
		unk_0x50FB8785AFA2D59C(0);
		unk_0x51E3279E9437131C(1);
		if (!unk_0x4FAFF4BCB7633475(iLocal_264))
		{
			if (!unk_0xC450B06E5AAA0985(uLocal_297))
			{
				uLocal_297 = unk_0x18E23E031A9B798F(iLocal_264);
				unk_0x6A52036D51C7E18E(uLocal_297, 1);
			}
		}
		unk_0xCFBD89D2F1F18961("PoliceScannerDisabled", 1);
		if (iLocal_363[2] == 1)
		{
			if (!unk_0x9F0C06CFBACDD6A1(iLocal_261))
			{
				unk_0x8E4825CCACA34B58(iLocal_261);
			}
			unk_0x394AFAC073E1F277(iLocal_261);
			iLocal_390 = 0;
			iLocal_363[2] = 0;
		}
		unk_0xDAE61414743C8D1D(5);
		unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 3, 0);
		unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
		unk_0x86A2BC11844DEEB3("TRV4_RUN");
		if (!unk_0xFC8BFE4B41177C22(iLocal_284))
		{
			unk_0xEC9DAA34BBB4658C(joaat("jet"));
		}
		if (!unk_0xFC8BFE4B41177C22(iLocal_266))
		{
			unk_0xEC9DAA34BBB4658C(joaat("s_m_y_airworker"));
		}
		unk_0xEC9DAA34BBB4658C(joaat("shamal"));
		unk_0xEC9DAA34BBB4658C(joaat("s_m_y_cop_01"));
		unk_0xEC9DAA34BBB4658C(joaat("police3"));
		unk_0xEC9DAA34BBB4658C(joaat("p_amb_clipboard_01"));
		unk_0xD772E6694B8472A6(68, "BB_Chase");
		unk_0xD772E6694B8472A6(69, "BB_Chase");
		unk_0x80813AC549A1E8AE("misssolomon_3");
		settimera(0);
		if (unk_0xA08EEC7306CF6198("Trev4_5"))
		{
			unk_0x94302E8F619FAF3E("Trev4_5", 1, 1f, 1f);
		}
		if (unk_0x15CCE8886267624F())
		{
			if (!func_24())
			{
				unk_0x6C39BDF5EA5D38FC(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1));
			}
			func_21(0, -1, 1);
			func_20("TRV4_CHASE1", 7500, 1);
		}
		if (!unk_0x9390801B06EE998F())
		{
			unk_0x10B228D2FDB7AF16(800);
		}
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		iLocal_223 = 2;
	}
	if (iLocal_223 == 2)
	{
		if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), -880.365f, -2942.26f, 14f, 9.55f, 15.69f, 5f, 0, 1, 0))
		{
			func_252("TRV4_FAIL1");
		}
		if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), -945.725f, -2893.15f, 14f, 4.5f, 9.56f, 5f, 0, 1, 0))
		{
			func_252("TRV4_FAIL1");
		}
		if (timera() > 15000)
		{
			func_252("TRV4_FAIL1");
		}
		if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), -932.1196f, -2934.317f, 12.9448f, 2f, 2f, 2f, 0, 1, 0))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_264))
			{
				if (!unk_0xBD08B11F7404F5CD(iLocal_264))
				{
					unk_0x7FD62C74ABB26599(iLocal_264, "BB_MOLLY_2", 10, 4, -1);
					unk_0x10425721983AE158(iLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				}
			}
			settimera(0);
			iLocal_223 = 3;
		}
	}
	if (iLocal_223 == 3)
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_264))
		{
			if (unk_0xBD08B11F7404F5CD(iLocal_264))
			{
				if (unk_0x9558BBC6B5B65853(iLocal_264) > 18 && iLocal_405 == 0)
				{
					iLocal_350 = 0;
					unk_0x3A4A0A988D382998(iLocal_264, 3f, 1);
					iLocal_223 = 0;
					iLocal_222 = 6;
				}
			}
		}
		if (timera() > 50000)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_264))
			{
				unk_0x19626F992DC71FB9(iLocal_264);
				unk_0xB2BD5837A8D3CEDA(iLocal_264, -932.5f, -2964.1f, 13.4f, 1, 0, 0, 1);
				unk_0x7FD62C74ABB26599(iLocal_264, "BB_MOLLY_2", 18, 4, -1);
				unk_0x10425721983AE158(iLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				iLocal_350 = 0;
				iLocal_223 = 0;
				iLocal_222 = 6;
			}
		}
	}
}

void func_252(char* sParam0)
{
	if (iLocal_405 == 0)
	{
		if (iLocal_334)
		{
			func_242(0, 1, 1, 0);
			unk_0x4CBC5D1BC117616B(uLocal_301, 0);
			unk_0xE37AF9002E782BA0(false, 0, 3000, 1, 0, 0);
			unk_0x37B894853929BF1A(1);
			if (unk_0xBC2EE32DE886BD08("SOL_3_CHOPPER_CAM"))
			{
				unk_0xB43467C43086A6A1("SOL_3_CHOPPER_CAM");
			}
			unk_0x8E4825CCACA34B58(iLocal_261);
			func_262();
			unk_0x51E3279E9437131C(1);
			iLocal_363[2] = 0;
			iLocal_334 = 0;
		}
		unk_0x86A2BC11844DEEB3("TRV4_FAIL");
		sLocal_489 = sParam0;
		unk_0x406CBCEA35499884();
		func_230();
		func_228();
		func_253(sLocal_489);
		iLocal_405 = 1;
	}
}

void func_253(char* sParam0)
{
	func_261(sParam0);
	func_254(0);
}

void func_254(int iParam0)
{
	int iVar0;
	
	if (Global_113648.f_9087 || func_447(0))
	{
		iVar0 = func_8();
		if (!func_255(iVar0))
		{
			return;
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Global_91433[iVar0 /*5*/].f_1), 5);
		Global_100717 = iParam0;
	}
}

int func_255(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_260();
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0x97915D82C999021F(5000);
	}
	iVar0 = Global_91433[iParam0 /*5*/];
	iVar1 = Global_78828.f_109[iVar0 /*4*/];
	func_259(iVar1, 1);
	unk_0x3ECCF6485789A1D6(unk_0x259BE71D8A81D4FA(), 0);
	unk_0xF064FD8FB64821D1(unk_0x259BE71D8A81D4FA(), 0);
	func_256(&(Global_113648.f_2365.f_539), iVar1);
	if (Global_94856 == Global_100718)
	{
		Global_113648.f_9087.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91469[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x40AC02FA167D4D0A(0);
		}
	}
	Global_113648.f_9087.f_330[iVar1 /*6*/].f_2++;
	Global_94856 = Global_100718;
	if (iParam0 == -1)
	{
		if (Global_113648.f_9087)
		{
		}
		return 0;
	}
	if (BitTest(Global_91433[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91433[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_256(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113648.f_18535[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113648.f_9087.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_258(Global_113648.f_18535[iVar0], &Var2, &fVar3))
			{
				Global_113648.f_18535[iVar0] = 318;
				func_257(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_98071[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_9 = 0f;
				Global_98071[iVar0 /*29*/].f_12 = 0f;
				Global_98071[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_10 = 0f;
				Global_98071[iVar0 /*29*/].f_13 = 0f;
				Global_98071[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_11 = 0f;
				Global_98071[iVar0 /*29*/].f_14 = 0f;
				Global_98071[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_26 = 0f;
				Global_98071[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_27 = 0f;
				Global_98071[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_257(var uParam0)
{
	*uParam0 = -15;
}

int func_258(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_258(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_258(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_259(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94666[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94666[iParam0 /*2*/] = 0;
	}
}

void func_260()
{
	Global_100716 = 1;
	if (unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1))
	{
		if (unk_0xD6F9DEE4765092A9(&Global_78791))
		{
			switch (func_110())
			{
				case 0:
					StringCopy(&Global_78791, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_78791, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_78791, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_78795, "", 16);
		}
		Global_100716 = 0;
	}
	else if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xD6F9DEE4765092A9(&Global_78791))
		{
			switch (func_110())
			{
				case 0:
					StringCopy(&Global_78791, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_78791, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_78791, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_78795, "", 16);
		}
		Global_100716 = 0;
		unk_0x0B0C9A0F9AAEB7F0(&(Global_100681.f_20), 25);
	}
}

void func_261(char* sParam0)
{
	if (!unk_0xD6F9DEE4765092A9(sParam0))
	{
		if (unk_0x09112CCF7824FE38(sParam0) <= 16)
		{
			StringCopy(&Global_78791, sParam0, 16);
			StringCopy(&Global_78795, "", 16);
			if (unk_0xE7585CE3CDD6F47E())
			{
				unk_0x98188EDB7446A033();
			}
		}
	}
}

void func_262()
{
	Global_63369 = 0;
}

void func_263()
{
	if (!unk_0xFC8BFE4B41177C22(iLocal_284))
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_278))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
			{
				if (unk_0x050D073F91C5243C(iLocal_278))
				{
					if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 30000f)
					{
						unk_0xEC9DAA34BBB4658C(joaat("jet"));
						if (unk_0x6252BC0DD8A320DB(joaat("jet")))
						{
							iLocal_284 = unk_0x5779387E956077A6(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1, 0);
							unk_0xA1C03303EC67320B(iLocal_284, 2);
							unk_0xF04751F8E604D487(iLocal_284, 0);
							unk_0x5D7CD709B34C90F0(iLocal_284, 1);
							unk_0xD0F1DB0E50B367AD(iLocal_284, 1, 1, 1, 1, 1, 0, 0, 0);
							unk_0x55098D9E9AD58806(joaat("jet"));
							unk_0xF88FC425EC7D675D(iLocal_284, 500);
						}
					}
				}
			}
		}
	}
	func_362();
	if (unk_0xC450B06E5AAA0985(uLocal_297))
	{
		func_361(uLocal_297, iLocal_264, 300f, 0.9f, 0);
	}
	if (iLocal_223 == 0)
	{
		if (iLocal_224 < 2)
		{
			unk_0x07B9040E912A4EA1(unk_0x4A8C381C258A124D(), 0);
		}
		func_360();
		func_328();
		if (iLocal_395 == 0)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_204[20]))
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_204[20], 0))
				{
					unk_0xC229299217554C78(iLocal_204[20], 1, 1, 0);
					unk_0xA9F7300B498DDED7(iLocal_204[20]);
					iLocal_395 = 1;
				}
			}
		}
		func_327();
		func_326();
		if (iLocal_347 == 0)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_278))
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
				{
					if (unk_0x050D073F91C5243C(iLocal_278))
					{
						func_325(uLocal_301, iLocal_287, "BB_Chase", 1);
						iLocal_347 = 1;
					}
				}
			}
		}
		else if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
		{
			if (unk_0x050D073F91C5243C(iLocal_278))
			{
				func_324(uLocal_301, iLocal_287, fLocal_321);
				unk_0x58BDA5D9262F5D30(uLocal_301, 45f);
			}
		}
		if (iLocal_335 == 0)
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
			{
				if (unk_0x050D073F91C5243C(iLocal_278))
				{
					if ((unk_0x157F3D5A4AAB2C50(iLocal_278) > 15000f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 125464f) && func_316(1, 0, 0))
					{
						iLocal_350 = 1;
						if (iLocal_405 == 0)
						{
							unk_0x428C32CC68809A35(1);
							func_315("TRV4_HELP1", -1);
							func_308(1);
							func_226(&uLocal_28, 0, 0);
							unk_0x0A0A06C514052E80(0);
							iLocal_335 = 1;
						}
					}
				}
			}
		}
		else if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
		{
			if (unk_0x050D073F91C5243C(iLocal_278))
			{
				if (unk_0xA0C7B98BCF1EEF9E(uLocal_305) && func_202(1, "BB_Chase"))
				{
					if (((unk_0x157F3D5A4AAB2C50(iLocal_278) > 15000f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 125464f) && iLocal_405 == 0) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						func_286();
					}
					if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 125464f || !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if (iLocal_334)
						{
							unk_0x428C32CC68809A35(1);
							func_242(0, 1, 1, 0);
							unk_0x4CBC5D1BC117616B(uLocal_301, 0);
							unk_0xE37AF9002E782BA0(false, 0, 3000, 1, 0, 0);
							unk_0x37B894853929BF1A(1);
							if (unk_0xBC2EE32DE886BD08("SOL_3_CHOPPER_CAM"))
							{
								unk_0xB43467C43086A6A1("SOL_3_CHOPPER_CAM");
							}
							unk_0x8E4825CCACA34B58(iLocal_261);
							func_262();
							unk_0x51E3279E9437131C(1);
							iLocal_363[2] = 0;
							iLocal_334 = 0;
						}
					}
				}
			}
		}
		switch (iLocal_224)
		{
			case 0:
				if (iLocal_487[0] == 0)
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_278))
						{
							if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 44255f && unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), -1187.3f, -2847.8f, 13.6f, 1) < 100f)
							{
								unk_0xA62957B100C8DE6D(10f, 2f, 3);
								iLocal_487[0] = 1;
							}
						}
					}
				}
				if (iLocal_487[1] == 0)
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_278))
						{
							if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 52875f && unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), -1349f, -2720f, 14f, 1) < 50f)
							{
								unk_0xA62957B100C8DE6D(6f, 2f, 3);
								iLocal_487[1] = 1;
							}
						}
					}
				}
				if (iLocal_487[2] == 0)
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_278))
						{
							if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 87085f && unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), -1507f, -2520f, 14f, 1) < 70f)
							{
								unk_0xA62957B100C8DE6D(10f, 2f, 3);
								iLocal_487[2] = 1;
							}
						}
					}
				}
				func_285();
				func_284();
				if (!unk_0xBC2EE32DE886BD08("SOL_3_PLANE_ON_FIRE"))
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_278))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
						{
							if (unk_0x050D073F91C5243C(iLocal_278))
							{
								if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 64280f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 72000f)
								{
									if (unk_0xED977E2AE2CB16EE(-1149.6f, -2323.7f, 22.5f, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1) < 130f)
									{
										unk_0xCAC4020CCF361AC8("SOL_3_PLANE_ON_FIRE");
									}
								}
							}
						}
					}
				}
				else if (unk_0xFC8BFE4B41177C22(iLocal_278))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_278))
						{
							if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 72500f)
							{
								unk_0xB43467C43086A6A1("SOL_3_PLANE_ON_FIRE");
							}
						}
					}
				}
				if (!unk_0xBC2EE32DE886BD08("SOL_3_EVENT_JET_LANDING"))
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_278))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
						{
							if (unk_0x050D073F91C5243C(iLocal_278))
							{
								if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 78000f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 85000f)
								{
									unk_0xCAC4020CCF361AC8("SOL_3_EVENT_JET_LANDING");
								}
							}
						}
					}
				}
				else if (unk_0xFC8BFE4B41177C22(iLocal_278))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_278))
						{
							if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 85500f)
							{
								unk_0xB43467C43086A6A1("SOL_3_EVENT_JET_LANDING");
							}
						}
					}
				}
				if (!unk_0xBC2EE32DE886BD08("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_278))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
						{
							if (unk_0x050D073F91C5243C(iLocal_278))
							{
								if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 100000f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 107000f)
								{
									unk_0xCAC4020CCF361AC8("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
								}
							}
						}
					}
				}
				else if (unk_0xFC8BFE4B41177C22(iLocal_278))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_278))
						{
							if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 107500f)
							{
								unk_0xB43467C43086A6A1("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
							}
						}
					}
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_278))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_278))
						{
							if (unk_0x157F3D5A4AAB2C50(iLocal_278) < 10000f)
							{
								func_283();
							}
						}
					}
				}
				if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
				{
					if (unk_0x050D073F91C5243C(iLocal_278))
					{
						if (unk_0x157F3D5A4AAB2C50(iLocal_278) < 30000f)
						{
							func_282(iLocal_278, unk_0x157F3D5A4AAB2C50(iLocal_278));
						}
					}
				}
				if (iLocal_408 == 0)
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_278))
						{
							if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 22000f)
							{
								unk_0x16088CC55E7F218A("TRV4_AIRPORT_ENTERED");
								iLocal_408 = 1;
							}
						}
					}
				}
				else if (iLocal_409 == 0)
				{
					if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -940.8253f, -2858.602f, 11.94482f, -1001.272f, -2823.764f, 21.00674f, 5.75f, 0, 1, 0))
					{
						unk_0x86A2BC11844DEEB3("TRV4_AIRPORT_ENTERED");
						iLocal_409 = 1;
					}
				}
				if (iLocal_341 == 0)
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
					{
						if (func_16(iLocal_278, unk_0x4A8C381C258A124D(), 1) < 170f && unk_0xCB5CAFF0A4A8B74B(iLocal_278))
						{
							if (unk_0xC450B06E5AAA0985(uLocal_299))
							{
								unk_0xFE54B8568B2ABD12(&uLocal_299);
							}
							if (unk_0xBC2EE32DE886BD08("SOL_3_DRIVE_TO_AIRPORT"))
							{
								unk_0xB43467C43086A6A1("SOL_3_DRIVE_TO_AIRPORT");
							}
							if (!unk_0xBC2EE32DE886BD08("SOL_3_MAIN_CHASE"))
							{
								unk_0xCAC4020CCF361AC8("SOL_3_MAIN_CHASE");
							}
							if (!unk_0xC450B06E5AAA0985(uLocal_297))
							{
								if (!unk_0x4FAFF4BCB7633475(iLocal_264))
								{
									uLocal_297 = unk_0x18E23E031A9B798F(iLocal_264);
									unk_0x6A52036D51C7E18E(uLocal_297, 1);
								}
							}
							unk_0xC3C7C9791CD79114();
							if (!unk_0xFBA523E6F8ACE541())
							{
								func_20("TRV4_CHASE2", 7500, 1);
								func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
								unk_0x86A2BC11844DEEB3("TRV4_CHASE");
								iLocal_341 = 1;
							}
						}
					}
					if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -536.0366f, -2102.793f, 5.672412f, -464.5755f, -2165.133f, 14.75182f, 65.25f, 0, 1, 0))
					{
						if (unk_0xC450B06E5AAA0985(uLocal_299))
						{
							unk_0xFE54B8568B2ABD12(&uLocal_299);
						}
						if (!unk_0xC450B06E5AAA0985(uLocal_297))
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_264))
							{
								uLocal_297 = unk_0x18E23E031A9B798F(iLocal_264);
								unk_0x6A52036D51C7E18E(uLocal_297, 1);
							}
						}
						unk_0xC3C7C9791CD79114();
						if (!unk_0xFBA523E6F8ACE541())
						{
							func_20("TRV4_CHASE2", 7500, 1);
							func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
							unk_0x86A2BC11844DEEB3("TRV4_CHASE");
							iLocal_341 = 1;
						}
					}
				}
				else if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
				{
					if (unk_0x050D073F91C5243C(iLocal_278))
					{
						if (unk_0x157F3D5A4AAB2C50(iLocal_278) < 15000f)
						{
						}
					}
				}
				if (iLocal_326 == 0)
				{
					unk_0xEC9DAA34BBB4658C(joaat("jet"));
					if (unk_0x6252BC0DD8A320DB(joaat("jet")))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
						{
							if (unk_0x050D073F91C5243C(iLocal_278))
							{
								if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 18490f)
								{
									iLocal_280[1] = unk_0x5779387E956077A6(joaat("jet"), -441.3117f, -3435.736f, 409.9454f, 148.3975f, 1, 1, 0);
									unk_0x88556DA0593A0748(iLocal_280[1], 2, "BB_Chase", 1);
									unk_0x55098D9E9AD58806(joaat("jet"));
									iLocal_326 = 1;
								}
							}
						}
					}
				}
				else if (unk_0xFC8BFE4B41177C22(iLocal_280[1]))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_280[1], 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_280[1]))
						{
							unk_0x206AB1458FD9522F(iLocal_280[1], fLocal_321);
							if (unk_0x157F3D5A4AAB2C50(iLocal_280[1]) > 20000f)
							{
								if (func_16(unk_0x4A8C381C258A124D(), iLocal_280[1], 1) > 200f && !unk_0xCB5CAFF0A4A8B74B(iLocal_280[1]))
								{
									unk_0x1D2DAF2A41FFC4A0(iLocal_280[1]);
									if (unk_0xFC8BFE4B41177C22(iLocal_276[1]))
									{
										unk_0x734A9F4537A31459(&(iLocal_276[1]));
									}
									unk_0x8C1F7D7A31B2A38E(&(iLocal_280[1]));
									iLocal_249 = unk_0x1DD05E817C89C737() + 1000;
								}
							}
							if (unk_0xFC8BFE4B41177C22(iLocal_280[1]))
							{
								if (unk_0x157F3D5A4AAB2C50(iLocal_280[1]) > 31543f)
								{
									unk_0x1D2DAF2A41FFC4A0(iLocal_280[1]);
									unk_0x5D7CD709B34C90F0(iLocal_280[1], 1);
								}
							}
						}
						else if (func_16(unk_0x4A8C381C258A124D(), iLocal_280[1], 1) > 200f && !unk_0xCB5CAFF0A4A8B74B(iLocal_280[1]))
						{
							if (unk_0xFC8BFE4B41177C22(iLocal_276[1]))
							{
								unk_0x734A9F4537A31459(&(iLocal_276[1]));
							}
							unk_0x8C1F7D7A31B2A38E(&(iLocal_280[1]));
							iLocal_249 = unk_0x1DD05E817C89C737() + 1000;
						}
					}
				}
				if (iLocal_432 == 0)
				{
					if (!unk_0xFC8BFE4B41177C22(iLocal_283))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
						{
							if (unk_0x050D073F91C5243C(iLocal_278))
							{
								if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 23000f)
								{
									unk_0xEC9DAA34BBB4658C(joaat("tanker"));
									if (unk_0x6252BC0DD8A320DB(joaat("tanker")))
									{
										iLocal_283 = unk_0x5779387E956077A6(joaat("tanker"), -1325f, -2779f, 14f, 233.9563f, 1, 1, 0);
										unk_0x55098D9E9AD58806(joaat("tanker"));
										unk_0xD133EF7430EDCD09(iLocal_283, 57, 57);
										iLocal_432 = 1;
									}
								}
							}
						}
					}
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_204[1]))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_204[1], 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_204[1]))
						{
							if (unk_0x157F3D5A4AAB2C50(iLocal_204[1]) > 13000f)
							{
								if (iLocal_370 == 0)
								{
									fLocal_123[1] = 0.5f;
									iLocal_269 = unk_0xFD5C5BBD1FE92BB7(iLocal_204[1], -1, 0);
									iLocal_370 = 1;
								}
							}
						}
					}
				}
				if (iLocal_332 == 0)
				{
					unk_0xCAB6FA8C9D44F90A(-1325f, -2779f, 14f);
					if (unk_0xFC8BFE4B41177C22(iLocal_204[1]))
					{
						if (iLocal_361 == 0)
						{
							unk_0xD133EF7430EDCD09(iLocal_204[1], 57, 57);
							iLocal_361 = 1;
						}
						if (unk_0xFC8BFE4B41177C22(iLocal_283))
						{
							if (!unk_0x1C2F771CDC87A3A5(iLocal_204[1], 0))
							{
								if (!unk_0x1C2F771CDC87A3A5(iLocal_283, 0))
								{
									if (unk_0x050D073F91C5243C(iLocal_204[1]))
									{
										unk_0xF89624E52FCBE454(iLocal_204[1], iLocal_283, 1065353216);
									}
								}
							}
						}
					}
					if (unk_0xFC8BFE4B41177C22(iLocal_283))
					{
						if (unk_0xFC8BFE4B41177C22(iLocal_278))
						{
							if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
							{
								if (unk_0x050D073F91C5243C(iLocal_278))
								{
									if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 41430f)
									{
										unk_0x837D67618BF89034(iLocal_283, 1, 1);
										iLocal_332 = 1;
									}
								}
							}
						}
					}
				}
				else if (iLocal_373 == 0)
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_204[1], 0))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
						{
							if (unk_0x050D073F91C5243C(iLocal_278))
							{
								if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 42700f)
								{
									if (unk_0xFC8BFE4B41177C22(iLocal_269))
									{
										if (!unk_0x4FAFF4BCB7633475(iLocal_269))
										{
											unk_0xD25E9BDC14A0B649(iLocal_269, 0, 0);
										}
									}
									if (unk_0x050D073F91C5243C(iLocal_204[1]))
									{
										unk_0x1D2DAF2A41FFC4A0(iLocal_204[1]);
										iLocal_373 = 1;
									}
								}
							}
						}
					}
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_278))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_278))
						{
							if (iLocal_467 == 0)
							{
								if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 38000f)
								{
									if (unk_0xFC8BFE4B41177C22(iLocal_204[1]) && unk_0xD9F5E1FEFD1329E4(iLocal_204[1], 0))
									{
										unk_0xBD618A73193F9982(-1, "Trevor_4_747_Tanker_Horn", iLocal_204[1], 0, 0, 0);
										iLocal_467 = 1;
									}
								}
							}
							if (iLocal_363[1] == 0)
							{
								if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 39000f)
								{
									if (!unk_0xBC2EE32DE886BD08("SOL_3_EVENT_TANKER_CRASH"))
									{
										unk_0xCAC4020CCF361AC8("SOL_3_EVENT_TANKER_CRASH");
									}
									if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
									{
										unk_0xD0F1DB0E50B367AD(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0, 1, 1, 0, 0, 0, 0, 0);
									}
									iLocal_363[1] = 1;
								}
							}
							if (iLocal_403 == 0)
							{
								if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 41611f)
								{
									if (unk_0xFC8BFE4B41177C22(iLocal_283))
									{
										if (!unk_0x1C2F771CDC87A3A5(iLocal_283, 0))
										{
											if (unk_0xFC8BFE4B41177C22(iLocal_204[7]))
											{
												if (!unk_0x1C2F771CDC87A3A5(iLocal_204[7], 0))
												{
													unk_0xBD618A73193F9982(-1, "Trevor_4_747_Tanker_Explosion", iLocal_283, 0, 0, 0);
													unk_0x1D2DAF2A41FFC4A0(iLocal_204[7]);
													unk_0xAE89444B15234CCE(iLocal_204[7], 1, 0);
													unk_0xAE89444B15234CCE(iLocal_283, 1, 0);
													unk_0xD2FD15A3D9DEE4CC(-1221f, -2852f, 17f, 14, 1f, 1, 0, 1065353216, 0);
													unk_0xD2FD15A3D9DEE4CC(-1212f, -2855f, 14.34f, 14, 1f, 1, 0, 1065353216, 0);
													unk_0x68298CA6191CDFDB(&iLocal_283);
													unk_0x68298CA6191CDFDB(&(iLocal_204[1]));
													iLocal_403 = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_364[1] == 0)
							{
								if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 43204f)
								{
									if (unk_0xBC2EE32DE886BD08("SOL_3_EVENT_TANKER_CRASH"))
									{
										unk_0xB43467C43086A6A1("SOL_3_EVENT_TANKER_CRASH");
									}
									unk_0x48FA483FE4F18CFE("SCRIPT\Trv_4_747_Tanker_Explosion");
									if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
									{
										unk_0xD0F1DB0E50B367AD(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0, 0, 0, 0, 0, 0, 0, 0);
									}
									iLocal_364[1] = 1;
								}
							}
						}
					}
				}
				if (!unk_0xBC2EE32DE886BD08("SOL_3_HELI_TAKEOFF"))
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_204[0]))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_204[0], 0))
						{
							if (unk_0xFC8BFE4B41177C22(iLocal_278))
							{
								if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
								{
									if (unk_0x050D073F91C5243C(iLocal_278))
									{
										if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 36000f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 40000f)
										{
											unk_0xCAC4020CCF361AC8("SOL_3_HELI_TAKEOFF");
										}
									}
								}
							}
						}
					}
				}
				else if (unk_0xFC8BFE4B41177C22(iLocal_204[0]))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_204[0], 0))
					{
						if (unk_0xFC8BFE4B41177C22(iLocal_278))
						{
							if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
							{
								if (unk_0x050D073F91C5243C(iLocal_278))
								{
									if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 43204f)
									{
										unk_0xB43467C43086A6A1("SOL_3_HELI_TAKEOFF");
									}
								}
							}
						}
					}
				}
				if (iLocal_325 == 0)
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_278))
						{
							if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 60500f)
							{
								unk_0xEC9DAA34BBB4658C(joaat("jet"));
							}
							if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 66500f)
							{
								if (unk_0x6252BC0DD8A320DB(joaat("jet")))
								{
									iLocal_280[0] = unk_0x5779387E956077A6(joaat("jet"), -1119.072f, -1864.548f, -8.2205f, 148.3975f, 1, 1, 0);
									unk_0x935364B4448CD584(iLocal_280[0], 1);
									unk_0xA1C03303EC67320B(iLocal_280[0], 2);
									unk_0x88556DA0593A0748(iLocal_280[0], 35, "BB_Chase", 1);
									unk_0x8BCD7C11D27FB9A1(iLocal_280[0], 3491f);
									unk_0x55098D9E9AD58806(joaat("jet"));
									iLocal_325 = 1;
								}
							}
						}
					}
				}
				else if (unk_0xFC8BFE4B41177C22(iLocal_280[0]))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_280[0], 0))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
						{
							if (unk_0x050D073F91C5243C(iLocal_278))
							{
								if (unk_0x050D073F91C5243C(iLocal_280[0]))
								{
									unk_0x206AB1458FD9522F(iLocal_280[0], fLocal_321);
									if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 80000f)
									{
										if (func_16(iLocal_280[0], unk_0x4A8C381C258A124D(), 1) > 200f)
										{
											unk_0x1D2DAF2A41FFC4A0(iLocal_280[0]);
										}
									}
								}
								else if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 80000f)
								{
									if (func_16(iLocal_280[0], unk_0x4A8C381C258A124D(), 1) > 200f && !unk_0xCB5CAFF0A4A8B74B(iLocal_280[0]))
									{
										if (unk_0xFC8BFE4B41177C22(iLocal_276[0]))
										{
											unk_0x734A9F4537A31459(&(iLocal_276[0]));
										}
										unk_0x8C1F7D7A31B2A38E(&(iLocal_280[0]));
										iLocal_249 = unk_0x1DD05E817C89C737() + 1000;
									}
								}
							}
						}
					}
				}
				if (iLocal_392 == 0)
				{
					if (iLocal_391 == 0)
					{
						if (unk_0xFC8BFE4B41177C22(iLocal_278))
						{
							if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
							{
								if (unk_0x050D073F91C5243C(iLocal_278))
								{
									if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 50000f)
									{
										unk_0xEC9DAA34BBB4658C(joaat("s_m_y_airworker"));
										unk_0x80813AC549A1E8AE("misstrevor4");
										if (unk_0x6252BC0DD8A320DB(joaat("s_m_y_airworker")))
										{
											iLocal_270 = unk_0xB1DBFEB95C0EFB88(26, joaat("s_m_y_airworker"), -1170.541f, -2507.111f, 12.9455f, 218.3035f, 1, 1);
											iLocal_271 = unk_0xB1DBFEB95C0EFB88(26, joaat("s_m_y_airworker"), -1168.264f, -2508.715f, 12.9455f, 70.7735f, 1, 1);
											unk_0xAAA71DD7E9059338(iLocal_270, 1);
											unk_0xAAA71DD7E9059338(iLocal_271, 1);
											unk_0x55098D9E9AD58806(joaat("s_m_y_airworker"));
											iLocal_391 = 1;
										}
									}
								}
							}
						}
					}
					else if (unk_0xFC8BFE4B41177C22(iLocal_278))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
						{
							if (unk_0x050D073F91C5243C(iLocal_278))
							{
								if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 58000f)
								{
									if (!unk_0x4FAFF4BCB7633475(iLocal_270))
									{
										if (unk_0xE100DD4F82A51BDE("misstrevor4"))
										{
											if (!unk_0x13CCB1AD131C1082(iLocal_270, "misstrevor4", "dive_clear_goon1", 3))
											{
												unk_0x10425721983AE158(iLocal_270, "misstrevor4", "dive_clear_goon1", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									if (!unk_0x4FAFF4BCB7633475(iLocal_271))
									{
										if (unk_0xE100DD4F82A51BDE("misstrevor4"))
										{
											if (!unk_0x13CCB1AD131C1082(iLocal_271, "misstrevor4", "dive_clear_goon2", 3))
											{
												unk_0x10425721983AE158(iLocal_271, "misstrevor4", "dive_clear_goon2", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									iLocal_392 = 1;
								}
							}
						}
					}
				}
				else if (unk_0xFC8BFE4B41177C22(iLocal_270))
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_270))
					{
						if (!unk_0x13CCB1AD131C1082(iLocal_270, "misstrevor4", "dive_clear_goon1", 3))
						{
							if (unk_0xFC8BFE4B41177C22(iLocal_271))
							{
								if (!unk_0x4FAFF4BCB7633475(iLocal_271))
								{
									if (!unk_0x13CCB1AD131C1082(iLocal_271, "misstrevor4", "dive_clear_goon2", 3))
									{
										unk_0x268BE77F77533D03("misstrevor4");
										unk_0xF09E30AF1B8FB379(&iLocal_270);
										unk_0xF09E30AF1B8FB379(&iLocal_271);
									}
								}
							}
						}
					}
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_204[8]))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_204[8], 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_204[8]))
						{
							if (unk_0xFC8BFE4B41177C22(iLocal_278))
							{
								if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
								{
									if (unk_0x050D073F91C5243C(iLocal_278))
									{
										if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 50200f)
										{
											if (iLocal_328 == 0)
											{
												unk_0x206AB1458FD9522F(iLocal_204[8], 1f);
												if (func_16(unk_0x4A8C381C258A124D(), iLocal_204[8], 1) < 100f)
												{
													unk_0xE6AC149D1121535D(0.3f);
													iLocal_366 = 0;
													if (!unk_0xBC2EE32DE886BD08("SOL_3_CAR_JET_ENGINE"))
													{
														unk_0xCAC4020CCF361AC8("SOL_3_CAR_JET_ENGINE");
													}
													unk_0xB2BB7DF97FC211F9(iLocal_204[8], 0f, 0f, 0f, 1, 1500, 500, 100);
												}
												unk_0x788F35D395511DFE(iLocal_204[8], 1, 1);
												unk_0x89E9F387C190061F(iLocal_204[8], 1, 0);
												unk_0xBD618A73193F9982(iLocal_255, "Trevor_4_747_Flying_Car", iLocal_204[8], 0, 0, 0);
												settimerb(0);
												iLocal_328 = 1;
											}
										}
										if (iLocal_328 == 1)
										{
											if (timerb() > 662)
											{
												if (unk_0xBC2EE32DE886BD08("SOL_3_CAR_JET_ENGINE"))
												{
													unk_0xB43467C43086A6A1("SOL_3_CAR_JET_ENGINE");
												}
												unk_0xE6AC149D1121535D(1f);
												iLocal_366 = 1;
											}
											if (timerb() > 1872)
											{
												unk_0x1D2DAF2A41FFC4A0(iLocal_204[8]);
											}
										}
									}
								}
							}
						}
						else if (unk_0xFC8BFE4B41177C22(iLocal_278))
						{
							if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
							{
								if (unk_0x050D073F91C5243C(iLocal_278))
								{
									if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 50200f)
									{
										if (!unk_0x3F18810075C77D41(iLocal_204[8]))
										{
											if (iLocal_378 == 0)
											{
												unk_0xBD618A73193F9982(iLocal_255, "Trevor_4_747_Carsplosion", iLocal_204[8], 0, 0, 0);
												unk_0xAE89444B15234CCE(iLocal_204[8], 1, 0);
												iLocal_378 = 1;
											}
										}
									}
								}
							}
						}
					}
					else if (iLocal_366 == 0)
					{
						if (iLocal_328 == 1)
						{
							if (timerb() > 662)
							{
								if (unk_0xBC2EE32DE886BD08("SOL_3_CAR_JET_ENGINE"))
								{
									unk_0xB43467C43086A6A1("SOL_3_CAR_JET_ENGINE");
								}
								unk_0xE6AC149D1121535D(1f);
								iLocal_366 = 1;
							}
						}
					}
				}
				else if (iLocal_366 == 0)
				{
					if (iLocal_328 == 1)
					{
						if (timerb() > 662)
						{
							if (unk_0xBC2EE32DE886BD08("SOL_3_CAR_JET_ENGINE"))
							{
								unk_0xB43467C43086A6A1("SOL_3_CAR_JET_ENGINE");
							}
							unk_0xE6AC149D1121535D(1f);
							iLocal_366 = 1;
						}
					}
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_204[11]))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_204[11], 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_204[11]))
						{
							if (unk_0xFC8BFE4B41177C22(iLocal_278))
							{
								if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
								{
									if (unk_0x050D073F91C5243C(iLocal_278))
									{
										if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 82683f)
										{
											if (iLocal_329 == 0)
											{
												unk_0xBD618A73193F9982(iLocal_257, "Trevor_4_747_Flying_Car", iLocal_204[11], 0, 0, 0);
												iLocal_329 = 1;
												settimerb(0);
											}
											if (iLocal_329 == 1)
											{
												if (timerb() > 1872)
												{
													if (!unk_0x3F18810075C77D41(iLocal_204[11]))
													{
														unk_0x1D2DAF2A41FFC4A0(iLocal_204[11]);
													}
												}
											}
										}
									}
								}
							}
						}
						else if (iLocal_329 == 1)
						{
							if (iLocal_379 == 0)
							{
								if (!unk_0x3F18810075C77D41(iLocal_204[11]))
								{
									unk_0xBD618A73193F9982(iLocal_257, "Trevor_4_747_Carsplosion", iLocal_204[11], 0, 0, 0);
									unk_0xAE89444B15234CCE(iLocal_204[11], 1, 0);
									iLocal_379 = 1;
								}
							}
						}
					}
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_204[12]))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_204[12], 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_204[12]))
						{
							if (unk_0xFC8BFE4B41177C22(iLocal_278))
							{
								if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
								{
									if (unk_0x050D073F91C5243C(iLocal_278))
									{
										if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 82463f)
										{
											if (iLocal_330 == 0)
											{
												unk_0xBD618A73193F9982(iLocal_258, "Trevor_4_747_Flying_Car", iLocal_204[12], 0, 0, 0);
												iLocal_330 = 1;
												settimerb(0);
											}
											if (iLocal_330 == 1)
											{
												if (timerb() > 1000)
												{
													if (!unk_0x3F18810075C77D41(iLocal_204[12]))
													{
														unk_0x1D2DAF2A41FFC4A0(iLocal_204[12]);
													}
												}
											}
										}
									}
								}
							}
							if (iLocal_463 == 0)
							{
								if (unk_0x050D073F91C5243C(iLocal_204[12]))
								{
									if (unk_0x157F3D5A4AAB2C50(iLocal_204[12]) > 22216f && func_16(iLocal_279, iLocal_204[12], 1) < 90f)
									{
										unk_0xE6AC149D1121535D(0.3f);
										unk_0xB2BB7DF97FC211F9(iLocal_204[12], 0f, 0f, 0f, 1, 2000, 1000, 500);
										iLocal_245 = unk_0x1DD05E817C89C737();
										iLocal_463 = 1;
									}
								}
							}
						}
						else if (iLocal_330 == 1)
						{
							if (iLocal_380 == 0)
							{
								if (!unk_0x3F18810075C77D41(iLocal_204[12]))
								{
									unk_0xBD618A73193F9982(iLocal_258, "Trevor_4_747_Carsplosion", iLocal_204[12], 0, 0, 0);
									unk_0xAE89444B15234CCE(iLocal_204[12], 1, 0);
									iLocal_380 = 1;
								}
							}
						}
					}
				}
				if (iLocal_463 == 1)
				{
				}
				if (iLocal_462 == 0 && iLocal_463 == 1)
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_204[12]))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_204[12], 0))
						{
							Local_317 = { unk_0xD1A6A821F5AC81DB(iLocal_204[12], 1) };
						}
					}
					Local_318 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
					if (unk_0x1DD05E817C89C737() > iLocal_245 + 1579 || Local_318.f_1 < Local_317.f_1)
					{
						unk_0xE6AC149D1121535D(1f);
						unk_0x3C44EF9027A21847(0);
						iLocal_462 = 1;
					}
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_278))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_278))
						{
							if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 105000f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 113000f)
							{
								unk_0xCAB6FA8C9D44F90A(-1172.3f, -3027.5f, 13.3f);
							}
						}
					}
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_204[13]))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_204[13], 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_204[13]))
						{
							if (unk_0xFC8BFE4B41177C22(iLocal_278))
							{
								if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
								{
									if (unk_0x050D073F91C5243C(iLocal_278))
									{
										if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 108830f)
										{
											unk_0xD2F21CFC29C914AE(iLocal_204[13], 0);
											unk_0x788F35D395511DFE(iLocal_204[13], 1, 1);
											unk_0x11C125313CB8ADA2(iLocal_204[13], 0);
											settimera(0);
											iLocal_431 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_431 == 1)
						{
							unk_0xD25E9BDC14A0B649(iLocal_204[13], 0, 0);
							unk_0xBE144113897EE678(iLocal_204[13], 1);
							unk_0xD25E9BDC14A0B649(unk_0xFD5C5BBD1FE92BB7(iLocal_204[13], -1, 0), 0, 0);
						}
					}
				}
				if (iLocal_427 == 0)
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_204[5]))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_204[5], 0))
						{
							unk_0xA1C03303EC67320B(iLocal_204[5], 0);
							unk_0x935364B4448CD584(iLocal_204[5], 1);
							iLocal_427 = 1;
						}
					}
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_204[15]))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_204[15], 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_204[15]))
						{
							if (unk_0xFC8BFE4B41177C22(iLocal_278))
							{
								if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
								{
									if (unk_0x050D073F91C5243C(iLocal_278))
									{
										if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 104989f)
										{
											unk_0x1D2DAF2A41FFC4A0(iLocal_204[15]);
											func_280(iLocal_204[15], -0.04f, -2.21f, 0.887f, 0f, -1f, 0f, 5f, 1);
											func_280(iLocal_204[15], 0.44f, -0.802f, 15.303f, 0f, 0f, 0f, 12f, 1);
											unk_0xAE89444B15234CCE(iLocal_204[15], 1, 0);
											unk_0xA62957B100C8DE6D(4f, 4f, 4);
											unk_0xBD618A73193F9982(-1, "Trevor_4_747_Carsplosion", iLocal_204[15], 0, 0, 0);
											unk_0x48FA483FE4F18CFE("SCRIPT\Trv_4_747_Cop_Cars");
										}
									}
								}
							}
						}
					}
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_278))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_278))
						{
							if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 112000f)
							{
								unk_0xD04A772C411165F2("BB_MOLLY_2");
								unk_0x80813AC549A1E8AE("misssolomon_3");
								unk_0x80813AC549A1E8AE("move_f@film_reel_arms");
								iLocal_224 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_439 == 0)
				{
					if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, 1, 0))
					{
						iLocal_439 = 1;
					}
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_288[0]))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_288[0], 0))
					{
						unk_0x001B008A010F2FE6(iLocal_288[0], 0);
						unk_0x68298CA6191CDFDB(&(iLocal_288[0]));
					}
				}
				if (unk_0xFC8BFE4B41177C22(iLocal_275[0]))
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_275[0]))
					{
						unk_0x974022927CB47E68(iLocal_275[0]);
						unk_0xF09E30AF1B8FB379(&(iLocal_275[0]));
					}
				}
				if (iLocal_394 == 0)
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_278))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
						{
							if (unk_0x050D073F91C5243C(iLocal_278))
							{
								if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 115000f)
								{
									unk_0xD04A772C411165F2("Trev4_5");
									unk_0xEC9DAA34BBB4658C(joaat("prop_cs_film_reel_01"));
									if (!unk_0x787F8EE1F6FBDC6D())
									{
										unk_0x4A3280817398D754(-930.7f, -2916.9f, 13.4f, 10f, 0);
									}
									iLocal_394 = 1;
								}
							}
						}
					}
				}
				if (iLocal_405 == 0)
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_278))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
						{
							if (unk_0x050D073F91C5243C(iLocal_278))
							{
								if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 120000f)
								{
									if (!unk_0xBC2EE32DE886BD08("SOL_3_ARRIVE_AT_HANGAR"))
									{
										unk_0xCAC4020CCF361AC8("SOL_3_ARRIVE_AT_HANGAR");
									}
									unk_0x53152C1272227778(iLocal_278);
								}
								if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 125513f)
								{
									unk_0x1D2DAF2A41FFC4A0(iLocal_278);
									unk_0x5D7CD709B34C90F0(iLocal_278, 1);
									func_279();
									unk_0x93586F94C370857F();
									unk_0x79CA429D8B4B057A(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, 1, 0);
									unk_0xB43467C43086A6A1("TREVOR_4_MAIN_CHASE");
									if (!unk_0x78411E34CF90EA8C(uLocal_303))
									{
										uLocal_303 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 0);
									}
									if (!unk_0x78411E34CF90EA8C(uLocal_302))
									{
										uLocal_302 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 0);
									}
									iLocal_236 = unk_0x1DD05E817C89C737();
									unk_0x0A0A06C514052E80(1);
									unk_0xF6ECB54A7941386F(0);
									iLocal_224 = 2;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				Local_318 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
				unk_0x53152C1272227778(iLocal_278);
				if (iLocal_439 == 0)
				{
					if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, 1, 0))
					{
						iLocal_439 = 1;
					}
				}
				if (iLocal_405 == 0)
				{
					if (unk_0xED977E2AE2CB16EE(Local_318, -930.7f, -2916.9f, 13.4f, 1) < 45f)
					{
						iLocal_224 = 3;
					}
					if (unk_0xFC8BFE4B41177C22(iLocal_278))
					{
						if (unk_0xCB5CAFF0A4A8B74B(iLocal_278))
						{
							if (iLocal_439 == 1)
							{
								iLocal_224 = 3;
							}
						}
					}
					if (unk_0x1DD05E817C89C737() > iLocal_236 + 5000 && iLocal_439 == 1)
					{
						iLocal_224 = 3;
					}
				}
				break;
			
			case 3:
				if (unk_0x787F8EE1F6FBDC6D())
				{
					unk_0x6981C3213B841071();
				}
				unk_0x53152C1272227778(iLocal_278);
				if (!unk_0x4FAFF4BCB7633475(iLocal_264))
				{
					if (unk_0x13CCB1AD131C1082(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
					{
					}
				}
				if (iLocal_415 == 0)
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_278))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
						{
							if (!unk_0x050D073F91C5243C(iLocal_278))
							{
								if (unk_0xE100DD4F82A51BDE("misssolomon_3"))
								{
									if (!unk_0x4FAFF4BCB7633475(iLocal_264))
									{
										if (!unk_0xFC8BFE4B41177C22(iLocal_295))
										{
											if (unk_0x6252BC0DD8A320DB(joaat("prop_cs_film_reel_01")))
											{
												iLocal_295 = unk_0x4E55EAB577C13329(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, 1, 1, 0);
												unk_0x4D306DD94DD6FDBA(iLocal_295, iLocal_264, unk_0x72F7E39FB49FC0BA(iLocal_264, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
											}
										}
										if (!unk_0x13CCB1AD131C1082(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											unk_0x5D7CD709B34C90F0(iLocal_278, 0);
											uLocal_250 = unk_0x2EC137C692A52458(-929.492f, -2913.472f, 14.16f, 0f, 0f, -28.96f, 2);
											unk_0x381D671BCFC294D9(iLocal_278, uLocal_250, "molly_escapes_car_car", "misssolomon_3", 8f, -8f, 0, 1000f);
											unk_0x3DA436E63AB0F541(iLocal_264, uLocal_250, "misssolomon_3", "molly_escapes_car_mol", 1000f, -1000f, 5, 0, 1148846080, 0);
											unk_0xA7C372501A8A3B23(uLocal_250, 0);
											unk_0x86A2BC11844DEEB3("TRV4_EXIT_CARS");
										}
										else
										{
											iLocal_415 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_417 == 0)
				{
					if (iLocal_415 == 1)
					{
						if (!unk_0x4FAFF4BCB7633475(iLocal_264))
						{
							if (unk_0x5105BE70DEF1F5FB(iLocal_264, -937.6656f, -2927.864f, 12.77007f, -934.8479f, -2929.484f, 14.46523f, 1.5f, 0, 1, 0))
							{
								if (unk_0x13CCB1AD131C1082(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									unk_0xC0086E5CBF13BBF7(iLocal_264, -1000f, 1);
								}
								unk_0x19626F992DC71FB9(iLocal_264);
								unk_0xAAA71DD7E9059338(iLocal_264, 1);
								unk_0xB2BD5837A8D3CEDA(iLocal_264, -934.8388f, -2932.831f, 12.9649f, 1, 0, 0, 1);
								unk_0x5C96CEA06531AB03(iLocal_264, 236.5739f);
								unk_0x7FD62C74ABB26599(iLocal_264, "BB_MOLLY_2", 1, 4, -1);
								if (unk_0xE100DD4F82A51BDE("move_f@film_reel_arms"))
								{
									unk_0x10425721983AE158(iLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
								}
								iLocal_417 = 1;
							}
						}
					}
				}
				if (iLocal_405 == 0)
				{
					if (iLocal_425 == 0)
					{
						if (iLocal_424 == 0)
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_264))
							{
								if (unk_0x13CCB1AD131C1082(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									if (unk_0xBD3B265153D3BA2D(uLocal_250) > 0.18f || unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), -930.7f, -2916.9f, 13.4f, 1) < 10f)
									{
										iLocal_225 = 0;
										iLocal_424 = 1;
									}
								}
							}
						}
						while (iLocal_424 == 1)
						{
							unk_0xECF30459397D5190("M_LegalTrouble", 0);
							switch (iLocal_225)
							{
								case 0:
									unk_0xA3774254665BAA82(uLocal_303, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294743f, 28.05799f, 34.66404f, 0, 1, 1, 2);
									unk_0xA3774254665BAA82(uLocal_302, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294742f, 32.59915f, 34.66404f, 0, 1, 1, 2);
									unk_0xB56F35D8A770F80F(uLocal_302, uLocal_303, 4000, 1, 1);
									unk_0x37B894853929BF1A(0);
									unk_0x747786364137DC63(0);
									unk_0xE37AF9002E782BA0(true, 0, 3000, 1, 0, 0);
									if (unk_0xFC8BFE4B41177C22(iLocal_287))
									{
										unk_0x8C1F7D7A31B2A38E(&iLocal_287);
									}
									if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
									{
										unk_0xB2BD5837A8D3CEDA(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), -918.6157f, -2926.646f, 12.9667f, 1, 0, 0, 1);
										unk_0x5C96CEA06531AB03(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 47.9465f);
									}
									else
									{
										unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -918.6157f, -2926.646f, 12.9667f, 1, 0, 0, 1);
										unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 47.9465f);
									}
									if (!unk_0x4FAFF4BCB7633475(iLocal_264))
									{
										func_17(&uLocal_490, 2, iLocal_264, "MOLLY", 0, 1);
										unk_0x711F9BE10FCB4E6B(iLocal_264, 1);
									}
									unk_0xA62957B100C8DE6D(4f, 0f, 3);
									unk_0xB9784D6C7219851B(4);
									unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), false, 0);
									iLocal_451 = 0;
									iLocal_225++;
									break;
								
								case 1:
									if (!unk_0x4FAFF4BCB7633475(iLocal_264))
									{
										if (unk_0x13CCB1AD131C1082(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if (iLocal_451 == 0)
											{
												if (unk_0xBD3B265153D3BA2D(uLocal_250) > 0.3f)
												{
													if (func_278(&uLocal_490, "T1M4AUD", "SOL3_GETOUT", 7, 0, 0, 0))
													{
														unk_0xA62957B100C8DE6D(6f, 7f, 4);
														iLocal_451 = 1;
													}
												}
											}
											if (unk_0xBD3B265153D3BA2D(uLocal_250) > 0.5f)
											{
												unk_0xA3774254665BAA82(uLocal_303, -926.0932f, -2916.891f, 14.47074f, -3.471637f, 1.294743f, 125.8315f, 34.66404f, 0, 1, 1, 2);
												unk_0xA3774254665BAA82(uLocal_302, -926.0932f, -2916.891f, 14.47074f, -3.471636f, 1.294743f, 135.4584f, 34.66404f, 0, 1, 1, 2);
												unk_0xB56F35D8A770F80F(uLocal_302, uLocal_303, 4000, 1, 1);
												iLocal_248 = unk_0x1DD05E817C89C737();
												iLocal_225++;
											}
										}
									}
									break;
								
								case 2:
									if (!unk_0x4FAFF4BCB7633475(iLocal_264))
									{
										if (unk_0x13CCB1AD131C1082(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if ((iLocal_248 != -1 && unk_0xBCF87EE3DC296C2A(0) == 4) && (unk_0x1DD05E817C89C737() - iLocal_248) >= 2230)
											{
												unk_0xDCAFFD08A08087EB("CamPushInNeutral", 0, 0);
												unk_0xBF3D28CA44F3BE2D(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
												iLocal_248 = -1;
											}
											if (unk_0xBD3B265153D3BA2D(uLocal_250) > 0.85f)
											{
												unk_0x747786364137DC63(1);
												unk_0x37B894853929BF1A(1);
												unk_0xE37AF9002E782BA0(false, 0, 3000, 1, 0, 0);
												unk_0x64BB72494B9DF6DC(0f);
												iLocal_262 = 346732587;
												unk_0xB80B2E08713B8BC6(iLocal_262, joaat("v_ilev_ss_door5_r"), -935.641f, -2927.185f, 14.0945f, 1, 1, 0);
												unk_0x3A15B21067339E98(iLocal_262, 1f, 0, 1);
												unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), true, 0);
												if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
												{
													unk_0x23EB5FC236231892(unk_0x4A8C381C258A124D(), unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0);
													if (unk_0xBCF87EE3DC296C2A(1) != 4 && unk_0xBCF87EE3DC296C2A(0) == 4)
													{
														unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 1, 0);
													}
												}
												unk_0x711F9BE10FCB4E6B(iLocal_264, 0);
												unk_0x3B327805C3CAF8DC();
												unk_0xA62957B100C8DE6D(0f, 4f, 3);
												iLocal_237 = unk_0x1DD05E817C89C737();
												iLocal_424 = 0;
												iLocal_425 = 1;
												iLocal_225++;
											}
										}
									}
									break;
							}
							wait(0);
						}
					}
				}
				if (iLocal_425 == 1)
				{
					unk_0xEBB2809684978887(iLocal_262, 5, 0, 1);
					if (iLocal_468 == 0)
					{
						if (unk_0xFC8BFE4B41177C22(iLocal_264))
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_264))
							{
								if (unk_0x65FFA94B82A71741(iLocal_264, -935.3f, -2927.3f, 13f, 1.5f, 1.5f, 2f, 0, 1, 0))
								{
									unk_0xF37CDE164C892195(-1, "Trevor_4_747_Molly_Open_Doors", -935.1f, -2927.6f, 13.2f, 0, 0, 0, 0);
									iLocal_468 = 1;
								}
							}
						}
					}
				}
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					if (unk_0xBC2EE32DE886BD08("SOL_3_MAIN_CHASE"))
					{
						unk_0xB43467C43086A6A1("SOL_3_MAIN_CHASE");
					}
					if (unk_0xBC2EE32DE886BD08("SOL_3_ARRIVE_AT_HANGAR"))
					{
						unk_0xB43467C43086A6A1("SOL_3_ARRIVE_AT_HANGAR");
					}
					if (!unk_0xBC2EE32DE886BD08("SOL_3_ON_FOOT_CHASE"))
					{
						unk_0xCAC4020CCF361AC8("SOL_3_ON_FOOT_CHASE");
					}
				}
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					func_264();
				}
				if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -929.7908f, -2928.213f, 12.19499f, -935.7283f, -2924.685f, 15.44832f, 4.75f, 0, 1, 1))
				{
					if (iLocal_417 == 0)
					{
						if (!unk_0x4FAFF4BCB7633475(iLocal_264))
						{
							if (unk_0x13CCB1AD131C1082(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
							{
								unk_0xC0086E5CBF13BBF7(iLocal_264, -1000f, 1);
							}
							unk_0x19626F992DC71FB9(iLocal_264);
							unk_0xAAA71DD7E9059338(iLocal_264, 1);
							unk_0xB2BD5837A8D3CEDA(iLocal_264, -934.8388f, -2932.831f, 12.9649f, 1, 0, 0, 1);
							unk_0x5C96CEA06531AB03(iLocal_264, 236.5739f);
							unk_0x7FD62C74ABB26599(iLocal_264, "BB_MOLLY_2", 1, 4, -1);
							if (unk_0xE100DD4F82A51BDE("move_f@film_reel_arms"))
							{
								unk_0x10425721983AE158(iLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
							}
							iLocal_417 = 1;
						}
					}
					if (unk_0xFC8BFE4B41177C22(iLocal_284))
					{
						unk_0x8C1F7D7A31B2A38E(&iLocal_284);
					}
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 5;
				}
				break;
			}
	}
}

void func_264()
{
	if (iLocal_401 == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_204[14]))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_204[14], 0))
			{
				iLocal_272 = unk_0xFD5C5BBD1FE92BB7(iLocal_204[14], -1, 0);
				unk_0xB41DEC3AAC1AA107(iLocal_272, joaat("weapon_pistol"), 1000, 1, 1);
				unk_0xEE0BCDB1B5E36BCB(iLocal_272, 1, 0);
				unk_0xAAA71DD7E9059338(iLocal_272, 1);
				unk_0xC652B7E19CE29859(iLocal_272, 5);
				unk_0xD25E9BDC14A0B649(iLocal_272, 150, 0);
				func_17(&uLocal_490, 3, iLocal_272, "TREV4POLICE3", 0, 1);
			}
		}
		iLocal_401 = 1;
	}
	else if (iLocal_400 == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_272))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_272))
			{
				unk_0x974022927CB47E68(iLocal_272);
				unk_0xBB4D4E549F8E6E8C(iLocal_272, unk_0xD1A6A821F5AC81DB(iLocal_272, 1), 5f, 0, 0);
				unk_0xB5396F1FB088FE38(&uLocal_304);
				unk_0x092B9247AF00F5CF(0, 0, 0);
				unk_0x3D948B91131AF671(0, unk_0x4A8C381C258A124D(), 5000, 1);
				unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
				unk_0x93C0674FC00824D0(uLocal_304);
				unk_0x4BD42B0527065BB6(iLocal_272, uLocal_304);
				unk_0xD0557B139A542F12(&uLocal_304);
				iLocal_400 = 1;
			}
		}
	}
	else if (iLocal_434 == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_272))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_272))
			{
				if (!unk_0x7F420695E3F776FB(iLocal_272, 0) && func_13(unk_0x4A8C381C258A124D(), iLocal_272) < 20f)
				{
					if (!func_277())
					{
						if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
						{
							func_17(&uLocal_490, 4, iLocal_272, "SOL3COP", 0, 1);
							if (func_265(&uLocal_490, "T1M4AUD", "SOL3_MOLPOL", "SOL3_MOLPOL_2", 7, 0, 0))
							{
								iLocal_434 = 1;
							}
						}
					}
				}
			}
		}
	}
}

bool func_265(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_276(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21732 = 0;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 1;
	Global_22718 = 0;
	Global_22722 = 0;
	StringCopy(&Global_22729, sParam3, 24);
	Global_2883585 = 0;
	return func_266(sParam2, iParam4, 0);
}

int func_266(char* sParam0, int iParam1, bool bParam2)
{
	Global_21726 = 0;
	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam1 > Global_21727)
			{
				if (Global_21732 == 0)
				{
					unk_0x0F15249D24BC5ADA(0);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
					Global_21736 = 0;
					Global_21735 = 0;
					Global_20382 = 0;
				}
				else
				{
					func_231();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1F9EB85925C3ECD7())
		{
			return 0;
		}
		if (func_275(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_274();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_22721 = Global_22722;
		Global_21344.f_370 = Global_22714;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21721 = Global_21722;
		if (Global_21731)
		{
			unk_0x8744D2E3FC95740E(&Global_8253, 20);
			unk_0x8744D2E3FC95740E(&Global_8254, 17);
			unk_0x8744D2E3FC95740E(&Global_8255, false);
			if (bParam2)
			{
				func_273();
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20383.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20349 == 1)
			{
				return 0;
			}
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (func_272())
				{
					return 0;
				}
				if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x333554781C7582D7(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x08DAD6B08438A17C(unk_0x4A8C381C258A124D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78558)
				{
					if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
					{
						return 0;
					}
					if (unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()))
					{
						return 0;
					}
					if (unk_0x74CD4FE549433E92(unk_0x4A8C381C258A124D()))
					{
						return 0;
					}
					if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
					{
						return 0;
					}
				}
			}
			if (func_243())
			{
				return 0;
			}
			else
			{
				switch (Global_20383.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8253, 9))
				{
					return 0;
				}
			}
			func_271();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_270();
		func_267();
		return 1;
	}
	if (Global_21725 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21727 || iParam1 == Global_21727)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_231();
	}
	return 0;
}

void func_267()
{
	if (!func_268())
	{
		return;
	}
	if (Global_21731)
	{
		MemCopy(&(Global_1977511.f_1), {Global_21344}, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}
}

int func_268()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_92())
	{
		return 0;
	}
	if (func_269(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (BitTest(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x834C960822A4683F())
	{
		return 0;
	}
	return 1;
}

bool func_269(int iParam0)
{
	return func_174(iParam0, 20);
}

void func_270()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0F15249D24BC5ADA(0);
	Global_21725 = 1;
}

void func_271()
{
	Global_21778 = Global_21777;
	Global_21772 = Global_21773;
	Global_21819 = { Global_21807 };
	Global_21825 = { Global_21813 };
	Global_21780 = Global_21779;
	Global_21849 = { Global_21831 };
	Global_21855 = { Global_21837 };
	Global_21861 = { Global_21843 };
	Global_21867 = { Global_21873 };
	Global_7568 = Global_7569;
	Global_7570 = Global_7571;
	Global_21736 = Global_21737;
	Global_21738 = Global_21739;
	Global_21740 = { Global_21756 };
	Global_21729 = Global_21730;
	Global_22741 = 0;
	Global_21774 = 0;
	Global_21775 = 0;
	unk_0x8744D2E3FC95740E(&Global_8254, 16);
}

int func_272()
{
	int iVar0;
	int iVar1;
	
	if (Global_78558)
	{
		iVar0 = 0;
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar1, 1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x196704C916969409() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0x49F8918E2DC5FFBC(unk_0x4A8C381C258A124D(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_273()
{
	if (func_59(14))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113648.f_28052[0 /*29*/])
			{
				Global_20383 = 0;
			}
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113648.f_28052[1 /*29*/])
			{
				Global_20383 = 1;
			}
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113648.f_28052[2 /*29*/])
			{
				Global_20383 = 2;
			}
			else
			{
				Global_20383 = 0;
			}
		}
	}
	else
	{
		Global_20383 = func_110();
		if (Global_20383 == 145)
		{
			Global_20383 = 3;
		}
		if (Global_78558)
		{
			Global_20383 = 3;
		}
		if (Global_20383 > 3)
		{
			Global_20383 = 3;
		}
	}
}

void func_274()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21014[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21014[iVar0 /*10*/].f_1), "", 24);
		Global_21014[iVar0 /*10*/].f_7 = 0;
		Global_21014[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21014.f_161 = -99;
	Global_21014.f_162 = { 0f, 0f, 0f };
}

bool func_275(int iParam0, int iParam1)
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

void func_276(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	StringCopy(&Global_21795, sParam2, 24);
	Global_22714 = iParam5;
	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}
}

int func_277()
{
	if (Global_21725 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

bool func_278(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_276(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21732 = 0;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
	return func_266(sParam2, iParam3, 0);
}

void func_279()
{
	if (unk_0x9CFFB7009B578840(uLocal_667[0]))
	{
		unk_0x182120534CCF9023(uLocal_667[0], 0);
	}
	if (unk_0x9CFFB7009B578840(uLocal_667[1]))
	{
		unk_0x182120534CCF9023(uLocal_667[1], 0);
	}
	if (unk_0x9CFFB7009B578840(uLocal_667[2]))
	{
		unk_0x182120534CCF9023(uLocal_667[2], 0);
	}
	if (iLocal_381 == 1)
	{
		unk_0x394AFAC073E1F277(iLocal_259);
		iLocal_389 = 0;
	}
}

void func_280(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3, bool bParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0x050D073F91C5243C(iParam0))
		{
			unk_0x1D2DAF2A41FFC4A0(iParam0);
		}
		Var1 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
		if (bParam4)
		{
			Var0 = { unk_0x0D1381B6E0F3987D(iParam0, Param1) };
		}
		else
		{
			Var0 = { Param1 };
		}
		Var2 = { func_281(Var0 - Var1) };
		Var2 = { Var2 * Vector(fParam3, fParam3, fParam3) };
		unk_0xE592D924D5438108(iParam0, 3, Var2, Param2, 0, 0, 1, 1, 0, 1);
	}
}

Vector3 func_281(struct<3> Param0)
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

void func_282(int iParam0, float fParam1)
{
	int iVar0;
	struct<3> Var1;
	
	if (iLocal_166 < 15)
	{
		if (iLocal_166 == 0)
		{
			Local_181 = { 99999.9f, 99999.9f, 99999.9f };
			Local_182 = { -99999.9f, -99999.9f, -99999.9f };
		}
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (unk_0x050D073F91C5243C(iParam0))
			{
				iVar0 = unk_0x0008A5B9B95FED93(iParam0);
				Var1 = { unk_0x763EEC52E292B5A0(iVar0, (fParam1 + (to_float((iLocal_166 - 1)) * 2000f))) };
				if (Var1.f_0 < Local_181.f_0)
				{
					Local_181.f_0 = Var1.f_0;
				}
				if (Var1.f_1 < Local_181.f_1)
				{
					Local_181.f_1 = Var1.f_1;
				}
				if (Var1.f_2 < Local_181.f_2)
				{
					Local_181.f_2 = Var1.f_2;
				}
				if (Var1.f_0 > Local_182.f_0)
				{
					Local_182.f_0 = Var1.f_0;
				}
				if (Var1.f_1 > Local_182.f_1)
				{
					Local_182.f_1 = Var1.f_1;
				}
				if (Var1.f_2 > Local_182.f_2)
				{
					Local_182.f_2 = Var1.f_2;
				}
			}
		}
		iLocal_166++;
	}
	else if (!bLocal_106)
	{
		unk_0x33B6B083EA6305A5(-9999.9f, -9999.9f, -9999.9f, 9999.9f, 9999.9f, 9999.9f, 1);
		Local_181 = { Local_181 + Vector((fLocal_148 * -1f), (fLocal_148 * -1f), (fLocal_148 * -1f)) };
		Local_182 = { Local_182 + Vector(fLocal_148, fLocal_148, fLocal_148) };
		Local_179 = { Local_181 };
		Local_180 = { Local_182 };
		unk_0xD1B0AF388B711EBC(Local_179, Local_180, 0, 0);
		iLocal_166 = 0;
	}
}

void func_283()
{
	iLocal_89 = 1;
}

void func_284()
{
	if (iLocal_331 == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_278))
		{
			if (unk_0x050D073F91C5243C(iLocal_278))
			{
				if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 55000f)
				{
					unk_0xEC9DAA34BBB4658C(joaat("firetruk"));
					unk_0xEC9DAA34BBB4658C(joaat("s_m_y_fireman_01"));
					unk_0x80813AC549A1E8AE("missheist_agency3aig_lift_waitped_a");
					if ((unk_0x6252BC0DD8A320DB(joaat("firetruk")) && unk_0x6252BC0DD8A320DB(joaat("s_m_y_fireman_01"))) && unk_0xE100DD4F82A51BDE("missheist_agency3aig_lift_waitped_a"))
					{
						if (!unk_0xFC8BFE4B41177C22(iLocal_282))
						{
							unk_0x2094BC4B6731BA68(-1129.566f, -2319.888f, 12.9445f, 10f, 0, 0, 0, 0);
							iLocal_282 = unk_0x5779387E956077A6(joaat("firetruk"), -1129.566f, -2319.888f, 12.9445f, 16.5423f, 1, 1, 0);
						}
						uLocal_667[0] = unk_0x56E8A6AA712B10C2("scr_trev4_trailer_fire", -1151f, -2311f, 15f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						if (iLocal_381 == 0)
						{
							unk_0xF37CDE164C892195(iLocal_259, "Trevor_4_747_Loud_Fire", -1151f, -2311f, 15f, 0, 0, 0, 0);
							iLocal_381 = 1;
						}
						uLocal_667[1] = unk_0x56E8A6AA712B10C2("scr_trev4_trailer_fire", -1140f, -2328f, 18f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						uLocal_667[2] = unk_0x56E8A6AA712B10C2("scr_trev4_trailer_fire", -1150f, -2327f, 19f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						if (!unk_0xFC8BFE4B41177C22(iLocal_265[0]))
						{
							iLocal_265[0] = unk_0x8728A378EF2B46B2(iLocal_282, 21, joaat("s_m_y_fireman_01"), -1, 1, 1);
							unk_0xAAA71DD7E9059338(iLocal_265[0], 1);
							unk_0x44FB298D6382876D(iLocal_265[0], 1);
							unk_0x777E107FA017C2BE(iLocal_265[0], -1147.07f, -2320.65f, 18.93f, 1101004800);
						}
						if (!unk_0xFC8BFE4B41177C22(iLocal_265[1]))
						{
							iLocal_265[1] = unk_0xB1DBFEB95C0EFB88(21, joaat("s_m_y_fireman_01"), -1138.313f, -2313.277f, 12.9445f, 155.4271f, 1, 1);
							unk_0x10425721983AE158(iLocal_265[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0xAAA71DD7E9059338(iLocal_265[1], 1);
							unk_0x44FB298D6382876D(iLocal_265[1], 1);
						}
						if (!unk_0xFC8BFE4B41177C22(iLocal_265[2]))
						{
							iLocal_265[2] = unk_0xB1DBFEB95C0EFB88(21, joaat("s_m_y_fireman_01"), -1145.362f, -2309.387f, 12.9445f, 96.0786f, 1, 1);
							unk_0x10425721983AE158(iLocal_265[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0xAAA71DD7E9059338(iLocal_265[2], 1);
							unk_0x44FB298D6382876D(iLocal_265[2], 1);
						}
						if (!unk_0xFC8BFE4B41177C22(iLocal_265[3]))
						{
							iLocal_265[3] = unk_0xB1DBFEB95C0EFB88(21, joaat("s_m_y_fireman_01"), -1147.461f, -2314.511f, 13.1518f, 57.8707f, 1, 1);
							unk_0x10425721983AE158(iLocal_265[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0xAAA71DD7E9059338(iLocal_265[3], 1);
							unk_0x44FB298D6382876D(iLocal_265[3], 1);
						}
						unk_0x55098D9E9AD58806(joaat("s_m_y_fireman_01"));
						unk_0x55098D9E9AD58806(joaat("firetruk"));
						iLocal_331 = 1;
					}
				}
			}
		}
	}
	if (iLocal_331 == 1)
	{
		if (iLocal_465[0] == 0)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_265[1]))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_265[1]))
				{
					if (iLocal_466[0] == 0)
					{
						if (unk_0x13CCB1AD131C1082(iLocal_265[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							iLocal_466[0] = 1;
						}
					}
					if (iLocal_466[0] == 1)
					{
						if (!unk_0x13CCB1AD131C1082(iLocal_265[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							unk_0xAFC7A89C990C4339(iLocal_265[1], -1);
							unk_0x44FB298D6382876D(iLocal_265[1], 1);
							unk_0xAAA71DD7E9059338(iLocal_265[1], 0);
							iLocal_465[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_465[1] == 0)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_265[2]))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_265[2]))
				{
					if (iLocal_466[1] == 0)
					{
						if (unk_0x13CCB1AD131C1082(iLocal_265[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							iLocal_466[1] = 1;
						}
					}
					if (iLocal_466[1] == 1)
					{
						if (!unk_0x13CCB1AD131C1082(iLocal_265[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							unk_0xAFC7A89C990C4339(iLocal_265[2], -1);
							unk_0x44FB298D6382876D(iLocal_265[2], 1);
							unk_0xAAA71DD7E9059338(iLocal_265[2], 0);
							iLocal_465[1] = 1;
						}
					}
				}
			}
		}
		if (iLocal_465[2] == 0)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_265[3]))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_265[3]))
				{
					if (iLocal_466[2] == 0)
					{
						if (unk_0x13CCB1AD131C1082(iLocal_265[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							iLocal_466[2] = 1;
						}
					}
					if (iLocal_466[2] == 1)
					{
						if (!unk_0x13CCB1AD131C1082(iLocal_265[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							unk_0xAFC7A89C990C4339(iLocal_265[3], -1);
							unk_0x44FB298D6382876D(iLocal_265[3], 1);
							unk_0xAAA71DD7E9059338(iLocal_265[3], 0);
							iLocal_465[2] = 1;
						}
					}
				}
			}
		}
	}
}

void func_285()
{
	if (iLocal_402 == 0)
	{
		unk_0xEC9DAA34BBB4658C(joaat("police3"));
		unk_0xEC9DAA34BBB4658C(joaat("s_m_y_cop_01"));
		unk_0xD772E6694B8472A6(1, "BB_AIChase");
		if (unk_0x6252BC0DD8A320DB(joaat("police3")) && unk_0x6252BC0DD8A320DB(joaat("s_m_y_cop_01")))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
			{
				if (unk_0x050D073F91C5243C(iLocal_278))
				{
					if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 15500f)
					{
						unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 2, 0);
						unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
						iLocal_288[0] = unk_0x5779387E956077A6(joaat("police3"), -847.2593f, -2379.987f, 15.9304f, 196.4921f, 1, 1, 0);
						iLocal_275[0] = unk_0x8728A378EF2B46B2(iLocal_288[0], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						unk_0xAAA71DD7E9059338(iLocal_275[0], 1);
						unk_0x616C2EAE947E6027(iLocal_288[0], "SOL_3_POLICE_CARS_Group", 0);
						func_130(iLocal_275[0], 0);
						unk_0xC229299217554C78(iLocal_288[0], 1, 1, 0);
						unk_0x88556DA0593A0748(iLocal_288[0], 1, "BB_AIChase", 1);
						unk_0xB41DEC3AAC1AA107(iLocal_275[0], joaat("weapon_pistol"), 1000, 1, 1);
						unk_0x4539850624F18A9E(iLocal_288[0], 1);
						unk_0x55098D9E9AD58806(joaat("police3"));
						unk_0x55098D9E9AD58806(joaat("s_m_y_cop_01"));
						iLocal_402 = 1;
					}
				}
			}
		}
	}
	if (iLocal_402 == 1)
	{
		if (iLocal_429[0] == 0)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_288[0]))
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_288[0], 0))
				{
					if (unk_0x050D073F91C5243C(iLocal_288[0]))
					{
						unk_0x206AB1458FD9522F(iLocal_288[0], fLocal_321);
						if (unk_0x157F3D5A4AAB2C50(iLocal_288[0]) > 13000f)
						{
							unk_0x1D2DAF2A41FFC4A0(iLocal_288[0]);
						}
					}
					else if (unk_0xFC8BFE4B41177C22(iLocal_275[0]))
					{
						if (!unk_0x4FAFF4BCB7633475(iLocal_275[0]))
						{
							unk_0xAAA71DD7E9059338(iLocal_275[0], 1);
							if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
							{
								unk_0xBCDC8EFDC767C85B(iLocal_275[0], unk_0x4A8C381C258A124D());
								unk_0x44FB298D6382876D(iLocal_275[0], 1);
							}
							else
							{
								unk_0x62A5310368A20EFA(iLocal_275[0], unk_0x4A8C381C258A124D(), 0, 16);
								unk_0x44FB298D6382876D(iLocal_275[0], 1);
							}
							unk_0x7821F942CAEEBEE1(1, "BB_AIChase");
							iLocal_238 = unk_0x1DD05E817C89C737();
							iLocal_429[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_430[0] == 0)
		{
			if (iLocal_429[0] == 1)
			{
				if (unk_0x1DD05E817C89C737() > iLocal_238 + 500)
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_275[0]))
					{
						if (!unk_0x4FAFF4BCB7633475(iLocal_275[0]))
						{
							if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
							{
								unk_0x5D374B426098D36A(iLocal_275[0], 16, 1);
								unk_0x5D374B426098D36A(iLocal_275[0], 1, 1);
								iLocal_430[0] = 1;
							}
							else
							{
								iLocal_430[0] = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_286()
{
	if (!iLocal_333)
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_204[20], 0))
		{
			uLocal_301 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 0);
			unk_0x4CBC5D1BC117616B(uLocal_301, 1);
			iLocal_334 = 0;
			iLocal_333 = 1;
		}
	}
	else if (func_301(&uLocal_28, 1, 0, 0) && iLocal_405 == 0)
	{
		if (unk_0x4C705AAF75363287())
		{
			unk_0x428C32CC68809A35(1);
		}
		if (func_277())
		{
			unk_0x406CBCEA35499884();
			func_228();
		}
		if (iLocal_363[2] == 0)
		{
			if (!unk_0xBC2EE32DE886BD08("SOL_3_CHOPPER_CAM"))
			{
				unk_0xCAC4020CCF361AC8("SOL_3_CHOPPER_CAM");
			}
			unk_0xBF3D28CA44F3BE2D(iLocal_261, "Trevor_4_747_TV", 0, 1);
			iLocal_363[2] = 1;
		}
		func_292(1, 1, 30, 5, 0);
		if (iLocal_352 == 0)
		{
			unk_0x88F483FBD433696A(uLocal_305, "SET_TEXT");
			func_291("TRV4_NEWS1");
			func_291("");
			unk_0xE6B753D52F4CA222();
			iLocal_352 = 1;
		}
		if (iLocal_353 == 0)
		{
			unk_0x88F483FBD433696A(uLocal_305, "SET_SCROLL_TEXT");
			unk_0x74BF156C860580D4(1f);
			unk_0x74BF156C860580D4(0f);
			func_291("TRV4_NEWS2");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uLocal_305, "SET_SCROLL_TEXT");
			unk_0x74BF156C860580D4(0f);
			unk_0x74BF156C860580D4(0f);
			func_291("TRV4_NEWS6");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uLocal_305, "SET_SCROLL_TEXT");
			unk_0x74BF156C860580D4(0f);
			unk_0x74BF156C860580D4(1f);
			func_291("TRV4_NEWS7");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uLocal_305, "SET_SCROLL_TEXT");
			unk_0x74BF156C860580D4(0f);
			unk_0x74BF156C860580D4(2f);
			func_291("TRV4_NEWS8");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uLocal_305, "SET_SCROLL_TEXT");
			unk_0x74BF156C860580D4(0f);
			unk_0x74BF156C860580D4(3f);
			func_291("TRV4_NEWS9");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uLocal_305, "SET_SCROLL_TEXT");
			unk_0x74BF156C860580D4(0f);
			unk_0x74BF156C860580D4(4f);
			func_291("TRV4_NEWS10");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(uLocal_305, "DISPLAY_SCROLL_TEXT");
			unk_0x74BF156C860580D4(1f);
			unk_0x74BF156C860580D4(0f);
			unk_0xE6B753D52F4CA222();
			iLocal_243 = (unk_0x1DD05E817C89C737() - 5000);
			iLocal_353 = 1;
		}
		if (unk_0x1DD05E817C89C737() > iLocal_243 + 5000)
		{
			func_290();
			iLocal_243 = unk_0x1DD05E817C89C737();
		}
		if (iLocal_354 == 0)
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
			{
				if (unk_0x050D073F91C5243C(iLocal_278))
				{
					if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 25000f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 50000f)
					{
						unk_0x88F483FBD433696A(uLocal_305, "SET_SCROLL_TEXT");
						unk_0x74BF156C860580D4(1f);
						unk_0x74BF156C860580D4(1f);
						func_291("TRV4_NEWS5");
						unk_0xE6B753D52F4CA222();
						unk_0x88F483FBD433696A(uLocal_305, "DISPLAY_SCROLL_TEXT");
						unk_0x74BF156C860580D4(1f);
						unk_0x74BF156C860580D4(1f);
						unk_0xE6B753D52F4CA222();
						iLocal_354 = 1;
					}
				}
			}
		}
		if (iLocal_355 == 0)
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
			{
				if (unk_0x050D073F91C5243C(iLocal_278))
				{
					if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 77600f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 115000f)
					{
						unk_0x88F483FBD433696A(uLocal_305, "SET_SCROLL_TEXT");
						unk_0x74BF156C860580D4(1f);
						unk_0x74BF156C860580D4(2f);
						func_291("TRV4_NEWS3");
						unk_0xE6B753D52F4CA222();
						unk_0x88F483FBD433696A(uLocal_305, "DISPLAY_SCROLL_TEXT");
						unk_0x74BF156C860580D4(1f);
						unk_0x74BF156C860580D4(2f);
						unk_0xE6B753D52F4CA222();
						iLocal_355 = 1;
					}
				}
			}
		}
		if (iLocal_356 == 0)
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
			{
				if (unk_0x050D073F91C5243C(iLocal_278))
				{
					if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 115000f)
					{
						unk_0x88F483FBD433696A(uLocal_305, "SET_SCROLL_TEXT");
						unk_0x74BF156C860580D4(1f);
						unk_0x74BF156C860580D4(3f);
						func_291("TRV4_NEWS4");
						unk_0xE6B753D52F4CA222();
						unk_0x88F483FBD433696A(uLocal_305, "DISPLAY_SCROLL_TEXT");
						unk_0x74BF156C860580D4(1f);
						unk_0x74BF156C860580D4(3f);
						unk_0xE6B753D52F4CA222();
						iLocal_356 = 1;
					}
				}
			}
		}
		unk_0x61055542D9D877AE(uLocal_226);
		unk_0xA91A4C18A2DB01BD(uLocal_305, 255, 255, 255, 0, 0);
		if (iLocal_334 == 0)
		{
			func_242(1, 1, 1, 0);
			unk_0x2A09425009DAD0F5(uLocal_301, "ROAD_VIBRATION_SHAKE", 1f);
			unk_0x4CBC5D1BC117616B(uLocal_301, 1);
			unk_0xE37AF9002E782BA0(true, 0, 3000, 1, 0, 0);
			unk_0x37B894853929BF1A(0);
			unk_0xF064FD8FB64821D1(unk_0x259BE71D8A81D4FA(), 0);
			func_289();
			iLocal_334 = 1;
		}
		func_287();
		unk_0x4EB223432F8FA0A0(6);
		unk_0x4EB223432F8FA0A0(7);
		unk_0x4EB223432F8FA0A0(8);
		unk_0x4EB223432F8FA0A0(9);
		unk_0x4EB223432F8FA0A0(1);
		unk_0x4EB223432F8FA0A0(2);
		unk_0x4EB223432F8FA0A0(15);
		unk_0x4EB223432F8FA0A0(3);
		unk_0x66EFB3D6110055C4(0, 85, 1);
		unk_0x51E3279E9437131C(0);
	}
	else if (iLocal_334)
	{
		func_242(0, 1, 1, 0);
		unk_0x4CBC5D1BC117616B(uLocal_301, 0);
		unk_0xE37AF9002E782BA0(false, 0, 3000, 1, 0, 0);
		unk_0x37B894853929BF1A(1);
		if (unk_0xBC2EE32DE886BD08("SOL_3_CHOPPER_CAM"))
		{
			unk_0xB43467C43086A6A1("SOL_3_CHOPPER_CAM");
		}
		unk_0x8E4825CCACA34B58(iLocal_261);
		func_262();
		unk_0x51E3279E9437131C(1);
		iLocal_363[2] = 0;
		iLocal_334 = 0;
	}
}

void func_287()
{
	unk_0xC0964AABD3C0CC7E();
	func_288();
}

void func_288()
{
	Global_23131.f_134 = 1;
}

void func_289()
{
	Global_63369 = 1;
}

void func_290()
{
	if (iLocal_228 > 4)
	{
		iLocal_228 = 0;
	}
	unk_0x88F483FBD433696A(uLocal_305, "DISPLAY_SCROLL_TEXT");
	unk_0x330108B080A2132F(0);
	unk_0x330108B080A2132F(iLocal_228);
	unk_0xE6B753D52F4CA222();
	iLocal_228++;
}

void func_291(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_292(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_300())
	{
		func_300();
	}
	else if (bParam0)
	{
		if (iParam4 == 1)
		{
			if (iLocal_50 <= 225 && iLocal_44 == 0)
			{
				iLocal_50 += 30;
				if (iLocal_50 >= 225)
				{
					iLocal_44 = 1;
				}
			}
			else if (iLocal_50 >= 30)
			{
				iLocal_50 = (iLocal_50 - 30);
				if (iLocal_50 <= 30)
				{
					iLocal_44 = 0;
				}
			}
		}
		func_299(1, 200);
		if (iLocal_48 <= iParam2 && iLocal_43 == 0)
		{
			iLocal_48++;
			func_296(1, iLocal_48);
			if (iLocal_48 == iParam2)
			{
				iLocal_43 = 1;
				iLocal_49 = unk_0xC5935DFB3F39785A(iParam3, iParam2);
			}
		}
		else if (iLocal_48 > 0)
		{
			if (iLocal_48 > iLocal_49)
			{
				iLocal_48 = (iLocal_48 - 1);
				func_296(1, iLocal_48);
				if (iLocal_48 == iLocal_49)
				{
					iLocal_43 = 0;
				}
			}
		}
		if (bParam1)
		{
			func_293(1, 40, 1, 1, 1);
		}
	}
}

void func_293(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_300())
	{
		func_300();
	}
	else if (bParam0)
	{
		if (bParam2)
		{
			if (!func_295(0))
			{
				func_294(0);
			}
			else
			{
				unk_0xFFA2B456A81EA1EB("digitalOverlay", "nscuzz1", 0.5f, fLocal_51, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0, 0);
			}
			if (fLocal_51 < 1f)
			{
				fLocal_51 = (fLocal_51 + 0.01f);
			}
			else
			{
				fLocal_51 = 0f;
			}
		}
		if (bParam3)
		{
			if (!func_295(1))
			{
				func_294(1);
			}
			else
			{
				unk_0xFFA2B456A81EA1EB("digitalOverlay", "nscuzz2", 0.5f, fLocal_52, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0, 0);
			}
			if (fLocal_52 < 1f)
			{
				fLocal_52 = (fLocal_52 + 0.02f);
			}
			else
			{
				fLocal_52 = 0f;
			}
		}
		if (bParam4)
		{
			if (!func_295(2))
			{
				func_294(2);
			}
			else
			{
				unk_0xFFA2B456A81EA1EB("digitalOverlay", "nscuzz3", 0.5f, fLocal_53, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0, 0);
			}
			if (fLocal_53 < 1f)
			{
				fLocal_53 = (fLocal_53 + 0.028f);
			}
			else
			{
				fLocal_53 = 0f;
			}
		}
	}
}

void func_294(bool bParam0)
{
	if (bParam0 < 32)
	{
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_54, bParam0);
	}
}

int func_295(bool bParam0)
{
	if (BitTest(uLocal_54, bParam0))
	{
		return 1;
	}
	return 0;
}

void func_296(bool bParam0, int iParam1)
{
	if (!func_300())
	{
		func_300();
	}
	else if (bParam0)
	{
		iLocal_46 = func_298(5);
		iLocal_45 = unk_0xC5935DFB3F39785A(0, 4);
		while (iLocal_47 == iLocal_46)
		{
			iLocal_46 = func_298(5);
		}
		if (iLocal_46 == 0)
		{
			if (!func_295(3))
			{
				func_294(3);
			}
			else
			{
				unk_0xFFA2B456A81EA1EB("digitalOverlay", "Static1", 0.5f, 0.5f, (1f * func_297(bLocal_40)), (1f * func_297(bLocal_41)), 0f, 255, 255, 255, iParam1, 0, 0);
			}
		}
		if (iLocal_46 == 1)
		{
			if (!func_295(4))
			{
				func_294(4);
			}
			else
			{
				unk_0xFFA2B456A81EA1EB("digitalOverlay", "Static2", 0.5f, 0.5f, (1f * func_297(bLocal_40)), (1f * func_297(bLocal_41)), 0f, 255, 255, 255, iParam1, 0, 0);
			}
		}
		if (iLocal_46 == 2)
		{
			if (!func_295(5))
			{
				func_294(5);
			}
			else
			{
				unk_0xFFA2B456A81EA1EB("digitalOverlay", "Static3", 0.5f, 0.5f, (1f * func_297(bLocal_40)), (1f * func_297(bLocal_41)), 0f, 255, 255, 255, iParam1, 0, 0);
			}
		}
		if (iLocal_46 == 3)
		{
			if (!func_295(6))
			{
				func_294(6);
			}
			else
			{
				unk_0xFFA2B456A81EA1EB("digitalOverlay", "Static4", 0.5f, 0.5f, (1f * func_297(bLocal_40)), (1f * func_297(bLocal_41)), 0f, 255, 255, 255, iParam1, 0, 0);
			}
		}
		if (iLocal_46 == 4)
		{
			if (!func_295(7))
			{
				func_294(7);
			}
			else
			{
				unk_0xFFA2B456A81EA1EB("digitalOverlay", "Static5", 0.5f, 0.5f, (1f * func_297(bLocal_40)), (1f * func_297(bLocal_41)), 0f, 255, 255, 255, iParam1, 0, 0);
			}
		}
	}
}

float func_297(bool bParam0)
{
	if (bParam0)
	{
		return -1f;
	}
	else
	{
		return 1f;
	}
	return 1f;
}

int func_298(int iParam0)
{
	if (unk_0xC5935DFB3F39785A(0, 50) > 25)
	{
		bLocal_40 = true;
	}
	else
	{
		bLocal_40 = false;
	}
	if (unk_0xC5935DFB3F39785A(0, 50) > 25)
	{
		bLocal_41 = true;
	}
	else
	{
		bLocal_41 = false;
	}
	return unk_0xC5935DFB3F39785A(0, iParam0);
}

void func_299(bool bParam0, int iParam1)
{
	if (!func_300())
	{
		func_300();
	}
	else if (bParam0)
	{
		if (iLocal_42)
		{
			if (!func_295(8))
			{
				func_294(8);
			}
			else
			{
				unk_0xFFA2B456A81EA1EB("digitalOverlay", "nscanline1", 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, iParam1, 0, 0);
			}
			iLocal_42 = 0;
		}
		else
		{
			if (!func_295(8))
			{
				func_294(8);
			}
			else
			{
				unk_0xFFA2B456A81EA1EB("digitalOverlay", "nscanline1", 0.5f, 0.5f, -1f, -1f, 0f, 255, 255, 255, iParam1, 0, 0);
			}
			iLocal_42 = 1;
		}
	}
}

int func_300()
{
	unk_0xD0D00ED689D6CA81("digitalOverlay", 0);
	if (unk_0x38D063D8CF6D1967("digitalOverlay"))
	{
		return 1;
	}
	return 0;
}

int func_301(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x1DD05E817C89C737() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					if (func_307(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_306(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_306(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_307(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_305(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					{
						if (!func_307(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1DD05E817C89C737();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_306(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_306(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_307(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					if (!func_307(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_306(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_306(bParam1, bParam2, bParam3) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x12623527E5B8AB7C(unk_0x4A8C381C258A124D(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_307(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					{
						if (func_304(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_303(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || func_303(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x12623527E5B8AB7C(unk_0x4A8C381C258A124D(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_304(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_305(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_316(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_302();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_302()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 4);
}

int func_303(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_316(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x66EFB3D6110055C4(0, 140, 1);
			unk_0x66EFB3D6110055C4(0, 80, 1);
			if (unk_0x61C3701AD6D746B2(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_304(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_316(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x66EFB3D6110055C4(0, 80, 1);
		if (unk_0x77CDF75A783A0B04())
		{
			if (unk_0x61C3701AD6D746B2(0, 80))
			{
				unk_0x0A0A06C514052E80(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_305(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x1DD05E817C89C737()
		{
			return 1;
		}
	}
	return 0;
}

int func_306(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_316(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x66EFB3D6110055C4(0, 140, 1);
			unk_0x66EFB3D6110055C4(0, 80, 1);
			if (unk_0x4465D55576678706(0, 80) && unk_0x1DD05E817C89C737() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_307(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_316(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x66EFB3D6110055C4(0, 80, 1);
		if (unk_0x77CDF75A783A0B04())
		{
			if (unk_0x4465D55576678706(0, 80) && unk_0x1DD05E817C89C737() > Global_116)
			{
				unk_0x0A0A06C514052E80(0);
				return 1;
			}
		}
	}
	return 0;
}

void func_308(bool bParam0)
{
	if (bParam0)
	{
		func_314();
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 16);
		}
		Global_20383.f_1 = 1;
		if (func_313(0))
		{
			func_309(0);
		}
	}
	else if (Global_20383.f_1 == 1)
	{
		if (!Global_20383.f_1 == 0)
		{
			Global_20383.f_1 = 3;
		}
	}
}

void func_309(int iParam0)
{
	if (func_312())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_311())
		{
			func_310(1, 1);
		}
		else
		{
			func_310(0, 0);
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
	if (!func_243())
	{
		Global_20383.f_1 = 3;
	}
}

void func_310(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_313(0))
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

bool func_311()
{
	return BitTest(Global_1962996, 5);
}

bool func_312()
{
	return BitTest(Global_1962996, 19);
}

int func_313(int iParam0)
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

void func_314()
{
	if (Global_20383.f_1 == 9 || Global_20383.f_1 == 10)
	{
		Global_21778 = 0;
		Global_21774 = 1;
	}
}

void func_315(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_316(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x3555462DB47B7AB1())
	{
		return 0;
	}
	if (func_313(0))
	{
		return 0;
	}
	if (func_323())
	{
		return 0;
	}
	if (unk_0xA43CD45F18522E3F())
	{
		return 0;
	}
	if (Global_75693)
	{
		return 0;
	}
	if (unk_0x486FF5D06E9659F1(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_60543)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
		{
			if (unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(3) == 3 || unk_0xBCF87EE3DC296C2A(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
			{
				return 0;
			}
			if (unk_0xDD851254D8C7D338())
			{
				return 0;
			}
		}
	}
	if ((func_322() || func_321(Global_4718592.f_166301)) || func_320())
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			iVar1 = func_319(unk_0x4A8C381C258A124D(), 0);
			if (((unk_0x333A2A6253C809D2(iVar0, iVar1) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x4B423FAA24E8ABF0(iVar0) == joaat("riot2") && iVar1 == 0) && func_318(iVar0, 10)) && unk_0x94C9CD3D66808551(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1962010)
	{
		return 0;
	}
	if (func_317(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

int func_317(int iParam0)
{
	if (iParam0 != func_92())
	{
		if (func_197(iParam0, 1, 1))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
		else if ((Global_1575060 && iParam0 == unk_0x259BE71D8A81D4FA()) && func_197(iParam0, 1, 0))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

int func_318(int iParam0, int iParam1)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0x90E3EAFF8AAA1A42(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x5B59C12A02157D00(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_319(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x7F420695E3F776FB(iParam0, iParam1))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(iParam0, iParam1);
			if (unk_0xFC8BFE4B41177C22(iVar0))
			{
				iVar1 = unk_0xDC1AA2FE20EEB2E9(unk_0x4B423FAA24E8ABF0(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xC39AE5D390581AD5(iVar0, iVar3, 0))
					{
						if (unk_0xFD5C5BBD1FE92BB7(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_320()
{
	return Global_2683864.f_19;
}

bool func_321(int iParam0)
{
	return iParam0 == 51;
}

var func_322()
{
	return Global_2683864.f_18;
}

bool func_323()
{
	return unk_0x1DD05E817C89C737() <= Global_23270.f_6321 + 100;
}

void func_324(var uParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		if (unk_0x050D073F91C5243C(iParam1))
		{
			unk_0x206AB1458FD9522F(iParam1, fParam2);
			Var0 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
			Var1 = { unk_0x88124E0D60FB8D11(iParam1, 2) };
			unk_0x1761457F86AD0EE2(uParam0, Var0);
			unk_0x5E5CEC33463AD803(uParam0, Var1, 2);
		}
	}
}

void func_325(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		unk_0x4285E11B28063EE0(iParam1, 0, 0);
		unk_0x44C48AC14D3C09ED(iParam1, 0, 0);
		unk_0x935364B4448CD584(iParam1, 1);
		unk_0xD0F1DB0E50B367AD(iParam1, 1, 1, 1, 1, 1, 0, 0, 0);
		unk_0x88556DA0593A0748(iParam1, iParam3, sParam2, 1);
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
		unk_0x1761457F86AD0EE2(uParam0, Var0);
		unk_0x5E5CEC33463AD803(uParam0, unk_0x88124E0D60FB8D11(iParam1, 2), 2);
	}
}

void func_326()
{
	if (iLocal_260 != -1)
	{
		if (iLocal_382 == 1)
		{
			if (iLocal_374 == 0)
			{
				unk_0x394AFAC073E1F277(iLocal_260);
				iLocal_384 = 0;
				iLocal_374 = 1;
			}
		}
	}
	if (iLocal_255 != -1)
	{
		if (iLocal_378 == 1)
		{
			if (iLocal_376 == 0)
			{
				unk_0x394AFAC073E1F277(iLocal_255);
				iLocal_385 = 0;
				iLocal_376 = 1;
			}
		}
	}
	if (iLocal_256 != -1)
	{
		if (iLocal_383 == 1)
		{
			if (iLocal_365 == 0)
			{
				unk_0x394AFAC073E1F277(iLocal_256);
				iLocal_386 = 0;
				iLocal_365 = 1;
			}
		}
	}
	if (iLocal_257 != -1)
	{
		if (iLocal_379 == 1)
		{
			if (iLocal_375 == 0)
			{
				unk_0x394AFAC073E1F277(iLocal_257);
				iLocal_387 = 0;
				iLocal_375 = 1;
			}
		}
	}
	if (iLocal_258 != -1)
	{
		if (iLocal_380 == 1)
		{
			if (iLocal_377 == 0)
			{
				unk_0x394AFAC073E1F277(iLocal_258);
				iLocal_388 = 0;
				iLocal_377 = 1;
			}
		}
	}
}

void func_327()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_204[19]))
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_204[19], 0))
		{
			if (!unk_0xE101D58DA98B6070(iLocal_204[19]))
			{
				unk_0x4539850624F18A9E(iLocal_204[19], 1);
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_204[7]))
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_204[7], 0))
		{
			if (!unk_0xE101D58DA98B6070(iLocal_204[7]))
			{
				unk_0x4539850624F18A9E(iLocal_204[7], 1);
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_204[8]))
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_204[8], 0))
		{
			if (!unk_0xE101D58DA98B6070(iLocal_204[8]))
			{
				unk_0x4539850624F18A9E(iLocal_204[8], 1);
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_204[9]))
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_204[9], 0))
		{
			if (!unk_0xE101D58DA98B6070(iLocal_204[9]))
			{
				unk_0x4539850624F18A9E(iLocal_204[9], 1);
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_204[10]))
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_204[10], 0))
		{
			if (!unk_0xE101D58DA98B6070(iLocal_204[10]))
			{
				unk_0x4539850624F18A9E(iLocal_204[10], 1);
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_204[11]))
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_204[11], 0))
		{
			if (!unk_0xE101D58DA98B6070(iLocal_204[11]))
			{
				unk_0x4539850624F18A9E(iLocal_204[11], 1);
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_204[13]))
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_204[13], 0))
		{
			if (!unk_0xE101D58DA98B6070(iLocal_204[13]))
			{
				unk_0x4539850624F18A9E(iLocal_204[13], 1);
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_204[14]))
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_204[14], 0))
		{
			if (!unk_0xE101D58DA98B6070(iLocal_204[14]))
			{
				unk_0x4539850624F18A9E(iLocal_204[14], 1);
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_204[15]))
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_204[15], 0))
		{
			if (!unk_0xE101D58DA98B6070(iLocal_204[15]))
			{
				unk_0x4539850624F18A9E(iLocal_204[15], 1);
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_204[16]))
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_204[16], 0))
		{
			if (!unk_0xE101D58DA98B6070(iLocal_204[16]))
			{
				unk_0x4539850624F18A9E(iLocal_204[16], 1);
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_204[17]))
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_204[17], 0))
		{
			if (!unk_0xE101D58DA98B6070(iLocal_204[17]))
			{
				unk_0x4539850624F18A9E(iLocal_204[17], 1);
			}
		}
	}
}

void func_328()
{
	if (func_359())
	{
		fLocal_322 = 0.5f;
	}
	else if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (unk_0x66C1D6E6DBF7AC9B(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)) > 40f)
		{
			fLocal_322 = 0.85f;
		}
		else
		{
			fLocal_322 = 0.9f;
		}
	}
	else
	{
		fLocal_322 = 0.9f;
	}
	if (!unk_0x1C2F771CDC87A3A5(iLocal_278, 0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
		{
			if (unk_0x050D073F91C5243C(iLocal_278))
			{
				if (iLocal_357 == 0)
				{
					if (unk_0x157F3D5A4AAB2C50(iLocal_278) < 10000f)
					{
						if (func_16(unk_0x4A8C381C258A124D(), iLocal_278, 1) < 100f || unk_0xCB5CAFF0A4A8B74B(iLocal_278))
						{
							func_355(iLocal_278, unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 40f, 55f, 100f, 1.7f, 1f, fLocal_322, 0);
							unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
							func_329(iLocal_278, fLocal_321);
						}
						else
						{
							func_355(iLocal_278, unk_0x4A8C381C258A124D(), &fLocal_321, 0.6f, 40f, 50f, 60f, 1.7f, 1f, fLocal_322, 0);
							unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
							func_329(iLocal_278, fLocal_321);
						}
					}
				}
				else if (func_16(unk_0x4A8C381C258A124D(), iLocal_278, 1) > 175f)
				{
					fLocal_321 = 0.6f;
					unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
					func_329(iLocal_278, fLocal_321);
				}
				else if (unk_0x157F3D5A4AAB2C50(iLocal_278) < 10000f)
				{
					func_355(iLocal_278, unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 25f, 40f, 180f, 1.7f, 1f, fLocal_322, 0);
					unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
					func_329(iLocal_278, fLocal_321);
				}
				if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 10000f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 23000f)
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_204[8], 0))
					{
						func_355(iLocal_204[8], unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 25f, 30f, 50f, 1.7f, 0.5f, fLocal_322, 1);
						unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
						func_329(iLocal_278, fLocal_321);
					}
					else
					{
						func_355(iLocal_278, unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 25f, 35f, 180f, 1.7f, 0.5f, fLocal_322, 1);
						unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
						func_329(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 23000f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 32000f)
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_204[7]))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_204[7], 0))
						{
							func_355(iLocal_204[7], unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 20f, 30f, 100f, 1.8f, 1f, fLocal_322, 0);
							unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
							func_329(iLocal_278, fLocal_321);
						}
						else if (unk_0xFC8BFE4B41177C22(iLocal_204[8]))
						{
							if (unk_0xD9F5E1FEFD1329E4(iLocal_204[8], 0))
							{
								func_355(iLocal_204[8], unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_322, 0);
								unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
								func_329(iLocal_278, fLocal_321);
							}
							else
							{
								func_355(iLocal_278, unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0);
								unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
								func_329(iLocal_278, fLocal_321);
							}
						}
						else
						{
							func_355(iLocal_278, unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0);
							unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
							func_329(iLocal_278, fLocal_321);
						}
					}
					else if (unk_0xFC8BFE4B41177C22(iLocal_204[8]))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_204[8], 0))
						{
							func_355(iLocal_204[8], unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_322, 0);
							unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
							func_329(iLocal_278, fLocal_321);
						}
						else
						{
							func_355(iLocal_278, unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0);
							unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
							func_329(iLocal_278, fLocal_321);
						}
					}
					else
					{
						func_355(iLocal_278, unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0);
						unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
						func_329(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 32000f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 39000f)
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_204[7]))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_204[7], 0))
						{
							func_355(iLocal_204[7], unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 22f, 25f, 100f, 1.8f, 0.5f, fLocal_322, 1);
							unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
							func_329(iLocal_278, fLocal_321);
						}
						else
						{
							func_355(iLocal_278, unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_322, 1);
							unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
							func_329(iLocal_278, fLocal_321);
						}
					}
					else
					{
						func_355(iLocal_278, unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_322, 1);
						unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
						func_329(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 39000f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 56000f)
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_204[8], 0))
					{
						func_355(iLocal_204[8], unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0);
						unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
						func_329(iLocal_278, fLocal_321);
					}
					else
					{
						func_355(iLocal_278, unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 25f, 35f, 150f, 1.8f, 1f, fLocal_322, 0);
						unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
						func_329(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 56000f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 65000f)
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_204[11], 0))
					{
						func_355(iLocal_204[11], unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 25f, 30f, 100f, 1.8f, 1f, fLocal_322, 0);
						unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
						func_329(iLocal_278, fLocal_321);
					}
					else
					{
						func_355(iLocal_278, unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 25f, 35f, 100f, 1.8f, 1f, fLocal_322, 0);
						unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
						func_329(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 65000f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 90000f)
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_204[13]))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_204[13], 0))
						{
							func_355(iLocal_204[13], unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 30f, 35f, 50f, 1.8f, 1f, fLocal_322, 0);
							unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
							func_329(iLocal_278, fLocal_321);
						}
						else
						{
							func_355(iLocal_278, unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_322, 0);
							unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
							func_329(iLocal_278, fLocal_321);
						}
					}
					else
					{
						func_355(iLocal_278, unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_322, 0);
						unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
						func_329(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 90000f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 110000f)
				{
					func_355(iLocal_278, unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 60f, 70f, 150f, 1.5f, 0.5f, fLocal_322, 1);
					unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
					func_329(iLocal_278, fLocal_321);
				}
				if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 110000f)
				{
					func_355(iLocal_278, unk_0x4A8C381C258A124D(), &fLocal_321, 1f, 100f, 120f, 150f, 1.6f, 1f, fLocal_322, 0);
					unk_0x206AB1458FD9522F(iLocal_278, fLocal_321);
					func_329(iLocal_278, fLocal_321);
				}
			}
		}
	}
}

void func_329(int iParam0, float fParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	
	fVar0 = unk_0x0B852B0BF94A8DC1();
	fVar0 = (fVar0 * 1000f);
	bLocal_106 = false;
	if (!bLocal_88)
	{
		if (bLocal_87)
		{
			func_354();
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
				unk_0x2094BC4B6731BA68(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_88 = true;
		}
	}
	else if (!bLocal_87)
	{
		func_225();
		bLocal_88 = false;
	}
	if (bLocal_87)
	{
		fParam1 = 1f;
		unk_0xA0265306DFF63938(0f);
	}
	if (!bLocal_81)
	{
		if (iLocal_76)
		{
			fLocal_133 = 0f;
		}
		else
		{
			fLocal_133 = 1f;
		}
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (unk_0x050D073F91C5243C(iParam0))
			{
				if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
				{
					if (func_353(unk_0x4A8C381C258A124D(), iParam0))
					{
						iLocal_86 = 1;
					}
					else
					{
						iLocal_86 = 0;
					}
				}
				fLocal_130 = unk_0x157F3D5A4AAB2C50(iParam0);
				unk_0x206AB1458FD9522F(iParam0, ((fParam1 * fLocal_131) * fLocal_133));
				if (bLocal_85)
				{
					func_352(iParam0, fLocal_130);
					func_351(iParam0, fLocal_140);
					if (fLocal_135 > 1000f)
					{
						if (iLocal_172 == 0)
						{
							func_350(iParam0, fLocal_140);
						}
						fVar0 = ((fLocal_130 + 4000f) + (to_float(iLocal_172) * 2000f));
						func_349(iParam0, fVar0, fLocal_134);
						iLocal_172++;
						if (iLocal_172 > 2)
						{
							fLocal_135 = 0f;
						}
					}
					else
					{
						iLocal_172 = 0;
						fLocal_135 = (fLocal_135 + (unk_0x0B852B0BF94A8DC1() * 1000f));
					}
				}
			}
		}
		iVar2 = 0;
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (unk_0x050D073F91C5243C(iParam0))
			{
				iVar2 = 1;
			}
		}
		if (fLocal_130 == 0f || unk_0x15CCE8886267624F())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_93)
		{
			if (!iLocal_75)
			{
				func_346(iParam0, ((fParam1 * fLocal_131) * fLocal_133), 0);
				if (!iLocal_96)
				{
				}
				iLocal_96 = 0;
			}
			if (bLocal_78)
			{
				func_345(iParam0);
			}
			if (!iLocal_75)
			{
				func_332(iParam0, ((fParam1 * fLocal_131) * fLocal_133), 0);
			}
		}
		if (iLocal_83)
		{
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					iLocal_206 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
					Local_176 = { unk_0xD1A6A821F5AC81DB(iLocal_206, 1) };
					unk_0xB66CD98548798F26(iLocal_206, &fLocal_114, &fLocal_115, &fLocal_116, &fLocal_117);
				}
			}
			iLocal_83 = 0;
		}
		if (iLocal_82)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_206))
			{
				func_217(iLocal_207);
				iLocal_207 = iLocal_206;
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_207, 0))
			{
				unk_0xB2BD5837A8D3CEDA(iLocal_207, Local_176, 1, 0, 0, 1);
				unk_0xF425E0B05426E088(iLocal_207, fLocal_114, fLocal_115, fLocal_116, fLocal_117);
			}
			fLocal_129 = fLocal_132;
			iLocal_75 = 1;
			iLocal_82 = 0;
		}
		if (iLocal_75)
		{
			while (!func_330(&iParam0, fLocal_129))
			{
				wait(0);
			}
			iLocal_76 = 1;
		}
		if (iLocal_89)
		{
			iLocal_89 = 0;
		}
	}
}

int func_330(int iParam0, float fParam1)
{
	if (!iLocal_90)
	{
		iLocal_75 = 1;
		func_212();
		if (unk_0xD9F5E1FEFD1329E4(*iParam0, 0))
		{
			if (unk_0x050D073F91C5243C(*iParam0))
			{
				unk_0x1D2DAF2A41FFC4A0(*iParam0);
				unk_0xF698038C13845696(*iParam0);
			}
			if (!iLocal_159 == -1)
			{
				while (!func_331(iParam0, iLocal_159, fParam1, 1, 0, 0, 0, 0))
				{
					wait(0);
				}
				if (!bLocal_80)
				{
					iLocal_76 = 1;
					fLocal_133 = 0f;
					iLocal_160 = 0;
					iLocal_162 = 0;
					iLocal_161 = 0;
					iLocal_156 = 0;
					iLocal_157 = 0;
					iLocal_158 = 0;
					iLocal_163 = 0;
					iLocal_164 = 0;
					iLocal_165 = 0;
				}
			}
		}
		iLocal_90 = 1;
	}
	else
	{
		if (unk_0xD9F5E1FEFD1329E4(*iParam0, 0))
		{
			if (unk_0x050D073F91C5243C(*iParam0))
			{
				unk_0x206AB1458FD9522F(*iParam0, ((1f * fLocal_131) * fLocal_133));
				func_331(iParam0, iLocal_159, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_130 = fParam1;
		iLocal_166 = 0;
		iLocal_169 = 0;
		fLocal_145 = 0f;
		fLocal_144 = 0f;
		func_332(*iParam0, ((1f * fLocal_131) * fLocal_133), 1);
		func_346(*iParam0, ((1f * fLocal_131) * fLocal_133), 1);
		func_345(*iParam0);
		if ((iLocal_163 == 0 && iLocal_164 == 0) && iLocal_165 == 0)
		{
			iLocal_76 = 0;
			iLocal_75 = 0;
			iLocal_90 = 0;
			return 1;
		}
	}
	return 0;
}

int func_331(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		unk_0xD772E6694B8472A6(iParam1, &cLocal_185);
		if (unk_0x266D9DB5FCE4003B(iParam1, &cLocal_185))
		{
			if (unk_0xD9F5E1FEFD1329E4(*uParam0, 0))
			{
				if (!unk_0x050D073F91C5243C(*uParam0))
				{
					unk_0x5D7CD709B34C90F0(*uParam0, 0);
					if (bParam4)
					{
						unk_0x3EF00C934572535B(*uParam0, iParam1, &cLocal_185, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_167 && iParam1 != iLocal_168)
						{
							if (bParam7)
							{
								unk_0x9CCFFF877AB82ACA(*uParam0, iParam1, &cLocal_185, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								unk_0x9CCFFF877AB82ACA(*uParam0, iParam1, &cLocal_185, 1 | 4, 0, 786603);
							}
							else
							{
								unk_0x88556DA0593A0748(*uParam0, iParam1, &cLocal_185, 1);
							}
						}
						else
						{
							unk_0x88556DA0593A0748(*uParam0, iParam1, &cLocal_185, 1);
						}
						unk_0x8BCD7C11D27FB9A1(*uParam0, fParam2);
						if (bParam5)
						{
							unk_0x44A13535A15C20E0(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (unk_0x0008A5B9B95FED93(*uParam0) == unk_0x95610E68DFCFC225(iParam1, &cLocal_185))
				{
					fVar0 = unk_0x157F3D5A4AAB2C50(*uParam0);
					unk_0x8BCD7C11D27FB9A1(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						unk_0x1D2DAF2A41FFC4A0(*uParam0);
						unk_0xD772E6694B8472A6(iParam1, &cLocal_185);
					}
					if (bParam5)
					{
						unk_0x44A13535A15C20E0(*uParam0, 1);
					}
					return 1;
				}
				else
				{
					unk_0x1D2DAF2A41FFC4A0(*uParam0);
					unk_0x5D7CD709B34C90F0(*uParam0, 0);
					if (bParam4)
					{
						unk_0x3EF00C934572535B(*uParam0, iParam1, &cLocal_185, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_167 && iParam1 != iLocal_168)
					{
						if (bParam7)
						{
							unk_0x9CCFFF877AB82ACA(*uParam0, iParam1, &cLocal_185, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							unk_0x9CCFFF877AB82ACA(*uParam0, iParam1, &cLocal_185, 1 | 4, 0, 786603);
						}
						else
						{
							unk_0x88556DA0593A0748(*uParam0, iParam1, &cLocal_185, 1);
						}
					}
					else
					{
						unk_0x88556DA0593A0748(*uParam0, iParam1, &cLocal_185, 1);
					}
					unk_0x8BCD7C11D27FB9A1(*uParam0, fParam2);
					if (bParam5)
					{
						unk_0x44A13535A15C20E0(*uParam0, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_332(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	var uVar10;
	var uVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	
	bVar9 = unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA());
	uVar10 = unk_0x70BB2517035D5D12();
	uVar11 = unk_0x60E0AE8EF70F606A();
	bVar12 = false;
	if (bVar9)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar2 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		}
		Var5 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	}
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		iVar0 = iLocal_162;
		while (iVar0 < 35)
		{
			if (iLocal_153[iVar0] != 99)
			{
				if (iLocal_153[iVar0] == 0)
				{
					if (iLocal_152[iVar0] > 0)
					{
						if (!iLocal_75)
						{
							if (fLocal_130 > (fLocal_122[iVar0] - (7000f * fParam1)))
							{
								if (func_344(iLocal_197[iVar0]))
								{
									unk_0x0B0C9A0F9AAEB7F0(&(iLocal_154[iVar0]), false);
								}
								else if (unk_0x78B050AFBA6D1517(iLocal_197[iVar0]))
								{
									unk_0x0B0C9A0F9AAEB7F0(&(iLocal_154[iVar0]), 2);
								}
								unk_0x8744D2E3FC95740E(&(iLocal_154[iVar0]), true);
								iLocal_153[iVar0]++;
								iLocal_164++;
							}
						}
						else
						{
							fVar6 = (fLocal_130 - fLocal_122[iVar0]);
							fVar6 = (fVar6 * fLocal_123[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < func_343(iLocal_152[iVar0]))
								{
									if (func_344(iLocal_197[iVar0]))
									{
										unk_0x0B0C9A0F9AAEB7F0(&(iLocal_154[iVar0]), false);
									}
									else if (unk_0x78B050AFBA6D1517(iLocal_197[iVar0]))
									{
										unk_0x0B0C9A0F9AAEB7F0(&(iLocal_154[iVar0]), 2);
									}
									unk_0x8744D2E3FC95740E(&(iLocal_154[iVar0]), true);
									iLocal_153[iVar0]++;
									iLocal_164++;
								}
								else
								{
									iLocal_153[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_153[iVar0] = 99;
					}
				}
				else if (iLocal_153[iVar0] == 1)
				{
					bVar8 = false;
					unk_0xD772E6694B8472A6(iLocal_152[iVar0], &cLocal_185);
					if (BitTest(iLocal_154[iVar0], 0))
					{
						unk_0xEC9DAA34BBB4658C(func_221());
						bVar8 = unk_0x6252BC0DD8A320DB(func_221());
					}
					else if (!bLocal_102 && ((!BitTest(iLocal_154[iVar0], 2) && uVar10) || (BitTest(iLocal_154[iVar0], 2) && uVar11)))
					{
						bVar8 = true;
					}
					else
					{
						unk_0xEC9DAA34BBB4658C(func_224());
						bVar8 = unk_0x6252BC0DD8A320DB(func_224());
					}
					if (bVar8)
					{
						if (!unk_0xFC8BFE4B41177C22(iLocal_204[iVar0]))
						{
							unk_0xEC9DAA34BBB4658C(iLocal_197[iVar0]);
							if (unk_0x6252BC0DD8A320DB(iLocal_197[iVar0]) && unk_0x266D9DB5FCE4003B(iLocal_152[iVar0], &cLocal_185))
							{
								if (fLocal_130 >= (fLocal_122[iVar0] - (fLocal_143 * fParam1)))
								{
									if ((iLocal_89 || bParam2) || (!bLocal_106 && !func_342(Local_175[iVar0 /*3*/], Var5, 5f, fLocal_141)))
									{
										if (bLocal_85)
										{
											func_341(Local_175[iVar0 /*3*/], Var5, fLocal_134);
										}
										iLocal_204[iVar0] = unk_0x5779387E956077A6(iLocal_197[iVar0], Local_175[iVar0 /*3*/], 0f, 0, 0, 0);
										if (iLocal_197[iVar0] == joaat("polmav"))
										{
											unk_0xA1C03303EC67320B(iLocal_204[iVar0], 0);
										}
										if (uLocal_98 && !BitTest(iLocal_154[iVar0], 0))
										{
											func_340(iLocal_204[iVar0]);
										}
										if (BitTest(iLocal_154[iVar0], 3))
										{
											unk_0x11C125313CB8ADA2(iLocal_204[iVar0], 1);
										}
										unk_0x62C438C53BB57AFD(iLocal_204[iVar0], Local_175[iVar0 /*3*/], 0, 0, 1);
										unk_0xF425E0B05426E088(iLocal_204[iVar0], fLocal_118[iVar0], fLocal_119[iVar0], fLocal_120[iVar0], fLocal_121[iVar0]);
										if (unk_0xD3CE8D1E6564B011(iLocal_197[iVar0]) || unk_0x78B050AFBA6D1517(iLocal_197[iVar0]))
										{
											unk_0x1DE99C193C7EC64B(iLocal_204[iVar0], 1084227584);
										}
										if (!BitTest(iLocal_154[iVar0], 0))
										{
											unk_0xC229299217554C78(iLocal_204[iVar0], 1, 1, 0);
											if (unk_0x5295501D0862870D() > 19 || unk_0x5295501D0862870D() < 7)
											{
												unk_0xBA3C1A9AA7FD9616(iLocal_204[iVar0], 3);
											}
										}
										unk_0x5D7CD709B34C90F0(iLocal_204[iVar0], 1);
										unk_0x55098D9E9AD58806(iLocal_197[iVar0]);
										iLocal_164 = (iLocal_164 - 1);
										iLocal_153[iVar0]++;
										bLocal_106 = true;
									}
								}
							}
						}
						else if (!unk_0x1C2F771CDC87A3A5(iLocal_204[iVar0], 0) && unk_0xD9F5E1FEFD1329E4(iLocal_204[iVar0], 0))
						{
							unk_0x62C438C53BB57AFD(iLocal_204[iVar0], Local_175[iVar0 /*3*/], 0, 0, 1);
							unk_0xF425E0B05426E088(iLocal_204[iVar0], fLocal_118[iVar0], fLocal_119[iVar0], fLocal_120[iVar0], fLocal_121[iVar0]);
							if (unk_0xD3CE8D1E6564B011(iLocal_197[iVar0]) || unk_0x78B050AFBA6D1517(iLocal_197[iVar0]))
							{
								unk_0x1DE99C193C7EC64B(iLocal_204[iVar0], 1084227584);
							}
							unk_0x5D7CD709B34C90F0(iLocal_204[iVar0], 1);
							unk_0x55098D9E9AD58806(iLocal_197[iVar0]);
							iLocal_164 = (iLocal_164 - 1);
							iLocal_153[iVar0]++;
						}
					}
				}
				else if (iLocal_153[iVar0] == 2)
				{
					unk_0xD772E6694B8472A6(iLocal_152[iVar0], &cLocal_185);
					if (!BitTest(iLocal_154[iVar0], 1))
					{
						bVar8 = false;
						if (BitTest(iLocal_154[iVar0], 0))
						{
							unk_0xEC9DAA34BBB4658C(func_221());
							bVar8 = unk_0x6252BC0DD8A320DB(func_221());
							iVar13 = 2;
						}
						else if (!bLocal_102 && ((!BitTest(iLocal_154[iVar0], 2) && uVar10) || (BitTest(iLocal_154[iVar0], 2) && uVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							unk_0xEC9DAA34BBB4658C(func_224());
							bVar8 = unk_0x6252BC0DD8A320DB(func_224());
							iVar13 = 0;
						}
						if (!unk_0x1C2F771CDC87A3A5(iLocal_204[iVar0], 0))
						{
							if (!bLocal_106 && unk_0xC39AE5D390581AD5(iLocal_204[iVar0], -1, 0))
							{
								if (bVar8)
								{
									if ((vdist2(unk_0xD1A6A821F5AC81DB(iLocal_204[iVar0], 1), Var5) < 10000f || bParam2) || iLocal_89)
									{
										func_338(&(iLocal_204[iVar0]), iVar13, 1);
										unk_0x0B0C9A0F9AAEB7F0(&(iLocal_154[iVar0]), true);
									}
								}
							}
						}
					}
					if (unk_0xD9F5E1FEFD1329E4(iLocal_204[iVar0], 0))
					{
						if (fLocal_130 >= fLocal_122[iVar0])
						{
							if (14 > iLocal_157)
							{
								fVar6 = (fLocal_130 - fLocal_122[iVar0]);
								fVar6 = (fVar6 * fLocal_123[iVar0]);
								if (unk_0x266D9DB5FCE4003B(iLocal_152[iVar0], &cLocal_185))
								{
									if (fVar6 < unk_0xE2E30D829A6B8F9E(iLocal_152[iVar0], &cLocal_185))
									{
										Var3 = { unk_0xD1A6A821F5AC81DB(iLocal_204[iVar0], 1) };
										Var4 = { unk_0x2A03585144C38A2A(iLocal_152[iVar0], fVar6, &cLocal_185) };
										if (((!func_342(Var3, Var5, 5f, fLocal_141) && func_342(Var4, Var5, 5f, fLocal_141)) && !iLocal_89) && !bParam2)
										{
											if (!BitTest(iLocal_154[iVar0], 1))
											{
												func_338(&(iLocal_204[iVar0]), iVar13, 1);
											}
											iLocal_157++;
											iLocal_153[iVar0]++;
										}
										else if (((!bLocal_106 || BitTest(iLocal_154[iVar0], 1)) || iLocal_89) || bParam2)
										{
											if (func_331(&(iLocal_204[iVar0]), iLocal_152[iVar0], fVar6, 1, 0, 0, bLocal_104, bLocal_103))
											{
												unk_0x206AB1458FD9522F(iLocal_204[iVar0], (fParam1 * fLocal_123[iVar0]));
												if (unk_0xD9F5E1FEFD1329E4(iLocal_204[iVar0], 0))
												{
													if (BitTest(iLocal_154[iVar0], 0))
													{
														unk_0xC229299217554C78(iLocal_204[iVar0], 1, 1, 0);
														unk_0x4539850624F18A9E(iLocal_204[iVar0], 1);
														unk_0xBA3C1A9AA7FD9616(iLocal_204[iVar0], 2);
														if (!unk_0x78B050AFBA6D1517(iLocal_197[iVar0]))
														{
															unk_0x8C9AE8FF021E8F23(iLocal_204[iVar0], 1);
														}
													}
												}
												if (!BitTest(iLocal_154[iVar0], 1))
												{
													func_338(&(iLocal_204[iVar0]), iVar13, 1);
												}
												iLocal_157++;
												iLocal_153[iVar0]++;
											}
										}
									}
									else
									{
										if (!BitTest(iLocal_154[iVar0], 1))
										{
											func_338(&(iLocal_204[iVar0]), iVar13, 1);
										}
										iLocal_157++;
										iLocal_153[iVar0]++;
									}
								}
							}
							else
							{
								if (!BitTest(iLocal_154[iVar0], 1))
								{
									func_338(&(iLocal_204[iVar0]), iVar13, 1);
								}
								iLocal_157++;
								iLocal_153[iVar0]++;
							}
						}
					}
					else
					{
						if (!BitTest(iLocal_154[iVar0], 1))
						{
							func_338(&(iLocal_204[iVar0]), iVar13, 1);
						}
						iLocal_157++;
						iLocal_153[iVar0]++;
					}
				}
				else if (iLocal_153[iVar0] == 3)
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_204[iVar0], 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_204[iVar0]))
						{
							iVar1 = unk_0xFD5C5BBD1FE92BB7(iLocal_204[iVar0], -1, 0);
							if (!unk_0x4FAFF4BCB7633475(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_79 && !iLocal_76) && !bLocal_95) && (((!bLocal_104 && !bLocal_103) && unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), iLocal_204[iVar0])) || func_337(iLocal_204[iVar0])))
									{
										if (unk_0xFC8BFE4B41177C22(iVar2))
										{
											bVar8 = false;
											if (bLocal_97)
											{
												bVar8 = true;
											}
											else
											{
												fVar7 = unk_0xDF93B3CFAC96698F(iVar2);
												if (fVar7 < 1f)
												{
													bVar8 = true;
												}
												else if (unk_0x1D5CD3EAAA7422B0((fVar7 - unk_0xDF93B3CFAC96698F(iLocal_204[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!func_336(iLocal_204[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (func_334(iVar2, iLocal_204[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_333(iLocal_204[iVar0]);
												iLocal_153[iVar0]++;
											}
										}
									}
									else
									{
										unk_0x206AB1458FD9522F(iLocal_204[iVar0], (fParam1 * fLocal_123[iVar0]));
									}
								}
							}
							else
							{
								unk_0x1D2DAF2A41FFC4A0(iLocal_204[iVar0]);
							}
						}
						else
						{
							iLocal_153[iVar0]++;
						}
					}
					else
					{
						iLocal_153[iVar0]++;
					}
				}
				else if (iLocal_153[iVar0] == 4)
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_204[iVar0], 0))
					{
						if (!unk_0x050D073F91C5243C(iLocal_204[iVar0]))
						{
							iLocal_153[iVar0]++;
						}
						else
						{
							iVar1 = unk_0xFD5C5BBD1FE92BB7(iLocal_204[iVar0], -1, 0);
							if (!unk_0x4FAFF4BCB7633475(iVar1))
							{
								unk_0x206AB1458FD9522F(iLocal_204[iVar0], (fParam1 * fLocal_123[iVar0]));
							}
							else
							{
								unk_0x1D2DAF2A41FFC4A0(iLocal_204[iVar0]);
							}
							if (unk_0x266D9DB5FCE4003B(iLocal_152[iVar0], &cLocal_185))
							{
								if (fLocal_130 > (fLocal_122[iVar0] + unk_0xE2E30D829A6B8F9E(iLocal_152[iVar0], &cLocal_185)))
								{
									unk_0x1D2DAF2A41FFC4A0(iLocal_204[iVar0]);
								}
							}
							else
							{
								unk_0x1D2DAF2A41FFC4A0(iLocal_204[iVar0]);
							}
						}
					}
					else
					{
						iLocal_153[iVar0]++;
					}
				}
				else if (iLocal_153[iVar0] == 5)
				{
					if (!iLocal_204[iVar0] == iLocal_208)
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_204[iVar0], 0))
						{
							iVar1 = unk_0xFD5C5BBD1FE92BB7(iLocal_204[iVar0], -1, 0);
							if (!unk_0x4FAFF4BCB7633475(iVar1))
							{
								iVar14 = unk_0x9B5C1660CCDF7189(iVar1, joaat("script_task_perform_sequence"));
								if (iVar14 == 7)
								{
									fVar7 = unk_0xDF93B3CFAC96698F(iLocal_204[iVar0]);
									if (fVar7 < 8f)
									{
										fVar7 = 8f;
									}
									if (fVar7 > 62.9f)
									{
										fVar7 = 62.9f;
									}
									unk_0x553B31859911EC59(iVar1, fVar7);
								}
							}
						}
						if (!bLocal_87 && !bLocal_100)
						{
							if (iLocal_152[iVar0] > 0)
							{
								unk_0x7821F942CAEEBEE1(iLocal_152[iVar0], &cLocal_185);
							}
						}
						if (!bLocal_77)
						{
							if (!bLocal_105)
							{
								func_217(iLocal_204[iVar0]);
							}
						}
						else if (unk_0xFC8BFE4B41177C22(iLocal_204[iVar0]))
						{
							unk_0x8C1F7D7A31B2A38E(&(iLocal_204[iVar0]));
						}
					}
					iLocal_157 = (iLocal_157 - 1);
					iLocal_153[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_162 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_216();
	}
}

void func_333(int iParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		func_218(iParam0);
		unk_0x0642B7FD807FF696(iParam0, 786603);
	}
}

int func_334(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
		if (bParam2)
		{
			Var5 = { unk_0xE5741C6B6539231F(iParam1) };
			Var4 = { Var5 / FtoV(vmag(Var5)) };
		}
		else
		{
			Var2 = { unk_0x0D1381B6E0F3987D(iParam1, 0f, 5f, 0f) };
			Var4 = { Var2 - Var1 };
		}
	}
	Var3 = { Var1 - Var0 };
	Var3.f_2 = 0f;
	Var4.f_2 = 0f;
	if (func_335(Var3, Var4) < 0f)
	{
		return 1;
	}
	return 0;
}

float func_335(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_336(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		Var0 = { unk_0x4ED40BE47D8C1896(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
	{
		Var1 = { unk_0x4ED40BE47D8C1896(iParam1, 0) };
	}
	else
	{
		return 0;
	}
	Var0.f_2 = 0f;
	Var1.f_2 = 0f;
	fVar2 = func_335(Var0, Var1);
	if (fVar2 < 0f)
	{
		return 0;
	}
	fVar2 = unk_0x20A3B1C2EC4167BB(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1);
	if (!fVar2 < fParam2)
	{
		return 0;
	}
	return 1;
}

int func_337(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_101)
	{
		iVar1 = unk_0xDC8D5832207C2EAD();
		if (!unk_0x1C2F771CDC87A3A5(iVar1, 0))
		{
			iVar2 = unk_0x4B423FAA24E8ABF0(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (unk_0xA6D8AF5A058A75F0(iVar1))
				{
					if (unk_0x20974C28142EB370(iVar1, &iVar0))
					{
						if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
						{
							if (unk_0x685171EED42BC4DF(iVar0, uParam0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_338(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x1C2F771CDC87A3A5(*uParam0, 0))
	{
		if (unk_0xC39AE5D390581AD5(*uParam0, -1, 0))
		{
			if (iParam1 == 2)
			{
				iVar0 = unk_0x8728A378EF2B46B2(*uParam0, 6, func_221(), -1, 0, 0);
				unk_0x3CEA1FD137ACE2D9(iVar0, iLocal_194);
				unk_0x55098D9E9AD58806(func_221());
			}
			else if (iParam1 == 1)
			{
				iVar0 = unk_0x3CD322135CF08E09(*uParam0, 1);
				if (unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(*uParam0)))
				{
					unk_0x165FAFDA0B5E4A40(iVar0, 1, 4096, -1);
				}
			}
			else
			{
				iVar0 = unk_0x8728A378EF2B46B2(*uParam0, 4, func_224(), -1, 0, 0);
				if (bLocal_107)
				{
					unk_0x55098D9E9AD58806(func_224());
				}
			}
			if (bParam2)
			{
				unk_0x1F7539C841C2A71F(iVar0, 1);
				unk_0xE915224DCA36212A(iVar0, 0);
				unk_0x0428AFDCAA63B06E(iVar0, 32, 0);
			}
			if (bLocal_108)
			{
				unk_0x1CA08719184AFC6F(iVar0, 8192, 1);
				unk_0x1CA08719184AFC6F(iVar0, 65536, 1);
				unk_0x1CA08719184AFC6F(iVar0, 2, 0);
				unk_0xA80E7D11DB73C8BA(*uParam0, 1);
			}
			unk_0xAAA71DD7E9059338(iVar0, 1);
			func_339(iVar0);
			bLocal_106 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_339(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		unk_0xF09E30AF1B8FB379(&iParam0);
	}
}

void func_340(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, 12);
	if (iLocal_199 >= -1 && iLocal_200 >= -1)
	{
		while (iVar0 == iLocal_199 || iVar0 == iLocal_200)
		{
			iVar0++;
		}
	}
	else if (iLocal_199 >= -1)
	{
		if (iVar0 == iLocal_199)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			unk_0xD133EF7430EDCD09(iParam0, 0, 0);
			break;
		
		case 1:
			unk_0xD133EF7430EDCD09(iParam0, 2, 2);
			break;
		
		case 2:
			unk_0xD133EF7430EDCD09(iParam0, 4, 4);
			break;
		
		case 3:
			unk_0xD133EF7430EDCD09(iParam0, 27, 27);
			break;
		
		case 4:
			unk_0xD133EF7430EDCD09(iParam0, 7, 7);
			break;
		
		case 5:
			unk_0xD133EF7430EDCD09(iParam0, 73, 73);
			break;
		
		case 6:
			unk_0xD133EF7430EDCD09(iParam0, 68, 68);
			break;
		
		case 7:
			unk_0xD133EF7430EDCD09(iParam0, 62, 62);
			break;
		
		case 8:
			unk_0xD133EF7430EDCD09(iParam0, 132, 132);
			break;
		
		case 9:
			unk_0xD133EF7430EDCD09(iParam0, 117, 0);
			break;
		
		case 10:
			unk_0xD133EF7430EDCD09(iParam0, 52, 52);
			break;
		
		case 11:
			unk_0xD133EF7430EDCD09(iParam0, 88, 88);
			break;
		
		case 12:
			unk_0xD133EF7430EDCD09(iParam0, 1, 1);
			break;
		
		case 13:
			unk_0xD133EF7430EDCD09(iParam0, 36, 36);
			break;
		
		case 14:
			unk_0xD133EF7430EDCD09(iParam0, 95, 95);
			break;
		
		default:
			unk_0xD133EF7430EDCD09(iParam0, 73, 73);
			break;
	}
}

void func_341(struct<3> Param0, struct<3> Param1, float fParam2)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_88)
	{
		if (!func_342(Param0, Param1, fParam2, 200f))
		{
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				iVar1 = unk_0xDC8D5832207C2EAD();
				if (!unk_0x1C2F771CDC87A3A5(iVar1, 0))
				{
					if (unk_0x65FFA94B82A71741(iVar1, Param0, fParam2, fParam2, fParam2, 0, 1, 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x60040CDD28AA1BC3(Param0, fParam2, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_342(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3)
{
	if (!unk_0x15CCE8886267624F())
	{
		if (!bLocal_88)
		{
			if (!iLocal_75)
			{
				if (vmag2(Param1 - Param0) - fParam2) < (fParam3 * fParam3)
				{
					if (unk_0x7B780C491DEC834E(Param0, fParam2))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_343(int iParam0)
{
	var uVar0;
	
	unk_0xD772E6694B8472A6(iParam0, &cLocal_185);
	while (!unk_0x266D9DB5FCE4003B(iParam0, &cLocal_185))
	{
		wait(0);
	}
	uVar0 = unk_0xE2E30D829A6B8F9E(iParam0, &cLocal_185);
	unk_0x7821F942CAEEBEE1(iParam0, &cLocal_185);
	return uVar0;
}

int func_344(int iParam0)
{
	if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("polmav")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff"))
	{
		return 1;
	}
	return 0;
}

void func_345(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	bool bVar3;
	bool bVar4;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	}
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		bVar3 = false;
		bVar4 = false;
		iVar0 = iLocal_161;
		while (iVar0 < 15)
		{
			switch (iLocal_155[iVar0])
			{
				case 0:
					if (!iLocal_196[iVar0] == 0)
					{
						if (unk_0x65FFA94B82A71741(iParam0, Local_174[iVar0 /*3*/], fLocal_128, fLocal_128, fLocal_128, 0, 1, 0))
						{
							iLocal_163++;
							iLocal_155[iVar0]++;
						}
					}
					else
					{
						iLocal_155[iVar0] = 99;
					}
					break;
				
				case 1:
					if (6 > iLocal_158)
					{
						if (!unk_0xFC8BFE4B41177C22(iLocal_203[iVar0]))
						{
							unk_0xEC9DAA34BBB4658C(iLocal_196[iVar0]);
							if (unk_0x6252BC0DD8A320DB(iLocal_196[iVar0]))
							{
								if ((iLocal_75 || iLocal_89) || (!bLocal_106 && !func_342(Local_174[iVar0 /*3*/], Var1, 5f, fLocal_141)))
								{
									if (bLocal_85)
									{
										func_341(Local_174[iVar0 /*3*/], Var1, fLocal_134);
									}
									iLocal_203[iVar0] = unk_0x5779387E956077A6(iLocal_196[iVar0], Local_174[iVar0 /*3*/], 0f, 0, 0, 0);
									if (iLocal_196[iVar0] == joaat("polmav"))
									{
										unk_0xA1C03303EC67320B(iLocal_203[iVar0], 0);
									}
									unk_0xF425E0B05426E088(iLocal_203[iVar0], fLocal_124[iVar0], fLocal_125[iVar0], fLocal_126[iVar0], fLocal_127[iVar0]);
									unk_0x55098D9E9AD58806(iLocal_196[iVar0]);
									if (unk_0x2E6A27037F1DC473(iLocal_203[iVar0], func_222()))
									{
										unk_0x4539850624F18A9E(iLocal_203[iVar0], 1);
										if (!unk_0x78B050AFBA6D1517(iLocal_196[iVar0]))
										{
											unk_0x8C9AE8FF021E8F23(iLocal_203[iVar0], 1);
										}
									}
									if (unk_0x2E6A27037F1DC473(iLocal_203[iVar0], func_223()))
									{
										unk_0xD133EF7430EDCD09(iLocal_203[iVar0], 0, 0);
									}
									unk_0x11C125313CB8ADA2(iLocal_203[iVar0], 1);
									iLocal_163 = (iLocal_163 - 1);
									iLocal_158++;
									iLocal_155[iVar0]++;
									bLocal_106 = true;
								}
							}
						}
						else
						{
							iLocal_163 = (iLocal_163 - 1);
							iLocal_158++;
							iLocal_155[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar3)
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_203[iVar0], 0))
						{
							Var2 = { unk_0xD1A6A821F5AC81DB(iLocal_203[iVar0], 1) };
						}
						if (fLocal_142 == 0f || vdist2(Var1, Var2) < (fLocal_142 * fLocal_142))
						{
							if (!func_334(iLocal_203[iVar0], iParam0, 0))
							{
								if (!bLocal_77)
								{
									func_217(iLocal_203[iVar0]);
								}
								else
								{
									unk_0x8C1F7D7A31B2A38E(&(iLocal_203[iVar0]));
								}
								iLocal_158 = (iLocal_158 - 1);
								iLocal_155[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_155[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_161 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_219();
	}
}

void func_346(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	var uVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	struct<3> Var19;
	
	iVar5 = 0;
	bVar12 = unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA());
	uVar13 = unk_0x70BB2517035D5D12();
	uVar14 = unk_0x60E0AE8EF70F606A();
	if (bVar12)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar5 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		}
		Var8 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	}
	iVar1 = 0;
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0x050D073F91C5243C(iParam0))
		{
			fLocal_130 = unk_0x157F3D5A4AAB2C50(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_160;
		while (iVar0 < 175 && !bVar17)
		{
			if (iLocal_150[iVar0] != 99)
			{
				if (iLocal_150[iVar0] == 0)
				{
					if (iLocal_149[iVar0] > 0 && iLocal_195[iVar0] != 0)
					{
						if (!iLocal_75)
						{
							if (fLocal_130 < (fLocal_113[iVar0] + 20000f))
							{
								if (fLocal_130 >= (fLocal_113[iVar0] - (7000f * fParam1)))
								{
									if (func_344(iLocal_195[iVar0]))
									{
										unk_0x0B0C9A0F9AAEB7F0(&(iLocal_151[iVar0]), false);
									}
									else if (unk_0x78B050AFBA6D1517(iLocal_195[iVar0]))
									{
										unk_0x0B0C9A0F9AAEB7F0(&(iLocal_151[iVar0]), 2);
									}
									unk_0x8744D2E3FC95740E(&(iLocal_151[iVar0]), true);
									iLocal_165++;
									iLocal_150[iVar0]++;
								}
								else if (iVar1 > 2)
								{
									bVar17 = true;
								}
								else
								{
									iVar1++;
								}
							}
							else
							{
								func_348(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_130 - fLocal_113[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < func_343(iLocal_149[iVar0]))
								{
									if (func_344(iLocal_195[iVar0]))
									{
										unk_0x0B0C9A0F9AAEB7F0(&(iLocal_151[iVar0]), false);
									}
									else if (unk_0x78B050AFBA6D1517(iLocal_195[iVar0]))
									{
										unk_0x0B0C9A0F9AAEB7F0(&(iLocal_151[iVar0]), 2);
									}
									unk_0x8744D2E3FC95740E(&(iLocal_151[iVar0]), true);
									iLocal_165++;
									iLocal_150[iVar0]++;
								}
								else
								{
									func_348(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_348(iVar0, 1090519040);
					}
				}
				else if (iLocal_150[iVar0] == 1)
				{
					unk_0xD772E6694B8472A6(iLocal_149[iVar0], &cLocal_185);
					bVar11 = false;
					if (BitTest(iLocal_151[iVar0], 0))
					{
						unk_0xEC9DAA34BBB4658C(func_221());
						if (unk_0x6252BC0DD8A320DB(func_221()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_102 && ((!BitTest(iLocal_151[iVar0], 2) && uVar13) || (BitTest(iLocal_151[iVar0], 2) && uVar14)))
					{
						bVar11 = true;
					}
					else
					{
						unk_0xEC9DAA34BBB4658C(func_224());
						bVar11 = unk_0x6252BC0DD8A320DB(func_224());
					}
					if (!unk_0xFC8BFE4B41177C22(iLocal_201[iVar0]))
					{
						unk_0xEC9DAA34BBB4658C(iLocal_195[iVar0]);
						if ((unk_0x6252BC0DD8A320DB(iLocal_195[iVar0]) && unk_0x266D9DB5FCE4003B(iLocal_149[iVar0], &cLocal_185)) && bVar11)
						{
							if (fLocal_130 >= (fLocal_113[iVar0] - (fLocal_143 * fParam1)))
							{
								if ((iLocal_89 || iParam2) || (!bLocal_106 && !func_342(Local_173[iVar0 /*3*/], Var8, 5f, fLocal_141)))
								{
									if (bLocal_85)
									{
										func_341(Local_173[iVar0 /*3*/], Var8, fLocal_134);
									}
									iLocal_201[iVar0] = unk_0x5779387E956077A6(iLocal_195[iVar0], Local_173[iVar0 /*3*/], 0f, 0, 0, 0);
									if (iLocal_195[iVar0] == joaat("polmav"))
									{
										unk_0xA1C03303EC67320B(iLocal_201[iVar0], 0);
									}
									if (uLocal_98 && !BitTest(iLocal_151[iVar0], 0))
									{
										func_340(iLocal_201[iVar0]);
									}
									unk_0x62C438C53BB57AFD(iLocal_201[iVar0], Local_173[iVar0 /*3*/], 0, 0, 1);
									unk_0xF425E0B05426E088(iLocal_201[iVar0], fLocal_109[iVar0], fLocal_110[iVar0], fLocal_111[iVar0], fLocal_112[iVar0]);
									if (unk_0xD3CE8D1E6564B011(iLocal_195[iVar0]) || unk_0x78B050AFBA6D1517(iLocal_195[iVar0]))
									{
										unk_0x1DE99C193C7EC64B(iLocal_201[iVar0], 1084227584);
									}
									if (BitTest(iLocal_151[iVar0], 3))
									{
										unk_0x11C125313CB8ADA2(iLocal_201[iVar0], 1);
									}
									if (!BitTest(iLocal_151[iVar0], 0))
									{
										unk_0xC229299217554C78(iLocal_201[iVar0], 1, 1, 0);
										if (unk_0x5295501D0862870D() > 19 || unk_0x5295501D0862870D() < 7)
										{
											unk_0xBA3C1A9AA7FD9616(iLocal_201[iVar0], 3);
										}
									}
									unk_0x5D7CD709B34C90F0(iLocal_201[iVar0], 1);
									unk_0x1F7539C841C2A71F(iLocal_201[iVar0], 1);
									unk_0x55098D9E9AD58806(iLocal_195[iVar0]);
									iLocal_165 = (iLocal_165 - 1);
									iLocal_150[iVar0]++;
									bLocal_106 = true;
								}
								else if (fLocal_130 > fLocal_113[iVar0])
								{
									iLocal_165 = (iLocal_165 - 1);
									func_348(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_150[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_171 || iLocal_171 == 0)) || iLocal_89) || iParam2)
					{
						if (!BitTest(iLocal_151[iVar0], 1))
						{
							if (BitTest(iLocal_151[iVar0], 0))
							{
								unk_0xEC9DAA34BBB4658C(func_221());
								bVar11 = unk_0x6252BC0DD8A320DB(func_221());
								iVar15 = 2;
							}
							else if (!bLocal_102 && ((!BitTest(iLocal_151[iVar0], 2) && uVar13) || (BitTest(iLocal_151[iVar0], 2) && uVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								unk_0xEC9DAA34BBB4658C(func_224());
								bVar11 = unk_0x6252BC0DD8A320DB(func_224());
								iVar15 = 0;
							}
							if (!unk_0x1C2F771CDC87A3A5(iLocal_201[iVar0], 0))
							{
								if (!bLocal_106 && unk_0xC39AE5D390581AD5(iLocal_201[iVar0], -1, 0))
								{
									if (bVar11)
									{
										if ((vdist2(unk_0xD1A6A821F5AC81DB(iLocal_201[iVar0], 1), Var8) < 10000f || iParam2) || iLocal_89)
										{
											func_338(&(iLocal_201[iVar0]), iVar15, 0);
											unk_0x0B0C9A0F9AAEB7F0(&(iLocal_151[iVar0]), true);
										}
									}
								}
							}
						}
						if (unk_0xD9F5E1FEFD1329E4(iLocal_201[iVar0], 0))
						{
							unk_0xD772E6694B8472A6(iLocal_149[iVar0], &cLocal_185);
							if (fLocal_130 >= fLocal_113[iVar0])
							{
								if (12 > iLocal_156)
								{
									fVar9 = (fLocal_130 - fLocal_113[iVar0]);
									if (unk_0x266D9DB5FCE4003B(iLocal_149[iVar0], &cLocal_185))
									{
										if (fVar9 < unk_0xE2E30D829A6B8F9E(iLocal_149[iVar0], &cLocal_185))
										{
											Var6 = { unk_0xD1A6A821F5AC81DB(iLocal_201[iVar0], 1) };
											Var7 = { unk_0x2A03585144C38A2A(iLocal_149[iVar0], fVar9, &cLocal_185) };
											if (!func_342(Var6, Var8, 5f, fLocal_141) && func_342(Var7, Var8, 5f, fLocal_141))
											{
												if (!BitTest(iLocal_151[iVar0], 1))
												{
													func_338(&(iLocal_201[iVar0]), iVar15, 0);
												}
												func_348(iVar0, 1090519040);
											}
											else if (((!bLocal_106 || BitTest(iLocal_151[iVar0], 1)) || iLocal_89) || iParam2)
											{
												if (func_331(&(iLocal_201[iVar0]), iLocal_149[iVar0], fVar9, 1, 0, 0, 1, bLocal_103))
												{
													if (!BitTest(iLocal_151[iVar0], 1))
													{
														func_338(&(iLocal_201[iVar0]), iVar15, 0);
													}
													unk_0x44C48AC14D3C09ED(iLocal_201[iVar0], 1, 0);
													unk_0x206AB1458FD9522F(iLocal_201[iVar0], fParam1);
													iLocal_156++;
													iLocal_150[iVar0]++;
												}
											}
										}
										else
										{
											if (!BitTest(iLocal_151[iVar0], 1))
											{
												func_338(&(iLocal_201[iVar0]), iVar15, 0);
											}
											func_348(iVar0, 1090519040);
										}
									}
									else if (fVar9 > unk_0xE2E30D829A6B8F9E(iLocal_149[iVar0], &cLocal_185))
									{
										if (!BitTest(iLocal_151[iVar0], 1))
										{
											func_338(&(iLocal_201[iVar0]), iVar15, 0);
										}
										func_348(iVar0, 1090519040);
									}
								}
								else
								{
									if (!BitTest(iLocal_151[iVar0], 1))
									{
										func_338(&(iLocal_201[iVar0]), iVar15, 0);
									}
									func_348(iVar0, 1090519040);
								}
							}
							else if (iLocal_86 && !bLocal_94)
							{
								if (!BitTest(iLocal_151[iVar0], 1))
								{
									func_338(&(iLocal_201[iVar0]), iVar15, 0);
								}
								func_348(iVar0, 1090519040);
							}
						}
						else
						{
							if (!BitTest(iLocal_151[iVar0], 1))
							{
								func_338(&(iLocal_201[iVar0]), iVar15, 0);
							}
							func_348(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_171 = iVar0;
					}
				}
				else if (iLocal_150[iVar0] == 3)
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_201[iVar0], 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_201[iVar0]))
						{
							iVar4 = unk_0xFD5C5BBD1FE92BB7(iLocal_201[iVar0], -1, 0);
							if (!unk_0x4FAFF4BCB7633475(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_84)
									{
										if ((!bLocal_79 && !iLocal_76) && func_337(iLocal_201[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_170 || iLocal_170 == 0))
											{
												if (!unk_0x1C2F771CDC87A3A5(iVar5, 0))
												{
													bVar11 = false;
													if (!func_347(iLocal_201[iVar0], iVar5) || func_334(iVar5, iLocal_201[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_170 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_99 && !BitTest(iLocal_151[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_170 || iLocal_170 == 0))
										{
											Var19 = { unk_0xAD8278DAEC2CC059(iParam0, unk_0xD1A6A821F5AC81DB(iLocal_201[iVar0], 1)) };
											if (Var19.f_1 < 0f)
											{
												if (unk_0x1D5CD3EAAA7422B0(Var19.f_1) > unk_0x1D5CD3EAAA7422B0(Var19.f_0))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_170 = iVar0;
										}
									}
									if (bVar18)
									{
										func_333(iLocal_201[iVar0]);
										iLocal_150[iVar0]++;
									}
									else
									{
										unk_0x206AB1458FD9522F(iLocal_201[iVar0], fParam1);
									}
								}
							}
							else
							{
								unk_0x1D2DAF2A41FFC4A0(iLocal_201[iVar0]);
							}
						}
						else
						{
							iLocal_150[iVar0]++;
						}
					}
					else
					{
						iLocal_150[iVar0]++;
					}
				}
				else if (iLocal_150[iVar0] == 4)
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_201[iVar0], 0))
					{
						if (!unk_0x050D073F91C5243C(iLocal_201[iVar0]))
						{
							iLocal_150[iVar0]++;
						}
						else
						{
							iVar4 = unk_0xFD5C5BBD1FE92BB7(iLocal_201[iVar0], -1, 0);
							if (!unk_0x4FAFF4BCB7633475(iVar4))
							{
								unk_0x206AB1458FD9522F(iLocal_201[iVar0], fParam1);
							}
							else
							{
								unk_0x1D2DAF2A41FFC4A0(iLocal_201[iVar0]);
							}
							if (unk_0x266D9DB5FCE4003B(iLocal_149[iVar0], &cLocal_185))
							{
								if (fLocal_130 > (fLocal_113[iVar0] + unk_0xE2E30D829A6B8F9E(iLocal_149[iVar0], &cLocal_185)))
								{
									unk_0x1D2DAF2A41FFC4A0(iLocal_201[iVar0]);
								}
							}
							else
							{
								unk_0x1D2DAF2A41FFC4A0(iLocal_201[iVar0]);
							}
						}
					}
					else
					{
						iLocal_150[iVar0]++;
					}
				}
				else if (iLocal_150[iVar0] == 5)
				{
					if (!unk_0x1C2F771CDC87A3A5(iLocal_201[iVar0], 0))
					{
						fVar10 = unk_0xDF93B3CFAC96698F(iLocal_201[iVar0]);
					}
					iLocal_156 = (iLocal_156 - 1);
					func_348(iVar0, fVar10);
				}
				if (iVar16 == -1)
				{
					iVar16 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar16 != -1)
		{
			iLocal_160 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_170 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_171 = 0;
		}
	}
	else
	{
		func_220();
	}
}

int func_347(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		Var0 = { unk_0x4ED40BE47D8C1896(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
	{
		Var1 = { unk_0x4ED40BE47D8C1896(iParam1, 0) };
	}
	else
	{
		return 0;
	}
	Var0.f_2 = 0f;
	Var1.f_2 = 0f;
	fVar2 = func_335(Var0, Var1);
	if (fVar2 < 0f)
	{
		return 0;
	}
	return 1;
}

void func_348(int iParam0, float fParam1)
{
	int iVar0;
	
	if (!iLocal_195[iParam0] == 0)
	{
		unk_0x55098D9E9AD58806(iLocal_195[iParam0]);
	}
	if (!unk_0x1C2F771CDC87A3A5(iLocal_201[iParam0], 0))
	{
		unk_0x44C48AC14D3C09ED(iLocal_201[iParam0], 1, 0);
		unk_0x5D7CD709B34C90F0(iLocal_201[iParam0], 0);
		iVar0 = unk_0xFD5C5BBD1FE92BB7(iLocal_201[iParam0], -1, 0);
		if (!unk_0x4FAFF4BCB7633475(iVar0) && iVar0 != unk_0x4A8C381C258A124D())
		{
			unk_0xAAA71DD7E9059338(iVar0, 0);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f)
			{
				fParam1 = 62.9f;
			}
			unk_0xB3DA477F44309390(iVar0, iLocal_201[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			unk_0x1CA08719184AFC6F(iVar0, 8192, 1);
			if (bLocal_108)
			{
				unk_0x1CA08719184AFC6F(iVar0, 65536, 1);
				unk_0x1CA08719184AFC6F(iVar0, 2, 0);
			}
			unk_0xBE8796DB2B90A437(iVar0, 6, 0);
			unk_0x553B31859911EC59(iVar0, fParam1);
		}
	}
	if (!bLocal_77)
	{
		if (!bLocal_105)
		{
			func_339(iVar0);
			func_217(iLocal_201[iParam0]);
		}
	}
	else
	{
		if (unk_0xFC8BFE4B41177C22(iVar0))
		{
			unk_0x734A9F4537A31459(&iVar0);
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_201[iParam0]))
		{
			unk_0x8C1F7D7A31B2A38E(&(iLocal_201[iParam0]));
		}
	}
	if (!bLocal_87 && !bLocal_100)
	{
		if (iLocal_149[iParam0] > 0)
		{
			unk_0x7821F942CAEEBEE1(iLocal_149[iParam0], &cLocal_185);
		}
	}
	iLocal_150[iParam0] = 99;
}

void func_349(int iParam0, float fParam1, float fParam2)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		Var4 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	}
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0x050D073F91C5243C(iParam0))
		{
			uVar0 = unk_0x0008A5B9B95FED93(iParam0);
			Var1 = { unk_0x763EEC52E292B5A0(uVar0, fParam1) };
			Var2 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
			Var3 = { Var2 - Var1 };
			fVar5 = vmag(Var3);
			if (fVar5 > fParam2)
			{
				fVar5 = fParam2;
			}
			func_341(Var1, Var4, fVar5);
		}
	}
}

void func_350(int iParam0, float fParam1)
{
	if (!bLocal_88)
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (vdist2(unk_0xD1A6A821F5AC81DB(iParam0, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) > (fParam1 * fParam1))
				{
					unk_0x283C0970282AA5F3(1);
				}
				else
				{
					unk_0x283C0970282AA5F3(0);
				}
			}
		}
	}
}

void func_351(int iParam0, float fParam1)
{
	if (!bLocal_88)
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (vdist2(unk_0xD1A6A821F5AC81DB(iParam0, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) > (fParam1 * fParam1))
				{
					unk_0xA0265306DFF63938(1f);
				}
				else
				{
					unk_0xA0265306DFF63938(0f);
				}
			}
		}
	}
}

void func_352(int iParam0, float fParam1)
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0) && unk_0x050D073F91C5243C(iParam0))
	{
		fVar1 = (fLocal_144 + 2000f);
		fVar2 = (fLocal_145 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = unk_0x0008A5B9B95FED93(iParam0);
			if (fVar1 <= unk_0x1F921E74406AE806(uVar0))
			{
				if (iLocal_166 == 0)
				{
					Local_181 = { unk_0x763EEC52E292B5A0(uVar0, fLocal_144) };
					iLocal_166++;
				}
				else if (iLocal_166 == 1)
				{
					Local_182 = { unk_0x763EEC52E292B5A0(iVar0, fVar1) };
					iLocal_166++;
				}
				else if (!bLocal_106)
				{
					if (Local_181.f_0 > Local_182.f_0)
					{
						fVar3 = Local_181.f_0;
						Local_181.f_0 = Local_182.f_0;
						Local_182.f_0 = fVar3;
					}
					if (Local_181.f_1 > Local_182.f_1)
					{
						fVar3 = Local_181.f_1;
						Local_181.f_1 = Local_182.f_1;
						Local_182.f_1 = fVar3;
					}
					if (Local_181.f_2 > Local_182.f_2)
					{
						fVar3 = Local_181.f_2;
						Local_181.f_2 = Local_182.f_2;
						Local_182.f_2 = fVar3;
					}
					Local_181 = { Local_181 - Vector(fLocal_148, fLocal_148, fLocal_148) };
					Local_182 = { Local_182 + Vector(fLocal_148, fLocal_148, fLocal_148) };
					unk_0xD1B0AF388B711EBC(Local_181, Local_182, 0, 0);
					fLocal_144 = fVar1;
					iLocal_166 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = unk_0x0008A5B9B95FED93(iParam0);
			if (iLocal_169 == 0)
			{
				Local_183 = { unk_0x763EEC52E292B5A0(iVar0, fLocal_145) };
				iLocal_169++;
			}
			else if (iLocal_169 == 1)
			{
				Local_184 = { unk_0x763EEC52E292B5A0(iVar0, fVar2) };
				iLocal_169++;
			}
			else if (!bLocal_106 && !bVar4)
			{
				if (Local_183.f_0 > Local_184.f_0)
				{
					fVar3 = Local_183.f_0;
					Local_183.f_0 = Local_184.f_0;
					Local_184.f_0 = fVar3;
				}
				if (Local_183.f_1 > Local_184.f_1)
				{
					fVar3 = Local_183.f_1;
					Local_183.f_1 = Local_184.f_1;
					Local_184.f_1 = fVar3;
				}
				if (Local_183.f_2 > Local_184.f_2)
				{
					fVar3 = Local_183.f_2;
					Local_183.f_2 = Local_184.f_2;
					Local_184.f_2 = fVar3;
				}
				Local_183 = { Local_183 - Vector(fLocal_148, fLocal_148, fLocal_148) };
				Local_184 = { Local_184 + Vector(fLocal_148, fLocal_148, fLocal_148) };
				unk_0x33B6B083EA6305A5(Local_183, Local_184, 1);
				fLocal_145 = fVar2;
				iLocal_169 = 0;
			}
		}
	}
}

int func_353(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
		{
			if (unk_0xCECDBB848D53DEB2(iParam0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
		Var2 = { unk_0x0D1381B6E0F3987D(iParam1, 0f, 5f, 0f) };
		Var4 = { Var2 - Var1 };
	}
	Var3 = { Var1 - Var0 };
	Var3.f_2 = 0f;
	Var4.f_2 = 0f;
	fVar5 = func_335(Var3, Var4);
	if (fVar5 < 0f)
	{
		return 1;
	}
	return 0;
}

void func_354()
{
	unk_0xA63572E348CC4CFB(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
	unk_0xECDFDC2E8AC2D613(0);
	unk_0x474491073FE815A8(0);
	unk_0xEFAF1ADDE0F583C3(0);
	unk_0xA0265306DFF63938(0f);
	unk_0x283C0970282AA5F3(0);
	unk_0xAD9B1C8FED6B4D96(3);
}

void func_355(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (iLocal_91 == 0)
	{
		if (*fParam2 < fParam3)
		{
			*fParam2 = fParam3;
			iLocal_91 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_139;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = func_358(iParam0, iParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		if (func_353(iParam1, iParam0))
		{
			if (unk_0x7F420695E3F776FB(iParam1, 0))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (func_357(iParam0, iParam1) < fParam5)
			{
				fVar1 = func_356(iParam0, iParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			iLocal_92 = 1;
		}
		else if (iLocal_92)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_92 = 0;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *fParam2);
	if (fVar1 > 0f)
	{
		fVar1 = unk_0x0B852B0BF94A8DC1();
		fVar8 = ((fLocal_146 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	else
	{
		fVar1 = unk_0x0B852B0BF94A8DC1();
		fVar8 = ((fLocal_147 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!unk_0x4FAFF4BCB7633475(iParam1))
		{
			if (unk_0x7F420695E3F776FB(iParam1, 0))
			{
				iVar9 = unk_0x6EF03BE64E058E2F(iParam1, 0);
				if (!unk_0x1C2F771CDC87A3A5(iVar9, 0))
				{
					iVar10 = unk_0x4B423FAA24E8ABF0(iVar9);
					if (unk_0xD3CE8D1E6564B011(iVar10) || unk_0x78B050AFBA6D1517(iVar10))
					{
						if (unk_0xD9F5E1FEFD1329E4(iVar9, 0))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_137 - fLocal_138));
							fVar1 = (fVar1 + fLocal_138);
							fLocal_136 = fVar1;
							if (fLocal_136 < fLocal_138)
							{
								fLocal_136 = fLocal_138;
							}
							if (fLocal_136 > fLocal_137)
							{
								fLocal_136 = fLocal_137;
							}
							unk_0x7BFF320D45B40B56(unk_0x259BE71D8A81D4FA(), fLocal_136);
						}
					}
				}
			}
		}
	}
}

var func_356(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	var uVar4;
	int iVar5;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		Var0.f_0 = unk_0xE4833C1EFC5928A6(iParam0);
		Var0.f_1 = unk_0xD7A7E267DEDA742E(iParam0);
	}
	if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
		if (unk_0x7F420695E3F776FB(iParam1, 0))
		{
			iVar5 = unk_0x6EF03BE64E058E2F(iParam1, 0);
			Var3.f_0 = unk_0xE4833C1EFC5928A6(iVar5);
			Var3.f_1 = unk_0xD7A7E267DEDA742E(iVar5);
		}
		else
		{
			Var2 = { unk_0x0D1381B6E0F3987D(iParam1, 0f, 5f, 0f) };
			Var3 = { Var2 - Var1 };
		}
	}
	uVar4 = unk_0x20A3B1C2EC4167BB(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1);
	return uVar4;
}

float func_357(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
	}
	Var2 = { Var1 - Var0 };
	Var2.f_2 = 0f;
	fVar3 = vmag(Var2);
	return fVar3;
}

float func_358(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		Var0.f_0 = unk_0xE4833C1EFC5928A6(iParam0);
		Var0.f_1 = unk_0xD7A7E267DEDA742E(iParam0);
		Var2 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		Var3 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
	}
	Var1 = { Var3 - Var2 };
	fVar4 = unk_0x20A3B1C2EC4167BB(Var1.f_0, Var1.f_1, Var0.f_0, Var0.f_1);
	fVar4 = (fVar4 + -90f);
	if (fVar4 < 0f)
	{
		fVar4 = (fVar4 * -1f);
	}
	Var1.f_2 = 0f;
	return (vmag(Var1) * sin(fVar4));
}

int func_359()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_278))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
		{
			if (!unk_0xCB5CAFF0A4A8B74B(iLocal_278))
			{
				iLocal_396 = 1;
			}
			else
			{
				iLocal_396 = 0;
			}
		}
		else
		{
			iLocal_396 = 1;
		}
	}
	else
	{
		iLocal_396 = 1;
	}
	iLocal_232 = 0;
	while (iLocal_232 <= 24)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_204[iLocal_232]))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_204[iLocal_232], 0))
			{
				if (!unk_0xCB5CAFF0A4A8B74B(iLocal_204[iLocal_232]))
				{
					iLocal_397[iLocal_232] = 1;
				}
				else
				{
					iLocal_397[iLocal_232] = 0;
				}
			}
			else
			{
				iLocal_397[iLocal_232] = 1;
			}
		}
		else
		{
			iLocal_397[iLocal_232] = 1;
		}
		iLocal_232++;
	}
	if (((((((((((((((((((((((((iLocal_396 == 1 && iLocal_397[0] == 1) && iLocal_397[1] == 1) && iLocal_397[2] == 1) && iLocal_397[3] == 1) && iLocal_397[4] == 1) && iLocal_397[5] == 1) && iLocal_397[6] == 1) && iLocal_397[7] == 1) && iLocal_397[8] == 1) && iLocal_397[9] == 1) && iLocal_397[10] == 1) && iLocal_397[11] == 1) && iLocal_397[12] == 1) && iLocal_397[13] == 1) && iLocal_397[14] == 1) && iLocal_397[15] == 1) && iLocal_397[16] == 1) && iLocal_397[17] == 1) && iLocal_397[18] == 1) && iLocal_397[19] == 1) && iLocal_397[20] == 1) && iLocal_397[21] == 1) && iLocal_397[22] == 1) && iLocal_397[23] == 1) && iLocal_397[24] == 1)
	{
		return 1;
	}
	return 0;
}

void func_360()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	
	if (unk_0xFC8BFE4B41177C22(iLocal_204[4]))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_204[4], 0))
		{
			if (unk_0x050D073F91C5243C(iLocal_204[4]))
			{
				Local_309 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
				Var1 = { unk_0xD1A6A821F5AC81DB(iLocal_204[4], 1) };
				if (Local_309.f_0 < (Var1.f_0 - 10f) && !unk_0xCB5CAFF0A4A8B74B(iLocal_204[4]))
				{
					unk_0x1D2DAF2A41FFC4A0(iLocal_204[4]);
					unk_0x68298CA6191CDFDB(&(iLocal_204[4]));
				}
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_204[3]))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_204[3], 0))
		{
			if (unk_0x050D073F91C5243C(iLocal_204[3]))
			{
				Local_309 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
				Var0 = { unk_0xD1A6A821F5AC81DB(iLocal_204[3], 1) };
				if (Local_309.f_0 < (Var0.f_0 - 10f) && !unk_0xCB5CAFF0A4A8B74B(iLocal_204[3]))
				{
					unk_0x1D2DAF2A41FFC4A0(iLocal_204[3]);
					unk_0x68298CA6191CDFDB(&(iLocal_204[3]));
				}
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_204[21]))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_204[21], 0))
		{
			if (unk_0x050D073F91C5243C(iLocal_204[21]))
			{
				Local_309 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
				Var2 = { unk_0xD1A6A821F5AC81DB(iLocal_204[21], 1) };
				if (Local_309.f_0 < (Var2.f_0 - 10f) && !unk_0xCB5CAFF0A4A8B74B(iLocal_204[21]))
				{
					unk_0x1D2DAF2A41FFC4A0(iLocal_204[21]);
					unk_0x68298CA6191CDFDB(&(iLocal_204[21]));
				}
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_204[0]))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_204[0], 0))
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_278))
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
				{
					if (unk_0x050D073F91C5243C(iLocal_278))
					{
						if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 50000f && !unk_0xCB5CAFF0A4A8B74B(iLocal_204[0]))
						{
							if (unk_0x050D073F91C5243C(iLocal_204[0]))
							{
								unk_0x1D2DAF2A41FFC4A0(iLocal_204[0]);
							}
							unk_0x68298CA6191CDFDB(&(iLocal_204[0]));
						}
					}
				}
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_282))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_282, 0))
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_278))
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
				{
					if (unk_0x050D073F91C5243C(iLocal_278))
					{
						if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 90000f && !unk_0xCB5CAFF0A4A8B74B(iLocal_282))
						{
							unk_0x182120534CCF9023(uLocal_667[0], 0);
							unk_0x182120534CCF9023(uLocal_667[1], 0);
							unk_0x182120534CCF9023(uLocal_667[2], 0);
							if (unk_0xFC8BFE4B41177C22(iLocal_265[0]))
							{
								unk_0xF09E30AF1B8FB379(&(iLocal_265[0]));
							}
							if (unk_0xFC8BFE4B41177C22(iLocal_265[1]))
							{
								unk_0xF09E30AF1B8FB379(&(iLocal_265[1]));
							}
							if (unk_0xFC8BFE4B41177C22(iLocal_265[2]))
							{
								unk_0xF09E30AF1B8FB379(&(iLocal_265[2]));
							}
							if (unk_0xFC8BFE4B41177C22(iLocal_265[3]))
							{
								unk_0xF09E30AF1B8FB379(&(iLocal_265[3]));
							}
							unk_0x68298CA6191CDFDB(&iLocal_282);
							unk_0x268BE77F77533D03("missheist_agency3aig_lift_waitped_a");
						}
					}
				}
			}
		}
	}
}

void func_361(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xC450B06E5AAA0985(uParam0))
	{
		if ((unk_0xFC8BFE4B41177C22(iParam1) && unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D())) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x55B80B6E7AB61270(iParam1))
			{
				if (unk_0xD9F5E1FEFD1329E4(unk_0xE93EDE86BBB66532(iParam1), 0))
				{
					fVar1 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x861AC9C2D48CEA7F(uParam0, 1);
						unk_0xF42EBD7CD0682A8B(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x861AC9C2D48CEA7F(uParam0, 0);
						unk_0xF42EBD7CD0682A8B(uParam0, 255);
					}
				}
			}
			else if (unk_0x0101C509A6E67F99(iParam1))
			{
				if (!unk_0x4FAFF4BCB7633475(unk_0xBD545F8729E9F413(iParam1)))
				{
					fVar1 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x861AC9C2D48CEA7F(uParam0, 1);
						unk_0xF42EBD7CD0682A8B(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x861AC9C2D48CEA7F(uParam0, 0);
						unk_0xF42EBD7CD0682A8B(uParam0, 255);
					}
				}
			}
		}
	}
}

void func_362()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_204[2]))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_204[2], 0))
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_278))
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
				{
					if (unk_0x050D073F91C5243C(iLocal_278))
					{
						if (unk_0x157F3D5A4AAB2C50(iLocal_278) < 50530f)
						{
							if (!unk_0x182BD9AD1675B5DE(iLocal_204[2]))
							{
								unk_0xC229299217554C78(iLocal_204[2], 1, 1, 0);
							}
						}
						else if (unk_0x182BD9AD1675B5DE(iLocal_204[2]))
						{
							unk_0xC229299217554C78(iLocal_204[2], 0, 0, 0);
						}
					}
				}
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_204[5]))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_204[5], 0))
		{
			if (!unk_0x182BD9AD1675B5DE(iLocal_204[5]))
			{
				unk_0xC229299217554C78(iLocal_204[5], 1, 1, 0);
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_280[0]))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_280[0], 0))
		{
			if (!unk_0x182BD9AD1675B5DE(iLocal_280[0]))
			{
				unk_0xC229299217554C78(iLocal_280[0], 1, 1, 0);
			}
			if (unk_0xC39AE5D390581AD5(iLocal_280[0], -1, 0))
			{
				if (!unk_0xFC8BFE4B41177C22(iLocal_276[0]))
				{
					unk_0xEC9DAA34BBB4658C(joaat("s_m_m_gentransport"));
					if (unk_0x6252BC0DD8A320DB(joaat("s_m_m_gentransport")))
					{
						iLocal_276[0] = unk_0x8728A378EF2B46B2(iLocal_280[0], 26, joaat("s_m_m_gentransport"), -1, 1, 1);
						unk_0x55098D9E9AD58806(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_280[1]))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_280[1], 0))
		{
			if (!unk_0x182BD9AD1675B5DE(iLocal_280[1]))
			{
				unk_0xC229299217554C78(iLocal_280[1], 1, 1, 0);
			}
			if (unk_0xC39AE5D390581AD5(iLocal_280[1], -1, 0))
			{
				if (!unk_0xFC8BFE4B41177C22(iLocal_276[1]))
				{
					unk_0xEC9DAA34BBB4658C(joaat("s_m_m_gentransport"));
					if (unk_0x6252BC0DD8A320DB(joaat("s_m_m_gentransport")))
					{
						iLocal_276[1] = unk_0x8728A378EF2B46B2(iLocal_280[1], 26, joaat("s_m_m_gentransport"), -1, 1, 1);
						unk_0x55098D9E9AD58806(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
}

void func_363()
{
	if (iLocal_223 == 0)
	{
		unk_0xD7E1DF759CD0FFF2("SCRIPT\Trv_4_747_Cop_Cars", 0, -1);
		unk_0xD7E1DF759CD0FFF2("SCRIPT\Trv_4_747_Plane_Explosion", 0, -1);
		unk_0xD7E1DF759CD0FFF2("SCRIPT\Trv_4_747_Tanker_Explosion", 0, -1);
		unk_0xD7E1DF759CD0FFF2("SCRIPT\TV_Monitors", 0, -1);
		if (iLocal_385 == 0)
		{
			iLocal_255 = unk_0xCA369FBC0DE29517();
			iLocal_385 = 1;
		}
		if (iLocal_386 == 0)
		{
			iLocal_256 = unk_0xCA369FBC0DE29517();
			iLocal_386 = 1;
		}
		if (iLocal_387 == 0)
		{
			iLocal_257 = unk_0xCA369FBC0DE29517();
			iLocal_387 = 1;
		}
		if (iLocal_388 == 0)
		{
			iLocal_258 = unk_0xCA369FBC0DE29517();
			iLocal_388 = 1;
		}
		if (iLocal_389 == 0)
		{
			iLocal_259 = unk_0xCA369FBC0DE29517();
			iLocal_389 = 1;
		}
		if (iLocal_384 == 0)
		{
			iLocal_260 = unk_0xCA369FBC0DE29517();
			iLocal_384 = 1;
		}
		if (iLocal_390 == 0)
		{
			iLocal_261 = unk_0xCA369FBC0DE29517();
			iLocal_390 = 1;
		}
		if (iLocal_343 == 1)
		{
			func_123();
			iLocal_343 = 0;
		}
		if (!unk_0x78411E34CF90EA8C(uLocal_301))
		{
			uLocal_301 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 1);
			unk_0x58BDA5D9262F5D30(uLocal_301, 40f);
		}
		iLocal_341 = 0;
		iLocal_335 = 0;
		iLocal_347 = 0;
		iLocal_331 = 0;
		iLocal_326 = 0;
		iLocal_332 = 0;
		iLocal_325 = 0;
		iLocal_361 = 0;
		iLocal_363[0] = 0;
		iLocal_364[0] = 0;
		iLocal_363[1] = 0;
		iLocal_364[1] = 0;
		iLocal_363[2] = 0;
		iLocal_365 = 0;
		iLocal_366 = 0;
		iLocal_329 = 0;
		iLocal_330 = 0;
		iLocal_328 = 0;
		iLocal_370 = 0;
		iLocal_373 = 0;
		iLocal_374 = 0;
		iLocal_375 = 0;
		iLocal_377 = 0;
		iLocal_376 = 0;
		iLocal_378 = 0;
		iLocal_379 = 0;
		iLocal_380 = 0;
		iLocal_381 = 0;
		iLocal_382 = 0;
		iLocal_383 = 0;
		iLocal_391 = 0;
		iLocal_392 = 0;
		iLocal_394 = 0;
		iLocal_395 = 0;
		iLocal_402 = 0;
		iLocal_403 = 0;
		iLocal_467 = 0;
		iLocal_349 = 1;
		iLocal_350 = 1;
		iLocal_358 = 1;
		iLocal_408 = 0;
		iLocal_409 = 0;
		iLocal_415 = 0;
		iLocal_417 = 0;
		iLocal_424 = 0;
		iLocal_425 = 0;
		iLocal_427 = 0;
		iLocal_429[0] = 0;
		iLocal_429[1] = 0;
		iLocal_430[0] = 0;
		iLocal_430[1] = 0;
		iLocal_431 = 0;
		iLocal_432 = 0;
		iLocal_434 = 0;
		iLocal_439 = 0;
		iLocal_440 = 0;
		iLocal_441 = 0;
		iLocal_462 = 0;
		iLocal_463 = 0;
		iLocal_468 = 0;
		iLocal_227 = 0;
		iLocal_240 = 0;
		iLocal_231 = 0;
		while (iLocal_231 <= 2)
		{
			iLocal_465[iLocal_231] = 0;
			iLocal_466[iLocal_231] = 0;
			iLocal_231++;
		}
		iLocal_231 = 0;
		while (iLocal_231 <= 2)
		{
			iLocal_487[iLocal_231] = 0;
			iLocal_231++;
		}
		iLocal_231 = 0;
		while (iLocal_231 <= 6)
		{
			iLocal_435[iLocal_231] = 0;
			iLocal_436[iLocal_231] = 0;
			iLocal_231++;
		}
		unk_0x8003D3C0115A1035();
		iLocal_89 = 1;
		bLocal_95 = true;
		func_300();
		uLocal_226 = unk_0xB803C9D209A7C3DC();
		unk_0x2094BC4B6731BA68(-823.71f, -2548.2f, 13.75f, 20f, 1, 0, 0, 0);
		unk_0x89C4F1335B4A6633(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f);
		unk_0x79CA429D8B4B057A(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, 0, 0);
		unk_0xD1B0AF388B711EBC(-482f, -2118f, 6f, -1072f, -2724f, 17f, 0, 1);
		func_129(2, 1);
		func_365("BB_Chase", 45, 0, 1);
		unk_0xDAE61414743C8D1D(3);
		func_17(&uLocal_490, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
		if (unk_0x15CCE8886267624F())
		{
			if (!func_24())
			{
				unk_0x6C39BDF5EA5D38FC(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1));
			}
			func_21(iLocal_279, -1, 1);
		}
		iLocal_224 = 0;
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), true, 0);
		func_364();
		iLocal_223 = 2;
	}
	if (iLocal_223 == 2)
	{
		if (!unk_0xFC8BFE4B41177C22(iLocal_287))
		{
			iLocal_287 = unk_0x5779387E956077A6(joaat("blista"), 0f, 0f, 1f, 0f, 1, 1, 0);
		}
		while (!unk_0x266D9DB5FCE4003B(45, "BB_Chase"))
		{
			wait(0);
		}
		if (unk_0x15CCE8886267624F())
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_279, 0))
			{
				unk_0xC229299217554C78(iLocal_279, 1, 1, 0);
				unk_0x93C337B66C95C99B(iLocal_279, 30f);
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), true, 0);
			}
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_278))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
			{
				unk_0x88556DA0593A0748(iLocal_278, 45, "BB_Chase", 1);
				settimerb(0);
				func_283();
				unk_0xF6ECB54A7941386F(2);
				if (unk_0xFC8BFE4B41177C22(iLocal_279))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_279, 0))
					{
						unk_0x68298CA6191CDFDB(&iLocal_279);
					}
				}
				if (!unk_0x9390801B06EE998F())
				{
					unk_0x10B228D2FDB7AF16(800);
				}
				iLocal_223 = 0;
				iLocal_222 = 4;
			}
		}
	}
}

void func_364()
{
	Local_174[0 /*3*/] = { -583.6427f, -2157.497f, 5.7947f };
	fLocal_124[0] = -0.0003f;
	fLocal_125[0] = -0.0085f;
	fLocal_126[0] = 0.9998f;
	fLocal_127[0] = 0.0158f;
	iLocal_196[0] = joaat("blista");
	Local_173[4 /*3*/] = { -827.2035f, -2575.697f, 13.5688f };
	fLocal_109[4] = 0.0004f;
	fLocal_110[4] = -0.0003f;
	fLocal_111[4] = -0.2526f;
	fLocal_112[4] = 0.9676f;
	iLocal_149[4] = 50;
	fLocal_113[4] = 20310f;
	iLocal_195[4] = joaat("manana");
	Local_174[1 /*3*/] = { -1033.717f, -2949.014f, 13.4922f };
	fLocal_124[1] = 0.0032f;
	fLocal_125[1] = -0.0003f;
	fLocal_126[1] = -0.0255f;
	fLocal_127[1] = 0.9997f;
	iLocal_196[1] = joaat("bison2");
	Local_175[0 /*3*/] = { -1178.365f, -2845.981f, 13.9027f };
	fLocal_118[0] = 0.0018f;
	fLocal_119[0] = 0.0123f;
	fLocal_120[0] = 0.9644f;
	fLocal_121[0] = 0.2642f;
	iLocal_152[0] = 9;
	fLocal_122[0] = 22357f;
	fLocal_123[0] = 1f;
	iLocal_197[0] = joaat("buzzard");
	Local_175[1 /*3*/] = { -1376.197f, -2755.167f, 14.0646f };
	fLocal_118[1] = -0.0012f;
	fLocal_119[1] = 0.0013f;
	fLocal_120[1] = 0.8439f;
	fLocal_121[1] = -0.5365f;
	iLocal_152[1] = 10;
	fLocal_122[1] = 27135f;
	fLocal_123[1] = 1f;
	iLocal_197[1] = joaat("packer");
	Local_175[2 /*3*/] = { -1342.543f, -2688.482f, 22.8254f };
	fLocal_118[2] = 0.0057f;
	fLocal_119[2] = -0.0014f;
	fLocal_120[2] = -0.2451f;
	fLocal_121[2] = 0.9695f;
	iLocal_152[2] = 11;
	fLocal_122[2] = 35135f;
	fLocal_123[2] = 1f;
	iLocal_197[2] = joaat("jet");
	Local_175[3 /*3*/] = { -898.3506f, -2698.965f, 20.159f };
	fLocal_118[3] = 0.0065f;
	fLocal_119[3] = 0.0191f;
	fLocal_120[3] = -0.2629f;
	fLocal_121[3] = 0.9646f;
	iLocal_152[3] = 3;
	fLocal_122[3] = 6764f;
	fLocal_123[3] = 1f;
	iLocal_197[3] = joaat("bus");
	Local_175[4 /*3*/] = { -576.655f, -2231.905f, 5.2834f };
	fLocal_118[4] = 0.0043f;
	fLocal_119[4] = 0.0331f;
	fLocal_120[4] = -0.3125f;
	fLocal_121[4] = 0.9493f;
	iLocal_152[4] = 4;
	fLocal_122[4] = 2102f;
	fLocal_123[4] = 1f;
	iLocal_197[4] = joaat("bison");
	Local_175[5 /*3*/] = { -994.9925f, -3154.125f, 23.1145f };
	fLocal_118[5] = 0.0056f;
	fLocal_119[5] = 0.0029f;
	fLocal_120[5] = 0.4915f;
	fLocal_121[5] = 0.8708f;
	iLocal_152[5] = 21;
	fLocal_122[5] = 92500f;
	fLocal_123[5] = 1f;
	iLocal_197[5] = joaat("jet");
	Local_175[7 /*3*/] = { -553.3315f, -2073.951f, 6.8909f };
	fLocal_118[7] = 0.0072f;
	fLocal_119[7] = 0.0176f;
	fLocal_120[7] = 0.9739f;
	fLocal_121[7] = -0.2263f;
	iLocal_152[7] = 54;
	fLocal_122[7] = 0f;
	fLocal_123[7] = 1f;
	iLocal_197[7] = joaat("police3");
	Local_175[8 /*3*/] = { -561.7264f, -2076.761f, 6.7664f };
	fLocal_118[8] = -0.027f;
	fLocal_119[8] = 0.0016f;
	fLocal_120[8] = 0.9169f;
	fLocal_121[8] = -0.3981f;
	iLocal_152[8] = 108;
	fLocal_122[8] = 150f;
	fLocal_123[8] = 1f;
	iLocal_197[8] = joaat("police3");
	Local_175[11 /*3*/] = { -1563.918f, -2745.409f, 13.5643f };
	fLocal_118[11] = -0.0022f;
	fLocal_119[11] = -0.0019f;
	fLocal_120[11] = 0.928f;
	fLocal_121[11] = -0.3726f;
	iLocal_152[11] = 111;
	fLocal_122[11] = 36000f;
	fLocal_123[11] = 1f;
	iLocal_197[11] = joaat("police3");
	Local_175[12 /*3*/] = { -1026.024f, -2336.396f, 13.5678f };
	fLocal_118[12] = -0.0083f;
	fLocal_119[12] = -0.0054f;
	fLocal_120[12] = 0.55f;
	fLocal_121[12] = 0.8351f;
	iLocal_152[12] = 112;
	fLocal_122[12] = 60000f;
	fLocal_123[12] = 1f;
	iLocal_197[12] = joaat("police3");
	Local_175[13 /*3*/] = { -1013.316f, -2340.457f, 13.5678f };
	fLocal_118[13] = -0.0086f;
	fLocal_119[13] = -0.005f;
	fLocal_120[13] = 0.5052f;
	fLocal_121[13] = 0.8629f;
	iLocal_152[13] = 113;
	fLocal_122[13] = 60000f;
	fLocal_123[13] = 1f;
	iLocal_197[13] = joaat("police3");
	Local_175[14 /*3*/] = { -1221.049f, -2731.169f, 13.5681f };
	fLocal_118[14] = -0.0083f;
	fLocal_119[14] = -0.0057f;
	fLocal_120[14] = 0.6469f;
	fLocal_121[14] = 0.7625f;
	iLocal_152[14] = 61;
	fLocal_122[14] = 80000f;
	fLocal_123[14] = 1f;
	iLocal_197[14] = joaat("police3");
	Local_175[15 /*3*/] = { -1227.203f, -2735.872f, 13.568f };
	fLocal_118[15] = -0.0041f;
	fLocal_119[15] = -0.0091f;
	fLocal_120[15] = 0.9133f;
	fLocal_121[15] = 0.4072f;
	iLocal_152[15] = 62;
	fLocal_122[15] = 80000f;
	fLocal_123[15] = 1f;
	iLocal_197[15] = joaat("police3");
	Local_175[19 /*3*/] = { -1240.048f, -2203.457f, 14.0347f };
	fLocal_118[19] = 0.0002f;
	fLocal_119[19] = 0.0018f;
	fLocal_120[19] = 0.9611f;
	fLocal_121[19] = -0.2763f;
	iLocal_152[19] = 66;
	fLocal_122[19] = 55125f;
	fLocal_123[19] = 1f;
	iLocal_197[19] = joaat("firetruk");
	Local_175[20 /*3*/] = { -438.0192f, -2060.751f, 73.6354f };
	fLocal_118[20] = -0.0005f;
	fLocal_119[20] = 0.0018f;
	fLocal_120[20] = 0.9559f;
	fLocal_121[20] = 0.2938f;
	iLocal_152[20] = 67;
	fLocal_122[20] = 0f;
	fLocal_123[20] = 1f;
	iLocal_197[20] = joaat("maverick");
	Local_175[21 /*3*/] = { -546.8047f, -2187.925f, 5.8819f };
	fLocal_118[21] = -0.0252f;
	fLocal_119[21] = -0.0034f;
	fLocal_120[21] = 0.9369f;
	fLocal_121[21] = 0.3487f;
	iLocal_152[21] = 5;
	fLocal_122[21] = 3834f;
	fLocal_123[21] = 1f;
	iLocal_197[21] = joaat("blista");
	Local_175[22 /*3*/] = { -1001.674f, -2947.732f, 13.3947f };
	fLocal_118[22] = 0.001f;
	fLocal_119[22] = -0.0004f;
	fLocal_120[22] = 0.8616f;
	fLocal_121[22] = 0.5075f;
	iLocal_152[22] = 6;
	fLocal_122[22] = 20176f;
	fLocal_123[22] = 1f;
	iLocal_197[22] = joaat("airtug");
	Local_175[23 /*3*/] = { -1249.588f, -2525.9f, 13.3942f };
	fLocal_118[23] = 0.001f;
	fLocal_119[23] = -0.0001f;
	fLocal_120[23] = 0.9749f;
	fLocal_121[23] = -0.2228f;
	iLocal_152[23] = 7;
	fLocal_122[23] = 48538f;
	fLocal_123[23] = 1f;
	iLocal_197[23] = joaat("airtug");
	Local_175[24 /*3*/] = { -1362.538f, -2625.609f, 13.3895f };
	fLocal_118[24] = -0.0001f;
	fLocal_119[24] = 0.0018f;
	fLocal_120[24] = 0.5344f;
	fLocal_121[24] = 0.8452f;
	iLocal_152[24] = 8;
	fLocal_122[24] = 75112f;
	fLocal_123[24] = 1f;
	iLocal_197[24] = joaat("airtug");
}

void func_365(char* sParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	
	StringCopy(&cLocal_185, sParam0, 64);
	bLocal_85 = true;
	iLocal_90 = 0;
	iLocal_156 = 0;
	iLocal_157 = 0;
	iLocal_158 = 0;
	iLocal_159 = iParam1;
	iLocal_160 = 0;
	iLocal_161 = 0;
	iLocal_162 = 0;
	iLocal_166 = 0;
	iLocal_169 = 0;
	iLocal_167 = -1;
	iLocal_168 = -1;
	iLocal_170 = 0;
	iLocal_171 = 0;
	fLocal_144 = 0f;
	fLocal_145 = 0f;
	fLocal_130 = 0f;
	iLocal_91 = 0;
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		Local_177.f_0 = (Var0.f_0 - 100f);
		Local_177.f_1 = (Var0.f_1 - 100f);
		Local_177.f_2 = (Var0.f_2 - 100f);
		Local_178.f_0 = (Var0.f_0 + 100f);
		Local_178.f_1 = (Var0.f_1 + 100f);
		Local_178.f_2 = (Var0.f_2 + 100f);
		unk_0xD1B0AF388B711EBC(Local_177, Local_178, 0, 0);
		if (bParam2)
		{
			unk_0x60040CDD28AA1BC3(Var0, 500f, 0, 0, 0, 0, 0, 0, 0);
		}
	}
	unk_0x06CD913C241C765E("rgh_traffic", &iLocal_194);
	func_354();
	if (bParam3)
	{
		func_206(1);
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0xE383E18054CA323B(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xD682DD0578BF5392(0);
	}
	func_211();
}

void func_366()
{
	if (iLocal_223 == 0)
	{
		unk_0xA62957B100C8DE6D(0f, 14f, 4);
		if (iLocal_343 == 1)
		{
			func_123();
			iLocal_343 = 0;
		}
		iLocal_357 = 0;
		iLocal_358 = 0;
		iLocal_360 = 0;
		iLocal_362 = 0;
		iLocal_372 = 0;
		iLocal_325 = 0;
		iLocal_326 = 0;
		iLocal_329 = 0;
		iLocal_331 = 0;
		iLocal_332 = 0;
		iLocal_333 = 0;
		iLocal_334 = 0;
		iLocal_335 = 0;
		iLocal_336 = 0;
		iLocal_341 = 0;
		iLocal_350 = 0;
		iLocal_348 = 0;
		iLocal_407 = 0;
		iLocal_410 = 0;
		iLocal_449 = 0;
		iLocal_371 = 0;
		iLocal_349 = 1;
		iLocal_227 = 0;
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iLocal_359 = 1;
		}
		else
		{
			iLocal_359 = 0;
		}
		func_17(&uLocal_490, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
		unk_0xAD69CF046AA50E85(1);
		unk_0xD1B0AF388B711EBC(-617f, -2274f, 0f, -406.01f, -2044f, 15f, 0, 1);
		iLocal_230 = unk_0x1DD05E817C89C737();
		if (unk_0x15CCE8886267624F())
		{
			if (!func_24())
			{
				unk_0x6C39BDF5EA5D38FC(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1));
			}
			func_21(0, -1, 1);
			unk_0x68298CA6191CDFDB(&iLocal_279);
			unk_0x68298CA6191CDFDB(&iLocal_290);
			unk_0x68298CA6191CDFDB(&iLocal_291);
		}
		if (!unk_0x9390801B06EE998F())
		{
			unk_0x10B228D2FDB7AF16(800);
		}
		if (!unk_0xC450B06E5AAA0985(uLocal_299))
		{
			uLocal_299 = func_371(Local_308, 0);
		}
		unk_0x86A2BC11844DEEB3("TRV4_GAMEPLAY_START");
		Local_318 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		if (iLocal_348 == 0 && iLocal_362 == 1)
		{
			if (!func_277() || !unk_0x5994A2F6D4FFFE4D())
			{
				func_20("TRV4_GO1", 7500, 1);
				iLocal_348 = 1;
			}
		}
		if (iLocal_371 == 0 && !func_370())
		{
			if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_308, 1) < 800f)
			{
				iLocal_229 = unk_0xC5935DFB3F39785A(0, 2);
				if (iLocal_229 == 0)
				{
					unk_0x7A9F2D6596A1FF08("SCRIPTED_SCANNER_REPORT_Sol_3_01", 0f);
					unk_0xA62957B100C8DE6D(0f, 6f, 3);
					iLocal_371 = 1;
				}
				if (iLocal_229 == 1)
				{
					unk_0x7A9F2D6596A1FF08("SCRIPTED_SCANNER_REPORT_Sol_3_02", 0f);
					unk_0xA62957B100C8DE6D(0f, 6f, 3);
					iLocal_371 = 1;
				}
			}
		}
		if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_308, 1) < 600f)
		{
			if (!unk_0xFC8BFE4B41177C22(iLocal_278))
			{
				unk_0xEC9DAA34BBB4658C(joaat("cogcabrio"));
				if (unk_0x6252BC0DD8A320DB(joaat("cogcabrio")))
				{
					iLocal_278 = unk_0x5779387E956077A6(joaat("cogcabrio"), -428.0226f, -2153.558f, 9.2992f, 90.9098f, 1, 1, 0);
					unk_0xD0F1DB0E50B367AD(iLocal_278, 0, 1, 1, 1, 0, 0, 0, 0);
					unk_0xD133EF7430EDCD09(iLocal_278, 27, 27);
					unk_0x55098D9E9AD58806(joaat("cogcabrio"));
					unk_0x616C2EAE947E6027(iLocal_278, "SOL_3_MOLLY_CAR_Group", 0);
				}
			}
			if (!unk_0xFC8BFE4B41177C22(iLocal_264))
			{
				unk_0xEC9DAA34BBB4658C(joaat("ig_molly"));
				if (unk_0x6252BC0DD8A320DB(joaat("ig_molly")))
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_278))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
						{
							iLocal_264 = unk_0x8728A378EF2B46B2(iLocal_278, 26, joaat("ig_molly"), -1, 1, 1);
							unk_0x935364B4448CD584(iLocal_264, 1);
							unk_0x3F58BFCF656F0DF1(iLocal_264, 0);
							unk_0x55098D9E9AD58806(joaat("cogcabrio"));
							unk_0x55098D9E9AD58806(joaat("ig_molly"));
							unk_0x3CEA1FD137ACE2D9(iLocal_264, joaat("player"));
							iLocal_358 = 1;
						}
					}
				}
			}
		}
		else
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_264))
			{
				unk_0x734A9F4537A31459(&iLocal_264);
			}
			if (unk_0xFC8BFE4B41177C22(iLocal_278))
			{
				unk_0x8C1F7D7A31B2A38E(&iLocal_278);
			}
		}
		if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_308, 1) < 500f)
		{
			if (iLocal_360 == 0)
			{
				uLocal_305 = unk_0x8DE4F68A9728925E("BREAKING_NEWS");
				unk_0xEC9DAA34BBB4658C(joaat("police3"));
				unk_0xEC9DAA34BBB4658C(joaat("maverick"));
				unk_0xEC9DAA34BBB4658C(joaat("bison"));
				unk_0xEC9DAA34BBB4658C(joaat("blista"));
				unk_0xD772E6694B8472A6(45, "BB_Chase");
				unk_0xD772E6694B8472A6(35, "BB_Chase");
				unk_0xD772E6694B8472A6(2, "BB_Chase");
				unk_0xD772E6694B8472A6(54, "BB_Chase");
				unk_0xD772E6694B8472A6(55, "BB_Chase");
				unk_0xD772E6694B8472A6(67, "BB_Chase");
				func_203(1, "BB_Chase");
				unk_0x16088CC55E7F218A("TRV4_CHASE");
				iLocal_360 = 1;
			}
		}
		else if (iLocal_360 == 1)
		{
			unk_0x55098D9E9AD58806(joaat("police3"));
			unk_0x55098D9E9AD58806(joaat("maverick"));
			unk_0x55098D9E9AD58806(joaat("bison"));
			unk_0x55098D9E9AD58806(joaat("blista"));
			unk_0x7821F942CAEEBEE1(45, "BB_Chase");
			unk_0x7821F942CAEEBEE1(35, "BB_Chase");
			unk_0x7821F942CAEEBEE1(2, "BB_Chase");
			unk_0x7821F942CAEEBEE1(54, "BB_Chase");
			unk_0x7821F942CAEEBEE1(55, "BB_Chase");
			unk_0x7821F942CAEEBEE1(67, "BB_Chase");
			func_369(1, "BB_Chase");
			unk_0x2C7FEB8222C29D99("TRV4_CHASE");
			iLocal_360 = 0;
		}
		if (iLocal_372 == 0)
		{
			if (unk_0x1DD05E817C89C737() > (iLocal_230 + 135000))
			{
				unk_0x406CBCEA35499884();
				func_20("TRV4_WARN1", 7500, 1);
				iLocal_230 = unk_0x1DD05E817C89C737();
				iLocal_372 = 1;
			}
		}
		if (iLocal_372 == 1)
		{
			if (unk_0x1DD05E817C89C737() > (iLocal_230 + 135000))
			{
				func_252("TRV4_FAIL1");
			}
		}
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (!unk_0xBC2EE32DE886BD08("SOL_3_DRIVE_TO_AIRPORT"))
			{
				unk_0xCAC4020CCF361AC8("SOL_3_DRIVE_TO_AIRPORT");
			}
			if (iLocal_407 == 0)
			{
				unk_0x86A2BC11844DEEB3("TRV4_CAR_ENTERED");
				iLocal_407 = 1;
			}
			if (!unk_0xFC8BFE4B41177C22(iLocal_279))
			{
				iLocal_279 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				unk_0xD0F1DB0E50B367AD(iLocal_279, 0, 1, 0, 0, 0, 0, 0, 0);
				unk_0x306C263AAEC4A988(iLocal_279);
				unk_0x5FE0938FDE9B0958(iLocal_279, 1);
			}
		}
		else if (unk_0xFC8BFE4B41177C22(iLocal_279))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_279, 0))
			{
				if (iLocal_359 == 0)
				{
					unk_0xD0F1DB0E50B367AD(iLocal_279, 0, 0, 0, 0, 0, 0, 0, 0);
					iLocal_359 = 1;
				}
				if (iLocal_351 == 1)
				{
					unk_0xD27458C016741B0C(iLocal_279);
					iLocal_351 = 0;
				}
				if (unk_0x7C9905528EE2C3AB(iLocal_279, 1))
				{
					unk_0x68298CA6191CDFDB(&iLocal_279);
				}
			}
		}
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (iLocal_410 == 0)
			{
				unk_0x71D40AB8CFA59157(156, 1, 0);
				unk_0xAD5E8940E3832571(-244f, -1842.74f, 28.48f);
				unk_0xAD5E8940E3832571(-1.5f, -2014.4f, 11.5f);
				unk_0xAD5E8940E3832571(-498.7f, -2136.5f, 8.4f);
				unk_0x0F20DD0DCEB2959F(1);
				iLocal_410 = 1;
			}
		}
		else if (iLocal_410 == 1)
		{
			unk_0x0F20DD0DCEB2959F(0);
			iLocal_410 = 0;
		}
		if ((iLocal_360 == 1 && unk_0xFC8BFE4B41177C22(iLocal_278)) && unk_0xFC8BFE4B41177C22(iLocal_264))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
			{
				if (unk_0x1AC621DBDFE4ECA0(iLocal_278, func_368(unk_0x4A8C381C258A124D()), 0))
				{
					func_367();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
			{
				if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iLocal_278))
				{
					func_367();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
			{
				if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), unk_0xD1A6A821F5AC81DB(iLocal_278, 1), 200f, 132f, 100f, 0, 1, 0))
				{
					iLocal_357 = 0;
					func_367();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
			{
				if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), -577f, -2051.5f, 7f, 84f, 87.5f, 15f, 0, 1, 0))
				{
					iLocal_357 = 1;
					func_367();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
			{
				if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), -703.5f, -1969.5f, 10f, 53.5f, 62.5f, 10f, 0, 1, 0))
				{
					unk_0xC3C7C9791CD79114();
					unk_0xAD69CF046AA50E85(0);
					iLocal_357 = 1;
					func_367();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
		}
	}
}

void func_367()
{
	while (((!unk_0x6252BC0DD8A320DB(joaat("police3")) || !unk_0x6252BC0DD8A320DB(joaat("maverick"))) || !unk_0x6252BC0DD8A320DB(joaat("bison"))) || !unk_0x6252BC0DD8A320DB(joaat("blista")))
	{
		wait(0);
	}
	while (((((!unk_0x266D9DB5FCE4003B(45, "BB_Chase") || !unk_0x266D9DB5FCE4003B(35, "BB_Chase")) || !unk_0x266D9DB5FCE4003B(2, "BB_Chase")) || !unk_0x266D9DB5FCE4003B(54, "BB_Chase")) || !unk_0x266D9DB5FCE4003B(55, "BB_Chase")) || !unk_0x266D9DB5FCE4003B(67, "BB_Chase"))
	{
		wait(0);
	}
}

var func_368(int iParam0)
{
	var uVar0;
	
	unk_0x23B29877D0BE9547(iParam0, &uVar0, 1);
	return uVar0;
}

void func_369(int iParam0, char* sParam1)
{
	unk_0x7821F942CAEEBEE1(iParam0, sParam1);
}

int func_370()
{
	if (Global_21725 == 4)
	{
		if (unk_0xE87F28FD4128D063())
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

var func_371(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0x34864AB7DA700AA6(Param0);
	unk_0x5D3946F818C6B331(uVar0, func_249(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
	unk_0xBC64B805EE071A37(uVar0, iParam1);
	return uVar0;
}

void func_372()
{
	if (iLocal_223 == 0)
	{
		iLocal_336 = 1;
		iLocal_416 = 0;
		iLocal_433 = 0;
		iLocal_437 = 0;
		while (iLocal_336 == 1)
		{
			unk_0xECF30459397D5190("M_LegalTrouble", 0);
			switch (iLocal_225)
			{
				case 0:
					unk_0x839AD252B0708F35("sol_3_int", 8);
					if (func_416())
					{
						while (!func_388(61, &uLocal_655, 0, 1, 0, 0, 0))
						{
							wait(0);
						}
						iLocal_406 = 0;
						unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), false, 0);
						func_236(1, 1, 1, 0, 0, 0, 0);
						unk_0xF293D66D4452C854(unk_0x4A8C381C258A124D(), "Michael", 0, 0, 0);
						if (unk_0xFC8BFE4B41177C22(Global_97178[0]))
						{
							if (unk_0xD9F5E1FEFD1329E4(Global_97178[0], 0))
							{
								unk_0xEE0BCDB1B5E36BCB(Global_97178[0], 1, 1);
								iLocal_279 = Global_97178[0];
							}
						}
						if (unk_0xFC8BFE4B41177C22(Global_97178[1]))
						{
							if (unk_0xD9F5E1FEFD1329E4(Global_97178[1], 0))
							{
								unk_0xEE0BCDB1B5E36BCB(Global_97178[1], 1, 1);
								iLocal_290 = Global_97178[1];
							}
						}
						if (unk_0xFC8BFE4B41177C22(Global_97178[2]))
						{
							if (unk_0xD9F5E1FEFD1329E4(Global_97178[2], 0))
							{
								unk_0xEE0BCDB1B5E36BCB(Global_97178[2], 1, 1);
								iLocal_291 = Global_97178[2];
							}
						}
						if (unk_0xFC8BFE4B41177C22(Global_97178[3]))
						{
							if (unk_0xD9F5E1FEFD1329E4(Global_97178[3], 0))
							{
								unk_0xEE0BCDB1B5E36BCB(Global_97178[3], 1, 1);
								iLocal_292 = Global_97178[3];
							}
						}
						unk_0xED65412F8B26ED99(0);
						unk_0xB9784D6C7219851B(4);
						func_387();
						if (!unk_0x9390801B06EE998F())
						{
							unk_0x10B228D2FDB7AF16(250);
						}
						iLocal_225++;
					}
					break;
				
				case 1:
					if (iLocal_416 == 0)
					{
						if (unk_0x0CB7695268A7F50F())
						{
							if (iLocal_437 == 0)
							{
								if (unk_0xFC8BFE4B41177C22(iLocal_292))
								{
									if (unk_0xD9F5E1FEFD1329E4(iLocal_292, 0))
									{
										if (unk_0xBA16CD57E37AC32A(unk_0x4B423FAA24E8ABF0(iLocal_292)))
										{
											unk_0xC2A036647DD761E4(iLocal_292, 2);
											unk_0xB2BD5837A8D3CEDA(iLocal_292, -1048.722f, -506.8387f, 35.0386f, 1, 0, 0, 1);
											unk_0x5C96CEA06531AB03(iLocal_292, 357.1288f);
											unk_0xC3680B85B2D7086A(iLocal_292, 1);
											unk_0x1DE99C193C7EC64B(iLocal_292, 1084227584);
											func_377(-1048.722f, -506.8387f, 35.0386f, 357.1288f, 0, 145);
											iLocal_437 = 1;
										}
										if (((unk_0xD3CE8D1E6564B011(unk_0x4B423FAA24E8ABF0(iLocal_292)) || unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(iLocal_292))) || unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(iLocal_292))) || unk_0x9910CD0D8626AA28(unk_0x4B423FAA24E8ABF0(iLocal_292)))
										{
											if ((((((((unk_0x4B423FAA24E8ABF0(iLocal_292) != joaat("bus") && unk_0x4B423FAA24E8ABF0(iLocal_292) != joaat("pounder")) && unk_0x4B423FAA24E8ABF0(iLocal_292) != joaat("packer")) && unk_0x4B423FAA24E8ABF0(iLocal_292) != joaat("airbus")) && unk_0x4B423FAA24E8ABF0(iLocal_292) != joaat("ambulance")) && unk_0x4B423FAA24E8ABF0(iLocal_292) != joaat("barracks")) && unk_0x4B423FAA24E8ABF0(iLocal_292) != joaat("barracks2")) && unk_0x4B423FAA24E8ABF0(iLocal_292) != joaat("benson")) && unk_0x4B423FAA24E8ABF0(iLocal_292) != joaat("biff"))
											{
												unk_0xB2BD5837A8D3CEDA(iLocal_292, -1027.657f, -486.6945f, 35.9571f, 1, 0, 0, 1);
												unk_0x5C96CEA06531AB03(iLocal_292, 207.7515f);
												unk_0x1DE99C193C7EC64B(iLocal_292, 1084227584);
												func_377(-1027.657f, -486.6945f, 35.9571f, 207.7515f, 0, 145);
												iLocal_437 = 1;
											}
										}
										if ((((!unk_0xBA16CD57E37AC32A(unk_0x4B423FAA24E8ABF0(iLocal_292)) && !unk_0xD3CE8D1E6564B011(unk_0x4B423FAA24E8ABF0(iLocal_292))) && !unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(iLocal_292))) && !unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(iLocal_292))) && !unk_0x9910CD0D8626AA28(unk_0x4B423FAA24E8ABF0(iLocal_292)))
										{
											unk_0x8C1F7D7A31B2A38E(&iLocal_292);
											iLocal_437 = 1;
										}
									}
								}
							}
							func_375(&uLocal_655, 0, 0, 2000, 1, 1, 0, 1);
							iLocal_416 = 1;
						}
					}
					if (iLocal_406 == 0)
					{
						unk_0x06CD913C241C765E("SecGuards", &iLocal_488);
						unk_0xD414C47AFF81382A(5, joaat("player"), iLocal_488);
						unk_0xD414C47AFF81382A(5, iLocal_488, joaat("player"));
						unk_0xF2CB0224D3BE0B42("TREV4", 0);
						iLocal_406 = 1;
					}
					if (iLocal_433 == 0)
					{
						if (unk_0xFD216000DC314A92())
						{
							unk_0x5EF96FB2D3902DC7(unk_0x4A8C381C258A124D());
							unk_0x8EA9C5E0178372E1(unk_0x4A8C381C258A124D());
							unk_0x69AE13B08EFD8497(unk_0x4A8C381C258A124D());
							if (unk_0x15EF8F22A719BE5E() > 120000)
							{
								unk_0x86A2BC11844DEEB3("TRV4_START");
								iLocal_433 = 1;
							}
						}
					}
					if (unk_0xD8FC13DA1BA1DBA2("Michael", 0))
					{
						unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -1012.268f, -480.0742f, 38.9757f, 1, 0, 0, 1);
						unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 121.4087f);
						unk_0x8EAC8FBDF8A3830E(unk_0x259BE71D8A81D4FA(), 2f, 3000, 0, 1, 0);
						unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
						unk_0x717804C8C8DA67BF(unk_0x4A8C381C258A124D(), joaat("MotionState_Run"), 0, 0, 0);
					}
					if (unk_0x2B60F53D06BC6971(0))
					{
						unk_0x64BB72494B9DF6DC(0f);
					}
					if (!unk_0x0CB7695268A7F50F())
					{
						func_374(61);
						if (iLocal_433 == 0)
						{
							unk_0x86A2BC11844DEEB3("TRV4_START_CS_SKIP");
							iLocal_433 = 1;
						}
						unk_0x3B327805C3CAF8DC();
						func_236(0, 1, 1, 0, 0, 0, 0);
						iLocal_225++;
					}
					break;
				
				case 2:
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), true, 0);
					if (unk_0xFC8BFE4B41177C22(iLocal_279))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_279, 0))
						{
							if (unk_0x7C9905528EE2C3AB(iLocal_279, 1))
							{
								unk_0x68298CA6191CDFDB(&iLocal_279);
							}
						}
					}
					if (unk_0xFC8BFE4B41177C22(iLocal_290))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_290, 0))
						{
							if (unk_0x7C9905528EE2C3AB(iLocal_290, 1))
							{
								unk_0x68298CA6191CDFDB(&iLocal_290);
							}
						}
					}
					if (unk_0xFC8BFE4B41177C22(iLocal_291))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_291, 0))
						{
							if (unk_0x7C9905528EE2C3AB(iLocal_291, 1))
							{
								unk_0x68298CA6191CDFDB(&iLocal_291);
							}
						}
					}
					func_373();
					iLocal_336 = 0;
					iLocal_225 = 0;
					iLocal_223 = 0;
					iLocal_222 = 2;
					break;
			}
			wait(0);
		}
	}
}

void func_373()
{
	Global_63368 = 0;
}

void func_374(int iParam0)
{
	if (Global_97603 != -1)
	{
		if (iParam0 == Global_97603)
		{
			Global_97607 = 1;
			return;
		}
	}
}

void func_375(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()), 64);
	}
	if (!unk_0xFD216000DC314A92())
	{
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			unk_0xE4E1DBF4388028C0(unk_0x4A8C381C258A124D(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0xC289B882CEF4CAC9(0, 0, 3, 0);
	}
	else
	{
		unk_0xE37AF9002E782BA0(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0x428C32CC68809A35(1);
	}
	else
	{
		if (unk_0x78411E34CF90EA8C(uParam0->f_4))
		{
			if (unk_0xBC886554B5888A64(uParam0->f_4))
			{
				unk_0x4CBC5D1BC117616B(uParam0->f_4, 0);
			}
			unk_0x85E6A1E36B5E2E4D(uParam0->f_4, 1);
		}
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			unk_0x4285E11B28063EE0(unk_0x4A8C381C258A124D(), 1, 0);
		}
		iVar0 = unk_0xDC8D5832207C2EAD();
		if (unk_0xFC8BFE4B41177C22(iVar0))
		{
			unk_0x4285E11B28063EE0(iVar0, 1, 0);
		}
		unk_0x48FA483FE4F18CFE("TIME_LAPSE");
		if (unk_0xBC2EE32DE886BD08("TOD_SHIFT_SCENE"))
		{
			unk_0x8E4825CCACA34B58(uParam0->f_10);
			unk_0x48FA483FE4F18CFE("TIME_LAPSE");
			unk_0xB43467C43086A6A1("TOD_SHIFT_SCENE");
		}
	}
	func_236(bParam1, 1, 0, 0, 0, 0, 0);
	func_376();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0xCBE10A13619B9FAA(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0xCBE10A13619B9FAA(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0x15CCE8886267624F())
		{
			unk_0x10B228D2FDB7AF16(250);
		}
	}
	if (!bParam1)
	{
		if (Global_113648.f_32751.f_4801 != -15)
		{
			Global_113648.f_32751.f_4801 = func_99();
		}
	}
}

void func_376()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0xFE3A52C5B7AE3101(Global_113648.f_14143[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

void func_377(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	var uVar1;
	
	if (unk_0xFC8BFE4B41177C22(Global_104212.f_4))
	{
		if (unk_0xD9F5E1FEFD1329E4(Global_104212.f_4, 0))
		{
			if (func_386(24) != Global_104212.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_383(unk_0xD1A6A821F5AC81DB(Global_104212.f_4, 1), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				func_378(Global_104212.f_4, Param0, fParam1, 24, 0);
			}
		}
	}
}

void func_378(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0xFC8BFE4B41177C22(Global_77348.f_484[25]) && unk_0xD9F5E1FEFD1329E4(Global_77348.f_484[25], 0))
			{
				if (Global_77348.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x9E20DC08879FF3FC(iParam0) || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("bus")) || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_382(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_39(iParam0, &Var0);
		if (func_71(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
			fParam2 = unk_0xCFC0C995455A6204(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) != joaat("vehicle_gen_controller"))
			{
				Global_78336 = unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6());
			}
		}
		func_380(iParam3, &Var0, Param1, fParam2, func_34(iParam0));
		func_379(iParam3, iParam0, 0);
	}
}

void func_379(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_164(&(Global_77348.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_77348.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_77348.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_77348.f_555[0 /*21*/].f_4 != unk_0x4B423FAA24E8ABF0(iParam1))
		{
			return;
		}
	}
	if (Global_78255 != -1 && Global_78255 != iParam0)
	{
		return;
	}
	if (unk_0xFC8BFE4B41177C22(iParam1))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
		{
			if (!unk_0x110821AE6C63DD4F(iParam1))
			{
				unk_0xEE0BCDB1B5E36BCB(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_113648.f_32751.f_4801 = func_99();
			}
			if (iParam1 != Global_77348.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_386(iParam0);
					if ((unk_0xFC8BFE4B41177C22(iVar0) && unk_0xD9F5E1FEFD1329E4(iVar0, 0)) && iParam1 != iVar0)
					{
						func_150(iVar0, 145);
					}
				}
				Global_78254 = iParam1;
				Global_78255 = iParam0;
				Global_78256 = iParam2;
			}
		}
	}
}

void func_380(int iParam0, var uParam1, struct<3> Param2, float fParam3, int iParam4)
{
	if (func_164(&(Global_77348.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_77348.f_555[0 /*21*/].f_9, 10))
		{
			func_381(iParam0);
			func_161(uParam1, &(Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_77348.f_555[0 /*21*/].f_9, 11))
			{
				Global_113648.f_32751.f_1864[Global_77348.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_113648.f_32751.f_1934[Global_77348.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_113648.f_32751.f_1864[Global_77348.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113648.f_32751.f_1934[Global_77348.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_157(iParam0, 1);
		}
	}
}

void func_381(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_164(&(Global_77348.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xFC8BFE4B41177C22(Global_77348.f_139[iParam0]))
		{
			unk_0xEE0BCDB1B5E36BCB(Global_77348.f_139[iParam0], 1, 1);
			unk_0x68298CA6191CDFDB(&(Global_77348.f_139[iParam0]));
			Global_77348.f_139[iParam0] = 0;
		}
		if (BitTest(Global_77348.f_555[0 /*21*/].f_9, 13))
		{
			func_157(iParam0, 0);
		}
	}
}

void func_382(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_381(iParam0);
	func_157(iParam0, 0);
}

int func_383(struct<3> Param0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_384(Param0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_384(struct<3> Param0, int iParam1, int iParam2)
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
				if (func_385(iVar0) || iParam2 == 0)
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

var func_385(int iParam0)
{
	return BitTest(Global_113648.f_7231[iParam0], 0);
}

int func_386(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_77348.f_139[iParam0];
}

void func_387()
{
	Global_63368 = 1;
}

bool func_388(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<2> Var0;
	
	func_415(iParam0, &Var0);
	func_414(iParam0, &Var0, &(Var0.f_1));
	return func_389(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_389(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((func_447(0) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			unk_0xCBE10A13619B9FAA(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0xCBE10A13619B9FAA(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !func_412(uParam0->f_8, uParam0->f_7))
			{
				if (unk_0x91476A70AA1CB09A("TIME_LAPSE", 0, -1))
				{
					uParam0->f_6 = 0;
					uParam0->f_2 = 1;
				}
			}
			else
			{
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else
		{
			uParam0->f_2 = -1;
			return 1;
		}
	}
	unk_0x43AE50D2A33F6E2A();
	unk_0x4EB223432F8FA0A0(7);
	unk_0xF9A2335AB37CF17E(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			unk_0x85E6A1E36B5E2E4D(uParam0->f_4, 0);
			uParam0->f_4 = unk_0x69D23632E4288DBD("DEFAULT_SPLINE_CAMERA", 0);
			unk_0xC606B0B9BA3D6036(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				unk_0xC606B0B9BA3D6036(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				unk_0xC606B0B9BA3D6036(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			unk_0x58BDA5D9262F5D30(uParam0->f_4, uParam1->f_14);
			unk_0x4CBC5D1BC117616B(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					unk_0x4285E11B28063EE0(unk_0x4A8C381C258A124D(), 0, 0);
				}
				iVar0 = unk_0xDC8D5832207C2EAD();
				if (unk_0xFC8BFE4B41177C22(iVar0))
				{
					if (!unk_0x110821AE6C63DD4F(iVar0))
					{
						unk_0xEE0BCDB1B5E36BCB(iVar0, 1, 0);
					}
					unk_0x4285E11B28063EE0(iVar0, 0, 0);
				}
			}
			uVar1 = unk_0xEF763079652110C0(uParam0->f_4);
			unk_0xCC3ADBA41991FF4E();
			unk_0x8B0110C1F1D9D177(uParam1->f_2, uVar1, 0);
			unk_0xA69DCC67B2B61AD1(uParam1->f_2, uVar1);
			unk_0x5926A824AF54BCC3(uParam1->f_2, uVar1);
			if (bParam3)
			{
				unk_0x2094BC4B6731BA68(uParam1->f_2, 5000f, 1, 1, 0, 0);
			}
			func_411(&(uParam0->f_1), 0, 0, 0, unk_0xB12880C92EA6EE15(), unk_0x8825A6E0A30BDCB8(), unk_0x7598FE4545010A75());
			func_375(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!func_412(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				unk_0x85E6A1E36B5E2E4D(uParam0->f_4, 0);
				uParam0->f_4 = unk_0x69D23632E4288DBD("DEFAULT_SPLINE_CAMERA", 0);
				unk_0xC606B0B9BA3D6036(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				if (uParam1->f_17 < 0)
				{
					unk_0xC606B0B9BA3D6036(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				}
				else
				{
					unk_0xC606B0B9BA3D6036(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				}
				unk_0x58BDA5D9262F5D30(uParam0->f_4, uParam1->f_14);
				unk_0x4CBC5D1BC117616B(uParam0->f_4, 1);
				if (!bParam6)
				{
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
					{
						unk_0x4285E11B28063EE0(unk_0x4A8C381C258A124D(), 0, 0);
					}
					iVar2 = unk_0xDC8D5832207C2EAD();
					if (unk_0xFC8BFE4B41177C22(iVar2))
					{
						if (!unk_0x110821AE6C63DD4F(iVar2))
						{
							unk_0xEE0BCDB1B5E36BCB(iVar2, 1, 0);
						}
						unk_0x4285E11B28063EE0(iVar2, 0, 0);
					}
				}
				uVar3 = unk_0xEF763079652110C0(uParam0->f_4);
				unk_0xCC3ADBA41991FF4E();
				unk_0x8B0110C1F1D9D177(uParam1->f_2, uVar3, 0);
				unk_0xA69DCC67B2B61AD1(uParam1->f_2, uVar3);
				unk_0x5926A824AF54BCC3(uParam1->f_2, uVar3);
				if (bParam3)
				{
					unk_0x2094BC4B6731BA68(uParam1->f_2, 5000f, 1, 1, 0, 0);
				}
				func_411(&(uParam0->f_1), 0, 0, 8, unk_0xB12880C92EA6EE15(), unk_0x8825A6E0A30BDCB8(), unk_0x7598FE4545010A75());
				func_375(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				unk_0x48FA483FE4F18CFE("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			unk_0x85E6A1E36B5E2E4D(uParam0->f_4, 0);
			uParam0->f_4 = unk_0x69D23632E4288DBD("DEFAULT_SPLINE_CAMERA", 0);
			unk_0xC606B0B9BA3D6036(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				unk_0xC606B0B9BA3D6036(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				unk_0xC606B0B9BA3D6036(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			unk_0x58BDA5D9262F5D30(uParam0->f_4, uParam1->f_14);
			unk_0x859FFC7F5DEC29DE(uParam0->f_4, 3);
			unk_0x4CBC5D1BC117616B(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					unk_0x4285E11B28063EE0(unk_0x4A8C381C258A124D(), 0, 0);
				}
				iVar4 = unk_0xDC8D5832207C2EAD();
				if (unk_0xFC8BFE4B41177C22(iVar4))
				{
					if (!unk_0x110821AE6C63DD4F(iVar4))
					{
						unk_0xEE0BCDB1B5E36BCB(iVar4, 1, 0);
					}
					unk_0x4285E11B28063EE0(iVar4, 0, 0);
				}
			}
			uVar5 = unk_0xEF763079652110C0(uParam0->f_4);
			unk_0xCC3ADBA41991FF4E();
			unk_0x8B0110C1F1D9D177(uParam1->f_2, uVar5, 0);
			unk_0xA69DCC67B2B61AD1(uParam1->f_2, uVar5);
			unk_0x5926A824AF54BCC3(uParam1->f_2, uVar5);
			if (bParam3)
			{
				unk_0x2094BC4B6731BA68(uParam1->f_2, 5000f, 0, 1, 0, 0);
			}
			func_411(&(uParam0->f_1), 0, 0, 0, unk_0xB12880C92EA6EE15(), unk_0x8825A6E0A30BDCB8(), unk_0x7598FE4545010A75());
			func_375(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			unk_0x48FA483FE4F18CFE("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			unk_0x2094BC4B6731BA68(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (!uParam0->f_5)
		{
			if (func_392(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (uParam1->f_17 < 0)
				{
					uParam0->f_9 = unk_0x1DD05E817C89C737();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = unk_0x69D23632E4288DBD("DEFAULT_SPLINE_CAMERA", 0);
					unk_0xC606B0B9BA3D6036(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
					unk_0xC606B0B9BA3D6036(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
					unk_0x58BDA5D9262F5D30(uParam0->f_4, uParam1->f_14);
					unk_0x859FFC7F5DEC29DE(uParam0->f_4, 3);
					unk_0x4CBC5D1BC117616B(uParam0->f_4, 1);
					uParam0->f_9 = unk_0x1DD05E817C89C737();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (func_392(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (uParam1->f_17 < 0)
			{
				uParam0->f_9 = unk_0x1DD05E817C89C737();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = unk_0x69D23632E4288DBD("DEFAULT_SPLINE_CAMERA", 0);
				unk_0xC606B0B9BA3D6036(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				unk_0xC606B0B9BA3D6036(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				unk_0x58BDA5D9262F5D30(uParam0->f_4, uParam1->f_14);
				unk_0x859FFC7F5DEC29DE(uParam0->f_4, 3);
				unk_0x4CBC5D1BC117616B(uParam0->f_4, 1);
				uParam0->f_9 = unk_0x1DD05E817C89C737();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (func_390(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!unk_0x78ABC1D11B34F324())
				{
					unk_0x8F72AF14CE5AACE4(250);
				}
				if (!unk_0x15CCE8886267624F())
				{
					unk_0x43AE50D2A33F6E2A();
					unk_0x4EB223432F8FA0A0(7);
					return 0;
				}
				if (uParam0->f_3 != 0)
				{
					func_392(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22)
	{
		if (bParam3)
		{
			unk_0x2094BC4B6731BA68(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (unk_0x78411E34CF90EA8C(uParam0->f_4) && unk_0x323C4A67159DAD02(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = unk_0x1DD05E817C89C737();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (func_390(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!unk_0x78ABC1D11B34F324())
				{
					unk_0x8F72AF14CE5AACE4(250);
				}
				if (!unk_0x15CCE8886267624F())
				{
					unk_0x43AE50D2A33F6E2A();
					unk_0x4EB223432F8FA0A0(7);
					return 0;
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 3)
	{
		if (bParam3)
		{
			unk_0x2094BC4B6731BA68(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (uParam0->f_9 + 1000 > unk_0x1DD05E817C89C737())
		{
			uParam0->f_2 = 4;
		}
	}
	if (uParam0->f_2 == 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_2 = -1;
		return 1;
	}
	if (uParam0->f_2 == -1)
	{
		return 1;
	}
	return 0;
}

int func_390(int iParam0)
{
	if (unk_0x9390801B06EE998F())
	{
		if ((unk_0x1DD05E817C89C737() - Global_28) > iParam0)
		{
			Global_27 = unk_0x1DD05E817C89C737();
		}
		Global_28 = unk_0x1DD05E817C89C737();
		if ((unk_0x1DD05E817C89C737() - Global_27) > iParam0)
		{
			if (func_391())
			{
				Global_27 = unk_0x1DD05E817C89C737();
				return 1;
			}
		}
	}
	return 0;
}

int func_391()
{
	if (unk_0x4D9174D8796EA622())
	{
		return 0;
	}
	if (unk_0x875A214D5EBCA509(0, 18) || unk_0x875A214D5EBCA509(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_392(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, float fParam8)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_99();
			iVar5 = func_99();
			func_107(&iVar5, iParam0);
			func_108(&iVar5, iParam1);
			func_109(&iVar5, 0);
			if (func_409(*uParam4, iVar5))
			{
				func_408(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			func_406(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_11 = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			func_399((to_float(uParam4->f_11) / 3600f));
			if (bParam7)
			{
				unk_0xD1EDF428E9679161(0.6f);
				unk_0x70F19143E4E40117(0);
				unk_0x9EFA902715EB835D(0);
			}
			func_398();
			uParam4->f_10 = unk_0xCA369FBC0DE29517();
			unk_0xBF3D28CA44F3BE2D(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
			unk_0xCAC4020CCF361AC8("TOD_SHIFT_SCENE");
			func_376();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((unk_0x78411E34CF90EA8C(uParam4->f_4) && unk_0x323C4A67159DAD02(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (unk_0x78411E34CF90EA8C(uParam4->f_4) && unk_0x323C4A67159DAD02(uParam4->f_4))
				{
					fVar0 = unk_0x37831F682BE7F41E(uParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (unk_0x70E57E9927B6BA58(sParam2) != 0)
						{
							unk_0xE0F4EA3A654155A3(sParam2, fParam8);
						}
						if (unk_0x70E57E9927B6BA58(sParam3) != 0)
						{
							unk_0xB7C3B23648284A54();
							unk_0xEE3C332799057645(sParam3, 0);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_408(&iVar5, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0xCBE10A13619B9FAA(func_397(iVar5), func_396(iVar5), func_395(iVar5));
				if (bParam7)
				{
					unk_0x714097CFC7878BD0();
				}
				unk_0x8E4825CCACA34B58(uParam4->f_10);
				unk_0x48FA483FE4F18CFE("TIME_LAPSE");
				if (bParam7)
				{
					unk_0x9EFA902715EB835D(1);
					unk_0x70F19143E4E40117(1);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = func_394(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = round((IntToFloat(uParam4->f_11) * fVar12));
			iVar5 = *uParam4;
			func_408(&iVar5, iVar4, 0, 0, 0, 0, 0);
			unk_0xCBE10A13619B9FAA(func_397(iVar5), func_396(iVar5), func_395(iVar5));
			if (func_393(iVar5) != unk_0xB12880C92EA6EE15())
			{
				unk_0xF13E285EDAB2D255(func_393(iVar5), func_106(iVar5), func_104(iVar5));
			}
			func_287();
			unk_0xE3349610A15FA0D0(6);
			break;
	}
	return 0;
}

int func_393(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

float func_394(float fParam0, float fParam1, float fParam2)
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

int func_395(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_396(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_397(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_398()
{
	int iVar0;
	
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		return 0;
	}
	if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
	{
		return 0;
	}
	iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
	{
		return 0;
	}
	unk_0x38911F7BA2D48F10(iVar0, "OFF");
	return 1;
}

void func_399(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_405(&(Global_113648.f_18105.f_175[iVar0 /*19*/].f_5)))
		{
			func_400(&(Global_113648.f_18105.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_405(&(Global_113648.f_18105.f_362[iVar1 /*3*/])))
		{
			func_400(&(Global_113648.f_18105.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0xDB57B7ED2C49BEAD();
}

void func_400(var uParam0, float fParam1)
{
	if (func_405(uParam0))
	{
		func_401(uParam0, (func_403(uParam0) + fParam1));
	}
}

void func_401(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_402(BitTest(*uParam0, 4)) - fParam1);
	unk_0x0B0C9A0F9AAEB7F0(uParam0, true);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_402(bool bParam0)
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

float func_403(var uParam0)
{
	if (func_405(uParam0))
	{
		if (func_404(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_402(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_404(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_405(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_406(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_409(iParam0, iParam1))
	{
		iVar0 = func_106(iParam1);
		iVar1 = func_104(iParam0);
		iVar2 = (func_104(iParam0) - func_104(iParam1));
		iVar3 = (func_106(iParam0) - func_106(iParam1));
		iVar4 = (func_393(iParam0) - func_393(iParam1));
		iVar5 = (func_397(iParam0) - func_397(iParam1));
		iVar6 = (func_396(iParam0) - func_396(iParam1));
		iVar7 = (func_395(iParam0) - func_395(iParam1));
	}
	else
	{
		iVar0 = func_106(iParam0);
		iVar1 = func_104(iParam1);
		iVar2 = (func_104(iParam1) - func_104(iParam0));
		iVar3 = (func_106(iParam1) - func_106(iParam0));
		iVar4 = (func_393(iParam1) - func_393(iParam0));
		iVar5 = (func_397(iParam1) - func_397(iParam0));
		iVar6 = (func_396(iParam1) - func_396(iParam0));
		iVar7 = (func_395(iParam1) - func_395(iParam0));
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
		iVar4 = (iVar4 + func_103(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_407(to_float(iVar0 + 1), 0f, 12f));
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
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_407(float fParam0, float fParam1, float fParam2)
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

void func_408(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_104(*iParam0);
	iVar1 = func_106(*iParam0);
	iVar2 = func_393(*iParam0);
	iVar3 = func_397(*iParam0);
	iVar4 = func_396(*iParam0);
	iVar5 = func_395(*iParam0);
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
	iVar6 = func_103(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_103(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_411(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_409(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_410(iParam1) || !func_410(iParam0))
	{
		return 1;
	}
	iVar0 = func_104(iParam0);
	iVar1 = func_104(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_106(iParam0);
	iVar1 = func_106(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_393(iParam0);
	iVar1 = func_393(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_397(iParam0);
	iVar1 = func_397(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_396(iParam0);
	iVar1 = func_396(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_395(iParam0);
	iVar1 = func_395(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_410(int iParam0)
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
	iVar0 = func_395(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_396(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_397(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_104(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_106(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_393(iParam0);
	if (iVar5 < 1 || iVar5 > func_103(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_411(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_109(uParam0, iParam1);
	func_108(uParam0, iParam2);
	func_107(uParam0, iParam3);
	func_101(uParam0, iParam5);
	func_102(uParam0, iParam4);
	func_100(uParam0, iParam6);
}

bool func_412(int iParam0, int iParam1)
{
	return func_413(unk_0x5295501D0862870D(), iParam0, iParam1);
}

int func_413(int iParam0, int iParam1, int iParam2)
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

void func_414(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 65:
			*uParam1 = 20;
			*uParam2 = 22;
			break;
		
		case 27:
			*uParam1 = 20;
			*uParam2 = 20;
			break;
		
		default:
			*uParam1 = Global_91469[iParam0 /*34*/].f_14;
			*uParam2 = Global_91469[iParam0 /*34*/].f_13;
			break;
	}
}

void func_415(int iParam0, var uParam1)
{
	uParam1->f_17 = -1;
	switch (iParam0)
	{
		case 1:
		case 2:
			uParam1->f_2 = { -58.1338f, -1115.653f, 25.8856f };
			uParam1->f_5 = { 18.4907f, 0f, 3.566f };
			uParam1->f_8 = { -58.3857f, -1115.083f, 26.0824f };
			uParam1->f_11 = { 18.4907f, 0f, 2.0628f };
			uParam1->f_14 = 40.0256f;
			uParam1->f_15 = 4000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		
		case 17:
		case 18:
			uParam1->f_2 = { -830.1f, 171.4f, 71.5f };
			uParam1->f_5 = { 17.5f, 0f, -76f };
			uParam1->f_8 = { -829.5f, 171.6f, 71.7f };
			uParam1->f_11 = { 17.9f, 0f, -75.4f };
			uParam1->f_14 = 47.9931f;
			uParam1->f_15 = 6600;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		
		case 21:
		case 22:
			uParam1->f_2 = { -776.5807f, 181.1033f, 72.2059f };
			uParam1->f_5 = { 11.8135f, 0f, 95.7275f };
			uParam1->f_8 = { -776.8288f, 181.0926f, 72.2551f };
			uParam1->f_11 = { 11.8134f, 0f, 95.7284f };
			uParam1->f_14 = 46.7255f;
			uParam1->f_15 = 5500;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		
		case 20:
			switch (func_110())
			{
				case 0:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_11 = { 4.202f, 0f, -111.2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
				
				case 2:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_11 = { 4.202f, 0f, -111.2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
			}
			break;
		
		case 40:
			uParam1->f_2 = { -8.0845f, -1450.367f, 36.8585f };
			uParam1->f_5 = { 13.3776f, 0f, 4.513f };
			uParam1->f_8 = { -9.0519f, -1450.444f, 36.8585f };
			uParam1->f_11 = { 13.3776f, 0f, 4.513f };
			uParam1->f_14 = 39.9659f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		
		case 27:
			uParam1->f_2 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_5 = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_8 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_11 = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_14 = 40f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		
		case 43:
			uParam1->f_2 = { -7.205f, -1471.656f, 31.1614f };
			uParam1->f_5 = { 9.3776f, 0f, 11.4737f };
			uParam1->f_8 = { -7.2909f, -1471.232f, 31.2546f };
			uParam1->f_11 = { 9.3776f, 0f, 11.4737f };
			uParam1->f_14 = 38.5265f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		
		case 61:
			uParam1->f_2 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_5 = { 5.6441f, 0f, -138.7474f };
			uParam1->f_8 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_11 = { 4.8242f, 0f, -118.3167f };
			uParam1->f_14 = 37f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		
		case 91:
		case 93:
			uParam1->f_2 = { 1406.112f, 3590.231f, 34.4113f };
			uParam1->f_5 = { 17.5005f, 0f, 55.9579f };
			uParam1->f_8 = { 1405.673f, 3590.525f, 34.4113f };
			uParam1->f_11 = { 18.4979f, 0f, 55.9579f };
			uParam1->f_14 = 56.3199f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 69:
		case 86:
		case 90:
			uParam1->f_2 = { 739.1493f, -990.3961f, 29.85194f };
			uParam1->f_5 = { 17.19917f, 0f, 44.21184f };
			uParam1->f_8 = { 738.4197f, -989.6462f, 30.17581f };
			uParam1->f_11 = { 17.19917f, 0f, 44.21184f };
			uParam1->f_14 = 47.56362f;
			uParam1->f_15 = 6000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		
		case 70:
			uParam1->f_2 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_5 = { -0.2f, 0f, -169.6f };
			uParam1->f_8 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_11 = { -0.2f, 0f, -169.6f };
			uParam1->f_14 = 47.6f;
			uParam1->f_15 = 5000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 1;
			break;
		
		case 45:
			uParam1->f_2 = { -458.5666f, 1010.097f, 316.3736f };
			uParam1->f_5 = { 14.47186f, 0f, -18.28884f };
			uParam1->f_8 = { -457.3f, 1011.6f, 316.9f };
			uParam1->f_11 = { 14.5f, 0f, -18.5f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 49:
			uParam1->f_2 = { -723.9982f, -155.7184f, 38.12362f };
			uParam1->f_5 = { 30.12048f, 0f, -99.11243f };
			uParam1->f_8 = { -722.4385f, -155.7817f, 37.4443f };
			uParam1->f_11 = { 2.0429f, 0f, -101.5132f };
			uParam1->f_14 = 45f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 9:
			switch (func_110())
			{
				case 2:
					uParam1->f_2 = { 416.3221f, -960.2586f, 30.6696f };
					uParam1->f_5 = { 21.5747f, 0f, -135.2969f };
					uParam1->f_8 = { 416.8894f, -960.832f, 30.9887f };
					uParam1->f_11 = { 21.9916f, 0f, -135.2969f };
					uParam1->f_14 = 47.1057f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
				
				case 1:
					uParam1->f_2 = { 1393.363f, -2052.581f, 65.4054f };
					uParam1->f_5 = { 2.5107f, 0f, 51.1167f };
					uParam1->f_8 = { 1393.456f, -2052.656f, 68.146f };
					uParam1->f_11 = { 2.5107f, 0f, 51.1167f };
					uParam1->f_14 = 35.9859f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
			}
			break;
		
		case 30:
			uParam1->f_2 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_5 = { 61.9f, 0f, -63.8f };
			uParam1->f_8 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_11 = { 61.9f, 0f, -63.8f };
			uParam1->f_14 = 46.6f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 39:
			uParam1->f_2 = { 3841.93f, 4464.658f, 2.6587f };
			uParam1->f_5 = { 8.4859f, 0.0024f, 143.0775f };
			uParam1->f_8 = { 3842.54f, 4464.184f, 2.6587f };
			uParam1->f_11 = { 8.4859f, 0.0024f, 142.0089f };
			uParam1->f_14 = 34.1544f;
			uParam1->f_15 = 3000;
			uParam1->f_16 = 0;
			break;
		
		case 71:
			uParam1->f_2 = { -1193.1f, -1525.3f, 4.4f };
			uParam1->f_5 = { 9.4f, 0f, -78.8f };
			uParam1->f_8 = { -1192.2f, -1525.1f, 4.4f };
			uParam1->f_11 = { 9.4f, 0f, -78.5f };
			uParam1->f_14 = 30.4f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 74:
			uParam1->f_2 = { -24.2f, -2417.6f, 7.8f };
			uParam1->f_5 = { 10.4f, 0f, 80.4f };
			uParam1->f_8 = { -23.8f, -2414.8f, 7.8f };
			uParam1->f_11 = { 10.4f, 0f, 81.4f };
			uParam1->f_14 = 48.1095f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 84:
		case 85:
		case 65:
			uParam1->f_2 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_5 = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_8 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_11 = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_14 = 39.4027f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 62:
		case 15:
		case 16:
			uParam1->f_2 = { 1998.215f, 3816.983f, 33.0117f };
			uParam1->f_5 = { 5.9088f, 0f, 89.1989f };
			uParam1->f_8 = { 1997.154f, 3817.004f, 33.1215f };
			uParam1->f_11 = { 5.9088f, 0f, 89.1989f };
			uParam1->f_14 = 36.8186f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			if (iParam0 == 62)
			{
				if (func_110() != 2)
				{
					uParam1->f_2 = { 0f, 0f, 0f };
					uParam1->f_5 = { 0f, 0f, 0f };
					uParam1->f_8 = { 0f, 0f, 0f };
					uParam1->f_11 = { 0f, 0f, 0f };
					uParam1->f_14 = -1f;
					uParam1->f_15 = -1;
					uParam1->f_16 = 0;
				}
			}
			break;
		
		case 63:
			uParam1->f_2 = { 1576f, 3363.9f, 55.5f };
			uParam1->f_5 = { 0.5f, 0f, -123.8f };
			uParam1->f_8 = { 1575.2f, 3364.4f, 49.2f };
			uParam1->f_11 = { -4.3f, 0f, -124.1f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 64:
			uParam1->f_2 = { 1566f, 3378.8f, 42.8f };
			uParam1->f_5 = { -2.4f, 0f, -126.3f };
			uParam1->f_8 = { 1567.6f, 3376.9f, 45f };
			uParam1->f_11 = { 1.6f, 0f, -124.6f };
			uParam1->f_14 = 34.7f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 24:
			uParam1->f_2 = { 1339.573f, -2550.873f, 56.28254f };
			uParam1->f_5 = { -2.348373f, -2.1E-05f, 159.736f };
			uParam1->f_8 = { 1334.491f, -2549.345f, 47.69109f };
			uParam1->f_11 = { 2.789334f, -2.1E-05f, -156.4397f };
			uParam1->f_14 = 25.66f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 25:
			uParam1->f_2 = { 2383.651f, 2624.787f, 46.9527f };
			uParam1->f_5 = { 14.6191f, 0f, 64.366f };
			uParam1->f_8 = { 2383.929f, 2622.802f, 47.2707f };
			uParam1->f_11 = { 33.17714f, -0.13073f, 12.31436f };
			uParam1->f_14 = 35.31843f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 26:
			uParam1->f_2 = { 1755.519f, -1474.981f, 126.1743f };
			uParam1->f_5 = { 4.5341f, 0f, 89.6405f };
			uParam1->f_8 = { 1772.26f, -1475.085f, 125.9465f };
			uParam1->f_11 = { 5.8327f, 0f, 89.6405f };
			uParam1->f_14 = 32.7f;
			uParam1->f_15 = 6500;
			uParam1->f_16 = 0;
			break;
		
		case 3:
			uParam1->f_2 = { -1514.257f, -947.7281f, 15.0253f };
			uParam1->f_5 = { -3.5807f, -0.0001f, -46.3209f };
			uParam1->f_8 = { -1512.601f, -949.2796f, 14.8827f };
			uParam1->f_11 = { -4.7682f, -0.0001f, -34.1393f };
			uParam1->f_14 = 29.9555f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 4:
			uParam1->f_2 = { -698.2578f, -934.4238f, 31.6909f };
			uParam1->f_5 = { -22.0467f, 0f, 32.1888f };
			uParam1->f_8 = { -697.8695f, -935.0406f, 31.9861f };
			uParam1->f_11 = { -20.6093f, 0f, 32.1888f };
			uParam1->f_14 = 30f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 5:
			uParam1->f_2 = { 221.8613f, -830.6434f, 45.3154f };
			uParam1->f_5 = { -13.9263f, 0f, 140.7092f };
			uParam1->f_8 = { 227.5233f, -832.8285f, 45.3154f };
			uParam1->f_11 = { -13.9263f, 0f, 140.7092f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 6:
			uParam1->f_2 = { -23.3747f, -120.3161f, 64.139f };
			uParam1->f_5 = { -5.7232f, 0f, 5.1015f };
			uParam1->f_8 = { -22.5824f, -122.52f, 64.139f };
			uParam1->f_11 = { -5.7232f, 0f, 6.6362f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 7:
			uParam1->f_2 = { 803.5977f, -1075.869f, 37.1981f };
			uParam1->f_5 = { -10.7685f, 0f, -38.1705f };
			uParam1->f_8 = { 803.5977f, -1075.869f, 32.7981f };
			uParam1->f_11 = { -10.7685f, 0f, -38.1705f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		default:
			uParam1->f_2 = { 0f, 0f, 0f };
			uParam1->f_5 = { 0f, 0f, 0f };
			uParam1->f_8 = { 0f, 0f, 0f };
			uParam1->f_11 = { 0f, 0f, 0f };
			uParam1->f_14 = -1f;
			uParam1->f_15 = -1;
			uParam1->f_16 = 0;
			break;
	}
	if (unk_0x70E57E9927B6BA58("RAIN") == unk_0xED2E53B1A3927830())
	{
		if (unk_0xD6F9DEE4765092A9(&(uParam1->f_18)))
		{
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
		}
		if (unk_0xD6F9DEE4765092A9(&(uParam1->f_22)))
		{
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
		}
	}
}

bool func_416()
{
	bool bVar0;
	
	bVar0 = unk_0x0DDDD9D153BCF51F();
	if (!Global_78557)
	{
		if (!bVar0)
		{
			Global_78557 = 1;
		}
	}
	return bVar0;
}

void func_417()
{
	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), true, 0);
	if (!func_23())
	{
		if (func_447(0))
		{
			unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 0, 0);
			unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
			unk_0xEC9DAA34BBB4658C(joaat("rapidgt"));
			unk_0xEC9DAA34BBB4658C(joaat("surano"));
			unk_0xEC9DAA34BBB4658C(joaat("carbonizzare"));
			while ((!unk_0x6252BC0DD8A320DB(joaat("rapidgt")) || !unk_0x6252BC0DD8A320DB(joaat("surano"))) || !unk_0x6252BC0DD8A320DB(joaat("carbonizzare")))
			{
				wait(0);
			}
			if (!unk_0xFC8BFE4B41177C22(iLocal_279))
			{
				unk_0x2094BC4B6731BA68(Local_306, 5f, 1, 0, 0, 0);
				iLocal_279 = unk_0x5779387E956077A6(joaat("rapidgt"), Local_306, fLocal_319, 1, 1, 0);
				unk_0xD133EF7430EDCD09(iLocal_279, 112, 112);
				unk_0xD25E9BDC14A0B649(iLocal_279, 3000, 0);
				unk_0xD05AF216D970F274(iLocal_279, 1);
				unk_0x55098D9E9AD58806(joaat("rapidgt"));
				unk_0xCCA6D8A84EE8C88A(joaat("rapidgt"), 1);
				unk_0x11C125313CB8ADA2(iLocal_279, 1);
				unk_0x5FE0938FDE9B0958(iLocal_279, 1);
			}
			if (!unk_0xFC8BFE4B41177C22(iLocal_290))
			{
				if (unk_0x6252BC0DD8A320DB(joaat("surano")))
				{
					unk_0x2094BC4B6731BA68(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, 0);
					iLocal_290 = unk_0x5779387E956077A6(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 1, 1, 0);
					unk_0xD133EF7430EDCD09(iLocal_290, 0, 0);
					unk_0xD25E9BDC14A0B649(iLocal_290, 3000, 0);
					unk_0xD05AF216D970F274(iLocal_290, 1);
					unk_0x55098D9E9AD58806(joaat("surano"));
					unk_0xCCA6D8A84EE8C88A(joaat("surano"), 1);
					unk_0x5FE0938FDE9B0958(iLocal_290, 1);
				}
			}
			if (!unk_0xFC8BFE4B41177C22(iLocal_291))
			{
				if (unk_0x6252BC0DD8A320DB(joaat("carbonizzare")))
				{
					unk_0x2094BC4B6731BA68(Local_306, 5f, 1, 0, 0, 0);
					iLocal_291 = unk_0x5779387E956077A6(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 1, 1, 0);
					unk_0xD133EF7430EDCD09(iLocal_291, 89, 89);
					unk_0xD25E9BDC14A0B649(iLocal_291, 3000, 0);
					unk_0xD05AF216D970F274(iLocal_291, 1);
					unk_0x55098D9E9AD58806(joaat("carbonizzare"));
					unk_0xCCA6D8A84EE8C88A(joaat("carbonizzare"), 1);
					unk_0x5FE0938FDE9B0958(iLocal_291, 1);
				}
			}
		}
		iLocal_223 = 0;
		iLocal_225 = 0;
		iLocal_343 = 0;
		iLocal_222 = 1;
	}
	else
	{
		unk_0x06CD913C241C765E("SecGuards", &iLocal_488);
		unk_0xD414C47AFF81382A(5, joaat("player"), iLocal_488);
		unk_0xD414C47AFF81382A(5, iLocal_488, joaat("player"));
		if (Global_94858 == 1)
		{
			if (func_420() == 0)
			{
				func_419(Local_316, fLocal_323, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x86A2BC11844DEEB3("TRV4_START_RT");
				iLocal_222 = 3;
			}
			if (func_420() == 1)
			{
				func_419(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x86A2BC11844DEEB3("TRV4_FOOT_CHASE_RT");
				iLocal_222 = 5;
			}
			if (func_420() == 2)
			{
				func_419(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x86A2BC11844DEEB3("TRV4_EVADE_RT");
				iLocal_222 = 8;
			}
			if (func_420() == 3)
			{
				func_419(-920.0547f, -2744.661f, 12.9322f, 357.1374f, 1, 0);
				func_418();
			}
		}
		else
		{
			if (func_420() == 0)
			{
				func_419(-1019.579f, -484.872f, 36.0795f, 93.7701f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x86A2BC11844DEEB3("TRV4_START_RT");
				iLocal_222 = 2;
			}
			if (func_420() == 1)
			{
				func_419(Local_316, fLocal_323, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x86A2BC11844DEEB3("TRV4_START_RT");
				iLocal_222 = 3;
			}
			if (func_420() == 2)
			{
				func_419(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x86A2BC11844DEEB3("TRV4_FOOT_CHASE_RT");
				iLocal_222 = 5;
			}
			if (func_420() == 3)
			{
				func_419(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x86A2BC11844DEEB3("TRV4_EVADE_RT");
				iLocal_222 = 8;
			}
		}
		unk_0xF2CB0224D3BE0B42("TREV4", 0);
		while (!unk_0xDCB78A15E5F495DC(0))
		{
			wait(0);
		}
	}
}

void func_418()
{
	if (iLocal_223 == 0)
	{
		unk_0x2094BC4B6731BA68(-920.0547f, -2744.662f, 12.8434f, 20f, 1, 0, 0, 0);
		unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 0, 0);
		unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
		iLocal_223++;
	}
	if (iLocal_223 == 1)
	{
		unk_0x6C39BDF5EA5D38FC(-920.0547f, -2744.662f, 12.8434f);
		if (!unk_0x9390801B06EE998F())
		{
			func_21(0, -1, 1);
			unk_0x10B228D2FDB7AF16(800);
		}
		func_6();
	}
}

void func_419(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	if (func_23())
	{
		unk_0xAECC5FA98C879D67(0);
		unk_0x8744D2E3FC95740E(&(Global_100681.f_20), 2);
		unk_0x98E393364463951A(1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), false, 0);
		}
		Global_100677 = { Param0 };
		Global_100680 = fParam1;
		Global_100676 = 1;
		if (iParam2 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_100681.f_20), 14);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_100681.f_20), 14);
		}
		if (iParam3 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_100681.f_20), 24);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_100681.f_20), 24);
		}
		func_22(1);
	}
}

int func_420()
{
	if (!Global_100681 == 10 && !Global_100681 == 9)
	{
		return 0;
	}
	return Global_100681.f_2;
}

void func_421()
{
	if (iLocal_435[0] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_204[7]))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_204[7], 0))
			{
				unk_0x616C2EAE947E6027(iLocal_204[7], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_435[0] = 1;
			}
		}
	}
	if (iLocal_436[0] == 0)
	{
		if (iLocal_435[0] == 1)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_204[7]))
			{
				if (!unk_0xD9F5E1FEFD1329E4(iLocal_204[7], 0))
				{
					unk_0x001B008A010F2FE6(iLocal_204[7], 0);
					iLocal_436[0] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0x001B008A010F2FE6(iLocal_204[7], 0);
					iLocal_436[0] = 1;
				}
			}
			else
			{
				iLocal_436[0] = 1;
			}
		}
	}
	if (iLocal_435[1] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_204[8]))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_204[8], 0))
			{
				unk_0x616C2EAE947E6027(iLocal_204[8], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_435[1] = 1;
			}
		}
	}
	if (iLocal_436[1] == 0)
	{
		if (iLocal_435[1] == 1)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_204[8]))
			{
				if (!unk_0xD9F5E1FEFD1329E4(iLocal_204[8], 0))
				{
					unk_0x001B008A010F2FE6(iLocal_204[8], 0);
					iLocal_436[1] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0x001B008A010F2FE6(iLocal_204[8], 0);
					iLocal_436[1] = 1;
				}
			}
			else
			{
				iLocal_436[1] = 1;
			}
		}
	}
	if (iLocal_435[2] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_204[11]))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_204[11], 0))
			{
				unk_0x616C2EAE947E6027(iLocal_204[11], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_435[2] = 1;
			}
		}
	}
	if (iLocal_436[2] == 0)
	{
		if (iLocal_435[2] == 1)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_204[11]))
			{
				if (!unk_0xD9F5E1FEFD1329E4(iLocal_204[11], 0))
				{
					unk_0x001B008A010F2FE6(iLocal_204[11], 0);
					iLocal_436[2] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0x001B008A010F2FE6(iLocal_204[11], 0);
					iLocal_436[2] = 1;
				}
			}
			else
			{
				iLocal_436[2] = 1;
			}
		}
	}
	if (iLocal_435[3] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_204[12]))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_204[12], 0))
			{
				unk_0x616C2EAE947E6027(iLocal_204[12], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_435[3] = 1;
			}
		}
	}
	if (iLocal_436[3] == 0)
	{
		if (iLocal_435[3] == 1)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_204[12]))
			{
				if (!unk_0xD9F5E1FEFD1329E4(iLocal_204[12], 0))
				{
					unk_0x001B008A010F2FE6(iLocal_204[12], 0);
					iLocal_436[3] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0x001B008A010F2FE6(iLocal_204[12], 0);
					iLocal_436[3] = 1;
				}
			}
			else
			{
				iLocal_436[3] = 1;
			}
		}
	}
	if (iLocal_435[4] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_204[13]))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_204[13], 0))
			{
				unk_0x616C2EAE947E6027(iLocal_204[13], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_435[4] = 1;
			}
		}
	}
	if (iLocal_436[4] == 0)
	{
		if (iLocal_435[4] == 1)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_204[13]))
			{
				if (!unk_0xD9F5E1FEFD1329E4(iLocal_204[13], 0))
				{
					unk_0x001B008A010F2FE6(iLocal_204[13], 0);
					iLocal_436[4] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0x001B008A010F2FE6(iLocal_204[13], 0);
					iLocal_436[4] = 1;
				}
			}
			else
			{
				iLocal_436[4] = 1;
			}
		}
	}
	if (iLocal_435[5] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_204[14]))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_204[14], 0))
			{
				unk_0x616C2EAE947E6027(iLocal_204[14], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_435[5] = 1;
			}
		}
	}
	if (iLocal_436[5] == 0)
	{
		if (iLocal_435[5] == 1)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_204[14]))
			{
				if (!unk_0xD9F5E1FEFD1329E4(iLocal_204[14], 0))
				{
					unk_0x001B008A010F2FE6(iLocal_204[14], 0);
					iLocal_436[5] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0x001B008A010F2FE6(iLocal_204[14], 0);
					iLocal_436[5] = 1;
				}
			}
			else
			{
				iLocal_436[5] = 1;
			}
		}
	}
	if (iLocal_435[6] == 0)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_204[15]))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_204[15], 0))
			{
				unk_0x616C2EAE947E6027(iLocal_204[15], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_435[6] = 1;
			}
		}
	}
	if (iLocal_436[6] == 0)
	{
		if (iLocal_435[6] == 1)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_204[15]))
			{
				if (!unk_0xD9F5E1FEFD1329E4(iLocal_204[15], 0))
				{
					unk_0x001B008A010F2FE6(iLocal_204[15], 0);
					iLocal_436[6] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0x001B008A010F2FE6(iLocal_204[15], 0);
					iLocal_436[6] = 1;
				}
			}
			else
			{
				iLocal_436[6] = 1;
			}
		}
	}
}

void func_422()
{
	switch (iLocal_222)
	{
		case 2:
			if (iLocal_223 > 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_362 = 0;
					iLocal_449 = 0;
					iLocal_472 = 0;
					iLocal_473 = 0;
					func_17(&uLocal_490, 1, 0, "Devin", 0, 1);
					func_17(&uLocal_490, 0, unk_0x4A8C381C258A124D(), "Michael", 0, 1);
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_362 == 0)
					{
						if (unk_0xED977E2AE2CB16EE(Local_318, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1) > 2f)
						{
							if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
							{
								if (func_278(&uLocal_490, "T1M4AUD", "T1M4_CHASE", 3, 0, 0, 0))
								{
									iLocal_362 = 1;
								}
							}
						}
					}
					if (iLocal_449 == 0)
					{
						if (unk_0xED977E2AE2CB16EE(Local_318, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1) > 100f)
						{
							if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
							{
								if (func_425(&uLocal_490, 29, "T1M4AUD", "SOL3_DEVCALL", 7, 0, 0, 1))
								{
									unk_0xA62957B100C8DE6D(4f, 10f, 4);
									iLocal_449 = 1;
								}
							}
						}
					}
					if (iLocal_472 == 0 && iLocal_449 == 1)
					{
						if (func_424())
						{
							if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
							{
								if (func_278(&uLocal_490, "T1M4AUD", "T1M4_REACT", 3, 0, 0, 0))
								{
									iLocal_472 = 1;
								}
							}
						}
					}
					if (iLocal_473 == 0)
					{
						if (unk_0xFC8BFE4B41177C22(iLocal_278))
						{
							if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
							{
								if (func_16(unk_0x4A8C381C258A124D(), iLocal_278, 1) < 200f && unk_0xCB5CAFF0A4A8B74B(iLocal_278))
								{
									if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
									{
										if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
										{
											if (func_278(&uLocal_490, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												unk_0xA62957B100C8DE6D(3f, 12f, 4);
												iLocal_473 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_223 >= 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_450[0] = 0;
					iLocal_450[1] = 0;
					iLocal_450[2] = 0;
					iLocal_450[3] = 0;
					iLocal_469 = 0;
					iLocal_470 = 0;
					iLocal_471 = 0;
					iLocal_474 = 0;
					iLocal_475 = 0;
					iLocal_476 = 0;
					iLocal_477 = 0;
					iLocal_478 = 0;
					iLocal_241 = unk_0x1DD05E817C89C737();
					func_17(&uLocal_490, 0, unk_0x4A8C381C258A124D(), "Michael", 0, 1);
					func_17(&uLocal_490, 4, 0, "SOL3COP", 0, 1);
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_473 == 0)
					{
						if (unk_0xFC8BFE4B41177C22(iLocal_278))
						{
							if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
							{
								if (func_16(unk_0x4A8C381C258A124D(), iLocal_278, 1) < 200f && unk_0xCB5CAFF0A4A8B74B(iLocal_278))
								{
									if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
									{
										if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
										{
											if (func_278(&uLocal_490, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												iLocal_473 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (unk_0xFC8BFE4B41177C22(iLocal_278))
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
						{
							if (unk_0x050D073F91C5243C(iLocal_278))
							{
								if (iLocal_450[0] == 0)
								{
									if (unk_0xD9F5E1FEFD1329E4(iLocal_204[7], 0) || unk_0xD9F5E1FEFD1329E4(iLocal_204[8], 0))
									{
										if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 7000f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 28000f)
										{
											if (!func_277())
											{
												if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
												{
													if (func_278(&uLocal_490, "T1M4AUD", "T1M4_POLICE", 7, 0, 0, 0))
													{
														iLocal_450[0] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_450[1] == 0)
								{
									if (unk_0xD9F5E1FEFD1329E4(iLocal_204[7], 0) || unk_0xD9F5E1FEFD1329E4(iLocal_204[8], 0))
									{
										if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 28000f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 34500f)
										{
											if (!func_277())
											{
												if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
												{
													if (func_278(&uLocal_490, "T1M4AUD", "T1M4_POLICE2", 7, 0, 0, 0))
													{
														unk_0xA62957B100C8DE6D(4f, 4f, 4);
														iLocal_450[1] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_450[2] == 0)
								{
									if (unk_0xD9F5E1FEFD1329E4(iLocal_204[7], 0) || unk_0xD9F5E1FEFD1329E4(iLocal_204[8], 0))
									{
										if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 36000f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 41000f)
										{
											if (!func_277())
											{
												if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
												{
													if (func_278(&uLocal_490, "T1M4AUD", "T1M4_POLICE3", 7, 0, 0, 0))
													{
														unk_0xA62957B100C8DE6D(2f, 4f, 4);
														iLocal_450[2] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_470 == 0)
								{
									if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 41000f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 43500f)
									{
										if (unk_0xFC8BFE4B41177C22(iLocal_283) && unk_0xCB5CAFF0A4A8B74B(iLocal_283))
										{
											if (!func_277())
											{
												if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
												{
													if (func_278(&uLocal_490, "T1M4AUD", "T1M4_BOOM", 7, 0, 0, 0))
													{
														unk_0xA62957B100C8DE6D(4f, 4f, 4);
														iLocal_470 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_471 == 0)
								{
									if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 50509f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 50872f)
									{
										if (unk_0xFC8BFE4B41177C22(iLocal_283) && unk_0xCB5CAFF0A4A8B74B(iLocal_283))
										{
											if (!func_277())
											{
												if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
												{
													if (func_278(&uLocal_490, "T1M4AUD", "T1M4_BLOW", 7, 0, 0, 0))
													{
														iLocal_471 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_450[3] == 0)
								{
									if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 58000f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 68000f)
									{
										if (!func_277())
										{
											if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
											{
												if (func_278(&uLocal_490, "T1M4AUD", "T1M4_POLICE4", 7, 0, 0, 0))
												{
													iLocal_450[3] = 1;
												}
											}
										}
									}
								}
								if (iLocal_474 == 0 && iLocal_450[3] == 1)
								{
									if (unk_0x157F3D5A4AAB2C50(iLocal_278) < 76000f)
									{
										if (!func_277())
										{
											if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
											{
												if (func_278(&uLocal_490, "T1M4AUD", "T1M4_CHASE3", 7, 0, 0, 0))
												{
													iLocal_474 = 1;
												}
											}
										}
									}
								}
								if (iLocal_469 == 0)
								{
									if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 80000f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 82000f)
									{
										if (unk_0xFC8BFE4B41177C22(iLocal_280[0]))
										{
											if (unk_0xD9F5E1FEFD1329E4(iLocal_280[0], 0))
											{
												if (unk_0xCB5CAFF0A4A8B74B(iLocal_280[0]))
												{
													if (!func_277())
													{
														if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
														{
															if (func_278(&uLocal_490, "T1M4AUD", "T1M4_CHASE4", 7, 0, 0, 0))
															{
																unk_0xA62957B100C8DE6D(3f, 10f, 4);
																iLocal_469 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_475 == 0)
								{
									if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 82100f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 83500f)
									{
										if (unk_0xFC8BFE4B41177C22(iLocal_204[11]))
										{
											if (unk_0xCB5CAFF0A4A8B74B(iLocal_204[11]))
											{
												if (!func_277())
												{
													if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
													{
														if (func_278(&uLocal_490, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_475 = 1;
														}
													}
												}
											}
										}
										else if (unk_0xFC8BFE4B41177C22(iLocal_204[12]))
										{
											if (unk_0xCB5CAFF0A4A8B74B(iLocal_204[12]))
											{
												if (!func_277())
												{
													if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
													{
														if (func_278(&uLocal_490, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_475 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_478 == 0)
								{
									if ((unk_0x157F3D5A4AAB2C50(iLocal_278) > 101891f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 105000f) && unk_0xCB5CAFF0A4A8B74B(iLocal_278))
									{
										if (!func_277())
										{
											if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
											{
												if (func_278(&uLocal_490, "T1M4AUD", "T1M4_CHASE7", 7, 0, 0, 0))
												{
													unk_0xA62957B100C8DE6D(3f, 10f, 4);
													iLocal_478 = 1;
												}
											}
										}
									}
								}
								if (((unk_0x157F3D5A4AAB2C50(iLocal_278) > 105500f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 119000f) && unk_0x1DD05E817C89C737() > iLocal_241 + 7000) && iLocal_477 == 0)
								{
									if (!func_277())
									{
										if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
										{
											if (func_278(&uLocal_490, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_241 = unk_0x1DD05E817C89C737();
												iLocal_477 = 1;
											}
										}
									}
								}
								if (iLocal_476 == 0 && iLocal_477 == 1)
								{
									if (!func_277())
									{
										if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
										{
											if (func_278(&uLocal_490, "T1M4AUD", "T1M4_CHASE6", 7, 0, 0, 0))
											{
												iLocal_476 = 1;
											}
										}
									}
								}
								if (((unk_0x157F3D5A4AAB2C50(iLocal_278) > 105500f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 119000f) && unk_0x1DD05E817C89C737() > iLocal_241 + 7000) && iLocal_476 == 1)
								{
									if (!func_277())
									{
										if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
										{
											if (func_278(&uLocal_490, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_241 = unk_0x1DD05E817C89C737();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (iLocal_223 > 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_452 = 0;
					iLocal_479 = 0;
					iLocal_485 = 0;
					iLocal_480 = 1;
					iLocal_246 = unk_0x1DD05E817C89C737();
					func_17(&uLocal_490, 0, unk_0x4A8C381C258A124D(), "Michael", 0, 1);
					if (!unk_0x4FAFF4BCB7633475(iLocal_264))
					{
						func_17(&uLocal_490, 2, iLocal_264, "MOLLY", 0, 1);
					}
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_485 == 0)
					{
						unk_0xF4129180F5858D16("T1M4_BBAA", "AIRPORTANNO", -939.5f, -2932.2f, 16f, "SPEECH_PARAMS_FORCE_FRONTEND");
						iLocal_485 = 1;
					}
					if (iLocal_480 == 1)
					{
						if (iLocal_452 == 0)
						{
							if (!func_277())
							{
								if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
								{
									if (func_278(&uLocal_490, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										unk_0xA62957B100C8DE6D(4f, 6f, 4);
										iLocal_242 = unk_0x1DD05E817C89C737();
										iLocal_452 = 1;
										iLocal_479 = 1;
										iLocal_480 = 0;
									}
								}
							}
						}
						if (unk_0x1DD05E817C89C737() > iLocal_242 + 5000)
						{
							if (!func_277())
							{
								if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
								{
									if (func_278(&uLocal_490, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										unk_0xA62957B100C8DE6D(4f, 6f, 4);
										iLocal_242 = unk_0x1DD05E817C89C737();
									}
								}
							}
						}
					}
					if (iLocal_479 == 1 && unk_0x1DD05E817C89C737() > iLocal_246 + 4000)
					{
						if (!func_277())
						{
							if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
							{
								if (func_278(&uLocal_490, "T1M4AUD", "T1M4_SHOUT1", 7, 0, 0, 0))
								{
									unk_0xA62957B100C8DE6D(4f, 6f, 4);
									iLocal_246 = unk_0x1DD05E817C89C737();
									iLocal_480 = 1;
									iLocal_479 = 0;
								}
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_223 > 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_453 = 0;
					iLocal_454 = 0;
					iLocal_455 = 0;
					iLocal_481 = 0;
					iLocal_482 = 0;
					func_17(&uLocal_490, 0, unk_0x4A8C381C258A124D(), "Michael", 0, 1);
					if (!unk_0x4FAFF4BCB7633475(iLocal_264))
					{
						func_17(&uLocal_490, 2, iLocal_264, "MOLLY", 0, 1);
					}
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_453 == 0)
					{
						if (!func_277())
						{
							if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
							{
								if (func_278(&uLocal_490, "T1M4AUD", "SOL3_PAST", 7, 0, 0, 0))
								{
									iLocal_453 = 1;
								}
							}
						}
					}
					if (iLocal_453 == 1 && iLocal_455 == 0)
					{
						if (!func_277())
						{
							if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
							{
								if (func_278(&uLocal_490, "T1M4AUD", "SOL3_WATCH", 7, 0, 0, 0))
								{
									iLocal_455 = 1;
								}
							}
						}
					}
					if (iLocal_454 == 0)
					{
						if (unk_0xFC8BFE4B41177C22(iLocal_264))
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_264))
							{
								if (unk_0x5266F1D2AEF6F73A(uLocal_251))
								{
									if (unk_0xBD3B265153D3BA2D(uLocal_251) > 0.65f && unk_0xBD3B265153D3BA2D(uLocal_251) < 0.835f)
									{
										if (!func_277())
										{
											if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
											{
												if (func_278(&uLocal_490, "T1M4AUD", "SOL3_SUCKS", 7, 0, 0, 0))
												{
													unk_0xA62957B100C8DE6D(8f, 8f, 4);
													iLocal_454 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_481 == 0)
					{
						if (!unk_0xFC8BFE4B41177C22(iLocal_264))
						{
							if (!func_277())
							{
								if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
								{
									if (func_278(&uLocal_490, "T1M4AUD", "T1M4_SMUSH", 7, 0, 0, 0))
									{
										iLocal_481 = 1;
									}
								}
							}
						}
					}
					if (iLocal_481 == 1 && iLocal_482 == 0)
					{
						if (!func_277())
						{
							if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
							{
								if (func_278(&uLocal_490, "T1M4AUD", "T1M4_SMUSH2", 7, 0, 0, 0))
								{
									iLocal_482 = 1;
								}
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (iLocal_223 > 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_483 = 0;
					iLocal_247 = unk_0x1DD05E817C89C737();
					func_17(&uLocal_490, 0, unk_0x4A8C381C258A124D(), "Michael", 0, 1);
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_483 == 0)
					{
						if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
						{
							iLocal_277 = func_423(unk_0x4A8C381C258A124D(), joaat("COP"), 0, 0, 28);
							if (unk_0xFC8BFE4B41177C22(iLocal_277))
							{
								if (func_16(unk_0x4A8C381C258A124D(), iLocal_277, 1) < 40f)
								{
									if (!func_277())
									{
										if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
										{
											if (func_278(&uLocal_490, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_483 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_483 == 1 && unk_0x1DD05E817C89C737() > iLocal_247 + 5000)
					{
						if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
						{
							iLocal_277 = func_423(unk_0x4A8C381C258A124D(), joaat("COP"), 0, 0, 28);
							if (unk_0xFC8BFE4B41177C22(iLocal_277))
							{
								if (func_16(unk_0x4A8C381C258A124D(), iLocal_277, 1) < 40f)
								{
									if (!func_277())
									{
										if (!unk_0xFBA523E6F8ACE541() || !unk_0x5994A2F6D4FFFE4D())
										{
											if (func_278(&uLocal_490, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_247 = unk_0x1DD05E817C89C737();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_423(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		unk_0xAA3F0A9E20917995(iParam0, &iVar0, iParam4);
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (unk_0xFC8BFE4B41177C22(iVar0[iVar1]))
			{
				if (!unk_0x4FAFF4BCB7633475(iVar0[iVar1]))
				{
					if (unk_0x2A661A0285B74A27(iVar0[iVar1]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (unk_0xCB5CAFF0A4A8B74B(iVar0[iVar1]))
								{
									return iVar0[iVar1];
								}
							}
							else
							{
								return iVar0[iVar1];
							}
						}
						else if (iVar1 + iParam2) <= (iVar0 - 1)
						{
							if (unk_0xFC8BFE4B41177C22(iVar0[(iVar1 + iParam2)]))
							{
								if (!unk_0x4FAFF4BCB7633475(iVar0[(iVar1 + iParam2)]))
								{
									if (unk_0x2A661A0285B74A27(iVar0[(iVar1 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (unk_0xCB5CAFF0A4A8B74B(iVar0[(iVar1 + iParam2)]))
											{
												return iVar0[(iVar1 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar1 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_424()
{
	if (Global_21725 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_425(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_276(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21773 = 1;
	Global_21732 = 1;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_21730 = 0;
	Global_21777 = 0;
	Global_21779 = 0;
	Global_2883585 = 0;
	return func_266(sParam3, iParam4, bParam7);
}

void func_426()
{
	if (((iLocal_222 == 4 || iLocal_222 == 5) || iLocal_222 == 8) || iLocal_222 == 6)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (func_427(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 2, 200, 0))
			{
				unk_0x873D736C20070A10(unk_0x259BE71D8A81D4FA());
				unk_0x75690DF4B79CDDCC(unk_0x259BE71D8A81D4FA());
			}
		}
	}
	if (iLocal_441 == 0)
	{
		if (iLocal_222 == 4)
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (func_427(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 2, 200, 0))
				{
					unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 3, 0);
					unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
					iLocal_441 = 1;
				}
			}
		}
	}
}

int func_427(struct<3> Param0, int iParam1, int iParam2, bool bParam3)
{
	struct<3> Var0[15];
	struct<3> Var1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 140f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			Var1[9 /*3*/].f_2 = (Var1[9 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[10 /*3*/].f_2 = (Var1[10 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[11 /*3*/].f_2 = (Var1[11 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[12 /*3*/].f_2 = (Var1[12 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[13 /*3*/].f_2 = (Var1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x26715B0ED6702C87(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

void func_428()
{
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iLocal_279 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		}
	}
}

void func_429()
{
	if (iLocal_349 == 1)
	{
		if (iLocal_222 == 4)
		{
			if (iLocal_224 > 1 && iLocal_424 == 0)
			{
				if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -828.6987f, -2938.073f, 12.21745f, -807.6911f, -2905.148f, 16.35626f, 28f, 0, 1, 0))
				{
					func_252("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_222 == 6)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_295))
			{
				if (unk_0xC450B06E5AAA0985(uLocal_300))
				{
					if (func_16(unk_0x4A8C381C258A124D(), iLocal_295, 1) > 100f)
					{
						func_252("TRV4_FAIL6");
					}
				}
			}
		}
		if (iLocal_222 == 4)
		{
			if (iLocal_224 == 2)
			{
				if (unk_0x1DD05E817C89C737() > iLocal_236 + 7000 && iLocal_439 == 0)
				{
					func_252("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_222 == 4)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_278))
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
				{
					if (unk_0x050D073F91C5243C(iLocal_278))
					{
						if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 62000f && unk_0x157F3D5A4AAB2C50(iLocal_278) < 77000f)
						{
							if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), -1219f, -2570f, 13f, 1) < 210f)
							{
								if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
								{
									if (unk_0xCFC0C995455A6204(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)) < 200f && unk_0xCFC0C995455A6204(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)) > 125f)
									{
										if (iLocal_438 == 0)
										{
											iLocal_239 = unk_0x1DD05E817C89C737();
											iLocal_438 = 1;
										}
										if (iLocal_438 == 1 && unk_0x1DD05E817C89C737() > iLocal_239 + 4000)
										{
											func_252("TRV4_FAIL1");
										}
									}
									else if (iLocal_438 == 1)
									{
										iLocal_438 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_222 == 5 || iLocal_222 == 6)
		{
			if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), -928.9f, -2935f, 13f, 1) < 5f && !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
			{
				func_252("TRV4_FAIL1");
			}
		}
		if (iLocal_222 == 2 || iLocal_222 == 4)
		{
			if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()) || unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
			{
				if (func_427(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 2, 200, 0))
				{
					func_252("TRV4_FAIL2");
				}
				else if (!func_227("TRV4_HELP3"))
				{
					func_432("TRV4_HELP3");
				}
			}
			else if (func_227("TRV4_HELP3"))
			{
				unk_0x428C32CC68809A35(1);
			}
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_278))
		{
			if (!unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
			{
				if (unk_0xFC8BFE4B41177C22(iLocal_264))
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_264))
					{
						unk_0x935364B4448CD584(iLocal_264, 0);
						unk_0xD25E9BDC14A0B649(iLocal_264, 0, 0);
					}
				}
			}
		}
		if (iLocal_358 == 1)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_264))
			{
				if (unk_0x4FAFF4BCB7633475(iLocal_264))
				{
					func_252("TRV4_FAIL3");
				}
			}
		}
		if (iLocal_222 == 4)
		{
			if (iLocal_350 == 1)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_264))
				{
					if (func_13(unk_0x4A8C381C258A124D(), iLocal_264) > 300f)
					{
						if (iLocal_404 == 1)
						{
							unk_0x406CBCEA35499884();
							func_20("TRV4_WARN1", 7500, 1);
							iLocal_404 = 0;
						}
					}
					else if (iLocal_404 == 0)
					{
						iLocal_404 = 1;
					}
					if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_278))
						{
							if (unk_0x157F3D5A4AAB2C50(iLocal_278) < 40000f)
							{
								if (func_13(unk_0x4A8C381C258A124D(), iLocal_264) > 400f)
								{
									func_252("TRV4_FAIL1");
								}
							}
							else if (func_13(unk_0x4A8C381C258A124D(), iLocal_264) > 350f)
							{
								func_252("TRV4_FAIL1");
							}
						}
					}
				}
			}
			if (iLocal_224 == 3)
			{
				if (iLocal_425 == 1)
				{
					if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), -934.4f, -2927.2f, 13.2f, 1) > 25f || unk_0x1DD05E817C89C737() > iLocal_237 + 12000)
					{
						func_252("TRV4_FAIL1");
					}
				}
			}
		}
		if (iLocal_222 == 2 || iLocal_222 == 4)
		{
			if (unk_0x0F00017BC718D851(unk_0x4A8C381C258A124D()))
			{
				func_252("TRV4_FAIL1");
			}
		}
		if (iLocal_222 == 4)
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_278, 0))
			{
				if (unk_0x050D073F91C5243C(iLocal_278))
				{
					if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 111509f)
					{
						if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1070.838f, -2942.241f, 12.19534f, -1009.038f, -2977.609f, 17.44443f, 89.5f, 0, 1, 0))
						{
							func_252("TRV4_FAIL1");
						}
					}
					if (unk_0x157F3D5A4AAB2C50(iLocal_278) > 122000f)
					{
						if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
						{
							if (unk_0xD1F1A906BA9226BE(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
							{
								if (iLocal_440 == 0)
								{
									iLocal_240 = unk_0x1DD05E817C89C737();
									iLocal_440 = 1;
								}
								if (iLocal_440 == 1)
								{
									if (unk_0x1DD05E817C89C737() > iLocal_240 + 4000)
									{
										func_252("TRV4_FAIL1");
									}
								}
							}
							else
							{
								iLocal_440 = 0;
							}
						}
					}
				}
			}
		}
		if (iLocal_222 == 2)
		{
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -803.4108f, -2173.417f, -1.911488f, -605.6846f, -2358.229f, 27.32842f, 250f, 0, 1, 0))
			{
				func_252("TRV4_FAIL1");
			}
		}
		if (iLocal_405 == 1)
		{
			if (func_431())
			{
				func_430();
			}
		}
	}
}

void func_430()
{
	func_438(unk_0x4A8C381C258A124D(), 0);
	func_434();
}

int func_431()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_100681 == 7 || Global_100681 == 8)
	{
		return 1;
	}
	return 0;
}

void func_432(char* sParam0)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

void func_433(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_112704, unk_0x1AF90EB93E0012D6(), 24);
		Global_112698 = 1;
	}
	else
	{
		StringCopy(&Global_112704, "NULL", 24);
		Global_112698 = 0;
	}
}

void func_434()
{
	func_440(24, 1);
	unk_0xCFBD89D2F1F18961("PoliceScannerDisabled", 0);
	unk_0xA63572E348CC4CFB(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 1, 1);
	func_435();
	func_226(&uLocal_28, 0, 0);
	unk_0xF6ECB54A7941386F(0);
	unk_0xAD69CF046AA50E85(0);
	unk_0x59E2E0637E7776F3();
	if (unk_0xFC8BFE4B41177C22(iLocal_287))
	{
		unk_0x8C1F7D7A31B2A38E(&iLocal_287);
	}
	func_433(0);
	if (unk_0xF935563454D3B338(uLocal_263))
	{
		unk_0x8E99C7AF6C6639AB(uLocal_263);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_264))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_264))
		{
			unk_0x44FB298D6382876D(iLocal_264, 1);
		}
		unk_0xF09E30AF1B8FB379(&iLocal_264);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_266))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_266))
		{
			unk_0x44FB298D6382876D(iLocal_266, 1);
		}
		unk_0xF09E30AF1B8FB379(&iLocal_266);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_269))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_269))
		{
			unk_0x44FB298D6382876D(iLocal_269, 1);
		}
		unk_0xF09E30AF1B8FB379(&iLocal_269);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_270))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_270))
		{
			unk_0x44FB298D6382876D(iLocal_270, 1);
		}
		unk_0xF09E30AF1B8FB379(&iLocal_270);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_271))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_271))
		{
			unk_0x44FB298D6382876D(iLocal_271, 1);
		}
		unk_0xF09E30AF1B8FB379(&iLocal_271);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_272))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_272))
		{
			unk_0x44FB298D6382876D(iLocal_272, 1);
		}
		unk_0xF09E30AF1B8FB379(&iLocal_272);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_273))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_273))
		{
			unk_0x44FB298D6382876D(iLocal_273, 1);
		}
		unk_0xF09E30AF1B8FB379(&iLocal_273);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_274))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_274))
		{
			unk_0x44FB298D6382876D(iLocal_274, 1);
		}
		unk_0xF09E30AF1B8FB379(&iLocal_274);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_265[0]))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_265[0]))
		{
			unk_0x44FB298D6382876D(iLocal_265[0], 1);
		}
		unk_0xF09E30AF1B8FB379(&(iLocal_265[0]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_265[1]))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_265[1]))
		{
			unk_0x44FB298D6382876D(iLocal_265[1], 1);
		}
		unk_0xF09E30AF1B8FB379(&(iLocal_265[1]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_265[2]))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_265[2]))
		{
			unk_0x44FB298D6382876D(iLocal_265[2], 1);
		}
		unk_0xF09E30AF1B8FB379(&(iLocal_265[2]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_265[3]))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_265[3]))
		{
			unk_0x44FB298D6382876D(iLocal_265[3], 1);
		}
		unk_0xF09E30AF1B8FB379(&(iLocal_265[3]));
	}
	if (unk_0xFC8BFE4B41177C22(uLocal_267[0]))
	{
		if (!unk_0x4FAFF4BCB7633475(uLocal_267[0]))
		{
			unk_0x44FB298D6382876D(uLocal_267[0], 1);
		}
		unk_0xF09E30AF1B8FB379(&(uLocal_267[0]));
	}
	if (unk_0xFC8BFE4B41177C22(uLocal_267[1]))
	{
		if (!unk_0x4FAFF4BCB7633475(uLocal_267[1]))
		{
			unk_0x44FB298D6382876D(uLocal_267[1], 1);
		}
		unk_0xF09E30AF1B8FB379(&(uLocal_267[1]));
	}
	if (unk_0xFC8BFE4B41177C22(uLocal_267[2]))
	{
		if (!unk_0x4FAFF4BCB7633475(uLocal_267[2]))
		{
			unk_0x44FB298D6382876D(uLocal_267[2], 1);
		}
		unk_0xF09E30AF1B8FB379(&(uLocal_267[2]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[0]))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_268[0]))
		{
			unk_0x44FB298D6382876D(iLocal_268[0], 1);
		}
		unk_0xF09E30AF1B8FB379(&(iLocal_268[0]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[1]))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_268[1]))
		{
			unk_0x44FB298D6382876D(iLocal_268[1], 1);
		}
		unk_0xF09E30AF1B8FB379(&(iLocal_268[1]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[2]))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_268[2]))
		{
			unk_0x44FB298D6382876D(iLocal_268[2], 1);
		}
		unk_0xF09E30AF1B8FB379(&(iLocal_268[2]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[3]))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_268[3]))
		{
			unk_0x44FB298D6382876D(iLocal_268[3], 1);
		}
		unk_0xF09E30AF1B8FB379(&(iLocal_268[3]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[4]))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_268[4]))
		{
			unk_0x44FB298D6382876D(iLocal_268[4], 1);
		}
		unk_0xF09E30AF1B8FB379(&(iLocal_268[4]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[5]))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_268[5]))
		{
			unk_0x44FB298D6382876D(iLocal_268[5], 1);
		}
		unk_0xF09E30AF1B8FB379(&(iLocal_268[5]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[6]))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_268[6]))
		{
			unk_0x44FB298D6382876D(iLocal_268[6], 1);
		}
		unk_0xF09E30AF1B8FB379(&(iLocal_268[6]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[7]))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_268[7]))
		{
			unk_0x44FB298D6382876D(iLocal_268[7], 1);
		}
		unk_0xF09E30AF1B8FB379(&(iLocal_268[7]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[8]))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_268[8]))
		{
			unk_0x44FB298D6382876D(iLocal_268[8], 1);
		}
		unk_0xF09E30AF1B8FB379(&(iLocal_268[8]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[9]))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_268[9]))
		{
			unk_0x44FB298D6382876D(iLocal_268[9], 1);
		}
		unk_0xF09E30AF1B8FB379(&(iLocal_268[9]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_268[10]))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_268[10]))
		{
			unk_0x44FB298D6382876D(iLocal_268[10], 1);
		}
		unk_0xF09E30AF1B8FB379(&(iLocal_268[10]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_275[0]))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_275[0]))
		{
			unk_0x44FB298D6382876D(iLocal_275[0], 1);
		}
		unk_0xF09E30AF1B8FB379(&(iLocal_275[0]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_276[0]))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_276[0]))
		{
			unk_0x44FB298D6382876D(iLocal_276[0], 1);
		}
		unk_0xF09E30AF1B8FB379(&(iLocal_276[0]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_276[1]))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_276[1]))
		{
			unk_0x44FB298D6382876D(iLocal_276[1], 1);
		}
		unk_0xF09E30AF1B8FB379(&(iLocal_276[1]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_278))
	{
		unk_0x68298CA6191CDFDB(&iLocal_278);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_279))
	{
		if (unk_0x7C9905528EE2C3AB(iLocal_279, 0))
		{
			unk_0x68298CA6191CDFDB(&iLocal_279);
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_282))
	{
		unk_0x68298CA6191CDFDB(&iLocal_282);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_283))
	{
		unk_0x68298CA6191CDFDB(&iLocal_283);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_284))
	{
		unk_0x68298CA6191CDFDB(&iLocal_284);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_285))
	{
		unk_0x68298CA6191CDFDB(&iLocal_285);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_287))
	{
		unk_0x68298CA6191CDFDB(&iLocal_287);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_289))
	{
		if (unk_0x7C9905528EE2C3AB(iLocal_289, 0))
		{
			unk_0x68298CA6191CDFDB(&iLocal_289);
		}
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_293[0]))
	{
		unk_0x68298CA6191CDFDB(&(iLocal_293[0]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_293[1]))
	{
		unk_0x68298CA6191CDFDB(&(iLocal_293[1]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_280[0]))
	{
		unk_0x68298CA6191CDFDB(&(iLocal_280[0]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_280[1]))
	{
		unk_0x68298CA6191CDFDB(&(iLocal_280[1]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_293[0]))
	{
		unk_0x68298CA6191CDFDB(&(iLocal_293[0]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_293[1]))
	{
		unk_0x68298CA6191CDFDB(&(iLocal_293[1]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_286[0]))
	{
		unk_0x68298CA6191CDFDB(&(iLocal_286[0]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_286[1]))
	{
		unk_0x68298CA6191CDFDB(&(iLocal_286[1]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_288[0]))
	{
		unk_0x68298CA6191CDFDB(&(iLocal_288[0]));
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_281))
	{
		unk_0x68298CA6191CDFDB(&iLocal_281);
	}
	unk_0x2C7FEB8222C29D99("TRV4_START");
	unk_0x2C7FEB8222C29D99("TRV4_GAMEPLAY_START");
	unk_0x2C7FEB8222C29D99("TRV4_START_CS_SKIP");
	unk_0x2C7FEB8222C29D99("TRV4_START_RT");
	unk_0x2C7FEB8222C29D99("TRV4_FOOT_CHASE_RT");
	unk_0x2C7FEB8222C29D99("TRV4_EVADE_RT");
	unk_0x2C7FEB8222C29D99("TRV4_CAR_ENTERED");
	unk_0x2C7FEB8222C29D99("TRV4_AIRPORT_ENTERED");
	unk_0x2C7FEB8222C29D99("TRV4_CHASE");
	unk_0x2C7FEB8222C29D99("TRV4_JET_ENTERED");
	if (unk_0x116053132936EA1F(iLocal_262))
	{
		unk_0x19B3B7AC049E8354(iLocal_262, 0);
	}
	if (unk_0x9CFFB7009B578840(uLocal_672))
	{
		unk_0x5301FEC6BB8F21DF(uLocal_672, 0);
	}
	unk_0xC3C7C9791CD79114();
	unk_0xD314260005F064BF(&uLocal_305);
	unk_0x633E3833FB96BCCB("digitalOverlay");
	unk_0xD1B0AF388B711EBC(-617f, -2274f, 0f, -406.01f, -2044f, 15f, 1, 1);
	unk_0xD1B0AF388B711EBC(-482f, -2118f, 6f, -1072f, -2724f, 17f, 1, 1);
	if (unk_0xA08EEC7306CF6198("Trev4_5"))
	{
		unk_0x94302E8F619FAF3E("Trev4_5", 0, 0.5f, 1f);
	}
	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), true, 0);
	unk_0xE6AC149D1121535D(1f);
	unk_0x37B894853929BF1A(1);
	unk_0x747786364137DC63(1);
	unk_0x268BE77F77533D03("missheist_agency3aig_lift_waitped_a");
	func_308(0);
	unk_0x0A0A06C514052E80(1);
	if (func_19(2))
	{
		func_18(2, 0);
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_435()
{
	int iVar0;
	
	Global_63391 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_63392[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_436()
{
	int iVar0;
	
	if (unk_0xA6E4F7A73ABC4A76("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_113648.f_9087 || func_447(0))
	{
		if (!func_437())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_255(iVar0))
				{
					return;
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_91433[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_260();
		}
	}
}

int func_437()
{
	if (((Global_100681 == 13 || Global_100681 == 10) || Global_100681 == 11) || Global_100681 == 12)
	{
		return 0;
	}
	return 1;
}

void func_438(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (unk_0x23B29877D0BE9547(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_439(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_100718 > 0)
	{
		Global_107196.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_104212.f_21[iParam1] = iVar0;
	}
}

int func_439(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_100718 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_107196.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_107196.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_107196.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_107196.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_104212.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_104212.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_104212.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_104212.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_440(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_444(iParam0, &iVar1);
	if (!unk_0x1B79E937E91F40C3("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0xE849FB3A0C73A0D9(iVar1))
			{
				return;
			}
			if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == iVar1)
			{
				func_443(iParam0, 1);
				return;
			}
			iVar2 = unk_0x92EA98681B1610F2();
			if (iVar2 != 0 && iVar2 == iVar1)
			{
				func_443(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0xE849FB3A0C73A0D9(iVar1))
			{
				return;
			}
			if (func_441(iParam0))
			{
				func_443(iParam0, 0);
			}
		}
		unk_0xD3EBDA853981B983(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_441(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_442(iParam0) };
	if (Var0.f_1 != -1 && BitTest(Global_38606[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_442(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = (iParam0 % 32);
	Var0.f_1 = (iParam0 / 32);
	if (Var0.f_1 >= 8)
	{
		Var0.f_0 = -1;
		Var0.f_1 = -1;
	}
	return Var0;
}

void func_443(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_442(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_38606[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_38606[Var0.f_1]), Var0.f_0);
	}
}

var func_444(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_445(iParam0) };
	*iParam1 = unk_0x0556019E7EE8EC9A(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_445(int iParam0)
{
	struct<5> Var0;
	struct<3> Var1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var1 = { func_446(1, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var1 = { func_446(2, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var1 = { func_446(3, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var1 = { func_446(4, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var1 = { func_446(5, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var1 = { func_446(6, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var1 = { func_446(7, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1312228[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var1 = { func_446(35, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var1 = { func_446(36, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var1 = { func_446(37, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var1 = { func_446(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var1 = { func_446(39, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var1 = { func_446(40, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var1 = { func_446(41, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var1 = { func_446(42, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var1 = { func_446(43, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			Var1 = { func_446(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var1 = { func_446(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var1 = { func_446(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var1 = { func_446(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var1 = { func_446(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var1 = { func_446(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var1 = { func_446(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var1 = { func_446(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var1 = { func_446(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var1 = { func_446(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var1 = { func_446(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var1 = { func_446(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var1 = { func_446(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var1 = { func_446(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var1 = { func_446(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var1 = { func_446(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var1 = { func_446(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var1 = { func_446(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var1 = { func_446(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var1 = { func_446(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var1 = { func_446(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var1 = { func_446(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var1 = { func_446(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var1 = { func_446(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var1 = { func_446(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var1 = { func_446(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var1 = { func_446(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var1 = { func_446(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var1 = { func_446(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var1 = { func_446(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var1 = { func_446(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var1 = { func_446(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var1 = { func_446(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var1 = { func_446(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var1 = { func_446(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var1 = { func_446(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var1 = { func_446(91, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var1 = { func_446(97, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var1 = { func_446(103, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var1 = { func_446(104, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var1 = { func_446(105, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var1 = { func_446(106, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var1 = { func_446(107, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var1 = { func_446(108, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var1 = { func_446(109, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var1 = { func_446(110, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var1 = { func_446(111, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var1 = { func_446(112, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var1 = { func_446(113, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var1 = { func_446(114, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var1 = { func_446(103, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var1 = { func_446(106, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var1 = { func_446(109, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var1 = { func_446(112, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
		case 212:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 195:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 223:
			Var0 = { 2920f, 4470f, -100f };
			Var0.f_3 = "sf_dlc_warehouse_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 197:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 204:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 205:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 206:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 207:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 208:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 209:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 210:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 211:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 213:
			Var0 = { 1103.562f, -3000f, -40f };
			Var0.f_3 = "gr_grdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 214:
			Var0 = { 1210f, 1857f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 215:
			Var0 = { 1569f, -2130f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 216:
			Var0 = { 839f, 2176f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 217:
			Var0 = { 982f, -143f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 218:
			Var0 = { -2000f, 1113.4f, 25.7f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 219:
			Var0 = { -1350f, 160f, -99.2f };
			Var0.f_3 = "tr_tuner_mod_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 220:
			Var0 = { 1.1f, -705.6f, 16.1f };
			Var0.f_3 = "finbank";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 221:
			Var0 = { -1010f, -70f, -99.4f };
			Var0.f_3 = "sf_dlc_studio_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 222:
			Var0 = { 1550f, 250f, -50f };
			Var0.f_3 = "h4_dlc_int_02_h4";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 224:
			Var0 = { -935.7f, -2992.2f, 13.9f };
			Var0.f_3 = "v_hanger";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 225:
			Var0 = { 730f, -2990f, -39f };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 226:
			Var0 = { 152.3f, -1004.4f, -97.8f };
			Var0.f_3 = "v_motel_mp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 227:
			Var0 = { 170f, 5190f, 10f };
			Var0.f_3 = "xs_x18_int_mod2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 228:
			Var0 = { 850f, -3000f, -50f };
			Var0.f_3 = "reh_dlc_int_04_sum2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 229:
			Var0 = { 495f, -2560f, -50f };
			Var0.f_3 = "xm3_DLC_INT_04_xm3";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 230:
			Var0 = { 570f, -415.1f, -69.6f };
			Var0.f_3 = "xm3_DLC_INT_03_xm3";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 231:
			Var0 = { 984.4f, -95.4f, 76.8f };
			Var0.f_3 = "bkr_biker_dlc_int_03";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_446(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_447(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}
