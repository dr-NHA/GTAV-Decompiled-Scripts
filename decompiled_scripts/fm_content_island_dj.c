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
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = -1;
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
	float fLocal_121 = 0f;
	int iLocal_122[5] = { 0, 0, 0, 0, 0 };
	float fLocal_123 = 0f;
	float fLocal_124 = 0f;
	float fLocal_125 = 0f;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 8;
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
	var uLocal_153 = 0;
	var uLocal_154 = 8;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	float fLocal_188 = 0f;
	float fLocal_189 = 0f;
	float fLocal_190 = 0f;
	float fLocal_191 = 0f;
	var uLocal_192 = 0;
	int iLocal_193[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	struct<1022> Local_197 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, -1, 12, 1065353216, 0, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 0, 12, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 2, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1, 1, 0, 0, 0, 5, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, -1, 0, 7, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 3, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, -1, 1132068864, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 1, 0, 1, 0, 0, 5, 1, -1, 12, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 5, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 6, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, -1, -1, 0, 0, 0, -1082130432, -1082130432, -1, -1, 12, 1065353216, 0, 0, 0, 0, 0, 1, 0, -1, -1, 0, 0, 0, -1082130432, -1082130432, -1, -1, 12, 1065353216, 0, 0, 0, 0, 0, 0, 1, -1, 1, -1, 0, 0, 0, 0, 0, 0, 2000, 1, 1, 0, 0, 5, 1, -1, 1, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2 } ;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = -1;
	var uLocal_203 = -1;
	var uLocal_204 = 1;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = -1;
	var uLocal_211 = -1;
	var uLocal_212 = 1;
	var uLocal_213 = 0;
	struct<644> Local_214 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<20> Local_215 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<20> Local_216[8];
	struct<21> Local_217[10];
	struct<233> Local_218 = { 12, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4 } ;
	var uLocal_219 = 0;
	var uLocal_220 = 6;
	var uLocal_221 = -1;
	var uLocal_222 = 3;
	var uLocal_223 = -1;
	var uLocal_224 = 0;
	var uLocal_225 = -1;
	var uLocal_226 = 0;
	var uLocal_227 = -1;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = -1;
	var uLocal_235 = 3;
	var uLocal_236 = -1;
	var uLocal_237 = 0;
	var uLocal_238 = -1;
	var uLocal_239 = 0;
	var uLocal_240 = -1;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = -1;
	var uLocal_248 = 3;
	var uLocal_249 = -1;
	var uLocal_250 = 0;
	var uLocal_251 = -1;
	var uLocal_252 = 0;
	var uLocal_253 = -1;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = -1;
	var uLocal_261 = 3;
	var uLocal_262 = -1;
	var uLocal_263 = 0;
	var uLocal_264 = -1;
	var uLocal_265 = 0;
	var uLocal_266 = -1;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = -1;
	var uLocal_274 = 3;
	var uLocal_275 = -1;
	var uLocal_276 = 0;
	var uLocal_277 = -1;
	var uLocal_278 = 0;
	var uLocal_279 = -1;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = -1;
	var uLocal_287 = 3;
	var uLocal_288 = -1;
	var uLocal_289 = 0;
	var uLocal_290 = -1;
	var uLocal_291 = 0;
	var uLocal_292 = -1;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 6;
	var uLocal_301 = -1;
	var uLocal_302 = 3;
	var uLocal_303 = -1;
	var uLocal_304 = 0;
	var uLocal_305 = -1;
	var uLocal_306 = 0;
	var uLocal_307 = -1;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = -1;
	var uLocal_315 = 3;
	var uLocal_316 = -1;
	var uLocal_317 = 0;
	var uLocal_318 = -1;
	var uLocal_319 = 0;
	var uLocal_320 = -1;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = -1;
	var uLocal_328 = 3;
	var uLocal_329 = -1;
	var uLocal_330 = 0;
	var uLocal_331 = -1;
	var uLocal_332 = 0;
	var uLocal_333 = -1;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = -1;
	var uLocal_341 = 3;
	var uLocal_342 = -1;
	var uLocal_343 = 0;
	var uLocal_344 = -1;
	var uLocal_345 = 0;
	var uLocal_346 = -1;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = -1;
	var uLocal_354 = 3;
	var uLocal_355 = -1;
	var uLocal_356 = 0;
	var uLocal_357 = -1;
	var uLocal_358 = 0;
	var uLocal_359 = -1;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = -1;
	var uLocal_367 = 3;
	var uLocal_368 = -1;
	var uLocal_369 = 0;
	var uLocal_370 = -1;
	var uLocal_371 = 0;
	var uLocal_372 = -1;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 6;
	var uLocal_381 = -1;
	var uLocal_382 = 3;
	var uLocal_383 = -1;
	var uLocal_384 = 0;
	var uLocal_385 = -1;
	var uLocal_386 = 0;
	var uLocal_387 = -1;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = -1;
	var uLocal_395 = 3;
	var uLocal_396 = -1;
	var uLocal_397 = 0;
	var uLocal_398 = -1;
	var uLocal_399 = 0;
	var uLocal_400 = -1;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = -1;
	var uLocal_408 = 3;
	var uLocal_409 = -1;
	var uLocal_410 = 0;
	var uLocal_411 = -1;
	var uLocal_412 = 0;
	var uLocal_413 = -1;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = -1;
	var uLocal_421 = 3;
	var uLocal_422 = -1;
	var uLocal_423 = 0;
	var uLocal_424 = -1;
	var uLocal_425 = 0;
	var uLocal_426 = -1;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = -1;
	var uLocal_434 = 3;
	var uLocal_435 = -1;
	var uLocal_436 = 0;
	var uLocal_437 = -1;
	var uLocal_438 = 0;
	var uLocal_439 = -1;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = -1;
	var uLocal_447 = 3;
	var uLocal_448 = -1;
	var uLocal_449 = 0;
	var uLocal_450 = -1;
	var uLocal_451 = 0;
	var uLocal_452 = -1;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 6;
	var uLocal_461 = -1;
	var uLocal_462 = 3;
	var uLocal_463 = -1;
	var uLocal_464 = 0;
	var uLocal_465 = -1;
	var uLocal_466 = 0;
	var uLocal_467 = -1;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = -1;
	var uLocal_475 = 3;
	var uLocal_476 = -1;
	var uLocal_477 = 0;
	var uLocal_478 = -1;
	var uLocal_479 = 0;
	var uLocal_480 = -1;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = -1;
	var uLocal_488 = 3;
	var uLocal_489 = -1;
	var uLocal_490 = 0;
	var uLocal_491 = -1;
	var uLocal_492 = 0;
	var uLocal_493 = -1;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = -1;
	var uLocal_501 = 3;
	var uLocal_502 = -1;
	var uLocal_503 = 0;
	var uLocal_504 = -1;
	var uLocal_505 = 0;
	var uLocal_506 = -1;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = -1;
	var uLocal_514 = 3;
	var uLocal_515 = -1;
	var uLocal_516 = 0;
	var uLocal_517 = -1;
	var uLocal_518 = 0;
	var uLocal_519 = -1;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = -1;
	var uLocal_527 = 3;
	var uLocal_528 = -1;
	var uLocal_529 = 0;
	var uLocal_530 = -1;
	var uLocal_531 = 0;
	var uLocal_532 = -1;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 1203982208;
	var uLocal_540 = -1;
	var uLocal_541 = 5;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = -1;
	struct<7> Local_548 = { 4, 0, 1203982208, 1203982208, 1203982208, 0, 0 } ;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 1203982208;
	var uLocal_552 = 1203982208;
	var uLocal_553 = 1203982208;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 1203982208;
	var uLocal_559 = 1203982208;
	var uLocal_560 = 1203982208;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 1203982208;
	var uLocal_566 = 1203982208;
	var uLocal_567 = 1203982208;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = -1;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<2> Local_580[2];
	struct<3> Local_581 = { 0, 0, 0 } ;
	var uLocal_582 = 0;
	struct<6> Local_583 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	struct<8> Local_586 = { 0, -1, -1, 0, 0, 0, 0, 0 } ;
	int iLocal_587 = 0;
	struct<2> Local_588 = { -1, -1 } ;
	var uLocal_589[5] = { 0, 0, 0, 0, 0 };
	struct<12> Local_590 = { 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, -1082130432, 0 } ;
	int iLocal_591[4] = { -1, -1, -1, -1 };
	struct<3> Local_592 = { -1, -1082130432, 2 } ;
	var uLocal_593 = -1082130432;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = -1082130432;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 1;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	struct<174> Local_603 = { 1, 0, -1, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_604 = 1;
	var uLocal_605 = 0;
	var uLocal_606[6] = { -1, -1, -1, -1, -1, -1 };
	struct<2> Local_607[12];
	struct<4> Local_608[1];
	struct<3> Local_609 = { 1, 0, 1 } ;
	var uLocal_610 = 0;
	int iLocal_611 = -1;
	struct<8> Local_612 = { -1, -1, -1, 0, 2, 0, 0, 1 } ;
	var uLocal_613 = 0;
	bool bLocal_614 = 0;
	bool bLocal_615 = 0;
	bool bLocal_616 = 0;
	bool bLocal_617 = 0;
	bool bLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	struct<3> Local_623 = { 0, 0, 0 } ;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	bool bLocal_626 = 0;
	bool bLocal_627 = 0;
	struct<2> Local_628 = { -1, -1 } ;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	var uLocal_631 = 3;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	int iLocal_635 = 0;
	int iLocal_636 = 0;
	var uLocal_637 = 0;
	int iLocal_638 = 0;
	int iLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 1;
	var uLocal_643 = 0;
	int iLocal_644[2] = { 0, 0 };
	int iLocal_645 = 0;
	float fLocal_646 = 0f;
	float fLocal_647 = 0f;
	float fLocal_648 = 0f;
	float fLocal_649 = 0f;
	float fLocal_650 = 0f;
	int iLocal_651 = 0;
	int iLocal_652[4] = { 0, 0, 0, 0 };
	var uLocal_653[4] = { 0, 0, 0, 0 };
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	struct<16> Local_661 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = -1;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 1000;
	var uLocal_672 = 1000;
	var uLocal_673 = 0;
	struct<578> Local_674 = { 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 7, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 2, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 7, -1, -1, -1082130432, 0, 0, 5, 0, 0, 0, 0, 0, -1, -1, -1000, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 } ;
	var uLocal_675 = 4;
	var uLocal_676 = 0;
	var uLocal_677 = -1;
	var uLocal_678 = -1;
	var uLocal_679 = -1;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = -1;
	var uLocal_683 = -1;
	var uLocal_684 = -1;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = -1;
	var uLocal_688 = -1;
	var uLocal_689 = -1;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = -1;
	var uLocal_693 = -1;
	var uLocal_694 = -1;
	var uLocal_695 = 0;
	struct<118> Local_696[8];
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	struct<21> Local_724 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_121 = 0f;
	fLocal_123 = 0f;
	fLocal_124 = 0f;
	fLocal_125 = 0f;
	fLocal_188 = 0.62f;
	fLocal_189 = 0.51f;
	fLocal_190 = 0.55f;
	fLocal_191 = 25f;
	iLocal_635 = -1;
	iLocal_636 = -1;
	iLocal_639 = -1;
	fLocal_646 = -1f;
	fLocal_647 = 99999f;
	fLocal_648 = 99999f;
	fLocal_649 = 99999f;
	fLocal_650 = 999999f;
	StringCopy(&Local_661, unk_0x1AF90EB93E0012D6(), 64);
	Local_661 = { Local_661 };
	Local_215 = { Local_215 };
	func_4124(0);
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (bLocal_614)
		{
			if (!func_4073(ScriptParam_724))
			{
				func_3989(0, 1);
				func_3872();
			}
		}
		else
		{
			func_3872();
		}
	}
	else
	{
		func_3989(0, 1);
		func_3872();
	}
	func_3871(&(Local_674.f_552));
	func_3753();
	while (true)
	{
		func_3752();
		if (func_3747())
		{
			func_3989(0, 1);
			func_3872();
		}
		if (func_3741())
		{
			func_3989(0, 1);
			func_3872();
		}
		if (Local_214.f_108.f_4 != 0)
		{
			Call_Loc(Local_214.f_108.f_4);
			if (StackVal)
			{
				func_3989(0, 1);
				func_3872();
			}
		}
		func_4124(1);
		switch (func_3740())
		{
			case 0:
				switch (func_3739())
				{
					case 1:
						if (func_3417())
						{
							func_3416(1);
						}
						break;
					
					case 2:
					case 3:
						func_3416(3);
						break;
				}
				break;
			
			case 1:
				func_3367();
				func_2464();
				func_2463();
				if (func_3739() != 1)
				{
					func_2460();
					if (Local_214.f_108.f_5 != 0)
					{
						Call_Loc(Local_214.f_108.f_5);
					}
					func_3416(func_3739());
				}
				break;
			
			case 2:
				func_3367();
				func_1738();
				func_1252();
				if (func_3739() > 2)
				{
					func_3989(func_1251(11), 0);
					func_3416(3);
				}
				break;
			
			case 3:
				func_3872();
				break;
		}
		if (bLocal_616)
		{
			switch (func_3739())
			{
				case 0:
					if (func_529())
					{
						func_528(1);
					}
					break;
				
				case 1:
					if (func_527() == 0)
					{
						func_6();
					}
					else
					{
						func_528(2);
					}
					break;
				
				case 2:
					if (func_2())
					{
						func_528(3);
					}
					break;
				
				case 3:
					func_3872();
					break;
				}
		}
		func_1();
	}
}

void func_1()
{
	Local_218.f_231++;
	if (Local_218.f_231 >= Local_197.f_77)
	{
		Local_218.f_231 = 0;
	}
}

int func_2()
{
	if (Local_214.f_3.f_2 != 0)
	{
		Call_Loc(Local_214.f_3.f_2);
	}
	if (!func_5())
	{
		return 0;
	}
	if (!func_3(0))
	{
		return 0;
	}
	return 1;
}

bool func_3(int iParam0)
{
	return func_4(&(Local_674.f_503), iParam0);
}

var func_4(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

bool func_5()
{
	return func_3(21);
}

void func_6()
{
	func_526();
	if (Local_214.f_3 != 0)
	{
		Call_Loc(Local_214.f_3);
	}
	func_475();
	func_465();
	func_176();
	func_153();
	func_44();
	func_31();
	func_24();
	func_23();
	func_20();
	func_12();
	func_7();
}

void func_7()
{
	if (!func_11())
	{
		return;
	}
	if (!func_9(func_10(), 0, 1) || !unk_0xCCD470854FB0E643(func_10()))
	{
		func_8(2);
	}
}

void func_8(int iParam0)
{
	if (!bLocal_616)
	{
		return;
	}
	Local_674.f_495 = iParam0;
}

int func_9(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (unk_0x762604C40829DB72(bParam0))
		{
			if (bParam1)
			{
				if (!unk_0x75EAB09F5E974116(bParam0))
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

bool func_10()
{
	return Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_35;
}

int func_11()
{
	return 1;
}

void func_12()
{
	if (func_19() == -1)
	{
		return;
	}
	if (Local_214.f_88 == 0)
	{
		return;
	}
	Call_Loc(Local_214.f_88);
	if (!StackVal)
	{
		return;
	}
	if (!func_3(5) && Local_214.f_88.f_1 != 0)
	{
		Call_Loc(Local_214.f_88.f_1);
		if (StackVal)
		{
			func_18(&(Local_674.f_522), 0, 0);
			func_16(5);
		}
	}
	if (!func_15(&(Local_674.f_522)))
	{
		func_14(&(Local_674.f_522), 0, 0);
	}
	else if (func_15(&(Local_674.f_522)))
	{
		if (func_13(&(Local_674.f_522), func_19(), 0))
		{
			if (Local_214.f_88.f_3 != 0)
			{
				Call_Loc(Local_214.f_88.f_3);
			}
			func_8(1);
		}
	}
}

int func_13(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_14(uParam0, bParam2, 0);
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

void func_14(var uParam0, bool bParam1, bool bParam2)
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

bool func_15(var uParam0)
{
	return uParam0->f_1;
}

void func_16(int iParam0)
{
	if (func_17(&(Local_674.f_503), iParam0))
	{
	}
}

int func_17(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	bVar2 = (iVar0 % 32);
	if (!BitTest((*uParam0)[iVar1], bVar2))
	{
		unk_0x0B0C9A0F9AAEB7F0(uParam0[iVar1], bVar2);
		return 1;
	}
	return 0;
}

void func_18(var uParam0, bool bParam1, bool bParam2)
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

int func_19()
{
	if (Local_197.f_604 != -1)
	{
		return Local_197.f_604 * 60 * 1000;
	}
	return Local_197.f_604;
}

void func_20()
{
	int iVar0;
	
	if (func_22() == -1)
	{
		func_21(0);
		Call_Loc(Local_216[func_22() /*20*/].f_17);
		return;
	}
	while ((func_22() < iLocal_629 && iVar0 < Local_216[func_22() /*20*/].f_19) && Local_216[func_22() /*20*/].f_1[iVar0 /*3*/] != -1)
	{
		Call_Loc(Local_216[func_22() /*20*/].f_1[iVar0 /*3*/].f_1);
		if (StackVal)
		{
			if (func_22() != Local_216[func_22() /*20*/].f_1[iVar0 /*3*/])
			{
				Call_Loc(Local_216[func_22() /*20*/].f_18);
				Local_674.f_501 = func_22();
				func_21(Local_216[func_22() /*20*/].f_1[iVar0 /*3*/]);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_674.f_502), func_22());
				Call_Loc(Local_216[func_22() /*20*/].f_17);
			}
			return;
		}
		iVar0++;
	}
}

void func_21(int iParam0)
{
	if (!bLocal_616)
	{
		return;
	}
	Local_674.f_500 = iParam0;
}

int func_22()
{
	return Local_674.f_500;
}

void func_23()
{
}

void func_24()
{
	if (!func_30())
	{
		return;
	}
	if (!func_3(2))
	{
		if (func_25(&(Local_674.f_431), &(Local_674.f_431.f_3)))
		{
			func_16(2);
		}
	}
}

int func_25(var uParam0, var uParam1)
{
	int iVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (func_29(iVar2))
		{
			iVar0[iVar1] = iVar2;
			iVar1++;
		}
		iVar2++;
	}
	if (iVar1 < func_28())
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < func_28())
	{
		if (func_27())
		{
			if (iVar2 > 0)
			{
				(*uParam0)[iVar2] = (*uParam0)[(iVar2 - 1)];
			}
			else
			{
				iVar3 = unk_0xC5935DFB3F39785A(0, iVar1);
				(*uParam0)[iVar2] = iVar0[iVar3];
				if (iVar0[iVar3] < 32)
				{
					unk_0x0B0C9A0F9AAEB7F0(uParam1, iVar0[iVar3]);
				}
				if (iVar2 < (func_28() - 1))
				{
					func_26(&(iVar0[iVar3]), &(iVar0[(iVar1 - 1)]));
					iVar1 = (iVar1 - 1);
				}
			}
			iVar2++;
			return 1;
		}

void func_26(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = *uParam0;
	*uParam0 = *uParam1;
	*uParam1 = uVar0;
}

int func_27()
{
	return 0;
}

int func_28()
{
	return Local_197.f_19;
}

int func_29(int iParam0)
{
	return 0;
}

int func_30()
{
	return 0;
}

void func_31()
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	
	Stack.Push(Local_214.f_604.f_23 != 0);
	Call_Loc(Local_214.f_604.f_23);
	if (StackVal && !StackVal)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_197.f_539)
	{
		if (!func_43(iVar0, 0))
		{
			Stack.Push(iVar0);
			Call_Loc(Local_214.f_604.f_24);
			if (StackVal)
			{
				if (func_36(iVar0))
				{
					fVar1 = func_35(iVar0);
					unk_0x5C96CEA06531AB03(unk_0xAB3646235DE50E93(Local_674.f_478[iVar0 /*3*/]), fVar1);
					Var2 = { func_34(iVar0) };
					if (!func_33(Var2))
					{
						unk_0xCF39804E8C88080E(unk_0xAB3646235DE50E93(Local_674.f_478[iVar0 /*3*/]), Var2, 0, 1);
					}
					func_32(iVar0, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_32(int iParam0, bool bParam1)
{
	if (!func_43(iParam0, bParam1))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Local_674.f_478[iParam0 /*3*/].f_1), bParam1);
	}
}

int func_33(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_34(int iParam0)
{
	if (Local_214.f_604.f_27 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_604.f_27);
		return StackVal, StackVal, StackVal;
	}
	return Local_197.f_539.f_1[iParam0 /*12*/].f_5;
}

var func_35(int iParam0)
{
	if (Local_214.f_604.f_26 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_604.f_26);
		return StackVal;
	}
	return Local_197.f_539.f_1[iParam0 /*12*/].f_4;
}

bool func_36(int iParam0)
{
	if (func_42(Local_197.f_539.f_1[iParam0 /*12*/]))
	{
		if (!unk_0x2FC2FDC413532977(Local_674.f_478[iParam0 /*3*/]))
		{
			func_37(iParam0);
			return 0;
		}
	}
	return unk_0x2FC2FDC413532977(Local_674.f_478[iParam0 /*3*/]);
}

int func_37(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_41(iParam0) };
	if (!unk_0x2FC2FDC413532977(Local_674.f_478[iParam0 /*3*/]))
	{
		unk_0xEC9DAA34BBB4658C(Local_197.f_539.f_1[iParam0 /*12*/]);
		if (unk_0x6252BC0DD8A320DB(Local_197.f_539.f_1[iParam0 /*12*/]))
		{
			if (unk_0xF95A1422CB355630(1))
			{
				Local_674.f_478[iParam0 /*3*/] = unk_0x16FE0AE33E462D17(unk_0x29F49A5884D2FD3C(func_40(iParam0), Var0, false, Local_197.f_539.f_1[iParam0 /*12*/]));
				unk_0x3C1752E361ED8FC9(Local_674.f_478[iParam0 /*3*/], 1);
				unk_0x32C336953C18A3CE(unk_0xF5014688C9788D5F(Local_674.f_478[iParam0 /*3*/]), 1);
				unk_0x935364B4448CD584(unk_0xAB3646235DE50E93(Local_674.f_478[iParam0 /*3*/]), true);
				if (func_39(iParam0))
				{
					unk_0x5D7CD709B34C90F0(unk_0xF5014688C9788D5F(Local_674.f_478[iParam0 /*3*/]), false);
				}
				if (!func_38(iParam0, 1))
				{
					unk_0x4B46E3AF872076CE(unk_0xAB3646235DE50E93(Local_674.f_478[iParam0 /*3*/]), 1);
					unk_0x11C125313CB8ADA2(unk_0xAB3646235DE50E93(Local_674.f_478[iParam0 /*3*/]), 0);
					unk_0x79B52EC5A9AB6229(unk_0xAB3646235DE50E93(Local_674.f_478[iParam0 /*3*/]));
					unk_0x788F35D395511DFE(unk_0xF5014688C9788D5F(Local_674.f_478[iParam0 /*3*/]), 1, 1);
					unk_0xC7D381E526A969D3(unk_0xF5014688C9788D5F(Local_674.f_478[iParam0 /*3*/]), 1);
				}
				if (!func_38(iParam0, 0))
				{
					unk_0x711CB952E5BE087E(unk_0xAB3646235DE50E93(Local_674.f_478[iParam0 /*3*/]));
				}
				if (Local_214.f_604.f_29 != 0)
				{
					Stack.Push(iParam0);
					Stack.Push(unk_0xF5014688C9788D5F(Local_674.f_478[iParam0 /*3*/]));
					Call_Loc(Local_214.f_604.f_29);
				}
			}
		}
	}
	if (unk_0x2FC2FDC413532977(Local_674.f_478[iParam0 /*3*/]))
	{
		return 1;
	}
	return 0;
}

bool func_38(int iParam0, int iParam1)
{
	return func_4(&(Local_197.f_539.f_1[iParam0 /*12*/].f_10), iParam1);
}

int func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = Local_197.f_539.f_1[iParam0 /*12*/];
	if (iVar0 == joaat("h4_prop_h4_powdercleaner_01a"))
	{
		return 0;
	}
	return 1;
}

int func_40(int iParam0)
{
	if (Local_214.f_604.f_28 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_604.f_28);
		return StackVal;
	}
	return joaat("pickup_portable_crate_fixed_incar");
}

Vector3 func_41(int iParam0)
{
	int iVar0;
	
	if (Local_214.f_604.f_25 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_604.f_25);
		return StackVal, StackVal, StackVal;
	}
	iVar0 = Local_197.f_539.f_1[iParam0 /*12*/].f_8;
	if (iVar0 != -1)
	{
		switch (Local_197.f_539.f_1[iParam0 /*12*/].f_9)
		{
			case 1:
				return unk_0xD1A6A821F5AC81DB(unk_0xF5014688C9788D5F(Local_674.f_52[iVar0 /*25*/]), 1);
			
			case 2:
				return unk_0xD1A6A821F5AC81DB(unk_0xF5014688C9788D5F(Local_674.f_353[iVar0 /*8*/]), 1);
			
			case 3:
				return unk_0xD1A6A821F5AC81DB(unk_0xF5014688C9788D5F(Local_674.f_394[iVar0 /*5*/]), 1);
			}
		
		default:
	}
	return Local_197.f_539.f_1[iParam0 /*12*/].f_1;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xEC9DAA34BBB4658C(iParam0);
	return unk_0x6252BC0DD8A320DB(iParam0);
}

bool func_43(int iParam0, int iParam1)
{
	return BitTest(Local_674.f_478[iParam0 /*3*/].f_1, iParam1);
}

void func_44()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar6 = 0;
	while (iVar6 < Local_197.f_77)
	{
		func_151(iVar6, &bVar2, &bVar3, &iVar0, &iVar4);
		if (bVar2)
		{
			if (Local_214.f_162.f_194 != 0)
			{
				Stack.Push(iVar6);
				Stack.Push(iVar0);
				Stack.Push(bVar3);
				Call_Loc(Local_214.f_162.f_194);
			}
		}
		if (iVar4 > 2)
		{
			if (iVar4 != 6 && iVar4 != 4)
			{
				if (!bVar2)
				{
					func_150(iVar6, 6);
				}
				else if (bVar3)
				{
					func_150(iVar6, 6);
				}
				else if (func_149(iVar6, iVar0))
				{
					func_150(iVar6, 6);
				}
			}
		}
		switch (iVar4)
		{
			case 0:
				if (func_148(iVar6))
				{
					func_150(iVar6, 2);
				}
				break;
			
			case 1:
				if (!bVar2)
				{
					if (func_147(iVar6))
					{
						func_146(iVar6);
						func_150(iVar6, 2);
					}
				}
				else if (func_145(iVar6))
				{
					func_144(&(Local_674.f_52[iVar6 /*25*/]));
				}
				break;
			
			case 2:
				if (!bVar1)
				{
					if (func_141(iVar6))
					{
						if (func_93(iVar6))
						{
							func_150(iVar6, 3);
							if (func_92(iVar6, 8))
							{
								func_91(iVar6, 31);
							}
							func_90(iVar6);
							bVar1 = true;
						}
					}
				}
				break;
			
			case 3:
				if (bVar2)
				{
					if (func_87(iVar6, iVar0))
					{
						func_150(iVar6, 6);
						break;
					}
					if (!bVar3)
					{
						func_68(iVar6);
						func_63(iVar6, iVar0, 1);
						func_48(iVar6);
						if (func_47(iVar6))
						{
							func_150(iVar6, 4);
						}
					}
				}
				break;
			
			case 6:
				if (!func_92(iVar6, 19))
				{
					iVar5++;
				}
				func_91(iVar6, 8);
				if (bVar2)
				{
					if (func_87(iVar6, iVar0))
					{
						break;
					}
					if (func_47(iVar6))
					{
						func_150(iVar6, 4);
					}
				}
				if (func_46(iVar6))
				{
					if (func_145(iVar6))
					{
						func_144(&(Local_674.f_52[iVar6 /*25*/]));
					}
					func_150(iVar6, 1);
				}
				if (func_527() == 0)
				{
					if (func_45(iVar6, 0))
					{
						func_8(9);
					}
				}
				break;
			
			case 4:
				if (!func_45(iVar6, 14) && !unk_0x870372B586EFB3EE(iVar0))
				{
					func_91(iVar6, 26);
					func_150(iVar6, 5);
				}
				break;
			
			case 5:
				break;
		}
		iVar6++;
	}
	if (Local_674.f_519 != iVar5)
	{
		Local_674.f_519 = iVar5;
	}
	iVar6 = Local_218.f_231;
	func_151(iVar6, &bVar2, &bVar3, &iVar0, &iVar4);
	switch (iVar4)
	{
		case 3:
			if (bVar2)
			{
				if (!bVar3)
				{
					func_63(iVar6, iVar0, 0);
				}
			}
			break;
	}
}

bool func_45(int iParam0, int iParam1)
{
	return func_4(&(Local_197.f_77.f_1[iParam0 /*21*/]), iParam1);
}

int func_46(int iParam0)
{
	if (func_527() != 0)
	{
		return 0;
	}
	if (func_45(iParam0, 10))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_162.f_181);
		return StackVal;
	}
	return 0;
}

int func_47(int iParam0)
{
	if (Local_214.f_162.f_178 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_162.f_178);
		return StackVal;
	}
	return 0;
}

void func_48(int iParam0)
{
	int iVar0;
	
	if (!func_62(iParam0))
	{
		return;
	}
	iVar0 = func_61(iParam0);
	switch (func_60(iParam0))
	{
		case 0:
			if (iVar0 != 6)
			{
				func_59(iParam0, 1);
			}
			break;
		
		case 1:
			if (func_58(iParam0, iVar0))
			{
				func_56(&(Local_674.f_52[iParam0 /*25*/].f_19), unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), func_57(iVar0)));
				func_59(iParam0, 2);
			}
			break;
		
		case 2:
			if (func_55(&(Local_674.f_52[iParam0 /*25*/].f_19), 0, 0) > 0)
			{
				func_54(&(Local_674.f_52[iParam0 /*25*/].f_19));
				if (func_53(iVar0))
				{
					func_50(iParam0, iVar0);
				}
				func_49(iParam0, 6);
				func_59(iParam0, 0);
			}
			break;
	}
}

void func_49(int iParam0, int iParam1)
{
	if (!bLocal_616)
	{
		return;
	}
	Local_674.f_52[iParam0 /*25*/].f_18 = iParam1;
}

void func_50(int iParam0, int iParam1)
{
	func_51(2, iParam0, iParam1);
}

void func_51(int iParam0, int iParam1, int iParam2)
{
	struct<6> Var0;
	int iVar1;
	
	Var0.f_0 = 1477916819;
	Var0.f_1 = bLocal_618;
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = unk_0x8034325BF6D6E41F();
	iVar1 = func_52(1);
	if (iVar1 != 0)
	{
		unk_0x01F0B819E78A18A1(1, &Var0, 6, iVar1);
	}
}

var func_52(int iParam0)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar1)))
		{
			bVar2 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar1));
			if (func_9(bVar2, 0, 0))
			{
				if (bVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_53(int iParam0)
{
	if (Local_214.f_162.f_173.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_162.f_173.f_3);
		return StackVal;
	}
	return 0;
}

void func_54(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_55(var uParam0, bool bParam1, bool bParam2)
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

void func_56(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
	uParam0->f_1 = 1;
}

int func_57(int iParam0)
{
	if (Local_214.f_162.f_173.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_162.f_173.f_1);
		return StackVal;
	}
	return 0;
}

bool func_58(int iParam0, int iParam1)
{
	return func_4(&(Local_607[iParam0 /*2*/]), iParam1);
}

void func_59(int iParam0, int iParam1)
{
	if (!bLocal_616)
	{
		return;
	}
	Local_674.f_52[iParam0 /*25*/].f_17 = iParam1;
}

int func_60(int iParam0)
{
	return Local_674.f_52[iParam0 /*25*/].f_17;
}

int func_61(int iParam0)
{
	return Local_674.f_52[iParam0 /*25*/].f_18;
}

bool func_62(int iParam0)
{
	return Local_197.f_77.f_1[iParam0 /*21*/].f_13 != -1;
}

void func_63(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_67(iParam0);
	if (func_66(iParam0) == -1)
	{
		func_65(iParam0, 0);
		if (Local_218.f_232[iVar0 /*80*/].f_1[func_66(iParam0) /*13*/].f_8 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_218.f_232[iVar0 /*80*/].f_1[func_66(iParam0) /*13*/].f_8);
		}
		return;
	}
	if (func_64(Local_218.f_232[iVar0 /*80*/].f_1[func_66(iParam0) /*13*/]) != iParam2)
	{
		return;
	}
	if (Local_218.f_232[iVar0 /*80*/].f_1[func_66(iParam0) /*13*/].f_11 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_218.f_232[iVar0 /*80*/].f_1[func_66(iParam0) /*13*/].f_11);
	}
	while ((func_66(iParam0) < Local_218.f_232[iVar0 /*80*/] && iVar1 < Local_218.f_232[iVar0 /*80*/].f_1[func_66(iParam0) /*13*/].f_12) && Local_218.f_232[iVar0 /*80*/].f_1[func_66(iParam0) /*13*/].f_1[iVar1 /*2*/] != -1)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_218.f_232[iVar0 /*80*/].f_1[func_66(iParam0) /*13*/].f_1[iVar1 /*2*/].f_1);
		if (StackVal)
		{
			if (Local_218.f_232[iVar0 /*80*/].f_1[func_66(iParam0) /*13*/].f_9 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_218.f_232[iVar0 /*80*/].f_1[func_66(iParam0) /*13*/].f_9);
			}
			func_65(iParam0, Local_218.f_232[iVar0 /*80*/].f_1[func_66(iParam0) /*13*/].f_1[iVar1 /*2*/]);
			if (Local_218.f_232[iVar0 /*80*/].f_1[func_66(iParam0) /*13*/].f_8 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_218.f_232[iVar0 /*80*/].f_1[func_66(iParam0) /*13*/].f_8);
			}
			return;
		}
		iVar1++;
	}
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

void func_65(int iParam0, int iParam1)
{
	if (!bLocal_616)
	{
		return;
	}
	Local_674.f_52[iParam0 /*25*/].f_2 = iParam1;
}

int func_66(int iParam0)
{
	return Local_674.f_52[iParam0 /*25*/].f_2;
}

int func_67(int iParam0)
{
	if (Local_214.f_162.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_162.f_1);
		return StackVal;
	}
	return 0;
}

void func_68(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Local_197.f_77.f_1[iParam0 /*21*/].f_14;
	if (func_86(bVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < Local_218[iParam0 /*19*/].f_16)
	{
		if (Local_218[iParam0 /*19*/].f_10[iVar1] != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_218[iParam0 /*19*/].f_10[iVar1]);
			if (StackVal)
			{
				if (!BitTest(Local_674.f_430, bVar0))
				{
					func_69(iParam0);
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Local_674.f_430), bVar0);
				if (Local_214.f_162.f_186 != 0)
				{
					Stack.Push(iParam0);
					Stack.Push(bVar0);
					Stack.Push(iVar1);
					Call_Loc(Local_214.f_162.f_186);
				}
			}
		}
		iVar1++;
	}
}

void func_69(int iParam0)
{
	if (func_85(28))
	{
		return;
	}
	if (unk_0x93BF17E19A9F0E9B(Local_674.f_52[iParam0 /*25*/]))
	{
		if (func_84(unk_0xC35A3A4C05A4831B(Local_674.f_52[iParam0 /*25*/])))
		{
			func_70(func_82(), 1, 0);
		}
	}
}

void func_70(int iParam0, int iParam1, int iParam2)
{
	if (func_80(1))
	{
		func_72(Local_628.f_0, func_73(1), iParam0, iParam1, iParam2);
	}
	else
	{
		func_72(Local_628.f_0, func_71(bLocal_618), iParam0, iParam1, iParam2);
	}
}

int func_71(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, bParam0);
	}
	return uVar0;
}

void func_72(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	struct<7> Var0;
	
	Var0.f_0 = -1324781468;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = unk_0x39D1D336459711BE();
	Var0.f_6 = uParam3;
	Var0.f_5 = uParam4;
	if (!iParam1 == 0)
	{
		unk_0x01F0B819E78A18A1(1, &Var0, 7, iParam1);
	}
}

int func_73(bool bParam0)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (func_80(1))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			bVar3 = unk_0xB23E0F9B63D009A8(iVar1);
			if (func_9(bVar3, 0, 0))
			{
				if (func_78())
				{
					if (func_76(bVar3, unk_0x259BE71D8A81D4FA(), bParam0))
					{
						unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar3);
					}
				}
				else
				{
					bVar2 = func_75();
					if (bVar2 != func_74())
					{
						if (func_76(bVar3, bVar2, bParam0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar3);
						}
					}
				}
			}
			bVar1++;
		}
	}
	return uVar0;
}

int func_74()
{
	return -1;
}

bool func_75()
{
	return Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10;
}

int func_76(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1 != func_74())
	{
		if (!bParam2)
		{
			if (func_77(bParam0, bParam1))
			{
				return 0;
			}
		}
		if (Global_1894573[bParam0 /*608*/].f_10 != func_74())
		{
			return bParam1 == Global_1894573[bParam0 /*608*/].f_10;
		}
	}
	return 0;
}

int func_77(int iParam0, int iParam1)
{
	if (iParam1 != func_74())
	{
		if (iParam0 != func_74())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 != func_74())
			{
				if (Global_1894573[iParam0 /*608*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_78()
{
	return func_79(unk_0x259BE71D8A81D4FA());
}

int func_79(bool bParam0)
{
	if (bParam0 != func_74())
	{
		if (Global_1894573[bParam0 /*608*/].f_10 != func_74())
		{
			return Global_1894573[bParam0 /*608*/].f_10 == bParam0;
		}
	}
	return 0;
}

bool func_80(bool bParam0)
{
	return func_81(unk_0x259BE71D8A81D4FA(), bParam0);
}

bool func_81(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_79(bParam0))
		{
			return 0;
		}
	}
	return Global_1894573[bParam0 /*608*/].f_10 != func_74();
}

int func_82()
{
	int iVar0;
	
	iVar0 = func_83();
	if (iVar0 == 0)
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_83()
{
	Call_Loc(Local_214.f_70);
	return StackVal;
}

int func_84(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if ((unk_0x0DFE7358172FC006(iParam0) == 6 || unk_0x0DFE7358172FC006(iParam0) == 29) || unk_0x0DFE7358172FC006(iParam0) == 27)
		{
			return 1;
		}
	}
	return 0;
}

bool func_85(int iParam0)
{
	return func_4(&(Local_197.f_16), iParam0);
}

bool func_86(int iParam0)
{
	return BitTest(Local_674.f_430, iParam0);
}

int func_87(int iParam0, int iParam1)
{
	Stack.Push(Local_214.f_162.f_205 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_214.f_162.f_205);
	if (StackVal && StackVal)
	{
		if (Local_214.f_162.f_204 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_214.f_162.f_204);
		}
		if (func_89(iParam0))
		{
			func_88(&(Local_674.f_52[iParam0 /*25*/]));
		}
		else
		{
			func_144(&(Local_674.f_52[iParam0 /*25*/]));
		}
		return 1;
	}
	return 0;
}

void func_88(var uParam0)
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

int func_89(int iParam0)
{
	if (func_45(iParam0, 18))
	{
		return 1;
	}
	Stack.Push(Local_214.f_162.f_208 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_162.f_208);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

void func_90(int iParam0)
{
}

void func_91(int iParam0, int iParam1)
{
	if (func_17(&(Local_674.f_52[iParam0 /*25*/].f_3), iParam1))
	{
	}
}

bool func_92(int iParam0, int iParam1)
{
	return func_4(&(Local_674.f_52[iParam0 /*25*/].f_3), iParam1);
}

int func_93(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar3;
	
	func_140(0, iParam0);
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_162.f_188);
	iVar0 = StackVal;
	if (func_42(iVar0))
	{
		iVar1 = Local_197.f_77.f_1[iParam0 /*21*/].f_8;
		if (iVar1 != -1)
		{
			if (func_139(Local_674.f_353[iVar1 /*8*/]))
			{
				if (func_138(&(Local_674.f_52[iParam0 /*25*/]), Local_674.f_353[iVar1 /*8*/], 26, iVar0, Local_197.f_77.f_1[iParam0 /*21*/].f_9, 1, 1, 1))
				{
					func_112(iParam0);
					unk_0x55098D9E9AD58806(iVar0);
					func_111();
					return 1;
				}
			}
		}
		else
		{
			Stack.Push(iParam0);
			Call_Loc(Local_214.f_162.f_189);
			Var2 = { StackVal, StackVal, StackVal };
			Stack.Push(iParam0);
			Call_Loc(Local_214.f_162.f_190);
			uVar3 = StackVal;
			if (!func_33(Var2))
			{
				if (!func_110(iParam0) || func_95(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_94(&(Local_674.f_52[iParam0 /*25*/]), 26, iVar0, Var2, uVar3, 1, 1, 1))
					{
						func_112(iParam0);
						func_111();
						unk_0x55098D9E9AD58806(iVar0);
						return 1;
					}
				}
				else
				{
					func_111();
					return 0;
				}
			}
		}
	}
	return 0;
}

int func_94(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!unk_0xADCE9BCAFCB83364(1))
	{
		return 0;
	}
	iVar0 = unk_0xB1DBFEB95C0EFB88(iParam1, iParam2, Param3, uParam4, iParam6, bParam5);
	*uParam0 = unk_0x9F7A52B1537567AC(iVar0);
	if (unk_0x2FC2FDC413532977(*uParam0))
	{
		unk_0x11C125313CB8ADA2(iVar0, iParam7);
		if (unk_0xC8D49539708A80B4(iVar0))
		{
			if (bParam5)
			{
				unk_0x3C1752E361ED8FC9(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_95(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2635559.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x913602ADD2D86A7A(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x2DBCF31839B069B4(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || unk_0x2DBCF31839B069B4(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x80F249EA6DFE8476(Param0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (bParam11)
	{
		if (unk_0xE8D2BD34CCB74431(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (fParam12 > 0f)
	{
		if (func_104(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_96(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2635559.f_2++;
	return 1;
}

int func_96(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_9(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (!unk_0x15CCE8886267624F())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xED977E2AE2CB16EE(func_101(unk_0x259BE71D8A81D4FA()), Param0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x7B780C491DEC834E(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_9(bVar1, 1, 1))
		{
			if (!func_98(bVar1, 0) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), bVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && bVar1 != unk_0x259BE71D8A81D4FA()))
				{
					if ((func_97(bVar1) || !bParam8) && !Global_2657589[bVar1 /*466*/].f_270)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x1864096A95E36EBA(bVar1) == -1)
							{
								if (unk_0x1864096A95E36EBA(bVar1) == unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x1864096A95E36EBA(bVar1) != unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))) || unk_0x1864096A95E36EBA(bVar1) == -1)
							{
								if (unk_0xED977E2AE2CB16EE(func_101(bVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x267FC71D3F0D131A(bVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x1864096A95E36EBA(bVar1) != iParam6 || unk_0x1864096A95E36EBA(bVar1) == -1)
						{
							if (unk_0xED977E2AE2CB16EE(func_101(bVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x267FC71D3F0D131A(bVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_97(bool bParam0)
{
	if (unk_0x870372B586EFB3EE(unk_0x56E414973C2A8C0E(bParam0)) || Global_2657589[bParam0 /*466*/].f_255)
	{
		return 1;
	}
	return 0;
}

bool func_98(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_99(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853910[bParam0 /*862*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x762604C40829DB72(bParam0))
		{
			bVar0 = unk_0x1864096A95E36EBA(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_99(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_100();
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

int func_100()
{
	return Global_1574918;
}

Vector3 func_101(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_103() && Global_1853910[iVar0 /*862*/].f_832) && !func_33(Global_1853910[iVar0 /*862*/].f_833))
	{
		return Global_1853910[iVar0 /*862*/].f_833;
	}
	return func_102(bParam0);
}

Vector3 func_102(bool bParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(bParam0), 0);
}

bool func_103()
{
	return Global_2683864.f_19;
}

int func_104(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x259BE71D8A81D4FA() != bVar1) || iParam6 == 0)
		{
			if (func_9(bVar1, bParam2, bParam3))
			{
				if (iParam8 || unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), bVar1))
				{
					if (!bParam5 || (!unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(bVar1)) && func_97(bVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) != unk_0x1864096A95E36EBA(bVar1))) || unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
						{
							if (((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && iParam7) && bParam4) && func_105(bVar1))
							{
							}
							else if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(bVar1)))
							{
								if (unk_0xED977E2AE2CB16EE(func_102(bVar1), Param0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_105(bool bParam0)
{
	if (func_109(unk_0x259BE71D8A81D4FA(), bParam0))
	{
		return 1;
	}
	Global_2764203 = { func_108(bParam0) };
	if (unk_0xEDD63461767A518C(&Global_2764203))
	{
		return 1;
	}
	if (func_106(unk_0x259BE71D8A81D4FA(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_106(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_107(bParam0);
	if (!iVar0 == func_74())
	{
		if (iVar0 == func_107(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_107(bool bParam0)
{
	if (bParam0 != func_74())
	{
		return Global_1894573[bParam0 /*608*/].f_10;
	}
	return func_74();
}

struct<13> func_108(bool bParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(bParam0, &Var0, 13);
	return Var0;
}

int func_109(bool bParam0, bool bParam1)
{
	if (unk_0x7260716F2E4D7661())
	{
		Global_2764203 = { func_108(bParam0) };
		Global_2764216 = { func_108(bParam1) };
		if (unk_0xE582BF3EDDBB1A68(&Global_2764203))
		{
			if (unk_0xE582BF3EDDBB1A68(&Global_2764216))
			{
				unk_0xC07B1AA6155EC337(&Global_2764133, 35, &Global_2764203);
				unk_0xC07B1AA6155EC337(&Global_2764168, 35, &Global_2764216);
				if (Global_2764133 == Global_2764168)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_110(int iParam0)
{
	if ((func_45(iParam0, 10) && func_92(iParam0, 8)) && !func_45(iParam0, 19))
	{
		return 1;
	}
	return 0;
}

void func_111()
{
	if (Local_674.f_514 != -1)
	{
		Local_674.f_528 = { 0f, 0f, 0f };
		Local_674.f_537 = 0f;
		iLocal_638 = 0;
		Local_674.f_497 = -1;
		Local_674.f_514 = -1;
	}
}

void func_112(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xC35A3A4C05A4831B(Local_674.f_52[iParam0 /*25*/]);
	bVar1 = func_92(iParam0, 19);
	func_132(iParam0, iVar0);
	if (bVar1)
	{
		func_129(iParam0, iVar0);
	}
	else
	{
		func_119(iParam0, iVar0);
	}
	if (func_118(iParam0, iVar0))
	{
		unk_0xBE8796DB2B90A437(iVar0, 1, 1);
		unk_0xBE8796DB2B90A437(iVar0, 52, 1);
		unk_0xBE8796DB2B90A437(iVar0, 53, 1);
		unk_0x675B6F5098262382(iVar0, joaat("FIRING_PATTERN_BURST_FIRE"));
	}
	if (Local_214.f_162.f_192 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Stack.Push(bVar1);
		Call_Loc(Local_214.f_162.f_192);
	}
	if (func_45(iParam0, 5))
	{
		if (!unk_0x7F420695E3F776FB(iVar0, 0))
		{
			unk_0x5D7CD709B34C90F0(iVar0, true);
		}
		unk_0xD25E9BDC14A0B649(iVar0, 101, 0);
		func_113(iVar0, iParam0, 1, 0, 1, 1);
	}
}

void func_113(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (Local_197.f_77.f_1[iParam1 /*21*/].f_8 != -1)
		{
			if (bParam5)
			{
				Var0 = { unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, -5f, 0f) };
				Var1 = { unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 0f, 0f) };
				unk_0xA934E5D7EEE03C7E(Var0, Var1, 25, 1, joaat("weapon_heavysniper"), 0, 1, 1, -1082130432);
				unk_0xA934E5D7EEE03C7E(Var1, Var0, 25, 1, joaat("weapon_assaultshotgun"), 0, 1, 1, -1082130432);
			}
			if (bParam3)
			{
				unk_0x0428AFDCAA63B06E(iParam0, 227, bParam2);
			}
			unk_0x0428AFDCAA63B06E(iParam0, 115, bParam3);
		}
		else
		{
			Var2 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
			func_116(Var2, &Var3, &Var4, 0);
			unk_0xA934E5D7EEE03C7E(Var3, Var4, 300, 1, joaat("weapon_heavysniper"), 0, 0, 0, 80f);
			if (bParam3)
			{
				unk_0x0428AFDCAA63B06E(iParam0, 227, bParam2);
			}
			unk_0x0428AFDCAA63B06E(iParam0, 115, bParam3);
		}
		if (bParam4)
		{
			func_114(iParam0, -1, 0);
		}
	}
}

void func_114(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, 11);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			func_115(iVar1, iParam0);
			iVar1++;
		}
	}
	else
	{
		func_115(iVar0, iParam0);
	}
}

void func_115(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x07D31B8F40A98A75(uParam1, 0, 0.727f, 0.625f, "ShotgunLargeMonolithic");
			break;
		
		case 1:
			unk_0x07D31B8F40A98A75(uParam1, 0, 0.727f, 0.518f, "ShotgunLargeMonolithic");
			break;
		
		case 2:
			unk_0x07D31B8F40A98A75(uParam1, 0, 0.727f, 0.399f, "ShotgunLargeMonolithic");
			break;
		
		case 3:
			unk_0x07D31B8F40A98A75(uParam1, 0, 0.806f, 0.399f, "ShotgunLargeMonolithic");
			break;
		
		case 4:
			unk_0x07D31B8F40A98A75(uParam1, 1, 0.379f, 0.324f, "ShotgunLargeMonolithic");
			break;
		
		case 5:
			unk_0x07D31B8F40A98A75(uParam1, 1, 0.379f, 0.534f, "ShotgunLargeMonolithic");
			break;
		
		case 6:
			unk_0x07D31B8F40A98A75(uParam1, 2, 0.628f, 0.277f, "ShotgunLargeMonolithic");
			break;
		
		case 7:
			unk_0x07D31B8F40A98A75(uParam1, 2, 0.609f, 0.344f, "ShotgunLargeMonolithic");
			break;
		
		case 8:
			unk_0x07D31B8F40A98A75(uParam1, 4, 0.719f, 0.802f, "ShotgunLargeMonolithic");
			break;
		
		case 9:
			unk_0x07D31B8F40A98A75(uParam1, 4, 0.775f, 0.68f, "ShotgunLargeMonolithic");
			break;
		
		case 10:
			unk_0x07D31B8F40A98A75(uParam1, 4, 0.775f, 0.561f, "ShotgunLargeMonolithic");
			break;
		
		case 11:
			unk_0xD1D8E1BF0769890C(uParam1, 1, 0.49f, 0.5f, 0f, 0.025f, 0, 0f, "BulletLarge");
			unk_0xD1D8E1BF0769890C(uParam1, 1, 0.48f, 0.55f, 0f, 0.025f, 0, 0f, "BulletLarge");
			unk_0xD1D8E1BF0769890C(uParam1, 1, 0.5f, 0.56f, 0f, 0.025f, 0, 0f, "BulletLarge");
			unk_0xD1D8E1BF0769890C(uParam1, 0, 0.726f, 0.789f, 0f, 0.019f, 0, 140f, "BulletSmall");
			unk_0xD1D8E1BF0769890C(uParam1, 0, 0.724f, 0.799f, 0f, 0.019f, 0, 140f, "BulletSmall");
			unk_0xD1D8E1BF0769890C(uParam1, 0, 0.737f, 0.723f, 0f, 0.019f, 0, 140f, "BulletSmall");
			unk_0xD1D8E1BF0769890C(uParam1, 0, 0.726f, 0.753f, 0f, 0.019f, 0, 140f, "BulletSmall");
			unk_0xD1D8E1BF0769890C(uParam1, 0, 0.726f, 0.76f, 0f, 0.019f, 0, 140f, "BulletSmall");
			unk_0xD1D8E1BF0769890C(uParam1, 0, 0.736f, 0.802f, 0f, 0.019f, 0, 140f, "BulletSmall");
			unk_0xD1D8E1BF0769890C(uParam1, 0, 0.715f, 0.806f, 0f, 0.019f, 0, 140f, "BulletSmall");
			break;
		
		case 12:
			unk_0xD1D8E1BF0769890C(uParam1, 3, 0.401f, 0.1f, 0f, 1f, 0, 0f, "BulletLarge");
			unk_0xD1D8E1BF0769890C(uParam1, 3, 0.514f, 0.13f, 0f, 1f, 0, 0f, "BulletLarge");
			unk_0xD1D8E1BF0769890C(uParam1, 3, 0.62f, 0.13f, 0f, 1f, 0, 0f, "BulletLarge");
			break;
		
		case 13:
			unk_0xD1D8E1BF0769890C(uParam1, 2, 0.41f, 0.229f, 0f, 1f, 13, 0f, "ShotgunLargeMonolithic");
			unk_0xD1D8E1BF0769890C(uParam1, 4, 0.21f, 0.305f, 0f, 1f, 14, 0f, "ShotgunLargeMonolithic");
			unk_0xD1D8E1BF0769890C(uParam1, 3, 0.495f, 0.124f, 27f, 1f, 25, 0f, "ShotgunLargeMonolithic");
			unk_0xD1D8E1BF0769890C(uParam1, 0, 0.37f, 1f, 27f, 1f, 25, 0f, "ShotgunLargeMonolithic");
			unk_0xD1D8E1BF0769890C(uParam1, 1, 0.667f, 0.571f, 27f, 1f, 22, 0f, "ShotgunSmallMonolithic");
			unk_0xD1D8E1BF0769890C(uParam1, 1, 0.343f, 0.79f, 27f, 1f, 22, 0f, "ShotgunSmallMonolithic");
			break;
	}
}

void func_116(struct<3> Param0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	
	fVar0 = 0.1f;
	iVar1 = unk_0xC5935DFB3F39785A(0, 6);
	fVar2 = 0.5f;
	fVar3 = 0.1f;
	fVar4 = 0.4f;
	if (bParam3)
	{
		iVar5 = unk_0xC5935DFB3F39785A(0, 5);
		fVar2 = (to_float(iVar5) / 10f);
		if (func_117())
		{
			fVar2 = (fVar2 * -1f);
		}
		iVar5 = unk_0xC5935DFB3F39785A(0, 2);
		fVar3 = (to_float(iVar5) / 15f);
		if (func_117())
		{
			fVar3 = (fVar3 * -1f);
		}
		iVar5 = unk_0xC5935DFB3F39785A(0, 6);
		fVar4 = (to_float(iVar5) / 10f);
		if (func_117())
		{
			fVar4 = (fVar4 * -1f);
		}
	}
	switch (iVar1)
	{
		case 0:
			*uParam1 = { (Param0.f_0 + fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam2 = { (Param0.f_0 - fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 1:
			*uParam1 = { (Param0.f_0 + fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam2 = { (Param0.f_0 - fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 2:
			*uParam1 = { (Param0.f_0 - fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam2 = { (Param0.f_0 + fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 3:
			*uParam1 = { (Param0.f_0 - fVar0), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			*uParam2 = { (Param0.f_0 + fVar2), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 4:
			*uParam1 = { (Param0.f_0 - fVar0), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			*uParam2 = { (Param0.f_0 + fVar2), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 5:
			*uParam1 = { (Param0.f_0 + fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam2 = { (Param0.f_0 - fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
	}
}

int func_117()
{
	if (BitTest(unk_0xC5935DFB3F39785A(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_118(int iParam0, int iParam1)
{
	if (func_45(iParam0, 9))
	{
		return 1;
	}
	return 0;
}

void func_119(int iParam0, int iParam1)
{
	unk_0xAAA71DD7E9059338(iParam1, 1);
	unk_0x44FB298D6382876D(iParam1, 1);
	if (func_45(iParam0, 21))
	{
		unk_0x176A19E4589CC2C6(iParam1, 1);
	}
	else
	{
		unk_0x176A19E4589CC2C6(iParam1, 0);
	}
	if (func_45(iParam0, 6))
	{
		unk_0x0428AFDCAA63B06E(iParam1, 146, false);
		unk_0xDAB3EED1D80C2712(iParam1, 1);
	}
	else
	{
		unk_0x0428AFDCAA63B06E(iParam1, 146, true);
		unk_0xDAB3EED1D80C2712(iParam1, 0);
	}
	unk_0xBE8796DB2B90A437(iParam1, 43, 1);
	unk_0xD0764B65C2DFEDCA(iParam1, Local_197.f_77.f_1[iParam0 /*21*/].f_15);
	unk_0x139711196A42A037(iParam1, func_128());
	unk_0xC652B7E19CE29859(iParam1, func_127(iParam0));
	unk_0x39256A89E9D7464A(iParam1, func_126());
	unk_0xBE8796DB2B90A437(iParam1, 24, 0);
	unk_0xF0259D91B002AE9F(iParam1, func_125());
	unk_0xD25E9BDC14A0B649(iParam1, func_125(), 0);
	unk_0x9E6CC93E007219AC(iParam1, 1);
	if (func_124(iParam0))
	{
		unk_0x8ADC49ACBB4FF0E4(iParam1, 1);
	}
	func_120(iParam0, iParam1);
}

void func_120(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<9> Var3;
	
	if (func_92(iParam0, 19))
	{
		return;
	}
	if (Local_197.f_77.f_1[iParam0 /*21*/].f_20 >= 0.75f)
	{
		unk_0xBB4D4E549F8E6E8C(iParam1, unk_0xD1A6A821F5AC81DB(iParam1, 0), Local_197.f_77.f_1[iParam0 /*21*/].f_20, 0, 0);
		return;
	}
	else if (Local_197.f_77.f_1[iParam0 /*21*/].f_20 < 0.75f && Local_197.f_77.f_1[iParam0 /*21*/].f_20 > -1f)
	{
	}
	iVar0 = Local_197.f_77.f_1[iParam0 /*21*/].f_14;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar2 = Local_197.f_77.f_254[iVar0 /*10*/].f_1[iVar1];
		if (iVar2 != -1)
		{
			if (func_122(iVar2, 4))
			{
				Var3 = { func_121(iVar2) };
				unk_0xDF2B856299BCDF13(iParam1, Var3.f_2, Var3.f_5, Var3.f_8, 0, 0);
			}
		}
		iVar1++;
	}
}

struct<9> func_121(int iParam0)
{
	struct<9> Var0;
	
	Var0 = 1;
	if (Local_214.f_510.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_510.f_2);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	}
	else
	{
		Var0 = { Local_197.f_729.f_1[iParam0 /*9*/] };
		Var0.f_2 = { Local_197.f_729.f_1[iParam0 /*9*/].f_2 };
		Var0.f_5 = { Local_197.f_729.f_1[iParam0 /*9*/].f_5 };
		Var0.f_8 = Local_197.f_729.f_1[iParam0 /*9*/].f_8;
	}
	return Var0;
}

bool func_122(int iParam0, int iParam1)
{
	struct<9> Var0;
	
	Var0 = { func_123(iParam0) };
	return func_4(&Var0, iParam1);
}

struct<9> func_123(int iParam0)
{
	return Local_197.f_729.f_1[iParam0 /*9*/];
}

int func_124(int iParam0)
{
	if (func_85(35))
	{
		if (func_62(iParam0))
		{
			return 0;
		}
		return (iParam0 % 2) == 0;
	}
	return 0;
}

int func_125()
{
	switch (Local_674.f_496)
	{
		case 2:
			return 200;
		
		case 3:
			return 300;
		
		case 4:
			return 300;
		
		default:
	}
	return 200;
}

int func_126()
{
	switch (Local_674.f_496)
	{
		case 2:
			return 60;
		
		case 3:
			return 80;
		
		case 4:
			return 100;
		
		default:
	}
	return 60;
}

int func_127(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_162.f_191);
	Stack.Push(StackVal == joaat("weapon_rpg"));
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_162.f_191);
	if (StackVal || StackVal == joaat("weapon_railgun"))
	{
		return 2;
	}
	switch (Local_674.f_496)
	{
		case 2:
			return 10;
		
		case 3:
			return 25;
		
		case 4:
			return 40;
		
		default:
	}
	return 10;
}

int func_128()
{
	switch (Local_674.f_496)
	{
		case 2:
			return 1;
		
		case 3:
			return 2;
		
		case 4:
			return 2;
		
		default:
	}
	return 1;
}

void func_129(int iParam0, int iParam1)
{
	func_130(iParam0, 32);
	unk_0x8C863F5EB14919DB(iParam1, 1f);
	unk_0xF823BACD940DEAF1(iParam1, 1f);
	unk_0xC3AD0E1324FB3465(iParam1, 17, 5f);
	unk_0x44FB298D6382876D(iParam1, 1);
	unk_0xBE8796DB2B90A437(iParam1, 2, 1);
	unk_0x0428AFDCAA63B06E(iParam1, 272, true);
	unk_0x3FF406EF0BE27DA3(iParam1, 1);
	unk_0x0428AFDCAA63B06E(iParam1, 42, true);
	unk_0x6D618646705A0465(iParam1, 1f);
	unk_0xC652B7E19CE29859(iParam1, func_127(iParam0));
	unk_0x39256A89E9D7464A(iParam1, func_126());
	unk_0xF0259D91B002AE9F(iParam1, func_125());
	unk_0xD25E9BDC14A0B649(iParam1, func_125(), 0);
	unk_0x139711196A42A037(iParam1, func_128());
	unk_0x68F395D64BC35E68(iParam1, 3);
}

void func_130(int iParam0, int iParam1)
{
	if (func_131(&(Local_674.f_52[iParam0 /*25*/].f_3), iParam1))
	{
	}
}

int func_131(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	bVar2 = (iVar0 % 32);
	if (BitTest((*uParam0)[iVar1], bVar2))
	{
		unk_0x8744D2E3FC95740E(uParam0[iVar1], bVar2);
		return 1;
	}
	return 0;
}

void func_132(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_137(iParam0))
	{
		unk_0x32C336953C18A3CE(unk_0xF5014688C9788D5F(Local_674.f_52[iParam0 /*25*/]), 1);
	}
	if (!func_84(iParam1))
	{
		unk_0x0428AFDCAA63B06E(iParam1, 324, true);
	}
	if (Local_197.f_77.f_1[iParam0 /*21*/].f_2 == joaat("mp_g_m_pros_01"))
	{
		switch (unk_0xC0120BBCC298EA2F(iParam1, 0))
		{
			case 0:
				unk_0x996F4A3208DAD314(iParam1, joaat("mp_blackops_black_pvg"));
				break;
			
			case 1:
				unk_0x996F4A3208DAD314(iParam1, joaat("mp_blackops_white_pvg"));
				break;
			
			case 2:
				unk_0x996F4A3208DAD314(iParam1, joaat("mp_blackops_latino_pvg"));
				break;
			}
	}
	if (func_62(iParam0))
	{
		iVar0 = func_136(iParam0);
		if (iVar0 != 0)
		{
			unk_0x996F4A3208DAD314(iParam1, iVar0);
		}
		if (!func_135(Local_197.f_77.f_1[iParam0 /*21*/].f_13, 0))
		{
			unk_0x8ADC49ACBB4FF0E4(iParam1, 1);
		}
	}
	if (Local_197.f_77.f_1[iParam0 /*21*/].f_12 != -1)
	{
		func_91(iParam0, 2);
		unk_0x79B52EC5A9AB6229(iParam1);
		unk_0x11C125313CB8ADA2(iParam1, 1);
		unk_0x788F35D395511DFE(iParam1, 1, 1);
	}
	if (func_45(iParam0, 11))
	{
		unk_0x6EF982A39E8D08FA(iParam1, 1, 1);
	}
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_162.f_191);
	iVar1 = StackVal;
	if (iVar1 != 0)
	{
		if (iVar1 == joaat("weapon_unarmed"))
		{
			unk_0x1834D30866818A23(iParam1, 1);
		}
		else
		{
			unk_0xB41DEC3AAC1AA107(iParam1, iVar1, 9999999, func_134(iParam0), 1);
		}
	}
	unk_0xCAF62AAD9CA7C260(iParam1, 1);
	unk_0x570AAA413775DFFB(iParam1, 1);
	unk_0x25DBF9F9C6BDFFEA(iParam1, Local_197.f_77.f_1[iParam0 /*21*/].f_17);
	unk_0xA6102F762BBA9BC9(iParam1, Local_197.f_77.f_1[iParam0 /*21*/].f_18);
	unk_0x35365D1E3ADB7109(iParam1, Local_197.f_77.f_1[iParam0 /*21*/].f_19);
	unk_0x0428AFDCAA63B06E(iParam1, 392, true);
	iVar2 = func_133(iParam0);
	if (iVar2 != joaat("COP"))
	{
		unk_0x3CEA1FD137ACE2D9(iParam1, iVar2);
	}
}

var func_133(int iParam0)
{
	return Local_197.f_77.f_254[Local_197.f_77.f_1[iParam0 /*21*/].f_14 /*10*/];
}

int func_134(int iParam0)
{
	if (Local_214.f_162.f_206 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_162.f_206);
		return StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_162.f_2);
	Stack.Push(!unk_0xD6F9DEE4765092A9(StackVal));
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_162.f_2);
	if (StackVal && unk_0x1B79E937E91F40C3(StackVal, "CODE_HUMAN_PATROL_2H"))
	{
		return 1;
	}
	if (func_92(iParam0, 21))
	{
		return 1;
	}
	return 0;
}

bool func_135(int iParam0, int iParam1)
{
	return func_4(&(Local_197.f_77.f_275[iParam0 /*3*/]), iParam1);
}

var func_136(int iParam0)
{
	if (Local_214.f_162.f_173.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_162.f_173.f_4);
		return StackVal;
	}
	return Local_197.f_77.f_275[Local_197.f_77.f_1[iParam0 /*21*/].f_13 /*3*/].f_2;
}

int func_137(int iParam0)
{
	if (func_85(22))
	{
		return 1;
	}
	return 0;
}

int func_138(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xADCE9BCAFCB83364(1))
	{
		return 0;
	}
	if (!unk_0x2FC2FDC413532977(uParam1))
	{
		return 0;
	}
	if (!unk_0xD9F5E1FEFD1329E4(unk_0xE38610F405049F71(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x9F7A52B1537567AC(unk_0x8728A378EF2B46B2(unk_0xE38610F405049F71(uParam1), iParam2, iParam3, uParam4, iParam6, bParam5));
	if (unk_0x2FC2FDC413532977(*uParam0))
	{
		unk_0x11C125313CB8ADA2(unk_0xC35A3A4C05A4831B(*uParam0), iParam7);
		if (unk_0xC8D49539708A80B4(unk_0xC35A3A4C05A4831B(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x3C1752E361ED8FC9(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_139(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		unk_0x460D2A8B2C7DC7D4(uParam0);
		return unk_0xEADBDBE0422CF7E6(uParam0);
	}
	return 0;
}

void func_140(int iParam0, var uParam1)
{
	if (Local_674.f_514 == -1)
	{
		Local_674.f_497 = iParam0;
		Local_674.f_514 = uParam1;
	}
}

int func_141(int iParam0)
{
	if (!func_143(0, iParam0))
	{
		return 0;
	}
	if (Local_197.f_77.f_1[iParam0 /*21*/].f_8 != -1)
	{
		if (func_142(Local_197.f_77.f_1[iParam0 /*21*/].f_8) != 4)
		{
			return 0;
		}
	}
	if (unk_0xD65DFBCD23E76428(bLocal_618))
	{
		return 0;
	}
	Stack.Push(Local_214.f_162.f_207 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_162.f_207);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_142(int iParam0)
{
	return Local_674.f_353[iParam0 /*8*/].f_1;
}

int func_143(int iParam0, int iParam1)
{
	if (Local_674.f_497 == -1)
	{
		return 1;
	}
	if (Local_674.f_497 == iParam0)
	{
		if (Local_674.f_514 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_144(var uParam0)
{
	var uVar0;
	
	if (unk_0x93BF17E19A9F0E9B(*uParam0))
	{
		uVar0 = unk_0xF5014688C9788D5F(*uParam0);
		unk_0x76AD45C3946F87DD(&uVar0);
	}
}

int func_145(int iParam0)
{
	return 1;
}

void func_146(int iParam0)
{
	func_65(iParam0, 0);
	if (Local_214.f_162.f_181.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_162.f_181.f_3);
	}
}

int func_147(int iParam0)
{
	int iVar0;
	
	if (Local_214.f_162.f_181.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_162.f_181.f_4);
		iVar0 = StackVal;
		if (iVar0 != -1)
		{
			if (!func_13(&(Local_674.f_52[iParam0 /*25*/].f_23), iVar0, 0))
			{
				return 0;
			}
			else
			{
				func_54(&(Local_674.f_52[iParam0 /*25*/].f_23));
			}
		}
	}
	return 1;
}

int func_148(int iParam0)
{
	if (Local_214.f_162.f_187 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_162.f_187);
		return StackVal;
	}
	return 1;
}

int func_149(int iParam0, int iParam1)
{
	return 0;
}

void func_150(int iParam0, int iParam1)
{
	if (!bLocal_616)
	{
		return;
	}
	Local_674.f_52[iParam0 /*25*/].f_1 = iParam1;
}

void func_151(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	*iParam4 = func_152(iParam0);
	*bParam1 = unk_0x93BF17E19A9F0E9B(Local_674.f_52[iParam0 /*25*/]);
	if (*bParam1)
	{
		*iParam3 = unk_0xC35A3A4C05A4831B(Local_674.f_52[iParam0 /*25*/]);
		*bParam2 = unk_0x4FAFF4BCB7633475(*iParam3);
	}
}

int func_152(int iParam0)
{
	return Local_674.f_52[iParam0 /*25*/].f_1;
}

void func_153()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < Local_197.f_434)
	{
		bVar3 = unk_0x93BF17E19A9F0E9B(Local_674.f_394[iVar4 /*5*/]);
		if (bVar3)
		{
			iVar0 = unk_0xF5014688C9788D5F(Local_674.f_394[iVar4 /*5*/]);
			bVar2 = unk_0x1C2F771CDC87A3A5(iVar0, 0);
			if (Local_214.f_428.f_36 != 0)
			{
				Stack.Push(iVar4);
				Stack.Push(iVar0);
				Stack.Push(bVar2);
				Call_Loc(Local_214.f_428.f_36);
			}
		}
		if (func_175(iVar4) > 1 && func_175(iVar4) != 3)
		{
			if (bVar3)
			{
				if (bVar2)
				{
					func_174(iVar4, 3);
				}
				else if (func_173(iVar4))
				{
					func_174(iVar4, 3);
				}
			}
			else
			{
				func_174(iVar4, 3);
			}
		}
		func_168(iVar4, iVar0);
		switch (func_175(iVar4))
		{
			case 0:
				if (func_167(iVar4))
				{
					func_174(iVar4, 1);
				}
				break;
			
			case 1:
				if ((!bVar1 && func_166(iVar4)) && func_154(iVar4))
				{
					func_174(iVar4, 2);
					bVar1 = true;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				break;
		}
		iVar4++;
	}
}

int func_154(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x93BF17E19A9F0E9B(Local_674.f_394[iParam0 /*5*/]))
	{
		Var1 = { func_165(iParam0) };
		Var2 = { func_164(iParam0) };
		if (func_33(Var1))
		{
			return 0;
		}
		iVar3 = Local_197.f_434.f_1[iParam0 /*12*/].f_3;
		if (!func_42(iVar3))
		{
			return 0;
		}
		if (func_162(&(Local_674.f_394[iParam0 /*5*/]), iVar3, Var1, 1, 1, 1, func_163(iParam0, 22), 1, 0, 0))
		{
			iVar0 = unk_0xAB3646235DE50E93(Local_674.f_394[iParam0 /*5*/]);
			unk_0xCF39804E8C88080E(iVar0, Var2, 2, 1);
			func_159(iParam0, iVar0);
			unk_0x55098D9E9AD58806(iVar3);
		}
	}
	if (unk_0x93BF17E19A9F0E9B(Local_674.f_394[iParam0 /*5*/]))
	{
		iVar4 = func_158(iParam0);
		if (iVar4 != -1 && Local_197.f_434.f_86[iVar4 /*6*/].f_2 != -1)
		{
			iVar0 = unk_0xAB3646235DE50E93(Local_674.f_394[iParam0 /*5*/]);
			return func_155(iParam0, iVar0, iVar4);
		}
		return 1;
	}
	return 0;
}

int func_155(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	struct<3> Var2;
	
	uVar0 = func_157(iParam2);
	if (unk_0xFC8BFE4B41177C22(iParam1) && unk_0x93BF17E19A9F0E9B(uVar0))
	{
		if (func_156(iParam1))
		{
			if (func_139(uVar0))
			{
				iVar1 = unk_0xF5014688C9788D5F(uVar0);
				if (!unk_0x21478251925DBFD7(iParam1, iVar1))
				{
					Var2 = { func_164(iParam0) };
					Stack.Push(iParam1);
					Stack.Push(iVar1);
					Stack.Push(unk_0x365DC1E8054AF31A(iVar1, "chassis_dummy"));
					Stack.Push(Local_197.f_434.f_86[iParam2 /*6*/].f_3);
					Stack.Push(Var2);
					Stack.Push(iParam2);
					Call_Loc(Local_214.f_428.f_25);
					Stack.Push(0);
					Stack.Push(iParam0);
					Call_Loc(Local_214.f_428.f_26);
					unk_0x4D306DD94DD6FDBA(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, 2, 1, 0);
				}
				else
				{
					return 1;
				}
			}
		}
	}
	else
	{
		if (!unk_0xFC8BFE4B41177C22(iParam1))
		{
		}
		if (!unk_0x93BF17E19A9F0E9B(uVar0))
		{
		}
	}
	return 0;
}

int func_156(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0xC8D49539708A80B4(iParam0))
		{
			unk_0xF093E270C0B6B318(iParam0);
			return unk_0x1B1A446EFA398EB5(iParam0);
		}
	}
	return 0;
}

int func_157(int iParam0)
{
	switch (Local_197.f_434.f_86[iParam0 /*6*/].f_1)
	{
		case 2:
			return Local_674.f_353[Local_197.f_434.f_86[iParam0 /*6*/].f_2 /*8*/];
		
		case 3:
			return Local_674.f_394[Local_197.f_434.f_86[iParam0 /*6*/].f_2 /*5*/];
		
		case 1:
			return Local_674.f_52[Local_197.f_434.f_86[iParam0 /*6*/].f_2 /*25*/];
		
		default:
	}
	return -1;
}

int func_158(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Local_197.f_434.f_86[iVar0 /*6*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_159(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	unk_0x9059372A0C629EB6(unk_0xAB3646235DE50E93(Local_674.f_394[iParam0 /*5*/]), 300);
	unk_0xD0F1DB0E50B367AD(iParam1, func_163(iParam0, 17), func_163(iParam0, 18), func_163(iParam0, 19), func_163(iParam0, 20), func_163(iParam0, 21), 0, 0, 0);
	func_161(iParam0, 0);
	if (func_163(iParam0, 32))
	{
		unk_0x935364B4448CD584(iParam1, true);
		unk_0x4285E11B28063EE0(iParam1, false, 0);
		unk_0x5D7CD709B34C90F0(iParam1, true);
		unk_0x44C48AC14D3C09ED(iParam1, false, 0);
	}
	if (!func_163(iParam0, 1))
	{
		unk_0x711CB952E5BE087E(unk_0xAB3646235DE50E93(Local_674.f_394[iParam0 /*5*/]));
	}
	if (func_163(iParam0, 2))
	{
		unk_0xEC34E75BDB02A4C6(Local_674.f_394[iParam0 /*5*/], 1, 1);
		unk_0x82EDE1ECB3BF1ADF(Local_674.f_394[iParam0 /*5*/], 1);
		unk_0xE6E7B0D0E904CA62(iParam1, 1, 1);
	}
	if (func_163(iParam0, 3))
	{
		unk_0x44C48AC14D3C09ED(iParam1, false, 0);
	}
	if (func_163(iParam0, 4))
	{
		unk_0x4CD0763EB5DCD503(iParam1, 1);
	}
	if (func_163(iParam0, 5))
	{
		unk_0xE59BDA10CE05FD35(iParam1, 0);
	}
	if (func_163(iParam0, 6))
	{
		unk_0xC7D381E526A969D3(iParam1, 1);
	}
	if (func_163(iParam0, 7))
	{
		unk_0xE592D924D5438108(iParam1, 0, 0f, 0f, 1f, 0f, 0f, 0f, 0, 0, 0, 0, 0, 1);
	}
	if (func_163(iParam0, 15))
	{
		unk_0xF88FC425EC7D675D(unk_0xAB3646235DE50E93(Local_674.f_394[iParam0 /*5*/]), 1200);
	}
	if (func_163(iParam0, 8))
	{
		unk_0x5D7CD709B34C90F0(iParam1, true);
	}
	if (func_163(iParam0, 9))
	{
		unk_0x8FEAF7F0538CEF55(unk_0xAB3646235DE50E93(Local_674.f_394[iParam0 /*5*/]), 1);
	}
	if (func_163(iParam0, 34))
	{
		unk_0x62C438C53BB57AFD(iParam1, func_165(iParam0), 0, 0, 1);
	}
	else if (func_163(iParam0, 16))
	{
		unk_0xB2BD5837A8D3CEDA(iParam1, func_165(iParam0), 1, 0, 0, 1);
	}
	if (func_163(iParam0, 33))
	{
		unk_0xCF39804E8C88080E(iParam1, func_164(iParam0), 2, 1);
	}
	if (func_163(iParam0, 10))
	{
		unk_0x935364B4448CD584(iParam1, true);
	}
	if (func_163(iParam0, 11))
	{
		unk_0x70BAF7723F26069A(iParam1, 1);
	}
	if (func_160(iParam0))
	{
		unk_0x32C336953C18A3CE(iParam1, 1);
	}
	if (func_163(iParam0, 13))
	{
		unk_0x4285E11B28063EE0(iParam1, false, 0);
	}
	if (func_163(iParam0, 14))
	{
		Stack.Push(Local_214.f_428.f_24 != 0);
		Stack.Push(iParam0);
		Stack.Push(&uVar0);
		Stack.Push(&uVar1);
		Call_Loc(Local_214.f_428.f_24);
		if (StackVal && StackVal)
		{
			unk_0xACF36914BA191DCB(&uVar0, iParam1);
			unk_0xC897319696131088(&uVar0, 1);
			unk_0x74378390011ACDA4(&uVar0, &uVar1, 0);
		}
	}
	if (Local_214.f_428.f_33 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_214.f_428.f_33);
	}
}

int func_160(int iParam0)
{
	if (func_163(iParam0, 12))
	{
		return 1;
	}
	if (func_85(22))
	{
		return 1;
	}
	return 0;
}

void func_161(int iParam0, int iParam1)
{
	if (func_131(&(Local_674.f_394[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

int func_162(var uParam0, int iParam1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
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
		unk_0x11C125313CB8ADA2(unk_0xAB3646235DE50E93(*uParam0), bParam6);
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

bool func_163(int iParam0, int iParam1)
{
	return func_4(&(Local_197.f_434.f_1[iParam0 /*12*/]), iParam1);
}

Vector3 func_164(int iParam0)
{
	struct<3> Var0;
	
	if (Local_214.f_428.f_38 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_428.f_38);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (func_33(Var0))
	{
		Var0 = { Local_197.f_434.f_1[iParam0 /*12*/].f_8 };
	}
	return Var0;
}

Vector3 func_165(int iParam0)
{
	struct<3> Var0;
	
	if (Local_214.f_428.f_37 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_428.f_37);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (func_33(Var0))
	{
		Var0 = { Local_197.f_434.f_1[iParam0 /*12*/].f_4 };
	}
	return Var0;
}

int func_166(int iParam0)
{
	if (unk_0xD65DFBCD23E76428(bLocal_618))
	{
		return 0;
	}
	return 1;
}

int func_167(int iParam0)
{
	if (Local_214.f_428.f_23 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_428.f_23);
		return StackVal;
	}
	return 1;
}

void func_168(int iParam0, int iParam1)
{
	if (Local_197.f_434.f_1[iParam0 /*12*/].f_11 == -1)
	{
		return;
	}
	if (func_175(iParam0) > 1 && func_175(iParam0) < 3)
	{
		if (func_170(iParam0, iParam1))
		{
			func_169(iParam0, 8);
		}
		else
		{
			func_161(iParam0, 8);
		}
	}
}

void func_169(int iParam0, int iParam1)
{
	if (func_17(&(Local_674.f_394[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

bool func_170(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam1))
	{
		iVar0 = func_158(iParam0);
		if (iVar0 != -1 && Local_197.f_434.f_86[iVar0 /*6*/].f_2 != -1)
		{
			switch (Local_197.f_434.f_86[iVar0 /*6*/].f_1)
			{
				case 2:
					return func_172(Local_197.f_434.f_86[iVar0 /*6*/].f_2, 2);
				
				case 1:
					return func_92(Local_197.f_434.f_86[iVar0 /*6*/].f_2, 2);
				}
			}
		
		default:
	}
	return func_171(iParam0, 8);
}

bool func_171(int iParam0, int iParam1)
{
	return func_4(&(Local_674.f_394[iParam0 /*5*/].f_2), iParam1);
}

bool func_172(int iParam0, int iParam1)
{
	return func_4(&(Local_674.f_353[iParam0 /*8*/].f_2), iParam1);
}

int func_173(int iParam0)
{
	if (Local_214.f_428.f_27 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_428.f_27);
		return StackVal;
	}
	return 0;
}

void func_174(int iParam0, int iParam1)
{
	Local_674.f_394[iParam0 /*5*/].f_1 = iParam1;
}

int func_175(int iParam0)
{
	return Local_674.f_394[iParam0 /*5*/].f_1;
}

void func_176()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Local_197.f_356)
	{
		bVar5 = unk_0x93BF17E19A9F0E9B(Local_674.f_353[iVar0 /*8*/]);
		if (bVar5)
		{
			iVar2 = unk_0xE38610F405049F71(Local_674.f_353[iVar0 /*8*/]);
			bVar4 = func_463(Local_674.f_353[iVar0 /*8*/]);
			bVar6 = func_461(iVar2, 1, 1, 0, 0, 0, 1, 0, 0);
			if (bVar4)
			{
				iVar1 = func_458(iVar0, 2);
			}
		}
		if (func_142(iVar0) > 2)
		{
			if (func_142(iVar0) != 5 && func_142(iVar0) != 3)
			{
				if (!bVar5)
				{
					func_457(iVar0, 5);
				}
				else if (!bVar4)
				{
					func_457(iVar0, 5);
				}
				else if (func_456(iVar0, iVar2, bVar6))
				{
					func_457(iVar0, 5);
				}
			}
		}
		if (Local_214.f_373.f_46 != 0)
		{
			Stack.Push(iVar0);
			Stack.Push(iVar2);
			Stack.Push(bVar4);
			Stack.Push(iVar1);
			Call_Loc(Local_214.f_373.f_46);
		}
		func_452(iVar0, iVar2);
		switch (func_142(iVar0))
		{
			case 0:
				if (func_451(iVar0))
				{
					func_457(iVar0, 2);
				}
				break;
			
			case 1:
				if (!bVar5)
				{
					if (func_450(iVar0))
					{
						func_457(iVar0, 2);
					}
				}
				else
				{
					func_144(&(Local_674.f_353[iVar0 /*8*/]));
				}
				break;
			
			case 2:
				if (!bVar3)
				{
					if (func_449(iVar0))
					{
						if (func_184(iVar0))
						{
							func_457(iVar0, 4);
							bVar3 = true;
						}
					}
				}
				break;
			
			case 4:
				if (bVar5)
				{
					if (func_183(iVar0, iVar2))
					{
						func_457(iVar0, 5);
					}
					else
					{
						if (bVar4)
						{
							func_182(iVar0, iVar2);
						}
						break;
					
					case 5:
						if (func_181(iVar0, 0))
						{
							func_8(10);
						}
						if (bVar5)
						{
							if (func_183(iVar0, iVar2))
							{
							}
							else
							{
								if (func_181(iVar0, 23))
								{
									if (bVar5)
									{
										func_144(&(Local_674.f_353[iVar0 /*8*/]));
									}
								}
								if (func_180(iVar0))
								{
									func_144(&(Local_674.f_353[iVar0 /*8*/]));
									func_457(iVar0, 1);
								}
								break;
							
							case 3:
								break;
							
							case 6:
								if (bVar5 && func_179(iVar0, iVar2))
								{
									func_144(&(Local_674.f_353[iVar0 /*8*/]));
								}
								break;
							
							case 7:
								break;
						}
						if (bVar6)
						{
							func_178(iVar0, 13);
						}
						else
						{
							func_177(iVar0, 13);
						}
					}
					iVar0++;
				}

void func_177(int iParam0, int iParam1)
{
	if (func_131(&(Local_674.f_353[iParam0 /*8*/].f_2), iParam1))
	{
	}
}

void func_178(int iParam0, int iParam1)
{
	if (func_17(&(Local_674.f_353[iParam0 /*8*/].f_2), iParam1))
	{
	}
}

int func_179(int iParam0, int iParam1)
{
	if (func_181(iParam0, 23) || func_172(iParam0, 15))
	{
		return 1;
	}
	Stack.Push(Local_214.f_373.f_52 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_214.f_373.f_52);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

int func_180(int iParam0)
{
	if (func_527() != 0)
	{
		return 0;
	}
	if (func_181(iParam0, 13))
	{
		if (Local_214.f_373.f_33 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_214.f_373.f_33);
			return StackVal;
		}
		return 1;
	}
	return 0;
}

bool func_181(int iParam0, int iParam1)
{
	return func_4(&(Local_197.f_356.f_1[iParam0 /*15*/]), iParam1);
}

void func_182(int iParam0, int iParam1)
{
	struct<3> Var0;
	float fVar1;
	
	if (iParam0 != Local_197.f_356.f_77)
	{
		return;
	}
	Var0 = { unk_0xD1A6A821F5AC81DB(iParam1, 0) };
	fVar1 = 500f;
	if (func_33(Local_674.f_534))
	{
		Local_674.f_534 = { 5000f, 8500f, 0f };
	}
	if (vdist2(Var0, Local_674.f_534) > (550f * 550f))
	{
		if (Local_674.f_518 != -1)
		{
			unk_0x9049EEEF48D81A2F(Local_674.f_518, 0);
		}
		Local_674.f_534 = { Var0 };
		Local_674.f_518 = unk_0xA0FA113A187BAF0D(Local_674.f_534, fVar1, 1f, 0.02f, 0, 1);
	}
}

int func_183(int iParam0, int iParam1)
{
	Stack.Push(Local_214.f_373.f_52 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_214.f_373.f_52);
	if (StackVal && StackVal)
	{
		func_144(&(Local_674.f_353[iParam0 /*8*/]));
		return 1;
	}
	return 0;
}

int func_184(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	func_140(1, iParam0);
	iVar0 = Local_197.f_356.f_1[iParam0 /*15*/].f_3;
	if (!func_42(iVar0))
	{
		return 0;
	}
	bVar1 = true;
	if (func_33(Local_674.f_528))
	{
		if (func_172(iParam0, 15))
		{
		}
		else
		{
			if (func_181(iParam0, 35) && !func_172(iParam0, 24))
			{
				if (!func_95(Local_197.f_356.f_1[iParam0 /*15*/].f_4, 10f, 1065353216, 0f, 0f, 0, 0, 0, 0f, 0, -1, 0, 0, 0, 0, 0, 1))
				{
					func_178(iParam0, 24);
				}
			}
			if (func_181(iParam0, 17) || func_172(iParam0, 24))
			{
				if (!func_321(iParam0, &(Local_674.f_528), &(Local_674.f_537)))
				{
					bVar1 = false;
				}
			}
			else if (func_181(iParam0, 25))
			{
				Stack.Push(iParam0);
				Stack.Push(&(Local_674.f_528));
				Stack.Push(&(Local_674.f_537));
				Call_Loc(Local_214.f_373.f_37);
				if (!StackVal)
				{
					bVar1 = false;
				}
			}
			else if (func_181(iParam0, 18))
			{
				if (!func_317(iParam0))
				{
					bVar1 = false;
				}
			}
			else if (func_181(iParam0, 19))
			{
				if (!func_311(iParam0))
				{
					bVar1 = false;
				}
			}
			else
			{
				Local_674.f_528 = { Local_197.f_356.f_1[iParam0 /*15*/].f_4 };
				Local_674.f_537 = Local_197.f_356.f_1[iParam0 /*15*/].f_7;
			}
		}
	}
	if (bVar1)
	{
		if (!func_181(iParam0, 30))
		{
			func_288(Local_674.f_528, 30f, 0);
			unk_0x2094BC4B6731BA68(Local_674.f_528, 30f, 0, 0, 0, 1);
		}
		if (func_285(&(Local_674.f_353[iParam0 /*8*/]), iVar0, Local_674.f_528, Local_674.f_537, 1, 1, 1, 0, 1, 1, 0, 0, Local_674.f_528.f_2 <= -100f, 0))
		{
			iVar2 = unk_0xE38610F405049F71(Local_674.f_353[iParam0 /*8*/]);
			func_282(0);
			func_185(iParam0, iVar2);
			func_111();
			return 1;
		}
	}
	else
	{
		func_111();
	}
	return 0;
}

void func_185(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam1);
	if (!func_204(iParam0, iParam1))
	{
		func_203(iParam0, iParam1);
	}
	if (func_202(iParam0))
	{
		unk_0x32C336953C18A3CE(iParam1, 1);
	}
	unk_0x935364B4448CD584(iParam1, func_181(iParam0, 10));
	unk_0x7A673862D5A46F24(iParam1, func_181(iParam0, 3));
	unk_0x3B1F6012B676860B(iParam1, func_181(iParam0, 6));
	unk_0x2165BE2A3E719A31(iParam1, func_181(iParam0, 5));
	if (unk_0xAE447CBB33B40CA3(iVar0))
	{
		unk_0x1A6B031C358F6071(iParam1);
	}
	if (func_181(iParam0, 4))
	{
		unk_0x0B74F181ADFC39BF(iParam1, 7);
	}
	if (func_181(iParam0, 25))
	{
		unk_0x62C438C53BB57AFD(iParam1, Local_674.f_528, 0, 0, 1);
	}
	if (func_181(iParam0, 8))
	{
		unk_0x1F4C790D1AC5AFF9(iParam1, 2, 2);
		unk_0x1F4C790D1AC5AFF9(iParam1, 3, 2);
		unk_0x367040C40E6A5A3A(iParam1, 0);
	}
	if (func_181(iParam0, 28))
	{
		unk_0xEC34E75BDB02A4C6(Local_674.f_353[iParam0 /*8*/], 1, 1);
		unk_0xE6E7B0D0E904CA62(iParam1, 1, 1);
	}
	if (func_172(iParam0, 14))
	{
		unk_0xD25E9BDC14A0B649(iParam1, 1000, 0);
		unk_0x439C904840715871(iParam1, 0);
		unk_0xD05AF216D970F274(iParam1, 1);
		unk_0xAF324DD73DD8C045(iParam1, 0);
		if (func_201(iParam0, iVar0))
		{
			unk_0xB57A96BF24464D21(iParam1, 0);
			unk_0x271D0AA5ADF266EA(iParam1, func_200(iParam0, iVar0));
		}
		if (unk_0x00C6FDED3EB75117(iVar0))
		{
			unk_0xD2F21CFC29C914AE(iParam1, 0);
			unk_0x540E1993D47EAF4B(iParam1, 0f);
		}
		func_198(iParam1, iVar0);
		func_197(iParam1, 1);
		unk_0x730536B32F041BA6(iParam1, 0);
		unk_0xF5706A3E4A060916(iParam1, func_181(iParam0, 7), 0);
		func_196(iParam0, iParam1);
		iVar1 = func_195(iParam0);
		if (iVar1 != -1 && func_194(iVar1) != -1)
		{
			func_193(unk_0xF5014688C9788D5F(Local_674.f_353[iParam0 /*8*/]), Local_674.f_577.f_1[func_194(iVar1) /*5*/].f_1);
		}
	}
	if (func_181(iParam0, 11))
	{
		unk_0x5D7CD709B34C90F0(iParam1, true);
	}
	if (func_181(iParam0, 32))
	{
		unk_0xBA3C1A9AA7FD9616(iParam1, 3);
		unk_0x2F12C305B28C6C59(iParam1, 1);
	}
	if (func_181(iParam0, 33))
	{
		unk_0x4539850624F18A9E(iParam1, 1);
	}
	if (func_192(iParam1))
	{
		if (func_181(iParam0, 34))
		{
			unk_0x89D51606F3FCA194(iParam1, 1, 1);
		}
		else
		{
			unk_0x89D51606F3FCA194(iParam1, 0, 1);
		}
	}
	if (func_172(iParam0, 15))
	{
	}
	else
	{
		if (unk_0x00C6FDED3EB75117(iVar0))
		{
			if (func_181(iParam0, 19) || unk_0x3F18810075C77D41(iParam1))
			{
				unk_0xC2A036647DD761E4(iParam1, 3);
			}
			else
			{
				unk_0xC2A036647DD761E4(iParam1, 2);
			}
		}
		if (unk_0xEA4F815FDC353FEF(iVar0))
		{
			unk_0x3E29597A27D861B2(iParam1, 1);
		}
		unk_0x9BC299A7D57D7CAA(iParam1, 1);
	}
	if (func_172(iParam0, 15) || func_181(iParam0, 19))
	{
		if (unk_0xBA16CD57E37AC32A(iVar0))
		{
			unk_0xA9F7300B498DDED7(iParam1);
		}
		if (unk_0x00C6FDED3EB75117(iVar0) || unk_0xBA16CD57E37AC32A(iVar0))
		{
			unk_0xC229299217554C78(iParam1, 1, 1, 0);
			unk_0x79B52EC5A9AB6229(iParam1);
			unk_0xC7D381E526A969D3(iParam1, 1);
		}
	}
	unk_0x89E19F9D79DDCA80(iParam1, 1);
	unk_0xB2CA6639924FA111(iParam1, 1);
	if (!func_191() || func_190())
	{
		unk_0x0B1BCFB3741AF8B2(iParam1, 1);
	}
	if (!unk_0x78B050AFBA6D1517(Local_197.f_356.f_1[iParam0 /*15*/].f_3))
	{
		func_188(iParam0, iParam1);
	}
	unk_0xF88FC425EC7D675D(iParam1, 1200);
	unk_0x55098D9E9AD58806(iVar0);
	unk_0x8D2010DF3E481626(iParam1, 1);
	func_186(iParam1);
	unk_0x7B95E064D91BFE49(Local_674.f_353[iParam0 /*8*/], 1);
	if (Local_214.f_373.f_43 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_214.f_373.f_43);
	}
}

void func_186(int iParam0)
{
	int iVar0;
	
	func_187(iParam0);
	if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
	{
		if (unk_0xD130E7CDEE903624(iParam0, "MPBitset"))
		{
			iVar0 = unk_0xE2F6FE9B61232165(iParam0, "MPBitset");
		}
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 10);
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 11);
		unk_0xEE8559BBFC27701B(iParam0, "MPBitset", iVar0);
	}
}

void func_187(int iParam0)
{
	if (unk_0x77B62CAA5DF0922A("Not_Allow_As_Saved_Veh", 3))
	{
		if (!unk_0xD130E7CDEE903624(iParam0, "Not_Allow_As_Saved_Veh"))
		{
			unk_0xEE8559BBFC27701B(iParam0, "Not_Allow_As_Saved_Veh", 1);
		}
	}
}

void func_188(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (unk_0xB3E28598CA656061(iParam1, iVar0))
		{
			iVar1 = func_189(iParam0, iVar0);
			if (iVar1 != -1)
			{
				switch (iVar1)
				{
					case 0:
						unk_0x3E13A302AA0F06BF(iParam1, iVar0, 5, 0f);
						unk_0xC1FE4FCB32785633(iParam1, iVar0, 1, 1, 1);
						break;
					
					case 1:
						unk_0xC1FE4FCB32785633(iParam1, iVar0, 0, 0, 1);
						unk_0x3E13A302AA0F06BF(iParam1, iVar0, 5, 1f);
						break;
					
					case 2:
						unk_0xC1FE4FCB32785633(iParam1, iVar0, 0, 0, 1);
						unk_0x3E13A302AA0F06BF(iParam1, iVar0, 1, 0.3f);
						break;
					
					case 3:
						unk_0x89E9F387C190061F(iParam1, iVar0, 1);
						break;
					}
				}
		}
		iVar0++;
	}
}

int func_189(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 4;
			break;
		
		case 2:
			iVar0 = 8;
			break;
		
		case 3:
			iVar0 = 12;
			break;
		
		case 4:
			iVar0 = 16;
			break;
		
		case 5:
			iVar0 = 20;
			break;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (BitTest(Local_197.f_356.f_1[iParam0 /*15*/].f_10, (iVar0 + iVar1)))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

int func_190()
{
	return 0;
}

int func_191()
{
	return 0;
}

int func_192(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("akula") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("annihilator2"))
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

void func_193(int iParam0, int iParam1)
{
	if (unk_0x77B62CAA5DF0922A("FMDeliverableID", 3))
	{
		unk_0xEE8559BBFC27701B(iParam0, "FMDeliverableID", iParam1);
	}
}

int func_194(int iParam0)
{
	return Local_674.f_2.f_37[iParam0];
}

int func_195(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (Local_674.f_2.f_27[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_196(int iParam0, int iParam1)
{
	if (unk_0x77B62CAA5DF0922A("FMCVehicle", 2))
	{
		unk_0xF46ECFD5526E8FF7(iParam1, "FMCVehicle", 1);
	}
}

void func_197(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
	{
		if (unk_0xD130E7CDEE903624(iParam0, "MPBitset"))
		{
			iVar0 = unk_0xE2F6FE9B61232165(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 13);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&iVar0, 13);
		}
		unk_0xEE8559BBFC27701B(iParam0, "MPBitset", iVar0);
	}
}

void func_198(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("phantom2"):
		case joaat("dune5"):
			unk_0x9F0B86B670233A83(iParam0, 0);
			break;
	}
	func_199(iParam0);
}

void func_199(int iParam0)
{
	if (!Global_262145.f_4712)
	{
		unk_0xF977D20CFFFD341F(iParam0, 0);
	}
}

float func_200(int iParam0, int iParam1)
{
	if (Local_214.f_373.f_36 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_373.f_36);
		return StackVal;
	}
	switch (iParam1)
	{
		case joaat("insurgent3"):
			return 1f;
		
		default:
	}
	return 0.2f;
}

bool func_201(int iParam0, int iParam1)
{
	return func_200(iParam0, iParam1) != 1f;
}

int func_202(int iParam0)
{
	if (func_85(22))
	{
		return 1;
	}
	return 0;
}

void func_203(int iParam0, int iParam1)
{
	if (Local_197.f_356.f_1[iParam0 /*15*/].f_8 != -1)
	{
		unk_0xD133EF7430EDCD09(iParam1, Local_197.f_356.f_1[iParam0 /*15*/].f_8, Local_197.f_356.f_1[iParam0 /*15*/].f_8);
		unk_0xBB361D7264AC4FD8(iParam1, Local_197.f_356.f_1[iParam0 /*15*/].f_8, Local_197.f_356.f_1[iParam0 /*15*/].f_8);
	}
}

int func_204(var uParam0, int iParam1)
{
	struct<101> Var0;
	
	if (Local_214.f_373.f_44 != 0)
	{
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		Var0.f_78 = -1;
		Var0.f_79 = -1;
		Var0.f_96 = -1;
		Var0.f_97 = 1;
		Var0.f_99 = 132;
		Var0.f_100 = -1;
		Stack.Push(uParam0);
		Stack.Push(&Var0);
		Call_Loc(Local_214.f_373.f_44);
		if (StackVal)
		{
			func_205(iParam1, &Var0, 0, 1, 1);
			return 1;
		}
	}
	return 0;
}

void func_205(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if ((unk_0x76CD105BCAC6EB9F() && unk_0x1B1A446EFA398EB5(iParam0)) || !unk_0x76CD105BCAC6EB9F())
		{
			iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
			if (unk_0x259BE71D8A81D4FA() != func_74())
			{
				uParam1->f_100 = unk_0x259BE71D8A81D4FA();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_259(iParam0, uParam1, bParam2, bParam3);
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					unk_0x439C904840715871(iParam0, 1);
					unk_0x519F76A38952BBD0(iParam0, 0);
				}
				else if (uParam1->f_102 == 1)
				{
					unk_0x439C904840715871(iParam0, 0);
					unk_0x519F76A38952BBD0(iParam0, 0);
				}
				else if (uParam1->f_102 == 3)
				{
					unk_0x439C904840715871(iParam0, 1);
					unk_0x519F76A38952BBD0(iParam0, 1);
				}
			}
			if (func_258(unk_0x4B423FAA24E8ABF0(iParam0)))
			{
				if (uParam1->f_9[44] == 2)
				{
					unk_0xF5706A3E4A060916(iParam0, false, 1);
				}
				else
				{
					unk_0xF5706A3E4A060916(iParam0, true, 1);
				}
			}
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				unk_0x7BEAE55022AB21EB(iParam0, 1, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				unk_0x315A149C242011DE(iParam0, uParam1->f_79);
			}
			if (func_257(uParam1->f_66, &fVar1) && uParam1->f_80 != fVar1)
			{
				uParam1->f_80 = fVar1;
			}
			unk_0x4DC7FAAC148F9B2F(iParam0, uParam1->f_80);
			unk_0xC0C8E6AAA00F1A58(iParam0, uParam1->f_97);
			if (uParam1->f_99 >= 0)
			{
				unk_0x77B012A683295B6E(iParam0, uParam1->f_99);
			}
			if (func_256(iParam0))
			{
				func_250(iParam0, func_253(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (unk_0xCB19A1CF94809167(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				unk_0x5081B6C697A334D4(iParam0, uParam1->f_98);
			}
			if (BitTest(uParam1->f_95, 0))
			{
				func_221(iParam0, &(uParam1->f_81));
			}
			if ((!func_212(4) && !bParam4) && !unk_0x834C960822A4683F())
			{
				func_209(iParam0);
			}
			if (func_208(iVar0))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						unk_0xC87E4FAD00AEDD4B(iParam0, 16);
						break;
					
					case 1:
						unk_0xC87E4FAD00AEDD4B(iParam0, 16);
						if ((unk_0x2E6A27037F1DC473(iParam0, joaat("scarab")) || unk_0x2E6A27037F1DC473(iParam0, joaat("scarab2"))) || unk_0x2E6A27037F1DC473(iParam0, joaat("scarab3")))
						{
							unk_0x8450270DC5896D39(iParam0, 16, 0, false);
						}
						else
						{
							unk_0x8450270DC5896D39(iParam0, 16, 2, false);
						}
						break;
					
					case 2:
						unk_0xC87E4FAD00AEDD4B(iParam0, 16);
						if ((unk_0x2E6A27037F1DC473(iParam0, joaat("scarab")) || unk_0x2E6A27037F1DC473(iParam0, joaat("scarab2"))) || unk_0x2E6A27037F1DC473(iParam0, joaat("scarab3")))
						{
							unk_0x8450270DC5896D39(iParam0, 16, 1, false);
						}
						else
						{
							unk_0x8450270DC5896D39(iParam0, 16, 3, false);
						}
						break;
					
					case 3:
						unk_0xC87E4FAD00AEDD4B(iParam0, 16);
						if ((unk_0x2E6A27037F1DC473(iParam0, joaat("scarab")) || unk_0x2E6A27037F1DC473(iParam0, joaat("scarab2"))) || unk_0x2E6A27037F1DC473(iParam0, joaat("scarab3")))
						{
							unk_0x8450270DC5896D39(iParam0, 16, 2, false);
						}
						else
						{
							unk_0x8450270DC5896D39(iParam0, 16, 4, false);
						}
						break;
					
					default:
						if (uParam1->f_9[5] != -1)
						{
							unk_0xC87E4FAD00AEDD4B(iParam0, 16);
							if ((unk_0x2E6A27037F1DC473(iParam0, joaat("scarab")) || unk_0x2E6A27037F1DC473(iParam0, joaat("scarab2"))) || unk_0x2E6A27037F1DC473(iParam0, joaat("scarab3")))
							{
								unk_0x8450270DC5896D39(iParam0, 16, 2, false);
							}
							else
							{
								unk_0x8450270DC5896D39(iParam0, 16, 4, false);
							}
						}
						break;
					}
			}
			if (func_207(unk_0x4B423FAA24E8ABF0(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 1:
						unk_0xB57A96BF24464D21(iParam0, 0);
						unk_0xD05AF216D970F274(iParam0, 1);
						if (uParam1->f_9[16] == 5)
						{
							unk_0x271D0AA5ADF266EA(iParam0, (Global_262145.f_21747 + 0.05f));
						}
						else
						{
							unk_0x271D0AA5ADF266EA(iParam0, Global_262145.f_21747);
						}
						unk_0xA964B154E331B3E9(iParam0, 1);
						break;
					
					default:
						unk_0xB57A96BF24464D21(iParam0, 0);
						unk_0x271D0AA5ADF266EA(iParam0, 1f);
						unk_0xA964B154E331B3E9(iParam0, 1);
						break;
					}
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				
				case 1:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (BitTest(uParam1->f_95, 3))
						{
						}
					}
					else if (unk_0x77B62CAA5DF0922A("Player_Vehicle", 3))
					{
						unk_0xEE8559BBFC27701B(iParam0, "Player_Vehicle", -1);
					}
					break;
				
				case 2:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (unk_0x77B62CAA5DF0922A("Veh_Modded_By_Player", 3))
						{
							unk_0xEE8559BBFC27701B(iParam0, "Veh_Modded_By_Player", unk_0x3351FEF40EC734DB(unk_0x259BE71D8A81D4FA()));
						}
					}
					else if (unk_0x77B62CAA5DF0922A("Veh_Modded_By_Player", 3))
					{
						if (func_206(uParam1->f_81) && unk_0xBE0146369C46314B(&(uParam1->f_81)))
						{
							unk_0xEE8559BBFC27701B(iParam0, "Veh_Modded_By_Player", unk_0x3351FEF40EC734DB(unk_0xA34132DD5D4FE383(&(uParam1->f_81))));
						}
						else
						{
							unk_0xEE8559BBFC27701B(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				
				case 3:
					break;
				
				case 4:
					break;
				}
		}
	}
}

bool func_206(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xA8F635A578C0CE07(&uParam0, 13);
}

bool func_207(int iParam0)
{
	return func_258(iParam0);
}

int func_208(int iParam0)
{
	switch (iParam0)
	{
		case joaat("pounder2"):
		case joaat("mule4"):
		case joaat("speedo4"):
		case joaat("imperator"):
		case joaat("deathbike"):
		case joaat("cerberus"):
		case joaat("bruiser"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("issi4"):
		case joaat("imperator2"):
		case joaat("deathbike2"):
		case joaat("cerberus2"):
		case joaat("bruiser2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("issi5"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("cerberus3"):
		case joaat("bruiser3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("issi6"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			return 1;
			break;
	}
	return 0;
}

void func_209(int iParam0)
{
	struct<3> Var0;
	
	if (Global_262145.f_20156)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0))
		{
			if (unk_0xC8D49539708A80B4(iParam0))
			{
				Var0.f_0 = unk_0x4B423FAA24E8ABF0(iParam0);
				Var0.f_1 = unk_0x70E57E9927B6BA58(unk_0xCA7159F2C5FF745A(iParam0));
				if (unk_0x77B62CAA5DF0922A("RandomID", 3))
				{
					if (!unk_0xD130E7CDEE903624(iParam0, "RandomID"))
					{
						Var0.f_2 = unk_0xC5935DFB3F39785A(0, 65535);
						unk_0xEE8559BBFC27701B(iParam0, "RandomID", Var0.f_2);
					}
					else
					{
						Var0.f_2 = unk_0xE2F6FE9B61232165(iParam0, "RandomID");
					}
				}
				func_210(Var0);
			}
		}
	}
}

void func_210(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0.f_0 = -1745262668;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_2 = Param0.f_0;
	Var0.f_2.f_1 = Param0.f_1;
	Var0.f_2.f_2 = Param0.f_2;
	unk_0x01F0B819E78A18A1(1, &Var0, 5, func_211(1, 1));
}

int func_211(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(bVar1);
		if (func_9(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
				else if (!func_98(iVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_212(int iParam0)
{
	int iVar0;
	
	if (func_220())
	{
		iVar0 = 0;
		while (iVar0 < 60)
		{
			if (func_219(iVar0) == iParam0)
			{
				if (func_213(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_213(int iParam0)
{
	return func_214(iParam0, 6, 1);
}

int func_214(int iParam0, int iParam1, bool bParam2)
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
		if (func_218() == 0)
		{
			return BitTest(func_215(func_217(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113648.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_215(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805029[iParam0 /*3*/][func_216(iParam1)];
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_216(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_100();
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

int func_217(int iParam0)
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

int func_218()
{
	return Global_32163;
}

int func_219(int iParam0)
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

bool func_220()
{
	return Global_100733.f_388 > 0;
}

int func_221(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	if (!func_231(iParam0, uParam1))
	{
		return 1;
	}
	iVar0 = 0;
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		iVar0 = unk_0xCF9D3F0358793BA8(iParam0, 0);
	}
	if (iVar0 == 0)
	{
		if (!func_229(iParam0))
		{
			bVar1 = unk_0xA34132DD5D4FE383(uParam1);
			if (func_224(&iParam0, bVar1))
			{
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
	}
	else if (iVar0 >= 3)
	{
		return 1;
	}
	else if (func_222(iParam0))
	{
	}
	return 0;
}

int func_222(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		iVar0 = unk_0xCF9D3F0358793BA8(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (unk_0x76CD105BCAC6EB9F())
			{
				iVar1 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				iVar1 = unk_0x1DD05E817C89C737();
			}
			iVar2 = unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(iVar1, Global_1577913));
			iVar3 = 20000;
			if (Global_1836597)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				unk_0x932EFF1079425E72(iParam0);
				func_223(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_223(int iParam0)
{
	int iVar0;
	
	if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "MPBitset"))
			{
				iVar0 = unk_0xE2F6FE9B61232165(iParam0, "MPBitset");
			}
		}
	}
	if (!BitTest(iVar0, 16))
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 16);
		unk_0xEE8559BBFC27701B(iParam0, "MPBitset", iVar0);
	}
}

int func_224(int iParam0, bool bParam1)
{
	func_228();
	if (Global_1574632.f_18 != 0 || unk_0x38779AA6147A1831(*iParam0))
	{
		Global_1949998.f_11 = unk_0xF7553BA24C0AB0B2(*iParam0);
		if (Global_1949998.f_11 < 0f)
		{
			Global_1949998.f_11 = 0f;
		}
	}
	func_226(*iParam0, &Global_1949998, &(Global_1949998.f_1), &(Global_1949998.f_4), &(Global_1949998.f_7), &(Global_1949998.f_10));
	Global_1949998.f_1.f_2 = (Global_1949998.f_1.f_2 - Global_1949998.f_11);
	if (Global_1949998.f_4.f_2 < 0f)
	{
		Global_1949998.f_12 = 1;
	}
	Global_1949998.f_13 = 200;
	if (unk_0x4B423FAA24E8ABF0(*iParam0) == joaat("windsor") || unk_0x4B423FAA24E8ABF0(*iParam0) == joaat("comet4"))
	{
		Global_1949998.f_13 = 255;
	}
	if (Global_1949998.f_12)
	{
		if (func_225(iParam0, bParam1, Global_1949998, Global_1949998.f_1, Global_1949998.f_4, Global_1949998.f_7, Global_1949998.f_10, 0, Global_1949998.f_13))
		{
			if (unk_0x76CD105BCAC6EB9F())
			{
				Global_1577913 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				Global_1577913 = unk_0x1DD05E817C89C737();
			}
			return 1;
		}
	}
	else
	{
		Global_1949998.f_14 = { Global_1949998.f_1 };
		Global_1949998.f_14 = (Global_1949998.f_14 * -1f);
		Global_1949998.f_17 = { Global_1949998.f_4 };
		Global_1949998.f_17 = (Global_1949998.f_17 * -1f);
		Global_1949998.f_20 = { Global_1949998.f_7 };
		Global_1949998.f_20.f_1 = (Global_1949998.f_20.f_1 * -1f);
		Global_1949998.f_20.f_2 = (Global_1949998.f_20.f_2 * -1f);
		if (!unk_0x0BCE48C8677F9824(*iParam0, 0))
		{
			Global_1949998.f_23 = unk_0xCF9D3F0358793BA8(*iParam0, 0);
		}
		else
		{
			Global_1949998.f_23 = 3;
		}
		Global_1949998.f_24 = unk_0xCF9D3F0358793BA8(*iParam0, 1);
		if (!unk_0x0BCE48C8677F9824(*iParam0, 1))
		{
			Global_1949998.f_24 = unk_0xCF9D3F0358793BA8(*iParam0, 1);
		}
		else
		{
			Global_1949998.f_24 = 3;
		}
		if (((Global_1949998.f_23 == 0 && func_225(iParam0, bParam1, Global_1949998, Global_1949998.f_1, Global_1949998.f_4, Global_1949998.f_7, Global_1949998.f_10, 0, Global_1949998.f_13)) || Global_1949998.f_23 != 0) && ((Global_1949998.f_24 == 0 && func_225(iParam0, bParam1, Global_1949998, Global_1949998.f_14, Global_1949998.f_17, Global_1949998.f_20, Global_1949998.f_10, 1, Global_1949998.f_13)) || Global_1949998.f_24 != 0))
		{
			if (unk_0x76CD105BCAC6EB9F())
			{
				Global_1577913 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				Global_1577913 = unk_0x1DD05E817C89C737();
			}
			return 1;
		}
	}
	return 0;
}

bool func_225(var uParam0, bool bParam1, var uParam2, struct<3> Param3, struct<3> Param4, struct<3> Param5, var uParam6, int iParam7, var uParam8)
{
	return unk_0x6A808266C74B0678(*uParam0, unk_0x56E414973C2A8C0E(bParam1), uParam2, Param3, Param4, Param5, uParam6, iParam7, uParam8);
}

int func_226(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	*uParam1 = unk_0x365DC1E8054AF31A(iParam0, "chassis_dummy");
	if (((!func_227(Global_1950024, 0f, 0f, 0f, 0) && !func_227(Global_1950027, 0f, 0f, 0f, 0)) && !func_227(Global_1950030, 0f, 0f, 0f, 0)) && !Global_1950033 == 0f)
	{
		*uParam2 = { Global_1950024 };
		*uParam3 = { Global_1950027 };
		*uParam4 = { Global_1950030 };
		*uParam5 = Global_1950033;
		return 1;
	}
	switch (unk_0x4B423FAA24E8ABF0(iParam0))
	{
		case joaat("dominator"):
			*uParam1 = unk_0x365DC1E8054AF31A(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("feltzer2"):
			*uParam1 = unk_0x365DC1E8054AF31A(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("adder"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("akuma"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("asea"):
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("asterope"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bagger"):
			*uParam2 = { -1f, 0.16f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("baller"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller2"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("banshee"):
			*uParam2 = { 0f, 0.94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("bati"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("bati2"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("bfinjection"):
			*uParam2 = { -1f, 0.08f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bison"):
			*uParam2 = { 0f, 1.99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bjxl"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("blista"):
			*uParam2 = { 0f, 1.49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("bobcatxl"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.65f;
			break;
		
		case joaat("bodhi2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buccaneer"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("buffalo"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buffalo2"):
			*uParam2 = { 0f, 2.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("bullet"):
			*uParam2 = { -1.57f, 0.07f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("carbonrs"):
			*uParam2 = { 0f, 0.09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("carbonizzare"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, -0.11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cavalcade"):
			*uParam2 = { 0f, 1.51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("cavalcade2"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cheetah"):
			*uParam2 = { -1.61f, 0.26f, 0.17f };
			*uParam3 = { 0.9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("cogcabrio"):
			*uParam2 = { 0f, 1.42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("comet2"):
			*uParam2 = { 0f, 1.35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("coquette"):
			*uParam2 = { 0f, 0.96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case joaat("daemon"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("dilettante"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dloader"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("double"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("dubsta"):
			*uParam2 = { -1.71f, 0.31f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dubsta2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.75f;
			break;
		
		case joaat("elegy2"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("emperor"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("emperor2"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("entityxf"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("exemplar"):
			*uParam2 = { 0f, 1.32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("f620"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("faggio2"):
			*uParam2 = { -1f, -0.48f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("felon"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("felon2"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fq2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("fugitive"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("fusilade"):
			*uParam2 = { 0f, 0.98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("futo"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("gauntlet"):
			*uParam2 = { 0f, 1.735f, 1.05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("granger"):
			*uParam2 = { 0f, 2.07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("gresley"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("habanero"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("hexer"):
			*uParam2 = { 0f, -0.46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.14f;
			break;
		
		case joaat("hotknife"):
			*uParam2 = { -1.43f, -0.14f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("infernus"):
			*uParam2 = { -1f, 0.33f, 0.08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("ingot"):
			*uParam2 = { 0f, 1.58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("intruder"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("issi2"):
			*uParam2 = { 0f, 1.21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jackal"):
			*uParam2 = { 0f, 1.36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("jb700"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("khamelion"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.475f;
			break;
		
		case joaat("landstalker"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("manana"):
			*uParam2 = { 0f, 0.86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("mesa"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("mesa3"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("minivan"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("monroe"):
			*uParam2 = { 0f, 1.23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case joaat("nemesis"):
			*uParam2 = { 0f, 0.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("ninef"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ninef2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("oracle"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("oracle2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("patriot"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("pcj"):
			*uParam2 = { 0f, 0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("penumbra"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("peyote"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("phoenix"):
			*uParam2 = { 0f, 1.833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.44f;
			break;
		
		case joaat("picador"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.425f;
			break;
		
		case joaat("prairie"):
			*uParam2 = { 0f, 1.41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		
		case joaat("premier"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("primo"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("radi"):
			*uParam2 = { 0f, 1.74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rancherxl"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rapidgt"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rapidgt2"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ratloader"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("rebel"):
			*uParam2 = { -1.22f, 0.6f, 0.44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rebel2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("regina"):
			*uParam2 = { 0f, 1.473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rocoto"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("romero"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ruffian"):
			*uParam2 = { 0f, -0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
		
		case joaat("ruiner"):
			*uParam2 = { 0f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sabregt"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("sadler"):
			*uParam2 = { 0f, 2.26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sandking"):
			*uParam2 = { 0f, 2.496f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sandking2"):
			*uParam2 = { 0f, 2.286f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("schafter2"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schwarzer"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("seminole"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sentinel"):
			*uParam2 = { 0f, 1.18f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sentinel2"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("serrano"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.49f;
			break;
		
		case joaat("stanier"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("stinger"):
			*uParam2 = { 0f, 1.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("stingergt"):
			*uParam2 = { -1f, -0.17f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("stratum"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sultan"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("superd"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("surano"):
			*uParam2 = { 0f, 1.38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("surfer"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		
		case joaat("surfer2"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		
		case joaat("surge"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tailgater"):
			*uParam2 = { 0f, 1.783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tornado"):
			*uParam2 = { -1.23f, 0.11f, -0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tornado2"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tornado3"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("vacca"):
			*uParam2 = { 0f, 1.76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("vader"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("vigero"):
			*uParam2 = { -1f, 0.11f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("voltic"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("voodoo2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("washington"):
			*uParam2 = { 0f, 1.61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("youga"):
			*uParam2 = { 0f, 2.352f, 1.003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("zion"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zion2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("ztype"):
			*uParam2 = { -0.96f, -0.69f, 0.35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		default:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*uParam5 = 0.5f;
			break;
	}
	switch (unk_0x4B423FAA24E8ABF0(iParam0))
	{
		case joaat("kalahari"):
			*uParam2 = { -1f, 0.18f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("paradise"):
			*uParam2 = { 0f, 2.23f, 1f };
			*uParam3 = { 0f, -0.22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("alpha"):
			*uParam2 = { -1f, 0.18f, -0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("huntley"):
			*uParam2 = { 0f, 1.52f, 0.99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("zentorno"):
			*uParam2 = { -1.24f, 0.3f, -0.07f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jester"):
			*uParam2 = { -1f, 0.17f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.05f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("massacro"):
			*uParam2 = { 0f, 1.37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("turismor"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("thrust"):
			*uParam2 = { -1f, 0.405f, 0.4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		
		case joaat("btype"):
			*uParam2 = { 0f, 1.143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.7125f;
			break;
		
		case joaat("rhapsody"):
			*uParam2 = { -1f, -0.47f, -0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2625f;
			break;
		
		case joaat("glendale"):
			*uParam2 = { 0f, 1.683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("warrener"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("blade"):
			*uParam2 = { -1f, 0.445f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.325f;
			break;
		
		case joaat("panto"):
			*uParam2 = { -1f, 0f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dubsta3"):
			*uParam2 = { -1f, 0.34f, 0.2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("pigalle"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("coquette2"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("innovation"):
			*uParam2 = { 0f, 0.15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("hakuchou"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.16f;
			break;
		
		case joaat("furoregt"):
			*uParam2 = { -1f, 0f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("ratloader2"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("slamvan"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dukes2"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("dukes"):
			*uParam2 = { -1f, 0f, 0.0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3875f;
			break;
		
		case joaat("stalion"):
			*uParam2 = { -1f, 0f, 0.0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4375f;
			break;
		
		case joaat("blista2"):
			*uParam2 = { -1f, 0.5325f, 0.245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2875f;
			break;
		
		case joaat("casco"):
			*uParam2 = { 0f, 0.94f, 1.03f };
			*uParam3 = { 0f, -0.03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("enduro"):
			*uParam2 = { 0f, -0.17f, 1f };
			*uParam3 = { 0f, 0.34f, -0.786f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("gburrito2"):
			*uParam2 = { 0f, 2.32f, 0.94f };
			*uParam3 = { 0f, -0.182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("guardian"):
			*uParam2 = { -1.94f, 1.07f, 0.38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("kuruma"):
		case joaat("kuruma2"):
			*uParam2 = { -1f, 0.2475f, -0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.435f;
			break;
		
		case joaat("lectro"):
			*uParam2 = { 0f, 0.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("feltzer3"):
			*uParam1 = unk_0x365DC1E8054AF31A(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.597f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("osiris"):
			*uParam2 = { -1f, 0.27f, -0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("virgo"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("windsor"):
			*uParam2 = { -1.2f, -0.39f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("brawler"):
			*uParam2 = { -1f, -0.21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("chino"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("coquette3"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("t20"):
			*uParam2 = { -1f, 0.4f, -0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("vindicator"):
			*uParam2 = { -1f, 0.21f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("faction"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("faction2"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buccaneer2"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("chino2"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("moonbeam"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("moonbeam2"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("primo2"):
			*uParam2 = { -1f, 0.42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("voodoo"):
			*uParam2 = { -1.12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("faction3"):
			*uParam2 = { -1f, 0f, 0.5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sabregt2"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("tornado5"):
			*uParam2 = { -1f, 0.15f, -0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("virgo2"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("virgo3"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("minivan2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan3"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("btype2"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("lurcher"):
			*uParam2 = { -1f, 0f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("baller3"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller4"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller5"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller6"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cog55"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cog552"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cognoscenti"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cognoscenti2"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("mamba"):
			*uParam2 = { -1f, -0.18f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("nightshade"):
			*uParam2 = { -1f, -0.2f, 0.17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("schafter3"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter4"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter5"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter6"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("verlierer2"):
			*uParam2 = { -1f, -0.21f, 0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tampa"):
			*uParam2 = { -1f, 0f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("banshee2"):
			*uParam2 = { -1f, -0.4f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sultanrs"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("btype3"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bestiagts"):
			*uParam2 = { -1f, -0.06f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("seven70"):
			*uParam2 = { -1f, -0.21f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fmj"):
			*uParam2 = { -1f, -0.06f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("pfister811"):
			*uParam2 = { -1f, 0.06f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("prototipo"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("reaper"):
			*uParam2 = { -1f, 0.48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("rumpo3"):
			*uParam2 = { 0f, 2.103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("windsor2"):
			*uParam2 = { -1.2f, 0.03f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("xls"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("xls2"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("brioso"):
			*uParam2 = { -1f, -0.06f, 0.565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("contender"):
			*uParam2 = { 0f, 2.33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("le7b"):
			*uParam2 = { -1f, -0.12f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("omnis"):
			*uParam2 = { -1f, 0.03f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("tropos"):
			*uParam2 = { -1f, 0f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("avarus"):
			*uParam2 = { -1f, 0.27f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("daemon2"):
			*uParam2 = { -1f, 0.27f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("defiler"):
			*uParam2 = { -1f, 0f, 0.34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.125f;
			break;
		
		case joaat("esskey"):
			*uParam2 = { -1f, 0.335f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("hakuchou2"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("nightblade"):
			*uParam2 = { 0f, -0.133f, 0.61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.125f;
			break;
		
		case joaat("ratbike"):
			*uParam2 = { -1f, 0.31f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("shotaro"):
			*uParam2 = { -1f, 0.06f, 0.325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("zombiea"):
			*uParam2 = { -1f, 0.3f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("zombieb"):
			*uParam2 = { -1f, 0.2f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("vortex"):
			*uParam2 = { -1f, 0.18f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.095f;
			break;
		
		case joaat("tornado6"):
			*uParam2 = { -1f, -0.03f, -0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("youga2"):
			*uParam2 = { 0f, 2.352f, 0.253f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("wolfsbane"):
			*uParam2 = { -1f, 0.33f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("faggio3"):
			*uParam2 = { -1f, -0.54f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("faggio"):
			*uParam2 = { -0.9875f, -0.0175f, -0.01f };
			*uParam3 = { 0.8975f, -0.26f, -0.0725f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		
		case joaat("comet3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("diablous"):
			*uParam2 = { -1f, 0.006f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("diablous2"):
			*uParam2 = { -1f, 0.225f, 0.541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("elegy"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fcr"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("fcr2"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("italigtb"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("italigtb2"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("nero"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("nero2"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("penetrator"):
			*uParam2 = { -1f, 0.153f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("ruiner2"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("ruiner3"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("specter"):
			*uParam2 = { -1f, -0.273f, -0.02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("specter2"):
			*uParam2 = { -1f, -0.273f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("technical2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tempesta"):
			*uParam2 = { -1f, 0f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("voltic2"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("infernus2"):
			*uParam2 = { -1f, 0.33f, 0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("ruston"):
			*uParam2 = { -1f, -0.273f, 0.084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("turismo2"):
			*uParam2 = { -1f, 0.159f, -0.193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("ardent"):
			*uParam2 = { -1f, 0.309f, 0.276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("cheetah2"):
			*uParam2 = { -1f, 0.159f, -0.127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("halftrack"):
			*uParam2 = { -1f, 0.501f, 0.531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("nightshark"):
			*uParam2 = { -1.5f, 0.42f, 0.584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("oppressor"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		
		case joaat("tampa3"):
			*uParam2 = { 0f, 1.515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.275f;
			break;
		
		case joaat("technical3"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case joaat("torero"):
			*uParam2 = { -1f, 0.201f, 0.114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("vagner"):
			*uParam2 = { -1.5f, 0.906f, 0.071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("xa21"):
			*uParam2 = { -1f, 0.441f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("phantom3"):
			*uParam2 = { -1.3f, 2.045f, 0.802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("hauler2"):
			*uParam2 = { -1.627f, 2.456f, 0.745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cyclone"):
			*uParam2 = { -1f, 0.186f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("visione"):
			*uParam2 = { -1f, 0.432f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("vigilante"):
			*uParam2 = { -1f, 0.232f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("retinue"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("rapidgt3"):
			*uParam2 = { 0f, 1.972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("avenger"):
			*uParam2 = { -2.02f, 6.45f, -0.716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("deluxo"):
			*uParam2 = { -1f, -0.291f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("stromberg"):
			*uParam2 = { -1f, 0.23f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("riot2"):
			*uParam2 = { -1.891f, 2.144f, 0.657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("chernobog"):
			*uParam2 = { -2.127f, 5.413f, 1.132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.34f;
			break;
		
		case joaat("khanjali"):
			*uParam2 = { -0.897f, 1.391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("barrage"):
			*uParam2 = { -1.51f, 0.71f, 0.451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("comet4"):
			*uParam2 = { -1f, 0.298f, 0.257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.36f;
			break;
		
		case joaat("neon"):
			*uParam2 = { -1f, 0.181f, -0.066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("streiter"):
			*uParam2 = { -1f, 0.301f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sentinel3"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("yosemite"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("sc1"):
			*uParam2 = { -1f, 0.616f, -0.131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("autarch"):
			*uParam2 = { -1f, 0f, 0.116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("gt500"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("hustler"):
			*uParam2 = { -1f, -0.228f, 0.321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("revolter"):
			*uParam2 = { -1f, 0.203f, 0.126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("pariah"):
			*uParam2 = { -1f, -0.126f, 0.208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("raiden"):
			*uParam2 = { -1f, 0.252f, -0.095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("savestra"):
			*uParam2 = { -1f, 0f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("riata"):
			*uParam2 = { -1.3f, 0.18f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("hermes"):
			*uParam2 = { -1f, -0.134f, 0.158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("comet5"):
			*uParam2 = { -1f, 0.002f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("z190"):
			*uParam2 = { -1f, -0.175f, 0.242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("viseris"):
			*uParam2 = { -1f, 0f, 0.244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.275f;
			break;
		
		case joaat("kamacho"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	}
	switch (unk_0x4B423FAA24E8ABF0(iParam0))
	{
		case joaat("gb200"):
			*uParam2 = { -1f, 0f, 0.407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.225f;
			break;
		
		case joaat("fagaloa"):
			*uParam2 = { -1f, 0f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("ellie"):
			*uParam2 = { -1f, 0.441f, -0.128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("issi3"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("michelli"):
			*uParam2 = { -1f, 0f, 0.0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("flashgt"):
			*uParam2 = { 0f, 1.592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("hotring"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tezeract"):
			*uParam2 = { -1f, 0.679f, 0.514f };
			*uParam3 = { 1f, 0f, -0.75f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("tyrant"):
			*uParam2 = { -1.588f, 0.315f, 0.337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("dominator3"):
			*uParam2 = { -1f, 0f, 0.221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("taipan"):
			*uParam2 = { -1f, 0f, 0.219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("entity2"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jester3"):
			*uParam2 = { -1f, 0f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("cheburek"):
			*uParam2 = { -1f, 0.393f, 0.162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("caracara"):
			*uParam2 = { -1f, 1.266f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("speedo4"):
			*uParam2 = { -1.5f, 0.833f, 0.391f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("mule4"):
			*uParam2 = { -1.125f, 2.691f, 0.318f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("pounder2"):
			*uParam2 = { -1.5f, 1.853f, 0.779f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.38f;
			break;
		
		case joaat("swinger"):
			*uParam2 = { -1f, 0.195f, 0.105f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("menacer"):
			*uParam2 = { -1.73f, 0.159f, 0.61f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("scramjet"):
			*uParam2 = { -1f, -0.188f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("patriot2"):
			*uParam2 = { -1.213f, 1.546f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("stafford"):
			*uParam2 = { -1f, 0.036f, 0.096f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("freecrawler"):
			*uParam2 = { -1f, 0.249f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("oppressor2"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		
		case joaat("terbyte"):
			*uParam2 = { -1.73f, 3.397f, 0.724f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("bruiser"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("bruiser2"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("bruiser3"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("brutus"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("brutus2"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("brutus3"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("cerberus"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cerberus2"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cerberus3"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("clique"):
			*uParam2 = { -1f, 0.167f, 0.159f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("deveste"):
			*uParam2 = { -1.5f, 1.066f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("deviant"):
			*uParam2 = { -1f, 0.111f, 0.123f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("dominator4"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("dominator5"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("dominator6"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("impaler"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("impaler2"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("impaler3"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("impaler4"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("imperator"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("imperator2"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("imperator3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("issi4"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("issi5"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("issi6"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("italigto"):
			*uParam2 = { -1f, -0.091f, 0.207f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("monster3"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("monster4"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("monster5"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("schlagen"):
			*uParam2 = { -1f, -0.105f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("slamvan4"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan5"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan6"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("toros"):
			*uParam2 = { -1f, 0.415f, 0.394f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tulip"):
			*uParam2 = { -1f, 0.171f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("vamos"):
			*uParam2 = { -1f, 0f, 0.163f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("zr380"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zr3802"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zr3803"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("caracara2"):
			*uParam2 = { -1f, 0.687f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("drafter"):
			*uParam2 = { -1.045f, 0.15f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("dynasty"):
			*uParam2 = { -1f, 0.12f, 0.334f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("emerus"):
			*uParam2 = { -1f, 0.372f, 0.439f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("gauntlet3"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("gauntlet4"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("hellion"):
			*uParam2 = { -1f, 0.27f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("issi7"):
			*uParam2 = { -1f, 0.195f, -0.063f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("jugular"):
			*uParam2 = { -1f, 0.213f, 0.213f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("krieger"):
			*uParam2 = { -1f, 0.576f, -0.123f };
			*uParam3 = { 0.997f, -0.105f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("locust"):
			*uParam2 = { -1f, -0.207f, 0.042f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("nebula"):
			*uParam2 = { -1f, 0.012f, 0.147f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("neo"):
			*uParam2 = { -1f, 0.216f, 0.216f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("novak"):
			*uParam2 = { -1f, 0.24f, 0.255f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("paragon"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("paragon2"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("peyote2"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("s80"):
			*uParam2 = { -1f, 0.357f, 0.256f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("thrax"):
			*uParam2 = { -1f, 0.426f, 0.339f };
			*uParam3 = { 1f, 0.06f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("zion3"):
			*uParam2 = { -1f, 0.108f, 0.234f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("zorrusso"):
			*uParam2 = { -1f, 0.273f, -0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("slamvan2"):
			*uParam2 = { -1f, 0.35f, 0.456f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("rebla"):
			*uParam2 = { 0f, 1.9002f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("asbo"):
			*uParam2 = { -1f, 0.104f, 0.339f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("sugoi"):
			*uParam2 = { -1f, 0.104f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("komoda"):
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("vstr"):
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sultan2"):
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("kanjo"):
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("jb7002"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("yosemite2"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("retinue2"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("furia"):
			*uParam2 = { -1f, 0.0965f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("everon"):
			*uParam2 = { 0f, 2.019f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("imorgon"):
			*uParam2 = { -1.5f, 0.42f, -0.2f };
			*uParam3 = { 1f, -0.0997f, 0.0415f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zhaba"):
			*uParam2 = { -1.202f, 0.034f, 0.6635f };
			*uParam3 = { 1f, -0.002f, 0f };
			*uParam4 = { 0f, -0.7398f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("gauntlet5"):
			*uParam2 = { -1.5f, 0.379f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.24f;
			break;
		
		case joaat("dukes3"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("manana2"):
			*uParam2 = { -1.76f, 0.105f, 0.009f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case joaat("club"):
			*uParam2 = { 0f, 1.252f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		
		case joaat("glendale2"):
			*uParam2 = { 0f, 2.135f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.205f;
			break;
		
		case joaat("youga3"):
			*uParam2 = { 0f, 2.352f, 0.3f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.135f;
			break;
		
		case joaat("yosemite3"):
			*uParam2 = { -1f, 0.252f, 0.203f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.21f;
			break;
		
		case joaat("seminole2"):
			*uParam2 = { 0f, 1.654f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("penumbra2"):
			*uParam2 = { -1.08f, 0.28f, -0.093f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("landstalker2"):
			*uParam2 = { -1.64f, 0.7f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("coquette4"):
			*uParam2 = { -1f, -0.021f, 0.273f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("tigon"):
			*uParam2 = { -1f, 0.156f, 0.099f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("peyote3"):
			*uParam2 = { -1.5f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("brioso2"):
			*uParam2 = { -1f, 0.275f, 0.215f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("slamtruck"):
			*uParam2 = { -1f, 1.454f, 0.485f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("italirsx"):
			*uParam2 = { -1f, 0.109f, 0.129f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("toreador"):
			*uParam2 = { -1f, 0.194f, 0.342f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("weevil"):
			*uParam2 = { -1f, 0.111f, 0.168f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("zr350"):
			*uParam2 = { 0f, 1.632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
		
		case joaat("calico"):
			*uParam2 = { -1f, 0.497f, 0.212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jester4"):
			*uParam2 = { -1f, 0f, 0.181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("comet6"):
			*uParam2 = { -1f, 0.205f, 0.074f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("warrener2"):
			*uParam2 = { -1f, 0.408f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("remus"):
			*uParam2 = { -1f, 0.204f, 0.357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("vectre"):
			*uParam2 = { -1f, 0.249f, 0.164f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("dominator7"):
			*uParam2 = { -1f, 0.253f, 0.142f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("cypher"):
			*uParam2 = { -1f, 0.223f, 0.185f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("rt3000"):
			*uParam2 = { -1f, 0f, 0.189f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("sultan3"):
			*uParam2 = { -1f, 0.42f, 0.309f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.23f;
			break;
		
		case joaat("tailgater2"):
			*uParam2 = { -1f, 0.337f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("previon"):
			*uParam2 = { -1f, 0.14f, -0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("dominator8"):
			*uParam2 = { -1f, 0.153f, -0.006f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("futo2"):
			*uParam2 = { -1f, 0.318f, -0.013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("euros"):
			*uParam2 = { -1f, 0.101f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("growler"):
			*uParam2 = { -1f, 0.151f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("cinquemila"):
			*uParam2 = { -1f, 0.533f, 0.197f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("champion"):
			*uParam2 = { -1f, 0.076f, 0.122f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("granger2"):
			*uParam2 = { -1f, 0.461f, 0.264f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("deity"):
			*uParam2 = { -1f, 0.279f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("buffalo4"):
			*uParam2 = { -1f, 0.251f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("baller7"):
			*uParam2 = { -1.194f, 0.182f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("zeno"):
			*uParam2 = { -1.194f, 0.409f, 0.199f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case joaat("comet7"):
			*uParam2 = { -1f, 0.05f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("astron"):
			*uParam2 = { -1f, 0.249f, 0.39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("patriot3"):
			*uParam2 = { -1.2f, 0.474f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.23f;
			break;
		
		case joaat("jubilee"):
			*uParam2 = { -1.037f, 0.438f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("shinobi"):
			*uParam2 = { 0f, 0.306f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.045f;
			break;
		
		case joaat("reever"):
			*uParam2 = { -1f, 0.292f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("iwagen"):
			*uParam2 = { -1f, 0.387f, 0.209f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("brioso3"):
			*uParam2 = { -1f, 0.15f, 0.2f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("corsita"):
			*uParam2 = { -1f, 0.1f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("greenwood"):
			*uParam2 = { -1f, 0.2f, 0.138f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("kanjosj"):
			*uParam2 = { -1f, 0.1f, 0.26f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("postlude"):
			*uParam2 = { -1f, 0f, 0.28f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("rhinehart"):
			*uParam2 = { 0f, 1.317f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("tenf"):
			*uParam2 = { -1f, 0.74f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("tenf2"):
			*uParam2 = { -1f, 0.74f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("torero2"):
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("vigero2"):
			*uParam2 = { -1f, -0.07f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("weevil2"):
			*uParam2 = { -1f, 0.07f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("draugur"):
			*uParam2 = { -1f, 0.5f, 0.48f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("ruiner4"):
			*uParam2 = { -1f, 0.5f, 0.182f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("sentinel4"):
			*uParam2 = { -1f, 0.147f, 0.239f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sm722"):
			*uParam2 = { -1f, -0.4f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("omnisegt"):
			*uParam2 = { 0f, 1.462f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("powersurge"):
			*uParam2 = { -1f, 0.3f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("entity3"):
			*uParam2 = { -1f, 0.5f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("manchez3"):
			*uParam2 = { -1f, 0.066f, 0.329f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("surfer3"):
			*uParam2 = { -1f, 1.19f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("boor"):
			*uParam2 = { -1f, 0.25f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("eudora"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.7f;
			break;
		
		case joaat("tulip2"):
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("r300"):
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("virtue"):
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("issi8"):
			*uParam2 = { -1f, 0.3f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("broadway"):
			*uParam2 = { -1f, -0.4f, 0.375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("panthere"):
			*uParam2 = { -1f, 0.069f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("tahoma"):
			*uParam2 = { -1f, -0.253f, 0.39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("everon2"):
			*uParam2 = { -1f, 0.101f, 0.227f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.6f;
			break;
	}
	return 1;
}

bool func_227(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_228()
{
	Global_1949998 = 0;
	Global_1949998.f_1 = { 0f, 0f, 0f };
	Global_1949998.f_4 = { 0f, 0f, 0f };
	Global_1949998.f_7 = { 0f, 0f, 0f };
	Global_1949998.f_10 = 0f;
	Global_1949998.f_11 = 0f;
	Global_1949998.f_12 = 0;
	Global_1949998.f_13 = 0;
	Global_1949998.f_14 = { 0f, 0f, 0f };
	Global_1949998.f_17 = { 0f, 0f, 0f };
	Global_1949998.f_20 = { 0f, 0f, 0f };
	Global_1949998.f_23 = 0;
	Global_1949998.f_24 = 0;
}

int func_229(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0x0BCE48C8677F9824(iParam0, 0) || func_230(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_230(int iParam0)
{
	int iVar0;
	
	if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "MPBitset"))
			{
				iVar0 = unk_0xE2F6FE9B61232165(iParam0, "MPBitset");
				return BitTest(iVar0, 16);
			}
		}
	}
	return 0;
}

int func_231(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (unk_0xA8F635A578C0CE07(uParam1, 13) && unk_0xBE0146369C46314B(uParam1))
	{
		bVar0 = unk_0xA34132DD5D4FE383(uParam1);
	}
	else
	{
		bVar0 = func_74();
	}
	bVar1 = false;
	if (bVar0 == unk_0x259BE71D8A81D4FA())
	{
		if (func_242(15, 0))
		{
			bVar1 = true;
		}
		else if (func_238(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((((((!(unk_0xFC8BFE4B41177C22(iParam0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0)) || !unk_0x1B1A446EFA398EB5(iParam0)) || !unk_0x8FF2665359043205(0, -1, 1)) || !((unk_0xA8F635A578C0CE07(uParam1, 13) && unk_0x7260716F2E4D7661()) && unk_0xE582BF3EDDBB1A68(uParam1))) || bVar0 == func_74()) || !func_9(bVar0, 0, 0)) || !bVar1) || func_232(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_232(int iParam0)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return 1;
	}
	if (func_234(unk_0x259BE71D8A81D4FA()) == 3)
	{
		if (func_233(iParam0) != -1)
		{
			return 1;
		}
	}
	if (Global_1950023)
	{
		return 1;
	}
	switch (unk_0x4B423FAA24E8ABF0(iParam0))
	{
		case joaat("sanchez"):
		case joaat("sanchez2"):
		case joaat("blazer"):
		case joaat("blazer3"):
		case joaat("surfer"):
		case joaat("surfer2"):
		case joaat("bifta"):
		case joaat("sovereign"):
		case joaat("hexer"):
		case joaat("dune"):
		case joaat("dune2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("blista3"):
		case joaat("stalion2"):
		case joaat("gauntlet2"):
		case joaat("dominator2"):
		case joaat("buffalo3"):
		case joaat("massacro2"):
		case joaat("jester2"):
		case joaat("omnis"):
		case joaat("bf400"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("le7b"):
		case joaat("tyrus"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("chimera"):
		case joaat("sanctus"):
		case joaat("blazer4"):
		case joaat("manchez"):
		case joaat("raptor"):
		case joaat("blazer5"):
		case joaat("stryder"):
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("manchez2"):
		case joaat("squaddie"):
		case joaat("winky"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("verus"):
		case joaat("lm87"):
			return 1;
			break;
		
		case joaat("youga"):
		case joaat("youga2"):
			if (unk_0x94C9CD3D66808551(iParam0, 7) != -1)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
			if (unk_0x94C9CD3D66808551(iParam0, 5) == 1)
			{
				return 1;
			}
			break;
		
		case joaat("gp1"):
			return 1;
			break;
		
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("phantom3"):
		case joaat("hauler2"):
			return 1;
			break;
		
		case joaat("thruster"):
			return 1;
			break;
		
		case joaat("terbyte"):
			return 1;
			break;
		
		case joaat("rcbandito"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("rrocket"):
		case joaat("blazer2"):
		case joaat("burrito2"):
		case joaat("ignus"):
		case joaat("draugur"):
		case joaat("brickade2"):
		case joaat("journey2"):
			return 1;
			break;
		
		case joaat("club"):
			if ((unk_0x94C9CD3D66808551(iParam0, 7) == 0 || unk_0x94C9CD3D66808551(iParam0, 7) == 1) || unk_0x94C9CD3D66808551(iParam0, 7) == 7)
			{
				return 1;
			}
			break;
		
		case joaat("yosemite3"):
			if ((unk_0x94C9CD3D66808551(iParam0, 45) == 4 || unk_0x94C9CD3D66808551(iParam0, 45) == 5) || unk_0x94C9CD3D66808551(iParam0, 45) == 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_233(int iParam0)
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

int func_234(bool bParam0)
{
	if (func_237(bParam0) == 233)
	{
		return func_235(bParam0);
	}
	return -1;
}

int func_235(bool bParam0)
{
	if (func_236(bParam0, 0))
	{
		return Global_1894573[bParam0 /*608*/].f_10.f_182;
	}
	return -1;
}

int func_236(bool bParam0, int iParam1)
{
	if (Global_1894573[bParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[bParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_237(bool bParam0)
{
	if (func_236(bParam0, 0))
	{
		return Global_1894573[bParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

bool func_238(bool bParam0)
{
	return func_239(unk_0x259BE71D8A81D4FA(), bParam0);
}

int func_239(bool bParam0, bool bParam1)
{
	return func_240(bParam0, bParam1, 1);
}

int func_240(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_74())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_241(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1894573[iParam0 /*608*/].f_10;
	if (iVar0 != func_74() && Global_1894573[iVar0 /*608*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_241(bool bParam0, int iParam1)
{
	if (bParam0 != func_74())
	{
		if (Global_1894573[bParam0 /*608*/].f_10 != func_74())
		{
			if (Global_1894573[bParam0 /*608*/].f_10 == bParam0 && Global_1894573[bParam0 /*608*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_242(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	if (bParam1)
	{
		if (iParam0 == 15)
		{
			return 1;
		}
	}
	if (func_247(unk_0x259BE71D8A81D4FA()))
	{
		switch (iParam0)
		{
			case 4:
			case 5:
			case 12:
			case 15:
				return 1;
				break;
			}
	}
	uVar0 = func_244(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_243(iVar1));
}

int func_243(int iParam0)
{
	return (iParam0 % 32);
}

int func_244(int iParam0)
{
	int iVar0;
	
	iVar0 = func_215(func_245(iParam0), -1, 0);
	return iVar0;
}

int func_245(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_246(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1291;
			break;
	}
	return 1291;
}

int func_246(int iParam0)
{
	return (iParam0 / 32);
}

int func_247(bool bParam0)
{
	if (bParam0 != func_74())
	{
		if (func_248(bParam0) && Global_2657589[bParam0 /*466*/].f_321.f_10 == bParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_248(int iParam0)
{
	if (iParam0 != func_74())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_249(Global_2657589[iParam0 /*466*/].f_321.f_7) == 22;
			}
		}
	}
	return 0;
}

int func_249(int iParam0)
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

void func_250(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_252(iParam1);
	func_251(iVar1, &uVar0);
	unk_0x77B012A683295B6E(iParam0, uVar0);
}

bool func_251(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 4;
			break;
		
		case 1:
			*uParam1 = 5;
			break;
		
		case 2:
			*uParam1 = 6;
			break;
		
		case 3:
			*uParam1 = 7;
			break;
		
		case 4:
			*uParam1 = 111;
			break;
		
		case 5:
			*uParam1 = 112;
			break;
		
		case 6:
			*uParam1 = 107;
			break;
		
		case 7:
			*uParam1 = 104;
			break;
		
		case 8:
			*uParam1 = 98;
			break;
		
		case 9:
			*uParam1 = 100;
			break;
		
		case 10:
			*uParam1 = 102;
			break;
		
		case 11:
			*uParam1 = 99;
			break;
		
		case 12:
			*uParam1 = 105;
			break;
		
		case 13:
			*uParam1 = 106;
			break;
		
		case 14:
			*uParam1 = 37;
			break;
		
		case 15:
			*uParam1 = 90;
			break;
		
		case 16:
			*uParam1 = 88;
			break;
		
		case 17:
			*uParam1 = 89;
			break;
		
		case 18:
			*uParam1 = 91;
			break;
		
		case 19:
			*uParam1 = 38;
			break;
		
		case 20:
			*uParam1 = 138;
			break;
		
		case 21:
			*uParam1 = 36;
			break;
		
		case 22:
			*uParam1 = 27;
			break;
		
		case 23:
			*uParam1 = 28;
			break;
		
		case 24:
			*uParam1 = 29;
			break;
		
		case 25:
			*uParam1 = 150;
			break;
		
		case 26:
			*uParam1 = 30;
			break;
		
		case 27:
			*uParam1 = 31;
			break;
		
		case 28:
			*uParam1 = 32;
			break;
		
		case 29:
			*uParam1 = 35;
			break;
		
		case 30:
			*uParam1 = 135;
			break;
		
		case 31:
			*uParam1 = 137;
			break;
		
		case 32:
			*uParam1 = 136;
			break;
		
		case 33:
			*uParam1 = 71;
			break;
		
		case 34:
			*uParam1 = 145;
			break;
		
		case 35:
			*uParam1 = 63;
			break;
		
		case 36:
			*uParam1 = 64;
			break;
		
		case 37:
			*uParam1 = 65;
			break;
		
		case 38:
			*uParam1 = 66;
			break;
		
		case 39:
			*uParam1 = 67;
			break;
		
		case 40:
			*uParam1 = 68;
			break;
		
		case 41:
			*uParam1 = 69;
			break;
		
		case 42:
			*uParam1 = 73;
			break;
		
		case 43:
			*uParam1 = 70;
			break;
		
		case 44:
			*uParam1 = 74;
			break;
		
		case 45:
			*uParam1 = 51;
			break;
		
		case 46:
			*uParam1 = 53;
			break;
		
		case 47:
			*uParam1 = 54;
			break;
		
		case 48:
			*uParam1 = 92;
			break;
	}
	return *uParam1 != -1;
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 36;
		
		case 2:
			return 35;
		
		case 3:
			return 46;
		
		case 4:
			return 48;
		
		case 5:
			return 16;
		
		case 6:
			return 14;
		
		case 7:
			return 19;
		
		case 8:
			return 22;
		
		case 9:
			return 31;
		
		case 10:
			return 30;
		
		case 11:
			return 33;
		
		case 12:
			return 34;
		
		default:
	}
	return 0;
}

int func_253(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((unk_0x76CD105BCAC6EB9F() && func_254()) && Global_1576216)
	{
		if ((iParam0 == Global_1576217 && iParam1 == Global_1576218) && iParam2 == Global_1576219)
		{
			return 13;
		}
	}
	return 0;
}

int func_254()
{
	struct<13> Var0;
	
	if (unk_0x99DFE4CAC19D527F())
	{
		if ((unk_0x261E3728EE56B3AC() && unk_0x5F9F81C08516558E()) && unk_0xFE087BC8EB584AA2())
		{
			Var0 = { func_255() };
			if (unk_0x7260716F2E4D7661() && unk_0xE582BF3EDDBB1A68(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_255()
{
	struct<13> Var0;
	
	unk_0x677540FE33795D26(&Var0, 13);
	return Var0;
}

int func_256(int iParam0)
{
	switch (unk_0x4B423FAA24E8ABF0(iParam0))
	{
		case joaat("deathbike2"):
			return 1;
			break;
	}
	return 0;
}

bool func_257(int iParam0, var uParam1)
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
		
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
		
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
		
		case joaat("alphaz1"):
			*uParam1 = 0.2f;
			break;
		
		case joaat("bombushka"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("howard"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("hunter"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("microlight"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("mogul"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("molotok"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("nokota"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("pyro"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("rogue"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("seabreeze"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("starling"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("tula"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("khanjali"):
			*uParam1 = 0.6f;
			break;
		
		case joaat("bruiser"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser2"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser3"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike2"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike3"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator4"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator5"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator6"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler2"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler3"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler4"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator2"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator3"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi4"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi5"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi6"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster3"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster4"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster5"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab2"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab3"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan4"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan5"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan6"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr380"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3802"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3803"):
			*uParam1 = 1f;
			break;
	}
	return *uParam1 != -1f;
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("buffalo4"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("greenwood"):
		case joaat("omnisegt"):
		case joaat("virtue"):
		case joaat("r300"):
			return 1;
			break;
	}
	return 0;
}

void func_259(int iParam0, var uParam1, bool bParam2, bool bParam3)
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
		if (!func_280(iParam0))
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
			if (BitTest(uParam1->f_77, func_279(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_279(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_279(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_279(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_279(iVar2)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_279(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_279(iVar3)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_279(iVar3));
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
					if (BitTest(uParam1->f_77, func_279(iVar4)))
					{
					}
					else
					{
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_279(iVar4));
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
				if (BitTest(uParam1->f_77, func_279(iVar5)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_279(iVar5));
				}
				iVar5++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_279(4)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_279(4));
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_279(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar6 = 1;
			while (iVar6 <= 2)
			{
				if (BitTest(uParam1->f_77, func_279(iVar6)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_279(iVar6));
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
			if (func_277(uParam1->f_5) || func_277(uParam1->f_6))
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
		if (((BitTest(uParam1->f_77, 15) || func_276(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_275())
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
		if (uParam1->f_65 == -1 && !func_274(uParam1->f_66))
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
						func_273(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_273(iParam0, uParam1->f_69);
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
			func_265(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xBA16CD57E37AC32A(uParam1->f_66) && !unk_0xEA4F815FDC353FEF(uParam1->f_66))
		{
			iVar7 = 0;
			while (iVar7 <= 11)
			{
				if (BitTest(uParam1->f_77, func_279(iVar7 + 1)))
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
		if (((func_260() && unk_0x00C6FDED3EB75117(uParam1->f_66)) && unk_0x8EC15ED9ECD1E9D0(iParam0)) && !unk_0x2E6A27037F1DC473(iParam0, joaat("avenger")))
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

int func_260()
{
	if ((((Global_4718592.f_104427 == 6 || Global_4718592.f_104427 == 7) || Global_4718592.f_104427 == 18) || Global_4718592.f_104427 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_264(7))
	{
		if (func_262(Global_2672505.f_4.f_16) || func_261(Global_2672505.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_261(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1890444[iVar0 /*129*/].f_77.f_51 != 0;
	}
	return 0;
}

int func_262(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_263(iParam0, 9);
	}
	return 0;
}

bool func_263(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

bool func_264(int iParam0)
{
	return func_4(&(Global_2672505.f_184), iParam0);
}

int func_265(int iParam0, var uParam1, var uParam2)
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
				else if (func_271(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
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
	if (func_270(unk_0x4B423FAA24E8ABF0(*iParam0), 1) && unk_0x94C9CD3D66808551(*iParam0, 24) != func_268(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x8450270DC5896D39(*iParam0, 24, func_268(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_267(iParam0);
	if (func_266(*iParam0))
	{
		unk_0xD05AF216D970F274(*iParam0, 1);
		unk_0x5FE0938FDE9B0958(*iParam0, 1);
	}
	return 1;
}

int func_266(int iParam0)
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

void func_267(var uParam0)
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

int func_268(int iParam0, int iParam1)
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
		iVar0 = func_269(iParam0, 38) + 1;
		iVar1 = func_269(iParam0, 24) + 1;
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

int func_269(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((unk_0x441B9C85D0FFA9ED(Global_152535) && unk_0x2E6A27037F1DC473(iParam0, Global_152535)) && Global_152536 == iParam1)
	{
		return Global_152537;
	}
	iVar0 = (unk_0x5B59C12A02157D00(iParam0, iParam1) - 1);
	while (iVar0 >= 0 && func_271(iParam0, iParam1, iVar0))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_270(int iParam0, int iParam1)
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

int func_271(int iParam0, int iParam1, int iParam2)
{
	if (!func_272() && unk_0xAF82FE1B3E949337(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_272()
{
	return 0;
}

void func_273(int iParam0, var uParam1)
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

int func_274(int iParam0)
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

bool func_275()
{
	return unk_0x087611B922B50F13(joaat("mpindependence"));
}

int func_276(int iParam0)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
			{
				if (unk_0xD130E7CDEE903624(iParam0, "MPBitset"))
				{
					iVar0 = unk_0xE2F6FE9B61232165(iParam0, "MPBitset");
				}
				return BitTest(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_277(int iParam0)
{
	if (!func_272() && func_278(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_278(int iParam0)
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

int func_279(int iParam0)
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

int func_280(int iParam0)
{
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!func_281(unk_0x259BE71D8A81D4FA(), -1))
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
	if (func_234(unk_0x259BE71D8A81D4FA()) == 3)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (func_233(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_281(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (func_9(bParam0, 1, 1))
	{
		if (unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(bParam0), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(bParam0), 0);
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

void func_282(bool bParam0)
{
	if (!func_1251(83))
	{
		if (bParam0)
		{
			unk_0x10564B8977071406(1);
			func_284(83);
		}
	}
	else if (!bParam0)
	{
		unk_0x10564B8977071406(0);
		func_283(83);
	}
}

void func_283(int iParam0)
{
	if (func_131(&uLocal_631, iParam0))
	{
	}
}

void func_284(int iParam0)
{
	if (func_17(&uLocal_631, iParam0))
	{
	}
}

int func_285(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x441B9C85D0FFA9ED(iParam1))
	{
		return 0;
	}
	if (!unk_0x2E9F58AD6FE93DFF(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x60040CDD28AA1BC3(Param2, fVar0, 0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x5779387E956077A6(iParam1, Param2, fParam3, iParam5, iParam4, bParam12);
	if (unk_0xFC8BFE4B41177C22(iVar1))
	{
		*uParam0 = unk_0x913A6486719A87D2(iVar1);
		Global_2793046.f_6736 = iVar1;
		if (unk_0x2FC2FDC413532977(*uParam0))
		{
			if (bParam13)
			{
				unk_0x32C336953C18A3CE(iVar1, 1);
			}
			unk_0x11C125313CB8ADA2(iVar1, iParam8);
			if (unk_0xC8D49539708A80B4(iVar1))
			{
				if (bParam6)
				{
					unk_0x3C1752E361ED8FC9(*uParam0, 1);
				}
				else
				{
					unk_0x3C1752E361ED8FC9(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x4C48F052678AA7EF(*uParam0, unk_0x259BE71D8A81D4FA(), 1);
				}
			}
			unk_0xD37CA6D6F8993BB9(iVar1, iParam7);
			unk_0xA133EF296C37D6E6(iVar1, 1);
			if (bParam10)
			{
				unk_0x8E18C9CFBC30C9FF(iVar1);
				unk_0x3E13A302AA0F06BF(iVar1, 5, 5, 1f);
			}
			func_286(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_286(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_287(unk_0x259BE71D8A81D4FA(), Param0, iParam2) > -1)
	{
		if ((Global_2635559.f_2921[1 /*6*/].f_5 == iParam3 && Global_2635559.f_2921[1 /*6*/].f_4 == iParam2) && vdist(Global_2635559.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635559.f_2921[iVar0 /*6*/] = { Global_2635559.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635559.f_2921[1 /*6*/] = { Param0 };
		Global_2635559.f_2921[1 /*6*/].f_3 = uParam1;
		Global_2635559.f_2921[1 /*6*/].f_4 = iParam2;
		Global_2635559.f_2921[1 /*6*/].f_5 = iParam3;
	}
}

int func_287(bool bParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = bParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (unk_0x1D5CD3EAAA7422B0((Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

void func_288(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_307(&(Global_77348.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0xED977E2AE2CB16EE(Param0, Global_77348.f_555[0 /*21*/], iParam2) <= fParam1)
			{
				func_289(iVar0);
			}
		}
		iVar0++;
	}
}

void func_289(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_307(&(Global_77348.f_555[0 /*21*/]), iParam0))
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
			if (((((iParam0 == 24 && func_306(iParam0, 0)) && Global_78257.f_66 == 0) && Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] != 0) && Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] > 3) && (!func_293(0, Global_77348.f_555[0 /*21*/].f_12) || !func_293(1, Global_77348.f_555[0 /*21*/].f_12)))
			{
				func_292(&(Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/]), &Global_78257);
				Global_78335 = Global_113648.f_32751.f_5591;
			}
			func_290(iParam0, 0);
		}
	}
}

void func_290(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_306(iParam0, 0))
		{
			func_291(iParam0, 1, 0);
			func_291(iParam0, 2, 0);
			func_291(iParam0, 3, 0);
			func_291(iParam0, 4, 0);
			func_291(iParam0, 0, 1);
			Global_77348[iParam0] = 1;
		}
	}
	else
	{
		func_291(iParam0, 0, 0);
	}
}

void func_291(int iParam0, bool bParam1, bool bParam2)
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

void func_292(var uParam0, var uParam1)
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

int func_293(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_305(&(Global_113648.f_32751.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_294(Global_113648.f_32751.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0, -1);
}

int func_294(int iParam0, bool bParam1, int iParam2)
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
		if (!func_304())
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
		if ((((!func_303() && !func_302()) && !func_301()) && !func_300()) && !func_304())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_299() || unk_0x761778199FE1211C()) || func_298())
		{
		}
		else if (!func_301())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_297(iParam0, iParam2))
		{
			return 0;
		}
	}
	if (!func_295(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_295(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_296())
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

int func_296()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

int func_297(int iParam0, int iParam1)
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

var func_298()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

bool func_299()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

int func_300()
{
	return 0;
}

int func_301()
{
	return 1;
}

int func_302()
{
	return 1;
}

int func_303()
{
	if (unk_0x087611B922B50F13(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_304()
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

int func_305(var uParam0)
{
	return *uParam0;
}

int func_306(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113648.f_32751[iParam0], iParam1);
}

int func_307(var uParam0, int iParam1)
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
			uParam0->f_4 = func_308(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_308(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_308(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_308(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_308(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_308(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_308(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_308(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_308(2, 1);
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
			if (func_304())
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
			if (func_304())
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
		if (!func_227(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_227(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_227(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_308(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_310(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_309(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_309(int iParam0, var uParam1, int iParam2)
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

bool func_310(int iParam0)
{
	return iParam0 < 3;
}

int func_311(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	if (func_314(iParam0, &Var2, &Var1, &uVar0))
	{
		if (func_313(iParam0, Var2, Var1, uVar0))
		{
			Local_674.f_528 = { Var2 };
			Local_674.f_537 = func_312(Var2, Var1);
			return 1;
		}
	}
	return 0;
}

float func_312(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return unk_0x97BC40FFA2FFCCD2((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

int func_313(int iParam0, struct<3> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	float fVar0;
	
	if (!func_95(Param1, 20f, 1f, 1f, 15f, 1, 1, 1, 200f, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	if (unk_0xB1EAADCB692D69CE(Param1, &fVar0, 1, 0))
	{
		if (Param1.f_2 < fVar0)
		{
			return 0;
		}
	}
	else
	{
		fVar0 = unk_0xFAF53F2F65D5EE26(Param1.f_0, Param1.f_1);
		if (Param1.f_2 < fVar0)
		{
			return 0;
		}
	}
	return 1;
}

int func_314(int iParam0, var uParam1, var uParam2, var uParam3)
{
	float fVar0;
	
	fVar0 = 200f;
	if (func_172(iParam0, 15))
	{
	}
	else
	{
		*uParam2 = { Local_197.f_356.f_1[iParam0 /*15*/].f_4 };
	}
	*uParam1 = { func_316(*uParam2, 0f, ((-1f * fVar0) * sin((to_float(iLocal_638) * 30f))), (fVar0 * cos((to_float(iLocal_638) * 30f))), 0f) };
	uParam1->f_2 = (uParam1->f_2 + func_315());
	iLocal_638++;
	if (iLocal_638 >= 12)
	{
		iLocal_638 = 0;
	}
	return 1;
}

float func_315()
{
	return 60f;
}

Vector3 func_316(struct<3> Param0, float fParam1, struct<2> Param2, float fParam3)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	fVar1 = fParam1;
	fVar2 = cos(fVar1);
	fVar3 = sin(fVar1);
	Var0.f_0 = ((Param2.f_0 * fVar2) + (Param2.f_1 * fVar3));
	Var0.f_1 = ((Param2.f_1 * fVar2) - (Param2.f_0 * fVar3));
	Var4 = { Param0 + Var0 };
	return Var4;
}

int func_317(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	var uVar4;
	
	if (func_319(iParam0, &Var1, &Var2, &uVar4, &uVar0))
	{
		if (unk_0x604F09F8F9DA5404(Var2, Var1, uVar4, &Var3))
		{
			if (func_318(iParam0, Var3, Var2, uVar0))
			{
				Local_674.f_528 = { Var3 };
				Local_674.f_537 = func_312(Var3, Var2);
				return 1;
			}
		}
	}
	return 0;
}

int func_318(int iParam0, struct<3> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (Local_214.f_373.f_42 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(Param1);
		Call_Loc(Local_214.f_373.f_42);
		if (!StackVal)
		{
			return 0;
		}
	}
	else if (!func_95(Param1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_319(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (func_172(iParam0, 15))
	{
	}
	else if (Local_214.f_373.f_39 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_373.f_39);
		*uParam1 = { StackVal, StackVal, StackVal };
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_373.f_39);
		*uParam2 = { StackVal, StackVal, StackVal };
	}
	else
	{
		*uParam1 = { Local_197.f_356.f_1[iParam0 /*15*/].f_4 };
		*uParam2 = { Local_197.f_356.f_1[iParam0 /*15*/].f_4 };
	}
	if (iLocal_638 > 0)
	{
		func_320(uParam1);
	}
	if (!func_172(iParam0, 15) && Local_214.f_373.f_41 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_373.f_41);
		*uParam3 = StackVal;
	}
	else if ((uParam1->f_2 >= 0f && uParam1->f_2 < 90f) || (uParam1->f_2 >= 270f && uParam1->f_2 < 360f))
	{
		*uParam3 = 120f;
	}
	else
	{
		*uParam3 = 60f;
	}
	return 1;
}

void func_320(var uParam0)
{
	if (iLocal_638 < 5)
	{
		switch (iLocal_638)
		{
			case 1:
				*uParam0 = { *uParam0 + Vector(10f, 0f, 0f) };
				break;
			
			case 2:
				*uParam0 = { *uParam0 + Vector(20f, 0f, 0f) };
				break;
			
			case 3:
				*uParam0 = { *uParam0 - Vector(10f, 0f, 0f) };
				break;
			
			case 4:
				*uParam0 = { *uParam0 - Vector(20f, 0f, 0f) };
				break;
		}
		if (uParam0->f_2 > 360f)
		{
			uParam0->f_2 = (uParam0->f_2 - 360f);
		}
	}
	else
	{
		iLocal_638 = 0;
	}
	iLocal_638++;
}

bool func_321(int iParam0, var uParam1, var uParam2)
{
	struct<35> Var0;
	
	func_282(1);
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_373.f_38);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	return func_322(Local_197.f_356.f_1[iParam0 /*15*/].f_4, Local_197.f_356.f_1[iParam0 /*15*/].f_4, Local_197.f_356.f_1[iParam0 /*15*/].f_3, 0, uParam1, uParam2, &Var0);
}

int func_322(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var6;
	
	bVar0 = false;
	if (uParam6->f_14)
	{
		if (uParam6->f_25)
		{
			uParam6->f_25 = 0;
		}
	}
	if (!func_446())
	{
		return 0;
	}
	if (func_445() && !Global_2635559.f_680 == unk_0x8034325BF6D6E41F())
	{
		if (!Global_2635559.f_676 == 0)
		{
			Global_2635559.f_676 = 0;
			func_444();
			func_443();
		}
	}
	if (!unk_0x8F76B2250AC806FA() == Global_2635559.f_675)
	{
		if (!Global_2635559.f_676 == 0)
		{
			if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635559.f_679) < func_442(0))
			{
				return 0;
			}
			else
			{
				Global_2635559.f_676 = 0;
			}
		}
	}
	else
	{
		if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635559.f_677) > 30000)
		{
			Global_2635559.f_676 = 0;
		}
		if (!Global_2635559.f_676 == 0)
		{
			if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635559.f_679) > func_442(1))
			{
				Global_2635559.f_676 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_436(Param0))
		{
			if (func_435(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2635559.f_676 == 0)
	{
		if (vdist(Global_2635559.f_695, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2635559.f_698 != iParam2)
		{
			return 0;
		}
	}
	unk_0x693ACD1AA0BDB375((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2635559.f_676 == 0)
	{
		Global_2635559.f_682 = 0;
		Global_2635559.f_677 = unk_0x0728E77B2BF91D54();
		Global_2635559.f_675 = unk_0x8F76B2250AC806FA();
		Global_2635559.f_679 = unk_0x0728E77B2BF91D54();
		Global_2635559.f_695 = { Param0 };
		Global_2635559.f_698 = iParam2;
		Global_2635559.f_681 = unk_0x0728E77B2BF91D54();
		func_434();
		func_444();
		if (!uParam6->f_27 || (((((((((func_433(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2793046.f_936) && !Global_2793046.f_925) && !Global_2793046.f_933) && !Global_2793046.f_937) && !Global_2793046.f_954) && !Global_2793046.f_966) && !Global_2793046.f_938) && !Global_2793046.f_988))
		{
			func_414(Param0, iParam2);
		}
		if (func_400(Param0))
		{
			func_414(Param0, iParam2);
		}
		Global_2635559.f_676 = 2;
	}
	switch (Global_2635559.f_676)
	{
		case 2:
			if (unk_0xFFEB5F24B372DFF6((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2635559.f_683 = { Param0 };
				Global_2635559.f_686 = 0f;
				if (Global_2793046.f_936)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam6->f_3 && func_95(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !func_398(Param0, *uParam5, iParam2, unk_0x259BE71D8A81D4FA(), 0))
				{
					Global_2635559.f_683 = { Param0 };
					Global_2635559.f_686 = *uParam5;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam3;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam6->f_5;
					Var5.f_4 = *uParam6;
					Var5.f_13 = uParam6->f_1;
					Var5.f_14 = uParam6->f_2;
					Var5.f_5 = uParam6->f_4;
					Var5.f_15 = uParam6->f_6;
					Var5.f_11 = uParam6->f_7;
					Var5.f_6 = uParam6->f_8;
					Var5.f_7 = uParam6->f_9;
					Var5.f_16 = uParam6->f_10;
					Var5.f_17 = uParam6->f_11;
					Var5 = { Param1 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam2;
					Var5.f_31 = uParam6->f_13;
					if (uParam6->f_32 && Global_2635559.f_682 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam6->f_30;
						Var5.f_29 = uParam6->f_31;
					}
					Var5.f_48 = uParam6->f_14;
					Var5.f_56 = uParam6->f_25;
					Var5.f_57 = uParam6->f_26;
					Var5.f_49 = uParam6->f_29;
					Var5.f_59 = uParam6->f_33;
					Var5.f_60 = uParam6->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam6->f_22[iVar1];
						iVar1++;
					}
					func_342(&(Global_2635559.f_683), &(Global_2635559.f_686), &Var5);
				}
				func_340(Global_2635559.f_683, Global_2635559.f_686, iParam2, &(Global_2635559.f_673));
				Global_2635559.f_671 = 0;
				Global_2635559.f_672 = 0;
				Global_2635559.f_682++;
				Global_2635559.f_678 = unk_0x0728E77B2BF91D54();
				Global_2635559.f_677 = unk_0x0728E77B2BF91D54();
				Global_2635559.f_676 = 3;
			}
			break;
		
		case 3:
			if (Global_2635559.f_671)
			{
				if (Global_2635559.f_673 == Global_2635559.f_674)
				{
					if (Global_2635559.f_672)
					{
						if (uParam6->f_12 && !uParam6->f_11)
						{
							if (func_339(Global_2635559.f_683, Global_2635559.f_686, iParam2, 1, 1036831949))
							{
								Global_2635559.f_676 = 4;
								Global_2635559.f_700 = unk_0x0728E77B2BF91D54();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_337(Global_2635559.f_683, 0);
						func_336(-1);
					}
				}
				else
				{
					Global_2635559.f_671 = 0;
					Global_2635559.f_672 = 0;
				}
			}
			else if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635559.f_678) > 3000)
			{
				func_336(-1);
			}
			break;
		
		case 4:
			if (uParam6->f_12 && !uParam6->f_11)
			{
				if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635559.f_700) < 10000)
				{
					if (unk_0x8256312AC2E5471D(Global_2635559.f_699))
					{
						if (unk_0x31B34E18DE46CC94(Global_2635559.f_699))
						{
							if (!unk_0xF8EEEE15D7483100(Global_2635559.f_699))
							{
								if (func_335(Global_2635559.f_683, Global_2635559.f_686, iParam2, unk_0x259BE71D8A81D4FA(), 0) || func_324(Global_2635559.f_683, Global_2635559.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_337(Global_2635559.f_683, 0);
									func_336(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_337(Global_2635559.f_683, 0);
								func_336(-1);
							}
						}
					}
					else
					{
						func_336(-1);
					}
				}
				else
				{
					func_336(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2635559.f_683 = { Param0 };
			Global_2635559.f_686 = 0f;
			Var6.f_6 = 1082130432;
			Var6.f_7 = 1176255488;
			Var6.f_8 = 1;
			Var6.f_10 = 1;
			Var6.f_13 = 1;
			Var6.f_15 = 1;
			Var6.f_16 = 1;
			Var6.f_31 = 1;
			Var6.f_34 = joaat("tailgater");
			Var6.f_38 = 2;
			Var6.f_45 = 2;
			Var6.f_49 = 1123024896;
			Var6.f_53 = 999;
			Var6.f_54 = 1176256410;
			Var6.f_55 = 1;
			Var6.f_56 = 1;
			Var6.f_57 = 1;
			Var6.f_9 = iParam3;
			Var6.f_3 = 3.5f;
			Var6.f_10 = uParam6->f_5;
			Var6.f_4 = *uParam6;
			Var6.f_12 = 1;
			Var6.f_13 = 0;
			Var6.f_15 = uParam6->f_6;
			Var6.f_11 = uParam6->f_7;
			Var6.f_6 = uParam6->f_8;
			Var6.f_7 = uParam6->f_9;
			Var6 = { Param1 };
			Var6.f_34 = iParam2;
			Var6.f_31 = uParam6->f_13;
			Var6.f_30 = 1;
			Var6.f_48 = uParam6->f_14;
			Var6.f_56 = uParam6->f_25;
			Var6.f_57 = uParam6->f_26;
			Var6.f_30 = uParam6->f_30;
			Var6.f_29 = uParam6->f_31;
			Var6.f_59 = uParam6->f_33;
			Var6.f_60 = uParam6->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var6.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
				Var6.f_45[iVar1] = uParam6->f_22[iVar1];
				iVar1++;
			}
			Var6.f_49 = uParam6->f_29;
			func_342(&(Global_2635559.f_683), &(Global_2635559.f_686), &Var6);
			Global_2635559.f_676 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2635559.f_695 = { Param0 };
	Global_2635559.f_698 = iParam2;
	Global_2635559.f_679 = unk_0x0728E77B2BF91D54();
	if (bVar0)
	{
		Global_2635559.f_516 = 0;
		*uParam4 = { Global_2635559.f_683 };
		*uParam5 = Global_2635559.f_686;
		func_323(1);
		return 1;
	}
	return 0;
}

void func_323(bool bParam0)
{
	Global_2635559.f_676 = 0;
	func_434();
	func_444();
	if (bParam0)
	{
		func_443();
	}
}

int func_324(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam7 == 1 && unk_0x259BE71D8A81D4FA() != bVar1) || iParam7 == 0)
		{
			if (func_9(bVar1, bParam3, bParam4))
			{
				if (unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), bVar1))
				{
					if (!bParam6 || (!unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(bVar1)) && func_97(bVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) != unk_0x1864096A95E36EBA(bVar1))) || unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
						{
							if (((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && iParam8) && bParam5) && func_105(bVar1))
							{
							}
							else if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(bVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(bVar1), 0))
								{
									iVar3 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(bVar1), 0);
									if (unk_0xFC8BFE4B41177C22(iVar3) && !unk_0x1C2F771CDC87A3A5(iVar3, 0))
									{
										iVar4 = unk_0x4B423FAA24E8ABF0(iVar3);
										Var5 = { unk_0xD1A6A821F5AC81DB(iVar3, 0) };
										fVar6 = unk_0xCFC0C995455A6204(iVar3);
										if (func_334(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_325(func_102(bVar1), Param0, fParam1, iParam2, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_325(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (vdist(Param0, Param1) < func_333(iParam3, 1008981770))
	{
		func_326(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
		if (unk_0x26715B0ED6702C87(Param0, Var0, Var1, fVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_326(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	Var0 = { 0f, 1f, 0f };
	func_332(&Var0, 0f, 0f, fParam1);
	Var0 = { Var0 / FtoV(vmag(Var0)) };
	func_327(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
	Var3 = { Param0 + Var0 * FtoV((Var2.f_1 + fParam6)) };
	Var3.f_2 = (Var3.f_2 - ((0.5f * unk_0x1D5CD3EAAA7422B0((Var2.f_2 - Var1.f_2))) + fParam6));
	Var4 = { Param0 - Var0 * FtoV(((Var1.f_1 * -1f) + fParam6)) };
	Var4.f_2 = (Var4.f_2 + ((0.5f * unk_0x1D5CD3EAAA7422B0((Var2.f_2 - Var1.f_2))) + fParam6));
	*uParam3 = { Var3 };
	*uParam4 = { Var4 };
	*uParam5 = unk_0x1D5CD3EAAA7422B0((Var2.f_0 - Var1.f_0));
}

void func_327(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x441B9C85D0FFA9ED(iParam0))
	{
		unk_0xC93BAF616F1C680F(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_330(iParam0);
		if (iVar0 != 0)
		{
			func_328(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (vmag(*uParam1) <= 0.01f || vmag(*uParam2) <= 0.01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_328(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_329(iParam0, &Global_1577994);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x441B9C85D0FFA9ED(Global_1577994[iVar0]))
		{
			unk_0xC93BAF616F1C680F(Global_1577994[iVar0], &(Global_1577998[iVar0 /*3*/]), &(Global_1578005[iVar0 /*3*/]));
		}
		if (vmag(Global_1577998[iVar0 /*3*/]) <= 0.01f || vmag(Global_1578005[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1577998[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1578005[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1577998[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1578005[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1577998[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1578005[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1578012[iVar0] = (Global_1578005[iVar0 /*3*/] - Global_1577998[iVar0 /*3*/]);
		Global_1578015[iVar0] = (Global_1578005[iVar0 /*3*/].f_1 - Global_1577998[iVar0 /*3*/].f_1);
		Global_1578018[iVar0] = (Global_1578005[iVar0 /*3*/].f_2 - Global_1577998[iVar0 /*3*/].f_2);
		if (Global_1578012[iVar0] > Global_1578021)
		{
			Global_1578021 = Global_1578012[iVar0];
		}
		if (Global_1578018[iVar0] > Global_1578022)
		{
			Global_1578022 = Global_1578018[iVar0];
		}
		iVar0++;
	}
	Global_1578023 = (Global_1578021 * -0.5f);
	Global_1578026 = (Global_1578021 * 0.5f);
	Global_1578023.f_1 = ((((0.5f * Global_1578015[0]) + Global_1578015[1]) + Global_1577994.f_3) * -1f);
	Global_1578026.f_1 = (0.5f * Global_1578015[0]);
	Global_1578023.f_2 = (Global_1578018[0] * -0.5f);
	Global_1578026.f_2 = (Global_1578018[0] * 0.5f);
	*uParam1 = { Global_1578023 };
	*uParam2 = { Global_1578026 };
}

void func_329(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_330(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_331(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_331(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_332(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = cos(Param1.f_0);
	fVar1 = sin(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = cos(Param1.f_1);
	fVar1 = sin(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = cos(Param1.f_2);
	fVar1 = sin(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_333(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_327(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	Var2 = { Var1 - Var0 };
	fVar3 = (sqrt(((((Var2.f_0 * 0.5f) * (Var2.f_0 * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
	return fVar3;
}

int func_334(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6)
{
	if (func_325(Param0, Param3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_326(Param0, fParam1, iParam2, &Global_1981305, &(Global_1981305.f_3), &(Global_1981305.f_6), 1036831949);
	func_326(Param3, fParam4, iParam5, &(Global_1981305.f_7), &(Global_1981305.f_10), &(Global_1981305.f_13), 1036831949);
	if (unk_0x298E7BBD04F29848(Global_1981305, Global_1981305.f_3, Global_1981305.f_6, Global_1981305.f_7, Global_1981305.f_10, Global_1981305.f_13))
	{
		return 1;
	}
	return 0;
}

int func_335(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam3 == iVar0 || iParam4 == 1)
		{
			bVar1 = iVar0;
			if (func_9(bVar1, 0, 1) && func_9(bParam3, 0, 1))
			{
				if (Global_2648605.f_261[iVar0])
				{
					if (func_325(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_325(func_102(bVar1), Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2648605.f_261[iVar0])
			{
				if (func_325(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_9(bVar1, 0, 0))
			{
				if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(bVar1)))
				{
					if (func_325(func_102(bVar1), Param0, fParam1, iParam2, 1036831949))
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

void func_336(int iParam0)
{
	if (Global_2635559.f_682 < 20 && unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635559.f_681) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2635559.f_682 < iParam0))
		{
			Global_2635559.f_676 = 2;
		}
		else
		{
			Global_2635559.f_676 = 5;
		}
	}
	else
	{
		Global_2635559.f_676 = 5;
	}
}

void func_337(struct<3> Param0, int iParam1)
{
	struct<3> Var0;
	
	if (iParam1 == 0 && func_338(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && vmag(Param0) > 0f)
	{
		Var0 = { Global_2635559.f_2737[iParam1 /*3*/] };
		Global_2635559.f_2737[iParam1 /*3*/] = { Param0 };
		func_337(Var0, iParam1 + 1);
	}
}

int func_338(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (vdist(Param0, Global_2635559.f_2737[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_339(struct<3> Param0, float fParam1, int iParam2, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	float fVar4;
	
	if (!unk_0x93E08E0F531E2C35())
	{
		return 0;
	}
	else
	{
		func_444();
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_2635559.f_687[iVar3] == -1 && unk_0x93E08E0F531E2C35())
			{
				func_326(Param0, fParam1, iParam2, &Var0, &Var1, &uVar2, fParam4);
				if (bParam3)
				{
					fVar4 = unk_0x1D5CD3EAAA7422B0((Var0.f_2 - Var1.f_2));
					Var0.f_2 = (Var0.f_2 + ((fVar4 * 0.5f) - 2f));
					Var1.f_2 = (Var1.f_2 + (fVar4 * 0.5f));
				}
				Global_2635559.f_687[iVar3] = unk_0x48FE6369FE249FD2(Var0, Var1, fParam4);
				Global_2635559.f_691[iVar3] = unk_0x8F76B2250AC806FA();
				Global_2635559.f_699 = Global_2635559.f_687[iVar3];
				return 1;
			}
			iVar3++;
		}
	}
	return 0;
}

void func_340(struct<3> Param0, var uParam1, int iParam2, var uParam3)
{
	struct<8> Var0;
	
	*uParam3 = func_341(&Param0, &uParam1, &iParam2);
	Var0.f_0 = 1556360603;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam1;
	Var0.f_6 = iParam2;
	Var0.f_7 = *uParam3;
	unk_0x01F0B819E78A18A1(1, &Var0, 8, func_211(1, 1));
}

int func_341(var uParam0, var uParam1, var uParam2)
{
	char cVar0[64];
	int iVar1;
	
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, round(*uParam0), 64);
	StringIntConCat(&cVar0, round(uParam0->f_1), 64);
	StringIntConCat(&cVar0, round(uParam0->f_2), 64);
	StringIntConCat(&cVar0, round(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	iVar1 = unk_0x70E57E9927B6BA58(&cVar0);
	return iVar1;
}

void func_342(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2635559.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_393(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_343(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_343(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!vmag(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_389(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_384(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2643122.f_162 = 0;
	Global_2643122.f_163 = 0;
	Global_2643122.f_164 = -99;
	Global_2643122.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2643122[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2643122.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_330(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = unk_0x990DA6AEDBBBA89A(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (unk_0x2EE1ADDFD32F7C35(iVar6))
		{
			unk_0xAAB540AD076E01F8(iVar6, &Var1);
			bVar10 = false;
			if (Global_2643122.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2643122.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xD2507ABB3A05C571(iVar6)) || unk_0x8D4953B2FFED058B(iVar6))
			{
				unk_0x99FBD9356770254E(Var1, &uVar4, &uVar5);
				if (vdist(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_377(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_374(Var1))
									{
										Var1 = { func_369(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (vmag(Var1) > 0f)
										{
											if (!func_368(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_364(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_384(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (vmag(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && vdist(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_363(Var1, fVar2, uParam2->f_34, unk_0x259BE71D8A81D4FA(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_389(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_362(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_95(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_95(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_324(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_352(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2643122.f_162)
																										{
																											Global_2643122[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2643122.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2643122.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2643122.f_162 == 0)
																									{
																										Global_2643122[0 /*3*/] = { Var1 };
																										Global_2643122.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2643122.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (vdist2(Var1, uParam2->f_35) < vdist2(Global_2643122[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_351(Var1, fVar2, iVar14);
																													iVar14 = Global_2643122.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2643122.f_162++;
																									if (Global_2643122.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2643122.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2643122[Global_2643122.f_162 /*3*/] = { Var1 };
																									Global_2643122.f_121[Global_2643122.f_162] = fVar2;
																									Global_2643122.f_162++;
																									if (func_364(Var1, uParam2))
																									{
																										Global_2643122.f_163++;
																									}
																									if (Global_2643122.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2643122.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2643122.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2643122[0 /*3*/] };
						*uParam1 = Global_2643122.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2643122.f_163 > 0 && !Global_2643122.f_163 == Global_2643122.f_162)
						{
							func_349(0, uParam2);
						}
						iVar24 = unk_0xC5935DFB3F39785A(0, Global_2643122.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2643122[0 /*3*/] };
						uVar26 = Global_2643122.f_121[0];
						Global_2643122[0 /*3*/] = { Global_2643122[iVar24 /*3*/] };
						Global_2643122.f_121[0] = Global_2643122.f_121[iVar24];
						Global_2643122[iVar24 /*3*/] = { Var25 };
						Global_2643122.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2643122[0 /*3*/] };
						*uParam1 = Global_2643122.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_348(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_389(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_384(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_344(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2643122.f_164 = iVar6;
	}
	return 0;
}

void func_344(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = vdist(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_345(*(uParam0[iVar2 /*4*/]), 5f, unk_0x259BE71D8A81D4FA(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

int func_345(struct<3> Param0, float fParam1, bool bParam2, int iParam3, int iParam4)
{
	if (func_347(Param0, fParam1, bParam2, iParam3, 0) || func_346(Param0, bParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_346(struct<3> Param0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam1 == iVar0 || iParam2 == 1)
		{
			bVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_325(Param0, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_9(bVar2, 0, 1) && func_9(bParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_347(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam2 == iVar0 || iParam3 == 1)
		{
			bVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_9(bVar1, 0, 1) && func_9(bParam2, 0, 1))
				{
					if (unk_0x1864096A95E36EBA(bVar1) == unk_0x1864096A95E36EBA(bParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_9(bVar1, 0, 1) && func_9(bParam2, 0, 1))
				{
					if (Global_2648605.f_261[iVar0])
					{
						if (vdist(Global_2648605.f_131[iVar0 /*3*/], Param0) < fParam1)
						{
							return 1;
						}
					}
					else if (vdist(func_102(bVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2648605.f_261[iVar0])
				{
					if (vdist(Global_2648605.f_131[iVar0 /*3*/], Param0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_9(bVar1, 0, 1))
				{
					if (vdist(func_102(bVar1), Param0) < 1f)
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

void func_348(int iParam0, struct<3> Param1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = unk_0xC5935DFB3F39785A((1 + iParam0), (40 + iParam0));
		if (unk_0x6009FBA2EAAA60BE(Param1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10))
		{
			if (vmag(*uParam3) > 0f)
			{
				*uParam3 = { func_369(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) };
				if (!func_374(*uParam3))
				{
					iVar0 = 999;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_349(int iParam0, var uParam1)
{
	if (!func_364(Global_2643122[iParam0 /*3*/], uParam1))
	{
		Global_2643122.f_162 = (Global_2643122.f_162 - 1);
		func_350(iParam0);
		if (Global_2643122.f_162 > Global_2643122.f_163)
		{
			func_349(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_349(iParam0 + 1, uParam1);
	}
}

void func_350(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2643122[iParam0 /*3*/] = { Global_2643122[iParam0 + 1 /*3*/] };
			Global_2643122.f_121[iParam0] = Global_2643122.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_351(struct<3> Param0, float fParam1, int iParam2)
{
	struct<3> Var0;
	var uVar1;
	
	Var0 = { Global_2643122[iParam2 /*3*/] };
	uVar1 = Global_2643122.f_121[iParam2];
	Global_2643122[iParam2 /*3*/] = { Param0 };
	Global_2643122.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2643122.f_162 && iParam2 < 39)
	{
		if (vmag(Var0) > 0f)
		{
			func_351(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_352(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar3 = iVar0;
		if (func_353(bVar3))
		{
			Var1 = { func_102(bVar3) };
			fVar5 = vdist(Param0, Var1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_353(bool bParam0)
{
	if (func_9(bParam0, 0, 1))
	{
		if (!func_360(bParam0))
		{
			if (unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), bParam0))
			{
				if (!unk_0x1864096A95E36EBA(bParam0) == unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))
				{
					if (func_357(unk_0x259BE71D8A81D4FA(), 1, 0))
					{
						if (!func_354(unk_0x1864096A95E36EBA(bParam0), unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()), 0, -1))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x1864096A95E36EBA(bParam0) == -1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
				{
					if (!func_357(unk_0x259BE71D8A81D4FA(), 1, 0))
					{
						if (!func_105(bParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_354(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058070.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23341, bVar0))
			{
				bVar1 = Global_1058070.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_355(iParam0, bVar0, iParam1, bVar1) || !func_355(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_355(iParam0, bVar0, iParam1, bVar1) || !func_355(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_355(iParam0, bVar0, iParam1, bVar1) || !func_355(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_355(iParam0, bVar0, iParam1, bVar1) || !func_355(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 0);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 1);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 2);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 4);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 5);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 6);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 8);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 9);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 10);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 12);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 13);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 14);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_355(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23342, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_1265[iParam2 /*23466*/].f_23342, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		iVar4 = unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar1 = iVar5;
		if (((!func_9(iVar1, 1, 1) || func_98(iVar1, 0)) || BitTest(Global_2657589[iVar1 /*466*/].f_199, 2)) || func_356(iVar1))
		{
		}
		else if (unk_0x1864096A95E36EBA(iVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = unk_0x56E414973C2A8C0E(bVar1);
			if (unk_0x4FAFF4BCB7633475(iVar2))
			{
			}
			else
			{
				iVar3 = unk_0x4B423FAA24E8ABF0(iVar2);
				if (iVar4 == joaat("mp_f_freemode_01") || iVar4 == joaat("mp_m_freemode_01"))
				{
					if (iVar3 == joaat("mp_f_freemode_01") || iVar3 == joaat("mp_m_freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_356(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

int func_357(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_358(bParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853910[bParam0 /*862*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_358(int iParam0)
{
	return func_359(iParam0);
}

var func_359(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

int func_360(bool bParam0)
{
	if (func_98(bParam0, 0))
	{
		return 1;
	}
	if (func_361())
	{
		if (bParam0 == unk_0x259BE71D8A81D4FA())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657589[bParam0 /*466*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_361()
{
	return BitTest(Global_2621446, 3);
}

int func_362(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0xF0CA45A211FFDCD9(Param0, 30f, 0, iVar0);
	if (unk_0xFC8BFE4B41177C22(iVar1) && !unk_0x1C2F771CDC87A3A5(iVar1, 0))
	{
		iVar2 = unk_0x4B423FAA24E8ABF0(iVar1);
		Var3 = { unk_0xD1A6A821F5AC81DB(iVar1, 0) };
		fVar4 = unk_0xCFC0C995455A6204(iVar1);
		if (func_334(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0xF0CA45A211FFDCD9(Param0, 30f, 0, iVar0);
	if (unk_0xFC8BFE4B41177C22(iVar1) && !unk_0x1C2F771CDC87A3A5(iVar1, 0))
	{
		iVar2 = unk_0x4B423FAA24E8ABF0(iVar1);
		Var3 = { unk_0xD1A6A821F5AC81DB(iVar1, 0) };
		fVar4 = unk_0xCFC0C995455A6204(iVar1);
		if (func_334(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_363(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	if (func_335(Param0, fParam1, iParam2, bParam3, iParam4) || func_398(Param0, fParam1, iParam2, bParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_364(struct<3> Param0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_367(Param0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_365(Param0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x26715B0ED6702C87(Param0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_365(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4)
{
	func_366(&Param1, &Param2);
	if (((!Param0.f_0 >= Param1.f_0 || !Param0.f_1 >= Param1.f_1) || !Param0.f_0 <= Param2.f_0) || !Param0.f_1 <= Param2.f_1)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (Param0.f_2 >= Param1.f_2)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (Param0.f_2 <= Param2.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param1.f_2 && Param0.f_2 <= Param2.f_2)
	{
		return 1;
	}
	return 0;
}

void func_366(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

bool func_367(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3 && bParam4)
	{
		Param0.f_2 = 0f;
		Param1.f_2 = 0f;
		return vdist(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (Param0.f_2 > Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return vdist(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (Param0.f_2 < Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return vdist(Param0, Param1) < (fParam2 + 0.01f);
	}
	return vdist(Param0, Param1) < (fParam2 + 0.01f);
}

int func_368(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	if (func_357(unk_0x259BE71D8A81D4FA(), 1, 0))
	{
		if (Global_4980736.f_39172 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_39172)
			{
				if (Global_4980736.f_39173[iVar0 /*148*/].f_7 != 0)
				{
					if (func_325(Param0, Global_4980736.f_39173[iVar0 /*148*/], Global_4980736.f_39173[iVar0 /*148*/].f_6, Global_4980736.f_39173[iVar0 /*148*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_5991 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_5991)
			{
				if (Global_4980736.f_5994[iVar0 /*492*/].f_15 != 0)
				{
					if (func_325(Param0, Global_4980736.f_5994[iVar0 /*492*/], Global_4980736.f_5994[iVar0 /*492*/].f_3, Global_4980736.f_5994[iVar0 /*492*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_84915 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_84915)
			{
				if (Global_4980736.f_84919[iVar0 /*499*/].f_12 != 0)
				{
					if (func_325(Param0, Global_4980736.f_84919[iVar0 /*499*/], Global_4980736.f_84919[iVar0 /*499*/].f_3, Global_4980736.f_84919[iVar0 /*499*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058070.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058070.f_268)
			{
				if (unk_0xFC8BFE4B41177C22(Global_1058070.f_233[iVar0]) && !unk_0x1C2F771CDC87A3A5(Global_1058070.f_233[iVar0], 0))
				{
					if (func_325(Param0, unk_0xD1A6A821F5AC81DB(Global_1058070.f_233[iVar0], 1), unk_0xCFC0C995455A6204(Global_1058070.f_233[iVar0]), unk_0x4B423FAA24E8ABF0(Global_1058070.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058070.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058070.f_266)
			{
				if (unk_0xFC8BFE4B41177C22(Global_1058070.f_119[iVar0]) && !unk_0x1C2F771CDC87A3A5(Global_1058070.f_119[iVar0], 0))
				{
					if (func_325(Param0, unk_0xD1A6A821F5AC81DB(Global_1058070.f_119[iVar0], 1), unk_0xCFC0C995455A6204(Global_1058070.f_119[iVar0]), unk_0x4B423FAA24E8ABF0(Global_1058070.f_119[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

Vector3 func_369(struct<3> Param0, var uParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	
	if (bParam11)
	{
		if (vmag(Param4) > 0f)
		{
			if (!func_372(Param0, *uParam1, Param4))
			{
				*uParam1 = (*uParam1 + 180f);
			}
		}
		return Param0;
	}
	unk_0x99FBD9356770254E(Param0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		unk_0x748728E3BFD8E371(Param0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (unk_0xBA16CD57E37AC32A(iParam7) && func_371(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*uParam1 = (*uParam1 + 180f);
			if (*uParam1 > 360f)
			{
				*uParam1 = (*uParam1 + -360f);
			}
		}
		if (*uParam1 <= 90f || *uParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (to_float(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * to_float(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (to_float(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * to_float(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_370(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_370(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (vmag(Param4) > 0f)
	{
		if (!func_372(Param0, *uParam1, Param4))
		{
			if ((bParam3 || uParam12) || ((uVar2 & 1024 != 0 || Param0.f_2 == 0f) && bParam6))
			{
				*uParam1 = (*uParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	Var0 = { unk_0xF10F2A2453AF1DFB(Param0, *uParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0x5053D36357207FD6(Param0, *uParam1, &Var11))
		{
			Var12 = { Var11 - Param0 };
			if (!iParam7 == 0)
			{
				Var13 = { Var12 / FtoV(vmag(Var12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_370(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_370(iParam7, 1.5f);
				}
				Var13 = { Var13 * FtoV((fVar10 * 0.5f)) };
				Var12 = { Var12 - Var13 };
				Var11 = { Param0 + Var12 };
			}
			Var13 = { Var0 - Var11 };
			Var0 = { Var11 };
		}
	}
	return Var0;
}

float func_370(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_327(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_371(struct<3> Param0)
{
	float fVar0;
	
	if (unk_0xB1EAADCB692D69CE(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_372(struct<3> Param0, float fParam1, struct<3> Param2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 0f, 1f, 0f };
	func_332(&Var0, 0f, 0f, fParam1);
	Var1 = { Param2 - Param0 };
	if (func_373(Var1, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_373(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_374(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_376(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2642829[iVar1])
	{
		if (func_375(Param0, &(Global_2642126[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2642829[8])
	{
		if (func_375(Param0, &(Global_2642126[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_375(struct<3> Param0, var uParam1)
{
	return unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_376(struct<2> Param0, var uParam1)
{
	if (Param0.f_1 > Global_2642117[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2642117[1])
	{
		if (Param0.f_0 < Global_2642121[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2642117[2])
	{
		if (Param0.f_0 < Global_2642121[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2642121[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2642121[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_377(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	if (func_383(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar2 = unk_0xD2AA6F822D3A55D2(0.01f, 360f);
			func_382(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 0, fVar2);
			if (func_378(Var1, &uVar0) || func_383(Var1))
			{
				Var1 = { *uParam0 };
				func_382(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 1, fVar2);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_378(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_381())
	{
		return 0;
	}
	iVar1 = func_380();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2635559.f_368[iVar0 /*12*/].f_9 == 1)
		{
			if (func_379(Param0, &(Global_2635559.f_368[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_379(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_367(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_365(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
			}
			else if (bParam3)
			{
				if (unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 < uParam1->f_2 && Param0.f_2 < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 > uParam1->f_2 && Param0.f_2 > uParam1->f_3.f_2))
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
				return unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_380()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2635559.f_368[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_381()
{
	return Global_1950108.f_528;
}

void func_382(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (vmag(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(vmag(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_332(&Var0, 0f, 0f, unk_0xD2AA6F822D3A55D2(0f, 360f));
		}
		else
		{
			func_332(&Var0, 0f, 0f, fParam5);
		}
	}
	Var0 = { Var0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		Var1 = { Param1 + Var0 };
	}
	else
	{
		Var1 = { Param1 - Var0 };
	}
	*uParam0 = Var1.f_0;
	uParam0->f_1 = Var1.f_1;
}

int func_383(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2635559.f_596 > 0f)
	{
		fVar0 = vdist(Param0, Global_2635559.f_593);
		if (fVar0 < Global_2635559.f_596)
		{
			return 1;
		}
	}
	return 0;
}

bool func_384(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2635559.f_26.f_18)
	{
		switch (Global_2635559.f_26.f_17)
		{
			case 0:
				if (func_367(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_365(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x26715B0ED6702C87(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, Global_2635559.f_26.f_16, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_385(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, Global_2635559.f_26.f_16, Global_2635559.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_385(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam4)
	{
		case 0:
			func_382(&Param0, Param1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_388(&Param0, Param1, Param2, fParam5, bParam6);
			break;
		
		case 2:
			func_386(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x8B777C12D64DF209(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_367(Var1, Param1, fParam3, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_365(Var1, Param1, Param2, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x26715B0ED6702C87(Var1, Param1, Param2, fParam3, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_386(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	
	Var0 = { Param2 - Param1 };
	Var0.f_2 = 0f;
	Var1 = { *uParam0 - Param1 };
	Var1.f_2 = 0f;
	Var2 = { func_387(0f, 0f, 1f, Var0) };
	Var2 = { Var2 / FtoV(vmag(Var2)) };
	fVar3 = (vmag(Var1) * sin(unk_0x20A3B1C2EC4167BB(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_373(Var2, Var1) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_373(Var2, Var1) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		Var4 = { *uParam0 + Var2 };
		fVar6 = vdist(Param1.f_0, Param1.f_1, 0f, Param2.f_0, Param2.f_1, 0f);
		Var7 = { Param1 + Param2 / Vector(2f, 2f, 2f) };
		Var7.f_2 = 0f;
		Var2 = { func_387(0f, 0f, 1f, Var0) };
		Var2 = { Var2 / FtoV(vmag(Var2)) };
		Var2 = { Var2 * FtoV((fParam3 * 0.5f)) };
		Var8 = { Var7 - Var2 };
		Var9 = { Var7 + Var2 };
		Var10 = { Var9 - Var8 };
		Var10.f_2 = 0f;
		Var11 = { *uParam0 - Var8 };
		Var11.f_2 = 0f;
		Var2 = { func_387(0f, 0f, 1f, Var10) };
		Var2 = { Var2 / FtoV(vmag(Var2)) };
		fVar3 = (vmag(Var11) * sin(unk_0x20A3B1C2EC4167BB(Var10.f_0, Var10.f_1, Var11.f_0, Var11.f_1)));
		if (!bParam5)
		{
			if (func_373(Var2, Var11) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_373(Var2, Var11) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		Var5 = { *uParam0 + Var2 };
		if (vdist(Var4, *uParam0, uParam0->f_1, 0f) < vdist(Var5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var4 };
		}
		else
		{
			*uParam0 = { Var5 };
		}
	}
}

Vector3 func_387(struct<3> Param0, struct<3> Param1)
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}

void func_388(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	Var0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1.f_0);
	fVar2 = (*uParam0 - Param3.f_0);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	Var0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				Var0.f_0 = (Param1.f_0 - fParam5);
			}
			else
			{
				Var0.f_0 = (Param3.f_0 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			Var0.f_1 = (Param1.f_1 - fParam5);
		}
		else
		{
			Var0.f_1 = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			Var0.f_0 = (Param3.f_0 + fParam5);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		Var0.f_1 = (Param3.f_1 + fParam5);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam5);
	}
	*uParam0 = { Var0 };
}

int func_389(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_436(Param0))
	{
		if (func_392(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_390(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_338(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_382(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_390(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_378(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_391(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_378(Var2, &uVar1) || func_383(Var2))
			{
				Var2 = { *uParam0 };
				func_391(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_391(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_385(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_385(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_385(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_382(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_388(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_386(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_392(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2640505[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2640505[iVar0 /*17*/].f_16))
			{
				if (func_379(*uParam0, &(Global_2640505[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2640505[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2640505[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_391(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_392(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_391(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_393(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	var uVar14;
	
	if (Global_2635559.f_1754 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!vmag(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_389(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_384(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2643122.f_162 = 0;
		Global_2643122.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2643122[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2643122.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			func_396(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_395();
		}
		else
		{
			func_394();
		}
		iVar1 = 0;
		while (iVar1 < Global_2635559.f_1754)
		{
			iVar2 = Global_2635559.f_2160[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2635559.f_1755[iVar2 /*4*/] };
				fVar4 = Global_2635559.f_1755[iVar2 /*4*/].f_3;
				if (vmag(Var3) > 0f)
				{
					if ((uParam2->f_57 && vdist(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && vdist(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_363(Var3, fVar4, uParam2->f_34, unk_0x259BE71D8A81D4FA(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_389(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar6 = uParam2->f_31;
										bVar7 = true;
										iVar8 = 1;
										fVar9 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											fVar9 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
										else
										{
											bVar7 = true;
											iVar8 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar9 = (fVar9 * 0.375f);
												}
											}
										}
										bVar10 = false;
										if (!func_362(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_95(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (func_95(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_324(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar10 = true;
											}
										}
										if (bVar10)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar12 = 0f;
												if (uParam2->f_52)
												{
													iVar11 = func_352(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2643122.f_162)
															{
																Global_2643122[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2643122.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2643122.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2643122.f_162 == 0)
														{
															Global_2643122[0 /*3*/] = { Var3 };
															Global_2643122.f_121[0] = fVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2643122.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (vdist2(Var3, uParam2->f_35) < vdist2(Global_2643122[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_351(Var3, fVar4, iVar5);
																		iVar5 = Global_2643122.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2643122.f_162++;
														if (Global_2643122.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2635559.f_1754;
															}
															else if (Global_2643122.f_162 == 40)
															{
																iVar1 = Global_2635559.f_1754;
															}
														}
													}
													else
													{
														Global_2643122[Global_2643122.f_162 /*3*/] = { Var3 };
														Global_2643122.f_121[Global_2643122.f_162] = fVar4;
														Global_2643122.f_162++;
														if (Global_2643122.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2635559.f_1754;
															}
															else if (Global_2643122.f_162 == 40)
															{
																iVar1 = Global_2635559.f_1754;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2643122.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2643122[0 /*3*/] };
				*uParam1 = Global_2643122.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2643122.f_163 > 0 && !Global_2643122.f_163 == Global_2643122.f_162)
				{
					func_349(0, uParam2);
				}
				iVar0 = unk_0xC5935DFB3F39785A(0, Global_2643122.f_162);
				Var13 = { Global_2643122[0 /*3*/] };
				uVar14 = Global_2643122.f_121[0];
				Global_2643122[0 /*3*/] = { Global_2643122[iVar0 /*3*/] };
				Global_2643122.f_121[0] = Global_2643122.f_121[iVar0];
				Global_2643122[iVar0 /*3*/] = { Var13 };
				Global_2643122.f_121[iVar0] = uVar14;
				*uParam0 = { Global_2643122[0 /*3*/] };
				*uParam1 = Global_2643122.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2635559.f_1754 > 0)
			{
				iVar0 = unk_0xC5935DFB3F39785A(0, Global_2635559.f_1754);
				*uParam0 = { Global_2635559.f_1755[iVar0 /*4*/] };
				*uParam1 = Global_2635559.f_1755[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_394()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2635559.f_1754)
	{
		Global_2635559.f_2160[iVar0] = iVar0;
		iVar0++;
	}
}

void func_395()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2635559.f_1754)
	{
		Global_2635559.f_2160[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2635559.f_1754)
	{
		iVar1 = unk_0xC5935DFB3F39785A(0, Global_2635559.f_1754);
		iVar2 = unk_0xC5935DFB3F39785A(0, Global_2635559.f_1754);
		uVar3 = Global_2635559.f_2160[iVar1];
		Global_2635559.f_2160[iVar1] = Global_2635559.f_2160[iVar2];
		Global_2635559.f_2160[iVar2] = uVar3;
		iVar0++;
	}
}

void func_396(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2635559.f_1754)
	{
		uVar1 = func_397(Param0, fVar0, &fVar0);
		Global_2635559.f_2160[iVar2] = uVar1;
		iVar2++;
	}
}

int func_397(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2635559.f_1754)
	{
		fVar2 = vdist2(Param0, Global_2635559.f_1755[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

int func_398(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam3 == iVar0 || iParam4 == 1)
		{
			bVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_399(Param0, iParam2, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_334(Param0, fParam1, iParam2, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_9(bVar2, 0, 1) && func_9(bParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_399(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_333(iParam1, 1008981770);
	fVar1 = func_333(iParam3, 1008981770);
	fVar2 = vdist(Param0, Param2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_400(struct<3> Param0)
{
	var uVar0;
	
	if (Global_2793046.f_936 && func_401(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_401(struct<3> Param0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*iParam1 = -1;
	iVar2 = func_413(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_402(iVar1))
			{
				if (func_413(Global_1950108.f_542[iVar0 /*3*/], 0) == iVar2)
				{
					*iParam1 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_402(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_412(iParam0);
	if (Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_293 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10;
	if (iVar1 != func_74())
	{
		if (Global_1853910[iVar1 /*862*/].f_267.f_293 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_321.f_7 == iParam0)
	{
		return 1;
	}
	if (func_411(unk_0x259BE71D8A81D4FA(), 0) || (func_408(unk_0x259BE71D8A81D4FA()) && func_249(func_407(unk_0x259BE71D8A81D4FA())) == 12))
	{
		return 1;
	}
	if (func_406(unk_0x259BE71D8A81D4FA()) || (func_408(unk_0x259BE71D8A81D4FA()) && func_249(func_407(unk_0x259BE71D8A81D4FA())) == 8))
	{
		return 1;
	}
	if (func_405(unk_0x259BE71D8A81D4FA()) || (func_408(unk_0x259BE71D8A81D4FA()) && func_249(func_407(unk_0x259BE71D8A81D4FA())) == 5))
	{
		return 1;
	}
	if (func_404(unk_0x259BE71D8A81D4FA()) || (func_408(unk_0x259BE71D8A81D4FA()) && func_249(func_407(unk_0x259BE71D8A81D4FA())) == 10))
	{
		return 1;
	}
	if (func_403(unk_0x259BE71D8A81D4FA()) || (func_408(unk_0x259BE71D8A81D4FA()) && func_249(func_407(unk_0x259BE71D8A81D4FA())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_403(bool bParam0)
{
	if (bParam0 != func_74())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_249(Global_2657589[bParam0 /*466*/].f_321.f_7) == 6;
			}
		}
	}
	return 0;
}

int func_404(bool bParam0)
{
	if (bParam0 != func_74())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_249(Global_2657589[bParam0 /*466*/].f_321.f_7) == 10;
			}
		}
	}
	return 0;
}

int func_405(bool bParam0)
{
	if (bParam0 != func_74())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[bParam0 /*466*/].f_321.f_10 != func_74())
			{
				return func_249(Global_2657589[bParam0 /*466*/].f_321.f_7) == 5;
			}
		}
	}
	return 0;
}

int func_406(bool bParam0)
{
	if (bParam0 != func_74())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[bParam0 /*466*/].f_321.f_10 != func_74())
			{
				return func_249(Global_2657589[bParam0 /*466*/].f_321.f_7) == 8;
			}
		}
	}
	return 0;
}

int func_407(bool bParam0)
{
	if (bParam0 != func_74() && func_9(bParam0, 1, 1))
	{
		return Global_2657589[bParam0 /*466*/].f_321.f_17;
	}
	return -1;
}

int func_408(bool bParam0)
{
	if (bParam0 != func_74() && func_9(bParam0, 1, 1))
	{
		if (func_410(bParam0) && !func_409(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_409(int iParam0)
{
	if (iParam0 != func_74() && func_9(iParam0, 1, 1))
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321, 4);
	}
	return 0;
}

int func_410(bool bParam0)
{
	if (bParam0 != func_74() && func_9(bParam0, 1, 1))
	{
		return BitTest(Global_2657589[bParam0 /*466*/].f_321, 3);
	}
	return 0;
}

int func_411(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0x4B423FAA24E8ABF0(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (bParam0 != func_74())
	{
		if (func_9(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[bParam0 /*466*/].f_321.f_10 != func_74())
			{
				return func_249(Global_2657589[bParam0 /*466*/].f_321.f_7) == 12;
			}
		}
	}
	return 0;
}

int func_412(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_413(struct<3> Param0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2640505[iVar0 /*17*/].f_9 == 1 || iParam1 == 0)
		{
			if (func_379(Param0, &(Global_2640505[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_414(struct<3> Param0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar3[3];
	
	if (Global_2635559.f_45.f_319)
	{
		return;
	}
	if (!func_432())
	{
		if (iParam1 == 0)
		{
		}
		iVar1 = func_431(Param0);
		if (iVar1 > -1)
		{
			func_443();
			switch (iVar1)
			{
				case 0:
					func_430(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_430(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_430(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_430(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_430(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_430(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_430(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_430(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_430(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_430(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_430(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_430(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_430(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_430(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_430(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_430(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_430(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_430(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_430(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_430(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_430(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_430(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_430(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_430(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_430(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_430(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_430(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_430(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_430(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_430(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_430(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_430(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_430(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_430(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_430(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_430(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_430(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_430(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_430(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_430(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_430(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_430(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_430(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_430(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_430(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_430(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_430(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_430(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_430(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_430(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_430(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_430(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_430(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_428(78);
					break;
				
				case 11:
					func_428(79);
					break;
				
				case 12:
					func_428(82);
					break;
				
				case 13:
					func_428(81);
					break;
				
				case 14:
					func_428(73);
					break;
				
				case 15:
					func_430(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_430(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_430(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_430(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_428(75);
					break;
				
				case 17:
					func_428(76);
					break;
				
				case 18:
					func_428(77);
					break;
				
				case 19:
					func_430(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_430(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_430(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_430(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_428(80);
					break;
				
				case 21:
				case 25:
					func_428(87);
					break;
				
				case 22:
				case 26:
					func_428(88);
					break;
				
				case 23:
				case 27:
					func_428(89);
					break;
				
				case 24:
				case 28:
					func_428(90);
					break;
				
				case 29:
				case 30:
					if (func_427(iParam1))
					{
						func_428(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_33);
					}
					break;
				
				case 31:
					func_430(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_430(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_430(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_430(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_430(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_430(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_430(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_430(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_430(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_430(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_430(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_430(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_430(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_430(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_430(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_430(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_430(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_430(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_430(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_430(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_430(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_430(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_430(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_430(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_430(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_430(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_430(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_430(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_430(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_430(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_430(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_430(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_430(-194.254f, -2018.756f, 26.62f, 75f);
					func_430(-186.956f, -2031.369f, 26.62f, 338f);
					func_430(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_430(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_430(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_430(-233.372f, -2089.601f, 26.62f, 304f);
					func_430(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_430(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_430(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_430(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_430(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_430(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_430(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_430(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_430(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_430(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_430(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_430(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_430(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_430(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_430(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_430(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_424(Param0, &iVar2, &iVar3) || (func_401(Param0, &(iVar2[0])) && (unk_0x00C6FDED3EB75117(iParam1) || unk_0xBA16CD57E37AC32A(iParam1))))
		{
			func_443();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar3[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2635559.f_516 = 1;
				}
				if (!iVar3[iVar0] && func_423(iVar2[iVar0], -1))
				{
					if (func_427(iParam1))
					{
						func_428(iVar2[iVar0]);
					}
				}
				else if (iVar3[iVar0])
				{
					if (((func_422(unk_0x4A8C381C258A124D()) || func_421(unk_0x4A8C381C258A124D())) && unk_0x00C6FDED3EB75117(iParam1)) || unk_0xBA16CD57E37AC32A(iParam1))
					{
						if (func_420(iParam1))
						{
							func_419(iVar2[iVar0]);
						}
						else if (func_418(iParam1))
						{
							func_417(iVar2[iVar0]);
							func_419(iVar2[iVar0]);
						}
						else
						{
							func_417(iVar2[iVar0]);
							func_419(iVar2[iVar0]);
						}
					}
					else
					{
						func_415(iVar2[iVar0], iParam1);
					}
				}
				else
				{
					func_428(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_415(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_430(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_430(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_430(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_430(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_430(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_430(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_430(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_430(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_430(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_430(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_430(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_430(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_430(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_430(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_430(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_430(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_430(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_430(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_430(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_430(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_430(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_430(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_430(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_430(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_430(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_430(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_430(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_430(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_430(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_430(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_430(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_430(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_430(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_430(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_430(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_430(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_430(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_430(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_430(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_430(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_430(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_430(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_430(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_430(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_430(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_430(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_430(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_430(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_430(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_430(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_430(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_430(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_430(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_430(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_430(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_430(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_430(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_430(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_430(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_430(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_430(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_430(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_430(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_430(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_430(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_430(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_430(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_430(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_430(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_430(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_430(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_430(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_430(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_430(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_430(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_430(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_430(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_430(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_430(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_430(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_430(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_430(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_430(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_430(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_430(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_430(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_430(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_430(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_430(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_430(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_430(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_430(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_430(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_430(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_430(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_430(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_430(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_430(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_430(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_430(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_430(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_430(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_430(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_430(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_430(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_430(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_430(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_430(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_430(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_430(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_430(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_430(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_430(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_430(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_430(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_430(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_430(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_430(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_430(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_430(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_430(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_430(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_430(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_430(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_430(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_430(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_430(142.7427f, -2536.147f, 5f, 205.0002f);
			func_430(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_430(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_430(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_430(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_430(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_430(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_430(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_430(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_430(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_430(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_430(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_430(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_430(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_430(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_430(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_430(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_430(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_430(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_430(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_430(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_430(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_430(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_430(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_430(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_430(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_430(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_430(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_430(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_430(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_430(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_430(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_430(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_430(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		case 83:
			func_430(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_430(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_430(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_430(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_430(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_430(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_430(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_430(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_430(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_430(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_430(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_430(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_430(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_430(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_430(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_430(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_430(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_430(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_430(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_430(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_430(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_430(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_430(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_430(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_430(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_430(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_430(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_430(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_430(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_430(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_430(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_430(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_430(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_430(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_430(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_430(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_430(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_430(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_430(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_430(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_430(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_430(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_430(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_430(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_430(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_430(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_430(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_430(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_430(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_430(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_430(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_430(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_430(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_430(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_430(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_430(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_430(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_430(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_430(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_430(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_430(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_430(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_430(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_430(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_430(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_430(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_430(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_430(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_430(-1823.414f, 3092.762f, 31.843f, 330f);
			func_430(-1819.045f, 3100.435f, 31.845f, 330f);
			func_430(-1833.313f, 3075.722f, 31.838f, 330f);
			func_430(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_430(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_430(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_430(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_430(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_430(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_430(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_430(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_430(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_430(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_430(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_430(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_430(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_430(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_430(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_430(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_430(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_430(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_430(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_430(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_430(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_430(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_430(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_430(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_430(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_430(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_430(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_430(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_430(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_430(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_430(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_430(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_430(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_430(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_430(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_430(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_430(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_430(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_430(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_59 == 0)
			{
				func_430(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_430(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_430(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_430(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_430(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_430(1231.279f, 2910.881f, 43.3085f, 12f);
				func_430(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_430(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_430(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_430(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_430(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_430(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_430(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_430(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_430(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_430(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_430(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_430(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_430(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_430(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_430(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_430(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_430(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_430(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_430(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_430(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_430(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_430(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_430(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_430(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_430(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_430(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_430(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_430(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_430(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_430(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_430(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_430(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_59 == 0)
			{
				func_430(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_430(3.855f, 2672.388f, 78.437f, 319.2f);
				func_430(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_430(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_430(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_430(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_430(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_430(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_430(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_430(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_430(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_430(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_430(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_430(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_430(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_430(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_430(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_430(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_430(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_430(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_430(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_430(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_430(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_430(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_430(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_430(102.851f, 2688.009f, 51.732f, 224f);
				func_430(109.815f, 2681.012f, 51.112f, 224f);
				func_430(116.355f, 2674.26f, 50.529f, 224f);
				func_430(125.138f, 2665.98f, 49.8f, 224f);
				func_430(132.228f, 2659.865f, 49.26f, 228.4f);
				func_430(139.354f, 2653.536f, 48.737f, 228.4f);
				func_430(88.512f, 2702.995f, 53.042f, 224.199f);
				func_430(81.565f, 2710.357f, 53.67f, 224.199f);
				func_430(75.156f, 2716.981f, 54.223f, 224.199f);
				func_430(68.442f, 2723.806f, 54.775f, 226.199f);
				func_430(61.449f, 2730.606f, 55.308f, 226.199f);
				func_430(53.702f, 2738.167f, 55.855f, 226.199f);
				func_430(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_59 == 0)
			{
				func_430(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_430(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_430(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_430(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_430(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_430(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_430(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_430(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_430(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_430(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_430(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_430(2714.633f, 3918.283f, 42.938f, 16f);
				func_430(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_430(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_430(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_430(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_430(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_430(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_430(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_430(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_430(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_430(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_430(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_430(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_430(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_430(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_430(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_430(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_430(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_430(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_430(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_430(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_430(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_430(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_430(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_430(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_430(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_430(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_59 == 0)
			{
				func_430(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_430(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_430(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_430(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_430(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_430(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_430(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_430(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_430(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_430(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_430(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_430(3374.923f, 5520.177f, 20.3207f, 86f);
				func_430(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_430(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_430(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_430(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_430(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_430(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_430(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_430(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_430(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_430(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_430(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_430(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_430(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_430(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_430(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_430(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_430(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_430(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_430(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_430(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_430(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_430(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_430(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_430(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_430(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_430(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_59 == 0)
			{
				func_430(43.848f, 6845.657f, 13.379f, 247.2f);
				func_430(50.379f, 6861.146f, 15.105f, 247.2f);
				func_430(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_430(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_430(55.806f, 6875.081f, 14.824f, 247.2f);
				func_430(11.616f, 6877.079f, 11.466f, 247.2f);
				func_430(18.954f, 6891.633f, 11.37f, 247.2f);
				func_430(26.68f, 6907.587f, 11.869f, 247.2f);
				func_430(7.479f, 6907.895f, 12.024f, 247.2f);
				func_430(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_430(35.591f, 6836.608f, 13.288f, 274.4f);
				func_430(36.028f, 6830.135f, 13.801f, 270.8f);
				func_430(35.114f, 6823.884f, 14.527f, 260.8f);
				func_430(48.779f, 6838.693f, 14.337f, 273.6f);
				func_430(56.738f, 6821.8f, 15.244f, 244.8f);
				func_430(48.377f, 6825.895f, 14.656f, 249.8f);
				func_430(49.11f, 6831.439f, 13.991f, 274.8f);
				func_430(53.544f, 6818.275f, 16.342f, 243f);
				func_430(46.162f, 6821.945f, 15.483f, 249.8f);
				func_430(60.129f, 6836.8f, 15.605f, 269.6f);
				func_430(40.88f, 6802.952f, 20.113f, 242.6f);
				func_430(48.203f, 6799.134f, 20.897f, 244.4f);
				func_430(70.449f, 6809.271f, 16.846f, 243f);
				func_430(61.436f, 6814.266f, 16.71f, 244.2f);
				func_430(56.142f, 6793.458f, 19.806f, 242.6f);
				func_430(65.759f, 6791.12f, 18.433f, 276.4f);
				func_430(77.305f, 6805.391f, 18.558f, 245.6f);
				func_430(85.893f, 6800.243f, 18.535f, 249.8f);
				func_430(56.85f, 6780.582f, 18.822f, 297.999f);
				func_430(65.636f, 6784.669f, 18.789f, 293.799f);
				func_430(74.121f, 6788.498f, 18.739f, 293.799f);
				func_430(97.779f, 6796.32f, 19.02f, 276.799f);
				func_430(106.76f, 6796.983f, 18.914f, 272.599f);
				func_430(112.387f, 6802.858f, 18.994f, 210.599f);
				func_430(117.58f, 6802.644f, 18.663f, 209.399f);
				func_430(122.481f, 6802.693f, 18.468f, 209.399f);
				func_430(127.182f, 6802.686f, 18.218f, 209.399f);
				func_430(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_59 == 0)
			{
				func_430(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_430(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_430(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_430(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_430(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_430(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_430(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_430(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_430(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_430(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_430(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_430(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_430(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_430(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_430(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_430(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_430(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_430(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_430(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_430(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_430(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_430(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_430(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_430(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_430(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_430(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_430(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_430(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_430(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_430(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_430(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_430(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_430(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_430(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_430(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_430(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_430(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_430(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_59 == 0)
			{
				func_430(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_430(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_430(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_430(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_430(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_430(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_430(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_430(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_430(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_430(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_430(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_430(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_430(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_430(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_430(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_430(30.027f, 3292.351f, 38.604f, 140.199f);
				func_430(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_430(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_430(23.897f, 3283.152f, 39.381f, 145.399f);
				func_430(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_430(18.723f, 3274.025f, 40.054f, 155.799f);
				func_430(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_430(36.958f, 3298.847f, 38.001f, 127.799f);
				func_430(54.165f, 3311.582f, 36.517f, 303.799f);
				func_430(61.607f, 3317.105f, 35.916f, 306.999f);
				func_430(68.994f, 3323.129f, 35.364f, 308.199f);
				func_430(76.266f, 3329.467f, 34.805f, 311.399f);
				func_430(82.757f, 3335.915f, 34.344f, 316.598f);
				func_430(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_430(14.664f, 3263.688f, 40.931f, 160.398f);
				func_430(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_430(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_430(89.575f, 3343.311f, 33.932f, 318.398f);
				func_430(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_430(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_430(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_430(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_430(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_59 == 0)
			{
				func_430(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_430(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_430(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_430(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_430(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_430(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_430(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_430(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_430(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_430(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_430(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_430(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_430(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_430(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_430(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_430(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_430(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_430(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_430(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_430(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_430(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_430(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_430(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_430(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_430(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_430(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_430(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_430(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_430(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_430(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_430(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_430(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_430(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_430(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_430(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_430(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_430(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_430(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_59 == 0)
			{
				func_430(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_430(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_430(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_430(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_430(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_430(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_430(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_430(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_430(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_430(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_430(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_430(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_430(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_430(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_430(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_430(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_430(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_430(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_430(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_430(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_430(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_430(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_430(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_430(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_430(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_430(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_430(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_430(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_430(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_430(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_430(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_430(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_430(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_430(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_430(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_430(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_430(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_430(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_416(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			func_416(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			func_416(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			func_416(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			func_416(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			func_416(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			func_416(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			func_416(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			func_416(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			func_416(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			func_416(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			func_416(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			func_416(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			func_416(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			func_416(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			func_416(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			func_416(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			func_416(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			func_416(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			func_416(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			func_416(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			func_416(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			func_416(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			func_416(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			func_416(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			func_416(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			func_416(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			func_416(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			func_416(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			func_416(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			func_416(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			func_416(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_416(struct<3> Param0, float fParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	struct<2> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!iParam2 == 0)
	{
		func_327(iParam2, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
		fVar2 = (Var1.f_1 - Var0.f_1);
		if (bParam3)
		{
			fVar2 = (fVar2 * -1f);
		}
		fVar2 = (fVar2 * 0.5f);
		Var3 = { 0f, fVar2, 0f };
		Var4 = { unk_0xF10F2A2453AF1DFB(Param0, fParam1, Var3) };
		func_430(Var4, fParam1);
	}
	else
	{
		func_430(Param0, fParam1);
	}
}

void func_417(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_430(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_430(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_430(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_430(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_430(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_430(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_430(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_430(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_430(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_430(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_430(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_430(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_430(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_430(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_430(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_430(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_430(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_430(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_430(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_430(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_430(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_430(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_430(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_430(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_430(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_430(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_430(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_430(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_430(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_430(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_430(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_430(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_430(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_430(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_430(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_430(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_430(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_430(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_430(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_430(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_430(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_430(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_430(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_430(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_430(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_430(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_430(-1356.991f, -3242.228f, 12.945f, 330f);
			func_430(-1369.313f, -3234.758f, 12.945f, 330f);
			func_430(-1381.751f, -3227.408f, 12.945f, 330f);
			func_430(-1394.302f, -3220.021f, 12.945f, 330f);
			func_430(-1354.339f, -3223.129f, 12.945f, 330f);
			func_430(-1366.302f, -3215.809f, 12.945f, 330f);
			func_430(-1378.492f, -3208.645f, 12.945f, 330f);
			func_430(-1350.322f, -3203.405f, 12.945f, 330f);
			func_430(-1362.684f, -3196.451f, 12.945f, 330f);
			func_430(-1347.089f, -3182.69f, 12.945f, 330f);
			func_430(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_430(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_430(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_430(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_430(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_430(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_430(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_430(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_430(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_430(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_430(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_430(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_430(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_430(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_430(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_430(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_430(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_430(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_430(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_430(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_430(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_430(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_430(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_430(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_430(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_430(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_430(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_430(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_430(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_430(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_430(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_430(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_430(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_430(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_430(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_430(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_430(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_430(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_430(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_430(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_430(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_430(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_430(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_430(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_430(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_430(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_430(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_430(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_430(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_430(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_430(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_430(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_430(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_430(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_430(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_430(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_430(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_430(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_430(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_430(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_430(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_430(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_430(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_430(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_430(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_430(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_430(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_430(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_430(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_430(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_430(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_430(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_430(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_430(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_430(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_430(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_430(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_430(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_430(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_430(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_430(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_430(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_430(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_430(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_430(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_430(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_430(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_430(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_430(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_430(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_430(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_430(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_430(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_430(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_430(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_430(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_430(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_430(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_430(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_430(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_430(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_430(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_430(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_430(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_430(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_430(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_430(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_430(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_430(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_430(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_430(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_430(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_430(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_430(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_430(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_430(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_430(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_430(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_430(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_430(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_430(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_430(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_430(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_430(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_430(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_430(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_430(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_430(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_430(-2484.323f, 3249.294f, 31.828f, 151f);
			func_430(-2495.313f, 3255.746f, 31.828f, 151f);
			func_430(-2472.644f, 3242.684f, 31.828f, 151f);
			func_430(-2506.313f, 3262.27f, 31.823f, 151f);
			func_430(-2461.494f, 3235.93f, 31.828f, 151f);
			func_430(-2505.602f, 3238.049f, 31.828f, 151f);
			func_430(-2481.937f, 3224.8f, 31.828f, 151f);
			func_430(-2516.813f, 3244.266f, 31.823f, 151f);
			func_430(-2470.03f, 3217.899f, 31.828f, 151f);
			func_430(-2493.933f, 3231.308f, 31.828f, 151f);
			func_430(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_430(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_430(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_430(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_430(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_430(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_430(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_430(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_430(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_430(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_430(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_430(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_430(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_430(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_430(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_430(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_430(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_430(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_430(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_430(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_430(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_430(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_430(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_430(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_430(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_430(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_430(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_430(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_430(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_430(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_430(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_430(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_430(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_430(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_430(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_430(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_418(int iParam0)
{
	switch (iParam0)
	{
		case joaat("microlight"):
		case joaat("havok"):
		case joaat("seabreeze"):
		case joaat("rogue"):
		case joaat("pyro"):
		case joaat("buzzard"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
		case joaat("cuban800"):
		case joaat("besra"):
		case joaat("duster"):
		case joaat("stunt"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("lazer"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("starling"):
		case joaat("conada"):
			return 1;
		
		default:
	}
	return 0;
}

void func_419(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_430(-947.712f, -3367.704f, 12.944f, 60f);
			func_430(-904.692f, -3293.072f, 12.944f, 60f);
			func_430(-863.71f, -3221.978f, 12.944f, 60f);
			func_430(-966.418f, -3162.773f, 12.944f, 60f);
			func_430(-1007.435f, -3233.93f, 12.944f, 60f);
			func_430(-1050.455f, -3308.559f, 12.944f, 60f);
			func_430(-1145.673f, -3253.456f, 12.944f, 60f);
			func_430(-1098.386f, -3181.428f, 12.944f, 60f);
			func_430(-1060.474f, -3108.903f, 12.944f, 60f);
			func_430(-1155.391f, -3053.632f, 12.944f, 60f);
			func_430(-1196.114f, -3125.146f, 12.948f, 60f);
			func_430(-1235.552f, -3201.86f, 12.944f, 60f);
			func_430(-1344.446f, -3139.177f, 12.944f, 60f);
			func_430(-1301.308f, -3064.341f, 12.944f, 60f);
			func_430(-1260.135f, -2992.912f, 12.944f, 60f);
			func_430(-1364.244f, -2932.9f, 12.98f, 60f);
			func_430(-1405.284f, -3004.108f, 12.96f, 60f);
			func_430(-1448.29f, -3078.72f, 12.95f, 60f);
			func_430(-1535.732f, -3028.318f, 12.945f, 60f);
			func_430(-1492.639f, -2953.558f, 12.945f, 60f);
			func_430(-1451.506f, -2882.2f, 12.944f, 60f);
			func_430(-1553.927f, -2823.12f, 13.002f, 60f);
			func_430(-1595.097f, -2894.571f, 12.944f, 60f);
			func_430(-1637.836f, -2968.714f, 12.945f, 60f);
			func_430(-1740.971f, -2911.484f, 12.944f, 330f);
			func_430(-1696.293f, -2833.978f, 12.944f, 330f);
			func_430(-1651.502f, -2756.273f, 12.945f, 330f);
			func_430(-1588.258f, -2647.575f, 12.944f, 330f);
			func_430(-1536.862f, -2681.378f, 12.945f, 330f);
			func_430(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_430(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_430(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_430(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_430(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_430(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_430(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_430(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_430(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_430(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_430(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_430(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_430(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_430(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_430(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_430(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_430(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_430(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_430(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_430(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_430(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_430(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_430(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_430(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_430(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_430(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_430(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_430(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_430(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_430(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_430(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_420(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hydra"):
		case joaat("dodo"):
		case joaat("mammatus"):
		case joaat("annihilator"):
		case joaat("tula"):
		case joaat("hunter"):
		case joaat("mogul"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("shamal"):
		case joaat("savage"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("valkyrie"):
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("miljet"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("alkonost"):
			return 1;
		
		default:
	}
	return 0;
}

int func_421(int iParam0)
{
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	if (vdist(unk_0xD1A6A821F5AC81DB(iParam0, 1), -1308.118f, -2934.27f, 13.7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_422(int iParam0)
{
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	if (vdist(unk_0xD1A6A821F5AC81DB(iParam0, 1), -2270.245f, 3127.913f, 31.8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_423(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_424(struct<2> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 130)
	{
		if (iVar2 < *uParam2)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (vdist(Param0.f_0, Param0.f_1, 0f, Global_1312228[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1312228[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
				{
					(*uParam2)[iVar2] = iVar0;
					(*uParam3)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 162)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_402(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (func_425(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 123 && iVar0 <= 125)
		{
			fVar3 = 150f;
		}
		if (iVar2 < *uParam2)
		{
			fVar4 = vdist(Param0.f_0, Param0.f_1, 0f, Global_1950108.f_542[iVar0 /*3*/], Global_1950108.f_542[iVar0 /*3*/].f_1, 0f);
			if (fVar4 < fVar3)
			{
				(*uParam2)[iVar2] = iVar0;
				(*uParam3)[iVar2] = 1;
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_425(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_426(iParam0);
	if (Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_300 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10;
	if (iVar1 != func_74())
	{
		if (Global_1853910[iVar1 /*862*/].f_267.f_300 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_321.f_7 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_426(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_427(int iParam0)
{
	if ((unk_0x78B050AFBA6D1517(iParam0) || unk_0x9910CD0D8626AA28(iParam0)) || unk_0x3801E353091A2E42(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_428(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_430(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_430(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_430(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_430(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case 79:
			func_430(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_430(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_430(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_430(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_430(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_430(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_430(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_430(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_430(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_430(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_430(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_430(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_430(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_430(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_430(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_430(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_430(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_430(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_430(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_430(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_430(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_430(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_430(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_430(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_430(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_430(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_430(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_430(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_430(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_430(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_430(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_430(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_429())
			{
				func_430(-1608.297f, -556.875f, 33.406f, 310f);
				func_430(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_430(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_430(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_430(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_430(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_430(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_430(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_430(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_430(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_430(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_430(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_429())
			{
				func_430(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_430(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_430(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_430(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_430(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_430(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_430(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_430(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_430(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_430(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_430(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_430(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_429())
			{
				func_430(-102.737f, -597.379f, 35.053f, 160.999f);
				func_430(-97.793f, -589.568f, 35.082f, 134.799f);
				func_430(-110.357f, -619.402f, 35.055f, 160.599f);
				func_430(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_430(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_430(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_430(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_430(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_430(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_430(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_430(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_430(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_429())
			{
				func_430(-59.349f, -779.238f, 43.134f, 228.398f);
				func_430(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_430(-65.212f, -772.66f, 43.151f, 219.398f);
				func_430(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_430(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_430(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_430(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_430(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_430(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_430(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_430(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_430(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_430(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_430(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_430(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_430(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_430(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_430(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_430(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_430(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_430(-1464.5f, -927.9f, 9f, 296.7991f);
			func_430(-1466f, -926.1f, 9f, 296.7991f);
			func_430(-1467.9f, -924.7f, 9f, 296.7991f);
			func_430(-1469.7f, -923.7f, 9f, 296.7991f);
			func_430(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_430(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_430(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_430(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_430(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_430(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_430(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_430(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_430(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_430(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_430(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_430(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_430(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_430(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_430(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_430(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_430(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_430(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_430(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_430(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_430(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_430(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_430(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_430(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_430(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_430(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_430(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_430(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_430(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_430(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_430(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_430(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_430(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_430(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_430(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_430(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_430(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_430(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_430(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_430(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_430(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_430(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_430(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_430(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_430(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_430(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_430(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_430(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_430(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_430(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_430(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_430(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_430(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_430(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_430(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_430(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_430(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_430(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_430(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_430(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_430(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_430(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_430(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_430(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_430(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_430(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_430(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_430(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_430(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_430(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_430(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_430(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_430(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_430(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_430(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_430(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_430(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_430(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_430(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_430(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_430(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_430(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_430(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_430(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_429()
{
	return Global_2683864.f_17;
}

void func_430(struct<3> Param0, float fParam1)
{
	if (Global_2635559.f_1754 < 101)
	{
		if (vmag(Param0) <= 0.01f)
		{
			return;
		}
		Global_2635559.f_1755[Global_2635559.f_1754 /*4*/] = { Param0 };
		Global_2635559.f_1755[Global_2635559.f_1754 /*4*/].f_3 = fParam1;
		Global_2635559.f_1754++;
	}
}

int func_431(struct<3> Param0)
{
	int iVar0;
	
	if (vdist(Global_2635559.f_2904, Param0) < Global_2635559.f_2912)
	{
		return Global_2635559.f_2907;
	}
	Global_2635559.f_2904 = { Param0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2642883[iVar0 /*7*/].f_2 + Global_2642883[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_375(Param0, &(Global_2642883[iVar0 /*7*/])))
		{
			Global_2635559.f_2907 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2635559.f_2907 = -1;
	return -1;
}

int func_432()
{
	if (BitTest(Global_4718592.f_13, 0) && !Global_2684801.f_6436)
	{
		return 0;
	}
	return 0;
}

int func_433(struct<2> Param0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam2)
		{
			if (func_402(iVar0))
			{
				fVar1 = fParam3;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam3;
		}
		fVar2 = vdist(Param0.f_0, Param0.f_1, 0f, Global_1950108.f_542[iVar0 /*3*/], Global_1950108.f_542[iVar0 /*3*/].f_1, 0f);
		if (fVar2 < fVar1)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_434()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2635559.f_2737[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_435(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2642839[iVar0 /*7*/].f_2 + Global_2642839[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_375(Var1, &(Global_2642839[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_386(&Var1, Global_2642839[iVar0 /*7*/], Global_2642839[iVar0 /*7*/].f_3, Global_2642839[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_436(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2635559.f_515 && !Global_2635559.f_516)
	{
		if (!Global_2635559.f_45.f_317)
		{
			if (!func_440(unk_0x259BE71D8A81D4FA(), 1))
			{
				return 1;
			}
			if (!func_439(Param0, 1008981770))
			{
				if (!func_392(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_392(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_438(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_437(&(Global_2635559.f_45[iVar0 /*12*/])) };
					if (!func_392(&Var1, 0, 0, 0, 1))
					{
						if (!func_392(&Param0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_437(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_438(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635559.f_45[iVar0 /*12*/].f_9)
		{
			if (func_379(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_439(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635559.f_45[iVar0 /*12*/].f_9)
		{
			if (func_379(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_440(bool bParam0, bool bParam1)
{
	if (func_218() != 0)
	{
		return func_441(bParam0) != 0;
	}
	return func_357(bParam0, bParam1, 0);
}

int func_441(int iParam0)
{
	if (func_9(iParam0, 0, 1))
	{
		return Global_2657589[iParam0 /*466*/].f_1;
	}
	return 0;
}

int func_442(bool bParam0)
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

void func_443()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2635559.f_1755[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2635559.f_1754 = 0;
}

void func_444()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xF40767E41852FB72(Global_2635559.f_691[iVar0]))
		{
			if (unk_0x8F76B2250AC806FA() == Global_2635559.f_691[iVar0])
			{
				if (!Global_2635559.f_687[iVar0] == -1)
				{
					if (unk_0x8256312AC2E5471D(Global_2635559.f_687[iVar0]))
					{
						unk_0x0C2A05549FF0EB55(Global_2635559.f_687[iVar0]);
						Global_2635559.f_687[iVar0] = -1;
					}
					else
					{
						Global_2635559.f_687[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2635559.f_687[iVar0] == -1)
		{
			Global_2635559.f_687[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_445()
{
	if (!Global_2635559.f_606 == 0 && unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635559.f_611) < func_442(0))
	{
		return 1;
	}
	return 0;
}

int func_446()
{
	if (unk_0x3555462DB47B7AB1())
	{
		if (!unk_0x6D231A0D52134FC1() > 7 && !unk_0x6D231A0D52134FC1() == 5)
		{
			return 0;
		}
	}
	if (Global_2635559.f_517 == unk_0x8034325BF6D6E41F())
	{
		return 0;
	}
	if (!func_448(unk_0x259BE71D8A81D4FA()) && !func_447(0))
	{
		return 0;
	}
	return 1;
}

bool func_447(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

int func_448(bool bParam0)
{
	if (bParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2672505.f_1, bParam0);
	}
	return 1;
}

int func_449(int iParam0)
{
	if (!func_143(1, iParam0))
	{
		return 0;
	}
	if (unk_0xD65DFBCD23E76428(bLocal_618))
	{
		return 0;
	}
	Stack.Push(Local_214.f_373.f_54 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_373.f_54);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_450(int iParam0)
{
	int iVar0;
	
	if (Local_214.f_373.f_34 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_373.f_34);
		iVar0 = StackVal;
		if (iVar0 != -1)
		{
			if (!func_13(&(Local_674.f_353[iParam0 /*8*/].f_6), iVar0, 0))
			{
				return 0;
			}
			else
			{
				func_54(&(Local_674.f_353[iParam0 /*8*/].f_6));
			}
		}
	}
	return 1;
}

int func_451(int iParam0)
{
	if (Local_214.f_373.f_23 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_373.f_23);
		return StackVal;
	}
	return 1;
}

void func_452(int iParam0, int iParam1)
{
	if (Local_197.f_356.f_1[iParam0 /*15*/].f_9 == -1)
	{
		return;
	}
	if (func_142(iParam0) > 2 && func_142(iParam0) < 5)
	{
		if (func_453(iParam0, iParam1))
		{
			func_178(iParam0, 2);
		}
		else
		{
			func_177(iParam0, 2);
		}
	}
}

bool func_453(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam1))
	{
		iVar0 = func_455(iParam1);
		if (iVar0 != func_74() && unk_0xCCD470854FB0E643(iVar0))
		{
			iVar1 = unk_0x857CA6FCE5E9C84F(bVar0);
			return func_454(iVar1, 2);
		}
	}
	return func_172(iParam0, 2);
}

bool func_454(int iParam0, int iParam1)
{
	return func_4(&(Local_696[iParam0 /*118*/].f_1), iParam1);
}

bool func_455(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0) && !unk_0xC39AE5D390581AD5(iParam0, -1, 0))
	{
		iVar0 = unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0);
		if (!unk_0x4FAFF4BCB7633475(iVar0))
		{
			bVar1 = unk_0x1C1C92A1CBAE364B(iVar0);
			if (bVar1 != func_74() && func_9(bVar1, 0, 1))
			{
				return bVar1;
			}
		}
	}
	return func_74();
}

int func_456(int iParam0, int iParam1, bool bParam2)
{
	return 0;
}

void func_457(int iParam0, int iParam1)
{
	Local_674.f_353[iParam0 /*8*/].f_1 = iParam1;
}

int func_458(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_460())
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Local_197.f_19)
	{
		if (iParam0 == func_459(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_459(int iParam0)
{
	return Local_674.f_2.f_27[iParam0];
}

int func_460()
{
	return Local_197.f_19.f_5[0 /*13*/].f_11;
}

int func_461(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x2EEC0612337D20CE(iParam0) + 1;
	if (iParam4 || !unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_462(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0xFC8BFE4B41177C22(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x4A8C381C258A124D())
				{
				}
				else if (bParam2)
				{
					if (unk_0x501EBB0523078750(iVar2))
					{
						iVar3 = unk_0x1C1C92A1CBAE364B(iVar2);
						if (((!unk_0x4FAFF4BCB7633475(iVar2) && iVar3 != func_74()) && func_9(iVar3, 1, 1)) || iParam8)
						{
							if (unk_0xE7B45027762DEFE7(unk_0x1C1C92A1CBAE364B(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0x4FAFF4BCB7633475(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_462(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0xC39AE5D390581AD5(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0xFD5C5BBD1FE92BB7(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xFC8BFE4B41177C22(iVar0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			iVar0 = unk_0x6B854773972E76E4(iParam0, iParam1);
			if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				if (unk_0x9B5C1660CCDF7189(iVar0, joaat("script_task_leave_vehicle")) == 1 || unk_0x9B5C1660CCDF7189(iVar0, joaat("script_task_leave_any_vehicle")) == 1)
				{
					if (vdist(unk_0xD1A6A821F5AC81DB(iParam0, 0), unk_0xD1A6A821F5AC81DB(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

int func_463(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return !func_464(unk_0xE38610F405049F71(uParam0));
	}
	return 0;
}

int func_464(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
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

void func_465()
{
	func_466();
}

void func_466()
{
	struct<20> Var0;
	
	if (!func_3(8))
	{
		if (func_474() > 0 && Local_590.f_0 > 0)
		{
			if (func_1251(53))
			{
				Var0 = { func_473(func_10()) };
				if (func_467(func_10(), Local_674.f_552, &Var0))
				{
					func_16(8);
				}
			}
		}
	}
}

int func_467(bool bParam0, struct<3> Param1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_472(Param1))
	{
		return 0;
	}
	if (bParam0 == func_74())
	{
		return 0;
	}
	if (*uParam2 > 18)
	{
		return 0;
	}
	iVar0 = func_471(bParam0);
	if (iVar0 != -1)
	{
		iVar1 = 0;
		while (iVar1 < *uParam2)
		{
			if ((*uParam2)[iVar1] != 0)
			{
				iVar2 = func_470(iVar0, (*uParam2)[iVar1]);
				if (iVar2 != -1)
				{
					if (!func_469(Param1, Global_2650102.f_199.f_962[iVar0 /*75*/].f_20[iVar2 /*3*/]))
					{
						if (!func_15(&(Global_1956139.f_5765)) || func_13(&(Global_1956139.f_5765), 10000, 0))
						{
							func_18(&(Global_1956139.f_5765), 0, 0);
							func_468(bParam0, Param1, uParam2);
						}
						return 0;
					}
				}
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

void func_468(bool bParam0, struct<3> Param1, var uParam2)
{
	struct<26> Var0;
	int iVar1;
	int iVar2;
	
	if (!func_472(Param1))
	{
		return;
	}
	if (*uParam2 > 18)
	{
		return;
	}
	if (*uParam2 <= 0)
	{
		return;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1000;
	Var0.f_6 = 18;
	Var0.f_0 = 1812472025;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_2 = bParam0;
	Var0.f_3 = { Param1 };
	Var0.f_25 = *uParam2;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		Var0.f_6[iVar1] = (*uParam2)[iVar1];
		iVar1++;
	}
	iVar2 = func_211(1, 1);
	if (!iVar2 == 0)
	{
		unk_0x01F0B819E78A18A1(1, &Var0, 26, iVar2);
	}
}

int func_469(struct<3> Param0, struct<3> Param1)
{
	if (!func_472(Param0))
	{
		return 0;
	}
	if (Param0.f_0 == Param1.f_0 && Param0.f_2 == Param1.f_2)
	{
		return 1;
	}
	return 0;
}

int func_470(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (iParam1 == Global_2650102.f_199.f_962[iParam0 /*75*/].f_1[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_471(bool bParam0)
{
	int iVar0;
	
	if (func_9(bParam0, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Global_2650102.f_199.f_962[iVar0 /*75*/] == bParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_472(struct<3> Param0)
{
	if (Param0.f_0 == -1 || Param0.f_2 == -1000)
	{
		return 0;
	}
	return 1;
}

struct<20> func_473(int iParam0)
{
	struct<20> Var0;
	int iVar1;
	int iVar2;
	
	Var0 = 18;
	Var0.f_19 = 0;
	if (!func_79(iParam0))
	{
		return Var0;
	}
	if (func_9(iParam0, 0, 1))
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Global_2650102.f_199.f_962[iVar1 /*75*/] == iParam0)
			{
				iVar2 = 0;
				while (iVar2 < 18)
				{
					if (Global_2650102.f_199.f_962[iVar1 /*75*/].f_1[iVar2] != 0 && !func_472(Global_2650102.f_199.f_962[iVar1 /*75*/].f_20[iVar2 /*3*/]))
					{
						Var0[Var0.f_19] = Global_2650102.f_199.f_962[iVar1 /*75*/].f_1[iVar2];
						Var0.f_19++;
					}
					iVar2++;
				}
			}
			else
			{
				iVar1++;
			}
		}
	}
	return Var0;
}

int func_474()
{
	int iVar0;
	
	iVar0 = (iVar0 + func_28());
	return iVar0;
}

void func_475()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		func_487(iVar0);
		func_482(iVar0);
		iVar0++;
	}
	func_476();
}

void func_476()
{
	if (Local_197.f_19 <= 0)
	{
		return;
	}
	if (!func_481())
	{
		return;
	}
	Stack.Push(Local_214.f_120.f_36 != 0);
	Call_Loc(Local_214.f_120.f_36);
	if (StackVal && StackVal)
	{
		return;
	}
	if (func_480())
	{
		if (func_479())
		{
			func_8(5);
		}
	}
	else if (func_477())
	{
		func_8(5);
	}
}

int func_477()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (func_478(iVar0, 3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_478(int iParam0, int iParam1)
{
	return func_4(&(Local_674.f_2.f_14[iParam0 /*3*/]), iParam1);
}

int func_479()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (!func_478(iVar0, 3))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_480()
{
	return func_85(0);
}

int func_481()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (!func_478(iVar0, 6))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_482(int iParam0)
{
	if (func_478(iParam0, 29) && func_485(iParam0))
	{
		if (func_484(iParam0))
		{
			func_483(iParam0, 29);
		}
	}
}

void func_483(int iParam0, int iParam1)
{
	if (func_131(&(Local_674.f_2.f_14[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_484(int iParam0)
{
	int iVar0;
	
	if (func_485(iParam0))
	{
		iVar0 = func_459(iParam0);
		return (Local_674.f_353[iVar0 /*8*/].f_1 == 5 || func_478(iParam0, 0));
	}
	return 1;
}

bool func_485(int iParam0)
{
	return (func_486(iParam0) && func_460() == 2);
}

bool func_486(int iParam0)
{
	return Local_674.f_2.f_27[iParam0] != -1;
}

void func_487(int iParam0)
{
	if (Local_197.f_19.f_5[iParam0 /*13*/].f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_120.f_23);
		if (StackVal)
		{
			if (!func_478(iParam0, 6))
			{
				if (func_42(Local_197.f_19.f_5[iParam0 /*13*/].f_2))
				{
					if (unk_0xF95A1422CB355630(1))
					{
						if (func_489(iParam0))
						{
							func_488(iParam0, 6);
						}
					}
				}
			}
		}
	}
}

void func_488(int iParam0, int iParam1)
{
	if (func_17(&(Local_674.f_2.f_14[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_489(int iParam0)
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	
	if (!unk_0x2FC2FDC413532977(Local_674.f_2[iParam0]))
	{
		Var0 = { func_523(iParam0) };
		fVar1 = Local_197.f_19.f_5[iParam0 /*13*/].f_6;
		Var2 = { Local_197.f_19.f_5[iParam0 /*13*/].f_7 };
		if (func_33(Var0))
		{
			return 0;
		}
		Local_674.f_2[iParam0] = unk_0x16FE0AE33E462D17(unk_0x29F49A5884D2FD3C(func_522(iParam0), Var0, !func_521(iParam0, 0), Local_197.f_19.f_5[iParam0 /*13*/].f_2));
		unk_0x5C96CEA06531AB03(unk_0xAB3646235DE50E93(Local_674.f_2[iParam0]), fVar1);
		if (!func_33(Var2))
		{
			unk_0xCF39804E8C88080E(unk_0xF5014688C9788D5F(Local_674.f_2[iParam0]), Var2, 2, 1);
		}
		func_515(iParam0, Var0);
		if (Local_214.f_120.f_30 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_214.f_120.f_30);
		}
	}
	if (unk_0x2FC2FDC413532977(Local_674.f_2[iParam0]))
	{
		if (func_490(&(Local_674.f_2.f_37[iParam0]), 0, iParam0, func_514(iParam0), func_513(), func_512(iParam0), func_511(iParam0)))
		{
			func_193(unk_0xF5014688C9788D5F(Local_674.f_2[iParam0]), Local_674.f_577.f_1[func_194(iParam0) /*5*/].f_1);
			Local_674.f_2.f_32[iParam0] = unk_0x39D1D336459711BE();
			return 1;
		}
	}
	return 0;
}

int func_490(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, var uParam5, var uParam6)
{
	if (*uParam0 == -1)
	{
		*uParam0 = func_510();
		if (*uParam0 == -1)
		{
			return 0;
		}
	}
	if (Local_674.f_577 != iParam4)
	{
		Local_674.f_577 = iParam4;
	}
	if (Local_674.f_577.f_1[*uParam0 /*5*/].f_2 == -1)
	{
		Local_674.f_577.f_1[*uParam0 /*5*/].f_2 = iParam1;
		Local_674.f_577.f_1[*uParam0 /*5*/].f_3 = iParam2;
	}
	if (func_491(&(Local_674.f_577.f_1[*uParam0 /*5*/]), bParam3, *uParam0, Local_674.f_577, &(Local_674.f_552), uParam5, uParam6))
	{
		return 1;
	}
	return 0;
}

int func_491(var uParam0, bool bParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	bool bVar5;
	
	if (bParam1 == func_74())
	{
		return 0;
	}
	if (!func_472(*uParam4))
	{
		if (unk_0x93E08E0F531E2C35())
		{
			*uParam4 = { func_509() };
		}
		else
		{
			return 0;
		}
	}
	if (!func_469(*uParam4, Global_1956139.f_5767))
	{
		if ((unk_0x8034325BF6D6E41F() - Global_1956139.f_5767.f_4) <= 90 || (func_15(&(Global_1956139.f_5590)) && !func_13(&(Global_1956139.f_5590), 1500, 0)))
		{
			return 0;
		}
		else
		{
			func_507();
			func_506(*uParam4);
		}
	}
	if (BitTest(Global_1956139.f_5767.f_3, 31))
	{
		iVar1 = (Global_1956139.f_5767.f_4 - 1);
		if (unk_0x8034325BF6D6E41F() == iVar1)
		{
			return 0;
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_1956139.f_5767.f_3), 31);
		}
	}
	if (Global_1956139.f_5767.f_4 == 0)
	{
		Global_1956139.f_5767.f_4 = unk_0x8034325BF6D6E41F();
		bVar0 = false;
		while (bVar0 < 20)
		{
			Global_1956139.f_5772[bVar0] = -1;
			iVar2 = func_504(unk_0x259BE71D8A81D4FA(), bVar0);
			if (func_503(iVar2))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1956139.f_5767.f_3), bVar0);
			}
			bVar0++;
		}
	}
	uVar3 = func_502(bParam1, bParam2);
	*uParam0 = bParam1;
	uParam0->f_1 = uVar3;
	if (func_501(*uParam0))
	{
		Var4 = { func_499(*uParam0) };
		if ((Global_1956139.f_5767.f_4 == unk_0x8034325BF6D6E41F() || func_498(*uParam0) != iParam3) || !func_469(*uParam4, Var4))
		{
			if (Global_1956139.f_5767.f_4 != unk_0x8034325BF6D6E41F())
			{
				Global_1956139.f_5767.f_4 = unk_0x8034325BF6D6E41F();
				if (Global_1956139.f_5772[bVar0] == uParam0->f_1)
				{
					Global_1956139.f_5772[bVar0] = -1;
				}
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1956139.f_5767.f_3), bParam2);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1956139.f_5767.f_3), 31);
			uParam0->f_1 = -1;
			Global_1956139.f_5767.f_4++;
			return 0;
		}
		else
		{
			func_493(*uParam0, "FREEMODE_DELIVERY_CREATE_DELIVERABLE");
			return 1;
		}
	}
	if (Global_1956139.f_5772[bParam2] == -1)
	{
		Global_1956139.f_5772[bParam2] = uVar3;
	}
	if (!func_15(&(Global_1956139.f_5590)) || func_13(&(Global_1956139.f_5590), 1500, 0))
	{
		bVar5 = true;
		func_18(&(Global_1956139.f_5590), 0, 0);
	}
	if (!bVar5)
	{
		if (unk_0x8034325BF6D6E41F() == Global_1956139.f_5592)
		{
			bVar5 = true;
		}
	}
	if (bVar5)
	{
		func_492(*uParam0, iParam3, uParam5, *uParam4, uParam6);
		Global_1956139.f_5592 = unk_0x8034325BF6D6E41F();
	}
	return 0;
}

void func_492(struct<2> Param0, int iParam1, var uParam2, struct<3> Param3, var uParam4)
{
	struct<10> Var0;
	int iVar1;
	
	if (!func_472(Param3))
	{
		return;
	}
	Var0.f_2.f_1 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_6.f_2 = -1000;
	Var0.f_0 = 265264873;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_2 = { Param0 };
	Var0.f_4 = iParam1;
	Var0.f_9 = uParam2;
	Var0.f_5 = uParam4;
	Var0.f_6 = { Param3 };
	iVar1 = func_211(1, 1);
	if (!iVar1 == 0)
	{
		unk_0x01F0B819E78A18A1(1, &Var0, 10, iVar1);
	}
}

void func_493(struct<2> Param0, char* sParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	char cVar6[16];
	
	bVar0 = false;
	if (bVar0)
	{
		if (unk_0xD6F9DEE4765092A9(sParam1))
		{
			sParam1 = "FREEMODE_DELIVERY_DEBUG_PRINT_DELIVERABLE_ID";
		}
		bVar1 = func_497(Param0);
		bVar2 = func_501(Param0);
		uVar3 = func_498(Param0);
		iVar4 = func_496(Param0);
		uVar5 = func_494(Param0);
		if (iVar4 == 0)
		{
			StringCopy(&cVar6, "Initial", 16);
		}
		else if (iVar4 == 2)
		{
			StringCopy(&cVar6, "Delivered", 16);
		}
		else if (iVar4 == -1)
		{
			StringCopy(&cVar6, "Invalid", 16);
		}
		else
		{
			IntToString(&cVar6, iVar4, 16);
		}
	}
}

int func_494(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2650102.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_495(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return Global_2650102.f_199.f_1[iVar0 /*15*/].f_14;
		}
		iVar0++;
	}
	return 0;
}

int func_495(struct<2> Param0, struct<2> Param1)
{
	if (Param0.f_1 != -1 && Param1.f_1 != -1)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return 0;
}

int func_496(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2650102.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_495(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return Global_2650102.f_199.f_1[iVar0 /*15*/];
		}
		iVar0++;
	}
	return -1;
}

bool func_497(struct<2> Param0)
{
	return (Param0.f_1 != -1 && Param0.f_0 != func_74());
}

int func_498(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2650102.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_495(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return Global_2650102.f_199.f_1[iVar0 /*15*/].f_3;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_499(struct<2> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_500(Param0);
	if (iVar0 < 0 || iVar0 >= 64)
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1.f_2 = -1000;
		return Var1;
	}
	return Global_2650102.f_199.f_1[iVar0 /*15*/].f_11;
}

int func_500(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (func_495(Param0, Global_2650102.f_199.f_1[iVar0 /*15*/].f_1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_501(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2650102.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_495(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_502(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (Global_1956139.f_5772[iParam1] != -1)
	{
		return Global_1956139.f_5772[iParam1];
	}
	bVar0 = false;
	while (bVar0 < 31)
	{
		if (!BitTest(Global_1956139.f_5767.f_3, bVar0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1956139.f_5767.f_3), bVar0);
			return func_504(bParam0, bVar0);
		}
		bVar0++;
	}
	return -1;
}

int func_503(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2650102.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && Global_2650102.f_199.f_1[iVar0 /*15*/].f_1.f_1 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_504(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_505(bParam0);
	return (iVar0 + bParam1);
}

int func_505(bool bParam0)
{
	return unk_0x70E57E9927B6BA58(unk_0xBD6CA019F46AB947(bParam0));
}

void func_506(struct<3> Param0)
{
	Global_1956139.f_5767 = { Param0 };
}

void func_507()
{
	Global_1956139.f_5767.f_3 = 0;
	Global_1956139.f_5767.f_4 = 0;
	Global_1956139.f_5767 = { func_508() };
}

Vector3 func_508()
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1000;
	return Var0;
}

Vector3 func_509()
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1000;
	Var0.f_1 = unk_0x39D1D336459711BE();
	Var0.f_0 = unk_0x931D15B1D60C81B0();
	Var0.f_2 = unk_0xF25E5B7C1279A85B();
	return Var0;
}

int func_510()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!func_497(Local_674.f_577.f_1[iVar1 /*5*/]))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_511(int iParam0)
{
	return 0;
}

int func_512(int iParam0)
{
	return 1;
}

int func_513()
{
	return 23;
}

bool func_514(int iParam0)
{
	return func_10();
}

void func_515(int iParam0, struct<3> Param1)
{
	if (func_486(iParam0))
	{
		func_488(iParam0, 29);
		if (iParam0 != func_520(func_459(iParam0)))
		{
			func_488(iParam0, 40);
		}
	}
	else if (!func_521(iParam0, 7))
	{
		func_488(iParam0, 39);
	}
	unk_0x3C1752E361ED8FC9(Local_674.f_2[iParam0], 1);
	unk_0xF88FC425EC7D675D(unk_0xAB3646235DE50E93(Local_674.f_2[iParam0]), 1200);
	unk_0xD25E9BDC14A0B649(unk_0xAB3646235DE50E93(Local_674.f_2[iParam0]), 50, 0);
	unk_0x935364B4448CD584(unk_0xAB3646235DE50E93(Local_674.f_2[iParam0]), true);
	unk_0xD0F1DB0E50B367AD(unk_0xAB3646235DE50E93(Local_674.f_2[iParam0]), true, true, false, true, true, 1, 1, 0);
	unk_0x788F35D395511DFE(unk_0xF5014688C9788D5F(Local_674.f_2[iParam0]), 1, 1);
	unk_0x11C125313CB8ADA2(unk_0xF5014688C9788D5F(Local_674.f_2[iParam0]), true);
	unk_0xB192A63C891A0E89(unk_0xAB3646235DE50E93(Local_674.f_2[iParam0]), 1);
	unk_0x6FDDD37A4022A641(unk_0xAB3646235DE50E93(Local_674.f_2[iParam0]), 1);
	if (func_519())
	{
		unk_0x95ED454235D93943(unk_0xAB3646235DE50E93(Local_674.f_2[iParam0]), 1);
	}
	if (func_518(iParam0))
	{
		unk_0x5D7CD709B34C90F0(unk_0xAB3646235DE50E93(Local_674.f_2[iParam0]), true);
	}
	else
	{
		func_488(iParam0, 28);
	}
	if (!func_521(iParam0, 1))
	{
		unk_0x711CB952E5BE087E(unk_0xAB3646235DE50E93(Local_674.f_2[iParam0]));
	}
	if (func_521(iParam0, 2))
	{
		unk_0xB2BD5837A8D3CEDA(unk_0xAB3646235DE50E93(Local_674.f_2[iParam0]), Param1, 1, 0, 0, 1);
	}
	if (func_521(iParam0, 3))
	{
		unk_0x79B52EC5A9AB6229(unk_0xAB3646235DE50E93(Local_674.f_2[iParam0]));
		unk_0x4B46E3AF872076CE(unk_0xAB3646235DE50E93(Local_674.f_2[iParam0]), 1);
	}
	if (func_521(iParam0, 4))
	{
		unk_0xC7D381E526A969D3(unk_0xF5014688C9788D5F(Local_674.f_2[iParam0]), 1);
	}
	if ((func_521(iParam0, 6) || func_521(iParam0, 7)) || func_486(iParam0))
	{
		unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_674.f_2[iParam0]), false, 0);
	}
	if (Local_197.f_19.f_5[iParam0 /*13*/].f_12 != -1)
	{
		func_488(iParam0, 23);
	}
	if (func_517(iParam0))
	{
		unk_0x32C336953C18A3CE(unk_0xF5014688C9788D5F(Local_674.f_2[iParam0]), 1);
	}
	if (func_521(iParam0, 9) || Local_214.f_120.f_38 != 0)
	{
		func_516(iParam0, 1, 0);
	}
}

void func_516(int iParam0, int iParam1, int iParam2)
{
	unk_0x26909BE8B0CCD35B(unk_0xAB3646235DE50E93(Local_674.f_2[iParam0]), iParam1, iParam2);
}

int func_517(int iParam0)
{
	if (func_521(iParam0, 8))
	{
		return 1;
	}
	if (func_85(22))
	{
		return 1;
	}
	return 0;
}

bool func_518(int iParam0)
{
	if (func_478(iParam0, 29))
	{
		return 0;
	}
	return !func_521(iParam0, 5);
}

int func_519()
{
	return 0;
}

int func_520(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_197.f_19)
	{
		if (Local_674.f_2.f_27[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_521(int iParam0, int iParam1)
{
	return func_4(&(Local_197.f_19.f_5[iParam0 /*13*/]), iParam1);
}

int func_522(int iParam0)
{
	if (Local_214.f_120.f_28 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_120.f_28);
		return StackVal;
	}
	return 68603185;
}

Vector3 func_523(int iParam0)
{
	if (func_525(iParam0))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_120.f_27);
		return StackVal, StackVal, StackVal;
	}
	else if (func_485(iParam0))
	{
		return Local_197.f_356.f_1[func_459(iParam0) /*15*/].f_4 + func_524(iParam0, Local_197.f_356.f_1[func_459(iParam0) /*15*/].f_3);
	}
	return Local_197.f_19.f_5[iParam0 /*13*/].f_3;
}

Vector3 func_524(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("insurgent3"):
		case joaat("limo2"):
			switch (iParam0)
			{
				case 0:
					return 1f, -2f, -0.1f;
				
				case 1:
					return -1f, -2f, -0.1f;
				
				case 2:
					return 1f, -2f, -0.1f;
				
				case 3:
					return -1f, -2f, -0.1f;
				
				default:
			}
			break;
		
		case joaat("issi3"):
		case joaat("panto"):
		case joaat("raptor"):
			switch (iParam0)
			{
				case 0:
					return 0.5f, 0f, -0.1f;
				
				case 1:
					return -0.5f, 0f, -0.1f;
				
				case 2:
					return 0.5f, 0f, -0.1f;
				
				case 3:
					return -0.5f, 0f, -0.1f;
				
				default:
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			return 1f, 0f, -0.1f;
		
		case 1:
			return -1f, 0f, -0.1f;
		
		case 2:
			return 1f, 0f, -0.1f;
		
		case 3:
			return -1f, 0f, -0.1f;
		
		default:
	}
	return 0f, -1f, -0.1f;
}

bool func_525(var uParam0)
{
	struct<3> Var0;
	
	if (Local_214.f_120.f_27 == 0)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Call_Loc(Local_214.f_120.f_27);
	Var0 = { StackVal, StackVal, StackVal };
	return !func_33(Var0);
}

void func_526()
{
}

int func_527()
{
	return Local_674.f_495;
}

void func_528(int iParam0)
{
	Local_674.f_494 = iParam0;
}

int func_529()
{
	int iVar0;
	int iVar1;
	
	if (!func_1245(func_1249(), func_1247()))
	{
		return 0;
	}
	if (Local_674.f_498 == -1)
	{
		Local_674.f_498 = func_1249();
	}
	if (Local_674.f_499 == -1)
	{
		Local_674.f_499 = func_1247();
	}
	if (!func_549())
	{
		return 0;
	}
	func_548();
	func_545();
	Local_674.f_508 = unk_0x996932F6DFE01964(func_544(), -1, 0);
	func_542();
	func_539();
	func_538();
	func_536();
	func_535();
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_532(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		Local_674.f_431[iVar1] = -1;
		iVar1++;
	}
	Local_674.f_512 = unk_0xC5935DFB3F39785A(0, 99999999);
	unk_0x0189E96FAC892B16(&(Local_674.f_505), &(Local_674.f_506));
	Global_1894573[iLocal_619 /*608*/].f_526 = Local_674.f_505;
	Global_1894573[iLocal_619 /*608*/].f_527 = Local_674.f_506;
	func_531();
	if (!func_530())
	{
		return 0;
	}
	Call_Loc(Local_214.f_1);
	return StackVal;
}

int func_530()
{
	return 1;
}

void func_531()
{
	if (Local_674.f_513 == -1)
	{
		Local_674.f_513 = unk_0x39D1D336459711BE();
	}
}

void func_532(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	
	if (Local_214.f_480.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_480.f_2);
		Local_674.f_440.f_2[iParam0 /*3*/] = { StackVal, StackVal, StackVal };
		return;
	}
	if (Local_197.f_785.f_1[iParam0 /*18*/].f_14)
	{
		Local_674.f_440.f_2[iParam0 /*3*/] = { Local_197.f_785.f_1[iParam0 /*18*/].f_15 };
		return;
	}
	fVar0 = (Local_197.f_785.f_1[iParam0 /*18*/].f_7 / 2f);
	fVar1 = (fVar0 * 0.25f);
	fVar2 = (fVar0 * 0.5f);
	Var3 = { func_533(iParam0) };
	if (func_117())
	{
		Var3.f_0 = (Var3.f_0 + unk_0xD2AA6F822D3A55D2(fVar1, fVar2));
	}
	else
	{
		Var3.f_0 = (Var3.f_0 - unk_0xD2AA6F822D3A55D2(fVar1, fVar2));
	}
	if (func_117())
	{
		Var3.f_1 = (Var3.f_1 + unk_0xD2AA6F822D3A55D2(fVar1, fVar2));
	}
	else
	{
		Var3.f_1 = (Var3.f_1 - unk_0xD2AA6F822D3A55D2(fVar1, fVar2));
	}
	Local_674.f_440.f_2[iParam0 /*3*/] = { Var3 };
}

Vector3 func_533(int iParam0)
{
	if (Local_214.f_480.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_480.f_3);
		return StackVal, StackVal, StackVal;
	}
	if (Local_197.f_785.f_1[iParam0 /*18*/].f_2 != -1)
	{
		return func_534(Local_197.f_785.f_1[iParam0 /*18*/].f_2, Local_197.f_785.f_1[iParam0 /*18*/].f_3);
	}
	return Local_197.f_785.f_1[iParam0 /*18*/].f_4;
}

Vector3 func_534(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			return Local_197.f_19.f_5[iParam1 /*13*/].f_3;
		
		case 0:
			return Local_197.f_77.f_1[iParam1 /*21*/].f_3;
		
		case 1:
			return Local_197.f_356.f_1[iParam1 /*15*/].f_4;
		
		case 2:
			return Local_197.f_434.f_1[iParam1 /*12*/].f_4;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_535()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = (iVar1 + Local_197.f_659[iVar0 /*32*/]);
		iVar0++;
	}
	Local_674.f_517 = iVar1;
}

void func_536()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_197.f_77)
	{
		Local_674.f_52[iVar0 /*25*/].f_16 = func_537(iVar0);
		iVar0++;
	}
}

int func_537(int iParam0)
{
	if (Local_197.f_77.f_1[iParam0 /*21*/].f_16 == -1)
	{
		if (iParam0 < 14)
		{
			return (iParam0 + 1 * (1000 / Local_197.f_77));
		}
		else
		{
			return ((iParam0 + 1 - 14) * (1000 / Local_197.f_77));
		}
	}
	return unk_0xC5935DFB3F39785A(0, Local_197.f_77.f_1[iParam0 /*21*/].f_16);
}

void func_538()
{
	Local_674.f_496 = 2;
}

void func_539()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_197.f_19)
	{
		Local_674.f_2.f_37[iVar0] = -1;
		iVar0++;
	}
	func_540();
}

void func_540()
{
	int iVar0;
	
	if (func_541())
	{
		if (func_25(&(Local_674.f_2.f_27), &(Local_674.f_431.f_3)))
		{
			func_16(2);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_197.f_19)
		{
			Local_674.f_2.f_27[iVar0] = Local_197.f_19.f_5[iVar0 /*13*/].f_10;
			iVar0++;
		}
	}
}

int func_541()
{
	return 0;
}

void func_542()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 0;
	while (iVar0 < Local_197.f_19)
	{
		iVar3 = Local_197.f_19.f_5[iVar0 /*13*/].f_10;
		iVar4 = Local_197.f_19.f_5[iVar0 /*13*/].f_11;
		if (iVar3 != -1 && iVar4 != 0)
		{
			switch (iVar4)
			{
				case 2:
					func_178(iVar3, 14);
					break;
				}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Local_197.f_77)
	{
		iVar2 = Local_197.f_77.f_1[iVar1 /*21*/].f_8;
		if (iVar2 != -1 && func_172(iVar2, 15))
		{
			func_91(iVar1, 19);
		}
		iVar5 = 0;
		while (iVar5 < Local_197.f_823)
		{
			if (Local_197.f_823.f_1[iVar5 /*10*/] == iVar1)
			{
				func_91(iVar1, 21);
			}
			iVar5++;
		}
		iVar1++;
	}
	func_543(0);
}

void func_543(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Local_197.f_659[iParam0 /*32*/].f_7[iVar0 /*2*/].f_1 == -1)
		{
		}
		else
		{
			switch (Local_197.f_659[iParam0 /*32*/].f_7[iVar0 /*2*/])
			{
				case 2:
					func_178(Local_197.f_659[iParam0 /*32*/].f_7[iVar0 /*2*/].f_1, 16);
					break;
				
				case 3:
					func_169(Local_197.f_659[iParam0 /*32*/].f_7[iVar0 /*2*/].f_1, 5);
					break;
				
				case 1:
					func_91(Local_197.f_659[iParam0 /*32*/].f_7[iVar0 /*2*/].f_1, 20);
					break;
			}
			iVar0++;
		}
	}
}

char* func_544()
{
	switch (Global_2697021)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_545()
{
	Local_674.f_507 = func_546() + 1;
	Global_1894573[bLocal_618 /*608*/].f_10.f_391 = Local_674.f_507;
}

int func_546()
{
	if (func_75() == func_74())
	{
		return 0;
	}
	return func_547(func_75());
}

int func_547(bool bParam0)
{
	if (func_107(bParam0) == func_74())
	{
		return 0;
	}
	return Global_1894573[bParam0 /*608*/].f_10.f_19;
}

void func_548()
{
}

int func_549()
{
	func_1244();
	func_591();
	if (!func_551())
	{
		return 0;
	}
	func_550();
	Stack.Push(Local_214.f_0 != 0);
	Call_Loc(Local_214.f_0);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

void func_550()
{
}

int func_551()
{
	if (func_1251(12))
	{
		return 1;
	}
	if (!func_563())
	{
		return 0;
	}
	func_555();
	func_553();
	func_552();
	if (Local_214.f_13 != 0)
	{
		Call_Loc(Local_214.f_13);
	}
	func_284(12);
	return 1;
}

void func_552()
{
}

void func_553()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!unk_0xD6F9DEE4765092A9(&(Local_197.f_994[iVar0 /*9*/])))
		{
			if (Local_197.f_994[iVar0 /*9*/].f_8 > -1 && Local_197.f_994[iVar0 /*9*/].f_8 < 1)
			{
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!unk_0xD6F9DEE4765092A9(&(Local_197.f_994.f_10[iVar0 /*16*/])))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 0)
	{
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar0++;
	}
	if (Local_197.f_613 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_197.f_613)
		{
			iVar0++;
		}
	}
	if (Local_197.f_19 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_197.f_19)
		{
			if (-1 != Local_197.f_19.f_5[iVar0 /*13*/].f_10)
			{
			}
			iVar0++;
		}
	}
	if (Local_197.f_823 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_197.f_823)
		{
			iVar1 = 0;
			while (iVar1 < 1)
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	if (Local_197.f_77 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_197.f_77)
		{
			if (-1 != Local_197.f_77.f_1[iVar0 /*21*/].f_8)
			{
			}
			if (-1 != Local_197.f_77.f_1[iVar0 /*21*/].f_8)
			{
			}
			if (Local_197.f_77.f_1[iVar0 /*21*/].f_10 != -1)
			{
				if (!unk_0xD6F9DEE4765092A9(&(Local_197.f_849[Local_197.f_77.f_1[iVar0 /*21*/].f_10 /*16*/])))
				{
				}
			}
			iVar2 = Local_197.f_77.f_1[iVar0 /*21*/].f_11;
			if (iVar2 != -1 && iVar2 < 1)
			{
				if (!unk_0xD6F9DEE4765092A9(&(Local_197.f_994[iVar2 /*9*/])))
				{
				}
				iVar3 = Local_197.f_994[Local_197.f_77.f_1[iVar0 /*21*/].f_11 /*9*/].f_8;
				if (iVar3 != -1)
				{
					if (!unk_0xD6F9DEE4765092A9(&(Local_197.f_994.f_10[iVar3 /*16*/])))
					{
					}
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (Local_197.f_77.f_254[iVar0 /*10*/].f_1[iVar1] != -1)
			{
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar0++;
	}
	if (Local_197.f_539 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_197.f_539)
		{
			iVar0++;
		}
	}
	if (Local_197.f_692 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_197.f_692)
		{
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_33(Local_197.f_1021[iVar0 /*8*/]))
		{
		}
		iVar0++;
	}
	if (Local_197.f_434 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_197.f_434)
		{
			iVar0++;
		}
	}
	if (func_554() > 0)
	{
		iVar0 = 0;
		while (iVar0 < func_554())
		{
			iVar0++;
		}
	}
	if (Local_197.f_785 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_197.f_785)
		{
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < Local_197.f_659[iVar0 /*32*/])
		{
			iVar1++;
		}
		iVar0++;
	}
	if (Local_197.f_729 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_197.f_729)
		{
			iVar0++;
		}
	}
	if (Local_197.f_356 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_197.f_356)
		{
			iVar0++;
		}
	}
}

int func_554()
{
	int iVar0;
	int iVar1[9];
	int iVar2;
	bool bVar3;
	int iVar4;
	
	iVar2 = 0;
	while (iVar2 < 9)
	{
		iVar1[iVar2] = -1;
		iVar2++;
	}
	iVar4 = 0;
	while (iVar4 < Local_197.f_77)
	{
		if (Local_197.f_77.f_1[iVar4 /*21*/].f_10 != -1)
		{
			bVar3 = true;
			iVar2 = 0;
			while (iVar2 < 9)
			{
				if (iVar1[iVar2] == Local_197.f_77.f_1[iVar4 /*21*/].f_10)
				{
					bVar3 = false;
				}
				iVar2++;
			}
			if (bVar3)
			{
				iVar1[iVar0] = Local_197.f_77.f_1[iVar4 /*21*/].f_10;
				iVar0++;
			}
		}
		iVar4++;
	}
	return iVar0;
}

void func_555()
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	
	iVar0 = iVar0;
	uVar1 = uVar1;
	func_561(func_562(), 1, "data.BottomRightHUD (GET_NUM_BOTTOM_RIGHT_HUD())", "MAX_NUM_BOTTOM_RIGHT_HUD");
	func_561(func_560(), 1, "data.Animation.Anim (GET_NUM_ANIMATIONS())", "MAX_NUM_ANIMATIONS");
	func_561(func_559(), 1, "data.Animation.Dict (GET_NUM_ANIMATION_DICTS())", "MAX_NUM_ANIMATION_DICTIONARIES");
	func_561(func_558(), 1, "data.FocusCam (GET_NUM_FOCUS_CAMS())", "MAX_NUM_FOCUS_CAMS");
	func_561(Local_197.f_613, 4, "data.GoToPoint.iCount", "MAX_NUM_GOTO_LOCATIONS");
	func_561(Local_197.f_19, 4, "data.MissionEntity.iCount", "MAX_NUM_MISSION_ENTITIES");
	func_561(Local_197.f_77, 12, "data.Ped.iCount", "MAX_NUM_PEDS");
	func_561(func_557(), 2, "data.Ped.Group GET_NUM_PED_GROUPS()", "MAX_NUM_PED_GROUPS");
	func_561(Local_197.f_823, 1, "data.Patrol.iCount", "MAX_NUM_PATROLS");
	func_561(Local_197.f_539, 5, "data.Pickup.iCount", "MAX_NUM_PICKUPS");
	func_561(Local_197.f_692, 5, "data.Population.iCount", "MAX_NUM_POP_BLOCKERS");
	func_561(Local_197.f_434, 7, "data.Prop.iCount", "MAX_NUM_PROPS");
	func_561(func_554(), 9, "data.Scenario (GET_NUM_PED_SCENARIOS())", "MAX_NUM_SCENARIOS");
	func_561(Local_197.f_785, 2, "data.SearchArea.iNumAreas", "MAX_NUM_SEARCH_AREAS");
	func_561(func_556(), 2, "data.Portal (GET_NUM_PORTALS())", "MAX_NUM_MISSION_PORTALS");
	iVar0 = 0;
	while (iVar0 < 1)
	{
		StringCopy(&Var2, "data.TakeOutTarget[", 64);
		StringIntConCat(&Var2, iVar0, 64);
		StringConCat(&Var2, "].iCount", 64);
		func_561(Local_197.f_659[iVar0 /*32*/], 12, &Var2, "MAX_NUM_TARGETS");
		iVar0++;
	}
	func_561(Local_197.f_729, 6, "data.TriggerArea.iCount", "MAX_NUM_TRIGGER_AREAS");
	func_561(Local_197.f_356, 5, "data.Vehicle.iCount", "MAX_NUM_VEHICLES");
}

int func_556()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!func_33(Local_197.f_1021[iVar1 /*8*/]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_557()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_197.f_77)
	{
		if (Local_197.f_77.f_1[iVar0 /*21*/].f_14 > iVar1)
		{
			iVar1 = Local_197.f_77.f_1[iVar0 /*21*/].f_14;
		}
		iVar0++;
	}
	return iVar1 + 1;
}

int func_558()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (Local_197.f_842[iVar1 /*6*/] != 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_559()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (!unk_0xD6F9DEE4765092A9(&(Local_197.f_994.f_10[iVar1 /*16*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_560()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (!unk_0xD6F9DEE4765092A9(&(Local_197.f_994[iVar1 /*9*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_561(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	if (iParam0 <= iParam1)
	{
	}
}

int func_562()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar0++;
		iVar1++;
	}
	return iVar0;
}

int func_563()
{
	if (!func_590(Local_628.f_0))
	{
		return 1;
	}
	return func_564(func_586(), &Local_197, &Local_215);
}

int func_564(char* sParam0, var uParam1, var uParam2)
{
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	func_585();
	if (!unk_0x571A025B07823518(sParam0, 0))
	{
		return 0;
	}
	func_566(uParam1);
	func_565(uParam2);
	return 1;
}

void func_565(var uParam0)
{
	unk_0x27DEA4A6845A22BC(0);
	*uParam0 = 0;
	uParam0->f_1 = 0;
	StringCopy(&(uParam0->f_2), "", 64);
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
}

void func_566(var uParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = unk_0x6C99356A4D3C7B09(0);
	uVar1 = unk_0x6BDE656A2A2932FC(iVar0, "mission");
	Global_4718592.f_114152 = unk_0x81A9ADA13F72AEDD(iVar0, "debugOnlyVersion");
	func_567(&uVar1, uParam0, 0, &uVar2);
}

bool func_567(var uParam0, var uParam1, bool bParam2, var uParam3)
{
	if (!bParam2 || *uParam3 == 0)
	{
		func_568(uParam0, uParam1);
	}
	if (!bParam2 || *uParam3 == 1)
	{
	}
	if (!bParam2 || *uParam3 == 2)
	{
		*uParam3 = 0;
		return 1;
	}
	*uParam3++;
	return !bParam2;
}

void func_568(var uParam0, var uParam1)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8[1];
	int iVar9[1];
	var uVar10;
	bool bVar11;
	var uVar12;
	bool bVar13;
	var uVar14;
	bool bVar15;
	var uVar16;
	bool bVar17;
	var uVar18;
	bool bVar19;
	var uVar20;
	bool bVar21;
	var uVar22;
	bool bVar23;
	int iVar24;
	int iVar25;
	var uVar26[1];
	int iVar27[1];
	var uVar28;
	bool bVar29;
	var uVar30;
	bool bVar31;
	var uVar32;
	bool bVar33;
	var uVar34;
	bool bVar35;
	var uVar36;
	bool bVar37;
	var uVar38;
	bool bVar39;
	var uVar40;
	bool bVar41;
	var uVar42;
	bool bVar43;
	var uVar44;
	bool bVar45;
	var uVar46;
	bool bVar47;
	var uVar48;
	bool bVar49;
	var uVar50;
	bool bVar51;
	var uVar52;
	bool bVar53;
	var uVar54;
	bool bVar55;
	var uVar56;
	bool bVar57;
	var uVar58;
	bool bVar59;
	var uVar60;
	bool bVar61;
	int iVar62;
	var uVar63;
	int iVar64;
	var uVar65[6];
	int iVar66[6];
	var uVar67;
	bool bVar68;
	var uVar69;
	bool bVar70;
	int iVar71;
	var uVar72[1];
	int iVar73[1];
	var uVar74;
	bool bVar75;
	int iVar76;
	int iVar77;
	var uVar78[2];
	int iVar79[2];
	var uVar80;
	bool bVar81;
	var uVar82;
	bool bVar83;
	var uVar84;
	bool bVar85;
	var uVar86;
	bool bVar87;
	var uVar88;
	bool bVar89;
	var uVar90;
	bool bVar91;
	int iVar92;
	var uVar93;
	bool bVar94;
	var uVar95;
	bool bVar96;
	var uVar97;
	bool bVar98;
	var uVar99;
	bool bVar100;
	int iVar101;
	int iVar102;
	var uVar103[2];
	int iVar104[2];
	var uVar105;
	bool bVar106;
	var uVar107;
	bool bVar108;
	var uVar109;
	bool bVar110;
	var uVar111;
	bool bVar112;
	var uVar113;
	bool bVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	var uVar119;
	bool bVar120;
	var uVar121;
	bool bVar122;
	var uVar123[1];
	int iVar124[1];
	var uVar125;
	bool bVar126;
	int iVar127;
	var uVar128;
	bool bVar129;
	var uVar130;
	bool bVar131;
	var uVar132;
	bool bVar133;
	var uVar134;
	bool bVar135;
	int iVar136;
	var uVar137;
	bool bVar138;
	int iVar139;
	var uVar140;
	bool bVar141;
	var uVar142;
	bool bVar143;
	var uVar144;
	bool bVar145;
	var uVar146;
	bool bVar147;
	int iVar148;
	var uVar149[12];
	int iVar150[12];
	var uVar151[12];
	int iVar152[12];
	int iVar153;
	int iVar154;
	var uVar155;
	bool bVar156;
	var uVar157;
	bool bVar158;
	var uVar159;
	bool bVar160;
	int iVar161;
	int iVar162;
	var uVar163[1];
	int iVar164[1];
	var uVar165;
	bool bVar166;
	var uVar167;
	bool bVar168;
	var uVar169;
	bool bVar170;
	int iVar171;
	int iVar172;
	var uVar173[1];
	int iVar174[1];
	var uVar175;
	bool bVar176;
	var uVar177;
	bool bVar178;
	var uVar179;
	bool bVar180;
	var uVar181;
	bool bVar182;
	var uVar183;
	bool bVar184;
	var uVar185;
	bool bVar186;
	int iVar187;
	var uVar188;
	bool bVar189;
	var uVar190;
	bool bVar191;
	var uVar192;
	bool bVar193;
	var uVar194;
	bool bVar195;
	var uVar196;
	bool bVar197;
	var uVar198;
	bool bVar199;
	int iVar200;
	int iVar201;
	var uVar202;
	bool bVar203;
	int iVar204;
	var uVar205[1];
	int iVar206[1];
	var uVar207[1];
	int iVar208[1];
	var uVar209[1];
	int iVar210[1];
	var uVar211[1];
	int iVar212[1];
	int iVar213;
	int iVar214;
	var uVar215;
	bool bVar216;
	var uVar217;
	bool bVar218;
	var uVar219;
	bool bVar220;
	var uVar221;
	bool bVar222;
	int iVar223;
	var uVar224;
	bool bVar225;
	int iVar226;
	int iVar227;
	var uVar228;
	bool bVar229;
	var uVar230;
	bool bVar231;
	int iVar232;
	var uVar233;
	bool bVar234;
	int iVar235;
	var uVar236;
	bool bVar237;
	var uVar238;
	bool bVar239;
	var uVar240;
	bool bVar241;
	var uVar242[1];
	int iVar243[1];
	
	func_584(&iVar5, *uParam0, "me");
	func_584(&iVar6, iVar5, "blp");
	func_584(&iVar7, iVar5, "ents");
	func_584(&iVar24, *uParam0, "pd");
	func_584(&iVar25, iVar24, "pds");
	func_584(&iVar62, iVar24, "grp");
	func_584(&uVar63, iVar62, "rel");
	func_584(&iVar64, iVar62, "trg");
	func_584(&iVar71, iVar24, "asp");
	func_584(&iVar76, *uParam0, "vh");
	func_584(&iVar77, iVar76, "veh");
	func_584(&iVar92, iVar77, "blp");
	func_584(&iVar101, *uParam0, "pp");
	func_584(&iVar102, iVar101, "prps");
	func_584(&iVar115, *uParam0, "want");
	func_584(&iVar116, *uParam0, "modt");
	func_584(&iVar117, *uParam0, "gt");
	func_584(&iVar118, iVar117, "loc");
	func_584(&iVar127, iVar118, "blp");
	func_584(&iVar136, *uParam0, "tot");
	func_584(&iVar139, iVar136, "tohud");
	func_584(&iVar148, iVar136, "tar");
	func_584(&iVar153, *uParam0, "pop");
	func_584(&iVar154, iVar153, "blkr");
	func_584(&iVar161, *uParam0, "ta");
	func_584(&iVar162, iVar161, "ars");
	func_584(&iVar171, *uParam0, "sear");
	func_584(&iVar172, iVar171, "area");
	func_584(&iVar187, iVar172, "blp");
	func_584(&iVar200, *uParam0, "ptrl");
	func_584(&iVar201, iVar200, "pat");
	func_584(&iVar204, iVar201, "nd");
	func_584(&iVar213, *uParam0, "fcs");
	func_584(&iVar214, iVar213, "fcs");
	func_584(&iVar223, *uParam0, "sro");
	func_584(&iVar226, *uParam0, "anims");
	func_584(&iVar227, iVar226, "anm");
	func_584(&iVar232, iVar226, "anmD");
	func_584(&iVar235, *uParam0, "port");
	if (func_583(*uParam0, "fmbs") == 7)
	{
		bVar4 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "bs", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_583(iVar7, &Var0) == 7)
		{
			iVar9[iVar2] = 1;
		}
		iVar2++;
	}
	if (func_583(iVar7, "mn") == 7)
	{
		bVar11 = true;
	}
	if (func_583(iVar7, "pos") == 7)
	{
		bVar13 = true;
	}
	if (func_583(iVar7, "head") == 7)
	{
		bVar15 = true;
	}
	if (func_583(iVar7, "rot") == 7)
	{
		bVar17 = true;
	}
	if (func_583(iVar7, "cv") == 7)
	{
		bVar19 = true;
	}
	if (func_583(iVar7, "crt") == 7)
	{
		bVar21 = true;
	}
	if (func_583(iVar7, "int") == 7)
	{
		bVar23 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "bs", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_583(iVar25, &Var0) == 7)
		{
			iVar27[iVar2] = 1;
		}
		iVar2++;
	}
	if (func_583(iVar25, "mn") == 7)
	{
		bVar29 = true;
	}
	if (func_583(iVar25, "pos") == 7)
	{
		bVar31 = true;
	}
	if (func_583(iVar25, "head") == 7)
	{
		bVar33 = true;
	}
	if (func_583(iVar25, "wpn") == 7)
	{
		bVar35 = true;
	}
	if (func_583(iVar25, "veh") == 7)
	{
		bVar37 = true;
	}
	if (func_583(iVar25, "st") == 7)
	{
		bVar39 = true;
	}
	if (func_583(iVar25, "scen") == 7)
	{
		bVar41 = true;
	}
	if (func_583(iVar25, "anim") == 7)
	{
		bVar43 = true;
	}
	if (func_583(iVar25, "int") == 7)
	{
		bVar45 = true;
	}
	if (func_583(iVar25, "asi") == 7)
	{
		bVar47 = true;
	}
	if (func_583(iVar25, "grp") == 7)
	{
		bVar49 = true;
	}
	if (func_583(iVar25, "mvmt") == 7)
	{
		bVar51 = true;
	}
	if (func_583(iVar25, "mrd") == 7)
	{
		bVar53 = true;
	}
	if (func_583(iVar25, "sr") == 7)
	{
		bVar55 = true;
	}
	if (func_583(iVar25, "sa") == 7)
	{
		bVar57 = true;
	}
	if (func_583(iVar25, "hr") == 7)
	{
		bVar59 = true;
	}
	if (func_583(iVar25, "dr") == 7)
	{
		bVar61 = true;
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		StringCopy(&Var0, "ar", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_583(iVar64, &Var0) == 7)
		{
			iVar66[iVar2] = 1;
		}
		iVar2++;
	}
	if (func_583(iVar62, "ed") == 7)
	{
		bVar68 = true;
	}
	if (func_583(iVar62, "gt") == 7)
	{
		bVar70 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_583(iVar71, &Var0) == 7)
		{
			iVar73[iVar2] = 1;
		}
		iVar2++;
	}
	if (func_583(iVar71, "vh") == 7)
	{
		bVar75 = true;
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_583(iVar77, &Var0) == 7)
		{
			iVar79[iVar2] = 1;
		}
		iVar2++;
	}
	if (func_583(iVar77, "mn") == 7)
	{
		bVar81 = true;
	}
	if (func_583(iVar77, "pos") == 7)
	{
		bVar83 = true;
	}
	if (func_583(iVar77, "head") == 7)
	{
		bVar85 = true;
	}
	if (func_583(iVar77, "col") == 7)
	{
		bVar87 = true;
	}
	if (func_583(iVar77, "int") == 7)
	{
		bVar89 = true;
	}
	if (func_583(iVar77, "vds") == 7)
	{
		bVar91 = true;
	}
	if (func_583(iVar92, "sprt") == 7)
	{
		bVar94 = true;
	}
	if (func_583(iVar92, "hclr") == 7)
	{
		bVar96 = true;
	}
	if (func_583(iVar92, "scl") == 7)
	{
		bVar98 = true;
	}
	if (func_583(iVar92, "sh") == 7)
	{
		bVar100 = true;
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_583(iVar102, &Var0) == 7)
		{
			iVar104[iVar2] = 1;
		}
		iVar2++;
	}
	if (func_583(iVar102, "mn") == 7)
	{
		bVar106 = true;
	}
	if (func_583(iVar102, "pos") == 7)
	{
		bVar108 = true;
	}
	if (func_583(iVar102, "head") == 7)
	{
		bVar110 = true;
	}
	if (func_583(iVar102, "rot") == 7)
	{
		bVar112 = true;
	}
	if (func_583(iVar102, "int") == 7)
	{
		bVar114 = true;
	}
	if (func_583(iVar118, "pos") == 7)
	{
		bVar120 = true;
	}
	if (func_583(iVar118, "rad") == 7)
	{
		bVar122 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_583(iVar118, &Var0) == 7)
		{
			iVar124[iVar2] = 1;
		}
		iVar2++;
	}
	if (func_583(iVar118, "brd") == 7)
	{
		bVar126 = true;
	}
	if (func_583(iVar127, "sprt") == 7)
	{
		bVar129 = true;
	}
	if (func_583(iVar127, "hclr") == 7)
	{
		bVar131 = true;
	}
	if (func_583(iVar127, "scl") == 7)
	{
		bVar133 = true;
	}
	if (func_583(iVar127, "sh") == 7)
	{
		bVar135 = true;
	}
	if (func_583(iVar136, "tco") == 7)
	{
		bVar138 = true;
	}
	if (func_583(iVar139, "brtyp") == 7)
	{
		bVar141 = true;
	}
	if (func_583(iVar139, "brtit") == 7)
	{
		bVar143 = true;
	}
	if (func_583(iVar139, "brmax") == 7)
	{
		bVar145 = true;
	}
	if (func_583(iVar139, "brord") == 7)
	{
		bVar147 = true;
	}
	iVar2 = 0;
	while (iVar2 < 12)
	{
		StringCopy(&Var0, "totyp", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_583(iVar148, &Var0) == 7)
		{
			iVar150[iVar2] = 1;
		}
		StringCopy(&Var0, "toid", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_583(iVar148, &Var0) == 7)
		{
			iVar152[iVar2] = 1;
		}
		iVar2++;
	}
	if (func_583(iVar154, "typ") == 7)
	{
		bVar156 = true;
	}
	if (func_583(iVar154, "min") == 7)
	{
		bVar158 = true;
	}
	if (func_583(iVar154, "max") == 7)
	{
		bVar160 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "ibs", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_583(iVar162, &Var0) == 7)
		{
			iVar164[iVar2] = 1;
		}
		iVar2++;
	}
	if (func_583(iVar162, "vmn") == 7)
	{
		bVar166 = true;
	}
	if (func_583(iVar162, "vmx") == 7)
	{
		bVar168 = true;
	}
	if (func_583(iVar162, "fwd") == 7)
	{
		bVar170 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "ibs", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_583(iVar172, &Var0) == 7)
		{
			iVar174[iVar2] = 1;
		}
		iVar2++;
	}
	if (func_583(iVar172, "typ") == 7)
	{
		bVar176 = true;
	}
	if (func_583(iVar172, "iei") == 7)
	{
		bVar178 = true;
	}
	if (func_583(iVar172, "vco") == 7)
	{
		bVar180 = true;
	}
	if (func_583(iVar172, "ent") == 7)
	{
		bVar182 = true;
	}
	if (func_583(iVar172, "tri") == 7)
	{
		bVar184 = true;
	}
	if (func_583(iVar172, "ita") == 7)
	{
		bVar186 = true;
	}
	if (func_583(iVar187, "sprt") == 7)
	{
		bVar189 = true;
	}
	if (func_583(iVar187, "hclr") == 7)
	{
		bVar191 = true;
	}
	if (func_583(iVar187, "scl") == 7)
	{
		bVar193 = true;
	}
	if (func_583(iVar187, "sh") == 7)
	{
		bVar195 = true;
	}
	if (func_583(iVar172, "bce") == 7)
	{
		bVar197 = true;
	}
	if (func_583(iVar172, "vce") == 7)
	{
		bVar199 = true;
	}
	if (func_583(iVar201, "pedi") == 7)
	{
		bVar203 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "scro", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_583(iVar204, &Var0) == 7)
		{
			iVar206[iVar2] = 1;
		}
		StringCopy(&Var0, "pos", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_583(iVar204, &Var0) == 7)
		{
			iVar208[iVar2] = 1;
		}
		StringCopy(&Var0, "look", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_583(iVar204, &Var0) == 7)
		{
			iVar210[iVar2] = 1;
		}
		StringCopy(&Var0, "dur", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_583(iVar204, &Var0) == 7)
		{
			iVar212[iVar2] = 1;
		}
		iVar2++;
	}
	if (func_583(iVar214, "ftyp") == 7)
	{
		bVar216 = true;
	}
	if (func_583(iVar214, "feid") == 7)
	{
		bVar218 = true;
	}
	if (func_583(iVar214, "fvec") == 7)
	{
		bVar220 = true;
	}
	if (func_583(iVar214, "frng") == 7)
	{
		bVar222 = true;
	}
	if (func_583(iVar223, "name") == 7)
	{
		bVar225 = true;
	}
	if (func_583(iVar227, "name") == 7)
	{
		bVar229 = true;
	}
	if (func_583(iVar227, "indx") == 7)
	{
		bVar231 = true;
	}
	if (func_583(iVar232, "name") == 7)
	{
		bVar234 = true;
	}
	if (func_583(iVar235, "pos") == 7)
	{
		bVar237 = true;
	}
	if (func_583(iVar235, "head") == 7)
	{
		bVar239 = true;
	}
	if (func_583(iVar235, "plnkp") == 7)
	{
		bVar241 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "ibs", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (func_583(iVar235, &Var0) == 7)
		{
			iVar243[iVar2] = 1;
		}
		iVar2++;
	}
	if (bVar4)
	{
		uVar3 = unk_0x8FBF3E1A58A9D798(*uParam0, "fmbs");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar9[iVar2])
		{
			StringCopy(&Var0, "bs", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar8[iVar2] = unk_0x8FBF3E1A58A9D798(iVar7, &Var0);
		}
		iVar2++;
	}
	if (bVar11)
	{
		uVar10 = unk_0x8FBF3E1A58A9D798(iVar7, "mn");
	}
	if (bVar13)
	{
		uVar12 = unk_0x8FBF3E1A58A9D798(iVar7, "pos");
	}
	if (bVar15)
	{
		uVar14 = unk_0x8FBF3E1A58A9D798(iVar7, "head");
	}
	if (bVar17)
	{
		uVar16 = unk_0x8FBF3E1A58A9D798(iVar7, "rot");
	}
	if (bVar19)
	{
		uVar18 = unk_0x8FBF3E1A58A9D798(iVar7, "cv");
	}
	if (bVar21)
	{
		uVar20 = unk_0x8FBF3E1A58A9D798(iVar7, "crt");
	}
	if (bVar23)
	{
		uVar22 = unk_0x8FBF3E1A58A9D798(iVar7, "int");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar27[iVar2])
		{
			StringCopy(&Var0, "bs", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar26[iVar2] = unk_0x8FBF3E1A58A9D798(iVar25, &Var0);
		}
		iVar2++;
	}
	if (bVar29)
	{
		uVar28 = unk_0x8FBF3E1A58A9D798(iVar25, "mn");
	}
	if (bVar31)
	{
		uVar30 = unk_0x8FBF3E1A58A9D798(iVar25, "pos");
	}
	if (bVar33)
	{
		uVar32 = unk_0x8FBF3E1A58A9D798(iVar25, "head");
	}
	if (bVar35)
	{
		uVar34 = unk_0x8FBF3E1A58A9D798(iVar25, "wpn");
	}
	if (bVar37)
	{
		uVar36 = unk_0x8FBF3E1A58A9D798(iVar25, "veh");
	}
	if (bVar39)
	{
		uVar38 = unk_0x8FBF3E1A58A9D798(iVar25, "st");
	}
	if (bVar41)
	{
		uVar40 = unk_0x8FBF3E1A58A9D798(iVar25, "scen");
	}
	if (bVar43)
	{
		uVar42 = unk_0x8FBF3E1A58A9D798(iVar25, "anim");
	}
	if (bVar45)
	{
		uVar44 = unk_0x8FBF3E1A58A9D798(iVar25, "int");
	}
	if (bVar47)
	{
		uVar46 = unk_0x8FBF3E1A58A9D798(iVar25, "asi");
	}
	if (bVar49)
	{
		uVar48 = unk_0x8FBF3E1A58A9D798(iVar25, "grp");
	}
	if (bVar51)
	{
		uVar50 = unk_0x8FBF3E1A58A9D798(iVar25, "mvmt");
	}
	if (bVar53)
	{
		uVar52 = unk_0x8FBF3E1A58A9D798(iVar25, "mrd");
	}
	if (bVar55)
	{
		uVar54 = unk_0x8FBF3E1A58A9D798(iVar25, "sr");
	}
	if (bVar57)
	{
		uVar56 = unk_0x8FBF3E1A58A9D798(iVar25, "sa");
	}
	if (bVar59)
	{
		uVar58 = unk_0x8FBF3E1A58A9D798(iVar25, "hr");
	}
	if (bVar61)
	{
		uVar60 = unk_0x8FBF3E1A58A9D798(iVar25, "dr");
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (iVar66[iVar2])
		{
			StringCopy(&Var0, "ar", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar65[iVar2] = unk_0x8FBF3E1A58A9D798(iVar64, &Var0);
		}
		iVar2++;
	}
	if (bVar68)
	{
		uVar67 = unk_0x8FBF3E1A58A9D798(iVar62, "ed");
	}
	if (bVar70)
	{
		uVar69 = unk_0x8FBF3E1A58A9D798(iVar62, "gt");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar73[iVar2])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar72[iVar2] = unk_0x8FBF3E1A58A9D798(iVar71, &Var0);
		}
		iVar2++;
	}
	if (bVar75)
	{
		uVar74 = unk_0x8FBF3E1A58A9D798(iVar71, "vh");
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (iVar79[iVar2])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar78[iVar2] = unk_0x8FBF3E1A58A9D798(iVar77, &Var0);
		}
		iVar2++;
	}
	if (bVar81)
	{
		uVar80 = unk_0x8FBF3E1A58A9D798(iVar77, "mn");
	}
	if (bVar83)
	{
		uVar82 = unk_0x8FBF3E1A58A9D798(iVar77, "pos");
	}
	if (bVar85)
	{
		uVar84 = unk_0x8FBF3E1A58A9D798(iVar77, "head");
	}
	if (bVar87)
	{
		uVar86 = unk_0x8FBF3E1A58A9D798(iVar77, "col");
	}
	if (bVar89)
	{
		uVar88 = unk_0x8FBF3E1A58A9D798(iVar77, "int");
	}
	if (bVar91)
	{
		uVar90 = unk_0x8FBF3E1A58A9D798(iVar77, "vds");
	}
	if (bVar94)
	{
		uVar93 = unk_0x8FBF3E1A58A9D798(iVar92, "sprt");
	}
	if (bVar96)
	{
		uVar95 = unk_0x8FBF3E1A58A9D798(iVar92, "hclr");
	}
	if (bVar98)
	{
		uVar97 = unk_0x8FBF3E1A58A9D798(iVar92, "scl");
	}
	if (bVar100)
	{
		uVar99 = unk_0x8FBF3E1A58A9D798(iVar92, "sh");
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (iVar104[iVar2])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar103[iVar2] = unk_0x8FBF3E1A58A9D798(iVar102, &Var0);
		}
		iVar2++;
	}
	if (bVar106)
	{
		uVar105 = unk_0x8FBF3E1A58A9D798(iVar102, "mn");
	}
	if (bVar108)
	{
		uVar107 = unk_0x8FBF3E1A58A9D798(iVar102, "pos");
	}
	if (bVar110)
	{
		uVar109 = unk_0x8FBF3E1A58A9D798(iVar102, "head");
	}
	if (bVar112)
	{
		uVar111 = unk_0x8FBF3E1A58A9D798(iVar102, "rot");
	}
	if (bVar114)
	{
		uVar113 = unk_0x8FBF3E1A58A9D798(iVar102, "int");
	}
	if (bVar120)
	{
		uVar119 = unk_0x8FBF3E1A58A9D798(iVar118, "pos");
	}
	if (bVar122)
	{
		uVar121 = unk_0x8FBF3E1A58A9D798(iVar118, "rad");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar124[iVar2])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar123[iVar2] = unk_0x8FBF3E1A58A9D798(iVar118, &Var0);
		}
		iVar2++;
	}
	if (bVar126)
	{
		uVar125 = unk_0x8FBF3E1A58A9D798(iVar118, "brd");
	}
	if (bVar129)
	{
		uVar128 = unk_0x8FBF3E1A58A9D798(iVar127, "sprt");
	}
	if (bVar131)
	{
		uVar130 = unk_0x8FBF3E1A58A9D798(iVar127, "hclr");
	}
	if (bVar133)
	{
		uVar132 = unk_0x8FBF3E1A58A9D798(iVar127, "scl");
	}
	if (bVar135)
	{
		uVar134 = unk_0x8FBF3E1A58A9D798(iVar127, "sh");
	}
	if (bVar138)
	{
		uVar137 = unk_0x8FBF3E1A58A9D798(iVar136, "tco");
	}
	if (bVar141)
	{
		uVar140 = unk_0x8FBF3E1A58A9D798(iVar139, "brtyp");
	}
	if (bVar143)
	{
		uVar142 = unk_0x8FBF3E1A58A9D798(iVar139, "brtit");
	}
	if (bVar145)
	{
		uVar144 = unk_0x8FBF3E1A58A9D798(iVar139, "brmax");
	}
	if (bVar147)
	{
		uVar146 = unk_0x8FBF3E1A58A9D798(iVar139, "brord");
	}
	iVar2 = 0;
	while (iVar2 < 12)
	{
		if (iVar150[iVar2])
		{
			StringCopy(&Var0, "totyp", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar149[iVar2] = unk_0x8FBF3E1A58A9D798(iVar148, &Var0);
		}
		if (iVar152[iVar2])
		{
			StringCopy(&Var0, "toid", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar151[iVar2] = unk_0x8FBF3E1A58A9D798(iVar148, &Var0);
		}
		iVar2++;
	}
	if (bVar156)
	{
		uVar155 = unk_0x8FBF3E1A58A9D798(iVar154, "typ");
	}
	if (bVar158)
	{
		uVar157 = unk_0x8FBF3E1A58A9D798(iVar154, "min");
	}
	if (bVar160)
	{
		uVar159 = unk_0x8FBF3E1A58A9D798(iVar154, "max");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar164[iVar2])
		{
			StringCopy(&Var0, "ibs", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar163[iVar2] = unk_0x8FBF3E1A58A9D798(iVar162, &Var0);
		}
		iVar2++;
	}
	if (bVar166)
	{
		uVar165 = unk_0x8FBF3E1A58A9D798(iVar162, "vmn");
	}
	if (bVar168)
	{
		uVar167 = unk_0x8FBF3E1A58A9D798(iVar162, "vmx");
	}
	if (bVar170)
	{
		uVar169 = unk_0x8FBF3E1A58A9D798(iVar162, "fwd");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar174[iVar2])
		{
			StringCopy(&Var0, "ibs", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar173[iVar2] = unk_0x8FBF3E1A58A9D798(iVar172, &Var0);
		}
		iVar2++;
	}
	if (bVar176)
	{
		uVar175 = unk_0x8FBF3E1A58A9D798(iVar172, "typ");
	}
	if (bVar178)
	{
		uVar177 = unk_0x8FBF3E1A58A9D798(iVar172, "iei");
	}
	if (bVar180)
	{
		uVar179 = unk_0x8FBF3E1A58A9D798(iVar172, "vco");
	}
	if (bVar182)
	{
		uVar181 = unk_0x8FBF3E1A58A9D798(iVar172, "ent");
	}
	if (bVar184)
	{
		uVar183 = unk_0x8FBF3E1A58A9D798(iVar172, "tri");
	}
	if (bVar186)
	{
		uVar185 = unk_0x8FBF3E1A58A9D798(iVar172, "ita");
	}
	if (bVar189)
	{
		uVar188 = unk_0x8FBF3E1A58A9D798(iVar187, "sprt");
	}
	if (bVar191)
	{
		uVar190 = unk_0x8FBF3E1A58A9D798(iVar187, "hclr");
	}
	if (bVar193)
	{
		uVar192 = unk_0x8FBF3E1A58A9D798(iVar187, "scl");
	}
	if (bVar195)
	{
		uVar194 = unk_0x8FBF3E1A58A9D798(iVar187, "sh");
	}
	if (bVar197)
	{
		uVar196 = unk_0x8FBF3E1A58A9D798(iVar172, "bce");
	}
	if (bVar199)
	{
		uVar198 = unk_0x8FBF3E1A58A9D798(iVar172, "vce");
	}
	if (bVar203)
	{
		uVar202 = unk_0x8FBF3E1A58A9D798(iVar201, "pedi");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar206[iVar2])
		{
			StringCopy(&Var0, "scro", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar205[iVar2] = unk_0x8FBF3E1A58A9D798(iVar204, &Var0);
		}
		if (iVar208[iVar2])
		{
			StringCopy(&Var0, "pos", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar207[iVar2] = unk_0x8FBF3E1A58A9D798(iVar204, &Var0);
		}
		if (iVar210[iVar2])
		{
			StringCopy(&Var0, "look", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar209[iVar2] = unk_0x8FBF3E1A58A9D798(iVar204, &Var0);
		}
		if (iVar212[iVar2])
		{
			StringCopy(&Var0, "dur", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar211[iVar2] = unk_0x8FBF3E1A58A9D798(iVar204, &Var0);
		}
		iVar2++;
	}
	if (bVar216)
	{
		uVar215 = unk_0x8FBF3E1A58A9D798(iVar214, "ftyp");
	}
	if (bVar218)
	{
		uVar217 = unk_0x8FBF3E1A58A9D798(iVar214, "feid");
	}
	if (bVar220)
	{
		uVar219 = unk_0x8FBF3E1A58A9D798(iVar214, "fvec");
	}
	if (bVar222)
	{
		uVar221 = unk_0x8FBF3E1A58A9D798(iVar214, "frng");
	}
	if (bVar225)
	{
		uVar224 = unk_0x8FBF3E1A58A9D798(iVar223, "name");
	}
	if (bVar229)
	{
		uVar228 = unk_0x8FBF3E1A58A9D798(iVar227, "name");
	}
	if (bVar231)
	{
		uVar230 = unk_0x8FBF3E1A58A9D798(iVar227, "indx");
	}
	if (bVar234)
	{
		uVar233 = unk_0x8FBF3E1A58A9D798(iVar232, "name");
	}
	if (bVar237)
	{
		uVar236 = unk_0x8FBF3E1A58A9D798(iVar235, "pos");
	}
	if (bVar239)
	{
		uVar238 = unk_0x8FBF3E1A58A9D798(iVar235, "head");
	}
	if (bVar241)
	{
		uVar240 = unk_0x8FBF3E1A58A9D798(iVar235, "plnkp");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar243[iVar2])
		{
			StringCopy(&Var0, "ibs", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar242[iVar2] = unk_0x8FBF3E1A58A9D798(iVar235, &Var0);
		}
		iVar2++;
	}
	*uParam1 = { func_582(*uParam0, "fmnm", "") };
	iVar1 = 0;
	while (iVar1 < 2)
	{
		uParam1->f_16[iVar1] = func_581(uVar3, iVar1, 0, bVar4);
		iVar1++;
	}
	uParam1->f_19 = func_580(iVar5, "num", 0);
	uParam1->f_19.f_1 = func_579(iVar6, "sprt", -1);
	uParam1->f_19.f_1.f_1 = func_579(iVar6, "hclr", 12);
	uParam1->f_19.f_1.f_2 = func_578(iVar6, "scl", 1f);
	uParam1->f_19.f_1.f_3 = func_576(iVar6, "sh", 0);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_19.f_5[iVar1 /*13*/][iVar2] = func_581(uVar8[iVar2], iVar1, 0, iVar9[iVar2]);
			iVar2++;
		}
		uParam1->f_19.f_5[iVar1 /*13*/].f_2 = func_575(uVar10, iVar1, 0, bVar11);
		uParam1->f_19.f_5[iVar1 /*13*/].f_3 = { func_574(uVar12, iVar1, 0f, 0f, 0f, bVar13) };
		uParam1->f_19.f_5[iVar1 /*13*/].f_6 = func_573(uVar14, iVar1, 0f, bVar15);
		uParam1->f_19.f_5[iVar1 /*13*/].f_7 = { func_574(uVar16, iVar1, 0f, 0f, 0f, bVar17) };
		uParam1->f_19.f_5[iVar1 /*13*/].f_10 = func_581(uVar18, iVar1, -1, bVar19);
		uParam1->f_19.f_5[iVar1 /*13*/].f_11 = func_575(uVar20, iVar1, 2, bVar21);
		uParam1->f_19.f_5[iVar1 /*13*/].f_12 = func_581(uVar22, iVar1, -1, bVar23);
		iVar1++;
	}
	uParam1->f_77 = func_580(iVar24, "num", 0);
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_77.f_1[iVar1 /*21*/][iVar2] = func_581(uVar26[iVar2], iVar1, 0, iVar27[iVar2]);
			iVar2++;
		}
		uParam1->f_77.f_1[iVar1 /*21*/].f_2 = func_575(uVar28, iVar1, 0, bVar29);
		uParam1->f_77.f_1[iVar1 /*21*/].f_3 = { func_574(uVar30, iVar1, 0f, 0f, 0f, bVar31) };
		uParam1->f_77.f_1[iVar1 /*21*/].f_6 = func_573(uVar32, iVar1, 0f, bVar33);
		uParam1->f_77.f_1[iVar1 /*21*/].f_7 = func_575(uVar34, iVar1, 0, bVar35);
		uParam1->f_77.f_1[iVar1 /*21*/].f_8 = func_581(uVar36, iVar1, -1, bVar37);
		uParam1->f_77.f_1[iVar1 /*21*/].f_9 = func_575(uVar38, iVar1, 0, bVar39);
		uParam1->f_77.f_1[iVar1 /*21*/].f_10 = func_581(uVar40, iVar1, -1, bVar41);
		uParam1->f_77.f_1[iVar1 /*21*/].f_11 = func_581(uVar42, iVar1, -1, bVar43);
		uParam1->f_77.f_1[iVar1 /*21*/].f_12 = func_581(uVar44, iVar1, -1, bVar45);
		uParam1->f_77.f_1[iVar1 /*21*/].f_13 = func_581(uVar46, iVar1, -1, bVar47);
		uParam1->f_77.f_1[iVar1 /*21*/].f_14 = func_581(uVar48, iVar1, 0, bVar49);
		uParam1->f_77.f_1[iVar1 /*21*/].f_15 = func_575(uVar50, iVar1, 2, bVar51);
		uParam1->f_77.f_1[iVar1 /*21*/].f_16 = func_581(uVar52, iVar1, -1, bVar53);
		uParam1->f_77.f_1[iVar1 /*21*/].f_17 = func_573(uVar54, iVar1, 60f, bVar55);
		uParam1->f_77.f_1[iVar1 /*21*/].f_18 = func_573(uVar56, iVar1, 60f, bVar57);
		uParam1->f_77.f_1[iVar1 /*21*/].f_19 = func_573(uVar58, iVar1, 60f, bVar59);
		uParam1->f_77.f_1[iVar1 /*21*/].f_20 = func_573(uVar60, iVar1, -1f, bVar61);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			uParam1->f_77.f_254[iVar1 /*10*/].f_1[iVar2] = func_581(uVar65[iVar2], iVar1, -1, iVar66[iVar2]);
			iVar2++;
		}
		uParam1->f_77.f_254[iVar1 /*10*/].f_8 = func_581(uVar67, iVar1, 0, bVar68);
		uParam1->f_77.f_254[iVar1 /*10*/].f_9 = func_581(uVar69, iVar1, -1, bVar70);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_77.f_275[iVar1 /*3*/][iVar2] = func_581(uVar72[iVar2], iVar1, 0, iVar73[iVar2]);
			iVar2++;
		}
		uParam1->f_77.f_275[iVar1 /*3*/].f_2 = func_581(uVar74, iVar1, 0, bVar75);
		iVar1++;
	}
	uParam1->f_356 = func_580(iVar76, "num", 0);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			uParam1->f_356.f_1[iVar1 /*15*/][iVar2] = func_581(uVar78[iVar2], iVar1, 0, iVar79[iVar2]);
			iVar2++;
		}
		uParam1->f_356.f_1[iVar1 /*15*/].f_3 = func_575(uVar80, iVar1, 0, bVar81);
		uParam1->f_356.f_1[iVar1 /*15*/].f_4 = { func_574(uVar82, iVar1, 0f, 0f, 0f, bVar83) };
		uParam1->f_356.f_1[iVar1 /*15*/].f_7 = func_573(uVar84, iVar1, 0f, bVar85);
		uParam1->f_356.f_1[iVar1 /*15*/].f_8 = func_581(uVar86, iVar1, -1, bVar87);
		uParam1->f_356.f_1[iVar1 /*15*/].f_9 = func_581(uVar88, iVar1, -1, bVar89);
		uParam1->f_356.f_1[iVar1 /*15*/].f_10 = func_581(uVar90, iVar1, 0, bVar91);
		uParam1->f_356.f_1[iVar1 /*15*/].f_11 = func_575(uVar93, iVar1, -1, bVar94);
		uParam1->f_356.f_1[iVar1 /*15*/].f_11.f_1 = func_575(uVar95, iVar1, 12, bVar96);
		uParam1->f_356.f_1[iVar1 /*15*/].f_11.f_2 = func_573(uVar97, iVar1, 1f, bVar98);
		uParam1->f_356.f_1[iVar1 /*15*/].f_11.f_3 = func_572(uVar99, iVar1, 0, bVar100);
		iVar1++;
	}
	uParam1->f_356.f_77 = func_580(iVar76, "trv", -1);
	uParam1->f_434 = func_580(iVar101, "num", 0);
	iVar1 = 0;
	while (iVar1 < 7)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			uParam1->f_434.f_1[iVar1 /*12*/][iVar2] = func_581(uVar103[iVar2], iVar1, 0, iVar104[iVar2]);
			iVar2++;
		}
		uParam1->f_434.f_1[iVar1 /*12*/].f_3 = func_575(uVar105, iVar1, 0, bVar106);
		uParam1->f_434.f_1[iVar1 /*12*/].f_4 = { func_574(uVar107, iVar1, 0f, 0f, 0f, bVar108) };
		uParam1->f_434.f_1[iVar1 /*12*/].f_7 = func_573(uVar109, iVar1, 0f, bVar110);
		uParam1->f_434.f_1[iVar1 /*12*/].f_8 = { func_574(uVar111, iVar1, 0f, 0f, 0f, bVar112) };
		uParam1->f_434.f_1[iVar1 /*12*/].f_11 = func_581(uVar113, iVar1, -1, bVar114);
		iVar1++;
	}
	uParam1->f_601 = func_580(iVar115, "wnum", 0);
	uParam1->f_601.f_1 = func_580(iVar115, "wfak", -1);
	uParam1->f_601.f_2 = func_578(iVar115, "wblk", 250f);
	uParam1->f_604 = func_580(iVar116, "time", -1);
	uParam1->f_604.f_1 = func_579(iVar116, "disp", 0);
	uParam1->f_613 = func_580(iVar117, "num", 0);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		uParam1->f_613.f_1[iVar1 /*11*/] = { func_574(uVar119, iVar1, 0f, 0f, 0f, bVar120) };
		uParam1->f_613.f_1[iVar1 /*11*/].f_3 = func_573(uVar121, iVar1, -1f, bVar122);
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_613.f_1[iVar1 /*11*/].f_4[iVar2] = func_581(uVar123[iVar2], iVar1, 0, iVar124[iVar2]);
			iVar2++;
		}
		uParam1->f_613.f_1[iVar1 /*11*/].f_6 = func_573(uVar125, iVar1, 0f, bVar126);
		uParam1->f_613.f_1[iVar1 /*11*/].f_7 = func_575(uVar128, iVar1, -1, bVar129);
		uParam1->f_613.f_1[iVar1 /*11*/].f_7.f_1 = func_575(uVar130, iVar1, 12, bVar131);
		uParam1->f_613.f_1[iVar1 /*11*/].f_7.f_2 = func_573(uVar132, iVar1, 1f, bVar133);
		uParam1->f_613.f_1[iVar1 /*11*/].f_7.f_3 = func_572(uVar134, iVar1, 0, bVar135);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		uParam1->f_659[iVar1 /*32*/] = func_581(uVar137, iVar1, 0, bVar138);
		uParam1->f_659[iVar1 /*32*/].f_1 = func_575(uVar140, iVar1, 1, bVar141);
		uParam1->f_659[iVar1 /*32*/].f_1.f_1 = func_571(uVar142, iVar1, "", bVar143);
		uParam1->f_659[iVar1 /*32*/].f_1.f_2 = func_581(uVar144, iVar1, 0, bVar145);
		uParam1->f_659[iVar1 /*32*/].f_1.f_3 = func_575(uVar146, iVar1, 5, bVar147);
		iVar2 = 0;
		while (iVar2 < 12)
		{
			uParam1->f_659[iVar1 /*32*/].f_7[iVar2 /*2*/] = func_575(uVar149[iVar2], iVar1, 0, iVar150[iVar2]);
			uParam1->f_659[iVar1 /*32*/].f_7[iVar2 /*2*/].f_1 = func_581(uVar151[iVar2], iVar1, -1, iVar152[iVar2]);
			iVar2++;
		}
		iVar1++;
	}
	uParam1->f_692 = func_580(iVar153, "num", 0);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		uParam1->f_692.f_1[iVar1 /*7*/] = func_575(uVar155, iVar1, -1, bVar156);
		uParam1->f_692.f_1[iVar1 /*7*/].f_1 = { func_574(uVar157, iVar1, 0f, 0f, 0f, bVar158) };
		uParam1->f_692.f_1[iVar1 /*7*/].f_4 = { func_574(uVar159, iVar1, 0f, 0f, 0f, bVar160) };
		iVar1++;
	}
	uParam1->f_729 = func_580(iVar161, "num", 0);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_729.f_1[iVar1 /*9*/][iVar2] = func_581(uVar163[iVar2], iVar1, 0, iVar164[iVar2]);
			iVar2++;
		}
		uParam1->f_729.f_1[iVar1 /*9*/].f_2 = { func_574(uVar165, iVar1, 0f, 0f, 0f, bVar166) };
		uParam1->f_729.f_1[iVar1 /*9*/].f_5 = { func_574(uVar167, iVar1, 0f, 0f, 0f, bVar168) };
		uParam1->f_729.f_1[iVar1 /*9*/].f_8 = func_573(uVar169, iVar1, 0f, bVar170);
		iVar1++;
	}
	uParam1->f_785 = func_580(iVar171, "num", 0);
	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_785.f_1[iVar1 /*18*/][iVar2] = func_581(uVar173[iVar2], iVar1, 0, iVar174[iVar2]);
			iVar2++;
		}
		uParam1->f_785.f_1[iVar1 /*18*/].f_2 = func_575(uVar175, iVar1, -1, bVar176);
		uParam1->f_785.f_1[iVar1 /*18*/].f_3 = func_581(uVar177, iVar1, -1, bVar178);
		uParam1->f_785.f_1[iVar1 /*18*/].f_4 = { func_574(uVar179, iVar1, 0f, 0f, 0f, bVar180) };
		uParam1->f_785.f_1[iVar1 /*18*/].f_7 = func_573(uVar181, iVar1, -1f, bVar182);
		uParam1->f_785.f_1[iVar1 /*18*/].f_8 = func_573(uVar183, iVar1, -1f, bVar184);
		uParam1->f_785.f_1[iVar1 /*18*/].f_9 = func_581(uVar185, iVar1, -1, bVar186);
		uParam1->f_785.f_1[iVar1 /*18*/].f_10 = func_575(uVar188, iVar1, -1, bVar189);
		uParam1->f_785.f_1[iVar1 /*18*/].f_10.f_1 = func_575(uVar190, iVar1, 12, bVar191);
		uParam1->f_785.f_1[iVar1 /*18*/].f_10.f_2 = func_573(uVar192, iVar1, 1f, bVar193);
		uParam1->f_785.f_1[iVar1 /*18*/].f_10.f_3 = func_572(uVar194, iVar1, 0, bVar195);
		uParam1->f_785.f_1[iVar1 /*18*/].f_14 = func_572(uVar196, iVar1, 0, bVar197);
		uParam1->f_785.f_1[iVar1 /*18*/].f_15 = { func_574(uVar198, iVar1, 0f, 0f, 0f, bVar199) };
		iVar1++;
	}
	uParam1->f_823 = func_580(iVar200, "num", 0);
	iVar1 = 0;
	while (iVar1 < 1)
	{
		uParam1->f_823.f_1[iVar1 /*10*/] = func_581(uVar202, iVar1, -1, bVar203);
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_823.f_1[iVar1 /*10*/].f_1[iVar2 /*8*/] = func_581(uVar205[iVar2], iVar1, -1, iVar206[iVar2]);
			uParam1->f_823.f_1[iVar1 /*10*/].f_1[iVar2 /*8*/].f_1 = { func_574(uVar207[iVar2], iVar1, 0f, 0f, 0f, iVar208[iVar2]) };
			uParam1->f_823.f_1[iVar1 /*10*/].f_1[iVar2 /*8*/].f_4 = { func_574(uVar209[iVar2], iVar1, 0f, 0f, 0f, iVar210[iVar2]) };
			uParam1->f_823.f_1[iVar1 /*10*/].f_1[iVar2 /*8*/].f_7 = func_581(uVar211[iVar2], iVar1, 2000, iVar212[iVar2]);
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		uParam1->f_842[iVar1 /*6*/] = func_575(uVar215, iVar1, 0, bVar216);
		uParam1->f_842[iVar1 /*6*/].f_1 = func_581(uVar217, iVar1, 0, bVar218);
		uParam1->f_842[iVar1 /*6*/].f_2 = { func_574(uVar219, iVar1, 0f, 0f, 0f, bVar220) };
		uParam1->f_842[iVar1 /*6*/].f_5 = func_573(uVar221, iVar1, 0f, bVar222);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		uParam1->f_849[iVar1 /*16*/] = { func_570(uVar224, iVar1, "", bVar225) };
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		uParam1->f_994[iVar1 /*9*/] = { func_569(uVar228, iVar1, "", bVar229) };
		uParam1->f_994[iVar1 /*9*/].f_8 = func_581(uVar230, iVar1, -1, bVar231);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		uParam1->f_994.f_10[iVar1 /*16*/] = { func_570(uVar233, iVar1, "", bVar234) };
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 2)
	{
		uParam1->f_1021[iVar1 /*8*/] = { func_574(uVar236, iVar1, 0f, 0f, 0f, bVar237) };
		uParam1->f_1021[iVar1 /*8*/].f_3 = func_573(uVar238, iVar1, 0f, bVar239);
		uParam1->f_1021[iVar1 /*8*/].f_4 = func_581(uVar240, iVar1, -1, bVar241);
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_1021[iVar1 /*8*/].f_6[iVar2] = func_581(uVar242[iVar2], iVar1, 0, iVar243[iVar2]);
			iVar2++;
		}
		iVar1++;
	}
}

struct<8> func_569(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	struct<8> Var0;
	
	if (bParam3 && iParam1 < unk_0x2A32420E04AE5787(uParam0))
	{
		StringCopy(&Var0, unk_0x446BB52C35DB68A0(uParam0, iParam1), 32);
	}
	else
	{
		StringCopy(&Var0, sParam2, 32);
	}
	return Var0;
}

struct<16> func_570(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	struct<16> Var0;
	
	if (bParam3 && iParam1 < unk_0x2A32420E04AE5787(uParam0))
	{
		StringCopy(&Var0, unk_0x446BB52C35DB68A0(uParam0, iParam1), 64);
	}
	else
	{
		StringCopy(&Var0, sParam2, 64);
	}
	return Var0;
}

char* func_571(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && iParam1 < unk_0x2A32420E04AE5787(uParam0))
	{
		return unk_0x446BB52C35DB68A0(uParam0, iParam1);
	}
	return sParam2;
}

int func_572(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && iParam1 < unk_0x2A32420E04AE5787(uParam0))
	{
		return unk_0x2150C2FC641364CC(uParam0, iParam1);
	}
	return iParam2;
}

float func_573(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	if (bParam3 && iParam1 < unk_0x2A32420E04AE5787(uParam0))
	{
		return unk_0xCEBBA737179CE3D0(uParam0, iParam1);
	}
	return fParam2;
}

Vector3 func_574(var uParam0, int iParam1, struct<3> Param2, bool bParam3)
{
	if (bParam3 && iParam1 < unk_0x2A32420E04AE5787(uParam0))
	{
		return unk_0x83D3CBA972660C58(uParam0, iParam1);
	}
	return Param2;
}

int func_575(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && iParam1 < unk_0x2A32420E04AE5787(uParam0))
	{
		return unk_0xB64F599E8DBD9678(uParam0, iParam1);
	}
	return iParam2;
}

int func_576(int iParam0, char* sParam1, int iParam2)
{
	if (func_577(iParam0) && unk_0xA8F96580C10C5F9E(iParam0, sParam1) == 1)
	{
		return unk_0x9F0EF572EFEE0A9C(iParam0, sParam1);
	}
	return iParam2;
}

bool func_577(int iParam0)
{
	return iParam0 != 0;
}

float func_578(int iParam0, char* sParam1, float fParam2)
{
	if (func_577(iParam0) && unk_0xA8F96580C10C5F9E(iParam0, sParam1) == 3)
	{
		return unk_0xA481424344CBC893(iParam0, sParam1);
	}
	return fParam2;
}

int func_579(int iParam0, char* sParam1, int iParam2)
{
	if (func_577(iParam0) && unk_0xA8F96580C10C5F9E(iParam0, sParam1) == 2)
	{
		return unk_0x81A9ADA13F72AEDD(iParam0, sParam1);
	}
	return iParam2;
}

int func_580(int iParam0, char* sParam1, int iParam2)
{
	if (func_577(iParam0) && unk_0xA8F96580C10C5F9E(iParam0, sParam1) == 2)
	{
		return unk_0x81A9ADA13F72AEDD(iParam0, sParam1);
	}
	return iParam2;
}

int func_581(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && iParam1 < unk_0x2A32420E04AE5787(uParam0))
	{
		return unk_0xB64F599E8DBD9678(uParam0, iParam1);
	}
	return iParam2;
}

struct<16> func_582(int iParam0, char* sParam1, char* sParam2)
{
	struct<16> Var0;
	
	if (func_577(iParam0) && unk_0xA8F96580C10C5F9E(iParam0, sParam1) == 4)
	{
		StringCopy(&Var0, unk_0xC2ED3920E9296F36(iParam0, sParam1), 64);
	}
	else
	{
		StringCopy(&Var0, sParam2, 64);
	}
	return Var0;
}

int func_583(int iParam0, char* sParam1)
{
	if (!func_577(iParam0))
	{
		return 0;
	}
	return unk_0xA8F96580C10C5F9E(iParam0, sParam1);
}

void func_584(var uParam0, int iParam1, char* sParam2)
{
	if (!func_577(iParam1))
	{
		return;
	}
	if (!func_577(*uParam0) && unk_0xA8F96580C10C5F9E(iParam1, sParam2) == 6)
	{
		*uParam0 = unk_0x6BDE656A2A2932FC(iParam1, sParam2);
		if (!func_577(*uParam0))
		{
		}
	}
	if (!func_577(*uParam0))
	{
	}
}

void func_585()
{
	if (unk_0x6C99356A4D3C7B09(0) != 0)
	{
		unk_0x27DEA4A6845A22BC(0);
	}
}

char* func_586()
{
	return func_587(func_589(), func_588());
}

char* func_587(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "DJ_KM_Skate_Clothing_1";
		
		case 1:
			return "DJ_KM_Pizza";
		
		case 2:
			return "DJ_KM_Chakra_Stones_1";
		
		case 3:
			return "DJ_MM_Rental_Car_1";
		
		case 4:
			return "DJ_MM_Slippers_1";
		
		case 5:
			return "DJ_PT_Equipment_1";
		
		case 6:
			return "DJ_PT_Champagne_1";
		
		default:
	}
	return "LoadedDataTest3";
}

int func_588()
{
	return Local_674.f_540.f_1;
}

bool func_589()
{
	return Local_674.f_540;
}

int func_590(int iParam0)
{
	switch (iParam0)
	{
		case 275:
		case 270:
		case 276:
		case 277:
		case 273:
		case 292:
		case 295:
		case 300:
		case 309:
		case 310:
			return 0;
		
		default:
	}
	return 1;
}

void func_591()
{
	if (func_1251(21))
	{
		return;
	}
	func_592();
	func_284(21);
}

void func_592()
{
	switch (func_589())
	{
		case 0:
			func_1203();
			break;
		
		case 1:
			func_1142();
			break;
		
		case 2:
			func_912();
			break;
		
		case 4:
			func_862();
			break;
		
		case 3:
			func_744();
			break;
		
		case 6:
			func_683();
			break;
		
		case 5:
			func_593();
			break;
	}
}

void func_593()
{
	Local_214.f_13 = 161691;
	Local_214.f_3.f_1 = 161567;
	Local_214.f_11 = 161320;
	Local_214.f_11.f_1 = 158762;
	Local_214.f_100.f_3.f_1 = 158704;
	Local_214.f_100.f_3.f_3 = 158692;
	Local_214.f_100.f_3.f_2 = 158680;
	Local_214.f_100.f_3 = 158529;
	Local_214.f_554.f_4.f_2 = 158417;
	Local_214.f_92 = 158403;
	Local_214.f_92.f_4 = 158391;
	Local_214.f_92.f_3 = 158382;
	Local_214.f_517 = 158337;
	Local_214.f_517.f_1 = 158269;
	Local_214.f_526.f_5 = 158259;
	Local_214.f_526.f_4 = 158212;
	Local_214.f_526.f_6 = 158180;
	Local_214.f_49 = 158148;
	Local_214.f_49.f_2.f_1 = 158108;
	Local_214.f_49.f_2.f_2 = 158068;
	Local_214.f_120.f_5 = 158058;
	Local_214.f_120.f_13 = 158046;
	Local_214.f_120.f_4 = 158035;
	Local_214.f_120.f_27 = 157988;
	Local_214.f_120.f_32 = 157889;
	Local_214.f_120.f_23 = 157869;
	Local_214.f_162.f_192 = 157728;
	Local_214.f_162.f_150.f_13 = 157716;
	Local_214.f_162.f_201 = 157641;
	Local_214.f_162.f_2.f_25 = 157601;
	Local_214.f_162.f_2.f_94.f_1 = 157591;
	Local_214.f_162.f_2.f_94 = 157213;
	Local_214.f_162.f_2.f_94.f_7 = 157200;
	Local_214.f_162 = 156624;
	Local_214.f_162.f_1 = 156578;
	Local_214.f_510.f_1 = 156552;
	Local_214.f_373.f_43 = 156492;
	Local_214.f_373.f_44 = 156346;
	Local_214.f_373.f_25 = 156333;
	Local_214.f_70 = 156324;
}

int func_594()
{
	return 2;
}

float func_595(var uParam0)
{
	return 50f;
}

int func_596(int iParam0, var uParam1)
{
	if (Local_197.f_356.f_1[iParam0 /*15*/].f_3 == joaat("pony"))
	{
		uParam1->f_66 = joaat("pony");
		StringCopy(&(uParam1->f_1), "43GSP782", 16);
		*uParam1 = 3;
		uParam1->f_5 = 16;
		uParam1->f_6 = 16;
		uParam1->f_7 = 16;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_67 = 0;
		uParam1->f_69 = 1;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
		uParam1->f_74 = 255;
		uParam1->f_76 = 255;
		unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), true);
		return 1;
	}
	return 0;
}

void func_597(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xBFE60A5CC0C835D8(uParam1, 1, 1, 0);
			break;
		
		case 1:
			unk_0xBFE60A5CC0C835D8(uParam1, 0, 1, 0);
			unk_0xBFE60A5CC0C835D8(uParam1, 1, 1, 0);
			break;
	}
}

bool func_598(var uParam0, var uParam1, var uParam2)
{
	return func_599() != 0;
}

int func_599()
{
	return func_22();
}

int func_600(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		default:
	}
	return 0;
}

void func_601(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_608(iParam0, 0, 8);
			func_604(iParam0, 0, 1, 156966);
			func_608(iParam0, 1, 7);
			break;
		
		case 1:
			func_608(iParam0, 0, 8);
			func_604(iParam0, 0, 1, 156838);
			func_608(iParam0, 1, 19);
			func_604(iParam0, 1, 2, 156966);
			func_608(iParam0, 2, 7);
			break;
		
		case 2:
			func_608(iParam0, 0, 9);
			break;
		
		case 3:
			func_608(iParam0, 0, 8);
			func_604(iParam0, 0, 1, 156838);
			func_608(iParam0, 1, 16);
			func_604(iParam0, 1, 2, 156813);
			func_608(iParam0, 2, 7);
			break;
	}
}

var func_602(int iParam0, var uParam1)
{
	return (func_92(iParam0, 5) && func_86(1));
}

bool func_603(var uParam0, var uParam1)
{
	return func_3(1);
}

void func_604(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_218.f_232[iParam0 /*80*/].f_1[iParam1 /*13*/].f_12;
	uVar1 = iParam2;
	Local_218.f_232[iParam0 /*80*/].f_1[iParam1 /*13*/].f_1[iVar0 /*2*/] = uVar1;
	Local_218.f_232[iParam0 /*80*/].f_1[iParam1 /*13*/].f_1[iVar0 /*2*/].f_1 = iParam3;
	Local_218.f_232[iParam0 /*80*/].f_1[iParam1 /*13*/].f_12++;
}

int func_605(int iParam0, var uParam1)
{
	return func_606(iParam0, 0);
}

int func_606(int iParam0, int iParam1)
{
	if (func_86(Local_197.f_77.f_1[iParam0 /*21*/].f_14))
	{
		if ((func_13(&(Local_674.f_52[iParam0 /*25*/].f_14), Local_674.f_52[iParam0 /*25*/].f_16, 0) || func_607(iParam0)) || iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_607(int iParam0)
{
	if (((((func_92(iParam0, 1) || func_92(iParam0, 0)) || func_92(iParam0, 14)) || func_92(iParam0, 12)) || func_92(iParam0, 11)) || func_92(iParam0, 13))
	{
		return 1;
	}
	return 0;
}

void func_608(int iParam0, int iParam1, int iParam2)
{
	Local_218.f_232[iParam0 /*80*/].f_1[iParam1 /*13*/] = iParam2;
	Local_218.f_232[iParam0 /*80*/]++;
}

float func_609(var uParam0)
{
	return 1000f;
}

Vector3 func_610(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return -591.0623f, -1166.539f, 21.1782f;
		
		case 1:
			return -620.3408f, -1165.117f, 21.1782f;
		
		case 2:
			return -621.4808f, -1101.907f, 21.1781f;
		
		case 3:
			return -614.5312f, -1073.422f, 21.3785f;
		
		case 4:
			return -616.4337f, -1034.042f, 20.7875f;
		
		case 5:
			return -623.31f, -996.9479f, 20.0253f;
		
		case 6:
			return -668.8128f, -1031.397f, 16.6584f;
		
		case 7:
			return -713.4483f, -1060.382f, 13.0133f;
		
		case 8:
			return -738.2045f, -1016.511f, 13.9066f;
		
		case 9:
			return -760.2473f, -978.169f, 14.644f;
		
		case 10:
			return -726.4073f, -968.7161f, 17.1713f;
		
		case 11:
			return -695.4406f, -947.1296f, 18.8838f;
		
		case 12:
			return -695.2433f, -923.0771f, 22.0752f;
		
		case 13:
			return -695.4212f, -910.3208f, 22.0774f;
		
		case 14:
			return -692.1169f, -908.2917f, 22.6719f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_611(var uParam0)
{
	return 15;
}

int func_612(var uParam0)
{
	if (!unk_0x93BF17E19A9F0E9B(Local_674.f_52[1 /*25*/]))
	{
		return 0;
	}
	return unk_0xF5014688C9788D5F(Local_674.f_52[1 /*25*/]);
}

void func_613(var uParam0, struct<6> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	if (!unk_0x93BF17E19A9F0E9B(Local_674.f_52[2 /*25*/]))
	{
		return;
	}
	if (Param1.f_5 && Param1.f_0 == unk_0xF5014688C9788D5F(Local_674.f_52[2 /*25*/]))
	{
		unk_0xD1C578C204015E1F(unk_0xC35A3A4C05A4831B(Local_674.f_52[2 /*25*/]), 8, 0, 0, 0);
	}
}

char* func_614(var uParam0)
{
	return "IDJ_PT_THIEF_B";
}

void func_615(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			unk_0xD1C578C204015E1F(iParam1, 0, 0, 2, 0);
			unk_0xD1C578C204015E1F(iParam1, 3, 1, 0, 0);
			unk_0xD1C578C204015E1F(iParam1, 4, 0, 1, 0);
			break;
		
		case 1:
			unk_0x3F58BFCF656F0DF1(iParam1, false);
			unk_0x3B3AC5F69E21EAB7(iParam1, 1, 0);
			break;
		
		case 2:
			unk_0xF0259D91B002AE9F(iParam1, 400);
			unk_0xD25E9BDC14A0B649(iParam1, 400, 0);
			unk_0x3F58BFCF656F0DF1(iParam1, false);
			unk_0xD1C578C204015E1F(iParam1, 8, 1, 0, 0);
			break;
		
		case 3:
			unk_0xD25E9BDC14A0B649(iParam1, 0, 0);
			break;
	}
}

bool func_616(var uParam0)
{
	return Local_674.f_52[2 /*25*/].f_1 == 6;
}

void func_617(var uParam0)
{
	struct<2> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_0 = 2;
	func_618(5, &Var0);
}

void func_618(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_0 = -1736983835;
	Var0.f_1 = bLocal_618;
	Var0.f_2 = iParam0;
	Var0.f_3 = { *iParam1 };
	unk_0x01F0B819E78A18A1(1, &Var0, 5, func_52(1));
}

Vector3 func_619(var uParam0)
{
	if (!unk_0x93BF17E19A9F0E9B(Local_674.f_52[2 /*25*/]))
	{
		return 0f, 0f, 0f;
	}
	return unk_0xD1A6A821F5AC81DB(unk_0xC35A3A4C05A4831B(Local_674.f_52[2 /*25*/]), 0);
}

int func_620(var uParam0)
{
	return 676;
}

char* func_621(var uParam0)
{
	return "IDJ_PT_EQ_BLIP";
}

int func_622(var uParam0)
{
	return 18;
}

char* func_623(var uParam0)
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 2:
				return "IDJ_T_PT_EQ_EQb";
			}
		
		default:
	}
	return "";
}

char* func_624(var uParam0)
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 2:
				return "IDJ_T_PT_EQ_EQa";
			}
		
		default:
	}
	return "";
}

int func_625()
{
	if (func_599() == 0)
	{
		return !func_13(&uLocal_705, 6000, 0);
	}
	return 0;
}

char* func_626(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_TX_P_PTEQ_A";
		
		default:
	}
	return "";
}

int func_627(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_599() == 0 && func_13(&uLocal_705, 5000, 0));
		
		default:
	}
	return 0;
}

int func_628(var uParam0)
{
	return 158;
}

int func_629(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_599() == 0;
			break;
		
		case 1:
			return (func_599() == 1 && func_13(&uLocal_720, 3000, 0));
			break;
	}
	return 0;
}

char* func_630(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_PT_HLP_DJEQ";
		
		case 1:
			return "IDJ_PT_HLP_THIE";
		
		default:
	}
	return "";
}

int func_631(var uParam0)
{
	return 1;
}

char* func_632(var uParam0)
{
	return "IDJ_PT_FOCUS";
}

bool func_633(var uParam0)
{
	return func_599() == 1;
}

Vector3 func_634()
{
	return func_635(func_636());
}

Vector3 func_635(int iParam0)
{
	if (iParam0 != 0)
	{
		return Global_1956139.f_1[iParam0 /*6*/];
	}
	return 0f, 0f, 0f;
}

int func_636()
{
	if (Local_214.f_554.f_4.f_1 != 0)
	{
		Call_Loc(Local_214.f_554.f_4.f_1);
		return StackVal;
	}
	if (iLocal_621 != -1)
	{
		return Local_590.f_1[Local_696[iLocal_621 /*118*/].f_57 /*4*/];
	}
	return 0;
}

int func_637(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			if (func_639() >= 0)
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_638())
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_639() >= 3)
			{
				return 2;
			}
			break;
	}
	return -1;
}

int func_638()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_197.f_77.f_254)
	{
		if (func_86(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_639()
{
	return func_640();
}

int func_640()
{
	return Local_696[iLocal_621 /*118*/];
}

char* func_641()
{
	return "HEI4_MUSIC_STOP";
}

char* func_642()
{
	return "HEI4_FAIL";
}

char* func_643(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEI4_SUSPENSE_START";
		
		case 1:
			return "HEI4_MED_INTENSITY";
		
		case 2:
			return "HEI4_DELIVERING";
		
		default:
	}
	return "";
}

void func_644()
{
	func_673(0, 4, 161297);
	func_672(0, 1, 1);
	func_673(1, 7, 161160);
	func_672(1, 2, 2);
	func_646(2, 3, 4, 5, 6, 160842, 160814, 159399, 160842, 1);
	func_673(6, 48, 158841);
}

void func_645()
{
}

void func_646(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam0;
	iVar1 = iParam1;
	iVar2 = iParam2;
	iVar3 = iParam3;
	if (bParam9)
	{
		iVar4 = iVar3;
		iVar5 = iVar0;
	}
	else
	{
		iVar4 = iVar0;
		iVar5 = iVar3;
	}
	func_673(iVar0, 22, iParam5);
	func_648(iVar0, iParam4, 159230);
	func_647(iVar0, iVar1);
	func_647(iVar0, iVar4);
	func_647(iVar0, iVar5);
	func_647(iVar0, iVar2);
	func_673(iVar1, 24, iParam6);
	func_648(iVar1, iParam4, 159230);
	func_647(iVar1, iVar4);
	func_647(iVar1, iVar5);
	func_647(iVar1, iVar2);
	func_673(iVar2, 25, iParam7);
	func_648(iVar2, iParam4, 159230);
	func_647(iVar2, iVar1);
	func_647(iVar2, iVar4);
	func_647(iVar2, iVar5);
	func_673(iVar3, 23, iParam8);
	func_648(iVar3, iParam4, 159230);
	func_647(iVar3, iVar1);
	func_647(iVar3, iVar4);
	func_647(iVar3, iVar5);
	func_647(iVar3, iVar2);
}

void func_647(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_217[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	Local_217[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_217[iParam0 /*21*/].f_19++;
}

void func_648(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_217[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	Local_217[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_217[iParam0 /*21*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_217[iParam0 /*21*/].f_19++;
}

int func_649()
{
	if (func_650(0))
	{
		return 1;
	}
	return 0;
}

int func_650(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (!func_651(iVar0, bParam0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_651(int iParam0, bool bParam1)
{
	if (func_478(iParam0, 4) || func_478(iParam0, 3))
	{
		return 1;
	}
	if (bParam1)
	{
		if (func_652(iParam0, iLocal_622, 6) || func_652(iParam0, iLocal_622, 9))
		{
			return 1;
		}
	}
	return 0;
}

bool func_652(int iParam0, int iParam1, int iParam2)
{
	return func_4(&(Local_696[iParam1 /*118*/].f_3[iParam0 /*3*/]), iParam2);
}

void func_653()
{
	func_654("IDJ_HLPDELV_T", "IDJ_PT_EQUIP", "IDJ_LOC_MUSIC", 1, 12, 0);
}

void func_654(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (func_655(sParam0, sParam1, sParam2, bParam5, iParam3))
	{
		Global_1574757 = 13;
		Global_1574757.f_56 = iParam3;
		Global_1574757.f_57 = iParam4;
	}
}

int func_655(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	if (unk_0x31A0D8A679F7D5A7(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(sParam1))
	{
		return 0;
	}
	if (unk_0x31A0D8A679F7D5A7(sParam1) > 63)
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(sParam2))
	{
		return 0;
	}
	if (unk_0x31A0D8A679F7D5A7(sParam2) > 63)
	{
		return 0;
	}
	if (func_665(sParam0, sParam1, sParam2) && Global_1574757.f_56 == Global_1574757.f_58)
	{
		return 0;
	}
	func_659();
	Global_1574757 = 10;
	StringCopy(&(Global_1574757.f_1), unk_0x1AF90EB93E0012D6(), 32);
	Global_1574757.f_9 = unk_0x70E57E9927B6BA58(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	StringCopy(&(Global_1574757.f_16), sParam1, 64);
	StringCopy(&(Global_1574757.f_32), sParam2, 64);
	Global_1574757.f_58 = uParam4;
	Global_1574757.f_56 = uParam4;
	func_658();
	func_657(bParam3);
	func_656();
	return 1;
}

void func_656()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1574757.f_59), true);
}

void func_657(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1574757.f_59), false);
		return;
	}
	unk_0x8744D2E3FC95740E(&(Global_1574757.f_59), false);
}

void func_658()
{
	Global_1574757.f_10 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), 86400000);
	Global_1574757.f_11 = unk_0x7E3F74F641EE6B27();
}

void func_659()
{
	func_661();
	func_660(0);
}

void func_660(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x76CD105BCAC6EB9F();
	Global_1574757 = 20;
	StringCopy(&(Global_1574757.f_1), "", 32);
	Global_1574757.f_9 = 0;
	if (bVar0)
	{
		Global_1574757.f_10 = unk_0x7E3F74F641EE6B27();
		Global_1574757.f_11 = unk_0x7E3F74F641EE6B27();
	}
	StringCopy(&(Global_1574757.f_12), "", 16);
	StringCopy(&(Global_1574757.f_16), "", 64);
	StringCopy(&(Global_1574757.f_32), "", 64);
	Global_1574757.f_52 = 0;
	Global_1574757.f_53 = 0;
	Global_1574757.f_54 = 0;
	Global_1574757.f_55 = -1;
	Global_1574757.f_56 = 0;
	Global_1574757.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_661()
{
	if (!func_664())
	{
	}
	if (func_663())
	{
		unk_0x7C59282918D59E1B(&(Global_1574757.f_12));
		func_662();
		unk_0xD4C961FBE468D19D();
	}
}

void func_662()
{
	switch (Global_1574757)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x511D14ED2DA887E1(Global_1574757.f_52);
			return;
		
		case 2:
			unk_0x511D14ED2DA887E1(Global_1574757.f_52);
			unk_0x511D14ED2DA887E1(Global_1574757.f_53);
			return;
		
		case 3:
			unk_0xACF853FB3F6EA7D4(&(Global_1574757.f_16));
			return;
		
		case 4:
			unk_0xACF853FB3F6EA7D4(&(Global_1574757.f_16));
			unk_0xACF853FB3F6EA7D4(&(Global_1574757.f_32));
			return;
		
		case 5:
			unk_0x60D332F23943B34F(&(Global_1574757.f_16));
			return;
		
		case 6:
			unk_0x4E5A3D96808F7F84(Global_1574757.f_56);
			unk_0x60D332F23943B34F(&(Global_1574757.f_16));
			return;
		
		case 7:
			unk_0xACF853FB3F6EA7D4(&(Global_1574757.f_16));
			return;
		
		case 8:
			unk_0x4E5A3D96808F7F84(Global_1574757.f_56);
			unk_0xACF853FB3F6EA7D4(&(Global_1574757.f_16));
			return;
		
		case 9:
			unk_0xB993F5B7A74B2A85(&(Global_1574757.f_16));
			return;
		
		case 10:
			unk_0x60D332F23943B34F(&(Global_1574757.f_16));
			unk_0x60D332F23943B34F(&(Global_1574757.f_32));
			return;
		
		case 12:
			unk_0x60D332F23943B34F(&(Global_1574757.f_16));
			unk_0xACF853FB3F6EA7D4(&(Global_1574757.f_32));
			return;
		
		case 13:
			unk_0x4E5A3D96808F7F84(Global_1574757.f_56);
			unk_0xACF853FB3F6EA7D4(&(Global_1574757.f_16));
			unk_0x4E5A3D96808F7F84(Global_1574757.f_57);
			unk_0xACF853FB3F6EA7D4(&(Global_1574757.f_32));
			return;
		
		case 11:
			unk_0xB993F5B7A74B2A85(&(Global_1574757.f_16));
			return;
		
		case 14:
			unk_0x4E5A3D96808F7F84(Global_1574757.f_56);
			unk_0x60D332F23943B34F(&(Global_1574757.f_16));
			unk_0x4E5A3D96808F7F84(Global_1574757.f_56);
			unk_0xACF853FB3F6EA7D4(&(Global_1574757.f_32));
			return;
		
		case 15:
			unk_0x4E5A3D96808F7F84(Global_1574757.f_56);
			unk_0x60D332F23943B34F(&(Global_1574757.f_16));
			unk_0x4E5A3D96808F7F84(Global_1574757.f_57);
			unk_0xACF853FB3F6EA7D4(&(Global_1574757.f_32));
			return;
		
		case 17:
			unk_0x60D332F23943B34F(&(Global_1574757.f_16));
			unk_0x60D332F23943B34F(&(Global_1574757.f_32));
			unk_0x4E5A3D96808F7F84(Global_1574757.f_56);
			unk_0xACF853FB3F6EA7D4(&(Global_1574757.f_48));
			return;
		
		case 16:
			unk_0x4E5A3D96808F7F84(Global_1574757.f_56);
			unk_0x60D332F23943B34F(&(Global_1574757.f_16));
			return;
		
		case 19:
			unk_0x4E5A3D96808F7F84(Global_1574757.f_56);
			unk_0xACF853FB3F6EA7D4(&(Global_1574757.f_16));
			return;
		
		case 18:
			unk_0x60D332F23943B34F(&(Global_1574757.f_16));
			unk_0x4E5A3D96808F7F84(Global_1574757.f_56);
			unk_0xACF853FB3F6EA7D4(&(Global_1574757.f_48));
			unk_0x60D332F23943B34F(&(Global_1574757.f_32));
			return;
		
		default:
	}
}

int func_663()
{
	if (Global_1574757 == 20)
	{
		return 0;
	}
	return 1;
}

int func_664()
{
	if (!func_663())
	{
		return 0;
	}
	unk_0x32A590914F10401C(&(Global_1574757.f_12));
	func_662();
	return unk_0x96DEE7666C9409E5();
}

bool func_665(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_663())
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(sParam1))
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(sParam2))
	{
		return 0;
	}
	if (!unk_0x70E57E9927B6BA58(sParam0) == unk_0x70E57E9927B6BA58(&(Global_1574757.f_12)))
	{
		return 0;
	}
	if (!unk_0x70E57E9927B6BA58(sParam1) == unk_0x70E57E9927B6BA58(&(Global_1574757.f_16)))
	{
		return 0;
	}
	return unk_0x70E57E9927B6BA58(sParam2) == unk_0x70E57E9927B6BA58(&(Global_1574757.f_32));
}

void func_666()
{
	func_654("IDJ_DELIVER_THE", "IDJ_PT_EQUIP", "IDJ_LOC_MUSIC", 1, 12, 0);
}

void func_667()
{
	func_668("IDJ_RECOVER", "IDJ_PT_EQUIP", 18, 0);
}

void func_668(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_669(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1574757 = 19;
		Global_1574757.f_56 = iParam2;
	}
}

int func_669(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	if (unk_0x31A0D8A679F7D5A7(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(sParam1))
	{
		return 0;
	}
	if (func_670(sParam0, sParam1) && Global_1574757.f_56 == Global_1574757.f_58)
	{
		return 0;
	}
	func_659();
	Global_1574757 = 3;
	StringCopy(&(Global_1574757.f_1), unk_0x1AF90EB93E0012D6(), 32);
	Global_1574757.f_9 = unk_0x70E57E9927B6BA58(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	StringCopy(&(Global_1574757.f_16), sParam1, 64);
	Global_1574757.f_58 = uParam3;
	Global_1574757.f_56 = uParam3;
	func_658();
	func_657(bParam2);
	func_656();
	return 1;
}

bool func_670(char* sParam0, char* sParam1)
{
	if (!func_663())
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(sParam1))
	{
		return 0;
	}
	if (!unk_0x70E57E9927B6BA58(sParam0) == unk_0x70E57E9927B6BA58(&(Global_1574757.f_12)))
	{
		return 0;
	}
	return unk_0x70E57E9927B6BA58(sParam1) == unk_0x70E57E9927B6BA58(&(Global_1574757.f_16));
}

void func_671()
{
	func_668("ILH_STOP_THE", "IDJ_THIEVES", 6, 0);
}

void func_672(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = Local_217[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	uVar2 = iParam2;
	Local_217[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_217[iParam0 /*21*/].f_1[iVar0 /*3*/].f_2 = uVar2;
	Local_217[iParam0 /*21*/].f_19++;
}

void func_673(int iParam0, int iParam1, int iParam2)
{
	Local_217[iParam0 /*21*/] = iParam1;
	Local_217[iParam0 /*21*/].f_20 = iParam2;
	iLocal_630++;
}

void func_674()
{
	func_668("ILH_GOTO_THE", "IDJ_LOC_PIRATE", 12, 0);
}

void func_675()
{
	func_679(0, 4);
	func_678(0, 1);
	func_679(1, 7);
	func_676(1, 2, 161464);
	func_679(2, 22);
	func_678(2, 3);
	func_679(3, 24);
	func_678(3, 4);
	func_679(4, 48);
}

void func_676(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_216[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_216[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_216[iParam0 /*20*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_216[iParam0 /*20*/].f_19++;
}

bool func_677()
{
	return Local_674.f_52[2 /*25*/].f_1 == 6;
}

void func_678(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_216[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_216[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_216[iParam0 /*20*/].f_19++;
}

void func_679(int iParam0, int iParam1)
{
	Local_216[iParam0 /*20*/] = iParam1;
	iLocal_629++;
}

void func_680()
{
	int iVar0;
	
	if (unk_0x93BF17E19A9F0E9B(Local_674.f_353[0 /*8*/]))
	{
		iVar0 = unk_0xE38610F405049F71(Local_674.f_353[0 /*8*/]);
		if (((func_172(0, 6) && unk_0x1B1A446EFA398EB5(iVar0)) && unk_0xC39AE5D390581AD5(iVar0, -1, 0)) && !unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			unk_0xC229299217554C78(iVar0, 1, 1, 0);
			unk_0x4DC72C4B884A6C59(iVar0, 1);
			unk_0x7D167E642755C276(iVar0, 1);
			unk_0xC023C55477474DBE(iVar0);
			unk_0x38911F7BA2D48F10(iVar0, "RADIO_35_DLC_HEI4_MLR");
		}
	}
}

void func_681()
{
	Local_197.f_19 = 1;
	Local_197.f_19.f_5[0 /*13*/].f_2 = joaat("h4_prop_h4_michael_backpack");
	Local_197.f_604 = 30;
	Local_197.f_604.f_1 = 2;
	func_682(0, 24);
}

void func_682(int iParam0, int iParam1)
{
	if (func_17(&(Local_197.f_356.f_1[iParam0 /*15*/]), iParam1))
	{
	}
}

void func_683()
{
	Local_214.f_13 = 165064;
	Local_214.f_3.f_4 = 164971;
	Local_214.f_3.f_4.f_1 = 164892;
	Local_214.f_11 = 164810;
	Local_214.f_11.f_1 = 164583;
	Local_214.f_100.f_3.f_3 = 158692;
	Local_214.f_100.f_3.f_2 = 158680;
	Local_214.f_100.f_1 = 164464;
	Local_214.f_100 = 164397;
	Local_214.f_554.f_4.f_2 = 164347;
	Local_214.f_120.f_13 = 164335;
	Local_214.f_120.f_4 = 164325;
	Local_214.f_120.f_24 = 164312;
	Local_214.f_120.f_35 = 164277;
	Local_214.f_162.f_192 = 164215;
	Local_214.f_162 = 164198;
	Local_214.f_480.f_4 = 164112;
	Local_214.f_480.f_3 = 164090;
	Local_214.f_70 = 156324;
	Local_214.f_373.f_43 = 163942;
	Local_214.f_373.f_44 = 163805;
	Local_214.f_373.f_47 = 163524;
	Local_214.f_373.f_48 = 163524;
	Local_214.f_513 = 163491;
	Local_214.f_513.f_1 = 163468;
	Local_214.f_3.f_1 = 162849;
	Local_214.f_3 = 162720;
	Local_214.f_517.f_1 = 162406;
	Local_214.f_517 = 162322;
	Local_214.f_526.f_5 = 162312;
	Local_214.f_526.f_4 = 162234;
	Local_214.f_526.f_6 = 162189;
	Local_214.f_49 = 162145;
}

int func_684()
{
	if (func_685() == 0)
	{
		return !func_13(&uLocal_705, 6000, 0);
	}
	return 0;
}

int func_685()
{
	return func_22();
}

char* func_686(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_TX_P_PTCP_A";
		
		case 1:
			return "IDJ_TX_P_PTCP_U";
		
		default:
	}
	return "";
}

int func_687(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_685() == 0 && func_13(&uLocal_705, 5000, 0));
		
		case 1:
			return (func_685() == 3 && func_13(&uLocal_722, 5000, 0));
		
		default:
	}
	return 0;
}

int func_688(var uParam0)
{
	return 158;
}

char* func_689(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_PT_HLP_STRT";
		
		case 1:
			return "IDJ_PT_HLP_SRCe";
		
		case 2:
			return "IDJ_PT_HLP_SRCt";
		
		case 3:
			return "IDJ_PT_HLP_TRK";
		
		case 4:
			return "IDJ_PT_HLP_SPD";
		
		default:
	}
	return "";
}

int func_690(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_685() == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_685() == 1)
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_693(0))
			{
				return 1;
			}
			break;
		
		case 3:
			return (func_685() == 3 && func_13(&uLocal_722, 5000, 0));
			break;
		
		case 4:
			return (func_685() == 3 && func_691());
			break;
	}
	return 0;
}

int func_691()
{
	if (!unk_0x93BF17E19A9F0E9B(Local_674.f_353[1 /*8*/]))
	{
		return 0;
	}
	if (unk_0xCECDBB848D53DEB2(iLocal_620, unk_0xE38610F405049F71(Local_674.f_353[1 /*8*/]), 0))
	{
		if (unk_0x1D5CD3EAAA7422B0(unk_0xDF93B3CFAC96698F(unk_0xF5014688C9788D5F(Local_674.f_353[1 /*8*/]))) > func_692())
		{
			return 1;
		}
	}
	return 0;
}

float func_692()
{
	switch (func_589())
	{
		case 6:
			return 22f;
		
		default:
	}
	return 22f;
}

bool func_693(int iParam0)
{
	return func_694(&(Local_674.f_440), iParam0);
}

bool func_694(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return BitTest((*uParam0)[iVar0], iVar1);
}

void func_695()
{
	func_696(0);
}

void func_696(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			if (Local_696[iVar0 /*118*/].f_73 > 0 && Local_674.f_540.f_3 > Local_696[iVar0 /*118*/].f_108)
			{
				Local_674.f_540.f_3 = Local_696[iVar0 /*118*/].f_108;
			}
		}
		iVar0++;
	}
	if (Local_674.f_540.f_3 <= 0f)
	{
		func_488(iParam0, 3);
	}
}

void func_697()
{
	func_704();
	func_698(0);
}

void func_698(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_459(iParam0);
	if (unk_0x93BF17E19A9F0E9B(Local_674.f_353[iVar0 /*8*/]))
	{
		iVar1 = unk_0xF5014688C9788D5F(Local_674.f_353[iVar0 /*8*/]);
		if (func_703(iVar1) && unk_0x1D5CD3EAAA7422B0(unk_0xDF93B3CFAC96698F(iVar1)) > func_692())
		{
			if (!func_702(iParam0))
			{
				return;
			}
			if (!func_700(bLocal_618, 1))
			{
				return;
			}
			if (func_13(&uLocal_701, 500, 0))
			{
				func_54(&uLocal_701);
				func_699(5f);
			}
		}
		else if (func_15(&uLocal_701))
		{
			func_54(&uLocal_701);
		}
	}
}

void func_699(float fParam0)
{
	Local_696[unk_0xAE032CEDCF23C6D5() /*118*/].f_108 = (Local_696[unk_0xAE032CEDCF23C6D5() /*118*/].f_108 - fParam0);
	if (Local_696[unk_0xAE032CEDCF23C6D5() /*118*/].f_108 < 0f)
	{
		Local_696[unk_0xAE032CEDCF23C6D5() /*118*/].f_108 = 0f;
	}
}

int func_700(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (func_701(bParam0, iVar0, bParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_701(int iParam0, int iParam1, bool bParam2)
{
	if (Local_548[iParam1 /*7*/].f_4 == iParam0)
	{
		if (bParam2)
		{
			if (func_478(iParam1, 4) || func_652(iParam1, iLocal_622, 6))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_702(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if ((iParam0 < 0 || iParam0 > 3) || !unk_0x93BF17E19A9F0E9B(Local_674.f_2[iParam0]))
	{
		return 0;
	}
	if (unk_0xB0AB1F334666E337(Local_674.f_2[iParam0]))
	{
		if (!unk_0xEADBDBE0422CF7E6(Local_674.f_2[iParam0]))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = unk_0xF5014688C9788D5F(Local_674.f_2[iParam0]);
		fVar1 = vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iVar0, 1));
		iVar2 = 0;
		while (iVar2 < unk_0x95C7A22DBE7AEF4C())
		{
			if (unk_0x7206AEB20960CCC8(iVar2))
			{
				iVar3 = unk_0x56E414973C2A8C0E(unk_0x4470BE79F5771783(iVar2));
				if (vdist2(unk_0xD1A6A821F5AC81DB(iVar3, 1), unk_0xD1A6A821F5AC81DB(iVar0, 1)) < fVar1)
				{
					return 0;
				}
			}
			iVar2++;
		}
	}
	return 1;
}

int func_703(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_704()
{
	if (Local_674.f_540.f_3 < Local_696[unk_0xAE032CEDCF23C6D5() /*118*/].f_108)
	{
		Local_696[unk_0xAE032CEDCF23C6D5() /*118*/].f_108 = Local_674.f_540.f_3;
	}
}

int func_705(var uParam0)
{
	return round(Local_696[unk_0xAE032CEDCF23C6D5() /*118*/].f_108);
}

bool func_706(var uParam0)
{
	return func_707(3);
}

bool func_707(int iParam0)
{
	return func_4(&(Local_674.f_538), iParam0);
}

void func_708(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14)
{
	int iVar0;
	float fVar1;
	
	if (func_172(iParam0, 14))
	{
		iVar0 = func_195(iParam0);
		if (!func_702(iVar0))
		{
			return;
		}
		if (func_15(&uLocal_699) && !func_13(&uLocal_699, 200, 0))
		{
			return;
		}
		else
		{
			func_54(&uLocal_699);
			func_14(&uLocal_699, 0, 0);
		}
		fVar1 = func_709(&uParam1);
		if (fVar1 > 0f)
		{
			func_699(fVar1);
		}
	}
}

float func_709(var uParam0)
{
	float fVar0;
	
	fVar0 = (uParam0->f_2 * 50f);
	if (fVar0 > func_711(0, 0))
	{
		if (func_710(uParam0))
		{
			if (fVar0 > func_711(1, 1))
			{
				fVar0 = func_711(1, 1);
			}
		}
		if (fVar0 > func_711(1, 0))
		{
			fVar0 = func_711(1, 0);
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

int func_710(var uParam0)
{
	if (uParam0->f_6 == joaat("weapon_rammed_by_car") || uParam0->f_6 == joaat("weapon_run_over_by_car"))
	{
		return 1;
	}
	return 0;
}

float func_711(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (bParam1)
		{
			return 20f;
		}
		else
		{
			return 30f;
		}
	}
	return 5f;
}

int func_712(int iParam0, var uParam1)
{
	switch (Local_197.f_356.f_1[iParam0 /*15*/].f_3)
	{
		case joaat("mule"):
			uParam1->f_66 = joaat("mule");
			StringCopy(&(uParam1->f_1), "15SBF953", 16);
			uParam1->f_5 = 111;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 6);
			break;
		
		default:
			return 0;
	}
	return 1;
}

void func_713(int iParam0, int iParam1)
{
	switch (Local_197.f_356.f_1[iParam0 /*15*/].f_3)
	{
		case joaat("mule"):
			unk_0xBA3C1A9AA7FD9616(iParam1, 3);
			unk_0x9452FE4900245259(iParam1, 15f);
			unk_0x62DFD44586348C12(iParam1, 6);
			unk_0x3E13A302AA0F06BF(iParam1, 0, 5, 0.4f);
			unk_0x70BAF7723F26069A(iParam1, 1);
			break;
		
		case joaat("bodhi2"):
			unk_0xBA3C1A9AA7FD9616(iParam1, 3);
			unk_0x9452FE4900245259(iParam1, 15f);
			unk_0x3E13A302AA0F06BF(iParam1, 4, 5, 0.25f);
			unk_0x2AEBE39F6BF7D6BC(iParam1, 51f);
			unk_0x62DFD44586348C12(iParam1, 6);
			unk_0x38911F7BA2D48F10(iParam1, "RADIO_11_TALK_02");
			break;
	}
}

Vector3 func_714(var uParam0)
{
	return Local_197.f_356.f_1[1 /*15*/].f_4;
}

int func_715(int iParam0)
{
	if (Local_592.f_1 < (Local_197.f_785.f_1[iParam0 /*18*/].f_8 * Local_197.f_785.f_1[iParam0 /*18*/].f_8))
	{
		if (!unk_0x93BF17E19A9F0E9B(Local_674.f_353[1 /*8*/]))
		{
			return 0;
		}
		return unk_0xCB5CAFF0A4A8B74B(unk_0xF5014688C9788D5F(Local_674.f_353[1 /*8*/]));
	}
	return 0;
}

void func_716(int iParam0)
{
	func_608(iParam0, 0, 8);
}

void func_717(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			unk_0xD1C578C204015E1F(iParam1, 0, 0, 1, 0);
			unk_0xD1C578C204015E1F(iParam1, 3, 0, 0, 0);
			unk_0xD1C578C204015E1F(iParam1, 4, 0, 0, 0);
			unk_0xD25E9BDC14A0B649(iParam1, 0, 0);
			break;
	}
}

void func_718(var uParam0)
{
	func_719(17);
}

void func_719(int iParam0)
{
	if (func_17(&(Local_197.f_16), iParam0))
	{
	}
}

float func_720(var uParam0)
{
	return 25f;
}

int func_721(var uParam0)
{
	return 225;
}

char* func_722(var uParam0)
{
	return "IDJ_DELVRTRK_B";
}

Vector3 func_723()
{
	return func_724(func_636());
}

Vector3 func_724(int iParam0)
{
	if (iParam0 != 0)
	{
		return Global_1956139.f_1[iParam0 /*6*/].f_3;
	}
	return 0f, 0f, 0f;
}

int func_725(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (unk_0x93BF17E19A9F0E9B(Local_674.f_353[1 /*8*/]) && unk_0xCECDBB848D53DEB2(iLocal_620, unk_0xE38610F405049F71(Local_674.f_353[1 /*8*/]), 0));
			break;
	}
	return 0;
}

int func_726(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (unk_0x93BF17E19A9F0E9B(Local_674.f_353[1 /*8*/]) && func_727(uParam0, "bottles_loop", unk_0xE38610F405049F71(Local_674.f_353[1 /*8*/]), "dlc_btl_stolen_supplies_Sounds", 0, 0));
			break;
	}
	return 0;
}

int func_727(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (*uParam0 == -1)
	{
		*uParam0 = unk_0xCA369FBC0DE29517();
		unk_0xBD618A73193F9982(*uParam0, sParam1, iParam2, sParam3, iParam4, iParam5);
		return 1;
	}
	return 0;
}

void func_728()
{
	func_673(0, 4, 164787);
	func_672(0, 1, 1);
	func_673(1, 5, 164764);
	func_672(1, 2, 2);
	func_646(2, 3, 4, 5, 6, 164741, 164713, 164685, 164662, 1);
	func_673(6, 48, 158841);
}

void func_729()
{
	func_668("IDJ_RECOVER", "IDJ_DELVRTRK", 9, 0);
}

void func_730()
{
	func_654("IDJ_HLPDELV_T", "IDJ_TRUCK", "IDJ_LOC_MUSIC", 1, 12, 0);
}

void func_731()
{
	func_654("IDJ_DELIVER_THE", "IDJ_TRUCK", "IDJ_LOC_MUSIC", 1, 12, 0);
}

void func_732()
{
	func_668("IDJ_RECOVER", "IDJ_DELVRTRK", 9, 0);
}

void func_733()
{
	func_668("IDJ_MM_SEARCH", "IDJ_MM_AREA", 12, 0);
}

void func_734()
{
	func_668("ILH_GOTO", "IDJ_MM_GRAPE", 12, 0);
}

void func_735()
{
	func_679(0, 4);
	func_678(0, 1);
	func_679(1, 5);
	func_676(1, 2, 164879);
	func_679(2, 22);
	func_678(2, 3);
	func_679(3, 24);
	func_678(3, 4);
	func_679(4, 48);
}

bool func_736()
{
	return func_693(0);
}

void func_737(var uParam0, int iParam1)
{
	if (!bLocal_616)
	{
		return;
	}
	if (func_739(iParam1, 3))
	{
		func_738(3);
	}
}

void func_738(int iParam0)
{
	if (func_17(&(Local_674.f_538), iParam0))
	{
	}
}

bool func_739(int iParam0, int iParam1)
{
	return func_4(&(Local_696[iParam0 /*118*/].f_106), iParam1);
}

void func_740()
{
	if (!unk_0x93BF17E19A9F0E9B(Local_674.f_353[1 /*8*/]))
	{
		return;
	}
	if (!func_707(3))
	{
		if (unk_0xCECDBB848D53DEB2(iLocal_620, unk_0xE38610F405049F71(Local_674.f_353[1 /*8*/]), 0))
		{
			func_741(3);
		}
	}
}

void func_741(int iParam0)
{
	if (func_17(&(Local_696[iLocal_621 /*118*/].f_106), iParam0))
	{
	}
}

void func_742()
{
	func_743(0, 15);
	func_682(1, 9);
	Local_197.f_613.f_1[0 /*11*/].f_3 = 200f;
	Local_197.f_785 = 1;
	Local_197.f_785.f_1[0 /*18*/].f_4 = { Local_197.f_613.f_1[0 /*11*/] };
	Local_197.f_785.f_1[0 /*18*/].f_7 = 200f;
	Local_197.f_785.f_1[0 /*18*/].f_8 = 25f;
	Local_197.f_835[0 /*6*/] = 2;
	Local_197.f_835[0 /*6*/].f_1 = "IDJ_HUD_CMPGNE";
	Local_197.f_835[0 /*6*/].f_2 = 1000;
	Local_197.f_604 = 30;
	Local_197.f_604.f_1 = 2;
}

void func_743(int iParam0, int iParam1)
{
	if (func_17(&(Local_197.f_19.f_5[iParam0 /*13*/]), iParam1))
	{
	}
}

void func_744()
{
	Local_214.f_13 = 173306;
	Local_214.f_3.f_1 = 171996;
	Local_214.f_3.f_4 = 171570;
	Local_214.f_11 = 171396;
	Local_214.f_11.f_1 = 170590;
	Local_214.f_471.f_8 = 170523;
	Local_214.f_100.f_3.f_1 = 170465;
	Local_214.f_100.f_3.f_3 = 158692;
	Local_214.f_100.f_3.f_2 = 158680;
	Local_214.f_100.f_3 = 170375;
	Local_214.f_554.f_4.f_2 = 170359;
	Local_214.f_162.f_173.f_1 = 170348;
	Local_214.f_162.f_173 = 170288;
	Local_214.f_162.f_173.f_3 = 170262;
	Local_214.f_162.f_192 = 170105;
	Local_214.f_162.f_150.f_13 = 170073;
	Local_214.f_162.f_150.f_4 = 170045;
	Local_214.f_162.f_150.f_5 = 170018;
	Local_214.f_162.f_150 = 169940;
	Local_214.f_162.f_150.f_9 = 169914;
	Local_214.f_162.f_193 = 169676;
	Local_214.f_162.f_200 = 169620;
	Local_214.f_162.f_203 = 169555;
	Local_214.f_162.f_150.f_19 = 169518;
	Local_214.f_162.f_142.f_1.f_5 = 169435;
	Local_214.f_162 = 168801;
	Local_214.f_162.f_1 = 168755;
	Local_214.f_162.f_2.f_88 = 168746;
	Local_214.f_162.f_2.f_88.f_3 = 168708;
	Local_214.f_162.f_2.f_88.f_1 = 168682;
	Local_214.f_162.f_2.f_88.f_2 = 168648;
	Local_214.f_162.f_2.f_28 = 168639;
	Local_214.f_162.f_2.f_28.f_1 = 168597;
	Local_214.f_162.f_142.f_1.f_1 = 168567;
	Local_214.f_162.f_142.f_1.f_4 = 168558;
	Local_214.f_120.f_13 = 168546;
	Local_214.f_120.f_4 = 168535;
	Local_214.f_120.f_9 = 168526;
	Local_214.f_120.f_24 = 168513;
	Local_214.f_49 = 168459;
	Local_214.f_554 = 168062;
	Local_214.f_373.f_43 = 168026;
	Local_214.f_373.f_44 = 167893;
	Local_214.f_92 = 167849;
	Local_214.f_92.f_3 = 167840;
	Local_214.f_92.f_4 = 167828;
	Local_214.f_517.f_1 = 167658;
	Local_214.f_517 = 167600;
	Local_214.f_526.f_5 = 167590;
	Local_214.f_526.f_4 = 167543;
	Local_214.f_526.f_6 = 167511;
	Local_214.f_49.f_2.f_1 = 167471;
	Local_214.f_49.f_2.f_2 = 167431;
	Local_214.f_49.f_2 = 167405;
	Local_214.f_533.f_13 = 167230;
	Local_214.f_533.f_9 = 167218;
	Local_214.f_533.f_12 = 166138;
	Local_214.f_533.f_10 = 166126;
	Local_214.f_533.f_15 = 166117;
	Local_214.f_533.f_7 = 166108;
	Local_214.f_533.f_6 = 166099;
	Local_214.f_533.f_16 = 166056;
	Local_214.f_533.f_3 = 166020;
	Local_214.f_70 = 156324;
}

int func_745(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1;
		
		case 6:
			return 1;
		
		default:
	}
	return 0;
}

void func_746(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			func_741(6);
			break;
		
		case 5:
			func_741(7);
			break;
	}
}

int func_747()
{
	return -1;
}

int func_748(var uParam0, var uParam1)
{
	return 2;
}

int func_749(var uParam0, var uParam1)
{
	return 0;
}

char* func_750(var uParam0, var uParam1)
{
	return "HS4_MOODY";
}

int func_751(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_760(0, iLocal_622, 1);
		
		case 1:
			return func_739(iLocal_622, 0);
		
		case 2:
			if ((unk_0x692665178199313C(bLocal_618) && !func_739(iLocal_622, 2)) && func_760(0, iLocal_622, 1))
			{
				if (!unk_0x93BF17E19A9F0E9B(Local_674.f_52[0 /*25*/]))
				{
					return 0;
				}
				if (!func_759() && unk_0x5B3431FA66D59A4C(unk_0xC35A3A4C05A4831B(Local_674.f_52[0 /*25*/])))
				{
					return 1;
				}
			}
			return 0;
			break;
		
		case 3:
			if (func_739(iLocal_622, 2))
			{
				if (func_13(&uLocal_713, 2000, 0))
				{
					func_54(&uLocal_713);
					return 1;
				}
			}
			return 0;
			break;
		
		case 4:
			if (func_758() == 2 && func_756(3))
			{
				if (func_13(&uLocal_713, 10000, 0))
				{
					func_54(&uLocal_713);
					return 1;
				}
			}
			return 0;
			break;
		
		case 5:
			if (func_758() == 3 && func_756(4))
			{
				unk_0xBF3D28CA44F3BE2D(-1, "Phone_Text_Arrive", "DLC_H4_MM_Sounds", 1);
				return 1;
			}
			return 0;
			break;
		
		case 6:
			if (!unk_0x93BF17E19A9F0E9B(Local_674.f_353[0 /*8*/]))
			{
				return 0;
			}
			if (unk_0xCB5CAFF0A4A8B74B(unk_0xF5014688C9788D5F(Local_674.f_353[0 /*8*/])))
			{
				if (!unk_0x93BF17E19A9F0E9B(Local_674.f_52[0 /*25*/]))
				{
					return 0;
				}
				if (unk_0xAD915B5E38F323E5(unk_0xF5014688C9788D5F(Local_674.f_52[0 /*25*/]), unk_0xF5014688C9788D5F(Local_674.f_353[0 /*8*/]), 287))
				{
					return 1;
				}
			}
			return 0;
			break;
		
		case 7:
			if (!unk_0x93BF17E19A9F0E9B(Local_674.f_52[0 /*25*/]))
			{
				return 0;
			}
			return ((func_758() == 5 && unk_0x5B3431FA66D59A4C(unk_0xC35A3A4C05A4831B(Local_674.f_52[0 /*25*/]))) && !func_755());
			break;
		
		case 8:
			if (func_754())
			{
				if (func_13(&uLocal_713, 2000, 0))
				{
					func_54(&uLocal_713);
					return 1;
				}
			}
			break;
		
		case 9:
			if (!unk_0x93BF17E19A9F0E9B(Local_674.f_353[0 /*8*/]))
			{
				return 0;
			}
			return unk_0xA9EDF0DFAF70EAD4(unk_0xE38610F405049F71(Local_674.f_353[0 /*8*/]), 1148846080, 1148846080, 1148846080, 1148846080, 1148846080, 1148846080) < 90f;
			break;
		
		case 10:
			if (func_758() == 6 && func_756(8))
			{
				if (func_13(&uLocal_713, 10000, 0))
				{
					func_54(&uLocal_713);
					return 1;
				}
			}
			return 0;
			break;
		
		case 11:
			return ((func_758() == 6 && func_752()) && Local_548[0 /*7*/].f_2 < 200f);
	}
	return 0;
}

var func_752()
{
	return (func_753() && func_754());
}

bool func_753()
{
	if (!unk_0x93BF17E19A9F0E9B(Local_674.f_353[0 /*8*/]))
	{
		return 0;
	}
	return unk_0xCECDBB848D53DEB2(iLocal_620, unk_0xE38610F405049F71(Local_674.f_353[0 /*8*/]), 0);
}

bool func_754()
{
	if (!unk_0x93BF17E19A9F0E9B(Local_674.f_52[0 /*25*/]))
	{
		return 0;
	}
	if (!unk_0x93BF17E19A9F0E9B(Local_674.f_353[0 /*8*/]))
	{
		return 0;
	}
	return unk_0xCECDBB848D53DEB2(unk_0xC35A3A4C05A4831B(Local_674.f_52[0 /*25*/]), unk_0xE38610F405049F71(Local_674.f_353[0 /*8*/]), 0);
}

bool func_755()
{
	if (!unk_0x93BF17E19A9F0E9B(Local_674.f_52[1 /*25*/]))
	{
		return 0;
	}
	if (!unk_0x93BF17E19A9F0E9B(Local_674.f_52[2 /*25*/]))
	{
		return 0;
	}
	return (!func_703(unk_0xC35A3A4C05A4831B(Local_674.f_52[1 /*25*/])) && !func_703(unk_0xC35A3A4C05A4831B(Local_674.f_52[2 /*25*/])));
}

bool func_756(int iParam0)
{
	return (func_757(iParam0) && Local_603.f_2 != iParam0);
}

bool func_757(int iParam0)
{
	return func_694(&Local_603, iParam0);
}

int func_758()
{
	return func_22();
}

int func_759()
{
	if (unk_0x7F420695E3F776FB(iLocal_620, 0))
	{
		return unk_0xC39AE5D390581AD5(unk_0x6EF03BE64E058E2F(iLocal_620, 1), -2, 1);
	}
	return 0;
}

bool func_760(int iParam0, int iParam1, int iParam2)
{
	return func_4(&(Local_696[iParam1 /*118*/].f_16[iParam0 /*2*/]), iParam2);
}

char* func_761(var uParam0)
{
	return "HS4MOAU";
}

char* func_762(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HS4MO_RCSO1";
		
		case 1:
			return "HS4MO_RCUP1";
		
		case 2:
			return "HS4MO_RCWV1";
		
		case 3:
			return "HS4MO_RCFC1";
		
		case 4:
			return "HS4MO_RCHD1";
		
		case 5:
			return "HS4MO_RCB1";
		
		case 6:
			return "HS4MO_RCCS1";
		
		case 7:
			return "HS4MO_RCRCF1";
		
		case 8:
			return "HS4MO_RCGC1";
		
		case 9:
			return "HS4MO_RCCD1";
		
		case 10:
			return "HS4MO_RCDTC1";
		
		case 11:
			return "HS4MO_RCNC1";
		
		default:
	}
	return "";
}

int func_763(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		default:
	}
	return 1;
}

char* func_764(var uParam0)
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 0:
				return "IDJ_T_MM_RC_MMb";
			}
		
		default:
	}
	return "";
}

char* func_765(var uParam0)
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 0:
				return "IDJ_T_MM_RC_MMa";
			}
		
		default:
	}
	return "";
}

char* func_766(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_TX_P_MMRC_A";
		
		default:
	}
	return "";
}

int func_767(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_758() == 0 && func_13(&uLocal_705, 5000, 0));
		
		default:
	}
	return 0;
}

int func_768(var uParam0)
{
	return 158;
}

char* func_769(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_MM_HLP_INT";
		
		case 1:
			return "IDJ_MM_HLP_SGNL";
		
		case 2:
			return "IDJ_MM_HLP_RSX";
		
		default:
	}
	return "";
}

int func_770(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_758() == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_758() == 1)
			{
				if (func_760(0, iLocal_622, 1) && !func_707(0))
				{
					return 1;
				}
			}
			break;
		
		case 2:
			if (func_758() == 6)
			{
				if (func_753() && !func_771())
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_771()
{
	if (!unk_0x93BF17E19A9F0E9B(Local_674.f_52[0 /*25*/]))
	{
		return 0;
	}
	return unk_0xD11A63E12F198FDB(unk_0xC35A3A4C05A4831B(Local_674.f_52[0 /*25*/]), unk_0xD59511AF30BE1934(bLocal_618));
}

char* func_772(var uParam0)
{
	return "IDJ_MM_FOCUS";
}

int func_773(var uParam0)
{
	return 1;
}

bool func_774(var uParam0)
{
	return func_775() == 22;
}

int func_775()
{
	if (func_22() != -1)
	{
		return Local_216[func_22() /*20*/];
	}
	return -1;
}

int func_776(int iParam0, var uParam1)
{
	switch (Local_197.f_356.f_1[iParam0 /*15*/].f_3)
	{
		case joaat("italirsx"):
			uParam1->f_66 = joaat("italirsx");
			StringCopy(&(uParam1->f_1), "05SBF291", 16);
			uParam1->f_5 = 43;
			uParam1->f_6 = 43;
			uParam1->f_7 = 35;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			break;
		
		default:
			return 0;
	}
	return 1;
}

void func_777(int iParam0, int iParam1)
{
	if (Local_197.f_356.f_1[iParam0 /*15*/].f_3 == joaat("italirsx"))
	{
		unk_0x70BAF7723F26069A(iParam1, 1);
	}
}

int func_778()
{
	if (!func_756(8))
	{
		return 0;
	}
	if (func_454(iLocal_622, 2))
	{
		return 0;
	}
	if (func_783() != 24 && func_783() != 25)
	{
		return 0;
	}
	if (Local_590.f_9 != func_636())
	{
		return 0;
	}
	if (func_779())
	{
		return 0;
	}
	return 1;
}

int func_779()
{
	if (unk_0xE7B45027762DEFE7(bLocal_618) < 1 && unk_0x0F9DAC8C6B952C2B(bLocal_618) < 1)
	{
		return 0;
	}
	if (func_782())
	{
		return 1;
	}
	if (func_781())
	{
		if (func_780(bLocal_618, 0, 1, 0) || func_700(bLocal_618, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_780(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if ((((iParam1 || !func_478(iVar0, 4)) && (iParam2 || !func_652(iVar0, unk_0x857CA6FCE5E9C84F(bParam0), 1))) && (iParam3 || !func_652(iVar0, unk_0x857CA6FCE5E9C84F(bParam0), 12))) && func_652(iVar0, unk_0x857CA6FCE5E9C84F(bParam0), 14))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_781()
{
	if (Local_214.f_70.f_11 != 0)
	{
		Call_Loc(Local_214.f_70.f_11);
		return StackVal;
	}
	return 1;
}

int func_782()
{
	if (Local_214.f_70.f_10 != 0)
	{
		Call_Loc(Local_214.f_70.f_10);
		return StackVal;
	}
	return 0;
}

int func_783()
{
	if (func_640() != -1)
	{
		return Local_217[func_640() /*21*/];
	}
	return -1;
}

int func_784()
{
	if (func_758() == 0)
	{
		return !func_13(&uLocal_705, 6000, 0);
	}
	if (func_758() == 2)
	{
		if (!func_707(10))
		{
			return 1;
		}
	}
	return 0;
}

float func_785(var uParam0)
{
	return 125f;
}

int func_786(var uParam0)
{
	return 1;
}

int func_787(var uParam0)
{
	return 523;
}

char* func_788(var uParam0)
{
	return "IDJ_MM_RSX_BLIP";
}

int func_789(var uParam0)
{
	return 1;
}

float func_790(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15f;
		
		default:
	}
	return 0f;
}

Vector3 func_791(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return -272.7f, -1305.1f, 31.4f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_792(var uParam0)
{
	return 1;
}

float func_793(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15f;
		
		default:
	}
	return 7.5f;
}

int func_794(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

float func_795(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_707(2))
			{
				return 1f;
			}
			break;
	}
	return 3f;
}

int func_796(var uParam0, var uParam1)
{
	return 1;
}

int func_797(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

void func_798(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_608(iParam0, 0, 8);
			func_604(iParam0, 0, 1, 169411);
			func_608(iParam0, 1, 39);
			func_604(iParam0, 1, 2, 169342);
			func_608(iParam0, 2, 0);
			break;
		
		case 1:
			func_608(iParam0, 0, 0);
			func_604(iParam0, 0, 1, 169305);
			func_608(iParam0, 1, 12);
			func_604(iParam0, 1, 2, 169290);
			func_608(iParam0, 2, 2);
			func_604(iParam0, 2, 4, 169201);
			func_608(iParam0, 4, 14);
			func_604(iParam0, 4, 5, 169088);
			func_608(iParam0, 5, 13);
			func_604(iParam0, 5, 3, 169032);
			func_608(iParam0, 3, 7);
			break;
		
		case 2:
			func_608(iParam0, 0, 0);
			func_604(iParam0, 0, 3, 169032);
			func_608(iParam0, 3, 7);
			break;
	}
}

int func_799(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			if (func_758() >= 5 && func_606(iParam0, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_800(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			if (unk_0x7F420695E3F776FB(iParam1, 0))
			{
				if (unk_0xA9EDF0DFAF70EAD4(unk_0x6EF03BE64E058E2F(iParam1, 0), 1148846080, 1148846080, 1148846080, 1148846080, 1148846080, 1148846080) < 85f && unk_0xDF93B3CFAC96698F(unk_0x6EF03BE64E058E2F(iParam1, 0)) < 1f)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_801(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (unk_0x7F420695E3F776FB(iParam1, 0))
			{
				if (unk_0xA9EDF0DFAF70EAD4(unk_0x6EF03BE64E058E2F(iParam1, 0), 1148846080, 1148846080, 1148846080, 1148846080, 1148846080, 1148846080) < 85f)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_802(int iParam0, var uParam1)
{
	return func_92(iParam0, 5);
}

int func_803(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_758() == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_804(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (!unk_0x93BF17E19A9F0E9B(Local_674.f_353[0 /*8*/]))
			{
				return 0;
			}
			return unk_0xCECDBB848D53DEB2(iParam1, unk_0xE38610F405049F71(Local_674.f_353[0 /*8*/]), 0);
			break;
	}
	return 0;
}

var func_805(var uParam0, var uParam1)
{
	return (func_92(0, 1) && func_707(0));
}

void func_806(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (func_758() == 1)
			{
				if (!func_739(iLocal_622, 0))
				{
					if (unk_0x7F420695E3F776FB(iLocal_620, 0))
					{
						unk_0xE5EE5C9DDF05D925(unk_0x6EF03BE64E058E2F(iLocal_620, 0), 10f, 1, 1);
					}
				}
			}
			break;
	}
}

int func_807(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			if (func_758() > 4)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_808(int iParam0)
{
	if (iParam0 == 0)
	{
		func_809(iParam0, 0);
	}
}

void func_809(int iParam0, int iParam1)
{
	if (func_58(iParam0, iParam1))
	{
		return;
	}
	if (func_60(iParam0) != 0)
	{
		return;
	}
	func_51(0, iParam0, iParam1);
}

int func_810(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			if (unk_0x7F420695E3F776FB(unk_0xC35A3A4C05A4831B(Local_674.f_52[iParam0 /*25*/]), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_811(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			if (!unk_0x49F8918E2DC5FFBC(iParam1, 402, 1))
			{
				if (!unk_0x93BF17E19A9F0E9B(Local_674.f_353[0 /*8*/]))
				{
					return;
				}
				if (unk_0xCECDBB848D53DEB2(iParam1, unk_0xE38610F405049F71(Local_674.f_353[0 /*8*/]), 0))
				{
					if (func_813(Local_674.f_52[0 /*25*/]))
					{
						unk_0x0428AFDCAA63B06E(iParam1, 402, true);
					}
				}
			}
			if (bLocal_616)
			{
				if (unk_0x7F420695E3F776FB(iParam1, 0))
				{
					if (!func_812(unk_0x6EF03BE64E058E2F(iParam1, 0)))
					{
						func_8(20);
					}
				}
			}
			break;
	}
}

int func_812(int iParam0)
{
	if (func_703(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (!unk_0x5B702A5D1F2635BE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_813(var uParam0)
{
	if (unk_0xEADBDBE0422CF7E6(uParam0) || (!unk_0xB0AB1F334666E337(uParam0) && unk_0x93E08E0F531E2C35()))
	{
		if (func_139(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_814(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_815(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_758() == 0)
			{
				return 0;
			}
			if (!unk_0x93BF17E19A9F0E9B(Local_674.f_52[0 /*25*/]))
			{
				return 0;
			}
			return !unk_0x7F420695E3F776FB(unk_0xC35A3A4C05A4831B(Local_674.f_52[0 /*25*/]), 0);
			break;
	}
	return 0;
}

int func_816(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9;
		
		default:
	}
	return 6;
}

int func_817(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 280;
		
		default:
	}
	return -1;
}

char* func_818(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_MM_PED_BLIP";
		
		default:
	}
	return "PB_ENEMY";
}

void func_819(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			unk_0xD1C578C204015E1F(iParam1, 0, 0, 0, 0);
			unk_0xD1C578C204015E1F(iParam1, 2, 0, 0, 0);
			unk_0xD1C578C204015E1F(iParam1, 3, 0, 0, 0);
			unk_0xD1C578C204015E1F(iParam1, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(iParam1, 6, 0, 0, 0);
			unk_0xD1C578C204015E1F(iParam1, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(iParam1, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(iParam1, 5, 0, 0, 0);
			unk_0x7F08C4791E6D6969(iParam1, 1, 0, 0, false, 1);
			unk_0x09397806857F5DFB(iParam1, 2, 1);
			unk_0x999C62072AF920FD(iParam1, 0);
			break;
		
		case 2:
			unk_0xBE8796DB2B90A437(iParam1, 1, 1);
			unk_0xBE8796DB2B90A437(iParam1, 2, 1);
			break;
	}
}

int func_820(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_821(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return 2;
		
		case 3:
			return 23;
		
		case 4:
			return 35;
		
		case 5:
			return 38;
		
		default:
	}
	return 47;
}

int func_822(var uParam0)
{
	return 5000;
}

Vector3 func_823()
{
	return func_724(func_636());
}

int func_824(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			if (func_825() >= 0)
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_638())
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_825() >= 6)
			{
				return 2;
			}
			break;
	}
	return -1;
}

int func_825()
{
	return func_640();
}

char* func_826(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEI4_SUSPENSE_START";
		
		case 1:
			return "HEI4_MED_INTENSITY";
		
		case 2:
			return "HEI4_DELIVERING";
		
		default:
	}
	return "";
}

int func_827(int iParam0)
{
	if (fLocal_646 != -1f && fLocal_646 <= Local_197.f_613.f_1[iParam0 /*11*/].f_3)
	{
		if (func_739(iLocal_622, 1) || iParam0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_828()
{
	func_673(0, 4, 171373);
	func_672(0, 1, 1);
	func_673(1, 20, 171294);
	func_648(1, 2, 171281);
	func_673(2, 4, 171258);
	func_648(2, 1, 171244);
	func_672(2, 3, 3);
	func_673(3, 20, 171136);
	func_672(3, 4, 4);
	func_672(3, 5, 5);
	func_673(4, 4, 171113);
	func_648(4, 1, 171244);
	func_672(4, 5, 5);
	func_646(5, 6, 7, 8, 9, 170874, 170804, 170776, 170753, 1);
	func_673(9, 48, 158841);
}

void func_829()
{
	func_668("IDJ_RECOVER", "IDJ_MM_RSX_OBJ", 9, 0);
}

void func_830()
{
	func_654("IDJ_HLPDELV_T", "IDJ_MM_RSX_OBJ", "IDJ_LOC_MUSIC", 1, 12, 0);
}

void func_831()
{
	if (!func_754())
	{
		func_668("IDJ_MM_WAIT_RSX", "IDJ_MOODYMANN", 9, 0);
	}
	else if (func_756(8))
	{
		func_654("IDJ_DELIVER_THE", "IDJ_MM_RSX_OBJ", "IDJ_LOC_MUSIC", 1, 12, 0);
	}
	else
	{
		func_836();
	}
}

void func_832()
{
	if ((func_771() && !func_833()) && !func_755())
	{
		func_668("IDJ_COLLECT", "IDJ_MOODYMANN", 9, 0);
	}
	else
	{
		func_668("IDJ_MM_RCVR_SLN", "IDJ_MM_RSX_OBJ", 9, 0);
	}
}

int func_833()
{
	if (!unk_0x93BF17E19A9F0E9B(Local_674.f_52[0 /*25*/]))
	{
		return 0;
	}
	return func_834(iLocal_620, unk_0xC35A3A4C05A4831B(Local_674.f_52[0 /*25*/]));
}

int func_834(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xFC8BFE4B41177C22(iParam1))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0) && !unk_0x1C2F771CDC87A3A5(iParam1, 0))
		{
			if (unk_0x7F420695E3F776FB(iParam0, 0) && unk_0x7F420695E3F776FB(iParam1, 0))
			{
				iVar0 = unk_0x6EF03BE64E058E2F(iParam0, 0);
				iVar1 = unk_0x6EF03BE64E058E2F(iParam1, 0);
				if (unk_0xFC8BFE4B41177C22(iVar0) && unk_0xFC8BFE4B41177C22(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_835()
{
	func_668("ILH_GOTO", "IDJ_LOC_BENNYS", 12, 0);
}

void func_836()
{
	if (func_838())
	{
		func_837();
	}
}

void func_837()
{
	if (!func_663())
	{
		return;
	}
	if (!unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) == Global_1574757.f_9)
	{
		return;
	}
	func_659();
}

int func_838()
{
	if (!func_663())
	{
		return 0;
	}
	if (!unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) == Global_1574757.f_9)
	{
		return 0;
	}
	return 1;
}

bool func_839()
{
	return !func_707(1);
}

void func_840()
{
	func_668("IDJ_MM_GOTO_DTN", "IDJ_LOC_DOWN", 12, 0);
}

bool func_841()
{
	return func_707(1);
}

void func_842()
{
	if ((func_739(iLocal_622, 0) && unk_0x7F420695E3F776FB(iLocal_620, 0)) && func_760(0, iLocal_622, 1))
	{
		func_668("IDJ_MM_WAIT", "IDJ_MOODYMANN", 9, 0);
	}
	else
	{
		func_668("IDJ_COLLECT", "IDJ_MOODYMANN", 9, 0);
	}
}

void func_843()
{
	func_668("IDJ_MM_GOTO", "IDJ_MM_GOTO_LOC", 12, 0);
}

void func_844()
{
	func_679(0, 4);
	func_678(0, 1);
	func_679(1, 20);
	func_676(1, 2, 171281);
	func_679(2, 4);
	func_676(2, 1, 171244);
	func_678(2, 3);
	func_679(3, 20);
	func_676(3, 4, 171556);
	func_679(4, 4);
	func_676(4, 1, 171244);
	func_676(4, 5, 171531);
	func_679(5, 22);
	func_678(5, 6);
	func_679(6, 24);
	func_678(6, 7);
	func_679(7, 48);
}

var func_845()
{
	return (func_3(1) || func_478(0, 7));
}

bool func_846()
{
	return func_707(11);
}

void func_847()
{
	struct<2> Var0;
	
	if (!unk_0x93BF17E19A9F0E9B(Local_674.f_52[0 /*25*/]))
	{
		return;
	}
	if (func_758() == 1)
	{
		if (func_760(0, iLocal_622, 1))
		{
			if (unk_0x692665178199313C(bLocal_618) && func_759())
			{
				func_741(0);
			}
		}
	}
	if (func_833())
	{
		if (!func_707(2))
		{
			if (!func_739(iLocal_622, 2))
			{
				func_741(2);
				Var0 = -1;
				Var0.f_1 = -1;
				Var0.f_0 = 0;
				func_618(5, &Var0);
			}
		}
		if (!func_739(iLocal_622, 1))
		{
			func_741(1);
		}
	}
	else
	{
		func_850(1);
	}
	if (func_758() == 6)
	{
		if (func_753() && !func_771())
		{
			if (func_849(iLocal_620, unk_0xC35A3A4C05A4831B(Local_674.f_52[0 /*25*/]), 1) <= func_793(0))
			{
				if (unk_0x692665178199313C(bLocal_618))
				{
					unk_0x5C4B3034CCDA5270(unk_0xC35A3A4C05A4831B(Local_674.f_52[0 /*25*/]));
					if (!unk_0x133460AD0F183CC9(unk_0xC35A3A4C05A4831B(Local_674.f_52[0 /*25*/])))
					{
						unk_0x03AB73582A77DBD3(unk_0xC35A3A4C05A4831B(Local_674.f_52[0 /*25*/]), uLocal_585);
					}
				}
			}
		}
	}
	if (bLocal_616)
	{
		func_848(1);
	}
}

void func_848(int iParam0)
{
	if (func_131(&(Local_674.f_538), iParam0))
	{
	}
}

float func_849(int iParam0, int iParam1, int iParam2)
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

void func_850(int iParam0)
{
	if (func_131(&(Local_696[iLocal_621 /*118*/].f_106), iParam0))
	{
	}
}

void func_851()
{
	func_857();
	Stack.Push(0);
	Call_Loc(Local_214.f_162.f_150);
	if (StackVal && !func_707(0))
	{
		if (!unk_0xC450B06E5AAA0985(uLocal_715))
		{
			uLocal_715 = unk_0x339BF323C4261E69(Local_197.f_77.f_1[0 /*21*/].f_3, 15f);
			func_855(&uLocal_715, 9);
			unk_0xF42EBD7CD0682A8B(uLocal_715, 85);
		}
	}
	else if (unk_0xC450B06E5AAA0985(uLocal_715))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_715);
	}
	if (func_9(func_107(bLocal_618), 1, 1))
	{
		func_852(func_636(), !func_754());
	}
}

void func_852(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0 || !func_853(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (bParam1)
		{
			if (Global_1956139.f_5653[iVar0] == iParam0)
			{
				return;
			}
			if (Global_1956139.f_5653[iVar0] == 0)
			{
				if (iVar1 == -1)
				{
					iVar1 = iVar0;
				}
			}
		}
		else if (Global_1956139.f_5653[iVar0] == iParam0)
		{
			Global_1956139.f_5653[iVar0] = 0;
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (iVar1 > -1)
		{
			Global_1956139.f_5653[iVar1] = iParam0;
		}
	}
}

bool func_853(int iParam0)
{
	return func_854(iParam0, unk_0x259BE71D8A81D4FA());
}

int func_854(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (bParam1 != func_74() && func_9(bParam1, 0, 1))
	{
		if (Global_1956139.f_5758.f_3 != 0)
		{
			return 1;
		}
		if (iParam0 != 0)
		{
			bVar0 = bParam1;
			if (func_81(bParam1, 1))
			{
				bVar0 = func_107(bParam1);
			}
			iVar1 = 0;
			while (iVar1 < 10)
			{
				if (Global_2650102.f_199.f_962[iVar1 /*75*/] == bVar0)
				{
					iVar2 = 0;
					while (iVar2 < 18)
					{
						if (Global_2650102.f_199.f_962[iVar1 /*75*/].f_1[iVar2] == iParam0)
						{
							return 1;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

void func_855(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		iVar0 = func_856(iParam1);
		unk_0x61183D6239A9D7B8(*uParam0, iVar0);
	}
}

int func_856(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xA306E6FD2A6558E6(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_857()
{
	if (!func_760(0, iLocal_622, 1))
	{
		return;
	}
	if (unk_0x9780872414DA43F8(bLocal_618))
	{
		if (func_833())
		{
			if (!func_58(0, 4))
			{
				func_809(0, 4);
			}
		}
		else if (!func_58(0, 5))
		{
			func_809(0, 5);
		}
	}
	else if (unk_0xE7B45027762DEFE7(bLocal_618) > 0)
	{
		if (!func_58(0, 3))
		{
			func_809(0, 3);
		}
	}
	else
	{
		if (func_58(0, 3))
		{
			func_858(0, 3);
		}
		if (func_58(0, 4))
		{
			func_858(0, 4);
		}
		if (func_58(0, 5))
		{
			func_858(0, 5);
		}
	}
}

void func_858(int iParam0, int iParam1)
{
	func_131(&(Local_607[iParam0 /*2*/]), iParam1);
}

void func_859()
{
	func_719(17);
	func_91(0, 15);
	func_91(0, 17);
	func_861(0, 0);
	func_861(0, 18);
	func_743(0, 15);
	Local_197.f_77.f_254[1 /*10*/] = -762195218;
	Local_197.f_613.f_1[0 /*11*/].f_3 = 50f;
	Local_197.f_77.f_1[0 /*21*/].f_13 = 0;
	func_860(0, 0);
	Local_197.f_77.f_1[1 /*21*/].f_7 = joaat("weapon_pistol");
	Local_197.f_77.f_1[2 /*21*/].f_7 = joaat("weapon_pistol");
	Local_197.f_604 = 30;
	Local_197.f_604.f_1 = 2;
}

void func_860(int iParam0, int iParam1)
{
	if (func_17(&(Local_197.f_77.f_275[iParam0 /*3*/]), iParam1))
	{
	}
}

void func_861(int iParam0, int iParam1)
{
	if (func_17(&(Local_197.f_77.f_1[iParam0 /*21*/]), iParam1))
	{
	}
}

void func_862()
{
	Local_214.f_13 = 176159;
	Local_214.f_2 = 174782;
	Local_214.f_3.f_4 = 174751;
	Local_214.f_11 = 174698;
	Local_214.f_11.f_1 = 174511;
	Local_214.f_100.f_3.f_3 = 158692;
	Local_214.f_100.f_3.f_2 = 158680;
	Local_214.f_554.f_4.f_2 = 174495;
	Local_214.f_120.f_13 = 174483;
	Local_214.f_120.f_4 = 174471;
	Local_214.f_88.f_1 = 174447;
	Local_214.f_373.f_43 = 174411;
	Local_214.f_373.f_44 = 174279;
	Local_214.f_533.f_13 = 174234;
	Local_214.f_533.f_9 = 174222;
	Local_214.f_533.f_12 = 174145;
	Local_214.f_533.f_5 = 174136;
	Local_214.f_533.f_10 = 174124;
	Local_214.f_533.f_11 = 174114;
	Local_214.f_533.f_2 = 174105;
	Local_214.f_533.f_6 = 174096;
	Local_214.f_533.f_16 = 174067;
	Local_214.f_517.f_1 = 174021;
	Local_214.f_517 = 173976;
	Local_214.f_526.f_5 = 173966;
	Local_214.f_526.f_4 = 173919;
	Local_214.f_526.f_6 = 173887;
	Local_214.f_49 = 173843;
	Local_214.f_70 = 156324;
}

int func_863()
{
	if (func_864() == 0)
	{
		return !func_13(&uLocal_705, 6000, 0);
	}
	return 0;
}

int func_864()
{
	return func_22();
}

char* func_865(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_TX_P_MMSL_A";
		
		default:
	}
	return "";
}

int func_866(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_864() == 0 && func_13(&uLocal_705, 5000, 0));
		
		default:
	}
	return 0;
}

int func_867(var uParam0)
{
	return 158;
}

char* func_868(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_MM_HLP_MLL";
		
		case 1:
			return "IDJ_MM_HLP_SLP";
		
		default:
	}
	return "";
}

int func_869(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_864() == 0;
		
		case 1:
			return func_707(9);
		
		default:
	}
	return 0;
}

void func_870(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_741(5);
			break;
	}
}

int func_871()
{
	return -1;
}

int func_872(var uParam0)
{
	return 0;
}

int func_873(var uParam0)
{
	return 171;
}

char* func_874(var uParam0, var uParam1)
{
	return "HS4_MOODY";
}

int func_875(var uParam0)
{
	return 1;
}

int func_876(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_13(&uLocal_716, 15000, 0);
		
		case 1:
			return ((func_478(0, 1) && func_756(0)) && func_13(&uLocal_718, 7000, 0));
		
		default:
	}
	return 0;
}

char* func_877(var uParam0)
{
	return "HS4MOAU";
}

char* func_878(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HS4MO_SPU1";
		
		case 1:
			return "HS4MO_SDS1";
		
		default:
	}
	return "";
}

int func_879(int iParam0, var uParam1)
{
	switch (Local_197.f_356.f_1[iParam0 /*15*/].f_3)
	{
		case joaat("faggio"):
			uParam1->f_66 = joaat("faggio");
			StringCopy(&(uParam1->f_1), "40DZC153", 16);
			uParam1->f_5 = 54;
			uParam1->f_6 = 0;
			uParam1->f_7 = 60;
			uParam1->f_8 = 1;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 6;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			break;
		
		default:
			return 0;
	}
	return 1;
}

void func_880(int iParam0, int iParam1)
{
	if (Local_197.f_356.f_1[iParam0 /*15*/].f_3 == joaat("faggio"))
	{
		unk_0x70BAF7723F26069A(iParam1, 1);
	}
}

int func_881()
{
	if (bLocal_616)
	{
		return func_707(9);
	}
	return 0;
}

var func_882(var uParam0)
{
	return unk_0x8CC13B3BF7A9890A();
}

char* func_883(var uParam0)
{
	return "IDJ_SCTR_BLIP";
}

Vector3 func_884()
{
	return func_724(func_636());
}

void func_885()
{
	func_673(0, 4, 174675);
	func_672(0, 1, 1);
	func_646(1, 2, 3, 4, 5, 174652, 174624, 174596, 174573, 1);
	func_673(5, 48, 158841);
}

void func_886()
{
	func_668("IDJ_MM_RECOVER", "IDJ_MM_SLIP", 9, 0);
}

void func_887()
{
	func_654("IDJ_MM_HLPDELVR", "IDJ_MM_SLIP", "IDJ_LOC_MUSIC", 9, 12, 0);
}

void func_888()
{
	func_654("IDJ_MM_DELIVER", "IDJ_MM_SLIP", "IDJ_LOC_MUSIC", 9, 12, 0);
}

void func_889()
{
	func_668("IDJ_GET_ON_THE", "IDJ_SCOOTER", 9, 0);
}

void func_890()
{
	func_668("ILH_GOTO_THE", "IDJ_LOC_MALL", 12, 0);
}

void func_891()
{
	func_679(0, 4);
	func_678(0, 1);
	func_679(1, 22);
	func_678(1, 2);
	func_679(2, 24);
	func_678(2, 3);
	func_679(3, 48);
}

void func_892()
{
	if (func_707(9))
	{
		Local_197.f_604 = 2;
		Local_197.f_604.f_1 = 0;
	}
}

int func_893()
{
	func_894();
	return 1;
}

void func_894()
{
	if (!func_909(171, 3))
	{
		func_895(171, 3, 1);
	}
}

void func_895(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8939 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 169)
	{
		func_902();
		if (iParam1 == 4)
		{
			func_901(iParam0, 0, 1);
			func_901(iParam0, 1, 1);
			func_901(iParam0, 2, 1);
			func_900(iParam0, 0, 1);
			func_900(iParam0, 1, 1);
			func_900(iParam0, 2, 1);
		}
		else
		{
			if (func_899(iParam0, iParam1) == 1 && func_898(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_901(iParam0, iVar0, 1);
			func_900(iParam0, iVar0, 1);
			if (iParam0 == 172 && !Global_2793046.f_6891)
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !Global_2793046.f_6890)
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !Global_2793046.f_6890)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_78558)
			{
				if (iParam1 != 4)
				{
					if (Global_20383 != iParam1)
					{
						Global_8912[iParam1 /*4*/] = { func_897(iParam0) };
						Global_8929[iParam1] = 1;
						Global_8934[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20383)
					{
					}
					else
					{
						Global_8863[1 /*6*/] = { func_897(iParam0) };
						Global_8863[1 /*6*/].f_5 = iParam1;
						func_896();
					}
				}
				else
				{
					Global_8863[1 /*6*/] = { func_897(iParam0) };
					Global_8863[1 /*6*/].f_5 = iParam1;
					func_896();
				}
			}
			else
			{
				Global_8863[1 /*6*/] = { func_897(iParam0) };
				Global_8863[1 /*6*/].f_5 = iParam1;
				func_896();
			}
		}
	}
}

void func_896()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0xFACCDE46E24AD056(&(Global_2028[Global_8939 /*29*/].f_7)), 64);
	if (Global_8958 == 0)
	{
		unk_0xCCDB0041859B85A6("");
		StringCopy(&cVar1, unk_0xFACCDE46E24AD056(&(Global_8863[1 /*6*/])), 64);
		sVar2 = unk_0xFACCDE46E24AD056("CELL_253");
		unk_0x5C7E2225D7451992(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0xCCDB0041859B85A6("CELL_255");
		unk_0xACF853FB3F6EA7D4(&(Global_8863[1 /*6*/]));
		unk_0x5C7E2225D7451992(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x8744D2E3FC95740E(&Global_8253, false);
}

struct<4> func_897(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_3;
}

int func_898(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

int func_899(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2028[iParam0 /*29*/].f_12[iParam1];
}

void func_900(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2028[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113648.f_28052[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_901(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2028[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113648.f_28052[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_902()
{
	if (func_908(14))
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
		Global_20383 = func_903();
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

var func_903()
{
	func_904();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_904()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_906(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_905(unk_0x4A8C381C258A124D());
			if (func_310(iVar0) && (!func_908(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_310(Global_113648.f_2365.f_539.f_4321))
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

int func_905(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_906(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_906(int iParam0)
{
	if (func_310(iParam0))
	{
		return func_907(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_907(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

bool func_908(int iParam0)
{
	return Global_43257 == iParam0;
}

int func_909(int iParam0, int iParam1)
{
	if (func_899(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

void func_910()
{
	func_719(17);
	func_682(0, 9);
	func_743(0, 6);
	func_911(0, 10);
	func_743(0, 15);
	Local_197.f_434.f_86[0 /*6*/] = 0;
	Local_197.f_434.f_86[0 /*6*/].f_1 = 2;
	Local_197.f_434.f_86[0 /*6*/].f_2 = 0;
	Local_197.f_434.f_1[0 /*12*/].f_8 = { 0f, 0f, -90f };
	Local_197.f_604 = 30;
	Local_197.f_604.f_1 = 2;
}

void func_911(int iParam0, int iParam1)
{
	if (func_17(&(Local_197.f_434.f_1[iParam0 /*12*/]), iParam1))
	{
	}
}

void func_912()
{
	Local_214.f_13 = 248650;
	Local_214.f_2 = 248610;
	Local_214.f_3.f_1 = 248198;
	Local_214.f_3 = 248030;
	Local_214.f_3.f_4 = 247970;
	Local_214.f_3.f_4.f_1 = 247939;
	Local_214.f_11 = 247816;
	Local_214.f_11.f_1 = 178809;
	Local_214.f_100.f_3.f_1 = 178738;
	Local_214.f_100.f_3.f_3 = 158692;
	Local_214.f_100.f_3.f_2 = 158680;
	Local_214.f_100.f_3 = 178639;
	Local_214.f_120.f_23 = 178389;
	Local_214.f_120.f_37 = 178332;
	Local_214.f_162.f_192 = 178307;
	Local_214.f_162.f_201 = 177979;
	Local_214.f_162 = 177927;
	Local_214.f_604.f_24 = 177877;
	Local_214.f_604.f_25 = 177806;
	Local_214.f_604.f_13 = 177794;
	Local_214.f_604.f_5 = 177784;
	Local_214.f_604.f_9 = 177775;
	Local_214.f_604.f_6 = 177762;
	Local_214.f_604.f_4 = 177750;
	Local_214.f_604.f_20 = 177737;
	Local_214.f_604.f_30 = 177675;
	Local_214.f_15.f_13 = 177615;
	Local_214.f_517.f_1 = 177393;
	Local_214.f_517 = 177309;
	Local_214.f_49.f_2.f_1 = 177269;
	Local_214.f_49.f_2.f_2 = 177229;
	Local_214.f_533.f_13 = 177103;
	Local_214.f_533.f_9 = 177091;
	Local_214.f_533.f_12 = 176940;
	Local_214.f_533.f_5 = 176931;
	Local_214.f_533.f_10 = 176919;
	Local_214.f_533.f_11 = 176909;
	Local_214.f_533.f_2 = 176900;
	Local_214.f_533.f_6 = 176891;
	Local_214.f_513 = 176878;
	Local_214.f_513.f_1 = 176862;
	Local_214.f_635 = 176853;
	Local_214.f_70 = 156324;
	Local_214.f_70.f_10 = 176809;
}

int func_913()
{
	if (func_914() == 3)
	{
		if (unk_0xE7B45027762DEFE7(bLocal_618) > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_914()
{
	return func_22();
}

int func_915(var uParam0)
{
	return 0;
}

var func_916(var uParam0)
{
	return Local_674.f_540.f_4;
}

bool func_917(var uParam0)
{
	return func_707(6);
}

int func_918()
{
	return -1;
}

int func_919(var uParam0)
{
	return 0;
}

int func_920(var uParam0)
{
	return 153;
}

char* func_921(var uParam0, var uParam1)
{
	return "BTL_DAVE";
}

int func_922(var uParam0)
{
	return 1;
}

int func_923(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_775() == 24 && func_13(&uLocal_703, 10000, 0));
		
		case 1:
			return ((func_914() == 3 && unk_0xE7B45027762DEFE7(bLocal_618) < 1) && func_13(&uLocal_711, 3000, 0));
		
		case 2:
			return (func_914() == 3 && fLocal_646 < 500f);
		
		case 3:
			return (func_914() == 3 && fLocal_646 < 100f);
		
		default:
	}
	return 0;
}

char* func_924(var uParam0)
{
	return "HS4EDAU";
}

char* func_925(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (unk_0xC5935DFB3F39785A(0, 3))
			{
				case 0:
					return "HS4ED_GUC1";
				
				case 1:
					return "HS4ED_GUC2";
				
				case 2:
					return "HS4ED_GUC3";
				
				default:
			}
			break;
		
		case 1:
			return "HS4ED_CSUC1";
			break;
		
		case 2:
			return "HS4ED_CSUC2";
			break;
		
		case 3:
			return "HS4ED_CSPM1";
			break;
	}
	return "";
}

char* func_926(var uParam0)
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 1:
				return "IDJ_T_PT_CS_CSb";
			}
		
		default:
	}
	return "";
}

char* func_927(var uParam0)
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 1:
				return "IDJ_T_PT_CS_CSa";
			}
		
		default:
	}
	return "";
}

char* func_928(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_KM_HLP_INTR";
		
		case 1:
			return "IDJ_KM_HLP_HPPS";
		
		case 2:
			return "IDJ_KM_HLP_RCVR";
		
		case 3:
			return "IDJ_KM_HLP_BSD";
		
		case 4:
			return "IDJ_KM_HLP_BSL";
		
		default:
	}
	return "";
}

int func_929(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_914() == 0;
			break;
		
		case 1:
			if (func_914() == 1)
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_914() == 1 || func_914() == 2)
			{
				return func_707(6);
			}
			break;
		
		case 3:
			if ((Local_674.f_507 > 1 && func_931() == 3) && !func_930())
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_931() == 3 && func_930())
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_930()
{
	return ((func_79(bLocal_618) && func_707(14)) && !func_739(iLocal_622, 9));
}

int func_931()
{
	return func_640();
}

int func_932()
{
	if (func_739(iLocal_622, 4) && func_454(iLocal_622, 1))
	{
		return 1;
	}
	else if (func_707(8))
	{
		return func_454(iLocal_622, 1);
	}
	return 0;
}

void func_933(var uParam0)
{
	struct<2> Var0;
	
	Local_696[iLocal_621 /*118*/].f_108.f_1++;
	func_741(4);
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_0 = 1;
	func_618(5, &Var0);
}

float func_934(var uParam0)
{
	return 0.25f;
}

var func_935(var uParam0)
{
	return unk_0x8CC13B3BF7A9890A();
}

float func_936(var uParam0)
{
	return 0.75f;
}

int func_937(var uParam0)
{
	return 1;
}

int func_938(var uParam0)
{
	return 18;
}

char* func_939(var uParam0)
{
	return "IDJ_KM_STNS_BLP";
}

Vector3 func_940(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0xC35A3A4C05A4831B(Local_674.f_52[func_941(iParam0) /*25*/]), 0);
}

int func_941(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return 0;
	}
	return Local_674.f_540.f_6[iParam0];
}

bool func_942(int iParam0)
{
	return (func_943() && Local_674.f_52[func_941(iParam0) /*25*/].f_1 == 6);
}

bool func_943()
{
	return Local_674.f_540.f_5;
}

void func_944(int iParam0)
{
	func_608(iParam0, 0, 8);
	func_604(iParam0, 0, 1, 177964);
	func_608(iParam0, 1, 7);
}

int func_945(int iParam0, var uParam1)
{
	return func_606(iParam0, 0);
}

void func_946(var uParam0, struct<6> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	if (((bLocal_616 && Param1.f_5) && func_950() >= 2) && !func_943())
	{
		func_947();
	}
}

void func_947()
{
	var uVar0[12];
	int iVar1;
	int iVar2;
	
	if (Local_674.f_540.f_5)
	{
		return;
	}
	func_948(&uVar0, 12, 1);
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (iVar2 >= 5)
		{
		}
		else
		{
			if (Local_674.f_52[uVar0[iVar1] /*25*/].f_1 != 6)
			{
				Local_674.f_540.f_6[iVar2] = uVar0[iVar1];
				iVar2++;
			}
			iVar1++;
		}
	}
	Local_674.f_540.f_5 = 1;
}

void func_948(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		(*uParam0)[iVar0] = iVar0;
		iVar0++;
	}
	if (bParam2)
	{
		func_949(uParam0, iParam1);
	}
}

void func_949(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 < 2)
	{
		return;
	}
	iVar0 = (iParam1 - 1);
	while (iVar0 >= 1)
	{
		iVar1 = unk_0xC5935DFB3F39785A(0, iVar0 + 1);
		func_26(uParam0[iVar0], uParam0[iVar1]);
		iVar0 = (iVar0 + -1);
	}
}

int func_950()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (Local_674.f_52[iVar1 /*25*/].f_1 == 6)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_951(int iParam0, int iParam1, var uParam2)
{
	func_91(iParam0, 20);
	unk_0xBE8796DB2B90A437(iParam1, 46, 1);
}

int func_952(var uParam0, int iParam1)
{
	if (func_739(iParam1, 4) && func_454(iParam1, 1))
	{
		return 1;
	}
	else if (func_707(8))
	{
		return func_454(iParam1, 1);
	}
	return 0;
}

int func_953(var uParam0)
{
	return func_954();
}

int func_954()
{
	int iVar0;
	int iVar1;
	
	if (func_914() < 3)
	{
		return 0;
	}
	if (unk_0x996932F6DFE01964(func_544(), -1, 0) < Local_674.f_508)
	{
		func_955();
	}
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		iVar1 = unk_0xF0C9E5565CB32F4B(iVar0);
		if (func_739(iVar1, 4) && func_454(iVar1, 1))
		{
			return 1;
		}
		else if (func_707(8))
		{
			if (func_454(iVar1, 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_955()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x996932F6DFE01964(func_544(), -1, 0))
	{
		iVar1 = (iVar1 + Local_696[iVar0 /*118*/].f_108.f_1);
		iVar0++;
	}
	if (iVar1 < func_956())
	{
		func_738(8);
	}
}

int func_956()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_43(iVar1, 1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_957(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			if (func_931() >= 0)
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_638())
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_931() >= 2)
			{
				return 2;
			}
			break;
		
		case 2:
			if (func_931() >= 3)
			{
				return 3;
			}
			break;
	}
	return -1;
}

char* func_958(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEI4_DELIVERING_START";
		
		case 1:
			return "HEI4_GUNFIGHT";
		
		case 2:
			return "HEI4_SUSPENSE";
		
		case 3:
			return "HEI4_DELIVERING";
		
		default:
	}
	return "";
}

void func_959()
{
	func_673(0, 4, 247793);
	func_672(0, 1, 1);
	func_673(1, 7, 247771);
	func_1120(1, 247745);
	func_672(1, 2, 2);
	func_673(2, 39, 247703);
	func_1116(2, 247644);
	func_672(2, 3, 3);
	func_673(3, 4, 178915);
	func_672(3, 4, 4);
	func_673(4, 48, 158841);
}

void func_960()
{
	if ((func_1115(func_636()) && func_739(iLocal_622, 4)) && func_965(func_636(), &uLocal_697, 1, 0))
	{
		func_964("IDJ_GOON_WAIT", unk_0xBD6CA019F46AB947(func_107(bLocal_618)), 9, 0);
	}
	else if (func_930())
	{
		func_961("IDJ_BOSS_GOTO", 0);
	}
	else if (!func_739(iLocal_622, 4) && !func_707(8))
	{
		func_654("IDJ_HLPDELV_T", "IDJ_KM_STNS_OBJ", "IDJ_LOC_LSIA", 1, 12, 0);
	}
	else
	{
		func_654("IDJ_DELIVER_THE", "IDJ_KM_STNS_OBJ", "IDJ_LOC_LSIA", 1, 12, 0);
	}
}

void func_961(char* sParam0, bool bParam1)
{
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return;
	}
	if (unk_0x31A0D8A679F7D5A7(sParam0) > 23)
	{
		return;
	}
	if (func_962(sParam0))
	{
		return;
	}
	func_659();
	Global_1574757 = 0;
	StringCopy(&(Global_1574757.f_1), unk_0x1AF90EB93E0012D6(), 32);
	Global_1574757.f_9 = unk_0x70E57E9927B6BA58(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	func_658();
	func_657(bParam1);
	func_656();
}

bool func_962(char* sParam0)
{
	if (!func_663())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		return func_963(sParam0);
	}
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	return unk_0x70E57E9927B6BA58(sParam0) == unk_0x70E57E9927B6BA58(&(Global_1574757.f_12));
}

bool func_963(char* sParam0)
{
	if (!func_663())
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	return unk_0x70E57E9927B6BA58(sParam0) == unk_0x70E57E9927B6BA58(&(Global_1574757.f_16));
}

void func_964(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_669(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1574757 = 16;
		Global_1574757.f_56 = iParam2;
	}
}

bool func_965(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<28> Var3;
	struct<3> Var4;
	
	Var3 = { func_993(iParam0) };
	if (BitTest(Var3.f_16, 18))
	{
		if (!func_703(unk_0x4A8C381C258A124D()))
		{
			return 0;
		}
		return func_992(iParam0) < Var3.f_20;
	}
	Var4 = { func_983(iParam0) };
	if (iParam2 && !BitTest(Var3.f_16, 8))
	{
		if (BitTest(Var3.f_16, 9))
		{
			if ((unk_0xBA16CD57E37AC32A(unk_0x4B423FAA24E8ABF0(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 1))) || unk_0x4B423FAA24E8ABF0(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)) == joaat("avenger")) || BitTest(Var3.f_16, 15))
			{
				func_981(iParam0, &(Var3.f_21), &(Var3.f_24), &(Var3.f_27), bParam3);
			}
			if (bParam3)
			{
				func_981(iParam0, &(Var3.f_21), &(Var3.f_24), &(Var3.f_27), 1);
			}
			return unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Var3.f_21, Var3.f_24, Var3.f_27, 0, 1, 0);
		}
		else
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				if (unk_0xBA16CD57E37AC32A(unk_0x4B423FAA24E8ABF0(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 1))))
				{
					Var4 = { 1f, 1f, 2f };
				}
				if (func_980(&iParam0))
				{
					Var4 = { 2f, 2f, 2f };
				}
				func_979(iParam0, &Var0, &Var1, Var4);
			}
			else
			{
				func_978(iParam0, &Var0, &Var1, Var4);
			}
			if (unk_0xFCEB38AB3EDCF9BE(unk_0x4A8C381C258A124D(), Var0, Var1, 0, 1, 0))
			{
				*uParam1 = 1;
				return 1;
			}
		}
	}
	if (!func_973(iParam0) || func_971())
	{
		*uParam1 = 0;
		return 0;
	}
	*uParam1 = 4;
	if (BitTest(Var3.f_16, 5))
	{
		func_967(iParam0, &Var0, &Var1, &fVar2, 0);
		if (BitTest(Var3.f_16, 4))
		{
			if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Var0, Var1, fVar2, 0, 1, 2))
			{
				func_967(iParam0, &Var0, &Var1, &fVar2, 1);
				return unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Var0, Var1, fVar2, 0, 1, 2);
			}
		}
		else
		{
			return unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Var0, Var1, fVar2, 0, 1, 2);
		}
	}
	func_966(iParam0, &Var0, &Var1);
	return unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Var0, Var1, 0, 1, 2);
}

void func_966(int iParam0, var uParam1, var uParam2)
{
	struct<28> Var0;
	
	Var0.f_20 = 1091567616;
	if (iParam0 != 0)
	{
		Var0 = { func_993(iParam0) };
		*uParam1 = { Var0.f_21 };
		*uParam2 = { Var0.f_24 };
	}
}

void func_967(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4)
{
	struct<28> Var0;
	
	if (bParam4)
	{
		if (func_969(&iParam0) == 20)
		{
			func_968(iParam0, uParam1, uParam2, fParam3);
		}
	}
	else
	{
		Var0 = { func_993(iParam0) };
		*uParam1 = { Var0.f_21 };
		*uParam2 = { Var0.f_24 };
		*fParam3 = Var0.f_27;
	}
}

int func_968(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 409:
			*uParam1 = { -2267.026f, 402.2257f, 183.667f };
			*uParam2 = { -2257.724f, 380.6196f, 267.6024f };
			*uParam3 = 20f;
			return 1;
		
		case 410:
			*uParam1 = { -757.3264f, -192.9475f, 43.20822f };
			*uParam2 = { -745.3168f, -213.0097f, 128.1185f };
			*uParam3 = 18f;
			return 1;
		
		case 413:
			*uParam1 = { -410.7763f, -319.03f, 70.80331f };
			*uParam2 = { -380.264f, -340.9736f, 155.8033f };
			*uParam3 = 16f;
			return 1;
		
		case 421:
			*uParam1 = { 740.6537f, 1287.007f, 353.2967f };
			*uParam2 = { 716.8173f, 1286.363f, 439.296f };
			*uParam3 = 30f;
			return 1;
		
		case 430:
			*uParam1 = { -2595.064f, 1927.041f, 167.0463f };
			*uParam2 = { -2589.626f, 1882.5f, 250.4927f };
			*uParam3 = 22f;
			return 1;
		
		default:
	}
	return 0;
}

int func_969(int iParam0)
{
	if (func_970(iParam0))
	{
		if (*iParam0 >= 382 && *iParam0 <= 401)
		{
			return 23;
		}
		if (*iParam0 >= 402 && *iParam0 <= 431)
		{
			return 20;
		}
		if (*iParam0 >= 432 && *iParam0 <= 491)
		{
			return 15;
		}
		if (*iParam0 >= 492 && *iParam0 <= 521)
		{
			return 24;
		}
		if (*iParam0 >= 522 && *iParam0 <= 551)
		{
			return 21;
		}
		if (*iParam0 >= 552 && *iParam0 <= 584)
		{
			return 22;
		}
		if (*iParam0 >= 585 && *iParam0 <= 614)
		{
			return 16;
		}
		if (*iParam0 >= 615 && *iParam0 <= 644)
		{
			return 17;
		}
		if (*iParam0 >= 645 && *iParam0 <= 674)
		{
			return 25;
		}
	}
	return -1;
}

bool func_970(var uParam0)
{
	return (*uParam0 >= 377 && *uParam0 <= 674);
}

bool func_971()
{
	return func_972(unk_0x259BE71D8A81D4FA(), 14);
}

bool func_972(bool bParam0, int iParam1)
{
	return BitTest(Global_1894573[bParam0 /*608*/].f_10.f_5, iParam1);
}

int func_973(int iParam0)
{
	if (!func_975(iParam0))
	{
		return 0;
	}
	if (func_974())
	{
		return 0;
	}
	return 1;
}

int func_974()
{
	if (func_237(unk_0x259BE71D8A81D4FA()) == 229 && func_235(unk_0x259BE71D8A81D4FA()) == 26)
	{
		return 1;
	}
	return 0;
}

int func_975(int iParam0)
{
	var uVar0;
	
	switch (func_977(iParam0))
	{
		case 0:
		case 2:
		case 3:
			return 0;
		
		case 1:
		case 4:
		case 5:
		case 6:
			uVar0 = func_976(iParam0);
			return BitTest(uVar0, 3);
		
		default:
	}
	return 0;
}

var func_976(int iParam0)
{
	struct<28> Var0;
	
	Var0 = { func_993(iParam0) };
	return Var0.f_16;
}

int func_977(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 376)
	{
		return 0;
	}
	if (iParam0 >= 377 && iParam0 <= 674)
	{
		return 1;
	}
	if (iParam0 >= 675 && iParam0 <= 683)
	{
		return 2;
	}
	if (iParam0 >= 684 && iParam0 <= 703)
	{
		return 3;
	}
	if (iParam0 >= 704 && iParam0 <= 713)
	{
		return 4;
	}
	if (iParam0 >= 714 && iParam0 <= 746)
	{
		return 5;
	}
	if (iParam0 >= 747 && iParam0 <= 930)
	{
		return 6;
	}
	return -1;
}

void func_978(int iParam0, var uParam1, var uParam2, struct<3> Param3)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	Var0 = { func_635(iParam0) };
	fVar1 = (1f * Param3.f_0);
	fVar2 = (1f * Param3.f_1);
	fVar3 = (2f * Param3.f_2);
	*uParam1 = { Var0 - Vector(0f, fVar2, fVar1) };
	*uParam2 = { Var0 + Vector(fVar3, fVar2, fVar1) };
}

void func_979(int iParam0, var uParam1, var uParam2, struct<3> Param3)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	Var0 = { func_724(iParam0) };
	fVar1 = (5f * Param3.f_0);
	fVar2 = (5f * Param3.f_1);
	fVar3 = (2.5f * Param3.f_2);
	fVar4 = 0f;
	if (Param3.f_2 != 1f)
	{
		fVar4 = (fVar3 * 0.5f);
		fVar3 = fVar4;
	}
	*uParam1 = { Var0 - Vector(fVar4, fVar2, fVar1) };
	*uParam2 = { Var0 + Vector(fVar3, fVar2, fVar1) };
}

bool func_980(int iParam0)
{
	return (*iParam0 >= 377 && *iParam0 <= 381);
}

void func_981(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	func_982(iParam0, uParam1, uParam2, uParam3, bParam4);
}

int func_982(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (iParam0)
		{
			case 675:
				*uParam1 = { 1297.229f, 2854.667f, 46.22242f };
				*uParam2 = { 1277.379f, 2838.311f, 54.34742f };
				*uParam3 = 14.75f;
				return 1;
			
			case 676:
				*uParam1 = { 7.976243f, 2604.159f, 82.82843f };
				*uParam2 = { 30.07752f, 2618.249f, 90.95343f };
				*uParam3 = 14.75f;
				return 1;
			
			case 677:
				*uParam1 = { 2777.815f, 3928.604f, 42.66043f };
				*uParam2 = { 2759.668f, 3910.758f, 50.78543f };
				*uParam3 = 14.75f;
				return 1;
			
			case 678:
				*uParam1 = { 3419.642f, 5501.849f, 23.10643f };
				*uParam2 = { 3394.699f, 5507.827f, 31.23143f };
				*uParam3 = 14.75f;
				return 1;
			
			case 679:
				*uParam1 = { -9.453247f, 6836.305f, 12.64543f };
				*uParam2 = { 14.47614f, 6827.522f, 20.77043f };
				*uParam3 = 14.75f;
				return 1;
			
			case 680:
				*uParam1 = { -2232.366f, 2430.486f, 9.009426f };
				*uParam2 = { -2230.132f, 2405.009f, 17.13443f };
				*uParam3 = 14.75f;
				return 1;
			
			case 681:
				*uParam1 = { -9.857053f, 3314.334f, 38.45943f };
				*uParam2 = { -4.230778f, 3339.46f, 46.58443f };
				*uParam3 = 14.75f;
				return 1;
			
			case 682:
				*uParam1 = { 2064.196f, 1738.971f, 101.3424f };
				*uParam2 = { 2082.448f, 1757.641f, 109.4674f };
				*uParam3 = 14.75f;
				return 1;
			
			case 683:
				*uParam1 = { 1881.381f, 295.3014f, 161.1334f };
				*uParam2 = { 1867.705f, 273.5757f, 169.2584f };
				*uParam3 = 14.75f;
				return 1;
			
			default:
		}
		return 0;
	}
	switch (iParam0)
	{
		case 675:
			*uParam1 = { 1273.677f, 2835.732f, 44.84742f };
			*uParam2 = { 1262.887f, 2827.357f, 55.80887f };
			*uParam3 = 17.125f;
			return 1;
		
		case 676:
			*uParam1 = { 32.71862f, 2620.037f, 81.45343f };
			*uParam2 = { 43.60667f, 2626.619f, 90.93901f };
			*uParam3 = 17.125f;
			return 1;
		
		case 677:
			*uParam1 = { 2757.371f, 3908.717f, 41.28543f };
			*uParam2 = { 2749.064f, 3901.245f, 51.93591f };
			*uParam3 = 17.125f;
			return 1;
		
		case 678:
			*uParam1 = { 3392.239f, 5508.464f, 21.73143f };
			*uParam2 = { 3380.613f, 5511.087f, 31.09143f };
			*uParam3 = 17.125f;
			return 1;
		
		case 679:
			*uParam1 = { 17.18369f, 6826.096f, 11.27043f };
			*uParam2 = { 28.89165f, 6822.171f, 22.87762f };
			*uParam3 = 17.125f;
			return 1;
		
		case 680:
			*uParam1 = { -2229.61f, 2401.256f, 7.634426f };
			*uParam2 = { -2229.282f, 2387.398f, 21.65034f };
			*uParam3 = 17.125f;
			return 1;
		
		case 681:
			*uParam1 = { -3.066728f, 3343.304f, 37.08443f };
			*uParam2 = { 1.22503f, 3357.966f, 47.80353f };
			*uParam3 = 17.125f;
			return 1;
		
		case 682:
			*uParam1 = { 2084.432f, 1759.63f, 99.96742f };
			*uParam2 = { 2092.595f, 1767.434f, 110.466f };
			*uParam3 = 17.125f;
			return 1;
		
		case 683:
			*uParam1 = { 1866.002f, 271.215f, 159.7584f };
			*uParam2 = { 1859.329f, 260.6256f, 171.2149f };
			*uParam3 = 17.125f;
			return 1;
		
		default:
	}
	return 0;
}

Vector3 func_983(int iParam0)
{
	switch (func_977(iParam0))
	{
		case 0:
			return func_989(func_990(&iParam0));
		
		case 1:
			return func_988(func_969(&iParam0));
		
		case 2:
			return func_987();
		
		case 3:
			return func_986();
		
		case 5:
			return func_985();
		
		case 6:
			return func_984(iParam0);
		
		default:
	}
	return 1f, 1f, 1f;
}

Vector3 func_984(int iParam0)
{
	switch (iParam0)
	{
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 930:
			if (func_703(unk_0x4A8C381C258A124D()) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				return 0.5f, 0.5f, 1f;
			}
			break;
		
		case 761:
		case 762:
			if (func_703(unk_0x4A8C381C258A124D()) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				return 3f, 3f, 4.5f;
			}
			break;
		
		case 763:
			return 100f, 100f, 200f;
			break;
		
		case 756:
			return 1f, 1f, 2f;
			break;
		
		case 771:
		case 772:
			return 1f, 1f, 2f;
			break;
		
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 882:
		case 883:
		case 906:
			return 1f, 1f, 2f;
			break;
	}
	return 1f, 1f, 1f;
}

Vector3 func_985()
{
	if (func_703(unk_0x4A8C381C258A124D()) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		return 0.5f, 0.5f, 1f;
	}
	return 1f, 1f, 1f;
}

Vector3 func_986()
{
	return 1f, 1f, 1f;
}

Vector3 func_987()
{
	return 1f, 1f, 1f;
}

Vector3 func_988(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { 1f, 1f, 1f };
	return Var0;
}

Vector3 func_989(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 8:
			Var0 = { 1f, 1f, 3f };
			break;
		
		case 14:
			Var0 = { 2.5f, 2.5f, 4f };
			break;
		
		case 18:
			Var0 = { 2f, 2f, 4f };
			break;
		
		case 15:
			Var0 = { 2.2f, 2.2f, 4f };
			break;
		
		case 17:
			Var0 = { 0.75f, 0.75f, 4f };
			break;
		
		case 19:
			Var0 = { 2f, 2f, 4f };
			break;
		
		case 16:
			Var0 = { 2f, 2f, 4f };
			break;
		
		default:
			Var0 = { 1f, 1f, 1f };
			break;
	}
	return Var0;
}

int func_990(int iParam0)
{
	if (func_991(iParam0))
	{
		if (*iParam0 >= 12 && *iParam0 <= 71)
		{
			return 17;
		}
		if (*iParam0 >= 72 && *iParam0 <= 91)
		{
			return 15;
		}
		if (*iParam0 >= 92 && *iParam0 <= 156)
		{
			return 14;
		}
		if (*iParam0 >= 157 && *iParam0 <= 256)
		{
			return 16;
		}
		if (*iParam0 >= 257 && *iParam0 <= 356)
		{
			return 19;
		}
		if (*iParam0 >= 357 && *iParam0 <= 376)
		{
			return 18;
		}
	}
	return -1;
}

bool func_991(var uParam0)
{
	return (*uParam0 >= 1 && *uParam0 <= 376);
}

float func_992(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0f;
	}
	return vdist2(Global_1956139.f_1[iParam0 /*6*/], func_102(unk_0x259BE71D8A81D4FA()));
}

struct<28> func_993(int iParam0)
{
	struct<28> Var0;
	
	Var0.f_20 = 1091567616;
	switch (func_977(iParam0))
	{
		case 0:
			Var0 = { func_1087(iParam0) };
			break;
		
		case 1:
			Var0 = { func_1070(iParam0) };
			break;
		
		case 2:
			Var0 = { func_1064(iParam0) };
			break;
		
		case 3:
			Var0 = { func_1054(iParam0) };
			break;
		
		case 4:
			Var0 = { func_1048(iParam0) };
			break;
		
		case 5:
			Var0 = { func_1040(iParam0) };
			break;
		
		case 6:
			Var0 = { func_994(iParam0) };
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<28> func_994(int iParam0)
{
	struct<28> Var0;
	
	Var0.f_20 = 1091567616;
	if (func_1039(iParam0))
	{
		StringCopy(&(Var0.f_8), func_1038(iParam0), 32);
		Var0.f_3 = func_1037(iParam0);
		Var0.f_7 = func_1036(iParam0);
		Var0.f_17 = func_1035(iParam0);
		Var0.f_20 = func_1034(iParam0);
		Var0.f_18 = 194625;
		Var0.f_19 = 194148;
		func_997(iParam0, &Var0);
		func_996(iParam0, &Var0);
		func_995(iParam0, &Var0);
	}
	return Var0;
}

void func_995(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 763:
			uParam1->f_21 = { -2484.88f, -4361.851f, -7.889073f };
			uParam1->f_24 = { 4009.877f, -3911.593f, 3001.878f };
			uParam1->f_27 = 750f;
			return;
			break;
		
		case 789:
			uParam1->f_21 = { -179.8255f, -607.1684f, 31.42449f };
			uParam1->f_24 = { -173.0034f, -609.6523f, 34.23698f };
			uParam1->f_27 = 4.0625f;
			return;
			break;
		
		case 790:
			uParam1->f_21 = { 139.0636f, -728.7686f, 32.13333f };
			uParam1->f_24 = { 141.2216f, -722.888f, 36.00834f };
			uParam1->f_27 = 3.9375f;
			return;
			break;
		
		case 791:
			uParam1->f_21 = { 42.10335f, -886.4261f, 29.22317f };
			uParam1->f_24 = { 43.72779f, -881.9918f, 32.66639f };
			uParam1->f_27 = 3.75f;
			return;
			break;
	}
	uParam1->f_21 = { 0f, 0f, 0f };
	uParam1->f_24 = { 0f, 0f, 0f };
	uParam1->f_27 = 0f;
}

void func_996(int iParam0, var uParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 11);
	if (func_1034(iParam0) != 0f)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 18);
	}
	switch (iParam0)
	{
		case 757:
		case 904:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 16);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 8);
			break;
		
		case 763:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 3);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 5);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), true);
			break;
		
		case 756:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 796:
		case 798:
		case 800:
		case 802:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 13);
			break;
		
		case 794:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 7);
			break;
		
		case 771:
		case 772:
			unk_0x8744D2E3FC95740E(&(uParam1->f_16), 11);
			break;
		
		case 789:
		case 790:
		case 791:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 9);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 15);
			break;
		
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
		case 884:
		case 885:
		case 886:
		case 887:
		case 888:
		case 889:
		case 890:
		case 891:
		case 892:
		case 893:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 17);
			break;
	}
}

void func_997(int iParam0, var uParam1)
{
	uParam1->f_4 = { func_1003(iParam0) };
	*uParam1 = { func_998(iParam0) };
}

Vector3 func_998(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam0)
	{
		case 930:
			return -1011.788f, -480.2999f, 38.9756f;
		
		case 747:
			return 2331.56f, 2575.972f, 45.6677f;
		
		case 748:
			return -443.3367f, 6016.453f, 30.7172f;
		
		case 749:
			return -1079.142f, -855.9941f, 4.0321f;
		
		case 750:
			return 1855.284f, 3683.246f, 33.2675f;
		
		case 751:
			return 459.2572f, -1007.858f, 27.2567f;
		
		case 752:
			return -105.4055f, 2796.867f, 52.3442f;
		
		case 753:
			return 930.3027f, -1807.612f, 30.3326f;
		
		case 754:
			return -127.9034f, -1394.535f, 28.5281f;
		
		case 762:
			return -1395.269f, -3267.321f, 12.9448f;
		
		case 756:
			return 987.5f, 79.66f, 79.99f;
		
		case 765:
			return 759.18f, -677.63f, 27.85f;
		
		case 766:
			return -147.14f, -1341.72f, 29.08f;
		
		case 767:
			return -172.07f, -33.75f, 51.23f;
		
		case 768:
			return 233.23f, -1873.42f, 25.55f;
		
		case 769:
			return 489.06f, -894.67f, 24.74f;
		
		case 795:
			return 388.3036f, -74.6683f, 67.1805f;
		
		case 797:
			return -1016.535f, -413.186f, 38.6161f;
		
		case 799:
			return -589.4908f, -707.4646f, 35.2844f;
		
		case 801:
			return -1039.083f, -756.4792f, 18.8395f;
		
		case 803:
			return 214.4743f, -1.2945f, 73.3064f;
		
		case 804:
			return -1420.127f, -239.5311f, 45.3791f;
		
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
			iVar0 = func_1002(iParam0);
			return func_1000(iVar0, 0);
			break;
		
		case 884:
		case 885:
		case 886:
		case 887:
		case 888:
		case 889:
		case 890:
		case 891:
		case 892:
		case 893:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
			func_999(func_1002(iParam0), &Var1);
			return Var1;
			break;
	}
	return func_1003(iParam0);
}

void func_999(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 22:
			*uParam1 = { 52.903f, 6338.585f, 30.35f };
			break;
		
		case 23:
			*uParam1 = { 416.7524f, 6520.753f, 26.7121f };
			break;
		
		case 24:
			*uParam1 = { 51.7653f, 6486.163f, 30.428f };
			break;
		
		case 25:
			*uParam1 = { -413.6606f, 6171.938f, 30.4782f };
			break;
		
		case 26:
			*uParam1 = { -163.6828f, 6334.845f, 30.5808f };
			break;
		
		case 27:
			*uParam1 = { 1454.671f, -1651.986f, 66f };
			break;
		
		case 28:
			*uParam1 = { 102.14f, 175.26f, 103.56f };
			break;
		
		case 29:
			*uParam1 = { -1462.622f, -381.826f, 37.802f };
			break;
		
		case 30:
			*uParam1 = { -1171.005f, -1380.922f, 3.937f };
			break;
		
		case 31:
			*uParam1 = { 299.071f, -759.072f, 28.333f };
			break;
		
		case 32:
			*uParam1 = { 201.8909f, 2461.782f, 54.6885f };
			break;
		
		case 33:
			*uParam1 = { 2848.369f, 4450.147f, 47.5139f };
			break;
		
		case 34:
			*uParam1 = { 387.5332f, 3585.042f, 32.2922f };
			break;
		
		case 35:
			*uParam1 = { 636.6344f, 2785.126f, 41.0111f };
			break;
		
		case 36:
			*uParam1 = { 1657.066f, 4851.732f, 40.9882f };
			break;
		
		case 37:
			*uParam1 = { 1181.44f, -3113.82f, 5.03f };
			break;
		
		case 38:
			*uParam1 = { 136.973f, -2472.795f, 4.98f };
			break;
		
		case 39:
			*uParam1 = { -253.31f, -2591.15f, 4.97f };
			break;
		
		case 40:
			*uParam1 = { 671.451f, -2667.502f, 5.0812f };
			break;
		
		case 41:
			*uParam1 = { -331.52f, -2778.97f, 4.12f };
			break;
		
		case 159:
			*uParam1 = { -331.52f, -2778.97f, 4.12f };
			break;
	}
}

Vector3 func_1000(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	func_1001(iParam0, &Var0);
	return Var0;
}

void func_1001(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 54.191f, -2569.248f, 5.0046f };
			break;
		
		case 1:
			*uParam1 = { -1083.054f, -1261.893f, 4.534f };
			break;
		
		case 2:
			*uParam1 = { 896.3665f, -1035.749f, 34.1096f };
			break;
		
		case 3:
			*uParam1 = { 247.473f, -1956.943f, 22.1908f };
			break;
		
		case 4:
			*uParam1 = { -424.828f, 185.825f, 79.775f };
			break;
		
		case 5:
			*uParam1 = { -1042.482f, -2023.516f, 12.1616f };
			break;
		
		case 6:
			*uParam1 = { -1268.119f, -812.2741f, 16.1075f };
			break;
		
		case 7:
			*uParam1 = { -873.65f, -2735.948f, 12.9438f };
			break;
		
		case 8:
			*uParam1 = { 274.5224f, -3015.413f, 4.6993f };
			break;
		
		case 9:
			*uParam1 = { 1569.69f, -2129.792f, 77.3351f };
			break;
		
		case 10:
			*uParam1 = { -315.551f, -2698.654f, 6.5495f };
			break;
		
		case 11:
			*uParam1 = { 499.81f, -651.982f, 23.909f };
			break;
		
		case 12:
			*uParam1 = { -528.5296f, -1784.573f, 20.5853f };
			break;
		
		case 13:
			*uParam1 = { -295.8596f, -1353.238f, 30.3138f };
			break;
		
		case 14:
			*uParam1 = { 349.839f, 328.889f, 103.272f };
			break;
		
		case 15:
			*uParam1 = { 926.2818f, -1560.311f, 29.7404f };
			break;
		
		case 16:
			*uParam1 = { 759.566f, -909.466f, 24.244f };
			break;
		
		case 17:
			*uParam1 = { 1037.813f, -2173.062f, 30.5334f };
			break;
		
		case 18:
			*uParam1 = { 1019.116f, -2511.69f, 27.302f };
			break;
		
		case 19:
			*uParam1 = { -245.3405f, 203.3286f, 82.818f };
			break;
		
		case 20:
			*uParam1 = { 539.346f, -1945.682f, 23.984f };
			break;
		
		case 21:
			*uParam1 = { 96.1538f, -2216.4f, 5.1712f };
			break;
	}
}

int func_1002(int iParam0)
{
	switch (iParam0)
	{
		case 930:
			return 145;
			break;
		
		case 757:
			return 147;
			break;
		
		case 756:
			return 146;
			break;
		
		case 765:
			return 149;
			break;
		
		case 766:
			return 150;
			break;
		
		case 767:
			return 151;
			break;
		
		case 768:
			return 152;
			break;
		
		case 769:
			return 153;
			break;
		
		case 795:
			return 155;
			break;
		
		case 797:
			return 156;
			break;
		
		case 799:
			return 157;
			break;
		
		case 801:
			return 158;
			break;
		
		case 796:
			return 155;
			break;
		
		case 798:
			return 156;
			break;
		
		case 800:
			return 157;
			break;
		
		case 802:
			return 158;
			break;
		
		case 845:
			return 0;
			break;
		
		case 846:
			return 1;
			break;
		
		case 847:
			return 2;
			break;
		
		case 848:
			return 3;
			break;
		
		case 849:
			return 4;
			break;
		
		case 850:
			return 5;
			break;
		
		case 851:
			return 6;
			break;
		
		case 852:
			return 7;
			break;
		
		case 853:
			return 8;
			break;
		
		case 854:
			return 9;
			break;
		
		case 855:
			return 10;
			break;
		
		case 856:
			return 11;
			break;
		
		case 857:
			return 12;
			break;
		
		case 858:
			return 13;
			break;
		
		case 859:
			return 14;
			break;
		
		case 860:
			return 15;
			break;
		
		case 861:
			return 16;
			break;
		
		case 862:
			return 17;
			break;
		
		case 863:
			return 18;
			break;
		
		case 864:
			return 19;
			break;
		
		case 865:
			return 20;
			break;
		
		case 866:
			return 21;
			break;
		
		case 884:
			return 22;
			break;
		
		case 885:
			return 23;
			break;
		
		case 886:
			return 24;
			break;
		
		case 887:
			return 25;
			break;
		
		case 888:
			return 26;
			break;
		
		case 889:
			return 27;
			break;
		
		case 890:
			return 28;
			break;
		
		case 891:
			return 29;
			break;
		
		case 892:
			return 30;
			break;
		
		case 893:
			return 31;
			break;
		
		case 894:
			return 32;
			break;
		
		case 895:
			return 33;
			break;
		
		case 896:
			return 34;
			break;
		
		case 897:
			return 35;
			break;
		
		case 898:
			return 36;
			break;
		
		case 899:
			return 37;
			break;
		
		case 900:
			return 38;
			break;
		
		case 901:
			return 39;
			break;
		
		case 902:
			return 40;
			break;
		
		case 903:
			return 41;
			break;
		
		case 904:
			return 159;
			break;
		
		case 905:
			return 160;
			break;
	}
	return -1;
}

Vector3 func_1003(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 747:
			return 2332.839f, 2582.595f, 45.6677f;
		
		case 748:
			return -436.1613f, 6028.733f, 30.3405f;
		
		case 749:
			return -1068.84f, -851.9506f, 3.8671f;
		
		case 750:
			return 1865.898f, 3699.468f, 32.5628f;
		
		case 751:
			return 446.1463f, -1019.909f, 27.5497f;
		
		case 752:
			return -104.1688f, 2796.184f, 52.3266f;
		
		case 753:
			return 934.3446f, -1803.678f, 29.7528f;
		
		case 754:
			return -138.0878f, -1396.641f, 28.8028f;
		
		case 930:
			return -1081.882f, -501.9055f, 35.6193f;
		
		case 756:
			return 934f, -2.6f, 78f;
		
		case 755:
			return -1079.98f, -2867.023f, 12.9505f;
		
		case 758:
			return -154.8892f, -2663.216f, 5.0002f;
		
		case 759:
			return -1615.657f, 5271.33f, -0.4f;
		
		case 760:
			return 1738.386f, 3280.542f, 40.1063f;
		
		case 761:
			return -1148.742f, -3403.921f, 12.945f;
		
		case 762:
			return -1394.095f, -3263.974f, 12.9448f;
		
		case 763:
			return 1376.011f, -4400.693f, 150.6801f;
		
		case 764:
			return -1294.799f, -3539.78f, 0.1343f;
		
		case 757:
			return func_1015(0f, 30.6f, -1f);
		
		case 796:
			return 360.084f, -74.7928f, 66.1459f;
		
		case 798:
			return -1031.865f, -410.4693f, 32.2732f;
		
		case 800:
			return -616.354f, -738.2424f, 26.8466f;
		
		case 802:
			return -987.0505f, -765.7468f, 14.7657f;
		
		case 803:
			return 214.4743f, -1.2945f, 73.3064f;
		
		case 804:
			return -1421.36f, -240.4189f, 45.3791f;
		
		case 765:
			return 762.16f, -677.76f, 27.7908f;
		
		case 766:
			return -147.3731f, -1343.693f, 28.8769f;
		
		case 767:
			return -169.0834f, -34.9386f, 51.4423f;
		
		case 768:
			return 235.1787f, -1874.712f, 25.4822f;
		
		case 769:
			return 492.1651f, -894.889f, 24.742f;
		
		case 770:
			return 1170.16f, -2973.49f, 4.902108f;
		
		case 771:
			return 1445.205f, 2327.525f, 72.8152f;
		
		case 772:
			return 1411.023f, 2582.441f, 36.0159f;
		
		case 792:
			return -153.3114f, -2658.146f, 5.001f;
		
		case 793:
			return 194.9886f, 2742.808f, 42.4263f;
		
		case 794:
			return 407.2454f, -983.9472f, 28.2663f;
		
		case 773:
			return -538.8397f, 486.7372f, 102.0298f;
		
		case 774:
			return -994.163f, 789.741f, 171.291f;
		
		case 775:
			return -1948.359f, 201.3107f, 85.0223f;
		
		case 776:
			return 51.8459f, 562.2281f, 179.3021f;
		
		case 777:
			return -3081.445f, 222.5399f, 13.0176f;
		
		case 778:
			return -815.6112f, -1329.625f, 4.0004f;
		
		case 779:
			return -1853.117f, -361.2698f, 48.2661f;
		
		case 780:
			return -3234.458f, 948.7831f, 12.2371f;
		
		case 781:
			return 1716.731f, 4668.851f, 42.1248f;
		
		case 782:
			return -1107.208f, -1049.329f, 1.1504f;
		
		case 783:
			return -1162.099f, -1466.775f, 3.3097f;
		
		case 784:
			return -1808.288f, -631.7379f, 10.0042f;
		
		case 785:
			return 875.6288f, -507.5239f, 56.4763f;
		
		case 786:
			return -1562.304f, -288.0245f, 47.2757f;
		
		case 787:
			return -1018.469f, -2731.378f, 12.6965f;
		
		case 788:
			return -588.9297f, 191.3239f, 70.2865f;
		
		case 789:
			return -176.8f, -608.2f, 31.4f;
		
		case 790:
			return 140.1f, -726f, 32.1f;
		
		case 791:
			return 42.9f, -884.1f, 29.3f;
		
		case 805:
			return 822.5f, -2143.1f, 28.8f;
		
		case 806:
			return -326.2301f, 6093.24f, 30.4581f;
		
		case 807:
			return 1689.736f, 3748.139f, 33.2314f;
		
		case 808:
			return -1105.935f, 2689.951f, 17.8098f;
		
		case 809:
			return -3156.758f, 1084.938f, 19.7042f;
		
		case 810:
			return 2562.93f, 312.499f, 107.4611f;
		
		case 811:
			return 237.9824f, -43.4654f, 68.7109f;
		
		case 812:
			return -1320.494f, -385.9128f, 35.5295f;
		
		case 813:
			return -7.9901f, -1111.536f, 27.5939f;
		
		case 814:
			return 842.1475f, -1012.798f, 26.7662f;
		
		case 815:
			return 299.5675f, -1443.328f, 28.7944f;
		
		case 816:
			return -656.6413f, 309.4868f, 81.926f;
		
		case 817:
			return -454.0086f, -339.7624f, 33.3635f;
		
		case 818:
			return 294.837f, -583.2901f, 42.1691f;
		
		case 819:
			return 1842.217f, 3667.678f, 32.6799f;
		
		case 820:
			return 1176.821f, -1522.911f, 33.6925f;
		
		case 821:
			return -1528.031f, 857.8983f, 180.6069f;
		
		case 822:
			return -1943.879f, 461.6002f, 101.0877f;
		
		case 823:
			return -3021.345f, 738.7341f, 26.2614f;
		
		case 824:
			return 917.0387f, -625.9073f, 57.054f;
		
		case 825:
			return -167.7749f, 972.1962f, 235.5897f;
		
		case 826:
			return -1568.654f, 32.2191f, 58.0992f;
		
		case 879:
			return 1210.5f, 1858.5f, 78.9f;
		
		case 880:
			return -1809.688f, -344.16f, 42.601f;
		
		case 881:
			return 81.2f, 81.9f, 78.6f;
		
		case 827:
			return 298.3121f, -1976.099f, 21.344f;
		
		case 828:
			return 477.766f, -1777.811f, 27.657f;
		
		case 829:
			return -55.397f, -1785.644f, 26.845f;
		
		case 830:
			return 95.686f, -279.773f, 46.295f;
		
		case 831:
			return 318.463f, -199.7699f, 53.0863f;
		
		case 832:
			return -4.663f, 3.022f, 70.11f;
		
		case 833:
			return -965.078f, -1091.969f, 1.15f;
		
		case 834:
			return -1137.003f, -1166.125f, 1.695f;
		
		case 835:
			return -1654.677f, -378.921f, 44.34f;
		
		case 836:
			return -1272.126f, 453.702f, 94.087f;
		
		case 837:
			return 1373.319f, -1522.446f, 56.0794f;
		
		case 838:
			return 1241.974f, -578.409f, 68.433f;
		
		case 839:
			return 465.17f, 2597.816f, 42.273f;
		
		case 840:
			return 1387.851f, 3667.965f, 32.935f;
		
		case 841:
			return 1850.214f, 3915.422f, 31.976f;
		
		case 842:
			return 1684.693f, 4681.491f, 42.0554f;
		
		case 843:
			return -353.508f, 6334.116f, 28.834f;
		
		case 844:
			return 41.624f, 6604.955f, 31.4f;
		
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
			iVar0 = func_1002(iParam0);
			return func_1012(func_1014(iVar0));
			break;
		
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
			return func_1010(func_1011(iParam0));
			break;
		
		case 884:
		case 885:
		case 886:
		case 887:
		case 888:
		case 889:
		case 890:
		case 891:
		case 892:
		case 893:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
			return func_1007(func_1009(iParam0), 0);
			break;
		
		case 882:
			return 911.5388f, -2192.047f, 29.4987f;
		
		case 883:
			return 2702.865f, 3454.961f, 54.6506f;
		
		case 904:
			return func_1004(2.3f, -0.2f, -1f);
		
		case 905:
			return 603.5212f, -427.7767f, 23.74491f;
		
		case 906:
			return 1378.556f, 3600.959f, 33.8881f;
		
		case 907:
			return 1808.601f, -1289.898f, 95.0198f;
		
		case 908:
			return 2343.614f, 1853.715f, 101.5366f;
		
		case 909:
			return 1520.581f, 1729.245f, 109f;
		
		case 910:
			return 1016.114f, -1394.704f, 28.072f;
		
		case 911:
			return -811.5247f, -2107.842f, 7.8111f;
		
		case 912:
			return -1668.607f, -241.4872f, 53.7712f;
		
		case 913:
			return 770.5651f, -394.1f, 32.3694f;
		
		case 914:
			return 945.8571f, 157.6789f, 79.8303f;
		
		case 915:
			return 1457.946f, -2616.098f, 47.6322f;
		
		case 916:
			return -638.051f, -2195.6f, 4.993f;
		
		case 917:
			return -2040.841f, -261.1292f, 22.3859f;
		
		case 918:
			return -98.3976f, -1856.421f, 4.5643f;
		
		case 919:
			return -1218.579f, -1326.788f, 3.5271f;
		
		case 920:
			return 966.6459f, -1036.442f, 39.8303f;
		
		case 921:
			return 707.4471f, 659.6788f, 127.9112f;
		
		case 922:
			return 549.151f, -1925.05f, 23.8072f;
		
		case 923:
			return -478.6819f, -601.1945f, 30.1744f;
		
		case 924:
			return -1904.643f, 334.1403f, 87.8452f;
		
		case 925:
			return 244.5641f, -2760.875f, 5.0002f;
		
		case 926:
			return 652.5548f, 151.7058f, 91.3253f;
		
		case 927:
			return -1579.911f, -888.0457f, 8.9987f;
		
		case 928:
			return 1041.997f, -3186.144f, 4.9011f;
		
		case 929:
			return 1737.116f, -1532.85f, 111.6593f;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1004(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	if (func_80(0))
	{
		iVar0 = func_1006(func_75());
		if (func_703(iVar0))
		{
			return unk_0x0D1381B6E0F3987D(iVar0, Param0);
		}
		else
		{
			return func_1005(904, func_75(), 0);
		}
	}
	else
	{
		iVar1 = func_1006(unk_0x259BE71D8A81D4FA());
		if (func_703(iVar1))
		{
			return unk_0x0D1381B6E0F3987D(iVar1, Param0);
		}
	}
	return 0f, 0f, 0f;
}

Vector3 func_1005(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam1 == func_74())
	{
		return 0f, 0f, 0f;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_1956139.f_5793[iVar0 /*2*/] == iParam0)
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (bParam2)
	{
		return Global_1894573[bParam1 /*608*/].f_556.f_16[iVar1 /*6*/];
	}
	return Global_1894573[bParam1 /*608*/].f_556.f_16[iVar1 /*6*/].f_3;
}

int func_1006(bool bParam0)
{
	if (bParam0 != func_74())
	{
		if (unk_0xFC8BFE4B41177C22(Global_1968145[bParam0]))
		{
			return Global_1968145[bParam0];
		}
	}
	return -1;
}

Vector3 func_1007(int iParam0, int iParam1)
{
	struct<3> Var0[2];
	
	Var0[0 /*3*/] = { 0f, 0f, 0f };
	Var0[1 /*3*/] = { 0f, 0f, 0f };
	if (!func_1008(iParam0))
	{
		return Var0[0 /*3*/];
	}
	switch (iParam0)
	{
		case 1:
			Var0[0 /*3*/] = { 46.57f, 6298.997f, 30.2003f };
			break;
		
		case 2:
			Var0[0 /*3*/] = { 405.3243f, 6493.409f, 26.71f };
			break;
		
		case 3:
			Var0[0 /*3*/] = { 58.64f, 6469.08f, 30.3094f };
			break;
		
		case 4:
			Var0[0 /*3*/] = { -441.42f, 6144.01f, 30.44f };
			break;
		
		case 5:
			Var0[0 /*3*/] = { -179.1551f, 6317.944f, 30.2184f };
			break;
		
		case 6:
			Var0[0 /*3*/] = { 1453.143f, -1686.121f, 64.9563f };
			break;
		
		case 7:
			Var0[0 /*3*/] = { 114.6697f, 164.4655f, 103.4672f };
			break;
		
		case 8:
			Var0[0 /*3*/] = { -1464.77f, -390.1486f, 37.3017f };
			break;
		
		case 9:
			Var0[0 /*3*/] = { -1172.126f, -1390.925f, 3.7783f };
			break;
		
		case 10:
			Var0[0 /*3*/] = { 311.3521f, -760.6975f, 28.0504f };
			Var0[1 /*3*/] = { 307.7254f, -699.9282f, 28.3096f };
			break;
		
		case 11:
			Var0[0 /*3*/] = { 208.0649f, 2456.774f, 54.8342f };
			break;
		
		case 12:
			Var0[0 /*3*/] = { 2878.758f, 4459.61f, 47.3484f };
			break;
		
		case 13:
			Var0[0 /*3*/] = { 376.971f, 3590.405f, 32.2221f };
			break;
		
		case 14:
			Var0[0 /*3*/] = { 646.3618f, 2792.016f, 40.6392f };
			break;
		
		case 15:
			Var0[0 /*3*/] = { 1642.669f, 4839.135f, 40.9704f };
			break;
		
		case 16:
			Var0[0 /*3*/] = { 1189.591f, -3098.619f, 4.7346f };
			break;
		
		case 17:
			Var0[0 /*3*/] = { 140.2878f, -2477.946f, 4.94f };
			break;
		
		case 18:
			Var0[0 /*3*/] = { -256.8373f, -2586.215f, 4.9106f };
			break;
		
		case 19:
			Var0[0 /*3*/] = { 666.0431f, -2672.718f, 4.9612f };
			break;
		
		case 20:
			Var0[0 /*3*/] = { -337.6264f, -2769.627f, 3.944f };
			break;
		
		case 21:
			Var0[0 /*3*/] = { 494.0037f, 3015.448f, 40.0526f };
			break;
		
		case 22:
			Var0[0 /*3*/] = { 849.5273f, 3023.794f, 40.2763f };
			break;
		
		case 23:
			Var0[0 /*3*/] = { 40.4676f, 2928.654f, 54.7342f };
			break;
		
		case 24:
			Var0[0 /*3*/] = { 1572.055f, 2224.068f, 77.3731f };
			break;
		
		case 25:
			Var0[0 /*3*/] = { 2107.983f, 3324.722f, 44.3713f };
			break;
		
		case 26:
			Var0[0 /*3*/] = { 2488.974f, 3164.124f, 48.0622f };
			break;
		
		case 27:
			Var0[0 /*3*/] = { 1798.893f, 4705.239f, 38.955f };
			break;
		
		case 28:
			Var0[0 /*3*/] = { -753.681f, 5944.054f, 18.8012f };
			break;
		
		case 29:
			Var0[0 /*3*/] = { -388.6984f, 4338.543f, 55.1304f };
			break;
		
		case 30:
			Var0[0 /*3*/] = { -3029.436f, 3334.414f, 9.0759f };
			break;
		
		case 31:
			Var0[0 /*3*/] = { -3155.589f, 1376.788f, 16.0949f };
			break;
		
		case 32:
			Var0[0 /*3*/] = { -3155.589f, 1376.788f, 16.0949f };
			break;
	}
	if (iParam1 && !func_227(Var0[1 /*3*/], 0f, 0f, 0f, 0))
	{
		return Var0[1 /*3*/];
	}
	return Var0[0 /*3*/];
}

int func_1008(int iParam0)
{
	if (iParam0 == 33 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1009(int iParam0)
{
	switch (iParam0)
	{
		case 884:
			return 1;
			break;
		
		case 885:
			return 2;
			break;
		
		case 886:
			return 3;
			break;
		
		case 887:
			return 4;
			break;
		
		case 888:
			return 5;
			break;
		
		case 889:
			return 6;
			break;
		
		case 890:
			return 7;
			break;
		
		case 891:
			return 8;
			break;
		
		case 892:
			return 9;
			break;
		
		case 893:
			return 10;
			break;
		
		case 894:
			return 11;
			break;
		
		case 895:
			return 12;
			break;
		
		case 896:
			return 13;
			break;
		
		case 897:
			return 14;
			break;
		
		case 898:
			return 15;
			break;
		
		case 899:
			return 16;
			break;
		
		case 900:
			return 17;
			break;
		
		case 901:
			return 18;
			break;
		
		case 902:
			return 19;
			break;
		
		case 903:
			return 20;
			break;
	}
	return 0;
}

Vector3 func_1010(int iParam0)
{
	switch (iParam0)
	{
		case 91:
			return 249.3483f, -1805.22f, 26.1131f;
			break;
		
		case 92:
			return -1462.159f, -923.3718f, 9.0446f;
			break;
		
		case 93:
			return 32.102f, -1025.448f, 28.4631f;
			break;
		
		case 94:
			return 38.5539f, 2784.115f, 56.8781f;
			break;
		
		case 95:
			return -360.8651f, 6073.394f, 30.4974f;
			break;
		
		case 96:
			return 1731.091f, 3720.573f, 33.0542f;
			break;
		
		case 97:
			return 942.3256f, -1452.339f, 30.1209f;
			break;
		
		case 98:
			return 189.2704f, 300.9276f, 104.4934f;
			break;
		
		case 99:
			return -25.0047f, -200.5497f, 51.3551f;
			break;
		
		case 100:
			return 2485.17f, 4080.784f, 36.9306f;
			break;
		
		case 101:
			return -31.0946f, 6413.322f, 30.4904f;
			break;
		
		case 102:
			return -1134.507f, -1576.34f, 3.4102f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_1011(int iParam0)
{
	switch (iParam0)
	{
		case 867:
			return 91;
		
		case 868:
			return 92;
		
		case 869:
			return 93;
		
		case 870:
			return 94;
		
		case 871:
			return 95;
		
		case 872:
			return 96;
		
		case 873:
			return 97;
		
		case 874:
			return 98;
		
		case 875:
			return 99;
		
		case 876:
			return 100;
		
		case 877:
			return 101;
		
		case 878:
			return 102;
		
		default:
	}
	return -1;
}

Vector3 func_1012(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (!func_1013(iParam0))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 1:
			Var0 = { 58.3f, -2560.8f, 5.0046f };
			break;
		
		case 2:
			Var0 = { -1082.958f, -1254.855f, 4.4214f };
			break;
		
		case 3:
			Var0 = { 900.0288f, -1029.762f, 33.9714f };
			break;
		
		case 4:
			Var0 = { 247.7398f, -1950.657f, 22.0817f };
			break;
		
		case 5:
			Var0 = { -404.5349f, 189.8157f, 80.518f };
			break;
		
		case 6:
			Var0 = { -1048.123f, -2017.136f, 12.1616f };
			break;
		
		case 7:
			Var0 = { -1267.888f, -818.313f, 16.0992f };
			break;
		
		case 8:
			Var0 = { -879.1935f, -2731.856f, 12.8285f };
			break;
		
		case 9:
			Var0 = { 274.4458f, -3004f, 4.6994f };
			break;
		
		case 10:
			Var0 = { 1566.514f, -2137.776f, 76.6229f };
			break;
		
		case 11:
			Var0 = { -314.3864f, -2721.792f, 5.0003f };
			break;
		
		case 12:
			Var0 = { 497.1263f, -635.2617f, 23.8849f };
			break;
		
		case 13:
			Var0 = { -546.1532f, -1775.258f, 20.6843f };
			break;
		
		case 14:
			Var0 = { -307.6485f, -1364.914f, 30.2957f };
			break;
		
		case 15:
			Var0 = { 366.4851f, 333.3937f, 102.4653f };
			break;
		
		case 16:
			Var0 = { 921.407f, -1556.423f, 29.7756f };
			break;
		
		case 17:
			Var0 = { 746.1452f, -882.8884f, 24.0639f };
			break;
		
		case 18:
			Var0 = { 1042.462f, -2177.798f, 30.4457f };
			break;
		
		case 19:
			Var0 = { 1013.842f, -2514.939f, 27.3049f };
			break;
		
		case 20:
			Var0 = { -272.0028f, 193.3204f, 84.5697f };
			break;
		
		case 21:
			Var0 = { 549.6728f, -1929.794f, 23.8145f };
			break;
		
		case 22:
			Var0 = { 126.5327f, -2200.172f, 5.0333f };
			break;
	}
	return Var0;
}

int func_1013(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_1014(int iParam0)
{
	switch (iParam0)
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
			return 9;
			break;
		
		case 9:
			return 10;
			break;
		
		case 10:
			return 11;
			break;
		
		case 11:
			return 12;
			break;
		
		case 12:
			return 13;
			break;
		
		case 13:
			return 14;
			break;
		
		case 14:
			return 15;
			break;
		
		case 15:
			return 16;
			break;
		
		case 16:
			return 17;
			break;
		
		case 17:
			return 18;
			break;
		
		case 18:
			return 19;
			break;
		
		case 19:
			return 20;
			break;
		
		case 20:
			return 21;
			break;
		
		case 21:
			return 22;
			break;
	}
	return 0;
}

Vector3 func_1015(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	if (func_80(0))
	{
		iVar0 = func_1016(func_75());
		if (func_703(iVar0))
		{
			return unk_0x0D1381B6E0F3987D(iVar0, Param0);
		}
		else
		{
			return func_1005(757, func_75(), 0);
		}
	}
	else
	{
		iVar1 = func_1016(unk_0x259BE71D8A81D4FA());
		if (func_703(iVar1))
		{
			return unk_0x0D1381B6E0F3987D(iVar1, Param0);
		}
	}
	return 0f, 0f, 0f;
}

int func_1016(bool bParam0)
{
	if (bParam0 != func_74())
	{
		if (unk_0xFC8BFE4B41177C22(Global_1968178[bParam0]))
		{
			return Global_1968178[bParam0];
		}
	}
	return -1;
}

void func_1017(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 763:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 796:
		case 798:
		case 800:
		case 802:
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 815:
		case 816:
		case 817:
		case 818:
		case 819:
		case 820:
		case 821:
		case 822:
		case 823:
		case 824:
		case 825:
		case 826:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
		case 882:
		case 883:
		case 906:
			*uParam2 = 0;
			*uParam3 = 1;
			return;
			break;
		
		case 795:
		case 797:
		case 799:
		case 801:
		case 879:
		case 880:
		case 881:
			*uParam2 = 1;
			*uParam3 = 0;
			return;
			break;
	}
	*uParam2 = 1;
	*uParam3 = 1;
}

int func_1018(int iParam0)
{
	int iVar0;
	
	if (!func_1033(iParam0))
	{
		return 0;
	}
	if (func_703(unk_0x4A8C381C258A124D()) && !func_1032(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (func_703(iVar0) && func_1019(iParam0, iVar0, 1))
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

int func_1019(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam1);
	if (!func_1031(iParam0) && unk_0x20974C28142EB370(iParam1, &iVar1))
	{
		if (func_703(iVar1))
		{
			if (unk_0x4B423FAA24E8ABF0(iVar1) == joaat("trailersmall2"))
			{
				return 0;
			}
		}
	}
	if (((((((((iVar0 == joaat("thruster") || iVar0 == joaat("chernobog")) || iVar0 == joaat("khanjali")) || iVar0 == joaat("riot2")) || iVar0 == joaat("volatol")) || iVar0 == joaat("trailersmall2")) || iVar0 == joaat("terbyte")) || iVar0 == joaat("bus")) || iVar0 == joaat("airbus")) || ((!unk_0xD3CE8D1E6564B011(iVar0) && !unk_0x9910CD0D8626AA28(iVar0)) && !unk_0x78B050AFBA6D1517(iVar0)))
	{
		if (func_1030(iParam0))
		{
			if (!unk_0xBA16CD57E37AC32A(iVar0) && !unk_0x00C6FDED3EB75117(iVar0))
			{
				return 0;
			}
		}
		else if (func_1029(iParam0))
		{
			if (!unk_0xEA4F815FDC353FEF(iVar0) && !unk_0xA71279EFEE0ACEB2(iVar0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_1028(iParam1))
	{
		return 0;
	}
	if (iParam0 >= 905 && iParam0 < 910)
	{
		if (func_1023(iParam1))
		{
			return 0;
		}
	}
	if ((func_1022(iParam1, 1) || func_1021(iParam1)) || func_1020(iParam1, 1))
	{
		return iParam2;
	}
	if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
	{
		if (unk_0xD130E7CDEE903624(iParam1, "MPBitset"))
		{
			iVar2 = unk_0xE2F6FE9B61232165(iParam1, "MPBitset");
			if (BitTest(iVar2, 17))
			{
				return iParam2;
			}
		}
	}
	return 1;
}

int func_1020(int iParam0, bool bParam1)
{
	if (Global_78558)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && (!bParam1 || unk_0xD9F5E1FEFD1329E4(iParam0, 0)))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "Player_Hacker_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1021(int iParam0)
{
	if ((unk_0x77B62CAA5DF0922A("CreatedByPegasus", 2) && unk_0xD130E7CDEE903624(iParam0, "CreatedByPegasus")) && unk_0x3F40AE65F056B43D(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_1022(int iParam0, bool bParam1)
{
	if (Global_78558)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && (!bParam1 || unk_0xD9F5E1FEFD1329E4(iParam0, 0)))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1023(int iParam0)
{
	if ((func_1027(iParam0, 1) || func_1025(iParam0, 1)) || func_1024(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_1024(int iParam0, bool bParam1)
{
	if (Global_78558)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && (!bParam1 || unk_0xD9F5E1FEFD1329E4(iParam0, 0)))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "Player_Acid_Lab"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1025(int iParam0, bool bParam1)
{
	if (Global_78558)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && (!bParam1 || unk_0xD9F5E1FEFD1329E4(iParam0, 0)))
		{
			if (unk_0x4B423FAA24E8ABF0(iParam0) == func_1026() && unk_0xD130E7CDEE903624(iParam0, "Not_Allow_As_Saved_Veh"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1026()
{
	return joaat("journey2");
}

int func_1027(int iParam0, bool bParam1)
{
	if (Global_78558)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && (!bParam1 || unk_0xD9F5E1FEFD1329E4(iParam0, 0)))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "Player_Support_Bike_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1028(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("hauler2") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("phantom3"))
	{
		return 1;
	}
	return 0;
}

int func_1029(int iParam0)
{
	switch (iParam0)
	{
		case 759:
		case 764:
			return 1;
			break;
	}
	return 0;
}

int func_1030(int iParam0)
{
	switch (iParam0)
	{
		case 761:
		case 762:
		case 760:
		case 763:
			return 1;
			break;
	}
	return 0;
}

int func_1031(int iParam0)
{
	switch (iParam0)
	{
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 793:
		case 792:
		case 771:
		case 772:
			return 1;
			break;
	}
	return 0;
}

int func_1032(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_9(bParam0, 1, 1))
	{
		iVar1 = unk_0x56E414973C2A8C0E(bParam0);
		if (unk_0x12623527E5B8AB7C(iVar1, 2))
		{
			return 1;
		}
		if (unk_0x7F420695E3F776FB(iVar1, 1))
		{
			if (!unk_0x7F420695E3F776FB(iVar1, 0))
			{
				return 1;
			}
		}
		else
		{
			iVar0 = unk_0x31945A289F1359A1(iVar1);
			if (unk_0xFC8BFE4B41177C22(iVar0))
			{
				return 1;
			}
		}
		if (unk_0x9D6DF8F3584AAC2B(iVar1))
		{
			return 1;
		}
		if (unk_0x9B5C1660CCDF7189(iVar1, joaat("script_task_enter_vehicle")) == 1 || unk_0x9B5C1660CCDF7189(iVar1, joaat("script_task_enter_vehicle")) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1033(int iParam0)
{
	switch (iParam0)
	{
		case 757:
		case 763:
		case 771:
		case 772:
		case 789:
		case 790:
		case 791:
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
		case 879:
		case 880:
		case 881:
		case 884:
		case 885:
		case 886:
		case 887:
		case 888:
		case 889:
		case 890:
		case 891:
		case 892:
		case 893:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
		case 904:
		case 907:
		case 908:
		case 909:
		case 910:
		case 911:
		case 912:
		case 913:
		case 914:
		case 915:
		case 916:
		case 917:
		case 918:
		case 919:
		case 920:
		case 921:
		case 922:
		case 923:
		case 924:
		case 925:
		case 926:
		case 927:
		case 928:
		case 929:
			return 0;
			break;
	}
	return 1;
}

float func_1034(int iParam0)
{
	switch (iParam0)
	{
		case 910:
		case 911:
		case 912:
		case 913:
		case 914:
		case 915:
		case 916:
		case 917:
		case 918:
		case 919:
		case 920:
		case 921:
		case 922:
		case 923:
		case 924:
		case 925:
		case 926:
		case 927:
		case 928:
		case 929:
			return 3f;
			break;
	}
	return 0f;
}

int func_1035(int iParam0)
{
	switch (iParam0)
	{
		case 761:
		case 762:
			return 20;
			break;
		
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
			return 27;
			break;
		
		default:
			return 28;
			break;
	}
	return 28;
}

float func_1036(int iParam0)
{
	switch (iParam0)
	{
		case 748:
		case 749:
		case 747:
		case 750:
			return 5f;
			break;
		
		case 796:
		case 800:
		case 802:
		case 798:
			return 2.5f;
			break;
		
		case 770:
			return 7f;
			break;
	}
	return 10f;
}

float func_1037(int iParam0)
{
	switch (iParam0)
	{
		case 795:
		case 799:
		case 801:
		case 797:
			return 0.5f;
			break;
	}
	return 5f;
}

char* func_1038(int iParam0)
{
	return "GB_DELIVERY";
}

bool func_1039(int iParam0)
{
	return (iParam0 >= 747 && iParam0 <= 930);
}

struct<28> func_1040(int iParam0)
{
	struct<28> Var0;
	
	Var0.f_20 = 1091567616;
	if (func_1047(iParam0))
	{
		StringCopy(&(Var0.f_8), "GB_DELIVERY", 32);
		Var0.f_18 = 198588;
		Var0.f_19 = 198572;
		Var0.f_3 = 5f;
		Var0.f_7 = 10f;
		Var0.f_17 = 26;
		func_1042(iParam0, &Var0);
		unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 13);
		if (iParam0 == 732)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 3);
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 5);
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 9);
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 8);
			Var0.f_21 = { 717.713f, 122.6333f, 78.75452f };
			Var0.f_24 = { 663.8443f, 142.1459f, 122.0014f };
			Var0.f_27 = 60f;
			Var0.f_7 = 5f;
		}
		else if (func_1041(iParam0, 1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 11);
		}
		else if (iParam0 == 733)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 9);
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 15);
			Var0.f_21 = { 1026.913f, -271.2461f, 49.62276f };
			Var0.f_24 = { 1036.819f, -267.2213f, 53.21184f };
			Var0.f_27 = 5.3125f;
		}
	}
	return Var0;
}

bool func_1041(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return (iParam0 >= 714 && iParam0 <= 731);
	}
	return (iParam0 >= 714 && iParam0 <= 719);
}

void func_1042(int iParam0, var uParam1)
{
	uParam1->f_4 = { func_1043(iParam0) };
	if (func_1041(iParam0, 0))
	{
		switch (iParam0)
		{
			case 714:
				*uParam1 = { -237.12f, 6228.755f, 29.5005f };
				break;
			
			case 715:
				*uParam1 = { 1710.83f, 4760.13f, 40.0504f };
				break;
			
			case 716:
				*uParam1 = { -105.19f, -1778.3f, 27.51f };
				break;
			
			case 717:
				*uParam1 = { -617.7421f, 285.8363f, 79.6871f };
				break;
			
			case 718:
				*uParam1 = { -1287.114f, -278.0045f, 36.5935f };
				break;
			
			case 719:
				*uParam1 = { 726.7626f, -822.4685f, 22.8603f };
				break;
		}
	}
	else
	{
		*uParam1 = { uParam1->f_4 };
	}
}

Vector3 func_1043(int iParam0)
{
	switch (iParam0)
	{
		case 714:
			return -239.6946f, 6231.41f, 30.5003f;
		
		case 715:
			return 1710.63f, 4755.55f, 40.97f;
		
		case 716:
			return -102.8687f, -1775.582f, 28.5124f;
		
		case 717:
			return -618.0107f, 282.3917f, 80.6787f;
		
		case 718:
			return -1288.845f, -275.3818f, 37.7781f;
		
		case 719:
			return 722.7928f, -822.6534f, 23.7156f;
		
		case 720:
			return -249.71f, 6222.79f, 30.49f;
		
		case 721:
			return 1688.938f, 4770.203f, 40.9215f;
		
		case 722:
			return -113.4865f, -1763.319f, 28.7557f;
		
		case 723:
			return -592.94f, 270.24f, 81.17f;
		
		case 724:
			return -1268.06f, -294.23f, 36.4f;
		
		case 725:
			return 751.33f, -840.9f, 24.62f;
		
		case 726:
			return -248.9815f, 6226.736f, 30.4544f;
		
		case 727:
			return 1712.496f, 4799.796f, 40.8101f;
		
		case 728:
			return -31.0365f, -1754.201f, 28.2347f;
		
		case 729:
			return -596.077f, 332.5039f, 84.1166f;
		
		case 730:
			return -1273.903f, -284.471f, 36.9529f;
		
		case 731:
			return 737.4631f, -841.6989f, 24.0383f;
		
		case 732:
			return 696.304f, 129.601f, 79.755f;
		
		case 733:
			return 1031.95f, -269.04f, 49.8512f;
		
		case 734:
			return 1742.125f, 3275.608f, 40.132f;
		
		case 735:
			return -161.4011f, -164.9205f, 42.6216f;
		
		case 736:
			return -1125.329f, 4946.633f, 219.0566f;
		
		case 742:
			return 977.4358f, 17.8086f, 79.9903f;
		
		case 743:
			return 992.6253f, 75.9125f, 79.9906f;
		
		case 744:
			return 987.3862f, 79.2873f, 79.9906f;
		
		case 745:
			return 974.0888f, 13.0281f, 80.041f;
		
		case 746:
			return 980.2654f, 22.3152f, 79.9902f;
		
		case 737:
			return 1964.725f, 3755.312f, 31.2405f;
		
		case 738:
			return -23.473f, 6456.655f, 30.4236f;
		
		case 739:
			return -1325.822f, -1149.726f, 3.398f;
		
		case 740:
			return 192.6347f, -153.5202f, 55.9168f;
		
		case 741:
			return 1066.743f, -2384.296f, 29.461f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_1044(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam2 = 1;
	*uParam3 = 1;
}

int func_1045(int iParam0)
{
	int iVar0;
	
	if ((((((iParam0 == 735 || iParam0 == 736) || iParam0 == 742) || iParam0 == 743) || iParam0 == 744) || iParam0 == 745) || iParam0 == 746)
	{
		return 0;
	}
	if (func_1041(iParam0, 1))
	{
		if (func_703(unk_0x4A8C381C258A124D()) && !func_1032(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				if (func_703(iVar0) && func_1046(iParam0, iVar0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_1046(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam1);
	if (unk_0x20974C28142EB370(iParam1, &iVar1))
	{
		if (func_703(iVar1))
		{
			if (unk_0x4B423FAA24E8ABF0(iVar1) == joaat("trailersmall2"))
			{
				return 0;
			}
		}
	}
	if (((((((iVar0 == joaat("thruster") || iVar0 == joaat("chernobog")) || iVar0 == joaat("khanjali")) || iVar0 == joaat("riot2")) || iVar0 == joaat("volatol")) || iVar0 == joaat("trailersmall2")) || iVar0 == joaat("terbyte")) || ((!unk_0xD3CE8D1E6564B011(iVar0) && !unk_0x9910CD0D8626AA28(iVar0)) && !unk_0x78B050AFBA6D1517(iVar0)))
	{
		return 0;
	}
	if (func_1028(iParam1))
	{
		return 0;
	}
	if (func_1023(iParam1))
	{
		return 0;
	}
	if ((func_1022(iParam1, 1) || func_1021(iParam1)) || func_1020(iParam1, 1))
	{
		return iParam2;
	}
	if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
	{
		if (unk_0xD130E7CDEE903624(iParam1, "MPBitset"))
		{
			iVar2 = unk_0xE2F6FE9B61232165(iParam1, "MPBitset");
			if (BitTest(iVar2, 17))
			{
				return iParam2;
			}
		}
	}
	return 1;
}

bool func_1047(int iParam0)
{
	return (iParam0 >= 714 && iParam0 <= 746);
}

struct<28> func_1048(int iParam0)
{
	struct<28> Var0;
	
	Var0.f_20 = 1091567616;
	if (func_1053(iParam0))
	{
		StringCopy(&(Var0.f_8), "GB_DELIVERY", 32);
		Var0.f_18 = 199720;
		Var0.f_19 = 199704;
		Var0.f_3 = 5f;
		Var0.f_7 = 10f;
		Var0.f_17 = 25;
		func_1049(iParam0, &Var0);
		if (iParam0 == 710)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 3);
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 5);
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 8);
			Var0.f_21 = { 939.5024f, 141.9415f, 84.5562f };
			Var0.f_24 = { 955.4819f, 160.9863f, 103.5805f };
			Var0.f_27 = 16.6875f;
			Var0.f_7 = 5f;
		}
		if (iParam0 == 711)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 3);
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 9);
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 5);
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 8);
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), true);
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 14);
			Var0.f_21 = { 951.1802f, 19.74426f, 120.3121f };
			Var0.f_24 = { 977.124f, 62.42398f, 159.2259f };
			Var0.f_27 = 31f;
		}
	}
	return Var0;
}

void func_1049(int iParam0, var uParam1)
{
	uParam1->f_4 = { func_1050(iParam0) };
	*uParam1 = { uParam1->f_4 };
}

Vector3 func_1050(int iParam0)
{
	switch (iParam0)
	{
		case 704:
			return 918.5922f, 50.5265f, 79.7648f;
		
		case 705:
			return 915.2054f, 52.5925f, 79.7648f;
		
		case 710:
			return 939.7278f, 145.0655f, 79.8304f;
		
		case 711:
			return 965.8581f, 42.3771f, 123.1199f;
		
		case 712:
			return 976.8382f, -69.818f, 73.9592f;
		
		case 713:
			return 935.5134f, 0.3663f, 77.7649f;
		
		case 706:
			return -523.206f, -1720.587f, 18.225f;
		
		case 707:
			return 273.709f, -2223.898f, 7.257f;
		
		case 708:
			return -1068.403f, 4912.794f, 211.851f;
		
		case 709:
			return -1584.666f, 2695.359f, 3.118f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_1051(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam2 = 1;
	*uParam3 = 1;
}

int func_1052(int iParam0)
{
	switch (iParam0)
	{
		case 704:
		case 705:
		case 713:
		case 712:
		case 711:
			return 1;
		
		default:
	}
	return 0;
}

bool func_1053(int iParam0)
{
	return (iParam0 >= 704 && iParam0 <= 713);
}

struct<28> func_1054(int iParam0)
{
	struct<28> Var0;
	
	Var0.f_20 = 1091567616;
	if (func_1063(iParam0))
	{
		StringCopy(&(Var0.f_8), "GB_DELIVERY", 32);
		Var0.f_18 = 200511;
		Var0.f_19 = 200495;
		Var0.f_3 = 5f;
		Var0.f_7 = 10f;
		Var0.f_17 = 23;
		Var0.f_17 = 24;
		unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 10);
		unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 11);
		func_1056(iParam0, &Var0);
		if (func_1055(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 12);
		}
		else
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 13);
		}
	}
	return Var0;
}

bool func_1055(int iParam0)
{
	return (iParam0 >= 694 && iParam0 <= 703);
}

void func_1056(int iParam0, var uParam1)
{
	uParam1->f_4 = { func_1057(iParam0) };
	*uParam1 = { uParam1->f_4 };
}

Vector3 func_1057(int iParam0)
{
	switch (iParam0)
	{
		case 684:
			return 729.8204f, -1291.16f, 25.2842f;
		
		case 685:
			return 333.4431f, -997.5615f, 28.1407f;
		
		case 686:
			return -164.0211f, -1296.221f, 30.0465f;
		
		case 687:
			return -22.2784f, 216.376f, 105.5677f;
		
		case 688:
			return 909.1575f, -2093.444f, 29.494f;
		
		case 689:
			return -673.6822f, -2391.013f, 12.8934f;
		
		case 690:
			return 227.6459f, -3133.413f, 4.7903f;
		
		case 691:
			return 381.5496f, 227.2289f, 102.0405f;
		
		case 692:
			return -1232.486f, -691.7514f, 22.6646f;
		
		case 693:
			return -1172.481f, -1177.258f, 4.6235f;
		
		case 694:
			return 873.6871f, -2194.648f, 29.5193f;
		
		case 695:
			return -1276.696f, -1356.844f, 3.3046f;
		
		case 696:
			return 21.1183f, 82.7228f, 73.6689f;
		
		case 697:
			return -322.2558f, -1400.917f, 30.7681f;
		
		case 698:
			return -1421.89f, -240.855f, 45.3791f;
		
		case 699:
			return 917.248f, 3567.433f, 32.7733f;
		
		case 700:
			return -107.0892f, 2795.575f, 52.2975f;
		
		case 701:
			return -230.9694f, 6350.816f, 31.426f;
		
		case 702:
			return 1374.142f, -2217.435f, 59.6957f;
		
		case 703:
			return 2508.885f, 4215.857f, 38.9267f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_1058(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam2 = 1;
	*uParam3 = 1;
}

int func_1059(int iParam0)
{
	int iVar0;
	
	if (func_1055(iParam0) || func_1062(iParam0))
	{
		if (func_703(unk_0x4A8C381C258A124D()) && !func_1032(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				if (func_703(iVar0) && func_1060(iParam0, iVar0, func_1062(iParam0)))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1060(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam1);
	if (unk_0x20974C28142EB370(iParam1, &iVar1))
	{
		if (func_703(iVar1))
		{
			if (unk_0x4B423FAA24E8ABF0(iVar1) == joaat("trailersmall2"))
			{
				return 0;
			}
		}
	}
	if (((((((((iVar0 == joaat("thruster") || iVar0 == joaat("chernobog")) || iVar0 == joaat("khanjali")) || iVar0 == joaat("riot2")) || iVar0 == joaat("volatol")) || iVar0 == joaat("trailersmall2")) || iVar0 == joaat("bus")) || iVar0 == joaat("airbus")) || (iVar0 == joaat("terbyte") && func_1061(iParam0))) || ((!unk_0xD3CE8D1E6564B011(iVar0) && !unk_0x9910CD0D8626AA28(iVar0)) && !unk_0x78B050AFBA6D1517(iVar0)))
	{
		return 0;
	}
	if (func_1028(iParam1))
	{
		return 0;
	}
	if (func_1023(iParam1))
	{
		return 0;
	}
	if ((func_1022(iParam1, 1) || func_1021(iParam1)) || func_1020(iParam1, 1))
	{
		return uParam2;
	}
	if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
	{
		if (unk_0xD130E7CDEE903624(iParam1, "MPBitset"))
		{
			iVar2 = unk_0xE2F6FE9B61232165(iParam1, "MPBitset");
			if (BitTest(iVar2, 17))
			{
				return uParam2;
			}
		}
	}
	return 1;
}

int func_1061(int iParam0)
{
	if ((iParam0 == 690 || iParam0 == 691) || iParam0 == 687)
	{
		return 1;
	}
	return 0;
}

bool func_1062(int iParam0)
{
	return (iParam0 >= 684 && iParam0 <= 693);
}

bool func_1063(int iParam0)
{
	return (iParam0 >= 684 && iParam0 <= 703);
}

struct<28> func_1064(int iParam0)
{
	struct<28> Var0;
	
	Var0.f_20 = 1091567616;
	if (func_1069(&iParam0))
	{
		StringCopy(&(Var0.f_8), "GB_DELIVERY", 32);
		Var0.f_18 = 202018;
		Var0.f_19 = 201977;
		Var0.f_3 = 5f;
		Var0.f_7 = 10f;
		Var0.f_17 = 22;
		func_1065(iParam0, &Var0);
		unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 9);
	}
	return Var0;
}

void func_1065(int iParam0, var uParam1)
{
	uParam1->f_4 = { func_1066(iParam0) };
	*uParam1 = { uParam1->f_4 };
	switch (iParam0)
	{
		case 675:
			uParam1->f_21 = { 1273.677f, 2835.732f, 44.84742f };
			uParam1->f_24 = { 1264.765f, 2828.705f, 55.94585f };
			uParam1->f_27 = 12.4375f;
			break;
		
		case 676:
			uParam1->f_21 = { 32.71862f, 2620.037f, 81.45343f };
			uParam1->f_24 = { 41.51775f, 2625.42f, 91.57298f };
			uParam1->f_27 = 12.4375f;
			break;
		
		case 677:
			uParam1->f_21 = { 2757.371f, 3908.717f, 41.28543f };
			uParam1->f_24 = { 2750.301f, 3902.29f, 52.10129f };
			uParam1->f_27 = 12.4375f;
			break;
		
		case 678:
			uParam1->f_21 = { 3392.239f, 5508.464f, 21.73143f };
			uParam1->f_24 = { 3382.523f, 5510.846f, 31.62641f };
			uParam1->f_27 = 12.4375f;
			break;
		
		case 679:
			uParam1->f_21 = { 17.18369f, 6826.096f, 11.27043f };
			uParam1->f_24 = { 26.70887f, 6822.46f, 22.73343f };
			uParam1->f_27 = 12.4375f;
			break;
		
		case 680:
			uParam1->f_21 = { -2229.61f, 2401.256f, 7.634426f };
			uParam1->f_24 = { -2229.246f, 2390.694f, 20.95616f };
			uParam1->f_27 = 12.4375f;
			break;
		
		case 681:
			uParam1->f_21 = { -3.066728f, 3343.304f, 38.14693f };
			uParam1->f_24 = { -0.032484f, 3354.439f, 45.36308f };
			uParam1->f_27 = 12.4375f;
			break;
		
		case 682:
			uParam1->f_21 = { 2084.432f, 1759.63f, 99.96742f };
			uParam1->f_24 = { 2091.107f, 1765.938f, 110.7136f };
			uParam1->f_27 = 12.4375f;
			break;
		
		case 683:
			uParam1->f_21 = { 1866.002f, 271.215f, 159.7584f };
			uParam1->f_24 = { 1860.504f, 262.6771f, 170.922f };
			uParam1->f_27 = 12.4375f;
			break;
	}
}

Vector3 func_1066(int iParam0)
{
	switch (iParam0)
	{
		case 675:
			return 1272.357f, 2834.424f, 47.9951f;
		
		case 676:
			return 35.1777f, 2621.545f, 84.4465f;
		
		case 677:
			return 2755.241f, 3906.798f, 44.2074f;
		
		case 678:
			return 3388.732f, 5509.329f, 24.78f;
		
		case 679:
			return 20.3048f, 6825.069f, 14.3348f;
		
		case 680:
			return -2229.332f, 2398.65f, 11.0724f;
		
		case 681:
			return -2.7877f, 3345.063f, 40.1563f;
		
		case 682:
			return 2086.75f, 1761.963f, 102.9603f;
		
		case 683:
			return 1864.349f, 268.5328f, 162.9432f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_1067(var uParam0, int iParam1, var uParam2, var uParam3)
{
	if (iParam1 == 13)
	{
		*uParam2 = 0;
		*uParam3 = 1;
	}
	else if (iParam1 == 14)
	{
		*uParam2 = 1;
		*uParam3 = 1;
	}
}

int func_1068(var uParam0)
{
	return 1;
}

bool func_1069(var uParam0)
{
	return (*uParam0 >= 675 && *uParam0 <= 683);
}

struct<28> func_1070(int iParam0)
{
	struct<28> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_20 = 1091567616;
	iVar1 = func_969(&iParam0);
	if (func_970(&iParam0))
	{
		StringCopy(&(Var0.f_8), "GB_DELIVERY", 32);
		Var0.f_18 = 229121;
		Var0.f_19 = 229006;
		Var0.f_3 = 2f;
		Var0.f_7 = 10f;
		if (func_980(&iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 3);
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 5);
			iVar2 = func_1083(iParam0);
			Var0 = { func_1082(iVar2) };
			Var0.f_4 = { func_1081(iVar2) };
			func_1080(iVar2, &(Var0.f_21), &(Var0.f_24), &(Var0.f_27));
			Var0.f_17 = 20;
		}
		else
		{
			switch (iVar1)
			{
				case 23:
					Var0.f_17 = 11;
					func_1079(iParam0, &Var0);
					break;
				
				case 20:
					Var0.f_17 = 12;
					func_1078(iParam0, &Var0);
					Var0.f_7 = 15f;
					break;
				
				case 15:
					Var0.f_17 = 13;
					func_1077(iParam0, &Var0);
					Var0.f_7 = 7.5f;
					break;
				
				case 24:
					unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_16), 7);
					Var0.f_17 = 14;
					func_1076(iParam0, &Var0);
					break;
				
				case 21:
					Var0.f_17 = 15;
					func_1075(iParam0, &Var0);
					break;
				
				case 22:
					Var0.f_17 = 16;
					func_1074(iParam0, &Var0);
					break;
				
				case 16:
					Var0.f_17 = 17;
					func_1073(iParam0, &Var0);
					break;
				
				case 17:
					Var0.f_17 = 18;
					func_1072(iParam0, &Var0);
					break;
				
				case 25:
					Var0.f_17 = 19;
					func_1071(iParam0, &Var0);
					break;
				}
			}
	}
	return Var0;
}

void func_1071(int iParam0, var uParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 3);
	switch (iParam0)
	{
		case 645:
			uParam1->f_4 = { -1009.399f, -1510.902f, 10.787f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1009.357f, -1510.773f, 30.78681f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 646:
			uParam1->f_4 = { 488.149f, 193.576f, 110.521f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 488.3388f, 193.4493f, 130.521f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 647:
			uParam1->f_4 = { 1136.636f, -1545.09f, 47.145f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1136.649f, -1545.196f, 67.14507f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 648:
			uParam1->f_4 = { 287.184f, -2430.126f, 7.042f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 287.0954f, -2430.258f, 27.04158f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 649:
			uParam1->f_4 = { -1273.492f, 613.795f, 138.303f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1273.409f, 613.6357f, 158.3027f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 650:
			uParam1->f_4 = { 1152.29f, -411.709f, 73.447f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1152.219f, -411.7438f, 93.4471f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 651:
			uParam1->f_4 = { 154.71f, 1154.905f, 225.794f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 154.7392f, 1154.619f, 245.7941f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 652:
			uParam1->f_4 = { -3102.653f, 405.02f, 15.265f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -3102.914f, 404.9397f, 35.26507f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 653:
			uParam1->f_4 = { -1568.817f, -416.371f, 58.755f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1568.9f, -416.2934f, 78.75464f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 654:
			uParam1->f_4 = { -697.74f, 167.438f, 72.242f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -697.7376f, 167.3414f, 92.24247f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 655:
			uParam1->f_4 = { -707.304f, -896.965f, 29.343f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -707.3842f, -896.7987f, 49.34295f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 656:
			uParam1->f_4 = { 129.193f, -1504.046f, 35.35f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 129.2808f, -1504.016f, 55.35003f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 657:
			uParam1->f_4 = { 705.942f, -898.681f, 31.162f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 706.1223f, -898.7618f, 51.16165f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 658:
			uParam1->f_4 = { -54.868f, -320.534f, 55.571f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -54.92479f, -320.5946f, 75.57126f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 659:
			uParam1->f_4 = { 960.6f, -2310.002f, 38.836f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 960.7292f, -2310.002f, 58.83584f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 660:
			uParam1->f_4 = { 2475.58f, 3442.302f, 52.942f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2475.584f, 3442.382f, 74.15777f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 661:
			uParam1->f_4 = { -71.699f, 6380.39f, 34.004f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -71.58961f, 6380.449f, 55.21976f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 662:
			uParam1->f_4 = { 2576.59f, 4648.265f, 35.655f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2576.537f, 4648.233f, 56.87077f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 663:
			uParam1->f_4 = { 1383.088f, 2164.901f, 100.221f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1383.053f, 2164.877f, 121.4368f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 664:
			uParam1->f_4 = { -52.204f, 2874.061f, 57.88f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -52.19807f, 2874.119f, 79.09576f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 665:
			uParam1->f_4 = { -2606.045f, 1874.706f, 166.32f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -2605.907f, 1874.733f, 187.5358f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 666:
			uParam1->f_4 = { 2232.609f, 5612.76f, 57.479f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2232.607f, 5612.829f, 78.69922f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 667:
			uParam1->f_4 = { -98.906f, 1909.688f, 196.053f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -98.8879f, 1909.77f, 217.2665f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 668:
			uParam1->f_4 = { 1338.384f, 4353.149f, 46.215f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1338.347f, 4353.256f, 67.43076f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 669:
			uParam1->f_4 = { -533.217f, 4196.721f, 191.991f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -533.3099f, 4196.712f, 213.206f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 670:
			uParam1->f_4 = { -1514.534f, 1524.422f, 117.112f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1514.498f, 1524.455f, 138.3278f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 671:
			uParam1->f_4 = { 1224.78f, 2735.091f, 41.089f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1224.727f, 2735.13f, 62.30476f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 672:
			uParam1->f_4 = { 1430.944f, 6354.661f, 27.35f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1430.843f, 6354.548f, 48.56577f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 673:
			uParam1->f_4 = { -746.832f, 5579.238f, 40.596f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -746.8964f, 5579.122f, 61.8147f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
		
		case 674:
			uParam1->f_4 = { 1950.596f, 3831.224f, 38.394f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1950.513f, 3831.26f, 59.60977f };
			uParam1->f_24 = { 45f, 45f, 100f };
			uParam1->f_27 = 0f;
			break;
	}
}

void func_1072(int iParam0, var uParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 3);
	switch (iParam0)
	{
		case 615:
			uParam1->f_4 = { -1129.887f, 4908.95f, 218.176f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1129.952f, 4908.959f, 367.2639f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 616:
			uParam1->f_4 = { -1278.679f, 4397.949f, 8.797f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1278.8f, 4398.199f, 157.8854f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 617:
			uParam1->f_4 = { 2472.119f, -383.714f, 108.633f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2472.227f, -383.7167f, 257.6341f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 618:
			uParam1->f_4 = { 3704.91f, 3792.808f, 10.344f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 3704.833f, 3792.772f, 159.3807f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 619:
			uParam1->f_4 = { 501.491f, 5604.684f, 796.915f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 501.4285f, 5604.606f, 945.9148f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 620:
			uParam1->f_4 = { -324.364f, -1968.709f, 65.994f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -324.3981f, -1968.649f, 214.9936f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 621:
			uParam1->f_4 = { 1352.153f, 4355.032f, 42.72f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1352.194f, 4355.176f, 191.7198f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 622:
			uParam1->f_4 = { -188.822f, -176.633f, 84.225f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -188.8102f, -176.5466f, 233.2247f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 623:
			uParam1->f_4 = { 2327.591f, -2106.102f, 4.042f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2327.514f, -2106.169f, 153.0316f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 624:
			uParam1->f_4 = { -930.626f, 6157.1f, 3.935f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -930.6824f, 6157.203f, 152.9289f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 625:
			uParam1->f_4 = { 685.825f, -744.68f, 33.968f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 685.7804f, -744.5552f, 183.0251f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 626:
			uParam1->f_4 = { -3222.702f, 835.279f, 1.389f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -3222.962f, 835.3319f, 150.3925f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 627:
			uParam1->f_4 = { 3722.393f, 1525.736f, 0.188f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 3731.082f, 1518.727f, 154.9921f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 628:
			uParam1->f_4 = { 4343.171f, 5407.742f, 0.563f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 4349.43f, 5413.023f, 153.4886f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 629:
			uParam1->f_4 = { 1493.387f, 7343.342f, -0.563f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1495.309f, 7349.077f, 153.3537f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 630:
			uParam1->f_4 = { 1108.552f, -3865.831f, -0.145f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1108.74f, -3865.597f, 149.2532f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 631:
			uParam1->f_4 = { -2794.206f, -1340.128f, -0.857f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -2794.711f, -1341.127f, 150.9005f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 632:
			uParam1->f_4 = { -3753.333f, 2421.297f, 0.134f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -3753.042f, 2421.227f, 151.5792f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 633:
			uParam1->f_4 = { 2820.673f, 5970.349f, 351.4f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2819.888f, 5971.666f, 498.5311f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 634:
			uParam1->f_4 = { -1207.282f, 508.525f, 104.699f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1208.541f, 508.3144f, 251.8198f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 635:
			uParam1->f_4 = { 1458.088f, 1113.121f, 115.213f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1458.243f, 1111.971f, 262.334f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 636:
			uParam1->f_4 = { 2472.171f, 3423.729f, 50.713f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2472.185f, 3423.361f, 200.9512f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 637:
			uParam1->f_4 = { -57.098f, 1915.81f, 196.24f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -56.97901f, 1914.767f, 343.6823f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 638:
			uParam1->f_4 = { -1747.223f, 1991.318f, 118.105f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1748.072f, 1992.806f, 265.1205f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 639:
			uParam1->f_4 = { 2480.091f, 4951.536f, 45.872f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2480.827f, 4952.609f, 193.0078f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 640:
			uParam1->f_4 = { 306.207f, 6493.011f, 30.267f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 304.8512f, 6493.137f, 177.407f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 641:
			uParam1->f_4 = { 1184.253f, -2272.983f, 31.212f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1183.06f, -2273.078f, 178.3331f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 642:
			uParam1->f_4 = { 704.845f, 3122.848f, 44.728f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 704.9832f, 3121.729f, 191.8539f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 643:
			uParam1->f_4 = { 2213.413f, 1834.712f, 108.61f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2214.313f, 1835.36f, 255.7564f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 644:
			uParam1->f_4 = { 1087.726f, 9.947f, 81.59f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1087.425f, 8.9017f, 228.8473f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
	}
}

void func_1073(int iParam0, var uParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 3);
	switch (iParam0)
	{
		case 585:
			uParam1->f_4 = { -1410.13f, -993.289f, 18.38f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1410.102f, -993.2345f, 168.3805f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 586:
			uParam1->f_4 = { -71.169f, 807.415f, 226.25f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -71.13431f, 807.3287f, 376.2498f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 587:
			uParam1->f_4 = { -163.298f, -160.212f, 92.702f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -163.2319f, -160.0414f, 242.7024f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 588:
			uParam1->f_4 = { 78.731f, -1587.635f, 37.559f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 78.70574f, -1587.401f, 187.5587f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 589:
			uParam1->f_4 = { 1145.42f, -431.092f, 66.169f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1145.483f, -431.0724f, 216.1644f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 590:
			uParam1->f_4 = { -293.618f, 2798.6f, 58.476f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -293.5615f, 2798.718f, 208.46f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 591:
			uParam1->f_4 = { -2233.786f, 222.936f, 193.612f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -2234.008f, 223.1098f, 343.6117f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 592:
			uParam1->f_4 = { -211.003f, 6270.165f, 30.489f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -211.3024f, 6270.386f, 180.4893f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 593:
			uParam1->f_4 = { 501.306f, 5597.584f, 794.921f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 501.0702f, 5597.815f, 944.9088f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 594:
			uParam1->f_4 = { 2559.657f, 4288.563f, 40.59f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2559.551f, 4288.573f, 190.5903f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 595:
			uParam1->f_4 = { 2061.787f, 1876.157f, 92.147f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2061.821f, 1876.255f, 242.0961f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 596:
			uParam1->f_4 = { 1439.398f, -2123.25f, 55.758f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1439.464f, -2123.064f, 205.7386f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 597:
			uParam1->f_4 = { 536.555f, -2817.696f, 5.042f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 536.7016f, -2817.775f, 155.0421f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 598:
			uParam1->f_4 = { 1414.709f, 3812.396f, 31.285f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1414.681f, 3812.424f, 181.2858f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 599:
			uParam1->f_4 = { -1224.871f, 4451.718f, 29.123f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1224.649f, 4451.727f, 179.1271f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 600:
			uParam1->f_4 = { 1942.57f, 4992.075f, 41.622f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1942.686f, 4992.245f, 191.605f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 601:
			uParam1->f_4 = { -413.839f, 1570.649f, 354.009f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -413.7642f, 1570.749f, 504.0011f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 602:
			uParam1->f_4 = { -338.977f, -738.634f, 52.247f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -338.8257f, -739.0767f, 202.2467f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 603:
			uParam1->f_4 = { 2785.339f, -671.202f, 3.129f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2785.372f, -671.1329f, 153.1176f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 604:
			uParam1->f_4 = { 1597.853f, 6574.43f, 13.057f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1597.943f, 6574.682f, 163.0956f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 605:
			uParam1->f_4 = { -1788.953f, 5296.781f, 0.937f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1794.737f, 5302.018f, 156.0463f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 606:
			uParam1->f_4 = { 107.929f, 7556.932f, 0.375f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 102.0676f, 7561.387f, 154.2871f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 607:
			uParam1->f_4 = { 4348.7f, 4204.648f, 0.375f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 4356.096f, 4211.247f, 155.3993f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 608:
			uParam1->f_4 = { 3350.914f, 1271.106f, -0.375f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 3344.999f, 1277.366f, 155.4821f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 609:
			uParam1->f_4 = { 25.182f, -3666.942f, 1.312f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 32.64173f, -3669.944f, 155.9386f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 610:
			uParam1->f_4 = { -3462.223f, 1513.8f, 0.938f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -3470.701f, 1519.476f, 155.7491f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 611:
			uParam1->f_4 = { 3123.25f, 6765.652f, 0.563f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 3127.177f, 6770.722f, 155.9512f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 612:
			uParam1->f_4 = { 3666.045f, -1481.32f, 1.125f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 3664.705f, -1489.47f, 155.7794f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 613:
			uParam1->f_4 = { -2261.479f, -1643.832f, 0.375f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -2246.73f, -1646.456f, 155.4379f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 614:
			uParam1->f_4 = { 2602.581f, -2480.521f, 0.188f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2592.321f, -2481.46f, 156.4927f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
	}
}

void func_1074(int iParam0, var uParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 3);
	unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 6);
	switch (iParam0)
	{
		case 552:
			uParam1->f_4 = { -228.69f, -2445.7f, 19f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -228.4485f, -2445.367f, 16.0014f };
			uParam1->f_24 = { 25f, 25f, 11f };
			uParam1->f_27 = 0f;
			break;
		
		case 553:
			uParam1->f_4 = { 617.286f, -840.587f, 24.072f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 617.3474f, -840.5027f, 21.92936f };
			uParam1->f_24 = { 25f, 25f, 12f };
			uParam1->f_27 = 0f;
			break;
		
		case 554:
			uParam1->f_4 = { 2908.728f, 770.107f, 35.121f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2908.175f, 769.7324f, 33.86459f };
			uParam1->f_24 = { 25f, 25f, 13f };
			uParam1->f_27 = 0f;
			break;
		
		case 555:
			uParam1->f_4 = { -180.058f, 2863.623f, 37.528f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -180.1334f, 2863.537f, 37.45629f };
			uParam1->f_24 = { 25f, 25f, 7f };
			uParam1->f_27 = 0f;
			break;
		
		case 556:
			uParam1->f_4 = { -1414.163f, 2636.951f, 8.005f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1413.618f, 2636.493f, 7.268405f };
			uParam1->f_24 = { 25f, 25f, 8f };
			uParam1->f_27 = 0f;
			break;
		
		case 557:
			uParam1->f_4 = { -2665.451f, 2595.696f, 6.008f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -2665.38f, 2595.291f, 5.917889f };
			uParam1->f_24 = { 25f, 25f, 7f };
			uParam1->f_27 = 0f;
			break;
		
		case 558:
			uParam1->f_4 = { -1955.164f, 4579.263f, 16.212f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1954.963f, 4579.154f, 13.93992f };
			uParam1->f_24 = { 25f, 25f, 12f };
			uParam1->f_27 = 0f;
			break;
		
		case 559:
			uParam1->f_4 = { -509.557f, 4421.524f, 44.4f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -510.9154f, 4421.009f, 39.48253f };
			uParam1->f_24 = { 25f, 25f, 13f };
			uParam1->f_27 = 0f;
			break;
		
		case 560:
			uParam1->f_4 = { 806.034f, -2635.465f, 15.293f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 806.7756f, -2636.127f, 4.788301f };
			uParam1->f_24 = { 25f, 25f, 19f };
			uParam1->f_27 = 0f;
			break;
		
		case 561:
			uParam1->f_4 = { 2265.854f, 2036.017f, 142.197f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2265.952f, 2036.054f, 139.336f };
			uParam1->f_24 = { 25f, 25f, 11f };
			uParam1->f_27 = 0f;
			break;
		
		case 562:
			uParam1->f_4 = { 1659.95f, -1638.865f, 125.283f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1659.896f, -1638.868f, 122.2527f };
			uParam1->f_24 = { 25f, 25f, 11f };
			uParam1->f_27 = 0f;
			break;
		
		case 563:
			uParam1->f_4 = { -1850.943f, -334.037f, 70.237f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1850.938f, -334.012f, 67.08746f };
			uParam1->f_24 = { 25f, 25f, 11f };
			uParam1->f_27 = 0f;
			break;
		
		case 564:
			uParam1->f_4 = { 1976.216f, 717.231f, 178.613f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1976.275f, 717.4149f, 175.2972f };
			uParam1->f_24 = { 25f, 25f, 11f };
			uParam1->f_27 = 0f;
			break;
		
		case 565:
			uParam1->f_4 = { -24.043f, 668.69f, 211.003f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -23.55385f, 668.9614f, 202.5266f };
			uParam1->f_24 = { 25f, 25f, 18f };
			uParam1->f_27 = 0f;
			break;
		
		case 566:
			uParam1->f_4 = { -211.001f, -1800.318f, 14.044f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -210.7738f, -1800.152f, 11.55491f };
			uParam1->f_24 = { 25f, 25f, 12f };
			uParam1->f_27 = 0f;
			break;
		
		case 567:
			uParam1->f_4 = { 321.856f, 2214.761f, 87.77f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 321.9139f, 2214.874f, 85.22589f };
			uParam1->f_24 = { 25f, 25f, 11f };
			uParam1->f_27 = 0f;
			break;
		
		case 568:
			uParam1->f_4 = { 1973.514f, 5042.104f, 51.505f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1973.453f, 5042.029f, 49.96577f };
			uParam1->f_24 = { 25f, 25f, 10f };
			uParam1->f_27 = 0f;
			break;
		
		case 569:
			uParam1->f_4 = { 2025.132f, 2941.179f, 56.555f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2025.186f, 2941.275f, 55.59736f };
			uParam1->f_24 = { 25f, 25f, 9f };
			uParam1->f_27 = 0f;
			break;
		
		case 570:
			uParam1->f_4 = { 77.001f, 7075.894f, 13.25f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 76.95587f, 7075.936f, 10.97238f };
			uParam1->f_24 = { 25f, 25f, 10f };
			uParam1->f_27 = 0f;
			break;
		
		case 571:
			uParam1->f_4 = { 3857.717f, 4362.673f, 17.503f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 3857.716f, 4362.641f, 15.64045f };
			uParam1->f_24 = { 25f, 25f, 10f };
			uParam1->f_27 = 0f;
			break;
		
		case 572:
			uParam1->f_4 = { 2920.751f, 5314.043f, 109.404f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2920.73f, 5314.069f, 106.1341f };
			uParam1->f_24 = { 25f, 25f, 11f };
			uParam1->f_27 = 0f;
			break;
		
		case 573:
			uParam1->f_4 = { 201.446f, -725.152f, 60.002f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 201.3546f, -725.2289f, 57.07697f };
			uParam1->f_24 = { 25f, 25f, 11f };
			uParam1->f_27 = 0f;
			break;
		
		case 574:
			uParam1->f_4 = { 714.262f, 4115.009f, 45.006f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 714.308f, 4115.063f, 43.81426f };
			uParam1->f_24 = { 25f, 25f, 9f };
			uParam1->f_27 = 0f;
			break;
		
		case 575:
			uParam1->f_4 = { 1090.173f, 61.733f, 92.059f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1090.208f, 61.79512f, 89.89091f };
			uParam1->f_24 = { 25f, 25f, 10f };
			uParam1->f_27 = 0f;
			break;
		
		case 576:
			uParam1->f_4 = { -2823.096f, 1423.129f, 109.982f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -2823.114f, 1423.143f, 108.8084f };
			uParam1->f_24 = { 25f, 25f, 9f };
			uParam1->f_27 = 0f;
			break;
		
		case 577:
			uParam1->f_4 = { -1373.553f, 5352.695f, 14.957f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1373.512f, 5352.809f, 13.16294f };
			uParam1->f_24 = { 25f, 25f, 11f };
			uParam1->f_27 = 0f;
			break;
		
		case 578:
			uParam1->f_4 = { -1350.463f, -1434.643f, 17.118f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1350.43f, -1434.647f, 14.32419f };
			uParam1->f_24 = { 25f, 25f, 11f };
			uParam1->f_27 = 0f;
			break;
		
		case 579:
			uParam1->f_4 = { 2471.126f, 3763.668f, 55.025f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2471.111f, 3763.623f, 52.04755f };
			uParam1->f_24 = { 25f, 25f, 11.5f };
			uParam1->f_27 = 0f;
			break;
		
		case 580:
			uParam1->f_4 = { -967.126f, -974.166f, 15.002f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -967.1616f, -974.1507f, 12.86518f };
			uParam1->f_24 = { 25f, 25f, 10f };
			uParam1->f_27 = 0f;
			break;
		
		case 581:
			uParam1->f_4 = { 626.714f, 623.564f, 142.166f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 626.7075f, 623.6097f, 138.911f };
			uParam1->f_24 = { 25f, 25f, 11f };
			uParam1->f_27 = 0f;
			break;
		
		case 582:
			uParam1->f_4 = { -1038.206f, 929.886f, 182.009f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1038.277f, 929.9075f, 178.7169f };
			uParam1->f_24 = { 25f, 25f, 11f };
			uParam1->f_27 = 0f;
			break;
		
		case 583:
			uParam1->f_4 = { -1186.123f, 38.309f, 65f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1186.143f, 38.23398f, 62.72668f };
			uParam1->f_24 = { 25f, 25f, 11f };
			uParam1->f_27 = 0f;
			break;
		
		case 584:
			uParam1->f_4 = { 1441.211f, 6346.602f, 37.018f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1441.137f, 6346.373f, 33.95491f };
			uParam1->f_24 = { 25f, 25f, 11f };
			uParam1->f_27 = 0f;
			break;
	}
}

void func_1075(int iParam0, var uParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 3);
	switch (iParam0)
	{
		case 522:
			uParam1->f_4 = { 1628.253f, -1885.011f, 104.244f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1628.259f, -1885.124f, 249.2359f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 523:
			uParam1->f_4 = { 2663.699f, 1395.744f, 23.461f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2663.73f, 1395.77f, 168.4647f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 524:
			uParam1->f_4 = { -681.022f, 5798.669f, 16.331f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -680.9479f, 5798.407f, 161.331f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 525:
			uParam1->f_4 = { -1046.675f, -997.832f, 8.618f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1046.516f, -997.7623f, 153.6183f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 526:
			uParam1->f_4 = { 2361.193f, 2563.87f, 50.653f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2361.377f, 2563.77f, 195.6504f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 527:
			uParam1->f_4 = { 2228.439f, 5595.11f, 53.047f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2228.511f, 5594.973f, 198.0431f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 528:
			uParam1->f_4 = { 1041.293f, -2980.383f, 4.901f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1041.385f, -2980.493f, 149.901f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 529:
			uParam1->f_4 = { -2975.953f, 728.386f, 28.34f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -2975.98f, 728.3309f, 173.3399f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 530:
			uParam1->f_4 = { 1564.093f, 3572.587f, 32.745f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1564.143f, 3572.576f, 177.7401f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 531:
			uParam1->f_4 = { -1376.622f, -1398.935f, 4.628f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1376.795f, -1398.847f, 150.8438f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 532:
			uParam1->f_4 = { -1833.113f, 2154.464f, 114.646f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1833.026f, 2154.511f, 260.8618f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 533:
			uParam1->f_4 = { 1730.572f, 4856.538f, 39.628f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1730.67f, 4856.528f, 185.8422f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 534:
			uParam1->f_4 = { 418.192f, -1331.322f, 45.054f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 418.2052f, -1331.248f, 191.2698f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 535:
			uParam1->f_4 = { 248.522f, 3107.336f, 44.924f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 248.511f, 3107.332f, 190.9334f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 536:
			uParam1->f_4 = { 3294.076f, 5188.679f, 17.416f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 3294.17f, 5188.587f, 163.4254f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 537:
			uParam1->f_4 = { -987.05f, 4397.283f, 14.945f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -986.8815f, 4396.998f, 159.8712f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 538:
			uParam1->f_4 = { 2702.994f, 3503.466f, 60.526f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2703.048f, 3503.433f, 205.5258f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 539:
			uParam1->f_4 = { 985.286f, -2244.75f, 29.557f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 985.3023f, -2244.744f, 174.5568f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 540:
			uParam1->f_4 = { 2257.649f, 5157.199f, 56.825f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2257.498f, 5157.228f, 201.8318f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 541:
			uParam1->f_4 = { -1057.081f, 834.838f, 165.729f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1057.117f, 834.9001f, 310.7293f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 542:
			uParam1->f_4 = { 473.819f, -2589.012f, 13.461f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 473.68f, -2588.864f, 158.461f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 543:
			uParam1->f_4 = { 69.555f, 6526.386f, 30.576f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 69.5831f, 6526.563f, 176.7918f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 544:
			uParam1->f_4 = { 1390.892f, 2172.039f, 100.532f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1390.97f, 2171.999f, 246.7478f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 545:
			uParam1->f_4 = { -238.29f, -1530.307f, 30.486f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -238.3365f, -1530.406f, 176.7018f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 546:
			uParam1->f_4 = { 1350.858f, 6372.605f, 32.21f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1350.847f, 6372.572f, 178.4258f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 547:
			uParam1->f_4 = { -289.799f, 2526.061f, 73.613f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -289.8188f, 2526.115f, 219.8288f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 548:
			uParam1->f_4 = { 384.79f, -1798.908f, 32.015f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 384.7624f, -1798.774f, 178.2308f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 549:
			uParam1->f_4 = { 1300.635f, 6611.277f, 1.215f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1300.758f, 6611.332f, 147.4308f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 550:
			uParam1->f_4 = { 2688.698f, 2878f, 35.041f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2688.731f, 2878.051f, 181.2568f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
		
		case 551:
			uParam1->f_4 = { -482.302f, -428.943f, 56.24f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -482.3047f, -428.8116f, 202.4558f };
			uParam1->f_24 = { 80f, 80f, 300f };
			uParam1->f_27 = 0f;
			break;
	}
}

void func_1076(int iParam0, var uParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 3);
	switch (iParam0)
	{
		case 492:
			uParam1->f_4 = { 1349.434f, -2211.201f, 59.185f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1349.434f, -2211.201f, 59.185f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 493:
			uParam1->f_4 = { 244.666f, -3086.762f, 4.634f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 244.666f, -3086.762f, 4.634f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 494:
			uParam1->f_4 = { 374.023f, -1845.642f, 26.707f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 374.023f, -1845.642f, 26.707f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 495:
			uParam1->f_4 = { 2566.534f, -678.942f, 53.169f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2566.534f, -678.942f, 53.169f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 496:
			uParam1->f_4 = { 1147.377f, -1479.249f, 33.685f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1147.377f, -1479.249f, 33.685f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 497:
			uParam1->f_4 = { -1204.087f, -1340.333f, 3.726f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1204.087f, -1340.333f, 3.726f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 498:
			uParam1->f_4 = { 736.9614f, -328.0111f, 49.2329f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 736.9614f, -328.0111f, 49.2329f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 499:
			uParam1->f_4 = { 1025.344f, 955.4961f, 221.172f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1025.344f, 955.4961f, 221.172f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 500:
			uParam1->f_4 = { 298.837f, 16.626f, 82.075f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 298.837f, 16.626f, 82.075f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 501:
			uParam1->f_4 = { -301.376f, -1106.58f, 22.026f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -301.376f, -1106.58f, 22.026f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 502:
			uParam1->f_4 = { 1321.417f, -725.513f, 64.579f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1321.417f, -725.513f, 64.579f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 503:
			uParam1->f_4 = { 2611.826f, 469.9974f, 104.681f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2611.826f, 469.9974f, 104.681f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 504:
			uParam1->f_4 = { -808.094f, -396.25f, 36.031f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -808.094f, -396.25f, 36.031f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 505:
			uParam1->f_4 = { 150.6398f, 758.6245f, 208.3275f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 150.6398f, 758.6245f, 208.3275f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 506:
			uParam1->f_4 = { -1619.563f, 391.341f, 85.697f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1619.563f, 391.341f, 85.697f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 507:
			uParam1->f_4 = { 1756.945f, 6395.202f, 35.4139f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1756.945f, 6395.202f, 35.4139f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 508:
			uParam1->f_4 = { 56.7549f, 6521.598f, 30.4565f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 56.7549f, 6521.598f, 30.4565f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 509:
			uParam1->f_4 = { -596.026f, 5753.056f, 34.011f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -596.026f, 5753.056f, 34.011f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 510:
			uParam1->f_4 = { -2259.771f, 4341.076f, 42.849f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -2259.771f, 4341.076f, 42.849f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 511:
			uParam1->f_4 = { 135.126f, 4447.888f, 79.167f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 135.126f, 4447.888f, 79.167f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 512:
			uParam1->f_4 = { 1440.967f, 4470.13f, 48.483f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1440.967f, 4470.13f, 48.483f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 513:
			uParam1->f_4 = { 1963.212f, 5083.114f, 39.6153f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1963.212f, 5083.114f, 39.6153f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 514:
			uParam1->f_4 = { 2679.76f, 4341.263f, 44.796f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2679.76f, 4341.263f, 44.796f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 515:
			uParam1->f_4 = { 2183.006f, 3399.342f, 44.527f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2183.006f, 3399.342f, 44.527f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 516:
			uParam1->f_4 = { 1472.324f, 3658.755f, 33.285f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1472.324f, 3658.755f, 33.285f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 517:
			uParam1->f_4 = { 1275.338f, 2629.966f, 36.708f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1275.338f, 2629.966f, 36.708f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 518:
			uParam1->f_4 = { 170.01f, 3214.749f, 41.299f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 170.01f, 3214.749f, 41.299f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 519:
			uParam1->f_4 = { -1700.283f, 2371.03f, 48.2861f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1700.283f, 2371.03f, 48.2861f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 520:
			uParam1->f_4 = { -281.741f, 1958.118f, 162.362f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -281.741f, 1958.118f, 162.362f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
		
		case 521:
			uParam1->f_4 = { 2513.363f, 1969.448f, 18.888f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2513.363f, 1969.448f, 18.888f };
			uParam1->f_24 = { 10f, 10f, 20f };
			uParam1->f_27 = 0f;
			break;
	}
}

void func_1077(int iParam0, var uParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 3);
	unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 8);
	switch (iParam0)
	{
		case 432:
			uParam1->f_4 = { 930.938f, -2985.865f, 4.902f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 930.9051f, -2985.834f, 7.117765f };
			uParam1->f_24 = { 6f, 6f, 6f };
			uParam1->f_27 = 0f;
			break;
		
		case 433:
			uParam1->f_4 = { 686.271f, 577.686f, 129.462f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 683.8532f, 571.3344f, 126.4614f };
			uParam1->f_24 = { 687.7781f, 581.9451f, 138.4614f };
			uParam1->f_27 = 26f;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 5);
			break;
		
		case 434:
			uParam1->f_4 = { -383.939f, -2672.466f, 5.001f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -375.7137f, -2665.313f, 2.000296f };
			uParam1->f_24 = { -389.1924f, -2679.025f, 16.00022f };
			uParam1->f_27 = 14f;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 5);
			break;
		
		case 435:
			uParam1->f_4 = { -529.086f, -1684.222f, 18.162f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -529.1872f, -1684.504f, 24.37777f };
			uParam1->f_24 = { 10f, 10f, 10f };
			uParam1->f_27 = 0f;
			break;
		
		case 436:
			uParam1->f_4 = { -971.197f, -1305.371f, 19.805f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -971.147f, -1305.277f, 26.02388f };
			uParam1->f_24 = { 10f, 10f, 10f };
			uParam1->f_27 = 0f;
			break;
		
		case 437:
			uParam1->f_4 = { -1479.12f, -663.178f, 27.944f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1479.093f, -663.1809f, 30.15976f };
			uParam1->f_24 = { 8f, 8f, 6f };
			uParam1->f_27 = 0f;
			break;
		
		case 438:
			uParam1->f_4 = { -606.75f, -127.3f, 38.009f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -606.7186f, -127.3883f, 42.22477f };
			uParam1->f_24 = { 10f, 10f, 8f };
			uParam1->f_27 = 0f;
			break;
		
		case 439:
			uParam1->f_4 = { -489.128f, 187.43f, 82.163f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -489.0805f, 188.4146f, 84.66271f };
			uParam1->f_24 = { 9f, 9f, 7.5f };
			uParam1->f_27 = 0f;
			break;
		
		case 440:
			uParam1->f_4 = { -121.642f, -1000.841f, 53.264f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -121.5962f, -1000.928f, 59.47977f };
			uParam1->f_24 = { 10f, 10f, 10f };
			uParam1->f_27 = 0f;
			break;
		
		case 441:
			uParam1->f_4 = { -477.012f, -1048.3f, 28.111f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -476.2034f, -1048.321f, 33.15062f };
			uParam1->f_24 = { 8f, 8f, 6f };
			uParam1->f_27 = 0f;
			break;
		
		case 442:
			uParam1->f_4 = { -2210.614f, 201.99f, 173.602f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -2210.535f, 202.004f, 177.8178f };
			uParam1->f_24 = { 8f, 6f, 6f };
			uParam1->f_27 = 0f;
			break;
		
		case 443:
			uParam1->f_4 = { -3266.001f, 955.427f, 7.353f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -3265.769f, 956.6714f, 8.852164f };
			uParam1->f_24 = { 4f, 5f, 4.5f };
			uParam1->f_27 = 0f;
			break;
		
		case 444:
			uParam1->f_4 = { 203.223f, 1198.412f, 230.291f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 204.1984f, 1198.68f, 232.2904f };
			uParam1->f_24 = { 6f, 5f, 5f };
			uParam1->f_27 = 0f;
			break;
		
		case 445:
			uParam1->f_4 = { 1129.031f, -2074.754f, 30.009f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1128.883f, -2074.139f, 32.11232f };
			uParam1->f_24 = { 8f, 10f, 5f };
			uParam1->f_27 = 0f;
			break;
		
		case 446:
			uParam1->f_4 = { 710.051f, -1221.815f, 23.662f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 709.9984f, -1221.838f, 31.87777f };
			uParam1->f_24 = { 12f, 12f, 10f };
			uParam1->f_27 = 0f;
			break;
		
		case 447:
			uParam1->f_4 = { -773.23f, -1044.829f, 22.103f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -772.9905f, -1045.433f, 25.03213f };
			uParam1->f_24 = { 8f, 8f, 5.5f };
			uParam1->f_27 = 0f;
			break;
		
		case 448:
			uParam1->f_4 = { -945.851f, -1422.691f, 6.68f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -945.8654f, -1422.655f, 9.895765f };
			uParam1->f_24 = { 10f, 10f, 5f };
			uParam1->f_27 = 0f;
			break;
		
		case 449:
			uParam1->f_4 = { -1680.96f, -1144.234f, 12.018f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1680.959f, -1144.148f, 16.23376f };
			uParam1->f_24 = { 10f, 10f, 6f };
			uParam1->f_27 = 0f;
			break;
		
		case 450:
			uParam1->f_4 = { -1500.022f, -333.221f, 44.9f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1500.08f, -333.2999f, 49.11576f };
			uParam1->f_24 = { 10f, 10f, 6f };
			uParam1->f_27 = 0f;
			break;
		
		case 451:
			uParam1->f_4 = { -1860.242f, 222.527f, 83.294f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1861.147f, 221.5836f, 84.88553f };
			uParam1->f_24 = { 10f, 10f, 4.5f };
			uParam1->f_27 = 0f;
			break;
		
		case 452:
			uParam1->f_4 = { 413.116f, -29.235f, 113.545f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 413.6682f, -29.54296f, 120.6307f };
			uParam1->f_24 = { 12f, 10f, 10f };
			uParam1->f_27 = 0f;
			break;
		
		case 453:
			uParam1->f_4 = { 34.83f, -383.45f, 63.806f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 35.54145f, -383.3248f, 67.84561f };
			uParam1->f_24 = { 7.5f, 7.5f, 5f };
			uParam1->f_27 = 0f;
			break;
		
		case 454:
			uParam1->f_4 = { 255.416f, -710.354f, 43.686f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 255.4533f, -710.2729f, 53.90176f };
			uParam1->f_24 = { 10f, 10f, 10f };
			uParam1->f_27 = 0f;
			break;
		
		case 455:
			uParam1->f_4 = { 592.18f, -507.294f, 23.749f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 592.2883f, -507.1213f, 27.96477f };
			uParam1->f_24 = { 10f, 10f, 6f };
			uParam1->f_27 = 0f;
			break;
		
		case 456:
			uParam1->f_4 = { 1076.132f, -685.856f, 56.644f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1076.657f, -686.3031f, 60.68362f };
			uParam1->f_24 = { 8f, 8f, 7f };
			uParam1->f_27 = 0f;
			break;
		
		case 457:
			uParam1->f_4 = { 471.317f, -2645.512f, 4.712f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 471.1914f, -2645.628f, 7.927763f };
			uParam1->f_24 = { 8f, 8f, 5f };
			uParam1->f_27 = 0f;
			break;
		
		case 458:
			uParam1->f_4 = { -129.316f, -2223.401f, 6.812f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -129.3752f, -2223.397f, 11.02777f };
			uParam1->f_24 = { 10f, 10f, 6f };
			uParam1->f_27 = 0f;
			break;
		
		case 459:
			uParam1->f_4 = { -89.978f, -1619.276f, 28.561f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -90.02207f, -1619.194f, 31.77677f };
			uParam1->f_24 = { 10f, 10f, 5f };
			uParam1->f_27 = 0f;
			break;
		
		case 460:
			uParam1->f_4 = { 276.008f, -1094.465f, 51.577f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 276.0785f, -1094.377f, 59.79276f };
			uParam1->f_24 = { 10f, 10f, 10f };
			uParam1->f_27 = 0f;
			break;
		
		case 461:
			uParam1->f_4 = { -549.746f, -790.459f, 28.327f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -549.791f, -790.4379f, 34.54276f };
			uParam1->f_24 = { 10f, 10f, 8f };
			uParam1->f_27 = 0f;
			break;
		
		case 462:
			uParam1->f_4 = { -822.68f, -595.052f, 36.197f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -823.3206f, -595.4732f, 41.19666f };
			uParam1->f_24 = { 8f, 8f, 8f };
			uParam1->f_27 = 0f;
			break;
		
		case 463:
			uParam1->f_4 = { -1220.762f, -498.094f, 30.3f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1220.795f, -498.2372f, 35.50819f };
			uParam1->f_24 = { 8f, 8f, 7f };
			uParam1->f_27 = 0f;
			break;
		
		case 464:
			uParam1->f_4 = { -178.672f, 53.382f, 66.702f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -177.8781f, 53.51821f, 69.70059f };
			uParam1->f_24 = { 10f, 10f, 6f };
			uParam1->f_27 = 0f;
			break;
		
		case 465:
			uParam1->f_4 = { 852.861f, -1902.551f, 36.09f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 852.8772f, -1902.478f, 42.80576f };
			uParam1->f_24 = { 10f, 10f, 8.5f };
			uParam1->f_27 = 0f;
			break;
		
		case 466:
			uParam1->f_4 = { -510.353f, -2030.173f, 11.433f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -510.2602f, -2029.906f, 17.69487f };
			uParam1->f_24 = { 6f, 6f, 8f };
			uParam1->f_27 = 0f;
			break;
		
		case 467:
			uParam1->f_4 = { 62.658f, -814.916f, 50.886f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 62.39498f, -815.689f, 57.88592f };
			uParam1->f_24 = { 8f, 8f, 10f };
			uParam1->f_27 = 0f;
			break;
		
		case 468:
			uParam1->f_4 = { -325.831f, -595.941f, 32.559f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -325.953f, -595.9745f, 37.77476f };
			uParam1->f_24 = { 8f, 8f, 7f };
			uParam1->f_27 = 0f;
			break;
		
		case 469:
			uParam1->f_4 = { 1083.071f, -231.408f, 56.415f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1078.683f, -239.1982f, 53.72866f };
			uParam1->f_24 = { 1089.179f, -221.7898f, 67.01202f };
			uParam1->f_27 = 11f;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 5);
			break;
		
		case 470:
			uParam1->f_4 = { 210.413f, -3323.262f, 4.794f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 210.3148f, -3323.42f, 9.009765f };
			uParam1->f_24 = { 10f, 10f, 6f };
			uParam1->f_27 = 0f;
			break;
		
		case 471:
			uParam1->f_4 = { -1275.779f, 140.19f, 57.33f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1275.382f, 139.8815f, 61.54577f };
			uParam1->f_24 = { 6f, 6f, 6f };
			uParam1->f_27 = 0f;
			break;
		
		case 472:
			uParam1->f_4 = { 1306.26f, -1114.417f, 38.5697f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1306.246f, -1114.322f, 42.7855f };
			uParam1->f_24 = { 8f, 8f, 6f };
			uParam1->f_27 = 0f;
			break;
		
		case 473:
			uParam1->f_4 = { 1430.655f, -965.071f, 46.799f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1431.873f, -967.0405f, 49.8205f };
			uParam1->f_24 = { 8f, 8f, 6f };
			uParam1->f_27 = 0f;
			break;
		
		case 474:
			uParam1->f_4 = { 939.319f, -2368.1f, 29.532f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 939.37f, -2368.138f, 32.24776f };
			uParam1->f_24 = { 10f, 10f, 4.5f };
			uParam1->f_27 = 0f;
			break;
		
		case 475:
			uParam1->f_4 = { -466.422f, -902.717f, 37.689f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -464.9896f, -901.9402f, 41.18874f };
			uParam1->f_24 = { 6f, 6f, 4.5f };
			uParam1->f_27 = 0f;
			break;
		
		case 476:
			uParam1->f_4 = { -3106.299f, 1226.45f, 9.702f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -3106.248f, 1226.497f, 14.41776f };
			uParam1->f_24 = { 10f, 10f, 4.5f };
			uParam1->f_27 = 0f;
			break;
		
		case 477:
			uParam1->f_4 = { 593.029f, -2094.036f, 4.753f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 592.5204f, -2093.164f, 7.95219f };
			uParam1->f_24 = { 6f, 9f, 4.2f };
			uParam1->f_27 = 0f;
			break;
		
		case 478:
			uParam1->f_4 = { -153.31f, -1098.898f, 12.118f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -153.3793f, -1098.834f, 22.33376f };
			uParam1->f_24 = { 7f, 7f, 10f };
			uParam1->f_27 = 0f;
			break;
		
		case 479:
			uParam1->f_4 = { -45.0454f, -343.4405f, 42.8071f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -45.01437f, -343.3614f, 49.02287f };
			uParam1->f_24 = { 6f, 6f, 6f };
			uParam1->f_27 = 0f;
			break;
		
		case 480:
			uParam1->f_4 = { -891.383f, -1259.071f, 19.875f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -891.2989f, -1258.869f, 28.09076f };
			uParam1->f_24 = { 10f, 10f, 10f };
			uParam1->f_27 = 0f;
			break;
		
		case 481:
			uParam1->f_4 = { -423.703f, -330.012f, 41.222f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -423.746f, -330.0201f, 51.37157f };
			uParam1->f_24 = { 10f, 10f, 10f };
			uParam1->f_27 = 0f;
			break;
		
		case 482:
			uParam1->f_4 = { 730.988f, -2650.476f, 5.178f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 731.4402f, -2650.377f, 7.383765f };
			uParam1->f_24 = { 8f, 8f, 4f };
			uParam1->f_27 = 0f;
			break;
		
		case 483:
			uParam1->f_4 = { 900.184f, -1436.454f, 11.174f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 899.5982f, -1435.845f, 18.16083f };
			uParam1->f_24 = { 6f, 6f, 10f };
			uParam1->f_27 = 0f;
			break;
		
		case 484:
			uParam1->f_4 = { -136.243f, -943.827f, 113.252f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -136.9158f, -946.3685f, 116.1366f };
			uParam1->f_24 = { 6f, 6f, 6f };
			uParam1->f_27 = 0f;
			break;
		
		case 485:
			uParam1->f_4 = { -1468.573f, -176.102f, 47.82f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1468.538f, -176.3f, 53.03576f };
			uParam1->f_24 = { 10f, 10f, 7f };
			uParam1->f_27 = 0f;
			break;
		
		case 486:
			uParam1->f_4 = { 472.426f, -850.549f, 25.315f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 472.5545f, -850.2525f, 28.51157f };
			uParam1->f_24 = { 10f, 10f, 5f };
			uParam1->f_27 = 0f;
			break;
		
		case 487:
			uParam1->f_4 = { 692.847f, -1009.201f, 21.774f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 692.7442f, -1009.966f, 23.76004f };
			uParam1->f_24 = { 9f, 9f, 5f };
			uParam1->f_27 = 0f;
			break;
		
		case 488:
			uParam1->f_4 = { 2523.03f, -191.997f, 74.313f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2523.234f, -191.9221f, 79.00169f };
			uParam1->f_24 = { 6f, 6f, 6.5f };
			uParam1->f_27 = 0f;
			break;
		
		case 489:
			uParam1->f_4 = { 837.865f, -844.449f, 25.336f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 837.7624f, -844.5037f, 31.55177f };
			uParam1->f_24 = { 10f, 10f, 8f };
			uParam1->f_27 = 0f;
			break;
		
		case 490:
			uParam1->f_4 = { -119.004f, -1470.729f, 32.822f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -118.999f, -1470.701f, 34.92577f };
			uParam1->f_24 = { 10f, 10f, 4f };
			uParam1->f_27 = 0f;
			break;
		
		case 491:
			uParam1->f_4 = { 10.9498f, 57.9502f, 70.8541f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 10.98904f, 58.02048f, 78.86353f };
			uParam1->f_24 = { 10f, 10f, 10f };
			uParam1->f_27 = 0f;
			break;
	}
}

void func_1078(int iParam0, var uParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 3);
	unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 5);
	switch (iParam0)
	{
		case 402:
			uParam1->f_4 = { -1256.478f, -834.671f, 64.331f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1260.381f, -827.6134f, 64.13916f };
			uParam1->f_24 = { -1238.341f, -860.1589f, 145.1225f };
			uParam1->f_27 = 17f;
			break;
		
		case 403:
			uParam1->f_4 = { 228.338f, -3185.367f, 39.469f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 230.0216f, -3137.969f, 37.16509f };
			uParam1->f_24 = { 230.2049f, -3248.131f, 119.6029f };
			uParam1->f_27 = 67f;
			break;
		
		case 404:
			uParam1->f_4 = { -147.57f, -1279.328f, 46.898f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -122.0623f, -1274.618f, 44.34243f };
			uParam1->f_24 = { -173.7991f, -1275.016f, 126.8981f };
			uParam1->f_27 = 35f;
			break;
		
		case 405:
			uParam1->f_4 = { 910.37f, -1681.356f, 50.132f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 941.9596f, -1687.26f, 36.06182f };
			uParam1->f_24 = { 881.2831f, -1681.78f, 126.1416f };
			uParam1->f_27 = 30f;
			break;
		
		case 406:
			uParam1->f_4 = { 934.263f, -938.137f, 58.092f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 927.3521f, -914.6846f, 53.09032f };
			uParam1->f_24 = { 927.3652f, -980.6048f, 138.0957f };
			uParam1->f_27 = 55f;
			break;
		
		case 407:
			uParam1->f_4 = { 84.206f, -350.93f, 66.202f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 56.1851f, -333.0296f, 61.14438f };
			uParam1->f_24 = { 96.68251f, -347.6448f, 146.1444f };
			uParam1->f_27 = 30f;
			break;
		
		case 408:
			uParam1->f_4 = { -1575.921f, 214.739f, 73.338f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1596.797f, 198.9028f, 68.83855f };
			uParam1->f_24 = { -1556.021f, 217.9655f, 153.8386f };
			uParam1->f_27 = 39f;
			break;
		
		case 409:
			uParam1->f_4 = { -2262.532f, 368.693f, 187.602f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -2261.236f, 353.3083f, 183.667f };
			uParam1->f_24 = { -2272.48f, 378.9598f, 267.6024f };
			uParam1->f_27 = 30f;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 4);
			break;
		
		case 410:
			uParam1->f_4 = { -743.213f, -221.389f, 47.519f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -759.4615f, -226.511f, 43.11855f };
			uParam1->f_24 = { -733.8257f, -215.8577f, 128.1186f };
			uParam1->f_27 = 23f;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 4);
			break;
		
		case 411:
			uParam1->f_4 = { 40.7f, -1777.083f, 46.7f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 33.93224f, -1787.518f, 41.51208f };
			uParam1->f_24 = { 80.86339f, -1730.699f, 126.7003f };
			uParam1->f_27 = 27f;
			break;
		
		case 412:
			uParam1->f_4 = { 847.553f, -2523.74f, 39.525f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 806.3157f, -2519.168f, 36.5355f };
			uParam1->f_24 = { 881.936f, -2524.729f, 127.2971f };
			uParam1->f_27 = 25f;
			break;
		
		case 413:
			uParam1->f_4 = { -398.9756f, -343.3768f, 69.9677f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -416.5431f, -346.0821f, 71.05437f };
			uParam1->f_24 = { -375.17f, -351.4191f, 155.8033f };
			uParam1->f_27 = 25f;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 4);
			break;
		
		case 414:
			uParam1->f_4 = { 77.9442f, -922.8723f, 84.2884f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 107.6461f, -933.997f, 44.6149f };
			uParam1->f_24 = { 54.39706f, -914.7451f, 166.6149f };
			uParam1->f_27 = 85f;
			break;
		
		case 415:
			uParam1->f_4 = { 185.776f, 255.676f, 140.478f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 179.0235f, 227.5602f, 135.9282f };
			uParam1->f_24 = { 200.9801f, 288.2397f, 220.9282f };
			uParam1->f_27 = 28f;
			break;
		
		case 416:
			uParam1->f_4 = { 1240.408f, -2994.69f, 11.164f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1240.566f, -3002.224f, 3.319258f };
			uParam1->f_24 = { 1240.273f, -2950.456f, 88.31926f };
			uParam1->f_27 = 27f;
			break;
		
		case 417:
			uParam1->f_4 = { -137.675f, 6176.477f, 39.165f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -149.8223f, 6160.892f, 35.82255f };
			uParam1->f_24 = { -115.8774f, 6195.789f, 121.9215f };
			uParam1->f_27 = 32f;
			break;
		
		case 418:
			uParam1->f_4 = { 2740.51f, 3474.729f, 72.704f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2722.111f, 3442.816f, 66.5176f };
			uParam1->f_24 = { 2751.01f, 3512.019f, 152.5181f };
			uParam1->f_27 = 27f;
			break;
		
		case 419:
			uParam1->f_4 = { 1710.586f, 4779.984f, 46.585f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1711.055f, 4760.765f, 41.41178f };
			uParam1->f_24 = { 1711.034f, 4790.055f, 127.4129f };
			uParam1->f_27 = 30f;
			break;
		
		case 420:
			uParam1->f_4 = { 590.234f, 2763.851f, 50.145f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 598.3928f, 2744.509f, 44.43517f };
			uParam1->f_24 = { 595.8835f, 2782.835f, 127.9985f };
			uParam1->f_27 = 52f;
			break;
		
		case 421:
			uParam1->f_4 = { 734.51f, 1292.156f, 359.296f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 739.7446f, 1288.609f, 353.2967f };
			uParam1->f_24 = { 769.9889f, 1287.509f, 439.2967f };
			uParam1->f_27 = 55f;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 4);
			break;
		
		case 422:
			uParam1->f_4 = { -1111.574f, 2704.87f, 22.841f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1123.027f, 2693.358f, 17.49279f };
			uParam1->f_24 = { -1098.112f, 2716.403f, 102.4839f };
			uParam1->f_27 = 22f;
			break;
		
		case 423:
			uParam1->f_4 = { 1518.644f, 3578.375f, 41.0232f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1542.941f, 3591.818f, 35.10985f };
			uParam1->f_24 = { 1506.198f, 3570.45f, 121.1119f };
			uParam1->f_27 = 18f;
			break;
		
		case 424:
			uParam1->f_4 = { -1594.487f, 763.167f, 188.194f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1613.787f, 760.4377f, 182.2431f };
			uParam1->f_24 = { -1563.257f, 784.1996f, 275.9496f };
			uParam1->f_27 = 45f;
			break;
		
		case 425:
			uParam1->f_4 = { 250.021f, 3610.677f, 32.931f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 239.7506f, 3564.669f, 27.76138f };
			uParam1->f_24 = { 249.5125f, 3627.261f, 112.5437f };
			uParam1->f_27 = 48f;
			break;
		
		case 426:
			uParam1->f_4 = { 156.196f, 7353.579f, 10.521f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 137.4374f, 7337.537f, 2.219269f };
			uParam1->f_24 = { 177.069f, 7369.922f, 90.69885f };
			uParam1->f_27 = 48f;
			break;
		
		case 427:
			uParam1->f_4 = { 2936.501f, 777.473f, 25.68f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2904.622f, 760.8602f, 12.97041f };
			uParam1->f_24 = { 2959f, 809.2928f, 102.5311f };
			uParam1->f_27 = 48f;
			break;
		
		case 428:
			uParam1->f_4 = { 3623.009f, 5676.726f, 6.772f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 3596.06f, 5674.643f, 1.261269f };
			uParam1->f_24 = { 3674.869f, 5651.38f, 102.2014f };
			uParam1->f_27 = 39.25f;
			break;
		
		case 429:
			uParam1->f_4 = { 2373.838f, 6615.34f, 1.1413f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2385.575f, 6643.938f, -11.1034f };
			uParam1->f_24 = { 2372.584f, 6580.026f, 87.70878f };
			uParam1->f_27 = 60f;
			break;
		
		case 430:
			uParam1->f_4 = { -2589.942f, 1884.457f, 170.4919f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -2597.961f, 1873.451f, 165.6799f };
			uParam1->f_24 = { -2576.077f, 1892.283f, 250.493f };
			uParam1->f_27 = 20f;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 4);
			break;
		
		case 431:
			uParam1->f_4 = { -494.282f, 5289.946f, 79.61f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -512.1506f, 5246.959f, 74.31995f };
			uParam1->f_24 = { -486.8627f, 5314.746f, 166.4803f };
			uParam1->f_27 = 35f;
			break;
	}
}

void func_1079(int iParam0, var uParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 3);
	unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 5);
	switch (iParam0)
	{
		case 382:
			uParam1->f_4 = { 874.777f, 2344.294f, 50.686f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 861.0251f, 2349.384f, 49.64794f };
			uParam1->f_24 = { 881.1734f, 2349.657f, 70.6908f };
			uParam1->f_27 = 30f;
			break;
		
		case 383:
			uParam1->f_4 = { -7.204f, 6199.675f, 38.755f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -3.588748f, 6194.031f, 30.69162f };
			uParam1->f_24 = { -18.89411f, 6213.56f, 70.39188f };
			uParam1->f_27 = 45f;
			break;
		
		case 384:
			uParam1->f_4 = { 1991.296f, 5002.771f, 40.41f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1982.497f, 5013.054f, 37.34918f };
			uParam1->f_24 = { 2002.317f, 4990.892f, 70.40779f };
			uParam1->f_27 = 40f;
			break;
		
		case 385:
			uParam1->f_4 = { 1787.863f, 3397.899f, 39.721f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1779.74f, 3394.033f, 36.23817f };
			uParam1->f_24 = { 1803.401f, 3407.283f, 69.5711f };
			uParam1->f_27 = 40f;
			break;
		
		case 386:
			uParam1->f_4 = { -2022.113f, 561.086f, 106.95f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -2024.853f, 543.6421f, 106.1676f };
			uParam1->f_24 = { -2018.602f, 575.4886f, 139.3349f };
			uParam1->f_27 = 32f;
			break;
		
		case 387:
			uParam1->f_4 = { 3848.949f, 4749.052f, 4.2995f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 3857.233f, 4736.315f, 2.018371f };
			uParam1->f_24 = { 3841.512f, 4761.041f, 30.14906f };
			uParam1->f_27 = 25f;
			break;
		
		case 388:
			uParam1->f_4 = { 942.1198f, 6940.537f, 4.2995f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 939.619f, 6925.514f, 1.983978f };
			uParam1->f_24 = { 944.592f, 6954.486f, 29.81213f };
			uParam1->f_27 = 25f;
			break;
		
		case 389:
			uParam1->f_4 = { -757.7433f, 6175.542f, 4.1283f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -771.9074f, 6176.819f, 2.186861f };
			uParam1->f_24 = { -743.0279f, 6174.761f, 30.68049f };
			uParam1->f_27 = 25f;
			break;
		
		case 390:
			uParam1->f_4 = { -1807.144f, 5279.726f, 4.2995f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -1812.923f, 5266.89f, 2.169169f };
			uParam1->f_24 = { -1800.996f, 5293.814f, 30.28967f };
			uParam1->f_27 = 25f;
			break;
		
		case 391:
			uParam1->f_4 = { -3414.893f, 1565.538f, 4.2995f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -3428.292f, 1561.292f, 2.13642f };
			uParam1->f_24 = { -3400.509f, 1570.362f, 30.36943f };
			uParam1->f_27 = 25f;
			break;
		
		case 392:
			uParam1->f_4 = { -347.548f, -2421.686f, 1.652f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -359.1149f, -2435.098f, -1.131242f };
			uParam1->f_24 = { -336.0713f, -2407.629f, 26.86958f };
			uParam1->f_27 = 9f;
			break;
		
		case 393:
			uParam1->f_4 = { 1043.372f, -2881.166f, 18.018f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1024.188f, -2880.972f, 15.03582f };
			uParam1->f_24 = { 1063.541f, -2881.016f, 43.03582f };
			uParam1->f_27 = 30f;
			break;
		
		case 394:
			uParam1->f_4 = { 924.896f, -1240.747f, 24.524f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 932.9946f, -1260.574f, 22.68546f };
			uParam1->f_24 = { 912.2214f, -1232.266f, 49.51196f };
			uParam1->f_27 = 30f;
			break;
		
		case 395:
			uParam1->f_4 = { -451.996f, -918.816f, 46.985f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -451.6511f, -935.5438f, 43.98464f };
			uParam1->f_24 = { -452.4876f, -897.9177f, 71.98894f };
			uParam1->f_27 = 25f;
			break;
		
		case 396:
			uParam1->f_4 = { 1147.597f, 124.969f, 80.967f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 1133.214f, 100.1685f, 77.02354f };
			uParam1->f_24 = { 1163.711f, 149.8149f, 104.8858f };
			uParam1->f_27 = 60f;
			break;
		
		case 397:
			uParam1->f_4 = { 673.841f, 1285.48f, 362.103f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 675.8716f, 1288.757f, 356.296f };
			uParam1->f_24 = { 676.0979f, 1276.26f, 384.296f };
			uParam1->f_27 = 30f;
			break;
		
		case 398:
			uParam1->f_4 = { -2316.168f, -1328.555f, 4.2995f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { -2322.772f, -1342.042f, 2.358489f };
			uParam1->f_24 = { -2309.929f, -1315.937f, 30.41694f };
			uParam1->f_27 = 25f;
			break;
		
		case 399:
			uParam1->f_4 = { 2288.262f, -2547.099f, -24.1587f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 2278.695f, -2557.841f, 2.410532f };
			uParam1->f_24 = { 2298.015f, -2536.507f, 30.3815f };
			uParam1->f_27 = 25f;
			break;
		
		case 400:
			uParam1->f_4 = { 3107.64f, 822.0205f, -5.6705f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 3117.857f, 811.9422f, 2.199003f };
			uParam1->f_24 = { 3097.107f, 831.8228f, 30.35834f };
			uParam1->f_27 = 25f;
			break;
		
		case 401:
			uParam1->f_4 = { 3430.34f, 2275.244f, -21.7691f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_21 = { 3422.722f, 2263.081f, 2.113419f };
			uParam1->f_24 = { 3438.165f, 2287.443f, 30.34889f };
			uParam1->f_27 = 25f;
			break;
	}
}

void func_1080(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = { -1132.019f, -3481.439f, 36.94393f };
			*uParam2 = { -1227.921f, -3426.592f, 136.8073f };
			*uParam3 = 100f;
			break;
		
		case 2:
			*uParam1 = { -1381.35f, -3303.02f, 29.99623f };
			*uParam2 = { -1434.088f, -3272.819f, 130.9934f };
			*uParam3 = 45f;
			break;
		
		case 3:
			*uParam1 = { -2019.949f, 3159.68f, 48.58803f };
			*uParam2 = { -1979.777f, 3229.238f, 156.5891f };
			*uParam3 = 70f;
			break;
		
		case 4:
			*uParam1 = { -1876.744f, 3111.081f, 43.71916f };
			*uParam2 = { -1850.549f, 3156.451f, 148.7225f };
			*uParam3 = 33f;
			break;
		
		case 5:
			*uParam1 = { -2468.442f, 3278.073f, 43.7138f };
			*uParam2 = { -2442.203f, 3323.376f, 148.7309f };
			*uParam3 = 33f;
			break;
	}
}

Vector3 func_1081(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 1:
			Var0 = { -1148.628f, -3403.893f, 12.945f };
			break;
		
		case 2:
			Var0 = { -1391.453f, -3259.564f, 12.9448f };
			break;
		
		case 3:
			Var0 = { -2025.203f, 3150.572f, 31.8103f };
			break;
		
		case 4:
			Var0 = { -1881.584f, 3102.007f, 31.8103f };
			break;
		
		case 5:
			Var0 = { -2473.68f, 3267.99f, 31.8461f };
			break;
	}
	return Var0;
}

Vector3 func_1082(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 1:
			Var0 = { -1152.431f, -3410.42f, 12.945f };
			break;
		
		case 2:
			Var0 = { -1395.358f, -3266.353f, 12.9448f };
			break;
		
		case 3:
			Var0 = { -2020.971f, 3157.293f, 31.8103f };
			break;
		
		case 4:
			Var0 = { -1877.766f, 3108.921f, 31.8103f };
			break;
		
		case 5:
			Var0 = { -2469.717f, 3275.254f, 31.8325f };
			break;
	}
	return Var0;
}

int func_1083(var uParam0)
{
	return func_412(func_1084(&uParam0));
}

int func_1084(var uParam0)
{
	switch (*uParam0)
	{
		case 377:
			return 83;
		
		case 378:
			return 84;
		
		case 379:
			return 85;
		
		case 380:
			return 86;
		
		case 381:
			return 87;
		
		case 761:
			return 83;
		
		case 762:
			return 84;
		
		default:
	}
	return -1;
}

void func_1085(var uParam0, int iParam1, var uParam2, var uParam3)
{
	if (iParam1 == 4)
	{
		*uParam2 = 0;
		*uParam3 = 1;
	}
	else if (((((((iParam1 == 6 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12)
	{
		*uParam2 = 1;
		*uParam3 = 1;
	}
}

int func_1086(int iParam0)
{
	switch (func_969(&iParam0))
	{
		case 24:
			return 1;
		
		default:
	}
	if (func_980(&iParam0))
	{
		return 1;
	}
	return 0;
}

struct<28> func_1087(int iParam0)
{
	struct<28> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_20 = 1091567616;
	iVar1 = func_990(&iParam0);
	if (func_991(&iParam0))
	{
		StringCopy(&(Var0.f_8), "GB_GUNRUNNING_DELIVERY", 32);
		Var0.f_18 = 247513;
		Var0.f_19 = 247445;
		Var0.f_3 = 5f;
		Var0.f_7 = 10f;
		if (func_1112(&iParam0))
		{
			Var0 = { Global_1950108.f_1029[func_1111(&iParam0) /*3*/] };
			Var0.f_4 = { func_1007(func_1109(iParam0), 0) };
			iVar2 = unk_0x4A8C381C258A124D();
			switch (func_1097(&iVar2))
			{
				case 4:
					Var0.f_17 = 2;
					func_1097(&iVar2);
					break;
				
				case 1:
					Var0.f_17 = 1;
					break;
				
				case 3:
					Var0.f_17 = 3;
					if (func_1096(&iVar2) || func_1094(&iVar2))
					{
						Var0.f_17 = 4;
					}
					break;
			}
		}
		else
		{
			switch (iVar1)
			{
				case 17:
					Var0.f_17 = 5;
					func_1093(iParam0, &Var0);
					break;
				
				case 18:
					Var0.f_17 = 6;
					func_1092(iParam0, &Var0);
					Var0.f_7 = 15f;
					break;
				
				case 15:
					Var0.f_17 = 7;
					func_1091(iParam0, &Var0);
					Var0.f_7 = 7.5f;
					break;
				
				case 14:
					Var0.f_17 = 10;
					func_1090(iParam0, &Var0);
					break;
				
				case 16:
					Var0.f_17 = 8;
					func_1089(iParam0, &Var0);
					break;
				
				case 19:
					Var0.f_17 = 9;
					func_1088(iParam0, &Var0);
					break;
				}
			}
	}
	return Var0;
}

void func_1088(int iParam0, var uParam1)
{
	if (iParam0 > 256)
	{
		switch (iParam0)
		{
			case 307:
				uParam1->f_4 = { -115.4032f, 1416.123f, 294.134f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 308:
				uParam1->f_4 = { 156.6951f, 703.3265f, 207.1029f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 309:
				uParam1->f_4 = { 2538.239f, -199.7805f, 72.551f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 310:
				uParam1->f_4 = { 659.4763f, -491.1226f, 14.688f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 311:
				uParam1->f_4 = { 1411.413f, 1051.715f, 113.3343f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 312:
				uParam1->f_4 = { -583.498f, -1453.726f, 9.2096f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 313:
				uParam1->f_4 = { 1582.181f, -2009.475f, 92.7024f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 314:
				uParam1->f_4 = { 1563.969f, -2677.09f, 36.8862f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 315:
				uParam1->f_4 = { 1110.337f, -3080.767f, 4.8473f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 316:
				uParam1->f_4 = { 369.0472f, -2431.285f, 5.0417f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 317:
				uParam1->f_4 = { -758.4178f, -2595.934f, 12.8285f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 318:
				uParam1->f_4 = { 732.8478f, -1518.746f, 18.7068f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 319:
				uParam1->f_4 = { -815.6332f, -1819.319f, 27.6752f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 320:
				uParam1->f_4 = { 1234.662f, -2689.25f, 1.4614f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 321:
				uParam1->f_4 = { 271.8187f, -2501.891f, 5.4403f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 322:
				uParam1->f_4 = { 395.6607f, 32.3907f, 90.4966f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 323:
				uParam1->f_4 = { -1049.013f, -89.9484f, 42.5869f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 324:
				uParam1->f_4 = { 1345.963f, -1025.396f, 38.9002f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 325:
				uParam1->f_4 = { -1630.345f, -1124.862f, 1.0889f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 326:
				uParam1->f_4 = { 5.3001f, -1102.714f, 37.152f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 327:
				uParam1->f_4 = { 613.4843f, -1108.784f, 9.1824f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 328:
				uParam1->f_4 = { -350.6446f, -1188.939f, 21.9375f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 329:
				uParam1->f_4 = { 2486.714f, -1989.521f, 66.1648f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 330:
				uParam1->f_4 = { 610.8346f, -2850.166f, 2.095f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 331:
				uParam1->f_4 = { 508.5753f, -2309.013f, 4.9173f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 332:
				uParam1->f_4 = { 865.9128f, 831.9396f, 167.0572f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 333:
				uParam1->f_4 = { 438.3826f, 790.9186f, 193.4617f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 334:
				uParam1->f_4 = { 2174.23f, 129.0715f, 227.4601f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 335:
				uParam1->f_4 = { -430.7544f, -566.5062f, 26.6955f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 336:
				uParam1->f_4 = { 820.8608f, -487.1843f, 29.3492f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 337:
				uParam1->f_4 = { -927.1212f, -754.834f, 18.7713f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 338:
				uParam1->f_4 = { 2826.007f, -744.9128f, 16.3986f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 339:
				uParam1->f_4 = { -347.0302f, -1714.736f, 0.1588f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 340:
				uParam1->f_4 = { 1165.333f, -2217.156f, 29.818f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 341:
				uParam1->f_4 = { 732.7329f, -724.3032f, 25.5982f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 342:
				uParam1->f_4 = { -534.8953f, -893.4067f, 23.3456f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 343:
				uParam1->f_4 = { -1483.8f, -1478.867f, 1.5746f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 344:
				uParam1->f_4 = { 660.1437f, -1662.937f, 8.7057f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 345:
				uParam1->f_4 = { 756.9075f, -2560.279f, 9.1108f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 346:
				uParam1->f_4 = { -688.3148f, -2474.599f, 12.8285f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 347:
				uParam1->f_4 = { -344.8739f, 1373.627f, 339.4823f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 348:
				uParam1->f_4 = { 679.5253f, 1213.034f, 323.3946f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 349:
				uParam1->f_4 = { 402.2882f, 1033.397f, 236.317f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 350:
				uParam1->f_4 = { 1994.461f, 497.7719f, 162.3902f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 351:
				uParam1->f_4 = { -71.2453f, 184.6311f, 86.3855f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 352:
				uParam1->f_4 = { -423.4632f, 865.8475f, 233.0571f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 353:
				uParam1->f_4 = { -1040.682f, 918.1884f, 168.968f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 354:
				uParam1->f_4 = { -1540.535f, 332.4937f, 84.6292f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 355:
				uParam1->f_4 = { -1984.656f, -248.1744f, 33.4115f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 356:
				uParam1->f_4 = { -359.8619f, -92.1446f, 44.662f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			}
	}
	switch (iParam0)
	{
		case 257:
			uParam1->f_4 = { 2347.526f, 5563.68f, 38.5584f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 258:
			uParam1->f_4 = { 2732.712f, 5221.74f, 50.1412f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 259:
			uParam1->f_4 = { -203.4516f, 4426.908f, 45.1766f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 260:
			uParam1->f_4 = { 1402.941f, 2107.932f, 104.4429f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 261:
			uParam1->f_4 = { 1913.308f, 3726.871f, 31.4625f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 262:
			uParam1->f_4 = { 77.0293f, 7077.308f, 0.9681f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 263:
			uParam1->f_4 = { 1468.96f, 4947.473f, 75.1823f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 264:
			uParam1->f_4 = { -126.1526f, 3546.554f, 55.0922f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 265:
			uParam1->f_4 = { 1063.111f, 3275.501f, 36.6055f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 266:
			uParam1->f_4 = { -509.5927f, 5242.972f, 79.304f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 267:
			uParam1->f_4 = { 2351.059f, 5001.8f, 41.7707f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 268:
			uParam1->f_4 = { 1824.454f, 4733.53f, 32.5693f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 269:
			uParam1->f_4 = { -1844.69f, 4556.438f, 4.9786f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 270:
			uParam1->f_4 = { -1376.324f, 4413.688f, 28.537f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 271:
			uParam1->f_4 = { -18.1656f, 6261.238f, 30.2358f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 272:
			uParam1->f_4 = { 570.2625f, 4177.667f, 37.1188f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 273:
			uParam1->f_4 = { -445.1836f, 4015.951f, 80.0153f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 274:
			uParam1->f_4 = { 1440.298f, 2804.806f, 51.8026f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 275:
			uParam1->f_4 = { -2103.897f, 2473.496f, 0.5534f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 276:
			uParam1->f_4 = { -80.3433f, 1879.382f, 196.2338f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 277:
			uParam1->f_4 = { -494.58f, 5547.659f, 72.4075f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 278:
			uParam1->f_4 = { 1262.87f, 4384.995f, 43.9866f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 279:
			uParam1->f_4 = { 825.5037f, 2137.788f, 51.2936f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 280:
			uParam1->f_4 = { -2911.529f, 1592.034f, 28.2507f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 281:
			uParam1->f_4 = { -1658.676f, 3045.86f, 30.8135f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 282:
			uParam1->f_4 = { 813.8033f, 6638.829f, 1.0195f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 283:
			uParam1->f_4 = { 143.9241f, 6317.533f, 30.474f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 284:
			uParam1->f_4 = { -291.3325f, 6303.275f, 30.4923f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 285:
			uParam1->f_4 = { -575.9571f, 5846.869f, 28.8116f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 286:
			uParam1->f_4 = { 2515.608f, 4962.869f, 43.5619f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 287:
			uParam1->f_4 = { 2900.887f, 4637.51f, 47.5426f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 288:
			uParam1->f_4 = { 1993.716f, 3934.452f, 31.23f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 289:
			uParam1->f_4 = { 124.3457f, 3004.625f, 47.3517f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 290:
			uParam1->f_4 = { 754.0544f, 2336.919f, 49.0994f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 291:
			uParam1->f_4 = { 2746.92f, 1444.504f, 23.4889f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 292:
			uParam1->f_4 = { 1550.989f, 6543.894f, 21.4149f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 293:
			uParam1->f_4 = { 993.5634f, 6403.824f, 28.4137f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 294:
			uParam1->f_4 = { 1623.713f, 3783.464f, 33.652f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 295:
			uParam1->f_4 = { 2623.721f, 1971.464f, 29.141f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 296:
			uParam1->f_4 = { 2899.761f, 4382.502f, 49.3713f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 297:
			uParam1->f_4 = { 2581.925f, 5608.749f, 59.9163f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 298:
			uParam1->f_4 = { 2236.698f, 4785.659f, 39.1814f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 299:
			uParam1->f_4 = { 1158.342f, 4584.417f, 73.9566f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 300:
			uParam1->f_4 = { 1495.8f, 4599.003f, 50.9645f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 301:
			uParam1->f_4 = { 1988.47f, 3033.79f, 46.0563f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 302:
			uParam1->f_4 = { -1640.253f, 4581.037f, 41.8798f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 303:
			uParam1->f_4 = { 2607.227f, 4441.909f, 39.0584f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 304:
			uParam1->f_4 = { -1204.787f, 4448.327f, 30.2424f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 305:
			uParam1->f_4 = { -2302.336f, 4116.885f, 27.3913f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 306:
			uParam1->f_4 = { 468.1049f, 3546.374f, 32.2386f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
	}
	if (((((((((((((((((((iParam0 != 261 && iParam0 != 266) && iParam0 != 271) && iParam0 != 276) && iParam0 != 281) && iParam0 != 286) && iParam0 != 291) && iParam0 != 296) && iParam0 != 301) && iParam0 != 306) && iParam0 != 311) && iParam0 != 316) && iParam0 != 321) && iParam0 != 326) && iParam0 != 331) && iParam0 != 336) && iParam0 != 341) && iParam0 != 346) && iParam0 != 351) && iParam0 != 356)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 2);
	}
}

void func_1089(int iParam0, var uParam1)
{
	if (iParam0 > 156)
	{
		switch (iParam0)
		{
			case 207:
				uParam1->f_4 = { -2191.674f, 904.894f, 228.613f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 208:
				uParam1->f_4 = { -2512.552f, 761.624f, 300.404f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 209:
				uParam1->f_4 = { -2554.847f, 279.211f, 184.89f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 210:
				uParam1->f_4 = { -2267.61f, -26.611f, 111.309f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 211:
				uParam1->f_4 = { -1705.979f, -82.071f, 79.054f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 212:
				uParam1->f_4 = { 2581.854f, -775.529f, 84.981f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 213:
				uParam1->f_4 = { 2155.905f, -1111.007f, 172.283f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 214:
				uParam1->f_4 = { 2048.335f, -1619.833f, 234.082f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 215:
				uParam1->f_4 = { 1880.627f, -1864.139f, 192.18f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 216:
				uParam1->f_4 = { 1827.189f, -2349.425f, 146.409f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 217:
				uParam1->f_4 = { 1893.68f, -885.746f, 117.794f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 218:
				uParam1->f_4 = { 1495.998f, -1275.113f, 121.534f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 219:
				uParam1->f_4 = { 1269.73f, -941.188f, 77.584f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 220:
				uParam1->f_4 = { 1582.159f, -635.642f, 147.727f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 221:
				uParam1->f_4 = { 1841.793f, -237.63f, 293.53f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 222:
				uParam1->f_4 = { 2216.092f, 246.356f, 258.916f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 223:
				uParam1->f_4 = { 2205.155f, 591.884f, 261.37f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 224:
				uParam1->f_4 = { 2089.61f, 971.773f, 213.314f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 225:
				uParam1->f_4 = { 1885.172f, 997.583f, 274.815f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 226:
				uParam1->f_4 = { 1830.645f, 1496.993f, 119.015f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 227:
				uParam1->f_4 = { 1050.058f, 1020.909f, 249.595f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 228:
				uParam1->f_4 = { 1311.87f, 720.812f, 85.503f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 229:
				uParam1->f_4 = { 1619.17f, 450.971f, 250.382f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 230:
				uParam1->f_4 = { 1589.916f, 95.761f, 209.272f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 231:
				uParam1->f_4 = { 1169.067f, -147.911f, 55.814f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 232:
				uParam1->f_4 = { 980.968f, 716.382f, 192.186f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 233:
				uParam1->f_4 = { 822.654f, 1314.468f, 362.31f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 234:
				uParam1->f_4 = { 358.749f, 1186.109f, 266.835f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 235:
				uParam1->f_4 = { 409.162f, 712.279f, 196.507f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 236:
				uParam1->f_4 = { 568.269f, 431.24f, 171.505f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 237:
				uParam1->f_4 = { 442.851f, 1711.104f, 258.1f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 238:
				uParam1->f_4 = { 489.231f, 1446.313f, 350.169f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 239:
				uParam1->f_4 = { -39.039f, 1563.259f, 297.352f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 240:
				uParam1->f_4 = { -96.733f, 1265.517f, 302.811f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 241:
				uParam1->f_4 = { 186.677f, 1038.29f, 243.259f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 242:
				uParam1->f_4 = { 125.427f, 1435.429f, 261.481f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 243:
				uParam1->f_4 = { -471.373f, 1525.389f, 390.228f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 244:
				uParam1->f_4 = { -891.67f, 1297.359f, 300.137f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 245:
				uParam1->f_4 = { -1022.612f, 1641.04f, 258.438f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 246:
				uParam1->f_4 = { -1363.53f, 1662.061f, 176.57f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 247:
				uParam1->f_4 = { -1135.81f, 1901.406f, 175.34f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 248:
				uParam1->f_4 = { -1043.954f, 1592.751f, 265.3f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 249:
				uParam1->f_4 = { -1289.223f, 1127.897f, 280.162f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 250:
				uParam1->f_4 = { -1547.309f, 724.521f, 202.398f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 251:
				uParam1->f_4 = { -1766.17f, 613.099f, 179.457f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 252:
				uParam1->f_4 = { -1616.113f, 794.88f, 184.868f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 253:
				uParam1->f_4 = { -1948.807f, 1081.29f, 256.194f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 254:
				uParam1->f_4 = { -2354.82f, 1293.149f, 330.953f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 255:
				uParam1->f_4 = { -1947.759f, 1503.9f, 269.274f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 256:
				uParam1->f_4 = { -1736.649f, 1771.232f, 197.702f };
				*uParam1 = { uParam1->f_4 };
				break;
			}
	}
	switch (iParam0)
	{
		case 157:
			uParam1->f_4 = { 2166.96f, 5773.108f, 176.947f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 158:
			uParam1->f_4 = { 1794.606f, 5805.495f, 334.124f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 159:
			uParam1->f_4 = { 1311.736f, 5810.9f, 471.065f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 160:
			uParam1->f_4 = { 803.115f, 5696.31f, 696.74f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 161:
			uParam1->f_4 = { 505.028f, 5524.13f, 775.336f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 162:
			uParam1->f_4 = { 2678.877f, 2657.504f, 81.457f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 163:
			uParam1->f_4 = { 2950.072f, 2508.028f, 163.35f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 164:
			uParam1->f_4 = { 2802.67f, 2057.809f, 123.411f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 165:
			uParam1->f_4 = { 2383.232f, 1815.577f, 90.89f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 166:
			uParam1->f_4 = { 2119.979f, 1718.67f, 100.1659f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 167:
			uParam1->f_4 = { 2985.565f, 4871.652f, 126.073f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 168:
			uParam1->f_4 = { 3193.98f, 4728.654f, 191.278f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 169:
			uParam1->f_4 = { 3443.923f, 4200.008f, 239.302f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 170:
			uParam1->f_4 = { 3090.46f, 3505.364f, 122.488f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 171:
			uParam1->f_4 = { 2956.266f, 3130.24f, 170.545f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 172:
			uParam1->f_4 = { -114.5166f, 4366.305f, 66.5739f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 173:
			uParam1->f_4 = { -389.1314f, 4714.173f, 262.0202f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 174:
			uParam1->f_4 = { -927.3663f, 4830.777f, 308.1317f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 175:
			uParam1->f_4 = { -947.983f, 4616.67f, 238.343f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 176:
			uParam1->f_4 = { -1193.135f, 4791.787f, 219.39f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 177:
			uParam1->f_4 = { -547.3558f, 3063.189f, 41.6977f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 178:
			uParam1->f_4 = { -788.8897f, 3439.263f, 163.2574f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 179:
			uParam1->f_4 = { -693.747f, 3633.733f, 290.969f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 180:
			uParam1->f_4 = { -524.5084f, 3545.819f, 235.8375f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 181:
			uParam1->f_4 = { -299.48f, 3403.149f, 143.3759f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 182:
			uParam1->f_4 = { -757.9035f, 3107.519f, 87.9309f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 183:
			uParam1->f_4 = { -936.9541f, 3343.828f, 214.99f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 184:
			uParam1->f_4 = { -976.6102f, 3827.846f, 428.4182f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 185:
			uParam1->f_4 = { -1172.518f, 3833.279f, 483.9537f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 186:
			uParam1->f_4 = { -1296.6f, 3683.431f, 425.8118f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 187:
			uParam1->f_4 = { 1806.788f, 6509.859f, 69.7009f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 188:
			uParam1->f_4 = { 2136.818f, 6427.576f, 153.6458f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 189:
			uParam1->f_4 = { 2412.896f, 6475.143f, 72.3587f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 190:
			uParam1->f_4 = { 2827.761f, 5967.506f, 350.351f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 191:
			uParam1->f_4 = { 3061.18f, 5557.61f, 195.6185f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 192:
			uParam1->f_4 = { 2626.258f, 3660.501f, 100.4183f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 193:
			uParam1->f_4 = { 1727.974f, 3046.818f, 58.9817f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 194:
			uParam1->f_4 = { 537.097f, 3362.167f, 98.3086f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 195:
			uParam1->f_4 = { -314.4719f, 3789.605f, 67.1712f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 196:
			uParam1->f_4 = { -544.3684f, 4198.801f, 191.2337f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 197:
			uParam1->f_4 = { -1634.461f, 1987.978f, 114.3933f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 198:
			uParam1->f_4 = { -1946.999f, 1558.013f, 268.019f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 199:
			uParam1->f_4 = { -2367.749f, 1294.907f, 331.8613f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 200:
			uParam1->f_4 = { -2725.23f, 1248.93f, 132.6765f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 201:
			uParam1->f_4 = { -3247.449f, 1246.809f, 1.6992f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 202:
			uParam1->f_4 = { 2487.351f, 5210.566f, 70.7697f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 203:
			uParam1->f_4 = { 2153.843f, 5382.093f, 164.5574f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 204:
			uParam1->f_4 = { 1663.681f, 5156.728f, 152.0881f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 205:
			uParam1->f_4 = { 1398.803f, 5181.02f, 224.986f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 206:
			uParam1->f_4 = { 862.0489f, 5172.775f, 456.8228f };
			*uParam1 = { uParam1->f_4 };
			break;
	}
	if (((((((((((((((((((iParam0 != 161 && iParam0 != 166) && iParam0 != 171) && iParam0 != 176) && iParam0 != 181) && iParam0 != 186) && iParam0 != 191) && iParam0 != 196) && iParam0 != 201) && iParam0 != 206) && iParam0 != 211) && iParam0 != 216) && iParam0 != 221) && iParam0 != 226) && iParam0 != 231) && iParam0 != 236) && iParam0 != 241) && iParam0 != 246) && iParam0 != 251) && iParam0 != 256)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 2);
	}
}

void func_1090(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 92:
			uParam1->f_4 = { 2875.468f, 2806.367f, 53.7213f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 93:
			uParam1->f_4 = { 1052.251f, 2670.066f, 38.551f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 94:
			uParam1->f_4 = { -833.729f, 1714.583f, 191.577f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 95:
			uParam1->f_4 = { -2653.676f, 2422.161f, 3.925f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 96:
			uParam1->f_4 = { -3048.342f, 602.2847f, 6.2691f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 97:
			uParam1->f_4 = { 1068.72f, 3588.034f, 30.602f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 98:
			uParam1->f_4 = { 138.118f, 3119.263f, 41.636f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 99:
			uParam1->f_4 = { -1285.809f, 2593.409f, 11.3524f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 100:
			uParam1->f_4 = { -2417.672f, 4110.082f, 17.934f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 101:
			uParam1->f_4 = { -292.009f, 6130.332f, 30.501f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 102:
			uParam1->f_4 = { -140.7524f, 6356.994f, 30.4906f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 103:
			uParam1->f_4 = { 1449.218f, 6579.69f, 11.894f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 104:
			uParam1->f_4 = { 2399.676f, 4911.915f, 41.464f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 105:
			uParam1->f_4 = { 1706.076f, 3872.908f, 33.904f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 106:
			uParam1->f_4 = { 435.271f, 3522.796f, 32.626f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 107:
			uParam1->f_4 = { 1187.571f, 6561.227f, 1.997f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 108:
			uParam1->f_4 = { 2486.772f, 4816.758f, 33.768f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 109:
			uParam1->f_4 = { 1488.547f, 3701.168f, 33.382f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 110:
			uParam1->f_4 = { 1522.554f, 1669.512f, 109.698f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 111:
			uParam1->f_4 = { 2309.18f, 2518.352f, 45.667f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 112:
			uParam1->f_4 = { 1095.315f, 2109.932f, 52.42f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 113:
			uParam1->f_4 = { 1376.68f, 3599.511f, 33.881f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 114:
			uParam1->f_4 = { 2952.854f, 4253.191f, 52.768f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 115:
			uParam1->f_4 = { 2263.006f, 5612.513f, 53.817f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 116:
			uParam1->f_4 = { 1465.186f, 6356f, 22.836f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 117:
			uParam1->f_4 = { 1929.979f, 4642.605f, 39.444f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 118:
			uParam1->f_4 = { 1803.659f, 3731.653f, 32.819f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 119:
			uParam1->f_4 = { 1034.936f, 2514.938f, 45.828f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 120:
			uParam1->f_4 = { 1215.731f, 1819.276f, 77.957f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 121:
			uParam1->f_4 = { 2700.918f, 1559.111f, 23.527f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 122:
			uParam1->f_4 = { 186.915f, 3056.921f, 41.959f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 123:
			uParam1->f_4 = { -124.3542f, 1883.494f, 196.7805f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 124:
			uParam1->f_4 = { 1433.62f, 1182.607f, 113.194f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 125:
			uParam1->f_4 = { 2077.199f, 2340.758f, 93.3144f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 126:
			uParam1->f_4 = { 2869.919f, 4711.485f, 47.8156f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 127:
			uParam1->f_4 = { -3196.817f, 962.4005f, 17.1183f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 128:
			uParam1->f_4 = { -3043.259f, 133.9678f, 10.6028f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 129:
			uParam1->f_4 = { -1657.024f, -224.0322f, 54.0132f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 130:
			uParam1->f_4 = { -1065.002f, -1443.479f, 4.4254f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 131:
			uParam1->f_4 = { 37.752f, -1608.548f, 28.357f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 132:
			uParam1->f_4 = { -1174.63f, -735.4771f, 19.2095f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 133:
			uParam1->f_4 = { -1336.968f, -1297.628f, 3.838f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 134:
			uParam1->f_4 = { 372.931f, -2132.614f, 15.2837f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 135:
			uParam1->f_4 = { 164.893f, -981.952f, 29.092f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 136:
			uParam1->f_4 = { -633.342f, -71.931f, 39.44f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 137:
			uParam1->f_4 = { -3109.526f, 221.046f, 5.814f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 138:
			uParam1->f_4 = { -1917.599f, 629.539f, 124.01f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 139:
			uParam1->f_4 = { -1291.788f, -268.334f, 38.298f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 140:
			uParam1->f_4 = { -97.476f, 91.144f, 70.777f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 141:
			uParam1->f_4 = { 860.49f, -916.962f, 24.923f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 142:
			uParam1->f_4 = { 1359.713f, 1147.29f, 113.3128f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 143:
			uParam1->f_4 = { 643.5014f, 195.1281f, 95.1524f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 144:
			uParam1->f_4 = { 477.2894f, -1158.148f, 28.2918f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 145:
			uParam1->f_4 = { 12.1334f, -1742.4f, 28.3029f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 146:
			uParam1->f_4 = { 946.0427f, -2185.876f, 29.5616f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 147:
			uParam1->f_4 = { -672.3598f, -1823.936f, 27.8611f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 148:
			uParam1->f_4 = { 18.1799f, -2485.081f, 5.0068f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 149:
			uParam1->f_4 = { 1096.543f, -3142.269f, 4.9008f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 150:
			uParam1->f_4 = { 1129.265f, -2382.284f, 30.2488f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 151:
			uParam1->f_4 = { 1735.333f, -1431.009f, 111.637f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 152:
			uParam1->f_4 = { 313.451f, -2022.135f, 19.4894f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 153:
			uParam1->f_4 = { 1142.636f, -2511.395f, 32.2916f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 154:
			uParam1->f_4 = { 1687.536f, -1583.242f, 111.5227f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 155:
			uParam1->f_4 = { 1374.894f, -739.6987f, 66.2329f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 156:
			uParam1->f_4 = { 1902.062f, 418.819f, 162.108f };
			*uParam1 = { uParam1->f_4 };
			break;
	}
	if ((((((((((((iParam0 != 96 && iParam0 != 101) && iParam0 != 106) && iParam0 != 111) && iParam0 != 116) && iParam0 != 121) && iParam0 != 126) && iParam0 != 131) && iParam0 != 136) && iParam0 != 141) && iParam0 != 146) && iParam0 != 151) && iParam0 != 156)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), 2);
	}
}

void func_1091(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 72:
			uParam1->f_4 = { -227.4169f, 2062.385f, 138.4856f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 73:
			uParam1->f_4 = { 2772.322f, 2845.964f, 34.8882f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 74:
			uParam1->f_4 = { 2989.183f, 3466.004f, 70.351f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 75:
			uParam1->f_4 = { -2666.346f, 3455.672f, 14.1713f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 76:
			uParam1->f_4 = { 1492.691f, 3579.083f, 34.2291f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 77:
			uParam1->f_4 = { -2379.711f, 4278.755f, 9.1551f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 78:
			uParam1->f_4 = { 2500.738f, 4294.372f, 38.1973f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 79:
			uParam1->f_4 = { -1848.626f, 4419.534f, 48.1508f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 80:
			uParam1->f_4 = { -1566.002f, 4485.896f, 20.2007f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 81:
			uParam1->f_4 = { -386.5953f, 6380.837f, 13.0622f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 82:
			uParam1->f_4 = { 1186.324f, -3241.427f, 5.0288f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 83:
			uParam1->f_4 = { 210.987f, -3127.62f, 4.7903f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 84:
			uParam1->f_4 = { 302.8576f, -2857.04f, 5.0245f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 85:
			uParam1->f_4 = { 1635.403f, -2370.956f, 92.9864f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 86:
			uParam1->f_4 = { 853.4637f, -2437.818f, 26.9939f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 87:
			uParam1->f_4 = { -1226.498f, -2393.574f, 12.9452f };
			*uParam1 = { uParam1->f_4 };
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), false);
			break;
		
		case 88:
			uParam1->f_4 = { 900.6783f, -1736.104f, 29.4254f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 89:
			uParam1->f_4 = { 1737.746f, -1534.781f, 111.6664f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 90:
			uParam1->f_4 = { 485.929f, -1394.48f, 28.2951f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 91:
			uParam1->f_4 = { -146.8984f, -1347.38f, 28.6772f };
			*uParam1 = { uParam1->f_4 };
			break;
			break;
	}
}

void func_1092(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 367:
			uParam1->f_4 = { -725.8421f, -2213.141f, 5.003f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 368:
			uParam1->f_4 = { -315.874f, -2552.008f, 5.0006f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 369:
			uParam1->f_4 = { 144.4716f, -2807.349f, 5.0002f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 370:
			uParam1->f_4 = { 1142.307f, -3277.464f, 4.9007f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 371:
			uParam1->f_4 = { 791.4049f, -2482.021f, 19.9127f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 372:
			uParam1->f_4 = { -34.7159f, -2418.303f, 5f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 373:
			uParam1->f_4 = { -947.4313f, -3531.936f, 13.0788f };
			*uParam1 = { uParam1->f_4 };
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), false);
			break;
		
		case 374:
			uParam1->f_4 = { 1482.078f, -2436.562f, 65.2259f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 375:
			uParam1->f_4 = { 821.9077f, -2937.065f, 4.9042f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 376:
			uParam1->f_4 = { -1157.331f, -2885.625f, 12.9456f };
			*uParam1 = { uParam1->f_4 };
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_16), false);
			break;
		
		case 357:
			uParam1->f_4 = { -2884.53f, 3492.161f, 8.2728f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 358:
			uParam1->f_4 = { 1840.318f, 1813.824f, 66.5145f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 359:
			uParam1->f_4 = { 2074.879f, 4605.449f, 34.5385f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 360:
			uParam1->f_4 = { 2801.846f, 4749.39f, 45.4179f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 361:
			uParam1->f_4 = { 2766.352f, 1700.96f, 23.7017f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 362:
			uParam1->f_4 = { -1543.172f, 2856.046f, 30.1456f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 363:
			uParam1->f_4 = { -3131f, 1284.291f, 19.8153f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 364:
			uParam1->f_4 = { -564.372f, 6363.489f, 2.2542f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 365:
			uParam1->f_4 = { 754.9817f, 6609.063f, 1.3558f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 366:
			uParam1->f_4 = { 1026.274f, 4338.423f, 40.0694f };
			*uParam1 = { uParam1->f_4 };
			break;
	}
}

void func_1093(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 12:
			uParam1->f_4 = { 17.2985f, 6579.499f, 31.3584f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 13:
			uParam1->f_4 = { 408.3282f, 6611.388f, 26.876f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 14:
			uParam1->f_4 = { 21.6079f, 6516.493f, 30.4948f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 15:
			uParam1->f_4 = { -206.043f, 6455.797f, 30.1761f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 16:
			uParam1->f_4 = { -225.5175f, 6436.706f, 30.1974f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 17:
			uParam1->f_4 = { -128.7701f, 6342.206f, 30.4904f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 18:
			uParam1->f_4 = { -353.8975f, 6334.597f, 28.8339f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 19:
			uParam1->f_4 = { -315.1533f, 6312.473f, 31.3387f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 20:
			uParam1->f_4 = { -433.5699f, 6260.372f, 29.2542f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 21:
			uParam1->f_4 = { -258.5444f, 6223.631f, 30.4892f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 22:
			uParam1->f_4 = { -274.8564f, 6170.648f, 30.4898f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 23:
			uParam1->f_4 = { -441.0088f, 6144.66f, 30.4783f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 24:
			uParam1->f_4 = { 2244.295f, 5175.046f, 59.1204f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 25:
			uParam1->f_4 = { 2011.648f, 4969.727f, 40.5599f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 26:
			uParam1->f_4 = { 2309.9f, 4753.106f, 36.0693f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 27:
			uParam1->f_4 = { -1351.068f, 4844.388f, 136.8821f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 28:
			uParam1->f_4 = { 1679.104f, 4653.37f, 42.3712f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 29:
			uParam1->f_4 = { 1712.925f, 4747.414f, 40.9356f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 30:
			uParam1->f_4 = { 2936.587f, 4487.754f, 46.8833f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 31:
			uParam1->f_4 = { 1881.445f, 3761.149f, 31.9154f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 32:
			uParam1->f_4 = { 1891.136f, 3711.45f, 31.8388f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 33:
			uParam1->f_4 = { 923.1298f, 3646.537f, 31.5969f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 34:
			uParam1->f_4 = { 1360.123f, 3599.097f, 33.8908f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 35:
			uParam1->f_4 = { 436.2162f, 3550.248f, 32.2386f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 36:
			uParam1->f_4 = { -2235.781f, 3475.785f, 29.33f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 37:
			uParam1->f_4 = { 1206.722f, 2716.476f, 37.0042f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 38:
			uParam1->f_4 = { 994.0612f, 2656.839f, 39.1282f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 39:
			uParam1->f_4 = { 2864.118f, 1473.196f, 23.5583f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 40:
			uParam1->f_4 = { 1775.074f, 3652.844f, 33.3731f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 41:
			uParam1->f_4 = { -258.8979f, 6251.875f, 30.4892f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 42:
			uParam1->f_4 = { -2001.644f, 454.9861f, 101.4866f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 43:
			uParam1->f_4 = { -181.7756f, 319.9248f, 96.7999f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 44:
			uParam1->f_4 = { -152.1834f, 201.6567f, 89.9091f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 45:
			uParam1->f_4 = { -1935.115f, 183.2173f, 83.5954f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 46:
			uParam1->f_4 = { 351.9804f, 21.8583f, 84.4991f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 47:
			uParam1->f_4 = { 195.2451f, -157.1152f, 55.6824f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 48:
			uParam1->f_4 = { -1490.21f, -203.8835f, 49.3974f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 49:
			uParam1->f_4 = { 941.5977f, -247.444f, 67.5999f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 50:
			uParam1->f_4 = { -531.7662f, -43.3292f, 41.4131f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 51:
			uParam1->f_4 = { -1308.971f, -410.3486f, 33.557f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 52:
			uParam1->f_4 = { 914.3543f, -489.5208f, 58.0344f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 53:
			uParam1->f_4 = { 1242.42f, -578.4505f, 68.4043f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 54:
			uParam1->f_4 = { -1273.175f, -607.2695f, 25.484f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 55:
			uParam1->f_4 = { 322.7755f, -683.6807f, 28.3018f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 56:
			uParam1->f_4 = { 916.045f, -641.1888f, 56.8682f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 57:
			uParam1->f_4 = { -1360.594f, -780.0303f, 18.7525f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 58:
			uParam1->f_4 = { -617.1512f, -784.4778f, 24.1344f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 59:
			uParam1->f_4 = { -1364.377f, -898.3317f, 11.4705f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 60:
			uParam1->f_4 = { -1440.974f, -871.7243f, 9.9175f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 61:
			uParam1->f_4 = { 450.0986f, -934.5388f, 27.58f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 62:
			uParam1->f_4 = { 1135.143f, -974.3087f, 45.5844f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 63:
			uParam1->f_4 = { -1327.618f, -1027.488f, 6.7181f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 64:
			uParam1->f_4 = { -600.9597f, -1091.987f, 21.1781f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 65:
			uParam1->f_4 = { -1248.995f, -1211.936f, 6.1084f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 66:
			uParam1->f_4 = { -1097.926f, -1505.146f, 3.6901f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 67:
			uParam1->f_4 = { 1318.131f, -1663.014f, 50.2364f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 68:
			uParam1->f_4 = { 267.6798f, -1721.867f, 28.2842f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 69:
			uParam1->f_4 = { 954.9901f, -2004.117f, 29.2387f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 70:
			uParam1->f_4 = { 1003.837f, -2364.251f, 29.5096f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 71:
			uParam1->f_4 = { -694.7249f, -2453.918f, 12.8718f };
			*uParam1 = { uParam1->f_4 };
			break;
	}
}

int func_1094(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xFC8BFE4B41177C22(*iParam0))
	{
		return 0;
	}
	if (unk_0xFE90F09EC43D7D44(*iParam0))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(*iParam0, 0);
		if (unk_0xFC8BFE4B41177C22(iVar0) && func_1095(&iVar0))
		{
			iVar1 = unk_0xA60E0FC9E433408C(iVar0);
			if (unk_0xFC8BFE4B41177C22(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1095(int iParam0)
{
	if (!unk_0xFC8BFE4B41177C22(*iParam0))
	{
		return 0;
	}
	if (((unk_0x4B423FAA24E8ABF0(*iParam0) == joaat("cargobob") || unk_0x4B423FAA24E8ABF0(*iParam0) == joaat("cargobob2")) || unk_0x4B423FAA24E8ABF0(*iParam0) == joaat("cargobob3")) || unk_0x4B423FAA24E8ABF0(*iParam0) == joaat("cargobob4"))
	{
		return 1;
	}
	return 0;
}

int func_1096(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xFC8BFE4B41177C22(*iParam0))
	{
		return 0;
	}
	if (unk_0x7F420695E3F776FB(*iParam0, 0))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(*iParam0, 0);
		if (unk_0xFC8BFE4B41177C22(iVar0))
		{
			if (unk_0xB431D60610E7F85F(iVar0))
			{
				iVar1 = unk_0xAD0F9A0F639285AA(iVar0);
				if (unk_0xFC8BFE4B41177C22(iVar1))
				{
					iVar2 = unk_0xE93EDE86BBB66532(iVar1);
					if (unk_0xFC8BFE4B41177C22(iVar2) && func_1095(&iVar2))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_1097(int iParam0)
{
	if (unk_0x7F420695E3F776FB(*iParam0, 0))
	{
		if (!func_1098(unk_0x1C1C92A1CBAE364B(*iParam0), unk_0x6EF03BE64E058E2F(*iParam0, 1)))
		{
			return 4;
		}
		else if (unk_0xE70AAE8EBF7D65BD(*iParam0))
		{
			return 2;
		}
		else if (unk_0xFE90F09EC43D7D44(*iParam0))
		{
			return 3;
		}
		else if (unk_0x7F420695E3F776FB(*iParam0, 0))
		{
			return 1;
		}
		return 0;
	}
	return 4;
}

int func_1098(bool bParam0, int iParam1)
{
	if (func_703(iParam1) && func_9(bParam0, 1, 1))
	{
		if (func_1104(bParam0))
		{
			if (func_1103(bParam0, 1))
			{
				if ((func_81(bParam0, 1) && func_1101(iParam1) != func_107(bParam0)) || func_1099(iParam1, bParam0))
				{
					return 0;
				}
			}
			else if (func_1099(iParam1, bParam0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_1099(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = unk_0x259BE71D8A81D4FA();
	if (!func_81(unk_0x259BE71D8A81D4FA(), 1))
	{
		if (bParam1 != func_74())
		{
			bVar0 = bParam1;
		}
		else
		{
			return 0;
		}
	}
	if (func_703(iParam0))
	{
		iVar1 = func_1100(iParam0, 1, 0, 1);
		bVar2 = false;
		while (bVar2 < 32)
		{
			if (BitTest(iVar1, bVar2))
			{
				if (func_9(unk_0xB23E0F9B63D009A8(bVar2), 0, 1))
				{
					if (func_81(unk_0xB23E0F9B63D009A8(bVar2), 1) && !func_106(bVar0, unk_0xB23E0F9B63D009A8(bVar2)))
					{
						return 1;
					}
				}
			}
			bVar2++;
		}
	}
	return 0;
}

int func_1100(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar3 = unk_0xB23E0F9B63D009A8(bVar1);
		if (func_9(bVar3, 1, 0))
		{
			if (unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(bVar3), iParam3))
			{
				if (!unk_0x423F801F012D944B(bVar3))
				{
					iVar2 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(bVar3), iParam3);
					if (iVar2 == iParam0)
					{
						if (unk_0x1864096A95E36EBA(bVar3) == unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) || !bParam2)
						{
							if (bVar3 != unk_0x259BE71D8A81D4FA() || iParam1)
							{
								unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
							}
						}
					}
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_1101(int iParam0)
{
	int iVar0;
	
	if (!func_1022(iParam0, 1))
	{
		return func_74();
	}
	iVar0 = unk_0xE2F6FE9B61232165(iParam0, "Player_Vehicle");
	return func_1102(iVar0, 0, 1, 0);
}

bool func_1102(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			bVar0 = unk_0xB23E0F9B63D009A8(iVar1);
			if (func_9(bVar0, 0, 1) || (iParam1 && unk_0x89BE185F885B6CD6(bVar0)))
			{
				if (iParam0 == unk_0x3351FEF40EC734DB(bVar0))
				{
					return bVar0;
				}
			}
			bVar1++;
		}
	}
	else if (func_9(bParam3, 0, 1) || (iParam1 && unk_0x89BE185F885B6CD6(bParam3)))
	{
		if (iParam0 == unk_0x3351FEF40EC734DB(bParam3))
		{
			return bParam3;
		}
	}
	return func_74();
}

int func_1103(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (func_9(bParam0, 1, 1))
	{
		iVar0 = unk_0x56E414973C2A8C0E(bParam0);
		if (unk_0x7F420695E3F776FB(iVar0, iParam1))
		{
			if (func_1022(unk_0x6EF03BE64E058E2F(iVar0, iParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1104(bool bParam0)
{
	struct<2> Var0;
	int iVar1;
	
	if (func_1108(bParam0))
	{
		Var0 = { func_1106(bParam0, -1, 0) };
		if (func_497(Var0))
		{
			iVar1 = func_498(Var0);
			if (func_1105(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1105(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<27> Var4;
	var uVar5[26];
	
	iVar0 = 27;
	iVar1 = 27;
	iVar2 = 26;
	iVar3 = 26;
	if (iVar0 != iVar1)
	{
		return 0;
	}
	if (iVar3 != iVar2)
	{
	}
	Var4 = 26;
	Var4.f_2 = 1;
	Var4.f_3 = 1;
	Var4.f_4 = 1;
	Var4.f_5 = 1;
	Var4.f_6 = 1;
	Var4.f_7 = 1;
	Var4.f_8 = 1;
	Var4.f_9 = 1;
	Var4.f_10 = 1;
	Var4.f_11 = 1;
	Var4.f_12 = 1;
	Var4.f_13 = 1;
	Var4.f_14 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_17 = 1;
	Var4.f_18 = 1;
	Var4.f_19 = 1;
	Var4.f_20 = 1;
	Var4.f_21 = 1;
	Var4.f_22 = 1;
	Var4.f_23 = 1;
	Var4.f_24 = 1;
	Var4.f_25 = 1;
	Var4.f_26 = 1;
	unk_0xDD7F149F8BAF1260(&uVar5, &Var4, 27);
	return uVar5[iParam0];
}

struct<2> func_1106(bool bParam0, int iParam1, bool bParam2)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_1 = -1;
	if (!func_1108(bParam0))
	{
		return Var0;
	}
	if ((func_9(bParam0, 0, 1) && iParam1 > -2) && iParam1 < 5)
	{
		if (iParam1 == -1)
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if ((func_497(Global_1894573[bParam0 /*608*/].f_556.f_1[iVar1 /*2*/]) && func_501(Global_1894573[bParam0 /*608*/].f_556.f_1[iVar1 /*2*/])) && (!bParam2 || !func_1107(Global_1894573[bParam0 /*608*/].f_556.f_1[iVar1 /*2*/])))
				{
					return Global_1894573[bParam0 /*608*/].f_556.f_1[iVar1 /*2*/];
				}
				iVar1++;
			}
		}
		else
		{
			iVar2 = iParam1;
			if (func_497(Global_1894573[bParam0 /*608*/].f_556.f_1[iVar2 /*2*/]) && func_501(Global_1894573[bParam0 /*608*/].f_556.f_1[iVar2 /*2*/]))
			{
				return Global_1894573[bParam0 /*608*/].f_556.f_1[iVar2 /*2*/];
			}
		}
	}
	return Var0;
}

int func_1107(struct<2> Param0)
{
	if (func_497(Param0))
	{
		if (func_496(Param0) == 2 || func_495(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_556.f_12, Param0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1108(bool bParam0)
{
	if (bParam0 != func_74() && func_9(bParam0, 0, 1))
	{
		return BitTest(Global_1894573[bParam0 /*608*/].f_556, 0);
	}
	return 0;
}

int func_1109(var uParam0)
{
	return func_1110(func_1111(&uParam0));
}

int func_1110(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 159:
			return 32;
			break;
		
		case 70:
			return 21;
			break;
		
		case 71:
			return 22;
			break;
		
		case 72:
			return 23;
			break;
		
		case 73:
			return 24;
			break;
		
		case 74:
			return 25;
			break;
		
		case 75:
			return 26;
			break;
		
		case 76:
			return 27;
			break;
		
		case 77:
			return 28;
			break;
		
		case 78:
			return 29;
			break;
		
		case 79:
			return 30;
			break;
		
		case 80:
			return 31;
			break;
	}
	return 0;
}

int func_1111(var uParam0)
{
	switch (*uParam0)
	{
		case 1:
			return 70;
		
		case 2:
			return 71;
		
		case 3:
			return 72;
		
		case 4:
			return 73;
		
		case 5:
			return 74;
		
		case 6:
			return 75;
		
		case 7:
			return 76;
		
		case 8:
			return 77;
		
		case 9:
			return 78;
		
		case 10:
			return 79;
		
		case 11:
			return 80;
		
		default:
	}
	return -1;
}

bool func_1112(var uParam0)
{
	return (*uParam0 >= 1 && *uParam0 <= 11);
}

void func_1113(var uParam0, int iParam1, var uParam2, var uParam3)
{
	if (iParam1 == 2)
	{
		*uParam2 = 0;
		*uParam3 = 1;
	}
	else if (iParam1 == 3 || iParam1 == 1)
	{
		*uParam2 = 1;
		*uParam3 = 1;
	}
	else if (iParam1 == 23)
	{
		*uParam2 = 1;
		*uParam3 = 1;
	}
}

int func_1114(int iParam0)
{
	if ((func_990(&iParam0) == 14 || func_990(&iParam0) == 15) || func_990(&iParam0) == 19)
	{
		return 0;
	}
	return 1;
}

int func_1115(int iParam0)
{
	int iVar0;
	
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 18)
		{
			if (Global_1956139.f_5653[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_1116(int iParam0, int iParam1)
{
	Local_217[iParam0 /*21*/].f_18 = iParam1;
}

void func_1117()
{
	func_1118(0f, 0f, 0f, 1, 0);
}

void func_1118(struct<3> Param0, int iParam1, int iParam2)
{
	Global_2635559.f_45.f_49 = { Param0 };
	Global_2635559.f_45.f_52 = iParam1;
	Global_2635559.f_45.f_53 = iParam2;
}

void func_1119()
{
	func_668("IDJ_RECOVER", "IDJ_KM_STNS_OBJ", 18, 0);
}

void func_1120(int iParam0, int iParam1)
{
	Local_217[iParam0 /*21*/].f_17 = iParam1;
}

void func_1121()
{
	func_1118(Local_197.f_613.f_1[0 /*11*/], 1, 0);
}

void func_1122()
{
	func_668("ILH_TKE_OUT", "IDJ_THIEVES", 6, 0);
}

void func_1123()
{
	func_668("ILH_GOTO_THE", "IDJ_LOC_TR_PARK", 12, 0);
}

void func_1124()
{
	func_679(0, 4);
	func_678(0, 1);
	func_679(1, 7);
	func_676(1, 2, 247926);
	func_679(2, 39);
	func_676(2, 3, 247913);
	func_679(3, 4);
	func_676(3, 4, 247892);
	func_679(4, 48);
}

int func_1125()
{
	if (func_650(0))
	{
		return 1;
	}
	return 0;
}

bool func_1126()
{
	return func_707(5);
}

bool func_1127()
{
	return func_707(4);
}

void func_1128(var uParam0, int iParam1)
{
	if (bLocal_616)
	{
		if (func_739(iParam1, 9))
		{
			func_738(14);
		}
	}
}

void func_1129()
{
	if (func_965(func_636(), &uLocal_697, 1, 0))
	{
		func_741(9);
	}
	else
	{
		func_850(9);
	}
	if (bLocal_616)
	{
		if (func_707(14))
		{
			func_848(14);
		}
	}
}

void func_1130()
{
	if (!func_707(6))
	{
		if (func_1131() > 0)
		{
			func_738(6);
		}
	}
	if (!func_707(7))
	{
		if (func_1131() >= 4)
		{
			func_70(2, 0, 3000);
			func_738(7);
		}
	}
	if (!func_707(4))
	{
		if (func_1131() == 5)
		{
			func_738(4);
		}
	}
	if (!func_707(5))
	{
		Local_674.f_540.f_4 = func_956();
		if (Local_674.f_540.f_4 == 5)
		{
			func_738(5);
		}
	}
}

int func_1131()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_43(iVar1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1132()
{
	func_1133();
}

void func_1133()
{
	if (!func_9(func_107(bLocal_618), 1, 1))
	{
		return;
	}
	func_852(func_636(), unk_0xED977E2AE2CB16EE(func_102(func_107(bLocal_618)), func_1134(), 1) > 100f);
}

Vector3 func_1134()
{
	if (Local_214.f_554.f_4.f_2 != 0)
	{
		Call_Loc(Local_214.f_554.f_4.f_2);
		return StackVal, StackVal, StackVal;
	}
	return func_1135(func_636());
}

Vector3 func_1135(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (bLocal_615 && unk_0x7F420695E3F776FB(iLocal_620, 0))
	{
		if (unk_0xBA16CD57E37AC32A(iLocal_625))
		{
			Var0 = { func_1136(iParam0) };
			if (!func_33(Var0))
			{
				return Var0;
			}
		}
		Var1 = { func_724(iParam0) };
		if (!func_33(Var1))
		{
			return Var1;
		}
	}
	return func_635(iParam0);
}

Vector3 func_1136(int iParam0)
{
	switch (iParam0)
	{
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 801:
		case 802:
			return func_1137(func_1002(iParam0));
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_1137(int iParam0)
{
	switch (iParam0)
	{
		case 155:
			return 394.2626f, -64.7225f, 123.3813f;
		
		case 156:
			return -1007.682f, -415.8003f, 79.1788f;
		
		case 157:
			return -597.309f, -717.4868f, 130.0455f;
		
		case 158:
			return -1012.96f, -757.0606f, 80.7534f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_1138()
{
	func_1139();
	return 1;
}

void func_1139()
{
	if (!func_909(153, 3))
	{
		func_895(153, 3, 1);
	}
}

void func_1140()
{
	int iVar0;
	
	func_1141(1, 0);
	Local_197.f_692 = 1;
	Local_197.f_77.f_254[0 /*10*/].f_1[0] = 0;
	Local_197.f_77.f_254[0 /*10*/].f_1[1] = 1;
	Local_197.f_77.f_254[0 /*10*/].f_1[2] = 2;
	Local_197.f_77.f_254[0 /*10*/].f_1[3] = 3;
	Local_197.f_77.f_254[0 /*10*/].f_1[4] = 4;
	Local_197.f_77.f_254[0 /*10*/].f_1[5] = 5;
	Local_197.f_77.f_1[2 /*21*/].f_7 = joaat("weapon_dbshotgun");
	Local_197.f_77.f_1[4 /*21*/].f_7 = joaat("weapon_flaregun");
	Local_197.f_539 = 5;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Local_197.f_539.f_1[iVar0 /*12*/] = joaat("h4_prop_battle_chakrastones_01a");
		Local_197.f_539.f_1[iVar0 /*12*/].f_5 = { 0f, 0f, 90f };
		iVar0++;
	}
	Local_197.f_19 = 1;
	Local_197.f_19.f_5[0 /*13*/].f_11 = 1;
	Local_197.f_19.f_5[0 /*13*/].f_3 = { Local_197.f_613.f_1[1 /*11*/] };
	Local_197.f_19.f_5[0 /*13*/].f_2 = joaat("prop_drug_package");
	func_743(0, 6);
	Local_197.f_613.f_1[1 /*11*/].f_6 = 1400f;
	Local_197.f_835[0 /*6*/] = 1;
	Local_197.f_835[0 /*6*/].f_1 = "IDJ_HUD_STONES";
	Local_197.f_835[0 /*6*/].f_2 = 5;
	Local_197.f_604 = 30;
	Local_197.f_604.f_1 = 2;
}

void func_1141(int iParam0, int iParam1)
{
	if (func_17(&(Local_197.f_613.f_1[iParam0 /*11*/].f_4), iParam1))
	{
	}
}

void func_1142()
{
	Local_214.f_13 = 251943;
	Local_214.f_2 = 251930;
	Local_214.f_3.f_1 = 251918;
	Local_214.f_3.f_4 = 251835;
	Local_214.f_3.f_4.f_1 = 251804;
	Local_214.f_11 = 251751;
	Local_214.f_11.f_1 = 251491;
	Local_214.f_100.f_3.f_3 = 158692;
	Local_214.f_100.f_3.f_2 = 158680;
	Local_214.f_120.f_13 = 251479;
	Local_214.f_120.f_5 = 251469;
	Local_214.f_120.f_4 = 251457;
	Local_214.f_88.f_1 = 251433;
	Local_214.f_554.f_2 = 251414;
	Local_214.f_162.f_173.f_1 = 251403;
	Local_214.f_162.f_173 = 251364;
	Local_214.f_162.f_173.f_3 = 251355;
	Local_214.f_162.f_192 = 251260;
	Local_214.f_162 = 250866;
	Local_214.f_162.f_2.f_82 = 250787;
	Local_214.f_162.f_2.f_28 = 250777;
	Local_214.f_162.f_2.f_28.f_1 = 250519;
	Local_214.f_162.f_2.f_28.f_14 = 250510;
	Local_214.f_162.f_142.f_1 = 250501;
	Local_214.f_162.f_142.f_1.f_5 = 250464;
	Local_214.f_162.f_142.f_1.f_4 = 250455;
	Local_214.f_162.f_142.f_1.f_1 = 250442;
	Local_214.f_373.f_43 = 250406;
	Local_214.f_373.f_44 = 250251;
	Local_214.f_92 = 250236;
	Local_214.f_92.f_3 = 250227;
	Local_214.f_92.f_4 = 250215;
	Local_214.f_92.f_1 = 250187;
	Local_214.f_517.f_1 = 250017;
	Local_214.f_517 = 249933;
	Local_214.f_526.f_5 = 249923;
	Local_214.f_526.f_4 = 249889;
	Local_214.f_526.f_6 = 249857;
	Local_214.f_533.f_13 = 249763;
	Local_214.f_533.f_9 = 249751;
	Local_214.f_533.f_12 = 249668;
	Local_214.f_533.f_5 = 249659;
	Local_214.f_533.f_10 = 249647;
	Local_214.f_533.f_11 = 249637;
	Local_214.f_533.f_2 = 249628;
	Local_214.f_533.f_6 = 249619;
	Local_214.f_533.f_16 = 249589;
	Local_214.f_70 = 156324;
}

void func_1143(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_741(8);
			break;
	}
}

int func_1144()
{
	return -1;
}

int func_1145(var uParam0)
{
	return 0;
}

int func_1146(var uParam0)
{
	return 153;
}

char* func_1147(var uParam0, var uParam1)
{
	return "BTL_DAVE";
}

int func_1148(var uParam0)
{
	return 1;
}

int func_1149(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_775() == 24 && func_13(&uLocal_703, 10000, 0));
		
		case 1:
			return (func_775() == 24 && Local_548[0 /*7*/].f_2 < 100f);
		
		default:
	}
	return 0;
}

char* func_1150(var uParam0)
{
	return "HS4EDAU";
}

char* func_1151(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (unk_0xC5935DFB3F39785A(0, 3))
			{
				case 0:
					return "HS4ED_GUC1";
				
				case 1:
					return "HS4ED_GUC2";
				
				case 2:
					return "HS4ED_GUC3";
				
				default:
			}
			break;
		
		case 1:
			return "HS4ED_PPM1";
			break;
	}
	return "";
}

char* func_1152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_KM_TXT_PIZ";
		
		default:
	}
	return "";
}

int func_1153(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return fLocal_646 < 500f;
		
		default:
	}
	return 0;
}

int func_1154(var uParam0)
{
	return 153;
}

char* func_1155(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_KM_HLP_PZT";
		
		case 1:
			return "IDJ_KM_HLP_DVR";
		
		case 2:
			return "IDJ_KM_HLP_CHS";
		
		case 3:
			return "IDJ_KM_HLP_BSD";
		
		case 4:
			return "IDJ_KM_HLP_BSL";
		
		default:
	}
	return "";
}

int func_1156(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_1158() == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fLocal_646 < 500f)
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_1158() == 1)
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_1157() == 3 && !func_930())
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_1157() == 3 && func_930())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1157()
{
	return func_640();
}

int func_1158()
{
	return func_22();
}

int func_1159(var uParam0)
{
	if (!func_13(&uLocal_709, 3000, 0))
	{
		return 1;
	}
	return 0;
}

char* func_1160(var uParam0)
{
	return "IDJ_PZ_FOCUS";
}

int func_1161(var uParam0)
{
	return 1;
}

bool func_1162(var uParam0)
{
	return func_775() == 22;
}

int func_1163(int iParam0, var uParam1)
{
	switch (Local_197.f_356.f_1[iParam0 /*15*/].f_3)
	{
		case joaat("faggio"):
			uParam1->f_66 = joaat("faggio");
			StringCopy(&(uParam1->f_1), "P1ZZ4", 16);
			*uParam1 = 3;
			uParam1->f_5 = 28;
			uParam1->f_6 = 53;
			uParam1->f_7 = 28;
			uParam1->f_8 = 1;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 6;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[11] = 4;
			uParam1->f_9[22] = 1;
			break;
		
		default:
			return 0;
	}
	return 1;
}

void func_1164(int iParam0, int iParam1)
{
	if (Local_197.f_356.f_1[iParam0 /*15*/].f_3 == joaat("faggio"))
	{
		unk_0x70BAF7723F26069A(iParam1, 1);
	}
}

float func_1165(var uParam0)
{
	return 15f;
}

int func_1166(var uParam0)
{
	return 1;
}

void func_1167(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_117())
		{
			func_809(iParam0, 1);
		}
		else
		{
			func_809(iParam0, 2);
		}
	}
}

int func_1168(var uParam0)
{
	return 1;
}

int func_1169()
{
	return 1;
}

Vector3 func_1170(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return 298.2737f, 161.3832f, 103.104f;
		
		case 1:
			return 272.7557f, 158.9814f, 103.4403f;
		
		case 2:
			return 257.2968f, 115.6647f, 99.1878f;
		
		case 3:
			return 236.3171f, 57.1677f, 84.4952f;
		
		case 4:
			return 226.4263f, 49.2641f, 83.0705f;
		
		case 5:
			return 181.252f, 65.1596f, 82.545f;
		
		case 6:
			return 163.1799f, 80.2115f, 83.6059f;
		
		case 7:
			return 144.3906f, 84.8557f, 82.6487f;
		
		case 8:
			return 29.5628f, 124.5115f, 83.8743f;
		
		case 9:
			return -15.8644f, 137.0026f, 86.693f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_1171(var uParam0)
{
	return 10;
}

int func_1172(int iParam0)
{
	if (Local_197.f_77.f_1[iParam0 /*21*/].f_8 != -1)
	{
		if (unk_0x93BF17E19A9F0E9B(Local_674.f_353[Local_197.f_77.f_1[iParam0 /*21*/].f_8 /*8*/]))
		{
			return unk_0xE38610F405049F71(Local_674.f_353[Local_197.f_77.f_1[iParam0 /*21*/].f_8 /*8*/]);
		}
	}
	return -1;
}

void func_1173(int iParam0)
{
	func_608(iParam0, 0, 8);
	func_604(iParam0, 0, 1, 251247);
	func_608(iParam0, 1, 12);
	func_604(iParam0, 1, 2, 251232);
	func_604(iParam0, 1, 3, 251217);
	func_608(iParam0, 3, 7);
	func_604(iParam0, 3, 2, 250968);
	func_608(iParam0, 2, 2);
	func_604(iParam0, 2, 3, 251217);
}

int func_1174(int iParam0, int iParam1)
{
	if (!unk_0xFC8BFE4B41177C22(unk_0x11330C43B3678209(iParam1, 1)))
	{
		unk_0xAAA71DD7E9059338(iParam1, 0);
		func_1177(iParam0);
		func_1175(iParam0);
		return 1;
	}
	return 0;
}

void func_1175(int iParam0)
{
	func_1176(iParam0, 8);
	func_1176(iParam0, 1);
	func_1176(iParam0, 11);
	func_1176(iParam0, 10);
	func_1176(iParam0, 9);
	func_1176(iParam0, 7);
	func_1176(iParam0, 0);
}

void func_1176(int iParam0, int iParam1)
{
	if (func_131(&(Local_696[iLocal_622 /*118*/].f_16[iParam0 /*2*/]), iParam1))
	{
	}
}

void func_1177(int iParam0)
{
	func_1178(Local_197.f_77.f_1[iParam0 /*21*/].f_14);
	func_130(iParam0, 11);
	func_130(iParam0, 1);
	func_130(iParam0, 14);
	func_130(iParam0, 13);
	func_130(iParam0, 12);
	func_130(iParam0, 10);
	func_130(iParam0, 0);
}

void func_1178(bool bParam0)
{
	if (BitTest(Local_674.f_430, bParam0))
	{
		unk_0x8744D2E3FC95740E(&(Local_674.f_430), bParam0);
	}
}

int func_1179(int iParam0, var uParam1)
{
	return func_606(iParam0, 0);
}

bool func_1180(int iParam0, var uParam1)
{
	return func_92(iParam0, 5);
}

bool func_1181(var uParam0, var uParam1)
{
	return func_3(1);
}

void func_1182(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			unk_0xD1C578C204015E1F(iParam1, 0, 0, 1, 0);
			unk_0xD1C578C204015E1F(iParam1, 3, 0, 1, 0);
			unk_0xD1C578C204015E1F(iParam1, 4, 1, 0, 0);
			unk_0xD1C578C204015E1F(iParam1, 8, 1, 1, 0);
			unk_0x7F08C4791E6D6969(iParam1, 0, 0, 0, false, 1);
			unk_0xD25E9BDC14A0B649(iParam1, 300, 0);
			unk_0xBE8796DB2B90A437(iParam1, 46, 1);
			break;
	}
}

int func_1183(var uParam0)
{
	return 1;
}

int func_1184(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return 11;
		
		case 2:
			return 17;
		
		default:
	}
	return 47;
}

int func_1185(var uParam0)
{
	return 5000;
}

bool func_1186(var uParam0)
{
	return Local_590.f_10 > 1400f;
}

int func_1187()
{
	if (bLocal_616)
	{
		return func_707(13);
	}
	return 0;
}

var func_1188(var uParam0)
{
	return unk_0x8CC13B3BF7A9890A();
}

int func_1189(var uParam0)
{
	return 9;
}

char* func_1190(var uParam0)
{
	return "IDJ_SCTR_BLIP";
}

void func_1191()
{
	func_673(0, 4, 251728);
	func_672(0, 1, 1);
	func_646(1, 2, 3, 4, 5, 251705, 251623, 251576, 251553, 1);
	func_673(5, 48, 158841);
}

void func_1192()
{
	func_668("IDJ_RECOVER", "IDJ_SCOOTER", 9, 0);
}

void func_1193()
{
	if (func_930())
	{
		func_961("IDJ_BOSS_GOTO", 0);
	}
	else
	{
		func_654("IDJ_HLPDELV_T", "IDJ_KM_PZA_OBJ", "IDJ_LOC_LSIA", 1, 12, 0);
	}
}

void func_1194()
{
	if (func_1115(func_636()) && func_965(func_636(), &uLocal_697, 1, 0))
	{
		func_964("IDJ_GOON_WAIT", unk_0xBD6CA019F46AB947(func_107(bLocal_618)), 9, 0);
	}
	else
	{
		func_654("IDJ_DELIVER_THE", "IDJ_KM_PZA_OBJ", "IDJ_LOC_LSIA", 1, 12, 0);
	}
}

void func_1195()
{
	func_668("ILH_STEAL", "IDJ_SCOOTER", 9, 0);
}

void func_1196()
{
	func_668("ILH_GOTO_THE", "IDJ_LOC_PZTS", 12, 0);
}

void func_1197()
{
	func_679(0, 4);
	func_678(0, 1);
	func_679(1, 22);
	func_678(1, 2);
	func_679(2, 24);
	func_678(2, 3);
	func_679(3, 48);
}

void func_1198(var uParam0, int iParam1)
{
	if (bLocal_616)
	{
		if (func_739(iParam1, 9))
		{
			func_738(14);
		}
	}
}

void func_1199()
{
	if (func_707(13))
	{
		Local_197.f_604 = 5;
		Local_197.f_604.f_1 = 0;
	}
	if (func_965(func_636(), &uLocal_697, 1, 0))
	{
		func_741(9);
	}
	else
	{
		func_850(9);
	}
	if (bLocal_616)
	{
		if (func_707(14))
		{
			func_848(14);
		}
	}
}

void func_1200()
{
	func_1133();
}

int func_1201()
{
	func_1139();
	return 1;
}

void func_1202()
{
	func_719(17);
	func_682(0, 9);
	func_743(0, 6);
	func_911(0, 10);
	func_911(0, 26);
	func_682(0, 14);
	Local_197.f_77.f_1[0 /*21*/].f_13 = 0;
	Local_197.f_434.f_86[0 /*6*/] = 0;
	Local_197.f_434.f_86[0 /*6*/].f_1 = 2;
	Local_197.f_434.f_86[0 /*6*/].f_2 = 0;
	Local_197.f_434.f_1[0 /*12*/].f_8 = { 0f, 0f, -90f };
}

void func_1203()
{
	Local_214.f_13 = 254298;
	Local_214.f_2 = 254285;
	Local_214.f_3.f_1 = 254240;
	Local_214.f_3 = 254198;
	Local_214.f_3.f_4 = 254138;
	Local_214.f_3.f_4.f_1 = 254107;
	Local_214.f_11 = 254054;
	Local_214.f_11.f_1 = 253798;
	Local_214.f_100.f_3.f_1 = 253727;
	Local_214.f_100.f_3.f_3 = 158692;
	Local_214.f_100.f_3.f_2 = 158680;
	Local_214.f_100.f_3 = 253580;
	Local_214.f_120.f_13 = 253568;
	Local_214.f_120.f_5 = 253558;
	Local_214.f_120.f_4 = 253548;
	Local_214.f_120.f_24 = 253535;
	Local_214.f_120.f_35 = 253521;
	Local_214.f_554.f_2 = 251414;
	Local_214.f_162.f_192 = 253349;
	Local_214.f_162 = 253144;
	Local_214.f_162.f_1 = 253074;
	Local_214.f_517.f_1 = 252950;
	Local_214.f_517 = 252892;
	Local_214.f_533.f_13 = 252798;
	Local_214.f_533.f_9 = 252786;
	Local_214.f_533.f_12 = 252703;
	Local_214.f_533.f_5 = 252694;
	Local_214.f_533.f_10 = 252682;
	Local_214.f_533.f_11 = 252672;
	Local_214.f_533.f_2 = 252663;
	Local_214.f_533.f_6 = 252654;
	Local_214.f_70 = 156324;
	Local_214.f_373.f_43 = 252601;
	Local_214.f_373.f_44 = 252450;
}

int func_1204(int iParam0, var uParam1)
{
	switch (Local_197.f_356.f_1[iParam0 /*15*/].f_3)
	{
		case joaat("paradise"):
			uParam1->f_66 = joaat("paradise");
			StringCopy(&(uParam1->f_1), "24OXS365", 16);
			*uParam1 = 3;
			uParam1->f_5 = 2;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_67 = 1;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), false);
			break;
		
		default:
			return 0;
	}
	return 1;
}

void func_1205(int iParam0, int iParam1)
{
	if (Local_197.f_356.f_1[iParam0 /*15*/].f_3 == joaat("paradise"))
	{
		unk_0x6515021478088FBC(iParam1, 2, 1);
		unk_0xBFE60A5CC0C835D8(iParam1, 3, 1, 0);
		unk_0x70BAF7723F26069A(iParam1, 1);
	}
}

int func_1206()
{
	return -1;
}

int func_1207(var uParam0)
{
	return 0;
}

int func_1208(var uParam0)
{
	return 153;
}

char* func_1209(var uParam0, var uParam1)
{
	return "BTL_DAVE";
}

int func_1210(var uParam0)
{
	return 1;
}

int func_1211(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_775() == 24 && func_13(&uLocal_703, 10000, 0));
		
		case 1:
			return (func_775() == 24 && Local_548[0 /*7*/].f_2 < 100f);
		
		default:
	}
	return 0;
}

char* func_1212(var uParam0)
{
	return "HS4EDAU";
}

char* func_1213(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (unk_0xC5935DFB3F39785A(0, 3))
			{
				case 0:
					return "HS4ED_GUC1";
				
				case 1:
					return "HS4ED_GUC2";
				
				case 2:
					return "HS4ED_GUC3";
				
				default:
			}
			break;
		
		case 1:
			return "HS4ED_SCPM1";
			break;
	}
	return "";
}

char* func_1214(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_KM_HLP_SKT";
		
		case 1:
			return "IDJ_KM_HLP_BSD";
		
		case 2:
			return "IDJ_KM_HLP_BSL";
		
		default:
	}
	return "";
}

int func_1215(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_1217() == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_1216() == 3 && !func_930())
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_1216() == 3 && func_930())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1216()
{
	return func_640();
}

int func_1217()
{
	return func_22();
}

int func_1218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 5:
		case 6:
			return 0;
		
		case 3:
		case 4:
			return 1;
		
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

void func_1219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_608(iParam0, 0, 8);
			func_604(iParam0, 0, 1, 253305);
			func_608(iParam0, 1, 7);
			break;
		
		case 1:
			func_608(iParam0, 0, 8);
			func_604(iParam0, 0, 2, 253290);
			func_608(iParam0, 2, 10);
			break;
		
		case 2:
			func_608(iParam0, 0, 8);
			func_604(iParam0, 0, 3, 253275);
			func_608(iParam0, 3, 11);
			break;
	}
}

int func_1220(int iParam0, var uParam1)
{
	return func_606(iParam0, 0);
}

int func_1221(int iParam0, var uParam1)
{
	return func_606(iParam0, 0);
}

var func_1222(int iParam0, var uParam1)
{
	return (func_606(iParam0, 0) || (func_172(0, 10) && func_13(&uLocal_707, 2000, 0)));
}

void func_1223(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			unk_0xD1C578C204015E1F(iParam1, 0, 0, 0, 0);
			unk_0xD1C578C204015E1F(iParam1, 2, 0, 0, 0);
			unk_0xD1C578C204015E1F(iParam1, 3, 0, 1, 0);
			unk_0xD1C578C204015E1F(iParam1, 4, 0, 1, 0);
			unk_0xBE8796DB2B90A437(iParam1, 46, 1);
			break;
		
		case 1:
			unk_0xD1C578C204015E1F(iParam1, 0, 0, 2, 0);
			unk_0xD1C578C204015E1F(iParam1, 2, 1, 0, 0);
			unk_0xD1C578C204015E1F(iParam1, 3, 1, 1, 0);
			unk_0xD1C578C204015E1F(iParam1, 4, 1, 2, 0);
			unk_0xBE8796DB2B90A437(iParam1, 46, 1);
			break;
		
		case 2:
			unk_0x3B3AC5F69E21EAB7(iParam1, 1, 0);
			break;
		
		case 5:
		case 6:
			unk_0xBE8796DB2B90A437(iParam1, 46, 1);
			break;
	}
}

void func_1224(var uParam0)
{
	func_719(17);
}

float func_1225(var uParam0)
{
	return 25f;
}

int func_1226(var uParam0)
{
	return 225;
}

int func_1227(var uParam0)
{
	return 9;
}

char* func_1228(var uParam0)
{
	return "IDJ_SKTE_BLIP";
}

int func_1229(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			if (func_1216() >= 0)
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_638() || unk_0xE7B45027762DEFE7(bLocal_618) > 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_739(iLocal_622, 10) && unk_0xE7B45027762DEFE7(bLocal_618) == 0)
			{
				return 2;
			}
			break;
		
		case 2:
			if (func_1216() >= 2 && unk_0xE7B45027762DEFE7(bLocal_618) == 0)
			{
				return 3;
			}
			break;
	}
	return -1;
}

char* func_1230(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEI4_DELIVERING_START";
		
		case 1:
			return "HEI4_GUNFIGHT";
		
		case 2:
			return "HEI4_SUSPENSE";
		
		case 3:
			return "HEI4_DELIVERING";
		
		default:
	}
	return "";
}

void func_1231()
{
	func_673(0, 4, 254031);
	func_672(0, 1, 1);
	func_646(1, 2, 3, 4, 5, 254008, 253930, 253883, 253860, 1);
	func_673(5, 48, 158841);
}

void func_1232()
{
	func_668("IDJ_RECOVER", "IDJ_SKTE_MRCHV", 9, 0);
}

void func_1233()
{
	if (func_930())
	{
		func_961("IDJ_BOSS_GOTO", 0);
	}
	else
	{
		func_654("IDJ_HLPDELV_T", "IDJ_KM_MERCH", "IDJ_LOC_LSIA", 1, 12, 0);
	}
}

void func_1234()
{
	if (func_1115(func_636()) && func_739(iLocal_622, 9))
	{
		func_964("IDJ_GOON_WAIT", unk_0xBD6CA019F46AB947(func_107(bLocal_618)), 9, 0);
	}
	else
	{
		func_654("IDJ_DELIVER_THE", "IDJ_KM_MERCH", "IDJ_LOC_LSIA", 1, 12, 0);
	}
}

void func_1235()
{
	func_668("ILH_STEAL", "IDJ_SKTE_MRCHV", 9, 0);
}

void func_1236()
{
	func_668("ILH_GOTO", "IDJ_LOC_SKATE", 12, 0);
}

void func_1237()
{
	func_679(0, 4);
	func_678(0, 1);
	func_679(1, 22);
	func_678(1, 2);
	func_679(2, 24);
	func_678(2, 3);
	func_679(3, 48);
}

void func_1238(var uParam0, int iParam1)
{
	if (bLocal_616)
	{
		if (func_739(iParam1, 9))
		{
			func_738(14);
		}
	}
}

void func_1239()
{
	if (func_965(func_636(), &uLocal_697, 1, 0))
	{
		func_741(9);
	}
	else
	{
		func_850(9);
	}
	if (bLocal_616)
	{
		if (func_707(14))
		{
			func_848(14);
		}
	}
}

void func_1240()
{
	if (func_638() && !func_707(12))
	{
		func_70(2, 0, 3000);
		func_738(12);
	}
}

void func_1241()
{
	func_1133();
	if (!func_739(iLocal_622, 10) && unk_0xE7B45027762DEFE7(bLocal_618) > 0)
	{
		func_741(10);
	}
}

int func_1242()
{
	func_1139();
	return 1;
}

void func_1243()
{
	func_743(0, 15);
	func_682(0, 9);
	func_911(2, 10);
	func_911(2, 26);
	Local_197.f_434.f_86[0 /*6*/] = 2;
	Local_197.f_434.f_86[0 /*6*/].f_1 = 2;
	Local_197.f_434.f_86[0 /*6*/].f_2 = 0;
	Local_197.f_434.f_86[0 /*6*/].f_3 = { 0f, -2f, -0.42f };
	Local_197.f_434.f_1[2 /*12*/].f_8 = { 0f, 0f, 25f };
	Local_197.f_604 = 30;
	Local_197.f_604.f_1 = 2;
}

void func_1244()
{
}

int func_1245(var uParam0, var uParam1)
{
	Local_674.f_540 = uParam0;
	Local_674.f_540.f_1 = uParam1;
	Local_674.f_540.f_2 = func_1246(Local_674.f_540);
	switch (Local_674.f_540)
	{
		case 6:
			Local_674.f_540.f_3 = 1000f;
			break;
	}
	return 1;
}

int func_1246(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		default:
	}
	return -1;
}

int func_1247()
{
	return func_1248();
}

int func_1248()
{
	return Global_2793046.f_5225.f_345;
}

int func_1249()
{
	return func_1250();
}

int func_1250()
{
	return Global_2793046.f_5225.f_344;
}

bool func_1251(int iParam0)
{
	return func_4(&uLocal_631, iParam0);
}

void func_1252()
{
	if (Local_214.f_3.f_2.f_1 != 0)
	{
		Call_Loc(Local_214.f_3.f_2.f_1);
	}
	if (func_1737())
	{
		return;
	}
	if (func_1736())
	{
		return;
	}
	if (!func_1735())
	{
		return;
	}
	if (func_1251(46))
	{
		return;
	}
	if (!func_2463())
	{
		return;
	}
	func_1546();
	func_1540();
	func_1536();
	func_1379();
	func_1256();
	func_1253();
}

void func_1253()
{
	if (!func_1251(30))
	{
		if (Local_214.f_97 != 0)
		{
			Call_Loc(Local_214.f_97);
			func_1254(StackVal);
		}
		func_284(30);
	}
}

void func_1254(int iParam0)
{
	if (iParam0 == -1 || iParam0 == 91)
	{
		return;
	}
	func_1255(iParam0);
}

void func_1255(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_5225.f_35[iVar0]), bVar1);
}

void func_1256()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	func_1330();
	return;
	if (func_454(iLocal_622, 0))
	{
		return;
	}
	if (Local_214.f_58.f_10 != 0)
	{
		Call_Loc(Local_214.f_58.f_10);
		if (!StackVal)
		{
			return;
		}
	}
	bVar2 = (func_1251(11) || func_1251(74));
	if (Local_214.f_58.f_11 != 0)
	{
		Call_Loc(Local_214.f_58.f_11);
		bVar3 = StackVal;
	}
	if (bVar2 && !bVar3)
	{
		if (Local_214.f_58 != 0)
		{
			Stack.Push(iVar0);
			Call_Loc(Local_214.f_58);
			iVar0 = (StackVal + StackVal);
		}
		if (Local_214.f_58.f_1 != 0)
		{
			Stack.Push(iVar1);
			Call_Loc(Local_214.f_58.f_1);
			iVar1 = (StackVal + StackVal);
		}
	}
	else if (bVar3)
	{
	}
	func_1325(bVar2);
	func_1323(&iVar0, &iVar1);
	if (Local_214.f_58.f_5 != 0)
	{
		Stack.Push(IntToFloat(iVar0));
		Stack.Push(0);
		Call_Loc(Local_214.f_58.f_5);
		iVar0 = round((StackVal * StackVal));
		Stack.Push(IntToFloat(iVar1));
		Stack.Push(1);
		Call_Loc(Local_214.f_58.f_5);
		iVar1 = round((StackVal * StackVal));
	}
	if (iVar0 > 0 || (iVar0 == 0 && func_1322()))
	{
		func_1310(iVar0);
		if (Local_197.f_610)
		{
			Global_2696875 = iVar0;
			func_18(&Global_2694992, 0, 0);
		}
	}
	if (iVar1 > 0)
	{
		if (Local_197.f_610.f_1)
		{
			func_1309();
		}
		Stack.Push(0);
		Stack.Push(iLocal_620);
		Stack.Push("");
		Stack.Push(-1636175450);
		Call_Loc(Local_214.f_58.f_9);
		func_1260(StackVal, StackVal, StackVal, StackVal, StackVal, iVar1, 1, -1, 0, 0, 0);
	}
	Local_586.f_5 = (Local_586.f_5 + iVar0);
	Local_586.f_6 = (Local_586.f_6 + iVar1);
	func_1259();
	func_1258();
	func_1257(0);
}

void func_1257(int iParam0)
{
	if (func_17(&(Local_696[iLocal_621 /*118*/].f_1), iParam0))
	{
	}
}

void func_1258()
{
	int iVar0;
	
	iVar0 = func_237(unk_0x259BE71D8A81D4FA());
	switch (iVar0)
	{
		case 294:
			Global_1947733.f_9 = Local_586.f_5;
			Global_1947733.f_10 = Local_586.f_6;
			break;
	}
}

void func_1259()
{
	int iVar0;
	
	iVar0 = func_237(unk_0x259BE71D8A81D4FA());
	switch (iVar0)
	{
		case 293:
		case 291:
			Global_1947751.f_13 = Local_586.f_5;
			Global_1947751.f_14 = Local_586.f_6;
			break;
	}
}

int func_1260(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_1261(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_1261(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1271(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xFC8BFE4B41177C22(iParam1))
		{
			if (unk_0x0101C509A6E67F99(iParam1))
			{
				iVar1 = unk_0xBD545F8729E9F413(iParam1);
				func_1267(unk_0x83FDC027F0BEA202(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_1262(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_1262(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_1265(iParam0, 1) };
	if (iParam0 == func_1264(unk_0x4A8C381C258A124D()))
	{
		func_1263(1);
	}
	func_1267(Var0, iParam1, 0, sParam2, iParam3);
}

void func_1263(int iParam0)
{
	Global_2672505.f_1682 = iParam0;
}

int func_1264(int iParam0)
{
	return iParam0;
}

Vector3 func_1265(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (unk_0x174DBD3C5DB3557B())
	{
		Var1 = { unk_0xD84A545408A3099A(2) };
	}
	if (iParam0 == func_1266(unk_0x4A8C381C258A124D()) && unk_0xBCF87EE3DC296C2A(unk_0xBF03D0685ADC793B()) == 4)
	{
		Var0 = { unk_0x0D1381B6E0F3987D(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		fVar2 = unk_0xCFC0C995455A6204(iParam0);
		if (unk_0xBCF87EE3DC296C2A(unk_0xBF03D0685ADC793B()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	unk_0xC93BAF616F1C680F(unk_0x4B423FAA24E8ABF0(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { unk_0xF10F2A2453AF1DFB(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_1266(int iParam0)
{
	return iParam0;
}

void func_1267(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2672505.f_1081[iVar0 /*30*/].f_6 == 0 || Global_2672505.f_1081[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2672505.f_1081[iVar1 /*30*/] = { Param0 };
			Global_2672505.f_1081[iVar1 /*30*/].f_6 = 1;
			Global_2672505.f_1081[iVar1 /*30*/].f_4 = func_1270(Global_2672505.f_1081[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2672505.f_1081[iVar1 /*30*/].f_7 = unk_0x7E3F74F641EE6B27();
			Global_2672505.f_1081[iVar1 /*30*/].f_3 = iParam1;
			Global_2672505.f_1081[iVar1 /*30*/].f_8 = iParam2;
			Global_2672505.f_1081[iVar1 /*30*/].f_9 = func_1269();
			Global_2672505.f_1081[iVar1 /*30*/].f_10 = func_1268();
			StringCopy(&(Global_2672505.f_1081[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2672505.f_1081[iVar1 /*30*/].f_26 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), iParam4);
		}
	}
}

int func_1268()
{
	if (Global_2672505.f_1682)
	{
		Global_2672505.f_1682 = 0;
		return 1;
	}
	Global_2672505.f_1682 = 0;
	return 0;
}

var func_1269()
{
	var uVar0;
	
	uVar0 = Global_2672505.f_1684;
	Global_2672505.f_1684 = 1;
	return uVar0;
}

float func_1270(struct<3> Param0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xED977E2AE2CB16EE(unk_0xCF141FCD0940B0A3(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_1271(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_1272(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_1272(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_1302();
	if (func_1301(sParam2))
	{
	}
	if (func_1300())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_1298(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_1297(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_1295(0, &iVar1);
					break;
				
				case 3:
					func_1295(1, &iVar1);
					break;
				
				case 1:
					func_1293(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1961999)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_1291(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_1282((func_1290(unk_0x259BE71D8A81D4FA()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xF509A0F327DF0ADD(iVar1, iParam8, iParam9);
				if (Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_2 != -1)
				{
					func_1291(1166, iVar1, -1);
				}
				func_1277(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_1273((func_1275(unk_0x259BE71D8A81D4FA()) + iVar1));
			}
			else
			{
				func_1273((func_1275(unk_0x259BE71D8A81D4FA()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_1273(int iParam0)
{
	if (func_1300())
	{
		Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_205.f_5 = iParam0;
		func_1274(joaat("mpply_globalxp"), iParam0);
	}
}

void func_1274(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, 1);
	}
}

int func_1275(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (func_9(bParam0, 0, 1))
		{
			if (bParam0 == unk_0x259BE71D8A81D4FA())
			{
				return func_1276(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853910[bParam0 /*862*/].f_205.f_5;
			}
		}
		else
		{
			return func_1276(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_1276(int iParam0)
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

void func_1277(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_108(unk_0x259BE71D8A81D4FA()) };
	if (unk_0x7260716F2E4D7661())
	{
		if (unk_0xE582BF3EDDBB1A68(&Var0))
		{
			iVar1 = func_1280(func_1281(&Var0));
			if (iVar1 == 0)
			{
				func_1279(&Global_1665493, iParam0);
				func_1278(joaat("mpply_crew_local_xp_0"), Global_1665493);
			}
			else if (iVar1 == 1)
			{
				func_1279(&Global_1665494, iParam0);
				func_1278(joaat("mpply_crew_local_xp_1"), Global_1665494);
			}
			else if (iVar1 == 2)
			{
				func_1279(&Global_1665495, iParam0);
				func_1278(joaat("mpply_crew_local_xp_2"), Global_1665495);
			}
			else if (iVar1 == 3)
			{
				func_1279(&Global_1665496, iParam0);
				func_1278(joaat("mpply_crew_local_xp_3"), Global_1665496);
			}
			else if (iVar1 == 4)
			{
				func_1279(&Global_1665497, iParam0);
				func_1278(joaat("mpply_crew_local_xp_4"), Global_1665497);
			}
		}
	}
}

void func_1278(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1665488 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1665490 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1665490 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1665491 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1665492 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1665493 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1665494 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1665495 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1665496 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1665497 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1665498 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1665499 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1665500 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1665501 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1665502 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1665503 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1665504 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_1279(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_1280(int iParam0)
{
	if (iParam0 == Global_1665488)
	{
		return 0;
	}
	else if (iParam0 == Global_1665489)
	{
		return 1;
	}
	else if (iParam0 == Global_1665490)
	{
		return 2;
	}
	else if (iParam0 == Global_1665491)
	{
		return 3;
	}
	else if (iParam0 == Global_1665492)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_1281(var uParam0)
{
	if (unk_0x7260716F2E4D7661())
	{
		if (unk_0xE582BF3EDDBB1A68(uParam0))
		{
			return Global_2694468;
		}
	}
	return Global_2694468;
}

void func_1282(int iParam0, int iParam1, int iParam2)
{
	if (func_1300())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10070 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1665638[func_216(-1)])
				{
					unk_0xF509A0F327DF0ADD(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1665638[func_216(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_10069 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xF509A0F327DF0ADD(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10069 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xF509A0F327DF0ADD(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_448(unk_0x259BE71D8A81D4FA()))
		{
			Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_205.f_1 = iParam0;
			Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_205.f_6 = func_1288(iParam0, 1);
		}
		func_1287(640, iParam0, -1, 1);
		func_1286(641, func_1288(iParam0, 1), -1, 1, 0);
		Global_1665638[func_216(-1)] = iParam0;
		func_1283(-1109644434, 7, 0);
	}
}

void func_1283(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_1285(iParam1, iParam2))
	{
		iVar0 = func_1284();
		Global_2694420[iVar0] = iParam1;
		Global_2694431[iVar0] = iParam0;
	}
}

int func_1284()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2694420[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1285(int iParam0, var uParam1)
{
	if (Global_1575048)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575060) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1286(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805029[iParam0 /*3*/][func_216(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
	}
}

void func_1287(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2805029[iParam0 /*3*/][func_216(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1665566[func_216(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1665572[func_216(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1665578[func_216(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1665584[func_216(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1665590[func_216(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1665536[func_216(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1665542[func_216(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1665548[func_216(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1665554[func_216(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1665560[func_216(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1665506[func_216(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1665512[func_216(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1665518[func_216(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1665524[func_216(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1665530[func_216(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1665596[func_216(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1665602[func_216(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1665608[func_216(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1665614[func_216(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1665620[func_216(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1665626[func_216(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1665632[func_216(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1665638[func_216(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1665644[func_216(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2851325[0 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2851325[1 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2851325[2 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2851325[3 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 12424:
			Global_2851504[func_216(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1665650[func_216(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1665656[func_216(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1665662[func_216(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1665668[func_216(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1665674[func_216(iParam2)] = iParam1;
			break;
		
		case 11803:
			Global_1665680[func_216(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1665686[func_216(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2851413[0 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2851413[1 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2851413[2 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2851413[3 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2851413[4 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2851507[0 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2851507[1 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2851507[2 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2851507[3 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2851507[4 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2851523[0 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2851523[1 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2851523[2 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2851523[3 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2851523[4 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2851413[5 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2851325[4 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2851539[func_216(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2851548[func_216(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2851542[func_216(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2851551[func_216(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2851545[func_216(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2851554[func_216(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2851557[func_216(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2851413[6 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2851325[5 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2851413[7 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2851325[6 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2851413[8 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2851325[7 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2851413[9 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2851325[8 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2851413[10 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2851325[9 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2851413[11 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2851325[10 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2851413[12 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2851325[11 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2851413[13 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2851325[12 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2851413[14 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2851325[13 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2851413[15 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2851325[14 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2851413[16 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2851325[15 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2851413[17 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2851325[16 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2851325[17 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2851325[18 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2851325[19 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2851325[20 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2851560[func_216(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2851563[func_216(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2851566[func_216(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2851569[func_216(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2851572[func_216(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2851575[func_216(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2851578[func_216(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2851581[func_216(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2851584[func_216(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2851587[func_216(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2851590[func_216(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2851593[func_216(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2851596[func_216(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2851599[func_216(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2851325[21 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2851413[23 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2851325[22 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2851413[24 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2851325[23 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2851325[24 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2851325[25 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2851413[27 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2851325[26 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2851413[28 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2851325[27 /*3*/][func_216(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_1288(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_1289(iParam0, 0);
}

int func_1289(int iParam0, int iParam1)
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

int func_1290(bool bParam0)
{
	if (Global_1574632.f_9 == 0)
	{
		if (bParam0 > -1)
		{
			if (bParam0 == unk_0x259BE71D8A81D4FA())
			{
				return Global_1665638[func_216(-1)];
			}
			else if (func_448(bParam0))
			{
				return Global_1853910[bParam0 /*862*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1665638[func_216(-1)];
	}
	return 0;
}

void func_1291(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_215(iParam0, func_216(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_1292(iParam0))
	{
		func_1286(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_1287(iParam0, iVar0, iParam2, 1);
	}
}

int func_1292(int iParam0)
{
	if (Global_1665487)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8729:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8731:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8733:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8735:
			case 1304:
			case 7236:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8734:
			case 9538:
			case 11803:
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 12424:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3060:
			case 3235:
			case 3237:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3230:
			case 3224:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3671:
			case 3692:
			case 3233:
			case 3232:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 4032:
			case 4031:
			case 6113:
			case 6112:
			case 6171:
			case 6170:
			case 6536:
			case 6535:
			case 6549:
			case 6548:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 6568:
			case 6567:
			case 7286:
			case 7288:
			case 7290:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8297:
			case 8905:
			case 8013:
			case 8537:
			case 8980:
			case 8982:
			case 8983:
			case 8985:
			case 9624:
			case 9913:
			case 10441:
			case 10443:
			case 10444:
			case 10446:
				return 1;
				break;
			}
	}
	return 0;
}

void func_1293(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		iVar4 = unk_0xF0C9E5565CB32F4B(iVar0);
		if (unk_0x7206AEB20960CCC8(iVar4))
		{
			bVar5 = unk_0x4470BE79F5771783(iVar4);
			if (unk_0x1864096A95E36EBA(bVar5) != -1)
			{
				if (unk_0x1864096A95E36EBA(bVar5) == iVar1 || func_354(unk_0x1864096A95E36EBA(bVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (bVar5 != unk_0x259BE71D8A81D4FA())
					{
						if (func_109(unk_0x259BE71D8A81D4FA(), bVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = round((func_1294(*iParam0, 100) * (10f * Global_262145.f_4228)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_1294(*iParam0, 100) * (20f * Global_262145.f_4221)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_1294(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_1295(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x95C7A22DBE7AEF4C())
		{
			iVar3 = iVar0;
			if (unk_0x7206AEB20960CCC8(iVar3))
			{
				bVar4 = unk_0x4470BE79F5771783(iVar3);
				if (func_9(bVar4, 0, 1))
				{
					if (bVar4 != unk_0x259BE71D8A81D4FA())
					{
						iVar1++;
						if (func_109(unk_0x259BE71D8A81D4FA(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar4 = iVar0;
			if (func_9(bVar4, 1, 1))
			{
				if (bVar4 != unk_0x259BE71D8A81D4FA())
				{
					if (func_1296(unk_0x259BE71D8A81D4FA(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_109(unk_0x259BE71D8A81D4FA(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = round((func_1294(*iParam1, 100) * (10f * Global_262145.f_4228)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_1294(*iParam1, 100) * (20f * Global_262145.f_4221)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_1296(bool bParam0, bool bParam1)
{
	return vdist(func_102(bParam0), func_102(bParam1));
	return 0f;
}

int func_1297(int iParam0)
{
	int iVar0;
	
	if (unk_0xC613ED89DC21151D() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_1294(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_1298(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x510D0699BE9C6D06(iParam0) > func_1290(unk_0x259BE71D8A81D4FA()))
		{
			iParam0 = -func_1290(unk_0x259BE71D8A81D4FA());
		}
	}
	if (func_1299(8000, 0, 0) > 0)
	{
		if (func_1299(8000, 0, 0) < (iParam0 + func_1290(unk_0x259BE71D8A81D4FA())))
		{
			iParam0 = (func_1299(8000, 0, 0) - func_1290(unk_0x259BE71D8A81D4FA()));
		}
	}
	return iParam0;
}

int func_1299(int iParam0, bool bParam1, int iParam2)
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

int func_1300()
{
	return 1;
}

int func_1301(char* sParam0)
{
	if (unk_0xFF692AB7350A74D7(sParam0))
	{
		return 1;
	}
	else if (unk_0x1B79E937E91F40C3(sParam0, "") || unk_0x1B79E937E91F40C3(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_1302()
{
	int iVar0;
	
	if (func_1308(unk_0x259BE71D8A81D4FA()) || func_1307(unk_0x259BE71D8A81D4FA()))
	{
		if (Global_262145.f_10102 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10102;
		}
	}
	else if (func_1305() || func_1303(unk_0x259BE71D8A81D4FA()))
	{
		if (Global_262145.f_23282 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23282;
		}
	}
	else if (Global_262145.f_7095 > 30000)
	{
		iVar0 = 30000;
	}
	else
	{
		iVar0 = Global_262145.f_7095;
	}
	return iVar0;
}

int func_1303(bool bParam0)
{
	return func_1304(func_237(bParam0));
}

int func_1304(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_1305()
{
	if (unk_0x834C960822A4683F())
	{
		return func_103();
	}
	return func_1306(Global_4718592.f_113724);
}

int func_1306(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5042[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1307(bool bParam0)
{
	return Global_2657589[bParam0 /*466*/].f_121 == 2;
}

bool func_1308(bool bParam0)
{
	return Global_2657589[bParam0 /*466*/].f_121 == 7;
}

void func_1309()
{
	Global_2696212 = 1;
}

void func_1310(int iParam0)
{
	int iVar0;
	
	if (func_296())
	{
		func_1311(-1029672338, iParam0, &iVar0, 0, 1, 0);
		Global_4535172[iVar0 /*85*/].f_66.f_1 = iParam0;
		Global_4535172[iVar0 /*85*/].f_66.f_16 = func_589();
	}
	else
	{
		unk_0x5836433A62D1A6C4(iParam0, func_589());
	}
}

void func_1311(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_296())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 2115896461:
		case 797947947:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28375)
			{
				func_1312(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
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
		case 1982688246:
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
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
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
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_1312(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
		case -2013760296:
		case -1033889004:
		case -2081984382:
		case 1089562091:
			if (iParam1 > 0 || Global_262145.f_28375)
			{
				func_1312(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
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
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
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
		case 1633116913:
		case 668586600:
		case 15168061:
		case 590289134:
		case 99792878:
		case 1866258778:
		case -178394060:
		case 409592287:
		case 593836803:
		case 1973036520:
		case 2063456538:
		case -728008329:
		case 119239868:
			func_1312(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_1312(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_296())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_100()) || unk_0x34F31012FED51A0F())
		{
			Global_4536674 = 1;
			return 0;
		}
		if (Global_2695821)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4536675 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535172[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x54BC5E0B6A29AE8A(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x5F7C6361179DFFC4(iVar4))
		{
			*uParam0 = func_1319(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535172[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535172[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4536673 = 1;
			Global_4536676 = iParam4;
			Global_4536678 = iParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4536676 = iParam4;
			Global_4536678 = iParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_1318(1, iParam4);
			Global_4536673 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_1313(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_1313(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_126.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_1314(iParam0);
	}
}

void func_1314(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_296())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_1317(iParam0))
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
		func_1315(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_1315(var uParam0)
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
	func_1316(&(uParam0->f_14));
	func_1316(&(uParam0->f_14.f_13));
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

void func_1316(var uParam0)
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

int func_1317(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_1318(int iParam0, var uParam1)
{
	Global_2697015 = uParam1;
	Global_2697014 = iParam0;
}

int func_1319(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_296())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535172[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535172[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535172[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535172[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535172[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4535172[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535172[iVar0 /*85*/].f_66 = iParam0;
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
				func_1320(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1320(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_71(Var0.f_1);
	if ((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_1321();
		unk_0x01F0B819E78A18A1(1, &Var0, 36, iVar1);
	}
}

void func_1321()
{
	unk_0x97A5024CE91641F1("AM_ARENA_SHP");
}

int func_1322()
{
	return 0;
}

void func_1323(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_1324(7))
	{
		return;
	}
	if (Local_214.f_58.f_2 != 0)
	{
		Call_Loc(Local_214.f_58.f_2);
		iVar0 = StackVal;
	}
	if (Local_214.f_58.f_3 != 0)
	{
		Call_Loc(Local_214.f_58.f_3);
		iVar1 = StackVal;
	}
	iVar2 = unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(Global_2793046.f_5225.f_269, unk_0x7E3F74F641EE6B27()));
	if (Local_214.f_58.f_4 != 0)
	{
		Stack.Push(iVar2);
		Call_Loc(Local_214.f_58.f_4);
		if (StackVal > StackVal)
		{
			Call_Loc(Local_214.f_58.f_4);
			iVar2 = StackVal;
		}
	}
	iVar3 = floor((to_float(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	iVar0 = (iVar3 * iVar0);
	iVar1 = (iVar3 * iVar1);
	if (func_238(0) && Global_262145.f_24467 > 0f)
	{
		iVar0 = ceil((IntToFloat(iVar0) * Global_262145.f_24467));
	}
	*iParam0 = (*iParam0 + iVar0);
	*iParam1 = (*iParam1 + iVar1);
}

bool func_1324(int iParam0)
{
	return BitTest(Global_2793046.f_5225.f_47, iParam0);
}

void func_1325(bool bParam0)
{
	Stack.Push(Local_214.f_58.f_8 != 0);
	Call_Loc(Local_214.f_58.f_8);
	if (StackVal && StackVal)
	{
		if (bParam0)
		{
			if (Global_262145.f_24468)
			{
				func_1329();
			}
			else if (func_1328(unk_0x259BE71D8A81D4FA()) > 0)
			{
				func_1327();
			}
			else
			{
				func_1329();
			}
		}
		else
		{
			func_1326();
		}
	}
}

void func_1326()
{
	if (func_78())
	{
		Global_2684801.f_3076.f_134 = 0;
		Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_427 = Global_2684801.f_3076.f_134;
	}
}

void func_1327()
{
	if (func_78())
	{
		if (Global_2684801.f_3076.f_134 > 0)
		{
			Global_2684801.f_3076.f_134 = (Global_2684801.f_3076.f_134 - 1);
			Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_427 = Global_2684801.f_3076.f_134;
		}
	}
}

int func_1328(bool bParam0)
{
	return Global_1894573[bParam0 /*608*/].f_10.f_28;
}

void func_1329()
{
	if (func_78())
	{
		if (Global_2684801.f_3076.f_134 < 10)
		{
			Global_2684801.f_3076.f_134++;
			Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_427 = Global_2684801.f_3076.f_134;
		}
	}
}

void func_1330()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_454(iLocal_622, 0))
	{
		return;
	}
	if (!func_1378(0))
	{
		if (func_1251(11))
		{
			func_1377(func_589(), &iVar0, &iVar1);
		}
		if (iVar0 > 0)
		{
			func_1310(iVar0);
		}
		if (iVar1 > 0)
		{
			if (Local_197.f_610.f_1)
			{
				func_1309();
			}
			func_1260(0, iLocal_620, "", -1636175450, -692157345, iVar1, 1, -1, 0, 0, 0);
		}
		Local_586.f_5 = (Local_586.f_5 + iVar0);
		Local_586.f_6 = (Local_586.f_6 + iVar1);
		if (func_79(bLocal_618))
		{
			if (func_1251(11))
			{
				if (!func_1375(func_589()))
				{
					func_1371(func_589());
					Global_1948470.f_16 = unk_0x70E57E9927B6BA58(func_1368(func_589()));
				}
			}
		}
		func_1367(0);
	}
	if (func_1251(11))
	{
		iVar2 = func_1366(func_589());
		if (iVar2 > 0)
		{
			if (func_1331(iVar2, &uLocal_698))
			{
				Global_1948470.f_15 = (Global_1948470.f_15 + iVar2);
				func_1257(0);
			}
		}
		else
		{
			func_1257(0);
		}
	}
	else
	{
		func_1257(0);
	}
}

bool func_1331(int iParam0, var uParam1)
{
	return func_1332(iParam0, 11, uParam1, -1, -1);
}

int func_1332(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
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
	else if (!func_1365(iParam1))
	{
	}
	else
	{
		iVar0 = func_1364();
		iVar1 = (Global_262145.f_27186 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_1362();
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
		if (func_1352(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_1364() - Global_1970467);
			func_1351(iVar4, 1);
			func_1349();
			func_1348();
			Global_1970467 = (Global_1970467 + iVar4);
			if (iParam1 == 0)
			{
				func_1341(iVar4);
				Global_2694477 = 1;
			}
			else if (iParam1 == 3)
			{
				func_1336(iVar4);
				if (iVar4 >= Global_262145.f_27194)
				{
					Global_2694476 = 1;
				}
				else if (iVar4 >= Global_262145.f_27193)
				{
					Global_2694477 = 1;
				}
			}
			Var5.f_0 = func_1335(iParam1);
			Var5.f_1 = func_1334(iParam1, iParam3, iParam4);
			if (func_1333(iParam1))
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

int func_1333(int iParam0)
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

int func_1334(int iParam0, int iParam1, int iParam2)
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

int func_1335(int iParam0)
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

void func_1336(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_1340();
	iVar1 = unk_0x39D1D336459711BE();
	iVar2 = func_1339();
	if (iVar0 == 0)
	{
		func_1338();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_27188)
	{
		func_1337();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_27190)
	{
		func_1274(joaat("mpply_casino_chips_won_gd"), Global_262145.f_27190);
		func_1337();
		Global_2694477 = 1;
	}
	else
	{
		func_1274(joaat("mpply_casino_chips_won_gd"), (iVar2 + iParam0));
	}
}

void func_1337()
{
	func_1338();
}

void func_1338()
{
	func_1274(joaat("mpply_casino_chips_wontim"), unk_0x39D1D336459711BE());
}

int func_1339()
{
	return func_1276(joaat("mpply_casino_chips_won_gd"));
}

int func_1340()
{
	return func_1276(joaat("mpply_casino_chips_wontim"));
}

void func_1341(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_1347();
	iVar1 = unk_0x39D1D336459711BE();
	iVar2 = func_1346();
	if (iVar0 == 0)
	{
		func_1345();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_27187)
	{
		func_1344();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_1342()
	{
		func_1274(joaat("mpply_casino_chips_pur_gd"), func_1342());
		func_1344();
	}
	else
	{
		func_1274(joaat("mpply_casino_chips_pur_gd"), (iVar2 + iParam0));
	}
}

int func_1342()
{
	if (func_1343(unk_0x259BE71D8A81D4FA()))
	{
		return Global_262145.f_26982;
	}
	return Global_262145.f_26981;
}

int func_1343(bool bParam0)
{
	if (bParam0 != func_74())
	{
		return Global_1853910[bParam0 /*862*/].f_267.f_404 != 0;
	}
	return 0;
}

void func_1344()
{
	func_1345();
}

void func_1345()
{
	func_1274(joaat("mpply_casino_chips_purtim"), unk_0x39D1D336459711BE());
}

int func_1346()
{
	return func_1276(joaat("mpply_casino_chips_pur_gd"));
}

int func_1347()
{
	return func_1276(joaat("mpply_casino_chips_purtim"));
}

void func_1348()
{
	if (BitTest(Global_1970540, 6))
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_1970540, 9);
		func_18(&Global_1970543, 0, 0);
	}
}

void func_1349()
{
	if (func_1350())
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_1970540, true);
	}
}

bool func_1350()
{
	return (BitTest(Global_1970540, 6) || BitTest(Global_1970540, 5));
}

void func_1351(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	unk_0x0B0C9A0F9AAEB7F0(&Global_1970540, 6);
	Global_1970541 = iParam0;
	Global_1970542 = iParam1;
}

bool func_1352(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_1333(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_296())
	{
		if (*uParam0 == 0)
		{
			if (func_1361() != -1)
			{
				return 0;
			}
			iVar3 = 657241867;
			iVar4 = func_1335(iParam1);
			iVar5 = -22148635;
			if (func_1365(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_1358(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_1358(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_1356())
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
			if (func_1355(func_1361()))
			{
				if (func_1354(func_1361()) == 2)
				{
					unk_0x1F4C0FAC35E805F4(func_1353(func_1361()));
					if (func_1365(iParam1))
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
				func_1314(func_1361());
			}
		}
	}
	else if (iVar0 > 0 || unk_0x0AF5E4A6C74DC312(iVar0, 0, 1, 0, -1, 0))
	{
		if (func_1365(iParam1))
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

int func_1353(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_1354(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_1355(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_1356()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_296())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_1361();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_100()) || unk_0x34F31012FED51A0F())
		{
			if (func_1357(Global_4535172[iVar2 /*85*/].f_66.f_6, Global_4535172[iVar2 /*85*/].f_66.f_4, Global_4535172[iVar2 /*85*/].f_66.f_1) == 1)
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
	iVar3 = func_1353(iVar2);
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
				func_1320(Global_4535172[iVar2 /*85*/], iVar2);
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	return 0;
}

int func_1357(int iParam0, int iParam1, int iParam2)
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

int func_1358(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_296())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_100()) || unk_0x34F31012FED51A0F())
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
	iVar1 = func_1361();
	if (iVar1 == -1)
	{
		if (!func_1360(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_1359(iParam1))
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

int func_1359(int iParam0)
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

int func_1360(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_296())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_100()) || unk_0x34F31012FED51A0F())
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
	if (bVar0 || unk_0x5156B6B1D1CD58FE(&iVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_1319(iVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_1361()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_1353(iVar0) != 2147483647)
		{
			if (func_1317(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1362()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_1342() - func_1346());
	iVar1 = (Global_262145.f_27186 - func_1364());
	iVar2 = func_1363();
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

int func_1363()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1342();
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

int func_1364()
{
	return func_215(8251, -1, 0);
}

int func_1365(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

int func_1366(bool bParam0)
{
	if (!func_79(bLocal_618))
	{
		return 0;
	}
	switch (bParam0)
	{
		case 3:
		case 4:
			return Global_262145.f_30180;
		
		case 5:
		case 6:
			return Global_262145.f_30179;
		
		default:
	}
	return 0;
}

void func_1367(int iParam0)
{
	if (func_17(&uLocal_642, iParam0))
	{
	}
}

char* func_1368(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
		case 1:
		case 2:
			if (func_1369())
			{
				return "CLO_H4F_DECL_51";
			}
			else
			{
				return "CLO_H4M_DECL_51";
			}
			break;
		
		case 3:
		case 4:
			if (func_1369())
			{
				return "CLO_H4F_DECL_53";
			}
			else
			{
				return "CLO_H4M_DECL_53";
			}
			break;
		
		case 5:
		case 6:
			if (func_1369())
			{
				return "CLO_H4F_DECL_54";
			}
			else
			{
				return "CLO_H4M_DECL_54";
			}
			break;
	}
	return "";
}

bool func_1369()
{
	return func_1370(unk_0x259BE71D8A81D4FA());
}

int func_1370(bool bParam0)
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(bParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_1371(bool bParam0)
{
	func_1373(func_1374(bParam0), 1, -1);
	func_1372(func_1368(bParam0));
}

int func_1372(char* sParam0)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xCCDB0041859B85A6(sParam0);
	iVar0 = unk_0xC98870E86912B9E0("CLOTHES_UNLOCK", 7, sParam0, 1);
	return iVar0;
}

void func_1373(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_100();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

int func_1374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 30635;
			break;
		
		case 3:
		case 4:
			return 30636;
			break;
		
		case 5:
		case 6:
			return 30637;
			break;
	}
	return 30635;
}

bool func_1375(bool bParam0)
{
	return func_1376(func_1374(bParam0), -1);
}

bool func_1376(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_100();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

void func_1377(bool bParam0, var uParam1, var uParam2)
{
	switch (bParam0)
	{
		case 0:
		case 1:
		case 2:
			if (func_79(bLocal_618))
			{
				*uParam1 = (*uParam1 + Global_262145.f_30173);
				*uParam2 = (*uParam2 + Global_262145.f_30181);
			}
			else
			{
				*uParam1 = (*uParam1 + Global_262145.f_30176);
			}
			break;
		
		case 3:
		case 4:
			if (func_79(bLocal_618))
			{
				*uParam1 = (*uParam1 + Global_262145.f_30175);
				*uParam2 = (*uParam2 + Global_262145.f_30183);
			}
			else
			{
				*uParam1 = (*uParam1 + Global_262145.f_30177);
			}
			break;
		
		case 5:
		case 6:
			if (func_79(bLocal_618))
			{
				*uParam1 = (*uParam1 + Global_262145.f_30174);
				*uParam2 = (*uParam2 + Global_262145.f_30182);
			}
			else
			{
				*uParam1 = (*uParam1 + Global_262145.f_30178);
			}
			break;
	}
}

bool func_1378(int iParam0)
{
	return func_4(&uLocal_642, iParam0);
}

void func_1379()
{
	if (!func_1251(8))
	{
		if (func_1534())
		{
			if (func_1458(0, 1, 1) && func_1453())
			{
				func_1380();
				func_284(8);
			}
		}
		else
		{
			func_284(8);
		}
	}
}

void func_1380()
{
	switch (func_527())
	{
		case 20:
			if (func_589() == 3)
			{
				func_1448(89, func_1452(), func_1450(), func_1449(), -1, -1, -1082130432, 0, 1, 2, 0);
				return;
			}
			break;
		
		case 12:
			func_1447(88, "CSH_STOVER_T", "CSH_FAIL_NOP", 1, -1, 2, 1, 0);
			return;
			break;
		
		case 2:
			return;
			break;
	}
	if (func_1444())
	{
		if (func_1443())
		{
			func_1432(100, func_1441(), func_1440(), func_1438(1, 1, 0), 0, -1, func_1434(), func_1433(), 1, 2, 0);
		}
		else
		{
			func_1382(100, func_1434(), func_1440(), func_1441(), 1, -1, -1082130432, 2, 0);
		}
	}
	else if (func_1251(11))
	{
		func_1448(100, func_1438(1, 1, 0), func_1381(), func_1441(), -1, -1, -1082130432, 0, 1, 2, 0);
	}
	else
	{
		func_1448(89, func_1452(), func_1450(), func_1449(), -1, -1, -1082130432, 0, 1, 2, 0);
	}
}

char* func_1381()
{
	switch (func_589())
	{
		case 0:
		case 1:
		case 3:
		case 5:
		case 6:
			return "IDJ_DELIVERED";
		
		case 4:
			return "IDJ_DELIVERED_P";
		
		case 2:
			return "IDJ_RECOVERED_P";
		
		default:
	}
	return "CSH_STPASSVC_S";
}

int func_1382(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_1431(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		func_1429(&(Var0.f_69), iParam8);
	}
	return func_1383(&Var0);
}

int func_1383(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2672505.f_2836)
		{
			return 0;
		}
	}
	func_1397(uParam0, uParam0->f_17);
	func_1394(uParam0);
	if (func_103())
	{
		func_1394(uParam0);
	}
	if (func_1393(uParam0->f_1))
	{
		func_1386();
		if (Global_2672505.f_2514[0 /*80*/].f_2 == 0)
		{
			Global_2672505.f_2514[0 /*80*/] = { *uParam0 };
			if (func_1385(uParam0->f_69, 8192))
			{
				Global_1935182 = 1;
			}
			return 1;
		}
		if (((Global_2672505.f_2514[0 /*80*/].f_1 == 13 || Global_2672505.f_2514[0 /*80*/].f_1 == 53) || Global_2672505.f_2514[0 /*80*/].f_1 == 54) || Global_2672505.f_2514[0 /*80*/].f_1 == 58)
		{
			Global_2672505.f_2514[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2672505.f_2514[iVar0 + 1 /*80*/] = { Global_2672505.f_2514[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2672505.f_2514[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2672505.f_2514[iVar0 /*80*/].f_2 == 0)
		{
			Global_2672505.f_2514[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_1386();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_1429(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 2);
				Global_2672505.f_2514[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_1385(uParam0->f_69, 128))
			{
				if (func_1384(Global_2672505.f_2514[iVar0 /*80*/].f_1))
				{
					Global_2672505.f_2514[iVar0 /*80*/].f_2 = 5;
					func_1429(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1384(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_1385(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1386()
{
	bool bVar0;
	
	if (Global_2672505.f_2837)
	{
		return;
	}
	if (!Global_78827)
	{
		Global_78827 = 1;
		bVar0 = true;
	}
	func_1387();
	if (bVar0)
	{
		Global_78827 = 0;
	}
}

void func_1387()
{
	Global_2672505.f_2838 = 0;
	Global_2672505.f_2838.f_582 = 0;
	func_1391(&(Global_2672505.f_2838.f_1));
	Global_2672505.f_2838.f_1.f_1 = 0;
	func_1388(&(Global_2672505.f_2838.f_1), 1);
}

void func_1388(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0xD314260005F064BF(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0x761778199FE1211C())
		{
			unk_0x88F483FBD433696A(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x557F1E2300EF1A3E(0);
			unk_0xE6B753D52F4CA222();
		}
		unk_0xD314260005F064BF(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		unk_0x6FF322107B12B749(0);
		uParam0->f_568 = 0;
	}
	if (!Global_78827)
	{
		if (!unk_0xD5FF242D0AFC5855(unk_0xB6B621402486C3E4()))
		{
			if (!Global_78828)
			{
				if (unk_0x15CCE8886267624F() && !func_1390(0))
				{
					unk_0x10B228D2FDB7AF16(800);
				}
			}
		}
	}
	func_1389(0);
}

void func_1389(int iParam0)
{
	Global_78819 = iParam0;
	Global_78820 = iParam0;
}

int func_1390(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_1391(var uParam0)
{
	func_1392(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_1392(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

int func_1393(int iParam0)
{
	if ((((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110) || iParam0 == 111)
	{
		return 1;
	}
	return 0;
}

void func_1394(var uParam0)
{
	if (func_1396(uParam0->f_1))
	{
		uParam0->f_72 = func_1395();
	}
}

int func_1395()
{
	return 21;
}

int func_1396(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_1397(var uParam0, bool bParam1)
{
	if (func_1396(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (bParam1 == func_74() || !func_9(bParam1, 0, 1))
	{
		return;
	}
	if (func_1384(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_1398(bParam1, -2, 0, 0, 0);
		}
	}
}

int func_1398(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_360(bParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x1864096A95E36EBA(bParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_108449[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_360(unk_0x259BE71D8A81D4FA()) || (func_1428() && func_1427())) && !BitTest(Global_2793046.f_4690, 31)) && !bParam4)
	{
		iVar1 = func_1426();
		if (unk_0xFC8BFE4B41177C22(iVar1))
		{
			if (unk_0x501EBB0523078750(iVar1))
			{
				if (unk_0x1C1C92A1CBAE364B(iVar1) != -1)
				{
					if (func_9(unk_0x1C1C92A1CBAE364B(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
						{
							if (Global_4718592.f_108449[iParam1] != -1)
							{
								return func_1424(iParam1, bParam0, 0);
							}
							else
							{
								return func_1410(bParam0, unk_0x1C1C92A1CBAE364B(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_1410(bParam0, unk_0x1C1C92A1CBAE364B(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
			{
				if (Global_4718592.f_108449[iParam1] != -1)
				{
					return func_1424(iParam1, bParam0, 0);
				}
				else
				{
					return func_1399(0, -1, 0);
				}
			}
			else
			{
				return func_1399(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
	{
		if (Global_4718592.f_108449[iParam1] != -1)
		{
			return func_1424(iParam1, bParam0, 0);
		}
		else
		{
			return func_1410(bParam0, unk_0x259BE71D8A81D4FA(), iParam1, bParam2, bParam3);
		}
	}
	return func_1410(bParam0, unk_0x259BE71D8A81D4FA(), iParam1, bParam2, bParam3);
}

int func_1399(bool bParam0, int iParam1, bool bParam2)
{
	return func_1400(unk_0x259BE71D8A81D4FA(), bParam0, iParam1, bParam2);
}

int func_1400(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x762604C40829DB72(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x1864096A95E36EBA(bParam0);
	if ((func_1409() || (func_1408() && func_1406())) && Global_1665699.f_1)
	{
		if (bParam1)
		{
			return func_1405(iParam2, iVar0);
		}
		else
		{
			return func_1405(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_354(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_1404(1);
				}
				else
				{
					return func_1404(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_1401(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_1401(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_1404(1);
	}
	return func_1404(0);
}

int func_1401(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_1403(iParam0, iParam1, iParam3);
	if (func_1402(Global_4718592.f_113724, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_1402(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_166301 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9486[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1403(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_354(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1404(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_1405(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_1403(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_1406()
{
	if (func_1407())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_170488, 4);
}

bool func_1407()
{
	return BitTest(Global_4718592.f_160050, 12);
}

bool func_1408()
{
	if (unk_0x834C960822A4683F())
	{
		return BitTest(Global_4718592.f_170488, 0);
	}
	return ((BitTest(Global_4718592.f_170488, 0) || Global_1926644) && unk_0x486FF5D06E9659F1(joaat("fm_deathmatch_creator")) > 0);
}

int func_1409()
{
	if (func_1407() && unk_0x834C960822A4683F())
	{
		return 1;
	}
	return 0;
}

int func_1410(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x1864096A95E36EBA(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = bParam0;
	if (iVar2 > -1)
	{
		if (Global_1853910[iVar2 /*862*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_1416())
			{
				iVar3 = func_1415(bParam0);
				if (!iVar3 == -1)
				{
					return func_1413(iVar3);
				}
			}
			if ((func_1412(iParam1, bParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_354(unk_0x1864096A95E36EBA(iParam1), unk_0x1864096A95E36EBA(bParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_1404(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_1411(1);
			}
			else
			{
				return func_1400(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836597 || Global_1836587) || Global_1853910[bParam0 /*862*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1836597 == 1 && Global_1836607 == 0))
			{
				return func_1404(1);
			}
			else
			{
				return func_1400(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836591 && Global_1836078.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_1415(bParam0);
	if (!iVar4 == -1)
	{
		return func_1413(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_1411(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_1412(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x1864096A95E36EBA(bParam0) == -1 && unk_0x1864096A95E36EBA(bParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x1864096A95E36EBA(bParam0) == unk_0x1864096A95E36EBA(bParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x1864096A95E36EBA(bParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x1864096A95E36EBA(bParam0) == iParam2;
	}
	return unk_0x1864096A95E36EBA(bParam0) == iParam2;
}

int func_1413(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_1414(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_1414(int iParam0)
{
	return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_1415(bool bParam0)
{
	if (!bParam0 == func_74())
	{
		if (func_81(bParam0, 1))
		{
			return Global_2648605.f_818.f_11[func_107(bParam0)];
		}
	}
	return -1;
}

int func_1416()
{
	if ((((((func_429() || func_1423()) || func_103()) || func_1422()) || func_1421()) || func_1419()) || func_1417())
	{
		return 1;
	}
	if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_1417()
{
	return func_1418(Global_4718592.f_113724);
}

int func_1418(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31715[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1419()
{
	return func_1420(Global_4718592.f_113724);
}

int func_1420(int iParam0)
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

var func_1421()
{
	return Global_2683864.f_24;
}

var func_1422()
{
	return Global_2683864.f_21;
}

var func_1423()
{
	return Global_2683864.f_18;
}

int func_1424(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058070.f_14[iParam0];
	if (func_1416())
	{
		iVar2 = func_1415(iParam1);
		if (!iVar2 == -1)
		{
			return func_1413(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_8067[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_74())
	{
		if (Global_4718592.f_108449[iParam0] != -1 && Global_4718592.f_108449[iParam0] <= 4)
		{
			if (Global_4718592.f_108449[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_108449[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_108449[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_108449[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_108449[iParam0];
			}
		}
		else
		{
			iVar0 = func_1400(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_1425(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_354(iParam0, unk_0x1864096A95E36EBA(iParam1), 0, -1))
		{
			iVar0 = func_1411(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1425(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_166456;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_166457;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_166458;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_166459;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_1426()
{
	return Global_2621446.f_2;
}

var func_1427()
{
	return BitTest(Global_2621446, 4);
}

var func_1428()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_18, 14);
}

void func_1429(var uParam0, int iParam1)
{
	func_1430(uParam0, iParam1);
}

void func_1430(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_1431(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_74();
	uParam1->f_18 = func_74();
	uParam1->f_19 = func_74();
	uParam1->f_20 = func_74();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_1432(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, int iParam10)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_1431(iParam0, &Var0, iParam6, sParam2, sParam1);
	StringCopy(&(Var0.f_57), sParam3, 16);
	StringCopy(&(Var0.f_61), sParam4, 16);
	Var0.f_6 = iParam5;
	Var0.f_4 = uParam7;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_1429(&(Var0.f_69), iParam10);
	}
	return func_1383(&Var0);
}

int func_1433()
{
	return func_28();
}

int func_1434()
{
	return func_1435(bLocal_618);
}

int func_1435(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (func_478(iVar0, 4) && func_1436(bParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1436(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_194(iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (func_81(iParam0, 1) && !func_85(21))
	{
		return func_1437(iVar0) == unk_0x3351FEF40EC734DB(func_107(iParam0));
	}
	return func_1437(iVar0) == unk_0x3351FEF40EC734DB(iParam0);
}

int func_1437(int iParam0)
{
	return Local_674.f_577.f_1[iParam0 /*5*/].f_4;
}

char* func_1438(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (bParam1)
		{
			if (bParam2)
			{
				switch (func_1439())
				{
					case 0:
						return "IDJ_SKTE_MRCH";
					
					case 1:
						return "IDJ_KM_PIZZA";
					
					case 2:
						return "IDJ_KM_STONES";
					
					case 4:
						return "IDJ_MM_SLIP";
					
					case 3:
						return "IDJ_MM_RENTAL";
					
					case 6:
						return "IDJ_CHAMPAGNE";
					
					case 5:
						return "IDJ_PT_EQUIP";
					
					default:
				}
			}
			else
			{
				switch (func_1439())
				{
					case 0:
						return "IDJ_SKTE_MRCH_B";
					
					case 1:
						return "IDJ_KM_PIZZA_B";
					
					case 2:
						return "IDJ_KM_STONES_B";
					
					case 4:
						return "IDJ_MM_SLIP_B";
					
					case 3:
						return "IDJ_MM_RENTAL";
					
					case 6:
						return "IDJ_CHAMPAGNE_B";
					
					case 5:
						return "IDJ_PT_EQUIP_B";
					}
				
				default:
			}
		}
		else
		{
			switch (func_1439())
			{
				case 0:
					return "IDJ_SKTE_MRCH_B";
				
				case 1:
					return "IDJ_KM_PIZZA_B";
				
				case 2:
					return "IDJ_KM_STONES_B";
				
				case 4:
					return "IDJ_MM_SLIP";
				
				case 3:
					return "IDJ_MM_RENTAL";
				
				case 6:
					return "IDJ_DELVRTRK_B";
				
				case 5:
					return "IDJ_PT_EQUIP_B";
				}
			
			default:
		}
	}
	else
	{
		switch (func_1439())
		{
			case 0:
				return "IDJ_SKTE_MRCH";
			
			case 1:
				return "IDJ_KM_PIZZA";
			
			case 2:
				return "IDJ_KM_STONES";
			
			case 4:
				return "IDJ_MM_SLIP";
			
			case 3:
				return "IDJ_MM_RENTAL";
			
			case 6:
				return "IDJ_DELVRTRK";
			
			case 5:
				return "IDJ_PT_EQUIP";
			}
		
		default:
	}
	return "SMTYPE_MIXED";
}

int func_1439()
{
	return Local_674.f_540.f_2;
}

char* func_1440()
{
	return "";
}

char* func_1441()
{
	return func_1442();
}

char* func_1442()
{
	switch (func_589())
	{
		case 0:
		case 1:
		case 2:
			return "IDJ_KM_BM_TITLE";
		
		case 3:
		case 4:
			return "IDJ_MM_BM_TITLE";
		
		case 5:
		case 6:
			return "IDJ_PT_BM_TITLE";
		
		default:
	}
	return "IDJ_BM_TITLE";
}

int func_1443()
{
	switch (func_589())
	{
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

bool func_1444()
{
	if (Local_214.f_108.f_1 != 0)
	{
		Call_Loc(Local_214.f_108.f_1);
		return StackVal;
	}
	if (!func_480())
	{
		return 0;
	}
	if (func_1446() && func_1435(bLocal_618) < func_28())
	{
		return 1;
	}
	return (func_1445(bLocal_618) && !func_1446());
}

int func_1445(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (func_478(iVar0, 4) && func_1436(bParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1446()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_197.f_19)
	{
		if (!func_478(iVar0, 4))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_1447(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_1431(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_1429(&(Var0.f_69), iParam7);
	}
	return func_1383(&Var0);
}

int func_1448(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_1431(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_1429(&(Var0.f_69), iParam10);
	}
	return func_1383(&Var0);
}

char* func_1449()
{
	return "IDJ_BM_F";
}

char* func_1450()
{
	switch (func_589())
	{
		case 0:
		case 1:
		case 5:
		case 6:
			return "IDJ_FAIL_DLVR";
		
		case 4:
			return "IDJ_FAIL_DLVR_P";
		
		case 3:
			return "IDJ_FAIL_RCVR";
		
		case 2:
			return "IDJ_FAIL_RCVR_P";
		
		default:
	}
	if (func_1451())
	{
		return "CSH_FAIL_NDa";
	}
	return "CSH_FAIL_NDb";
}

int func_1451()
{
	switch (func_589())
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 4:
			return 0;
		
		case 3:
			return 1;
		
		case 6:
			return 1;
		
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

char* func_1452()
{
	return func_1438(1, 1, 1);
}

bool func_1453()
{
	return (func_1455() || func_1454());
}

int func_1454()
{
	return 0;
}

bool func_1455()
{
	return (func_454(iLocal_622, 3) || func_1456(bLocal_618));
}

bool func_1456(bool bParam0)
{
	return func_1457(bParam0);
}

bool func_1457(bool bParam0)
{
	return func_263(bParam0, 20);
}

bool func_1458(int iParam0, int iParam1, int iParam2)
{
	return ((!func_1526() && !func_1525()) && func_1459((iParam0 && func_1524()), func_1523(), func_1522(), 0));
}

int func_1459(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x259BE71D8A81D4FA();
	if (func_972(iVar0, 14))
	{
		return 0;
	}
	if (func_1521(iVar0, 21))
	{
		return 0;
	}
	if (func_1521(iVar0, 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0xF859473E4AD09F30())
		{
			return 0;
		}
	}
	if (!func_1520(iVar0))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x0721B5D4CF3ACD02())
		{
			return 0;
		}
	}
	if (func_1519(iVar0))
	{
		return 0;
	}
	if (func_1518())
	{
		return 0;
	}
	if (func_1517())
	{
		return 0;
	}
	if (func_1516())
	{
		return 0;
	}
	if (func_1515())
	{
		return 0;
	}
	if (unk_0x834C960822A4683F())
	{
		return 0;
	}
	if (func_358(iVar0))
	{
		return 0;
	}
	if (!func_1513())
	{
		return 0;
	}
	if (func_1521(iVar0, 0) || func_1521(iVar0, 3))
	{
		return 0;
	}
	if ((func_1521(iVar0, 12) || func_1521(iVar0, 14)) || func_1521(iVar0, 13))
	{
		return 0;
	}
	if (func_1510(iVar0, 0, -1))
	{
		if (!func_1471())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_220())
		{
			return 0;
		}
	}
	if (Global_1935176)
	{
		return 0;
	}
	if (func_1470(iVar0))
	{
		return 0;
	}
	if (func_1469())
	{
		return 0;
	}
	if (func_1468(iVar0))
	{
		return 0;
	}
	if ((func_410(iVar0) && func_407(iVar0) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_1467())
	{
		return 0;
	}
	if (BitTest(Global_1853910[iVar0 /*862*/].f_267.f_31, 4))
	{
		if (!func_1466())
		{
			return 0;
		}
	}
	if (func_1465(iVar0))
	{
		return 0;
	}
	if (func_1464(iVar0))
	{
		return 0;
	}
	if (!func_1457(iVar0))
	{
		if (func_261(iVar0))
		{
			return 0;
		}
	}
	if (func_1462())
	{
		return 0;
	}
	if (func_1461(iVar0) && !func_1460(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_1460(int iParam0)
{
	if (iParam0 != func_74())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_249(Global_2657589[iParam0 /*466*/].f_321.f_7) == 23;
			}
		}
	}
	return 0;
}

int func_1461(int iParam0)
{
	if (iParam0 != func_74())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_5, 4);
	}
	return 0;
}

bool func_1462()
{
	return func_1463() == 1;
}

int func_1463()
{
	return Global_1977557;
}

int func_1464(bool bParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return 0;
	}
	if (bParam0 == unk_0x259BE71D8A81D4FA())
	{
		return Global_2764907;
	}
	else
	{
		uVar0 = unk_0x56E414973C2A8C0E(bParam0);
		if (unk_0xFC8BFE4B41177C22(uVar0))
		{
			iVar1 = unk_0x4B423FAA24E8ABF0(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_1465(int iParam0)
{
	if (Global_2657589[iParam0 /*466*/].f_272.f_4 != 0 || Global_2657589[iParam0 /*466*/].f_272.f_5)
	{
		return 1;
	}
	return 0;
}

int func_1466()
{
	int iVar0;
	
	iVar0 = func_237(unk_0x259BE71D8A81D4FA());
	if (func_423(Global_1853556.f_19, -1))
	{
		if (iVar0 == 293)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1467()
{
	return Global_1950108.f_4667 != -1;
}

int func_1468(bool bParam0)
{
	if (BitTest(Global_1853910[bParam0 /*862*/].f_267.f_31, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853910[bParam0 /*862*/].f_267.f_31, 11))
	{
		return 1;
	}
	return 0;
}

int func_1469()
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_1470(bool bParam0)
{
	if (!func_9(bParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861, 2);
}

int func_1471()
{
	int iVar0;
	
	iVar0 = func_237(unk_0x259BE71D8A81D4FA());
	if (func_1501(unk_0x259BE71D8A81D4FA()))
	{
		if (((((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188) || iVar0 == 294) || iVar0 == 295)
		{
			return 1;
		}
	}
	if (func_1500(unk_0x259BE71D8A81D4FA()))
	{
		if (((func_1499(iVar0) || func_1498(iVar0)) || iVar0 == 293) || iVar0 == 292)
		{
			return 1;
		}
	}
	if (func_1497(unk_0x259BE71D8A81D4FA()))
	{
		if (func_1498(iVar0))
		{
			return 1;
		}
	}
	if (func_1496(unk_0x259BE71D8A81D4FA()))
	{
		if (func_1495(iVar0))
		{
			return 1;
		}
	}
	if (func_1494(unk_0x259BE71D8A81D4FA()))
	{
		if (func_1493(iVar0))
		{
			return 1;
		}
	}
	if (func_1492(unk_0x259BE71D8A81D4FA()))
	{
		if (func_1304(iVar0))
		{
			return 1;
		}
	}
	if (func_1491(unk_0x259BE71D8A81D4FA()))
	{
		if (func_1490(iVar0))
		{
			return 1;
		}
	}
	if (func_411(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (func_1489(iVar0))
		{
			if (func_1487(unk_0x259BE71D8A81D4FA()))
			{
				return 1;
			}
		}
	}
	if (func_1486(unk_0x259BE71D8A81D4FA()))
	{
		if (func_1485(iVar0))
		{
			return 1;
		}
		if (func_1484(iVar0))
		{
			return 1;
		}
		if (func_1483())
		{
			return 1;
		}
	}
	if (func_1482(unk_0x259BE71D8A81D4FA()))
	{
		if (func_1481())
		{
			return 1;
		}
	}
	if (func_1480(unk_0x259BE71D8A81D4FA()))
	{
		if (func_1484(iVar0))
		{
			return 1;
		}
	}
	if (func_248(unk_0x259BE71D8A81D4FA()))
	{
		if (func_1479(iVar0))
		{
			return 1;
		}
	}
	if (func_1460(unk_0x259BE71D8A81D4FA()))
	{
		if (func_1478(iVar0))
		{
			return 1;
		}
	}
	if (func_1477(unk_0x259BE71D8A81D4FA()))
	{
		if (func_1476(iVar0) || func_1475(iVar0))
		{
			return 1;
		}
	}
	if (func_1474(unk_0x259BE71D8A81D4FA()))
	{
		if (func_1473(iVar0) || func_1472(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1472(int iParam0)
{
	switch (iParam0)
	{
		case 304:
			return 1;
		
		default:
	}
	return 0;
}

int func_1473(int iParam0)
{
	switch (iParam0)
	{
		case 305:
			return 1;
		
		default:
	}
	return 0;
}

int func_1474(int iParam0)
{
	if (iParam0 != func_74())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_74())
			{
				return func_249(Global_2657589[iParam0 /*466*/].f_321.f_7) == 25;
			}
		}
	}
	return 0;
}

int func_1475(int iParam0)
{
	switch (iParam0)
	{
		case 263:
			return 1;
		
		default:
	}
	return 0;
}

int func_1476(int iParam0)
{
	switch (iParam0)
	{
		case 264:
			return 1;
		
		default:
	}
	return 0;
}

int func_1477(int iParam0)
{
	if (iParam0 != func_74())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_249(Global_2657589[iParam0 /*466*/].f_321.f_7) == 24;
			}
		}
	}
	return 0;
}

int func_1478(int iParam0)
{
	switch (iParam0)
	{
		case 276:
			return 1;
		
		default:
	}
	return 0;
}

int func_1479(int iParam0)
{
	switch (iParam0)
	{
		case 271:
			return 1;
		
		default:
	}
	return 0;
}

int func_1480(int iParam0)
{
	if (iParam0 != func_74())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_74())
			{
				return func_249(Global_2657589[iParam0 /*466*/].f_321.f_7) == 20;
			}
		}
	}
	return 0;
}

bool func_1481()
{
	return Global_2793046.f_6881;
}

int func_1482(int iParam0)
{
	if (iParam0 != func_74())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_249(Global_2657589[iParam0 /*466*/].f_321.f_7) == 16;
			}
		}
	}
	return 0;
}

bool func_1483()
{
	return Global_2793046.f_6880;
}

int func_1484(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_1485(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_1486(int iParam0)
{
	if (iParam0 != func_74())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_249(Global_2657589[iParam0 /*466*/].f_321.f_7) == 14;
			}
		}
	}
	return 0;
}

int func_1487(int iParam0)
{
	if (func_1488(iParam0) != func_74())
	{
		return func_1488(iParam0) == func_107(iParam0);
	}
	return 0;
}

int func_1488(int iParam0)
{
	return Global_1894573[iParam0 /*608*/].f_10.f_35;
}

int func_1489(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_1490(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_1491(int iParam0)
{
	if (iParam0 != func_74())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_249(Global_2657589[iParam0 /*466*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

int func_1492(int iParam0)
{
	if (iParam0 != func_74())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_249(Global_2657589[iParam0 /*466*/].f_321.f_7) == 9;
			}
		}
	}
	return 0;
}

int func_1493(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_1494(int iParam0)
{
	if (iParam0 != func_74())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_249(Global_2657589[iParam0 /*466*/].f_321.f_7) == 7;
			}
		}
	}
	return 0;
}

int func_1495(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_1496(int iParam0)
{
	if (iParam0 != func_74())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_249(Global_2657589[iParam0 /*466*/].f_321.f_7) == 4;
			}
		}
	}
	return 0;
}

int func_1497(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_74())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				iVar0 = func_249(Global_2657589[iParam0 /*466*/].f_321.f_7);
				return (iVar0 == 2 || iVar0 == 25);
			}
		}
	}
	return 0;
}

int func_1498(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_1499(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_1500(int iParam0)
{
	if (func_423(Global_1853910[iParam0 /*862*/].f_267.f_33, -1))
	{
		return 1;
	}
	return 0;
}

int func_1501(int iParam0)
{
	if (((func_1509(Global_1853910[iParam0 /*862*/].f_267.f_33) || func_1508(iParam0)) || func_1507(iParam0)) || func_1502(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1502(int iParam0)
{
	if (func_1503(Global_1853910[iParam0 /*862*/].f_267.f_33, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_1503(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_1504(unk_0x259BE71D8A81D4FA(), 0);
	}
	if (bParam1)
	{
		if (func_1504(unk_0x259BE71D8A81D4FA(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

int func_1504(int iParam0, bool bParam1)
{
	if (Global_1853746 != func_74())
	{
		if (!func_1506(Global_1853746))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x259BE71D8A81D4FA() != Global_1853746)
			{
				if (BitTest(Global_2657589[Global_1853746 /*466*/].f_199, 24) || func_1505(Global_1853746))
				{
					return 1;
				}
			}
		}
	}
	return BitTest(Global_2657589[iParam0 /*466*/].f_199, 24);
}

int func_1505(int iParam0)
{
	if (iParam0 != func_74())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_199, 9);
	}
	return 0;
}

int func_1506(int iParam0)
{
	if (iParam0 != func_74())
	{
		return BitTest(Global_1853910[iParam0 /*862*/].f_267.f_386, 2);
	}
	return 0;
}

int func_1507(int iParam0)
{
	if (iParam0 != func_74())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_249(Global_2657589[iParam0 /*466*/].f_321.f_7) == 1;
			}
		}
	}
	return 0;
}

int func_1508(int iParam0)
{
	if (iParam0 != func_74())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_249(Global_2657589[iParam0 /*466*/].f_321.f_7) == 0;
			}
		}
	}
	return 0;
}

int func_1509(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_1510(bool bParam0, bool bParam1, int iParam2)
{
	if (Global_1853910[bParam0 /*862*/].f_267.f_33 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1853910[bParam0 /*862*/].f_267.f_31, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
	{
		if (iParam2 == -1 || func_249(Global_2657589[bParam0 /*466*/].f_321.f_7) != iParam2)
		{
			if (bParam1)
			{
				return func_1511(bParam0) == bParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_1511(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_74())
	{
		return iParam0;
	}
	if (func_1512(iParam0) != -1)
	{
		iVar0 = func_249(func_1512(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_81(iParam0, 0))
			{
				return func_107(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_74();
		}
		return Global_2657589[iParam0 /*466*/].f_321.f_10;
	}
	return func_74();
}

int func_1512(int iParam0)
{
	if (iParam0 != func_74())
	{
		if (func_9(iParam0, 1, 1))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7;
		}
		else if (((Global_1575060 || Global_2635559.f_2680) && iParam0 == unk_0x259BE71D8A81D4FA()) && func_9(iParam0, 1, 0))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7;
		}
	}
	return -1;
}

int func_1513()
{
	if (func_1514() == 0)
	{
		return 1;
	}
	return 0;
}

int func_1514()
{
	return Global_1574632.f_18;
}

bool func_1515()
{
	return Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_192 != 0;
}

bool func_1516()
{
	return Global_1575060;
}

bool func_1517()
{
	return Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/] == 5;
}

bool func_1518()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_18, 0);
}

int func_1519(bool bParam0)
{
	if (func_357(bParam0, 1, 0))
	{
		if (Global_1853910[bParam0 /*862*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1520(bool bParam0)
{
	return BitTest(Global_1853910[bParam0 /*862*/].f_139, 22);
}

bool func_1521(int iParam0, int iParam1)
{
	return BitTest(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}

bool func_1522()
{
	if (Local_214.f_49.f_6 != 0)
	{
		Call_Loc(Local_214.f_49.f_6);
		return StackVal;
	}
	if (func_1483())
	{
		return 0;
	}
	return !func_1251(3);
}

int func_1523()
{
	if (Local_214.f_49.f_7 != 0)
	{
		Call_Loc(Local_214.f_49.f_7);
		return StackVal;
	}
	return 1;
}

bool func_1524()
{
	return !func_1736();
}

int func_1525()
{
	return 0;
}

int func_1526()
{
	if ((func_263(unk_0x259BE71D8A81D4FA(), 21) || func_263(unk_0x259BE71D8A81D4FA(), 22)) || func_1532())
	{
		return 1;
	}
	if (func_1528())
	{
		func_1527(22);
		return 1;
	}
	return 0;
}

void func_1527(bool bParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_4), iParam0);
}

int func_1528()
{
	if (func_236(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (((func_1531() && !func_1530()) || func_1521(unk_0x259BE71D8A81D4FA(), 21)) || func_1521(unk_0x259BE71D8A81D4FA(), 25))
		{
			return 1;
		}
		else
		{
			func_1529(27);
		}
	}
	return 0;
}

void func_1529(bool bParam0)
{
	unk_0x8744D2E3FC95740E(&(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_4), iParam0);
}

bool func_1530()
{
	return Global_1574582.f_1;
}

bool func_1531()
{
	return Global_1574582;
}

bool func_1532()
{
	return func_1533(424, -1);
}

int func_1533(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2848282[iParam0 /*3*/][func_216(iParam1)];
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_1534()
{
	if (func_527() == 2 && func_1535(Local_628.f_0) != 3)
	{
		return 0;
	}
	if (func_1251(11))
	{
		if (func_85(24) || func_85(23))
		{
			return 0;
		}
	}
	return 1;
}

int func_1535(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
		case 291:
		case 292:
		case 293:
		case 294:
		case 295:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
		case 304:
		case 305:
		case 306:
		case 307:
		case 308:
		case 309:
			return 0;
		
		case 276:
		case 267:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

void func_1536()
{
	int iVar0;
	
	if (func_454(iLocal_622, 25))
	{
		return;
	}
	if (func_1538())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < func_474())
	{
		if (Local_674.f_577.f_1[iVar0 /*5*/].f_1 != -1)
		{
			func_1537(Local_674.f_577.f_1[iVar0 /*5*/]);
		}
		iVar0++;
	}
	func_1257(25);
}

void func_1537(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1956139.f_5610[iVar0 /*2*/].f_1 == -1)
		{
			Global_1956139.f_5610[iVar0 /*2*/] = { Param0 };
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956139, true);
			return;
		}
		iVar0++;
	}
	if (!BitTest(Global_1956139, 1))
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_1956139, true);
	}
}

bool func_1538()
{
	return func_1539(unk_0x259BE71D8A81D4FA());
}

int func_1539(int iParam0)
{
	if (iParam0 != func_74())
	{
		if (func_497(Global_1894573[iParam0 /*608*/].f_556.f_12) || BitTest(Global_1894573[iParam0 /*608*/].f_556, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_1540()
{
	char* sVar0;
	
	if (func_1251(11))
	{
		sVar0 = func_1544();
	}
	else
	{
		sVar0 = func_1542();
	}
	if (iLocal_611 != -1)
	{
		if (!unk_0xD6F9DEE4765092A9(sVar0))
		{
			unk_0x86A2BC11844DEEB3(sVar0);
		}
	}
	func_1541(0);
}

void func_1541(bool bParam0)
{
	if (bParam0)
	{
		if (!func_1251(34))
		{
			unk_0xCFBD89D2F1F18961("DisableFlightMusic", 1);
			unk_0xCFBD89D2F1F18961("WantedMusicDisabled", 1);
			func_284(34);
		}
	}
	else if (func_1251(34))
	{
		unk_0xCFBD89D2F1F18961("DisableFlightMusic", 0);
		unk_0xCFBD89D2F1F18961("WantedMusicDisabled", 0);
		func_283(34);
	}
}

var func_1542()
{
	if (Local_214.f_100.f_3.f_3 != 0)
	{
		Call_Loc(Local_214.f_100.f_3.f_3);
		return StackVal;
	}
	return func_1543();
}

char* func_1543()
{
	return "";
}

var func_1544()
{
	if (Local_214.f_100.f_3.f_2 != 0)
	{
		Call_Loc(Local_214.f_100.f_3.f_2);
		return StackVal;
	}
	return func_1545();
}

char* func_1545()
{
	return "";
}

void func_1546()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = -1;
	iVar4 = 0;
	while (iVar4 < Local_197.f_19)
	{
		func_1734(iVar4);
		bVar0 = unk_0x93BF17E19A9F0E9B(Local_674.f_2[iVar4]);
		if (bVar0)
		{
			iVar3 = unk_0xF5014688C9788D5F(Local_674.f_2[iVar4]);
			bVar1 = unk_0x1C2F771CDC87A3A5(iVar3, 0);
			if (Local_214.f_120.f_34 != 0)
			{
				Stack.Push(iVar4);
				Stack.Push(iVar3);
				Stack.Push(bVar1);
				Call_Loc(Local_214.f_120.f_34);
			}
			if (!bVar1)
			{
				func_1729(iVar4, iVar3);
				func_1728(iVar4, iVar3);
				func_1708(iVar4, iVar3, &bVar2, &iVar5);
				func_1703(iVar4, iVar3);
				func_1690(iVar4, iVar3, bVar2);
				func_1685(iVar4, iVar3);
			}
			func_1683(iVar4);
			func_1670(iVar4, Local_590.f_11);
			func_1604(iVar4);
		}
		else
		{
			Local_548[iVar4 /*7*/].f_1 = 99999f;
			Local_548[iVar4 /*7*/].f_2 = 99999f;
			Local_548[iVar4 /*7*/].f_3 = 99999f;
		}
		func_1590(iVar4, bVar0);
		iVar4++;
	}
	if (func_1456(bLocal_618))
	{
		if (bVar2)
		{
			func_1587(1);
		}
		else
		{
			func_1582(0, 0);
			func_1587(0);
		}
	}
	func_1573();
	func_1548();
	iLocal_651++;
	if (iLocal_651 >= func_28())
	{
		iLocal_651 = 0;
		func_1547();
	}
}

void func_1547()
{
	if (func_13(&(Local_548.f_33), 5000, 0) && Local_548.f_35)
	{
		func_54(&(Local_548.f_33));
		Local_548.f_35 = 0;
	}
}

void func_1548()
{
	struct<3> Var0;
	bool bVar1;
	int iVar2;
	
	if (unk_0x93BF17E19A9F0E9B(Local_674.f_2[iLocal_651]))
	{
		iVar2 = unk_0xF5014688C9788D5F(Local_674.f_2[iLocal_651]);
		bVar1 = unk_0x1C2F771CDC87A3A5(iVar2, 0);
		Var0 = { unk_0xD1A6A821F5AC81DB(iVar2, 0) };
		if (!bVar1)
		{
			func_1571(iLocal_651, Var0);
			if (func_13(&(Local_548.f_33), 5000, 0))
			{
				if (iLocal_651 == 0)
				{
					Local_548.f_35 = 1;
				}
				func_1549(iLocal_651, iVar2, Var0);
			}
		}
	}
}

void func_1549(int iParam0, int iParam1, struct<3> Param2)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<3> Var5;
	float fVar6;
	
	iVar0 = func_1569(Param2, 6, -1, 0, 1, -1);
	Var1 = { func_1556(iVar0, 0) };
	iVar2 = unk_0x0556019E7EE8EC9A(Var1, func_1552(iVar0));
	iVar3 = unk_0xF8F35890F43ED2AE(iParam1);
	if (iVar2 != 0 && iVar2 == iVar3)
	{
		if (unk_0xA3736D76B0E93E93(iParam1))
		{
		}
		else if (!func_813(Local_674.f_2[iParam0]))
		{
		}
		else if (func_1551(iVar0, &Var1, &uVar4))
		{
			Var1 = { Var1.f_0, Var1.f_1, (Var1.f_2 + 5f) };
			unk_0xB2BD5837A8D3CEDA(iParam1, Var1, 1, 0, 0, 1);
			if (unk_0xBE79A96C521F4432(iParam1))
			{
				unk_0x711CB952E5BE087E(unk_0x0646D07BB2D516CD(iParam1));
			}
			unk_0x5C96CEA06531AB03(iParam1, uVar4);
			unk_0x1ACA339FBE1A59EA(iParam1);
		}
	}
	if (iVar3 != 0 && func_1550(bLocal_618))
	{
		if (unk_0xA3736D76B0E93E93(iParam1))
		{
		}
		else if (!func_813(Local_674.f_2[iParam0]))
		{
		}
		else
		{
			if (vdist2(Param2, -64.7017f, -1092.087f, 25.5856f) < vdist2(Param2, -38.848f, -1110.146f, 25.443f))
			{
				Var5 = { -64.7017f, -1092.087f, 25.5856f };
				fVar6 = 239.817f;
			}
			else
			{
				Var5 = { -38.848f, -1110.146f, 25.443f };
				fVar6 = 221.162f;
			}
			unk_0xB2BD5837A8D3CEDA(iParam1, Var5, 1, 0, 0, 1);
			if (unk_0xBE79A96C521F4432(iParam1))
			{
				unk_0x711CB952E5BE087E(unk_0x0646D07BB2D516CD(iParam1));
			}
			unk_0x5C96CEA06531AB03(iParam1, fVar6);
			unk_0x1ACA339FBE1A59EA(iParam1);
		}
	}
}

int func_1550(bool bParam0)
{
	if (bParam0 != func_74())
	{
		return BitTest(Global_2657589[bParam0 /*466*/].f_321.f_5, 25);
	}
	return 0;
}

bool func_1551(int iParam0, var uParam1, var uParam2)
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
	return !func_227(*uParam1, 0f, 0f, 0f, 0);
}

char* func_1552(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "";
			break;
		
		case 0:
			return "v_hairdresser";
			break;
		
		case 1:
			return "v_barbers";
			break;
		
		case 2:
			return "v_barbers";
			break;
		
		case 3:
			return "v_barbers";
			break;
		
		case 4:
			return "v_barbers";
			break;
		
		case 5:
			return "v_barbers";
			break;
		
		case 6:
			return "v_barbers";
			break;
		
		case 7:
			return "v_clotheslo";
			break;
		
		case 8:
			return "v_clotheslo";
			break;
		
		case 9:
			return "v_clotheslo";
			break;
		
		case 10:
			return "v_clotheslo";
			break;
		
		case 11:
			return "v_clotheslo";
			break;
		
		case 12:
			return "v_clotheslo";
			break;
		
		case 13:
			return "v_clotheslo";
			break;
		
		case 14:
			return "v_clothesmid";
			break;
		
		case 15:
			return "v_clothesmid";
			break;
		
		case 16:
			return "v_clothesmid";
			break;
		
		case 17:
			return "v_clothesmid";
			break;
		
		case 18:
			return "v_clotheshi";
			break;
		
		case 19:
			return "v_clotheshi";
			break;
		
		case 20:
			return "v_clotheshi";
			break;
		
		case 21:
			return "";
			break;
		
		case 22:
			return "v_tattoo";
			break;
		
		case 23:
			return "v_tattoo2";
			break;
		
		case 24:
			return "v_tattoo2";
			break;
		
		case 25:
			return "v_tattoo";
			break;
		
		case 26:
			return "v_tattoo";
			break;
		
		case 27:
			return "v_tattoo";
			break;
		
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
		
		case 39:
			return "v_carmod";
			break;
		
		case 40:
			return "v_lockup";
			break;
		
		case 41:
			return "v_carmod";
			break;
		
		case 42:
			return "v_carmod3";
			break;
		
		case 43:
			return "v_carmod3";
			break;
		
		case 44:
			return "lr_supermod_int";
			break;
		
		case 45:
			return func_1553(Global_102825);
			break;
		
		case 46:
			return "gr_grdlc_int_01";
			break;
		
		case 47:
			return "xm_x17dlc_int_01";
			break;
		
		case 48:
			return "ba_dlc_int_03_ba";
			break;
		
		case 49:
			return "xs_x18_int_mod";
			break;
		
		case 52:
			return "ch_dlc_plan";
			break;
		
		case 50:
			return "vw_dlc_casino_apart";
			break;
		
		case 51:
			return "vw_dlc_casino_main";
			break;
		
		case 53:
			return "h4_int_sub_h4";
			break;
		
		case 54:
			return "tr_tuner_car_meet";
			break;
		
		case 55:
			return "tr_tuner_car_meet";
			break;
		
		case 56:
			return "sf_dlc_office_sec";
			break;
		
		case 57:
			return "sf_dlc_studio_sec";
			break;
		
		case 58:
			return "";
			break;
		
		case 59:
			return "xm3_dlc_int_03_xm3";
			break;
	}
	return "";
}

char* func_1553(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "imp_impexp_intwaremed";
			break;
		
		case 2:
			return "imp_impexp_intwaremed";
			break;
		
		case 3:
			return "imp_impexp_intwaremed";
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "imp_imptexp_mod_int_01";
			break;
		
		case 4:
			return "Bkr_Biker_DLC_INT_01";
			break;
		
		case 5:
			return "Bkr_Biker_DLC_INT_02";
			break;
		
		case 10:
			return "gr_grdlc_int_01";
			break;
		
		case 11:
			return "gr_grdlc_int_02";
			break;
		
		case 12:
			return "sm_smugdlc_int_01";
			break;
		
		case 13:
			return "xm_x17dlc_int_01";
			break;
		
		case 14:
			return "xm_x17dlc_int_02";
			break;
		
		case 15:
			return "ba_dlc_int_01_ba";
			break;
		
		case 16:
			return "ba_dlc_int_03_ba";
			break;
		
		case 17:
			if (func_1554() == 0)
			{
				return "xs_x18_int_mod";
			}
			else
			{
				return "xs_x18_int_mod2";
			}
			break;
		
		case 18:
			return "tr_tuner_car_meet";
			break;
		
		case 19:
			return "tr_tuner_mod_garage";
			break;
		
		case 20:
			return "sf_dlc_garage_sec";
			break;
		
		case 21:
			return "xm3_dlc_int_03_xm3";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

int func_1554()
{
	return func_1555(unk_0x259BE71D8A81D4FA());
}

var func_1555(bool bParam0)
{
	return unk_0x8B5B2BE72A7C0CF6(Global_2657589[bParam0 /*466*/].f_321.f_3, 28, 31);
}

Vector3 func_1556(int iParam0, bool bParam1)
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
			return func_1568(Global_102825);
			break;
		
		case 46:
			if (Global_1853747 != func_74())
			{
				if (func_1567(Global_1853747))
				{
					return func_1560(2, 2);
				}
				else if (func_1559(Global_1853747))
				{
					return func_1560(45, 3);
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
			return func_1557();
			break;
		
		case 59:
			return 560f, -405f, -69.6591f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_1557()
{
	if (!func_33(Global_1956117))
	{
		return Global_1956117;
	}
	switch (func_1558())
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

int func_1558()
{
	return Global_2652258.f_2650;
}

int func_1559(int iParam0)
{
	if (iParam0 != func_74())
	{
		if ((BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 0) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 1)) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_1560(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1853747 != func_74())
	{
		if (iParam1 == 3)
		{
			if (func_1561(iParam0, 1, &Var0, 0, 0))
			{
				Var1 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 4))
			{
				if (func_1561(iParam0, 1, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
			else if (BitTest(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 5))
			{
				if (func_1561(iParam0, 2, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
		}
	}
	return Var1;
}

int func_1561(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var1;
	struct<4> Var2;
	struct<3> Var3;
	
	if (!func_1566(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_1566(iParam1, &Var1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_1564(iParam0) };
	}
	else
	{
		Var2 = { func_1563(iParam0) };
	}
	Var3 = { Var2 - Var0 };
	Var3 = { func_1562(Var3, -Var0.f_3.f_2) };
	Var3 = { func_1562(Var3, Var1.f_3.f_2) };
	*uParam2 = { unk_0xF10F2A2453AF1DFB(Var1, 0f, Var3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_1562(struct<3> Param0, float fParam1)
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

struct<6> func_1563(int iParam0)
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

struct<6> func_1564(int iParam0)
{
	return func_1565(iParam0);
}

struct<6> func_1565(int iParam0)
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