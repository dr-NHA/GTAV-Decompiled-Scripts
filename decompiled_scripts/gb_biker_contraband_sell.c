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
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
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
	int iLocal_125 = 0;
	var uLocal_126 = 0;
	float fLocal_127 = 0f;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	int iLocal_133 = 0;
	var uLocal_134 = 0;
	struct<489> Local_135 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 7200000, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 5000, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, -1, -1, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_136 = { 0, 0, 1065353216, 1065353216, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = -1;
	var uLocal_140 = -1;
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
	var uLocal_154[2] = { 0, 0 };
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	bool bLocal_158 = 0;
	struct<2> Local_159[4];
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 8;
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
	int iLocal_184 = 0;
	struct<984> Local_185 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, -1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 10, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, -1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, -1082130432, 0, 15, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1 } ;
	struct<29> Local_186[8];
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	bool bLocal_189 = 0;
	var uLocal_190 = 16;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
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
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	bool bLocal_358 = 0;
	int iLocal_359 = 0;
	struct<21> Local_360 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_111 = 3f;
	fLocal_112 = 0f;
	fLocal_113 = 2f;
	fLocal_114 = 100f;
	iLocal_125 = -1;
	fLocal_127 = 0.5f;
	iLocal_187 = -1;
	iLocal_188 = -1;
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_2258(unk_0x259BE71D8A81D4FA(), 0, 1))
		{
			if (!func_2207(ScriptParam_360))
			{
				func_2205(0, 1);
				func_2048(0);
			}
		}
		else
		{
			func_2048(0);
		}
	}
	else
	{
		func_2205(0, 1);
		func_2048(0);
	}
	bLocal_358 = func_2047();
	while (true)
	{
		func_2046();
		if (func_2036(1))
		{
			func_2205(0, 1);
			func_2048(0);
		}
		if (func_2031())
		{
			func_2205(0, 1);
			func_2048(1);
		}
		func_2027();
		func_2014();
		switch (func_2013(unk_0xAE032CEDCF23C6D5()))
		{
			case 0:
				if (func_2012() == 1)
				{
					if (func_2047() && !func_2011())
					{
						if (func_2010())
						{
							if (Local_186[unk_0xAE032CEDCF23C6D5() /*29*/].f_25 == -1)
							{
								Local_186[unk_0xAE032CEDCF23C6D5() /*29*/].f_25 = func_2009();
							}
							func_1992(Local_185.f_0, func_2009(), 0, 1, 1, &iLocal_184);
							if (iLocal_184 == 2 || iLocal_184 == 3)
							{
								if (iLocal_184 == 2)
								{
									Local_186[unk_0xAE032CEDCF23C6D5() /*29*/].f_26 = func_1991(unk_0x259BE71D8A81D4FA(), Local_185.f_0);
								}
								else if (iLocal_184 == 3)
								{
									Local_186[unk_0xAE032CEDCF23C6D5() /*29*/].f_25 = 0;
									Local_186[unk_0xAE032CEDCF23C6D5() /*29*/].f_26 = func_1991(unk_0x259BE71D8A81D4FA(), Local_185.f_0);
								}
								if (func_1983())
								{
									func_1982(unk_0xAE032CEDCF23C6D5(), 1);
									func_1981();
								}
							}
						}
						else
						{
							Local_186[unk_0xAE032CEDCF23C6D5() /*29*/].f_26 = func_1991(unk_0x259BE71D8A81D4FA(), Local_185.f_0);
							Local_186[unk_0xAE032CEDCF23C6D5() /*29*/].f_25 = 0;
							if (func_1983())
							{
								func_1982(unk_0xAE032CEDCF23C6D5(), 1);
								func_1981();
							}
						}
					}
					else if (func_1983())
					{
						func_1982(unk_0xAE032CEDCF23C6D5(), 1);
						func_1981();
					}
				}
				else if (func_2012() == 3)
				{
					func_1982(unk_0xAE032CEDCF23C6D5(), 3);
				}
				break;
			
			case 1:
				if (func_2012() == 1)
				{
					func_623();
				}
				else if (func_2012() == 3)
				{
					func_1982(unk_0xAE032CEDCF23C6D5(), 3);
				}
				break;
			
			case 3:
				func_2048(0);
				break;
		}
		if (unk_0x93E08E0F531E2C35())
		{
			if (func_622())
			{
				func_621(3);
			}
			switch (func_2012())
			{
				case 0:
					if (func_558())
					{
						func_621(1);
					}
					break;
				
				case 1:
					func_84();
					func_1();
					break;
				
				case 3:
					break;
				}
		}
	}
}

void func_1()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3[4];
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7[4];
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	
	bVar6 = true;
	bVar8 = true;
	bVar9 = false;
	bVar0 = false;
	while (bVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(bVar0))
		{
			iVar4 = bVar0;
			bVar2 = unk_0x4470BE79F5771783(iVar4);
			iVar5 = unk_0x56E414973C2A8C0E(bVar2);
			bVar1 = bVar2;
			func_75(&(Local_185.f_154), bVar0);
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_156, bVar0);
			if (func_2258(bVar2, 0, 1))
			{
				iVar11++;
				if (Local_186[bVar0 /*29*/] != 3)
				{
					bVar8 = false;
				}
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_155, bVar1);
				if (unk_0x1C2F771CDC87A3A5(iVar5, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_157, bVar1);
				}
				if (func_74())
				{
					bVar12 = false;
					while (bVar12 < func_72())
					{
						if (unk_0x93BF17E19A9F0E9B(Local_185.f_64[bVar12]))
						{
							if (!BitTest(Local_185.f_166, bVar12))
							{
								if (BitTest(Local_186[bVar0 /*29*/].f_3, bVar12))
								{
									func_71(1);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_166), bVar12);
								}
							}
						}
						bVar12++;
					}
				}
				if (unk_0x93BF17E19A9F0E9B(Local_185.f_59[0]))
				{
					if (func_70(0, unk_0x56E414973C2A8C0E(bVar2)))
					{
						bVar3[0] = bVar2;
						iVar7[0] = 1;
					}
					func_69(bVar0, 0, 0);
					func_64(bVar2, 0);
				}
				else
				{
					func_69(bVar0, 0, 1);
				}
				if (unk_0x93BF17E19A9F0E9B(Local_185.f_59[1]))
				{
					if (func_70(1, unk_0x56E414973C2A8C0E(bVar2)))
					{
						bVar3[1] = bVar2;
						iVar7[1] = 1;
					}
					func_69(bVar0, 1, 0);
					func_64(bVar2, 1);
				}
				else
				{
					func_69(bVar0, 1, 1);
				}
				if (unk_0x93BF17E19A9F0E9B(Local_185.f_59[2]))
				{
					if (func_70(2, unk_0x56E414973C2A8C0E(bVar2)))
					{
						bVar3[2] = bVar2;
						iVar7[2] = 1;
					}
					func_69(bVar0, 2, 0);
					func_64(bVar2, 2);
				}
				else
				{
					func_69(bVar0, 2, 1);
				}
				if (unk_0x93BF17E19A9F0E9B(Local_185.f_59[3]))
				{
					if (func_70(3, unk_0x56E414973C2A8C0E(bVar2)))
					{
						bVar3[3] = bVar2;
						iVar7[3] = 1;
					}
					func_69(bVar0, 3, 0);
					func_64(bVar2, 3);
				}
				else
				{
					func_69(bVar0, 3, 1);
				}
				if (!bVar9)
				{
					if (func_63(iVar4, 14))
					{
						if (!BitTest(Local_185.f_961, 0))
						{
							if (func_62(10) || !func_61())
							{
								bVar9 = true;
							}
							else
							{
								unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_961), false);
							}
						}
					}
					else if (func_63(iVar4, 15))
					{
						if (!BitTest(Local_185.f_961, 1))
						{
							if (func_62(11) || !func_61())
							{
								bVar9 = true;
							}
							else
							{
								unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_961), true);
							}
						}
					}
					else if (func_63(iVar4, 16))
					{
						if (!BitTest(Local_185.f_961, 2))
						{
							if (func_62(12) || !func_61())
							{
								bVar9 = true;
							}
							else
							{
								unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_961), 2);
							}
						}
					}
					else if (func_63(iVar4, 17))
					{
						if (!BitTest(Local_185.f_961, 3))
						{
							if (func_62(13) || !func_61())
							{
								bVar9 = true;
							}
							else
							{
								unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_961), 3);
							}
						}
					}
				}
				if (!func_63(iVar4, 0))
				{
					bVar6 = false;
				}
				if (func_63(iVar4, 20))
				{
					bVar10 = true;
				}
				if (!func_60(0))
				{
					if (func_63(iVar4, 22) && Local_186[bVar0 /*29*/].f_15 != func_59())
					{
						func_51(Local_186[bVar0 /*29*/].f_15);
						func_50(0);
					}
				}
				if (!func_60(1))
				{
					if (func_63(iVar4, 23) && Local_186[bVar0 /*29*/].f_15 != func_59())
					{
						func_51(Local_186[bVar0 /*29*/].f_15);
						func_50(1);
					}
				}
				if (!func_60(2))
				{
					if (func_63(iVar4, 24) && Local_186[bVar0 /*29*/].f_15 != func_59())
					{
						func_51(Local_186[bVar0 /*29*/].f_15);
						func_50(2);
					}
				}
				if (!func_60(3))
				{
					if (func_63(iVar4, 25) && Local_186[bVar0 /*29*/].f_15 != func_59())
					{
						func_51(Local_186[bVar0 /*29*/].f_15);
						func_50(3);
					}
				}
				if (!func_60(4))
				{
					if (func_63(iVar4, 26) && Local_186[bVar0 /*29*/].f_15 != func_59())
					{
						func_51(Local_186[bVar0 /*29*/].f_15);
						func_50(4);
					}
				}
				if (!func_60(5))
				{
					if (func_63(iVar4, 27) && Local_186[bVar0 /*29*/].f_15 != func_59())
					{
						func_51(Local_186[bVar0 /*29*/].f_15);
						func_50(5);
					}
				}
				if (!func_60(6))
				{
					if (func_63(iVar4, 28) && Local_186[bVar0 /*29*/].f_15 != func_59())
					{
						func_51(Local_186[bVar0 /*29*/].f_15);
						func_50(6);
					}
				}
				if (!func_60(7))
				{
					if (func_63(iVar4, 29) && Local_186[bVar0 /*29*/].f_15 != func_59())
					{
						func_51(Local_186[bVar0 /*29*/].f_15);
						func_50(7);
					}
				}
				if (!func_49(0))
				{
					if (func_63(iVar4, 8))
					{
						func_48(21);
						func_47(0);
						func_38(4, 0);
					}
				}
				if (!func_49(1))
				{
					if (func_63(iVar4, 9))
					{
						func_48(22);
						func_47(1);
						func_38(4, 1);
					}
				}
				if (!func_49(2))
				{
					if (func_63(iVar4, 10))
					{
						func_48(23);
						func_47(2);
						func_38(4, 2);
					}
				}
				if (!func_62(9))
				{
					if (func_63(iVar4, 4))
					{
						func_48(9);
					}
				}
				if (!func_62(20))
				{
					if (func_63(iVar4, 7))
					{
						iVar13 = func_30();
						if (iVar13 > -1)
						{
							Local_185.f_966 = iVar13;
							func_48(20);
						}
					}
				}
				if (!func_62(24))
				{
					if (func_63(iVar4, 12))
					{
						func_48(24);
					}
				}
				if (!func_29(0))
				{
					if (func_63(iVar4, 13))
					{
						func_28(0);
					}
				}
				if (!func_29(6))
				{
					if (func_63(iVar4, 18))
					{
						func_28(6);
					}
				}
				if (!func_62(30))
				{
					if (func_63(iVar4, 2))
					{
						func_48(30);
						if (func_27())
						{
							func_48(6);
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (func_2012() == 1)
	{
		if (iLocal_359 != iVar11 && func_26(&(Local_185.f_10), 15000, 0))
		{
			iLocal_359 = iVar11;
			if (func_25())
			{
				bVar15 = false;
				while (bVar15 < 32)
				{
					bVar16 = unk_0xB23E0F9B63D009A8(bVar15);
					if ((bVar16 == func_59() || !unk_0x762604C40829DB72(bVar16)) || !unk_0xCCD470854FB0E643(bVar16))
					{
						bVar14 = false;
						while (bVar14 < func_24())
						{
							if (Local_185.f_101[bVar14] == bVar15)
							{
								func_71(func_20(bVar14));
								Local_185.f_101[bVar14] = -1;
							}
							bVar14++;
						}
					}
					bVar15++;
				}
			}
			else
			{
				func_19();
				bVar15 = false;
				while (bVar15 < 32)
				{
					bVar17 = unk_0xB23E0F9B63D009A8(bVar15);
					bVar14 = false;
					while (bVar14 < func_14())
					{
						if (unk_0xFC8BFE4B41177C22(func_13(bVar14)) && !func_12(bVar14))
						{
							if (func_11(bVar14, bVar15))
							{
								if (!unk_0x762604C40829DB72(bVar17) || !unk_0xCCD470854FB0E643(bVar17))
								{
									func_71(func_20(bVar14));
									func_10(bVar14);
									func_9(0, bVar2, bVar14);
									func_8(bVar14, Local_185.f_175[bVar14]);
									func_7(bVar14);
								}
							}
						}
						bVar14++;
					}
					bVar15++;
				}
			}
		}
	}
	if (!func_29(27))
	{
		if (bVar10)
		{
			func_28(27);
		}
	}
	if (bVar3[0] != Local_185.f_54[0])
	{
		Local_185.f_54[0] = bVar3[0];
	}
	if (bVar3[1] != Local_185.f_54[1])
	{
		Local_185.f_54[1] = bVar3[1];
	}
	if (bVar3[2] != Local_185.f_54[2])
	{
		Local_185.f_54[2] = bVar3[2];
	}
	if (bVar3[3] != Local_185.f_54[3])
	{
		Local_185.f_54[3] = bVar3[3];
	}
	if (iVar7[0])
	{
		if (!func_62(10))
		{
			func_3(1);
			func_48(10);
		}
		if (!func_62(14))
		{
			func_48(14);
		}
	}
	else if (func_62(14))
	{
		func_2(14);
	}
	if (iVar7[1])
	{
		if (!func_62(11))
		{
			func_3(1);
			func_48(11);
		}
		if (!func_62(15))
		{
			func_48(15);
		}
	}
	else if (func_62(15))
	{
		func_2(15);
	}
	if (iVar7[2])
	{
		if (!func_62(12))
		{
			func_3(1);
			func_48(12);
		}
		if (!func_62(16))
		{
			func_48(16);
		}
	}
	else if (func_62(16))
	{
		func_2(16);
	}
	if (iVar7[3])
	{
		if (!func_62(13))
		{
			func_3(1);
			func_48(13);
		}
		if (!func_62(17))
		{
			func_48(17);
		}
	}
	else if (func_62(17))
	{
		func_2(17);
	}
	if (bVar8)
	{
		if (!func_62(18))
		{
			func_48(18);
		}
	}
	if (bVar6)
	{
		if (!func_62(0))
		{
			func_48(0);
		}
	}
	else if (func_62(0))
	{
		func_2(0);
	}
}

void func_2(bool bParam0)
{
	unk_0x8744D2E3FC95740E(&(Local_185.f_6), bParam0);
}

void func_3(int iParam0)
{
	if (func_25() || iParam0)
	{
		if (func_6())
		{
			if (!func_5(&(Local_185.f_959)))
			{
				func_4(&(Local_185.f_959), 0, 0);
			}
		}
		else
		{
			func_28(3);
		}
	}
}

void func_4(var uParam0, bool bParam1, bool bParam2)
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

bool func_5(var uParam0)
{
	return uParam0->f_1;
}

int func_6()
{
	switch (Local_185.f_1)
	{
		case 4:
			if (Global_262145.f_16705 > 0)
			{
				return 1;
			}
			break;
		
		case 0:
		case 2:
		case 3:
		case 1:
			return 1;
	}
	return 0;
}

void func_7(bool bParam0)
{
	if (BitTest(Local_185.f_21, bParam0))
	{
		unk_0x8744D2E3FC95740E(&(Local_185.f_21), bParam0);
	}
}

void func_8(bool bParam0, bool bParam1)
{
	unk_0x8744D2E3FC95740E(&(Local_185.f_134[bParam0]), bParam1);
}

void func_9(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (bParam1 != func_59())
	{
		bVar0 = bParam1;
		if (bParam0)
		{
			if (!BitTest(Local_185.f_22[bParam2], bVar0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_22[bParam2]), bVar0);
			}
		}
		else if (BitTest(Local_185.f_22[bParam2], bVar0))
		{
			unk_0x8744D2E3FC95740E(&(Local_185.f_22[bParam2]), bVar0);
		}
	}
}

void func_10(bool bParam0)
{
	Local_185.f_168[bParam0]++;
}

bool func_11(bool bParam0, bool bParam1)
{
	return BitTest(Local_185.f_22[bParam0], bParam1);
}

int func_12(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return func_29(15);
		
		case 1:
			return func_29(16);
		
		case 2:
			return func_29(17);
		
		case 3:
			return func_29(18);
		
		case 4:
			return func_29(19);
		
		case 5:
			return func_29(20);
		
		case 6:
			return func_29(21);
		
		case 7:
			return func_29(22);
		
		default:
	}
	return 0;
}

int func_13(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		if (unk_0x2FC2FDC413532977(Local_185.f_59[bParam0]))
		{
			uVar0 = unk_0xE38610F405049F71(Local_185.f_59[bParam0]);
		}
	}
	return uVar0;
}

int func_14()
{
	if ((func_18() || func_17()) || func_15())
	{
		return 1;
	}
	switch (Local_185.f_957)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			if (func_74() || func_27())
			{
				return 4;
			}
			return 3;
		
		default:
	}
	return 1;
}

bool func_15()
{
	return func_16() == 12;
}

int func_16()
{
	return Local_185.f_17;
}

bool func_17()
{
	return func_16() == 7;
}

bool func_18()
{
	return func_16() == 0;
}

bool func_19()
{
	return func_16() == 5;
}

int func_20(bool bParam0)
{
	int iVar0;
	
	iVar0 = 1;
	if (func_23())
	{
		iVar0 = ((((func_22() * func_21()) / func_24()) - Local_185.f_124[bParam0]) - Local_185.f_184[bParam0]);
	}
	else if (func_15())
	{
		iVar0 = (3 - Local_185.f_124[bParam0]);
	}
	return iVar0;
}

int func_21()
{
	switch (Local_185.f_957)
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

int func_22()
{
	switch (func_16())
	{
		case 6:
		case 8:
		case 0:
		case 10:
		case 11:
			return 1;
		
		case 3:
		case 5:
		case 1:
		case 12:
		case 2:
			return 5;
		
		case 4:
			return 4;
		
		case 9:
			return 5;
		
		default:
	}
	return 1;
}

bool func_23()
{
	return func_16() == 4;
}

int func_24()
{
	if (func_23())
	{
		if (Local_185.f_112 == 3 && (Local_185.f_957 == 0 || Local_185.f_957 == 1))
		{
			return 2;
		}
		if (Local_185.f_112 > Global_262145.f_18522)
		{
			return Global_262145.f_18522;
		}
	}
	return Local_185.f_112;
}

int func_25()
{
	switch (Local_185.f_17)
	{
		case 10:
		case 11:
		case 12:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_26(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
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

bool func_27()
{
	return func_16() == 6;
}

void func_28(bool bParam0)
{
	if (!unk_0x93E08E0F531E2C35())
	{
		return;
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_7), bParam0);
}

bool func_29(int iParam0)
{
	return BitTest(Local_185.f_7, iParam0);
}

int func_30()
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < func_14())
	{
		if (unk_0x93BF17E19A9F0E9B(Local_185.f_59[bVar0]))
		{
			if (func_36(Local_185.f_59[bVar0]))
			{
				if (!func_32(unk_0xE38610F405049F71(Local_185.f_59[bVar0]), Local_185.f_110, 350f))
				{
					if (func_31(bVar0))
					{
						return bVar0;
					}
				}
			}
		}
		bVar0++;
	}
	return -1;
}

int func_31(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return func_62(14);
		
		case 1:
			return func_62(15);
		
		case 2:
			return func_62(16);
		
		case 3:
			return func_62(17);
		
		default:
	}
	return 0;
}

int func_32(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	
	Var0 = { func_34(iParam1) };
	if (!func_33(Var0, 0f, 0f, 0f, 0))
	{
		return unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(iParam0, 1), Var0, 1) <= fParam2;
	}
	return 0;
}

bool func_33(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_34(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (!func_35(iParam0))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 1:
			Var0 = { 50.9205f, -2560.01f, 6f };
			break;
		
		case 2:
			Var0 = { -1074.852f, -1257.452f, 5.6938f };
			break;
		
		case 3:
			Var0 = { 901.936f, -1019.425f, 34.9666f };
			break;
		
		case 4:
			Var0 = { 253.9006f, -1955.933f, 22.9477f };
			break;
		
		case 5:
			Var0 = { -426.279f, 180.9043f, 80.6855f };
			break;
		
		case 6:
			Var0 = { -1050.36f, -2023.939f, 12.1616f };
			break;
		
		case 7:
			Var0 = { -1275.378f, -815.4295f, 17.1148f };
			break;
		
		case 8:
			Var0 = { -883.2906f, -2730.542f, 12.8285f };
			break;
		
		case 9:
			Var0 = { 269.6765f, -3016.279f, 5.7176f };
			break;
		
		case 10:
			Var0 = { 1561.402f, -2138.697f, 77.5275f };
			break;
		
		case 11:
			Var0 = { -303.7892f, -2698.39f, 6.0003f };
			break;
		
		case 12:
			Var0 = { 507.2061f, -649.5859f, 24.7512f };
			break;
		
		case 13:
			Var0 = { -525.8206f, -1775.87f, 21.3501f };
			break;
		
		case 14:
			Var0 = { -291.6372f, -1352.556f, 31.3146f };
			break;
		
		case 15:
			Var0 = { 348.6436f, 324.428f, 104.3185f };
			break;
		
		case 16:
			Var0 = { 922.0838f, -1561.299f, 29.7475f };
			break;
		
		case 17:
			Var0 = { 763.7448f, -885.2086f, 25.0869f };
			break;
		
		case 18:
			Var0 = { 1043.884f, -2172.603f, 30.471f };
			break;
		
		case 19:
			Var0 = { 1001.659f, -2511.88f, 28.302f };
			break;
		
		case 20:
			Var0 = { -263.138f, 194.3424f, 85.184f };
			break;
		
		case 21:
			Var0 = { 547.8112f, -1942.514f, 23.9851f };
			break;
		
		case 22:
			Var0 = { 88.9678f, -2216.882f, 6.0613f };
			break;
	}
	return Var0;
}

int func_35(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_36(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return !func_37(unk_0xE38610F405049F71(uParam0));
	}
	return 0;
}

int func_37(int iParam0)
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

void func_38(bool bParam0, bool bParam1)
{
	if ((((func_45() || func_15()) || func_23()) || func_44()) || func_43())
	{
		if (bParam1 >= 0)
		{
			Local_185.f_124[bParam1]++;
		}
	}
	Local_185.f_122++;
	if (func_15() && func_40(0))
	{
		func_39(bParam0);
	}
	else if (func_23() || func_74())
	{
		func_39(bParam0);
	}
	else
	{
		func_8(bParam1, bParam0);
	}
}

void func_39(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_8(iVar0, bParam0);
		iVar0++;
	}
}

int func_40(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (func_42(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < func_24())
		{
			bVar0 = false;
			while (bVar0 < 32)
			{
				if (BitTest(Local_185.f_145[iVar1], bVar0))
				{
					unk_0x8744D2E3FC95740E(&(Local_185.f_145[iVar1]), bVar0);
					bVar0 = 32;
				}
				bVar0++;
			}
			Local_185.f_113[iVar1] = 0;
			iVar1++;
		}
		Local_185.f_123++;
		if (!func_41())
		{
			if (func_29(25) || func_29(24))
			{
				if (Local_185.f_123 == 2)
				{
					func_48(6);
				}
				else
				{
					iVar2 = unk_0xC5935DFB3F39785A(0, 100);
					if (iVar2 > 50)
					{
						func_48(6);
					}
				}
			}
		}
		Local_185.f_680 = -1;
		return 1;
	}
	return 0;
}

bool func_41()
{
	return func_62(6);
}

int func_42(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < func_24())
	{
		if (Local_185.f_101[iVar1] != -1)
		{
			if (Local_185.f_124[iVar1] == 0)
			{
				return 0;
			}
			else
			{
				if (iVar0 == 0)
				{
					iVar0 = Local_185.f_124[iVar1];
					iVar2 = iVar1;
				}
				else
				{
					iVar2 = -1;
				}
				if (Local_185.f_124[iVar1] != iVar0)
				{
					return 0;
				}
				if (Local_185.f_124[iVar1] <= Local_185.f_123)
				{
					return 0;
				}
			}
		}
		iVar1++;
	}
	if (uParam0 && iVar2 != -1)
	{
		if (Local_185.f_124[iVar2] == Local_185.f_123)
		{
			return 0;
		}
	}
	return 1;
}

bool func_43()
{
	return func_16() == 10;
}

bool func_44()
{
	return func_16() == 11;
}

int func_45()
{
	switch (func_46())
	{
		case 1:
			if (!func_18() && !func_17())
			{
				return 1;
			}
			break;
		
		case 2:
			if (!func_18() && !func_17())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_46()
{
	return Local_185.f_957;
}

void func_47(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			if (!func_29(15))
			{
				func_28(15);
			}
			break;
		
		case 1:
			if (!func_29(16))
			{
				func_28(16);
			}
			break;
		
		case 2:
			if (!func_29(17))
			{
				func_28(17);
			}
			break;
		
		case 3:
			if (!func_29(18))
			{
				func_28(18);
			}
			break;
		
		case 4:
			if (!func_29(19))
			{
				func_28(19);
			}
			break;
		
		case 5:
			if (!func_29(20))
			{
				func_28(20);
			}
			break;
		
		case 6:
			if (!func_29(21))
			{
				func_28(21);
			}
			break;
		
		case 7:
			if (!func_29(22))
			{
				func_28(22);
			}
			break;
	}
}

void func_48(bool bParam0)
{
	if (!unk_0x93E08E0F531E2C35())
	{
		return;
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_6), bParam0);
}

int func_49(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_62(21);
		
		case 1:
			return func_62(22);
		
		case 2:
			return func_62(23);
		
		default:
	}
	return 0;
}

void func_50(bool bParam0)
{
	if (!unk_0x93E08E0F531E2C35())
	{
		return;
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_8), bParam0);
}

void func_51(var uParam0)
{
	func_52(func_55(1, 0), func_54(), uParam0);
}

void func_52(int iParam0, bool bParam1, var uParam2)
{
	struct<6> Var0;
	
	Var0.f_0 = -1592445355;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_2 = bParam1;
	Var0.f_3 = uParam2;
	func_53(&(Var0.f_4), &(Var0.f_5));
	if (!iParam0 == 0)
	{
		unk_0x01F0B819E78A18A1(1, &Var0, 6, iParam0);
	}
}

void func_53(var uParam0, var uParam1)
{
	*uParam0 = Global_1923597.f_9;
	*uParam1 = Global_1923597.f_10;
}

bool func_54()
{
	return Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_35;
}

int func_55(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = unk_0xB23E0F9B63D009A8(bVar1);
		if (func_2258(bVar2, 0, 0))
		{
			if (bVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
				else if (!func_56(bVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_56(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_57(-1, 0) == 8;
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

int func_57(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_58();
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

int func_58()
{
	return Global_1574918;
}

int func_59()
{
	return -1;
}

bool func_60(int iParam0)
{
	return BitTest(Local_185.f_8, iParam0);
}

int func_61()
{
	switch (func_16())
	{
		case 6:
		case 0:
		case 3:
		case 4:
		case 5:
		case 7:
		case 8:
		case 10:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_62(int iParam0)
{
	return BitTest(Local_185.f_6, iParam0);
}

bool func_63(int iParam0, bool bParam1)
{
	return BitTest(Local_186[iParam0 /*29*/].f_2, bParam1);
}

void func_64(bool bParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	
	switch (func_16())
	{
		case 5:
			if (func_11(bParam1, bParam0))
			{
				if (func_68(bParam0, &(Local_185.f_173)))
				{
					func_71(1);
					func_9(0, bParam0, bParam1);
					func_8(bParam1, Local_185.f_175[bParam1]);
					func_7(bParam1);
					func_10(bParam1);
				}
				else if (!func_66(bParam1))
				{
					func_9(0, bParam0, bParam1);
					func_8(bParam1, Local_185.f_175[bParam1]);
					func_7(bParam1);
				}
			}
			break;
	}
	if (func_25())
	{
		bVar1 = -1;
		if (func_2258(bParam0, 0, 1) && bParam0 != func_59())
		{
			if (unk_0xCCD470854FB0E643(bParam0))
			{
				iVar0 = unk_0x857CA6FCE5E9C84F(bParam0);
				if (unk_0x7206AEB20960CCC8(iVar0))
				{
					if (func_63(bVar0, 19))
					{
						if (func_68(bParam0, &(Local_185.f_173)) || func_63(bVar0, 21))
						{
							bVar1 = func_65(bParam0);
							if (bVar1 != -1 && !func_12(bVar1))
							{
								func_71(func_20(bVar1));
								func_8(bParam1, Local_185.f_175[bParam1]);
								Local_185.f_101[bVar1] = -1;
								if (func_15())
								{
									func_40(1);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_65(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = -1;
	iVar2 = bParam0;
	iVar0 = 0;
	while (iVar0 < func_24())
	{
		if (Local_185.f_101[iVar0] == iVar2)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_66(bool bParam0)
{
	if (unk_0xFC8BFE4B41177C22(func_67(bParam0)) && !unk_0x1C2F771CDC87A3A5(func_67(bParam0), 0))
	{
		if (unk_0xD9F5E1FEFD1329E4(func_13(bParam0), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_67(bool bParam0)
{
	var uVar0;
	
	if (unk_0x2FC2FDC413532977(Local_185.f_59[bParam0]))
	{
		uVar0 = unk_0xF5014688C9788D5F(Local_185.f_59[bParam0]);
	}
	return uVar0;
}

int func_68(bool bParam0, var uParam1)
{
	bool bVar0;
	
	bVar0 = bParam0;
	if (func_2258(bParam0, 1, 1))
	{
		if (BitTest(*uParam1, bVar0))
		{
			unk_0x8744D2E3FC95740E(uParam1, bVar0);
		}
	}
	else if (!BitTest(*uParam1, bVar0))
	{
		unk_0x0B0C9A0F9AAEB7F0(uParam1, bVar0);
		return 1;
	}
	return 0;
}

void func_69(bool bParam0, int iParam1, int iParam2)
{
	if (iParam2 || Local_186[bParam0 /*29*/].f_9[iParam1] == 2)
	{
		if (Local_185.f_970[iParam1] != 2)
		{
			Local_185.f_970[iParam1] = 2;
		}
	}
	else if (Local_186[bParam0 /*29*/].f_9[iParam1] == 1)
	{
		if (Local_185.f_970[iParam1] != 1)
		{
			Local_185.f_970[iParam1] = 1;
		}
	}
}

int func_70(bool bParam0, int iParam1)
{
	if (func_66(bParam0))
	{
		if (iParam1 == unk_0xFD5C5BBD1FE92BB7(func_13(bParam0), -1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_71(int iParam0)
{
	Local_185.f_167 = (Local_185.f_167 + iParam0);
}

int func_72()
{
	switch (func_16())
	{
		case 1:
			return func_73(-1);
		
		case 9:
			return func_22();
		
		case 8:
			return func_14();
		
		default:
	}
	return 0;
}

int func_73(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_18() || func_17())
	{
		return (func_22() - Local_185.f_167);
	}
	if (func_15())
	{
		return (func_24() * 3 - Local_185.f_167);
	}
	if (func_43() || func_44())
	{
		return (func_24() - Local_185.f_167);
	}
	switch (Local_185.f_957)
	{
		case 0:
			return (func_22() - Local_185.f_167);
		
		case 1:
			return (func_22() * 2 - Local_185.f_167);
		
		case 2:
			if (func_27() || func_74())
			{
				return (func_22() * 4 - Local_185.f_167);
			}
			if (func_25())
			{
				if (iParam0 != -1)
				{
					return (func_22() * 3 - Local_185.f_184[iParam0]);
				}
			}
			return (func_22() * 3 - Local_185.f_167);
		
		default:
	}
	return iVar0;
}

bool func_74()
{
	return func_16() == 8;
}

void func_75(var uParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_83(uParam0) || *uParam0)
	{
		bVar0 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iParam1));
		if ((func_82(bVar0, 7) && !func_82(bVar0, 6)) && func_77(bVar0, func_54(), 1))
		{
			func_76(&(uParam0->f_2), iParam1);
		}
	}
}

void func_76(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return;
		}
		if ((*uParam0)[iVar0] == -1)
		{
			(*uParam0)[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
}

bool func_77(bool bParam0, bool bParam1, bool bParam2)
{
	return func_78(bParam0, bParam1, bParam2, 1);
}

int func_78(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (bParam1 != func_59() && iParam0 != func_59())
	{
		if (!bParam2)
		{
			if (func_81(iParam0, bParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1894573[iParam0 /*608*/].f_10 != func_59())
		{
			if (bParam1 == Global_1894573[iParam0 /*608*/].f_10)
			{
				return func_79(bParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_79(bool bParam0, int iParam1)
{
	if (func_80(bParam0))
	{
		return Global_1894573[bParam0 /*608*/].f_10.f_428 == iParam1;
	}
	return 0;
}

int func_80(bool bParam0)
{
	if (bParam0 != func_59())
	{
		if (Global_1894573[bParam0 /*608*/].f_10 != func_59())
		{
			return Global_1894573[bParam0 /*608*/].f_10 == bParam0;
		}
	}
	return 0;
}

int func_81(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_59())
	{
		if (iParam0 != func_59())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 != func_59())
			{
				if (Global_1894573[iParam0 /*608*/].f_10 == iParam0)
				{
					if (Global_1894573[iParam0 /*608*/].f_10.f_428 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

bool func_82(bool bParam0, int iParam1)
{
	return BitTest(Global_1894573[bParam0 /*608*/].f_10.f_5, iParam1);
}

bool func_83(var uParam0)
{
	return uParam0->f_2[0] != -1;
}

void func_84()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_545();
	func_527();
	func_513();
	func_502();
	func_488();
	func_486();
	func_480();
	func_475();
	func_474();
	bVar0 = true;
	switch (func_473())
	{
		case 0:
			if (func_456())
			{
				if (!func_416())
				{
					bVar0 = false;
				}
				if (!func_362())
				{
					bVar0 = false;
				}
				if (!func_350())
				{
					bVar0 = false;
				}
				if (!func_324())
				{
					bVar0 = false;
				}
				if (!func_262())
				{
					bVar0 = false;
				}
				if (!func_251())
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					func_3(0);
					Local_185.f_983 = unk_0x39D1D336459711BE();
					func_250(1);
					if (func_249())
					{
						bVar1 = false;
						while (bVar1 < func_248())
						{
							unk_0x55098D9E9AD58806(func_246(bVar1));
							bVar1++;
						}
					}
					if (func_245())
					{
						bVar1 = false;
						while (bVar1 < func_244())
						{
							unk_0x55098D9E9AD58806(func_242(bVar1));
							bVar1++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (func_241() == 0)
			{
				if (!func_5(&(Local_185.f_10)))
				{
					func_4(&(Local_185.f_10), 0, 0);
				}
				else if (func_26(&(Local_185.f_10), func_239(), 0))
				{
					func_238(1);
				}
				else if (func_26(&(Local_185.f_10), 600000, 0))
				{
					if (!func_62(3))
					{
						func_48(3);
					}
				}
				bVar1 = false;
				while (bVar1 < func_14())
				{
					if (func_62(1))
					{
						if (unk_0x93BF17E19A9F0E9B(Local_185.f_59[bVar1]) && !func_66(bVar1))
						{
							if (func_74())
							{
								if (!BitTest(Local_185.f_165, bVar1))
								{
									func_71(1);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_165), bVar1);
								}
							}
							if (func_237() || func_19())
							{
								if (!BitTest(Local_185.f_165, bVar1))
								{
									func_71(((func_236(bVar1) - Local_185.f_124[bVar1]) - Local_185.f_168[bVar1]));
									unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_165), bVar1);
								}
							}
							if (!BitTest(Local_185.f_133, bVar1))
							{
								if (!func_12(bVar1))
								{
									unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_133), bVar1);
									func_234(bVar1);
								}
							}
						}
					}
					bVar1++;
				}
				if (func_25())
				{
					iVar4 = func_24();
				}
				else
				{
					iVar4 = func_14();
				}
				bVar1 = false;
				while (bVar1 < iVar4)
				{
					if (BitTest(Local_185.f_133, bVar1))
					{
						iVar2++;
					}
					if (BitTest(Local_185.f_133, bVar1) || func_12(bVar1))
					{
						iVar3++;
					}
					bVar1++;
				}
				if (iVar2 == iVar4)
				{
					if (!func_232(0))
					{
						if (func_241() != 4)
						{
							func_238(4);
						}
					}
				}
				if (func_25())
				{
					if (func_231())
					{
						if (!func_232(0))
						{
							if (func_241() != 4)
							{
								func_238(4);
							}
						}
					}
				}
				if (func_17())
				{
					if (func_241() != 6)
					{
						if (unk_0x93BF17E19A9F0E9B(Local_185.f_707[0 /*8*/]) && unk_0x1C2F771CDC87A3A5(unk_0xC35A3A4C05A4831B(Local_185.f_707[0 /*8*/]), 0))
						{
							func_238(6);
						}
					}
				}
				if (func_62(18) || iVar3 == iVar4)
				{
					if (func_241() == 0)
					{
						if (func_229())
						{
							func_238(7);
						}
						else
						{
							func_238(6);
						}
					}
				}
			}
			else
			{
				func_250(2);
			}
			func_85();
			break;
		
		case 2:
			if (func_62(0))
			{
				func_250(3);
			}
			break;
		
		case 3:
			func_621(3);
			break;
	}
}

void func_85()
{
	bool bVar0;
	struct<31> Var1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	
	if (!func_61())
	{
		return;
	}
	Var1.f_4 = 1125515264;
	Var1.f_5 = 1;
	Var1.f_6 = 1;
	Var1.f_8 = 1082130432;
	Var1.f_9 = 1176255488;
	Var1.f_10 = 1;
	Var1.f_13 = 1;
	Var1.f_15 = 2;
	Var1.f_22 = 2;
	Var1.f_25 = 1;
	Var1.f_26 = 1;
	Var1.f_29 = 1123024896;
	Var1.f_30 = 1;
	bVar0 = false;
	while (bVar0 < func_14())
	{
		if (BitTest(Local_185.f_961, bVar0))
		{
			if (unk_0xD9F5E1FEFD1329E4(func_13(bVar0), 0))
			{
				if (Local_185.f_965 == -1 || Local_185.f_965 == bVar0)
				{
					if (Local_185.f_965 == -1)
					{
						Local_185.f_965 = bVar0;
						Local_185.f_962 = { unk_0xD1A6A821F5AC81DB(func_13(bVar0), 1) };
					}
					Var1.f_0 = 10f;
					Var1.f_1 = 0;
					Var1.f_4 = 100f;
					Var1.f_5 = 0;
					Var1.f_6 = 1;
					Var1.f_12 = 1;
					Var1.f_3 = 0;
					Var2 = { 0f, 0f, 0f };
					fVar3 = 0f;
					iVar4 = unk_0x4B423FAA24E8ABF0(func_13(bVar0));
					if (func_87(Local_185.f_962, 0f, 0f, 0f, iVar4, 0, &Var2, &fVar3, &Var1))
					{
						if (func_86(func_13(bVar0)))
						{
							unk_0xB2BD5837A8D3CEDA(func_13(bVar0), Var2, 1, 0, 0, 1);
							unk_0x5C96CEA06531AB03(func_13(bVar0), fVar3);
							unk_0x1DE99C193C7EC64B(func_13(bVar0), 1084227584);
							Local_185.f_965 = -1;
							unk_0x8744D2E3FC95740E(&(Local_185.f_961), bVar0);
						}
					}
				}
			}
		}
		bVar0++;
	}
}

int func_86(int iParam0)
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

int func_87(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, float fParam5, var uParam6)
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
	if (!func_226())
	{
		return 0;
	}
	if (func_225() && !Global_2635559.f_680 == unk_0x8034325BF6D6E41F())
	{
		if (!Global_2635559.f_676 == 0)
		{
			Global_2635559.f_676 = 0;
			func_224();
			func_223();
		}
	}
	if (!unk_0x8F76B2250AC806FA() == Global_2635559.f_675)
	{
		if (!Global_2635559.f_676 == 0)
		{
			if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635559.f_679) < func_222(0))
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
			if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635559.f_679) > func_222(1))
			{
				Global_2635559.f_676 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_215(Param0))
		{
			if (func_214(&Param0, 1))
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
		func_213();
		func_224();
		if (!uParam6->f_27 || (((((((((func_212(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2793046.f_936) && !Global_2793046.f_925) && !Global_2793046.f_933) && !Global_2793046.f_937) && !Global_2793046.f_954) && !Global_2793046.f_966) && !Global_2793046.f_938) && !Global_2793046.f_988))
		{
			func_193(Param0, iParam2);
		}
		if (func_178(Param0))
		{
			func_193(Param0, iParam2);
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
				if (((uParam6->f_3 && func_172(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !func_170(Param0, *fParam5, iParam2, unk_0x259BE71D8A81D4FA(), 0))
				{
					Global_2635559.f_683 = { Param0 };
					Global_2635559.f_686 = *fParam5;
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
					func_114(&(Global_2635559.f_683), &(Global_2635559.f_686), &Var5);
				}
				func_112(Global_2635559.f_683, Global_2635559.f_686, iParam2, &(Global_2635559.f_673));
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
							if (func_111(Global_2635559.f_683, Global_2635559.f_686, iParam2, 1, 1036831949))
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
						func_109(Global_2635559.f_683, 0);
						func_108(-1);
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
				func_108(-1);
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
								if (func_107(Global_2635559.f_683, Global_2635559.f_686, iParam2, unk_0x259BE71D8A81D4FA(), 0) || func_89(Global_2635559.f_683, Global_2635559.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_109(Global_2635559.f_683, 0);
									func_108(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_109(Global_2635559.f_683, 0);
								func_108(-1);
							}
						}
					}
					else
					{
						func_108(-1);
					}
				}
				else
				{
					func_108(1);
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
			func_114(&(Global_2635559.f_683), &(Global_2635559.f_686), &Var6);
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
		*fParam5 = Global_2635559.f_686;
		func_88(1);
		return 1;
	}
	return 0;
}

void func_88(bool bParam0)
{
	Global_2635559.f_676 = 0;
	func_213();
	func_224();
	if (bParam0)
	{
		func_223();
	}
}

int func_89(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			if (func_2258(bVar1, bParam3, bParam4))
			{
				if (unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), bVar1))
				{
					if (!bParam6 || (!unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(bVar1)) && func_106(bVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) != unk_0x1864096A95E36EBA(bVar1))) || unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
						{
							if (((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && iParam8) && bParam5) && func_101(bVar1))
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
										if (func_100(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_90(func_99(bVar1), Param0, fParam1, iParam2, fVar2))
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

int func_90(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (vdist(Param0, Param1) < func_98(iParam3, 1008981770))
	{
		func_91(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
		if (unk_0x26715B0ED6702C87(Param0, Var0, Var1, fVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_91(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	Var0 = { 0f, 1f, 0f };
	func_97(&Var0, 0f, 0f, fParam1);
	Var0 = { Var0 / FtoV(vmag(Var0)) };
	func_92(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
	Var3 = { Param0 + Var0 * FtoV((Var2.f_1 + fParam6)) };
	Var3.f_2 = (Var3.f_2 - ((0.5f * unk_0x1D5CD3EAAA7422B0((Var2.f_2 - Var1.f_2))) + fParam6));
	Var4 = { Param0 - Var0 * FtoV(((Var1.f_1 * -1f) + fParam6)) };
	Var4.f_2 = (Var4.f_2 + ((0.5f * unk_0x1D5CD3EAAA7422B0((Var2.f_2 - Var1.f_2))) + fParam6));
	*uParam3 = { Var3 };
	*uParam4 = { Var4 };
	*uParam5 = unk_0x1D5CD3EAAA7422B0((Var2.f_0 - Var1.f_0));
}

void func_92(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x441B9C85D0FFA9ED(iParam0))
	{
		unk_0xC93BAF616F1C680F(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_95(iParam0);
		if (iVar0 != 0)
		{
			func_93(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_93(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_94(iParam0, &Global_1577994);
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

void func_94(int iParam0, var uParam1)
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

int func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_96(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_97(var uParam0, struct<3> Param1)
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

float func_98(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_92(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	Var2 = { Var1 - Var0 };
	fVar3 = (sqrt(((((Var2.f_0 * 0.5f) * (Var2.f_0 * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
	return fVar3;
}

Vector3 func_99(bool bParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(bParam0), 0);
}

int func_100(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6)
{
	if (func_90(Param0, Param3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_91(Param0, fParam1, iParam2, &Global_1981305, &(Global_1981305.f_3), &(Global_1981305.f_6), 1036831949);
	func_91(Param3, fParam4, iParam5, &(Global_1981305.f_7), &(Global_1981305.f_10), &(Global_1981305.f_13), 1036831949);
	if (unk_0x298E7BBD04F29848(Global_1981305, Global_1981305.f_3, Global_1981305.f_6, Global_1981305.f_7, Global_1981305.f_10, Global_1981305.f_13))
	{
		return 1;
	}
	return 0;
}

int func_101(bool bParam0)
{
	if (func_105(unk_0x259BE71D8A81D4FA(), bParam0))
	{
		return 1;
	}
	Global_2764203 = { func_104(bParam0) };
	if (unk_0xEDD63461767A518C(&Global_2764203))
	{
		return 1;
	}
	if (func_102(unk_0x259BE71D8A81D4FA(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_102(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_103(bParam0);
	if (!iVar0 == func_59())
	{
		if (iVar0 == func_103(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_103(bool bParam0)
{
	if (bParam0 != func_59())
	{
		return Global_1894573[bParam0 /*608*/].f_10;
	}
	return func_59();
}

struct<13> func_104(bool bParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(bParam0, &Var0, 13);
	return Var0;
}

int func_105(bool bParam0, bool bParam1)
{
	if (unk_0x7260716F2E4D7661())
	{
		Global_2764203 = { func_104(bParam0) };
		Global_2764216 = { func_104(bParam1) };
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

int func_106(bool bParam0)
{
	if (unk_0x870372B586EFB3EE(unk_0x56E414973C2A8C0E(bParam0)) || Global_2657589[bParam0 /*466*/].f_255)
	{
		return 1;
	}
	return 0;
}

int func_107(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam3 == iVar0 || iParam4 == 1)
		{
			bVar1 = iVar0;
			if (func_2258(bVar1, 0, 1) && func_2258(bParam3, 0, 1))
			{
				if (Global_2648605.f_261[iVar0])
				{
					if (func_90(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_90(func_99(bVar1), Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2648605.f_261[iVar0])
			{
				if (func_90(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_2258(bVar1, 0, 0))
			{
				if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(bVar1)))
				{
					if (func_90(func_99(bVar1), Param0, fParam1, iParam2, 1036831949))
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

void func_108(int iParam0)
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

void func_109(struct<3> Param0, int iParam1)
{
	struct<3> Var0;
	
	if (iParam1 == 0 && func_110(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && vmag(Param0) > 0f)
	{
		Var0 = { Global_2635559.f_2737[iParam1 /*3*/] };
		Global_2635559.f_2737[iParam1 /*3*/] = { Param0 };
		func_109(Var0, iParam1 + 1);
	}
}

int func_110(struct<3> Param0, float fParam1)
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

int func_111(struct<3> Param0, float fParam1, int iParam2, bool bParam3, float fParam4)
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
		func_224();
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_2635559.f_687[iVar3] == -1 && unk_0x93E08E0F531E2C35())
			{
				func_91(Param0, fParam1, iParam2, &Var0, &Var1, &uVar2, fParam4);
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

void func_112(struct<3> Param0, var uParam1, int iParam2, var uParam3)
{
	struct<8> Var0;
	
	*uParam3 = func_113(&Param0, &uParam1, &iParam2);
	Var0.f_0 = 1556360603;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam1;
	Var0.f_6 = iParam2;
	Var0.f_7 = *uParam3;
	unk_0x01F0B819E78A18A1(1, &Var0, 8, func_55(1, 1));
}

int func_113(var uParam0, var uParam1, var uParam2)
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

void func_114(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2635559.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_165(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_115(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_115(var uParam0, var uParam1, var uParam2)
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
		if (func_161(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_156(uParam0, 1))
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
	if (func_95(uParam2->f_34) != 0)
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
					if (!func_149(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_146(Var1))
									{
										Var1 = { func_141(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (vmag(Var1) > 0f)
										{
											if (!func_140(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_136(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_156(&Var1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_135(Var1, fVar2, uParam2->f_34, unk_0x259BE71D8A81D4FA(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_161(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (!func_134(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_172(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_172(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_89(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar22 = func_124(Var1, uParam2->f_54, &fVar23);
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
																													func_123(Var1, fVar2, iVar14);
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
																									if (func_136(Var1, uParam2))
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
							func_121(0, uParam2);
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
						func_120(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
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
						if (func_161(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_156(&Var27, bVar29))
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
				func_116(&Global_1574205, uParam0, uParam1, *uParam0);
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

void func_116(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_117(*(uParam0[iVar2 /*4*/]), 5f, unk_0x259BE71D8A81D4FA(), 0, 0))
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

int func_117(struct<3> Param0, float fParam1, bool bParam2, int iParam3, int iParam4)
{
	if (func_119(Param0, fParam1, bParam2, iParam3, 0) || func_118(Param0, bParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_118(struct<3> Param0, bool bParam1, int iParam2)
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
					if (func_90(Param0, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_2258(bVar2, 0, 1) && func_2258(bParam1, 0, 1))
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

int func_119(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4)
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
				if (func_2258(bVar1, 0, 1) && func_2258(bParam2, 0, 1))
				{
					if (unk_0x1864096A95E36EBA(bVar1) == unk_0x1864096A95E36EBA(bParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_2258(bVar1, 0, 1) && func_2258(bParam2, 0, 1))
				{
					if (Global_2648605.f_261[iVar0])
					{
						if (vdist(Global_2648605.f_131[iVar0 /*3*/], Param0) < fParam1)
						{
							return 1;
						}
					}
					else if (vdist(func_99(bVar1), Param0) < 1f)
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
				else if (func_2258(bVar1, 0, 1))
				{
					if (vdist(func_99(bVar1), Param0) < 1f)
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

void func_120(int iParam0, struct<3> Param1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
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
				*uParam3 = { func_141(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) };
				if (!func_146(*uParam3))
				{
					iVar0 = 999;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_121(int iParam0, var uParam1)
{
	if (!func_136(Global_2643122[iParam0 /*3*/], uParam1))
	{
		Global_2643122.f_162 = (Global_2643122.f_162 - 1);
		func_122(iParam0);
		if (Global_2643122.f_162 > Global_2643122.f_163)
		{
			func_121(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_121(iParam0 + 1, uParam1);
	}
}

void func_122(int iParam0)
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

void func_123(struct<3> Param0, float fParam1, int iParam2)
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
			func_123(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_124(struct<3> Param0, float fParam1, float fParam2)
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
		if (func_125(bVar3))
		{
			Var1 = { func_99(bVar3) };
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

int func_125(bool bParam0)
{
	if (func_2258(bParam0, 0, 1))
	{
		if (!func_132(bParam0))
		{
			if (unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), bParam0))
			{
				if (!unk_0x1864096A95E36EBA(bParam0) == unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))
				{
					if (func_129(unk_0x259BE71D8A81D4FA(), 1, 0))
					{
						if (!func_126(unk_0x1864096A95E36EBA(bParam0), unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()), 0, -1))
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
					if (!func_129(unk_0x259BE71D8A81D4FA(), 1, 0))
					{
						if (!func_101(bParam0))
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

int func_126(int iParam0, int iParam1, int iParam2, int iParam3)
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
							if (!func_127(iParam0, bVar0, iParam1, bVar1) || !func_127(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_127(iParam0, bVar0, iParam1, bVar1) || !func_127(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_127(iParam0, bVar0, iParam1, bVar1) || !func_127(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_127(iParam0, bVar0, iParam1, bVar1) || !func_127(iParam1, bVar1, iParam0, bVar0))
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

int func_127(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
		if (((!func_2258(iVar1, 1, 1) || func_56(iVar1, 0)) || BitTest(Global_2657589[iVar1 /*466*/].f_199, 2)) || func_128(iVar1))
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

var func_128(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

int func_129(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_130(bParam0))
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

bool func_130(int iParam0)
{
	return func_131(iParam0);
}

var func_131(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

int func_132(bool bParam0)
{
	if (func_56(bParam0, 0))
	{
		return 1;
	}
	if (func_133())
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

bool func_133()
{
	return BitTest(Global_2621446, 3);
}

int func_134(struct<3> Param0, float fParam1, int iParam2)
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
		if (func_100(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
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
		if (func_100(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_135(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	if (func_107(Param0, fParam1, iParam2, bParam3, iParam4) || func_170(Param0, fParam1, iParam2, bParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_136(struct<3> Param0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_139(Param0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_137(Param0, uParam1->f_19, uParam1->f_22, 0, 0))
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

int func_137(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4)
{
	func_138(&Param1, &Param2);
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

void func_138(var uParam0, var uParam1)
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

bool func_139(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)
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

int func_140(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	if (func_129(unk_0x259BE71D8A81D4FA(), 1, 0))
	{
		if (Global_4980736.f_39172 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_39172)
			{
				if (Global_4980736.f_39173[iVar0 /*148*/].f_7 != 0)
				{
					if (func_90(Param0, Global_4980736.f_39173[iVar0 /*148*/], Global_4980736.f_39173[iVar0 /*148*/].f_6, Global_4980736.f_39173[iVar0 /*148*/].f_7, fParam1))
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
					if (func_90(Param0, Global_4980736.f_5994[iVar0 /*492*/], Global_4980736.f_5994[iVar0 /*492*/].f_3, Global_4980736.f_5994[iVar0 /*492*/].f_15, 0.5f))
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
					if (func_90(Param0, Global_4980736.f_84919[iVar0 /*499*/], Global_4980736.f_84919[iVar0 /*499*/].f_3, Global_4980736.f_84919[iVar0 /*499*/].f_12, 0.5f))
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
					if (func_90(Param0, unk_0xD1A6A821F5AC81DB(Global_1058070.f_233[iVar0], 1), unk_0xCFC0C995455A6204(Global_1058070.f_233[iVar0]), unk_0x4B423FAA24E8ABF0(Global_1058070.f_233[iVar0]), 0.5f))
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
					if (func_90(Param0, unk_0xD1A6A821F5AC81DB(Global_1058070.f_119[iVar0], 1), unk_0xCFC0C995455A6204(Global_1058070.f_119[iVar0]), unk_0x4B423FAA24E8ABF0(Global_1058070.f_119[iVar0]), 0.5f))
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

Vector3 func_141(struct<3> Param0, var uParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12)
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
			if (!func_144(Param0, *uParam1, Param4))
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
			if (unk_0xBA16CD57E37AC32A(iParam7) && func_143(Param0))
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
					fVar10 = func_142(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_142(iParam7, 1.5f);
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
		if (!func_144(Param0, *uParam1, Param4))
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
					fVar10 = func_142(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_142(iParam7, 1.5f);
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

float func_142(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_92(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_143(struct<3> Param0)
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

int func_144(struct<3> Param0, float fParam1, struct<3> Param2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 0f, 1f, 0f };
	func_97(&Var0, 0f, 0f, fParam1);
	Var1 = { Param2 - Param0 };
	if (func_145(Var1, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_145(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_146(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_148(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2642829[iVar1])
	{
		if (func_147(Param0, &(Global_2642126[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2642829[8])
	{
		if (func_147(Param0, &(Global_2642126[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_147(struct<3> Param0, var uParam1)
{
	return unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_148(struct<2> Param0, var uParam1)
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

int func_149(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	if (func_155(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar2 = unk_0xD2AA6F822D3A55D2(0.01f, 360f);
			func_154(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 0, fVar2);
			if (func_150(Var1, &uVar0) || func_155(Var1))
			{
				Var1 = { *uParam0 };
				func_154(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 1, fVar2);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_150(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_153())
	{
		return 0;
	}
	iVar1 = func_152();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2635559.f_368[iVar0 /*12*/].f_9 == 1)
		{
			if (func_151(Param0, &(Global_2635559.f_368[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_151(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_139(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_137(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
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

int func_152()
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

bool func_153()
{
	return Global_1950108.f_528;
}

void func_154(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5)
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
			func_97(&Var0, 0f, 0f, unk_0xD2AA6F822D3A55D2(0f, 360f));
		}
		else
		{
			func_97(&Var0, 0f, 0f, fParam5);
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

int func_155(struct<3> Param0)
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

bool func_156(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2635559.f_26.f_18)
	{
		switch (Global_2635559.f_26.f_17)
		{
			case 0:
				if (func_139(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_137(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, 0, 0))
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
				*uParam0 = { func_157(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, Global_2635559.f_26.f_16, Global_2635559.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_157(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam4)
	{
		case 0:
			func_154(&Param0, Param1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_160(&Param0, Param1, Param2, fParam5, bParam6);
			break;
		
		case 2:
			func_158(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x8B777C12D64DF209(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_139(Var1, Param1, fParam3, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_137(Var1, Param1, Param2, 0, 0))
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

void func_158(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5)
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
	Var2 = { func_159(0f, 0f, 1f, Var0) };
	Var2 = { Var2 / FtoV(vmag(Var2)) };
	fVar3 = (vmag(Var1) * sin(unk_0x20A3B1C2EC4167BB(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_145(Var2, Var1) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_145(Var2, Var1) >= 0f)
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
		Var2 = { func_159(0f, 0f, 1f, Var0) };
		Var2 = { Var2 / FtoV(vmag(Var2)) };
		Var2 = { Var2 * FtoV((fParam3 * 0.5f)) };
		Var8 = { Var7 - Var2 };
		Var9 = { Var7 + Var2 };
		Var10 = { Var9 - Var8 };
		Var10.f_2 = 0f;
		Var11 = { *uParam0 - Var8 };
		Var11.f_2 = 0f;
		Var2 = { func_159(0f, 0f, 1f, Var10) };
		Var2 = { Var2 / FtoV(vmag(Var2)) };
		fVar3 = (vmag(Var11) * sin(unk_0x20A3B1C2EC4167BB(Var10.f_0, Var10.f_1, Var11.f_0, Var11.f_1)));
		if (!bParam5)
		{
			if (func_145(Var2, Var11) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_145(Var2, Var11) >= 0f)
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

Vector3 func_159(struct<3> Param0, struct<3> Param1)
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}

void func_160(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
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

int func_161(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_215(Param0))
	{
		if (func_164(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_162(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_110(*uParam1, 1056964608))
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
				func_154(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
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

int func_162(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_150(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_163(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_150(Var2, &uVar1) || func_155(Var2))
			{
				Var2 = { *uParam0 };
				func_163(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_163(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_157(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_157(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_157(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_154(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_160(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_158(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_164(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
				if (func_151(*uParam0, &(Global_2640505[iVar0 /*17*/]), 1008981770, bParam4, 0))
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
							func_163(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_164(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_163(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_165(var uParam0, var uParam1, var uParam2)
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
			if (func_161(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_156(uParam0, 1))
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
			func_168(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_167();
		}
		else
		{
			func_166();
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
							if ((uParam2->f_12 && !func_135(Var3, fVar4, uParam2->f_34, unk_0x259BE71D8A81D4FA(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_161(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (!func_134(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_172(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (func_172(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_89(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar11 = func_124(Var3, uParam2->f_54, &fVar12);
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
																		func_123(Var3, fVar4, iVar5);
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
					func_121(0, uParam2);
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

void func_166()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2635559.f_1754)
	{
		Global_2635559.f_2160[iVar0] = iVar0;
		iVar0++;
	}
}

void func_167()
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

void func_168(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2635559.f_1754)
	{
		uVar1 = func_169(Param0, fVar0, &fVar0);
		Global_2635559.f_2160[iVar2] = uVar1;
		iVar2++;
	}
}

int func_169(struct<3> Param0, float fParam1, float fParam2)
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

int func_170(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4)
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
				if (func_171(Param0, iParam2, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_100(Param0, fParam1, iParam2, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_2258(bVar2, 0, 1) && func_2258(bParam3, 0, 1))
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

int func_171(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_98(iParam1, 1008981770);
	fVar1 = func_98(iParam3, 1008981770);
	fVar2 = vdist(Param0, Param2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_172(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_177(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_173(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2635559.f_2++;
	return 1;
}

int func_173(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_2258(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (!unk_0x15CCE8886267624F())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xED977E2AE2CB16EE(func_174(unk_0x259BE71D8A81D4FA()), Param0, 1) <= (fVar2 + fParam1))
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
		if (func_2258(bVar1, 1, 1))
		{
			if (!func_56(bVar1, 0) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), bVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && bVar1 != unk_0x259BE71D8A81D4FA()))
				{
					if ((func_106(bVar1) || !bParam8) && !Global_2657589[bVar1 /*466*/].f_270)
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
								if (unk_0xED977E2AE2CB16EE(func_174(bVar1), Param0, 1) <= (fVar2 + fParam1))
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
							if (unk_0xED977E2AE2CB16EE(func_174(bVar1), Param0, 1) <= (fVar2 + fParam1))
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

Vector3 func_174(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_176() && Global_1853910[iVar0 /*862*/].f_832) && !func_175(Global_1853910[iVar0 /*862*/].f_833))
	{
		return Global_1853910[iVar0 /*862*/].f_833;
	}
	return func_99(bParam0);
}

int func_175(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_176()
{
	return Global_2683864.f_19;
}

int func_177(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x259BE71D8A81D4FA() != bVar1) || iParam6 == 0)
		{
			if (func_2258(bVar1, bParam2, bParam3))
			{
				if (iParam8 || unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), bVar1))
				{
					if (!bParam5 || (!unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(bVar1)) && func_106(bVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) != unk_0x1864096A95E36EBA(bVar1))) || unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
						{
							if (((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && uParam7) && bParam4) && func_101(bVar1))
							{
							}
							else if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(bVar1)))
							{
								if (unk_0xED977E2AE2CB16EE(func_99(bVar1), Param0, 1) < fParam1)
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

int func_178(struct<3> Param0)
{
	var uVar0;
	
	if (Global_2793046.f_936 && func_179(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_179(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*uParam1 = -1;
	iVar2 = func_192(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_180(iVar1))
			{
				if (func_192(Global_1950108.f_542[iVar0 /*3*/], 0) == iVar2)
				{
					*uParam1 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_180(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_191(iParam0);
	if (Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_293 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10;
	if (iVar1 != func_59())
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
	if (func_190(unk_0x259BE71D8A81D4FA(), 0) || (func_187(unk_0x259BE71D8A81D4FA()) && func_185(func_186(unk_0x259BE71D8A81D4FA())) == 12))
	{
		return 1;
	}
	if (func_184(unk_0x259BE71D8A81D4FA()) || (func_187(unk_0x259BE71D8A81D4FA()) && func_185(func_186(unk_0x259BE71D8A81D4FA())) == 8))
	{
		return 1;
	}
	if (func_183(unk_0x259BE71D8A81D4FA()) || (func_187(unk_0x259BE71D8A81D4FA()) && func_185(func_186(unk_0x259BE71D8A81D4FA())) == 5))
	{
		return 1;
	}
	if (func_182(unk_0x259BE71D8A81D4FA()) || (func_187(unk_0x259BE71D8A81D4FA()) && func_185(func_186(unk_0x259BE71D8A81D4FA())) == 10))
	{
		return 1;
	}
	if (func_181(unk_0x259BE71D8A81D4FA()) || (func_187(unk_0x259BE71D8A81D4FA()) && func_185(func_186(unk_0x259BE71D8A81D4FA())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_181(bool bParam0)
{
	if (bParam0 != func_59())
	{
		if (func_2258(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_185(Global_2657589[bParam0 /*466*/].f_321.f_7) == 6;
			}
		}
	}
	return 0;
}

int func_182(bool bParam0)
{
	if (bParam0 != func_59())
	{
		if (func_2258(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_185(Global_2657589[bParam0 /*466*/].f_321.f_7) == 10;
			}
		}
	}
	return 0;
}

int func_183(bool bParam0)
{
	if (bParam0 != func_59())
	{
		if (func_2258(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[bParam0 /*466*/].f_321.f_10 != func_59())
			{
				return func_185(Global_2657589[bParam0 /*466*/].f_321.f_7) == 5;
			}
		}
	}
	return 0;
}

int func_184(bool bParam0)
{
	if (bParam0 != func_59())
	{
		if (func_2258(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[bParam0 /*466*/].f_321.f_10 != func_59())
			{
				return func_185(Global_2657589[bParam0 /*466*/].f_321.f_7) == 8;
			}
		}
	}
	return 0;
}

int func_185(int iParam0)
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

int func_186(bool bParam0)
{
	if (bParam0 != func_59() && func_2258(bParam0, 1, 1))
	{
		return Global_2657589[bParam0 /*466*/].f_321.f_17;
	}
	return -1;
}

int func_187(bool bParam0)
{
	if (bParam0 != func_59() && func_2258(bParam0, 1, 1))
	{
		if (func_189(bParam0) && !func_188(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_188(bool bParam0)
{
	if (bParam0 != func_59() && func_2258(bParam0, 1, 1))
	{
		return BitTest(Global_2657589[bParam0 /*466*/].f_321, 4);
	}
	return 0;
}

int func_189(bool bParam0)
{
	if (bParam0 != func_59() && func_2258(bParam0, 1, 1))
	{
		return BitTest(Global_2657589[bParam0 /*466*/].f_321, 3);
	}
	return 0;
}

int func_190(bool bParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (bParam0 != func_59())
	{
		if (func_2258(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[bParam0 /*466*/].f_321.f_10 != func_59())
			{
				return func_185(Global_2657589[bParam0 /*466*/].f_321.f_7) == 12;
			}
		}
	}
	return 0;
}

int func_191(int iParam0)
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

int func_192(struct<3> Param0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2640505[iVar0 /*17*/].f_9 == 1 || iParam1 == 0)
		{
			if (func_151(Param0, &(Global_2640505[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_193(struct<3> Param0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar3[3];
	
	if (Global_2635559.f_45.f_319)
	{
		return;
	}
	if (!func_211())
	{
		if (iParam1 == 0)
		{
		}
		iVar1 = func_210(Param0);
		if (iVar1 > -1)
		{
			func_223();
			switch (iVar1)
			{
				case 0:
					func_209(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_209(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_209(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_209(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_209(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_209(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_209(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_209(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_209(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_209(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_209(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_209(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_209(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_209(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_209(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_209(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_209(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_209(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_209(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_209(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_209(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_209(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_209(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_209(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_209(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_209(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_209(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_209(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_209(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_209(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_209(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_209(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_209(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_209(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_209(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_209(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_209(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_209(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_209(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_209(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_209(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_209(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_209(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_209(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_209(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_209(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_209(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_209(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_209(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_209(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_209(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_209(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_209(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_207(78);
					break;
				
				case 11:
					func_207(79);
					break;
				
				case 12:
					func_207(82);
					break;
				
				case 13:
					func_207(81);
					break;
				
				case 14:
					func_207(73);
					break;
				
				case 15:
					func_209(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_209(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_209(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_209(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_207(75);
					break;
				
				case 17:
					func_207(76);
					break;
				
				case 18:
					func_207(77);
					break;
				
				case 19:
					func_209(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_209(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_209(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_209(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_207(80);
					break;
				
				case 21:
				case 25:
					func_207(87);
					break;
				
				case 22:
				case 26:
					func_207(88);
					break;
				
				case 23:
				case 27:
					func_207(89);
					break;
				
				case 24:
				case 28:
					func_207(90);
					break;
				
				case 29:
				case 30:
					if (func_206(iParam1))
					{
						func_207(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_33);
					}
					break;
				
				case 31:
					func_209(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_209(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_209(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_209(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_209(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_209(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_209(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_209(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_209(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_209(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_209(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_209(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_209(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_209(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_209(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_209(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_209(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_209(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_209(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_209(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_209(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_209(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_209(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_209(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_209(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_209(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_209(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_209(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_209(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_209(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_209(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_209(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_209(-194.254f, -2018.756f, 26.62f, 75f);
					func_209(-186.956f, -2031.369f, 26.62f, 338f);
					func_209(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_209(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_209(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_209(-233.372f, -2089.601f, 26.62f, 304f);
					func_209(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_209(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_209(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_209(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_209(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_209(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_209(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_209(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_209(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_209(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_209(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_209(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_209(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_209(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_209(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_209(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_203(Param0, &iVar2, &iVar3) || (func_179(Param0, &(iVar2[0])) && (unk_0x00C6FDED3EB75117(iParam1) || unk_0xBA16CD57E37AC32A(iParam1))))
		{
			func_223();
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
				if (!iVar3[iVar0] && func_202(iVar2[iVar0], -1))
				{
					if (func_206(iParam1))
					{
						func_207(iVar2[iVar0]);
					}
				}
				else if (iVar3[iVar0])
				{
					if (((func_201(unk_0x4A8C381C258A124D()) || func_200(unk_0x4A8C381C258A124D())) && unk_0x00C6FDED3EB75117(iParam1)) || unk_0xBA16CD57E37AC32A(iParam1))
					{
						if (func_199(iParam1))
						{
							func_198(iVar2[iVar0]);
						}
						else if (func_197(iParam1))
						{
							func_196(iVar2[iVar0]);
							func_198(iVar2[iVar0]);
						}
						else
						{
							func_196(iVar2[iVar0]);
							func_198(iVar2[iVar0]);
						}
					}
					else
					{
						func_194(iVar2[iVar0], iParam1);
					}
				}
				else
				{
					func_207(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_194(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_209(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_209(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_209(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_209(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_209(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_209(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_209(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_209(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_209(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_209(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_209(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_209(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_209(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_209(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_209(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_209(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_209(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_209(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_209(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_209(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_209(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_209(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_209(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_209(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_209(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_209(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_209(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_209(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_209(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_209(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_209(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_209(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_209(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_209(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_209(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_209(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_209(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_209(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_209(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_209(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_209(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_209(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_209(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_209(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_209(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_209(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_209(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_209(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_209(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_209(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_209(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_209(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_209(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_209(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_209(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_209(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_209(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_209(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_209(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_209(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_209(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_209(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_209(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_209(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_209(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_209(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_209(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_209(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_209(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_209(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_209(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_209(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_209(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_209(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_209(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_209(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_209(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_209(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_209(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_209(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_209(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_209(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_209(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_209(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_209(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_209(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_209(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_209(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_209(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_209(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_209(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_209(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_209(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_209(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_209(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_209(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_209(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_209(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_209(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_209(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_209(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_209(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_209(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_209(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_209(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_209(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_209(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_209(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_209(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_209(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_209(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_209(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_209(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_209(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_209(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_209(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_209(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_209(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_209(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_209(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_209(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_209(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_209(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_209(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_209(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_209(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_209(142.7427f, -2536.147f, 5f, 205.0002f);
			func_209(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_209(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_209(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_209(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_209(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_209(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_209(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_209(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_209(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_209(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_209(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_209(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_209(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_209(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_209(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_209(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_209(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_209(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_209(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_209(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_209(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_209(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_209(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_209(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_209(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_209(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_209(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_209(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_209(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_209(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_209(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_209(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_209(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		case 83:
			func_209(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_209(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_209(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_209(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_209(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_209(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_209(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_209(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_209(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_209(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_209(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_209(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_209(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_209(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_209(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_209(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_209(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_209(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_209(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_209(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_209(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_209(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_209(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_209(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_209(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_209(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_209(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_209(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_209(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_209(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_209(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_209(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_209(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_209(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_209(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_209(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_209(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_209(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_209(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_209(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_209(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_209(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_209(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_209(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_209(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_209(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_209(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_209(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_209(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_209(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_209(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_209(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_209(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_209(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_209(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_209(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_209(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_209(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_209(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_209(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_209(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_209(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_209(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_209(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_209(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_209(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_209(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_209(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_209(-1823.414f, 3092.762f, 31.843f, 330f);
			func_209(-1819.045f, 3100.435f, 31.845f, 330f);
			func_209(-1833.313f, 3075.722f, 31.838f, 330f);
			func_209(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_209(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_209(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_209(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_209(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_209(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_209(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_209(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_209(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_209(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_209(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_209(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_209(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_209(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_209(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_209(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_209(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_209(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_209(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_209(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_209(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_209(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_209(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_209(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_209(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_209(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_209(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_209(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_209(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_209(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_209(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_209(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_209(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_209(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_209(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_209(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_209(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_209(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_209(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_59 == 0)
			{
				func_209(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_209(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_209(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_209(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_209(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_209(1231.279f, 2910.881f, 43.3085f, 12f);
				func_209(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_209(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_209(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_209(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_209(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_209(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_209(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_209(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_209(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_209(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_209(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_209(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_209(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_209(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_209(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_209(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_209(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_209(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_209(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_209(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_209(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_209(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_209(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_209(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_209(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_209(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_209(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_209(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_209(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_209(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_209(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_209(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_59 == 0)
			{
				func_209(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_209(3.855f, 2672.388f, 78.437f, 319.2f);
				func_209(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_209(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_209(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_209(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_209(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_209(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_209(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_209(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_209(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_209(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_209(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_209(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_209(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_209(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_209(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_209(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_209(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_209(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_209(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_209(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_209(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_209(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_209(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_209(102.851f, 2688.009f, 51.732f, 224f);
				func_209(109.815f, 2681.012f, 51.112f, 224f);
				func_209(116.355f, 2674.26f, 50.529f, 224f);
				func_209(125.138f, 2665.98f, 49.8f, 224f);
				func_209(132.228f, 2659.865f, 49.26f, 228.4f);
				func_209(139.354f, 2653.536f, 48.737f, 228.4f);
				func_209(88.512f, 2702.995f, 53.042f, 224.199f);
				func_209(81.565f, 2710.357f, 53.67f, 224.199f);
				func_209(75.156f, 2716.981f, 54.223f, 224.199f);
				func_209(68.442f, 2723.806f, 54.775f, 226.199f);
				func_209(61.449f, 2730.606f, 55.308f, 226.199f);
				func_209(53.702f, 2738.167f, 55.855f, 226.199f);
				func_209(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_59 == 0)
			{
				func_209(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_209(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_209(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_209(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_209(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_209(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_209(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_209(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_209(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_209(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_209(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_209(2714.633f, 3918.283f, 42.938f, 16f);
				func_209(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_209(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_209(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_209(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_209(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_209(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_209(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_209(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_209(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_209(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_209(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_209(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_209(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_209(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_209(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_209(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_209(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_209(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_209(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_209(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_209(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_209(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_209(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_209(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_209(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_209(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_59 == 0)
			{
				func_209(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_209(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_209(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_209(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_209(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_209(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_209(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_209(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_209(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_209(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_209(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_209(3374.923f, 5520.177f, 20.3207f, 86f);
				func_209(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_209(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_209(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_209(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_209(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_209(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_209(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_209(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_209(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_209(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_209(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_209(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_209(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_209(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_209(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_209(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_209(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_209(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_209(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_209(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_209(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_209(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_209(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_209(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_209(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_209(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_59 == 0)
			{
				func_209(43.848f, 6845.657f, 13.379f, 247.2f);
				func_209(50.379f, 6861.146f, 15.105f, 247.2f);
				func_209(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_209(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_209(55.806f, 6875.081f, 14.824f, 247.2f);
				func_209(11.616f, 6877.079f, 11.466f, 247.2f);
				func_209(18.954f, 6891.633f, 11.37f, 247.2f);
				func_209(26.68f, 6907.587f, 11.869f, 247.2f);
				func_209(7.479f, 6907.895f, 12.024f, 247.2f);
				func_209(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_209(35.591f, 6836.608f, 13.288f, 274.4f);
				func_209(36.028f, 6830.135f, 13.801f, 270.8f);
				func_209(35.114f, 6823.884f, 14.527f, 260.8f);
				func_209(48.779f, 6838.693f, 14.337f, 273.6f);
				func_209(56.738f, 6821.8f, 15.244f, 244.8f);
				func_209(48.377f, 6825.895f, 14.656f, 249.8f);
				func_209(49.11f, 6831.439f, 13.991f, 274.8f);
				func_209(53.544f, 6818.275f, 16.342f, 243f);
				func_209(46.162f, 6821.945f, 15.483f, 249.8f);
				func_209(60.129f, 6836.8f, 15.605f, 269.6f);
				func_209(40.88f, 6802.952f, 20.113f, 242.6f);
				func_209(48.203f, 6799.134f, 20.897f, 244.4f);
				func_209(70.449f, 6809.271f, 16.846f, 243f);
				func_209(61.436f, 6814.266f, 16.71f, 244.2f);
				func_209(56.142f, 6793.458f, 19.806f, 242.6f);
				func_209(65.759f, 6791.12f, 18.433f, 276.4f);
				func_209(77.305f, 6805.391f, 18.558f, 245.6f);
				func_209(85.893f, 6800.243f, 18.535f, 249.8f);
				func_209(56.85f, 6780.582f, 18.822f, 297.999f);
				func_209(65.636f, 6784.669f, 18.789f, 293.799f);
				func_209(74.121f, 6788.498f, 18.739f, 293.799f);
				func_209(97.779f, 6796.32f, 19.02f, 276.799f);
				func_209(106.76f, 6796.983f, 18.914f, 272.599f);
				func_209(112.387f, 6802.858f, 18.994f, 210.599f);
				func_209(117.58f, 6802.644f, 18.663f, 209.399f);
				func_209(122.481f, 6802.693f, 18.468f, 209.399f);
				func_209(127.182f, 6802.686f, 18.218f, 209.399f);
				func_209(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_59 == 0)
			{
				func_209(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_209(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_209(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_209(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_209(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_209(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_209(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_209(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_209(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_209(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_209(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_209(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_209(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_209(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_209(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_209(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_209(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_209(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_209(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_209(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_209(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_209(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_209(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_209(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_209(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_209(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_209(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_209(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_209(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_209(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_209(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_209(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_209(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_209(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_209(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_209(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_209(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_209(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_59 == 0)
			{
				func_209(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_209(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_209(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_209(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_209(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_209(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_209(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_209(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_209(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_209(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_209(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_209(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_209(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_209(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_209(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_209(30.027f, 3292.351f, 38.604f, 140.199f);
				func_209(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_209(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_209(23.897f, 3283.152f, 39.381f, 145.399f);
				func_209(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_209(18.723f, 3274.025f, 40.054f, 155.799f);
				func_209(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_209(36.958f, 3298.847f, 38.001f, 127.799f);
				func_209(54.165f, 3311.582f, 36.517f, 303.799f);
				func_209(61.607f, 3317.105f, 35.916f, 306.999f);
				func_209(68.994f, 3323.129f, 35.364f, 308.199f);
				func_209(76.266f, 3329.467f, 34.805f, 311.399f);
				func_209(82.757f, 3335.915f, 34.344f, 316.598f);
				func_209(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_209(14.664f, 3263.688f, 40.931f, 160.398f);
				func_209(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_209(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_209(89.575f, 3343.311f, 33.932f, 318.398f);
				func_209(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_209(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_209(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_209(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_209(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_59 == 0)
			{
				func_209(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_209(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_209(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_209(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_209(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_209(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_209(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_209(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_209(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_209(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_209(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_209(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_209(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_209(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_209(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_209(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_209(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_209(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_209(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_209(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_209(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_209(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_209(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_209(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_209(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_209(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_209(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_209(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_209(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_209(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_209(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_209(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_209(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_209(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_209(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_209(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_209(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_209(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_59 == 0)
			{
				func_209(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_209(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_209(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_209(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_209(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_209(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_209(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_209(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_209(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_209(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_209(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_209(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_209(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_209(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_209(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_209(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_209(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_209(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_209(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_209(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_209(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_209(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_209(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_209(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_209(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_209(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_209(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_209(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_209(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_209(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_209(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_209(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_209(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_209(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_209(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_209(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_209(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_209(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_195(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			func_195(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			func_195(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			func_195(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			func_195(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			func_195(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			func_195(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			func_195(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			func_195(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			func_195(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			func_195(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			func_195(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			func_195(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			func_195(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			func_195(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			func_195(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			func_195(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			func_195(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			func_195(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			func_195(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			func_195(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			func_195(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			func_195(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			func_195(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			func_195(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			func_195(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			func_195(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			func_195(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			func_195(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			func_195(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			func_195(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			func_195(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_195(struct<3> Param0, float fParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	struct<2> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!iParam2 == 0)
	{
		func_92(iParam2, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
		fVar2 = (Var1.f_1 - Var0.f_1);
		if (bParam3)
		{
			fVar2 = (fVar2 * -1f);
		}
		fVar2 = (fVar2 * 0.5f);
		Var3 = { 0f, fVar2, 0f };
		Var4 = { unk_0xF10F2A2453AF1DFB(Param0, fParam1, Var3) };
		func_209(Var4, fParam1);
	}
	else
	{
		func_209(Param0, fParam1);
	}
}

void func_196(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_209(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_209(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_209(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_209(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_209(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_209(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_209(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_209(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_209(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_209(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_209(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_209(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_209(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_209(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_209(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_209(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_209(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_209(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_209(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_209(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_209(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_209(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_209(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_209(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_209(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_209(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_209(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_209(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_209(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_209(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_209(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_209(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_209(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_209(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_209(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_209(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_209(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_209(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_209(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_209(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_209(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_209(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_209(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_209(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_209(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_209(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_209(-1356.991f, -3242.228f, 12.945f, 330f);
			func_209(-1369.313f, -3234.758f, 12.945f, 330f);
			func_209(-1381.751f, -3227.408f, 12.945f, 330f);
			func_209(-1394.302f, -3220.021f, 12.945f, 330f);
			func_209(-1354.339f, -3223.129f, 12.945f, 330f);
			func_209(-1366.302f, -3215.809f, 12.945f, 330f);
			func_209(-1378.492f, -3208.645f, 12.945f, 330f);
			func_209(-1350.322f, -3203.405f, 12.945f, 330f);
			func_209(-1362.684f, -3196.451f, 12.945f, 330f);
			func_209(-1347.089f, -3182.69f, 12.945f, 330f);
			func_209(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_209(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_209(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_209(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_209(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_209(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_209(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_209(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_209(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_209(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_209(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_209(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_209(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_209(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_209(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_209(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_209(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_209(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_209(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_209(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_209(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_209(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_209(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_209(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_209(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_209(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_209(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_209(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_209(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_209(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_209(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_209(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_209(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_209(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_209(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_209(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_209(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_209(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_209(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_209(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_209(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_209(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_209(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_209(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_209(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_209(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_209(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_209(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_209(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_209(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_209(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_209(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_209(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_209(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_209(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_209(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_209(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_209(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_209(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_209(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_209(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_209(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_209(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_209(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_209(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_209(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_209(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_209(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_209(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_209(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_209(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_209(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_209(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_209(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_209(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_209(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_209(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_209(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_209(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_209(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_209(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_209(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_209(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_209(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_209(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_209(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_209(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_209(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_209(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_209(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_209(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_209(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_209(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_209(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_209(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_209(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_209(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_209(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_209(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_209(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_209(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_209(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_209(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_209(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_209(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_209(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_209(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_209(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_209(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_209(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_209(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_209(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_209(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_209(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_209(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_209(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_209(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_209(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_209(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_209(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_209(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_209(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_209(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_209(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_209(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_209(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_209(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_209(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_209(-2484.323f, 3249.294f, 31.828f, 151f);
			func_209(-2495.313f, 3255.746f, 31.828f, 151f);
			func_209(-2472.644f, 3242.684f, 31.828f, 151f);
			func_209(-2506.313f, 3262.27f, 31.823f, 151f);
			func_209(-2461.494f, 3235.93f, 31.828f, 151f);
			func_209(-2505.602f, 3238.049f, 31.828f, 151f);
			func_209(-2481.937f, 3224.8f, 31.828f, 151f);
			func_209(-2516.813f, 3244.266f, 31.823f, 151f);
			func_209(-2470.03f, 3217.899f, 31.828f, 151f);
			func_209(-2493.933f, 3231.308f, 31.828f, 151f);
			func_209(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_209(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_209(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_209(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_209(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_209(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_209(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_209(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_209(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_209(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_209(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_209(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_209(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_209(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_209(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_209(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_209(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_209(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_209(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_209(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_209(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_209(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_209(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_209(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_209(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_209(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_209(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_209(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_209(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_209(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_209(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_209(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_209(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_209(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_209(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_209(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_197(int iParam0)
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

void func_198(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_209(-947.712f, -3367.704f, 12.944f, 60f);
			func_209(-904.692f, -3293.072f, 12.944f, 60f);
			func_209(-863.71f, -3221.978f, 12.944f, 60f);
			func_209(-966.418f, -3162.773f, 12.944f, 60f);
			func_209(-1007.435f, -3233.93f, 12.944f, 60f);
			func_209(-1050.455f, -3308.559f, 12.944f, 60f);
			func_209(-1145.673f, -3253.456f, 12.944f, 60f);
			func_209(-1098.386f, -3181.428f, 12.944f, 60f);
			func_209(-1060.474f, -3108.903f, 12.944f, 60f);
			func_209(-1155.391f, -3053.632f, 12.944f, 60f);
			func_209(-1196.114f, -3125.146f, 12.948f, 60f);
			func_209(-1235.552f, -3201.86f, 12.944f, 60f);
			func_209(-1344.446f, -3139.177f, 12.944f, 60f);
			func_209(-1301.308f, -3064.341f, 12.944f, 60f);
			func_209(-1260.135f, -2992.912f, 12.944f, 60f);
			func_209(-1364.244f, -2932.9f, 12.98f, 60f);
			func_209(-1405.284f, -3004.108f, 12.96f, 60f);
			func_209(-1448.29f, -3078.72f, 12.95f, 60f);
			func_209(-1535.732f, -3028.318f, 12.945f, 60f);
			func_209(-1492.639f, -2953.558f, 12.945f, 60f);
			func_209(-1451.506f, -2882.2f, 12.944f, 60f);
			func_209(-1553.927f, -2823.12f, 13.002f, 60f);
			func_209(-1595.097f, -2894.571f, 12.944f, 60f);
			func_209(-1637.836f, -2968.714f, 12.945f, 60f);
			func_209(-1740.971f, -2911.484f, 12.944f, 330f);
			func_209(-1696.293f, -2833.978f, 12.944f, 330f);
			func_209(-1651.502f, -2756.273f, 12.945f, 330f);
			func_209(-1588.258f, -2647.575f, 12.944f, 330f);
			func_209(-1536.862f, -2681.378f, 12.945f, 330f);
			func_209(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_209(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_209(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_209(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_209(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_209(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_209(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_209(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_209(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_209(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_209(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_209(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_209(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_209(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_209(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_209(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_209(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_209(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_209(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_209(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_209(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_209(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_209(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_209(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_209(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_209(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_209(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_209(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_209(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_209(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_209(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_199(int iParam0)
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

int func_200(int iParam0)
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

int func_201(int iParam0)
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

int func_202(int iParam0, int iParam1)
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

int func_203(struct<2> Param0, var uParam1, var uParam2, var uParam3)
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
			if (func_180(iVar0))
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
			if (func_204(iVar0))
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

int func_204(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_205(iParam0);
	if (Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_300 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10;
	if (iVar1 != func_59())
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

int func_205(int iParam0)
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

int func_206(int iParam0)
{
	if ((unk_0x78B050AFBA6D1517(iParam0) || unk_0x9910CD0D8626AA28(iParam0)) || unk_0x3801E353091A2E42(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_207(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_209(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_209(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_209(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_209(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case 79:
			func_209(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_209(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_209(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_209(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_209(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_209(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_209(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_209(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_209(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_209(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_209(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_209(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_209(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_209(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_209(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_209(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_209(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_209(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_209(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_209(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_209(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_209(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_209(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_209(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_209(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_209(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_209(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_209(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_209(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_209(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_209(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_209(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_208())
			{
				func_209(-1608.297f, -556.875f, 33.406f, 310f);
				func_209(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_209(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_209(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_209(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_209(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_209(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_209(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_209(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_209(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_209(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_209(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_208())
			{
				func_209(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_209(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_209(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_209(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_209(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_209(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_209(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_209(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_209(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_209(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_209(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_209(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_208())
			{
				func_209(-102.737f, -597.379f, 35.053f, 160.999f);
				func_209(-97.793f, -589.568f, 35.082f, 134.799f);
				func_209(-110.357f, -619.402f, 35.055f, 160.599f);
				func_209(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_209(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_209(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_209(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_209(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_209(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_209(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_209(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_209(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_208())
			{
				func_209(-59.349f, -779.238f, 43.134f, 228.398f);
				func_209(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_209(-65.212f, -772.66f, 43.151f, 219.398f);
				func_209(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_209(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_209(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_209(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_209(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_209(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_209(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_209(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_209(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_209(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_209(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_209(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_209(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_209(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_209(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_209(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_209(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_209(-1464.5f, -927.9f, 9f, 296.7991f);
			func_209(-1466f, -926.1f, 9f, 296.7991f);
			func_209(-1467.9f, -924.7f, 9f, 296.7991f);
			func_209(-1469.7f, -923.7f, 9f, 296.7991f);
			func_209(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_209(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_209(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_209(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_209(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_209(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_209(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_209(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_209(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_209(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_209(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_209(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_209(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_209(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_209(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_209(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_209(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_209(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_209(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_209(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_209(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_209(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_209(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_209(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_209(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_209(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_209(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_209(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_209(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_209(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_209(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_209(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_209(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_209(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_209(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_209(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_209(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_209(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_209(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_209(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_209(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_209(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_209(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_209(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_209(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_209(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_209(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_209(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_209(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_209(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_209(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_209(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_209(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_209(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_209(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_209(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_209(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_209(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_209(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_209(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_209(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_209(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_209(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_209(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_209(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_209(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_209(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_209(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_209(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_209(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_209(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_209(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_209(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_209(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_209(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_209(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_209(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_209(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_209(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_209(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_209(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_209(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_209(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_209(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_208()
{
	return Global_2683864.f_17;
}

void func_209(struct<3> Param0, float fParam1)
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

int func_210(struct<3> Param0)
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
		if (func_147(Param0, &(Global_2642883[iVar0 /*7*/])))
		{
			Global_2635559.f_2907 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2635559.f_2907 = -1;
	return -1;
}

int func_211()
{
	if (BitTest(Global_4718592.f_13, 0) && !Global_2684801.f_6436)
	{
		return 0;
	}
	return 0;
}

int func_212(struct<2> Param0, var uParam1, bool bParam2, float fParam3)
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
			if (func_180(iVar0))
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

void func_213()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2635559.f_2737[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_214(var uParam0, bool bParam1)
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
		if (func_147(Var1, &(Global_2642839[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_158(&Var1, Global_2642839[iVar0 /*7*/], Global_2642839[iVar0 /*7*/].f_3, Global_2642839[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_215(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2635559.f_515 && !Global_2635559.f_516)
	{
		if (!Global_2635559.f_45.f_317)
		{
			if (!func_219(unk_0x259BE71D8A81D4FA(), 1))
			{
				return 1;
			}
			if (!func_218(Param0, 1008981770))
			{
				if (!func_164(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_164(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_217(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_216(&(Global_2635559.f_45[iVar0 /*12*/])) };
					if (!func_164(&Var1, 0, 0, 0, 1))
					{
						if (!func_164(&Param0, 0, 0, 0, 1))
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

Vector3 func_216(var uParam0)
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

int func_217(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635559.f_45[iVar0 /*12*/].f_9)
		{
			if (func_151(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_218(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635559.f_45[iVar0 /*12*/].f_9)
		{
			if (func_151(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_219(bool bParam0, bool bParam1)
{
	if (func_221() != 0)
	{
		return func_220(bParam0) != 0;
	}
	return func_129(bParam0, bParam1, 0);
}

int func_220(bool bParam0)
{
	if (func_2258(bParam0, 0, 1))
	{
		return Global_2657589[bParam0 /*466*/].f_1;
	}
	return 0;
}

int func_221()
{
	return Global_32163;
}

int func_222(bool bParam0)
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

void func_223()
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

void func_224()
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

int func_225()
{
	if (!Global_2635559.f_606 == 0 && unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635559.f_611) < func_222(0))
	{
		return 1;
	}
	return 0;
}

int func_226()
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
	if (!func_228(unk_0x259BE71D8A81D4FA()) && !func_227(0))
	{
		return 0;
	}
	return 1;
}

bool func_227(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

int func_228(bool bParam0)
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

bool func_229()
{
	return func_230() > 0;
}

int func_230()
{
	return Local_185.f_122;
}

int func_231()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_24())
	{
		if (Local_185.f_101[iVar0] != -1)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_232(bool bParam0)
{
	if (bParam0)
	{
		return func_230() >= func_233();
	}
	return func_230() >= func_73(-1);
}

int func_233()
{
	return Local_185.f_174;
}

void func_234(bool bParam0)
{
	bool bVar0;
	
	if (func_45())
	{
		bVar0 = false;
		while (bVar0 < func_235())
		{
			if (BitTest(Local_185.f_134[bParam0], bVar0))
			{
				unk_0x8744D2E3FC95740E(&(Local_185.f_134[bParam0]), bVar0);
			}
			bVar0++;
		}
	}
}

int func_235()
{
	if (func_74())
	{
		return 15;
	}
	if (func_15())
	{
		return 10;
	}
	return 20;
}

int func_236(bool bParam0)
{
	if (func_15())
	{
		return 3;
	}
	if (func_43() || func_44())
	{
		return 1;
	}
	if (func_23())
	{
		return (func_233() / func_24());
	}
	if (func_25())
	{
		return (func_73(bParam0) / func_24());
	}
	return (func_233() / func_14());
}

bool func_237()
{
	return func_16() == 3;
}

void func_238(int iParam0)
{
	if (!unk_0x93E08E0F531E2C35())
	{
		return;
	}
	Local_185.f_15 = iParam0;
}

int func_239()
{
	return func_240();
}

var func_240()
{
	switch (Local_185.f_17)
	{
		case 0:
			return Global_262145.f_18510;
		
		case 3:
			return Global_262145.f_18514;
		
		case 7:
			return Global_262145.f_18516;
		
		case 4:
			return Global_262145.f_18520;
		
		case 9:
			return Global_262145.f_18523;
		
		case 2:
			return Global_262145.f_18547;
		
		case 5:
			return Global_262145.f_18550;
		
		case 1:
			return Global_262145.f_18552;
		
		case 6:
			return Global_262145.f_18557;
		
		case 8:
			return Global_262145.f_18561;
		
		case 10:
			return Global_262145.f_18565;
		
		case 11:
			return Global_262145.f_18570;
		
		case 12:
			return Global_262145.f_18575;
		
		default:
	}
	return Global_262145.f_15567;
}

int func_241()
{
	return Local_185.f_15;
}

int func_242(bool bParam0)
{
	switch (func_16())
	{
		case 3:
			switch (Local_185.f_679)
			{
				case 0:
					switch (bParam0)
					{
						case 0:
							return joaat("g_m_m_chiboss_01");
						
						case 1:
							return joaat("g_m_m_chigoon_02");
						
						case 2:
							return joaat("g_m_m_chigoon_02");
						
						default:
					}
					break;
				
				case 1:
					switch (bParam0)
					{
						case 0:
							return joaat("g_m_m_armboss_01");
						
						case 1:
							return joaat("g_m_m_armgoon_01");
						
						case 2:
							return joaat("g_m_m_armgoon_01");
						
						default:
					}
					break;
				
				case 2:
					switch (bParam0)
					{
						case 0:
							return joaat("g_m_m_korboss_01");
						
						case 1:
							return joaat("g_m_y_korean_01");
						
						case 2:
							return joaat("g_m_y_korean_01");
						
						default:
					}
					break;
				
				case 3:
					switch (bParam0)
					{
						case 0:
							return joaat("g_m_m_mexboss_01");
						
						case 1:
							return joaat("g_f_y_vagos_01");
						
						case 2:
							return joaat("g_m_y_mexgoon_02");
						
						default:
					}
					break;
				
				case 4:
					switch (bParam0)
					{
						case 0:
							return joaat("g_m_y_salvaboss_01");
						
						case 1:
							return joaat("g_m_y_salvagoon_01");
						
						case 2:
							return joaat("g_m_y_salvagoon_01");
						
						default:
					}
					break;
				
				case 5:
					switch (bParam0)
					{
						case 0:
							return joaat("g_m_m_armboss_01");
						
						case 1:
							return joaat("g_m_m_armgoon_01");
						
						case 2:
							return joaat("g_m_m_armgoon_01");
						
						default:
					}
					break;
				
				case 6:
					switch (bParam0)
					{
						case 0:
							return joaat("g_m_m_korboss_01");
						
						case 1:
							return joaat("g_m_y_korean_01");
						
						case 2:
							return joaat("g_m_y_korean_01");
						
						default:
					}
					break;
				
				case 7:
					switch (bParam0)
					{
						case 0:
							return joaat("g_m_m_chiboss_01");
						
						case 1:
							return joaat("g_m_m_chigoon_02");
						
						case 2:
							return joaat("g_m_m_chigoon_02");
						
						default:
					}
					break;
				
				case 8:
					switch (bParam0)
					{
						case 0:
							return joaat("g_m_y_azteca_01");
						
						case 1:
							return joaat("g_m_y_azteca_01");
						
						case 2:
							return joaat("g_m_y_azteca_01");
						
						default:
					}
					break;
				
				case 9:
					switch (bParam0)
					{
						case 0:
							return joaat("g_m_m_chiboss_01");
						
						case 1:
							return joaat("g_m_m_chigoon_02");
						
						case 2:
							return joaat("g_m_m_chigoon_02");
						
						default:
					}
					break;
			}
			break;
		
		case 4:
		case 5:
			return joaat("g_m_y_strpunk_01");
		
		case 7:
			return joaat("a_m_y_hippy_01");
		
		case 6:
			switch (Local_185.f_981)
			{
				case 0:
					return joaat("g_m_y_strpunk_01");
				
				case 1:
					if (Local_185.f_679 == 2)
					{
						return joaat("a_f_y_business_04");
					}
					return joaat("a_m_y_business_03");
				
				case 2:
					if (Local_185.f_679 == 2)
					{
						return joaat("g_m_y_ballaorig_01");
					}
					return joaat("g_m_m_armboss_01");
				
				default:
			}
			break;
		
		case 1:
			if (func_243(bParam0) == -1)
			{
				return joaat("a_m_y_beach_02");
			}
			return joaat("a_m_y_busicas_01");
	}
	return joaat("g_m_y_strpunk_01");
}

int func_243(int iParam0)
{
	return -1;
}

int func_244()
{
	switch (func_16())
	{
		case 4:
			return 5;
		
		case 1:
			return func_72();
		
		case 9:
			return 5;
		
		default:
	}
	return 0;
}

int func_245()
{
	switch (func_16())
	{
		case 1:
		case 9:
			return 1;
		
		default:
	}
	return 0;
}

int func_246(bool bParam0)
{
	switch (func_16())
	{
		case 7:
			return joaat("a_m_y_hippy_01");
		
		case 4:
			switch (bParam0)
			{
				case 0:
					return joaat("a_m_m_soucent_04");
				
				case 1:
					return joaat("a_m_y_beachvesp_01");
				
				case 2:
					return joaat("a_m_y_vinewood_01");
				
				case 3:
					return joaat("a_f_y_bevhills_02");
				
				case 4:
					return joaat("a_f_y_eastsa_03");
				
				case 5:
					return joaat("a_m_m_soucent_04");
				
				case 6:
					return joaat("a_m_y_beachvesp_01");
				
				case 7:
					return joaat("a_m_y_vinewood_01");
				
				case 8:
					return joaat("a_f_y_bevhills_02");
				
				case 9:
					return joaat("a_f_y_eastsa_03");
				
				case 10:
					return joaat("a_m_m_soucent_04");
				
				case 11:
					return joaat("a_m_y_beachvesp_01");
				
				default:
			}
			break;
		
		case 12:
			return joaat("g_m_m_armgoon_01");
		
		case 0:
			return Local_185.f_884;
		
		case 6:
			if (func_247())
			{
				switch (Local_185.f_679)
				{
					case 0:
						switch (bParam0)
						{
							case 0:
								return joaat("a_m_m_hillbilly_02");
							
							case 1:
								return joaat("s_m_y_construct_01");
							
							case 2:
								return joaat("s_m_y_construct_01");
							
							case 3:
								return joaat("s_m_y_construct_01");
							
							case 4:
								return joaat("s_m_y_construct_01");
							
							case 5:
								return joaat("s_m_y_construct_01");
							
							case 6:
								return joaat("s_m_y_construct_01");
							
							case 7:
								return joaat("s_m_m_ciasec_01");
							
							case 8:
								return joaat("s_m_m_ciasec_01");
							
							default:
						}
						break;
					
					case 1:
						switch (bParam0)
						{
							case 0:
								return joaat("g_m_y_famca_01");
							
							case 1:
								return joaat("s_m_m_ciasec_01");
							
							case 2:
								return joaat("s_m_m_ciasec_01");
							
							case 3:
								return joaat("s_m_y_construct_01");
							
							case 4:
								return joaat("s_m_y_construct_01");
							
							case 5:
								return joaat("s_m_y_construct_01");
							
							case 6:
								return joaat("s_m_y_construct_01");
							
							case 7:
								return joaat("s_m_y_construct_01");
							
							case 8:
								return joaat("s_m_y_construct_01");
							
							default:
						}
						break;
					
					case 2:
						switch (bParam0)
						{
							case 0:
								return joaat("a_m_y_hippy_01");
							
							case 1:
								return joaat("s_m_m_ciasec_01");
							
							case 2:
								return joaat("s_m_m_ciasec_01");
							
							case 3:
								return joaat("a_f_y_runner_01");
							
							case 4:
								return joaat("a_f_y_runner_01");
							
							case 5:
								return joaat("a_m_y_hipster_01");
							
							case 6:
								return joaat("a_m_y_beach_03");
							
							case 7:
								return joaat("a_m_y_runner_02");
							
							case 8:
								return joaat("a_m_o_tramp_01");
							
							default:
						}
						break;
					
					case 3:
						switch (bParam0)
						{
							case 0:
								return joaat("s_m_y_robber_01");
							
							case 1:
								return joaat("s_m_m_ciasec_01");
							
							case 2:
								return joaat("s_m_m_ciasec_01");
							
							case 3:
								return joaat("a_m_y_hipster_01");
							
							case 4:
								return joaat("a_f_y_hippie_01");
							
							case 5:
								return joaat("a_m_y_hippy_01");
							
							case 6:
								return joaat("a_m_o_tramp_01");
							
							case 7:
								return joaat("a_f_y_runner_01");
							
							case 8:
								return joaat("a_m_y_runner_02");
							
							default:
						}
						break;
					
					case 4:
						switch (bParam0)
						{
							case 0:
								return joaat("a_m_m_hillbilly_02");
							
							case 1:
								return joaat("a_m_m_hillbilly_02");
							
							case 2:
								return joaat("s_m_y_construct_01");
							
							case 3:
								return joaat("a_f_y_runner_01");
							
							case 4:
								return joaat("a_f_y_business_04");
							
							case 5:
								return joaat("a_m_o_tramp_01");
							
							case 6:
								return joaat("a_m_o_tramp_01");
							
							case 7:
								return joaat("s_m_m_ciasec_01");
							
							case 8:
								return joaat("s_m_m_ciasec_01");
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (Local_185.f_679)
				{
					case 0:
						switch (bParam0)
						{
							case 0:
								return joaat("g_m_y_strpunk_01");
							
							case 1:
								return joaat("s_m_m_ciasec_01");
							
							case 2:
								return joaat("s_m_m_ciasec_01");
							
							case 3:
								return joaat("a_m_y_beach_03");
							
							case 4:
								return joaat("a_m_y_beach_03");
							
							case 5:
								return joaat("a_m_y_business_03");
							
							case 6:
								return joaat("a_m_y_business_03");
							
							case 7:
								return joaat("a_m_o_tramp_01");
							
							case 8:
								return joaat("a_f_y_runner_01");
							
							default:
						}
						break;
					
					case 1:
						switch (bParam0)
						{
							case 0:
								return joaat("a_m_y_hipster_01");
							
							case 1:
								return joaat("s_m_m_ciasec_01");
							
							case 2:
								return joaat("s_m_m_ciasec_01");
							
							case 3:
								return joaat("a_m_y_runner_02");
							
							case 4:
								return joaat("a_m_y_busicas_01");
							
							case 5:
								return joaat("a_m_y_busicas_01");
							
							case 6:
								return joaat("a_m_y_musclbeac_01");
							
							case 7:
								return joaat("a_f_y_runner_01");
							
							case 8:
								return joaat("a_m_y_runner_02");
							
							default:
						}
						break;
					
					case 2:
						switch (bParam0)
						{
							case 0:
								return joaat("g_m_y_ballaorig_01");
							
							case 1:
								return joaat("a_m_y_busicas_01");
							
							case 2:
								return joaat("a_m_y_hipster_01");
							
							case 3:
								return joaat("a_m_y_runner_02");
							
							case 4:
								return joaat("a_f_y_business_04");
							
							case 5:
								return joaat("s_m_m_ciasec_01");
							
							case 6:
								return joaat("s_m_m_ciasec_01");
							
							case 7:
								return joaat("a_m_o_tramp_01");
							
							case 8:
								return joaat("a_f_y_runner_01");
							
							default:
						}
						break;
					
					case 3:
						switch (bParam0)
						{
							case 0:
								return joaat("s_m_y_robber_01");
							
							case 1:
								return joaat("a_m_y_busicas_01");
							
							case 2:
								return joaat("a_f_y_business_04");
							
							case 3:
								return joaat("a_m_y_beach_02");
							
							case 4:
								return joaat("a_f_y_fitness_01");
							
							case 5:
								return joaat("a_m_y_hipster_01");
							
							case 6:
								return joaat("a_m_y_business_03");
							
							case 7:
								return joaat("s_m_m_ciasec_01");
							
							case 8:
								return joaat("s_m_m_ciasec_01");
							
							default:
						}
						break;
					
					case 4:
						switch (bParam0)
						{
							case 0:
								return joaat("s_m_y_robber_01");
							
							case 1:
								return joaat("a_m_y_busicas_01");
							
							case 2:
								return joaat("a_f_y_business_04");
							
							case 3:
								return joaat("a_f_y_runner_01");
							
							case 4:
								return joaat("a_m_y_runner_02");
							
							case 5:
								return joaat("a_m_y_hipster_01");
							
							case 6:
								return joaat("a_m_y_business_03");
							
							case 7:
								return joaat("s_m_m_ciasec_01");
							
							case 8:
								return joaat("s_m_m_ciasec_01");
							
							default:
						}
						break;
					}
			}
			break;
	}
	return joaat("g_m_m_armgoon_01");
}

int func_247()
{
	switch (Local_185.f_0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
			if (Local_185.f_2 == 0)
			{
				return 1;
			}
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 32:
			if (Local_185.f_2 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_248()
{
	switch (func_16())
	{
		case 12:
		case 0:
			return 4;
		
		case 6:
			return 9;
		
		case 7:
			return 1;
		
		case 4:
			switch (Local_185.f_957)
			{
				case 0:
					return func_22();
				
				case 1:
					return func_22() * 2;
				
				case 2:
					return func_22() * 3;
				
				default:
			}
			break;
	}
	return 0;
}

int func_249()
{
	switch (func_16())
	{
		case 4:
		case 7:
		case 6:
			return 1;
		
		default:
	}
	return 0;
}

void func_250(int iParam0)
{
	if (!unk_0x93E08E0F531E2C35())
	{
		return;
	}
	Local_185.f_14 = iParam0;
}

int func_251()
{
	bool bVar0;
	
	if (func_261())
	{
		bVar0 = false;
		while (bVar0 < func_14())
		{
			if (!func_252(bVar0))
			{
				return 0;
			}
			bVar0++;
		}
	}
	return 1;
}

int func_252(bool bParam0)
{
	int iVar0;
	
	if (!unk_0x93BF17E19A9F0E9B(Local_185.f_674[bParam0]))
	{
		if (func_259(func_260()))
		{
			if (unk_0x78D35ABAF71764AD(bParam0 + 1))
			{
				if (unk_0x93BF17E19A9F0E9B(Local_185.f_59[bParam0]) && func_66(bParam0))
				{
					iVar0 = unk_0xE38610F405049F71(Local_185.f_59[bParam0]);
					if (func_258(&(Local_185.f_674[bParam0]), func_260(), unk_0xD1A6A821F5AC81DB(func_13(bParam0), 1) + Vector(5f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						if (func_253(iVar0, bParam0))
						{
							unk_0xF88FC425EC7D675D(unk_0xAB3646235DE50E93(Local_185.f_674[bParam0]), 100);
							unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_185.f_674[bParam0]), 1, 0);
							unk_0x935364B4448CD584(unk_0xAB3646235DE50E93(Local_185.f_674[bParam0]), 1);
							unk_0x55098D9E9AD58806(func_260());
							unk_0xD0F1DB0E50B367AD(unk_0xAB3646235DE50E93(Local_185.f_674[bParam0]), 1, 1, 1, 1, 1, 1, 1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_253(int iParam0, bool bParam1)
{
	char* sVar0;
	
	if (!unk_0x21478251925DBFD7(unk_0xE38610F405049F71(Local_185.f_674[bParam1]), iParam0))
	{
		sVar0 = func_257();
		unk_0x4D306DD94DD6FDBA(unk_0xAB3646235DE50E93(Local_185.f_674[bParam1]), iParam0, unk_0x365DC1E8054AF31A(iParam0, sVar0), func_256(), func_254(), 1, 0, 1, 0, 2, 1, 0);
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_254()
{
	if (func_255())
	{
		return 0f, 0f, 0f;
	}
	return 0f, 0f, 90f;
}

bool func_255()
{
	return func_16() == 2;
}

Vector3 func_256()
{
	switch (func_16())
	{
		case 5:
			return 0f, -1f, -0.3f;
			break;
		
		case 7:
		case 0:
			if (Local_185.f_957 == 0)
			{
				return 0f, -1f, 0.75f;
			}
			else if (Local_185.f_957 == 1)
			{
				return 0f, -1f, 0f;
			}
			break;
		
		case 9:
			return 0f, -0.75f, 0.35f;
			break;
		
		case 2:
			return 0f, -0.05f, 0f;
			break;
	}
	return 0f, 0f, 0f;
}

char* func_257()
{
	if (func_255())
	{
		return "chassis";
	}
	return "chassis_dummy";
}

int func_258(var uParam0, int iParam1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
			unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(*uParam0), 0, 0);
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

int func_259(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xEC9DAA34BBB4658C(iParam0);
	return unk_0x6252BC0DD8A320DB(iParam0);
}

int func_260()
{
	switch (func_16())
	{
		case 5:
			return joaat("prop_box_wood01a");
		
		case 7:
		case 0:
			if (Local_185.f_957 == 0)
			{
				return joaat("prop_box_wood01a");
			}
			else if (Local_185.f_957 == 1)
			{
				return joaat("prop_box_wood04a");
			}
			break;
		
		case 2:
			return joaat("prop_cardbordbox_03a");
			break;
		
		case 9:
			return joaat("prop_cs_duffel_01");
			break;
	}
	return 0;
}

int func_261()
{
	switch (func_16())
	{
		case 7:
		case 0:
			if (Local_185.f_957 == 0 || Local_185.f_957 == 1)
			{
				return 1;
			}
			break;
		
		case 9:
		case 2:
		case 5:
			return 1;
			break;
	}
	return 0;
}

int func_262()
{
	int iVar0;
	
	if (!func_323())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < func_322())
	{
		if (func_263(iVar0))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < func_322())
	{
		if (!unk_0x93BF17E19A9F0E9B(Local_185.f_830[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_263(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x93BF17E19A9F0E9B(Local_185.f_830[iParam0]))
	{
		if (func_259(func_321()))
		{
			Var0 = { func_320() };
			Var1 = { func_319() };
			if (unk_0xADCE9BCAFCB83364(func_264(190, -1, -1, -1, -1, -1) + 1))
			{
				if (func_258(&(Local_185.f_830[iParam0]), func_321(), Var0, 1, 1, 0, 1, 0, 0, 0))
				{
					unk_0x62C438C53BB57AFD(unk_0xF5014688C9788D5F(Local_185.f_830[iParam0]), Var0, 0, 0, 1);
					unk_0xCF39804E8C88080E(unk_0xF5014688C9788D5F(Local_185.f_830[iParam0]), Var1, 2, 1);
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_264(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 159:
		case 142:
			return 1;
		
		case 167:
			return func_318(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 9;
		
		case 173:
			return 0;
		
		case 168:
			return 5;
		
		case 178:
		case 188:
			return func_316(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_310(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_298(iParam1, iParam2, iParam3, unk_0xB23E0F9B63D009A8(iParam5), iParam4);
		
		case 233:
			return func_291(iParam1, iParam2, iParam3, unk_0xB23E0F9B63D009A8(bParam5), iParam4);
		
		case 179:
			return 0;
		
		case 182:
			return 7;
		
		case 185:
			return 6;
		
		case 186:
			return 2;
		
		case 180:
			return 9;
		
		case 190:
			return 8;
		
		case 191:
			return 0;
		
		case 192:
			return func_282(iParam1, iParam2);
		
		case 193:
			return 0;
		
		case 194:
			return 0;
		
		case 199:
			return 0;
		
		case 195:
			return 9;
		
		case 201:
			return 16;
		
		case 198:
			return 12;
		
		case 205:
			return 8;
		
		case 207:
			return 0;
		
		case 208:
			return 15;
		
		case 209:
			return 0;
		
		case 210:
			return 0;
		
		case 214:
			return 9;
		
		case 215:
			return 0;
		
		case 216:
			return 16;
		
		case 217:
			return 0;
		
		case 218:
			return 0;
		
		case 219:
			return 0;
		
		case 220:
			return 30;
		
		case 221:
			return 30;
		
		case 237:
		case 250:
			return func_279(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_278(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 1;
		
		case 241:
			return 1;
		
		case 242:
			return 1;
		
		case 244:
			return 4;
		
		case 248:
			return 5;
		
		case 243:
			return func_273(iParam1, iParam2, unk_0xB23E0F9B63D009A8(bParam5), iParam4);
		
		case 158:
			return func_268(iParam1, iParam2, unk_0xB23E0F9B63D009A8(bParam5), iParam4);
		
		case 181:
			return func_265(iParam1, iParam2, unk_0xB23E0F9B63D009A8(bParam5), iParam4);
		
		default:
	}
	return 0;
}

int func_265(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_267(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_266(iParam0, iParam2));
	return iVar0;
}

int func_266(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 5;
		
		default:
	}
	return 1;
}

int func_267(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_268(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_272(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_269(iParam0, iParam2));
	return iVar0;
}

int func_269(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam0)
	{
		case 4:
		case 2:
		case 1:
		case 3:
		case 30:
		case 31:
		case 32:
		case 28:
		case 29:
		case 52:
		case 37:
			return 0;
		
		case 19:
		case 20:
			return 1;
		
		case 38:
		case 8:
		case 14:
		case 17:
		case 11:
		case 18:
		case 21:
		case 22:
		case 7:
		case 34:
		case 23:
		case 41:
		case 49:
		case 48:
		case 27:
		case 15:
		case 50:
		case 24:
		case 6:
		case 9:
		case 10:
		case 47:
		case 42:
		case 26:
		case 25:
			return 2;
		
		case 43:
			return 3;
		
		case 16:
			return 4;
		
		case 12:
		case 13:
			if (func_271(iParam1, 1))
			{
				Var0 = { func_270(iParam1) };
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 33:
			return 5;
	}
	return 1;
}

Vector3 func_270(int iParam0)
{
	return Global_1894573[iParam0 /*608*/].f_10.f_305;
}

bool func_271(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_80(bParam0))
		{
			return 0;
		}
	}
	return Global_1894573[bParam0 /*608*/].f_10 != func_59();
}

int func_272(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 24:
			return 1;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					return 11;
				
				case 31:
				case 32:
					return 9;
				
				default:
			}
			break;
		
		case 36:
			return 0;
		
		case 38:
			return 3;
		
		case 40:
			return 4;
		
		case 41:
			return 4;
		
		case 8:
			return 13;
		
		case 13:
			switch (iParam1)
			{
				case 38:
				case 39:
					return 10;
				
				case 40:
					return 11;
				
				default:
			}
			break;
		
		case 35:
			return 5;
		
		case 46:
			return 2;
		
		case 9:
			return 8;
		
		case 4:
			return 7;
		
		case 14:
			return 11;
		
		case 17:
			return 8;
		
		case 47:
			return 11;
		
		case 11:
			return 9;
		
		case 18:
			return 13;
		
		case 6:
			return 17;
		
		case 48:
			return 21;
		
		case 33:
			return 5;
		
		case 44:
			return 2;
		
		case 21:
			return 22;
		
		case 22:
			return 12;
		
		case 7:
			return 10;
		
		case 2:
			return 0;
		
		case 34:
			switch (iParam1)
			{
				case 91:
					return 16;
				
				case 92:
					return 14;
				
				default:
			}
			break;
		
		case 27:
			return 12;
		
		case 23:
			return 17;
		
		case 31:
			return 3;
		
		case 12:
			return 4;
		
		case 3:
			return 2;
		
		case 49:
			return 15;
		
		case 19:
			return 14;
		
		case 50:
			return 12;
		
		case 20:
			return 12;
		
		case 32:
			return 15;
		
		case 30:
			return 6;
		
		case 16:
			return 12;
		
		case 39:
			return 5;
		
		case 42:
			return 3;
		
		case 37:
			return 19;
		
		case 52:
			return 6;
		
		case 15:
			return 2;
		
		case 25:
			switch (iParam1)
			{
				case 69:
					return 11;
				
				case 70:
					return 12;
				
				default:
			}
			break;
	}
	return 0;
}

int func_273(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_277(iParam0, iParam1, iParam3);
	if (!func_276(iParam0))
	{
		iVar0 = (iVar0 + func_274(iParam0, iParam2));
	}
	return iVar0;
}

int func_274(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 14:
		case 5:
		case 0:
		case 3:
		case 2:
			return 0;
		
		case 6:
			if (func_275(iParam1) + 1 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_275(int iParam0)
{
	if (func_103(iParam0) == func_59())
	{
		return 0;
	}
	return Global_1894573[iParam0 /*608*/].f_10.f_19;
}

int func_276(int iParam0)
{
	return 0;
}

int func_277(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 13:
			return 3;
		
		case 5:
			switch (iParam1)
			{
				case 15:
					return 17;
				
				case 16:
					return 12;
				
				case 17:
					return 12;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
				case 36:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					return 3;
				
				default:
			}
			break;
		
		case 12:
			return 15;
		
		case 0:
			return 1;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 0;
						
						case 2:
							return 3;
						
						default:
					}
					break;
				
				case 29:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 2;
						
						case 2:
							return 0;
						
						default:
					}
					break;
				
				case 30:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 0;
						
						case 2:
							return 0;
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 10:
					return 6;
				
				default:
			}
			return 5;
		
		case 2:
			switch (iParam1)
			{
				case 6:
					return 22;
				
				case 7:
					return 23;
				
				case 8:
					return 25;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return 3;
				
				case 26:
					return 8;
				
				case 27:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 0;
		
		case 4:
			return 3;
		
		case 5:
			return 0;
		
		default:
	}
	return 0;
}

int func_279(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_281(iParam0, iParam1);
	if (func_280(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_280(int iParam0)
{
	return 1;
}

int func_281(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			return 3;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					return 3;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
					return 2;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 102:
				case 103:
				case 104:
					return 4;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 133:
				case 135:
					return 1;
				
				case 136:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			return 10;
		
		case 18:
			return 3;
		
		case 3:
			return 4;
		
		case 21:
			return 2;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 9;
				
				case 1:
					return 9;
				
				case 2:
					return 8;
				
				case 3:
					return 6;
				
				case 4:
					return 8;
				
				case 5:
					return 8;
				
				case 6:
					return 8;
				
				case 7:
					return 8;
				
				case 8:
					return 8;
				
				case 9:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_282(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_290(iParam0, iParam1);
	if (!func_289(iParam0))
	{
		iVar0 = (iVar0 + func_283(iParam0, func_287() + 1));
	}
	if (iParam0 == 14 || ((((func_289(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_283(iParam0, func_287() + 1));
	}
	if (iParam0 == 7)
	{
		iVar0 += 6;
	}
	if (iParam0 == 17)
	{
		iVar0 += 2;
	}
	return iVar0;
}

int func_283(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_286(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_285(iParam0, iParam1);
			iVar2 = func_284(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_289(iParam0))
		{
			if (iVar0 > Global_262145.f_18384)
			{
				iVar0 = Global_262145.f_18384;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_18383)
			{
				iVar0 = Global_262145.f_18383;
			}
			if (iVar0 > Global_262145.f_18382)
			{
				iVar0 = Global_262145.f_18382;
			}
		}
	}
	return iVar0;
}

int func_284(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18421;
		
		case 10:
			return Global_262145.f_18446;
		
		default:
	}
	return 1;
}

int func_285(int iParam0, int iParam1)
{
	if (func_289(iParam0))
	{
		if (iParam1 >= Global_262145.f_18385)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18422;
		
		case 10:
			return Global_262145.f_18447;
		
		default:
	}
	return 8;
}

int func_286(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_287()
{
	if (func_288() == func_59())
	{
		return 0;
	}
	return func_275(func_288());
}

bool func_288()
{
	return Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10;
}

int func_289(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 32:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			return 0;
		
		default:
	}
	return 1;
}

int func_290(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 32:
			switch (iParam1)
			{
				case 195:
					return 3;
				
				case 196:
					return 3;
				
				case 197:
					return 3;
				
				case 198:
					return 3;
				
				case 199:
					return 3;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 231:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					return 9;
				
				case 8:
					return 8;
				
				case 9:
					return 7;
				
				case 10:
					return 4;
				
				case 11:
					return 5;
				
				case 12:
					return 6;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					return 10;
				
				case 2:
					return 10;
				
				case 3:
					return 8;
				
				case 4:
					return 10;
				
				case 5:
					return 10;
				
				case 6:
					return 10;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					return 10;
				
				case 14:
					return 8;
				
				case 15:
					return 8;
				
				case 16:
					return 8;
				
				case 17:
					return 10;
				
				case 18:
					return 9;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					return 5;
				
				case 20:
					return 8;
				
				case 21:
					return 4;
				
				case 22:
					return 0;
				
				case 23:
					return 10;
				
				case 24:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					return 20;
				
				case 26:
					return 15;
				
				case 27:
					return 13;
				
				case 28:
					return 16;
				
				case 29:
					return 14;
				
				case 30:
					return 14;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					return 7;
				
				case 75:
					return 5;
				
				case 76:
					return 5;
				
				case 77:
					return 4;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 64:
					return 1;
				
				case 67:
					return 1;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					return 6;
				
				case 39:
					return 6;
				
				case 40:
					return 7;
				
				case 41:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_291(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = func_297(iParam0, iParam1, iParam2, iParam4);
	if (!func_296(iParam0))
	{
		if (iParam3 != func_59())
		{
			iVar0 = (iVar0 + func_293(iParam0, func_275(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_292(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_292(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 5:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_293(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	switch (iParam0)
	{
		case 5:
		case 7:
		case 6:
		case 4:
		case 10:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 2;
			break;
		
		case 3:
		case 2:
			iVar0 = 4;
			break;
		
		default:
			if (func_296(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_295(iParam0))
	{
		iVar0 = func_295(iParam0);
	}
	else if (iVar0 < func_294(iParam0))
	{
		iVar0 = func_294(iParam0);
	}
	return iVar0;
}

int func_294(int iParam0)
{
	return 1;
}

int func_295(int iParam0)
{
	return 4;
}

int func_296(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_297(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 5;
		
		case 3:
			iVar0 = 1;
			switch (iParam1)
			{
				case 26:
					return iVar0 + 1;
				
				case 34:
					return iVar0 + 1;
				
				default:
			}
			return iVar0;
			break;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 8:
			return 7;
		
		case 12:
			switch (iParam1)
			{
				case 125:
					return 6;
				
				default:
			}
			return 2;
			break;
		
		case 9:
			return 0;
		
		case 13:
			return 1;
		
		case 10:
			return 12;
	}
	return 0;
}

int func_298(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = func_309(iParam0, iParam1, iParam2, iParam4);
	if (!func_308(iParam0))
	{
		if (iParam3 != func_59())
		{
			iVar0 = (iVar0 + func_300(iParam0, func_275(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_299(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_299(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_300(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_307(iParam0))
	{
		iVar1 = func_306(iParam3);
		switch (iParam0)
		{
			case 21:
				iVar0 = 1;
				break;
			
			case 23:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 2;
						break;
				}
				break;
			
			case 15:
				switch (iVar1)
				{
					case 1:
						iVar0 = 3;
						break;
					
					case 2:
						iVar0 = 6;
						break;
					
					case 3:
						iVar0 = 8;
						break;
				}
				break;
			
			case 20:
			case 24:
			case 22:
			case 16:
			case 17:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
			
			case 25:
				switch (iVar1)
				{
					case 1:
						iVar0 = 2;
						break;
					
					case 2:
						iVar0 = 3;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
		}
		return iVar0;
	}
	else if (func_305(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_304(iParam2))
		{
			iVar0 = func_304(iParam2);
		}
	}
	if (iVar0 > func_302(iParam0))
	{
		iVar0 = func_302(iParam0);
	}
	else if (iVar0 < func_301(iParam0))
	{
		iVar0 = func_301(iParam0);
	}
	return iVar0;
}

int func_301(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_302(int iParam0)
{
	if (!func_307(iParam0))
	{
		if (func_308(iParam0))
		{
			if (func_303(iParam0))
			{
				return 2;
			}
			return 3;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 21:
				return 1;
			
			case 23:
				return 2;
			
			case 15:
				return 9;
			
			default:
		}
		return 3;
	}
	return 4;
}

int func_303(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_304(int iParam0)
{
	if (iParam0 == func_59() || Global_1853910[iParam0 /*862*/].f_267.f_293 == 0)
	{
		return 50;
	}
	return (50 - Global_1853910[iParam0 /*862*/].f_267.f_293.f_3);
}

int func_305(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_306(int iParam0)
{
	if (iParam0 > 25)
	{
		return 3;
	}
	else if (iParam0 > 10)
	{
		return 2;
	}
	return 1;
}

int func_307(int iParam0)
{
	switch (iParam0)
	{
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
			return 1;
		
		default:
	}
	return 0;
}

int func_308(int iParam0)
{
	if (func_307(iParam0) || func_305(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_309(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 12;
		
		case 11:
			return 1;
		
		case 5:
			return 10;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 3;
				
				case 2:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					return 17;
				
				case 35:
					return 20;
				
				case 36:
					return 22;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					return 9;
				
				case 7:
					return 0;
				
				case 8:
					return 5;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam2)
			{
				case 1:
					return 7;
				
				case 2:
					return 14;
				
				case 3:
					return 14;
				
				case 4:
					return 14;
				
				default:
			}
			break;
		
		case 8:
			return 2;
		
		case 23:
			return (2 * iParam2);
		
		case 24:
			return (2 * iParam2);
		
		case 26:
			return 2;
	}
	return 0;
}

int func_310(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_315(iParam0, iParam1, iParam2, iParam3);
	if (!func_314(iParam0))
	{
		iVar0 = (iVar0 + func_312(iParam0, func_287() + 1, -1, iParam2));
	}
	if (func_311(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 12:
		case 6:
		case 14:
		case 15:
		case 16:
		case 17:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_312(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_313(iParam0))
	{
		if (iParam2 <= Global_262145.f_21683)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_21684)
		{
			iVar0 = 2;
			if (iParam0 == 18)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 3;
			if (iParam0 == 18)
			{
				iVar0 = 2;
			}
			else if (iParam0 == 19 || iParam0 == 2)
			{
				iVar0 = 4;
			}
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 < 4)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (iParam0 == 0 || iParam0 == 20)
	{
		iVar0 = 1;
	}
	else if (func_314(iParam0))
	{
		if (iParam1 < Global_262145.f_21643)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_313(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_314(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_315(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 6;
				
				case 2:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					return 0;
				
				case 4:
					return 0;
				
				case 5:
					return 0;
				
				case 6:
					return 0;
				
				case 7:
					return 0;
				
				case 8:
					return 0;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					return 0;
				
				case 10:
					return 0;
				
				case 11:
					return 0;
				
				case 12:
					return 0;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					return 10;
				
				case 15:
					return 12;
				
				case 13:
					return 2;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 16:
					return 0;
				
				case 17:
					return 0;
				
				case 18:
					return 0;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					return 15;
				
				case 20:
					return 15;
				
				case 21:
					return 11;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					return 10;
				
				case 23:
					return 7;
				
				case 24:
					return 6;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return (6 + iParam2 * 2);
				
				case 26:
					return (7 + iParam2 * 2);
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 9;
				
				case 28:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					return 6;
				
				case 30:
					return 6;
				
				case 31:
					return 6;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					return 8;
				
				case 33:
					return 8;
				
				case 34:
					return 8;
				
				default:
			}
			break;
		
		case 12:
			return 0;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					return 18;
				
				case 36:
					return 9;
				
				case 37:
					return 0;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam3)
			{
				case 0:
					return 9;
				
				case 1:
					return 16;
				
				case 2:
					return 6;
				
				case 3:
					return 3;
				
				case 4:
					return 9;
				
				case 5:
					return 6;
				
				case 6:
					return 6;
				
				case 7:
					return 3;
				
				case 8:
					return 3;
				
				case 9:
					return 3;
				
				case 10:
					return 0;
				
				case 11:
					return 9;
				
				case 12:
					return 3;
				
				default:
			}
			break;
		
		case 15:
			return iParam2;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 13;
	}
	return 0;
}

int func_316(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_317(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_317(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
			switch (iParam1)
			{
				case 18:
					return 9;
				
				case 19:
					return 7;
				
				case 20:
					return 8;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 1;
				
				case 28:
					return 1;
				
				case 29:
					return 1;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					return 2;
				
				case 22:
					return 2;
				
				case 23:
					return 2;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					return 8;
				
				case 37:
					return 7;
				
				case 38:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					return 8;
				
				case 40:
					return 6;
				
				case 41:
					return 2;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					return 5;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					return 1;
				
				case 43:
					return 1;
				
				case 44:
					return 1;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					return 12;
				
				case 46:
					return 12;
				
				case 47:
					return 12;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					return 7;
				
				case 49:
					return 7;
				
				case 50:
					return 7;
				
				default:
			}
			break;
		
		case 12:
			return 3;
	}
	return 0;
}

int func_318(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 3;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 1;
		
		case 17:
			return 3;
		
		case 19:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 1;
}

Vector3 func_319()
{
	switch (func_16())
	{
		case 11:
			if (func_247())
			{
				switch (Local_185.f_679)
				{
					case 0:
						return 0f, 0f, -74.2005f;
					
					case 1:
						return 0f, 0f, 35.4f;
					
					case 2:
						return 0f, 0f, -124.4004f;
					
					case 3:
						return 0f, 0f, 0f;
					
					case 4:
						return 0f, 0f, -120.0002f;
					
					case 5:
						return -4.023f, -0.652f, 62.577f;
					
					case 6:
						return -1.792f, -5.5507f, 178.5623f;
					
					case 7:
						return 0f, 0f, 160.1995f;
					
					case 9:
						return 5.4894f, 3.5551f, 15.6291f;
					
					default:
				}
			}
			else
			{
				switch (Local_185.f_679)
				{
					case 1:
						return 0f, 0f, 123.1998f;
					
					case 2:
						return 0f, 0f, 83.3999f;
					
					case 4:
						return 3.7412f, 4.9362f, 80.6382f;
					
					case 5:
						return 0f, 0f, -57.6019f;
					
					case 6:
						return 0f, 0f, 143.9997f;
					
					case 7:
						return -1.2379f, 3.8753f, -50.5581f;
					
					case 8:
						return 0f, 0f, 162.9996f;
					
					case 9:
						return -3.2998f, 2.0099f, -74.1426f;
					}
				
				default:
			}
			break;
	}
	return 0f, 0f, 134.7998f;
}

Vector3 func_320()
{
	switch (func_16())
	{
		case 11:
			if (func_247())
			{
				switch (Local_185.f_679)
				{
					case 0:
						return 2569.899f, 1817.359f, 23.8469f;
					
					case 1:
						return -1612.944f, 3177.102f, 29.717f;
					
					case 2:
						return 2833.95f, 1629.805f, 24.0762f;
					
					case 3:
						return 3776.898f, 4493.028f, 6.0035f;
					
					case 4:
						return 1529.463f, 816.2299f, 76.9559f;
					
					case 5:
						return -2998.659f, 3454.522f, 8.975f;
					
					case 6:
						return -1632.468f, 4725.352f, 52.4276f;
					
					case 7:
						return -1916.561f, 2028.237f, 140.2642f;
					
					case 9:
						return 3340.603f, 5495.48f, 19.5593f;
					
					default:
				}
			}
			else
			{
				switch (Local_185.f_679)
				{
					case 1:
						return -1549.411f, 857.0125f, 181.3712f;
					
					case 2:
						return -3149.034f, 1174.239f, 20.0117f;
					
					case 4:
						return -1541.226f, 1384.407f, 124.7998f;
					
					case 5:
						return 1332.413f, 1259.214f, 105.2253f;
					
					case 6:
						return -511.8456f, 1182.682f, 324.4567f;
					
					case 7:
						return 2745.496f, -695.4677f, 10.1195f;
					
					case 8:
						return 752.2509f, 1191.383f, 326.1712f;
					
					case 9:
						return 1526.12f, 1598.589f, 110.9273f;
					}
				
				default:
			}
			break;
	}
	return -320.6169f, 6306.344f, 31.4942f;
}

int func_321()
{
	switch (func_16())
	{
		case 11:
			return joaat("prop_makeup_trail_01_cr");
		
		default:
	}
	return joaat("prop_conc_blocks01a");
}

int func_322()
{
	switch (func_16())
	{
		case 11:
			if (func_247())
			{
				if (Local_185.f_679 == 9)
				{
					return 0;
				}
			}
			else if (Local_185.f_679 == 0 || Local_185.f_679 == 3)
			{
				return 0;
			}
			return 1;
		
		default:
	}
	return 0;
}

int func_323()
{
	switch (func_16())
	{
		case 11:
			if (func_247())
			{
				if (Local_185.f_679 == 9)
				{
					return 0;
				}
			}
			else if (Local_185.f_679 == 0 || Local_185.f_679 == 3)
			{
				return 0;
			}
			return 1;
		
		default:
	}
	return 0;
}

int func_324()
{
	bool bVar0;
	int iVar1;
	
	if (!func_349())
	{
		return 1;
	}
	if (!func_249())
	{
		return 1;
	}
	iVar1 = 1;
	bVar0 = false;
	while (bVar0 < func_248())
	{
		if (!func_325(bVar0, 1))
		{
			iVar1 = 0;
		}
		bVar0++;
	}
	return iVar1;
}

int func_325(bool bParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	
	if (func_259(func_246(bParam0)))
	{
		if (!func_348(bParam0))
		{
			if (func_347(bParam0))
			{
				uVar2 = func_346(bParam0);
				uVar3 = func_345(bParam0);
				if (unk_0x93BF17E19A9F0E9B(uVar2))
				{
					if (unk_0xEADBDBE0422CF7E6(uVar2) || (!unk_0xB0AB1F334666E337(uVar2) && unk_0x93E08E0F531E2C35()))
					{
						if (func_344(uVar2))
						{
							if (func_343(&(Local_185.f_707[bParam0 /*8*/]), uVar2, 26, func_246(bParam0), uVar3, 1, 1, 1))
							{
								iVar1 = unk_0xC35A3A4C05A4831B(Local_185.f_707[bParam0 /*8*/]);
								unk_0x8744D2E3FC95740E(&(Local_185.f_885), bParam0);
								Local_185.f_707[bParam0 /*8*/].f_1 = { 0f, 0f, 0f };
								Local_185.f_707[bParam0 /*8*/].f_4 = 0f;
								func_342(&(Local_185.f_707[bParam0 /*8*/].f_6));
								Local_185.f_980++;
								if (func_27())
								{
									sVar0 = func_341(bParam0);
									if (!unk_0xD6F9DEE4765092A9(sVar0))
									{
										unk_0x21B9EFA4B4AA3A5B(iVar1, sVar0, 0, 0);
									}
									func_340(iVar1);
								}
								else if (func_15())
								{
									func_339(iVar1, 75);
									func_338(bParam0, 9);
								}
								if (func_17())
								{
									func_337(iVar1, 75);
									unk_0x0428AFDCAA63B06E(iVar1, 398, 1);
									unk_0xDBD50CFC0081C308(iVar1, 1);
									unk_0x3F58BFCF656F0DF1(iVar1, 0);
									unk_0x397CF4F4C8B17365(iVar1, "A_M_Y_Hippy_01_white_FULL_01");
									unk_0x3B3AC5F69E21EAB7(iVar1, 1, 0);
								}
							}
						}
					}
				}
			}
			else if (bParam1)
			{
				Var4 = { func_336(bParam0) };
				if (func_334(&(Local_185.f_707[bParam0 /*8*/]), 26, func_246(bParam0), Var4, func_335(bParam0), 1, 1, 1))
				{
					iVar1 = unk_0xC35A3A4C05A4831B(Local_185.f_707[bParam0 /*8*/]);
					unk_0x8744D2E3FC95740E(&(Local_185.f_885), bParam0);
					Local_185.f_707[bParam0 /*8*/].f_1 = { 0f, 0f, 0f };
					Local_185.f_707[bParam0 /*8*/].f_4 = 0f;
					func_342(&(Local_185.f_707[bParam0 /*8*/].f_6));
					if (func_23() || func_17())
					{
						func_337(iVar1, 75);
						unk_0x3B3AC5F69E21EAB7(iVar1, 1, 0);
					}
					else
					{
						func_330(iVar1, 75);
					}
					if (func_27())
					{
						sVar0 = func_341(bParam0);
						if (!unk_0xD6F9DEE4765092A9(sVar0))
						{
							unk_0x21B9EFA4B4AA3A5B(iVar1, sVar0, 0, 0);
						}
						func_340(iVar1);
						unk_0xD0764B65C2DFEDCA(iVar1, 1);
						unk_0xBB4D4E549F8E6E8C(iVar1, Var4, 100f, 0, 0);
					}
					if (func_23())
					{
						unk_0x3F58BFCF656F0DF1(iVar1, 0);
						func_326(iVar1, func_328(0), 0);
					}
					Local_185.f_980++;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_326(int iParam0, char* sParam1, int iParam2)
{
	if (!func_327(iParam0) || iParam2)
	{
		unk_0x21B9EFA4B4AA3A5B(iParam0, uParam1, 0, 0);
	}
}

int func_327(int iParam0)
{
	if (unk_0x9B5C1660CCDF7189(uParam0, joaat("script_task_start_scenario_in_place")) == 1 || unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_start_scenario_in_place")) == 0)
	{
		return 1;
	}
	return 0;
}

char* func_328(bool bParam0)
{
	char* sVar0;
	
	if (bParam0)
	{
		sVar0 = "WORLD_HUMAN_CHEERING";
	}
	else
	{
		Local_135.f_479 = unk_0xC5935DFB3F39785A(0, 10000);
		if (func_329(Local_135.f_479, 8000, 10000))
		{
			sVar0 = "WORLD_HUMAN_SMOKING";
		}
		else if (func_329(Local_135.f_479, 6000, 8000))
		{
			sVar0 = "WORLD_HUMAN_SMOKING_POT";
		}
		else if (func_329(Local_135.f_479, 4000, 6000))
		{
			sVar0 = "WORLD_HUMAN_DRINKING";
		}
		else if (func_329(Local_135.f_479, 2000, 4000))
		{
			sVar0 = "WORLD_HUMAN_STAND_MOBILE";
		}
		else
		{
			sVar0 = "WORLD_HUMAN_TOURIST_MAP";
		}
	}
	return sVar0;
}

int func_329(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 >= iParam1 && iParam0 < iParam2)
	{
		return 1;
	}
	return 0;
}

void func_330(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	unk_0xAAA71DD7E9059338(iParam0, 1);
	unk_0x9E6CC93E007219AC(iParam0, 1);
	uVar0 = func_333();
	unk_0xB41DEC3AAC1AA107(iParam0, uVar0, 9999999, 0, 1);
	iVar1 = 3;
	unk_0xD0764B65C2DFEDCA(iParam0, iVar1);
	unk_0x0428AFDCAA63B06E(iParam0, 42, 0);
	unk_0xCAF62AAD9CA7C260(iParam0, 0);
	unk_0xBE8796DB2B90A437(iParam0, 43, 1);
	unk_0x570AAA413775DFFB(iParam0, 1);
	unk_0x0428AFDCAA63B06E(iParam0, 146, 1);
	unk_0xC652B7E19CE29859(iParam0, iParam1);
	func_331(iParam0);
	unk_0x44FB298D6382876D(iParam0, 1);
	unk_0x3CEA1FD137ACE2D9(iParam0, Global_1837211);
}

void func_331(int iParam0)
{
	float fVar0;
	int iVar1;
	
	fVar0 = 1f;
	if (func_332() == 1)
	{
		unk_0xBE8796DB2B90A437(iParam0, 24, 0);
		unk_0x139711196A42A037(iParam0, 0);
		unk_0x39256A89E9D7464A(iParam0, Global_262145.f_18499);
		unk_0xC652B7E19CE29859(iParam0, Global_262145.f_18493);
		fVar0 = Global_262145.f_18496;
	}
	else if (func_332() == 2)
	{
		unk_0xBE8796DB2B90A437(iParam0, 24, 0);
		unk_0x39256A89E9D7464A(iParam0, Global_262145.f_18500);
		unk_0xC652B7E19CE29859(iParam0, Global_262145.f_18494);
		fVar0 = Global_262145.f_18497;
	}
	else if (func_332() == 3)
	{
		unk_0xBE8796DB2B90A437(iParam0, 24, 0);
		unk_0x39256A89E9D7464A(iParam0, Global_262145.f_18501);
		unk_0xC652B7E19CE29859(iParam0, Global_262145.f_18495);
		fVar0 = Global_262145.f_18498;
	}
	iVar1 = round((100f + (100f * fVar0)));
	if (unk_0x8D91ADE44AC79BC9(iParam0) > iVar1)
	{
		unk_0xF0259D91B002AE9F(iParam0, iVar1);
		unk_0xD25E9BDC14A0B649(iParam0, iVar1, 0);
	}
}

int func_332()
{
	return Local_185.f_16;
}

int func_333()
{
	return joaat("weapon_pistol");
}

int func_334(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, bool bParam5, int iParam6, int iParam7)
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

float func_335(bool bParam0)
{
	switch (func_16())
	{
		case 4:
			if (func_247())
			{
				switch (bParam0)
				{
					case 0:
						return 351.3999f;
					
					case 1:
						return 237.7996f;
					
					case 2:
						return 297.5995f;
					
					case 3:
						return 160.1991f;
					
					case 4:
						return 0f;
					
					case 5:
						return 133.1999f;
					
					case 6:
						return 183.9992f;
					
					case 7:
						return 178.7996f;
					
					case 8:
						return 342.7993f;
					
					case 9:
						return 236.1996f;
					
					case 10:
						return 151.7995f;
					
					case 11:
						return 327.7988f;
					
					case 12:
						return 179.3996f;
					
					case 13:
						return 37.2f;
					
					case 14:
						return 61.5995f;
					
					case 15:
						return 288.3993f;
					
					case 16:
						return 47.3989f;
					
					case 17:
						return 301.3981f;
					
					case 18:
						return 7.5978f;
					
					case 19:
						return 257.1972f;
					
					default:
				}
			}
			else
			{
				switch (bParam0)
				{
					case 0:
						return 142.5997f;
					
					case 1:
						return 273.9993f;
					
					case 2:
						return 90.1998f;
					
					case 3:
						return 153.1995f;
					
					case 4:
						return 219.9995f;
					
					case 5:
						return 206.7996f;
					
					case 6:
						return 151.7992f;
					
					case 7:
						return 310.7996f;
					
					case 8:
						return 291.1991f;
					
					case 9:
						return 354.3999f;
					
					case 10:
						return 0f;
					
					case 11:
						return 46.3999f;
					
					case 12:
						return 295.9995f;
					
					case 13:
						return 200.1998f;
					
					case 14:
						return 245.3996f;
					
					case 15:
						return 37.7992f;
					
					case 16:
						return 127.1989f;
					
					case 17:
						return 203.1994f;
					
					case 18:
						return 250.3991f;
					
					case 19:
						return 333.9992f;
					}
				
				default:
			}
			break;
		
		case 6:
			if (func_247())
			{
				switch (Local_185.f_679)
				{
					case 0:
						switch (bParam0)
						{
							case 0:
								return 284.1993f;
							
							case 1:
								return 258.1984f;
							
							case 2:
								return 258.1984f;
							
							case 3:
								return 10.5978f;
							
							case 4:
								return 135.9974f;
							
							case 5:
								return 140.3968f;
							
							case 6:
								return 242.7967f;
							
							case 7:
								return 0.1999f;
							
							case 8:
								return 215.3995f;
							
							default:
						}
						break;
					
					case 1:
						switch (bParam0)
						{
							case 0:
								return 50.5989f;
							
							case 1:
								return 46.2f;
							
							case 2:
								return 46.2f;
							
							case 3:
								return 136.5992f;
							
							case 4:
								return 148.9982f;
							
							case 5:
								return 280.3973f;
							
							case 6:
								return 210.9966f;
							
							case 7:
								return 231.7995f;
							
							case 8:
								return 225.5995f;
							
							default:
						}
						break;
					
					case 2:
						switch (bParam0)
						{
							case 0:
								return 143.7997f;
							
							case 1:
								return 63.9969f;
							
							case 2:
								return 164.3986f;
							
							case 3:
								return 89.5979f;
							
							case 4:
								return 254.3969f;
							
							case 5:
								return 0f;
							
							case 6:
								return 0f;
							
							case 7:
								return 194.9993f;
							
							case 8:
								return 57.199f;
							
							default:
						}
						break;
					
					case 3:
						switch (bParam0)
						{
							case 0:
								return 151.7966f;
							
							case 1:
								return 170.7957f;
							
							case 2:
								return 115.5955f;
							
							case 3:
								return 301.3933f;
							
							case 4:
								return 195.9928f;
							
							case 5:
								return 309.1923f;
							
							case 6:
								return 236.7919f;
							
							case 7:
								return 127.391f;
							
							case 8:
								return 72.1909f;
							
							default:
						}
						break;
					
					case 4:
						switch (bParam0)
						{
							case 0:
								return 341.5992f;
							
							case 1:
								return 54.1994f;
							
							case 2:
								return 236.7991f;
							
							case 3:
								return 57.7988f;
							
							case 4:
								return 177.7986f;
							
							case 5:
								return 105.1981f;
							
							case 6:
								return 343.5978f;
							
							case 7:
								return 343.5978f;
							
							case 8:
								return 343.5978f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (Local_185.f_679)
				{
					case 0:
						switch (bParam0)
						{
							case 0:
								return 167.9995f;
							
							case 1:
								return 130.1985f;
							
							case 2:
								return 310.5978f;
							
							case 3:
								return 154.5973f;
							
							case 4:
								return 31.397f;
							
							case 5:
								return 217.9965f;
							
							case 6:
								return 352.5964f;
							
							case 7:
								return 352.5964f;
							
							case 8:
								return 352.5964f;
							
							default:
						}
						break;
					
					case 1:
						switch (bParam0)
						{
							case 0:
								return 316.5994f;
							
							case 1:
								return 69.7991f;
							
							case 2:
								return 69.7991f;
							
							case 3:
								return 76.1979f;
							
							case 4:
								return 272.1978f;
							
							case 5:
								return 190.9975f;
							
							case 6:
								return 186.7976f;
							
							case 7:
								return 275.997f;
							
							case 8:
								return 235.9969f;
							
							default:
						}
						break;
					
					case 2:
						switch (bParam0)
						{
							case 0:
								return 278.9996f;
							
							case 1:
								return 237.3995f;
							
							case 2:
								return 237.3995f;
							
							case 3:
								return 323.3992f;
							
							case 4:
								return 285.399f;
							
							case 5:
								return 215.7987f;
							
							case 6:
								return 306.3984f;
							
							case 7:
								return 336.9982f;
							
							case 8:
								return 78.9976f;
							
							default:
						}
						break;
					
					case 3:
						switch (bParam0)
						{
							case 0:
								return 126.9996f;
							
							case 1:
								return 303.3995f;
							
							case 2:
								return 303.3995f;
							
							case 3:
								return 54.5988f;
							
							case 4:
								return 227.7984f;
							
							case 5:
								return 157.5983f;
							
							case 6:
								return 137.7982f;
							
							case 7:
								return 77.998f;
							
							case 8:
								return 239.9978f;
							
							default:
						}
						break;
					
					case 4:
						switch (bParam0)
						{
							case 0:
								return 154.1996f;
							
							case 1:
								return 55.3991f;
							
							case 2:
								return 55.3991f;
							
							case 3:
								return 343.3988f;
							
							case 4:
								return 166.3979f;
							
							case 5:
								return 227.3975f;
							
							case 6:
								return 66.9971f;
							
							case 7:
								return 0f;
							
							case 8:
								return 0f;
							
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f;
}

Vector3 func_336(bool bParam0)
{
	switch (func_16())
	{
		case 4:
			if (func_247())
			{
				switch (bParam0)
				{
					case 0:
						return 2854.207f, 4557.837f, 46.1526f;
					
					case 1:
						return 3313.405f, 5175.109f, 18.6105f;
					
					case 2:
						return 2705.169f, 4134.485f, 42.9269f;
					
					case 3:
						return 2055.265f, 3169.848f, 44.1689f;
					
					case 4:
						return 863.803f, 3675.6f, 31.7954f;
					
					case 5:
						return 886.2111f, 2853.005f, 56.0054f;
					
					case 6:
						return 163.784f, 3118.285f, 42.431f;
					
					case 7:
						return 1745.93f, 6415.255f, 34.0135f;
					
					case 8:
						return 749.3223f, 4184.208f, 40.0928f;
					
					case 9:
						return 763.2497f, 6460.267f, 30.6682f;
					
					case 10:
						return -742.2768f, 5553.111f, 32.56f;
					
					case 11:
						return -1586.766f, 5152.244f, 18.6596f;
					
					case 12:
						return -134.4378f, 4622.696f, 124.729f;
					
					case 13:
						return 165.1716f, 2229.792f, 89.7487f;
					
					case 14:
						return 1607.245f, 6630.727f, 14.3514f;
					
					case 15:
						return -208.5306f, 3656.938f, 50.7525f;
					
					case 16:
						return 1627.282f, 3517.429f, 36.0498f;
					
					case 17:
						return 1261.062f, 1920.483f, 77.5035f;
					
					case 18:
						return -776.8787f, 5395.571f, 32.8563f;
					
					case 19:
						return 2492.86f, 2602.992f, 41.8819f;
					
					default:
				}
			}
			else
			{
				switch (bParam0)
				{
					case 0:
						return -883.7501f, 267.4142f, 74.0781f;
					
					case 1:
						return -401.2874f, -130.6327f, 37.5323f;
					
					case 2:
						return -835.4493f, -1054.33f, 9.9708f;
					
					case 3:
						return -1161.08f, -322.3042f, 36.6192f;
					
					case 4:
						return -163.9208f, -1456.081f, 30.6095f;
					
					case 5:
						return 570.5107f, 122.0472f, 97.0415f;
					
					case 6:
						return 891.511f, -2206.342f, 29.5095f;
					
					case 7:
						return -3052.881f, 104.9589f, 11.3463f;
					
					case 8:
						return 429.0299f, -1966.275f, 22.289f;
					
					case 9:
						return 1285.692f, -1602.658f, 53.83f;
					
					case 10:
						return -1540.091f, -949.7162f, 10.5661f;
					
					case 11:
						return -2016.265f, 559.5696f, 107.3068f;
					
					case 12:
						return 258.2718f, 894.1854f, 208.1772f;
					
					case 13:
						return -1040.28f, -1588.116f, 4.0416f;
					
					case 14:
						return -1658.251f, 242.2557f, 61.391f;
					
					case 15:
						return -1952.557f, -279.8821f, 40.9733f;
					
					case 16:
						return 1694.616f, -1602.158f, 111.473f;
					
					case 17:
						return -430.3886f, 1205.212f, 324.7585f;
					
					case 18:
						return 1662.317f, -69.9203f, 173.1693f;
					
					case 19:
						return 1428.408f, -2610.024f, 47.2267f;
					}
				
				default:
			}
			break;
		
		case 6:
			if (func_247())
			{
				switch (Local_185.f_679)
				{
					case 0:
						switch (bParam0)
						{
							case 0:
								return 308.2296f, 2892.979f, 42.5482f;
							
							case 1:
								return 318.1932f, 2879.93f, 48.5734f;
							
							case 2:
								return 291.4029f, 2895.131f, 42.6065f;
							
							case 3:
								return 316.6138f, 2856.345f, 42.6214f;
							
							case 4:
								return 312.3143f, 2896.062f, 45.4681f;
							
							case 5:
								return 290.6992f, 2873.884f, 42.6424f;
							
							case 6:
								return 305.9541f, 2863.39f, 43.3918f;
							
							case 7:
								return 325.973f, 2871.898f, 43.8916f;
							
							case 8:
								return 274.017f, 2878.485f, 44.0444f;
							
							default:
						}
						break;
					
					case 1:
						switch (bParam0)
						{
							case 0:
								return 2348.911f, 3033.47f, 47.1738f;
							
							case 1:
								return 2388.466f, 3038.915f, 48.6456f;
							
							case 2:
								return 2366.008f, 3078.644f, 48.648f;
							
							case 3:
								return 2335.92f, 3049.692f, 47.1517f;
							
							case 4:
								return 2354.389f, 3054.381f, 47.1526f;
							
							case 5:
								return 2335.383f, 3033.607f, 47.1513f;
							
							case 6:
								return 2371.499f, 3039.928f, 47.1524f;
							
							case 7:
								return 2373.612f, 3051.792f, 47.1526f;
							
							case 8:
								return 2345.907f, 3068.643f, 47.1521f;
							
							default:
						}
						break;
					
					case 2:
						switch (bParam0)
						{
							case 0:
								return 281.6046f, 6782.363f, 14.6965f;
							
							case 1:
								return 255.1581f, 6841.423f, 16.9099f;
							
							case 2:
								return 243.2855f, 6761.583f, 15.6422f;
							
							case 3:
								return 313.0555f, 6788.746f, 16.1106f;
							
							case 4:
								return 276.1815f, 6815.786f, 14.7039f;
							
							case 5:
								return 304.0913f, 6740.887f, 14.6805f;
							
							case 6:
								return 331.0639f, 6779.333f, 16.3542f;
							
							case 7:
								return 250.6801f, 6767.147f, 15.0135f;
							
							case 8:
								return 275.9807f, 6789.46f, 14.6957f;
							
							default:
						}
						break;
					
					case 3:
						switch (bParam0)
						{
							case 0:
								return 2699.279f, 4314.33f, 44.852f;
							
							case 1:
								return 2693.62f, 4362.461f, 46.7702f;
							
							case 2:
								return 2717.853f, 4295.437f, 47.7755f;
							
							case 3:
								return 2701.42f, 4327.995f, 44.852f;
							
							case 4:
								return 2693.926f, 4324.975f, 44.8519f;
							
							case 5:
								return 2691.939f, 4290.637f, 45.0544f;
							
							case 6:
								return 2708.417f, 4308.541f, 45.3998f;
							
							case 7:
								return 2680.529f, 4311.71f, 44.8519f;
							
							case 8:
								return 2679.51f, 4312.198f, 44.852f;
							
							default:
						}
						break;
					
					case 4:
						switch (bParam0)
						{
							case 0:
								return 1695.376f, 6430.466f, 31.6781f;
							
							case 1:
								return 1692.519f, 6435.478f, 31.7642f;
							
							case 2:
								return 1682.131f, 6425.435f, 31.1307f;
							
							case 3:
								return 1702.405f, 6426.481f, 31.6374f;
							
							case 4:
								return 1710.12f, 6423.539f, 31.7638f;
							
							case 5:
								return 1692.51f, 6404.768f, 30.801f;
							
							case 6:
								return 1680.12f, 6436.734f, 30.9586f;
							
							case 7:
								return 1650.869f, 6419.119f, 29.1215f;
							
							case 8:
								return 1713.974f, 6424.335f, 33.263f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (Local_185.f_679)
				{
					case 0:
						switch (bParam0)
						{
							case 0:
								return 1125.797f, -645.2601f, 55.7337f;
							
							case 1:
								return 1171.279f, -646.054f, 62.6715f;
							
							case 2:
								return 1165.556f, -618.1664f, 63.871f;
							
							case 3:
								return 1136.13f, -661.4698f, 56.0826f;
							
							case 4:
								return 1136.854f, -632.9972f, 56.3743f;
							
							case 5:
								return 1123.248f, -661.5654f, 55.7665f;
							
							case 6:
								return 1118.498f, -632.6472f, 55.8085f;
							
							case 7:
								return 1146.048f, -635.6122f, 55.7223f;
							
							case 8:
								return 1146.932f, -652.1199f, 55.7868f;
							
							default:
						}
						break;
					
					case 1:
						switch (bParam0)
						{
							case 0:
								return -813.8159f, 47.817f, 47.5815f;
							
							case 1:
								return -792.0341f, 36.543f, 48.1447f;
							
							case 2:
								return -812.02f, 16.9962f, 44.2169f;
							
							case 3:
								return -805.6351f, 63.7177f, 49.7905f;
							
							case 4:
								return -809.7114f, 36.6121f, 46.8549f;
							
							case 5:
								return -834.7526f, 43.4699f, 46.8769f;
							
							case 6:
								return -829.7305f, 68.9156f, 51.3815f;
							
							case 7:
								return -829.5859f, 56.8535f, 49.6704f;
							
							case 8:
								return -828.4629f, 57.7785f, 49.9247f;
							
							default:
						}
						break;
					
					case 2:
						switch (bParam0)
						{
							case 0:
								return -95.5806f, -418.2466f, 35.3348f;
							
							case 1:
								return -121.0947f, -444.8833f, 34.9121f;
							
							case 2:
								return -94.0296f, -391.0595f, 35.981f;
							
							case 3:
								return -69.851f, -426.6504f, 36.7117f;
							
							case 4:
								return -122.0492f, -444.4511f, 34.9121f;
							
							case 5:
								return -43.4647f, -438.7908f, 40.7075f;
							
							case 6:
								return -156.7404f, -423.1685f, 34.079f;
							
							case 7:
								return -132.7098f, -412.4948f, 33.2462f;
							
							case 8:
								return -94.2203f, -447.643f, 34.9121f;
							
							default:
						}
						break;
					
					case 3:
						switch (bParam0)
						{
							case 0:
								return -1313.764f, -765.1419f, 19.2445f;
							
							case 1:
								return -1333.679f, -742.8681f, 23.1737f;
							
							case 2:
								return -1300.986f, -778.6068f, 18.4695f;
							
							case 3:
								return -1333.064f, -787.5348f, 18.8938f;
							
							case 4:
								return -1332.287f, -786.1912f, 18.9137f;
							
							case 5:
								return -1309.695f, -795.2505f, 16.5935f;
							
							case 6:
								return -1340.3f, -759.342f, 19.3298f;
							
							case 7:
								return -1282.254f, -805.6615f, 17.68f;
							
							case 8:
								return -1343.584f, -754.9631f, 22.8771f;
							
							default:
						}
						break;
					
					case 4:
						switch (bParam0)
						{
							case 0:
								return -425.7827f, 1122.551f, 324.8541f;
							
							case 1:
								return -420.6537f, 1148.094f, 324.8583f;
							
							case 2:
								return -421.566f, 1148.923f, 324.8605f;
							
							case 3:
								return -408.7002f, 1130.488f, 324.9044f;
							
							case 4:
								return -441.4777f, 1147.047f, 324.8543f;
							
							case 5:
								return -447.1815f, 1130.182f, 324.8559f;
							
							case 6:
								return -426.4003f, 1110.248f, 326.6821f;
							
							case 7:
								return -385.3321f, 1172.665f, 325.897f;
							
							case 8:
								return -423.4293f, 1180.318f, 325.9146f;
							
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_337(int iParam0, int iParam1)
{
	unk_0xAAA71DD7E9059338(iParam0, 1);
	unk_0x9E6CC93E007219AC(iParam0, 1);
	unk_0x44FB298D6382876D(iParam0, 1);
	unk_0x3CEA1FD137ACE2D9(iParam0, Global_1837208);
}

void func_338(bool bParam0, int iParam1)
{
	Local_185.f_707[bParam0 /*8*/].f_5 = iParam1;
}

void func_339(int iParam0, int iParam1)
{
	var uVar0;
	
	unk_0x9E6CC93E007219AC(iParam0, 1);
	uVar0 = func_333();
	unk_0xB41DEC3AAC1AA107(iParam0, uVar0, 9999999, 1, 1);
	unk_0x0428AFDCAA63B06E(iParam0, 42, 0);
	unk_0xCAF62AAD9CA7C260(iParam0, 1);
	unk_0x570AAA413775DFFB(iParam0, 1);
	unk_0x0428AFDCAA63B06E(iParam0, 146, 1);
	unk_0xC652B7E19CE29859(iParam0, iParam1);
	func_331(iParam0);
	unk_0x44FB298D6382876D(iParam0, 1);
	unk_0x3CEA1FD137ACE2D9(iParam0, Global_1837211);
	unk_0xBE8796DB2B90A437(iParam0, 2, 1);
	if (func_15() || func_18())
	{
		unk_0xAAA71DD7E9059338(iParam0, 1);
		unk_0x68F395D64BC35E68(iParam0, 1);
	}
	unk_0xBE8796DB2B90A437(iParam0, 53, 1);
	if (func_15())
	{
		unk_0xBE8796DB2B90A437(iParam0, 2, 1);
		unk_0xBE8796DB2B90A437(iParam0, 3, 0);
	}
}

void func_340(int iParam0)
{
	unk_0x0428AFDCAA63B06E(iParam0, 330, 1);
	unk_0x0428AFDCAA63B06E(iParam0, 272, 1);
	unk_0x91B8DEBF573007DE(iParam0, 0);
	unk_0x570AAA413775DFFB(iParam0, 2);
	unk_0x0428AFDCAA63B06E(iParam0, 324, 1);
	unk_0x0428AFDCAA63B06E(iParam0, 249, 1);
	unk_0x0428AFDCAA63B06E(iParam0, 365, 1);
	unk_0x0428AFDCAA63B06E(iParam0, 396, 1);
	unk_0x3CEA1FD137ACE2D9(iParam0, Global_1836891[1 /*94*/][1 /*31*/][1 /*10*/][1 /*3*/][1]);
}

char* func_341(bool bParam0)
{
	switch (func_16())
	{
		case 6:
			if (func_247())
			{
				switch (Local_185.f_679)
				{
					case 0:
						switch (bParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							
							case 1:
								return "";
							
							case 2:
								return "";
							
							case 3:
								return "WORLD_HUMAN_STAND_MOBILE";
							
							case 4:
								return "WORLD_HUMAN_PICNIC";
							
							case 5:
								return "WORLD_HUMAN_BINOCULARS";
							
							case 6:
								return "WORLD_HUMAN_SMOKING";
							
							case 7:
								return "WORLD_HUMAN_BUM_STANDING";
							
							case 8:
								return "WORLD_HUMAN_JOG_STANDING";
							
							default:
						}
						break;
					
					case 1:
						switch (bParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							
							case 1:
								return "";
							
							case 2:
								return "";
							
							case 3:
								return "WORLD_HUMAN_PICNIC";
							
							case 4:
								return "WORLD_HUMAN_SMOKING";
							
							case 5:
								return "WORLD_HUMAN_STAND_MOBILE";
							
							case 6:
								return "WORLD_HUMAN_YOGA";
							
							case 7:
								return "WORLD_HUMAN_SUNBATHE";
							
							case 8:
								return "WORLD_HUMAN_SUNBATHE";
							
							default:
						}
						break;
					
					case 2:
						switch (bParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							
							case 1:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							
							case 2:
								return "WORLD_HUMAN_SMOKING";
							
							case 3:
								return "WORLD_HUMAN_PICNIC";
							
							case 4:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							
							case 5:
								return "";
							
							case 6:
								return "";
							
							case 7:
								return "WORLD_HUMAN_BUM_FREEWAY";
							
							case 8:
								return "WORLD_HUMAN_JOG_STANDING";
							
							default:
						}
						break;
					
					case 3:
						switch (bParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							
							case 1:
								return "WORLD_HUMAN_SMOKING";
							
							case 2:
								return "WORLD_HUMAN_STAND_MOBILE";
							
							case 3:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							
							case 4:
								return "WORLD_HUMAN_DRINKING";
							
							case 5:
								return "WORLD_HUMAN_STAND_MOBILE";
							
							case 6:
								return "WORLD_HUMAN_STAND_MOBILE";
							
							case 7:
								return "";
							
							case 8:
								return "";
							
							default:
						}
						break;
					
					case 4:
						switch (bParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							
							case 1:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							
							case 2:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							
							case 3:
								return "WORLD_HUMAN_PICNIC";
							
							case 4:
								return "WORLD_HUMAN_JOG_STANDING";
							
							case 5:
								return "WORLD_HUMAN_BINOCULARS";
							
							case 6:
								return "WORLD_HUMAN_SMOKING";
							
							case 7:
								return "";
							
							case 8:
								return "";
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (Local_185.f_679)
				{
					case 0:
						switch (bParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							
							case 1:
								return "WORLD_HUMAN_CLIPBOARD";
							
							case 2:
								return "WORLD_HUMAN_WINDOW_SHOP_BROWSE	";
							
							case 3:
								return "WORLD_HUMAN_CLIPBOARD";
							
							case 4:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							
							case 5:
								return "WORLD_HUMAN_SMOKING";
							
							case 6:
								return "WORLD_HUMAN_STAND_MOBILE";
							
							case 7:
								return "";
							
							case 8:
								return "";
							
							default:
						}
						break;
					
					case 1:
						switch (bParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							
							case 1:
								return "";
							
							case 2:
								return "";
							
							case 3:
								return "WORLD_HUMAN_CLIPBOARD";
							
							case 4:
								return "WORLD_HUMAN_WELDING";
							
							case 5:
								return "WORLD_HUMAN_CLIPBOARD";
							
							case 6:
								return "WORLD_HUMAN_WELDING";
							
							case 7:
								return "WORLD_HUMAN_SMOKING";
							
							case 8:
								return "WORLD_HUMAN_SMOKING";
							
							default:
						}
						break;
					
					case 2:
						switch (bParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							
							case 1:
								return "";
							
							case 2:
								return "";
							
							case 3:
								return "WORLD_HUMAN_BINOCULARS";
							
							case 4:
								return "WORLD_HUMAN_JOG_STANDING";
							
							case 5:
								return "WORLD_HUMAN_STAND_MOBILE";
							
							case 6:
								return "WORLD_HUMAN_PICNIC";
							
							case 7:
								return "WORLD_HUMAN_JOG_STANDING";
							
							case 8:
								return "WORLD_HUMAN_STUPOR";
							
							default:
						}
						break;
					
					case 3:
						switch (bParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							
							case 1:
								return "";
							
							case 2:
								return "";
							
							case 3:
								return "WORLD_HUMAN_SMOKING";
							
							case 4:
								return "WORLD_HUMAN_DRINKING";
							
							case 5:
								return "WORLD_HUMAN_PICNIC";
							
							case 6:
								return "WORLD_HUMAN_WINDOW_SHOP_BROWSE";
							
							case 7:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							
							case 8:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							
							default:
						}
						break;
					
					case 4:
						switch (bParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							
							case 1:
								return "WORLD_HUMAN_SMOKING";
							
							case 2:
								return "WORLD_HUMAN_HAMMERING";
							
							case 3:
								return "WORLD_HUMAN_WINDOW_SHOP_BROWSE";
							
							case 4:
								return "WORLD_HUMAN_DRINKING";
							
							case 5:
								return "WORLD_HUMAN_BUM_FREEWAY";
							
							case 6:
								return "PROP_HUMAN_BUM_BIN";
							
							case 7:
								return "";
							
							case 8:
								return "";
							
							default:
						}
						break;
					}
			}
			break;
	}
	return "WORLD_HUMAN_GUARD_STAND";
}

void func_342(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_343(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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
	*uParam0 = unk_0x9F7A52B1537567AC(unk_0x8728A378EF2B46B2(unk_0xE38610F405049F71(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
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

int func_344(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		unk_0x460D2A8B2C7DC7D4(uParam0);
		return unk_0xEADBDBE0422CF7E6(uParam0);
	}
	return 0;
}

int func_345(bool bParam0)
{
	switch (func_16())
	{
		case 12:
		case 0:
			switch (bParam0)
			{
				case 0:
				case 2:
					return -1;
				
				case 1:
				case 3:
					return 0;
				
				default:
			}
			break;
		
		case 7:
			return 0;
		
		case 6:
			if (func_247())
			{
				switch (Local_185.f_679)
				{
					case 1:
					case 2:
					case 3:
						if (bParam0 == 1)
						{
							return -1;
						}
						return 0;
					
					case 0:
					case 4:
						if (bParam0 == 7)
						{
							return -1;
						}
						return 0;
					
					default:
				}
			}
			else
			{
				switch (Local_185.f_679)
				{
					case 0:
					case 1:
						if (bParam0 == 1)
						{
							return -1;
						}
						return 0;
					
					case 2:
						if (bParam0 == 5)
						{
							return -1;
						}
						return 0;
					
					case 3:
					case 4:
						if (bParam0 == 7)
						{
							return -1;
						}
						return 0;
					}
				
				default:
			}
			break;
	}
	return -1;
}

int func_346(bool bParam0)
{
	switch (func_16())
	{
		case 12:
		case 0:
			switch (bParam0)
			{
				case 0:
				case 1:
					return Local_185.f_837[0 /*6*/];
				
				case 2:
				case 3:
					return Local_185.f_837[1 /*6*/];
				
				default:
			}
			break;
		
		case 7:
			return Local_185.f_59[0];
		
		case 6:
			return Local_185.f_837[0 /*6*/];
	}
	return -1;
}

int func_347(bool bParam0)
{
	switch (func_16())
	{
		case 7:
		case 12:
		case 0:
			return 1;
		
		case 6:
			if (func_247())
			{
				switch (Local_185.f_679)
				{
					case 1:
					case 2:
					case 3:
						if (bParam0 == 1 || bParam0 == 2)
						{
							return 1;
						}
						return 0;
					
					case 0:
					case 4:
						if (bParam0 == 7 || bParam0 == 8)
						{
							return 1;
						}
						return 0;
					
					default:
				}
			}
			else
			{
				switch (Local_185.f_679)
				{
					case 0:
					case 1:
						if (bParam0 == 1 || bParam0 == 2)
						{
							return 1;
						}
						return 0;
					
					case 2:
						if (bParam0 == 5 || bParam0 == 6)
						{
							return 1;
						}
						return 0;
					
					case 3:
					case 4:
						if (bParam0 == 7 || bParam0 == 8)
						{
							return 1;
						}
						return 0;
					}
				
				default:
			}
			break;
	}
	return 0;
}

bool func_348(bool bParam0)
{
	return unk_0x93BF17E19A9F0E9B(Local_185.f_707[bParam0 /*8*/]);
}

int func_349()
{
	switch (func_16())
	{
		case 6:
		case 12:
		case 4:
		case 7:
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

bool func_350()
{
	int iVar0;
	bool bVar1;
	
	if (!func_361())
	{
		return 1;
	}
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < func_360())
	{
		if (!func_352(iVar0))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		unk_0x55098D9E9AD58806(func_351());
	}
	return bVar1;
}

int func_351()
{
	switch (func_16())
	{
		case 12:
			return joaat("huntley");
		
		case 0:
			return joaat("sanchez");
		
		case 6:
			return joaat("police4");
		
		default:
	}
	return 0;
}

int func_352(int iParam0)
{
	struct<3> Var0;
	float fVar1;
	
	if (!unk_0x93BF17E19A9F0E9B(Local_185.f_837[iParam0 /*6*/]))
	{
		if (func_259(func_351()))
		{
			Var0 = { func_359(iParam0) };
			fVar1 = func_358(iParam0);
			if (func_355(&(Local_185.f_837[iParam0 /*6*/]), func_351(), Var0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				func_354(iParam0);
				func_353(unk_0xE38610F405049F71(Local_185.f_837[iParam0 /*6*/]));
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

void func_353(int iParam0)
{
	if (!Global_262145.f_4712)
	{
		unk_0xF977D20CFFFD341F(iParam0, 0);
	}
}

void func_354(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xE38610F405049F71(Local_185.f_837[iParam0 /*6*/]);
	if (!unk_0xEA4F815FDC353FEF(unk_0x4B423FAA24E8ABF0(iVar0)))
	{
		unk_0x439C904840715871(iVar0, 1);
		unk_0x5FE0938FDE9B0958(iVar0, 0);
	}
	unk_0xB57A96BF24464D21(iVar0, 1);
	unk_0xC229299217554C78(iVar0, 1, 1, 0);
	unk_0x0B1BCFB3741AF8B2(iVar0, 1);
	unk_0x89E19F9D79DDCA80(iVar0, 1);
}

int func_355(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
	iVar1 = unk_0x5779387E956077A6(iParam1, Param2, fParam3, iParam5, iParam4, iParam12);
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
			func_356(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_356(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_357(unk_0x259BE71D8A81D4FA(), Param0, iParam2) > -1)
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

int func_357(bool bParam0, struct<3> Param1, int iParam2)
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

float func_358(int iParam0)
{
	if (func_247())
	{
		switch (Local_185.f_679)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 160.7998f;
					
					case 1:
						return 301.9992f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						return 107.7992f;
					
					case 1:
						return 69.7991f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						return 250.9996f;
					
					case 1:
						return 237.3995f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						return 100.5997f;
					
					case 1:
						return 303.3995f;
					
					default:
				}
				break;
			
			case 4:
				switch (iParam0)
				{
					case 0:
						return 70.9999f;
					
					case 1:
						return 154.7995f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (Local_185.f_679)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 190.599f;
					
					case 1:
						return 190.599f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						return 74.1999f;
					
					case 1:
						return 300.9994f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						return 342.8f;
					
					case 1:
						return 158.9997f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						return 38.5987f;
					
					case 1:
						return 128.5969f;
					
					default:
				}
				break;
			
			case 4:
				switch (iParam0)
				{
					case 0:
						return 72.5998f;
					
					case 1:
						return 220.1996f;
					
					default:
				}
				break;
			}
	}
	return 0f;
}

Vector3 func_359(int iParam0)
{
	if (func_247())
	{
		switch (Local_185.f_679)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 326.3047f, 2872.003f, 42.4538f;
					
					case 1:
						return 273.864f, 2878.174f, 42.6107f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						return 2365.385f, 3078.505f, 47.1581f;
					
					case 1:
						return 2388.272f, 3039.541f, 47.1529f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						return 243.1329f, 6760.87f, 14.3175f;
					
					case 1:
						return 254.9448f, 6840.601f, 15.7468f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						return 2718.618f, 4295.328f, 46.6625f;
					
					case 1:
						return 2695.139f, 4363.16f, 45.4893f;
					
					default:
				}
				break;
			
			case 4:
				switch (iParam0)
				{
					case 0:
						return 1650.276f, 6420.025f, 27.6565f;
					
					case 1:
						return 1713.893f, 6424.411f, 31.776f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (Local_185.f_679)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 1172.109f, -646.3614f, 61.222f;
					
					case 1:
						return 1166.181f, -618.4933f, 62.4457f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						return -791.1071f, 36.0586f, 47.0641f;
					
					case 1:
						return -812.9344f, 16.3316f, 43.1182f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						return -157.1936f, -423.6889f, 32.8548f;
					
					case 1:
						return -43.208f, -440.1863f, 39.3939f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						return -1343.545f, -755.2953f, 21.4565f;
					
					case 1:
						return -1281.971f, -804.7698f, 16.5323f;
					
					default:
				}
				break;
			
			case 4:
				switch (iParam0)
				{
					case 0:
						return -385.0421f, 1171.759f, 324.7181f;
					
					case 1:
						return -424.3064f, 1180.286f, 324.6416f;
					
					default:
				}
				break;
			}
	}
	return 1713.893f, 6424.411f, 31.776f;
}

int func_360()
{
	switch (func_16())
	{
		case 6:
			return 2;
		
		default:
	}
	return 0;
}

bool func_361()
{
	return func_27();
}

int func_362()
{
	int iVar0;
	int iVar1;
	
	if (!func_245())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < func_244())
	{
		if (func_363(iVar0))
		{
		}
		iVar0++;
	}
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < func_244())
	{
		if (!unk_0x93BF17E19A9F0E9B(Local_185.f_80[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_363(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	
	if (!unk_0x93BF17E19A9F0E9B(Local_185.f_80[iParam0]))
	{
		if (func_259(func_242(iParam0)))
		{
			Var0 = { func_413() };
			uVar1 = func_412();
			if (unk_0xADCE9BCAFCB83364(func_371(190, -1, -1, -1) + 1))
			{
				if (func_370())
				{
					if (unk_0x93BF17E19A9F0E9B(func_367(iParam0)))
					{
						if (func_343(&(Local_185.f_80[iParam0]), func_367(iParam0), 26, func_242(iParam0), func_243(iParam0), 1, 1, 1))
						{
							unk_0x935364B4448CD584(unk_0xC35A3A4C05A4831B(Local_185.f_80[iParam0]), 1);
							unk_0x999C62072AF920FD(unk_0xC35A3A4C05A4831B(Local_185.f_80[iParam0]), 0);
							unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_185.f_80[iParam0]), 3, 0);
							unk_0x0428AFDCAA63B06E(unk_0xC35A3A4C05A4831B(Local_185.f_80[iParam0]), 229, 1);
							unk_0x0428AFDCAA63B06E(unk_0xC35A3A4C05A4831B(Local_185.f_80[iParam0]), 128, 0);
							unk_0x1537AF7B62B52EB1(unk_0xC35A3A4C05A4831B(Local_185.f_80[iParam0]), 0);
							unk_0x0428AFDCAA63B06E(unk_0xC35A3A4C05A4831B(Local_185.f_80[iParam0]), 398, 1);
							unk_0x1CA08719184AFC6F(unk_0xC35A3A4C05A4831B(Local_185.f_80[iParam0]), 512, 1);
							unk_0x3CEA1FD137ACE2D9(unk_0xC35A3A4C05A4831B(Local_185.f_80[iParam0]), Global_1837208);
							unk_0x44FB298D6382876D(unk_0xC35A3A4C05A4831B(Local_185.f_80[iParam0]), 1);
							unk_0xFD61BB3B8F1CDB6D(unk_0xC35A3A4C05A4831B(Local_185.f_80[iParam0]), 1);
							unk_0x0FD8B5F4BB15CD71(unk_0xC35A3A4C05A4831B(Local_185.f_80[iParam0]), -1);
							Local_185.f_979++;
						}
					}
				}
				else if (func_366())
				{
					if (func_364())
					{
						Local_185.f_979++;
					}
				}
				else if (func_334(&(Local_185.f_80[iParam0]), 26, func_242(iParam0), Var0, uVar1, 1, 1, 1))
				{
					unk_0x935364B4448CD584(unk_0xC35A3A4C05A4831B(Local_185.f_80[iParam0]), 1);
					unk_0x999C62072AF920FD(unk_0xC35A3A4C05A4831B(Local_185.f_80[iParam0]), 0);
					unk_0x44FB298D6382876D(unk_0xC35A3A4C05A4831B(Local_185.f_80[iParam0]), 1);
					unk_0xFD61BB3B8F1CDB6D(unk_0xC35A3A4C05A4831B(Local_185.f_80[iParam0]), 1);
					Local_185.f_979++;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_364()
{
	bool bVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = false;
	while (bVar0 < func_14())
	{
		Var1 = { func_365(bVar0, 0, Local_185.f_110, Local_185.f_957, 0) };
		if (!unk_0xFC8BFE4B41177C22(unk_0xF5014688C9788D5F(Local_185.f_80[bVar0])))
		{
			if (func_334(&(Local_185.f_80[bVar0]), 26, func_242(bVar0), Var1, uVar2, 1, 1, 1))
			{
				iVar4 = unk_0xC35A3A4C05A4831B(Local_185.f_80[bVar0]);
				unk_0x935364B4448CD584(iVar4, 1);
				unk_0x999C62072AF920FD(iVar4, 0);
				unk_0x44FB298D6382876D(iVar4, 1);
				unk_0xFD61BB3B8F1CDB6D(iVar4, 1);
				unk_0x0428AFDCAA63B06E(iVar4, 294, 1);
				unk_0xAAA71DD7E9059338(iVar4, 1);
				unk_0x4D306DD94DD6FDBA(unk_0xF5014688C9788D5F(Local_185.f_80[bVar0]), func_67(bVar0), unk_0x365DC1E8054AF31A(func_13(bVar0), func_257()), 0f, -1.4f, 0.55f, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1, 0);
				func_337(iVar4, 75);
				unk_0x3B3AC5F69E21EAB7(iVar4, 1, 0);
			}
		}
		else
		{
			iVar3++;
		}
		bVar0++;
	}
	return iVar3 == func_14();
}

Vector3 func_365(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = uParam2;
	if (iParam4 && iParam3 == 2)
	{
		switch (iVar0)
		{
			case 7:
				return 149.3549f, 152.8602f, 104.7787f;
			
			case 10:
				return 313.4909f, -822.9637f, 28.1564f;
			
			case 8:
				return -1520.979f, -393.1905f, 40.1197f;
			
			case 9:
				return -1201.368f, -1372.765f, 3.2609f;
			
			case 6:
				return 1436.717f, -1677.033f, 63.5393f;
			
			case 17:
				return 145.4915f, -2505.529f, 5f;
			
			case 20:
				return -326.8011f, -2741.148f, 6.0907f;
			
			case 16:
				return 1153.678f, -3093.058f, 5.8698f;
			
			case 19:
				return 646.6414f, -2652.586f, 6.155f;
			
			case 18:
				return -235.4306f, -2563.153f, 6.0509f;
			
			case 12:
				return 2859.976f, 4411.673f, 48.0934f;
			
			case 15:
				return 1659.062f, 4804.715f, 42.1896f;
			
			case 13:
				return 365.8367f, 3589.234f, 32.3738f;
			
			case 14:
				return 646.2524f, 2805.813f, 40.7804f;
			
			case 11:
				return 210.1556f, 2439.034f, 58.0282f;
			
			case 2:
				return 422.4615f, 6503.916f, 26.7609f;
			
			case 5:
				return -168.0869f, 6292.866f, 30.4893f;
			
			case 3:
				return 95.4456f, 6490.381f, 30.2949f;
			
			case 4:
				return -435.375f, 6119.498f, 30.1965f;
			
			case 1:
				return 74.3165f, 6316.366f, 30.2273f;
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iVar0)
				{
					case 7:
						switch (iParam0)
						{
							case 0:
								return 144.7052f, 174.0004f, 104.7989f;
							
							case 1:
								return 156.2407f, 172.1833f, 104.8413f;
							
							case 2:
								return 152.3495f, 162.122f, 104.5681f;
							
							case 3:
								return 149.3549f, 152.8602f, 104.7787f;
							
							default:
						}
						break;
					
					case 10:
						switch (iParam0)
						{
							case 0:
								return 303.1082f, -777.2009f, 28.2145f;
							
							case 1:
								return 306.6073f, -766.842f, 28.217f;
							
							case 2:
								return 310.2051f, -756.255f, 28.2203f;
							
							case 3:
								return 313.4909f, -822.9637f, 28.1564f;
							
							default:
						}
						break;
					
					case 8:
						switch (iParam0)
						{
							case 0:
								return -1505.704f, -407.3392f, 37.9183f;
							
							case 1:
								return -1498.254f, -414.4433f, 36.8173f;
							
							case 2:
								return -1512.923f, -400.4784f, 38.9836f;
							
							case 3:
								return -1520.979f, -393.1905f, 40.1197f;
							
							default:
						}
						break;
					
					case 9:
						switch (iParam0)
						{
							case 0:
								return -1170.77f, -1358.821f, 3.8793f;
							
							case 1:
								return -1180.174f, -1363.177f, 3.83f;
							
							case 2:
								return -1189.437f, -1367.422f, 3.6581f;
							
							case 3:
								return -1201.368f, -1372.765f, 3.2609f;
							
							default:
						}
						break;
					
					case 6:
						switch (iParam0)
						{
							case 0:
								return 1416.098f, -1643.641f, 59.6165f;
							
							case 1:
								return 1422.404f, -1653.303f, 60.7606f;
							
							case 2:
								return 1428.712f, -1663.632f, 62.0263f;
							
							case 3:
								return 1436.717f, -1677.033f, 63.5393f;
							
							default:
						}
						break;
					
					case 17:
						switch (iParam0)
						{
							case 0:
								return 148.9618f, -2492.894f, 4.9962f;
							
							case 1:
								return 146.8011f, -2496.193f, 5f;
							
							case 2:
								return 144.4075f, -2499.553f, 5f;
							
							case 3:
								return 145.4915f, -2505.529f, 5f;
							
							default:
						}
						break;
					
					case 20:
						switch (iParam0)
						{
							case 0:
								return -349.1915f, -2783.202f, 4.7145f;
							
							case 1:
								return -344.4598f, -2783.313f, 4.7134f;
							
							case 2:
								return -329.3253f, -2764.197f, 4.7158f;
							
							case 3:
								return -326.8011f, -2741.148f, 6.0907f;
							
							default:
						}
						break;
					
					case 16:
						switch (iParam0)
						{
							case 0:
								return 1177.498f, -3107.529f, 5.028f;
							
							case 1:
								return 1173.594f, -3111.532f, 5.6435f;
							
							case 2:
								return 1173.602f, -3123.754f, 5.6486f;
							
							case 3:
								return 1153.678f, -3093.058f, 5.8698f;
							
							default:
						}
						break;
					
					case 19:
						switch (iParam0)
						{
							case 0:
								return 671.2275f, -2652.373f, 5.7929f;
							
							case 1:
								return 667.0157f, -2650.506f, 5.7929f;
							
							case 2:
								return 656.0261f, -2650.482f, 5.7928f;
							
							case 3:
								return 646.6414f, -2652.586f, 6.155f;
							
							default:
						}
						break;
					
					case 18:
						switch (iParam0)
						{
							case 0:
								return -254.0566f, -2600.409f, 5.7123f;
							
							case 1:
								return -242.6433f, -2601.86f, 5.713f;
							
							case 2:
								return -233.7325f, -2601.958f, 5.713f;
							
							case 3:
								return -235.4306f, -2563.153f, 6.0509f;
							
							default:
						}
						break;
					
					case 12:
						switch (iParam0)
						{
							case 0:
								return 2868.489f, 4438.962f, 47.6502f;
							
							case 1:
								return 2878.345f, 4443.118f, 47.4421f;
							
							case 2:
								return 2888.115f, 4448.735f, 47.528f;
							
							case 3:
								return 2859.976f, 4411.673f, 48.0934f;
							
							default:
						}
						break;
					
					case 15:
						switch (iParam0)
						{
							case 0:
								return 1638.833f, 4838.842f, 41.0227f;
							
							case 1:
								return 1654.903f, 4824.832f, 40.9962f;
							
							case 2:
								return 1643.394f, 4828.428f, 41.0252f;
							
							case 3:
								return 1659.062f, 4804.715f, 42.1896f;
							
							default:
						}
						break;
					
					case 13:
						switch (iParam0)
						{
							case 0:
								return 399.1866f, 3592.775f, 32.2605f;
							
							case 1:
								return 388.2984f, 3594.667f, 32.2891f;
							
							case 2:
								return 377.6639f, 3596.634f, 32.4635f;
							
							case 3:
								return 365.8367f, 3589.234f, 32.3738f;
							
							default:
						}
						break;
					
					case 14:
						switch (iParam0)
						{
							case 0:
								return 649.8233f, 2767.469f, 40.9497f;
							
							case 1:
								return 648.6895f, 2779.705f, 40.904f;
							
							case 2:
								return 647.6401f, 2790.887f, 40.9137f;
							
							case 3:
								return 646.2524f, 2805.813f, 40.7804f;
							
							default:
						}
						break;
					
					case 11:
						switch (iParam0)
						{
							case 0:
								return 217.2443f, 2476.532f, 54.5448f;
							
							case 1:
								return 214.8707f, 2465.348f, 55.0394f;
							
							case 2:
								return 212.683f, 2454.795f, 55.8661f;
							
							case 3:
								return 210.1556f, 2439.034f, 58.0282f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 425.974f, 6541.852f, 26.6953f;
							
							case 1:
								return 424.2257f, 6530.286f, 26.6576f;
							
							case 2:
								return 422.175f, 6517.893f, 26.7314f;
							
							case 3:
								return 422.4615f, 6503.916f, 26.7609f;
							
							default:
						}
						break;
					
					case 5:
						switch (iParam0)
						{
							case 0:
								return -144.8243f, 6315.08f, 30.5034f;
							
							case 1:
								return -152.579f, 6307.761f, 30.3932f;
							
							case 2:
								return -160.0474f, 6300.669f, 30.2302f;
							
							case 3:
								return -168.0869f, 6292.866f, 30.4893f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return 69.3182f, 6464.313f, 30.3712f;
							
							case 1:
								return 77.6554f, 6472.552f, 30.402f;
							
							case 2:
								return 85.5971f, 6480.53f, 30.3719f;
							
							case 3:
								return 95.4456f, 6490.381f, 30.2949f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return -424.7343f, 6127.668f, 30.4525f;
							
							case 1:
								return -432.4558f, 6134.91f, 30.4784f;
							
							case 2:
								return -440.5509f, 6142.593f, 30.4784f;
							
							case 3:
								return -435.375f, 6119.498f, 30.1965f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 56.7992f, 6346.404f, 30.229f;
							
							case 1:
								return 62.2523f, 6336.942f, 30.2259f;
							
							case 2:
								return 67.5678f, 6327.642f, 30.2259f;
							
							case 3:
								return 74.3165f, 6316.366f, 30.2273f;
							
							default:
						}
						break;
				}
				break;
			
			case 1:
				switch (iVar0)
				{
					case 7:
						switch (iParam0)
						{
							case 0:
								return 126.7303f, 163.1857f, 104.341f;
							
							case 1:
								return 87.1795f, 175.3191f, 104.2598f;
							
							case 2:
								return 92.9219f, 162.1079f, 104.348f;
							
							case 3:
								return 81.3758f, 169.4485f, 104.6149f;
							
							default:
						}
						break;
					
					case 10:
						switch (iParam0)
						{
							case 0:
								return 326.136f, -785.2573f, 28.2144f;
							
							case 1:
								return 322.6066f, -796.3894f, 28.1706f;
							
							case 2:
								return 318.0972f, -809.7634f, 28.1823f;
							
							case 3:
								return 314.0462f, -743.4577f, 28.2014f;
							
							default:
						}
						break;
					
					case 8:
						switch (iParam0)
						{
							case 0:
								return -1440.239f, -413.3762f, 34.8174f;
							
							case 1:
								return -1431.168f, -407.85f, 34.9821f;
							
							case 2:
								return -1422.081f, -402.2156f, 35.1566f;
							
							case 3:
								return -1412.124f, -396.1587f, 35.199f;
							
							default:
						}
						break;
					
					case 9:
						switch (iParam0)
						{
							case 0:
								return -1211.97f, -1356.485f, 3.2077f;
							
							case 1:
								return -1202.679f, -1352.046f, 3.5031f;
							
							case 2:
								return -1192.861f, -1347.387f, 3.7444f;
							
							case 3:
								return -1179.847f, -1341.415f, 3.8704f;
							
							default:
						}
						break;
					
					case 6:
						switch (iParam0)
						{
							case 0:
								return 1430.273f, -1642.976f, 60.7876f;
							
							case 1:
								return 1440.73f, -1647.092f, 62.6074f;
							
							case 2:
								return 1451.992f, -1646.586f, 65.313f;
							
							case 3:
								return 1465.335f, -1639.677f, 67.9453f;
							
							default:
						}
						break;
					
					case 17:
						switch (iParam0)
						{
							case 0:
								return 149.6812f, -2454.479f, 5f;
							
							case 1:
								return 143.9008f, -2450.162f, 5f;
							
							case 2:
								return 140.2904f, -2447.917f, 5f;
							
							case 3:
								return 141.2641f, -2442.472f, 5f;
							
							default:
						}
						break;
					
					case 20:
						switch (iParam0)
						{
							case 0:
								return -361.5018f, -2780.22f, 5.7183f;
							
							case 1:
								return -357.0598f, -2780.403f, 5.8195f;
							
							case 2:
								return -365.9717f, -2779.991f, 5.7418f;
							
							case 3:
								return -351.6208f, -2740.528f, 6.1187f;
							
							default:
						}
						break;
					
					case 16:
						switch (iParam0)
						{
							case 0:
								return 1194.811f, -3104.521f, 5.7054f;
							
							case 1:
								return 1199.255f, -3104.421f, 5.6831f;
							
							case 2:
								return 1193.624f, -3083.208f, 5.6556f;
							
							case 3:
								return 1166.325f, -3078.063f, 5.9384f;
							
							default:
						}
						break;
					
					case 19:
						switch (iParam0)
						{
							case 0:
								return 654.0573f, -2693.037f, 5.8024f;
							
							case 1:
								return 666.6396f, -2692.853f, 5.7917f;
							
							case 2:
								return 657.1966f, -2705.695f, 5.9325f;
							
							case 3:
								return 663.0167f, -2687.504f, 6.1543f;
							
							default:
						}
						break;
					
					case 18:
						switch (iParam0)
						{
							case 0:
								return -250.8277f, -2572.115f, 5.7129f;
							
							case 1:
								return -250.6818f, -2564.549f, 5.7133f;
							
							case 2:
								return -241.3862f, -2565.994f, 5.7129f;
							
							case 3:
								return -247.4174f, -2552.121f, 6.0745f;
							
							default:
						}
						break;
					
					case 12:
						switch (iParam0)
						{
							case 0:
								return 2845.509f, 4483.769f, 47.5946f;
							
							case 1:
								return 2856.061f, 4481.315f, 47.397f;
							
							case 2:
								return 2866.66f, 4477.938f, 47.2923f;
							
							case 3:
								return 2873.481f, 4485.882f, 47.6688f;
							
							default:
						}
						break;
					
					case 15:
						switch (iParam0)
						{
							case 0:
								return 1683.025f, 4785.376f, 40.8715f;
							
							case 1:
								return 1683.861f, 4774.245f, 40.8633f;
							
							case 2:
								return 1685.945f, 4763.556f, 40.8653f;
							
							case 3:
								return 1659.635f, 4798.614f, 42.1739f;
							
							default:
						}
						break;
					
					case 13:
						switch (iParam0)
						{
							case 0:
								return 407.3274f, 3607.456f, 32.2305f;
							
							case 1:
								return 396.5025f, 3610.196f, 32.2266f;
							
							case 2:
								return 384.9869f, 3612.185f, 32.3465f;
							
							case 3:
								return 370.307f, 3612.629f, 32.3487f;
							
							default:
						}
						break;
					
					case 14:
						switch (iParam0)
						{
							case 0:
								return 618.8763f, 2813.685f, 40.9183f;
							
							case 1:
								return 607.5377f, 2812.979f, 40.9482f;
							
							case 2:
								return 595.9734f, 2812.296f, 40.947f;
							
							case 3:
								return 613.4562f, 2794.59f, 41.0611f;
							
							default:
						}
						break;
					
					case 11:
						switch (iParam0)
						{
							case 0:
								return 231.411f, 2485.149f, 54.1002f;
							
							case 1:
								return 230.1177f, 2474.666f, 54.4998f;
							
							case 2:
								return 228.3704f, 2463.432f, 55.0091f;
							
							case 3:
								return 225.9784f, 2449.663f, 56.0529f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 414.5212f, 6557.796f, 26.3661f;
							
							case 1:
								return 403.8975f, 6558.371f, 26.4371f;
							
							case 2:
								return 393.2283f, 6559.076f, 26.5887f;
							
							case 3:
								return 375.7357f, 6559.92f, 26.8811f;
							
							default:
						}
						break;
					
					case 5:
						switch (iParam0)
						{
							case 0:
								return -198.7337f, 6322.492f, 30.4176f;
							
							case 1:
								return -186.4931f, 6325.694f, 30.5028f;
							
							case 2:
								return -177.9904f, 6317.372f, 30.2112f;
							
							case 3:
								return -167.8821f, 6307.144f, 30.2122f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return 30.6972f, 6426.06f, 30.3401f;
							
							case 1:
								return 38.5376f, 6434.006f, 30.3431f;
							
							case 2:
								return 46.5618f, 6442.031f, 30.3487f;
							
							case 3:
								return 56.3076f, 6451.954f, 30.356f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return -391.1923f, 6184.078f, 30.4618f;
							
							case 1:
								return -404.3702f, 6202.154f, 30.5146f;
							
							case 2:
								return -404.9331f, 6213.31f, 30.482f;
							
							case 3:
								return -394.9436f, 6212.825f, 30.4886f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 63.2694f, 6350.123f, 30.2268f;
							
							case 1:
								return 68.0914f, 6340.667f, 30.2258f;
							
							case 2:
								return 73.2089f, 6330.613f, 30.2258f;
							
							case 3:
								return 79.0435f, 6319.419f, 30.2364f;
							
							default:
						}
						break;
				}
				break;
			
			case 2:
				switch (iVar0)
				{
					case 7:
						switch (iParam0)
						{
							case 0:
								return 74.9695f, 167.98f, 104.3503f;
							
							case 1:
								return 60.7318f, 156.4501f, 104.3953f;
							
							case 2:
								return 62.5776f, 161.2384f, 104.4801f;
							
							case 3:
								return 79.1059f, 163.5721f, 104.7526f;
							
							default:
						}
						break;
					
					case 10:
						switch (iParam0)
						{
							case 0:
								return 344.6402f, -730.1158f, 28.181f;
							
							case 1:
								return 340.6898f, -741.6677f, 28.1341f;
							
							case 2:
								return 336.9805f, -752.3841f, 28.1515f;
							
							case 3:
								return 332.6159f, -765.8456f, 28.1761f;
							
							default:
						}
						break;
					
					case 8:
						switch (iParam0)
						{
							case 0:
								return -1425.267f, -358.664f, 39.8621f;
							
							case 1:
								return -1432.032f, -350.9521f, 41.9045f;
							
							case 2:
								return -1438.948f, -343.1571f, 43.1232f;
							
							case 3:
								return -1447.102f, -334.0293f, 43.2706f;
							
							default:
						}
						break;
					
					case 9:
						switch (iParam0)
						{
							case 0:
								return -1152.865f, -1396.891f, 3.9901f;
							
							case 1:
								return -1161.709f, -1403.417f, 3.7883f;
							
							case 2:
								return -1170.039f, -1409.456f, 3.603f;
							
							case 3:
								return -1179.922f, -1416.552f, 3.4254f;
							
							default:
						}
						break;
					
					case 6:
						switch (iParam0)
						{
							case 0:
								return 1465.397f, -1677.776f, 65.1317f;
							
							case 1:
								return 1468.432f, -1666.437f, 65.1823f;
							
							case 2:
								return 1473.405f, -1653.851f, 66.3969f;
							
							case 3:
								return 1479.382f, -1640.09f, 68.4911f;
							
							default:
						}
						break;
					
					case 17:
						switch (iParam0)
						{
							case 0:
								return 168.1579f, -2467.466f, 5.013f;
							
							case 1:
								return 168.2115f, -2479.412f, 5.015f;
							
							case 2:
								return 168.085f, -2492.188f, 4.991f;
							
							case 3:
								return 167.6928f, -2455.238f, 4.9877f;
							
							default:
						}
						break;
					
					case 20:
						switch (iParam0)
						{
							case 0:
								return -371.8721f, -2768.837f, 5.7118f;
							
							case 1:
								return -368.8315f, -2771.617f, 5.7128f;
							
							case 2:
								return -376.6873f, -2748.82f, 5.7447f;
							
							case 3:
								return -331.9699f, -2729.261f, 6.0959f;
							
							default:
						}
						break;
					
					case 16:
						switch (iParam0)
						{
							case 0:
								return 1151.975f, -3148.326f, 5.6115f;
							
							case 1:
								return 1156.494f, -3148.156f, 5.6117f;
							
							case 2:
								return 1141.328f, -3145.683f, 5.6123f;
							
							case 3:
								return 1176.409f, -3142.344f, 5.7975f;
							
							default:
						}
						break;
					
					case 19:
						switch (iParam0)
						{
							case 0:
								return 625.344f, -2676.219f, 5.8074f;
							
							case 1:
								return 630.9755f, -2688.167f, 5.8092f;
							
							case 2:
								return 623.7214f, -2685.048f, 5.7944f;
							
							case 3:
								return 641.0204f, -2652.495f, 6.1576f;
							
							default:
						}
						break;
					
					case 18:
						switch (iParam0)
						{
							case 0:
								return -282.5058f, -2566.074f, 5.7144f;
							
							case 1:
								return -292.4669f, -2585.14f, 5.715f;
							
							case 2:
								return -302.3321f, -2576.532f, 5.7159f;
							
							case 3:
								return -263.0872f, -2542.552f, 6.0743f;
							
							default:
						}
						break;
					
					case 12:
						switch (iParam0)
						{
							case 0:
								return 2913.793f, 4456.578f, 47.0743f;
							
							case 1:
								return 2924.067f, 4460.802f, 46.5843f;
							
							case 2:
								return 2934.219f, 4465.292f, 46.1155f;
							
							case 3:
								return 2940.822f, 4449.582f, 46.1837f;
							
							default:
						}
						break;
					
					case 15:
						switch (iParam0)
						{
							case 0:
								return 1662.253f, 4849.201f, 40.913f;
							
							case 1:
								return 1660.826f, 4860.057f, 40.9121f;
							
							case 2:
								return 1658.906f, 4875.204f, 41.0773f;
							
							case 3:
								return 1658.426f, 4811.152f, 42.043f;
							
							default:
						}
						break;
					
					case 13:
						switch (iParam0)
						{
							case 0:
								return 342.6013f, 3601.92f, 32.5934f;
							
							case 1:
								return 333.5355f, 3594.518f, 32.5538f;
							
							case 2:
								return 326.2228f, 3586.551f, 32.3555f;
							
							case 3:
								return 320.5603f, 3573.11f, 32.3695f;
							
							default:
						}
						break;
					
					case 14:
						switch (iParam0)
						{
							case 0:
								return 665.3925f, 2724.05f, 40.7514f;
							
							case 1:
								return 664.7371f, 2734.814f, 40.837f;
							
							case 2:
								return 663.9374f, 2746.148f, 40.9304f;
							
							case 3:
								return 660.5984f, 2758.656f, 40.9246f;
							
							default:
						}
						break;
					
					case 11:
						switch (iParam0)
						{
							case 0:
								return 264.4133f, 2475.328f, 52.5213f;
							
							case 1:
								return 254.5964f, 2469.187f, 53.1732f;
							
							case 2:
								return 246.5093f, 2461.836f, 53.6126f;
							
							case 3:
								return 238.3004f, 2453.456f, 54.7109f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 438.7546f, 6555.551f, 26.083f;
							
							case 1:
								return 449.5543f, 6554.03f, 26.0292f;
							
							case 2:
								return 460.5455f, 6552.418f, 26.0041f;
							
							case 3:
								return 443.321f, 6555.394f, 26.0568f;
							
							default:
						}
						break;
					
					case 5:
						switch (iParam0)
						{
							case 0:
								return -134.716f, 6328.355f, 30.5927f;
							
							case 1:
								return -126.8547f, 6320.537f, 30.5044f;
							
							case 2:
								return -119.3266f, 6312.979f, 30.5045f;
							
							case 3:
								return -132.5326f, 6339.82f, 30.4904f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return 18.3968f, 6426.546f, 30.4162f;
							
							case 1:
								return 10.8481f, 6433.848f, 30.4252f;
							
							case 2:
								return 3.1266f, 6441.352f, 30.4252f;
							
							case 3:
								return -5.633f, 6449.744f, 30.4252f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return -439.1614f, 6111.74f, 30.2942f;
							
							case 1:
								return -441.554f, 6106.894f, 30.3087f;
							
							case 2:
								return -443.6328f, 6102.508f, 30.2969f;
							
							case 3:
								return -446.7796f, 6098.214f, 30.2083f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 74.6876f, 6348.288f, 30.376f;
							
							case 1:
								return 82.7511f, 6337.771f, 30.2258f;
							
							case 2:
								return 77.8867f, 6335.605f, 30.2258f;
							
							case 3:
								return 86.1207f, 6325.027f, 30.2358f;
							
							default:
						}
						break;
				}
				break;
			}
	}
	return 131.7841f, -2230.233f, 5.0333f;
}

int func_366()
{
	return 0;
}

var func_367(int iParam0)
{
	if ((func_369() || func_368()) || func_27())
	{
		return Local_185.f_64[iParam0];
	}
	return Local_185.f_64[0];
}

bool func_368()
{
	return func_16() == 9;
}

bool func_369()
{
	return func_16() == 1;
}

int func_370()
{
	if ((func_368() || func_369()) || func_27())
	{
		return 1;
	}
	return 0;
}

int func_371(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 167:
			return func_411(iParam1);
		
		case 168:
			return 12;
		
		case 170:
			return 4;
		
		case 171:
			return 0;
		
		case 172:
			return 0;
		
		case 173:
			return 4;
		
		case 178:
		case 188:
			return func_407(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_402(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_397(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_392(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_391(iParam1, iParam2);
		
		case 179:
			return 0;
		
		case 183:
			return 15;
		
		case 182:
			return 20;
		
		case 185:
			return 21;
		
		case 186:
			return 36;
		
		case 180:
			return 10;
		
		case 193:
			return 10;
		
		case 194:
			return 0;
		
		case 197:
			return 12;
		
		case 199:
			return 6;
		
		case 195:
			return 15;
		
		case 201:
			return 0;
		
		case 198:
			return 18;
		
		case 205:
			return 1;
		
		case 207:
			return 24;
		
		case 208:
			return 14;
		
		case 209:
			return 11;
		
		case 210:
			return 0;
		
		case 214:
			return 12;
		
		case 215:
			return 20;
		
		case 216:
			return 20;
		
		case 217:
			return func_390();
		
		case 218:
			return func_389();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_388(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_387(iParam1, iParam2);
		
		case 239:
			return 6;
		
		case 240:
			return 11;
		
		case 241:
			return 14;
		
		case 242:
			return 14;
		
		case 244:
			return 9;
		
		case 248:
			return 10;
		
		case 243:
			return func_382(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_377(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_372(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_372(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			iVar0 += 6;
			break;
	}
	if (!bParam2)
	{
		if (func_376(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_373(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_373(int iParam0, var uParam1)
{
	if (func_376(iParam0, uParam1))
	{
		return (func_375(iParam0, uParam1) + func_374(iParam0, uParam1));
	}
	return 0;
}

int func_374(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_375(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_376(int iParam0, int iParam1)
{
	return func_375(iParam0, iParam1) > 0;
}

int func_377(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 += 6;
			break;
		
		case 24:
			iVar0 += 2;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 12;
					break;
				
				case 31:
				case 32:
					iVar0 += 10;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 88:
					iVar0 += 10;
					break;
				
				case 89:
					iVar0 += 9;
					break;
				
				case 90:
					iVar0 += 10;
					break;
			}
			break;
		
		case 36:
			iVar0 += 9;
			break;
		
		case 43:
			iVar0 += 6;
			break;
		
		case 38:
			iVar0 += 6;
			break;
		
		case 40:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 += 16;
			break;
		
		case 16:
			iVar0 += 14;
			break;
		
		case 35:
			iVar0 += 13;
			break;
		
		case 4:
			iVar0 += 32;
			break;
		
		case 45:
			iVar0 += 2;
			break;
		
		case 46:
			iVar0 += 9;
			break;
		
		case 9:
			iVar0 += 15;
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 17:
			iVar0 += 14;
			break;
		
		case 47:
			iVar0 += 13;
			break;
		
		case 11:
			iVar0 += 11;
			break;
		
		case 18:
			iVar0 += 24;
			break;
		
		case 6:
			iVar0 += 14;
			break;
		
		case 48:
			iVar0 += 15;
			break;
		
		case 44:
			iVar0 += 9;
			break;
		
		case 21:
			iVar0 += 20;
			break;
		
		case 22:
			iVar0 += 14;
			break;
		
		case 7:
			iVar0 += 22;
			break;
		
		case 15:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 34:
			iVar0 += 18;
			break;
		
		case 27:
			iVar0 += 16;
			break;
		
		case 26:
			iVar0 += 10;
			break;
		
		case 23:
			iVar0 += 10;
			break;
		
		case 31:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 14;
			break;
		
		case 12:
			iVar0 += 7;
			break;
		
		case 41:
			iVar0 += 10;
			break;
		
		case 49:
			iVar0 += 30;
			break;
		
		case 19:
			iVar0 += 15;
			break;
		
		case 5:
			iVar0 += 7;
			break;
		
		case 30:
			iVar0++;
			break;
		
		case 13:
			iVar0 += 20;
			break;
		
		case 29:
			iVar0 += 9;
			break;
		
		case 50:
			iVar0 += 24;
			break;
		
		case 20:
			iVar0 += 26;
			break;
		
		case 32:
			iVar0 += 30;
			break;
		
		case 28:
			iVar0 += 3;
			break;
		
		case 42:
			iVar0 += 13;
			break;
		
		case 52:
			iVar0 += 12;
			break;
		
		case 39:
			iVar0 += 5;
			break;
		
		case 37:
			iVar0 += 6;
			break;
		
		case 25:
			iVar0 += 6;
			break;
		
		case 51:
			iVar0 += 20;
			break;
	}
	if (!bParam2)
	{
		if (func_381(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_378(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_378(int iParam0, int iParam1)
{
	if (func_381(iParam0, iParam1))
	{
		return (func_380(iParam0, iParam1) + func_379(iParam0, iParam1));
	}
	return 0;
}

int func_379(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 49:
		case 48:
		case 7:
		case 16:
		case 5:
		case 26:
		case 22:
		case 25:
		case 11:
		case 17:
		case 14:
			return 2;
		
		case 6:
		case 50:
		case 47:
			return 4;
		
		case 27:
			return 2;
		
		default:
	}
	return 0;
}

int func_380(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 27:
		case 49:
		case 48:
		case 6:
		case 50:
		case 7:
		case 16:
		case 47:
		case 5:
		case 25:
		case 26:
		case 22:
		case 11:
		case 17:
		case 14:
			return 2;
		
		default:
	}
	return 0;
}

bool func_381(int iParam0, int iParam1)
{
	return func_380(iParam0, iParam1) > 0;
}

int func_382(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 8;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 2:
					iVar0 += 10;
					break;
				
				case 3:
					iVar0 += 10;
					break;
				
				case 4:
					iVar0 += 14;
					break;
				
				case 5:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			iVar0 += 20;
			break;
		
		case 14:
			iVar0 += 19;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 6;
					break;
				
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 17;
					break;
			}
			break;
		
		case 6:
			iVar0 += 8;
			break;
		
		case 5:
			iVar0 += 11;
			break;
		
		case 0:
			iVar0 += 12;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0++;
					break;
				
				case 32:
					iVar0 += 7;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 12:
			iVar0 += 30;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					iVar0 += 10;
					break;
				
				case 29:
					iVar0 += 8;
					break;
				
				case 30:
					iVar0 += 9;
					break;
			}
			break;
		
		case 3:
			iVar0 += 19;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 12;
					break;
				
				case 13:
					iVar0 += 14;
					break;
				
				case 14:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam2)
	{
		if (func_386(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_383(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_383(int iParam0, int iParam1)
{
	if (func_386(iParam0, iParam1))
	{
		return (func_385(iParam0, iParam1) + func_384(iParam0, iParam1));
	}
	return 0;
}

int func_384(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

int func_385(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

bool func_386(int iParam0, int iParam1)
{
	return func_385(iParam0, iParam1) > 0;
}

int func_387(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 14;
		
		case 1:
			return 7;
		
		case 2:
			return 27;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			switch (iParam1)
			{
				case 0:
				case 2:
					return 11;
				
				case 1:
					return 9;
				
				default:
			}
			break;
	}
	return 0;
}

int func_388(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
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
					iVar0 += 19;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 9;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 80:
				case 81:
				case 82:
					iVar0 += 3;
					break;
			}
			break;
		
		case 22:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0 += 3;
			break;
		
		case 20:
			iVar0 += 12;
			break;
		
		case 18:
			iVar0 += 20;
			break;
		
		case 17:
			iVar0 += 9;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 5;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 17;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 1:
			iVar0 += 30;
			break;
		
		case 2:
			iVar0 += 4;
			break;
		
		case 5:
			iVar0 += 16;
			break;
	}
	return iVar0;
}

int func_389()
{
	int iVar0;
	
	iVar0 = 32;
	return iVar0;
}

int func_390()
{
	int iVar0;
	
	iVar0 = 8;
	return iVar0;
}

int func_391(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 16;
					break;
				
				case 2:
					iVar0 += 14;
					break;
				
				case 3:
					iVar0 += 13;
					break;
				
				case 4:
					iVar0 += 12;
					break;
				
				case 5:
					iVar0 += 12;
					break;
				
				case 6:
					iVar0 += 12;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 12;
					break;
				
				case 8:
					iVar0 += 12;
					break;
				
				case 9:
					iVar0 += 12;
					break;
				
				case 10:
					iVar0 += 12;
					break;
				
				case 11:
					iVar0 += 12;
					break;
				
				case 12:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 17;
					break;
				
				case 14:
					iVar0 += 12;
					break;
				
				case 15:
					iVar0 += 13;
					break;
				
				case 16:
					iVar0 += 14;
					break;
				
				case 17:
					iVar0 += 12;
					break;
				
				case 18:
					iVar0 += 14;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 14;
					break;
				
				case 20:
					iVar0 += 14;
					break;
				
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
				
				case 24:
					iVar0 += 14;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					iVar0 += 4;
					break;
				
				case 26:
					iVar0 += 4;
					break;
				
				case 27:
					iVar0 += 4;
					break;
				
				case 28:
					iVar0 += 4;
					break;
				
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 13;
					break;
				
				case 32:
					iVar0 += 13;
					break;
				
				case 33:
					iVar0 += 13;
					break;
				
				case 34:
					iVar0 += 13;
					break;
				
				case 35:
					iVar0 += 13;
					break;
				
				case 36:
					iVar0 += 13;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0 += 10;
					break;
				
				case 75:
					iVar0 += 10;
					break;
				
				case 76:
					iVar0 += 10;
					break;
				
				case 77:
					iVar0 += 10;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 += 3;
					break;
				
				case 79:
					iVar0 += 3;
					break;
				
				case 80:
					iVar0 += 3;
					break;
				
				case 81:
					iVar0 += 3;
					break;
				
				case 82:
					iVar0 += 5;
					break;
				
				case 83:
					iVar0 += 3;
					break;
				
				case 84:
					iVar0 += 3;
					break;
			}
			break;
		
		case 7:
			iVar0 += 8;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 8;
					break;
				
				case 63:
					iVar0 += 8;
					break;
				
				case 64:
					iVar0 += 8;
					break;
				
				case 65:
					iVar0 += 8;
					break;
				
				case 66:
					iVar0 += 8;
					break;
				
				case 67:
					iVar0 += 8;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 += 3;
					break;
				
				case 86:
					iVar0 += 3;
					break;
				
				case 87:
					iVar0 += 3;
					break;
				
				case 88:
					iVar0 += 3;
					break;
				
				case 89:
					iVar0 += 3;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 18;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 8;
					break;
				
				case 39:
					iVar0 += 8;
					break;
				
				case 40:
					iVar0 += 8;
					break;
				
				case 41:
					iVar0 += 8;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if (iParam0 == 12 || iParam0 == 9)
	{
		iVar0 = (iVar0 + func_283(iParam0, func_287() + 1));
	}
	return iVar0;
}

int func_392(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 14;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 3:
			iVar0 += 23;
			break;
		
		case 4:
			iVar0 += 20;
			break;
		
		case 5:
			iVar0 += 5;
			break;
		
		case 8:
			iVar0 += 11;
			break;
		
		case 6:
			iVar0 += 7;
			break;
		
		case 12:
			iVar0 += 8;
			break;
		
		case 7:
			iVar0 += 18;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 12;
			break;
		
		case 13:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 16;
			break;
	}
	if (!bParam3)
	{
		if (func_396(iParam0))
		{
			iVar0 = (iVar0 + func_393(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_393(int iParam0, var uParam1)
{
	if (func_396(iParam0))
	{
		return (func_395(iParam0) + func_394(iParam0, uParam1));
	}
	return 0;
}

int func_394(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 2:
		case 12:
		case 1:
		case 11:
		case 10:
			return 2;
		
		case 8:
			return 4;
		
		default:
	}
	return 0;
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 8:
		case 1:
		case 12:
		case 10:
		case 11:
		case 13:
			return 2;
		
		default:
	}
	return 0;
}

bool func_396(int iParam0)
{
	return func_395(iParam0) > 0;
}

int func_397(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			iVar0 += 16;
			break;
		
		case 11:
			iVar0 += 21;
			break;
		
		case 1:
			iVar0 += 4;
			break;
		
		case 14:
			iVar0 += 15;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 15;
			break;
		
		case 4:
			iVar0 += 9;
			break;
		
		case 10:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 7;
			break;
		
		case 8:
			iVar0 += 2;
			break;
		
		case 5:
			iVar0 += 10;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 7:
					iVar0 += 17;
					break;
				
				default:
					iVar0 += 16;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 10;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 26:
			iVar0 += 2;
			break;
	}
	if (!bParam3)
	{
		if (func_401(iParam0))
		{
			iVar0 = (iVar0 + func_398(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_398(int iParam0, int iParam1)
{
	if (func_401(iParam0))
	{
		return (func_400(iParam0) + func_399(iParam0, iParam1));
	}
	return 0;
}

int func_399(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
		case 14:
		case 2:
		case 10:
		case 5:
			return 2;
		
		case 1:
		case 0:
			return 4;
		
		case 4:
			return 1;
		
		case 12:
			switch (iParam1)
			{
				case 2:
					return 2;
				
				default:
			}
			break;
		
		case 21:
			return 2;
		
		case 17:
			return 4;
	}
	return 0;
}

int func_400(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 11:
		case 1:
		case 2:
		case 14:
		case 4:
		case 10:
		case 7:
		case 3:
		case 8:
		case 0:
		case 5:
			return 2;
		
		case 21:
		case 16:
		case 17:
			return 2;
		
		default:
	}
	return 0;
}

bool func_401(int iParam0)
{
	return func_400(iParam0) > 0;
}

int func_402(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 18;
					break;
				
				case 1:
					iVar0 += 18;
					break;
				
				case 2:
					iVar0 += 18;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 4;
					break;
				
				case 10:
					iVar0 += 4;
					break;
				
				case 11:
					iVar0 += 4;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 13:
					iVar0 += 20;
					break;
				
				case 14:
					iVar0 += 20;
					break;
				
				case 15:
					iVar0 += 20;
					break;
			}
			break;
		
		case 5:
			iVar0 += 12;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 24;
					break;
				
				case 20:
					iVar0 += 24;
					break;
				
				case 21:
					iVar0 += 24;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 12;
					break;
				
				case 23:
					iVar0 += 12;
					break;
				
				case 24:
					iVar0 += 12;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 16;
					break;
				
				case 26:
					iVar0 += 15;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 25;
					break;
				
				case 28:
					iVar0 += 25;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 15;
					break;
				
				case 30:
					iVar0 += 15;
					break;
				
				case 31:
					iVar0 += 15;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 12;
					break;
				
				case 33:
					iVar0 += 12;
					break;
				
				case 34:
					iVar0 += 12;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 22;
					break;
				
				case 36:
					iVar0 += 22;
					break;
				
				case 37:
					iVar0 += 22;
					break;
			}
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 20:
			iVar0 += 22;
			break;
	}
	if (!bParam3)
	{
		if (func_406(iParam0))
		{
			iVar0 = (iVar0 + func_403(iParam0));
		}
	}
	return iVar0;
}

int func_403(int iParam0)
{
	if (func_406(iParam0))
	{
		return (func_405(iParam0) + func_404(iParam0));
	}
	return 0;
}

int func_404(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 12:
		case 13:
		case 17:
		case 11:
			return 2;
		
		case 15:
		case 16:
		case 19:
			return 3;
		
		case 10:
		case 8:
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_405(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 19:
		case 8:
			return 2;
		
		default:
	}
	return 0;
}

bool func_406(int iParam0)
{
	return func_405(iParam0) > 0;
}

int func_407(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 6;
			break;
		
		case 2:
			iVar0 += 10;
			break;
		
		case 12:
			iVar0 += 11;
			break;
		
		case 13:
			iVar0 += 10;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 12;
					break;
				
				case 2:
					iVar0 += 12;
					break;
				
				case 3:
					iVar0 += 12;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 8;
					break;
				
				case 19:
					iVar0 += 8;
					break;
				
				case 20:
					iVar0 += 8;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 14;
					break;
				
				case 28:
					iVar0 += 14;
					break;
				
				case 29:
					iVar0 += 14;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 3;
					break;
				
				case 31:
					iVar0 += 3;
					break;
				
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 18;
					break;
				
				case 37:
					iVar0 += 18;
					break;
				
				case 38:
					iVar0 += 18;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 10;
					break;
				
				case 43:
					iVar0 += 10;
					break;
				
				case 44:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 17;
					break;
				
				case 46:
					iVar0 += 17;
					break;
				
				case 47:
					iVar0 += 17;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 11;
					break;
				
				case 49:
					iVar0 += 11;
					break;
				
				case 50:
					iVar0 += 11;
					break;
			}
			break;
	}
	iVar0 = (iVar0 + func_408(iParam0));
	return iVar0;
}

int func_408(int iParam0)
{
	if (func_410(iParam0))
	{
		if (func_409(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_409(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_410(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_411(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		case 4:
			return 12;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 2;
		
		case 8:
			return 12;
		
		case 9:
			return 12;
		
		case 10:
			return 9;
		
		case 11:
			return 8;
		
		case 12:
			return 7;
		
		case 13:
			return 5;
		
		case 14:
			return 12;
		
		case 15:
			return 13;
		
		case 16:
			return 5;
		
		case 17:
			return 15;
		
		case 19:
			return 4;
		
		case 18:
			return 11;
		
		default:
	}
	return 8;
}

float func_412()
{
	switch (func_16())
	{
		case 3:
			return 124.5999f;
		
		case 4:
			return 124.5999f;
		
		case 5:
			return 124.5999f;
		
		case 7:
			return 124.5999f;
		
		default:
	}
	return 124.5999f;
}

Vector3 func_413()
{
	bool bVar0;
	
	switch (func_16())
	{
		case 6:
			bVar0 = false;
			while (bVar0 < func_235())
			{
				if (BitTest(Local_185.f_134[0], bVar0))
				{
					return func_414(func_16(), bVar0, Local_185.f_679, 0, 0, 0);
				}
				bVar0++;
			}
			break;
		
		case 3:
			return 1678.634f, 2307.834f, 74.3844f;
		
		case 4:
			return 1678.634f, 2307.834f, 74.3844f;
		
		case 5:
			return 1678.634f, 2307.834f, 74.3844f;
		
		case 7:
			return 1678.634f, 2307.834f, 74.3844f;
	}
	return 1678.634f, 2307.834f, 74.3844f;
}

Vector3 func_414(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	switch (iParam0)
	{
		case 4:
			if (func_247())
			{
				switch (bParam1)
				{
					case 0:
						return 2855.103f, 4562.412f, 45.9071f;
					
					case 1:
						return 3316.973f, 5172.291f, 17.4618f;
					
					case 2:
						return 2708.735f, 4135.479f, 42.8745f;
					
					case 3:
						return 2053.613f, 3166.031f, 44.2098f;
					
					case 4:
						return 863.7849f, 3679.312f, 31.561f;
					
					case 5:
						return 883.5331f, 2849.854f, 55.6733f;
					
					case 6:
						return 164.7644f, 3114.52f, 41.4837f;
					
					case 7:
						return 1745.003f, 6410.566f, 34.2547f;
					
					case 8:
						return 750.2117f, 4188.375f, 39.7546f;
					
					case 9:
						return 759.8706f, 6460.903f, 30.5887f;
					
					case 10:
						return -744.3207f, 5550.492f, 32.5851f;
					
					case 11:
						return -1584.256f, 5155.391f, 18.6781f;
					
					case 12:
						return -135.6222f, 4617.994f, 124.5161f;
					
					case 13:
						return 161.2865f, 2232.68f, 89.151f;
					
					case 14:
						return 1603.276f, 6631.872f, 14.4338f;
					
					case 15:
						return -205.1835f, 3657.763f, 50.8854f;
					
					case 16:
						return 1624.065f, 3518.677f, 36.1863f;
					
					case 17:
						return 1263.991f, 1922.317f, 77.6406f;
					
					case 18:
						return -777.9739f, 5399.38f, 33.3171f;
					
					case 19:
						return 2496.155f, 2601.807f, 41.9696f;
					
					default:
				}
			}
			else
			{
				switch (bParam1)
				{
					case 0:
						return -885.3888f, 265.3505f, 74.0379f;
					
					case 1:
						return -397.254f, -128.9808f, 37.5323f;
					
					case 2:
						return -839.3116f, -1054.739f, 9.6889f;
					
					case 3:
						return -1163.028f, -325.2383f, 36.6153f;
					
					case 4:
						return -162.2476f, -1457.61f, 30.6858f;
					
					case 5:
						return 572.7383f, 117.3382f, 97.0415f;
					
					case 6:
						return 888.4307f, -2209.773f, 29.5121f;
					
					case 7:
						return -3050.054f, 107.81f, 11.3462f;
					
					case 8:
						return 433.4743f, -1968.39f, 22.185f;
					
					case 9:
						return 1284.758f, -1597.166f, 53.2252f;
					
					case 10:
						return -1540.827f, -945.9845f, 10.5661f;
					
					case 11:
						return -2018.422f, 562.5836f, 107.1442f;
					
					case 12:
						return 262.0412f, 896.3593f, 208.2672f;
					
					case 13:
						return -1037.813f, -1592.409f, 4.0178f;
					
					case 14:
						return -1653.934f, 241.1802f, 61.5274f;
					
					case 15:
						return -1954.19f, -277.441f, 41.1101f;
					
					case 16:
						return 1691.062f, -1604.99f, 111.6066f;
					
					case 17:
						return -427.6465f, 1201.215f, 324.8949f;
					
					case 18:
						return 1667.233f, -71.2133f, 172.4527f;
					
					case 19:
						return 1430.251f, -2605.631f, 47.2306f;
					}
				
				default:
			}
			break;
		
		case 5:
			if (func_247())
			{
				if (bParam5)
				{
					switch (bParam1)
					{
						case 0:
							return 2617.898f, 1693.1f, 26.5987f;
						
						case 1:
							return -1090.493f, 2714.866f, 18.0742f;
						
						case 2:
							return 957.9468f, 3618.776f, 31.68f;
						
						case 3:
							return 1584.342f, 2905.573f, 55.9087f;
						
						case 4:
							return 2709.535f, 3452.487f, 54.5399f;
						
						case 5:
							return 2720.387f, 4285.945f, 46.259f;
						
						case 6:
							return 1879.329f, 3920.308f, 32.1766f;
						
						case 7:
							return 1683.182f, 4689.506f, 42.0657f;
						
						case 8:
							return 3323.277f, 5165.221f, 17.382f;
						
						case 9:
							return 6.1407f, 3037.272f, 39.8761f;
						
						case 10:
							return 1534.667f, 2231.99f, 76.704f;
						
						case 11:
							return 733.3676f, 2523.386f, 72.2238f;
						
						case 12:
							return -90.154f, 1982.596f, 182.0488f;
						
						case 13:
							return 3680.798f, 4497.241f, 23.1072f;
						
						case 14:
							return 1591.857f, 6449.925f, 24.3172f;
						
						case 15:
							return 2336.251f, 2603.98f, 45.6676f;
						
						default:
					}
				}
				else
				{
					switch (bParam1)
					{
						case 0:
							return 2631.274f, 1649.57f, 25.4685f;
						
						case 1:
							return -1092.811f, 2694.719f, 18.9463f;
						
						case 2:
							return 950.2559f, 3626.43f, 31.3657f;
						
						case 3:
							return 1591.962f, 2883.801f, 56.1303f;
						
						case 4:
							return 2698.547f, 3436.816f, 54.8121f;
						
						case 5:
							return 2712.809f, 4264.86f, 46.1423f;
						
						case 6:
							return 1870.197f, 3916.849f, 31.9349f;
						
						case 7:
							return 1703.267f, 4693.022f, 41.8364f;
						
						case 8:
							return 3315.757f, 5147.607f, 17.283f;
						
						case 9:
							return -6.2277f, 3022.219f, 39.6263f;
						
						case 10:
							return 1525.615f, 2225.177f, 75.2f;
						
						case 11:
							return 748.7995f, 2510.56f, 72.2693f;
						
						case 12:
							return -94.5431f, 1998.215f, 181.7387f;
						
						case 13:
							return 3663.342f, 4485.44f, 27.443f;
						
						case 14:
							return 1584.454f, 6442.569f, 24.056f;
						
						case 15:
							return 2325.668f, 2620.542f, 45.6226f;
						}
					
					default:
				}
			}
			else if (bParam5)
			{
				switch (bParam1)
				{
					case 0:
						return -3186.419f, 1273.716f, 11.642f;
					
					case 1:
						return -2973.857f, 642.226f, 24.7975f;
					
					case 2:
						return -1995.021f, 590.951f, 116.9083f;
					
					case 3:
						return -895.774f, -4.552f, 42.8039f;
					
					case 4:
						return -494.924f, 796.746f, 183.3535f;
					
					case 5:
						return 212.151f, -102.686f, 72.2853f;
					
					case 6:
						return 988.117f, -433.602f, 62.8957f;
					
					case 7:
						return 1193.099f, -1623.448f, 44.2215f;
					
					case 8:
						return 418.036f, -1735.894f, 28.6077f;
					
					case 9:
						return -46.345f, -1446.107f, 31.4346f;
					
					case 10:
						return 371.531f, -827.181f, 28.2927f;
					
					case 11:
						return -238.559f, -773.351f, 33.0967f;
					
					case 12:
						return -1642.121f, -412.467f, 41.0739f;
					
					case 13:
						return -743.009f, -981.219f, 16.0549f;
					
					case 14:
						return -240.619f, 381.349f, 111.4326f;
					
					case 15:
						return 1271.058f, -682.863f, 65.0367f;
					
					default:
				}
			}
			else
			{
				switch (bParam1)
				{
					case 0:
						return -3164.946f, 1268.854f, 11.3158f;
					
					case 1:
						return -2993.823f, 637.489f, 20.086f;
					
					case 2:
						return -1973.286f, 579.597f, 115.8f;
					
					case 3:
						return -873.85f, 2.024f, 42.843f;
					
					case 4:
						return -480.775f, 799.763f, 179.956f;
					
					case 5:
						return 206.093f, -111.377f, 67.88f;
					
					case 6:
						return 1005.416f, -443.672f, 63.059f;
					
					case 7:
						return 1198.257f, -1630.183f, 43.671f;
					
					case 8:
						return 407.584f, -1730.363f, 28.282f;
					
					case 9:
						return -48.583f, -1459.337f, 30.825f;
					
					case 10:
						return 358.6393f, -838.0125f, 28.3194f;
					
					case 11:
						return -248.987f, -768.004f, 31.764f;
					
					case 12:
						return -1629.561f, -419.992f, 38.824f;
					
					case 13:
						return -744.481f, -969.493f, 15.994f;
					
					case 14:
						return -259.168f, 398.993f, 108.896f;
					
					case 15:
						return 1288.041f, -680.553f, 64.778f;
					}
				
				default:
			}
			break;
		
		case 7:
			if (func_247())
			{
				switch (bParam1)
				{
					case 0:
						return 2357.599f, 2530.103f, 45.6678f;
					
					case 1:
						return 2373.432f, 2572.65f, 45.6677f;
					
					case 2:
						return 2184.702f, 3511.679f, 44.4123f;
					
					case 3:
						return 2170.231f, 3504.068f, 44.5259f;
					
					case 4:
						return 860.169f, 2849.632f, 56.4467f;
					
					case 5:
						return 870.8168f, 2867.49f, 55.8524f;
					
					case 6:
						return 413.1571f, 2985.396f, 39.6084f;
					
					case 7:
						return 393.024f, 2990.384f, 39.7003f;
					
					case 8:
						return -492.9596f, 6266.186f, 11.1948f;
					
					case 9:
						return -447.8156f, 6350.244f, 11.6295f;
					
					default:
				}
			}
			else
			{
				switch (bParam1)
				{
					case 0:
						return -1178.041f, -1576.642f, 3.3286f;
					
					case 1:
						return -1136.833f, -352.7127f, 36.6737f;
					
					case 2:
						return -1139.65f, -320.505f, 36.6735f;
					
					case 3:
						return -18.236f, -216.3413f, 45.1815f;
					
					case 4:
						return 32.7873f, -211.881f, 51.8573f;
					
					case 5:
						return -1290.927f, -276.2561f, 37.8304f;
					
					case 6:
						return -1223.535f, -1320.985f, 3.3066f;
					
					case 7:
						return -1204.813f, -1333.181f, 3.8196f;
					
					case 8:
						return -1119.227f, -1606.902f, 3.3277f;
					
					case 9:
						return -121.8735f, -364.7843f, 35.3104f;
					}
				
				default:
			}
			break;
		
		case 3:
			if (func_247())
			{
				switch (bParam1)
				{
					case 0:
						return 1946.553f, 3848.936f, 31.173f;
					
					case 1:
						return 1841.062f, 3895.484f, 32.2833f;
					
					case 2:
						return 1560.217f, 3800.145f, 33.2544f;
					
					case 3:
						return 1588.55f, 2900.709f, 56.058f;
					
					case 4:
						return 1409.915f, 2167.996f, 96.5534f;
					
					case 5:
						return 1309.234f, 1110.166f, 104.6029f;
					
					case 6:
						return -1138.139f, 2676.507f, 17.0939f;
					
					case 7:
						return -255.5927f, 2185.608f, 129.4257f;
					
					case 8:
						return 163.042f, 2232.03f, 89.145f;
					
					case 9:
						return 215.6581f, 3040.218f, 41.2306f;
					
					case 10:
						return 518.198f, 3081.815f, 39.56f;
					
					case 11:
						return 1026.597f, 2654.781f, 38.5511f;
					
					case 12:
						return 470.1515f, 2613.429f, 42.1769f;
					
					case 13:
						return 2166.767f, 3359.911f, 44.514f;
					
					case 14:
						return 1764.448f, 3309.967f, 40.1595f;
					
					case 15:
						return 650.7023f, 3502.217f, 33.1276f;
					
					case 16:
						return 807.696f, 2180.311f, 51.2812f;
					
					case 17:
						return 1529.466f, 1724.381f, 109.119f;
					
					case 18:
						return 1412.718f, 3614.222f, 33.912f;
					
					case 19:
						return -39.492f, 2857.8f, 58.224f;
					
					case 20:
						return 2727.714f, 4291.594f, 47.3187f;
					
					case 21:
						return 2523.709f, 4213.176f, 38.934f;
					
					case 22:
						return 1963.682f, 4638.882f, 39.7992f;
					
					case 23:
						return 1681.745f, 4680.968f, 42.0554f;
					
					case 24:
						return 1709.24f, 4714f, 41.3369f;
					
					case 25:
						return 1687.665f, 4971.679f, 41.773f;
					
					case 26:
						return 1905.494f, 4924.755f, 47.902f;
					
					case 27:
						return 1600.131f, 6447.809f, 24.268f;
					
					case 28:
						return 1074.053f, 6507.302f, 19.959f;
					
					case 29:
						return 406.933f, 6641.465f, 27.304f;
					
					case 30:
						return -11.297f, 6613.899f, 30.393f;
					
					case 31:
						return -157.479f, 6450.529f, 30.441f;
					
					case 32:
						return -110.5607f, 6251.098f, 30.2798f;
					
					case 33:
						return -425.5597f, 6208.72f, 29.9159f;
					
					case 34:
						return -773.2371f, 5531.055f, 32.4779f;
					
					case 35:
						return -841.17f, 5406.444f, 33.615f;
					
					case 36:
						return 2237.801f, 5161.438f, 58.2713f;
					
					case 37:
						return 1421.668f, 4368.633f, 43.304f;
					
					case 38:
						return 763.354f, 4176.299f, 39.58f;
					
					case 39:
						return 2540.658f, 4677.303f, 32.779f;
					
					default:
				}
			}
			else
			{
				switch (bParam1)
				{
					case 0:
						return 467.219f, -1540.298f, 28.293f;
					
					case 1:
						return -1311.157f, -598.695f, 27.296f;
					
					case 2:
						return -1021.564f, -1127.712f, 1.1025f;
					
					case 3:
						return -634.427f, -1223.875f, 11.136f;
					
					case 4:
						return -599.348f, 175.415f, 64.207f;
					
					case 5:
						return -705.872f, -302.134f, 35.751f;
					
					case 6:
						return 3.266f, -1824.835f, 24.368f;
					
					case 7:
						return -356.377f, 81.446f, 62.787f;
					
					case 8:
						return 455.4892f, -725.7125f, 26.3591f;
					
					case 9:
						return -1306.995f, -168.6501f, 43.0315f;
					
					case 10:
						return -22.5962f, 215.1706f, 105.5648f;
					
					case 11:
						return 971.0678f, -633.0916f, 56.4665f;
					
					case 12:
						return 1397.159f, -1535.653f, 56.7074f;
					
					case 13:
						return 852.9148f, -2307.143f, 29.3404f;
					
					case 14:
						return 475.8266f, -1062.647f, 28.2115f;
					
					case 15:
						return -1966.061f, -500.5934f, 10.826f;
					
					case 16:
						return -307.141f, -275.295f, 30.389f;
					
					case 17:
						return 315.878f, -181.709f, 56.382f;
					
					case 18:
						return -246.67f, -774.785f, 31.459f;
					
					case 19:
						return -109.298f, -1458.554f, 32.464f;
					
					case 20:
						return -1017.321f, 504.8095f, 78.4535f;
					
					case 21:
						return -1630.454f, 81.513f, 61.2486f;
					
					case 22:
						return -1514.633f, -413.2709f, 34.597f;
					
					case 23:
						return -1428.564f, -649.4637f, 27.6734f;
					
					case 24:
						return -663.382f, -967.998f, 20.1988f;
					
					case 25:
						return -572.2941f, -858.0829f, 25.2536f;
					
					case 26:
						return -82.0467f, -1315.419f, 28.2145f;
					
					case 27:
						return 488.1603f, -1278.896f, 28.4124f;
					
					case 28:
						return 1268.753f, -1583.315f, 51.6875f;
					
					case 29:
						return 159.3053f, -1816.814f, 27.2342f;
					
					case 30:
						return 953.2253f, -1719.283f, 29.6613f;
					
					case 31:
						return -759.6809f, 365.0873f, 86.8667f;
					
					case 32:
						return 1244.374f, -346.5426f, 68.0822f;
					
					case 33:
						return 414.6804f, -2067.89f, 20.4995f;
					
					case 34:
						return -313.8132f, -1537.828f, 26.6973f;
					
					case 35:
						return -1263.321f, -1373.731f, 3.1453f;
					
					case 36:
						return -3049.436f, 173.3395f, 10.6054f;
					
					case 37:
						return 1384.91f, -2044.364f, 50.9985f;
					
					case 38:
						return -154.4409f, 987.5869f, 233.9823f;
					
					case 39:
						return 149.4402f, -2400.073f, 5.0003f;
					}
				
				default:
			}
			break;
		
		case 6:
			if (func_41() && !bParam4)
			{
				return func_415();
			}
			else if (func_247())
			{
				switch (iParam2)
				{
					case 0:
						return 307.7284f, 2890.268f, 42.4904f;
					
					case 1:
						return 2350.718f, 3035.847f, 47.1521f;
					
					case 2:
						return 283.8634f, 6782.829f, 14.6962f;
					
					case 3:
						return 2697.257f, 4312.563f, 44.852f;
					
					case 4:
						return 1694.117f, 6427.723f, 31.6272f;
					
					default:
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						return 1128.363f, -644.7004f, 55.7914f;
					
					case 1:
						return -815.2786f, 48.4003f, 47.6111f;
					
					case 2:
						return -96.7229f, -419.5907f, 35.3127f;
					
					case 3:
						return -1315.46f, -767.4545f, 19.1859f;
					
					case 4:
						return -425.1262f, 1124.943f, 324.8532f;
					}
				
				default:
			}
			break;
		
		case 10:
			if (func_247())
			{
				switch (bParam1)
				{
					case 0:
						return 2660.42f, 3275.803f, 54.241f;
					
					case 1:
						return 863.122f, 2147.322f, 51.453f;
					
					case 2:
						return 1479.641f, 2718.687f, 36.858f;
					
					case 3:
						return 2982.01f, 3489.064f, 70.3823f;
					
					case 4:
						return -2503.177f, 3614.475f, 13.0208f;
					
					case 5:
						return -1087.905f, 2713.253f, 18.074f;
					
					case 6:
						return 1979.431f, 3708.85f, 31.121f;
					
					case 7:
						return -251.122f, 2190.708f, 128.991f;
					
					case 8:
						return 1514.374f, 1830.64f, 105.641f;
					
					case 9:
						return 3352.5f, 5552.192f, 17.1629f;
					
					case 10:
						return 165.549f, 3113.142f, 41.495f;
					
					case 11:
						return 1481.549f, 3674.336f, 33.339f;
					
					case 12:
						return 1738.479f, 3040.162f, 60.388f;
					
					case 13:
						return 2529.567f, 2617.236f, 36.945f;
					
					case 14:
						return 2715.349f, 4132.248f, 42.899f;
					
					case 15:
						return 2288.987f, 4968.037f, 40.583f;
					
					case 16:
						return 352.369f, 4420.294f, 62.74f;
					
					case 17:
						return -838.502f, 5403.729f, 33.614f;
					
					case 18:
						return -1492.637f, 4981.798f, 62.115f;
					
					case 19:
						return 1603.832f, 6451.723f, 24.159f;
					
					default:
				}
			}
			else
			{
				switch (bParam1)
				{
					case 0:
						return -1675.335f, -1069.808f, 12.1536f;
					
					case 1:
						return 1927.203f, -974.9163f, 77.7849f;
					
					case 2:
						return -63.5708f, -2248.542f, 6.8122f;
					
					case 3:
						return -516.0604f, -294.2748f, 34.2238f;
					
					case 4:
						return 795.0582f, -78.4309f, 79.5934f;
					
					case 5:
						return -886.8562f, -2104.292f, 7.8599f;
					
					case 6:
						return 770.206f, -1892.954f, 28.264f;
					
					case 7:
						return 1251.037f, -601.1376f, 68.2468f;
					
					case 8:
						return 262.5444f, -1347.44f, 30.9188f;
					
					case 9:
						return -279.5683f, -1064.715f, 24.801f;
					
					case 10:
						return -105.1761f, -1602.351f, 30.7514f;
					
					case 11:
						return -816.12f, -744.9531f, 22.5518f;
					
					case 12:
						return -3080.962f, 365.9827f, 6.1309f;
					
					case 13:
						return -1124.677f, 378.6771f, 69.6817f;
					
					case 14:
						return -500.1782f, -44.6982f, 43.5184f;
					
					case 15:
						return 299.6276f, -189.955f, 60.5704f;
					
					case 16:
						return 1501.391f, -2522.427f, 54.8799f;
					
					case 17:
						return 223.8582f, 679.4021f, 188.368f;
					
					case 18:
						return 883.8307f, -1021.679f, 31.6119f;
					
					case 19:
						return 2569.21f, 479.7553f, 107.5291f;
					}
				
				default:
			}
			break;
		
		case 12:
			if (func_247())
			{
				switch (bParam1)
				{
					case 0:
						return 2687.867f, 2764.891f, 36.883f;
					
					case 1:
						return 856.8327f, 2375.369f, 54.3039f;
					
					case 2:
						return 2468.765f, 3428.797f, 49.0652f;
					
					case 3:
						return 1611.757f, 3718.708f, 33.2478f;
					
					case 4:
						return 433.4957f, 3088.647f, 41.1607f;
					
					case 5:
						return 2649.519f, 4257.31f, 43.7585f;
					
					case 6:
						return 1971.375f, 4646.429f, 40.0244f;
					
					case 7:
						return 1582.152f, 6441.181f, 23.9314f;
					
					case 8:
						return -50.9144f, 6586.478f, 30.0231f;
					
					case 9:
						return -576.7059f, 5329.034f, 69.2571f;
					
					default:
				}
			}
			else
			{
				switch (bParam1)
				{
					case 0:
						return -719.5996f, -2228.105f, 4.9328f;
					
					case 1:
						return -26.5003f, -1678.823f, 28.4612f;
					
					case 2:
						return 861.2762f, -2118.541f, 29.6091f;
					
					case 3:
						return -781.009f, -809.6935f, 19.8545f;
					
					case 4:
						return -366.3344f, 30.9147f, 46.9221f;
					
					case 5:
						return 805.3323f, -282.7911f, 65.4618f;
					
					case 6:
						return 1195.717f, -1264.772f, 34.2194f;
					
					case 7:
						return 332.2172f, -999.6744f, 28.2362f;
					
					case 8:
						return -1862.213f, -304.8989f, 48.1449f;
					
					case 9:
						return -896.0381f, -1493.916f, 4.024f;
					}
				
				default:
			}
			break;
		
		case 11:
			if (func_247())
			{
				switch (iParam2)
				{
					case 0:
						return 2565.312f, 1814.683f, 23.3794f;
					
					case 1:
						return -1608.012f, 3169.268f, 29.1f;
					
					case 2:
						return 2828.495f, 1635.059f, 23.5566f;
					
					case 3:
						return 3777.259f, 4487.087f, 5.4462f;
					
					case 4:
						return 1522.381f, 818.6603f, 76.4634f;
					
					case 5:
						return -2991.825f, 3451.685f, 8.592f;
					
					case 6:
						return -1631.712f, 4731.057f, 51.9242f;
					
					case 7:
						return -1914.684f, 2032.754f, 139.7386f;
					
					case 8:
						return -2201.572f, 4257.217f, 46.778f;
					
					case 9:
						return 3341.94f, 5488.945f, 19.0216f;
					
					default:
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						return -2960.671f, 442.2663f, 14.2607f;
					
					case 1:
						return -1545.139f, 860.0988f, 180.4627f;
					
					case 2:
						return -3142.278f, 1174.544f, 19.3651f;
					
					case 3:
						return 1921.121f, 579.848f, 174.533f;
					
					case 4:
						return -1534.198f, 1383.84f, 123.8455f;
					
					case 5:
						return 1328.659f, 1255.887f, 104.7663f;
					
					case 6:
						return -509.8177f, 1186.702f, 323.8416f;
					
					case 7:
						return 2739.774f, -700.0862f, 9.7813f;
					
					case 8:
						return 754.2864f, 1196.157f, 325.3212f;
					
					case 9:
						return 1521.29f, 1597.869f, 110.6245f;
					}
				
				default:
			}
			break;
		
		case 8:
			if (func_247())
			{
				switch (bParam1)
				{
					case 0:
						return -638.0535f, 6068.018f, 7.2136f;
					
					case 1:
						return 1590.245f, 3900.821f, 31.0911f;
					
					case 2:
						return 1776.08f, 4598.296f, 36.7055f;
					
					case 3:
						return 1647.628f, 3643.323f, 33.988f;
					
					case 4:
						return 879.3905f, 2339.73f, 50.6724f;
					
					case 5:
						return 2685.232f, 2801.472f, 39.2155f;
					
					case 6:
						return -468.9186f, 2971.368f, 25.0515f;
					
					case 7:
						return 1407.428f, 2589.375f, 35.8217f;
					
					case 8:
						return 2680.009f, 3923.716f, 42.1682f;
					
					case 9:
						return 1867.408f, 6407.559f, 45.5299f;
					
					case 10:
						return -2328.752f, 4270.824f, 27.5226f;
					
					case 11:
						return 2456.084f, 1544.487f, 34.0485f;
					
					case 12:
						return 2788.27f, 1408.801f, 23.4383f;
					
					case 13:
						return -3185.082f, 1093.102f, 19.8556f;
					
					case 14:
						return 146.1344f, 2280.448f, 93.797f;
					
					default:
				}
			}
			else
			{
				switch (bParam1)
				{
					case 0:
						return -614.9329f, -2296.941f, 12.8282f;
					
					case 1:
						return -1189.073f, -2789.581f, 12.9444f;
					
					case 2:
						return 271.6261f, -3159.529f, 4.7903f;
					
					case 3:
						return 548.4889f, -2616.263f, 4.704f;
					
					case 4:
						return 1251.333f, -1125.005f, 37.4375f;
					
					case 5:
						return 1072.572f, -2444.221f, 28.2642f;
					
					case 6:
						return -208.6263f, -1091.39f, 20.6892f;
					
					case 7:
						return 108.6183f, -445.3468f, 40.1308f;
					
					case 8:
						return 2550.552f, 442.1817f, 107.4511f;
					
					case 9:
						return -457.7061f, -969.7913f, 22.5454f;
					
					case 10:
						return 76.9457f, -1631.095f, 28.3918f;
					
					case 11:
						return -291.7224f, -1000.2f, 29.3598f;
					
					case 12:
						return 252.3284f, 378.7073f, 104.5296f;
					
					case 13:
						return 29.3364f, -1247.976f, 28.481f;
					
					case 14:
						return -457.6662f, 374.5519f, 103.7792f;
					}
				
				default:
			}
			break;
		
		case 2:
			if (func_247())
			{
				switch (bParam1)
				{
					case 0:
						return -80.1467f, 6508.823f, 40.3666f;
					
					case 1:
						return 3926.47f, 4390.782f, 15.58f;
					
					case 2:
						return -250.693f, 2205.233f, 128.8621f;
					
					case 3:
						return -1175.921f, 4926.93f, 222.3389f;
					
					case 4:
						return 465.6409f, 5593.752f, 779.9684f;
					
					case 5:
						return 2824.871f, 5967.99f, 350.1f;
					
					case 6:
						return -2590.594f, 1883.714f, 170.4922f;
					
					case 7:
						return 589.7837f, 2763.997f, 50.1451f;
					
					case 8:
						return 2685.087f, 3494.802f, 60.5256f;
					
					case 9:
						return -449.2787f, 1588f, 358.0149f;
					
					case 10:
						return 2269.357f, 4844.731f, 39.6032f;
					
					case 11:
						return 1428.51f, 6345.937f, 22.9855f;
					
					case 12:
						return 2100.848f, 2333.275f, 93.2859f;
					
					case 13:
						return 1524.853f, 3785.204f, 40.7334f;
					
					case 14:
						return -2184.298f, 4292.692f, 52.8159f;
					
					default:
				}
			}
			else
			{
				switch (bParam1)
				{
					case 0:
						return 774.4489f, -144.0929f, 87.5073f;
					
					case 1:
						return 798.255f, -2980.762f, 16.7776f;
					
					case 2:
						return -909.593f, -1511.588f, 16.977f;
					
					case 3:
						return -1394.971f, 275.6436f, 88.8643f;
					
					case 4:
						return 2803.231f, 1454.991f, 33.3519f;
					
					case 5:
						return -149.7433f, 935.2665f, 234.6255f;
					
					case 6:
						return -222.1787f, -826.9172f, 125.7931f;
					
					case 7:
						return 788.4523f, -1641.459f, 43.147f;
					
					case 8:
						return -1587.14f, -431.0891f, 55.7093f;
					
					case 9:
						return -2823.246f, 1424.177f, 99.8196f;
					
					case 10:
						return -395.6497f, -343.5754f, 69.9681f;
					
					case 11:
						return -724.5102f, -2269.539f, 87.7333f;
					
					case 12:
						return 335.9479f, -1640.768f, 97.496f;
					
					case 13:
						return -2207.713f, 263.8248f, 197.1092f;
					
					case 14:
						return 948.6151f, -1023.122f, 53.0681f;
					}
				
				default:
			}
			break;
		
		case 1:
			if (func_247())
			{
				switch (bParam1)
				{
					case 0:
						return 2428.537f, 6901.111f, 0.7501f;
					
					case 1:
						return 3288.947f, 6714.458f, 0.5623f;
					
					case 2:
						return 4061.476f, 4959.737f, 0.5624f;
					
					case 3:
						return 4255.996f, 2967.701f, 1.3125f;
					
					case 4:
						return -2899.014f, 2519.655f, 0.5625f;
					
					case 5:
						return -2567.543f, 5183.713f, -0.1875f;
					
					case 6:
						return -1897.267f, 5848.36f, 0.5625f;
					
					case 7:
						return 4.7105f, 7951.589f, -0.1875f;
					
					case 8:
						return 825.3421f, 3897.087f, 29.8125f;
					
					case 9:
						return 3401.506f, 1606.796f, 0.75f;
					
					case 10:
						return -3719.255f, 3505.435f, 0.375f;
					
					case 11:
						return -1259.53f, 7343.129f, 0f;
					
					case 12:
						return 1213.939f, 7390.842f, -1.125f;
					
					case 13:
						return 4440.604f, 6104.917f, 2.25f;
					
					case 14:
						return 2044.866f, 4256.562f, 30.1875f;
					
					default:
				}
			}
			else
			{
				switch (bParam1)
				{
					case 0:
						return 3462.11f, 888.5763f, -0.1875f;
					
					case 1:
						return 3842.867f, -171.3662f, -0.375f;
					
					case 2:
						return 1485.534f, -3655.866f, 0.5625f;
					
					case 3:
						return 409.4799f, -3597.158f, 0.75f;
					
					case 4:
						return -2471.547f, -1730.531f, 0.5625f;
					
					case 5:
						return -2373.452f, -3071.066f, 0.1875f;
					
					case 6:
						return -1920.758f, -3517.675f, -0.75f;
					
					case 7:
						return 3055.372f, -2303.625f, 1.6875f;
					
					case 8:
						return -3749.483f, 988.1151f, 0.5625f;
					
					case 9:
						return 1970.962f, 179.8923f, 160.339f;
					
					case 10:
						return -194.8751f, -3019.768f, 0f;
					
					case 11:
						return -3413.744f, 536.8126f, 0f;
					
					case 12:
						return -2713.849f, -922.2804f, 0f;
					
					case 13:
						return 4061.402f, -1351.123f, 0.1875f;
					
					case 14:
						return 2745.643f, -3239.974f, 0f;
					}
				
				default:
			}
			break;
		
		case 9:
			if (func_247())
			{
				switch (Local_185.f_679)
				{
					case 0:
						switch (bParam1)
						{
							case 0:
								return 808.2712f, 4046.062f, 30.1889f;
							
							case 1:
								return -447.0919f, 4439.109f, 30.0048f;
							
							case 2:
								return -1598.308f, 4390.777f, -0.008f;
							
							case 3:
								return -2514.802f, 4179.379f, -0.048f;
							
							case 4:
								return -3341.245f, 3490.262f, 0.0191f;
							
							default:
						}
						break;
					
					case 1:
						switch (bParam1)
						{
							case 0:
								return -2121.988f, 5038.509f, 0.5625f;
							
							case 1:
								return -1739.635f, 5151.188f, 0.3751f;
							
							case 2:
								return -1509.469f, 5725.465f, 0.1875f;
							
							case 3:
								return -960.0118f, 6100.051f, -0.1875f;
							
							case 4:
								return -425.1715f, 6702.211f, 0f;
							
							default:
						}
						break;
					
					case 2:
						switch (bParam1)
						{
							case 0:
								return 606.3173f, 7342.851f, -0.1875f;
							
							case 1:
								return -169.2163f, 7762.534f, 1.125f;
							
							case 2:
								return -417.715f, 7142.086f, 0.1875f;
							
							case 3:
								return -716.0834f, 6112.288f, -0.1875f;
							
							case 4:
								return -832.1136f, 7014.856f, 0f;
							
							default:
						}
						break;
					
					case 3:
						switch (bParam1)
						{
							case 0:
								return 3967.26f, 4029.916f, 0f;
							
							case 1:
								return 4342.264f, 3667.88f, -0.1875f;
							
							case 2:
								return 3665.222f, 3008.768f, -0.1875f;
							
							case 3:
								return 3709.616f, 2254.444f, 0.1875f;
							
							case 4:
								return 3627.198f, 1661.066f, -0.1875f;
							
							default:
						}
						break;
					
					case 4:
						switch (bParam1)
						{
							case 0:
								return 4066.172f, 5057.345f, 0f;
							
							case 1:
								return 3464.713f, 6143.588f, 0f;
							
							case 2:
								return 3084.776f, 7029.688f, -0.1875f;
							
							case 3:
								return 2188.736f, 7499.77f, 0.2849f;
							
							case 4:
								return 1631.862f, 6822.671f, 0f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (Local_185.f_679)
				{
					case 0:
						switch (bParam1)
						{
							case 0:
								return 3572.305f, -511.0375f, -0.1875f;
							
							case 1:
								return 2941.034f, 175.8028f, 0f;
							
							case 2:
								return 2944.336f, 798.1301f, 0.1874f;
							
							case 3:
								return 3232.803f, 1592.632f, 0.5625f;
							
							case 4:
								return 3120.326f, 2173.747f, 0.3476f;
							
							default:
						}
						break;
					
					case 1:
						switch (bParam1)
						{
							case 0:
								return 2990.769f, -1106.801f, 0.1875f;
							
							case 1:
								return 3297.643f, -1959.072f, 0f;
							
							case 2:
								return 2504.655f, -2305.042f, 1.3125f;
							
							case 3:
								return 1742.406f, -2807.717f, -0.375f;
							
							case 4:
								return 824.868f, -2654.722f, 0.375f;
							
							default:
						}
						break;
					
					case 2:
						switch (bParam1)
						{
							case 0:
								return 1347.839f, -3066.149f, -0.5625f;
							
							case 1:
								return 675.9639f, -3253.626f, 0f;
							
							case 2:
								return 251.1761f, -3645.486f, -0.5625f;
							
							case 3:
								return -220.8856f, -2769.213f, -0.5625f;
							
							case 4:
								return -540.3663f, -2587.373f, 0.1875f;
							
							default:
						}
						break;
					
					case 3:
						switch (bParam1)
						{
							case 0:
								return -1727.458f, -1781.412f, -0.1875f;
							
							case 1:
								return -2155.494f, -938.1028f, 0f;
							
							case 2:
								return -3068f, -484.3531f, 0f;
							
							case 3:
								return -3755.94f, 404.5808f, 0.9375f;
							
							case 4:
								return -3355.572f, 1176.286f, 0.5625f;
							
							default:
						}
						break;
					
					case 4:
						switch (bParam1)
						{
							case 0:
								return -3107.476f, 1547.784f, -0.375f;
							
							case 1:
								return -2527.289f, 2562.024f, -0.1875f;
							
							case 2:
								return -3180.505f, 3368.533f, 0f;
							
							case 3:
								return -2528.755f, 4265.934f, -0.3749f;
							
							case 4:
								return -2108.517f, 5217.124f, 0.375f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 0:
			if (func_247())
			{
				switch (bParam1)
				{
					case 0:
						return 1216.809f, 2390.04f, 64.5991f;
					
					case 1:
						return 2825.74f, 1672.779f, 23.6868f;
					
					case 2:
						return 1558.718f, 3795.329f, 33.1075f;
					
					case 3:
						return -2173.835f, 4271.747f, 47.9632f;
					
					case 4:
						return -2025.131f, 3386.134f, 30.1418f;
					
					case 5:
						return 2734.536f, 2781.955f, 34.9415f;
					
					case 6:
						return 1217.945f, 1842.546f, 78.017f;
					
					case 7:
						return 1424.351f, 4379.483f, 43.1031f;
					
					case 8:
						return 1578.152f, 2200.283f, 78.118f;
					
					case 9:
						return 2385.328f, 3149.508f, 46.1485f;
					
					default:
				}
			}
			else
			{
				switch (bParam1)
				{
					case 0:
						return 1250.311f, -1912.972f, 37.5002f;
					
					case 1:
						return -642.7444f, -1726.98f, 23.4018f;
					
					case 2:
						return -859.8107f, -2411.807f, 12.9444f;
					
					case 3:
						return -1180.418f, -742.4754f, 18.931f;
					
					case 4:
						return -420.3352f, -328.6894f, 32.1081f;
					
					case 5:
						return 178.907f, -1481.625f, 28.1418f;
					
					case 6:
						return 387.9558f, 61.9439f, 96.9779f;
					
					case 7:
						return 1374.406f, -761.5962f, 66.2718f;
					
					case 8:
						return 2555.366f, 406.5885f, 107.455f;
					
					case 9:
						return -3181.745f, 1096.728f, 19.8407f;
					}
				
				default:
			}
			break;
		
		default:
			switch (bParam3)
			{
				case 0:
					switch (bParam1)
					{
						case 0:
							return -1143.777f, -2223.181f, 12.1958f;
						
						case 1:
							return -815.8469f, -771.4702f, 20.0395f;
						
						case 2:
							return -247.3628f, -252.8104f, 35.519f;
						
						case 3:
							return -20.1711f, -196.9198f, 51.3703f;
						
						case 4:
							return -1206.244f, 332.5545f, 69.9894f;
						
						case 5:
							return -737.7712f, -271.9272f, 35.9486f;
						
						case 6:
							return -10.6554f, -1032.781f, 27.9804f;
						
						case 7:
							return 203.926f, -1469.377f, 28.1446f;
						
						case 8:
							return 1242.214f, -3156.207f, 4.5283f;
						
						case 9:
							return -3157.448f, 1127.872f, 19.844f;
						
						case 10:
							return -1805.809f, -406.731f, 43.6066f;
						
						case 11:
							return -2091.808f, -295.2459f, 12.0469f;
						
						case 12:
							return 1499.64f, -1888.19f, 70.8845f;
						
						case 13:
							return 521.9511f, -2731.876f, 5.0571f;
						
						case 14:
							return 620.4022f, 193.6013f, 97.381f;
						
						case 15:
							return -2190.606f, -414.4555f, 12.1441f;
						
						case 16:
							return 2528.09f, -311.8917f, 91.9929f;
						
						case 17:
							return 1475.093f, 1140.771f, 113.3343f;
						
						case 18:
							return -164.1015f, 976.5763f, 234.9009f;
						
						case 19:
							return -125.636f, -2244.66f, 6.8117f;
						
						default:
					}
					break;
				
				case 1:
					switch (bParam1)
					{
						case 0:
							return -1133.386f, -2229.273f, 12.1957f;
						
						case 1:
							return -834.9979f, -771.7531f, 20.0186f;
						
						case 2:
							return -242.6335f, -240.8987f, 35.519f;
						
						case 3:
							return 1.871f, -202.816f, 51.742f;
						
						case 4:
							return -1208.844f, 340.3609f, 70.0006f;
						
						case 5:
							return -727.7335f, -287.528f, 35.9482f;
						
						case 6:
							return -28.01f, -1030.556f, 27.8435f;
						
						case 7:
							return 190.617f, -1454.129f, 28.1416f;
						
						case 8:
							return 1242.088f, -3148.675f, 4.5282f;
						
						case 9:
							return -3170.323f, 1126.011f, 19.9681f;
						
						case 10:
							return -1792.41f, -394.6852f, 44.0166f;
						
						case 11:
							return -2104.064f, -294.0901f, 12.0469f;
						
						case 12:
							return 1458.824f, -1937.281f, 70.3057f;
						
						case 13:
							return 529.5776f, -2736.348f, 5.0569f;
						
						case 14:
							return 602.5372f, 147.507f, 97.0363f;
						
						case 15:
							return -2189.286f, -384.7161f, 12.3121f;
						
						case 16:
							return 2490.019f, -332.8641f, 91.9927f;
						
						case 17:
							return 1481.655f, 1140.735f, 113.3343f;
						
						case 18:
							return -130.6895f, 1005.831f, 234.732f;
						
						case 19:
							return -125.1937f, -2249.124f, 6.8117f;
						
						default:
					}
					break;
				
				case 2:
					switch (bParam1)
					{
						case 0:
							return -1190.658f, -2196.359f, 12.1951f;
						
						case 1:
							return -810.0179f, -747.1166f, 22.3082f;
						
						case 2:
							return -243.9944f, -218.211f, 35.519f;
						
						case 3:
							return -47.888f, -188.9245f, 51.1469f;
						
						case 4:
							return -1194.665f, 323.0352f, 69.7224f;
						
						case 5:
							return -703.6254f, -299.056f, 35.6984f;
						
						case 6:
							return -20.652f, -1017.787f, 27.9166f;
						
						case 7:
							return 182.8745f, -1485.711f, 28.1416f;
						
						case 8:
							return 1242.467f, -3142.34f, 4.5282f;
						
						case 9:
							return -3183.809f, 1088.898f, 19.8407f;
						
						case 10:
							return -1784.578f, -378.8281f, 43.9675f;
						
						case 11:
							return -2077.491f, -336.0633f, 12.1576f;
						
						case 12:
							return 1484.176f, -1923.298f, 70.2404f;
						
						case 13:
							return 492.0316f, -2718.325f, 5.0576f;
						
						case 14:
							return 611.6172f, 168.9255f, 97.2794f;
						
						case 15:
							return -2205.85f, -370.1107f, 12.283f;
						
						case 16:
							return 2527.898f, -307.077f, 91.9929f;
						
						case 17:
							return 1497.473f, 1130.526f, 113.3343f;
						
						case 18:
							return -105.4721f, 1004.142f, 234.7601f;
						
						case 19:
							return -125.1227f, -2253.726f, 6.8117f;
						
						default:
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_415()
{
	if (func_247())
	{
		switch (Local_185.f_981)
		{
			case 0:
				return 1359.997f, 3618.942f, 33.8907f;
			
			case 1:
				return -111.2065f, 2804.245f, 52.1193f;
			
			case 2:
				return 2647.59f, 4256.437f, 43.7722f;
			
			default:
		}
	}
	else
	{
		switch (Local_185.f_981)
		{
			case 0:
				return -3180.438f, 1027.737f, 19.8186f;
			
			case 1:
				return 810.8981f, -1665.973f, 28.3998f;
			
			case 2:
				return -828.5842f, -1263.499f, 4.0004f;
			}
		
		default:
	}
	return -1193.289f, -2245.799f, 12.9446f;
}

int func_416()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	
	bVar4 = true;
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		Var0 = { func_34(Local_185.f_110) };
	}
	if (!func_455())
	{
		func_48(2);
		return 1;
	}
	if (!func_62(2))
	{
		if (func_455() || func_454(Var0, &Var1, &fVar2, &uVar3, 1, 1, 1))
		{
			bVar5 = false;
			while (bVar5 < func_72())
			{
				if (func_369())
				{
					iVar6 = unk_0xC5935DFB3F39785A(0, 4);
				}
				if (func_259(func_452(bVar5, iVar6)) && !unk_0x93BF17E19A9F0E9B(Local_185.f_64[bVar5]))
				{
					if (func_455())
					{
						Var1 = { func_451(bVar5) };
						if (func_74())
						{
							iVar7 = 0;
							iVar8 = 0;
							fVar2 = -1f;
							iVar8 = 0;
							while (iVar8 < 32)
							{
								if (BitTest(Local_185.f_144, iVar8) && fVar2 == -1f)
								{
									if (iVar7 == bVar5)
									{
										fVar2 = func_449(iVar8);
									}
									else
									{
										iVar7++;
									}
								}
								iVar8++;
							}
						}
						else
						{
							fVar2 = func_449(bVar5);
						}
					}
					if (unk_0x2E9F58AD6FE93DFF(func_417(190, -1, 1, -1, -1, -1) + 1))
					{
						if (func_355(&(Local_185.f_64[bVar5]), func_452(bVar5, iVar6), Var1, fVar2, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							unk_0x2094BC4B6731BA68(Var1, 5f, 1, 0, 0, 1);
							if (unk_0xEA4F815FDC353FEF(func_452(bVar5, iVar6)))
							{
								unk_0x3E29597A27D861B2(unk_0xE38610F405049F71(Local_185.f_64[bVar5]), 1);
							}
							unk_0x439C904840715871(unk_0xE38610F405049F71(Local_185.f_64[bVar5]), 0);
							if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
							{
								if (unk_0xD130E7CDEE903624(unk_0xF5014688C9788D5F(Local_185.f_64[bVar5]), "MPBitset"))
								{
									bVar9 = unk_0xE2F6FE9B61232165(unk_0xF5014688C9788D5F(Local_185.f_64[bVar5]), "MPBitset");
								}
								unk_0x0B0C9A0F9AAEB7F0(&bVar9, 10);
								unk_0x0B0C9A0F9AAEB7F0(&bVar9, 11);
								unk_0xEE8559BBFC27701B(unk_0xF5014688C9788D5F(Local_185.f_64[bVar5]), "MPBitset", bVar9);
							}
							if (unk_0x77B62CAA5DF0922A("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0xEE8559BBFC27701B(unk_0xF5014688C9788D5F(Local_185.f_64[bVar5]), "Not_Allow_As_Saved_Veh", true);
							}
							unk_0xF5706A3E4A060916(unk_0xE38610F405049F71(Local_185.f_64[bVar5]), 0, 0);
							if (func_74())
							{
								unk_0xC1FE4FCB32785633(unk_0xE38610F405049F71(Local_185.f_64[bVar5]), 5, 0, 0, 1);
								unk_0xBC123B7E0667E87D(unk_0xE38610F405049F71(Local_185.f_64[bVar5]), 5, 0);
								unk_0xBFE60A5CC0C835D8(unk_0xE38610F405049F71(Local_185.f_64[bVar5]), 5, 0, 1);
								unk_0xBDE75E2FCBF91A6C(unk_0xE38610F405049F71(Local_185.f_64[bVar5]), 5, 0);
							}
							unk_0xDD38B2935A3EAC56(unk_0xF5014688C9788D5F(Local_185.f_64[bVar5]), 0, 0);
							unk_0x6BFFBDE3C98A828E(unk_0xE38610F405049F71(Local_185.f_64[bVar5]), 0);
							unk_0x935364B4448CD584(unk_0xF5014688C9788D5F(Local_185.f_64[bVar5]), 1);
							unk_0x999C62072AF920FD(unk_0xF5014688C9788D5F(Local_185.f_64[bVar5]), 0);
							unk_0x0B1BCFB3741AF8B2(unk_0xE38610F405049F71(Local_185.f_64[bVar5]), 1);
							unk_0x89E19F9D79DDCA80(unk_0xE38610F405049F71(Local_185.f_64[bVar5]), 1);
							unk_0xD0794C48F637F16C(unk_0xE38610F405049F71(Local_185.f_64[bVar5]), 0);
							func_353(unk_0xE38610F405049F71(Local_185.f_64[bVar5]));
						}
					}
				}
				bVar5++;
			}
			bVar5 = false;
			while (bVar5 < func_72())
			{
				if (!unk_0x93BF17E19A9F0E9B(Local_185.f_64[bVar5]))
				{
					bVar4 = false;
				}
				bVar5++;
			}
		}
	}
	if (bVar4)
	{
		func_48(2);
	}
	return func_62(2);
}

int func_417(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_448(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 8;
		
		case 178:
		case 188:
			return func_445(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_443(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_439(iParam1, iParam3, iParam4, unk_0xB23E0F9B63D009A8(iParam5), 0, 0, 0);
		
		case 233:
			return func_433(iParam1, iParam3, iParam4, unk_0xB23E0F9B63D009A8(bParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_432(iParam1, iParam3);
		
		case 179:
			return 0;
		
		case 183:
			return 5;
		
		case 182:
			return 14;
		
		case 185:
			return 24;
		
		case 186:
			return 13;
		
		case 180:
			return 6;
		
		case 193:
			return 6;
		
		case 194:
			return 0;
		
		case 197:
			return 4;
		
		case 199:
			return 0;
		
		case 195:
			return 20;
		
		case 201:
			return 0;
		
		case 198:
			return 8;
		
		case 205:
			return 1;
		
		case 207:
			return 8;
		
		case 208:
			return 2;
		
		case 209:
			return 6;
		
		case 210:
			return 0;
		
		case 214:
			return 5;
		
		case 215:
			return 11;
		
		case 216:
			return 8;
		
		case 217:
			return 24;
		
		case 218:
			return 23;
		
		case 219:
			return 1;
		
		case 220:
			return 4;
		
		case 221:
			return 4;
		
		case 237:
		case 250:
			return func_431(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_430(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 11;
		
		case 241:
			return 3;
		
		case 242:
			return 5;
		
		case 244:
			return 4;
		
		case 248:
			return 1;
		
		case 243:
			return func_426(iParam1, iParam3, unk_0xB23E0F9B63D009A8(bParam5), 0, -1, 0, 0);
		
		case 158:
			return func_422(iParam1, iParam3, unk_0xB23E0F9B63D009A8(bParam5), 0, -1, 0, 0);
		
		case 181:
			return func_418(iParam1, iParam3, unk_0xB23E0F9B63D009A8(bParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_418(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_421(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_420(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_419(func_275(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_376(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_375(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_419(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_420(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_421(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_422(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0++;
			break;
		
		case 24:
			iVar0++;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 89:
					iVar0++;
					break;
				
				case 90:
					iVar0 += 2;
					break;
			}
			break;
		
		case 36:
			iVar0 += 2;
			break;
		
		case 37:
			iVar0 += 2;
			break;
		
		case 38:
			iVar0++;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 38:
					iVar0 += 3;
					break;
				
				case 39:
					iVar0 += 3;
					break;
				
				case 40:
					iVar0 += 4;
					break;
			}
			break;
		
		case 16:
			iVar0 += 12;
			break;
		
		case 35:
			iVar0 += 4;
			break;
		
		case 4:
			iVar0 += 16;
			break;
		
		case 46:
			iVar0++;
			break;
		
		case 9:
			iVar0 += 7;
			break;
		
		case 14:
			iVar0 += 7;
			break;
		
		case 17:
			iVar0 += 7;
			break;
		
		case 47:
			iVar0 += 2;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 6:
			iVar0 += 11;
			break;
		
		case 48:
			iVar0 += 2;
			break;
		
		case 44:
			iVar0 += 2;
			break;
		
		case 21:
			iVar0 += 8;
			break;
		
		case 22:
			iVar0 += 3;
			break;
		
		case 7:
			iVar0 += 7;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 2:
			iVar0++;
			break;
		
		case 34:
			iVar0 += 5;
			break;
		
		case 27:
			iVar0 += 9;
			break;
		
		case 26:
			iVar0 += 3;
			break;
		
		case 31:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 21;
			break;
		
		case 12:
			iVar0 += 20;
			break;
		
		case 41:
			iVar0 += 11;
			break;
		
		case 49:
			iVar0 += 3;
			break;
		
		case 29:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 50:
			iVar0 += 4;
			break;
		
		case 23:
			iVar0 += 4;
			break;
		
		case 20:
			iVar0 += 3;
			break;
		
		case 32:
			iVar0 = iVar0;
			break;
		
		case 51:
			iVar0 += 4;
			break;
		
		case 52:
			iVar0 += 6;
			break;
		
		case 39:
			iVar0 += 2;
			break;
		
		case 40:
			iVar0++;
			break;
		
		case 25:
			iVar0 += 3;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_425(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_424(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_423(func_275(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_381(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_380(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_423(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam1)
	{
		case 43:
			return 3;
		
		case 17:
		case 18:
		case 15:
			return 2;
		
		case 12:
		case 13:
			if (iParam2 != func_59())
			{
				if (func_271(iParam2, 1))
				{
					Var0 = { func_270(iParam2) };
				}
			}
			else
			{
				return 4;
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 53:
			if (iParam0 == 1)
			{
			}
			break;
	}
	return 1;
}

int func_424(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 96:
		case 97:
		case 98:
		case 108:
		case 109:
		case 110:
		case 118:
		case 119:
		case 120:
		case 105:
		case 106:
		case 107:
			return 0;
		
		case 66:
		case 67:
		case 68:
		case 30:
		case 31:
		case 32:
		case 121:
		case 122:
		case 123:
			return 1;
		
		case 93:
		case 94:
		case 95:
			return 3;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		case 116:
		case 117:
			return 2;
		
		case 20:
			return 9;
		
		case 21:
			return 5;
		
		case 27:
		case 28:
		case 29:
			return 7;
		
		case 114:
		case 115:
			return iParam0;
		
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 38:
		case 39:
		case 40:
			switch (iParam0)
			{
				case 0:
					return 3;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 6;
				
				default:
			}
			break;
		
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 5;
				
				case 1:
					return 6;
				
				default:
			}
			break;
		
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 7;
				
				case 1:
					return 8;
				
				default:
			}
			break;
		
		case 33:
		case 34:
		case 35:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 51:
		case 52:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 36:
		case 37:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				case 1:
					return 21;
				
				case 2:
					return 22;
				
				case 3:
					return 23;
				
				default:
			}
			break;
		
		case 17:
		case 18:
		case 19:
			return 3;
		
		case 131:
			return 4;
	}
	return -1;
}

int func_425(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_426(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 4;
			break;
		
		case 1:
			iVar0 += 10;
			break;
		
		case 15:
			iVar0 += 21;
			break;
		
		case 14:
			iVar0 += 2;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 4;
					break;
				
				case 36:
					iVar0 += 5;
					break;
				
				case 37:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 += 5;
					break;
				
				case 1:
					iVar0 += 5;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0++;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 3;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 4;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 29:
					switch (iParam4)
					{
						case 0:
							iVar0 += 4;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 30:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
			}
			break;
		
		case 3:
			iVar0 += 6;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 7;
					break;
				
				case 13:
					iVar0 += 10;
					break;
				
				case 14:
					iVar0 += 8;
					break;
			}
			break;
		
		case 2:
			iVar0 += 3;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_276(iParam0))
		{
			iVar0 = (iVar0 + func_274(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_429(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_428(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_427(func_275(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_386(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_385(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_427(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 6:
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_428(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				default:
			}
			break;
		
		case 35:
		case 36:
		case 37:
			return 0;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
		
		case 28:
		case 29:
		case 30:
			return 0;
		
		case 18:
		case 19:
		case 20:
		case 21:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 31:
		case 32:
		case 33:
		case 34:
			return 0;
		
		case 38:
		case 39:
		case 40:
			return 0;
		
		case 12:
			return 6;
		
		case 13:
			return 9;
		
		case 14:
			return 7;
		
		case 22:
		case 23:
		case 24:
			return 0;
		
		case 25:
		case 26:
		case 27:
			return 0;
	}
	return -1;
}

int func_429(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_430(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 4;
		
		case 2:
			return 6;
		
		case 3:
			return 1;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_431(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 80:
					iVar0++;
					break;
				
				case 81:
					iVar0++;
					break;
				
				case 82:
					iVar0++;
					break;
			}
			break;
		
		case 22:
			iVar0 += 4;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 3;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0++;
			break;
		
		case 20:
			iVar0 += 4;
			break;
		
		case 17:
			iVar0++;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 16:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 8;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 8;
			break;
		
		case 4:
		case 24:
		case 2:
			iVar0++;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 0:
			iVar0 += 3;
			break;
	}
	if (func_280(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_432(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 = iVar0;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 7;
					break;
				
				case 2:
					iVar0 += 6;
					break;
				
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 3;
					break;
				
				case 6:
					iVar0 += 2;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 4;
					break;
				
				case 9:
					iVar0 += 2;
					break;
				
				case 10:
					iVar0 += 2;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 2;
					break;
				
				case 14:
					iVar0 += 4;
					break;
				
				case 15:
					iVar0 += 6;
					break;
				
				case 16:
					iVar0 += 3;
					break;
				
				case 17:
					iVar0 += 3;
					break;
				
				case 18:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 5;
					break;
				
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 3;
					break;
				
				case 34:
					iVar0 += 5;
					break;
				
				case 35:
					iVar0 += 5;
					break;
				
				case 36:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0++;
					break;
				
				case 75:
					iVar0++;
					break;
				
				case 76:
					iVar0++;
					break;
				
				case 77:
					iVar0++;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 = iVar0;
					break;
				
				case 79:
					iVar0 = iVar0;
					break;
				
				case 80:
					iVar0 = iVar0;
					break;
				
				case 81:
					iVar0 = iVar0;
					break;
				
				case 82:
					iVar0 = iVar0;
					break;
				
				case 83:
					iVar0 = iVar0;
					break;
				
				case 84:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 7:
			iVar0 += 4;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 6;
					break;
				
				case 63:
					iVar0 += 6;
					break;
				
				case 64:
					iVar0 += 6;
					break;
				
				case 65:
					iVar0 += 6;
					break;
				
				case 66:
					iVar0 += 6;
					break;
				
				case 67:
					iVar0 += 6;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 = iVar0;
					break;
				
				case 86:
					iVar0 = iVar0;
					break;
				
				case 87:
					iVar0 = iVar0;
					break;
				
				case 88:
					iVar0 = iVar0;
					break;
				
				case 89:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 4;
					break;
				
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 4;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if ((func_289(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_283(iParam0, func_287() + 1));
	}
	return iVar0;
}

int func_433(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 3:
			iVar0++;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 8:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0++;
			break;
		
		case 12:
			iVar0 += 2;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 = iVar0;
			break;
		
		case 13:
			iVar0 += 2;
			break;
		
		case 10:
			iVar0 += 4;
			break;
	}
	if (!bParam5)
	{
		if (func_296(iParam0))
		{
			if (iParam3 != func_59())
			{
				iVar0 = (iVar0 + func_293(iParam0, func_275(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_59())
		{
			iVar0 = (iVar0 + func_436(iParam0, func_275(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_435(0, iParam1) != -1)
		{
			if (iParam3 != func_59())
			{
				iVar0 = (iVar0 + func_434(func_275(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_396(iParam0))
		{
			iVar0 = (iVar0 + func_395(iParam0));
		}
	}
	return iVar0;
}

int func_434(var uParam0, int iParam1)
{
	return 2;
}

int func_435(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 136:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_436(int iParam0, int iParam1)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 1:
			uVar0 = func_437(5329, -1, 0);
			if (BitTest(uVar0, 7))
			{
				if (iParam1 > 4)
				{
					return 4;
				}
				return iParam1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_437(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805029[iParam0 /*3*/][func_438(iParam1)];
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_438(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_58();
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

int func_439(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 11:
			iVar0 += 9;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 4:
			iVar0 += 10;
			break;
		
		case 8:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0++;
					break;
				
				case 1:
					iVar0++;
					break;
				
				case 2:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 5;
					break;
			}
			break;
		
		case 3:
			if (iParam2 >= 4)
			{
				iVar0 += 10;
			}
			else if (iParam2 == 3)
			{
				iVar0 += 8;
			}
			else if (iParam2 == 2)
			{
				iVar0 += 7;
			}
			else if (iParam2 == 1)
			{
				iVar0 = (iVar0 + 6);
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					iVar0++;
					break;
				
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 2;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 16:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 17:
			iVar0 += 5;
			break;
		
		case 26:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_308(iParam0))
		{
			if (iParam3 != func_59())
			{
				iVar0 = (iVar0 + func_300(iParam0, func_275(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_59())
		{
			iVar0 = (iVar0 + func_442(iParam0, func_275(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_441(0, iParam1) != -1)
		{
			if (iParam3 != func_59())
			{
				iVar0 = (iVar0 + func_440(func_275(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_401(iParam0))
		{
			iVar0 = (iVar0 + func_400(iParam0));
		}
	}
	return iVar0;
}

int func_440(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_303(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_303(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_303(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_303(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_303(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_303(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_303(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_303(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_441(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					return 4;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 48:
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
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
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 28:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 8;
				
				case 3:
					return 9;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 40:
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 0;
				
				case 3:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_442(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 14:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 7:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 2:
		case 4:
		case 3:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 10:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 9:
			return 1;
		
		case 0:
			if (iParam1 > 1)
			{
				return 2;
			}
			return 1;
		
		case 8:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 5:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		case 13:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 11:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return ceil((IntToFloat(iParam1) / 2f));
}

int func_443(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 3;
					break;
				
				case 1:
					iVar0 += 3;
					break;
				
				case 2:
					iVar0 += 3;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 3;
					break;
				
				case 10:
					iVar0 += 3;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					iVar0 += 2;
					break;
				
				case 15:
					iVar0 += 4;
					break;
				
				case 13:
					iVar0 += 2;
					break;
			}
			break;
		
		case 5:
			iVar0 += 4;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 5;
					break;
				
				case 21:
					iVar0 += 5;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 4;
					break;
				
				case 23:
					iVar0 += 3;
					break;
				
				case 24:
					iVar0 += 3;
					break;
			}
			if (func_312(iParam0, func_287() + 1, -1, iParam2) == 1)
			{
				iVar0++;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 5;
					break;
				
				case 26:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 2;
					break;
				
				case 28:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
					iVar0 += 4;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 3;
					break;
				
				case 36:
					iVar0 += 3;
					break;
				
				case 37:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
	}
	if (!bParam4)
	{
		if (func_314(iParam0))
		{
			iVar0 = (iVar0 + func_312(iParam0, func_287() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_444(iParam0, func_287() + 1));
	}
	if (!bParam3)
	{
		if (func_406(iParam0))
		{
			iVar0 = (iVar0 + func_405(iParam0));
		}
	}
	return iVar0;
}

int func_444(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 1)
			{
				return 1;
			}
			return floor((IntToFloat(iParam1) / 1.5f));
		
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			return floor((IntToFloat(iParam1) / 2f));
		
		default:
	}
	return 0;
}

int func_445(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 = iVar0;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 13:
			iVar0 = iVar0;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 2;
					break;
				
				case 2:
					iVar0 += 2;
					break;
				
				case 3:
					iVar0 += 2;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 2;
					break;
				
				case 19:
					iVar0 += 2;
					break;
				
				case 20:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 7;
					break;
				
				case 22:
					iVar0 += 7;
					break;
				
				case 23:
					iVar0 += 7;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 = iVar0;
					break;
				
				case 28:
					iVar0 = iVar0;
					break;
				
				case 29:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 2;
					break;
				
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 7;
					break;
				
				case 38:
					iVar0 += 7;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 6;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 2;
					break;
				
				case 43:
					iVar0 += 2;
					break;
				
				case 44:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 6;
					break;
				
				case 46:
					iVar0 += 6;
					break;
				
				case 47:
					iVar0 += 6;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 2;
					break;
				
				case 49:
					iVar0 += 2;
					break;
				
				case 50:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 11;
			break;
	}
	iVar0 = (iVar0 + func_447(iParam0, func_287() + 1, iParam2));
	iVar0 = (iVar0 + func_446(iParam0));
	return iVar0;
}

int func_446(int iParam0)
{
	if (func_410(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_447(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	if (iVar0 == 0)
	{
		if (iParam0 == 8)
		{
			iVar0 = iParam2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_448(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

float func_449(bool bParam0)
{
	switch (func_16())
	{
		case 8:
			if (func_247())
			{
				switch (bParam0)
				{
					case 0:
						return 326.1744f;
					
					case 1:
						return 64.0816f;
					
					case 2:
						return 3.6694f;
					
					case 3:
						return 289.179f;
					
					case 4:
						return 133.1368f;
					
					case 5:
						return 182.2973f;
					
					case 6:
						return 73.2189f;
					
					case 7:
						return 280.3667f;
					
					case 8:
						return 191.965f;
					
					case 9:
						return 284.7794f;
					
					case 10:
						return 123.9193f;
					
					case 11:
						return 90.1645f;
					
					case 12:
						return 267.8796f;
					
					case 13:
						return 157.3811f;
					
					case 14:
						return 251.7047f;
					
					default:
				}
			}
			else
			{
				switch (bParam0)
				{
					case 0:
						return 319.4816f;
					
					case 1:
						return 150.6088f;
					
					case 2:
						return 163.4438f;
					
					case 3:
						return 182.3829f;
					
					case 4:
						return 303.5831f;
					
					case 5:
						return 268.3745f;
					
					case 6:
						return 345.4465f;
					
					case 7:
						return 160.8462f;
					
					case 8:
						return 134.0958f;
					
					case 9:
						return 271.4576f;
					
					case 10:
						return 120.1265f;
					
					case 11:
						return 70.193f;
					
					case 12:
						return 250.75f;
					
					case 13:
						return 78.6663f;
					
					case 14:
						return 179.7139f;
					}
				
				default:
			}
			break;
		
		case 6:
			switch (Local_185.f_679)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					switch (Local_185.f_981)
					{
						case 0:
							return 219.7995f;
						
						case 1:
							return 139.5962f;
						
						case 2:
							return 95.3967f;
						
						default:
					}
					break;
				
				case 4:
				case 5:
				case 6:
					switch (Local_185.f_981)
					{
						case 0:
							return 328.1974f;
						
						case 1:
							return 349.9958f;
						
						case 2:
							return 349.7461f;
						
						default:
					}
					break;
				
				case 7:
				case 8:
				case 9:
					switch (Local_185.f_981)
					{
						case 0:
							return 119.3972f;
						
						case 1:
							return 144.5977f;
						
						case 2:
							return 128.1968f;
						
						default:
					}
					break;
			}
			break;
		
		case 1:
			switch (bParam0)
			{
				case 0:
					return 218.1963f;
				
				case 1:
					return 207.9963f;
				
				case 2:
					return 142.7958f;
				
				case 3:
					return 32.1944f;
				
				case 4:
					return 164.5931f;
				
				case 5:
					return 46.3913f;
				
				case 6:
					return 19.9906f;
				
				case 7:
					return 61.7906f;
				
				case 8:
					return 278.1903f;
				
				case 9:
					return 338.1901f;
				
				case 10:
					return 168.5894f;
				
				case 11:
					return 324.4387f;
				
				case 12:
					return 143.2384f;
				
				case 13:
					return 213.0383f;
				
				case 14:
					return 38.4376f;
				
				case 15:
					return 186.6374f;
				
				case 16:
					return 334.4369f;
				
				case 17:
					return 29.6368f;
				
				case 18:
					return 50.6368f;
				
				case 19:
					return 213.2365f;
				
				default:
			}
			break;
		
		case 9:
			switch (Local_185.f_679)
			{
				case 0:
					switch (bParam0)
					{
						case 0:
							return 243.7813f;
						
						case 1:
							return 342.9691f;
						
						case 2:
							return 26.9593f;
						
						case 3:
							return 55.5273f;
						
						case 4:
							return 300.052f;
						
						case 5:
							return 329.7003f;
						
						case 6:
							return 328.7108f;
						
						case 7:
							return 314.9074f;
						
						case 8:
							return 144.371f;
						
						case 9:
							return 309.1066f;
						
						default:
					}
					break;
				
				case 1:
					switch (bParam0)
					{
						case 0:
							return 85.3844f;
						
						case 1:
							return 81.5624f;
						
						case 2:
							return 81.8903f;
						
						case 3:
							return 103.037f;
						
						case 4:
							return 71.677f;
						
						case 5:
							return 25.1165f;
						
						case 6:
							return 84.1133f;
						
						case 7:
							return 162.2021f;
						
						case 8:
							return 95.6473f;
						
						case 9:
							return 91.1218f;
						
						default:
					}
					break;
				
				case 2:
					switch (bParam0)
					{
						case 0:
							return 102.5394f;
						
						case 1:
							return 82.6778f;
						
						case 2:
							return 84.7616f;
						
						case 3:
							return 158.4868f;
						
						case 4:
							return 26.6431f;
						
						case 5:
							return 345.8311f;
						
						case 6:
							return 282.2448f;
						
						case 7:
							return 339.7124f;
						
						case 8:
							return 40.2085f;
						
						case 9:
							return 315.6408f;
						
						default:
					}
					break;
				
				case 3:
					switch (bParam0)
					{
						case 0:
							return 276.2263f;
						
						case 1:
							return 67.2248f;
						
						case 2:
							return 343.5057f;
						
						case 3:
							return 265.3102f;
						
						case 4:
							return 9.3989f;
						
						case 5:
							return 319.7345f;
						
						case 6:
							return 315.535f;
						
						case 7:
							return 17.7265f;
						
						case 8:
							return 298.2788f;
						
						case 9:
							return 299.6168f;
						
						default:
					}
					break;
				
				case 4:
					switch (bParam0)
					{
						case 0:
							return 266.1005f;
						
						case 1:
							return 29.6892f;
						
						case 2:
							return 6.8292f;
						
						case 3:
							return 38.3601f;
						
						case 4:
							return 174.9427f;
						
						case 5:
							return 139.6967f;
						
						case 6:
							return 125.0149f;
						
						case 7:
							return 137.8794f;
						
						case 8:
							return 44.445f;
						
						case 9:
							return 316.8491f;
						
						default:
					}
					break;
				
				case 5:
					switch (bParam0)
					{
						case 0:
							return 215.4694f;
						
						case 1:
							return 134.7844f;
						
						case 2:
							return 344.4861f;
						
						case 3:
							return 212.165f;
						
						case 4:
							return 180.2893f;
						
						case 5:
							return 147.6595f;
						
						case 6:
							return 163.6596f;
						
						case 7:
							return 230.3922f;
						
						case 8:
							return 157.3126f;
						
						case 9:
							return 228.4206f;
						
						default:
					}
					break;
				
				case 6:
					switch (bParam0)
					{
						case 0:
							return 170.3571f;
						
						case 1:
							return 126.5275f;
						
						case 2:
							return 165.452f;
						
						case 3:
							return 239.1617f;
						
						case 4:
							return 144.2343f;
						
						case 5:
							return 116.3512f;
						
						case 6:
							return 211.8666f;
						
						case 7:
							return 87.0125f;
						
						case 8:
							return 72.9686f;
						
						case 9:
							return 54.7701f;
						
						default:
					}
					break;
				
				case 7:
					switch (bParam0)
					{
						case 0:
							return 189.9574f;
						
						case 1:
							return 196.9416f;
						
						case 2:
							return 108.9773f;
						
						case 3:
							return 85.5548f;
						
						case 4:
							return 36.8923f;
						
						case 5:
							return 115.7591f;
						
						case 6:
							return 3.8811f;
						
						case 7:
							return 103.9374f;
						
						case 8:
							return 100.9714f;
						
						case 9:
							return 322.1032f;
						
						default:
					}
					break;
				
				case 8:
					switch (bParam0)
					{
						case 0:
							return 130.2432f;
						
						case 1:
							return 97.4911f;
						
						case 2:
							return 65.9888f;
						
						case 3:
							return 334.2624f;
						
						case 4:
							return 45.7468f;
						
						case 5:
							return 112.9685f;
						
						case 6:
							return 354.8338f;
						
						case 7:
							return 88.0793f;
						
						case 8:
							return 309.572f;
						
						case 9:
							return 1.5184f;
						
						default:
					}
					break;
				
				case 9:
					switch (bParam0)
					{
						case 0:
							return 182.8093f;
						
						case 1:
							return 299.7529f;
						
						case 2:
							return 14.2047f;
						
						case 3:
							return 344.0418f;
						
						case 4:
							return 47.0222f;
						
						case 5:
							return 1.9719f;
						
						case 6:
							return 132.8726f;
						
						case 7:
							return 77.8579f;
						
						case 8:
							return 11.4493f;
						
						case 9:
							return 153.1859f;
						
						default:
					}
					break;
			}
			break;
	}
	if (func_450())
	{
		return 100.5717f;
	}
	return 114.2482f;
}

int func_450()
{
	switch (func_16())
	{
		case 2:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

Vector3 func_451(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	switch (func_16())
	{
		case 8:
		case 1:
			bVar1 = false;
			while (bVar1 < 32)
			{
				if (BitTest(Local_185.f_144, bVar1))
				{
					if (iVar0 == bParam0)
					{
						return func_414(func_16(), bVar1, -1, -1, 0, 0);
					}
					else
					{
						iVar0++;
					}
				}
				bVar1++;
			}
			break;
		
		case 6:
			switch (Local_185.f_679)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					switch (Local_185.f_981)
					{
						case 0:
							return 436.6976f, 3549.657f, 32.2386f;
						
						case 1:
							return -105.0853f, 2796.521f, 52.3561f;
						
						case 2:
							return 2644.673f, 4252.409f, 43.7828f;
						
						default:
					}
					break;
				
				case 4:
				case 5:
				case 6:
					switch (Local_185.f_981)
					{
						case 0:
							return -55.6317f, -2237.486f, 6.8116f;
						
						case 1:
							return 793.4781f, -1598.91f, 30.2601f;
						
						case 2:
							return -826.1995f, -1263.957f, 4.0004f;
						
						default:
					}
					break;
				
				case 7:
				case 8:
				case 9:
					switch (Local_185.f_981)
					{
						case 0:
							return -3195.318f, 947.9199f, 15.6207f;
						
						case 1:
							return 1303.046f, 1446.051f, 98.3667f;
						
						case 2:
							return 260.1804f, 894.4424f, 208.2057f;
						
						default:
					}
					break;
			}
			break;
		
		case 9:
			return func_414(9, bParam0, Local_185.f_679, bParam0, 0, 0);
			break;
		
		case 3:
			return -1193.289f, -2245.799f, 12.9446f;
		
		case 4:
			return -1193.289f, -2245.799f, 12.9446f;
		
		case 5:
			return -1193.289f, -2245.799f, 12.9446f;
		
		case 7:
			return -1193.289f, -2245.799f, 12.9446f;
	}
	return -1193.289f, -2245.799f, 12.9446f;
}

int func_452(bool bParam0, int iParam1)
{
	switch (func_16())
	{
		case 1:
			return func_453(iParam1);
		
		case 8:
			return joaat("benson");
		
		case 9:
			switch (Local_185.f_679)
			{
				case 1:
					if (((bParam0 == 4 || bParam0 == 6) || bParam0 == 7) || bParam0 == 8)
					{
						return joaat("rebel");
					}
					break;
				
				case 2:
					if ((bParam0 == 3 || bParam0 == 6) || bParam0 == 7)
					{
						return joaat("rebel");
					}
					break;
				
				case 3:
					if ((bParam0 == 4 || bParam0 == 6) || bParam0 == 7)
					{
						return joaat("rebel");
					}
					break;
				
				case 4:
					if (bParam0 == 7)
					{
						return joaat("rebel");
					}
					break;
				
				case 5:
					if (bParam0 == 1)
					{
						return joaat("rebel");
					}
					break;
				
				case 6:
					if (bParam0 == 2)
					{
						return joaat("rebel");
					}
					break;
				
				case 8:
					if (bParam0 == 4)
					{
						return joaat("rebel");
					}
					break;
			}
			return joaat("suntrap");
		
		case 6:
			switch (Local_185.f_981)
			{
				case 0:
					return joaat("landstalker");
				
				case 1:
					if (Local_185.f_679 == 0)
					{
						return joaat("schafter3");
					}
					return joaat("schafter2");
				
				case 2:
					if (Local_185.f_679 == 2)
					{
						return joaat("baller");
					}
					return joaat("zion");
				
				default:
			}
			break;
	}
	return joaat("gburrito");
}

int func_453(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		iVar0 = joaat("marquis");
	}
	else if (iParam0 == 1)
	{
		iVar0 = joaat("dinghy3");
	}
	else if (iParam0 == 2)
	{
		iVar0 = joaat("tropic");
	}
	else
	{
		iVar0 = joaat("tug");
	}
	return iVar0;
}

int func_454(struct<3> Param0, var uParam1, float fParam2, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	
	while (true)
	{
		if (unk_0x6009FBA2EAAA60BE(Param0, iParam4, uParam1, uParam2, uParam3, 1, 1077936128, 0))
		{
			if (func_172(*uParam1, 10f, 1f, 1f, 5f, iParam5, bParam6, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iParam4++;
		iVar0++;
		if (iVar0 > 75)
		{
			*uParam1 = { Param0 };
			return 0;
		}
	}
	return 0;
}

int func_455()
{
	switch (func_16())
	{
		case 1:
		case 8:
		case 9:
			return 1;
		
		default:
	}
	return 0;
}

int func_456()
{
	bool bVar0;
	
	if (func_62(1))
	{
		return 1;
	}
	if (!func_25())
	{
		bVar0 = false;
		while (bVar0 < func_14())
		{
			if (func_457(bVar0))
			{
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 < func_14())
		{
			if (!unk_0xFC8BFE4B41177C22(func_13(bVar0)))
			{
				return 0;
			}
			bVar0++;
		}
	}
	func_48(1);
	return 1;
}

int func_457(bool bParam0)
{
	struct<31> Var0;
	struct<3> Var1;
	bool bVar2;
	
	if (!unk_0x93BF17E19A9F0E9B(Local_185.f_59[bParam0]))
	{
		if (func_465(bParam0, &(Local_185.f_48), &(Local_185.f_51)))
		{
			if (!func_33(Local_185.f_48, 0f, 0f, 0f, 0))
			{
				if (bParam0 == 0 || (bParam0 > 0 && BitTest(Local_185.f_46, (bParam0 - 1))))
				{
					if (!BitTest(Local_185.f_46, bParam0))
					{
						if (func_259(func_464()))
						{
							Var0.f_4 = 1125515264;
							Var0.f_5 = 1;
							Var0.f_6 = 1;
							Var0.f_8 = 1082130432;
							Var0.f_9 = 1176255488;
							Var0.f_10 = 1;
							Var0.f_13 = 1;
							Var0.f_15 = 2;
							Var0.f_22 = 2;
							Var0.f_25 = 1;
							Var0.f_26 = 1;
							Var0.f_29 = 1123024896;
							Var0.f_30 = 1;
							Var0.f_0 = 0f;
							Var0.f_1 = 0;
							Var0.f_4 = 200f;
							Var0.f_5 = 0;
							if (!func_450() && !func_463())
							{
								Var0.f_6 = 1;
							}
							else
							{
								Var0.f_6 = 0;
							}
							Var0.f_12 = 1;
							Var0.f_3 = 1;
							Var1 = { func_461(Local_185.f_48, Local_185.f_51, 20f) };
							if (func_87(Local_185.f_48, Var1, func_464(), 0, &(Local_185.f_28[bParam0 /*3*/]), &(Local_185.f_41[bParam0]), &Var0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_46), bParam0);
							}
						}
					}
				}
			}
		}
		if (func_463())
		{
			func_465(bParam0, &(Local_185.f_28[bParam0 /*3*/]), &(Local_185.f_41[bParam0]));
		}
		if (func_259(func_464()))
		{
			if (unk_0x2E9F58AD6FE93DFF(func_417(190, -1, 1, -1, -1, -1)))
			{
				if (BitTest(Local_185.f_46, bParam0))
				{
					if (func_355(&(Local_185.f_59[bParam0]), func_464(), Local_185.f_28[bParam0 /*3*/], Local_185.f_41[bParam0], 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						unk_0x6EF982A39E8D08FA(unk_0xE38610F405049F71(Local_185.f_59[bParam0]), 1, 1);
						unk_0x60040CDD28AA1BC3(Local_185.f_28[bParam0 /*3*/], 20f, 0, 0, 0, 0, 0, 0, 0);
						if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
						{
							if (unk_0xD130E7CDEE903624(func_13(bParam0), "MPBitset"))
							{
								bVar2 = unk_0xE2F6FE9B61232165(func_13(bParam0), "MPBitset");
							}
							unk_0x0B0C9A0F9AAEB7F0(&bVar2, 10);
							unk_0x0B0C9A0F9AAEB7F0(&bVar2, 11);
							unk_0xEE8559BBFC27701B(func_13(bParam0), "MPBitset", bVar2);
						}
						if (unk_0x77B62CAA5DF0922A("Not_Allow_As_Saved_Veh", 3))
						{
							unk_0xEE8559BBFC27701B(func_13(bParam0), "Not_Allow_As_Saved_Veh", true);
						}
						if (!func_6())
						{
							func_458(func_13(bParam0), bParam0, 1623637790, 0, 0);
						}
						if (func_463())
						{
							if (unk_0x1E9361E60B23497B(func_13(bParam0)))
							{
								unk_0x3E29597A27D861B2(func_13(bParam0), 1);
							}
							unk_0xD133EF7430EDCD09(func_13(bParam0), 12, 12);
							unk_0xBB361D7264AC4FD8(func_13(bParam0), 12, 0);
						}
						if (func_450())
						{
							unk_0xF0259D91B002AE9F(func_13(bParam0), Global_262145.f_15568);
							unk_0xD25E9BDC14A0B649(func_13(bParam0), Global_262145.f_15568, 0);
							unk_0xD2F21CFC29C914AE(func_13(bParam0), 0);
							if (func_369())
							{
								unk_0x439C904840715871(func_13(bParam0), 0);
							}
						}
						else
						{
							unk_0xDF9DC0584881B7AF(func_13(bParam0), to_float(Global_262145.f_15572));
							unk_0x3E7E7AD923FD91A7(func_13(bParam0), to_float(Global_262145.f_15572));
							unk_0x2AEBE39F6BF7D6BC(func_13(bParam0), to_float(Global_262145.f_15572));
							unk_0xD133EF7430EDCD09(func_13(bParam0), 17, 12);
							unk_0xBB361D7264AC4FD8(func_13(bParam0), 1, 156);
							unk_0x439C904840715871(func_13(bParam0), 0);
						}
						unk_0xDD38B2935A3EAC56(func_13(bParam0), 0, 0);
						unk_0x0B1BCFB3741AF8B2(func_13(bParam0), 1);
						unk_0x89E19F9D79DDCA80(func_13(bParam0), 1);
						unk_0xD0794C48F637F16C(func_13(bParam0), 0);
						unk_0xB57A96BF24464D21(func_13(bParam0), 0);
						if (!func_450())
						{
							unk_0xD05AF216D970F274(func_13(bParam0), 1);
						}
						unk_0xAF324DD73DD8C045(func_13(bParam0), 0);
						unk_0x271D0AA5ADF266EA(func_13(bParam0), Global_262145.f_18508);
						unk_0x935364B4448CD584(func_13(bParam0), 1);
						unk_0x11C125313CB8ADA2(func_13(bParam0), 1);
						if (func_19() || (func_17() && Local_185.f_957 != 0))
						{
							unk_0x1F4C790D1AC5AFF9(func_13(bParam0), 2, 2);
							unk_0x1F4C790D1AC5AFF9(func_13(bParam0), 3, 2);
						}
						func_353(func_13(bParam0));
						Local_185.f_48 = { 0f, 0f, 0f };
						Local_185.f_52 = 0;
						return 1;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_458(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	
	if (unk_0x77B62CAA5DF0922A("ContrabandOwner", 3))
	{
		bVar0 = func_54();
		func_460(bParam1, &bVar0);
		unk_0xEE8559BBFC27701B(iParam0, "ContrabandOwner", bVar0);
		if (unk_0x77B62CAA5DF0922A("ContrabandDeliveryType", 3))
		{
			unk_0xEE8559BBFC27701B(iParam0, "ContrabandDeliveryType", bParam2);
		}
		func_459(bParam2);
		if (bParam2 == -81613951)
		{
			if (unk_0x77B62CAA5DF0922A("ExportVehicle", 3))
			{
				bVar1 = iParam3;
				bVar1 = (bVar1 + iParam4);
				unk_0xEE8559BBFC27701B(iParam0, "ExportVehicle", bVar1);
			}
		}
	}
}

void func_459(bool bParam0)
{
	if (Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_463 != bParam0)
	{
		Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_463 = bParam0;
	}
}

void func_460(int iParam0, bool bParam1)
{
	bool bVar0;
	
	if (iParam0 >= 0 && iParam0 < 8)
	{
		bVar0 = (24 + iParam0);
		unk_0x0B0C9A0F9AAEB7F0(bParam1, bVar0);
	}
}

Vector3 func_461(struct<3> Param0, float fParam1, float fParam2)
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_462(Var0, fParam1);
	Var0.f_0 = (Var0.f_0 * fParam2);
	Var0.f_1 = (Var0.f_1 * fParam2);
	Var0.f_2 = (Var0.f_2 * fParam2);
	Var0 = { Var0 + Param0 };
	return Var0;
}

Vector3 func_462(struct<3> Param0, float fParam1)
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

int func_463()
{
	switch (func_16())
	{
		case 9:
			return 1;
		
		default:
	}
	return 0;
}

int func_464()
{
	switch (func_16())
	{
		case 3:
			return joaat("trash2");
		
		case 6:
			return joaat("bagger");
		
		case 4:
			return joaat("vindicator");
		
		case 8:
			return joaat("bagger");
		
		case 11:
			return joaat("bagger");
		
		case 5:
			return joaat("boxville4");
		
		case 2:
			return joaat("buzzard2");
		
		case 9:
			return joaat("dinghy3");
		
		case 1:
			return joaat("dodo");
		
		case 0:
		case 7:
			if (Local_185.f_957 == 0)
			{
				return joaat("ratloader2");
			}
			else if (Local_185.f_957 == 1)
			{
				return joaat("gburrito2");
			}
			return joaat("pounder");
			break;
	}
	return joaat("slamvan2");
}

int func_465(bool bParam0, var uParam1, var uParam2)
{
	struct<31> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	bool bVar4;
	
	if (func_61())
	{
		if (bParam0 == 0 || (bParam0 > 0 && unk_0x93BF17E19A9F0E9B(Local_185.f_59[(bParam0 - 1)])))
		{
			if (!func_175(*uParam1))
			{
				return 1;
			}
			Var0.f_4 = 1125515264;
			Var0.f_5 = 1;
			Var0.f_6 = 1;
			Var0.f_8 = 1082130432;
			Var0.f_9 = 1176255488;
			Var0.f_10 = 1;
			Var0.f_13 = 1;
			Var0.f_15 = 2;
			Var0.f_22 = 2;
			Var0.f_25 = 1;
			Var0.f_26 = 1;
			Var0.f_29 = 1123024896;
			Var0.f_30 = 1;
			Var0.f_0 = 0f;
			Var0.f_1 = 0;
			Var0.f_4 = 200f;
			Var0.f_6 = 1;
			Var0.f_5 = 0;
			Var0.f_12 = 1;
			Var0.f_3 = 1;
			Var2 = { func_365(bParam0, Local_185.f_52, Local_185.f_110, Local_185.f_957, func_472()) };
			fVar3 = func_471(bParam0, Local_185.f_52, Local_185.f_110, Local_185.f_957, func_472());
			Var1 = { func_461(Var2, fVar3, 20f) };
			if (func_87(Var2, Var1, func_464(), 0, &Var2, &fVar3, &Var0))
			{
				*uParam1 = { Var2 };
				*uParam2 = fVar3;
				Local_185.f_28[bParam0 /*3*/] = { *uParam1 };
				Local_185.f_41[bParam0] = *uParam2;
				return 1;
			}
			else
			{
				if (Global_2635559.f_682 > 1)
				{
					if (Global_2635559.f_676 > 2)
					{
						bVar4 = true;
					}
				}
				if (!func_175(Global_2635559.f_683))
				{
					if (Global_2635559.f_676 > 2)
					{
						if (!func_33(Global_2635559.f_683, Var2, 0))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					Global_2635559.f_676 = 0;
					func_224();
					func_223();
					Local_185.f_52++;
					if (Local_185.f_52 > 2)
					{
						*uParam1 = { func_365(bParam0, 0, Local_185.f_110, Local_185.f_957, 0) };
						*uParam2 = func_471(bParam0, 0, Local_185.f_110, Local_185.f_957, 0);
						Local_185.f_28[bParam0 /*3*/] = { *uParam1 };
						Local_185.f_41[bParam0] = *uParam2;
						return 1;
					}
				}
			}
		}
	}
	else if (func_450())
	{
		*uParam1 = { func_470(bParam0) };
		*uParam2 = func_468(bParam0);
		return 1;
	}
	else if (func_463())
	{
		*uParam1 = { func_467(bParam0) };
		*uParam2 = func_466(bParam0);
		return 1;
	}
	return 0;
}

float func_466(int iParam0)
{
	switch (func_16())
	{
		case 9:
			if (func_247())
			{
				switch (Local_185.f_679)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								return 147.5271f;
							
							case 1:
								return 154.7648f;
							
							case 2:
								return 174.3838f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 327.4666f;
							
							case 1:
								return 357.546f;
							
							case 2:
								return 39.2522f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 266.595f;
							
							case 1:
								return 324.9111f;
							
							case 2:
								return 356.9818f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return 293.786f;
							
							case 1:
								return 314.3035f;
							
							case 2:
								return 279.6294f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return 299.3501f;
							
							case 1:
								return 298.1051f;
							
							case 2:
								return 327.6068f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (Local_185.f_679)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								return 280.2248f;
							
							case 1:
								return 290f;
							
							case 2:
								return 292.9998f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 272.0344f;
							
							case 1:
								return 268.581f;
							
							case 2:
								return 271.7284f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 96.4944f;
							
							case 1:
								return 78.458f;
							
							case 2:
								return 101.9711f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return 111.1444f;
							
							case 1:
								return 129.8609f;
							
							case 2:
								return 118.5472f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return 87.1994f;
							
							case 1:
								return 87.1994f;
							
							case 2:
								return 87.1995f;
							
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f;
}

Vector3 func_467(int iParam0)
{
	switch (func_16())
	{
		case 9:
			if (func_247())
			{
				switch (Local_185.f_679)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								return 1669.838f, 4463.124f, 30.2346f;
							
							case 1:
								return 1639.418f, 4463.435f, 30.2346f;
							
							case 2:
								return 1689.976f, 4447.034f, 30.2346f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return -2474.625f, 4298.621f, -0.5996f;
							
							case 1:
								return -2466.818f, 4320.201f, 0.7852f;
							
							case 2:
								return -2482.858f, 4284.592f, 0.7852f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 210.034f, 7105.625f, 0.8233f;
							
							case 1:
								return 222.346f, 7102.231f, 0.8233f;
							
							case 2:
								return 192.3831f, 7113.899f, 0.7619f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return 3875.186f, 4438.681f, 0f;
							
							case 1:
								return 3890.5f, 4431.843f, 0.2249f;
							
							case 2:
								return 3874.457f, 4451.473f, 0.3764f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return 3383.365f, 5199.885f, 0.334f;
							
							case 1:
								return 3392.557f, 5191.7f, 0.334f;
							
							case 2:
								return 3374.513f, 5207.521f, 0.334f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (Local_185.f_679)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								return 2861.406f, -589.7202f, 0.0375f;
							
							case 1:
								return 2854.219f, -571.7832f, -0.0609f;
							
							case 2:
								return 2866.62f, -606.0164f, -0.1215f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 2861.664f, -772.0405f, 0.4f;
							
							case 1:
								return 2864.028f, -797.7262f, 0.4f;
							
							case 2:
								return 2852.859f, -761.8168f, 0.4937f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 1153.197f, -2707.234f, 0.2712f;
							
							case 1:
								return 1152.673f, -2722.869f, 0.2712f;
							
							case 2:
								return 1146.269f, -2696.77f, 0.3314f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return -823.7054f, -1421.909f, 0.3542f;
							
							case 1:
								return -814.55f, -1428.77f, 0.3542f;
							
							case 2:
								return -820.3769f, -1412.6f, 0.3492f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return -3142.33f, 603.1377f, -0.1875f;
							
							case 1:
								return -3145.597f, 590.7033f, 0f;
							
							case 2:
								return -3140.239f, 596.7289f, 0.3751f;
							
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_468(int iParam0)
{
	if (func_469())
	{
		if (func_369())
		{
			switch (iParam0)
			{
				case 0:
					return 125.7982f;
				
				case 1:
					return 138.1985f;
				
				case 2:
					return 120.5984f;
				}
			
			default:
		}
		switch (iParam0)
		{
			case 0:
				return 59.9954f;
			
			case 1:
				return 59.9954f;
			
			case 2:
				return 59.9954f;
			
			default:
		}
	}
	else
	{
		if (func_369())
		{
			switch (iParam0)
			{
				case 0:
					return 231.1979f;
				
				case 1:
					return 220.9979f;
				
				case 2:
					return 200.5979f;
				}
			
			default:
		}
		switch (iParam0)
		{
			case 0:
				return 329.1958f;
			
			case 1:
				return 88.7981f;
			
			case 2:
				return 11.9956f;
			}
		
		default:
	}
	return 0f;
}

int func_469()
{
	switch (Local_185.f_0)
	{
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			return 1;
			break;
	}
	return 0;
}

Vector3 func_470(int iParam0)
{
	if (func_469())
	{
		if (func_369())
		{
			switch (iParam0)
			{
				case 0:
					return -2167.467f, -464.1693f, 1.2103f;
				
				case 1:
					return -2140.76f, -497.2295f, 1.142f;
				
				case 2:
					return -2117.403f, -518.1268f, 1.1092f;
				}
			
			default:
		}
		switch (iParam0)
		{
			case 0:
				return -981.4223f, -2994.741f, 12.9451f;
			
			case 1:
				return -1009.04f, -3014.903f, 12.9451f;
			
			case 2:
				return -1008.803f, -2992.59f, 12.9451f;
			
			default:
		}
	}
	else
	{
		if (func_369())
		{
			switch (iParam0)
			{
				case 0:
					return 2110.362f, 4605.95f, 32.5004f;
				
				case 1:
					return 2098.762f, 4580.914f, 31.7869f;
				
				case 2:
					return 2067.822f, 4568.974f, 32.3914f;
				}
			
			default:
		}
		switch (iParam0)
		{
			case 0:
				return 2090.686f, 4757.17f, 40.5952f;
			
			case 1:
				return 2106.546f, 4768.953f, 40.2101f;
			
			case 2:
				return 2066.145f, 4752.323f, 40.5033f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_471(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = uParam2;
	if (iParam4 && iParam3 == 2)
	{
		switch (iVar0)
		{
			case 7:
				return 249.5883f;
			
			case 10:
				return 340.799f;
			
			case 8:
				return 226.7973f;
			
			case 9:
				return 295.592f;
			
			case 6:
				return 20.1886f;
			
			case 17:
				return 233.9995f;
			
			case 20:
				return 44.233f;
			
			case 16:
				return 150.9631f;
			
			case 19:
				return 178.5457f;
			
			case 18:
				return 0.3221f;
			
			case 12:
				return 25.2f;
			
			case 15:
				return 257.1545f;
			
			case 13:
				return 336.3971f;
			
			case 14:
				return 189.1967f;
			
			case 11:
				return 355.5965f;
			
			case 2:
				return 357.7957f;
			
			case 5:
				return 314.995f;
			
			case 3:
				return 134.594f;
			
			case 4:
				return 228.9938f;
			
			case 1:
				return 30.7923f;
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iVar0)
				{
					case 7:
						switch (iParam0)
						{
							case 0:
								return 341.5062f;
							
							case 1:
								return 339.2488f;
							
							case 2:
								return 340.5622f;
							
							case 3:
								return 249.5883f;
							
							default:
						}
						break;
					
					case 10:
						switch (iParam0)
						{
							case 0:
								return 160.7998f;
							
							case 1:
								return 160.5997f;
							
							case 2:
								return 159.9997f;
							
							case 3:
								return 340.799f;
							
							default:
						}
						break;
					
					case 8:
						switch (iParam0)
						{
							case 0:
								return 226.9976f;
							
							case 1:
								return 226.9976f;
							
							case 2:
								return 226.9976f;
							
							case 3:
								return 226.7973f;
							
							default:
						}
						break;
					
					case 9:
						switch (iParam0)
						{
							case 0:
								return 294.9953f;
							
							case 1:
								return 294.9953f;
							
							case 2:
								return 294.9953f;
							
							case 3:
								return 295.592f;
							
							default:
						}
						break;
					
					case 6:
						switch (iParam0)
						{
							case 0:
								return 34.9908f;
							
							case 1:
								return 32.9908f;
							
							case 2:
								return 30.9908f;
							
							case 3:
								return 20.1886f;
							
							default:
						}
						break;
					
					case 17:
						switch (iParam0)
						{
							case 0:
								return 234.6001f;
							
							case 1:
								return 234.6001f;
							
							case 2:
								return 234.6001f;
							
							case 3:
								return 233.9995f;
							
							default:
						}
						break;
					
					case 20:
						switch (iParam0)
						{
							case 0:
								return 358.7308f;
							
							case 1:
								return 358.7193f;
							
							case 2:
								return 90.2674f;
							
							case 3:
								return 44.233f;
							
							default:
						}
						break;
					
					case 16:
						switch (iParam0)
						{
							case 0:
								return 90.5574f;
							
							case 1:
								return 359.4268f;
							
							case 2:
								return 358.5126f;
							
							case 3:
								return 150.9631f;
							
							default:
						}
						break;
					
					case 19:
						switch (iParam0)
						{
							case 0:
								return 139.0354f;
							
							case 1:
								return 140.0933f;
							
							case 2:
								return 180.4328f;
							
							case 3:
								return 178.5457f;
							
							default:
						}
						break;
					
					case 18:
						switch (iParam0)
						{
							case 0:
								return 89.4132f;
							
							case 1:
								return 147.4095f;
							
							case 2:
								return 149.9085f;
							
							case 3:
								return 0.3221f;
							
							default:
						}
						break;
					
					case 12:
						switch (iParam0)
						{
							case 0:
								return 112.1987f;
							
							case 1:
								return 110.3987f;
							
							case 2:
								return 127.1985f;
							
							case 3:
								return 25.2f;
							
							default:
						}
						break;
					
					case 15:
						switch (iParam0)
						{
							case 0:
								return 192.5977f;
							
							case 1:
								return 277.5977f;
							
							case 2:
								return 223.1979f;
							
							case 3:
								return 257.1545f;
							
							default:
						}
						break;
					
					case 13:
						switch (iParam0)
						{
							case 0:
								return 260.3974f;
							
							case 1:
								return 260.3974f;
							
							case 2:
								return 260.3974f;
							
							case 3:
								return 336.3971f;
							
							default:
						}
						break;
					
					case 14:
						switch (iParam0)
						{
							case 0:
								return 184.1966f;
							
							case 1:
								return 184.1966f;
							
							case 2:
								return 184.1966f;
							
							case 3:
								return 189.1967f;
							
							default:
						}
						break;
					
					case 11:
						switch (iParam0)
						{
							case 0:
								return 348.1965f;
							
							case 1:
								return 348.1965f;
							
							case 2:
								return 348.1965f;
							
							case 3:
								return 355.5965f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 354.1997f;
							
							case 1:
								return 350.1997f;
							
							case 2:
								return 353.1997f;
							
							case 3:
								return 357.7957f;
							
							default:
						}
						break;
					
					case 5:
						switch (iParam0)
						{
							case 0:
								return 314.995f;
							
							case 1:
								return 314.995f;
							
							case 2:
								return 314.995f;
							
							case 3:
								return 314.995f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return 134.594f;
							
							case 1:
								return 134.594f;
							
							case 2:
								return 134.594f;
							
							case 3:
								return 134.594f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return 226.9938f;
							
							case 1:
								return 226.9938f;
							
							case 2:
								return 226.9938f;
							
							case 3:
								return 228.9938f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 30.7923f;
							
							case 1:
								return 30.7923f;
							
							case 2:
								return 30.7923f;
							
							case 3:
								return 30.7923f;
							
							default:
						}
						break;
				}
				break;
			
			case 1:
				switch (iVar0)
				{
					case 7:
						switch (iParam0)
						{
							case 0:
								return 249.8551f;
							
							case 1:
								return 248.7611f;
							
							case 2:
								return 341.4139f;
							
							case 3:
								return 251.1714f;
							
							default:
						}
						break;
					
					case 10:
						switch (iParam0)
						{
							case 0:
								return 341.399f;
							
							case 1:
								return 341.399f;
							
							case 2:
								return 341.399f;
							
							case 3:
								return 161.5993f;
							
							default:
						}
						break;
					
					case 8:
						switch (iParam0)
						{
							case 0:
								return 121.9971f;
							
							case 1:
								return 121.9971f;
							
							case 2:
								return 121.9971f;
							
							case 3:
								return 123.3971f;
							
							default:
						}
						break;
					
					case 9:
						switch (iParam0)
						{
							case 0:
								return 115.1943f;
							
							case 1:
								return 115.1943f;
							
							case 2:
								return 115.1943f;
							
							case 3:
								return 114.7914f;
							
							default:
						}
						break;
					
					case 6:
						switch (iParam0)
						{
							case 0:
								return 62.3901f;
							
							case 1:
								return 75.79f;
							
							case 2:
								return 109.9899f;
							
							case 3:
								return 120.7884f;
							
							default:
						}
						break;
					
					case 17:
						switch (iParam0)
						{
							case 0:
								return 299.9998f;
							
							case 1:
								return 299.9998f;
							
							case 2:
								return 299.9998f;
							
							case 3:
								return 269.7981f;
							
							default:
						}
						break;
					
					case 20:
						switch (iParam0)
						{
							case 0:
								return 1.0299f;
							
							case 1:
								return 0.7598f;
							
							case 2:
								return 0.8382f;
							
							case 3:
								return 333.4183f;
							
							default:
						}
						break;
					
					case 16:
						switch (iParam0)
						{
							case 0:
								return 0.1963f;
							
							case 1:
								return 0.2369f;
							
							case 2:
								return 89.2356f;
							
							case 3:
								return 111.3352f;
							
							default:
						}
						break;
					
					case 19:
						switch (iParam0)
						{
							case 0:
								return 91.643f;
							
							case 1:
								return 90.3414f;
							
							case 2:
								return 22.7655f;
							
							case 3:
								return 90.5753f;
							
							default:
						}
						break;
					
					case 18:
						switch (iParam0)
						{
							case 0:
								return 88.9654f;
							
							case 1:
								return 88.9654f;
							
							case 2:
								return 0.489f;
							
							case 3:
								return 91.5284f;
							
							default:
						}
						break;
					
					case 12:
						switch (iParam0)
						{
							case 0:
								return 78.9995f;
							
							case 1:
								return 73.9995f;
							
							case 2:
								return 68.9994f;
							
							case 3:
								return 74.1999f;
							
							default:
						}
						break;
					
					case 15:
						switch (iParam0)
						{
							case 0:
								return 0.9999f;
							
							case 1:
								return 7.1999f;
							
							case 2:
								return 13.3999f;
							
							case 3:
								return 258.3402f;
							
							default:
						}
						break;
					
					case 13:
						switch (iParam0)
						{
							case 0:
								return 255.3967f;
							
							case 1:
								return 256.5966f;
							
							case 2:
								return 262.7966f;
							
							case 3:
								return 271.996f;
							
							default:
						}
						break;
					
					case 14:
						switch (iParam0)
						{
							case 0:
								return 273.1965f;
							
							case 1:
								return 273.1965f;
							
							case 2:
								return 273.1965f;
							
							case 3:
								return 5.5963f;
							
							default:
						}
						break;
					
					case 11:
						switch (iParam0)
						{
							case 0:
								return 352.9965f;
							
							case 1:
								return 352.9965f;
							
							case 2:
								return 351.1965f;
							
							case 3:
								return 348.3964f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 265.1992f;
							
							case 1:
								return 266.3993f;
							
							case 2:
								return 266.3993f;
							
							case 3:
								return 267.7954f;
							
							default:
						}
						break;
					
					case 5:
						switch (iParam0)
						{
							case 0:
								return 314.7944f;
							
							case 1:
								return 44.3943f;
							
							case 2:
								return 43.1943f;
							
							case 3:
								return 45.1943f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return 134.594f;
							
							case 1:
								return 134.594f;
							
							case 2:
								return 134.594f;
							
							case 3:
								return 134.594f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return 224.994f;
							
							case 1:
								return 194.3941f;
							
							case 2:
								return 177.7943f;
							
							case 3:
								return 143.5941f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 27.1922f;
							
							case 1:
								return 27.1922f;
							
							case 2:
								return 27.1922f;
							
							case 3:
								return 27.1922f;
							
							default:
						}
						break;
				}
				break;
			
			case 2:
				switch (iVar0)
				{
					case 7:
						switch (iParam0)
						{
							case 0:
								return 339.6511f;
							
							case 1:
								return 250.1768f;
							
							case 2:
								return 250.5529f;
							
							case 3:
								return 250.8644f;
							
							default:
						}
						break;
					
					case 10:
						switch (iParam0)
						{
							case 0:
								return 340.5994f;
							
							case 1:
								return 340.5994f;
							
							case 2:
								return 340.5994f;
							
							case 3:
								return 341.399f;
							
							default:
						}
						break;
					
					case 8:
						switch (iParam0)
						{
							case 0:
								return 223.3969f;
							
							case 1:
								return 223.3969f;
							
							case 2:
								return 223.3969f;
							
							case 3:
								return 222.1969f;
							
							default:
						}
						break;
					
					case 9:
						switch (iParam0)
						{
							case 0:
								return 305.9928f;
							
							case 1:
								return 305.9928f;
							
							case 2:
								return 305.9928f;
							
							case 3:
								return 305.391f;
							
							default:
						}
						break;
					
					case 6:
						switch (iParam0)
						{
							case 0:
								return 168.3895f;
							
							case 1:
								return 159.1894f;
							
							case 2:
								return 157.1893f;
							
							case 3:
								return 153.7882f;
							
							default:
						}
						break;
					
					case 17:
						switch (iParam0)
						{
							case 0:
								return 178.5991f;
							
							case 1:
								return 178.5991f;
							
							case 2:
								return 178.5991f;
							
							case 3:
								return 179.797f;
							
							default:
						}
						break;
					
					case 20:
						switch (iParam0)
						{
							case 0:
								return 315.1037f;
							
							case 1:
								return 316.1562f;
							
							case 2:
								return 316.2499f;
							
							case 3:
								return 44.6831f;
							
							default:
						}
						break;
					
					case 16:
						switch (iParam0)
						{
							case 0:
								return 0.5054f;
							
							case 1:
								return 359.6695f;
							
							case 2:
								return 89.329f;
							
							case 3:
								return 90.2361f;
							
							default:
						}
						break;
					
					case 19:
						switch (iParam0)
						{
							case 0:
								return 204.477f;
							
							case 1:
								return 206.2505f;
							
							case 2:
								return 205.6789f;
							
							case 3:
								return 179.8434f;
							
							default:
						}
						break;
					
					case 18:
						switch (iParam0)
						{
							case 0:
								return 158.7604f;
							
							case 1:
								return 228.9877f;
							
							case 2:
								return 229.1641f;
							
							case 3:
								return 130.5588f;
							
							default:
						}
						break;
					
					case 12:
						switch (iParam0)
						{
							case 0:
								return 113.3989f;
							
							case 1:
								return 113.3989f;
							
							case 2:
								return 115.7988f;
							
							case 3:
								return 108.9997f;
							
							default:
						}
						break;
					
					case 15:
						switch (iParam0)
						{
							case 0:
								return 187.5977f;
							
							case 1:
								return 187.7977f;
							
							case 2:
								return 187.7977f;
							
							case 3:
								return 255.16f;
							
							default:
						}
						break;
					
					case 13:
						switch (iParam0)
						{
							case 0:
								return 303.3963f;
							
							case 1:
								return 314.3961f;
							
							case 2:
								return 321.7961f;
							
							case 3:
								return 342.1961f;
							
							default:
						}
						break;
					
					case 14:
						switch (iParam0)
						{
							case 0:
								return 182.3966f;
							
							case 1:
								return 182.3966f;
							
							case 2:
								return 182.3966f;
							
							case 3:
								return 205.5968f;
							
							default:
						}
						break;
					
					case 11:
						switch (iParam0)
						{
							case 0:
								return 293.396f;
							
							case 1:
								return 305.5958f;
							
							case 2:
								return 314.5957f;
							
							case 3:
								return 314.5957f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 0:
								return 263.1992f;
							
							case 1:
								return 263.1992f;
							
							case 2:
								return 263.1992f;
							
							case 3:
								return 263.9953f;
							
							default:
						}
						break;
					
					case 5:
						switch (iParam0)
						{
							case 0:
								return 45.1943f;
							
							case 1:
								return 45.1943f;
							
							case 2:
								return 45.1943f;
							
							case 3:
								return 135.794f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam0)
						{
							case 0:
								return 226.9938f;
							
							case 1:
								return 226.9938f;
							
							case 2:
								return 226.9938f;
							
							case 3:
								return 226.9938f;
							
							default:
						}
						break;
					
					case 4:
						switch (iParam0)
						{
							case 0:
								return 224.1938f;
							
							case 1:
								return 224.1938f;
							
							case 2:
								return 224.1938f;
							
							case 3:
								return 224.1938f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam0)
						{
							case 0:
								return 27.1922f;
							
							case 1:
								return 27.1922f;
							
							case 2:
								return 27.1922f;
							
							case 3:
								return 27.1922f;
							
							default:
						}
						break;
				}
				break;
			}
	}
	return 269.4978f;
}

int func_472()
{
	if (func_18() || func_17())
	{
		return 1;
	}
	return 0;
}

int func_473()
{
	return Local_185.f_14;
}

void func_474()
{
	if (func_288() == func_59() && func_241() == 0)
	{
		func_238(2);
	}
}

void func_475()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = false;
	while (bVar0 < func_14())
	{
		if (func_12(bVar0))
		{
			iVar1++;
		}
		if (func_19())
		{
			if (func_479(bVar0))
			{
				bVar3 = func_478(bVar0);
				if (bVar3 != func_59())
				{
					if (func_2258(bVar3, 1, 1))
					{
						bVar2 = bVar3;
						if (!func_11(bVar0, bVar2))
						{
							func_476(bVar0, 1);
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (Local_185.f_978 != iVar1)
	{
		Local_185.f_978 = iVar1;
	}
}

void func_476(bool bParam0, int iParam1)
{
	if ((func_477(bParam0, 0) && (!func_450() || iParam1)) && !func_463())
	{
		unk_0x23EB5FC236231892(unk_0x4A8C381C258A124D(), func_13(bParam0), 0);
		unk_0x66EFB3D6110055C4(0, 23, 1);
	}
}

int func_477(int iParam0, bool bParam1)
{
	if (!func_66(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_12(iParam0))
		{
			return 0;
		}
	}
	if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_185.f_59[iParam0]), 0))
	{
		return 0;
	}
	return 1;
}

bool func_478(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	if (func_31(bParam0))
	{
		iVar0 = 0;
		while (iVar0 < unk_0x95C7A22DBE7AEF4C())
		{
			if (unk_0x7206AEB20960CCC8(iVar0))
			{
				iVar1 = bVar0;
				bVar2 = unk_0x4470BE79F5771783(iVar1);
				if (func_2258(bVar2, 0, 1))
				{
					iVar3 = unk_0x56E414973C2A8C0E(bVar2);
					if (!unk_0x4FAFF4BCB7633475(iVar3))
					{
						if (unk_0x7F420695E3F776FB(iVar3, 0))
						{
							if (unk_0x6EF03BE64E058E2F(iVar3, 0) == unk_0xE38610F405049F71(Local_185.f_59[bParam0]))
							{
								if (unk_0xFD5C5BBD1FE92BB7(unk_0x6EF03BE64E058E2F(iVar3, 0), -1, 0) == iVar3)
								{
									return bVar2;
								}
							}
						}
					}
				}
			}
			bVar0++;
		}
	}
	return func_59();
}

int func_479(bool bParam0)
{
	if (func_19())
	{
		return BitTest(Local_185.f_21, bParam0);
	}
	return 0;
}

void func_480()
{
	bool bVar0;
	
	if (func_6() && func_241() == 0)
	{
		if (!func_29(3))
		{
			if (func_5(&(Local_185.f_959)) && func_26(&(Local_185.f_959), func_485(), 0))
			{
				if (!func_25())
				{
					bVar0 = false;
					while (bVar0 < func_14())
					{
						func_458(func_13(bVar0), bVar0, 1623637790, 0, 0);
						bVar0++;
					}
				}
				func_481(0);
				func_28(3);
			}
		}
	}
}

void func_481(bool bParam0)
{
	struct<14> Var0;
	
	Var0.f_2 = -239271415;
	Var0.f_10 = unk_0x259BE71D8A81D4FA();
	Var0.f_11 = func_288();
	if (bParam0)
	{
		func_483(Var0, func_484(unk_0x259BE71D8A81D4FA()));
	}
	else
	{
		func_483(Var0, func_482(1));
	}
}

int func_482(int iParam0)
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
			if (func_2258(bVar2, 0, 0))
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

void func_483(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0.f_0 = 2041805809;
	Param0.f_1 = unk_0x259BE71D8A81D4FA();
	if (!iParam13 == 0)
	{
		unk_0x01F0B819E78A18A1(1, &Param0, 14, iParam13);
	}
}

int func_484(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, bParam0);
	}
	return uVar0;
}

int func_485()
{
	switch (Local_185.f_16)
	{
		case 1:
			return Global_262145.f_18247;
		
		case 2:
			return Global_262145.f_18248;
		
		case 3:
			return Global_262145.f_18249;
		
		default:
	}
	return Global_262145.f_18248;
}

void func_486()
{
	struct<3> Var0;
	
	Var0 = { func_34(Local_185.f_110) };
	if (!func_175(Var0))
	{
		func_487(&(Local_185.f_953), Var0, 1, 1103626240);
	}
}

void func_487(var uParam0, struct<3> Param1, int iParam2, int iParam3)
{
	if (*uParam0 == -1 || !unk_0x87EDD05291B7412C(*uParam0))
	{
		*uParam0 = unk_0x6991BFCE3D87261B(Param1 - Vector(iParam3, iParam3, iParam3), Param1 + Vector(iParam3, iParam3, iParam3), 1f, 0.25f, iParam2, 1);
	}
}

void func_488()
{
	if (func_349() && func_501())
	{
		if (!func_500())
		{
			if (func_498())
			{
				func_4(&(Local_185.f_856), 0, 0);
			}
		}
		else if (func_496())
		{
			if (!func_5(&(Local_185.f_858)))
			{
				if (func_493() && func_490())
				{
					func_342(&(Local_185.f_856));
					func_4(&(Local_185.f_858), 0, 0);
					if (func_45())
					{
						if (!func_18())
						{
							Local_185.f_966 = unk_0xC5935DFB3F39785A(0, func_14());
						}
					}
				}
			}
		}
		else if (func_489())
		{
			func_493();
			func_490();
			if (func_45())
			{
				if (!func_18())
				{
					Local_185.f_966 = unk_0xC5935DFB3F39785A(0, func_14());
				}
			}
		}
	}
}

int func_489()
{
	return 0;
}

int func_490()
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < func_248())
	{
		if (unk_0x93BF17E19A9F0E9B(Local_185.f_707[bVar0 /*8*/]))
		{
			if ((unk_0xEADBDBE0422CF7E6(Local_185.f_707[bVar0 /*8*/]) || (!unk_0xB0AB1F334666E337(Local_185.f_707[bVar0 /*8*/]) && unk_0x93E08E0F531E2C35())) || (unk_0xB0AB1F334666E337(Local_185.f_707[bVar0 /*8*/]) && unk_0x93E08E0F531E2C35()))
			{
				if (func_344(Local_185.f_707[bVar0 /*8*/]))
				{
					if (!func_18())
					{
						unk_0x091AB029AFE429F2(unk_0xF5014688C9788D5F(Local_185.f_707[bVar0 /*8*/]), 1, 1);
						func_492(&(Local_185.f_707[bVar0 /*8*/]));
					}
					else
					{
						func_491(&(Local_185.f_707[bVar0 /*8*/]));
					}
					func_338(bVar0, 1);
				}
			}
		}
		bVar0++;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < func_248())
	{
		if (unk_0x93BF17E19A9F0E9B(Local_185.f_707[bVar0 /*8*/]))
		{
			return 0;
		}
		bVar0++;
	}
	return 1;
}

void func_491(var uParam0)
{
	var uVar0;
	
	if (unk_0x93BF17E19A9F0E9B(*uParam0))
	{
		uVar0 = unk_0xF5014688C9788D5F(*uParam0);
		unk_0x76AD45C3946F87DD(&uVar0);
	}
}

void func_492(var uParam0)
{
	int iVar0;
	
	if (unk_0x2FC2FDC413532977(*uParam0))
	{
		if (!unk_0xEADBDBE0422CF7E6(*uParam0))
		{
		}
	}
	if (unk_0x93BF17E19A9F0E9B(*uParam0))
	{
		iVar0 = unk_0xF5014688C9788D5F(*uParam0);
		unk_0x81A7F3CD719DD53B(&iVar0);
	}
}

int func_493()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_495())
	{
		if (unk_0x93BF17E19A9F0E9B(Local_185.f_837[iVar0 /*6*/]))
		{
			if ((unk_0xEADBDBE0422CF7E6(Local_185.f_837[iVar0 /*6*/]) || (!unk_0xB0AB1F334666E337(Local_185.f_837[iVar0 /*6*/]) && unk_0x93E08E0F531E2C35())) || (unk_0xB0AB1F334666E337(Local_185.f_837[iVar0 /*6*/]) && unk_0x93E08E0F531E2C35()))
			{
				if (func_344(Local_185.f_837[iVar0 /*6*/]))
				{
					if (!func_18())
					{
						unk_0x091AB029AFE429F2(unk_0xF5014688C9788D5F(Local_185.f_837[iVar0 /*6*/]), 1, 1);
					}
					func_491(&(Local_185.f_837[iVar0 /*6*/]));
					func_342(&(Local_185.f_915[iVar0 /*2*/]));
					func_494(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_495())
	{
		if (unk_0x93BF17E19A9F0E9B(Local_185.f_837[iVar0 /*6*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_494(int iParam0, int iParam1)
{
	Local_185.f_837[iParam0 /*6*/].f_5 = iParam1;
}

int func_495()
{
	switch (func_16())
	{
		case 12:
		case 0:
			return 2;
		
		default:
	}
	return 0;
}

int func_496()
{
	if (func_5(&(Local_185.f_856)))
	{
		if (func_26(&(Local_185.f_856), func_497(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_497()
{
	return 10000;
}

int func_498()
{
	int iVar0;
	
	iVar0 = 0;
	switch (func_16())
	{
		case 0:
			if ((Local_185.f_837[0 /*6*/].f_5 == 4 && Local_185.f_837[1 /*6*/].f_5 == 4) || func_499())
			{
				iVar0 = 1;
			}
			break;
	}
	return iVar0;
}

int func_499()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_248())
	{
		if (Local_185.f_707[iVar0 /*8*/].f_5 != 18)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_500()
{
	return func_5(&(Local_185.f_856));
}

int func_501()
{
	switch (func_16())
	{
		case 12:
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

void func_502()
{
	int iVar0;
	bool bVar1;
	
	if (func_501())
	{
		iVar0 = 0;
		while (iVar0 < func_495())
		{
			switch (func_512(iVar0))
			{
				case 0:
					break;
				
				case 1:
					if (!unk_0x93BF17E19A9F0E9B(Local_185.f_837[iVar0 /*6*/]))
					{
						if (func_509())
						{
							if (func_5(&(Local_185.f_858)))
							{
								func_342(&(Local_185.f_858));
							}
							if (func_259(func_351()))
							{
								if (func_505(iVar0, func_351()))
								{
									func_494(iVar0, 2);
								}
							}
						}
					}
					break;
				
				case 2:
					if (func_349())
					{
						bVar1 = false;
						while (bVar1 < func_248())
						{
							if (func_325(bVar1, 0))
							{
							}
							bVar1++;
						}
					}
					if (func_503(iVar0))
					{
						func_494(iVar0, 3);
						if (!func_29(29) && func_15())
						{
							func_28(29);
						}
					}
					break;
				
				case 3:
					if (unk_0x93BF17E19A9F0E9B(Local_185.f_837[iVar0 /*6*/]))
					{
						if (!unk_0xD9F5E1FEFD1329E4(unk_0xE38610F405049F71(Local_185.f_837[iVar0 /*6*/]), 0) || unk_0x1C2F771CDC87A3A5(unk_0xE38610F405049F71(Local_185.f_837[iVar0 /*6*/]), 0))
						{
							func_494(iVar0, 4);
						}
					}
					break;
				
				case 4:
					break;
				
				case 5:
					break;
			}
			iVar0++;
		}
	}
}

int func_503(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	switch (func_16())
	{
		case 12:
		case 0:
			iVar1 = 0;
			while (iVar1 < func_248())
			{
				if (iParam0 == 0)
				{
					if (unk_0x93BF17E19A9F0E9B(Local_185.f_707[0 /*8*/]) && unk_0x93BF17E19A9F0E9B(Local_185.f_707[1 /*8*/]))
					{
						if (!func_504(unk_0xC35A3A4C05A4831B(Local_185.f_707[0 /*8*/]), unk_0xE38610F405049F71(Local_185.f_837[iParam0 /*6*/]), 0) || !func_504(unk_0xC35A3A4C05A4831B(Local_185.f_707[1 /*8*/]), unk_0xE38610F405049F71(Local_185.f_837[iParam0 /*6*/]), 0))
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
				else if (unk_0x93BF17E19A9F0E9B(Local_185.f_707[2 /*8*/]) && unk_0x93BF17E19A9F0E9B(Local_185.f_707[3 /*8*/]))
				{
					if (!func_504(unk_0xC35A3A4C05A4831B(Local_185.f_707[2 /*8*/]), unk_0xE38610F405049F71(Local_185.f_837[iParam0 /*6*/]), 0) || !func_504(unk_0xC35A3A4C05A4831B(Local_185.f_707[3 /*8*/]), unk_0xE38610F405049F71(Local_185.f_837[iParam0 /*6*/]), 0))
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
				iVar1++;
			}
			break;
	}
	return iVar0;
}

int func_504(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xFC8BFE4B41177C22(iParam0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if ((unk_0xFC8BFE4B41177C22(iParam1) && !unk_0x1C2F771CDC87A3A5(iParam1, 0)) && unk_0x55B80B6E7AB61270(iParam1))
		{
			if (unk_0xCECDBB848D53DEB2(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_505(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	bool bVar2;
	float fVar3;
	struct<3> Var4;
	float fVar5;
	bool bVar6;
	float fVar7;
	struct<3> Var8;
	
	switch (func_16())
	{
		case 12:
			if (Local_185.f_860.f_6 == -1 || Local_185.f_860.f_6 == iParam0)
			{
				iVar0 = func_508();
				Local_185.f_860.f_6 = iParam0;
				if (unk_0xFC8BFE4B41177C22(iVar0))
				{
					if (func_175(Local_185.f_860.f_7))
					{
						if (func_175(Local_185.f_860.f_13))
						{
							Local_185.f_860.f_13 = { unk_0x90D0E0397D3F7690(iVar0) };
						}
						else
						{
							if ((Local_185.f_860.f_13.f_2 >= 0f && Local_185.f_860.f_13.f_2 < 90f) || (Local_185.f_860.f_13.f_2 >= 270f && Local_185.f_860.f_13.f_2 < 360f))
							{
								fVar1 = 220f;
							}
							else
							{
								fVar1 = 120f;
							}
							bVar2 = true;
							if (unk_0x604F09F8F9DA5404(unk_0xD1A6A821F5AC81DB(iVar0, 1), Local_185.f_860.f_13, fVar1, &(Local_185.f_860.f_7)))
							{
								fVar3 = unk_0xED977E2AE2CB16EE(Local_185.f_860.f_7, unk_0xD1A6A821F5AC81DB(iVar0, 0), 1);
								Var4 = { unk_0xAD8278DAEC2CC059(iVar0, Local_185.f_860.f_7) };
								if (fVar3 > 290f)
								{
									bVar2 = false;
								}
								if (!func_172(Local_185.f_860.f_7, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 190f, 0, -1, 1, 0, 0, 0, 0, 0))
								{
									bVar2 = false;
								}
								if (unk_0x1D5CD3EAAA7422B0(Var4.f_0) > 100f)
								{
									bVar2 = false;
								}
								if (!bVar2)
								{
									Local_185.f_860.f_7 = { 0f, 0f, 0f };
								}
								else
								{
									Local_185.f_860.f_10 = func_507(Local_185.f_860.f_7, unk_0xD1A6A821F5AC81DB(iVar0, 1));
								}
							}
							else
							{
								func_506(&(Local_185.f_860.f_13));
							}
						}
					}
					if (!func_175(Local_185.f_860.f_7))
					{
						if (func_355(&(Local_185.f_837[iParam0 /*6*/]), iParam1, Local_185.f_860.f_7, Local_185.f_860.f_10, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							func_354(iParam0);
							unk_0x55098D9E9AD58806(iParam1);
							Local_185.f_860.f_6 = -1;
							Local_185.f_860.f_7 = { 0f, 0f, 0f };
							Local_185.f_860.f_10 = 0f;
							Local_185.f_860.f_12 = 0;
							Local_185.f_860.f_11 = 0;
							Local_185.f_882 = (Local_185.f_882 + 1f);
							return 1;
						}
					}
				}
			}
			break;
		
		case 0:
			if (Local_185.f_860 == -1)
			{
				if (unk_0x93BF17E19A9F0E9B(Local_185.f_59[Local_185.f_966]))
				{
					if (func_36(Local_185.f_59[Local_185.f_966]))
					{
						if (Local_185.f_860.f_6 == -1 || Local_185.f_860.f_6 == iParam0)
						{
							Local_185.f_860.f_6 = iParam0;
							if (func_175(Local_185.f_860.f_7))
							{
								if (func_175(Local_185.f_860.f_13))
								{
									Local_185.f_860.f_13 = { unk_0x90D0E0397D3F7690(unk_0xE38610F405049F71(Local_185.f_59[Local_185.f_966])) };
								}
								else
								{
									if ((Local_185.f_860.f_13.f_2 >= 0f && Local_185.f_860.f_13.f_2 < 90f) || (Local_185.f_860.f_13.f_2 >= 270f && Local_185.f_860.f_13.f_2 < 360f))
									{
										fVar5 = 220f;
									}
									else
									{
										fVar5 = 120f;
									}
									bVar6 = true;
									if (unk_0x604F09F8F9DA5404(unk_0xD1A6A821F5AC81DB(unk_0xF5014688C9788D5F(Local_185.f_59[Local_185.f_966]), 1), Local_185.f_860.f_13, fVar5, &(Local_185.f_860.f_7)))
									{
										fVar7 = unk_0xED977E2AE2CB16EE(Local_185.f_860.f_7, unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_185.f_59[Local_185.f_966]), 0), 1);
										Var8 = { unk_0xAD8278DAEC2CC059(unk_0xE38610F405049F71(Local_185.f_59[Local_185.f_966]), Local_185.f_860.f_7) };
										if (fVar7 > 290f)
										{
											bVar6 = false;
										}
										if (!func_172(Local_185.f_860.f_7, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 190f, 0, -1, 1, 0, 0, 0, 0, 0))
										{
											bVar6 = false;
										}
										if (unk_0x1D5CD3EAAA7422B0(Var8.f_0) > 100f)
										{
											bVar6 = false;
										}
										if (!bVar6)
										{
											Local_185.f_860.f_7 = { 0f, 0f, 0f };
										}
										else
										{
											Local_185.f_860.f_10 = func_507(Local_185.f_860.f_7, unk_0xD1A6A821F5AC81DB(unk_0xF5014688C9788D5F(Local_185.f_59[Local_185.f_966]), 1));
										}
									}
									else
									{
										func_506(&(Local_185.f_860.f_13));
									}
								}
							}
							if (!func_175(Local_185.f_860.f_7))
							{
								if (func_355(&(Local_185.f_837[iParam0 /*6*/]), iParam1, Local_185.f_860.f_7, Local_185.f_860.f_10, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
								{
									func_354(iParam0);
									unk_0x55098D9E9AD58806(iParam1);
									Local_185.f_860.f_6 = -1;
									Local_185.f_860.f_7 = { 0f, 0f, 0f };
									Local_185.f_860.f_10 = 0f;
									Local_185.f_860.f_12 = 0;
									Local_185.f_860.f_11 = 0;
									Local_185.f_882 = (Local_185.f_882 + 1f);
									return 1;
								}
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

void func_506(var uParam0)
{
	Local_185.f_860.f_12++;
	if (Local_185.f_860.f_12 < 5)
	{
		switch (Local_185.f_860.f_12)
		{
			case 1:
			case 2:
				*uParam0 = { *uParam0 + Vector(10f, 0f, 0f) };
				break;
			
			case 3:
				*uParam0 = { *uParam0 - Vector(30f, 0f, 0f) };
				break;
			
			case 4:
				*uParam0 = { *uParam0 - Vector(10f, 0f, 0f) };
				break;
		}
		if (uParam0->f_2 > 360f)
		{
			uParam0->f_2 = (uParam0->f_2 - 360f);
		}
	}
	else
	{
		Local_185.f_860.f_12 = 0;
		*uParam0 = { *uParam0 + Vector(20f, 0f, 0f) };
	}
}

var func_507(struct<2> Param0, var uParam1, struct<2> Param2, Vector3 vParam3)
{
	return unk_0x97BC40FFA2FFCCD2((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

int func_508()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_24())
	{
		if (Local_185.f_101[iVar0] != -1)
		{
			iVar1 = unk_0x56E414973C2A8C0E(unk_0xB23E0F9B63D009A8(Local_185.f_101[iVar0]));
			if (unk_0xFC8BFE4B41177C22(iVar1))
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_509()
{
	if (func_241() != 0)
	{
		return 0;
	}
	if (func_18())
	{
		if (Local_185.f_882 >= IntToFloat(func_511()))
		{
			return 0;
		}
	}
	if (func_15())
	{
		if (func_41())
		{
			if (func_29(24))
			{
				return 1;
			}
		}
	}
	if (func_18())
	{
		if (func_62(20))
		{
			if (func_5(&(Local_185.f_856)))
			{
				return 0;
			}
		}
	}
	if (func_5(&(Local_185.f_858)))
	{
		if (!func_26(&(Local_185.f_858), 3000, 0))
		{
			return 0;
		}
	}
	if (func_510())
	{
		if (func_62(9))
		{
			return 1;
		}
	}
	if (func_62(20))
	{
		return 1;
	}
	return 0;
}

int func_510()
{
	if (((func_62(10) || func_62(11)) || func_62(12)) || func_62(13))
	{
		return 1;
	}
	return 0;
}

int func_511()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Global_1949957;
	if (Global_1949955 == 1)
	{
		iVar1 = 3;
	}
	if (func_18())
	{
		switch (iVar1)
		{
			case 1:
			case 4:
				iVar0 = Global_262145.f_16720 * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				iVar0 = Global_262145.f_16719 * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			
			case 3:
				iVar0 = Global_262145.f_16718 * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			
			default:
				iVar0 = 6;
				break;
			}
	}
	return iVar0;
}

int func_512(int iParam0)
{
	return Local_185.f_837[iParam0 /*6*/].f_5;
}

void func_513()
{
	bool bVar0;
	bool bVar1;
	
	if (func_349())
	{
		bVar0 = false;
		while (bVar0 < func_248())
		{
			switch (func_526(bVar0))
			{
				case 0:
					break;
				
				case 1:
					if (func_348(bVar0))
					{
						if (func_17())
						{
							func_338(bVar0, 19);
						}
						else if (func_15())
						{
							func_338(bVar0, 9);
						}
						else
						{
							func_338(bVar0, 2);
						}
					}
					break;
				
				case 11:
					if (func_525())
					{
						if (func_348(bVar0))
						{
							if (unk_0x1C2F771CDC87A3A5(func_524(bVar0), 0))
							{
								func_338(bVar0, 18);
							}
							else if (BitTest(Local_185.f_9, bVar0))
							{
								func_338(bVar0, 10);
							}
						}
					}
					break;
				
				case 19:
					break;
				
				case 2:
					if (func_348(bVar0))
					{
						switch (func_16())
						{
							case 0:
							case 4:
								if (!unk_0x1C2F771CDC87A3A5(func_524(bVar0), 0))
								{
									func_338(bVar0, func_523(bVar0));
								}
								else
								{
									func_338(bVar0, 18);
								}
								break;
							}
					}
					break;
				
				case 6:
					if (func_348(bVar0))
					{
						if (unk_0x1C2F771CDC87A3A5(func_522(bVar0), 0))
						{
							func_338(bVar0, 18);
						}
						else
						{
							if (func_18())
							{
								func_516(bVar0);
							}
							if (BitTest(Local_185.f_886, bVar0))
							{
								func_338(bVar0, 14);
							}
						}
					}
					break;
				
				case 9:
					if (func_348(bVar0))
					{
						if (unk_0x1C2F771CDC87A3A5(func_522(bVar0), 0))
						{
							func_338(bVar0, 18);
						}
						else
						{
							if (func_15() || func_18())
							{
								func_516(bVar0);
							}
							if (BitTest(Local_185.f_886, bVar0))
							{
								func_338(bVar0, 14);
							}
							if (func_15() && func_232(0))
							{
								func_338(bVar0, 10);
							}
						}
					}
					break;
				
				case 8:
					if (func_348(bVar0))
					{
						if (unk_0x1C2F771CDC87A3A5(func_522(bVar0), 0))
						{
							func_338(bVar0, 18);
						}
						else if (func_18())
						{
							func_516(bVar0);
						}
					}
					break;
				
				case 12:
					break;
				
				case 13:
					break;
				
				case 17:
					break;
				
				case 14:
					if (func_348(bVar0))
					{
						if (unk_0x1C2F771CDC87A3A5(func_522(bVar0), 0))
						{
							func_338(bVar0, 18);
						}
						else
						{
							if (func_473() > 1)
							{
								func_338(bVar0, 10);
							}
							func_516(bVar0);
						}
					}
					break;
				
				case 15:
					break;
				
				case 16:
					break;
				
				case 18:
					if (func_23())
					{
						bVar1 = func_514(bVar0);
						if (bVar1 != -1)
						{
							func_71(1);
							Local_185.f_184[bVar1]++;
							func_8(bVar1, Local_185.f_175[bVar1]);
							func_491(&(Local_185.f_707[bVar0 /*8*/]));
							func_338(bVar0, 10);
						}
					}
					break;
				
				case 20:
					break;
			}
			bVar0++;
		}
	}
}

int func_514(bool bParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	bool bVar4;
	
	fVar1 = 9999.99f;
	if (func_348(bParam0))
	{
		iVar0 = 0;
		while (iVar0 < func_24())
		{
			bVar4 = unk_0xB23E0F9B63D009A8(Local_185.f_101[iVar0]);
			if (Local_185.f_101[iVar0] != -1 && unk_0x762604C40829DB72(bVar4))
			{
				fVar2 = func_515(unk_0x56E414973C2A8C0E(bVar4), func_524(bParam0), 1);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = iVar0;
				}
			}
			iVar0++;
		}
	}
	return iVar3;
}

float func_515(int iParam0, int iParam1, int iParam2)
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

void func_516(bool bParam0)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	
	fVar0 = func_521();
	fVar1 = func_520();
	if (func_15())
	{
		iVar3 = func_519(bParam0, &bVar2);
	}
	else
	{
		iVar3 = func_518(bParam0, &bVar2, 0);
	}
	if (unk_0xFC8BFE4B41177C22(iVar3))
	{
		if (!BitTest(Local_185.f_885, bParam0))
		{
			if (func_515(func_522(bParam0), iVar3, 1) > fVar0)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_885), bParam0);
			}
			else if (func_515(func_522(bParam0), iVar3, 1) > fVar1)
			{
				if (!func_5(&(Local_185.f_707[bParam0 /*8*/].f_6)))
				{
					func_4(&(Local_185.f_707[bParam0 /*8*/].f_6), 0, 0);
				}
				else if (func_26(&(Local_185.f_707[bParam0 /*8*/].f_6), func_517(), 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_885), bParam0);
				}
			}
			else if (func_5(&(Local_185.f_707[bParam0 /*8*/].f_6)))
			{
				func_342(&(Local_185.f_707[bParam0 /*8*/].f_6));
			}
		}
		if (func_15() || func_18())
		{
			if (!BitTest(Local_185.f_885, bParam0))
			{
				if (!BitTest(Local_185.f_886, bParam0))
				{
					if (Local_185.f_175[bVar2] >= 0)
					{
						Var4 = { func_414(func_16(), Local_185.f_175[bVar2], Local_185.f_679, bVar2, 0, 0) };
						fVar5 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(func_522(bParam0), 0), Var4, 1);
						if (fVar5 < 100f)
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_886), bParam0);
						}
					}
				}
			}
		}
	}
}

int func_517()
{
	return 10000;
}

int func_518(bool bParam0, var uParam1, int iParam2)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar1 = 9999.99f;
	iVar3 = -1;
	if (func_45())
	{
		bVar0 = false;
		while (bVar0 < func_14())
		{
			if (unk_0xFC8BFE4B41177C22(func_13(bVar0)))
			{
				if (!func_12(bVar0) || iParam2)
				{
					fVar2 = func_515(unk_0xC35A3A4C05A4831B(Local_185.f_707[bParam0 /*8*/]), func_13(bVar0), 1);
					if (fVar2 < fVar1)
					{
						fVar1 = fVar2;
						iVar3 = func_13(bVar0);
						*uParam1 = bVar0;
					}
				}
			}
			bVar0++;
		}
	}
	else
	{
		iVar3 = func_13(0);
		*uParam1 = 0;
	}
	return iVar3;
}

int func_519(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 9999.99f;
	iVar0 = 0;
	while (iVar0 < func_24())
	{
		if (Local_185.f_101[iVar0] != -1)
		{
			iVar2 = unk_0x56E414973C2A8C0E(unk_0xB23E0F9B63D009A8(Local_185.f_101[iVar0]));
			if (unk_0xFC8BFE4B41177C22(iVar2))
			{
				fVar4 = func_515(unk_0xC35A3A4C05A4831B(Local_185.f_707[iParam0 /*8*/]), iVar2, 1);
				if (fVar4 < fVar3)
				{
					fVar3 = fVar4;
					iVar1 = iVar2;
					*uParam1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

float func_520()
{
	return 600f;
}

float func_521()
{
	return 800f;
}

int func_522(bool bParam0)
{
	if (func_348(bParam0))
	{
		return unk_0xF5014688C9788D5F(Local_185.f_707[bParam0 /*8*/]);
	}
	return 0;
}

int func_523(bool bParam0)
{
	switch (func_16())
	{
		case 7:
			return 19;
		
		case 0:
			switch (bParam0)
			{
				case 0:
				case 2:
					return 6;
				
				case 1:
				case 3:
					return 8;
				
				default:
			}
			break;
	}
	return 2;
}

int func_524(bool bParam0)
{
	if (func_348(bParam0))
	{
		return unk_0xC35A3A4C05A4831B(Local_185.f_707[bParam0 /*8*/]);
	}
	return 0;
}

int func_525()
{
	switch (Local_185.f_17)
	{
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_526(int iParam0)
{
	return Local_185.f_707[iParam0 /*8*/].f_5;
}

void func_527()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (func_25())
	{
		if (!func_232(0))
		{
			bVar2 = false;
			while (bVar2 < func_24())
			{
				bVar3 = unk_0xB23E0F9B63D009A8(Local_185.f_101[bVar2]);
				if (Local_185.f_101[bVar2] != -1)
				{
					if (unk_0x762604C40829DB72(bVar3))
					{
						if (!func_12(bVar2))
						{
							func_64(bVar3, bVar2);
							func_543(&iVar0, bVar2);
							if (Local_185.f_175[bVar2] != iVar0)
							{
								Local_185.f_175[bVar2] = iVar0;
							}
							iVar0 = 0;
						}
					}
				}
				bVar2++;
			}
		}
	}
	else if (func_45())
	{
		bVar1 = false;
		while (bVar1 < func_14())
		{
			if (unk_0xFC8BFE4B41177C22(func_13(bVar1)) && !func_12(bVar1))
			{
				func_528(func_13(bVar1), bVar1, &iVar0);
				if (Local_185.f_175[bVar1] != iVar0)
				{
					Local_185.f_175[bVar1] = iVar0;
				}
				iVar0 = 0;
			}
			bVar1++;
		}
	}
	else if (unk_0xFC8BFE4B41177C22(func_13(0)))
	{
		func_528(func_13(0), 0, &iVar0);
		if (Local_185.f_175[0] != iVar0)
		{
			Local_185.f_175[0] = iVar0;
		}
	}
}

void func_528(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	bool bVar7;
	struct<3> Var8;
	struct<3> Var9;
	
	bVar3 = -1;
	fVar5 = 1E+07f;
	if (!func_232(0))
	{
		if (func_541() && !func_19())
		{
			if (func_540(bParam1))
			{
			}
			iVar1 = func_539(bParam1);
			if (iVar1 < 10)
			{
				if (unk_0x2FC2FDC413532977(Local_185.f_193[iVar1 /*47*/][bParam1]))
				{
					iVar6 = unk_0xF5014688C9788D5F(Local_185.f_193[iVar1 /*47*/][bParam1]);
				}
			}
		}
		else if (func_19() && func_2258(Local_185.f_27, 0, 1))
		{
			iVar6 = unk_0x56E414973C2A8C0E(Local_185.f_27);
		}
		else
		{
			iVar6 = iParam0;
		}
		bVar0 = false;
		while (bVar0 < func_235())
		{
			if (func_368())
			{
				if (bVar3 == -1)
				{
					if (BitTest(Local_185.f_134[bParam1], bVar0))
					{
						bVar3 = bVar0;
					}
				}
			}
			else if (BitTest(Local_185.f_134[bParam1], bVar0) && !func_538(bVar0))
			{
				Var2 = { func_414(func_16(), bVar0, Local_185.f_679, bParam1, 0, func_479(bParam1)) };
				fVar4 = unk_0xED977E2AE2CB16EE(Var2, unk_0xD1A6A821F5AC81DB(iParam0, 0), 1);
				if (fVar4 < fVar5)
				{
					fVar5 = fVar4;
					*iParam2 = bVar0;
				}
			}
			bVar0++;
		}
		if (func_368())
		{
			if (bVar3 != -1)
			{
				*iParam2 = bVar3;
			}
		}
		if (unk_0xFC8BFE4B41177C22(iVar6) && !unk_0x1C2F771CDC87A3A5(iVar6, 0))
		{
			Var8 = { func_414(func_16(), *iParam2, Local_185.f_679, bParam1, 0, func_479(bParam1)) };
			if (((func_74() && func_537(iParam0, bParam1)) || ((func_27() && func_534(Var8, iVar6, 1)) && unk_0xE7B45027762DEFE7(func_478(bParam1)) == 0)) || ((!func_74() && !func_27()) && func_534(Var8, iVar6, 1)))
			{
				if (func_74())
				{
					if (!BitTest(Local_185.f_4, bParam1))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_4), bParam1);
					}
				}
				if (!func_29(23))
				{
					func_28(23);
				}
				if (func_27() && !func_41())
				{
					func_48(6);
					func_533(2);
				}
				else if (func_19() && !BitTest(Local_185.f_21, bParam1))
				{
					bVar7 = func_478(bParam1);
					if (bVar7 != func_59())
					{
						func_532(bParam1);
						func_9(1, bVar7, bParam1);
					}
				}
				else
				{
					func_38(*iParam2, bParam1);
					if (func_541() || func_74())
					{
						if (!func_450())
						{
							Var9 = { func_531(bParam1, 0) };
							if (func_19())
							{
								if (unk_0xFC8BFE4B41177C22(iVar6) && !unk_0x1C2F771CDC87A3A5(iVar6, 0))
								{
									Var9 = { unk_0xD1A6A821F5AC81DB(iVar6, 1) };
								}
							}
							unk_0xF37CDE164C892195(-1, func_530(), Var9, func_529(), 1, 0, 0);
						}
					}
					if (func_45())
					{
						if (func_539(bParam1) == func_236(bParam1) || func_74())
						{
							func_47(bParam1);
						}
					}
					else if (func_232(0))
					{
						func_47(bParam1);
					}
					if (func_19())
					{
						func_7(bParam1);
						func_9(0, Local_185.f_27, bParam1);
						Local_185.f_27 = func_59();
					}
				}
			}
		}
	}
}

char* func_529()
{
	switch (func_16())
	{
		case 3:
			return "DLC_Biker_Sell_Trash_Sounds";
		
		case 5:
			return "DLC_Biker_Sell_Postman_Sounds";
		
		case 2:
			return "DLC_Biker_Air_Drop_Sounds";
		
		case 4:
		case 8:
			return "GTAO_Biker_Modes_Soundset";
		
		default:
	}
	if (func_25())
	{
		return "GTAO_Biker_Modes_Soundset";
	}
	return "DLC_Biker_Sell_Sea_Sounds";
}

char* func_530()
{
	switch (func_16())
	{
		case 4:
		case 8:
			return "Deliver_Item";
		
		default:
	}
	if (func_25())
	{
		return "Deliver_Item";
	}
	return "Drop_Package";
}

Vector3 func_531(bool bParam0, bool bParam1)
{
	struct<3> Var0;
	
	if (func_66(bParam0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(func_67(bParam0), 1) };
	}
	if (bParam1)
	{
		Var0 = { Var0 + Vector(0f, 5f, 5f) };
	}
	return Var0;
}

void func_532(bool bParam0)
{
	if (!BitTest(Local_185.f_21, bParam0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_21), bParam0);
	}
}

void func_533(bool bParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Local_186[unk_0xAE032CEDCF23C6D5() /*29*/].f_2), bParam0);
}

int func_534(struct<3> Param0, int iParam1, bool bParam2)
{
	if (unk_0x65FFA94B82A71741(iParam1, Param0, func_535(bParam2), 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

Vector3 func_535(bool bParam0)
{
	if (func_23())
	{
		return 2f, 2f, 2f;
	}
	if (func_450())
	{
		if (func_255())
		{
			if (bParam0)
			{
				return (150f / 3f), (150f / 3f), (150f * 1.5f);
			}
			return (150f / 4f), (150f / 4f), (150f * 1.5f);
		}
		return (150f / 2f), (150f / 2f), (150f * 1.5f);
	}
	else if (func_536() && !func_19())
	{
		if (func_368())
		{
			return (20f * 1.2f), (20f * 1.2f), (3f * 2f);
		}
		else if (bParam0)
		{
			return (20f * 1.5f), (20f * 1.5f), 3f;
		}
		else
		{
			return (20f * 1.2f), (20f * 1.2f), 3f;
		}
	}
	if (func_43())
	{
		return 3f, 3f, 5f;
	}
	return 3f, 3f, 3f;
}

int func_536()
{
	switch (Local_185.f_17)
	{
		case 3:
		case 4:
		case 5:
		case 9:
			return 1;
		
		default:
	}
	return 0;
}

int func_537(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (unk_0x93BF17E19A9F0E9B(Local_185.f_64[bParam1]))
	{
		iVar0 = unk_0xE38610F405049F71(Local_185.f_64[bParam1]);
		if (unk_0xFC8BFE4B41177C22(iVar0) && unk_0xD9F5E1FEFD1329E4(iVar0, 0))
		{
			if (unk_0x5105BE70DEF1F5FB(iParam0, unk_0x0D1381B6E0F3987D(iVar0, 0f, 0.3f, 0.1f), unk_0x0D1381B6E0F3987D(iVar0, 0f, -3.4f, 1.4f), 2.1f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_538(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (BitTest(Local_185.f_145[iVar0], bParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_539(bool bParam0)
{
	if (bParam0 == -1)
	{
		return Local_185.f_122;
	}
	if ((((func_45() || func_15()) || func_23()) || func_44()) || func_43())
	{
		return Local_185.f_124[bParam0];
	}
	else
	{
		return Local_185.f_122;
	}
	return 0;
}

int func_540(int iParam0)
{
	if (func_19())
	{
		return BitTest(Local_185.f_21, iParam0);
	}
	return 1;
}

int func_541()
{
	if (func_368())
	{
		return 0;
	}
	if (func_450() || (func_536() && func_542()))
	{
		if (!func_525())
		{
			return 1;
		}
	}
	return 0;
}

bool func_542()
{
	if (func_237() || func_19())
	{
		return 1;
	}
	return func_230() < (func_73(-1) - 1);
}

void func_543(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	
	bVar1 = unk_0xB23E0F9B63D009A8(Local_185.f_101[bParam1]);
	if (Local_185.f_101[bParam1] != -1)
	{
		if (unk_0x762604C40829DB72(bVar1))
		{
			iVar0 = unk_0x56E414973C2A8C0E(bVar1);
			func_544(bParam1, iVar0, uParam0);
		}
	}
}

void func_544(bool bParam0, int iParam1, var uParam2)
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	fVar3 = 1E+07f;
	Var4 = { unk_0xD1A6A821F5AC81DB(iParam1, 0) };
	bVar0 = false;
	while (bVar0 < func_235())
	{
		if (BitTest(Local_185.f_134[bParam0], bVar0))
		{
			if (!func_538(bVar0))
			{
				Var1 = { func_414(func_16(), bVar0, Local_185.f_679, bParam0, 0, 0) };
				fVar2 = unk_0xED977E2AE2CB16EE(Var1, Var4, 1);
				if (fVar2 < fVar3)
				{
					fVar3 = fVar2;
					*uParam2 = bVar0;
				}
			}
		}
		bVar0++;
	}
}

void func_545()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	
	func_557();
	if (func_541())
	{
		if (func_555())
		{
			bVar0 = false;
			while (bVar0 < func_14())
			{
				iVar1 = (25 + bVar0);
				bVar2 = iVar1;
				if (func_62(bVar2))
				{
					if (Local_185.f_664[bVar0] < 10)
					{
						switch (Local_185.f_669[bVar0])
						{
							case 0:
								Local_185.f_669[bVar0]++;
								break;
							
							case 1:
								if (BitTest(Local_185.f_967, bVar0))
								{
									Var3 = { unk_0x0D1381B6E0F3987D(func_67(bVar0), func_554()) };
									if (func_66(bVar0) && func_549(Var3, func_553(bVar0), bVar0))
									{
										Local_185.f_664[bVar0]++;
										func_2(bVar2);
										Local_185.f_669[bVar0] = 0;
										unk_0x8744D2E3FC95740E(&(Local_185.f_967), bVar0);
									}
								}
								else
								{
									func_2(bVar2);
								}
								break;
							}
						}
				}
				bVar0++;
			}
		}
	}
	func_546();
}

void func_546()
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	while (iVar5 < func_14())
	{
		iVar4 = 0;
		while (iVar4 < 10)
		{
			if (unk_0x2FC2FDC413532977(Local_185.f_193[iVar4 /*47*/][iVar5]) && unk_0x93BF17E19A9F0E9B(Local_185.f_193[iVar4 /*47*/][iVar5]))
			{
				if (func_344(Local_185.f_193[iVar4 /*47*/][iVar5]))
				{
					unk_0x96CCECDBC57DA984(unk_0xF5014688C9788D5F(Local_185.f_193[iVar4 /*47*/][iVar5]), 0, 0f, 0f, 5f, 0, 0, 1, 0);
				}
				if (unk_0xEADBDBE0422CF7E6(Local_185.f_193[iVar4 /*47*/][iVar5]) || (!unk_0xB0AB1F334666E337(Local_185.f_193[iVar4 /*47*/][iVar5]) && unk_0x93E08E0F531E2C35()))
				{
					if (unk_0x2FC2FDC413532977(Local_185.f_193[iVar4 /*47*/].f_5[iVar5]) && unk_0x93BF17E19A9F0E9B(Local_185.f_193[iVar4 /*47*/].f_5[iVar5]))
					{
						iVar2 = unk_0xAB3646235DE50E93(Local_185.f_193[iVar4 /*47*/][iVar5]);
						iVar3 = unk_0xAB3646235DE50E93(Local_185.f_193[iVar4 /*47*/].f_5[iVar5]);
						if (unk_0xEADBDBE0422CF7E6(Local_185.f_193[iVar4 /*47*/].f_5[iVar5]) || (!unk_0xB0AB1F334666E337(Local_185.f_193[iVar4 /*47*/].f_5[iVar5]) && unk_0x93E08E0F531E2C35()))
						{
							if (func_344(Local_185.f_193[iVar4 /*47*/][iVar5]) && func_344(Local_185.f_193[iVar4 /*47*/].f_5[iVar5]))
							{
								if (!BitTest(Local_185.f_193[iVar4 /*47*/].f_15[iVar5], 2) && !BitTest(Local_186[unk_0xAE032CEDCF23C6D5() /*29*/].f_4[iVar5], 2))
								{
									if (BitTest(Local_185.f_193[iVar4 /*47*/].f_15[iVar5], 1) || BitTest(Local_186[unk_0xAE032CEDCF23C6D5() /*29*/].f_4[iVar5], 1))
									{
										if (unk_0xFC8BFE4B41177C22(iVar3))
										{
											if (!unk_0x13CCB1AD131C1082(iVar3, "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
											{
												unk_0x0B0C9A0F9AAEB7F0(&(Local_186[unk_0xAE032CEDCF23C6D5() /*29*/].f_4[iVar5]), 2);
												func_492(&(Local_185.f_193[iVar4 /*47*/].f_5[iVar5]));
												unk_0x8744D2E3FC95740E(&(Local_186[unk_0xAE032CEDCF23C6D5() /*29*/].f_4[iVar5]), false);
												unk_0x8744D2E3FC95740E(&(Local_186[unk_0xAE032CEDCF23C6D5() /*29*/].f_4[iVar5]), true);
												unk_0x8744D2E3FC95740E(&(Local_186[unk_0xAE032CEDCF23C6D5() /*29*/].f_4[iVar5]), 2);
											}
										}
									}
								}
								if (!BitTest(Local_185.f_193[iVar4 /*47*/].f_15[iVar5], 1) && !BitTest(Local_186[unk_0xAE032CEDCF23C6D5() /*29*/].f_4[iVar5], 1))
								{
									if (BitTest(Local_185.f_193[iVar4 /*47*/].f_15[iVar5], 0) || BitTest(Local_186[unk_0xAE032CEDCF23C6D5() /*29*/].f_4[iVar5], 0))
									{
										if (unk_0xFC8BFE4B41177C22(iVar3))
										{
											if (unk_0x13CCB1AD131C1082(iVar3, "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
											{
												unk_0x0B0C9A0F9AAEB7F0(&(Local_186[unk_0xAE032CEDCF23C6D5() /*29*/].f_4[iVar5]), true);
											}
										}
									}
								}
								if (!BitTest(Local_185.f_193[iVar4 /*47*/].f_15[iVar5], 0))
								{
									if (func_547(iVar4, iVar5))
									{
										unk_0x5ED9595F4AC7D134(iVar3, "P_cargo_chute_S_crumple", "P_cargo_chute_S", 1000f, 0, 0, 0, 0, 0);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_193[iVar4 /*47*/].f_15[iVar5]), false);
										unk_0xBD618A73193F9982(Local_135.f_473, "Parachute_Land", iVar3, "DLC_Exec_Air_Drop_Sounds", 0, 0);
									}
									else
									{
										unk_0x43C223EA02402E66(iVar2, 2, 0.0245f);
									}
								}
							}
						}
					}
					if (unk_0xFC8BFE4B41177C22(iVar2))
					{
						Var0 = { unk_0xD1A6A821F5AC81DB(iVar2, 1) };
						if (unk_0xB1EAADCB692D69CE(Var0, &fVar1, 0, 0))
						{
							if (Var0.f_2 < fVar1 && !unk_0x69799E0840A34AFB(iVar2))
							{
								if (func_344(Local_185.f_193[iVar4 /*47*/][iVar5]))
								{
									unk_0xB2BD5837A8D3CEDA(iVar2, Var0.f_0, Var0.f_1, fVar1, 1, 0, 0, 1);
								}
							}
						}
					}
					if (func_61())
					{
						if (!func_5(&(Local_185.f_193[iVar4 /*47*/].f_29[iVar5 /*2*/])))
						{
							func_4(&(Local_185.f_193[iVar4 /*47*/].f_29[iVar5 /*2*/]), 0, 0);
						}
						else if (func_26(&(Local_185.f_193[iVar4 /*47*/].f_29[iVar5 /*2*/]), 30000, 0))
						{
							func_491(&(Local_185.f_193[iVar4 /*47*/][iVar5]));
						}
					}
				}
			}
			iVar4++;
		}
		iVar5++;
	}
}

int func_547(int iParam0, int iParam1)
{
	if (func_26(&(Local_185.f_193[iParam0 /*47*/].f_20[iParam1 /*2*/]), 3000, 0))
	{
		if (!unk_0x3F18810075C77D41(unk_0xAB3646235DE50E93(Local_185.f_193[iParam0 /*47*/][iParam1])))
		{
			return 1;
		}
	}
	if (unk_0x69799E0840A34AFB(unk_0xAB3646235DE50E93(Local_185.f_193[iParam0 /*47*/][iParam1])))
	{
		return 1;
	}
	if (func_548(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_548(int iParam0, int iParam1)
{
	float fVar0;
	
	fVar0 = unk_0xED4193081E867405(unk_0xAB3646235DE50E93(Local_185.f_193[iParam0 /*47*/][iParam1]));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	fVar0 = unk_0x5E674CD80769B53A(unk_0xAB3646235DE50E93(Local_185.f_193[iParam0 /*47*/][iParam1]));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	return 0;
}

int func_549(struct<3> Param0, float fParam1, bool bParam2)
{
	struct<3> Var0;
	int iVar1;
	
	iVar1 = Local_185.f_664[bParam2];
	if (!unk_0x2FC2FDC413532977(Local_185.f_193[iVar1 /*47*/][bParam2]))
	{
		if (unk_0x78D35ABAF71764AD(1))
		{
			Local_185.f_193[iVar1 /*47*/][bParam2] = unk_0x16FE0AE33E462D17(unk_0x29F49A5884D2FD3C(joaat("pickup_portable_crate_unfixed_incar"), Param0, 0, func_552()));
			unk_0x5C96CEA06531AB03(unk_0xAB3646235DE50E93(Local_185.f_193[iVar1 /*47*/][bParam2]), uParam1);
			unk_0x3C1752E361ED8FC9(Local_185.f_193[iVar1 /*47*/][bParam2], 1);
			if (!func_19())
			{
				unk_0x935364B4448CD584(unk_0xAB3646235DE50E93(Local_185.f_193[iVar1 /*47*/][bParam2]), 1);
			}
			unk_0x6FDDD37A4022A641(unk_0xAB3646235DE50E93(Local_185.f_193[iVar1 /*47*/][bParam2]), 1);
			unk_0x4B46E3AF872076CE(unk_0xAB3646235DE50E93(Local_185.f_193[iVar1 /*47*/][bParam2]), 1);
			unk_0x79B52EC5A9AB6229(unk_0xAB3646235DE50E93(Local_185.f_193[iVar1 /*47*/][bParam2]));
			unk_0x1AB7223AC0702871(unk_0xAB3646235DE50E93(Local_185.f_193[iVar1 /*47*/][bParam2]), 0f, 0f, -0.2f);
			if (!func_19())
			{
				unk_0x26909BE8B0CCD35B(unk_0xAB3646235DE50E93(Local_185.f_193[iVar1 /*47*/][bParam2]), 1, 0);
			}
			unk_0xF88FC425EC7D675D(unk_0xAB3646235DE50E93(Local_185.f_193[iVar1 /*47*/][bParam2]), 1200);
			if (func_5(&(Local_185.f_193[iVar1 /*47*/].f_29[bParam2 /*2*/])))
			{
				func_342(&(Local_185.f_193[iVar1 /*47*/].f_29[bParam2 /*2*/]));
			}
			if (func_237())
			{
				unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_185.f_193[iVar1 /*47*/][bParam2]), 0, 0);
				unk_0x5612E9BDDC2940D7(unk_0xAB3646235DE50E93(Local_185.f_193[iVar1 /*47*/][bParam2]), 1);
			}
			if (func_255())
			{
				unk_0x44C48AC14D3C09ED(unk_0xAB3646235DE50E93(Local_185.f_193[iVar1 /*47*/][bParam2]), 0, 0);
			}
			Local_185.f_3 = unk_0xF5014688C9788D5F(Local_185.f_193[iVar1 /*47*/][bParam2]);
		}
	}
	if (func_551())
	{
		if (unk_0x78D35ABAF71764AD(1))
		{
			if (unk_0x2FC2FDC413532977(Local_185.f_193[iVar1 /*47*/][bParam2]))
			{
				if (!unk_0x2FC2FDC413532977(Local_185.f_193[iVar1 /*47*/].f_5[bParam2]))
				{
					Var0 = { unk_0xD1A6A821F5AC81DB(unk_0xAB3646235DE50E93(Local_185.f_193[iVar1 /*47*/][bParam2]), 1) };
					if (func_258(&(Local_185.f_193[iVar1 /*47*/].f_5[bParam2]), func_550(), Var0 + Vector(1f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						if (func_255())
						{
							unk_0x44C48AC14D3C09ED(unk_0xAB3646235DE50E93(Local_185.f_193[iVar1 /*47*/].f_5[bParam2]), 0, 0);
						}
						unk_0x4D306DD94DD6FDBA(unk_0xAB3646235DE50E93(Local_185.f_193[iVar1 /*47*/].f_5[bParam2]), unk_0xAB3646235DE50E93(Local_185.f_193[iVar1 /*47*/][bParam2]), 0, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
						unk_0x4B46E3AF872076CE(unk_0xAB3646235DE50E93(Local_185.f_193[iVar1 /*47*/].f_5[bParam2]), 1);
						unk_0x5ED9595F4AC7D134(unk_0xAB3646235DE50E93(Local_185.f_193[iVar1 /*47*/].f_5[bParam2]), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, 0, 0, 0, 0, 0);
						unk_0x2B2ECB6F6371E59E(unk_0xAB3646235DE50E93(Local_185.f_193[iVar1 /*47*/].f_5[bParam2]));
						unk_0xF88FC425EC7D675D(unk_0xAB3646235DE50E93(Local_185.f_193[iVar1 /*47*/].f_5[bParam2]), 1200);
						func_4(&(Local_185.f_193[iVar1 /*47*/].f_38[bParam2 /*2*/]), 0, 0);
						func_342(&(Local_185.f_193[iVar1 /*47*/].f_20[bParam2 /*2*/]));
					}
				}
			}
			if (unk_0x2FC2FDC413532977(Local_185.f_193[iVar1 /*47*/][bParam2]) && unk_0x2FC2FDC413532977(Local_185.f_193[iVar1 /*47*/].f_5[bParam2]))
			{
				return 1;
			}
		}
	}
	else if (unk_0x2FC2FDC413532977(Local_185.f_193[iVar1 /*47*/][bParam2]))
	{
		return 1;
	}
	return 0;
}

int func_550()
{
	return joaat("p_cargo_chute_s");
}

int func_551()
{
	if (func_450())
	{
		return 1;
	}
	return 0;
}

int func_552()
{
	switch (func_16())
	{
		case 3:
			return joaat("hei_prop_heist_binbag");
		
		case 7:
			return joaat("prop_drug_package");
		
		case 5:
			return joaat("prop_cs_box_clothes");
		
		default:
	}
	if (func_61())
	{
		return joaat("ex_prop_adv_case_sm");
	}
	else if (func_450())
	{
		return joaat("ex_prop_adv_case_sm_flash");
	}
	return joaat("prop_drug_package");
}

float func_553(bool bParam0)
{
	float fVar0;
	
	if (func_66(bParam0))
	{
		fVar0 = unk_0xCFC0C995455A6204(func_67(bParam0));
	}
	return fVar0;
}

Vector3 func_554()
{
	if (func_237())
	{
		return 0f, -5.2f, 1f;
	}
	if (!func_450())
	{
		return 0f, -6f, -0.32f;
	}
	return 0f, 0f, -1f;
}

int func_555()
{
	unk_0xEC9DAA34BBB4658C(func_552());
	unk_0xEC9DAA34BBB4658C(func_550());
	unk_0x80813AC549A1E8AE(func_556());
	if ((unk_0x6252BC0DD8A320DB(func_552()) && unk_0x6252BC0DD8A320DB(func_550())) && unk_0xE100DD4F82A51BDE(func_556()))
	{
		return 1;
	}
	return 0;
}

char* func_556()
{
	return "P_cargo_chute_S";
}

void func_557()
{
	if (func_237())
	{
		if (unk_0xFC8BFE4B41177C22(Local_185.f_3) && !unk_0x1C2F771CDC87A3A5(Local_185.f_3, 0))
		{
			if (unk_0x870372B586EFB3EE(Local_185.f_3))
			{
				if (func_5(&(Local_185.f_12)))
				{
					func_342(&(Local_185.f_12));
				}
			}
			else if (func_5(&(Local_185.f_12)))
			{
				if (func_26(&(Local_185.f_12), 500, 0))
				{
					unk_0x4285E11B28063EE0(Local_185.f_3, 1, 0);
				}
			}
			else
			{
				func_4(&(Local_185.f_12), 0, 0);
			}
		}
	}
}

int func_558()
{
	func_620();
	func_619();
	func_612();
	func_610();
	if (((((func_596() && func_594()) && func_586()) && func_584()) && func_582()) && func_581())
	{
		func_580();
		func_579();
		func_578();
		if (func_564())
		{
			func_563();
			if (func_45() && !func_15())
			{
				Local_185.f_966 = unk_0xC5935DFB3F39785A(0, func_14());
			}
			Local_185.f_174 = func_73(-1);
			func_561();
			if (func_44())
			{
				func_560(&(Local_185.f_154));
			}
			Local_185.f_53 = unk_0x259BE71D8A81D4FA();
			Local_185.f_27 = func_59();
			func_559();
			unk_0x0189E96FAC892B16(&(Local_185.f_19), &(Local_185.f_20));
			return 1;
		}
	}
	return 0;
}

void func_559()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (func_61())
		{
			Local_185.f_28[iVar0 /*3*/] = { func_365(iVar0, 0, Local_185.f_110, Local_185.f_957, 0) };
			Local_185.f_41[iVar0] = func_471(iVar0, 0, Local_185.f_110, Local_185.f_957, 0);
		}
		else if (func_450())
		{
			Local_185.f_28[iVar0 /*3*/] = { func_470(iVar0) };
			Local_185.f_41[iVar0] = func_468(iVar0);
		}
		if (!func_172(Local_185.f_28[iVar0 /*3*/], 4f, 1f, 1f, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			unk_0x2094BC4B6731BA68(Local_185.f_28[iVar0 /*3*/], 4f, 1, 0, 0, 1);
		}
		iVar0++;
	}
}

void func_560(var uParam0)
{
	*uParam0 = 1;
}

void func_561()
{
	if (func_368())
	{
		if (func_14() == 1)
		{
			Local_185.f_893[0] = func_562();
		}
		else if (func_14() == 2)
		{
			Local_185.f_893[0] = (func_562() / 2);
			Local_185.f_893[1] = (func_562() / 2);
		}
		else if (func_14() == 3)
		{
			Local_185.f_893[0] = (func_562() / 3);
			Local_185.f_893[1] = (func_562() / 3);
			Local_185.f_893[2] = (func_562() / 3);
		}
	}
}

int func_562()
{
	return Global_262145.f_19069;
}

void func_563()
{
	int iVar0;
	
	if (unk_0x93E08E0F531E2C35())
	{
		if (func_18())
		{
			iVar0 = unk_0xC5935DFB3F39785A(0, 2);
			if (iVar0 == 0)
			{
				Local_185.f_884 = joaat("a_m_m_hillbilly_01");
			}
			Local_185.f_884 = joaat("a_m_m_hillbilly_02");
			Local_185.f_883 = joaat("sanchez");
		}
	}
}

bool func_564()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	
	if (func_577())
	{
		bVar1 = func_576();
		iVar2 = 1;
	}
	else if (!func_575())
	{
		iVar0 = unk_0xC5935DFB3F39785A(0, func_235());
		iVar2 = 1;
		if (func_574(iVar0))
		{
			return 0;
		}
		if ((func_15() || func_74()) || func_43())
		{
			bVar1 = iVar0;
		}
		else
		{
			bVar1 = (iVar0 + Local_185.f_143);
		}
	}
	else if (func_255() || func_369())
	{
		iVar0 = unk_0xC5935DFB3F39785A(0, func_573());
		if (((func_255() && func_247()) && iVar0 == 3) && Local_185.f_977 == 0)
		{
			Local_185.f_977 = 1;
		}
		iVar2 = 1;
		bVar1 = iVar0;
	}
	else if (func_19())
	{
		iVar0 = unk_0xC5935DFB3F39785A(0, func_235());
		iVar2 = 1;
		bVar1 = iVar0;
	}
	else if (func_368())
	{
		bVar1 = Local_185.f_143;
	}
	else if (func_237())
	{
		bVar1 = Local_185.f_143;
		iVar2 = 1;
	}
	else if (func_23())
	{
		bVar1 = Local_185.f_143;
		iVar2 = 1;
	}
	else
	{
		bVar1 = (iVar0 + Local_185.f_143);
	}
	if (func_74())
	{
		if (bVar1 >= 20)
		{
			bVar1 = false;
		}
	}
	else if (((!func_369() && !func_255()) && !func_15()) && !func_43())
	{
		if (bVar1 >= func_73(-1))
		{
			bVar1 = false;
		}
	}
	iVar3 = func_73(-1);
	if (func_368())
	{
		iVar3 = (func_73(-1) / func_14());
	}
	else if (func_15())
	{
		iVar3 = 3;
	}
	if (bVar1 > -1)
	{
		if (func_568(bVar1))
		{
			if (Local_185.f_143 < iVar3)
			{
				if (!BitTest(Local_185.f_144, bVar1))
				{
					Local_185.f_143++;
					if (iVar2 || bVar1 < func_567())
					{
						iVar4 = 0;
						bVar5 = func_566();
						iVar6 = func_14();
						bVar7 = func_15();
						if (((bVar7 || func_43()) || func_44()) || func_23())
						{
							iVar6 = func_24();
						}
						iVar4 = 0;
						while (iVar4 < iVar6)
						{
							if (bVar5)
							{
								if (Local_185.f_681[iVar4] < (iVar3 / iVar6))
								{
									func_565(iVar4, bVar1);
									Local_185.f_681[iVar4]++;
									iVar4 = iVar6;
								}
							}
							else
							{
								if (bVar7 && Local_185.f_143 != 1)
								{
									unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_145[iVar4]), bVar1);
								}
								func_565(iVar4, bVar1);
							}
							iVar4++;
						}
						unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_144), bVar1);
					}
					if ((((!func_575() && !func_74()) && !func_15()) && !func_43()) || func_27())
					{
						return 1;
					}
				}
			}
		}
	}
	return Local_185.f_143 == iVar3;
}

void func_565(int iParam0, bool bParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Local_185.f_134[iParam0]), bParam1);
}

int func_566()
{
	if (((((func_237() || func_255()) || func_19()) || func_369()) || func_43()) || func_74())
	{
		return 1;
	}
	return 0;
}

int func_567()
{
	return 5;
}

int func_568(bool bParam0)
{
	float fVar0;
	struct<3> Var1;
	bool bVar2;
	
	if (func_572())
	{
		Var1 = { func_570(Local_185.f_0) };
		bVar2 = false;
		while (bVar2 < func_14())
		{
			fVar0 = unk_0xED977E2AE2CB16EE(func_414(func_16(), bParam0, Local_185.f_679, bVar2, 0, 0), Var1, 1);
			if (fVar0 >= func_569())
			{
				return 1;
			}
			bVar2++;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

float func_569()
{
	return Global_262145.f_18509;
}

Vector3 func_570(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_571(iParam0);
	switch (iVar0)
	{
		case 1:
			Var1 = { 1049.6f, -3196.6f, -38.5f };
			break;
		
		case 3:
			Var1 = { 1009.5f, -3196.6f, -38.5f };
			break;
		
		case 4:
			Var1 = { 1093.6f, -3196.6f, -38.5f };
			break;
		
		case 2:
			Var1 = { 1124.6f, -3196.6f, -38.5f };
			break;
		
		case 0:
			Var1 = { 1165f, -3196.6f, -38.2f };
			break;
		
		case 5:
			Var1 = { 938.3077f, -3196.112f, -100f };
			break;
		
		case 6:
			Var1 = { 485f, -2625f, -50f };
			break;
	}
	return Var1;
}

int func_571(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		case 32:
			return 6;
		
		default:
	}
	return -1;
}

int func_572()
{
	switch (func_16())
	{
		case 3:
		case 8:
		case 10:
		case 6:
			return 1;
		
		default:
	}
	return 0;
}

int func_573()
{
	if (func_255() || func_369())
	{
		return 15;
	}
	return 10;
}

int func_574(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_15709;
		
		case 1:
			return Global_262145.f_15710;
		
		case 2:
			return Global_262145.f_15711;
		
		case 3:
			return Global_262145.f_15712;
		
		case 4:
			return Global_262145.f_15713;
		
		case 5:
			return Global_262145.f_15714;
		
		case 6:
			return Global_262145.f_15715;
		
		case 7:
			return Global_262145.f_15716;
		
		case 8:
			return Global_262145.f_15717;
		
		case 9:
			return Global_262145.f_15718;
		
		case 10:
			return Global_262145.f_15719;
		
		case 11:
			return Global_262145.f_15720;
		
		case 12:
			return Global_262145.f_15721;
		
		case 13:
			return Global_262145.f_15722;
		
		case 14:
			return Global_262145.f_15723;
		
		case 15:
			return Global_262145.f_15724;
		
		case 16:
			return Global_262145.f_15725;
		
		case 17:
			return Global_262145.f_15726;
		
		case 18:
			return Global_262145.f_15727;
		
		case 19:
			return Global_262145.f_15728;
		
		default:
	}
	return 0;
}

int func_575()
{
	if ((func_536() || func_450()) || func_18())
	{
		return 1;
	}
	return 0;
}

int func_576()
{
	bool bVar0;
	bool bVar1[3];
	float fVar2;
	float fVar3[3];
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	
	fVar3[0] = 0f;
	fVar3[1] = 0f;
	fVar3[2] = 0f;
	bVar1[0] = -1;
	bVar1[1] = -1;
	bVar1[2] = -1;
	Var4 = { func_570(Local_185.f_0) };
	bVar0 = false;
	while (bVar0 < 10)
	{
		Var5 = { func_414(func_16(), bVar0, bVar0, -1, 0, 0) };
		fVar2 = unk_0xED977E2AE2CB16EE(Var4, Var5, 0);
		if (fVar2 > fVar3[0])
		{
			fVar3[2] = fVar3[1];
			bVar1[2] = bVar1[1];
			fVar3[1] = fVar3[0];
			bVar1[1] = bVar1[0];
			fVar3[0] = fVar2;
			bVar1[0] = bVar0;
		}
		else if (fVar2 < fVar3[0] && fVar2 > fVar3[1])
		{
			fVar3[2] = fVar3[1];
			bVar1[2] = bVar1[1];
			fVar3[1] = fVar2;
			bVar1[1] = bVar0;
		}
		else if (fVar2 < fVar3[1] && fVar2 > fVar3[2])
		{
			fVar3[2] = fVar2;
			bVar1[2] = bVar0;
		}
		bVar0++;
	}
	if ((bVar1[0] != -1 && bVar1[1] != -1) && bVar1[2] != -1)
	{
		iVar6 = unk_0xC5935DFB3F39785A(0, 3);
		return bVar1[iVar6];
	}
	return -1;
}

int func_577()
{
	switch (func_16())
	{
		case 7:
		case 0:
		case 11:
		case 12:
			return 1;
			break;
	}
	return 0;
}

void func_578()
{
	int iVar0;
	
	if (func_455() && !func_369())
	{
		iVar0 = 0;
		while (iVar0 < func_72())
		{
			func_259(func_452(iVar0, 0));
			iVar0++;
		}
	}
	if (func_245())
	{
		iVar0 = 0;
		while (iVar0 < func_244())
		{
			func_259(func_242(iVar0));
			iVar0++;
		}
	}
	if (func_361())
	{
		func_259(func_351());
	}
	if (func_349() && func_249())
	{
		iVar0 = 0;
		while (iVar0 < func_248())
		{
			func_259(func_246(iVar0));
			iVar0++;
		}
	}
	if (func_323())
	{
		func_259(func_321());
	}
	if (func_261())
	{
		func_259(func_260());
	}
}

void func_579()
{
	int iVar0;
	
	if (Local_185.f_694 == -1 && func_17())
	{
		iVar0 = unk_0xC5935DFB3F39785A(30000, 120000);
		Local_185.f_694 = iVar0;
	}
}

void func_580()
{
	if (Local_185.f_693 == -1 && (func_27() || func_17()))
	{
		Local_185.f_693 = 0;
	}
}

int func_581()
{
	int iVar0;
	
	if (func_15())
	{
		if ((!func_29(25) && !func_29(24)) && !func_29(28))
		{
			iVar0 = unk_0xC5935DFB3F39785A(0, 150);
			if (iVar0 > 100)
			{
				func_28(28);
			}
			else if (iVar0 > 50)
			{
				func_28(25);
			}
			else
			{
				func_28(24);
			}
		}
	}
	return 1;
}

int func_582()
{
	int iVar0;
	int iVar1;
	
	if (!func_62(29))
	{
		if ((((func_575() || func_27()) || func_43()) || func_44()) || func_15())
		{
			iVar1 = 5;
			if (func_44() || func_15())
			{
				iVar1 = 10;
			}
			else if (func_43())
			{
				iVar1 = 20;
			}
			iVar0 = unk_0xC5935DFB3F39785A(0, iVar1);
			if (func_583(iVar0))
			{
				return 0;
			}
			Local_185.f_679 = iVar0;
			if (Local_185.f_981 == -1)
			{
				Local_185.f_981 = unk_0xC5935DFB3F39785A(0, 3);
			}
			func_48(29);
		}
		else
		{
			func_48(29);
			return 1;
		}
	}
	return func_62(29);
}

int func_583(int iParam0)
{
	switch (func_16())
	{
		case 9:
			if (func_247())
			{
				switch (iParam0)
				{
					case 0:
						return Global_262145.f_18527;
					
					case 1:
						return Global_262145.f_18528;
					
					case 2:
						return Global_262145.f_18529;
					
					case 3:
						return Global_262145.f_18530;
					
					case 4:
						return Global_262145.f_18531;
					
					default:
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return Global_262145.f_18532;
					
					case 1:
						return Global_262145.f_18533;
					
					case 2:
						return Global_262145.f_18534;
					
					case 3:
						return Global_262145.f_18535;
					
					case 4:
						return Global_262145.f_18536;
					}
				
				default:
			}
			break;
	}
	return 0;
}

int func_584()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_62(28))
	{
		iVar3 = func_585(unk_0x259BE71D8A81D4FA());
		if (func_450())
		{
			switch (func_46())
			{
				case 0:
					iVar0 = iVar3 * 3;
					break;
				
				case 1:
					iVar0 = iVar3 * 3;
					iVar1 = iVar0 + 1;
					if (iVar0 == iVar1)
					{
						return 0;
					}
					break;
				
				case 2:
					iVar0 = iVar3 * 3;
					iVar1 = iVar0 + 1;
					iVar2 = iVar1 + 1;
					if ((iVar0 == iVar1 || iVar0 == iVar2) || iVar1 == iVar2)
					{
						return 0;
					}
					break;
			}
		}
		else
		{
			iVar0 = unk_0xC5935DFB3F39785A(0, 5);
		}
		Local_185.f_700[0] = iVar0;
		Local_185.f_700[1] = iVar1;
		Local_185.f_700[2] = iVar2;
		func_48(28);
	}
	return func_62(28);
}

int func_585(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = bParam0;
	iVar1 = 0;
	while (iVar1 < Global_262145.f_12841)
	{
		if (Global_1923597.f_11.f_132[iVar1] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

int func_586()
{
	var uVar0;
	var uVar1;
	
	if (Local_185.f_957 == -1)
	{
		uVar1 = func_589(&uVar0);
		func_588(uVar1);
		func_587(uVar0);
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_587(var uParam0)
{
	Local_185.f_958 = uParam0;
}

void func_588(var uParam0)
{
	Local_185.f_957 = uParam0;
}

int func_589(var uParam0)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	
	Var0 = { func_593() };
	iVar1 = func_571(Var0.f_0);
	iVar2 = func_1991(unk_0x259BE71D8A81D4FA(), Var0.f_0);
	if (iVar2 > func_592(iVar1, Var0.f_0))
	{
		*uParam0 = iVar2;
		return 2;
	}
	else if (iVar2 > func_590(iVar1, Var0.f_0) && iVar2 <= func_592(iVar1, Var0.f_0))
	{
		*uParam0 = iVar2;
		return 1;
	}
	else if (iVar2 > 0 && iVar2 <= func_590(iVar1, Var0.f_0))
	{
		*uParam0 = iVar2;
		return 0;
	}
	*uParam0 = 1;
	return -1;
}

int func_590(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(Global_262145.f_18505);
	fVar1 = (fVar0 / 100f);
	fVar2 = fVar1;
	switch (iParam0)
	{
		case 4:
			return ceil((IntToFloat(func_591(iParam1)) * fVar2));
		
		case 0:
			return ceil((IntToFloat(func_591(iParam1)) * fVar2));
		
		case 2:
			return ceil((IntToFloat(func_591(iParam1)) * fVar2));
		
		case 3:
			return ceil((IntToFloat(func_591(iParam1)) * fVar2));
		
		case 1:
			return ceil((IntToFloat(func_591(iParam1)) * fVar2));
		
		case 6:
			return ceil((IntToFloat(func_591(iParam1)) * fVar2));
		
		default:
	}
	return 5;
}

int func_591(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_262145.f_18909;
		
		case 1:
			return Global_262145.f_18917;
		
		case 3:
			return Global_262145.f_18925;
		
		case 5:
			return Global_262145.f_18933;
		
		case 4:
			return Global_262145.f_18941;
		
		case 7:
			return Global_262145.f_18909;
		
		case 6:
			return Global_262145.f_18917;
		
		case 8:
			return Global_262145.f_18925;
		
		case 10:
			return Global_262145.f_18933;
		
		case 9:
			return Global_262145.f_18941;
		
		case 12:
			return Global_262145.f_18909;
		
		case 11:
			return Global_262145.f_18917;
		
		case 13:
			return Global_262145.f_18925;
		
		case 15:
			return Global_262145.f_18933;
		
		case 14:
			return Global_262145.f_18941;
		
		case 17:
			return Global_262145.f_18909;
		
		case 16:
			return Global_262145.f_18917;
		
		case 18:
			return Global_262145.f_18925;
		
		case 20:
			return Global_262145.f_18933;
		
		case 19:
			return Global_262145.f_18941;
		
		case 32:
			return Global_262145.f_18949;
		
		case 21:
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
			return Global_262145.f_21531;
		
		default:
	}
	return 0;
}

int func_592(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(Global_262145.f_18506);
	fVar1 = (fVar0 / 100f);
	fVar2 = fVar1;
	switch (iParam0)
	{
		case 4:
			return ceil((IntToFloat(func_591(iParam1)) * fVar2));
		
		case 0:
			return ceil((IntToFloat(func_591(iParam1)) * fVar2));
		
		case 2:
			return ceil((IntToFloat(func_591(iParam1)) * fVar2));
		
		case 3:
			return ceil((IntToFloat(func_591(iParam1)) * fVar2));
		
		case 1:
			return ceil((IntToFloat(func_591(iParam1)) * fVar2));
		
		case 6:
			return ceil((IntToFloat(func_591(iParam1)) * fVar2));
		
		default:
	}
	return 5;
}

struct<2> func_593()
{
	return Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_194;
}

int func_594()
{
	if (Local_185.f_110 == -1)
	{
		Local_185.f_110 = Local_135.f_195;
		if (Local_185.f_110 < 1)
		{
			Local_185.f_110 = 1;
		}
		Local_185.f_111 = func_595();
		if (Local_185.f_111 <= 0)
		{
			Local_185.f_111 = 1;
			func_28(2);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

var func_595()
{
	return Local_185.f_969;
}

int func_596()
{
	int iVar0;
	
	if (func_16() == 13)
	{
		iVar0 = unk_0xC5935DFB3F39785A(0, 13);
		if (((((!func_608(iVar0) && !func_607(iVar0)) && !func_603(iVar0)) && func_602(iVar0)) && func_601(iVar0)) && func_600(iVar0))
		{
			Local_185.f_17 = iVar0;
			func_599(iVar0);
			func_597(iVar0);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_597(int iParam0)
{
	Global_2793046.f_5225.f_368 = func_598(iParam0);
}

int func_598(int iParam0)
{
	if (iParam0 == 13)
	{
		iParam0 = func_16();
	}
	if (func_61())
	{
		return 0;
	}
	else if (func_450())
	{
		return 1;
	}
	else
	{
		return 2;
	}
	return -1;
}

void func_599(int iParam0)
{
	if (Global_2793046.f_5225.f_357[0] == 13)
	{
		Global_2793046.f_5225.f_357[0] = iParam0;
		return;
	}
	else
	{
		Global_2793046.f_5225.f_357[3] = Global_2793046.f_5225.f_357[2];
		Global_2793046.f_5225.f_357[2] = Global_2793046.f_5225.f_357[1];
		Global_2793046.f_5225.f_357[1] = Global_2793046.f_5225.f_357[0];
		Global_2793046.f_5225.f_357[0] = iParam0;
	}
}

int func_600(int iParam0)
{
	float fVar0;
	
	fVar0 = to_float((func_1991(unk_0x259BE71D8A81D4FA(), Local_185.f_0) / Local_185.f_112));
	switch (iParam0)
	{
		case 10:
			if (fVar0 < IntToFloat(Global_262145.f_18567))
			{
				return 0;
			}
			break;
		
		case 11:
			if (fVar0 < IntToFloat(Global_262145.f_18572))
			{
				return 0;
			}
			break;
		
		case 12:
			if (fVar0 < IntToFloat(Global_262145.f_18577))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_601(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			if (Local_185.f_112 < Global_262145.f_18566)
			{
				return 0;
			}
			break;
		
		case 11:
			if (Local_185.f_112 < Global_262145.f_18571)
			{
				return 0;
			}
			break;
		
		case 12:
			if (Local_185.f_112 < Global_262145.f_18576)
			{
				return 0;
			}
			break;
		
		case 7:
			if (func_287() + 1 < Global_262145.f_18518)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_602(int iParam0)
{
	if (((((((((iParam0 == 0 || iParam0 == 9) || iParam0 == 2) || iParam0 == 1) || iParam0 == 3) || iParam0 == 5) || iParam0 == 8) || iParam0 == 10) || iParam0 == 11) || iParam0 == 12)
	{
		return 1;
	}
	if (iParam0 == 6 && Local_185.f_1 == 4)
	{
		return 1;
	}
	if (iParam0 == 4 && Local_185.f_1 == 0)
	{
		return 1;
	}
	if (iParam0 == 3 && Local_185.f_1 == 1)
	{
		return 1;
	}
	if (iParam0 == 7 && Local_185.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_603(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x762604C40829DB72(unk_0xB23E0F9B63D009A8(iVar0)))
		{
			bVar2 = unk_0xB23E0F9B63D009A8(bVar0);
			if (func_80(bVar2))
			{
				if (func_606(bVar2) == 190)
				{
					iVar1 = func_604(bVar2);
					if (iParam0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

int func_604(bool bParam0)
{
	if (func_605(bParam0, 0))
	{
		return Global_1894573[bParam0 /*608*/].f_10.f_473;
	}
	return -1;
}

int func_605(bool bParam0, int iParam1)
{
	if (Global_1894573[bParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[bParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_606(bool bParam0)
{
	if (func_605(bParam0, 0))
	{
		return Global_1894573[bParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

int func_607(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_18513;
		
		case 3:
			return Global_262145.f_18515;
		
		case 7:
			return Global_262145.f_18519;
		
		case 4:
			return Global_262145.f_18521;
		
		case 9:
			return Global_262145.f_18526;
		
		case 2:
			return Global_262145.f_18548;
		
		case 5:
			return Global_262145.f_18551;
		
		case 1:
			return Global_262145.f_18553;
		
		case 6:
			return Global_262145.f_18560;
		
		case 8:
			return Global_262145.f_18562;
		
		case 10:
			return Global_262145.f_18568;
		
		case 11:
			return Global_262145.f_18573;
		
		case 12:
			return Global_262145.f_18578;
		
		default:
	}
	return 0;
}

int func_608(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_609())
	{
		if (Global_2793046.f_5225.f_357[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_609()
{
	return Global_262145.f_18507;
}

void func_610()
{
	if (Local_185.f_16 == 0)
	{
		switch (Local_185.f_1)
		{
			case 4:
				Local_185.f_16 = func_611(Global_262145.f_18254);
				break;
			
			case 0:
				Local_185.f_16 = func_611(Global_262145.f_18251);
				break;
			
			case 2:
				Local_185.f_16 = func_611(Global_262145.f_18252);
				break;
			
			case 3:
				Local_185.f_16 = func_611(Global_262145.f_18253);
				break;
			
			case 1:
				Local_185.f_16 = func_611(Global_262145.f_18250);
				break;
			}
	}
}

int func_611(int iParam0)
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
	return 1;
}

void func_612()
{
	int iVar0;
	struct<2> Var1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Local_185.f_0 == 0)
	{
		Var1.f_1 = -1;
		Var1 = { func_593() };
		iVar2 = func_571(Var1.f_0);
		Local_185.f_0 = Var1.f_0;
		Local_185.f_1 = iVar2;
		Local_185.f_2 = Var1.f_1;
		iVar5 = 8;
		if (func_23())
		{
			iVar5 = Global_262145.f_18522;
		}
		iVar4 = 0;
		while (iVar4 < 32)
		{
			if (iVar0 < iVar5 && unk_0x762604C40829DB72(unk_0xB23E0F9B63D009A8(iVar4)))
			{
				bVar6 = unk_0xB23E0F9B63D009A8(bVar4);
				if (func_617(bVar6, func_288(), 1))
				{
					uVar3 = (Global_1949969 && func_616(bVar6));
					if (func_615(bVar6) || uVar3)
					{
						if (func_613(bVar6) == Local_185.f_0 || uVar3)
						{
							Local_185.f_101[iVar0] = bVar4;
							iVar0++;
						}
					}
				}
			}
			bVar4++;
		}
		Local_185.f_112 = iVar0;
	}
}

int func_613(bool bParam0)
{
	if (func_615(bParam0))
	{
		return func_614(Global_2657589[bParam0 /*466*/].f_321.f_7);
	}
	return 0;
}

int func_614(int iParam0)
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

int func_615(bool bParam0)
{
	int iVar0;
	
	if (bParam0 != func_59())
	{
		if (func_2258(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
			{
				iVar0 = func_185(Global_2657589[bParam0 /*466*/].f_321.f_7);
				return (iVar0 == 2 || iVar0 == 25);
			}
		}
	}
	return 0;
}

int func_616(bool bParam0)
{
	if (bParam0 != func_59())
	{
		if (func_2258(bParam0, 1, 1))
		{
			if (Global_2657589[bParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_185(Global_2657589[bParam0 /*466*/].f_321.f_7) == 17;
			}
		}
	}
	return 0;
}

int func_617(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1 != func_59())
	{
		if (!bParam2)
		{
			if (func_618(bParam0, bParam1))
			{
				return 0;
			}
		}
		if (Global_1894573[bParam0 /*608*/].f_10 != func_59())
		{
			return bParam1 == Global_1894573[bParam0 /*608*/].f_10;
		}
	}
	return 0;
}

int func_618(int iParam0, int iParam1)
{
	if (iParam1 != func_59())
	{
		if (iParam0 != func_59())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 != func_59())
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

void func_619()
{
	if (Local_185.f_969 == -1)
	{
		Local_185.f_969 = Global_1949955;
	}
}

void func_620()
{
	if (Local_185.f_968 == -1)
	{
		Local_185.f_968 = Global_1949957;
	}
}

void func_621(int iParam0)
{
	Local_185.f_5 = iParam0;
}

int func_622()
{
	if (Global_2793046.f_5225.f_42)
	{
		Global_2793046.f_5225.f_42 = 0;
		return 1;
	}
	return 0;
}

void func_623()
{
	func_1975();
	func_1970();
	func_1969();
	func_1964();
	func_1961();
	func_1960();
	func_1958();
	func_1957();
	func_1956();
	func_1955();
	func_1933();
	func_1932();
	if (unk_0xD6436470CD2C1484() == 0)
	{
		unk_0x73CB9EAA55D097EB(unk_0x259BE71D8A81D4FA());
	}
	switch (func_473())
	{
		case 0:
			break;
		
		case 1:
			if (!func_1931(2))
			{
				func_1909(190, 1, Local_185.f_17, 0);
				func_1907();
				func_1906(1);
				if (func_1905())
				{
					func_1904();
				}
				if (unk_0xE10356B235A70E70(210.93f, -2022.58f, 17.65f, 6f, joaat("prop_fnclink_03gate1"), 0))
				{
					unk_0x1F3E4227575DF103(joaat("prop_fnclink_03gate1"), 210.93f, -2022.58f, 17.65f, 1, 1f, 0);
				}
				func_1903(2);
				if (func_44())
				{
					func_1900(&uLocal_160, &(Local_185.f_154), func_414(func_16(), 0, Local_185.f_679, 0, 0, 0), Local_135.f_28[0]);
				}
			}
			else if (!func_1931(3))
			{
				if (func_26(&(Local_185.f_10), 10000, 0))
				{
					func_1899();
					func_1903(3);
				}
			}
			if (func_615(unk_0x259BE71D8A81D4FA()) && func_613(unk_0x259BE71D8A81D4FA()) == Local_185.f_0)
			{
				func_1898();
			}
			else
			{
				if (func_615(unk_0x259BE71D8A81D4FA()))
				{
				}
				if ((!func_1894() && !func_1893()) && !func_1892(190))
				{
					if (func_241() == 0)
					{
						if (Global_2672505.f_4.f_10 || func_232(0))
						{
							if (!func_1931(4))
							{
								func_1774(func_16(), Local_185.f_0, 0, -1, 0, 0);
								func_1903(4);
							}
							func_1663(&(Global_1645402.f_534), &Global_1645402, 28, &(Global_1645402.f_1), &(Global_1645402.f_117), -1, 0, 0);
							func_1503();
							if (!Global_1950108.f_528)
							{
								func_1456(0);
								func_1391(0);
								func_1373();
							}
							unk_0x4EB223432F8FA0A0(7);
							unk_0x4EB223432F8FA0A0(8);
							unk_0x4EB223432F8FA0A0(9);
							func_1370();
							func_1368();
							func_1366();
							func_1365();
							func_1364();
							func_1363();
							func_1360();
							func_1349();
							if (func_15() && func_41())
							{
								if (!func_1348(4))
								{
									if (func_29(25))
									{
										func_1347(4);
										if (unk_0xD6436470CD2C1484() < func_1346())
										{
											unk_0xDAE61414743C8D1D(func_1346());
										}
										func_1343(func_1346());
										func_533(5);
									}
									else
									{
										func_1347(4);
									}
								}
								if (!func_1342(30))
								{
									if (func_1931(29))
									{
										if (func_26(&(Local_135.f_261), 10000, 0))
										{
											if (func_29(25) || func_29(24))
											{
												if (!func_29(28))
												{
													func_1341(29);
												}
											}
											func_1340(30);
										}
									}
								}
							}
							if (func_44())
							{
								func_1259(&uLocal_160, &(Local_185.f_154), 5f);
								if (!func_1258() && !func_82(unk_0x259BE71D8A81D4FA(), 6))
								{
									if (!func_82(unk_0x259BE71D8A81D4FA(), 7))
									{
										func_1257(6);
									}
								}
								if (!func_1256())
								{
									func_1255();
								}
							}
							if (((func_369() || func_255()) || func_27()) || func_536())
							{
								func_1209();
							}
							if (bLocal_158 > -1)
							{
								if (bLocal_158 == unk_0xAE032CEDCF23C6D5())
								{
								}
							}
						}
					}
				}
				else
				{
					func_1208(24);
					func_1201();
				}
			}
			break;
		
		case 2:
			if (func_241() != 7)
			{
				if (!BitTest(Global_1947724.f_3, 4))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_1947724.f_3), 4);
				}
			}
			else
			{
				func_1199();
			}
			func_1198();
			func_1196();
			func_1188();
			func_1168(0);
			func_1167();
			func_1456(1);
			func_1391(1);
			func_862();
			func_858(Local_185.f_110);
			func_851();
			func_849(0);
			if (func_2258(unk_0x259BE71D8A81D4FA(), 1, 1))
			{
				if (func_847(unk_0x4A8C381C258A124D(), 2, -1))
				{
					func_626(unk_0x4A8C381C258A124D(), 2, -1, -1);
				}
			}
			func_624();
			break;
		
		case 3:
			break;
	}
}

void func_624()
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < func_14())
	{
		if (unk_0x93BF17E19A9F0E9B(Local_185.f_59[bVar0]))
		{
			if (unk_0xFC8BFE4B41177C22(func_67(bVar0)))
			{
				if (unk_0x1B1A446EFA398EB5(func_67(bVar0)))
				{
					if (!unk_0x1C2F771CDC87A3A5(func_67(bVar0), 0))
					{
						func_625(func_13(bVar0));
					}
				}
			}
		}
		bVar0++;
	}
}

void func_625(int iParam0)
{
	if (unk_0x77B62CAA5DF0922A("ContrabandOwner", 3))
	{
		if (unk_0xD130E7CDEE903624(iParam0, "ContrabandOwner"))
		{
			unk_0x97AC7D93ABD65D96(iParam0, "ContrabandOwner");
		}
	}
	if (unk_0x77B62CAA5DF0922A("ContrabandDeliveryType", 3))
	{
		if (unk_0xD130E7CDEE903624(iParam0, "ContrabandDeliveryType"))
		{
			unk_0x97AC7D93ABD65D96(iParam0, "ContrabandDeliveryType");
		}
	}
}

void func_626(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = unk_0x1C1C92A1CBAE364B(iParam0);
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		Global_78411[iVar1] = -1;
		Global_78411.f_13[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78411.f_26)
	{
		Global_78411.f_26[iVar1] = -1;
		Global_78411.f_36[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78411.f_46)
	{
		Global_78411.f_46[iVar1] = -1;
		iVar1++;
	}
	bVar2 = false;
	if (func_841(iParam0, &Global_78411, iParam1, &iParam3))
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_78411[iVar1] != -1)
			{
				if (unk_0xC0120BBCC298EA2F(iParam0, iVar1) == Global_78411[iVar1] && unk_0xD6AED6BFCC58AF7F(iParam0, iVar1) == Global_78411.f_13[iVar1])
				{
					if (iVar1 == 2)
					{
						bVar0 = true;
					}
					if (iVar1 == 1)
					{
						bVar2 = true;
					}
					unk_0xD1C578C204015E1F(iParam0, iVar1, 0, 0, 0);
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < Global_78411.f_26)
		{
			if (Global_78411.f_26[iVar1] != -1 && Global_78411.f_26[iVar1] != 255)
			{
				if (unk_0xB204F40D393426B6(iParam0, iVar1, 1) == Global_78411.f_26[iVar1] && unk_0x0DC23FA727759F9F(iParam0, iVar1) == Global_78411.f_36[iVar1])
				{
					unk_0x09397806857F5DFB(iParam0, iVar1, 1);
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			if (!func_227(0))
			{
				if (func_840(161, -1))
				{
					func_648(iParam0, 2, func_437(2053, Global_78338, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_648(iParam0, 2, func_437(753, Global_78338, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
		if (iParam1 == 4)
		{
			if (bVar2)
			{
				if (iParam2 != -1 && iParam2 != unk_0x259BE71D8A81D4FA())
				{
					if (unk_0x5B5089244DF8EA05(unk_0xB23E0F9B63D009A8(iParam2)))
					{
						unk_0x7241E3AD10840886(iParam0, unk_0xB23E0F9B63D009A8(bParam2));
					}
				}
				else
				{
					func_632(iParam0, -1);
				}
			}
			func_631(0);
			func_627(1, 2);
		}
	}
}

void func_627(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = iParam0 != true;
	bVar1 = iParam1 != 2;
	if (bVar0 == 1)
	{
		bVar2 = false;
		if (!iParam0 == 3)
		{
			if (unk_0x8735D1F8A7023128())
			{
				unk_0x1D01A8724381340E(Global_1934457);
				Global_1934457 = -1f;
				unk_0x29D3BA4C46972A1C(false);
				bVar2 = true;
			}
			unk_0x7E732AC97C7488C2(bVar0);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1928088[unk_0x259BE71D8A81D4FA() /*199*/].f_198), false);
		}
		else
		{
			if (unk_0x9A207D2459EC3958() || unk_0xDC7D2B438B687A13())
			{
				unk_0x7E732AC97C7488C2(false);
				bVar2 = true;
			}
			unk_0x29D3BA4C46972A1C(bVar0);
			Global_1934457 = unk_0xA315036610507841();
			unk_0x1D01A8724381340E(0.5f);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1928088[unk_0x259BE71D8A81D4FA() /*199*/].f_198), 2);
		}
		if (iParam1 == 1 || bVar1)
		{
			if (Global_1934458 == -1)
			{
				Global_1934458 = unk_0xCA369FBC0DE29517();
			}
			if (!Global_1934458 == -1 && unk_0x9F0C06CFBACDD6A1(Global_1934458))
			{
				if (iParam1 == 1)
				{
					if (!bVar2)
					{
						unk_0xBF3D28CA44F3BE2D(Global_1934458, "On", "GTAO_Vision_Modes_SoundSet", 0);
					}
					else
					{
						unk_0xBF3D28CA44F3BE2D(Global_1934458, "Switch", "GTAO_Vision_Modes_SoundSet", 0);
					}
				}
				else if (bVar1)
				{
					if (!bVar2)
					{
						unk_0xBF3D28CA44F3BE2D(Global_1934458, "On", "GTAO_Vision_Modes_SoundSet", 1);
					}
					else
					{
						unk_0xBF3D28CA44F3BE2D(Global_1934458, "Switch", "GTAO_Vision_Modes_SoundSet", 1);
					}
				}
			}
		}
	}
	else
	{
		if (unk_0x9A207D2459EC3958() || unk_0xDC7D2B438B687A13())
		{
			unk_0x7E732AC97C7488C2(bVar0);
			unk_0x8744D2E3FC95740E(&(Global_1928088[unk_0x259BE71D8A81D4FA() /*199*/].f_198), false);
		}
		if (unk_0x8735D1F8A7023128())
		{
			unk_0x1D01A8724381340E(Global_1934457);
			Global_1934457 = -1f;
			unk_0x29D3BA4C46972A1C(bVar0);
			unk_0x8744D2E3FC95740E(&(Global_1928088[unk_0x259BE71D8A81D4FA() /*199*/].f_198), 2);
		}
		if (iParam1 == 1 || bVar1)
		{
			if (Global_1934458 == -1)
			{
				Global_1934458 = unk_0xCA369FBC0DE29517();
			}
			if (!Global_1934458 == -1 && unk_0x9F0C06CFBACDD6A1(Global_1934458))
			{
				if (iParam1 == 1)
				{
					unk_0xBF3D28CA44F3BE2D(Global_1934458, "Off", "GTAO_Vision_Modes_SoundSet", 0);
				}
				else if (bVar1)
				{
					unk_0xBF3D28CA44F3BE2D(Global_1934458, "Off", "GTAO_Vision_Modes_SoundSet", 1);
				}
			}
		}
	}
	func_628(!bVar0);
}

void func_628(bool bParam0)
{
	func_629(370, bParam0, -1, 1);
}

void func_629(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_630())
	{
		iVar0 = Global_2848282[iParam0 /*3*/][func_438(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xF1D0B0CE940F620D(iVar0, iParam1, iParam3);
		}
	}
}

int func_630()
{
	return 1;
	return 0;
}

void func_631(bool bParam0)
{
	if (Global_4539872 != bParam0)
	{
		Global_4539872 = bParam0;
		if (bParam0)
		{
			StringCopy(&Global_4539873, unk_0x1AF90EB93E0012D6(), 64);
		}
		else
		{
			StringCopy(&Global_4539873, "", 64);
		}
	}
}

void func_632(int iParam0, int iParam1)
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
	if (func_647())
	{
		return;
	}
	unk_0x5CB7287FD7611BC7(iParam0, &Var0);
	iVar1 = func_437(2097, iParam1, 0);
	iVar2 = func_437(2098, iParam1, 0);
	iVar3 = func_437(2099, iParam1, 0);
	iVar4 = func_437(2100, iParam1, 0);
	iVar5 = func_437(2101, iParam1, 0);
	iVar6 = func_437(2102, iParam1, 0);
	fVar7 = func_646(134, iParam1);
	fVar8 = func_646(135, iParam1);
	fVar9 = func_646(136, iParam1);
	bVar10 = func_840(160, iParam1);
	if (((((((((Var0.f_0 != iVar1 || Var0.f_1 != iVar2) || Var0.f_2 != iVar3) || Var0.f_3 != iVar4) || Var0.f_4 != iVar5) || Var0.f_5 != iVar6) || Var0.f_6 != fVar7) || Var0.f_7 != fVar8) || Var0.f_8 != fVar9) || Var0.f_9 != bVar10)
	{
		unk_0x0A5987DCA39E8BE5(iParam0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, fVar7, fVar8, fVar9, bVar10);
		iVar11 = func_437(2103, iParam1, 0);
		if (iVar11 > 0)
		{
			func_633(iParam0, iParam1, 0);
		}
	}
}

void func_633(int iParam0, int iParam1, bool bParam2)
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
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_645(iVar1);
		if (!bParam2)
		{
			fVar3 = func_646(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_644(iVar2, iParam1);
		}
		unk_0xAAF9B08B469F707F(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_643(iVar4);
		iVar6 = func_642(iVar5);
		iVar7 = func_641(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!bParam2)
			{
				iVar10 = func_640(iVar6, iParam1);
				uVar11 = func_646(iVar7, iParam1);
			}
			else
			{
				iVar10 = func_639(iVar6, iParam1);
				uVar11 = func_644(iVar7, iParam1);
			}
			unk_0xE5B6C9B29510B84E(iParam0, iVar5, iVar10, uVar11);
			iVar8 = func_638(iVar5);
			iVar9 = func_637(iVar5);
			if (iVar8 != -1)
			{
				if (!bParam2)
				{
					iVar13 = func_437(iVar8, iParam1, 0);
					iVar14 = func_437(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_636(iVar8, iParam1);
					iVar14 = func_636(iVar9, iParam1);
				}
				func_635(iVar13, &uVar12, &uVar15);
				unk_0x94965BB62753D4D6(iParam0, iVar5, uVar15, uVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_634(&iParam0, iParam1, bParam2);
}

void func_634(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	
	if (!bParam2)
	{
		fVar0 = func_646(157, iParam1);
	}
	else
	{
		fVar0 = func_644(157, iParam1);
	}
	if (*iParam0 == unk_0x4A8C381C258A124D())
	{
	}
	unk_0x348FF3E632DCB635(*iParam0, round(fVar0));
}

void func_635(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	*uParam1 = shift_right(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_636(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2805029[iParam0 /*3*/][func_438(iParam1)];
	if (unk_0x074484B0C0972EF8(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_637(int iParam0)
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

int func_638(int iParam0)
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

int func_639(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_58();
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

int func_640(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_58();
	}
	return unk_0x03CFFD51CE515454(iParam0, iParam1);
}

int func_641(int iParam0)
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

int func_642(int iParam0)
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

int func_643(int iParam0)
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

float func_644(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2847606[iParam0 /*3*/][func_438(iParam1)];
	if (unk_0xE1A5C172B921BBD6(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_645(int iParam0)
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

float func_646(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2847606[iParam0 /*3*/][func_438(iParam1)];
	if (unk_0x2F0966A034F5ADC6(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_647()
{
	if (unk_0xF40767E41852FB72(Global_2639783.f_60) && !Global_2639783.f_59 == 0)
	{
		return 1;
	}
	return 0;
}

int func_648(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
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
		Global_78341[1 /*14*/] = { func_798(iVar5, iParam1, iParam2, -1) };
		if (!func_797(iParam3))
		{
			Global_78339 = (Global_78339 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78339 > 1)
		{
		}
		else if (BitTest(Global_78341[1 /*14*/].f_6, 4))
		{
			func_792(iVar5, iParam1, iParam2, 1);
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
			uVar14 = { func_788(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78341[1 /*14*/] = { func_798(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						unk_0xD1C578C204015E1F(iParam0, func_787(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, unk_0xDAF263B0E792EAEC(iParam0, func_787(iVar0)));
					}
					else
					{
						unk_0xD1C578C204015E1F(iParam0, func_787(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78341[1 /*14*/].f_6, 1))
					{
						func_792(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78341[1 /*14*/] = { func_798(iVar5, iVar0, uVar14[iVar0], -1) };
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
								uVar15 = { func_784(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78341[1 /*14*/] = { func_798(iVar5, 14, uVar15[iVar1], -1) };
								func_783(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
								if (BitTest(Global_78341[1 /*14*/].f_6, 1))
								{
									func_792(iVar5, iVar0, uVar14[iVar0], 1);
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
									unk_0xD1C578C204015E1F(iParam0, func_787(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, unk_0xDAF263B0E792EAEC(iParam0, func_787(iVar0)));
								}
								else
								{
									unk_0xD1C578C204015E1F(iParam0, func_787(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_648(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78341[1 /*14*/].f_6, 1))
							{
								func_792(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78341[1 /*14*/] = { func_798(iVar5, iVar0, func_779(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78341[1 /*14*/].f_6, 3))
				{
					uVar16 = { func_788(iVar5, 0) };
					func_648(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		unk_0xD1C578C204015E1F(iParam0, 1, unk_0xC0120BBCC298EA2F(iParam0, 1), unk_0xD6AED6BFCC58AF7F(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = func_778();
			if (iVar17 != -1)
			{
				func_776(iVar17, 0, iParam10);
			}
			func_771(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { func_784(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78341[1 /*14*/] = { func_798(iVar5, 14, uVar18[iVar1], -1) };
			func_783(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
			if (BitTest(Global_78341[1 /*14*/].f_6, 1))
			{
				func_792(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78339 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_769(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_648(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		func_783(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
		if (BitTest(Global_78341[1 /*14*/].f_6, 1))
		{
			func_792(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78341[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78341[1 /*14*/].f_6, 6) && unk_0x304A39EB177D246B(Global_2883588, joaat("shrink_hair"), 1))
			{
			}
			else if (unk_0xCA362C769B0F4F0E(iParam0, 1, joaat("hair_shrink")))
			{
				func_648(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78341[1 /*14*/] = { func_798(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78341[1 /*14*/].f_12 == 0)
		{
			func_762(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78339 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_769(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_648(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_769(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_648(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		if ((iParam1 == 4 || iParam1 == 11) || iParam1 == 8)
		{
			iVar19 = func_787(iParam1);
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
				iVar23 = func_760(iParam0, 11);
				iVar24 = func_760(iParam0, 8);
				iVar25 = func_760(iParam0, 4);
				if (unk_0xCA362C769B0F4F0E(iParam0, 8, joaat("over_jacket")))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar22 = func_759(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar22 = func_759(iVar5, iParam2, 11, 4);
					}
					if ((((((unk_0x304A39EB177D246B(iVar22, joaat("silk_robe"), 0) || unk_0x304A39EB177D246B(iVar22, joaat("silk_pyjamas"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar22, -826135203, 0)) || unk_0x304A39EB177D246B(iVar22, joaat("morph_suit"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("gorka_suit"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("cat_suit"), 0))
					{
					}
					else
					{
						iVar8 = func_760(iParam0, 8);
					}
				}
				iVar26 = unk_0x94B8A32AA940A6B5(iParam0, 3, unk_0xC0120BBCC298EA2F(iParam0, 3), 0);
				if (unk_0x304A39EB177D246B(iVar26, joaat("gloves"), 0))
				{
					iVar27 = func_758(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = func_769(iParam0, iVar5, 11, iVar23, 3, 0);
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
							iVar22 = func_759(iVar5, iParam2, 11, 4);
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
							if (func_757(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = unk_0xD6AED6BFCC58AF7F(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && unk_0x304A39EB177D246B(func_759(iVar5, iParam2, 11, 4), joaat("vest"), 0))
				{
					iVar23 = func_760(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = func_759(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && unk_0x304A39EB177D246B(iVar22, joaat("vest_shirt"), 0))
					{
						iVar29 = func_755(iVar5, iVar23, iParam2, unk_0xD6AED6BFCC58AF7F(iParam0, 11));
						if (iVar29 != -99)
						{
							func_648(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78341[1 /*14*/] = { func_798(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_754(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = func_759(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = func_759(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!func_754(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar23 >= 256) && (unk_0x304A39EB177D246B(iVar22, joaat("vest"), 0) || unk_0x304A39EB177D246B(iVar22, joaat("vest_shirt"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar23 >= 256) && ((((((((unk_0x304A39EB177D246B(iVar22, joaat("heist_draw_5"), 0) || unk_0x304A39EB177D246B(iVar22, joaat("heist_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("heist_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("heist_draw_11"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("heist_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar22, -872449705, 0)) || unk_0x304A39EB177D246B(iVar22, joaat("apart_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("stunt_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar22, joaat("stunt_draw_9"), 0)))
						{
						}
						else
						{
							iVar30 = func_753(iParam0, iParam2);
							iVar31 = func_755(iVar5, iVar23, iParam2, unk_0xD6AED6BFCC58AF7F(iParam0, 11));
							if (iVar31 != -99)
							{
								func_648(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78341[1 /*14*/] = { func_798(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == unk_0x4A8C381C258A124D() || iParam0 == Global_4539790))
							{
								func_648(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78341[1 /*14*/] = { func_798(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar32 = func_751(iVar5, 11, -1);
									Global_78341[1 /*14*/] = { func_798(iVar5, 11, iVar32, -1) };
									iVar31 = func_755(iVar5, iVar32, iParam2, Global_78341[1 /*14*/].f_4);
									iVar33 = func_759(iVar5, iParam2, 11, 3);
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
									if (unk_0x304A39EB177D246B(func_759(iVar5, iParam2, 11, 4), joaat("biker_vest"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_648(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78341[1 /*14*/] = { func_798(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78341[1 /*14*/] = { func_798(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78341[1 /*14*/].f_3;
						Global_78341[1 /*14*/] = { func_798(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78341[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = func_753(iParam0, iParam2);
							Global_78341[1 /*14*/] = { func_798(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78341[1 /*14*/].f_4;
							iVar38 = func_750(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == unk_0x4A8C381C258A124D() || iParam0 == Global_4539790))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar40 = func_759(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_749(iVar40) == 6) || unk_0x304A39EB177D246B(iVar40, joaat("biker_vest"), 0))
									{
										iVar38 = func_751(iVar5, 11, -1);
										Global_78341[1 /*14*/] = { func_798(iVar5, 11, iVar38, -1) };
										iVar39 = func_755(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!unk_0x304A39EB177D246B(func_759(iVar5, iParam2, 11, 4), joaat("jacket_only"), 0))
									{
										iVar38 = func_751(iVar5, 11, -1);
										Global_78341[1 /*14*/] = { func_798(iVar5, 11, iVar38, -1) };
										iVar39 = func_755(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar41 = func_759(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar41 = func_759(iVar5, iVar24, 8, 4);
								}
								if (unk_0x304A39EB177D246B(iVar41, joaat("overcoat_accs"), 0))
								{
									iVar38 = func_751(iVar5, 11, -1);
									Global_78341[1 /*14*/] = { func_798(iVar5, 11, iVar38, -1) };
									iVar39 = func_755(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = func_755(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (unk_0x304A39EB177D246B(func_759(iVar5, iParam2, 11, 3), joaat("low2_open_check"), 0))
									{
										if (!func_748(iVar5, func_760(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x304A39EB177D246B(func_759(iVar5, iParam2, 11, 4), joaat("low2_open_check"), 0))
									{
										if (!func_748(iVar5, func_760(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_648(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar38 = func_751(iVar5, 11, -1);
								Global_78341[1 /*14*/] = { func_798(iVar5, 11, iVar38, -1) };
								iVar39 = func_755(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_648(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_648(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78341[1 /*14*/] = { func_798(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_745(iVar5, iParam2);
				if (!bParam13)
				{
					unk_0xD1C578C204015E1F(iParam0, 10, 0, 0, unk_0xDAF263B0E792EAEC(iParam0, 10));
				}
			}
			func_771(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_758(iVar5, func_779(iParam0, 8, -1), iParam2, func_779(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_437(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_437(2160, iParam10, 0);
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
						iVar42 = func_743(iParam2);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar42 = func_741(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_688(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = unk_0x94B8A32AA940A6B5(iParam0, 3, unk_0xC0120BBCC298EA2F(iParam0, 3), 0);
			if (unk_0x304A39EB177D246B(iVar43, joaat("gloves"), 0))
			{
				iVar44 = func_760(iParam0, 11);
				iVar45 = func_760(iParam0, 4);
				iVar46 = func_758(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = func_769(iParam0, iVar5, 11, iVar44, 3, 0);
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
						iVar47 = func_759(iVar5, iParam2, 11, 4);
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
						if (func_757(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = unk_0xD6AED6BFCC58AF7F(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_771(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = func_760(iParam0, 11);
			if (func_754(iVar5, iVar49, -1))
			{
				iVar50 = func_750(iVar5, iParam2, Global_78341[1 /*14*/].f_4);
				func_745(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_758(iVar5, iParam2, func_760(iParam0, 11), func_760(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = func_760(iParam0, 7);
				if (!func_685(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					unk_0xD1C578C204015E1F(iParam0, func_787(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && unk_0x304A39EB177D246B(Global_2883588, joaat("shrink_head"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && unk_0x304A39EB177D246B(Global_2883588, joaat("shrink_head"), 0)))
			{
				iVar52 = func_437(2100, iParam10, 0);
				iVar53 = func_437(2101, iParam10, 0);
				iVar54 = func_437(2102, iParam10, 0);
				uVar55 = func_646(135, iParam10);
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
				func_632(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = func_760(iParam0, 11);
			iVar58 = func_760(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x304A39EB177D246B(func_759(iVar5, iVar57, 11, 3), joaat("low2_open_check"), 0))
				{
					if (!func_748(iVar5, iParam2, func_750(iVar5, iVar58, 0)))
					{
						func_648(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78341[1 /*14*/] = { func_798(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (unk_0x304A39EB177D246B(func_759(iVar5, iVar57, 11, 4), joaat("low2_open_check"), 0))
				{
					if (!func_748(iVar5, iParam2, func_750(iVar5, iVar58, 0)))
					{
						func_648(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78341[1 /*14*/] = { func_798(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_758(iVar5, func_760(iParam0, 8), func_760(iParam0, 11), iParam2);
			}
			iVar59 = unk_0x94B8A32AA940A6B5(iParam0, 3, unk_0xC0120BBCC298EA2F(iParam0, 3), 0);
			if (unk_0x304A39EB177D246B(iVar59, joaat("gloves"), 0))
			{
				iVar60 = func_758(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = func_769(iParam0, iVar5, 11, iVar57, 3, 0);
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
						iVar61 = func_759(iVar5, iParam2, 11, 4);
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
						if (func_757(iVar5, iVar60, iVar62) == iVar59)
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
			unk_0xD1C578C204015E1F(iParam0, func_787(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, unk_0xDAF263B0E792EAEC(iParam0, func_787(iParam1)));
		}
		else
		{
			unk_0xD1C578C204015E1F(iParam0, func_787(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78339 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_769(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_648(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_758(iVar5, iVar3, func_760(iParam0, 11), func_760(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_769(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_648(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_684(iParam0))
				{
					iVar63 = func_682(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + unk_0xD6AED6BFCC58AF7F(iParam0, 9));
						if (!func_676(iParam0, 9, iVar63))
						{
							func_648(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_648(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (unk_0xCA362C769B0F4F0E(iParam0, 8, joaat("over_jacket")))
					{
						func_648(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = func_437(2042, -1, 0);
				if (unk_0xC0120BBCC298EA2F(iParam0, 5) != 0)
				{
					unk_0xD1C578C204015E1F(iParam0, 5, func_670(iParam0, iVar64), func_669(iParam0, iVar64), func_668(iParam0, iVar64));
				}
				if (iParam0 == unk_0x4A8C381C258A124D())
				{
					unk_0x740F6E63EE1C1D43(unk_0x259BE71D8A81D4FA(), 5, func_670(unk_0x4A8C381C258A124D(), iVar64), func_669(unk_0x4A8C381C258A124D(), iVar64), 0);
					unk_0xC02C4AB8A5C744D7(unk_0x259BE71D8A81D4FA(), func_668(unk_0x4A8C381C258A124D(), iVar64));
					func_666(unk_0x259BE71D8A81D4FA(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (unk_0x304A39EB177D246B(Global_2883588, joaat("big_chain"), 0))
					{
						func_648(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_779(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_779(iParam0, 11, -1);
				}
				if (func_665(iVar5, 11, iVar66, -1))
				{
					if (!func_664(iVar5, 4, iVar65, -1))
					{
						if (func_663(iVar5, 4, iVar65, &uVar67))
						{
							func_648(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_664(iVar5, 4, iVar65, -1))
				{
					if (func_662(iVar5, 4, iVar65, &uVar67))
					{
						func_648(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar74 = func_760(iParam0, 4);
				iVar75 = func_760(iParam0, 6);
				if (func_661(iVar5, iVar70))
				{
					if (unk_0x304A39EB177D246B(iVar70, joaat("alt_feet"), 0) != func_660(iVar5, iVar74, iVar70))
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
										iVar75 = func_656(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_648(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar75 = func_656(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_648(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (unk_0x304A39EB177D246B(iVar73, joaat("alt_legs"), 0) != func_655(iVar5, iVar75, iVar73))
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
										iVar74 = func_656(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_648(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar74 = func_656(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_648(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (func_661(iVar5, iVar73))
				{
					if (unk_0x304A39EB177D246B(iVar73, joaat("alt_legs"), 0) != func_655(iVar5, iVar75, iVar73))
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
										iVar74 = func_656(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_648(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar74 = func_656(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_648(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (unk_0x304A39EB177D246B(iVar70, joaat("alt_feet"), 0) != func_660(iVar5, iVar74, iVar70))
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
										iVar75 = func_656(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_648(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar75 = func_656(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_648(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_762(iParam0);
				iVar81 = unk_0xC0120BBCC298EA2F(iParam0, 1);
				iVar82 = unk_0xD6AED6BFCC58AF7F(iParam0, 1);
				iVar83 = unk_0x94B8A32AA940A6B5(iParam0, 1, iVar81, iVar82);
				if (unk_0x304A39EB177D246B(iVar83, joaat("force_prop"), 0))
				{
					iVar3 = func_769(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_648(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_769(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_648(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_649(iParam0, &uVar4))
		{
			func_648(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_648(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_648(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_648(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = func_757(iVar5, func_779(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar9 = func_656(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar9 = func_656(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_648(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78339 = (Global_78339 - 1);
	return 1;
}

int func_649(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_779(unk_0x4A8C381C258A124D(), 2, -1);
	if (func_437(754, Global_78338, 0) != -99 && func_652())
	{
		if (func_651() == 4)
		{
			return 1;
		}
		if (func_437(754, Global_78338, 0) == 0 && func_437(755, Global_78338, 0) == 0)
		{
			if (func_840(161, Global_78338))
			{
				if (func_437(2053, Global_78338, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_437(753, Global_78338, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_437(754, Global_78338, 0);
		iVar1 = func_437(755, Global_78338, 0);
		if (!func_676(iParam0, iVar1, iVar0))
		{
			if (func_840(161, Global_78338))
			{
				*uParam1 = func_437(2053, Global_78338, 0);
			}
			else
			{
				*uParam1 = func_437(753, Global_78338, 0);
			}
			func_650(754, -99, Global_78338, 1, 0);
			func_650(755, 2, Global_78338, 1, 0);
			return 1;
		}
	}
	return 0;
}

void func_650(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805029[iParam0 /*3*/][func_438(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
	}
}

int func_651()
{
	return Global_1574992;
}

int func_652()
{
	if (func_654() && func_653(0))
	{
		return 1;
	}
	return 0;
}

var func_653(int iParam0)
{
	return Global_1574538[iParam0];
}

var func_654()
{
	return func_653(func_58() + 1);
}

int func_655(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_759(iParam0, iParam1, 6, 3);
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
				iVar0 = func_759(iParam0, iParam1, 6, 4);
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

int func_656(int iParam0, int iParam1, int iParam2, int iParam3)
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
				return (func_659(iParam0) + iVar1);
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
			return (func_658(iParam0) + iVar3);
		}
	}
	else
	{
		unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 0, -1, func_787(iParam2));
		iVar4 = unk_0x55FF07D3A2FE8317(iParam1);
		if (iVar4 != -1)
		{
			return (func_657(iParam0, func_787(iParam2)) + iVar4);
		}
	}
	return -99;
}

int func_657(int iParam0, int iParam1)
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

int func_658(int iParam0)
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

int func_659(int iParam0)
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

int func_660(int iParam0, int iParam1, int iParam2)
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
				iVar0 = func_759(iParam0, iParam1, 4, 3);
				iVar1 = func_749(iVar0);
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
				iVar0 = func_759(iParam0, iParam1, 4, 4);
				iVar1 = func_749(iVar0);
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

int func_661(int iParam0, int iParam1)
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

int func_662(int iParam0, int iParam1, int iParam2, var uParam3)
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
						iVar0 = func_759(iParam0, iParam2, iParam1, 4);
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
											*uParam3 = func_656(iParam0, iVar3, iParam1, 4);
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

int func_663(int iParam0, int iParam1, int iParam2, var uParam3)
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
						iVar0 = func_759(iParam0, iParam2, iParam1, 4);
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
											*uParam3 = func_656(iParam0, iVar3, iParam1, 4);
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

int func_664(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_759(iParam0, iParam2, 4, 4);
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

int func_665(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_759(iParam0, iParam2, 11, 4);
						}
						return unk_0x304A39EB177D246B(iParam3, joaat("dress"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_666(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_667(iParam1);
	if (iVar0 != joaat("p_parachute_s"))
	{
		unk_0xD8FE716A11BE669A(iParam0, iVar0);
	}
	else
	{
		unk_0xBDAA517C3D10DB80(iParam0);
	}
}

int func_667(int iParam0)
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

int func_668(int iParam0, int iParam1)
{
	return 0;
}

int func_669(int iParam0, int iParam1)
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

var func_670(int iParam0, int iParam1)
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
		Global_78538 = func_671(iParam0, iParam1);
	}
	return Global_78538;
}

int func_671(int iParam0, int iParam1)
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
				return func_675(iParam0, iParam1, 1);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_3"), 8) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_0"), 8))
			{
				return func_675(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_4"), 8))
			{
				return func_675(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_5"), 8))
			{
				return func_675(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_6"), 8))
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_2"), 8))
			{
				return func_675(iParam0, iParam1, 6);
			}
			if ((unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_3"), 8) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_0"), 8)) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_1"), 8))
			{
				return func_675(iParam0, iParam1, 7);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_4"), 8))
			{
				return func_675(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_5"), 8))
			{
				return func_675(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_6"), 8))
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		return func_675(iParam0, iParam1, 9);
	}
	if (func_674(iParam0))
	{
		if (bVar1)
		{
			return func_675(iParam0, iParam1, 7);
		}
		else
		{
			return func_675(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = unk_0x94B8A32AA940A6B5(iParam0, 11, iVar0, unk_0xD6AED6BFCC58AF7F(iParam0, 11));
		if (unk_0x304A39EB177D246B(iVar4, 98087521, 0))
		{
			return func_675(iParam0, iParam1, 0);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -135391604, 0))
		{
			return func_675(iParam0, iParam1, 1);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 1398721900, 0))
		{
			return func_675(iParam0, iParam1, 2);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 1030529416, 0))
		{
			return func_675(iParam0, iParam1, 3);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 873008833, 0))
		{
			return func_675(iParam0, iParam1, 4);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1646534043, 0))
		{
			return func_675(iParam0, iParam1, 5);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1868675094, 0))
		{
			return func_675(iParam0, iParam1, 6);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1500122155, 0))
		{
			return func_675(iParam0, iParam1, 7);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1741007074, 0))
		{
			return func_675(iParam0, iParam1, 8);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -226291902, 0))
		{
			return func_675(iParam0, iParam1, 9);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 607416996, 0))
		{
			return func_675(iParam0, iParam1, 10);
		}
		if (unk_0x304A39EB177D246B(iVar4, joaat("hipster_dress"), 0))
		{
			if (bVar1)
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, -405912369, 0))
		{
			return func_675(iParam0, iParam1, 1);
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("dress"), 0))
		{
			if (bVar1)
			{
				return func_675(iParam0, iParam1, 5);
			}
			else
			{
				return func_675(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("pilot_suit"), 0))
		{
			return func_675(iParam0, iParam1, 8);
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("combat_gear"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 7);
				}
				else
				{
					return func_675(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("hooded_jacket"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 7);
				}
				else
				{
					return func_675(iParam0, iParam1, 1);
				}
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_5"), 0))
			{
				return func_675(iParam0, iParam1, 10);
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_32"), 0))
			{
				return func_675(iParam0, iParam1, 10);
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_33"), 0))
			{
				return func_675(iParam0, iParam1, 10);
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_30"), 0))
			{
				return func_675(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("LUXE_COAT"), 0) && !unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_3"), 0))
		{
			iVar5 = func_673(iVar4, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return func_675(iParam0, iParam1, 1);
						break;
					
					case 2:
						return func_675(iParam0, iParam1, 8);
						break;
					
					default:
						iVar0 = func_749(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return func_675(iParam0, iParam1, 6);
						break;
					
					default:
						iVar0 = func_749(iVar4);
						break;
					}
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe_bomb"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_4"), 0))
			{
				return func_675(iParam0, iParam1, 2);
			}
			else
			{
				return func_675(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("heist_gear"), 0))
		{
			iVar6 = func_672(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return func_675(iParam0, iParam1, 7);
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_675(iParam0, iParam1, 7);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_675(iParam0, iParam1, 7);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_675(iParam0, iParam1, 7);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_675(iParam0, iParam1, 7);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_675(iParam0, iParam1, 9);
					}
					else
					{
						return func_675(iParam0, iParam1, 7);
					}
					break;
				
				case 13:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_675(iParam0, iParam1, 9);
					}
					else
					{
						return func_675(iParam0, iParam1, 9);
					}
					break;
				
				case 14:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_675(iParam0, iParam1, 9);
					}
					break;
				
				default:
					iVar0 = func_749(iVar4);
					break;
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("xmas2_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 7);
				}
				else
				{
					return func_675(iParam0, iParam1, 2);
				}
			}
			else if (bVar1)
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 1);
			}
			else
			{
				return func_675(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 1);
			}
			else if (bVar1)
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 2);
			}
			else
			{
				return func_675(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 2);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 1);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 8);
			}
			else
			{
				return func_675(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("LOW_DRAW_7"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("jan_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 2);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("LOW_DRAW_8"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("jan_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x304A39EB177D246B(iVar4, joaat("air_draw_3"), 0))
				{
					return func_675(iParam0, iParam1, 10);
				}
				else
				{
					return func_675(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 1);
			}
		}
		else if ((unk_0x304A39EB177D246B(iVar4, -1086258388, 0) || unk_0x304A39EB177D246B(iVar4, joaat("luxe_sweat"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_sweat"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 7);
				}
				else
				{
					return func_675(iParam0, iParam1, 5);
				}
			}
			else if (bVar1)
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 8);
			}
			else if (bVar1)
			{
				return func_675(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 7);
				}
				else
				{
					return func_675(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 6);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 7);
				}
				else
				{
					return func_675(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 2);
			}
			else
			{
				return func_675(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 2);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 9);
				}
				else
				{
					return func_675(iParam0, iParam1, 1);
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
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 7);
				}
				else
				{
					return func_675(iParam0, iParam1, 5);
				}
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 7);
				}
				else
				{
					return func_675(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 7);
				}
				else
				{
					return func_675(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 7);
				}
				else
				{
					return func_675(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 7);
				}
				else
				{
					return func_675(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_675(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 7);
				}
				else
				{
					return func_675(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_675(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 7);
				}
				else
				{
					return func_675(iParam0, iParam1, 6);
				}
			}
			else
			{
				return func_675(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 7);
				}
				else
				{
					return func_675(iParam0, iParam1, 2);
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
				return func_675(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 7);
				}
				else
				{
					return func_675(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 7);
				}
				else
				{
					return func_675(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_0"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("air_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 9);
			}
			else if (bVar1)
			{
				return func_675(iParam0, iParam1, 10);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 2);
			}
			else
			{
				return func_675(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 2);
			}
			else
			{
				return func_675(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 2);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 2);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_675(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 10);
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 10);
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 10);
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("smug_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
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
				return func_675(iParam0, iParam1, 10);
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 10);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 10);
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("assault_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 0);
			}
			else
			{
				return func_675(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_675(iParam0, iParam1, 10);
				}
				else
				{
					return func_675(iParam0, iParam1, 10);
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 1);
			}
			else
			{
				return func_675(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 10);
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 10);
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 10);
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 3);
			}
			else
			{
				return func_675(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 10);
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 1);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 10);
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 9);
			}
			else
			{
				return func_675(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 10);
			}
			else
			{
				return func_675(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("vest_shirt"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("tails_jacket"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_675(iParam0, iParam1, 7);
			}
			else
			{
				return func_675(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("smoking_jacket"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_675(iParam0, iParam1, 2);
			}
			else
			{
				return func_675(iParam0, iParam1, 7);
			}
		}
		else if ((unk_0x304A39EB177D246B(iVar4, joaat("silk_pyjamas"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar4, -826135203, 0))
		{
			return func_675(iParam0, iParam1, 6);
		}
		else
		{
			iVar7 = iVar0;
			iVar0 = func_749(iVar4);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 1);
				}
				else
				{
					return func_675(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 1);
				}
				else
				{
					return func_675(iParam0, iParam1, 0);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 6);
				}
				else
				{
					return func_675(iParam0, iParam1, 6);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 2);
				}
				else
				{
					return func_675(iParam0, iParam1, 2);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 2);
				}
				else
				{
					return func_675(iParam0, iParam1, 2);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 1);
				}
				else
				{
					return func_675(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 1);
				}
				else
				{
					return func_675(iParam0, iParam1, 1);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 2);
				}
				else
				{
					return func_675(iParam0, iParam1, 2);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 7);
				}
				else
				{
					return func_675(iParam0, iParam1, 0);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 1);
				}
				else
				{
					return func_675(iParam0, iParam1, 0);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 2);
				}
				else
				{
					return func_675(iParam0, iParam1, 2);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 7);
				}
				else
				{
					return func_675(iParam0, iParam1, 1);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 1);
				}
				else
				{
					return func_675(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 6);
				}
				else
				{
					return func_675(iParam0, iParam1, 1);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 5);
				}
				else
				{
					return func_675(iParam0, iParam1, 5);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 1);
				}
				else
				{
					return func_675(iParam0, iParam1, 4);
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
					return func_675(iParam0, iParam1, 1);
				}
				else
				{
					return func_675(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 6);
				}
				else
				{
					return func_675(iParam0, iParam1, 6);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 3);
				}
				else
				{
					return func_675(iParam0, iParam1, 2);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 5);
				}
				else
				{
					return func_675(iParam0, iParam1, 4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 1);
				}
				else
				{
					return func_675(iParam0, iParam1, 0);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 1);
				}
				else
				{
					return func_675(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 6);
				}
				else
				{
					return func_675(iParam0, iParam1, 6);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 6);
				}
				else
				{
					return func_675(iParam0, iParam1, 6);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 6);
				}
				else
				{
					return func_675(iParam0, iParam1, 6);
				}
				break;
			
			case 9:
				return func_675(iParam0, iParam1, 1);
				break;
			
			case 10:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 6);
				}
				else
				{
					return func_675(iParam0, iParam1, 6);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 1);
				}
				else
				{
					return func_675(iParam0, iParam1, 0);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 1);
				}
				else
				{
					return func_675(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 1);
				}
				else
				{
					return func_675(iParam0, iParam1, 0);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 7);
				}
				else
				{
					return func_675(iParam0, iParam1, 3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_675(iParam0, iParam1, 1);
				}
				else
				{
					return func_675(iParam0, iParam1, 0);
				}
				break;
			}
	}
	return func_675(iParam0, iParam1, 0);
	return 0;
}

int func_672(int iParam0, int iParam1)
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

int func_673(int iParam0, int iParam1)
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

int func_674(int iParam0)
{
	if (unk_0xCA362C769B0F4F0E(iParam0, 4, joaat("dungarees")))
	{
		return 1;
	}
	return 0;
}

int func_675(int iParam0, int iParam1, int iParam2)
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

int func_676(int iParam0, int iParam1, int iParam2)
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
	Global_78341[1 /*14*/] = { func_798(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78341[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_788(iVar0, iParam2) };
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
				if (!func_676(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { func_784(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_676(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78341[2 /*14*/] = { func_798(iVar0, 14, iVar6, -1) };
									if (Global_78341[2 /*14*/].f_12 == iVar5)
									{
										if (func_676(iParam0, 14, iVar6))
										{
											if (!func_677(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78341[2 /*14*/])))
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
						iVar1 = func_760(iParam0, iVar4);
						Global_78341[2 /*14*/] = { func_798(iVar0, iVar4, iVar1, -1) };
						if (!func_677(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78341[2 /*14*/])))
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
			if (func_437(1759, Global_78338, 0) != uVar8[10])
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
		uVar11 = { func_784(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_676(iParam0, 14, uVar11[iVar10]))
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
		if (Global_78341[1 /*14*/].f_3 == unk_0xC0120BBCC298EA2F(iParam0, func_787(iParam1)) && Global_78341[1 /*14*/].f_4 == unk_0xD6AED6BFCC58AF7F(iParam0, func_787(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78340++;
			if (Global_78340 == 1)
			{
				if (func_665(iVar0, 11, func_760(iParam0, 11), -1))
				{
					if (func_663(iVar0, 4, iParam2, &uVar18))
					{
						return func_676(iParam0, 4, uVar18);
					}
				}
				else if (func_662(iVar0, 4, iParam2, &uVar18))
				{
					return func_676(iParam0, 4, uVar18);
				}
			}
			Global_78340 = (Global_78340 - 1);
		}
	}
	return 0;
}

int func_677(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
		uVar0 = { func_784(iParam0, (*uParam4)[13]) };
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
	if (func_681(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_680(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_679(iParam0, iParam2, iParam3, -1))
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
		else if (func_678(iParam0, iParam2, iParam3, -1))
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
		if (func_680(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_679(iParam0, iParam2, iParam3, -1))
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
		else if (func_678(iParam0, iParam2, iParam3, -1))
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
		if (func_680(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_679(iParam0, iParam2, iParam3, -1))
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
		else if (func_678(iParam0, iParam2, iParam3, -1))
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

int func_678(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_759(iParam0, iParam2, 14, 3);
						}
						return (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 1) || unk_0x304A39EB177D246B(func_759(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_759(iParam0, iParam2, 1, 3);
						}
						return (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 0) || unk_0x304A39EB177D246B(func_759(iParam0, iParam2, 1, 3), -1842686353, 0));
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
							iParam3 = func_759(iParam0, iParam2, 14, 4);
						}
						return (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 1) || unk_0x304A39EB177D246B(func_759(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_759(iParam0, iParam2, 1, 4);
						}
						return (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 0) || unk_0x304A39EB177D246B(func_759(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_679(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_759(iParam0, iParam2, 1, 3);
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
						iParam3 = func_759(iParam0, iParam2, 1, 4);
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

int func_680(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_759(iParam0, iParam2, 14, 3);
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
						iParam3 = func_759(iParam0, iParam2, 14, 4);
					}
					return unk_0x304A39EB177D246B(iParam3, joaat("glasses"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_681(int iParam0, int iParam1, int iParam2)
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

int func_682(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (func_674(iParam0))
	{
		return -99;
	}
	if (func_683(iParam0))
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
				iVar0 = func_759(iParam1, iParam3, 11, 3);
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
								return func_656(iParam1, iVar3, 9, 3);
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
				iVar6 = func_759(iParam1, iParam3, 11, 4);
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
								return func_656(iParam1, iVar9, 9, 4);
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

int func_683(int iParam0)
{
	if (unk_0xCA362C769B0F4F0E(iParam0, 8, joaat("x17_draw_6")))
	{
		return 1;
	}
	return 0;
}

int func_684(int iParam0)
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

int func_685(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
			iVar2 = func_759(iParam0, iParam1, 7, 3);
			iVar1 = func_749(iVar2);
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
			iVar4 = func_759(iParam0, iParam3, 11, 3);
			iVar3 = func_749(iVar4);
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
			iVar6 = func_759(iParam0, iParam4, 8, 3);
			iVar5 = func_749(iVar6);
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
			iVar8 = func_759(iParam0, iParam10, 1, 3);
			iVar7 = func_749(iVar8);
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
			if (func_754(iParam0, iParam3, -1))
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
					iVar9 = func_759(iParam0, iParam9, 14, 3);
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
					else if (func_687(iParam0, iParam3))
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
				else if (func_687(iParam0, iParam3))
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
					iVar10 = func_759(iParam0, iParam11, 4, 3);
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
			if (iParam9 >= 327 && unk_0x304A39EB177D246B(func_759(iParam0, iParam9, 14, 3), joaat("pilot_suit"), 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0x304A39EB177D246B(func_759(iParam0, iParam9, 14, 3), joaat("pilot_suit"), 1)) && iParam1 != 0)
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
				if (((iParam3 >= 204 && iParam3 <= 219) || func_754(iParam0, iParam3, -1)) || iVar3 == 13)
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
					iVar0 = func_760(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_749(func_759(iParam0, iVar0, 11, 3)) == 13))
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
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || func_754(iParam0, iParam3, -1)) || iVar3 == 13) || iVar3 == 11)
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
					iVar0 = func_760(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_749(func_759(iParam0, iVar0, 11, 3)) == 13))
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
				if (((iParam4 >= 192 && iParam4 <= 207) || func_686(iVar6)) || (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("draw_12"), 0)))
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
			iVar12 = func_759(iParam0, iParam1, 7, 4);
			iVar11 = func_749(iVar12);
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
			iVar14 = func_759(iParam0, iParam3, 11, 4);
			iVar13 = func_749(iVar14);
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
			iVar16 = func_759(iParam0, iParam4, 8, 4);
			iVar15 = func_749(iVar16);
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
			iVar18 = func_759(iParam0, iParam10, 1, 4);
			iVar17 = func_749(iVar18);
			Global_4539511 = iParam10;
			Global_4539510 = iVar18;
			Global_4539509 = iVar17;
		}
		iVar19 = -1;
		if (iParam9 >= 327)
		{
			iVar19 = func_759(iParam0, iParam9, 14, 4);
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
			if (func_754(iParam0, iParam3, -1))
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
					else if (func_687(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_687(iParam0, iParam3) || unk_0x304A39EB177D246B(iVar14, joaat("block_scarfs"), 0))
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
			if (iParam9 >= 327 && unk_0x304A39EB177D246B(func_759(iParam0, iParam9, 14, 4), joaat("pilot_suit"), 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0x304A39EB177D246B(func_759(iParam0, iParam9, 14, 4), joaat("pilot_suit"), 1)) && iParam1 != 0)
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
					iVar20 = func_759(iParam0, iParam11, 4, 4);
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
				else if (func_754(iParam0, iParam3, -1))
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
				else if (func_750(iParam0, iParam4, 0) != -99)
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
				if (iParam4 >= 136 && unk_0x304A39EB177D246B(func_759(iParam0, iParam4, 8, 4), joaat("long_sleeve"), 0))
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
				if (iParam4 >= 136 && unk_0x304A39EB177D246B(func_759(iParam0, iParam4, 8, 4), joaat("long_sleeve"), 0))
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
				if (iParam4 >= 136 && unk_0x304A39EB177D246B(func_759(iParam0, iParam4, 8, 4), joaat("long_sleeve"), 0))
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
					iVar22 = func_759(iParam0, iParam11, 4, 4);
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

int func_686(int iParam0)
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

int func_687(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = func_759(iParam0, iParam1, 11, 3);
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
		return func_754(iParam0, iParam1, -1);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_759(iParam0, iParam1, 11, 4);
		iVar2 = -1;
		if (iVar1 != -1)
		{
			iVar2 = func_749(iVar1);
		}
		if (((((((((((((((((((((((((((((((((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 48 && iParam1 < 64)) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 144 && iParam1 < 160)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 224 && iParam1 < 240)) || iVar2 == 1) || iVar2 == 3) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10) || iVar2 == 14) || unk_0x304A39EB177D246B(iVar1, joaat("jacket"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("combat_top"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("heist_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("heist_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("silk_pyjamas"), 0)) || unk_0x304A39EB177D246B(iVar1, -826135203, 0)) || unk_0x304A39EB177D246B(iVar1, joaat("low2_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar1, -102825006, 0)) || unk_0x304A39EB177D246B(iVar1, joaat("apart_draw_18"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("apart_draw_20"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("apart_draw_24"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("air_draw_0"), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_688(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	func_740(unk_0x70E57E9927B6BA58("hairOverlay"), iParam0);
	iVar1 = func_739(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78338;
		}
		func_776(iVar1, 1, iParam2);
	}
	func_689(iParam0, bParam3, 0, -1);
}

void func_689(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		iVar2 = func_738(iParam0);
		bVar3 = func_733(iParam0, 0);
		bVar4 = func_725(iParam0);
		bVar5 = func_724(iParam0, iParam3);
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
			if (func_721(iVar6, iVar0))
			{
				if (func_714(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (func_711(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						unk_0x49A5A17556C31561(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (func_721(123, iVar0))
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
					if (func_721(iVar10, iVar0))
					{
						if (func_711(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!func_691(Var9.f_2, Var9.f_3, iVar10))
							{
								unk_0x49A5A17556C31561(iParam0, Var9.f_2, Var9.f_3);
								func_690(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

void func_690(int iParam0, int iParam1, int iParam2)
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

int func_691(int iParam0, int iParam1, int iParam2)
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
					if (func_710(36717, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -507124931);
					break;
				
				case -187038898:
				case 524638244:
					if (func_710(36767, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -187038898);
					break;
				
				case 1797082704:
				case -757817895:
					if (func_710(36766, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 1797082704);
					break;
				
				case 1959890413:
				case 1506629605:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 1959890413);
					break;
				
				case 1167984459:
				case 568901597:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 1167984459);
					break;
				
				case 1006005360:
				case 1403427788:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 1006005360);
					break;
				
				case -1295693571:
				case -1940685798:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -1295693571);
					break;
				
				case -1825141795:
				case 1441861967:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -1825141795);
					break;
				
				case 61080464:
				case -1941007133:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 61080464);
					break;
				
				case -1622071979:
				case -1216457341:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -1622071979);
					break;
				
				case -899024637:
				case 141030546:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -899024637);
					break;
				
				case -569499773:
				case 2065160600:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -569499773);
					break;
				
				case -665339429:
				case 222569387:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -665339429);
					break;
				
				case 858185772:
				case -1269669251:
					if (Global_262145.f_34056)
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 858185772);
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
					if (func_710(34505, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 1529075272);
					break;
				
				case 1769388797:
				case 183205348:
					if (func_710(34375, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 1769388797);
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
					if (func_705(116, -1) >= func_704(116, 5, 9) || func_710(31760, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -129339642);
					break;
				
				case 887263619:
				case -436866133:
					if (func_703(123, -1) || func_710(31761, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 887263619);
					break;
				
				case -598443208:
				case 457275657:
					if (func_703(124, -1) || func_710(31762, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -598443208);
					break;
				
				case -619123295:
				case -250832592:
					if (func_703(125, -1) || func_710(31763, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -619123295);
					break;
				
				case -2139930425:
				case -798760789:
					if (func_703(126, -1) || func_710(31764, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -2139930425);
					break;
				
				case 991513037:
				case -1634791241:
					if (func_710(31768, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 991513037);
					break;
				
				case -675149090:
				case -1227437948:
					if (func_710(31769, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -675149090);
					break;
				
				case -1686814509:
				case -1408179706:
					if (func_710(31770, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -1686814509);
					break;
				
				case 2138708412:
				case -1894139601:
					if (func_710(31771, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 2138708412);
					break;
				
				case 205793848:
				case -786254870:
					if (func_710(31772, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 205793848);
					break;
				
				case 1325175663:
				case -773154515:
					if (func_710(31773, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 1325175663);
					break;
				
				case -368088972:
				case 1778247767:
					if (func_710(31774, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -368088972);
					break;
				
				case -1771053026:
				case -648092145:
					if (func_710(31775, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -1771053026);
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
					if (func_710(30533, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_030_M"));
					break;
				
				case joaat("MP_Heist4_Tee_032_M"):
				case joaat("MP_Heist4_Tee_032_F"):
					if (func_710(30534, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_032_M"));
					break;
				
				case joaat("MP_Heist4_Tee_028_M"):
				case joaat("MP_Heist4_Tee_028_F"):
					if (func_710(30535, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_028_M"));
					break;
				
				case joaat("MP_Heist4_Tee_029_M"):
				case joaat("MP_Heist4_Tee_029_F"):
					if (func_710(30536, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_029_M"));
					break;
				
				case joaat("MP_Heist4_Tee_031_M"):
				case joaat("MP_Heist4_Tee_031_F"):
					if (func_710(30537, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_031_M"));
					break;
				
				case joaat("MP_Heist4_Tee_022_M"):
				case joaat("MP_Heist4_Tee_022_F"):
					if (func_710(30538, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_022_M"));
					break;
				
				case joaat("MP_Heist4_Tee_023_M"):
				case joaat("MP_Heist4_Tee_023_F"):
					if (func_710(30539, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_023_M"));
					break;
				
				case joaat("MP_Heist4_Tee_020_M"):
				case joaat("MP_Heist4_Tee_020_F"):
					if (func_710(30540, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_020_M"));
					break;
				
				case joaat("MP_Heist4_Tee_021_M"):
				case joaat("MP_Heist4_Tee_021_F"):
					if (func_710(30541, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_021_M"));
					break;
				
				case joaat("MP_Heist4_Tee_003_M"):
				case joaat("MP_Heist4_Tee_003_F"):
					if (func_710(30542, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_003_M"));
					break;
				
				case joaat("MP_Heist4_Tee_004_M"):
				case joaat("MP_Heist4_Tee_004_F"):
					if (func_710(30543, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_004_M"));
					break;
				
				case joaat("MP_Heist4_Tee_005_M"):
				case joaat("MP_Heist4_Tee_005_F"):
					if (func_710(30544, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_005_M"));
					break;
				
				case joaat("MP_Heist4_Tee_006_M"):
				case joaat("MP_Heist4_Tee_006_F"):
					if (func_710(30545, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_006_M"));
					break;
				
				case joaat("MP_Heist4_Tee_027_M"):
				case joaat("MP_Heist4_Tee_027_F"):
					if (func_710(30546, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_027_M"));
					break;
				
				case joaat("MP_Heist4_Tee_026_M"):
				case joaat("MP_Heist4_Tee_026_F"):
					if (func_710(30547, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_026_M"));
					break;
				
				case joaat("MP_Heist4_Tee_025_M"):
				case joaat("MP_Heist4_Tee_025_F"):
					if (func_710(30548, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_025_M"));
					break;
				
				case joaat("MP_Heist4_Tee_024_M"):
				case joaat("MP_Heist4_Tee_024_F"):
					if (func_710(30549, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_024_M"));
					break;
				
				case joaat("MP_Heist4_Tee_002_M"):
				case joaat("MP_Heist4_Tee_002_F"):
					if (func_710(30550, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_002_M"));
					break;
				
				case joaat("MP_Heist4_Tee_001_M"):
				case joaat("MP_Heist4_Tee_001_F"):
					if (func_710(30551, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_001_M"));
					break;
				
				case joaat("MP_Heist4_Tee_000_M"):
				case joaat("MP_Heist4_Tee_000_F"):
					if (func_710(30552, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_000_M"));
					break;
				
				case joaat("MP_Heist4_Tee_007_M"):
				case joaat("MP_Heist4_Tee_007_F"):
					if (func_710(30553, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_007_M"));
					break;
				
				case joaat("MP_Heist4_Tee_008_M"):
				case joaat("MP_Heist4_Tee_008_F"):
					if (func_710(30554, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_008_M"));
					break;
				
				case joaat("MP_Heist4_Tee_009_M"):
				case joaat("MP_Heist4_Tee_009_F"):
					if (func_710(30555, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_009_M"));
					break;
				
				case joaat("MP_Heist4_Tee_010_M"):
				case joaat("MP_Heist4_Tee_010_F"):
					if (func_710(30556, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_010_M"));
					break;
				
				case joaat("MP_Heist4_Tee_011_M"):
				case joaat("MP_Heist4_Tee_011_F"):
					if (func_710(30557, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_011_M"));
					break;
				
				case joaat("MP_Heist4_Tee_012_M"):
				case joaat("MP_Heist4_Tee_012_F"):
					if (func_710(30524, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_012_M"));
					break;
				
				case joaat("MP_Heist4_Tee_013_M"):
				case joaat("MP_Heist4_Tee_013_F"):
					if (func_710(30525, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_013_M"));
					break;
				
				case joaat("MP_Heist4_Tee_014_M"):
				case joaat("MP_Heist4_Tee_014_F"):
					if (func_710(30526, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_014_M"));
					break;
				
				case joaat("MP_Heist4_Tee_015_M"):
				case joaat("MP_Heist4_Tee_015_F"):
					if (func_710(30527, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_015_M"));
					break;
				
				case joaat("MP_Heist4_Tee_016_M"):
				case joaat("MP_Heist4_Tee_016_F"):
					if (func_710(30528, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_016_M"));
					break;
				
				case joaat("MP_Heist4_Tee_017_M"):
				case joaat("MP_Heist4_Tee_017_F"):
					if (func_710(30529, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_017_M"));
					break;
				
				case joaat("MP_Heist4_Tee_018_M"):
				case joaat("MP_Heist4_Tee_018_F"):
					if (func_710(30530, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_018_M"));
					break;
				
				case joaat("MP_Heist4_Tee_019_M"):
				case joaat("MP_Heist4_Tee_019_F"):
					if (func_710(30531, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_019_M"));
					break;
				
				case joaat("MP_Heist4_Tee_033_M"):
				case joaat("MP_Heist4_Tee_033_F"):
					if (func_710(30532, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_033_M"));
					break;
				
				case joaat("MP_Heist4_Tee_045_M"):
				case joaat("MP_Heist4_Tee_045_F"):
					if (func_710(30570, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_045_M"));
					break;
				
				case joaat("MP_Heist4_Tee_046_M"):
				case joaat("MP_Heist4_Tee_046_F"):
					if (func_710(30571, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_046_M"));
					break;
				
				case joaat("MP_Heist4_Tee_048_M"):
				case joaat("MP_Heist4_Tee_048_F"):
					if (func_710(30568, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_048_M"));
					break;
				
				case joaat("MP_Heist4_Tee_047_M"):
				case joaat("MP_Heist4_Tee_047_F"):
					if (func_710(30569, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_047_M"));
					break;
				
				case joaat("MP_Heist4_Tee_049_M"):
				case joaat("MP_Heist4_Tee_049_F"):
					if (func_710(30634, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_049_M"));
					break;
				
				case joaat("MP_Heist4_Tee_051_M"):
				case joaat("MP_Heist4_Tee_051_F"):
					if (func_710(30635, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_051_M"));
					break;
				
				case joaat("MP_Heist4_Tee_053_M"):
				case joaat("MP_Heist4_Tee_053_F"):
					if (func_710(30636, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_053_M"));
					break;
				
				case joaat("MP_Heist4_Tee_054_M"):
				case joaat("MP_Heist4_Tee_054_F"):
					if (func_710(30637, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_054_M"));
					break;
				
				case joaat("MP_Heist4_Tee_055_M"):
				case joaat("MP_Heist4_Tee_055_F"):
					if (func_710(30703, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_055_M"));
					break;
				
				case joaat("MP_Heist4_Tee_057_M"):
				case joaat("MP_Heist4_Tee_057_F"):
					if (func_710(30704, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_057_M"));
					break;
				
				case joaat("MP_Heist4_Tee_059_M"):
				case joaat("MP_Heist4_Tee_059_F"):
					if (func_710(30700, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_059_M"));
					break;
				
				case joaat("MP_Heist4_Tee_061_M"):
				case joaat("MP_Heist4_Tee_061_F"):
					if (func_710(30701, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_061_M"));
					break;
				
				case joaat("MP_Heist4_Tee_063_M"):
				case joaat("MP_Heist4_Tee_063_F"):
					if (func_710(30702, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_063_M"));
					break;
				
				case joaat("MP_Heist4_Tee_065_M"):
				case joaat("MP_Heist4_Tee_065_F"):
					if (func_710(30699, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_065_M"));
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
					if (func_710(30260, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -1265443416);
					break;
				
				case 1888753218:
				case 272160153:
					if (func_710(30261, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 1888753218);
					break;
				
				case -552467991:
				case 1593344440:
					if (func_710(30262, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -552467991);
					break;
				
				case -1655919948:
				case 546222390:
					if (func_710(30263, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -1655919948);
					break;
				
				case -917106601:
				case 1983375900:
					if (func_710(30264, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -917106601);
					break;
				
				case 1595446967:
				case -620589387:
					if (func_710(30265, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 1595446967);
					break;
				
				case -530593323:
				case 383923929:
					if (func_710(30266, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -530593323);
					break;
				
				case 561619447:
				case -1703406594:
					if (func_710(30267, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 561619447);
					break;
				
				case -1913656173:
				case -398286533:
					if (func_710(30268, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -1913656173);
					break;
				
				case -1766901922:
				case -80478106:
					if (func_710(30269, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -1766901922);
					break;
				
				case 2091781849:
				case 1835331655:
					if (func_710(30270, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 2091781849);
					break;
				
				case 1824588341:
				case -1650596870:
					if (func_710(30271, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 1824588341);
					break;
				
				case 242597641:
				case 1231926496:
					if (func_710(30272, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 242597641);
					break;
				
				case 566785691:
				case -1506181253:
					if (func_710(30273, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 566785691);
					break;
				
				case -2091312957:
				case -1737145605:
					if (func_710(30274, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -2091312957);
					break;
				
				case -2079214831:
				case 1673851512:
					if (func_710(30275, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -2079214831);
					break;
				
				case 1359156274:
				case 1023339598:
					if (func_710(30276, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 1359156274);
					break;
				
				case 1904247246:
				case -163738770:
					if (func_710(30277, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 1904247246);
					break;
				
				case -1351518396:
				case 1863218823:
					if (func_710(30278, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -1351518396);
					break;
				
				case -797874817:
				case 333966447:
					if (func_710(30279, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -797874817);
					break;
				
				case -385507297:
				case 1412626052:
					if (func_710(30280, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -385507297);
					break;
				
				case 2011910758:
				case -39100956:
					if (func_710(30281, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 2011910758);
					break;
				
				case -1953985443:
				case 1631533003:
					if (func_710(30282, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -1953985443);
					break;
				
				case -1124222352:
				case 1493430918:
					if (func_710(30283, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -1124222352);
					break;
				
				case -1806994767:
				case -196693334:
					if (func_710(30284, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -1806994767);
					break;
				
				case -1445761968:
				case 553507495:
					if (func_710(30285, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -1445761968);
					break;
				
				case -89186417:
				case 2003474700:
					if (func_710(30286, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -89186417);
					break;
				
				case -308083083:
				case 1121792228:
					if (func_710(30287, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -308083083);
					break;
				
				case 667714507:
				case -1424651669:
					if (func_710(30288, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 667714507);
					break;
				
				case -1610210252:
				case -1454164346:
					if (func_710(30289, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -1610210252);
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
					if (func_710(28255, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -417116499);
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
					if (func_703(89, -1) || func_710(30254, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 1246110729);
					break;
				
				case 461575135:
				case 1250161120:
					if (func_703(90, -1) || func_710(30255, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == 461575135);
					break;
				
				case -386163163:
				case 1288201657:
					if (func_703(92, -1) || func_710(30256, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -386163163);
					break;
				
				case -1414541879:
				case 111412152:
					if ((((func_703(89, -1) && func_703(90, -1)) && func_703(92, -1)) && func_703(91, -1)) || func_710(30257, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == -1414541879);
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
					if (func_703(78, -1) || func_710(28199, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_001_M"));
					break;
				
				case joaat("mpHeist3_Tee_000_F"):
				case joaat("mpHeist3_Tee_000_M"):
					if (((func_703(77, -1) && func_703(78, -1)) && func_705(92, -1) >= func_704(92, 5, 9)) || func_710(28200, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_000_M"));
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
					if (((func_705(93, -1) >= func_704(93, 5, 9) && func_703(79, -1)) && func_703(80, -1)) || func_710(28204, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, ((iParam1 == joaat("mpHeist3_Tee_007_M") || iParam1 == joaat("mpHeist3_Tee_008_M")) || iParam1 == joaat("mpHeist3_Tee_009_M")));
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
					if (func_703(81, -1) || func_710(28206, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_004_M"));
					break;
				
				case joaat("mpHeist3_Tee_005_F"):
				case joaat("mpHeist3_Tee_005_M"):
					if (func_705(94, -1) >= func_704(94, 5, 9) || func_710(28207, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_005_M"));
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
					if (((func_703(84, -1) && func_703(85, -1)) && func_705(97, -1) >= func_704(97, 5, 9)) || func_710(28212, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_006_M"));
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
					if (func_710(28249, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_002_M"));
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
					if (func_710(28183, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_013_M"));
					break;
				
				case joaat("mpHeist3_Tee_014_F"):
				case joaat("mpHeist3_Tee_014_M"):
					if (func_710(28182, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_014_M"));
					break;
				
				case joaat("mpHeist3_Tee_015_F"):
				case joaat("mpHeist3_Tee_015_M"):
					if (func_710(28184, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_015_M"));
					break;
				
				case joaat("mpHeist3_Tee_016_F"):
				case joaat("mpHeist3_Tee_016_M"):
					if (func_710(28181, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_016_M"));
					break;
				
				case joaat("mpHeist3_Tee_017_F"):
				case joaat("mpHeist3_Tee_017_M"):
					if (func_710(28178, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_017_M"));
					break;
				
				case joaat("mpHeist3_Tee_018_F"):
				case joaat("mpHeist3_Tee_018_M"):
					if (func_710(28177, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_018_M"));
					break;
				
				case joaat("mpHeist3_Tee_019_F"):
				case joaat("mpHeist3_Tee_019_M"):
					if (func_710(28176, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_019_M"));
					break;
				
				case joaat("mpHeist3_Tee_020_F"):
				case joaat("mpHeist3_Tee_020_M"):
					if (func_710(28180, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_020_M"));
					break;
				
				case joaat("mpHeist3_Tee_021_F"):
				case joaat("mpHeist3_Tee_021_M"):
					if (func_710(28179, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_021_M"));
					break;
				
				case joaat("mpHeist3_Tee_022_F"):
				case joaat("mpHeist3_Tee_022_M"):
					if (((((((((func_710(28176, -1) && func_710(28177, -1)) && func_710(28178, -1)) && func_710(28179, -1)) && func_710(28180, -1)) && func_710(28181, -1)) && func_710(28182, -1)) && func_710(28183, -1)) && func_710(28184, -1)) || func_710(28221, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_022_M"));
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
					if (func_710(28191, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_023_M"));
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
					if (func_710(28190, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_011_M"));
					break;
				
				case joaat("mpHeist3_Tee_012_F"):
				case joaat("mpHeist3_Tee_012_M"):
					if (func_710(28189, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_012_M"));
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
					if (func_700(0, 1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_003_M"));
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
					if ((((((((((((((((((func_703(77, -1) && func_703(78, -1)) && func_705(92, -1) >= func_704(92, 5, 9)) && func_705(93, -1) >= func_704(93, 5, 9)) && func_703(79, -1)) && func_703(80, -1)) && func_703(81, -1)) && func_705(94, -1) >= func_704(94, 5, 9)) && func_705(95, -1) >= func_704(95, 5, 9)) && func_703(82, -1)) && func_703(83, -1)) && func_705(96, -1) >= func_704(96, 5, 9)) && func_703(84, -1)) && func_703(85, -1)) && func_705(97, -1) >= func_704(97, 5, 9)) && func_703(86, -1)) && func_703(87, -1)) && func_703(88, -1)) || func_710(28222, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_010_M"));
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
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_023_M"));
					break;
				
				case joaat("MP_Vinewood_Tat_030_M"):
				case joaat("MP_Vinewood_Tat_030_F"):
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_030_M"));
					break;
				
				case joaat("CasinoTop_M_21"):
				case joaat("CasinoTop_F_21"):
					if (func_710(27109, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_21"));
					break;
				
				case joaat("CasinoTop_M_23"):
				case joaat("CasinoTop_F_23"):
					if (func_710(27110, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_23"));
					break;
				
				case joaat("CasinoTop_M_2"):
				case joaat("CasinoTop_F_2"):
					if (func_710(27111, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_2"));
					break;
				
				case joaat("CasinoTop_M_4"):
				case joaat("CasinoTop_F_4"):
					if (func_710(27112, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_4"));
					break;
				
				case joaat("CasinoTop_M_6"):
				case joaat("CasinoTop_F_6"):
					if (func_710(27113, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_6"));
					break;
				
				case joaat("CasinoTop_M_10"):
				case joaat("CasinoTop_F_10"):
					if (func_710(27114, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_10"));
					break;
				
				case joaat("CasinoTop_M_22"):
				case joaat("CasinoTop_F_22"):
					if (func_710(27115, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_22"));
					break;
			}
			break;
		
		case joaat("mpChristmas2018_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Christmas2018_Tee_000_M"):
				case joaat("MP_Christmas2018_Tee_000_F"):
					if (func_710(25032, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_000_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_001_M"):
				case joaat("MP_Christmas2018_Tee_001_F"):
					if (func_710(25033, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_001_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_002_M"):
				case joaat("MP_Christmas2018_Tee_002_F"):
					if (func_710(25034, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_002_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_003_M"):
				case joaat("MP_Christmas2018_Tee_003_F"):
					if (func_710(25035, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_003_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_004_M"):
				case joaat("MP_Christmas2018_Tee_004_F"):
					if (func_710(25036, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_004_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_005_M"):
				case joaat("MP_Christmas2018_Tee_005_F"):
					if (func_710(25037, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_005_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_006_M"):
				case joaat("MP_Christmas2018_Tee_006_F"):
					if (func_710(25038, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_006_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_007_M"):
				case joaat("MP_Christmas2018_Tee_007_F"):
					if (func_710(25039, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_007_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_008_M"):
				case joaat("MP_Christmas2018_Tee_008_F"):
					if (func_710(25040, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_008_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_009_M"):
				case joaat("MP_Christmas2018_Tee_009_F"):
					if (func_710(25041, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_009_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_010_M"):
				case joaat("MP_Christmas2018_Tee_010_F"):
					if (func_710(25042, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_010_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_011_M"):
				case joaat("MP_Christmas2018_Tee_011_F"):
					if (func_710(25043, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_011_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_012_M"):
				case joaat("MP_Christmas2018_Tee_012_F"):
					if (func_710(25044, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_012_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_013_M"):
				case joaat("MP_Christmas2018_Tee_013_F"):
					if (func_710(25045, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_013_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_014_M"):
				case joaat("MP_Christmas2018_Tee_014_F"):
					if (func_710(25046, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_014_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_015_M"):
				case joaat("MP_Christmas2018_Tee_015_F"):
					if (func_710(25047, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_015_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_016_M"):
				case joaat("MP_Christmas2018_Tee_016_F"):
					if (func_710(25048, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_016_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_017_M"):
				case joaat("MP_Christmas2018_Tee_017_F"):
					if (func_710(25049, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_017_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_018_M"):
				case joaat("MP_Christmas2018_Tee_018_F"):
					if (func_710(25050, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_018_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_019_M"):
				case joaat("MP_Christmas2018_Tee_019_F"):
					if (func_710(25051, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_019_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_020_M"):
				case joaat("MP_Christmas2018_Tee_020_F"):
					if (func_710(25052, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_020_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_021_M"):
				case joaat("MP_Christmas2018_Tee_021_F"):
					if (func_710(25053, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_021_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_022_M"):
				case joaat("MP_Christmas2018_Tee_022_F"):
					if (func_710(25054, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_022_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_023_M"):
				case joaat("MP_Christmas2018_Tee_023_F"):
					if (func_710(25055, -1))
					{
						return 0;
					}
					if (func_710(27077, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_023_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_024_M"):
				case joaat("MP_Christmas2018_Tee_024_F"):
					if (func_710(25056, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_024_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_025_M"):
				case joaat("MP_Christmas2018_Tee_025_F"):
					if (func_710(25057, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_025_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_026_M"):
				case joaat("MP_Christmas2018_Tee_026_F"):
					if (func_710(25058, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_026_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_027_M"):
				case joaat("MP_Christmas2018_Tee_027_F"):
					if (func_710(25059, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_027_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_028_M"):
				case joaat("MP_Christmas2018_Tee_028_F"):
					if (func_710(25060, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_028_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_029_M"):
				case joaat("MP_Christmas2018_Tee_029_F"):
					if (func_710(25061, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_029_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_030_M"):
				case joaat("MP_Christmas2018_Tee_030_F"):
					if (func_710(25062, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_030_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_031_M"):
				case joaat("MP_Christmas2018_Tee_031_F"):
					if (func_710(25063, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_031_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_032_M"):
				case joaat("MP_Christmas2018_Tee_032_F"):
					if (func_710(25064, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_032_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_033_M"):
				case joaat("MP_Christmas2018_Tee_033_F"):
					if (func_710(25065, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_033_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_034_M"):
				case joaat("MP_Christmas2018_Tee_034_F"):
					if (func_710(25066, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_034_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_035_M"):
				case joaat("MP_Christmas2018_Tee_035_F"):
					if (func_710(25067, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_035_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_036_M"):
				case joaat("MP_Christmas2018_Tee_036_F"):
					if (func_710(25068, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_036_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_037_M"):
				case joaat("MP_Christmas2018_Tee_037_F"):
					if (func_710(25069, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_037_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_038_M"):
				case joaat("MP_Christmas2018_Tee_038_F"):
					if (func_710(25070, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_038_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_039_M"):
				case joaat("MP_Christmas2018_Tee_039_F"):
					if (func_710(25071, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_039_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_040_M"):
				case joaat("MP_Christmas2018_Tee_040_F"):
					if (func_710(25072, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_040_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_041_M"):
				case joaat("MP_Christmas2018_Tee_041_F"):
					if (func_710(25073, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_041_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_042_M"):
				case joaat("MP_Christmas2018_Tee_042_F"):
					if (func_710(25074, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_042_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_043_M"):
				case joaat("MP_Christmas2018_Tee_043_F"):
					if (func_710(25075, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_043_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_044_M"):
				case joaat("MP_Christmas2018_Tee_044_F"):
					if (func_710(25076, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_044_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_045_M"):
				case joaat("MP_Christmas2018_Tee_045_F"):
					if (func_710(25077, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_045_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_046_M"):
				case joaat("MP_Christmas2018_Tee_046_F"):
					if (func_710(25078, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_046_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_047_M"):
				case joaat("MP_Christmas2018_Tee_047_F"):
					if (func_710(25079, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_047_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_048_M"):
				case joaat("MP_Christmas2018_Tee_048_F"):
					if (func_710(25080, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_048_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_049_M"):
				case joaat("MP_Christmas2018_Tee_049_F"):
					if (func_710(25081, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_049_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_050_M"):
				case joaat("MP_Christmas2018_Tee_050_F"):
					if (func_710(25082, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_050_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_051_M"):
				case joaat("MP_Christmas2018_Tee_051_F"):
					if (func_710(25083, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_051_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_052_M"):
				case joaat("MP_Christmas2018_Tee_052_F"):
					if (func_710(25084, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_052_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_053_M"):
				case joaat("MP_Christmas2018_Tee_053_F"):
					if (func_710(25085, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_053_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_054_M"):
				case joaat("MP_Christmas2018_Tee_054_F"):
					if (func_710(25086, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_054_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_055_M"):
				case joaat("MP_Christmas2018_Tee_055_F"):
					if (func_710(25087, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_055_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_056_M"):
				case joaat("MP_Christmas2018_Tee_056_F"):
					if (func_710(25088, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_056_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_057_M"):
				case joaat("MP_Christmas2018_Tee_057_F"):
					if (func_710(25089, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_057_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_058_M"):
				case joaat("MP_Christmas2018_Tee_058_F"):
					if (func_710(25090, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_058_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_059_M"):
				case joaat("MP_Christmas2018_Tee_059_F"):
					if (func_710(25091, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_059_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_060_M"):
				case joaat("MP_Christmas2018_Tee_060_F"):
					if (func_710(25092, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_060_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_061_M"):
				case joaat("MP_Christmas2018_Tee_061_F"):
					if (func_710(25093, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_061_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_062_M"):
				case joaat("MP_Christmas2018_Tee_062_F"):
					if (func_710(25094, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_062_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_063_M"):
				case joaat("MP_Christmas2018_Tee_063_F"):
					if (func_710(25095, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_063_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_064_M"):
				case joaat("MP_Christmas2018_Tee_064_F"):
					if (func_710(25096, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_064_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_065_M"):
				case joaat("MP_Christmas2018_Tee_065_F"):
					if (func_710(25097, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_065_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_066_M"):
				case joaat("MP_Christmas2018_Tee_066_F"):
					if (func_710(25098, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_066_M"));
					break;
				
				case joaat("MP_Christmas2018_Tee_067_M"):
				case joaat("MP_Christmas2018_Tee_067_F"):
					if (func_710(25099, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_067_M"));
					break;
				
				case joaat("MP_Christmas2018_Tat_000_M"):
				case joaat("MP_Christmas2018_Tat_000_F"):
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tat_000_M"));
					break;
			}
			break;
		
		case joaat("mpBattle_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_000_M"):
				case joaat("MP_Battle_Clothing_000_F"):
					if (func_710(22108, -1) || func_710(25006, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_000_M"));
					break;
				
				case joaat("MP_Battle_Clothing_002_M"):
				case joaat("MP_Battle_Clothing_002_F"):
					if (func_710(9481, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_002_M"));
					break;
				
				case joaat("MP_Battle_Clothing_003_M"):
				case joaat("MP_Battle_Clothing_003_F"):
					if (func_710(9470, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_003_M"));
					break;
				
				case joaat("MP_Battle_Clothing_004_M"):
				case joaat("MP_Battle_Clothing_004_F"):
					if (func_710(9475, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_004_M"));
					break;
				
				case joaat("MP_Battle_Clothing_005_M"):
				case joaat("MP_Battle_Clothing_005_F"):
					if (func_710(9472, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_005_M"));
					break;
				
				case joaat("MP_Battle_Clothing_006_M"):
				case joaat("MP_Battle_Clothing_006_F"):
					if (func_710(9465, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_006_M"));
					break;
				
				case joaat("MP_Battle_Clothing_007_M"):
				case joaat("MP_Battle_Clothing_007_F"):
					if (func_710(9463, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_007_M"));
					break;
				
				case joaat("MP_Battle_Clothing_008_M"):
				case joaat("MP_Battle_Clothing_008_F"):
					if (func_710(9464, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_008_M"));
					break;
				
				case joaat("MP_Battle_Clothing_009_M"):
				case joaat("MP_Battle_Clothing_009_F"):
					if (func_710(9468, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_009_M"));
					break;
				
				case joaat("MP_Battle_Clothing_010_M"):
				case joaat("MP_Battle_Clothing_010_F"):
					if (func_710(9469, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_010_M"));
					break;
				
				case joaat("MP_Battle_Clothing_011_M"):
				case joaat("MP_Battle_Clothing_011_F"):
					if (func_710(9479, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_011_M"));
					break;
				
				case joaat("MP_Battle_Clothing_012_M"):
				case joaat("MP_Battle_Clothing_012_F"):
					if (func_710(9473, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_012_M"));
					break;
				
				case joaat("MP_Battle_Clothing_013_M"):
				case joaat("MP_Battle_Clothing_013_F"):
					if (func_710(9480, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_013_M"));
					break;
				
				case joaat("MP_Battle_Clothing_014_M"):
				case joaat("MP_Battle_Clothing_014_F"):
					if (func_710(9476, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_014_M"));
					break;
				
				case joaat("MP_Battle_Clothing_015_M"):
				case joaat("MP_Battle_Clothing_015_F"):
					if (func_710(9477, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_015_M"));
					break;
				
				case joaat("MP_Battle_Clothing_016_M"):
				case joaat("MP_Battle_Clothing_016_F"):
					if (func_710(9471, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_016_M"));
					break;
				
				case joaat("MP_Battle_Clothing_017_M"):
				case joaat("MP_Battle_Clothing_017_F"):
					if (func_710(9474, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_017_M"));
					break;
				
				case joaat("MP_Battle_Clothing_018_M"):
				case joaat("MP_Battle_Clothing_018_F"):
					if (func_710(9467, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_018_M"));
					break;
				
				case joaat("MP_Battle_Clothing_019_M"):
				case joaat("MP_Battle_Clothing_019_F"):
					if (func_710(9478, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_019_M"));
					break;
				
				case joaat("MP_Battle_Clothing_020_M"):
				case joaat("MP_Battle_Clothing_020_F"):
					if (func_710(9462, -1))
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Battle_Clothing_020_M"))
					{
						if (func_710(27085, -1))
						{
							return 0;
						}
					}
					else if (func_710(27084, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_020_M"));
					break;
				
				case joaat("MP_Battle_Clothing_021_M"):
				case joaat("MP_Battle_Clothing_021_F"):
					if (func_710(9466, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_021_M"));
					break;
				
				case joaat("MP_Battle_Clothing_022_M"):
				case joaat("MP_Battle_Clothing_022_F"):
					if (func_710(22126, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_022_M"));
					break;
				
				case joaat("MP_Battle_Clothing_023_M"):
				case joaat("MP_Battle_Clothing_023_F"):
					if (func_710(22127, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_023_M"));
					break;
				
				case joaat("MP_Battle_Clothing_024_M"):
				case joaat("MP_Battle_Clothing_024_F"):
					if (func_710(22128, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_024_M"));
					break;
				
				case joaat("MP_Battle_Clothing_025_M"):
				case joaat("MP_Battle_Clothing_025_F"):
					if (func_710(22124, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_025_M"));
					break;
				
				case joaat("MP_Battle_Clothing_026_M"):
				case joaat("MP_Battle_Clothing_026_F"):
					if (func_710(22130, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_026_M"));
					break;
				
				case joaat("MP_Battle_Clothing_027_M"):
				case joaat("MP_Battle_Clothing_027_F"):
					if (func_710(22125, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_027_M"));
					break;
				
				case joaat("MP_Battle_Clothing_028_M"):
				case joaat("MP_Battle_Clothing_028_F"):
					if (func_710(22129, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_028_M"));
					break;
				
				case joaat("MP_Battle_Clothing_029_M"):
				case joaat("MP_Battle_Clothing_029_F"):
					if (func_710(22131, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_029_M"));
					break;
				
				case joaat("MP_Battle_Clothing_030_M"):
				case joaat("MP_Battle_Clothing_030_F"):
					if (func_710(22132, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_030_M"));
					break;
			}
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_031_M"):
				case joaat("MP_Battle_Clothing_031_F"):
					if (func_710(22147, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_031_M"));
					break;
				
				case joaat("MP_Battle_Clothing_032_M"):
				case joaat("MP_Battle_Clothing_032_F"):
					if (func_710(22148, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_032_M"));
					break;
				
				case joaat("MP_Battle_Clothing_033_M"):
				case joaat("MP_Battle_Clothing_033_F"):
					if (func_710(22149, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_033_M"));
					break;
				
				case joaat("MP_Battle_Clothing_034_M"):
				case joaat("MP_Battle_Clothing_034_F"):
					if (func_710(22150, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_034_M"));
					break;
				
				case joaat("MP_Battle_Clothing_035_M"):
				case joaat("MP_Battle_Clothing_035_F"):
					if (func_710(22151, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_035_M"));
					break;
				
				case joaat("MP_Battle_Clothing_036_M"):
				case joaat("MP_Battle_Clothing_036_F"):
					if (func_710(22152, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_036_M"));
					break;
				
				case joaat("MP_Battle_Clothing_037_M"):
				case joaat("MP_Battle_Clothing_037_F"):
					if (func_710(22153, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_037_M"));
					break;
				
				case joaat("MP_Battle_Clothing_038_M"):
				case joaat("MP_Battle_Clothing_038_F"):
					if (func_710(22154, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_038_M"));
					break;
				
				case joaat("MP_Battle_Clothing_039_M"):
				case joaat("MP_Battle_Clothing_039_F"):
					if (func_710(22155, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_039_M"));
					break;
				
				case joaat("MP_Battle_Clothing_040_M"):
				case joaat("MP_Battle_Clothing_040_F"):
					if (func_710(22156, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_040_M"));
					break;
				
				case joaat("MP_Battle_Clothing_041_M"):
				case joaat("MP_Battle_Clothing_041_F"):
					if (func_710(22157, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_041_M"));
					break;
				
				case joaat("MP_Battle_Clothing_042_M"):
				case joaat("MP_Battle_Clothing_042_F"):
					if (func_710(22158, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_042_M"));
					break;
				
				case joaat("MP_Battle_Clothing_043_M"):
				case joaat("MP_Battle_Clothing_043_F"):
					if (func_710(22159, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_043_M"));
					break;
				
				case joaat("MP_Battle_Clothing_044_M"):
				case joaat("MP_Battle_Clothing_044_F"):
					if (func_710(22160, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_044_M"));
					break;
				
				case joaat("MP_Battle_Clothing_045_M"):
				case joaat("MP_Battle_Clothing_045_F"):
					if (func_710(22161, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_045_M"));
					break;
				
				case joaat("MP_Battle_Clothing_046_M"):
				case joaat("MP_Battle_Clothing_046_F"):
					if (func_710(22162, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_046_M"));
					break;
				
				case joaat("MP_Battle_Clothing_047_M"):
				case joaat("MP_Battle_Clothing_047_F"):
					if (func_710(22163, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_047_M"));
					break;
				
				case joaat("MP_Battle_Clothing_048_M"):
				case joaat("MP_Battle_Clothing_048_F"):
					if (func_710(22164, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_048_M"));
					break;
				
				case joaat("MP_Battle_Clothing_049_M"):
				case joaat("MP_Battle_Clothing_049_F"):
					if (func_710(22165, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_049_M"));
					break;
				
				case joaat("MP_Battle_Clothing_050_M"):
				case joaat("MP_Battle_Clothing_050_F"):
					if (func_710(22166, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_050_M"));
					break;
				
				case joaat("MP_Battle_Clothing_051_M"):
				case joaat("MP_Battle_Clothing_051_F"):
					if (func_710(22167, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_051_M"));
					break;
				
				case joaat("MP_Battle_Clothing_052_M"):
				case joaat("MP_Battle_Clothing_052_F"):
					if (func_710(22168, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_052_M"));
					break;
				
				case joaat("MP_Battle_Clothing_053_M"):
				case joaat("MP_Battle_Clothing_053_F"):
					if (func_710(22169, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_053_M"));
					break;
				
				case joaat("MP_Battle_Clothing_054_M"):
				case joaat("MP_Battle_Clothing_054_F"):
					if (func_710(22170, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_054_M"));
					break;
				
				case joaat("MP_Battle_Clothing_055_M"):
				case joaat("MP_Battle_Clothing_055_F"):
					if (func_710(22171, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_055_M"));
					break;
				
				case joaat("MP_Battle_Clothing_056_M"):
				case joaat("MP_Battle_Clothing_056_F"):
					if (func_710(22172, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_056_M"));
					break;
				
				case joaat("MP_Battle_Clothing_057_M"):
				case joaat("MP_Battle_Clothing_057_F"):
					if (func_710(22173, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_057_M"));
					break;
				
				case joaat("MP_Battle_Clothing_058_M"):
				case joaat("MP_Battle_Clothing_058_F"):
					if (func_710(22174, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_058_M"));
					break;
				
				case joaat("MP_Battle_Clothing_059_M"):
				case joaat("MP_Battle_Clothing_059_F"):
					if (func_710(22175, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_059_M"));
					break;
				
				case joaat("MP_Battle_Clothing_060_M"):
				case joaat("MP_Battle_Clothing_060_F"):
					if (func_710(22176, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_060_M"));
					break;
				
				case joaat("MP_Battle_Clothing_061_M"):
				case joaat("MP_Battle_Clothing_061_F"):
					if (func_710(22177, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_061_M"));
					break;
				
				case joaat("MP_Battle_Clothing_062_M"):
				case joaat("MP_Battle_Clothing_062_F"):
					if (func_710(22178, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_062_M"));
					break;
			}
			break;
		
		case joaat("mpGunrunning_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_019_M"):
				case joaat("MP_Gunrunning_Award_025_F"):
					if (func_710(15426, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_019_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_020_M"):
				case joaat("MP_Gunrunning_Award_020_F"):
					if (func_710(15422, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_020_M_ALT"):
				case joaat("MP_Gunrunning_Award_020_F_ALT"):
					if (func_710(15423, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M_ALT"));
					break;
				
				case joaat("MP_Gunrunning_Award_021_M"):
				case joaat("MP_Gunrunning_Award_021_F"):
					if (func_710(15421, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_021_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_022_M"):
				case joaat("MP_Gunrunning_Award_026_F"):
					if (func_710(15427, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_022_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_023_M"):
				case joaat("MP_Gunrunning_Award_023_F"):
					if (func_710(15419, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_023_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_024_M"):
				case joaat("MP_Gunrunning_Award_024_F"):
					if (func_710(15420, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_024_M"));
					break;
			}
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_000_M"):
				case joaat("MP_Gunrunning_Award_000_F"):
					if (func_710(15394, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_000_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_001_M"):
				case joaat("MP_Gunrunning_Award_001_F"):
					if (func_840(209, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_001_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_002_M"):
				case joaat("MP_Gunrunning_Award_002_F"):
					if (func_710(15406, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_002_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_003_M"):
				case joaat("MP_Gunrunning_Award_003_F"):
					if (func_710(15395, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_003_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_004_M"):
				case joaat("MP_Gunrunning_Award_004_F"):
					if (func_840(209, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_004_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_005_M"):
				case joaat("MP_Gunrunning_Award_005_F"):
					if (func_710(15410, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_005_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_006_M"):
				case joaat("MP_Gunrunning_Award_006_F"):
					if (func_710(15407, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_006_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_007_M"):
				case joaat("MP_Gunrunning_Award_007_F"):
					if (func_840(209, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_007_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_008_M"):
				case joaat("MP_Gunrunning_Award_008_F"):
					if (func_840(209, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_008_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_009_M"):
				case joaat("MP_Gunrunning_Award_009_F"):
					if (func_710(15414, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_009_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_010_M"):
				case joaat("MP_Gunrunning_Award_010_F"):
					if (func_710(15415, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_010_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_011_M"):
				case joaat("MP_Gunrunning_Award_011_F"):
					if (func_710(15399, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_011_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_012_M"):
				case joaat("MP_Gunrunning_Award_012_F"):
					if (func_710(15404, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_012_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_013_M"):
				case joaat("MP_Gunrunning_Award_013_F"):
					if (func_840(209, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_013_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_014_M"):
				case joaat("MP_Gunrunning_Award_014_F"):
					if (func_710(15392, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_014_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_015_M"):
				case joaat("MP_Gunrunning_Award_015_F"):
					if (func_710(15390, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_015_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_016_M"):
				case joaat("MP_Gunrunning_Award_016_F"):
					if (func_710(15402, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_016_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_017_M"):
				case joaat("MP_Gunrunning_Award_017_F"):
					if (func_710(15416, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_017_M"));
					break;
				
				case joaat("MP_Gunrunning_Award_018_M"):
				case joaat("MP_Gunrunning_Award_018_F"):
					if (func_840(209, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_018_M"));
					break;
			}
			break;
		
		case joaat("mpBiker_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Biker_Tee_022_M"):
				case joaat("MP_Biker_Tee_022_F"):
					if (func_710(9366, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_022_M"));
					break;
				
				case joaat("MP_Biker_Tee_023_M"):
				case joaat("MP_Biker_Tee_023_F"):
					if (func_710(9367, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_023_M"));
					break;
				
				case joaat("MP_Biker_Tee_024_M"):
				case joaat("MP_Biker_Tee_024_F"):
					if (func_710(9369, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_024_M"));
					break;
				
				case joaat("MP_Biker_Tee_025_M"):
				case joaat("MP_Biker_Tee_025_F"):
					if (func_710(9368, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_025_M"));
					break;
				
				case joaat("MP_Biker_Tee_047_M"):
				case joaat("MP_Biker_Tee_047_F"):
					if (func_710(9365, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_047_M"));
					break;
				
				case joaat("MP_Biker_Tee_048_M"):
				case joaat("MP_Biker_Tee_048_F"):
					if (func_710(9364, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_048_M"));
					break;
				
				case joaat("MP_Biker_Tee_049_M"):
				case joaat("MP_Biker_Tee_049_F"):
					if (func_710(27078, -1))
					{
						return 0;
					}
					if (func_710(9363, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_049_M"));
					break;
				
				case joaat("MP_Biker_Tee_050_M"):
				case joaat("MP_Biker_Tee_050_F"):
					if (func_710(9362, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_050_M"));
					break;
				
				case joaat("MP_Biker_Tee_051_M"):
				case joaat("MP_Biker_Tee_051_F"):
					if (func_710(9370, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_051_M"));
					break;
				
				case joaat("MP_Biker_Tee_052_M"):
				case joaat("MP_Biker_Tee_052_F"):
					if (func_710(9371, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_052_M"));
					break;
				
				case joaat("MP_Biker_Tee_053_M"):
				case joaat("MP_Biker_Tee_053_F"):
					if (func_710(9372, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_053_M"));
					break;
				
				case joaat("MP_Biker_Tee_054_M"):
				case joaat("MP_Biker_Tee_054_F"):
					if (func_710(9373, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_054_M"));
					break;
				
				case joaat("MP_Biker_Tee_055_M"):
				case joaat("MP_Biker_Tee_055_F"):
					if (func_710(9374, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_055_M"));
					break;
				
				case joaat("MP_Biker_Award_000_M"):
				case joaat("MP_Biker_Award_000_F"):
					if (func_710(9384, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_000_M"));
					break;
				
				case joaat("MP_Biker_Award_001_M"):
				case joaat("MP_Biker_Award_001_F"):
					if (func_710(9385, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_001_M"));
					break;
			}
			break;
		
		case joaat("mpExecutive_overlays"):
			switch (iParam1)
			{
				case joaat("MP_exec_prizes_015_M"):
				case joaat("MP_exec_prizes_015_F"):
					if (func_710(7551, -1) || func_437(3792, -1, 0) >= Global_262145.f_16768)
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_015_M"));
					break;
				
				case joaat("MP_exec_prizes_000_M"):
				case joaat("MP_exec_prizes_000_F"):
					if (func_710(7467, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_000_M"));
					break;
				
				case joaat("MP_exec_prizes_001_M"):
				case joaat("MP_exec_prizes_001_F"):
					if (func_710(7468, -1))
					{
						return 0;
					}
					if (iParam1 == joaat("MP_exec_prizes_001_M"))
					{
						if (func_710(27083, -1))
						{
							return 0;
						}
					}
					else if (func_710(27086, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_001_M"));
					break;
				
				case joaat("MP_exec_prizes_002_M"):
				case joaat("MP_exec_prizes_002_F"):
					if (func_710(7469, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_002_M"));
					break;
				
				case joaat("MP_exec_prizes_003_M"):
				case joaat("MP_exec_prizes_003_F"):
					if (func_710(7470, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_003_M"));
					break;
				
				case joaat("MP_exec_prizes_004_M"):
				case joaat("MP_exec_prizes_004_F"):
					if (func_710(7471, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_004_M"));
					break;
				
				case joaat("MP_exec_prizes_005_M"):
				case joaat("MP_exec_prizes_005_F"):
					if (func_710(7472, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_005_M"));
					break;
				
				case joaat("MP_exec_prizes_006_M"):
				case joaat("MP_exec_prizes_006_F"):
					if (func_710(7473, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_006_M"));
					break;
				
				case joaat("MP_exec_prizes_007_M"):
				case joaat("MP_exec_prizes_007_F"):
					if (func_710(7474, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_007_M"));
					break;
				
				case joaat("MP_exec_prizes_008_M"):
				case joaat("MP_exec_prizes_008_F"):
					if (func_710(7475, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_008_M"));
					break;
				
				case joaat("MP_exec_prizes_009_M"):
				case joaat("MP_exec_prizes_009_F"):
					if (func_710(7476, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_009_M"));
					break;
				
				case joaat("MP_exec_prizes_010_M"):
				case joaat("MP_exec_prizes_010_F"):
					if (func_710(7477, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_010_M"));
					break;
				
				case joaat("MP_exec_prizes_011_M"):
				case joaat("MP_exec_prizes_011_F"):
					if (func_710(7478, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_011_M"));
					break;
				
				case joaat("MP_exec_prizes_012_M"):
				case joaat("MP_exec_prizes_012_F"):
					if (func_710(7479, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_012_M"));
					break;
				
				case joaat("MP_exec_prizes_013_M"):
				case joaat("MP_exec_prizes_013_F"):
					if (func_710(7480, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_013_M"));
					break;
				
				case joaat("MP_exec_prizes_014_M"):
				case joaat("MP_exec_prizes_014_F"):
					if (func_710(7481, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_014_M"));
					break;
			}
			break;
		
		case joaat("mpHalloween_overlays"):
			switch (iParam1)
			{
				case joaat("HW_Tee_000_F"):
				case joaat("HW_Tee_000_M"):
					if (func_710(4260, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("HW_Tee_000_M"));
					break;
				
				case joaat("HW_Tee_001_F"):
				case joaat("HW_Tee_001_M"):
					if (func_710(4257, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("HW_Tee_001_M"));
					break;
				
				case joaat("HW_Tee_002_F"):
				case joaat("HW_Tee_002_M"):
					if (func_710(4269, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("HW_Tee_002_M"));
					break;
				
				case joaat("HW_Tee_003_F"):
				case joaat("HW_Tee_003_M"):
					if (func_710(4261, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("HW_Tee_003_M"));
					break;
				
				case joaat("HW_Tee_004_F"):
				case joaat("HW_Tee_004_M"):
					if (func_710(4259, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("HW_Tee_004_M"));
					break;
				
				case joaat("HW_Tee_005_F"):
				case joaat("HW_Tee_005_M"):
					if (func_710(4268, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("HW_Tee_005_M"));
					break;
				
				case joaat("HW_Tee_006_F"):
				case joaat("HW_Tee_006_M"):
					if (func_710(4265, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("HW_Tee_006_M"));
					break;
				
				case joaat("HW_Tee_007_F"):
				case joaat("HW_Tee_007_M"):
					if (func_710(4258, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("HW_Tee_007_M"));
					break;
				
				case joaat("HW_Tee_008_F"):
				case joaat("HW_Tee_008_M"):
					if (func_710(4264, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("HW_Tee_008_M"));
					break;
				
				case joaat("HW_Tee_009_F"):
				case joaat("HW_Tee_009_M"):
					if (func_710(4267, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("HW_Tee_009_M"));
					break;
				
				case joaat("HW_Tee_010_F"):
				case joaat("HW_Tee_010_M"):
					if (func_710(4262, -1))
					{
						return 0;
					}
					if (func_710(27079, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("HW_Tee_010_M"));
					break;
				
				case joaat("HW_Tee_011_F"):
				case joaat("HW_Tee_011_M"):
					if (func_710(4263, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("HW_Tee_011_M"));
					break;
				
				case joaat("HW_Tee_012_F"):
				case joaat("HW_Tee_012_M"):
					if (func_710(4266, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("HW_Tee_012_M"));
					break;
			}
			break;
		
		case joaat("mpLowrider_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Bennys_000_M"):
				case joaat("MP_Bennys_001_M"):
					if (func_437(2934, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Bennys_001_M"))
					{
						if (func_710(27068, -1))
						{
							return 0;
						}
					}
					return !func_706(iParam2, iParam1, 1);
					break;
				
				case joaat("MP_Bennys_000_F"):
				case joaat("MP_Bennys_001_F"):
					if (func_437(2934, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Bennys_001_F"))
					{
						if (func_710(27068, -1))
						{
							return 0;
						}
					}
					return !func_706(iParam2, iParam1, 0);
					break;
			}
			break;
		
		case joaat("mpxmas_604490_overlays"):
			switch (iParam1)
			{
				case joaat("MP_IHeartLC_000_M"):
				case joaat("MP_IHeartLC_001_F"):
					if (func_710(113, -1))
					{
						return 0;
					}
					return !func_706(iParam2, iParam1, iParam1 == joaat("MP_IHeartLC_000_M"));
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
						if (func_710(27082, -1))
						{
							return 0;
						}
						if (func_710(3770, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_005"))
					{
						if (func_710(3771, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_006"))
					{
						if (func_710(3772, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_007"))
					{
						if (func_710(3773, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_008"))
					{
						if (func_710(3774, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_009"))
					{
						if (func_710(3775, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_010"))
					{
						if (func_710(3776, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_011"))
					{
						if (func_710(3777, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_012"))
					{
						if (func_710(3778, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_013"))
					{
						if (func_710(3779, -1) || func_710(27084, -1))
						{
							return 0;
						}
					}
					return !func_706(iParam2, iParam1, 1);
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
						if (func_710(3770, -1))
						{
							return 0;
						}
						if (func_710(27082, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_005"))
					{
						if (func_710(3771, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_006"))
					{
						if (func_710(3772, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_007"))
					{
						if (func_710(3773, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_008"))
					{
						if (func_710(3774, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_009"))
					{
						if (func_710(3775, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_010"))
					{
						if (func_710(3776, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_011"))
					{
						if (func_710(3777, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_012"))
					{
						if (func_710(3778, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_013"))
					{
						if (func_710(3779, -1) || func_710(27083, -1))
						{
							return 0;
						}
					}
					return !func_706(iParam2, iParam1, 0);
					break;
				
				case joaat("MP_Elite_M_Tshirt"):
				case joaat("MP_Elite_M_Tshirt_1"):
				case joaat("MP_Elite_F_Tshirt"):
				case joaat("MP_Elite_F_Tshirt_1"):
					if ((((func_710(3765, -1) && func_710(3766, -1)) && func_710(3767, -1)) && func_710(3768, -1)) && func_710(3769, -1))
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
					return !func_710(3593, -1);
					break;
			}
			if (!Global_262145.f_8259 && !func_706(iParam2, iParam1, 0))
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
					return (!func_840(152, -1) && !func_710(9440, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_003"):
				case joaat("FM_Hip_F_Retro_003"):
					return (!func_840(151, -1) && !func_710(9430, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_000"):
				case joaat("FM_Hip_F_Retro_000"):
					return (!func_694(iParam2, -1) && !func_710(9426, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_001"):
				case joaat("FM_Hip_F_Retro_001"):
					return (!func_694(iParam2, -1) && !func_710(9427, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_002"):
				case joaat("FM_Hip_F_Retro_002"):
					return (!func_694(iParam2, -1) && !func_710(9428, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_004"):
				case joaat("FM_Hip_F_Retro_004"):
					return (!func_694(iParam2, -1) && !func_710(9431, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_005"):
				case joaat("FM_Hip_F_Retro_005"):
					return (!func_694(iParam2, -1) && !func_710(9432, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_006"):
				case joaat("FM_Hip_F_Retro_006"):
					return (!func_694(iParam2, -1) && !func_710(9433, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_007"):
				case joaat("FM_Hip_F_Retro_007"):
					return (!func_694(iParam2, -1) && !func_710(9439, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_008"):
				case joaat("FM_Hip_F_Retro_008"):
					return (!func_694(iParam2, -1) && !func_710(9434, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_009"):
				case joaat("FM_Hip_F_Retro_009"):
					return (!func_694(iParam2, -1) && !func_710(9435, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_011"):
				case joaat("FM_Hip_F_Retro_011"):
					return (!func_694(iParam2, -1) && !func_710(9436, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_012"):
				case joaat("FM_Hip_F_Retro_012"):
					return (!func_694(iParam2, -1) && !func_710(9429, -1));
					break;
				
				case joaat("FM_Hip_M_Retro_013"):
				case joaat("FM_Hip_F_Retro_013"):
					return (!func_694(iParam2, -1) && !func_710(9437, -1));
					break;
				
				case joaat("FM_Rstar_M_Tshirt_000"):
				case joaat("FM_Rstar_M_Tshirt_001"):
				case joaat("FM_Rstar_M_Tshirt_002"):
				case joaat("FM_Rstar_F_Tshirt_000"):
				case joaat("FM_Rstar_F_Tshirt_001"):
				case joaat("FM_Rstar_F_Tshirt_002"):
					return !func_693();
					break;
			}
			break;
		
		case joaat("mpvalentines_overlays"):
			if ((!Global_262145.f_7059 && !func_694(iParam2, -1)) && !Global_262145.f_12034)
			{
				return 1;
			}
			break;
		
		case joaat("mpPilot_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Fli_M_Tshirt_000"):
				case joaat("MP_Fli_F_Tshirt_000"):
					return !func_710(3608, -1);
					break;
			}
			break;
		
		case joaat("mpLTS_overlays"):
			switch (iParam1)
			{
				case joaat("FM_LTS_M_Tshirt_000"):
				case joaat("FM_LTS_F_Tshirt_000"):
					return (!func_710(3615, -1) && !func_710(9438, -1));
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
					return !func_710(3783, -1);
					break;
				
				case joaat("MP_FAKE_DIS_001_M"):
				case joaat("MP_FAKE_DIS_001_F"):
					return !func_710(3784, -1);
					break;
				
				case joaat("MP_FAKE_DS_000_M"):
				case joaat("MP_FAKE_DS_000_F"):
					return !func_710(3785, -1);
					break;
				
				case joaat("MP_FAKE_ENEMA_000_M"):
				case joaat("MP_FAKE_ENEMA_000_F"):
					return !func_710(3786, -1);
					break;
				
				case joaat("MP_FAKE_LB_000_M"):
				case joaat("MP_FAKE_LB_000_F"):
					return !func_710(3787, -1);
					break;
				
				case joaat("MP_FAKE_LC_000_M"):
				case joaat("MP_FAKE_LC_000_F"):
					return !func_710(3788, -1);
					break;
				
				case joaat("MP_FAKE_SC_000_M"):
				case joaat("MP_FAKE_SC_000_F"):
					if (func_710(27081, -1))
					{
						return 0;
					}
					return !func_710(3789, -1);
					break;
				
				case joaat("MP_FAKE_Vap_000_M"):
				case joaat("MP_FAKE_Vap_000_F"):
					return !func_710(3790, -1);
					break;
				
				case joaat("MP_FAKE_Per_000_M"):
				case joaat("MP_FAKE_Per_000_F"):
					return !func_710(3791, -1);
					break;
				
				case joaat("MP_FAKE_SN_000_M"):
				case joaat("MP_FAKE_SN_000_F"):
					return !func_710(3792, -1);
					break;
				
				case joaat("MP_FILM_000_F"):
				case joaat("MP_FILM_000_M"):
					if (iParam1 == joaat("MP_FILM_000_F"))
					{
						iVar0 = func_437(2444, -1, 0);
						if (BitTest(iVar0, 0))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_000_M"))
					{
						iVar1 = func_437(2424, -1, 0);
						if (BitTest(iVar1, 18))
						{
							return 0;
						}
					}
					return !func_710(3793, -1);
					break;
				
				case joaat("MP_FILM_001_F"):
				case joaat("MP_FILM_001_M"):
					if (iParam1 == joaat("MP_FILM_001_F"))
					{
						iVar2 = func_437(2444, -1, 0);
						if (BitTest(iVar2, 1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_001_M"))
					{
						iVar3 = func_437(2424, -1, 0);
						if (BitTest(iVar3, 19))
						{
							return 0;
						}
					}
					return !func_710(3794, -1);
					break;
				
				case joaat("MP_FILM_002_F"):
				case joaat("MP_FILM_002_M"):
					if (iParam1 == joaat("MP_FILM_002_F"))
					{
						iVar4 = func_437(2444, -1, 0);
						if (BitTest(iVar4, 2))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_002_M"))
					{
						iVar5 = func_437(2424, -1, 0);
						if (BitTest(iVar5, 20))
						{
							return 0;
						}
					}
					return !func_710(3795, -1);
					break;
				
				case joaat("MP_FILM_003_F"):
				case joaat("MP_FILM_003_M"):
					if (iParam1 == joaat("MP_FILM_003_F"))
					{
						iVar6 = func_437(2444, -1, 0);
						if (BitTest(iVar6, 3))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_003_M"))
					{
						iVar7 = func_437(2424, -1, 0);
						if (BitTest(iVar7, 21))
						{
							return 0;
						}
					}
					return !func_710(3796, -1);
					break;
				
				case joaat("MP_FILM_004_F"):
				case joaat("MP_FILM_004_M"):
					if (iParam1 == joaat("MP_FILM_004_F"))
					{
						iVar8 = func_437(2444, -1, 0);
						if (BitTest(iVar8, 4))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_004_M"))
					{
						iVar9 = func_437(2424, -1, 0);
						if (BitTest(iVar9, 22))
						{
							return 0;
						}
					}
					return !func_710(3797, -1);
					break;
				
				case joaat("MP_FILM_005_F"):
				case joaat("MP_FILM_005_M"):
					if (iParam1 == joaat("MP_FILM_005_F"))
					{
						iVar10 = func_437(2444, -1, 0);
						if (BitTest(iVar10, 5))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_005_M"))
					{
						iVar11 = func_437(2424, -1, 0);
						if (BitTest(iVar11, 23))
						{
							return 0;
						}
					}
					return !func_710(3798, -1);
					break;
				
				case joaat("MP_FILM_006_F"):
				case joaat("MP_FILM_006_M"):
					if (iParam1 == joaat("MP_FILM_006_F"))
					{
						iVar12 = func_437(2444, -1, 0);
						if (BitTest(iVar12, 6))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_006_M"))
					{
						iVar13 = func_437(2424, -1, 0);
						if (BitTest(iVar13, 24))
						{
							return 0;
						}
					}
					return !func_710(3799, -1);
					break;
				
				case joaat("MP_FILM_007_F"):
				case joaat("MP_FILM_007_M"):
					if (iParam1 == joaat("MP_FILM_007_F"))
					{
						iVar14 = func_437(2444, -1, 0);
						if (BitTest(iVar14, 7))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_007_M"))
					{
						iVar15 = func_437(2424, -1, 0);
						if (BitTest(iVar15, 25))
						{
							return 0;
						}
					}
					return !func_710(3800, -1);
					break;
				
				case joaat("MP_FILM_008_F"):
				case joaat("MP_FILM_008_M"):
					if (iParam1 == joaat("MP_FILM_008_F"))
					{
						iVar16 = func_437(2444, -1, 0);
						if (BitTest(iVar16, 8))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_008_M"))
					{
						iVar17 = func_437(2424, -1, 0);
						if (BitTest(iVar17, 26))
						{
							return 0;
						}
					}
					return !func_710(3801, -1);
					break;
				
				case joaat("MP_FILM_009_F"):
				case joaat("MP_FILM_009_M"):
					if (iParam1 == joaat("MP_FILM_009_F"))
					{
						iVar18 = func_437(2444, -1, 0);
						if (BitTest(iVar18, 9))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_009_M"))
					{
						iVar19 = func_437(2424, -1, 0);
						if (BitTest(iVar19, 27))
						{
							return 0;
						}
					}
					return !func_710(3802, -1);
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
					return !func_692();
					break;
			}
			break;
	}
	return 0;
}

int func_692()
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

bool func_693()
{
	return unk_0x087611B922B50F13(-1762644250);
}

int func_694(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (func_697(iParam0) == 14192)
	{
		return 0;
	}
	uVar0 = func_696(iParam0, iParam1);
	iVar1 = iParam0;
	return BitTest(uVar0, func_695(iVar1));
}

int func_695(int iParam0)
{
	return (iParam0 % 32);
}

int func_696(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_437(func_697(uParam0), iParam1, 0);
	return iVar0;
}

int func_697(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_699(iVar0);
	if ((func_221() == 0 || func_698() == 0) || (func_221() == 999 && func_698() == 999))
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

int func_698()
{
	return Global_32164;
}

int func_699(int iParam0)
{
	return (iParam0 / 32);
}

int func_700(int iParam0, bool bParam1)
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
		if (!func_702(iVar2) || iParam0)
		{
			if (!func_701(unk_0x259BE71D8A81D4FA(), iVar2, 0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_701(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	if (iParam0 != func_59())
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

int func_702(int iParam0)
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

int func_703(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2850651[iParam0 /*3*/][func_438(iParam1)];
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_704(int iParam0, int iParam1, int iParam2)
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

int func_705(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2850194[iParam0 /*3*/][func_438(iParam1)];
	if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_706(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		if (bParam2)
		{
			iParam0 = func_709(iParam1, 3);
		}
		else
		{
			iParam0 = func_709(iParam1, 4);
		}
	}
	return (func_694(iParam0, -1) || func_707(iParam0, -1));
}

bool func_707(int iParam0, int iParam1)
{
	return func_710(func_708(iParam0), iParam1);
}

int func_708(int iParam0)
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

int func_709(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xE80EBC1CABE1C8A7(iParam1, -1, iParam0);
	if (iVar0 != -1)
	{
		return (129 + iVar0);
	}
	return -1;
}

bool func_710(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_58();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

int func_711(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	if (iParam4 == 0)
	{
		iVar1 = func_713(iVar0, sParam1, iParam4);
		iParam4 = unk_0x70E57E9927B6BA58(func_712(iVar1));
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
							if (func_721(13, -1))
							{
								return 0;
							}
							else if (func_721(14, -1))
							{
								return 0;
							}
							else if (func_721(15, -1))
							{
								return 0;
							}
							else if (func_721(16, -1))
							{
								return 0;
							}
							else if (func_721(71, -1))
							{
								return 0;
							}
							else if (func_721(72, -1))
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
							if (func_721(13, -1))
							{
								return 0;
							}
							else if (func_721(14, -1))
							{
								return 0;
							}
							else if (func_721(15, -1))
							{
								return 0;
							}
							else if (func_721(16, -1))
							{
								return 0;
							}
							else if (func_721(71, -1))
							{
								return 0;
							}
							else if (func_721(72, -1))
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
							if (func_721(13, -1))
							{
							}
							else if (func_721(14, -1))
							{
								return 0;
							}
							else if (func_721(15, -1))
							{
								return 0;
							}
							else if (func_721(16, -1))
							{
							}
							else if (func_721(71, -1))
							{
								return 0;
							}
							else if (func_721(72, -1))
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
							if (func_721(13, -1))
							{
							}
							else if (func_721(14, -1))
							{
							}
							else if (func_721(15, -1))
							{
							}
							else if (func_721(16, -1))
							{
							}
							else if (func_721(71, -1))
							{
							}
							else if (func_721(72, -1))
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
						if (func_721(13, -1))
						{
						}
						else if (func_721(14, -1))
						{
						}
						else if (func_721(15, -1))
						{
							return 0;
						}
						else if (func_721(16, -1))
						{
						}
						else if (func_721(71, -1))
						{
						}
						else if (func_721(72, -1))
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
							if (func_721(15, -1))
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
						if (func_721(13, -1))
						{
							return 0;
						}
						else if (func_721(14, -1))
						{
							return 0;
						}
						else if (func_721(15, -1))
						{
							if (!unk_0x1B79E937E91F40C3(sParam1, "TAT_FMM_CLB"))
							{
								return 0;
							}
						}
						else if (func_721(16, -1))
						{
						}
						else if (func_721(71, -1))
						{
						}
						else if (func_721(72, -1))
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
							if (func_721(13, -1))
							{
							}
							else if (func_721(14, -1))
							{
							}
							else if (func_721(15, -1))
							{
							}
							else if (func_721(16, -1))
							{
							}
							else if (func_721(71, -1))
							{
							}
							else if (func_721(72, -1))
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

char* func_712(int iParam0)
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

int func_713(int iParam0, char* sParam1, int iParam2)
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

bool func_714(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	func_720(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
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
					func_720(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
				
				case 1:
					func_720(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
				
				case 2:
					func_720(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
				
				case 3:
					func_720(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
				
				case 4:
					func_720(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
				
				case 5:
					func_720(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
				
				case 6:
					func_720(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
				
				case 7:
					func_720(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
				
				case 8:
					func_720(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
				
				case 9:
					if (func_719() || func_718())
					{
						iVar1 = 400;
						if (func_692() && (func_717() || func_716()))
						{
							iVar1 = 0;
						}
						func_720(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
					}
					break;
				
				case 10:
					func_720(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
				
				case 11:
					func_720(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
				
				case 12:
					func_720(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
				
				case 13:
					func_720(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
				
				case 14:
					func_720(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
				
				case 15:
					func_720(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
				
				case 16:
					func_720(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
				
				case 17:
					func_720(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
				
				case 18:
					func_720(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
				
				case 19:
					func_720(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
				
				case 20:
					func_720(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
				
				default:
					func_715(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_719() || func_718())
					{
						iVar1 = 450;
						if (func_692() && (func_717() || func_716()))
						{
							iVar1 = 0;
						}
						func_720(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
					}
					break;
				
				case 1:
					func_720(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
				
				case 2:
					func_720(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
				
				case 3:
					func_720(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
				
				case 4:
					func_720(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
				
				case 5:
					func_720(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
				
				case 6:
					func_720(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
				
				case 7:
					func_720(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
				
				case 8:
					func_720(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
				
				case 9:
					func_720(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
				
				case 10:
					func_720(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
				
				case 11:
					func_720(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
				
				case 12:
					func_720(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
				
				case 13:
					func_720(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
				
				case 14:
					func_720(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
				
				case 15:
					func_720(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
				
				case 16:
					func_720(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
				
				case 17:
					func_720(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
				
				case 18:
					break;
				
				case 19:
					break;
				
				
}